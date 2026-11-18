// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 38

// pas_segregated_heap_construct @ 140d51ca0

void __cdecl
pas_segregated_heap_construct
          (pas_segregated_heap *param_1,pas_heap *param_2,pas_heap_config *param_3,
          pas_heap_runtime_config *param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
  
  if (param_4 == (pas_heap_runtime_config *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (param_4->sharing_mode == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  param_1->runtime_config = param_4;
  param_1->index_to_small_allocator_index = (uint *)0x0;
  param_1->index_to_small_size_directory = (pas_compact_atomic_segregated_size_directory_ptr *)0x0;
  param_1->basic_size_directory_and_head = 0;
  param_1->rare_data = 0;
  param_1->bitfit_heap = 0;
  param_1->small_index_upper_bound = 0;
  if (param_4->statically_allocated) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (!param_4->is_part_of_heap != (param_2 != (pas_heap *)0x0)) {
    if (param_4->is_part_of_heap == (param_3 == &pas_utility_heap_config)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (!param_4->is_part_of_heap) {
      param_1 = &((pas_heap *)0x0)->segregated_heap;
    }
    if ((pas_heap *)param_1 == param_2) {
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

// pas_compact_atomic_segregated_size_directory_ptr_store @ 140d51d20

void __cdecl
pas_compact_atomic_segregated_size_directory_ptr_store
          (pas_compact_atomic_segregated_size_directory_ptr *param_1,
          pas_segregated_size_directory *param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  
  if (param_2 == (pas_segregated_size_directory *)0x0) {
    param_1->payload = 0;
    return;
  }
  uVar2 = (longlong)param_2 - pas_compact_heap_reservation_base;
  if (pas_compact_heap_reservation_size <= uVar2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((uVar2 & 7) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (7 < uVar2) {
    param_1->payload = (uint)(uVar2 >> 3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_segregated_heap_rare_data_ptr_store @ 140d51d60

void __cdecl
pas_segregated_heap_rare_data_ptr_store
          (pas_segregated_heap_rare_data_ptr *param_1,pas_segregated_heap_rare_data *param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  
  if (param_2 == (pas_segregated_heap_rare_data *)0x0) {
    param_1->payload = 0;
    return;
  }
  uVar2 = (longlong)param_2 - pas_compact_heap_reservation_base;
  if (pas_compact_heap_reservation_size <= uVar2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((uVar2 & 7) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (7 < uVar2) {
    param_1->payload = (uint)(uVar2 >> 3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_segregated_heap_get_bitfit @ 140d51da0

pas_bitfit_heap * __cdecl
pas_segregated_heap_get_bitfit
          (pas_segregated_heap *param_1,pas_heap_config *param_2,pas_lock_hold_mode param_3)

{
  code *pcVar1;
  pas_bitfit_heap *ppVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(param_1->bitfit_heap).payload;
  ppVar2 = (pas_bitfit_heap *)(uVar4 * 8 + pas_compact_heap_reservation_base);
  if (ppVar2 == (pas_bitfit_heap *)0x0 || uVar4 == 0) {
    if (param_3 == pas_lock_is_not_held) {
      AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    }
    uVar4 = (ulonglong)(param_1->bitfit_heap).payload;
    ppVar2 = (pas_bitfit_heap *)(uVar4 * 8 + pas_compact_heap_reservation_base);
    if (ppVar2 == (pas_bitfit_heap *)0x0 || uVar4 == 0) {
      ppVar2 = pas_bitfit_heap_create(param_1,param_2);
      if (ppVar2 == (pas_bitfit_heap *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar4 = (longlong)ppVar2 - pas_compact_heap_reservation_base;
        if (pas_compact_heap_reservation_size <= uVar4) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        if ((uVar4 & 7) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        if (uVar4 < 8) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        uVar3 = (uint)(uVar4 >> 3);
      }
      (param_1->bitfit_heap).payload = uVar3;
    }
    if (param_3 == pas_lock_is_not_held) {
      ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    }
  }
  return ppVar2;
}

// pas_segregated_heap_get_cached_index_for_heap_type @ 140d51e70

ulong64 __cdecl
pas_segregated_heap_get_cached_index_for_heap_type
          (pas_segregated_heap *param_1,pas_heap_config *param_2)

{
  bool bVar1;
  code *pcVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  byte bVar5;
  ulonglong uVar6;
  
  if (!param_1->runtime_config->is_part_of_heap) {
    param_1 = &((pas_heap *)0x0)->segregated_heap;
  }
  uVar3 = pas_heap_get_type_size((pas_heap *)param_1);
  bVar1 = (param_2->small_bitfit_config).base.is_enabled;
  bVar5 = (param_2->small_bitfit_config).base.min_align_shift;
  if (((param_2->small_segregated_config).base.is_enabled & 1U) == 0) {
    if ((bVar1 & 1U) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
  else {
    uVar6 = 0xffffffffffffffff;
    if ((bVar1 & 1U) != 0) {
      uVar6 = (ulonglong)bVar5;
    }
    uVar4 = (ulonglong)(param_2->small_segregated_config).base.min_align_shift;
    if (uVar4 <= uVar6) {
      uVar6 = uVar4;
    }
    bVar5 = (byte)uVar6;
  }
  return (uVar3 + (1L << (bVar5 & 0x3f))) - 1 >> (bVar5 & 0x3f);
}

// pas_segregated_heap_cached_index_is_set @ 140d51ee0

bool __cdecl pas_segregated_heap_cached_index_is_set(uint *param_1)

{
  if (param_1 != (uint *)0x0) {
    return *param_1 != 0xffffffff;
  }
  return true;
}

// pas_segregated_heap_get_cached_index @ 140d51f00

ulong64 __cdecl
pas_segregated_heap_get_cached_index
          (pas_segregated_heap *param_1,uint *param_2,pas_heap_config *param_3)

{
  bool bVar1;
  code *pcVar2;
  pas_heap *ppVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  byte bVar6;
  ulonglong uVar7;
  
  if (param_2 != (uint *)0x0) {
    return (ulonglong)*param_2;
  }
  ppVar3 = (pas_heap *)0x0;
  if (param_1->runtime_config->is_part_of_heap) {
    ppVar3 = (pas_heap *)param_1;
  }
  uVar4 = pas_heap_get_type_size(ppVar3);
  bVar1 = (param_3->small_bitfit_config).base.is_enabled;
  bVar6 = (param_3->small_bitfit_config).base.min_align_shift;
  if (((param_3->small_segregated_config).base.is_enabled & 1U) == 0) {
    if ((bVar1 & 1U) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
  else {
    uVar7 = 0xffffffffffffffff;
    if ((bVar1 & 1U) != 0) {
      uVar7 = (ulonglong)bVar6;
    }
    uVar5 = (ulonglong)(param_3->small_segregated_config).base.min_align_shift;
    if (uVar5 <= uVar7) {
      uVar7 = uVar5;
    }
    bVar6 = (byte)uVar7;
  }
  return (uVar4 + (1L << (bVar6 & 0x3f))) - 1 >> (bVar6 & 0x3f);
}

// pas_segregated_heap_index_is_cached_index_and_cached_index_is_set @ 140d51f80

bool __cdecl
pas_segregated_heap_index_is_cached_index_and_cached_index_is_set
          (pas_segregated_heap *param_1,uint *param_2,ulong64 param_3,pas_heap_config *param_4)

{
  bool bVar1;
  code *pcVar2;
  pas_heap *ppVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  byte bVar7;
  
  if (param_2 == (uint *)0x0) {
    ppVar3 = (pas_heap *)0x0;
    if (param_1->runtime_config->is_part_of_heap) {
      ppVar3 = (pas_heap *)param_1;
    }
    uVar4 = pas_heap_get_type_size(ppVar3);
    bVar1 = (param_4->small_bitfit_config).base.is_enabled;
    bVar7 = (param_4->small_bitfit_config).base.min_align_shift;
    if (((param_4->small_segregated_config).base.is_enabled & 1U) == 0) {
      if ((bVar1 & 1U) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    else {
      uVar5 = 0xffffffffffffffff;
      if ((bVar1 & 1U) != 0) {
        uVar5 = (ulonglong)bVar7;
      }
      uVar6 = (ulonglong)(param_4->small_segregated_config).base.min_align_shift;
      if (uVar6 <= uVar5) {
        uVar5 = uVar6;
      }
      bVar7 = (byte)uVar5;
    }
    uVar5 = (uVar4 + (1L << (bVar7 & 0x3f))) - 1 >> (bVar7 & 0x3f);
  }
  else {
    uVar5 = (ulonglong)*param_2;
    if (uVar5 == 0xffffffff) {
      return false;
    }
  }
  return uVar5 == param_3;
}

// pas_segregated_heap_index_is_cached_index_or_cached_index_is_unset @ 140d52020

bool __cdecl
pas_segregated_heap_index_is_cached_index_or_cached_index_is_unset
          (pas_segregated_heap *param_1,uint *param_2,ulong64 param_3,pas_heap_config *param_4)

{
  bool bVar1;
  code *pcVar2;
  pas_heap *ppVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  byte bVar7;
  
  if (param_2 == (uint *)0x0) {
    ppVar3 = (pas_heap *)0x0;
    if (param_1->runtime_config->is_part_of_heap) {
      ppVar3 = (pas_heap *)param_1;
    }
    uVar4 = pas_heap_get_type_size(ppVar3);
    bVar1 = (param_4->small_bitfit_config).base.is_enabled;
    bVar7 = (param_4->small_bitfit_config).base.min_align_shift;
    if (((param_4->small_segregated_config).base.is_enabled & 1U) == 0) {
      if ((bVar1 & 1U) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    else {
      uVar5 = 0xffffffffffffffff;
      if ((bVar1 & 1U) != 0) {
        uVar5 = (ulonglong)bVar7;
      }
      uVar6 = (ulonglong)(param_4->small_segregated_config).base.min_align_shift;
      if (uVar6 <= uVar5) {
        uVar5 = uVar6;
      }
      bVar7 = (byte)uVar5;
    }
    uVar5 = (uVar4 + (1L << (bVar7 & 0x3f))) - 1 >> (bVar7 & 0x3f);
  }
  else {
    uVar5 = (ulonglong)*param_2;
    if (uVar5 == 0xffffffff) {
      return true;
    }
  }
  return uVar5 == param_3;
}

// pas_segregated_heap_index_is_not_cached_index_and_cached_index_is_set @ 140d520c0

bool __cdecl
pas_segregated_heap_index_is_not_cached_index_and_cached_index_is_set
          (pas_segregated_heap *param_1,uint *param_2,ulong64 param_3,pas_heap_config *param_4)

{
  bool bVar1;
  code *pcVar2;
  pas_heap *ppVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  byte bVar7;
  
  if (param_2 == (uint *)0x0) {
    ppVar3 = (pas_heap *)0x0;
    if (param_1->runtime_config->is_part_of_heap) {
      ppVar3 = (pas_heap *)param_1;
    }
    uVar4 = pas_heap_get_type_size(ppVar3);
    bVar1 = (param_4->small_bitfit_config).base.is_enabled;
    bVar7 = (param_4->small_bitfit_config).base.min_align_shift;
    if (((param_4->small_segregated_config).base.is_enabled & 1U) == 0) {
      if ((bVar1 & 1U) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    else {
      uVar5 = 0xffffffffffffffff;
      if ((bVar1 & 1U) != 0) {
        uVar5 = (ulonglong)bVar7;
      }
      uVar6 = (ulonglong)(param_4->small_segregated_config).base.min_align_shift;
      if (uVar6 <= uVar5) {
        uVar5 = uVar6;
      }
      bVar7 = (byte)uVar5;
    }
    uVar5 = (uVar4 + (1L << (bVar7 & 0x3f))) - 1 >> (bVar7 & 0x3f);
  }
  else {
    uVar5 = (ulonglong)*param_2;
    if (uVar5 == 0xffffffff) {
      return false;
    }
  }
  return uVar5 != param_3;
}

// pas_segregated_heap_index_is_greater_than_cached_index_and_cached_index_is_set @ 140d52160

bool __cdecl
pas_segregated_heap_index_is_greater_than_cached_index_and_cached_index_is_set
          (pas_segregated_heap *param_1,uint *param_2,ulong64 param_3,pas_heap_config *param_4)

{
  bool bVar1;
  code *pcVar2;
  pas_heap *ppVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  byte bVar7;
  
  if (param_2 == (uint *)0x0) {
    ppVar3 = (pas_heap *)0x0;
    if (param_1->runtime_config->is_part_of_heap) {
      ppVar3 = (pas_heap *)param_1;
    }
    uVar4 = pas_heap_get_type_size(ppVar3);
    bVar1 = (param_4->small_bitfit_config).base.is_enabled;
    bVar7 = (param_4->small_bitfit_config).base.min_align_shift;
    if (((param_4->small_segregated_config).base.is_enabled & 1U) == 0) {
      if ((bVar1 & 1U) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    else {
      uVar5 = 0xffffffffffffffff;
      if ((bVar1 & 1U) != 0) {
        uVar5 = (ulonglong)bVar7;
      }
      uVar6 = (ulonglong)(param_4->small_segregated_config).base.min_align_shift;
      if (uVar6 <= uVar5) {
        uVar5 = uVar6;
      }
      bVar7 = (byte)uVar5;
    }
    uVar5 = (uVar4 + (1L << (bVar7 & 0x3f))) - 1 >> (bVar7 & 0x3f);
  }
  else {
    uVar5 = (ulonglong)*param_2;
    if (uVar5 == 0xffffffff) {
      return false;
    }
  }
  return uVar5 < param_3;
}

// pas_segregated_heap_index_is_greater_equal_cached_index_and_cached_index_is_set @ 140d52200

bool __cdecl
pas_segregated_heap_index_is_greater_equal_cached_index_and_cached_index_is_set
          (pas_segregated_heap *param_1,uint *param_2,ulong64 param_3,pas_heap_config *param_4)

{
  bool bVar1;
  code *pcVar2;
  pas_heap *ppVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  byte bVar7;
  
  if (param_2 == (uint *)0x0) {
    ppVar3 = (pas_heap *)0x0;
    if (param_1->runtime_config->is_part_of_heap) {
      ppVar3 = (pas_heap *)param_1;
    }
    uVar4 = pas_heap_get_type_size(ppVar3);
    bVar1 = (param_4->small_bitfit_config).base.is_enabled;
    bVar7 = (param_4->small_bitfit_config).base.min_align_shift;
    if (((param_4->small_segregated_config).base.is_enabled & 1U) == 0) {
      if ((bVar1 & 1U) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    else {
      uVar5 = 0xffffffffffffffff;
      if ((bVar1 & 1U) != 0) {
        uVar5 = (ulonglong)bVar7;
      }
      uVar6 = (ulonglong)(param_4->small_segregated_config).base.min_align_shift;
      if (uVar6 <= uVar5) {
        uVar5 = uVar6;
      }
      bVar7 = (byte)uVar5;
    }
    uVar5 = (uVar4 + (1L << (bVar7 & 0x3f))) - 1 >> (bVar7 & 0x3f);
  }
  else {
    uVar5 = (ulonglong)*param_2;
    if (uVar5 == 0xffffffff) {
      return false;
    }
  }
  return uVar5 <= param_3;
}

// pas_segregated_heap_size_directory_for_index_slow @ 140d522a0

pas_segregated_size_directory * __cdecl
pas_segregated_heap_size_directory_for_index_slow
          (pas_segregated_heap *param_1,ulong64 param_2,uint *param_3,pas_heap_config *param_4)

{
  bool bVar1;
  code *pcVar2;
  pas_heap *ppVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  pas_segregated_size_directory *ppVar6;
  ulonglong uVar7;
  longlong lVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  uint *puVar13;
  
  if (param_3 == (uint *)0x0) {
    ppVar3 = (pas_heap *)0x0;
    if (param_1->runtime_config->is_part_of_heap) {
      ppVar3 = (pas_heap *)param_1;
    }
    uVar4 = pas_heap_get_type_size(ppVar3);
    bVar1 = (param_4->small_bitfit_config).base.is_enabled;
    bVar9 = (param_4->small_bitfit_config).base.min_align_shift;
    if (((param_4->small_segregated_config).base.is_enabled & 1U) == 0) {
      if ((bVar1 & 1U) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    else {
      uVar5 = 0xffffffffffffffff;
      if ((bVar1 & 1U) != 0) {
        uVar5 = (ulonglong)bVar9;
      }
      uVar7 = (ulonglong)(param_4->small_segregated_config).base.min_align_shift;
      if (uVar7 <= uVar5) {
        uVar5 = uVar7;
      }
      bVar9 = (byte)uVar5;
    }
    uVar5 = (uVar4 + (1L << (bVar9 & 0x3f))) - 1 >> (bVar9 & 0x3f);
  }
  else {
    uVar5 = (ulonglong)*param_3;
    if (uVar5 == 0xffffffff) goto LAB_140d52365;
  }
  if (((uVar5 == param_2) &&
      (uVar5 = (ulonglong)(param_1->basic_size_directory_and_head).payload,
      ppVar6 = (pas_segregated_size_directory *)(uVar5 * 8 + pas_compact_heap_reservation_base),
      ppVar6 != (pas_segregated_size_directory *)0x0 && uVar5 != 0)) &&
     ((ppVar6->base).is_basic_size_directory != false)) {
    return ppVar6;
  }
LAB_140d52365:
  if (param_1->small_index_upper_bound <= param_2) {
    uVar5 = (ulonglong)(param_1->rare_data).payload;
    if (uVar5 == 0) {
      return (pas_segregated_size_directory *)0x0;
    }
    if (uVar5 << 3 == -pas_compact_heap_reservation_base) {
      return (pas_segregated_size_directory *)0x0;
    }
    uVar5 = (ulonglong)(param_1->rare_data).payload;
    lVar12 = pas_compact_heap_reservation_base + uVar5 * 8;
    if (uVar5 == 0) {
      lVar12 = 0;
    }
    lVar8 = pas_compact_heap_reservation_base + (ulonglong)*(uint *)(lVar12 + 8) * 8;
    if ((ulonglong)*(uint *)(lVar12 + 8) == 0) {
      lVar8 = 0;
    }
    if (*(uint *)(lVar12 + 0xc) != 0) {
      uVar11 = 0;
      uVar5 = (ulonglong)*(uint *)(lVar12 + 0xc);
      do {
        while( true ) {
          uVar10 = (uint)uVar5 + uVar11 >> 1;
          lVar12 = (ulonglong)uVar10 * 0x10;
          uVar7 = (ulonglong)*(uint *)(lVar8 + 8 + lVar12);
          if (uVar7 == 0) {
            return (pas_segregated_size_directory *)0x0;
          }
          if (param_2 < uVar7) break;
          puVar13 = (uint *)(lVar12 + lVar8);
          if (param_2 <= puVar13[3]) {
            uVar5 = (ulonglong)*puVar13;
            if (uVar5 == 0) {
              return (pas_segregated_size_directory *)0x0;
            }
            return (pas_segregated_size_directory *)(uVar5 * 8 + pas_compact_heap_reservation_base);
          }
          uVar11 = uVar10 + 1;
          if ((uint)uVar5 <= uVar11) {
            return (pas_segregated_size_directory *)0x0;
          }
        }
        uVar5 = (ulonglong)uVar10;
      } while (uVar11 < uVar10);
    }
  }
  return (pas_segregated_size_directory *)0x0;
}

// pas_segregated_heap_medium_size_directory_for_index @ 140d52440

pas_segregated_size_directory * __cdecl
pas_segregated_heap_medium_size_directory_for_index
          (pas_segregated_heap *param_1,ulong64 param_2,
          pas_segregated_heap_medium_size_directory_search_mode param_3,pas_lock_hold_mode param_4)

{
  pas_segregated_heap_medium_directory_tuple *ppVar1;
  pas_segregated_size_directory *ppVar2;
  ulonglong uVar3;
  
  ppVar1 = pas_segregated_heap_medium_directory_tuple_for_index(param_1,param_2,param_3,param_4);
  if (ppVar1 != (pas_segregated_heap_medium_directory_tuple *)0x0) {
    uVar3 = (ulonglong)(ppVar1->directory).payload;
    ppVar2 = (pas_segregated_size_directory *)(uVar3 * 8 + pas_compact_heap_reservation_base);
    if (uVar3 == 0) {
      ppVar2 = (pas_segregated_size_directory *)0x0;
    }
    return ppVar2;
  }
  return (pas_segregated_size_directory *)0x0;
}

// pas_segregated_heap_medium_directory_tuple_for_index @ 140d52480

pas_segregated_heap_medium_directory_tuple * __cdecl
pas_segregated_heap_medium_directory_tuple_for_index
          (pas_segregated_heap *param_1,ulong64 param_2,
          pas_segregated_heap_medium_size_directory_search_mode param_3,pas_lock_hold_mode param_4)

{
  code *pcVar1;
  ulonglong uVar2;
  pas_segregated_heap_medium_directory_tuple *ppVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  pas_segregated_heap_medium_directory_tuple *ppVar8;
  ulonglong *puVar9;
  uint uVar10;
  ulonglong uVar11;
  
  uVar2 = (ulonglong)(param_1->rare_data).payload;
  puVar9 = (ulonglong *)(uVar2 * 8 + pas_compact_heap_reservation_base);
  if (puVar9 == (ulonglong *)0x0 || uVar2 == 0) {
    return (pas_segregated_heap_medium_directory_tuple *)0x0;
  }
  if (param_4 == pas_lock_is_held) {
    uVar2 = (ulonglong)(param_1->rare_data).payload;
    lVar7 = pas_compact_heap_reservation_base + uVar2 * 8;
    if (uVar2 == 0) {
      lVar7 = 0;
    }
    lVar4 = pas_compact_heap_reservation_base + (ulonglong)*(uint *)(lVar7 + 8) * 8;
    if ((ulonglong)*(uint *)(lVar7 + 8) == 0) {
      lVar4 = 0;
    }
    if (*(uint *)(lVar7 + 0xc) == 0) {
      ppVar3 = (pas_segregated_heap_medium_directory_tuple *)0x0;
    }
    else {
      uVar6 = 0;
      ppVar8 = (pas_segregated_heap_medium_directory_tuple *)0x0;
      uVar10 = *(uint *)(lVar7 + 0xc);
      do {
        while( true ) {
          uVar5 = uVar10 + uVar6 >> 1;
          uVar2 = (ulonglong)*(uint *)(lVar4 + 8 + (ulonglong)uVar5 * 0x10);
          if (uVar2 == 0) {
            return (pas_segregated_heap_medium_directory_tuple *)0x0;
          }
          ppVar3 = (pas_segregated_heap_medium_directory_tuple *)((ulonglong)uVar5 * 0x10 + lVar4);
          if (param_2 < uVar2) break;
          if (param_2 <= ppVar3->end_index) {
            return ppVar3;
          }
          uVar6 = uVar5 + 1;
          ppVar3 = ppVar8;
          if (uVar10 <= uVar6) goto joined_r0x000140d525f4;
        }
        ppVar8 = ppVar3;
        uVar10 = uVar5;
      } while (uVar6 < uVar5);
    }
joined_r0x000140d525f4:
    if (param_3 == pas_segregated_heap_medium_size_directory_search_within_size_class_progression) {
      return (pas_segregated_heap_medium_directory_tuple *)0x0;
    }
    if (param_3 == pas_segregated_heap_medium_size_directory_search_least_greater_equal) {
      return ppVar3;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((*puVar9 & 1) != 0) {
    ppVar3 = medium_directory_tuple_for_index_with_lock
                       (param_1,param_2,param_3,pas_lock_is_not_held);
    return ppVar3;
  }
  lVar7 = (ulonglong)(uint)puVar9[1] * 8 + pas_compact_heap_reservation_base;
  if ((ulonglong)(uint)puVar9[1] == 0) {
    lVar7 = 0;
  }
  if (*(uint *)((longlong)puVar9 + 0xc) == 0) {
    ppVar3 = (pas_segregated_heap_medium_directory_tuple *)0x0;
  }
  else {
    uVar10 = 0;
    ppVar8 = (pas_segregated_heap_medium_directory_tuple *)0x0;
    uVar2 = (ulonglong)*(uint *)((longlong)puVar9 + 0xc);
    do {
      while( true ) {
        uVar6 = uVar10 + (uint)uVar2 >> 1;
        lVar4 = (ulonglong)uVar6 * 0x10;
        uVar11 = (ulonglong)*(uint *)(lVar7 + 8 + lVar4);
        if (uVar11 == 0) {
          ppVar3 = (pas_segregated_heap_medium_directory_tuple *)0x0;
          uVar2 = *puVar9;
          goto joined_r0x000140d52621;
        }
        ppVar3 = (pas_segregated_heap_medium_directory_tuple *)(lVar4 + lVar7);
        if (param_2 < uVar11) break;
        if (param_2 <= ppVar3->end_index) goto LAB_140d5260a;
        uVar10 = uVar6 + 1;
        ppVar3 = ppVar8;
        if ((uint)uVar2 <= uVar10) goto joined_r0x000140d52606;
      }
      ppVar8 = ppVar3;
      uVar2 = (ulonglong)uVar6;
    } while (uVar10 < uVar6);
  }
joined_r0x000140d52606:
  if (param_3 == pas_segregated_heap_medium_size_directory_search_within_size_class_progression) {
    ppVar3 = (pas_segregated_heap_medium_directory_tuple *)0x0;
  }
  else if (param_3 != pas_segregated_heap_medium_size_directory_search_least_greater_equal) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
LAB_140d5260a:
  uVar2 = *puVar9;
joined_r0x000140d52621:
  if (uVar2 != *puVar9) {
    AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    uVar2 = (ulonglong)(param_1->rare_data).payload;
    lVar7 = pas_compact_heap_reservation_base + uVar2 * 8;
    if (uVar2 == 0) {
      lVar7 = 0;
    }
    lVar4 = pas_compact_heap_reservation_base + (ulonglong)*(uint *)(lVar7 + 8) * 8;
    if ((ulonglong)*(uint *)(lVar7 + 8) == 0) {
      lVar4 = 0;
    }
    if (*(uint *)(lVar7 + 0xc) == 0) {
      ppVar8 = (pas_segregated_heap_medium_directory_tuple *)0x0;
    }
    else {
      uVar6 = 0;
      ppVar8 = (pas_segregated_heap_medium_directory_tuple *)0x0;
      uVar10 = *(uint *)(lVar7 + 0xc);
      do {
        while( true ) {
          uVar5 = uVar10 + uVar6 >> 1;
          uVar2 = (ulonglong)*(uint *)(lVar4 + 8 + (ulonglong)uVar5 * 0x10);
          if (uVar2 == 0) goto LAB_140d526d1;
          ppVar3 = (pas_segregated_heap_medium_directory_tuple *)((ulonglong)uVar5 * 0x10 + lVar4);
          if (param_2 < uVar2) break;
          if (param_2 <= ppVar3->end_index) goto LAB_140d526d4;
          uVar6 = uVar5 + 1;
          if (uVar10 <= uVar6) goto LAB_140d526c3;
        }
        ppVar8 = ppVar3;
        uVar10 = uVar5;
      } while (uVar6 < uVar5);
    }
LAB_140d526c3:
    if (param_3 == pas_segregated_heap_medium_size_directory_search_within_size_class_progression) {
LAB_140d526d1:
      ppVar3 = (pas_segregated_heap_medium_directory_tuple *)0x0;
    }
    else {
      ppVar3 = ppVar8;
      if (param_3 != pas_segregated_heap_medium_size_directory_search_least_greater_equal) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
    }
LAB_140d526d4:
    ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  }
  return ppVar3;
}

// medium_directory_tuple_for_index_with_lock @ 140d52710

pas_segregated_heap_medium_directory_tuple * __cdecl
medium_directory_tuple_for_index_with_lock
          (pas_segregated_heap *param_1,ulong64 param_2,
          pas_segregated_heap_medium_size_directory_search_mode param_3,pas_lock_hold_mode param_4)

{
  code *pcVar1;
  ulonglong uVar2;
  pas_segregated_heap_medium_directory_tuple *ppVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  pas_segregated_heap_medium_directory_tuple *ppVar7;
  uint uVar8;
  uint uVar9;
  
  if (param_4 == pas_lock_is_not_held) {
    AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  }
  uVar2 = (ulonglong)(param_1->rare_data).payload;
  lVar5 = pas_compact_heap_reservation_base + uVar2 * 8;
  if (uVar2 == 0) {
    lVar5 = 0;
  }
  lVar6 = pas_compact_heap_reservation_base + (ulonglong)*(uint *)(lVar5 + 8) * 8;
  if ((ulonglong)*(uint *)(lVar5 + 8) == 0) {
    lVar6 = 0;
  }
  if (*(uint *)(lVar5 + 0xc) == 0) {
    ppVar3 = (pas_segregated_heap_medium_directory_tuple *)0x0;
  }
  else {
    uVar9 = 0;
    ppVar7 = (pas_segregated_heap_medium_directory_tuple *)0x0;
    uVar4 = *(uint *)(lVar5 + 0xc);
    do {
      while( true ) {
        uVar8 = uVar9 + uVar4 >> 1;
        uVar2 = (ulonglong)*(uint *)(lVar6 + 8 + (ulonglong)uVar8 * 0x10);
        if (uVar2 == 0) {
          ppVar3 = (pas_segregated_heap_medium_directory_tuple *)0x0;
          goto joined_r0x000140d527eb;
        }
        ppVar3 = (pas_segregated_heap_medium_directory_tuple *)((ulonglong)uVar8 * 0x10 + lVar6);
        if (param_2 < uVar2) break;
        if (param_2 <= ppVar3->end_index) goto joined_r0x000140d527eb;
        uVar9 = uVar8 + 1;
        ppVar3 = ppVar7;
        if (uVar4 <= uVar9) goto joined_r0x000140d527c2;
      }
      ppVar7 = ppVar3;
      uVar4 = uVar8;
    } while (uVar9 < uVar8);
  }
joined_r0x000140d527c2:
  if (param_3 == pas_segregated_heap_medium_size_directory_search_within_size_class_progression) {
    ppVar3 = (pas_segregated_heap_medium_directory_tuple *)0x0;
  }
  else if (param_3 != pas_segregated_heap_medium_size_directory_search_least_greater_equal) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
joined_r0x000140d527eb:
  if (param_4 == pas_lock_is_not_held) {
    ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  }
  return ppVar3;
}

// pas_segregated_heap_medium_allocator_index_for_index @ 140d52800

uint __cdecl
pas_segregated_heap_medium_allocator_index_for_index
          (pas_segregated_heap *param_1,ulong64 param_2,
          pas_segregated_heap_medium_size_directory_search_mode param_3,pas_lock_hold_mode param_4)

{
  pas_segregated_heap_medium_directory_tuple *ppVar1;
  
  ppVar1 = pas_segregated_heap_medium_directory_tuple_for_index(param_1,param_2,param_3,param_4);
  if (ppVar1 != (pas_segregated_heap_medium_directory_tuple *)0x0) {
    return ppVar1->allocator_index;
  }
  return 0;
}

// pas_segregated_heap_ensure_allocator_index @ 140d52830

uint __cdecl
pas_segregated_heap_ensure_allocator_index
          (pas_segregated_heap *param_1,pas_segregated_size_directory *param_2,ulong64 param_3,
          pas_size_lookup_mode param_4,pas_heap_config *param_5,uint *param_6)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  pas_heap_ref *ppVar4;
  code *pcVar5;
  BOOLEAN BVar6;
  byte bVar7;
  uint uVar8;
  ulong64 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  pas_segregated_size_directory *ppVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint *puVar16;
  byte bVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  pas_heap *ppVar21;
  
  BVar6 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar6 != '\0') {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  uVar9 = min_align_for_heap(param_1,param_5);
  if (param_2->object_size < uVar9) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  rematerialize_size_lookup_if_necessary(param_1,param_5,param_6);
  ppVar21 = (pas_heap *)0x0;
  if (param_1->runtime_config->is_part_of_heap) {
    ppVar21 = (pas_heap *)param_1;
  }
  if (param_2->object_size < param_3) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  if (param_5 == &pas_utility_heap_config) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  bVar1 = (param_5->small_bitfit_config).base.is_enabled;
  bVar7 = (param_5->small_bitfit_config).base.min_align_shift;
  if (((param_5->small_segregated_config).base.is_enabled & 1U) == 0) {
    if ((bVar1 & 1U) == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
  }
  else {
    uVar20 = 0xffffffffffffffff;
    if ((bVar1 & 1U) != 0) {
      uVar20 = (ulonglong)bVar7;
    }
    uVar14 = (ulonglong)(param_5->small_segregated_config).base.min_align_shift;
    if (uVar14 <= uVar20) {
      uVar20 = uVar14;
    }
    bVar7 = (byte)uVar20;
  }
  uVar20 = (param_3 + (1L << (bVar7 & 0x3f))) - 1 >> (bVar7 & 0x3f);
  uVar3 = param_2->allocator_index;
  if (uVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  if (uVar3 == 0xffffffff) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  if (param_6 == (uint *)0x0) {
    uVar9 = pas_heap_get_type_size(ppVar21);
    bVar1 = (param_5->small_bitfit_config).base.is_enabled;
    bVar7 = (param_5->small_bitfit_config).base.min_align_shift;
    if (((param_5->small_segregated_config).base.is_enabled & 1U) == 0) {
      if ((bVar1 & 1U) == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
    }
    else {
      uVar14 = 0xffffffffffffffff;
      if ((bVar1 & 1U) != 0) {
        uVar14 = (ulonglong)bVar7;
      }
      uVar10 = (ulonglong)(param_5->small_segregated_config).base.min_align_shift;
      if (uVar10 <= uVar14) {
        uVar14 = uVar10;
      }
      bVar7 = (byte)uVar14;
    }
    uVar14 = ((1L << (bVar7 & 0x3f)) + uVar9) - 1 >> (bVar7 & 0x3f);
  }
  else {
    uVar14 = (ulonglong)*param_6;
    if (uVar14 == 0xffffffff) {
      bVar7 = 1;
      goto LAB_140d529d1;
    }
  }
  bVar7 = 1;
  if (((uVar14 == uVar20) && (ppVar21 != (pas_heap *)0x0)) &&
     (ppVar4 = ppVar21->heap_ref, ppVar4 != (pas_heap_ref *)0x0)) {
    if (ppVar4->allocator_index != uVar3 && ppVar4->allocator_index != 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    ppVar4->allocator_index = uVar3;
    bVar7 = 0;
  }
LAB_140d529d1:
  uVar10 = (ulonglong)param_1->small_index_upper_bound;
  uVar14 = uVar10;
  if (uVar10 == 0) {
    bVar1 = (param_5->small_bitfit_config).base.is_enabled;
    bVar17 = (param_5->small_bitfit_config).base.min_align_shift;
    if (((param_5->small_segregated_config).base.is_enabled & 1U) == 0) {
      if ((bVar1 & 1U) == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
    }
    else {
      uVar14 = 0xffffffffffffffff;
      if ((bVar1 & 1U) != 0) {
        uVar14 = (ulonglong)bVar17;
      }
      uVar11 = (ulonglong)(param_5->small_segregated_config).base.min_align_shift;
      if (uVar11 <= uVar14) {
        uVar14 = uVar11;
      }
      bVar17 = (byte)uVar14;
    }
    uVar14 = ((param_5->small_lookup_size_upper_bound + (1L << (bVar17 & 0x3f))) - 1 >>
             (bVar17 & 0x3f)) + 1;
  }
  if (uVar20 < uVar14) {
    if (!(bool)(~bVar7 & param_4 != pas_force_size_lookup & uVar10 == 0)) {
      ensure_size_lookup(param_1,param_5);
      if (param_1->small_index_upper_bound <= uVar20) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      uVar8 = param_1->index_to_small_allocator_index[uVar20];
      if (uVar8 != uVar3 && uVar8 != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      puVar16 = param_1->index_to_small_allocator_index + uVar20;
LAB_140d52b4f:
      *puVar16 = uVar3;
    }
    return uVar3;
  }
  uVar14 = (ulonglong)(param_1->rare_data).payload;
  if ((uVar14 != 0) && (uVar14 << 3 != -pas_compact_heap_reservation_base)) {
    uVar14 = (ulonglong)(param_1->rare_data).payload;
    lVar15 = pas_compact_heap_reservation_base + uVar14 * 8;
    if (uVar14 == 0) {
      lVar15 = 0;
    }
    lVar12 = pas_compact_heap_reservation_base + (ulonglong)*(uint *)(lVar15 + 8) * 8;
    if ((ulonglong)*(uint *)(lVar15 + 8) == 0) {
      lVar12 = 0;
    }
    if (*(uint *)(lVar15 + 0xc) != 0) {
      uVar19 = 0;
      uVar8 = *(uint *)(lVar15 + 0xc);
      do {
        while( true ) {
          uVar18 = uVar8 + uVar19 >> 1;
          uVar14 = (ulonglong)*(uint *)(lVar12 + 8 + (ulonglong)uVar18 * 0x10);
          if (uVar14 == 0) goto LAB_140d52b2c;
          if (uVar20 < uVar14) break;
          puVar16 = (uint *)((ulonglong)uVar18 * 0x10 + lVar12);
          if (uVar20 <= puVar16[3]) {
            ppVar13 = (pas_segregated_size_directory *)
                      ((ulonglong)*puVar16 * 8 + pas_compact_heap_reservation_base);
            if ((ulonglong)*puVar16 == 0) {
              ppVar13 = (pas_segregated_size_directory *)0x0;
            }
            if (ppVar13 != param_2) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              (*pcVar5)();
            }
            puVar16 = puVar16 + 1;
            goto LAB_140d52b4f;
          }
          uVar19 = uVar18 + 1;
          if (uVar8 <= uVar19) goto LAB_140d52b2c;
        }
        uVar8 = uVar18;
      } while (uVar19 < uVar18);
    }
  }
LAB_140d52b2c:
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}

// rematerialize_size_lookup_if_necessary @ 140d52b90

void __cdecl
rematerialize_size_lookup_if_necessary
          (pas_segregated_heap *param_1,pas_heap_config *param_2,uint *param_3)

{
  pas_compact_atomic_segregated_size_directory_ptr *ppVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  bool bVar5;
  ulonglong uVar6;
  longlong lVar7;
  void *pvVar8;
  _func___cdecl_void_ulong64_pas_segregated_size_directory_ptr_void_ptr *unaff_RBX;
  _func___cdecl_void_ulong64_pas_segregated_heap_medium_directory_tuple_ptr_void_ptr *unaff_RBP;
  void *unaff_RDI;
  ulonglong *puVar9;
  
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar3 != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if ((param_1->runtime_config->statically_allocated) ||
     (uVar6 = (ulonglong)param_1->small_index_upper_bound, uVar6 == 0)) {
    bVar4 = false;
  }
  else {
    if (param_1->index_to_small_allocator_index == (uint *)0x0) {
      bVar4 = false;
      ppVar1 = param_1->index_to_small_size_directory;
    }
    else {
      bVar4 = pas_large_expendable_memory_commit_if_necessary
                        (param_1->index_to_small_allocator_index,uVar6 * 4);
      ppVar1 = param_1->index_to_small_size_directory;
    }
    if (ppVar1 != (pas_compact_atomic_segregated_size_directory_ptr *)0x0) {
      bVar5 = pas_large_expendable_memory_commit_if_necessary(ppVar1,uVar6 << 2);
      bVar4 = (bool)(bVar4 | bVar5);
    }
  }
  uVar6 = (ulonglong)(param_1->rare_data).payload;
  lVar7 = uVar6 * 8 + pas_compact_heap_reservation_base;
  if (lVar7 != 0 && uVar6 != 0) {
    pvVar8 = (void *)((ulonglong)*(uint *)(lVar7 + 8) * 8 + pas_compact_heap_reservation_base);
    if ((ulonglong)*(uint *)(lVar7 + 8) == 0) {
      pvVar8 = (void *)0x0;
    }
    if ((ulonglong)*(uint *)(lVar7 + 0xc) != 0) {
      if (pvVar8 == (void *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      bVar5 = pas_compact_expendable_memory_commit_if_necessary
                        (pvVar8,(ulonglong)*(uint *)(lVar7 + 0xc) << 4);
      if (bVar4 == false && !bVar5) {
        return;
      }
      goto LAB_140d52c65;
    }
  }
  if (bVar4 == false) {
    return;
  }
LAB_140d52c65:
  pas_segregated_heap_num_size_lookup_rematerializations =
       pas_segregated_heap_num_size_lookup_rematerializations + 1;
  uVar6 = (ulonglong)(param_1->rare_data).payload;
  puVar9 = (ulonglong *)(uVar6 * 8 + pas_compact_heap_reservation_base);
  if (puVar9 == (ulonglong *)0x0 || uVar6 == 0) {
    recompute_size_lookup
              (param_1,param_2,param_3,(_func___cdecl_void_ulong64_uint_void_ptr *)param_1,unaff_RBX
               ,unaff_RBP,unaff_RDI);
  }
  else {
    if ((*puVar9 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    *puVar9 = *puVar9 | 1;
    LOCK();
    UNLOCK();
    recompute_size_lookup
              (param_1,param_2,param_3,(_func___cdecl_void_ulong64_uint_void_ptr *)param_1,unaff_RBX
               ,unaff_RBP,unaff_RDI);
    LOCK();
    UNLOCK();
    if ((*puVar9 & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    *puVar9 = *puVar9 + 1;
  }
  return;
}

// ensure_size_lookup @ 140d52cf0

void __cdecl ensure_size_lookup(pas_segregated_heap *param_1,pas_heap_config *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  code *pcVar3;
  pas_compact_atomic_segregated_size_directory_ptr *ppVar4;
  uint *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulong64 uVar8;
  ulonglong uVar9;
  byte bVar10;
  uint uVar11;
  
  if (param_1->small_index_upper_bound != 0) {
    return;
  }
  if (param_1->runtime_config->statically_allocated) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if (param_2 == &pas_utility_heap_config) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  bVar2 = (param_2->small_bitfit_config).base.is_enabled;
  bVar10 = (param_2->small_bitfit_config).base.min_align_shift;
  if (((param_2->small_segregated_config).base.is_enabled & 1U) == 0) {
    if ((bVar2 & 1U) == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
  }
  else {
    uVar6 = 0xffffffffffffffff;
    if ((bVar2 & 1U) != 0) {
      uVar6 = (ulonglong)bVar10;
    }
    uVar7 = (ulonglong)(param_2->small_segregated_config).base.min_align_shift;
    if (uVar7 <= uVar6) {
      uVar6 = uVar7;
    }
    bVar10 = (byte)uVar6;
  }
  uVar7 = (param_2->small_lookup_size_upper_bound + (1L << (bVar10 & 0x3f))) - 1 >> (bVar10 & 0x3f);
  uVar8 = (uVar7 + 1) * 4;
  ppVar4 = pas_large_expendable_memory_allocate
                     (uVar8,4,"pas_segregated_heap/index_to_size_directory");
  puVar5 = pas_large_expendable_memory_allocate
                     (uVar8,4,"pas_segregated_heap/index_to_allocator_index");
  uVar6 = uVar7 + 1;
  if (uVar6 != 0) {
    uVar9 = 0;
    if (((uVar6 < 0x10) || ((int)uVar7 == -1)) || (uVar7 >> 0x20 != 0)) {
      uVar11 = 0;
    }
    else {
      uVar11 = 0;
      if (0x1f < (ulonglong)((longlong)puVar5 - (longlong)ppVar4)) {
        uVar9 = uVar6 & 0x1fffffff8;
        uVar11 = (uint)uVar9;
        uVar7 = 0;
        do {
          puVar1 = (undefined8 *)((longlong)&ppVar4->payload + uVar7);
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1 = (undefined8 *)((longlong)&ppVar4[4].payload + uVar7);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)((longlong)puVar5 + uVar7) = 0;
          ((undefined8 *)((longlong)puVar5 + uVar7))[1] = 0;
          puVar1 = (undefined8 *)((longlong)puVar5 + uVar7 + 0x10);
          *puVar1 = 0;
          puVar1[1] = 0;
          uVar7 = uVar7 + 0x20;
        } while ((uVar6 * 4 & 0x7ffffffe0) != uVar7);
        if (uVar6 == uVar9) goto LAB_140d52deb;
      }
    }
    do {
      uVar11 = uVar11 + 1;
      ppVar4[uVar9].payload = 0;
      puVar5[uVar9] = 0;
      uVar9 = (ulonglong)uVar11;
    } while (uVar9 < uVar6);
  }
LAB_140d52deb:
  LOCK();
  UNLOCK();
  param_1->small_index_upper_bound = (uint)uVar6;
  param_1->index_to_small_size_directory = ppVar4;
  param_1->index_to_small_allocator_index = puVar5;
  return;
}

// pas_segregated_heap_ensure_size_directory_for_size @ 140d52e90

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

pas_segregated_size_directory * __cdecl
pas_segregated_heap_ensure_size_directory_for_size
          (pas_segregated_heap *param_1,ulong64 param_2,ulong64 param_3,pas_size_lookup_mode param_4
          ,pas_heap_config *param_5,uint *param_6,
          pas_segregated_size_directory_creation_mode param_7)

{
  pas_segregated_heap_rare_data_ptr *ppVar1;
  pas_bitfit_page_config *ppVar2;
  pas_bitfit_page_config *ppVar3;
  undefined1 *puVar4;
  bool bVar5;
  pas_bitfit_page_config_variant pVar6;
  pas_segregated_page_config_variant pVar7;
  pas_page_base_config *ppVar8;
  code *pcVar9;
  double dVar10;
  char cVar11;
  undefined1 uVar12;
  ulong64 uVar13;
  BOOLEAN BVar14;
  int iVar15;
  ulong64 uVar16;
  ulong64 uVar17;
  ulonglong uVar18;
  pas_heap_runtime_config *ppVar19;
  pas_bitfit_variant_selection pVar20;
  pas_segregated_heap_rare_data *ppVar21;
  pas_segregated_heap_medium_directory_tuple *ppVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  int iVar27;
  uint uVar28;
  pas_compact_atomic_segregated_size_directory_ptr *ppVar29;
  pas_heap *ppVar30;
  pas_segregated_heap *ppVar31;
  uint *puVar32;
  longlong lVar33;
  pas_segregated_size_directory *ppVar34;
  pas_segregated_page_config *ppVar35;
  ulonglong *puVar36;
  pas_segregated_heap_medium_directory_tuple *_Src;
  uint uVar37;
  int iVar38;
  ulonglong uVar39;
  uint uVar40;
  uint uVar41;
  pas_bitfit_page_config *ppVar42;
  pas_segregated_heap *ppVar43;
  pas_segregated_size_directory *ppVar44;
  int iVar45;
  longlong lVar46;
  pas_segregated_page_config *ppVar47;
  uint *puVar48;
  ulonglong uVar49;
  pas_segregated_heap *ppVar50;
  ulonglong uVar51;
  pas_segregated_size_directory *ppVar52;
  ulonglong uVar53;
  ulonglong uVar54;
  bool bVar55;
  double dVar56;
  int iVar57;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  pas_segregated_page_config *local_80;
  pas_compact_atomic_segregated_size_directory_ptr *local_68;
  undefined1 auVar58 [16];
  
  BVar14 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar14 != '\0') {
                    /* WARNING: Does not return */
    pcVar9 = (code *)invalidInstructionException();
    (*pcVar9)();
  }
  pas_heap_config_activate(param_5);
  rematerialize_size_lookup_if_necessary(param_1,param_5,param_6);
  ppVar30 = (pas_heap *)0x0;
  if (param_1->runtime_config->is_part_of_heap) {
    ppVar30 = (pas_heap *)param_1;
  }
  uVar16 = pas_heap_get_type_alignment(ppVar30);
  if (param_3 < uVar16) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)invalidInstructionException();
    (*pcVar9)();
  }
  bVar55 = (param_5->small_bitfit_config).base.is_enabled;
  bVar25 = (param_5->small_bitfit_config).base.min_align_shift;
  if (((param_5->small_segregated_config).base.is_enabled & 1U) == 0) {
    if ((bVar55 & 1U) == 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
    uVar53 = ((1L << (bVar25 & 0x3f)) + param_2) - 1 >> (bVar25 & 0x3f);
    uVar49 = uVar53 << (bVar25 & 0x3f);
  }
  else {
    uVar53 = 0xffffffffffffffff;
    if ((bVar55 & 1U) != 0) {
      uVar53 = (ulonglong)bVar25;
    }
    uVar49 = (ulonglong)(param_5->small_segregated_config).base.min_align_shift;
    if (uVar49 <= uVar53) {
      uVar53 = uVar49;
    }
    bVar25 = (byte)uVar53;
    uVar53 = ((1L << (bVar25 & 0x3f)) + param_2) - 1 >> (bVar25 & 0x3f);
    uVar49 = uVar53 << (bVar25 & 0x3f);
  }
  if (uVar49 < param_2) {
    if (uVar49 == 0) {
      return (pas_segregated_size_directory *)0x0;
    }
                    /* WARNING: Does not return */
    pcVar9 = (code *)invalidInstructionException();
    (*pcVar9)();
  }
  uVar17 = min_align_for_heap(param_1,param_5);
  if (uVar49 < uVar17) {
    uVar49 = uVar17;
  }
  bVar55 = (param_5->small_bitfit_config).base.is_enabled;
  bVar25 = (param_5->small_bitfit_config).base.min_align_shift;
  if (((param_5->small_segregated_config).base.is_enabled & 1U) == 0) {
    if ((bVar55 & 1U) == 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
  }
  else {
    uVar18 = 0xffffffffffffffff;
    if ((bVar55 & 1U) != 0) {
      uVar18 = (ulonglong)bVar25;
    }
    uVar54 = (ulonglong)(param_5->small_segregated_config).base.min_align_shift;
    if (uVar54 <= uVar18) {
      uVar18 = uVar54;
    }
    bVar25 = (byte)uVar18;
  }
  uVar54 = 1L << (bVar25 & 0x3f);
  uVar18 = min_align_for_heap(param_1,param_5);
  if (uVar18 < uVar54) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)invalidInstructionException();
    (*pcVar9)();
  }
  if ((uVar54 - 1 & uVar49) != 0) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)invalidInstructionException();
    (*pcVar9)();
  }
  if ((uVar18 ^ uVar18 - 1) <= uVar18 - 1) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)invalidInstructionException();
    (*pcVar9)();
  }
  ppVar50 = (pas_segregated_heap *)(-uVar18 & (uVar49 + uVar18) - 1);
  if (uVar18 < param_3) {
    uVar18 = param_3;
  }
  uVar49 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
  uVar49 = (uVar49 >> 2 & 0x3333333333333333) + (uVar49 & 0x3333333333333333);
  cVar11 = (char)(((uVar49 >> 4) + uVar49 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  if (uVar16 < uVar18) {
    if (cVar11 != '\x01') {
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
    if ((uVar18 - 1 & (ulonglong)ppVar50) != 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
  }
  else {
    if (cVar11 != '\x01') {
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
    ppVar50 = (pas_segregated_heap *)(-uVar18 & (longlong)ppVar50 + (uVar18 - 1));
  }
  if (ppVar50 < param_2) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)invalidInstructionException();
    (*pcVar9)();
  }
  if (((ulonglong)ppVar50 | uVar18) >> 0x20 != 0) {
    return (pas_segregated_size_directory *)0x0;
  }
  ppVar2 = &param_5->small_bitfit_config;
  ppVar42 = &param_5->marge_bitfit_config;
  ppVar3 = &param_5->medium_bitfit_config;
  if ((pas_marge_bitfit_page_config_variant_is_enabled_override & 1U) == 0) {
    if (pas_medium_bitfit_page_config_variant_is_enabled_override == false) {
      if (pas_small_bitfit_page_config_variant_is_enabled_override == false) {
        ppVar19 = param_1->runtime_config;
        if ((((((ppVar42->base).is_enabled & 1U) != 0) && (ppVar19->max_bitfit_object_size != 0)) &&
            (pas_marge_bitfit_page_config_variant < (param_5->marge_bitfit_config).variant)) ||
           (((((ppVar3->base).is_enabled & 1U) != 0 && (ppVar19->max_bitfit_object_size != 0)) &&
            (pas_marge_bitfit_page_config_variant < (param_5->medium_bitfit_config).variant))))
        goto LAB_140d54e01;
        if (((ppVar2->base).is_enabled & 1U) != 0) {
          ppVar31 = (pas_segregated_heap *)0x0;
          if ((ppVar19->max_bitfit_object_size != 0) &&
             (pas_marge_bitfit_page_config_variant < (param_5->small_bitfit_config).variant))
          goto LAB_140d54e01;
          goto LAB_140d53522;
        }
      }
      else {
        ppVar19 = param_1->runtime_config;
        if (((((((param_5->marge_bitfit_config).base.is_enabled & 1U) != 0) &&
              (uVar37 = ppVar19->max_bitfit_object_size, uVar37 != 0)) &&
             (pVar6 = (param_5->marge_bitfit_config).variant,
             1 < pVar6 - pas_medium_bitfit_page_config_variant)) ||
            (((((param_5->medium_bitfit_config).base.is_enabled & 1U) != 0 &&
              (uVar37 = ppVar19->max_bitfit_object_size, uVar37 != 0)) &&
             (pVar6 = (param_5->medium_bitfit_config).variant, ppVar42 = ppVar3,
             1 < pVar6 - pas_medium_bitfit_page_config_variant)))) ||
           (((((param_5->small_bitfit_config).base.is_enabled & 1U) != 0 &&
             (uVar37 = ppVar19->max_bitfit_object_size, uVar37 != 0)) &&
            (pVar6 = (param_5->small_bitfit_config).variant, ppVar42 = ppVar2,
            1 < pVar6 - pas_medium_bitfit_page_config_variant)))) {
          if (pVar6 != pas_small_bitfit_page_config_variant) goto LAB_140d54e01;
          goto LAB_140d53509;
        }
      }
      goto LAB_140d534ef;
    }
    ppVar19 = param_1->runtime_config;
    bVar55 = (param_5->marge_bitfit_config).base.is_enabled;
    pVar6 = (param_5->marge_bitfit_config).variant;
    if (pas_small_bitfit_page_config_variant_is_enabled_override == false) {
      if ((((bVar55 & 1U) != 0) && (uVar37 = ppVar19->max_bitfit_object_size, uVar37 != 0)) &&
         (pVar6 != pas_marge_bitfit_page_config_variant)) {
        if (pVar6 == pas_medium_bitfit_page_config_variant) goto LAB_140d53509;
        if (pVar6 != pas_small_bitfit_page_config_variant) goto LAB_140d54e01;
      }
      if (((((param_5->medium_bitfit_config).base.is_enabled & 1U) != 0) &&
          (uVar37 = ppVar19->max_bitfit_object_size, uVar37 != 0)) &&
         (pVar6 = (param_5->medium_bitfit_config).variant,
         pVar6 != pas_marge_bitfit_page_config_variant)) {
        ppVar42 = ppVar3;
        if (pVar6 == pas_medium_bitfit_page_config_variant) goto LAB_140d53509;
        if (pVar6 != pas_small_bitfit_page_config_variant) goto LAB_140d54e01;
      }
      if ((((param_5->small_bitfit_config).base.is_enabled & 1U) == 0) ||
         (uVar37 = ppVar19->max_bitfit_object_size, uVar37 == 0)) goto LAB_140d534ef;
      pVar6 = (param_5->small_bitfit_config).variant;
      ppVar31 = (pas_segregated_heap *)0x0;
      if (pVar6 != pas_small_bitfit_page_config_variant) {
        ppVar42 = ppVar2;
        if (pVar6 == pas_medium_bitfit_page_config_variant) goto LAB_140d53509;
        goto joined_r0x000140d53495;
      }
    }
    else {
      if (((bVar55 & 1U) != 0) && (uVar37 = ppVar19->max_bitfit_object_size, uVar37 != 0)) {
        if (pVar6 < pas_marge_bitfit_page_config_variant) goto LAB_140d53509;
        if (pVar6 != pas_marge_bitfit_page_config_variant) goto LAB_140d54e01;
      }
      if ((((param_5->medium_bitfit_config).base.is_enabled & 1U) != 0) &&
         (uVar37 = ppVar19->max_bitfit_object_size, uVar37 != 0)) {
        pVar6 = (param_5->medium_bitfit_config).variant;
        ppVar42 = ppVar3;
        if (pVar6 < pas_marge_bitfit_page_config_variant) goto LAB_140d53509;
        if (pVar6 != pas_marge_bitfit_page_config_variant) goto LAB_140d54e01;
      }
      if (((param_5->small_bitfit_config).base.is_enabled & 1U) == 0) goto LAB_140d534ef;
      uVar37 = ppVar19->max_bitfit_object_size;
      ppVar31 = (pas_segregated_heap *)0x0;
      if (uVar37 != 0) {
        pVar6 = (param_5->small_bitfit_config).variant;
        ppVar42 = ppVar2;
        if (pVar6 < pas_marge_bitfit_page_config_variant) goto LAB_140d53509;
joined_r0x000140d53495:
        ppVar31 = (pas_segregated_heap *)0x0;
        if (pVar6 != pas_marge_bitfit_page_config_variant) goto LAB_140d54e01;
      }
    }
  }
  else if (pas_medium_bitfit_page_config_variant_is_enabled_override == false) {
    ppVar19 = param_1->runtime_config;
    if ((((param_5->marge_bitfit_config).base.is_enabled & 1U) != 0) &&
       (uVar37 = ppVar19->max_bitfit_object_size, uVar37 != 0)) {
      pVar6 = (param_5->marge_bitfit_config).variant;
      if (pVar6 == pas_marge_bitfit_page_config_variant) goto LAB_140d53509;
      if (pVar6 != pas_medium_bitfit_page_config_variant) {
        if (pVar6 != pas_small_bitfit_page_config_variant) goto LAB_140d54e01;
        if (pas_small_bitfit_page_config_variant_is_enabled_override != false) goto LAB_140d53509;
      }
    }
    if ((((param_5->medium_bitfit_config).base.is_enabled & 1U) != 0) &&
       (uVar37 = ppVar19->max_bitfit_object_size, uVar37 != 0)) {
      pVar6 = (param_5->medium_bitfit_config).variant;
      ppVar42 = ppVar3;
      if (pVar6 == pas_marge_bitfit_page_config_variant) goto LAB_140d53509;
      if (pVar6 != pas_medium_bitfit_page_config_variant) {
        if (pVar6 != pas_small_bitfit_page_config_variant) goto LAB_140d54e01;
        if (pas_small_bitfit_page_config_variant_is_enabled_override != false) goto LAB_140d53509;
      }
    }
    if ((((param_5->small_bitfit_config).base.is_enabled & 1U) != 0) &&
       (uVar37 = ppVar19->max_bitfit_object_size, uVar37 != 0)) {
      pVar6 = (param_5->small_bitfit_config).variant;
      ppVar42 = ppVar2;
      if (pVar6 == pas_marge_bitfit_page_config_variant) goto LAB_140d53509;
      if (pVar6 != pas_medium_bitfit_page_config_variant) {
        if (pVar6 != pas_small_bitfit_page_config_variant) goto LAB_140d54e01;
        if (pas_small_bitfit_page_config_variant_is_enabled_override != false) goto LAB_140d53509;
      }
    }
LAB_140d534ef:
    ppVar31 = (pas_segregated_heap *)0x0;
  }
  else {
    if (pas_small_bitfit_page_config_variant_is_enabled_override == false) {
      ppVar19 = param_1->runtime_config;
      if ((((param_5->marge_bitfit_config).base.is_enabled & 1U) != 0) &&
         (uVar37 = ppVar19->max_bitfit_object_size, uVar37 != 0)) {
        pVar6 = (param_5->marge_bitfit_config).variant;
        if (pVar6 - pas_medium_bitfit_page_config_variant < 2) goto LAB_140d53509;
        if (pVar6 != pas_small_bitfit_page_config_variant) goto LAB_140d54e01;
      }
      if ((((param_5->medium_bitfit_config).base.is_enabled & 1U) != 0) &&
         (uVar37 = ppVar19->max_bitfit_object_size, uVar37 != 0)) {
        pVar6 = (param_5->medium_bitfit_config).variant;
        ppVar42 = ppVar3;
        if (pVar6 - pas_medium_bitfit_page_config_variant < 2) goto LAB_140d53509;
        if (pVar6 != pas_small_bitfit_page_config_variant) goto LAB_140d54e01;
      }
      if ((((param_5->small_bitfit_config).base.is_enabled & 1U) == 0) ||
         (uVar37 = ppVar19->max_bitfit_object_size, uVar37 == 0)) goto LAB_140d534ef;
      pVar6 = (param_5->small_bitfit_config).variant;
      ppVar31 = (pas_segregated_heap *)(ulonglong)pVar6;
      ppVar42 = ppVar2;
      if (1 < pVar6 - pas_medium_bitfit_page_config_variant) {
        if (pVar6 != pas_small_bitfit_page_config_variant) {
LAB_140d54e01:
                    /* WARNING: Does not return */
          pcVar9 = (code *)invalidInstructionException();
          (*pcVar9)();
        }
        goto LAB_140d53522;
      }
    }
    else {
      ppVar19 = param_1->runtime_config;
      if ((((((ppVar42->base).is_enabled & 1U) == 0) ||
           (uVar37 = ppVar19->max_bitfit_object_size, uVar37 == 0)) &&
          ((((ppVar3->base).is_enabled & 1U) == 0 ||
           (uVar37 = ppVar19->max_bitfit_object_size, ppVar42 = ppVar3, uVar37 == 0)))) &&
         ((((ppVar2->base).is_enabled & 1U) == 0 ||
          (uVar37 = ppVar19->max_bitfit_object_size, ppVar42 = ppVar2, uVar37 == 0))))
      goto LAB_140d534ef;
      if (pas_marge_bitfit_page_config_variant < ppVar42->variant) goto LAB_140d54e01;
    }
LAB_140d53509:
    bVar25 = (ppVar42->base).min_align_shift;
    ppVar31 = (pas_segregated_heap *)
              (((ppVar42->base).max_object_size >> (bVar25 & 0x3f)) << (bVar25 & 0x3f));
    if ((pas_segregated_heap *)(ulonglong)uVar37 < ppVar31) {
      ppVar31 = (pas_segregated_heap *)(ulonglong)uVar37;
    }
  }
LAB_140d53522:
  local_80 = &param_5->small_segregated_config;
  ppVar35 = &param_5->medium_segregated_config;
  bVar55 = (param_5->medium_segregated_config).base.is_enabled;
  ppVar47 = ppVar35;
  if ((pas_medium_segregated_page_config_variant_is_enabled_override & 1U) == 0) {
    if (pas_small_segregated_page_config_variant_is_enabled_override != false) {
      if (((bVar55 & 1U) != 0) && (uVar37 = ppVar19->max_segregated_object_size, uVar37 != 0)) {
        pVar7 = (param_5->medium_segregated_config).variant;
        if (pVar7 == pas_small_segregated_page_config_variant) goto LAB_140d53637;
        if (pVar7 != pas_medium_segregated_page_config_variant) goto LAB_140d5367d;
      }
      if ((((param_5->small_segregated_config).base.is_enabled & 1U) != 0) &&
         (uVar37 = ppVar19->max_segregated_object_size, uVar37 != 0)) {
        pVar7 = (param_5->small_segregated_config).variant;
        ppVar47 = local_80;
        if (pVar7 == pas_small_segregated_page_config_variant) goto LAB_140d53637;
        if (pVar7 != pas_medium_segregated_page_config_variant) goto LAB_140d5367d;
      }
      goto LAB_140d5367f;
    }
    if ((((bVar55 & 1U) != 0) && (ppVar19->max_segregated_object_size != 0)) &&
       (pas_medium_segregated_page_config_variant < (param_5->medium_segregated_config).variant))
    goto LAB_140d5367d;
    if (((local_80->base).is_enabled & 1U) == 0) goto LAB_140d5367f;
    ppVar43 = (pas_segregated_heap *)0x0;
    if ((ppVar19->max_segregated_object_size != 0) &&
       (ppVar43 = (pas_segregated_heap *)0x0,
       pas_medium_segregated_page_config_variant < (param_5->small_segregated_config).variant))
    goto LAB_140d5367d;
  }
  else {
    if (pas_small_segregated_page_config_variant_is_enabled_override == false) {
      if (((bVar55 & 1U) == 0) || (uVar37 = ppVar19->max_segregated_object_size, uVar37 == 0)) {
LAB_140d53613:
        if ((((param_5->small_segregated_config).base.is_enabled & 1U) == 0) ||
           (uVar37 = ppVar19->max_segregated_object_size, uVar37 == 0)) goto LAB_140d5367f;
        pVar7 = (param_5->small_segregated_config).variant;
        ppVar43 = (pas_segregated_heap *)0x0;
        if (pVar7 == pas_small_segregated_page_config_variant) goto LAB_140d53682;
        ppVar47 = local_80;
        if (pVar7 != pas_medium_segregated_page_config_variant) goto LAB_140d5367d;
      }
      else {
        pVar7 = (param_5->medium_segregated_config).variant;
        if (pVar7 != pas_medium_segregated_page_config_variant) {
          if (pVar7 != pas_small_segregated_page_config_variant) goto LAB_140d5367d;
          goto LAB_140d53613;
        }
      }
    }
    else {
      if ((bVar55 & 1U) == 0) {
LAB_140d53563:
        if (((local_80->base).is_enabled & 1U) != 0) {
          uVar37 = ppVar19->max_segregated_object_size;
          lVar46 = 0x38;
          if (uVar37 != 0) goto LAB_140d5357f;
        }
LAB_140d5367f:
        ppVar43 = (pas_segregated_heap *)0x0;
        goto LAB_140d53682;
      }
      uVar37 = ppVar19->max_segregated_object_size;
      lVar46 = 0x120;
      if (uVar37 == 0) goto LAB_140d53563;
LAB_140d5357f:
      if (1 < *(uint *)((longlong)
                        &(param_5->small_segregated_config).base.non_committable_granule_bitvector +
                       lVar46)) {
LAB_140d5367d:
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      ppVar47 = (pas_segregated_page_config *)((longlong)&param_5->config_ptr + lVar46);
    }
LAB_140d53637:
    bVar25 = (ppVar47->base).min_align_shift;
    ppVar43 = (pas_segregated_heap *)
              (((ppVar47->base).max_object_size >> (bVar25 & 0x3f)) << (bVar25 & 0x3f));
    if ((pas_segregated_heap *)(ulonglong)uVar37 < ppVar43) {
      ppVar43 = (pas_segregated_heap *)(ulonglong)uVar37;
    }
  }
LAB_140d53682:
  if (ppVar31 < ppVar43) {
    ppVar31 = ppVar43;
  }
  if (ppVar31 < ppVar50) {
    return (pas_segregated_size_directory *)0x0;
  }
  if (param_4 == pas_force_size_lookup) {
LAB_140d5373a:
    uVar49 = (ulonglong)param_1->small_index_upper_bound;
    if (uVar49 == 0) {
      bVar55 = (param_5->small_bitfit_config).base.is_enabled;
      bVar25 = (param_5->small_bitfit_config).base.min_align_shift;
      if (((param_5->small_segregated_config).base.is_enabled & 1U) == 0) {
        if ((bVar55 & 1U) == 0) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)invalidInstructionException();
          (*pcVar9)();
        }
      }
      else {
        uVar49 = 0xffffffffffffffff;
        if ((bVar55 & 1U) != 0) {
          uVar49 = (ulonglong)bVar25;
        }
        uVar54 = (ulonglong)(param_5->small_segregated_config).base.min_align_shift;
        if (uVar54 <= uVar49) {
          uVar49 = uVar54;
        }
        bVar25 = (byte)uVar49;
      }
      uVar49 = ((param_5->small_lookup_size_upper_bound + (1L << (bVar25 & 0x3f))) - 1 >>
               (bVar25 & 0x3f)) + 1;
    }
    if (uVar53 < uVar49) {
      ensure_size_lookup(param_1,param_5);
    }
  }
  else if (param_6 == (uint *)0x0) {
    ppVar30 = (pas_heap *)0x0;
    if (ppVar19->is_part_of_heap) {
      ppVar30 = (pas_heap *)param_1;
    }
    uVar16 = pas_heap_get_type_size(ppVar30);
    bVar55 = (param_5->small_bitfit_config).base.is_enabled;
    bVar25 = (param_5->small_bitfit_config).base.min_align_shift;
    if (((param_5->small_segregated_config).base.is_enabled & 1U) == 0) {
      if ((bVar55 & 1U) == 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
    }
    else {
      uVar49 = 0xffffffffffffffff;
      if ((bVar55 & 1U) != 0) {
        uVar49 = (ulonglong)bVar25;
      }
      uVar54 = (ulonglong)(param_5->small_segregated_config).base.min_align_shift;
      if (uVar54 <= uVar49) {
        uVar49 = uVar54;
      }
      bVar25 = (byte)uVar49;
    }
    uVar49 = (uVar16 + (1L << (bVar25 & 0x3f))) - 1 >> (bVar25 & 0x3f);
joined_r0x000140d53738:
    if (uVar49 != uVar53) goto LAB_140d5373a;
  }
  else {
    uVar49 = (ulonglong)*param_6;
    if (uVar49 != 0xffffffff) goto joined_r0x000140d53738;
  }
  uVar37 = (uint)uVar53;
  if ((((uVar53 < param_1->small_index_upper_bound) &&
       (param_1->index_to_small_size_directory !=
        (pas_compact_atomic_segregated_size_directory_ptr *)0x0)) &&
      (uVar49 = (ulonglong)param_1->index_to_small_size_directory[uVar53].payload,
      ppVar52 = (pas_segregated_size_directory *)(uVar49 * 8 + pas_compact_heap_reservation_base),
      ppVar52 != (pas_segregated_size_directory *)0x0 && uVar49 != 0)) ||
     (ppVar52 = pas_segregated_heap_size_directory_for_index_slow(param_1,uVar53,param_6,param_5),
     ppVar52 != (pas_segregated_size_directory *)0x0)) {
    uVar49 = 1L << ppVar52->alignment_shift;
    uVar28 = ppVar52->object_size;
    ppVar31 = (pas_segregated_heap *)(ulonglong)uVar28;
    if ((((int)uVar49 - 1U & uVar28) != 0) && ((ppVar52->base).page_config_kind != 0)) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
    if (uVar18 <= uVar49) {
      return ppVar52;
    }
    if ((ppVar52->base).page_config_kind == 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
    if (ppVar31 < ppVar50) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
    bVar55 = (param_5->small_segregated_config).base.is_enabled;
    bVar5 = (param_5->small_bitfit_config).base.is_enabled;
    bVar25 = (param_5->small_segregated_config).base.min_align_shift;
    uVar49 = (ulonglong)bVar25;
    bVar26 = (param_5->small_bitfit_config).base.min_align_shift;
    uVar54 = 0xffffffffffffffff;
    if ((bVar5 & 1U) != 0) {
      uVar54 = (ulonglong)bVar26;
    }
    bVar23 = (byte)uVar54;
    if ((bVar55 & 1U) == 0) {
      if ((bVar5 & 1U) == 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      if (ppVar31 < (pas_segregated_heap *)(uVar53 << (bVar26 & 0x3f))) goto LAB_140d54d9b;
      if ((ulonglong)((longlong)ppVar31 + (1L << (bVar26 & 0x3f)) + -1) >> (bVar26 & 0x3f) < uVar53)
      goto LAB_140d54d9d;
      bVar24 = bVar26;
      if ((bVar55 & 1U) != 0) goto LAB_140d538f8;
    }
    else {
      bVar24 = bVar25;
      if (uVar54 < uVar49) {
        bVar24 = bVar23;
      }
      if (ppVar31 < (pas_segregated_heap *)(uVar53 << (bVar24 & 0x3f))) {
LAB_140d54d9b:
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      bVar24 = bVar25;
      if (uVar54 < uVar49) {
        bVar24 = bVar23;
      }
      if ((ulonglong)((longlong)ppVar31 + (1L << (bVar24 & 0x3f)) + -1) >> (bVar24 & 0x3f) < uVar53)
      {
LAB_140d54d9d:
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
LAB_140d538f8:
      bVar24 = bVar25;
      if (uVar54 < uVar49) {
        bVar24 = bVar23;
      }
    }
    if ((ulonglong)((longlong)ppVar31 + (1L << (bVar24 & 0x3f)) + -1) >> (bVar24 & 0x3f) == uVar53)
    {
      do {
        uVar28 = ppVar52->encoded_stuff;
        LOCK();
        bVar55 = uVar28 == ppVar52->encoded_stuff;
        if (bVar55) {
          ppVar52->encoded_stuff = uVar28 | 0xffffff80;
        }
        UNLOCK();
      } while (!bVar55);
    }
    else {
      if (uVar53 == 0xffffffffffffffff) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      if ((bVar55 & 1U) == 0) {
        if ((bVar5 & 1U) == 0) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)invalidInstructionException();
          (*pcVar9)();
        }
      }
      else {
        if (uVar54 < uVar49) {
          uVar49 = uVar54;
        }
        bVar26 = (byte)uVar49;
      }
      uVar49 = uVar53 + 1;
      if ((ulonglong)((longlong)ppVar31 + (1L << (bVar26 & 0x3f)) + -1) >> (bVar26 & 0x3f) < uVar49)
      {
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      if (uVar49 >> 0x20 != 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      if (0xffffff7f < ppVar52->encoded_stuff) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      uVar41 = (uint)uVar49;
      uVar28 = 0xffffffff;
      if ((uVar41 & 0x1ffffff) != 0x1ffffff) {
        uVar28 = uVar41 & 0x1ffffff;
      }
      if (uVar28 != uVar41) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      do {
        uVar28 = ppVar52->encoded_stuff;
        LOCK();
        bVar55 = uVar28 == ppVar52->encoded_stuff;
        if (bVar55) {
          ppVar52->encoded_stuff = uVar28 & 0x7f | uVar41 << 7;
        }
        UNLOCK();
      } while (!bVar55);
    }
    uVar49 = (ulonglong)param_1->small_index_upper_bound;
    if (uVar49 != 0) {
      puVar32 = param_1->index_to_small_allocator_index;
      ppVar29 = param_1->index_to_small_size_directory;
      if (uVar53 < uVar49) {
        ppVar44 = (pas_segregated_size_directory *)
                  ((ulonglong)ppVar29[uVar53].payload * 8 + pas_compact_heap_reservation_base);
        if ((ulonglong)ppVar29[uVar53].payload == 0) {
          ppVar44 = (pas_segregated_size_directory *)0x0;
        }
        if (ppVar44 != ppVar52) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)invalidInstructionException();
          (*pcVar9)();
        }
      }
      else if (uVar53 == 0xffffffffffffffff) goto LAB_140d53a21;
      if (uVar53 + 1 < uVar49) {
        uVar49 = uVar53 + 1;
      }
      do {
        ppVar44 = (pas_segregated_size_directory *)
                  ((ulonglong)ppVar29[uVar49 - 1].payload * 8 + pas_compact_heap_reservation_base);
        if ((ulonglong)ppVar29[uVar49 - 1].payload == 0) {
          ppVar44 = (pas_segregated_size_directory *)0x0;
        }
        if (ppVar44 != ppVar52) break;
        uVar49 = uVar49 - 1;
        ppVar29[uVar49].payload = 0;
        if (param_5 != &pas_utility_heap_config) {
          puVar32[uVar49] = 0;
        }
      } while (uVar49 != 0);
    }
LAB_140d53a21:
    uVar49 = (ulonglong)(param_1->rare_data).payload;
    if ((uVar49 != 0) && (uVar49 << 3 != -pas_compact_heap_reservation_base)) {
      uVar49 = (ulonglong)(param_1->rare_data).payload;
      lVar46 = pas_compact_heap_reservation_base + uVar49 * 8;
      if (uVar49 == 0) {
        lVar46 = 0;
      }
      lVar33 = pas_compact_heap_reservation_base + (ulonglong)*(uint *)(lVar46 + 8) * 8;
      if ((ulonglong)*(uint *)(lVar46 + 8) == 0) {
        lVar33 = 0;
      }
      if (*(uint *)(lVar46 + 0xc) != 0) {
        uVar41 = 0;
        uVar28 = *(uint *)(lVar46 + 0xc);
        do {
          while( true ) {
            uVar40 = uVar28 + uVar41 >> 1;
            uVar49 = (ulonglong)*(uint *)(lVar33 + 8 + (ulonglong)uVar40 * 0x10);
            if (uVar49 == 0) goto LAB_140d53aae;
            if (uVar53 < uVar49) break;
            lVar46 = (ulonglong)uVar40 * 0x10 + lVar33;
            if (uVar53 <= *(uint *)(lVar46 + 0xc)) {
              if (uVar53 < *(uint *)(lVar46 + 8)) {
                    /* WARNING: Does not return */
                pcVar9 = (code *)invalidInstructionException();
                (*pcVar9)();
              }
              if (*(uint *)(lVar46 + 0xc) < uVar53) {
                    /* WARNING: Does not return */
                pcVar9 = (code *)invalidInstructionException();
                (*pcVar9)();
              }
              uVar49 = (ulonglong)(param_1->rare_data).payload;
              if ((uVar49 == 0) ||
                 (puVar36 = (ulonglong *)(uVar49 * 8 + pas_compact_heap_reservation_base),
                 puVar36 == (ulonglong *)0x0)) {
                    /* WARNING: Does not return */
                pcVar9 = (code *)invalidInstructionException();
                (*pcVar9)();
              }
              if ((*puVar36 & 1) != 0) {
                    /* WARNING: Does not return */
                pcVar9 = (code *)invalidInstructionException();
                (*pcVar9)();
              }
              *puVar36 = *puVar36 | 1;
              LOCK();
              UNLOCK();
              if (uVar53 < *(uint *)(lVar46 + 0xc)) {
                *(uint *)(lVar46 + 8) = uVar37 + 1;
              }
              else {
                if (uVar53 != *(uint *)(lVar46 + 0xc)) {
                    /* WARNING: Does not return */
                  pcVar9 = (code *)invalidInstructionException();
                  (*pcVar9)();
                }
                lVar33 = (ulonglong)(uint)puVar36[1] * 8 + pas_compact_heap_reservation_base;
                if ((ulonglong)(uint)puVar36[1] == 0) {
                  lVar33 = 0;
                }
                lVar46 = lVar46 - lVar33;
                if ((ulonglong)*(uint *)((longlong)puVar36 + 0xc) <= (ulonglong)(lVar46 >> 4)) {
                    /* WARNING: Does not return */
                  pcVar9 = (code *)invalidInstructionException();
                  (*pcVar9)();
                }
                memmove((void *)(lVar33 + lVar46),(void *)(lVar33 + lVar46 + 0x10),
                        (~(lVar46 >> 4) + (ulonglong)*(uint *)((longlong)puVar36 + 0xc)) * 0x10);
                *(int *)((longlong)puVar36 + 0xc) = *(int *)((longlong)puVar36 + 0xc) + -1;
              }
              check_medium_directories
                        ((pas_segregated_heap *)(ulonglong)(param_1->rare_data).payload);
              LOCK();
              UNLOCK();
              if ((*puVar36 & 1) == 0) {
                    /* WARNING: Does not return */
                pcVar9 = (code *)invalidInstructionException();
                (*pcVar9)();
              }
              *puVar36 = *puVar36 + 1;
              goto LAB_140d53aae;
            }
            uVar41 = uVar40 + 1;
            if (uVar28 <= uVar41) goto LAB_140d53aae;
          }
          uVar28 = uVar40;
        } while (uVar41 < uVar40);
      }
    }
LAB_140d53aae:
    uVar49 = (ulonglong)(param_1->basic_size_directory_and_head).payload;
    ppVar44 = (pas_segregated_size_directory *)(uVar49 * 8 + pas_compact_heap_reservation_base);
    if (uVar49 == 0) {
      ppVar44 = (pas_segregated_size_directory *)0x0;
    }
    if ((((ppVar44 == ppVar52) && ((ppVar52->base).is_basic_size_directory == true)) &&
        (bVar55 = pas_segregated_heap_index_is_greater_equal_cached_index_and_cached_index_is_set
                            (param_1,param_6,uVar53,param_5), bVar55)) &&
       (((ppVar52->base).is_basic_size_directory = false, param_1->runtime_config->is_part_of_heap
        && (*(longlong *)&param_1[1].basic_size_directory_and_head != 0)))) {
      *(undefined4 *)(*(longlong *)&param_1[1].basic_size_directory_and_head + 0x10) = 0;
    }
  }
  uVar16 = pas_compact_heap_reservation_base;
  if (uVar53 < param_1->small_index_upper_bound) {
    uVar49 = uVar53;
    do {
      uVar28 = param_1->index_to_small_size_directory[uVar49].payload;
      ppVar52 = (pas_segregated_size_directory *)
                ((ulonglong)uVar28 * 8 + pas_compact_heap_reservation_base);
      if (ppVar52 != (pas_segregated_size_directory *)0x0 && uVar28 != 0) {
        uVar28 = (param_1->basic_size_directory_and_head).payload;
        if (param_6 == (uint *)0x0) {
          ppVar30 = (pas_heap *)0x0;
          if (param_1->runtime_config->is_part_of_heap) {
            ppVar30 = (pas_heap *)param_1;
          }
          uVar17 = pas_heap_get_type_size(ppVar30);
          bVar55 = (param_5->small_bitfit_config).base.is_enabled;
          bVar25 = (param_5->small_bitfit_config).base.min_align_shift;
          if (((param_5->small_segregated_config).base.is_enabled & 1U) == 0) {
            if ((bVar55 & 1U) == 0) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)invalidInstructionException();
              (*pcVar9)();
            }
          }
          else {
            uVar54 = 0xffffffffffffffff;
            if ((bVar55 & 1U) != 0) {
              uVar54 = (ulonglong)bVar25;
            }
            uVar39 = (ulonglong)(param_5->small_segregated_config).base.min_align_shift;
            if (uVar39 <= uVar54) {
              uVar54 = uVar39;
            }
            bVar25 = (byte)uVar54;
          }
          uVar54 = (uVar17 + (1L << (bVar25 & 0x3f))) - 1 >> (bVar25 & 0x3f);
        }
        else {
          uVar54 = (ulonglong)*param_6;
          if (uVar54 == 0xffffffff) goto LAB_140d53ca5;
        }
        if (((uVar49 <= uVar54) || (uVar28 == 0)) ||
           (ppVar44 = (pas_segregated_size_directory *)(uVar16 + (ulonglong)uVar28 * 8),
           ppVar44 == (pas_segregated_size_directory *)0x0)) goto LAB_140d53ca5;
        goto LAB_140d53c8f;
      }
      uVar49 = uVar49 + 1;
    } while (param_1->small_index_upper_bound != uVar49);
  }
  uVar49 = (ulonglong)(param_1->basic_size_directory_and_head).payload;
  if (uVar49 == 0) {
    ppVar52 = (pas_segregated_size_directory *)0x0;
  }
  else {
    ppVar52 = (pas_segregated_size_directory *)0x0;
    ppVar44 = (pas_segregated_size_directory *)(uVar49 * 8 + pas_compact_heap_reservation_base);
    if (ppVar44 != (pas_segregated_size_directory *)0x0) {
LAB_140d53c8f:
      if (((ppVar44->base).is_basic_size_directory == true) && (ppVar50 <= ppVar44->object_size)) {
        ppVar52 = ppVar44;
      }
    }
  }
LAB_140d53ca5:
  local_68 = &param_1->basic_size_directory_and_head;
  ppVar1 = &param_1->rare_data;
  uVar49 = (ulonglong)(param_1->rare_data).payload;
  if ((uVar49 != 0) && (uVar49 << 3 != -pas_compact_heap_reservation_base)) {
    lVar46 = pas_compact_heap_reservation_base + (ulonglong)ppVar1->payload * 8;
    if ((ulonglong)ppVar1->payload == 0) {
      lVar46 = 0;
    }
    lVar33 = pas_compact_heap_reservation_base + (ulonglong)*(uint *)(lVar46 + 8) * 8;
    if ((ulonglong)*(uint *)(lVar46 + 8) == 0) {
      lVar33 = 0;
    }
    if (*(uint *)(lVar46 + 0xc) != 0) {
      uVar41 = 0;
      puVar32 = (uint *)0x0;
      uVar28 = *(uint *)(lVar46 + 0xc);
      do {
        while( true ) {
          uVar40 = uVar28 + uVar41 >> 1;
          uVar49 = (ulonglong)*(uint *)(lVar33 + 8 + (ulonglong)uVar40 * 0x10);
          if (uVar49 == 0) goto LAB_140d53d7e;
          puVar48 = (uint *)((ulonglong)uVar40 * 0x10 + lVar33);
          if (uVar53 < uVar49) break;
          if (uVar53 <= puVar48[3]) goto LAB_140d53d4c;
          uVar41 = uVar40 + 1;
          puVar48 = puVar32;
          if (uVar28 <= uVar41) goto LAB_140d53d40;
        }
        puVar32 = puVar48;
        uVar28 = uVar40;
      } while (uVar41 < uVar40);
LAB_140d53d40:
      if (puVar48 != (uint *)0x0) {
LAB_140d53d4c:
        ppVar44 = (pas_segregated_size_directory *)
                  ((ulonglong)*puVar48 * 8 + pas_compact_heap_reservation_base);
        if ((ulonglong)*puVar48 == 0) {
          ppVar44 = (pas_segregated_size_directory *)0x0;
        }
        if ((ppVar52 == (pas_segregated_size_directory *)0x0) ||
           (ppVar44->object_size < ppVar52->object_size)) {
          ppVar52 = ppVar44;
        }
      }
    }
  }
LAB_140d53d7e:
  ppVar19 = param_1->runtime_config;
  uVar28 = ppVar19->max_segregated_object_size;
  ppVar31 = (pas_segregated_heap *)(ulonglong)uVar28;
  if (ppVar31 < ppVar50) {
LAB_140d54275:
    if ((pas_segregated_heap *)(ulonglong)ppVar19->max_bitfit_object_size < ppVar50) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
    pVar20 = pas_bitfit_heap_select_variant((ulong64)ppVar50,param_5,ppVar19);
    if (param_5 == &pas_utility_heap_config) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
    local_80 = (pas_segregated_page_config *)0x0;
    dVar56 = (double)((ulonglong)pVar20 & 0xffffffff);
    ppVar35 = (pas_segregated_page_config *)CONCAT71((int7)((ulonglong)ppVar31 >> 8),1);
  }
  else {
    puVar4 = (undefined1 *)((longlong)&ppVar50[-1].small_index_upper_bound + 3);
    dVar10 = __real_7ff0000000000000;
    if (((param_5->medium_segregated_config).base.is_enabled & 1U) == 0) goto LAB_140d53dde;
    if (uVar28 == 0) goto LAB_140d54275;
    pVar7 = (param_5->medium_segregated_config).variant;
    if ((ulonglong)pVar7 == 0) {
      if (pas_small_segregated_page_config_variant_is_enabled_override == false) goto LAB_140d53dde;
LAB_140d53eab:
      bVar25 = (param_5->medium_segregated_config).base.min_align_shift;
      lVar46 = 1L << (bVar25 & 0x3f);
      uVar39 = -lVar46 & (ulonglong)(puVar4 + lVar46);
      uVar54 = uVar39 & 0xffffffff;
      uVar49 = (param_5->medium_segregated_config).base.max_object_size;
      if ((uVar49 >> (bVar25 & 0x3f)) << (bVar25 & 0x3f) < uVar54) {
        ppVar35 = (pas_segregated_page_config *)0x0;
      }
      else {
        if (uVar49 < uVar54) goto LAB_140d54de5;
        uVar16 = (param_5->medium_segregated_config).base.page_size;
        uVar17 = (param_5->medium_segregated_config).exclusive_payload_offset;
        auVar58._8_4_ = (int)(uVar16 >> 0x20);
        auVar58._0_8_ = uVar16;
        auVar58._12_4_ = __xmm_00000000000000004530000043300000._4_4_;
        iVar57 = (int)uVar16;
        uVar51 = (param_5->medium_segregated_config).exclusive_payload_size + uVar17;
        uVar49 = uVar51;
        if (uVar51 >> 0x20 == 0) {
          uVar49 = uVar51 & 0xffffffff;
        }
        iVar27 = (int)uVar51 - (int)(uVar49 % uVar54);
        uVar49 = (uVar54 + uVar17) - 1;
        if (uVar49 >> 0x20 == 0) {
          iVar38 = (int)((uVar49 & 0xffffffff) % uVar54);
        }
        else {
          iVar38 = (int)(uVar49 % uVar54);
        }
        iVar38 = (int)uVar49 - iVar38;
        uVar49 = ~uVar51 + uVar16 + uVar54;
        if (uVar49 >> 0x20 == 0) {
          iVar45 = (int)((uVar49 & 0xffffffff) % uVar54);
        }
        else {
          iVar45 = (int)(uVar49 % uVar54);
        }
        iVar45 = (iVar45 - (int)uVar49) + iVar57;
        uVar49 = uVar16 - uVar17;
        if (uVar49 >> 0x20 == 0) {
          iVar15 = (int)((uVar49 & 0xffffffff) % uVar54);
        }
        else {
          iVar15 = (int)(uVar49 % uVar54);
        }
        iVar15 = iVar57 + (iVar15 - (int)uVar49);
        if ((uint)(iVar27 - iVar38) < (uint)(iVar45 - iVar15)) {
          iVar38 = iVar15;
          iVar27 = iVar45;
        }
        dVar10 = pas_segregated_page_extra_wasteage_handicap_for_config_variant[pVar7] *
                 (param_5->medium_segregated_config).wasteage_handicap *
                 (((auVar58._8_8_ - _UNK_1531e94a8) +
                  ((double)CONCAT44((undefined4)__xmm_00000000000000004530000043300000,iVar57) -
                  ___xmm_45300000000000004330000000000000)) /
                 (double)((ulonglong)(uint)(iVar27 - iVar38) / (uVar39 & 0xffffffff)));
        if (dVar10 == __real_7ff0000000000000) {
          ppVar35 = (pas_segregated_page_config *)0x0;
          dVar10 = __real_7ff0000000000000;
        }
      }
      if (uVar28 != 0) goto LAB_140d53de9;
LAB_140d54246:
      dVar56 = dVar10;
      local_80 = ppVar35;
      if (ppVar35 == (pas_segregated_page_config *)0x0) goto LAB_140d54275;
    }
    else {
      if (pVar7 != pas_medium_segregated_page_config_variant) goto LAB_140d54e03;
      if (pas_medium_segregated_page_config_variant_is_enabled_override != false)
      goto LAB_140d53eab;
LAB_140d53dde:
      ppVar35 = (pas_segregated_page_config *)0x0;
      if (uVar28 == 0) goto LAB_140d54246;
LAB_140d53de9:
      if (((param_5->small_segregated_config).base.is_enabled & 1U) == 0) goto LAB_140d54246;
      pVar7 = (param_5->small_segregated_config).variant;
      if ((ulonglong)pVar7 != 0) {
        if (pVar7 != pas_medium_segregated_page_config_variant) {
LAB_140d54e03:
                    /* WARNING: Does not return */
          pcVar9 = (code *)invalidInstructionException();
          (*pcVar9)();
        }
        if ((pas_medium_segregated_page_config_variant_is_enabled_override & 1U) != 0)
        goto LAB_140d53e1b;
        goto LAB_140d54246;
      }
      if ((pas_small_segregated_page_config_variant_is_enabled_override & 1U) == 0)
      goto LAB_140d54246;
LAB_140d53e1b:
      bVar25 = (param_5->small_segregated_config).base.min_align_shift;
      iVar57 = (int)(1L << (bVar25 & 0x3f));
      uVar28 = -iVar57 & (int)puVar4 + iVar57;
      ppVar31 = (pas_segregated_heap *)(ulonglong)uVar28;
      ppVar43 = (pas_segregated_heap *)(param_5->small_segregated_config).base.max_object_size;
      if ((pas_segregated_heap *)(((ulonglong)ppVar43 >> (bVar25 & 0x3f)) << (bVar25 & 0x3f)) <
          ppVar31) goto LAB_140d54246;
      if (ppVar43 < ppVar31) {
LAB_140d54de5:
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      uVar16 = (param_5->small_segregated_config).base.page_size;
      uVar17 = (param_5->small_segregated_config).exclusive_payload_offset;
      auVar59._8_4_ = (int)(uVar16 >> 0x20);
      auVar59._0_8_ = uVar16;
      auVar59._12_4_ = __xmm_00000000000000004530000043300000._4_4_;
      iVar57 = (int)uVar16;
      uVar54 = (param_5->small_segregated_config).exclusive_payload_size + uVar17;
      uVar49 = uVar54;
      if (uVar54 >> 0x20 == 0) {
        uVar49 = uVar54 & 0xffffffff;
      }
      iVar27 = (int)uVar54 - (int)(uVar49 % (ulonglong)ppVar31);
      uVar49 = (longlong)ppVar31 + (uVar17 - 1);
      if (uVar49 >> 0x20 == 0) {
        iVar38 = (int)((uVar49 & 0xffffffff) % (ulonglong)ppVar31);
      }
      else {
        iVar38 = (int)(uVar49 % (ulonglong)ppVar31);
      }
      uVar41 = (int)uVar49 - iVar38;
      uVar49 = (longlong)&ppVar31->runtime_config + ~uVar54 + uVar16;
      if (uVar49 >> 0x20 == 0) {
        iVar38 = (int)((uVar49 & 0xffffffff) % (ulonglong)ppVar31);
      }
      else {
        iVar38 = (int)(uVar49 % (ulonglong)ppVar31);
      }
      iVar38 = (iVar38 - (int)uVar49) + iVar57;
      uVar49 = uVar16 - uVar17;
      if (uVar49 >> 0x20 == 0) {
        iVar45 = (int)((uVar49 & 0xffffffff) % (ulonglong)ppVar31);
      }
      else {
        iVar45 = (int)(uVar49 % (ulonglong)ppVar31);
      }
      uVar40 = iVar57 + (iVar45 - (int)uVar49);
      ppVar31 = (pas_segregated_heap *)(ulonglong)uVar40;
      if (iVar27 - uVar41 < iVar38 - uVar40) {
        uVar41 = uVar40;
        iVar27 = iVar38;
      }
      dVar56 = pas_segregated_page_extra_wasteage_handicap_for_config_variant[pVar7] *
               (param_5->small_segregated_config).wasteage_handicap *
               (((auVar59._8_8_ - _UNK_1531e94a8) +
                ((double)CONCAT44((undefined4)__xmm_00000000000000004530000043300000,iVar57) -
                ___xmm_45300000000000004330000000000000)) /
               (double)((ulonglong)(iVar27 - uVar41) / (ulonglong)uVar28));
      if (dVar10 <= dVar56) goto LAB_140d54246;
    }
    if (dVar56 < 0.0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
    if (dVar56 == __real_7ff0000000000000) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
    ppVar35 = (pas_segregated_page_config *)0x0;
  }
  if ((ppVar52 == (pas_segregated_size_directory *)0x0) ||
     ((ulonglong)(1L << ppVar52->alignment_shift) < uVar18)) {
LAB_140d54494:
    if ((char)ppVar35 == '\0') {
      ppVar31 = (pas_segregated_heap *)(1L << ((local_80->base).min_align_shift & 0x3f));
      if (ppVar31 < ppVar50) {
        ppVar31 = ppVar50;
      }
      uVar16 = compute_ideal_object_size(ppVar31,uVar18,(ulong64)local_80,ppVar35);
      uVar49 = 1L << ((local_80->base).min_align_shift & 0x3f);
      if (uVar18 <= uVar49) {
        uVar18 = uVar49;
      }
    }
    else {
      if (param_5 == &pas_utility_heap_config) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      uVar16 = (longlong)(dVar56 - __real_43e0000000000000) & (longlong)dVar56 >> 0x3f |
               (longlong)dVar56;
    }
    if (uVar16 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
    if (uVar18 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
    if (param_1->runtime_config->directory_size_bound_for_partial_views == 0) {
      uVar18 = -uVar16 & uVar16;
      if (uVar18 == 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      if ((uVar18 + 0xffffffff & uVar16) != 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      if ((uVar18 * 2 + 0xffffffff & uVar16) == 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
    }
    ppVar52 = pas_segregated_size_directory_create
                        (param_1,(uint)uVar16,(uint)uVar18,param_5,local_80,param_7);
    uVar28 = (param_1->basic_size_directory_and_head).payload;
    ppVar44 = (pas_segregated_size_directory *)
              (pas_compact_heap_reservation_base + (ulonglong)uVar28 * 8);
    ppVar29 = local_68;
    if (ppVar44 != (pas_segregated_size_directory *)0x0 && (ulonglong)uVar28 != 0) {
      ppVar29 = &ppVar44->next_for_heap;
      if ((ppVar44->base).is_basic_size_directory == false) {
        ppVar29 = local_68;
      }
      uVar28 = ppVar29->payload;
      ppVar44 = (pas_segregated_size_directory *)
                (pas_compact_heap_reservation_base + (ulonglong)uVar28 * 8);
    }
    ppVar34 = (pas_segregated_size_directory *)0x0;
    if (uVar28 != 0) {
      ppVar34 = ppVar44;
    }
    pas_compact_atomic_segregated_size_directory_ptr_store(&ppVar52->next_for_heap,ppVar34);
    pas_compact_atomic_segregated_size_directory_ptr_store(ppVar29,ppVar52);
  }
  else {
    iVar57._0_1_ = (ppVar52->base).page_config_kind;
    iVar57._1_1_ = (ppVar52->base).sharing_mode;
    iVar57._2_1_ = (ppVar52->base).directory_kind;
    iVar57._3_1_ = (ppVar52->base).field_0xf;
    if (iVar57 << 0x18 == 0) {
      dVar10 = (double)ppVar52->object_size;
    }
    else {
      ppVar8 = pas_segregated_page_config_kind_for_config_table[(iVar57 << 0x18) >> 0x18];
      if (1 < (ulonglong)*(uint *)(ppVar8 + 1)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      uVar28 = ppVar52->object_size;
      uVar49 = (ulonglong)uVar28;
      if ((~(uint)(-1L << (ppVar8->min_align_shift & 0x3f)) & uVar28) != 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      if (ppVar8->max_object_size < uVar49) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      uVar16 = ppVar8->page_size;
      uVar17 = ppVar8[1].granule_size;
      auVar60._8_4_ = (int)(uVar16 >> 0x20);
      auVar60._0_8_ = uVar16;
      auVar60._12_4_ = __xmm_00000000000000004530000043300000._4_4_;
      iVar57 = (int)uVar16;
      uVar54 = ppVar8[1].max_object_size + uVar17;
      if (uVar54 >> 0x20 == 0) {
        iVar27 = (int)((uVar54 & 0xffffffff) % (ulonglong)uVar28);
      }
      else {
        iVar27 = (int)(uVar54 % uVar49);
      }
      iVar27 = (int)uVar54 - iVar27;
      uVar39 = (uVar49 + uVar17) - 1;
      if (uVar39 >> 0x20 == 0) {
        iVar38 = (int)((uVar39 & 0xffffffff) % (ulonglong)uVar28);
      }
      else {
        iVar38 = (int)(uVar39 % uVar49);
      }
      iVar38 = (int)uVar39 - iVar38;
      uVar54 = ((uVar49 - 1) + uVar16) - uVar54;
      if (uVar54 >> 0x20 == 0) {
        iVar45 = (int)((uVar54 & 0xffffffff) % (ulonglong)uVar28);
      }
      else {
        iVar45 = (int)(uVar54 % uVar49);
      }
      iVar45 = (iVar45 - (int)uVar54) + iVar57;
      uVar54 = uVar16 - uVar17;
      if (uVar54 >> 0x20 == 0) {
        iVar15 = (int)((uVar54 & 0xffffffff) % (ulonglong)uVar28);
      }
      else {
        iVar15 = (int)(uVar54 % uVar49);
      }
      iVar15 = iVar57 + (iVar15 - (int)uVar54);
      if ((uint)(iVar27 - iVar38) < (uint)(iVar45 - iVar15)) {
        iVar38 = iVar15;
        iVar27 = iVar45;
      }
      dVar10 = pas_segregated_page_extra_wasteage_handicap_for_config_variant[*(uint *)(ppVar8 + 1)]
               * (double)ppVar8[1].heap_config_ptr *
                 (((auVar60._8_8_ - _UNK_1531e94a8) +
                  ((double)CONCAT44((undefined4)__xmm_00000000000000004530000043300000,iVar57) -
                  ___xmm_45300000000000004330000000000000)) /
                 (double)((ulonglong)(uint)(iVar27 - iVar38) / (ulonglong)uVar28));
      ppVar35 = (pas_segregated_page_config *)((ulonglong)ppVar35 & 0xffffffff);
    }
    if (__real_3ff4cccccccccccd * dVar56 <= dVar10) goto LAB_140d54494;
    uVar16 = ppVar52->object_size;
  }
  if (param_6 == (uint *)0x0) {
    ppVar30 = (pas_heap *)0x0;
    if (param_1->runtime_config->is_part_of_heap) {
      ppVar30 = (pas_heap *)param_1;
    }
    uVar17 = pas_heap_get_type_size(ppVar30);
    bVar55 = (param_5->small_bitfit_config).base.is_enabled;
    bVar25 = (param_5->small_bitfit_config).base.min_align_shift;
    if (((param_5->small_segregated_config).base.is_enabled & 1U) == 0) {
      if ((bVar55 & 1U) == 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
    }
    else {
      uVar49 = 0xffffffffffffffff;
      if ((bVar55 & 1U) != 0) {
        uVar49 = (ulonglong)bVar25;
      }
      uVar18 = (ulonglong)(param_5->small_segregated_config).base.min_align_shift;
      if (uVar18 <= uVar49) {
        uVar49 = uVar18;
      }
      bVar25 = (byte)uVar49;
    }
    if ((uVar17 + (1L << (bVar25 & 0x3f))) - 1 >> (bVar25 & 0x3f) == uVar53) goto LAB_140d5460e;
LAB_140d547c9:
    uVar28 = param_1->small_index_upper_bound;
  }
  else {
    if (((ulonglong)*param_6 != 0xffffffff) && (*param_6 != uVar53)) goto LAB_140d547c9;
LAB_140d5460e:
    uVar49 = (ulonglong)local_68->payload;
    lVar46 = uVar49 * 8 + pas_compact_heap_reservation_base;
    if ((lVar46 != 0 && uVar49 != 0) && (*(char *)(lVar46 + 0x10) == '\x01')) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
    if (param_6 != (uint *)0x0) {
      if (((ulonglong)*param_6 != 0xffffffff) && (uVar53 != *param_6)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      *param_6 = uVar37;
      uVar49 = (ulonglong)local_68->payload;
    }
    uVar13 = pas_compact_heap_reservation_base;
    uVar17 = pas_compact_heap_reservation_size;
    if ((int)uVar49 == 0) {
LAB_140d54dfb:
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
    ppVar44 = (pas_segregated_size_directory *)(pas_compact_heap_reservation_base + uVar49 * 8);
    ppVar29 = local_68;
    if (ppVar52 != ppVar44) {
      do {
        ppVar34 = ppVar44;
        if ((ppVar34->base).is_basic_size_directory == true) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)invalidInstructionException();
          (*pcVar9)();
        }
        uVar49 = (ulonglong)(ppVar34->next_for_heap).payload;
        if (uVar49 == 0) goto LAB_140d54dfb;
        ppVar44 = (pas_segregated_size_directory *)(pas_compact_heap_reservation_base + uVar49 * 8);
      } while (ppVar52 != ppVar44);
      ppVar29 = &ppVar34->next_for_heap;
    }
    uVar28 = (ppVar52->next_for_heap).payload;
    uVar41 = 0;
    if ((pas_compact_heap_reservation_base + (ulonglong)uVar28 * 8 != 0 && uVar28 != 0) &&
       (uVar41 = uVar28, pas_compact_heap_reservation_size <= (ulonglong)uVar28 * 8)) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
    ppVar29->payload = uVar41;
    (ppVar52->next_for_heap).payload = 0;
    uVar28 = local_68->payload;
    uVar41 = 0;
    if ((uVar13 + (ulonglong)uVar28 * 8 != 0 && uVar28 != 0) &&
       (uVar41 = uVar28, uVar17 <= (ulonglong)uVar28 * 8)) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
    (ppVar52->next_for_heap).payload = uVar41;
    uVar49 = (longlong)ppVar52 - uVar13;
    if (uVar17 <= uVar49) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
    if ((uVar49 & 7) != 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
    if (uVar49 < 8) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
    local_68->payload = (uint)(uVar49 >> 3);
    (ppVar52->base).is_basic_size_directory = true;
    uVar28 = param_1->small_index_upper_bound;
  }
  uVar49 = (ulonglong)uVar28;
  uVar18 = uVar49;
  if (uVar53 < uVar49) {
    ppVar29 = param_1->index_to_small_size_directory;
    if (ppVar29[uVar53].payload != 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
    uVar54 = uVar53;
    if ((param_5 != &pas_utility_heap_config) &&
       (param_1->index_to_small_allocator_index[uVar53] != 0)) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
    do {
      bVar55 = (param_5->small_bitfit_config).base.is_enabled;
      bVar25 = (param_5->small_bitfit_config).base.min_align_shift;
      uVar39 = (ulonglong)bVar25;
      if (((param_5->small_segregated_config).base.is_enabled & 1U) == 0) {
        if ((bVar55 & 1U) == 0) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)invalidInstructionException();
          (*pcVar9)();
        }
      }
      else {
        if ((bVar55 & 1U) == 0) {
          uVar39 = 0xffffffffffffffff;
        }
        uVar51 = (ulonglong)(param_5->small_segregated_config).base.min_align_shift;
        if (uVar51 <= uVar39) {
          uVar39 = uVar51;
        }
        bVar25 = (byte)uVar39;
      }
      if (ppVar52->object_size < uVar54 << (bVar25 & 0x3f)) break;
      uVar39 = (ulonglong)ppVar29[uVar54].payload;
      ppVar44 = (pas_segregated_size_directory *)(pas_compact_heap_reservation_base + uVar39 * 8);
      if (ppVar44 != (pas_segregated_size_directory *)0x0 && uVar39 != 0) {
        if ((ppVar52 != ppVar44) && (ppVar44->object_size <= uVar16)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)invalidInstructionException();
          (*pcVar9)();
        }
        break;
      }
      uVar18 = (longlong)ppVar52 - pas_compact_heap_reservation_base;
      if (pas_compact_heap_reservation_size <= uVar18) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      if ((uVar18 & 7) != 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      if (uVar18 < 8) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      param_1->index_to_small_size_directory[uVar54].payload = (uint)(uVar18 >> 3);
      uVar54 = uVar54 + 1;
      uVar18 = (ulonglong)param_1->small_index_upper_bound;
    } while (uVar54 < uVar18);
  }
  if (uVar16 != ppVar52->object_size) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)invalidInstructionException();
    (*pcVar9)();
  }
  bVar55 = (param_5->small_segregated_config).base.is_enabled;
  bVar5 = (param_5->small_bitfit_config).base.is_enabled;
  uVar39 = (ulonglong)(param_5->small_segregated_config).base.min_align_shift;
  bVar25 = (param_5->small_bitfit_config).base.min_align_shift;
  uVar54 = 0xffffffffffffffff;
  if ((bVar5 & 1U) != 0) {
    uVar54 = (ulonglong)bVar25;
  }
  if ((bVar55 & 1U) == 0) {
    bVar26 = bVar25;
    if ((bVar5 & 1U) == 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
  }
  else {
    uVar51 = uVar39;
    if (uVar54 < uVar39) {
      uVar51 = uVar54;
    }
    bVar26 = (byte)uVar51;
  }
  uVar51 = ((1L << (bVar26 & 0x3f)) + uVar16) - 1 >> (bVar26 & 0x3f);
  if (uVar51 < uVar53) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)invalidInstructionException();
    (*pcVar9)();
  }
  if ((int)uVar18 == 0) {
    if ((bVar55 & 1U) == 0) {
      if ((bVar5 & 1U) == 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
    }
    else {
      if (uVar54 < uVar39) {
        uVar39 = uVar54;
      }
      bVar25 = (byte)uVar39;
    }
    if (uVar51 < ((param_5->small_lookup_size_upper_bound + (1L << (bVar25 & 0x3f))) - 1 >>
                 (bVar25 & 0x3f)) + 1) goto LAB_140d54969;
LAB_140d549c8:
    if (uVar51 < uVar18) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
    uVar49 = (ulonglong)ppVar1->payload;
    ppVar21 = (pas_segregated_heap_rare_data *)(pas_compact_heap_reservation_base + uVar49 * 8);
    if (ppVar21 == (pas_segregated_heap_rare_data *)0x0 || uVar49 == 0) {
      ppVar21 = pas_immortal_heap_allocate
                          (0x18,"pas_segregated_heap_rare_data",pas_object_allocation);
      (ppVar21->mutation_count).count = 0;
      ppVar21->medium_directories = 0;
      ppVar21->num_medium_directories = 0;
      *(undefined8 *)&ppVar21->medium_directories_capacity = 0;
      LOCK();
      UNLOCK();
      pas_segregated_heap_rare_data_ptr_store(ppVar1,ppVar21);
      uVar49 = (ulonglong)ppVar1->payload;
    }
    if (((int)uVar49 == 0) || (uVar49 << 3 == -pas_compact_heap_reservation_base)) {
LAB_140d54ac8:
      uVar18 = (ulonglong)(ppVar21->medium_directories).payload;
      _Src = (pas_segregated_heap_medium_directory_tuple *)
             (uVar18 * 8 + pas_compact_heap_reservation_base);
      uVar49 = (ulonglong)ppVar21->num_medium_directories;
      if (uVar18 == 0) {
        _Src = (pas_segregated_heap_medium_directory_tuple *)0x0;
      }
      uVar18 = (ppVar21->mutation_count).count;
    }
    else {
      lVar46 = pas_compact_heap_reservation_base + (ulonglong)ppVar1->payload * 8;
      if ((ulonglong)ppVar1->payload == 0) {
        lVar46 = 0;
      }
      lVar33 = pas_compact_heap_reservation_base + (ulonglong)*(uint *)(lVar46 + 8) * 8;
      if ((ulonglong)*(uint *)(lVar46 + 8) == 0) {
        lVar33 = 0;
      }
      if (*(uint *)(lVar46 + 0xc) == 0) goto LAB_140d54ac8;
      uVar41 = 0;
      puVar32 = (uint *)0x0;
      uVar28 = *(uint *)(lVar46 + 0xc);
      do {
        while( true ) {
          uVar40 = uVar28 + uVar41 >> 1;
          uVar49 = (ulonglong)*(uint *)(lVar33 + 8 + (ulonglong)uVar40 * 0x10);
          if (uVar49 == 0) goto LAB_140d54ac8;
          puVar48 = (uint *)((ulonglong)uVar40 * 0x10 + lVar33);
          if (uVar53 < uVar49) break;
          if (uVar53 <= puVar48[3]) goto LAB_140d54ccf;
          uVar41 = uVar40 + 1;
          puVar48 = puVar32;
          if (uVar28 <= uVar41) goto LAB_140d54abd;
        }
        puVar32 = puVar48;
        uVar28 = uVar40;
      } while (uVar41 < uVar40);
LAB_140d54abd:
      if (puVar48 == (uint *)0x0) goto LAB_140d54ac8;
LAB_140d54ccf:
      ppVar44 = (pas_segregated_size_directory *)
                (pas_compact_heap_reservation_base + (ulonglong)*puVar48 * 8);
      if ((ulonglong)*puVar48 == 0) {
        ppVar44 = (pas_segregated_size_directory *)0x0;
      }
      if (ppVar44 == ppVar52) {
        uVar49 = (ulonglong)puVar48[2];
        if (uVar53 < puVar48[2]) {
          uVar49 = uVar53;
        }
        if (uVar49 == 0) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)invalidInstructionException();
          (*pcVar9)();
        }
        puVar48[2] = (uint)uVar49;
        goto LAB_140d54c2d;
      }
      uVar49 = (ulonglong)(ppVar21->medium_directories).payload;
      _Src = (pas_segregated_heap_medium_directory_tuple *)
             (pas_compact_heap_reservation_base + uVar49 * 8);
      if (uVar49 == 0) {
        _Src = (pas_segregated_heap_medium_directory_tuple *)0x0;
      }
      if (puVar48[3] <= uVar53) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      if (puVar48[3] <= uVar51) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      if (ppVar44->object_size <= uVar16) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      uVar49 = (longlong)puVar48 - (longlong)_Src >> 4;
      if ((longlong)(ulonglong)ppVar21->num_medium_directories <= (longlong)uVar49) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      uVar18 = (ppVar21->mutation_count).count;
    }
    if ((uVar18 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
    (ppVar21->mutation_count).count = uVar18 | 1;
    LOCK();
    UNLOCK();
    uVar28 = ppVar21->num_medium_directories;
    uVar41 = ppVar21->medium_directories_capacity;
    if (uVar41 <= uVar28) {
      uVar28 = uVar41 * 2 + 2;
      ppVar22 = pas_compact_expendable_memory_allocate
                          ((ulonglong)uVar28 << 4,4,
                           "pas_segregated_heap_rare_data/medium_directories");
      if (_Src != (pas_segregated_heap_medium_directory_tuple *)0x0) {
        memcpy(ppVar22,_Src,(ulonglong)ppVar21->num_medium_directories << 4);
      }
      LOCK();
      UNLOCK();
      pas_segregated_heap_medium_directory_tuple_ptr_store(&ppVar21->medium_directories,ppVar22);
      LOCK();
      UNLOCK();
      ppVar21->medium_directories_capacity = uVar28;
      check_medium_directories((pas_segregated_heap *)(ulonglong)ppVar1->payload);
      uVar28 = ppVar21->num_medium_directories;
      uVar41 = ppVar21->medium_directories_capacity;
      _Src = ppVar22;
    }
    if (uVar41 <= uVar28) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
    ppVar22 = _Src + uVar49;
    memmove(_Src + uVar49 + 1,ppVar22,(uVar28 - uVar49) * 0x10);
    if (uVar53 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
    if (uVar51 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
    pas_compact_atomic_segregated_size_directory_ptr_store(&ppVar22->directory,ppVar52);
    ppVar22->allocator_index = 0;
    if (uVar53 == 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
    ppVar22->begin_index = uVar37;
    ppVar22->end_index = (uint)uVar51;
    LOCK();
    UNLOCK();
    ppVar21->num_medium_directories = ppVar21->num_medium_directories + 1;
    check_medium_directories((pas_segregated_heap *)(ulonglong)ppVar1->payload);
    LOCK();
    UNLOCK();
    uVar49 = (ppVar21->mutation_count).count;
    if ((uVar49 & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
    (ppVar21->mutation_count).count = uVar49 + 1;
  }
  else {
    if (uVar18 <= uVar51) goto LAB_140d549c8;
LAB_140d54969:
    if (uVar49 <= uVar53) goto LAB_140d54c83;
  }
LAB_140d54c2d:
  uVar28 = ppVar52->encoded_stuff >> 7;
  if (uVar28 == 0x1ffffff) {
    uVar28 = 0xffffffff;
  }
  if (uVar53 < uVar28) {
    uVar28 = uVar37 & 0x1ffffff;
    if (uVar28 == 0x1ffffff) {
      uVar28 = 0xffffffff;
    }
    if (uVar28 != uVar37) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
    do {
      uVar28 = ppVar52->encoded_stuff;
      LOCK();
      bVar55 = uVar28 == ppVar52->encoded_stuff;
      if (bVar55) {
        ppVar52->encoded_stuff = uVar28 & 0x7f | uVar37 << 7;
      }
      UNLOCK();
    } while (!bVar55);
  }
LAB_140d54c83:
  if (((param_1->small_index_upper_bound <= uVar53) ||
      (param_1->index_to_small_size_directory ==
       (pas_compact_atomic_segregated_size_directory_ptr *)0x0)) ||
     (uVar49 = (ulonglong)param_1->index_to_small_size_directory[uVar53].payload,
     ppVar44 = (pas_segregated_size_directory *)(uVar49 * 8 + pas_compact_heap_reservation_base),
     ppVar44 == (pas_segregated_size_directory *)0x0 || uVar49 == 0)) {
    ppVar44 = pas_segregated_heap_size_directory_for_index_slow(param_1,uVar53,param_6,param_5);
  }
  if (ppVar44 == ppVar52) {
    return ppVar52;
  }
                    /* WARNING: Does not return */
  pcVar9 = (code *)invalidInstructionException();
  (*pcVar9)();
}

// min_align_for_heap @ 140d54e10

/* WARNING: Type propagation algorithm not settling */

ulong64 __cdecl min_align_for_heap(pas_segregated_heap *param_1,pas_heap_config *param_2)

{
  pas_bitfit_page_config *ppVar1;
  bool bVar2;
  pas_segregated_page_config_variant pVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  pas_segregated_page_config *ppVar7;
  byte bVar8;
  pas_bitfit_page_config_variant pVar9;
  pas_bitfit_page_config *ppVar10;
  
  ppVar7 = &param_2->small_segregated_config;
  bVar2 = (param_2->small_segregated_config).base.is_enabled;
  if (pas_medium_segregated_page_config_variant_is_enabled_override) {
    if (pas_small_segregated_page_config_variant_is_enabled_override) {
      if ((((bVar2 & 1U) == 0) ||
          (lVar6 = 0x38, param_1->runtime_config->max_segregated_object_size == 0)) &&
         ((((param_2->medium_segregated_config).base.is_enabled & 1U) == 0 ||
          (lVar6 = 0x120, param_1->runtime_config->max_segregated_object_size == 0))))
      goto LAB_140d54f7e;
      if (1 < *(uint *)((longlong)
                        &(param_2->small_segregated_config).base.non_committable_granule_bitvector +
                       lVar6)) goto LAB_140d55149;
      ppVar7 = (pas_segregated_page_config *)((longlong)&param_2->config_ptr + lVar6);
    }
    else {
      if (((bVar2 & 1U) != 0) && (param_1->runtime_config->max_segregated_object_size != 0)) {
        pVar3 = (param_2->small_segregated_config).variant;
        if (pVar3 == pas_medium_segregated_page_config_variant) goto LAB_140d54f3a;
        if (pVar3 != pas_small_segregated_page_config_variant) goto LAB_140d55149;
      }
      if (((((param_2->medium_segregated_config).base.is_enabled & 1U) == 0) ||
          (param_1->runtime_config->max_segregated_object_size == 0)) ||
         (pVar3 = (param_2->medium_segregated_config).variant,
         pVar3 == pas_small_segregated_page_config_variant)) goto LAB_140d54f7e;
      if (pVar3 != pas_medium_segregated_page_config_variant) {
LAB_140d55149:
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
LAB_140d54f30:
      ppVar7 = &param_2->medium_segregated_config;
    }
LAB_140d54f3a:
    bVar8 = (ppVar7->base).min_align_shift;
    goto LAB_140d5513d;
  }
  if (pas_small_segregated_page_config_variant_is_enabled_override) {
    if (((bVar2 & 1U) != 0) && (param_1->runtime_config->max_segregated_object_size != 0)) {
      pVar3 = (param_2->small_segregated_config).variant;
      if (pVar3 == pas_small_segregated_page_config_variant) goto LAB_140d54f3a;
      if (pVar3 != pas_medium_segregated_page_config_variant) goto LAB_140d55149;
    }
    if ((((param_2->medium_segregated_config).base.is_enabled & 1U) != 0) &&
       (param_1->runtime_config->max_segregated_object_size != 0)) {
      pVar3 = (param_2->medium_segregated_config).variant;
      if (pVar3 == pas_small_segregated_page_config_variant) goto LAB_140d54f30;
      if (pVar3 != pas_medium_segregated_page_config_variant) goto LAB_140d55149;
    }
  }
  else if (((((bVar2 & 1U) != 0) && (param_1->runtime_config->max_segregated_object_size != 0)) &&
           (pas_medium_segregated_page_config_variant < (param_2->small_segregated_config).variant))
          || (((((param_2->medium_segregated_config).base.is_enabled & 1U) != 0 &&
               (param_1->runtime_config->max_segregated_object_size != 0)) &&
              (pas_medium_segregated_page_config_variant <
               (param_2->medium_segregated_config).variant)))) goto LAB_140d55149;
LAB_140d54f7e:
  ppVar7 = (pas_segregated_page_config *)&param_2->marge_bitfit_config;
  ppVar1 = &param_2->medium_bitfit_config;
  ppVar10 = &param_2->small_bitfit_config;
  bVar2 = (param_2->small_bitfit_config).base.is_enabled;
  pVar9 = (param_2->small_bitfit_config).variant;
  bVar5 = pas_small_bitfit_page_config_variant_is_enabled_override;
  if (pas_marge_bitfit_page_config_variant_is_enabled_override) {
    if (((bVar2 & 1U) != 0) && (param_1->runtime_config->max_bitfit_object_size != 0)) {
      bVar2 = pas_small_bitfit_page_config_variant_is_enabled_override;
      if (pVar9 != pas_small_bitfit_page_config_variant) {
        if (pVar9 == pas_marge_bitfit_page_config_variant) goto LAB_140d55138;
        bVar2 = pas_medium_bitfit_page_config_variant_is_enabled_override;
        if (pVar9 != pas_medium_bitfit_page_config_variant) goto LAB_140d5514b;
      }
      if (bVar2) goto LAB_140d55138;
    }
    if ((((param_2->medium_bitfit_config).base.is_enabled & 1U) != 0) &&
       (param_1->runtime_config->max_bitfit_object_size != 0)) {
      pVar9 = (param_2->medium_bitfit_config).variant;
      bVar2 = pas_small_bitfit_page_config_variant_is_enabled_override;
      if (pVar9 != pas_small_bitfit_page_config_variant) {
        if (pVar9 == pas_marge_bitfit_page_config_variant) {
          bVar8 = (param_2->medium_bitfit_config).base.min_align_shift;
          goto LAB_140d5513d;
        }
        bVar2 = pas_medium_bitfit_page_config_variant_is_enabled_override;
        if (pVar9 != pas_medium_bitfit_page_config_variant) goto LAB_140d5514b;
      }
      ppVar10 = ppVar1;
      if (bVar2) goto LAB_140d55138;
    }
    if ((((param_2->marge_bitfit_config).base.is_enabled & 1U) == 0) ||
       (param_1->runtime_config->max_bitfit_object_size == 0)) goto LAB_140d55129;
    pVar9 = (param_2->marge_bitfit_config).variant;
    if (pVar9 != pas_small_bitfit_page_config_variant) {
      if (pVar9 == pas_marge_bitfit_page_config_variant) goto LAB_140d54f3a;
LAB_140d5511b:
      bVar5 = pas_medium_bitfit_page_config_variant_is_enabled_override;
      if (pVar9 != pas_medium_bitfit_page_config_variant) {
LAB_140d5514b:
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
    }
joined_r0x000140d55127:
    ppVar10 = (pas_bitfit_page_config *)ppVar7;
    if (!bVar5) {
LAB_140d55129:
      return param_2->large_alignment;
    }
  }
  else {
    if (((bVar2 & 1U) == 0) || (param_1->runtime_config->max_bitfit_object_size == 0)) {
LAB_140d55080:
      if ((((param_2->medium_bitfit_config).base.is_enabled & 1U) != 0) &&
         (param_1->runtime_config->max_bitfit_object_size != 0)) {
        pVar9 = (param_2->medium_bitfit_config).variant;
        if (pVar9 == pas_small_bitfit_page_config_variant) {
          ppVar10 = ppVar1;
          if (pas_small_bitfit_page_config_variant_is_enabled_override) goto LAB_140d55138;
        }
        else if (pVar9 != pas_marge_bitfit_page_config_variant) {
          if (pVar9 != pas_medium_bitfit_page_config_variant) goto LAB_140d5514b;
          ppVar10 = ppVar1;
          if (pas_medium_bitfit_page_config_variant_is_enabled_override) goto LAB_140d55138;
        }
      }
      if ((((param_2->marge_bitfit_config).base.is_enabled & 1U) == 0) ||
         (param_1->runtime_config->max_bitfit_object_size == 0)) goto LAB_140d55129;
      pVar9 = (param_2->marge_bitfit_config).variant;
      if (pVar9 != pas_small_bitfit_page_config_variant) {
        if (pVar9 == pas_marge_bitfit_page_config_variant) goto LAB_140d55129;
        goto LAB_140d5511b;
      }
      goto joined_r0x000140d55127;
    }
    if (pVar9 != pas_small_bitfit_page_config_variant) {
      if (pVar9 != pas_marge_bitfit_page_config_variant) {
        if (pVar9 != pas_medium_bitfit_page_config_variant) goto LAB_140d5514b;
        if (pas_medium_bitfit_page_config_variant_is_enabled_override) goto LAB_140d55138;
      }
      goto LAB_140d55080;
    }
    if (!pas_small_bitfit_page_config_variant_is_enabled_override) goto LAB_140d55080;
  }
LAB_140d55138:
  bVar8 = (ppVar10->base).min_align_shift;
LAB_140d5513d:
  return 1L << (bVar8 & 0x3f);
}

// check_medium_directories @ 140d55160

void __cdecl check_medium_directories(pas_segregated_heap *param_1)

{
  uint *puVar1;
  uint uVar2;
  code *pcVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint *puVar7;
  longlong lVar8;
  
  lVar8 = pas_compact_heap_reservation_base + ((ulonglong)param_1 & 0xffffffff) * 8;
  if (lVar8 != 0 && (int)param_1 != 0) {
    uVar4 = (ulonglong)*(uint *)(lVar8 + 0xc);
    lVar6 = pas_compact_heap_reservation_base + (ulonglong)*(uint *)(lVar8 + 8) * 8;
    if ((ulonglong)*(uint *)(lVar8 + 8) == 0) {
      lVar6 = 0;
    }
    lVar8 = uVar4 << 4;
    while (lVar8 + -0x10 != -0x10) {
      puVar7 = (uint *)(lVar6 + -8 + lVar8);
      puVar1 = (uint *)(lVar6 + -4 + lVar8);
      lVar8 = lVar8 + -0x10;
      if (*puVar1 < *puVar7) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
    }
    uVar5 = uVar4 + 1;
    puVar7 = (uint *)(lVar6 + uVar4 * 0x10 + -8);
    while (uVar5 = uVar5 - 1, 1 < uVar5) {
      puVar1 = puVar7 + -3;
      uVar2 = *puVar7;
      puVar7 = puVar7 + -4;
      if (uVar2 <= *puVar1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
    }
  }
  return;
}

// compute_ideal_object_size @ 140d551f0

ulong64 __cdecl
compute_ideal_object_size
          (pas_segregated_heap *param_1,ulong64 param_2,ulong64 param_3,
          pas_segregated_page_config *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  code *pcVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  int iVar20;
  ulonglong uVar21;
  ulong64 uVar22;
  ulonglong uVar23;
  int iVar24;
  ulonglong uVar25;
  uint local_50;
  
  bVar3 = *(byte *)(param_3 + 0x1c);
  uVar25 = 1L << (bVar3 & 0x3f);
  if ((param_2 ^ param_2 - 1) <= param_2 - 1) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)invalidInstructionException();
    (*pcVar8)();
  }
  uVar4 = *(ulonglong *)(param_3 + 0x38);
  uVar21 = -uVar25 & (longlong)param_1 + (uVar25 - 1);
  uVar13 = uVar21 & 0xffffffff;
  if (uVar4 < uVar13) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)invalidInstructionException();
    (*pcVar8)();
  }
  lVar5 = *(longlong *)(param_3 + 0x20);
  lVar6 = *(longlong *)(param_3 + 0x90);
  if (param_2 <= uVar25) {
    param_2 = uVar25;
  }
  uVar18 = *(longlong *)(param_3 + 0xa0) + lVar6;
  if (uVar18 >> 0x20 == 0) {
    iVar20 = (int)((uVar18 & 0xffffffff) % uVar13);
  }
  else {
    iVar20 = (int)(uVar18 % uVar13);
  }
  iVar20 = (int)uVar18 - iVar20;
  uVar16 = (lVar6 + uVar13) - 1;
  if (uVar16 >> 0x20 == 0) {
    iVar15 = (int)((uVar16 & 0xffffffff) % uVar13);
  }
  else {
    iVar15 = (int)(uVar16 % uVar13);
  }
  iVar15 = (int)uVar16 - iVar15;
  uVar16 = (uVar13 + (lVar5 - uVar18)) - 1;
  if (uVar16 >> 0x20 == 0) {
    iVar17 = (int)((uVar16 & 0xffffffff) % uVar13);
  }
  else {
    iVar17 = (int)(uVar16 % uVar13);
  }
  iVar9 = (int)lVar5;
  iVar17 = (iVar17 - (int)uVar16) + iVar9;
  uVar19 = lVar5 - lVar6;
  uVar16 = uVar19 >> 0x20;
  if (uVar16 == 0) {
    iVar10 = (int)((uVar19 & 0xffffffff) % uVar13);
  }
  else {
    iVar10 = (int)(uVar19 % uVar13);
  }
  iVar10 = iVar9 + (iVar10 - (int)uVar19);
  if ((uint)(iVar20 - iVar15) < (uint)(iVar17 - iVar10)) {
    iVar15 = iVar10;
    iVar20 = iVar17;
  }
  uVar7 = uVar21 & 0xffffffff;
  uVar13 = param_2 - 1;
  if ((param_2 ^ uVar13) <= uVar13) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)invalidInstructionException();
    (*pcVar8)();
  }
  local_50 = (int)uVar25 - 1;
  uVar23 = uVar21;
  do {
    uVar22 = uVar23;
    uVar21 = uVar25 + uVar21;
    uVar23 = uVar22 + uVar25;
    if ((uVar13 & uVar23) != 0) {
      return uVar22;
    }
    if ((uVar4 >> (bVar3 & 0x3f)) << (bVar3 & 0x3f) < uVar23) {
      return uVar22;
    }
    if ((local_50 & (uint)uVar23) != 0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    uVar14 = uVar23 & 0xffffffff;
    if (uVar4 < uVar14) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    if (uVar18 >> 0x20 == 0) {
      iVar17 = (int)((uVar18 & 0xffffffff) % uVar14);
    }
    else {
      iVar17 = (int)(uVar18 % uVar14);
    }
    uVar1 = lVar6 + -1 + uVar14;
    if (uVar1 >> 0x20 == 0) {
      iVar10 = (int)((uVar1 & 0xffffffff) % uVar14);
    }
    else {
      iVar10 = (int)(uVar1 % uVar14);
    }
    uVar2 = (lVar5 - uVar18) + -1 + uVar14;
    if (uVar2 >> 0x20 == 0) {
      iVar11 = (int)((uVar2 & 0xffffffff) % uVar14);
      if (uVar16 != 0) goto LAB_140d55390;
LAB_140d554b5:
      iVar12 = (int)((uVar19 & 0xffffffff) % uVar14);
    }
    else {
      iVar11 = (int)(uVar2 % uVar14);
      if (uVar16 == 0) goto LAB_140d554b5;
LAB_140d55390:
      iVar12 = (int)(uVar19 % uVar14);
    }
    iVar17 = (int)uVar18 - iVar17;
    iVar10 = (int)uVar1 - iVar10;
    iVar24 = (iVar11 - (int)uVar2) + iVar9;
    iVar11 = (iVar12 - (int)uVar19) + iVar9;
    if ((uint)(iVar17 - iVar10) < (uint)(iVar24 - iVar11)) {
      iVar10 = iVar11;
      iVar17 = iVar24;
    }
    if ((int)((ulonglong)(uint)(iVar17 - iVar10) / (uVar21 & 0xffffffff)) !=
        (int)((uint)(iVar20 - iVar15) / uVar7)) {
      return uVar22;
    }
  } while( true );
}

// pas_segregated_heap_medium_directory_tuple_ptr_store @ 140d554f0

void __cdecl
pas_segregated_heap_medium_directory_tuple_ptr_store
          (pas_segregated_heap_medium_directory_tuple_ptr *param_1,
          pas_segregated_heap_medium_directory_tuple *param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  
  if (param_2 == (pas_segregated_heap_medium_directory_tuple *)0x0) {
    param_1->payload = 0;
    return;
  }
  uVar2 = (longlong)param_2 - pas_compact_heap_reservation_base;
  if (pas_compact_heap_reservation_size <= uVar2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((uVar2 & 7) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (7 < uVar2) {
    param_1->payload = (uint)(uVar2 >> 3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_segregated_heap_get_num_free_bytes @ 140d55530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulong64 __cdecl pas_segregated_heap_get_num_free_bytes(pas_segregated_heap *param_1)

{
  code *pcVar1;
  ulong64 uVar2;
  undefined1 auStack_88 [40];
  pas_heap_summary local_60;
  ulonglong local_8;
  
  local_8 = __security_cookie.value ^ (ulonglong)auStack_88;
  pas_segregated_heap_compute_summary(&local_60,param_1);
  if ((local_8 ^ (ulonglong)auStack_88) == __security_cookie.value) {
    return local_60.free;
  }
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return uVar2;
}

// pas_segregated_heap_compute_summary @ 140d55590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_heap_summary * __cdecl
pas_segregated_heap_compute_summary
          (pas_heap_summary *__return_storage_ptr__,pas_segregated_heap *param_1)

{
  uint uVar1;
  code *pcVar2;
  ulong64 uVar3;
  pas_heap_summary *ppVar4;
  ulonglong uVar5;
  pas_bitfit_heap *ppVar6;
  pas_segregated_directory *ppVar7;
  ulong64 uVar8;
  ulong64 uVar9;
  ulong64 uVar10;
  ulong64 uVar11;
  ulong64 uVar12;
  ulong64 uVar13;
  ulong64 uVar14;
  ulong64 uVar15;
  ulong64 uVar16;
  ulong64 uVar17;
  ulong64 uVar18;
  undefined1 auStack_158 [32];
  pas_heap_summary local_138;
  pas_heap_summary local_d8;
  ulonglong local_80;
  
  local_80 = __security_cookie.value ^ (ulonglong)auStack_158;
  __return_storage_ptr__->meta_ineligible_for_decommit = 0;
  __return_storage_ptr__->meta_eligible_for_decommit = 0;
  __return_storage_ptr__->free_eligible_for_decommit = 0;
  __return_storage_ptr__->free_decommitted = 0;
  __return_storage_ptr__->decommitted = 0;
  __return_storage_ptr__->free_ineligible_for_decommit = 0;
  __return_storage_ptr__->meta = 0;
  __return_storage_ptr__->committed = 0;
  __return_storage_ptr__->free = 0;
  __return_storage_ptr__->allocated = 0;
  __return_storage_ptr__->cached = 0;
  uVar5 = (ulonglong)(param_1->basic_size_directory_and_head).payload;
  ppVar7 = (pas_segregated_directory *)(pas_compact_heap_reservation_base + uVar5 * 8);
  uVar3 = pas_compact_heap_reservation_base;
  if (ppVar7 != (pas_segregated_directory *)0x0 && uVar5 != 0) {
    uVar9 = __return_storage_ptr__->free;
    uVar10 = __return_storage_ptr__->allocated;
    uVar11 = __return_storage_ptr__->meta;
    uVar12 = __return_storage_ptr__->committed;
    uVar13 = __return_storage_ptr__->decommitted;
    uVar14 = __return_storage_ptr__->free_ineligible_for_decommit;
    uVar15 = __return_storage_ptr__->free_eligible_for_decommit;
    uVar16 = __return_storage_ptr__->free_decommitted;
    uVar17 = __return_storage_ptr__->meta_ineligible_for_decommit;
    uVar18 = __return_storage_ptr__->meta_eligible_for_decommit;
    uVar8 = __return_storage_ptr__->cached;
    do {
      pas_segregated_directory_compute_summary(&local_d8,ppVar7);
      uVar3 = pas_compact_heap_reservation_base;
      uVar9 = uVar9 + local_d8.free;
      uVar10 = uVar10 + local_d8.allocated;
      uVar11 = uVar11 + local_d8.meta;
      uVar12 = uVar12 + local_d8.committed;
      uVar13 = uVar13 + local_d8.decommitted;
      uVar14 = uVar14 + local_d8.free_ineligible_for_decommit;
      uVar15 = uVar15 + local_d8.free_eligible_for_decommit;
      uVar16 = uVar16 + local_d8.free_decommitted;
      uVar17 = uVar17 + local_d8.meta_ineligible_for_decommit;
      uVar18 = uVar18 + local_d8.meta_eligible_for_decommit;
      uVar8 = uVar8 + local_d8.cached;
      uVar1._0_1_ = ppVar7[2].page_config_kind;
      uVar1._1_1_ = ppVar7[2].sharing_mode;
      uVar1._2_1_ = ppVar7[2].directory_kind;
      uVar1._3_1_ = ppVar7[2].field_0xf;
      if ((ulonglong)uVar1 == 0) break;
      ppVar7 = (pas_segregated_directory *)
               (pas_compact_heap_reservation_base + (ulonglong)uVar1 * 8);
    } while (ppVar7 != (pas_segregated_directory *)0x0);
    __return_storage_ptr__->meta = uVar11;
    __return_storage_ptr__->committed = uVar12;
    __return_storage_ptr__->decommitted = uVar13;
    __return_storage_ptr__->free_ineligible_for_decommit = uVar14;
    __return_storage_ptr__->free_eligible_for_decommit = uVar15;
    __return_storage_ptr__->free_decommitted = uVar16;
    __return_storage_ptr__->meta_ineligible_for_decommit = uVar17;
    __return_storage_ptr__->meta_eligible_for_decommit = uVar18;
    __return_storage_ptr__->cached = uVar8;
    __return_storage_ptr__->free = uVar9;
    __return_storage_ptr__->allocated = uVar10;
  }
  uVar1 = (param_1->bitfit_heap).payload;
  ppVar6 = (pas_bitfit_heap *)((ulonglong)uVar1 * 8 + uVar3);
  if (ppVar6 != (pas_bitfit_heap *)0x0 && uVar1 != 0) {
    pas_bitfit_heap_compute_summary(&local_138,ppVar6);
    __return_storage_ptr__->free = __return_storage_ptr__->free + local_138.free;
    __return_storage_ptr__->allocated = __return_storage_ptr__->allocated + local_138.allocated;
    __return_storage_ptr__->meta = __return_storage_ptr__->meta + local_138.meta;
    __return_storage_ptr__->committed = __return_storage_ptr__->committed + local_138.committed;
    __return_storage_ptr__->decommitted =
         __return_storage_ptr__->decommitted + local_138.decommitted;
    __return_storage_ptr__->free_ineligible_for_decommit =
         __return_storage_ptr__->free_ineligible_for_decommit +
         local_138.free_ineligible_for_decommit;
    __return_storage_ptr__->free_eligible_for_decommit =
         __return_storage_ptr__->free_eligible_for_decommit + local_138.free_eligible_for_decommit;
    __return_storage_ptr__->free_decommitted =
         __return_storage_ptr__->free_decommitted + local_138.free_decommitted;
    __return_storage_ptr__->meta_ineligible_for_decommit =
         __return_storage_ptr__->meta_ineligible_for_decommit +
         local_138.meta_ineligible_for_decommit;
    __return_storage_ptr__->meta_eligible_for_decommit =
         __return_storage_ptr__->meta_eligible_for_decommit + local_138.meta_eligible_for_decommit;
    __return_storage_ptr__->cached = __return_storage_ptr__->cached + local_138.cached;
  }
  if ((local_80 ^ (ulonglong)auStack_158) == __security_cookie.value) {
    return __return_storage_ptr__;
  }
  pcVar2 = (code *)swi(3);
  ppVar4 = (pas_heap_summary *)(*pcVar2)();
  return ppVar4;
}

// pas_segregated_heap_for_each_size_directory @ 140d557b0

bool __cdecl
pas_segregated_heap_for_each_size_directory
          (pas_segregated_heap *param_1,
          _func___cdecl_bool_pas_segregated_heap_ptr_pas_segregated_size_directory_ptr_void_ptr
          *param_2,void *param_3)

{
  bool bVar1;
  ulonglong uVar2;
  pas_segregated_size_directory *ppVar3;
  
  uVar2 = (ulonglong)(param_1->basic_size_directory_and_head).payload;
  ppVar3 = (pas_segregated_size_directory *)(uVar2 * 8 + pas_compact_heap_reservation_base);
  bVar1 = true;
  if (ppVar3 != (pas_segregated_size_directory *)0x0 && uVar2 != 0) {
    do {
      bVar1 = (*param_2)(param_1,ppVar3,param_3);
      if (!bVar1) {
        return bVar1;
      }
      uVar2 = (ulonglong)(ppVar3->next_for_heap).payload;
      if (uVar2 == 0) {
        return bVar1;
      }
      ppVar3 = (pas_segregated_size_directory *)(uVar2 * 8 + pas_compact_heap_reservation_base);
    } while (ppVar3 != (pas_segregated_size_directory *)0x0);
  }
  return bVar1;
}

// pas_segregated_heap_for_each_committed_view @ 140d55820

bool __cdecl
pas_segregated_heap_for_each_committed_view
          (pas_segregated_heap *param_1,
          _func___cdecl_bool_pas_segregated_heap_ptr_pas_segregated_size_directory_ptr_pas_segregated_view_opaque_ptr_void_ptr
          *param_2,void *param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  ulong64 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulong64 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  pas_segregated_view_opaque *ppVar10;
  ulonglong uVar11;
  pas_segregated_size_directory *ppVar12;
  
  uVar11 = (ulonglong)(param_1->basic_size_directory_and_head).payload;
  ppVar12 = (pas_segregated_size_directory *)(pas_compact_heap_reservation_base + uVar11 * 8);
  if (ppVar12 == (pas_segregated_size_directory *)0x0 || uVar11 == 0) {
    return true;
  }
  uVar4 = pas_compact_heap_reservation_base;
  do {
    uVar11 = (ulonglong)(ppVar12->base).first_view.payload;
    uVar7 = uVar4;
    if (uVar11 < 8) {
      uVar7 = 0;
    }
    if ((uVar7 + uVar11 != 0) &&
       (((uVar11 = (ulonglong)(ppVar12->base).data.payload, uVar11 == 0 ||
         (lVar5 = uVar4 + uVar11 * 8, lVar5 == 0)) || (*(int *)(lVar5 + 0x30) != -1)))) {
      bVar3 = pas_segregated_directory_is_committed(&ppVar12->base,0);
      if (bVar3) {
        uVar11 = (ulonglong)(ppVar12->base).first_view.payload;
        uVar4 = 0;
        if (7 < uVar11) {
          uVar4 = pas_compact_heap_reservation_base;
        }
        ppVar10 = (pas_segregated_view_opaque *)(uVar4 + uVar11);
        if ((ppVar10 == (pas_segregated_view_opaque *)0x0) ||
           ((uVar1 = (ppVar12->base).data.payload,
            lVar5 = (ulonglong)uVar1 * 8 + pas_compact_heap_reservation_base,
            lVar5 != 0 && uVar1 != 0 && (*(int *)(lVar5 + 0x30) == -1)))) {
LAB_140d55a02:
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        bVar3 = (*param_2)(param_1,ppVar12,ppVar10,param_3);
        if (!bVar3) {
          return false;
        }
      }
      uVar11 = 1;
      while( true ) {
        uVar6 = (ulonglong)(ppVar12->base).first_view.payload;
        uVar4 = pas_compact_heap_reservation_base;
        if (uVar6 < 8) {
          uVar4 = 0;
        }
        uVar8 = 0;
        if (uVar4 + uVar6 != 0) {
          uVar1 = (ppVar12->base).data.payload;
          lVar5 = (ulonglong)uVar1 * 8 + pas_compact_heap_reservation_base;
          uVar8 = 1;
          if (lVar5 != 0 && uVar1 != 0) {
            uVar8 = (ulonglong)(*(int *)(lVar5 + 0x30) + 1);
          }
        }
        uVar4 = pas_compact_heap_reservation_base;
        if (uVar8 <= uVar11) break;
        bVar3 = pas_segregated_directory_is_committed(&ppVar12->base,uVar11);
        if (bVar3) {
          uVar6 = (ulonglong)(ppVar12->base).first_view.payload;
          uVar4 = 0;
          if (7 < uVar6) {
            uVar4 = pas_compact_heap_reservation_base;
          }
          if (((uVar4 + uVar6 == 0) || (uVar6 = (ulonglong)(ppVar12->base).data.payload, uVar6 == 0)
              ) || ((lVar5 = pas_compact_heap_reservation_base + uVar6 * 8, lVar5 == 0 ||
                    (*(int *)(lVar5 + 0x30) + 1 <= uVar11)))) goto LAB_140d55a02;
          lVar9 = pas_compact_heap_reservation_base + (ulonglong)*(uint *)(lVar5 + 0x2c) * 8;
          if ((ulonglong)*(uint *)(lVar5 + 0x2c) == 0) {
            lVar9 = 0;
          }
          uVar6 = (ulonglong)*(uint *)(lVar9 + -4 + uVar11 * 4);
          uVar4 = 0;
          if (7 < uVar6) {
            uVar4 = pas_compact_heap_reservation_base;
          }
          bVar3 = (*param_2)(param_1,ppVar12,(pas_segregated_view_opaque *)(uVar4 + uVar6),param_3);
          if (!bVar3) {
            return false;
          }
        }
        uVar11 = uVar11 + 1;
      }
    }
    uVar11 = (ulonglong)(ppVar12->next_for_heap).payload;
    if (uVar11 == 0) {
      return true;
    }
    ppVar12 = (pas_segregated_size_directory *)(uVar4 + uVar11 * 8);
    if (ppVar12 == (pas_segregated_size_directory *)0x0) {
      return true;
    }
  } while( true );
}

// pas_segregated_heap_for_each_view_index @ 140d55a10

/* WARNING: Type propagation algorithm not settling */

bool __cdecl
pas_segregated_heap_for_each_view_index
          (pas_segregated_heap *param_1,
          _func___cdecl_bool_pas_segregated_heap_ptr_pas_segregated_size_directory_ptr_ulong64_pas_segregated_view_opaque_ptr_void_ptr
          *param_2,void *param_3)

{
  longlong lVar1;
  bool bVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulong64 uVar6;
  pas_segregated_view_opaque *ppVar7;
  ulonglong uVar8;
  pas_segregated_size_directory *ppVar9;
  
  uVar8 = (ulonglong)(param_1->basic_size_directory_and_head).payload;
  ppVar9 = (pas_segregated_size_directory *)(pas_compact_heap_reservation_base + uVar8 * 8);
  if (ppVar9 == (pas_segregated_size_directory *)0x0 || uVar8 == 0) {
    return true;
  }
  uVar3 = pas_compact_heap_reservation_base;
  do {
    uVar8 = (ulonglong)(ppVar9->base).first_view.payload;
    uVar6 = uVar3;
    if (uVar8 < 8) {
      uVar6 = 0;
    }
    ppVar7 = (pas_segregated_view_opaque *)(uVar6 + uVar8);
    if ((ppVar7 != (pas_segregated_view_opaque *)0x0) &&
       (((uVar8 = (ulonglong)(ppVar9->base).data.payload, uVar8 == 0 ||
         (lVar1 = uVar3 + uVar8 * 8, lVar1 == 0)) || (*(int *)(lVar1 + 0x30) != -1)))) {
      bVar2 = (*param_2)(param_1,ppVar9,0,ppVar7,param_3);
      if (!bVar2) {
        return false;
      }
      uVar8 = (ulonglong)(ppVar9->base).first_view.payload;
      uVar6 = 0;
      if (7 < uVar8) {
        uVar6 = pas_compact_heap_reservation_base;
      }
      uVar3 = pas_compact_heap_reservation_base;
      if (uVar6 + uVar8 != 0) {
        uVar8 = 1;
        do {
          uVar4 = (ulonglong)(ppVar9->base).data.payload;
          uVar3 = pas_compact_heap_reservation_base;
          if (((uVar4 == 0) || (lVar1 = pas_compact_heap_reservation_base + uVar4 * 8, lVar1 == 0))
             || (*(int *)(lVar1 + 0x30) + 1 <= uVar8)) break;
          lVar5 = pas_compact_heap_reservation_base + (ulonglong)*(uint *)(lVar1 + 0x2c) * 8;
          if ((ulonglong)*(uint *)(lVar1 + 0x2c) == 0) {
            lVar5 = 0;
          }
          uVar4 = (ulonglong)*(uint *)(lVar5 + -4 + uVar8 * 4);
          uVar3 = 0;
          if (7 < uVar4) {
            uVar3 = pas_compact_heap_reservation_base;
          }
          bVar2 = (*param_2)(param_1,ppVar9,uVar8,(pas_segregated_view_opaque *)(uVar3 + uVar4),
                             param_3);
          if (!bVar2) {
            return false;
          }
          uVar8 = uVar8 + 1;
          uVar4 = (ulonglong)(ppVar9->base).first_view.payload;
          uVar6 = 0;
          if (7 < uVar4) {
            uVar6 = pas_compact_heap_reservation_base;
          }
          uVar3 = pas_compact_heap_reservation_base;
        } while (uVar6 + uVar4 != 0);
      }
    }
    uVar8 = (ulonglong)(ppVar9->next_for_heap).payload;
    if (uVar8 == 0) {
      return true;
    }
    ppVar9 = (pas_segregated_size_directory *)(uVar3 + uVar8 * 8);
    if (ppVar9 == (pas_segregated_size_directory *)0x0) {
      return true;
    }
  } while( true );
}

// pas_segregated_heap_for_each_live_object @ 140d55b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
pas_segregated_heap_for_each_live_object
          (pas_segregated_heap *param_1,
          _func___cdecl_bool_pas_segregated_heap_ptr_ulong64_ulong64_void_ptr *param_2,void *param_3
          )

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  ulonglong uVar5;
  pas_bitfit_heap *ppVar6;
  pas_segregated_size_directory *ppVar7;
  undefined1 auStack_68 [40];
  pas_segregated_heap *local_40;
  _func___cdecl_bool_pas_segregated_heap_ptr_ulong64_ulong64_void_ptr *local_38;
  void *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_68;
  uVar5 = (ulonglong)(param_1->basic_size_directory_and_head).payload;
  ppVar7 = (pas_segregated_size_directory *)(pas_compact_heap_reservation_base + uVar5 * 8);
  local_40 = param_1;
  local_38 = param_2;
  local_30 = param_3;
  if (ppVar7 != (pas_segregated_size_directory *)0x0 && uVar5 != 0) {
    do {
      bVar3 = pas_segregated_size_directory_for_each_live_object
                        (ppVar7,for_each_live_object_segregated_heap_callback,&local_40);
      if (!bVar3) {
        if ((local_28 ^ (ulonglong)auStack_68) == __security_cookie.value) {
          return false;
        }
        goto LAB_140d55c52;
      }
      uVar5 = (ulonglong)(ppVar7->next_for_heap).payload;
    } while ((uVar5 != 0) &&
            (ppVar7 = (pas_segregated_size_directory *)
                      (pas_compact_heap_reservation_base + uVar5 * 8),
            ppVar7 != (pas_segregated_size_directory *)0x0));
  }
  uVar1 = (param_1->bitfit_heap).payload;
  ppVar6 = (pas_bitfit_heap *)((ulonglong)uVar1 * 8 + pas_compact_heap_reservation_base);
  bVar3 = true;
  if (ppVar6 != (pas_bitfit_heap *)0x0 && uVar1 != 0) {
    bVar3 = pas_bitfit_heap_for_each_live_object
                      (ppVar6,for_each_live_object_bitfit_callback,&local_40);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == __security_cookie.value) {
    return bVar3;
  }
LAB_140d55c52:
  pcVar2 = (code *)swi(3);
  uVar4 = (*pcVar2)();
  return (bool)uVar4;
}

// for_each_live_object_bitfit_callback @ 140d55c60

bool __cdecl
for_each_live_object_bitfit_callback
          (pas_bitfit_heap *param_1,pas_bitfit_view *param_2,ulong64 param_3,ulong64 param_4,
          void *param_5)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140d55c79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)param_5 + 8))
                    (*(undefined8 *)param_5,param_3,param_4,
                     *(undefined8 *)((longlong)param_5 + 0x10));
  return (bool)uVar1;
}

// pas_segregated_heap_num_committed_views @ 140d55c90

ulong64 __cdecl pas_segregated_heap_num_committed_views(pas_segregated_heap *param_1)

{
  uint uVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  pas_segregated_directory *ppVar5;
  
  uVar4 = (ulonglong)(param_1->basic_size_directory_and_head).payload;
  ppVar5 = (pas_segregated_directory *)(uVar4 * 8 + pas_compact_heap_reservation_base);
  if (ppVar5 == (pas_segregated_directory *)0x0 || uVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    do {
      uVar2 = pas_segregated_directory_num_committed_views(ppVar5);
      uVar3 = uVar2 + uVar3;
      uVar1._0_1_ = ppVar5[2].page_config_kind;
      uVar1._1_1_ = ppVar5[2].sharing_mode;
      uVar1._2_1_ = ppVar5[2].directory_kind;
      uVar1._3_1_ = ppVar5[2].field_0xf;
      if ((ulonglong)uVar1 == 0) {
        return uVar3;
      }
      ppVar5 = (pas_segregated_directory *)
               ((ulonglong)uVar1 * 8 + pas_compact_heap_reservation_base);
    } while (ppVar5 != (pas_segregated_directory *)0x0);
  }
  return uVar3;
}

// pas_segregated_heap_num_empty_views @ 140d55cf0

ulong64 __cdecl pas_segregated_heap_num_empty_views(pas_segregated_heap *param_1)

{
  uint uVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  pas_segregated_directory *ppVar5;
  
  uVar4 = (ulonglong)(param_1->basic_size_directory_and_head).payload;
  ppVar5 = (pas_segregated_directory *)(uVar4 * 8 + pas_compact_heap_reservation_base);
  if (ppVar5 == (pas_segregated_directory *)0x0 || uVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    do {
      uVar2 = pas_segregated_directory_num_empty_views(ppVar5);
      uVar3 = uVar2 + uVar3;
      uVar1._0_1_ = ppVar5[2].page_config_kind;
      uVar1._1_1_ = ppVar5[2].sharing_mode;
      uVar1._2_1_ = ppVar5[2].directory_kind;
      uVar1._3_1_ = ppVar5[2].field_0xf;
      if ((ulonglong)uVar1 == 0) {
        return uVar3;
      }
      ppVar5 = (pas_segregated_directory *)
               ((ulonglong)uVar1 * 8 + pas_compact_heap_reservation_base);
    } while (ppVar5 != (pas_segregated_directory *)0x0);
  }
  return uVar3;
}

// pas_segregated_heap_num_empty_granules @ 140d55d50

ulong64 __cdecl pas_segregated_heap_num_empty_granules(pas_segregated_heap *param_1)

{
  uint uVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  pas_segregated_directory *ppVar5;
  
  uVar4 = (ulonglong)(param_1->basic_size_directory_and_head).payload;
  ppVar5 = (pas_segregated_directory *)(uVar4 * 8 + pas_compact_heap_reservation_base);
  if (ppVar5 == (pas_segregated_directory *)0x0 || uVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    do {
      uVar2 = pas_segregated_directory_num_empty_granules(ppVar5);
      uVar3 = uVar2 + uVar3;
      uVar1._0_1_ = ppVar5[2].page_config_kind;
      uVar1._1_1_ = ppVar5[2].sharing_mode;
      uVar1._2_1_ = ppVar5[2].directory_kind;
      uVar1._3_1_ = ppVar5[2].field_0xf;
      if ((ulonglong)uVar1 == 0) {
        return uVar3;
      }
      ppVar5 = (pas_segregated_directory *)
               ((ulonglong)uVar1 * 8 + pas_compact_heap_reservation_base);
    } while (ppVar5 != (pas_segregated_directory *)0x0);
  }
  return uVar3;
}

// pas_segregated_heap_num_views @ 140d55db0

ulong64 __cdecl pas_segregated_heap_num_views(pas_segregated_heap *param_1)

{
  ulong64 uVar1;
  uint *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulong64 uVar5;
  
  uVar4 = (ulonglong)(param_1->basic_size_directory_and_head).payload;
  puVar2 = (uint *)(pas_compact_heap_reservation_base + uVar4 * 8);
  if (puVar2 == (uint *)0x0 || uVar4 == 0) {
    return 0;
  }
  uVar1 = 0;
  do {
    uVar5 = pas_compact_heap_reservation_base;
    if ((ulonglong)*puVar2 < 8) {
      uVar5 = 0;
    }
    uVar4 = 0;
    if (uVar5 + *puVar2 != 0) {
      lVar3 = (ulonglong)puVar2[1] * 8 + pas_compact_heap_reservation_base;
      uVar4 = 1;
      if (lVar3 != 0 && puVar2[1] != 0) {
        uVar4 = (ulonglong)(*(int *)(lVar3 + 0x30) + 1);
      }
    }
    uVar1 = uVar1 + uVar4;
  } while (((ulonglong)puVar2[0xd] != 0) &&
          (puVar2 = (uint *)(pas_compact_heap_reservation_base + (ulonglong)puVar2[0xd] * 8),
          puVar2 != (uint *)0x0));
  return uVar1;
}

// recompute_size_lookup @ 140d55e40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl
recompute_size_lookup
          (pas_segregated_heap *param_1,pas_heap_config *param_2,uint *param_3,
          _func___cdecl_void_ulong64_uint_void_ptr *param_4,
          _func___cdecl_void_ulong64_pas_segregated_size_directory_ptr_void_ptr *param_5,
          _func___cdecl_void_ulong64_pas_segregated_heap_medium_directory_tuple_ptr_void_ptr
          *param_6,void *param_7)

{
  int iVar1;
  bool bVar2;
  code *pcVar3;
  uint *puVar4;
  byte bVar5;
  longlong lVar6;
  ulong64 uVar7;
  void *pvVar8;
  pas_heap **pppVar9;
  pas_heap *ppVar10;
  byte bVar11;
  byte bVar12;
  pas_heap *ppVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  pas_heap *ppVar19;
  ulonglong uVar20;
  pas_heap **pppVar21;
  byte bVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  bool bVar27;
  undefined1 auStack_6f8 [40];
  ulonglong local_6d0;
  pas_heap *local_6c8;
  void *local_6c0;
  uint *local_6b8;
  void *local_6b0;
  ulonglong local_6a8;
  ulonglong local_6a0;
  pas_heap *local_698 [200];
  void *local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  uVar7 = pas_compact_heap_reservation_base;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_6f8;
  if (param_1->small_index_upper_bound == 0) {
    uVar16 = (param_1->rare_data).payload;
    lVar6 = (ulonglong)uVar16 * 8 + pas_compact_heap_reservation_base;
    if (lVar6 != 0 && uVar16 != 0) {
      if (*(int *)(lVar6 + 0xc) != 0) goto LAB_140d55e82;
      if (*(int *)(lVar6 + 0x10) != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
    }
    if ((local_48 ^ (ulonglong)auStack_6f8) == __security_cookie.value) {
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_140d55e82:
  memset(&local_6a0,0,0x658);
  uVar16 = (param_1->basic_size_directory_and_head).payload;
  ppVar19 = (pas_heap *)((ulonglong)uVar16 * 8 + uVar7);
  local_6c8 = (pas_heap *)param_1;
  puVar4 = param_3;
  if (ppVar19 != (pas_heap *)0x0 && uVar16 != 0) {
    do {
      local_6b8 = puVar4;
      iVar1 = *(int *)((longlong)(ppVar19->large_heap).free_heap.tree.minimum.payload + 1);
      if (iVar1 == -1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if ((iVar1 == 0) ||
         (*(char *)&(ppVar19->segregated_heap).index_to_small_size_directory != '\x01')) {
LAB_140d55fa0:
        uVar26 = 0;
        bVar27 = false;
        bVar2 = false;
        uVar16 = (ppVar19->segregated_heap).small_index_upper_bound >> 7;
        if (uVar16 != 0x1ffffff) goto LAB_140d5604b;
LAB_140d5622c:
        if (bVar2) {
LAB_140d56232:
          if (*(longlong *)(param_4 + 8) == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          if (*(uint *)(param_4 + 0x24) <= uVar26) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          *(int *)(*(longlong *)(param_4 + 8) + uVar26 * 4) = iVar1;
        }
      }
      else {
        if (param_3 == (uint *)0x0) {
          ppVar13 = (pas_heap *)0x0;
          if (((local_6c8->segregated_heap).runtime_config)->is_part_of_heap) {
            ppVar13 = local_6c8;
          }
          uVar7 = pas_heap_get_type_size(ppVar13);
          bVar2 = (param_2->small_bitfit_config).base.is_enabled;
          bVar11 = (param_2->small_bitfit_config).base.min_align_shift;
          uVar26 = (ulonglong)bVar11;
          if (((param_2->small_segregated_config).base.is_enabled & 1U) == 0) {
            if ((bVar2 & 1U) == 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
          }
          else {
            if ((bVar2 & 1U) == 0) {
              uVar26 = 0xffffffffffffffff;
            }
            uVar24 = (ulonglong)(param_2->small_segregated_config).base.min_align_shift;
            if (uVar24 <= uVar26) {
              uVar26 = uVar24;
            }
            bVar11 = (byte)uVar26;
          }
          uVar26 = (uVar7 + (1L << (bVar11 & 0x3f))) - 1 >> (bVar11 & 0x3f);
        }
        else {
          uVar26 = (ulonglong)*param_3;
          if (uVar26 == 0xffffffff) goto LAB_140d55fa0;
        }
        bVar27 = uVar26 < (local_6c8->segregated_heap).small_index_upper_bound;
        if (!bVar27) {
          uVar26 = 0;
        }
        uVar16 = (ppVar19->segregated_heap).small_index_upper_bound >> 7;
        bVar2 = bVar27;
        if (uVar16 == 0x1ffffff) goto LAB_140d5622c;
LAB_140d5604b:
        uVar24 = local_6a0;
        uVar18 = (ulonglong)uVar16;
        uVar16 = (ppVar19->segregated_heap).bitfit_heap.payload;
        bVar11 = (param_2->small_segregated_config).base.is_enabled;
        bVar22 = (param_2->small_bitfit_config).base.is_enabled;
        bVar5 = (param_2->small_bitfit_config).base.min_align_shift;
        uVar14 = (ulonglong)bVar5;
        local_6d0 = uVar26;
        if ((bVar11 & 1) == 0) {
          bVar12 = bVar5;
          if ((bVar22 & 1) == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        else {
          if ((bVar22 & 1) == 0) {
            uVar14 = 0xffffffffffffffff;
          }
          uVar23 = (ulonglong)(param_2->small_segregated_config).base.min_align_shift;
          if (uVar23 <= uVar14) {
            uVar14 = uVar23;
          }
          bVar12 = (byte)uVar14;
        }
        bVar2 = bVar27;
        if (((1L << (bVar12 & 0x3f)) + (ulonglong)(uVar16 & 0x7ffffff)) - 1 >> (bVar12 & 0x3f) <
            uVar18) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        while( true ) {
          uVar20 = (ulonglong)(local_6c8->segregated_heap).small_index_upper_bound;
          uVar23 = (ulonglong)(param_2->small_segregated_config).base.min_align_shift;
          uVar14 = 0xffffffffffffffff;
          if ((bVar22 & 1) != 0) {
            uVar14 = (ulonglong)bVar5;
          }
          if ((bVar11 & 1) == 0) {
            bVar12 = bVar5;
            if ((bVar22 & 1) == 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
          }
          else {
            uVar25 = uVar23;
            if (uVar14 < uVar23) {
              uVar25 = uVar14;
            }
            bVar12 = (byte)uVar25;
          }
          uVar25 = (((1L << (bVar12 & 0x3f)) + (ulonglong)(uVar16 & 0x7ffffff)) - 1 >>
                   (bVar12 & 0x3f)) + 1;
          if (uVar20 <= uVar25) {
            uVar25 = uVar20;
          }
          if (uVar25 <= uVar18) break;
          if (*(longlong *)(param_4 + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          if (*(uint *)(param_4 + 0x24) <= uVar18) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          uVar14 = (longlong)ppVar19 - pas_compact_heap_reservation_base;
          if (pas_compact_heap_reservation_size <= uVar14) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          if ((uVar14 & 7) != 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          if (uVar14 < 8) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          *(int *)(*(longlong *)(param_4 + 0x10) + uVar18 * 4) = (int)(uVar14 >> 3);
          bVar27 = bVar2;
          if (iVar1 != 0) {
            if (*(longlong *)(param_4 + 8) == 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            if (*(uint *)(param_4 + 0x24) <= uVar18) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            if (uVar26 == uVar18) {
              bVar27 = false;
            }
            *(int *)(*(longlong *)(param_4 + 8) + uVar18 * 4) = iVar1;
            if (!bVar2) {
              bVar27 = bVar2;
            }
          }
          bVar2 = bVar27;
          uVar18 = uVar18 + 1;
          uVar16 = (ppVar19->segregated_heap).bitfit_heap.payload;
          bVar11 = (param_2->small_segregated_config).base.is_enabled;
          bVar22 = (param_2->small_bitfit_config).base.is_enabled;
          bVar5 = (param_2->small_bitfit_config).base.min_align_shift;
        }
        if ((bVar11 & 1) == 0) {
          if ((bVar22 & 1) == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        else {
          if (uVar14 < uVar23) {
            uVar23 = uVar14;
          }
          bVar5 = (byte)uVar23;
        }
        param_3 = local_6b8;
        if ((1L << (bVar5 & 0x3f)) + ((ulonglong)(uVar16 & 0x7ffffff) - 1) >> (bVar5 & 0x3f) <
            uVar20) goto LAB_140d5622c;
        uVar26 = local_50 + 200;
        if (uVar26 <= local_6a0) {
          if (local_6a0 != uVar26) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          uVar14 = local_50 * 2;
          if (uVar14 < 5) {
            uVar14 = 4;
          }
          if (uVar14 <= local_50) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          local_6a8 = local_50;
          local_6c0 = (void *)(uVar14 * 8);
          pvVar8 = (*pas_large_utility_free_heap_allocation_config.allocate)
                             ((ulong64)local_6c0,"size_directory_min_heap/outline_array",
                              pas_object_allocation,
                              pas_large_utility_free_heap_allocation_config.arg);
          uVar26 = uVar14 + 200;
          if (uVar26 <= uVar24) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          local_6b0 = pvVar8;
          memset(pvVar8,0,(size_t)local_6c0);
          pvVar8 = local_58;
          if (local_58 != (void *)0x0) {
            local_6c0 = local_58;
            memcpy(local_6b0,local_58,uVar24 * 8 - 0x640);
            pvVar8 = local_6c0;
          }
          (*pas_large_utility_free_heap_allocation_config.deallocate)
                    (pvVar8,local_6a8 << 3,pas_object_allocation,
                     pas_large_utility_free_heap_allocation_config.arg);
          local_58 = local_6b0;
          local_50 = uVar14;
        }
        if (uVar26 <= uVar24) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar26 = uVar24 + 1;
        local_6a0 = uVar26;
        if (uVar24 < 200) {
          local_698[uVar24] = (pas_heap *)0x0;
          if (uVar24 != 0) goto LAB_140d563c0;
          uVar24 = 0;
          uVar26 = 1;
        }
        else {
          *(undefined8 *)((longlong)local_58 + uVar24 * 8 + -0x640) = 0;
LAB_140d563c0:
          do {
            uVar14 = uVar26 >> 1;
            uVar24 = uVar14 - 1;
            uVar18 = local_50 + 200;
            if (uVar18 <= uVar24) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            pppVar9 = (pas_heap **)((longlong)local_58 + uVar24 * 8 + -0x640);
            if (uVar26 < 0x192) {
              pppVar9 = local_698 + (uVar14 - 1);
            }
            uVar23 = uVar26 - 1;
            if ((((*pppVar9)->segregated_heap).bitfit_heap.payload & 0x7ffffff) <=
                ((ppVar19->segregated_heap).bitfit_heap.payload & 0x7ffffff)) {
              if (uVar18 <= uVar23) goto LAB_140d56856;
              if (uVar26 < 0xc9) goto LAB_140d5647d;
              pppVar9 = (pas_heap **)((longlong)local_58 + uVar23 * 8 + -0x640);
              goto LAB_140d56491;
            }
            if (uVar18 <= uVar23) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            pppVar21 = (pas_heap **)((longlong)local_58 + uVar23 * 8 + -0x640);
            if (uVar26 < 0xc9) {
              pppVar21 = local_698 + (uVar26 - 1);
            }
            *pppVar21 = *pppVar9;
            bVar27 = 3 < uVar26;
            uVar26 = uVar14;
          } while (bVar27);
        }
        if (local_50 + 200 <= uVar24) {
LAB_140d56856:
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
LAB_140d5647d:
        pppVar9 = local_698 + (uVar26 - 1);
LAB_140d56491:
        *pppVar9 = ppVar19;
        uVar26 = local_6d0;
        param_3 = local_6b8;
        if (bVar2) goto LAB_140d56232;
      }
      uVar26 = (ulonglong)*(uint *)((longlong)&(ppVar19->large_heap).free_heap.num_mapped_bytes + 4)
      ;
    } while ((uVar26 != 0) &&
            (ppVar19 = (pas_heap *)(uVar26 * 8 + pas_compact_heap_reservation_base),
            puVar4 = local_6b8, ppVar19 != (pas_heap *)0x0));
    if (local_6a0 != 0) {
      uVar26 = 0;
LAB_140d564d0:
      ppVar19 = local_698[0];
      uVar24 = local_6a0;
      if (local_50 == 0xffffffffffffff38) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar14 = local_6a0 - 1;
      if (local_50 + 200 <= uVar14) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      local_6c8 = local_698[0];
      pppVar9 = (pas_heap **)((longlong)local_58 + uVar14 * 8 + -0x640);
      if (local_6a0 < 0xc9) {
        pppVar9 = local_698 + (local_6a0 - 1);
      }
      ppVar13 = *pppVar9;
      *pppVar9 = (pas_heap *)0x0;
      if (local_50 == 0xffffffffffffff38) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      local_698[0] = (pas_heap *)0x0;
      local_6a0 = uVar14;
      if (uVar24 != 1) {
        uVar24 = 1;
        do {
          uVar23 = uVar24 * 2;
          uVar18 = uVar24 * 2 + 1;
          local_6d0 = uVar26;
          if (uVar23 < uVar14) {
            if (local_50 + 200 <= uVar23) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            pppVar9 = (pas_heap **)((longlong)local_58 + uVar24 * 0x10 + -0x640);
            if (uVar18 < 0xc9) {
              pppVar9 = local_698 + uVar24 * 2;
            }
            ppVar10 = *pppVar9;
            bVar2 = ((ppVar13->segregated_heap).bitfit_heap.payload & 0x7ffffff) <=
                    ((ppVar10->segregated_heap).bitfit_heap.payload & 0x7ffffff);
          }
          else {
            if (uVar14 < uVar23) goto LAB_140d566b0;
            bVar2 = true;
            ppVar10 = (pas_heap *)0x0;
          }
          if (uVar23 == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          uVar20 = local_50 + 200;
          if (uVar20 <= uVar23 - 1) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pppVar9 = (pas_heap **)((longlong)local_58 + (uVar23 - 1) * 8 + -0x640);
          if (uVar23 < 0xc9) {
            pppVar9 = local_698 + uVar24 * 2 + -1;
          }
          uVar17 = (ppVar13->segregated_heap).bitfit_heap.payload & 0x7ffffff;
          uVar16 = ((*pppVar9)->segregated_heap).bitfit_heap.payload & 0x7ffffff;
          if (bVar2) {
            if (uVar17 <= uVar16) goto LAB_140d566b0;
LAB_140d56686:
            ppVar10 = *pppVar9;
            uVar18 = uVar23;
            if (uVar20 <= uVar24 - 1) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
          }
          else {
            if ((uVar16 < uVar17) &&
               (uVar16 <= ((ppVar10->segregated_heap).bitfit_heap.payload & 0x7ffffff)))
            goto LAB_140d56686;
            if (uVar20 <= uVar24 - 1) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
          }
          pppVar9 = (pas_heap **)((longlong)local_58 + (uVar24 - 1) * 8 + -0x640);
          if (uVar24 < 0xc9) {
            pppVar9 = local_698 + (uVar24 - 1);
          }
          *pppVar9 = ppVar10;
          uVar24 = uVar18;
        } while( true );
      }
      goto LAB_140d566eb;
    }
  }
LAB_140d55eb5:
  (*pas_large_utility_free_heap_allocation_config.deallocate)
            (local_58,local_50 << 3,pas_object_allocation,
             pas_large_utility_free_heap_allocation_config.arg);
  return;
LAB_140d566b0:
  if (local_50 + 200 <= uVar24 - 1) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  pppVar9 = (pas_heap **)((longlong)local_58 + (uVar24 - 1) * 8 + -0x640);
  if (uVar24 < 0xc9) {
    pppVar9 = local_698 + (uVar24 - 1);
  }
  *pppVar9 = ppVar13;
LAB_140d566eb:
  if (ppVar19 == (pas_heap *)0x0) goto LAB_140d55eb5;
  uVar24 = (longlong)ppVar19 - pas_compact_heap_reservation_base;
  if (pas_compact_heap_reservation_size <= uVar24) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if ((uVar24 & 7) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if (uVar24 < 8) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  iVar1 = *(int *)((ppVar19->large_heap).free_heap.tree.minimum.payload + 1);
  if (iVar1 == -1) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  uVar16 = (ppVar19->segregated_heap).small_index_upper_bound >> 7;
  if (uVar16 == 0x1ffffff) {
    uVar16 = 0xffffffff;
  }
  if (uVar16 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  uVar17 = (ppVar19->segregated_heap).bitfit_heap.payload;
  bVar2 = (param_2->small_bitfit_config).base.is_enabled;
  bVar11 = (param_2->small_bitfit_config).base.min_align_shift;
  uVar14 = (ulonglong)bVar11;
  if (((param_2->small_segregated_config).base.is_enabled & 1U) == 0) {
    if ((bVar2 & 1U) == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
  }
  else {
    if ((bVar2 & 1U) == 0) {
      uVar14 = 0xffffffffffffffff;
    }
    uVar18 = (ulonglong)(param_2->small_segregated_config).base.min_align_shift;
    if (uVar18 <= uVar14) {
      uVar14 = uVar18;
    }
    bVar11 = (byte)uVar14;
  }
  if (((ulonglong)*(uint *)(param_4 + 0x1c) == 0) ||
     (lVar6 = pas_compact_heap_reservation_base + (ulonglong)*(uint *)(param_4 + 0x1c) * 8,
     lVar6 == 0)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if (*(uint *)(lVar6 + 0xc) <= uVar26) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if (*(uint *)(lVar6 + 0x10) <= uVar26) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if (((ulonglong)*(uint *)(lVar6 + 8) == 0) ||
     (lVar6 = pas_compact_heap_reservation_base + (ulonglong)*(uint *)(lVar6 + 8) * 8, lVar6 == 0))
  {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar15 = uVar26 * 0x10;
  *(int *)(lVar6 + lVar15) = (int)(uVar24 >> 3);
  *(int *)(lVar6 + 4 + lVar15) = iVar1;
  *(uint *)(lVar6 + 8 + lVar15) = uVar16;
  *(int *)(lVar6 + 0xc + lVar15) =
       (int)(((ulonglong)(uVar17 & 0x7ffffff) + (1L << (bVar11 & 0x3f))) - 1 >> (bVar11 & 0x3f));
  uVar26 = uVar26 + 1;
  if (local_6a0 == 0) goto LAB_140d55eb5;
  goto LAB_140d564d0;
}

// for_each_live_object_segregated_heap_callback @ 140d56890

bool __cdecl
for_each_live_object_segregated_heap_callback
          (pas_segregated_size_directory *param_1,pas_segregated_view_opaque *param_2,
          ulong64 param_3,void *param_4)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140d568ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)param_4 + 8))
                    (*(undefined8 *)param_4,param_3,param_1->object_size,
                     *(undefined8 *)((longlong)param_4 + 0x10));
  return (bool)uVar1;
}

