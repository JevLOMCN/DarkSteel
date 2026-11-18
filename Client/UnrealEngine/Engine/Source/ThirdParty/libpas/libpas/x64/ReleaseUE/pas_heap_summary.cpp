// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 2

// pas_heap_summary_validate @ 140d87b90

void __cdecl pas_heap_summary_validate(pas_heap_summary *param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  
  uVar1 = param_1->committed;
  if (param_1->decommitted + uVar1 < param_1->allocated + param_1->free) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (param_1->allocated + param_1->meta_ineligible_for_decommit +
      param_1->meta_eligible_for_decommit != uVar1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar3 = param_1->free_eligible_for_decommit + param_1->free_ineligible_for_decommit;
  if (uVar3 + param_1->free_decommitted != param_1->free) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (uVar3 <= uVar1) {
    if (param_1->decommitted < param_1->free_decommitted) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (param_1->cached <= uVar1) {
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

// pas_heap_summary_dump @ 140d87c00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl pas_heap_summary_dump(pas_heap_summary *param_1,pas_stream *param_2)

{
  pas_stream_printf(param_2,"%.0lf%% Alloc: %zu/%zu (CO)/%zu (CT)/%zu (R); Frag: %zu (%.0lf%%)");
  if (param_1->cached != 0) {
    pas_stream_printf(param_2,"; Cached: %zu");
  }
  return;
}

