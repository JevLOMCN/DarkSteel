// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 4

// pas_baseline_allocator_table_initialize_if_necessary @ 140d6de70

void __cdecl pas_baseline_allocator_table_initialize_if_necessary(void)

{
  pas_system_once_run(&once_control,initialize);
  return;
}

// initialize @ 140d6de90

void __cdecl initialize(void)

{
  pas_baseline_allocator *ppVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  ppVar1 = pas_immortal_heap_allocate(0x2900,"pas_baseline_allocator_table",pas_object_allocation);
  ppVar1[0x1f].lock.lock.Ptr = (void *)0x0;
  *(undefined4 *)((longlong)&ppVar1[0x1f].lock.lock.Ptr + 7) = 0;
  ppVar1[0x1f].u.fake_field_to_force_size[3] = -0x7e;
  memset((void *)((longlong)&ppVar1[0x1f].u + 4),0,0x13c);
  ppVar1[0x1e].lock.lock.Ptr = (void *)0x0;
  *(undefined4 *)((longlong)&ppVar1[0x1e].lock.lock.Ptr + 7) = 0;
  ppVar1[0x1e].u.fake_field_to_force_size[3] = -0x7e;
  memset((void *)((longlong)&ppVar1[0x1e].u + 4),0,0x13c);
  ppVar1[0x1d].lock.lock.Ptr = (void *)0x0;
  *(undefined4 *)((longlong)&ppVar1[0x1d].lock.lock.Ptr + 7) = 0;
  ppVar1[0x1d].u.fake_field_to_force_size[3] = -0x7e;
  memset((void *)((longlong)&ppVar1[0x1d].u + 4),0,0x13c);
  ppVar1[0x1c].lock.lock.Ptr = (void *)0x0;
  *(undefined4 *)((longlong)&ppVar1[0x1c].lock.lock.Ptr + 7) = 0;
  ppVar1[0x1c].u.fake_field_to_force_size[3] = -0x7e;
  memset((void *)((longlong)&ppVar1[0x1c].u + 4),0,0x13c);
  ppVar1[0x1b].lock.lock.Ptr = (void *)0x0;
  *(undefined4 *)((longlong)&ppVar1[0x1b].lock.lock.Ptr + 7) = 0;
  ppVar1[0x1b].u.fake_field_to_force_size[3] = -0x7e;
  memset((void *)((longlong)&ppVar1[0x1b].u + 4),0,0x13c);
  ppVar1[0x1a].lock.lock.Ptr = (void *)0x0;
  *(undefined4 *)((longlong)&ppVar1[0x1a].lock.lock.Ptr + 7) = 0;
  ppVar1[0x1a].u.fake_field_to_force_size[3] = -0x7e;
  memset((void *)((longlong)&ppVar1[0x1a].u + 4),0,0x13c);
  ppVar1[0x19].lock.lock.Ptr = (void *)0x0;
  *(undefined4 *)((longlong)&ppVar1[0x19].lock.lock.Ptr + 7) = 0;
  ppVar1[0x19].u.fake_field_to_force_size[3] = -0x7e;
  memset((void *)((longlong)&ppVar1[0x19].u + 4),0,0x13c);
  ppVar1[0x18].lock.lock.Ptr = (void *)0x0;
  *(undefined4 *)((longlong)&ppVar1[0x18].lock.lock.Ptr + 7) = 0;
  ppVar1[0x18].u.fake_field_to_force_size[3] = -0x7e;
  memset((void *)((longlong)&ppVar1[0x18].u + 4),0,0x13c);
  ppVar1[0x17].lock.lock.Ptr = (void *)0x0;
  *(undefined4 *)((longlong)&ppVar1[0x17].lock.lock.Ptr + 7) = 0;
  ppVar1[0x17].u.fake_field_to_force_size[3] = -0x7e;
  memset((void *)((longlong)&ppVar1[0x17].u + 4),0,0x13c);
  ppVar1[0x16].lock.lock.Ptr = (void *)0x0;
  *(undefined4 *)((longlong)&ppVar1[0x16].lock.lock.Ptr + 7) = 0;
  ppVar1[0x16].u.fake_field_to_force_size[3] = -0x7e;
  memset((void *)((longlong)&ppVar1[0x16].u + 4),0,0x13c);
  ppVar1[0x15].lock.lock.Ptr = (void *)0x0;
  *(undefined4 *)((longlong)&ppVar1[0x15].lock.lock.Ptr + 7) = 0;
  ppVar1[0x15].u.fake_field_to_force_size[3] = -0x7e;
  memset((void *)((longlong)&ppVar1[0x15].u + 4),0,0x13c);
  ppVar1[0x14].lock.lock.Ptr = (void *)0x0;
  *(undefined4 *)((longlong)&ppVar1[0x14].lock.lock.Ptr + 7) = 0;
  ppVar1[0x14].u.fake_field_to_force_size[3] = -0x7e;
  memset((void *)((longlong)&ppVar1[0x14].u + 4),0,0x13c);
  ppVar1[0x13].lock.lock.Ptr = (void *)0x0;
  *(undefined4 *)((longlong)&ppVar1[0x13].lock.lock.Ptr + 7) = 0;
  ppVar1[0x13].u.fake_field_to_force_size[3] = -0x7e;
  memset((void *)((longlong)&ppVar1[0x13].u + 4),0,0x13c);
  ppVar1[0x12].lock.lock.Ptr = (void *)0x0;
  *(undefined4 *)((longlong)&ppVar1[0x12].lock.lock.Ptr + 7) = 0;
  ppVar1[0x12].u.fake_field_to_force_size[3] = -0x7e;
  memset((void *)((longlong)&ppVar1[0x12].u + 4),0,0x13c);
  ppVar1[0x11].lock.lock.Ptr = (void *)0x0;
  *(undefined4 *)((longlong)&ppVar1[0x11].lock.lock.Ptr + 7) = 0;
  ppVar1[0x11].u.fake_field_to_force_size[3] = -0x7e;
  memset((void *)((longlong)&ppVar1[0x11].u + 4),0,0x13c);
  ppVar1[0x10].lock.lock.Ptr = (void *)0x0;
  *(undefined4 *)((longlong)&ppVar1[0x10].lock.lock.Ptr + 7) = 0;
  ppVar1[0x10].u.fake_field_to_force_size[3] = -0x7e;
  memset((void *)((longlong)&ppVar1[0x10].u + 4),0,0x13c);
  ppVar1[0xf].lock.lock.Ptr = (void *)0x0;
  *(undefined4 *)((longlong)&ppVar1[0xf].lock.lock.Ptr + 7) = 0;
  ppVar1[0xf].u.fake_field_to_force_size[3] = -0x7e;
  memset((void *)((longlong)&ppVar1[0xf].u + 4),0,0x13c);
  ppVar1[0xe].lock.lock.Ptr = (void *)0x0;
  *(undefined4 *)((longlong)&ppVar1[0xe].lock.lock.Ptr + 7) = 0;
  ppVar1[0xe].u.fake_field_to_force_size[3] = -0x7e;
  memset((void *)((longlong)&ppVar1[0xe].u + 4),0,0x13c);
  ppVar1[0xd].lock.lock.Ptr = (void *)0x0;
  *(undefined4 *)((longlong)&ppVar1[0xd].lock.lock.Ptr + 7) = 0;
  ppVar1[0xd].u.fake_field_to_force_size[3] = -0x7e;
  memset((void *)((longlong)&ppVar1[0xd].u + 4),0,0x13c);
  ppVar1[0xc].lock.lock.Ptr = (void *)0x0;
  *(undefined4 *)((longlong)&ppVar1[0xc].lock.lock.Ptr + 7) = 0;
  ppVar1[0xc].u.fake_field_to_force_size[3] = -0x7e;
  memset((void *)((longlong)&ppVar1[0xc].u + 4),0,0x13c);
  ppVar1[0xb].lock.lock.Ptr = (void *)0x0;
  *(undefined4 *)((longlong)&ppVar1[0xb].lock.lock.Ptr + 7) = 0;
  ppVar1[0xb].u.fake_field_to_force_size[3] = -0x7e;
  memset((void *)((longlong)&ppVar1[0xb].u + 4),0,0x13c);
  ppVar1[10].lock.lock.Ptr = (void *)0x0;
  *(undefined4 *)((longlong)&ppVar1[10].lock.lock.Ptr + 7) = 0;
  ppVar1[10].u.fake_field_to_force_size[3] = -0x7e;
  memset((void *)((longlong)&ppVar1[10].u + 4),0,0x13c);
  ppVar1[9].lock.lock.Ptr = (void *)0x0;
  *(undefined4 *)((longlong)&ppVar1[9].lock.lock.Ptr + 7) = 0;
  ppVar1[9].u.fake_field_to_force_size[3] = -0x7e;
  memset((void *)((longlong)&ppVar1[9].u + 4),0,0x13c);
  ppVar1[8].lock.lock.Ptr = (void *)0x0;
  *(undefined4 *)((longlong)&ppVar1[8].lock.lock.Ptr + 7) = 0;
  ppVar1[8].u.fake_field_to_force_size[3] = -0x7e;
  memset((void *)((longlong)&ppVar1[8].u + 4),0,0x13c);
  ppVar1[7].lock.lock.Ptr = (void *)0x0;
  *(undefined4 *)((longlong)&ppVar1[7].lock.lock.Ptr + 7) = 0;
  ppVar1[7].u.fake_field_to_force_size[3] = -0x7e;
  memset((void *)((longlong)&ppVar1[7].u + 4),0,0x13c);
  ppVar1[6].lock.lock.Ptr = (void *)0x0;
  *(undefined4 *)((longlong)&ppVar1[6].lock.lock.Ptr + 7) = 0;
  ppVar1[6].u.fake_field_to_force_size[3] = -0x7e;
  memset((void *)((longlong)&ppVar1[6].u + 4),0,0x13c);
  ppVar1[5].lock.lock.Ptr = (void *)0x0;
  *(undefined4 *)((longlong)&ppVar1[5].lock.lock.Ptr + 7) = 0;
  ppVar1[5].u.fake_field_to_force_size[3] = -0x7e;
  memset((void *)((longlong)&ppVar1[5].u + 4),0,0x13c);
  ppVar1[4].lock.lock.Ptr = (void *)0x0;
  *(undefined4 *)((longlong)&ppVar1[4].lock.lock.Ptr + 7) = 0;
  ppVar1[4].u.fake_field_to_force_size[3] = -0x7e;
  memset((void *)((longlong)&ppVar1[4].u + 4),0,0x13c);
  ppVar1[3].lock.lock.Ptr = (void *)0x0;
  *(undefined4 *)((longlong)&ppVar1[3].lock.lock.Ptr + 7) = 0;
  ppVar1[3].u.fake_field_to_force_size[3] = -0x7e;
  memset((void *)((longlong)&ppVar1[3].u + 4),0,0x13c);
  ppVar1[2].lock.lock.Ptr = (void *)0x0;
  *(undefined4 *)((longlong)&ppVar1[2].lock.lock.Ptr + 7) = 0;
  ppVar1[2].u.fake_field_to_force_size[3] = -0x7e;
  memset((void *)((longlong)&ppVar1[2].u + 4),0,0x13c);
  ppVar1[1].lock.lock.Ptr = (void *)0x0;
  *(undefined4 *)((longlong)&ppVar1[1].lock.lock.Ptr + 7) = 0;
  ppVar1[1].u.fake_field_to_force_size[3] = -0x7e;
  memset((void *)((longlong)&ppVar1[1].u + 4),0,0x13c);
  (ppVar1->lock).lock.Ptr = (void *)0x0;
  *(undefined4 *)((longlong)&(ppVar1->lock).lock.Ptr + 7) = 0;
  (ppVar1->u).fake_field_to_force_size[3] = -0x7e;
  memset((void *)((longlong)&ppVar1->u + 4),0,0x13c);
  pas_baseline_allocator_table = ppVar1;
                    /* WARNING: Could not recover jumptable at 0x000140d6e4c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  return;
}

// pas_baseline_allocator_table_get_random_index @ 140d6e4d0

uint __cdecl pas_baseline_allocator_table_get_random_index(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = pas_baseline_allocator_table_bound;
  if (pas_mock_fast_random == (_func___cdecl_uint *)0x0) {
    uVar2 = pas_fast_random_state << 0xd ^ pas_fast_random_state;
    uVar2 = uVar2 >> 0x11 ^ uVar2;
    uVar2 = uVar2 << 5 ^ uVar2;
    pas_fast_random_state = uVar2;
  }
  else {
    uVar2 = (*pas_mock_fast_random)();
  }
  uVar3 = 0x20;
  if (uVar1 < 0x20) {
    uVar3 = uVar1;
  }
  return uVar2 % (-(uint)(uVar1 == 0) | uVar3);
}

// pas_baseline_allocator_table_for_all @ 140d6e540

bool __cdecl pas_baseline_allocator_table_for_all(pas_allocator_scavenge_action param_1)

{
  PSRWLOCK SRWLock;
  pas_baseline_allocator *ppVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  
  if (pas_baseline_allocator_table == (pas_baseline_allocator *)0x0) {
    bVar3 = false;
  }
  else {
    lVar4 = 0x27b8;
    bVar3 = false;
    do {
      ppVar1 = pas_baseline_allocator_table;
      SRWLock = (PSRWLOCK)((longlong)&(pas_baseline_allocator_table->lock).lock.Ptr + lVar4);
      AcquireSRWLockExclusive(SRWLock);
      bVar2 = pas_local_allocator_scavenge
                        ((pas_local_allocator *)((longlong)&ppVar1->u + lVar4),param_1);
      bVar3 = (bool)(bVar3 | bVar2);
      ReleaseSRWLockExclusive(SRWLock);
      lVar4 = lVar4 + -0x148;
    } while (lVar4 != -0x148);
  }
  return bVar3;
}

