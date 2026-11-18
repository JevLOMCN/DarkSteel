// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 4

// pas_bitfit_allocator_construct @ 140d81990

void __cdecl
pas_bitfit_allocator_construct(pas_bitfit_allocator *param_1,pas_bitfit_size_class *param_2)

{
  param_1->size_class = param_2;
  param_1->view = (pas_bitfit_view *)0x0;
  return;
}

// pas_bitfit_allocator_stop @ 140d819b0

void __cdecl pas_bitfit_allocator_stop(pas_bitfit_allocator *param_1)

{
  param_1->view = (pas_bitfit_view *)0x0;
  return;
}

// pas_bitfit_allocator_commit_view @ 140d819c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
pas_bitfit_allocator_commit_view
          (pas_bitfit_view *param_1,pas_bitfit_page_config *param_2,pas_lock_hold_mode param_3)

{
  pas_lock *SRWLock;
  pas_lock *SRWLock_00;
  pas_segregated_heap *ppVar1;
  code *pcVar2;
  uint3 uVar3;
  bool bVar4;
  undefined1 uVar5;
  void *pvVar6;
  pas_bitfit_page *ppVar7;
  longlong lVar8;
  byte unaff_BPL;
  int iVar9;
  undefined1 auStackY_88 [32];
  pas_physical_memory_transaction local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_88;
  uVar3 = *(uint3 *)(param_1->directory).payload;
  lVar8 = 0;
  if (uVar3 != 0) {
    lVar8 = (uint)uVar3 * 8 + pas_compact_heap_reservation_base;
  }
  ppVar1 = *(pas_segregated_heap **)(lVar8 + 0x30);
  if (param_3 == pas_lock_is_not_held) {
    ReleaseSRWLockExclusive((PSRWLOCK)&param_1->ownership_lock);
    pas_physical_page_sharing_pool_take_for_page_config
              ((param_2->base).page_size,&param_2->base,pas_lock_is_not_held,(pas_lock **)0x0,0);
    AcquireSRWLockExclusive((PSRWLOCK)&param_1->ownership_lock);
  }
  SRWLock = &param_1->ownership_lock;
  SRWLock_00 = &param_1->commit_lock;
  do {
    pvVar6 = param_1->page_boundary;
    if (param_1->is_owned == true) {
      unaff_BPL = 1;
      if (pvVar6 == (void *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      goto LAB_140d81bbe;
    }
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    if (pvVar6 == (void *)0x0) {
      pas_physical_memory_transaction_construct(&local_58);
      while( true ) {
        pas_physical_memory_transaction_begin(&local_58);
        AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
        AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
        if (param_1->page_boundary != (void *)0x0) break;
        if (param_1->is_owned == true) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        pvVar6 = (*param_2->page_allocator)(ppVar1,&local_58);
        param_1->page_boundary = pvVar6;
        if (pvVar6 != (void *)0x0) {
          if (pas_marge_bitfit_page_config_variant < param_2->variant) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          (*(param_2->base).create_page_header)(pvVar6,param_2->variant + 5,pas_lock_is_held);
        }
        ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
        bVar4 = pas_physical_memory_transaction_end(&local_58);
        if (bVar4) {
          iVar9 = 1;
          if (pvVar6 == (void *)0x0) {
            unaff_BPL = 0;
          }
          else {
            param_1->is_owned = true;
            ppVar7 = (pas_bitfit_page *)
                     (*(param_2->base).page_header_for_boundary)(param_1->page_boundary);
            pas_bitfit_page_construct(ppVar7,param_1,param_2);
            unaff_BPL = 1;
          }
          goto LAB_140d81b74;
        }
        if (pvVar6 != (void *)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
      bVar4 = pas_physical_memory_transaction_end(&local_58);
      iVar9 = 3;
      if (!bVar4) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    else {
      if (param_3 == pas_lock_is_not_held) {
        AcquireSRWLockExclusive((PSRWLOCK)SRWLock_00);
      }
      if (param_1->is_owned != true) {
        if (param_1->page_boundary == (void *)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if (param_1->is_owned == true) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        pas_page_base_commit_with_boundary(param_1->page_boundary,&param_2->base);
        if (pas_marge_bitfit_page_config_variant < param_2->variant) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        (*(param_2->base).create_page_header)
                  (param_1->page_boundary,param_2->variant + 5,pas_lock_is_not_held);
        AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
        if (param_1->is_owned == true) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        param_1->is_owned = true;
        ppVar7 = (pas_bitfit_page *)
                 (*(param_2->base).page_header_for_boundary)(param_1->page_boundary);
        pas_bitfit_page_construct(ppVar7,param_1,param_2);
        unaff_BPL = 1;
        if (param_3 == pas_lock_is_not_held) {
          ReleaseSRWLockExclusive((PSRWLOCK)SRWLock_00);
        }
        goto LAB_140d81bbe;
      }
      if (param_3 == pas_lock_is_not_held) {
        ReleaseSRWLockExclusive((PSRWLOCK)SRWLock_00);
      }
      AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
      iVar9 = 3;
    }
LAB_140d81b74:
    if (iVar9 != 3) {
LAB_140d81bbe:
      if ((local_48 ^ (ulonglong)auStackY_88) != __security_cookie.value) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      return (bool)(unaff_BPL & 1);
    }
  } while( true );
}

// pas_bitfit_allocator_finish_failing @ 140d81c70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_bitfit_view * __cdecl
pas_bitfit_allocator_finish_failing
          (pas_bitfit_allocator *param_1,pas_bitfit_view *param_2,ulong64 param_3,ulong64 param_4,
          ulong64 param_5,pas_bitfit_page_config *param_6)

{
  pas_lock *SRWLock;
  ulong64 uVar1;
  code *pcVar2;
  pas_versioned_field pVar3;
  BOOLEAN BVar4;
  pas_page_base *ppVar5;
  ulonglong uVar6;
  pas_bitfit_view *ppVar7;
  ulong64 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  pas_bitfit_directory *ppVar12;
  pas_bitfit_size_class *ppVar13;
  byte bVar14;
  bool bVar15;
  undefined1 auStackY_88 [32];
  pas_bitfit_view_and_index local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_88;
  SRWLock = &param_2->ownership_lock;
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  if (BVar4 != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  ppVar13 = param_1->size_class;
  uVar11 = (uint)(ppVar13->directory).payload[2] * 0x80000 +
           (uint)*(ushort *)(ppVar13->directory).payload * 8;
  if ((uint)(param_2->directory).payload[2] * 0x80000 +
      (uint)*(ushort *)(param_2->directory).payload * 8 != uVar11) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  ppVar12 = (pas_bitfit_directory *)(uVar11 + pas_compact_heap_reservation_base);
  uVar11 = param_2->index;
  if ((param_1->view == param_2 || param_1->view == (pas_bitfit_view *)0x0) &&
     (param_5 < ppVar13->size)) {
    param_1->view = (pas_bitfit_view *)0x0;
    if (param_2->page_boundary == (void *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    ppVar5 = (*(param_6->base).page_header_for_boundary)(param_2->page_boundary);
    ppVar5[1].page_kind = '\0';
    bVar14 = (byte)(param_5 >> ((param_6->base).min_align_shift & 0x3f));
    if (0xfd < bVar14) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if ((ppVar12->max_frees).size <= uVar11) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar6 = (ulonglong)(ppVar12->max_frees).spine.payload;
    uVar10 = (ulonglong)(uVar11 & 0x7f);
    lVar9 = pas_compact_heap_reservation_base + uVar6 * 8;
    if (uVar6 == 0) {
      lVar9 = 0;
    }
    uVar6 = (ulonglong)*(uint *)(lVar9 + (ulonglong)(uVar11 >> 7) * 4);
    lVar9 = pas_compact_heap_reservation_base + uVar6 * 8;
    if (uVar6 == 0) {
      lVar9 = 0;
    }
    if ((*(char *)(lVar9 + uVar10) == -1) &&
       (pas_log("%p:%zu: found empty when setting max_free\n"), *(char *)(lVar9 + uVar10) == -1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    *(byte *)(lVar9 + uVar10) = bVar14;
    do {
      uVar6 = (ulonglong)(ppVar13->next_smaller).payload;
      if ((uVar6 == 0) ||
         (ppVar13 = (pas_bitfit_size_class *)(pas_compact_heap_reservation_base + uVar6 * 8),
         ppVar13 == (pas_bitfit_size_class *)0x0)) goto LAB_140d81ea1;
    } while (param_5 < ppVar13->size);
    do {
      uVar1 = (ppVar13->first_free).version;
      do {
        uVar8 = uVar1;
        uVar6 = (ppVar13->first_free).value;
        uVar1 = (ppVar13->first_free).version;
      } while (uVar1 != uVar8);
      if (uVar11 < uVar6) {
        if (uVar8 != 0xffffffffffffffff) {
          LOCK();
          pVar3.version = uVar8;
          pVar3.value = uVar6;
          bVar15 = pVar3 == ppVar13->first_free;
          if (bVar15) {
            (ppVar13->first_free).value = (ulonglong)uVar11;
            (ppVar13->first_free).version = ((uint)uVar8 & 1) + uVar8;
          }
          UNLOCK();
          if (bVar15) goto LAB_140d81e31;
        }
      }
      else {
LAB_140d81e31:
        uVar6 = (ulonglong)(ppVar13->next_smaller).payload;
        if (uVar6 == 0) break;
        ppVar13 = (pas_bitfit_size_class *)(uVar6 * 8 + pas_compact_heap_reservation_base);
      }
    } while (ppVar13 != (pas_bitfit_size_class *)0x0);
LAB_140d81ea1:
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    if ((local_48 ^ (ulonglong)auStackY_88) == __security_cookie.value) {
      return (pas_bitfit_view *)0x0;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    if (param_3 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    pas_bitfit_directory_get_first_free_view(&local_58,ppVar12,uVar11 + 1,(uint)param_3,param_6);
    if (local_58.view == (pas_bitfit_view *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if ((local_48 ^ (ulonglong)auStackY_88) == __security_cookie.value) {
      return local_58.view;
    }
  }
  pcVar2 = (code *)swi(3);
  ppVar7 = (pas_bitfit_view *)(*pcVar2)();
  return ppVar7;
}

