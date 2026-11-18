// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 3

// pas_enumerate_initially_unaccounted_pages @ 140da9d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl pas_enumerate_initially_unaccounted_pages(pas_enumerator *param_1)

{
  pas_allocation_config *ppVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  uint *puVar7;
  void *pvVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStack_88 [40];
  pas_ptr_worklist local_60;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_88;
  puVar5 = pas_enumerator_read(param_1,param_1->root->compact_heap_reservation_base,8);
  if ((puVar5 != (undefined8 *)0x0) &&
     (plVar6 = pas_enumerator_read(param_1,param_1->root->compact_heap_reservation_bump,8),
     plVar6 != (longlong *)0x0)) {
    uVar9 = param_1->root->page_malloc_alignment;
    if ((uVar9 ^ uVar9 - 1) <= uVar9 - 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    pas_enumerator_add_unaccounted_pages(param_1,(void *)*puVar5,-uVar9 & (*plVar6 + uVar9) - 1);
    bVar10 = false;
    bVar3 = pas_enumerable_range_list_iterate_remote
                      (param_1->root->enumerable_page_malloc_page_list,param_1,
                       range_list_iterate_add_unaccounted_callback,(void *)0x0);
    if (!bVar3) goto LAB_140da9ecb;
    bVar10 = false;
    bVar3 = pas_enumerable_range_list_iterate_remote
                      (param_1->root->payload_reservation_page_list,param_1,
                       range_list_iterate_exclude_accounted_callback,(void *)0x0);
    if (!bVar3) goto LAB_140da9ecb;
    puVar7 = pas_enumerator_read(param_1,param_1->root->large_sharing_tree,4);
    if ((puVar7 != (uint *)0x0) &&
       (puVar5 = pas_enumerator_read(param_1,param_1->root->large_sharing_tree_jettisoned_nodes,0x18
                                    ), puVar5 != (undefined8 *)0x0)) {
      pas_ptr_worklist_construct(&local_60);
      ppVar1 = &param_1->allocation_config;
      if ((ulonglong)*puVar7 == 0) {
        pvVar8 = (void *)0x0;
      }
      else {
        pvVar8 = (void *)((ulonglong)*puVar7 * 8 + (longlong)param_1->compact_heap_copy_base);
      }
      pas_ptr_worklist_push(&local_60,pvVar8,ppVar1);
      pvVar8 = pas_enumerator_read_compact(param_1,(void *)*puVar5);
      pas_ptr_worklist_push(&local_60,pvVar8,ppVar1);
      pvVar8 = pas_enumerator_read_compact(param_1,(void *)puVar5[1]);
      pas_ptr_worklist_push(&local_60,pvVar8,ppVar1);
      pvVar8 = pas_enumerator_read_compact(param_1,(void *)puVar5[2]);
      pas_ptr_worklist_push(&local_60,pvVar8,ppVar1);
      puVar7 = pas_ptr_worklist_pop(&local_60);
      bVar10 = true;
      if (puVar7 != (uint *)0x0) {
        do {
          if (((puVar7[3] & 2) == 0) && (*(longlong *)(puVar7 + 10) == 0)) {
            pvVar8 = *(void **)(puVar7 + 4);
            if (*(void **)(puVar7 + 6) < pvVar8) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            pas_enumerator_exclude_accounted_pages
                      (param_1,pvVar8,(longlong)*(void **)(puVar7 + 6) - (longlong)pvVar8);
            uVar9 = (ulonglong)*puVar7;
            if (uVar9 != 0) goto LAB_140da9fad;
LAB_140da9fe0:
            pvVar8 = (void *)0x0;
          }
          else {
            uVar9 = (ulonglong)*puVar7;
            if (uVar9 == 0) goto LAB_140da9fe0;
LAB_140da9fad:
            pvVar8 = (void *)(uVar9 * 8 + (longlong)param_1->compact_heap_copy_base);
          }
          pas_ptr_worklist_push(&local_60,pvVar8,ppVar1);
          if ((ulonglong)puVar7[1] == 0) {
            pvVar8 = (void *)0x0;
          }
          else {
            pvVar8 = (void *)((ulonglong)puVar7[1] * 8 + (longlong)param_1->compact_heap_copy_base);
          }
          pas_ptr_worklist_push(&local_60,pvVar8,ppVar1);
          puVar7 = pas_ptr_worklist_pop(&local_60);
        } while (puVar7 != (uint *)0x0);
      }
      goto LAB_140da9ecb;
    }
  }
  bVar10 = false;
LAB_140da9ecb:
  if ((local_30 ^ (ulonglong)auStack_88) != __security_cookie.value) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  return bVar10;
}

// range_list_iterate_add_unaccounted_callback @ 140daa010

bool __cdecl
range_list_iterate_add_unaccounted_callback
          (pas_enumerator *param_1,pas_range *param_2,void *param_3)

{
  void *pvVar1;
  code *pcVar2;
  
  if (param_3 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    pas_assertion_failed_no_inline
              ("src\\libpas\\pas_enumerate_initially_unaccounted_pages.c",0x29,
               "_Bool __cdecl range_list_iterate_add_unaccounted_callback(pas_enumerator *, pas_range, void *)"
               ,"!arg");
  }
  pvVar1 = (void *)param_2->begin;
  if (pvVar1 <= (void *)param_2->end) {
    pas_enumerator_add_unaccounted_pages(param_1,pvVar1,(longlong)param_2->end - (longlong)pvVar1);
    return true;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

// range_list_iterate_exclude_accounted_callback @ 140daa060

bool __cdecl
range_list_iterate_exclude_accounted_callback
          (pas_enumerator *param_1,pas_range *param_2,void *param_3)

{
  void *pvVar1;
  code *pcVar2;
  
  if (param_3 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    pas_assertion_failed_no_inline
              ("src\\libpas\\pas_enumerate_initially_unaccounted_pages.c",0x32,
               "_Bool __cdecl range_list_iterate_exclude_accounted_callback(pas_enumerator *, pas_range, void *)"
               ,"!arg");
  }
  pvVar1 = (void *)param_2->begin;
  if (pvVar1 <= (void *)param_2->end) {
    pas_enumerator_exclude_accounted_pages(param_1,pvVar1,(longlong)param_2->end - (longlong)pvVar1)
    ;
    return true;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

