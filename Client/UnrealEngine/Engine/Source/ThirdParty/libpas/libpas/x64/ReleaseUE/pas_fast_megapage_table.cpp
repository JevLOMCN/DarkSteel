// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 1

// pas_fast_megapage_table_set_by_index @ 140d848b0

void __cdecl
pas_fast_megapage_table_set_by_index
          (pas_fast_megapage_table *param_1,ulong64 param_2,pas_fast_megapage_kind param_3,
          pas_lock_hold_mode param_4)

{
  pas_fast_megapage_table_impl *ppVar1;
  code *pcVar2;
  pas_fast_megapage_table_impl *_Dst;
  byte bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulong64 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if (param_4 == pas_lock_is_not_held) {
    AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  }
  if (param_3 == pas_small_exclusive_segregated_fast_megapage_kind && param_2 < 0x80000) {
    param_1->fast_bits[param_2 >> 5] =
         param_1->fast_bits[param_2 >> 5] | 1 << ((byte)param_2 & 0x1f);
  }
  else {
    ppVar1 = param_1->instance;
    uVar4 = ppVar1->index_begin;
    uVar5 = ppVar1->index_end;
    if (param_2 < uVar5 && uVar4 <= param_2) {
      if ((pas_small_other_fast_megapage_kind|pas_small_exclusive_segregated_fast_megapage_kind) <
          param_3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      bVar3 = (char)(param_2 - uVar4) * '\x02';
      uVar4 = param_2 - uVar4 >> 2 & 0x1ffffffffffffffc;
      *(pas_fast_megapage_kind *)((longlong)ppVar1->bits + uVar4) =
           param_3 << (bVar3 & 0x1f) |
           ~(3 << (bVar3 & 0x1f)) & *(uint *)((longlong)ppVar1->bits + uVar4);
    }
    else {
      if (ppVar1 == &pas_fast_megapage_table_impl_null) {
        uVar8 = param_2 + 1;
        uVar7 = param_2;
      }
      else if (param_2 < uVar4) {
        if (uVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        uVar7 = uVar4 * 2 - uVar5;
        uVar8 = uVar5;
        if (param_2 < uVar7) {
          uVar7 = param_2;
        }
      }
      else {
        if ((uVar4 == 0) || (uVar5 == 0)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if (param_2 < uVar5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        uVar8 = uVar5 * 2 - uVar4;
        uVar7 = uVar4;
        if (uVar8 < param_2 + 1) {
          uVar8 = param_2 + 1;
        }
      }
      if (uVar8 < uVar7 || uVar8 - uVar7 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar8 = ((uVar8 - uVar7) * 2 + 0x1f >> 5) * 4 + 0x1f & 0xfffffffffffffff8;
      uVar9 = (uVar8 * 8 - 0xc0 >> 1) + uVar7;
      if (uVar9 <= uVar7) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      _Dst = pas_immortal_heap_allocate
                       (uVar8,"pas_fast_megapage_table/instance",pas_object_allocation);
      memset(_Dst,0,uVar8);
      _Dst->index_begin = uVar7;
      _Dst->index_end = uVar9;
      _Dst->last = ppVar1;
      lVar6 = uVar5 - uVar4;
      if (uVar4 <= uVar5 && lVar6 != 0) {
        uVar5 = 0;
        do {
          bVar3 = (byte)uVar5 + (char)uVar4 * '\x02' + (char)uVar7 * -2 & 0x1e;
          uVar8 = uVar4 * 2 + uVar7 * -2 + uVar5 >> 5;
          _Dst->bits[uVar8] =
               (ppVar1->bits[uVar5 >> 5] >> ((byte)uVar5 & 0x1e) & 3) << bVar3 |
               ~(3 << bVar3) & _Dst->bits[uVar8];
          uVar5 = uVar5 + 2;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      LOCK();
      UNLOCK();
      param_1->instance = _Dst;
      if ((pas_small_other_fast_megapage_kind|pas_small_exclusive_segregated_fast_megapage_kind) <
          param_3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      bVar3 = (char)(param_2 - uVar7) * '\x02';
      uVar4 = param_2 - uVar7 >> 2 & 0x1ffffffffffffffc;
      *(pas_fast_megapage_kind *)((longlong)_Dst->bits + uVar4) =
           param_3 << (bVar3 & 0x1f) |
           ~(3 << (bVar3 & 0x1f)) & *(uint *)((longlong)_Dst->bits + uVar4);
    }
    if (param_4 == pas_lock_is_not_held) {
                    /* WARNING: Could not recover jumptable at 0x000140d84b41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
      return;
    }
  }
  return;
}

