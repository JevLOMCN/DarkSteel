// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 1

// pas_redundant_local_allocator_node_create @ 140da3b00

pas_redundant_local_allocator_node * __cdecl
pas_redundant_local_allocator_node_create(pas_segregated_size_directory *param_1)

{
  code *pcVar1;
  pas_redundant_local_allocator_node *ppVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  
  uVar3 = 0;
  ppVar2 = pas_immortal_heap_allocate(8,"pas_redundant_local_allocator_node",pas_object_allocation);
  if (param_1 != (pas_segregated_size_directory *)0x0) {
    uVar4 = (longlong)param_1 - pas_compact_heap_reservation_base;
    if (pas_compact_heap_reservation_size <= uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if ((uVar4 & 7) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (uVar4 < 8) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar3 = (undefined4)(uVar4 >> 3);
  }
  (ppVar2->directory).payload[0] = (uchar)uVar3;
  (ppVar2->directory).payload[1] = (uchar)((uint)uVar3 >> 8);
  (ppVar2->directory).payload[2] = (uchar)((uint)uVar3 >> 0x10);
  ppVar2->allocator_index = 0;
  return ppVar2;
}

