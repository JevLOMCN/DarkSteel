// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 2

// verse_heap_large_entry_create @ 140da8c50

verse_heap_large_entry * __cdecl
verse_heap_large_entry_create(ulong64 param_1,ulong64 param_2,pas_heap *param_3)

{
  verse_heap_large_entry *pvVar1;
  
  pvVar1 = pas_utility_heap_allocate(0x28,"verse_heap_large_entry");
  pvVar1->begin = param_1;
  pvVar1->end = param_2;
  pvVar1->heap = param_3;
  verse_heap_mark_bits_page_commit_controller_construct_large
            (&pvVar1->mark_bits_page_commit_controller,param_1 & 0xfffffffffff80000);
  return pvVar1;
}

// verse_heap_large_entry_destroy @ 140da8cb0

void __cdecl verse_heap_large_entry_destroy(verse_heap_large_entry *param_1)

{
  verse_heap_mark_bits_page_commit_controller_destruct_large
            (&param_1->mark_bits_page_commit_controller);
  pas_utility_heap_deallocate(param_1);
  return;
}

