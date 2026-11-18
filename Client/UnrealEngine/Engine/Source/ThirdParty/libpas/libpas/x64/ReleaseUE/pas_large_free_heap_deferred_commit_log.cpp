// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 6

// pas_large_free_heap_deferred_commit_log_construct @ 140da65f0

void __cdecl
pas_large_free_heap_deferred_commit_log_construct(pas_large_free_heap_deferred_commit_log *param_1)

{
  memset(param_1,0,800);
  return;
}

// pas_large_free_heap_deferred_commit_log_destruct @ 140da6610

void __cdecl
pas_large_free_heap_deferred_commit_log_destruct(pas_large_free_heap_deferred_commit_log *param_1)

{
  code *pcVar1;
  
  if (param_1->total != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((param_1->impl).size == 0) {
    pas_bootstrap_free_heap_deallocate_for_config
              ((param_1->impl).outline_array,(param_1->impl).outline_capacity * 0x18,
               pas_object_allocation,(void *)0x0);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_large_free_heap_deferred_commit_log_add @ 140da6650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
pas_large_free_heap_deferred_commit_log_add
          (pas_large_free_heap_deferred_commit_log *param_1,pas_large_virtual_range *param_2,
          pas_physical_memory_transaction *param_3)

{
  ulonglong uVar1;
  bool bVar2;
  code *pcVar3;
  BOOLEAN BVar4;
  undefined1 uVar5;
  pas_large_virtual_range *ppVar6;
  pas_large_virtual_range *ppVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar12;
  undefined1 auStack_88 [32];
  ulong64 local_68;
  undefined8 uStack_60;
  ulong64 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  ulong64 uVar11;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_88;
  if (((param_1->total == 0) && (param_3->lock_held != &pas_virtual_range_common_lock)) &&
     (BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_virtual_range_common_lock), BVar4 == '\0'))
  {
    pas_physical_memory_transaction_did_fail_to_acquire_lock(param_3,&pas_virtual_range_common_lock)
    ;
    if ((local_48 ^ (ulonglong)auStack_88) == __security_cookie.value) {
      return false;
    }
    goto LAB_140da679a;
  }
  if (param_2->end < param_2->begin) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  param_1->total = param_1->total + (param_2->end - param_2->begin);
  uVar1 = param_2->begin;
  local_68 = param_2->end;
  uStack_60 = *(undefined8 *)&param_2->mmap_capability;
  uVar10 = (param_1->impl).size;
  uVar12 = (param_1->impl).outline_capacity;
  uVar8 = uVar12 + 0x20;
  if (uVar8 <= uVar10) {
    if (uVar10 != uVar8) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar9 = 4;
    if (4 < uVar12 * 2) {
      uVar9 = uVar12 * 2;
    }
    if (uVar9 <= uVar12) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    ppVar6 = pas_bootstrap_free_heap_allocate_simple_for_config
                       (uVar9 * 0x18,"pas_large_virtual_range_min_heap/outline_array",
                        pas_object_allocation,(void *)0x0);
    uVar8 = uVar9 + 0x20;
    if (uVar8 <= uVar10) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    memset(ppVar6,0,uVar9 * 0x18);
    ppVar7 = (param_1->impl).outline_array;
    if (ppVar7 == (pas_large_virtual_range *)0x0) {
      ppVar7 = (pas_large_virtual_range *)0x0;
    }
    else {
      memcpy(ppVar6,ppVar7,uVar10 * 0x18 - 0x300);
      ppVar7 = (param_1->impl).outline_array;
    }
    pas_bootstrap_free_heap_deallocate_for_config
              (ppVar7,uVar12 * 0x18,pas_object_allocation,(void *)0x0);
    (param_1->impl).outline_array = ppVar6;
    (param_1->impl).outline_capacity = uVar9;
  }
  if (uVar8 <= uVar10) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  uVar11 = uVar10 + 1;
  if (uVar10 < 0x20) {
    ppVar6 = (param_1->impl).inline_array + uVar10;
    ppVar6->begin = 0;
    ppVar6->end = 0;
    *(undefined8 *)&(param_1->impl).inline_array[uVar10].mmap_capability = 0;
    (param_1->impl).size = uVar11;
    if (uVar10 != 0) goto LAB_140da6878;
    uVar8 = 0;
  }
  else {
    ppVar7 = (param_1->impl).outline_array;
    ppVar6 = ppVar7 + (uVar10 - 0x20);
    ppVar6->begin = 0;
    ppVar6->end = 0;
    *(undefined8 *)&ppVar7[uVar10 - 0x20].mmap_capability = 0;
    (param_1->impl).size = uVar11;
LAB_140da6878:
    do {
      uVar10 = uVar11 >> 1;
      uVar8 = uVar10 - 1;
      uVar12 = (param_1->impl).outline_capacity + 0x20;
      if (uVar12 <= uVar8) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if (uVar11 < 0x42) {
        ppVar6 = (param_1->impl).inline_array + (uVar10 - 1);
      }
      else {
        ppVar6 = (param_1->impl).outline_array + (uVar10 - 0x21);
      }
      local_58 = ppVar6->end;
      uStack_50 = *(undefined8 *)&ppVar6->mmap_capability;
      if (ppVar6->begin <= uVar1) {
        uVar8 = uVar11 - 1;
        if (uVar12 <= uVar8) goto LAB_140da6962;
        if (uVar11 < 0x21) goto LAB_140da6903;
        ppVar6 = (param_1->impl).outline_array + (uVar11 - 0x21);
        goto LAB_140da6926;
      }
      if (uVar12 <= uVar11 - 1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if (uVar11 < 0x21) {
        ppVar7 = (param_1->impl).inline_array + (uVar11 - 1);
      }
      else {
        ppVar7 = (param_1->impl).outline_array + (uVar11 - 0x21);
      }
      ppVar7->begin = ppVar6->begin;
      ppVar7->end = local_58;
      *(undefined8 *)&ppVar7->mmap_capability = uStack_50;
      bVar2 = 3 < uVar11;
      uVar11 = uVar10;
    } while (bVar2);
  }
  if ((param_1->impl).outline_capacity + 0x20 <= uVar8) {
LAB_140da6962:
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  uVar8 = 0;
LAB_140da6903:
  ppVar6 = (param_1->impl).inline_array + uVar8;
LAB_140da6926:
  ppVar6->begin = uVar1;
  ppVar6->end = local_68;
  *(undefined8 *)&ppVar6->mmap_capability = uStack_60;
  if ((local_48 ^ (ulonglong)auStack_88) == __security_cookie.value) {
    return true;
  }
LAB_140da679a:
  pcVar3 = (code *)swi(3);
  uVar5 = (*pcVar3)();
  return (bool)uVar5;
}

// pas_large_free_heap_deferred_commit_log_commit_all @ 140da6970

void __cdecl
pas_large_free_heap_deferred_commit_log_commit_all
          (pas_large_free_heap_deferred_commit_log *param_1,pas_physical_memory_transaction *param_2
          )

{
  commit_all(param_1,param_2,true);
  return;
}

// commit_all @ 140da6980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
commit_all(pas_large_free_heap_deferred_commit_log *param_1,pas_physical_memory_transaction *param_2
          ,bool param_3)

{
  pas_large_virtual_range *ppVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  pas_large_virtual_range *ppVar4;
  void *pvVar5;
  void *pvVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  bool bVar10;
  code *pcVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  pas_mmap_capability pVar14;
  void *pvVar16;
  pas_large_virtual_range *ppVar17;
  ulong64 *puVar18;
  ulonglong uVar19;
  void *pvVar20;
  ulong64 uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  void *pvVar25;
  undefined1 auStack_e8 [46];
  char local_ba;
  char local_b9;
  pas_physical_memory_transaction *local_b8;
  undefined8 local_b0;
  void *local_a8;
  void *local_a0;
  ulong64 local_98;
  undefined8 uStack_90;
  ulong64 local_88;
  undefined8 uStack_80;
  ulong64 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  undefined8 uVar15;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_1->total != 0) {
    uVar21 = (param_1->impl).size;
    if (uVar21 != 0) {
      ppVar1 = (param_1->impl).inline_array;
      local_b9 = !param_3;
      pvVar16 = (void *)0x0;
      uVar15 = 0;
      pvVar25 = (void *)0x0;
      local_ba = param_3;
      local_b8 = param_2;
      do {
        pVar14 = (pas_mmap_capability)uVar15;
        uVar3 = (param_1->impl).outline_capacity;
        if (uVar3 == 0xffffffffffffffe0) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)invalidInstructionException();
          (*pcVar11)();
        }
        uVar2 = uVar21 - 1;
        if (uVar3 + 0x20 <= uVar2) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)invalidInstructionException();
          (*pcVar11)();
        }
        if (uVar21 < 0x21) {
          ppVar17 = ppVar1 + uVar2;
          ppVar4 = ppVar1 + uVar2;
        }
        else {
          ppVar4 = (param_1->impl).outline_array;
          ppVar17 = ppVar4 + (uVar21 - 0x21);
          ppVar4 = ppVar4 + (uVar21 - 0x21);
        }
        pvVar5 = (void *)(param_1->impl).inline_array[0].begin;
        pvVar6 = (void *)(param_1->impl).inline_array[0].end;
        uVar7 = *(undefined8 *)&(param_1->impl).inline_array[0].mmap_capability;
        uVar8 = ppVar17->begin;
        local_78 = ppVar4->end;
        uStack_70 = (&ppVar4->end)[1];
        ppVar17->begin = 0;
        ppVar17->end = 0;
        *(undefined8 *)&ppVar17->mmap_capability = 0;
        if ((param_1->impl).outline_capacity == 0xffffffffffffffe0) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)invalidInstructionException();
          (*pcVar11)();
        }
        ppVar1->begin = 0;
        (param_1->impl).inline_array[0].end = 0;
        *(undefined8 *)&(param_1->impl).inline_array[0].mmap_capability = 0;
        (param_1->impl).size = uVar2;
        if (uVar21 != 1) {
          uVar22 = 1;
LAB_140da6b08:
          uVar12 = uVar22 * 2;
          uVar19 = uVar22 * 2 + 1;
          local_88 = 0;
          uStack_80 = 0;
          local_b0 = uVar7;
          local_a8 = pvVar25;
          local_a0 = pvVar6;
          if (uVar12 < uVar2) {
            if ((param_1->impl).outline_capacity + 0x20 <= uVar12) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)invalidInstructionException();
              (*pcVar11)();
            }
            if (uVar19 < 0x21) {
              ppVar17 = ppVar1 + uVar22 * 2;
            }
            else {
              ppVar17 = (param_1->impl).outline_array + uVar22 * 2 + -0x20;
            }
            uVar24 = ppVar17->begin;
            local_88 = ppVar17->end;
            uStack_80 = *(undefined8 *)&ppVar17->mmap_capability;
            bVar10 = uVar8 <= uVar24;
LAB_140da6b84:
            if (uVar12 == 0) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)invalidInstructionException();
              (*pcVar11)();
            }
            uVar23 = (param_1->impl).outline_capacity + 0x20;
            if (uVar23 <= uVar12 - 1) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)invalidInstructionException();
              (*pcVar11)();
            }
            if (uVar12 < 0x21) {
              ppVar17 = ppVar1 + (uVar12 - 1);
            }
            else {
              ppVar17 = (param_1->impl).outline_array + (uVar12 - 0x21);
            }
            uVar9 = ppVar17->begin;
            local_98 = ppVar17->end;
            uStack_90 = *(undefined8 *)&ppVar17->mmap_capability;
            if (bVar10) {
              if (uVar8 <= uVar9) goto LAB_140da6c6b;
LAB_140da6bfa:
              if (uVar23 <= uVar22 - 1) {
                    /* WARNING: Does not return */
                pcVar11 = (code *)invalidInstructionException();
                (*pcVar11)();
              }
              if (uVar22 < 0x21) {
                ppVar17 = ppVar1 + (uVar22 - 1);
              }
              else {
                ppVar17 = (param_1->impl).outline_array + (uVar22 - 0x21);
              }
              ppVar17->begin = uVar9;
              puVar18 = &local_98;
              uVar19 = uVar12;
            }
            else {
              if ((uVar9 < uVar8) && (uVar9 <= uVar24)) goto LAB_140da6bfa;
              if (uVar23 <= uVar22 - 1) {
                    /* WARNING: Does not return */
                pcVar11 = (code *)invalidInstructionException();
                (*pcVar11)();
              }
              if (uVar22 < 0x21) {
                ppVar17 = ppVar1 + (uVar22 - 1);
              }
              else {
                ppVar17 = (param_1->impl).outline_array + (uVar22 - 0x21);
              }
              ppVar17->begin = uVar24;
              puVar18 = &local_88;
            }
            uVar21 = puVar18[1];
            ppVar17->end = *puVar18;
            *(ulong64 *)&ppVar17->mmap_capability = uVar21;
            uVar22 = uVar19;
            goto LAB_140da6b08;
          }
          if (uVar12 <= uVar2) {
            bVar10 = true;
            uVar24 = 0;
            goto LAB_140da6b84;
          }
          uVar23 = (param_1->impl).outline_capacity + 0x20;
LAB_140da6c6b:
          if (uVar23 <= uVar22 - 1) {
                    /* WARNING: Does not return */
            pcVar11 = (code *)invalidInstructionException();
            (*pcVar11)();
          }
          if (uVar22 < 0x21) {
            ppVar17 = ppVar1 + (uVar22 - 1);
          }
          else {
            ppVar17 = (param_1->impl).outline_array + (uVar22 - 0x21);
          }
          ppVar17->begin = uVar8;
          ppVar17->end = local_78;
          *(undefined8 *)&ppVar17->mmap_capability = uStack_70;
        }
        if (pvVar6 < pvVar5) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)invalidInstructionException();
          (*pcVar11)();
        }
        if (pvVar6 == pvVar5) break;
        if (pvVar25 < pvVar16) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)invalidInstructionException();
          (*pcVar11)();
        }
        if (pvVar25 == pvVar16) {
          pvVar20 = pvVar16;
          if (pvVar5 != pvVar25) {
            uVar15 = uVar7;
            pvVar20 = pvVar5;
          }
        }
        else {
          if (pvVar6 <= pvVar5) {
                    /* WARNING: Does not return */
            pcVar11 = (code *)invalidInstructionException();
            (*pcVar11)();
          }
          if (pvVar16 < pvVar6 && pvVar5 < pvVar25) {
                    /* WARNING: Does not return */
            pcVar11 = (code *)invalidInstructionException();
            (*pcVar11)();
          }
          pvVar20 = pvVar5;
          uVar13 = uVar7;
          if (pvVar5 == pvVar25) {
            pvVar20 = pvVar16;
            uVar13 = uVar15;
          }
          uVar15 = uVar13;
          if ((pvVar5 != pvVar25 && local_b9 == '\0') && (longlong)pvVar25 - (longlong)pvVar16 != 0)
          {
            pas_page_malloc_commit(pvVar16,(longlong)pvVar25 - (longlong)pvVar16,pVar14);
            uVar15 = uVar7;
            pvVar20 = pvVar5;
          }
        }
        pvVar16 = pvVar20;
        pVar14 = (pas_mmap_capability)uVar15;
        uVar21 = (param_1->impl).size;
        pvVar25 = pvVar6;
      } while (uVar21 != 0);
      param_2 = local_b8;
      if (local_ba != '\0') {
        if (pvVar25 < pvVar16) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)invalidInstructionException();
          (*pcVar11)();
        }
        if ((longlong)pvVar25 - (longlong)pvVar16 != 0) {
          pas_page_malloc_commit(pvVar16,(longlong)pvVar25 - (longlong)pvVar16,pVar14);
        }
      }
    }
    if (param_2->lock_held != &pas_virtual_range_common_lock) {
      ReleaseSRWLockExclusive((PSRWLOCK)&pas_virtual_range_common_lock);
    }
    param_1->total = 0;
  }
  if ((local_60 ^ (ulonglong)auStack_e8) == __security_cookie.value) {
    return;
  }
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

// pas_large_free_heap_deferred_commit_log_pretend_to_commit_all @ 140da6df0

void __cdecl
pas_large_free_heap_deferred_commit_log_pretend_to_commit_all
          (pas_large_free_heap_deferred_commit_log *param_1,pas_physical_memory_transaction *param_2
          )

{
  commit_all(param_1,param_2,false);
  return;
}

