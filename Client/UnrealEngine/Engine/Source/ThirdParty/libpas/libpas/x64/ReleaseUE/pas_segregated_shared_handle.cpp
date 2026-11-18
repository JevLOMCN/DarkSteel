// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 3

// pas_segregated_shared_handle_create @ 140da5610

pas_segregated_shared_handle * __cdecl
pas_segregated_shared_handle_create
          (pas_segregated_shared_view *param_1,pas_segregated_shared_page_directory *param_2,
          pas_segregated_page_config *param_3)

{
  code *pcVar1;
  pas_segregated_shared_handle *ppVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_3->kind == pas_segregated_page_config_kind_pas_utility_small) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  uVar4 = param_3->num_alloc_bits >> (param_3->sharing_shift & 0x3f);
  ppVar2 = pas_utility_heap_allocate
                     ((uVar4 * 4 + 7 & 0xfffffffffffffff8) + 0x14,"pas_segregated_shared_handle");
  if (((ulonglong)param_1->shared_handle_or_page_boundary & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  ppVar2->page_boundary = param_1->shared_handle_or_page_boundary;
  uVar3 = (longlong)param_1 - pas_compact_heap_reservation_base;
  if (pas_compact_heap_reservation_size <= uVar3) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((uVar3 & 7) == 0) {
    if (7 < uVar3) {
      (ppVar2->shared_view).payload[0] = (uchar)(uVar3 >> 3);
      (ppVar2->shared_view).payload[1] = (uchar)(uVar3 >> 0xb);
      (ppVar2->shared_view).payload[2] = (uchar)((uint)uVar3 >> 0x13);
      ppVar2->directory = param_2;
      if (uVar4 != 0) {
        memset(ppVar2->partial_views,0,uVar4 << 2);
      }
      param_1->shared_handle_or_page_boundary =
           (pas_shared_handle_or_page_boundary_opaque *)((ulonglong)ppVar2 | 1);
      return ppVar2;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_segregated_shared_handle_destroy @ 140da56e0

void __cdecl pas_segregated_shared_handle_destroy(pas_segregated_shared_handle *param_1)

{
  code *pcVar1;
  uint3 uVar2;
  ulonglong *puVar3;
  
  uVar2 = *(uint3 *)(param_1->shared_view).payload;
  puVar3 = (ulonglong *)0x0;
  if (uVar2 != 0) {
    puVar3 = (ulonglong *)((uint)uVar2 * 8 + pas_compact_heap_reservation_base);
  }
  if ((*puVar3 & 1) != 0) {
    if ((pas_segregated_shared_handle *)(*puVar3 & 0xfffffffffffffffe) == param_1) {
      *puVar3 = (ulonglong)param_1->page_boundary;
      pas_utility_heap_deallocate(param_1);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_segregated_shared_handle_note_emptiness @ 140da5730

void __cdecl pas_segregated_shared_handle_note_emptiness(pas_segregated_shared_handle *param_1)

{
  uint3 uVar1;
  ulonglong uVar2;
  
  uVar1 = *(uint3 *)(param_1->shared_view).payload;
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = (uint)uVar1 * 8 + pas_compact_heap_reservation_base;
  }
  if (*(int *)(uVar2 + 0x24) != 0) {
    return;
  }
  pas_segregated_directory_view_did_become_empty
            (&param_1->directory->base,(pas_segregated_view_opaque *)(uVar2 | 2));
  return;
}

