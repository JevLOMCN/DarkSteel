// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 10

// pas_deferred_decommit_log_construct @ 140d851c0

void __cdecl
pas_deferred_decommit_log_construct
          (pas_deferred_decommit_log *param_1,pas_lock **param_2,ulong64 param_3,
          pas_physical_memory_transaction *param_4)

{
  code *pcVar1;
  
  if (param_4 != (pas_physical_memory_transaction *)0x0) {
    if (param_2 != (pas_lock **)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (param_3 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    param_2 = &param_4->lock_held;
    param_3 = 1;
  }
  memset(param_1,0,0x428);
  param_1->locks_already_held = param_2;
  param_1->num_locks_already_held = param_3;
  param_1->transaction = param_4;
  return;
}

// pas_deferred_decommit_log_destruct @ 140d85230

void __cdecl
pas_deferred_decommit_log_destruct(pas_deferred_decommit_log *param_1,pas_lock_hold_mode param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if ((param_1->impl).size != 0) {
                    /* WARNING: Does not return */
    UNRECOVERED_JUMPTABLE = (code *)invalidInstructionException();
    (*UNRECOVERED_JUMPTABLE)();
  }
  if (param_1->common_lock_hold_count == 0) {
    if (param_2 == pas_lock_is_not_held) {
      UNRECOVERED_JUMPTABLE = pas_bootstrap_free_heap_hold_lock_and_deallocate_for_config;
    }
    else {
      if (param_2 != pas_lock_is_held) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)invalidInstructionException();
        (*UNRECOVERED_JUMPTABLE)();
      }
      UNRECOVERED_JUMPTABLE = pas_bootstrap_free_heap_deallocate_for_config;
    }
                    /* WARNING: Could not recover jumptable at 0x000140d85274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((param_1->impl).outline_array,(param_1->impl).outline_capacity << 5,0,0);
    return;
  }
                    /* WARNING: Does not return */
  UNRECOVERED_JUMPTABLE = (code *)invalidInstructionException();
  (*UNRECOVERED_JUMPTABLE)();
}

// pas_deferred_decommit_log_lock_for_adding @ 140d85290

bool __cdecl
pas_deferred_decommit_log_lock_for_adding
          (pas_deferred_decommit_log *param_1,pas_lock *param_2,pas_lock_hold_mode param_3)

{
  ulonglong uVar1;
  BOOLEAN BVar2;
  ulong64 uVar3;
  bool bVar4;
  
  uVar1 = (param_1->impl).size;
  if (uVar1 < pas_deferred_decommit_log_soft_size_limit) {
    uVar3 = param_1->num_locks_already_held;
    do {
      bVar4 = uVar3 == 0;
      uVar3 = uVar3 - 1;
      if (bVar4) {
        if ((param_2 == &pas_virtual_range_common_lock) && (param_1->common_lock_hold_count != 0)) {
          param_1->common_lock_hold_count = param_1->common_lock_hold_count + 1;
          return true;
        }
        if ((param_1->num_locks_already_held == 0 && uVar1 == 0) && param_3 == pas_lock_is_not_held)
        {
          AcquireSRWLockExclusive((PSRWLOCK)param_2);
        }
        else {
          BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)param_2);
          if (BVar2 == '\0') {
            if (param_1->transaction != (pas_physical_memory_transaction *)0x0) {
              pas_physical_memory_transaction_did_fail_to_acquire_lock(param_1->transaction,param_2)
              ;
            }
            goto LAB_140d8534e;
          }
        }
        if (param_2 != &pas_virtual_range_common_lock) {
          return true;
        }
        param_1->common_lock_hold_count = param_1->common_lock_hold_count + 1;
        return true;
      }
    } while (param_1->locks_already_held[uVar3] != param_2);
    bVar4 = true;
  }
  else {
LAB_140d8534e:
    bVar4 = false;
  }
  return bVar4;
}

// pas_deferred_decommit_log_add @ 140d85360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
pas_deferred_decommit_log_add
          (pas_deferred_decommit_log *param_1,pas_virtual_range *param_2,pas_lock_hold_mode param_3)

{
  ulonglong uVar1;
  PSRWLOCK SRWLock;
  code *pcVar2;
  BOOLEAN BVar3;
  undefined1 uVar4;
  ulong64 uVar5;
  bool bVar6;
  undefined1 auStack_78 [32];
  pas_virtual_range local_58;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  uVar1 = (param_1->impl).size;
  if (uVar1 < pas_deferred_decommit_log_soft_size_limit) {
    SRWLock = (PSRWLOCK)param_2->lock_ptr;
    if (SRWLock != (PSRWLOCK)0x0) {
      uVar5 = param_1->num_locks_already_held;
      do {
        bVar6 = uVar5 == 0;
        uVar5 = uVar5 - 1;
        if (bVar6) {
          if ((SRWLock != (PSRWLOCK)&pas_virtual_range_common_lock) ||
             (uVar5 = param_1->common_lock_hold_count, uVar5 == 0)) {
            if ((param_1->num_locks_already_held == 0 && uVar1 == 0) &&
                param_3 == pas_lock_is_not_held) {
              AcquireSRWLockExclusive(SRWLock);
            }
            else {
              BVar3 = TryAcquireSRWLockExclusive(SRWLock);
              if (BVar3 == '\0') {
                if (param_1->transaction != (pas_physical_memory_transaction *)0x0) {
                  pas_physical_memory_transaction_did_fail_to_acquire_lock
                            (param_1->transaction,(pas_lock *)SRWLock);
                }
                goto LAB_140d85470;
              }
            }
            if (SRWLock != (PSRWLOCK)&pas_virtual_range_common_lock) break;
            uVar5 = param_1->common_lock_hold_count;
          }
          param_1->common_lock_hold_count = uVar5 + 1;
          break;
        }
      } while ((PSRWLOCK)param_1->locks_already_held[uVar5] != SRWLock);
    }
    local_58.begin = param_2->begin;
    local_58.end = param_2->end;
    local_58.lock_ptr = param_2->lock_ptr;
    local_58.mmap_capability = param_2->mmap_capability;
    local_58._28_4_ = *(undefined4 *)&param_2->field_0x1c;
    pas_deferred_decommit_log_add_already_locked(param_1,&local_58,param_3);
    if ((local_30 ^ (ulonglong)auStack_78) == __security_cookie.value) {
      return true;
    }
  }
  else {
LAB_140d85470:
    if ((local_30 ^ (ulonglong)auStack_78) == __security_cookie.value) {
      return false;
    }
  }
  pcVar2 = (code *)swi(3);
  uVar4 = (*pcVar2)();
  return (bool)uVar4;
}

// pas_deferred_decommit_log_add_already_locked @ 140d854a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
pas_deferred_decommit_log_add_already_locked
          (pas_deferred_decommit_log *param_1,pas_virtual_range *param_2,pas_lock_hold_mode param_3)

{
  pas_lock **pppVar1;
  ulonglong uVar2;
  bool bVar3;
  code *pcVar4;
  pas_virtual_range *ppVar5;
  pas_virtual_range *ppVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar11;
  code *pcVar12;
  undefined1 auStack_b8 [40];
  code *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  ulong64 local_68;
  pas_lock *ppStack_60;
  undefined8 local_58;
  ulonglong local_48;
  ulong64 uVar10;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if (param_2->end < param_2->begin) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  param_1->total = param_1->total + (param_2->end - param_2->begin);
  if (param_3 == pas_lock_is_not_held) {
    pcVar12 = pas_bootstrap_free_heap_hold_lock_and_deallocate_for_config;
    pcVar4 = pas_bootstrap_free_heap_hold_lock_and_allocate_for_config;
  }
  else {
    if (param_3 != pas_lock_is_held) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    pcVar12 = pas_bootstrap_free_heap_deallocate_for_config;
    pcVar4 = pas_bootstrap_free_heap_allocate_simple_for_config;
  }
  uVar2 = param_2->begin;
  local_78 = *(undefined8 *)&param_2->mmap_capability;
  local_88 = (undefined4)param_2->end;
  uStack_84 = *(undefined4 *)((longlong)&param_2->end + 4);
  uStack_80 = *(undefined4 *)&param_2->lock_ptr;
  uStack_7c = *(undefined4 *)((longlong)&param_2->lock_ptr + 4);
  uVar9 = (param_1->impl).size;
  uVar11 = (param_1->impl).outline_capacity;
  uVar7 = uVar11 + 0x20;
  if (uVar7 <= uVar9) {
    if (uVar9 != uVar7) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    uVar8 = 4;
    if (4 < uVar11 * 2) {
      uVar8 = uVar11 * 2;
    }
    if (uVar8 <= uVar11) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    ppVar5 = (pas_virtual_range *)
             (*pcVar4)(uVar8 << 5,"pas_virtual_range_min_heap/outline_array",0,0);
    uVar7 = uVar8 + 0x20;
    if (uVar7 <= uVar9) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    local_90 = pcVar12;
    memset(ppVar5,0,uVar8 << 5);
    ppVar6 = (param_1->impl).outline_array;
    if (ppVar6 == (pas_virtual_range *)0x0) {
      ppVar6 = (pas_virtual_range *)0x0;
    }
    else {
      memcpy(ppVar5,ppVar6,uVar9 * 0x20 - 0x400);
      ppVar6 = (param_1->impl).outline_array;
    }
    (*local_90)(ppVar6,uVar11 << 5,0,0);
    (param_1->impl).outline_array = ppVar5;
    (param_1->impl).outline_capacity = uVar8;
  }
  if (uVar7 <= uVar9) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  uVar10 = uVar9 + 1;
  if (uVar9 < 0x20) {
    pppVar1 = &(param_1->impl).inline_array[uVar9].lock_ptr;
    *pppVar1 = (pas_lock *)0x0;
    pppVar1[1] = (pas_lock *)0x0;
    ppVar5 = (param_1->impl).inline_array + uVar9;
    ppVar5->begin = 0;
    ppVar5->end = 0;
    (param_1->impl).size = uVar10;
    if (uVar9 == 0) {
      uVar7 = 0;
      goto LAB_140d8560a;
    }
  }
  else {
    ppVar5 = (param_1->impl).outline_array;
    pppVar1 = &ppVar5[uVar9 - 0x20].lock_ptr;
    *pppVar1 = (pas_lock *)0x0;
    pppVar1[1] = (pas_lock *)0x0;
    ppVar5 = ppVar5 + (uVar9 - 0x20);
    ppVar5->begin = 0;
    ppVar5->end = 0;
    (param_1->impl).size = uVar10;
  }
  do {
    uVar9 = uVar10 >> 1;
    uVar7 = uVar9 - 1;
    uVar11 = (param_1->impl).outline_capacity + 0x20;
    if (uVar11 <= uVar7) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    if (uVar10 < 0x42) {
      ppVar5 = (param_1->impl).inline_array + (uVar9 - 1);
    }
    else {
      ppVar5 = (param_1->impl).outline_array + (uVar9 - 0x21);
    }
    local_58 = *(undefined8 *)&ppVar5->mmap_capability;
    local_68 = ppVar5->end;
    ppStack_60 = ppVar5->lock_ptr;
    if (ppVar5->begin <= uVar2) {
      uVar7 = uVar10 - 1;
      if (uVar11 <= uVar7) goto LAB_140d8579c;
      if (uVar10 < 0x21) goto LAB_140d85735;
      ppVar5 = (param_1->impl).outline_array + (uVar10 - 0x21);
      goto LAB_140d85757;
    }
    if (uVar11 <= uVar10 - 1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    if (uVar10 < 0x21) {
      ppVar6 = (param_1->impl).inline_array + (uVar10 - 1);
    }
    else {
      ppVar6 = (param_1->impl).outline_array + (uVar10 - 0x21);
    }
    ppVar6->begin = ppVar5->begin;
    ppVar6->end = local_68;
    ppVar6->lock_ptr = ppStack_60;
    *(undefined8 *)&ppVar6->mmap_capability = local_58;
    bVar3 = 3 < uVar10;
    uVar10 = uVar9;
  } while (bVar3);
LAB_140d8560a:
  if ((param_1->impl).outline_capacity + 0x20 <= uVar7) {
LAB_140d8579c:
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  uVar7 = 0;
LAB_140d85735:
  ppVar5 = (param_1->impl).inline_array + uVar7;
LAB_140d85757:
  ppVar5->begin = uVar2;
  *(undefined4 *)&ppVar5->end = local_88;
  *(undefined4 *)((longlong)&ppVar5->end + 4) = uStack_84;
  *(undefined4 *)&ppVar5->lock_ptr = uStack_80;
  *(undefined4 *)((longlong)&ppVar5->lock_ptr + 4) = uStack_7c;
  *(undefined8 *)&ppVar5->mmap_capability = local_78;
  if ((local_48 ^ (ulonglong)auStack_b8) != __security_cookie.value) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  return;
}

// pas_deferred_decommit_log_add_maybe_locked @ 140d857b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
pas_deferred_decommit_log_add_maybe_locked
          (pas_deferred_decommit_log *param_1,pas_virtual_range *param_2,
          pas_range_locked_mode param_3,pas_lock_hold_mode param_4)

{
  code *pcVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined1 auStack_48 [32];
  pas_virtual_range local_28;
  ulonglong local_8;
  
  local_8 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (param_3 == pas_range_is_not_locked) {
    local_28.begin = param_2->begin;
    local_28.end = param_2->end;
    local_28.lock_ptr = param_2->lock_ptr;
    local_28.mmap_capability = param_2->mmap_capability;
    local_28._28_4_ = *(undefined4 *)&param_2->field_0x1c;
    bVar3 = pas_deferred_decommit_log_add(param_1,&local_28,param_4);
    if ((local_8 ^ (ulonglong)auStack_48) == __security_cookie.value) {
      return bVar3;
    }
  }
  else {
    if (param_3 != pas_range_is_locked) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    local_28.begin = param_2->begin;
    local_28.end = param_2->end;
    local_28.lock_ptr = param_2->lock_ptr;
    local_28.mmap_capability = param_2->mmap_capability;
    local_28._28_4_ = *(undefined4 *)&param_2->field_0x1c;
    pas_deferred_decommit_log_add_already_locked(param_1,&local_28,param_4);
    if ((local_8 ^ (ulonglong)auStack_48) == __security_cookie.value) {
      return true;
    }
  }
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return (bool)uVar2;
}

// pas_deferred_decommit_log_unlock_after_aborted_add @ 140d85850

void __cdecl
pas_deferred_decommit_log_unlock_after_aborted_add
          (pas_deferred_decommit_log *param_1,pas_lock *param_2)

{
  code *pcVar1;
  ulong64 uVar2;
  bool bVar3;
  
  uVar2 = param_1->num_locks_already_held;
  do {
    bVar3 = uVar2 == 0;
    uVar2 = uVar2 - 1;
    if (bVar3) {
      if (param_2 != &pas_virtual_range_common_lock) {
                    /* WARNING: Could not recover jumptable at 0x000140d85883. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ReleaseSRWLockExclusive((PSRWLOCK)param_2);
        return;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  } while (param_1->locks_already_held[uVar2] != param_2);
  return;
}

// pas_deferred_decommit_log_decommit_all @ 140d858a0

void __cdecl pas_deferred_decommit_log_decommit_all(pas_deferred_decommit_log *param_1)

{
  decommit_all(param_1,true);
  return;
}

// decommit_all @ 140d858b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl decommit_all(pas_deferred_decommit_log *param_1,bool param_2)

{
  pas_virtual_range *ppVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  pas_virtual_range *ppVar4;
  pas_virtual_range *ppVar5;
  pas_virtual_range *ppVar6;
  code *pcVar7;
  ulonglong uVar8;
  pas_lock *ppVar9;
  ulonglong uVar10;
  ulong64 uVar11;
  PSRWLOCK SRWLock;
  pas_virtual_range *ppVar12;
  pas_virtual_range *ppVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulong64 uVar16;
  ulong64 *puVar17;
  ulonglong uVar18;
  pas_virtual_range *ppVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  pas_virtual_range *ppVar22;
  bool bVar23;
  undefined1 auStack_108 [47];
  char local_d9;
  ulong64 local_d8;
  pas_virtual_range **local_d0;
  ulong64 local_c8;
  ulong64 uStack_c0;
  pas_lock *local_b8;
  undefined8 uStack_b0;
  ulong64 local_a8;
  pas_lock *ppStack_a0;
  pas_lock *local_98;
  undefined8 uStack_90;
  ulong64 local_88;
  pas_lock *ppStack_80;
  undefined8 local_78;
  ulong64 local_68;
  pas_lock *ppStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_108;
  uVar11 = (param_1->impl).size;
  local_d9 = param_2;
  if (uVar11 != 0) {
    ppVar1 = (param_1->impl).inline_array;
    uVar16 = uVar11;
    do {
      uVar2 = (param_1->impl).outline_capacity;
      local_d8 = uVar11;
      if (uVar2 == 0xffffffffffffffe0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
      local_c8 = ppVar1->begin;
      uStack_c0 = (param_1->impl).inline_array[0].end;
      local_b8 = (param_1->impl).inline_array[0].lock_ptr;
      uStack_b0 = *(undefined8 *)&(param_1->impl).inline_array[0].mmap_capability;
      uVar14 = uVar16 - 1;
      if (uVar2 + 0x20 <= uVar14) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
      if (uVar16 < 0x21) {
        ppVar12 = ppVar1 + uVar14;
        ppVar4 = ppVar1 + uVar14;
      }
      else {
        ppVar4 = (param_1->impl).outline_array;
        ppVar12 = ppVar4 + (uVar16 - 0x21);
        ppVar4 = ppVar4 + (uVar16 - 0x21);
      }
      puVar17 = &ppVar4->end;
      uVar18 = ppVar12->begin;
      local_98 = (pas_lock *)puVar17[2];
      local_a8 = *puVar17;
      ppStack_a0 = (pas_lock *)puVar17[1];
      ppVar12->lock_ptr = (pas_lock *)0x0;
      *(undefined8 *)&ppVar12->mmap_capability = 0;
      ppVar12->begin = 0;
      ppVar12->end = 0;
      if ((param_1->impl).outline_capacity == 0xffffffffffffffe0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
      (param_1->impl).inline_array[0].lock_ptr = (pas_lock *)0x0;
      *(undefined8 *)&(param_1->impl).inline_array[0].mmap_capability = 0;
      ppVar1->begin = 0;
      (param_1->impl).inline_array[0].end = 0;
      (param_1->impl).size = uVar14;
      if (uVar16 == 1) {
        uVar14 = 0;
LAB_140d85c7c:
        ppVar12 = ppVar1 + uVar14;
      }
      else {
        uVar15 = 1;
LAB_140d85a55:
        uVar8 = uVar15 * 2;
        uVar10 = uVar15 * 2 + 1;
        local_68 = 0;
        ppStack_60 = (pas_lock *)0x0;
        local_58 = 0;
        if (uVar8 < uVar14) {
          if ((param_1->impl).outline_capacity + 0x20 <= uVar8) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)invalidInstructionException();
            (*pcVar7)();
          }
          if (uVar10 < 0x21) {
            ppVar12 = ppVar1 + uVar15 * 2;
          }
          else {
            ppVar12 = (param_1->impl).outline_array + uVar15 * 2 + -0x20;
          }
          uVar21 = ppVar12->begin;
          local_58 = *(undefined8 *)&ppVar12->mmap_capability;
          local_68 = ppVar12->end;
          ppStack_60 = ppVar12->lock_ptr;
          bVar23 = uVar18 <= uVar21;
joined_r0x000140d85aae:
          if (uVar8 == 0) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)invalidInstructionException();
            (*pcVar7)();
          }
          uVar20 = (param_1->impl).outline_capacity + 0x20;
          if (uVar20 <= uVar8 - 1) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)invalidInstructionException();
            (*pcVar7)();
          }
          if (uVar8 < 0x21) {
            ppVar12 = ppVar1 + (uVar8 - 1);
          }
          else {
            ppVar12 = (param_1->impl).outline_array + (uVar8 - 0x21);
          }
          uVar3 = ppVar12->begin;
          local_78 = *(undefined8 *)&ppVar12->mmap_capability;
          local_88 = ppVar12->end;
          ppStack_80 = ppVar12->lock_ptr;
          if (bVar23) {
            if (uVar18 <= uVar3) goto LAB_140d85beb;
LAB_140d85b7a:
            if (uVar20 <= uVar15 - 1) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)invalidInstructionException();
              (*pcVar7)();
            }
            if (uVar15 < 0x21) {
              ppVar12 = ppVar1 + (uVar15 - 1);
            }
            else {
              ppVar12 = (param_1->impl).outline_array + (uVar15 - 0x21);
            }
            ppVar12->begin = uVar3;
            puVar17 = &local_88;
            uVar15 = uVar8;
          }
          else {
            if ((uVar3 < uVar18) && (uVar3 <= uVar21)) goto LAB_140d85b7a;
            if (uVar20 <= uVar15 - 1) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)invalidInstructionException();
              (*pcVar7)();
            }
            if (uVar15 < 0x21) {
              ppVar12 = ppVar1 + (uVar15 - 1);
            }
            else {
              ppVar12 = (param_1->impl).outline_array + (uVar15 - 0x21);
            }
            ppVar12->begin = uVar21;
            puVar17 = &local_68;
            uVar15 = uVar10;
          }
          *(ulong64 *)&ppVar12->mmap_capability = puVar17[2];
          ppVar9 = (pas_lock *)puVar17[1];
          ppVar12->end = *puVar17;
          ppVar12->lock_ptr = ppVar9;
          goto LAB_140d85a55;
        }
        if (uVar8 <= uVar14) {
          bVar23 = true;
          uVar21 = 0;
          goto joined_r0x000140d85aae;
        }
        uVar20 = (param_1->impl).outline_capacity + 0x20;
LAB_140d85beb:
        if (uVar20 <= uVar15 - 1) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        if (uVar15 < 0x21) {
          ppVar12 = ppVar1 + (uVar15 - 1);
        }
        else {
          ppVar12 = (param_1->impl).outline_array + (uVar15 - 0x21);
        }
        ppVar12->begin = uVar18;
        ppVar12->end = local_a8;
        ppVar12->lock_ptr = ppStack_a0;
        *(pas_lock **)&ppVar12->mmap_capability = local_98;
        uVar14 = (param_1->impl).size;
        if (uVar14 == 0xffffffffffffffff) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          local_a8 = local_c8;
          ppStack_a0 = (pas_lock *)uStack_c0;
          local_98 = local_b8;
          uStack_90 = uStack_b0;
          (*pcVar7)();
        }
        if ((param_1->impl).outline_capacity + 0x20 <= uVar14) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          local_a8 = local_c8;
          ppStack_a0 = (pas_lock *)uStack_c0;
          local_98 = local_b8;
          uStack_90 = uStack_b0;
          (*pcVar7)();
        }
        if (uVar14 + 1 < 0x21) goto LAB_140d85c7c;
        ppVar12 = (param_1->impl).outline_array + (uVar14 - 0x20);
      }
      ppVar12->lock_ptr = local_b8;
      *(undefined8 *)&ppVar12->mmap_capability = uStack_b0;
      ppVar12->begin = local_c8;
      ppVar12->end = uStack_c0;
      uVar16 = (param_1->impl).size;
      local_a8 = local_c8;
      ppStack_a0 = (pas_lock *)uStack_c0;
      local_98 = local_b8;
      uStack_90 = uStack_b0;
    } while (uVar16 != 0);
    (param_1->impl).size = uVar11;
    if (uVar11 != 0) {
      local_d0 = &param_1[-1].impl.outline_array;
      do {
        uVar14 = uVar11 - 1;
        uVar18 = (param_1->impl).outline_capacity + 0x20;
        if (uVar18 <= uVar14) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        if (uVar11 < 0x21) {
          ppVar12 = ppVar1 + uVar14;
        }
        else {
          ppVar12 = (param_1->impl).outline_array + (uVar11 - 0x21);
        }
        ppVar4 = (pas_virtual_range *)ppVar12->begin;
        ppVar19 = (pas_virtual_range *)(local_d0 + uVar11 * 4);
        ppVar6 = (pas_virtual_range *)ppVar12->end;
        uVar15 = uVar11;
        do {
          ppVar13 = ppVar6;
          uVar10 = uVar14;
          local_d8 = uVar11;
          if (uVar10 == 0) break;
          if (uVar18 <= uVar11 - 2) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)invalidInstructionException();
            (*pcVar7)();
          }
          ppVar22 = ppVar19;
          if (0x21 < uVar10 + 1) {
            ppVar22 = (param_1->impl).outline_array + (uVar15 - 0x22);
          }
          ppVar5 = (pas_virtual_range *)ppVar22->begin;
          ppVar6 = (pas_virtual_range *)ppVar22->end;
          if (ppVar6 < ppVar5) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)invalidInstructionException();
            (*pcVar7)();
          }
          if (ppVar13 < ppVar4) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)invalidInstructionException();
            (*pcVar7)();
          }
          if ((ppVar13 != ppVar4) && (ppVar5 != ppVar6)) {
            if (ppVar6 <= ppVar5) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)invalidInstructionException();
              (*pcVar7)();
            }
            if ((ppVar5 < ppVar13) && (ppVar4 < ppVar6)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)invalidInstructionException();
              (*pcVar7)();
            }
          }
          if (ppVar5 < ppVar13) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)invalidInstructionException();
            (*pcVar7)();
          }
          if (ppVar5 != ppVar13) break;
          ppVar19 = ppVar19 + -1;
          uVar15 = uVar15 - 1;
          uVar14 = uVar10 - 1;
        } while (ppVar22->mmap_capability == ppVar12->mmap_capability);
        if (local_d9 != '\0') {
          if (ppVar13 < ppVar4) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)invalidInstructionException();
            (*pcVar7)();
          }
          pas_page_malloc_decommit
                    (ppVar4,(longlong)ppVar13 - (longlong)ppVar4,ppVar12->mmap_capability);
        }
        if (local_d8 < uVar10 + 1) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        uVar11 = uVar10;
      } while (uVar10 != 0);
      uVar11 = (param_1->impl).size;
      if (uVar11 != 0) {
        do {
          uVar14 = uVar11 - 1;
          if ((param_1->impl).outline_capacity + 0x20 <= uVar14) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)invalidInstructionException();
            (*pcVar7)();
          }
          if (uVar11 < 0x21) {
            SRWLock = (PSRWLOCK)ppVar1[uVar14].lock_ptr;
          }
          else {
            SRWLock = (PSRWLOCK)(param_1->impl).outline_array[uVar11 - 0x21].lock_ptr;
          }
          if (SRWLock != (PSRWLOCK)0x0) {
            uVar11 = param_1->num_locks_already_held;
            do {
              bVar23 = uVar11 == 0;
              uVar11 = uVar11 - 1;
              if (bVar23) {
                if (SRWLock == (PSRWLOCK)&pas_virtual_range_common_lock) {
                  if (param_1->common_lock_hold_count == 0) {
                    /* WARNING: Does not return */
                    pcVar7 = (code *)invalidInstructionException();
                    (*pcVar7)();
                  }
                  uVar11 = param_1->common_lock_hold_count - 1;
                  param_1->common_lock_hold_count = uVar11;
                  SRWLock = (PSRWLOCK)&pas_virtual_range_common_lock;
                  if (uVar11 != 0) break;
                }
                ReleaseSRWLockExclusive(SRWLock);
                break;
              }
            } while ((PSRWLOCK)param_1->locks_already_held[uVar11] != SRWLock);
          }
          uVar11 = uVar14;
        } while (uVar14 != 0);
      }
    }
  }
  (param_1->impl).size = 0;
  param_1->total = 0;
  if ((local_48 ^ (ulonglong)auStack_108) == __security_cookie.value) {
    return;
  }
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

// pas_deferred_decommit_log_pretend_to_decommit_all @ 140d85f40

void __cdecl pas_deferred_decommit_log_pretend_to_decommit_all(pas_deferred_decommit_log *param_1)

{
  decommit_all(param_1,false);
  return;
}

