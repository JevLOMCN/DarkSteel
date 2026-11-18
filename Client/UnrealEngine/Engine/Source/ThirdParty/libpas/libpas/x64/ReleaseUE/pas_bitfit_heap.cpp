// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 6

// pas_bitfit_heap_create @ 140d73db0

pas_bitfit_heap * __cdecl
pas_bitfit_heap_create(pas_segregated_heap *param_1,pas_heap_config *param_2)

{
  pas_bitfit_directory *ppVar1;
  
  ppVar1 = pas_immortal_heap_allocate_with_alignment
                     (0x180,0x10,"pas_bitfit_heap",pas_object_allocation);
  pas_bitfit_directory_construct(ppVar1,&param_2->small_bitfit_config,param_1);
  pas_bitfit_directory_construct(ppVar1 + 1,&param_2->medium_bitfit_config,param_1);
  pas_bitfit_directory_construct(ppVar1 + 2,&param_2->marge_bitfit_config,param_1);
  return (pas_bitfit_heap *)ppVar1;
}

// pas_bitfit_heap_select_variant @ 140d73e40

pas_bitfit_variant_selection __cdecl
pas_bitfit_heap_select_variant
          (ulong64 param_1,pas_heap_config *param_2,pas_heap_runtime_config *param_3)

{
  bool bVar1;
  pas_bitfit_page_config_variant pVar2;
  code *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte bVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  lVar8 = param_1 - 1;
  bVar1 = (param_2->small_bitfit_config).base.is_enabled;
  if (pas_marge_bitfit_page_config_variant_is_enabled_override) {
    if (((bVar1 & 1U) != 0) && (param_3->max_bitfit_object_size != 0)) {
      bVar6 = (param_2->small_bitfit_config).base.min_align_shift;
      uVar7 = (param_2->small_bitfit_config).base.max_object_size;
      pVar2 = (param_2->small_bitfit_config).variant;
      bVar1 = pas_small_bitfit_page_config_variant_is_enabled_override;
      if (pVar2 == pas_small_bitfit_page_config_variant) {
joined_r0x000140d740ec:
        if (!bVar1) goto LAB_140d7412b;
      }
      else if (pVar2 != pas_marge_bitfit_page_config_variant) {
        bVar1 = pas_medium_bitfit_page_config_variant_is_enabled_override;
        if (pVar2 != pas_medium_bitfit_page_config_variant) goto LAB_140d74362;
        goto joined_r0x000140d740ec;
      }
      if ((ulonglong)(0xfeL << (bVar6 & 0x3f)) <= uVar7) goto LAB_140d7430d;
      if ((ulonglong)(0xfdL << (bVar6 & 0x3f)) < uVar7) goto LAB_140d7430f;
      lVar4 = 1L << (bVar6 & 0x3f);
      uVar5 = -lVar4 & lVar8 + lVar4;
      if (uVar5 <= uVar7) goto LAB_140d742af;
    }
LAB_140d7412b:
    if ((((param_2->medium_bitfit_config).base.is_enabled & 1U) != 0) &&
       (param_3->max_bitfit_object_size != 0)) {
      bVar6 = (param_2->medium_bitfit_config).base.min_align_shift;
      uVar7 = (param_2->medium_bitfit_config).base.max_object_size;
      pVar2 = (param_2->medium_bitfit_config).variant;
      bVar1 = pas_small_bitfit_page_config_variant_is_enabled_override;
      if (pVar2 == pas_small_bitfit_page_config_variant) {
joined_r0x000140d7416d:
        if (!bVar1) goto LAB_140d741ac;
      }
      else if (pVar2 != pas_marge_bitfit_page_config_variant) {
        bVar1 = pas_medium_bitfit_page_config_variant_is_enabled_override;
        if (pVar2 != pas_medium_bitfit_page_config_variant) goto LAB_140d74362;
        goto joined_r0x000140d7416d;
      }
      if ((ulonglong)(0xfeL << (bVar6 & 0x3f)) <= uVar7) goto LAB_140d7430d;
      if ((ulonglong)(0xfdL << (bVar6 & 0x3f)) < uVar7) goto LAB_140d7430f;
      lVar4 = 1L << (bVar6 & 0x3f);
      uVar5 = -lVar4 & lVar8 + lVar4;
      if (uVar5 <= uVar7) {
LAB_140d742fe:
        uVar7 = 0x100000000;
        goto LAB_140d74245;
      }
    }
LAB_140d741ac:
    if ((((param_2->marge_bitfit_config).base.is_enabled & 1U) == 0) ||
       (param_3->max_bitfit_object_size == 0)) goto LAB_140d7431a;
    bVar6 = (param_2->marge_bitfit_config).base.min_align_shift;
    uVar7 = (param_2->marge_bitfit_config).base.max_object_size;
    pVar2 = (param_2->marge_bitfit_config).variant;
    bVar1 = pas_small_bitfit_page_config_variant_is_enabled_override;
    if (pVar2 == pas_small_bitfit_page_config_variant) {
joined_r0x000140d741f9:
      if (!bVar1) goto LAB_140d7431a;
    }
    else if (pVar2 != pas_marge_bitfit_page_config_variant) {
      bVar1 = pas_medium_bitfit_page_config_variant_is_enabled_override;
      if (pVar2 != pas_medium_bitfit_page_config_variant) {
LAB_140d74362:
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      goto joined_r0x000140d741f9;
    }
    if ((ulonglong)(0xfeL << (bVar6 & 0x3f)) <= uVar7) {
LAB_140d7430d:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if ((ulonglong)(0xfdL << (bVar6 & 0x3f)) < uVar7) {
LAB_140d7430f:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
LAB_140d74221:
    lVar4 = 1L << (bVar6 & 0x3f);
    uVar5 = -lVar4 & lVar8 + lVar4;
    if (uVar7 < uVar5) {
LAB_140d7431a:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
  }
  else {
    if (pas_medium_bitfit_page_config_variant_is_enabled_override) {
      if ((((bVar1 & 1U) != 0) && (param_3->max_bitfit_object_size != 0)) &&
         (pVar2 = (param_2->small_bitfit_config).variant,
         pVar2 != pas_marge_bitfit_page_config_variant)) {
        bVar6 = (param_2->small_bitfit_config).base.min_align_shift;
        uVar7 = (param_2->small_bitfit_config).base.max_object_size;
        if (pVar2 != pas_medium_bitfit_page_config_variant) {
          if (pVar2 != pas_small_bitfit_page_config_variant) goto LAB_140d74362;
          if (!pas_small_bitfit_page_config_variant_is_enabled_override) goto LAB_140d73f35;
        }
        if ((ulonglong)(0xfeL << (bVar6 & 0x3f)) <= uVar7) goto LAB_140d7430d;
        if ((ulonglong)(0xfdL << (bVar6 & 0x3f)) < uVar7) goto LAB_140d7430f;
        lVar4 = 1L << (bVar6 & 0x3f);
        uVar5 = -lVar4 & lVar8 + lVar4;
        if (uVar5 <= uVar7) goto LAB_140d742af;
      }
LAB_140d73f35:
      if (((((param_2->medium_bitfit_config).base.is_enabled & 1U) != 0) &&
          (param_3->max_bitfit_object_size != 0)) &&
         (pVar2 = (param_2->medium_bitfit_config).variant,
         pVar2 != pas_marge_bitfit_page_config_variant)) {
        bVar6 = (param_2->medium_bitfit_config).base.min_align_shift;
        uVar7 = (param_2->medium_bitfit_config).base.max_object_size;
        if (pVar2 != pas_medium_bitfit_page_config_variant) {
          if (pVar2 != pas_small_bitfit_page_config_variant) goto LAB_140d74362;
          if (!pas_small_bitfit_page_config_variant_is_enabled_override) goto LAB_140d73fae;
        }
        if ((ulonglong)(0xfeL << (bVar6 & 0x3f)) <= uVar7) goto LAB_140d7430d;
        if ((ulonglong)(0xfdL << (bVar6 & 0x3f)) < uVar7) goto LAB_140d7430f;
        lVar4 = 1L << (bVar6 & 0x3f);
        uVar5 = -lVar4 & lVar8 + lVar4;
        if (uVar5 <= uVar7) goto LAB_140d742fe;
      }
LAB_140d73fae:
      if ((((param_2->marge_bitfit_config).base.is_enabled & 1U) == 0) ||
         (param_3->max_bitfit_object_size == 0)) goto LAB_140d7431a;
      bVar6 = (param_2->marge_bitfit_config).base.min_align_shift;
      uVar7 = (param_2->marge_bitfit_config).base.max_object_size;
      pVar2 = (param_2->marge_bitfit_config).variant;
      if (pVar2 == pas_small_bitfit_page_config_variant) {
        if (!pas_small_bitfit_page_config_variant_is_enabled_override) goto LAB_140d7431a;
      }
      else if (pVar2 != pas_medium_bitfit_page_config_variant) {
        if (pVar2 == pas_marge_bitfit_page_config_variant) goto LAB_140d7431a;
        goto LAB_140d74362;
      }
      if ((ulonglong)(0xfeL << (bVar6 & 0x3f)) <= uVar7) goto LAB_140d7430d;
      if ((ulonglong)(0xfdL << (bVar6 & 0x3f)) < uVar7) goto LAB_140d7430f;
      goto LAB_140d74221;
    }
    if (!pas_small_bitfit_page_config_variant_is_enabled_override) {
      if ((((((bVar1 & 1U) != 0) && (param_3->max_bitfit_object_size != 0)) &&
           (pas_marge_bitfit_page_config_variant < (param_2->small_bitfit_config).variant)) ||
          (((((param_2->medium_bitfit_config).base.is_enabled & 1U) != 0 &&
            (param_3->max_bitfit_object_size != 0)) &&
           (pas_marge_bitfit_page_config_variant < (param_2->medium_bitfit_config).variant)))) ||
         (((((param_2->marge_bitfit_config).base.is_enabled & 1U) != 0 &&
           (param_3->max_bitfit_object_size != 0)) &&
          (pas_marge_bitfit_page_config_variant < (param_2->marge_bitfit_config).variant))))
      goto LAB_140d74362;
      goto LAB_140d7431a;
    }
    if ((((bVar1 & 1U) != 0) && (param_3->max_bitfit_object_size != 0)) &&
       (pVar2 = (param_2->small_bitfit_config).variant,
       1 < pVar2 - pas_medium_bitfit_page_config_variant)) {
      if (pVar2 != pas_small_bitfit_page_config_variant) goto LAB_140d74362;
      bVar6 = (param_2->small_bitfit_config).base.min_align_shift;
      uVar7 = (param_2->small_bitfit_config).base.max_object_size;
      if ((ulonglong)(0xfeL << (bVar6 & 0x3f)) <= uVar7) goto LAB_140d7430d;
      if ((ulonglong)(0xfdL << (bVar6 & 0x3f)) < uVar7) goto LAB_140d7430f;
      lVar4 = 1L << (bVar6 & 0x3f);
      uVar5 = -lVar4 & lVar8 + lVar4;
      if (uVar7 < uVar5) goto LAB_140d74020;
LAB_140d742af:
      uVar7 = 0;
      goto LAB_140d74245;
    }
LAB_140d74020:
    if (((((param_2->medium_bitfit_config).base.is_enabled & 1U) != 0) &&
        (param_3->max_bitfit_object_size != 0)) &&
       (pVar2 = (param_2->medium_bitfit_config).variant,
       1 < pVar2 - pas_medium_bitfit_page_config_variant)) {
      if (pVar2 != pas_small_bitfit_page_config_variant) goto LAB_140d74362;
      bVar6 = (param_2->medium_bitfit_config).base.min_align_shift;
      uVar7 = (param_2->medium_bitfit_config).base.max_object_size;
      if ((ulonglong)(0xfeL << (bVar6 & 0x3f)) <= uVar7) goto LAB_140d7430d;
      if ((ulonglong)(0xfdL << (bVar6 & 0x3f)) < uVar7) goto LAB_140d7430f;
      lVar4 = 1L << (bVar6 & 0x3f);
      uVar5 = -lVar4 & lVar8 + lVar4;
      if (uVar7 < uVar5) goto LAB_140d74042;
      goto LAB_140d742fe;
    }
LAB_140d74042:
    if ((((param_2->marge_bitfit_config).base.is_enabled & 1U) == 0) ||
       (param_3->max_bitfit_object_size == 0)) goto LAB_140d7431a;
    pVar2 = (param_2->marge_bitfit_config).variant;
    if (pVar2 != pas_small_bitfit_page_config_variant) {
      if (pVar2 - pas_medium_bitfit_page_config_variant < 2) goto LAB_140d7431a;
      goto LAB_140d74362;
    }
    bVar6 = (param_2->marge_bitfit_config).base.min_align_shift;
    uVar7 = (param_2->marge_bitfit_config).base.max_object_size;
    if ((ulonglong)(0xfeL << (bVar6 & 0x3f)) <= uVar7) goto LAB_140d7430d;
    if ((ulonglong)(0xfdL << (bVar6 & 0x3f)) < uVar7) goto LAB_140d7430f;
    lVar4 = 1L << (bVar6 & 0x3f);
    uVar5 = -lVar4 & lVar8 + lVar4;
    if (uVar7 < uVar5) goto LAB_140d7431a;
  }
  uVar7 = 0x200000000;
LAB_140d74245:
  if (uVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if (uVar5 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  return (pas_bitfit_variant_selection)(uVar5 | uVar7);
}

// pas_bitfit_heap_construct_and_insert_size_class @ 140d74370

void __cdecl
pas_bitfit_heap_construct_and_insert_size_class
          (pas_bitfit_heap *param_1,pas_bitfit_size_class *param_2,uint param_3,
          pas_heap_config *param_4,pas_heap_runtime_config *param_5)

{
  code *pcVar1;
  BOOLEAN BVar2;
  pas_bitfit_variant_selection pVar3;
  pas_compact_atomic_bitfit_size_class_ptr *ppVar4;
  longlong lVar5;
  uint uVar6;
  pas_bitfit_directory *ppVar7;
  
  pVar3 = pas_bitfit_heap_select_variant((ulonglong)param_3,param_4,param_5);
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar2 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  ppVar7 = (pas_bitfit_directory *)
           ((longlong)&param_1->directories[0].first_unprocessed_free.value +
           ((ulonglong)pVar3 >> 0x19 & 0xffffffffffffff80));
  uVar6 = pVar3.object_size;
  ppVar4 = pas_bitfit_size_class_find_insertion_point(ppVar7,uVar6);
  if (ppVar4 != (pas_compact_atomic_bitfit_size_class_ptr *)0x0) {
    lVar5 = (ulonglong)ppVar4->payload * 8 + pas_compact_heap_reservation_base;
    if ((lVar5 != 0 && (ulonglong)ppVar4->payload != 0) && (uVar6 <= *(uint *)(lVar5 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    pas_bitfit_size_class_construct(param_2,uVar6,ppVar7,ppVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_bitfit_heap_compute_summary @ 140d74410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_heap_summary * __cdecl
pas_bitfit_heap_compute_summary(pas_heap_summary *__return_storage_ptr__,pas_bitfit_heap *param_1)

{
  ulong64 uVar1;
  code *pcVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  pas_heap_summary *ppVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_f8 [32];
  pas_heap_summary local_d8;
  ulonglong local_80;
  
  local_80 = __security_cookie.value ^ (ulonglong)auStack_f8;
  __return_storage_ptr__->free = 0;
  __return_storage_ptr__->allocated = 0;
  __return_storage_ptr__->meta_ineligible_for_decommit = 0;
  __return_storage_ptr__->meta_eligible_for_decommit = 0;
  __return_storage_ptr__->free_eligible_for_decommit = 0;
  __return_storage_ptr__->free_decommitted = 0;
  __return_storage_ptr__->decommitted = 0;
  __return_storage_ptr__->free_ineligible_for_decommit = 0;
  __return_storage_ptr__->meta = 0;
  __return_storage_ptr__->committed = 0;
  __return_storage_ptr__->cached = 0;
  uVar1 = __return_storage_ptr__->allocated;
  pas_bitfit_directory_compute_summary(&local_d8,param_1->directories);
  uVar4 = local_d8.cached;
  uVar3 = local_d8.free;
  lVar7 = uVar1 + local_d8.allocated;
  lVar9 = __return_storage_ptr__->meta + local_d8.meta;
  lVar10 = __return_storage_ptr__->committed + local_d8.committed;
  lVar11 = __return_storage_ptr__->decommitted + local_d8.decommitted;
  lVar12 = __return_storage_ptr__->free_ineligible_for_decommit +
           local_d8.free_ineligible_for_decommit;
  lVar13 = __return_storage_ptr__->free_eligible_for_decommit + local_d8.free_eligible_for_decommit;
  lVar14 = __return_storage_ptr__->free_decommitted + local_d8.free_decommitted;
  lVar15 = __return_storage_ptr__->meta_ineligible_for_decommit +
           local_d8.meta_ineligible_for_decommit;
  lVar16 = __return_storage_ptr__->meta_eligible_for_decommit + local_d8.meta_eligible_for_decommit;
  pas_bitfit_directory_compute_summary(&local_d8,param_1->directories + 1);
  lVar9 = lVar9 + local_d8.meta;
  lVar10 = lVar10 + local_d8.committed;
  lVar11 = lVar11 + local_d8.decommitted;
  lVar12 = lVar12 + local_d8.free_ineligible_for_decommit;
  lVar13 = lVar13 + local_d8.free_eligible_for_decommit;
  lVar14 = lVar14 + local_d8.free_decommitted;
  lVar15 = lVar15 + local_d8.meta_ineligible_for_decommit;
  lVar16 = lVar16 + local_d8.meta_eligible_for_decommit;
  lVar6 = uVar4 + local_d8.cached;
  lVar8 = uVar3 + local_d8.free;
  lVar7 = lVar7 + local_d8.allocated;
  pas_bitfit_directory_compute_summary(&local_d8,param_1->directories + 2);
  __return_storage_ptr__->meta = lVar9 + local_d8.meta;
  __return_storage_ptr__->committed = lVar10 + local_d8.committed;
  __return_storage_ptr__->decommitted = lVar11 + local_d8.decommitted;
  __return_storage_ptr__->free_ineligible_for_decommit =
       lVar12 + local_d8.free_ineligible_for_decommit;
  __return_storage_ptr__->free_eligible_for_decommit = lVar13 + local_d8.free_eligible_for_decommit;
  __return_storage_ptr__->free_decommitted = lVar14 + local_d8.free_decommitted;
  __return_storage_ptr__->meta_ineligible_for_decommit =
       lVar15 + local_d8.meta_ineligible_for_decommit;
  __return_storage_ptr__->meta_eligible_for_decommit = lVar16 + local_d8.meta_eligible_for_decommit;
  __return_storage_ptr__->cached = lVar6 + local_d8.cached;
  __return_storage_ptr__->free = lVar8 + local_d8.free;
  __return_storage_ptr__->allocated = lVar7 + local_d8.allocated;
  if ((local_80 ^ (ulonglong)auStack_f8) == __security_cookie.value) {
    return __return_storage_ptr__;
  }
  pcVar2 = (code *)swi(3);
  ppVar5 = (pas_heap_summary *)(*pcVar2)();
  return ppVar5;
}

// pas_bitfit_heap_for_each_live_object @ 140d745c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
pas_bitfit_heap_for_each_live_object
          (pas_bitfit_heap *param_1,
          _func___cdecl_bool_pas_bitfit_heap_ptr_pas_bitfit_view_ptr_ulong64_ulong64_void_ptr
          *param_2,void *param_3)

{
  pas_bitfit_view *ppVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  uint uVar6;
  ulonglong uVar7;
  ulong64 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auStack_68 [32];
  pas_bitfit_heap *local_48;
  _func___cdecl_bool_pas_bitfit_heap_ptr_pas_bitfit_view_ptr_ulong64_ulong64_void_ptr *local_40;
  void *local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_68;
  uVar6 = param_1->directories[0].views.size;
  local_48 = param_1;
  local_40 = param_2;
  local_38 = param_3;
  if (uVar6 != 0) {
    uVar10 = 0;
    uVar8 = pas_compact_heap_reservation_base;
    do {
      uVar7 = (ulonglong)param_1->directories[0].views.spine.payload;
      lVar9 = uVar8 + uVar7 * 8;
      if (uVar7 == 0) {
        lVar9 = 0;
      }
      uVar7 = (ulonglong)*(uint *)(lVar9 + (uVar10 >> 3) * 4);
      lVar9 = uVar8 + uVar7 * 8;
      if (uVar7 == 0) {
        lVar9 = 0;
      }
      uVar7 = (ulonglong)*(uint *)(lVar9 + (ulonglong)((uint)uVar10 & 7) * 4);
      if ((uVar7 != 0) &&
         (ppVar1 = (pas_bitfit_view *)(uVar8 + uVar7 * 8), ppVar1 != (pas_bitfit_view *)0x0)) {
        bVar3 = pas_bitfit_view_for_each_live_object
                          (ppVar1,bitfit_heap_for_each_live_object_callback,&local_48);
        if (!bVar3) {
          bVar3 = false;
          goto LAB_140d747be;
        }
        uVar6 = param_1->directories[0].views.size;
        uVar8 = pas_compact_heap_reservation_base;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar6);
  }
  uVar6 = param_1->directories[1].views.size;
  if (uVar6 != 0) {
    uVar10 = 0;
    uVar8 = pas_compact_heap_reservation_base;
    do {
      uVar7 = (ulonglong)param_1->directories[1].views.spine.payload;
      lVar9 = uVar8 + uVar7 * 8;
      if (uVar7 == 0) {
        lVar9 = 0;
      }
      uVar7 = (ulonglong)*(uint *)(lVar9 + (uVar10 >> 3) * 4);
      lVar9 = uVar8 + uVar7 * 8;
      if (uVar7 == 0) {
        lVar9 = 0;
      }
      uVar7 = (ulonglong)*(uint *)(lVar9 + (ulonglong)((uint)uVar10 & 7) * 4);
      if ((uVar7 != 0) &&
         (ppVar1 = (pas_bitfit_view *)(uVar8 + uVar7 * 8), ppVar1 != (pas_bitfit_view *)0x0)) {
        bVar3 = pas_bitfit_view_for_each_live_object
                          (ppVar1,bitfit_heap_for_each_live_object_callback,&local_48);
        if (!bVar3) goto LAB_140d74706;
        uVar6 = param_1->directories[1].views.size;
        uVar8 = pas_compact_heap_reservation_base;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar6);
  }
  uVar6 = param_1->directories[2].views.size;
  bVar3 = true;
  if (uVar6 != 0) {
    uVar10 = 0;
    uVar8 = pas_compact_heap_reservation_base;
    do {
      uVar7 = (ulonglong)param_1->directories[2].views.spine.payload;
      lVar9 = uVar8 + uVar7 * 8;
      if (uVar7 == 0) {
        lVar9 = 0;
      }
      uVar7 = (ulonglong)*(uint *)(lVar9 + (uVar10 >> 3) * 4);
      lVar9 = uVar8 + uVar7 * 8;
      if (uVar7 == 0) {
        lVar9 = 0;
      }
      uVar7 = (ulonglong)*(uint *)(lVar9 + (ulonglong)((uint)uVar10 & 7) * 4);
      if ((uVar7 != 0) &&
         (ppVar1 = (pas_bitfit_view *)(uVar8 + uVar7 * 8), ppVar1 != (pas_bitfit_view *)0x0)) {
        bVar5 = pas_bitfit_view_for_each_live_object
                          (ppVar1,bitfit_heap_for_each_live_object_callback,&local_48);
        if (!bVar5) goto LAB_140d74706;
        uVar6 = param_1->directories[2].views.size;
        uVar8 = pas_compact_heap_reservation_base;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar6);
  }
LAB_140d747be:
  if ((local_30 ^ (ulonglong)auStack_68) == __security_cookie.value) {
    return bVar3;
  }
LAB_140d7471d:
  pcVar2 = (code *)swi(3);
  uVar4 = (*pcVar2)();
  return (bool)uVar4;
LAB_140d74706:
  if ((local_30 ^ (ulonglong)auStack_68) == __security_cookie.value) {
    return false;
  }
  goto LAB_140d7471d;
}

// bitfit_heap_for_each_live_object_callback @ 140d747f0

bool __cdecl
bitfit_heap_for_each_live_object_callback
          (pas_bitfit_view *param_1,ulong64 param_2,ulong64 param_3,void *param_4)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)((longlong)param_4 + 8))
                    (*(undefined8 *)param_4,param_1,param_2,param_3,
                     *(undefined8 *)((longlong)param_4 + 0x10));
  return (bool)uVar1;
}

