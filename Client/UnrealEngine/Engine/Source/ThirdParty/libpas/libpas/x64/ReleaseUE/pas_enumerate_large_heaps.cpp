// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 4

// pas_enumerate_large_heaps @ 140daa0b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl pas_enumerate_large_heaps(pas_enumerator *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  void *pvVar3;
  void *pvVar4;
  code *pcVar5;
  ulonglong uVar6;
  void **ppvVar7;
  void *pvVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 uVar11;
  void **ppvVar12;
  ulonglong uVar13;
  void *pvVar14;
  void *pvVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  void *pvVar18;
  void *pvVar19;
  undefined1 auStack_178 [32];
  void *local_158;
  void *local_150;
  void *local_148;
  void *local_140;
  void *local_138;
  void *local_130;
  pas_range local_128;
  ulonglong local_118;
  void *pvStack_110;
  void *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong lStack_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStack_178;
  local_78 = 0;
  lStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = (void *)0x0;
  uStack_100 = 0;
  local_118 = 0;
  pvStack_110 = (void *)0x0;
  local_68 = 0;
  bVar10 = pas_enumerable_range_list_iterate_remote
                     (param_1->root->large_heap_physical_page_sharing_cache_page_list,param_1,
                      range_list_iterate_add_large_payload_callback,&local_118);
  if (bVar10) {
    if (local_118 != 0) {
      local_158 = (void *)0x0;
      pvVar14 = (void *)0x0;
LAB_140daa1a3:
      pvVar8 = local_108;
      pvVar15 = pvStack_110;
      if (local_68 == -10) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      uVar1 = local_118 - 1;
      if (local_68 + 10U <= uVar1) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      local_130 = pvStack_110;
      local_140 = local_108;
      ppvVar7 = (void **)(lStack_70 + -0x98);
      if (local_118 < 0xb) {
        ppvVar7 = &local_108;
      }
      ppvVar12 = (void **)(lStack_70 + -0xa0);
      if (local_118 < 0xb) {
        ppvVar12 = &pvStack_110;
      }
      ppvVar12 = ppvVar12 + uVar1 * 2;
      local_148 = *ppvVar12;
      pvVar3 = ppvVar7[uVar1 * 2];
      *ppvVar12 = (void *)0x0;
      ppvVar12[1] = (void *)0x0;
      local_150 = pvVar14;
      if (local_68 == -10) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      pvStack_110 = (void *)0x0;
      local_108 = (void *)0x0;
      if (local_118 != 1) {
        uVar16 = 1;
        do {
          lVar9 = lStack_70;
          uVar6 = uVar16 * 2;
          uVar17 = uVar16 * 2 + 1;
          local_138 = pvVar3;
          if (uVar6 < uVar1) {
            if (local_68 + 10U <= uVar6) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              local_118 = uVar1;
              (*pcVar5)();
            }
            ppvVar7 = (void **)(lStack_70 + -0xa0);
            if (uVar17 < 0xb) {
              ppvVar7 = &pvStack_110;
            }
            pvVar19 = ppvVar7[uVar16 * 4];
            ppvVar7 = (void **)(lStack_70 + -0x98);
            if (uVar17 < 0xb) {
              ppvVar7 = &local_108;
            }
            pvVar18 = ppvVar7[uVar16 * 4];
            bVar10 = local_148 <= pvVar19;
          }
          else {
            if (uVar1 < uVar6) goto LAB_140daa3dc;
            bVar10 = true;
            pvVar18 = (void *)0x0;
            pvVar19 = (void *)0x0;
          }
          if (uVar6 == 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            local_118 = uVar1;
            (*pcVar5)();
          }
          uVar2 = uVar6 - 1;
          uVar13 = local_68 + 10;
          if (uVar13 <= uVar2) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            local_118 = uVar1;
            (*pcVar5)();
          }
          ppvVar7 = (void **)(lStack_70 + -0xa0);
          if (uVar6 < 0xb) {
            ppvVar7 = &pvStack_110;
          }
          pvVar4 = ppvVar7[uVar2 * 2];
          ppvVar7 = (void **)(lStack_70 + -0x98);
          if (uVar6 < 0xb) {
            ppvVar7 = &local_108;
          }
          if (bVar10) {
            if (local_148 <= pvVar4) goto LAB_140daa3dc;
LAB_140daa3a7:
            uVar17 = uVar6;
            pvVar18 = ppvVar7[uVar2 * 2];
            pvVar19 = pvVar4;
            if (uVar13 <= uVar16 - 1) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              local_118 = uVar1;
              (*pcVar5)();
            }
          }
          else {
            if ((pvVar4 < local_148) && (pvVar4 <= pvVar19)) goto LAB_140daa3a7;
            if (uVar13 <= uVar16 - 1) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              local_118 = uVar1;
              (*pcVar5)();
            }
          }
          ppvVar7 = (void **)(lStack_70 + -0xa0);
          if (uVar16 < 0xb) {
            ppvVar7 = &pvStack_110;
          }
          ppvVar7[(uVar16 - 1) * 2] = pvVar19;
          ppvVar7 = (void **)(lVar9 + -0x98);
          if (uVar16 < 0xb) {
            ppvVar7 = &local_108;
          }
          ppvVar7[(uVar16 - 1) * 2] = pvVar18;
          uVar16 = uVar17;
        } while( true );
      }
      goto LAB_140daa42a;
    }
    local_158 = (void *)0x0;
    pvVar14 = (void *)0x0;
LAB_140daa4d7:
    local_128.begin = (ulong64)local_158;
    local_128.end = (ulong64)pvVar14;
    record_span(param_1,&local_128);
    if ((param_1->record_object == pas_enumerator_do_not_record_object_records) ||
       (bVar10 = enumerate_large_map(param_1), bVar10)) {
      if ((local_60 ^ (ulonglong)auStack_178) == __security_cookie.value) {
        return true;
      }
      goto LAB_140daa51e;
    }
  }
  if ((local_60 ^ (ulonglong)auStack_178) == __security_cookie.value) {
    return false;
  }
LAB_140daa51e:
  pcVar5 = (code *)swi(3);
  uVar11 = (*pcVar5)();
  return (bool)uVar11;
LAB_140daa3dc:
  uVar17 = uVar16 - 1;
  if (local_68 + 10U <= uVar17) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    local_118 = uVar1;
    (*pcVar5)();
  }
  ppvVar7 = (void **)(lStack_70 + -0xa0);
  if (uVar16 < 0xb) {
    ppvVar7 = &pvStack_110;
  }
  ppvVar7[uVar17 * 2] = local_148;
  ppvVar7 = (void **)(lVar9 + -0x98);
  if (uVar16 < 0xb) {
    ppvVar7 = &local_108;
  }
  ppvVar7[uVar17 * 2] = pvVar3;
LAB_140daa42a:
  local_118 = uVar1;
  if (pvVar15 == pvVar8) goto LAB_140daa4d7;
  if (pvVar15 < pvVar8) {
    do {
      while( true ) {
        if (pvVar15 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          pas_assertion_failed_no_inline
                    ("src\\libpas\\pas_enumerate_large_heaps.c",0x6a,
                     "_Bool __cdecl pas_enumerate_large_heaps(pas_enumerator *)","page");
        }
        bVar10 = pas_enumerator_exclude_accounted_page(param_1,pvVar15);
        if (!bVar10) break;
        if (pvVar15 != local_150) {
          local_128.begin = (ulong64)local_158;
          local_128.end = (ulong64)local_150;
          record_span(param_1,&local_128);
          local_158 = pvVar15;
        }
        pvVar15 = (void *)((longlong)pvVar15 + param_1->root->page_malloc_alignment);
        local_150 = pvVar15;
        if (local_140 <= pvVar15) goto LAB_140daa190;
      }
      pvVar15 = (void *)((longlong)pvVar15 + param_1->root->page_malloc_alignment);
    } while (pvVar15 < local_140);
  }
LAB_140daa190:
  pvVar14 = local_150;
  if (local_118 == 0) goto LAB_140daa4d7;
  goto LAB_140daa1a3;
}

// range_list_iterate_add_large_payload_callback @ 140daa590

bool __cdecl
range_list_iterate_add_large_payload_callback
          (pas_enumerator *param_1,pas_range *param_2,void *param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  code *pcVar5;
  void *_Dst;
  ulonglong *puVar6;
  void *pvVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  
  uVar2 = param_2->begin;
  uVar3 = param_2->end;
  if (uVar2 == uVar3) {
                    /* WARNING: Subroutine does not return */
    pas_assertion_failed_no_inline
              ("src\\libpas\\pas_enumerate_large_heaps.c",0x2d,
               "_Bool __cdecl range_list_iterate_add_large_payload_callback(pas_enumerator *, pas_range, void *)"
               ,"!pas_range_is_empty(range)");
  }
  uVar9 = *(ulonglong *)param_3;
  uVar12 = *(ulonglong *)((longlong)param_3 + 0xb0);
  uVar8 = uVar12 + 10;
  if (uVar8 <= uVar9) {
    if (uVar9 != uVar8) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    uVar10 = 4;
    if (4 < uVar12 * 2) {
      uVar10 = uVar12 * 2;
    }
    if (uVar10 <= uVar12) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    _Dst = (*(param_1->allocation_config).allocate)
                     (uVar10 << 4,"pas_range_begin_min_heap/outline_array",pas_object_allocation,
                      (param_1->allocation_config).arg);
    uVar8 = uVar10 + 10;
    if (uVar8 <= uVar9) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    memset(_Dst,0,uVar10 << 4);
    if (*(void **)((longlong)param_3 + 0xa8) == (void *)0x0) {
      pvVar7 = (void *)0x0;
    }
    else {
      memcpy(_Dst,*(void **)((longlong)param_3 + 0xa8),uVar9 * 0x10 - 0xa0);
      pvVar7 = *(void **)((longlong)param_3 + 0xa8);
    }
    (*(param_1->allocation_config).deallocate)
              (pvVar7,uVar12 << 4,pas_object_allocation,(param_1->allocation_config).arg);
    *(void **)((longlong)param_3 + 0xa8) = _Dst;
    *(ulonglong *)((longlong)param_3 + 0xb0) = uVar10;
  }
  if (uVar8 <= uVar9) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  uVar8 = uVar9 + 1;
  if (uVar9 < 10) {
    puVar1 = (undefined8 *)((longlong)param_3 + uVar9 * 0x10 + 8);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(ulonglong *)param_3 = uVar8;
    if (uVar9 == 0) {
      uVar9 = 0;
      goto LAB_140daa6b2;
    }
  }
  else {
    puVar1 = (undefined8 *)(*(longlong *)((longlong)param_3 + 0xa8) + -0xa0 + uVar9 * 0x10);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(ulonglong *)param_3 = uVar8;
  }
  do {
    uVar9 = (uVar8 >> 1) - 1;
    uVar12 = *(longlong *)((longlong)param_3 + 0xb0) + 10;
    if (uVar12 <= uVar9) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    if (uVar8 < 0x16) {
      puVar6 = (ulonglong *)((longlong)param_3 + uVar9 * 0x10 + 8);
      uVar10 = *puVar6;
    }
    else {
      puVar6 = (ulonglong *)(uVar9 * 0x10 + *(longlong *)((longlong)param_3 + 0xa8) + -0xa0);
      uVar10 = *puVar6;
    }
    if (uVar10 <= uVar2) {
      uVar9 = uVar8 - 1;
      if (uVar12 <= uVar9) goto LAB_140daa7f8;
      if (uVar8 < 0xb) goto LAB_140daa797;
      puVar6 = (ulonglong *)(*(longlong *)((longlong)param_3 + 0xa8) + uVar9 * 0x10 + -0xa0);
      goto LAB_140daa7b9;
    }
    uVar10 = uVar8 - 1;
    if (uVar12 <= uVar10) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    if (uVar8 < 0xb) {
      puVar11 = (ulonglong *)((longlong)param_3 + uVar10 * 0x10 + 8);
    }
    else {
      puVar11 = (ulonglong *)(uVar10 * 0x10 + *(longlong *)((longlong)param_3 + 0xa8) + -0xa0);
    }
    uVar12 = puVar6[1];
    *puVar11 = *puVar6;
    puVar11[1] = uVar12;
    bVar4 = 3 < uVar8;
    uVar8 = uVar8 >> 1;
  } while (bVar4);
LAB_140daa6b2:
  if (*(longlong *)((longlong)param_3 + 0xb0) + 10U <= uVar9) {
LAB_140daa7f8:
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  uVar9 = 0;
LAB_140daa797:
  puVar6 = (ulonglong *)((longlong)param_3 + uVar9 * 0x10 + 8);
LAB_140daa7b9:
  *puVar6 = uVar2;
  puVar6[1] = uVar3;
  return true;
}

// record_span @ 140daa810

void __cdecl record_span(pas_enumerator *param_1,pas_range *param_2)

{
  void *pvVar1;
  code *pcVar2;
  
  pvVar1 = (void *)param_2->begin;
  if (pvVar1 <= (void *)param_2->end) {
    pas_enumerator_record
              (param_1,pvVar1,(longlong)param_2->end - (longlong)pvVar1,
               pas_enumerator_payload_record);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

// enumerate_large_map @ 140daa840

bool __cdecl enumerate_large_map(pas_enumerator *param_1)

{
  pas_large_map_hashtable *ppVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  
  ppVar1 = param_1->root->large_map_hashtable_instance;
  puVar3 = pas_enumerator_read(param_1,param_1->root->large_map_hashtable_instance_in_flux_stash,
                               0x20);
  if (puVar3 != (undefined8 *)0x0) {
    if ((pas_large_map_hashtable *)*puVar3 == ppVar1) {
      uVar6 = puVar3[2];
      pvVar5 = (void *)puVar3[1];
    }
    else {
      puVar4 = pas_enumerator_read(param_1,ppVar1,0x18);
      if (puVar4 == (undefined8 *)0x0) {
        return false;
      }
      uVar6 = (ulonglong)*(uint *)(puVar4 + 1);
      pvVar5 = (void *)*puVar4;
    }
    if (uVar6 == 0) {
      if (pvVar5 != (void *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      return true;
    }
    pvVar5 = pas_enumerator_read(param_1,pvVar5,uVar6 * 0x18);
    if (pvVar5 != (void *)0x0) {
      puVar4 = (undefined8 *)((longlong)pvVar5 + uVar6 * 0x18);
      do {
        puVar7 = puVar4 + -3;
        if ((puVar7 != (undefined8 *)puVar3[3]) && (puVar4[-2] != 0)) {
          pas_enumerator_record
                    (param_1,(void *)*puVar7,puVar4[-2] - (longlong)*puVar7,
                     pas_enumerator_object_record);
        }
        uVar6 = uVar6 - 1;
        puVar4 = puVar7;
      } while (uVar6 != 0);
      return true;
    }
  }
  return false;
}

