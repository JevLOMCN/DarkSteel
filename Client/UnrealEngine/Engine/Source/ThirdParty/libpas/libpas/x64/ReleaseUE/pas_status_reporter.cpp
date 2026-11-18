// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 46

// pas_status_reporter_dump_bitfit_directory @ 140d69a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
pas_status_reporter_dump_bitfit_directory(pas_stream *param_1,pas_bitfit_directory *param_2)

{
  pas_bitfit_view *ppVar1;
  char cVar2;
  code *pcVar3;
  ulonglong uVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  char *pcVar8;
  ulong64 uVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_118 [32];
  pas_heap_summary local_f8;
  pas_heap_summary local_a0;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_118;
  iVar6 = *(int *)&param_2->config_kind << 0x18;
  if (iVar6 != 0) {
    if (2 < *(uint *)(pas_bitfit_page_config_kind_for_config_table[iVar6 >> 0x18] + 1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    pas_stream_printf(param_1,"            %s Global Dir (%p): ");
    pas_bitfit_directory_compute_summary(&local_f8,param_2);
    pas_heap_summary_dump(&local_f8,param_1);
    pas_stream_printf(param_1,"\n");
    if ((param_2->views).size != 0) {
      pas_stream_printf(param_1,"%s    Occupancy: ");
      if ((param_2->views).size != 0) {
        uVar13 = 0;
        do {
          while( true ) {
            uVar12 = (ulonglong)(param_2->views).spine.payload;
            lVar10 = pas_compact_heap_reservation_base + uVar12 * 8;
            if (uVar12 == 0) {
              lVar10 = 0;
            }
            uVar12 = (ulonglong)*(uint *)(lVar10 + (uVar13 >> 3) * 4);
            lVar10 = pas_compact_heap_reservation_base + uVar12 * 8;
            if (uVar12 == 0) {
              lVar10 = 0;
            }
            uVar12 = (ulonglong)*(uint *)(lVar10 + (ulonglong)((uint)uVar13 & 7) * 4);
            ppVar1 = (pas_bitfit_view *)(pas_compact_heap_reservation_base + uVar12 * 8);
            if (ppVar1 != (pas_bitfit_view *)0x0 && uVar12 != 0) break;
LAB_140d69af0:
            pcVar8 = " ";
LAB_140d69af6:
            pas_stream_printf(param_1,pcVar8);
            uVar13 = uVar13 + 1;
            if ((param_2->views).size <= uVar13) goto LAB_140d69bfa;
          }
          pas_bitfit_view_compute_summary(&local_a0,ppVar1);
          uVar12 = local_a0.allocated + local_a0.free;
          if (uVar12 == 0) goto LAB_140d69af0;
          if (local_a0.free != 0) {
            uVar4 = local_a0.allocated * 10;
            if ((uVar4 | uVar12) >> 0x20 == 0) {
              uVar7 = (uVar4 & 0xffffffff) / (uVar12 & 0xffffffff);
            }
            else {
              uVar7 = uVar4 / uVar12;
            }
            if (9 < uVar7) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            if (local_a0.allocated == 0 || uVar12 <= uVar4) {
              pcVar8 = "%zu";
              goto LAB_140d69be6;
            }
            pcVar8 = "e";
            goto LAB_140d69af6;
          }
          pcVar8 = "%s";
LAB_140d69be6:
          pas_stream_printf(param_1,pcVar8);
          uVar13 = uVar13 + 1;
        } while (uVar13 < (param_2->views).size);
      }
LAB_140d69bfa:
      pas_stream_printf(param_1,"\n");
      pas_stream_printf(param_1,"%s     Max Free: ");
      if ((param_2->views).size != 0) {
        uVar13 = 0;
        do {
          while( true ) {
            if ((param_2->max_frees).size <= uVar13) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            uVar12 = (ulonglong)(param_2->max_frees).spine.payload;
            lVar10 = pas_compact_heap_reservation_base + uVar12 * 8;
            if (uVar12 == 0) {
              lVar10 = 0;
            }
            uVar12 = (ulonglong)*(uint *)(lVar10 + (uVar13 >> 7) * 4);
            lVar10 = pas_compact_heap_reservation_base + uVar12 * 8;
            if (uVar12 == 0) {
              lVar10 = 0;
            }
            cVar2 = *(char *)(lVar10 + (ulonglong)((uint)uVar13 & 0x7f));
            if (cVar2 == -2) break;
            if (cVar2 == -1) {
              pcVar8 = "E";
            }
            else {
              pcVar8 = "e";
              if (0x18 < (byte)(cVar2 - 1U)) {
                pcVar8 = "%zu";
                goto LAB_140d69cf4;
              }
            }
            pas_stream_printf(param_1,pcVar8);
            uVar13 = uVar13 + 1;
            if ((param_2->views).size <= uVar13) goto LAB_140d69d08;
          }
          pcVar8 = "%s";
LAB_140d69cf4:
          pas_stream_printf(param_1,pcVar8);
          uVar13 = uVar13 + 1;
        } while (uVar13 < (param_2->views).size);
      }
LAB_140d69d08:
      pas_stream_printf(param_1,"\n");
      pas_stream_printf(param_1,"%s  Empty (bit): ");
      if ((param_2->views).size != 0) {
        uVar9 = 0;
        do {
          bVar5 = pas_bitfit_directory_get_empty_bit_at_index(param_2,uVar9);
          pcVar8 = " ";
          if (bVar5) {
            pcVar8 = "x";
          }
          pas_stream_printf(param_1,pcVar8);
          uVar9 = uVar9 + 1;
        } while (uVar9 < (param_2->views).size);
      }
      pas_stream_printf(param_1,"\n");
      pas_stream_printf(param_1,"%s Last Empty+1: ");
      for (uVar9 = (param_2->last_empty_plus_one).value; uVar9 != 0; uVar9 = uVar9 - 1) {
        pas_stream_printf(param_1," ");
      }
      pas_stream_printf(param_1,"^");
      pas_stream_printf(param_1,"\n");
      pas_stream_printf(param_1,"%s    Committed: ");
      if ((param_2->views).size != 0) {
        uVar13 = 0;
        do {
          uVar12 = (ulonglong)(param_2->views).spine.payload;
          lVar10 = pas_compact_heap_reservation_base + uVar12 * 8;
          if (uVar12 == 0) {
            lVar10 = 0;
          }
          uVar12 = (ulonglong)*(uint *)(lVar10 + (uVar13 >> 3) * 4);
          lVar10 = pas_compact_heap_reservation_base + uVar12 * 8;
          if (uVar12 == 0) {
            lVar10 = 0;
          }
          uVar12 = (ulonglong)*(uint *)(lVar10 + (ulonglong)((uint)uVar13 & 7) * 4);
          lVar10 = pas_compact_heap_reservation_base + uVar12 * 8;
          pcVar8 = " ";
          if ((lVar10 != 0 && uVar12 != 0) && (pcVar8 = "x", *(char *)(lVar10 + 0xb) == '\0')) {
            pcVar8 = " ";
          }
          pas_stream_printf(param_1,pcVar8);
          uVar13 = uVar13 + 1;
        } while (uVar13 < (param_2->views).size);
      }
      pas_stream_printf(param_1,"\n");
      uVar13 = (ulonglong)(param_2->largest_size_class).payload;
      plVar11 = (longlong *)(uVar13 * 8 + pas_compact_heap_reservation_base);
      if (plVar11 != (longlong *)0x0 && uVar13 != 0) {
        do {
          lVar10 = *plVar11;
          pas_stream_printf(param_1,"%s%7u Bytes: ");
          for (; lVar10 != 0; lVar10 = lVar10 + -1) {
            pas_stream_printf(param_1," ");
          }
          pas_stream_printf(param_1,"^");
          pas_stream_printf(param_1,"\n");
        } while (((ulonglong)*(uint *)((longlong)plVar11 + 0x14) != 0) &&
                (plVar11 = (longlong *)
                           ((ulonglong)*(uint *)((longlong)plVar11 + 0x14) * 8 +
                           pas_compact_heap_reservation_base), plVar11 != (longlong *)0x0));
      }
      pas_stream_printf(param_1,"%s  Unprocessed: ");
      for (uVar9 = (param_2->first_unprocessed_free).value; uVar9 != 0; uVar9 = uVar9 - 1) {
        pas_stream_printf(param_1," ");
      }
      pas_stream_printf(param_1,"^");
      pas_stream_printf(param_1,"\n");
      pas_stream_printf(param_1,"%s Empty (free): ");
      for (uVar9 = (param_2->first_empty).value; uVar9 != 0; uVar9 = uVar9 - 1) {
        pas_stream_printf(param_1," ");
      }
      pas_stream_printf(param_1,"^");
      pas_stream_printf(param_1,"\n");
    }
  }
  if ((local_48 ^ (ulonglong)auStack_118) != __security_cookie.value) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  return;
}

// pas_status_reporter_dump_segregated_size_directory @ 140d6a020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
pas_status_reporter_dump_segregated_size_directory
          (pas_stream *param_1,pas_segregated_size_directory *param_2)

{
  uint uVar1;
  code *pcVar2;
  ulong64 uVar3;
  pas_stream *ppVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulong64 uVar9;
  pas_segregated_view_opaque *ppVar10;
  ulong64 uVar11;
  ulong64 uVar12;
  ulong64 uVar13;
  ulong64 uVar14;
  undefined1 auStack_188 [32];
  char *local_168;
  ulong64 local_160;
  ulong64 local_158;
  ulong64 local_150;
  ulong64 local_148;
  ulong64 local_140;
  ulong64 local_138;
  ulong64 local_130;
  ulong64 local_128;
  ulong64 local_120;
  ulong64 local_118;
  ulong64 local_110;
  ulong64 local_108;
  ulong64 local_100;
  ulong64 local_f8;
  ulong64 local_f0;
  ulong64 local_e8;
  ulong64 local_e0;
  ulong64 local_d8;
  ulong64 local_d0;
  ulong64 local_c8;
  ulong64 local_c0;
  pas_stream *local_b8;
  pas_segregated_size_directory *local_b0;
  ulonglong local_a8;
  pas_heap_summary local_a0;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_188;
  uVar8 = (ulonglong)(param_2->base).first_view.payload;
  uVar9 = 0;
  uVar14 = pas_compact_heap_reservation_base;
  if (uVar8 < 8) {
    uVar14 = uVar9;
  }
  if (uVar14 + uVar8 != 0) {
    uVar1 = (param_2->base).data.payload;
    lVar6 = (ulonglong)uVar1 * 8 + pas_compact_heap_reservation_base;
    uVar9 = 1;
    if (lVar6 != 0 && uVar1 != 0) {
      uVar9 = (ulong64)(*(int *)(lVar6 + 0x30) + 1);
    }
  }
  local_168 = pas_segregated_page_config_kind_get_string
                        ((int)(char)(param_2->base).page_config_kind);
  local_160 = uVar9;
  pas_stream_printf(param_1,"            Global Size Dir %p(%u/%s): Num Views: %zu");
  uVar8 = (ulonglong)(param_2->base).data.payload;
  if ((uVar8 != 0) && (pas_compact_heap_reservation_base != uVar8 * -8)) {
    pas_stream_printf(param_1,", Has Base Data");
  }
  uVar8 = (ulonglong)(param_2->data).payload;
  if ((uVar8 != 0) && (pas_compact_heap_reservation_base != uVar8 * -8)) {
    pas_stream_printf(param_1,", Has Data");
  }
  if (param_2->allocator_index != 0) {
    pas_stream_printf(param_1,", Has TLA");
  }
  uVar8 = (ulonglong)(param_2->data).payload;
  lVar6 = uVar8 * 8 + pas_compact_heap_reservation_base;
  if ((lVar6 != 0 && uVar8 != 0) && (*(int *)(lVar6 + 8) != 0)) {
    pas_stream_printf(param_1,", Enabled Exclusives");
  }
  local_b8 = param_1;
  pas_stream_printf(param_1,"\n");
  uVar8 = (ulonglong)(param_2->base).first_view.payload;
  uVar9 = 0;
  uVar14 = pas_compact_heap_reservation_base;
  if (uVar8 < 8) {
    uVar14 = uVar9;
  }
  uVar12 = 0;
  uVar13 = 0;
  uVar11 = 0;
  local_d0 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_108 = 0;
  local_110 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_118 = 0;
  local_120 = 0;
  local_128 = 0;
  local_130 = 0;
  local_138 = 0;
  local_140 = 0;
  local_148 = 0;
  local_150 = 0;
  local_158 = 0;
  ppVar10 = (pas_segregated_view_opaque *)(uVar14 + uVar8);
  if (ppVar10 != (pas_segregated_view_opaque *)0x0) {
    uVar1 = (param_2->base).data.payload;
    lVar6 = (ulonglong)uVar1 * 8 + pas_compact_heap_reservation_base;
    if (lVar6 != 0 && uVar1 != 0) {
      if (*(int *)(lVar6 + 0x30) == -1) {
        uVar9 = 0;
        uVar12 = 0;
        uVar13 = 0;
        uVar11 = 0;
        local_d0 = 0;
        local_e8 = 0;
        local_f0 = 0;
        local_f8 = 0;
        local_100 = 0;
        local_108 = 0;
        local_110 = 0;
        local_d8 = 0;
        local_e0 = 0;
        local_118 = 0;
        local_120 = 0;
        local_128 = 0;
        local_130 = 0;
        local_138 = 0;
        local_140 = 0;
        local_148 = 0;
        local_150 = 0;
        local_158 = 0;
        goto LAB_140d6a770;
      }
      if (*(int *)(lVar6 + 0x30) == -1) {
LAB_140d6a9e4:
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    pas_segregated_view_compute_summary
              (&local_a0,ppVar10,
               (pas_segregated_page_config *)
               pas_segregated_page_config_kind_for_config_table
               [(char)(param_2->base).page_config_kind]);
    local_118 = local_a0.meta;
    local_120 = local_a0.committed;
    local_128 = local_a0.decommitted;
    local_130 = local_a0.free_ineligible_for_decommit;
    local_138 = local_a0.free_eligible_for_decommit;
    local_140 = local_a0.free_decommitted;
    local_148 = local_a0.meta_ineligible_for_decommit;
    local_150 = local_a0.meta_eligible_for_decommit;
    local_158 = local_a0.cached;
    if (((uint)ppVar10 & 7) == 4) {
      local_e0 = local_a0.allocated;
      local_d8 = local_a0.free;
      local_e8 = 0;
      local_f0 = 0;
      local_f8 = 0;
      local_100 = 0;
      local_108 = 0;
      local_110 = 0;
      local_d0 = 0;
      uVar11 = 0;
      uVar12 = 0;
      uVar13 = 0;
      uVar9 = 0;
    }
    else {
      if (((ulonglong)ppVar10 & 6) != 0) {
LAB_140d6a9e2:
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      local_e8 = local_a0.free_ineligible_for_decommit;
      local_f0 = local_a0.free_eligible_for_decommit;
      local_f8 = local_a0.free_decommitted;
      local_100 = local_a0.meta_ineligible_for_decommit;
      local_108 = local_a0.meta_eligible_for_decommit;
      local_110 = local_a0.cached;
      local_d8 = 0;
      local_e0 = 0;
      local_118 = 0;
      local_120 = 0;
      local_128 = 0;
      local_130 = 0;
      local_138 = 0;
      local_140 = 0;
      local_148 = 0;
      local_150 = 0;
      local_158 = 0;
      local_d0 = local_a0.decommitted;
      uVar11 = local_a0.committed;
      uVar12 = local_a0.allocated;
      uVar13 = local_a0.meta;
      uVar9 = local_a0.free;
    }
    uVar8 = (ulonglong)(param_2->base).first_view.payload;
    uVar14 = 0;
    if (7 < uVar8) {
      uVar14 = pas_compact_heap_reservation_base;
    }
    if (uVar14 + uVar8 != 0) {
      uVar8 = 1;
      local_b0 = param_2;
      do {
        uVar5 = (ulonglong)(local_b0->base).data.payload;
        param_2 = local_b0;
        if (((uVar5 == 0) || (lVar6 = pas_compact_heap_reservation_base + uVar5 * 8, lVar6 == 0)) ||
           (*(int *)(lVar6 + 0x30) + 1 <= uVar8)) break;
        local_c8 = uVar11;
        local_c0 = uVar13;
        if (*(int *)(lVar6 + 0x30) + 1 <= uVar8) goto LAB_140d6a9e4;
        lVar7 = pas_compact_heap_reservation_base + (ulonglong)*(uint *)(lVar6 + 0x2c) * 8;
        if ((ulonglong)*(uint *)(lVar6 + 0x2c) == 0) {
          lVar7 = 0;
        }
        uVar5 = (ulonglong)*(uint *)(lVar7 + -4 + uVar8 * 4);
        uVar14 = pas_compact_heap_reservation_base;
        if (uVar5 < 8) {
          uVar14 = 0;
        }
        ppVar10 = (pas_segregated_view_opaque *)(uVar14 + uVar5);
        local_a8 = uVar8;
        pas_segregated_view_compute_summary
                  (&local_a0,ppVar10,
                   (pas_segregated_page_config *)
                   pas_segregated_page_config_kind_for_config_table
                   [(char)(local_b0->base).page_config_kind]);
        if (((uint)ppVar10 & 7) == 4) {
          local_d8 = local_d8 + local_a0.free;
          local_e0 = local_e0 + local_a0.allocated;
          local_118 = local_118 + local_a0.meta;
          local_120 = local_120 + local_a0.committed;
          local_128 = local_128 + local_a0.decommitted;
          local_130 = local_130 + local_a0.free_ineligible_for_decommit;
          local_138 = local_138 + local_a0.free_eligible_for_decommit;
          local_140 = local_140 + local_a0.free_decommitted;
          local_148 = local_148 + local_a0.meta_ineligible_for_decommit;
          local_150 = local_150 + local_a0.meta_eligible_for_decommit;
          local_158 = local_158 + local_a0.cached;
          uVar11 = local_c8;
          uVar13 = local_c0;
        }
        else {
          if (((ulonglong)ppVar10 & 6) != 0) goto LAB_140d6a9e2;
          uVar9 = uVar9 + local_a0.free;
          uVar12 = uVar12 + local_a0.allocated;
          local_d0 = local_d0 + local_a0.decommitted;
          local_e8 = local_e8 + local_a0.free_ineligible_for_decommit;
          local_f0 = local_f0 + local_a0.free_eligible_for_decommit;
          local_f8 = local_f8 + local_a0.free_decommitted;
          local_100 = local_100 + local_a0.meta_ineligible_for_decommit;
          local_108 = local_108 + local_a0.meta_eligible_for_decommit;
          local_110 = local_110 + local_a0.cached;
          uVar11 = local_c8 + local_a0.committed;
          uVar13 = local_c0 + local_a0.meta;
        }
        uVar8 = local_a8 + 1;
        uVar5 = (ulonglong)(local_b0->base).first_view.payload;
        uVar14 = 0;
        if (7 < uVar5) {
          uVar14 = pas_compact_heap_reservation_base;
        }
        param_2 = local_b0;
      } while (uVar14 + uVar5 != 0);
    }
  }
LAB_140d6a770:
  ppVar4 = local_b8;
  uVar3 = local_d8;
  uVar14 = local_e0;
  if ((((local_d8 != 0) || (local_e0 != 0)) ||
      ((local_118 != 0 || ((local_120 != 0 || (local_128 != 0)))))) ||
     ((local_130 != 0 ||
      ((((local_138 != 0 || (local_140 != 0)) || (local_148 != 0)) ||
       ((local_150 != 0 || (local_158 != 0)))))))) {
    pas_stream_printf(local_b8,"                Partials: ");
    local_a0.free = uVar3;
    local_a0.allocated = uVar14;
    local_a0.meta = local_118;
    local_a0.committed = local_120;
    local_a0.decommitted = local_128;
    local_a0.free_ineligible_for_decommit = local_130;
    local_a0.free_eligible_for_decommit = local_138;
    local_a0.free_decommitted = local_140;
    local_a0.meta_ineligible_for_decommit = local_148;
    local_a0.meta_eligible_for_decommit = local_150;
    local_a0.cached = local_158;
    pas_heap_summary_dump(&local_a0,ppVar4);
    pas_stream_printf(ppVar4,"\n");
  }
  uVar3 = local_d0;
  uVar14 = local_e8;
  if (((uVar9 != 0) || (uVar12 != 0)) ||
     ((((uVar13 != 0 || (((uVar11 != 0 || (local_d0 != 0)) || (local_e8 != 0)))) ||
       (((local_f0 != 0 || (local_f8 != 0)) || (local_100 != 0)))) ||
      ((local_108 != 0 || (local_110 != 0)))))) {
    pas_stream_printf(ppVar4,"                Exclusives: ");
    local_a0.decommitted = uVar3;
    local_a0.free_ineligible_for_decommit = uVar14;
    local_a0.free_eligible_for_decommit = local_f0;
    local_a0.free_decommitted = local_f8;
    local_a0.meta_ineligible_for_decommit = local_100;
    local_a0.meta_eligible_for_decommit = local_108;
    local_a0.cached = local_110;
    local_a0.free = uVar9;
    local_a0.allocated = uVar12;
    local_a0.meta = uVar13;
    local_a0.committed = uVar11;
    pas_heap_summary_dump(&local_a0,ppVar4);
    pas_stream_printf(ppVar4,"\n");
  }
  report_segregated_directory_contents(ppVar4,&param_2->base,"                ");
  if ((local_48 ^ (ulonglong)auStack_188) == __security_cookie.value) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// report_segregated_directory_contents @ 140d6a9f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
report_segregated_directory_contents
          (pas_stream *param_1,pas_segregated_directory *param_2,char *param_3)

{
  uint uVar1;
  uint uVar2;
  pas_page_base_config *ppVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  ulong64 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  pas_segregated_view_opaque *ppVar16;
  char *pcVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  undefined1 auStack_c8 [40];
  pas_heap_summary local_a0;
  ulonglong local_48;
  ulong64 uVar11;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_c8;
  uVar18 = (ulonglong)(param_2->first_view).payload;
  uVar11 = 0;
  if (7 < uVar18) {
    uVar11 = pas_compact_heap_reservation_base;
  }
  if ((uVar11 + uVar18 == 0) ||
     ((uVar1 = (param_2->data).payload,
      lVar14 = (ulonglong)uVar1 * 8 + pas_compact_heap_reservation_base, lVar14 != 0 && uVar1 != 0
      && (*(int *)(lVar14 + 0x30) == -1)))) goto LAB_140d6b3e5;
  pas_stream_printf(param_1,"%s        Kind: ");
  uVar1 = (param_2->first_view).payload;
  uVar11 = 0;
  if (7 < (ulonglong)uVar1) {
    uVar11 = pas_compact_heap_reservation_base;
  }
  if (uVar11 + uVar1 != 0) {
    uVar2 = (param_2->data).payload;
    lVar14 = (ulonglong)uVar2 * 8 + pas_compact_heap_reservation_base;
    if (lVar14 != 0 && uVar2 != 0) {
      if (*(int *)(lVar14 + 0x30) == -1) goto LAB_140d6abc3;
      if (*(int *)(lVar14 + 0x30) == -1) {
LAB_140d6b5e3:
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      if (*(int *)(lVar14 + 0x30) == -1) {
LAB_140d6b5e5:
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
    }
    if (5 < ((int)uVar11 + uVar1 & 7)) {
LAB_140d6b5e1:
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    pas_stream_printf(param_1,"%c");
    uVar18 = (ulonglong)(param_2->first_view).payload;
    uVar11 = 0;
    if (7 < uVar18) {
      uVar11 = pas_compact_heap_reservation_base;
    }
    if (uVar11 + uVar18 != 0) {
      uVar18 = 1;
      do {
        uVar19 = (ulonglong)(param_2->data).payload;
        if (((uVar19 == 0) || (lVar14 = pas_compact_heap_reservation_base + uVar19 * 8, lVar14 == 0)
            ) || (*(int *)(lVar14 + 0x30) + 1 <= uVar18)) break;
        if (*(int *)(lVar14 + 0x30) + 1 <= uVar18) goto LAB_140d6b5e3;
        if (*(int *)(lVar14 + 0x30) + 1 <= uVar18) goto LAB_140d6b5e5;
        lVar15 = pas_compact_heap_reservation_base + (ulonglong)*(uint *)(lVar14 + 0x2c) * 8;
        if ((ulonglong)*(uint *)(lVar14 + 0x2c) == 0) {
          lVar15 = 0;
        }
        uVar1 = *(uint *)(lVar15 + -4 + uVar18 * 4);
        iVar6 = (int)pas_compact_heap_reservation_base;
        if (uVar1 < 8) {
          iVar6 = 0;
        }
        if (5 < (iVar6 + uVar1 & 7)) goto LAB_140d6b5e1;
        pas_stream_printf(param_1,"%c");
        uVar18 = uVar18 + 1;
        uVar19 = (ulonglong)(param_2->first_view).payload;
        uVar11 = pas_compact_heap_reservation_base;
        if (uVar19 < 8) {
          uVar11 = 0;
        }
      } while (uVar11 + uVar19 != 0);
    }
  }
LAB_140d6abc3:
  pas_stream_printf(param_1,"\n");
  pas_stream_printf(param_1,"%s   Occupancy: ");
  uVar18 = (ulonglong)(param_2->first_view).payload;
  uVar11 = 0;
  if (7 < uVar18) {
    uVar11 = pas_compact_heap_reservation_base;
  }
  ppVar16 = (pas_segregated_view_opaque *)(uVar11 + uVar18);
  if (ppVar16 != (pas_segregated_view_opaque *)0x0) {
    uVar1 = (param_2->data).payload;
    lVar14 = (ulonglong)uVar1 * 8 + pas_compact_heap_reservation_base;
    if (lVar14 != 0 && uVar1 != 0) {
      if (*(int *)(lVar14 + 0x30) == -1) goto LAB_140d6acfd;
      if (*(int *)(lVar14 + 0x30) == -1) {
LAB_140d6b5e7:
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
    }
    pas_segregated_view_compute_summary
              (&local_a0,ppVar16,
               (pas_segregated_page_config *)
               pas_segregated_page_config_kind_for_config_table[(char)param_2->page_config_kind]);
    uVar18 = local_a0.allocated + local_a0.free;
    if (uVar18 == 0) {
      pcVar17 = " ";
LAB_140d6acc5:
      pas_stream_printf(param_1,pcVar17);
    }
    else {
      if (local_a0.free == 0) {
        pcVar17 = "%s";
      }
      else {
        uVar19 = local_a0.allocated * 10;
        if ((uVar19 | uVar18) >> 0x20 == 0) {
          uVar7 = (uVar19 & 0xffffffff) / (uVar18 & 0xffffffff);
        }
        else {
          uVar7 = uVar19 / uVar18;
        }
        if (9 < uVar7) {
LAB_140d6b5d9:
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        if (local_a0.allocated != 0 && uVar19 < uVar18) {
          pcVar17 = "e";
          goto LAB_140d6acc5;
        }
        pcVar17 = "%zu";
      }
      pas_stream_printf(param_1,pcVar17);
    }
    uVar18 = (ulonglong)(param_2->first_view).payload;
    uVar11 = 0;
    if (7 < uVar18) {
      uVar11 = pas_compact_heap_reservation_base;
    }
    if (uVar11 + uVar18 != 0) {
      uVar18 = 1;
      do {
        uVar19 = (ulonglong)(param_2->data).payload;
        if (((uVar19 == 0) || (lVar14 = pas_compact_heap_reservation_base + uVar19 * 8, lVar14 == 0)
            ) || (*(int *)(lVar14 + 0x30) + 1 <= uVar18)) break;
        if (*(int *)(lVar14 + 0x30) + 1 <= uVar18) goto LAB_140d6b5e7;
        lVar15 = pas_compact_heap_reservation_base + (ulonglong)*(uint *)(lVar14 + 0x2c) * 8;
        if ((ulonglong)*(uint *)(lVar14 + 0x2c) == 0) {
          lVar15 = 0;
        }
        uVar19 = (ulonglong)*(uint *)(lVar15 + -4 + uVar18 * 4);
        uVar11 = pas_compact_heap_reservation_base;
        if (uVar19 < 8) {
          uVar11 = 0;
        }
        pas_segregated_view_compute_summary
                  (&local_a0,(pas_segregated_view_opaque *)(uVar11 + uVar19),
                   (pas_segregated_page_config *)
                   pas_segregated_page_config_kind_for_config_table[(char)param_2->page_config_kind]
                  );
        uVar19 = local_a0.allocated + local_a0.free;
        if (uVar19 == 0) {
          pcVar17 = " ";
LAB_140d6ae36:
          pas_stream_printf(param_1,pcVar17);
        }
        else {
          if (local_a0.free == 0) {
            pcVar17 = "%s";
          }
          else {
            uVar7 = local_a0.allocated * 10;
            if ((uVar7 | uVar19) >> 0x20 == 0) {
              uVar20 = (uVar7 & 0xffffffff) / (uVar19 & 0xffffffff);
            }
            else {
              uVar20 = uVar7 / uVar19;
            }
            if (9 < uVar20) goto LAB_140d6b5d9;
            if (local_a0.allocated != 0 && uVar7 < uVar19) {
              pcVar17 = "e";
              goto LAB_140d6ae36;
            }
            pcVar17 = "%zu";
          }
          pas_stream_printf(param_1,pcVar17);
        }
        uVar18 = uVar18 + 1;
        uVar19 = (ulonglong)(param_2->first_view).payload;
        uVar11 = 0;
        if (7 < uVar19) {
          uVar11 = pas_compact_heap_reservation_base;
        }
      } while (uVar11 + uVar19 != 0);
    }
  }
LAB_140d6acfd:
  pas_stream_printf(param_1,"\n");
  uVar1._0_1_ = param_2->page_config_kind;
  uVar1._1_1_ = param_2->sharing_mode;
  uVar1._2_1_ = param_2->directory_kind;
  uVar1._3_1_ = param_2->field_0xf;
  if ((uVar1 & 0xff0000) == 0x10000) {
    ppVar3 = pas_segregated_page_config_kind_for_config_table[(char)(undefined1)uVar1];
    lVar14 = 1L << (ppVar3->min_align_shift & 0x3f);
    uVar11 = ppVar3[1].page_size;
    uVar19 = (longlong)ppVar3[1].non_committable_granule_bitvector + uVar11;
    pas_stream_printf(param_1,"%s        Bump: ");
    uVar18 = (ulonglong)(param_2->first_view).payload;
    uVar8 = 0;
    if (7 < uVar18) {
      uVar8 = pas_compact_heap_reservation_base;
    }
    uVar18 = uVar8 + uVar18;
    if (uVar18 != 0) {
      uVar1 = (param_2->data).payload;
      lVar15 = (ulonglong)uVar1 * 8 + pas_compact_heap_reservation_base;
      if (lVar15 != 0 && uVar1 != 0) {
        if (*(int *)(lVar15 + 0x30) == -1) goto LAB_140d6af89;
        if (*(int *)(lVar15 + 0x30) == -1) {
LAB_140d6b5e9:
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
      }
      if (((uint)uVar18 & 7) != 2) {
LAB_140d6b5d7:
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      uVar7 = -lVar14 & (uVar11 + lVar14) - 1;
      uVar20 = uVar19 - uVar7;
      uVar18 = (ulonglong)*(uint *)((uVar18 & 0xfffffffffffffff8) + 0x20);
      if (uVar18 == 0) {
        pcVar17 = "0";
LAB_140d6af65:
        pas_stream_printf(param_1,pcVar17);
      }
      else {
        if (uVar18 < uVar7) {
LAB_140d6b5db:
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        if (uVar19 < uVar18) {
LAB_140d6b5dd:
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        if (uVar19 == uVar7) {
          pcVar17 = " ";
          goto LAB_140d6af65;
        }
        if (uVar19 == uVar18) {
          pas_stream_printf(param_1,"%s");
        }
        else {
          uVar10 = (uVar18 - uVar7) * 10;
          if ((uVar10 | uVar20) >> 0x20 == 0) {
            uVar13 = (uVar10 & 0xffffffff) / (uVar20 & 0xffffffff);
          }
          else {
            uVar13 = uVar10 / uVar20;
          }
          if (9 < uVar13) {
LAB_140d6b5df:
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          if ((uVar18 != uVar7) && (uVar10 < uVar20)) {
            pcVar17 = "e";
            goto LAB_140d6af65;
          }
          pas_stream_printf(param_1,"%zu");
        }
      }
      uVar18 = (ulonglong)(param_2->first_view).payload;
      uVar11 = 0;
      if (7 < uVar18) {
        uVar11 = pas_compact_heap_reservation_base;
      }
      if (uVar11 + uVar18 != 0) {
        uVar18 = 1;
        do {
          uVar10 = (ulonglong)(param_2->data).payload;
          if (((uVar10 == 0) ||
              (lVar14 = pas_compact_heap_reservation_base + uVar10 * 8, lVar14 == 0)) ||
             (*(int *)(lVar14 + 0x30) + 1 <= uVar18)) break;
          if (*(int *)(lVar14 + 0x30) + 1 <= uVar18) goto LAB_140d6b5e9;
          lVar15 = pas_compact_heap_reservation_base + (ulonglong)*(uint *)(lVar14 + 0x2c) * 8;
          if ((ulonglong)*(uint *)(lVar14 + 0x2c) == 0) {
            lVar15 = 0;
          }
          uVar10 = (ulonglong)*(uint *)(lVar15 + -4 + uVar18 * 4);
          uVar11 = pas_compact_heap_reservation_base;
          if (uVar10 < 8) {
            uVar11 = 0;
          }
          uVar10 = uVar11 + uVar10;
          if (((uint)uVar10 & 7) != 2) goto LAB_140d6b5d7;
          uVar10 = (ulonglong)*(uint *)((uVar10 & 0xfffffffffffffff8) + 0x20);
          if (uVar10 == 0) {
            pcVar17 = "0";
LAB_140d6b428:
            pas_stream_printf(param_1,pcVar17);
          }
          else {
            if (uVar10 < uVar7) goto LAB_140d6b5db;
            if (uVar19 < uVar10) goto LAB_140d6b5dd;
            if (uVar19 == uVar7) {
              pcVar17 = " ";
              goto LAB_140d6b428;
            }
            if (uVar19 == uVar10) {
              pcVar17 = "%s";
            }
            else {
              uVar13 = (uVar10 - uVar7) * 10;
              if ((uVar13 | uVar20) >> 0x20 == 0) {
                uVar12 = (uVar13 & 0xffffffff) / (uVar20 & 0xffffffff);
              }
              else {
                uVar12 = uVar13 / uVar20;
              }
              if (9 < uVar12) goto LAB_140d6b5df;
              if ((uVar10 != uVar7) && (uVar13 < uVar20)) {
                pcVar17 = "e";
                goto LAB_140d6b428;
              }
              pcVar17 = "%zu";
            }
            pas_stream_printf(param_1,pcVar17);
          }
          uVar18 = uVar18 + 1;
          uVar10 = (ulonglong)(param_2->first_view).payload;
          uVar11 = 0;
          if (7 < uVar10) {
            uVar11 = pas_compact_heap_reservation_base;
          }
        } while (uVar11 + uVar10 != 0);
      }
    }
LAB_140d6af89:
    pas_stream_printf(param_1,"\n");
  }
  pas_stream_printf(param_1,"%s    Eligible: ");
  uVar18 = (ulonglong)(param_2->first_view).payload;
  uVar11 = 0;
  if (7 < uVar18) {
    uVar11 = pas_compact_heap_reservation_base;
  }
  if ((uVar11 + uVar18 != 0) &&
     ((uVar1 = (param_2->data).payload,
      lVar14 = (ulonglong)uVar1 * 8 + pas_compact_heap_reservation_base, lVar14 == 0 || uVar1 == 0
      || (*(int *)(lVar14 + 0x30) != -1)))) {
    pcVar17 = "x";
    if ((param_2->bits & 1) == 0) {
      pcVar17 = " ";
    }
    pas_stream_printf(param_1,pcVar17);
    uVar18 = 0;
    while( true ) {
      uVar19 = (ulonglong)(param_2->first_view).payload;
      uVar11 = pas_compact_heap_reservation_base;
      if (uVar19 < 8) {
        uVar11 = 0;
      }
      uVar7 = 0;
      if (uVar11 + uVar19 != 0) {
        uVar1 = (param_2->data).payload;
        lVar14 = (ulonglong)uVar1 * 8 + pas_compact_heap_reservation_base;
        uVar7 = 1;
        if (lVar14 != 0 && uVar1 != 0) {
          uVar7 = (ulonglong)(*(int *)(lVar14 + 0x30) + 1);
        }
      }
      if (uVar7 <= uVar18 + 1) break;
      uVar19 = (ulonglong)
               *(uint *)(pas_compact_heap_reservation_base + 0x20 +
                        (ulonglong)(param_2->data).payload * 8);
      lVar14 = pas_compact_heap_reservation_base + uVar19 * 8;
      if (uVar19 == 0) {
        lVar14 = 0;
      }
      uVar19 = (ulonglong)*(uint *)(lVar14 + (uVar18 >> 7) * 4);
      lVar14 = pas_compact_heap_reservation_base + uVar19 * 8;
      if (uVar19 == 0) {
        lVar14 = 0;
      }
      pcVar17 = " ";
      if ((*(uint *)(lVar14 + (ulonglong)((uint)(uVar18 >> 2) & 0x18)) >> ((uint)uVar18 & 0x1f) & 1)
          != 0) {
        pcVar17 = "x";
      }
      pas_stream_printf(param_1,pcVar17);
      uVar18 = uVar18 + 1;
    }
  }
  pas_stream_printf(param_1,"\n");
  pas_stream_printf(param_1,"%s First Elgbl: ");
  uVar18 = (ulonglong)(param_2->data).payload;
  plVar9 = (longlong *)(uVar18 * 8 + pas_compact_heap_reservation_base);
  if (plVar9 != (longlong *)0x0 && uVar18 != 0) {
    lVar14 = plVar9[1];
    do {
      lVar15 = *plVar9;
      bVar5 = plVar9[1] == lVar14;
      lVar14 = plVar9[1];
      if (bVar5) goto joined_r0x000140d6b132;
    } while( true );
  }
  if (((param_2->bits & 1) == 0) && (lVar15 = 1, (param_2->first_view).payload != 0)) {
    do {
      pas_stream_printf(param_1," ");
      lVar15 = lVar15 + -1;
joined_r0x000140d6b132:
    } while (lVar15 != 0);
  }
  pas_stream_printf(param_1,"^");
  pas_stream_printf(param_1,"\n");
  pas_stream_printf(param_1,"%s       Empty: ");
  uVar18 = (ulonglong)(param_2->first_view).payload;
  uVar11 = 0;
  if (7 < uVar18) {
    uVar11 = pas_compact_heap_reservation_base;
  }
  if ((uVar11 + uVar18 != 0) &&
     ((uVar1 = (param_2->data).payload,
      lVar14 = (ulonglong)uVar1 * 8 + pas_compact_heap_reservation_base, lVar14 == 0 || uVar1 == 0
      || (*(int *)(lVar14 + 0x30) != -1)))) {
    pcVar17 = "x";
    if ((param_2->bits & 2) == 0) {
      pcVar17 = " ";
    }
    pas_stream_printf(param_1,pcVar17);
    uVar18 = 0;
    while( true ) {
      uVar19 = (ulonglong)(param_2->first_view).payload;
      uVar11 = pas_compact_heap_reservation_base;
      if (uVar19 < 8) {
        uVar11 = 0;
      }
      uVar7 = 0;
      if (uVar11 + uVar19 != 0) {
        uVar1 = (param_2->data).payload;
        lVar14 = (ulonglong)uVar1 * 8 + pas_compact_heap_reservation_base;
        uVar7 = 1;
        if (lVar14 != 0 && uVar1 != 0) {
          uVar7 = (ulonglong)(*(int *)(lVar14 + 0x30) + 1);
        }
      }
      if (uVar7 <= uVar18 + 1) break;
      uVar19 = (ulonglong)
               *(uint *)(pas_compact_heap_reservation_base + 0x20 +
                        (ulonglong)(param_2->data).payload * 8);
      lVar14 = pas_compact_heap_reservation_base + uVar19 * 8;
      if (uVar19 == 0) {
        lVar14 = 0;
      }
      uVar19 = (ulonglong)*(uint *)(lVar14 + (uVar18 >> 7) * 4);
      lVar14 = pas_compact_heap_reservation_base + uVar19 * 8;
      if (uVar19 == 0) {
        lVar14 = 0;
      }
      pcVar17 = " ";
      if ((*(uint *)(lVar14 + 4 + (ulonglong)((uint)(uVar18 >> 2) & 0x18)) >> ((uint)uVar18 & 0x1f)
          & 1) != 0) {
        pcVar17 = "x";
      }
      pas_stream_printf(param_1,pcVar17);
      uVar18 = uVar18 + 1;
    }
  }
  pas_stream_printf(param_1,"\n");
  pas_stream_printf(param_1,"%s Last Empt+1: ");
  uVar18 = (ulonglong)(param_2->data).payload;
  lVar14 = uVar18 * 8 + pas_compact_heap_reservation_base;
  if (lVar14 != 0 && uVar18 != 0) {
    lVar15 = *(longlong *)(lVar14 + 0x18);
    do {
      lVar21 = *(longlong *)(lVar14 + 0x10);
      bVar5 = *(longlong *)(lVar14 + 0x18) == lVar15;
      lVar15 = *(longlong *)(lVar14 + 0x18);
      if (bVar5) goto joined_r0x000140d6b303;
    } while( true );
  }
  lVar21 = 1;
  if ((param_2->bits & 2) != 0) {
    do {
      pas_stream_printf(param_1," ");
      lVar21 = lVar21 + -1;
joined_r0x000140d6b303:
    } while (lVar21 != 0);
  }
  pas_stream_printf(param_1,"^");
  pas_stream_printf(param_1,"\n");
  pas_stream_printf(param_1,"%s   Committed: ");
  uVar18 = 0;
  while( true ) {
    uVar19 = (ulonglong)(param_2->first_view).payload;
    uVar11 = pas_compact_heap_reservation_base;
    if (uVar19 < 8) {
      uVar11 = 0;
    }
    uVar7 = 0;
    if (uVar11 + uVar19 != 0) {
      uVar1 = (param_2->data).payload;
      lVar14 = (ulonglong)uVar1 * 8 + pas_compact_heap_reservation_base;
      uVar7 = 1;
      if (lVar14 != 0 && uVar1 != 0) {
        uVar7 = (ulonglong)(*(int *)(lVar14 + 0x30) + 1);
      }
    }
    if (uVar7 <= uVar18) break;
    bVar5 = pas_segregated_directory_is_committed(param_2,uVar18);
    pcVar17 = " ";
    if (bVar5) {
      pcVar17 = "x";
    }
    pas_stream_printf(param_1,pcVar17);
    uVar18 = uVar18 + 1;
  }
  pas_stream_printf(param_1,"\n");
LAB_140d6b3e5:
  if ((local_48 ^ (ulonglong)auStack_c8) != __security_cookie.value) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  return;
}

// pas_status_reporter_dump_segregated_shared_page_directory @ 140d6b600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
pas_status_reporter_dump_segregated_shared_page_directory
          (pas_stream *param_1,pas_segregated_shared_page_directory *param_2)

{
  code *pcVar1;
  undefined1 auStack_e8 [32];
  pas_heap_summary local_c8;
  pas_heap_summary local_70;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pas_segregated_page_config_kind_get_string((int)(char)(param_2->base).page_config_kind);
  pas_stream_printf(param_1,"        Shared Page Dir %p(%s, ");
  (*pas_segregated_page_config_kind_for_config_table[(char)(param_2->base).page_config_kind]->
    heap_config_ptr->dump_shared_page_directory_arg)(param_1,param_2);
  pas_stream_printf(param_1,"): Num Views: %zu, ");
  pas_segregated_directory_compute_summary(&local_70,&param_2->base);
  local_c8.cached = local_70.cached;
  local_c8.meta_ineligible_for_decommit = local_70.meta_ineligible_for_decommit;
  local_c8.meta_eligible_for_decommit = local_70.meta_eligible_for_decommit;
  local_c8.free_eligible_for_decommit = local_70.free_eligible_for_decommit;
  local_c8.free_decommitted = local_70.free_decommitted;
  local_c8.decommitted = local_70.decommitted;
  local_c8.free_ineligible_for_decommit = local_70.free_ineligible_for_decommit;
  local_c8.meta = local_70.meta;
  local_c8.committed = local_70.committed;
  local_c8.free = local_70.free;
  local_c8.allocated = local_70.allocated;
  pas_heap_summary_dump(&local_c8,param_1);
  pas_stream_printf(param_1,"\n");
  if (2 < pas_status_reporter_enabled) {
    report_segregated_directory_contents(param_1,&param_2->base,"            ");
  }
  if ((local_18 ^ (ulonglong)auStack_e8) != __security_cookie.value) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// pas_status_reporter_dump_large_heap @ 140d6b770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl pas_status_reporter_dump_large_heap(pas_stream *param_1,pas_large_heap *param_2)

{
  code *pcVar1;
  undefined1 auStack_e8 [32];
  pas_heap_summary local_c8;
  pas_heap_summary local_70;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pas_stream_printf(param_1,"Large %p: ");
  pas_large_heap_compute_summary(&local_70,param_2);
  local_c8.cached = local_70.cached;
  local_c8.meta_ineligible_for_decommit = local_70.meta_ineligible_for_decommit;
  local_c8.meta_eligible_for_decommit = local_70.meta_eligible_for_decommit;
  local_c8.free_eligible_for_decommit = local_70.free_eligible_for_decommit;
  local_c8.free_decommitted = local_70.free_decommitted;
  local_c8.decommitted = local_70.decommitted;
  local_c8.free_ineligible_for_decommit = local_70.free_ineligible_for_decommit;
  local_c8.meta = local_70.meta;
  local_c8.committed = local_70.committed;
  local_c8.free = local_70.free;
  local_c8.allocated = local_70.allocated;
  pas_heap_summary_dump(&local_c8,param_1);
  if ((local_18 ^ (ulonglong)auStack_e8) == __security_cookie.value) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// pas_status_reporter_dump_large_map @ 140d6b830

void __cdecl pas_status_reporter_dump_large_map(pas_stream *param_1)

{
  pas_stream_printf(param_1,"    Large Map: Num Entries: %u, Num Deleted: %u, Table Size: %u\n");
  return;
}

// pas_status_reporter_dump_immortal_heap @ 140d6b870

void __cdecl pas_status_reporter_dump_immortal_heap(pas_stream *param_1)

{
  pas_stream_printf(param_1,"Alloc Internal: %zu, External: %zu");
  return;
}

// pas_status_reporter_dump_large_utility_free_heap @ 140d6b8a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl pas_status_reporter_dump_large_utility_free_heap(pas_stream *param_1)

{
  code *pcVar1;
  undefined1 auStack_e8 [32];
  pas_heap_summary local_c8;
  pas_heap_summary local_68;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pas_large_utility_free_heap_compute_summary(&local_68);
  local_c8.cached = local_68.cached;
  local_c8.meta_ineligible_for_decommit = local_68.meta_ineligible_for_decommit;
  local_c8.meta_eligible_for_decommit = local_68.meta_eligible_for_decommit;
  local_c8.free_eligible_for_decommit = local_68.free_eligible_for_decommit;
  local_c8.free_decommitted = local_68.free_decommitted;
  local_c8.decommitted = local_68.decommitted;
  local_c8.free_ineligible_for_decommit = local_68.free_ineligible_for_decommit;
  local_c8.meta = local_68.meta;
  local_c8.committed = local_68.committed;
  local_c8.free = local_68.free;
  local_c8.allocated = local_68.allocated;
  pas_heap_summary_dump(&local_c8,param_1);
  if ((local_10 ^ (ulonglong)auStack_e8) == __security_cookie.value) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// pas_status_reporter_dump_compact_reservation_free_heap @ 140d6b950

void __cdecl pas_status_reporter_dump_compact_reservation_free_heap(pas_stream *param_1)

{
  pas_simple_large_free_heap_get_num_free_bytes(&pas_compact_reservation_free_heap);
  pas_stream_printf(param_1,"Mapped: %zu, Free: %zu");
  return;
}

// pas_status_reporter_dump_reservation_free_heap @ 140d6b990

void __cdecl pas_status_reporter_dump_reservation_free_heap(pas_stream *param_1)

{
  pas_simple_large_free_heap_get_num_free_bytes(&pas_reservation_free_heap);
  pas_stream_printf(param_1,"Mapped: %zu, Free: %zu");
  return;
}

// pas_status_reporter_dump_global_physical_page_sharing_cache @ 140d6b9d0

void __cdecl pas_status_reporter_dump_global_physical_page_sharing_cache(pas_stream *param_1)

{
  pas_simple_large_free_heap_get_num_free_bytes(&pas_global_physical_page_sharing_cache);
  pas_stream_printf(param_1,"Mapped: %zu, Free: %zu");
  return;
}

// pas_status_reporter_dump_bootstrap_free_heap @ 140d6ba10

void __cdecl pas_status_reporter_dump_bootstrap_free_heap(pas_stream *param_1)

{
  pas_bootstrap_free_heap_get_num_decommitted_bytes();
  pas_bootstrap_free_heap_get_num_free_bytes();
  pas_stream_printf(param_1,"Alloc: %zu, Peak Alloc: %zu, Mapped: %zu, Free: %zu, Decommitted: %zu")
  ;
  return;
}

// pas_status_reporter_dump_bitfit_heap @ 140d6ba70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl pas_status_reporter_dump_bitfit_heap(pas_stream *param_1,pas_bitfit_heap *param_2)

{
  code *pcVar1;
  undefined1 auStack_98 [32];
  pas_heap_summary local_78;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_98;
  pas_stream_printf(param_1,"        Bitfit Heap %p: ");
  pas_bitfit_heap_compute_summary(&local_78,param_2);
  pas_heap_summary_dump(&local_78,param_1);
  pas_stream_printf(param_1,"\n");
  if (2 < pas_status_reporter_enabled) {
    pas_status_reporter_dump_bitfit_directory(param_1,param_2->directories);
    pas_status_reporter_dump_bitfit_directory(param_1,param_2->directories + 1);
    pas_status_reporter_dump_bitfit_directory(param_1,param_2->directories + 2);
  }
  if ((local_20 ^ (ulonglong)auStack_98) == __security_cookie.value) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// pas_status_reporter_dump_segregated_heap @ 140d6bb30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
pas_status_reporter_dump_segregated_heap(pas_stream *param_1,pas_segregated_heap *param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  pas_bitfit_heap *ppVar3;
  undefined1 auStack_e8 [32];
  pas_heap_summary local_c8;
  pas_heap_summary local_70;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pas_stream_printf(param_1,"        Segregated Heap %p: ");
  uVar2 = (ulonglong)(param_2->rare_data).payload;
  if ((uVar2 == 0) || (pas_compact_heap_reservation_base == uVar2 * -8)) {
    if (param_2->index_to_small_size_directory ==
        (pas_compact_atomic_segregated_size_directory_ptr *)0x0) goto LAB_140d6bbbc;
  }
  else {
    pas_stream_printf(param_1,"Has Rare Data");
    if (param_2->index_to_small_size_directory ==
        (pas_compact_atomic_segregated_size_directory_ptr *)0x0) goto LAB_140d6bbbc;
    pas_stream_printf(param_1,"%s");
  }
  pas_stream_printf(param_1,"Has Index Lookup");
LAB_140d6bbbc:
  pas_stream_printf(param_1,": ");
  pas_segregated_heap_compute_summary(&local_70,param_2);
  local_c8.cached = local_70.cached;
  local_c8.meta_ineligible_for_decommit = local_70.meta_ineligible_for_decommit;
  local_c8.meta_eligible_for_decommit = local_70.meta_eligible_for_decommit;
  local_c8.free_eligible_for_decommit = local_70.free_eligible_for_decommit;
  local_c8.free_decommitted = local_70.free_decommitted;
  local_c8.decommitted = local_70.decommitted;
  local_c8.free_ineligible_for_decommit = local_70.free_ineligible_for_decommit;
  local_c8.meta = local_70.meta;
  local_c8.committed = local_70.committed;
  local_c8.free = local_70.free;
  local_c8.allocated = local_70.allocated;
  pas_heap_summary_dump(&local_c8,param_1);
  pas_stream_printf(param_1,"\n");
  if (2 < pas_status_reporter_enabled) {
    pas_segregated_heap_for_each_size_directory
              (param_2,dump_segregated_heap_directory_callback,param_1);
  }
  uVar2 = (ulonglong)(param_2->bitfit_heap).payload;
  ppVar3 = (pas_bitfit_heap *)(uVar2 * 8 + pas_compact_heap_reservation_base);
  if (ppVar3 != (pas_bitfit_heap *)0x0 && uVar2 != 0) {
    pas_status_reporter_dump_bitfit_heap(param_1,ppVar3);
  }
  if ((local_18 ^ (ulonglong)auStack_e8) == __security_cookie.value) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// dump_segregated_heap_directory_callback @ 140d6bcb0

bool __cdecl
dump_segregated_heap_directory_callback
          (pas_segregated_heap *param_1,pas_segregated_size_directory *param_2,void *param_3)

{
  pas_status_reporter_dump_segregated_size_directory(param_3,param_2);
  return true;
}

// pas_status_reporter_dump_heap @ 140d6bcd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl pas_status_reporter_dump_heap(pas_stream *param_1,pas_heap *param_2)

{
  pas_heap_config *ppVar1;
  code *pcVar2;
  undefined1 auStack_158 [40];
  pas_heap_summary local_130;
  pas_heap_summary local_d8;
  pas_heap_summary local_78;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_158;
  ppVar1 = pas_heap_config_kind_for_config_table
           [(longlong)((ulonglong)*(uint *)&param_2->field_0x4c << 0x3a) >> 0x3a];
  pas_stream_printf(param_1,"    Heap %p:\n");
  pas_heap_config_kind_get_string((*(int *)&param_2->field_0x4c << 0x1a) >> 0x1a);
  pas_stream_printf(param_1,"        %s, ");
  (*ppVar1->dump_type)(param_2->type,param_1);
  pas_stream_printf(param_1,"\n");
  pas_heap_compute_summary(&local_130,param_2,pas_lock_is_held);
  pas_stream_printf(param_1,"        Total Summary: ");
  local_78.cached = local_130.cached;
  local_78.meta_ineligible_for_decommit = local_130.meta_ineligible_for_decommit;
  local_78.meta_eligible_for_decommit = local_130.meta_eligible_for_decommit;
  local_78.free_eligible_for_decommit = local_130.free_eligible_for_decommit;
  local_78.free_decommitted = local_130.free_decommitted;
  local_78.decommitted = local_130.decommitted;
  local_78.free_ineligible_for_decommit = local_130.free_ineligible_for_decommit;
  local_78.meta = local_130.meta;
  local_78.committed = local_130.committed;
  local_78.free = local_130.free;
  local_78.allocated = local_130.allocated;
  pas_heap_summary_dump(&local_78,param_1);
  pas_stream_printf(param_1,"\n");
  pas_status_reporter_dump_segregated_heap(param_1,&param_2->segregated_heap);
  pas_stream_printf(param_1,"        ");
  pas_stream_printf(param_1,"Large %p: ");
  pas_large_heap_compute_summary(&local_78,&param_2->large_heap);
  local_d8.cached = local_78.cached;
  local_d8.meta_ineligible_for_decommit = local_78.meta_ineligible_for_decommit;
  local_d8.meta_eligible_for_decommit = local_78.meta_eligible_for_decommit;
  local_d8.free_eligible_for_decommit = local_78.free_eligible_for_decommit;
  local_d8.free_decommitted = local_78.free_decommitted;
  local_d8.decommitted = local_78.decommitted;
  local_d8.free_ineligible_for_decommit = local_78.free_ineligible_for_decommit;
  local_d8.meta = local_78.meta;
  local_d8.committed = local_78.committed;
  local_d8.free = local_78.free;
  local_d8.allocated = local_78.allocated;
  pas_heap_summary_dump(&local_d8,param_1);
  pas_stream_printf(param_1,"\n");
  if ((local_20 ^ (ulonglong)auStack_158) == __security_cookie.value) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// pas_status_reporter_dump_all_heaps @ 140d6bed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl pas_status_reporter_dump_all_heaps(pas_stream *param_1)

{
  code *pcVar1;
  undefined1 auStack_48 [40];
  pas_stream *local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  local_18 = 0;
  local_20 = param_1;
  pas_all_heaps_for_each_heap(dump_all_heaps_heap_callback,&local_20);
  pas_stream_printf(param_1,"    Num Heaps: %zu\n");
  if ((local_10 ^ (ulonglong)auStack_48) == __security_cookie.value) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// dump_all_heaps_heap_callback @ 140d6bf40

bool __cdecl dump_all_heaps_heap_callback(pas_heap *param_1,void *param_2)

{
  pas_status_reporter_dump_heap(*(pas_stream **)param_2,param_1);
  *(longlong *)((longlong)param_2 + 8) = *(longlong *)((longlong)param_2 + 8) + 1;
  return true;
}

// pas_status_reporter_dump_all_shared_page_directories @ 140d6bf70

void __cdecl pas_status_reporter_dump_all_shared_page_directories(pas_stream *param_1)

{
  pas_stream_printf(param_1,"    Shared Page Directories:\n");
  pas_all_shared_page_directories_for_each
            (dump_all_shared_page_directories_directory_callback,param_1);
  return;
}

// dump_all_shared_page_directories_directory_callback @ 140d6bfa0

bool __cdecl
dump_all_shared_page_directories_directory_callback
          (pas_segregated_shared_page_directory *param_1,void *param_2)

{
  pas_status_reporter_dump_segregated_shared_page_directory(param_2,param_1);
  return true;
}

// pas_status_reporter_dump_all_heaps_non_utility_summaries @ 140d6bfc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl pas_status_reporter_dump_all_heaps_non_utility_summaries(pas_stream *param_1)

{
  code *pcVar1;
  undefined1 auStack_148 [32];
  pas_heap_summary local_128;
  pas_heap_summary local_d0;
  pas_heap_summary local_78;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_148;
  pas_stream_printf(param_1,"    All Heaps Non-Utility Segregated Summary: ");
  pas_all_heaps_compute_total_non_utility_segregated_summary(&local_78);
  pas_heap_summary_dump(&local_78,param_1);
  pas_stream_printf(param_1,"\n");
  pas_stream_printf(param_1,"    All Heaps Non-Utility Bitfit Summary: ");
  pas_all_heaps_compute_total_non_utility_bitfit_summary(&local_d0);
  pas_heap_summary_dump(&local_d0,param_1);
  pas_stream_printf(param_1,"\n");
  pas_stream_printf(param_1,"    All Heaps Non-Utility Large Summary: ");
  pas_all_heaps_compute_total_non_utility_large_summary(&local_128);
  pas_heap_summary_dump(&local_128,param_1);
  pas_stream_printf(param_1,"\n");
  if ((local_20 ^ (ulonglong)auStack_148) == __security_cookie.value) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// pas_status_reporter_dump_large_sharing_pool @ 140d6c0b0

void __cdecl pas_status_reporter_dump_large_sharing_pool(pas_stream *param_1)

{
  pas_stream_printf(param_1,"    Large sharing pool contents:\n");
  pas_large_sharing_pool_for_each(dump_large_sharing_pool_node_callback,param_1,pas_lock_is_held);
  return;
}

// dump_large_sharing_pool_node_callback @ 140d6c0f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl dump_large_sharing_pool_node_callback(pas_large_sharing_node *param_1,void *param_2)

{
  uint uVar1;
  code *pcVar2;
  
  if ((param_1->range).end < (param_1->range).begin) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  pas_stream_printf(param_2,"        %p...%p: %s, %zu/%zu live (%.0lf%%), %llu");
  uVar1 = *(uint *)&param_1->field_0xc;
  if (ZPULL(uVar1,2,1) == 0) {
    pas_stream_printf(param_2,", %s");
    uVar1 = *(uint *)&param_1->field_0xc;
  }
  if ((uVar1 & 8) == 0) {
    pas_stream_printf(param_2,", %s");
    uVar1 = *(uint *)&param_1->field_0xc;
  }
  if ((uVar1 & 1) == 0) {
    pas_stream_printf(param_2,", %s");
  }
  pas_stream_printf(param_2,"\n");
  return true;
}

// pas_status_reporter_dump_utility_heap @ 140d6c230

void __cdecl pas_status_reporter_dump_utility_heap(pas_stream *param_1)

{
  pas_stream_printf(param_1,"    Utility Heap:\n");
  pas_status_reporter_dump_segregated_heap(param_1,&pas_utility_segregated_heap);
  return;
}

// pas_status_reporter_dump_total_fragmentation @ 140d6c260

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl pas_status_reporter_dump_total_fragmentation(pas_stream *param_1)

{
  code *pcVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined1 auStack_10d8 [32];
  longlong local_10b8;
  pas_heap_summary local_10a8;
  longlong local_1050 [257];
  longlong local_848 [259];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_10d8;
  plVar2 = local_1050;
  memset(plVar2,0,0x1028);
  pas_all_heaps_for_each_heap(total_fragmentation_heap_callback,plVar2);
  pas_all_shared_page_directories_for_each
            (total_fragmentation_shared_page_directory_callback,plVar2);
  pas_segregated_heap_for_each_size_directory
            (&pas_utility_segregated_heap,total_fragmentation_size_directory_callback,plVar2);
  pas_large_utility_free_heap_compute_summary(&local_10a8);
  local_30 = local_30 +
             local_10a8.meta_ineligible_for_decommit + local_10a8.free_ineligible_for_decommit;
  pas_stream_printf(param_1,"    Segregated Exclusive Fragmentation Histogram:\n");
  uVar3 = 0xffffffffffffff00;
  do {
    uVar3 = uVar3 + 0x100;
    if (*plVar2 != 0) {
      local_10b8 = *plVar2;
      pas_stream_printf(param_1,"        %zu..%zu: %zu\n");
    }
    plVar2 = plVar2 + 1;
  } while (uVar3 < 0xff01);
  pas_stream_printf(param_1,"    Segregated Partial Fragmentation Histogram:\n");
  uVar3 = 0xffffffffffffff00;
  plVar2 = local_848;
  do {
    uVar3 = uVar3 + 0x100;
    if (*plVar2 != 0) {
      local_10b8 = *plVar2;
      pas_stream_printf(param_1,"        %zu..%zu: %zu\n");
    }
    plVar2 = plVar2 + 1;
  } while (uVar3 < 0xff01);
  pas_stream_printf(param_1,"    Segregated Exclusive Fragmentation: %zu\n");
  pas_stream_printf(param_1,"    Segregated Shared Fragmentation: %zu\n");
  pas_stream_printf(param_1,"    Total Segregated Fragmentation: %zu\n");
  pas_stream_printf(param_1,"    Large Fragmentation: %zu\n");
  pas_stream_printf(param_1,"    Total Fragmentation: %zu\n");
  if ((local_28 ^ (ulonglong)auStack_10d8) == __security_cookie.value) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// total_fragmentation_heap_callback @ 140d6c480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl total_fragmentation_heap_callback(pas_heap *param_1,void *param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined1 auStack_98 [40];
  pas_heap_summary local_70;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  pas_segregated_heap_for_each_size_directory
            (&param_1->segregated_heap,total_fragmentation_size_directory_callback,param_2);
  pas_large_heap_compute_summary(&local_70,&param_1->large_heap);
  *(longlong *)((longlong)param_2 + 0x1020) =
       *(longlong *)((longlong)param_2 + 0x1020) +
       local_70.meta_ineligible_for_decommit + local_70.free_ineligible_for_decommit;
  if ((local_18 ^ (ulonglong)auStack_98) == __security_cookie.value) {
    return true;
  }
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return (bool)uVar2;
}

// total_fragmentation_shared_page_directory_callback @ 140d6c500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
total_fragmentation_shared_page_directory_callback
          (pas_segregated_shared_page_directory *param_1,void *param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined1 auStack_88 [32];
  pas_heap_summary local_68;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_88;
  pas_segregated_directory_compute_summary(&local_68,&param_1->base);
  *(longlong *)((longlong)param_2 + 0x1018) =
       *(longlong *)((longlong)param_2 + 0x1018) +
       local_68.meta_ineligible_for_decommit + local_68.free_ineligible_for_decommit;
  if ((local_10 ^ (ulonglong)auStack_88) == __security_cookie.value) {
    return true;
  }
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return (bool)uVar2;
}

// total_fragmentation_size_directory_callback @ 140d6c560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
total_fragmentation_size_directory_callback
          (pas_segregated_heap *param_1,pas_segregated_size_directory *param_2,void *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  undefined1 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulong64 uVar7;
  longlong lVar8;
  void *pvVar9;
  pas_segregated_view_opaque *ppVar10;
  ulonglong uVar11;
  undefined1 auStack_c8 [40];
  pas_heap_summary local_a0;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_c8;
  uVar11 = (ulonglong)(param_2->base).first_view.payload;
  uVar7 = 0;
  if (7 < uVar11) {
    uVar7 = pas_compact_heap_reservation_base;
  }
  ppVar10 = (pas_segregated_view_opaque *)(uVar7 + uVar11);
  if (ppVar10 != (pas_segregated_view_opaque *)0x0) {
    uVar6 = (param_2->base).data.payload;
    lVar4 = (ulonglong)uVar6 * 8 + pas_compact_heap_reservation_base;
    if (lVar4 != 0 && uVar6 != 0) {
      if (*(int *)(lVar4 + 0x30) == -1) goto LAB_140d6c667;
      if (*(int *)(lVar4 + 0x30) == -1) {
LAB_140d6c798:
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    pas_segregated_view_compute_summary
              (&local_a0,ppVar10,
               (pas_segregated_page_config *)
               pas_segregated_page_config_kind_for_config_table
               [(char)(param_2->base).page_config_kind]);
    if (((ulonglong)ppVar10 & 6) == 0) {
      *(longlong *)((longlong)param_3 + 0x1010) =
           *(longlong *)((longlong)param_3 + 0x1010) +
           local_a0.meta_ineligible_for_decommit + local_a0.free_ineligible_for_decommit;
      uVar6 = param_2->object_size;
      pvVar9 = param_3;
      if (0x10000 < uVar6) {
LAB_140d6c796:
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    else {
      if (((uint)ppVar10 & 7) != 4) {
LAB_140d6c794:
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar6 = param_2->object_size;
      pvVar9 = (void *)((longlong)param_3 + 0x808);
      if (0x10000 < uVar6) {
LAB_140d6c792:
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    plVar1 = (longlong *)((longlong)pvVar9 + (ulonglong)(uVar6 >> 8) * 8);
    *plVar1 = *plVar1 + local_a0.meta_ineligible_for_decommit +
                        local_a0.free_ineligible_for_decommit;
    uVar11 = (ulonglong)(param_2->base).first_view.payload;
    uVar7 = 0;
    if (7 < uVar11) {
      uVar7 = pas_compact_heap_reservation_base;
    }
    if (uVar7 + uVar11 != 0) {
      uVar11 = 1;
      do {
        uVar5 = (ulonglong)(param_2->base).data.payload;
        if (((uVar5 == 0) || (lVar4 = pas_compact_heap_reservation_base + uVar5 * 8, lVar4 == 0)) ||
           (*(int *)(lVar4 + 0x30) + 1 <= uVar11)) break;
        if (*(int *)(lVar4 + 0x30) + 1 <= uVar11) goto LAB_140d6c798;
        lVar8 = pas_compact_heap_reservation_base + (ulonglong)*(uint *)(lVar4 + 0x2c) * 8;
        if ((ulonglong)*(uint *)(lVar4 + 0x2c) == 0) {
          lVar8 = 0;
        }
        uVar5 = (ulonglong)*(uint *)(lVar8 + -4 + uVar11 * 4);
        uVar7 = pas_compact_heap_reservation_base;
        if (uVar5 < 8) {
          uVar7 = 0;
        }
        ppVar10 = (pas_segregated_view_opaque *)(uVar7 + uVar5);
        pas_segregated_view_compute_summary
                  (&local_a0,ppVar10,
                   (pas_segregated_page_config *)
                   pas_segregated_page_config_kind_for_config_table
                   [(char)(param_2->base).page_config_kind]);
        if (((ulonglong)ppVar10 & 6) == 0) {
          *(longlong *)((longlong)param_3 + 0x1010) =
               *(longlong *)((longlong)param_3 + 0x1010) +
               local_a0.meta_ineligible_for_decommit + local_a0.free_ineligible_for_decommit;
          uVar6 = param_2->object_size;
          pvVar9 = param_3;
          if (0x10000 < uVar6) goto LAB_140d6c796;
        }
        else {
          if (((uint)ppVar10 & 7) != 4) goto LAB_140d6c794;
          uVar6 = param_2->object_size;
          pvVar9 = (void *)((longlong)param_3 + 0x808);
          if (0x10000 < uVar6) goto LAB_140d6c792;
        }
        plVar1 = (longlong *)((longlong)pvVar9 + (ulonglong)(uVar6 >> 8) * 8);
        *plVar1 = *plVar1 + local_a0.meta_ineligible_for_decommit +
                            local_a0.free_ineligible_for_decommit;
        uVar11 = uVar11 + 1;
        uVar5 = (ulonglong)(param_2->base).first_view.payload;
        uVar7 = 0;
        if (7 < uVar5) {
          uVar7 = pas_compact_heap_reservation_base;
        }
      } while (uVar7 + uVar5 != 0);
    }
  }
LAB_140d6c667:
  if ((local_48 ^ (ulonglong)auStack_c8) != __security_cookie.value) {
    pcVar2 = (code *)swi(3);
    uVar3 = (*pcVar2)();
    return (bool)uVar3;
  }
  return true;
}

// pas_status_reporter_dump_view_stats @ 140d6c7a0

void __cdecl pas_status_reporter_dump_view_stats(pas_stream *param_1)

{
  pas_stream_printf(param_1,"    Number of Partial Views: %zu\n");
  pas_stream_printf(param_1,"    Number of Shared Views: %zu\n");
  pas_stream_printf(param_1,"    Number of Exclusive Views: %zu\n");
  return;
}

// pas_status_reporter_dump_tier_up_rates @ 140d6c800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl pas_status_reporter_dump_tier_up_rates(pas_stream *param_1)

{
  code *pcVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  double local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_58 = 0;
  pas_all_heaps_for_each_heap(tier_up_rate_heap_callback,&local_78);
  dVar6 = _UNK_1531e94a8;
  dVar5 = ___xmm_45300000000000004330000000000000;
  uVar4 = __xmm_00000000000000004530000043300000._4_4_;
  uVar3 = (undefined4)__xmm_00000000000000004530000043300000;
  dVar2 = __real_4059000000000000;
  auVar7._8_4_ = (int)((ulonglong)local_78 >> 0x20);
  auVar7._0_8_ = local_78;
  auVar7._12_4_ = __xmm_00000000000000004530000043300000._4_4_;
  auVar8._8_4_ = (int)((ulonglong)uStack_60 >> 0x20);
  auVar8._0_8_ = uStack_60;
  auVar8._12_4_ = __xmm_00000000000000004530000043300000._4_4_;
  local_80 = (((auVar7._8_8_ - _UNK_1531e94a8) +
              ((double)CONCAT44((undefined4)__xmm_00000000000000004530000043300000,(int)local_78) -
              ___xmm_45300000000000004330000000000000)) * __real_4059000000000000) /
             ((auVar8._8_8_ - _UNK_1531e94a8) +
             ((double)CONCAT44((undefined4)__xmm_00000000000000004530000043300000,(int)uStack_60) -
             ___xmm_45300000000000004330000000000000));
  local_88 = uStack_60;
  pas_stream_printf(param_1,"    %s: %zu/%zu (%.0lf%%)\n");
  auVar9._8_4_ = (int)((ulonglong)uStack_70 >> 0x20);
  auVar9._0_8_ = uStack_70;
  auVar9._12_4_ = uVar4;
  auVar10._8_4_ = (int)((ulonglong)uStack_60 >> 0x20);
  auVar10._0_8_ = uStack_60;
  auVar10._12_4_ = uVar4;
  local_80 = (((auVar9._8_8_ - dVar6) + ((double)CONCAT44(uVar3,(int)uStack_70) - dVar5)) * dVar2) /
             ((auVar10._8_8_ - dVar6) + ((double)CONCAT44(uVar3,(int)uStack_60) - dVar5));
  local_88 = uStack_60;
  pas_stream_printf(param_1,"    %s: %zu/%zu (%.0lf%%)\n");
  auVar11._8_4_ = (int)((ulonglong)local_68 >> 0x20);
  auVar11._0_8_ = local_68;
  auVar11._12_4_ = uVar4;
  auVar12._8_4_ = (int)((ulonglong)uStack_60 >> 0x20);
  auVar12._0_8_ = uStack_60;
  auVar12._12_4_ = uVar4;
  local_80 = (((auVar11._8_8_ - dVar6) + ((double)CONCAT44(uVar3,(int)local_68) - dVar5)) * dVar2) /
             ((auVar12._8_8_ - dVar6) + ((double)CONCAT44(uVar3,(int)uStack_60) - dVar5));
  local_88 = uStack_60;
  pas_stream_printf(param_1,"    %s: %zu/%zu (%.0lf%%)\n");
  if ((local_50 ^ (ulonglong)auStack_a8) == __security_cookie.value) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// tier_up_rate_heap_callback @ 140d6c9e0

bool __cdecl tier_up_rate_heap_callback(pas_heap *param_1,void *param_2)

{
  pas_segregated_heap_for_each_size_directory
            (&param_1->segregated_heap,tier_up_rate_size_directory_callback,param_2);
  *(longlong *)((longlong)param_2 + 0x20) = *(longlong *)((longlong)param_2 + 0x20) + 1;
  return true;
}

// pas_status_reporter_dump_baseline_allocators @ 140d6ca10

void __cdecl pas_status_reporter_dump_baseline_allocators(pas_stream *param_1)

{
  pas_lock *ppVar1;
  longlong lVar2;
  
  pas_stream_printf(param_1,"    Baseline Allocators:\n");
  if (pas_baseline_allocator_table == (pas_baseline_allocator *)0x0) {
    pas_stream_printf(param_1,"        N/A\n");
  }
  else {
    lVar2 = 8;
    do {
      ppVar1 = &pas_baseline_allocator_table->lock;
      pas_stream_printf(param_1,"         %zu: ");
      dump_allocator_state(param_1,(pas_local_allocator *)((longlong)&(ppVar1->lock).Ptr + lVar2));
      pas_stream_printf(param_1,"\n");
      lVar2 = lVar2 + 0x148;
    } while (lVar2 != 0x2908);
  }
  return;
}

// dump_allocator_state @ 140d6cac0

void __cdecl dump_allocator_state(pas_stream *param_1,pas_local_allocator *param_2)

{
  byte bVar1;
  pas_segregated_view_opaque *ppVar2;
  code *pcVar3;
  
  ppVar2 = param_2->view;
  if (ppVar2 == (pas_segregated_view_opaque *)0x0) {
    bVar1 = param_2->config_kind;
  }
  else if (((uint)ppVar2 & 7) == 5) {
    bVar1 = param_2->config_kind;
  }
  else {
    pas_segregated_view_get_size_directory_slow(ppVar2);
    bVar1 = param_2->config_kind;
  }
  if (bVar1 < 0x12) {
    pas_stream_printf(param_1,", %s, view = %p, directory = %p, %s");
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}

// pas_status_reporter_dump_thread_local_caches @ 140d6cb90

void __cdecl pas_status_reporter_dump_thread_local_caches(pas_stream *param_1)

{
  pas_thread_local_cache_node *ppVar1;
  pas_thread_local_cache *ppVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ulonglong uVar6;
  pas_thread_local_cache_layout_node_opaque *ppVar7;
  ulong64 uVar8;
  pas_thread_local_cache_layout_segment *ppVar9;
  longlong lVar10;
  
  pas_stream_printf(param_1,"    Thread Local Cache Layout:\n");
  if (pas_thread_local_cache_layout_first_segment != (pas_thread_local_cache_layout_segment *)0x0) {
    ppVar7 = (pas_thread_local_cache_layout_node_opaque *)
             (ulonglong)pas_thread_local_cache_layout_first_segment->nodes[0].payload;
    if ((pas_thread_local_cache_layout_node_opaque *)&DAT_00000008 <= ppVar7) {
      ppVar7 = ppVar7 + pas_compact_heap_reservation_base;
    }
    if (ppVar7 != (pas_thread_local_cache_layout_node_opaque *)0x0) {
      lVar10 = 0;
      ppVar9 = pas_thread_local_cache_layout_first_segment;
      do {
        while( true ) {
          pas_thread_local_cache_layout_node_get_directory(ppVar7);
          switch((uint)ppVar7 & 3) {
          case 1:
            break;
          case 2:
            break;
          case 3:
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pas_thread_local_cache_layout_node_get_allocator_index_generic(ppVar7);
          pas_stream_printf(param_1,"        %u: %s, directory = %p\n");
          ppVar7 = (pas_thread_local_cache_layout_node_opaque *)
                   (ulonglong)ppVar9->nodes[lVar10 + 1].payload;
          if (ppVar7 <= (pas_thread_local_cache_layout_node_opaque *)&DAT_00000007) break;
          ppVar7 = ppVar7 + pas_compact_heap_reservation_base;
          if (ppVar7 != (pas_thread_local_cache_layout_node_opaque *)0x0) goto LAB_140d6cc10;
LAB_140d6cc9b:
          ppVar9 = ppVar9->next;
          if (ppVar9 == (pas_thread_local_cache_layout_segment *)0x0) goto LAB_140d6cccd;
          uVar6 = (ulonglong)ppVar9->nodes[0].payload;
          uVar8 = 0;
          if (7 < uVar6) {
            uVar8 = pas_compact_heap_reservation_base;
          }
          ppVar7 = (pas_thread_local_cache_layout_node_opaque *)(uVar8 + uVar6);
          lVar10 = 0;
          if (ppVar7 == (pas_thread_local_cache_layout_node_opaque *)0x0) goto LAB_140d6cccd;
        }
        if (ppVar7 == (pas_thread_local_cache_layout_node_opaque *)0x0) goto LAB_140d6cc9b;
LAB_140d6cc10:
        lVar10 = lVar10 + 1;
      } while (ppVar7 != (pas_thread_local_cache_layout_node_opaque *)0x0);
    }
  }
LAB_140d6cccd:
  pas_stream_printf(param_1,"    Thread Local Caches:\n");
  ppVar1 = pas_thread_local_cache_node_first;
  do {
    if (ppVar1 == (pas_thread_local_cache_node *)0x0) {
      return;
    }
    ppVar2 = ppVar1->cache;
    pas_stream_printf(param_1,"        %p(%zu): node = %p\n");
    if (ppVar2 != (pas_thread_local_cache *)0x0) {
      uVar5 = ppVar2->deallocation_log_index;
      uVar6 = (ulonglong)uVar5;
      if (uVar6 != 0) {
        if (3 < uVar5) {
          uVar6 = (ulonglong)(uVar5 & 3);
          lVar10 = 0;
          do {
            lVar10 = lVar10 + -4;
          } while (-lVar10 != (ulonglong)(uVar5 & 0xfffffffc));
          if ((uVar5 & 0xfffffffc) == uVar5) goto LAB_140d6cdff;
        }
        do {
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
LAB_140d6cdff:
      pas_stream_printf(param_1,"            Deallocation logged objects = %u\n");
      if (pas_thread_local_cache_layout_first_segment !=
          (pas_thread_local_cache_layout_segment *)0x0) {
        ppVar7 = (pas_thread_local_cache_layout_node_opaque *)
                 (ulonglong)pas_thread_local_cache_layout_first_segment->nodes[0].payload;
        if ((pas_thread_local_cache_layout_node_opaque *)&DAT_00000008 <= ppVar7) {
          ppVar7 = ppVar7 + pas_compact_heap_reservation_base;
        }
        if (ppVar7 != (pas_thread_local_cache_layout_node_opaque *)0x0) {
          lVar10 = 0;
          ppVar9 = pas_thread_local_cache_layout_first_segment;
LAB_140d6ce6c:
          do {
            uVar5 = pas_thread_local_cache_layout_node_get_allocator_index_generic(ppVar7);
            if (ppVar2->allocator_index_upper_bound <= uVar5) break;
            bVar4 = pas_thread_local_cache_layout_node_is_committed(ppVar7,ppVar2);
            if (bVar4) {
              pas_stream_printf(param_1,"            %u: ");
              if (ppVar2->allocator_index_upper_bound <= uVar5) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)invalidInstructionException();
                (*pcVar3)();
              }
              switch(*(byte *)((longlong)ppVar2->local_allocators + (ulonglong)uVar5 * 8 + 3) & 0x7f
                    ) {
              case 0:
                break;
              case 1:
                break;
              case 2:
                pas_stream_printf(param_1,"%s");
                dump_allocator_state
                          (param_1,(pas_local_allocator *)(ppVar2->local_allocators + uVar5));
                goto LAB_140d6cf36;
              case 3:
                break;
              case 4:
                break;
              default:
                    /* WARNING: Does not return */
                pcVar3 = (code *)invalidInstructionException();
                (*pcVar3)();
              }
              pas_stream_printf(param_1,"%s");
LAB_140d6cf36:
              pas_stream_printf(param_1,"\n");
            }
            ppVar7 = (pas_thread_local_cache_layout_node_opaque *)
                     (ulonglong)ppVar9->nodes[lVar10 + 1].payload;
            if (ppVar7 < (pas_thread_local_cache_layout_node_opaque *)&DAT_00000008) {
              if (ppVar7 == (pas_thread_local_cache_layout_node_opaque *)0x0) goto LAB_140d6cf7c;
LAB_140d6ce60:
              lVar10 = lVar10 + 1;
              if (ppVar7 == (pas_thread_local_cache_layout_node_opaque *)0x0) break;
              goto LAB_140d6ce6c;
            }
            ppVar7 = ppVar7 + pas_compact_heap_reservation_base;
            if (ppVar7 != (pas_thread_local_cache_layout_node_opaque *)0x0) goto LAB_140d6ce60;
LAB_140d6cf7c:
            ppVar9 = ppVar9->next;
            if (ppVar9 == (pas_thread_local_cache_layout_segment *)0x0) break;
            uVar6 = (ulonglong)ppVar9->nodes[0].payload;
            uVar8 = 0;
            if (7 < uVar6) {
              uVar8 = pas_compact_heap_reservation_base;
            }
            ppVar7 = (pas_thread_local_cache_layout_node_opaque *)(uVar8 + uVar6);
            lVar10 = 0;
          } while (ppVar7 != (pas_thread_local_cache_layout_node_opaque *)0x0);
        }
      }
    }
    ppVar1 = ppVar1->next;
  } while( true );
}

// pas_status_reporter_dump_configuration @ 140d6cfe0

void __cdecl pas_status_reporter_dump_configuration(pas_stream *param_1)

{
  pas_stream_printf(param_1,"    Mprotect Decommitted: %s\n");
  return;
}

// pas_status_reporter_dump_physical_page_sharing_pool @ 140d6d010

void __cdecl pas_status_reporter_dump_physical_page_sharing_pool(pas_stream *param_1)

{
  pas_stream_printf(param_1,"    Physical Page Sharing Pool Balance: %zd\n");
  return;
}

// pas_status_reporter_dump_expendable_memories @ 140d6d040

void __cdecl pas_status_reporter_dump_expendable_memories(pas_stream *param_1)

{
  code *pcVar1;
  BOOLEAN BVar2;
  char *pcVar3;
  char *pcVar4;
  ulonglong uVar5;
  pas_large_expendable_memory *ppVar6;
  uint uVar7;
  ulonglong uVar8;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar2 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (pas_compact_expendable_memory_payload == (void *)0x0) {
    pcVar4 = "    Compact Expendable Memory: <empty>\n";
  }
  else {
    pas_stream_printf(param_1,"    Compact Expendable Memory: ");
    pas_stream_printf(param_1,"Header = %p, Payload = %p...%p, Page States: ");
    pcVar4 = "\n";
    if ((ulonglong)pas_compact_expendable_memory_header.header.bump != 0) {
      uVar8 = (ulonglong)pas_compact_expendable_memory_header.header.bump + 0x3fff >> 0xe;
      uVar5 = 0;
LAB_140d6d103:
      do {
        uVar7 = *(uint *)((longlong)&pas_compact_expendable_memory_header + uVar5 * 8 + 0x10) & 7;
        if (uVar7 == 1) {
          pcVar3 = "I";
        }
        else {
          pcVar3 = "D";
          if (uVar7 != 0) {
            if (5 < uVar7) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
            pas_stream_printf(param_1,"%u");
            uVar5 = uVar5 + 1;
            if (uVar8 == uVar5) break;
            goto LAB_140d6d103;
          }
        }
        pas_stream_printf(param_1,pcVar3);
        uVar5 = uVar5 + 1;
      } while (uVar8 != uVar5);
    }
  }
  pas_stream_printf(param_1,pcVar4);
  if (pas_large_expendable_memory_head == (pas_large_expendable_memory *)0x0) {
    pas_stream_printf(param_1,"    Large Expendable Memory: <empty>\n");
  }
  else {
    ppVar6 = pas_large_expendable_memory_head;
    do {
      pas_stream_printf(param_1,"    Large Expendable Memory: ");
      pas_stream_printf(param_1,"Header = %p, Payload = %p...%p, Page States: ");
      uVar5 = (ulonglong)(ppVar6->header).bump;
      if (uVar5 != 0) {
        uVar8 = uVar5 + 0x3fff >> 0xe;
        uVar5 = 0;
LAB_140d6d217:
        do {
          uVar7 = (uint)(ppVar6->header).states[uVar5] & 7;
          if (uVar7 == 1) {
            pcVar4 = "I";
          }
          else {
            pcVar4 = "D";
            if (uVar7 != 0) {
              if (5 < uVar7) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)invalidInstructionException();
                (*pcVar1)();
              }
              pas_stream_printf(param_1,"%u");
              uVar5 = uVar5 + 1;
              if (uVar8 == uVar5) break;
              goto LAB_140d6d217;
            }
          }
          pas_stream_printf(param_1,pcVar4);
          uVar5 = uVar5 + 1;
        } while (uVar8 != uVar5);
      }
      pas_stream_printf(param_1,"\n");
      ppVar6 = ppVar6->next;
    } while (ppVar6 != (pas_large_expendable_memory *)0x0);
  }
  return;
}

// pas_status_reporter_dump_page_states @ 140d6d290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl pas_status_reporter_dump_page_states(pas_stream *param_1)

{
  code *pcVar1;
  pas_range *in_RDX;
  undefined1 auStack_48 [40];
  pas_stream local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  pas_log("    Page States:\n");
  pas_log("        Compact Reservation:\n");
  local_18 = pas_compact_heap_reservation_size + pas_compact_heap_reservation_base;
  if (CARRY8(pas_compact_heap_reservation_size,pas_compact_heap_reservation_base)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_20.functions = (pas_stream_functions *)pas_compact_heap_reservation_base;
  dump_range_state(&local_20,in_RDX);
  pas_log("        Enumerable Page List:\n");
  if ((local_10 ^ (ulonglong)auStack_48) == __security_cookie.value) {
    pas_enumerable_range_list_iterate
              (&pas_enumerable_page_malloc_page_list,dump_enumerable_range_state_callback,param_1);
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)(local_10 ^ (ulonglong)auStack_48);
  return;
}

// dump_range_state @ 140d6d330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl dump_range_state(pas_stream *param_1,pas_range *param_2)

{
  pas_stream_functions *ppVar1;
  code *pcVar2;
  bool bVar3;
  byte bVar4;
  ulong64 uVar5;
  byte bVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  bool bVar11;
  ulong64 uVar12;
  bool bVar13;
  undefined1 auStack_98 [32];
  longlong local_78;
  pas_committed_pages_vector local_70;
  pas_allocation_config local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_60.arg = (void *)0x0;
  local_60.allocate = pas_bootstrap_free_heap_allocate_simple_for_config;
  local_60.deallocate = pas_bootstrap_free_heap_deallocate_for_config;
  ppVar1 = param_1->functions;
  if (param_1[1].functions < ppVar1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  pas_committed_pages_vector_construct
            (&local_70,ppVar1,(longlong)param_1[1].functions - (longlong)ppVar1,&local_60);
  if (local_70.size != 0) {
    uVar8 = 0;
    uVar10 = 0;
    uVar12 = local_70.size;
    bVar6 = 0;
    bVar11 = true;
    do {
      while( true ) {
        uVar9 = uVar10;
        bVar13 = local_70.raw_data[uVar9] != '\0';
        bVar3 = (bool)(bVar11 == bVar13 & bVar6);
        uVar7 = uVar8;
        bVar4 = bVar6;
        if (!bVar3) {
          uVar7 = uVar9;
          bVar4 = 1;
        }
        bVar11 = bVar13;
        if (bVar6 != 0xff || bVar3 != false) break;
        if ((pas_page_malloc_cached_alignment_shift == 0) &&
           (pas_page_malloc_cached_alignment_shift = pas_page_malloc_alignment_shift_slow(),
           pas_page_malloc_cached_alignment_shift == 0)) {
          pas_page_malloc_cached_alignment_shift = pas_page_malloc_alignment_shift_slow();
          if (pas_page_malloc_cached_alignment_shift == 0) {
            pas_page_malloc_cached_alignment_shift = pas_page_malloc_alignment_shift_slow();
          }
          bVar6 = 0;
        }
        else {
          bVar6 = (byte)pas_page_malloc_cached_alignment_shift;
        }
        local_78 = uVar9 - uVar8 << (bVar6 & 0x3f);
        pas_log("        %p...%p: %s (%zu bytes)\n");
        bVar4 = 1;
        uVar8 = uVar9;
        uVar10 = uVar9 + 1;
        uVar12 = local_70.size;
        bVar6 = bVar4;
        if (local_70.size <= uVar9 + 1) goto LAB_140d6d4d5;
      }
      uVar10 = uVar9 + 1;
      uVar8 = uVar7;
      uVar9 = uVar7;
      bVar6 = bVar4;
    } while (uVar10 < uVar12);
LAB_140d6d4d5:
    if (bVar4 != 0) {
      uVar5 = pas_page_malloc_cached_alignment_shift;
      if ((pas_page_malloc_cached_alignment_shift == 0) &&
         (uVar5 = pas_page_malloc_alignment_shift_slow(),
         pas_page_malloc_cached_alignment_shift = uVar5, uVar5 == 0)) {
        pas_page_malloc_cached_alignment_shift = pas_page_malloc_alignment_shift_slow();
        if (pas_page_malloc_cached_alignment_shift == 0) {
          pas_page_malloc_cached_alignment_shift = pas_page_malloc_alignment_shift_slow();
        }
        uVar5 = 0;
      }
      local_78 = uVar12 - uVar9 << ((byte)uVar5 & 0x3f);
      pas_log("        %p...%p: %s (%zu bytes)\n");
      pas_committed_pages_vector_destruct(&local_70,&local_60);
      if ((local_48 ^ (ulonglong)auStack_98) == __security_cookie.value) {
        return;
      }
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

// dump_enumerable_range_state_callback @ 140d6d5c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl dump_enumerable_range_state_callback(pas_range *param_1,void *param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined1 auStack_38 [32];
  pas_stream local_18;
  ulong64 uStack_10;
  ulonglong local_8;
  
  local_8 = __security_cookie.value ^ (ulonglong)auStack_38;
  local_18.functions = (pas_stream_functions *)param_1->begin;
  uStack_10 = param_1->end;
  dump_range_state(&local_18,param_2);
  if ((local_8 ^ (ulonglong)auStack_38) == __security_cookie.value) {
    return true;
  }
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return (bool)uVar2;
}

// pas_status_reporter_dump_everything @ 140d6d610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl pas_status_reporter_dump_everything(pas_stream *param_1)

{
  code *pcVar1;
  pas_lock *ppVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  double dVar6;
  double dVar7;
  BOOLEAN BVar8;
  ulong64 uVar9;
  char *pcVar10;
  longlong lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_168 [32];
  ulong64 local_148;
  double local_140;
  ulong64 local_138;
  pas_heap_summary local_128;
  pas_heap_summary local_c8;
  ulonglong local_70;
  
  local_70 = __security_cookie.value ^ (ulonglong)auStack_168;
  BVar8 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar8 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  _getpid();
  pas_stream_printf(param_1,"%d: Heap Status:\n");
  local_c8.allocated = 0;
  local_c8.free = (ulong64)param_1;
  pas_all_heaps_for_each_heap(dump_all_heaps_heap_callback,&local_c8);
  pas_stream_printf(param_1,"    Num Heaps: %zu\n");
  pas_stream_printf(param_1,"    Shared Page Directories:\n");
  pas_all_shared_page_directories_for_each
            (dump_all_shared_page_directories_directory_callback,param_1);
  pas_status_reporter_dump_all_heaps_non_utility_summaries(param_1);
  if (2 < pas_status_reporter_enabled) {
    pas_stream_printf(param_1,"    Large sharing pool contents:\n");
    pas_large_sharing_pool_for_each(dump_large_sharing_pool_node_callback,param_1,pas_lock_is_held);
  }
  pas_stream_printf(param_1,"    Utility Heap:\n");
  pas_status_reporter_dump_segregated_heap(param_1,&pas_utility_segregated_heap);
  if (2 < pas_status_reporter_enabled) {
    local_148 = CONCAT44(local_148._4_4_,pas_large_map_hashtable_instance.table_size);
    pas_stream_printf(param_1,"    Large Map: Num Entries: %u, Num Deleted: %u, Table Size: %u\n");
    pas_stream_printf(param_1,"    Baseline Allocators:\n");
    if (pas_baseline_allocator_table == (pas_baseline_allocator *)0x0) {
      pas_stream_printf(param_1,"        N/A\n");
    }
    else {
      lVar11 = 8;
      do {
        ppVar2 = &pas_baseline_allocator_table->lock;
        pas_stream_printf(param_1,"         %zu: ");
        dump_allocator_state
                  (param_1,(pas_local_allocator *)((longlong)&(ppVar2->lock).Ptr + lVar11));
        pas_stream_printf(param_1,"\n");
        lVar11 = lVar11 + 0x148;
      } while (lVar11 != 0x2908);
    }
    pas_status_reporter_dump_thread_local_caches(param_1);
    pas_stream_printf(param_1,"    Immortal Heap: ");
    pas_stream_printf(param_1,"Alloc Internal: %zu, External: %zu");
    pas_stream_printf(param_1,"\n");
  }
  pas_stream_printf(param_1,"    Large Utility Free Heap: ");
  pas_large_utility_free_heap_compute_summary(&local_c8);
  local_128.cached = local_c8.cached;
  local_128.meta_ineligible_for_decommit = local_c8.meta_ineligible_for_decommit;
  local_128.meta_eligible_for_decommit = local_c8.meta_eligible_for_decommit;
  local_128.free_eligible_for_decommit = local_c8.free_eligible_for_decommit;
  local_128.free_decommitted = local_c8.free_decommitted;
  local_128.decommitted = local_c8.decommitted;
  local_128.free_ineligible_for_decommit = local_c8.free_ineligible_for_decommit;
  local_128.meta = local_c8.meta;
  local_128.committed = local_c8.committed;
  local_128.free = local_c8.free;
  local_128.allocated = local_c8.allocated;
  pas_heap_summary_dump(&local_128,param_1);
  pas_stream_printf(param_1,"\n");
  if (2 < pas_status_reporter_enabled) {
    pas_status_reporter_dump_total_fragmentation(param_1);
    pas_stream_printf(param_1,"    Number of Partial Views: %zu\n");
    pas_stream_printf(param_1,"    Number of Shared Views: %zu\n");
    pas_stream_printf(param_1,"    Number of Exclusive Views: %zu\n");
    local_c8.meta = 0;
    local_c8.committed = 0;
    local_c8.free = 0;
    local_c8.allocated = 0;
    local_c8.decommitted = 0;
    pas_all_heaps_for_each_heap(tier_up_rate_heap_callback,&local_c8);
    dVar7 = _UNK_1531e94a8;
    dVar6 = ___xmm_45300000000000004330000000000000;
    uVar5 = __xmm_00000000000000004530000043300000._4_4_;
    uVar4 = (undefined4)__xmm_00000000000000004530000043300000;
    dVar3 = __real_4059000000000000;
    auVar12._8_4_ = (int)(local_c8.free >> 0x20);
    auVar12._0_8_ = local_c8.free;
    auVar12._12_4_ = __xmm_00000000000000004530000043300000._4_4_;
    auVar13._8_4_ = (int)(local_c8.committed >> 0x20);
    auVar13._0_8_ = local_c8.committed;
    auVar13._12_4_ = __xmm_00000000000000004530000043300000._4_4_;
    local_140 = (((auVar12._8_8_ - _UNK_1531e94a8) +
                 ((double)CONCAT44((undefined4)__xmm_00000000000000004530000043300000,
                                   (int)local_c8.free) - ___xmm_45300000000000004330000000000000)) *
                __real_4059000000000000) /
                ((auVar13._8_8_ - _UNK_1531e94a8) +
                ((double)CONCAT44((undefined4)__xmm_00000000000000004530000043300000,
                                  (int)local_c8.committed) - ___xmm_45300000000000004330000000000000
                ));
    local_148 = local_c8.committed;
    pas_stream_printf(param_1,"    %s: %zu/%zu (%.0lf%%)\n");
    auVar14._8_4_ = (int)(local_c8.allocated >> 0x20);
    auVar14._0_8_ = local_c8.allocated;
    auVar14._12_4_ = uVar5;
    auVar15._8_4_ = (int)(local_c8.committed >> 0x20);
    auVar15._0_8_ = local_c8.committed;
    auVar15._12_4_ = uVar5;
    local_140 = (((auVar14._8_8_ - dVar7) +
                 ((double)CONCAT44(uVar4,(int)local_c8.allocated) - dVar6)) * dVar3) /
                ((auVar15._8_8_ - dVar7) + ((double)CONCAT44(uVar4,(int)local_c8.committed) - dVar6)
                );
    local_148 = local_c8.committed;
    pas_stream_printf(param_1,"    %s: %zu/%zu (%.0lf%%)\n");
    auVar16._8_4_ = (int)(local_c8.meta >> 0x20);
    auVar16._0_8_ = local_c8.meta;
    auVar16._12_4_ = uVar5;
    auVar17._8_4_ = (int)(local_c8.committed >> 0x20);
    auVar17._0_8_ = local_c8.committed;
    auVar17._12_4_ = uVar5;
    local_140 = (((auVar16._8_8_ - dVar7) + ((double)CONCAT44(uVar4,(int)local_c8.meta) - dVar6)) *
                dVar3) / ((auVar17._8_8_ - dVar7) +
                         ((double)CONCAT44(uVar4,(int)local_c8.committed) - dVar6));
    local_148 = local_c8.committed;
    pas_stream_printf(param_1,"    %s: %zu/%zu (%.0lf%%)\n");
  }
  pas_stream_printf(param_1,"    Compact Reservation Free Heap: ");
  pas_simple_large_free_heap_get_num_free_bytes(&pas_compact_reservation_free_heap);
  pas_stream_printf(param_1,"Mapped: %zu, Free: %zu");
  pas_stream_printf(param_1,"\n");
  pas_stream_printf(param_1,"    Reservation Free Heap: ");
  pas_simple_large_free_heap_get_num_free_bytes(&pas_reservation_free_heap);
  pas_stream_printf(param_1,"Mapped: %zu, Free: %zu");
  pas_stream_printf(param_1,"\n");
  pas_stream_printf(param_1,"    Global Physical Page Sharing Cache: ");
  pas_simple_large_free_heap_get_num_free_bytes(&pas_global_physical_page_sharing_cache);
  pas_stream_printf(param_1,"Mapped: %zu, Free: %zu");
  pas_stream_printf(param_1,"\n");
  pas_stream_printf(param_1,"    Bootstrap Free Heap: ");
  uVar9 = pas_bootstrap_free_heap_get_num_decommitted_bytes();
  local_140 = (double)pas_bootstrap_free_heap_get_num_free_bytes();
  local_148 = pas_bootstrap_free_heap.private_base.num_mapped_bytes;
  local_138 = uVar9;
  pas_stream_printf(param_1,"Alloc: %zu, Peak Alloc: %zu, Mapped: %zu, Free: %zu, Decommitted: %zu")
  ;
  pas_stream_printf(param_1,"\n");
  pas_stream_printf(param_1,"    Mprotect Decommitted: %s\n");
  pcVar10 = "    Physical Page Sharing Pool Balance: %zd\n";
  pas_stream_printf(param_1,"    Physical Page Sharing Pool Balance: %zd\n");
  pas_status_reporter_dump_expendable_memories(param_1);
  pas_log("    Page States:\n");
  pas_log("        Compact Reservation:\n");
  if (CARRY8(pas_compact_heap_reservation_size,pas_compact_heap_reservation_base)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_c8.free = pas_compact_heap_reservation_base;
  local_c8.allocated = pas_compact_heap_reservation_size + pas_compact_heap_reservation_base;
  dump_range_state((pas_stream *)&local_c8,(pas_range *)pcVar10);
  pas_log("        Enumerable Page List:\n");
  pas_enumerable_range_list_iterate
            (&pas_enumerable_page_malloc_page_list,dump_enumerable_range_state_callback,param_1);
  if ((local_70 ^ (ulonglong)auStack_168) != __security_cookie.value) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// pas_status_reporter_start_if_necessary @ 140d6dcc0

void __cdecl pas_status_reporter_start_if_necessary(void)

{
  if (pas_status_reporter_enabled != 0) {
    pas_system_once_run(&once_control,start_reporter);
    return;
  }
  return;
}

// start_reporter @ 140d6dcf0

void __cdecl start_reporter(void)

{
  pas_create_detached_thread(status_reporter_thread_main,(void *)0x0);
  return;
}

// pas_status_reporter_print_everything @ 140d6dd10

void __cdecl pas_status_reporter_print_everything(void)

{
  uint uVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  uVar1 = pas_status_reporter_enabled;
  pas_status_reporter_enabled = 100;
  pas_status_reporter_dump_everything(&pas_log_stream.base);
  pas_status_reporter_enabled = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000140d6dd51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  return;
}

// tier_up_rate_size_directory_callback @ 140d6dd60

bool __cdecl
tier_up_rate_size_directory_callback
          (pas_segregated_heap *param_1,pas_segregated_size_directory *param_2,void *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = (ulonglong)(param_2->data).payload;
  if ((uVar1 != 0) && (pas_compact_heap_reservation_base != uVar1 * -8)) {
    *(longlong *)param_3 = *(longlong *)param_3 + 1;
  }
  if (param_2->allocator_index != 0) {
    *(longlong *)((longlong)param_3 + 8) = *(longlong *)((longlong)param_3 + 8) + 1;
  }
  uVar1 = (ulonglong)(param_2->data).payload;
  lVar2 = uVar1 * 8 + pas_compact_heap_reservation_base;
  if ((lVar2 != 0 && uVar1 != 0) && (*(int *)(lVar2 + 8) != 0)) {
    *(longlong *)((longlong)param_3 + 0x10) = *(longlong *)((longlong)param_3 + 0x10) + 1;
  }
  *(longlong *)((longlong)param_3 + 0x18) = *(longlong *)((longlong)param_3 + 0x18) + 1;
  return true;
}

// status_reporter_thread_main @ 140d6ddc0

ulong __cdecl status_reporter_thread_main(void *param_1)

{
  code *pcVar1;
  pas_fd_stream local_50;
  
  pas_fd_stream_construct(&local_50,1);
  while( true ) {
    while( true ) {
      Sleep(pas_status_reporter_period_in_milliseconds);
      if (pas_status_reporter_enabled != 1) break;
      _getpid();
      pas_stream_printf(&local_50.base,"%d: Num Heaps: %zu\n");
    }
    if (pas_status_reporter_enabled == 0) break;
    AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    pas_status_reporter_dump_everything(&local_50.base);
    ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

