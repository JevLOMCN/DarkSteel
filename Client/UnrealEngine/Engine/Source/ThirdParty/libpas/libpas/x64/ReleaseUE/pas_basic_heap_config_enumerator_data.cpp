// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 1

// pas_basic_heap_config_enumerator_data_add_page_header_table @ 140da5c90

bool __cdecl
pas_basic_heap_config_enumerator_data_add_page_header_table
          (pas_basic_heap_config_enumerator_data *param_1,pas_enumerator *param_2,
          pas_page_header_table *param_3)

{
  uint *puVar1;
  pas_lock_free_read_ptr_ptr_hashtable_table *ppVar2;
  void *pvVar3;
  void *pvVar4;
  pas_ptr_hash_map_entry *ppVar5;
  code *pcVar6;
  uint uVar7;
  void *pvVar8;
  pas_ptr_hash_map_entry *ppVar9;
  uint uVar10;
  void **ppvVar11;
  ulong64 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  pas_ptr_hash_map_entry *ppVar15;
  void *pvVar16;
  void *pvVar17;
  uint uVar18;
  ulonglong uVar19;
  bool bVar20;
  
  if (param_3 != (pas_page_header_table *)0x0) {
    ppVar2 = (param_3->hashtable).table;
    if (ppVar2 == (pas_lock_free_read_ptr_ptr_hashtable_table *)0x0) {
      return true;
    }
    pvVar8 = pas_enumerator_read(param_2,ppVar2,0x20);
    if ((pvVar8 != (void *)0x0) &&
       (pvVar8 = pas_enumerator_read(param_2,(param_3->hashtable).table,
                                     (ulonglong)*(uint *)((longlong)pvVar8 + 8) * 0x10 + 0x20),
       pvVar8 != (void *)0x0)) {
      uVar19 = (ulonglong)*(uint *)((longlong)pvVar8 + 8);
      if (uVar19 == 0) {
        return true;
      }
      do {
        uVar19 = uVar19 - 1;
        pvVar3 = *(void **)((longlong)pvVar8 + uVar19 * 0x10 + 0x20);
        if (pvVar3 != (void *)0xffffffffffffffff) {
          pvVar4 = *(void **)((longlong)pvVar8 + uVar19 * 0x10 + 0x28);
          uVar7 = (param_1->page_header_table).table_size;
          uVar10 = (param_1->page_header_table).key_count;
          if (uVar7 <= ((param_1->page_header_table).deleted_count + uVar10) * 2) {
            uVar18 = uVar7 * 2;
            if (uVar10 * 6 < uVar7 * 2) {
              uVar18 = uVar7;
            }
            uVar13 = (ulonglong)uVar18;
            if (uVar7 == 0) {
              uVar13 = 0x10;
            }
            uVar7 = (uint)uVar13;
            if ((uVar7 == 0) ||
               (uVar10 = uVar7 - ((uint)(uVar13 >> 1) & 0x55555555),
               uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333),
               1 < ((uVar10 >> 4) + uVar10 & 0xf0f0f0f) * 0x1010101 >> 0x18)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)invalidInstructionException();
              (*pcVar6)();
            }
            ppVar9 = (*(param_2->allocation_config).allocate)
                               (uVar13 * 0x10,"pas_ptr_hash_map/table",pas_object_allocation,
                                (param_2->allocation_config).arg);
            if ((uVar13 & 3) != 0) {
              ppvVar11 = &ppVar9[uVar13 - 1].value;
              uVar14 = 0;
              do {
                ((pas_ptr_hash_map_entry *)(ppvVar11 + -1))->key = (void *)0xffffffffffffffff;
                *ppvVar11 = (void *)0x0;
                uVar14 = uVar14 + 1;
                ppvVar11 = ppvVar11 + -2;
              } while ((uVar13 & 3) != uVar14);
              uVar13 = uVar13 - uVar14;
            }
            if (3 < uVar7) {
              ppvVar11 = &ppVar9[uVar13 - 1].value;
              do {
                ((pas_ptr_hash_map_entry *)(ppvVar11 + -1))->key = (void *)0xffffffffffffffff;
                *ppvVar11 = (void *)0x0;
                ppvVar11[-3] = (void *)0xffffffffffffffff;
                ppvVar11[-2] = (void *)0x0;
                ppvVar11[-5] = (void *)0xffffffffffffffff;
                ppvVar11[-4] = (void *)0x0;
                ppvVar11[-7] = (void *)0xffffffffffffffff;
                ppvVar11[-6] = (void *)0x0;
                ppvVar11 = ppvVar11 + -8;
                uVar13 = uVar13 - 4;
              } while (uVar13 != 0);
            }
            ppVar5 = (param_1->page_header_table).table;
            uVar13 = (ulonglong)(param_1->page_header_table).table_size;
            if (uVar13 == 0) {
              uVar12 = 0;
            }
            else {
              uVar14 = 0;
              do {
                pvVar16 = ppVar5[uVar14].key;
                if (pvVar16 != (void *)0xffffffffffffffff) {
                  uVar18 = (uint)((ulonglong)pvVar16 >> 4) & 0xfffffff ^ (uint)pvVar16;
                  uVar10 = (uint)((ulonglong)pvVar16 >> 0x20);
                  uVar10 = uVar10 >> 4 ^ uVar10;
                  uVar10 = uVar10 * 0x20 + (uVar10 ^ 0xdeadbeef) ^
                           uVar18 * 0x20 + (uVar18 ^ 0xdeadbeef);
                  uVar10 = uVar10 >> 0xb ^ uVar10;
                  do {
                    uVar18 = uVar10 & uVar7 - 1;
                    uVar10 = uVar10 + 1;
                  } while (ppVar9[uVar18].key != (void *)0xffffffffffffffff);
                  pvVar16 = ppVar5[uVar14].value;
                  ppVar9[uVar18].key = ppVar5[uVar14].key;
                  ppVar9[uVar18].value = pvVar16;
                }
                uVar14 = uVar14 + 1;
              } while (uVar14 != uVar13);
              uVar12 = uVar13 << 4;
            }
            (param_1->page_header_table).table = ppVar9;
            (param_1->page_header_table).table_size = uVar7;
            (param_1->page_header_table).table_mask = uVar7 - 1;
            (param_1->page_header_table).deleted_count = 0;
            (*(param_2->allocation_config).deallocate)
                      (ppVar5,uVar12,pas_object_allocation,(param_2->allocation_config).arg);
          }
          uVar7 = (uint)((ulonglong)pvVar3 >> 4) & 0xfffffff ^ (uint)pvVar3;
          uVar10 = (uint)((ulonglong)pvVar3 >> 0x20);
          uVar10 = uVar10 >> 4 ^ uVar10;
          uVar10 = uVar10 * 0x20 + (uVar10 ^ 0xdeadbeef) ^ uVar7 * 0x20 + (uVar7 ^ 0xdeadbeef);
          uVar10 = uVar10 >> 0xb ^ uVar10;
          uVar7 = (param_1->page_header_table).table_mask;
          ppVar5 = (param_1->page_header_table).table;
          uVar18 = uVar7 & uVar10;
          ppVar9 = ppVar5 + uVar18;
          pvVar16 = ppVar5[uVar18].key;
          pvVar17 = ppVar5[uVar18].value;
          bVar20 = pvVar16 == (void *)0xffffffffffffffff;
          if (!bVar20 || pvVar17 != (void *)0x0) {
            ppVar15 = (pas_ptr_hash_map_entry *)0x0;
            do {
              uVar10 = uVar10 + 1;
              if ((bVar20) && (pvVar17 == (void *)0x1)) {
                if (ppVar15 == (pas_ptr_hash_map_entry *)0x0) {
                  ppVar15 = ppVar9;
                }
              }
              else if (pvVar16 == pvVar3) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)invalidInstructionException();
                (*pcVar6)();
              }
              uVar18 = uVar10 & uVar7;
              ppVar9 = ppVar5 + uVar18;
              pvVar16 = ppVar5[uVar18].key;
              pvVar17 = ppVar5[uVar18].value;
              bVar20 = pvVar16 == (void *)0xffffffffffffffff;
            } while (pvVar17 != (void *)0x0 || !bVar20);
            if (ppVar15 != (pas_ptr_hash_map_entry *)0x0) {
              puVar1 = &(param_1->page_header_table).deleted_count;
              *puVar1 = *puVar1 - 1;
              ppVar9 = ppVar15;
            }
          }
          puVar1 = &(param_1->page_header_table).key_count;
          *puVar1 = *puVar1 + 1;
          ppVar9->key = pvVar3;
          ppVar9->value = pvVar4;
        }
        if (uVar19 == 0) {
          return true;
        }
      } while( true );
    }
  }
  return false;
}

