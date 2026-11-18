// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 3

// pas_bitfit_size_class_find_insertion_point @ 140d81ee0

pas_compact_atomic_bitfit_size_class_ptr * __cdecl
pas_bitfit_size_class_find_insertion_point(pas_bitfit_directory *param_1,uint param_2)

{
  longlong lVar1;
  pas_compact_atomic_bitfit_size_class_ptr *ppVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar3 = (ulonglong)(param_1->largest_size_class).payload;
  ppVar2 = &param_1->largest_size_class;
  lVar1 = pas_compact_heap_reservation_base + uVar3 * 8;
  if ((lVar1 != 0 && uVar3 != 0) && (param_2 < *(uint *)(lVar1 + 0x10))) {
    while (lVar4 = lVar1, uVar3 = (ulonglong)*(uint *)(lVar4 + 0x14), uVar3 != 0) {
      lVar1 = pas_compact_heap_reservation_base + uVar3 * 8;
      if ((lVar1 == 0) || (*(uint *)(lVar1 + 0x10) <= param_2)) break;
    }
    ppVar2 = (pas_compact_atomic_bitfit_size_class_ptr *)(lVar4 + 0x14);
  }
  return ppVar2;
}

// pas_bitfit_size_class_construct @ 140d81f40

void __cdecl
pas_bitfit_size_class_construct
          (pas_bitfit_size_class *param_1,uint param_2,pas_bitfit_directory *param_3,
          pas_compact_atomic_bitfit_size_class_ptr *param_4)

{
  code *pcVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  BOOLEAN BVar4;
  uint uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar4 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_4 == (pas_compact_atomic_bitfit_size_class_ptr *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  (param_1->first_free).value = 0;
  (param_1->first_free).version = 0;
  param_1->size = param_2;
  uVar3 = pas_compact_heap_reservation_base;
  if (param_3 == (pas_bitfit_directory *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar7 = (longlong)param_3 - pas_compact_heap_reservation_base;
    if (pas_compact_heap_reservation_size <= uVar7) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if ((uVar7 & 7) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (uVar7 < 8) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar6 = (undefined4)(uVar7 >> 3);
  }
  (param_1->directory).payload[0] = (uchar)uVar6;
  (param_1->directory).payload[1] = (uchar)((uint)uVar6 >> 8);
  (param_1->directory).payload[2] = (uchar)((uint)uVar6 >> 0x10);
  (param_1->next_smaller).payload = 0;
  uVar2 = pas_compact_heap_reservation_size;
  uVar5 = param_4->payload;
  lVar8 = (ulonglong)uVar5 * 8 + uVar3;
  if (lVar8 == 0 || uVar5 == 0) {
    uVar5 = 0;
  }
  else {
    if (param_2 <= *(uint *)(lVar8 + 0x10)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (pas_compact_heap_reservation_size <= (ulonglong)uVar5 * 8) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  (param_1->next_smaller).payload = uVar5;
  uVar7 = (longlong)param_1 - uVar3;
  if (uVar2 <= uVar7) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((uVar7 & 7) == 0) {
    if (7 < uVar7) {
      param_4->payload = (uint)(uVar7 >> 3);
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

// pas_bitfit_size_class_get_first_free_view @ 140d82050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_bitfit_view * __cdecl
pas_bitfit_size_class_get_first_free_view
          (pas_bitfit_size_class *param_1,pas_bitfit_page_config *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  code *pcVar3;
  pas_versioned_field pVar4;
  pas_versioned_field pVar5;
  ulong64 uVar6;
  ulong64 uVar7;
  pas_bitfit_view *ppVar8;
  pas_bitfit_directory *ppVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined1 auStackY_88 [32];
  pas_versioned_field local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_88;
  ppVar9 = (pas_bitfit_directory *)
           (((uint)(param_1->directory).payload[2] * 0x80000 +
            (uint)*(ushort *)(param_1->directory).payload * 8) + pas_compact_heap_reservation_base);
  do {
    uVar12 = (param_1->first_free).version;
    do {
      uVar11 = uVar12;
      uVar1 = (param_1->first_free).value;
      uVar12 = (param_1->first_free).version;
    } while (uVar12 != uVar11);
    uVar12 = uVar11;
    if ((uVar11 & 1) != 0) break;
    uVar12 = uVar11 | 1;
    LOCK();
    pVar4.version = uVar11;
    pVar4.value = uVar1;
    bVar13 = pVar4 == param_1->first_free;
    if (bVar13) {
      (param_1->first_free).value = uVar1;
      (param_1->first_free).version = uVar12;
    }
    UNLOCK();
  } while (!bVar13);
  do {
    uVar11 = (ppVar9->first_unprocessed_free).version;
    do {
      uVar10 = uVar11;
      uVar2 = (ppVar9->first_unprocessed_free).value;
      uVar11 = (ppVar9->first_unprocessed_free).version;
    } while (uVar11 != uVar10);
    uVar11 = uVar10;
    if ((uVar10 & 1) != 0) break;
    uVar11 = uVar10 | 1;
    LOCK();
    pVar5.version = uVar10;
    pVar5.value = uVar2;
    bVar13 = pVar5 == ppVar9->first_unprocessed_free;
    if (bVar13) {
      (ppVar9->first_unprocessed_free).value = uVar2;
      (ppVar9->first_unprocessed_free).version = uVar11;
    }
    UNLOCK();
  } while (!bVar13);
  uVar10 = uVar2;
  if (uVar1 < uVar2) {
    uVar10 = uVar1;
  }
  if (uVar10 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  pas_bitfit_directory_get_first_free_view
            ((pas_bitfit_view_and_index *)&local_58,ppVar9,(uint)uVar10,param_1->size,param_2);
  uVar7 = local_58.version;
  uVar6 = local_58.value;
  if ((pas_bitfit_view *)local_58.value == (pas_bitfit_view *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  local_58.value = uVar1;
  local_58.version = uVar12;
  pas_versioned_field_maximize_watched(&param_1->first_free,&local_58,uVar7);
  local_58.value = uVar2;
  local_58.version = uVar11;
  pas_versioned_field_maximize_watched((pas_versioned_field *)ppVar9,&local_58,uVar7);
  if ((local_48 ^ (ulonglong)auStackY_88) != __security_cookie.value) {
    pcVar3 = (code *)swi(3);
    ppVar8 = (pas_bitfit_view *)(*pcVar3)();
    return ppVar8;
  }
  return (pas_bitfit_view *)uVar6;
}

