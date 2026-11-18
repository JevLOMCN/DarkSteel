// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 7

// pas_page_base_header_size @ 140d809c0

ulong64 __cdecl pas_page_base_header_size(pas_page_base_config *param_1,pas_page_kind param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (param_1->page_config_kind == pas_page_config_kind_bitfit) {
    if (param_2 - pas_small_bitfit_page_kind < 3) {
      uVar2 = param_1->page_size;
      uVar3 = param_1->granule_size;
      if ((uVar2 | uVar3) >> 0x20 == 0) {
        uVar3 = (uVar2 & 0xffffffff) / (uVar3 & 0xffffffff);
      }
      else {
        uVar3 = uVar2 / uVar3;
      }
      lVar4 = uVar3 + 7;
      if (uVar3 == 1) {
        lVar4 = 1;
      }
      return (lVar4 + ((uVar2 >> (param_1->min_align_shift & 0x3f)) + 0x3f >> 2 & 0xfffffffffffffff0
                      ) & 0xfffffffffffffff8) + 0x10;
    }
    if (param_2 - pas_small_shared_segregated_page_kind < 4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_1->page_config_kind != pas_page_config_kind_segregated) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_2 - pas_small_shared_segregated_page_kind < 4) {
    uVar2 = param_1->page_size;
    uVar3 = param_1->granule_size;
    if ((uVar2 | uVar3) >> 0x20 == 0) {
      uVar2 = (uVar2 & 0xffffffff) / (uVar3 & 0xffffffff);
    }
    else {
      uVar2 = uVar2 / uVar3;
    }
    lVar4 = 4;
    if (uVar2 != 1) {
      lVar4 = uVar2 + 7;
    }
    return (lVar4 + (*(longlong *)&param_1[1].page_config_kind + 0x1fU >> 5) * 4 &
           0xfffffffffffffff8) + 0x2c;
  }
  if (param_2 - pas_small_bitfit_page_kind < 3) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_page_base_get_config @ 140d80ac0

pas_page_base_config * __cdecl pas_page_base_get_config(pas_page_base *param_1)

{
  code *pcVar1;
  pas_segregated_page_config *ppVar2;
  
  if (param_1->page_kind - 1 < 4) {
    ppVar2 = pas_segregated_view_get_page_config(*(pas_segregated_view_opaque **)(param_1 + 0x20));
    return &ppVar2->base;
  }
  if (2 < param_1->page_kind - 5) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  return pas_bitfit_page_config_kind_for_config_table
         [*(char *)((ulonglong)
                    ((uint)*(byte *)(pas_compact_heap_reservation_base + 10 +
                                    (ulonglong)*(uint *)(param_1 + 4) * 8) * 0x80000 +
                    (uint)*(ushort *)
                           (pas_compact_heap_reservation_base + 8 +
                           (ulonglong)*(uint *)(param_1 + 4) * 8) * 8) + 0x7c +
                   pas_compact_heap_reservation_base)];
}

// pas_page_base_get_granule_use_counts @ 140d80af0

uchar * __cdecl pas_page_base_get_granule_use_counts(pas_page_base *param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  pas_segregated_page_config *ppVar3;
  pas_bitfit_page_config *ppVar4;
  
  if (param_1->page_kind - 1 < 4) {
    ppVar3 = pas_segregated_page_get_config((pas_segregated_page *)param_1);
    if ((ppVar3->base).granule_size < (ppVar3->base).page_size) {
      return &param_1[(ppVar3->num_alloc_bits + 0x1f >> 5) * 4 + 0x2c].page_kind;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (2 < param_1->page_kind - 5) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  ppVar4 = pas_bitfit_page_get_config((pas_bitfit_page *)param_1);
  uVar1 = (ppVar4->base).page_size;
  if ((ppVar4->base).granule_size < uVar1) {
    return &param_1[((uVar1 >> ((ppVar4->base).min_align_shift & 0x3f)) + 0x3f >> 2 &
                    0xfffffffffffffff0) + 0x10].page_kind;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

// pas_page_base_compute_committed_when_owned @ 140d80b80

void __cdecl
pas_page_base_compute_committed_when_owned(pas_page_base *param_1,pas_heap_summary *param_2)

{
  code *pcVar1;
  longlong lVar2;
  pas_page_base *ppVar3;
  pas_segregated_page_config *ppVar4;
  pas_bitfit_page_config *ppVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulong64 uVar8;
  ulong64 uVar9;
  
  if (param_1->page_kind - 1 < 4) {
    ppVar4 = pas_segregated_page_get_config((pas_segregated_page *)param_1);
    uVar8 = (ppVar4->base).page_size;
    uVar9 = (ppVar4->base).granule_size;
    if (uVar8 != uVar9) {
LAB_140d80bd9:
      if (param_1->page_kind - 1 < 4) {
        ppVar4 = pas_segregated_page_get_config((pas_segregated_page *)param_1);
        if ((ppVar4->base).page_size <= (ppVar4->base).granule_size) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        lVar2 = (ppVar4->num_alloc_bits + 0x1f >> 5) * 4 + 0x2c;
      }
      else {
        if (2 < param_1->page_kind - 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        ppVar5 = pas_bitfit_page_get_config((pas_bitfit_page *)param_1);
        uVar6 = (ppVar5->base).page_size;
        if (uVar6 <= (ppVar5->base).granule_size) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        lVar2 = ((uVar6 >> ((ppVar5->base).min_align_shift & 0x3f)) + 0x3f >> 2 & 0xfffffffffffffff0
                ) + 0x10;
      }
      ppVar3 = param_1 + lVar2;
      if (uVar8 < uVar9) {
        return;
      }
      if ((uVar8 | uVar9) >> 0x20 == 0) {
        uVar6 = (uVar8 & 0xffffffff) / (uVar9 & 0xffffffff);
      }
      else {
        uVar6 = uVar8 / uVar9;
      }
      uVar7 = uVar6;
      if ((uVar6 & 1) != 0) {
        uVar7 = uVar6 - 1;
        (&param_2->committed)[ppVar3[uVar6 - 1].page_kind == 0xff] =
             (&param_2->committed)[ppVar3[uVar6 - 1].page_kind == 0xff] + uVar9;
      }
      if (uVar6 == 1) {
        return;
      }
      do {
        (&param_2->committed)[ppVar3[uVar7 - 1].page_kind == 0xff] =
             (&param_2->committed)[ppVar3[uVar7 - 1].page_kind == 0xff] + uVar9;
        (&param_2->committed)[ppVar3[uVar7 - 2].page_kind == 0xff] =
             (&param_2->committed)[ppVar3[uVar7 - 2].page_kind == 0xff] + uVar9;
        uVar7 = uVar7 - 2;
      } while (uVar7 != 0);
      return;
    }
  }
  else {
    if (2 < param_1->page_kind - 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    ppVar5 = pas_bitfit_page_get_config((pas_bitfit_page *)param_1);
    uVar8 = (ppVar5->base).page_size;
    uVar9 = (ppVar5->base).granule_size;
    if (uVar8 != uVar9) goto LAB_140d80bd9;
  }
  param_2->committed = param_2->committed + uVar8;
  return;
}

// pas_page_base_is_empty @ 140d80cf0

bool __cdecl pas_page_base_is_empty(pas_page_base *param_1)

{
  code *pcVar1;
  
  if (param_1->page_kind - 1 < 4) {
    return *(longlong *)(param_1 + 0x18) == 0;
  }
  if (param_1->page_kind - 5 < 3) {
    return *(short *)(param_1 + 2) == 0;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_page_base_add_free_range @ 140d80d20

void __cdecl
pas_page_base_add_free_range
          (pas_page_base *param_1,pas_heap_summary *param_2,pas_range *param_3,
          pas_free_range_kind param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  code *pcVar4;
  longlong lVar5;
  pas_segregated_page_config *ppVar6;
  pas_bitfit_page_config *ppVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  pas_heap_summary *ppVar11;
  ulonglong uVar12;
  pas_heap_summary *unaff_R12;
  pas_heap_summary *unaff_R15;
  bool bVar13;
  ulong64 local_40;
  
  if (param_3->begin == param_3->end) {
    return;
  }
  if (param_3->end <= param_3->begin) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if (param_1->page_kind - 1 < 4) {
    ppVar6 = pas_segregated_page_get_config((pas_segregated_page *)param_1);
    uVar8 = (ppVar6->base).page_size;
    uVar9 = param_3->end;
    if (uVar8 < uVar9) {
LAB_140d80e0b:
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
  }
  else {
    if (2 < param_1->page_kind - 5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    ppVar6 = (pas_segregated_page_config *)pas_bitfit_page_get_config((pas_bitfit_page *)param_1);
    uVar8 = (ppVar6->base).page_size;
    uVar9 = param_3->end;
    if (uVar8 < uVar9) goto LAB_140d80e0b;
  }
  uVar1 = (ppVar6->base).granule_size;
  if (param_1->page_kind - 1 < 4) {
    bVar13 = *(longlong *)(param_1 + 0x18) == 0;
  }
  else {
    if (2 < param_1->page_kind - 5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    bVar13 = *(short *)(param_1 + 2) == 0;
  }
  if (param_4 == pas_free_meta_range) {
    local_40 = 0;
    if (uVar9 < param_3->begin) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    param_2->meta = param_2->meta + (uVar9 - param_3->begin);
    unaff_R12 = (pas_heap_summary *)&param_2->meta_ineligible_for_decommit;
    unaff_R15 = (pas_heap_summary *)&param_2->meta_eligible_for_decommit;
    param_2 = (pas_heap_summary *)&stack0xffffffffffffffc0;
  }
  else {
    local_40 = 0;
    if (param_4 == pas_free_object_range) {
      if (uVar9 < param_3->begin) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      param_2->free = param_2->free + (uVar9 - param_3->begin);
      unaff_R12 = (pas_heap_summary *)&param_2->free_ineligible_for_decommit;
      unaff_R15 = (pas_heap_summary *)&param_2->free_eligible_for_decommit;
      param_2 = (pas_heap_summary *)&param_2->free_decommitted;
    }
  }
  if (uVar8 == uVar1) {
    local_40 = 0;
    uVar8 = param_3->begin;
    uVar9 = param_3->end;
    if (bVar13) {
      unaff_R12 = unaff_R15;
      if (uVar9 < uVar8) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
    }
    else if (uVar9 < uVar8) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    unaff_R12->free = unaff_R12->free + (uVar9 - uVar8);
  }
  else {
    local_40 = 0;
    if (param_1->page_kind - 1 < 4) {
      ppVar6 = pas_segregated_page_get_config((pas_segregated_page *)param_1);
      if ((ppVar6->base).page_size <= (ppVar6->base).granule_size) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar5 = (ppVar6->num_alloc_bits + 0x1f >> 5) * 4 + 0x2c;
    }
    else {
      if (2 < param_1->page_kind - 5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      ppVar7 = pas_bitfit_page_get_config((pas_bitfit_page *)param_1);
      uVar8 = (ppVar7->base).page_size;
      if (uVar8 <= (ppVar7->base).granule_size) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar5 = ((uVar8 >> ((ppVar7->base).min_align_shift & 0x3f)) + 0x3f >> 2 & 0xfffffffffffffff0)
              + 0x10;
    }
    uVar8 = param_3->begin;
    if ((uVar8 | uVar1) >> 0x20 == 0) {
      uVar8 = (uVar8 & 0xffffffff) / (uVar1 & 0xffffffff);
    }
    else {
      uVar8 = uVar8 / uVar1;
    }
    uVar9 = param_3->end - 1;
    if ((uVar9 | uVar1) >> 0x20 == 0) {
      uVar9 = (uVar9 & 0xffffffff) / (uVar1 & 0xffffffff);
    }
    else {
      uVar9 = uVar9 / uVar1;
    }
    while (uVar8 <= uVar9) {
      uVar10 = (uVar8 + 1) * uVar1;
      uVar12 = uVar8 * uVar1;
      if (uVar10 < uVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      uVar2 = param_3->begin;
      uVar3 = param_3->end;
      if (uVar3 < uVar2) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      if ((uVar10 - uVar12 == 0) || (uVar2 == uVar3)) {
LAB_140d80fbc:
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      if (uVar3 <= uVar2) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      if ((uVar10 < uVar2 || uVar10 - uVar2 == 0) || (uVar3 <= uVar12)) goto LAB_140d80fbc;
      if (uVar3 < uVar10) {
        uVar10 = uVar3;
      }
      if (uVar12 < uVar2) {
        uVar12 = uVar2;
      }
      if (uVar10 < uVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      ppVar11 = unaff_R15;
      if (((param_1 + lVar5)[uVar8].page_kind != '\0') &&
         (ppVar11 = param_2, (param_1 + lVar5)[uVar8].page_kind != 0xff)) {
        ppVar11 = unaff_R12;
      }
      ppVar11->free = ppVar11->free + (uVar10 - uVar12);
      uVar8 = uVar8 + 1;
    }
  }
  return;
}

// pas_page_base_commit_with_boundary @ 140d80fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl pas_page_base_commit_with_boundary(void *param_1,pas_page_base_config *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [32];
  pas_commit_span local_48;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_68;
  pas_commit_span_construct(&local_48,param_2->heap_config_ptr->mmap_capability);
  if (param_2->page_size < param_2->granule_size) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    do {
      while( true ) {
        if ((param_2->non_committable_granule_bitvector == (uint *)0x0) ||
           ((param_2->non_committable_granule_bitvector[uVar4 >> 5] >> ((uint)uVar4 & 0x1f) & 1) ==
            0)) {
          pas_commit_span_add_to_change(&local_48,uVar4);
        }
        else {
          pas_commit_span_add_unchanged_and_commit(&local_48,param_1,uVar4,param_2);
        }
        uVar1 = param_2->page_size;
        uVar2 = param_2->granule_size;
        if ((uVar1 | uVar2) >> 0x20 != 0) break;
        uVar4 = uVar4 + 1;
        if ((uVar1 & 0xffffffff) / (uVar2 & 0xffffffff) <= uVar4) goto LAB_140d8109b;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1 / uVar2);
  }
LAB_140d8109b:
  pas_commit_span_add_unchanged_and_commit(&local_48,param_1,uVar4,param_2);
  if ((local_28 ^ (ulonglong)auStack_68) == __security_cookie.value) {
    return;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

