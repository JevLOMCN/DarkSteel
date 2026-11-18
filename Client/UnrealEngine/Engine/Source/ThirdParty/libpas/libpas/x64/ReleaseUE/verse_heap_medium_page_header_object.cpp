// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 2

// verse_heap_medium_page_header_object_create @ 140da8ce0

verse_heap_medium_page_header_object * __cdecl verse_heap_medium_page_header_object_create(void)

{
  verse_heap_medium_page_header_object *pvVar1;
  
  pvVar1 = pas_utility_heap_allocate(0x16c,"verse_heap_medium_page_header_object");
  return pvVar1;
}

// verse_heap_medium_page_header_object_destroy @ 140da8d00

void __cdecl
verse_heap_medium_page_header_object_destroy(verse_heap_medium_page_header_object *param_1)

{
  code *pcVar1;
  BOOLEAN BVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  uint uVar5;
  pas_segregated_page *ppVar6;
  pas_segregated_view_opaque *ppVar7;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar2 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_1 != (verse_heap_medium_page_header_object *)0x0) {
    if (pas_deallocation_callback !=
        (_func___cdecl_void_void_ptr_ulong64_pas_heap_kind_pas_allocation_kind *)0x0) {
      (*pas_deallocation_callback)(param_1,0,pas_utility_heap_kind,pas_object_allocation);
    }
    ppVar6 = (pas_segregated_page *)((ulonglong)param_1 & 0xffffffffffffc000);
    uVar3 = (ulonglong)((uint)((ulonglong)param_1 >> 6) & 0xfc);
    uVar5 = *(uint *)((longlong)ppVar6->alloc_bits + uVar3) &
            ~(1 << ((uint)((ulonglong)param_1 >> 3) & 0x1f));
    *(uint *)((longlong)ppVar6->alloc_bits + uVar3) = uVar5;
    if (((ulonglong)ppVar6->owner & 7) != 0) {
      ppVar7 = (pas_segregated_view_opaque *)((ulonglong)ppVar6->owner & 0xfffffffffffffff8);
      if (ppVar6->is_in_use_for_allocation == true) {
        ppVar6->eligibility_notification_has_been_deferred = true;
      }
      else {
        pas_segregated_directory_view_did_become_eligible_at_index
                  ((pas_segregated_directory *)
                   (((uint)(byte)ppVar7[10] * 0x80000 + (uint)*(ushort *)(ppVar7 + 8) * 8) +
                   pas_compact_heap_reservation_base),(ulonglong)*(uint *)(ppVar7 + 0xc));
      }
      ppVar6->owner = ppVar7;
    }
    if (uVar5 == 0) {
      uVar4 = (ppVar6->emptiness).num_non_empty_words_or_live_bytes - 1;
      if (uVar4 == 0) {
        pas_segregated_page_note_emptiness_impl(ppVar6,pas_note_emptiness_clear_num_non_empty_words)
        ;
        return;
      }
      (ppVar6->emptiness).num_non_empty_words_or_live_bytes = uVar4;
    }
  }
  return;
}

