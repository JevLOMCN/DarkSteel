// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 26

// pas_segregated_view_get_size_directory_slow @ 140d7f2c0

pas_segregated_size_directory * __cdecl
pas_segregated_view_get_size_directory_slow(pas_segregated_view_opaque *param_1)

{
  code *pcVar1;
  longlong lVar2;
  uint uVar3;
  
  if (param_1 == (pas_segregated_view_opaque *)0x0) {
    return (pas_segregated_size_directory *)0x0;
  }
  uVar3 = (uint)param_1 & 7;
  lVar2 = 8;
  if (1 < uVar3) {
    if (uVar3 != 4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar2 = 0xb;
    if (((uint)param_1 & 7) != 4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  return (pas_segregated_size_directory *)
         (((uint)*(byte *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 2 + lVar2) * 0x80000 +
          (uint)*(ushort *)(((ulonglong)param_1 & 0xfffffffffffffff8) + lVar2) * 8) +
         pas_compact_heap_reservation_base);
}

// pas_segregated_view_get_page_config_kind @ 140d7f310

pas_segregated_page_config_kind __cdecl
pas_segregated_view_get_page_config_kind(pas_segregated_view_opaque *param_1)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  uint uVar4;
  
  uVar4 = (uint)param_1;
  switch(uVar4 & 7) {
  case 0:
  case 1:
    bVar1 = *(byte *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 10);
    uVar2 = *(ushort *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 8);
    break;
  case 2:
    if ((uVar4 & 7) != 2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if ((*(ulonglong *)((ulonglong)param_1 & 0xfffffffffffffff8) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    return (int)*(char *)(*(longlong *)
                           ((*(ulonglong *)((ulonglong)param_1 & 0xfffffffffffffff8) &
                            0xfffffffffffffffe) + 8) + 0xc);
  case 3:
    if ((uVar4 & 7) != 3) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    return (int)*(char *)(*(longlong *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 8) + 0xc);
  case 4:
    if ((uVar4 & 7) != 4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    bVar1 = *(byte *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 0xd);
    uVar2 = *(ushort *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 0xb);
    break;
  case 5:
    if ((uVar4 & 7) != 5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    return (int)*(char *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 0xc);
  default:
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  return (int)*(char *)(((uint)bVar1 * 0x80000 + (uint)uVar2 * 8) +
                        pas_compact_heap_reservation_base + 0xc);
}

// pas_segregated_view_get_page_config @ 140d7f3d0

pas_segregated_page_config * __cdecl
pas_segregated_view_get_page_config(pas_segregated_view_opaque *param_1)

{
  pas_segregated_page_config_kind pVar1;
  
  pVar1 = pas_segregated_view_get_page_config_kind(param_1);
  return (pas_segregated_page_config *)pas_segregated_page_config_kind_for_config_table[(int)pVar1];
}

// pas_segregated_view_get_index @ 140d7f400

ulong64 __cdecl pas_segregated_view_get_index(pas_segregated_view_opaque *param_1)

{
  code *pcVar1;
  
  switch((uint)param_1 & 7) {
  case 0:
  case 1:
    return (ulonglong)*(uint *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 0xc);
  case 2:
    return (ulonglong)(*(uint *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 0x18) & 0x7fffffff);
  case 3:
    return (ulonglong)
           (*(uint *)((ulonglong)
                      ((uint)*(byte *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 0x12) * 0x80000 +
                      (uint)*(ushort *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 0x10) * 8) +
                      0x18 + pas_compact_heap_reservation_base) & 0x7fffffff);
  case 4:
    return (ulonglong)*(byte *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 0xe);
  default:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
}

// pas_segregated_view_get_page_boundary @ 140d7f470

void * __cdecl pas_segregated_view_get_page_boundary(pas_segregated_view_opaque *param_1)

{
  code *pcVar1;
  uint3 uVar2;
  ulonglong *puVar3;
  void *pvVar4;
  
  switch((uint)param_1 & 7) {
  case 0:
  case 1:
  case 3:
    puVar3 = (ulonglong *)((ulonglong)param_1 & 0xfffffffffffffff8);
    goto LAB_140d7f48e;
  case 2:
    pvVar4 = *(void **)((ulonglong)param_1 & 0xfffffffffffffff8);
    break;
  case 4:
    if (((uint)param_1 & 7) != 4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar2 = *(uint3 *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 8);
    puVar3 = (ulonglong *)((ulonglong)uVar2 * 8 + pas_compact_heap_reservation_base);
    if (puVar3 == (ulonglong *)0x0 || uVar2 == 0) {
      return (void *)0x0;
    }
    pvVar4 = (void *)*puVar3;
    break;
  default:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (((ulonglong)pvVar4 & 1) != 0) {
    puVar3 = (ulonglong *)((ulonglong)pvVar4 & 0xfffffffffffffffe);
LAB_140d7f48e:
    pvVar4 = (void *)*puVar3;
  }
  return pvVar4;
}

// pas_segregated_view_get_page @ 140d7f500

pas_segregated_page * __cdecl pas_segregated_view_get_page(pas_segregated_view_opaque *param_1)

{
  code *pcVar1;
  uint3 uVar2;
  pas_segregated_page_config_kind pVar3;
  pas_segregated_page *ppVar4;
  ulonglong *puVar5;
  uint uVar6;
  void *pvVar7;
  undefined8 *puVar8;
  
  pVar3 = pas_segregated_view_get_page_config_kind(param_1);
  uVar6 = (uint)param_1 & 7;
  if (4 < uVar6) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  switch(uVar6) {
  default:
    puVar8 = (undefined8 *)((ulonglong)param_1 & 0xfffffffffffffff8);
    goto LAB_140d7f53c;
  case 2:
    pvVar7 = *(void **)((ulonglong)param_1 & 0xfffffffffffffff8);
    break;
  case 4:
    if (((uint)param_1 & 7) != 4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar2 = *(uint3 *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 8);
    puVar5 = (ulonglong *)((ulonglong)uVar2 * 8 + pas_compact_heap_reservation_base);
    if (puVar5 == (ulonglong *)0x0 || uVar2 == 0) {
      return (pas_segregated_page *)0x0;
    }
    pvVar7 = (void *)*puVar5;
  }
  if (((ulonglong)pvVar7 & 1) != 0) {
    puVar8 = (undefined8 *)((ulonglong)pvVar7 & 0xfffffffffffffffe);
LAB_140d7f53c:
    pvVar7 = (void *)*puVar8;
  }
  if (pvVar7 == (void *)0x0) {
    return (pas_segregated_page *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x000140d7f54c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ppVar4 = (pas_segregated_page *)
           (*pas_segregated_page_config_kind_for_config_table[(int)pVar3]->page_header_for_boundary)
                     (pvVar7);
  return ppVar4;
}

// pas_segregated_view_get_commit_lock @ 140d7f5c0

pas_lock * __cdecl pas_segregated_view_get_commit_lock(pas_segregated_view_opaque *param_1)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  uint uVar4;
  
  uVar4 = (uint)param_1;
  switch(uVar4 & 7) {
  case 0:
  case 1:
    return (pas_lock *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 0x10);
  case 2:
    if ((uVar4 & 7) != 2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    return (pas_lock *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 8);
  case 3:
    if ((uVar4 & 7) != 3) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    bVar1 = *(byte *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 0x12);
    uVar2 = *(ushort *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 0x10);
    break;
  case 4:
    if ((uVar4 & 7) != 4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    bVar1 = *(byte *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 10);
    uVar2 = *(ushort *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 8);
    break;
  default:
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  return (pas_lock *)
         (((uint)bVar1 * 0x80000 + (uint)uVar2 * 8) + pas_compact_heap_reservation_base + 8);
}

// pas_segregated_view_get_ownership_lock @ 140d7f660

pas_lock * __cdecl pas_segregated_view_get_ownership_lock(pas_segregated_view_opaque *param_1)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  uint uVar4;
  
  uVar4 = (uint)param_1;
  switch(uVar4 & 7) {
  case 0:
  case 1:
    return (pas_lock *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 0x18);
  case 2:
    if ((uVar4 & 7) != 2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    return (pas_lock *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 0x10);
  case 3:
    if ((uVar4 & 7) != 3) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    bVar1 = *(byte *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 0x12);
    uVar2 = *(ushort *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 0x10);
    break;
  case 4:
    if ((uVar4 & 7) != 4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    bVar1 = *(byte *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 10);
    uVar2 = *(ushort *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 8);
    break;
  default:
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  return (pas_lock *)
         (((uint)bVar1 * 0x80000 + (uint)uVar2 * 8) + pas_compact_heap_reservation_base + 0x10);
}

// pas_segregated_view_is_owned @ 140d7f700

bool __cdecl pas_segregated_view_is_owned(pas_segregated_view_opaque *param_1)

{
  code *pcVar1;
  uint uVar2;
  
  uVar2 = (uint)param_1;
  switch(uVar2 & 7) {
  case 0:
  case 1:
    return (bool)(*(byte *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 0xb) & 1);
  case 2:
    if ((uVar2 & 7) != 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    return (bool)(*(byte *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 0x1c) & 1);
  case 3:
    break;
  case 4:
    if ((uVar2 & 7) != 4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    return (bool)(*(byte *)((ulonglong)
                            ((uint)*(byte *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 10) *
                             0x80000 +
                            (uint)*(ushort *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 8) * 8) +
                            0x1c + pas_compact_heap_reservation_base) & 1);
  default:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((uVar2 & 7) != 3) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((*(byte *)((ulonglong)
                 ((uint)*(byte *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 0x12) * 0x80000 +
                 (uint)*(ushort *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 0x10) * 8) + 0x1c +
                pas_compact_heap_reservation_base) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  return true;
}

// pas_segregated_view_lock_ownership_lock @ 140d7f7b0

void __cdecl pas_segregated_view_lock_ownership_lock(pas_segregated_view_opaque *param_1)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  uint uVar4;
  
  uVar4 = (uint)param_1;
  switch(uVar4 & 7) {
  case 0:
  case 1:
                    /* WARNING: Could not recover jumptable at 0x000140d7f7da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    AcquireSRWLockExclusive((PSRWLOCK)(((ulonglong)param_1 & 0xfffffffffffffff8) + 0x18));
    return;
  case 2:
    if ((uVar4 & 7) != 2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
                    /* WARNING: Could not recover jumptable at 0x000140d7f80f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    AcquireSRWLockExclusive((PSRWLOCK)(((ulonglong)param_1 & 0xfffffffffffffff8) + 0x10));
    return;
  case 3:
    if ((uVar4 & 7) != 3) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    bVar1 = *(byte *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 0x12);
    uVar2 = *(ushort *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 0x10);
    break;
  case 4:
    if ((uVar4 & 7) != 4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    bVar1 = *(byte *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 10);
    uVar2 = *(ushort *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 8);
    break;
  default:
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
                    /* WARNING: Could not recover jumptable at 0x000140d7f841. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AcquireSRWLockExclusive
            ((PSRWLOCK)
             (((uint)bVar1 * 0x80000 + (uint)uVar2 * 8) + pas_compact_heap_reservation_base + 0x10))
  ;
  return;
}

// pas_segregated_view_lock_ownership_lock_conditionally @ 140d7f860

void __cdecl
pas_segregated_view_lock_ownership_lock_conditionally
          (pas_segregated_view_opaque *param_1,pas_lock_hold_mode param_2)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  
  if (param_2 != pas_lock_is_not_held) {
    return;
  }
  uVar5 = (uint)param_1;
  switch(uVar5 & 7) {
  case 0:
  case 1:
    uVar6 = (ulonglong)param_1 & 0xfffffffffffffff8;
    lVar4 = 0x18;
    goto LAB_140d7f8e6;
  case 2:
    if ((uVar5 & 7) != 2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar6 = (ulonglong)param_1 & 0xfffffffffffffff8;
    goto LAB_140d7f8e1;
  case 3:
    if ((uVar5 & 7) != 3) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    bVar1 = *(byte *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 0x12);
    uVar2 = *(ushort *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 0x10);
    break;
  case 4:
    if ((uVar5 & 7) != 4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    bVar1 = *(byte *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 10);
    uVar2 = *(ushort *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 8);
    break;
  default:
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  uVar6 = ((uint)bVar1 * 0x80000 + (uint)uVar2 * 8) + pas_compact_heap_reservation_base;
LAB_140d7f8e1:
  lVar4 = 0x10;
LAB_140d7f8e6:
  AcquireSRWLockExclusive((PSRWLOCK)(uVar6 + lVar4));
  return;
}

// pas_segregated_view_lock_ownership_lock_if_owned @ 140d7f910

bool __cdecl pas_segregated_view_lock_ownership_lock_if_owned(pas_segregated_view_opaque *param_1)

{
  bool bVar1;
  
  bVar1 = pas_segregated_view_lock_ownership_lock_if_owned_conditionally
                    (param_1,pas_lock_is_not_held);
  return bVar1;
}

// pas_segregated_view_lock_ownership_lock_if_owned_conditionally @ 140d7f920

bool __cdecl
pas_segregated_view_lock_ownership_lock_if_owned_conditionally
          (pas_segregated_view_opaque *param_1,pas_lock_hold_mode param_2)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar6 = (uint)param_1;
  if (param_2 == pas_lock_is_not_held) {
    switch(uVar6 & 7) {
    case 0:
    case 1:
      uVar7 = (ulonglong)param_1 & 0xfffffffffffffff8;
      lVar5 = 0x18;
      goto LAB_140d7f9d3;
    case 2:
      if ((uVar6 & 7) != 2) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar7 = (ulonglong)param_1 & 0xfffffffffffffff8;
      goto LAB_140d7f9ce;
    case 3:
      if ((uVar6 & 7) != 3) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      bVar1 = *(byte *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 0x12);
      uVar2 = *(ushort *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 0x10);
      break;
    case 4:
      if ((uVar6 & 7) != 4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      bVar1 = *(byte *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 10);
      uVar2 = *(ushort *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 8);
      break;
    default:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar7 = ((uint)bVar1 * 0x80000 + (uint)uVar2 * 8) + pas_compact_heap_reservation_base;
LAB_140d7f9ce:
    lVar5 = 0x10;
LAB_140d7f9d3:
    AcquireSRWLockExclusive((PSRWLOCK)(uVar7 + lVar5));
    param_2 = pas_lock_is_not_held;
  }
  switch(uVar6 & 7) {
  case 0:
  case 1:
    lVar5 = 0x18;
    bVar1 = *(byte *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 0xb);
    break;
  case 2:
    if ((uVar6 & 7) != 2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar5 = 0x10;
    bVar1 = *(byte *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 0x1c) & 1;
    break;
  case 3:
    if ((uVar6 & 7) != 3) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if ((*(byte *)((ulonglong)
                   ((uint)*(byte *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 0x12) * 0x80000 +
                   (uint)*(ushort *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 0x10) * 8) + 0x1c +
                  pas_compact_heap_reservation_base) & 1) != 0) {
      return true;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  case 4:
    if ((uVar6 & 7) != 4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar7 = (ulonglong)
            ((uint)*(byte *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 10) * 0x80000 +
            (uint)*(ushort *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 8) * 8);
    if ((*(byte *)(uVar7 + 0x1c + pas_compact_heap_reservation_base) & 1) != 0) {
      return true;
    }
    uVar7 = uVar7 + pas_compact_heap_reservation_base;
    lVar5 = 0x10;
    goto joined_r0x000140d7fa4f;
  default:
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  bVar4 = true;
  if (bVar1 == 0) {
    uVar7 = (ulonglong)param_1 & 0xfffffffffffffff8;
joined_r0x000140d7fa4f:
    if (param_2 == pas_lock_is_not_held) {
      ReleaseSRWLockExclusive((PSRWLOCK)(uVar7 + lVar5));
    }
    bVar4 = false;
  }
  return bVar4;
}

// pas_segregated_view_unlock_ownership_lock_conditionally @ 140d7fad0

void __cdecl
pas_segregated_view_unlock_ownership_lock_conditionally
          (pas_segregated_view_opaque *param_1,pas_lock_hold_mode param_2)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar5 = (uint)param_1;
  switch(uVar5 & 7) {
  case 0:
  case 1:
    uVar6 = (ulonglong)param_1 & 0xfffffffffffffff8;
    lVar4 = 0x18;
    goto joined_r0x000140d7fb60;
  case 2:
    if ((uVar5 & 7) != 2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar6 = (ulonglong)param_1 & 0xfffffffffffffff8;
    goto joined_r0x000140d7fb60;
  case 3:
    if ((uVar5 & 7) != 3) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    bVar1 = *(byte *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 0x12);
    uVar2 = *(ushort *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 0x10);
    break;
  case 4:
    if ((uVar5 & 7) != 4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    bVar1 = *(byte *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 10);
    uVar2 = *(ushort *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 8);
    break;
  default:
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  uVar6 = ((uint)bVar1 * 0x80000 + (uint)uVar2 * 8) + pas_compact_heap_reservation_base;
joined_r0x000140d7fb60:
  lVar4 = 0x10;
joined_r0x000140d7fb60:
  if (param_2 != pas_lock_is_not_held) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140d7fb2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(uVar6 + lVar4));
  return;
}

// pas_segregated_view_unlock_ownership_lock @ 140d7fb80

void __cdecl pas_segregated_view_unlock_ownership_lock(pas_segregated_view_opaque *param_1)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  uint uVar4;
  
  uVar4 = (uint)param_1;
  switch(uVar4 & 7) {
  case 0:
  case 1:
                    /* WARNING: Could not recover jumptable at 0x000140d7fbaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)(((ulonglong)param_1 & 0xfffffffffffffff8) + 0x18));
    return;
  case 2:
    if ((uVar4 & 7) != 2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
                    /* WARNING: Could not recover jumptable at 0x000140d7fbdf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)(((ulonglong)param_1 & 0xfffffffffffffff8) + 0x10));
    return;
  case 3:
    if ((uVar4 & 7) != 3) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    bVar1 = *(byte *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 0x12);
    uVar2 = *(ushort *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 0x10);
    break;
  case 4:
    if ((uVar4 & 7) != 4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    bVar1 = *(byte *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 10);
    uVar2 = *(ushort *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 8);
    break;
  default:
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
                    /* WARNING: Could not recover jumptable at 0x000140d7fc11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive
            ((PSRWLOCK)
             (((uint)bVar1 * 0x80000 + (uint)uVar2 * 8) + pas_compact_heap_reservation_base + 0x10))
  ;
  return;
}

// pas_segregated_view_is_primordial_partial @ 140d7fc30

bool __cdecl pas_segregated_view_is_primordial_partial(pas_segregated_view_opaque *param_1)

{
  uint3 uVar1;
  
  if (((uint)param_1 & 7) == 4) {
    uVar1 = *(uint3 *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 8);
    return (ulonglong)uVar1 * 8 + pas_compact_heap_reservation_base == 0 || uVar1 == 0;
  }
  return false;
}

// pas_segregated_view_note_emptiness @ 140d7fc70

void __cdecl
pas_segregated_view_note_emptiness(pas_segregated_view_opaque *param_1,pas_segregated_page *param_2)

{
  code *pcVar1;
  uint uVar2;
  
  uVar2 = (uint)param_1 & 7;
  if (uVar2 < 2) {
    pas_segregated_exclusive_view_note_emptiness
              ((pas_segregated_exclusive_view *)((ulonglong)param_1 & 0xfffffffffffffff8),param_2);
    return;
  }
  if (uVar2 == 3) {
    if (((uint)param_1 & 7) == 3) {
      pas_segregated_shared_handle_note_emptiness
                ((pas_segregated_shared_handle *)((ulonglong)param_1 & 0xfffffffffffffff8));
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

// pas_segregated_view_for_each_live_object @ 140d7fcb0

bool __cdecl
pas_segregated_view_for_each_live_object
          (pas_segregated_view_opaque *param_1,
          _func___cdecl_bool_pas_segregated_view_opaque_ptr_pas_range_void_ptr *param_2,
          void *param_3,pas_lock_hold_mode param_4)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  
  uVar7 = (uint)param_1;
  if (param_4 == pas_lock_is_not_held) {
    switch(uVar7 & 7) {
    case 0:
    case 1:
      uVar6 = (ulonglong)param_1 & 0xfffffffffffffff8;
      lVar5 = 0x18;
      goto LAB_140d7fd76;
    case 2:
      if ((uVar7 & 7) != 2) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar6 = (ulonglong)param_1 & 0xfffffffffffffff8;
      goto LAB_140d7fd71;
    case 3:
      if ((uVar7 & 7) != 3) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      bVar1 = *(byte *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 0x12);
      uVar2 = *(ushort *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 0x10);
      break;
    case 4:
      if ((uVar7 & 7) != 4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      bVar1 = *(byte *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 10);
      uVar2 = *(ushort *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 8);
      break;
    default:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar6 = ((uint)bVar1 * 0x80000 + (uint)uVar2 * 8) + pas_compact_heap_reservation_base;
LAB_140d7fd71:
    lVar5 = 0x10;
LAB_140d7fd76:
    AcquireSRWLockExclusive((PSRWLOCK)(uVar6 + lVar5));
  }
  bVar4 = segregated_view_for_each_live_object(param_1,param_2,param_3);
  switch(uVar7 & 7) {
  case 0:
  case 1:
    uVar6 = (ulonglong)param_1 & 0xfffffffffffffff8;
    lVar5 = 0x18;
    goto joined_r0x000140d7fe2b;
  case 2:
    if ((uVar7 & 7) != 2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar6 = (ulonglong)param_1 & 0xfffffffffffffff8;
    lVar5 = 0x10;
    if (param_4 != pas_lock_is_not_held) {
      return bVar4;
    }
    goto LAB_140d7fdb3;
  case 3:
    if ((uVar7 & 7) != 3) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    bVar1 = *(byte *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 0x12);
    uVar2 = *(ushort *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 0x10);
    break;
  case 4:
    if ((uVar7 & 7) != 4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    bVar1 = *(byte *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 10);
    uVar2 = *(ushort *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 8);
    break;
  default:
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  uVar6 = ((uint)bVar1 * 0x80000 + (uint)uVar2 * 8) + pas_compact_heap_reservation_base;
  lVar5 = 0x10;
joined_r0x000140d7fe2b:
  if (param_4 == pas_lock_is_not_held) {
LAB_140d7fdb3:
    ReleaseSRWLockExclusive((PSRWLOCK)(uVar6 + lVar5));
  }
  return bVar4;
}

// segregated_view_for_each_live_object @ 140d7fe50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000140d80554) */
/* WARNING: Removing unreachable block (ram,0x000140d80731) */
/* WARNING: Removing unreachable block (ram,0x000140d80544) */
/* WARNING: Removing unreachable block (ram,0x000140d8073d) */

bool __cdecl
segregated_view_for_each_live_object
          (pas_segregated_view_opaque *param_1,
          _func___cdecl_bool_pas_segregated_view_opaque_ptr_pas_range_void_ptr *param_2,
          void *param_3)

{
  char *pcVar1;
  pas_page_base_config *ppVar2;
  code *pcVar3;
  uint3 uVar4;
  bool bVar5;
  undefined1 uVar6;
  pas_segregated_page_config_kind pVar7;
  longlong *plVar8;
  ulong64 uVar9;
  pas_page_base *ppVar10;
  byte bVar11;
  ulonglong *puVar12;
  void *pvVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  bool bVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  _func___cdecl_void_ptr_pas_page_base_ptr *p_Var26;
  uint uVar27;
  undefined1 auStack_98 [39];
  byte local_71;
  _func___cdecl_bool_pas_segregated_view_opaque_ptr_pas_range_void_ptr *local_70;
  void *local_68;
  void *local_60;
  pas_range local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_98;
  uVar20 = (uint)param_1;
  uVar27 = uVar20 & 7;
  switch(uVar27) {
  case 0:
  case 1:
    uVar18 = (ulonglong)param_1 & 0xfffffffffffffff8;
    bVar19 = true;
    if (*(char *)(uVar18 + 0xb) != '\x01') goto LAB_140d802c1;
    uVar20 = uVar20 & 7;
    pVar7 = pas_segregated_view_get_page_config_kind(param_1);
    ppVar2 = pas_segregated_page_config_kind_for_config_table[(int)pVar7];
    bVar11 = *(byte *)&ppVar2[1].page_config_ptr;
    uVar21 = *(ulonglong *)&ppVar2[1].page_config_kind;
    if (uVar20 == 3) goto LAB_140d8008c;
    if (uVar20 == 2) goto LAB_140d80010;
    local_71 = ppVar2->min_align_shift;
    p_Var26 = ppVar2->boundary_for_page_header;
    if (((ulonglong)param_1 & 6) != 0) {
      local_70 = param_2;
      if (uVar20 != 4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      goto LAB_140d7ff64;
    }
    uVar18 = (ulonglong)
             *(uint *)(pas_compact_heap_reservation_base + 0xc +
                      (ulonglong)
                      *(uint *)((ulonglong)
                                ((uint)*(byte *)(uVar18 + 10) * 0x80000 +
                                (uint)*(ushort *)(uVar18 + 8) * 8) + 0x30 +
                               pas_compact_heap_reservation_base) * 8);
    if (uVar18 < 8) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      local_70 = param_2;
      (*pcVar3)();
    }
    uVar21 = uVar21 + 0x1f >> 5;
    lVar23 = pas_compact_heap_reservation_base + uVar18;
    plVar8 = (longlong *)0x0;
    local_70 = param_2;
    break;
  case 2:
    if ((uVar20 & 7) != 2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    bVar19 = true;
    if ((*(byte *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 0x1c) & 1) == 0) goto LAB_140d802c1;
    pVar7 = pas_segregated_view_get_page_config_kind(param_1);
    ppVar2 = pas_segregated_page_config_kind_for_config_table[(int)pVar7];
    bVar11 = *(byte *)&ppVar2[1].page_config_ptr;
    uVar21._0_4_ = ppVar2[1].page_config_kind;
    uVar21._4_1_ = ppVar2[1].min_align_shift;
    uVar21._5_3_ = *(undefined3 *)&ppVar2[1].field_0x1d;
LAB_140d80010:
    bVar19 = true;
    if ((*(ulonglong *)((ulonglong)param_1 & 0xfffffffffffffff8) & 1) == 0) goto LAB_140d802c1;
    uVar18 = *(ulonglong *)((ulonglong)param_1 & 0xfffffffffffffff8) & 0xfffffffffffffffe;
    uVar21 = uVar21 >> (bVar11 & 0x3f);
    uVar9 = pas_compact_heap_reservation_base;
    goto joined_r0x000140d80099;
  case 3:
    if ((uVar20 & 7) != 3) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if ((*(byte *)((ulonglong)
                   ((uint)*(byte *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 0x12) * 0x80000 +
                   (uint)*(ushort *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 0x10) * 8) + 0x1c +
                  pas_compact_heap_reservation_base) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    pVar7 = pas_segregated_view_get_page_config_kind(param_1);
    ppVar2 = pas_segregated_page_config_kind_for_config_table[(int)pVar7];
    bVar11 = *(byte *)&ppVar2[1].page_config_ptr;
    uVar21._0_4_ = ppVar2[1].page_config_kind;
    uVar21._4_1_ = ppVar2[1].min_align_shift;
    uVar21._5_3_ = *(undefined3 *)&ppVar2[1].field_0x1d;
LAB_140d8008c:
    uVar18 = (ulonglong)param_1 & 0xfffffffffffffff8;
    uVar21 = uVar21 >> (bVar11 & 0x3f);
    uVar9 = pas_compact_heap_reservation_base;
joined_r0x000140d80099:
    bVar19 = true;
    pas_compact_heap_reservation_base = uVar9;
    if (uVar21 != 0) {
      bVar19 = true;
      uVar22 = 0;
      do {
        uVar14 = (ulonglong)*(uint *)(uVar18 + 0x14 + uVar22 * 4);
        if ((uVar14 != 0) && (uVar14 = uVar9 + uVar14 * 8, uVar14 != 0)) {
          if (uVar22 != 0) {
            uVar16 = 0;
            do {
              uVar24 = (ulonglong)*(uint *)(uVar18 + 0x14 + uVar16 * 4);
              uVar25 = uVar9 + uVar24 * 8;
              if (uVar24 == 0) {
                uVar25 = 0;
              }
              if (uVar25 == uVar14) goto LAB_140d800ce;
              uVar16 = uVar16 + 1;
            } while (uVar22 != uVar16);
          }
          bVar5 = segregated_view_for_each_live_object
                            ((pas_segregated_view_opaque *)(uVar14 | 4),param_2,param_3);
          uVar9 = pas_compact_heap_reservation_base;
          if (!bVar5) goto LAB_140d802bf;
        }
LAB_140d800ce:
        uVar22 = uVar22 + 1;
      } while (uVar22 != uVar21);
    }
    goto LAB_140d802c1;
  case 4:
    if ((uVar20 & 7) != 4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    bVar19 = true;
    if ((*(byte *)((ulonglong)
                   ((uint)*(byte *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 10) * 0x80000 +
                   (uint)*(ushort *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 8) * 8) + 0x1c +
                  pas_compact_heap_reservation_base) & 1) == 0) goto LAB_140d802c1;
    local_70 = param_2;
    pVar7 = pas_segregated_view_get_page_config_kind(param_1);
    local_71 = pas_segregated_page_config_kind_for_config_table[(int)pVar7]->min_align_shift;
    p_Var26 = pas_segregated_page_config_kind_for_config_table[(int)pVar7]->boundary_for_page_header
    ;
LAB_140d7ff64:
    plVar8 = (longlong *)((ulonglong)param_1 & 0xfffffffffffffff8);
    uVar21 = (ulonglong)((uint)*(byte *)((longlong)plVar8 + 0xf) + (uint)*(byte *)(plVar8 + 2));
    lVar23 = *plVar8;
    plVar8 = (longlong *)((ulonglong)*(byte *)(plVar8 + 2) << 5);
    uVar20 = 4;
    break;
  default:
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  pVar7 = pas_segregated_view_get_page_config_kind(param_1);
  ppVar2 = pas_segregated_page_config_kind_for_config_table[(int)pVar7];
  puVar12 = (ulonglong *)
            ((longlong)&switchD_140d7ffae::switchdataD_1531ec024 +
            (longlong)(int)(&switchD_140d7ffae::switchdataD_1531ec024)[uVar27]);
  local_60 = param_3;
  switch(uVar27) {
  default:
    puVar15 = (undefined8 *)((ulonglong)param_1 & 0xfffffffffffffff8);
LAB_140d7ffb7:
    pvVar13 = (void *)*puVar15;
    break;
  case 2:
    puVar12 = (ulonglong *)((ulonglong)param_1 & 0xfffffffffffffff8);
LAB_140d801b0:
    pvVar13 = (void *)*puVar12;
    if (((ulonglong)pvVar13 & 1) != 0) {
      puVar15 = (undefined8 *)((ulonglong)pvVar13 & 0xfffffffffffffffe);
      goto LAB_140d7ffb7;
    }
    break;
  case 4:
    if (uVar20 != 4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar4 = *(uint3 *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 8);
    puVar12 = (ulonglong *)((ulonglong)uVar4 * 8 + pas_compact_heap_reservation_base);
    if (puVar12 != (ulonglong *)0x0 && uVar4 != 0) goto LAB_140d801b0;
    ppVar10 = (pas_page_base *)0x0;
    local_68 = (*p_Var26)((pas_page_base *)0x0);
    goto LAB_140d80212;
  case 5:
  case 6:
    pcVar1 = (char *)((longlong)&ppVar2[-2].create_page_header + 1);
    *pcVar1 = *pcVar1 + (char)puVar12;
                    /* WARNING: Could not recover jumptable at 0x000140d80342. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (*(code *)((longlong)&switchD_140d80342::switchdataD_1531ec038 +
                      (longlong)(int)(&switchD_140d80342::switchdataD_1531ec038)[(longlong)param_3])
            )((code *)((longlong)&switchD_140d80342::switchdataD_1531ec038 +
                      (longlong)(int)(&switchD_140d80342::switchdataD_1531ec038)[(longlong)param_3])
             );
    return (bool)uVar6;
  case 7:
    if ((puVar12 == (ulonglong *)0x0 | 0x24U) == 0) {
      pvVar13 = (void *)*puVar12;
      if (((ulonglong)pvVar13 & 1) != 0) {
        pvVar13 = *(void **)((ulonglong)pvVar13 & 0xfffffffffffffffe);
      }
      if (pvVar13 == (void *)0x0) {
        ppVar10 = (pas_page_base *)0x0;
      }
      else {
        ppVar10 = (*pas_segregated_page_config_kind_for_config_table[(int)ppVar2]->
                    page_header_for_boundary)(pvVar13);
      }
      if ((uVar21 & 6) != 0) {
        plVar8 = (longlong *)(uVar21 & 0xfffffffffffffff8);
        goto LAB_140d805db;
      }
      uVar18 = (ulonglong)
               *(uint *)(pas_compact_heap_reservation_base + 0xc +
                        (ulonglong)
                        *(uint *)((ulonglong)
                                  ((uint)*(byte *)((uVar21 & 0xfffffffffffffff8) + 10) * 0x80000 +
                                  (uint)*(ushort *)((uVar21 & 0xfffffffffffffff8) + 8) * 8) + 0x30 +
                                 pas_compact_heap_reservation_base) * 8);
      if (uVar18 < 8) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar27 = (uint)(*(longlong *)(lVar23 + 0x80) + 0x1fU >> 5);
      lVar17 = pas_compact_heap_reservation_base + uVar18;
      uVar20 = 0;
    }
    else {
      ppVar10 = (pas_page_base *)0x0;
LAB_140d805db:
      uVar20 = (uint)*(byte *)(plVar8 + 2);
      uVar27 = (uint)*(byte *)((longlong)plVar8 + 0xf) + (uint)*(byte *)(plVar8 + 2);
      lVar17 = *plVar8;
    }
    if ((uint)param_3 < 2) {
      bVar11 = *(byte *)(lVar23 + 0xb3);
    }
    else {
      if ((uint)param_3 != 4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      bVar11 = *(byte *)(lVar23 + 0xb2);
    }
    if ((bVar11 & 1) == 0) {
      uVar6 = 0;
      if (uVar20 << 5 < uVar27 << 5) {
        uVar18 = (ulonglong)(uVar20 << 5);
        do {
          uVar22 = uVar18 >> 5;
          if ((((*(uint *)(lVar17 + uVar22 * 4) >> ((uint)uVar18 & 0x1e) & 1) != 0) &&
              ((*(uint *)(ppVar10 + uVar22 * 4 + 0x2c) & 1 << ((byte)uVar18 & 0x1e)) == 0)) ||
             ((uVar20 = 2 << ((byte)uVar18 & 0x1e), (*(uint *)(lVar17 + uVar22 * 4) & uVar20) != 0
              && ((*(uint *)(ppVar10 + uVar22 * 4 + 0x2c) & uVar20) == 0)))) goto LAB_140d80725;
          uVar18 = uVar18 + 2;
        } while (uVar27 << 5 != uVar18);
      }
    }
    else {
      uVar6 = 0;
      if (uVar20 < uVar27) {
        uVar18 = (ulonglong)uVar20;
        do {
          if ((*(int *)(lVar17 + uVar18 * 4) != 0) && (*(int *)(ppVar10 + uVar18 * 4 + 0x2c) == 0))
          goto LAB_140d80725;
          uVar18 = uVar18 + 1;
        } while (uVar27 != uVar18);
      }
    }
LAB_140d804e5:
    switch((ulonglong)param_3 & 0xffffffff) {
    case 0:
    case 1:
      uVar21 = uVar21 & 0xfffffffffffffff8;
      lVar23 = 0x18;
      break;
    case 2:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    case 3:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    case 4:
      uVar21 = ((uint)*(byte *)((uVar21 & 0xfffffffffffffff8) + 10) * 0x80000 +
               (uint)*(ushort *)((uVar21 & 0xfffffffffffffff8) + 8) * 8) +
               pas_compact_heap_reservation_base;
      lVar23 = 0x10;
      break;
    default:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(uVar21 + lVar23));
    return (bool)uVar6;
  }
  if (pvVar13 == (void *)0x0) {
    ppVar10 = (pas_page_base *)0x0;
  }
  else {
    ppVar10 = (*ppVar2->page_header_for_boundary)(pvVar13);
  }
  local_68 = (*p_Var26)(ppVar10);
  if (uVar20 == 5) {
    uVar18 = (ulonglong)param_1 & 0xfffffffffffffff8;
    bVar11 = local_71;
  }
  else {
    if (uVar27 < 2) {
      lVar17 = 8;
    }
    else {
      if (uVar27 != 4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if (uVar20 != 4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
LAB_140d80212:
      lVar17 = 0xb;
    }
    uVar18 = ((uint)*(byte *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 2 + lVar17) * 0x80000 +
             (uint)*(ushort *)(((ulonglong)param_1 & 0xfffffffffffffff8) + lVar17) * 8) +
             pas_compact_heap_reservation_base;
    bVar11 = local_71;
  }
  bVar19 = true;
  local_71 = bVar11;
  if ((uint)plVar8 < (uint)((int)uVar21 << 5)) {
    bVar19 = true;
    uVar18 = (ulonglong)(*(uint *)(uVar18 + 0x20) & 0x7ffffff);
    do {
      if (((*(uint *)(lVar23 + ((ulonglong)plVar8 >> 5) * 4) >> ((uint)plVar8 & 0x1f) & 1) != 0) &&
         ((*(uint *)(ppVar10 + ((ulonglong)plVar8 >> 5) * 4 + 0x2c) & 1 << ((byte)plVar8 & 0x1f)) !=
          0)) {
        uVar22 = ((longlong)plVar8 << (bVar11 & 0x3f)) + (longlong)local_68;
        if (CARRY8(uVar22,uVar18)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        local_58.begin = uVar22;
        local_58.end = uVar22 + uVar18;
        bVar5 = (*local_70)(param_1,&local_58,local_60);
        if (!bVar5) goto LAB_140d802bf;
      }
      plVar8 = (longlong *)((longlong)plVar8 + 1);
    } while ((longlong *)(ulonglong)(uint)((int)uVar21 << 5) != plVar8);
  }
LAB_140d802c1:
  if ((local_48 ^ (ulonglong)auStack_98) != __security_cookie.value) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  return bVar19;
LAB_140d80725:
  uVar6 = 2;
  goto LAB_140d804e5;
LAB_140d802bf:
  bVar19 = false;
  goto LAB_140d802c1;
}

// pas_segregated_view_should_be_eligible @ 140d80310

pas_tri_state __cdecl
pas_segregated_view_should_be_eligible
          (pas_segregated_view_opaque *param_1,pas_segregated_page_config *param_2)

{
  byte bVar1;
  code *pcVar2;
  pas_segregated_page_config_kind pVar3;
  pas_page_base_config *ppVar4;
  pas_page_base *ppVar5;
  ulonglong *puVar6;
  longlong lVar7;
  pas_tri_state pVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  void *pvVar15;
  longlong *plVar16;
  uint uVar17;
  
  uVar12 = (uint)param_1;
  uVar17 = uVar12 & 7;
  switch(uVar17) {
  case 0:
  case 1:
    puVar14 = (undefined8 *)((ulonglong)param_1 & 0xfffffffffffffff8);
    uVar12 = uVar12 & 7;
    AcquireSRWLockExclusive((PSRWLOCK)(puVar14 + 3));
    if (uVar12 == 3) goto LAB_140d80499;
    if (uVar12 != 2) {
      pVar8 = pas_tri_state_yes;
      if (*(char *)((longlong)puVar14 + 0xb) == '\x01') {
        pVar3 = pas_segregated_view_get_page_config_kind(param_1);
        ppVar4 = pas_segregated_page_config_kind_for_config_table[(int)pVar3];
LAB_140d805ae:
        pvVar15 = (void *)*puVar14;
        goto LAB_140d805b1;
      }
      goto LAB_140d804e5;
    }
    break;
  case 2:
    if ((uVar12 & 7) != 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    AcquireSRWLockExclusive((PSRWLOCK)(((ulonglong)param_1 & 0xfffffffffffffff8) + 0x10));
    break;
  case 3:
    if ((uVar12 & 7) != 3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    AcquireSRWLockExclusive
              ((PSRWLOCK)
               (pas_compact_heap_reservation_base +
                ((uint)*(byte *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 0x12) * 0x80000 +
                (uint)*(ushort *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 0x10) * 8) + 0x10));
LAB_140d80499:
    uVar13 = ((uint)*(byte *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 0x12) * 0x80000 +
             (uint)*(ushort *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 0x10) * 8) +
             pas_compact_heap_reservation_base;
    uVar12 = 3;
    goto LAB_140d804bb;
  case 4:
    if ((uVar12 & 7) != 4) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar13 = (ulonglong)param_1 & 0xfffffffffffffff8;
    AcquireSRWLockExclusive
              ((PSRWLOCK)
               (pas_compact_heap_reservation_base +
                ((uint)*(byte *)(uVar13 + 10) * 0x80000 + (uint)*(ushort *)(uVar13 + 8) * 8) + 0x10)
              );
    pVar8 = pas_tri_state_yes;
    if ((*(byte *)((ulonglong)
                   ((uint)*(byte *)(uVar13 + 10) * 0x80000 + (uint)*(ushort *)(uVar13 + 8) * 8) +
                   0x1c + pas_compact_heap_reservation_base) & 1) != 0) {
      pVar3 = pas_segregated_view_get_page_config_kind(param_1);
      puVar6 = (ulonglong *)
               ((ulonglong)*(uint3 *)(uVar13 + 8) * 8 + pas_compact_heap_reservation_base);
      if (puVar6 == (ulonglong *)0x0 || *(uint3 *)(uVar13 + 8) == 0) {
        ppVar5 = (pas_page_base *)0x0;
LAB_140d805db:
        plVar16 = (longlong *)((ulonglong)param_1 & 0xfffffffffffffff8);
        uVar11 = (uint)*(byte *)(plVar16 + 2);
        uVar9 = (uint)*(byte *)((longlong)plVar16 + 0xf) + (uint)*(byte *)(plVar16 + 2);
        lVar7 = *plVar16;
        uVar12 = 4;
        if (1 < uVar17) goto LAB_140d8069c;
LAB_140d80601:
        bVar1 = param_2->enable_empty_word_eligibility_optimization_for_exclusive;
      }
      else {
        ppVar4 = pas_segregated_page_config_kind_for_config_table[(int)pVar3];
        pvVar15 = (void *)*puVar6;
        uVar12 = 4;
        if (((ulonglong)pvVar15 & 1) != 0) {
          puVar14 = (undefined8 *)((ulonglong)pvVar15 & 0xfffffffffffffffe);
          goto LAB_140d805ae;
        }
LAB_140d805b1:
        if (pvVar15 == (void *)0x0) {
          ppVar5 = (pas_page_base *)0x0;
        }
        else {
          ppVar5 = (*ppVar4->page_header_for_boundary)(pvVar15);
        }
        if (((ulonglong)param_1 & 6) != 0) {
          if (uVar12 != 4) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          goto LAB_140d805db;
        }
        uVar13 = (ulonglong)
                 *(uint *)(pas_compact_heap_reservation_base + 0xc +
                          (ulonglong)
                          *(uint *)((ulonglong)
                                    ((uint)*(byte *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 10)
                                     * 0x80000 +
                                    (uint)*(ushort *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 8)
                                    * 8) + 0x30 + pas_compact_heap_reservation_base) * 8);
        if (uVar13 < 8) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        uVar9 = (uint)(param_2->num_alloc_bits + 0x1f >> 5);
        lVar7 = pas_compact_heap_reservation_base + uVar13;
        uVar11 = 0;
        if (uVar17 < 2) goto LAB_140d80601;
LAB_140d8069c:
        if (uVar17 != 4) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        bVar1 = param_2->enable_empty_word_eligibility_optimization_for_shared;
      }
      if ((bVar1 & 1) == 0) {
        pVar8 = pas_tri_state_no;
        if (uVar11 << 5 < uVar9 << 5) {
          uVar13 = (ulonglong)(uVar11 << 5);
          do {
            uVar10 = uVar13 >> 5;
            if ((((*(uint *)(lVar7 + uVar10 * 4) >> ((uint)uVar13 & 0x1e) & 1) != 0) &&
                ((*(uint *)(ppVar5 + uVar10 * 4 + 0x2c) & 1 << ((byte)uVar13 & 0x1e)) == 0)) ||
               ((uVar11 = 2 << ((byte)uVar13 & 0x1e), (*(uint *)(lVar7 + uVar10 * 4) & uVar11) != 0
                && ((*(uint *)(ppVar5 + uVar10 * 4 + 0x2c) & uVar11) == 0)))) goto LAB_140d80725;
            uVar13 = uVar13 + 2;
            pVar8 = pas_tri_state_no;
          } while (uVar9 << 5 != uVar13);
        }
      }
      else {
        pVar8 = pas_tri_state_no;
        if (uVar11 < uVar9) {
          uVar13 = (ulonglong)uVar11;
          do {
            if ((*(int *)(lVar7 + uVar13 * 4) != 0) && (*(int *)(ppVar5 + uVar13 * 4 + 0x2c) == 0))
            goto LAB_140d80725;
            uVar13 = uVar13 + 1;
          } while (uVar9 != uVar13);
        }
      }
      goto LAB_140d804e5;
    }
    goto LAB_140d80525;
  default:
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar13 = (ulonglong)param_1 & 0xfffffffffffffff8;
  uVar12 = 2;
LAB_140d804bb:
  uVar10 = (param_2->base).max_object_size;
  if (uVar10 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  pVar8 = pas_tri_state_yes -
          ((uint)((int)param_2->shared_payload_size + (int)param_2->shared_payload_offset) <
          (uint)((int)uVar10 + *(int *)(uVar13 + 0x20)));
  goto LAB_140d804e5;
LAB_140d80725:
  pVar8 = pas_tri_state_yes;
LAB_140d804e5:
  switch(uVar17) {
  case 0:
  case 1:
    uVar13 = (ulonglong)param_1 & 0xfffffffffffffff8;
    lVar7 = 0x18;
    goto LAB_140d80572;
  case 2:
    if (uVar12 != 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar13 = (ulonglong)param_1 & 0xfffffffffffffff8;
    break;
  case 3:
    if (uVar12 != 3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar13 = ((uint)*(byte *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 0x12) * 0x80000 +
             (uint)*(ushort *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 0x10) * 8) +
             pas_compact_heap_reservation_base;
    break;
  case 4:
    if (uVar12 != 4) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
LAB_140d80525:
    uVar13 = ((uint)*(byte *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 10) * 0x80000 +
             (uint)*(ushort *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 8) * 8) +
             pas_compact_heap_reservation_base;
    break;
  default:
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar7 = 0x10;
LAB_140d80572:
  ReleaseSRWLockExclusive((PSRWLOCK)(uVar13 + lVar7));
  return pVar8;
}

// pas_segregated_view_for_object @ 140d80750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_segregated_view_opaque * __cdecl
pas_segregated_view_for_object(ulong64 param_1,pas_heap_config *param_2)

{
  code *pcVar1;
  pas_segregated_view_opaque *ppVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_48 [40];
  pas_segregated_page_and_config local_20;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  pas_segregated_page_and_config_for_address_and_heap_config(&local_20,param_1,param_2);
  if ((local_20.config == (pas_segregated_page_config *)0x0) ==
      (local_20.page != (pas_segregated_page *)0x0)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (local_20.page == (pas_segregated_page *)0x0) {
    ppVar2 = (pas_segregated_view_opaque *)0x0;
  }
  else {
    ppVar2 = (local_20.page)->owner;
    uVar4 = (uint)ppVar2 & 7;
    if (uVar4 < 2) {
      ppVar2 = (pas_segregated_view_opaque *)((ulonglong)ppVar2 & 0xfffffffffffffff8);
    }
    else {
      if (uVar4 != 3) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      uVar3 = ((local_20.config)->base).page_size;
      uVar5 = uVar3 - 1;
      if ((uVar3 ^ uVar5) <= uVar5) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      uVar5 = ((uVar5 & param_1) >> (((local_20.config)->base).min_align_shift & 0x3f)) >>
              ((local_20.config)->sharing_shift & 0x3f);
      if ((local_20.config)->num_alloc_bits >> ((local_20.config)->sharing_shift & 0x3f) <= uVar5) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      uVar3 = (ulonglong)*(uint *)(((ulonglong)ppVar2 & 0xfffffffffffffff8) + 0x14 + uVar5 * 4);
      uVar5 = uVar3 * 8 + pas_compact_heap_reservation_base;
      if (uVar3 == 0) {
        uVar5 = 0;
      }
      ppVar2 = (pas_segregated_view_opaque *)(uVar5 | 4);
      if (uVar5 == 0) {
        ppVar2 = (pas_segregated_view_opaque *)0x0;
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == __security_cookie.value) {
    return ppVar2;
  }
  pcVar1 = (code *)swi(3);
  ppVar2 = (pas_segregated_view_opaque *)(*pcVar1)();
  return ppVar2;
}

// pas_segregated_view_compute_summary @ 140d80870

pas_heap_summary * __cdecl
pas_segregated_view_compute_summary
          (pas_heap_summary *__return_storage_ptr__,pas_segregated_view_opaque *param_1,
          pas_segregated_page_config *param_2)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)param_1;
  uVar2 = uVar3 & 7;
  if (uVar2 < 2) {
    pas_segregated_exclusive_view_compute_summary
              (__return_storage_ptr__,
               (pas_segregated_exclusive_view *)((ulonglong)param_1 & 0xfffffffffffffff8));
  }
  else if (uVar2 == 2) {
    if ((uVar3 & 7) != 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    pas_segregated_shared_view_compute_summary
              (__return_storage_ptr__,
               (pas_segregated_shared_view *)((ulonglong)param_1 & 0xfffffffffffffff8),param_2);
  }
  else {
    if (uVar2 != 4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if ((uVar3 & 7) != 4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    pas_segregated_partial_view_compute_summary
              (__return_storage_ptr__,
               (pas_segregated_partial_view *)((ulonglong)param_1 & 0xfffffffffffffff8));
  }
  return __return_storage_ptr__;
}

// pas_segregated_view_is_eligible @ 140d808e0

bool __cdecl pas_segregated_view_is_eligible(pas_segregated_view_opaque *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = (uint)param_1 & 7;
  if (uVar3 < 2) {
    bVar2 = pas_segregated_exclusive_view_is_eligible
                      ((pas_segregated_exclusive_view *)((ulonglong)param_1 & 0xfffffffffffffff8));
    return bVar2;
  }
  if (uVar3 == 4) {
    if (((uint)param_1 & 7) == 4) {
      bVar2 = pas_segregated_partial_view_is_eligible
                        ((pas_segregated_partial_view *)((ulonglong)param_1 & 0xfffffffffffffff8));
      return bVar2;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_segregated_view_is_payload_empty @ 140d80920

bool __cdecl pas_segregated_view_is_payload_empty(pas_segregated_view_opaque *param_1)

{
  bool bVar1;
  
  bVar1 = pas_segregated_view_for_each_live_object
                    (param_1,is_payload_empty_callback,(void *)0x0,pas_lock_is_not_held);
  return bVar1;
}

// is_payload_empty_callback @ 140d80940

bool __cdecl
is_payload_empty_callback(pas_segregated_view_opaque *param_1,pas_range *param_2,void *param_3)

{
  return false;
}

// pas_segregated_view_is_empty @ 140d80950

bool __cdecl pas_segregated_view_is_empty(pas_segregated_view_opaque *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = (uint)param_1;
  switch(uVar3 & 7) {
  case 0:
  case 1:
    bVar2 = pas_segregated_exclusive_view_is_empty
                      ((pas_segregated_exclusive_view *)((ulonglong)param_1 & 0xfffffffffffffff8));
    return bVar2;
  case 2:
    break;
  case 3:
    if ((uVar3 & 7) != 3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    bVar2 = pas_segregated_shared_view_is_empty
                      ((pas_segregated_shared_view *)
                       (((uint)*(byte *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 0x12) * 0x80000
                        + (uint)*(ushort *)(((ulonglong)param_1 & 0xfffffffffffffff8) + 0x10) * 8) +
                       pas_compact_heap_reservation_base));
    return bVar2;
  case 4:
    return false;
  default:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((uVar3 & 7) != 2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  bVar2 = pas_segregated_shared_view_is_empty
                    ((pas_segregated_shared_view *)((ulonglong)param_1 & 0xfffffffffffffff8));
  return bVar2;
}

