// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 4

// verse_heap_object_set_set_construct @ 140d9d400

void __cdecl verse_heap_object_set_set_construct(verse_heap_object_set_set *param_1)

{
  code *pcVar1;
  BOOLEAN BVar2;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar2 == '\0') {
    param_1->sets = (verse_heap_object_set **)0x0;
    param_1->num_sets = 0;
    param_1->sets_capacity = 0;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// verse_heap_object_set_set_add_set @ 140d9d430

void __cdecl
verse_heap_object_set_set_add_set(verse_heap_object_set_set *param_1,verse_heap_object_set *param_2)

{
  uint uVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  ulonglong uVar4;
  verse_heap_object_set **_Dst;
  ulonglong uVar5;
  bool bVar6;
  
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar3 != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar1 = param_1->num_sets;
  uVar4 = (ulonglong)uVar1;
  uVar5 = uVar4;
  do {
    bVar6 = uVar5 == 0;
    uVar5 = uVar5 - 1;
    if (bVar6) {
      if (uVar1 < param_1->sets_capacity) {
        _Dst = param_1->sets;
      }
      else {
        if (uVar1 != param_1->sets_capacity) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        uVar5 = 4;
        if (4 < uVar1 * 2) {
          uVar5 = (ulonglong)(uVar1 * 2);
        }
        _Dst = pas_large_utility_free_heap_allocate(uVar5 * 8,"verse_heap_object_set_set/sets");
        if ((ulonglong)param_1->num_sets != 0) {
          memcpy(_Dst,param_1->sets,(ulonglong)param_1->num_sets << 3);
        }
        pas_large_utility_free_heap_deallocate(param_1->sets,(ulonglong)param_1->sets_capacity << 3)
        ;
        param_1->sets = _Dst;
        param_1->sets_capacity = (uint)uVar5;
        uVar4 = (ulonglong)param_1->num_sets;
      }
      param_1->num_sets = (int)uVar4 + 1;
      _Dst[uVar4] = param_2;
      return;
    }
  } while (param_1->sets[uVar5] != param_2);
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

// verse_heap_object_set_set_add_view @ 140d9d500

void __cdecl
verse_heap_object_set_set_add_view
          (verse_heap_object_set_set *param_1,pas_segregated_exclusive_view *param_2)

{
  code *pcVar1;
  BOOLEAN BVar2;
  ulonglong uVar3;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar2 == '\0') {
    for (uVar3 = (ulonglong)param_1->num_sets; uVar3 != 0; uVar3 = uVar3 - 1) {
      verse_heap_object_set_add_view(param_1->sets[uVar3 - 1],param_2);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// verse_heap_object_set_set_add_large_entry @ 140d9d560

void __cdecl
verse_heap_object_set_set_add_large_entry
          (verse_heap_object_set_set *param_1,verse_heap_large_entry *param_2)

{
  code *pcVar1;
  BOOLEAN BVar2;
  ulonglong uVar3;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar2 == '\0') {
    for (uVar3 = (ulonglong)param_1->num_sets; uVar3 != 0; uVar3 = uVar3 - 1) {
      verse_heap_object_set_add_large_entry(param_1->sets[uVar3 - 1],param_2);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

