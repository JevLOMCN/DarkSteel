// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 8

// pas_bitfit_page_construct @ 140d82700

void __cdecl
pas_bitfit_page_construct
          (pas_bitfit_page *param_1,pas_bitfit_view *param_2,pas_bitfit_page_config *param_3)

{
  ulong64 *_Dst;
  byte bVar1;
  pas_bitfit_page_config_variant pVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulong64 uVar5;
  code *pcVar6;
  BOOLEAN BVar7;
  longlong lVar8;
  char cVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  void *_Dst_00;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong _Size;
  
  if ((param_3->base).page_config_kind != pas_page_config_kind_bitfit) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  bVar1 = (param_3->base).min_align_shift;
  uVar11 = (param_3->base).page_size;
  uVar3 = (param_3->base).granule_size;
  pVar2 = param_3->variant;
  uVar4 = param_3->page_object_payload_offset;
  uVar5 = param_3->page_object_payload_size;
  BVar7 = TryAcquireSRWLockExclusive((PSRWLOCK)&param_2->ownership_lock);
  if (BVar7 != '\0') {
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  if (pas_marge_bitfit_page_config_variant < pVar2) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  (param_1->base).page_kind = (char)pVar2 + '\x05';
  param_1->use_epoch = 0;
  param_1->did_note_max_free = false;
  param_1->num_live_bits = 0;
  if (param_2 == (pas_bitfit_view *)0x0) {
    uVar12 = 0;
  }
  else {
    uVar13 = (longlong)param_2 - pas_compact_heap_reservation_base;
    if (pas_compact_heap_reservation_size <= uVar13) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    if ((uVar13 & 7) != 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    if (uVar13 < 8) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    uVar12 = (uint)(uVar13 >> 3);
  }
  (param_1->owner).payload = uVar12;
  uVar15 = uVar11 >> (bVar1 & 0x3f);
  _Size = uVar15 + 0x3f >> 2 & 0xfffffffffffffff0;
  _Dst = param_1->bits;
  memset(_Dst,0,_Size);
  lVar8 = 1L << (bVar1 & 0x3f);
  uVar13 = (-lVar8 & (uVar4 + lVar8) - 1) >> (bVar1 & 0x3f);
  uVar10 = uVar13 >> 6;
  uVar14 = uVar15 >> 6;
  uVar13 = uVar13 & 0x3f;
  if (uVar13 != 0) {
    _Dst[uVar10] = _Dst[uVar10] | -1L << (sbyte)uVar13;
    uVar10 = uVar10 + 1;
  }
  if (uVar10 <= uVar14 && uVar14 - uVar10 != 0) {
    memset(param_1->bits + uVar10,(int)CONCAT71((int7)(uVar10 >> 8),0xff),(uVar14 - uVar10) * 8);
  }
  if ((uVar15 & 0x3f) != 0) {
    _Dst[uVar14] = _Dst[uVar14] | ~(-1L << ((byte)uVar15 & 0x3f));
  }
  uVar13 = uVar4 - 1;
  if (uVar11 != uVar3) {
    if (uVar11 <= uVar3) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    _Dst_00 = (void *)((longlong)_Dst + _Size);
    if ((uVar11 | uVar3) >> 0x20 == 0) {
      uVar10 = (uVar11 & 0xffffffff) / (uVar3 & 0xffffffff);
    }
    else {
      uVar10 = uVar11 / uVar3;
    }
    memset(_Dst_00,0,uVar10);
    if (uVar4 != 0) {
      if ((uVar13 | uVar3) >> 0x20 == 0) {
        uVar13 = (uVar13 & 0xffffffff) / (uVar3 & 0xffffffff);
      }
      else {
        uVar13 = uVar13 / uVar3;
      }
      if (uVar10 <= uVar13) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      uVar14 = 0;
      do {
        if (*(char *)((longlong)_Dst_00 + uVar14) == -1) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
        cVar9 = *(char *)((longlong)_Dst_00 + uVar14) + '\x01';
        if (cVar9 == -1) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
        *(char *)((longlong)_Dst_00 + uVar14) = cVar9;
        uVar14 = uVar14 + 1;
      } while (uVar14 <= uVar13);
    }
    uVar13 = uVar5 + uVar4;
    if (uVar13 != uVar11) {
      uVar11 = uVar11 - 1;
      if ((uVar11 | uVar3) >> 0x20 == 0) {
        uVar11 = (uVar11 & 0xffffffff) / (uVar3 & 0xffffffff);
      }
      else {
        uVar11 = uVar11 / uVar3;
      }
      if (uVar10 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      if ((uVar13 | uVar3) >> 0x20 == 0) {
        uVar13 = (uVar13 & 0xffffffff) / (uVar3 & 0xffffffff);
      }
      else {
        uVar13 = uVar13 / uVar3;
      }
      for (; uVar13 <= uVar11; uVar13 = uVar13 + 1) {
        if (*(char *)((longlong)_Dst_00 + uVar13) == -1) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
        cVar9 = *(char *)((longlong)_Dst_00 + uVar13) + '\x01';
        if (cVar9 == -1) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
        *(char *)((longlong)_Dst_00 + uVar13) = cVar9;
      }
    }
  }
  return;
}

// pas_bitfit_page_get_config @ 140d829b0

pas_bitfit_page_config * __cdecl pas_bitfit_page_get_config(pas_bitfit_page *param_1)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)(param_1->owner).payload;
  return (pas_bitfit_page_config *)
         pas_bitfit_page_config_kind_for_config_table
         [*(char *)((ulonglong)
                    ((uint)*(byte *)(pas_compact_heap_reservation_base + 10 + uVar1 * 8) * 0x80000 +
                    (uint)*(ushort *)(pas_compact_heap_reservation_base + 8 + uVar1 * 8) * 8) + 0x7c
                   + pas_compact_heap_reservation_base)];
}

// pas_bitfit_page_log_bits @ 140d829f0

void __cdecl pas_bitfit_page_log_bits(pas_bitfit_page *param_1,ulong64 param_2,ulong64 param_3)

{
  byte bVar1;
  code *pcVar2;
  ulonglong uVar3;
  char *pcVar4;
  ulonglong uVar5;
  
  uVar3 = (ulonglong)(param_1->owner).payload;
  bVar1 = pas_bitfit_page_config_kind_for_config_table
          [*(char *)((ulonglong)
                     ((uint)*(byte *)(pas_compact_heap_reservation_base + 10 + uVar3 * 8) * 0x80000
                     + (uint)*(ushort *)(pas_compact_heap_reservation_base + 8 + uVar3 * 8) * 8) +
                     0x7c + pas_compact_heap_reservation_base)]->min_align_shift;
  uVar3 = pas_bitfit_page_config_kind_for_config_table
          [*(char *)((ulonglong)
                     ((uint)*(byte *)(pas_compact_heap_reservation_base + 10 + uVar3 * 8) * 0x80000
                     + (uint)*(ushort *)(pas_compact_heap_reservation_base + 8 + uVar3 * 8) * 8) +
                     0x7c + pas_compact_heap_reservation_base)]->page_size;
  pas_log("free bits: ");
  if (uVar3 == 0) {
    pas_log("\n");
    pas_log(" end bits: ");
    pas_log("\n");
  }
  else {
    uVar5 = 0;
    do {
      pas_log("%d");
      uVar5 = uVar5 + (1L << (bVar1 & 0x3f));
    } while (uVar5 < uVar3);
    pas_log("\n");
    pas_log(" end bits: ");
    if (uVar3 != 0) {
      uVar5 = 0;
      do {
        pas_log("%d");
        uVar5 = uVar5 + (1L << (bVar1 & 0x3f));
      } while (uVar5 < uVar3);
    }
    pas_log("\n");
  }
  if (param_2 != param_3) {
    if (param_3 <= param_2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    pas_log("           ");
    if (uVar3 != 0) {
      uVar5 = 0;
      do {
        pcVar4 = " ";
        if (uVar5 < param_3) {
          pcVar4 = "^";
        }
        if (uVar5 < param_2) {
          pcVar4 = " ";
        }
        pas_log(pcVar4);
        uVar5 = uVar5 + (1L << (bVar1 & 0x3f));
      } while (uVar5 < uVar3);
    }
    pas_log("\n");
  }
  return;
}

// pas_bitfit_page_deallocation_did_fail @ 140d82be0

void __cdecl
pas_bitfit_page_deallocation_did_fail
          (pas_bitfit_page *param_1,pas_bitfit_page_config_kind param_2,ulong64 param_3,
          ulong64 param_4,char *param_5)

{
  pas_start_crash_logging();
  pas_get_current_system_thread_id();
  pas_log("Thread %lu encountered bitfit alloaction error.\n");
  pas_bitfit_page_config_kind_get_string(param_2);
  pas_log("Bits for page %p (%s):\n");
  pas_bitfit_page_log_bits(param_1,param_4,param_4 + 1);
                    /* WARNING: Subroutine does not return */
  pas_deallocation_did_fail(param_5,param_3);
}

// pas_get_current_system_thread_id @ 140d82c50

DWORD __stdcall pas_get_current_system_thread_id(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140d82c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetCurrentThreadId();
  return DVar1;
}

// pas_bitfit_page_for_each_live_object @ 140d82c60

bool __cdecl
pas_bitfit_page_for_each_live_object
          (pas_bitfit_page *param_1,_func___cdecl_bool_ulong64_ulong64_void_ptr *param_2,
          void *param_3)

{
  byte bVar1;
  pas_page_base_config *ppVar2;
  pas_heap_config *ppVar3;
  pas_page_base_config *ppVar4;
  code *pcVar5;
  bool bVar6;
  ulonglong uVar7;
  void *pvVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  
  uVar7 = (ulonglong)(param_1->owner).payload;
  lVar13 = pas_compact_heap_reservation_base + uVar7 * 8;
  if (uVar7 == 0) {
    lVar13 = 0;
  }
  ppVar2 = pas_bitfit_page_config_kind_for_config_table
           [*(char *)((ulonglong)
                      ((uint)*(byte *)(lVar13 + 10) * 0x80000 + (uint)*(ushort *)(lVar13 + 8) * 8) +
                      0x7c + pas_compact_heap_reservation_base)];
  bVar1 = ppVar2->min_align_shift;
  uVar7 = ppVar2->page_size;
  ppVar3 = ppVar2[1].heap_config_ptr;
  ppVar4 = ppVar2[1].page_config_ptr;
  pvVar8 = (*ppVar2->boundary_for_page_header)(&param_1->base);
  lVar13 = 1L << (bVar1 & 0x3f);
  uVar12 = (longlong)ppVar3 + lVar13 + -1 & -lVar13;
  uVar14 = -lVar13 & (ulonglong)((longlong)&ppVar3->config_ptr + (longlong)&ppVar4->is_enabled);
  if (uVar12 < uVar14) {
    do {
      uVar9 = uVar12 >> (bVar1 & 0x3f);
      if ((*(uint *)((longlong)param_1->bits + (uVar9 >> 5) * 4) >> ((uint)uVar9 & 0x1f) & 1) == 0)
      {
        uVar9 = uVar12;
        if (uVar14 <= uVar12) {
LAB_140d82db4:
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        do {
          uVar10 = uVar9 >> (bVar1 & 0x3f);
          uVar11 = 1 << ((byte)uVar10 & 0x1f) &
                   *(uint *)((longlong)param_1->bits +
                            (uVar10 >> 5) * 4 + ((uVar7 >> (bVar1 & 0x3f)) + 0x3f >> 6) * 8);
          if (uVar11 != 0) break;
          uVar9 = uVar9 + lVar13;
        } while (uVar9 < uVar14);
        if (uVar9 < uVar12) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        if (uVar11 == 0) goto LAB_140d82db4;
        bVar6 = (*param_2)(uVar12 + (longlong)pvVar8,(lVar13 - uVar12) + uVar9,param_3);
        uVar12 = uVar9;
        if (!bVar6) {
          return false;
        }
      }
      uVar12 = uVar12 + lVar13;
    } while (uVar12 < uVar14);
  }
  return true;
}

// pas_bitfit_page_verify @ 140d82dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl pas_bitfit_page_verify(pas_bitfit_page *param_1)

{
  byte bVar1;
  pas_page_base_config *ppVar2;
  pas_heap_config *ppVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  code *pcVar6;
  bool bVar7;
  longlong lVar8;
  char cVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  bool *pbVar14;
  undefined1 auStack_478 [40];
  pas_page_base_config *local_450;
  undefined8 local_448;
  char local_440 [1024];
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_478;
  uVar10 = (ulonglong)(param_1->owner).payload;
  ppVar2 = pas_bitfit_page_config_kind_for_config_table
           [*(char *)((ulonglong)
                      ((uint)*(byte *)(pas_compact_heap_reservation_base + 10 + uVar10 * 8) *
                       0x80000 +
                      (uint)*(ushort *)(pas_compact_heap_reservation_base + 8 + uVar10 * 8) * 8) +
                      0x7c + pas_compact_heap_reservation_base)];
  bVar1 = ppVar2->min_align_shift;
  ppVar3 = ppVar2[1].heap_config_ptr;
  lVar8 = 1L << (bVar1 & 0x3f);
  pbVar14 = (bool *)((longlong)&ppVar3->config_ptr +
                    (longlong)&(ppVar2[1].page_config_ptr)->is_enabled);
  uVar11 = 0;
  for (uVar10 = (longlong)ppVar3 + lVar8 + -1 & -lVar8; uVar10 < (-lVar8 & (ulonglong)pbVar14);
      uVar10 = uVar10 + lVar8) {
    uVar12 = uVar10 >> (bVar1 & 0x3f);
    uVar11 = (uVar11 + 1) -
             (ulonglong)
             ((*(uint *)((longlong)param_1->bits + (uVar12 >> 5) * 4) >> ((uint)uVar12 & 0x1f) & 1)
             != 0);
  }
  if (uVar11 != param_1->num_live_bits) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  puVar4 = (undefined1 *)ppVar2->page_size;
  puVar5 = (undefined1 *)ppVar2->granule_size;
  if (puVar4 != puVar5) {
    if (((ulonglong)puVar4 | (ulonglong)puVar5) >> 0x20 == 0) {
      uVar10 = ((ulonglong)puVar4 & 0xffffffff) / ((ulonglong)puVar5 & 0xffffffff);
    }
    else {
      uVar10 = (ulonglong)puVar4 / (ulonglong)puVar5;
    }
    if (0x400 < uVar10) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    local_450 = ppVar2;
    local_448 = (*ppVar2->boundary_for_page_header)(&param_1->base);
    memset(local_440,0,0x400);
    if (ppVar3 != (pas_heap_config *)0x0) {
      puVar13 = (undefined1 *)
                ((longlong)&ppVar3[-1].specialized_try_deallocate_not_small_exclusive_segregated + 7
                );
      if (((ulonglong)puVar13 | (ulonglong)puVar5) >> 0x20 == 0) {
        uVar11 = ((ulonglong)puVar13 & 0xffffffff) / ((ulonglong)puVar5 & 0xffffffff);
      }
      else {
        uVar11 = (ulonglong)puVar13 / (ulonglong)puVar5;
      }
      if (uVar10 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      uVar12 = 0;
      do {
        if (local_440[uVar12] == -1) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
        cVar9 = local_440[uVar12] + '\x01';
        if (cVar9 == -1) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
        local_440[uVar12] = cVar9;
        uVar12 = uVar12 + 1;
      } while (uVar12 <= uVar11);
    }
    if (pbVar14 != (bool *)puVar4) {
      puVar13 = puVar4 + -1;
      if (((ulonglong)puVar13 | (ulonglong)puVar5) >> 0x20 == 0) {
        uVar11 = ((ulonglong)puVar13 & 0xffffffff) / ((ulonglong)puVar5 & 0xffffffff);
      }
      else {
        uVar11 = (ulonglong)puVar13 / (ulonglong)puVar5;
      }
      if (uVar10 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      if (((ulonglong)pbVar14 | (ulonglong)puVar5) >> 0x20 == 0) {
        uVar12 = ((ulonglong)pbVar14 & 0xffffffff) / ((ulonglong)puVar5 & 0xffffffff);
      }
      else {
        uVar12 = (ulonglong)pbVar14 / (ulonglong)puVar5;
      }
      for (; uVar12 <= uVar11; uVar12 = uVar12 + 1) {
        if (local_440[uVar12] == -1) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
        cVar9 = local_440[uVar12] + '\x01';
        if (cVar9 == -1) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
        local_440[uVar12] = cVar9;
      }
    }
    bVar7 = pas_bitfit_page_for_each_live_object(param_1,verify_for_each_object_callback,&local_450)
    ;
    if (!bVar7) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    if (puVar4 <= puVar5) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    do {
      cVar9 = *(char *)((longlong)param_1->bits +
                       uVar10 + (((ulonglong)puVar4 >> (bVar1 & 0x3f)) + 0x3f >> 2 &
                                0xfffffffffffffff0) + -1);
      if (cVar9 == -1) {
        if (local_440[uVar10 - 1] != '\0') {
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
      }
      else if (cVar9 != local_440[uVar10 - 1]) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  if ((local_40 ^ (ulonglong)auStack_478) != __security_cookie.value) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  return;
}

// verify_for_each_object_callback @ 140d83090

bool __cdecl verify_for_each_object_callback(ulong64 param_1,ulong64 param_2,void *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  char cVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    return true;
  }
  uVar6 = param_1 - *(longlong *)((longlong)param_3 + 8);
  uVar4 = *(ulonglong *)(*(longlong *)param_3 + 0x20);
  uVar1 = *(ulonglong *)(*(longlong *)param_3 + 0x28);
  uVar3 = (param_2 + uVar6) - 1;
  if ((uVar3 | uVar1) >> 0x20 == 0) {
    uVar3 = (uVar3 & 0xffffffff) / (uVar1 & 0xffffffff);
  }
  else {
    uVar3 = uVar3 / uVar1;
  }
  if ((uVar4 | uVar1) >> 0x20 == 0) {
    uVar4 = (uVar4 & 0xffffffff) / (uVar1 & 0xffffffff);
  }
  else {
    uVar4 = uVar4 / uVar1;
  }
  if (uVar3 < uVar4) {
    if ((uVar6 | uVar1) >> 0x20 == 0) {
      uVar6 = (uVar6 & 0xffffffff) / (uVar1 & 0xffffffff);
    }
    else {
      uVar6 = uVar6 / uVar1;
    }
    while( true ) {
      if (uVar3 < uVar6) {
        return true;
      }
      cVar5 = *(char *)((longlong)param_3 + uVar6 + 0x10);
      if (cVar5 == -1) break;
      cVar5 = cVar5 + '\x01';
      if (cVar5 == -1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      *(char *)((longlong)param_3 + uVar6 + 0x10) = cVar5;
      uVar6 = uVar6 + 1;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

