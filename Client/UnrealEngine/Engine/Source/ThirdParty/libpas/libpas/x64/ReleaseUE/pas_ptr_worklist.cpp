// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 4

// pas_ptr_worklist_construct @ 140dacc00

void __cdecl pas_ptr_worklist_construct(pas_ptr_worklist *param_1)

{
  param_1->worklist_size = 0;
  param_1->worklist_capacity = 0;
  (param_1->seen).key_count = 0;
  (param_1->seen).deleted_count = 0;
  param_1->worklist = (void **)0x0;
  (param_1->seen).table = (void **)0x0;
  (param_1->seen).table_size = 0;
  (param_1->seen).table_mask = 0;
  return;
}

// pas_ptr_worklist_destruct @ 140dacc20

void __cdecl pas_ptr_worklist_destruct(pas_ptr_worklist *param_1,pas_allocation_config *param_2)

{
  (*param_2->deallocate)
            ((param_1->seen).table,(ulonglong)(param_1->seen).table_size << 3,pas_object_allocation,
             param_2->arg);
  if (param_1->worklist != (void **)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140dacc62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*param_2->deallocate)
              (param_1->worklist,param_1->worklist_capacity << 3,pas_object_allocation,param_2->arg)
    ;
    return;
  }
  return;
}

// pas_ptr_worklist_push @ 140dacc80

bool __cdecl
pas_ptr_worklist_push(pas_ptr_worklist *param_1,void *param_2,pas_allocation_config *param_3)

{
  uint *puVar1;
  void *pvVar2;
  code *pcVar3;
  uint uVar4;
  void **ppvVar5;
  void **ppvVar6;
  uint uVar7;
  char *pcVar8;
  ulong64 uVar9;
  ulonglong uVar10;
  void **ppvVar11;
  ulonglong uVar12;
  uint uVar13;
  
  if (param_2 == (void *)0x0) {
    return false;
  }
  uVar4 = (param_1->seen).table_size;
  uVar7 = (param_1->seen).key_count;
  if (uVar4 <= ((param_1->seen).deleted_count + uVar7) * 2) {
    uVar13 = uVar4 * 2;
    if (uVar7 * 6 < uVar4 * 2) {
      uVar13 = uVar4;
    }
    uVar12 = 0x10;
    if (uVar4 != 0) {
      uVar12 = (ulonglong)uVar13;
    }
    uVar4 = (uint)uVar12;
    if ((uVar4 == 0) ||
       (uVar7 = uVar4 - ((uint)(uVar12 >> 1) & 0x55555555),
       uVar7 = (uVar7 >> 2 & 0x33333333) + (uVar7 & 0x33333333),
       1 < ((uVar7 >> 4) + uVar7 & 0xf0f0f0f) * 0x1010101 >> 0x18)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    pcVar8 = "pas_ptr_hash_set/table";
    uVar9 = 0;
    ppvVar5 = (*param_3->allocate)
                        (uVar12 * 8,"pas_ptr_hash_set/table",pas_object_allocation,param_3->arg);
    memset(ppvVar5,(int)CONCAT71((int7)((ulonglong)pcVar8 >> 8),0xff),uVar12 * 8);
    ppvVar6 = (param_1->seen).table;
    uVar12 = (ulonglong)(param_1->seen).table_size;
    if (uVar12 != 0) {
      uVar10 = 0;
      do {
        pvVar2 = ppvVar6[uVar10];
        if (pvVar2 < (void *)0xfffffffffffffffe) {
          uVar7 = (uint)((ulonglong)pvVar2 >> 4) & 0xfffffff ^ (uint)pvVar2;
          uVar13 = (uint)((ulonglong)pvVar2 >> 0x20);
          uVar13 = uVar13 >> 4 ^ uVar13;
          uVar7 = uVar13 * 0x20 + (uVar13 ^ 0xdeadbeef) ^ uVar7 * 0x20 + (uVar7 ^ 0xdeadbeef);
          uVar7 = uVar7 >> 0xb ^ uVar7;
          do {
            uVar13 = uVar7 & uVar4 - 1;
            uVar7 = uVar7 + 1;
          } while (ppvVar5[uVar13] < (void *)0xfffffffffffffffe);
          ppvVar5[uVar13] = pvVar2;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar12);
      uVar9 = uVar12 << 3;
    }
    (param_1->seen).table = ppvVar5;
    (param_1->seen).table_size = uVar4;
    (param_1->seen).table_mask = uVar4 - 1;
    (param_1->seen).deleted_count = 0;
    (*param_3->deallocate)(ppvVar6,uVar9,pas_object_allocation,param_3->arg);
  }
  uVar4 = (uint)((ulonglong)param_2 >> 4) & 0xfffffff ^ (uint)param_2;
  uVar7 = (uint)((ulonglong)param_2 >> 0x20);
  uVar7 = uVar7 >> 4 ^ uVar7;
  uVar4 = uVar7 * 0x20 + (uVar7 ^ 0xdeadbeef) ^ uVar4 * 0x20 + (uVar4 ^ 0xdeadbeef);
  uVar4 = uVar4 >> 0xb ^ uVar4;
  ppvVar6 = (param_1->seen).table;
  ppvVar5 = (void **)0x0;
  do {
    uVar7 = uVar4 & (param_1->seen).table_mask;
    ppvVar11 = ppvVar6 + uVar7;
    pvVar2 = ppvVar6[uVar7];
    if (pvVar2 == (void *)0xfffffffffffffffe) {
      if (ppvVar5 == (void **)0x0) {
        ppvVar5 = ppvVar11;
      }
    }
    else {
      if (pvVar2 == (void *)0xffffffffffffffff) {
        if (ppvVar5 != (void **)0x0) {
          puVar1 = &(param_1->seen).deleted_count;
          *puVar1 = *puVar1 - 1;
          ppvVar11 = ppvVar5;
        }
        puVar1 = &(param_1->seen).key_count;
        *puVar1 = *puVar1 + 1;
        *ppvVar11 = param_2;
        uVar12 = param_1->worklist_size;
        if (uVar12 < param_1->worklist_capacity) {
          ppvVar6 = param_1->worklist;
        }
        else {
          if (uVar12 != param_1->worklist_capacity) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          uVar10 = uVar12 * 2 + 2;
          ppvVar6 = (*param_3->allocate)
                              (uVar12 * 0x10 + 0x10,"pas_ptr_worklist/worklist",
                               pas_object_allocation,param_3->arg);
          memcpy(ppvVar6,param_1->worklist,param_1->worklist_size << 3);
          (*param_3->deallocate)
                    (param_1->worklist,param_1->worklist_capacity << 3,pas_object_allocation,
                     param_3->arg);
          param_1->worklist = ppvVar6;
          param_1->worklist_capacity = uVar10;
          uVar12 = param_1->worklist_size;
          if (uVar10 <= uVar12) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        param_1->worklist_size = uVar12 + 1;
        ppvVar6[uVar12] = param_2;
        return true;
      }
      if (pvVar2 == param_2) {
        return false;
      }
    }
    uVar4 = uVar4 + 1;
  } while( true );
}

// pas_ptr_worklist_pop @ 140dacf30

void * __cdecl pas_ptr_worklist_pop(pas_ptr_worklist *param_1)

{
  ulong64 uVar1;
  
  uVar1 = param_1->worklist_size;
  if (uVar1 != 0) {
    param_1->worklist_size = uVar1 - 1;
    return param_1->worklist[uVar1 - 1];
  }
  return (void *)0x0;
}

