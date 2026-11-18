// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2core_win64
// Functions: 31

// newLZHC_decode_parse_raw_sse4 @ 14f3bb240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
oo2::newLZHC_decode_parse_raw_sse4
          (newLZHC_chunk_arrays *param_1,uchar *param_2,uchar *param_3,uchar *param_4,uchar *param_5
          )

{
  uint *puVar1;
  byte *pbVar2;
  uchar *puVar3;
  byte bVar4;
  undefined8 uVar5;
  uchar *puVar6;
  uint uVar7;
  longlong lVar8;
  uchar *puVar9;
  uint *puVar10;
  byte *pbVar11;
  int iVar12;
  ulonglong uVar13;
  uchar *_Src;
  char *pcVar14;
  byte *pbVar15;
  longlong lVar16;
  int *piVar17;
  longlong lVar18;
  uint *puVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auStack_128 [40];
  uchar *local_100;
  uchar *local_f8;
  uchar *local_f0;
  int *local_e8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined1 local_a0 [16];
  ulonglong local_80;
  
  local_80 = __security_cookie.value ^ (ulonglong)auStack_128;
  piVar17 = param_1->offsets;
  puVar19 = param_1->excesses;
  pbVar11 = param_1->packets;
  lVar18 = param_1->packets_count;
  local_e8 = piVar17 + param_1->offsets_count;
  _Src = param_1->literals_ptrs[0];
  pbVar2 = pbVar11 + lVar18;
  local_a0 = ___xmm_00000000000000000706050403020100;
  local_c0 = ___xmm_fffffff8fffffff8fffffff8fffffff8;
  uStack_b8 = _UNK_1531db198;
  puVar10 = puVar19 + param_1->excesses_count;
  local_b0 = 0xfffffff8;
  local_ac = 0xfffffff8;
  local_a8 = 0xfffffff8;
  if (0xf < (longlong)param_4 - (longlong)param_3) {
    param_3 = param_4 + -0x10;
  }
  local_f8 = param_4 + -8;
  lVar8 = (longlong)param_3 - (longlong)param_2 >> 6;
  lVar16 = lVar18;
  if (lVar8 <= lVar18) {
    lVar16 = lVar8;
  }
  pbVar15 = pbVar11 + lVar16;
  local_100 = param_3;
  local_f0 = param_4;
  if (pbVar11 < pbVar15) {
    do {
      bVar4 = *pbVar11;
      lVar18 = lVar18 + -1;
      uVar13 = (ulonglong)(bVar4 >> 3 & 3);
      lVar16 = (ulonglong)(bVar4 & 7) + 2;
      pbVar11 = pbVar11 + 1;
      *(int *)((longlong)&local_c0 + (longlong)(int)(uint)local_a0[7] * 4) = *piVar17;
      uVar7 = *puVar19;
      if (uVar13 == 3) {
        puVar19 = puVar19 + 1;
      }
      if (uVar13 == 3) {
        uVar13 = (ulonglong)uVar7;
      }
      *(undefined8 *)param_2 = *(undefined8 *)_Src;
      if (((8 < uVar13) && (*(undefined8 *)(param_2 + 8) = *(undefined8 *)(_Src + 8), 0x10 < uVar13)
          ) && (*(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(_Src + 0x10), 0x18 < uVar13)) {
        if ((longlong)param_3 - (longlong)param_2 < (longlong)uVar13) {
          ooLogErrorPre();
          if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
            (*g_fp_OodleCore_Plugin_Printf)
                      (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x292,
                       "OODLE ERROR : corruption : (match_zone_end - to_ptr) >= (lrl)\n");
            ooLogErrorPost();
            return false;
          }
          goto LAB_14f3bb872;
        }
        lVar8 = (longlong)(((longlong)param_3 - (longlong)param_2) - uVar13) >> 6;
        pbVar15 = pbVar2;
        if (lVar8 <= lVar18) {
          pbVar15 = pbVar11 + lVar8;
        }
        param_2 = param_2 + 0x18;
        _Src = _Src + 0x18;
        uVar13 = uVar13 - 0x18;
        do {
          uVar13 = uVar13 - 8;
          *(undefined8 *)param_2 = *(undefined8 *)_Src;
          _Src = _Src + 8;
          param_2 = param_2 + 8;
        } while (0 < (longlong)uVar13);
      }
      auVar20._8_8_ = 0;
      auVar20._0_8_ = c_lo_shuffles[bVar4 >> 5];
      puVar6 = param_2 + uVar13;
      _Src = _Src + uVar13;
      local_a0 = pshufb(local_a0,auVar20);
      uVar13 = (ulonglong)*(int *)((longlong)&local_c0 + (ulonglong)local_a0[0] * 4);
      lVar8 = 0;
      if ((ulonglong)(bVar4 >> 5) == 7) {
        lVar8 = 4;
      }
      piVar17 = (int *)((longlong)piVar17 + lVar8);
      if (uVar13 < (ulonglong)((longlong)param_5 - (longlong)puVar6)) goto LAB_14f3bb74e;
      puVar3 = puVar6 + uVar13;
      if (lVar16 == 9) {
        if (puVar10 <= puVar19) goto LAB_14f3bb70e;
        puVar1 = puVar10 + -1;
        puVar10 = puVar10 + -1;
        uVar7 = *puVar1 + 6;
        param_2 = puVar6 + uVar7;
        *(undefined8 *)puVar6 = *(undefined8 *)puVar3;
        *(undefined8 *)(puVar6 + 8) = *(undefined8 *)(puVar3 + 8);
        if (0x10 < (ulonglong)uVar7) {
          if ((ulonglong)((longlong)local_f8 - (longlong)puVar6) < (ulonglong)uVar7)
          goto LAB_14f3bb6ce;
          puVar9 = puVar3 + 0x18;
          *(undefined8 *)(puVar6 + 0x10) = *(undefined8 *)(puVar3 + 0x10);
          for (puVar6 = puVar6 + 0x18; puVar6 < param_2; puVar6 = puVar6 + 8) {
            uVar5 = *(undefined8 *)puVar9;
            puVar9 = puVar9 + 8;
            *(undefined8 *)puVar6 = uVar5;
          }
          lVar16 = (longlong)param_3 - (longlong)param_2 >> 6;
          pbVar15 = pbVar2;
          if (lVar16 <= lVar18) {
            pbVar15 = pbVar11 + lVar16;
          }
        }
      }
      else {
        *(undefined8 *)puVar6 = *(undefined8 *)puVar3;
        param_2 = puVar6 + lVar16;
      }
    } while (pbVar11 < pbVar15);
  }
  while (pbVar11 < pbVar2) {
    bVar4 = *pbVar11;
    pbVar11 = pbVar11 + 1;
    uVar13 = (ulonglong)(bVar4 >> 3 & 3);
    lVar18 = (ulonglong)(bVar4 & 7) + 2;
    *(int *)((longlong)&local_c0 + (longlong)(int)(uint)local_a0[7] * 4) = *piVar17;
    if (uVar13 == 3) {
      uVar13 = (ulonglong)*puVar19;
      puVar19 = puVar19 + 1;
    }
    if ((longlong)param_3 - (longlong)param_2 < (longlong)uVar13) {
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
        (*g_fp_OodleCore_Plugin_Printf)
                  (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x253,
                   "OODLE ERROR : corruption : (match_zone_end - to_ptr) >= lrl\n");
        ooLogErrorPost();
        return false;
      }
      goto LAB_14f3bb872;
    }
    *(undefined8 *)param_2 = *(undefined8 *)_Src;
    if (((8 < uVar13) && (*(undefined8 *)(param_2 + 8) = *(undefined8 *)(_Src + 8), 0x10 < uVar13))
       && (*(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(_Src + 0x10), 0x18 < uVar13)) {
      param_2 = param_2 + 0x18;
      _Src = _Src + 0x18;
      uVar13 = uVar13 - 0x18;
      do {
        uVar13 = uVar13 - 8;
        *(undefined8 *)param_2 = *(undefined8 *)_Src;
        _Src = _Src + 8;
        param_2 = param_2 + 8;
      } while (0 < (longlong)uVar13);
    }
    auVar21._8_8_ = 0;
    auVar21._0_8_ = c_lo_shuffles[bVar4 >> 5];
    puVar6 = param_2 + uVar13;
    _Src = _Src + uVar13;
    local_a0 = pshufb(local_a0,auVar21);
    uVar13 = (ulonglong)*(int *)((longlong)&local_c0 + (ulonglong)local_a0[0] * 4);
    lVar16 = 0;
    if ((ulonglong)(bVar4 >> 5) == 7) {
      lVar16 = 4;
    }
    piVar17 = (int *)((longlong)piVar17 + lVar16);
    if (uVar13 < (ulonglong)((longlong)param_5 - (longlong)puVar6)) goto LAB_14f3bb74e;
    puVar3 = puVar6 + uVar13;
    if (lVar18 == 9) {
      if (puVar10 <= puVar19) goto LAB_14f3bb70e;
      puVar1 = puVar10 + -1;
      puVar10 = puVar10 + -1;
      uVar7 = *puVar1 + 6;
      param_2 = puVar6 + uVar7;
      *(undefined8 *)puVar6 = *(undefined8 *)puVar3;
      *(undefined8 *)(puVar6 + 8) = *(undefined8 *)(puVar3 + 8);
      if (0x10 < (ulonglong)uVar7) {
        if ((ulonglong)((longlong)local_f8 - (longlong)puVar6) < (ulonglong)uVar7)
        goto LAB_14f3bb6ce;
        puVar9 = puVar3 + 0x18;
        *(undefined8 *)(puVar6 + 0x10) = *(undefined8 *)(puVar3 + 0x10);
        for (puVar6 = puVar6 + 0x18; puVar6 < param_2; puVar6 = puVar6 + 8) {
          uVar5 = *(undefined8 *)puVar9;
          puVar9 = puVar9 + 8;
          *(undefined8 *)puVar6 = uVar5;
        }
      }
    }
    else {
      *(undefined8 *)puVar6 = *(undefined8 *)puVar3;
      param_2 = puVar6 + lVar18;
    }
  }
  if (param_2 < param_4) {
    memcpy(param_2,_Src,(longlong)param_4 - (longlong)param_2);
LAB_14f3bb7f6:
    if (piVar17 == local_e8) {
      if (puVar19 == puVar10) {
        return true;
      }
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto LAB_14f3bb872;
      pcVar14 = "OODLE ERROR : corruption : excesses_ptr == excesses_end_ptr\n";
      iVar12 = 0x197;
    }
    else {
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto LAB_14f3bb872;
      pcVar14 = "OODLE ERROR : corruption : offsets_ptr == offsets_end\n";
      iVar12 = 0x196;
    }
  }
  else {
    if (param_2 == param_4) goto LAB_14f3bb7f6;
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto LAB_14f3bb872;
    pcVar14 = "OODLE ERROR : corruption : to_ptr == chunk_end\n";
    iVar12 = 0x18d;
  }
  (*g_fp_OodleCore_Plugin_Printf)
            (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_outer.inl",iVar12,pcVar14);
LAB_14f3bb872:
  ooLogErrorPost();
  return false;
LAB_14f3bb74e:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x2e2,
               "OODLE ERROR : corruption : (UINTa)neg_offset >= (UINTa) (window_base - to_ptr)\n");
    ooLogErrorPost();
    return false;
  }
  goto LAB_14f3bb872;
LAB_14f3bb70e:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x304,
               "OODLE ERROR : corruption : excesses_end_ptr > excesses_ptr\n");
    ooLogErrorPost();
    return false;
  }
  goto LAB_14f3bb872;
LAB_14f3bb6ce:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x322,
               "OODLE ERROR : corruption : (UINTa)(match_end - to_ptr) >= ml\n");
    ooLogErrorPost();
    return false;
  }
  goto LAB_14f3bb872;
}

// newLZHC_decode_parse_sub_sse4 @ 14f3bb8c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
oo2::newLZHC_decode_parse_sub_sse4
          (newLZHC_chunk_arrays *param_1,uchar *param_2,uchar *param_3,uchar *param_4,uchar *param_5
          )

{
  uint *puVar1;
  uchar *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  uint uVar6;
  longlong lVar7;
  uchar *puVar8;
  uchar *puVar9;
  longlong lVar10;
  byte *pbVar11;
  uint *puVar12;
  int iVar13;
  uchar *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  char *pcVar17;
  ulonglong uVar18;
  byte *pbVar19;
  longlong lVar20;
  int *piVar21;
  uint *puVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auStack_128 [40];
  uchar *local_100;
  uchar *local_f8;
  byte *local_f0;
  int *local_e8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined1 local_a0 [16];
  ulonglong local_80;
  
  local_80 = __security_cookie.value ^ (ulonglong)auStack_128;
  uVar18 = 0xfffffffffffffff8;
  piVar21 = param_1->offsets;
  puVar22 = param_1->excesses;
  pbVar11 = param_1->packets;
  lVar20 = param_1->packets_count;
  local_e8 = piVar21 + param_1->offsets_count;
  local_f0 = pbVar11 + lVar20;
  puVar14 = param_1->literals_ptrs[0];
  puVar12 = puVar22 + param_1->excesses_count;
  local_c0 = ___xmm_fffffff8fffffff8fffffff8fffffff8;
  uStack_b8 = _UNK_1531db198;
  local_b0 = 0xfffffff8;
  local_ac = 0xfffffff8;
  local_a8 = 0xfffffff8;
  if (0xf < (longlong)param_4 - (longlong)param_3) {
    param_3 = param_4 + -0x10;
  }
  lVar7 = (longlong)param_3 - (longlong)param_2 >> 6;
  lVar10 = lVar20;
  if (lVar7 <= lVar20) {
    lVar10 = lVar7;
  }
  pbVar19 = pbVar11 + lVar10;
  local_a0 = ___xmm_00000000000000000706050403020100;
  local_100 = param_3;
  local_f8 = param_4;
  if (pbVar11 < pbVar19) {
    do {
      bVar5 = *pbVar11;
      lVar20 = lVar20 + -1;
      uVar3 = *(undefined8 *)puVar14;
      uVar4 = *(undefined8 *)(param_2 + uVar18);
      lVar10 = (ulonglong)(bVar5 & 7) + 2;
      pbVar11 = pbVar11 + 1;
      uVar15 = (ulonglong)(bVar5 >> 3 & 3);
      *(int *)((longlong)&local_c0 + (longlong)(int)(uint)local_a0[7] * 4) = *piVar21;
      if (uVar15 == 3) {
        uVar15 = (ulonglong)*puVar22;
        puVar22 = puVar22 + 1;
      }
      *(ulonglong *)param_2 =
           CONCAT17((char)((ulonglong)uVar4 >> 0x38) + (char)((ulonglong)uVar3 >> 0x38),
                    CONCAT16((char)((ulonglong)uVar4 >> 0x30) + (char)((ulonglong)uVar3 >> 0x30),
                             CONCAT15((char)((ulonglong)uVar4 >> 0x28) +
                                      (char)((ulonglong)uVar3 >> 0x28),
                                      CONCAT14((char)((ulonglong)uVar4 >> 0x20) +
                                               (char)((ulonglong)uVar3 >> 0x20),
                                               CONCAT13((char)((ulonglong)uVar4 >> 0x18) +
                                                        (char)((ulonglong)uVar3 >> 0x18),
                                                        CONCAT12((char)((ulonglong)uVar4 >> 0x10) +
                                                                 (char)((ulonglong)uVar3 >> 0x10),
                                                                 CONCAT11((char)((ulonglong)uVar4 >>
                                                                                8) +
                                                                          (char)((ulonglong)uVar3 >>
                                                                                8),(char)uVar4 +
                                                                                   (char)uVar3))))))
                   );
      if (8 < uVar15) {
        uVar3 = *(undefined8 *)(param_2 + uVar18 + 8);
        uVar4 = *(undefined8 *)(puVar14 + 8);
        *(ulonglong *)(param_2 + 8) =
             CONCAT17((char)((ulonglong)uVar3 >> 0x38) + (char)((ulonglong)uVar4 >> 0x38),
                      CONCAT16((char)((ulonglong)uVar3 >> 0x30) + (char)((ulonglong)uVar4 >> 0x30),
                               CONCAT15((char)((ulonglong)uVar3 >> 0x28) +
                                        (char)((ulonglong)uVar4 >> 0x28),
                                        CONCAT14((char)((ulonglong)uVar3 >> 0x20) +
                                                 (char)((ulonglong)uVar4 >> 0x20),
                                                 CONCAT13((char)((ulonglong)uVar3 >> 0x18) +
                                                          (char)((ulonglong)uVar4 >> 0x18),
                                                          CONCAT12((char)((ulonglong)uVar3 >> 0x10)
                                                                   + (char)((ulonglong)uVar4 >> 0x10
                                                                           ),
                                                                   CONCAT11((char)((ulonglong)uVar3
                                                                                  >> 8) +
                                                                            (char)((ulonglong)uVar4
                                                                                  >> 8),
                                                                            (char)uVar3 +
                                                                            (char)uVar4)))))));
        if (0x10 < uVar15) {
          uVar3 = *(undefined8 *)(param_2 + uVar18 + 0x10);
          uVar4 = *(undefined8 *)(puVar14 + 0x10);
          *(ulonglong *)(param_2 + 0x10) =
               CONCAT17((char)((ulonglong)uVar3 >> 0x38) + (char)((ulonglong)uVar4 >> 0x38),
                        CONCAT16((char)((ulonglong)uVar3 >> 0x30) + (char)((ulonglong)uVar4 >> 0x30)
                                 ,CONCAT15((char)((ulonglong)uVar3 >> 0x28) +
                                           (char)((ulonglong)uVar4 >> 0x28),
                                           CONCAT14((char)((ulonglong)uVar3 >> 0x20) +
                                                    (char)((ulonglong)uVar4 >> 0x20),
                                                    CONCAT13((char)((ulonglong)uVar3 >> 0x18) +
                                                             (char)((ulonglong)uVar4 >> 0x18),
                                                             CONCAT12((char)((ulonglong)uVar3 >>
                                                                            0x10) +
                                                                      (char)((ulonglong)uVar4 >>
                                                                            0x10),
                                                                      CONCAT11((char)((ulonglong)
                                                                                      uVar3 >> 8) +
                                                                               (char)((ulonglong)
                                                                                      uVar4 >> 8),
                                                                               (char)uVar3 +
                                                                               (char)uVar4)))))));
          if (0x18 < uVar15) {
            if ((longlong)param_3 - (longlong)param_2 < (longlong)uVar15) {
              ooLogErrorPre();
              if (g_fp_OodleCore_Plugin_Printf !=
                  (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
                (*g_fp_OodleCore_Plugin_Printf)
                          (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",
                           0x292,"OODLE ERROR : corruption : (match_zone_end - to_ptr) >= (lrl)\n");
                ooLogErrorPost();
                return false;
              }
              goto LAB_14f3bbfd0;
            }
            lVar7 = (longlong)(((longlong)param_3 - (longlong)param_2) - uVar15) >> 6;
            pbVar19 = local_f0;
            if (lVar7 <= lVar20) {
              pbVar19 = pbVar11 + lVar7;
            }
            param_2 = param_2 + 0x18;
            puVar14 = puVar14 + 0x18;
            uVar15 = uVar15 - 0x18;
            do {
              uVar3 = *(undefined8 *)(param_2 + uVar18);
              uVar15 = uVar15 - 8;
              uVar4 = *(undefined8 *)puVar14;
              puVar14 = puVar14 + 8;
              *(ulonglong *)param_2 =
                   CONCAT17((char)((ulonglong)uVar3 >> 0x38) + (char)((ulonglong)uVar4 >> 0x38),
                            CONCAT16((char)((ulonglong)uVar3 >> 0x30) +
                                     (char)((ulonglong)uVar4 >> 0x30),
                                     CONCAT15((char)((ulonglong)uVar3 >> 0x28) +
                                              (char)((ulonglong)uVar4 >> 0x28),
                                              CONCAT14((char)((ulonglong)uVar3 >> 0x20) +
                                                       (char)((ulonglong)uVar4 >> 0x20),
                                                       CONCAT13((char)((ulonglong)uVar3 >> 0x18) +
                                                                (char)((ulonglong)uVar4 >> 0x18),
                                                                CONCAT12((char)((ulonglong)uVar3 >>
                                                                               0x10) +
                                                                         (char)((ulonglong)uVar4 >>
                                                                               0x10),
                                                                         CONCAT11((char)((ulonglong)
                                                                                         uVar3 >> 8)
                                                                                  + (char)((
                                                  ulonglong)uVar4 >> 8),(char)uVar3 + (char)uVar4)))
                                                  ))));
              param_2 = param_2 + 8;
            } while (0 < (longlong)uVar15);
          }
        }
      }
      auVar23._8_8_ = 0;
      auVar23._0_8_ = c_lo_shuffles[bVar5 >> 5];
      puVar9 = param_2 + uVar15;
      local_a0 = pshufb(local_a0,auVar23);
      puVar14 = puVar14 + uVar15;
      uVar18 = (ulonglong)*(int *)((longlong)&local_c0 + (ulonglong)local_a0[0] * 4);
      lVar7 = 0;
      if ((ulonglong)(bVar5 >> 5) == 7) {
        lVar7 = 4;
      }
      piVar21 = (int *)((longlong)piVar21 + lVar7);
      if (uVar18 < (ulonglong)((longlong)param_5 - (longlong)puVar9)) goto LAB_14f3bbe4e;
      puVar2 = puVar9 + uVar18;
      if (lVar10 == 9) {
        if (puVar12 <= puVar22) goto LAB_14f3bbe12;
        puVar1 = puVar12 + -1;
        puVar12 = puVar12 + -1;
        uVar6 = *puVar1 + 6;
        param_2 = puVar9 + uVar6;
        *(undefined8 *)puVar9 = *(undefined8 *)puVar2;
        *(undefined8 *)(puVar9 + 8) = *(undefined8 *)(puVar2 + 8);
        if ((uchar *)0x10 < (uchar *)(ulonglong)uVar6) {
          if (param_4 + (-8 - (longlong)puVar9) < (uchar *)(ulonglong)uVar6) goto LAB_14f3bbdd9;
          puVar8 = puVar2 + 0x18;
          *(undefined8 *)(puVar9 + 0x10) = *(undefined8 *)(puVar2 + 0x10);
          for (puVar9 = puVar9 + 0x18; puVar9 < param_2; puVar9 = puVar9 + 8) {
            uVar3 = *(undefined8 *)puVar8;
            puVar8 = puVar8 + 8;
            *(undefined8 *)puVar9 = uVar3;
          }
          lVar10 = (longlong)param_3 - (longlong)param_2 >> 6;
          pbVar19 = local_f0;
          if (lVar10 <= lVar20) {
            pbVar19 = pbVar11 + lVar10;
          }
        }
      }
      else {
        *(undefined8 *)puVar9 = *(undefined8 *)puVar2;
        param_2 = puVar9 + lVar10;
      }
    } while (pbVar11 < pbVar19);
  }
  while (pbVar11 < local_f0) {
    bVar5 = *pbVar11;
    pbVar11 = pbVar11 + 1;
    uVar15 = (ulonglong)(bVar5 >> 3 & 3);
    lVar20 = (ulonglong)(bVar5 & 7) + 2;
    *(int *)((longlong)&local_c0 + (longlong)(int)(uint)local_a0[7] * 4) = *piVar21;
    if (uVar15 == 3) {
      uVar15 = (ulonglong)*puVar22;
      puVar22 = puVar22 + 1;
    }
    if ((longlong)param_3 - (longlong)param_2 < (longlong)uVar15) {
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
        (*g_fp_OodleCore_Plugin_Printf)
                  (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x253,
                   "OODLE ERROR : corruption : (match_zone_end - to_ptr) >= lrl\n");
        ooLogErrorPost();
        return false;
      }
      goto LAB_14f3bbfd0;
    }
    uVar3 = *(undefined8 *)(param_2 + uVar18);
    uVar4 = *(undefined8 *)puVar14;
    *(ulonglong *)param_2 =
         CONCAT17((char)((ulonglong)uVar3 >> 0x38) + (char)((ulonglong)uVar4 >> 0x38),
                  CONCAT16((char)((ulonglong)uVar3 >> 0x30) + (char)((ulonglong)uVar4 >> 0x30),
                           CONCAT15((char)((ulonglong)uVar3 >> 0x28) +
                                    (char)((ulonglong)uVar4 >> 0x28),
                                    CONCAT14((char)((ulonglong)uVar3 >> 0x20) +
                                             (char)((ulonglong)uVar4 >> 0x20),
                                             CONCAT13((char)((ulonglong)uVar3 >> 0x18) +
                                                      (char)((ulonglong)uVar4 >> 0x18),
                                                      CONCAT12((char)((ulonglong)uVar3 >> 0x10) +
                                                               (char)((ulonglong)uVar4 >> 0x10),
                                                               CONCAT11((char)((ulonglong)uVar3 >> 8
                                                                              ) + (char)((ulonglong)
                                                                                         uVar4 >> 8)
                                                                        ,(char)uVar3 + (char)uVar4))
                                                     )))));
    if (8 < uVar15) {
      uVar3 = *(undefined8 *)(param_2 + uVar18 + 8);
      uVar4 = *(undefined8 *)(puVar14 + 8);
      *(ulonglong *)(param_2 + 8) =
           CONCAT17((char)((ulonglong)uVar3 >> 0x38) + (char)((ulonglong)uVar4 >> 0x38),
                    CONCAT16((char)((ulonglong)uVar3 >> 0x30) + (char)((ulonglong)uVar4 >> 0x30),
                             CONCAT15((char)((ulonglong)uVar3 >> 0x28) +
                                      (char)((ulonglong)uVar4 >> 0x28),
                                      CONCAT14((char)((ulonglong)uVar3 >> 0x20) +
                                               (char)((ulonglong)uVar4 >> 0x20),
                                               CONCAT13((char)((ulonglong)uVar3 >> 0x18) +
                                                        (char)((ulonglong)uVar4 >> 0x18),
                                                        CONCAT12((char)((ulonglong)uVar3 >> 0x10) +
                                                                 (char)((ulonglong)uVar4 >> 0x10),
                                                                 CONCAT11((char)((ulonglong)uVar3 >>
                                                                                8) +
                                                                          (char)((ulonglong)uVar4 >>
                                                                                8),(char)uVar3 +
                                                                                   (char)uVar4))))))
                   );
      if (0x10 < uVar15) {
        uVar3 = *(undefined8 *)(param_2 + uVar18 + 0x10);
        uVar4 = *(undefined8 *)(puVar14 + 0x10);
        *(ulonglong *)(param_2 + 0x10) =
             CONCAT17((char)((ulonglong)uVar3 >> 0x38) + (char)((ulonglong)uVar4 >> 0x38),
                      CONCAT16((char)((ulonglong)uVar3 >> 0x30) + (char)((ulonglong)uVar4 >> 0x30),
                               CONCAT15((char)((ulonglong)uVar3 >> 0x28) +
                                        (char)((ulonglong)uVar4 >> 0x28),
                                        CONCAT14((char)((ulonglong)uVar3 >> 0x20) +
                                                 (char)((ulonglong)uVar4 >> 0x20),
                                                 CONCAT13((char)((ulonglong)uVar3 >> 0x18) +
                                                          (char)((ulonglong)uVar4 >> 0x18),
                                                          CONCAT12((char)((ulonglong)uVar3 >> 0x10)
                                                                   + (char)((ulonglong)uVar4 >> 0x10
                                                                           ),
                                                                   CONCAT11((char)((ulonglong)uVar3
                                                                                  >> 8) +
                                                                            (char)((ulonglong)uVar4
                                                                                  >> 8),
                                                                            (char)uVar3 +
                                                                            (char)uVar4)))))));
        if (0x18 < uVar15) {
          param_2 = param_2 + 0x18;
          puVar14 = puVar14 + 0x18;
          uVar15 = uVar15 - 0x18;
          do {
            uVar3 = *(undefined8 *)(param_2 + uVar18);
            uVar15 = uVar15 - 8;
            uVar4 = *(undefined8 *)puVar14;
            puVar14 = puVar14 + 8;
            *(ulonglong *)param_2 =
                 CONCAT17((char)((ulonglong)uVar3 >> 0x38) + (char)((ulonglong)uVar4 >> 0x38),
                          CONCAT16((char)((ulonglong)uVar3 >> 0x30) +
                                   (char)((ulonglong)uVar4 >> 0x30),
                                   CONCAT15((char)((ulonglong)uVar3 >> 0x28) +
                                            (char)((ulonglong)uVar4 >> 0x28),
                                            CONCAT14((char)((ulonglong)uVar3 >> 0x20) +
                                                     (char)((ulonglong)uVar4 >> 0x20),
                                                     CONCAT13((char)((ulonglong)uVar3 >> 0x18) +
                                                              (char)((ulonglong)uVar4 >> 0x18),
                                                              CONCAT12((char)((ulonglong)uVar3 >>
                                                                             0x10) +
                                                                       (char)((ulonglong)uVar4 >>
                                                                             0x10),
                                                                       CONCAT11((char)((ulonglong)
                                                                                       uVar3 >> 8) +
                                                                                (char)((ulonglong)
                                                                                       uVar4 >> 8),
                                                                                (char)uVar3 +
                                                                                (char)uVar4)))))));
            param_2 = param_2 + 8;
          } while (0 < (longlong)uVar15);
        }
      }
    }
    auVar24._8_8_ = 0;
    auVar24._0_8_ = c_lo_shuffles[bVar5 >> 5];
    puVar9 = param_2 + uVar15;
    local_a0 = pshufb(local_a0,auVar24);
    puVar14 = puVar14 + uVar15;
    uVar18 = (ulonglong)*(int *)((longlong)&local_c0 + (ulonglong)local_a0[0] * 4);
    lVar10 = 0;
    if ((ulonglong)(bVar5 >> 5) == 7) {
      lVar10 = 4;
    }
    piVar21 = (int *)((longlong)piVar21 + lVar10);
    if (uVar18 < (ulonglong)((longlong)param_5 - (longlong)puVar9)) goto LAB_14f3bbe4e;
    puVar2 = puVar9 + uVar18;
    if (lVar20 == 9) {
      if (puVar12 <= puVar22) goto LAB_14f3bbe12;
      puVar1 = puVar12 + -1;
      puVar12 = puVar12 + -1;
      uVar6 = *puVar1 + 6;
      param_2 = puVar9 + uVar6;
      *(undefined8 *)puVar9 = *(undefined8 *)puVar2;
      *(undefined8 *)(puVar9 + 8) = *(undefined8 *)(puVar2 + 8);
      if ((uchar *)0x10 < (uchar *)(ulonglong)uVar6) {
        if (param_4 + (-8 - (longlong)puVar9) < (uchar *)(ulonglong)uVar6) goto LAB_14f3bbdd9;
        puVar8 = puVar2 + 0x18;
        *(undefined8 *)(puVar9 + 0x10) = *(undefined8 *)(puVar2 + 0x10);
        for (puVar9 = puVar9 + 0x18; puVar9 < param_2; puVar9 = puVar9 + 8) {
          uVar3 = *(undefined8 *)puVar8;
          puVar8 = puVar8 + 8;
          *(undefined8 *)puVar9 = uVar3;
        }
      }
    }
    else {
      *(undefined8 *)puVar9 = *(undefined8 *)puVar2;
      param_2 = puVar9 + lVar20;
    }
  }
  if (param_2 < param_4) {
    uVar15 = (longlong)param_4 - (longlong)param_2;
    if (7 < (longlong)uVar15) {
      uVar16 = uVar15 >> 3;
      uVar15 = uVar15 + uVar16 * -8;
      do {
        uVar3 = *(undefined8 *)(param_2 + uVar18);
        uVar4 = *(undefined8 *)puVar14;
        puVar14 = puVar14 + 8;
        *(ulonglong *)param_2 =
             CONCAT17((char)((ulonglong)uVar3 >> 0x38) + (char)((ulonglong)uVar4 >> 0x38),
                      CONCAT16((char)((ulonglong)uVar3 >> 0x30) + (char)((ulonglong)uVar4 >> 0x30),
                               CONCAT15((char)((ulonglong)uVar3 >> 0x28) +
                                        (char)((ulonglong)uVar4 >> 0x28),
                                        CONCAT14((char)((ulonglong)uVar3 >> 0x20) +
                                                 (char)((ulonglong)uVar4 >> 0x20),
                                                 CONCAT13((char)((ulonglong)uVar3 >> 0x18) +
                                                          (char)((ulonglong)uVar4 >> 0x18),
                                                          CONCAT12((char)((ulonglong)uVar3 >> 0x10)
                                                                   + (char)((ulonglong)uVar4 >> 0x10
                                                                           ),
                                                                   CONCAT11((char)((ulonglong)uVar3
                                                                                  >> 8) +
                                                                            (char)((ulonglong)uVar4
                                                                                  >> 8),
                                                                            (char)uVar3 +
                                                                            (char)uVar4)))))));
        param_2 = param_2 + 8;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
    if (uVar15 != 0) {
      lVar20 = (longlong)puVar14 - (longlong)param_2;
      do {
        *param_2 = param_2[lVar20] + param_2[uVar18];
        param_2 = param_2 + 1;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
  }
  if (param_2 == param_4) {
    if (piVar21 == local_e8) {
      if (puVar22 == puVar12) {
        return true;
      }
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto LAB_14f3bbfd0;
      pcVar17 = "OODLE ERROR : corruption : excesses_ptr == excesses_end_ptr\n";
      iVar13 = 0x197;
    }
    else {
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto LAB_14f3bbfd0;
      pcVar17 = "OODLE ERROR : corruption : offsets_ptr == offsets_end\n";
      iVar13 = 0x196;
    }
  }
  else {
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto LAB_14f3bbfd0;
    pcVar17 = "OODLE ERROR : corruption : to_ptr == chunk_end\n";
    iVar13 = 0x18d;
  }
  (*g_fp_OodleCore_Plugin_Printf)
            (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_outer.inl",iVar13,pcVar17);
LAB_14f3bbfd0:
  ooLogErrorPost();
  return false;
LAB_14f3bbe4e:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x2e2,
               "OODLE ERROR : corruption : (UINTa)neg_offset >= (UINTa) (window_base - to_ptr)\n");
    ooLogErrorPost();
    return false;
  }
  goto LAB_14f3bbfd0;
LAB_14f3bbe12:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x304,
               "OODLE ERROR : corruption : excesses_end_ptr > excesses_ptr\n");
    ooLogErrorPost();
    return false;
  }
  goto LAB_14f3bbfd0;
LAB_14f3bbdd9:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x322,
               "OODLE ERROR : corruption : (UINTa)(match_end - to_ptr) >= ml\n");
    ooLogErrorPost();
    return false;
  }
  goto LAB_14f3bbfd0;
}

// newLZHC_decode_parse_lamsub_sse4 @ 14f3bc020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
oo2::newLZHC_decode_parse_lamsub_sse4
          (newLZHC_chunk_arrays *param_1,uchar *param_2,uchar *param_3,uchar *param_4,uchar *param_5
          )

{
  uint *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  uchar uVar5;
  uint uVar6;
  longlong lVar7;
  uchar *puVar8;
  uchar *puVar9;
  uchar *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  int iVar13;
  uchar *puVar14;
  ulonglong uVar15;
  char *pcVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint *puVar19;
  int *piVar20;
  longlong lVar21;
  uint *puVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auStack_128 [40];
  uchar *local_100;
  uchar *local_f8;
  uchar *local_f0;
  byte *local_e8;
  int *local_e0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined1 local_a0 [16];
  ulonglong local_80;
  
  local_80 = __security_cookie.value ^ (ulonglong)auStack_128;
  piVar20 = param_1->offsets;
  uVar17 = 0xfffffffffffffff8;
  pbVar12 = param_1->packets;
  lVar21 = param_1->packets_count;
  puVar22 = param_1->excesses;
  local_100 = param_1->literals_ptrs[1];
  local_e0 = piVar20 + param_1->offsets_count;
  local_e8 = pbVar12 + lVar21;
  puVar14 = param_1->literals_ptrs[0];
  puVar19 = puVar22 + param_1->excesses_count;
  local_c0 = ___xmm_fffffff8fffffff8fffffff8fffffff8;
  uStack_b8 = _UNK_1531db198;
  local_b0 = 0xfffffff8;
  local_ac = 0xfffffff8;
  local_a8 = 0xfffffff8;
  if (0xf < (longlong)param_4 - (longlong)param_3) {
    param_3 = param_4 + -0x10;
  }
  lVar7 = (longlong)param_3 - (longlong)param_2 >> 6;
  lVar18 = lVar21;
  if (lVar7 <= lVar21) {
    lVar18 = lVar7;
  }
  pbVar11 = pbVar12 + lVar18;
  local_a0 = ___xmm_00000000000000000706050403020100;
  local_f8 = param_3;
  local_f0 = param_4;
  if (pbVar12 < pbVar11) {
    do {
      bVar4 = *pbVar12;
      lVar21 = lVar21 + -1;
      lVar18 = (ulonglong)(bVar4 & 7) + 2;
      pbVar12 = pbVar12 + 1;
      *(int *)((longlong)&local_c0 + (longlong)(int)(uint)local_a0[7] * 4) = *piVar20;
      if ((bVar4 & 0x18) != 0) {
        uVar6 = *puVar22;
        uVar15 = (ulonglong)((bVar4 & 0x18) >> 3);
        if (uVar15 == 3) {
          puVar22 = puVar22 + 1;
          uVar15 = (ulonglong)uVar6;
        }
        lVar7 = uVar15 - 1;
        if (lVar7 < 0) goto LAB_14f3bc4ae;
        uVar5 = *local_100;
        local_100 = local_100 + 1;
        *param_2 = uVar5 + param_2[uVar17];
        puVar9 = param_2 + 1;
        uVar2 = *(undefined8 *)puVar14;
        uVar3 = *(undefined8 *)(puVar9 + uVar17);
        *(ulonglong *)puVar9 =
             CONCAT17((char)((ulonglong)uVar3 >> 0x38) + (char)((ulonglong)uVar2 >> 0x38),
                      CONCAT16((char)((ulonglong)uVar3 >> 0x30) + (char)((ulonglong)uVar2 >> 0x30),
                               CONCAT15((char)((ulonglong)uVar3 >> 0x28) +
                                        (char)((ulonglong)uVar2 >> 0x28),
                                        CONCAT14((char)((ulonglong)uVar3 >> 0x20) +
                                                 (char)((ulonglong)uVar2 >> 0x20),
                                                 CONCAT13((char)((ulonglong)uVar3 >> 0x18) +
                                                          (char)((ulonglong)uVar2 >> 0x18),
                                                          CONCAT12((char)((ulonglong)uVar3 >> 0x10)
                                                                   + (char)((ulonglong)uVar2 >> 0x10
                                                                           ),
                                                                   CONCAT11((char)((ulonglong)uVar3
                                                                                  >> 8) +
                                                                            (char)((ulonglong)uVar2
                                                                                  >> 8),
                                                                            (char)uVar3 +
                                                                            (char)uVar2)))))));
        if (8 < lVar7) {
          uVar2 = *(undefined8 *)(param_2 + uVar17 + 9);
          uVar3 = *(undefined8 *)(puVar14 + 8);
          *(ulonglong *)(param_2 + 9) =
               CONCAT17((char)((ulonglong)uVar2 >> 0x38) + (char)((ulonglong)uVar3 >> 0x38),
                        CONCAT16((char)((ulonglong)uVar2 >> 0x30) + (char)((ulonglong)uVar3 >> 0x30)
                                 ,CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                           (char)((ulonglong)uVar3 >> 0x28),
                                           CONCAT14((char)((ulonglong)uVar2 >> 0x20) +
                                                    (char)((ulonglong)uVar3 >> 0x20),
                                                    CONCAT13((char)((ulonglong)uVar2 >> 0x18) +
                                                             (char)((ulonglong)uVar3 >> 0x18),
                                                             CONCAT12((char)((ulonglong)uVar2 >>
                                                                            0x10) +
                                                                      (char)((ulonglong)uVar3 >>
                                                                            0x10),
                                                                      CONCAT11((char)((ulonglong)
                                                                                      uVar2 >> 8) +
                                                                               (char)((ulonglong)
                                                                                      uVar3 >> 8),
                                                                               (char)uVar2 +
                                                                               (char)uVar3)))))));
          if (0x10 < lVar7) {
            uVar2 = *(undefined8 *)(param_2 + uVar17 + 0x11);
            uVar3 = *(undefined8 *)(puVar14 + 0x10);
            *(ulonglong *)(param_2 + 0x11) =
                 CONCAT17((char)((ulonglong)uVar2 >> 0x38) + (char)((ulonglong)uVar3 >> 0x38),
                          CONCAT16((char)((ulonglong)uVar2 >> 0x30) +
                                   (char)((ulonglong)uVar3 >> 0x30),
                                   CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                            (char)((ulonglong)uVar3 >> 0x28),
                                            CONCAT14((char)((ulonglong)uVar2 >> 0x20) +
                                                     (char)((ulonglong)uVar3 >> 0x20),
                                                     CONCAT13((char)((ulonglong)uVar2 >> 0x18) +
                                                              (char)((ulonglong)uVar3 >> 0x18),
                                                              CONCAT12((char)((ulonglong)uVar2 >>
                                                                             0x10) +
                                                                       (char)((ulonglong)uVar3 >>
                                                                             0x10),
                                                                       CONCAT11((char)((ulonglong)
                                                                                       uVar2 >> 8) +
                                                                                (char)((ulonglong)
                                                                                       uVar3 >> 8),
                                                                                (char)uVar2 +
                                                                                (char)uVar3)))))));
            if (0x17 < lVar7) {
              if ((longlong)param_3 - (longlong)puVar9 < lVar7) {
                ooLogErrorPre();
                if (g_fp_OodleCore_Plugin_Printf !=
                    (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
                  (*g_fp_OodleCore_Plugin_Printf)
                            (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",
                             0x292,"OODLE ERROR : corruption : (match_zone_end - to_ptr) >= (lrl)\n"
                            );
                  ooLogErrorPost();
                  return false;
                }
                goto LAB_14f3bc822;
              }
              lVar7 = ((longlong)param_3 - (longlong)puVar9) - lVar7 >> 6;
              pbVar11 = local_e8;
              if (lVar7 <= lVar21) {
                pbVar11 = pbVar12 + lVar7;
              }
              puVar9 = param_2 + 0x19;
              puVar14 = puVar14 + 0x18;
              lVar7 = uVar15 - 0x19;
              do {
                uVar2 = *(undefined8 *)(puVar9 + uVar17);
                lVar7 = lVar7 + -8;
                uVar3 = *(undefined8 *)puVar14;
                puVar14 = puVar14 + 8;
                *(ulonglong *)puVar9 =
                     CONCAT17((char)((ulonglong)uVar2 >> 0x38) + (char)((ulonglong)uVar3 >> 0x38),
                              CONCAT16((char)((ulonglong)uVar2 >> 0x30) +
                                       (char)((ulonglong)uVar3 >> 0x30),
                                       CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                                (char)((ulonglong)uVar3 >> 0x28),
                                                CONCAT14((char)((ulonglong)uVar2 >> 0x20) +
                                                         (char)((ulonglong)uVar3 >> 0x20),
                                                         CONCAT13((char)((ulonglong)uVar2 >> 0x18) +
                                                                  (char)((ulonglong)uVar3 >> 0x18),
                                                                  CONCAT12((char)((ulonglong)uVar2
                                                                                 >> 0x10) +
                                                                           (char)((ulonglong)uVar3
                                                                                 >> 0x10),
                                                                           CONCAT11((char)((
                                                  ulonglong)uVar2 >> 8) +
                                                  (char)((ulonglong)uVar3 >> 8),
                                                  (char)uVar2 + (char)uVar3)))))));
                puVar9 = puVar9 + 8;
              } while (0 < lVar7);
            }
          }
        }
        param_2 = puVar9 + lVar7;
        puVar14 = puVar14 + lVar7;
      }
      auVar23._8_8_ = 0;
      auVar23._0_8_ = c_lo_shuffles[bVar4 >> 5];
      local_a0 = pshufb(local_a0,auVar23);
      uVar17 = (ulonglong)*(int *)((longlong)&local_c0 + (ulonglong)local_a0[0] * 4);
      lVar7 = 0;
      if ((ulonglong)(bVar4 >> 5) == 7) {
        lVar7 = 4;
      }
      piVar20 = (int *)((longlong)piVar20 + lVar7);
      if (uVar17 < (ulonglong)((longlong)param_5 - (longlong)param_2)) goto LAB_14f3bc56e;
      puVar9 = param_2 + uVar17;
      if (lVar18 == 9) {
        if (puVar19 <= puVar22) goto LAB_14f3bc52e;
        puVar1 = puVar19 + -1;
        puVar19 = puVar19 + -1;
        uVar6 = *puVar1 + 6;
        puVar10 = param_2 + uVar6;
        *(undefined8 *)param_2 = *(undefined8 *)puVar9;
        *(undefined8 *)(param_2 + 8) = *(undefined8 *)(puVar9 + 8);
        if ((uchar *)0x10 < (uchar *)(ulonglong)uVar6) {
          if (param_4 + (-8 - (longlong)param_2) < (uchar *)(ulonglong)uVar6) goto LAB_14f3bc4ee;
          puVar8 = puVar9 + 0x18;
          *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(puVar9 + 0x10);
          for (puVar9 = param_2 + 0x18; puVar9 < puVar10; puVar9 = puVar9 + 8) {
            uVar2 = *(undefined8 *)puVar8;
            puVar8 = puVar8 + 8;
            *(undefined8 *)puVar9 = uVar2;
          }
          lVar18 = (longlong)param_3 - (longlong)puVar10 >> 6;
          pbVar11 = local_e8;
          if (lVar18 <= lVar21) {
            pbVar11 = pbVar12 + lVar18;
          }
        }
      }
      else {
        *(undefined8 *)param_2 = *(undefined8 *)puVar9;
        puVar10 = param_2 + lVar18;
      }
      param_2 = puVar10;
    } while (pbVar12 < pbVar11);
  }
  while (puVar9 = param_2, pbVar12 < local_e8) {
    bVar4 = *pbVar12;
    pbVar12 = pbVar12 + 1;
    lVar21 = (ulonglong)(bVar4 & 7) + 2;
    *(int *)((longlong)&local_c0 + (longlong)(int)(uint)local_a0[7] * 4) = *piVar20;
    if ((bVar4 & 0x18) == 0) {
      if ((longlong)param_3 - (longlong)puVar9 < 0) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          (*g_fp_OodleCore_Plugin_Printf)
                    (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",699,
                     "OODLE ERROR : corruption : (match_zone_end - to_ptr) >= 0\n");
          ooLogErrorPost();
          return false;
        }
        goto LAB_14f3bc822;
      }
    }
    else {
      uVar6 = *puVar22;
      uVar15 = (ulonglong)((bVar4 & 0x18) >> 3);
      if (uVar15 == 3) {
        puVar22 = puVar22 + 1;
        uVar15 = (ulonglong)uVar6;
      }
      if ((longlong)param_3 - (longlong)puVar9 < (longlong)uVar15) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          (*g_fp_OodleCore_Plugin_Printf)
                    (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x253,
                     "OODLE ERROR : corruption : (match_zone_end - to_ptr) >= lrl\n");
          ooLogErrorPost();
          return false;
        }
        goto LAB_14f3bc822;
      }
      lVar18 = uVar15 - 1;
      if (lVar18 < 0) goto LAB_14f3bc4ae;
      uVar5 = *local_100;
      local_100 = local_100 + 1;
      *puVar9 = uVar5 + puVar9[uVar17];
      puVar10 = puVar9 + 1;
      uVar2 = *(undefined8 *)puVar14;
      uVar3 = *(undefined8 *)(puVar10 + uVar17);
      *(ulonglong *)puVar10 =
           CONCAT17((char)((ulonglong)uVar3 >> 0x38) + (char)((ulonglong)uVar2 >> 0x38),
                    CONCAT16((char)((ulonglong)uVar3 >> 0x30) + (char)((ulonglong)uVar2 >> 0x30),
                             CONCAT15((char)((ulonglong)uVar3 >> 0x28) +
                                      (char)((ulonglong)uVar2 >> 0x28),
                                      CONCAT14((char)((ulonglong)uVar3 >> 0x20) +
                                               (char)((ulonglong)uVar2 >> 0x20),
                                               CONCAT13((char)((ulonglong)uVar3 >> 0x18) +
                                                        (char)((ulonglong)uVar2 >> 0x18),
                                                        CONCAT12((char)((ulonglong)uVar3 >> 0x10) +
                                                                 (char)((ulonglong)uVar2 >> 0x10),
                                                                 CONCAT11((char)((ulonglong)uVar3 >>
                                                                                8) +
                                                                          (char)((ulonglong)uVar2 >>
                                                                                8),(char)uVar3 +
                                                                                   (char)uVar2))))))
                   );
      if (8 < lVar18) {
        uVar2 = *(undefined8 *)(puVar9 + uVar17 + 9);
        uVar3 = *(undefined8 *)(puVar14 + 8);
        *(ulonglong *)(puVar9 + 9) =
             CONCAT17((char)((ulonglong)uVar2 >> 0x38) + (char)((ulonglong)uVar3 >> 0x38),
                      CONCAT16((char)((ulonglong)uVar2 >> 0x30) + (char)((ulonglong)uVar3 >> 0x30),
                               CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                        (char)((ulonglong)uVar3 >> 0x28),
                                        CONCAT14((char)((ulonglong)uVar2 >> 0x20) +
                                                 (char)((ulonglong)uVar3 >> 0x20),
                                                 CONCAT13((char)((ulonglong)uVar2 >> 0x18) +
                                                          (char)((ulonglong)uVar3 >> 0x18),
                                                          CONCAT12((char)((ulonglong)uVar2 >> 0x10)
                                                                   + (char)((ulonglong)uVar3 >> 0x10
                                                                           ),
                                                                   CONCAT11((char)((ulonglong)uVar2
                                                                                  >> 8) +
                                                                            (char)((ulonglong)uVar3
                                                                                  >> 8),
                                                                            (char)uVar2 +
                                                                            (char)uVar3)))))));
        if (0x10 < lVar18) {
          uVar2 = *(undefined8 *)(puVar9 + uVar17 + 0x11);
          uVar3 = *(undefined8 *)(puVar14 + 0x10);
          *(ulonglong *)(puVar9 + 0x11) =
               CONCAT17((char)((ulonglong)uVar2 >> 0x38) + (char)((ulonglong)uVar3 >> 0x38),
                        CONCAT16((char)((ulonglong)uVar2 >> 0x30) + (char)((ulonglong)uVar3 >> 0x30)
                                 ,CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                           (char)((ulonglong)uVar3 >> 0x28),
                                           CONCAT14((char)((ulonglong)uVar2 >> 0x20) +
                                                    (char)((ulonglong)uVar3 >> 0x20),
                                                    CONCAT13((char)((ulonglong)uVar2 >> 0x18) +
                                                             (char)((ulonglong)uVar3 >> 0x18),
                                                             CONCAT12((char)((ulonglong)uVar2 >>
                                                                            0x10) +
                                                                      (char)((ulonglong)uVar3 >>
                                                                            0x10),
                                                                      CONCAT11((char)((ulonglong)
                                                                                      uVar2 >> 8) +
                                                                               (char)((ulonglong)
                                                                                      uVar3 >> 8),
                                                                               (char)uVar2 +
                                                                               (char)uVar3)))))));
          if (0x17 < lVar18) {
            puVar10 = puVar9 + 0x19;
            puVar14 = puVar14 + 0x18;
            lVar18 = uVar15 - 0x19;
            do {
              uVar2 = *(undefined8 *)(puVar10 + uVar17);
              lVar18 = lVar18 + -8;
              uVar3 = *(undefined8 *)puVar14;
              puVar14 = puVar14 + 8;
              *(ulonglong *)puVar10 =
                   CONCAT17((char)((ulonglong)uVar2 >> 0x38) + (char)((ulonglong)uVar3 >> 0x38),
                            CONCAT16((char)((ulonglong)uVar2 >> 0x30) +
                                     (char)((ulonglong)uVar3 >> 0x30),
                                     CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                              (char)((ulonglong)uVar3 >> 0x28),
                                              CONCAT14((char)((ulonglong)uVar2 >> 0x20) +
                                                       (char)((ulonglong)uVar3 >> 0x20),
                                                       CONCAT13((char)((ulonglong)uVar2 >> 0x18) +
                                                                (char)((ulonglong)uVar3 >> 0x18),
                                                                CONCAT12((char)((ulonglong)uVar2 >>
                                                                               0x10) +
                                                                         (char)((ulonglong)uVar3 >>
                                                                               0x10),
                                                                         CONCAT11((char)((ulonglong)
                                                                                         uVar2 >> 8)
                                                                                  + (char)((
                                                  ulonglong)uVar3 >> 8),(char)uVar2 + (char)uVar3)))
                                                  ))));
              puVar10 = puVar10 + 8;
            } while (0 < lVar18);
          }
        }
      }
      puVar9 = puVar10 + lVar18;
      puVar14 = puVar14 + lVar18;
    }
    auVar24._8_8_ = 0;
    auVar24._0_8_ = c_lo_shuffles[bVar4 >> 5];
    local_a0 = pshufb(local_a0,auVar24);
    uVar17 = (ulonglong)*(int *)((longlong)&local_c0 + (ulonglong)local_a0[0] * 4);
    lVar18 = 0;
    if ((ulonglong)(bVar4 >> 5) == 7) {
      lVar18 = 4;
    }
    piVar20 = (int *)((longlong)piVar20 + lVar18);
    if (uVar17 < (ulonglong)((longlong)param_5 - (longlong)puVar9)) goto LAB_14f3bc56e;
    puVar10 = puVar9 + uVar17;
    if (lVar21 == 9) {
      if (puVar19 <= puVar22) goto LAB_14f3bc52e;
      puVar1 = puVar19 + -1;
      puVar19 = puVar19 + -1;
      uVar6 = *puVar1 + 6;
      param_2 = puVar9 + uVar6;
      *(undefined8 *)puVar9 = *(undefined8 *)puVar10;
      *(undefined8 *)(puVar9 + 8) = *(undefined8 *)(puVar10 + 8);
      if ((uchar *)0x10 < (uchar *)(ulonglong)uVar6) {
        if (param_4 + (-8 - (longlong)puVar9) < (uchar *)(ulonglong)uVar6) goto LAB_14f3bc4ee;
        puVar8 = puVar10 + 0x18;
        *(undefined8 *)(puVar9 + 0x10) = *(undefined8 *)(puVar10 + 0x10);
        for (puVar9 = puVar9 + 0x18; puVar9 < param_2; puVar9 = puVar9 + 8) {
          uVar2 = *(undefined8 *)puVar8;
          puVar8 = puVar8 + 8;
          *(undefined8 *)puVar9 = uVar2;
        }
      }
    }
    else {
      *(undefined8 *)puVar9 = *(undefined8 *)puVar10;
      param_2 = puVar9 + lVar21;
    }
  }
  if (puVar9 < param_4) {
    *puVar9 = puVar9[uVar17] + *local_100;
    puVar10 = param_4 + (-1 - (longlong)puVar9);
    puVar9 = puVar9 + 1;
    if (7 < (longlong)puVar10) {
      uVar15 = (ulonglong)puVar10 >> 3;
      puVar10 = puVar10 + uVar15 * -8;
      do {
        uVar2 = *(undefined8 *)(puVar9 + uVar17);
        uVar3 = *(undefined8 *)puVar14;
        puVar14 = puVar14 + 8;
        *(ulonglong *)puVar9 =
             CONCAT17((char)((ulonglong)uVar2 >> 0x38) + (char)((ulonglong)uVar3 >> 0x38),
                      CONCAT16((char)((ulonglong)uVar2 >> 0x30) + (char)((ulonglong)uVar3 >> 0x30),
                               CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                        (char)((ulonglong)uVar3 >> 0x28),
                                        CONCAT14((char)((ulonglong)uVar2 >> 0x20) +
                                                 (char)((ulonglong)uVar3 >> 0x20),
                                                 CONCAT13((char)((ulonglong)uVar2 >> 0x18) +
                                                          (char)((ulonglong)uVar3 >> 0x18),
                                                          CONCAT12((char)((ulonglong)uVar2 >> 0x10)
                                                                   + (char)((ulonglong)uVar3 >> 0x10
                                                                           ),
                                                                   CONCAT11((char)((ulonglong)uVar2
                                                                                  >> 8) +
                                                                            (char)((ulonglong)uVar3
                                                                                  >> 8),
                                                                            (char)uVar2 +
                                                                            (char)uVar3)))))));
        puVar9 = puVar9 + 8;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    if (puVar10 != (uchar *)0x0) {
      lVar21 = (longlong)puVar14 - (longlong)puVar9;
      do {
        *puVar9 = puVar9[lVar21] + puVar9[uVar17];
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + -1;
      } while (puVar10 != (uchar *)0x0);
    }
  }
  if (puVar9 == param_4) {
    if (piVar20 == local_e0) {
      if (puVar22 == puVar19) {
        return true;
      }
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto LAB_14f3bc822;
      pcVar16 = "OODLE ERROR : corruption : excesses_ptr == excesses_end_ptr\n";
      iVar13 = 0x197;
    }
    else {
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto LAB_14f3bc822;
      pcVar16 = "OODLE ERROR : corruption : offsets_ptr == offsets_end\n";
      iVar13 = 0x196;
    }
  }
  else {
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto LAB_14f3bc822;
    pcVar16 = "OODLE ERROR : corruption : to_ptr == chunk_end\n";
    iVar13 = 0x18d;
  }
  (*g_fp_OodleCore_Plugin_Printf)
            (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_outer.inl",iVar13,pcVar16);
LAB_14f3bc822:
  ooLogErrorPost();
  return false;
LAB_14f3bc4ae:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x264,
               "OODLE ERROR : corruption : lrl >= 0\n");
    ooLogErrorPost();
    return false;
  }
  goto LAB_14f3bc822;
LAB_14f3bc56e:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x2e2,
               "OODLE ERROR : corruption : (UINTa)neg_offset >= (UINTa) (window_base - to_ptr)\n");
    ooLogErrorPost();
    return false;
  }
  goto LAB_14f3bc822;
LAB_14f3bc52e:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x304,
               "OODLE ERROR : corruption : excesses_end_ptr > excesses_ptr\n");
    ooLogErrorPost();
    return false;
  }
  goto LAB_14f3bc822;
LAB_14f3bc4ee:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x322,
               "OODLE ERROR : corruption : (UINTa)(match_end - to_ptr) >= ml\n");
    ooLogErrorPost();
    return false;
  }
  goto LAB_14f3bc822;
}

// newLZHC_decode_parse_suband3_sse4 @ 14f3bc860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
oo2::newLZHC_decode_parse_suband3_sse4
          (newLZHC_chunk_arrays *param_1,uchar *param_2,uchar *param_3,uchar *param_4,uchar *param_5
          )

{
  uint *puVar1;
  undefined8 uVar2;
  byte bVar3;
  uchar uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  uchar *puVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  uchar *puVar24;
  byte *pbVar25;
  longlong lVar26;
  longlong lVar27;
  uchar *puVar28;
  ulonglong uVar29;
  char *pcVar30;
  uchar *puVar31;
  uchar *puVar32;
  uchar *puVar33;
  uint *puVar34;
  byte *pbVar35;
  uint *puVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auStack_188 [72];
  uchar *local_140;
  byte *local_138;
  uchar *local_130;
  int *local_128;
  uchar *local_120;
  uchar *local_118;
  longlong local_110;
  uint *local_108;
  int *local_100;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined1 local_a0 [16];
  int local_80 [4];
  int local_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStack_188;
  local_140 = param_1->literals_ptrs[0];
  local_128 = param_1->offsets;
  pbVar35 = param_1->packets;
  lVar27 = param_1->packets_count;
  puVar34 = param_1->excesses;
  local_100 = local_128 + param_1->offsets_count;
  local_138 = pbVar35 + lVar27;
  uVar29 = 0xfffffffffffffff8;
  uVar19 = (uint)param_3;
  local_a0 = ___xmm_00000000000000000706050403020100;
  local_c0 = ___xmm_fffffff8fffffff8fffffff8fffffff8;
  uStack_b8 = _UNK_1531db198;
  puVar36 = puVar34 + param_1->excesses_count;
  local_b0 = 0xfffffff8;
  local_ac = 0xfffffff8;
  local_a8 = 0xfffffff8;
  iVar18 = (int)local_140;
  iVar15 = *(int *)(param_1->literals_ptrs + (-uVar19 & 3)) - iVar18;
  local_80[0] = iVar15;
  iVar16 = *(int *)(param_1->literals_ptrs + (1 - uVar19 & 3)) - iVar18;
  local_80[1] = iVar16;
  iVar17 = *(int *)(param_1->literals_ptrs + (-uVar19 - 2 & 3)) - iVar18;
  local_80[2] = iVar17;
  iVar18 = *(int *)(param_1->literals_ptrs + (~uVar19 & 3)) - iVar18;
  local_80[3] = iVar18;
  local_70 = iVar15;
  iStack_6c = iVar16;
  iStack_68 = iVar17;
  iStack_64 = iVar18;
  if (0xf < (longlong)param_4 - (longlong)param_3) {
    param_3 = param_4 + -0x10;
  }
  lVar22 = (longlong)param_3 - (longlong)param_2 >> 6;
  lVar26 = lVar27;
  if (lVar22 <= lVar27) {
    lVar26 = lVar22;
  }
  pbVar25 = pbVar35 + lVar26;
  iVar15 = local_70;
  iVar16 = iStack_6c;
  iVar17 = iStack_68;
  iVar18 = iStack_64;
  local_130 = param_3;
  local_120 = param_4;
  if (pbVar35 < pbVar25) {
    do {
      bVar3 = *pbVar35;
      lVar27 = lVar27 + -1;
      pbVar35 = pbVar35 + 1;
      lVar26 = (ulonglong)(bVar3 & 7) + 2;
      *(int *)((longlong)&local_c0 + (longlong)(int)(uint)local_a0[7] * 4) = *local_128;
      uVar23 = (ulonglong)((uint)param_2 & 3);
      puVar32 = local_140 + local_80[uVar23];
      puVar31 = local_140 + local_80[uVar23 + 1];
      local_110 = lVar27;
      if ((bVar3 & 0x18) == 0x18) {
        uVar19 = *puVar34;
        uVar21 = (ulonglong)uVar19;
        puVar34 = puVar34 + 1;
        local_118 = local_140 + local_80[uVar23 + 3];
        uVar5 = *(undefined4 *)puVar32;
        puVar33 = local_140 + local_80[uVar23 + 2];
        uVar6 = *(undefined4 *)puVar33;
        iVar15 = (uVar19 + v_advance_tab[uVar23][0] >> 2) + iVar15;
        iVar16 = (uVar19 + v_advance_tab[uVar23][1] >> 2) + iVar16;
        iVar17 = (uVar19 + v_advance_tab[uVar23][2] >> 2) + iVar17;
        iVar18 = (uVar19 + v_advance_tab[uVar23][3] >> 2) + iVar18;
        local_80[0] = iVar15;
        local_80[1] = iVar16;
        local_80[2] = iVar17;
        local_80[3] = iVar18;
        local_70 = iVar15;
        iStack_6c = iVar16;
        iStack_68 = iVar17;
        iStack_64 = iVar18;
        uVar7 = *(undefined4 *)puVar31;
        uVar8 = *(undefined4 *)local_118;
        uVar2 = *(undefined8 *)(param_2 + uVar29);
        *(ulonglong *)param_2 =
             CONCAT17((char)((ulonglong)uVar2 >> 0x38) + (char)((uint)uVar8 >> 8),
                      CONCAT16((char)((ulonglong)uVar2 >> 0x30) + (char)((uint)uVar6 >> 8),
                               CONCAT15((char)((ulonglong)uVar2 >> 0x28) + (char)((uint)uVar7 >> 8),
                                        CONCAT14((char)((ulonglong)uVar2 >> 0x20) +
                                                 (char)((uint)uVar5 >> 8),
                                                 CONCAT13((char)((ulonglong)uVar2 >> 0x18) +
                                                          (char)uVar8,
                                                          CONCAT12((char)((ulonglong)uVar2 >> 0x10)
                                                                   + (char)uVar6,
                                                                   CONCAT11((char)((ulonglong)uVar2
                                                                                  >> 8) +
                                                                            (char)uVar7,
                                                                            (char)uVar2 +
                                                                            (char)uVar5)))))));
        local_108 = puVar34;
        if (8 < uVar21) {
          uVar2 = *(undefined8 *)(param_2 + uVar29 + 8);
          *(ulonglong *)(param_2 + 8) =
               CONCAT17((char)((ulonglong)uVar2 >> 0x38) + (char)((uint)uVar8 >> 0x18),
                        CONCAT16((char)((ulonglong)uVar2 >> 0x30) + (char)((uint)uVar6 >> 0x18),
                                 CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                          (char)((uint)uVar7 >> 0x18),
                                          CONCAT14((char)((ulonglong)uVar2 >> 0x20) +
                                                   (char)((uint)uVar5 >> 0x18),
                                                   CONCAT13((char)((ulonglong)uVar2 >> 0x18) +
                                                            (char)((uint)uVar8 >> 0x10),
                                                            CONCAT12((char)((ulonglong)uVar2 >> 0x10
                                                                           ) + (char)((uint)uVar6 >>
                                                                                     0x10),
                                                                     CONCAT11((char)((ulonglong)
                                                                                     uVar2 >> 8) +
                                                                              (char)((uint)uVar7 >>
                                                                                    0x10),
                                                                              (char)uVar2 +
                                                                              (char)((uint)uVar5 >>
                                                                                    0x10))))))));
          if (0x10 < uVar19) {
            uVar5 = *(undefined4 *)(puVar31 + 4);
            uVar6 = *(undefined4 *)(puVar32 + 4);
            uVar7 = *(undefined4 *)(puVar33 + 4);
            uVar8 = *(undefined4 *)(local_118 + 4);
            uVar2 = *(undefined8 *)(param_2 + uVar29 + 0x10);
            *(ulonglong *)(param_2 + 0x10) =
                 CONCAT17((char)((ulonglong)uVar2 >> 0x38) + (char)((uint)uVar8 >> 8),
                          CONCAT16((char)((ulonglong)uVar2 >> 0x30) + (char)((uint)uVar7 >> 8),
                                   CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                            (char)((uint)uVar5 >> 8),
                                            CONCAT14((char)((ulonglong)uVar2 >> 0x20) +
                                                     (char)((uint)uVar6 >> 8),
                                                     CONCAT13((char)((ulonglong)uVar2 >> 0x18) +
                                                              (char)uVar8,
                                                              CONCAT12((char)((ulonglong)uVar2 >>
                                                                             0x10) + (char)uVar7,
                                                                       CONCAT11((char)((ulonglong)
                                                                                       uVar2 >> 8) +
                                                                                (char)uVar5,
                                                                                (char)uVar2 +
                                                                                (char)uVar6)))))));
            if (0x18 < uVar19) {
              if ((longlong)param_3 - (longlong)param_2 < (longlong)uVar21) {
                ooLogErrorPre();
                if (g_fp_OodleCore_Plugin_Printf !=
                    (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
                  (*g_fp_OodleCore_Plugin_Printf)
                            (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",
                             0x1e0,"OODLE ERROR : corruption : (match_zone_end - to_ptr) >= (lrl)\n"
                            );
                  ooLogErrorPost();
                  return false;
                }
                goto LAB_14f3bd454;
              }
              uVar2 = *(undefined8 *)(param_2 + uVar29 + 0x18);
              lVar22 = (longlong)(((longlong)param_3 - (longlong)param_2) - uVar21) >> 6;
              *(ulonglong *)(param_2 + 0x18) =
                   CONCAT17((char)((ulonglong)uVar2 >> 0x38) + (char)((uint)uVar8 >> 0x18),
                            CONCAT16((char)((ulonglong)uVar2 >> 0x30) + (char)((uint)uVar7 >> 0x18),
                                     CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                              (char)((uint)uVar5 >> 0x18),
                                              CONCAT14((char)((ulonglong)uVar2 >> 0x20) +
                                                       (char)((uint)uVar6 >> 0x18),
                                                       CONCAT13((char)((ulonglong)uVar2 >> 0x18) +
                                                                (char)((uint)uVar8 >> 0x10),
                                                                CONCAT12((char)((ulonglong)uVar2 >>
                                                                               0x10) +
                                                                         (char)((uint)uVar7 >> 0x10)
                                                                         ,CONCAT11((char)((ulonglong
                                                                                          )uVar2 >>
                                                                                         8) +
                                                                                   (char)((uint)
                                                  uVar5 >> 0x10),
                                                  (char)uVar2 + (char)((uint)uVar6 >> 0x10))))))));
              pbVar25 = local_138;
              if (lVar22 <= lVar27) {
                pbVar25 = pbVar35 + lVar22;
              }
              puVar24 = param_2 + 0x20;
              uVar23 = uVar21 - 0x20;
              uVar21 = uVar23;
              param_2 = puVar24;
              if (0 < (longlong)uVar23) {
                puVar20 = puVar24 + uVar29;
                puVar28 = local_118 + 6;
                puVar33 = puVar33 + 6;
                puVar31 = puVar31 + 6;
                puVar32 = puVar32 + 6;
                do {
                  uVar5 = *(undefined4 *)(puVar31 + 2);
                  uVar6 = *(undefined4 *)(puVar32 + 2);
                  uVar7 = *(undefined4 *)(puVar33 + 2);
                  uVar8 = *(undefined4 *)(puVar28 + 2);
                  uVar2 = *(undefined8 *)puVar20;
                  *(ulonglong *)puVar24 =
                       CONCAT17((char)((ulonglong)uVar2 >> 0x38) + (char)((uint)uVar8 >> 8),
                                CONCAT16((char)((ulonglong)uVar2 >> 0x30) + (char)((uint)uVar7 >> 8)
                                         ,CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                                   (char)((uint)uVar5 >> 8),
                                                   CONCAT14((char)((ulonglong)uVar2 >> 0x20) +
                                                            (char)((uint)uVar6 >> 8),
                                                            CONCAT13((char)((ulonglong)uVar2 >> 0x18
                                                                           ) + (char)uVar8,
                                                                     CONCAT12((char)((ulonglong)
                                                                                     uVar2 >> 0x10)
                                                                              + (char)uVar7,
                                                                              CONCAT11((char)((
                                                  ulonglong)uVar2 >> 8) + (char)uVar5,
                                                  (char)uVar2 + (char)uVar6)))))));
                  uVar21 = uVar23 - 8;
                  param_2 = puVar24 + 8;
                  if ((longlong)(uVar23 - 8) < 1) break;
                  uVar2 = *(undefined8 *)(puVar20 + 8);
                  puVar32 = puVar32 + 4;
                  puVar31 = puVar31 + 4;
                  puVar33 = puVar33 + 4;
                  *(ulonglong *)(puVar24 + 8) =
                       CONCAT17((char)((ulonglong)uVar2 >> 0x38) + (char)((uint)uVar8 >> 0x18),
                                CONCAT16((char)((ulonglong)uVar2 >> 0x30) +
                                         (char)((uint)uVar7 >> 0x18),
                                         CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                                  (char)((uint)uVar5 >> 0x18),
                                                  CONCAT14((char)((ulonglong)uVar2 >> 0x20) +
                                                           (char)((uint)uVar6 >> 0x18),
                                                           CONCAT13((char)((ulonglong)uVar2 >> 0x18)
                                                                    + (char)((uint)uVar8 >> 0x10),
                                                                    CONCAT12((char)((ulonglong)uVar2
                                                                                   >> 0x10) +
                                                                             (char)((uint)uVar7 >>
                                                                                   0x10),
                                                                             CONCAT11((char)((
                                                  ulonglong)uVar2 >> 8) +
                                                  (char)((uint)uVar5 >> 0x10),
                                                  (char)uVar2 + (char)((uint)uVar6 >> 0x10))))))));
                  puVar28 = puVar28 + 4;
                  puVar24 = puVar24 + 0x10;
                  puVar20 = puVar20 + 0x10;
                  uVar23 = uVar23 - 0x10;
                  uVar21 = uVar23;
                  param_2 = puVar24;
                } while (0 < (longlong)uVar23);
              }
            }
          }
        }
        puVar31 = param_2 + uVar21;
      }
      else {
        uVar19 = (bVar3 & 0x18) >> 3;
        iVar10 = v_advance_tab[uVar23][0];
        iVar11 = v_advance_tab[uVar23][1];
        iVar12 = v_advance_tab[uVar23][2];
        iVar13 = v_advance_tab[uVar23][3];
        *param_2 = *puVar32 + param_2[uVar29];
        iVar15 = (uVar19 + iVar10 >> 2) + iVar15;
        iVar16 = (uVar19 + iVar11 >> 2) + iVar16;
        iVar17 = (uVar19 + iVar12 >> 2) + iVar17;
        iVar18 = (uVar19 + iVar13 >> 2) + iVar18;
        param_2[1] = param_2[uVar29 + 1] + *puVar31;
        puVar31 = param_2 + uVar19;
        local_80[0] = iVar15;
        local_80[1] = iVar16;
        local_80[2] = iVar17;
        local_80[3] = iVar18;
        local_70 = iVar15;
        iStack_6c = iVar16;
        iStack_68 = iVar17;
        iStack_64 = iVar18;
      }
      auVar37._8_8_ = 0;
      auVar37._0_8_ = c_lo_shuffles[bVar3 >> 5];
      local_a0 = pshufb(local_a0,auVar37);
      uVar29 = (ulonglong)*(int *)((longlong)&local_c0 + (ulonglong)local_a0[0] * 4);
      lVar22 = 0;
      if ((ulonglong)(bVar3 >> 5) == 7) {
        lVar22 = 4;
      }
      local_128 = (int *)((longlong)local_128 + lVar22);
      local_70 = iVar15;
      iStack_6c = iVar16;
      iStack_68 = iVar17;
      iStack_64 = iVar18;
      if (uVar29 < (ulonglong)((longlong)param_5 - (longlong)puVar31)) goto LAB_14f3bd06e;
      puVar32 = puVar31 + uVar29;
      if (lVar26 == 9) {
        if (puVar36 <= puVar34) goto LAB_14f3bd02e;
        puVar1 = puVar36 + -1;
        puVar36 = puVar36 + -1;
        uVar19 = *puVar1 + 6;
        param_2 = puVar31 + uVar19;
        *(undefined8 *)puVar31 = *(undefined8 *)puVar32;
        *(undefined8 *)(puVar31 + 8) = *(undefined8 *)(puVar32 + 8);
        if ((uchar *)0x10 < (uchar *)(ulonglong)uVar19) {
          if (param_4 + (-8 - (longlong)puVar31) < (uchar *)(ulonglong)uVar19) goto LAB_14f3bcfee;
          puVar33 = puVar32 + 0x18;
          *(undefined8 *)(puVar31 + 0x10) = *(undefined8 *)(puVar32 + 0x10);
          for (puVar31 = puVar31 + 0x18; puVar31 < param_2; puVar31 = puVar31 + 8) {
            uVar2 = *(undefined8 *)puVar33;
            puVar33 = puVar33 + 8;
            *(undefined8 *)puVar31 = uVar2;
          }
          lVar26 = (longlong)param_3 - (longlong)param_2 >> 6;
          pbVar25 = local_138;
          if (lVar26 <= lVar27) {
            pbVar25 = pbVar35 + lVar26;
          }
        }
      }
      else {
        *(undefined8 *)puVar31 = *(undefined8 *)puVar32;
        param_2 = puVar31 + lVar26;
      }
    } while (pbVar35 < pbVar25);
  }
  while (uVar19 = (uint)param_2, local_80[0] = iVar15, local_80[1] = iVar16, local_80[2] = iVar17,
        local_80[3] = iVar18, local_70 = iVar15, iStack_6c = iVar16, iStack_68 = iVar17,
        iStack_64 = iVar18, pbVar35 < local_138) {
    bVar3 = *pbVar35;
    pbVar35 = pbVar35 + 1;
    lVar27 = (ulonglong)(bVar3 & 7) + 2;
    *(int *)((longlong)&local_c0 + (longlong)(int)(uint)local_a0[7] * 4) = *local_128;
    if ((bVar3 & 0x18) == 0x18) {
      uVar9 = *puVar34;
      uVar23 = (ulonglong)uVar9;
      puVar34 = puVar34 + 1;
      if ((longlong)param_3 - (longlong)param_2 < (longlong)uVar23) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          (*g_fp_OodleCore_Plugin_Printf)
                    (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x1aa,
                     "OODLE ERROR : corruption : (match_zone_end - to_ptr) >= lrl\n");
          ooLogErrorPost();
          return false;
        }
        goto LAB_14f3bd454;
      }
      uVar21 = (ulonglong)(uVar19 & 3);
      puVar24 = local_140 + local_80[uVar21];
      puVar33 = local_140 + local_80[uVar21 + 1];
      puVar31 = local_140 + local_80[uVar21 + 2];
      puVar32 = local_140 + local_80[uVar21 + 3];
      uVar5 = *(undefined4 *)puVar24;
      uVar6 = *(undefined4 *)puVar31;
      local_70 = (uVar9 + v_advance_tab[uVar21][0] >> 2) + iVar15;
      iStack_6c = (uVar9 + v_advance_tab[uVar21][1] >> 2) + iVar16;
      iStack_68 = (uVar9 + v_advance_tab[uVar21][2] >> 2) + iVar17;
      iStack_64 = (uVar9 + v_advance_tab[uVar21][3] >> 2) + iVar18;
      local_80[0] = local_70;
      local_80[1] = iStack_6c;
      local_80[2] = iStack_68;
      local_80[3] = iStack_64;
      uVar7 = *(undefined4 *)puVar33;
      uVar8 = *(undefined4 *)puVar32;
      uVar2 = *(undefined8 *)(param_2 + uVar29);
      *(ulonglong *)param_2 =
           CONCAT17((char)((ulonglong)uVar2 >> 0x38) + (char)((uint)uVar8 >> 8),
                    CONCAT16((char)((ulonglong)uVar2 >> 0x30) + (char)((uint)uVar6 >> 8),
                             CONCAT15((char)((ulonglong)uVar2 >> 0x28) + (char)((uint)uVar7 >> 8),
                                      CONCAT14((char)((ulonglong)uVar2 >> 0x20) +
                                               (char)((uint)uVar5 >> 8),
                                               CONCAT13((char)((ulonglong)uVar2 >> 0x18) +
                                                        (char)uVar8,
                                                        CONCAT12((char)((ulonglong)uVar2 >> 0x10) +
                                                                 (char)uVar6,
                                                                 CONCAT11((char)((ulonglong)uVar2 >>
                                                                                8) + (char)uVar7,
                                                                          (char)uVar2 + (char)uVar5)
                                                                ))))));
      if (8 < uVar23) {
        uVar2 = *(undefined8 *)(param_2 + uVar29 + 8);
        *(ulonglong *)(param_2 + 8) =
             CONCAT17((char)((ulonglong)uVar2 >> 0x38) + (char)((uint)uVar8 >> 0x18),
                      CONCAT16((char)((ulonglong)uVar2 >> 0x30) + (char)((uint)uVar6 >> 0x18),
                               CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                        (char)((uint)uVar7 >> 0x18),
                                        CONCAT14((char)((ulonglong)uVar2 >> 0x20) +
                                                 (char)((uint)uVar5 >> 0x18),
                                                 CONCAT13((char)((ulonglong)uVar2 >> 0x18) +
                                                          (char)((uint)uVar8 >> 0x10),
                                                          CONCAT12((char)((ulonglong)uVar2 >> 0x10)
                                                                   + (char)((uint)uVar6 >> 0x10),
                                                                   CONCAT11((char)((ulonglong)uVar2
                                                                                  >> 8) +
                                                                            (char)((uint)uVar7 >>
                                                                                  0x10),
                                                                            (char)uVar2 +
                                                                            (char)((uint)uVar5 >>
                                                                                  0x10))))))));
        if (0x10 < uVar9) {
          uVar5 = *(undefined4 *)(puVar33 + 4);
          uVar6 = *(undefined4 *)(puVar24 + 4);
          uVar7 = *(undefined4 *)(puVar31 + 4);
          uVar8 = *(undefined4 *)(puVar32 + 4);
          uVar2 = *(undefined8 *)(param_2 + uVar29 + 0x10);
          *(ulonglong *)(param_2 + 0x10) =
               CONCAT17((char)((ulonglong)uVar2 >> 0x38) + (char)((uint)uVar8 >> 8),
                        CONCAT16((char)((ulonglong)uVar2 >> 0x30) + (char)((uint)uVar7 >> 8),
                                 CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                          (char)((uint)uVar5 >> 8),
                                          CONCAT14((char)((ulonglong)uVar2 >> 0x20) +
                                                   (char)((uint)uVar6 >> 8),
                                                   CONCAT13((char)((ulonglong)uVar2 >> 0x18) +
                                                            (char)uVar8,
                                                            CONCAT12((char)((ulonglong)uVar2 >> 0x10
                                                                           ) + (char)uVar7,
                                                                     CONCAT11((char)((ulonglong)
                                                                                     uVar2 >> 8) +
                                                                              (char)uVar5,
                                                                              (char)uVar2 +
                                                                              (char)uVar6)))))));
          if (0x18 < uVar9) {
            uVar2 = *(undefined8 *)(param_2 + uVar29 + 0x18);
            uVar23 = uVar23 - 0x20;
            *(ulonglong *)(param_2 + 0x18) =
                 CONCAT17((char)((ulonglong)uVar2 >> 0x38) + (char)((uint)uVar8 >> 0x18),
                          CONCAT16((char)((ulonglong)uVar2 >> 0x30) + (char)((uint)uVar7 >> 0x18),
                                   CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                            (char)((uint)uVar5 >> 0x18),
                                            CONCAT14((char)((ulonglong)uVar2 >> 0x20) +
                                                     (char)((uint)uVar6 >> 0x18),
                                                     CONCAT13((char)((ulonglong)uVar2 >> 0x18) +
                                                              (char)((uint)uVar8 >> 0x10),
                                                              CONCAT12((char)((ulonglong)uVar2 >>
                                                                             0x10) +
                                                                       (char)((uint)uVar7 >> 0x10),
                                                                       CONCAT11((char)((ulonglong)
                                                                                       uVar2 >> 8) +
                                                                                (char)((uint)uVar5
                                                                                      >> 0x10),
                                                                                (char)uVar2 +
                                                                                (char)((uint)uVar6
                                                                                      >> 0x10)))))))
                         );
            param_2 = param_2 + 0x20;
            if (0 < (longlong)uVar23) {
              puVar32 = puVar32 + 6;
              puVar20 = param_2 + uVar29;
              puVar33 = puVar33 + 6;
              puVar31 = puVar31 + 6;
              puVar24 = puVar24 + 6;
              uVar29 = uVar23;
              puVar28 = param_2;
              do {
                uVar5 = *(undefined4 *)(puVar33 + 2);
                uVar23 = uVar29 - 8;
                uVar6 = *(undefined4 *)(puVar24 + 2);
                uVar7 = *(undefined4 *)(puVar31 + 2);
                uVar8 = *(undefined4 *)(puVar32 + 2);
                uVar2 = *(undefined8 *)puVar20;
                *(ulonglong *)puVar28 =
                     CONCAT17((char)((ulonglong)uVar2 >> 0x38) + (char)((uint)uVar8 >> 8),
                              CONCAT16((char)((ulonglong)uVar2 >> 0x30) + (char)((uint)uVar7 >> 8),
                                       CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                                (char)((uint)uVar5 >> 8),
                                                CONCAT14((char)((ulonglong)uVar2 >> 0x20) +
                                                         (char)((uint)uVar6 >> 8),
                                                         CONCAT13((char)((ulonglong)uVar2 >> 0x18) +
                                                                  (char)uVar8,
                                                                  CONCAT12((char)((ulonglong)uVar2
                                                                                 >> 0x10) +
                                                                           (char)uVar7,
                                                                           CONCAT11((char)((
                                                  ulonglong)uVar2 >> 8) + (char)uVar5,
                                                  (char)uVar2 + (char)uVar6)))))));
                param_2 = puVar28 + 8;
                if ((longlong)uVar23 < 1) break;
                uVar2 = *(undefined8 *)(puVar20 + 8);
                puVar24 = puVar24 + 4;
                puVar33 = puVar33 + 4;
                puVar31 = puVar31 + 4;
                *(ulonglong *)param_2 =
                     CONCAT17((char)((uint)uVar8 >> 0x18) + (char)((ulonglong)uVar2 >> 0x38),
                              CONCAT16((char)((uint)uVar7 >> 0x18) +
                                       (char)((ulonglong)uVar2 >> 0x30),
                                       CONCAT15((char)((uint)uVar5 >> 0x18) +
                                                (char)((ulonglong)uVar2 >> 0x28),
                                                CONCAT14((char)((uint)uVar6 >> 0x18) +
                                                         (char)((ulonglong)uVar2 >> 0x20),
                                                         CONCAT13((char)((uint)uVar8 >> 0x10) +
                                                                  (char)((ulonglong)uVar2 >> 0x18),
                                                                  CONCAT12((char)((uint)uVar7 >>
                                                                                 0x10) +
                                                                           (char)((ulonglong)uVar2
                                                                                 >> 0x10),
                                                                           CONCAT11((char)((uint)
                                                  uVar5 >> 0x10) + (char)((ulonglong)uVar2 >> 8),
                                                  (char)((uint)uVar6 >> 0x10) + (char)uVar2)))))));
                puVar32 = puVar32 + 4;
                param_2 = puVar28 + 0x10;
                puVar20 = puVar20 + 0x10;
                uVar23 = uVar29 - 0x10;
                uVar29 = uVar23;
                puVar28 = param_2;
              } while (0 < (longlong)uVar23);
            }
          }
        }
      }
      puVar31 = param_2 + uVar23;
    }
    else {
      uVar9 = (bVar3 & 0x18) >> 3;
      if ((longlong)param_3 - (longlong)param_2 < (longlong)(ulonglong)uVar9) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          (*g_fp_OodleCore_Plugin_Printf)
                    (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x20d,
                     "OODLE ERROR : corruption : (match_zone_end - to_ptr) >= lrl\n");
          ooLogErrorPost();
          return false;
        }
        goto LAB_14f3bd454;
      }
      uVar23 = (ulonglong)(uVar19 & 3);
      iVar10 = local_80[uVar23 + 1];
      iVar11 = v_advance_tab[uVar23][0];
      iVar12 = v_advance_tab[uVar23][1];
      iVar13 = v_advance_tab[uVar23][2];
      iVar14 = v_advance_tab[uVar23][3];
      *param_2 = local_140[local_80[uVar23]] + param_2[uVar29];
      local_70 = (uVar9 + iVar11 >> 2) + iVar15;
      iStack_6c = (uVar9 + iVar12 >> 2) + iVar16;
      iStack_68 = (uVar9 + iVar13 >> 2) + iVar17;
      iStack_64 = (uVar9 + iVar14 >> 2) + iVar18;
      param_2[1] = param_2[uVar29 + 1] + local_140[iVar10];
      puVar31 = param_2 + uVar9;
      local_80[0] = local_70;
      local_80[1] = iStack_6c;
      local_80[2] = iStack_68;
      local_80[3] = iStack_64;
    }
    auVar38._8_8_ = 0;
    auVar38._0_8_ = c_lo_shuffles[bVar3 >> 5];
    local_a0 = pshufb(local_a0,auVar38);
    uVar29 = (ulonglong)*(int *)((longlong)&local_c0 + (ulonglong)local_a0[0] * 4);
    lVar26 = 0;
    if ((ulonglong)(bVar3 >> 5) == 7) {
      lVar26 = 4;
    }
    local_128 = (int *)((longlong)local_128 + lVar26);
    if (uVar29 < (ulonglong)((longlong)param_5 - (longlong)puVar31)) goto LAB_14f3bd06e;
    puVar32 = puVar31 + uVar29;
    iVar15 = local_70;
    iVar16 = iStack_6c;
    iVar17 = iStack_68;
    iVar18 = iStack_64;
    if (lVar27 == 9) {
      if (puVar36 <= puVar34) goto LAB_14f3bd02e;
      puVar1 = puVar36 + -1;
      puVar36 = puVar36 + -1;
      uVar19 = *puVar1 + 6;
      param_2 = puVar31 + uVar19;
      *(undefined8 *)puVar31 = *(undefined8 *)puVar32;
      *(undefined8 *)(puVar31 + 8) = *(undefined8 *)(puVar32 + 8);
      if ((uchar *)0x10 < (uchar *)(ulonglong)uVar19) {
        if (param_4 + (-8 - (longlong)puVar31) < (uchar *)(ulonglong)uVar19) goto LAB_14f3bcfee;
        puVar33 = puVar32 + 0x18;
        *(undefined8 *)(puVar31 + 0x10) = *(undefined8 *)(puVar32 + 0x10);
        for (puVar31 = puVar31 + 0x18; puVar31 < param_2; puVar31 = puVar31 + 8) {
          uVar2 = *(undefined8 *)puVar33;
          puVar33 = puVar33 + 8;
          *(undefined8 *)puVar31 = uVar2;
        }
      }
    }
    else {
      *(undefined8 *)puVar31 = *(undefined8 *)puVar32;
      param_2 = puVar31 + lVar27;
    }
  }
  puVar31 = param_2;
  if (param_2 < param_4) {
    puVar32 = param_4 + -(longlong)param_2;
    puVar20 = local_140 + local_80[uVar19 & 3];
    puVar24 = local_140 + local_80[uVar19 + 1 & 3];
    puVar33 = local_140 + local_80[uVar19 + 2 & 3];
    if (3 < (longlong)puVar32) {
      uVar23 = (ulonglong)puVar32 >> 2;
      local_108 = (uint *)(1 - uVar29);
      puVar28 = param_2 + uVar29 + 2;
      puVar32 = puVar32 + uVar23 * -4;
      puVar31 = local_140 + local_80[uVar19 + 3 & 3];
      do {
        uVar4 = *puVar20;
        puVar20 = puVar20 + 1;
        *param_2 = puVar28[-2] + uVar4;
        param_2 = param_2 + 4;
        uVar4 = *puVar24;
        puVar24 = puVar24 + 1;
        puVar28[~uVar29] = puVar28[-1] + uVar4;
        uVar4 = *puVar33;
        puVar33 = puVar33 + 1;
        puVar28[-uVar29] = *puVar28 + uVar4;
        *(uchar *)((longlong)local_108 + (longlong)puVar28) = puVar28[1] + *puVar31;
        puVar28 = puVar28 + 4;
        uVar23 = uVar23 - 1;
        puVar31 = puVar31 + 1;
        local_118 = puVar32;
      } while (uVar23 != 0);
    }
    puVar31 = param_2;
    if (0 < (longlong)puVar32) {
      *param_2 = param_2[uVar29] + *puVar20;
      puVar31 = param_2 + 1;
      if (0 < (longlong)(puVar32 + -1)) {
        *puVar31 = puVar31[uVar29] + *puVar24;
        puVar31 = param_2 + 2;
        if (puVar32 + -1 != &DAT_00000001 && -1 < (longlong)(puVar32 + -2)) {
          *puVar31 = puVar31[uVar29] + *puVar33;
          puVar31 = param_2 + 3;
        }
      }
    }
  }
  if (puVar31 == param_4) {
    if (local_128 == local_100) {
      if (puVar34 == puVar36) {
        return true;
      }
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto LAB_14f3bd454;
      pcVar30 = "OODLE ERROR : corruption : excesses_ptr == excesses_end_ptr\n";
      iVar15 = 0x197;
    }
    else {
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto LAB_14f3bd454;
      pcVar30 = "OODLE ERROR : corruption : offsets_ptr == offsets_end\n";
      iVar15 = 0x196;
    }
  }
  else {
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto LAB_14f3bd454;
    pcVar30 = "OODLE ERROR : corruption : to_ptr == chunk_end\n";
    iVar15 = 0x18d;
  }
  (*g_fp_OodleCore_Plugin_Printf)
            (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_outer.inl",iVar15,pcVar30);
LAB_14f3bd454:
  ooLogErrorPost();
  return false;
LAB_14f3bd06e:
  local_80[0] = local_70;
  local_80[1] = iStack_6c;
  local_80[2] = iStack_68;
  local_80[3] = iStack_64;
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x2e2,
               "OODLE ERROR : corruption : (UINTa)neg_offset >= (UINTa) (window_base - to_ptr)\n");
    ooLogErrorPost();
    return false;
  }
  goto LAB_14f3bd454;
LAB_14f3bd02e:
  local_80[0] = local_70;
  local_80[1] = iStack_6c;
  local_80[2] = iStack_68;
  local_80[3] = iStack_64;
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x304,
               "OODLE ERROR : corruption : excesses_end_ptr > excesses_ptr\n");
    ooLogErrorPost();
    return false;
  }
  goto LAB_14f3bd454;
LAB_14f3bcfee:
  local_80[0] = local_70;
  local_80[1] = iStack_6c;
  local_80[2] = iStack_68;
  local_80[3] = iStack_64;
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x322,
               "OODLE ERROR : corruption : (UINTa)(match_end - to_ptr) >= ml\n");
    ooLogErrorPost();
    return false;
  }
  goto LAB_14f3bd454;
}

// newLZHC_decode_parse_o1_sse4 @ 14f3bd4a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
oo2::newLZHC_decode_parse_o1_sse4
          (newLZHC_chunk_arrays *param_1,uchar *param_2,uchar *param_3,uchar *param_4,uchar *param_5
          )

{
  uint *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined8 uVar5;
  byte bVar6;
  uint uVar7;
  longlong lVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  byte *pbVar15;
  int iVar16;
  ulonglong uVar17;
  char *pcVar18;
  uint *puVar19;
  uint *puVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auStack_1d8 [88];
  byte *local_180;
  uchar *local_178;
  int *local_170;
  uchar *local_168;
  ulonglong local_160;
  longlong local_158;
  uchar *local_150;
  int *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined1 local_120 [16];
  byte *local_100;
  uchar *puStack_f8;
  uchar *local_f0;
  uchar *puStack_e8;
  uchar *local_e0;
  uchar *puStack_d8;
  uchar *local_d0;
  uchar *puStack_c8;
  uchar *local_c0;
  uchar *puStack_b8;
  uchar *local_b0;
  uchar *puStack_a8;
  uchar *local_a0;
  uchar *puStack_98;
  uchar *local_90;
  uchar *puStack_88;
  byte local_80;
  uchar local_7f;
  uchar local_7e;
  uchar local_7d;
  uchar local_7c;
  uchar local_7b;
  uchar local_7a;
  uchar local_79;
  uchar local_78;
  uchar local_77;
  uchar local_76;
  uchar local_75;
  uchar local_74;
  uchar local_73;
  uchar local_72;
  uchar local_71;
  ulonglong local_70;
  
  local_70 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  local_170 = param_1->offsets;
  puVar20 = param_1->excesses;
  pbVar15 = param_1->packets;
  lVar12 = param_1->packets_count;
  local_148 = local_170 + param_1->offsets_count;
  local_180 = pbVar15 + lVar12;
  puVar19 = puVar20 + param_1->excesses_count;
  local_100 = param_1->literals_ptrs[0] + 1;
  local_80 = *param_1->literals_ptrs[0];
  puStack_f8 = param_1->literals_ptrs[1] + 1;
  local_7f = *param_1->literals_ptrs[1];
  local_f0 = param_1->literals_ptrs[2] + 1;
  local_7e = *param_1->literals_ptrs[2];
  puStack_e8 = param_1->literals_ptrs[3] + 1;
  local_7d = *param_1->literals_ptrs[3];
  local_e0 = param_1->literals_ptrs[4] + 1;
  local_7c = *param_1->literals_ptrs[4];
  puStack_d8 = param_1->literals_ptrs[5] + 1;
  local_7b = *param_1->literals_ptrs[5];
  local_d0 = param_1->literals_ptrs[6] + 1;
  local_7a = *param_1->literals_ptrs[6];
  puStack_c8 = param_1->literals_ptrs[7] + 1;
  local_79 = *param_1->literals_ptrs[7];
  local_c0 = param_1->literals_ptrs[8] + 1;
  local_78 = *param_1->literals_ptrs[8];
  puStack_b8 = param_1->literals_ptrs[9] + 1;
  local_77 = *param_1->literals_ptrs[9];
  local_b0 = param_1->literals_ptrs[10] + 1;
  local_76 = *param_1->literals_ptrs[10];
  local_120 = ___xmm_00000000000000000706050403020100;
  local_140 = ___xmm_fffffff8fffffff8fffffff8fffffff8;
  uStack_138 = _UNK_1531db198;
  puStack_a8 = param_1->literals_ptrs[0xb] + 1;
  local_75 = *param_1->literals_ptrs[0xb];
  local_130 = 0xfffffff8;
  local_12c = 0xfffffff8;
  local_a0 = param_1->literals_ptrs[0xc] + 1;
  local_74 = *param_1->literals_ptrs[0xc];
  local_128 = 0xfffffff8;
  puStack_98 = param_1->literals_ptrs[0xd] + 1;
  local_73 = *param_1->literals_ptrs[0xd];
  local_72 = *param_1->literals_ptrs[0xe];
  local_90 = param_1->literals_ptrs[0xe] + 1;
  local_71 = *param_1->literals_ptrs[0xf];
  puStack_88 = param_1->literals_ptrs[0xf] + 1;
  if (0xf < (longlong)param_4 - (longlong)param_3) {
    param_3 = param_4 + -0x10;
  }
  local_168 = param_4 + -8;
  lVar8 = (longlong)param_3 - (longlong)param_2 >> 6;
  lVar14 = lVar12;
  if (lVar8 <= lVar12) {
    lVar14 = lVar8;
  }
  pbVar9 = pbVar15 + lVar14;
  while (local_178 = param_3, local_150 = param_4, pbVar15 < pbVar9) {
    bVar2 = *pbVar15;
    lVar12 = lVar12 + -1;
    pbVar15 = pbVar15 + 1;
    lVar14 = (ulonglong)(bVar2 & 7) + 2;
    local_160 = (ulonglong)(bVar2 >> 5);
    *(int *)((longlong)&local_140 + (longlong)(int)(uint)local_120[7] * 4) = *local_170;
    local_158 = lVar12;
    if ((bVar2 & 0x18) == 0x18) {
      uVar7 = *puVar20;
      uVar17 = (ulonglong)uVar7;
      puVar20 = puVar20 + 1;
      if (uVar7 == 0) goto LAB_14f3bda05;
      if (0x18 < uVar7) {
        if ((longlong)param_3 - (longlong)param_2 < (longlong)uVar17) {
          ooLogErrorPre();
          if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
            (*g_fp_OodleCore_Plugin_Printf)
                      (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0xfb,
                       "OODLE ERROR : corruption : (match_zone_end - to_ptr) >= (lrl)\n");
            ooLogErrorPost();
            return false;
          }
          goto LAB_14f3bdec9;
        }
        lVar8 = (longlong)(((longlong)param_3 - (longlong)param_2) - uVar17) >> 6;
        pbVar9 = local_180;
        if (lVar8 <= lVar12) {
          pbVar9 = pbVar15 + lVar8;
        }
      }
      bVar2 = param_2[-1];
      uVar13 = uVar17;
      pbVar11 = param_2;
      do {
        bVar3 = bVar2 >> 4;
        pbVar10 = (&local_100)[bVar3];
        bVar2 = (&local_80)[bVar3];
        *pbVar11 = bVar2;
        (&local_80)[bVar3] = *pbVar10;
        (&local_100)[bVar3] = pbVar10 + 1;
        uVar13 = uVar13 - 1;
        pbVar11 = pbVar11 + 1;
      } while (uVar13 != 0);
      pbVar11 = param_2 + uVar17;
    }
    else {
      pbVar11 = param_2;
      if ((bVar2 & 0x18) != 0) {
        bVar6 = param_2[-1] >> 4;
        pbVar10 = (&local_100)[bVar6];
        bVar3 = (&local_80)[bVar6];
        bVar4 = *pbVar10;
        *param_2 = bVar3;
        pbVar11 = param_2 + 1;
        (&local_80)[bVar6] = bVar4;
        (&local_100)[bVar6] = pbVar10 + 1;
        if ((bVar2 & 0x18) == 0x10) {
          bVar3 = bVar3 >> 4;
          pbVar10 = (&local_100)[bVar3];
          bVar2 = (&local_80)[bVar3];
          (&local_80)[bVar3] = *pbVar10;
          *pbVar11 = bVar2;
          pbVar11 = param_2 + 2;
          (&local_100)[bVar3] = pbVar10 + 1;
        }
      }
    }
    auVar21._8_8_ = 0;
    auVar21._0_8_ = c_lo_shuffles[local_160];
    local_120 = pshufb(local_120,auVar21);
    uVar17 = (ulonglong)*(int *)((longlong)&local_140 + (ulonglong)local_120[0] * 4);
    lVar8 = 0;
    if (local_160 == 7) {
      lVar8 = 4;
    }
    local_170 = (int *)((longlong)local_170 + lVar8);
    if (uVar17 < (ulonglong)((longlong)param_5 - (longlong)pbVar11)) goto LAB_14f3bdab2;
    pbVar10 = pbVar11 + uVar17;
    if (lVar14 == 9) {
      if (puVar19 <= puVar20) goto LAB_14f3bda79;
      puVar1 = puVar19 + -1;
      puVar19 = puVar19 + -1;
      uVar7 = *puVar1 + 6;
      param_2 = pbVar11 + uVar7;
      *(undefined8 *)pbVar11 = *(undefined8 *)pbVar10;
      *(undefined8 *)(pbVar11 + 8) = *(undefined8 *)(pbVar10 + 8);
      if (0x10 < (ulonglong)uVar7) {
        if ((ulonglong)((longlong)local_168 - (longlong)pbVar11) < (ulonglong)uVar7)
        goto code_r0x00014f3bda40;
        pbVar9 = pbVar10 + 0x18;
        *(undefined8 *)(pbVar11 + 0x10) = *(undefined8 *)(pbVar10 + 0x10);
        for (pbVar11 = pbVar11 + 0x18; pbVar11 < param_2; pbVar11 = pbVar11 + 8) {
          uVar5 = *(undefined8 *)pbVar9;
          pbVar9 = pbVar9 + 8;
          *(undefined8 *)pbVar11 = uVar5;
        }
        lVar14 = (longlong)param_3 - (longlong)param_2 >> 6;
        pbVar9 = local_180;
        if (lVar14 <= lVar12) {
          pbVar9 = pbVar15 + lVar14;
        }
      }
    }
    else {
      *(undefined8 *)pbVar11 = *(undefined8 *)pbVar10;
      param_2 = pbVar11 + lVar14;
    }
  }
  while (pbVar15 < local_180) {
    bVar2 = *pbVar15;
    pbVar15 = pbVar15 + 1;
    lVar12 = (ulonglong)(bVar2 & 7) + 2;
    *(int *)((longlong)&local_140 + (longlong)(int)(uint)local_120[7] * 4) = *local_170;
    if ((bVar2 & 0x18) == 0x18) {
      uVar17 = (ulonglong)*puVar20;
      puVar20 = puVar20 + 1;
      if (uVar17 == 0) goto LAB_14f3bda05;
      if ((longlong)param_3 - (longlong)param_2 < (longlong)uVar17) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          (*g_fp_OodleCore_Plugin_Printf)
                    (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0xf5,
                     "OODLE ERROR : corruption : (match_zone_end - to_ptr) >= lrl\n");
          ooLogErrorPost();
          return false;
        }
        goto LAB_14f3bdec9;
      }
      bVar3 = param_2[-1];
      uVar13 = uVar17;
      pbVar9 = param_2;
      do {
        bVar4 = bVar3 >> 4;
        pbVar11 = (&local_100)[bVar4];
        bVar3 = (&local_80)[bVar4];
        *pbVar9 = bVar3;
        (&local_80)[bVar4] = *pbVar11;
        (&local_100)[bVar4] = pbVar11 + 1;
        uVar13 = uVar13 - 1;
        pbVar9 = pbVar9 + 1;
      } while (uVar13 != 0);
      pbVar9 = param_2 + uVar17;
    }
    else if ((bVar2 & 0x18) == 0) {
      pbVar9 = param_2;
      if ((longlong)param_3 - (longlong)param_2 < 0) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          (*g_fp_OodleCore_Plugin_Printf)
                    (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x125,
                     "OODLE ERROR : corruption : (match_zone_end - to_ptr) >= 0\n");
          ooLogErrorPost();
          return false;
        }
        goto LAB_14f3bdec9;
      }
    }
    else {
      uVar17 = (ulonglong)((bVar2 & 0x18) >> 3);
      if ((longlong)param_3 - (longlong)param_2 < (longlong)uVar17) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          (*g_fp_OodleCore_Plugin_Printf)
                    (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x10d,
                     "OODLE ERROR : corruption : (match_zone_end - to_ptr) >= lrl\n");
          ooLogErrorPost();
          return false;
        }
        goto LAB_14f3bdec9;
      }
      bVar6 = param_2[-1] >> 4;
      pbVar9 = (&local_100)[bVar6];
      bVar3 = (&local_80)[bVar6];
      bVar4 = *pbVar9;
      *param_2 = bVar3;
      (&local_80)[bVar6] = bVar4;
      (&local_100)[bVar6] = pbVar9 + 1;
      pbVar9 = param_2 + 1;
      if (uVar17 == 2) {
        bVar3 = bVar3 >> 4;
        pbVar9 = (&local_100)[bVar3];
        bVar4 = (&local_80)[bVar3];
        (&local_80)[bVar3] = *pbVar9;
        param_2[1] = bVar4;
        (&local_100)[bVar3] = pbVar9 + 1;
        pbVar9 = param_2 + 2;
      }
    }
    auVar22._8_8_ = 0;
    auVar22._0_8_ = c_lo_shuffles[bVar2 >> 5];
    local_120 = pshufb(local_120,auVar22);
    uVar17 = (ulonglong)*(int *)((longlong)&local_140 + (ulonglong)local_120[0] * 4);
    lVar14 = 0;
    if ((ulonglong)(bVar2 >> 5) == 7) {
      lVar14 = 4;
    }
    local_170 = (int *)((longlong)local_170 + lVar14);
    if (uVar17 < (ulonglong)((longlong)param_5 - (longlong)pbVar9)) goto LAB_14f3bdab2;
    pbVar11 = pbVar9 + uVar17;
    if (lVar12 == 9) {
      if (puVar19 <= puVar20) goto LAB_14f3bda79;
      puVar1 = puVar19 + -1;
      puVar19 = puVar19 + -1;
      uVar7 = *puVar1 + 6;
      param_2 = pbVar9 + uVar7;
      *(undefined8 *)pbVar9 = *(undefined8 *)pbVar11;
      *(undefined8 *)(pbVar9 + 8) = *(undefined8 *)(pbVar11 + 8);
      if (0x10 < (ulonglong)uVar7) {
        if ((ulonglong)((longlong)local_168 - (longlong)pbVar9) < (ulonglong)uVar7)
        goto code_r0x00014f3bda40;
        pbVar10 = pbVar11 + 0x18;
        *(undefined8 *)(pbVar9 + 0x10) = *(undefined8 *)(pbVar11 + 0x10);
        for (pbVar9 = pbVar9 + 0x18; pbVar9 < param_2; pbVar9 = pbVar9 + 8) {
          uVar5 = *(undefined8 *)pbVar10;
          pbVar10 = pbVar10 + 8;
          *(undefined8 *)pbVar9 = uVar5;
        }
      }
    }
    else {
      *(undefined8 *)pbVar9 = *(undefined8 *)pbVar11;
      param_2 = pbVar9 + lVar12;
    }
  }
  if (param_2 < param_4) {
    lVar12 = (longlong)param_4 - (longlong)param_2;
    if (0 < lVar12) {
      bVar2 = param_2[-1];
      do {
        bVar3 = bVar2 >> 4;
        pbVar15 = (&local_100)[bVar3];
        bVar2 = (&local_80)[bVar3];
        *param_2 = bVar2;
        (&local_80)[bVar3] = *pbVar15;
        (&local_100)[bVar3] = pbVar15 + 1;
        lVar12 = lVar12 + -1;
        param_2 = param_2 + 1;
      } while (lVar12 != 0);
      goto LAB_14f3bde4c;
    }
LAB_14f3bde76:
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto LAB_14f3bdec9;
    pcVar18 = "OODLE ERROR : corruption : to_ptr == chunk_end\n";
    iVar16 = 0x18d;
  }
  else {
    if (param_2 != param_4) goto LAB_14f3bde76;
LAB_14f3bde4c:
    if (local_170 == local_148) {
      if (puVar20 == puVar19) {
        return true;
      }
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto LAB_14f3bdec9;
      pcVar18 = "OODLE ERROR : corruption : excesses_ptr == excesses_end_ptr\n";
      iVar16 = 0x197;
    }
    else {
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto LAB_14f3bdec9;
      pcVar18 = "OODLE ERROR : corruption : offsets_ptr == offsets_end\n";
      iVar16 = 0x196;
    }
  }
  (*g_fp_OodleCore_Plugin_Printf)
            (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_outer.inl",iVar16,pcVar18);
LAB_14f3bdec9:
  ooLogErrorPost();
  return false;
LAB_14f3bda05:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0xf2,
               "OODLE ERROR : corruption : lrl > 0\n");
    ooLogErrorPost();
    return false;
  }
  goto LAB_14f3bdec9;
LAB_14f3bdab2:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x2e2,
               "OODLE ERROR : corruption : (UINTa)neg_offset >= (UINTa) (window_base - to_ptr)\n");
    ooLogErrorPost();
    return false;
  }
  goto LAB_14f3bdec9;
LAB_14f3bda79:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x304,
               "OODLE ERROR : corruption : excesses_end_ptr > excesses_ptr\n");
    ooLogErrorPost();
    return false;
  }
  goto LAB_14f3bdec9;
code_r0x00014f3bda40:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x322,
               "OODLE ERROR : corruption : (UINTa)(match_end - to_ptr) >= ml\n");
    ooLogErrorPost();
    return false;
  }
  goto LAB_14f3bdec9;
}

// newLZHC_decode_parse_subandF_sse4 @ 14f3bdf20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
oo2::newLZHC_decode_parse_subandF_sse4
          (newLZHC_chunk_arrays *param_1,uchar *param_2,uchar *param_3,uchar *param_4,uchar *param_5
          )

{
  uint *puVar1;
  uchar uVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uchar *puVar7;
  uchar *puVar8;
  uchar *puVar9;
  ulonglong uVar10;
  byte *pbVar11;
  ulonglong uVar12;
  int iVar13;
  uchar *puVar14;
  byte bVar15;
  char *pcVar16;
  ulonglong uVar17;
  uint *puVar18;
  uchar *puVar19;
  byte *pbVar20;
  uint *puVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auStack_268 [40];
  uchar *local_240;
  uchar *local_238;
  uchar *local_230;
  int *local_228;
  uchar *local_220;
  uchar *local_218;
  uchar *local_210;
  uchar *local_208;
  uchar *local_200;
  uchar *local_1f8;
  uchar *local_1f0;
  uchar *local_1e8;
  uchar *local_1e0;
  uchar *local_1d8;
  uchar *local_1d0;
  uchar *local_1c8;
  uchar *local_1c0;
  longlong local_1b8;
  byte *local_1b0;
  byte *local_1a8;
  ulonglong local_1a0;
  uint *local_198;
  uchar *local_190;
  ulonglong local_188;
  byte *local_180;
  longlong local_178;
  uint *local_170;
  ulonglong local_168;
  uchar *local_160;
  int *local_158;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined1 local_120 [16];
  uchar *local_100 [4];
  uchar *local_e0;
  uchar *local_d8;
  uchar *local_d0;
  uchar *local_c8;
  uchar *local_c0;
  uchar *local_b8;
  uchar *local_b0;
  uchar *local_a8;
  uchar *local_a0;
  uchar *local_98;
  uchar *local_90;
  uchar *local_88;
  ulonglong local_80;
  
  local_80 = __security_cookie.value ^ (ulonglong)auStack_268;
  local_1b8 = param_1->packets_count;
  pbVar11 = param_1->packets;
  puVar21 = param_1->excesses;
  local_228 = param_1->offsets;
  local_158 = local_228 + param_1->offsets_count;
  local_1a0 = 0xfffffffffffffff8;
  local_1b0 = pbVar11 + local_1b8;
  puVar18 = puVar21 + param_1->excesses_count;
  iVar13 = (int)param_3;
  puVar19 = param_1->literals_ptrs[-iVar13 & 0xf];
  local_100[0] = puVar19;
  puVar9 = param_1->literals_ptrs[1U - iVar13 & 0xf];
  local_100[1] = puVar9;
  local_1c0 = param_1->literals_ptrs[2U - iVar13 & 0xf];
  local_100[2] = local_1c0;
  local_1c8 = param_1->literals_ptrs[3U - iVar13 & 0xf];
  local_100[3] = local_1c8;
  local_1d0 = param_1->literals_ptrs[4U - iVar13 & 0xf];
  local_e0 = local_1d0;
  local_1d8 = param_1->literals_ptrs[5U - iVar13 & 0xf];
  local_d8 = local_1d8;
  local_1e0 = param_1->literals_ptrs[6U - iVar13 & 0xf];
  local_d0 = local_1e0;
  local_1e8 = param_1->literals_ptrs[7U - iVar13 & 0xf];
  local_c8 = local_1e8;
  local_1f0 = param_1->literals_ptrs[-iVar13 - 8U & 0xf];
  local_c0 = local_1f0;
  local_240 = param_1->literals_ptrs[-iVar13 - 7U & 0xf];
  local_b8 = local_240;
  local_1f8 = param_1->literals_ptrs[-iVar13 - 6U & 0xf];
  local_b0 = local_1f8;
  local_120 = ___xmm_00000000000000000706050403020100;
  local_200 = param_1->literals_ptrs[-iVar13 - 5U & 0xf];
  local_a8 = local_200;
  local_140 = ___xmm_fffffff8fffffff8fffffff8fffffff8;
  uStack_138 = _UNK_1531db198;
  local_130 = 0xfffffff8;
  local_12c = 0xfffffff8;
  local_208 = param_1->literals_ptrs[-iVar13 - 4U & 0xf];
  local_a0 = local_208;
  local_128 = 0xfffffff8;
  local_210 = param_1->literals_ptrs[-iVar13 - 3U & 0xf];
  local_98 = local_210;
  local_218 = param_1->literals_ptrs[-iVar13 - 2U & 0xf];
  local_90 = local_218;
  local_220 = param_1->literals_ptrs[-iVar13 - 1U & 0xf];
  local_88 = local_220;
  if (0xf < (longlong)param_4 - (longlong)param_3) {
    param_3 = param_4 + -0x10;
  }
  local_190 = param_4 + -8;
  lVar6 = (longlong)param_3 - (longlong)param_2 >> 6;
  lVar5 = local_1b8;
  if (lVar6 <= local_1b8) {
    lVar5 = lVar6;
  }
  pbVar20 = pbVar11 + lVar5;
  puVar8 = param_2;
  uVar17 = local_1a0;
  local_238 = puVar9;
  local_198 = puVar18;
  local_230 = param_3;
  local_160 = param_4;
  if (pbVar11 < pbVar20) {
    do {
      bVar15 = *pbVar11;
      local_1b8 = local_1b8 + -1;
      pbVar11 = pbVar11 + 1;
      local_178 = (ulonglong)(bVar15 & 7) + 2;
      local_168 = (ulonglong)(bVar15 >> 5);
      bVar15 = bVar15 & 0x18;
      *(int *)((longlong)&local_140 + (longlong)(int)(uint)local_120[7] * 4) = *local_228;
      uVar4 = (uint)puVar8;
      local_180 = pbVar11;
      if (bVar15 == 0x18) {
        uVar17 = (ulonglong)*puVar21;
        puVar21 = puVar21 + 1;
        local_170 = puVar21;
        if (0x18 < uVar17) {
          if ((longlong)param_3 - (longlong)puVar8 < (longlong)uVar17) {
            ooLogErrorPre();
            if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
            {
              (*g_fp_OodleCore_Plugin_Printf)
                        (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x13a
                         ,"OODLE ERROR : corruption : (match_zone_end - to_ptr) >= (lrl)\n");
              ooLogErrorPost();
              return false;
            }
            goto code_r0x00014f3bee00;
          }
          lVar5 = (longlong)(((longlong)param_3 - (longlong)puVar8) - uVar17) >> 6;
          pbVar20 = local_1b0;
          if (lVar5 <= local_1b8) {
            pbVar20 = pbVar11 + lVar5;
          }
          uVar10 = uVar17;
          if (((ulonglong)puVar8 & 0xf) != 0) {
            do {
              puVar19 = local_100[uVar4 & 0xf];
              uVar17 = uVar17 - 1;
              *puVar8 = puVar8[local_1a0] + *puVar19;
              puVar8 = puVar8 + 1;
              local_100[uVar4 & 0xf] = puVar19 + 1;
              uVar4 = (uint)puVar8;
            } while (((ulonglong)puVar8 & 0xf) != 0);
            local_220 = local_88;
            local_218 = local_90;
            local_210 = local_98;
            local_208 = local_a0;
            local_200 = local_a8;
            local_1f8 = local_b0;
            local_1f0 = local_c0;
            local_1e8 = local_c8;
            local_1e0 = local_d0;
            local_1d8 = local_d8;
            local_1d0 = local_e0;
            local_1c8 = local_100[3];
            local_1c0 = local_100[2];
            local_240 = local_b8;
            local_238 = local_100[1];
            puVar9 = local_100[1];
            uVar10 = uVar17;
            puVar19 = local_100[0];
          }
          uVar17 = (ulonglong)((uint)uVar10 & 0xf);
          lVar5 = (longlong)uVar10 >> 4;
          local_1a8 = pbVar20;
          local_188 = uVar17;
          if (lVar5 != 0) {
            lVar6 = -local_1a0;
            puVar14 = puVar8 + local_1a0 + 2;
            do {
              uVar2 = *puVar19;
              puVar19 = puVar19 + 1;
              *puVar8 = puVar14[-2] + uVar2;
              uVar2 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar14[lVar6 + -1] = puVar14[-1] + uVar2;
              uVar2 = *local_1c0;
              local_1c0 = local_1c0 + 1;
              puVar14[lVar6] = uVar2 + *puVar14;
              uVar2 = *local_1c8;
              local_1c8 = local_1c8 + 1;
              puVar14[lVar6 + 1] = puVar14[1] + uVar2;
              uVar2 = *local_1d0;
              local_1d0 = local_1d0 + 1;
              puVar14[lVar6 + 2] = puVar14[2] + uVar2;
              uVar2 = *local_1d8;
              local_1d8 = local_1d8 + 1;
              puVar14[lVar6 + 3] = puVar14[3] + uVar2;
              uVar2 = *local_1e0;
              local_1e0 = local_1e0 + 1;
              puVar14[lVar6 + 4] = puVar14[4] + uVar2;
              uVar2 = *local_1e8;
              local_1e8 = local_1e8 + 1;
              puVar14[lVar6 + 5] = puVar14[5] + uVar2;
              uVar2 = *local_1f0;
              local_1f0 = local_1f0 + 1;
              puVar14[lVar6 + 6] = puVar14[6] + uVar2;
              local_100[1] = puVar9;
              local_100[2] = local_1c0;
              local_100[3] = local_1c8;
              local_e0 = local_1d0;
              puVar14[lVar6 + 7] = puVar14[7] + *local_240;
              local_240 = local_240 + 1;
              local_b8 = local_240;
              uVar2 = *local_1f8;
              local_1f8 = local_1f8 + 1;
              local_b0 = local_1f8;
              puVar14[lVar6 + 8] = puVar14[8] + uVar2;
              local_d8 = local_1d8;
              uVar2 = *local_200;
              local_200 = local_200 + 1;
              local_a8 = local_200;
              puVar14[lVar6 + 9] = puVar14[9] + uVar2;
              local_d0 = local_1e0;
              uVar2 = *local_208;
              local_208 = local_208 + 1;
              local_a0 = local_208;
              puVar14[lVar6 + 10] = puVar14[10] + uVar2;
              local_c8 = local_1e8;
              uVar2 = *local_210;
              local_210 = local_210 + 1;
              local_c0 = local_1f0;
              local_98 = local_210;
              puVar14[lVar6 + 0xb] = puVar14[0xb] + uVar2;
              puVar8 = puVar8 + 0x10;
              uVar2 = *local_218;
              local_218 = local_218 + 1;
              local_90 = local_218;
              puVar14[lVar6 + 0xc] = puVar14[0xc] + uVar2;
              uVar2 = *local_220;
              local_220 = local_220 + 1;
              local_88 = local_220;
              puVar14[lVar6 + 0xd] = puVar14[0xd] + uVar2;
              lVar5 = lVar5 + -1;
              puVar14 = puVar14 + 0x10;
            } while (lVar5 != 0);
            local_100[0] = puVar19;
            puVar18 = local_198;
            local_238 = puVar9;
          }
        }
        puVar9 = local_238;
        uVar10 = uVar17;
        puVar14 = puVar8;
        if (uVar17 != 0) {
          do {
            uVar4 = (uint)puVar14 & 0xf;
            puVar19 = local_100[uVar4];
            *puVar14 = puVar14[local_1a0] + *puVar19;
            local_100[uVar4] = puVar19 + 1;
            uVar10 = uVar10 - 1;
            puVar14 = puVar14 + 1;
          } while (uVar10 != 0);
          puVar8 = puVar8 + uVar17;
          local_220 = local_88;
          local_218 = local_90;
          local_210 = local_98;
          local_208 = local_a0;
          local_200 = local_a8;
          local_1f8 = local_b0;
          local_1f0 = local_c0;
          local_1e8 = local_c8;
          local_1e0 = local_d0;
          local_1d8 = local_d8;
          local_1d0 = local_e0;
          local_1c8 = local_100[3];
          local_1c0 = local_100[2];
          local_240 = local_b8;
          local_238 = local_100[1];
          puVar9 = local_100[1];
          puVar19 = local_100[0];
        }
      }
      else if (bVar15 != 0) {
        puVar19 = local_100[uVar4 & 0xf];
        *puVar8 = puVar8[local_1a0] + *puVar19;
        puVar8 = puVar8 + 1;
        local_100[uVar4 & 0xf] = puVar19 + 1;
        uVar4 = (uint)puVar8 & 0xf;
        puVar19 = local_100[uVar4];
        *puVar8 = puVar8[local_1a0] + *puVar19;
        puVar8 = puVar8 + (bVar15 == 0x10);
        local_100[uVar4] = puVar19 + (bVar15 == 0x10);
        local_220 = local_88;
        local_218 = local_90;
        local_210 = local_98;
        local_208 = local_a0;
        local_200 = local_a8;
        local_1f8 = local_b0;
        local_1f0 = local_c0;
        local_1e8 = local_c8;
        local_1e0 = local_d0;
        local_1d8 = local_d8;
        local_1d0 = local_e0;
        local_1c8 = local_100[3];
        local_1c0 = local_100[2];
        local_240 = local_b8;
        local_238 = local_100[1];
        puVar9 = local_100[1];
        puVar19 = local_100[0];
      }
      auVar22._8_8_ = 0;
      auVar22._0_8_ = c_lo_shuffles[local_168];
      local_120 = pshufb(local_120,auVar22);
      uVar17 = (ulonglong)*(int *)((longlong)&local_140 + (ulonglong)local_120[0] * 4);
      lVar5 = 0;
      if (local_168 == 7) {
        lVar5 = 4;
      }
      local_228 = (int *)((longlong)local_228 + lVar5);
      local_1a0 = uVar17;
      if (uVar17 < (ulonglong)((longlong)param_5 - (longlong)puVar8)) goto LAB_14f3bea0e;
      puVar14 = puVar8 + uVar17;
      if (local_178 == 9) {
        if (puVar18 <= puVar21) goto LAB_14f3be9ce;
        puVar1 = puVar18 + -1;
        puVar18 = puVar18 + -1;
        uVar4 = *puVar1 + 6;
        param_2 = puVar8 + uVar4;
        *(undefined8 *)puVar8 = *(undefined8 *)puVar14;
        *(undefined8 *)(puVar8 + 8) = *(undefined8 *)(puVar14 + 8);
        local_198 = puVar18;
        if (0x10 < (ulonglong)uVar4) {
          if ((ulonglong)((longlong)local_190 - (longlong)puVar8) < (ulonglong)uVar4)
          goto LAB_14f3be98e;
          puVar7 = puVar14 + 0x18;
          *(undefined8 *)(puVar8 + 0x10) = *(undefined8 *)(puVar14 + 0x10);
          for (puVar8 = puVar8 + 0x18; puVar8 < param_2; puVar8 = puVar8 + 8) {
            uVar3 = *(undefined8 *)puVar7;
            puVar7 = puVar7 + 8;
            *(undefined8 *)puVar8 = uVar3;
          }
          lVar5 = (longlong)param_3 - (longlong)param_2 >> 6;
          pbVar20 = local_1b0;
          if (lVar5 <= local_1b8) {
            pbVar20 = pbVar11 + lVar5;
          }
        }
      }
      else {
        *(undefined8 *)puVar8 = *(undefined8 *)puVar14;
        param_2 = puVar8 + local_178;
      }
      puVar8 = param_2;
    } while (pbVar11 < pbVar20);
  }
  while (pbVar11 < local_1b0) {
    bVar15 = *pbVar11;
    pbVar11 = pbVar11 + 1;
    lVar6 = (ulonglong)(bVar15 & 7) + 2;
    *(int *)((longlong)&local_140 + (longlong)(int)(uint)local_120[7] * 4) = *local_228;
    lVar5 = (longlong)param_3 - (longlong)param_2;
    if ((bVar15 & 0x18) == 0x18) {
      uVar12 = (ulonglong)*puVar21;
      puVar21 = puVar21 + 1;
      puVar19 = param_2;
      uVar10 = uVar12;
      if (lVar5 < (longlong)uVar12) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          (*g_fp_OodleCore_Plugin_Printf)
                    (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x134,
                     "OODLE ERROR : corruption : (match_zone_end - to_ptr) >= lrl\n");
          ooLogErrorPost();
          return false;
        }
        goto code_r0x00014f3bee00;
      }
      for (; uVar10 != 0; uVar10 = uVar10 - 1) {
        uVar4 = (uint)puVar19 & 0xf;
        puVar9 = local_100[uVar4];
        *puVar19 = puVar19[uVar17] + *puVar9;
        local_100[uVar4] = puVar9 + 1;
        puVar19 = puVar19 + 1;
      }
      puVar19 = param_2 + uVar12;
    }
    else if ((bVar15 & 0x18) == 0) {
      puVar19 = param_2;
      if (lVar5 < 0) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          (*g_fp_OodleCore_Plugin_Printf)
                    (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x18a,
                     "OODLE ERROR : corruption : (match_zone_end - to_ptr) >= 0\n");
          ooLogErrorPost();
          return false;
        }
        goto code_r0x00014f3bee00;
      }
    }
    else {
      uVar10 = (ulonglong)((bVar15 & 0x18) >> 3);
      if (lVar5 < (longlong)uVar10) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          (*g_fp_OodleCore_Plugin_Printf)
                    (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x16d,
                     "OODLE ERROR : corruption : (match_zone_end - to_ptr) >= lrl\n");
          ooLogErrorPost();
          return false;
        }
        goto code_r0x00014f3bee00;
      }
      uVar4 = (uint)param_2 & 0xf;
      puVar19 = local_100[uVar4];
      *param_2 = param_2[uVar17] + *puVar19;
      puVar9 = param_2 + 1;
      local_100[uVar4] = puVar19 + 1;
      uVar4 = (uint)puVar9 & 0xf;
      puVar19 = local_100[uVar4];
      *puVar9 = puVar9[uVar17] + *puVar19;
      local_100[uVar4] = puVar19 + (uVar10 == 2);
      puVar19 = puVar9 + (uVar10 == 2);
    }
    auVar23._8_8_ = 0;
    auVar23._0_8_ = c_lo_shuffles[bVar15 >> 5];
    local_120 = pshufb(local_120,auVar23);
    uVar17 = (ulonglong)*(int *)((longlong)&local_140 + (ulonglong)local_120[0] * 4);
    lVar5 = 0;
    if ((ulonglong)(bVar15 >> 5) == 7) {
      lVar5 = 4;
    }
    local_228 = (int *)((longlong)local_228 + lVar5);
    if (uVar17 < (ulonglong)((longlong)param_5 - (longlong)puVar19)) goto LAB_14f3bea0e;
    puVar9 = puVar19 + uVar17;
    if (lVar6 == 9) {
      if (puVar18 <= puVar21) goto LAB_14f3be9ce;
      puVar1 = puVar18 + -1;
      puVar18 = puVar18 + -1;
      uVar4 = *puVar1 + 6;
      param_2 = puVar19 + uVar4;
      *(undefined8 *)puVar19 = *(undefined8 *)puVar9;
      *(undefined8 *)(puVar19 + 8) = *(undefined8 *)(puVar9 + 8);
      if (0x10 < (ulonglong)uVar4) {
        if ((ulonglong)((longlong)local_190 - (longlong)puVar19) < (ulonglong)uVar4)
        goto LAB_14f3be98e;
        puVar8 = puVar9 + 0x18;
        *(undefined8 *)(puVar19 + 0x10) = *(undefined8 *)(puVar9 + 0x10);
        for (puVar19 = puVar19 + 0x18; puVar19 < param_2; puVar19 = puVar19 + 8) {
          uVar3 = *(undefined8 *)puVar8;
          puVar8 = puVar8 + 8;
          *(undefined8 *)puVar19 = uVar3;
        }
      }
    }
    else {
      *(undefined8 *)puVar19 = *(undefined8 *)puVar9;
      param_2 = puVar19 + lVar6;
    }
  }
  if (param_2 < param_4) {
    lVar5 = (longlong)param_4 - (longlong)param_2;
    if (lVar5 < 1) goto LAB_14f3bedab;
    do {
      uVar4 = (uint)param_2 & 0xf;
      puVar19 = local_100[uVar4];
      *param_2 = param_2[uVar17] + *puVar19;
      param_2 = param_2 + 1;
      local_100[uVar4] = puVar19 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
code_r0x00014f3bed80:
    if (local_228 == local_158) {
      if (puVar21 == puVar18) {
        return true;
      }
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto code_r0x00014f3bee00;
      pcVar16 = "OODLE ERROR : corruption : excesses_ptr == excesses_end_ptr\n";
      iVar13 = 0x197;
    }
    else {
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto code_r0x00014f3bee00;
      pcVar16 = "OODLE ERROR : corruption : offsets_ptr == offsets_end\n";
      iVar13 = 0x196;
    }
  }
  else {
    if (param_2 == param_4) goto code_r0x00014f3bed80;
LAB_14f3bedab:
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto code_r0x00014f3bee00;
    pcVar16 = "OODLE ERROR : corruption : to_ptr == chunk_end\n";
    iVar13 = 0x18d;
  }
  (*g_fp_OodleCore_Plugin_Printf)
            (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_outer.inl",iVar13,pcVar16);
code_r0x00014f3bee00:
  ooLogErrorPost();
  return false;
LAB_14f3bea0e:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x2e2,
               "OODLE ERROR : corruption : (UINTa)neg_offset >= (UINTa) (window_base - to_ptr)\n");
    ooLogErrorPost();
    return false;
  }
  goto code_r0x00014f3bee00;
LAB_14f3be9ce:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x304,
               "OODLE ERROR : corruption : excesses_end_ptr > excesses_ptr\n");
    ooLogErrorPost();
    return false;
  }
  goto code_r0x00014f3bee00;
LAB_14f3be98e:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x322,
               "OODLE ERROR : corruption : (UINTa)(match_end - to_ptr) >= ml\n");
    ooLogErrorPost();
    return false;
  }
  goto code_r0x00014f3bee00;
}

// newLZHC_decode_parse_multipacket_raw_sse4 @ 14f3bee40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
oo2::newLZHC_decode_parse_multipacket_raw_sse4
          (newLZHC_chunk_arrays *param_1,uchar *param_2,uchar *param_3,uchar *param_4,uchar *param_5
          )

{
  uchar *puVar1;
  byte bVar2;
  undefined8 uVar3;
  uchar *puVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  uchar *puVar8;
  uchar **ppuVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  ulonglong uVar13;
  uchar *_Src;
  char *pcVar14;
  longlong lVar15;
  longlong lVar16;
  int *piVar17;
  longlong lVar18;
  byte *pbVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auStack_168 [40];
  uchar *local_140;
  int *local_138;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined1 local_e0 [16];
  uchar *local_c0 [4];
  uchar *local_a0;
  uchar *local_98;
  uchar *local_90;
  uchar *local_88;
  ulonglong local_80;
  
  local_80 = __security_cookie.value ^ (ulonglong)auStack_168;
  piVar17 = param_1->offsets;
  puVar10 = param_1->excesses;
  lVar18 = param_1->packets_count;
  local_138 = piVar17 + param_1->offsets_count;
  iVar12 = (int)param_3;
  _Src = param_1->literals_ptrs[0];
  local_e0 = ___xmm_00000000000000000706050403020100;
  local_100 = ___xmm_fffffff8fffffff8fffffff8fffffff8;
  uStack_f8 = _UNK_1531db198;
  local_f0 = 0xfffffff8;
  local_ec = 0xfffffff8;
  local_c0[0] = param_1->packet_pos_ptrs[-iVar12 & 7];
  local_e8 = 0xfffffff8;
  local_c0[1] = param_1->packet_pos_ptrs[1U - iVar12 & 7];
  local_c0[2] = param_1->packet_pos_ptrs[2U - iVar12 & 7];
  local_c0[3] = param_1->packet_pos_ptrs[3U - iVar12 & 7];
  local_a0 = param_1->packet_pos_ptrs[-iVar12 - 4U & 7];
  local_98 = param_1->packet_pos_ptrs[-iVar12 - 3U & 7];
  local_90 = param_1->packet_pos_ptrs[-iVar12 - 2U & 7];
  local_88 = param_1->packet_pos_ptrs[-iVar12 - 1U & 7];
  puVar11 = puVar10 + param_1->excesses_count;
  if (0xf < (longlong)param_4 - (longlong)param_3) {
    param_3 = param_4 + -0x10;
  }
  ppuVar9 = local_c0 + ((uint)param_2 & 7);
  lVar15 = lVar18 - ((longlong)param_3 - (longlong)param_2 >> 6);
  if (lVar15 < 1) {
    lVar15 = 0;
  }
  do {
    pbVar19 = *ppuVar9;
    while( true ) {
      local_140 = param_4;
      if (lVar18 <= lVar15) {
        uVar5 = (uint)param_2 & 7;
        pbVar19 = local_c0[uVar5];
        ppuVar9 = local_c0 + uVar5;
        goto joined_r0x00014f3bf2ea;
      }
      bVar2 = *pbVar19;
      *ppuVar9 = pbVar19 + 1;
      lVar18 = lVar18 + -1;
      uVar13 = (ulonglong)(bVar2 >> 3 & 3);
      lVar16 = (ulonglong)(bVar2 & 7) + 2;
      *(int *)((longlong)&local_100 + (longlong)(int)(uint)local_e0[7] * 4) = *piVar17;
      uVar5 = *puVar10;
      if (uVar13 == 3) {
        puVar10 = puVar10 + 1;
      }
      if (uVar13 == 3) {
        uVar13 = (ulonglong)uVar5;
      }
      *(undefined8 *)param_2 = *(undefined8 *)_Src;
      if (((8 < uVar13) && (*(undefined8 *)(param_2 + 8) = *(undefined8 *)(_Src + 8), 0x10 < uVar13)
          ) && (*(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(_Src + 0x10), 0x18 < uVar13)) {
        if ((longlong)param_3 - (longlong)param_2 < (longlong)uVar13) {
          ooLogErrorPre();
          if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
            (*g_fp_OodleCore_Plugin_Printf)
                      (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x292,
                       "OODLE ERROR : corruption : (match_zone_end - to_ptr) >= (lrl)\n");
            ooLogErrorPost();
            return false;
          }
          goto code_r0x00014f3bf580;
        }
        lVar15 = lVar18 - ((longlong)(((longlong)param_3 - (longlong)param_2) - uVar13) >> 6);
        if (lVar15 < 1) {
          lVar15 = 0;
        }
        param_2 = param_2 + 0x18;
        _Src = _Src + 0x18;
        uVar13 = uVar13 - 0x18;
        do {
          uVar13 = uVar13 - 8;
          *(undefined8 *)param_2 = *(undefined8 *)_Src;
          _Src = _Src + 8;
          param_2 = param_2 + 8;
        } while (0 < (longlong)uVar13);
      }
      auVar20._8_8_ = 0;
      auVar20._0_8_ = c_lo_shuffles[bVar2 >> 5];
      puVar4 = param_2 + uVar13;
      _Src = _Src + uVar13;
      local_e0 = pshufb(local_e0,auVar20);
      uVar13 = (ulonglong)*(int *)((longlong)&local_100 + (ulonglong)local_e0[0] * 4);
      lVar7 = 0;
      if ((ulonglong)(bVar2 >> 5) == 7) {
        lVar7 = 4;
      }
      piVar17 = (int *)((longlong)piVar17 + lVar7);
      if (uVar13 < (ulonglong)((longlong)param_5 - (longlong)puVar4)) goto LAB_14f3bf299;
      puVar1 = puVar4 + uVar13;
      if (lVar16 != 9) break;
      if (puVar11 <= puVar10) goto code_r0x00014f3bf260;
      uVar5 = puVar11[-1] + 6;
      puVar11 = puVar11 + -1;
      param_2 = puVar4 + uVar5;
      *(undefined8 *)puVar4 = *(undefined8 *)puVar1;
      *(undefined8 *)(puVar4 + 8) = *(undefined8 *)(puVar1 + 8);
      uVar6 = (uint)param_2 & 7;
      pbVar19 = local_c0[uVar6];
      ppuVar9 = local_c0 + uVar6;
      if ((uchar *)0x10 < (uchar *)(ulonglong)uVar5) {
        if (param_4 + (-8 - (longlong)puVar4) < (uchar *)(ulonglong)uVar5) goto LAB_14f3bf225;
        puVar8 = puVar1 + 0x18;
        *(undefined8 *)(puVar4 + 0x10) = *(undefined8 *)(puVar1 + 0x10);
        for (puVar4 = puVar4 + 0x18; puVar4 < param_2; puVar4 = puVar4 + 8) {
          uVar3 = *(undefined8 *)puVar8;
          puVar8 = puVar8 + 8;
          *(undefined8 *)puVar4 = uVar3;
        }
        lVar15 = lVar18 - ((longlong)param_3 - (longlong)param_2 >> 6);
        if (lVar15 < 1) {
          lVar15 = 0;
        }
      }
    }
    *(undefined8 *)puVar4 = *(undefined8 *)puVar1;
    param_2 = puVar4 + lVar16;
    ppuVar9 = local_c0 + ((uint)param_2 & 7);
  } while( true );
LAB_14f3bf299:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x2e2,
               "OODLE ERROR : corruption : (UINTa)neg_offset >= (UINTa) (window_base - to_ptr)\n");
    ooLogErrorPost();
    return false;
  }
  goto code_r0x00014f3bf580;
code_r0x00014f3bf260:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x304,
               "OODLE ERROR : corruption : excesses_end_ptr > excesses_ptr\n");
    ooLogErrorPost();
    return false;
  }
  goto code_r0x00014f3bf580;
LAB_14f3bf225:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x322,
               "OODLE ERROR : corruption : (UINTa)(match_end - to_ptr) >= ml\n");
    ooLogErrorPost();
    return false;
  }
  goto code_r0x00014f3bf580;
joined_r0x00014f3bf2ea:
  if (0 < lVar18) {
    bVar2 = *pbVar19;
    *ppuVar9 = pbVar19 + 1;
    uVar13 = (ulonglong)(bVar2 >> 3 & 3);
    lVar18 = lVar18 + -1;
    lVar15 = (ulonglong)(bVar2 & 7) + 2;
    *(int *)((longlong)&local_100 + (longlong)(int)(uint)local_e0[7] * 4) = *piVar17;
    if (uVar13 == 3) {
      uVar13 = (ulonglong)*puVar10;
      puVar10 = puVar10 + 1;
    }
    if ((longlong)param_3 - (longlong)param_2 < (longlong)uVar13) {
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
        (*g_fp_OodleCore_Plugin_Printf)
                  (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x253,
                   "OODLE ERROR : corruption : (match_zone_end - to_ptr) >= lrl\n");
        ooLogErrorPost();
        return false;
      }
      goto code_r0x00014f3bf580;
    }
    *(undefined8 *)param_2 = *(undefined8 *)_Src;
    if (((8 < uVar13) && (*(undefined8 *)(param_2 + 8) = *(undefined8 *)(_Src + 8), 0x10 < uVar13))
       && (*(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(_Src + 0x10), 0x18 < uVar13)) {
      param_2 = param_2 + 0x18;
      _Src = _Src + 0x18;
      uVar13 = uVar13 - 0x18;
      do {
        uVar13 = uVar13 - 8;
        *(undefined8 *)param_2 = *(undefined8 *)_Src;
        _Src = _Src + 8;
        param_2 = param_2 + 8;
      } while (0 < (longlong)uVar13);
    }
    auVar21._8_8_ = 0;
    auVar21._0_8_ = c_lo_shuffles[bVar2 >> 5];
    puVar4 = param_2 + uVar13;
    _Src = _Src + uVar13;
    local_e0 = pshufb(local_e0,auVar21);
    uVar13 = (ulonglong)*(int *)((longlong)&local_100 + (ulonglong)local_e0[0] * 4);
    lVar16 = 0;
    if ((ulonglong)(bVar2 >> 5) == 7) {
      lVar16 = 4;
    }
    piVar17 = (int *)((longlong)piVar17 + lVar16);
    if (uVar13 < (ulonglong)((longlong)param_5 - (longlong)puVar4)) goto LAB_14f3bf299;
    puVar1 = puVar4 + uVar13;
    if (lVar15 == 9) {
      if (puVar11 <= puVar10) goto code_r0x00014f3bf260;
      uVar5 = puVar11[-1] + 6;
      puVar11 = puVar11 + -1;
      param_2 = puVar4 + uVar5;
      *(undefined8 *)puVar4 = *(undefined8 *)puVar1;
      *(undefined8 *)(puVar4 + 8) = *(undefined8 *)(puVar1 + 8);
      uVar6 = (uint)param_2 & 7;
      pbVar19 = local_c0[uVar6];
      ppuVar9 = local_c0 + uVar6;
      if ((uchar *)0x10 < (uchar *)(ulonglong)uVar5) {
        if (param_4 + (-8 - (longlong)puVar4) < (uchar *)(ulonglong)uVar5) goto LAB_14f3bf225;
        puVar8 = puVar1 + 0x18;
        *(undefined8 *)(puVar4 + 0x10) = *(undefined8 *)(puVar1 + 0x10);
        for (puVar4 = puVar4 + 0x18; puVar4 < param_2; puVar4 = puVar4 + 8) {
          uVar3 = *(undefined8 *)puVar8;
          puVar8 = puVar8 + 8;
          *(undefined8 *)puVar4 = uVar3;
        }
      }
    }
    else {
      *(undefined8 *)puVar4 = *(undefined8 *)puVar1;
      param_2 = puVar4 + lVar15;
      uVar5 = (uint)param_2 & 7;
      pbVar19 = local_c0[uVar5];
      ppuVar9 = local_c0 + uVar5;
    }
    goto joined_r0x00014f3bf2ea;
  }
  if (param_2 < param_4) {
    memcpy(param_2,_Src,(longlong)param_4 - (longlong)param_2);
LAB_14f3bf4cb:
    if (piVar17 == local_138) {
      if (puVar10 == puVar11) {
        return true;
      }
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto code_r0x00014f3bf580;
      pcVar14 = "OODLE ERROR : corruption : excesses_ptr == excesses_end_ptr\n";
      iVar12 = 0x197;
    }
    else {
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto code_r0x00014f3bf580;
      pcVar14 = "OODLE ERROR : corruption : offsets_ptr == offsets_end\n";
      iVar12 = 0x196;
    }
  }
  else {
    if (param_2 == param_4) goto LAB_14f3bf4cb;
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto code_r0x00014f3bf580;
    pcVar14 = "OODLE ERROR : corruption : to_ptr == chunk_end\n";
    iVar12 = 0x18d;
  }
  (*g_fp_OodleCore_Plugin_Printf)
            (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_outer.inl",iVar12,pcVar14);
code_r0x00014f3bf580:
  ooLogErrorPost();
  return false;
}

// newLZHC_decode_parse_multipacket_sub_sse4 @ 14f3bf5c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
oo2::newLZHC_decode_parse_multipacket_sub_sse4
          (newLZHC_chunk_arrays *param_1,uchar *param_2,uchar *param_3,uchar *param_4,uchar *param_5
          )

{
  uchar *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  uchar *puVar8;
  uchar *puVar9;
  longlong lVar10;
  uint *puVar11;
  uchar **ppuVar12;
  int iVar13;
  uchar *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  char *pcVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint *puVar20;
  int *piVar21;
  byte *pbVar22;
  longlong lVar23;
  bool bVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auStack_168 [40];
  uchar *local_140;
  uchar *local_138;
  int *local_130;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined1 local_e0 [16];
  uchar *local_c0 [4];
  uchar *local_a0;
  uchar *local_98;
  uchar *local_90;
  uchar *local_88;
  ulonglong local_80;
  
  local_80 = __security_cookie.value ^ (ulonglong)auStack_168;
  uVar18 = 0xfffffffffffffff8;
  piVar21 = param_1->offsets;
  puVar20 = param_1->excesses;
  local_130 = piVar21 + param_1->offsets_count;
  lVar23 = param_1->packets_count;
  iVar13 = (int)param_3;
  local_e0 = ___xmm_00000000000000000706050403020100;
  local_100 = ___xmm_fffffff8fffffff8fffffff8fffffff8;
  uStack_f8 = _UNK_1531db198;
  local_f0 = 0xfffffff8;
  local_c0[0] = param_1->packet_pos_ptrs[-iVar13 & 7];
  local_ec = 0xfffffff8;
  local_e8 = 0xfffffff8;
  local_c0[1] = param_1->packet_pos_ptrs[1U - iVar13 & 7];
  local_c0[2] = param_1->packet_pos_ptrs[2U - iVar13 & 7];
  local_c0[3] = param_1->packet_pos_ptrs[3U - iVar13 & 7];
  local_a0 = param_1->packet_pos_ptrs[-iVar13 - 4U & 7];
  local_98 = param_1->packet_pos_ptrs[-iVar13 - 3U & 7];
  local_90 = param_1->packet_pos_ptrs[-iVar13 - 2U & 7];
  puVar14 = param_1->literals_ptrs[0];
  local_88 = param_1->packet_pos_ptrs[-iVar13 - 1U & 7];
  puVar11 = puVar20 + param_1->excesses_count;
  if (0xf < (longlong)param_4 - (longlong)param_3) {
    param_3 = param_4 + -0x10;
  }
  ppuVar12 = local_c0 + ((uint)param_2 & 7);
  lVar19 = lVar23 - ((longlong)param_3 - (longlong)param_2 >> 6);
  if (lVar19 < 1) {
    lVar19 = 0;
  }
  do {
    pbVar22 = *ppuVar12;
    while( true ) {
      local_140 = param_3;
      local_138 = param_4;
      if (lVar23 <= lVar19) {
        uVar5 = (uint)param_2 & 7;
        pbVar22 = local_c0[uVar5];
        ppuVar12 = local_c0 + uVar5;
        goto joined_r0x00014f3bfac6;
      }
      bVar4 = *pbVar22;
      uVar2 = *(undefined8 *)puVar14;
      *ppuVar12 = pbVar22 + 1;
      uVar3 = *(undefined8 *)(param_2 + uVar18);
      lVar23 = lVar23 + -1;
      lVar10 = (ulonglong)(bVar4 & 7) + 2;
      uVar15 = (ulonglong)(bVar4 >> 3 & 3);
      bVar24 = uVar15 == 3;
      *(int *)((longlong)&local_100 + (longlong)(int)(uint)local_e0[7] * 4) = *piVar21;
      if (bVar24) {
        uVar15 = (ulonglong)*puVar20;
      }
      *(ulonglong *)param_2 =
           CONCAT17((char)((ulonglong)uVar3 >> 0x38) + (char)((ulonglong)uVar2 >> 0x38),
                    CONCAT16((char)((ulonglong)uVar3 >> 0x30) + (char)((ulonglong)uVar2 >> 0x30),
                             CONCAT15((char)((ulonglong)uVar3 >> 0x28) +
                                      (char)((ulonglong)uVar2 >> 0x28),
                                      CONCAT14((char)((ulonglong)uVar3 >> 0x20) +
                                               (char)((ulonglong)uVar2 >> 0x20),
                                               CONCAT13((char)((ulonglong)uVar3 >> 0x18) +
                                                        (char)((ulonglong)uVar2 >> 0x18),
                                                        CONCAT12((char)((ulonglong)uVar3 >> 0x10) +
                                                                 (char)((ulonglong)uVar2 >> 0x10),
                                                                 CONCAT11((char)((ulonglong)uVar3 >>
                                                                                8) +
                                                                          (char)((ulonglong)uVar2 >>
                                                                                8),(char)uVar3 +
                                                                                   (char)uVar2))))))
                   );
      if (bVar24) {
        puVar20 = puVar20 + 1;
      }
      if (8 < uVar15) {
        uVar2 = *(undefined8 *)(param_2 + uVar18 + 8);
        uVar3 = *(undefined8 *)(puVar14 + 8);
        *(ulonglong *)(param_2 + 8) =
             CONCAT17((char)((ulonglong)uVar2 >> 0x38) + (char)((ulonglong)uVar3 >> 0x38),
                      CONCAT16((char)((ulonglong)uVar2 >> 0x30) + (char)((ulonglong)uVar3 >> 0x30),
                               CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                        (char)((ulonglong)uVar3 >> 0x28),
                                        CONCAT14((char)((ulonglong)uVar2 >> 0x20) +
                                                 (char)((ulonglong)uVar3 >> 0x20),
                                                 CONCAT13((char)((ulonglong)uVar2 >> 0x18) +
                                                          (char)((ulonglong)uVar3 >> 0x18),
                                                          CONCAT12((char)((ulonglong)uVar2 >> 0x10)
                                                                   + (char)((ulonglong)uVar3 >> 0x10
                                                                           ),
                                                                   CONCAT11((char)((ulonglong)uVar2
                                                                                  >> 8) +
                                                                            (char)((ulonglong)uVar3
                                                                                  >> 8),
                                                                            (char)uVar2 +
                                                                            (char)uVar3)))))));
        if (0x10 < uVar15) {
          uVar2 = *(undefined8 *)(param_2 + uVar18 + 0x10);
          uVar3 = *(undefined8 *)(puVar14 + 0x10);
          *(ulonglong *)(param_2 + 0x10) =
               CONCAT17((char)((ulonglong)uVar2 >> 0x38) + (char)((ulonglong)uVar3 >> 0x38),
                        CONCAT16((char)((ulonglong)uVar2 >> 0x30) + (char)((ulonglong)uVar3 >> 0x30)
                                 ,CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                           (char)((ulonglong)uVar3 >> 0x28),
                                           CONCAT14((char)((ulonglong)uVar2 >> 0x20) +
                                                    (char)((ulonglong)uVar3 >> 0x20),
                                                    CONCAT13((char)((ulonglong)uVar2 >> 0x18) +
                                                             (char)((ulonglong)uVar3 >> 0x18),
                                                             CONCAT12((char)((ulonglong)uVar2 >>
                                                                            0x10) +
                                                                      (char)((ulonglong)uVar3 >>
                                                                            0x10),
                                                                      CONCAT11((char)((ulonglong)
                                                                                      uVar2 >> 8) +
                                                                               (char)((ulonglong)
                                                                                      uVar3 >> 8),
                                                                               (char)uVar2 +
                                                                               (char)uVar3)))))));
          if (0x18 < uVar15) {
            if ((longlong)param_3 - (longlong)param_2 < (longlong)uVar15) {
              ooLogErrorPre();
              if (g_fp_OodleCore_Plugin_Printf !=
                  (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
                (*g_fp_OodleCore_Plugin_Printf)
                          (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",
                           0x292,"OODLE ERROR : corruption : (match_zone_end - to_ptr) >= (lrl)\n");
                ooLogErrorPost();
                return false;
              }
              goto LAB_14f3bfe10;
            }
            lVar19 = lVar23 - ((longlong)(((longlong)param_3 - (longlong)param_2) - uVar15) >> 6);
            if (lVar19 < 1) {
              lVar19 = 0;
            }
            param_2 = param_2 + 0x18;
            puVar14 = puVar14 + 0x18;
            uVar15 = uVar15 - 0x18;
            do {
              uVar2 = *(undefined8 *)(param_2 + uVar18);
              uVar15 = uVar15 - 8;
              uVar3 = *(undefined8 *)puVar14;
              puVar14 = puVar14 + 8;
              *(ulonglong *)param_2 =
                   CONCAT17((char)((ulonglong)uVar2 >> 0x38) + (char)((ulonglong)uVar3 >> 0x38),
                            CONCAT16((char)((ulonglong)uVar2 >> 0x30) +
                                     (char)((ulonglong)uVar3 >> 0x30),
                                     CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                              (char)((ulonglong)uVar3 >> 0x28),
                                              CONCAT14((char)((ulonglong)uVar2 >> 0x20) +
                                                       (char)((ulonglong)uVar3 >> 0x20),
                                                       CONCAT13((char)((ulonglong)uVar2 >> 0x18) +
                                                                (char)((ulonglong)uVar3 >> 0x18),
                                                                CONCAT12((char)((ulonglong)uVar2 >>
                                                                               0x10) +
                                                                         (char)((ulonglong)uVar3 >>
                                                                               0x10),
                                                                         CONCAT11((char)((ulonglong)
                                                                                         uVar2 >> 8)
                                                                                  + (char)((
                                                  ulonglong)uVar3 >> 8),(char)uVar2 + (char)uVar3)))
                                                  ))));
              param_2 = param_2 + 8;
            } while (0 < (longlong)uVar15);
          }
        }
      }
      auVar25._8_8_ = 0;
      auVar25._0_8_ = c_lo_shuffles[bVar4 >> 5];
      puVar9 = param_2 + uVar15;
      local_e0 = pshufb(local_e0,auVar25);
      puVar14 = puVar14 + uVar15;
      uVar18 = (ulonglong)*(int *)((longlong)&local_100 + (ulonglong)local_e0[0] * 4);
      lVar7 = 0;
      if ((ulonglong)(bVar4 >> 5) == 7) {
        lVar7 = 4;
      }
      piVar21 = (int *)((longlong)piVar21 + lVar7);
      if (uVar18 < (ulonglong)((longlong)param_5 - (longlong)puVar9)) goto LAB_14f3bfa6e;
      puVar1 = puVar9 + uVar18;
      if (lVar10 != 9) break;
      if (puVar11 <= puVar20) goto LAB_14f3bfa2e;
      uVar5 = puVar11[-1] + 6;
      puVar11 = puVar11 + -1;
      param_2 = puVar9 + uVar5;
      *(undefined8 *)puVar9 = *(undefined8 *)puVar1;
      *(undefined8 *)(puVar9 + 8) = *(undefined8 *)(puVar1 + 8);
      uVar6 = (uint)param_2 & 7;
      pbVar22 = local_c0[uVar6];
      ppuVar12 = local_c0 + uVar6;
      if ((uchar *)0x10 < (uchar *)(ulonglong)uVar5) {
        if (param_4 + (-8 - (longlong)puVar9) < (uchar *)(ulonglong)uVar5) goto LAB_14f3bf9f0;
        puVar8 = puVar1 + 0x18;
        *(undefined8 *)(puVar9 + 0x10) = *(undefined8 *)(puVar1 + 0x10);
        for (puVar9 = puVar9 + 0x18; puVar9 < param_2; puVar9 = puVar9 + 8) {
          uVar2 = *(undefined8 *)puVar8;
          puVar8 = puVar8 + 8;
          *(undefined8 *)puVar9 = uVar2;
        }
        lVar19 = lVar23 - ((longlong)param_3 - (longlong)param_2 >> 6);
        if (lVar19 < 1) {
          lVar19 = 0;
        }
      }
    }
    *(undefined8 *)puVar9 = *(undefined8 *)puVar1;
    param_2 = puVar9 + lVar10;
    ppuVar12 = local_c0 + ((uint)param_2 & 7);
  } while( true );
LAB_14f3bfa6e:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x2e2,
               "OODLE ERROR : corruption : (UINTa)neg_offset >= (UINTa) (window_base - to_ptr)\n");
    ooLogErrorPost();
    return false;
  }
  goto LAB_14f3bfe10;
LAB_14f3bfa2e:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x304,
               "OODLE ERROR : corruption : excesses_end_ptr > excesses_ptr\n");
    ooLogErrorPost();
    return false;
  }
  goto LAB_14f3bfe10;
LAB_14f3bf9f0:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x322,
               "OODLE ERROR : corruption : (UINTa)(match_end - to_ptr) >= ml\n");
    ooLogErrorPost();
    return false;
  }
  goto LAB_14f3bfe10;
joined_r0x00014f3bfac6:
  if (0 < lVar23) {
    bVar4 = *pbVar22;
    *ppuVar12 = pbVar22 + 1;
    uVar15 = (ulonglong)(bVar4 >> 3 & 3);
    lVar23 = lVar23 + -1;
    lVar19 = (ulonglong)(bVar4 & 7) + 2;
    *(int *)((longlong)&local_100 + (longlong)(int)(uint)local_e0[7] * 4) = *piVar21;
    if (uVar15 == 3) {
      uVar15 = (ulonglong)*puVar20;
      puVar20 = puVar20 + 1;
    }
    if ((longlong)param_3 - (longlong)param_2 < (longlong)uVar15) {
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
        (*g_fp_OodleCore_Plugin_Printf)
                  (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x253,
                   "OODLE ERROR : corruption : (match_zone_end - to_ptr) >= lrl\n");
        ooLogErrorPost();
        return false;
      }
      goto LAB_14f3bfe10;
    }
    uVar2 = *(undefined8 *)(param_2 + uVar18);
    uVar3 = *(undefined8 *)puVar14;
    *(ulonglong *)param_2 =
         CONCAT17((char)((ulonglong)uVar2 >> 0x38) + (char)((ulonglong)uVar3 >> 0x38),
                  CONCAT16((char)((ulonglong)uVar2 >> 0x30) + (char)((ulonglong)uVar3 >> 0x30),
                           CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                    (char)((ulonglong)uVar3 >> 0x28),
                                    CONCAT14((char)((ulonglong)uVar2 >> 0x20) +
                                             (char)((ulonglong)uVar3 >> 0x20),
                                             CONCAT13((char)((ulonglong)uVar2 >> 0x18) +
                                                      (char)((ulonglong)uVar3 >> 0x18),
                                                      CONCAT12((char)((ulonglong)uVar2 >> 0x10) +
                                                               (char)((ulonglong)uVar3 >> 0x10),
                                                               CONCAT11((char)((ulonglong)uVar2 >> 8
                                                                              ) + (char)((ulonglong)
                                                                                         uVar3 >> 8)
                                                                        ,(char)uVar2 + (char)uVar3))
                                                     )))));
    if (8 < uVar15) {
      uVar2 = *(undefined8 *)(param_2 + uVar18 + 8);
      uVar3 = *(undefined8 *)(puVar14 + 8);
      *(ulonglong *)(param_2 + 8) =
           CONCAT17((char)((ulonglong)uVar2 >> 0x38) + (char)((ulonglong)uVar3 >> 0x38),
                    CONCAT16((char)((ulonglong)uVar2 >> 0x30) + (char)((ulonglong)uVar3 >> 0x30),
                             CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                      (char)((ulonglong)uVar3 >> 0x28),
                                      CONCAT14((char)((ulonglong)uVar2 >> 0x20) +
                                               (char)((ulonglong)uVar3 >> 0x20),
                                               CONCAT13((char)((ulonglong)uVar2 >> 0x18) +
                                                        (char)((ulonglong)uVar3 >> 0x18),
                                                        CONCAT12((char)((ulonglong)uVar2 >> 0x10) +
                                                                 (char)((ulonglong)uVar3 >> 0x10),
                                                                 CONCAT11((char)((ulonglong)uVar2 >>
                                                                                8) +
                                                                          (char)((ulonglong)uVar3 >>
                                                                                8),(char)uVar2 +
                                                                                   (char)uVar3))))))
                   );
      if (0x10 < uVar15) {
        uVar2 = *(undefined8 *)(param_2 + uVar18 + 0x10);
        uVar3 = *(undefined8 *)(puVar14 + 0x10);
        *(ulonglong *)(param_2 + 0x10) =
             CONCAT17((char)((ulonglong)uVar2 >> 0x38) + (char)((ulonglong)uVar3 >> 0x38),
                      CONCAT16((char)((ulonglong)uVar2 >> 0x30) + (char)((ulonglong)uVar3 >> 0x30),
                               CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                        (char)((ulonglong)uVar3 >> 0x28),
                                        CONCAT14((char)((ulonglong)uVar2 >> 0x20) +
                                                 (char)((ulonglong)uVar3 >> 0x20),
                                                 CONCAT13((char)((ulonglong)uVar2 >> 0x18) +
                                                          (char)((ulonglong)uVar3 >> 0x18),
                                                          CONCAT12((char)((ulonglong)uVar2 >> 0x10)
                                                                   + (char)((ulonglong)uVar3 >> 0x10
                                                                           ),
                                                                   CONCAT11((char)((ulonglong)uVar2
                                                                                  >> 8) +
                                                                            (char)((ulonglong)uVar3
                                                                                  >> 8),
                                                                            (char)uVar2 +
                                                                            (char)uVar3)))))));
        if (0x18 < uVar15) {
          param_2 = param_2 + 0x18;
          puVar14 = puVar14 + 0x18;
          uVar15 = uVar15 - 0x18;
          do {
            uVar2 = *(undefined8 *)(param_2 + uVar18);
            uVar15 = uVar15 - 8;
            uVar3 = *(undefined8 *)puVar14;
            puVar14 = puVar14 + 8;
            *(ulonglong *)param_2 =
                 CONCAT17((char)((ulonglong)uVar2 >> 0x38) + (char)((ulonglong)uVar3 >> 0x38),
                          CONCAT16((char)((ulonglong)uVar2 >> 0x30) +
                                   (char)((ulonglong)uVar3 >> 0x30),
                                   CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                            (char)((ulonglong)uVar3 >> 0x28),
                                            CONCAT14((char)((ulonglong)uVar2 >> 0x20) +
                                                     (char)((ulonglong)uVar3 >> 0x20),
                                                     CONCAT13((char)((ulonglong)uVar2 >> 0x18) +
                                                              (char)((ulonglong)uVar3 >> 0x18),
                                                              CONCAT12((char)((ulonglong)uVar2 >>
                                                                             0x10) +
                                                                       (char)((ulonglong)uVar3 >>
                                                                             0x10),
                                                                       CONCAT11((char)((ulonglong)
                                                                                       uVar2 >> 8) +
                                                                                (char)((ulonglong)
                                                                                       uVar3 >> 8),
                                                                                (char)uVar2 +
                                                                                (char)uVar3)))))));
            param_2 = param_2 + 8;
          } while (0 < (longlong)uVar15);
        }
      }
    }
    auVar26._8_8_ = 0;
    auVar26._0_8_ = c_lo_shuffles[bVar4 >> 5];
    puVar9 = param_2 + uVar15;
    local_e0 = pshufb(local_e0,auVar26);
    puVar14 = puVar14 + uVar15;
    uVar18 = (ulonglong)*(int *)((longlong)&local_100 + (ulonglong)local_e0[0] * 4);
    lVar10 = 0;
    if ((ulonglong)(bVar4 >> 5) == 7) {
      lVar10 = 4;
    }
    piVar21 = (int *)((longlong)piVar21 + lVar10);
    if (uVar18 < (ulonglong)((longlong)param_5 - (longlong)puVar9)) goto LAB_14f3bfa6e;
    puVar1 = puVar9 + uVar18;
    if (lVar19 == 9) {
      if (puVar11 <= puVar20) goto LAB_14f3bfa2e;
      uVar5 = puVar11[-1] + 6;
      puVar11 = puVar11 + -1;
      param_2 = puVar9 + uVar5;
      *(undefined8 *)puVar9 = *(undefined8 *)puVar1;
      *(undefined8 *)(puVar9 + 8) = *(undefined8 *)(puVar1 + 8);
      uVar6 = (uint)param_2 & 7;
      pbVar22 = local_c0[uVar6];
      ppuVar12 = local_c0 + uVar6;
      if ((uchar *)0x10 < (uchar *)(ulonglong)uVar5) {
        if (param_4 + (-8 - (longlong)puVar9) < (uchar *)(ulonglong)uVar5) goto LAB_14f3bf9f0;
        puVar8 = puVar1 + 0x18;
        *(undefined8 *)(puVar9 + 0x10) = *(undefined8 *)(puVar1 + 0x10);
        for (puVar9 = puVar9 + 0x18; puVar9 < param_2; puVar9 = puVar9 + 8) {
          uVar2 = *(undefined8 *)puVar8;
          puVar8 = puVar8 + 8;
          *(undefined8 *)puVar9 = uVar2;
        }
      }
    }
    else {
      *(undefined8 *)puVar9 = *(undefined8 *)puVar1;
      param_2 = puVar9 + lVar19;
      uVar5 = (uint)param_2 & 7;
      pbVar22 = local_c0[uVar5];
      ppuVar12 = local_c0 + uVar5;
    }
    goto joined_r0x00014f3bfac6;
  }
  if (param_2 < param_4) {
    uVar15 = (longlong)param_4 - (longlong)param_2;
    if (7 < (longlong)uVar15) {
      uVar16 = uVar15 >> 3;
      uVar15 = uVar15 + uVar16 * -8;
      do {
        uVar2 = *(undefined8 *)(param_2 + uVar18);
        uVar3 = *(undefined8 *)puVar14;
        puVar14 = puVar14 + 8;
        *(ulonglong *)param_2 =
             CONCAT17((char)((ulonglong)uVar2 >> 0x38) + (char)((ulonglong)uVar3 >> 0x38),
                      CONCAT16((char)((ulonglong)uVar2 >> 0x30) + (char)((ulonglong)uVar3 >> 0x30),
                               CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                        (char)((ulonglong)uVar3 >> 0x28),
                                        CONCAT14((char)((ulonglong)uVar2 >> 0x20) +
                                                 (char)((ulonglong)uVar3 >> 0x20),
                                                 CONCAT13((char)((ulonglong)uVar2 >> 0x18) +
                                                          (char)((ulonglong)uVar3 >> 0x18),
                                                          CONCAT12((char)((ulonglong)uVar2 >> 0x10)
                                                                   + (char)((ulonglong)uVar3 >> 0x10
                                                                           ),
                                                                   CONCAT11((char)((ulonglong)uVar2
                                                                                  >> 8) +
                                                                            (char)((ulonglong)uVar3
                                                                                  >> 8),
                                                                            (char)uVar2 +
                                                                            (char)uVar3)))))));
        param_2 = param_2 + 8;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
    if (uVar15 != 0) {
      lVar23 = (longlong)puVar14 - (longlong)param_2;
      do {
        *param_2 = param_2[uVar18] + param_2[lVar23];
        param_2 = param_2 + 1;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
  }
  if (param_2 == param_4) {
    if (piVar21 == local_130) {
      if (puVar20 == puVar11) {
        return true;
      }
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto LAB_14f3bfe10;
      pcVar17 = "OODLE ERROR : corruption : excesses_ptr == excesses_end_ptr\n";
      iVar13 = 0x197;
    }
    else {
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto LAB_14f3bfe10;
      pcVar17 = "OODLE ERROR : corruption : offsets_ptr == offsets_end\n";
      iVar13 = 0x196;
    }
  }
  else {
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto LAB_14f3bfe10;
    pcVar17 = "OODLE ERROR : corruption : to_ptr == chunk_end\n";
    iVar13 = 0x18d;
  }
  (*g_fp_OodleCore_Plugin_Printf)
            (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_outer.inl",iVar13,pcVar17);
LAB_14f3bfe10:
  ooLogErrorPost();
  return false;
}

// newLZHC_decode_parse_multipacket_lamsub_sse4 @ 14f3bfe60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
oo2::newLZHC_decode_parse_multipacket_lamsub_sse4
          (newLZHC_chunk_arrays *param_1,uchar *param_2,uchar *param_3,uchar *param_4,uchar *param_5
          )

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  uchar uVar4;
  uint uVar5;
  uint uVar6;
  uchar *puVar7;
  uchar *puVar8;
  uchar *puVar9;
  uint *puVar10;
  uchar **ppuVar11;
  longlong lVar12;
  int iVar13;
  uchar *puVar14;
  ulonglong uVar15;
  longlong lVar16;
  char *pcVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint *puVar20;
  int *piVar21;
  byte *pbVar22;
  longlong lVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auStack_168 [40];
  uchar *local_140;
  uchar *local_138;
  uchar *local_130;
  int *local_128;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined1 local_e0 [16];
  uchar *local_c0 [4];
  uchar *local_a0;
  uchar *local_98;
  uchar *local_90;
  uchar *local_88;
  ulonglong local_80;
  
  local_80 = __security_cookie.value ^ (ulonglong)auStack_168;
  uVar18 = 0xfffffffffffffff8;
  piVar21 = param_1->offsets;
  puVar10 = param_1->excesses;
  local_128 = piVar21 + param_1->offsets_count;
  lVar23 = param_1->packets_count;
  iVar13 = (int)param_3;
  local_140 = param_1->literals_ptrs[1];
  local_e0 = ___xmm_00000000000000000706050403020100;
  local_c0[0] = param_1->packet_pos_ptrs[-iVar13 & 7];
  local_100 = ___xmm_fffffff8fffffff8fffffff8fffffff8;
  uStack_f8 = _UNK_1531db198;
  local_f0 = 0xfffffff8;
  local_ec = 0xfffffff8;
  local_e8 = 0xfffffff8;
  local_c0[1] = param_1->packet_pos_ptrs[1U - iVar13 & 7];
  local_c0[2] = param_1->packet_pos_ptrs[2U - iVar13 & 7];
  local_c0[3] = param_1->packet_pos_ptrs[3U - iVar13 & 7];
  local_a0 = param_1->packet_pos_ptrs[-iVar13 - 4U & 7];
  local_98 = param_1->packet_pos_ptrs[-iVar13 - 3U & 7];
  local_90 = param_1->packet_pos_ptrs[-iVar13 - 2U & 7];
  puVar14 = param_1->literals_ptrs[0];
  local_88 = param_1->packet_pos_ptrs[-iVar13 - 1U & 7];
  puVar20 = puVar10 + param_1->excesses_count;
  if (0xf < (longlong)param_4 - (longlong)param_3) {
    param_3 = param_4 + -0x10;
  }
  uVar5 = (uint)param_2 & 7;
  pbVar22 = local_c0[uVar5];
  ppuVar11 = local_c0 + uVar5;
  lVar19 = lVar23 - ((longlong)param_3 - (longlong)param_2 >> 6);
  if (lVar19 < 1) {
    lVar19 = 0;
  }
  puVar9 = param_2;
  local_138 = param_3;
  local_130 = param_4;
  if (lVar19 < lVar23) {
    do {
      bVar3 = *pbVar22;
      *ppuVar11 = pbVar22 + 1;
      lVar23 = lVar23 + -1;
      lVar12 = (ulonglong)(bVar3 & 7) + 2;
      *(int *)((longlong)&local_100 + (longlong)(int)(uint)local_e0[7] * 4) = *piVar21;
      if ((bVar3 & 0x18) != 0) {
        uVar5 = *puVar10;
        uVar15 = (ulonglong)((bVar3 & 0x18) >> 3);
        if (uVar15 == 3) {
          puVar10 = puVar10 + 1;
          uVar15 = (ulonglong)uVar5;
        }
        lVar16 = uVar15 - 1;
        if (lVar16 < 0) goto LAB_14f3c042e;
        uVar4 = *local_140;
        local_140 = local_140 + 1;
        *puVar9 = uVar4 + puVar9[uVar18];
        puVar8 = puVar9 + 1;
        uVar1 = *(undefined8 *)puVar14;
        uVar2 = *(undefined8 *)(puVar8 + uVar18);
        *(ulonglong *)puVar8 =
             CONCAT17((char)((ulonglong)uVar2 >> 0x38) + (char)((ulonglong)uVar1 >> 0x38),
                      CONCAT16((char)((ulonglong)uVar2 >> 0x30) + (char)((ulonglong)uVar1 >> 0x30),
                               CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                        (char)((ulonglong)uVar1 >> 0x28),
                                        CONCAT14((char)((ulonglong)uVar2 >> 0x20) +
                                                 (char)((ulonglong)uVar1 >> 0x20),
                                                 CONCAT13((char)((ulonglong)uVar2 >> 0x18) +
                                                          (char)((ulonglong)uVar1 >> 0x18),
                                                          CONCAT12((char)((ulonglong)uVar2 >> 0x10)
                                                                   + (char)((ulonglong)uVar1 >> 0x10
                                                                           ),
                                                                   CONCAT11((char)((ulonglong)uVar2
                                                                                  >> 8) +
                                                                            (char)((ulonglong)uVar1
                                                                                  >> 8),
                                                                            (char)uVar2 +
                                                                            (char)uVar1)))))));
        if (8 < lVar16) {
          uVar1 = *(undefined8 *)(puVar9 + uVar18 + 9);
          uVar2 = *(undefined8 *)(puVar14 + 8);
          *(ulonglong *)(puVar9 + 9) =
               CONCAT17((char)((ulonglong)uVar1 >> 0x38) + (char)((ulonglong)uVar2 >> 0x38),
                        CONCAT16((char)((ulonglong)uVar1 >> 0x30) + (char)((ulonglong)uVar2 >> 0x30)
                                 ,CONCAT15((char)((ulonglong)uVar1 >> 0x28) +
                                           (char)((ulonglong)uVar2 >> 0x28),
                                           CONCAT14((char)((ulonglong)uVar1 >> 0x20) +
                                                    (char)((ulonglong)uVar2 >> 0x20),
                                                    CONCAT13((char)((ulonglong)uVar1 >> 0x18) +
                                                             (char)((ulonglong)uVar2 >> 0x18),
                                                             CONCAT12((char)((ulonglong)uVar1 >>
                                                                            0x10) +
                                                                      (char)((ulonglong)uVar2 >>
                                                                            0x10),
                                                                      CONCAT11((char)((ulonglong)
                                                                                      uVar1 >> 8) +
                                                                               (char)((ulonglong)
                                                                                      uVar2 >> 8),
                                                                               (char)uVar1 +
                                                                               (char)uVar2)))))));
          if (0x10 < lVar16) {
            uVar1 = *(undefined8 *)(puVar9 + uVar18 + 0x11);
            uVar2 = *(undefined8 *)(puVar14 + 0x10);
            *(ulonglong *)(puVar9 + 0x11) =
                 CONCAT17((char)((ulonglong)uVar1 >> 0x38) + (char)((ulonglong)uVar2 >> 0x38),
                          CONCAT16((char)((ulonglong)uVar1 >> 0x30) +
                                   (char)((ulonglong)uVar2 >> 0x30),
                                   CONCAT15((char)((ulonglong)uVar1 >> 0x28) +
                                            (char)((ulonglong)uVar2 >> 0x28),
                                            CONCAT14((char)((ulonglong)uVar1 >> 0x20) +
                                                     (char)((ulonglong)uVar2 >> 0x20),
                                                     CONCAT13((char)((ulonglong)uVar1 >> 0x18) +
                                                              (char)((ulonglong)uVar2 >> 0x18),
                                                              CONCAT12((char)((ulonglong)uVar1 >>
                                                                             0x10) +
                                                                       (char)((ulonglong)uVar2 >>
                                                                             0x10),
                                                                       CONCAT11((char)((ulonglong)
                                                                                       uVar1 >> 8) +
                                                                                (char)((ulonglong)
                                                                                       uVar2 >> 8),
                                                                                (char)uVar1 +
                                                                                (char)uVar2)))))));
            if (0x17 < lVar16) {
              if ((longlong)param_3 - (longlong)puVar8 < lVar16) {
                ooLogErrorPre();
                if (g_fp_OodleCore_Plugin_Printf !=
                    (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
                  (*g_fp_OodleCore_Plugin_Printf)
                            (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",
                             0x292,"OODLE ERROR : corruption : (match_zone_end - to_ptr) >= (lrl)\n"
                            );
                  ooLogErrorPost();
                  return false;
                }
                goto LAB_14f3c07d0;
              }
              lVar19 = lVar23 - (((longlong)param_3 - (longlong)puVar8) - lVar16 >> 6);
              if (lVar19 < 1) {
                lVar19 = 0;
              }
              puVar8 = puVar9 + 0x19;
              puVar14 = puVar14 + 0x18;
              lVar16 = uVar15 - 0x19;
              do {
                uVar1 = *(undefined8 *)(puVar8 + uVar18);
                lVar16 = lVar16 + -8;
                uVar2 = *(undefined8 *)puVar14;
                puVar14 = puVar14 + 8;
                *(ulonglong *)puVar8 =
                     CONCAT17((char)((ulonglong)uVar1 >> 0x38) + (char)((ulonglong)uVar2 >> 0x38),
                              CONCAT16((char)((ulonglong)uVar1 >> 0x30) +
                                       (char)((ulonglong)uVar2 >> 0x30),
                                       CONCAT15((char)((ulonglong)uVar1 >> 0x28) +
                                                (char)((ulonglong)uVar2 >> 0x28),
                                                CONCAT14((char)((ulonglong)uVar1 >> 0x20) +
                                                         (char)((ulonglong)uVar2 >> 0x20),
                                                         CONCAT13((char)((ulonglong)uVar1 >> 0x18) +
                                                                  (char)((ulonglong)uVar2 >> 0x18),
                                                                  CONCAT12((char)((ulonglong)uVar1
                                                                                 >> 0x10) +
                                                                           (char)((ulonglong)uVar2
                                                                                 >> 0x10),
                                                                           CONCAT11((char)((
                                                  ulonglong)uVar1 >> 8) +
                                                  (char)((ulonglong)uVar2 >> 8),
                                                  (char)uVar1 + (char)uVar2)))))));
                puVar8 = puVar8 + 8;
              } while (0 < lVar16);
            }
          }
        }
        puVar9 = puVar8 + lVar16;
        puVar14 = puVar14 + lVar16;
      }
      auVar24._8_8_ = 0;
      auVar24._0_8_ = c_lo_shuffles[bVar3 >> 5];
      local_e0 = pshufb(local_e0,auVar24);
      uVar18 = (ulonglong)*(int *)((longlong)&local_100 + (ulonglong)local_e0[0] * 4);
      lVar16 = 0;
      if ((ulonglong)(bVar3 >> 5) == 7) {
        lVar16 = 4;
      }
      piVar21 = (int *)((longlong)piVar21 + lVar16);
      if (uVar18 < (ulonglong)((longlong)param_5 - (longlong)puVar9)) goto LAB_14f3c04ee;
      puVar8 = puVar9 + uVar18;
      if (lVar12 == 9) {
        if (puVar20 <= puVar10) goto LAB_14f3c04ae;
        uVar5 = puVar20[-1] + 6;
        puVar20 = puVar20 + -1;
        param_2 = puVar9 + uVar5;
        *(undefined8 *)puVar9 = *(undefined8 *)puVar8;
        *(undefined8 *)(puVar9 + 8) = *(undefined8 *)(puVar8 + 8);
        uVar6 = (uint)param_2 & 7;
        pbVar22 = local_c0[uVar6];
        ppuVar11 = local_c0 + uVar6;
        if ((uchar *)0x10 < (uchar *)(ulonglong)uVar5) {
          if (param_4 + (-8 - (longlong)puVar9) < (uchar *)(ulonglong)uVar5) goto LAB_14f3c046e;
          puVar7 = puVar8 + 0x18;
          *(undefined8 *)(puVar9 + 0x10) = *(undefined8 *)(puVar8 + 0x10);
          for (puVar9 = puVar9 + 0x18; puVar9 < param_2; puVar9 = puVar9 + 8) {
            uVar1 = *(undefined8 *)puVar7;
            puVar7 = puVar7 + 8;
            *(undefined8 *)puVar9 = uVar1;
          }
          lVar19 = lVar23 - ((longlong)param_3 - (longlong)param_2 >> 6);
          if (lVar19 < 1) {
            lVar19 = 0;
          }
        }
      }
      else {
        *(undefined8 *)puVar9 = *(undefined8 *)puVar8;
        param_2 = puVar9 + lVar12;
        uVar5 = (uint)param_2 & 7;
        pbVar22 = local_c0[uVar5];
        ppuVar11 = local_c0 + uVar5;
      }
      puVar9 = param_2;
    } while (lVar19 < lVar23);
  }
  uVar5 = (uint)param_2 & 7;
  pbVar22 = local_c0[uVar5];
  ppuVar11 = local_c0 + uVar5;
  while (puVar9 = param_2, 0 < lVar23) {
    bVar3 = *pbVar22;
    *ppuVar11 = pbVar22 + 1;
    lVar23 = lVar23 + -1;
    lVar19 = (ulonglong)(bVar3 & 7) + 2;
    *(int *)((longlong)&local_100 + (longlong)(int)(uint)local_e0[7] * 4) = *piVar21;
    if ((bVar3 & 0x18) == 0) {
      if ((longlong)param_3 - (longlong)puVar9 < 0) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          (*g_fp_OodleCore_Plugin_Printf)
                    (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",699,
                     "OODLE ERROR : corruption : (match_zone_end - to_ptr) >= 0\n");
          ooLogErrorPost();
          return false;
        }
        goto LAB_14f3c07d0;
      }
    }
    else {
      uVar5 = *puVar10;
      uVar15 = (ulonglong)((bVar3 & 0x18) >> 3);
      if (uVar15 == 3) {
        puVar10 = puVar10 + 1;
        uVar15 = (ulonglong)uVar5;
      }
      if ((longlong)param_3 - (longlong)puVar9 < (longlong)uVar15) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          (*g_fp_OodleCore_Plugin_Printf)
                    (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x253,
                     "OODLE ERROR : corruption : (match_zone_end - to_ptr) >= lrl\n");
          ooLogErrorPost();
          return false;
        }
        goto LAB_14f3c07d0;
      }
      lVar12 = uVar15 - 1;
      if (lVar12 < 0) goto LAB_14f3c042e;
      uVar4 = *local_140;
      local_140 = local_140 + 1;
      *puVar9 = uVar4 + puVar9[uVar18];
      puVar8 = puVar9 + 1;
      uVar1 = *(undefined8 *)puVar14;
      uVar2 = *(undefined8 *)(puVar8 + uVar18);
      *(ulonglong *)puVar8 =
           CONCAT17((char)((ulonglong)uVar2 >> 0x38) + (char)((ulonglong)uVar1 >> 0x38),
                    CONCAT16((char)((ulonglong)uVar2 >> 0x30) + (char)((ulonglong)uVar1 >> 0x30),
                             CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                      (char)((ulonglong)uVar1 >> 0x28),
                                      CONCAT14((char)((ulonglong)uVar2 >> 0x20) +
                                               (char)((ulonglong)uVar1 >> 0x20),
                                               CONCAT13((char)((ulonglong)uVar2 >> 0x18) +
                                                        (char)((ulonglong)uVar1 >> 0x18),
                                                        CONCAT12((char)((ulonglong)uVar2 >> 0x10) +
                                                                 (char)((ulonglong)uVar1 >> 0x10),
                                                                 CONCAT11((char)((ulonglong)uVar2 >>
                                                                                8) +
                                                                          (char)((ulonglong)uVar1 >>
                                                                                8),(char)uVar2 +
                                                                                   (char)uVar1))))))
                   );
      if (8 < lVar12) {
        uVar1 = *(undefined8 *)(puVar9 + uVar18 + 9);
        uVar2 = *(undefined8 *)(puVar14 + 8);
        *(ulonglong *)(puVar9 + 9) =
             CONCAT17((char)((ulonglong)uVar1 >> 0x38) + (char)((ulonglong)uVar2 >> 0x38),
                      CONCAT16((char)((ulonglong)uVar1 >> 0x30) + (char)((ulonglong)uVar2 >> 0x30),
                               CONCAT15((char)((ulonglong)uVar1 >> 0x28) +
                                        (char)((ulonglong)uVar2 >> 0x28),
                                        CONCAT14((char)((ulonglong)uVar1 >> 0x20) +
                                                 (char)((ulonglong)uVar2 >> 0x20),
                                                 CONCAT13((char)((ulonglong)uVar1 >> 0x18) +
                                                          (char)((ulonglong)uVar2 >> 0x18),
                                                          CONCAT12((char)((ulonglong)uVar1 >> 0x10)
                                                                   + (char)((ulonglong)uVar2 >> 0x10
                                                                           ),
                                                                   CONCAT11((char)((ulonglong)uVar1
                                                                                  >> 8) +
                                                                            (char)((ulonglong)uVar2
                                                                                  >> 8),
                                                                            (char)uVar1 +
                                                                            (char)uVar2)))))));
        if (0x10 < lVar12) {
          uVar1 = *(undefined8 *)(puVar9 + uVar18 + 0x11);
          uVar2 = *(undefined8 *)(puVar14 + 0x10);
          *(ulonglong *)(puVar9 + 0x11) =
               CONCAT17((char)((ulonglong)uVar1 >> 0x38) + (char)((ulonglong)uVar2 >> 0x38),
                        CONCAT16((char)((ulonglong)uVar1 >> 0x30) + (char)((ulonglong)uVar2 >> 0x30)
                                 ,CONCAT15((char)((ulonglong)uVar1 >> 0x28) +
                                           (char)((ulonglong)uVar2 >> 0x28),
                                           CONCAT14((char)((ulonglong)uVar1 >> 0x20) +
                                                    (char)((ulonglong)uVar2 >> 0x20),
                                                    CONCAT13((char)((ulonglong)uVar1 >> 0x18) +
                                                             (char)((ulonglong)uVar2 >> 0x18),
                                                             CONCAT12((char)((ulonglong)uVar1 >>
                                                                            0x10) +
                                                                      (char)((ulonglong)uVar2 >>
                                                                            0x10),
                                                                      CONCAT11((char)((ulonglong)
                                                                                      uVar1 >> 8) +
                                                                               (char)((ulonglong)
                                                                                      uVar2 >> 8),
                                                                               (char)uVar1 +
                                                                               (char)uVar2)))))));
          if (0x17 < lVar12) {
            puVar8 = puVar9 + 0x19;
            puVar14 = puVar14 + 0x18;
            lVar12 = uVar15 - 0x19;
            do {
              uVar1 = *(undefined8 *)(puVar8 + uVar18);
              lVar12 = lVar12 + -8;
              uVar2 = *(undefined8 *)puVar14;
              puVar14 = puVar14 + 8;
              *(ulonglong *)puVar8 =
                   CONCAT17((char)((ulonglong)uVar1 >> 0x38) + (char)((ulonglong)uVar2 >> 0x38),
                            CONCAT16((char)((ulonglong)uVar1 >> 0x30) +
                                     (char)((ulonglong)uVar2 >> 0x30),
                                     CONCAT15((char)((ulonglong)uVar1 >> 0x28) +
                                              (char)((ulonglong)uVar2 >> 0x28),
                                              CONCAT14((char)((ulonglong)uVar1 >> 0x20) +
                                                       (char)((ulonglong)uVar2 >> 0x20),
                                                       CONCAT13((char)((ulonglong)uVar1 >> 0x18) +
                                                                (char)((ulonglong)uVar2 >> 0x18),
                                                                CONCAT12((char)((ulonglong)uVar1 >>
                                                                               0x10) +
                                                                         (char)((ulonglong)uVar2 >>
                                                                               0x10),
                                                                         CONCAT11((char)((ulonglong)
                                                                                         uVar1 >> 8)
                                                                                  + (char)((
                                                  ulonglong)uVar2 >> 8),(char)uVar1 + (char)uVar2)))
                                                  ))));
              puVar8 = puVar8 + 8;
            } while (0 < lVar12);
          }
        }
      }
      puVar9 = puVar8 + lVar12;
      puVar14 = puVar14 + lVar12;
    }
    auVar25._8_8_ = 0;
    auVar25._0_8_ = c_lo_shuffles[bVar3 >> 5];
    local_e0 = pshufb(local_e0,auVar25);
    uVar18 = (ulonglong)*(int *)((longlong)&local_100 + (ulonglong)local_e0[0] * 4);
    lVar12 = 0;
    if ((ulonglong)(bVar3 >> 5) == 7) {
      lVar12 = 4;
    }
    piVar21 = (int *)((longlong)piVar21 + lVar12);
    if (uVar18 < (ulonglong)((longlong)param_5 - (longlong)puVar9)) goto LAB_14f3c04ee;
    puVar8 = puVar9 + uVar18;
    if (lVar19 == 9) {
      if (puVar20 <= puVar10) goto LAB_14f3c04ae;
      uVar5 = puVar20[-1] + 6;
      puVar20 = puVar20 + -1;
      param_2 = puVar9 + uVar5;
      *(undefined8 *)puVar9 = *(undefined8 *)puVar8;
      *(undefined8 *)(puVar9 + 8) = *(undefined8 *)(puVar8 + 8);
      uVar6 = (uint)param_2 & 7;
      pbVar22 = local_c0[uVar6];
      ppuVar11 = local_c0 + uVar6;
      if ((uchar *)0x10 < (uchar *)(ulonglong)uVar5) {
        if (param_4 + (-8 - (longlong)puVar9) < (uchar *)(ulonglong)uVar5) goto LAB_14f3c046e;
        puVar7 = puVar8 + 0x18;
        *(undefined8 *)(puVar9 + 0x10) = *(undefined8 *)(puVar8 + 0x10);
        for (puVar9 = puVar9 + 0x18; puVar9 < param_2; puVar9 = puVar9 + 8) {
          uVar1 = *(undefined8 *)puVar7;
          puVar7 = puVar7 + 8;
          *(undefined8 *)puVar9 = uVar1;
        }
      }
    }
    else {
      *(undefined8 *)puVar9 = *(undefined8 *)puVar8;
      uVar5 = (uint)(puVar9 + lVar19) & 7;
      pbVar22 = local_c0[uVar5];
      ppuVar11 = local_c0 + uVar5;
      param_2 = puVar9 + lVar19;
    }
  }
  if (puVar9 < param_4) {
    *puVar9 = puVar9[uVar18] + *local_140;
    puVar8 = param_4 + (-1 - (longlong)puVar9);
    puVar9 = puVar9 + 1;
    if (7 < (longlong)puVar8) {
      uVar15 = (ulonglong)puVar8 >> 3;
      puVar8 = puVar8 + uVar15 * -8;
      do {
        uVar1 = *(undefined8 *)(puVar9 + uVar18);
        uVar2 = *(undefined8 *)puVar14;
        puVar14 = puVar14 + 8;
        *(ulonglong *)puVar9 =
             CONCAT17((char)((ulonglong)uVar1 >> 0x38) + (char)((ulonglong)uVar2 >> 0x38),
                      CONCAT16((char)((ulonglong)uVar1 >> 0x30) + (char)((ulonglong)uVar2 >> 0x30),
                               CONCAT15((char)((ulonglong)uVar1 >> 0x28) +
                                        (char)((ulonglong)uVar2 >> 0x28),
                                        CONCAT14((char)((ulonglong)uVar1 >> 0x20) +
                                                 (char)((ulonglong)uVar2 >> 0x20),
                                                 CONCAT13((char)((ulonglong)uVar1 >> 0x18) +
                                                          (char)((ulonglong)uVar2 >> 0x18),
                                                          CONCAT12((char)((ulonglong)uVar1 >> 0x10)
                                                                   + (char)((ulonglong)uVar2 >> 0x10
                                                                           ),
                                                                   CONCAT11((char)((ulonglong)uVar1
                                                                                  >> 8) +
                                                                            (char)((ulonglong)uVar2
                                                                                  >> 8),
                                                                            (char)uVar1 +
                                                                            (char)uVar2)))))));
        puVar9 = puVar9 + 8;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    if (puVar8 != (uchar *)0x0) {
      lVar23 = (longlong)puVar14 - (longlong)puVar9;
      do {
        *puVar9 = puVar9[uVar18] + puVar9[lVar23];
        puVar9 = puVar9 + 1;
        puVar8 = puVar8 + -1;
      } while (puVar8 != (uchar *)0x0);
    }
  }
  if (puVar9 == param_4) {
    if (piVar21 == local_128) {
      if (puVar10 == puVar20) {
        return true;
      }
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto LAB_14f3c07d0;
      pcVar17 = "OODLE ERROR : corruption : excesses_ptr == excesses_end_ptr\n";
      iVar13 = 0x197;
    }
    else {
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto LAB_14f3c07d0;
      pcVar17 = "OODLE ERROR : corruption : offsets_ptr == offsets_end\n";
      iVar13 = 0x196;
    }
  }
  else {
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto LAB_14f3c07d0;
    pcVar17 = "OODLE ERROR : corruption : to_ptr == chunk_end\n";
    iVar13 = 0x18d;
  }
  (*g_fp_OodleCore_Plugin_Printf)
            (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_outer.inl",iVar13,pcVar17);
LAB_14f3c07d0:
  ooLogErrorPost();
  return false;
LAB_14f3c042e:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x264,
               "OODLE ERROR : corruption : lrl >= 0\n");
    ooLogErrorPost();
    return false;
  }
  goto LAB_14f3c07d0;
LAB_14f3c04ee:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x2e2,
               "OODLE ERROR : corruption : (UINTa)neg_offset >= (UINTa) (window_base - to_ptr)\n");
    ooLogErrorPost();
    return false;
  }
  goto LAB_14f3c07d0;
LAB_14f3c04ae:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x304,
               "OODLE ERROR : corruption : excesses_end_ptr > excesses_ptr\n");
    ooLogErrorPost();
    return false;
  }
  goto LAB_14f3c07d0;
LAB_14f3c046e:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x322,
               "OODLE ERROR : corruption : (UINTa)(match_end - to_ptr) >= ml\n");
    ooLogErrorPost();
    return false;
  }
  goto LAB_14f3c07d0;
}

// newLZHC_decode_parse_multipacket_suband3_sse4 @ 14f3c0820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
oo2::newLZHC_decode_parse_multipacket_suband3_sse4
          (newLZHC_chunk_arrays *param_1,uchar *param_2,uchar *param_3,uchar *param_4,uchar *param_5
          )

{
  undefined8 uVar1;
  byte bVar2;
  uchar uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  uchar *puVar21;
  ulonglong uVar22;
  uchar *puVar23;
  longlong lVar24;
  byte *pbVar25;
  longlong lVar26;
  uchar *puVar27;
  ulonglong uVar28;
  char *pcVar29;
  uchar *puVar30;
  uchar **ppuVar31;
  uchar *puVar32;
  uint *puVar33;
  uchar *puVar34;
  longlong lVar35;
  uint *puVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auStack_188 [72];
  uchar *local_140;
  uchar *local_138;
  int *local_130;
  uint *local_128;
  uchar *local_120;
  int *local_118;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined1 local_e0 [16];
  int local_c0 [4];
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  uchar *local_a0 [4];
  uchar *local_80;
  uchar *local_78;
  uchar *local_70;
  uchar *local_68;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStack_188;
  local_130 = param_1->offsets;
  puVar33 = param_1->excesses;
  lVar35 = param_1->packets_count;
  local_140 = param_1->literals_ptrs[0];
  local_118 = local_130 + param_1->offsets_count;
  uVar17 = (uint)param_3;
  local_a0[0] = param_1->packet_pos_ptrs[-uVar17 & 7];
  local_a0[1] = param_1->packet_pos_ptrs[1 - uVar17 & 7];
  local_a0[2] = param_1->packet_pos_ptrs[2 - uVar17 & 7];
  local_a0[3] = param_1->packet_pos_ptrs[3 - uVar17 & 7];
  local_80 = param_1->packet_pos_ptrs[-uVar17 - 4 & 7];
  local_78 = param_1->packet_pos_ptrs[-uVar17 - 3 & 7];
  local_70 = param_1->packet_pos_ptrs[-uVar17 - 2 & 7];
  local_68 = param_1->packet_pos_ptrs[-uVar17 - 1 & 7];
  puVar36 = puVar33 + param_1->excesses_count;
  iVar16 = (int)local_140;
  iVar13 = *(int *)(param_1->literals_ptrs + (-uVar17 & 3)) - iVar16;
  local_c0[0] = iVar13;
  iVar14 = *(int *)(param_1->literals_ptrs + (1 - uVar17 & 3)) - iVar16;
  local_c0[1] = iVar14;
  iVar15 = *(int *)(param_1->literals_ptrs + (-uVar17 - 2 & 3)) - iVar16;
  local_c0[2] = iVar15;
  iVar16 = *(int *)(param_1->literals_ptrs + (~uVar17 & 3)) - iVar16;
  uVar28 = 0xfffffffffffffff8;
  local_c0[3] = iVar16;
  local_b0 = iVar13;
  iStack_ac = iVar14;
  iStack_a8 = iVar15;
  iStack_a4 = iVar16;
  local_e0 = ___xmm_00000000000000000706050403020100;
  local_100 = ___xmm_fffffff8fffffff8fffffff8fffffff8;
  uStack_f8 = _UNK_1531db198;
  local_f0 = 0xfffffff8;
  local_ec = 0xfffffff8;
  local_e8 = 0xfffffff8;
  if (0xf < (longlong)param_4 - (longlong)param_3) {
    param_3 = param_4 + -0x10;
  }
  uVar17 = (uint)param_2 & 7;
  pbVar25 = local_a0[uVar17];
  ppuVar31 = local_a0 + uVar17;
  lVar24 = lVar35 - ((longlong)param_3 - (longlong)param_2 >> 6);
  if (lVar24 < 1) {
    lVar24 = 0;
  }
  local_128 = puVar33;
  local_138 = param_3;
  local_120 = param_4;
  if (lVar24 < lVar35) {
    do {
      bVar2 = *pbVar25;
      *ppuVar31 = pbVar25 + 1;
      lVar35 = lVar35 + -1;
      lVar26 = (ulonglong)(bVar2 & 7) + 2;
      *(int *)((longlong)&local_100 + (longlong)(int)(uint)local_e0[7] * 4) = *local_130;
      uVar22 = (ulonglong)((uint)param_2 & 3);
      puVar32 = local_140 + local_c0[uVar22];
      puVar30 = local_140 + local_c0[uVar22 + 1];
      if ((bVar2 & 0x18) == 0x18) {
        uVar17 = *puVar33;
        uVar19 = (ulonglong)uVar17;
        puVar33 = puVar33 + 1;
        puVar34 = local_140 + local_c0[uVar22 + 2];
        puVar27 = local_140 + local_c0[uVar22 + 3];
        uVar4 = *(undefined4 *)puVar32;
        uVar5 = *(undefined4 *)puVar34;
        iVar13 = (uVar17 + v_advance_tab[uVar22][0] >> 2) + iVar13;
        iVar14 = (uVar17 + v_advance_tab[uVar22][1] >> 2) + iVar14;
        iVar15 = (uVar17 + v_advance_tab[uVar22][2] >> 2) + iVar15;
        iVar16 = (uVar17 + v_advance_tab[uVar22][3] >> 2) + iVar16;
        local_c0[0] = iVar13;
        local_c0[1] = iVar14;
        local_c0[2] = iVar15;
        local_c0[3] = iVar16;
        local_b0 = iVar13;
        iStack_ac = iVar14;
        iStack_a8 = iVar15;
        iStack_a4 = iVar16;
        uVar6 = *(undefined4 *)puVar30;
        uVar7 = *(undefined4 *)puVar27;
        uVar1 = *(undefined8 *)(param_2 + uVar28);
        *(ulonglong *)param_2 =
             CONCAT17((char)((ulonglong)uVar1 >> 0x38) + (char)((uint)uVar7 >> 8),
                      CONCAT16((char)((ulonglong)uVar1 >> 0x30) + (char)((uint)uVar5 >> 8),
                               CONCAT15((char)((ulonglong)uVar1 >> 0x28) + (char)((uint)uVar6 >> 8),
                                        CONCAT14((char)((ulonglong)uVar1 >> 0x20) +
                                                 (char)((uint)uVar4 >> 8),
                                                 CONCAT13((char)((ulonglong)uVar1 >> 0x18) +
                                                          (char)uVar7,
                                                          CONCAT12((char)((ulonglong)uVar1 >> 0x10)
                                                                   + (char)uVar5,
                                                                   CONCAT11((char)((ulonglong)uVar1
                                                                                  >> 8) +
                                                                            (char)uVar6,
                                                                            (char)uVar1 +
                                                                            (char)uVar4)))))));
        local_128 = puVar33;
        if (8 < uVar19) {
          uVar1 = *(undefined8 *)(param_2 + uVar28 + 8);
          *(ulonglong *)(param_2 + 8) =
               CONCAT17((char)((ulonglong)uVar1 >> 0x38) + (char)((uint)uVar7 >> 0x18),
                        CONCAT16((char)((ulonglong)uVar1 >> 0x30) + (char)((uint)uVar5 >> 0x18),
                                 CONCAT15((char)((ulonglong)uVar1 >> 0x28) +
                                          (char)((uint)uVar6 >> 0x18),
                                          CONCAT14((char)((ulonglong)uVar1 >> 0x20) +
                                                   (char)((uint)uVar4 >> 0x18),
                                                   CONCAT13((char)((ulonglong)uVar1 >> 0x18) +
                                                            (char)((uint)uVar7 >> 0x10),
                                                            CONCAT12((char)((ulonglong)uVar1 >> 0x10
                                                                           ) + (char)((uint)uVar5 >>
                                                                                     0x10),
                                                                     CONCAT11((char)((ulonglong)
                                                                                     uVar1 >> 8) +
                                                                              (char)((uint)uVar6 >>
                                                                                    0x10),
                                                                              (char)uVar1 +
                                                                              (char)((uint)uVar4 >>
                                                                                    0x10))))))));
          if (0x10 < uVar17) {
            uVar4 = *(undefined4 *)(puVar30 + 4);
            uVar5 = *(undefined4 *)(puVar32 + 4);
            uVar6 = *(undefined4 *)(puVar34 + 4);
            uVar7 = *(undefined4 *)(puVar27 + 4);
            uVar1 = *(undefined8 *)(param_2 + uVar28 + 0x10);
            *(ulonglong *)(param_2 + 0x10) =
                 CONCAT17((char)((ulonglong)uVar1 >> 0x38) + (char)((uint)uVar7 >> 8),
                          CONCAT16((char)((ulonglong)uVar1 >> 0x30) + (char)((uint)uVar6 >> 8),
                                   CONCAT15((char)((ulonglong)uVar1 >> 0x28) +
                                            (char)((uint)uVar4 >> 8),
                                            CONCAT14((char)((ulonglong)uVar1 >> 0x20) +
                                                     (char)((uint)uVar5 >> 8),
                                                     CONCAT13((char)((ulonglong)uVar1 >> 0x18) +
                                                              (char)uVar7,
                                                              CONCAT12((char)((ulonglong)uVar1 >>
                                                                             0x10) + (char)uVar6,
                                                                       CONCAT11((char)((ulonglong)
                                                                                       uVar1 >> 8) +
                                                                                (char)uVar4,
                                                                                (char)uVar1 +
                                                                                (char)uVar5)))))));
            if (0x18 < uVar17) {
              if ((longlong)param_3 - (longlong)param_2 < (longlong)uVar19) {
                ooLogErrorPre();
                if (g_fp_OodleCore_Plugin_Printf !=
                    (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
                  (*g_fp_OodleCore_Plugin_Printf)
                            (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",
                             0x1e0,"OODLE ERROR : corruption : (match_zone_end - to_ptr) >= (lrl)\n"
                            );
                  ooLogErrorPost();
                  return false;
                }
                goto LAB_14f3c1562;
              }
              uVar1 = *(undefined8 *)(param_2 + uVar28 + 0x18);
              lVar24 = lVar35 - ((longlong)(((longlong)param_3 - (longlong)param_2) - uVar19) >> 6);
              if (lVar24 < 1) {
                lVar24 = 0;
              }
              *(ulonglong *)(param_2 + 0x18) =
                   CONCAT17((char)((ulonglong)uVar1 >> 0x38) + (char)((uint)uVar7 >> 0x18),
                            CONCAT16((char)((ulonglong)uVar1 >> 0x30) + (char)((uint)uVar6 >> 0x18),
                                     CONCAT15((char)((ulonglong)uVar1 >> 0x28) +
                                              (char)((uint)uVar4 >> 0x18),
                                              CONCAT14((char)((ulonglong)uVar1 >> 0x20) +
                                                       (char)((uint)uVar5 >> 0x18),
                                                       CONCAT13((char)((ulonglong)uVar1 >> 0x18) +
                                                                (char)((uint)uVar7 >> 0x10),
                                                                CONCAT12((char)((ulonglong)uVar1 >>
                                                                               0x10) +
                                                                         (char)((uint)uVar6 >> 0x10)
                                                                         ,CONCAT11((char)((ulonglong
                                                                                          )uVar1 >>
                                                                                         8) +
                                                                                   (char)((uint)
                                                  uVar4 >> 0x10),
                                                  (char)uVar1 + (char)((uint)uVar5 >> 0x10))))))));
              param_2 = param_2 + 0x20;
              uVar19 = uVar19 - 0x20;
              if (0 < (longlong)uVar19) {
                puVar27 = puVar27 + 6;
                puVar21 = param_2 + uVar28;
                puVar30 = puVar30 + 6;
                puVar34 = puVar34 + 6;
                puVar32 = puVar32 + 6;
                uVar28 = uVar19;
                puVar23 = param_2;
                do {
                  uVar4 = *(undefined4 *)(puVar30 + 2);
                  uVar19 = uVar28 - 8;
                  uVar5 = *(undefined4 *)(puVar32 + 2);
                  uVar6 = *(undefined4 *)(puVar34 + 2);
                  uVar7 = *(undefined4 *)(puVar27 + 2);
                  uVar1 = *(undefined8 *)puVar21;
                  *(ulonglong *)puVar23 =
                       CONCAT17((char)((ulonglong)uVar1 >> 0x38) + (char)((uint)uVar7 >> 8),
                                CONCAT16((char)((ulonglong)uVar1 >> 0x30) + (char)((uint)uVar6 >> 8)
                                         ,CONCAT15((char)((ulonglong)uVar1 >> 0x28) +
                                                   (char)((uint)uVar4 >> 8),
                                                   CONCAT14((char)((ulonglong)uVar1 >> 0x20) +
                                                            (char)((uint)uVar5 >> 8),
                                                            CONCAT13((char)((ulonglong)uVar1 >> 0x18
                                                                           ) + (char)uVar7,
                                                                     CONCAT12((char)((ulonglong)
                                                                                     uVar1 >> 0x10)
                                                                              + (char)uVar6,
                                                                              CONCAT11((char)((
                                                  ulonglong)uVar1 >> 8) + (char)uVar4,
                                                  (char)uVar1 + (char)uVar5)))))));
                  param_2 = puVar23 + 8;
                  if ((longlong)uVar19 < 1) break;
                  uVar1 = *(undefined8 *)(puVar21 + 8);
                  puVar32 = puVar32 + 4;
                  puVar30 = puVar30 + 4;
                  puVar34 = puVar34 + 4;
                  *(ulonglong *)param_2 =
                       CONCAT17((char)((ulonglong)uVar1 >> 0x38) + (char)((uint)uVar7 >> 0x18),
                                CONCAT16((char)((ulonglong)uVar1 >> 0x30) +
                                         (char)((uint)uVar6 >> 0x18),
                                         CONCAT15((char)((ulonglong)uVar1 >> 0x28) +
                                                  (char)((uint)uVar4 >> 0x18),
                                                  CONCAT14((char)((ulonglong)uVar1 >> 0x20) +
                                                           (char)((uint)uVar5 >> 0x18),
                                                           CONCAT13((char)((ulonglong)uVar1 >> 0x18)
                                                                    + (char)((uint)uVar7 >> 0x10),
                                                                    CONCAT12((char)((ulonglong)uVar1
                                                                                   >> 0x10) +
                                                                             (char)((uint)uVar6 >>
                                                                                   0x10),
                                                                             CONCAT11((char)((
                                                  ulonglong)uVar1 >> 8) +
                                                  (char)((uint)uVar4 >> 0x10),
                                                  (char)uVar1 + (char)((uint)uVar5 >> 0x10))))))));
                  puVar27 = puVar27 + 4;
                  param_2 = puVar23 + 0x10;
                  puVar21 = puVar21 + 0x10;
                  uVar19 = uVar28 - 0x10;
                  uVar28 = uVar19;
                  puVar23 = param_2;
                } while (0 < (longlong)uVar19);
              }
            }
          }
        }
        puVar30 = param_2 + uVar19;
      }
      else {
        uVar17 = (bVar2 & 0x18) >> 3;
        iVar8 = v_advance_tab[uVar22][0];
        iVar9 = v_advance_tab[uVar22][1];
        iVar10 = v_advance_tab[uVar22][2];
        iVar11 = v_advance_tab[uVar22][3];
        *param_2 = *puVar32 + param_2[uVar28];
        iVar13 = (uVar17 + iVar8 >> 2) + iVar13;
        iVar14 = (uVar17 + iVar9 >> 2) + iVar14;
        iVar15 = (uVar17 + iVar10 >> 2) + iVar15;
        iVar16 = (uVar17 + iVar11 >> 2) + iVar16;
        param_2[1] = param_2[uVar28 + 1] + *puVar30;
        puVar30 = param_2 + uVar17;
        local_c0[0] = iVar13;
        local_c0[1] = iVar14;
        local_c0[2] = iVar15;
        local_c0[3] = iVar16;
        local_b0 = iVar13;
        iStack_ac = iVar14;
        iStack_a8 = iVar15;
        iStack_a4 = iVar16;
      }
      auVar37._8_8_ = 0;
      auVar37._0_8_ = c_lo_shuffles[bVar2 >> 5];
      local_e0 = pshufb(local_e0,auVar37);
      uVar28 = (ulonglong)*(int *)((longlong)&local_100 + (ulonglong)local_e0[0] * 4);
      lVar20 = 0;
      if ((ulonglong)(bVar2 >> 5) == 7) {
        lVar20 = 4;
      }
      local_130 = (int *)((longlong)local_130 + lVar20);
      local_b0 = iVar13;
      iStack_ac = iVar14;
      iStack_a8 = iVar15;
      iStack_a4 = iVar16;
      if (uVar28 < (ulonglong)((longlong)param_5 - (longlong)puVar30)) goto LAB_14f3c114e;
      puVar32 = puVar30 + uVar28;
      if (lVar26 == 9) {
        if (puVar36 <= puVar33) goto LAB_14f3c110e;
        uVar17 = puVar36[-1] + 6;
        puVar36 = puVar36 + -1;
        param_2 = puVar30 + uVar17;
        *(undefined8 *)puVar30 = *(undefined8 *)puVar32;
        *(undefined8 *)(puVar30 + 8) = *(undefined8 *)(puVar32 + 8);
        uVar18 = (uint)param_2 & 7;
        pbVar25 = local_a0[uVar18];
        ppuVar31 = local_a0 + uVar18;
        if ((uchar *)0x10 < (uchar *)(ulonglong)uVar17) {
          if (param_4 + (-8 - (longlong)puVar30) < (uchar *)(ulonglong)uVar17) goto LAB_14f3c10ce;
          puVar34 = puVar32 + 0x18;
          *(undefined8 *)(puVar30 + 0x10) = *(undefined8 *)(puVar32 + 0x10);
          for (puVar30 = puVar30 + 0x18; puVar30 < param_2; puVar30 = puVar30 + 8) {
            uVar1 = *(undefined8 *)puVar34;
            puVar34 = puVar34 + 8;
            *(undefined8 *)puVar30 = uVar1;
          }
          lVar24 = lVar35 - ((longlong)param_3 - (longlong)param_2 >> 6);
          if (lVar24 < 1) {
            lVar24 = 0;
          }
        }
      }
      else {
        *(undefined8 *)puVar30 = *(undefined8 *)puVar32;
        param_2 = puVar30 + lVar26;
        uVar17 = (uint)param_2 & 7;
        pbVar25 = local_a0[uVar17];
        ppuVar31 = local_a0 + uVar17;
      }
    } while (lVar24 < lVar35);
  }
  uVar17 = (uint)param_2 & 7;
  pbVar25 = local_a0[uVar17];
  ppuVar31 = local_a0 + uVar17;
  iVar13 = local_b0;
  iVar14 = iStack_ac;
  iVar15 = iStack_a8;
  iVar16 = iStack_a4;
  while (uVar17 = (uint)param_2, local_c0[0] = iVar13, local_c0[1] = iVar14, local_c0[2] = iVar15,
        local_c0[3] = iVar16, local_b0 = iVar13, iStack_ac = iVar14, iStack_a8 = iVar15,
        iStack_a4 = iVar16, 0 < lVar35) {
    bVar2 = *pbVar25;
    *ppuVar31 = pbVar25 + 1;
    lVar35 = lVar35 + -1;
    lVar24 = (ulonglong)(bVar2 & 7) + 2;
    *(int *)((longlong)&local_100 + (longlong)(int)(uint)local_e0[7] * 4) = *local_130;
    if ((bVar2 & 0x18) == 0x18) {
      uVar18 = *puVar33;
      uVar22 = (ulonglong)uVar18;
      puVar33 = puVar33 + 1;
      local_128 = puVar33;
      if ((longlong)param_3 - (longlong)param_2 < (longlong)uVar22) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          (*g_fp_OodleCore_Plugin_Printf)
                    (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x1aa,
                     "OODLE ERROR : corruption : (match_zone_end - to_ptr) >= lrl\n");
          ooLogErrorPost();
          return false;
        }
        goto LAB_14f3c1562;
      }
      uVar19 = (ulonglong)(uVar17 & 3);
      puVar27 = local_140 + local_c0[uVar19];
      puVar34 = local_140 + local_c0[uVar19 + 1];
      puVar30 = local_140 + local_c0[uVar19 + 2];
      puVar32 = local_140 + local_c0[uVar19 + 3];
      uVar4 = *(undefined4 *)puVar27;
      uVar5 = *(undefined4 *)puVar30;
      local_b0 = (uVar18 + v_advance_tab[uVar19][0] >> 2) + iVar13;
      iStack_ac = (uVar18 + v_advance_tab[uVar19][1] >> 2) + iVar14;
      iStack_a8 = (uVar18 + v_advance_tab[uVar19][2] >> 2) + iVar15;
      iStack_a4 = (uVar18 + v_advance_tab[uVar19][3] >> 2) + iVar16;
      local_c0[0] = local_b0;
      local_c0[1] = iStack_ac;
      local_c0[2] = iStack_a8;
      local_c0[3] = iStack_a4;
      uVar6 = *(undefined4 *)puVar34;
      uVar7 = *(undefined4 *)puVar32;
      uVar1 = *(undefined8 *)(param_2 + uVar28);
      *(ulonglong *)param_2 =
           CONCAT17((char)((ulonglong)uVar1 >> 0x38) + (char)((uint)uVar7 >> 8),
                    CONCAT16((char)((ulonglong)uVar1 >> 0x30) + (char)((uint)uVar5 >> 8),
                             CONCAT15((char)((ulonglong)uVar1 >> 0x28) + (char)((uint)uVar6 >> 8),
                                      CONCAT14((char)((ulonglong)uVar1 >> 0x20) +
                                               (char)((uint)uVar4 >> 8),
                                               CONCAT13((char)((ulonglong)uVar1 >> 0x18) +
                                                        (char)uVar7,
                                                        CONCAT12((char)((ulonglong)uVar1 >> 0x10) +
                                                                 (char)uVar5,
                                                                 CONCAT11((char)((ulonglong)uVar1 >>
                                                                                8) + (char)uVar6,
                                                                          (char)uVar1 + (char)uVar4)
                                                                ))))));
      if (8 < uVar22) {
        uVar1 = *(undefined8 *)(param_2 + uVar28 + 8);
        *(ulonglong *)(param_2 + 8) =
             CONCAT17((char)((ulonglong)uVar1 >> 0x38) + (char)((uint)uVar7 >> 0x18),
                      CONCAT16((char)((ulonglong)uVar1 >> 0x30) + (char)((uint)uVar5 >> 0x18),
                               CONCAT15((char)((ulonglong)uVar1 >> 0x28) +
                                        (char)((uint)uVar6 >> 0x18),
                                        CONCAT14((char)((ulonglong)uVar1 >> 0x20) +
                                                 (char)((uint)uVar4 >> 0x18),
                                                 CONCAT13((char)((ulonglong)uVar1 >> 0x18) +
                                                          (char)((uint)uVar7 >> 0x10),
                                                          CONCAT12((char)((ulonglong)uVar1 >> 0x10)
                                                                   + (char)((uint)uVar5 >> 0x10),
                                                                   CONCAT11((char)((ulonglong)uVar1
                                                                                  >> 8) +
                                                                            (char)((uint)uVar6 >>
                                                                                  0x10),
                                                                            (char)uVar1 +
                                                                            (char)((uint)uVar4 >>
                                                                                  0x10))))))));
        if (0x10 < uVar18) {
          uVar4 = *(undefined4 *)(puVar34 + 4);
          uVar5 = *(undefined4 *)(puVar27 + 4);
          uVar6 = *(undefined4 *)(puVar30 + 4);
          uVar7 = *(undefined4 *)(puVar32 + 4);
          uVar1 = *(undefined8 *)(param_2 + uVar28 + 0x10);
          *(ulonglong *)(param_2 + 0x10) =
               CONCAT17((char)((ulonglong)uVar1 >> 0x38) + (char)((uint)uVar7 >> 8),
                        CONCAT16((char)((ulonglong)uVar1 >> 0x30) + (char)((uint)uVar6 >> 8),
                                 CONCAT15((char)((ulonglong)uVar1 >> 0x28) +
                                          (char)((uint)uVar4 >> 8),
                                          CONCAT14((char)((ulonglong)uVar1 >> 0x20) +
                                                   (char)((uint)uVar5 >> 8),
                                                   CONCAT13((char)((ulonglong)uVar1 >> 0x18) +
                                                            (char)uVar7,
                                                            CONCAT12((char)((ulonglong)uVar1 >> 0x10
                                                                           ) + (char)uVar6,
                                                                     CONCAT11((char)((ulonglong)
                                                                                     uVar1 >> 8) +
                                                                              (char)uVar4,
                                                                              (char)uVar1 +
                                                                              (char)uVar5)))))));
          if (0x18 < uVar18) {
            uVar1 = *(undefined8 *)(param_2 + uVar28 + 0x18);
            uVar22 = uVar22 - 0x20;
            *(ulonglong *)(param_2 + 0x18) =
                 CONCAT17((char)((ulonglong)uVar1 >> 0x38) + (char)((uint)uVar7 >> 0x18),
                          CONCAT16((char)((ulonglong)uVar1 >> 0x30) + (char)((uint)uVar6 >> 0x18),
                                   CONCAT15((char)((ulonglong)uVar1 >> 0x28) +
                                            (char)((uint)uVar4 >> 0x18),
                                            CONCAT14((char)((ulonglong)uVar1 >> 0x20) +
                                                     (char)((uint)uVar5 >> 0x18),
                                                     CONCAT13((char)((ulonglong)uVar1 >> 0x18) +
                                                              (char)((uint)uVar7 >> 0x10),
                                                              CONCAT12((char)((ulonglong)uVar1 >>
                                                                             0x10) +
                                                                       (char)((uint)uVar6 >> 0x10),
                                                                       CONCAT11((char)((ulonglong)
                                                                                       uVar1 >> 8) +
                                                                                (char)((uint)uVar4
                                                                                      >> 0x10),
                                                                                (char)uVar1 +
                                                                                (char)((uint)uVar5
                                                                                      >> 0x10)))))))
                         );
            param_2 = param_2 + 0x20;
            if (0 < (longlong)uVar22) {
              puVar32 = puVar32 + 6;
              puVar21 = param_2 + uVar28;
              puVar34 = puVar34 + 6;
              puVar30 = puVar30 + 6;
              puVar27 = puVar27 + 6;
              uVar28 = uVar22;
              puVar23 = param_2;
              do {
                uVar4 = *(undefined4 *)(puVar34 + 2);
                uVar22 = uVar28 - 8;
                uVar5 = *(undefined4 *)(puVar27 + 2);
                uVar6 = *(undefined4 *)(puVar30 + 2);
                uVar7 = *(undefined4 *)(puVar32 + 2);
                uVar1 = *(undefined8 *)puVar21;
                *(ulonglong *)puVar23 =
                     CONCAT17((char)((ulonglong)uVar1 >> 0x38) + (char)((uint)uVar7 >> 8),
                              CONCAT16((char)((ulonglong)uVar1 >> 0x30) + (char)((uint)uVar6 >> 8),
                                       CONCAT15((char)((ulonglong)uVar1 >> 0x28) +
                                                (char)((uint)uVar4 >> 8),
                                                CONCAT14((char)((ulonglong)uVar1 >> 0x20) +
                                                         (char)((uint)uVar5 >> 8),
                                                         CONCAT13((char)((ulonglong)uVar1 >> 0x18) +
                                                                  (char)uVar7,
                                                                  CONCAT12((char)((ulonglong)uVar1
                                                                                 >> 0x10) +
                                                                           (char)uVar6,
                                                                           CONCAT11((char)((
                                                  ulonglong)uVar1 >> 8) + (char)uVar4,
                                                  (char)uVar1 + (char)uVar5)))))));
                param_2 = puVar23 + 8;
                if ((longlong)uVar22 < 1) break;
                uVar1 = *(undefined8 *)(puVar21 + 8);
                puVar27 = puVar27 + 4;
                puVar34 = puVar34 + 4;
                puVar30 = puVar30 + 4;
                *(ulonglong *)param_2 =
                     CONCAT17((char)((ulonglong)uVar1 >> 0x38) + (char)((uint)uVar7 >> 0x18),
                              CONCAT16((char)((ulonglong)uVar1 >> 0x30) +
                                       (char)((uint)uVar6 >> 0x18),
                                       CONCAT15((char)((ulonglong)uVar1 >> 0x28) +
                                                (char)((uint)uVar4 >> 0x18),
                                                CONCAT14((char)((ulonglong)uVar1 >> 0x20) +
                                                         (char)((uint)uVar5 >> 0x18),
                                                         CONCAT13((char)((ulonglong)uVar1 >> 0x18) +
                                                                  (char)((uint)uVar7 >> 0x10),
                                                                  CONCAT12((char)((ulonglong)uVar1
                                                                                 >> 0x10) +
                                                                           (char)((uint)uVar6 >>
                                                                                 0x10),
                                                                           CONCAT11((char)((
                                                  ulonglong)uVar1 >> 8) +
                                                  (char)((uint)uVar4 >> 0x10),
                                                  (char)uVar1 + (char)((uint)uVar5 >> 0x10))))))));
                puVar32 = puVar32 + 4;
                param_2 = puVar23 + 0x10;
                puVar21 = puVar21 + 0x10;
                uVar22 = uVar28 - 0x10;
                uVar28 = uVar22;
                puVar23 = param_2;
              } while (0 < (longlong)uVar22);
            }
          }
        }
      }
      puVar30 = param_2 + uVar22;
    }
    else {
      uVar18 = (bVar2 & 0x18) >> 3;
      if ((longlong)param_3 - (longlong)param_2 < (longlong)(ulonglong)uVar18) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          (*g_fp_OodleCore_Plugin_Printf)
                    (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x20d,
                     "OODLE ERROR : corruption : (match_zone_end - to_ptr) >= lrl\n");
          ooLogErrorPost();
          return false;
        }
        goto LAB_14f3c1562;
      }
      uVar22 = (ulonglong)(uVar17 & 3);
      iVar8 = local_c0[uVar22 + 1];
      iVar9 = v_advance_tab[uVar22][0];
      iVar10 = v_advance_tab[uVar22][1];
      iVar11 = v_advance_tab[uVar22][2];
      iVar12 = v_advance_tab[uVar22][3];
      *param_2 = local_140[local_c0[uVar22]] + param_2[uVar28];
      local_b0 = (uVar18 + iVar9 >> 2) + iVar13;
      iStack_ac = (uVar18 + iVar10 >> 2) + iVar14;
      iStack_a8 = (uVar18 + iVar11 >> 2) + iVar15;
      iStack_a4 = (uVar18 + iVar12 >> 2) + iVar16;
      param_2[1] = param_2[uVar28 + 1] + local_140[iVar8];
      puVar30 = param_2 + uVar18;
      local_c0[0] = local_b0;
      local_c0[1] = iStack_ac;
      local_c0[2] = iStack_a8;
      local_c0[3] = iStack_a4;
    }
    auVar38._8_8_ = 0;
    auVar38._0_8_ = c_lo_shuffles[bVar2 >> 5];
    local_e0 = pshufb(local_e0,auVar38);
    uVar28 = (ulonglong)*(int *)((longlong)&local_100 + (ulonglong)local_e0[0] * 4);
    lVar26 = 0;
    if ((ulonglong)(bVar2 >> 5) == 7) {
      lVar26 = 4;
    }
    local_130 = (int *)((longlong)local_130 + lVar26);
    if (uVar28 < (ulonglong)((longlong)param_5 - (longlong)puVar30)) goto LAB_14f3c114e;
    puVar32 = puVar30 + uVar28;
    iVar13 = local_b0;
    iVar14 = iStack_ac;
    iVar15 = iStack_a8;
    iVar16 = iStack_a4;
    if (lVar24 == 9) {
      if (puVar36 <= puVar33) goto LAB_14f3c110e;
      uVar17 = puVar36[-1] + 6;
      puVar36 = puVar36 + -1;
      param_2 = puVar30 + uVar17;
      *(undefined8 *)puVar30 = *(undefined8 *)puVar32;
      *(undefined8 *)(puVar30 + 8) = *(undefined8 *)(puVar32 + 8);
      uVar18 = (uint)param_2 & 7;
      pbVar25 = local_a0[uVar18];
      ppuVar31 = local_a0 + uVar18;
      if ((uchar *)0x10 < (uchar *)(ulonglong)uVar17) {
        if (param_4 + (-8 - (longlong)puVar30) < (uchar *)(ulonglong)uVar17) goto LAB_14f3c10ce;
        puVar34 = puVar32 + 0x18;
        *(undefined8 *)(puVar30 + 0x10) = *(undefined8 *)(puVar32 + 0x10);
        for (puVar30 = puVar30 + 0x18; puVar30 < param_2; puVar30 = puVar30 + 8) {
          uVar1 = *(undefined8 *)puVar34;
          puVar34 = puVar34 + 8;
          *(undefined8 *)puVar30 = uVar1;
        }
      }
    }
    else {
      *(undefined8 *)puVar30 = *(undefined8 *)puVar32;
      param_2 = puVar30 + lVar24;
      uVar17 = (uint)param_2 & 7;
      pbVar25 = local_a0[uVar17];
      ppuVar31 = local_a0 + uVar17;
    }
  }
  puVar30 = param_2;
  if (param_2 < param_4) {
    uVar22 = (longlong)param_4 - (longlong)param_2;
    puVar27 = local_140 + local_c0[uVar17 & 3];
    puVar34 = local_140 + local_c0[uVar17 + 1 & 3];
    puVar32 = local_140 + local_c0[uVar17 + 2 & 3];
    if (3 < (longlong)uVar22) {
      uVar19 = uVar22 >> 2;
      local_138 = (uchar *)(1 - uVar28);
      puVar21 = param_2 + uVar28 + 2;
      uVar22 = uVar22 + uVar19 * -4;
      puVar30 = local_140 + local_c0[uVar17 + 3 & 3];
      do {
        uVar3 = *puVar27;
        puVar27 = puVar27 + 1;
        *param_2 = puVar21[-2] + uVar3;
        param_2 = param_2 + 4;
        uVar3 = *puVar34;
        puVar34 = puVar34 + 1;
        puVar21[~uVar28] = puVar21[-1] + uVar3;
        uVar3 = *puVar32;
        puVar32 = puVar32 + 1;
        puVar21[-uVar28] = uVar3 + *puVar21;
        puVar21[(longlong)local_138] = puVar21[1] + *puVar30;
        puVar21 = puVar21 + 4;
        uVar19 = uVar19 - 1;
        puVar30 = puVar30 + 1;
        puVar33 = local_128;
      } while (uVar19 != 0);
    }
    puVar30 = param_2;
    if (0 < (longlong)uVar22) {
      *param_2 = param_2[uVar28] + *puVar27;
      puVar30 = param_2 + 1;
      if (0 < (longlong)(uVar22 - 1)) {
        *puVar30 = puVar30[uVar28] + *puVar34;
        puVar30 = param_2 + 2;
        if (uVar22 - 1 != 1 && -1 < (longlong)(uVar22 - 2)) {
          *puVar30 = puVar30[uVar28] + *puVar32;
          puVar30 = param_2 + 3;
        }
      }
    }
  }
  if (puVar30 == param_4) {
    if (local_130 == local_118) {
      if (puVar33 == puVar36) {
        return true;
      }
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto LAB_14f3c1562;
      pcVar29 = "OODLE ERROR : corruption : excesses_ptr == excesses_end_ptr\n";
      iVar13 = 0x197;
    }
    else {
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto LAB_14f3c1562;
      pcVar29 = "OODLE ERROR : corruption : offsets_ptr == offsets_end\n";
      iVar13 = 0x196;
    }
  }
  else {
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto LAB_14f3c1562;
    pcVar29 = "OODLE ERROR : corruption : to_ptr == chunk_end\n";
    iVar13 = 0x18d;
  }
  (*g_fp_OodleCore_Plugin_Printf)
            (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_outer.inl",iVar13,pcVar29);
LAB_14f3c1562:
  ooLogErrorPost();
  return false;
LAB_14f3c114e:
  local_c0[0] = local_b0;
  local_c0[1] = iStack_ac;
  local_c0[2] = iStack_a8;
  local_c0[3] = iStack_a4;
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x2e2,
               "OODLE ERROR : corruption : (UINTa)neg_offset >= (UINTa) (window_base - to_ptr)\n");
    ooLogErrorPost();
    return false;
  }
  goto LAB_14f3c1562;
LAB_14f3c110e:
  local_c0[0] = local_b0;
  local_c0[1] = iStack_ac;
  local_c0[2] = iStack_a8;
  local_c0[3] = iStack_a4;
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x304,
               "OODLE ERROR : corruption : excesses_end_ptr > excesses_ptr\n");
    ooLogErrorPost();
    return false;
  }
  goto LAB_14f3c1562;
LAB_14f3c10ce:
  local_c0[0] = local_b0;
  local_c0[1] = iStack_ac;
  local_c0[2] = iStack_a8;
  local_c0[3] = iStack_a4;
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x322,
               "OODLE ERROR : corruption : (UINTa)(match_end - to_ptr) >= ml\n");
    ooLogErrorPost();
    return false;
  }
  goto LAB_14f3c1562;
}

// newLZHC_decode_parse_multipacket_o1_sse4 @ 14f3c15a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
oo2::newLZHC_decode_parse_multipacket_o1_sse4
          (newLZHC_chunk_arrays *param_1,uchar *param_2,uchar *param_3,uchar *param_4,uchar *param_5
          )

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined8 uVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  byte *pbVar10;
  byte *pbVar11;
  longlong lVar12;
  longlong lVar13;
  byte *pbVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  uchar **ppuVar18;
  char *pcVar19;
  longlong lVar20;
  uint *puVar21;
  uint *puVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auStack_218 [88];
  uchar *local_1c0;
  int *local_1b8;
  uchar *local_1b0;
  ulonglong local_1a8;
  uchar *local_1a0;
  int *local_198;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined1 local_160 [16];
  byte *local_140;
  uchar *puStack_138;
  uchar *local_130;
  uchar *puStack_128;
  uchar *local_120;
  uchar *puStack_118;
  uchar *local_110;
  uchar *puStack_108;
  uchar *local_100;
  uchar *puStack_f8;
  uchar *local_f0;
  uchar *puStack_e8;
  uchar *local_e0;
  uchar *puStack_d8;
  uchar *local_d0;
  uchar *puStack_c8;
  uchar *local_c0 [4];
  uchar *local_a0;
  uchar *local_98;
  uchar *local_90;
  uchar *local_88;
  byte local_80;
  uchar local_7f;
  uchar local_7e;
  uchar local_7d;
  uchar local_7c;
  uchar local_7b;
  uchar local_7a;
  uchar local_79;
  uchar local_78;
  uchar local_77;
  uchar local_76;
  uchar local_75;
  uchar local_74;
  uchar local_73;
  uchar local_72;
  uchar local_71;
  ulonglong local_70;
  
  local_70 = __security_cookie.value ^ (ulonglong)auStack_218;
  local_1b8 = param_1->offsets;
  puVar22 = param_1->excesses;
  local_198 = local_1b8 + param_1->offsets_count;
  lVar20 = param_1->packets_count;
  iVar16 = (int)param_3;
  local_c0[0] = param_1->packet_pos_ptrs[-iVar16 & 7];
  local_c0[1] = param_1->packet_pos_ptrs[1U - iVar16 & 7];
  local_c0[2] = param_1->packet_pos_ptrs[2U - iVar16 & 7];
  local_c0[3] = param_1->packet_pos_ptrs[3U - iVar16 & 7];
  local_a0 = param_1->packet_pos_ptrs[-iVar16 - 4U & 7];
  local_98 = param_1->packet_pos_ptrs[-iVar16 - 3U & 7];
  local_90 = param_1->packet_pos_ptrs[-iVar16 - 2U & 7];
  local_88 = param_1->packet_pos_ptrs[-iVar16 - 1U & 7];
  puVar21 = puVar22 + param_1->excesses_count;
  local_80 = *param_1->literals_ptrs[0];
  local_140 = param_1->literals_ptrs[0] + 1;
  puStack_138 = param_1->literals_ptrs[1] + 1;
  local_7f = *param_1->literals_ptrs[1];
  local_7e = *param_1->literals_ptrs[2];
  local_130 = param_1->literals_ptrs[2] + 1;
  local_160 = ___xmm_00000000000000000706050403020100;
  local_180 = ___xmm_fffffff8fffffff8fffffff8fffffff8;
  uStack_178 = _UNK_1531db198;
  local_170 = 0xfffffff8;
  puStack_128 = param_1->literals_ptrs[3] + 1;
  local_7d = *param_1->literals_ptrs[3];
  local_16c = 0xfffffff8;
  local_168 = 0xfffffff8;
  local_120 = param_1->literals_ptrs[4] + 1;
  local_7c = *param_1->literals_ptrs[4];
  puStack_118 = param_1->literals_ptrs[5] + 1;
  local_7b = *param_1->literals_ptrs[5];
  local_110 = param_1->literals_ptrs[6] + 1;
  local_7a = *param_1->literals_ptrs[6];
  puStack_108 = param_1->literals_ptrs[7] + 1;
  local_79 = *param_1->literals_ptrs[7];
  local_100 = param_1->literals_ptrs[8] + 1;
  local_78 = *param_1->literals_ptrs[8];
  puStack_f8 = param_1->literals_ptrs[9] + 1;
  local_77 = *param_1->literals_ptrs[9];
  local_f0 = param_1->literals_ptrs[10] + 1;
  local_76 = *param_1->literals_ptrs[10];
  puStack_e8 = param_1->literals_ptrs[0xb] + 1;
  local_75 = *param_1->literals_ptrs[0xb];
  local_e0 = param_1->literals_ptrs[0xc] + 1;
  local_74 = *param_1->literals_ptrs[0xc];
  puStack_d8 = param_1->literals_ptrs[0xd] + 1;
  local_73 = *param_1->literals_ptrs[0xd];
  local_72 = *param_1->literals_ptrs[0xe];
  local_d0 = param_1->literals_ptrs[0xe] + 1;
  local_71 = *param_1->literals_ptrs[0xf];
  puStack_c8 = param_1->literals_ptrs[0xf] + 1;
  if (0xf < (longlong)param_4 - (longlong)param_3) {
    param_3 = param_4 + -0x10;
  }
  local_1b0 = param_4 + -8;
  uVar7 = (uint)param_2 & 7;
  pbVar14 = local_c0[uVar7];
  ppuVar18 = local_c0 + uVar7;
  lVar12 = lVar20 - ((longlong)param_3 - (longlong)param_2 >> 6);
  if (lVar12 < 1) {
    lVar12 = 0;
  }
  while (local_1c0 = param_3, local_1a0 = param_4, lVar12 < lVar20) {
    bVar2 = *pbVar14;
    *ppuVar18 = pbVar14 + 1;
    local_1a8 = (ulonglong)(bVar2 >> 5);
    lVar20 = lVar20 + -1;
    lVar13 = (ulonglong)(bVar2 & 7) + 2;
    *(int *)((longlong)&local_180 + (longlong)(int)(uint)local_160[7] * 4) = *local_1b8;
    if ((bVar2 & 0x18) == 0x18) {
      uVar7 = *puVar22;
      uVar17 = (ulonglong)uVar7;
      puVar22 = puVar22 + 1;
      if (uVar7 == 0) goto LAB_14f3c1c0e;
      if (0x18 < uVar7) {
        if ((longlong)param_3 - (longlong)param_2 < (longlong)uVar17) {
          ooLogErrorPre();
          if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
            (*g_fp_OodleCore_Plugin_Printf)
                      (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0xfb,
                       "OODLE ERROR : corruption : (match_zone_end - to_ptr) >= (lrl)\n");
            ooLogErrorPost();
            return false;
          }
          goto LAB_14f3c2129;
        }
        lVar9 = lVar20 - ((longlong)(((longlong)param_3 - (longlong)param_2) - uVar17) >> 6);
        lVar12 = 0;
        if (0 < lVar9) {
          lVar12 = lVar9;
        }
      }
      bVar2 = param_2[-1];
      uVar15 = uVar17;
      pbVar14 = param_2;
      do {
        bVar3 = bVar2 >> 4;
        pbVar11 = (&local_140)[bVar3];
        bVar2 = (&local_80)[bVar3];
        *pbVar14 = bVar2;
        (&local_80)[bVar3] = *pbVar11;
        (&local_140)[bVar3] = pbVar11 + 1;
        uVar15 = uVar15 - 1;
        pbVar14 = pbVar14 + 1;
      } while (uVar15 != 0);
      pbVar11 = param_2 + uVar17;
    }
    else {
      pbVar11 = param_2;
      if ((bVar2 & 0x18) != 0) {
        bVar6 = param_2[-1] >> 4;
        pbVar14 = (&local_140)[bVar6];
        bVar3 = (&local_80)[bVar6];
        bVar4 = *pbVar14;
        *param_2 = bVar3;
        pbVar11 = param_2 + 1;
        (&local_80)[bVar6] = bVar4;
        (&local_140)[bVar6] = pbVar14 + 1;
        if ((bVar2 & 0x18) == 0x10) {
          bVar3 = bVar3 >> 4;
          pbVar14 = (&local_140)[bVar3];
          bVar2 = (&local_80)[bVar3];
          (&local_80)[bVar3] = *pbVar14;
          *pbVar11 = bVar2;
          pbVar11 = param_2 + 2;
          (&local_140)[bVar3] = pbVar14 + 1;
        }
      }
    }
    auVar23._8_8_ = 0;
    auVar23._0_8_ = c_lo_shuffles[local_1a8];
    local_160 = pshufb(local_160,auVar23);
    uVar17 = (ulonglong)*(int *)((longlong)&local_180 + (ulonglong)local_160[0] * 4);
    lVar9 = 0;
    if (local_1a8 == 7) {
      lVar9 = 4;
    }
    local_1b8 = (int *)((longlong)local_1b8 + lVar9);
    if (uVar17 < (ulonglong)((longlong)param_5 - (longlong)pbVar11)) goto LAB_14f3c1cce;
    pbVar1 = pbVar11 + uVar17;
    if (lVar13 == 9) {
      if (puVar21 <= puVar22) goto LAB_14f3c1c8e;
      uVar7 = puVar21[-1] + 6;
      puVar21 = puVar21 + -1;
      param_2 = pbVar11 + uVar7;
      *(undefined8 *)pbVar11 = *(undefined8 *)pbVar1;
      *(undefined8 *)(pbVar11 + 8) = *(undefined8 *)(pbVar1 + 8);
      uVar8 = (uint)param_2 & 7;
      pbVar14 = local_c0[uVar8];
      ppuVar18 = local_c0 + uVar8;
      if (0x10 < (ulonglong)uVar7) {
        if ((ulonglong)((longlong)local_1b0 - (longlong)pbVar11) < (ulonglong)uVar7)
        goto LAB_14f3c1c4e;
        pbVar10 = pbVar1 + 0x18;
        *(undefined8 *)(pbVar11 + 0x10) = *(undefined8 *)(pbVar1 + 0x10);
        for (pbVar11 = pbVar11 + 0x18; pbVar11 < param_2; pbVar11 = pbVar11 + 8) {
          uVar5 = *(undefined8 *)pbVar10;
          pbVar10 = pbVar10 + 8;
          *(undefined8 *)pbVar11 = uVar5;
        }
        lVar12 = lVar20 - ((longlong)param_3 - (longlong)param_2 >> 6);
        if (lVar12 < 1) {
          lVar12 = 0;
        }
      }
    }
    else {
      *(undefined8 *)pbVar11 = *(undefined8 *)pbVar1;
      param_2 = pbVar11 + lVar13;
      uVar7 = (uint)param_2 & 7;
      pbVar14 = local_c0[uVar7];
      ppuVar18 = local_c0 + uVar7;
    }
  }
  uVar7 = (uint)param_2 & 7;
  pbVar14 = local_c0[uVar7];
  ppuVar18 = local_c0 + uVar7;
  while (0 < lVar20) {
    bVar2 = *pbVar14;
    *ppuVar18 = pbVar14 + 1;
    lVar20 = lVar20 + -1;
    lVar12 = (ulonglong)(bVar2 & 7) + 2;
    *(int *)((longlong)&local_180 + (longlong)(int)(uint)local_160[7] * 4) = *local_1b8;
    if ((bVar2 & 0x18) == 0x18) {
      uVar17 = (ulonglong)*puVar22;
      puVar22 = puVar22 + 1;
      if (uVar17 == 0) goto LAB_14f3c1c0e;
      if ((longlong)param_3 - (longlong)param_2 < (longlong)uVar17) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          (*g_fp_OodleCore_Plugin_Printf)
                    (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0xf5,
                     "OODLE ERROR : corruption : (match_zone_end - to_ptr) >= lrl\n");
          ooLogErrorPost();
          return false;
        }
        goto LAB_14f3c2129;
      }
      bVar3 = param_2[-1];
      uVar15 = uVar17;
      pbVar14 = param_2;
      do {
        bVar4 = bVar3 >> 4;
        pbVar11 = (&local_140)[bVar4];
        bVar3 = (&local_80)[bVar4];
        *pbVar14 = bVar3;
        (&local_80)[bVar4] = *pbVar11;
        (&local_140)[bVar4] = pbVar11 + 1;
        uVar15 = uVar15 - 1;
        pbVar14 = pbVar14 + 1;
      } while (uVar15 != 0);
      pbVar11 = param_2 + uVar17;
    }
    else if ((bVar2 & 0x18) == 0) {
      pbVar11 = param_2;
      if ((longlong)param_3 - (longlong)param_2 < 0) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          (*g_fp_OodleCore_Plugin_Printf)
                    (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x125,
                     "OODLE ERROR : corruption : (match_zone_end - to_ptr) >= 0\n");
          ooLogErrorPost();
          return false;
        }
        goto LAB_14f3c2129;
      }
    }
    else {
      uVar17 = (ulonglong)((bVar2 & 0x18) >> 3);
      if ((longlong)param_3 - (longlong)param_2 < (longlong)uVar17) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          (*g_fp_OodleCore_Plugin_Printf)
                    (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x10d,
                     "OODLE ERROR : corruption : (match_zone_end - to_ptr) >= lrl\n");
          ooLogErrorPost();
          return false;
        }
        goto LAB_14f3c2129;
      }
      bVar6 = param_2[-1] >> 4;
      pbVar14 = (&local_140)[bVar6];
      bVar3 = (&local_80)[bVar6];
      bVar4 = *pbVar14;
      *param_2 = bVar3;
      (&local_80)[bVar6] = bVar4;
      (&local_140)[bVar6] = pbVar14 + 1;
      pbVar11 = param_2 + 1;
      if (uVar17 == 2) {
        bVar3 = bVar3 >> 4;
        pbVar14 = (&local_140)[bVar3];
        bVar4 = (&local_80)[bVar3];
        (&local_80)[bVar3] = *pbVar14;
        param_2[1] = bVar4;
        (&local_140)[bVar3] = pbVar14 + 1;
        pbVar11 = param_2 + 2;
      }
    }
    auVar24._8_8_ = 0;
    auVar24._0_8_ = c_lo_shuffles[bVar2 >> 5];
    local_160 = pshufb(local_160,auVar24);
    uVar17 = (ulonglong)*(int *)((longlong)&local_180 + (ulonglong)local_160[0] * 4);
    lVar13 = 0;
    if ((ulonglong)(bVar2 >> 5) == 7) {
      lVar13 = 4;
    }
    local_1b8 = (int *)((longlong)local_1b8 + lVar13);
    if (uVar17 < (ulonglong)((longlong)param_5 - (longlong)pbVar11)) goto LAB_14f3c1cce;
    pbVar1 = pbVar11 + uVar17;
    if (lVar12 == 9) {
      if (puVar21 <= puVar22) goto LAB_14f3c1c8e;
      uVar7 = puVar21[-1] + 6;
      puVar21 = puVar21 + -1;
      param_2 = pbVar11 + uVar7;
      *(undefined8 *)pbVar11 = *(undefined8 *)pbVar1;
      *(undefined8 *)(pbVar11 + 8) = *(undefined8 *)(pbVar1 + 8);
      uVar8 = (uint)param_2 & 7;
      pbVar14 = local_c0[uVar8];
      ppuVar18 = local_c0 + uVar8;
      if (0x10 < (ulonglong)uVar7) {
        if ((ulonglong)((longlong)local_1b0 - (longlong)pbVar11) < (ulonglong)uVar7)
        goto LAB_14f3c1c4e;
        pbVar10 = pbVar1 + 0x18;
        *(undefined8 *)(pbVar11 + 0x10) = *(undefined8 *)(pbVar1 + 0x10);
        for (pbVar11 = pbVar11 + 0x18; pbVar11 < param_2; pbVar11 = pbVar11 + 8) {
          uVar5 = *(undefined8 *)pbVar10;
          pbVar10 = pbVar10 + 8;
          *(undefined8 *)pbVar11 = uVar5;
        }
      }
    }
    else {
      *(undefined8 *)pbVar11 = *(undefined8 *)pbVar1;
      param_2 = pbVar11 + lVar12;
      uVar7 = (uint)param_2 & 7;
      pbVar14 = local_c0[uVar7];
      ppuVar18 = local_c0 + uVar7;
    }
  }
  if (param_2 < param_4) {
    lVar20 = (longlong)param_4 - (longlong)param_2;
    if (0 < lVar20) {
      bVar2 = param_2[-1];
      do {
        bVar3 = bVar2 >> 4;
        pbVar14 = (&local_140)[bVar3];
        bVar2 = (&local_80)[bVar3];
        *param_2 = bVar2;
        (&local_80)[bVar3] = *pbVar14;
        (&local_140)[bVar3] = pbVar14 + 1;
        lVar20 = lVar20 + -1;
        param_2 = param_2 + 1;
      } while (lVar20 != 0);
      goto LAB_14f3c20ae;
    }
LAB_14f3c20d6:
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto LAB_14f3c2129;
    pcVar19 = "OODLE ERROR : corruption : to_ptr == chunk_end\n";
    iVar16 = 0x18d;
  }
  else {
    if (param_2 != param_4) goto LAB_14f3c20d6;
LAB_14f3c20ae:
    if (local_1b8 == local_198) {
      if (puVar22 == puVar21) {
        return true;
      }
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto LAB_14f3c2129;
      pcVar19 = "OODLE ERROR : corruption : excesses_ptr == excesses_end_ptr\n";
      iVar16 = 0x197;
    }
    else {
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto LAB_14f3c2129;
      pcVar19 = "OODLE ERROR : corruption : offsets_ptr == offsets_end\n";
      iVar16 = 0x196;
    }
  }
  (*g_fp_OodleCore_Plugin_Printf)
            (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_outer.inl",iVar16,pcVar19);
LAB_14f3c2129:
  ooLogErrorPost();
  return false;
LAB_14f3c1c0e:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0xf2,
               "OODLE ERROR : corruption : lrl > 0\n");
    ooLogErrorPost();
    return false;
  }
  goto LAB_14f3c2129;
LAB_14f3c1cce:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x2e2,
               "OODLE ERROR : corruption : (UINTa)neg_offset >= (UINTa) (window_base - to_ptr)\n");
    ooLogErrorPost();
    return false;
  }
  goto LAB_14f3c2129;
LAB_14f3c1c8e:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x304,
               "OODLE ERROR : corruption : excesses_end_ptr > excesses_ptr\n");
    ooLogErrorPost();
    return false;
  }
  goto LAB_14f3c2129;
LAB_14f3c1c4e:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x322,
               "OODLE ERROR : corruption : (UINTa)(match_end - to_ptr) >= ml\n");
    ooLogErrorPost();
    return false;
  }
  goto LAB_14f3c2129;
}

// newLZHC_decode_parse_multipacket_subandF_sse4 @ 14f3c2180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
oo2::newLZHC_decode_parse_multipacket_subandF_sse4
          (newLZHC_chunk_arrays *param_1,uchar *param_2,uchar *param_3,uchar *param_4,uchar *param_5
          )

{
  uchar *puVar1;
  byte bVar2;
  uchar uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  uchar *puVar8;
  uchar *puVar9;
  ulonglong uVar10;
  uchar *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  byte bVar16;
  longlong lVar17;
  uchar *puVar18;
  uchar **ppuVar19;
  char *pcVar20;
  ulonglong uVar21;
  uint *puVar22;
  uchar *puVar23;
  uchar *puVar24;
  uchar *puVar25;
  int *piVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auStack_2a8 [40];
  uint *local_280;
  uchar *local_278;
  uchar *local_270;
  uchar *local_268;
  longlong local_260;
  uchar *local_258;
  uchar *local_250;
  uchar *local_248;
  uchar *local_240;
  uchar *local_238;
  uchar *local_230;
  uchar *local_228;
  uchar *local_220;
  uchar *local_218;
  uchar *local_210;
  int *local_208;
  uint *local_200;
  ulonglong local_1f8;
  ulonglong local_1f0;
  uchar *local_1e8;
  uchar *local_1e0;
  ulonglong local_1d8;
  longlong local_1d0;
  ulonglong local_1c8;
  int *local_1c0;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined1 local_160 [16];
  uchar *local_140 [4];
  uchar *local_120;
  uchar *local_118;
  uchar *local_110;
  uchar *local_108;
  uchar *local_100;
  uchar *local_f8;
  uchar *local_f0;
  uchar *local_e8;
  uchar *local_e0;
  uchar *local_d8;
  uchar *local_d0;
  uchar *local_c8;
  uchar *local_c0 [4];
  uchar *local_a0;
  uchar *local_98;
  uchar *local_90;
  uchar *local_88;
  ulonglong local_80;
  
  local_80 = __security_cookie.value ^ (ulonglong)auStack_2a8;
  local_208 = param_1->offsets;
  iVar14 = (int)param_3;
  puVar22 = param_1->excesses;
  local_1c0 = local_208 + param_1->offsets_count;
  local_260 = param_1->packets_count;
  puVar11 = param_1->literals_ptrs[-iVar14 & 0xf];
  local_c0[0] = param_1->packet_pos_ptrs[-iVar14 & 7];
  local_140[0] = puVar11;
  local_c0[1] = param_1->packet_pos_ptrs[1U - iVar14 & 7];
  puVar23 = param_1->literals_ptrs[2U - iVar14 & 0xf];
  local_c0[2] = param_1->packet_pos_ptrs[2U - iVar14 & 7];
  local_140[2] = puVar23;
  puVar24 = param_1->literals_ptrs[3U - iVar14 & 0xf];
  local_c0[3] = param_1->packet_pos_ptrs[3U - iVar14 & 7];
  local_140[3] = puVar24;
  puVar9 = param_1->literals_ptrs[4U - iVar14 & 0xf];
  local_a0 = param_1->packet_pos_ptrs[4U - iVar14 & 7];
  local_120 = puVar9;
  local_98 = param_1->packet_pos_ptrs[5U - iVar14 & 7];
  local_90 = param_1->packet_pos_ptrs[6U - iVar14 & 7];
  local_88 = param_1->packet_pos_ptrs[7U - iVar14 & 7];
  local_200 = puVar22 + param_1->excesses_count;
  puVar25 = param_1->literals_ptrs[1U - iVar14 & 0xf];
  local_140[1] = puVar25;
  local_210 = param_1->literals_ptrs[5U - iVar14 & 0xf];
  local_118 = local_210;
  local_1f0 = 0xfffffffffffffff8;
  local_218 = param_1->literals_ptrs[6U - iVar14 & 0xf];
  local_110 = local_218;
  local_220 = param_1->literals_ptrs[7U - iVar14 & 0xf];
  local_108 = local_220;
  local_160 = ___xmm_00000000000000000706050403020100;
  local_180 = ___xmm_fffffff8fffffff8fffffff8fffffff8;
  uStack_178 = _UNK_1531db198;
  local_170 = 0xfffffff8;
  local_16c = 0xfffffff8;
  local_228 = param_1->literals_ptrs[-iVar14 - 8U & 0xf];
  local_100 = local_228;
  local_168 = 0xfffffff8;
  local_270 = param_1->literals_ptrs[-iVar14 - 7U & 0xf];
  local_f8 = local_270;
  local_230 = param_1->literals_ptrs[-iVar14 - 6U & 0xf];
  local_f0 = local_230;
  local_238 = param_1->literals_ptrs[-iVar14 - 5U & 0xf];
  local_e8 = local_238;
  local_240 = param_1->literals_ptrs[-iVar14 - 4U & 0xf];
  local_e0 = local_240;
  local_248 = param_1->literals_ptrs[-iVar14 - 3U & 0xf];
  local_d8 = local_248;
  local_250 = param_1->literals_ptrs[-iVar14 - 2U & 0xf];
  local_d0 = local_250;
  local_258 = param_1->literals_ptrs[-iVar14 - 1U & 0xf];
  local_c8 = local_258;
  if (0xf < (longlong)param_4 - (longlong)param_3) {
    param_3 = param_4 + -0x10;
  }
  local_1e8 = param_4 + -8;
  uVar5 = (uint)param_2 & 7;
  pbVar7 = local_c0[uVar5];
  ppuVar19 = local_c0 + uVar5;
  lVar12 = local_260 - ((longlong)param_3 - (longlong)param_2 >> 6);
  if (lVar12 < 1) {
    lVar12 = 0;
  }
  local_280 = puVar22;
  local_268 = puVar9;
  local_278 = param_3;
  local_1e0 = param_4;
  if (lVar12 < local_260) {
    do {
      bVar2 = *pbVar7;
      *ppuVar19 = pbVar7 + 1;
      local_260 = local_260 + -1;
      bVar16 = bVar2 & 0x18;
      local_1c8 = (ulonglong)(bVar2 >> 5);
      local_1f8 = (ulonglong)(bVar2 & 7) + 2;
      *(int *)((longlong)&local_180 + (longlong)(int)(uint)local_160[7] * 4) = *local_208;
      uVar5 = (uint)param_2;
      if (bVar16 == 0x18) {
        uVar21 = (ulonglong)*local_280;
        puVar22 = local_280 + 1;
        local_280 = puVar22;
        if (0x18 < uVar21) {
          if ((longlong)param_3 - (longlong)param_2 < (longlong)uVar21) {
            ooLogErrorPre();
            if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
            {
              (*g_fp_OodleCore_Plugin_Printf)
                        (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x13a
                         ,"OODLE ERROR : corruption : (match_zone_end - to_ptr) >= (lrl)\n");
              ooLogErrorPost();
              return false;
            }
            goto code_r0x00014f3c3140;
          }
          lVar12 = local_260 - ((longlong)(((longlong)param_3 - (longlong)param_2) - uVar21) >> 6);
          if (lVar12 < 1) {
            lVar12 = 0;
          }
          uVar10 = uVar21;
          if (((ulonglong)param_2 & 0xf) != 0) {
            do {
              puVar11 = local_140[uVar5 & 0xf];
              uVar21 = uVar21 - 1;
              *param_2 = param_2[local_1f0] + *puVar11;
              param_2 = param_2 + 1;
              local_140[uVar5 & 0xf] = puVar11 + 1;
              uVar5 = (uint)param_2;
            } while (((ulonglong)param_2 & 0xf) != 0);
            local_258 = local_c8;
            local_250 = local_d0;
            local_248 = local_d8;
            local_240 = local_e0;
            local_238 = local_e8;
            local_270 = local_f8;
            local_230 = local_f0;
            local_220 = local_108;
            local_228 = local_100;
            local_218 = local_110;
            local_210 = local_118;
            local_268 = local_120;
            puVar9 = local_120;
            puVar11 = local_140[0];
            uVar10 = uVar21;
            puVar23 = local_140[2];
            puVar24 = local_140[3];
            puVar25 = local_140[1];
          }
          uVar21 = (ulonglong)((uint)uVar10 & 0xf);
          lVar17 = (longlong)uVar10 >> 4;
          local_1d8 = uVar21;
          local_1d0 = lVar12;
          if (lVar17 != 0) {
            lVar15 = -local_1f0;
            puVar18 = param_2 + local_1f0 + 2;
            do {
              uVar3 = *puVar11;
              puVar11 = puVar11 + 1;
              *param_2 = puVar18[-2] + uVar3;
              uVar3 = *puVar25;
              puVar25 = puVar25 + 1;
              puVar18[lVar15 + -1] = puVar18[-1] + uVar3;
              uVar3 = *puVar23;
              puVar23 = puVar23 + 1;
              puVar18[lVar15] = uVar3 + *puVar18;
              uVar3 = *puVar24;
              puVar24 = puVar24 + 1;
              puVar18[lVar15 + 1] = puVar18[1] + uVar3;
              uVar3 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar18[lVar15 + 2] = puVar18[2] + uVar3;
              uVar3 = *local_210;
              local_210 = local_210 + 1;
              puVar18[lVar15 + 3] = puVar18[3] + uVar3;
              uVar3 = *local_218;
              local_218 = local_218 + 1;
              puVar18[lVar15 + 4] = puVar18[4] + uVar3;
              uVar3 = *local_220;
              local_220 = local_220 + 1;
              puVar18[lVar15 + 5] = puVar18[5] + uVar3;
              uVar3 = *local_228;
              local_228 = local_228 + 1;
              puVar18[lVar15 + 6] = puVar18[6] + uVar3;
              local_120 = puVar9;
              local_118 = local_210;
              local_110 = local_218;
              local_108 = local_220;
              puVar18[lVar15 + 7] = puVar18[7] + *local_270;
              local_270 = local_270 + 1;
              local_f8 = local_270;
              uVar3 = *local_230;
              local_230 = local_230 + 1;
              puVar18[lVar15 + 8] = puVar18[8] + uVar3;
              local_f0 = local_230;
              local_100 = local_228;
              uVar3 = *local_238;
              local_238 = local_238 + 1;
              puVar18[lVar15 + 9] = puVar18[9] + uVar3;
              local_e8 = local_238;
              uVar3 = *local_240;
              local_240 = local_240 + 1;
              puVar18[lVar15 + 10] = puVar18[10] + uVar3;
              local_e0 = local_240;
              uVar3 = *local_248;
              local_248 = local_248 + 1;
              puVar18[lVar15 + 0xb] = puVar18[0xb] + uVar3;
              local_d8 = local_248;
              uVar3 = *local_250;
              local_250 = local_250 + 1;
              puVar18[lVar15 + 0xc] = puVar18[0xc] + uVar3;
              param_2 = param_2 + 0x10;
              local_d0 = local_250;
              uVar3 = *local_258;
              local_258 = local_258 + 1;
              local_c8 = local_258;
              puVar18[lVar15 + 0xd] = puVar18[0xd] + uVar3;
              lVar17 = lVar17 + -1;
              puVar18 = puVar18 + 0x10;
            } while (lVar17 != 0);
            local_140[0] = puVar11;
            local_140[1] = puVar25;
            local_140[2] = puVar23;
            local_140[3] = puVar24;
            local_268 = puVar9;
          }
        }
        puVar18 = param_2;
        uVar10 = uVar21;
        puVar9 = local_268;
        if (uVar21 != 0) {
          do {
            uVar5 = (uint)puVar18 & 0xf;
            puVar11 = local_140[uVar5];
            *puVar18 = puVar18[local_1f0] + *puVar11;
            puVar18 = puVar18 + 1;
            local_140[uVar5] = puVar11 + 1;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
          local_258 = local_c8;
          local_250 = local_d0;
          local_248 = local_d8;
          local_240 = local_e0;
          local_270 = local_f8;
          local_238 = local_e8;
          local_220 = local_108;
          local_230 = local_f0;
          local_218 = local_110;
          local_228 = local_100;
          local_210 = local_118;
          local_268 = local_120;
          puVar18 = param_2 + uVar21;
          puVar9 = local_120;
          puVar11 = local_140[0];
          puVar23 = local_140[2];
          puVar24 = local_140[3];
          puVar25 = local_140[1];
        }
      }
      else {
        puVar18 = param_2;
        if (bVar16 != 0) {
          puVar11 = local_140[uVar5 & 0xf];
          *param_2 = param_2[local_1f0] + *puVar11;
          local_140[uVar5 & 0xf] = puVar11 + 1;
          puVar23 = param_2 + 1;
          uVar5 = (uint)puVar23 & 0xf;
          puVar11 = local_140[uVar5];
          *puVar23 = puVar23[local_1f0] + *puVar11;
          local_140[uVar5] = puVar11 + (bVar16 == 0x10);
          local_258 = local_c8;
          local_250 = local_d0;
          local_248 = local_d8;
          local_240 = local_e0;
          local_270 = local_f8;
          local_238 = local_e8;
          local_220 = local_108;
          local_230 = local_f0;
          local_218 = local_110;
          local_228 = local_100;
          local_210 = local_118;
          local_268 = local_120;
          puVar18 = puVar23 + (bVar16 == 0x10);
          puVar9 = local_120;
          puVar11 = local_140[0];
          puVar23 = local_140[2];
          puVar24 = local_140[3];
          puVar25 = local_140[1];
        }
      }
      auVar27._8_8_ = 0;
      auVar27._0_8_ = c_lo_shuffles[local_1c8];
      local_160 = pshufb(local_160,auVar27);
      local_1f0 = (ulonglong)*(int *)((longlong)&local_180 + (ulonglong)local_160[0] * 4);
      lVar17 = 0;
      if (local_1c8 == 7) {
        lVar17 = 4;
      }
      local_208 = (int *)((longlong)local_208 + lVar17);
      if (local_1f0 < (ulonglong)((longlong)param_5 - (longlong)puVar18)) goto LAB_14f3c2dce;
      puVar1 = puVar18 + local_1f0;
      if (local_1f8 == 9) {
        if (local_200 <= puVar22) goto LAB_14f3c2d8e;
        local_200 = local_200 + -1;
        local_1f8 = (ulonglong)(*local_200 + 6);
        param_2 = puVar18 + local_1f8;
        *(undefined8 *)puVar18 = *(undefined8 *)puVar1;
        *(undefined8 *)(puVar18 + 8) = *(undefined8 *)(puVar1 + 8);
        ppuVar19 = local_c0 + ((uint)param_2 & 7);
        if (0x10 < local_1f8) {
          if ((ulonglong)((longlong)local_1e8 - (longlong)puVar18) < local_1f8) goto LAB_14f3c2d50;
          puVar8 = puVar1 + 0x18;
          *(undefined8 *)(puVar18 + 0x10) = *(undefined8 *)(puVar1 + 0x10);
          for (puVar18 = puVar18 + 0x18; puVar18 < param_2; puVar18 = puVar18 + 8) {
            uVar4 = *(undefined8 *)puVar8;
            puVar8 = puVar8 + 8;
            *(undefined8 *)puVar18 = uVar4;
          }
          lVar12 = local_260 - ((longlong)param_3 - (longlong)param_2 >> 6);
          if (lVar12 < 1) {
            lVar12 = 0;
          }
        }
      }
      else {
        *(undefined8 *)puVar18 = *(undefined8 *)puVar1;
        param_2 = puVar18 + local_1f8;
        ppuVar19 = local_c0 + ((uint)param_2 & 7);
      }
      pbVar7 = *ppuVar19;
    } while (lVar12 < local_260);
  }
  uVar5 = (uint)param_2 & 7;
  pbVar7 = local_c0[uVar5];
  ppuVar19 = local_c0 + uVar5;
  piVar26 = local_208;
  uVar21 = local_1f0;
  while (puVar11 = param_2, 0 < local_260) {
    bVar2 = *pbVar7;
    *ppuVar19 = pbVar7 + 1;
    local_260 = local_260 + -1;
    lVar17 = (ulonglong)(bVar2 & 7) + 2;
    *(int *)((longlong)&local_180 + (longlong)(int)(uint)local_160[7] * 4) = *piVar26;
    lVar12 = (longlong)param_3 - (longlong)puVar11;
    if ((bVar2 & 0x18) == 0x18) {
      uVar13 = (ulonglong)*local_280;
      local_280 = local_280 + 1;
      puVar23 = puVar11;
      uVar10 = uVar13;
      if (lVar12 < (longlong)uVar13) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          (*g_fp_OodleCore_Plugin_Printf)
                    (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x134,
                     "OODLE ERROR : corruption : (match_zone_end - to_ptr) >= lrl\n");
          ooLogErrorPost();
          return false;
        }
        goto code_r0x00014f3c3140;
      }
      for (; uVar10 != 0; uVar10 = uVar10 - 1) {
        uVar5 = (uint)puVar23 & 0xf;
        puVar24 = local_140[uVar5];
        *puVar23 = puVar23[uVar21] + *puVar24;
        local_140[uVar5] = puVar24 + 1;
        puVar23 = puVar23 + 1;
      }
      puVar11 = puVar11 + uVar13;
    }
    else if ((bVar2 & 0x18) == 0) {
      if (lVar12 < 0) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          (*g_fp_OodleCore_Plugin_Printf)
                    (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x18a,
                     "OODLE ERROR : corruption : (match_zone_end - to_ptr) >= 0\n");
          ooLogErrorPost();
          return false;
        }
        goto code_r0x00014f3c3140;
      }
    }
    else {
      uVar10 = (ulonglong)((bVar2 & 0x18) >> 3);
      if (lVar12 < (longlong)uVar10) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          (*g_fp_OodleCore_Plugin_Printf)
                    (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x16d,
                     "OODLE ERROR : corruption : (match_zone_end - to_ptr) >= lrl\n");
          ooLogErrorPost();
          return false;
        }
        goto code_r0x00014f3c3140;
      }
      uVar5 = (uint)puVar11 & 0xf;
      puVar23 = local_140[uVar5];
      *puVar11 = puVar11[uVar21] + *puVar23;
      puVar11 = puVar11 + 1;
      local_140[uVar5] = puVar23 + 1;
      uVar5 = (uint)puVar11 & 0xf;
      puVar23 = local_140[uVar5];
      *puVar11 = puVar11[uVar21] + *puVar23;
      puVar11 = puVar11 + (uVar10 == 2);
      local_140[uVar5] = puVar23 + (uVar10 == 2);
    }
    auVar28._8_8_ = 0;
    auVar28._0_8_ = c_lo_shuffles[bVar2 >> 5];
    local_160 = pshufb(local_160,auVar28);
    uVar21 = (ulonglong)*(int *)((longlong)&local_180 + (ulonglong)local_160[0] * 4);
    lVar12 = 0;
    if ((ulonglong)(bVar2 >> 5) == 7) {
      lVar12 = 4;
    }
    piVar26 = (int *)((longlong)piVar26 + lVar12);
    if (uVar21 < (ulonglong)((longlong)param_5 - (longlong)puVar11)) goto LAB_14f3c2dce;
    puVar23 = puVar11 + uVar21;
    puVar22 = local_280;
    if (lVar17 == 9) {
      if (local_200 <= local_280) goto LAB_14f3c2d8e;
      local_200 = local_200 + -1;
      uVar5 = *local_200 + 6;
      param_2 = puVar11 + uVar5;
      *(undefined8 *)puVar11 = *(undefined8 *)puVar23;
      *(undefined8 *)(puVar11 + 8) = *(undefined8 *)(puVar23 + 8);
      uVar6 = (uint)param_2 & 7;
      pbVar7 = local_c0[uVar6];
      ppuVar19 = local_c0 + uVar6;
      if (0x10 < (ulonglong)uVar5) {
        if ((ulonglong)((longlong)local_1e8 - (longlong)puVar11) < (ulonglong)uVar5)
        goto LAB_14f3c2d50;
        puVar24 = puVar23 + 0x18;
        *(undefined8 *)(puVar11 + 0x10) = *(undefined8 *)(puVar23 + 0x10);
        for (puVar11 = puVar11 + 0x18; puVar11 < param_2; puVar11 = puVar11 + 8) {
          uVar4 = *(undefined8 *)puVar24;
          puVar24 = puVar24 + 8;
          *(undefined8 *)puVar11 = uVar4;
        }
      }
    }
    else {
      *(undefined8 *)puVar11 = *(undefined8 *)puVar23;
      uVar5 = (uint)(puVar11 + lVar17) & 7;
      pbVar7 = local_c0[uVar5];
      ppuVar19 = local_c0 + uVar5;
      param_2 = puVar11 + lVar17;
    }
  }
  if (puVar11 < param_4) {
    lVar12 = (longlong)param_4 - (longlong)puVar11;
    if (0 < lVar12) {
      do {
        uVar5 = (uint)puVar11 & 0xf;
        puVar23 = local_140[uVar5];
        *puVar11 = puVar11[uVar21] + *puVar23;
        puVar11 = puVar11 + 1;
        local_140[uVar5] = puVar23 + 1;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      goto code_r0x00014f3c30c0;
    }
LAB_14f3c30eb:
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto code_r0x00014f3c3140;
    pcVar20 = "OODLE ERROR : corruption : to_ptr == chunk_end\n";
    iVar14 = 0x18d;
  }
  else {
    if (puVar11 != param_4) goto LAB_14f3c30eb;
code_r0x00014f3c30c0:
    if (piVar26 == local_1c0) {
      if (puVar22 == local_200) {
        return true;
      }
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto code_r0x00014f3c3140;
      pcVar20 = "OODLE ERROR : corruption : excesses_ptr == excesses_end_ptr\n";
      iVar14 = 0x197;
    }
    else {
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto code_r0x00014f3c3140;
      pcVar20 = "OODLE ERROR : corruption : offsets_ptr == offsets_end\n";
      iVar14 = 0x196;
    }
  }
  (*g_fp_OodleCore_Plugin_Printf)
            (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_outer.inl",iVar14,pcVar20);
code_r0x00014f3c3140:
  ooLogErrorPost();
  return false;
LAB_14f3c2dce:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x2e2,
               "OODLE ERROR : corruption : (UINTa)neg_offset >= (UINTa) (window_base - to_ptr)\n");
    ooLogErrorPost();
    return false;
  }
  goto code_r0x00014f3c3140;
LAB_14f3c2d8e:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x304,
               "OODLE ERROR : corruption : excesses_end_ptr > excesses_ptr\n");
    ooLogErrorPost();
    return false;
  }
  goto code_r0x00014f3c3140;
LAB_14f3c2d50:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x322,
               "OODLE ERROR : corruption : (UINTa)(match_end - to_ptr) >= ml\n");
    ooLogErrorPost();
    return false;
  }
  goto code_r0x00014f3c3140;
}

// newlz_literals_copy8<1> @ 14f3c3180

void __cdecl
oo2::`anonymous_namespace'::newlz_literals_copy8<1>(uchar *param_1,uchar *param_2,uchar *param_3)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_3;
  return;
}

// newlz_literals_copy8<2> @ 14f3c3190

void __cdecl
oo2::`anonymous_namespace'::newlz_literals_copy8<2>(uchar *param_1,uchar *param_2,uchar *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)param_3;
  *(ulonglong *)param_1 =
       CONCAT17((char)((ulonglong)uVar1 >> 0x38) + (char)((ulonglong)uVar2 >> 0x38),
                CONCAT16((char)((ulonglong)uVar1 >> 0x30) + (char)((ulonglong)uVar2 >> 0x30),
                         CONCAT15((char)((ulonglong)uVar1 >> 0x28) +
                                  (char)((ulonglong)uVar2 >> 0x28),
                                  CONCAT14((char)((ulonglong)uVar1 >> 0x20) +
                                           (char)((ulonglong)uVar2 >> 0x20),
                                           CONCAT13((char)((ulonglong)uVar1 >> 0x18) +
                                                    (char)((ulonglong)uVar2 >> 0x18),
                                                    CONCAT12((char)((ulonglong)uVar1 >> 0x10) +
                                                             (char)((ulonglong)uVar2 >> 0x10),
                                                             CONCAT11((char)((ulonglong)uVar1 >> 8)
                                                                      + (char)((ulonglong)uVar2 >> 8
                                                                              ),
                                                                      (char)uVar1 + (char)uVar2)))))
                        ));
  return;
}

// newlz_literals_copy8<0> @ 14f3c31b0

void __cdecl
oo2::`anonymous_namespace'::newlz_literals_copy8<0>(uchar *param_1,uchar *param_2,uchar *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)param_3;
  *(ulonglong *)param_1 =
       CONCAT17((char)((ulonglong)uVar1 >> 0x38) + (char)((ulonglong)uVar2 >> 0x38),
                CONCAT16((char)((ulonglong)uVar1 >> 0x30) + (char)((ulonglong)uVar2 >> 0x30),
                         CONCAT15((char)((ulonglong)uVar1 >> 0x28) +
                                  (char)((ulonglong)uVar2 >> 0x28),
                                  CONCAT14((char)((ulonglong)uVar1 >> 0x20) +
                                           (char)((ulonglong)uVar2 >> 0x20),
                                           CONCAT13((char)((ulonglong)uVar1 >> 0x18) +
                                                    (char)((ulonglong)uVar2 >> 0x18),
                                                    CONCAT12((char)((ulonglong)uVar1 >> 0x10) +
                                                             (char)((ulonglong)uVar2 >> 0x10),
                                                             CONCAT11((char)((ulonglong)uVar1 >> 8)
                                                                      + (char)((ulonglong)uVar2 >> 8
                                                                              ),
                                                                      (char)uVar1 + (char)uVar2)))))
                        ));
  return;
}

// LastOffset @ 14f3c31d0

int __thiscall oo2::newLZHC_LOs_IndirSSE4::LastOffset(newLZHC_LOs_IndirSSE4 *this)

{
  return this->offsets[(this->mtf_state).m128i_u8[0]];
}

// MTF @ 14f3c31f0

int __thiscall oo2::newLZHC_LOs_IndirSSE4::MTF(newLZHC_LOs_IndirSSE4 *this,long64 param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = c_lo_shuffles[param_1];
  auVar1 = pshufb((undefined1  [16])this->mtf_state,auVar1);
  *(undefined1 (*) [16])(this->mtf_state).m128i_i8 = auVar1;
  return this->offsets[auVar1[0]];
}

// RR_GET32_NATIVE @ 14f3c3220

uint __cdecl oo2::RR_GET32_NATIVE(void *param_1)

{
  return *(uint *)param_1;
}

// RR_GET64_NATIVE @ 14f3c3230

ulong64 __cdecl oo2::RR_GET64_NATIVE(void *param_1)

{
  return *(ulong64 *)param_1;
}

// RR_PUT64_NATIVE @ 14f3c3240

void __cdecl oo2::RR_PUT64_NATIVE(void *param_1,ulong64 param_2)

{
  *(ulong64 *)param_1 = param_2;
  return;
}

// Reset_Neg @ 14f3c3250

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall oo2::newLZHC_LOs_IndirSSE4::Reset_Neg(newLZHC_LOs_IndirSSE4 *this)

{
  long64 lVar1;
  
  lVar1 = _UNK_1531dfca8;
  (this->mtf_state).m128i_i64[0] = ___xmm_00000000000000000706050403020100;
  (this->mtf_state).m128i_i64[1] = lVar1;
  this->offsets[0] = -8;
  this->offsets[1] = -8;
  this->offsets[2] = -8;
  this->offsets[3] = -8;
  this->offsets[4] = -8;
  this->offsets[5] = -8;
  this->offsets[6] = -8;
  return;
}

// newlz_copyliteral_subandF @ 14f3c32a0

void __cdecl oo2::newlz_copyliteral_subandF(uchar *param_1,uchar *param_2,uchar **param_3)

{
  uchar *puVar1;
  uint uVar2;
  
  uVar2 = (uint)param_1 & 0xf;
  puVar1 = param_3[uVar2];
  *param_1 = *puVar1 + *param_2;
  param_3[uVar2] = puVar1 + 1;
  return;
}

// newlz_copyliterals_o1 @ 14f3c32e0

void __cdecl
oo2::newlz_copyliterals_o1(uchar *param_1,long64 param_2,uchar *param_3,uchar **param_4)

{
  byte bVar1;
  uchar *puVar2;
  byte bVar3;
  
  bVar1 = param_1[-1];
  do {
    bVar3 = bVar1 >> 4;
    puVar2 = param_4[bVar3];
    bVar1 = param_3[bVar3];
    *param_1 = bVar1;
    param_3[bVar3] = *puVar2;
    param_4[bVar3] = puVar2 + 1;
    param_2 = param_2 + -1;
    param_1 = param_1 + 1;
  } while (param_2 != 0);
  return;
}

// newlz_copyliterals_subandF @ 14f3c3350

void __cdecl
oo2::newlz_copyliterals_subandF(uchar *param_1,uchar *param_2,long64 param_3,uchar **param_4)

{
  uchar *puVar1;
  uint uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = (uint)param_1 & 0xf;
      puVar1 = param_4[uVar2];
      *param_1 = param_1[lVar3] + *puVar1;
      param_1 = param_1 + 1;
      param_4[uVar2] = puVar1 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// newlz_literals_copy8suband3 @ 14f3c3390

__m128i * __cdecl
oo2::newlz_literals_copy8suband3
          (__m128i *__return_storage_ptr__,uchar *param_1,uchar *param_2,uchar *param_3,
          uchar *param_4,uchar *param_5,uchar *param_6)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  __return_storage_ptr__->m128i_i64[0] =
       CONCAT17((char)((ulonglong)uVar1 >> 0x38) + (char)((uint)*(undefined4 *)param_5 >> 8),
                CONCAT16((char)((ulonglong)uVar1 >> 0x30) +
                         (char)((uint)*(undefined4 *)param_4 >> 8),
                         CONCAT15((char)((ulonglong)uVar1 >> 0x28) +
                                  (char)((uint)*(undefined4 *)param_3 >> 8),
                                  CONCAT14((char)((ulonglong)uVar1 >> 0x20) +
                                           (char)((uint)*(undefined4 *)param_2 >> 8),
                                           CONCAT13((char)((ulonglong)uVar1 >> 0x18) +
                                                    (char)*(undefined4 *)param_5,
                                                    CONCAT12((char)((ulonglong)uVar1 >> 0x10) +
                                                             (char)*(undefined4 *)param_4,
                                                             CONCAT11((char)((ulonglong)uVar1 >> 8)
                                                                      + (char)*(undefined4 *)param_3
                                                                      ,(char)uVar1 +
                                                                       (char)*(undefined4 *)param_2)
                                                            ))))));
  return (__m128i *)param_5;
}

// newlz_literals_copy8suband3_second @ 14f3c33d0

void __cdecl
oo2::newlz_literals_copy8suband3_second
          (uchar *param_1,uchar *param_2,uchar *param_3,uchar *param_4,uchar *param_5,uchar *param_6
          ,__m128i *param_7)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_2;
  *(ulonglong *)param_1 =
       CONCAT17(param_7->m128i_i8[0xf] + (char)((ulonglong)uVar1 >> 0x38),
                CONCAT16(param_7->m128i_i8[0xe] + (char)((ulonglong)uVar1 >> 0x30),
                         CONCAT15(param_7->m128i_i8[0xd] + (char)((ulonglong)uVar1 >> 0x28),
                                  CONCAT14(param_7->m128i_i8[0xc] + (char)((ulonglong)uVar1 >> 0x20)
                                           ,CONCAT13(param_7->m128i_i8[0xb] +
                                                     (char)((ulonglong)uVar1 >> 0x18),
                                                     CONCAT12(param_7->m128i_i8[10] +
                                                              (char)((ulonglong)uVar1 >> 0x10),
                                                              CONCAT11(param_7->m128i_i8[9] +
                                                                       (char)((ulonglong)uVar1 >> 8)
                                                                       ,param_7->m128i_i8[8] +
                                                                        (char)uVar1)))))));
  return;
}

// newlzhc_advance_suband3_lit_offs @ 14f3c3400

__m128i * __cdecl
oo2::newlzhc_advance_suband3_lit_offs
          (__m128i *__return_storage_ptr__,__m128i *param_1,int *param_2,long64 param_3,
          long64 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = (int)param_3;
  uVar1 = (uint)param_2 & 3;
  iVar2 = ((uint)(iVar5 + v_advance_tab[uVar1][0]) >> 2) + __return_storage_ptr__->m128i_i32[0];
  iVar3 = ((uint)(iVar5 + v_advance_tab[uVar1][1]) >> 2) + __return_storage_ptr__->m128i_i32[1];
  iVar4 = ((uint)(iVar5 + v_advance_tab[uVar1][2]) >> 2) + __return_storage_ptr__->m128i_i32[2];
  iVar5 = ((uint)(iVar5 + v_advance_tab[uVar1][3]) >> 2) + __return_storage_ptr__->m128i_i32[3];
  param_1->m128i_i32[0] = iVar2;
  param_1->m128i_i32[1] = iVar3;
  param_1->m128i_i32[2] = iVar4;
  param_1->m128i_i32[3] = iVar5;
  param_1[1].m128i_i32[0] = iVar2;
  *(int *)((longlong)param_1 + 0x14) = iVar3;
  *(int *)((longlong)param_1 + 0x18) = iVar4;
  *(int *)((longlong)param_1 + 0x1c) = iVar5;
  return (__m128i *)v_advance_tab;
}

// newlzhc_init_suband3_lit_offs @ 14f3c3440

__m128i * __cdecl oo2::newlzhc_init_suband3_lit_offs(__m128i *__return_storage_ptr__,int *param_1)

{
  __m128i *in_RAX;
  
  __return_storage_ptr__[1].m128i_i64[0] = __return_storage_ptr__->m128i_i64[0];
  *(long64 *)((longlong)__return_storage_ptr__ + 0x18) = __return_storage_ptr__->m128i_i64[1];
  return in_RAX;
}

// ptr_sub_saturate @ 14f3c3450

uchar * __cdecl oo2::ptr_sub_saturate(uchar *param_1,long64 param_2,uchar *param_3)

{
  uchar *puVar1;
  
  puVar1 = param_1 + -param_2;
  if ((longlong)param_1 - (longlong)param_3 < param_2) {
    puVar1 = param_3;
  }
  return puVar1;
}

// rrPtrDiff32 @ 14f3c3470

int __cdecl oo2::rrPtrDiff32(long64 param_1)

{
  return (int)param_1;
}

// rrPtrDiff @ 14f3c3480

long64 __cdecl oo2::rrPtrDiff(long64 param_1)

{
  return param_1;
}

