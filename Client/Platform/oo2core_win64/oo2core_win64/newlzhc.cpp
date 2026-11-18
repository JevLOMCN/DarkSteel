// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2core_win64
// Functions: 275

// newLZHC_decode_parse_multipacket_lamsub @ 14f348520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
oo2::newLZHC_decode_parse_multipacket_lamsub
          (newLZHC_chunk_arrays *param_1,uchar *param_2,uchar *param_3,uchar *param_4,uchar *param_5
          )

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  uchar uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  uchar *puVar8;
  uchar *puVar9;
  uchar *puVar10;
  uchar *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  uchar **ppuVar14;
  uint *puVar15;
  int iVar16;
  uchar *puVar17;
  ulonglong uVar18;
  longlong lVar19;
  char *pcVar20;
  ulonglong uVar21;
  longlong lVar22;
  uint *puVar23;
  int *piVar24;
  longlong lVar25;
  byte *pbVar26;
  undefined1 auStack_168 [40];
  uchar *local_140;
  uchar *local_138;
  uchar *local_130;
  int *local_128;
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  int local_c4;
  uchar *local_c0 [4];
  uchar *local_a0;
  uchar *local_98;
  uchar *local_90;
  uchar *local_88;
  ulonglong local_80;
  
  local_80 = __security_cookie.value ^ (ulonglong)auStack_168;
  piVar24 = param_1->offsets;
  uVar21 = 0xfffffffffffffff8;
  puVar15 = param_1->excesses;
  local_140 = param_1->literals_ptrs[1];
  local_128 = piVar24 + param_1->offsets_count;
  lVar25 = param_1->packets_count;
  iVar16 = (int)param_3;
  local_e0 = ___xmm_fffffff8fffffff8fffffff8fffffff8;
  uStack_d8 = _UNK_1531db198;
  local_d0 = 0xfffffff8;
  local_c0[0] = param_1->packet_pos_ptrs[-iVar16 & 7];
  local_cc = 0xfffffff8;
  local_c8 = 0xfffffff8;
  local_c0[1] = param_1->packet_pos_ptrs[1U - iVar16 & 7];
  local_c0[2] = param_1->packet_pos_ptrs[2U - iVar16 & 7];
  local_c0[3] = param_1->packet_pos_ptrs[3U - iVar16 & 7];
  local_a0 = param_1->packet_pos_ptrs[-iVar16 - 4U & 7];
  local_98 = param_1->packet_pos_ptrs[-iVar16 - 3U & 7];
  local_90 = param_1->packet_pos_ptrs[-iVar16 - 2U & 7];
  puVar17 = param_1->literals_ptrs[0];
  local_88 = param_1->packet_pos_ptrs[-iVar16 - 1U & 7];
  puVar23 = puVar15 + param_1->excesses_count;
  if (0xf < (longlong)param_4 - (longlong)param_3) {
    param_3 = param_4 + -0x10;
  }
  uVar6 = (uint)param_2 & 7;
  pbVar26 = local_c0[uVar6];
  ppuVar14 = local_c0 + uVar6;
  lVar22 = lVar25 - ((longlong)param_3 - (longlong)param_2 >> 6);
  if (lVar22 < 1) {
    lVar22 = 0;
  }
  puVar10 = param_2;
  local_138 = param_3;
  local_130 = param_4;
  if (lVar22 < lVar25) {
    do {
      bVar3 = *pbVar26;
      *ppuVar14 = pbVar26 + 1;
      local_c4 = *piVar24;
      uVar13 = (ulonglong)(bVar3 >> 5);
      lVar12 = (ulonglong)(bVar3 & 7) + 2;
      lVar25 = lVar25 + -1;
      if ((bVar3 & 0x18) != 0) {
        uVar6 = *puVar15;
        uVar18 = (ulonglong)((bVar3 & 0x18) >> 3);
        if (uVar18 == 3) {
          puVar15 = puVar15 + 1;
          uVar18 = (ulonglong)uVar6;
        }
        lVar19 = uVar18 - 1;
        if (lVar19 < 0) goto LAB_14f348aae;
        uVar4 = *local_140;
        local_140 = local_140 + 1;
        *param_2 = uVar4 + param_2[uVar21];
        puVar10 = param_2 + 1;
        uVar1 = *(undefined8 *)puVar17;
        uVar2 = *(undefined8 *)(puVar10 + uVar21);
        *(ulonglong *)puVar10 =
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
        if (8 < lVar19) {
          uVar1 = *(undefined8 *)(param_2 + uVar21 + 9);
          uVar2 = *(undefined8 *)(puVar17 + 8);
          *(ulonglong *)(param_2 + 9) =
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
          if (0x10 < lVar19) {
            uVar1 = *(undefined8 *)(param_2 + uVar21 + 0x11);
            uVar2 = *(undefined8 *)(puVar17 + 0x10);
            *(ulonglong *)(param_2 + 0x11) =
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
            if (0x17 < lVar19) {
              if ((longlong)param_3 - (longlong)puVar10 < lVar19) {
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
                goto LAB_14f348e42;
              }
              lVar22 = lVar25 - (((longlong)param_3 - (longlong)puVar10) - lVar19 >> 6);
              if (lVar22 < 1) {
                lVar22 = 0;
              }
              puVar10 = param_2 + 0x19;
              puVar17 = puVar17 + 0x18;
              lVar19 = uVar18 - 0x19;
              do {
                uVar1 = *(undefined8 *)(puVar10 + uVar21);
                lVar19 = lVar19 + -8;
                uVar2 = *(undefined8 *)puVar17;
                puVar17 = puVar17 + 8;
                *(ulonglong *)puVar10 =
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
                puVar10 = puVar10 + 8;
              } while (0 < lVar19);
            }
          }
        }
        param_2 = puVar10 + lVar19;
        puVar17 = puVar17 + lVar19;
      }
      iVar16 = *(int *)((longlong)&local_e0 + uVar13 * 4);
      uVar21 = (ulonglong)iVar16;
      uVar1 = *(undefined8 *)(auStack_f8 + uVar13 * 4);
      uVar2 = *(undefined8 *)(auStack_f0 + uVar13 * 4);
      uVar5 = *(undefined8 *)(auStack_e8 + uVar13 * 4);
      *(undefined8 *)(auStack_100 + uVar13 * 4 + 4) = *(undefined8 *)(auStack_100 + uVar13 * 4);
      *(undefined8 *)(auStack_f8 + uVar13 * 4 + 4) = uVar1;
      *(undefined8 *)(auStack_f0 + uVar13 * 4 + 4) = uVar2;
      *(undefined8 *)(auStack_e8 + uVar13 * 4 + 4) = uVar5;
      local_e0 = CONCAT44(local_e0._4_4_,iVar16);
      lVar19 = 0;
      if (uVar13 == 7) {
        lVar19 = 4;
      }
      piVar24 = (int *)((longlong)piVar24 + lVar19);
      if (uVar21 < (ulonglong)((longlong)param_5 - (longlong)param_2)) goto LAB_14f348b6e;
      puVar11 = param_2 + uVar21;
      if (lVar12 == 9) {
        if (puVar23 <= puVar15) goto LAB_14f348b2e;
        uVar6 = puVar23[-1] + 6;
        puVar23 = puVar23 + -1;
        puVar10 = param_2 + uVar6;
        *(undefined8 *)param_2 = *(undefined8 *)puVar11;
        *(undefined8 *)(param_2 + 8) = *(undefined8 *)(puVar11 + 8);
        uVar7 = (uint)puVar10 & 7;
        pbVar26 = local_c0[uVar7];
        ppuVar14 = local_c0 + uVar7;
        if ((uchar *)0x10 < (uchar *)(ulonglong)uVar6) {
          if (param_4 + (-8 - (longlong)param_2) < (uchar *)(ulonglong)uVar6) goto LAB_14f348aee;
          puVar8 = puVar11 + 0x18;
          *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(puVar11 + 0x10);
          for (puVar11 = param_2 + 0x18; puVar11 < puVar10; puVar11 = puVar11 + 8) {
            uVar1 = *(undefined8 *)puVar8;
            puVar8 = puVar8 + 8;
            *(undefined8 *)puVar11 = uVar1;
          }
          lVar22 = lVar25 - ((longlong)param_3 - (longlong)puVar10 >> 6);
          if (lVar22 < 1) {
            lVar22 = 0;
          }
        }
      }
      else {
        *(undefined8 *)param_2 = *(undefined8 *)puVar11;
        puVar10 = param_2 + lVar12;
        uVar6 = (uint)puVar10 & 7;
        pbVar26 = local_c0[uVar6];
        ppuVar14 = local_c0 + uVar6;
      }
      param_2 = puVar10;
    } while (lVar22 < lVar25);
  }
  uVar6 = (uint)puVar10 & 7;
  pbVar26 = local_c0[uVar6];
  ppuVar14 = local_c0 + uVar6;
  while (puVar11 = puVar10, 0 < lVar25) {
    bVar3 = *pbVar26;
    *ppuVar14 = pbVar26 + 1;
    local_c4 = *piVar24;
    lVar22 = (ulonglong)(bVar3 & 7) + 2;
    uVar13 = (ulonglong)(bVar3 >> 5);
    lVar25 = lVar25 + -1;
    if ((bVar3 & 0x18) == 0) {
      if ((longlong)param_3 - (longlong)puVar11 < 0) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          (*g_fp_OodleCore_Plugin_Printf)
                    (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",699,
                     "OODLE ERROR : corruption : (match_zone_end - to_ptr) >= 0\n");
          ooLogErrorPost();
          return false;
        }
        goto LAB_14f348e42;
      }
    }
    else {
      uVar6 = *puVar15;
      uVar18 = (ulonglong)((bVar3 & 0x18) >> 3);
      if (uVar18 == 3) {
        puVar15 = puVar15 + 1;
        uVar18 = (ulonglong)uVar6;
      }
      if ((longlong)param_3 - (longlong)puVar11 < (longlong)uVar18) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          (*g_fp_OodleCore_Plugin_Printf)
                    (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x253,
                     "OODLE ERROR : corruption : (match_zone_end - to_ptr) >= lrl\n");
          ooLogErrorPost();
          return false;
        }
        goto LAB_14f348e42;
      }
      lVar12 = uVar18 - 1;
      if (lVar12 < 0) goto LAB_14f348aae;
      uVar4 = *local_140;
      local_140 = local_140 + 1;
      *puVar11 = uVar4 + puVar11[uVar21];
      puVar10 = puVar11 + 1;
      uVar1 = *(undefined8 *)puVar17;
      uVar2 = *(undefined8 *)(puVar10 + uVar21);
      *(ulonglong *)puVar10 =
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
        uVar1 = *(undefined8 *)(puVar11 + uVar21 + 9);
        uVar2 = *(undefined8 *)(puVar17 + 8);
        *(ulonglong *)(puVar11 + 9) =
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
          uVar1 = *(undefined8 *)(puVar11 + uVar21 + 0x11);
          uVar2 = *(undefined8 *)(puVar17 + 0x10);
          *(ulonglong *)(puVar11 + 0x11) =
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
            puVar10 = puVar11 + 0x19;
            puVar17 = puVar17 + 0x18;
            lVar12 = uVar18 - 0x19;
            do {
              uVar1 = *(undefined8 *)(puVar10 + uVar21);
              lVar12 = lVar12 + -8;
              uVar2 = *(undefined8 *)puVar17;
              puVar17 = puVar17 + 8;
              *(ulonglong *)puVar10 =
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
              puVar10 = puVar10 + 8;
            } while (0 < lVar12);
          }
        }
      }
      puVar11 = puVar10 + lVar12;
      puVar17 = puVar17 + lVar12;
    }
    iVar16 = *(int *)((longlong)&local_e0 + uVar13 * 4);
    uVar21 = (ulonglong)iVar16;
    uVar1 = *(undefined8 *)(auStack_f8 + uVar13 * 4);
    uVar2 = *(undefined8 *)(auStack_f0 + uVar13 * 4);
    uVar5 = *(undefined8 *)(auStack_e8 + uVar13 * 4);
    *(undefined8 *)(auStack_100 + uVar13 * 4 + 4) = *(undefined8 *)(auStack_100 + uVar13 * 4);
    *(undefined8 *)(auStack_f8 + uVar13 * 4 + 4) = uVar1;
    *(undefined8 *)(auStack_f0 + uVar13 * 4 + 4) = uVar2;
    *(undefined8 *)(auStack_e8 + uVar13 * 4 + 4) = uVar5;
    local_e0 = CONCAT44(local_e0._4_4_,iVar16);
    lVar12 = 0;
    if (uVar13 == 7) {
      lVar12 = 4;
    }
    piVar24 = (int *)((longlong)piVar24 + lVar12);
    if (uVar21 < (ulonglong)((longlong)param_5 - (longlong)puVar11)) goto LAB_14f348b6e;
    puVar8 = puVar11 + uVar21;
    if (lVar22 == 9) {
      if (puVar23 <= puVar15) goto LAB_14f348b2e;
      uVar6 = puVar23[-1] + 6;
      puVar23 = puVar23 + -1;
      puVar10 = puVar11 + uVar6;
      *(undefined8 *)puVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)(puVar11 + 8) = *(undefined8 *)(puVar8 + 8);
      uVar7 = (uint)puVar10 & 7;
      pbVar26 = local_c0[uVar7];
      ppuVar14 = local_c0 + uVar7;
      if ((uchar *)0x10 < (uchar *)(ulonglong)uVar6) {
        if (param_4 + (-8 - (longlong)puVar11) < (uchar *)(ulonglong)uVar6) goto LAB_14f348aee;
        puVar9 = puVar8 + 0x18;
        *(undefined8 *)(puVar11 + 0x10) = *(undefined8 *)(puVar8 + 0x10);
        for (puVar11 = puVar11 + 0x18; puVar11 < puVar10; puVar11 = puVar11 + 8) {
          uVar1 = *(undefined8 *)puVar9;
          puVar9 = puVar9 + 8;
          *(undefined8 *)puVar11 = uVar1;
        }
      }
    }
    else {
      *(undefined8 *)puVar11 = *(undefined8 *)puVar8;
      uVar6 = (uint)(puVar11 + lVar22) & 7;
      pbVar26 = local_c0[uVar6];
      ppuVar14 = local_c0 + uVar6;
      puVar10 = puVar11 + lVar22;
    }
  }
  if (puVar11 < param_4) {
    *puVar11 = puVar11[uVar21] + *local_140;
    puVar10 = param_4 + (-1 - (longlong)puVar11);
    puVar11 = puVar11 + 1;
    if (7 < (longlong)puVar10) {
      uVar13 = (ulonglong)puVar10 >> 3;
      puVar10 = puVar10 + uVar13 * -8;
      do {
        uVar1 = *(undefined8 *)(puVar11 + uVar21);
        uVar2 = *(undefined8 *)puVar17;
        puVar17 = puVar17 + 8;
        *(ulonglong *)puVar11 =
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
        puVar11 = puVar11 + 8;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    if (puVar10 != (uchar *)0x0) {
      lVar25 = (longlong)puVar17 - (longlong)puVar11;
      do {
        *puVar11 = puVar11[uVar21] + puVar11[lVar25];
        puVar11 = puVar11 + 1;
        puVar10 = puVar10 + -1;
      } while (puVar10 != (uchar *)0x0);
    }
  }
  if (puVar11 == param_4) {
    if (piVar24 == local_128) {
      if (puVar15 == puVar23) {
        return true;
      }
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto LAB_14f348e42;
      pcVar20 = "OODLE ERROR : corruption : excesses_ptr == excesses_end_ptr\n";
      iVar16 = 0x197;
    }
    else {
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto LAB_14f348e42;
      pcVar20 = "OODLE ERROR : corruption : offsets_ptr == offsets_end\n";
      iVar16 = 0x196;
    }
  }
  else {
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto LAB_14f348e42;
    pcVar20 = "OODLE ERROR : corruption : to_ptr == chunk_end\n";
    iVar16 = 0x18d;
  }
  (*g_fp_OodleCore_Plugin_Printf)
            (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_outer.inl",iVar16,pcVar20);
LAB_14f348e42:
  ooLogErrorPost();
  return false;
LAB_14f348aae:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x264,
               "OODLE ERROR : corruption : lrl >= 0\n");
    ooLogErrorPost();
    return false;
  }
  goto LAB_14f348e42;
LAB_14f348b6e:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x2e2,
               "OODLE ERROR : corruption : (UINTa)neg_offset >= (UINTa) (window_base - to_ptr)\n");
    ooLogErrorPost();
    return false;
  }
  goto LAB_14f348e42;
LAB_14f348b2e:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x304,
               "OODLE ERROR : corruption : excesses_end_ptr > excesses_ptr\n");
    ooLogErrorPost();
    return false;
  }
  goto LAB_14f348e42;
LAB_14f348aee:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x322,
               "OODLE ERROR : corruption : (UINTa)(match_end - to_ptr) >= ml\n");
    ooLogErrorPost();
    return false;
  }
  goto LAB_14f348e42;
}

// newLZHC_decode_parse_multipacket_suband3 @ 14f348e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
oo2::newLZHC_decode_parse_multipacket_suband3
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
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  uchar *puVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  byte *pbVar22;
  longlong lVar23;
  int iVar24;
  uchar *puVar25;
  ulonglong uVar26;
  char *pcVar27;
  uchar *puVar28;
  uchar **ppuVar29;
  uchar *puVar30;
  uchar *puVar31;
  uchar *puVar32;
  uint *puVar33;
  longlong lVar34;
  uint *puVar35;
  undefined1 auStack_188 [72];
  uchar *local_140;
  uchar *local_138;
  int *local_130;
  uchar *local_128;
  uint *local_120;
  int *local_118;
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  int local_c4;
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
  lVar34 = param_1->packets_count;
  local_118 = local_130 + param_1->offsets_count;
  local_140 = param_1->literals_ptrs[0];
  uVar14 = (uint)param_3;
  local_a0[0] = param_1->packet_pos_ptrs[-uVar14 & 7];
  local_a0[1] = param_1->packet_pos_ptrs[1 - uVar14 & 7];
  local_a0[2] = param_1->packet_pos_ptrs[2 - uVar14 & 7];
  local_a0[3] = param_1->packet_pos_ptrs[3 - uVar14 & 7];
  local_80 = param_1->packet_pos_ptrs[-uVar14 - 4 & 7];
  local_78 = param_1->packet_pos_ptrs[-uVar14 - 3 & 7];
  local_70 = param_1->packet_pos_ptrs[-uVar14 - 2 & 7];
  local_68 = param_1->packet_pos_ptrs[-uVar14 - 1 & 7];
  puVar35 = puVar33 + param_1->excesses_count;
  iStack_a4 = (int)local_140;
  local_b0 = *(int *)(param_1->literals_ptrs + (-uVar14 & 3)) - iStack_a4;
  local_c0[0] = local_b0;
  iStack_ac = *(int *)(param_1->literals_ptrs + (1 - uVar14 & 3)) - iStack_a4;
  local_c0[1] = iStack_ac;
  iStack_a8 = *(int *)(param_1->literals_ptrs + (-uVar14 - 2 & 3)) - iStack_a4;
  local_c0[2] = iStack_a8;
  iStack_a4 = *(int *)(param_1->literals_ptrs + (~uVar14 & 3)) - iStack_a4;
  local_c0[3] = iStack_a4;
  uVar26 = 0xfffffffffffffff8;
  local_e0 = ___xmm_fffffff8fffffff8fffffff8fffffff8;
  uStack_d8 = _UNK_1531db198;
  local_d0 = 0xfffffff8;
  local_cc = 0xfffffff8;
  local_c8 = 0xfffffff8;
  if (0xf < (longlong)param_4 - (longlong)param_3) {
    param_3 = param_4 + -0x10;
  }
  uVar14 = (uint)param_2 & 7;
  pbVar22 = local_a0[uVar14];
  ppuVar29 = local_a0 + uVar14;
  lVar20 = lVar34 - ((longlong)param_3 - (longlong)param_2 >> 6);
  if (lVar20 < 1) {
    lVar20 = 0;
  }
  local_138 = param_3;
  local_128 = param_4;
  if (lVar20 < lVar34) {
    do {
      bVar2 = *pbVar22;
      *ppuVar29 = pbVar22 + 1;
      local_c4 = *local_130;
      uVar19 = (ulonglong)((uint)param_2 & 3);
      lVar34 = lVar34 + -1;
      uVar21 = (ulonglong)(bVar2 >> 5);
      lVar23 = (ulonglong)(bVar2 & 7) + 2;
      puVar30 = local_140 + local_c0[uVar19];
      puVar28 = local_140 + local_c0[uVar19 + 1];
      if ((bVar2 & 0x18) == 0x18) {
        uVar14 = *puVar33;
        uVar16 = (ulonglong)uVar14;
        puVar33 = puVar33 + 1;
        puVar31 = local_140 + local_c0[uVar19 + 3];
        uVar4 = *(undefined4 *)puVar30;
        puVar32 = local_140 + local_c0[uVar19 + 2];
        uVar5 = *(undefined4 *)puVar32;
        local_b0 = (uVar14 + v_advance_tab[uVar19][0] >> 2) + local_b0;
        iStack_ac = (uVar14 + v_advance_tab[uVar19][1] >> 2) + iStack_ac;
        iStack_a8 = (uVar14 + v_advance_tab[uVar19][2] >> 2) + iStack_a8;
        iStack_a4 = (uVar14 + v_advance_tab[uVar19][3] >> 2) + iStack_a4;
        local_c0[0] = local_b0;
        local_c0[1] = iStack_ac;
        local_c0[2] = iStack_a8;
        local_c0[3] = iStack_a4;
        uVar6 = *(undefined4 *)puVar28;
        uVar7 = *(undefined4 *)puVar31;
        uVar1 = *(undefined8 *)(param_2 + uVar26);
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
        local_120 = puVar33;
        if (8 < uVar16) {
          uVar1 = *(undefined8 *)(param_2 + uVar26 + 8);
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
          if (0x10 < uVar14) {
            uVar4 = *(undefined4 *)(puVar28 + 4);
            uVar5 = *(undefined4 *)(puVar30 + 4);
            uVar6 = *(undefined4 *)(puVar32 + 4);
            uVar7 = *(undefined4 *)(puVar31 + 4);
            uVar1 = *(undefined8 *)(param_2 + uVar26 + 0x10);
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
            if (0x18 < uVar14) {
              if ((longlong)param_3 - (longlong)param_2 < (longlong)uVar16) {
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
                goto LAB_14f349b62;
              }
              uVar1 = *(undefined8 *)(param_2 + uVar26 + 0x18);
              lVar20 = lVar34 - ((longlong)(((longlong)param_3 - (longlong)param_2) - uVar16) >> 6);
              if (lVar20 < 1) {
                lVar20 = 0;
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
              uVar16 = uVar16 - 0x20;
              if (0 < (longlong)uVar16) {
                puVar28 = puVar28 + 6;
                puVar18 = param_2 + uVar26;
                puVar30 = puVar30 + 6;
                puVar31 = puVar31 + 6;
                puVar32 = puVar32 + 6;
                uVar26 = uVar16;
                puVar25 = param_2;
                do {
                  uVar4 = *(undefined4 *)(puVar28 + 2);
                  uVar16 = uVar26 - 8;
                  uVar5 = *(undefined4 *)(puVar30 + 2);
                  uVar6 = *(undefined4 *)(puVar32 + 2);
                  uVar7 = *(undefined4 *)(puVar31 + 2);
                  uVar1 = *(undefined8 *)puVar18;
                  *(ulonglong *)puVar25 =
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
                  param_2 = puVar25 + 8;
                  if ((longlong)uVar16 < 1) break;
                  uVar1 = *(undefined8 *)(puVar18 + 8);
                  puVar30 = puVar30 + 4;
                  puVar28 = puVar28 + 4;
                  puVar32 = puVar32 + 4;
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
                  puVar31 = puVar31 + 4;
                  param_2 = puVar25 + 0x10;
                  puVar18 = puVar18 + 0x10;
                  uVar16 = uVar26 - 0x10;
                  uVar26 = uVar16;
                  puVar25 = param_2;
                } while (0 < (longlong)uVar16);
              }
            }
          }
        }
        puVar28 = param_2 + uVar16;
      }
      else {
        uVar14 = (bVar2 & 0x18) >> 3;
        iVar24 = v_advance_tab[uVar19][0];
        iVar8 = v_advance_tab[uVar19][1];
        iVar9 = v_advance_tab[uVar19][2];
        iVar10 = v_advance_tab[uVar19][3];
        *param_2 = *puVar30 + param_2[uVar26];
        local_b0 = (uVar14 + iVar24 >> 2) + local_b0;
        iStack_ac = (uVar14 + iVar8 >> 2) + iStack_ac;
        iStack_a8 = (uVar14 + iVar9 >> 2) + iStack_a8;
        iStack_a4 = (uVar14 + iVar10 >> 2) + iStack_a4;
        param_2[1] = param_2[uVar26 + 1] + *puVar28;
        puVar28 = param_2 + uVar14;
        local_c0[0] = local_b0;
        local_c0[1] = iStack_ac;
        local_c0[2] = iStack_a8;
        local_c0[3] = iStack_a4;
      }
      iVar24 = *(int *)((longlong)&local_e0 + uVar21 * 4);
      uVar26 = (ulonglong)iVar24;
      uVar1 = *(undefined8 *)(auStack_f8 + uVar21 * 4);
      uVar12 = *(undefined8 *)(auStack_f0 + uVar21 * 4);
      uVar13 = *(undefined8 *)(auStack_e8 + uVar21 * 4);
      *(undefined8 *)(auStack_100 + uVar21 * 4 + 4) = *(undefined8 *)(auStack_100 + uVar21 * 4);
      *(undefined8 *)(auStack_f8 + uVar21 * 4 + 4) = uVar1;
      *(undefined8 *)(auStack_f0 + uVar21 * 4 + 4) = uVar12;
      *(undefined8 *)(auStack_e8 + uVar21 * 4 + 4) = uVar13;
      local_e0 = CONCAT44(local_e0._4_4_,iVar24);
      lVar17 = 0;
      if (uVar21 == 7) {
        lVar17 = 4;
      }
      local_130 = (int *)((longlong)local_130 + lVar17);
      if (uVar26 < (ulonglong)((longlong)param_5 - (longlong)puVar28)) goto LAB_14f34974e;
      puVar30 = puVar28 + uVar26;
      if (lVar23 == 9) {
        if (puVar35 <= puVar33) goto LAB_14f34970e;
        uVar14 = puVar35[-1] + 6;
        puVar35 = puVar35 + -1;
        param_2 = puVar28 + uVar14;
        *(undefined8 *)puVar28 = *(undefined8 *)puVar30;
        *(undefined8 *)(puVar28 + 8) = *(undefined8 *)(puVar30 + 8);
        uVar15 = (uint)param_2 & 7;
        pbVar22 = local_a0[uVar15];
        ppuVar29 = local_a0 + uVar15;
        if ((uchar *)0x10 < (uchar *)(ulonglong)uVar14) {
          if (param_4 + (-8 - (longlong)puVar28) < (uchar *)(ulonglong)uVar14) goto LAB_14f3496d1;
          puVar32 = puVar30 + 0x18;
          *(undefined8 *)(puVar28 + 0x10) = *(undefined8 *)(puVar30 + 0x10);
          for (puVar28 = puVar28 + 0x18; puVar28 < param_2; puVar28 = puVar28 + 8) {
            uVar1 = *(undefined8 *)puVar32;
            puVar32 = puVar32 + 8;
            *(undefined8 *)puVar28 = uVar1;
          }
          lVar20 = lVar34 - ((longlong)param_3 - (longlong)param_2 >> 6);
          if (lVar20 < 1) {
            lVar20 = 0;
          }
        }
      }
      else {
        *(undefined8 *)puVar28 = *(undefined8 *)puVar30;
        param_2 = puVar28 + lVar23;
        uVar14 = (uint)param_2 & 7;
        pbVar22 = local_a0[uVar14];
        ppuVar29 = local_a0 + uVar14;
      }
    } while (lVar20 < lVar34);
  }
  uVar14 = (uint)param_2 & 7;
  pbVar22 = local_a0[uVar14];
  ppuVar29 = local_a0 + uVar14;
  local_c0[0] = local_b0;
  local_c0[1] = iStack_ac;
  local_c0[2] = iStack_a8;
  local_c0[3] = iStack_a4;
  while (uVar14 = (uint)param_2, local_b0 = local_c0[0], iStack_ac = local_c0[1],
        iStack_a8 = local_c0[2], iStack_a4 = local_c0[3], 0 < lVar34) {
    bVar2 = *pbVar22;
    *ppuVar29 = pbVar22 + 1;
    local_c4 = *local_130;
    uVar21 = (ulonglong)(bVar2 >> 5);
    lVar34 = lVar34 + -1;
    lVar20 = (ulonglong)(bVar2 & 7) + 2;
    if ((bVar2 & 0x18) == 0x18) {
      uVar15 = *puVar33;
      uVar19 = (ulonglong)uVar15;
      puVar33 = puVar33 + 1;
      if ((longlong)param_3 - (longlong)param_2 < (longlong)uVar19) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          (*g_fp_OodleCore_Plugin_Printf)
                    (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x1aa,
                     "OODLE ERROR : corruption : (match_zone_end - to_ptr) >= lrl\n");
          ooLogErrorPost();
          return false;
        }
        goto LAB_14f349b62;
      }
      uVar16 = (ulonglong)(uVar14 & 3);
      puVar31 = local_140 + local_c0[uVar16];
      puVar32 = local_140 + local_c0[uVar16 + 1];
      puVar28 = local_140 + local_c0[uVar16 + 2];
      puVar30 = local_140 + local_c0[uVar16 + 3];
      uVar4 = *(undefined4 *)puVar31;
      uVar5 = *(undefined4 *)puVar28;
      local_b0 = (uVar15 + v_advance_tab[uVar16][0] >> 2) + local_c0[0];
      iStack_ac = (uVar15 + v_advance_tab[uVar16][1] >> 2) + local_c0[1];
      iStack_a8 = (uVar15 + v_advance_tab[uVar16][2] >> 2) + local_c0[2];
      iStack_a4 = (uVar15 + v_advance_tab[uVar16][3] >> 2) + local_c0[3];
      local_c0[0] = local_b0;
      local_c0[1] = iStack_ac;
      local_c0[2] = iStack_a8;
      local_c0[3] = iStack_a4;
      uVar6 = *(undefined4 *)puVar32;
      uVar7 = *(undefined4 *)puVar30;
      uVar1 = *(undefined8 *)(param_2 + uVar26);
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
      if (8 < uVar19) {
        uVar1 = *(undefined8 *)(param_2 + uVar26 + 8);
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
        if (0x10 < uVar15) {
          uVar4 = *(undefined4 *)(puVar32 + 4);
          uVar5 = *(undefined4 *)(puVar31 + 4);
          uVar6 = *(undefined4 *)(puVar28 + 4);
          uVar7 = *(undefined4 *)(puVar30 + 4);
          uVar1 = *(undefined8 *)(param_2 + uVar26 + 0x10);
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
          if (0x18 < uVar15) {
            uVar1 = *(undefined8 *)(param_2 + uVar26 + 0x18);
            uVar19 = uVar19 - 0x20;
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
            if (0 < (longlong)uVar19) {
              puVar30 = puVar30 + 6;
              puVar18 = param_2 + uVar26;
              puVar32 = puVar32 + 6;
              puVar28 = puVar28 + 6;
              puVar31 = puVar31 + 6;
              uVar26 = uVar19;
              puVar25 = param_2;
              do {
                uVar4 = *(undefined4 *)(puVar32 + 2);
                uVar19 = uVar26 - 8;
                uVar5 = *(undefined4 *)(puVar31 + 2);
                uVar6 = *(undefined4 *)(puVar28 + 2);
                uVar7 = *(undefined4 *)(puVar30 + 2);
                uVar1 = *(undefined8 *)puVar18;
                *(ulonglong *)puVar25 =
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
                param_2 = puVar25 + 8;
                if ((longlong)uVar19 < 1) break;
                uVar1 = *(undefined8 *)(puVar18 + 8);
                puVar31 = puVar31 + 4;
                puVar32 = puVar32 + 4;
                puVar28 = puVar28 + 4;
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
                puVar30 = puVar30 + 4;
                param_2 = puVar25 + 0x10;
                puVar18 = puVar18 + 0x10;
                uVar19 = uVar26 - 0x10;
                uVar26 = uVar19;
                puVar25 = param_2;
              } while (0 < (longlong)uVar19);
            }
          }
        }
      }
      puVar28 = param_2 + uVar19;
    }
    else {
      uVar15 = (bVar2 & 0x18) >> 3;
      if ((longlong)param_3 - (longlong)param_2 < (longlong)(ulonglong)uVar15) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          (*g_fp_OodleCore_Plugin_Printf)
                    (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x20d,
                     "OODLE ERROR : corruption : (match_zone_end - to_ptr) >= lrl\n");
          ooLogErrorPost();
          return false;
        }
        goto LAB_14f349b62;
      }
      uVar19 = (ulonglong)(uVar14 & 3);
      iVar24 = local_c0[uVar19 + 1];
      iVar8 = v_advance_tab[uVar19][0];
      iVar9 = v_advance_tab[uVar19][1];
      iVar10 = v_advance_tab[uVar19][2];
      iVar11 = v_advance_tab[uVar19][3];
      *param_2 = param_2[uVar26] + local_140[local_c0[uVar19]];
      local_b0 = (uVar15 + iVar8 >> 2) + local_c0[0];
      iStack_ac = (uVar15 + iVar9 >> 2) + local_c0[1];
      iStack_a8 = (uVar15 + iVar10 >> 2) + local_c0[2];
      iStack_a4 = (uVar15 + iVar11 >> 2) + local_c0[3];
      param_2[1] = param_2[uVar26 + 1] + local_140[iVar24];
      puVar28 = param_2 + uVar15;
      local_c0[0] = local_b0;
      local_c0[1] = iStack_ac;
      local_c0[2] = iStack_a8;
      local_c0[3] = iStack_a4;
    }
    iVar24 = *(int *)((longlong)&local_e0 + uVar21 * 4);
    uVar26 = (ulonglong)iVar24;
    uVar1 = *(undefined8 *)(auStack_f8 + uVar21 * 4);
    uVar12 = *(undefined8 *)(auStack_f0 + uVar21 * 4);
    uVar13 = *(undefined8 *)(auStack_e8 + uVar21 * 4);
    *(undefined8 *)(auStack_100 + uVar21 * 4 + 4) = *(undefined8 *)(auStack_100 + uVar21 * 4);
    *(undefined8 *)(auStack_f8 + uVar21 * 4 + 4) = uVar1;
    *(undefined8 *)(auStack_f0 + uVar21 * 4 + 4) = uVar12;
    *(undefined8 *)(auStack_e8 + uVar21 * 4 + 4) = uVar13;
    local_e0 = CONCAT44(local_e0._4_4_,iVar24);
    lVar23 = 0;
    if (uVar21 == 7) {
      lVar23 = 4;
    }
    local_130 = (int *)((longlong)local_130 + lVar23);
    if (uVar26 < (ulonglong)((longlong)param_5 - (longlong)puVar28)) goto LAB_14f34974e;
    puVar30 = puVar28 + uVar26;
    local_c0[0] = local_b0;
    local_c0[1] = iStack_ac;
    local_c0[2] = iStack_a8;
    local_c0[3] = iStack_a4;
    if (lVar20 == 9) {
      if (puVar35 <= puVar33) goto LAB_14f34970e;
      uVar14 = puVar35[-1] + 6;
      puVar35 = puVar35 + -1;
      param_2 = puVar28 + uVar14;
      *(undefined8 *)puVar28 = *(undefined8 *)puVar30;
      *(undefined8 *)(puVar28 + 8) = *(undefined8 *)(puVar30 + 8);
      uVar15 = (uint)param_2 & 7;
      pbVar22 = local_a0[uVar15];
      ppuVar29 = local_a0 + uVar15;
      if ((uchar *)0x10 < (uchar *)(ulonglong)uVar14) {
        if (param_4 + (-8 - (longlong)puVar28) < (uchar *)(ulonglong)uVar14) goto LAB_14f3496d1;
        puVar32 = puVar30 + 0x18;
        *(undefined8 *)(puVar28 + 0x10) = *(undefined8 *)(puVar30 + 0x10);
        for (puVar28 = puVar28 + 0x18; puVar28 < param_2; puVar28 = puVar28 + 8) {
          uVar1 = *(undefined8 *)puVar32;
          puVar32 = puVar32 + 8;
          *(undefined8 *)puVar28 = uVar1;
        }
      }
    }
    else {
      *(undefined8 *)puVar28 = *(undefined8 *)puVar30;
      param_2 = puVar28 + lVar20;
      uVar14 = (uint)param_2 & 7;
      pbVar22 = local_a0[uVar14];
      ppuVar29 = local_a0 + uVar14;
    }
  }
  puVar28 = param_2;
  if (param_2 < param_4) {
    puVar30 = param_4 + -(longlong)param_2;
    puVar18 = local_140 + local_c0[uVar14 & 3];
    puVar31 = local_140 + local_c0[uVar14 + 1 & 3];
    puVar32 = local_140 + local_c0[uVar14 + 2 & 3];
    local_138 = param_3;
    if (3 < (longlong)puVar30) {
      uVar21 = (ulonglong)puVar30 >> 2;
      local_120 = (uint *)(1 - uVar26);
      puVar25 = param_2 + uVar26 + 2;
      puVar30 = puVar30 + uVar21 * -4;
      puVar28 = local_140 + local_c0[uVar14 + 3 & 3];
      do {
        uVar3 = *puVar18;
        puVar18 = puVar18 + 1;
        *param_2 = puVar25[-2] + uVar3;
        param_2 = param_2 + 4;
        uVar3 = *puVar31;
        puVar31 = puVar31 + 1;
        puVar25[~uVar26] = puVar25[-1] + uVar3;
        uVar3 = *puVar32;
        puVar32 = puVar32 + 1;
        puVar25[-uVar26] = uVar3 + *puVar25;
        *(uchar *)((longlong)local_120 + (longlong)puVar25) = puVar25[1] + *puVar28;
        puVar25 = puVar25 + 4;
        uVar21 = uVar21 - 1;
        puVar28 = puVar28 + 1;
        local_138 = puVar30;
      } while (uVar21 != 0);
    }
    puVar28 = param_2;
    if (0 < (longlong)puVar30) {
      *param_2 = param_2[uVar26] + *puVar18;
      puVar28 = param_2 + 1;
      if (0 < (longlong)(puVar30 + -1)) {
        *puVar28 = puVar28[uVar26] + *puVar31;
        puVar28 = param_2 + 2;
        if (puVar30 + -1 != &DAT_00000001 && -1 < (longlong)(puVar30 + -2)) {
          *puVar28 = puVar28[uVar26] + *puVar32;
          puVar28 = param_2 + 3;
        }
      }
    }
  }
  if (puVar28 == param_4) {
    if (local_130 == local_118) {
      if (puVar33 == puVar35) {
        return true;
      }
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto LAB_14f349b62;
      pcVar27 = "OODLE ERROR : corruption : excesses_ptr == excesses_end_ptr\n";
      iVar24 = 0x197;
    }
    else {
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto LAB_14f349b62;
      pcVar27 = "OODLE ERROR : corruption : offsets_ptr == offsets_end\n";
      iVar24 = 0x196;
    }
  }
  else {
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto LAB_14f349b62;
    pcVar27 = "OODLE ERROR : corruption : to_ptr == chunk_end\n";
    iVar24 = 0x18d;
  }
  (*g_fp_OodleCore_Plugin_Printf)
            (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_outer.inl",iVar24,pcVar27);
LAB_14f349b62:
  ooLogErrorPost();
  return false;
LAB_14f34974e:
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
  goto LAB_14f349b62;
LAB_14f34970e:
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
  goto LAB_14f349b62;
LAB_14f3496d1:
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
  goto LAB_14f349b62;
}

// newLZHC_decode_parse_multipacket_o1 @ 14f349ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
oo2::newLZHC_decode_parse_multipacket_o1
          (newLZHC_chunk_arrays *param_1,uchar *param_2,uchar *param_3,uchar *param_4,uchar *param_5
          )

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  byte *pbVar17;
  ulonglong uVar18;
  int iVar19;
  uchar **ppuVar20;
  char *pcVar21;
  uint *puVar22;
  uint *puVar23;
  longlong lVar24;
  ulonglong uVar25;
  undefined1 auStack_218 [88];
  uchar *local_1c0;
  int *local_1b8;
  uchar *local_1b0;
  ulonglong local_1a8;
  uchar *local_1a0;
  int *local_198;
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  undefined8 local_160;
  undefined8 uStack_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  int local_144;
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
  lVar24 = param_1->packets_count;
  iVar19 = (int)param_3;
  local_c0[0] = param_1->packet_pos_ptrs[-iVar19 & 7];
  local_c0[1] = param_1->packet_pos_ptrs[1U - iVar19 & 7];
  local_c0[2] = param_1->packet_pos_ptrs[2U - iVar19 & 7];
  local_c0[3] = param_1->packet_pos_ptrs[3U - iVar19 & 7];
  local_a0 = param_1->packet_pos_ptrs[-iVar19 - 4U & 7];
  local_98 = param_1->packet_pos_ptrs[-iVar19 - 3U & 7];
  local_90 = param_1->packet_pos_ptrs[-iVar19 - 2U & 7];
  local_88 = param_1->packet_pos_ptrs[-iVar19 - 1U & 7];
  puVar23 = puVar22 + param_1->excesses_count;
  local_80 = *param_1->literals_ptrs[0];
  local_140 = param_1->literals_ptrs[0] + 1;
  puStack_138 = param_1->literals_ptrs[1] + 1;
  local_7f = *param_1->literals_ptrs[1];
  local_7e = *param_1->literals_ptrs[2];
  local_130 = param_1->literals_ptrs[2] + 1;
  local_160 = ___xmm_fffffff8fffffff8fffffff8fffffff8;
  uStack_158 = _UNK_1531db198;
  local_150 = 0xfffffff8;
  local_14c = 0xfffffff8;
  puStack_128 = param_1->literals_ptrs[3] + 1;
  local_7d = *param_1->literals_ptrs[3];
  local_148 = 0xfffffff8;
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
  puStack_c8 = param_1->literals_ptrs[0xf] + 1;
  local_71 = *param_1->literals_ptrs[0xf];
  if (0xf < (longlong)param_4 - (longlong)param_3) {
    param_3 = param_4 + -0x10;
  }
  local_1b0 = param_4 + -8;
  uVar8 = (uint)param_2 & 7;
  pbVar17 = local_c0[uVar8];
  ppuVar20 = local_c0 + uVar8;
  lVar14 = lVar24 - ((longlong)param_3 - (longlong)param_2 >> 6);
  if (lVar14 < 1) {
    lVar14 = 0;
  }
  while (local_1c0 = param_3, local_1a0 = param_4, lVar14 < lVar24) {
    bVar1 = *pbVar17;
    *ppuVar20 = pbVar17 + 1;
    local_144 = *local_1b8;
    local_1a8 = (ulonglong)(bVar1 >> 5);
    lVar16 = (ulonglong)(bVar1 & 7) + 2;
    lVar24 = lVar24 + -1;
    if ((bVar1 & 0x18) == 0x18) {
      uVar8 = *puVar22;
      uVar25 = (ulonglong)uVar8;
      puVar22 = puVar22 + 1;
      if (uVar8 == 0) goto LAB_14f34a20e;
      if (0x18 < uVar8) {
        if ((longlong)param_3 - (longlong)param_2 < (longlong)uVar25) {
          ooLogErrorPre();
          if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
            (*g_fp_OodleCore_Plugin_Printf)
                      (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0xfb,
                       "OODLE ERROR : corruption : (match_zone_end - to_ptr) >= (lrl)\n");
            ooLogErrorPost();
            return false;
          }
          goto LAB_14f34a709;
        }
        lVar10 = lVar24 - ((longlong)(((longlong)param_3 - (longlong)param_2) - uVar25) >> 6);
        lVar14 = 0;
        if (0 < lVar10) {
          lVar14 = lVar10;
        }
      }
      bVar1 = param_2[-1];
      uVar18 = uVar25;
      pbVar17 = param_2;
      do {
        bVar2 = bVar1 >> 4;
        pbVar13 = (&local_140)[bVar2];
        bVar1 = (&local_80)[bVar2];
        *pbVar17 = bVar1;
        (&local_80)[bVar2] = *pbVar13;
        (&local_140)[bVar2] = pbVar13 + 1;
        uVar18 = uVar18 - 1;
        pbVar17 = pbVar17 + 1;
      } while (uVar18 != 0);
      pbVar13 = param_2 + uVar25;
    }
    else {
      pbVar13 = param_2;
      if ((bVar1 & 0x18) != 0) {
        bVar5 = param_2[-1] >> 4;
        pbVar17 = (&local_140)[bVar5];
        bVar2 = (&local_80)[bVar5];
        bVar3 = *pbVar17;
        *param_2 = bVar2;
        pbVar13 = param_2 + 1;
        (&local_80)[bVar5] = bVar3;
        (&local_140)[bVar5] = pbVar17 + 1;
        if ((bVar1 & 0x18) == 0x10) {
          bVar2 = bVar2 >> 4;
          pbVar17 = (&local_140)[bVar2];
          bVar1 = (&local_80)[bVar2];
          (&local_80)[bVar2] = *pbVar17;
          *pbVar13 = bVar1;
          pbVar13 = param_2 + 2;
          (&local_140)[bVar2] = pbVar17 + 1;
        }
      }
    }
    iVar19 = *(int *)((longlong)&local_160 + local_1a8 * 4);
    uVar4 = *(undefined8 *)(auStack_178 + local_1a8 * 4);
    uVar6 = *(undefined8 *)(auStack_170 + local_1a8 * 4);
    uVar7 = *(undefined8 *)(auStack_168 + local_1a8 * 4);
    *(undefined8 *)(auStack_180 + local_1a8 * 4 + 4) = *(undefined8 *)(auStack_180 + local_1a8 * 4);
    *(undefined8 *)(auStack_178 + local_1a8 * 4 + 4) = uVar4;
    *(undefined8 *)(auStack_170 + local_1a8 * 4 + 4) = uVar6;
    *(undefined8 *)(auStack_168 + local_1a8 * 4 + 4) = uVar7;
    local_160 = CONCAT44(local_160._4_4_,iVar19);
    lVar10 = 0;
    if (local_1a8 == 7) {
      lVar10 = 4;
    }
    local_1b8 = (int *)((longlong)local_1b8 + lVar10);
    if ((ulonglong)(longlong)iVar19 < (ulonglong)((longlong)param_5 - (longlong)pbVar13))
    goto LAB_14f34a2ce;
    pbVar11 = pbVar13 + iVar19;
    if (lVar16 == 9) {
      if (puVar23 <= puVar22) goto LAB_14f34a28e;
      puVar23 = puVar23 + -1;
      uVar8 = *puVar23 + 6;
      param_2 = pbVar13 + uVar8;
      *(undefined8 *)pbVar13 = *(undefined8 *)pbVar11;
      *(undefined8 *)(pbVar13 + 8) = *(undefined8 *)(pbVar11 + 8);
      uVar9 = (uint)param_2 & 7;
      pbVar17 = local_c0[uVar9];
      ppuVar20 = local_c0 + uVar9;
      if (0x10 < (ulonglong)uVar8) {
        if ((ulonglong)((longlong)local_1b0 - (longlong)pbVar13) < (ulonglong)uVar8)
        goto LAB_14f34a24e;
        pbVar12 = pbVar11 + 0x18;
        *(undefined8 *)(pbVar13 + 0x10) = *(undefined8 *)(pbVar11 + 0x10);
        for (pbVar13 = pbVar13 + 0x18; pbVar13 < param_2; pbVar13 = pbVar13 + 8) {
          uVar4 = *(undefined8 *)pbVar12;
          pbVar12 = pbVar12 + 8;
          *(undefined8 *)pbVar13 = uVar4;
        }
        lVar14 = lVar24 - ((longlong)param_3 - (longlong)param_2 >> 6);
        if (lVar14 < 1) {
          lVar14 = 0;
        }
      }
    }
    else {
      *(undefined8 *)pbVar13 = *(undefined8 *)pbVar11;
      param_2 = pbVar13 + lVar16;
      uVar8 = (uint)param_2 & 7;
      pbVar17 = local_c0[uVar8];
      ppuVar20 = local_c0 + uVar8;
    }
  }
  uVar8 = (uint)param_2 & 7;
  pbVar17 = local_c0[uVar8];
  ppuVar20 = local_c0 + uVar8;
  while (0 < lVar24) {
    bVar1 = *pbVar17;
    *ppuVar20 = pbVar17 + 1;
    local_144 = *local_1b8;
    uVar25 = (ulonglong)(bVar1 >> 5);
    lVar14 = (ulonglong)(bVar1 & 7) + 2;
    lVar24 = lVar24 + -1;
    if ((bVar1 & 0x18) == 0x18) {
      uVar18 = (ulonglong)*puVar22;
      puVar22 = puVar22 + 1;
      if (uVar18 == 0) goto LAB_14f34a20e;
      if ((longlong)param_3 - (longlong)param_2 < (longlong)uVar18) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          (*g_fp_OodleCore_Plugin_Printf)
                    (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0xf5,
                     "OODLE ERROR : corruption : (match_zone_end - to_ptr) >= lrl\n");
          ooLogErrorPost();
          return false;
        }
        goto LAB_14f34a709;
      }
      bVar1 = param_2[-1];
      uVar15 = uVar18;
      pbVar17 = param_2;
      do {
        bVar2 = bVar1 >> 4;
        pbVar13 = (&local_140)[bVar2];
        bVar1 = (&local_80)[bVar2];
        *pbVar17 = bVar1;
        (&local_80)[bVar2] = *pbVar13;
        (&local_140)[bVar2] = pbVar13 + 1;
        uVar15 = uVar15 - 1;
        pbVar17 = pbVar17 + 1;
      } while (uVar15 != 0);
      pbVar13 = param_2 + uVar18;
    }
    else if ((bVar1 & 0x18) == 0) {
      pbVar13 = param_2;
      if ((longlong)param_3 - (longlong)param_2 < 0) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          (*g_fp_OodleCore_Plugin_Printf)
                    (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x125,
                     "OODLE ERROR : corruption : (match_zone_end - to_ptr) >= 0\n");
          ooLogErrorPost();
          return false;
        }
        goto LAB_14f34a709;
      }
    }
    else {
      uVar18 = (ulonglong)((bVar1 & 0x18) >> 3);
      if ((longlong)param_3 - (longlong)param_2 < (longlong)uVar18) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          (*g_fp_OodleCore_Plugin_Printf)
                    (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x10d,
                     "OODLE ERROR : corruption : (match_zone_end - to_ptr) >= lrl\n");
          ooLogErrorPost();
          return false;
        }
        goto LAB_14f34a709;
      }
      bVar3 = param_2[-1] >> 4;
      pbVar17 = (&local_140)[bVar3];
      bVar1 = (&local_80)[bVar3];
      bVar2 = *pbVar17;
      *param_2 = bVar1;
      (&local_80)[bVar3] = bVar2;
      (&local_140)[bVar3] = pbVar17 + 1;
      pbVar13 = param_2 + 1;
      if (uVar18 == 2) {
        bVar1 = bVar1 >> 4;
        pbVar17 = (&local_140)[bVar1];
        bVar2 = (&local_80)[bVar1];
        (&local_80)[bVar1] = *pbVar17;
        param_2[1] = bVar2;
        (&local_140)[bVar1] = pbVar17 + 1;
        pbVar13 = param_2 + 2;
      }
    }
    iVar19 = *(int *)((longlong)&local_160 + uVar25 * 4);
    uVar4 = *(undefined8 *)(auStack_178 + uVar25 * 4);
    uVar6 = *(undefined8 *)(auStack_170 + uVar25 * 4);
    uVar7 = *(undefined8 *)(auStack_168 + uVar25 * 4);
    *(undefined8 *)(auStack_180 + uVar25 * 4 + 4) = *(undefined8 *)(auStack_180 + uVar25 * 4);
    *(undefined8 *)(auStack_178 + uVar25 * 4 + 4) = uVar4;
    *(undefined8 *)(auStack_170 + uVar25 * 4 + 4) = uVar6;
    *(undefined8 *)(auStack_168 + uVar25 * 4 + 4) = uVar7;
    local_160 = CONCAT44(local_160._4_4_,iVar19);
    lVar16 = 0;
    if (uVar25 == 7) {
      lVar16 = 4;
    }
    local_1b8 = (int *)((longlong)local_1b8 + lVar16);
    if ((ulonglong)(longlong)iVar19 < (ulonglong)((longlong)param_5 - (longlong)pbVar13))
    goto LAB_14f34a2ce;
    pbVar11 = pbVar13 + iVar19;
    if (lVar14 == 9) {
      if (puVar23 <= puVar22) goto LAB_14f34a28e;
      puVar23 = puVar23 + -1;
      uVar8 = *puVar23 + 6;
      param_2 = pbVar13 + uVar8;
      *(undefined8 *)pbVar13 = *(undefined8 *)pbVar11;
      *(undefined8 *)(pbVar13 + 8) = *(undefined8 *)(pbVar11 + 8);
      uVar9 = (uint)param_2 & 7;
      pbVar17 = local_c0[uVar9];
      ppuVar20 = local_c0 + uVar9;
      if (0x10 < (ulonglong)uVar8) {
        if ((ulonglong)((longlong)local_1b0 - (longlong)pbVar13) < (ulonglong)uVar8)
        goto LAB_14f34a24e;
        pbVar12 = pbVar11 + 0x18;
        *(undefined8 *)(pbVar13 + 0x10) = *(undefined8 *)(pbVar11 + 0x10);
        for (pbVar13 = pbVar13 + 0x18; pbVar13 < param_2; pbVar13 = pbVar13 + 8) {
          uVar4 = *(undefined8 *)pbVar12;
          pbVar12 = pbVar12 + 8;
          *(undefined8 *)pbVar13 = uVar4;
        }
      }
    }
    else {
      *(undefined8 *)pbVar13 = *(undefined8 *)pbVar11;
      param_2 = pbVar13 + lVar14;
      uVar8 = (uint)param_2 & 7;
      pbVar17 = local_c0[uVar8];
      ppuVar20 = local_c0 + uVar8;
    }
  }
  if (param_2 < param_4) {
    lVar24 = (longlong)param_4 - (longlong)param_2;
    if (0 < lVar24) {
      bVar1 = param_2[-1];
      do {
        bVar2 = bVar1 >> 4;
        pbVar17 = (&local_140)[bVar2];
        bVar1 = (&local_80)[bVar2];
        *param_2 = bVar1;
        (&local_80)[bVar2] = *pbVar17;
        (&local_140)[bVar2] = pbVar17 + 1;
        lVar24 = lVar24 + -1;
        param_2 = param_2 + 1;
      } while (lVar24 != 0);
      goto LAB_14f34a68e;
    }
LAB_14f34a6b6:
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto LAB_14f34a709;
    pcVar21 = "OODLE ERROR : corruption : to_ptr == chunk_end\n";
    iVar19 = 0x18d;
  }
  else {
    if (param_2 != param_4) goto LAB_14f34a6b6;
LAB_14f34a68e:
    if (local_1b8 == local_198) {
      if (puVar22 == puVar23) {
        return true;
      }
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto LAB_14f34a709;
      pcVar21 = "OODLE ERROR : corruption : excesses_ptr == excesses_end_ptr\n";
      iVar19 = 0x197;
    }
    else {
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto LAB_14f34a709;
      pcVar21 = "OODLE ERROR : corruption : offsets_ptr == offsets_end\n";
      iVar19 = 0x196;
    }
  }
  (*g_fp_OodleCore_Plugin_Printf)
            (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_outer.inl",iVar19,pcVar21);
LAB_14f34a709:
  ooLogErrorPost();
  return false;
LAB_14f34a20e:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0xf2,
               "OODLE ERROR : corruption : lrl > 0\n");
    ooLogErrorPost();
    return false;
  }
  goto LAB_14f34a709;
LAB_14f34a2ce:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x2e2,
               "OODLE ERROR : corruption : (UINTa)neg_offset >= (UINTa) (window_base - to_ptr)\n");
    ooLogErrorPost();
    return false;
  }
  goto LAB_14f34a709;
LAB_14f34a28e:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x304,
               "OODLE ERROR : corruption : excesses_end_ptr > excesses_ptr\n");
    ooLogErrorPost();
    return false;
  }
  goto LAB_14f34a709;
LAB_14f34a24e:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x322,
               "OODLE ERROR : corruption : (UINTa)(match_end - to_ptr) >= ml\n");
    ooLogErrorPost();
    return false;
  }
  goto LAB_14f34a709;
}

// newLZHC_decode_parse_multipacket_subandF @ 14f34a760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
oo2::newLZHC_decode_parse_multipacket_subandF
          (newLZHC_chunk_arrays *param_1,uchar *param_2,uchar *param_3,uchar *param_4,uchar *param_5
          )

{
  uchar *puVar1;
  uchar uVar2;
  undefined8 uVar3;
  byte *pbVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  uchar *puVar9;
  uchar *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  byte bVar16;
  uchar **ppuVar17;
  longlong lVar18;
  uchar *puVar19;
  ulonglong uVar20;
  char *pcVar21;
  ulonglong uVar22;
  uint *puVar23;
  uchar *puVar24;
  uchar *puVar25;
  uchar *puVar26;
  int *piVar27;
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
  uchar *local_208;
  int *local_200;
  uint *local_1f8;
  ulonglong local_1f0;
  ulonglong local_1e8;
  uchar *local_1e0;
  uchar *local_1d8;
  ulonglong local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  int *local_1b8;
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  undefined8 local_160;
  undefined8 uStack_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  int local_144;
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
  local_200 = param_1->offsets;
  iVar14 = (int)param_3;
  puVar23 = param_1->excesses;
  local_1b8 = local_200 + param_1->offsets_count;
  local_260 = param_1->packets_count;
  local_c0[0] = param_1->packet_pos_ptrs[-iVar14 & 7];
  puVar24 = param_1->literals_ptrs[1U - iVar14 & 0xf];
  local_c0[1] = param_1->packet_pos_ptrs[1U - iVar14 & 7];
  local_140[1] = puVar24;
  puVar25 = param_1->literals_ptrs[2U - iVar14 & 0xf];
  local_c0[2] = param_1->packet_pos_ptrs[2U - iVar14 & 7];
  local_140[2] = puVar25;
  puVar10 = param_1->literals_ptrs[3U - iVar14 & 0xf];
  local_c0[3] = param_1->packet_pos_ptrs[3U - iVar14 & 7];
  local_140[3] = puVar10;
  local_a0 = param_1->packet_pos_ptrs[4U - iVar14 & 7];
  local_98 = param_1->packet_pos_ptrs[5U - iVar14 & 7];
  local_90 = param_1->packet_pos_ptrs[6U - iVar14 & 7];
  local_88 = param_1->packet_pos_ptrs[7U - iVar14 & 7];
  local_1f8 = puVar23 + param_1->excesses_count;
  puVar26 = param_1->literals_ptrs[-iVar14 & 0xf];
  local_208 = param_1->literals_ptrs[4U - iVar14 & 0xf];
  local_120 = local_208;
  local_140[0] = puVar26;
  local_160 = ___xmm_fffffff8fffffff8fffffff8fffffff8;
  uStack_158 = _UNK_1531db198;
  local_1e8 = 0xfffffffffffffff8;
  local_150 = 0xfffffff8;
  local_14c = 0xfffffff8;
  local_148 = 0xfffffff8;
  local_210 = param_1->literals_ptrs[5U - iVar14 & 0xf];
  local_118 = local_210;
  local_218 = param_1->literals_ptrs[6U - iVar14 & 0xf];
  local_110 = local_218;
  local_220 = param_1->literals_ptrs[7U - iVar14 & 0xf];
  local_108 = local_220;
  local_228 = param_1->literals_ptrs[-iVar14 - 8U & 0xf];
  local_100 = local_228;
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
  local_1e0 = param_4 + -8;
  ppuVar17 = local_c0 + ((uint)param_2 & 7);
  lVar12 = local_260 - ((longlong)param_3 - (longlong)param_2 >> 6);
  local_280 = puVar23;
  local_268 = puVar10;
  if (lVar12 < 1) {
    lVar12 = 0;
  }
  while( true ) {
    uVar7 = (uint)param_2;
    local_278 = param_3;
    local_1d8 = param_4;
    if (local_260 <= lVar12) break;
    bVar16 = **ppuVar17;
    *ppuVar17 = *ppuVar17 + 1;
    local_1f0 = (ulonglong)(bVar16 >> 5);
    local_1c0 = (ulonglong)(bVar16 & 7) + 2;
    local_260 = local_260 + -1;
    local_144 = *local_200;
    bVar16 = bVar16 & 0x18;
    if (bVar16 == 0x18) {
      uVar22 = (ulonglong)*local_280;
      puVar23 = local_280 + 1;
      local_280 = puVar23;
      if (0x18 < uVar22) {
        if ((longlong)param_3 - (longlong)param_2 < (longlong)uVar22) {
          ooLogErrorPre();
          if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
            (*g_fp_OodleCore_Plugin_Printf)
                      (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x13a,
                       "OODLE ERROR : corruption : (match_zone_end - to_ptr) >= (lrl)\n");
            ooLogErrorPost();
            return false;
          }
          goto code_r0x00014f34b6e0;
        }
        lVar12 = local_260 - ((longlong)(((longlong)param_3 - (longlong)param_2) - uVar22) >> 6);
        if (lVar12 < 1) {
          lVar12 = 0;
        }
        uVar11 = uVar22;
        if (((ulonglong)param_2 & 0xf) != 0) {
          do {
            puVar24 = local_140[uVar7 & 0xf];
            uVar22 = uVar22 - 1;
            *param_2 = param_2[local_1e8] + *puVar24;
            param_2 = param_2 + 1;
            local_140[uVar7 & 0xf] = puVar24 + 1;
            uVar7 = (uint)param_2;
          } while (((ulonglong)param_2 & 0xf) != 0);
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
          local_208 = local_120;
          local_268 = local_140[3];
          puVar10 = local_140[3];
          uVar11 = uVar22;
          puVar24 = local_140[1];
          puVar25 = local_140[2];
          puVar26 = local_140[0];
        }
        uVar22 = (ulonglong)((uint)uVar11 & 0xf);
        lVar18 = (longlong)uVar11 >> 4;
        local_1d0 = uVar22;
        local_1c8 = lVar12;
        if (lVar18 != 0) {
          lVar15 = -local_1e8;
          puVar19 = param_2 + local_1e8 + 2;
          do {
            uVar2 = *puVar26;
            puVar26 = puVar26 + 1;
            *param_2 = puVar19[-2] + uVar2;
            uVar2 = *puVar24;
            puVar24 = puVar24 + 1;
            puVar19[lVar15 + -1] = puVar19[-1] + uVar2;
            uVar2 = *puVar25;
            puVar25 = puVar25 + 1;
            puVar19[lVar15] = *puVar19 + uVar2;
            uVar2 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar19[lVar15 + 1] = puVar19[1] + uVar2;
            uVar2 = *local_208;
            local_208 = local_208 + 1;
            puVar19[lVar15 + 2] = puVar19[2] + uVar2;
            uVar2 = *local_210;
            local_210 = local_210 + 1;
            puVar19[lVar15 + 3] = puVar19[3] + uVar2;
            uVar2 = *local_218;
            local_218 = local_218 + 1;
            puVar19[lVar15 + 4] = puVar19[4] + uVar2;
            uVar2 = *local_220;
            local_220 = local_220 + 1;
            puVar19[lVar15 + 5] = puVar19[5] + uVar2;
            uVar2 = *local_228;
            local_228 = local_228 + 1;
            puVar19[lVar15 + 6] = puVar19[6] + uVar2;
            local_140[3] = puVar10;
            local_120 = local_208;
            local_118 = local_210;
            local_110 = local_218;
            puVar19[lVar15 + 7] = puVar19[7] + *local_270;
            local_270 = local_270 + 1;
            local_f8 = local_270;
            uVar2 = *local_230;
            local_230 = local_230 + 1;
            local_f0 = local_230;
            puVar19[lVar15 + 8] = puVar19[8] + uVar2;
            local_108 = local_220;
            uVar2 = *local_238;
            local_238 = local_238 + 1;
            local_e8 = local_238;
            puVar19[lVar15 + 9] = puVar19[9] + uVar2;
            local_100 = local_228;
            uVar2 = *local_240;
            local_240 = local_240 + 1;
            local_e0 = local_240;
            puVar19[lVar15 + 10] = puVar19[10] + uVar2;
            uVar2 = *local_248;
            local_248 = local_248 + 1;
            puVar19[lVar15 + 0xb] = puVar19[0xb] + uVar2;
            local_d8 = local_248;
            uVar2 = *local_250;
            local_250 = local_250 + 1;
            param_2 = param_2 + 0x10;
            local_d0 = local_250;
            puVar19[lVar15 + 0xc] = puVar19[0xc] + uVar2;
            uVar2 = *local_258;
            local_258 = local_258 + 1;
            local_c8 = local_258;
            puVar19[lVar15 + 0xd] = puVar19[0xd] + uVar2;
            lVar18 = lVar18 + -1;
            puVar19 = puVar19 + 0x10;
          } while (lVar18 != 0);
          local_140[0] = puVar26;
          local_140[1] = puVar24;
          local_140[2] = puVar25;
          local_268 = puVar10;
        }
      }
      puVar19 = param_2;
      uVar11 = uVar22;
      puVar10 = local_268;
      if (uVar22 != 0) {
        do {
          uVar7 = (uint)puVar19 & 0xf;
          puVar24 = local_140[uVar7];
          *puVar19 = puVar19[local_1e8] + *puVar24;
          puVar19 = puVar19 + 1;
          local_140[uVar7] = puVar24 + 1;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
        local_258 = local_c8;
        local_250 = local_d0;
        local_248 = local_d8;
        local_270 = local_f8;
        local_240 = local_e0;
        local_220 = local_108;
        local_238 = local_e8;
        local_218 = local_110;
        local_230 = local_f0;
        local_210 = local_118;
        local_228 = local_100;
        local_208 = local_120;
        local_268 = local_140[3];
        puVar19 = param_2 + uVar22;
        puVar10 = local_140[3];
        puVar24 = local_140[1];
        puVar25 = local_140[2];
        puVar26 = local_140[0];
      }
    }
    else {
      puVar19 = param_2;
      if (bVar16 != 0) {
        puVar24 = local_140[uVar7 & 0xf];
        *param_2 = param_2[local_1e8] + *puVar24;
        local_140[uVar7 & 0xf] = puVar24 + 1;
        puVar25 = param_2 + 1;
        uVar7 = (uint)puVar25 & 0xf;
        puVar24 = local_140[uVar7];
        *puVar25 = puVar25[local_1e8] + *puVar24;
        local_140[uVar7] = puVar24 + (bVar16 == 0x10);
        local_258 = local_c8;
        local_250 = local_d0;
        local_248 = local_d8;
        local_270 = local_f8;
        local_240 = local_e0;
        local_220 = local_108;
        local_238 = local_e8;
        local_218 = local_110;
        local_230 = local_f0;
        local_210 = local_118;
        local_228 = local_100;
        local_208 = local_120;
        local_268 = local_140[3];
        puVar19 = puVar25 + (bVar16 == 0x10);
        puVar10 = local_140[3];
        puVar24 = local_140[1];
        puVar25 = local_140[2];
        puVar26 = local_140[0];
      }
    }
    iVar14 = *(int *)((longlong)&local_160 + local_1f0 * 4);
    local_1e8 = (ulonglong)iVar14;
    uVar3 = *(undefined8 *)(auStack_178 + local_1f0 * 4);
    uVar5 = *(undefined8 *)(auStack_170 + local_1f0 * 4);
    uVar6 = *(undefined8 *)(auStack_168 + local_1f0 * 4);
    *(undefined8 *)(auStack_180 + local_1f0 * 4 + 4) = *(undefined8 *)(auStack_180 + local_1f0 * 4);
    *(undefined8 *)(auStack_178 + local_1f0 * 4 + 4) = uVar3;
    *(undefined8 *)(auStack_170 + local_1f0 * 4 + 4) = uVar5;
    *(undefined8 *)(auStack_168 + local_1f0 * 4 + 4) = uVar6;
    local_160 = CONCAT44(local_160._4_4_,iVar14);
    lVar18 = 0;
    if (local_1f0 == 7) {
      lVar18 = 4;
    }
    local_200 = (int *)((longlong)local_200 + lVar18);
    if (local_1e8 < (ulonglong)((longlong)param_5 - (longlong)puVar19)) goto LAB_14f34b2ae;
    puVar1 = puVar19 + local_1e8;
    if (local_1c0 == 9) {
      if (local_1f8 <= puVar23) goto LAB_14f34b272;
      local_1f8 = local_1f8 + -1;
      uVar7 = *local_1f8 + 6;
      param_2 = puVar19 + uVar7;
      *(undefined8 *)puVar19 = *(undefined8 *)puVar1;
      *(undefined8 *)(puVar19 + 8) = *(undefined8 *)(puVar1 + 8);
      ppuVar17 = local_c0 + ((uint)param_2 & 7);
      if (0x10 < (ulonglong)uVar7) {
        if ((ulonglong)((longlong)local_1e0 - (longlong)puVar19) < (ulonglong)uVar7)
        goto LAB_14f34b239;
        puVar9 = puVar1 + 0x18;
        *(undefined8 *)(puVar19 + 0x10) = *(undefined8 *)(puVar1 + 0x10);
        for (puVar19 = puVar19 + 0x18; puVar19 < param_2; puVar19 = puVar19 + 8) {
          uVar3 = *(undefined8 *)puVar9;
          puVar9 = puVar9 + 8;
          *(undefined8 *)puVar19 = uVar3;
        }
        lVar12 = local_260 - ((longlong)param_3 - (longlong)param_2 >> 6);
        if (lVar12 < 1) {
          lVar12 = 0;
        }
      }
    }
    else {
      *(undefined8 *)puVar19 = *(undefined8 *)puVar1;
      param_2 = puVar19 + local_1c0;
      ppuVar17 = local_c0 + ((uint)param_2 & 7);
    }
  }
  pbVar4 = local_c0[uVar7 & 7];
  ppuVar17 = local_c0 + (uVar7 & 7);
  piVar27 = local_200;
  uVar22 = local_1e8;
  while (puVar24 = param_2, 0 < local_260) {
    bVar16 = *pbVar4;
    *ppuVar17 = pbVar4 + 1;
    local_144 = *piVar27;
    local_260 = local_260 + -1;
    uVar11 = (ulonglong)(bVar16 >> 5);
    lVar12 = (longlong)param_3 - (longlong)puVar24;
    lVar18 = (ulonglong)(bVar16 & 7) + 2;
    if ((bVar16 & 0x18) == 0x18) {
      uVar13 = (ulonglong)*local_280;
      local_280 = local_280 + 1;
      puVar25 = puVar24;
      uVar20 = uVar13;
      if (lVar12 < (longlong)uVar13) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          (*g_fp_OodleCore_Plugin_Printf)
                    (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x134,
                     "OODLE ERROR : corruption : (match_zone_end - to_ptr) >= lrl\n");
          ooLogErrorPost();
          return false;
        }
        goto code_r0x00014f34b6e0;
      }
      for (; uVar20 != 0; uVar20 = uVar20 - 1) {
        uVar7 = (uint)puVar25 & 0xf;
        puVar10 = local_140[uVar7];
        *puVar25 = puVar25[uVar22] + *puVar10;
        local_140[uVar7] = puVar10 + 1;
        puVar25 = puVar25 + 1;
      }
      puVar24 = puVar24 + uVar13;
    }
    else if ((bVar16 & 0x18) == 0) {
      if (lVar12 < 0) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          (*g_fp_OodleCore_Plugin_Printf)
                    (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x18a,
                     "OODLE ERROR : corruption : (match_zone_end - to_ptr) >= 0\n");
          ooLogErrorPost();
          return false;
        }
        goto code_r0x00014f34b6e0;
      }
    }
    else {
      uVar20 = (ulonglong)((bVar16 & 0x18) >> 3);
      if (lVar12 < (longlong)uVar20) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          (*g_fp_OodleCore_Plugin_Printf)
                    (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x16d,
                     "OODLE ERROR : corruption : (match_zone_end - to_ptr) >= lrl\n");
          ooLogErrorPost();
          return false;
        }
        goto code_r0x00014f34b6e0;
      }
      uVar7 = (uint)puVar24 & 0xf;
      puVar25 = local_140[uVar7];
      *puVar24 = puVar24[uVar22] + *puVar25;
      puVar24 = puVar24 + 1;
      local_140[uVar7] = puVar25 + 1;
      uVar7 = (uint)puVar24 & 0xf;
      puVar25 = local_140[uVar7];
      *puVar24 = puVar24[uVar22] + *puVar25;
      puVar24 = puVar24 + (uVar20 == 2);
      local_140[uVar7] = puVar25 + (uVar20 == 2);
    }
    iVar14 = *(int *)((longlong)&local_160 + uVar11 * 4);
    uVar22 = (ulonglong)iVar14;
    uVar3 = *(undefined8 *)(auStack_178 + uVar11 * 4);
    uVar5 = *(undefined8 *)(auStack_170 + uVar11 * 4);
    uVar6 = *(undefined8 *)(auStack_168 + uVar11 * 4);
    *(undefined8 *)(auStack_180 + uVar11 * 4 + 4) = *(undefined8 *)(auStack_180 + uVar11 * 4);
    *(undefined8 *)(auStack_178 + uVar11 * 4 + 4) = uVar3;
    *(undefined8 *)(auStack_170 + uVar11 * 4 + 4) = uVar5;
    *(undefined8 *)(auStack_168 + uVar11 * 4 + 4) = uVar6;
    local_160 = CONCAT44(local_160._4_4_,iVar14);
    lVar12 = 0;
    if (uVar11 == 7) {
      lVar12 = 4;
    }
    piVar27 = (int *)((longlong)piVar27 + lVar12);
    if (uVar22 < (ulonglong)((longlong)param_5 - (longlong)puVar24)) goto LAB_14f34b2ae;
    puVar25 = puVar24 + uVar22;
    puVar23 = local_280;
    if (lVar18 == 9) {
      if (local_1f8 <= local_280) goto LAB_14f34b272;
      local_1f8 = local_1f8 + -1;
      uVar7 = *local_1f8 + 6;
      param_2 = puVar24 + uVar7;
      *(undefined8 *)puVar24 = *(undefined8 *)puVar25;
      *(undefined8 *)(puVar24 + 8) = *(undefined8 *)(puVar25 + 8);
      uVar8 = (uint)param_2 & 7;
      pbVar4 = local_c0[uVar8];
      ppuVar17 = local_c0 + uVar8;
      if (0x10 < (ulonglong)uVar7) {
        if ((ulonglong)((longlong)local_1e0 - (longlong)puVar24) < (ulonglong)uVar7)
        goto LAB_14f34b239;
        puVar10 = puVar25 + 0x18;
        *(undefined8 *)(puVar24 + 0x10) = *(undefined8 *)(puVar25 + 0x10);
        for (puVar24 = puVar24 + 0x18; puVar24 < param_2; puVar24 = puVar24 + 8) {
          uVar3 = *(undefined8 *)puVar10;
          puVar10 = puVar10 + 8;
          *(undefined8 *)puVar24 = uVar3;
        }
      }
    }
    else {
      *(undefined8 *)puVar24 = *(undefined8 *)puVar25;
      uVar7 = (uint)(puVar24 + lVar18) & 7;
      pbVar4 = local_c0[uVar7];
      ppuVar17 = local_c0 + uVar7;
      param_2 = puVar24 + lVar18;
    }
  }
  if (puVar24 < param_4) {
    lVar12 = (longlong)param_4 - (longlong)puVar24;
    if (lVar12 < 1) goto LAB_14f34b68b;
    do {
      uVar7 = (uint)puVar24 & 0xf;
      puVar25 = local_140[uVar7];
      *puVar24 = puVar24[uVar22] + *puVar25;
      puVar24 = puVar24 + 1;
      local_140[uVar7] = puVar25 + 1;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
code_r0x00014f34b660:
    if (piVar27 == local_1b8) {
      if (puVar23 == local_1f8) {
        return true;
      }
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto code_r0x00014f34b6e0;
      pcVar21 = "OODLE ERROR : corruption : excesses_ptr == excesses_end_ptr\n";
      iVar14 = 0x197;
    }
    else {
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto code_r0x00014f34b6e0;
      pcVar21 = "OODLE ERROR : corruption : offsets_ptr == offsets_end\n";
      iVar14 = 0x196;
    }
  }
  else {
    if (puVar24 == param_4) goto code_r0x00014f34b660;
LAB_14f34b68b:
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto code_r0x00014f34b6e0;
    pcVar21 = "OODLE ERROR : corruption : to_ptr == chunk_end\n";
    iVar14 = 0x18d;
  }
  (*g_fp_OodleCore_Plugin_Printf)
            (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_outer.inl",iVar14,pcVar21);
code_r0x00014f34b6e0:
  ooLogErrorPost();
  return false;
LAB_14f34b2ae:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x2e2,
               "OODLE ERROR : corruption : (UINTa)neg_offset >= (UINTa) (window_base - to_ptr)\n");
    ooLogErrorPost();
    return false;
  }
  goto code_r0x00014f34b6e0;
LAB_14f34b272:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x304,
               "OODLE ERROR : corruption : excesses_end_ptr > excesses_ptr\n");
    ooLogErrorPost();
    return false;
  }
  goto code_r0x00014f34b6e0;
LAB_14f34b239:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x322,
               "OODLE ERROR : corruption : (UINTa)(match_end - to_ptr) >= ml\n");
    ooLogErrorPost();
    return false;
  }
  goto code_r0x00014f34b6e0;
}

// newLZHC_decode_parse_raw @ 14f34b720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
oo2::newLZHC_decode_parse_raw
          (newLZHC_chunk_arrays *param_1,uchar *param_2,uchar *param_3,uchar *param_4,uchar *param_5
          )

{
  byte *pbVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uchar *puVar6;
  uint uVar7;
  longlong lVar8;
  uchar *puVar9;
  uchar *puVar10;
  uint *puVar11;
  ulonglong uVar12;
  byte *pbVar13;
  int iVar14;
  ulonglong uVar15;
  uchar *_Src;
  char *pcVar16;
  byte *pbVar17;
  longlong lVar18;
  int *piVar19;
  longlong lVar20;
  uint *puVar21;
  undefined1 auStack_128 [40];
  uchar *local_100;
  uchar *local_f8;
  uchar *local_f0;
  int *local_e8;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  int local_84;
  ulonglong local_80;
  
  local_80 = __security_cookie.value ^ (ulonglong)auStack_128;
  piVar19 = param_1->offsets;
  puVar21 = param_1->excesses;
  pbVar13 = param_1->packets;
  lVar20 = param_1->packets_count;
  _Src = param_1->literals_ptrs[0];
  local_e8 = piVar19 + param_1->offsets_count;
  pbVar1 = pbVar13 + lVar20;
  local_a0 = ___xmm_fffffff8fffffff8fffffff8fffffff8;
  uStack_98 = _UNK_1531db198;
  local_90 = 0xfffffff8;
  puVar11 = puVar21 + param_1->excesses_count;
  local_8c = 0xfffffff8;
  local_88 = 0xfffffff8;
  if (0xf < (longlong)param_4 - (longlong)param_3) {
    param_3 = param_4 + -0x10;
  }
  local_f8 = param_4 + -8;
  lVar8 = (longlong)param_3 - (longlong)param_2 >> 6;
  lVar18 = lVar20;
  if (lVar8 <= lVar20) {
    lVar18 = lVar8;
  }
  pbVar17 = pbVar13 + lVar18;
  local_100 = param_3;
  local_f0 = param_4;
  if (pbVar13 < pbVar17) {
    do {
      bVar2 = *pbVar13;
      lVar20 = lVar20 + -1;
      local_84 = *piVar19;
      uVar15 = (ulonglong)(bVar2 >> 3 & 3);
      uVar12 = (ulonglong)(bVar2 >> 5);
      lVar18 = (ulonglong)(bVar2 & 7) + 2;
      pbVar13 = pbVar13 + 1;
      if (uVar15 == 3) {
        uVar15 = (ulonglong)*puVar21;
        puVar21 = puVar21 + 1;
      }
      *(undefined8 *)param_2 = *(undefined8 *)_Src;
      if (((8 < uVar15) && (*(undefined8 *)(param_2 + 8) = *(undefined8 *)(_Src + 8), 0x10 < uVar15)
          ) && (*(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(_Src + 0x10), 0x18 < uVar15)) {
        if ((longlong)param_3 - (longlong)param_2 < (longlong)uVar15) {
          ooLogErrorPre();
          if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
            (*g_fp_OodleCore_Plugin_Printf)
                      (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x292,
                       "OODLE ERROR : corruption : (match_zone_end - to_ptr) >= (lrl)\n");
            ooLogErrorPost();
            return false;
          }
          goto LAB_14f34bd12;
        }
        lVar8 = (longlong)(((longlong)param_3 - (longlong)param_2) - uVar15) >> 6;
        pbVar17 = pbVar1;
        if (lVar8 <= lVar20) {
          pbVar17 = pbVar13 + lVar8;
        }
        param_2 = param_2 + 0x18;
        _Src = _Src + 0x18;
        uVar15 = uVar15 - 0x18;
        do {
          uVar15 = uVar15 - 8;
          *(undefined8 *)param_2 = *(undefined8 *)_Src;
          _Src = _Src + 8;
          param_2 = param_2 + 8;
        } while (0 < (longlong)uVar15);
      }
      iVar14 = *(int *)((longlong)&local_a0 + uVar12 * 4);
      puVar6 = param_2 + uVar15;
      uVar3 = *(undefined8 *)(auStack_b8 + uVar12 * 4);
      _Src = _Src + uVar15;
      uVar4 = *(undefined8 *)(auStack_b0 + uVar12 * 4);
      uVar5 = *(undefined8 *)(auStack_a8 + uVar12 * 4);
      *(undefined8 *)(auStack_c0 + uVar12 * 4 + 4) = *(undefined8 *)(auStack_c0 + uVar12 * 4);
      *(undefined8 *)(auStack_b8 + uVar12 * 4 + 4) = uVar3;
      *(undefined8 *)(auStack_b0 + uVar12 * 4 + 4) = uVar4;
      *(undefined8 *)(auStack_a8 + uVar12 * 4 + 4) = uVar5;
      local_a0 = CONCAT44(local_a0._4_4_,iVar14);
      lVar8 = 0;
      if (uVar12 == 7) {
        lVar8 = 4;
      }
      piVar19 = (int *)((longlong)piVar19 + lVar8);
      if ((ulonglong)(longlong)iVar14 < (ulonglong)((longlong)param_5 - (longlong)puVar6))
      goto LAB_14f34bbee;
      puVar9 = puVar6 + iVar14;
      if (lVar18 == 9) {
        if (puVar11 <= puVar21) goto LAB_14f34bbb2;
        puVar11 = puVar11 + -1;
        uVar7 = *puVar11 + 6;
        param_2 = puVar6 + uVar7;
        *(undefined8 *)puVar6 = *(undefined8 *)puVar9;
        *(undefined8 *)(puVar6 + 8) = *(undefined8 *)(puVar9 + 8);
        if (0x10 < (ulonglong)uVar7) {
          if ((ulonglong)((longlong)local_f8 - (longlong)puVar6) < (ulonglong)uVar7)
          goto LAB_14f34bb79;
          puVar10 = puVar9 + 0x18;
          *(undefined8 *)(puVar6 + 0x10) = *(undefined8 *)(puVar9 + 0x10);
          for (puVar6 = puVar6 + 0x18; puVar6 < param_2; puVar6 = puVar6 + 8) {
            uVar3 = *(undefined8 *)puVar10;
            puVar10 = puVar10 + 8;
            *(undefined8 *)puVar6 = uVar3;
          }
          lVar18 = (longlong)param_3 - (longlong)param_2 >> 6;
          pbVar17 = pbVar1;
          if (lVar18 <= lVar20) {
            pbVar17 = pbVar13 + lVar18;
          }
        }
      }
      else {
        *(undefined8 *)puVar6 = *(undefined8 *)puVar9;
        param_2 = puVar6 + lVar18;
      }
    } while (pbVar13 < pbVar17);
  }
  while (pbVar13 < pbVar1) {
    bVar2 = *pbVar13;
    pbVar13 = pbVar13 + 1;
    local_84 = *piVar19;
    uVar12 = (ulonglong)(bVar2 >> 3 & 3);
    lVar20 = (ulonglong)(bVar2 & 7) + 2;
    uVar15 = (ulonglong)(bVar2 >> 5);
    if (uVar12 == 3) {
      uVar12 = (ulonglong)*puVar21;
      puVar21 = puVar21 + 1;
    }
    if ((longlong)param_3 - (longlong)param_2 < (longlong)uVar12) {
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
        (*g_fp_OodleCore_Plugin_Printf)
                  (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x253,
                   "OODLE ERROR : corruption : (match_zone_end - to_ptr) >= lrl\n");
        ooLogErrorPost();
        return false;
      }
      goto LAB_14f34bd12;
    }
    *(undefined8 *)param_2 = *(undefined8 *)_Src;
    if (((8 < uVar12) && (*(undefined8 *)(param_2 + 8) = *(undefined8 *)(_Src + 8), 0x10 < uVar12))
       && (*(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(_Src + 0x10), 0x18 < uVar12)) {
      param_2 = param_2 + 0x18;
      _Src = _Src + 0x18;
      uVar12 = uVar12 - 0x18;
      do {
        uVar12 = uVar12 - 8;
        *(undefined8 *)param_2 = *(undefined8 *)_Src;
        _Src = _Src + 8;
        param_2 = param_2 + 8;
      } while (0 < (longlong)uVar12);
    }
    iVar14 = *(int *)((longlong)&local_a0 + uVar15 * 4);
    puVar6 = param_2 + uVar12;
    uVar3 = *(undefined8 *)(auStack_b8 + uVar15 * 4);
    _Src = _Src + uVar12;
    uVar4 = *(undefined8 *)(auStack_b0 + uVar15 * 4);
    uVar5 = *(undefined8 *)(auStack_a8 + uVar15 * 4);
    *(undefined8 *)(auStack_c0 + uVar15 * 4 + 4) = *(undefined8 *)(auStack_c0 + uVar15 * 4);
    *(undefined8 *)(auStack_b8 + uVar15 * 4 + 4) = uVar3;
    *(undefined8 *)(auStack_b0 + uVar15 * 4 + 4) = uVar4;
    *(undefined8 *)(auStack_a8 + uVar15 * 4 + 4) = uVar5;
    local_a0 = CONCAT44(local_a0._4_4_,iVar14);
    lVar18 = 0;
    if (uVar15 == 7) {
      lVar18 = 4;
    }
    piVar19 = (int *)((longlong)piVar19 + lVar18);
    if ((ulonglong)(longlong)iVar14 < (ulonglong)((longlong)param_5 - (longlong)puVar6))
    goto LAB_14f34bbee;
    puVar9 = puVar6 + iVar14;
    if (lVar20 == 9) {
      if (puVar11 <= puVar21) goto LAB_14f34bbb2;
      puVar11 = puVar11 + -1;
      uVar7 = *puVar11 + 6;
      param_2 = puVar6 + uVar7;
      *(undefined8 *)puVar6 = *(undefined8 *)puVar9;
      *(undefined8 *)(puVar6 + 8) = *(undefined8 *)(puVar9 + 8);
      if (0x10 < (ulonglong)uVar7) {
        if ((ulonglong)((longlong)local_f8 - (longlong)puVar6) < (ulonglong)uVar7)
        goto LAB_14f34bb79;
        puVar10 = puVar9 + 0x18;
        *(undefined8 *)(puVar6 + 0x10) = *(undefined8 *)(puVar9 + 0x10);
        for (puVar6 = puVar6 + 0x18; puVar6 < param_2; puVar6 = puVar6 + 8) {
          uVar3 = *(undefined8 *)puVar10;
          puVar10 = puVar10 + 8;
          *(undefined8 *)puVar6 = uVar3;
        }
      }
    }
    else {
      *(undefined8 *)puVar6 = *(undefined8 *)puVar9;
      param_2 = puVar6 + lVar20;
    }
  }
  if (param_2 < param_4) {
    memcpy(param_2,_Src,(longlong)param_4 - (longlong)param_2);
LAB_14f34bc96:
    if (piVar19 == local_e8) {
      if (puVar21 == puVar11) {
        return true;
      }
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto LAB_14f34bd12;
      pcVar16 = "OODLE ERROR : corruption : excesses_ptr == excesses_end_ptr\n";
      iVar14 = 0x197;
    }
    else {
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto LAB_14f34bd12;
      pcVar16 = "OODLE ERROR : corruption : offsets_ptr == offsets_end\n";
      iVar14 = 0x196;
    }
  }
  else {
    if (param_2 == param_4) goto LAB_14f34bc96;
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto LAB_14f34bd12;
    pcVar16 = "OODLE ERROR : corruption : to_ptr == chunk_end\n";
    iVar14 = 0x18d;
  }
  (*g_fp_OodleCore_Plugin_Printf)
            (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_outer.inl",iVar14,pcVar16);
LAB_14f34bd12:
  ooLogErrorPost();
  return false;
LAB_14f34bbee:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x2e2,
               "OODLE ERROR : corruption : (UINTa)neg_offset >= (UINTa) (window_base - to_ptr)\n");
    ooLogErrorPost();
    return false;
  }
  goto LAB_14f34bd12;
LAB_14f34bbb2:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x304,
               "OODLE ERROR : corruption : excesses_end_ptr > excesses_ptr\n");
    ooLogErrorPost();
    return false;
  }
  goto LAB_14f34bd12;
LAB_14f34bb79:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x322,
               "OODLE ERROR : corruption : (UINTa)(match_end - to_ptr) >= ml\n");
    ooLogErrorPost();
    return false;
  }
  goto LAB_14f34bd12;
}

// newLZHC_decode_parse_sub @ 14f34bd60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
oo2::newLZHC_decode_parse_sub
          (newLZHC_chunk_arrays *param_1,uchar *param_2,uchar *param_3,uchar *param_4,uchar *param_5
          )

{
  uint *puVar1;
  uchar *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  uchar *puVar9;
  uchar *puVar10;
  longlong lVar11;
  byte *pbVar12;
  uint *puVar13;
  int iVar14;
  uchar *puVar15;
  ulonglong uVar16;
  char *pcVar17;
  ulonglong uVar18;
  byte *pbVar19;
  longlong lVar20;
  int *piVar21;
  uint *puVar22;
  ulonglong uVar23;
  bool bVar24;
  undefined1 auStack_128 [40];
  uchar *local_100;
  uchar *local_f8;
  byte *local_f0;
  int *local_e8;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  int local_84;
  ulonglong local_80;
  
  local_80 = __security_cookie.value ^ (ulonglong)auStack_128;
  uVar18 = 0xfffffffffffffff8;
  piVar21 = param_1->offsets;
  puVar22 = param_1->excesses;
  pbVar12 = param_1->packets;
  lVar20 = param_1->packets_count;
  local_e8 = piVar21 + param_1->offsets_count;
  local_f0 = pbVar12 + lVar20;
  puVar15 = param_1->literals_ptrs[0];
  puVar13 = puVar22 + param_1->excesses_count;
  local_a0 = ___xmm_fffffff8fffffff8fffffff8fffffff8;
  uStack_98 = _UNK_1531db198;
  local_90 = 0xfffffff8;
  local_8c = 0xfffffff8;
  local_88 = 0xfffffff8;
  if (0xf < (longlong)param_4 - (longlong)param_3) {
    param_3 = param_4 + -0x10;
  }
  lVar8 = (longlong)param_3 - (longlong)param_2 >> 6;
  lVar11 = lVar20;
  if (lVar8 <= lVar20) {
    lVar11 = lVar8;
  }
  pbVar19 = pbVar12 + lVar11;
  local_100 = param_3;
  local_f8 = param_4;
  if (pbVar12 < pbVar19) {
    do {
      bVar5 = *pbVar12;
      lVar20 = lVar20 + -1;
      local_84 = *piVar21;
      uVar3 = *(undefined8 *)(param_2 + uVar18);
      uVar4 = *(undefined8 *)puVar15;
      lVar11 = (ulonglong)(bVar5 & 7) + 2;
      pbVar12 = pbVar12 + 1;
      uVar16 = (ulonglong)(bVar5 >> 3 & 3);
      uVar23 = (ulonglong)(bVar5 >> 5);
      bVar24 = uVar16 == 3;
      if (bVar24) {
        uVar16 = (ulonglong)*puVar22;
      }
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
                                                                 CONCAT11((char)((ulonglong)uVar3 >>
                                                                                8) +
                                                                          (char)((ulonglong)uVar4 >>
                                                                                8),(char)uVar3 +
                                                                                   (char)uVar4))))))
                   );
      if (bVar24) {
        puVar22 = puVar22 + 1;
      }
      if (8 < uVar16) {
        uVar3 = *(undefined8 *)(param_2 + uVar18 + 8);
        uVar4 = *(undefined8 *)(puVar15 + 8);
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
        if (0x10 < uVar16) {
          uVar3 = *(undefined8 *)(param_2 + uVar18 + 0x10);
          uVar4 = *(undefined8 *)(puVar15 + 0x10);
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
          if (0x18 < uVar16) {
            if ((longlong)param_3 - (longlong)param_2 < (longlong)uVar16) {
              ooLogErrorPre();
              if (g_fp_OodleCore_Plugin_Printf !=
                  (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
                (*g_fp_OodleCore_Plugin_Printf)
                          (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",
                           0x292,"OODLE ERROR : corruption : (match_zone_end - to_ptr) >= (lrl)\n");
                ooLogErrorPost();
                return false;
              }
              goto LAB_14f34c430;
            }
            lVar8 = (longlong)(((longlong)param_3 - (longlong)param_2) - uVar16) >> 6;
            pbVar19 = local_f0;
            if (lVar8 <= lVar20) {
              pbVar19 = pbVar12 + lVar8;
            }
            param_2 = param_2 + 0x18;
            puVar15 = puVar15 + 0x18;
            uVar16 = uVar16 - 0x18;
            do {
              uVar3 = *(undefined8 *)(param_2 + uVar18);
              uVar16 = uVar16 - 8;
              uVar4 = *(undefined8 *)puVar15;
              puVar15 = puVar15 + 8;
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
            } while (0 < (longlong)uVar16);
          }
        }
      }
      iVar14 = *(int *)((longlong)&local_a0 + uVar23 * 4);
      uVar18 = (ulonglong)iVar14;
      puVar10 = param_2 + uVar16;
      uVar3 = *(undefined8 *)(auStack_b8 + uVar23 * 4);
      puVar15 = puVar15 + uVar16;
      uVar4 = *(undefined8 *)(auStack_b0 + uVar23 * 4);
      uVar6 = *(undefined8 *)(auStack_a8 + uVar23 * 4);
      *(undefined8 *)(auStack_c0 + uVar23 * 4 + 4) = *(undefined8 *)(auStack_c0 + uVar23 * 4);
      *(undefined8 *)(auStack_b8 + uVar23 * 4 + 4) = uVar3;
      *(undefined8 *)(auStack_b0 + uVar23 * 4 + 4) = uVar4;
      *(undefined8 *)(auStack_a8 + uVar23 * 4 + 4) = uVar6;
      local_a0 = CONCAT44(local_a0._4_4_,iVar14);
      lVar8 = 0;
      if (uVar23 == 7) {
        lVar8 = 4;
      }
      piVar21 = (int *)((longlong)piVar21 + lVar8);
      if (uVar18 < (ulonglong)((longlong)param_5 - (longlong)puVar10)) goto LAB_14f34c2ae;
      puVar2 = puVar10 + uVar18;
      if (lVar11 == 9) {
        if (puVar13 <= puVar22) goto LAB_14f34c272;
        puVar1 = puVar13 + -1;
        puVar13 = puVar13 + -1;
        uVar7 = *puVar1 + 6;
        param_2 = puVar10 + uVar7;
        *(undefined8 *)puVar10 = *(undefined8 *)puVar2;
        *(undefined8 *)(puVar10 + 8) = *(undefined8 *)(puVar2 + 8);
        if ((uchar *)0x10 < (uchar *)(ulonglong)uVar7) {
          if (param_4 + (-8 - (longlong)puVar10) < (uchar *)(ulonglong)uVar7) goto LAB_14f34c239;
          puVar9 = puVar2 + 0x18;
          *(undefined8 *)(puVar10 + 0x10) = *(undefined8 *)(puVar2 + 0x10);
          for (puVar10 = puVar10 + 0x18; puVar10 < param_2; puVar10 = puVar10 + 8) {
            uVar3 = *(undefined8 *)puVar9;
            puVar9 = puVar9 + 8;
            *(undefined8 *)puVar10 = uVar3;
          }
          lVar11 = (longlong)param_3 - (longlong)param_2 >> 6;
          pbVar19 = local_f0;
          if (lVar11 <= lVar20) {
            pbVar19 = pbVar12 + lVar11;
          }
        }
      }
      else {
        *(undefined8 *)puVar10 = *(undefined8 *)puVar2;
        param_2 = puVar10 + lVar11;
      }
    } while (pbVar12 < pbVar19);
  }
  while (pbVar12 < local_f0) {
    bVar5 = *pbVar12;
    pbVar12 = pbVar12 + 1;
    local_84 = *piVar21;
    uVar23 = (ulonglong)(bVar5 >> 3 & 3);
    lVar20 = (ulonglong)(bVar5 & 7) + 2;
    uVar16 = (ulonglong)(bVar5 >> 5);
    if (uVar23 == 3) {
      uVar23 = (ulonglong)*puVar22;
      puVar22 = puVar22 + 1;
    }
    if ((longlong)param_3 - (longlong)param_2 < (longlong)uVar23) {
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
        (*g_fp_OodleCore_Plugin_Printf)
                  (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x253,
                   "OODLE ERROR : corruption : (match_zone_end - to_ptr) >= lrl\n");
        ooLogErrorPost();
        return false;
      }
      goto LAB_14f34c430;
    }
    uVar3 = *(undefined8 *)(param_2 + uVar18);
    uVar4 = *(undefined8 *)puVar15;
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
    if (8 < uVar23) {
      uVar3 = *(undefined8 *)(param_2 + uVar18 + 8);
      uVar4 = *(undefined8 *)(puVar15 + 8);
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
      if (0x10 < uVar23) {
        uVar3 = *(undefined8 *)(param_2 + uVar18 + 0x10);
        uVar4 = *(undefined8 *)(puVar15 + 0x10);
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
        if (0x18 < uVar23) {
          param_2 = param_2 + 0x18;
          puVar15 = puVar15 + 0x18;
          uVar23 = uVar23 - 0x18;
          do {
            uVar3 = *(undefined8 *)(param_2 + uVar18);
            uVar23 = uVar23 - 8;
            uVar4 = *(undefined8 *)puVar15;
            puVar15 = puVar15 + 8;
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
          } while (0 < (longlong)uVar23);
        }
      }
    }
    iVar14 = *(int *)((longlong)&local_a0 + uVar16 * 4);
    uVar18 = (ulonglong)iVar14;
    puVar10 = param_2 + uVar23;
    uVar3 = *(undefined8 *)(auStack_b8 + uVar16 * 4);
    puVar15 = puVar15 + uVar23;
    uVar4 = *(undefined8 *)(auStack_b0 + uVar16 * 4);
    uVar6 = *(undefined8 *)(auStack_a8 + uVar16 * 4);
    *(undefined8 *)(auStack_c0 + uVar16 * 4 + 4) = *(undefined8 *)(auStack_c0 + uVar16 * 4);
    *(undefined8 *)(auStack_b8 + uVar16 * 4 + 4) = uVar3;
    *(undefined8 *)(auStack_b0 + uVar16 * 4 + 4) = uVar4;
    *(undefined8 *)(auStack_a8 + uVar16 * 4 + 4) = uVar6;
    local_a0 = CONCAT44(local_a0._4_4_,iVar14);
    lVar11 = 0;
    if (uVar16 == 7) {
      lVar11 = 4;
    }
    piVar21 = (int *)((longlong)piVar21 + lVar11);
    if (uVar18 < (ulonglong)((longlong)param_5 - (longlong)puVar10)) goto LAB_14f34c2ae;
    puVar2 = puVar10 + uVar18;
    if (lVar20 == 9) {
      if (puVar13 <= puVar22) goto LAB_14f34c272;
      puVar1 = puVar13 + -1;
      puVar13 = puVar13 + -1;
      uVar7 = *puVar1 + 6;
      param_2 = puVar10 + uVar7;
      *(undefined8 *)puVar10 = *(undefined8 *)puVar2;
      *(undefined8 *)(puVar10 + 8) = *(undefined8 *)(puVar2 + 8);
      if ((uchar *)0x10 < (uchar *)(ulonglong)uVar7) {
        if (param_4 + (-8 - (longlong)puVar10) < (uchar *)(ulonglong)uVar7) goto LAB_14f34c239;
        puVar9 = puVar2 + 0x18;
        *(undefined8 *)(puVar10 + 0x10) = *(undefined8 *)(puVar2 + 0x10);
        for (puVar10 = puVar10 + 0x18; puVar10 < param_2; puVar10 = puVar10 + 8) {
          uVar3 = *(undefined8 *)puVar9;
          puVar9 = puVar9 + 8;
          *(undefined8 *)puVar10 = uVar3;
        }
      }
    }
    else {
      *(undefined8 *)puVar10 = *(undefined8 *)puVar2;
      param_2 = puVar10 + lVar20;
    }
  }
  if (param_2 < param_4) {
    uVar16 = (longlong)param_4 - (longlong)param_2;
    if (7 < (longlong)uVar16) {
      uVar23 = uVar16 >> 3;
      uVar16 = uVar16 + uVar23 * -8;
      do {
        uVar3 = *(undefined8 *)(param_2 + uVar18);
        uVar4 = *(undefined8 *)puVar15;
        puVar15 = puVar15 + 8;
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
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
    }
    if (uVar16 != 0) {
      lVar20 = (longlong)puVar15 - (longlong)param_2;
      do {
        *param_2 = param_2[lVar20] + param_2[uVar18];
        param_2 = param_2 + 1;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
  }
  if (param_2 == param_4) {
    if (piVar21 == local_e8) {
      if (puVar22 == puVar13) {
        return true;
      }
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto LAB_14f34c430;
      pcVar17 = "OODLE ERROR : corruption : excesses_ptr == excesses_end_ptr\n";
      iVar14 = 0x197;
    }
    else {
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto LAB_14f34c430;
      pcVar17 = "OODLE ERROR : corruption : offsets_ptr == offsets_end\n";
      iVar14 = 0x196;
    }
  }
  else {
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto LAB_14f34c430;
    pcVar17 = "OODLE ERROR : corruption : to_ptr == chunk_end\n";
    iVar14 = 0x18d;
  }
  (*g_fp_OodleCore_Plugin_Printf)
            (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_outer.inl",iVar14,pcVar17);
LAB_14f34c430:
  ooLogErrorPost();
  return false;
LAB_14f34c2ae:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x2e2,
               "OODLE ERROR : corruption : (UINTa)neg_offset >= (UINTa) (window_base - to_ptr)\n");
    ooLogErrorPost();
    return false;
  }
  goto LAB_14f34c430;
LAB_14f34c272:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x304,
               "OODLE ERROR : corruption : excesses_end_ptr > excesses_ptr\n");
    ooLogErrorPost();
    return false;
  }
  goto LAB_14f34c430;
LAB_14f34c239:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x322,
               "OODLE ERROR : corruption : (UINTa)(match_end - to_ptr) >= ml\n");
    ooLogErrorPost();
    return false;
  }
  goto LAB_14f34c430;
}

// newLZHC_decode_parse_lamsub @ 14f34c480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
oo2::newLZHC_decode_parse_lamsub
          (newLZHC_chunk_arrays *param_1,uchar *param_2,uchar *param_3,uchar *param_4,uchar *param_5
          )

{
  uint *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  uchar uVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  uchar *puVar9;
  uchar *puVar10;
  uchar *puVar11;
  byte *pbVar12;
  byte *pbVar13;
  ulonglong uVar14;
  int iVar15;
  uchar *puVar16;
  ulonglong uVar17;
  char *pcVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint *puVar21;
  int *piVar22;
  longlong lVar23;
  uint *puVar24;
  undefined1 auStack_128 [40];
  uchar *local_100;
  uchar *local_f8;
  uchar *local_f0;
  byte *local_e8;
  int *local_e0;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  int local_84;
  ulonglong local_80;
  
  local_80 = __security_cookie.value ^ (ulonglong)auStack_128;
  piVar22 = param_1->offsets;
  uVar19 = 0xfffffffffffffff8;
  pbVar13 = param_1->packets;
  lVar23 = param_1->packets_count;
  puVar24 = param_1->excesses;
  local_100 = param_1->literals_ptrs[1];
  local_e0 = piVar22 + param_1->offsets_count;
  local_e8 = pbVar13 + lVar23;
  puVar16 = param_1->literals_ptrs[0];
  puVar21 = puVar24 + param_1->excesses_count;
  local_a0 = ___xmm_fffffff8fffffff8fffffff8fffffff8;
  uStack_98 = _UNK_1531db198;
  local_90 = 0xfffffff8;
  local_8c = 0xfffffff8;
  local_88 = 0xfffffff8;
  if (0xf < (longlong)param_4 - (longlong)param_3) {
    param_3 = param_4 + -0x10;
  }
  lVar8 = (longlong)param_3 - (longlong)param_2 >> 6;
  lVar20 = lVar23;
  if (lVar8 <= lVar23) {
    lVar20 = lVar8;
  }
  pbVar12 = pbVar13 + lVar20;
  local_f8 = param_3;
  local_f0 = param_4;
  if (pbVar13 < pbVar12) {
    do {
      bVar4 = *pbVar13;
      lVar23 = lVar23 + -1;
      local_84 = *piVar22;
      uVar14 = (ulonglong)(bVar4 >> 5);
      lVar20 = (ulonglong)(bVar4 & 7) + 2;
      pbVar13 = pbVar13 + 1;
      if ((bVar4 & 0x18) != 0) {
        uVar7 = *puVar24;
        uVar17 = (ulonglong)((bVar4 & 0x18) >> 3);
        if (uVar17 == 3) {
          puVar24 = puVar24 + 1;
          uVar17 = (ulonglong)uVar7;
        }
        lVar8 = uVar17 - 1;
        if (lVar8 < 0) goto LAB_14f34c90e;
        uVar5 = *local_100;
        local_100 = local_100 + 1;
        *param_2 = uVar5 + param_2[uVar19];
        puVar10 = param_2 + 1;
        uVar2 = *(undefined8 *)puVar16;
        uVar3 = *(undefined8 *)(puVar10 + uVar19);
        *(ulonglong *)puVar10 =
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
        if (8 < lVar8) {
          uVar2 = *(undefined8 *)(param_2 + uVar19 + 9);
          uVar3 = *(undefined8 *)(puVar16 + 8);
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
          if (0x10 < lVar8) {
            uVar2 = *(undefined8 *)(param_2 + uVar19 + 0x11);
            uVar3 = *(undefined8 *)(puVar16 + 0x10);
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
            if (0x17 < lVar8) {
              if ((longlong)param_3 - (longlong)puVar10 < lVar8) {
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
                goto LAB_14f34cc82;
              }
              lVar8 = ((longlong)param_3 - (longlong)puVar10) - lVar8 >> 6;
              pbVar12 = local_e8;
              if (lVar8 <= lVar23) {
                pbVar12 = pbVar13 + lVar8;
              }
              puVar10 = param_2 + 0x19;
              puVar16 = puVar16 + 0x18;
              lVar8 = uVar17 - 0x19;
              do {
                uVar2 = *(undefined8 *)(puVar10 + uVar19);
                lVar8 = lVar8 + -8;
                uVar3 = *(undefined8 *)puVar16;
                puVar16 = puVar16 + 8;
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
                                                                  CONCAT12((char)((ulonglong)uVar2
                                                                                 >> 0x10) +
                                                                           (char)((ulonglong)uVar3
                                                                                 >> 0x10),
                                                                           CONCAT11((char)((
                                                  ulonglong)uVar2 >> 8) +
                                                  (char)((ulonglong)uVar3 >> 8),
                                                  (char)uVar2 + (char)uVar3)))))));
                puVar10 = puVar10 + 8;
              } while (0 < lVar8);
            }
          }
        }
        param_2 = puVar10 + lVar8;
        puVar16 = puVar16 + lVar8;
      }
      iVar15 = *(int *)((longlong)&local_a0 + uVar14 * 4);
      uVar19 = (ulonglong)iVar15;
      uVar2 = *(undefined8 *)(auStack_b8 + uVar14 * 4);
      uVar3 = *(undefined8 *)(auStack_b0 + uVar14 * 4);
      uVar6 = *(undefined8 *)(auStack_a8 + uVar14 * 4);
      *(undefined8 *)(auStack_c0 + uVar14 * 4 + 4) = *(undefined8 *)(auStack_c0 + uVar14 * 4);
      *(undefined8 *)(auStack_b8 + uVar14 * 4 + 4) = uVar2;
      *(undefined8 *)(auStack_b0 + uVar14 * 4 + 4) = uVar3;
      *(undefined8 *)(auStack_a8 + uVar14 * 4 + 4) = uVar6;
      local_a0 = CONCAT44(local_a0._4_4_,iVar15);
      lVar8 = 0;
      if (uVar14 == 7) {
        lVar8 = 4;
      }
      piVar22 = (int *)((longlong)piVar22 + lVar8);
      if (uVar19 < (ulonglong)((longlong)param_5 - (longlong)param_2)) goto LAB_14f34c9ce;
      puVar10 = param_2 + uVar19;
      if (lVar20 == 9) {
        if (puVar21 <= puVar24) goto LAB_14f34c98e;
        puVar1 = puVar21 + -1;
        puVar21 = puVar21 + -1;
        uVar7 = *puVar1 + 6;
        puVar11 = param_2 + uVar7;
        *(undefined8 *)param_2 = *(undefined8 *)puVar10;
        *(undefined8 *)(param_2 + 8) = *(undefined8 *)(puVar10 + 8);
        if ((uchar *)0x10 < (uchar *)(ulonglong)uVar7) {
          if (param_4 + (-8 - (longlong)param_2) < (uchar *)(ulonglong)uVar7) goto LAB_14f34c94e;
          puVar9 = puVar10 + 0x18;
          *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(puVar10 + 0x10);
          for (puVar10 = param_2 + 0x18; puVar10 < puVar11; puVar10 = puVar10 + 8) {
            uVar2 = *(undefined8 *)puVar9;
            puVar9 = puVar9 + 8;
            *(undefined8 *)puVar10 = uVar2;
          }
          lVar20 = (longlong)param_3 - (longlong)puVar11 >> 6;
          pbVar12 = local_e8;
          if (lVar20 <= lVar23) {
            pbVar12 = pbVar13 + lVar20;
          }
        }
      }
      else {
        *(undefined8 *)param_2 = *(undefined8 *)puVar10;
        puVar11 = param_2 + lVar20;
      }
      param_2 = puVar11;
    } while (pbVar13 < pbVar12);
  }
  while (puVar10 = param_2, pbVar13 < local_e8) {
    bVar4 = *pbVar13;
    pbVar13 = pbVar13 + 1;
    local_84 = *piVar22;
    uVar14 = (ulonglong)(bVar4 >> 5);
    lVar23 = (ulonglong)(bVar4 & 7) + 2;
    if ((bVar4 & 0x18) == 0) {
      if ((longlong)param_3 - (longlong)puVar10 < 0) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          (*g_fp_OodleCore_Plugin_Printf)
                    (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",699,
                     "OODLE ERROR : corruption : (match_zone_end - to_ptr) >= 0\n");
          ooLogErrorPost();
          return false;
        }
        goto LAB_14f34cc82;
      }
    }
    else {
      uVar7 = *puVar24;
      uVar17 = (ulonglong)((bVar4 & 0x18) >> 3);
      if (uVar17 == 3) {
        puVar24 = puVar24 + 1;
        uVar17 = (ulonglong)uVar7;
      }
      if ((longlong)param_3 - (longlong)puVar10 < (longlong)uVar17) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          (*g_fp_OodleCore_Plugin_Printf)
                    (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x253,
                     "OODLE ERROR : corruption : (match_zone_end - to_ptr) >= lrl\n");
          ooLogErrorPost();
          return false;
        }
        goto LAB_14f34cc82;
      }
      lVar20 = uVar17 - 1;
      if (lVar20 < 0) goto LAB_14f34c90e;
      uVar5 = *local_100;
      local_100 = local_100 + 1;
      *puVar10 = uVar5 + puVar10[uVar19];
      puVar11 = puVar10 + 1;
      uVar2 = *(undefined8 *)puVar16;
      uVar3 = *(undefined8 *)(puVar11 + uVar19);
      *(ulonglong *)puVar11 =
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
      if (8 < lVar20) {
        uVar2 = *(undefined8 *)(puVar10 + uVar19 + 9);
        uVar3 = *(undefined8 *)(puVar16 + 8);
        *(ulonglong *)(puVar10 + 9) =
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
        if (0x10 < lVar20) {
          uVar2 = *(undefined8 *)(puVar10 + uVar19 + 0x11);
          uVar3 = *(undefined8 *)(puVar16 + 0x10);
          *(ulonglong *)(puVar10 + 0x11) =
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
          if (0x17 < lVar20) {
            puVar11 = puVar10 + 0x19;
            puVar16 = puVar16 + 0x18;
            lVar20 = uVar17 - 0x19;
            do {
              uVar2 = *(undefined8 *)(puVar11 + uVar19);
              lVar20 = lVar20 + -8;
              uVar3 = *(undefined8 *)puVar16;
              puVar16 = puVar16 + 8;
              *(ulonglong *)puVar11 =
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
              puVar11 = puVar11 + 8;
            } while (0 < lVar20);
          }
        }
      }
      puVar10 = puVar11 + lVar20;
      puVar16 = puVar16 + lVar20;
    }
    iVar15 = *(int *)((longlong)&local_a0 + uVar14 * 4);
    uVar19 = (ulonglong)iVar15;
    uVar2 = *(undefined8 *)(auStack_b8 + uVar14 * 4);
    uVar3 = *(undefined8 *)(auStack_b0 + uVar14 * 4);
    uVar6 = *(undefined8 *)(auStack_a8 + uVar14 * 4);
    *(undefined8 *)(auStack_c0 + uVar14 * 4 + 4) = *(undefined8 *)(auStack_c0 + uVar14 * 4);
    *(undefined8 *)(auStack_b8 + uVar14 * 4 + 4) = uVar2;
    *(undefined8 *)(auStack_b0 + uVar14 * 4 + 4) = uVar3;
    *(undefined8 *)(auStack_a8 + uVar14 * 4 + 4) = uVar6;
    local_a0 = CONCAT44(local_a0._4_4_,iVar15);
    lVar20 = 0;
    if (uVar14 == 7) {
      lVar20 = 4;
    }
    piVar22 = (int *)((longlong)piVar22 + lVar20);
    if (uVar19 < (ulonglong)((longlong)param_5 - (longlong)puVar10)) goto LAB_14f34c9ce;
    puVar11 = puVar10 + uVar19;
    if (lVar23 == 9) {
      if (puVar21 <= puVar24) goto LAB_14f34c98e;
      puVar1 = puVar21 + -1;
      puVar21 = puVar21 + -1;
      uVar7 = *puVar1 + 6;
      param_2 = puVar10 + uVar7;
      *(undefined8 *)puVar10 = *(undefined8 *)puVar11;
      *(undefined8 *)(puVar10 + 8) = *(undefined8 *)(puVar11 + 8);
      if ((uchar *)0x10 < (uchar *)(ulonglong)uVar7) {
        if (param_4 + (-8 - (longlong)puVar10) < (uchar *)(ulonglong)uVar7) goto LAB_14f34c94e;
        puVar9 = puVar11 + 0x18;
        *(undefined8 *)(puVar10 + 0x10) = *(undefined8 *)(puVar11 + 0x10);
        for (puVar10 = puVar10 + 0x18; puVar10 < param_2; puVar10 = puVar10 + 8) {
          uVar2 = *(undefined8 *)puVar9;
          puVar9 = puVar9 + 8;
          *(undefined8 *)puVar10 = uVar2;
        }
      }
    }
    else {
      *(undefined8 *)puVar10 = *(undefined8 *)puVar11;
      param_2 = puVar10 + lVar23;
    }
  }
  if (puVar10 < param_4) {
    *puVar10 = puVar10[uVar19] + *local_100;
    puVar11 = param_4 + (-1 - (longlong)puVar10);
    puVar10 = puVar10 + 1;
    if (7 < (longlong)puVar11) {
      uVar14 = (ulonglong)puVar11 >> 3;
      puVar11 = puVar11 + uVar14 * -8;
      do {
        uVar2 = *(undefined8 *)(puVar10 + uVar19);
        uVar3 = *(undefined8 *)puVar16;
        puVar16 = puVar16 + 8;
        *(ulonglong *)puVar10 =
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
        puVar10 = puVar10 + 8;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    if (puVar11 != (uchar *)0x0) {
      lVar23 = (longlong)puVar16 - (longlong)puVar10;
      do {
        *puVar10 = puVar10[uVar19] + puVar10[lVar23];
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + -1;
      } while (puVar11 != (uchar *)0x0);
    }
  }
  if (puVar10 == param_4) {
    if (piVar22 == local_e0) {
      if (puVar24 == puVar21) {
        return true;
      }
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto LAB_14f34cc82;
      pcVar18 = "OODLE ERROR : corruption : excesses_ptr == excesses_end_ptr\n";
      iVar15 = 0x197;
    }
    else {
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto LAB_14f34cc82;
      pcVar18 = "OODLE ERROR : corruption : offsets_ptr == offsets_end\n";
      iVar15 = 0x196;
    }
  }
  else {
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto LAB_14f34cc82;
    pcVar18 = "OODLE ERROR : corruption : to_ptr == chunk_end\n";
    iVar15 = 0x18d;
  }
  (*g_fp_OodleCore_Plugin_Printf)
            (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_outer.inl",iVar15,pcVar18);
LAB_14f34cc82:
  ooLogErrorPost();
  return false;
LAB_14f34c90e:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x264,
               "OODLE ERROR : corruption : lrl >= 0\n");
    ooLogErrorPost();
    return false;
  }
  goto LAB_14f34cc82;
LAB_14f34c9ce:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x2e2,
               "OODLE ERROR : corruption : (UINTa)neg_offset >= (UINTa) (window_base - to_ptr)\n");
    ooLogErrorPost();
    return false;
  }
  goto LAB_14f34cc82;
LAB_14f34c98e:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x304,
               "OODLE ERROR : corruption : excesses_end_ptr > excesses_ptr\n");
    ooLogErrorPost();
    return false;
  }
  goto LAB_14f34cc82;
LAB_14f34c94e:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x322,
               "OODLE ERROR : corruption : (UINTa)(match_end - to_ptr) >= ml\n");
    ooLogErrorPost();
    return false;
  }
  goto LAB_14f34cc82;
}

// newLZHC_decode_parse_suband3 @ 14f34ccc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
oo2::newLZHC_decode_parse_suband3
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
  undefined8 uVar14;
  undefined8 uVar15;
  uint uVar16;
  uchar *puVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  uchar *puVar21;
  byte *pbVar22;
  longlong lVar23;
  longlong lVar24;
  int iVar25;
  uchar *puVar26;
  ulonglong uVar27;
  char *pcVar28;
  uchar *puVar29;
  uchar *puVar30;
  ulonglong uVar31;
  uchar *puVar32;
  uint *puVar33;
  byte *pbVar34;
  uint *puVar35;
  undefined1 auStack_188 [72];
  int *local_140;
  uchar *local_138;
  uchar *local_130;
  byte *local_128;
  uchar *local_120;
  uchar *local_118;
  longlong local_110;
  uint *local_108;
  int *local_100;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  int local_84;
  int local_80 [4];
  int local_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStack_188;
  local_138 = param_1->literals_ptrs[0];
  pbVar34 = param_1->packets;
  lVar24 = param_1->packets_count;
  puVar33 = param_1->excesses;
  local_140 = param_1->offsets;
  local_128 = pbVar34 + lVar24;
  uVar27 = 0xfffffffffffffff8;
  local_100 = local_140 + param_1->offsets_count;
  local_a0 = ___xmm_fffffff8fffffff8fffffff8fffffff8;
  uStack_98 = _UNK_1531db198;
  local_90 = 0xfffffff8;
  local_8c = 0xfffffff8;
  local_88 = 0xfffffff8;
  puVar35 = puVar33 + param_1->excesses_count;
  uVar16 = (uint)param_3;
  iStack_64 = (int)local_138;
  local_70 = *(int *)(param_1->literals_ptrs + (-uVar16 & 3)) - iStack_64;
  local_80[0] = local_70;
  iStack_6c = *(int *)(param_1->literals_ptrs + (1 - uVar16 & 3)) - iStack_64;
  local_80[1] = iStack_6c;
  iStack_68 = *(int *)(param_1->literals_ptrs + (-uVar16 - 2 & 3)) - iStack_64;
  local_80[2] = iStack_68;
  iStack_64 = *(int *)(param_1->literals_ptrs + (~uVar16 & 3)) - iStack_64;
  local_80[3] = iStack_64;
  if (0xf < (longlong)param_4 - (longlong)param_3) {
    param_3 = param_4 + -0x10;
  }
  lVar19 = (longlong)param_3 - (longlong)param_2 >> 6;
  lVar23 = lVar24;
  if (lVar19 <= lVar24) {
    lVar23 = lVar19;
  }
  pbVar22 = pbVar34 + lVar23;
  local_130 = param_3;
  local_120 = param_4;
  if (pbVar34 < pbVar22) {
    do {
      bVar3 = *pbVar34;
      lVar24 = lVar24 + -1;
      local_84 = *local_140;
      uVar31 = (ulonglong)(bVar3 >> 5);
      uVar20 = (ulonglong)((uint)param_2 & 3);
      pbVar34 = pbVar34 + 1;
      lVar23 = (ulonglong)(bVar3 & 7) + 2;
      puVar30 = local_138 + local_80[uVar20];
      puVar29 = local_138 + local_80[uVar20 + 1];
      local_110 = lVar24;
      if ((bVar3 & 0x18) == 0x18) {
        uVar16 = *puVar33;
        uVar18 = (ulonglong)uVar16;
        puVar33 = puVar33 + 1;
        local_118 = local_138 + local_80[uVar20 + 3];
        uVar5 = *(undefined4 *)puVar30;
        puVar32 = local_138 + local_80[uVar20 + 2];
        uVar6 = *(undefined4 *)puVar32;
        local_70 = (uVar16 + v_advance_tab[uVar20][0] >> 2) + local_70;
        iStack_6c = (uVar16 + v_advance_tab[uVar20][1] >> 2) + iStack_6c;
        iStack_68 = (uVar16 + v_advance_tab[uVar20][2] >> 2) + iStack_68;
        iStack_64 = (uVar16 + v_advance_tab[uVar20][3] >> 2) + iStack_64;
        local_80[0] = local_70;
        local_80[1] = iStack_6c;
        local_80[2] = iStack_68;
        local_80[3] = iStack_64;
        uVar7 = *(undefined4 *)puVar29;
        uVar8 = *(undefined4 *)local_118;
        uVar2 = *(undefined8 *)(param_2 + uVar27);
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
        local_108 = puVar33;
        if (8 < uVar18) {
          uVar2 = *(undefined8 *)(param_2 + uVar27 + 8);
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
          if (0x10 < uVar16) {
            uVar5 = *(undefined4 *)(puVar29 + 4);
            uVar6 = *(undefined4 *)(puVar30 + 4);
            uVar7 = *(undefined4 *)(puVar32 + 4);
            uVar8 = *(undefined4 *)(local_118 + 4);
            uVar2 = *(undefined8 *)(param_2 + uVar27 + 0x10);
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
            if (0x18 < uVar16) {
              if ((longlong)param_3 - (longlong)param_2 < (longlong)uVar18) {
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
                goto code_r0x00014f34d880;
              }
              uVar2 = *(undefined8 *)(param_2 + uVar27 + 0x18);
              lVar19 = (longlong)(((longlong)param_3 - (longlong)param_2) - uVar18) >> 6;
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
              pbVar22 = local_128;
              if (lVar19 <= lVar24) {
                pbVar22 = pbVar34 + lVar19;
              }
              puVar21 = param_2 + 0x20;
              uVar20 = uVar18 - 0x20;
              uVar18 = uVar20;
              param_2 = puVar21;
              if (0 < (longlong)uVar20) {
                puVar17 = puVar21 + uVar27;
                puVar26 = local_118 + 6;
                puVar32 = puVar32 + 6;
                puVar29 = puVar29 + 6;
                puVar30 = puVar30 + 6;
                do {
                  uVar5 = *(undefined4 *)(puVar29 + 2);
                  uVar6 = *(undefined4 *)(puVar30 + 2);
                  uVar7 = *(undefined4 *)(puVar32 + 2);
                  uVar8 = *(undefined4 *)(puVar26 + 2);
                  uVar2 = *(undefined8 *)puVar17;
                  *(ulonglong *)puVar21 =
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
                  uVar18 = uVar20 - 8;
                  param_2 = puVar21 + 8;
                  if ((longlong)(uVar20 - 8) < 1) break;
                  uVar2 = *(undefined8 *)(puVar17 + 8);
                  puVar30 = puVar30 + 4;
                  puVar29 = puVar29 + 4;
                  puVar32 = puVar32 + 4;
                  *(ulonglong *)(puVar21 + 8) =
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
                  puVar26 = puVar26 + 4;
                  puVar21 = puVar21 + 0x10;
                  puVar17 = puVar17 + 0x10;
                  uVar20 = uVar20 - 0x10;
                  uVar18 = uVar20;
                  param_2 = puVar21;
                } while (0 < (longlong)uVar20);
              }
            }
          }
        }
      }
      else {
        uVar16 = (bVar3 & 0x18) >> 3;
        iVar25 = v_advance_tab[uVar20][0];
        iVar10 = v_advance_tab[uVar20][1];
        iVar11 = v_advance_tab[uVar20][2];
        iVar12 = v_advance_tab[uVar20][3];
        *param_2 = *puVar30 + param_2[uVar27];
        local_70 = (uVar16 + iVar25 >> 2) + local_70;
        iStack_6c = (uVar16 + iVar10 >> 2) + iStack_6c;
        iStack_68 = (uVar16 + iVar11 >> 2) + iStack_68;
        iStack_64 = (uVar16 + iVar12 >> 2) + iStack_64;
        param_2[1] = param_2[uVar27 + 1] + *puVar29;
        local_80[0] = local_70;
        local_80[1] = iStack_6c;
        local_80[2] = iStack_68;
        local_80[3] = iStack_64;
        uVar18 = (ulonglong)uVar16;
      }
      iVar25 = *(int *)((longlong)&local_a0 + uVar31 * 4);
      uVar27 = (ulonglong)iVar25;
      puVar29 = param_2 + uVar18;
      uVar2 = *(undefined8 *)(auStack_b8 + uVar31 * 4);
      uVar14 = *(undefined8 *)(auStack_b0 + uVar31 * 4);
      uVar15 = *(undefined8 *)(auStack_a8 + uVar31 * 4);
      *(undefined8 *)(auStack_c0 + uVar31 * 4 + 4) = *(undefined8 *)(auStack_c0 + uVar31 * 4);
      *(undefined8 *)(auStack_b8 + uVar31 * 4 + 4) = uVar2;
      *(undefined8 *)(auStack_b0 + uVar31 * 4 + 4) = uVar14;
      *(undefined8 *)(auStack_a8 + uVar31 * 4 + 4) = uVar15;
      local_a0 = CONCAT44(local_a0._4_4_,iVar25);
      lVar19 = 0;
      if (uVar31 == 7) {
        lVar19 = 4;
      }
      local_140 = (int *)((longlong)local_140 + lVar19);
      if (uVar27 < (ulonglong)((longlong)param_5 - (longlong)puVar29)) goto LAB_14f34d4ae;
      puVar30 = puVar29 + uVar27;
      if (lVar23 == 9) {
        if (puVar35 <= puVar33) goto LAB_14f34d472;
        puVar1 = puVar35 + -1;
        puVar35 = puVar35 + -1;
        uVar16 = *puVar1 + 6;
        param_2 = puVar29 + uVar16;
        *(undefined8 *)puVar29 = *(undefined8 *)puVar30;
        *(undefined8 *)(puVar29 + 8) = *(undefined8 *)(puVar30 + 8);
        if ((uchar *)0x10 < (uchar *)(ulonglong)uVar16) {
          if (param_4 + (-8 - (longlong)puVar29) < (uchar *)(ulonglong)uVar16) goto LAB_14f34d439;
          puVar32 = puVar30 + 0x18;
          *(undefined8 *)(puVar29 + 0x10) = *(undefined8 *)(puVar30 + 0x10);
          for (puVar29 = puVar29 + 0x18; puVar29 < param_2; puVar29 = puVar29 + 8) {
            uVar2 = *(undefined8 *)puVar32;
            puVar32 = puVar32 + 8;
            *(undefined8 *)puVar29 = uVar2;
          }
          lVar23 = (longlong)param_3 - (longlong)param_2 >> 6;
          pbVar22 = local_128;
          if (lVar23 <= lVar24) {
            pbVar22 = pbVar34 + lVar23;
          }
        }
      }
      else {
        *(undefined8 *)puVar29 = *(undefined8 *)puVar30;
        param_2 = puVar29 + lVar23;
      }
    } while (pbVar34 < pbVar22);
  }
  while (uVar16 = (uint)param_2, local_80[0] = local_70, local_80[1] = iStack_6c,
        local_80[2] = iStack_68, local_80[3] = iStack_64, pbVar34 < local_128) {
    bVar3 = *pbVar34;
    pbVar34 = pbVar34 + 1;
    local_84 = *local_140;
    uVar20 = (ulonglong)(bVar3 >> 5);
    lVar24 = (ulonglong)(bVar3 & 7) + 2;
    if ((bVar3 & 0x18) == 0x18) {
      uVar9 = *puVar33;
      uVar31 = (ulonglong)uVar9;
      puVar33 = puVar33 + 1;
      if ((longlong)param_3 - (longlong)param_2 < (longlong)uVar31) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          (*g_fp_OodleCore_Plugin_Printf)
                    (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x1aa,
                     "OODLE ERROR : corruption : (match_zone_end - to_ptr) >= lrl\n");
          ooLogErrorPost();
          return false;
        }
        goto code_r0x00014f34d880;
      }
      uVar18 = (ulonglong)(uVar16 & 3);
      puVar21 = local_138 + local_80[uVar18];
      puVar32 = local_138 + local_80[uVar18 + 1];
      puVar29 = local_138 + local_80[uVar18 + 2];
      puVar30 = local_138 + local_80[uVar18 + 3];
      uVar5 = *(undefined4 *)puVar21;
      uVar6 = *(undefined4 *)puVar29;
      local_70 = (uVar9 + v_advance_tab[uVar18][0] >> 2) + local_70;
      iStack_6c = (uVar9 + v_advance_tab[uVar18][1] >> 2) + iStack_6c;
      iStack_68 = (uVar9 + v_advance_tab[uVar18][2] >> 2) + iStack_68;
      iStack_64 = (uVar9 + v_advance_tab[uVar18][3] >> 2) + iStack_64;
      local_80[0] = local_70;
      local_80[1] = iStack_6c;
      local_80[2] = iStack_68;
      local_80[3] = iStack_64;
      uVar7 = *(undefined4 *)puVar32;
      uVar8 = *(undefined4 *)puVar30;
      uVar2 = *(undefined8 *)(param_2 + uVar27);
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
      if (8 < uVar31) {
        uVar2 = *(undefined8 *)(param_2 + uVar27 + 8);
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
          uVar5 = *(undefined4 *)(puVar32 + 4);
          uVar6 = *(undefined4 *)(puVar21 + 4);
          uVar7 = *(undefined4 *)(puVar29 + 4);
          uVar8 = *(undefined4 *)(puVar30 + 4);
          uVar2 = *(undefined8 *)(param_2 + uVar27 + 0x10);
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
            uVar2 = *(undefined8 *)(param_2 + uVar27 + 0x18);
            uVar31 = uVar31 - 0x20;
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
            if (0 < (longlong)uVar31) {
              puVar30 = puVar30 + 6;
              puVar17 = param_2 + uVar27;
              puVar32 = puVar32 + 6;
              puVar29 = puVar29 + 6;
              puVar21 = puVar21 + 6;
              uVar27 = uVar31;
              puVar26 = param_2;
              do {
                uVar5 = *(undefined4 *)(puVar32 + 2);
                uVar31 = uVar27 - 8;
                uVar6 = *(undefined4 *)(puVar21 + 2);
                uVar7 = *(undefined4 *)(puVar29 + 2);
                uVar8 = *(undefined4 *)(puVar30 + 2);
                uVar2 = *(undefined8 *)puVar17;
                *(ulonglong *)puVar26 =
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
                param_2 = puVar26 + 8;
                if ((longlong)uVar31 < 1) break;
                uVar2 = *(undefined8 *)(puVar17 + 8);
                puVar21 = puVar21 + 4;
                puVar32 = puVar32 + 4;
                puVar29 = puVar29 + 4;
                *(ulonglong *)param_2 =
                     CONCAT17((char)((ulonglong)uVar2 >> 0x38) + (char)((uint)uVar8 >> 0x18),
                              CONCAT16((char)((ulonglong)uVar2 >> 0x30) +
                                       (char)((uint)uVar7 >> 0x18),
                                       CONCAT15((char)((ulonglong)uVar2 >> 0x28) +
                                                (char)((uint)uVar5 >> 0x18),
                                                CONCAT14((char)((ulonglong)uVar2 >> 0x20) +
                                                         (char)((uint)uVar6 >> 0x18),
                                                         CONCAT13((char)((ulonglong)uVar2 >> 0x18) +
                                                                  (char)((uint)uVar8 >> 0x10),
                                                                  CONCAT12((char)((ulonglong)uVar2
                                                                                 >> 0x10) +
                                                                           (char)((uint)uVar7 >>
                                                                                 0x10),
                                                                           CONCAT11((char)((
                                                  ulonglong)uVar2 >> 8) +
                                                  (char)((uint)uVar5 >> 0x10),
                                                  (char)uVar2 + (char)((uint)uVar6 >> 0x10))))))));
                puVar30 = puVar30 + 4;
                param_2 = puVar26 + 0x10;
                puVar17 = puVar17 + 0x10;
                uVar31 = uVar27 - 0x10;
                uVar27 = uVar31;
                puVar26 = param_2;
              } while (0 < (longlong)uVar31);
            }
          }
        }
      }
      puVar29 = param_2 + uVar31;
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
        goto code_r0x00014f34d880;
      }
      uVar31 = (ulonglong)(uVar16 & 3);
      iVar25 = local_80[uVar31 + 1];
      iVar10 = v_advance_tab[uVar31][0];
      iVar11 = v_advance_tab[uVar31][1];
      iVar12 = v_advance_tab[uVar31][2];
      iVar13 = v_advance_tab[uVar31][3];
      *param_2 = param_2[uVar27] + local_138[local_80[uVar31]];
      local_70 = (uVar9 + iVar10 >> 2) + local_70;
      iStack_6c = (uVar9 + iVar11 >> 2) + iStack_6c;
      iStack_68 = (uVar9 + iVar12 >> 2) + iStack_68;
      iStack_64 = (uVar9 + iVar13 >> 2) + iStack_64;
      param_2[1] = param_2[uVar27 + 1] + local_138[iVar25];
      puVar29 = param_2 + uVar9;
      local_80[0] = local_70;
      local_80[1] = iStack_6c;
      local_80[2] = iStack_68;
      local_80[3] = iStack_64;
    }
    iVar25 = *(int *)((longlong)&local_a0 + uVar20 * 4);
    uVar27 = (ulonglong)iVar25;
    uVar2 = *(undefined8 *)(auStack_b8 + uVar20 * 4);
    uVar14 = *(undefined8 *)(auStack_b0 + uVar20 * 4);
    uVar15 = *(undefined8 *)(auStack_a8 + uVar20 * 4);
    *(undefined8 *)(auStack_c0 + uVar20 * 4 + 4) = *(undefined8 *)(auStack_c0 + uVar20 * 4);
    *(undefined8 *)(auStack_b8 + uVar20 * 4 + 4) = uVar2;
    *(undefined8 *)(auStack_b0 + uVar20 * 4 + 4) = uVar14;
    *(undefined8 *)(auStack_a8 + uVar20 * 4 + 4) = uVar15;
    local_a0 = CONCAT44(local_a0._4_4_,iVar25);
    lVar23 = 0;
    if (uVar20 == 7) {
      lVar23 = 4;
    }
    local_140 = (int *)((longlong)local_140 + lVar23);
    if (uVar27 < (ulonglong)((longlong)param_5 - (longlong)puVar29)) goto LAB_14f34d4ae;
    puVar30 = puVar29 + uVar27;
    if (lVar24 == 9) {
      if (puVar35 <= puVar33) goto LAB_14f34d472;
      puVar1 = puVar35 + -1;
      puVar35 = puVar35 + -1;
      uVar16 = *puVar1 + 6;
      param_2 = puVar29 + uVar16;
      *(undefined8 *)puVar29 = *(undefined8 *)puVar30;
      *(undefined8 *)(puVar29 + 8) = *(undefined8 *)(puVar30 + 8);
      if ((uchar *)0x10 < (uchar *)(ulonglong)uVar16) {
        if (param_4 + (-8 - (longlong)puVar29) < (uchar *)(ulonglong)uVar16) goto LAB_14f34d439;
        puVar32 = puVar30 + 0x18;
        *(undefined8 *)(puVar29 + 0x10) = *(undefined8 *)(puVar30 + 0x10);
        for (puVar29 = puVar29 + 0x18; puVar29 < param_2; puVar29 = puVar29 + 8) {
          uVar2 = *(undefined8 *)puVar32;
          puVar32 = puVar32 + 8;
          *(undefined8 *)puVar29 = uVar2;
        }
      }
    }
    else {
      *(undefined8 *)puVar29 = *(undefined8 *)puVar30;
      param_2 = puVar29 + lVar24;
    }
  }
  puVar29 = param_2;
  if (param_2 < param_4) {
    puVar30 = param_4 + -(longlong)param_2;
    puVar17 = local_138 + local_80[uVar16 & 3];
    puVar21 = local_138 + local_80[uVar16 + 1 & 3];
    puVar32 = local_138 + local_80[uVar16 + 2 & 3];
    if (3 < (longlong)puVar30) {
      uVar20 = (ulonglong)puVar30 >> 2;
      local_108 = (uint *)(1 - uVar27);
      puVar26 = param_2 + uVar27 + 2;
      puVar30 = puVar30 + uVar20 * -4;
      puVar29 = local_138 + local_80[uVar16 + 3 & 3];
      do {
        uVar4 = *puVar17;
        puVar17 = puVar17 + 1;
        *param_2 = puVar26[-2] + uVar4;
        param_2 = param_2 + 4;
        uVar4 = *puVar21;
        puVar21 = puVar21 + 1;
        puVar26[~uVar27] = puVar26[-1] + uVar4;
        uVar4 = *puVar32;
        puVar32 = puVar32 + 1;
        puVar26[-uVar27] = *puVar26 + uVar4;
        *(uchar *)((longlong)local_108 + (longlong)puVar26) = puVar26[1] + *puVar29;
        puVar26 = puVar26 + 4;
        uVar20 = uVar20 - 1;
        puVar29 = puVar29 + 1;
        local_118 = puVar30;
      } while (uVar20 != 0);
    }
    puVar29 = param_2;
    if (0 < (longlong)puVar30) {
      *param_2 = param_2[uVar27] + *puVar17;
      puVar29 = param_2 + 1;
      if (0 < (longlong)(puVar30 + -1)) {
        *puVar29 = puVar29[uVar27] + *puVar21;
        puVar29 = param_2 + 2;
        if (puVar30 + -1 != &DAT_00000001 && -1 < (longlong)(puVar30 + -2)) {
          *puVar29 = puVar29[uVar27] + *puVar32;
          puVar29 = param_2 + 3;
        }
      }
    }
  }
  if (puVar29 == param_4) {
    if (local_140 == local_100) {
      if (puVar33 == puVar35) {
        return true;
      }
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto code_r0x00014f34d880;
      pcVar28 = "OODLE ERROR : corruption : excesses_ptr == excesses_end_ptr\n";
      iVar25 = 0x197;
    }
    else {
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto code_r0x00014f34d880;
      pcVar28 = "OODLE ERROR : corruption : offsets_ptr == offsets_end\n";
      iVar25 = 0x196;
    }
  }
  else {
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto code_r0x00014f34d880;
    pcVar28 = "OODLE ERROR : corruption : to_ptr == chunk_end\n";
    iVar25 = 0x18d;
  }
  (*g_fp_OodleCore_Plugin_Printf)
            (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_outer.inl",iVar25,pcVar28);
code_r0x00014f34d880:
  ooLogErrorPost();
  return false;
LAB_14f34d4ae:
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
  goto code_r0x00014f34d880;
LAB_14f34d472:
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
  goto code_r0x00014f34d880;
LAB_14f34d439:
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
  goto code_r0x00014f34d880;
}

// newLZHC_decode_parse_o1 @ 14f34d8c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
oo2::newLZHC_decode_parse_o1
          (newLZHC_chunk_arrays *param_1,uchar *param_2,uchar *param_3,uchar *param_4,uchar *param_5
          )

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  longlong lVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  int iVar18;
  char *pcVar19;
  uint *puVar20;
  ulonglong uVar21;
  uint *puVar22;
  undefined1 auStack_1d8 [88];
  byte *local_180;
  uchar *local_178;
  int *local_170;
  uchar *local_168;
  ulonglong local_160;
  longlong local_158;
  uchar *local_150;
  int *local_148;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  int local_104;
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
  puVar22 = param_1->excesses;
  pbVar13 = param_1->packets;
  lVar16 = param_1->packets_count;
  local_148 = local_170 + param_1->offsets_count;
  local_180 = pbVar13 + lVar16;
  puVar20 = puVar22 + param_1->excesses_count;
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
  local_120 = ___xmm_fffffff8fffffff8fffffff8fffffff8;
  uStack_118 = _UNK_1531db198;
  local_110 = 0xfffffff8;
  puStack_a8 = param_1->literals_ptrs[0xb] + 1;
  local_75 = *param_1->literals_ptrs[0xb];
  local_10c = 0xfffffff8;
  local_108 = 0xfffffff8;
  local_a0 = param_1->literals_ptrs[0xc] + 1;
  local_74 = *param_1->literals_ptrs[0xc];
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
  lVar9 = (longlong)param_3 - (longlong)param_2 >> 6;
  lVar14 = lVar16;
  if (lVar9 <= lVar16) {
    lVar14 = lVar9;
  }
  pbVar11 = pbVar13 + lVar14;
  while (local_178 = param_3, local_150 = param_4, pbVar13 < pbVar11) {
    bVar1 = *pbVar13;
    lVar16 = lVar16 + -1;
    local_104 = *local_170;
    local_160 = (ulonglong)(bVar1 >> 5);
    lVar14 = (ulonglong)(bVar1 & 7) + 2;
    pbVar13 = pbVar13 + 1;
    local_158 = lVar16;
    if ((bVar1 & 0x18) == 0x18) {
      uVar8 = *puVar22;
      uVar21 = (ulonglong)uVar8;
      puVar22 = puVar22 + 1;
      if (uVar8 == 0) goto LAB_14f34de25;
      if (0x18 < uVar8) {
        if ((longlong)param_3 - (longlong)param_2 < (longlong)uVar21) {
          ooLogErrorPre();
          if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
            (*g_fp_OodleCore_Plugin_Printf)
                      (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0xfb,
                       "OODLE ERROR : corruption : (match_zone_end - to_ptr) >= (lrl)\n");
            ooLogErrorPost();
            return false;
          }
          goto LAB_14f34e2e9;
        }
        lVar9 = (longlong)(((longlong)param_3 - (longlong)param_2) - uVar21) >> 6;
        pbVar11 = local_180;
        if (lVar9 <= lVar16) {
          pbVar11 = pbVar13 + lVar9;
        }
      }
      bVar1 = param_2[-1];
      uVar17 = uVar21;
      pbVar12 = param_2;
      do {
        bVar2 = bVar1 >> 4;
        pbVar10 = (&local_100)[bVar2];
        bVar1 = (&local_80)[bVar2];
        *pbVar12 = bVar1;
        (&local_80)[bVar2] = *pbVar10;
        (&local_100)[bVar2] = pbVar10 + 1;
        uVar17 = uVar17 - 1;
        pbVar12 = pbVar12 + 1;
      } while (uVar17 != 0);
      pbVar12 = param_2 + uVar21;
    }
    else {
      pbVar12 = param_2;
      if ((bVar1 & 0x18) != 0) {
        bVar5 = param_2[-1] >> 4;
        pbVar10 = (&local_100)[bVar5];
        bVar2 = (&local_80)[bVar5];
        bVar3 = *pbVar10;
        *param_2 = bVar2;
        pbVar12 = param_2 + 1;
        (&local_80)[bVar5] = bVar3;
        (&local_100)[bVar5] = pbVar10 + 1;
        if ((bVar1 & 0x18) == 0x10) {
          bVar2 = bVar2 >> 4;
          pbVar10 = (&local_100)[bVar2];
          bVar1 = (&local_80)[bVar2];
          (&local_80)[bVar2] = *pbVar10;
          *pbVar12 = bVar1;
          pbVar12 = param_2 + 2;
          (&local_100)[bVar2] = pbVar10 + 1;
        }
      }
    }
    iVar18 = *(int *)((longlong)&local_120 + local_160 * 4);
    uVar4 = *(undefined8 *)(auStack_138 + local_160 * 4);
    uVar6 = *(undefined8 *)(auStack_130 + local_160 * 4);
    uVar7 = *(undefined8 *)(auStack_128 + local_160 * 4);
    *(undefined8 *)(auStack_140 + local_160 * 4 + 4) = *(undefined8 *)(auStack_140 + local_160 * 4);
    *(undefined8 *)(auStack_138 + local_160 * 4 + 4) = uVar4;
    *(undefined8 *)(auStack_130 + local_160 * 4 + 4) = uVar6;
    *(undefined8 *)(auStack_128 + local_160 * 4 + 4) = uVar7;
    local_120 = CONCAT44(local_120._4_4_,iVar18);
    lVar9 = 0;
    if (local_160 == 7) {
      lVar9 = 4;
    }
    local_170 = (int *)((longlong)local_170 + lVar9);
    if ((ulonglong)(longlong)iVar18 < (ulonglong)((longlong)param_5 - (longlong)pbVar12))
    goto LAB_14f34ded2;
    pbVar10 = pbVar12 + iVar18;
    if (lVar14 == 9) {
      if (puVar20 <= puVar22) goto LAB_14f34de99;
      puVar20 = puVar20 + -1;
      uVar8 = *puVar20 + 6;
      param_2 = pbVar12 + uVar8;
      *(undefined8 *)pbVar12 = *(undefined8 *)pbVar10;
      *(undefined8 *)(pbVar12 + 8) = *(undefined8 *)(pbVar10 + 8);
      if (0x10 < (ulonglong)uVar8) {
        if ((ulonglong)((longlong)local_168 - (longlong)pbVar12) < (ulonglong)uVar8)
        goto code_r0x00014f34de60;
        pbVar11 = pbVar10 + 0x18;
        *(undefined8 *)(pbVar12 + 0x10) = *(undefined8 *)(pbVar10 + 0x10);
        for (pbVar12 = pbVar12 + 0x18; pbVar12 < param_2; pbVar12 = pbVar12 + 8) {
          uVar4 = *(undefined8 *)pbVar11;
          pbVar11 = pbVar11 + 8;
          *(undefined8 *)pbVar12 = uVar4;
        }
        lVar14 = (longlong)param_3 - (longlong)param_2 >> 6;
        pbVar11 = local_180;
        if (lVar14 <= lVar16) {
          pbVar11 = pbVar13 + lVar14;
        }
      }
    }
    else {
      *(undefined8 *)pbVar12 = *(undefined8 *)pbVar10;
      param_2 = pbVar12 + lVar14;
    }
  }
  while (pbVar13 < local_180) {
    bVar1 = *pbVar13;
    pbVar13 = pbVar13 + 1;
    local_104 = *local_170;
    uVar21 = (ulonglong)(bVar1 >> 5);
    lVar16 = (ulonglong)(bVar1 & 7) + 2;
    if ((bVar1 & 0x18) == 0x18) {
      uVar17 = (ulonglong)*puVar22;
      puVar22 = puVar22 + 1;
      if (uVar17 == 0) goto LAB_14f34de25;
      if ((longlong)param_3 - (longlong)param_2 < (longlong)uVar17) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          (*g_fp_OodleCore_Plugin_Printf)
                    (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0xf5,
                     "OODLE ERROR : corruption : (match_zone_end - to_ptr) >= lrl\n");
          ooLogErrorPost();
          return false;
        }
        goto LAB_14f34e2e9;
      }
      bVar1 = param_2[-1];
      uVar15 = uVar17;
      pbVar11 = param_2;
      do {
        bVar2 = bVar1 >> 4;
        pbVar12 = (&local_100)[bVar2];
        bVar1 = (&local_80)[bVar2];
        *pbVar11 = bVar1;
        (&local_80)[bVar2] = *pbVar12;
        (&local_100)[bVar2] = pbVar12 + 1;
        uVar15 = uVar15 - 1;
        pbVar11 = pbVar11 + 1;
      } while (uVar15 != 0);
      pbVar11 = param_2 + uVar17;
    }
    else if ((bVar1 & 0x18) == 0) {
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
        goto LAB_14f34e2e9;
      }
    }
    else {
      uVar17 = (ulonglong)((bVar1 & 0x18) >> 3);
      if ((longlong)param_3 - (longlong)param_2 < (longlong)uVar17) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          (*g_fp_OodleCore_Plugin_Printf)
                    (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x10d,
                     "OODLE ERROR : corruption : (match_zone_end - to_ptr) >= lrl\n");
          ooLogErrorPost();
          return false;
        }
        goto LAB_14f34e2e9;
      }
      bVar3 = param_2[-1] >> 4;
      pbVar11 = (&local_100)[bVar3];
      bVar1 = (&local_80)[bVar3];
      bVar2 = *pbVar11;
      *param_2 = bVar1;
      (&local_80)[bVar3] = bVar2;
      (&local_100)[bVar3] = pbVar11 + 1;
      pbVar11 = param_2 + 1;
      if (uVar17 == 2) {
        bVar1 = bVar1 >> 4;
        pbVar11 = (&local_100)[bVar1];
        bVar2 = (&local_80)[bVar1];
        (&local_80)[bVar1] = *pbVar11;
        param_2[1] = bVar2;
        (&local_100)[bVar1] = pbVar11 + 1;
        pbVar11 = param_2 + 2;
      }
    }
    iVar18 = *(int *)((longlong)&local_120 + uVar21 * 4);
    uVar4 = *(undefined8 *)(auStack_138 + uVar21 * 4);
    uVar6 = *(undefined8 *)(auStack_130 + uVar21 * 4);
    uVar7 = *(undefined8 *)(auStack_128 + uVar21 * 4);
    *(undefined8 *)(auStack_140 + uVar21 * 4 + 4) = *(undefined8 *)(auStack_140 + uVar21 * 4);
    *(undefined8 *)(auStack_138 + uVar21 * 4 + 4) = uVar4;
    *(undefined8 *)(auStack_130 + uVar21 * 4 + 4) = uVar6;
    *(undefined8 *)(auStack_128 + uVar21 * 4 + 4) = uVar7;
    local_120 = CONCAT44(local_120._4_4_,iVar18);
    lVar14 = 0;
    if (uVar21 == 7) {
      lVar14 = 4;
    }
    local_170 = (int *)((longlong)local_170 + lVar14);
    if ((ulonglong)(longlong)iVar18 < (ulonglong)((longlong)param_5 - (longlong)pbVar11))
    goto LAB_14f34ded2;
    pbVar12 = pbVar11 + iVar18;
    if (lVar16 == 9) {
      if (puVar20 <= puVar22) goto LAB_14f34de99;
      puVar20 = puVar20 + -1;
      uVar8 = *puVar20 + 6;
      param_2 = pbVar11 + uVar8;
      *(undefined8 *)pbVar11 = *(undefined8 *)pbVar12;
      *(undefined8 *)(pbVar11 + 8) = *(undefined8 *)(pbVar12 + 8);
      if (0x10 < (ulonglong)uVar8) {
        if ((ulonglong)((longlong)local_168 - (longlong)pbVar11) < (ulonglong)uVar8)
        goto code_r0x00014f34de60;
        pbVar10 = pbVar12 + 0x18;
        *(undefined8 *)(pbVar11 + 0x10) = *(undefined8 *)(pbVar12 + 0x10);
        for (pbVar11 = pbVar11 + 0x18; pbVar11 < param_2; pbVar11 = pbVar11 + 8) {
          uVar4 = *(undefined8 *)pbVar10;
          pbVar10 = pbVar10 + 8;
          *(undefined8 *)pbVar11 = uVar4;
        }
      }
    }
    else {
      *(undefined8 *)pbVar11 = *(undefined8 *)pbVar12;
      param_2 = pbVar11 + lVar16;
    }
  }
  if (param_2 < param_4) {
    lVar16 = (longlong)param_4 - (longlong)param_2;
    if (0 < lVar16) {
      bVar1 = param_2[-1];
      do {
        bVar2 = bVar1 >> 4;
        pbVar13 = (&local_100)[bVar2];
        bVar1 = (&local_80)[bVar2];
        *param_2 = bVar1;
        (&local_80)[bVar2] = *pbVar13;
        (&local_100)[bVar2] = pbVar13 + 1;
        lVar16 = lVar16 + -1;
        param_2 = param_2 + 1;
      } while (lVar16 != 0);
      goto LAB_14f34e26c;
    }
LAB_14f34e296:
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto LAB_14f34e2e9;
    pcVar19 = "OODLE ERROR : corruption : to_ptr == chunk_end\n";
    iVar18 = 0x18d;
  }
  else {
    if (param_2 != param_4) goto LAB_14f34e296;
LAB_14f34e26c:
    if (local_170 == local_148) {
      if (puVar22 == puVar20) {
        return true;
      }
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto LAB_14f34e2e9;
      pcVar19 = "OODLE ERROR : corruption : excesses_ptr == excesses_end_ptr\n";
      iVar18 = 0x197;
    }
    else {
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto LAB_14f34e2e9;
      pcVar19 = "OODLE ERROR : corruption : offsets_ptr == offsets_end\n";
      iVar18 = 0x196;
    }
  }
  (*g_fp_OodleCore_Plugin_Printf)
            (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_outer.inl",iVar18,pcVar19);
LAB_14f34e2e9:
  ooLogErrorPost();
  return false;
LAB_14f34de25:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0xf2,
               "OODLE ERROR : corruption : lrl > 0\n");
    ooLogErrorPost();
    return false;
  }
  goto LAB_14f34e2e9;
LAB_14f34ded2:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x2e2,
               "OODLE ERROR : corruption : (UINTa)neg_offset >= (UINTa) (window_base - to_ptr)\n");
    ooLogErrorPost();
    return false;
  }
  goto LAB_14f34e2e9;
LAB_14f34de99:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x304,
               "OODLE ERROR : corruption : excesses_end_ptr > excesses_ptr\n");
    ooLogErrorPost();
    return false;
  }
  goto LAB_14f34e2e9;
code_r0x00014f34de60:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x322,
               "OODLE ERROR : corruption : (UINTa)(match_end - to_ptr) >= ml\n");
    ooLogErrorPost();
    return false;
  }
  goto LAB_14f34e2e9;
}

// newLZHC_decode_parse_subandF @ 14f34e340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
oo2::newLZHC_decode_parse_subandF
          (newLZHC_chunk_arrays *param_1,uchar *param_2,uchar *param_3,uchar *param_4,uchar *param_5
          )

{
  uint *puVar1;
  uchar uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  uchar *puVar9;
  uchar *puVar10;
  uchar *puVar11;
  ulonglong uVar12;
  byte *pbVar13;
  ulonglong uVar14;
  int iVar15;
  byte bVar16;
  uchar *puVar17;
  ulonglong uVar18;
  char *pcVar19;
  ulonglong uVar20;
  uint *puVar21;
  int *piVar22;
  byte *pbVar23;
  uint *puVar24;
  undefined1 auStack_268 [40];
  uchar *local_240;
  uchar *local_238;
  uchar *local_230;
  uchar *local_228;
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
  int *local_1a8;
  uchar *local_1a0;
  byte *local_198;
  ulonglong local_190;
  uint *local_188;
  ulonglong local_180;
  byte *local_178;
  longlong local_170;
  uint *local_168;
  ulonglong local_160;
  uchar *local_158;
  int *local_150;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  int local_104;
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
  piVar22 = param_1->offsets;
  pbVar13 = param_1->packets;
  puVar24 = param_1->excesses;
  local_150 = piVar22 + param_1->offsets_count;
  local_1b0 = pbVar13 + local_1b8;
  local_190 = 0xfffffffffffffff8;
  puVar21 = puVar24 + param_1->excesses_count;
  iVar15 = (int)param_3;
  puVar11 = param_1->literals_ptrs[-iVar15 & 0xf];
  local_100[0] = puVar11;
  local_1c8 = param_1->literals_ptrs[1U - iVar15 & 0xf];
  local_100[1] = local_1c8;
  local_1d0 = param_1->literals_ptrs[2U - iVar15 & 0xf];
  local_100[2] = local_1d0;
  local_1d8 = param_1->literals_ptrs[3U - iVar15 & 0xf];
  local_100[3] = local_1d8;
  local_1e0 = param_1->literals_ptrs[4U - iVar15 & 0xf];
  local_e0 = local_1e0;
  local_1e8 = param_1->literals_ptrs[5U - iVar15 & 0xf];
  local_d8 = local_1e8;
  local_1f0 = param_1->literals_ptrs[6U - iVar15 & 0xf];
  local_d0 = local_1f0;
  local_1f8 = param_1->literals_ptrs[7U - iVar15 & 0xf];
  local_c8 = local_1f8;
  local_200 = param_1->literals_ptrs[-iVar15 - 8U & 0xf];
  local_c0 = local_200;
  local_240 = param_1->literals_ptrs[-iVar15 - 7U & 0xf];
  local_b8 = local_240;
  local_120 = ___xmm_fffffff8fffffff8fffffff8fffffff8;
  uStack_118 = _UNK_1531db198;
  local_110 = 0xfffffff8;
  local_10c = 0xfffffff8;
  local_108 = 0xfffffff8;
  local_208 = param_1->literals_ptrs[-iVar15 - 6U & 0xf];
  local_b0 = local_208;
  local_210 = param_1->literals_ptrs[-iVar15 - 5U & 0xf];
  local_a8 = local_210;
  local_218 = param_1->literals_ptrs[-iVar15 - 4U & 0xf];
  local_a0 = local_218;
  local_220 = param_1->literals_ptrs[-iVar15 - 3U & 0xf];
  local_98 = local_220;
  local_228 = param_1->literals_ptrs[-iVar15 - 2U & 0xf];
  local_90 = local_228;
  local_230 = param_1->literals_ptrs[-iVar15 - 1U & 0xf];
  local_88 = local_230;
  if (0xf < (longlong)param_4 - (longlong)param_3) {
    param_3 = param_4 + -0x10;
  }
  local_1a0 = param_4 + -8;
  lVar8 = (longlong)param_3 - (longlong)param_2 >> 6;
  lVar7 = local_1b8;
  if (lVar8 <= local_1b8) {
    lVar7 = lVar8;
  }
  pbVar23 = pbVar13 + lVar7;
  uVar20 = local_190;
  local_238 = puVar11;
  local_1a8 = piVar22;
  local_188 = puVar21;
  local_1c0 = param_3;
  local_158 = param_4;
  if (pbVar13 < pbVar23) {
    do {
      bVar16 = *pbVar13;
      local_1b8 = local_1b8 + -1;
      local_160 = (ulonglong)(bVar16 >> 5);
      local_170 = (ulonglong)(bVar16 & 7) + 2;
      local_104 = *local_1a8;
      pbVar13 = pbVar13 + 1;
      bVar16 = bVar16 & 0x18;
      uVar6 = (uint)param_2;
      local_178 = pbVar13;
      if (bVar16 == 0x18) {
        uVar20 = (ulonglong)*puVar24;
        puVar24 = puVar24 + 1;
        local_168 = puVar24;
        if (0x18 < uVar20) {
          if ((longlong)param_3 - (longlong)param_2 < (longlong)uVar20) {
            ooLogErrorPre();
            if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
            {
              (*g_fp_OodleCore_Plugin_Printf)
                        (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x13a
                         ,"OODLE ERROR : corruption : (match_zone_end - to_ptr) >= (lrl)\n");
              ooLogErrorPost();
              return false;
            }
            goto code_r0x00014f34f200;
          }
          lVar7 = (longlong)(((longlong)param_3 - (longlong)param_2) - uVar20) >> 6;
          pbVar23 = local_1b0;
          if (lVar7 <= local_1b8) {
            pbVar23 = pbVar13 + lVar7;
          }
          uVar12 = uVar20;
          if (((ulonglong)param_2 & 0xf) != 0) {
            do {
              puVar11 = local_100[uVar6 & 0xf];
              uVar20 = uVar20 - 1;
              *param_2 = param_2[local_190] + *puVar11;
              param_2 = param_2 + 1;
              local_100[uVar6 & 0xf] = puVar11 + 1;
              uVar6 = (uint)param_2;
            } while (((ulonglong)param_2 & 0xf) != 0);
            local_230 = local_88;
            local_228 = local_90;
            local_220 = local_98;
            local_218 = local_a0;
            local_210 = local_a8;
            local_208 = local_b0;
            local_200 = local_c0;
            local_1f8 = local_c8;
            local_1f0 = local_d0;
            local_1e8 = local_d8;
            local_1e0 = local_e0;
            local_1d8 = local_100[3];
            local_1d0 = local_100[2];
            local_1c8 = local_100[1];
            local_240 = local_b8;
            local_238 = local_100[0];
            puVar11 = local_100[0];
            uVar12 = uVar20;
          }
          uVar20 = (ulonglong)((uint)uVar12 & 0xf);
          lVar7 = (longlong)uVar12 >> 4;
          local_198 = pbVar23;
          local_180 = uVar20;
          if (lVar7 != 0) {
            lVar8 = -local_190;
            puVar17 = param_2 + local_190 + 2;
            do {
              uVar2 = *puVar11;
              puVar11 = puVar11 + 1;
              *param_2 = puVar17[-2] + uVar2;
              uVar2 = *local_1c8;
              local_1c8 = local_1c8 + 1;
              puVar17[lVar8 + -1] = puVar17[-1] + uVar2;
              uVar2 = *local_1d0;
              local_1d0 = local_1d0 + 1;
              puVar17[lVar8] = uVar2 + *puVar17;
              uVar2 = *local_1d8;
              local_1d8 = local_1d8 + 1;
              puVar17[lVar8 + 1] = puVar17[1] + uVar2;
              uVar2 = *local_1e0;
              local_1e0 = local_1e0 + 1;
              puVar17[lVar8 + 2] = puVar17[2] + uVar2;
              uVar2 = *local_1e8;
              local_1e8 = local_1e8 + 1;
              puVar17[lVar8 + 3] = puVar17[3] + uVar2;
              uVar2 = *local_1f0;
              local_1f0 = local_1f0 + 1;
              puVar17[lVar8 + 4] = puVar17[4] + uVar2;
              uVar2 = *local_1f8;
              local_1f8 = local_1f8 + 1;
              puVar17[lVar8 + 5] = puVar17[5] + uVar2;
              uVar2 = *local_200;
              local_200 = local_200 + 1;
              puVar17[lVar8 + 6] = puVar17[6] + uVar2;
              local_100[0] = puVar11;
              local_100[1] = local_1c8;
              local_100[2] = local_1d0;
              local_100[3] = local_1d8;
              puVar17[lVar8 + 7] = puVar17[7] + *local_240;
              local_240 = local_240 + 1;
              local_b8 = local_240;
              uVar2 = *local_208;
              local_208 = local_208 + 1;
              local_b0 = local_208;
              puVar17[lVar8 + 8] = puVar17[8] + uVar2;
              local_e0 = local_1e0;
              uVar2 = *local_210;
              local_210 = local_210 + 1;
              local_a8 = local_210;
              puVar17[lVar8 + 9] = puVar17[9] + uVar2;
              local_d8 = local_1e8;
              uVar2 = *local_218;
              local_218 = local_218 + 1;
              local_a0 = local_218;
              puVar17[lVar8 + 10] = puVar17[10] + uVar2;
              local_d0 = local_1f0;
              uVar2 = *local_220;
              local_220 = local_220 + 1;
              local_c8 = local_1f8;
              local_c0 = local_200;
              puVar17[lVar8 + 0xb] = puVar17[0xb] + uVar2;
              local_98 = local_220;
              param_2 = param_2 + 0x10;
              uVar2 = *local_228;
              local_228 = local_228 + 1;
              local_90 = local_228;
              puVar17[lVar8 + 0xc] = puVar17[0xc] + uVar2;
              uVar2 = *local_230;
              local_230 = local_230 + 1;
              local_88 = local_230;
              puVar17[lVar8 + 0xd] = puVar17[0xd] + uVar2;
              lVar7 = lVar7 + -1;
              puVar17 = puVar17 + 0x10;
              puVar21 = local_188;
              local_238 = puVar11;
            } while (lVar7 != 0);
          }
        }
        puVar17 = param_2;
        puVar11 = local_238;
        uVar12 = uVar20;
        if (uVar20 != 0) {
          do {
            uVar6 = (uint)puVar17 & 0xf;
            puVar11 = local_100[uVar6];
            *puVar17 = puVar17[local_190] + *puVar11;
            puVar17 = puVar17 + 1;
            local_100[uVar6] = puVar11 + 1;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
          local_230 = local_88;
          local_228 = local_90;
          local_220 = local_98;
          local_218 = local_a0;
          local_210 = local_a8;
          local_208 = local_b0;
          local_200 = local_c0;
          local_1f8 = local_c8;
          local_1f0 = local_d0;
          local_1e8 = local_d8;
          local_1e0 = local_e0;
          local_1d8 = local_100[3];
          local_1d0 = local_100[2];
          local_1c8 = local_100[1];
          local_240 = local_b8;
          local_238 = local_100[0];
          puVar17 = param_2 + uVar20;
          puVar11 = local_100[0];
        }
      }
      else {
        puVar17 = param_2;
        if (bVar16 != 0) {
          puVar11 = local_100[uVar6 & 0xf];
          *param_2 = param_2[local_190] + *puVar11;
          puVar17 = param_2 + 1;
          local_100[uVar6 & 0xf] = puVar11 + 1;
          uVar6 = (uint)puVar17 & 0xf;
          puVar11 = local_100[uVar6];
          *puVar17 = puVar17[local_190] + *puVar11;
          local_100[uVar6] = puVar11 + (bVar16 == 0x10);
          local_230 = local_88;
          local_228 = local_90;
          local_220 = local_98;
          local_218 = local_a0;
          local_210 = local_a8;
          local_208 = local_b0;
          local_200 = local_c0;
          local_1f8 = local_c8;
          local_1f0 = local_d0;
          local_1e8 = local_d8;
          local_1e0 = local_e0;
          local_1d8 = local_100[3];
          local_1d0 = local_100[2];
          local_1c8 = local_100[1];
          local_240 = local_b8;
          local_238 = local_100[0];
          puVar17 = puVar17 + (bVar16 == 0x10);
          puVar11 = local_100[0];
        }
      }
      iVar15 = *(int *)((longlong)&local_120 + local_160 * 4);
      uVar20 = (ulonglong)iVar15;
      uVar3 = *(undefined8 *)(auStack_138 + local_160 * 4);
      uVar4 = *(undefined8 *)(auStack_130 + local_160 * 4);
      uVar5 = *(undefined8 *)(auStack_128 + local_160 * 4);
      *(undefined8 *)(auStack_140 + local_160 * 4 + 4) =
           *(undefined8 *)(auStack_140 + local_160 * 4);
      *(undefined8 *)(auStack_138 + local_160 * 4 + 4) = uVar3;
      *(undefined8 *)(auStack_130 + local_160 * 4 + 4) = uVar4;
      *(undefined8 *)(auStack_128 + local_160 * 4 + 4) = uVar5;
      local_120 = CONCAT44(local_120._4_4_,iVar15);
      lVar7 = 0;
      if (local_160 == 7) {
        lVar7 = 4;
      }
      piVar22 = (int *)((longlong)local_1a8 + lVar7);
      local_1a8 = piVar22;
      local_190 = uVar20;
      if (uVar20 < (ulonglong)((longlong)param_5 - (longlong)puVar17)) goto LAB_14f34ee2e;
      puVar10 = puVar17 + uVar20;
      if (local_170 == 9) {
        if (puVar21 <= puVar24) goto LAB_14f34edf2;
        puVar1 = puVar21 + -1;
        puVar21 = puVar21 + -1;
        uVar6 = *puVar1 + 6;
        param_2 = puVar17 + uVar6;
        *(undefined8 *)puVar17 = *(undefined8 *)puVar10;
        *(undefined8 *)(puVar17 + 8) = *(undefined8 *)(puVar10 + 8);
        local_188 = puVar21;
        if (0x10 < (ulonglong)uVar6) {
          if ((ulonglong)((longlong)local_1a0 - (longlong)puVar17) < (ulonglong)uVar6)
          goto LAB_14f34edb9;
          puVar9 = puVar10 + 0x18;
          *(undefined8 *)(puVar17 + 0x10) = *(undefined8 *)(puVar10 + 0x10);
          for (puVar17 = puVar17 + 0x18; puVar17 < param_2; puVar17 = puVar17 + 8) {
            uVar3 = *(undefined8 *)puVar9;
            puVar9 = puVar9 + 8;
            *(undefined8 *)puVar17 = uVar3;
          }
          lVar7 = (longlong)param_3 - (longlong)param_2 >> 6;
          pbVar23 = local_1b0;
          if (lVar7 <= local_1b8) {
            pbVar23 = pbVar13 + lVar7;
          }
        }
      }
      else {
        *(undefined8 *)puVar17 = *(undefined8 *)puVar10;
        param_2 = puVar17 + local_170;
      }
    } while (pbVar13 < pbVar23);
  }
  while (pbVar13 < local_1b0) {
    bVar16 = *pbVar13;
    pbVar13 = pbVar13 + 1;
    local_104 = *piVar22;
    uVar12 = (ulonglong)(bVar16 >> 5);
    lVar8 = (ulonglong)(bVar16 & 7) + 2;
    lVar7 = (longlong)param_3 - (longlong)param_2;
    if ((bVar16 & 0x18) == 0x18) {
      uVar14 = (ulonglong)*puVar24;
      puVar24 = puVar24 + 1;
      puVar11 = param_2;
      uVar18 = uVar14;
      if (lVar7 < (longlong)uVar14) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          (*g_fp_OodleCore_Plugin_Printf)
                    (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x134,
                     "OODLE ERROR : corruption : (match_zone_end - to_ptr) >= lrl\n");
          ooLogErrorPost();
          return false;
        }
        goto code_r0x00014f34f200;
      }
      for (; uVar18 != 0; uVar18 = uVar18 - 1) {
        uVar6 = (uint)puVar11 & 0xf;
        puVar17 = local_100[uVar6];
        *puVar11 = puVar11[uVar20] + *puVar17;
        local_100[uVar6] = puVar17 + 1;
        puVar11 = puVar11 + 1;
      }
      puVar11 = param_2 + uVar14;
    }
    else if ((bVar16 & 0x18) == 0) {
      puVar11 = param_2;
      if (lVar7 < 0) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          (*g_fp_OodleCore_Plugin_Printf)
                    (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x18a,
                     "OODLE ERROR : corruption : (match_zone_end - to_ptr) >= 0\n");
          ooLogErrorPost();
          return false;
        }
        goto code_r0x00014f34f200;
      }
    }
    else {
      uVar18 = (ulonglong)((bVar16 & 0x18) >> 3);
      if (lVar7 < (longlong)uVar18) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          (*g_fp_OodleCore_Plugin_Printf)
                    (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x16d,
                     "OODLE ERROR : corruption : (match_zone_end - to_ptr) >= lrl\n");
          ooLogErrorPost();
          return false;
        }
        goto code_r0x00014f34f200;
      }
      uVar6 = (uint)param_2 & 0xf;
      puVar11 = local_100[uVar6];
      *param_2 = param_2[uVar20] + *puVar11;
      puVar17 = param_2 + 1;
      local_100[uVar6] = puVar11 + 1;
      uVar6 = (uint)puVar17 & 0xf;
      puVar11 = local_100[uVar6];
      *puVar17 = puVar17[uVar20] + *puVar11;
      local_100[uVar6] = puVar11 + (uVar18 == 2);
      puVar11 = puVar17 + (uVar18 == 2);
    }
    iVar15 = *(int *)((longlong)&local_120 + uVar12 * 4);
    uVar20 = (ulonglong)iVar15;
    uVar3 = *(undefined8 *)(auStack_138 + uVar12 * 4);
    uVar4 = *(undefined8 *)(auStack_130 + uVar12 * 4);
    uVar5 = *(undefined8 *)(auStack_128 + uVar12 * 4);
    *(undefined8 *)(auStack_140 + uVar12 * 4 + 4) = *(undefined8 *)(auStack_140 + uVar12 * 4);
    *(undefined8 *)(auStack_138 + uVar12 * 4 + 4) = uVar3;
    *(undefined8 *)(auStack_130 + uVar12 * 4 + 4) = uVar4;
    *(undefined8 *)(auStack_128 + uVar12 * 4 + 4) = uVar5;
    local_120 = CONCAT44(local_120._4_4_,iVar15);
    lVar7 = 0;
    if (uVar12 == 7) {
      lVar7 = 4;
    }
    piVar22 = (int *)((longlong)piVar22 + lVar7);
    if (uVar20 < (ulonglong)((longlong)param_5 - (longlong)puVar11)) goto LAB_14f34ee2e;
    puVar17 = puVar11 + uVar20;
    if (lVar8 == 9) {
      if (puVar21 <= puVar24) goto LAB_14f34edf2;
      puVar1 = puVar21 + -1;
      puVar21 = puVar21 + -1;
      uVar6 = *puVar1 + 6;
      param_2 = puVar11 + uVar6;
      *(undefined8 *)puVar11 = *(undefined8 *)puVar17;
      *(undefined8 *)(puVar11 + 8) = *(undefined8 *)(puVar17 + 8);
      if (0x10 < (ulonglong)uVar6) {
        if ((ulonglong)((longlong)local_1a0 - (longlong)puVar11) < (ulonglong)uVar6)
        goto LAB_14f34edb9;
        puVar10 = puVar17 + 0x18;
        *(undefined8 *)(puVar11 + 0x10) = *(undefined8 *)(puVar17 + 0x10);
        for (puVar11 = puVar11 + 0x18; puVar11 < param_2; puVar11 = puVar11 + 8) {
          uVar3 = *(undefined8 *)puVar10;
          puVar10 = puVar10 + 8;
          *(undefined8 *)puVar11 = uVar3;
        }
      }
    }
    else {
      *(undefined8 *)puVar11 = *(undefined8 *)puVar17;
      param_2 = puVar11 + lVar8;
    }
  }
  if (param_2 < param_4) {
    lVar7 = (longlong)param_4 - (longlong)param_2;
    if (lVar7 < 1) goto LAB_14f34f1ab;
    do {
      uVar6 = (uint)param_2 & 0xf;
      puVar11 = local_100[uVar6];
      *param_2 = param_2[uVar20] + *puVar11;
      param_2 = param_2 + 1;
      local_100[uVar6] = puVar11 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
code_r0x00014f34f180:
    if (piVar22 == local_150) {
      if (puVar24 == puVar21) {
        return true;
      }
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto code_r0x00014f34f200;
      pcVar19 = "OODLE ERROR : corruption : excesses_ptr == excesses_end_ptr\n";
      iVar15 = 0x197;
    }
    else {
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto code_r0x00014f34f200;
      pcVar19 = "OODLE ERROR : corruption : offsets_ptr == offsets_end\n";
      iVar15 = 0x196;
    }
  }
  else {
    if (param_2 == param_4) goto code_r0x00014f34f180;
LAB_14f34f1ab:
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto code_r0x00014f34f200;
    pcVar19 = "OODLE ERROR : corruption : to_ptr == chunk_end\n";
    iVar15 = 0x18d;
  }
  (*g_fp_OodleCore_Plugin_Printf)
            (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_outer.inl",iVar15,pcVar19);
code_r0x00014f34f200:
  ooLogErrorPost();
  return false;
LAB_14f34ee2e:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x2e2,
               "OODLE ERROR : corruption : (UINTa)neg_offset >= (UINTa) (window_base - to_ptr)\n");
    ooLogErrorPost();
    return false;
  }
  goto code_r0x00014f34f200;
LAB_14f34edf2:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x304,
               "OODLE ERROR : corruption : excesses_end_ptr > excesses_ptr\n");
    ooLogErrorPost();
    return false;
  }
  goto code_r0x00014f34f200;
LAB_14f34edb9:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x322,
               "OODLE ERROR : corruption : (UINTa)(match_end - to_ptr) >= ml\n");
    ooLogErrorPost();
    return false;
  }
  goto code_r0x00014f34f200;
}

// newLZHC_decode_parse_multipacket_raw @ 14f34f240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
oo2::newLZHC_decode_parse_multipacket_raw
          (newLZHC_chunk_arrays *param_1,uchar *param_2,uchar *param_3,uchar *param_4,uchar *param_5
          )

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uchar *puVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uchar *puVar9;
  uchar *puVar10;
  uint *puVar11;
  uint *puVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  uchar *_Src;
  char *pcVar16;
  longlong lVar17;
  uchar **ppuVar18;
  longlong lVar19;
  int *piVar20;
  longlong lVar21;
  byte *pbVar22;
  undefined1 auStack_168 [40];
  uchar *local_140;
  int *local_138;
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  int local_c4;
  uchar *local_c0 [4];
  uchar *local_a0;
  uchar *local_98;
  uchar *local_90;
  uchar *local_88;
  ulonglong local_80;
  
  local_80 = __security_cookie.value ^ (ulonglong)auStack_168;
  piVar20 = param_1->offsets;
  puVar12 = param_1->excesses;
  lVar21 = param_1->packets_count;
  _Src = param_1->literals_ptrs[0];
  local_138 = piVar20 + param_1->offsets_count;
  iVar14 = (int)param_3;
  local_e0 = ___xmm_fffffff8fffffff8fffffff8fffffff8;
  uStack_d8 = _UNK_1531db198;
  local_d0 = 0xfffffff8;
  local_cc = 0xfffffff8;
  local_c8 = 0xfffffff8;
  local_c0[0] = param_1->packet_pos_ptrs[-iVar14 & 7];
  local_c0[1] = param_1->packet_pos_ptrs[1U - iVar14 & 7];
  local_c0[2] = param_1->packet_pos_ptrs[2U - iVar14 & 7];
  local_c0[3] = param_1->packet_pos_ptrs[3U - iVar14 & 7];
  local_a0 = param_1->packet_pos_ptrs[-iVar14 - 4U & 7];
  local_98 = param_1->packet_pos_ptrs[-iVar14 - 3U & 7];
  local_90 = param_1->packet_pos_ptrs[-iVar14 - 2U & 7];
  local_88 = param_1->packet_pos_ptrs[-iVar14 - 1U & 7];
  puVar11 = puVar12 + param_1->excesses_count;
  if (0xf < (longlong)param_4 - (longlong)param_3) {
    param_3 = param_4 + -0x10;
  }
  ppuVar18 = local_c0 + ((uint)param_2 & 7);
  lVar17 = lVar21 - ((longlong)param_3 - (longlong)param_2 >> 6);
  if (lVar17 < 1) {
    lVar17 = 0;
  }
  do {
    pbVar22 = *ppuVar18;
    while( true ) {
      local_140 = param_4;
      if (lVar21 <= lVar17) {
        uVar6 = (uint)param_2 & 7;
        pbVar22 = local_c0[uVar6];
        ppuVar18 = local_c0 + uVar6;
        goto joined_r0x00014f34f6e6;
      }
      bVar1 = *pbVar22;
      uVar6 = *puVar12;
      *ppuVar18 = pbVar22 + 1;
      lVar21 = lVar21 + -1;
      local_c4 = *piVar20;
      uVar15 = (ulonglong)(bVar1 >> 3 & 3);
      uVar13 = (ulonglong)(bVar1 >> 5);
      lVar19 = (ulonglong)(bVar1 & 7) + 2;
      if (uVar15 == 3) {
        uVar15 = (ulonglong)uVar6;
        puVar12 = puVar12 + 1;
      }
      *(undefined8 *)param_2 = *(undefined8 *)_Src;
      if (((8 < uVar15) && (*(undefined8 *)(param_2 + 8) = *(undefined8 *)(_Src + 8), 0x10 < uVar15)
          ) && (*(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(_Src + 0x10), 0x18 < uVar15)) {
        if ((longlong)param_3 - (longlong)param_2 < (longlong)uVar15) {
          ooLogErrorPre();
          if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
            (*g_fp_OodleCore_Plugin_Printf)
                      (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x292,
                       "OODLE ERROR : corruption : (match_zone_end - to_ptr) >= (lrl)\n");
            ooLogErrorPost();
            return false;
          }
          goto code_r0x00014f34f980;
        }
        lVar17 = lVar21 - ((longlong)(((longlong)param_3 - (longlong)param_2) - uVar15) >> 6);
        if (lVar17 < 1) {
          lVar17 = 0;
        }
        param_2 = param_2 + 0x18;
        _Src = _Src + 0x18;
        uVar15 = uVar15 - 0x18;
        do {
          uVar15 = uVar15 - 8;
          *(undefined8 *)param_2 = *(undefined8 *)_Src;
          _Src = _Src + 8;
          param_2 = param_2 + 8;
        } while (0 < (longlong)uVar15);
      }
      iVar14 = *(int *)((longlong)&local_e0 + uVar13 * 4);
      puVar5 = param_2 + uVar15;
      uVar2 = *(undefined8 *)(auStack_f8 + uVar13 * 4);
      _Src = _Src + uVar15;
      uVar3 = *(undefined8 *)(auStack_f0 + uVar13 * 4);
      uVar4 = *(undefined8 *)(auStack_e8 + uVar13 * 4);
      *(undefined8 *)(auStack_100 + uVar13 * 4 + 4) = *(undefined8 *)(auStack_100 + uVar13 * 4);
      *(undefined8 *)(auStack_f8 + uVar13 * 4 + 4) = uVar2;
      *(undefined8 *)(auStack_f0 + uVar13 * 4 + 4) = uVar3;
      *(undefined8 *)(auStack_e8 + uVar13 * 4 + 4) = uVar4;
      local_e0 = CONCAT44(local_e0._4_4_,iVar14);
      lVar8 = 0;
      if (uVar13 == 7) {
        lVar8 = 4;
      }
      piVar20 = (int *)((longlong)piVar20 + lVar8);
      if ((ulonglong)(longlong)iVar14 < (ulonglong)((longlong)param_5 - (longlong)puVar5))
      goto LAB_14f34f68e;
      puVar9 = puVar5 + iVar14;
      if (lVar19 != 9) break;
      if (puVar11 <= puVar12) goto LAB_14f34f64e;
      puVar11 = puVar11 + -1;
      uVar6 = *puVar11 + 6;
      param_2 = puVar5 + uVar6;
      *(undefined8 *)puVar5 = *(undefined8 *)puVar9;
      *(undefined8 *)(puVar5 + 8) = *(undefined8 *)(puVar9 + 8);
      uVar7 = (uint)param_2 & 7;
      pbVar22 = local_c0[uVar7];
      ppuVar18 = local_c0 + uVar7;
      if ((uchar *)0x10 < (uchar *)(ulonglong)uVar6) {
        if (param_4 + (-8 - (longlong)puVar5) < (uchar *)(ulonglong)uVar6) goto LAB_14f34f60f;
        puVar10 = puVar9 + 0x18;
        *(undefined8 *)(puVar5 + 0x10) = *(undefined8 *)(puVar9 + 0x10);
        for (puVar5 = puVar5 + 0x18; puVar5 < param_2; puVar5 = puVar5 + 8) {
          uVar2 = *(undefined8 *)puVar10;
          puVar10 = puVar10 + 8;
          *(undefined8 *)puVar5 = uVar2;
        }
        lVar17 = lVar21 - ((longlong)param_3 - (longlong)param_2 >> 6);
        if (lVar17 < 1) {
          lVar17 = 0;
        }
      }
    }
    *(undefined8 *)puVar5 = *(undefined8 *)puVar9;
    param_2 = puVar5 + lVar19;
    ppuVar18 = local_c0 + ((uint)param_2 & 7);
  } while( true );
LAB_14f34f68e:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x2e2,
               "OODLE ERROR : corruption : (UINTa)neg_offset >= (UINTa) (window_base - to_ptr)\n");
    ooLogErrorPost();
    return false;
  }
  goto code_r0x00014f34f980;
LAB_14f34f64e:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x304,
               "OODLE ERROR : corruption : excesses_end_ptr > excesses_ptr\n");
    ooLogErrorPost();
    return false;
  }
  goto code_r0x00014f34f980;
LAB_14f34f60f:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x322,
               "OODLE ERROR : corruption : (UINTa)(match_end - to_ptr) >= ml\n");
    ooLogErrorPost();
    return false;
  }
  goto code_r0x00014f34f980;
joined_r0x00014f34f6e6:
  if (0 < lVar21) {
    bVar1 = *pbVar22;
    uVar6 = *puVar12;
    *ppuVar18 = pbVar22 + 1;
    lVar21 = lVar21 + -1;
    local_c4 = *piVar20;
    uVar13 = (ulonglong)(bVar1 >> 3 & 3);
    lVar17 = (ulonglong)(bVar1 & 7) + 2;
    uVar15 = (ulonglong)(bVar1 >> 5);
    if (uVar13 == 3) {
      uVar13 = (ulonglong)uVar6;
      puVar12 = puVar12 + 1;
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
      goto code_r0x00014f34f980;
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
    iVar14 = *(int *)((longlong)&local_e0 + uVar15 * 4);
    puVar5 = param_2 + uVar13;
    uVar2 = *(undefined8 *)(auStack_f8 + uVar15 * 4);
    _Src = _Src + uVar13;
    uVar3 = *(undefined8 *)(auStack_f0 + uVar15 * 4);
    uVar4 = *(undefined8 *)(auStack_e8 + uVar15 * 4);
    *(undefined8 *)(auStack_100 + uVar15 * 4 + 4) = *(undefined8 *)(auStack_100 + uVar15 * 4);
    *(undefined8 *)(auStack_f8 + uVar15 * 4 + 4) = uVar2;
    *(undefined8 *)(auStack_f0 + uVar15 * 4 + 4) = uVar3;
    *(undefined8 *)(auStack_e8 + uVar15 * 4 + 4) = uVar4;
    local_e0 = CONCAT44(local_e0._4_4_,iVar14);
    lVar19 = 0;
    if (uVar15 == 7) {
      lVar19 = 4;
    }
    piVar20 = (int *)((longlong)piVar20 + lVar19);
    if ((ulonglong)(longlong)iVar14 < (ulonglong)((longlong)param_5 - (longlong)puVar5))
    goto LAB_14f34f68e;
    puVar9 = puVar5 + iVar14;
    if (lVar17 == 9) {
      if (puVar11 <= puVar12) goto LAB_14f34f64e;
      puVar11 = puVar11 + -1;
      uVar6 = *puVar11 + 6;
      param_2 = puVar5 + uVar6;
      *(undefined8 *)puVar5 = *(undefined8 *)puVar9;
      *(undefined8 *)(puVar5 + 8) = *(undefined8 *)(puVar9 + 8);
      uVar7 = (uint)param_2 & 7;
      pbVar22 = local_c0[uVar7];
      ppuVar18 = local_c0 + uVar7;
      if ((uchar *)0x10 < (uchar *)(ulonglong)uVar6) {
        if (param_4 + (-8 - (longlong)puVar5) < (uchar *)(ulonglong)uVar6) goto LAB_14f34f60f;
        puVar10 = puVar9 + 0x18;
        *(undefined8 *)(puVar5 + 0x10) = *(undefined8 *)(puVar9 + 0x10);
        for (puVar5 = puVar5 + 0x18; puVar5 < param_2; puVar5 = puVar5 + 8) {
          uVar2 = *(undefined8 *)puVar10;
          puVar10 = puVar10 + 8;
          *(undefined8 *)puVar5 = uVar2;
        }
      }
    }
    else {
      *(undefined8 *)puVar5 = *(undefined8 *)puVar9;
      param_2 = puVar5 + lVar17;
      uVar6 = (uint)param_2 & 7;
      pbVar22 = local_c0[uVar6];
      ppuVar18 = local_c0 + uVar6;
    }
    goto joined_r0x00014f34f6e6;
  }
  if (param_2 < param_4) {
    memcpy(param_2,_Src,(longlong)param_4 - (longlong)param_2);
LAB_14f34f8cb:
    if (piVar20 == local_138) {
      if (puVar12 == puVar11) {
        return true;
      }
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto code_r0x00014f34f980;
      pcVar16 = "OODLE ERROR : corruption : excesses_ptr == excesses_end_ptr\n";
      iVar14 = 0x197;
    }
    else {
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto code_r0x00014f34f980;
      pcVar16 = "OODLE ERROR : corruption : offsets_ptr == offsets_end\n";
      iVar14 = 0x196;
    }
  }
  else {
    if (param_2 == param_4) goto LAB_14f34f8cb;
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto code_r0x00014f34f980;
    pcVar16 = "OODLE ERROR : corruption : to_ptr == chunk_end\n";
    iVar14 = 0x18d;
  }
  (*g_fp_OodleCore_Plugin_Printf)
            (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_outer.inl",iVar14,pcVar16);
code_r0x00014f34f980:
  ooLogErrorPost();
  return false;
}

// newLZHC_decode_parse_multipacket_sub @ 14f34f9c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
oo2::newLZHC_decode_parse_multipacket_sub
          (newLZHC_chunk_arrays *param_1,uchar *param_2,uchar *param_3,uchar *param_4,uchar *param_5
          )

{
  uchar *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uchar *puVar9;
  uchar *puVar10;
  longlong lVar11;
  uint *puVar12;
  uchar **ppuVar13;
  ulonglong uVar14;
  int iVar15;
  uchar *puVar16;
  ulonglong uVar17;
  char *pcVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint *puVar21;
  int *piVar22;
  longlong lVar23;
  byte *pbVar24;
  undefined1 auStack_168 [40];
  uchar *local_140;
  uchar *local_138;
  int *local_130;
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  int local_c4;
  uchar *local_c0 [4];
  uchar *local_a0;
  uchar *local_98;
  uchar *local_90;
  uchar *local_88;
  ulonglong local_80;
  
  local_80 = __security_cookie.value ^ (ulonglong)auStack_168;
  uVar19 = 0xfffffffffffffff8;
  piVar22 = param_1->offsets;
  puVar21 = param_1->excesses;
  lVar23 = param_1->packets_count;
  local_130 = piVar22 + param_1->offsets_count;
  iVar15 = (int)param_3;
  local_e0 = ___xmm_fffffff8fffffff8fffffff8fffffff8;
  uStack_d8 = _UNK_1531db198;
  local_d0 = 0xfffffff8;
  local_cc = 0xfffffff8;
  local_c8 = 0xfffffff8;
  local_c0[0] = param_1->packet_pos_ptrs[-iVar15 & 7];
  local_c0[1] = param_1->packet_pos_ptrs[1U - iVar15 & 7];
  local_c0[2] = param_1->packet_pos_ptrs[2U - iVar15 & 7];
  local_c0[3] = param_1->packet_pos_ptrs[3U - iVar15 & 7];
  local_a0 = param_1->packet_pos_ptrs[-iVar15 - 4U & 7];
  local_98 = param_1->packet_pos_ptrs[-iVar15 - 3U & 7];
  local_90 = param_1->packet_pos_ptrs[-iVar15 - 2U & 7];
  puVar16 = param_1->literals_ptrs[0];
  local_88 = param_1->packet_pos_ptrs[-iVar15 - 1U & 7];
  puVar12 = puVar21 + param_1->excesses_count;
  if (0xf < (longlong)param_4 - (longlong)param_3) {
    param_3 = param_4 + -0x10;
  }
  ppuVar13 = local_c0 + ((uint)param_2 & 7);
  lVar20 = lVar23 - ((longlong)param_3 - (longlong)param_2 >> 6);
  if (lVar20 < 1) {
    lVar20 = 0;
  }
  do {
    pbVar24 = *ppuVar13;
    while( true ) {
      local_140 = param_3;
      local_138 = param_4;
      if (lVar23 <= lVar20) {
        uVar6 = (uint)param_2 & 7;
        pbVar24 = local_c0[uVar6];
        ppuVar13 = local_c0 + uVar6;
        goto joined_r0x00014f34fea6;
      }
      bVar4 = *pbVar24;
      uVar6 = *puVar21;
      uVar2 = *(undefined8 *)(param_2 + uVar19);
      uVar3 = *(undefined8 *)puVar16;
      lVar11 = (ulonglong)(bVar4 & 7) + 2;
      *ppuVar13 = pbVar24 + 1;
      lVar23 = lVar23 + -1;
      local_c4 = *piVar22;
      uVar17 = (ulonglong)(bVar4 >> 3 & 3);
      uVar14 = (ulonglong)(bVar4 >> 5);
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
                                                                 CONCAT11((char)((ulonglong)uVar2 >>
                                                                                8) +
                                                                          (char)((ulonglong)uVar3 >>
                                                                                8),(char)uVar2 +
                                                                                   (char)uVar3))))))
                   );
      if (uVar17 == 3) {
        uVar17 = (ulonglong)uVar6;
        puVar21 = puVar21 + 1;
      }
      if (8 < uVar17) {
        uVar2 = *(undefined8 *)(param_2 + uVar19 + 8);
        uVar3 = *(undefined8 *)(puVar16 + 8);
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
        if (0x10 < uVar17) {
          uVar2 = *(undefined8 *)(param_2 + uVar19 + 0x10);
          uVar3 = *(undefined8 *)(puVar16 + 0x10);
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
          if (0x18 < uVar17) {
            if ((longlong)param_3 - (longlong)param_2 < (longlong)uVar17) {
              ooLogErrorPre();
              if (g_fp_OodleCore_Plugin_Printf !=
                  (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
                (*g_fp_OodleCore_Plugin_Printf)
                          (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",
                           0x292,"OODLE ERROR : corruption : (match_zone_end - to_ptr) >= (lrl)\n");
                ooLogErrorPost();
                return false;
              }
              goto LAB_14f3501f0;
            }
            lVar20 = lVar23 - ((longlong)(((longlong)param_3 - (longlong)param_2) - uVar17) >> 6);
            if (lVar20 < 1) {
              lVar20 = 0;
            }
            param_2 = param_2 + 0x18;
            puVar16 = puVar16 + 0x18;
            uVar17 = uVar17 - 0x18;
            do {
              uVar2 = *(undefined8 *)(param_2 + uVar19);
              uVar17 = uVar17 - 8;
              uVar3 = *(undefined8 *)puVar16;
              puVar16 = puVar16 + 8;
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
            } while (0 < (longlong)uVar17);
          }
        }
      }
      iVar15 = *(int *)((longlong)&local_e0 + uVar14 * 4);
      uVar19 = (ulonglong)iVar15;
      puVar10 = param_2 + uVar17;
      uVar2 = *(undefined8 *)(auStack_f8 + uVar14 * 4);
      puVar16 = puVar16 + uVar17;
      uVar3 = *(undefined8 *)(auStack_f0 + uVar14 * 4);
      uVar5 = *(undefined8 *)(auStack_e8 + uVar14 * 4);
      *(undefined8 *)(auStack_100 + uVar14 * 4 + 4) = *(undefined8 *)(auStack_100 + uVar14 * 4);
      *(undefined8 *)(auStack_f8 + uVar14 * 4 + 4) = uVar2;
      *(undefined8 *)(auStack_f0 + uVar14 * 4 + 4) = uVar3;
      *(undefined8 *)(auStack_e8 + uVar14 * 4 + 4) = uVar5;
      local_e0 = CONCAT44(local_e0._4_4_,iVar15);
      lVar8 = 0;
      if (uVar14 == 7) {
        lVar8 = 4;
      }
      piVar22 = (int *)((longlong)piVar22 + lVar8);
      if (uVar19 < (ulonglong)((longlong)param_5 - (longlong)puVar10)) goto LAB_14f34fe4e;
      puVar1 = puVar10 + uVar19;
      if (lVar11 != 9) break;
      if (puVar12 <= puVar21) goto LAB_14f34fe0e;
      uVar6 = puVar12[-1] + 6;
      puVar12 = puVar12 + -1;
      param_2 = puVar10 + uVar6;
      *(undefined8 *)puVar10 = *(undefined8 *)puVar1;
      *(undefined8 *)(puVar10 + 8) = *(undefined8 *)(puVar1 + 8);
      uVar7 = (uint)param_2 & 7;
      pbVar24 = local_c0[uVar7];
      ppuVar13 = local_c0 + uVar7;
      if ((uchar *)0x10 < (uchar *)(ulonglong)uVar6) {
        if (param_4 + (-8 - (longlong)puVar10) < (uchar *)(ulonglong)uVar6) goto LAB_14f34fdd0;
        puVar9 = puVar1 + 0x18;
        *(undefined8 *)(puVar10 + 0x10) = *(undefined8 *)(puVar1 + 0x10);
        for (puVar10 = puVar10 + 0x18; puVar10 < param_2; puVar10 = puVar10 + 8) {
          uVar2 = *(undefined8 *)puVar9;
          puVar9 = puVar9 + 8;
          *(undefined8 *)puVar10 = uVar2;
        }
        lVar20 = lVar23 - ((longlong)param_3 - (longlong)param_2 >> 6);
        if (lVar20 < 1) {
          lVar20 = 0;
        }
      }
    }
    *(undefined8 *)puVar10 = *(undefined8 *)puVar1;
    param_2 = puVar10 + lVar11;
    ppuVar13 = local_c0 + ((uint)param_2 & 7);
  } while( true );
LAB_14f34fe4e:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x2e2,
               "OODLE ERROR : corruption : (UINTa)neg_offset >= (UINTa) (window_base - to_ptr)\n");
    ooLogErrorPost();
    return false;
  }
  goto LAB_14f3501f0;
LAB_14f34fe0e:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x304,
               "OODLE ERROR : corruption : excesses_end_ptr > excesses_ptr\n");
    ooLogErrorPost();
    return false;
  }
  goto LAB_14f3501f0;
LAB_14f34fdd0:
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x322,
               "OODLE ERROR : corruption : (UINTa)(match_end - to_ptr) >= ml\n");
    ooLogErrorPost();
    return false;
  }
  goto LAB_14f3501f0;
joined_r0x00014f34fea6:
  if (0 < lVar23) {
    bVar4 = *pbVar24;
    uVar6 = *puVar21;
    *ppuVar13 = pbVar24 + 1;
    lVar23 = lVar23 + -1;
    local_c4 = *piVar22;
    uVar14 = (ulonglong)(bVar4 >> 3 & 3);
    lVar20 = (ulonglong)(bVar4 & 7) + 2;
    uVar17 = (ulonglong)(bVar4 >> 5);
    if (uVar14 == 3) {
      uVar14 = (ulonglong)uVar6;
      puVar21 = puVar21 + 1;
    }
    if ((longlong)param_3 - (longlong)param_2 < (longlong)uVar14) {
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
        (*g_fp_OodleCore_Plugin_Printf)
                  (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_inner.inl",0x253,
                   "OODLE ERROR : corruption : (match_zone_end - to_ptr) >= lrl\n");
        ooLogErrorPost();
        return false;
      }
      goto LAB_14f3501f0;
    }
    uVar2 = *(undefined8 *)(param_2 + uVar19);
    uVar3 = *(undefined8 *)puVar16;
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
    if (8 < uVar14) {
      uVar2 = *(undefined8 *)(param_2 + uVar19 + 8);
      uVar3 = *(undefined8 *)(puVar16 + 8);
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
      if (0x10 < uVar14) {
        uVar2 = *(undefined8 *)(param_2 + uVar19 + 0x10);
        uVar3 = *(undefined8 *)(puVar16 + 0x10);
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
        if (0x18 < uVar14) {
          param_2 = param_2 + 0x18;
          puVar16 = puVar16 + 0x18;
          uVar14 = uVar14 - 0x18;
          do {
            uVar2 = *(undefined8 *)(param_2 + uVar19);
            uVar14 = uVar14 - 8;
            uVar3 = *(undefined8 *)puVar16;
            puVar16 = puVar16 + 8;
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
          } while (0 < (longlong)uVar14);
        }
      }
    }
    iVar15 = *(int *)((longlong)&local_e0 + uVar17 * 4);
    uVar19 = (ulonglong)iVar15;
    puVar10 = param_2 + uVar14;
    uVar2 = *(undefined8 *)(auStack_f8 + uVar17 * 4);
    puVar16 = puVar16 + uVar14;
    uVar3 = *(undefined8 *)(auStack_f0 + uVar17 * 4);
    uVar5 = *(undefined8 *)(auStack_e8 + uVar17 * 4);
    *(undefined8 *)(auStack_100 + uVar17 * 4 + 4) = *(undefined8 *)(auStack_100 + uVar17 * 4);
    *(undefined8 *)(auStack_f8 + uVar17 * 4 + 4) = uVar2;
    *(undefined8 *)(auStack_f0 + uVar17 * 4 + 4) = uVar3;
    *(undefined8 *)(auStack_e8 + uVar17 * 4 + 4) = uVar5;
    local_e0 = CONCAT44(local_e0._4_4_,iVar15);
    lVar11 = 0;
    if (uVar17 == 7) {
      lVar11 = 4;
    }
    piVar22 = (int *)((longlong)piVar22 + lVar11);
    if (uVar19 < (ulonglong)((longlong)param_5 - (longlong)puVar10)) goto LAB_14f34fe4e;
    puVar1 = puVar10 + uVar19;
    if (lVar20 == 9) {
      if (puVar12 <= puVar21) goto LAB_14f34fe0e;
      uVar6 = puVar12[-1] + 6;
      puVar12 = puVar12 + -1;
      param_2 = puVar10 + uVar6;
      *(undefined8 *)puVar10 = *(undefined8 *)puVar1;
      *(undefined8 *)(puVar10 + 8) = *(undefined8 *)(puVar1 + 8);
      uVar7 = (uint)param_2 & 7;
      pbVar24 = local_c0[uVar7];
      ppuVar13 = local_c0 + uVar7;
      if ((uchar *)0x10 < (uchar *)(ulonglong)uVar6) {
        if (param_4 + (-8 - (longlong)puVar10) < (uchar *)(ulonglong)uVar6) goto LAB_14f34fdd0;
        puVar9 = puVar1 + 0x18;
        *(undefined8 *)(puVar10 + 0x10) = *(undefined8 *)(puVar1 + 0x10);
        for (puVar10 = puVar10 + 0x18; puVar10 < param_2; puVar10 = puVar10 + 8) {
          uVar2 = *(undefined8 *)puVar9;
          puVar9 = puVar9 + 8;
          *(undefined8 *)puVar10 = uVar2;
        }
      }
    }
    else {
      *(undefined8 *)puVar10 = *(undefined8 *)puVar1;
      param_2 = puVar10 + lVar20;
      uVar6 = (uint)param_2 & 7;
      pbVar24 = local_c0[uVar6];
      ppuVar13 = local_c0 + uVar6;
    }
    goto joined_r0x00014f34fea6;
  }
  if (param_2 < param_4) {
    uVar17 = (longlong)param_4 - (longlong)param_2;
    if (7 < (longlong)uVar17) {
      uVar14 = uVar17 >> 3;
      uVar17 = uVar17 + uVar14 * -8;
      do {
        uVar2 = *(undefined8 *)(param_2 + uVar19);
        uVar3 = *(undefined8 *)puVar16;
        puVar16 = puVar16 + 8;
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
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    if (uVar17 != 0) {
      lVar23 = (longlong)puVar16 - (longlong)param_2;
      do {
        *param_2 = param_2[lVar23] + param_2[uVar19];
        param_2 = param_2 + 1;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
  }
  if (param_2 == param_4) {
    if (piVar22 == local_130) {
      if (puVar21 == puVar12) {
        return true;
      }
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto LAB_14f3501f0;
      pcVar18 = "OODLE ERROR : corruption : excesses_ptr == excesses_end_ptr\n";
      iVar15 = 0x197;
    }
    else {
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto LAB_14f3501f0;
      pcVar18 = "OODLE ERROR : corruption : offsets_ptr == offsets_end\n";
      iVar15 = 0x196;
    }
  }
  else {
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto LAB_14f3501f0;
    pcVar18 = "OODLE ERROR : corruption : to_ptr == chunk_end\n";
    iVar15 = 0x18d;
  }
  (*g_fp_OodleCore_Plugin_Printf)
            (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc_decode_parse_outer.inl",iVar15,pcVar18);
LAB_14f3501f0:
  ooLogErrorPost();
  return false;
}

// ByteCopy<oo2::newlzhc_encoder_parse,oo2::newlzhc_encoder_parse> @ 14f350230

void __cdecl
oo2::ByteCopy<oo2::newlzhc_encoder_parse,oo2::newlzhc_encoder_parse>
          (newlzhc_encoder_parse *param_1,newlzhc_encoder_parse *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2->lrl;
  iVar2 = param_2->ml;
  iVar3 = param_2->offset;
  param_1->lastoffset = param_2->lastoffset;
  param_1->lrl = iVar1;
  param_1->ml = iVar2;
  param_1->offset = iVar3;
  return;
}

// ByteSwap<oo2::newlzhc_encoder_parse> @ 14f350240

void __cdecl
oo2::ByteSwap<oo2::newlzhc_encoder_parse>
          (newlzhc_encoder_parse *param_1,newlzhc_encoder_parse *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = param_2->lrl;
  iVar2 = param_2->ml;
  iVar3 = param_2->offset;
  iVar4 = param_1->lastoffset;
  iVar5 = param_1->lrl;
  iVar6 = param_1->ml;
  iVar7 = param_1->offset;
  param_1->lastoffset = param_2->lastoffset;
  param_1->lrl = iVar1;
  param_1->ml = iVar2;
  param_1->offset = iVar3;
  param_2->lastoffset = iVar4;
  param_2->lrl = iVar5;
  param_2->ml = iVar6;
  param_2->offset = iVar7;
  return;
}

// OodleDelete<oo2::CTMF<unsigned_int,0,0,4>_> @ 14f350260

void __cdecl oo2::OodleDelete<oo2::CTMF<unsigned_int,0,0,4>_>(CTMF<unsigned_int,0,0,4> *param_1)

{
  destruct<oo2::CTMF<unsigned_int,0,0,4>_>(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014f350276. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleCore_Plugin_Free)(param_1);
  return;
}

// appendv<oo2::vector_a<oo2::newlzhc_encoder_parse>_> @ 14f350290

void __thiscall
oo2::vector_flex<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>::
appendv<oo2::vector_a<oo2::newlzhc_encoder_parse>_>
          (vector_flex<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>
           *this,vector_a<oo2::newlzhc_encoder_parse> *param_1)

{
  vector_base<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>::insert
            ((vector_base<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>
              *)this,(*(longlong *)&this->field_0x10 << 4) >> 4,*(newlzhc_encoder_parse **)param_1,
             *(newlzhc_encoder_parse **)param_1 + *(longlong *)&param_1->field_0x10);
  return;
}

// check_value_cast<int,unsigned___int64> @ 14f3502c0

int __cdecl oo2::check_value_cast<int,unsigned___int64>(ulong64 *param_1)

{
  return (int)*param_1;
}

// construct<oo2::CTMF<unsigned_int,1,0,4>_> @ 14f3502d0

CTMF<unsigned_int,1,0,4> * __cdecl
oo2::construct<oo2::CTMF<unsigned_int,1,0,4>_>(CTMF<unsigned_int,1,0,4> *param_1)

{
  if (param_1 != (CTMF<unsigned_int,1,0,4> *)0x0) {
    param_1->m_hash_table_arena = (rrArenaAllocator *)0x0;
    (param_1->m_hash_table).m_ptr = (uint *)0x0;
    (param_1->m_hash_table).m_alloc = (void *)0x0;
    param_1->m_table_size_bits = 0;
    param_1->m_hash_row_mask = 0;
    param_1->m_base_ptr = (uchar *)0x0;
    param_1->m_next_ptr = (uchar *)0x0;
    param_1->m_next_row = (uint *)0x0;
    param_1->m_next_row_second = (uint *)0x0;
    param_1->m_hash_mul = 0;
    param_1->m_next_hash = 0;
  }
  return param_1;
}

// construct<oo2::CTMF<unsigned_int,2,8,4>_> @ 14f350310

CTMF<unsigned_int,2,8,4> * __cdecl
oo2::construct<oo2::CTMF<unsigned_int,2,8,4>_>(CTMF<unsigned_int,2,8,4> *param_1)

{
  if (param_1 != (CTMF<unsigned_int,2,8,4> *)0x0) {
    param_1->m_hash_table_arena = (rrArenaAllocator *)0x0;
    (param_1->m_hash_table).m_ptr = (uint *)0x0;
    (param_1->m_hash_table).m_alloc = (void *)0x0;
    param_1->m_table_size_bits = 0;
    param_1->m_hash_row_mask = 0;
    param_1->m_base_ptr = (uchar *)0x0;
    param_1->m_next_ptr = (uchar *)0x0;
    param_1->m_next_row = (uint *)0x0;
    param_1->m_next_row_second = (uint *)0x0;
    param_1->m_hash_mul = 0;
    param_1->m_next_hash = 0;
  }
  return param_1;
}

// construct<oo2::CTMF<unsigned_int,3,0,4>_> @ 14f350350

CTMF<unsigned_int,3,0,4> * __cdecl
oo2::construct<oo2::CTMF<unsigned_int,3,0,4>_>(CTMF<unsigned_int,3,0,4> *param_1)

{
  if (param_1 != (CTMF<unsigned_int,3,0,4> *)0x0) {
    param_1->m_hash_table_arena = (rrArenaAllocator *)0x0;
    (param_1->m_hash_table).m_ptr = (uint *)0x0;
    (param_1->m_hash_table).m_alloc = (void *)0x0;
    param_1->m_table_size_bits = 0;
    param_1->m_hash_row_mask = 0;
    param_1->m_base_ptr = (uchar *)0x0;
    param_1->m_next_ptr = (uchar *)0x0;
    param_1->m_next_row = (uint *)0x0;
    param_1->m_next_row_second = (uint *)0x0;
    param_1->m_hash_mul = 0;
    param_1->m_next_hash = 0;
  }
  return param_1;
}

// construct<oo2::CTMF<unsigned_int,0,0,4>_> @ 14f350390

CTMF<unsigned_int,0,0,4> * __cdecl
oo2::construct<oo2::CTMF<unsigned_int,0,0,4>_>(CTMF<unsigned_int,0,0,4> *param_1)

{
  if (param_1 != (CTMF<unsigned_int,0,0,4> *)0x0) {
    param_1->m_hash_table_arena = (rrArenaAllocator *)0x0;
    (param_1->m_hash_table).m_ptr = (uint *)0x0;
    (param_1->m_hash_table).m_alloc = (void *)0x0;
    param_1->m_table_size_bits = 0;
    param_1->m_hash_row_mask = 0;
    param_1->m_base_ptr = (uchar *)0x0;
    param_1->m_next_ptr = (uchar *)0x0;
    param_1->m_next_row = (uint *)0x0;
    param_1->m_next_row_second = (uint *)0x0;
    param_1->m_hash_mul = 0;
    param_1->m_next_hash = 0;
  }
  return param_1;
}

// construct<oo2::newlzhc_encoder_parse> @ 14f3503d0

newlzhc_encoder_parse * __cdecl
oo2::construct<oo2::newlzhc_encoder_parse>(newlzhc_encoder_parse *param_1)

{
  if (param_1 != (newlzhc_encoder_parse *)0x0) {
    param_1->lastoffset = 0;
    param_1->lrl = 0;
    param_1->ml = 0;
    param_1->offset = 0;
  }
  return param_1;
}

// construct<oo2::newlzhc_encoder_parse,oo2::newlzhc_encoder_parse_const_&> @ 14f3503f0

newlzhc_encoder_parse * __cdecl
oo2::construct<oo2::newlzhc_encoder_parse,oo2::newlzhc_encoder_parse_const_&>
          (newlzhc_encoder_parse *param_1,newlzhc_encoder_parse *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != (newlzhc_encoder_parse *)0x0) {
    iVar1 = param_2->lrl;
    iVar2 = param_2->ml;
    iVar3 = param_2->offset;
    param_1->lastoffset = param_2->lastoffset;
    param_1->lrl = iVar1;
    param_1->ml = iVar2;
    param_1->offset = iVar3;
  }
  return param_1;
}

// copy<oo2::newlzhc_encoder_parse> @ 14f350420

void __cdecl
oo2::copy<oo2::newlzhc_encoder_parse>
          (newlzhc_encoder_parse *param_1,newlzhc_encoder_parse *param_2,ulong64 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  newlzhc_encoder_parse *pnVar4;
  
  if (param_3 != 0) {
    pnVar4 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)pnVar4);
      uVar2 = *puVar1;
      uVar3 = puVar1[1];
      pnVar4->lastoffset = (int)uVar2;
      pnVar4->lrl = (int)((ulonglong)uVar2 >> 0x20);
      pnVar4->ml = (int)uVar3;
      pnVar4->offset = (int)((ulonglong)uVar3 >> 0x20);
      param_3 = param_3 - 1;
      pnVar4 = pnVar4 + 1;
    } while (param_3 != 0);
  }
  return;
}

// copy_construct<oo2::newlzhc_encoder_parse> @ 14f350450

void __cdecl
oo2::copy_construct<oo2::newlzhc_encoder_parse>
          (newlzhc_encoder_parse *param_1,newlzhc_encoder_parse *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != (newlzhc_encoder_parse *)0x0) {
    iVar1 = param_2->lrl;
    iVar2 = param_2->ml;
    iVar3 = param_2->offset;
    param_1->lastoffset = param_2->lastoffset;
    param_1->lrl = iVar1;
    param_1->ml = iVar2;
    param_1->offset = iVar3;
  }
  return;
}

// copy_construct<oo2::newlzhc_encoder_parse> @ 14f350470

void __cdecl
oo2::copy_construct<oo2::newlzhc_encoder_parse>
          (newlzhc_encoder_parse *param_1,newlzhc_encoder_parse *param_2,ulong64 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    lVar4 = (longlong)param_2 - (longlong)param_1;
    do {
      if (param_1 != (newlzhc_encoder_parse *)0x0) {
        puVar1 = (undefined8 *)(lVar4 + (longlong)param_1);
        uVar2 = *puVar1;
        uVar3 = puVar1[1];
        param_1->lastoffset = (int)uVar2;
        param_1->lrl = (int)((ulonglong)uVar2 >> 0x20);
        param_1->ml = (int)uVar3;
        param_1->offset = (int)((ulonglong)uVar3 >> 0x20);
      }
      param_1 = param_1 + 1;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return;
}

// destruct<oo2::CTMF<unsigned_int,1,0,4>_> @ 14f3504a0

CTMF<unsigned_int,1,0,4> * __cdecl
oo2::destruct<oo2::CTMF<unsigned_int,1,0,4>_>(CTMF<unsigned_int,1,0,4> *param_1)

{
  rrArenaAllocator *this;
  uint *puVar1;
  void *pvVar2;
  
  this = param_1->m_hash_table_arena;
  puVar1 = (param_1->m_hash_table).m_ptr;
  if (puVar1 != (uint *)0x0) {
    if ((this == (rrArenaAllocator *)0x0) ||
       (pvVar2 = (param_1->m_hash_table).m_alloc, pvVar2 == (void *)0x0)) {
      (*g_fp_OodleCore_Plugin_Free)(puVar1);
    }
    else {
      if (this->m_unorderedStart != 0) {
        rrArenaAllocator::Free
                  (this,pvVar2,(1L << ((byte)param_1->m_table_size_bits & 0x3f)) * 4 + 0x40);
      }
      (param_1->m_hash_table).m_alloc = (void *)0x0;
    }
    (param_1->m_hash_table).m_ptr = (uint *)0x0;
  }
  return param_1;
}

// destruct<oo2::CTMF<unsigned_int,2,8,4>_> @ 14f350520

CTMF<unsigned_int,2,8,4> * __cdecl
oo2::destruct<oo2::CTMF<unsigned_int,2,8,4>_>(CTMF<unsigned_int,2,8,4> *param_1)

{
  rrArenaAllocator *this;
  uint *puVar1;
  void *pvVar2;
  
  this = param_1->m_hash_table_arena;
  puVar1 = (param_1->m_hash_table).m_ptr;
  if (puVar1 != (uint *)0x0) {
    if ((this == (rrArenaAllocator *)0x0) ||
       (pvVar2 = (param_1->m_hash_table).m_alloc, pvVar2 == (void *)0x0)) {
      (*g_fp_OodleCore_Plugin_Free)(puVar1);
    }
    else {
      if (this->m_unorderedStart != 0) {
        rrArenaAllocator::Free
                  (this,pvVar2,(1L << ((byte)param_1->m_table_size_bits & 0x3f)) * 4 + 0x40);
      }
      (param_1->m_hash_table).m_alloc = (void *)0x0;
    }
    (param_1->m_hash_table).m_ptr = (uint *)0x0;
  }
  return param_1;
}

// destruct<oo2::CTMF<unsigned_int,3,0,4>_> @ 14f3505a0

CTMF<unsigned_int,3,0,4> * __cdecl
oo2::destruct<oo2::CTMF<unsigned_int,3,0,4>_>(CTMF<unsigned_int,3,0,4> *param_1)

{
  rrArenaAllocator *this;
  uint *puVar1;
  void *pvVar2;
  
  this = param_1->m_hash_table_arena;
  puVar1 = (param_1->m_hash_table).m_ptr;
  if (puVar1 != (uint *)0x0) {
    if ((this == (rrArenaAllocator *)0x0) ||
       (pvVar2 = (param_1->m_hash_table).m_alloc, pvVar2 == (void *)0x0)) {
      (*g_fp_OodleCore_Plugin_Free)(puVar1);
    }
    else {
      if (this->m_unorderedStart != 0) {
        rrArenaAllocator::Free
                  (this,pvVar2,(1L << ((byte)param_1->m_table_size_bits & 0x3f)) * 4 + 0x40);
      }
      (param_1->m_hash_table).m_alloc = (void *)0x0;
    }
    (param_1->m_hash_table).m_ptr = (uint *)0x0;
  }
  return param_1;
}

// destruct<oo2::CTMF<unsigned_int,0,0,4>_> @ 14f350620

CTMF<unsigned_int,0,0,4> * __cdecl
oo2::destruct<oo2::CTMF<unsigned_int,0,0,4>_>(CTMF<unsigned_int,0,0,4> *param_1)

{
  rrArenaAllocator *this;
  uint *puVar1;
  void *pvVar2;
  
  this = param_1->m_hash_table_arena;
  puVar1 = (param_1->m_hash_table).m_ptr;
  if (puVar1 != (uint *)0x0) {
    if ((this == (rrArenaAllocator *)0x0) ||
       (pvVar2 = (param_1->m_hash_table).m_alloc, pvVar2 == (void *)0x0)) {
      (*g_fp_OodleCore_Plugin_Free)(puVar1);
    }
    else {
      if (this->m_unorderedStart != 0) {
        rrArenaAllocator::Free
                  (this,pvVar2,(1L << ((byte)param_1->m_table_size_bits & 0x3f)) * 4 + 0x40);
      }
      (param_1->m_hash_table).m_alloc = (void *)0x0;
    }
    (param_1->m_hash_table).m_ptr = (uint *)0x0;
  }
  return param_1;
}

// destruct<oo2::newlzhc_encoder_parse> @ 14f3506a0

newlzhc_encoder_parse * __cdecl
oo2::destruct<oo2::newlzhc_encoder_parse>(newlzhc_encoder_parse *param_1)

{
  return param_1;
}

// destruct<oo2::newlzhc_encoder_parse> @ 14f3506b0

newlzhc_encoder_parse * __cdecl
oo2::destruct<oo2::newlzhc_encoder_parse>(newlzhc_encoder_parse *param_1,ulong64 param_2)

{
  return param_1;
}

// extend_construct_in_place<> @ 14f3506c0

void __thiscall
oo2::vector_base<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>::
extend_construct_in_place<>
          (vector_base<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>
           *this)

{
  ulong64 uVar1;
  code *pcVar2;
  int iVar3;
  undefined8 *puVar4;
  
  uVar1 = this->m_size;
  if ((ulonglong)this->_padding_ < uVar1 + 1) {
    iVar3 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h",0x3f,
                               "oo2::vector_storage_a<struct oo2::newlzhc_encoder_parse>::needmakefit"
                               ,"newsize <= m_capacity");
    if (iVar3 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->m_size = this->m_size + 1;
  puVar4 = (undefined8 *)(uVar1 * 0x10 + this->_padding_);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 0;
    puVar4[1] = 0;
  }
  return;
}

// extend_construct_in_place<oo2::newlzhc_encoder_parse_const_&> @ 14f350740

void __thiscall
oo2::vector_base<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>::
extend_construct_in_place<oo2::newlzhc_encoder_parse_const_&>
          (vector_base<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>
           *this,newlzhc_encoder_parse *param_1)

{
  ulong64 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  
  uVar1 = this->m_size;
  if ((ulonglong)this->_padding_ < uVar1 + 1) {
    iVar4 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h",0x3f,
                               "oo2::vector_storage_a<struct oo2::newlzhc_encoder_parse>::needmakefit"
                               ,"newsize <= m_capacity");
    if (iVar4 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->m_size = this->m_size + 1;
  puVar5 = (undefined8 *)(uVar1 * 0x10 + this->_padding_);
  if (puVar5 != (undefined8 *)0x0) {
    uVar3 = *(undefined8 *)&param_1->ml;
    *puVar5 = *(undefined8 *)param_1;
    puVar5[1] = uVar3;
  }
  return;
}

// forward<oo2::newlzhc_encoder_parse_const_&> @ 14f3507c0

newlzhc_encoder_parse * __cdecl
oo2::forward<oo2::newlzhc_encoder_parse_const_&>(newlzhc_encoder_parse *param_1)

{
  return param_1;
}

// hash_n_bytes<8> @ 14f3507d0

ulong64 __cdecl oo2::`anonymous_namespace'::hash_n_bytes<8>(uchar *param_1,int param_2)

{
  return (ulonglong)(*(longlong *)param_1 * -0x30e44323485a9b9d) >> (0x40U - (char)param_2 & 0x3f);
}

// hash_n_bytes<0> @ 14f350800

ulong64 __cdecl oo2::`anonymous_namespace'::hash_n_bytes<0>(uchar *param_1,int param_2)

{
  return 0;
}

// move<oo2::newlzhc_encoder_parse> @ 14f350820

void __cdecl
oo2::move<oo2::newlzhc_encoder_parse>
          (newlzhc_encoder_parse *param_1,newlzhc_encoder_parse *param_2,ulong64 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  newlzhc_encoder_parse *pnVar4;
  longlong lVar5;
  
  if (param_2 < param_1) {
    lVar5 = param_3 - 1;
    if (-1 < lVar5) {
      pnVar4 = param_1 + lVar5;
      do {
        lVar5 = lVar5 + -1;
        puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)pnVar4);
        uVar2 = *puVar1;
        uVar3 = puVar1[1];
        pnVar4->lastoffset = (int)uVar2;
        pnVar4->lrl = (int)((ulonglong)uVar2 >> 0x20);
        pnVar4->ml = (int)uVar3;
        pnVar4->offset = (int)((ulonglong)uVar3 >> 0x20);
        pnVar4 = pnVar4 + -1;
      } while (-1 < lVar5);
      return;
    }
  }
  else if (param_3 != 0) {
    pnVar4 = param_1;
    do {
      puVar1 = (undefined8 *)((longlong)pnVar4 + ((longlong)param_2 - (longlong)param_1));
      uVar2 = *puVar1;
      uVar3 = puVar1[1];
      pnVar4->lastoffset = (int)uVar2;
      pnVar4->lrl = (int)((ulonglong)uVar2 >> 0x20);
      pnVar4->ml = (int)uVar3;
      pnVar4->offset = (int)((ulonglong)uVar3 >> 0x20);
      param_3 = param_3 - 1;
      pnVar4 = pnVar4 + 1;
    } while (param_3 != 0);
  }
  return;
}

// newLZHC_encode_chunk<oo2::CTMF<unsigned_int,1,0,4>,0,1,0> @ 14f350880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

long64 __cdecl
oo2::newLZHC_encode_chunk<oo2::CTMF<unsigned_int,1,0,4>,0,1,0>
          (newlz_vtable *param_1,newlz_encoder_scratch *param_2,uchar *param_3,uchar *param_4,
          int param_5,uchar *param_6,uchar *param_7,long64 param_8,int *param_9,float *param_10,
          OodleKrakenChunkDeadlines *param_11)

{
  rrArenaAllocator *this;
  void *pvVar1;
  uint *puVar2;
  ulonglong uVar3;
  code *pcVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  newlzhc_histo *pnVar14;
  long64 lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong *puVar18;
  longlong lVar19;
  int iVar20;
  ulonglong *puVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  char *pcVar25;
  longlong lVar26;
  uint uVar27;
  undefined8 *puVar28;
  ulonglong uVar29;
  longlong lVar30;
  short sVar31;
  char *pcVar32;
  int iVar33;
  uint uVar34;
  uint uVar35;
  ulonglong *puVar36;
  ulonglong *puVar37;
  bool bVar38;
  bool bVar39;
  undefined1 auStackY_2a8 [32];
  ulonglong *local_1e0;
  uint local_1d8;
  void *local_188;
  ulonglong local_180;
  longlong local_178;
  ulonglong *local_170;
  longlong local_168;
  ulonglong local_160;
  void *local_158;
  ulonglong local_150;
  longlong local_148;
  newlz_vtable *local_140;
  uchar *local_138;
  uchar *local_130;
  int *local_128;
  float *local_120;
  newlz_encoder_scratch *local_118;
  OodleLZ_CompressOptions *local_110;
  rrArenaAllocator *local_108;
  newlzhc_histo *local_100;
  undefined8 local_f8;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  uint local_a0 [4];
  uint local_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint local_80;
  int iStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint local_70 [4];
  ulonglong local_60;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  uVar29 = (ulonglong)param_5;
  local_130 = param_6;
  local_138 = param_7;
  local_128 = param_9;
  local_120 = param_10;
  *param_9 = -1;
  if (param_5 < 0x81) {
    return uVar29;
  }
  this = param_2->arena;
  local_110 = param_1->pOptions;
  local_1d8 = local_110->dictionarySize;
  if ((int)local_1d8 < 1) {
    local_1d8 = 0x40000000;
  }
  else if (0x40000000 < (int)local_1d8) {
    local_1d8 = 0x40000000;
  }
  iVar20 = 4;
  if (4 < local_110->minMatchLen) {
    iVar20 = local_110->minMatchLen;
  }
  pvVar1 = param_1->matcher;
  local_188 = (void *)0x0;
  local_180 = 0;
  local_178 = 0;
  local_150 = uVar29;
  local_140 = param_1;
  local_118 = param_2;
  newlz_scratchblock::extend
            (&param_2->newlzhc_parsevec_space,(uVar29 & 0xfffffffffffffff) << 3,this);
  local_188 = (param_2->newlzhc_parsevec_space).m_ptr;
  local_180 = (ulonglong)(param_2->newlzhc_parsevec_space).m_size >> 4;
  local_160 = local_180;
  local_158 = local_188;
  newlz_scratchblock::extend
            (&param_2->literals_space,(longlong)(int)(param_5 + 0x100 + ((uint)param_5 >> 4)),this);
  puVar36 = (ulonglong *)(param_4 + (uVar29 - 8));
  local_a0[0] = (uint)___xmm_00000008000000080000000800000008;
  local_a0[1] = (uint)((ulonglong)___xmm_00000008000000080000000800000008 >> 0x20);
  local_a0[2] = (uint)_UNK_150b50de8;
  local_a0[3] = (uint)((ulonglong)_UNK_150b50de8 >> 0x20);
  uVar29 = 8;
  local_90 = 8;
  uStack_8c = 8;
  uStack_88 = 8;
  local_148 = 8;
  if (param_8 != 0) {
    local_148 = 0;
  }
  local_1e0 = (ulonglong *)(param_4 + local_148);
  *(ulonglong **)((longlong)pvVar1 + 0x28) = local_1e0;
  bVar5 = (byte)*(undefined4 *)((longlong)pvVar1 + 0x18) & 0x1f;
  uVar22 = (uint)(*local_1e0 * *(longlong *)((longlong)pvVar1 + 0x40) >> 0x20);
  uVar22 = uVar22 << bVar5 | uVar22 >> 0x20 - bVar5;
  *(uint *)((longlong)pvVar1 + 0x48) = uVar22;
  *(ulonglong *)((longlong)pvVar1 + 0x30) =
       *(longlong *)((longlong)pvVar1 + 8) +
       (ulonglong)(*(uint *)((longlong)pvVar1 + 0x1c) & uVar22) * 4;
  local_f8 = 0x8c04;
  local_108 = this;
  if (this == (rrArenaAllocator *)0x0) {
    pnVar14 = (*g_fp_OodleCore_Plugin_MallocAligned)(0x8c04,0x10);
    if (pnVar14 == (newlzhc_histo *)0x0) {
                    /* WARNING: Subroutine does not return */
      Oodle_Core_Malloc_Failed(0x8c04);
    }
  }
  else {
    pnVar14 = rrArenaAllocator::Alloc(this,0x8c04,0);
  }
  local_100 = pnVar14;
  if ((pnVar14 == (newlzhc_histo *)0x0) &&
     (iVar9 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\rrarenaallocator.h",0x19a,
                                 "oo2::rrScopeArenaAlloc::rrScopeArenaAlloc","m_ptr != NULL"),
     iVar9 != 0)) {
    pcVar4 = (code *)swi(3);
    lVar15 = (*pcVar4)();
    return lVar15;
  }
  rrMemSetZero(pnVar14,0x8c04);
  do {
    uVar22 = local_a0[0];
    lVar19 = local_178;
    local_168 = (longlong)(int)local_a0[0];
    puVar37 = local_1e0;
    while( true ) {
      local_170 = (ulonglong *)((longlong)puVar37 + 1);
      if (*(uint *)local_170 == *(uint *)((longlong)puVar37 + (1 - local_168))) break;
      if ((longlong)(param_4 + (longlong)param_5 + -0x10) - (longlong)puVar37 < 2)
      goto LAB_14f351606;
      uVar35 = (uint)*puVar37;
      puVar2 = *(uint **)((longlong)pvVar1 + 0x30);
      uVar24 = *(uint *)((longlong)pvVar1 + 0x48);
      uVar34 = (int)puVar37 - *(int *)((longlong)pvVar1 + 0x20);
      *(ulonglong **)((longlong)pvVar1 + 0x28) = local_170;
      bVar5 = (byte)*(undefined4 *)((longlong)pvVar1 + 0x18) & 0x1f;
      uVar23 = (uint)(*local_170 * *(longlong *)((longlong)pvVar1 + 0x40) >> 0x20);
      uVar23 = uVar23 << bVar5 | uVar23 >> 0x20 - bVar5;
      *(uint *)((longlong)pvVar1 + 0x48) = uVar23;
      *(ulonglong *)((longlong)pvVar1 + 0x30) =
           *(longlong *)((longlong)pvVar1 + 8) +
           (ulonglong)(*(uint *)((longlong)pvVar1 + 0x1c) & uVar23) * 4;
      uVar23 = 7;
      uVar10 = *(uint *)((longlong)puVar37 - (ulonglong)local_a0[0]);
      sVar31 = (short)uVar35;
      if (sVar31 == (short)uVar10) {
        uVar10 = uVar10 ^ uVar35;
        if (uVar10 == 0) {
          puVar18 = (ulonglong *)((longlong)puVar37 + 4);
          lVar30 = (longlong)((longlong)puVar37 - (ulonglong)local_a0[0]) - (longlong)puVar37;
          puVar21 = puVar18;
          if (puVar18 <= puVar36 + -1) {
LAB_14f350c00:
            uVar16 = *(ulonglong *)(lVar30 + (longlong)puVar21) ^ *puVar21;
            if (uVar16 == 0) goto code_r0x00014f350c09;
            uVar17 = 0;
            if (uVar16 != 0) {
              for (; (uVar16 >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
              }
            }
            iVar9 = ((int)(uVar17 >> 3) - (int)puVar18) + (int)puVar21;
            goto LAB_14f350c34;
          }
LAB_14f350c12:
          lVar26 = (longlong)puVar21 - (longlong)puVar18;
          iVar9 = (int)lVar26;
          for (; (puVar21 < puVar36 &&
                 (iVar9 = (int)lVar26, (char)*puVar21 == *(char *)((longlong)puVar21 + lVar30)));
              puVar21 = (ulonglong *)((longlong)puVar21 + 1)) {
            lVar26 = lVar26 + 1;
            iVar9 = (int)lVar26;
          }
LAB_14f350c34:
          iVar9 = iVar9 + 4;
        }
        else {
          iVar9 = 3 - (uint)((uVar10 & 0xffffff) != 0);
        }
        uVar23 = iVar9 * 8 + 6;
        if ((int)uVar23 < 7) {
          uVar23 = 7;
        }
      }
      uVar11 = *(uint *)((longlong)puVar37 - (ulonglong)local_a0[1]);
      uVar10 = uVar23;
      if (sVar31 == (short)uVar11) {
        uVar11 = uVar11 ^ uVar35;
        if (uVar11 == 0) {
          puVar18 = (ulonglong *)((longlong)puVar37 + 4);
          lVar30 = (longlong)((longlong)puVar37 - (ulonglong)local_a0[1]) - (longlong)puVar37;
          puVar21 = puVar18;
          if (puVar18 <= puVar36 + -1) {
LAB_14f350ca5:
            uVar16 = *(ulonglong *)(lVar30 + (longlong)puVar21) ^ *puVar21;
            if (uVar16 == 0) goto code_r0x00014f350cae;
            uVar17 = 0;
            if (uVar16 != 0) {
              for (; (uVar16 >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
              }
            }
            iVar9 = ((int)(uVar17 >> 3) - (int)puVar18) + (int)puVar21;
            goto LAB_14f350cd9;
          }
LAB_14f350cb7:
          lVar26 = (longlong)puVar21 - (longlong)puVar18;
          iVar9 = (int)lVar26;
          for (; (puVar21 < puVar36 &&
                 (iVar9 = (int)lVar26, (char)*puVar21 == *(char *)(lVar30 + (longlong)puVar21)));
              puVar21 = (ulonglong *)((longlong)puVar21 + 1)) {
            lVar26 = lVar26 + 1;
            iVar9 = (int)lVar26;
          }
LAB_14f350cd9:
          iVar9 = iVar9 + 4;
        }
        else {
          iVar9 = 3 - (uint)((uVar11 & 0xffffff) != 0);
        }
        uVar10 = iVar9 * 8 + 5;
        if ((int)uVar10 < (int)uVar23) {
          uVar10 = uVar23;
        }
      }
      uVar11 = *(uint *)((longlong)puVar37 - (ulonglong)local_a0[2]);
      uVar23 = uVar10;
      if (sVar31 == (short)uVar11) {
        uVar11 = uVar11 ^ uVar35;
        if (uVar11 == 0) {
          puVar18 = (ulonglong *)((longlong)puVar37 + 4);
          lVar30 = (longlong)((longlong)puVar37 - (ulonglong)local_a0[2]) - (longlong)puVar37;
          puVar21 = puVar18;
          if (puVar18 <= puVar36 + -1) {
LAB_14f350d45:
            uVar16 = *(ulonglong *)(lVar30 + (longlong)puVar21) ^ *puVar21;
            if (uVar16 == 0) goto code_r0x00014f350d4e;
            uVar17 = 0;
            if (uVar16 != 0) {
              for (; (uVar16 >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
              }
            }
            iVar9 = ((int)(uVar17 >> 3) - (int)puVar18) + (int)puVar21;
            goto LAB_14f350d79;
          }
LAB_14f350d57:
          lVar26 = (longlong)puVar21 - (longlong)puVar18;
          iVar9 = (int)lVar26;
          for (; (puVar21 < puVar36 &&
                 (iVar9 = (int)lVar26, (char)*puVar21 == *(char *)(lVar30 + (longlong)puVar21)));
              puVar21 = (ulonglong *)((longlong)puVar21 + 1)) {
            lVar26 = lVar26 + 1;
            iVar9 = (int)lVar26;
          }
LAB_14f350d79:
          iVar9 = iVar9 + 4;
        }
        else {
          iVar9 = 3 - (uint)((uVar11 & 0xffffff) != 0);
        }
        uVar23 = iVar9 * 8 + 4;
        if ((int)uVar23 < (int)uVar10) {
          uVar23 = uVar10;
        }
      }
      uVar11 = *(uint *)((longlong)puVar37 - (ulonglong)local_a0[3]);
      uVar10 = uVar23;
      if (sVar31 == (short)uVar11) {
        uVar11 = uVar11 ^ uVar35;
        if (uVar11 == 0) {
          puVar18 = (ulonglong *)((longlong)puVar37 + 4);
          lVar30 = (longlong)((longlong)puVar37 - (ulonglong)local_a0[3]) - (longlong)puVar37;
          puVar21 = puVar18;
          if (puVar18 <= puVar36 + -1) {
LAB_14f350de5:
            uVar16 = *(ulonglong *)(lVar30 + (longlong)puVar21) ^ *puVar21;
            if (uVar16 == 0) goto code_r0x00014f350dee;
            uVar17 = 0;
            if (uVar16 != 0) {
              for (; (uVar16 >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
              }
            }
            iVar9 = ((int)(uVar17 >> 3) - (int)puVar18) + (int)puVar21;
            goto LAB_14f350e19;
          }
LAB_14f350df7:
          lVar26 = (longlong)puVar21 - (longlong)puVar18;
          iVar9 = (int)lVar26;
          for (; (puVar21 < puVar36 &&
                 (iVar9 = (int)lVar26, (char)*puVar21 == *(char *)(lVar30 + (longlong)puVar21)));
              puVar21 = (ulonglong *)((longlong)puVar21 + 1)) {
            lVar26 = lVar26 + 1;
            iVar9 = (int)lVar26;
          }
LAB_14f350e19:
          iVar9 = iVar9 + 4;
        }
        else {
          iVar9 = 3 - (uint)((uVar11 & 0xffffff) != 0);
        }
        uVar10 = iVar9 * 8 + 3;
        if ((int)uVar10 < (int)uVar23) {
          uVar10 = uVar23;
        }
      }
      uVar11 = *(uint *)((longlong)puVar37 - uVar29);
      uVar23 = uVar10;
      if (sVar31 == (short)uVar11) {
        uVar11 = uVar11 ^ uVar35;
        if (uVar11 == 0) {
          puVar18 = (ulonglong *)((longlong)puVar37 + 4);
          lVar30 = (longlong)((longlong)puVar37 - uVar29) - (longlong)puVar37;
          puVar21 = puVar18;
          if (puVar18 <= puVar36 + -1) {
LAB_14f350e85:
            uVar29 = *(ulonglong *)(lVar30 + (longlong)puVar21) ^ *puVar21;
            if (uVar29 == 0) goto code_r0x00014f350e8e;
            uVar16 = 0;
            if (uVar29 != 0) {
              for (; (uVar29 >> uVar16 & 1) == 0; uVar16 = uVar16 + 1) {
              }
            }
            iVar9 = ((int)(uVar16 >> 3) - (int)puVar18) + (int)puVar21;
            goto LAB_14f350eb9;
          }
LAB_14f350e97:
          lVar26 = (longlong)puVar21 - (longlong)puVar18;
          iVar9 = (int)lVar26;
          for (; (puVar21 < puVar36 &&
                 (iVar9 = (int)lVar26, (char)*puVar21 == *(char *)(lVar30 + (longlong)puVar21)));
              puVar21 = (ulonglong *)((longlong)puVar21 + 1)) {
            lVar26 = lVar26 + 1;
            iVar9 = (int)lVar26;
          }
LAB_14f350eb9:
          iVar9 = iVar9 + 4;
        }
        else {
          iVar9 = 3 - (uint)((uVar11 & 0xffffff) != 0);
        }
        uVar23 = iVar9 * 8 + 2;
        if ((int)uVar23 < (int)uVar10) {
          uVar23 = uVar10;
        }
      }
      uVar11 = *(uint *)((longlong)puVar37 - (ulonglong)uStack_8c);
      uVar10 = uVar23;
      if (sVar31 == (short)uVar11) {
        uVar11 = uVar11 ^ uVar35;
        if (uVar11 == 0) {
          puVar18 = (ulonglong *)((longlong)puVar37 + 4);
          lVar30 = (longlong)((longlong)puVar37 - (ulonglong)uStack_8c) - (longlong)puVar37;
          puVar21 = puVar18;
          if (puVar18 <= puVar36 + -1) {
LAB_14f350f25:
            uVar29 = *(ulonglong *)(lVar30 + (longlong)puVar21) ^ *puVar21;
            if (uVar29 == 0) goto code_r0x00014f350f2e;
            uVar16 = 0;
            if (uVar29 != 0) {
              for (; (uVar29 >> uVar16 & 1) == 0; uVar16 = uVar16 + 1) {
              }
            }
            iVar9 = ((int)(uVar16 >> 3) - (int)puVar18) + (int)puVar21;
            goto LAB_14f350f59;
          }
LAB_14f350f37:
          lVar26 = (longlong)puVar21 - (longlong)puVar18;
          iVar9 = (int)lVar26;
          for (; (puVar21 < puVar36 &&
                 (iVar9 = (int)lVar26, (char)*puVar21 == *(char *)(lVar30 + (longlong)puVar21)));
              puVar21 = (ulonglong *)((longlong)puVar21 + 1)) {
            lVar26 = lVar26 + 1;
            iVar9 = (int)lVar26;
          }
LAB_14f350f59:
          iVar9 = iVar9 + 4;
        }
        else {
          iVar9 = 3 - (uint)((uVar11 & 0xffffff) != 0);
        }
        uVar10 = iVar9 * 8 + 1;
        if ((int)uVar10 < (int)uVar23) {
          uVar10 = uVar23;
        }
      }
      uVar23 = *(uint *)((longlong)puVar37 - (ulonglong)uStack_88);
      uVar11 = uVar10;
      if (sVar31 == (short)uVar23) {
        uVar23 = uVar23 ^ uVar35;
        if (uVar23 == 0) {
          puVar18 = (ulonglong *)((longlong)puVar37 + 4);
          lVar30 = (longlong)((longlong)puVar37 - (ulonglong)uStack_88) - (longlong)puVar37;
          puVar21 = puVar18;
          if (puVar18 <= puVar36 + -1) {
LAB_14f350fd0:
            uVar29 = *(ulonglong *)(lVar30 + (longlong)puVar21) ^ *puVar21;
            if (uVar29 == 0) goto code_r0x00014f350fdd;
            uVar16 = 0;
            if (uVar29 != 0) {
              for (; (uVar29 >> uVar16 & 1) == 0; uVar16 = uVar16 + 1) {
              }
            }
            iVar9 = ((int)(uVar16 >> 3) - (int)puVar18) + (int)puVar21;
            goto LAB_14f351005;
          }
LAB_14f350fe6:
          lVar26 = (longlong)puVar21 - (longlong)puVar18;
          iVar9 = (int)lVar26;
          for (; (puVar21 < puVar36 &&
                 (iVar9 = (int)lVar26, (char)*puVar21 == *(char *)(lVar30 + (longlong)puVar21)));
              puVar21 = (ulonglong *)((longlong)puVar21 + 1)) {
            lVar26 = lVar26 + 1;
            iVar9 = (int)lVar26;
          }
LAB_14f351005:
          iVar9 = iVar9 + 4;
        }
        else {
          iVar9 = 3 - (uint)((uVar23 & 0xffffff) != 0);
        }
        uVar11 = iVar9 * 8;
        if (iVar9 * 8 < (int)uVar10) {
          uVar11 = uVar10;
        }
      }
      uVar35 = (int)uVar11 >> 3;
      uVar23 = *puVar2;
      if (3 < (int)uVar35) {
        puVar2[1] = uVar23;
        *puVar2 = (uVar34 ^ uVar24) & 0x3ffffff ^ uVar24;
LAB_14f3512b7:
        uVar12 = (uVar11 & 7) - 6;
        uVar10 = uVar35;
LAB_14f3512ba:
        uVar35 = uVar12;
        if ((int)uVar12 < 1) goto LAB_14f351384;
        goto LAB_14f351397;
      }
      uVar29 = 0;
      uVar12 = 0;
      uVar10 = 0;
      local_70[0] = uVar34 - uVar23 & 0x3ffffff;
      local_70[1] = uVar34 - puVar2[1] & 0x3ffffff;
      uVar27 = uVar10;
      if (((puVar2[1] ^ uVar24) & 0xfc000000) == 0) {
        uVar27 = 2;
      }
      uVar27 = ((uVar23 ^ uVar24) & 0xfc000000) == 0 | uVar27;
      pcVar32 = (char *)(longlong)(iVar20 + -1);
      uVar16 = uVar29;
      if (uVar27 != 0) {
        do {
          uVar23 = 0;
          if (uVar27 != 0) {
            for (; (uVar27 >> uVar23 & 1) == 0; uVar23 = uVar23 + 1) {
            }
          }
          uVar27 = uVar27 & uVar27 - 1;
          uVar23 = local_70[uVar23];
          if (uVar23 < local_1d8) {
            uVar10 = 8;
            if (8 < uVar23) {
              uVar10 = uVar23;
            }
            lVar30 = (longlong)puVar37 - (ulonglong)uVar10;
            if (((longlong)pcVar32 < (longlong)puVar36 - (longlong)puVar37) &&
               (pcVar32[(longlong)puVar37] == pcVar32[lVar30])) {
              lVar30 = lVar30 - (longlong)puVar37;
              puVar18 = puVar37;
              if (puVar37 <= puVar36 + -1) {
LAB_14f351110:
                uVar17 = *(ulonglong *)(lVar30 + (longlong)puVar18) ^ *puVar18;
                if (uVar17 == 0) goto code_r0x00014f35111d;
                uVar3 = 0;
                if (uVar17 != 0) {
                  for (; (uVar17 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
                  }
                }
                pcVar25 = (char *)(((uVar3 >> 3) - (longlong)puVar37) + (longlong)puVar18);
                goto LAB_14f351149;
              }
LAB_14f351126:
              pcVar25 = (char *)((longlong)puVar18 - (longlong)puVar37);
              for (puVar18 = (ulonglong *)(pcVar25 + (longlong)puVar37);
                  (puVar18 < puVar36 && ((char)*puVar18 == *(char *)(lVar30 + (longlong)puVar18)));
                  puVar18 = (ulonglong *)((longlong)puVar18 + 1)) {
                pcVar25 = pcVar25 + 1;
              }
LAB_14f351149:
              if ((longlong)pcVar32 < (longlong)pcVar25) {
                iVar9 = (int)pcVar25;
                pcVar32 = pcVar25;
                if (((local_110->farMatchOffsetLog2 < 1) ||
                    ((int)uVar10 < 1 << ((byte)local_110->farMatchOffsetLog2 & 0x1f))) ||
                   (local_110->farMatchMinLen <= iVar9)) {
                  if (0xfffff < (int)uVar10) {
                    if ((int)uVar10 < 0x400000) {
                      if ((int)uVar10 < 0x200000) {
                        bVar39 = SBORROW4(iVar9,5);
                        bVar38 = iVar9 + -5 < 0;
                      }
                      else {
                        bVar39 = SBORROW4(iVar9,6);
                        bVar38 = iVar9 + -6 < 0;
                      }
                    }
                    else {
                      bVar39 = SBORROW4(iVar9,8);
                      bVar38 = iVar9 + -8 < 0;
                    }
                    if (bVar39 != bVar38) goto LAB_14f35120c;
                  }
                  if ((5 < iVar9) || ((int)uVar10 < max_offset[iVar9])) {
                    iVar33 = (int)uVar16;
                    if (iVar33 <= iVar9) {
                      if (iVar9 == iVar33) {
                        bVar38 = (int)uVar10 < (int)uVar29;
LAB_14f351202:
                        if (!bVar38) goto LAB_14f35120c;
                      }
                      else if (iVar9 <= iVar33 + 1) {
                        bVar38 = (int)uVar10 >> 7 <= (int)uVar29;
                        goto LAB_14f351202;
                      }
                      uVar16 = (ulonglong)pcVar25 & 0xffffffff;
                      uVar29 = (ulonglong)uVar10;
                    }
                  }
                }
              }
            }
          }
LAB_14f35120c:
          uVar12 = (uint)uVar29;
          uVar10 = (uint)uVar16;
        } while (uVar27 != 0);
        uVar23 = *puVar2;
      }
      puVar2[1] = uVar23;
      *puVar2 = (uVar34 ^ uVar24) & 0x3ffffff ^ uVar24;
      if (uVar12 != 0) {
        if ((1 < (int)uVar35) &&
           ((((int)uVar10 <= (int)(uVar35 + 1) ||
             (((int)uVar10 <= (int)(uVar35 + 2) && (0x3ff < (int)uVar12)))) ||
            (((int)uVar10 <= (int)(uVar35 + 3) && (0xffff < (int)uVar12)))))) goto LAB_14f3512b7;
        goto LAB_14f3512ba;
      }
      if (1 < (int)uVar35) goto LAB_14f3512b7;
      uVar29 = (ulonglong)local_90;
      puVar37 = local_170;
    }
    puVar18 = (ulonglong *)((longlong)puVar37 + 5);
    puVar21 = puVar18;
    if (puVar18 <= puVar36 + -1) {
LAB_14f3512f0:
      uVar29 = *(ulonglong *)(-local_168 + (longlong)puVar21) ^ *puVar21;
      if (uVar29 == 0) break;
      uVar16 = 0;
      if (uVar29 != 0) {
        for (; (uVar29 >> uVar16 & 1) == 0; uVar16 = uVar16 + 1) {
        }
      }
      iVar9 = ((int)(uVar16 >> 3) - (int)puVar18) + (int)puVar21;
      goto LAB_14f351325;
    }
LAB_14f351306:
    lVar30 = (longlong)puVar21 - (longlong)puVar18;
    iVar9 = (int)lVar30;
    for (; (puVar21 < puVar36 &&
           (iVar9 = (int)lVar30, (char)*puVar21 == *(char *)(-local_168 + (longlong)puVar21)));
        puVar21 = (ulonglong *)((longlong)puVar21 + 1)) {
      lVar30 = lVar30 + 1;
      iVar9 = (int)lVar30;
    }
LAB_14f351325:
    uVar10 = iVar9 + 4;
    uVar35 = 0;
    puVar2 = *(uint **)((longlong)pvVar1 + 0x30);
    uVar23 = *(uint *)((longlong)pvVar1 + 0x48);
    *(longlong **)((longlong)pvVar1 + 0x28) = (longlong *)((longlong)puVar37 + 2);
    bVar5 = (byte)*(undefined4 *)((longlong)pvVar1 + 0x18) & 0x1f;
    uVar24 = (uint)((ulonglong)
                    (*(longlong *)((longlong)puVar37 + 2) * *(longlong *)((longlong)pvVar1 + 0x40))
                   >> 0x20);
    uVar24 = uVar24 << bVar5 | uVar24 >> 0x20 - bVar5;
    *(uint *)((longlong)pvVar1 + 0x48) = uVar24;
    *(ulonglong *)((longlong)pvVar1 + 0x30) =
         *(longlong *)((longlong)pvVar1 + 8) +
         (ulonglong)(*(uint *)((longlong)pvVar1 + 0x1c) & uVar24) * 4;
    iVar9 = *(int *)((longlong)pvVar1 + 0x20);
    puVar2[1] = *puVar2;
    *puVar2 = ((int)puVar37 - iVar9 ^ uVar23) & 0x3ffffff ^ uVar23;
    puVar37 = (ulonglong *)((longlong)puVar37 + 1);
LAB_14f351384:
    uVar12 = local_a0[-(longlong)(int)uVar35];
LAB_14f351397:
    if (local_1e0 < puVar37) {
      lVar30 = *(longlong *)((longlong)pvVar1 + 0x20);
      lVar26 = (longlong)puVar37 - lVar30;
      do {
        if ((lVar26 <= (int)uVar12) ||
           (*(char *)(lVar30 + -1 + lVar26) != *(char *)((lVar30 - (int)uVar12) + -1 + lVar26)))
        break;
        puVar37 = (ulonglong *)((longlong)puVar37 + -1);
        lVar26 = lVar26 + -1;
        uVar10 = uVar10 + 1;
      } while (local_1e0 < puVar37);
    }
    if ((uVar35 == 0) && (puVar37 == local_1e0)) {
      uVar35 = 0xffffffff;
    }
    iVar33 = (int)puVar37;
    iVar9 = iVar33 - (int)local_1e0;
    local_80 = local_a0[0];
    iStack_7c = iVar9;
    uStack_78 = uVar10;
    uStack_74 = uVar35;
    if ((local_160 < local_178 + 1U) &&
       (iVar13 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h",0x3f
                                    ,
                                    "oo2::vector_storage_a<struct oo2::newlzhc_encoder_parse>::needmakefit"
                                    ,"newsize <= m_capacity"), iVar13 != 0)) {
      pcVar4 = (code *)swi(3);
      lVar15 = (*pcVar4)();
      return lVar15;
    }
    local_178 = lVar19 + 1;
    puVar28 = (undefined8 *)(lVar19 * 0x10 + (longlong)local_158);
    if (puVar28 != (undefined8 *)0x0) {
      *puVar28 = CONCAT44(iStack_7c,local_80);
      puVar28[1] = CONCAT44(uStack_74,uStack_78);
    }
    newLZHC_histo_literals
              (pnVar14,param_4,(longlong)((int)local_1e0 - (int)param_4),(longlong)iVar9,uVar22,1);
    uVar12 = uStack_88;
    uVar11 = uStack_8c;
    uVar34 = local_90;
    uVar24 = local_a0[3];
    uVar23 = local_a0[2];
    uVar22 = local_a0[1];
    if ((int)uVar35 < 1) {
      lVar19 = (longlong)(int)-uVar35;
      uVar35 = local_a0[lVar19];
      uVar6 = *(undefined8 *)(auStack_b8 + lVar19 * 4);
      uVar7 = *(undefined8 *)(auStack_b0 + lVar19 * 4);
      uVar8 = *(undefined8 *)((longlong)&uStack_a8 + lVar19 * 4);
      *(undefined8 *)(auStack_c0 + lVar19 * 4 + 4) = *(undefined8 *)(auStack_c0 + lVar19 * 4);
      *(undefined8 *)(auStack_b8 + lVar19 * 4 + 4) = uVar6;
      *(undefined8 *)(auStack_b0 + lVar19 * 4 + 4) = uVar7;
      *(undefined8 *)(local_a0 + lVar19 + -1) = uVar8;
      local_a0[0] = uVar35;
    }
    else {
      local_a0[1] = local_a0[0];
      local_a0[2] = uVar22;
      local_a0[3] = uVar23;
      local_90 = uVar24;
      uStack_8c = uVar34;
      uStack_88 = uVar11;
      uStack_84 = uVar12;
      local_a0[0] = uVar35;
    }
    local_1e0 = (ulonglong *)((longlong)(int)uVar10 + (longlong)puVar37);
    puVar18 = *(ulonglong **)((longlong)pvVar1 + 0x28);
    if (puVar18 < local_1e0) {
      iVar13 = (int)*(undefined8 *)((longlong)pvVar1 + 0x20);
      puVar2 = *(uint **)((longlong)pvVar1 + 0x30);
      uVar22 = *(uint *)((longlong)pvVar1 + 0x48);
      uVar23 = *(uint *)((longlong)pvVar1 + 0x48);
      puVar2[1] = *puVar2;
      *puVar2 = (uVar22 ^ (int)puVar18 - iVar13) & 0x3ffffff ^ uVar23;
      iVar9 = (*(int *)((longlong)pvVar1 + 0x28) - iVar33) + 1;
      if (iVar9 < (int)uVar10) {
        lVar19 = (longlong)iVar9;
        do {
          bVar5 = (byte)*(undefined4 *)((longlong)pvVar1 + 0x18) & 0x1f;
          uVar22 = (uint)((ulonglong)
                          (*(longlong *)(lVar19 + (longlong)puVar37) *
                          *(longlong *)((longlong)pvVar1 + 0x40)) >> 0x20);
          uVar22 = uVar22 << bVar5 | uVar22 >> 0x20 - bVar5;
          puVar2 = (uint *)(*(longlong *)((longlong)pvVar1 + 8) +
                           (ulonglong)(*(uint *)((longlong)pvVar1 + 0x1c) & uVar22) * 4);
          puVar2[1] = *puVar2;
          *puVar2 = ((iVar9 + iVar33) - iVar13 ^ uVar22) & 0x3ffffff ^ uVar22;
          iVar9 = iVar9 * 2;
          lVar19 = lVar19 * 2;
        } while (iVar9 < (int)uVar10);
      }
LAB_14f3515be:
      *(ulonglong **)((longlong)pvVar1 + 0x28) = local_1e0;
      bVar5 = (byte)*(undefined4 *)((longlong)pvVar1 + 0x18) & 0x1f;
      uVar22 = (uint)(*local_1e0 * *(longlong *)((longlong)pvVar1 + 0x40) >> 0x20);
      uVar22 = uVar22 << bVar5 | uVar22 >> 0x20 - bVar5;
      *(ulonglong *)((longlong)pvVar1 + 0x30) =
           *(longlong *)((longlong)pvVar1 + 8) +
           (ulonglong)(*(uint *)((longlong)pvVar1 + 0x1c) & uVar22) * 4;
      *(uint *)((longlong)pvVar1 + 0x48) = uVar22;
    }
    else if (puVar18 != local_1e0) goto LAB_14f3515be;
    local_a0[0] = uVar35;
    if (param_4 + (longlong)param_5 + -0x10 <= local_1e0) {
LAB_14f351606:
      uVar22 = local_a0[0];
      if (0 < (longlong)(param_4 + (local_150 - (longlong)local_1e0))) {
        newLZHC_histo_literals
                  (pnVar14,param_4,(longlong)((int)local_1e0 - (int)param_4),
                   (long64)(param_4 + (local_150 - (longlong)local_1e0)),local_a0[0],1);
      }
      lVar15 = newLZHC_put_parse(local_118,local_120,pnVar14,local_128,param_4,param_5,local_130,
                                 local_138,param_8,local_140,uVar22,
                                 (vector_a<oo2::newlzhc_encoder_parse> *)&local_188,(int)local_148,
                                 (newlzhc_passinfo *)0x0,eNewLZ_MinOffset_8);
      if (pnVar14 == (newlzhc_histo *)0x0) {
        return lVar15;
      }
      if (this != (rrArenaAllocator *)0x0) {
        rrArenaAllocator::Free(this,pnVar14,0x8c04);
        return lVar15;
      }
      (*g_fp_OodleCore_Plugin_Free)(pnVar14);
      return lVar15;
    }
    uVar29 = (ulonglong)local_90;
  } while( true );
  puVar21 = puVar21 + 1;
  if (puVar36 + -1 < puVar21) goto LAB_14f351306;
  goto LAB_14f3512f0;
code_r0x00014f350c09:
  puVar21 = puVar21 + 1;
  if (puVar36 + -1 < puVar21) goto LAB_14f350c12;
  goto LAB_14f350c00;
code_r0x00014f350cae:
  puVar21 = puVar21 + 1;
  if (puVar36 + -1 < puVar21) goto LAB_14f350cb7;
  goto LAB_14f350ca5;
code_r0x00014f350d4e:
  puVar21 = puVar21 + 1;
  if (puVar36 + -1 < puVar21) goto LAB_14f350d57;
  goto LAB_14f350d45;
code_r0x00014f350dee:
  puVar21 = puVar21 + 1;
  if (puVar36 + -1 < puVar21) goto LAB_14f350df7;
  goto LAB_14f350de5;
code_r0x00014f350e8e:
  puVar21 = puVar21 + 1;
  if (puVar36 + -1 < puVar21) goto LAB_14f350e97;
  goto LAB_14f350e85;
code_r0x00014f350f2e:
  puVar21 = puVar21 + 1;
  if (puVar36 + -1 < puVar21) goto LAB_14f350f37;
  goto LAB_14f350f25;
code_r0x00014f350fdd:
  puVar21 = puVar21 + 1;
  if (puVar36 + -1 < puVar21) goto LAB_14f350fe6;
  goto LAB_14f350fd0;
code_r0x00014f35111d:
  puVar18 = puVar18 + 1;
  if (puVar36 + -1 < puVar18) goto LAB_14f351126;
  goto LAB_14f351110;
}

// newLZHC_encode_chunk<oo2::CTMF<unsigned_int,2,8,4>,2,1,0> @ 14f351740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014f35219a) */
/* WARNING: Removing unreachable block (ram,0x00014f352236) */
/* WARNING: Removing unreachable block (ram,0x00014f3521b3) */
/* WARNING: Removing unreachable block (ram,0x00014f35224b) */
/* WARNING: Removing unreachable block (ram,0x00014f3525f0) */
/* WARNING: Removing unreachable block (ram,0x00014f352622) */
/* WARNING: Removing unreachable block (ram,0x00014f352691) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

long64 __cdecl
oo2::newLZHC_encode_chunk<oo2::CTMF<unsigned_int,2,8,4>,2,1,0>
          (newlz_vtable *param_1,newlz_encoder_scratch *param_2,uchar *param_3,uchar *param_4,
          int param_5,uchar *param_6,uchar *param_7,long64 param_8,int *param_9,float *param_10,
          OodleKrakenChunkDeadlines *param_11)

{
  rrArenaAllocator *this;
  uint *puVar1;
  uchar *puVar2;
  undefined1 (*pauVar3) [16];
  ulonglong uVar4;
  code *pcVar5;
  byte bVar6;
  ushort uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  OodleLZ_CompressOptions *pOVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  newlzhc_histo *pnVar19;
  long64 lVar20;
  ulonglong uVar21;
  uchar *puVar22;
  byte bVar23;
  int iVar24;
  ulonglong *puVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  longlong lVar29;
  undefined8 *puVar30;
  ulonglong *puVar31;
  ulonglong *puVar32;
  int iVar33;
  longlong lVar34;
  uint uVar35;
  short sVar36;
  CTMF<unsigned_int,2,8,4> *pCVar37;
  uint uVar38;
  ulonglong uVar39;
  ulonglong *puVar40;
  bool bVar41;
  bool bVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auStackY_2b8 [32];
  uint local_200;
  uint uStack_1dc;
  uint local_1d8;
  ulonglong *local_1c8;
  match local_1c0;
  ulonglong *local_1b8;
  newlzhc_histo *local_1b0;
  uint local_1a8;
  uint local_1a4;
  uint local_1a0;
  int local_19c;
  undefined1 (*local_198) [16];
  undefined1 (*local_190) [16];
  OodleLZ_CompressOptions *local_188;
  uchar *local_180;
  void *local_178;
  ulonglong local_170;
  longlong local_168;
  ulonglong *local_160;
  ulonglong local_158;
  void *local_150;
  ulonglong local_148;
  longlong local_140;
  newlz_vtable *local_138;
  uchar *local_130;
  uchar *local_128;
  int *local_120;
  float *local_118;
  newlz_encoder_scratch *local_110;
  rrArenaAllocator *local_108;
  CTMF<unsigned_int,2,8,4> *local_100;
  rrArenaAllocator *local_f8;
  newlzhc_histo *local_f0;
  undefined8 local_e8;
  newLZHC_LOs local_c0;
  uint local_80;
  int iStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint local_70 [4];
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  ulonglong local_50;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  uVar39 = (ulonglong)param_5;
  local_19c = param_5;
  local_128 = param_6;
  local_130 = param_7;
  local_120 = param_9;
  local_118 = param_10;
  *param_9 = -1;
  if (0x80 < param_5) {
    this = param_2->arena;
    local_188 = param_1->pOptions;
    local_1d8 = local_188->dictionarySize;
    if ((int)local_1d8 < 1) {
      local_1d8 = 0x40000000;
    }
    else if (0x40000000 < (int)local_1d8) {
      local_1d8 = 0x40000000;
    }
    iVar24 = 4;
    if (4 < local_188->minMatchLen) {
      iVar24 = local_188->minMatchLen;
    }
    pCVar37 = param_1->matcher;
    local_178 = (void *)0x0;
    local_170 = 0;
    local_168 = 0;
    local_180 = param_4;
    local_148 = uVar39;
    local_138 = param_1;
    local_110 = param_2;
    local_108 = this;
    local_100 = pCVar37;
    newlz_scratchblock::extend
              (&param_2->newlzhc_parsevec_space,(uVar39 & 0xfffffffffffffff) << 3,this);
    local_178 = (param_2->newlzhc_parsevec_space).m_ptr;
    local_170 = (ulonglong)(param_2->newlzhc_parsevec_space).m_size >> 4;
    local_158 = local_170;
    local_150 = local_178;
    newlz_scratchblock::extend
              (&param_2->literals_space,(longlong)(int)(param_5 + 0x100 + ((uint)param_5 >> 4)),this
              );
    puVar31 = (ulonglong *)(param_4 + (uVar39 - 8));
    local_c0.lasts.contents[8] = (int)___xmm_00000008000000080000000800000008;
    local_c0.lasts.contents[9] = (int)((ulonglong)___xmm_00000008000000080000000800000008 >> 0x20);
    local_c0.lasts.contents[10] = (int)_UNK_150b50de8;
    local_c0.lasts.contents[0xb] = (int)((ulonglong)_UNK_150b50de8 >> 0x20);
    local_c0.lasts.contents[0xc] = 8;
    local_c0.lasts.contents[0xd] = 8;
    local_c0.lasts.contents[0xe] = 8;
    local_140 = 8;
    if (param_8 != 0) {
      local_140 = 0;
    }
    local_1c8 = (ulonglong *)(param_4 + local_140);
    pCVar37->m_next_ptr = (uchar *)local_1c8;
    bVar6 = (byte)pCVar37->m_table_size_bits & 0x1f;
    uVar26 = (uint)(*local_1c8 * pCVar37->m_hash_mul >> 0x20);
    uVar26 = uVar26 << bVar6 | uVar26 >> 0x20 - bVar6;
    pCVar37->m_next_hash = uVar26;
    puVar1 = (pCVar37->m_hash_table).m_ptr;
    pCVar37->m_next_row = puVar1 + (pCVar37->m_hash_row_mask & uVar26);
    pCVar37->m_next_row_second =
         puVar1 + (*local_1c8 * -0x30e44323485a9b9d >>
                   (0x40U - (char)pCVar37->m_table_size_bits & 0x3f) & 0xfffffffffffffffc);
    puVar32 = (ulonglong *)(param_4 + (uVar39 - 0x10));
    local_e8 = 0x8c04;
    local_1b8 = puVar32;
    local_f8 = this;
    if (this == (rrArenaAllocator *)0x0) {
      pnVar19 = (*g_fp_OodleCore_Plugin_MallocAligned)(0x8c04,0x10);
      if (pnVar19 == (newlzhc_histo *)0x0) {
        local_1b0 = pnVar19;
                    /* WARNING: Subroutine does not return */
        Oodle_Core_Malloc_Failed(0x8c04);
      }
    }
    else {
      pnVar19 = rrArenaAllocator::Alloc(this,0x8c04,0);
    }
    local_1b0 = pnVar19;
    local_f0 = pnVar19;
    if ((pnVar19 == (newlzhc_histo *)0x0) &&
       (iVar16 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\rrarenaallocator.h",0x19a,
                                    "oo2::rrScopeArenaAlloc::rrScopeArenaAlloc","m_ptr != NULL"),
       iVar16 != 0)) {
      pcVar5 = (code *)swi(3);
      lVar20 = (*pcVar5)();
      return lVar20;
    }
    rrMemSetZero(pnVar19,0x8c04);
    local_200 = local_c0.lasts.contents[8];
    puVar25 = local_1c8;
LAB_14f351a45:
    do {
      puVar40 = puVar25;
      pOVar11 = local_188;
      uVar26 = 7;
      if ((longlong)puVar32 - (longlong)puVar40 < 2) break;
      uVar38 = (uint)*puVar40;
      local_190 = (undefined1 (*) [16])pCVar37->m_next_row;
      uVar28 = pCVar37->m_next_hash;
      local_198 = (undefined1 (*) [16])pCVar37->m_next_row_second;
      local_1a0 = (int)puVar40 - *(int *)&pCVar37->m_base_ptr;
      local_160 = (ulonglong *)((longlong)puVar40 + 1);
      pCVar37->m_next_ptr = (uchar *)local_160;
      bVar23 = (byte)pCVar37->m_table_size_bits;
      bVar6 = bVar23 & 0x1f;
      uVar27 = (uint)(*local_160 * pCVar37->m_hash_mul >> 0x20);
      uVar27 = uVar27 << bVar6 | uVar27 >> 0x20 - bVar6;
      pCVar37->m_next_hash = uVar27;
      puVar1 = (pCVar37->m_hash_table).m_ptr;
      pCVar37->m_next_row = puVar1 + (pCVar37->m_hash_row_mask & uVar27);
      pCVar37->m_next_row_second =
           puVar1 + (*local_160 * -0x30e44323485a9b9d >> (0x40 - bVar23 & 0x3f) & 0xfffffffffffffffc
                    );
      uVar27 = *(uint *)((longlong)puVar40 - (ulonglong)local_200);
      sVar36 = (short)uVar38;
      if (sVar36 == (short)uVar27) {
        uVar27 = uVar27 ^ uVar38;
        if (uVar27 == 0) {
          puVar32 = (ulonglong *)((longlong)puVar40 + 4);
          lVar34 = (longlong)((longlong)puVar40 - (ulonglong)local_200) - (longlong)puVar40;
          puVar25 = puVar32;
          if (puVar32 <= puVar31 + -1) {
LAB_14f351b30:
            uVar39 = *(ulonglong *)(lVar34 + (longlong)puVar25) ^ *puVar25;
            if (uVar39 == 0) goto code_r0x00014f351b39;
            uVar21 = 0;
            if (uVar39 != 0) {
              for (; (uVar39 >> uVar21 & 1) == 0; uVar21 = uVar21 + 1) {
              }
            }
            iVar16 = ((int)(uVar21 >> 3) - (int)puVar32) + (int)puVar25;
            goto LAB_14f351b65;
          }
LAB_14f351b45:
          lVar29 = (longlong)puVar25 - (longlong)puVar32;
          iVar16 = (int)lVar29;
          for (; (puVar25 < puVar31 &&
                 (iVar16 = (int)lVar29, (uchar)*puVar25 == *(uchar *)(lVar34 + (longlong)puVar25)));
              puVar25 = (ulonglong *)((longlong)puVar25 + 1)) {
            lVar29 = lVar29 + 1;
            iVar16 = (int)lVar29;
          }
LAB_14f351b65:
          iVar16 = iVar16 + 4;
        }
        else {
          iVar16 = 3 - (uint)((uVar27 & 0xffffff) != 0);
        }
        uVar26 = iVar16 * 8 + 6;
        if ((int)uVar26 < 7) {
          uVar26 = 7;
        }
      }
      uVar17 = *(uint *)((longlong)puVar40 - (ulonglong)(uint)local_c0.lasts.contents[9]);
      uVar27 = uVar26;
      if (sVar36 == (short)uVar17) {
        uVar17 = uVar17 ^ uVar38;
        if (uVar17 == 0) {
          puVar32 = (ulonglong *)((longlong)puVar40 + 4);
          lVar34 = (longlong)((longlong)puVar40 - (ulonglong)(uint)local_c0.lasts.contents[9]) -
                   (longlong)puVar40;
          puVar25 = puVar32;
          if (puVar32 <= puVar31 + -1) {
LAB_14f351bd0:
            uVar39 = *(ulonglong *)(lVar34 + (longlong)puVar25) ^ *puVar25;
            if (uVar39 == 0) goto code_r0x00014f351bd9;
            uVar21 = 0;
            if (uVar39 != 0) {
              for (; (uVar39 >> uVar21 & 1) == 0; uVar21 = uVar21 + 1) {
              }
            }
            iVar16 = ((int)(uVar21 >> 3) - (int)puVar32) + (int)puVar25;
            goto LAB_14f351c05;
          }
LAB_14f351be5:
          lVar29 = (longlong)puVar25 - (longlong)puVar32;
          iVar16 = (int)lVar29;
          for (; (puVar25 < puVar31 &&
                 (iVar16 = (int)lVar29, (uchar)*puVar25 == *(uchar *)(lVar34 + (longlong)puVar25)));
              puVar25 = (ulonglong *)((longlong)puVar25 + 1)) {
            lVar29 = lVar29 + 1;
            iVar16 = (int)lVar29;
          }
LAB_14f351c05:
          iVar16 = iVar16 + 4;
        }
        else {
          iVar16 = 3 - (uint)((uVar17 & 0xffffff) != 0);
        }
        uVar27 = iVar16 * 8 + 5;
        if ((int)uVar27 < (int)uVar26) {
          uVar27 = uVar26;
        }
      }
      uVar17 = *(uint *)((longlong)puVar40 - (ulonglong)(uint)local_c0.lasts.contents[10]);
      uVar26 = uVar27;
      if (sVar36 == (short)uVar17) {
        uVar17 = uVar17 ^ uVar38;
        if (uVar17 == 0) {
          puVar32 = (ulonglong *)((longlong)puVar40 + 4);
          lVar34 = (longlong)((longlong)puVar40 - (ulonglong)(uint)local_c0.lasts.contents[10]) -
                   (longlong)puVar40;
          puVar25 = puVar32;
          if (puVar32 <= puVar31 + -1) {
LAB_14f351c65:
            uVar39 = *(ulonglong *)(lVar34 + (longlong)puVar25) ^ *puVar25;
            if (uVar39 == 0) goto code_r0x00014f351c6e;
            uVar21 = 0;
            if (uVar39 != 0) {
              for (; (uVar39 >> uVar21 & 1) == 0; uVar21 = uVar21 + 1) {
              }
            }
            iVar16 = ((int)(uVar21 >> 3) - (int)puVar32) + (int)puVar25;
            goto LAB_14f351c99;
          }
LAB_14f351c77:
          lVar29 = (longlong)puVar25 - (longlong)puVar32;
          iVar16 = (int)lVar29;
          for (; (puVar25 < puVar31 &&
                 (iVar16 = (int)lVar29, (uchar)*puVar25 == *(uchar *)(lVar34 + (longlong)puVar25)));
              puVar25 = (ulonglong *)((longlong)puVar25 + 1)) {
            lVar29 = lVar29 + 1;
            iVar16 = (int)lVar29;
          }
LAB_14f351c99:
          iVar16 = iVar16 + 4;
        }
        else {
          iVar16 = 3 - (uint)((uVar17 & 0xffffff) != 0);
        }
        uVar26 = iVar16 * 8 + 4;
        if ((int)uVar26 < (int)uVar27) {
          uVar26 = uVar27;
        }
      }
      uVar17 = *(uint *)((longlong)puVar40 - (ulonglong)(uint)local_c0.lasts.contents[0xb]);
      uVar27 = uVar26;
      if (sVar36 == (short)uVar17) {
        uVar17 = uVar17 ^ uVar38;
        if (uVar17 == 0) {
          puVar32 = (ulonglong *)((longlong)puVar40 + 4);
          lVar34 = (longlong)((longlong)puVar40 - (ulonglong)(uint)local_c0.lasts.contents[0xb]) -
                   (longlong)puVar40;
          puVar25 = puVar32;
          if (puVar32 <= puVar31 + -1) {
LAB_14f351d05:
            uVar39 = *(ulonglong *)(lVar34 + (longlong)puVar25) ^ *puVar25;
            if (uVar39 == 0) goto code_r0x00014f351d0e;
            uVar21 = 0;
            if (uVar39 != 0) {
              for (; (uVar39 >> uVar21 & 1) == 0; uVar21 = uVar21 + 1) {
              }
            }
            iVar16 = ((int)(uVar21 >> 3) - (int)puVar32) + (int)puVar25;
            goto LAB_14f351d39;
          }
LAB_14f351d17:
          lVar29 = (longlong)puVar25 - (longlong)puVar32;
          iVar16 = (int)lVar29;
          for (; (puVar25 < puVar31 &&
                 (iVar16 = (int)lVar29, (uchar)*puVar25 == *(uchar *)(lVar34 + (longlong)puVar25)));
              puVar25 = (ulonglong *)((longlong)puVar25 + 1)) {
            lVar29 = lVar29 + 1;
            iVar16 = (int)lVar29;
          }
LAB_14f351d39:
          iVar16 = iVar16 + 4;
        }
        else {
          iVar16 = 3 - (uint)((uVar17 & 0xffffff) != 0);
        }
        uVar27 = iVar16 * 8 + 3;
        if ((int)uVar27 < (int)uVar26) {
          uVar27 = uVar26;
        }
      }
      uVar17 = *(uint *)((longlong)puVar40 - (ulonglong)(uint)local_c0.lasts.contents[0xc]);
      uVar26 = uVar27;
      if (sVar36 == (short)uVar17) {
        uVar17 = uVar17 ^ uVar38;
        if (uVar17 == 0) {
          puVar32 = (ulonglong *)((longlong)puVar40 + 4);
          lVar34 = (longlong)((longlong)puVar40 - (ulonglong)(uint)local_c0.lasts.contents[0xc]) -
                   (longlong)puVar40;
          puVar25 = puVar32;
          if (puVar32 <= puVar31 + -1) {
LAB_14f351da5:
            uVar39 = *(ulonglong *)(lVar34 + (longlong)puVar25) ^ *puVar25;
            if (uVar39 == 0) goto code_r0x00014f351dae;
            uVar21 = 0;
            if (uVar39 != 0) {
              for (; (uVar39 >> uVar21 & 1) == 0; uVar21 = uVar21 + 1) {
              }
            }
            iVar16 = ((int)(uVar21 >> 3) - (int)puVar32) + (int)puVar25;
            goto LAB_14f351dd9;
          }
LAB_14f351db7:
          lVar29 = (longlong)puVar25 - (longlong)puVar32;
          iVar16 = (int)lVar29;
          for (; (puVar25 < puVar31 &&
                 (iVar16 = (int)lVar29, (uchar)*puVar25 == *(uchar *)(lVar34 + (longlong)puVar25)));
              puVar25 = (ulonglong *)((longlong)puVar25 + 1)) {
            lVar29 = lVar29 + 1;
            iVar16 = (int)lVar29;
          }
LAB_14f351dd9:
          iVar16 = iVar16 + 4;
        }
        else {
          iVar16 = 3 - (uint)((uVar17 & 0xffffff) != 0);
        }
        uVar26 = iVar16 * 8 + 2;
        if ((int)uVar26 < (int)uVar27) {
          uVar26 = uVar27;
        }
      }
      uVar17 = *(uint *)((longlong)puVar40 - (ulonglong)(uint)local_c0.lasts.contents[0xd]);
      uVar27 = uVar26;
      if (sVar36 == (short)uVar17) {
        uVar17 = uVar17 ^ uVar38;
        if (uVar17 == 0) {
          puVar32 = (ulonglong *)((longlong)puVar40 + 4);
          lVar34 = (longlong)((longlong)puVar40 - (ulonglong)(uint)local_c0.lasts.contents[0xd]) -
                   (longlong)puVar40;
          puVar25 = puVar32;
          if (puVar32 <= puVar31 + -1) {
LAB_14f351e45:
            uVar39 = *(ulonglong *)(lVar34 + (longlong)puVar25) ^ *puVar25;
            if (uVar39 == 0) goto code_r0x00014f351e4e;
            uVar21 = 0;
            if (uVar39 != 0) {
              for (; (uVar39 >> uVar21 & 1) == 0; uVar21 = uVar21 + 1) {
              }
            }
            iVar16 = ((int)(uVar21 >> 3) - (int)puVar32) + (int)puVar25;
            goto LAB_14f351e79;
          }
LAB_14f351e57:
          lVar29 = (longlong)puVar25 - (longlong)puVar32;
          iVar16 = (int)lVar29;
          for (; (puVar25 < puVar31 &&
                 (iVar16 = (int)lVar29, (uchar)*puVar25 == *(uchar *)(lVar34 + (longlong)puVar25)));
              puVar25 = (ulonglong *)((longlong)puVar25 + 1)) {
            lVar29 = lVar29 + 1;
            iVar16 = (int)lVar29;
          }
LAB_14f351e79:
          iVar16 = iVar16 + 4;
        }
        else {
          iVar16 = 3 - (uint)((uVar17 & 0xffffff) != 0);
        }
        uVar27 = iVar16 * 8 + 1;
        if ((int)uVar27 < (int)uVar26) {
          uVar27 = uVar26;
        }
      }
      uVar26 = *(uint *)((longlong)puVar40 - (ulonglong)(uint)local_c0.lasts.contents[0xe]);
      local_1a4 = uVar27;
      if (sVar36 == (short)uVar26) {
        uVar26 = uVar26 ^ uVar38;
        if (uVar26 == 0) {
          puVar32 = (ulonglong *)((longlong)puVar40 + 4);
          lVar34 = (longlong)((longlong)puVar40 - (ulonglong)(uint)local_c0.lasts.contents[0xe]) -
                   (longlong)puVar40;
          puVar25 = puVar32;
          if (puVar32 <= puVar31 + -1) {
LAB_14f351ef0:
            uVar39 = *(ulonglong *)(lVar34 + (longlong)puVar25) ^ *puVar25;
            if (uVar39 == 0) goto code_r0x00014f351efd;
            uVar21 = 0;
            if (uVar39 != 0) {
              for (; (uVar39 >> uVar21 & 1) == 0; uVar21 = uVar21 + 1) {
              }
            }
            iVar16 = ((int)(uVar21 >> 3) - (int)puVar32) + (int)puVar25;
            goto LAB_14f351f25;
          }
LAB_14f351f06:
          lVar29 = (longlong)puVar25 - (longlong)puVar32;
          iVar16 = (int)lVar29;
          for (; (puVar25 < puVar31 &&
                 (iVar16 = (int)lVar29, (uchar)*puVar25 == *(uchar *)(lVar34 + (longlong)puVar25)));
              puVar25 = (ulonglong *)((longlong)puVar25 + 1)) {
            lVar29 = lVar29 + 1;
            iVar16 = (int)lVar29;
          }
LAB_14f351f25:
          iVar16 = iVar16 + 4;
        }
        else {
          iVar16 = 3 - (uint)((uVar26 & 0xffffff) != 0);
        }
        local_1a4 = iVar16 * 8;
        if (iVar16 * 8 < (int)uVar27) {
          local_1a4 = uVar27;
        }
      }
      local_1a8 = local_1a4 & 7;
      local_1a4 = (int)local_1a4 >> 3;
      auVar44 = *local_190;
      uVar39 = auVar44._0_8_;
      if ((int)local_1a4 < 4) {
        uStack_1dc = 0;
        auVar45 = *local_198;
        local_70[0] = ___xmm_03ffffff03ffffff03ffffff03ffffff & local_1a0 - auVar44._0_4_;
        local_70[1] = _UNK_1531da904 & local_1a0 - auVar44._4_4_;
        local_70[2] = _UNK_1531da908 & local_1a0 - auVar44._8_4_;
        local_70[3] = _UNK_1531da90c & local_1a0 - auVar44._12_4_;
        local_60 = ___xmm_03ffffff03ffffff03ffffff03ffffff & local_1a0 - auVar45._0_4_;
        uStack_5c = _UNK_1531da904 & local_1a0 - auVar45._4_4_;
        uStack_58 = _UNK_1531da908 & local_1a0 - auVar45._8_4_;
        uStack_54 = _UNK_1531da90c & local_1a0 - auVar45._12_4_;
        uVar26 = uVar28 & 0xfc000000;
        auVar43 = ___xmm_fc000000fc000000fc000000fc000000 & auVar44;
        auVar50._0_4_ = -(uint)(uVar26 == auVar43._0_4_);
        auVar50._4_4_ = -(uint)(uVar26 == auVar43._4_4_);
        auVar50._8_4_ = -(uint)(uVar26 == auVar43._8_4_);
        auVar50._12_4_ = -(uint)(uVar26 == auVar43._12_4_);
        auVar45 = ___xmm_fc000000fc000000fc000000fc000000 & auVar45;
        auVar49._0_4_ = -(uint)(uVar26 == auVar45._0_4_);
        auVar49._4_4_ = -(uint)(uVar26 == auVar45._4_4_);
        auVar49._8_4_ = -(uint)(uVar26 == auVar45._8_4_);
        auVar49._12_4_ = -(uint)(uVar26 == auVar45._12_4_);
        auVar45 = packssdw(auVar50,auVar49);
        auVar45 = packsswb(auVar45,ZEXT816(0));
        uVar7 = (ushort)(SUB161(auVar45 >> 7,0) & 1) | (ushort)(SUB161(auVar45 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar45 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar45 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar45 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar45 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar45 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar45 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar45 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar45 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar45 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar45 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar45 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar45 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar45 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar45[0xf] >> 7) << 0xf;
        uVar26 = (uint)uVar7;
        if (local_190 == local_198) {
          uVar26 = uVar7 & 0xf;
        }
        uVar38 = uStack_1dc;
        uVar27 = uStack_1dc;
        puVar2 = (uchar *)(longlong)(iVar24 + -1);
joined_r0x00014f351ff9:
        if (uVar26 != 0) {
          uVar17 = 0;
          if (uVar26 != 0) {
            for (; (uVar26 >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
            }
          }
          uVar26 = uVar26 & uVar26 - 1;
          uVar17 = local_70[uVar17];
          pCVar37 = local_100;
          if (uVar17 < local_1d8) {
            uVar35 = 8;
            if (8 < uVar17) {
              uVar35 = uVar17;
            }
            if (((longlong)puVar2 < (longlong)puVar31 - (longlong)puVar40) &&
               (puVar2[(longlong)puVar40] == puVar2[(longlong)puVar40 - (ulonglong)uVar35])) {
              lVar34 = ((longlong)puVar40 - (ulonglong)uVar35) - (longlong)puVar40;
              puVar32 = puVar40;
              if (puVar40 <= puVar31 + -1) {
LAB_14f352070:
                uVar21 = *(ulonglong *)(lVar34 + (longlong)puVar32) ^ *puVar32;
                if (uVar21 == 0) goto code_r0x00014f35207d;
                uVar4 = 0;
                if (uVar21 != 0) {
                  for (; (uVar21 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
                  }
                }
                puVar22 = (uchar *)(((uVar4 >> 3) - (longlong)puVar40) + (longlong)puVar32);
                goto LAB_14f3520a9;
              }
LAB_14f352086:
              puVar22 = (uchar *)((longlong)puVar32 - (longlong)puVar40);
              for (puVar32 = (ulonglong *)(puVar22 + (longlong)puVar40);
                  (puVar32 < puVar31 && ((uchar)*puVar32 == *(uchar *)(lVar34 + (longlong)puVar32)))
                  ; puVar32 = (ulonglong *)((longlong)puVar32 + 1)) {
                puVar22 = puVar22 + 1;
              }
LAB_14f3520a9:
              if ((longlong)puVar2 < (longlong)puVar22) {
                uVar17 = (uint)puVar22;
                puVar2 = puVar22;
                if (((local_188->farMatchOffsetLog2 < 1) ||
                    ((int)uVar35 < 1 << ((byte)local_188->farMatchOffsetLog2 & 0x1f))) ||
                   (local_188->farMatchMinLen <= (int)uVar17)) {
                  if (0xfffff < (int)uVar35) {
                    if ((int)uVar35 < 0x400000) {
                      if ((int)uVar35 < 0x200000) {
                        bVar42 = SBORROW4(uVar17,5);
                        bVar41 = (int)(uVar17 - 5) < 0;
                      }
                      else {
                        bVar42 = SBORROW4(uVar17,6);
                        bVar41 = (int)(uVar17 - 6) < 0;
                      }
                    }
                    else {
                      bVar42 = SBORROW4(uVar17,8);
                      bVar41 = (int)(uVar17 - 8) < 0;
                    }
                    if (bVar42 != bVar41) goto joined_r0x00014f351ff9;
                  }
                  if (((5 < (int)uVar17) || ((int)uVar35 < max_offset[(int)uVar17])) &&
                     ((int)uVar38 <= (int)uVar17)) {
                    if (uVar17 == uVar38) {
                      bVar41 = (int)uVar35 < (int)uStack_1dc;
LAB_14f352161:
                      if (!bVar41) goto joined_r0x00014f351ff9;
                    }
                    else if ((int)uVar17 <= (int)(uVar38 + 1)) {
                      bVar41 = (int)uVar35 >> 7 <= (int)uStack_1dc;
                      goto LAB_14f352161;
                    }
                    uStack_1dc = uVar35;
                    uVar38 = uVar17;
                    uVar27 = uVar35;
                  }
                }
              }
            }
          }
          goto joined_r0x00014f351ff9;
        }
        auVar43 = ZEXT416((local_1a0 ^ uVar28) & 0x3ffffff ^ uVar28);
        auVar51._0_8_ = uVar39 << 0x20;
        auVar51._8_8_ = auVar44._8_8_ << 0x20 | uVar39 >> 0x20;
        *local_190 = auVar43 | auVar51;
        auVar45._0_8_ = *(ulonglong *)*local_198 << 0x20;
        auVar45._8_8_ = *(longlong *)(*local_198 + 8) << 0x20 | *(ulonglong *)*local_198 >> 0x20;
        *local_198 = auVar43 | auVar45;
        if (uStack_1dc == 0) {
          puVar32 = local_1b8;
          puVar25 = local_160;
          if (1 < (int)local_1a4) goto LAB_14f352258;
          goto LAB_14f351a45;
        }
        if ((1 < (int)local_1a4) &&
           ((((int)uVar38 <= (int)(local_1a4 + 1) ||
             (((int)uVar38 <= (int)(local_1a4 + 2) && (0x3ff < (int)uStack_1dc)))) ||
            (((int)uVar38 <= (int)(local_1a4 + 3) && (0xffff < (int)uStack_1dc))))))
        goto LAB_14f352258;
      }
      else {
        auVar45 = ZEXT416((local_1a0 ^ uVar28) & 0x3ffffff ^ uVar28);
        auVar43._0_8_ = uVar39 << 0x20;
        auVar43._8_8_ = auVar44._8_8_ << 0x20 | uVar39 >> 0x20;
        *local_190 = auVar43 | auVar45;
        auVar44._0_8_ = *(ulonglong *)*local_198 << 0x20;
        auVar44._8_8_ = *(longlong *)(*local_198 + 8) << 0x20 | *(ulonglong *)*local_198 >> 0x20;
        *local_198 = auVar44 | auVar45;
LAB_14f352258:
        uStack_1dc = local_1a8 - 6;
        uVar38 = local_1a4;
        uVar27 = uStack_1dc;
      }
      if ((ulonglong *)((longlong)puVar40 + 1U) < local_1b8) {
        do {
          bVar41 = newLZHC_get_match_heuristic<oo2::CTMF<unsigned_int,2,8,4>_>
                             (&local_1c0,pCVar37,&local_c0,(uchar *)((longlong)puVar40 + 1),
                              (uchar *)puVar31,iVar24,(uchar *)local_1c8,local_1d8,pOVar11);
          if (bVar41) {
            if (local_1c0.ml == 0) goto LAB_14f352334;
            if (local_1c0.off < 1) {
              iVar16 = 0;
            }
            else {
              iVar16 = 0x1f;
              if (local_1c0.off != 0) {
                for (; (uint)local_1c0.off >> iVar16 == 0; iVar16 = iVar16 + -1) {
                }
              }
              iVar16 = iVar16 + 3;
              if (local_1c0.off == 0) {
                iVar16 = 2;
              }
            }
            if ((int)uStack_1dc < 1) {
              iVar33 = 0;
            }
            else {
              iVar33 = 0x1f;
              if (uStack_1dc != 0) {
                for (; uStack_1dc >> iVar33 == 0; iVar33 = iVar33 + -1) {
                }
              }
              iVar33 = iVar33 + 3;
              if (uStack_1dc == 0) {
                iVar33 = 2;
              }
            }
            if ((int)((local_1c0.ml * 4 - iVar16) - ((uVar38 * 4 + 4) - iVar33)) < 1)
            goto LAB_14f352334;
            lVar34 = 1;
          }
          else {
LAB_14f352334:
            if (((local_1b8 <= (ulonglong *)((longlong)puVar40 + 2)) || (uVar38 == 2)) ||
               (bVar41 = newLZHC_get_match_heuristic<oo2::CTMF<unsigned_int,2,8,4>_>
                                   (&local_1c0,pCVar37,&local_c0,(uchar *)((longlong)puVar40 + 2),
                                    (uchar *)puVar31,iVar24,(uchar *)local_1c8,local_1d8,pOVar11),
               !bVar41)) break;
            if (local_1c0.ml == 0) break;
            if (local_1c0.off < 1) {
              iVar16 = 0;
            }
            else {
              iVar16 = 0x1f;
              if (local_1c0.off != 0) {
                for (; (uint)local_1c0.off >> iVar16 == 0; iVar16 = iVar16 + -1) {
                }
              }
              iVar16 = iVar16 + 3;
              if (local_1c0.off == 0) {
                iVar16 = 2;
              }
            }
            if ((int)uStack_1dc < 1) {
              iVar33 = 0;
            }
            else {
              iVar33 = 0x1f;
              if (uStack_1dc != 0) {
                for (; uStack_1dc >> iVar33 == 0; iVar33 = iVar33 + -1) {
                }
              }
              iVar33 = iVar33 + 3;
              if (uStack_1dc == 0) {
                iVar33 = 2;
              }
            }
            if ((int)((local_1c0.ml * 4 - iVar16) - ((uVar38 * 4 + 4) - iVar33)) < 4) break;
            lVar34 = 2;
          }
          puVar40 = (ulonglong *)((longlong)puVar40 + lVar34);
          uVar38 = local_1c0.ml;
          uVar27 = local_1c0.off;
          uStack_1dc = local_1c0.off;
        } while ((ulonglong *)((longlong)puVar40 + 1) < local_1b8);
        local_200 = local_c0.lasts.contents[8];
      }
      lVar34 = local_168;
      uVar26 = uStack_1dc;
      if ((int)uStack_1dc < 1) {
        uVar26 = *(uint *)((longlong)&local_c0 + (longlong)(int)uStack_1dc * -4 + 0x20);
      }
      if (local_1c8 < puVar40) {
        puVar2 = pCVar37->m_base_ptr;
        lVar29 = (longlong)puVar40 - (longlong)puVar2;
        do {
          if ((lVar29 <= (int)uVar26) ||
             (puVar2[lVar29 + -1] != puVar2[lVar29 + (-1 - (longlong)(int)uVar26)])) break;
          puVar40 = (ulonglong *)((longlong)puVar40 + -1);
          lVar29 = lVar29 + -1;
          uVar38 = uVar38 + 1;
        } while (local_1c8 < puVar40);
      }
      if ((uStack_1dc == 0) && (uStack_1dc = uVar27, puVar40 == local_1c8)) {
        uStack_1dc = 0xffffffff;
      }
      iVar33 = (int)puVar40;
      iVar16 = iVar33 - (int)local_1c8;
      local_80 = local_200;
      iStack_7c = iVar16;
      uStack_78 = uVar38;
      uStack_74 = uStack_1dc;
      if ((local_158 < local_168 + 1U) &&
         (iVar18 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h",
                                      0x3f,
                                      "oo2::vector_storage_a<struct oo2::newlzhc_encoder_parse>::needmakefit"
                                      ,"newsize <= m_capacity"), iVar18 != 0)) {
        pcVar5 = (code *)swi(3);
        lVar20 = (*pcVar5)();
        return lVar20;
      }
      local_168 = local_168 + 1;
      puVar30 = (undefined8 *)(lVar34 * 0x10 + (longlong)local_150);
      if (puVar30 != (undefined8 *)0x0) {
        *puVar30 = CONCAT44(iStack_7c,local_80);
        puVar30[1] = CONCAT44(uStack_74,uStack_78);
      }
      newLZHC_histo_literals
                (local_1b0,local_180,(longlong)((int)local_1c8 - (int)local_180),(longlong)iVar16,
                 local_200,1);
      iVar15 = local_c0.lasts.contents[0xe];
      iVar14 = local_c0.lasts.contents[0xd];
      iVar13 = local_c0.lasts.contents[0xc];
      iVar12 = local_c0.lasts.contents[0xb];
      iVar18 = local_c0.lasts.contents[10];
      iVar16 = local_c0.lasts.contents[9];
      if ((int)uStack_1dc < 1) {
        lVar34 = (longlong)(int)-uStack_1dc;
        local_200 = local_c0.lasts.contents[lVar34 + 8];
        uVar8 = *(undefined8 *)(local_c0.lasts.contents + lVar34 + 2);
        uVar9 = *(undefined8 *)(local_c0.lasts.contents + lVar34 + 4);
        uVar10 = *(undefined8 *)(local_c0.lasts.contents + lVar34 + 6);
        *(undefined8 *)(local_c0.lasts.contents + lVar34 + 1) =
             *(undefined8 *)(local_c0.lasts.contents + lVar34);
        *(undefined8 *)(local_c0.lasts.contents + lVar34 + 3) = uVar8;
        *(undefined8 *)(local_c0.lasts.contents + lVar34 + 5) = uVar9;
        *(undefined8 *)(local_c0.lasts.contents + lVar34 + 7) = uVar10;
      }
      else {
        local_c0.lasts.contents[9] = local_c0.lasts.contents[8];
        local_c0.lasts.contents[10] = iVar16;
        local_c0.lasts.contents[0xb] = iVar18;
        local_c0.lasts.contents[0xc] = iVar12;
        local_c0.lasts.contents[0xd] = iVar13;
        local_c0.lasts.contents[0xe] = iVar14;
        local_c0.lasts.contents[0xf] = iVar15;
        local_200 = uStack_1dc;
      }
      local_c0.lasts.contents[8] = local_200;
      local_1c8 = (ulonglong *)((longlong)(int)uVar38 + (longlong)puVar40);
      puVar32 = (ulonglong *)pCVar37->m_next_ptr;
      if (puVar32 < local_1c8) {
        iVar18 = (int)pCVar37->m_base_ptr;
        pauVar3 = (undefined1 (*) [16])pCVar37->m_next_row;
        auVar46._0_8_ = *(ulonglong *)*pauVar3 << 0x20;
        auVar46._8_8_ =
             *(longlong *)((longlong)*pauVar3 + 8) << 0x20 | *(ulonglong *)*pauVar3 >> 0x20;
        *pauVar3 = auVar46 | ZEXT416(((int)puVar32 - iVar18 ^ pCVar37->m_next_hash) & 0x3ffffff ^
                                     pCVar37->m_next_hash);
        pauVar3 = (undefined1 (*) [16])pCVar37->m_next_row_second;
        auVar47._0_8_ = *(ulonglong *)*pauVar3 << 0x20;
        auVar47._8_8_ =
             *(longlong *)((longlong)*pauVar3 + 8) << 0x20 | *(ulonglong *)*pauVar3 >> 0x20;
        *pauVar3 = auVar47 | ZEXT416((*(int *)&pCVar37->m_next_ptr - iVar18 ^ pCVar37->m_next_hash)
                                     & 0x3ffffff ^ pCVar37->m_next_hash);
        iVar16 = (*(int *)&pCVar37->m_next_ptr - iVar33) + 1;
        if (iVar16 < (int)uVar38) {
          lVar34 = (longlong)iVar16;
          do {
            bVar6 = (byte)pCVar37->m_table_size_bits & 0x1f;
            uVar26 = (uint)(*(longlong *)(lVar34 + (longlong)puVar40) * pCVar37->m_hash_mul >> 0x20)
            ;
            uVar28 = uVar26 << bVar6 | uVar26 >> 0x20 - bVar6;
            uVar26 = pCVar37->m_hash_row_mask & uVar28;
            puVar1 = (pCVar37->m_hash_table).m_ptr;
            puVar32 = (ulonglong *)(puVar1 + uVar26);
            uVar39 = *puVar32;
            auVar48._0_8_ = uVar39 << 0x20;
            auVar48._8_8_ = puVar32[1] << 0x20 | uVar39 >> 0x20;
            *(undefined1 (*) [16])(puVar1 + uVar26) =
                 auVar48 | ZEXT416(((iVar16 + iVar33) - iVar18 ^ uVar28) & 0x3ffffff ^ uVar28);
            iVar16 = iVar16 * 2;
            lVar34 = lVar34 * 2;
          } while (iVar16 < (int)uVar38);
        }
LAB_14f3526aa:
        pCVar37->m_next_ptr = (uchar *)local_1c8;
        bVar6 = (byte)pCVar37->m_table_size_bits & 0x1f;
        uVar26 = (uint)(*local_1c8 * pCVar37->m_hash_mul >> 0x20);
        uVar26 = uVar26 << bVar6 | uVar26 >> 0x20 - bVar6;
        puVar1 = (pCVar37->m_hash_table).m_ptr;
        pCVar37->m_next_row = puVar1 + (pCVar37->m_hash_row_mask & uVar26);
        pCVar37->m_next_hash = uVar26;
        pCVar37->m_next_row_second =
             puVar1 + (*local_1c8 * -0x30e44323485a9b9d >>
                       (0x40U - (char)pCVar37->m_table_size_bits & 0x3f) & 0xfffffffffffffffc);
      }
      else if (puVar32 != local_1c8) goto LAB_14f3526aa;
      puVar32 = local_1b8;
      puVar25 = local_1c8;
    } while (local_1c8 < local_1b8);
    puVar2 = local_180;
    pnVar19 = local_1b0;
    if (0 < (longlong)(local_180 + (local_148 - (longlong)local_1c8))) {
      newLZHC_histo_literals
                (local_1b0,local_180,(longlong)((int)local_1c8 - (int)local_180),
                 (long64)(local_180 + (local_148 - (longlong)local_1c8)),local_200,1);
    }
    uVar39 = newLZHC_put_parse(local_110,local_118,pnVar19,local_120,puVar2,local_19c,local_128,
                               local_130,param_8,local_138,local_200,
                               (vector_a<oo2::newlzhc_encoder_parse> *)&local_178,(int)local_140,
                               (newlzhc_passinfo *)0x0,eNewLZ_MinOffset_8);
    if (pnVar19 != (newlzhc_histo *)0x0) {
      if (local_108 == (rrArenaAllocator *)0x0) {
        (*g_fp_OodleCore_Plugin_Free)(pnVar19);
      }
      else {
        rrArenaAllocator::Free(local_108,pnVar19,0x8c04);
      }
    }
  }
  return uVar39;
code_r0x00014f351b39:
  puVar25 = puVar25 + 1;
  if (puVar31 + -1 < puVar25) goto LAB_14f351b45;
  goto LAB_14f351b30;
code_r0x00014f351bd9:
  puVar25 = puVar25 + 1;
  if (puVar31 + -1 < puVar25) goto LAB_14f351be5;
  goto LAB_14f351bd0;
code_r0x00014f351c6e:
  puVar25 = puVar25 + 1;
  if (puVar31 + -1 < puVar25) goto LAB_14f351c77;
  goto LAB_14f351c65;
code_r0x00014f351d0e:
  puVar25 = puVar25 + 1;
  if (puVar31 + -1 < puVar25) goto LAB_14f351d17;
  goto LAB_14f351d05;
code_r0x00014f351dae:
  puVar25 = puVar25 + 1;
  if (puVar31 + -1 < puVar25) goto LAB_14f351db7;
  goto LAB_14f351da5;
code_r0x00014f351e4e:
  puVar25 = puVar25 + 1;
  if (puVar31 + -1 < puVar25) goto LAB_14f351e57;
  goto LAB_14f351e45;
code_r0x00014f351efd:
  puVar25 = puVar25 + 1;
  if (puVar31 + -1 < puVar25) goto LAB_14f351f06;
  goto LAB_14f351ef0;
code_r0x00014f35207d:
  puVar32 = puVar32 + 1;
  if (puVar31 + -1 < puVar32) goto LAB_14f352086;
  goto LAB_14f352070;
}

// newLZHC_encode_chunk<oo2::CTMF<unsigned_int,3,0,4>,1,1,0> @ 14f352840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

long64 __cdecl
oo2::newLZHC_encode_chunk<oo2::CTMF<unsigned_int,3,0,4>,1,1,0>
          (newlz_vtable *param_1,newlz_encoder_scratch *param_2,uchar *param_3,uchar *param_4,
          int param_5,uchar *param_6,uchar *param_7,long64 param_8,int *param_9,float *param_10,
          OodleKrakenChunkDeadlines *param_11)

{
  uint uVar1;
  uint uVar2;
  rrArenaAllocator *this;
  OodleLZ_CompressOptions *pOVar3;
  uint *puVar4;
  ulonglong uVar5;
  code *pcVar6;
  byte bVar7;
  ushort uVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  newlzhc_histo *pnVar24;
  long64 lVar25;
  ulonglong uVar26;
  uchar *puVar27;
  int iVar28;
  ulonglong *puVar29;
  uint uVar30;
  ulonglong *puVar31;
  longlong lVar32;
  undefined8 *puVar33;
  ulonglong uVar34;
  ulonglong *puVar35;
  int iVar36;
  longlong lVar37;
  uint uVar38;
  short sVar39;
  uchar *puVar40;
  uint uVar41;
  CTMF<unsigned_int,3,0,4> *pCVar42;
  uint uVar43;
  ulonglong *puVar44;
  ulonglong *puVar45;
  bool bVar46;
  bool bVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auStackY_2d8 [32];
  uint local_240;
  uint uStack_21c;
  uint local_218;
  ulonglong *local_210;
  match local_1c8;
  uchar *local_1c0;
  rrArenaAllocator *local_1b8;
  void *local_1b0;
  ulonglong local_1a8;
  longlong local_1a0;
  ulonglong *local_198;
  ulonglong local_190;
  void *local_188;
  ulonglong local_180;
  longlong local_178;
  newlz_vtable *local_170;
  uchar *local_168;
  uchar *local_160;
  int *local_158;
  float *local_150;
  newlz_encoder_scratch *local_148;
  CTMF<unsigned_int,3,0,4> *local_140;
  rrArenaAllocator *local_138;
  newlzhc_histo *local_130;
  undefined8 local_128;
  newLZHC_LOs local_100;
  uint local_c0;
  int iStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint local_b0 [4];
  uint local_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  ulonglong local_70;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_70 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  uVar34 = (ulonglong)param_5;
  local_160 = param_6;
  local_168 = param_7;
  local_158 = param_9;
  local_150 = param_10;
  *param_9 = -1;
  if (param_5 < 0x81) {
    return uVar34;
  }
  this = param_2->arena;
  pOVar3 = param_1->pOptions;
  local_218 = pOVar3->dictionarySize;
  if ((int)local_218 < 1) {
    local_218 = 0x40000000;
  }
  else if (0x40000000 < (int)local_218) {
    local_218 = 0x40000000;
  }
  iVar28 = 4;
  if (4 < pOVar3->minMatchLen) {
    iVar28 = pOVar3->minMatchLen;
  }
  pCVar42 = param_1->matcher;
  local_1b0 = (void *)0x0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_1c0 = param_4;
  local_1b8 = this;
  local_180 = uVar34;
  local_170 = param_1;
  local_148 = param_2;
  local_140 = pCVar42;
  newlz_scratchblock::extend
            (&param_2->newlzhc_parsevec_space,(uVar34 & 0xfffffffffffffff) << 3,this);
  local_1b0 = (param_2->newlzhc_parsevec_space).m_ptr;
  local_1a8 = (ulonglong)(param_2->newlzhc_parsevec_space).m_size >> 4;
  local_190 = local_1a8;
  local_188 = local_1b0;
  newlz_scratchblock::extend
            (&param_2->literals_space,(longlong)(int)(param_5 + 0x100 + ((uint)param_5 >> 4)),this);
  puVar35 = (ulonglong *)(param_4 + (uVar34 - 8));
  local_100.lasts.contents[8] = (int)___xmm_00000008000000080000000800000008;
  local_100.lasts.contents[9] = (int)((ulonglong)___xmm_00000008000000080000000800000008 >> 0x20);
  local_100.lasts.contents[10] = (int)_UNK_150b50de8;
  local_100.lasts.contents[0xb] = (int)((ulonglong)_UNK_150b50de8 >> 0x20);
  uVar34 = 8;
  local_100.lasts.contents[0xc] = 8;
  local_100.lasts.contents[0xd] = 8;
  local_100.lasts.contents[0xe] = 8;
  local_178 = 8;
  if (param_8 != 0) {
    local_178 = 0;
  }
  local_210 = (ulonglong *)(param_4 + local_178);
  pCVar42->m_next_ptr = (uchar *)local_210;
  bVar7 = (byte)pCVar42->m_table_size_bits & 0x1f;
  uVar30 = (uint)(*local_210 * pCVar42->m_hash_mul >> 0x20);
  uVar30 = uVar30 << bVar7 | uVar30 >> 0x20 - bVar7;
  pCVar42->m_next_hash = uVar30;
  pCVar42->m_next_row = (pCVar42->m_hash_table).m_ptr + (pCVar42->m_hash_row_mask & uVar30);
  puVar44 = (ulonglong *)(param_4 + (longlong)param_5 + -0x10);
  local_128 = 0x8c04;
  local_138 = this;
  if (this == (rrArenaAllocator *)0x0) {
    pnVar24 = (*g_fp_OodleCore_Plugin_MallocAligned)(0x8c04,0x10);
    if (pnVar24 == (newlzhc_histo *)0x0) {
                    /* WARNING: Subroutine does not return */
      Oodle_Core_Malloc_Failed(0x8c04);
    }
  }
  else {
    pnVar24 = rrArenaAllocator::Alloc(this,0x8c04,0);
  }
  local_130 = pnVar24;
  if ((pnVar24 == (newlzhc_histo *)0x0) &&
     (iVar17 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\rrarenaallocator.h",0x19a,
                                  "oo2::rrScopeArenaAlloc::rrScopeArenaAlloc","m_ptr != NULL"),
     iVar17 != 0)) {
    pcVar6 = (code *)swi(3);
    lVar25 = (*pcVar6)();
    return lVar25;
  }
  rrMemSetZero(pnVar24,0x8c04);
  local_240 = local_100.lasts.contents[8];
  puVar45 = local_210;
  while (1 < (longlong)puVar44 - (longlong)puVar45) {
    uVar2 = (uint)*puVar45;
    puVar4 = pCVar42->m_next_row;
    uVar1 = pCVar42->m_next_hash;
    uVar41 = (int)puVar45 - *(int *)&pCVar42->m_base_ptr;
    local_198 = (ulonglong *)((longlong)puVar45 + 1);
    pCVar42->m_next_ptr = (uchar *)local_198;
    bVar7 = (byte)pCVar42->m_table_size_bits & 0x1f;
    uVar30 = (uint)(*local_198 * pCVar42->m_hash_mul >> 0x20);
    uVar30 = uVar30 << bVar7 | uVar30 >> 0x20 - bVar7;
    pCVar42->m_next_hash = uVar30;
    pCVar42->m_next_row = (pCVar42->m_hash_table).m_ptr + (pCVar42->m_hash_row_mask & uVar30);
    uVar30 = 7;
    uVar18 = *(uint *)((longlong)puVar45 - (ulonglong)local_240);
    sVar39 = (short)uVar2;
    if (sVar39 == (short)uVar18) {
      uVar18 = uVar18 ^ uVar2;
      if (uVar18 == 0) {
        puVar31 = (ulonglong *)((longlong)puVar45 + 4);
        lVar37 = (longlong)((longlong)puVar45 - (ulonglong)local_240) - (longlong)puVar45;
        puVar29 = puVar31;
        if (puVar31 <= puVar35 + -1) {
LAB_14f352bd0:
          uVar26 = *(ulonglong *)(lVar37 + (longlong)puVar29) ^ *puVar29;
          if (uVar26 == 0) goto code_r0x00014f352bd9;
          uVar5 = 0;
          if (uVar26 != 0) {
            for (; (uVar26 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
            }
          }
          iVar17 = ((int)(uVar5 >> 3) - (int)puVar31) + (int)puVar29;
          goto LAB_14f352c05;
        }
LAB_14f352be5:
        lVar32 = (longlong)puVar29 - (longlong)puVar31;
        iVar17 = (int)lVar32;
        for (; (puVar29 < puVar35 &&
               (iVar17 = (int)lVar32, (uchar)*puVar29 == *(uchar *)(lVar37 + (longlong)puVar29)));
            puVar29 = (ulonglong *)((longlong)puVar29 + 1)) {
          lVar32 = lVar32 + 1;
          iVar17 = (int)lVar32;
        }
LAB_14f352c05:
        iVar17 = iVar17 + 4;
      }
      else {
        iVar17 = 3 - (uint)((uVar18 & 0xffffff) != 0);
      }
      uVar30 = iVar17 * 8 + 6;
      if ((int)uVar30 < 7) {
        uVar30 = 7;
      }
    }
    uVar19 = *(uint *)((longlong)puVar45 - (ulonglong)(uint)local_100.lasts.contents[9]);
    uVar18 = uVar30;
    if (sVar39 == (short)uVar19) {
      uVar19 = uVar19 ^ uVar2;
      if (uVar19 == 0) {
        puVar31 = (ulonglong *)((longlong)puVar45 + 4);
        lVar37 = (longlong)((longlong)puVar45 - (ulonglong)(uint)local_100.lasts.contents[9]) -
                 (longlong)puVar45;
        puVar29 = puVar31;
        if (puVar31 <= puVar35 + -1) {
LAB_14f352c70:
          uVar26 = *(ulonglong *)(lVar37 + (longlong)puVar29) ^ *puVar29;
          if (uVar26 == 0) goto code_r0x00014f352c79;
          uVar5 = 0;
          if (uVar26 != 0) {
            for (; (uVar26 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
            }
          }
          iVar17 = ((int)(uVar5 >> 3) - (int)puVar31) + (int)puVar29;
          goto LAB_14f352ca5;
        }
LAB_14f352c85:
        lVar32 = (longlong)puVar29 - (longlong)puVar31;
        iVar17 = (int)lVar32;
        for (; (puVar29 < puVar35 &&
               (iVar17 = (int)lVar32, (uchar)*puVar29 == *(uchar *)(lVar37 + (longlong)puVar29)));
            puVar29 = (ulonglong *)((longlong)puVar29 + 1)) {
          lVar32 = lVar32 + 1;
          iVar17 = (int)lVar32;
        }
LAB_14f352ca5:
        iVar17 = iVar17 + 4;
      }
      else {
        iVar17 = 3 - (uint)((uVar19 & 0xffffff) != 0);
      }
      uVar18 = iVar17 * 8 + 5;
      if ((int)uVar18 < (int)uVar30) {
        uVar18 = uVar30;
      }
    }
    uVar19 = *(uint *)((longlong)puVar45 - (ulonglong)(uint)local_100.lasts.contents[10]);
    uVar30 = uVar18;
    if (sVar39 == (short)uVar19) {
      uVar19 = uVar19 ^ uVar2;
      if (uVar19 == 0) {
        puVar31 = (ulonglong *)((longlong)puVar45 + 4);
        lVar37 = (longlong)((longlong)puVar45 - (ulonglong)(uint)local_100.lasts.contents[10]) -
                 (longlong)puVar45;
        puVar29 = puVar31;
        if (puVar31 <= puVar35 + -1) {
LAB_14f352d05:
          uVar26 = *(ulonglong *)(lVar37 + (longlong)puVar29) ^ *puVar29;
          if (uVar26 == 0) goto code_r0x00014f352d0e;
          uVar5 = 0;
          if (uVar26 != 0) {
            for (; (uVar26 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
            }
          }
          iVar17 = ((int)(uVar5 >> 3) - (int)puVar31) + (int)puVar29;
          goto LAB_14f352d39;
        }
LAB_14f352d17:
        lVar32 = (longlong)puVar29 - (longlong)puVar31;
        iVar17 = (int)lVar32;
        for (; (puVar29 < puVar35 &&
               (iVar17 = (int)lVar32, (uchar)*puVar29 == *(uchar *)(lVar37 + (longlong)puVar29)));
            puVar29 = (ulonglong *)((longlong)puVar29 + 1)) {
          lVar32 = lVar32 + 1;
          iVar17 = (int)lVar32;
        }
LAB_14f352d39:
        iVar17 = iVar17 + 4;
      }
      else {
        iVar17 = 3 - (uint)((uVar19 & 0xffffff) != 0);
      }
      uVar30 = iVar17 * 8 + 4;
      if ((int)uVar30 < (int)uVar18) {
        uVar30 = uVar18;
      }
    }
    uVar19 = *(uint *)((longlong)puVar45 - (ulonglong)(uint)local_100.lasts.contents[0xb]);
    uVar18 = uVar30;
    if (sVar39 == (short)uVar19) {
      uVar19 = uVar19 ^ uVar2;
      if (uVar19 == 0) {
        puVar31 = (ulonglong *)((longlong)puVar45 + 4);
        lVar37 = (longlong)((longlong)puVar45 - (ulonglong)(uint)local_100.lasts.contents[0xb]) -
                 (longlong)puVar45;
        puVar29 = puVar31;
        if (puVar31 <= puVar35 + -1) {
LAB_14f352da5:
          uVar26 = *(ulonglong *)(lVar37 + (longlong)puVar29) ^ *puVar29;
          if (uVar26 == 0) goto code_r0x00014f352dae;
          uVar5 = 0;
          if (uVar26 != 0) {
            for (; (uVar26 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
            }
          }
          iVar17 = ((int)(uVar5 >> 3) - (int)puVar31) + (int)puVar29;
          goto LAB_14f352dd9;
        }
LAB_14f352db7:
        lVar32 = (longlong)puVar29 - (longlong)puVar31;
        iVar17 = (int)lVar32;
        for (; (puVar29 < puVar35 &&
               (iVar17 = (int)lVar32, (uchar)*puVar29 == *(uchar *)(lVar37 + (longlong)puVar29)));
            puVar29 = (ulonglong *)((longlong)puVar29 + 1)) {
          lVar32 = lVar32 + 1;
          iVar17 = (int)lVar32;
        }
LAB_14f352dd9:
        iVar17 = iVar17 + 4;
      }
      else {
        iVar17 = 3 - (uint)((uVar19 & 0xffffff) != 0);
      }
      uVar18 = iVar17 * 8 + 3;
      if ((int)uVar18 < (int)uVar30) {
        uVar18 = uVar30;
      }
    }
    uVar19 = *(uint *)((longlong)puVar45 - uVar34);
    uVar30 = uVar18;
    if (sVar39 == (short)uVar19) {
      uVar19 = uVar19 ^ uVar2;
      if (uVar19 == 0) {
        puVar31 = (ulonglong *)((longlong)puVar45 + 4);
        lVar37 = (longlong)((longlong)puVar45 - uVar34) - (longlong)puVar45;
        puVar29 = puVar31;
        if (puVar31 <= puVar35 + -1) {
LAB_14f352e45:
          uVar34 = *(ulonglong *)(lVar37 + (longlong)puVar29) ^ *puVar29;
          if (uVar34 == 0) goto code_r0x00014f352e4e;
          uVar26 = 0;
          if (uVar34 != 0) {
            for (; (uVar34 >> uVar26 & 1) == 0; uVar26 = uVar26 + 1) {
            }
          }
          iVar17 = ((int)(uVar26 >> 3) - (int)puVar31) + (int)puVar29;
          goto LAB_14f352e79;
        }
LAB_14f352e57:
        lVar32 = (longlong)puVar29 - (longlong)puVar31;
        iVar17 = (int)lVar32;
        for (; (puVar29 < puVar35 &&
               (iVar17 = (int)lVar32, (uchar)*puVar29 == *(uchar *)(lVar37 + (longlong)puVar29)));
            puVar29 = (ulonglong *)((longlong)puVar29 + 1)) {
          lVar32 = lVar32 + 1;
          iVar17 = (int)lVar32;
        }
LAB_14f352e79:
        iVar17 = iVar17 + 4;
      }
      else {
        iVar17 = 3 - (uint)((uVar19 & 0xffffff) != 0);
      }
      uVar30 = iVar17 * 8 + 2;
      if ((int)uVar30 < (int)uVar18) {
        uVar30 = uVar18;
      }
    }
    uVar19 = *(uint *)((longlong)puVar45 - (ulonglong)(uint)local_100.lasts.contents[0xd]);
    uVar18 = uVar30;
    if (sVar39 == (short)uVar19) {
      uVar19 = uVar19 ^ uVar2;
      if (uVar19 == 0) {
        puVar31 = (ulonglong *)((longlong)puVar45 + 4);
        lVar37 = (longlong)((longlong)puVar45 - (ulonglong)(uint)local_100.lasts.contents[0xd]) -
                 (longlong)puVar45;
        puVar29 = puVar31;
        if (puVar31 <= puVar35 + -1) {
LAB_14f352ee5:
          uVar34 = *(ulonglong *)(lVar37 + (longlong)puVar29) ^ *puVar29;
          if (uVar34 == 0) goto code_r0x00014f352eee;
          uVar26 = 0;
          if (uVar34 != 0) {
            for (; (uVar34 >> uVar26 & 1) == 0; uVar26 = uVar26 + 1) {
            }
          }
          iVar17 = ((int)(uVar26 >> 3) - (int)puVar31) + (int)puVar29;
          goto LAB_14f352f19;
        }
LAB_14f352ef7:
        lVar32 = (longlong)puVar29 - (longlong)puVar31;
        iVar17 = (int)lVar32;
        for (; (puVar29 < puVar35 &&
               (iVar17 = (int)lVar32, (uchar)*puVar29 == *(uchar *)(lVar37 + (longlong)puVar29)));
            puVar29 = (ulonglong *)((longlong)puVar29 + 1)) {
          lVar32 = lVar32 + 1;
          iVar17 = (int)lVar32;
        }
LAB_14f352f19:
        iVar17 = iVar17 + 4;
      }
      else {
        iVar17 = 3 - (uint)((uVar19 & 0xffffff) != 0);
      }
      uVar18 = iVar17 * 8 + 1;
      if ((int)uVar18 < (int)uVar30) {
        uVar18 = uVar30;
      }
    }
    uVar30 = *(uint *)((longlong)puVar45 - (ulonglong)(uint)local_100.lasts.contents[0xe]);
    uVar19 = uVar18;
    if (sVar39 == (short)uVar30) {
      uVar30 = uVar30 ^ uVar2;
      if (uVar30 == 0) {
        puVar31 = (ulonglong *)((longlong)puVar45 + 4);
        lVar37 = (longlong)((longlong)puVar45 - (ulonglong)(uint)local_100.lasts.contents[0xe]) -
                 (longlong)puVar45;
        puVar29 = puVar31;
        if (puVar31 <= puVar35 + -1) {
LAB_14f352f90:
          uVar34 = *(ulonglong *)(lVar37 + (longlong)puVar29) ^ *puVar29;
          if (uVar34 == 0) goto code_r0x00014f352f9d;
          uVar26 = 0;
          if (uVar34 != 0) {
            for (; (uVar34 >> uVar26 & 1) == 0; uVar26 = uVar26 + 1) {
            }
          }
          iVar17 = ((int)(uVar26 >> 3) - (int)puVar31) + (int)puVar29;
          goto LAB_14f352fc5;
        }
LAB_14f352fa6:
        lVar32 = (longlong)puVar29 - (longlong)puVar31;
        iVar17 = (int)lVar32;
        for (; (puVar29 < puVar35 &&
               (iVar17 = (int)lVar32, (uchar)*puVar29 == *(uchar *)(lVar37 + (longlong)puVar29)));
            puVar29 = (ulonglong *)((longlong)puVar29 + 1)) {
          lVar32 = lVar32 + 1;
          iVar17 = (int)lVar32;
        }
LAB_14f352fc5:
        iVar17 = iVar17 + 4;
      }
      else {
        iVar17 = 3 - (uint)((uVar30 & 0xffffff) != 0);
      }
      uVar19 = iVar17 * 8;
      if (iVar17 * 8 < (int)uVar18) {
        uVar19 = uVar18;
      }
    }
    uVar43 = (int)uVar19 >> 3;
    uVar30 = *puVar4;
    uVar2 = puVar4[1];
    uVar18 = puVar4[2];
    uVar9 = puVar4[3];
    if ((int)uVar43 < 4) {
      uVar20 = 0;
      local_b0[0] = ___xmm_03ffffff03ffffff03ffffff03ffffff & uVar41 - uVar30;
      local_b0[1] = _UNK_1531da904 & uVar41 - uVar2;
      local_b0[2] = _UNK_1531da908 & uVar41 - uVar18;
      local_b0[3] = _UNK_1531da90c & uVar41 - uVar9;
      local_a0 = ___xmm_03ffffff03ffffff03ffffff03ffffff & uVar41 - puVar4[4];
      uStack_9c = _UNK_1531da904 & uVar41 - puVar4[5];
      uStack_98 = _UNK_1531da908 & uVar41 - puVar4[6];
      uStack_94 = _UNK_1531da90c & uVar41 - puVar4[7];
      uVar21 = uVar1 & 0xfc000000;
      auVar48._0_4_ = -(uint)(uVar21 == (___xmm_fc000000fc000000fc000000fc000000 & uVar30));
      auVar48._4_4_ = -(uint)(uVar21 == (_UNK_1531da914 & uVar2));
      auVar48._8_4_ = -(uint)(uVar21 == (_UNK_1531da918 & uVar18));
      auVar48._12_4_ = -(uint)(uVar21 == (_UNK_1531da91c & uVar9));
      auVar49._0_4_ = -(uint)(uVar21 == (___xmm_fc000000fc000000fc000000fc000000 & puVar4[4]));
      auVar49._4_4_ = -(uint)(uVar21 == (_UNK_1531da914 & puVar4[5]));
      auVar49._8_4_ = -(uint)(uVar21 == (_UNK_1531da918 & puVar4[6]));
      auVar49._12_4_ = -(uint)(uVar21 == (_UNK_1531da91c & puVar4[7]));
      auVar49 = packssdw(auVar48,auVar49);
      auVar49 = packsswb(auVar49,ZEXT816(0));
      uVar8 = (ushort)(SUB161(auVar49 >> 7,0) & 1) | (ushort)(SUB161(auVar49 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar49 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar49 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar49 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar49 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar49 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar49 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar49 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar49 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar49 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar49 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar49 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar49 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar49 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar49[0xf] >> 7) << 0xf;
      uVar21 = (uint)uVar8;
      puVar40 = (uchar *)(longlong)(iVar28 + -1);
      uStack_21c = uVar20;
      if (uVar8 != 0) {
        do {
          uVar22 = 0;
          if (uVar21 != 0) {
            for (; (uVar21 >> uVar22 & 1) == 0; uVar22 = uVar22 + 1) {
            }
          }
          uVar21 = uVar21 & uVar21 - 1;
          uVar22 = local_b0[uVar22];
          if (uVar22 < local_218) {
            uVar38 = 8;
            if (8 < uVar22) {
              uVar38 = uVar22;
            }
            if (((longlong)puVar40 < (longlong)puVar35 - (longlong)puVar45) &&
               (puVar40[(longlong)puVar45] == puVar40[(longlong)puVar45 - (ulonglong)uVar38])) {
              lVar37 = ((longlong)puVar45 - (ulonglong)uVar38) - (longlong)puVar45;
              puVar31 = puVar45;
              if (puVar45 <= puVar35 + -1) {
LAB_14f353110:
                uVar34 = *(ulonglong *)(lVar37 + (longlong)puVar31) ^ *puVar31;
                if (uVar34 == 0) goto code_r0x00014f35311d;
                uVar26 = 0;
                if (uVar34 != 0) {
                  for (; (uVar34 >> uVar26 & 1) == 0; uVar26 = uVar26 + 1) {
                  }
                }
                puVar27 = (uchar *)(((uVar26 >> 3) - (longlong)puVar45) + (longlong)puVar31);
                goto LAB_14f353149;
              }
LAB_14f353126:
              puVar27 = (uchar *)((longlong)puVar31 - (longlong)puVar45);
              for (puVar31 = (ulonglong *)(puVar27 + (longlong)puVar45);
                  (puVar31 < puVar35 && ((uchar)*puVar31 == *(uchar *)(lVar37 + (longlong)puVar31)))
                  ; puVar31 = (ulonglong *)((longlong)puVar31 + 1)) {
                puVar27 = puVar27 + 1;
              }
LAB_14f353149:
              if ((longlong)puVar40 < (longlong)puVar27) {
                uVar22 = (uint)puVar27;
                puVar40 = puVar27;
                if (((pOVar3->farMatchOffsetLog2 < 1) ||
                    ((int)uVar38 < 1 << ((byte)pOVar3->farMatchOffsetLog2 & 0x1f))) ||
                   (pOVar3->farMatchMinLen <= (int)uVar22)) {
                  if (0xfffff < (int)uVar38) {
                    if ((int)uVar38 < 0x400000) {
                      if ((int)uVar38 < 0x200000) {
                        bVar47 = SBORROW4(uVar22,5);
                        bVar46 = (int)(uVar22 - 5) < 0;
                      }
                      else {
                        bVar47 = SBORROW4(uVar22,6);
                        bVar46 = (int)(uVar22 - 6) < 0;
                      }
                    }
                    else {
                      bVar47 = SBORROW4(uVar22,8);
                      bVar46 = (int)(uVar22 - 8) < 0;
                    }
                    if (bVar47 != bVar46) goto LAB_14f35320a;
                  }
                  if (((5 < (int)uVar22) || ((int)uVar38 < max_offset[(int)uVar22])) &&
                     ((int)uVar20 <= (int)uVar22)) {
                    if (uVar22 == uVar20) {
                      bVar46 = (int)uVar38 < (int)uStack_21c;
LAB_14f353201:
                      if (!bVar46) goto LAB_14f35320a;
                    }
                    else if ((int)uVar22 <= (int)(uVar20 + 1)) {
                      bVar46 = (int)uVar38 >> 7 <= (int)uStack_21c;
                      goto LAB_14f353201;
                    }
                    uVar20 = uVar22;
                    uStack_21c = uVar38;
                  }
                }
              }
            }
          }
LAB_14f35320a:
          pCVar42 = local_140;
        } while (uVar21 != 0);
      }
      uVar10 = *(undefined8 *)(puVar4 + 3);
      puVar4[1] = uVar30;
      puVar4[2] = uVar2;
      puVar4[3] = uVar18;
      puVar4[4] = uVar9;
      *(undefined8 *)(puVar4 + 4) = uVar10;
      *(undefined8 *)(puVar4 + 6) = *(undefined8 *)(puVar4 + 5);
      *puVar4 = (uVar41 ^ uVar1) & 0x3ffffff ^ uVar1;
      if (uStack_21c != 0) {
        if ((1 < (int)uVar43) &&
           ((((int)uVar20 <= (int)(uVar43 + 1) ||
             (((int)uVar20 <= (int)(uVar43 + 2) && (0x3ff < (int)uStack_21c)))) ||
            (((int)uVar20 <= (int)(uVar43 + 3) && (0xffff < (int)uStack_21c))))))
        goto LAB_14f3532c5;
        goto LAB_14f3532cd;
      }
      if (1 < (int)uVar43) goto LAB_14f3532c5;
      uVar34 = (ulonglong)(uint)local_100.lasts.contents[0xc];
      puVar45 = local_198;
    }
    else {
      uVar10 = *(undefined8 *)(puVar4 + 3);
      puVar4[1] = uVar30;
      puVar4[2] = uVar2;
      puVar4[3] = uVar18;
      puVar4[4] = uVar9;
      *(undefined8 *)(puVar4 + 4) = uVar10;
      *(undefined8 *)(puVar4 + 6) = *(undefined8 *)(puVar4 + 5);
      *puVar4 = (uVar41 ^ uVar1) & 0x3ffffff ^ uVar1;
LAB_14f3532c5:
      uStack_21c = (uVar19 & 7) - 6;
      uVar20 = uVar43;
LAB_14f3532cd:
      if ((ulonglong *)((longlong)puVar45 + 1U) < puVar44) {
        while( true ) {
          puVar31 = (ulonglong *)((longlong)puVar45 + 1);
          bVar46 = newLZHC_get_match_heuristic<oo2::CTMF<unsigned_int,3,0,4>_>
                             (&local_1c8,pCVar42,&local_100,(uchar *)puVar31,(uchar *)puVar35,iVar28
                              ,(uchar *)local_210,local_218,pOVar3);
          if (!bVar46) break;
          if (local_1c8.ml == 0) break;
          if (local_1c8.off < 1) {
            iVar17 = 0;
          }
          else {
            iVar17 = 0x1f;
            if (local_1c8.off != 0) {
              for (; (uint)local_1c8.off >> iVar17 == 0; iVar17 = iVar17 + -1) {
              }
            }
            iVar17 = iVar17 + 3;
            if (local_1c8.off == 0) {
              iVar17 = 2;
            }
          }
          if ((int)uStack_21c < 1) {
            iVar36 = 0;
          }
          else {
            iVar36 = 0x1f;
            if (uStack_21c != 0) {
              for (; uStack_21c >> iVar36 == 0; iVar36 = iVar36 + -1) {
              }
            }
            iVar36 = iVar36 + 3;
            if (uStack_21c == 0) {
              iVar36 = 2;
            }
          }
          if (((int)((local_1c8.ml * 4 - iVar17) - ((uVar20 * 4 + 4) - iVar36)) < 1) ||
             (puVar29 = (ulonglong *)((longlong)puVar45 + 2), puVar45 = puVar31,
             uVar20 = local_1c8.ml, uStack_21c = local_1c8.off, puVar44 <= puVar29)) break;
        }
        local_240 = local_100.lasts.contents[8];
      }
      lVar37 = local_1a0;
      uVar30 = uStack_21c;
      if ((int)uStack_21c < 1) {
        uVar30 = *(uint *)((longlong)&local_100 + (longlong)(int)uStack_21c * -4 + 0x20);
      }
      if (local_210 < puVar45) {
        puVar40 = pCVar42->m_base_ptr;
        lVar32 = (longlong)puVar45 - (longlong)puVar40;
        do {
          if ((lVar32 <= (int)uVar30) ||
             (puVar40[lVar32 + -1] != puVar40[lVar32 + (-1 - (longlong)(int)uVar30)])) break;
          puVar45 = (ulonglong *)((longlong)puVar45 + -1);
          lVar32 = lVar32 + -1;
          uVar20 = uVar20 + 1;
        } while (local_210 < puVar45);
      }
      if ((uStack_21c == 0) && (puVar45 == local_210)) {
        uStack_21c = 0xffffffff;
      }
      iVar36 = (int)puVar45;
      iVar17 = iVar36 - (int)local_210;
      local_c0 = local_240;
      iStack_bc = iVar17;
      uStack_b8 = uVar20;
      uStack_b4 = uStack_21c;
      if ((local_190 < local_1a0 + 1U) &&
         (iVar23 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h",
                                      0x3f,
                                      "oo2::vector_storage_a<struct oo2::newlzhc_encoder_parse>::needmakefit"
                                      ,"newsize <= m_capacity"), iVar23 != 0)) {
        pcVar6 = (code *)swi(3);
        lVar25 = (*pcVar6)();
        return lVar25;
      }
      local_1a0 = local_1a0 + 1;
      puVar33 = (undefined8 *)(lVar37 * 0x10 + (longlong)local_188);
      if (puVar33 != (undefined8 *)0x0) {
        *puVar33 = CONCAT44(iStack_bc,local_c0);
        puVar33[1] = CONCAT44(uStack_b4,uStack_b8);
      }
      newLZHC_histo_literals
                (pnVar24,local_1c0,(longlong)((int)local_210 - (int)local_1c0),(longlong)iVar17,
                 local_240,1);
      iVar16 = local_100.lasts.contents[0xe];
      iVar15 = local_100.lasts.contents[0xd];
      iVar14 = local_100.lasts.contents[0xc];
      iVar13 = local_100.lasts.contents[0xb];
      iVar23 = local_100.lasts.contents[10];
      iVar17 = local_100.lasts.contents[9];
      if ((int)uStack_21c < 1) {
        lVar37 = (longlong)(int)-uStack_21c;
        local_240 = local_100.lasts.contents[lVar37 + 8];
        uVar10 = *(undefined8 *)(local_100.lasts.contents + lVar37 + 2);
        uVar11 = *(undefined8 *)(local_100.lasts.contents + lVar37 + 4);
        uVar12 = *(undefined8 *)(local_100.lasts.contents + lVar37 + 6);
        *(undefined8 *)(local_100.lasts.contents + lVar37 + 1) =
             *(undefined8 *)(local_100.lasts.contents + lVar37);
        *(undefined8 *)(local_100.lasts.contents + lVar37 + 3) = uVar10;
        *(undefined8 *)(local_100.lasts.contents + lVar37 + 5) = uVar11;
        *(undefined8 *)(local_100.lasts.contents + lVar37 + 7) = uVar12;
        local_100.lasts.contents[8] = local_240;
      }
      else {
        local_100.lasts.contents[9] = local_100.lasts.contents[8];
        local_100.lasts.contents[10] = iVar17;
        local_100.lasts.contents[0xb] = iVar23;
        local_100.lasts.contents[0xc] = iVar13;
        local_100.lasts.contents[0xd] = iVar14;
        local_100.lasts.contents[0xe] = iVar15;
        local_100.lasts.contents[0xf] = iVar16;
        local_100.lasts.contents[8] = uStack_21c;
        local_240 = uStack_21c;
      }
      local_210 = (ulonglong *)((longlong)(int)uVar20 + (longlong)puVar45);
      puVar31 = (ulonglong *)pCVar42->m_next_ptr;
      if (puVar31 < local_210) {
        iVar23 = (int)pCVar42->m_base_ptr;
        puVar4 = pCVar42->m_next_row;
        uVar30 = pCVar42->m_next_hash;
        uVar2 = pCVar42->m_next_hash;
        uVar10 = *(undefined8 *)(puVar4 + 3);
        *(undefined8 *)(puVar4 + 1) = *(undefined8 *)puVar4;
        *(undefined8 *)(puVar4 + 3) = *(undefined8 *)(puVar4 + 2);
        *(undefined8 *)(puVar4 + 4) = uVar10;
        *(undefined8 *)(puVar4 + 6) = *(undefined8 *)(puVar4 + 5);
        *puVar4 = (uVar30 ^ (int)puVar31 - iVar23) & 0x3ffffff ^ uVar2;
        iVar17 = (*(int *)&pCVar42->m_next_ptr - iVar36) + 1;
        if (iVar17 < (int)uVar20) {
          lVar37 = (longlong)iVar17;
          do {
            bVar7 = (byte)pCVar42->m_table_size_bits & 0x1f;
            uVar30 = (uint)(*(longlong *)(lVar37 + (longlong)puVar45) * pCVar42->m_hash_mul >> 0x20)
            ;
            uVar30 = uVar30 << bVar7 | uVar30 >> 0x20 - bVar7;
            uVar34 = (ulonglong)(pCVar42->m_hash_row_mask & uVar30);
            puVar4 = (pCVar42->m_hash_table).m_ptr;
            uVar10 = *(undefined8 *)(puVar4 + uVar34 + 2);
            uVar11 = *(undefined8 *)(puVar4 + uVar34 + 3);
            uVar12 = *(undefined8 *)(puVar4 + uVar34 + 3 + 2);
            *(undefined8 *)(puVar4 + uVar34 + 1) = *(undefined8 *)(puVar4 + uVar34);
            *(undefined8 *)(puVar4 + uVar34 + 1 + 2) = uVar10;
            *(undefined8 *)(puVar4 + uVar34 + 4) = uVar11;
            *(undefined8 *)(puVar4 + uVar34 + 4 + 2) = uVar12;
            puVar4[uVar34] = ((iVar17 + iVar36) - iVar23 ^ uVar30) & 0x3ffffff ^ uVar30;
            iVar17 = iVar17 * 2;
            lVar37 = lVar37 * 2;
          } while (iVar17 < (int)uVar20);
        }
LAB_14f35363d:
        pCVar42->m_next_ptr = (uchar *)local_210;
        bVar7 = (byte)pCVar42->m_table_size_bits & 0x1f;
        uVar30 = (uint)(*local_210 * pCVar42->m_hash_mul >> 0x20);
        uVar30 = uVar30 << bVar7 | uVar30 >> 0x20 - bVar7;
        pCVar42->m_next_row = (pCVar42->m_hash_table).m_ptr + (pCVar42->m_hash_row_mask & uVar30);
        pCVar42->m_next_hash = uVar30;
      }
      else if (puVar31 != local_210) goto LAB_14f35363d;
      local_100.lasts.contents[8] = local_240;
      if (puVar44 <= local_210) break;
      uVar34 = (ulonglong)(uint)local_100.lasts.contents[0xc];
      puVar45 = local_210;
    }
  }
  puVar40 = local_1c0;
  if (0 < (longlong)(local_1c0 + (local_180 - (longlong)local_210))) {
    newLZHC_histo_literals
              (pnVar24,local_1c0,(longlong)((int)local_210 - (int)local_1c0),
               (long64)(local_1c0 + (local_180 - (longlong)local_210)),local_240,1);
  }
  lVar25 = newLZHC_put_parse(local_148,local_150,pnVar24,local_158,puVar40,param_5,local_160,
                             local_168,param_8,local_170,local_240,
                             (vector_a<oo2::newlzhc_encoder_parse> *)&local_1b0,(int)local_178,
                             (newlzhc_passinfo *)0x0,eNewLZ_MinOffset_8);
  if (pnVar24 == (newlzhc_histo *)0x0) {
    return lVar25;
  }
  if (local_1b8 != (rrArenaAllocator *)0x0) {
    rrArenaAllocator::Free(local_1b8,pnVar24,0x8c04);
    return lVar25;
  }
  (*g_fp_OodleCore_Plugin_Free)(pnVar24);
  return lVar25;
code_r0x00014f352bd9:
  puVar29 = puVar29 + 1;
  if (puVar35 + -1 < puVar29) goto LAB_14f352be5;
  goto LAB_14f352bd0;
code_r0x00014f352c79:
  puVar29 = puVar29 + 1;
  if (puVar35 + -1 < puVar29) goto LAB_14f352c85;
  goto LAB_14f352c70;
code_r0x00014f352d0e:
  puVar29 = puVar29 + 1;
  if (puVar35 + -1 < puVar29) goto LAB_14f352d17;
  goto LAB_14f352d05;
code_r0x00014f352dae:
  puVar29 = puVar29 + 1;
  if (puVar35 + -1 < puVar29) goto LAB_14f352db7;
  goto LAB_14f352da5;
code_r0x00014f352e4e:
  puVar29 = puVar29 + 1;
  if (puVar35 + -1 < puVar29) goto LAB_14f352e57;
  goto LAB_14f352e45;
code_r0x00014f352eee:
  puVar29 = puVar29 + 1;
  if (puVar35 + -1 < puVar29) goto LAB_14f352ef7;
  goto LAB_14f352ee5;
code_r0x00014f352f9d:
  puVar29 = puVar29 + 1;
  if (puVar35 + -1 < puVar29) goto LAB_14f352fa6;
  goto LAB_14f352f90;
code_r0x00014f35311d:
  puVar31 = puVar31 + 1;
  if (puVar35 + -1 < puVar31) goto LAB_14f353126;
  goto LAB_14f353110;
}

// newLZHC_encode_chunk<oo2::CTMF<unsigned_int,0,0,4>,0,1,5> @ 14f3537c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

long64 __cdecl
oo2::newLZHC_encode_chunk<oo2::CTMF<unsigned_int,0,0,4>,0,1,5>
          (newlz_vtable *param_1,newlz_encoder_scratch *param_2,uchar *param_3,uchar *param_4,
          int param_5,uchar *param_6,uchar *param_7,long64 param_8,int *param_9,float *param_10,
          OodleKrakenChunkDeadlines *param_11)

{
  uint uVar1;
  rrArenaAllocator *this;
  void *pvVar2;
  uint *puVar3;
  ulonglong uVar4;
  code *pcVar5;
  byte bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  newlzhc_histo *pnVar14;
  long64 lVar15;
  ulonglong uVar16;
  ulonglong *puVar17;
  longlong lVar18;
  int iVar19;
  uint uVar20;
  ulonglong *puVar21;
  ulonglong *puVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  char *pcVar26;
  longlong lVar27;
  undefined8 *puVar28;
  ulonglong uVar29;
  longlong lVar30;
  uint uVar31;
  short sVar32;
  char *pcVar33;
  uint uVar34;
  int iVar35;
  ulonglong *puVar36;
  int iVar37;
  ulonglong *puVar38;
  bool bVar39;
  bool bVar40;
  undefined1 auStackY_298 [32];
  uint local_1d8;
  ulonglong *local_1a0;
  void *local_188;
  ulonglong local_180;
  longlong local_178;
  uint local_170 [4];
  ulonglong local_160;
  longlong local_158;
  ulonglong local_150;
  void *local_148;
  ulonglong local_140;
  longlong local_138;
  newlz_vtable *local_130;
  uchar *local_128;
  uchar *local_120;
  int *local_118;
  float *local_110;
  newlz_encoder_scratch *local_108;
  rrArenaAllocator *local_100;
  OodleLZ_CompressOptions *local_f8;
  rrArenaAllocator *local_f0;
  newlzhc_histo *local_e8;
  undefined8 local_e0;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  uint local_a0 [4];
  uint local_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint local_80;
  int iStack_7c;
  int iStack_78;
  uint uStack_74;
  ulonglong local_70;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_70 = __security_cookie.value ^ (ulonglong)auStackY_298;
  uVar29 = (ulonglong)param_5;
  local_120 = param_6;
  local_128 = param_7;
  local_118 = param_9;
  local_110 = param_10;
  *param_9 = -1;
  if (param_5 < 0x81) {
    return uVar29;
  }
  this = param_2->arena;
  local_f8 = param_1->pOptions;
  local_1d8 = local_f8->dictionarySize;
  if ((int)local_1d8 < 1) {
    local_1d8 = 0x40000000;
  }
  else if (0x40000000 < (int)local_1d8) {
    local_1d8 = 0x40000000;
  }
  iVar19 = 4;
  if (4 < local_f8->minMatchLen) {
    iVar19 = local_f8->minMatchLen;
  }
  pvVar2 = param_1->matcher;
  local_188 = (void *)0x0;
  local_180 = 0;
  local_178 = 0;
  local_140 = uVar29;
  local_130 = param_1;
  local_108 = param_2;
  local_100 = this;
  newlz_scratchblock::extend
            (&param_2->newlzhc_parsevec_space,(uVar29 & 0xfffffffffffffff) << 3,this);
  local_188 = (param_2->newlzhc_parsevec_space).m_ptr;
  local_180 = (ulonglong)(param_2->newlzhc_parsevec_space).m_size >> 4;
  local_150 = local_180;
  local_148 = local_188;
  newlz_scratchblock::extend
            (&param_2->literals_space,(longlong)(int)(param_5 + 0x100 + ((uint)param_5 >> 4)),this);
  puVar36 = (ulonglong *)(param_4 + (uVar29 - 8));
  local_a0[0] = (uint)___xmm_00000008000000080000000800000008;
  local_a0[1] = (uint)((ulonglong)___xmm_00000008000000080000000800000008 >> 0x20);
  local_a0[2] = (uint)_UNK_150b50de8;
  local_a0[3] = (uint)((ulonglong)_UNK_150b50de8 >> 0x20);
  uVar29 = 8;
  local_90 = 8;
  uStack_8c = 8;
  uStack_88 = 8;
  local_138 = 8;
  if (param_8 != 0) {
    local_138 = 0;
  }
  local_1a0 = (ulonglong *)(param_4 + local_138);
  *(ulonglong **)((longlong)pvVar2 + 0x28) = local_1a0;
  bVar6 = (byte)*(undefined4 *)((longlong)pvVar2 + 0x18) & 0x1f;
  uVar23 = (uint)(*local_1a0 * *(longlong *)((longlong)pvVar2 + 0x40) >> 0x20);
  uVar23 = uVar23 << bVar6 | uVar23 >> 0x20 - bVar6;
  *(uint *)((longlong)pvVar2 + 0x48) = uVar23;
  *(ulonglong *)((longlong)pvVar2 + 0x30) =
       *(longlong *)((longlong)pvVar2 + 8) +
       (ulonglong)(*(uint *)((longlong)pvVar2 + 0x1c) & uVar23) * 4;
  local_e0 = 0x8c04;
  local_f0 = this;
  if (this == (rrArenaAllocator *)0x0) {
    pnVar14 = (*g_fp_OodleCore_Plugin_MallocAligned)(0x8c04,0x10);
    if (pnVar14 == (newlzhc_histo *)0x0) {
                    /* WARNING: Subroutine does not return */
      Oodle_Core_Malloc_Failed(0x8c04);
    }
  }
  else {
    pnVar14 = rrArenaAllocator::Alloc(this,0x8c04,0);
  }
  local_e8 = pnVar14;
  if ((pnVar14 == (newlzhc_histo *)0x0) &&
     (iVar10 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\rrarenaallocator.h",0x19a,
                                  "oo2::rrScopeArenaAlloc::rrScopeArenaAlloc","m_ptr != NULL"),
     iVar10 != 0)) {
    pcVar5 = (code *)swi(3);
    lVar15 = (*pcVar5)();
    return lVar15;
  }
  rrMemSetZero(pnVar14,0x8c04);
  do {
    uVar23 = local_a0[0];
    lVar18 = local_178;
    uVar20 = 0x20;
    local_158 = (longlong)(int)local_a0[0];
    lVar30 = (longlong)(int)local_a0[0];
    puVar38 = local_1a0;
    while( true ) {
      puVar17 = (ulonglong *)((longlong)puVar38 + 1);
      if (*(uint *)puVar17 == *(uint *)((longlong)puVar38 + (1 - lVar30))) break;
      local_160 = (ulonglong)(uVar20 >> 5);
      if ((longlong)(param_4 + (longlong)param_5 + -0x10) - (longlong)puVar38 <= (longlong)local_160
         ) goto LAB_14f3544d9;
      uVar25 = (uint)*puVar38;
      puVar3 = *(uint **)((longlong)pvVar2 + 0x30);
      uVar1 = *(uint *)((longlong)pvVar2 + 0x48);
      uVar34 = (int)puVar38 - *(int *)((longlong)pvVar2 + 0x20);
      *(longlong **)((longlong)pvVar2 + 0x28) = (longlong *)(local_160 + (longlong)puVar38);
      bVar6 = (byte)*(undefined4 *)((longlong)pvVar2 + 0x18) & 0x1f;
      uVar24 = (uint)((ulonglong)
                      (*(longlong *)(local_160 + (longlong)puVar38) *
                      *(longlong *)((longlong)pvVar2 + 0x40)) >> 0x20);
      uVar24 = uVar24 << bVar6 | uVar24 >> 0x20 - bVar6;
      *(uint *)((longlong)pvVar2 + 0x48) = uVar24;
      *(ulonglong *)((longlong)pvVar2 + 0x30) =
           *(longlong *)((longlong)pvVar2 + 8) +
           (ulonglong)(*(uint *)((longlong)pvVar2 + 0x1c) & uVar24) * 4;
      uVar24 = 7;
      uVar11 = *(uint *)((longlong)puVar38 - (ulonglong)local_a0[0]);
      sVar32 = (short)uVar25;
      if (sVar32 == (short)uVar11) {
        uVar11 = uVar11 ^ uVar25;
        if (uVar11 == 0) {
          puVar17 = (ulonglong *)((longlong)puVar38 + 4);
          lVar30 = (longlong)((longlong)puVar38 - (ulonglong)local_a0[0]) - (longlong)puVar38;
          puVar21 = puVar17;
          if (puVar17 <= puVar36 + -1) {
LAB_14f353b52:
            uVar16 = *(ulonglong *)(lVar30 + (longlong)puVar21) ^ *puVar21;
            if (uVar16 == 0) goto code_r0x00014f353b5b;
            uVar4 = 0;
            if (uVar16 != 0) {
              for (; (uVar16 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
              }
            }
            iVar10 = ((int)(uVar4 >> 3) - (int)puVar17) + (int)puVar21;
            goto LAB_14f353b85;
          }
LAB_14f353b65:
          lVar27 = (longlong)puVar21 - (longlong)puVar17;
          iVar10 = (int)lVar27;
          for (; (puVar21 < puVar36 &&
                 (iVar10 = (int)lVar27, (char)*puVar21 == *(char *)((longlong)puVar21 + lVar30)));
              puVar21 = (ulonglong *)((longlong)puVar21 + 1)) {
            lVar27 = lVar27 + 1;
            iVar10 = (int)lVar27;
          }
LAB_14f353b85:
          iVar10 = iVar10 + 4;
        }
        else {
          iVar10 = 3 - (uint)((uVar11 & 0xffffff) != 0);
        }
        uVar24 = iVar10 * 8 + 6;
        if ((int)uVar24 < 7) {
          uVar24 = 7;
        }
      }
      uVar12 = *(uint *)((longlong)puVar38 - (ulonglong)local_a0[1]);
      uVar11 = uVar24;
      if (sVar32 == (short)uVar12) {
        uVar12 = uVar12 ^ uVar25;
        if (uVar12 == 0) {
          puVar17 = (ulonglong *)((longlong)puVar38 + 4);
          lVar30 = (longlong)((longlong)puVar38 - (ulonglong)local_a0[1]) - (longlong)puVar38;
          puVar21 = puVar17;
          if (puVar17 <= puVar36 + -1) {
LAB_14f353be7:
            uVar16 = *(ulonglong *)(lVar30 + (longlong)puVar21) ^ *puVar21;
            if (uVar16 == 0) goto code_r0x00014f353bf0;
            uVar4 = 0;
            if (uVar16 != 0) {
              for (; (uVar16 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
              }
            }
            iVar10 = ((int)(uVar4 >> 3) - (int)puVar17) + (int)puVar21;
            goto LAB_14f353c19;
          }
LAB_14f353bf9:
          lVar27 = (longlong)puVar21 - (longlong)puVar17;
          iVar10 = (int)lVar27;
          for (; (puVar21 < puVar36 &&
                 (iVar10 = (int)lVar27, (char)*puVar21 == *(char *)((longlong)puVar21 + lVar30)));
              puVar21 = (ulonglong *)((longlong)puVar21 + 1)) {
            lVar27 = lVar27 + 1;
            iVar10 = (int)lVar27;
          }
LAB_14f353c19:
          iVar10 = iVar10 + 4;
        }
        else {
          iVar10 = 3 - (uint)((uVar12 & 0xffffff) != 0);
        }
        uVar11 = iVar10 * 8 + 5;
        if ((int)uVar11 < (int)uVar24) {
          uVar11 = uVar24;
        }
      }
      uVar12 = *(uint *)((longlong)puVar38 - (ulonglong)local_a0[2]);
      uVar24 = uVar11;
      if (sVar32 == (short)uVar12) {
        uVar12 = uVar12 ^ uVar25;
        if (uVar12 == 0) {
          puVar17 = (ulonglong *)((longlong)puVar38 + 4);
          lVar30 = (longlong)((longlong)puVar38 - (ulonglong)local_a0[2]) - (longlong)puVar38;
          puVar21 = puVar17;
          if (puVar17 <= puVar36 + -1) {
LAB_14f353c85:
            uVar16 = *(ulonglong *)(lVar30 + (longlong)puVar21) ^ *puVar21;
            if (uVar16 == 0) goto code_r0x00014f353c8e;
            uVar4 = 0;
            if (uVar16 != 0) {
              for (; (uVar16 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
              }
            }
            iVar10 = ((int)(uVar4 >> 3) - (int)puVar17) + (int)puVar21;
            goto LAB_14f353cb9;
          }
LAB_14f353c97:
          lVar27 = (longlong)puVar21 - (longlong)puVar17;
          iVar10 = (int)lVar27;
          for (; (puVar21 < puVar36 &&
                 (iVar10 = (int)lVar27, (char)*puVar21 == *(char *)((longlong)puVar21 + lVar30)));
              puVar21 = (ulonglong *)((longlong)puVar21 + 1)) {
            lVar27 = lVar27 + 1;
            iVar10 = (int)lVar27;
          }
LAB_14f353cb9:
          iVar10 = iVar10 + 4;
        }
        else {
          iVar10 = 3 - (uint)((uVar12 & 0xffffff) != 0);
        }
        uVar24 = iVar10 * 8 + 4;
        if ((int)uVar24 < (int)uVar11) {
          uVar24 = uVar11;
        }
      }
      uVar12 = *(uint *)((longlong)puVar38 - (ulonglong)local_a0[3]);
      uVar11 = uVar24;
      if (sVar32 == (short)uVar12) {
        uVar12 = uVar12 ^ uVar25;
        if (uVar12 == 0) {
          puVar17 = (ulonglong *)((longlong)puVar38 + 4);
          lVar30 = (longlong)((longlong)puVar38 - (ulonglong)local_a0[3]) - (longlong)puVar38;
          puVar21 = puVar17;
          if (puVar17 <= puVar36 + -1) {
LAB_14f353d25:
            uVar16 = *(ulonglong *)(lVar30 + (longlong)puVar21) ^ *puVar21;
            if (uVar16 == 0) goto code_r0x00014f353d2e;
            uVar4 = 0;
            if (uVar16 != 0) {
              for (; (uVar16 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
              }
            }
            iVar10 = ((int)(uVar4 >> 3) - (int)puVar17) + (int)puVar21;
            goto LAB_14f353d59;
          }
LAB_14f353d37:
          lVar27 = (longlong)puVar21 - (longlong)puVar17;
          iVar10 = (int)lVar27;
          for (; (puVar21 < puVar36 &&
                 (iVar10 = (int)lVar27, (char)*puVar21 == *(char *)(lVar30 + (longlong)puVar21)));
              puVar21 = (ulonglong *)((longlong)puVar21 + 1)) {
            lVar27 = lVar27 + 1;
            iVar10 = (int)lVar27;
          }
LAB_14f353d59:
          iVar10 = iVar10 + 4;
        }
        else {
          iVar10 = 3 - (uint)((uVar12 & 0xffffff) != 0);
        }
        uVar11 = iVar10 * 8 + 3;
        if ((int)uVar11 < (int)uVar24) {
          uVar11 = uVar24;
        }
      }
      uVar12 = *(uint *)((longlong)puVar38 - uVar29);
      uVar24 = uVar11;
      if (sVar32 == (short)uVar12) {
        uVar12 = uVar12 ^ uVar25;
        if (uVar12 == 0) {
          puVar17 = (ulonglong *)((longlong)puVar38 + 4);
          lVar30 = (longlong)((longlong)puVar38 - uVar29) - (longlong)puVar38;
          puVar21 = puVar17;
          if (puVar17 <= puVar36 + -1) {
LAB_14f353dc5:
            uVar29 = *(ulonglong *)(lVar30 + (longlong)puVar21) ^ *puVar21;
            if (uVar29 == 0) goto code_r0x00014f353dce;
            uVar16 = 0;
            if (uVar29 != 0) {
              for (; (uVar29 >> uVar16 & 1) == 0; uVar16 = uVar16 + 1) {
              }
            }
            iVar10 = ((int)(uVar16 >> 3) - (int)puVar17) + (int)puVar21;
            goto LAB_14f353df9;
          }
LAB_14f353dd7:
          lVar27 = (longlong)puVar21 - (longlong)puVar17;
          iVar10 = (int)lVar27;
          for (; (puVar21 < puVar36 &&
                 (iVar10 = (int)lVar27, (char)*puVar21 == *(char *)(lVar30 + (longlong)puVar21)));
              puVar21 = (ulonglong *)((longlong)puVar21 + 1)) {
            lVar27 = lVar27 + 1;
            iVar10 = (int)lVar27;
          }
LAB_14f353df9:
          iVar10 = iVar10 + 4;
        }
        else {
          iVar10 = 3 - (uint)((uVar12 & 0xffffff) != 0);
        }
        uVar24 = iVar10 * 8 + 2;
        if ((int)uVar24 < (int)uVar11) {
          uVar24 = uVar11;
        }
      }
      uVar12 = *(uint *)((longlong)puVar38 - (ulonglong)uStack_8c);
      uVar11 = uVar24;
      if (sVar32 == (short)uVar12) {
        uVar12 = uVar12 ^ uVar25;
        if (uVar12 == 0) {
          puVar17 = (ulonglong *)((longlong)puVar38 + 4);
          lVar30 = (longlong)((longlong)puVar38 - (ulonglong)uStack_8c) - (longlong)puVar38;
          puVar21 = puVar17;
          if (puVar17 <= puVar36 + -1) {
LAB_14f353e65:
            uVar29 = *(ulonglong *)(lVar30 + (longlong)puVar21) ^ *puVar21;
            if (uVar29 == 0) goto code_r0x00014f353e6e;
            uVar16 = 0;
            if (uVar29 != 0) {
              for (; (uVar29 >> uVar16 & 1) == 0; uVar16 = uVar16 + 1) {
              }
            }
            iVar10 = ((int)(uVar16 >> 3) - (int)puVar17) + (int)puVar21;
            goto LAB_14f353e99;
          }
LAB_14f353e77:
          lVar27 = (longlong)puVar21 - (longlong)puVar17;
          iVar10 = (int)lVar27;
          for (; (puVar21 < puVar36 &&
                 (iVar10 = (int)lVar27, (char)*puVar21 == *(char *)(lVar30 + (longlong)puVar21)));
              puVar21 = (ulonglong *)((longlong)puVar21 + 1)) {
            lVar27 = lVar27 + 1;
            iVar10 = (int)lVar27;
          }
LAB_14f353e99:
          iVar10 = iVar10 + 4;
        }
        else {
          iVar10 = 3 - (uint)((uVar12 & 0xffffff) != 0);
        }
        uVar11 = iVar10 * 8 + 1;
        if ((int)uVar11 < (int)uVar24) {
          uVar11 = uVar24;
        }
      }
      uVar24 = *(uint *)((longlong)puVar38 - (ulonglong)uStack_88);
      uVar12 = uVar11;
      if (sVar32 == (short)uVar24) {
        uVar24 = uVar24 ^ uVar25;
        if (uVar24 == 0) {
          puVar17 = (ulonglong *)((longlong)puVar38 + 4);
          lVar30 = (longlong)((longlong)puVar38 - (ulonglong)uStack_88) - (longlong)puVar38;
          puVar21 = puVar17;
          if (puVar17 <= puVar36 + -1) {
LAB_14f353f10:
            uVar29 = *(ulonglong *)(lVar30 + (longlong)puVar21) ^ *puVar21;
            if (uVar29 == 0) goto code_r0x00014f353f1d;
            uVar16 = 0;
            if (uVar29 != 0) {
              for (; (uVar29 >> uVar16 & 1) == 0; uVar16 = uVar16 + 1) {
              }
            }
            iVar10 = ((int)(uVar16 >> 3) - (int)puVar17) + (int)puVar21;
            goto LAB_14f353f45;
          }
LAB_14f353f26:
          lVar27 = (longlong)puVar21 - (longlong)puVar17;
          iVar10 = (int)lVar27;
          for (; (puVar21 < puVar36 &&
                 (iVar10 = (int)lVar27, (char)*puVar21 == *(char *)(lVar30 + (longlong)puVar21)));
              puVar21 = (ulonglong *)((longlong)puVar21 + 1)) {
            lVar27 = lVar27 + 1;
            iVar10 = (int)lVar27;
          }
LAB_14f353f45:
          iVar10 = iVar10 + 4;
        }
        else {
          iVar10 = 3 - (uint)((uVar24 & 0xffffff) != 0);
        }
        uVar12 = iVar10 * 8;
        if (iVar10 * 8 < (int)uVar11) {
          uVar12 = uVar11;
        }
      }
      iVar35 = (int)uVar12 >> 3;
      if (3 < iVar35) {
        *puVar3 = (uVar34 ^ uVar1) & 0x3ffffff ^ uVar1;
LAB_14f35419d:
        uVar25 = (uVar12 & 7) - 6;
        iVar10 = iVar35;
LAB_14f3541a0:
        puVar17 = puVar38;
        uVar24 = uVar25;
        if ((int)uVar25 < 1) goto LAB_14f35425a;
        goto LAB_14f35426d;
      }
      iVar10 = 0;
      uVar25 = 0;
      local_170[0] = uVar34 - *puVar3 & 0x3ffffff;
      pcVar33 = (char *)(longlong)(iVar19 + -1);
      if (((*puVar3 ^ uVar1) & 0xfc000000) == 0) {
        uVar24 = 1;
        uVar25 = 0;
        do {
          uVar11 = 0;
          if (uVar24 != 0) {
            for (; (uVar24 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
            }
          }
          uVar24 = uVar24 & uVar24 - 1;
          uVar11 = local_170[uVar11];
          if (uVar11 < local_1d8) {
            uVar31 = 8;
            if (8 < uVar11) {
              uVar31 = uVar11;
            }
            if (((longlong)pcVar33 < (longlong)puVar36 - (longlong)puVar38) &&
               (pcVar33[(longlong)puVar38] == pcVar33[(longlong)puVar38 - (ulonglong)uVar31])) {
              lVar30 = ((longlong)puVar38 - (ulonglong)uVar31) - (longlong)puVar38;
              puVar17 = puVar38;
              if (puVar38 <= puVar36 + -1) {
LAB_14f354030:
                uVar29 = *(ulonglong *)(lVar30 + (longlong)puVar17) ^ *puVar17;
                if (uVar29 == 0) goto code_r0x00014f354039;
                uVar16 = 0;
                if (uVar29 != 0) {
                  for (; (uVar29 >> uVar16 & 1) == 0; uVar16 = uVar16 + 1) {
                  }
                }
                pcVar26 = (char *)(((uVar16 >> 3) - (longlong)puVar38) + (longlong)puVar17);
                goto LAB_14f354068;
              }
LAB_14f354045:
              pcVar26 = (char *)((longlong)puVar17 - (longlong)puVar38);
              for (puVar17 = (ulonglong *)(pcVar26 + (longlong)puVar38);
                  (puVar17 < puVar36 && ((char)*puVar17 == *(char *)(lVar30 + (longlong)puVar17)));
                  puVar17 = (ulonglong *)((longlong)puVar17 + 1)) {
                pcVar26 = pcVar26 + 1;
              }
LAB_14f354068:
              if ((longlong)pcVar33 < (longlong)pcVar26) {
                iVar37 = (int)pcVar26;
                pcVar33 = pcVar26;
                if (((local_f8->farMatchOffsetLog2 < 1) ||
                    ((int)uVar31 < 1 << ((byte)local_f8->farMatchOffsetLog2 & 0x1f))) ||
                   (local_f8->farMatchMinLen <= iVar37)) {
                  if (0xfffff < (int)uVar31) {
                    if ((int)uVar31 < 0x400000) {
                      if ((int)uVar31 < 0x200000) {
                        bVar40 = SBORROW4(iVar37,5);
                        bVar39 = iVar37 + -5 < 0;
                      }
                      else {
                        bVar40 = SBORROW4(iVar37,6);
                        bVar39 = iVar37 + -6 < 0;
                      }
                    }
                    else {
                      bVar40 = SBORROW4(iVar37,8);
                      bVar39 = iVar37 + -8 < 0;
                    }
                    if (bVar40 != bVar39) goto LAB_14f3540f3;
                  }
                  if ((5 < iVar37) || ((int)uVar31 < max_offset[iVar37])) {
                    iVar10 = iVar37;
                    uVar25 = uVar31;
                  }
                }
              }
            }
          }
LAB_14f3540f3:
        } while (uVar24 != 0);
      }
      *puVar3 = (uVar34 ^ uVar1) & 0x3ffffff ^ uVar1;
      if (uVar25 != 0) {
        if ((1 < iVar35) &&
           (((iVar10 <= iVar35 + 1 || ((iVar10 <= iVar35 + 2 && (0x3ff < (int)uVar25)))) ||
            ((iVar10 <= iVar35 + 3 && (0xffff < (int)uVar25)))))) goto LAB_14f35419d;
        goto LAB_14f3541a0;
      }
      if (1 < iVar35) goto LAB_14f35419d;
      uVar20 = uVar20 + 1;
      puVar38 = (ulonglong *)((longlong)puVar38 + local_160);
      uVar29 = (ulonglong)local_90;
      lVar30 = local_158;
    }
    puVar21 = (ulonglong *)((longlong)puVar38 + 5);
    puVar22 = puVar21;
    if (puVar21 <= puVar36 + -1) {
LAB_14f3541d0:
      uVar29 = *(ulonglong *)(-lVar30 + (longlong)puVar22) ^ *puVar22;
      if (uVar29 == 0) break;
      uVar16 = 0;
      if (uVar29 != 0) {
        for (; (uVar29 >> uVar16 & 1) == 0; uVar16 = uVar16 + 1) {
        }
      }
      iVar10 = ((int)(uVar16 >> 3) - (int)puVar21) + (int)puVar22;
      goto LAB_14f354205;
    }
LAB_14f3541e6:
    lVar27 = (longlong)puVar22 - (longlong)puVar21;
    iVar10 = (int)lVar27;
    for (; (puVar22 < puVar36 &&
           (iVar10 = (int)lVar27, (char)*puVar22 == *(char *)(-lVar30 + (longlong)puVar22)));
        puVar22 = (ulonglong *)((longlong)puVar22 + 1)) {
      lVar27 = lVar27 + 1;
      iVar10 = (int)lVar27;
    }
LAB_14f354205:
    iVar10 = iVar10 + 4;
    uVar24 = 0;
    puVar3 = *(uint **)((longlong)pvVar2 + 0x30);
    uVar20 = *(uint *)((longlong)pvVar2 + 0x48);
    *(longlong **)((longlong)pvVar2 + 0x28) = (longlong *)((longlong)puVar38 + 2);
    bVar6 = (byte)*(undefined4 *)((longlong)pvVar2 + 0x18) & 0x1f;
    uVar25 = (uint)((ulonglong)
                    (*(longlong *)((longlong)puVar38 + 2) * *(longlong *)((longlong)pvVar2 + 0x40))
                   >> 0x20);
    uVar25 = uVar25 << bVar6 | uVar25 >> 0x20 - bVar6;
    *(uint *)((longlong)pvVar2 + 0x48) = uVar25;
    *(ulonglong *)((longlong)pvVar2 + 0x30) =
         *(longlong *)((longlong)pvVar2 + 8) +
         (ulonglong)(*(uint *)((longlong)pvVar2 + 0x1c) & uVar25) * 4;
    *puVar3 = ((int)puVar38 - *(int *)((longlong)pvVar2 + 0x20) ^ uVar20) & 0x3ffffff ^ uVar20;
LAB_14f35425a:
    uVar25 = local_a0[-(longlong)(int)uVar24];
    puVar38 = puVar17;
LAB_14f35426d:
    if (local_1a0 < puVar38) {
      lVar30 = *(longlong *)((longlong)pvVar2 + 0x20);
      lVar27 = (longlong)puVar38 - lVar30;
      do {
        if ((lVar27 <= (int)uVar25) ||
           (*(char *)(lVar30 + -1 + lVar27) != *(char *)((lVar30 - (int)uVar25) + -1 + lVar27)))
        break;
        puVar38 = (ulonglong *)((longlong)puVar38 + -1);
        lVar27 = lVar27 + -1;
        iVar10 = iVar10 + 1;
      } while (local_1a0 < puVar38);
    }
    if ((uVar24 == 0) && (puVar38 == local_1a0)) {
      uVar24 = 0xffffffff;
    }
    iVar37 = (int)puVar38;
    iVar35 = iVar37 - (int)local_1a0;
    local_80 = local_a0[0];
    iStack_7c = iVar35;
    iStack_78 = iVar10;
    uStack_74 = uVar24;
    if ((local_150 < local_178 + 1U) &&
       (iVar13 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h",0x3f
                                    ,
                                    "oo2::vector_storage_a<struct oo2::newlzhc_encoder_parse>::needmakefit"
                                    ,"newsize <= m_capacity"), iVar13 != 0)) {
      pcVar5 = (code *)swi(3);
      lVar15 = (*pcVar5)();
      return lVar15;
    }
    local_178 = local_178 + 1;
    puVar28 = (undefined8 *)(lVar18 * 0x10 + (longlong)local_148);
    if (puVar28 != (undefined8 *)0x0) {
      *puVar28 = CONCAT44(iStack_7c,local_80);
      puVar28[1] = CONCAT44(uStack_74,iStack_78);
    }
    newLZHC_histo_literals
              (pnVar14,param_4,(longlong)((int)local_1a0 - (int)param_4),(longlong)iVar35,uVar23,1);
    uVar34 = uStack_88;
    uVar11 = uStack_8c;
    uVar1 = local_90;
    uVar25 = local_a0[3];
    uVar20 = local_a0[2];
    uVar23 = local_a0[1];
    if ((int)uVar24 < 1) {
      lVar18 = (longlong)(int)-uVar24;
      uVar24 = local_a0[lVar18];
      uVar7 = *(undefined8 *)(auStack_b8 + lVar18 * 4);
      uVar8 = *(undefined8 *)(auStack_b0 + lVar18 * 4);
      uVar9 = *(undefined8 *)((longlong)&uStack_a8 + lVar18 * 4);
      *(undefined8 *)(auStack_c0 + lVar18 * 4 + 4) = *(undefined8 *)(auStack_c0 + lVar18 * 4);
      *(undefined8 *)(auStack_b8 + lVar18 * 4 + 4) = uVar7;
      *(undefined8 *)(auStack_b0 + lVar18 * 4 + 4) = uVar8;
      *(undefined8 *)(local_a0 + lVar18 + -1) = uVar9;
      local_a0[0] = uVar24;
    }
    else {
      local_a0[1] = local_a0[0];
      local_a0[2] = uVar23;
      local_a0[3] = uVar20;
      local_90 = uVar25;
      uStack_8c = uVar1;
      uStack_88 = uVar11;
      uStack_84 = uVar34;
      local_a0[0] = uVar24;
    }
    local_1a0 = (ulonglong *)((longlong)iVar10 + (longlong)puVar38);
    puVar17 = *(ulonglong **)((longlong)pvVar2 + 0x28);
    if (puVar17 < local_1a0) {
      iVar13 = (int)*(undefined8 *)((longlong)pvVar2 + 0x20);
      **(uint **)((longlong)pvVar2 + 0x30) =
           (*(uint *)((longlong)pvVar2 + 0x48) ^ (int)puVar17 - iVar13) & 0x3ffffff ^
           *(uint *)((longlong)pvVar2 + 0x48);
      iVar35 = (*(int *)((longlong)pvVar2 + 0x28) - iVar37) + 1;
      if (iVar35 < iVar10) {
        lVar18 = (longlong)iVar35;
        do {
          bVar6 = (byte)*(undefined4 *)((longlong)pvVar2 + 0x18) & 0x1f;
          uVar23 = (uint)((ulonglong)
                          (*(longlong *)(lVar18 + (longlong)puVar38) *
                          *(longlong *)((longlong)pvVar2 + 0x40)) >> 0x20);
          uVar23 = uVar23 << bVar6 | uVar23 >> 0x20 - bVar6;
          *(uint *)(*(longlong *)((longlong)pvVar2 + 8) +
                   (ulonglong)(*(uint *)((longlong)pvVar2 + 0x1c) & uVar23) * 4) =
               ((iVar35 + iVar37) - iVar13 ^ uVar23) & 0x3ffffff ^ uVar23;
          iVar35 = iVar35 * 2;
          lVar18 = lVar18 * 2;
        } while (iVar35 < iVar10);
      }
      *(ulonglong **)((longlong)pvVar2 + 0x28) = local_1a0;
      uVar23 = (uint)(*local_1a0 * *(longlong *)((longlong)pvVar2 + 0x40) >> 0x20);
LAB_14f35449c:
      bVar6 = (byte)*(undefined4 *)((longlong)pvVar2 + 0x18) & 0x1f;
      uVar23 = uVar23 << bVar6 | uVar23 >> 0x20 - bVar6;
      *(ulonglong *)((longlong)pvVar2 + 0x30) =
           *(longlong *)((longlong)pvVar2 + 8) +
           (ulonglong)(*(uint *)((longlong)pvVar2 + 0x1c) & uVar23) * 4;
      *(uint *)((longlong)pvVar2 + 0x48) = uVar23;
    }
    else if (puVar17 != local_1a0) {
      *(ulonglong **)((longlong)pvVar2 + 0x28) = local_1a0;
      uVar23 = (uint)(*(longlong *)((longlong)pvVar2 + 0x40) * *local_1a0 >> 0x20);
      goto LAB_14f35449c;
    }
    local_a0[0] = uVar24;
    if (param_4 + (longlong)param_5 + -0x10 <= local_1a0) {
LAB_14f3544d9:
      uVar23 = local_a0[0];
      if (0 < (longlong)(param_4 + (local_140 - (longlong)local_1a0))) {
        newLZHC_histo_literals
                  (pnVar14,param_4,(longlong)((int)local_1a0 - (int)param_4),
                   (long64)(param_4 + (local_140 - (longlong)local_1a0)),local_a0[0],1);
      }
      lVar15 = newLZHC_put_parse(local_108,local_110,pnVar14,local_118,param_4,param_5,local_120,
                                 local_128,param_8,local_130,uVar23,
                                 (vector_a<oo2::newlzhc_encoder_parse> *)&local_188,(int)local_138,
                                 (newlzhc_passinfo *)0x0,eNewLZ_MinOffset_8);
      if (pnVar14 == (newlzhc_histo *)0x0) {
        return lVar15;
      }
      if (local_100 != (rrArenaAllocator *)0x0) {
        rrArenaAllocator::Free(local_100,pnVar14,0x8c04);
        return lVar15;
      }
      (*g_fp_OodleCore_Plugin_Free)(pnVar14);
      return lVar15;
    }
    uVar29 = (ulonglong)local_90;
  } while( true );
  puVar22 = puVar22 + 1;
  if (puVar36 + -1 < puVar22) goto LAB_14f3541e6;
  goto LAB_14f3541d0;
code_r0x00014f353b5b:
  puVar21 = puVar21 + 1;
  if (puVar36 + -1 < puVar21) goto LAB_14f353b65;
  goto LAB_14f353b52;
code_r0x00014f353bf0:
  puVar21 = puVar21 + 1;
  if (puVar36 + -1 < puVar21) goto LAB_14f353bf9;
  goto LAB_14f353be7;
code_r0x00014f353c8e:
  puVar21 = puVar21 + 1;
  if (puVar36 + -1 < puVar21) goto LAB_14f353c97;
  goto LAB_14f353c85;
code_r0x00014f353d2e:
  puVar21 = puVar21 + 1;
  if (puVar36 + -1 < puVar21) goto LAB_14f353d37;
  goto LAB_14f353d25;
code_r0x00014f353dce:
  puVar21 = puVar21 + 1;
  if (puVar36 + -1 < puVar21) goto LAB_14f353dd7;
  goto LAB_14f353dc5;
code_r0x00014f353e6e:
  puVar21 = puVar21 + 1;
  if (puVar36 + -1 < puVar21) goto LAB_14f353e77;
  goto LAB_14f353e65;
code_r0x00014f353f1d:
  puVar21 = puVar21 + 1;
  if (puVar36 + -1 < puVar21) goto LAB_14f353f26;
  goto LAB_14f353f10;
code_r0x00014f354039:
  puVar17 = puVar17 + 1;
  if (puVar36 + -1 < puVar17) goto LAB_14f354045;
  goto LAB_14f354030;
}

// newLZHC_find_lo0_match_ahead<oo2::CTMF<unsigned_int,1,0,4>_> @ 14f354600

bool __cdecl
oo2::newLZHC_find_lo0_match_ahead<oo2::CTMF<unsigned_int,1,0,4>_>
          (match *param_1,CTMF<unsigned_int,1,0,4> *param_2,newLZHC_LOs *param_3,uchar *param_4,
          uchar *param_5)

{
  ulonglong *puVar1;
  uint uVar2;
  uint *puVar3;
  ulonglong uVar4;
  byte bVar5;
  longlong lVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  
  iVar10 = (param_3->lasts).contents[8];
  if (*(int *)(param_4 + 1) != *(int *)(param_4 + (1 - (longlong)iVar10))) {
    return false;
  }
  puVar1 = (ulonglong *)(param_4 + 5);
  lVar6 = -(longlong)iVar10;
  puVar7 = puVar1;
  do {
    if (param_5 + -8 < puVar7) {
      lVar11 = (longlong)puVar7 - (longlong)puVar1;
      iVar10 = (int)lVar11;
      for (; (puVar7 < param_5 &&
             (iVar10 = (int)lVar11, (char)*puVar7 == *(char *)((longlong)puVar7 + lVar6)));
          puVar7 = (ulonglong *)((longlong)puVar7 + 1)) {
        lVar11 = lVar11 + 1;
        iVar10 = (int)lVar11;
      }
LAB_14f354685:
      param_1->off = 0;
      param_1->ml = iVar10 + 4;
      uVar2 = param_2->m_next_hash;
      puVar3 = param_2->m_next_row;
      param_2->m_next_ptr = param_4 + 2;
      bVar5 = (byte)param_2->m_table_size_bits & 0x1f;
      uVar9 = (uint)(param_2->m_hash_mul * *(longlong *)(param_4 + 2) >> 0x20);
      uVar9 = uVar9 << bVar5 | uVar9 >> 0x20 - bVar5;
      param_2->m_next_hash = uVar9;
      param_2->m_next_row = (param_2->m_hash_table).m_ptr + (param_2->m_hash_row_mask & uVar9);
      iVar10 = *(int *)&param_2->m_base_ptr;
      puVar3[1] = *puVar3;
      *puVar3 = ((int)param_4 - iVar10 ^ uVar2) & 0x3ffffff ^ uVar2;
      return true;
    }
    uVar8 = *(ulonglong *)(lVar6 + (longlong)puVar7) ^ *puVar7;
    if (uVar8 != 0) {
      uVar4 = 0;
      if (uVar8 != 0) {
        for (; (uVar8 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
        }
      }
      iVar10 = ((int)(uVar4 >> 3) - (int)puVar1) + (int)puVar7;
      goto LAB_14f354685;
    }
    puVar7 = puVar7 + 1;
  } while( true );
}

// newLZHC_find_lo0_match_ahead<oo2::CTMF<unsigned_int,2,8,4>_> @ 14f354720

/* WARNING: Removing unreachable block (ram,0x00014f354853) */
/* WARNING: Removing unreachable block (ram,0x00014f354839) */

bool __cdecl
oo2::newLZHC_find_lo0_match_ahead<oo2::CTMF<unsigned_int,2,8,4>_>
          (match *param_1,CTMF<unsigned_int,2,8,4> *param_2,newLZHC_LOs *param_3,uchar *param_4,
          uchar *param_5)

{
  ulonglong *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint *puVar4;
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  ulonglong uVar7;
  byte bVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  iVar13 = (param_3->lasts).contents[8];
  if (*(int *)(param_4 + 1) != *(int *)(param_4 + (1 - (longlong)iVar13))) {
    return false;
  }
  puVar1 = (ulonglong *)(param_4 + 5);
  lVar9 = -(longlong)iVar13;
  puVar11 = puVar1;
  do {
    if (param_5 + -8 < puVar11) {
      lVar14 = (longlong)puVar11 - (longlong)puVar1;
      iVar13 = (int)lVar14;
      for (; (puVar11 < param_5 &&
             (iVar13 = (int)lVar14, (char)*puVar11 == *(char *)((longlong)puVar11 + lVar9)));
          puVar11 = (ulonglong *)((longlong)puVar11 + 1)) {
        lVar14 = lVar14 + 1;
        iVar13 = (int)lVar14;
      }
LAB_14f3547a6:
      param_1->off = 0;
      param_1->ml = iVar13 + 4;
      plVar2 = (longlong *)(param_4 + 2);
      puVar4 = (param_2->m_hash_table).m_ptr;
      pauVar5 = (undefined1 (*) [16])param_2->m_next_row;
      uVar3 = param_2->m_next_hash;
      pauVar6 = (undefined1 (*) [16])param_2->m_next_row_second;
      param_2->m_next_ptr = (uchar *)plVar2;
      bVar8 = (byte)param_2->m_table_size_bits & 0x1f;
      uVar10 = (uint)(param_2->m_hash_mul * *plVar2 >> 0x20);
      uVar10 = uVar10 << bVar8 | uVar10 >> 0x20 - bVar8;
      param_2->m_next_hash = uVar10;
      param_2->m_next_row = puVar4 + (param_2->m_hash_row_mask & uVar10);
      param_2->m_next_row_second =
           puVar4 + ((ulonglong)(*plVar2 * -0x30e44323485a9b9d) >>
                     (0x40U - (char)param_2->m_table_size_bits & 0x3f) & 0xfffffffffffffffc);
      auVar15._0_8_ = *(ulonglong *)*pauVar5 << 0x20;
      auVar15._8_8_ = *(longlong *)((longlong)*pauVar5 + 8) << 0x20 | *(ulonglong *)*pauVar5 >> 0x20
      ;
      auVar17 = ZEXT416(((int)param_4 - *(int *)&param_2->m_base_ptr ^ uVar3) & 0x3ffffff ^ uVar3);
      *pauVar5 = auVar15 | auVar17;
      auVar16._0_8_ = *(ulonglong *)*pauVar6 << 0x20;
      auVar16._8_8_ = *(longlong *)((longlong)*pauVar6 + 8) << 0x20 | *(ulonglong *)*pauVar6 >> 0x20
      ;
      *pauVar6 = auVar16 | auVar17;
      return true;
    }
    uVar12 = *(ulonglong *)(lVar9 + (longlong)puVar11) ^ *puVar11;
    if (uVar12 != 0) {
      uVar7 = 0;
      if (uVar12 != 0) {
        for (; (uVar12 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
        }
      }
      iVar13 = ((int)(uVar7 >> 3) - (int)puVar1) + (int)puVar11;
      goto LAB_14f3547a6;
    }
    puVar11 = puVar11 + 1;
  } while( true );
}

// newLZHC_find_lo0_match_ahead<oo2::CTMF<unsigned_int,3,0,4>_> @ 14f354880

bool __cdecl
oo2::newLZHC_find_lo0_match_ahead<oo2::CTMF<unsigned_int,3,0,4>_>
          (match *param_1,CTMF<unsigned_int,3,0,4> *param_2,newLZHC_LOs *param_3,uchar *param_4,
          uchar *param_5)

{
  ulonglong *puVar1;
  uint uVar2;
  uint *puVar3;
  ulonglong uVar4;
  byte bVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  
  iVar11 = (param_3->lasts).contents[8];
  if (*(int *)(param_4 + 1) != *(int *)(param_4 + (1 - (longlong)iVar11))) {
    return false;
  }
  puVar1 = (ulonglong *)(param_4 + 5);
  lVar7 = -(longlong)iVar11;
  puVar8 = puVar1;
  do {
    if (param_5 + -8 < puVar8) {
      lVar12 = (longlong)puVar8 - (longlong)puVar1;
      iVar11 = (int)lVar12;
      for (; (puVar8 < param_5 &&
             (iVar11 = (int)lVar12, (char)*puVar8 == *(char *)((longlong)puVar8 + lVar7)));
          puVar8 = (ulonglong *)((longlong)puVar8 + 1)) {
        lVar12 = lVar12 + 1;
        iVar11 = (int)lVar12;
      }
LAB_14f354905:
      param_1->off = 0;
      param_1->ml = iVar11 + 4;
      uVar2 = param_2->m_next_hash;
      puVar3 = param_2->m_next_row;
      param_2->m_next_ptr = param_4 + 2;
      bVar5 = (byte)param_2->m_table_size_bits & 0x1f;
      uVar10 = (uint)(param_2->m_hash_mul * *(longlong *)(param_4 + 2) >> 0x20);
      uVar10 = uVar10 << bVar5 | uVar10 >> 0x20 - bVar5;
      param_2->m_next_hash = uVar10;
      param_2->m_next_row = (param_2->m_hash_table).m_ptr + (param_2->m_hash_row_mask & uVar10);
      iVar11 = *(int *)&param_2->m_base_ptr;
      uVar6 = *(undefined8 *)(puVar3 + 3);
      *(undefined8 *)(puVar3 + 1) = *(undefined8 *)puVar3;
      *(undefined8 *)(puVar3 + 3) = *(undefined8 *)(puVar3 + 2);
      *(undefined8 *)(puVar3 + 4) = uVar6;
      *(undefined8 *)(puVar3 + 6) = *(undefined8 *)(puVar3 + 5);
      *puVar3 = ((int)param_4 - iVar11 ^ uVar2) & 0x3ffffff ^ uVar2;
      return true;
    }
    uVar9 = *(ulonglong *)(lVar7 + (longlong)puVar8) ^ *puVar8;
    if (uVar9 != 0) {
      uVar4 = 0;
      if (uVar9 != 0) {
        for (; (uVar9 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
        }
      }
      iVar11 = ((int)(uVar4 >> 3) - (int)puVar1) + (int)puVar8;
      goto LAB_14f354905;
    }
    puVar8 = puVar8 + 1;
  } while( true );
}

// newLZHC_find_lo0_match_ahead<oo2::CTMF<unsigned_int,0,0,4>_> @ 14f3549a0

bool __cdecl
oo2::newLZHC_find_lo0_match_ahead<oo2::CTMF<unsigned_int,0,0,4>_>
          (match *param_1,CTMF<unsigned_int,0,0,4> *param_2,newLZHC_LOs *param_3,uchar *param_4,
          uchar *param_5)

{
  ulonglong *puVar1;
  uint uVar2;
  uint *puVar3;
  ulonglong uVar4;
  byte bVar5;
  longlong lVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  
  iVar10 = (param_3->lasts).contents[8];
  if (*(int *)(param_4 + 1) != *(int *)(param_4 + (1 - (longlong)iVar10))) {
    return false;
  }
  puVar1 = (ulonglong *)(param_4 + 5);
  lVar6 = -(longlong)iVar10;
  puVar7 = puVar1;
  do {
    if (param_5 + -8 < puVar7) {
      lVar11 = (longlong)puVar7 - (longlong)puVar1;
      iVar10 = (int)lVar11;
      for (; (puVar7 < param_5 &&
             (iVar10 = (int)lVar11, (char)*puVar7 == *(char *)((longlong)puVar7 + lVar6)));
          puVar7 = (ulonglong *)((longlong)puVar7 + 1)) {
        lVar11 = lVar11 + 1;
        iVar10 = (int)lVar11;
      }
LAB_14f354a25:
      param_1->off = 0;
      param_1->ml = iVar10 + 4;
      uVar2 = param_2->m_next_hash;
      puVar3 = param_2->m_next_row;
      param_2->m_next_ptr = param_4 + 2;
      bVar5 = (byte)param_2->m_table_size_bits & 0x1f;
      uVar9 = (uint)(param_2->m_hash_mul * *(longlong *)(param_4 + 2) >> 0x20);
      uVar9 = uVar9 << bVar5 | uVar9 >> 0x20 - bVar5;
      param_2->m_next_hash = uVar9;
      param_2->m_next_row = (param_2->m_hash_table).m_ptr + (param_2->m_hash_row_mask & uVar9);
      *puVar3 = ((int)param_4 - *(int *)&param_2->m_base_ptr ^ uVar2) & 0x3ffffff ^ uVar2;
      return true;
    }
    uVar8 = *(ulonglong *)(lVar6 + (longlong)puVar7) ^ *puVar7;
    if (uVar8 != 0) {
      uVar4 = 0;
      if (uVar8 != 0) {
        for (; (uVar8 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
        }
      }
      iVar10 = ((int)(uVar4 >> 3) - (int)puVar1) + (int)puVar7;
      goto LAB_14f354a25;
    }
    puVar7 = puVar7 + 1;
  } while( true );
}

// newLZHC_get_match_heuristic<oo2::CTMF<unsigned_int,1,0,4>_> @ 14f354ac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
oo2::newLZHC_get_match_heuristic<oo2::CTMF<unsigned_int,1,0,4>_>
          (match *param_1,CTMF<unsigned_int,1,0,4> *param_2,newLZHC_LOs *param_3,uchar *param_4,
          uchar *param_5,int param_6,uchar *param_7,uint param_8,OodleLZ_CompressOptions *param_9)

{
  uint uVar1;
  uint *puVar2;
  ulonglong uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  char *pcVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  short sVar17;
  uint uVar18;
  uint uVar19;
  char *pcVar20;
  bool bVar21;
  bool bVar22;
  undefined1 local_88 [32];
  uint local_68 [4];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)local_88;
  puVar2 = param_2->m_next_row;
  uVar1 = param_2->m_next_hash;
  uVar18 = *(uint *)param_4;
  param_2->m_next_ptr = param_4 + 1;
  uVar19 = (int)param_4 - *(int *)&param_2->m_base_ptr;
  bVar4 = (byte)param_2->m_table_size_bits & 0x1f;
  uVar11 = (uint)(param_2->m_hash_mul * *(longlong *)(param_4 + 1) >> 0x20);
  uVar11 = uVar11 << bVar4 | uVar11 >> 0x20 - bVar4;
  param_2->m_next_hash = uVar11;
  param_2->m_next_row = (param_2->m_hash_table).m_ptr + (param_2->m_hash_row_mask & uVar11);
  uVar11 = 7;
  uVar5 = *(uint *)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[8]);
  sVar17 = (short)uVar18;
  if (sVar17 == (short)uVar5) {
    uVar5 = uVar5 ^ uVar18;
    if (uVar5 == 0) {
      puVar8 = (ulonglong *)(param_4 + 4);
      lVar15 = (longlong)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[8]) -
               (longlong)param_4;
      puVar9 = puVar8;
      if (puVar8 <= param_5 + -8) {
LAB_14f354b90:
        uVar10 = *(ulonglong *)(lVar15 + (longlong)puVar9) ^ *puVar9;
        if (uVar10 == 0) goto code_r0x00014f354b99;
        uVar3 = 0;
        if (uVar10 != 0) {
          for (; (uVar10 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
          }
        }
        iVar6 = ((int)(uVar3 >> 3) - (int)puVar8) + (int)puVar9;
        goto LAB_14f354bc5;
      }
LAB_14f354ba5:
      lVar12 = (longlong)puVar9 - (longlong)puVar8;
      iVar6 = (int)lVar12;
      for (; (puVar9 < param_5 &&
             (iVar6 = (int)lVar12, (char)*puVar9 == *(char *)((longlong)puVar9 + lVar15)));
          puVar9 = (ulonglong *)((longlong)puVar9 + 1)) {
        lVar12 = lVar12 + 1;
        iVar6 = (int)lVar12;
      }
LAB_14f354bc5:
      iVar6 = iVar6 + 4;
    }
    else {
      iVar6 = 3 - (uint)((uVar5 & 0xffffff) != 0);
    }
    uVar11 = iVar6 * 8 + 6;
    if ((int)uVar11 < 7) {
      uVar11 = 7;
    }
  }
  uVar7 = *(uint *)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[9]);
  uVar5 = uVar11;
  if (sVar17 == (short)uVar7) {
    uVar7 = uVar7 ^ uVar18;
    if (uVar7 == 0) {
      puVar8 = (ulonglong *)(param_4 + 4);
      lVar15 = (longlong)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[9]) -
               (longlong)param_4;
      puVar9 = puVar8;
      if (puVar8 <= param_5 + -8) {
LAB_14f354c25:
        uVar10 = *(ulonglong *)(lVar15 + (longlong)puVar9) ^ *puVar9;
        if (uVar10 == 0) goto code_r0x00014f354c2e;
        uVar3 = 0;
        if (uVar10 != 0) {
          for (; (uVar10 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
          }
        }
        iVar6 = ((int)(uVar3 >> 3) - (int)puVar8) + (int)puVar9;
        goto LAB_14f354c59;
      }
LAB_14f354c37:
      lVar12 = (longlong)puVar9 - (longlong)puVar8;
      iVar6 = (int)lVar12;
      for (; (puVar9 < param_5 &&
             (iVar6 = (int)lVar12, (char)*puVar9 == *(char *)((longlong)puVar9 + lVar15)));
          puVar9 = (ulonglong *)((longlong)puVar9 + 1)) {
        lVar12 = lVar12 + 1;
        iVar6 = (int)lVar12;
      }
LAB_14f354c59:
      iVar6 = iVar6 + 4;
    }
    else {
      iVar6 = 3 - (uint)((uVar7 & 0xffffff) != 0);
    }
    uVar5 = iVar6 * 8 + 5;
    if ((int)uVar5 < (int)uVar11) {
      uVar5 = uVar11;
    }
  }
  uVar7 = *(uint *)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[10]);
  uVar11 = uVar5;
  if (sVar17 == (short)uVar7) {
    uVar7 = uVar7 ^ uVar18;
    if (uVar7 == 0) {
      puVar8 = (ulonglong *)(param_4 + 4);
      lVar15 = (longlong)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[10]) -
               (longlong)param_4;
      puVar9 = puVar8;
      if (puVar8 <= param_5 + -8) {
LAB_14f354cc5:
        uVar10 = *(ulonglong *)(lVar15 + (longlong)puVar9) ^ *puVar9;
        if (uVar10 == 0) goto code_r0x00014f354cce;
        uVar3 = 0;
        if (uVar10 != 0) {
          for (; (uVar10 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
          }
        }
        iVar6 = ((int)(uVar3 >> 3) - (int)puVar8) + (int)puVar9;
        goto LAB_14f354cf9;
      }
LAB_14f354cd7:
      lVar12 = (longlong)puVar9 - (longlong)puVar8;
      iVar6 = (int)lVar12;
      for (; (puVar9 < param_5 &&
             (iVar6 = (int)lVar12, (char)*puVar9 == *(char *)((longlong)puVar9 + lVar15)));
          puVar9 = (ulonglong *)((longlong)puVar9 + 1)) {
        lVar12 = lVar12 + 1;
        iVar6 = (int)lVar12;
      }
LAB_14f354cf9:
      iVar6 = iVar6 + 4;
    }
    else {
      iVar6 = 3 - (uint)((uVar7 & 0xffffff) != 0);
    }
    uVar11 = iVar6 * 8 + 4;
    if ((int)uVar11 < (int)uVar5) {
      uVar11 = uVar5;
    }
  }
  uVar7 = *(uint *)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[0xb]);
  uVar5 = uVar11;
  if (sVar17 == (short)uVar7) {
    uVar7 = uVar7 ^ uVar18;
    if (uVar7 == 0) {
      puVar8 = (ulonglong *)(param_4 + 4);
      lVar15 = (longlong)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[0xb]) -
               (longlong)param_4;
      puVar9 = puVar8;
      if (puVar8 <= param_5 + -8) {
LAB_14f354d65:
        uVar10 = *(ulonglong *)(lVar15 + (longlong)puVar9) ^ *puVar9;
        if (uVar10 == 0) goto code_r0x00014f354d6e;
        uVar3 = 0;
        if (uVar10 != 0) {
          for (; (uVar10 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
          }
        }
        iVar6 = ((int)(uVar3 >> 3) - (int)puVar8) + (int)puVar9;
        goto LAB_14f354d99;
      }
LAB_14f354d77:
      lVar12 = (longlong)puVar9 - (longlong)puVar8;
      iVar6 = (int)lVar12;
      for (; (puVar9 < param_5 &&
             (iVar6 = (int)lVar12, (char)*puVar9 == *(char *)((longlong)puVar9 + lVar15)));
          puVar9 = (ulonglong *)((longlong)puVar9 + 1)) {
        lVar12 = lVar12 + 1;
        iVar6 = (int)lVar12;
      }
LAB_14f354d99:
      iVar6 = iVar6 + 4;
    }
    else {
      iVar6 = 3 - (uint)((uVar7 & 0xffffff) != 0);
    }
    uVar5 = iVar6 * 8 + 3;
    if ((int)uVar5 < (int)uVar11) {
      uVar5 = uVar11;
    }
  }
  uVar7 = *(uint *)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[0xc]);
  uVar11 = uVar5;
  if (sVar17 == (short)uVar7) {
    uVar7 = uVar7 ^ uVar18;
    if (uVar7 == 0) {
      puVar8 = (ulonglong *)(param_4 + 4);
      lVar15 = (longlong)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[0xc]) -
               (longlong)param_4;
      puVar9 = puVar8;
      if (puVar8 <= param_5 + -8) {
LAB_14f354e05:
        uVar10 = *(ulonglong *)(lVar15 + (longlong)puVar9) ^ *puVar9;
        if (uVar10 == 0) goto code_r0x00014f354e0e;
        uVar3 = 0;
        if (uVar10 != 0) {
          for (; (uVar10 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
          }
        }
        iVar6 = ((int)(uVar3 >> 3) - (int)puVar8) + (int)puVar9;
        goto LAB_14f354e39;
      }
LAB_14f354e17:
      lVar12 = (longlong)puVar9 - (longlong)puVar8;
      iVar6 = (int)lVar12;
      for (; (puVar9 < param_5 &&
             (iVar6 = (int)lVar12, (char)*puVar9 == *(char *)((longlong)puVar9 + lVar15)));
          puVar9 = (ulonglong *)((longlong)puVar9 + 1)) {
        lVar12 = lVar12 + 1;
        iVar6 = (int)lVar12;
      }
LAB_14f354e39:
      iVar6 = iVar6 + 4;
    }
    else {
      iVar6 = 3 - (uint)((uVar7 & 0xffffff) != 0);
    }
    uVar11 = iVar6 * 8 + 2;
    if ((int)uVar11 < (int)uVar5) {
      uVar11 = uVar5;
    }
  }
  uVar7 = *(uint *)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[0xd]);
  uVar5 = uVar11;
  if (sVar17 == (short)uVar7) {
    uVar7 = uVar7 ^ uVar18;
    if (uVar7 == 0) {
      puVar8 = (ulonglong *)(param_4 + 4);
      lVar15 = (longlong)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[0xd]) -
               (longlong)param_4;
      puVar9 = puVar8;
      if (puVar8 <= param_5 + -8) {
LAB_14f354ea5:
        uVar10 = *(ulonglong *)(lVar15 + (longlong)puVar9) ^ *puVar9;
        if (uVar10 == 0) goto code_r0x00014f354eae;
        uVar3 = 0;
        if (uVar10 != 0) {
          for (; (uVar10 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
          }
        }
        iVar6 = ((int)(uVar3 >> 3) - (int)puVar8) + (int)puVar9;
        goto LAB_14f354ed9;
      }
LAB_14f354eb7:
      lVar12 = (longlong)puVar9 - (longlong)puVar8;
      iVar6 = (int)lVar12;
      for (; (puVar9 < param_5 &&
             (iVar6 = (int)lVar12, (char)*puVar9 == *(char *)((longlong)puVar9 + lVar15)));
          puVar9 = (ulonglong *)((longlong)puVar9 + 1)) {
        lVar12 = lVar12 + 1;
        iVar6 = (int)lVar12;
      }
LAB_14f354ed9:
      iVar6 = iVar6 + 4;
    }
    else {
      iVar6 = 3 - (uint)((uVar7 & 0xffffff) != 0);
    }
    uVar5 = iVar6 * 8 + 1;
    if ((int)uVar5 < (int)uVar11) {
      uVar5 = uVar11;
    }
  }
  uVar11 = *(uint *)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[0xe]);
  uVar7 = uVar5;
  if (sVar17 == (short)uVar11) {
    uVar11 = uVar11 ^ uVar18;
    if (uVar11 == 0) {
      puVar8 = (ulonglong *)(param_4 + 4);
      lVar15 = (longlong)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[0xe]) -
               (longlong)param_4;
      puVar9 = puVar8;
      if (puVar8 <= param_5 + -8) {
LAB_14f354f50:
        uVar10 = *(ulonglong *)(lVar15 + (longlong)puVar9) ^ *puVar9;
        if (uVar10 == 0) goto code_r0x00014f354f5d;
        uVar3 = 0;
        if (uVar10 != 0) {
          for (; (uVar10 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
          }
        }
        iVar6 = ((int)(uVar3 >> 3) - (int)puVar8) + (int)puVar9;
        goto LAB_14f354f85;
      }
LAB_14f354f66:
      lVar12 = (longlong)puVar9 - (longlong)puVar8;
      iVar6 = (int)lVar12;
      for (; (puVar9 < param_5 &&
             (iVar6 = (int)lVar12, (char)*puVar9 == *(char *)((longlong)puVar9 + lVar15)));
          puVar9 = (ulonglong *)((longlong)puVar9 + 1)) {
        lVar12 = lVar12 + 1;
        iVar6 = (int)lVar12;
      }
LAB_14f354f85:
      iVar6 = iVar6 + 4;
    }
    else {
      iVar6 = 3 - (uint)((uVar11 & 0xffffff) != 0);
    }
    uVar7 = iVar6 * 8;
    if (iVar6 * 8 < (int)uVar5) {
      uVar7 = uVar5;
    }
  }
  iVar6 = (int)uVar7 >> 3;
  if (iVar6 < 4) {
    uVar11 = *puVar2;
    uVar18 = 0;
    local_68[0] = uVar19 - uVar11 & 0x3ffffff;
    local_68[1] = uVar19 - puVar2[1] & 0x3ffffff;
    uVar5 = uVar18;
    if (((puVar2[1] ^ uVar1) & 0xfc000000) == 0) {
      uVar5 = 2;
    }
    uVar5 = ((uVar11 ^ uVar1) & 0xfc000000) == 0 | uVar5;
    pcVar20 = (char *)(longlong)(param_6 + -1);
    uVar14 = uVar18;
    if (uVar5 != 0) {
      do {
        uVar11 = 0;
        if (uVar5 != 0) {
          for (; (uVar5 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
          }
        }
        uVar5 = uVar5 & uVar5 - 1;
        uVar11 = local_68[uVar11];
        if (uVar11 < param_8) {
          uVar16 = 8;
          if (8 < uVar11) {
            uVar16 = uVar11;
          }
          if (((longlong)pcVar20 < (longlong)param_5 - (longlong)param_4) &&
             (pcVar20[(longlong)param_4] == pcVar20[(longlong)param_4 - (ulonglong)uVar16])) {
            lVar15 = ((longlong)param_4 - (ulonglong)uVar16) - (longlong)param_4;
            puVar8 = (ulonglong *)param_4;
            if (param_4 <= param_5 + -8) {
LAB_14f3550c0:
              uVar10 = *(ulonglong *)(lVar15 + (longlong)puVar8) ^ *puVar8;
              if (uVar10 == 0) goto code_r0x00014f3550c9;
              uVar3 = 0;
              if (uVar10 != 0) {
                for (; (uVar10 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
                }
              }
              pcVar13 = (char *)(((uVar3 >> 3) - (longlong)param_4) + (longlong)puVar8);
              goto LAB_14f3550f4;
            }
LAB_14f3550d2:
            pcVar13 = (char *)((longlong)puVar8 - (longlong)param_4);
            for (; (puVar8 < param_5 && ((char)*puVar8 == *(char *)(lVar15 + (longlong)puVar8)));
                puVar8 = (ulonglong *)((longlong)puVar8 + 1)) {
              pcVar13 = pcVar13 + 1;
            }
LAB_14f3550f4:
            if ((longlong)pcVar20 < (longlong)pcVar13) {
              uVar11 = (uint)pcVar13;
              pcVar20 = pcVar13;
              if (((param_9->farMatchOffsetLog2 < 1) ||
                  ((int)uVar16 < 1 << ((byte)param_9->farMatchOffsetLog2 & 0x1f))) ||
                 (param_9->farMatchMinLen <= (int)uVar11)) {
                if (0xfffff < (int)uVar16) {
                  if ((int)uVar16 < 0x400000) {
                    if ((int)uVar16 < 0x200000) {
                      bVar22 = SBORROW4(uVar11,5);
                      bVar21 = (int)(uVar11 - 5) < 0;
                    }
                    else {
                      bVar22 = SBORROW4(uVar11,6);
                      bVar21 = (int)(uVar11 - 6) < 0;
                    }
                  }
                  else {
                    bVar22 = SBORROW4(uVar11,8);
                    bVar21 = (int)(uVar11 - 8) < 0;
                  }
                  if (bVar22 != bVar21) goto LAB_14f35519a;
                }
                if (((5 < (int)uVar11) || ((int)uVar16 < max_offset[(int)uVar11])) &&
                   ((int)uVar18 <= (int)uVar11)) {
                  if (uVar11 == uVar18) {
                    bVar21 = (int)uVar16 < (int)uVar14;
LAB_14f355190:
                    if (!bVar21) goto LAB_14f35519a;
                  }
                  else if ((int)uVar11 <= (int)(uVar18 + 1)) {
                    bVar21 = (int)uVar16 >> 7 <= (int)uVar14;
                    goto LAB_14f355190;
                  }
                  uVar18 = uVar11;
                  uVar14 = uVar16;
                }
              }
            }
          }
        }
LAB_14f35519a:
      } while (uVar5 != 0);
      uVar11 = *puVar2;
    }
    puVar2[1] = uVar11;
    *puVar2 = (uVar19 ^ uVar1) & 0x3ffffff ^ uVar1;
    if (uVar14 == 0) {
      if (iVar6 < 2) {
        return false;
      }
    }
    else if ((iVar6 < 2) ||
            (((iVar6 + 1 < (int)uVar18 && ((iVar6 + 2 < (int)uVar18 || ((int)uVar14 < 0x400)))) &&
             ((iVar6 + 3 < (int)uVar18 || ((int)uVar14 < 0x10000)))))) {
      param_1->ml = uVar18;
      param_1->off = uVar14;
      return true;
    }
    param_1->ml = iVar6;
    param_1->off = (uVar7 & 7) - 6;
  }
  else {
    param_1->ml = iVar6;
    param_1->off = (uVar7 & 7) - 6;
    puVar2[1] = *puVar2;
    *puVar2 = (uVar19 ^ uVar1) & 0x3ffffff ^ uVar1;
  }
  return true;
code_r0x00014f354b99:
  puVar9 = puVar9 + 1;
  if (param_5 + -8 < puVar9) goto LAB_14f354ba5;
  goto LAB_14f354b90;
code_r0x00014f354c2e:
  puVar9 = puVar9 + 1;
  if (param_5 + -8 < puVar9) goto LAB_14f354c37;
  goto LAB_14f354c25;
code_r0x00014f354cce:
  puVar9 = puVar9 + 1;
  if (param_5 + -8 < puVar9) goto LAB_14f354cd7;
  goto LAB_14f354cc5;
code_r0x00014f354d6e:
  puVar9 = puVar9 + 1;
  if (param_5 + -8 < puVar9) goto LAB_14f354d77;
  goto LAB_14f354d65;
code_r0x00014f354e0e:
  puVar9 = puVar9 + 1;
  if (param_5 + -8 < puVar9) goto LAB_14f354e17;
  goto LAB_14f354e05;
code_r0x00014f354eae:
  puVar9 = puVar9 + 1;
  if (param_5 + -8 < puVar9) goto LAB_14f354eb7;
  goto LAB_14f354ea5;
code_r0x00014f354f5d:
  puVar9 = puVar9 + 1;
  if (param_5 + -8 < puVar9) goto LAB_14f354f66;
  goto LAB_14f354f50;
code_r0x00014f3550c9:
  puVar8 = puVar8 + 1;
  if (param_5 + -8 < puVar8) goto LAB_14f3550d2;
  goto LAB_14f3550c0;
}

// newLZHC_get_match_heuristic<oo2::CTMF<unsigned_int,2,8,4>_> @ 14f355260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014f3559cc) */
/* WARNING: Removing unreachable block (ram,0x00014f355781) */
/* WARNING: Removing unreachable block (ram,0x00014f35576f) */
/* WARNING: Removing unreachable block (ram,0x00014f3559e2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
oo2::newLZHC_get_match_heuristic<oo2::CTMF<unsigned_int,2,8,4>_>
          (match *param_1,CTMF<unsigned_int,2,8,4> *param_2,newLZHC_LOs *param_3,uchar *param_4,
          uchar *param_5,int param_6,uchar *param_7,uint param_8,OodleLZ_CompressOptions *param_9)

{
  longlong *plVar1;
  uint uVar2;
  undefined1 (*pauVar3) [16];
  undefined1 (*pauVar4) [16];
  uint *puVar5;
  ulonglong uVar6;
  byte bVar7;
  ushort uVar8;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  ulonglong *puVar14;
  ulonglong *puVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  char *pcVar19;
  uint uVar20;
  short sVar21;
  longlong lVar22;
  uint uVar23;
  uint uVar24;
  bool bVar25;
  bool bVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 local_a8 [48];
  uint local_78 [4];
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)local_a8;
  pauVar3 = (undefined1 (*) [16])param_2->m_next_row;
  pauVar4 = (undefined1 (*) [16])param_2->m_next_row_second;
  uVar20 = param_2->m_next_hash;
  uVar24 = (int)param_4 - *(int *)&param_2->m_base_ptr;
  uVar2 = *(uint *)param_4;
  plVar1 = (longlong *)(param_4 + 1);
  puVar5 = (param_2->m_hash_table).m_ptr;
  param_2->m_next_ptr = (uchar *)plVar1;
  bVar7 = (byte)param_2->m_table_size_bits & 0x1f;
  uVar10 = (uint)(param_2->m_hash_mul * *plVar1 >> 0x20);
  uVar10 = uVar10 << bVar7 | uVar10 >> 0x20 - bVar7;
  param_2->m_next_hash = uVar10;
  param_2->m_next_row = puVar5 + (param_2->m_hash_row_mask & uVar10);
  param_2->m_next_row_second =
       puVar5 + ((ulonglong)(*plVar1 * -0x30e44323485a9b9d) >>
                 (0x40U - (char)param_2->m_table_size_bits & 0x3f) & 0xfffffffffffffffc);
  uVar10 = 7;
  uVar11 = *(uint *)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[8]);
  sVar21 = (short)uVar2;
  if (sVar21 == (short)uVar11) {
    uVar11 = uVar11 ^ uVar2;
    if (uVar11 == 0) {
      puVar14 = (ulonglong *)(param_4 + 4);
      lVar22 = (longlong)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[8]) -
               (longlong)param_4;
      puVar15 = puVar14;
      if (puVar14 <= param_5 + -8) {
LAB_14f355360:
        uVar16 = *(ulonglong *)(lVar22 + (longlong)puVar15) ^ *puVar15;
        if (uVar16 == 0) goto code_r0x00014f355369;
        uVar6 = 0;
        if (uVar16 != 0) {
          for (; (uVar16 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
          }
        }
        iVar12 = ((int)(uVar6 >> 3) - (int)puVar14) + (int)puVar15;
        goto LAB_14f355394;
      }
LAB_14f355372:
      lVar18 = (longlong)puVar15 - (longlong)puVar14;
      iVar12 = (int)lVar18;
      for (; (puVar15 < param_5 &&
             (iVar12 = (int)lVar18, (char)*puVar15 == *(char *)((longlong)puVar15 + lVar22)));
          puVar15 = (ulonglong *)((longlong)puVar15 + 1)) {
        lVar18 = lVar18 + 1;
        iVar12 = (int)lVar18;
      }
LAB_14f355394:
      iVar12 = iVar12 + 4;
    }
    else {
      iVar12 = 3 - (uint)((uVar11 & 0xffffff) != 0);
    }
    uVar10 = iVar12 * 8 + 6;
    if ((int)uVar10 < 7) {
      uVar10 = 7;
    }
  }
  uVar13 = *(uint *)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[9]);
  uVar11 = uVar10;
  if (sVar21 == (short)uVar13) {
    uVar13 = uVar13 ^ uVar2;
    if (uVar13 == 0) {
      puVar14 = (ulonglong *)(param_4 + 4);
      lVar22 = (longlong)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[9]) -
               (longlong)param_4;
      puVar15 = puVar14;
      if (puVar14 <= param_5 + -8) {
LAB_14f3553f5:
        uVar16 = *(ulonglong *)(lVar22 + (longlong)puVar15) ^ *puVar15;
        if (uVar16 == 0) goto code_r0x00014f3553fe;
        uVar6 = 0;
        if (uVar16 != 0) {
          for (; (uVar16 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
          }
        }
        iVar12 = ((int)(uVar6 >> 3) - (int)puVar14) + (int)puVar15;
        goto LAB_14f355426;
      }
LAB_14f355407:
      lVar18 = (longlong)puVar15 - (longlong)puVar14;
      iVar12 = (int)lVar18;
      for (; (puVar15 < param_5 &&
             (iVar12 = (int)lVar18, (char)*puVar15 == *(char *)((longlong)puVar15 + lVar22)));
          puVar15 = (ulonglong *)((longlong)puVar15 + 1)) {
        lVar18 = lVar18 + 1;
        iVar12 = (int)lVar18;
      }
LAB_14f355426:
      iVar12 = iVar12 + 4;
    }
    else {
      iVar12 = 3 - (uint)((uVar13 & 0xffffff) != 0);
    }
    uVar11 = iVar12 * 8 + 5;
    if ((int)uVar11 < (int)uVar10) {
      uVar11 = uVar10;
    }
  }
  uVar13 = *(uint *)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[10]);
  uVar10 = uVar11;
  if (sVar21 == (short)uVar13) {
    uVar13 = uVar13 ^ uVar2;
    if (uVar13 == 0) {
      puVar14 = (ulonglong *)(param_4 + 4);
      lVar22 = (longlong)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[10]) -
               (longlong)param_4;
      puVar15 = puVar14;
      if (puVar14 <= param_5 + -8) {
LAB_14f355485:
        uVar16 = *(ulonglong *)(lVar22 + (longlong)puVar15) ^ *puVar15;
        if (uVar16 == 0) goto code_r0x00014f35548e;
        uVar6 = 0;
        if (uVar16 != 0) {
          for (; (uVar16 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
          }
        }
        iVar12 = ((int)(uVar6 >> 3) - (int)puVar14) + (int)puVar15;
        goto LAB_14f3554b9;
      }
LAB_14f355497:
      lVar18 = (longlong)puVar15 - (longlong)puVar14;
      iVar12 = (int)lVar18;
      for (; (puVar15 < param_5 &&
             (iVar12 = (int)lVar18, (char)*puVar15 == *(char *)((longlong)puVar15 + lVar22)));
          puVar15 = (ulonglong *)((longlong)puVar15 + 1)) {
        lVar18 = lVar18 + 1;
        iVar12 = (int)lVar18;
      }
LAB_14f3554b9:
      iVar12 = iVar12 + 4;
    }
    else {
      iVar12 = 3 - (uint)((uVar13 & 0xffffff) != 0);
    }
    uVar10 = iVar12 * 8 + 4;
    if ((int)uVar10 < (int)uVar11) {
      uVar10 = uVar11;
    }
  }
  uVar13 = *(uint *)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[0xb]);
  uVar11 = uVar10;
  if (sVar21 == (short)uVar13) {
    uVar13 = uVar13 ^ uVar2;
    if (uVar13 == 0) {
      puVar14 = (ulonglong *)(param_4 + 4);
      lVar22 = (longlong)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[0xb]) -
               (longlong)param_4;
      puVar15 = puVar14;
      if (puVar14 <= param_5 + -8) {
LAB_14f355520:
        uVar16 = *(ulonglong *)(lVar22 + (longlong)puVar15) ^ *puVar15;
        if (uVar16 == 0) goto code_r0x00014f355529;
        uVar6 = 0;
        if (uVar16 != 0) {
          for (; (uVar16 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
          }
        }
        iVar12 = ((int)(uVar6 >> 3) - (int)puVar14) + (int)puVar15;
        goto LAB_14f355554;
      }
LAB_14f355532:
      lVar18 = (longlong)puVar15 - (longlong)puVar14;
      iVar12 = (int)lVar18;
      for (; (puVar15 < param_5 &&
             (iVar12 = (int)lVar18, (char)*puVar15 == *(char *)((longlong)puVar15 + lVar22)));
          puVar15 = (ulonglong *)((longlong)puVar15 + 1)) {
        lVar18 = lVar18 + 1;
        iVar12 = (int)lVar18;
      }
LAB_14f355554:
      iVar12 = iVar12 + 4;
    }
    else {
      iVar12 = 3 - (uint)((uVar13 & 0xffffff) != 0);
    }
    uVar11 = iVar12 * 8 + 3;
    if ((int)uVar11 < (int)uVar10) {
      uVar11 = uVar10;
    }
  }
  uVar13 = *(uint *)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[0xc]);
  uVar10 = uVar11;
  if (sVar21 == (short)uVar13) {
    uVar13 = uVar13 ^ uVar2;
    if (uVar13 == 0) {
      puVar14 = (ulonglong *)(param_4 + 4);
      lVar22 = (longlong)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[0xc]) -
               (longlong)param_4;
      puVar15 = puVar14;
      if (puVar14 <= param_5 + -8) {
LAB_14f3555b5:
        uVar16 = *(ulonglong *)(lVar22 + (longlong)puVar15) ^ *puVar15;
        if (uVar16 == 0) goto code_r0x00014f3555be;
        uVar6 = 0;
        if (uVar16 != 0) {
          for (; (uVar16 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
          }
        }
        iVar12 = ((int)(uVar6 >> 3) - (int)puVar14) + (int)puVar15;
        goto LAB_14f3555e6;
      }
LAB_14f3555c7:
      lVar18 = (longlong)puVar15 - (longlong)puVar14;
      iVar12 = (int)lVar18;
      for (; (puVar15 < param_5 &&
             (iVar12 = (int)lVar18, (char)*puVar15 == *(char *)((longlong)puVar15 + lVar22)));
          puVar15 = (ulonglong *)((longlong)puVar15 + 1)) {
        lVar18 = lVar18 + 1;
        iVar12 = (int)lVar18;
      }
LAB_14f3555e6:
      iVar12 = iVar12 + 4;
    }
    else {
      iVar12 = 3 - (uint)((uVar13 & 0xffffff) != 0);
    }
    uVar10 = iVar12 * 8 + 2;
    if ((int)uVar10 < (int)uVar11) {
      uVar10 = uVar11;
    }
  }
  uVar13 = *(uint *)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[0xd]);
  uVar11 = uVar10;
  if (sVar21 == (short)uVar13) {
    uVar13 = uVar13 ^ uVar2;
    if (uVar13 == 0) {
      puVar14 = (ulonglong *)(param_4 + 4);
      lVar22 = (longlong)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[0xd]) -
               (longlong)param_4;
      puVar15 = puVar14;
      if (puVar14 <= param_5 + -8) {
LAB_14f355645:
        uVar16 = *(ulonglong *)(lVar22 + (longlong)puVar15) ^ *puVar15;
        if (uVar16 == 0) goto code_r0x00014f35564e;
        uVar6 = 0;
        if (uVar16 != 0) {
          for (; (uVar16 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
          }
        }
        iVar12 = ((int)(uVar6 >> 3) - (int)puVar14) + (int)puVar15;
        goto LAB_14f355679;
      }
LAB_14f355657:
      lVar18 = (longlong)puVar15 - (longlong)puVar14;
      iVar12 = (int)lVar18;
      for (; (puVar15 < param_5 &&
             (iVar12 = (int)lVar18, (char)*puVar15 == *(char *)(lVar22 + (longlong)puVar15)));
          puVar15 = (ulonglong *)((longlong)puVar15 + 1)) {
        lVar18 = lVar18 + 1;
        iVar12 = (int)lVar18;
      }
LAB_14f355679:
      iVar12 = iVar12 + 4;
    }
    else {
      iVar12 = 3 - (uint)((uVar13 & 0xffffff) != 0);
    }
    uVar11 = iVar12 * 8 + 1;
    if ((int)uVar11 < (int)uVar10) {
      uVar11 = uVar10;
    }
  }
  uVar10 = *(uint *)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[0xe]);
  uVar13 = uVar11;
  if (sVar21 == (short)uVar10) {
    uVar10 = uVar10 ^ uVar2;
    if (uVar10 == 0) {
      puVar14 = (ulonglong *)(param_4 + 4);
      lVar22 = (longlong)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[0xe]) -
               (longlong)param_4;
      puVar15 = puVar14;
      if (puVar14 <= param_5 + -8) {
LAB_14f3556e0:
        uVar16 = *(ulonglong *)(lVar22 + (longlong)puVar15) ^ *puVar15;
        if (uVar16 == 0) goto code_r0x00014f3556ed;
        uVar6 = 0;
        if (uVar16 != 0) {
          for (; (uVar16 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
          }
        }
        iVar12 = ((int)(uVar6 >> 3) - (int)puVar14) + (int)puVar15;
        goto LAB_14f355719;
      }
LAB_14f3556f6:
      lVar18 = (longlong)puVar15 - (longlong)puVar14;
      iVar12 = (int)lVar18;
      for (; (puVar15 < param_5 &&
             (iVar12 = (int)lVar18, (char)*puVar15 == *(char *)(lVar22 + (longlong)puVar15)));
          puVar15 = (ulonglong *)((longlong)puVar15 + 1)) {
        lVar18 = lVar18 + 1;
        iVar12 = (int)lVar18;
      }
LAB_14f355719:
      iVar12 = iVar12 + 4;
    }
    else {
      iVar12 = 3 - (uint)((uVar10 & 0xffffff) != 0);
    }
    uVar13 = iVar12 * 8;
    if (iVar12 * 8 < (int)uVar11) {
      uVar13 = uVar11;
    }
  }
  uVar20 = uVar20 & 0xfc000000;
  iVar12 = (int)uVar13 >> 3;
  if (iVar12 < 4) {
    auVar29 = *pauVar3;
    auVar28 = *pauVar4;
    local_68 = uVar24 - auVar28._0_4_ & ___xmm_03ffffff03ffffff03ffffff03ffffff;
    uStack_64 = uVar24 - auVar28._4_4_ & _UNK_1531da904;
    uStack_60 = uVar24 - auVar28._8_4_ & _UNK_1531da908;
    uStack_5c = uVar24 - auVar28._12_4_ & _UNK_1531da90c;
    local_78[0] = uVar24 - auVar29._0_4_ & ___xmm_03ffffff03ffffff03ffffff03ffffff;
    local_78[1] = uVar24 - auVar29._4_4_ & _UNK_1531da904;
    local_78[2] = uVar24 - auVar29._8_4_ & _UNK_1531da908;
    local_78[3] = uVar24 - auVar29._12_4_ & _UNK_1531da90c;
    auVar30 = ___xmm_fc000000fc000000fc000000fc000000 & auVar29;
    auVar28 = ___xmm_fc000000fc000000fc000000fc000000 & auVar28;
    auVar31._0_4_ = -(uint)(auVar30._0_4_ == uVar20);
    auVar31._4_4_ = -(uint)(auVar30._4_4_ == uVar20);
    auVar31._8_4_ = -(uint)(auVar30._8_4_ == uVar20);
    auVar31._12_4_ = -(uint)(auVar30._12_4_ == uVar20);
    auVar30._0_4_ = -(uint)(auVar28._0_4_ == uVar20);
    auVar30._4_4_ = -(uint)(auVar28._4_4_ == uVar20);
    auVar30._8_4_ = -(uint)(auVar28._8_4_ == uVar20);
    auVar30._12_4_ = -(uint)(auVar28._12_4_ == uVar20);
    auVar28 = packssdw(auVar31,auVar30);
    auVar28 = packsswb(auVar28,ZEXT816(0));
    uVar8 = (ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe |
            (ushort)(byte)(auVar28[0xf] >> 7) << 0xf;
    uVar10 = (uint)uVar8;
    if (pauVar3 == pauVar4) {
      uVar10 = uVar8 & 0xf;
    }
    uVar2 = 0;
    uVar11 = 0;
    pcVar9 = (char *)(longlong)(param_6 + -1);
joined_r0x00014f355842:
    if (uVar10 != 0) {
      uVar17 = 0;
      if (uVar10 != 0) {
        for (; (uVar10 >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
        }
      }
      uVar10 = uVar10 & uVar10 - 1;
      uVar17 = local_78[uVar17];
      if (uVar17 < param_8) {
        uVar23 = 8;
        if (8 < uVar17) {
          uVar23 = uVar17;
        }
        if (((longlong)pcVar9 < (longlong)param_5 - (longlong)param_4) &&
           (param_4[(longlong)pcVar9] == pcVar9[(longlong)param_4 - (ulonglong)uVar23])) {
          lVar22 = ((longlong)param_4 - (ulonglong)uVar23) - (longlong)param_4;
          puVar14 = (ulonglong *)param_4;
          if (param_4 <= param_5 + -8) {
LAB_14f3558c0:
            uVar16 = *(ulonglong *)(lVar22 + (longlong)puVar14) ^ *puVar14;
            if (uVar16 == 0) goto code_r0x00014f3558c9;
            uVar6 = 0;
            if (uVar16 != 0) {
              for (; (uVar16 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
              }
            }
            pcVar19 = (char *)(((uVar6 >> 3) - (longlong)param_4) + (longlong)puVar14);
            goto LAB_14f3558f4;
          }
LAB_14f3558d2:
          pcVar19 = (char *)((longlong)puVar14 - (longlong)param_4);
          for (; (puVar14 < param_5 && ((char)*puVar14 == *(char *)(lVar22 + (longlong)puVar14)));
              puVar14 = (ulonglong *)((longlong)puVar14 + 1)) {
            pcVar19 = pcVar19 + 1;
          }
LAB_14f3558f4:
          if ((longlong)pcVar9 < (longlong)pcVar19) {
            uVar17 = (uint)pcVar19;
            pcVar9 = pcVar19;
            if (((param_9->farMatchOffsetLog2 < 1) ||
                ((int)uVar23 < 1 << ((byte)param_9->farMatchOffsetLog2 & 0x1f))) ||
               (param_9->farMatchMinLen <= (int)uVar17)) {
              if (0xfffff < (int)uVar23) {
                if ((int)uVar23 < 0x400000) {
                  if ((int)uVar23 < 0x200000) {
                    bVar26 = SBORROW4(uVar17,5);
                    bVar25 = (int)(uVar17 - 5) < 0;
                  }
                  else {
                    bVar26 = SBORROW4(uVar17,6);
                    bVar25 = (int)(uVar17 - 6) < 0;
                  }
                }
                else {
                  bVar26 = SBORROW4(uVar17,8);
                  bVar25 = (int)(uVar17 - 8) < 0;
                }
                if (bVar26 != bVar25) goto joined_r0x00014f355842;
              }
              if (((5 < (int)uVar17) || ((int)uVar23 < max_offset[(int)uVar17])) &&
                 ((int)uVar2 <= (int)uVar17)) {
                if (uVar17 == uVar2) {
                  bVar25 = (int)uVar23 < (int)uVar11;
LAB_14f355990:
                  if (!bVar25) goto joined_r0x00014f355842;
                }
                else if ((int)uVar17 <= (int)(uVar2 + 1)) {
                  bVar25 = (int)uVar23 >> 7 <= (int)uVar11;
                  goto LAB_14f355990;
                }
                uVar2 = uVar17;
                uVar11 = uVar23;
              }
            }
          }
        }
      }
      goto joined_r0x00014f355842;
    }
    auVar32._0_8_ = auVar29._0_8_ << 0x20;
    auVar32._8_8_ = auVar29._8_8_ << 0x20 | auVar29._0_8_ >> 0x20;
    auVar28 = ZEXT416(uVar24 & 0x3ffffff | uVar20);
    *pauVar3 = auVar32 | auVar28;
    auVar29._0_8_ = *(ulonglong *)*pauVar4 << 0x20;
    auVar29._8_8_ = *(longlong *)(*pauVar4 + 8) << 0x20 | *(ulonglong *)*pauVar4 >> 0x20;
    *pauVar4 = auVar29 | auVar28;
    if (uVar11 == 0) {
      if (iVar12 < 2) {
        return false;
      }
    }
    else if ((iVar12 < 2) ||
            (((iVar12 + 1 < (int)uVar2 && ((iVar12 + 2 < (int)uVar2 || ((int)uVar11 < 0x400)))) &&
             ((iVar12 + 3 < (int)uVar2 || ((int)uVar11 < 0x10000)))))) {
      param_1->ml = uVar2;
      param_1->off = uVar11;
      return true;
    }
    param_1->ml = iVar12;
    param_1->off = (uVar13 & 7) - 6;
  }
  else {
    param_1->ml = iVar12;
    param_1->off = (uVar13 & 7) - 6;
    auVar29 = ZEXT416(uVar24 & 0x3ffffff | uVar20);
    auVar28._0_8_ = *(ulonglong *)*pauVar3 << 0x20;
    auVar28._8_8_ = *(longlong *)(*pauVar3 + 8) << 0x20 | *(ulonglong *)*pauVar3 >> 0x20;
    *pauVar3 = auVar28 | auVar29;
    auVar27._0_8_ = *(ulonglong *)*pauVar4 << 0x20;
    auVar27._8_8_ = *(longlong *)(*pauVar4 + 8) << 0x20 | *(ulonglong *)*pauVar4 >> 0x20;
    *pauVar4 = auVar27 | auVar29;
  }
  return true;
code_r0x00014f355369:
  puVar15 = puVar15 + 1;
  if (param_5 + -8 < puVar15) goto LAB_14f355372;
  goto LAB_14f355360;
code_r0x00014f3553fe:
  puVar15 = puVar15 + 1;
  if (param_5 + -8 < puVar15) goto LAB_14f355407;
  goto LAB_14f3553f5;
code_r0x00014f35548e:
  puVar15 = puVar15 + 1;
  if (param_5 + -8 < puVar15) goto LAB_14f355497;
  goto LAB_14f355485;
code_r0x00014f355529:
  puVar15 = puVar15 + 1;
  if (param_5 + -8 < puVar15) goto LAB_14f355532;
  goto LAB_14f355520;
code_r0x00014f3555be:
  puVar15 = puVar15 + 1;
  if (param_5 + -8 < puVar15) goto LAB_14f3555c7;
  goto LAB_14f3555b5;
code_r0x00014f35564e:
  puVar15 = puVar15 + 1;
  if (param_5 + -8 < puVar15) goto LAB_14f355657;
  goto LAB_14f355645;
code_r0x00014f3556ed:
  puVar15 = puVar15 + 1;
  if (param_5 + -8 < puVar15) goto LAB_14f3556f6;
  goto LAB_14f3556e0;
code_r0x00014f3558c9:
  puVar14 = puVar14 + 1;
  if (param_5 + -8 < puVar14) goto LAB_14f3558d2;
  goto LAB_14f3558c0;
}

// newLZHC_get_match_heuristic<oo2::CTMF<unsigned_int,3,0,4>_> @ 14f355a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
oo2::newLZHC_get_match_heuristic<oo2::CTMF<unsigned_int,3,0,4>_>
          (match *param_1,CTMF<unsigned_int,3,0,4> *param_2,newLZHC_LOs *param_3,uchar *param_4,
          uchar *param_5,int param_6,uchar *param_7,uint param_8,OodleLZ_CompressOptions *param_9)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  ulonglong uVar4;
  byte bVar5;
  ushort uVar6;
  uint uVar7;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  char *pcVar19;
  short sVar20;
  uint uVar21;
  uint uVar22;
  char *pcVar23;
  longlong lVar24;
  uint uVar25;
  uint uVar26;
  bool bVar27;
  bool bVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 local_b8 [32];
  uint local_98 [4];
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)local_b8;
  puVar3 = param_2->m_next_row;
  uVar1 = param_2->m_next_hash;
  uVar2 = *(uint *)param_4;
  param_2->m_next_ptr = param_4 + 1;
  uVar26 = (int)param_4 - *(int *)&param_2->m_base_ptr;
  bVar5 = (byte)param_2->m_table_size_bits & 0x1f;
  uVar16 = (uint)(param_2->m_hash_mul * *(longlong *)(param_4 + 1) >> 0x20);
  uVar16 = uVar16 << bVar5 | uVar16 >> 0x20 - bVar5;
  param_2->m_next_hash = uVar16;
  param_2->m_next_row = (param_2->m_hash_table).m_ptr + (param_2->m_hash_row_mask & uVar16);
  uVar16 = 7;
  uVar9 = *(uint *)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[8]);
  sVar20 = (short)uVar2;
  if (sVar20 == (short)uVar9) {
    uVar9 = uVar9 ^ uVar2;
    if (uVar9 == 0) {
      puVar13 = (ulonglong *)(param_4 + 4);
      lVar24 = (longlong)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[8]) -
               (longlong)param_4;
      puVar14 = puVar13;
      if (puVar13 <= param_5 + -8) {
LAB_14f355b50:
        uVar15 = *(ulonglong *)(lVar24 + (longlong)puVar14) ^ *puVar14;
        if (uVar15 == 0) goto code_r0x00014f355b59;
        uVar4 = 0;
        if (uVar15 != 0) {
          for (; (uVar15 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
          }
        }
        iVar10 = ((int)(uVar4 >> 3) - (int)puVar13) + (int)puVar14;
        goto LAB_14f355b85;
      }
LAB_14f355b65:
      lVar18 = (longlong)puVar14 - (longlong)puVar13;
      iVar10 = (int)lVar18;
      for (; (puVar14 < param_5 &&
             (iVar10 = (int)lVar18, (char)*puVar14 == *(char *)((longlong)puVar14 + lVar24)));
          puVar14 = (ulonglong *)((longlong)puVar14 + 1)) {
        lVar18 = lVar18 + 1;
        iVar10 = (int)lVar18;
      }
LAB_14f355b85:
      iVar10 = iVar10 + 4;
    }
    else {
      iVar10 = 3 - (uint)((uVar9 & 0xffffff) != 0);
    }
    uVar16 = iVar10 * 8 + 6;
    if ((int)uVar16 < 7) {
      uVar16 = 7;
    }
  }
  uVar11 = *(uint *)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[9]);
  uVar9 = uVar16;
  if (sVar20 == (short)uVar11) {
    uVar11 = uVar11 ^ uVar2;
    if (uVar11 == 0) {
      puVar13 = (ulonglong *)(param_4 + 4);
      lVar24 = (longlong)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[9]) -
               (longlong)param_4;
      puVar14 = puVar13;
      if (puVar13 <= param_5 + -8) {
LAB_14f355be0:
        uVar15 = *(ulonglong *)(lVar24 + (longlong)puVar14) ^ *puVar14;
        if (uVar15 == 0) goto code_r0x00014f355be9;
        uVar4 = 0;
        if (uVar15 != 0) {
          for (; (uVar15 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
          }
        }
        iVar10 = ((int)(uVar4 >> 3) - (int)puVar13) + (int)puVar14;
        goto LAB_14f355c14;
      }
LAB_14f355bf2:
      lVar18 = (longlong)puVar14 - (longlong)puVar13;
      iVar10 = (int)lVar18;
      for (; (puVar14 < param_5 &&
             (iVar10 = (int)lVar18, (char)*puVar14 == *(char *)((longlong)puVar14 + lVar24)));
          puVar14 = (ulonglong *)((longlong)puVar14 + 1)) {
        lVar18 = lVar18 + 1;
        iVar10 = (int)lVar18;
      }
LAB_14f355c14:
      iVar10 = iVar10 + 4;
    }
    else {
      iVar10 = 3 - (uint)((uVar11 & 0xffffff) != 0);
    }
    uVar9 = iVar10 * 8 + 5;
    if ((int)uVar9 < (int)uVar16) {
      uVar9 = uVar16;
    }
  }
  uVar11 = *(uint *)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[10]);
  uVar16 = uVar9;
  if (sVar20 == (short)uVar11) {
    uVar11 = uVar11 ^ uVar2;
    if (uVar11 == 0) {
      puVar13 = (ulonglong *)(param_4 + 4);
      lVar24 = (longlong)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[10]) -
               (longlong)param_4;
      puVar14 = puVar13;
      if (puVar13 <= param_5 + -8) {
LAB_14f355c70:
        uVar15 = *(ulonglong *)(lVar24 + (longlong)puVar14) ^ *puVar14;
        if (uVar15 == 0) goto code_r0x00014f355c79;
        uVar4 = 0;
        if (uVar15 != 0) {
          for (; (uVar15 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
          }
        }
        iVar10 = ((int)(uVar4 >> 3) - (int)puVar13) + (int)puVar14;
        goto LAB_14f355ca5;
      }
LAB_14f355c85:
      lVar18 = (longlong)puVar14 - (longlong)puVar13;
      iVar10 = (int)lVar18;
      for (; (puVar14 < param_5 &&
             (iVar10 = (int)lVar18, (char)*puVar14 == *(char *)((longlong)puVar14 + lVar24)));
          puVar14 = (ulonglong *)((longlong)puVar14 + 1)) {
        lVar18 = lVar18 + 1;
        iVar10 = (int)lVar18;
      }
LAB_14f355ca5:
      iVar10 = iVar10 + 4;
    }
    else {
      iVar10 = 3 - (uint)((uVar11 & 0xffffff) != 0);
    }
    uVar16 = iVar10 * 8 + 4;
    if ((int)uVar16 < (int)uVar9) {
      uVar16 = uVar9;
    }
  }
  uVar11 = *(uint *)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[0xb]);
  uVar9 = uVar16;
  if (sVar20 == (short)uVar11) {
    uVar11 = uVar11 ^ uVar2;
    if (uVar11 == 0) {
      puVar13 = (ulonglong *)(param_4 + 4);
      lVar24 = (longlong)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[0xb]) -
               (longlong)param_4;
      puVar14 = puVar13;
      if (puVar13 <= param_5 + -8) {
LAB_14f355d00:
        uVar15 = *(ulonglong *)(lVar24 + (longlong)puVar14) ^ *puVar14;
        if (uVar15 == 0) goto code_r0x00014f355d09;
        uVar4 = 0;
        if (uVar15 != 0) {
          for (; (uVar15 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
          }
        }
        iVar10 = ((int)(uVar4 >> 3) - (int)puVar13) + (int)puVar14;
        goto LAB_14f355d34;
      }
LAB_14f355d12:
      lVar18 = (longlong)puVar14 - (longlong)puVar13;
      iVar10 = (int)lVar18;
      for (; (puVar14 < param_5 &&
             (iVar10 = (int)lVar18, (char)*puVar14 == *(char *)((longlong)puVar14 + lVar24)));
          puVar14 = (ulonglong *)((longlong)puVar14 + 1)) {
        lVar18 = lVar18 + 1;
        iVar10 = (int)lVar18;
      }
LAB_14f355d34:
      iVar10 = iVar10 + 4;
    }
    else {
      iVar10 = 3 - (uint)((uVar11 & 0xffffff) != 0);
    }
    uVar9 = iVar10 * 8 + 3;
    if ((int)uVar9 < (int)uVar16) {
      uVar9 = uVar16;
    }
  }
  uVar11 = *(uint *)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[0xc]);
  uVar16 = uVar9;
  if (sVar20 == (short)uVar11) {
    uVar11 = uVar11 ^ uVar2;
    if (uVar11 == 0) {
      puVar13 = (ulonglong *)(param_4 + 4);
      lVar24 = (longlong)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[0xc]) -
               (longlong)param_4;
      puVar14 = puVar13;
      if (puVar13 <= param_5 + -8) {
LAB_14f355d90:
        uVar15 = *(ulonglong *)(lVar24 + (longlong)puVar14) ^ *puVar14;
        if (uVar15 == 0) goto code_r0x00014f355d99;
        uVar4 = 0;
        if (uVar15 != 0) {
          for (; (uVar15 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
          }
        }
        iVar10 = ((int)(uVar4 >> 3) - (int)puVar13) + (int)puVar14;
        goto LAB_14f355dc5;
      }
LAB_14f355da5:
      lVar18 = (longlong)puVar14 - (longlong)puVar13;
      iVar10 = (int)lVar18;
      for (; (puVar14 < param_5 &&
             (iVar10 = (int)lVar18, (char)*puVar14 == *(char *)((longlong)puVar14 + lVar24)));
          puVar14 = (ulonglong *)((longlong)puVar14 + 1)) {
        lVar18 = lVar18 + 1;
        iVar10 = (int)lVar18;
      }
LAB_14f355dc5:
      iVar10 = iVar10 + 4;
    }
    else {
      iVar10 = 3 - (uint)((uVar11 & 0xffffff) != 0);
    }
    uVar16 = iVar10 * 8 + 2;
    if ((int)uVar16 < (int)uVar9) {
      uVar16 = uVar9;
    }
  }
  uVar11 = *(uint *)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[0xd]);
  uVar9 = uVar16;
  if (sVar20 == (short)uVar11) {
    uVar11 = uVar11 ^ uVar2;
    if (uVar11 == 0) {
      puVar13 = (ulonglong *)(param_4 + 4);
      lVar24 = (longlong)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[0xd]) -
               (longlong)param_4;
      puVar14 = puVar13;
      if (puVar13 <= param_5 + -8) {
LAB_14f355e20:
        uVar15 = *(ulonglong *)(lVar24 + (longlong)puVar14) ^ *puVar14;
        if (uVar15 == 0) goto code_r0x00014f355e29;
        uVar4 = 0;
        if (uVar15 != 0) {
          for (; (uVar15 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
          }
        }
        iVar10 = ((int)(uVar4 >> 3) - (int)puVar13) + (int)puVar14;
        goto LAB_14f355e54;
      }
LAB_14f355e32:
      lVar18 = (longlong)puVar14 - (longlong)puVar13;
      iVar10 = (int)lVar18;
      for (; (puVar14 < param_5 &&
             (iVar10 = (int)lVar18, (char)*puVar14 == *(char *)((longlong)puVar14 + lVar24)));
          puVar14 = (ulonglong *)((longlong)puVar14 + 1)) {
        lVar18 = lVar18 + 1;
        iVar10 = (int)lVar18;
      }
LAB_14f355e54:
      iVar10 = iVar10 + 4;
    }
    else {
      iVar10 = 3 - (uint)((uVar11 & 0xffffff) != 0);
    }
    uVar9 = iVar10 * 8 + 1;
    if ((int)uVar9 < (int)uVar16) {
      uVar9 = uVar16;
    }
  }
  uVar16 = *(uint *)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[0xe]);
  uVar11 = uVar9;
  if (sVar20 == (short)uVar16) {
    uVar16 = uVar16 ^ uVar2;
    if (uVar16 == 0) {
      puVar13 = (ulonglong *)(param_4 + 4);
      lVar24 = (longlong)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[0xe]) -
               (longlong)param_4;
      puVar14 = puVar13;
      if (puVar13 <= param_5 + -8) {
LAB_14f355eb0:
        uVar15 = *(ulonglong *)(lVar24 + (longlong)puVar14) ^ *puVar14;
        if (uVar15 == 0) goto code_r0x00014f355ebd;
        uVar4 = 0;
        if (uVar15 != 0) {
          for (; (uVar15 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
          }
        }
        iVar10 = ((int)(uVar4 >> 3) - (int)puVar13) + (int)puVar14;
        goto LAB_14f355ee5;
      }
LAB_14f355ec6:
      lVar18 = (longlong)puVar14 - (longlong)puVar13;
      iVar10 = (int)lVar18;
      for (; (puVar14 < param_5 &&
             (iVar10 = (int)lVar18, (char)*puVar14 == *(char *)((longlong)puVar14 + lVar24)));
          puVar14 = (ulonglong *)((longlong)puVar14 + 1)) {
        lVar18 = lVar18 + 1;
        iVar10 = (int)lVar18;
      }
LAB_14f355ee5:
      iVar10 = iVar10 + 4;
    }
    else {
      iVar10 = 3 - (uint)((uVar16 & 0xffffff) != 0);
    }
    uVar11 = iVar10 * 8;
    if (iVar10 * 8 < (int)uVar9) {
      uVar11 = uVar9;
    }
  }
  iVar10 = (int)uVar11 >> 3;
  if (iVar10 < 4) {
    uVar16 = *puVar3;
    uVar2 = puVar3[1];
    uVar9 = puVar3[2];
    uVar7 = puVar3[3];
    uVar21 = 0;
    uVar12 = uVar1 & 0xfc000000;
    local_88 = uVar26 - puVar3[4] & ___xmm_03ffffff03ffffff03ffffff03ffffff;
    uStack_84 = uVar26 - puVar3[5] & _UNK_1531da904;
    uStack_80 = uVar26 - puVar3[6] & _UNK_1531da908;
    uStack_7c = uVar26 - puVar3[7] & _UNK_1531da90c;
    local_98[0] = uVar26 - uVar16 & ___xmm_03ffffff03ffffff03ffffff03ffffff;
    local_98[1] = uVar26 - uVar2 & _UNK_1531da904;
    local_98[2] = uVar26 - uVar9 & _UNK_1531da908;
    local_98[3] = uVar26 - uVar7 & _UNK_1531da90c;
    auVar29._0_4_ = -(uint)((___xmm_fc000000fc000000fc000000fc000000 & uVar16) == uVar12);
    auVar29._4_4_ = -(uint)((_UNK_1531da914 & uVar2) == uVar12);
    auVar29._8_4_ = -(uint)((_UNK_1531da918 & uVar9) == uVar12);
    auVar29._12_4_ = -(uint)((_UNK_1531da91c & uVar7) == uVar12);
    pcVar23 = (char *)(longlong)(param_6 + -1);
    auVar30._0_4_ = -(uint)((___xmm_fc000000fc000000fc000000fc000000 & puVar3[4]) == uVar12);
    auVar30._4_4_ = -(uint)((_UNK_1531da914 & puVar3[5]) == uVar12);
    auVar30._8_4_ = -(uint)((_UNK_1531da918 & puVar3[6]) == uVar12);
    auVar30._12_4_ = -(uint)((_UNK_1531da91c & puVar3[7]) == uVar12);
    auVar30 = packssdw(auVar29,auVar30);
    auVar30 = packsswb(auVar30,ZEXT816(0));
    uVar6 = (ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
            (ushort)(byte)(auVar30[0xf] >> 7) << 0xf;
    uVar22 = (uint)uVar6;
    uVar12 = uVar21;
    if (uVar6 != 0) {
      do {
        uVar17 = 0;
        if (uVar22 != 0) {
          for (; (uVar22 >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
          }
        }
        uVar22 = uVar22 & uVar22 - 1;
        uVar17 = local_98[uVar17];
        if (uVar17 < param_8) {
          uVar25 = 8;
          if (8 < uVar17) {
            uVar25 = uVar17;
          }
          if (((longlong)pcVar23 < (longlong)param_5 - (longlong)param_4) &&
             (pcVar23[(longlong)param_4] == pcVar23[(longlong)param_4 - (ulonglong)uVar25])) {
            lVar24 = ((longlong)param_4 - (ulonglong)uVar25) - (longlong)param_4;
            puVar13 = (ulonglong *)param_4;
            if (param_4 <= param_5 + -8) {
LAB_14f356060:
              uVar15 = *(ulonglong *)(lVar24 + (longlong)puVar13) ^ *puVar13;
              if (uVar15 == 0) goto code_r0x00014f356069;
              uVar4 = 0;
              if (uVar15 != 0) {
                for (; (uVar15 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
                }
              }
              pcVar19 = (char *)(((uVar4 >> 3) - (longlong)param_4) + (longlong)puVar13);
              goto LAB_14f356094;
            }
LAB_14f356072:
            pcVar19 = (char *)((longlong)puVar13 - (longlong)param_4);
            for (; (puVar13 < param_5 && ((char)*puVar13 == *(char *)((longlong)puVar13 + lVar24)));
                puVar13 = (ulonglong *)((longlong)puVar13 + 1)) {
              pcVar19 = pcVar19 + 1;
            }
LAB_14f356094:
            if ((longlong)pcVar23 < (longlong)pcVar19) {
              uVar17 = (uint)pcVar19;
              pcVar23 = pcVar19;
              if (((param_9->farMatchOffsetLog2 < 1) ||
                  ((int)uVar25 < 1 << ((byte)param_9->farMatchOffsetLog2 & 0x1f))) ||
                 (param_9->farMatchMinLen <= (int)uVar17)) {
                if (0xfffff < (int)uVar25) {
                  if ((int)uVar25 < 0x400000) {
                    if ((int)uVar25 < 0x200000) {
                      bVar28 = SBORROW4(uVar17,5);
                      bVar27 = (int)(uVar17 - 5) < 0;
                    }
                    else {
                      bVar28 = SBORROW4(uVar17,6);
                      bVar27 = (int)(uVar17 - 6) < 0;
                    }
                  }
                  else {
                    bVar28 = SBORROW4(uVar17,8);
                    bVar27 = (int)(uVar17 - 8) < 0;
                  }
                  if (bVar28 != bVar27) goto code_r0x00014f356140;
                }
                if (((5 < (int)uVar17) || ((int)uVar25 < max_offset[(int)uVar17])) &&
                   ((int)uVar21 <= (int)uVar17)) {
                  if (uVar17 == uVar21) {
                    bVar27 = (int)uVar25 < (int)uVar12;
LAB_14f356130:
                    if (!bVar27) goto code_r0x00014f356140;
                  }
                  else if ((int)uVar17 <= (int)(uVar21 + 1)) {
                    bVar27 = (int)uVar25 >> 7 <= (int)uVar12;
                    goto LAB_14f356130;
                  }
                  uVar21 = uVar17;
                  uVar12 = uVar25;
                }
              }
            }
          }
        }
code_r0x00014f356140:
      } while (uVar22 != 0);
    }
    uVar8 = *(undefined8 *)(puVar3 + 3);
    puVar3[1] = uVar16;
    puVar3[2] = uVar2;
    puVar3[3] = uVar9;
    puVar3[4] = uVar7;
    *(undefined8 *)(puVar3 + 4) = uVar8;
    *(undefined8 *)(puVar3 + 6) = *(undefined8 *)(puVar3 + 5);
    *puVar3 = (uVar26 ^ uVar1) & 0x3ffffff ^ uVar1;
    if (uVar12 == 0) {
      if (iVar10 < 2) {
        return false;
      }
    }
    else if ((iVar10 < 2) ||
            (((iVar10 + 1 < (int)uVar21 && ((iVar10 + 2 < (int)uVar21 || ((int)uVar12 < 0x400)))) &&
             ((iVar10 + 3 < (int)uVar21 || ((int)uVar12 < 0x10000)))))) {
      param_1->ml = uVar21;
      param_1->off = uVar12;
      return true;
    }
    param_1->ml = iVar10;
    param_1->off = (uVar11 & 7) - 6;
  }
  else {
    param_1->ml = iVar10;
    param_1->off = (uVar11 & 7) - 6;
    uVar8 = *(undefined8 *)(puVar3 + 3);
    *(undefined8 *)(puVar3 + 1) = *(undefined8 *)puVar3;
    *(undefined8 *)(puVar3 + 3) = *(undefined8 *)(puVar3 + 2);
    *(undefined8 *)(puVar3 + 4) = uVar8;
    *(undefined8 *)(puVar3 + 6) = *(undefined8 *)(puVar3 + 5);
    *puVar3 = (uVar26 ^ uVar1) & 0x3ffffff ^ uVar1;
  }
  return true;
code_r0x00014f355b59:
  puVar14 = puVar14 + 1;
  if (param_5 + -8 < puVar14) goto LAB_14f355b65;
  goto LAB_14f355b50;
code_r0x00014f355be9:
  puVar14 = puVar14 + 1;
  if (param_5 + -8 < puVar14) goto LAB_14f355bf2;
  goto LAB_14f355be0;
code_r0x00014f355c79:
  puVar14 = puVar14 + 1;
  if (param_5 + -8 < puVar14) goto LAB_14f355c85;
  goto LAB_14f355c70;
code_r0x00014f355d09:
  puVar14 = puVar14 + 1;
  if (param_5 + -8 < puVar14) goto LAB_14f355d12;
  goto LAB_14f355d00;
code_r0x00014f355d99:
  puVar14 = puVar14 + 1;
  if (param_5 + -8 < puVar14) goto LAB_14f355da5;
  goto LAB_14f355d90;
code_r0x00014f355e29:
  puVar14 = puVar14 + 1;
  if (param_5 + -8 < puVar14) goto LAB_14f355e32;
  goto LAB_14f355e20;
code_r0x00014f355ebd:
  puVar14 = puVar14 + 1;
  if (param_5 + -8 < puVar14) goto LAB_14f355ec6;
  goto LAB_14f355eb0;
code_r0x00014f356069:
  puVar13 = puVar13 + 1;
  if (param_5 + -8 < puVar13) goto LAB_14f356072;
  goto LAB_14f356060;
}

// newLZHC_get_match_heuristic<oo2::CTMF<unsigned_int,0,0,4>_> @ 14f356200

bool __cdecl
oo2::newLZHC_get_match_heuristic<oo2::CTMF<unsigned_int,0,0,4>_>
          (match *param_1,CTMF<unsigned_int,0,0,4> *param_2,newLZHC_LOs *param_3,uchar *param_4,
          uchar *param_5,int param_6,uchar *param_7,uint param_8,OodleLZ_CompressOptions *param_9)

{
  uint uVar1;
  uint *puVar2;
  ulonglong uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  char *pcVar9;
  ulonglong *puVar10;
  uchar *puVar11;
  int iVar12;
  longlong lVar13;
  short sVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  ulonglong *puVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  uint uVar22;
  bool bVar23;
  bool bVar24;
  uint local_58 [6];
  
  puVar2 = param_2->m_next_row;
  uVar20 = *(uint *)param_4;
  uVar22 = (int)param_4 - *(int *)&param_2->m_base_ptr;
  uVar1 = param_2->m_next_hash;
  param_2->m_next_ptr = param_4 + 1;
  bVar4 = (byte)param_2->m_table_size_bits & 0x1f;
  uVar17 = (uint)(param_2->m_hash_mul * *(longlong *)(param_4 + 1) >> 0x20);
  uVar17 = uVar17 << bVar4 | uVar17 >> 0x20 - bVar4;
  param_2->m_next_hash = uVar17;
  param_2->m_next_row = (param_2->m_hash_table).m_ptr + (param_2->m_hash_row_mask & uVar17);
  uVar17 = 7;
  uVar5 = *(uint *)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[8]);
  sVar14 = (short)uVar20;
  if (sVar14 == (short)uVar5) {
    uVar5 = uVar5 ^ uVar20;
    if (uVar5 == 0) {
      puVar18 = (ulonglong *)(param_4 + 4);
      puVar21 = (uint *)((longlong)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[8]) + 4);
      puVar10 = puVar18;
      if (puVar18 <= param_5 + -8) {
LAB_14f3562c5:
        uVar8 = *(ulonglong *)(((longlong)puVar21 - (longlong)puVar18) + (longlong)puVar10) ^
                *puVar10;
        if (uVar8 == 0) goto code_r0x00014f3562ce;
        uVar3 = 0;
        if (uVar8 != 0) {
          for (; (uVar8 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
          }
        }
        lVar15 = ((uVar3 >> 3) - (longlong)puVar18) + (longlong)puVar10;
        goto LAB_14f35630b;
      }
LAB_14f3562d7:
      lVar15 = (longlong)puVar10 - (longlong)puVar18;
      if (puVar10 < param_5) {
        pcVar9 = (char *)(lVar15 + (longlong)puVar21);
        do {
          if (pcVar9[(longlong)(param_4 + (4 - (longlong)puVar21))] != *pcVar9) break;
          pcVar9 = pcVar9 + 1;
          lVar15 = lVar15 + 1;
        } while (pcVar9 + ((longlong)puVar18 - (longlong)puVar21) < param_5);
      }
LAB_14f35630b:
      iVar6 = (int)lVar15 + 4;
    }
    else {
      iVar6 = 3 - (uint)((uVar5 & 0xffffff) != 0);
    }
    uVar17 = iVar6 * 8 + 6;
    if ((int)uVar17 < 7) {
      uVar17 = 7;
    }
  }
  uVar7 = *(uint *)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[9]);
  uVar5 = uVar17;
  if (sVar14 == (short)uVar7) {
    uVar7 = uVar7 ^ uVar20;
    if (uVar7 == 0) {
      puVar10 = (ulonglong *)(param_4 + 4);
      puVar21 = (uint *)((longlong)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[9]) + 4);
      puVar18 = puVar10;
      if (puVar10 <= param_5 + -8) {
LAB_14f356370:
        uVar8 = *(ulonglong *)(((longlong)puVar21 - (longlong)puVar10) + (longlong)puVar18) ^
                *puVar18;
        if (uVar8 == 0) goto code_r0x00014f356379;
        uVar3 = 0;
        if (uVar8 != 0) {
          for (; (uVar8 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
          }
        }
        lVar15 = ((uVar3 >> 3) - (longlong)puVar10) + (longlong)puVar18;
        goto LAB_14f3563b9;
      }
LAB_14f356385:
      lVar15 = (longlong)puVar18 - (longlong)puVar10;
      if (puVar18 < param_5) {
        pcVar9 = (char *)(lVar15 + (longlong)puVar21);
        do {
          if (pcVar9[(longlong)(param_4 + (4 - (longlong)puVar21))] != *pcVar9) break;
          pcVar9 = pcVar9 + 1;
          lVar15 = lVar15 + 1;
        } while (pcVar9 + ((longlong)puVar10 - (longlong)puVar21) < param_5);
      }
LAB_14f3563b9:
      iVar6 = (int)lVar15 + 4;
    }
    else {
      iVar6 = 3 - (uint)((uVar7 & 0xffffff) != 0);
    }
    uVar5 = iVar6 * 8 + 5;
    if ((int)uVar5 < (int)uVar17) {
      uVar5 = uVar17;
    }
  }
  uVar7 = *(uint *)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[10]);
  uVar17 = uVar5;
  if (sVar14 == (short)uVar7) {
    uVar7 = uVar7 ^ uVar20;
    if (uVar7 == 0) {
      puVar10 = (ulonglong *)(param_4 + 4);
      puVar21 = (uint *)((longlong)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[10]) + 4);
      puVar18 = puVar10;
      if (puVar10 <= param_5 + -8) {
LAB_14f356420:
        uVar8 = *(ulonglong *)(((longlong)puVar21 - (longlong)puVar10) + (longlong)puVar18) ^
                *puVar18;
        if (uVar8 == 0) goto code_r0x00014f356429;
        uVar3 = 0;
        if (uVar8 != 0) {
          for (; (uVar8 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
          }
        }
        lVar15 = ((uVar3 >> 3) - (longlong)puVar10) + (longlong)puVar18;
        goto LAB_14f356469;
      }
LAB_14f356432:
      lVar15 = (longlong)puVar18 - (longlong)puVar10;
      if (puVar18 < param_5) {
        pcVar9 = (char *)(lVar15 + (longlong)puVar21);
        do {
          if (pcVar9[(longlong)(param_4 + (4 - (longlong)puVar21))] != *pcVar9) break;
          pcVar9 = pcVar9 + 1;
          lVar15 = lVar15 + 1;
        } while (pcVar9 + ((longlong)puVar10 - (longlong)puVar21) < param_5);
      }
LAB_14f356469:
      iVar6 = (int)lVar15 + 4;
    }
    else {
      iVar6 = 3 - (uint)((uVar7 & 0xffffff) != 0);
    }
    uVar17 = iVar6 * 8 + 4;
    if ((int)uVar17 < (int)uVar5) {
      uVar17 = uVar5;
    }
  }
  uVar7 = *(uint *)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[0xb]);
  uVar5 = uVar17;
  if (sVar14 == (short)uVar7) {
    uVar7 = uVar7 ^ uVar20;
    if (uVar7 == 0) {
      puVar10 = (ulonglong *)(param_4 + 4);
      puVar21 = (uint *)((longlong)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[0xb]) + 4)
      ;
      puVar18 = puVar10;
      if (puVar10 <= param_5 + -8) {
LAB_14f3564d0:
        uVar8 = *(ulonglong *)(((longlong)puVar21 - (longlong)puVar10) + (longlong)puVar18) ^
                *puVar18;
        if (uVar8 == 0) goto code_r0x00014f3564d9;
        uVar3 = 0;
        if (uVar8 != 0) {
          for (; (uVar8 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
          }
        }
        lVar15 = ((uVar3 >> 3) - (longlong)puVar10) + (longlong)puVar18;
        goto LAB_14f356519;
      }
LAB_14f3564e5:
      lVar15 = (longlong)puVar18 - (longlong)puVar10;
      if (puVar18 < param_5) {
        pcVar9 = (char *)(lVar15 + (longlong)puVar21);
        do {
          if (pcVar9[(longlong)(param_4 + (4 - (longlong)puVar21))] != *pcVar9) break;
          pcVar9 = pcVar9 + 1;
          lVar15 = lVar15 + 1;
        } while (pcVar9 + ((longlong)puVar10 - (longlong)puVar21) < param_5);
      }
LAB_14f356519:
      iVar6 = (int)lVar15 + 4;
    }
    else {
      iVar6 = 3 - (uint)((uVar7 & 0xffffff) != 0);
    }
    uVar5 = iVar6 * 8 + 3;
    if ((int)uVar5 < (int)uVar17) {
      uVar5 = uVar17;
    }
  }
  uVar7 = *(uint *)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[0xc]);
  uVar17 = uVar5;
  if (sVar14 == (short)uVar7) {
    uVar7 = uVar7 ^ uVar20;
    if (uVar7 == 0) {
      puVar10 = (ulonglong *)(param_4 + 4);
      puVar21 = (uint *)((longlong)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[0xc]) + 4)
      ;
      puVar18 = puVar10;
      if (puVar10 <= param_5 + -8) {
LAB_14f356580:
        uVar8 = *(ulonglong *)(((longlong)puVar21 - (longlong)puVar10) + (longlong)puVar18) ^
                *puVar18;
        if (uVar8 == 0) goto code_r0x00014f356589;
        uVar3 = 0;
        if (uVar8 != 0) {
          for (; (uVar8 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
          }
        }
        lVar15 = ((uVar3 >> 3) - (longlong)puVar10) + (longlong)puVar18;
        goto LAB_14f3565c9;
      }
LAB_14f356592:
      lVar15 = (longlong)puVar18 - (longlong)puVar10;
      if (puVar18 < param_5) {
        pcVar9 = (char *)(lVar15 + (longlong)puVar21);
        do {
          if (pcVar9[(longlong)(param_4 + (4 - (longlong)puVar21))] != *pcVar9) break;
          pcVar9 = pcVar9 + 1;
          lVar15 = lVar15 + 1;
        } while (pcVar9 + ((longlong)puVar10 - (longlong)puVar21) < param_5);
      }
LAB_14f3565c9:
      iVar6 = (int)lVar15 + 4;
    }
    else {
      iVar6 = 3 - (uint)((uVar7 & 0xffffff) != 0);
    }
    uVar17 = iVar6 * 8 + 2;
    if ((int)uVar17 < (int)uVar5) {
      uVar17 = uVar5;
    }
  }
  uVar7 = *(uint *)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[0xd]);
  uVar5 = uVar17;
  if (sVar14 == (short)uVar7) {
    uVar7 = uVar7 ^ uVar20;
    if (uVar7 == 0) {
      puVar10 = (ulonglong *)(param_4 + 4);
      puVar21 = (uint *)((longlong)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[0xd]) + 4)
      ;
      puVar18 = puVar10;
      if (puVar10 <= param_5 + -8) {
LAB_14f356630:
        uVar8 = *(ulonglong *)(((longlong)puVar21 - (longlong)puVar10) + (longlong)puVar18) ^
                *puVar18;
        if (uVar8 == 0) goto code_r0x00014f356639;
        uVar3 = 0;
        if (uVar8 != 0) {
          for (; (uVar8 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
          }
        }
        lVar15 = ((uVar3 >> 3) - (longlong)puVar10) + (longlong)puVar18;
        goto LAB_14f356679;
      }
LAB_14f356645:
      lVar15 = (longlong)puVar18 - (longlong)puVar10;
      if (puVar18 < param_5) {
        pcVar9 = (char *)(lVar15 + (longlong)puVar21);
        do {
          if (pcVar9[(longlong)(param_4 + (4 - (longlong)puVar21))] != *pcVar9) break;
          pcVar9 = pcVar9 + 1;
          lVar15 = lVar15 + 1;
        } while (pcVar9 + ((longlong)puVar10 - (longlong)puVar21) < param_5);
      }
LAB_14f356679:
      iVar6 = (int)lVar15 + 4;
    }
    else {
      iVar6 = 3 - (uint)((uVar7 & 0xffffff) != 0);
    }
    uVar5 = iVar6 * 8 + 1;
    if ((int)uVar5 < (int)uVar17) {
      uVar5 = uVar17;
    }
  }
  uVar17 = *(uint *)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[0xe]);
  uVar7 = uVar5;
  if (sVar14 == (short)uVar17) {
    uVar17 = uVar17 ^ uVar20;
    if (uVar17 == 0) {
      puVar10 = (ulonglong *)(param_4 + 4);
      puVar21 = (uint *)((longlong)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[0xe]) + 4)
      ;
      puVar18 = puVar10;
      if (puVar10 <= param_5 + -8) {
LAB_14f3566e0:
        uVar8 = *(ulonglong *)(((longlong)puVar21 - (longlong)puVar10) + (longlong)puVar18) ^
                *puVar18;
        if (uVar8 == 0) goto code_r0x00014f3566ed;
        uVar3 = 0;
        if (uVar8 != 0) {
          for (; (uVar8 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
          }
        }
        lVar15 = ((uVar3 >> 3) - (longlong)puVar10) + (longlong)puVar18;
        goto LAB_14f35672b;
      }
LAB_14f3566f6:
      lVar15 = (longlong)puVar18 - (longlong)puVar10;
      if (puVar18 < param_5) {
        pcVar9 = (char *)(lVar15 + (longlong)puVar21);
        do {
          if (pcVar9[(longlong)(param_4 + (4 - (longlong)puVar21))] != *pcVar9) break;
          pcVar9 = pcVar9 + 1;
          lVar15 = lVar15 + 1;
        } while (pcVar9 + ((longlong)puVar10 - (longlong)puVar21) < param_5);
      }
LAB_14f35672b:
      iVar6 = (int)lVar15 + 4;
    }
    else {
      iVar6 = 3 - (uint)((uVar17 & 0xffffff) != 0);
    }
    uVar7 = iVar6 * 8;
    if (iVar6 * 8 < (int)uVar5) {
      uVar7 = uVar5;
    }
  }
  iVar6 = (int)uVar7 >> 3;
  if (iVar6 < 4) {
    iVar16 = 0;
    uVar17 = 0;
    local_58[0] = uVar22 - *puVar2 & 0x3ffffff;
    lVar15 = (longlong)(param_6 + -1);
    if (((*puVar2 ^ uVar1) & 0xfc000000) == 0) {
      uVar20 = 1;
      uVar17 = 0;
      do {
        uVar5 = 0;
        if (uVar20 != 0) {
          for (; (uVar20 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
          }
        }
        uVar20 = uVar20 & uVar20 - 1;
        uVar5 = local_58[uVar5];
        if (uVar5 < param_8) {
          uVar19 = 8;
          if (8 < uVar5) {
            uVar19 = uVar5;
          }
          if ((lVar15 < (longlong)param_5 - (longlong)param_4) &&
             (param_4[lVar15] == param_4[lVar15 - (ulonglong)uVar19])) {
            puVar10 = (ulonglong *)param_4;
            if (param_4 <= param_5 + -8) {
LAB_14f356850:
              uVar8 = *(ulonglong *)(-(ulonglong)uVar19 + (longlong)puVar10) ^ *puVar10;
              if (uVar8 == 0) goto code_r0x00014f356859;
              uVar3 = 0;
              if (uVar8 != 0) {
                for (; (uVar8 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
                }
              }
              lVar13 = ((uVar3 >> 3) - (longlong)param_4) + (longlong)puVar10;
              goto LAB_14f356888;
            }
LAB_14f356865:
            lVar13 = (longlong)puVar10 - (longlong)param_4;
            for (puVar11 = param_4 + lVar13;
                (puVar11 < param_5 && (*puVar11 == puVar11[-(ulonglong)uVar19]));
                puVar11 = puVar11 + 1) {
              lVar13 = lVar13 + 1;
            }
LAB_14f356888:
            if (lVar15 < lVar13) {
              iVar12 = (int)lVar13;
              lVar15 = lVar13;
              if (((param_9->farMatchOffsetLog2 < 1) ||
                  ((int)uVar19 < 1 << ((byte)param_9->farMatchOffsetLog2 & 0x1f))) ||
                 (param_9->farMatchMinLen <= iVar12)) {
                if (0xfffff < (int)uVar19) {
                  if ((int)uVar19 < 0x400000) {
                    if ((int)uVar19 < 0x200000) {
                      bVar24 = SBORROW4(iVar12,5);
                      bVar23 = iVar12 + -5 < 0;
                    }
                    else {
                      bVar24 = SBORROW4(iVar12,6);
                      bVar23 = iVar12 + -6 < 0;
                    }
                  }
                  else {
                    bVar24 = SBORROW4(iVar12,8);
                    bVar23 = iVar12 + -8 < 0;
                  }
                  if (bVar24 != bVar23) goto code_r0x00014f356900;
                }
                if ((5 < iVar12) || ((int)uVar19 < max_offset[iVar12])) {
                  iVar16 = iVar12;
                  uVar17 = uVar19;
                }
              }
            }
          }
        }
code_r0x00014f356900:
      } while (uVar20 != 0);
    }
    *puVar2 = (uVar22 ^ uVar1) & 0x3ffffff ^ uVar1;
    if (uVar17 == 0) {
      if (iVar6 < 2) {
        return false;
      }
    }
    else if ((iVar6 < 2) ||
            (((iVar6 + 1 < iVar16 && ((iVar6 + 2 < iVar16 || ((int)uVar17 < 0x400)))) &&
             ((iVar6 + 3 < iVar16 || ((int)uVar17 < 0x10000)))))) {
      param_1->ml = iVar16;
      param_1->off = uVar17;
      return true;
    }
    param_1->ml = iVar6;
    param_1->off = (uVar7 & 7) - 6;
  }
  else {
    param_1->ml = iVar6;
    param_1->off = (uVar7 & 7) - 6;
    *puVar2 = (uVar22 ^ uVar1) & 0x3ffffff ^ uVar1;
  }
  return true;
code_r0x00014f3562ce:
  puVar10 = puVar10 + 1;
  if (param_5 + -8 < puVar10) goto LAB_14f3562d7;
  goto LAB_14f3562c5;
code_r0x00014f356379:
  puVar18 = puVar18 + 1;
  if (param_5 + -8 < puVar18) goto LAB_14f356385;
  goto LAB_14f356370;
code_r0x00014f356429:
  puVar18 = puVar18 + 1;
  if (param_5 + -8 < puVar18) goto LAB_14f356432;
  goto LAB_14f356420;
code_r0x00014f3564d9:
  puVar18 = puVar18 + 1;
  if (param_5 + -8 < puVar18) goto LAB_14f3564e5;
  goto LAB_14f3564d0;
code_r0x00014f356589:
  puVar18 = puVar18 + 1;
  if (param_5 + -8 < puVar18) goto LAB_14f356592;
  goto LAB_14f356580;
code_r0x00014f356639:
  puVar18 = puVar18 + 1;
  if (param_5 + -8 < puVar18) goto LAB_14f356645;
  goto LAB_14f356630;
code_r0x00014f3566ed:
  puVar18 = puVar18 + 1;
  if (param_5 + -8 < puVar18) goto LAB_14f3566f6;
  goto LAB_14f3566e0;
code_r0x00014f356859:
  puVar10 = puVar10 + 1;
  if (param_5 + -8 < puVar10) goto LAB_14f356865;
  goto LAB_14f356850;
}

// newLZHC_get_match_heuristic_inline<oo2::CTMF<unsigned_int,1,0,4>_> @ 14f3569c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
oo2::newLZHC_get_match_heuristic_inline<oo2::CTMF<unsigned_int,1,0,4>_>
          (match *param_1,CTMF<unsigned_int,1,0,4> *param_2,int param_3,newLZHC_LOs *param_4,
          uchar *param_5,uchar *param_6,int param_7,uchar *param_8,uint param_9,
          OodleLZ_CompressOptions *param_10)

{
  uint uVar1;
  uint *puVar2;
  ulonglong uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  char *pcVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  short sVar17;
  uint uVar18;
  char *pcVar19;
  uint uVar20;
  bool bVar21;
  bool bVar22;
  undefined1 local_78 [32];
  uint local_58 [4];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)local_78;
  puVar2 = param_2->m_next_row;
  uVar1 = param_2->m_next_hash;
  uVar20 = (int)param_5 - *(int *)&param_2->m_base_ptr;
  uVar18 = *(uint *)param_5;
  param_2->m_next_ptr = param_5 + param_3;
  bVar4 = (byte)param_2->m_table_size_bits & 0x1f;
  uVar11 = (uint)(param_2->m_hash_mul * *(longlong *)(param_5 + param_3) >> 0x20);
  uVar11 = uVar11 << bVar4 | uVar11 >> 0x20 - bVar4;
  param_2->m_next_hash = uVar11;
  param_2->m_next_row = (param_2->m_hash_table).m_ptr + (param_2->m_hash_row_mask & uVar11);
  uVar11 = 7;
  uVar5 = *(uint *)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[8]);
  sVar17 = (short)uVar18;
  if (sVar17 == (short)uVar5) {
    uVar5 = uVar5 ^ uVar18;
    if (uVar5 == 0) {
      puVar8 = (ulonglong *)(param_5 + 4);
      lVar15 = (longlong)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[8]) -
               (longlong)param_5;
      puVar9 = puVar8;
      if (puVar8 <= param_6 + -8) {
LAB_14f356a95:
        uVar10 = *(ulonglong *)(lVar15 + (longlong)puVar9) ^ *puVar9;
        if (uVar10 == 0) goto code_r0x00014f356a9e;
        uVar3 = 0;
        if (uVar10 != 0) {
          for (; (uVar10 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
          }
        }
        iVar6 = ((int)(uVar3 >> 3) - (int)puVar8) + (int)puVar9;
        goto LAB_14f356ac6;
      }
LAB_14f356aa7:
      lVar12 = (longlong)puVar9 - (longlong)puVar8;
      iVar6 = (int)lVar12;
      for (; (puVar9 < param_6 &&
             (iVar6 = (int)lVar12, (char)*puVar9 == *(char *)((longlong)puVar9 + lVar15)));
          puVar9 = (ulonglong *)((longlong)puVar9 + 1)) {
        lVar12 = lVar12 + 1;
        iVar6 = (int)lVar12;
      }
LAB_14f356ac6:
      iVar6 = iVar6 + 4;
    }
    else {
      iVar6 = 3 - (uint)((uVar5 & 0xffffff) != 0);
    }
    uVar11 = iVar6 * 8 + 6;
    if ((int)uVar11 < 7) {
      uVar11 = 7;
    }
  }
  uVar7 = *(uint *)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[9]);
  uVar5 = uVar11;
  if (sVar17 == (short)uVar7) {
    uVar7 = uVar7 ^ uVar18;
    if (uVar7 == 0) {
      puVar8 = (ulonglong *)(param_5 + 4);
      lVar15 = (longlong)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[9]) -
               (longlong)param_5;
      puVar9 = puVar8;
      if (puVar8 <= param_6 + -8) {
LAB_14f356b20:
        uVar10 = *(ulonglong *)(lVar15 + (longlong)puVar9) ^ *puVar9;
        if (uVar10 == 0) goto code_r0x00014f356b29;
        uVar3 = 0;
        if (uVar10 != 0) {
          for (; (uVar10 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
          }
        }
        iVar6 = ((int)(uVar3 >> 3) - (int)puVar8) + (int)puVar9;
        goto LAB_14f356b54;
      }
LAB_14f356b32:
      lVar12 = (longlong)puVar9 - (longlong)puVar8;
      iVar6 = (int)lVar12;
      for (; (puVar9 < param_6 &&
             (iVar6 = (int)lVar12, (char)*puVar9 == *(char *)((longlong)puVar9 + lVar15)));
          puVar9 = (ulonglong *)((longlong)puVar9 + 1)) {
        lVar12 = lVar12 + 1;
        iVar6 = (int)lVar12;
      }
LAB_14f356b54:
      iVar6 = iVar6 + 4;
    }
    else {
      iVar6 = 3 - (uint)((uVar7 & 0xffffff) != 0);
    }
    uVar5 = iVar6 * 8 + 5;
    if ((int)uVar5 < (int)uVar11) {
      uVar5 = uVar11;
    }
  }
  uVar7 = *(uint *)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[10]);
  uVar11 = uVar5;
  if (sVar17 == (short)uVar7) {
    uVar7 = uVar7 ^ uVar18;
    if (uVar7 == 0) {
      puVar8 = (ulonglong *)(param_5 + 4);
      lVar15 = (longlong)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[10]) -
               (longlong)param_5;
      puVar9 = puVar8;
      if (puVar8 <= param_6 + -8) {
LAB_14f356bb0:
        uVar10 = *(ulonglong *)(lVar15 + (longlong)puVar9) ^ *puVar9;
        if (uVar10 == 0) goto code_r0x00014f356bb9;
        uVar3 = 0;
        if (uVar10 != 0) {
          for (; (uVar10 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
          }
        }
        iVar6 = ((int)(uVar3 >> 3) - (int)puVar8) + (int)puVar9;
        goto LAB_14f356be5;
      }
LAB_14f356bc5:
      lVar12 = (longlong)puVar9 - (longlong)puVar8;
      iVar6 = (int)lVar12;
      for (; (puVar9 < param_6 &&
             (iVar6 = (int)lVar12, (char)*puVar9 == *(char *)((longlong)puVar9 + lVar15)));
          puVar9 = (ulonglong *)((longlong)puVar9 + 1)) {
        lVar12 = lVar12 + 1;
        iVar6 = (int)lVar12;
      }
LAB_14f356be5:
      iVar6 = iVar6 + 4;
    }
    else {
      iVar6 = 3 - (uint)((uVar7 & 0xffffff) != 0);
    }
    uVar11 = iVar6 * 8 + 4;
    if ((int)uVar11 < (int)uVar5) {
      uVar11 = uVar5;
    }
  }
  uVar7 = *(uint *)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[0xb]);
  uVar5 = uVar11;
  if (sVar17 == (short)uVar7) {
    uVar7 = uVar7 ^ uVar18;
    if (uVar7 == 0) {
      puVar8 = (ulonglong *)(param_5 + 4);
      lVar15 = (longlong)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[0xb]) -
               (longlong)param_5;
      puVar9 = puVar8;
      if (puVar8 <= param_6 + -8) {
LAB_14f356c45:
        uVar10 = *(ulonglong *)(lVar15 + (longlong)puVar9) ^ *puVar9;
        if (uVar10 == 0) goto code_r0x00014f356c4e;
        uVar3 = 0;
        if (uVar10 != 0) {
          for (; (uVar10 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
          }
        }
        iVar6 = ((int)(uVar3 >> 3) - (int)puVar8) + (int)puVar9;
        goto LAB_14f356c79;
      }
LAB_14f356c57:
      lVar12 = (longlong)puVar9 - (longlong)puVar8;
      iVar6 = (int)lVar12;
      for (; (puVar9 < param_6 &&
             (iVar6 = (int)lVar12, (char)*puVar9 == *(char *)((longlong)puVar9 + lVar15)));
          puVar9 = (ulonglong *)((longlong)puVar9 + 1)) {
        lVar12 = lVar12 + 1;
        iVar6 = (int)lVar12;
      }
LAB_14f356c79:
      iVar6 = iVar6 + 4;
    }
    else {
      iVar6 = 3 - (uint)((uVar7 & 0xffffff) != 0);
    }
    uVar5 = iVar6 * 8 + 3;
    if ((int)uVar5 < (int)uVar11) {
      uVar5 = uVar11;
    }
  }
  uVar7 = *(uint *)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[0xc]);
  uVar11 = uVar5;
  if (sVar17 == (short)uVar7) {
    uVar7 = uVar7 ^ uVar18;
    if (uVar7 == 0) {
      puVar8 = (ulonglong *)(param_5 + 4);
      lVar15 = (longlong)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[0xc]) -
               (longlong)param_5;
      puVar9 = puVar8;
      if (puVar8 <= param_6 + -8) {
LAB_14f356ce5:
        uVar10 = *(ulonglong *)(lVar15 + (longlong)puVar9) ^ *puVar9;
        if (uVar10 == 0) goto code_r0x00014f356cee;
        uVar3 = 0;
        if (uVar10 != 0) {
          for (; (uVar10 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
          }
        }
        iVar6 = ((int)(uVar3 >> 3) - (int)puVar8) + (int)puVar9;
        goto LAB_14f356d19;
      }
LAB_14f356cf7:
      lVar12 = (longlong)puVar9 - (longlong)puVar8;
      iVar6 = (int)lVar12;
      for (; (puVar9 < param_6 &&
             (iVar6 = (int)lVar12, (char)*puVar9 == *(char *)((longlong)puVar9 + lVar15)));
          puVar9 = (ulonglong *)((longlong)puVar9 + 1)) {
        lVar12 = lVar12 + 1;
        iVar6 = (int)lVar12;
      }
LAB_14f356d19:
      iVar6 = iVar6 + 4;
    }
    else {
      iVar6 = 3 - (uint)((uVar7 & 0xffffff) != 0);
    }
    uVar11 = iVar6 * 8 + 2;
    if ((int)uVar11 < (int)uVar5) {
      uVar11 = uVar5;
    }
  }
  uVar7 = *(uint *)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[0xd]);
  uVar5 = uVar11;
  if (sVar17 == (short)uVar7) {
    uVar7 = uVar7 ^ uVar18;
    if (uVar7 == 0) {
      puVar8 = (ulonglong *)(param_5 + 4);
      lVar15 = (longlong)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[0xd]) -
               (longlong)param_5;
      puVar9 = puVar8;
      if (puVar8 <= param_6 + -8) {
LAB_14f356d85:
        uVar10 = *(ulonglong *)(lVar15 + (longlong)puVar9) ^ *puVar9;
        if (uVar10 == 0) goto code_r0x00014f356d8e;
        uVar3 = 0;
        if (uVar10 != 0) {
          for (; (uVar10 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
          }
        }
        iVar6 = ((int)(uVar3 >> 3) - (int)puVar8) + (int)puVar9;
        goto LAB_14f356db9;
      }
LAB_14f356d97:
      lVar12 = (longlong)puVar9 - (longlong)puVar8;
      iVar6 = (int)lVar12;
      for (; (puVar9 < param_6 &&
             (iVar6 = (int)lVar12, (char)*puVar9 == *(char *)((longlong)puVar9 + lVar15)));
          puVar9 = (ulonglong *)((longlong)puVar9 + 1)) {
        lVar12 = lVar12 + 1;
        iVar6 = (int)lVar12;
      }
LAB_14f356db9:
      iVar6 = iVar6 + 4;
    }
    else {
      iVar6 = 3 - (uint)((uVar7 & 0xffffff) != 0);
    }
    uVar5 = iVar6 * 8 + 1;
    if ((int)uVar5 < (int)uVar11) {
      uVar5 = uVar11;
    }
  }
  uVar11 = *(uint *)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[0xe]);
  uVar7 = uVar5;
  if (sVar17 == (short)uVar11) {
    uVar11 = uVar11 ^ uVar18;
    if (uVar11 == 0) {
      puVar8 = (ulonglong *)(param_5 + 4);
      lVar15 = (longlong)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[0xe]) -
               (longlong)param_5;
      puVar9 = puVar8;
      if (puVar8 <= param_6 + -8) {
LAB_14f356e30:
        uVar10 = *(ulonglong *)(lVar15 + (longlong)puVar9) ^ *puVar9;
        if (uVar10 == 0) goto code_r0x00014f356e3d;
        uVar3 = 0;
        if (uVar10 != 0) {
          for (; (uVar10 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
          }
        }
        iVar6 = ((int)(uVar3 >> 3) - (int)puVar8) + (int)puVar9;
        goto LAB_14f356e65;
      }
LAB_14f356e46:
      lVar12 = (longlong)puVar9 - (longlong)puVar8;
      iVar6 = (int)lVar12;
      for (; (puVar9 < param_6 &&
             (iVar6 = (int)lVar12, (char)*puVar9 == *(char *)((longlong)puVar9 + lVar15)));
          puVar9 = (ulonglong *)((longlong)puVar9 + 1)) {
        lVar12 = lVar12 + 1;
        iVar6 = (int)lVar12;
      }
LAB_14f356e65:
      iVar6 = iVar6 + 4;
    }
    else {
      iVar6 = 3 - (uint)((uVar11 & 0xffffff) != 0);
    }
    uVar7 = iVar6 * 8;
    if (iVar6 * 8 < (int)uVar5) {
      uVar7 = uVar5;
    }
  }
  iVar6 = (int)uVar7 >> 3;
  if (iVar6 < 4) {
    uVar11 = *puVar2;
    uVar18 = 0;
    local_58[0] = uVar20 - uVar11 & 0x3ffffff;
    local_58[1] = uVar20 - puVar2[1] & 0x3ffffff;
    uVar5 = uVar18;
    if (((puVar2[1] ^ uVar1) & 0xfc000000) == 0) {
      uVar5 = 2;
    }
    uVar5 = ((uVar11 ^ uVar1) & 0xfc000000) == 0 | uVar5;
    pcVar19 = (char *)(longlong)(param_7 + -1);
    uVar14 = uVar18;
    if (uVar5 != 0) {
      do {
        uVar11 = 0;
        if (uVar5 != 0) {
          for (; (uVar5 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
          }
        }
        uVar5 = uVar5 & uVar5 - 1;
        uVar11 = local_58[uVar11];
        if (uVar11 < param_9) {
          uVar16 = 8;
          if (8 < uVar11) {
            uVar16 = uVar11;
          }
          if (((longlong)pcVar19 < (longlong)param_6 - (longlong)param_5) &&
             (param_5[(longlong)pcVar19] == pcVar19[(longlong)param_5 - (ulonglong)uVar16])) {
            lVar15 = ((longlong)param_5 - (ulonglong)uVar16) - (longlong)param_5;
            puVar8 = (ulonglong *)param_5;
            if (param_5 <= param_6 + -8) {
LAB_14f356fb0:
              uVar10 = *(ulonglong *)(lVar15 + (longlong)puVar8) ^ *puVar8;
              if (uVar10 == 0) goto code_r0x00014f356fb9;
              uVar3 = 0;
              if (uVar10 != 0) {
                for (; (uVar10 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
                }
              }
              pcVar13 = (char *)(((uVar3 >> 3) - (longlong)param_5) + (longlong)puVar8);
              goto LAB_14f356fe5;
            }
LAB_14f356fc5:
            pcVar13 = (char *)((longlong)puVar8 - (longlong)param_5);
            for (; (puVar8 < param_6 && ((char)*puVar8 == *(char *)(lVar15 + (longlong)puVar8)));
                puVar8 = (ulonglong *)((longlong)puVar8 + 1)) {
              pcVar13 = pcVar13 + 1;
            }
LAB_14f356fe5:
            if ((longlong)pcVar19 < (longlong)pcVar13) {
              uVar11 = (uint)pcVar13;
              pcVar19 = pcVar13;
              if (((param_10->farMatchOffsetLog2 < 1) ||
                  ((int)uVar16 < 1 << ((byte)param_10->farMatchOffsetLog2 & 0x1f))) ||
                 (param_10->farMatchMinLen <= (int)uVar11)) {
                if (0xfffff < (int)uVar16) {
                  if ((int)uVar16 < 0x400000) {
                    if ((int)uVar16 < 0x200000) {
                      bVar22 = SBORROW4(uVar11,5);
                      bVar21 = (int)(uVar11 - 5) < 0;
                    }
                    else {
                      bVar22 = SBORROW4(uVar11,6);
                      bVar21 = (int)(uVar11 - 6) < 0;
                    }
                  }
                  else {
                    bVar22 = SBORROW4(uVar11,8);
                    bVar21 = (int)(uVar11 - 8) < 0;
                  }
                  if (bVar22 != bVar21) goto LAB_14f357093;
                }
                if (((5 < (int)uVar11) || ((int)uVar16 < max_offset[(int)uVar11])) &&
                   ((int)uVar18 <= (int)uVar11)) {
                  if (uVar11 == uVar18) {
                    bVar21 = (int)uVar16 < (int)uVar14;
LAB_14f357089:
                    if (!bVar21) goto LAB_14f357093;
                  }
                  else if ((int)uVar11 <= (int)(uVar18 + 1)) {
                    bVar21 = (int)uVar16 >> 7 <= (int)uVar14;
                    goto LAB_14f357089;
                  }
                  uVar18 = uVar11;
                  uVar14 = uVar16;
                }
              }
            }
          }
        }
LAB_14f357093:
      } while (uVar5 != 0);
      uVar11 = *puVar2;
    }
    puVar2[1] = uVar11;
    *puVar2 = (uVar20 ^ uVar1) & 0x3ffffff ^ uVar1;
    if (uVar14 == 0) {
      if (iVar6 < 2) {
        return false;
      }
    }
    else if ((iVar6 < 2) ||
            (((iVar6 + 1 < (int)uVar18 && ((iVar6 + 2 < (int)uVar18 || ((int)uVar14 < 0x400)))) &&
             ((iVar6 + 3 < (int)uVar18 || ((int)uVar14 < 0x10000)))))) {
      param_1->ml = uVar18;
      param_1->off = uVar14;
      return true;
    }
    param_1->ml = iVar6;
    param_1->off = (uVar7 & 7) - 6;
  }
  else {
    param_1->ml = iVar6;
    param_1->off = (uVar7 & 7) - 6;
    puVar2[1] = *puVar2;
    *puVar2 = (uVar20 ^ uVar1) & 0x3ffffff ^ uVar1;
  }
  return true;
code_r0x00014f356a9e:
  puVar9 = puVar9 + 1;
  if (param_6 + -8 < puVar9) goto LAB_14f356aa7;
  goto LAB_14f356a95;
code_r0x00014f356b29:
  puVar9 = puVar9 + 1;
  if (param_6 + -8 < puVar9) goto LAB_14f356b32;
  goto LAB_14f356b20;
code_r0x00014f356bb9:
  puVar9 = puVar9 + 1;
  if (param_6 + -8 < puVar9) goto LAB_14f356bc5;
  goto LAB_14f356bb0;
code_r0x00014f356c4e:
  puVar9 = puVar9 + 1;
  if (param_6 + -8 < puVar9) goto LAB_14f356c57;
  goto LAB_14f356c45;
code_r0x00014f356cee:
  puVar9 = puVar9 + 1;
  if (param_6 + -8 < puVar9) goto LAB_14f356cf7;
  goto LAB_14f356ce5;
code_r0x00014f356d8e:
  puVar9 = puVar9 + 1;
  if (param_6 + -8 < puVar9) goto LAB_14f356d97;
  goto LAB_14f356d85;
code_r0x00014f356e3d:
  puVar9 = puVar9 + 1;
  if (param_6 + -8 < puVar9) goto LAB_14f356e46;
  goto LAB_14f356e30;
code_r0x00014f356fb9:
  puVar8 = puVar8 + 1;
  if (param_6 + -8 < puVar8) goto LAB_14f356fc5;
  goto LAB_14f356fb0;
}

// newLZHC_get_match_heuristic_inline<oo2::CTMF<unsigned_int,2,8,4>_> @ 14f357160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014f3578d5) */
/* WARNING: Removing unreachable block (ram,0x00014f357692) */
/* WARNING: Removing unreachable block (ram,0x00014f357680) */
/* WARNING: Removing unreachable block (ram,0x00014f3578eb) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
oo2::newLZHC_get_match_heuristic_inline<oo2::CTMF<unsigned_int,2,8,4>_>
          (match *param_1,CTMF<unsigned_int,2,8,4> *param_2,int param_3,newLZHC_LOs *param_4,
          uchar *param_5,uchar *param_6,int param_7,uchar *param_8,uint param_9,
          OodleLZ_CompressOptions *param_10)

{
  uint uVar1;
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  uint *puVar4;
  ulonglong uVar5;
  byte bVar6;
  ushort uVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong *plVar17;
  longlong lVar18;
  char *pcVar19;
  uint uVar20;
  short sVar21;
  longlong lVar22;
  uint uVar23;
  uint uVar24;
  bool bVar25;
  bool bVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 local_98 [48];
  uint local_68 [4];
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)local_98;
  pauVar2 = (undefined1 (*) [16])param_2->m_next_row;
  pauVar3 = (undefined1 (*) [16])param_2->m_next_row_second;
  uVar20 = param_2->m_next_hash;
  puVar4 = (param_2->m_hash_table).m_ptr;
  uVar24 = (int)param_5 - *(int *)&param_2->m_base_ptr;
  uVar1 = *(uint *)param_5;
  plVar17 = (longlong *)(param_5 + param_3);
  param_2->m_next_ptr = (uchar *)plVar17;
  bVar6 = (byte)param_2->m_table_size_bits & 0x1f;
  uVar9 = (uint)(param_2->m_hash_mul * *plVar17 >> 0x20);
  uVar9 = uVar9 << bVar6 | uVar9 >> 0x20 - bVar6;
  param_2->m_next_hash = uVar9;
  param_2->m_next_row = puVar4 + (param_2->m_hash_row_mask & uVar9);
  param_2->m_next_row_second =
       puVar4 + ((ulonglong)(*plVar17 * -0x30e44323485a9b9d) >>
                 (0x40U - (char)param_2->m_table_size_bits & 0x3f) & 0xfffffffffffffffc);
  uVar9 = 7;
  uVar10 = *(uint *)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[8]);
  sVar21 = (short)uVar1;
  if (sVar21 == (short)uVar10) {
    uVar10 = uVar10 ^ uVar1;
    if (uVar10 == 0) {
      puVar13 = (ulonglong *)(param_5 + 4);
      lVar22 = (longlong)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[8]) -
               (longlong)param_5;
      puVar14 = puVar13;
      if (puVar13 <= param_6 + -8) {
LAB_14f357270:
        uVar15 = *(ulonglong *)(lVar22 + (longlong)puVar14) ^ *puVar14;
        if (uVar15 == 0) goto code_r0x00014f357279;
        uVar5 = 0;
        if (uVar15 != 0) {
          for (; (uVar15 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
          }
        }
        iVar11 = ((int)(uVar5 >> 3) - (int)puVar13) + (int)puVar14;
        goto LAB_14f3572a5;
      }
LAB_14f357285:
      lVar18 = (longlong)puVar14 - (longlong)puVar13;
      iVar11 = (int)lVar18;
      for (; (puVar14 < param_6 &&
             (iVar11 = (int)lVar18, (char)*puVar14 == *(char *)((longlong)puVar14 + lVar22)));
          puVar14 = (ulonglong *)((longlong)puVar14 + 1)) {
        lVar18 = lVar18 + 1;
        iVar11 = (int)lVar18;
      }
LAB_14f3572a5:
      iVar11 = iVar11 + 4;
    }
    else {
      iVar11 = 3 - (uint)((uVar10 & 0xffffff) != 0);
    }
    uVar9 = iVar11 * 8 + 6;
    if ((int)uVar9 < 7) {
      uVar9 = 7;
    }
  }
  uVar12 = *(uint *)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[9]);
  uVar10 = uVar9;
  if (sVar21 == (short)uVar12) {
    uVar12 = uVar12 ^ uVar1;
    if (uVar12 == 0) {
      puVar13 = (ulonglong *)(param_5 + 4);
      lVar22 = (longlong)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[9]) -
               (longlong)param_5;
      puVar14 = puVar13;
      if (puVar13 <= param_6 + -8) {
LAB_14f357300:
        uVar15 = *(ulonglong *)(lVar22 + (longlong)puVar14) ^ *puVar14;
        if (uVar15 == 0) goto code_r0x00014f357309;
        uVar5 = 0;
        if (uVar15 != 0) {
          for (; (uVar15 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
          }
        }
        iVar11 = ((int)(uVar5 >> 3) - (int)puVar13) + (int)puVar14;
        goto LAB_14f357334;
      }
LAB_14f357312:
      lVar18 = (longlong)puVar14 - (longlong)puVar13;
      iVar11 = (int)lVar18;
      for (; (puVar14 < param_6 &&
             (iVar11 = (int)lVar18, (char)*puVar14 == *(char *)((longlong)puVar14 + lVar22)));
          puVar14 = (ulonglong *)((longlong)puVar14 + 1)) {
        lVar18 = lVar18 + 1;
        iVar11 = (int)lVar18;
      }
LAB_14f357334:
      iVar11 = iVar11 + 4;
    }
    else {
      iVar11 = 3 - (uint)((uVar12 & 0xffffff) != 0);
    }
    uVar10 = iVar11 * 8 + 5;
    if ((int)uVar10 < (int)uVar9) {
      uVar10 = uVar9;
    }
  }
  uVar12 = *(uint *)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[10]);
  uVar9 = uVar10;
  if (sVar21 == (short)uVar12) {
    uVar12 = uVar12 ^ uVar1;
    if (uVar12 == 0) {
      puVar13 = (ulonglong *)(param_5 + 4);
      lVar22 = (longlong)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[10]) -
               (longlong)param_5;
      puVar14 = puVar13;
      if (puVar13 <= param_6 + -8) {
LAB_14f357395:
        uVar15 = *(ulonglong *)(lVar22 + (longlong)puVar14) ^ *puVar14;
        if (uVar15 == 0) goto code_r0x00014f35739e;
        uVar5 = 0;
        if (uVar15 != 0) {
          for (; (uVar15 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
          }
        }
        iVar11 = ((int)(uVar5 >> 3) - (int)puVar13) + (int)puVar14;
        goto LAB_14f3573c6;
      }
LAB_14f3573a7:
      lVar18 = (longlong)puVar14 - (longlong)puVar13;
      iVar11 = (int)lVar18;
      for (; (puVar14 < param_6 &&
             (iVar11 = (int)lVar18, (char)*puVar14 == *(char *)((longlong)puVar14 + lVar22)));
          puVar14 = (ulonglong *)((longlong)puVar14 + 1)) {
        lVar18 = lVar18 + 1;
        iVar11 = (int)lVar18;
      }
LAB_14f3573c6:
      iVar11 = iVar11 + 4;
    }
    else {
      iVar11 = 3 - (uint)((uVar12 & 0xffffff) != 0);
    }
    uVar9 = iVar11 * 8 + 4;
    if ((int)uVar9 < (int)uVar10) {
      uVar9 = uVar10;
    }
  }
  uVar12 = *(uint *)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[0xb]);
  uVar10 = uVar9;
  if (sVar21 == (short)uVar12) {
    uVar12 = uVar12 ^ uVar1;
    if (uVar12 == 0) {
      puVar13 = (ulonglong *)(param_5 + 4);
      lVar22 = (longlong)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[0xb]) -
               (longlong)param_5;
      puVar14 = puVar13;
      if (puVar13 <= param_6 + -8) {
LAB_14f357425:
        uVar15 = *(ulonglong *)(lVar22 + (longlong)puVar14) ^ *puVar14;
        if (uVar15 == 0) goto code_r0x00014f35742e;
        uVar5 = 0;
        if (uVar15 != 0) {
          for (; (uVar15 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
          }
        }
        iVar11 = ((int)(uVar5 >> 3) - (int)puVar13) + (int)puVar14;
        goto LAB_14f357459;
      }
LAB_14f357437:
      lVar18 = (longlong)puVar14 - (longlong)puVar13;
      iVar11 = (int)lVar18;
      for (; (puVar14 < param_6 &&
             (iVar11 = (int)lVar18, (char)*puVar14 == *(char *)((longlong)puVar14 + lVar22)));
          puVar14 = (ulonglong *)((longlong)puVar14 + 1)) {
        lVar18 = lVar18 + 1;
        iVar11 = (int)lVar18;
      }
LAB_14f357459:
      iVar11 = iVar11 + 4;
    }
    else {
      iVar11 = 3 - (uint)((uVar12 & 0xffffff) != 0);
    }
    uVar10 = iVar11 * 8 + 3;
    if ((int)uVar10 < (int)uVar9) {
      uVar10 = uVar9;
    }
  }
  uVar12 = *(uint *)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[0xc]);
  uVar9 = uVar10;
  if (sVar21 == (short)uVar12) {
    uVar12 = uVar12 ^ uVar1;
    if (uVar12 == 0) {
      puVar13 = (ulonglong *)(param_5 + 4);
      lVar22 = (longlong)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[0xc]) -
               (longlong)param_5;
      puVar14 = puVar13;
      if (puVar13 <= param_6 + -8) {
LAB_14f3574c0:
        uVar15 = *(ulonglong *)(lVar22 + (longlong)puVar14) ^ *puVar14;
        if (uVar15 == 0) goto code_r0x00014f3574c9;
        uVar5 = 0;
        if (uVar15 != 0) {
          for (; (uVar15 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
          }
        }
        iVar11 = ((int)(uVar5 >> 3) - (int)puVar13) + (int)puVar14;
        goto LAB_14f3574f4;
      }
LAB_14f3574d2:
      lVar18 = (longlong)puVar14 - (longlong)puVar13;
      iVar11 = (int)lVar18;
      for (; (puVar14 < param_6 &&
             (iVar11 = (int)lVar18, (char)*puVar14 == *(char *)((longlong)puVar14 + lVar22)));
          puVar14 = (ulonglong *)((longlong)puVar14 + 1)) {
        lVar18 = lVar18 + 1;
        iVar11 = (int)lVar18;
      }
LAB_14f3574f4:
      iVar11 = iVar11 + 4;
    }
    else {
      iVar11 = 3 - (uint)((uVar12 & 0xffffff) != 0);
    }
    uVar9 = iVar11 * 8 + 2;
    if ((int)uVar9 < (int)uVar10) {
      uVar9 = uVar10;
    }
  }
  uVar12 = *(uint *)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[0xd]);
  uVar10 = uVar9;
  if (sVar21 == (short)uVar12) {
    uVar12 = uVar12 ^ uVar1;
    if (uVar12 == 0) {
      puVar13 = (ulonglong *)(param_5 + 4);
      lVar22 = (longlong)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[0xd]) -
               (longlong)param_5;
      puVar14 = puVar13;
      if (puVar13 <= param_6 + -8) {
LAB_14f357555:
        uVar15 = *(ulonglong *)(lVar22 + (longlong)puVar14) ^ *puVar14;
        if (uVar15 == 0) goto code_r0x00014f35755e;
        uVar5 = 0;
        if (uVar15 != 0) {
          for (; (uVar15 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
          }
        }
        iVar11 = ((int)(uVar5 >> 3) - (int)puVar13) + (int)puVar14;
        goto LAB_14f357586;
      }
LAB_14f357567:
      lVar18 = (longlong)puVar14 - (longlong)puVar13;
      iVar11 = (int)lVar18;
      for (; (puVar14 < param_6 &&
             (iVar11 = (int)lVar18, (char)*puVar14 == *(char *)(lVar22 + (longlong)puVar14)));
          puVar14 = (ulonglong *)((longlong)puVar14 + 1)) {
        lVar18 = lVar18 + 1;
        iVar11 = (int)lVar18;
      }
LAB_14f357586:
      iVar11 = iVar11 + 4;
    }
    else {
      iVar11 = 3 - (uint)((uVar12 & 0xffffff) != 0);
    }
    uVar10 = iVar11 * 8 + 1;
    if ((int)uVar10 < (int)uVar9) {
      uVar10 = uVar9;
    }
  }
  uVar9 = *(uint *)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[0xe]);
  uVar12 = uVar10;
  if (sVar21 == (short)uVar9) {
    uVar9 = uVar9 ^ uVar1;
    if (uVar9 == 0) {
      puVar13 = (ulonglong *)(param_5 + 4);
      lVar22 = (longlong)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[0xe]) -
               (longlong)param_5;
      puVar14 = puVar13;
      if (puVar13 <= param_6 + -8) {
LAB_14f3575f0:
        uVar15 = *(ulonglong *)(lVar22 + (longlong)puVar14) ^ *puVar14;
        if (uVar15 == 0) goto code_r0x00014f3575fd;
        uVar5 = 0;
        if (uVar15 != 0) {
          for (; (uVar15 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
          }
        }
        iVar11 = ((int)(uVar5 >> 3) - (int)puVar13) + (int)puVar14;
        goto LAB_14f357625;
      }
LAB_14f357606:
      lVar18 = (longlong)puVar14 - (longlong)puVar13;
      iVar11 = (int)lVar18;
      for (; (puVar14 < param_6 &&
             (iVar11 = (int)lVar18, (char)*puVar14 == *(char *)(lVar22 + (longlong)puVar14)));
          puVar14 = (ulonglong *)((longlong)puVar14 + 1)) {
        lVar18 = lVar18 + 1;
        iVar11 = (int)lVar18;
      }
LAB_14f357625:
      iVar11 = iVar11 + 4;
    }
    else {
      iVar11 = 3 - (uint)((uVar9 & 0xffffff) != 0);
    }
    uVar12 = iVar11 * 8;
    if (iVar11 * 8 < (int)uVar10) {
      uVar12 = uVar10;
    }
  }
  uVar20 = uVar20 & 0xfc000000;
  iVar11 = (int)uVar12 >> 3;
  if (iVar11 < 4) {
    auVar29 = *pauVar2;
    auVar28 = *pauVar3;
    local_58 = uVar24 - auVar28._0_4_ & ___xmm_03ffffff03ffffff03ffffff03ffffff;
    uStack_54 = uVar24 - auVar28._4_4_ & _UNK_1531da904;
    uStack_50 = uVar24 - auVar28._8_4_ & _UNK_1531da908;
    uStack_4c = uVar24 - auVar28._12_4_ & _UNK_1531da90c;
    local_68[0] = uVar24 - auVar29._0_4_ & ___xmm_03ffffff03ffffff03ffffff03ffffff;
    local_68[1] = uVar24 - auVar29._4_4_ & _UNK_1531da904;
    local_68[2] = uVar24 - auVar29._8_4_ & _UNK_1531da908;
    local_68[3] = uVar24 - auVar29._12_4_ & _UNK_1531da90c;
    auVar30 = ___xmm_fc000000fc000000fc000000fc000000 & auVar29;
    auVar28 = ___xmm_fc000000fc000000fc000000fc000000 & auVar28;
    auVar31._0_4_ = -(uint)(auVar30._0_4_ == uVar20);
    auVar31._4_4_ = -(uint)(auVar30._4_4_ == uVar20);
    auVar31._8_4_ = -(uint)(auVar30._8_4_ == uVar20);
    auVar31._12_4_ = -(uint)(auVar30._12_4_ == uVar20);
    auVar30._0_4_ = -(uint)(auVar28._0_4_ == uVar20);
    auVar30._4_4_ = -(uint)(auVar28._4_4_ == uVar20);
    auVar30._8_4_ = -(uint)(auVar28._8_4_ == uVar20);
    auVar30._12_4_ = -(uint)(auVar28._12_4_ == uVar20);
    auVar28 = packssdw(auVar31,auVar30);
    auVar28 = packsswb(auVar28,ZEXT816(0));
    uVar7 = (ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe |
            (ushort)(byte)(auVar28[0xf] >> 7) << 0xf;
    uVar9 = (uint)uVar7;
    if (pauVar2 == pauVar3) {
      uVar9 = uVar7 & 0xf;
    }
    uVar1 = 0;
    uVar10 = 0;
    pcVar8 = (char *)(longlong)(param_7 + -1);
joined_r0x00014f35774b:
    if (uVar9 != 0) {
      uVar16 = 0;
      if (uVar9 != 0) {
        for (; (uVar9 >> uVar16 & 1) == 0; uVar16 = uVar16 + 1) {
        }
      }
      uVar9 = uVar9 & uVar9 - 1;
      uVar16 = local_68[uVar16];
      if (uVar16 < param_9) {
        uVar23 = 8;
        if (8 < uVar16) {
          uVar23 = uVar16;
        }
        if (((longlong)pcVar8 < (longlong)param_6 - (longlong)param_5) &&
           (param_5[(longlong)pcVar8] == pcVar8[(longlong)param_5 - (ulonglong)uVar23])) {
          lVar22 = ((longlong)param_5 - (ulonglong)uVar23) - (longlong)param_5;
          puVar13 = (ulonglong *)param_5;
          if (param_5 <= param_6 + -8) {
LAB_14f3577d0:
            uVar15 = *(ulonglong *)(lVar22 + (longlong)puVar13) ^ *puVar13;
            if (uVar15 == 0) goto code_r0x00014f3577d9;
            uVar5 = 0;
            if (uVar15 != 0) {
              for (; (uVar15 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
              }
            }
            pcVar19 = (char *)(((uVar5 >> 3) - (longlong)param_5) + (longlong)puVar13);
            goto LAB_14f357805;
          }
LAB_14f3577e5:
          pcVar19 = (char *)((longlong)puVar13 - (longlong)param_5);
          for (; (puVar13 < param_6 && ((char)*puVar13 == *(char *)(lVar22 + (longlong)puVar13)));
              puVar13 = (ulonglong *)((longlong)puVar13 + 1)) {
            pcVar19 = pcVar19 + 1;
          }
LAB_14f357805:
          if ((longlong)pcVar8 < (longlong)pcVar19) {
            uVar16 = (uint)pcVar19;
            pcVar8 = pcVar19;
            if (((param_10->farMatchOffsetLog2 < 1) ||
                ((int)uVar23 < 1 << ((byte)param_10->farMatchOffsetLog2 & 0x1f))) ||
               (param_10->farMatchMinLen <= (int)uVar16)) {
              if (0xfffff < (int)uVar23) {
                if ((int)uVar23 < 0x400000) {
                  if ((int)uVar23 < 0x200000) {
                    bVar26 = SBORROW4(uVar16,5);
                    bVar25 = (int)(uVar16 - 5) < 0;
                  }
                  else {
                    bVar26 = SBORROW4(uVar16,6);
                    bVar25 = (int)(uVar16 - 6) < 0;
                  }
                }
                else {
                  bVar26 = SBORROW4(uVar16,8);
                  bVar25 = (int)(uVar16 - 8) < 0;
                }
                if (bVar26 != bVar25) goto joined_r0x00014f35774b;
              }
              if (((5 < (int)uVar16) || ((int)uVar23 < max_offset[(int)uVar16])) &&
                 ((int)uVar1 <= (int)uVar16)) {
                if (uVar16 == uVar1) {
                  bVar25 = (int)uVar23 < (int)uVar10;
code_r0x00014f3578a0:
                  if (!bVar25) goto joined_r0x00014f35774b;
                }
                else if ((int)uVar16 <= (int)(uVar1 + 1)) {
                  bVar25 = (int)uVar23 >> 7 <= (int)uVar10;
                  goto code_r0x00014f3578a0;
                }
                uVar1 = uVar16;
                uVar10 = uVar23;
              }
            }
          }
        }
      }
      goto joined_r0x00014f35774b;
    }
    auVar32._0_8_ = auVar29._0_8_ << 0x20;
    auVar32._8_8_ = auVar29._8_8_ << 0x20 | auVar29._0_8_ >> 0x20;
    auVar28 = ZEXT416(uVar24 & 0x3ffffff | uVar20);
    *pauVar2 = auVar32 | auVar28;
    auVar29._0_8_ = *(ulonglong *)*pauVar3 << 0x20;
    auVar29._8_8_ = *(longlong *)(*pauVar3 + 8) << 0x20 | *(ulonglong *)*pauVar3 >> 0x20;
    *pauVar3 = auVar29 | auVar28;
    if (uVar10 == 0) {
      if (iVar11 < 2) {
        return false;
      }
    }
    else if ((iVar11 < 2) ||
            (((iVar11 + 1 < (int)uVar1 && ((iVar11 + 2 < (int)uVar1 || ((int)uVar10 < 0x400)))) &&
             ((iVar11 + 3 < (int)uVar1 || ((int)uVar10 < 0x10000)))))) {
      param_1->ml = uVar1;
      param_1->off = uVar10;
      return true;
    }
    param_1->ml = iVar11;
    param_1->off = (uVar12 & 7) - 6;
  }
  else {
    param_1->ml = iVar11;
    param_1->off = (uVar12 & 7) - 6;
    auVar29 = ZEXT416(uVar24 & 0x3ffffff | uVar20);
    auVar28._0_8_ = *(ulonglong *)*pauVar2 << 0x20;
    auVar28._8_8_ = *(longlong *)(*pauVar2 + 8) << 0x20 | *(ulonglong *)*pauVar2 >> 0x20;
    *pauVar2 = auVar28 | auVar29;
    auVar27._0_8_ = *(ulonglong *)*pauVar3 << 0x20;
    auVar27._8_8_ = *(longlong *)(*pauVar3 + 8) << 0x20 | *(ulonglong *)*pauVar3 >> 0x20;
    *pauVar3 = auVar27 | auVar29;
  }
  return true;
code_r0x00014f357279:
  puVar14 = puVar14 + 1;
  if (param_6 + -8 < puVar14) goto LAB_14f357285;
  goto LAB_14f357270;
code_r0x00014f357309:
  puVar14 = puVar14 + 1;
  if (param_6 + -8 < puVar14) goto LAB_14f357312;
  goto LAB_14f357300;
code_r0x00014f35739e:
  puVar14 = puVar14 + 1;
  if (param_6 + -8 < puVar14) goto LAB_14f3573a7;
  goto LAB_14f357395;
code_r0x00014f35742e:
  puVar14 = puVar14 + 1;
  if (param_6 + -8 < puVar14) goto LAB_14f357437;
  goto LAB_14f357425;
code_r0x00014f3574c9:
  puVar14 = puVar14 + 1;
  if (param_6 + -8 < puVar14) goto LAB_14f3574d2;
  goto LAB_14f3574c0;
code_r0x00014f35755e:
  puVar14 = puVar14 + 1;
  if (param_6 + -8 < puVar14) goto LAB_14f357567;
  goto LAB_14f357555;
code_r0x00014f3575fd:
  puVar14 = puVar14 + 1;
  if (param_6 + -8 < puVar14) goto LAB_14f357606;
  goto LAB_14f3575f0;
code_r0x00014f3577d9:
  puVar13 = puVar13 + 1;
  if (param_6 + -8 < puVar13) goto LAB_14f3577e5;
  goto LAB_14f3577d0;
}

// newLZHC_get_match_heuristic_inline<oo2::CTMF<unsigned_int,3,0,4>_> @ 14f357980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
oo2::newLZHC_get_match_heuristic_inline<oo2::CTMF<unsigned_int,3,0,4>_>
          (match *param_1,CTMF<unsigned_int,3,0,4> *param_2,int param_3,newLZHC_LOs *param_4,
          uchar *param_5,uchar *param_6,int param_7,uchar *param_8,uint param_9,
          OodleLZ_CompressOptions *param_10)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  ulonglong uVar4;
  byte bVar5;
  ushort uVar6;
  uint uVar7;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  char *pcVar19;
  uint uVar20;
  char *pcVar21;
  short sVar22;
  uint uVar23;
  longlong lVar24;
  uint uVar25;
  uint uVar26;
  bool bVar27;
  bool bVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 local_a8 [32];
  uint local_88 [4];
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)local_a8;
  puVar3 = param_2->m_next_row;
  uVar1 = param_2->m_next_hash;
  uVar26 = (int)param_5 - *(int *)&param_2->m_base_ptr;
  uVar2 = *(uint *)param_5;
  param_2->m_next_ptr = param_5 + param_3;
  bVar5 = (byte)param_2->m_table_size_bits & 0x1f;
  uVar16 = (uint)(param_2->m_hash_mul * *(longlong *)(param_5 + param_3) >> 0x20);
  uVar16 = uVar16 << bVar5 | uVar16 >> 0x20 - bVar5;
  param_2->m_next_hash = uVar16;
  param_2->m_next_row = (param_2->m_hash_table).m_ptr + (param_2->m_hash_row_mask & uVar16);
  uVar16 = 7;
  uVar9 = *(uint *)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[8]);
  sVar22 = (short)uVar2;
  if (sVar22 == (short)uVar9) {
    uVar9 = uVar9 ^ uVar2;
    if (uVar9 == 0) {
      puVar13 = (ulonglong *)(param_5 + 4);
      lVar24 = (longlong)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[8]) -
               (longlong)param_5;
      puVar14 = puVar13;
      if (puVar13 <= param_6 + -8) {
LAB_14f357a55:
        uVar15 = *(ulonglong *)(lVar24 + (longlong)puVar14) ^ *puVar14;
        if (uVar15 == 0) goto code_r0x00014f357a5e;
        uVar4 = 0;
        if (uVar15 != 0) {
          for (; (uVar15 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
          }
        }
        iVar10 = ((int)(uVar4 >> 3) - (int)puVar13) + (int)puVar14;
        goto LAB_14f357a86;
      }
LAB_14f357a67:
      lVar18 = (longlong)puVar14 - (longlong)puVar13;
      iVar10 = (int)lVar18;
      for (; (puVar14 < param_6 &&
             (iVar10 = (int)lVar18, (char)*puVar14 == *(char *)((longlong)puVar14 + lVar24)));
          puVar14 = (ulonglong *)((longlong)puVar14 + 1)) {
        lVar18 = lVar18 + 1;
        iVar10 = (int)lVar18;
      }
LAB_14f357a86:
      iVar10 = iVar10 + 4;
    }
    else {
      iVar10 = 3 - (uint)((uVar9 & 0xffffff) != 0);
    }
    uVar16 = iVar10 * 8 + 6;
    if ((int)uVar16 < 7) {
      uVar16 = 7;
    }
  }
  uVar11 = *(uint *)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[9]);
  uVar9 = uVar16;
  if (sVar22 == (short)uVar11) {
    uVar11 = uVar11 ^ uVar2;
    if (uVar11 == 0) {
      puVar13 = (ulonglong *)(param_5 + 4);
      lVar24 = (longlong)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[9]) -
               (longlong)param_5;
      puVar14 = puVar13;
      if (puVar13 <= param_6 + -8) {
LAB_14f357ae0:
        uVar15 = *(ulonglong *)(lVar24 + (longlong)puVar14) ^ *puVar14;
        if (uVar15 == 0) goto code_r0x00014f357ae9;
        uVar4 = 0;
        if (uVar15 != 0) {
          for (; (uVar15 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
          }
        }
        iVar10 = ((int)(uVar4 >> 3) - (int)puVar13) + (int)puVar14;
        goto LAB_14f357b14;
      }
LAB_14f357af2:
      lVar18 = (longlong)puVar14 - (longlong)puVar13;
      iVar10 = (int)lVar18;
      for (; (puVar14 < param_6 &&
             (iVar10 = (int)lVar18, (char)*puVar14 == *(char *)((longlong)puVar14 + lVar24)));
          puVar14 = (ulonglong *)((longlong)puVar14 + 1)) {
        lVar18 = lVar18 + 1;
        iVar10 = (int)lVar18;
      }
LAB_14f357b14:
      iVar10 = iVar10 + 4;
    }
    else {
      iVar10 = 3 - (uint)((uVar11 & 0xffffff) != 0);
    }
    uVar9 = iVar10 * 8 + 5;
    if ((int)uVar9 < (int)uVar16) {
      uVar9 = uVar16;
    }
  }
  uVar11 = *(uint *)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[10]);
  uVar16 = uVar9;
  if (sVar22 == (short)uVar11) {
    uVar11 = uVar11 ^ uVar2;
    if (uVar11 == 0) {
      puVar13 = (ulonglong *)(param_5 + 4);
      lVar24 = (longlong)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[10]) -
               (longlong)param_5;
      puVar14 = puVar13;
      if (puVar13 <= param_6 + -8) {
LAB_14f357b70:
        uVar15 = *(ulonglong *)(lVar24 + (longlong)puVar14) ^ *puVar14;
        if (uVar15 == 0) goto code_r0x00014f357b79;
        uVar4 = 0;
        if (uVar15 != 0) {
          for (; (uVar15 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
          }
        }
        iVar10 = ((int)(uVar4 >> 3) - (int)puVar13) + (int)puVar14;
        goto LAB_14f357ba5;
      }
LAB_14f357b85:
      lVar18 = (longlong)puVar14 - (longlong)puVar13;
      iVar10 = (int)lVar18;
      for (; (puVar14 < param_6 &&
             (iVar10 = (int)lVar18, (char)*puVar14 == *(char *)((longlong)puVar14 + lVar24)));
          puVar14 = (ulonglong *)((longlong)puVar14 + 1)) {
        lVar18 = lVar18 + 1;
        iVar10 = (int)lVar18;
      }
LAB_14f357ba5:
      iVar10 = iVar10 + 4;
    }
    else {
      iVar10 = 3 - (uint)((uVar11 & 0xffffff) != 0);
    }
    uVar16 = iVar10 * 8 + 4;
    if ((int)uVar16 < (int)uVar9) {
      uVar16 = uVar9;
    }
  }
  uVar11 = *(uint *)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[0xb]);
  uVar9 = uVar16;
  if (sVar22 == (short)uVar11) {
    uVar11 = uVar11 ^ uVar2;
    if (uVar11 == 0) {
      puVar13 = (ulonglong *)(param_5 + 4);
      lVar24 = (longlong)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[0xb]) -
               (longlong)param_5;
      puVar14 = puVar13;
      if (puVar13 <= param_6 + -8) {
LAB_14f357c05:
        uVar15 = *(ulonglong *)(lVar24 + (longlong)puVar14) ^ *puVar14;
        if (uVar15 == 0) goto code_r0x00014f357c0e;
        uVar4 = 0;
        if (uVar15 != 0) {
          for (; (uVar15 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
          }
        }
        iVar10 = ((int)(uVar4 >> 3) - (int)puVar13) + (int)puVar14;
        goto LAB_14f357c39;
      }
LAB_14f357c17:
      lVar18 = (longlong)puVar14 - (longlong)puVar13;
      iVar10 = (int)lVar18;
      for (; (puVar14 < param_6 &&
             (iVar10 = (int)lVar18, (char)*puVar14 == *(char *)((longlong)puVar14 + lVar24)));
          puVar14 = (ulonglong *)((longlong)puVar14 + 1)) {
        lVar18 = lVar18 + 1;
        iVar10 = (int)lVar18;
      }
LAB_14f357c39:
      iVar10 = iVar10 + 4;
    }
    else {
      iVar10 = 3 - (uint)((uVar11 & 0xffffff) != 0);
    }
    uVar9 = iVar10 * 8 + 3;
    if ((int)uVar9 < (int)uVar16) {
      uVar9 = uVar16;
    }
  }
  uVar11 = *(uint *)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[0xc]);
  uVar16 = uVar9;
  if (sVar22 == (short)uVar11) {
    uVar11 = uVar11 ^ uVar2;
    if (uVar11 == 0) {
      puVar13 = (ulonglong *)(param_5 + 4);
      lVar24 = (longlong)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[0xc]) -
               (longlong)param_5;
      puVar14 = puVar13;
      if (puVar13 <= param_6 + -8) {
LAB_14f357c95:
        uVar15 = *(ulonglong *)(lVar24 + (longlong)puVar14) ^ *puVar14;
        if (uVar15 == 0) goto code_r0x00014f357c9e;
        uVar4 = 0;
        if (uVar15 != 0) {
          for (; (uVar15 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
          }
        }
        iVar10 = ((int)(uVar4 >> 3) - (int)puVar13) + (int)puVar14;
        goto LAB_14f357cc6;
      }
LAB_14f357ca7:
      lVar18 = (longlong)puVar14 - (longlong)puVar13;
      iVar10 = (int)lVar18;
      for (; (puVar14 < param_6 &&
             (iVar10 = (int)lVar18, (char)*puVar14 == *(char *)((longlong)puVar14 + lVar24)));
          puVar14 = (ulonglong *)((longlong)puVar14 + 1)) {
        lVar18 = lVar18 + 1;
        iVar10 = (int)lVar18;
      }
LAB_14f357cc6:
      iVar10 = iVar10 + 4;
    }
    else {
      iVar10 = 3 - (uint)((uVar11 & 0xffffff) != 0);
    }
    uVar16 = iVar10 * 8 + 2;
    if ((int)uVar16 < (int)uVar9) {
      uVar16 = uVar9;
    }
  }
  uVar11 = *(uint *)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[0xd]);
  uVar9 = uVar16;
  if (sVar22 == (short)uVar11) {
    uVar11 = uVar11 ^ uVar2;
    if (uVar11 == 0) {
      puVar13 = (ulonglong *)(param_5 + 4);
      lVar24 = (longlong)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[0xd]) -
               (longlong)param_5;
      puVar14 = puVar13;
      if (puVar13 <= param_6 + -8) {
LAB_14f357d25:
        uVar15 = *(ulonglong *)(lVar24 + (longlong)puVar14) ^ *puVar14;
        if (uVar15 == 0) goto code_r0x00014f357d2e;
        uVar4 = 0;
        if (uVar15 != 0) {
          for (; (uVar15 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
          }
        }
        iVar10 = ((int)(uVar4 >> 3) - (int)puVar13) + (int)puVar14;
        goto LAB_14f357d59;
      }
LAB_14f357d37:
      lVar18 = (longlong)puVar14 - (longlong)puVar13;
      iVar10 = (int)lVar18;
      for (; (puVar14 < param_6 &&
             (iVar10 = (int)lVar18, (char)*puVar14 == *(char *)((longlong)puVar14 + lVar24)));
          puVar14 = (ulonglong *)((longlong)puVar14 + 1)) {
        lVar18 = lVar18 + 1;
        iVar10 = (int)lVar18;
      }
LAB_14f357d59:
      iVar10 = iVar10 + 4;
    }
    else {
      iVar10 = 3 - (uint)((uVar11 & 0xffffff) != 0);
    }
    uVar9 = iVar10 * 8 + 1;
    if ((int)uVar9 < (int)uVar16) {
      uVar9 = uVar16;
    }
  }
  uVar16 = *(uint *)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[0xe]);
  uVar11 = uVar9;
  if (sVar22 == (short)uVar16) {
    uVar16 = uVar16 ^ uVar2;
    if (uVar16 == 0) {
      puVar13 = (ulonglong *)(param_5 + 4);
      lVar24 = (longlong)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[0xe]) -
               (longlong)param_5;
      puVar14 = puVar13;
      if (puVar13 <= param_6 + -8) {
LAB_14f357dc0:
        uVar15 = *(ulonglong *)(lVar24 + (longlong)puVar14) ^ *puVar14;
        if (uVar15 == 0) goto code_r0x00014f357dcd;
        uVar4 = 0;
        if (uVar15 != 0) {
          for (; (uVar15 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
          }
        }
        iVar10 = ((int)(uVar4 >> 3) - (int)puVar13) + (int)puVar14;
        goto LAB_14f357df9;
      }
LAB_14f357dd6:
      lVar18 = (longlong)puVar14 - (longlong)puVar13;
      iVar10 = (int)lVar18;
      for (; (puVar14 < param_6 &&
             (iVar10 = (int)lVar18, (char)*puVar14 == *(char *)((longlong)puVar14 + lVar24)));
          puVar14 = (ulonglong *)((longlong)puVar14 + 1)) {
        lVar18 = lVar18 + 1;
        iVar10 = (int)lVar18;
      }
LAB_14f357df9:
      iVar10 = iVar10 + 4;
    }
    else {
      iVar10 = 3 - (uint)((uVar16 & 0xffffff) != 0);
    }
    uVar11 = iVar10 * 8;
    if (iVar10 * 8 < (int)uVar9) {
      uVar11 = uVar9;
    }
  }
  iVar10 = (int)uVar11 >> 3;
  if (iVar10 < 4) {
    uVar16 = *puVar3;
    uVar2 = puVar3[1];
    uVar9 = puVar3[2];
    uVar7 = puVar3[3];
    uVar23 = 0;
    uVar12 = uVar1 & 0xfc000000;
    local_78 = uVar26 - puVar3[4] & ___xmm_03ffffff03ffffff03ffffff03ffffff;
    uStack_74 = uVar26 - puVar3[5] & _UNK_1531da904;
    uStack_70 = uVar26 - puVar3[6] & _UNK_1531da908;
    uStack_6c = uVar26 - puVar3[7] & _UNK_1531da90c;
    local_88[0] = uVar26 - uVar16 & ___xmm_03ffffff03ffffff03ffffff03ffffff;
    local_88[1] = uVar26 - uVar2 & _UNK_1531da904;
    local_88[2] = uVar26 - uVar9 & _UNK_1531da908;
    local_88[3] = uVar26 - uVar7 & _UNK_1531da90c;
    auVar29._0_4_ = -(uint)((___xmm_fc000000fc000000fc000000fc000000 & uVar16) == uVar12);
    auVar29._4_4_ = -(uint)((_UNK_1531da914 & uVar2) == uVar12);
    auVar29._8_4_ = -(uint)((_UNK_1531da918 & uVar9) == uVar12);
    auVar29._12_4_ = -(uint)((_UNK_1531da91c & uVar7) == uVar12);
    pcVar21 = (char *)(longlong)(param_7 + -1);
    auVar30._0_4_ = -(uint)((___xmm_fc000000fc000000fc000000fc000000 & puVar3[4]) == uVar12);
    auVar30._4_4_ = -(uint)((_UNK_1531da914 & puVar3[5]) == uVar12);
    auVar30._8_4_ = -(uint)((_UNK_1531da918 & puVar3[6]) == uVar12);
    auVar30._12_4_ = -(uint)((_UNK_1531da91c & puVar3[7]) == uVar12);
    auVar30 = packssdw(auVar29,auVar30);
    auVar30 = packsswb(auVar30,ZEXT816(0));
    uVar6 = (ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
            (ushort)(byte)(auVar30[0xf] >> 7) << 0xf;
    uVar20 = (uint)uVar6;
    uVar12 = uVar23;
    if (uVar6 != 0) {
      do {
        uVar17 = 0;
        if (uVar20 != 0) {
          for (; (uVar20 >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
          }
        }
        uVar20 = uVar20 & uVar20 - 1;
        uVar17 = local_88[uVar17];
        if (uVar17 < param_9) {
          uVar25 = 8;
          if (8 < uVar17) {
            uVar25 = uVar17;
          }
          if (((longlong)pcVar21 < (longlong)param_6 - (longlong)param_5) &&
             (param_5[(longlong)pcVar21] == pcVar21[(longlong)param_5 - (ulonglong)uVar25])) {
            lVar24 = ((longlong)param_5 - (ulonglong)uVar25) - (longlong)param_5;
            puVar13 = (ulonglong *)param_5;
            if (param_5 <= param_6 + -8) {
LAB_14f357f70:
              uVar15 = *(ulonglong *)(lVar24 + (longlong)puVar13) ^ *puVar13;
              if (uVar15 == 0) goto code_r0x00014f357f79;
              uVar4 = 0;
              if (uVar15 != 0) {
                for (; (uVar15 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
                }
              }
              pcVar19 = (char *)(((uVar4 >> 3) - (longlong)param_5) + (longlong)puVar13);
              goto LAB_14f357fa5;
            }
LAB_14f357f85:
            pcVar19 = (char *)((longlong)puVar13 - (longlong)param_5);
            for (; (puVar13 < param_6 && ((char)*puVar13 == *(char *)((longlong)puVar13 + lVar24)));
                puVar13 = (ulonglong *)((longlong)puVar13 + 1)) {
              pcVar19 = pcVar19 + 1;
            }
LAB_14f357fa5:
            if ((longlong)pcVar21 < (longlong)pcVar19) {
              uVar17 = (uint)pcVar19;
              pcVar21 = pcVar19;
              if (((param_10->farMatchOffsetLog2 < 1) ||
                  ((int)uVar25 < 1 << ((byte)param_10->farMatchOffsetLog2 & 0x1f))) ||
                 (param_10->farMatchMinLen <= (int)uVar17)) {
                if (0xfffff < (int)uVar25) {
                  if ((int)uVar25 < 0x400000) {
                    if ((int)uVar25 < 0x200000) {
                      bVar28 = SBORROW4(uVar17,5);
                      bVar27 = (int)(uVar17 - 5) < 0;
                    }
                    else {
                      bVar28 = SBORROW4(uVar17,6);
                      bVar27 = (int)(uVar17 - 6) < 0;
                    }
                  }
                  else {
                    bVar28 = SBORROW4(uVar17,8);
                    bVar27 = (int)(uVar17 - 8) < 0;
                  }
                  if (bVar28 != bVar27) goto LAB_14f358049;
                }
                if (((5 < (int)uVar17) || ((int)uVar25 < max_offset[(int)uVar17])) &&
                   ((int)uVar23 <= (int)uVar17)) {
                  if (uVar17 == uVar23) {
                    bVar27 = (int)uVar25 < (int)uVar12;
code_r0x00014f358040:
                    if (!bVar27) goto LAB_14f358049;
                  }
                  else if ((int)uVar17 <= (int)(uVar23 + 1)) {
                    bVar27 = (int)uVar25 >> 7 <= (int)uVar12;
                    goto code_r0x00014f358040;
                  }
                  uVar23 = uVar17;
                  uVar12 = uVar25;
                }
              }
            }
          }
        }
LAB_14f358049:
      } while (uVar20 != 0);
    }
    uVar8 = *(undefined8 *)(puVar3 + 3);
    puVar3[1] = uVar16;
    puVar3[2] = uVar2;
    puVar3[3] = uVar9;
    puVar3[4] = uVar7;
    *(undefined8 *)(puVar3 + 4) = uVar8;
    *(undefined8 *)(puVar3 + 6) = *(undefined8 *)(puVar3 + 5);
    *puVar3 = (uVar26 ^ uVar1) & 0x3ffffff ^ uVar1;
    if (uVar12 == 0) {
      if (iVar10 < 2) {
        return false;
      }
    }
    else if ((iVar10 < 2) ||
            (((iVar10 + 1 < (int)uVar23 && ((iVar10 + 2 < (int)uVar23 || ((int)uVar12 < 0x400)))) &&
             ((iVar10 + 3 < (int)uVar23 || ((int)uVar12 < 0x10000)))))) {
      param_1->ml = uVar23;
      param_1->off = uVar12;
      return true;
    }
    param_1->ml = iVar10;
    param_1->off = (uVar11 & 7) - 6;
  }
  else {
    param_1->ml = iVar10;
    param_1->off = (uVar11 & 7) - 6;
    uVar8 = *(undefined8 *)(puVar3 + 3);
    *(undefined8 *)(puVar3 + 1) = *(undefined8 *)puVar3;
    *(undefined8 *)(puVar3 + 3) = *(undefined8 *)(puVar3 + 2);
    *(undefined8 *)(puVar3 + 4) = uVar8;
    *(undefined8 *)(puVar3 + 6) = *(undefined8 *)(puVar3 + 5);
    *puVar3 = (uVar26 ^ uVar1) & 0x3ffffff ^ uVar1;
  }
  return true;
code_r0x00014f357a5e:
  puVar14 = puVar14 + 1;
  if (param_6 + -8 < puVar14) goto LAB_14f357a67;
  goto LAB_14f357a55;
code_r0x00014f357ae9:
  puVar14 = puVar14 + 1;
  if (param_6 + -8 < puVar14) goto LAB_14f357af2;
  goto LAB_14f357ae0;
code_r0x00014f357b79:
  puVar14 = puVar14 + 1;
  if (param_6 + -8 < puVar14) goto LAB_14f357b85;
  goto LAB_14f357b70;
code_r0x00014f357c0e:
  puVar14 = puVar14 + 1;
  if (param_6 + -8 < puVar14) goto LAB_14f357c17;
  goto LAB_14f357c05;
code_r0x00014f357c9e:
  puVar14 = puVar14 + 1;
  if (param_6 + -8 < puVar14) goto LAB_14f357ca7;
  goto LAB_14f357c95;
code_r0x00014f357d2e:
  puVar14 = puVar14 + 1;
  if (param_6 + -8 < puVar14) goto LAB_14f357d37;
  goto LAB_14f357d25;
code_r0x00014f357dcd:
  puVar14 = puVar14 + 1;
  if (param_6 + -8 < puVar14) goto LAB_14f357dd6;
  goto LAB_14f357dc0;
code_r0x00014f357f79:
  puVar13 = puVar13 + 1;
  if (param_6 + -8 < puVar13) goto LAB_14f357f85;
  goto LAB_14f357f70;
}

// newLZHC_get_match_heuristic_inline<oo2::CTMF<unsigned_int,0,0,4>_> @ 14f358120

bool __cdecl
oo2::newLZHC_get_match_heuristic_inline<oo2::CTMF<unsigned_int,0,0,4>_>
          (match *param_1,CTMF<unsigned_int,0,0,4> *param_2,int param_3,newLZHC_LOs *param_4,
          uchar *param_5,uchar *param_6,int param_7,uchar *param_8,uint param_9,
          OodleLZ_CompressOptions *param_10)

{
  uint uVar1;
  uint *puVar2;
  ulonglong uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  char *pcVar10;
  ulonglong *puVar11;
  uchar *puVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  short sVar16;
  longlong lVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  uint uVar22;
  bool bVar23;
  bool bVar24;
  uint local_58 [6];
  
  puVar2 = param_2->m_next_row;
  uVar1 = param_2->m_next_hash;
  uVar22 = (int)param_5 - *(int *)&param_2->m_base_ptr;
  uVar20 = *(uint *)param_5;
  param_2->m_next_ptr = param_5 + param_3;
  bVar4 = (byte)param_2->m_table_size_bits & 0x1f;
  uVar13 = (uint)(param_2->m_hash_mul * *(longlong *)(param_5 + param_3) >> 0x20);
  uVar13 = uVar13 << bVar4 | uVar13 >> 0x20 - bVar4;
  param_2->m_next_hash = uVar13;
  param_2->m_next_row = (param_2->m_hash_table).m_ptr + (param_2->m_hash_row_mask & uVar13);
  uVar13 = 7;
  uVar5 = *(uint *)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[8]);
  sVar16 = (short)uVar20;
  if (sVar16 == (short)uVar5) {
    uVar5 = uVar5 ^ uVar20;
    if (uVar5 == 0) {
      puVar11 = (ulonglong *)(param_5 + 4);
      puVar21 = (uint *)((longlong)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[8]) + 4);
      puVar9 = puVar11;
      if (puVar11 <= param_6 + -8) {
LAB_14f3581f5:
        uVar8 = *(ulonglong *)(((longlong)puVar21 - (longlong)puVar11) + (longlong)puVar9) ^ *puVar9
        ;
        if (uVar8 == 0) goto code_r0x00014f3581fe;
        uVar3 = 0;
        if (uVar8 != 0) {
          for (; (uVar8 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
          }
        }
        lVar17 = ((uVar3 >> 3) - (longlong)puVar11) + (longlong)puVar9;
        goto LAB_14f358239;
      }
LAB_14f358207:
      lVar17 = (longlong)puVar9 - (longlong)puVar11;
      if (puVar9 < param_6) {
        pcVar10 = (char *)(lVar17 + (longlong)puVar21);
        do {
          if (pcVar10[(longlong)(param_5 + (4 - (longlong)puVar21))] != *pcVar10) break;
          pcVar10 = pcVar10 + 1;
          lVar17 = lVar17 + 1;
        } while (pcVar10 + ((longlong)puVar11 - (longlong)puVar21) < param_6);
      }
LAB_14f358239:
      iVar6 = (int)lVar17 + 4;
    }
    else {
      iVar6 = 3 - (uint)((uVar5 & 0xffffff) != 0);
    }
    uVar13 = iVar6 * 8 + 6;
    if ((int)uVar13 < 7) {
      uVar13 = 7;
    }
  }
  uVar7 = *(uint *)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[9]);
  uVar5 = uVar13;
  if (sVar16 == (short)uVar7) {
    uVar7 = uVar7 ^ uVar20;
    if (uVar7 == 0) {
      puVar11 = (ulonglong *)(param_5 + 4);
      puVar21 = (uint *)((longlong)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[9]) + 4);
      puVar9 = puVar11;
      if (puVar11 <= param_6 + -8) {
LAB_14f3582a0:
        uVar8 = *(ulonglong *)(((longlong)puVar21 - (longlong)puVar11) + (longlong)puVar9) ^ *puVar9
        ;
        if (uVar8 == 0) goto code_r0x00014f3582a9;
        uVar3 = 0;
        if (uVar8 != 0) {
          for (; (uVar8 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
          }
        }
        lVar17 = ((uVar3 >> 3) - (longlong)puVar11) + (longlong)puVar9;
        goto LAB_14f3582e9;
      }
LAB_14f3582b2:
      lVar17 = (longlong)puVar9 - (longlong)puVar11;
      if (puVar9 < param_6) {
        pcVar10 = (char *)(lVar17 + (longlong)puVar21);
        do {
          if (pcVar10[(longlong)(param_5 + (4 - (longlong)puVar21))] != *pcVar10) break;
          pcVar10 = pcVar10 + 1;
          lVar17 = lVar17 + 1;
        } while (pcVar10 + ((longlong)puVar11 - (longlong)puVar21) < param_6);
      }
LAB_14f3582e9:
      iVar6 = (int)lVar17 + 4;
    }
    else {
      iVar6 = 3 - (uint)((uVar7 & 0xffffff) != 0);
    }
    uVar5 = iVar6 * 8 + 5;
    if ((int)uVar5 < (int)uVar13) {
      uVar5 = uVar13;
    }
  }
  uVar7 = *(uint *)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[10]);
  uVar13 = uVar5;
  if (sVar16 == (short)uVar7) {
    uVar7 = uVar7 ^ uVar20;
    if (uVar7 == 0) {
      puVar11 = (ulonglong *)(param_5 + 4);
      puVar21 = (uint *)((longlong)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[10]) + 4);
      puVar9 = puVar11;
      if (puVar11 <= param_6 + -8) {
LAB_14f358350:
        uVar8 = *(ulonglong *)(((longlong)puVar21 - (longlong)puVar11) + (longlong)puVar9) ^ *puVar9
        ;
        if (uVar8 == 0) goto code_r0x00014f358359;
        uVar3 = 0;
        if (uVar8 != 0) {
          for (; (uVar8 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
          }
        }
        lVar17 = ((uVar3 >> 3) - (longlong)puVar11) + (longlong)puVar9;
        goto LAB_14f358399;
      }
LAB_14f358365:
      lVar17 = (longlong)puVar9 - (longlong)puVar11;
      if (puVar9 < param_6) {
        pcVar10 = (char *)(lVar17 + (longlong)puVar21);
        do {
          if (pcVar10[(longlong)(param_5 + (4 - (longlong)puVar21))] != *pcVar10) break;
          pcVar10 = pcVar10 + 1;
          lVar17 = lVar17 + 1;
        } while (pcVar10 + ((longlong)puVar11 - (longlong)puVar21) < param_6);
      }
LAB_14f358399:
      iVar6 = (int)lVar17 + 4;
    }
    else {
      iVar6 = 3 - (uint)((uVar7 & 0xffffff) != 0);
    }
    uVar13 = iVar6 * 8 + 4;
    if ((int)uVar13 < (int)uVar5) {
      uVar13 = uVar5;
    }
  }
  uVar7 = *(uint *)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[0xb]);
  uVar5 = uVar13;
  if (sVar16 == (short)uVar7) {
    uVar7 = uVar7 ^ uVar20;
    if (uVar7 == 0) {
      puVar11 = (ulonglong *)(param_5 + 4);
      puVar21 = (uint *)((longlong)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[0xb]) + 4)
      ;
      puVar9 = puVar11;
      if (puVar11 <= param_6 + -8) {
LAB_14f358400:
        uVar8 = *(ulonglong *)(((longlong)puVar21 - (longlong)puVar11) + (longlong)puVar9) ^ *puVar9
        ;
        if (uVar8 == 0) goto code_r0x00014f358409;
        uVar3 = 0;
        if (uVar8 != 0) {
          for (; (uVar8 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
          }
        }
        lVar17 = ((uVar3 >> 3) - (longlong)puVar11) + (longlong)puVar9;
        goto LAB_14f358449;
      }
LAB_14f358412:
      lVar17 = (longlong)puVar9 - (longlong)puVar11;
      if (puVar9 < param_6) {
        pcVar10 = (char *)(lVar17 + (longlong)puVar21);
        do {
          if (pcVar10[(longlong)(param_5 + (4 - (longlong)puVar21))] != *pcVar10) break;
          pcVar10 = pcVar10 + 1;
          lVar17 = lVar17 + 1;
        } while (pcVar10 + ((longlong)puVar11 - (longlong)puVar21) < param_6);
      }
LAB_14f358449:
      iVar6 = (int)lVar17 + 4;
    }
    else {
      iVar6 = 3 - (uint)((uVar7 & 0xffffff) != 0);
    }
    uVar5 = iVar6 * 8 + 3;
    if ((int)uVar5 < (int)uVar13) {
      uVar5 = uVar13;
    }
  }
  uVar7 = *(uint *)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[0xc]);
  uVar13 = uVar5;
  if (sVar16 == (short)uVar7) {
    uVar7 = uVar7 ^ uVar20;
    if (uVar7 == 0) {
      puVar11 = (ulonglong *)(param_5 + 4);
      puVar21 = (uint *)((longlong)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[0xc]) + 4)
      ;
      puVar9 = puVar11;
      if (puVar11 <= param_6 + -8) {
LAB_14f3584b0:
        uVar8 = *(ulonglong *)(((longlong)puVar21 - (longlong)puVar11) + (longlong)puVar9) ^ *puVar9
        ;
        if (uVar8 == 0) goto code_r0x00014f3584b9;
        uVar3 = 0;
        if (uVar8 != 0) {
          for (; (uVar8 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
          }
        }
        lVar17 = ((uVar3 >> 3) - (longlong)puVar11) + (longlong)puVar9;
        goto LAB_14f3584f9;
      }
LAB_14f3584c5:
      lVar17 = (longlong)puVar9 - (longlong)puVar11;
      if (puVar9 < param_6) {
        pcVar10 = (char *)(lVar17 + (longlong)puVar21);
        do {
          if (pcVar10[(longlong)(param_5 + (4 - (longlong)puVar21))] != *pcVar10) break;
          pcVar10 = pcVar10 + 1;
          lVar17 = lVar17 + 1;
        } while (pcVar10 + ((longlong)puVar11 - (longlong)puVar21) < param_6);
      }
LAB_14f3584f9:
      iVar6 = (int)lVar17 + 4;
    }
    else {
      iVar6 = 3 - (uint)((uVar7 & 0xffffff) != 0);
    }
    uVar13 = iVar6 * 8 + 2;
    if ((int)uVar13 < (int)uVar5) {
      uVar13 = uVar5;
    }
  }
  uVar7 = *(uint *)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[0xd]);
  uVar5 = uVar13;
  if (sVar16 == (short)uVar7) {
    uVar7 = uVar7 ^ uVar20;
    if (uVar7 == 0) {
      puVar11 = (ulonglong *)(param_5 + 4);
      puVar21 = (uint *)((longlong)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[0xd]) + 4)
      ;
      puVar9 = puVar11;
      if (puVar11 <= param_6 + -8) {
LAB_14f358560:
        uVar8 = *(ulonglong *)(((longlong)puVar21 - (longlong)puVar11) + (longlong)puVar9) ^ *puVar9
        ;
        if (uVar8 == 0) goto code_r0x00014f358569;
        uVar3 = 0;
        if (uVar8 != 0) {
          for (; (uVar8 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
          }
        }
        lVar17 = ((uVar3 >> 3) - (longlong)puVar11) + (longlong)puVar9;
        goto LAB_14f3585a9;
      }
LAB_14f358572:
      lVar17 = (longlong)puVar9 - (longlong)puVar11;
      if (puVar9 < param_6) {
        pcVar10 = (char *)(lVar17 + (longlong)puVar21);
        do {
          if (pcVar10[(longlong)(param_5 + (4 - (longlong)puVar21))] != *pcVar10) break;
          pcVar10 = pcVar10 + 1;
          lVar17 = lVar17 + 1;
        } while (pcVar10 + ((longlong)puVar11 - (longlong)puVar21) < param_6);
      }
LAB_14f3585a9:
      iVar6 = (int)lVar17 + 4;
    }
    else {
      iVar6 = 3 - (uint)((uVar7 & 0xffffff) != 0);
    }
    uVar5 = iVar6 * 8 + 1;
    if ((int)uVar5 < (int)uVar13) {
      uVar5 = uVar13;
    }
  }
  uVar13 = *(uint *)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[0xe]);
  uVar7 = uVar5;
  if (sVar16 == (short)uVar13) {
    uVar13 = uVar13 ^ uVar20;
    if (uVar13 == 0) {
      puVar11 = (ulonglong *)(param_5 + 4);
      puVar21 = (uint *)((longlong)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[0xe]) + 4)
      ;
      puVar9 = puVar11;
      if (puVar11 <= param_6 + -8) {
LAB_14f358610:
        uVar8 = *(ulonglong *)(((longlong)puVar21 - (longlong)puVar11) + (longlong)puVar9) ^ *puVar9
        ;
        if (uVar8 == 0) goto code_r0x00014f35861d;
        uVar3 = 0;
        if (uVar8 != 0) {
          for (; (uVar8 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
          }
        }
        lVar17 = ((uVar3 >> 3) - (longlong)puVar11) + (longlong)puVar9;
        goto LAB_14f358659;
      }
LAB_14f358626:
      lVar17 = (longlong)puVar9 - (longlong)puVar11;
      if (puVar9 < param_6) {
        pcVar10 = (char *)(lVar17 + (longlong)puVar21);
        do {
          if (pcVar10[(longlong)(param_5 + (4 - (longlong)puVar21))] != *pcVar10) break;
          pcVar10 = pcVar10 + 1;
          lVar17 = lVar17 + 1;
        } while (pcVar10 + ((longlong)puVar11 - (longlong)puVar21) < param_6);
      }
LAB_14f358659:
      iVar6 = (int)lVar17 + 4;
    }
    else {
      iVar6 = 3 - (uint)((uVar13 & 0xffffff) != 0);
    }
    uVar7 = iVar6 * 8;
    if (iVar6 * 8 < (int)uVar5) {
      uVar7 = uVar5;
    }
  }
  iVar6 = (int)uVar7 >> 3;
  if (iVar6 < 4) {
    iVar18 = 0;
    uVar13 = 0;
    local_58[0] = uVar22 - *puVar2 & 0x3ffffff;
    lVar17 = (longlong)(param_7 + -1);
    if (((*puVar2 ^ uVar1) & 0xfc000000) == 0) {
      uVar20 = 1;
      uVar13 = 0;
      do {
        uVar5 = 0;
        if (uVar20 != 0) {
          for (; (uVar20 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
          }
        }
        uVar20 = uVar20 & uVar20 - 1;
        uVar5 = local_58[uVar5];
        if (uVar5 < param_9) {
          uVar19 = 8;
          if (8 < uVar5) {
            uVar19 = uVar5;
          }
          if ((lVar17 < (longlong)param_6 - (longlong)param_5) &&
             (param_5[lVar17] == param_5[lVar17 - (ulonglong)uVar19])) {
            puVar11 = (ulonglong *)param_5;
            if (param_5 <= param_6 + -8) {
LAB_14f358780:
              uVar8 = *(ulonglong *)(-(ulonglong)uVar19 + (longlong)puVar11) ^ *puVar11;
              if (uVar8 == 0) goto code_r0x00014f358789;
              uVar3 = 0;
              if (uVar8 != 0) {
                for (; (uVar8 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
                }
              }
              lVar15 = ((uVar3 >> 3) - (longlong)param_5) + (longlong)puVar11;
              goto LAB_14f3587b9;
            }
LAB_14f358792:
            lVar15 = (longlong)puVar11 - (longlong)param_5;
            for (puVar12 = param_5 + lVar15;
                (puVar12 < param_6 && (*puVar12 == puVar12[-(ulonglong)uVar19]));
                puVar12 = puVar12 + 1) {
              lVar15 = lVar15 + 1;
            }
LAB_14f3587b9:
            if (lVar17 < lVar15) {
              iVar14 = (int)lVar15;
              lVar17 = lVar15;
              if (((param_10->farMatchOffsetLog2 < 1) ||
                  ((int)uVar19 < 1 << ((byte)param_10->farMatchOffsetLog2 & 0x1f))) ||
                 (param_10->farMatchMinLen <= iVar14)) {
                if (0xfffff < (int)uVar19) {
                  if ((int)uVar19 < 0x400000) {
                    if ((int)uVar19 < 0x200000) {
                      bVar24 = SBORROW4(iVar14,5);
                      bVar23 = iVar14 + -5 < 0;
                    }
                    else {
                      bVar24 = SBORROW4(iVar14,6);
                      bVar23 = iVar14 + -6 < 0;
                    }
                  }
                  else {
                    bVar24 = SBORROW4(iVar14,8);
                    bVar23 = iVar14 + -8 < 0;
                  }
                  if (bVar24 != bVar23) goto LAB_14f358833;
                }
                if ((5 < iVar14) || ((int)uVar19 < max_offset[iVar14])) {
                  iVar18 = iVar14;
                  uVar13 = uVar19;
                }
              }
            }
          }
        }
LAB_14f358833:
      } while (uVar20 != 0);
    }
    *puVar2 = (uVar22 ^ uVar1) & 0x3ffffff ^ uVar1;
    if (uVar13 == 0) {
      if (iVar6 < 2) {
        return false;
      }
    }
    else if ((iVar6 < 2) ||
            (((iVar6 + 1 < iVar18 && ((iVar6 + 2 < iVar18 || ((int)uVar13 < 0x400)))) &&
             ((iVar6 + 3 < iVar18 || ((int)uVar13 < 0x10000)))))) {
      param_1->ml = iVar18;
      param_1->off = uVar13;
      return true;
    }
    param_1->ml = iVar6;
    param_1->off = (uVar7 & 7) - 6;
  }
  else {
    param_1->ml = iVar6;
    param_1->off = (uVar7 & 7) - 6;
    *puVar2 = (uVar22 ^ uVar1) & 0x3ffffff ^ uVar1;
  }
  return true;
code_r0x00014f3581fe:
  puVar9 = puVar9 + 1;
  if (param_6 + -8 < puVar9) goto LAB_14f358207;
  goto LAB_14f3581f5;
code_r0x00014f3582a9:
  puVar9 = puVar9 + 1;
  if (param_6 + -8 < puVar9) goto LAB_14f3582b2;
  goto LAB_14f3582a0;
code_r0x00014f358359:
  puVar9 = puVar9 + 1;
  if (param_6 + -8 < puVar9) goto LAB_14f358365;
  goto LAB_14f358350;
code_r0x00014f358409:
  puVar9 = puVar9 + 1;
  if (param_6 + -8 < puVar9) goto LAB_14f358412;
  goto LAB_14f358400;
code_r0x00014f3584b9:
  puVar9 = puVar9 + 1;
  if (param_6 + -8 < puVar9) goto LAB_14f3584c5;
  goto LAB_14f3584b0;
code_r0x00014f358569:
  puVar9 = puVar9 + 1;
  if (param_6 + -8 < puVar9) goto LAB_14f358572;
  goto LAB_14f358560;
code_r0x00014f35861d:
  puVar9 = puVar9 + 1;
  if (param_6 + -8 < puVar9) goto LAB_14f358626;
  goto LAB_14f358610;
code_r0x00014f358789:
  puVar11 = puVar11 + 1;
  if (param_6 + -8 < puVar11) goto LAB_14f358792;
  goto LAB_14f358780;
}

// newLZHC_parse_put_literals<1> @ 14f3588e0

void __cdecl
oo2::newLZHC_parse_put_literals<1>
          (uchar *param_1,long64 param_2,long64 param_3,uchar *param_4,long64 param_5,
          vector_a<oo2::newlzhc_encoder_parse> *param_6,int param_7)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0 < *(int *)&param_6->field_0x10) {
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)param_6;
      iVar2 = *(int *)(lVar3 + 4 + lVar4);
      if (iVar2 != 0) {
        memcpy(param_4,param_1 + param_3,(longlong)iVar2);
        param_4 = param_4 + iVar2;
      }
      piVar1 = (int *)(lVar3 + 8 + lVar4);
      iVar5 = iVar5 + 1;
      lVar4 = lVar4 + 0x10;
      param_3 = param_3 + (*piVar1 + iVar2);
    } while (iVar5 < *(int *)&param_6->field_0x10);
  }
  if (0 < param_2 - param_3) {
    memcpy(param_4,param_1 + param_3,(longlong)(int)(param_2 - param_3));
  }
  return;
}

// newLZHC_parse_put_literals<0> @ 14f3589c0

void __cdecl
oo2::newLZHC_parse_put_literals<0>
          (uchar *param_1,long64 param_2,long64 param_3,uchar *param_4,long64 param_5,
          vector_a<oo2::newlzhc_encoder_parse> *param_6,int param_7)

{
  uchar *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  uchar uVar17;
  uchar uVar18;
  uchar uVar19;
  uchar uVar20;
  uchar uVar21;
  uchar uVar22;
  uchar uVar23;
  uchar uVar24;
  uchar uVar25;
  uchar uVar26;
  uchar uVar27;
  uchar uVar28;
  uchar uVar29;
  uchar uVar30;
  uchar uVar31;
  uchar uVar32;
  uchar uVar33;
  uchar uVar34;
  uchar uVar35;
  uchar uVar36;
  uchar *puVar37;
  ulonglong uVar38;
  int iVar39;
  ulonglong uVar40;
  uchar *puVar41;
  longlong lVar42;
  ulonglong uVar43;
  longlong lVar44;
  
  iVar39 = 0;
  if (0 < *(int *)&param_6->field_0x10) {
    lVar44 = 0;
    do {
      lVar5 = *(longlong *)param_6;
      iVar3 = *(int *)(lVar5 + 4 + lVar44);
      uVar40 = (ulonglong)iVar3;
      if (iVar3 != 0) {
        iVar4 = *(int *)(lVar5 + lVar44);
        puVar37 = param_1 + param_3;
        uVar38 = uVar40;
        puVar41 = param_4;
        if (0xf < (longlong)uVar40) {
          uVar43 = uVar40 >> 4;
          uVar38 = uVar40 + uVar43 * -0x10;
          do {
            uVar6 = *puVar37;
            uVar7 = puVar37[1];
            uVar8 = puVar37[2];
            uVar9 = puVar37[3];
            uVar10 = puVar37[4];
            uVar11 = puVar37[5];
            uVar12 = puVar37[6];
            uVar13 = puVar37[7];
            uVar14 = puVar37[8];
            uVar15 = puVar37[9];
            uVar16 = puVar37[10];
            uVar17 = puVar37[0xb];
            uVar18 = puVar37[0xc];
            uVar19 = puVar37[0xd];
            uVar20 = puVar37[0xe];
            uVar21 = puVar37[0xf];
            puVar1 = puVar37 + -(longlong)iVar4;
            uVar22 = puVar1[1];
            uVar23 = puVar1[2];
            uVar24 = puVar1[3];
            uVar25 = puVar1[4];
            uVar26 = puVar1[5];
            uVar27 = puVar1[6];
            uVar28 = puVar1[7];
            uVar29 = puVar1[8];
            uVar30 = puVar1[9];
            uVar31 = puVar1[10];
            uVar32 = puVar1[0xb];
            uVar33 = puVar1[0xc];
            uVar34 = puVar1[0xd];
            uVar35 = puVar1[0xe];
            uVar36 = puVar1[0xf];
            puVar37 = puVar37 + 0x10;
            *puVar41 = uVar6 - *puVar1;
            puVar41[1] = uVar7 - uVar22;
            puVar41[2] = uVar8 - uVar23;
            puVar41[3] = uVar9 - uVar24;
            puVar41[4] = uVar10 - uVar25;
            puVar41[5] = uVar11 - uVar26;
            puVar41[6] = uVar12 - uVar27;
            puVar41[7] = uVar13 - uVar28;
            puVar41[8] = uVar14 - uVar29;
            puVar41[9] = uVar15 - uVar30;
            puVar41[10] = uVar16 - uVar31;
            puVar41[0xb] = uVar17 - uVar32;
            puVar41[0xc] = uVar18 - uVar33;
            puVar41[0xd] = uVar19 - uVar34;
            puVar41[0xe] = uVar20 - uVar35;
            puVar41[0xf] = uVar21 - uVar36;
            puVar41 = puVar41 + 0x10;
            uVar43 = uVar43 - 1;
          } while (uVar43 != 0);
        }
        if (uVar38 != 0) {
          lVar42 = (longlong)puVar41 - (longlong)puVar37;
          do {
            puVar37[lVar42] = *puVar37 - puVar37[-(longlong)iVar4];
            puVar37 = puVar37 + 1;
            uVar38 = uVar38 - 1;
          } while (uVar38 != 0);
        }
        param_4 = param_4 + uVar40;
      }
      piVar2 = (int *)(lVar5 + 8 + lVar44);
      iVar39 = iVar39 + 1;
      lVar44 = lVar44 + 0x10;
      param_3 = param_3 + (*piVar2 + iVar3);
    } while (iVar39 < *(int *)&param_6->field_0x10);
  }
  if (0 < param_2 - param_3) {
    puVar37 = param_1 + param_3;
    uVar40 = (ulonglong)(int)(param_2 - param_3);
    if (0xf < (longlong)uVar40) {
      uVar38 = uVar40 >> 4;
      uVar40 = uVar40 + uVar38 * -0x10;
      do {
        uVar6 = *puVar37;
        uVar7 = puVar37[1];
        uVar8 = puVar37[2];
        uVar9 = puVar37[3];
        uVar10 = puVar37[4];
        uVar11 = puVar37[5];
        uVar12 = puVar37[6];
        uVar13 = puVar37[7];
        uVar14 = puVar37[8];
        uVar15 = puVar37[9];
        uVar16 = puVar37[10];
        uVar17 = puVar37[0xb];
        uVar18 = puVar37[0xc];
        uVar19 = puVar37[0xd];
        uVar20 = puVar37[0xe];
        uVar21 = puVar37[0xf];
        puVar41 = puVar37 + -(longlong)param_7;
        uVar22 = puVar41[1];
        uVar23 = puVar41[2];
        uVar24 = puVar41[3];
        uVar25 = puVar41[4];
        uVar26 = puVar41[5];
        uVar27 = puVar41[6];
        uVar28 = puVar41[7];
        uVar29 = puVar41[8];
        uVar30 = puVar41[9];
        uVar31 = puVar41[10];
        uVar32 = puVar41[0xb];
        uVar33 = puVar41[0xc];
        uVar34 = puVar41[0xd];
        uVar35 = puVar41[0xe];
        uVar36 = puVar41[0xf];
        puVar37 = puVar37 + 0x10;
        *param_4 = uVar6 - *puVar41;
        param_4[1] = uVar7 - uVar22;
        param_4[2] = uVar8 - uVar23;
        param_4[3] = uVar9 - uVar24;
        param_4[4] = uVar10 - uVar25;
        param_4[5] = uVar11 - uVar26;
        param_4[6] = uVar12 - uVar27;
        param_4[7] = uVar13 - uVar28;
        param_4[8] = uVar14 - uVar29;
        param_4[9] = uVar15 - uVar30;
        param_4[10] = uVar16 - uVar31;
        param_4[0xb] = uVar17 - uVar32;
        param_4[0xc] = uVar18 - uVar33;
        param_4[0xd] = uVar19 - uVar34;
        param_4[0xe] = uVar20 - uVar35;
        param_4[0xf] = uVar21 - uVar36;
        param_4 = param_4 + 0x10;
        uVar38 = uVar38 - 1;
      } while (uVar38 != 0);
    }
    if (uVar40 != 0) {
      lVar44 = (longlong)param_4 - (longlong)puVar37;
      do {
        puVar37[lVar44] = *puVar37 - puVar37[-(longlong)param_7];
        puVar37 = puVar37 + 1;
        uVar40 = uVar40 - 1;
      } while (uVar40 != 0);
    }
  }
  return;
}

// newLZHC_parse_put_literals_multi<2> @ 14f358b60

void __cdecl
oo2::newLZHC_parse_put_literals_multi<2>
          (uchar *param_1,long64 param_2,long64 param_3,uchar **param_4,long64 param_5,
          vector_a<oo2::newlzhc_encoder_parse> *param_6,int param_7)

{
  int *piVar1;
  uchar uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uchar *puVar6;
  uchar *puVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  
  iVar8 = 0;
  if (0 < *(int *)&param_6->field_0x10) {
    lVar10 = 0;
    do {
      lVar5 = *(longlong *)param_6;
      iVar3 = *(int *)(lVar5 + 4 + lVar10);
      if (iVar3 != 0) {
        iVar4 = *(int *)(lVar5 + lVar10);
        iVar9 = iVar3 + -1;
        *param_4[1] = param_1[param_3] - param_1[param_3 - iVar4];
        param_4[1] = param_4[1] + 1;
        if (iVar9 != 0) {
          puVar7 = param_1 + param_3 + 1;
          do {
            uVar2 = *puVar7;
            puVar6 = puVar7 + -(longlong)iVar4;
            puVar7 = puVar7 + 1;
            **param_4 = uVar2 - *puVar6;
            *param_4 = *param_4 + 1;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
      }
      piVar1 = (int *)(lVar5 + 8 + lVar10);
      iVar8 = iVar8 + 1;
      lVar10 = lVar10 + 0x10;
      param_3 = param_3 + (*piVar1 + iVar3);
    } while (iVar8 < *(int *)&param_6->field_0x10);
  }
  if (0 < param_2 - param_3) {
    iVar8 = (int)(param_2 - param_3) + -1;
    *param_4[1] = param_1[param_3] - param_1[param_3 - param_7];
    param_4[1] = param_4[1] + 1;
    if (iVar8 != 0) {
      puVar7 = param_1 + param_3 + 1;
      do {
        uVar2 = *puVar7;
        puVar6 = puVar7 + -(longlong)param_7;
        puVar7 = puVar7 + 1;
        **param_4 = uVar2 - *puVar6;
        *param_4 = *param_4 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  return;
}

// newLZHC_parse_put_literals_multi<3> @ 14f358ca0

void __cdecl
oo2::newLZHC_parse_put_literals_multi<3>
          (uchar *param_1,long64 param_2,long64 param_3,uchar **param_4,long64 param_5,
          vector_a<oo2::newlzhc_encoder_parse> *param_6,int param_7)

{
  uchar **ppuVar1;
  int *piVar2;
  uchar uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  uchar *puVar7;
  uchar *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  
  iVar9 = 0;
  if (0 < *(int *)&param_6->field_0x10) {
    lVar13 = 0;
    do {
      lVar6 = *(longlong *)param_6;
      iVar4 = *(int *)(lVar6 + 4 + lVar13);
      if (iVar4 != 0) {
        iVar5 = *(int *)(lVar6 + lVar13);
        puVar7 = param_1 + param_3;
        iVar10 = iVar4;
        do {
          uVar3 = *puVar7;
          ppuVar1 = param_4 + ((int)puVar7 - (int)param_1 & 3);
          puVar8 = puVar7 + -(longlong)iVar5;
          puVar7 = puVar7 + 1;
          **ppuVar1 = uVar3 - *puVar8;
          *ppuVar1 = *ppuVar1 + 1;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      piVar2 = (int *)(lVar6 + 8 + lVar13);
      iVar9 = iVar9 + 1;
      lVar13 = lVar13 + 0x10;
      param_3 = param_3 + (*piVar2 + iVar4);
    } while (iVar9 < *(int *)&param_6->field_0x10);
  }
  uVar12 = param_2 - param_3;
  if ((0 < (longlong)uVar12) && ((int)uVar12 != 0)) {
    puVar7 = param_1 + param_3;
    do {
      uVar3 = *puVar7;
      ppuVar1 = param_4 + ((int)puVar7 - (int)param_1 & 3);
      puVar8 = puVar7 + -(longlong)param_7;
      puVar7 = puVar7 + 1;
      **ppuVar1 = uVar3 - *puVar8;
      *ppuVar1 = *ppuVar1 + 1;
      uVar11 = (int)uVar12 - 1;
      uVar12 = (ulonglong)uVar11;
    } while (uVar11 != 0);
  }
  return;
}

// newLZHC_parse_put_literals_multi<4> @ 14f358de0

void __cdecl
oo2::newLZHC_parse_put_literals_multi<4>
          (uchar *param_1,long64 param_2,long64 param_3,uchar **param_4,long64 param_5,
          vector_a<oo2::newlzhc_encoder_parse> *param_6,int param_7)

{
  int *piVar1;
  byte bVar2;
  uchar uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  uchar *puVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  
  iVar6 = 0;
  if (0 < *(int *)&param_6->field_0x10) {
    lVar7 = 0;
    do {
      lVar5 = *(longlong *)param_6;
      iVar4 = *(int *)(lVar5 + 4 + lVar7);
      if (iVar4 != 0) {
        puVar8 = param_1 + param_3;
        iVar9 = iVar4;
        do {
          bVar2 = puVar8[-1];
          uVar3 = *puVar8;
          puVar8 = puVar8 + 1;
          *param_4[bVar2 >> 4] = uVar3;
          param_4[bVar2 >> 4] = param_4[bVar2 >> 4] + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      piVar1 = (int *)(lVar5 + 8 + lVar7);
      iVar6 = iVar6 + 1;
      lVar7 = lVar7 + 0x10;
      param_3 = param_3 + (*piVar1 + iVar4);
    } while (iVar6 < *(int *)&param_6->field_0x10);
  }
  uVar11 = param_2 - param_3;
  if ((0 < (longlong)uVar11) && ((int)uVar11 != 0)) {
    puVar8 = param_1 + param_3;
    do {
      bVar2 = puVar8[-1];
      uVar3 = *puVar8;
      puVar8 = puVar8 + 1;
      *param_4[bVar2 >> 4] = uVar3;
      param_4[bVar2 >> 4] = param_4[bVar2 >> 4] + 1;
      uVar10 = (int)uVar11 - 1;
      uVar11 = (ulonglong)uVar10;
    } while (uVar10 != 0);
  }
  return;
}

// newLZHC_parse_put_literals_multi<5> @ 14f358ee0

void __cdecl
oo2::newLZHC_parse_put_literals_multi<5>
          (uchar *param_1,long64 param_2,long64 param_3,uchar **param_4,long64 param_5,
          vector_a<oo2::newlzhc_encoder_parse> *param_6,int param_7)

{
  uchar **ppuVar1;
  int *piVar2;
  uchar uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  uchar *puVar7;
  uchar *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  
  iVar9 = 0;
  if (0 < *(int *)&param_6->field_0x10) {
    lVar13 = 0;
    do {
      lVar6 = *(longlong *)param_6;
      iVar4 = *(int *)(lVar6 + 4 + lVar13);
      if (iVar4 != 0) {
        iVar5 = *(int *)(lVar6 + lVar13);
        puVar7 = param_1 + param_3;
        iVar10 = iVar4;
        do {
          uVar3 = *puVar7;
          ppuVar1 = param_4 + ((int)puVar7 - (int)param_1 & 0xf);
          puVar8 = puVar7 + -(longlong)iVar5;
          puVar7 = puVar7 + 1;
          **ppuVar1 = uVar3 - *puVar8;
          *ppuVar1 = *ppuVar1 + 1;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      piVar2 = (int *)(lVar6 + 8 + lVar13);
      iVar9 = iVar9 + 1;
      lVar13 = lVar13 + 0x10;
      param_3 = param_3 + (*piVar2 + iVar4);
    } while (iVar9 < *(int *)&param_6->field_0x10);
  }
  uVar12 = param_2 - param_3;
  if ((0 < (longlong)uVar12) && ((int)uVar12 != 0)) {
    puVar7 = param_1 + param_3;
    do {
      uVar3 = *puVar7;
      ppuVar1 = param_4 + ((int)puVar7 - (int)param_1 & 0xf);
      puVar8 = puVar7 + -(longlong)param_7;
      puVar7 = puVar7 + 1;
      **ppuVar1 = uVar3 - *puVar8;
      *ppuVar1 = *ppuVar1 + 1;
      uVar11 = (int)uVar12 - 1;
      uVar12 = (ulonglong)uVar11;
    } while (uVar11 != 0);
  }
  return;
}

// newLZHC_put_literals_multi<2> @ 14f359010

void __cdecl
oo2::newLZHC_put_literals_multi<2>
          (int param_1,uchar **param_2,long64 param_3,long64 param_4,uchar *param_5)

{
  uchar uVar1;
  uchar *puVar2;
  uchar *puVar3;
  int iVar4;
  
  *param_2[1] = param_5[param_4] - param_5[param_4 - param_3];
  param_2[1] = param_2[1] + 1;
  iVar4 = param_1 + -1;
  if (iVar4 != 0) {
    puVar2 = param_5 + param_4 + 1;
    do {
      uVar1 = *puVar2;
      puVar3 = puVar2 + -param_3;
      puVar2 = puVar2 + 1;
      **param_2 = uVar1 - *puVar3;
      *param_2 = *param_2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

// newLZHC_put_literals_multi<3> @ 14f359080

void __cdecl
oo2::newLZHC_put_literals_multi<3>
          (int param_1,uchar **param_2,long64 param_3,long64 param_4,uchar *param_5)

{
  uchar **ppuVar1;
  uchar uVar2;
  uchar *puVar3;
  uchar *puVar4;
  
  if (param_1 != 0) {
    puVar3 = param_5 + param_4;
    do {
      puVar4 = puVar3 + -param_3;
      ppuVar1 = param_2 + ((int)puVar3 - (int)param_5 & 3);
      uVar2 = *puVar3;
      puVar3 = puVar3 + 1;
      **ppuVar1 = uVar2 - *puVar4;
      *ppuVar1 = *ppuVar1 + 1;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}

// newLZHC_put_literals_multi<4> @ 14f3590e0

void __cdecl
oo2::newLZHC_put_literals_multi<4>
          (int param_1,uchar **param_2,long64 param_3,long64 param_4,uchar *param_5)

{
  byte bVar1;
  uchar uVar2;
  uchar *puVar3;
  
  if (param_1 != 0) {
    puVar3 = param_5 + param_4;
    do {
      bVar1 = puVar3[-1];
      uVar2 = *puVar3;
      puVar3 = puVar3 + 1;
      *param_2[bVar1 >> 4] = uVar2;
      param_2[bVar1 >> 4] = param_2[bVar1 >> 4] + 1;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}

// newLZHC_put_literals_multi<5> @ 14f359120

void __cdecl
oo2::newLZHC_put_literals_multi<5>
          (int param_1,uchar **param_2,long64 param_3,long64 param_4,uchar *param_5)

{
  uchar **ppuVar1;
  uchar uVar2;
  uchar *puVar3;
  uchar *puVar4;
  
  if (param_1 != 0) {
    puVar3 = param_5 + param_4;
    do {
      puVar4 = puVar3 + -param_3;
      ppuVar1 = param_2 + ((int)puVar3 - (int)param_5 & 0xf);
      uVar2 = *puVar3;
      puVar3 = puVar3 + 1;
      **ppuVar1 = uVar2 - *puVar4;
      *ppuVar1 = *ppuVar1 + 1;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}

// newlz_literals_copy8<1> @ 14f359180

void __cdecl
oo2::`anonymous_namespace'::newlz_literals_copy8<1>(uchar *param_1,uchar *param_2,uchar *param_3)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_3;
  return;
}

// newlz_literals_copy8<2> @ 14f359190

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

// newlz_literals_copy8<0> @ 14f3591b0

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

// newlz_vtable_setup_ctmf<oo2::CTMF<unsigned_int,0,0,4>_> @ 14f3591e0

/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

void __cdecl
oo2::newlz_vtable_setup_ctmf<oo2::CTMF<unsigned_int,0,0,4>_>
          (newlz_vtable *param_1,uchar *param_2,uchar *param_3,int param_4,rrArenaAllocator *param_5
          ,int param_6)

{
  void *pvVar1;
  OodleLZ_CompressOptions *pOVar2;
  int iVar3;
  CTMF<unsigned_int,0,0,4> *pCVar4;
  code *pcVar5;
  CTMF<unsigned_int,0,0,4> *this;
  ulong64 uVar6;
  ulonglong *puVar7;
  CTMF<unsigned_int,0,0,4> *pCVar8;
  ulonglong *puVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  long64 lVar14;
  uint *puVar15;
  
  lVar12 = (1L << ((byte)param_4 & 0x3f)) * 4;
  param_1->ctmf_mem_size = lVar12;
  if (param_3 == (uchar *)0x0) {
    return;
  }
  this = (CTMF<unsigned_int,0,0,4> *)param_5->m_cur;
  uVar11 = (ulonglong)(-(uint)(param_5->m_unorderedStart != 0) & 0x10);
  if (param_5->m_size + param_5->m_base < (longlong)&this[1].m_hash_table_arena + uVar11) {
LAB_14f3592cd:
    this = (*g_fp_OodleCore_Plugin_MallocAligned)(0x50,0x10);
    if (this == (CTMF<unsigned_int,0,0,4> *)0x0) {
                    /* WARNING: Subroutine does not return */
      Oodle_Core_Malloc_Failed(0x50);
    }
    this->m_hash_table_arena = (rrArenaAllocator *)0x0;
    (this->m_hash_table).m_ptr = (uint *)0x0;
    (this->m_hash_table).m_alloc = (void *)0x0;
    this->m_table_size_bits = 0;
    this->m_hash_row_mask = 0;
    this->m_base_ptr = (uchar *)0x0;
    this->m_next_ptr = (uchar *)0x0;
    this->m_next_row = (uint *)0x0;
    this->m_next_row_second = (uint *)0x0;
    this->m_hash_mul = 0;
    this->m_next_hash = 0;
    pcVar5 = void_deletor<oo2::CTMF<unsigned_int,0,0,4>_>;
  }
  else {
    pCVar8 = this + 1;
    param_5->m_cur = (ulong64)pCVar8;
    if (param_5->m_unorderedStart != 0) {
      pCVar8->m_hash_table_arena = (rrArenaAllocator *)0x50;
      this[1].m_hash_table.m_ptr = (uint *)0x0;
      param_5->m_cur = param_5->m_cur + uVar11;
      pCVar8 = (CTMF<unsigned_int,0,0,4> *)param_5->m_cur;
    }
    pCVar4 = (CTMF<unsigned_int,0,0,4> *)param_5->m_cur_max;
    if ((CTMF<unsigned_int,0,0,4> *)param_5->m_cur_max <= pCVar8) {
      pCVar4 = pCVar8;
    }
    param_5->m_cur_max = (ulong64)pCVar4;
    if (this == (CTMF<unsigned_int,0,0,4> *)0x0) goto LAB_14f3592cd;
    this->m_hash_table_arena = (rrArenaAllocator *)0x0;
    pcVar5 = void_destructor<oo2::CTMF<unsigned_int,0,0,4>_>;
    (this->m_hash_table).m_ptr = (uint *)0x0;
    (this->m_hash_table).m_alloc = (void *)0x0;
    this->m_base_ptr = (uchar *)0x0;
    this->m_next_row = (uint *)0x0;
    this->m_next_row_second = (uint *)0x0;
    this->m_hash_mul = 0;
    this->m_next_hash = 0;
    param_1->m_free_arena = param_5;
    param_1->m_free_pointer = this;
    param_1->m_free_size = 0x50;
  }
  uVar6 = 0;
  param_1->fp_free_matcher = pcVar5;
  this->m_table_size_bits = param_4;
  this->m_next_ptr = (uchar *)0x0;
  this->m_hash_row_mask = (1 << ((byte)param_4 & 0x1f)) - 1;
  iVar3 = 4;
  if (0 < param_6) {
    iVar3 = param_6;
  }
  if (0 < iVar3) {
    iVar10 = 8;
    if (iVar3 < 8) {
      iVar10 = iVar3;
    }
    iVar3 = 1;
    if (1 < iVar10) {
      iVar3 = iVar10;
    }
    uVar6 = -0x30e44323485a9b9d << (('\b' - (char)iVar3) * '\b' & 0x3fU);
  }
  this->m_hash_mul = uVar6;
  uVar11 = lVar12 + 0x4fU & 0xfffffffffffffff0;
  pvVar1 = (void *)param_5->m_cur;
  uVar13 = (ulonglong)(-(uint)(param_5->m_unorderedStart != 0) & 0x10);
  if (param_5->m_size + param_5->m_base < (longlong)pvVar1 + uVar11 + uVar13) {
    (this->m_hash_table).m_alloc = (void *)0x0;
  }
  else {
    puVar9 = (ulonglong *)((longlong)pvVar1 + uVar11);
    param_5->m_cur = (ulong64)puVar9;
    if (param_5->m_unorderedStart != 0) {
      *puVar9 = uVar11;
      puVar9[1] = 0;
      param_5->m_cur = param_5->m_cur + uVar13;
      puVar9 = (ulonglong *)param_5->m_cur;
    }
    puVar7 = (ulonglong *)param_5->m_cur_max;
    if ((ulonglong *)param_5->m_cur_max <= puVar9) {
      puVar7 = puVar9;
    }
    param_5->m_cur_max = (ulong64)puVar7;
    (this->m_hash_table).m_alloc = pvVar1;
    if (pvVar1 != (void *)0x0) {
      puVar15 = (uint *)((longlong)pvVar1 + 0x3fU & 0xffffffffffffffc0);
      goto LAB_14f35941b;
    }
  }
  puVar15 = (*g_fp_OodleCore_Plugin_MallocAligned)(lVar12,0x40);
  if (puVar15 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(lVar12);
  }
LAB_14f35941b:
  (this->m_hash_table).m_ptr = puVar15;
  this->m_hash_table_arena = param_5;
  memset((this->m_hash_table).m_ptr,0,(1L << ((byte)this->m_table_size_bits & 0x3f)) << 2);
  if (param_3 == param_2) {
    this->m_base_ptr = param_3;
  }
  else {
    pOVar2 = param_1->pOptions;
    lVar12 = (longlong)param_3 - (longlong)param_2;
    if (((4 < (int)param_1->level) && (pOVar2->makeLongRangeMatcher != 0)) &&
       (pOVar2->maxLocalDictionarySize <= lVar12)) {
      lVar12 = (longlong)pOVar2->maxLocalDictionarySize;
    }
    iVar3 = pOVar2->dictionarySize;
    if ((0 < iVar3) && (iVar3 <= lVar12)) {
      lVar12 = (longlong)iVar3;
    }
    lVar14 = 0x4000000;
    if (lVar12 < 0x4000000) {
      lVar14 = lVar12;
    }
    CTMF<unsigned_int,0,0,4>::set_base_and_preload(this,param_2,param_3,lVar14);
  }
  param_1->matcher = this;
  return;
}

// reverse<oo2::newlzhc_encoder_parse_*> @ 14f3594c0

void __cdecl
oo2::reverse<oo2::newlzhc_encoder_parse_*>
          (newlzhc_encoder_parse *param_1,newlzhc_encoder_parse *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  newlzhc_encoder_parse *pnVar8;
  
  pnVar8 = param_2 + -1;
  if (param_1 < pnVar8) {
    do {
      iVar1 = pnVar8->lrl;
      iVar2 = pnVar8->ml;
      iVar3 = pnVar8->offset;
      iVar4 = param_1->lastoffset;
      iVar5 = param_1->lrl;
      iVar6 = param_1->ml;
      iVar7 = param_1->offset;
      param_1->lastoffset = pnVar8->lastoffset;
      param_1->lrl = iVar1;
      param_1->ml = iVar2;
      param_1->offset = iVar3;
      param_1 = param_1 + 1;
      pnVar8->lastoffset = iVar4;
      pnVar8->lrl = iVar5;
      pnVar8->ml = iVar6;
      pnVar8->offset = iVar7;
      pnVar8 = pnVar8 + -1;
    } while (param_1 < pnVar8);
  }
  return;
}

// rrAlignUpPointer<unsigned_char> @ 14f3594f0

uchar * __cdecl oo2::rrAlignUpPointer<unsigned_char>(uchar *param_1,long64 param_2)

{
  return (uchar *)((ulonglong)(param_1 + param_2 + -1) & ~(param_2 - 1U));
}

// rrAlignUpPointer<unsigned_int> @ 14f359510

uint * __cdecl oo2::rrAlignUpPointer<unsigned_int>(uint *param_1,long64 param_2)

{
  return (uint *)((longlong)param_1 + param_2 + -1 & ~(param_2 - 1U));
}

// rrAlignUpPointer<void> @ 14f359530

void * __cdecl oo2::rrAlignUpPointer<void>(void *param_1,long64 param_2)

{
  return (void *)((longlong)param_1 + param_2 + -1 & ~(param_2 - 1U));
}

// rrArenaNewIfAvail<oo2::CTMF<unsigned_int,0,0,4>_> @ 14f359550

CTMF<unsigned_int,0,0,4> * __cdecl
oo2::rrArenaNewIfAvail<oo2::CTMF<unsigned_int,0,0,4>_>(rrArenaAllocator *param_1)

{
  CTMF<unsigned_int,0,0,4> *pCVar1;
  CTMF<unsigned_int,0,0,4> *pCVar2;
  CTMF<unsigned_int,0,0,4> *pCVar3;
  ulonglong uVar4;
  
  pCVar1 = (CTMF<unsigned_int,0,0,4> *)param_1->m_cur;
  uVar4 = (ulonglong)(-(uint)(param_1->m_unorderedStart != 0) & 0x10);
  if ((longlong)&pCVar1[1].m_hash_table_arena + uVar4 <= param_1->m_size + param_1->m_base) {
    pCVar3 = pCVar1 + 1;
    param_1->m_cur = (ulong64)pCVar3;
    if (param_1->m_unorderedStart != 0) {
      pCVar3->m_hash_table_arena = (rrArenaAllocator *)0x50;
      pCVar1[1].m_hash_table.m_ptr = (uint *)0x0;
      param_1->m_cur = param_1->m_cur + uVar4;
      pCVar3 = (CTMF<unsigned_int,0,0,4> *)param_1->m_cur;
    }
    pCVar2 = (CTMF<unsigned_int,0,0,4> *)param_1->m_cur_max;
    if ((CTMF<unsigned_int,0,0,4> *)param_1->m_cur_max <= pCVar3) {
      pCVar2 = pCVar3;
    }
    param_1->m_cur_max = (ulong64)pCVar2;
    if (pCVar1 != (CTMF<unsigned_int,0,0,4> *)0x0) {
      pCVar1->m_hash_table_arena = (rrArenaAllocator *)0x0;
      (pCVar1->m_hash_table).m_ptr = (uint *)0x0;
      (pCVar1->m_hash_table).m_alloc = (void *)0x0;
      pCVar1->m_table_size_bits = 0;
      pCVar1->m_hash_row_mask = 0;
      pCVar1->m_base_ptr = (uchar *)0x0;
      pCVar1->m_next_ptr = (uchar *)0x0;
      pCVar1->m_next_row = (uint *)0x0;
      pCVar1->m_next_row_second = (uint *)0x0;
      pCVar1->m_hash_mul = 0;
      pCVar1->m_next_hash = 0;
      return pCVar1;
    }
  }
  return (CTMF<unsigned_int,0,0,4> *)0x0;
}

// swap<oo2::newlzhc_encoder_parse> @ 14f3595f0

void __cdecl
oo2::swap<oo2::newlzhc_encoder_parse>(newlzhc_encoder_parse *param_1,newlzhc_encoder_parse *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = param_2->lrl;
  iVar2 = param_2->ml;
  iVar3 = param_2->offset;
  iVar4 = param_1->lastoffset;
  iVar5 = param_1->lrl;
  iVar6 = param_1->ml;
  iVar7 = param_1->offset;
  param_1->lastoffset = param_2->lastoffset;
  param_1->lrl = iVar1;
  param_1->ml = iVar2;
  param_1->offset = iVar3;
  param_2->lastoffset = iVar4;
  param_2->lrl = iVar5;
  param_2->ml = iVar6;
  param_2->offset = iVar7;
  return;
}

// void_deletor<oo2::CTMF<unsigned_int,0,0,4>_> @ 14f359610

void __cdecl oo2::void_deletor<oo2::CTMF<unsigned_int,0,0,4>_>(void *param_1)

{
  destruct<oo2::CTMF<unsigned_int,0,0,4>_>(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014f359626. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleCore_Plugin_Free)(param_1);
  return;
}

// void_destructor<oo2::CTMF<unsigned_int,0,0,4>_> @ 14f359640

void __cdecl oo2::void_destructor<oo2::CTMF<unsigned_int,0,0,4>_>(void *param_1)

{
  rrArenaAllocator *this;
  
  this = *(rrArenaAllocator **)param_1;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    if ((this == (rrArenaAllocator *)0x0) || (*(void **)((longlong)param_1 + 0x10) == (void *)0x0))
    {
      (*g_fp_OodleCore_Plugin_Free)(*(void **)((longlong)param_1 + 8));
    }
    else {
      if (this->m_unorderedStart != 0) {
        rrArenaAllocator::Free
                  (this,*(void **)((longlong)param_1 + 0x10),
                   (1L << ((byte)*(undefined4 *)((longlong)param_1 + 0x18) & 0x3f)) * 4 + 0x40);
      }
      *(undefined8 *)((longlong)param_1 + 0x10) = 0;
    }
    *(undefined8 *)((longlong)param_1 + 8) = 0;
  }
  return;
}

// CTMF<unsigned_int,0,0,4> @ 14f359650

CTMF<unsigned_int,0,0,4> * __thiscall
oo2::CTMF<unsigned_int,0,0,4>::CTMF<unsigned_int,0,0,4>(CTMF<unsigned_int,0,0,4> *this)

{
  this->m_hash_table_arena = (rrArenaAllocator *)0x0;
  (this->m_hash_table).m_ptr = (uint *)0x0;
  (this->m_hash_table).m_alloc = (void *)0x0;
  this->m_table_size_bits = 0;
  this->m_hash_row_mask = 0;
  this->m_base_ptr = (uchar *)0x0;
  this->m_next_ptr = (uchar *)0x0;
  this->m_next_row = (uint *)0x0;
  this->m_next_row_second = (uint *)0x0;
  this->m_hash_mul = 0;
  this->m_next_hash = 0;
  return this;
}

// vector_a<oo2::newlzhc_encoder_parse> @ 14f359690

vector_a<oo2::newlzhc_encoder_parse> * __thiscall
oo2::vector_a<oo2::newlzhc_encoder_parse>::vector_a<oo2::newlzhc_encoder_parse>
          (vector_a<oo2::newlzhc_encoder_parse> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  return this;
}

// vector_base<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_> @ 14f3596b0

vector_base<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_> *
__thiscall
oo2::vector_base<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>::
vector_base<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>
          (vector_base<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>
           *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->m_size = 0;
  return this;
}

// vector_flex<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_> @ 14f3596d0

vector_flex<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_> *
__thiscall
oo2::vector_flex<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>::
vector_flex<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>
          (vector_flex<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>
           *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  return this;
}

// vector_storage_a<oo2::newlzhc_encoder_parse> @ 14f3596f0

vector_storage_a<oo2::newlzhc_encoder_parse> * __thiscall
oo2::vector_storage_a<oo2::newlzhc_encoder_parse>::vector_storage_a<oo2::newlzhc_encoder_parse>
          (vector_storage_a<oo2::newlzhc_encoder_parse> *this)

{
  this->m_data = (void *)0x0;
  this->m_capacity = 0;
  return this;
}

// UnpackedMatchPair @ 14f359710

UnpackedMatchPair * __thiscall oo2::UnpackedMatchPair::UnpackedMatchPair(UnpackedMatchPair *this)

{
  return this;
}

// ~CTMF<unsigned_int,0,0,4> @ 14f359720

void __thiscall
oo2::CTMF<unsigned_int,0,0,4>::~CTMF<unsigned_int,0,0,4>(CTMF<unsigned_int,0,0,4> *this)

{
  rrArenaAllocator *this_00;
  uint *puVar1;
  void *pvVar2;
  
  this_00 = this->m_hash_table_arena;
  puVar1 = (this->m_hash_table).m_ptr;
  if (puVar1 != (uint *)0x0) {
    if ((this_00 != (rrArenaAllocator *)0x0) &&
       (pvVar2 = (this->m_hash_table).m_alloc, pvVar2 != (void *)0x0)) {
      if (this_00->m_unorderedStart != 0) {
        rrArenaAllocator::Free
                  (this_00,pvVar2,(1L << ((byte)this->m_table_size_bits & 0x3f)) * 4 + 0x40);
      }
      (this->m_hash_table).m_alloc = (void *)0x0;
      (this->m_hash_table).m_ptr = (uint *)0x0;
      return;
    }
    (*g_fp_OodleCore_Plugin_Free)(puVar1);
    (this->m_hash_table).m_ptr = (uint *)0x0;
  }
  return;
}

// ~vector_a<oo2::newlzhc_encoder_parse> @ 14f3597b0

void __thiscall
oo2::vector_a<oo2::newlzhc_encoder_parse>::~vector_a<oo2::newlzhc_encoder_parse>
          (vector_a<oo2::newlzhc_encoder_parse> *this)

{
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  return;
}

// ~vector_base<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_> @ 14f3597d0

void __thiscall
oo2::vector_base<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>::
~vector_base<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>
          (vector_base<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>
           *this)

{
  this->m_size = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  return;
}

// ~vector_flex<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_> @ 14f3597f0

void __thiscall
oo2::vector_flex<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>::
~vector_flex<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>
          (vector_flex<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>
           *this)

{
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  return;
}

// ~vector_storage_a<oo2::newlzhc_encoder_parse> @ 14f359810

void __thiscall
oo2::vector_storage_a<oo2::newlzhc_encoder_parse>::~vector_storage_a<oo2::newlzhc_encoder_parse>
          (vector_storage_a<oo2::newlzhc_encoder_parse> *this)

{
  return;
}

// operator[] @ 14f359820

newlzhc_encoder_parse * __thiscall
oo2::vector_flex<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>::
operator[](vector_flex<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>
           *this,ulong64 param_1)

{
  return (newlzhc_encoder_parse *)(param_1 * 0x10 + *(longlong *)this);
}

// operator[] @ 14f359840

newlzhc_encoder_parse * __thiscall
oo2::vector_flex<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>::
operator[](vector_flex<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>
           *this,ulong64 param_1)

{
  return (newlzhc_encoder_parse *)(param_1 * 0x10 + *(longlong *)this);
}

// operator[] @ 14f359860

int * __thiscall
oo2::newLZHC_PaddedLO_Storage::operator[](newLZHC_PaddedLO_Storage *this,long64 param_1)

{
  return this->contents + param_1 + 8;
}

// operator[] @ 14f359870

int * __thiscall
oo2::newLZHC_PaddedLO_Storage::operator[](newLZHC_PaddedLO_Storage *this,long64 param_1)

{
  return this->contents + param_1 + 8;
}

// operator() @ 14f359880

void __thiscall
oo2::swap_functor<oo2::newlzhc_encoder_parse>::operator()
          (swap_functor<oo2::newlzhc_encoder_parse> *this,newlzhc_encoder_parse *param_1,
          newlzhc_encoder_parse *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = param_2->lrl;
  iVar2 = param_2->ml;
  iVar3 = param_2->offset;
  iVar4 = param_1->lastoffset;
  iVar5 = param_1->lrl;
  iVar6 = param_1->ml;
  iVar7 = param_1->offset;
  param_1->lastoffset = param_2->lastoffset;
  param_1->lrl = iVar1;
  param_1->ml = iVar2;
  param_1->offset = iVar3;
  param_2->lastoffset = iVar4;
  param_2->lrl = iVar5;
  param_2->ml = iVar6;
  param_2->offset = iVar7;
  return;
}

// Add @ 14f3598a0

void __thiscall oo2::newLZHC_LOs::Add(newLZHC_LOs *this,int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  (this->lasts).contents[0xf] = param_1;
  uVar1 = *(undefined8 *)((this->lasts).contents + 9);
  uVar2 = *(undefined8 *)((this->lasts).contents + 0xb);
  uVar3 = *(undefined8 *)((this->lasts).contents + 0xd);
  *(undefined8 *)((this->lasts).contents + 8) = *(undefined8 *)((this->lasts).contents + 7);
  *(undefined8 *)((this->lasts).contents + 10) = uVar1;
  *(undefined8 *)((this->lasts).contents + 0xc) = uVar2;
  *(undefined8 *)((this->lasts).contents + 0xe) = uVar3;
  (this->lasts).contents[8] = param_1;
  return;
}

// CopyTo @ 14f3598d0

void __thiscall oo2::newLZHC_LOs_NoPad::CopyTo(newLZHC_LOs_NoPad *this,newLZHC_LOs *param_1)

{
  (param_1->lasts).contents[8] = this->lasts[0];
  (param_1->lasts).contents[9] = this->lasts[1];
  (param_1->lasts).contents[10] = this->lasts[2];
  (param_1->lasts).contents[0xb] = this->lasts[3];
  (param_1->lasts).contents[0xc] = this->lasts[4];
  (param_1->lasts).contents[0xd] = this->lasts[5];
  (param_1->lasts).contents[0xe] = this->lasts[6];
  return;
}

// Find @ 14f359900

int __thiscall oo2::newLZHC_LOs_NoPad::Find(newLZHC_LOs_NoPad *this,int param_1)

{
  int iVar1;
  
  if (param_1 == this->lasts[0]) {
    return 0;
  }
  if (param_1 == this->lasts[1]) {
    return 1;
  }
  if (param_1 == this->lasts[2]) {
    return 2;
  }
  if (param_1 == this->lasts[3]) {
    return 3;
  }
  if (param_1 == this->lasts[4]) {
    return 4;
  }
  if (param_1 == this->lasts[5]) {
    return 5;
  }
  iVar1 = -1;
  if (param_1 == this->lasts[6]) {
    iVar1 = 6;
  }
  return iVar1;
}

// GetNumBytesZeroNeverAllR @ 14f359960

int __cdecl oo2::GetNumBytesZeroNeverAllR(ulong64 param_1)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    for (; (param_1 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  return (uint)(uVar1 >> 3) & 0x1fffffff;
}

// IsLO @ 14f359970

bool __thiscall oo2::newlzhc_encoder_parse::IsLO(newlzhc_encoder_parse *this)

{
  return this->offset < 1;
}

// LastOffset @ 14f359980

int __thiscall oo2::newLZHC_LOs::LastOffset(newLZHC_LOs *this)

{
  return (this->lasts).contents[8];
}

// LastOffset @ 14f359990

int __thiscall oo2::newLZHC_LOs_NoPad::LastOffset(newLZHC_LOs_NoPad *this)

{
  return this->lasts[0];
}

// Leviathan_Compress @ 14f3599a0

/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

long64 __cdecl
oo2::Leviathan_Compress
          (OodleLZ_Compressor param_1,uchar *param_2,uchar *param_3,long64 param_4,
          OodleLZ_CompressionLevel param_5,OodleLZ_CompressOptions *param_6,uchar *param_7,
          LRMCascade *param_8,rrArenaAllocator *param_9)

{
  ulong64 uVar1;
  ulong64 uVar2;
  long64 lVar3;
  ulong64 uVar4;
  newlz_vtable local_d8;
  
  uVar1 = param_9->m_cur;
  uVar2 = param_9->m_unorderedStart;
  param_9->m_unorderedStart = uVar1;
  newlz_vtable::newlz_vtable(&local_d8);
  Leviathan_FillVTable(&local_d8,param_1,param_4,param_5,param_6,param_7,param_2,param_9);
  if (param_2 == (uchar *)0x0) {
    lVar3 = newlz_enc_mem_bound(&local_d8,param_4);
  }
  else {
    lVar3 = newlz_compress_vtable(&local_d8,param_2,param_3,param_4,param_7,param_8,param_9);
  }
  newlz_vtable::~newlz_vtable(&local_d8);
  if (param_9->m_unorderedStart != 0) {
    uVar4 = param_9->m_cur;
    while (uVar4 != param_9->m_unorderedStart) {
      uVar4 = uVar4 + (-0x10 - *(longlong *)(uVar4 - 0x10));
      param_9->m_cur = uVar4;
    }
    param_9->m_unorderedStart = uVar2;
  }
  param_9->m_cur = uVar1;
  return lVar3;
}

// Leviathan_DecodeOneQuantum @ 14f359b00

/* WARNING: Enum "OodleLZ_Decode_ThreadPhase": Some values do not have unique names */

int __cdecl
oo2::Leviathan_DecodeOneQuantum
          (uchar *param_1,uchar *param_2,uchar *param_3,int param_4,uchar *param_5,long64 param_6,
          void *param_7,long64 param_8,OodleLZ_Decode_ThreadPhase param_9)

{
  newLZHC_chunk_arrays *pnVar1;
  uint uVar2;
  byte bVar3;
  long64 lVar4;
  uint uVar5;
  ushort *puVar6;
  ulonglong uVar7;
  byte *pbVar8;
  uint uVar9;
  size_t _Size;
  uint *_Src;
  OodleLZ_Decode_ThreadPhase OVar10;
  int iVar11;
  char *pcVar12;
  byte *pbVar13;
  newLZHC_chunk_arrays *_Src_00;
  ushort *_Dst;
  uchar *puVar14;
  newLZHC_chunk_arrays *local_58;
  ushort *local_50;
  ushort *local_48;
  uchar *local_40;
  
  puVar14 = (uchar *)(param_8 + (longlong)param_7);
  puVar6 = (ushort *)(param_3 + param_4);
  local_40 = puVar14;
  local_48 = puVar6;
  _Dst = (ushort *)param_1;
  _Src = (uint *)param_3;
  _Src_00 = param_7;
  OVar10 = param_9;
  do {
    if (param_2 <= _Dst) {
      return (int)_Src - (int)param_3;
    }
    _Size = (longlong)param_2 - (longlong)_Dst;
    if (0x20000 < (longlong)_Size) {
      _Size = 0x20000;
    }
    pbVar13 = (byte *)((longlong)_Dst + (param_6 - (longlong)param_1));
    if ((longlong)puVar6 - (longlong)_Src < 4) {
      return -1;
    }
    uVar5 = *_Src;
    uVar2 = (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8;
    uVar7 = (ulonglong)((uVar2 | uVar5 << 0x18) >> 8);
    if (uVar7 < 0x800000) {
      if ((OVar10 & OodleLZ_Decode_ThreadPhase1) == 0) {
        pbVar8 = (byte *)newLZ_get_arraylens((uchar *)_Src,(uchar *)puVar6,&param_8,_Size);
        goto LAB_14f359f73;
      }
      if (((uint *)(_Size + (longlong)_Dst) < _Src) || (puVar6 < _Dst)) {
        bVar3 = (byte)*_Src >> 4;
        uVar5 = (uint)bVar3;
        if ((byte)*_Src < 0x80) {
          if (bVar3 != 0) goto LAB_14f359f1e;
          uVar5 = *_Src;
          local_50 = (ushort *)((longlong)_Src + 3);
          uVar2 = (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8;
          param_8 = (long64)((uVar2 | uVar5 << 0x18 & 0x3ffff00) >> 8);
          if (0x3ffff < (uVar2 | uVar5 << 0x18) >> 8) {
            return -1;
          }
          if ((longlong)_Size < param_8) {
            return -1;
          }
          if ((longlong)puVar6 - (longlong)local_50 < param_8) {
            return -1;
          }
          pbVar8 = (byte *)((param_8 - (longlong)_Src) + (longlong)local_50);
        }
        else {
          uVar5 = uVar5 & 7;
          if ((bVar3 & 7) == 0) {
            local_50 = (ushort *)((longlong)_Src + 2);
            param_8 = (long64)((ushort)((ushort)*_Src >> 8 | (ushort)*_Src << 8) & 0xfff);
            if ((longlong)_Size < param_8) {
              return -1;
            }
            if (puVar6 < (ushort *)(param_8 + (longlong)local_50)) {
              return -1;
            }
            pbVar8 = (byte *)((param_8 - (longlong)_Src) + (longlong)local_50);
          }
          else {
LAB_14f359f1e:
            local_50 = _Dst;
            pbVar8 = (byte *)newLZ_get_array_comp
                                       (uVar5,(uchar **)&local_50,(uchar *)_Src,(uchar *)puVar6,
                                        &param_8,_Size,(uchar *)_Src_00,puVar14);
          }
        }
        if (local_50 != _Dst) {
          return -1;
        }
        goto LAB_14f359f73;
      }
      bVar3 = (byte)*_Src >> 4;
      uVar5 = (uint)bVar3;
      if ((byte)*_Src < 0x80) {
        if (bVar3 == 0) {
          uVar5 = *_Src;
          local_58 = (newLZHC_chunk_arrays *)((longlong)_Src + 3);
          uVar2 = (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8;
          uVar7 = (ulonglong)((uVar2 | uVar5 << 0x18 & 0x3ffff00) >> 8);
          if ((uVar2 | uVar5 << 0x18) >> 8 < 0x40000) {
            if ((longlong)_Size < (longlong)uVar7) {
              pbVar8 = (byte *)0xffffffffffffffff;
              local_58 = _Src_00;
              memcpy(_Dst,_Src_00,_Size);
            }
            else {
              if ((longlong)uVar7 <= (longlong)puVar6 - (longlong)local_58) goto LAB_14f359d85;
              pbVar8 = (byte *)0xffffffffffffffff;
              local_58 = _Src_00;
              memcpy(_Dst,_Src_00,_Size);
            }
          }
          else {
            pbVar8 = (byte *)0xffffffffffffffff;
            local_58 = _Src_00;
            memcpy(_Dst,_Src_00,_Size);
          }
          goto LAB_14f359f73;
        }
LAB_14f359e1f:
        local_58 = _Src_00;
        pbVar8 = (byte *)newLZ_get_array_comp
                                   (uVar5,(uchar **)&local_58,(uchar *)_Src,(uchar *)puVar6,&param_8
                                    ,_Size,(uchar *)_Src_00,puVar14);
LAB_14f359e53:
        if (local_58 != _Src_00) {
          return -1;
        }
        memcpy(_Dst,_Src_00,_Size);
      }
      else {
        uVar5 = uVar5 & 7;
        if ((bVar3 & 7) != 0) goto LAB_14f359e1f;
        local_58 = (newLZHC_chunk_arrays *)((longlong)_Src + 2);
        uVar7 = (ulonglong)((ushort)((ushort)*_Src >> 8 | (ushort)*_Src << 8) & 0xfff);
        if ((longlong)uVar7 <= (longlong)_Size) {
          if (puVar6 < (ushort *)((longlong)local_58->literals_ptrs + (uVar7 - 0x38))) {
            pbVar8 = (byte *)0xffffffffffffffff;
            local_58 = _Src_00;
            memcpy(_Dst,_Src_00,_Size);
            goto LAB_14f359f73;
          }
LAB_14f359d85:
          pbVar8 = (byte *)((uVar7 - (longlong)_Src) + (longlong)local_58);
          param_8 = uVar7;
          goto LAB_14f359e53;
        }
        pbVar8 = (byte *)0xffffffffffffffff;
        local_58 = _Src_00;
        memcpy(_Dst,_Src_00,_Size);
      }
LAB_14f359f73:
      if ((((longlong)pbVar8 < 0) || ((longlong)_Size <= (longlong)pbVar8)) ||
         (puVar6 = local_48, OVar10 = param_9, param_8 != _Size)) {
        return -1;
      }
    }
    else {
      _Src = (uint *)((longlong)_Src + 3);
      uVar7 = (longlong)uVar7 >> 0x13;
      uVar9 = (uint)uVar7 & 0xf;
      pbVar8 = (byte *)(ulonglong)((uVar2 | uVar5 << 0x18 & 0x7ffff00) >> 8);
      if ((longlong)puVar6 - (longlong)_Src < (longlong)pbVar8) {
        return -1;
      }
      if ((longlong)pbVar8 < (longlong)_Size) {
        if ((longlong)_Size < 0x80) {
          ooLogErrorPre();
          if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
          goto LAB_14f35a04b;
          pcVar12 = "OODLE ERROR : corruption : chunk_len >= 128\n";
          iVar11 = 0xd32;
        }
        else {
          lVar4 = OodleLZ_Compressor_ScratchMemSize(OodleLZ_Compressor_Leviathan,_Size);
          if (lVar4 <= (longlong)puVar14 - (longlong)_Src_00) {
            pnVar1 = (newLZHC_chunk_arrays *)((longlong)_Src_00->literals_ptrs + lVar4 + -0x38);
            if ((param_9 & OodleLZ_Decode_ThreadPhase1) != 0) {
              rrMemSetZero(_Src_00,0x1d0);
              lVar4 = newLZHC_decode_chunk_phase1
                                (uVar9,(uchar *)_Src,pbVar8 + (longlong)_Src,(uchar *)_Dst,_Size,
                                 (long64)pbVar13,(uchar *)(_Src_00 + 1),(uchar *)pnVar1,_Src_00);
              if (lVar4 < 0) {
                _Src_00->chunk_ptr = (uchar *)0x0;
                return -1;
              }
            }
            if ((param_9 & OodleLZ_Decode_ThreadPhase2) != 0) {
              if ((ushort *)_Src_00->chunk_ptr != _Dst) {
                return -1;
              }
              lVar4 = newLZHC_decode_chunk_phase2(uVar9,(uchar *)_Dst,_Size,(long64)pbVar13,_Src_00)
              ;
              if (lVar4 < 0) {
                return -1;
              }
            }
            puVar6 = local_48;
            _Src_00 = param_7;
            puVar14 = local_40;
            OVar10 = param_9;
            if (param_9 != OodleLZ_Decode_ThreadPhaseAll) {
              _Src_00 = pnVar1;
            }
            goto LAB_14f359fac;
          }
          ooLogErrorPre();
          if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
          goto LAB_14f35a04b;
          pcVar12 = "OODLE ERROR : Leviathan decoder scratch too small\n";
          iVar11 = 0xd48;
        }
        (*g_fp_OodleCore_Plugin_Printf)
                  (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc.cpp",iVar11,pcVar12);
LAB_14f35a04b:
        ooLogErrorPost();
        return -1;
      }
      if ((longlong)_Size < (longlong)pbVar8) {
        return -1;
      }
      if ((uVar7 & 0xf) != 0) {
        return -1;
      }
      if ((OVar10 & OodleLZ_Decode_ThreadPhase1) != 0) {
        memmove(_Dst,_Src,_Size);
        puVar6 = local_48;
        OVar10 = param_9;
      }
    }
LAB_14f359fac:
    _Src = (uint *)((longlong)_Src + (longlong)pbVar8);
    _Dst = (ushort *)((longlong)_Dst + _Size);
  } while( true );
}

// Leviathan_FillVTable @ 14f35a060

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

void __cdecl
oo2::Leviathan_FillVTable
          (newlz_vtable *param_1,OodleLZ_Compressor param_2,long64 param_3,
          OodleLZ_CompressionLevel param_4,OodleLZ_CompressOptions *param_5,uchar *param_6,
          uchar *param_7,rrArenaAllocator *param_8)

{
  int iVar1;
  uint uVar2;
  OodleSpeedFit *pOVar3;
  code *pcVar4;
  OodleLZ_CompressionLevel OVar5;
  int iVar6;
  float fVar7;
  
  OVar5 = OodleLZ_CompressionLevel_VeryFast;
  if (2 < (int)param_4) {
    OVar5 = param_4;
  }
  iVar1 = GetLZMatchTableBits(param_3,OVar5,param_5,0x10,0x14,0x11,0x18);
  param_1->compressor = param_2;
  param_1->decodeType = 0xc;
  param_1->level = param_4;
  param_1->lambda = 0.0025;
  iVar6 = param_5->spaceSpeedTradeoffBytes;
  fVar7 = __real_43800000;
  if (iVar6 != 0) {
    if (iVar6 < 0) {
      fVar7 = 0.0;
    }
    else {
      fVar7 = (float)iVar6;
    }
  }
  fVar7 = fVar7 * __real_3b800000;
  param_1->chunk_len = 0x20000;
  param_1->pOptions = param_5;
  param_1->try_huff_chunks = true;
  param_1->lambda = fVar7 * ___real_3b23d70a;
  pOVar3 = speedfit_get_default();
  param_1->speedfit = pOVar3;
  uVar2 = 0xff;
  param_1->entropy_flags = 0xff;
  param_1->bitstream_flags = 4;
  if ((int)param_4 < 4) {
    uVar2 = 0xdf;
    param_1->entropy_flags = 0xdf;
  }
  if ((int)param_4 < 3) {
    uVar2 = uVar2 & 0xffffffef;
    param_1->entropy_flags = uVar2;
  }
  if ((int)param_4 < 2) {
    param_1->entropy_flags = uVar2 & 0xfffffffd;
    iVar6 = iVar1;
    if ((param_5->matchTableSizeLog2 < 1) && (iVar6 = 0x13, iVar1 < 0x13)) {
      iVar6 = iVar1;
    }
    newlz_vtable_setup_ctmf<oo2::CTMF<unsigned_int,0,0,4>_>(param_1,param_6,param_7,iVar6,param_8,0)
    ;
    pcVar4 = newLZHC_encode_chunk<oo2::CTMF<unsigned_int,0,0,4>,0,1,5>;
  }
  else if ((int)param_4 < 3) {
    newlz_vtable_setup_ctmf<oo2::CTMF<unsigned_int,1,0,4>_>(param_1,param_6,param_7,iVar1,param_8,0)
    ;
    pcVar4 = newLZHC_encode_chunk<oo2::CTMF<unsigned_int,1,0,4>,0,1,0>;
  }
  else if (param_4 == OodleLZ_CompressionLevel_Fast) {
    iVar6 = iVar1;
    if ((param_5->matchTableSizeLog2 < 1) && (iVar6 = 0x15, iVar1 < 0x15)) {
      iVar6 = iVar1;
    }
    newlz_vtable_setup_ctmf<oo2::CTMF<unsigned_int,3,0,4>_>(param_1,param_6,param_7,iVar6,param_8,0)
    ;
    pcVar4 = newLZHC_encode_chunk<oo2::CTMF<unsigned_int,3,0,4>,1,1,0>;
  }
  else if ((int)param_4 < 6) {
    if (param_4 == OodleLZ_CompressionLevel_Optimal1) {
      newlz_scratchblock::extend(&param_1->carried_encoder_state,0x18820,param_8);
      (param_1->carried_encoder_state).m_size = 0;
      param_1->fp_create_match_finder = CTMF_CreateMatchFinder;
      pcVar4 = newLZHC_encode_chunk_optimal_tll;
      param_1->find_all_matches_num_pairs = 4;
      param_1->wants_dic_limit_splits = false;
    }
    else {
      newlz_vtable_setup_ctmf<oo2::CTMF<unsigned_int,2,8,4>_>
                (param_1,param_6,param_7,iVar1,param_8,0);
      pcVar4 = newLZHC_encode_chunk<oo2::CTMF<unsigned_int,2,8,4>,2,1,0>;
    }
  }
  else {
    newlz_scratchblock::extend(&param_1->carried_encoder_state,0x18820,param_8);
    (param_1->carried_encoder_state).m_size = 0;
    param_1->fp_create_match_finder = SuffixTrie_CreateMatchFinder;
    pcVar4 = newLZHC_encode_chunk_optimal_tll;
    param_1->find_all_matches_num_pairs = 4;
    param_1->wants_dic_limit_splits = true;
  }
  param_1->fp_encode_chunk = pcVar4;
  return;
}

// MTF @ 14f35a320

int __thiscall oo2::newLZHC_LOs::MTF(newLZHC_LOs *this,long64 param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  piVar1 = (this->lasts).contents + param_1;
  uVar4 = *(undefined8 *)(piVar1 + 2);
  iVar3 = (this->lasts).contents[param_1 + 8];
  piVar2 = (this->lasts).contents + param_1 + 4;
  uVar5 = *(undefined8 *)piVar2;
  uVar6 = *(undefined8 *)(piVar2 + 2);
  piVar2 = (this->lasts).contents + param_1 + 1;
  *(undefined8 *)piVar2 = *(undefined8 *)piVar1;
  *(undefined8 *)(piVar2 + 2) = uVar4;
  piVar1 = (this->lasts).contents + param_1 + 5;
  *(undefined8 *)piVar1 = uVar5;
  *(undefined8 *)(piVar1 + 2) = uVar6;
  (this->lasts).contents[8] = iVar3;
  return iVar3;
}

// OodleFree @ 14f35a350

void __cdecl oo2::OodleFree(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f35a350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleCore_Plugin_Free)(param_1);
  return;
}

// OodleFreeSized @ 14f35a360

void __cdecl oo2::OodleFreeSized(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f35a360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleCore_Plugin_Free)(param_1);
  return;
}

// OodleMalloc @ 14f35a380

void * __cdecl oo2::OodleMalloc(long64 param_1)

{
  void *pvVar1;
  
  pvVar1 = (*g_fp_OodleCore_Plugin_MallocAligned)(param_1,0x10);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(param_1);
  }
  return pvVar1;
}

// OodleMallocAligned @ 14f35a3d0

void * __cdecl oo2::OodleMallocAligned(long64 param_1,int param_2)

{
  void *pvVar1;
  
  pvVar1 = (*g_fp_OodleCore_Plugin_MallocAligned)(param_1,param_2);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(param_1);
  }
  return pvVar1;
}

// RR_GET16_NATIVE @ 14f35a410

ushort __cdecl oo2::RR_GET16_NATIVE(void *param_1)

{
  return *(ushort *)param_1;
}

// RR_GET32_NATIVE @ 14f35a420

uint __cdecl oo2::RR_GET32_NATIVE(void *param_1)

{
  return *(uint *)param_1;
}

// RR_GET64_NATIVE @ 14f35a430

ulong64 __cdecl oo2::RR_GET64_NATIVE(void *param_1)

{
  return *(ulong64 *)param_1;
}

// RR_PUT64_NATIVE @ 14f35a440

void __cdecl oo2::RR_PUT64_NATIVE(void *param_1,ulong64 param_2)

{
  *(ulong64 *)param_1 = param_2;
  return;
}

// Reset @ 14f35a450

void __thiscall oo2::newLZHC_LOs::Reset(newLZHC_LOs *this)

{
  (this->lasts).contents[8] = 8;
  (this->lasts).contents[9] = 8;
  (this->lasts).contents[10] = 8;
  (this->lasts).contents[0xb] = 8;
  (this->lasts).contents[0xc] = 8;
  (this->lasts).contents[0xd] = 8;
  (this->lasts).contents[0xe] = 8;
  return;
}

// Reset @ 14f35a490

void __thiscall oo2::newLZHC_LOs_NoPad::Reset(newLZHC_LOs_NoPad *this)

{
  this->lasts[0] = 8;
  this->lasts[1] = 8;
  this->lasts[2] = 8;
  this->lasts[3] = 8;
  this->lasts[4] = 8;
  this->lasts[5] = 8;
  this->lasts[6] = 8;
  return;
}

// Reset_Neg @ 14f35a4d0

void __thiscall oo2::newLZHC_LOs::Reset_Neg(newLZHC_LOs *this)

{
  (this->lasts).contents[8] = -8;
  (this->lasts).contents[9] = -8;
  (this->lasts).contents[10] = -8;
  (this->lasts).contents[0xb] = -8;
  (this->lasts).contents[0xc] = -8;
  (this->lasts).contents[0xd] = -8;
  (this->lasts).contents[0xe] = -8;
  return;
}

// Set @ 14f35a510

void __thiscall oo2::newLZHC_LOs_NoPad::Set(newLZHC_LOs_NoPad *this,newLZHC_LOs *param_1)

{
  this->lasts[0] = (param_1->lasts).contents[8];
  this->lasts[1] = (param_1->lasts).contents[9];
  this->lasts[2] = (param_1->lasts).contents[10];
  this->lasts[3] = (param_1->lasts).contents[0xb];
  this->lasts[4] = (param_1->lasts).contents[0xc];
  this->lasts[5] = (param_1->lasts).contents[0xd];
  this->lasts[6] = (param_1->lasts).contents[0xe];
  return;
}

// SetAdd @ 14f35a540

void __thiscall
oo2::newLZHC_LOs_NoPad::SetAdd(newLZHC_LOs_NoPad *this,newLZHC_LOs_NoPad *param_1,int param_2)

{
  this->lasts[0] = param_2;
  this->lasts[1] = param_1->lasts[0];
  this->lasts[2] = param_1->lasts[1];
  this->lasts[3] = param_1->lasts[2];
  this->lasts[4] = param_1->lasts[3];
  this->lasts[5] = param_1->lasts[4];
  this->lasts[6] = param_1->lasts[5];
  return;
}

// SetMTF @ 14f35a580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
oo2::newLZHC_LOs_NoPad::SetMTF(newLZHC_LOs_NoPad *this,newLZHC_LOs_NoPad *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  int local_60 [4];
  int local_50;
  int local_4c;
  int local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_60[0] = param_1->lasts[0];
  local_60[1] = param_1->lasts[1];
  local_60[2] = param_1->lasts[2];
  local_60[3] = param_1->lasts[3];
  local_50 = param_1->lasts[4];
  local_4c = param_1->lasts[5];
  local_48 = param_1->lasts[6];
  lVar5 = (longlong)param_2;
  uVar1 = *(undefined8 *)(auStack_80 + lVar5 * 4);
  uVar2 = *(undefined8 *)(auStack_78 + lVar5 * 4);
  this->lasts[0] = local_60[lVar5];
  uVar3 = *(undefined8 *)(auStack_70 + lVar5 * 4);
  uVar4 = *(undefined8 *)((longlong)&uStack_68 + lVar5 * 4);
  *(undefined8 *)(auStack_80 + lVar5 * 4 + 4) = uVar1;
  *(undefined8 *)(auStack_78 + lVar5 * 4 + 4) = uVar2;
  *(undefined8 *)(auStack_70 + lVar5 * 4 + 4) = uVar3;
  *(undefined8 *)(local_60 + lVar5 + -1) = uVar4;
  this->lasts[1] = local_60[1];
  this->lasts[2] = local_60[2];
  this->lasts[3] = local_60[3];
  this->lasts[4] = local_50;
  this->lasts[5] = local_4c;
  this->lasts[6] = local_48;
  return;
}

// ThreadProfiler_Pop @ 14f35a640

void __cdecl oo2::ThreadProfiler_Pop(ulong64 param_1)

{
  if (fp_ThreadProfiler_Pop != (_func___cdecl_void_ulong64 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f35a64c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*fp_ThreadProfiler_Pop)(param_1);
    return;
  }
  return;
}

// ThreadProfiler_Push @ 14f35a660

ulong64 __cdecl oo2::ThreadProfiler_Push(char *param_1,ulong64 param_2)

{
  ulong64 uVar1;
  
  if (fp_ThreadProfiler_Push != (_func___cdecl_ulong64_char_ptr_ulong64 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f35a66c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*fp_ThreadProfiler_Push)(param_1,param_2);
    return uVar1;
  }
  return 0xffffffffffffffff;
}

// U8_check @ 14f35a680

uchar __cdecl oo2::U8_check(int param_1)

{
  return (uchar)param_1;
}

// U8_check @ 14f35a690

uchar __cdecl oo2::U8_check(uint param_1)

{
  return (uchar)param_1;
}

// U8_void @ 14f35a6a0

uchar * __cdecl oo2::U8_void(void *param_1)

{
  return param_1;
}

// U8_void @ 14f35a6b0

uchar * __cdecl oo2::U8_void(void *param_1)

{
  return param_1;
}

// allocate @ 14f35a6c0

void __thiscall
oo2::CTMF<unsigned_int,0,0,4>::allocate
          (CTMF<unsigned_int,0,0,4> *this,int param_1,int param_2,int param_3,
          rrArenaAllocator *param_4,int param_5)

{
  void *pvVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  int iVar6;
  ulonglong uVar7;
  uint *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  this->m_table_size_bits = param_1;
  uVar3 = 0;
  this->m_next_ptr = (uchar *)0x0;
  this->m_hash_row_mask = (1 << ((byte)param_1 & 0x1f)) - 1;
  iVar2 = 4;
  if (0 < param_5) {
    iVar2 = param_5;
  }
  if (0 < iVar2) {
    iVar6 = 8;
    if (iVar2 < 8) {
      iVar6 = iVar2;
    }
    iVar2 = 1;
    if (1 < iVar6) {
      iVar2 = iVar6;
    }
    uVar3 = -0x30e44323485a9b9d << (('\b' - (char)iVar2) * '\b' & 0x3fU);
  }
  this->m_hash_mul = uVar3;
  lVar9 = (1L << ((byte)param_1 & 0x3f)) * 4;
  if (param_4 != (rrArenaAllocator *)0x0) {
    pvVar1 = (void *)param_4->m_cur;
    uVar7 = lVar9 + 0x4fU & 0xfffffffffffffff0;
    uVar10 = (ulonglong)(-(uint)(param_4->m_unorderedStart != 0) & 0x10);
    if (param_4->m_size + param_4->m_base < (longlong)pvVar1 + uVar7 + uVar10) {
      (this->m_hash_table).m_alloc = (void *)0x0;
    }
    else {
      puVar5 = (ulonglong *)(uVar7 + (longlong)pvVar1);
      param_4->m_cur = (ulong64)puVar5;
      if (param_4->m_unorderedStart != 0) {
        *puVar5 = uVar7;
        puVar5[1] = 0;
        param_4->m_cur = param_4->m_cur + uVar10;
        puVar5 = (ulonglong *)param_4->m_cur;
      }
      puVar4 = (ulonglong *)param_4->m_cur_max;
      if ((ulonglong *)param_4->m_cur_max <= puVar5) {
        puVar4 = puVar5;
      }
      param_4->m_cur_max = (ulong64)puVar4;
      (this->m_hash_table).m_alloc = pvVar1;
      if (pvVar1 != (void *)0x0) {
        puVar8 = (uint *)((longlong)pvVar1 + 0x3fU & 0xffffffffffffffc0);
        goto LAB_14f35a7ed;
      }
    }
  }
  puVar8 = (*g_fp_OodleCore_Plugin_MallocAligned)(lVar9,0x40);
  if (puVar8 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(lVar9);
  }
LAB_14f35a7ed:
  (this->m_hash_table).m_ptr = puVar8;
  this->m_hash_table_arena = param_4;
  memset((this->m_hash_table).m_ptr,0,(1L << ((byte)this->m_table_size_bits & 0x3f)) << 2);
  return;
}

// at @ 14f35a830

newlzhc_encoder_parse * __thiscall
oo2::vector_flex<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>::at
          (vector_flex<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>
           *this,ulong64 param_1)

{
  return (newlzhc_encoder_parse *)(param_1 * 0x10 + *(longlong *)this);
}

// at @ 14f35a850

newlzhc_encoder_parse * __thiscall
oo2::vector_flex<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>::at
          (vector_flex<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>
           *this,ulong64 param_1)

{
  return (newlzhc_encoder_parse *)(param_1 * 0x10 + *(longlong *)this);
}

// back @ 14f35a870

newlzhc_encoder_parse * __thiscall
oo2::vector_flex<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>::
back(vector_flex<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>
     *this)

{
  return (newlzhc_encoder_parse *)
         (*(longlong *)this + -0x10 + *(longlong *)&this->field_0x10 * 0x10);
}

// begin @ 14f35a890

newlzhc_encoder_parse * __thiscall
oo2::vector_base<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>::
begin(vector_base<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>
      *this)

{
  return (newlzhc_encoder_parse *)this->_padding_;
}

// begin @ 14f35a8a0

newlzhc_encoder_parse * __thiscall
oo2::vector_base<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>::
begin(vector_base<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>
      *this)

{
  return (newlzhc_encoder_parse *)this->_padding_;
}

// begin @ 14f35a8b0

newlzhc_encoder_parse * __thiscall
oo2::vector_flex<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>::
begin(vector_flex<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>
      *this)

{
  return *(newlzhc_encoder_parse **)this;
}

// begin @ 14f35a8c0

newlzhc_encoder_parse * __thiscall
oo2::vector_flex<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>::
begin(vector_flex<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>
      *this)

{
  return *(newlzhc_encoder_parse **)this;
}

// begin @ 14f35a8d0

newlzhc_encoder_parse * __thiscall
oo2::vector_storage_a<oo2::newlzhc_encoder_parse>::begin
          (vector_storage_a<oo2::newlzhc_encoder_parse> *this)

{
  return this->m_data;
}

// begin @ 14f35a8e0

newlzhc_encoder_parse * __thiscall
oo2::vector_storage_a<oo2::newlzhc_encoder_parse>::begin
          (vector_storage_a<oo2::newlzhc_encoder_parse> *this)

{
  return this->m_data;
}

// capacity @ 14f35a8f0

ulong64 __thiscall
oo2::vector_base<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>::
capacity(vector_base<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>
         *this)

{
  return this->_padding_;
}

// capacity @ 14f35a900

ulong64 __thiscall
oo2::vector_storage_a<oo2::newlzhc_encoder_parse>::capacity
          (vector_storage_a<oo2::newlzhc_encoder_parse> *this)

{
  return this->m_capacity;
}

// clear @ 14f35a910

void __thiscall
oo2::vector_flex<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>::
clear(vector_flex<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>
      *this)

{
  *(undefined8 *)&this->field_0x10 = 0;
  return;
}

// cost_add_literal @ 14f35a920

int __cdecl
oo2::cost_add_literal
          (uchar *param_1,long64 param_2,long64 param_3,newlzhc_codecosts *param_4,int param_5)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  switch(param_4->chunktype) {
  case 0:
    return param_4->codecost_literal[0][(byte)(param_1[param_2] - param_1[param_2 - param_3])];
  case 1:
    return param_4->codecost_literal[0][param_1[param_2]];
  case 2:
    return param_4->codecost_literal[0]
           [(ulonglong)(byte)(param_1[param_2] - param_1[param_2 - param_3]) +
            (ulonglong)(-(uint)(param_5 != 0) & 0x100)];
  case 3:
    bVar1 = param_1[param_2] - param_1[param_2 - param_3];
    uVar3 = (uint)param_2 & 3;
    break;
  case 4:
    return param_4->codecost_literal[param_1[param_2 + -1] >> 4][param_1[param_2]];
  case 5:
    bVar1 = param_1[param_2] - param_1[param_2 - param_3];
    uVar3 = (uint)param_2 & 0xf;
    break;
  default:
    goto switchD_14f35a94f_default;
  }
  iVar2 = param_4->codecost_literal[uVar3][bVar1];
switchD_14f35a94f_default:
  return iVar2;
}

// cost_excess_huge @ 14f35aa30

int __cdecl oo2::cost_excess_huge(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (param_1 - 0xffU >> 6) + 1;
  iVar1 = 0x1f;
  if (uVar2 != 0) {
    for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  return param_2[0xff] + 0xe0 + iVar1 * 0x40;
}

// cost_excess_lrl @ 14f35aa60

int __cdecl oo2::cost_excess_lrl(int param_1,newlzhc_codecosts *param_2)

{
  int iVar1;
  
  if (param_1 < 0xff) {
    return param_2->codecost_excess_lrl[param_1];
  }
  iVar1 = cost_excess_huge(param_1,param_2->codecost_excess_lrl);
  return iVar1;
}

// cost_excess_ml @ 14f35aa90

int __cdecl oo2::cost_excess_ml(int param_1,newlzhc_codecosts *param_2)

{
  int iVar1;
  
  if (param_1 < 0xff) {
    return param_2->codecost_excess_ml[param_1];
  }
  iVar1 = cost_excess_huge(param_1,param_2->codecost_excess_ml);
  return iVar1;
}

// cost_lo_match @ 14f35aac0

int __cdecl
oo2::cost_lo_match(int param_1,int param_2,int param_3,newlzhc_codecosts *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)(uint)param_5;
  iVar2 = param_2 + -9;
  iVar1 = (param_1 + param_3 * 4) * 8;
  if (iVar2 < 0) {
    return param_4->codecost_literal[(ulonglong)(param_4->packet_pos_mask & param_5) + 0xf]
           [(longlong)(iVar1 + param_2) + 0xfe];
  }
  if (iVar2 < 0xff) {
    iVar2 = param_4->codecost_offset2[(longlong)param_2 + 0xf7];
  }
  else {
    iVar2 = cost_excess_huge(iVar2,param_4->codecost_excess_ml);
  }
  return iVar2 + param_4->codecost_packet[param_4->packet_pos_mask & uVar3][(longlong)iVar1 + 7];
}

// cost_normal_match @ 14f35ab60

int __cdecl oo2::cost_normal_match(int param_1,int param_2,newlzhc_codecosts *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2 + -9;
  iVar2 = param_1 * 8;
  if (iVar1 < 0) {
    return param_3->codecost_packet[param_3->packet_pos_mask & param_4]
           [(longlong)(iVar2 + param_2) + 0xde];
  }
  if (iVar1 < 0xff) {
    iVar1 = param_3->codecost_offset2[(longlong)param_2 + 0xf7];
  }
  else {
    iVar1 = cost_excess_huge(iVar1,param_3->codecost_excess_ml);
  }
  return iVar1 + param_3->codecost_packet[param_3->packet_pos_mask & param_4]
                 [(longlong)iVar2 + 0xe7];
}

// cost_offset @ 14f35ac00

int __cdecl oo2::cost_offset(int param_1,newlzhc_codecosts *param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar1 = param_2->offset_alt_modulo;
  if (uVar1 == 0) {
    if (param_1 < 0x7fff08) {
      uVar1 = param_1 + 0xf8;
      iVar4 = 0x1f;
      if (uVar1 != 0) {
        for (; uVar1 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      bVar2 = ((char)iVar4 + -8) * '\x10' | (byte)uVar1 & 0xf;
    }
    else {
      iVar4 = 0x1f;
      if (param_1 - 0x7eff00U != 0) {
        for (; param_1 - 0x7eff00U >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      bVar2 = (byte)iVar4 | 0xf0;
    }
    if (bVar2 < 0xf0) {
      iVar4 = (bVar2 >> 4) + 4;
    }
    else {
      iVar4 = bVar2 - 0xe0;
    }
    iVar3 = param_2->codecost_offset1[bVar2] + iVar4 * 0x20;
    iVar4 = iVar3 + 0xc;
    if (param_1 < 0x7fff08) {
      iVar4 = iVar3;
    }
    return iVar4;
  }
  if (uVar1 == 1) {
    uVar1 = param_1 + 8;
    iVar4 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    bVar2 = (char)iVar4 - 3;
    bVar2 = (byte)(uVar1 >> (bVar2 & 0x1f)) ^ 8 | bVar2 * '\b';
    return (uint)(bVar2 >> 3) * 0x20 + param_2->codecost_offset1[bVar2];
  }
  uVar5 = (uint)param_1 / uVar1 + 8;
  iVar4 = 0x1f;
  if (uVar5 != 0) {
    for (; uVar5 >> iVar4 == 0; iVar4 = iVar4 + -1) {
    }
  }
  bVar2 = (char)iVar4 - 3;
  bVar2 = (byte)(uVar5 >> (bVar2 & 0x1f)) ^ 8 | bVar2 * '\b';
  return param_2->codecost_offset2[(ulonglong)(uint)param_1 % (ulonglong)uVar1 & 0xff] +
         param_2->codecost_offset1[bVar2] + (uint)(bVar2 >> 3) * 0x20;
}

// empty @ 14f35acf0

bool __thiscall
oo2::vector_flex<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>::
empty(vector_flex<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>
      *this)

{
  return *(longlong *)&this->field_0x10 == 0;
}

// end @ 14f35ad00

newlzhc_encoder_parse * __thiscall
oo2::vector_base<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>::end
          (vector_base<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>
           *this)

{
  return (newlzhc_encoder_parse *)(this->m_size * 0x10 + this->_padding_);
}

// end @ 14f35ad20

newlzhc_encoder_parse * __thiscall
oo2::vector_base<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>::end
          (vector_base<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>
           *this)

{
  return (newlzhc_encoder_parse *)(this->m_size * 0x10 + this->_padding_);
}

// end @ 14f35ad40

newlzhc_encoder_parse * __thiscall
oo2::vector_flex<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>::end
          (vector_flex<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>
           *this)

{
  return (newlzhc_encoder_parse *)(*(longlong *)&this->field_0x10 * 0x10 + *(longlong *)this);
}

// end @ 14f35ad60

newlzhc_encoder_parse * __thiscall
oo2::vector_flex<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>::end
          (vector_flex<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>
           *this)

{
  return (newlzhc_encoder_parse *)(*(longlong *)&this->field_0x10 * 0x10 + *(longlong *)this);
}

// find_candidates @ 14f35ad80

uint __thiscall
oo2::CTMF<unsigned_int,0,0,4>::find_candidates
          (CTMF<unsigned_int,0,0,4> *this,uint *param_1,uint *param_2,uint *param_3,uint param_4,
          uint param_5)

{
  uint uVar1;
  
  uVar1 = *param_2;
  *param_1 = param_4 - uVar1 & 0x3ffffff;
  return (uint)(((uVar1 ^ param_5) & 0xfc000000) == 0);
}

// find_candidates_generic @ 14f35adb0

uint __thiscall
oo2::CTMF<unsigned_int,0,0,4>::find_candidates_generic
          (CTMF<unsigned_int,0,0,4> *this,uint *param_1,uint *param_2,uint *param_3,uint param_4,
          uint param_5)

{
  uint uVar1;
  
  uVar1 = *param_2;
  *param_1 = param_4 - uVar1 & 0x3ffffff;
  return (uint)(((uVar1 ^ param_5) & 0xfc000000) == 0);
}

// get_mem_size @ 14f35ade0

long64 __cdecl oo2::CTMF<unsigned_int,0,0,4>::get_mem_size(int param_1,int param_2,int param_3)

{
  return (1L << ((byte)param_1 & 0x3f)) << 2;
}

// getmatchlen_after4 @ 14f35ae00

int __cdecl oo2::getmatchlen_after4(uchar *param_1,uchar *param_2,uchar *param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  
  puVar1 = (ulonglong *)(param_1 + 4);
  puVar3 = puVar1;
  while( true ) {
    if (param_3 + -8 < puVar3) {
      lVar6 = (longlong)puVar3 - (longlong)puVar1;
      iVar5 = (int)lVar6;
      for (; (puVar3 < param_3 &&
             (iVar5 = (int)lVar6,
             (char)*puVar3 == *(char *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3))
             ); puVar3 = (ulonglong *)((longlong)puVar3 + 1)) {
        lVar6 = lVar6 + 1;
        iVar5 = (int)lVar6;
      }
      return iVar5 + 4;
    }
    uVar4 = *(ulonglong *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3) ^ *puVar3;
    if (uVar4 != 0) break;
    puVar3 = puVar3 + 1;
  }
  uVar2 = 0;
  if (uVar4 != 0) {
    for (; (uVar4 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
    }
  }
  return (int)puVar3 + ((int)(uVar2 >> 3) - (int)puVar1) + 4;
}

// getmatchlen_mml1 @ 14f35ae80

int __cdecl oo2::getmatchlen_mml1(uchar *param_1,uchar *param_2,uchar *param_3)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  puVar2 = (ulonglong *)param_1;
  while( true ) {
    if (param_3 + -8 < puVar2) {
      lVar5 = (longlong)puVar2 - (longlong)param_1;
      iVar3 = (int)lVar5;
      for (; (puVar2 < param_3 &&
             (iVar3 = (int)lVar5,
             (char)*puVar2 == *(char *)((longlong)puVar2 + ((longlong)param_2 - (longlong)param_1)))
             ); puVar2 = (ulonglong *)((longlong)puVar2 + 1)) {
        lVar5 = lVar5 + 1;
        iVar3 = (int)lVar5;
      }
      return iVar3;
    }
    uVar4 = *(ulonglong *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2) ^ *puVar2;
    if (uVar4 != 0) break;
    puVar2 = puVar2 + 1;
  }
  uVar1 = 0;
  if (uVar4 != 0) {
    for (; (uVar4 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  return (int)puVar2 + ((int)(uVar1 >> 3) - (int)param_1);
}

// getmatchlen_mml1_forceinline @ 14f35aee0

long64 __cdecl oo2::getmatchlen_mml1_forceinline(uchar *param_1,uchar *param_2,uchar *param_3)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  puVar2 = (ulonglong *)param_1;
  while( true ) {
    if (param_3 + -8 < puVar2) {
      lVar4 = (longlong)puVar2 - (longlong)param_1;
      for (; (puVar2 < param_3 &&
             ((char)*puVar2 == *(char *)((longlong)puVar2 + ((longlong)param_2 - (longlong)param_1))
             )); puVar2 = (ulonglong *)((longlong)puVar2 + 1)) {
        lVar4 = lVar4 + 1;
      }
      return lVar4;
    }
    uVar3 = *(ulonglong *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2) ^ *puVar2;
    if (uVar3 != 0) break;
    puVar2 = puVar2 + 1;
  }
  uVar1 = 0;
  if (uVar3 != 0) {
    for (; (uVar3 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  return (long64)((longlong)puVar2 + ((uVar1 >> 3) - (longlong)param_1));
}

// getmatchlen_mml3_one32 @ 14f35af40

int __cdecl oo2::getmatchlen_mml3_one32(uint param_1,uchar *param_2,uchar *param_3,uchar *param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if ((param_1 ^ *(uint *)param_3) != 0) {
    iVar3 = 3;
    if (((param_1 ^ *(uint *)param_3) & 0xffffff) != 0) {
      iVar3 = 0;
    }
    return iVar3;
  }
  puVar1 = (ulonglong *)(param_2 + 4);
  puVar4 = puVar1;
  while( true ) {
    if (param_4 + -8 < puVar4) {
      lVar6 = (longlong)puVar4 - (longlong)puVar1;
      iVar3 = (int)lVar6;
      for (; (puVar4 < param_4 &&
             (iVar3 = (int)lVar6,
             (char)*puVar4 == *(char *)(((longlong)param_3 - (longlong)param_2) + (longlong)puVar4))
             ); puVar4 = (ulonglong *)((longlong)puVar4 + 1)) {
        lVar6 = lVar6 + 1;
        iVar3 = (int)lVar6;
      }
      return iVar3 + 4;
    }
    uVar5 = *(ulonglong *)(((longlong)param_3 - (longlong)param_2) + (longlong)puVar4) ^ *puVar4;
    if (uVar5 != 0) break;
    puVar4 = puVar4 + 1;
  }
  uVar2 = 0;
  if (uVar5 != 0) {
    for (; (uVar5 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
    }
  }
  return ((int)(uVar2 >> 3) - (int)puVar1) + (int)puVar4 + 4;
}

// getmatchlen_mml3_two32 @ 14f35afe0

int __cdecl
oo2::getmatchlen_mml3_two32(uint param_1,uint param_2,uchar *param_3,uchar *param_4,uchar *param_5)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if ((param_1 ^ param_2) != 0) {
    iVar3 = 3;
    if (((param_1 ^ param_2) & 0xffffff) != 0) {
      iVar3 = 0;
    }
    return iVar3;
  }
  puVar1 = (ulonglong *)(param_3 + 4);
  puVar4 = puVar1;
  while( true ) {
    if (param_5 + -8 < puVar4) {
      lVar6 = (longlong)puVar4 - (longlong)puVar1;
      iVar3 = (int)lVar6;
      for (; (puVar4 < param_5 &&
             (iVar3 = (int)lVar6,
             (char)*puVar4 == *(char *)(((longlong)param_4 - (longlong)param_3) + (longlong)puVar4))
             ); puVar4 = (ulonglong *)((longlong)puVar4 + 1)) {
        lVar6 = lVar6 + 1;
        iVar3 = (int)lVar6;
      }
      return iVar3 + 4;
    }
    uVar5 = *(ulonglong *)(((longlong)param_4 - (longlong)param_3) + (longlong)puVar4) ^ *puVar4;
    if (uVar5 != 0) break;
    puVar4 = puVar4 + 1;
  }
  uVar2 = 0;
  if (uVar5 != 0) {
    for (; (uVar5 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
    }
  }
  return ((int)(uVar2 >> 3) - (int)puVar1) + (int)puVar4 + 4;
}

// getmatchlen_mml4_one32 @ 14f35b080

int __cdecl oo2::getmatchlen_mml4_one32(uint param_1,uchar *param_2,uchar *param_3,uchar *param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  
  if (param_1 != *(uint *)param_3) {
    return 0;
  }
  puVar1 = (ulonglong *)(param_2 + 4);
  puVar3 = puVar1;
  while( true ) {
    if (param_4 + -8 < puVar3) {
      lVar6 = (longlong)puVar3 - (longlong)puVar1;
      iVar5 = (int)lVar6;
      for (; (puVar3 < param_4 &&
             (iVar5 = (int)lVar6,
             (char)*puVar3 == *(char *)(((longlong)param_3 - (longlong)param_2) + (longlong)puVar3))
             ); puVar3 = (ulonglong *)((longlong)puVar3 + 1)) {
        lVar6 = lVar6 + 1;
        iVar5 = (int)lVar6;
      }
      return iVar5 + 4;
    }
    uVar4 = *(ulonglong *)(((longlong)param_3 - (longlong)param_2) + (longlong)puVar3) ^ *puVar3;
    if (uVar4 != 0) break;
    puVar3 = puVar3 + 1;
  }
  uVar2 = 0;
  if (uVar4 != 0) {
    for (; (uVar4 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
    }
  }
  return ((int)(uVar2 >> 3) - (int)puVar1) + (int)puVar3 + 4;
}

// getmatchlen_mml4_two32 @ 14f35b100

int __cdecl
oo2::getmatchlen_mml4_two32(uint param_1,uint param_2,uchar *param_3,uchar *param_4,uchar *param_5)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  
  if (param_1 != param_2) {
    return 0;
  }
  puVar1 = (ulonglong *)(param_3 + 4);
  puVar3 = puVar1;
  while( true ) {
    if (param_5 + -8 < puVar3) {
      lVar6 = (longlong)puVar3 - (longlong)puVar1;
      iVar5 = (int)lVar6;
      for (; (puVar3 < param_5 &&
             (iVar5 = (int)lVar6,
             (char)*puVar3 == *(char *)(((longlong)param_4 - (longlong)param_3) + (longlong)puVar3))
             ); puVar3 = (ulonglong *)((longlong)puVar3 + 1)) {
        lVar6 = lVar6 + 1;
        iVar5 = (int)lVar6;
      }
      return iVar5 + 4;
    }
    uVar4 = *(ulonglong *)(((longlong)param_4 - (longlong)param_3) + (longlong)puVar3) ^ *puVar3;
    if (uVar4 != 0) break;
    puVar3 = puVar3 + 1;
  }
  uVar2 = 0;
  if (uVar4 != 0) {
    for (; (uVar4 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
    }
  }
  return ((int)(uVar2 >> 3) - (int)puVar1) + (int)puVar3 + 4;
}

// hash @ 14f35b180

uint __thiscall oo2::CTMF<unsigned_int,0,0,4>::hash(CTMF<unsigned_int,0,0,4> *this,uchar *param_1)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = (byte)this->m_table_size_bits & 0x1f;
  uVar2 = (uint)(this->m_hash_mul * *(longlong *)param_1 >> 0x20);
  return uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
}

// hash_bytes_64 @ 14f35b1a0

ulong64 __cdecl oo2::`anonymous_namespace'::hash_bytes_64(uchar *param_1,ulong64 param_2)

{
  return param_2 * *(longlong *)param_1;
}

// havematch_better @ 14f35b1c0

bool __cdecl
oo2::havematch_better(uchar *param_1,uchar *param_2,uchar *param_3,long64 param_4,long64 *param_5)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  char *pcVar4;
  
  if ((param_4 < (longlong)param_3 - (longlong)param_1) && (param_1[param_4] == param_2[param_4])) {
    puVar2 = (ulonglong *)param_1;
    if (param_1 <= param_3 + -8) {
LAB_14f35b1f0:
      uVar3 = *(ulonglong *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2) ^ *puVar2;
      if (uVar3 == 0) goto code_r0x00014f35b1f9;
      uVar1 = 0;
      if (uVar3 != 0) {
        for (; (uVar3 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
        }
      }
      pcVar4 = (char *)(((uVar1 >> 3) - (longlong)param_1) + (longlong)puVar2);
      goto LAB_14f35b225;
    }
LAB_14f35b205:
    pcVar4 = (char *)((longlong)puVar2 - (longlong)param_1);
    for (; (puVar2 < param_3 &&
           ((char)*puVar2 == *(char *)((longlong)puVar2 + ((longlong)param_2 - (longlong)param_1))))
        ; puVar2 = (ulonglong *)((longlong)puVar2 + 1)) {
      pcVar4 = pcVar4 + 1;
    }
LAB_14f35b225:
    if (param_4 < (longlong)pcVar4) {
      *param_5 = (long64)pcVar4;
      return true;
    }
  }
  return false;
code_r0x00014f35b1f9:
  puVar2 = puVar2 + 1;
  if (param_3 + -8 < puVar2) goto LAB_14f35b205;
  goto LAB_14f35b1f0;
}

// havematch_mml2_one32 @ 14f35b260

bool __cdecl
oo2::havematch_mml2_one32(uint param_1,uchar *param_2,uchar *param_3,uchar *param_4,int *param_5)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  
  if ((short)param_1 != (short)*(uint *)param_3) {
    return false;
  }
  uVar3 = *(uint *)param_3 ^ param_1;
  if (uVar3 == 0) {
    puVar1 = (ulonglong *)(param_2 + 4);
    puVar4 = puVar1;
    while( true ) {
      if (param_4 + -8 < puVar4) {
        lVar7 = (longlong)puVar4 - (longlong)puVar1;
        iVar6 = (int)lVar7;
        for (; (puVar4 < param_4 &&
               (iVar6 = (int)lVar7,
               (char)*puVar4 ==
               *(char *)(((longlong)param_3 - (longlong)param_2) + (longlong)puVar4)));
            puVar4 = (ulonglong *)((longlong)puVar4 + 1)) {
          lVar7 = lVar7 + 1;
          iVar6 = (int)lVar7;
        }
        *param_5 = iVar6 + 4;
        return true;
      }
      uVar5 = *(ulonglong *)(((longlong)param_3 - (longlong)param_2) + (longlong)puVar4) ^ *puVar4;
      if (uVar5 != 0) break;
      puVar4 = puVar4 + 1;
    }
    uVar2 = 0;
    if (uVar5 != 0) {
      for (; (uVar5 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
      }
    }
    *param_5 = ((int)(uVar2 >> 3) - (int)puVar1) + (int)puVar4 + 4;
    return true;
  }
  *param_5 = 3 - (uint)((uVar3 & 0xffffff) != 0);
  return true;
}

// init @ 14f35b310

void __thiscall
oo2::vector_base<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>::
init(vector_base<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>
     *this)

{
  this->m_size = 0;
  return;
}

// insert @ 14f35b320

void __thiscall
oo2::CTMF<unsigned_int,0,0,4>::insert
          (CTMF<unsigned_int,0,0,4> *this,uint *param_1,uint param_2,uint param_3)

{
  *param_1 = (param_2 ^ param_3) & 0x3ffffff ^ param_3;
  return;
}

// insert @ 14f35b340

void __thiscall
oo2::vector_base<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>::
insert(vector_base<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>
       *this,ulong64 param_1,newlzhc_encoder_parse *param_2,newlzhc_encoder_parse *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  code *pcVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  
  uVar3 = this->m_size;
  lVar11 = (longlong)param_3 - (longlong)param_2 >> 4;
  uVar1 = lVar11 + param_1;
  if (((ulonglong)this->_padding_ < uVar3 + lVar11) &&
     (iVar6 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h",0x3f,
                                 "oo2::vector_storage_a<struct oo2::newlzhc_encoder_parse>::needmakefit"
                                 ,"newsize <= m_capacity"), iVar6 != 0)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar7 = this->_padding_;
  this->m_size = this->m_size + lVar11;
  puVar9 = (undefined8 *)(uVar3 * 0x10 + lVar7);
  if (uVar3 < uVar1) {
    lVar11 = uVar3 - param_1;
    lVar13 = uVar1 - uVar3;
    if (lVar13 != 0) {
      lVar12 = lVar11 * 0x10 - (longlong)puVar9;
      lVar7 = lVar13;
      do {
        if (puVar9 != (undefined8 *)0x0) {
          puVar10 = (undefined8 *)(lVar12 + (longlong)param_2 + (longlong)puVar9);
          uVar5 = puVar10[1];
          *puVar9 = *puVar10;
          puVar9[1] = uVar5;
        }
        puVar9 = puVar9 + 2;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      lVar7 = this->_padding_;
    }
    puVar9 = (undefined8 *)((lVar13 + uVar3) * 0x10 + lVar7);
    if (lVar11 != 0) {
      lVar13 = (param_1 * 0x10 + lVar7) - (longlong)puVar9;
      lVar7 = lVar11;
      do {
        if (puVar9 != (undefined8 *)0x0) {
          puVar10 = (undefined8 *)(lVar13 + (longlong)puVar9);
          uVar5 = puVar10[1];
          *puVar9 = *puVar10;
          puVar9[1] = uVar5;
        }
        puVar9 = puVar9 + 2;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      puVar10 = (undefined8 *)(this->_padding_ + param_1 * 0x10);
      puVar9 = puVar10;
      do {
        puVar8 = (undefined8 *)((longlong)puVar9 + ((longlong)param_2 - (longlong)puVar10));
        uVar5 = puVar8[1];
        *puVar9 = *puVar8;
        puVar9[1] = uVar5;
        lVar11 = lVar11 + -1;
        puVar9 = puVar9 + 2;
      } while (lVar11 != 0);
    }
  }
  else {
    if (lVar11 != 0) {
      lVar13 = ((uVar3 - lVar11) * 0x10 + lVar7) - (longlong)puVar9;
      lVar7 = lVar11;
      do {
        if (puVar9 != (undefined8 *)0x0) {
          puVar10 = (undefined8 *)(lVar13 + (longlong)puVar9);
          uVar5 = puVar10[1];
          *puVar9 = *puVar10;
          puVar9[1] = uVar5;
        }
        puVar9 = puVar9 + 2;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      lVar7 = this->_padding_;
    }
    puVar10 = (undefined8 *)(param_1 * 0x10 + lVar7);
    puVar9 = puVar10 + lVar11 * 2;
    lVar7 = uVar3 - uVar1;
    if (puVar10 < puVar9) {
      lVar7 = lVar7 + -1;
      if (-1 < lVar7) {
        puVar8 = puVar9 + lVar7 * 2;
        do {
          lVar7 = lVar7 + -1;
          puVar2 = (undefined8 *)(((longlong)puVar10 - (longlong)puVar9) + (longlong)puVar8);
          uVar5 = puVar2[1];
          *puVar8 = *puVar2;
          puVar8[1] = uVar5;
          puVar8 = puVar8 + -2;
        } while (-1 < lVar7);
      }
    }
    else if (lVar7 != 0) {
      puVar8 = puVar9;
      do {
        puVar2 = (undefined8 *)((longlong)puVar8 + ((longlong)puVar10 - (longlong)puVar9));
        uVar5 = puVar2[1];
        *puVar8 = *puVar2;
        puVar8[1] = uVar5;
        lVar7 = lVar7 + -1;
        puVar8 = puVar8 + 2;
      } while (lVar7 != 0);
    }
    if (lVar11 != 0) {
      puVar9 = puVar10;
      do {
        puVar8 = (undefined8 *)((longlong)puVar9 + ((longlong)param_2 - (longlong)puVar10));
        uVar5 = puVar8[1];
        *puVar9 = *puVar8;
        puVar9[1] = uVar5;
        lVar11 = lVar11 + -1;
        puVar9 = puVar9 + 2;
      } while (lVar11 != 0);
    }
  }
  return;
}

// insert @ 14f35b540

newlzhc_encoder_parse * __thiscall
oo2::vector_flex<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>::
insert(vector_flex<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>
       *this,newlzhc_encoder_parse *param_1,newlzhc_encoder_parse *param_2,
      newlzhc_encoder_parse *param_3)

{
  ulong64 uVar1;
  
  uVar1 = (longlong)param_1 - *(longlong *)this >> 4;
  vector_base<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>::insert
            ((vector_base<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>
              *)this,uVar1,param_2,param_3);
  return (newlzhc_encoder_parse *)(uVar1 * 0x10 + *(longlong *)this);
}

// makefit1 @ 14f35b580

newlzhc_encoder_parse * __thiscall
oo2::vector_base<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>::
makefit1(vector_base<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>
         *this,ulong64 param_1)

{
  return (newlzhc_encoder_parse *)0x0;
}

// makefit1 @ 14f35b590

newlzhc_encoder_parse * __thiscall
oo2::vector_storage_a<oo2::newlzhc_encoder_parse>::makefit1
          (vector_storage_a<oo2::newlzhc_encoder_parse> *this,ulong64 param_1,ulong64 param_2)

{
  return (newlzhc_encoder_parse *)0x0;
}

// makefit2 @ 14f35b5a0

void __thiscall
oo2::vector_storage_a<oo2::newlzhc_encoder_parse>::makefit2
          (vector_storage_a<oo2::newlzhc_encoder_parse> *this,newlzhc_encoder_parse *param_1,
          ulong64 param_2,ulong64 param_3)

{
  return;
}

// needmakefit @ 14f35b5b0

bool __thiscall
oo2::vector_storage_a<oo2::newlzhc_encoder_parse>::needmakefit
          (vector_storage_a<oo2::newlzhc_encoder_parse> *this,ulong64 param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  int iVar3;
  
  if (this->m_capacity < param_1) {
    iVar3 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h",0x3f,
                               "oo2::vector_storage_a<struct oo2::newlzhc_encoder_parse>::needmakefit"
                               ,"newsize <= m_capacity");
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      uVar2 = (*pcVar1)();
      return (bool)uVar2;
    }
  }
  return false;
}

// newLZHC_IsAllowedNormalMatch @ 14f35b600

bool __cdecl
oo2::newLZHC_IsAllowedNormalMatch(int param_1,int param_2,OodleLZ_CompressOptions *param_3)

{
  bool bVar1;
  bool bVar2;
  
  if (((0 < param_3->farMatchOffsetLog2) &&
      (1 << ((byte)param_3->farMatchOffsetLog2 & 0x1f) <= param_2)) &&
     (param_1 < param_3->farMatchMinLen)) {
    return false;
  }
  if (0xfffff < param_2) {
    if (param_2 < 0x400000) {
      if (param_2 < 0x200000) {
        bVar2 = SBORROW4(param_1,5);
        bVar1 = param_1 + -5 < 0;
      }
      else {
        bVar2 = SBORROW4(param_1,6);
        bVar1 = param_1 + -6 < 0;
      }
    }
    else {
      bVar2 = SBORROW4(param_1,8);
      bVar1 = param_1 + -8 < 0;
    }
    if (bVar2 != bVar1) {
      return false;
    }
  }
  if (param_1 < 6) {
    return param_2 < max_offset[param_1];
  }
  return true;
}

// newLZHC_IsAllowedNormalMatch_Optimal @ 14f35b680

bool __cdecl
oo2::newLZHC_IsAllowedNormalMatch_Optimal(int param_1,int param_2,OodleLZ_CompressOptions *param_3)

{
  if (((0 < param_3->farMatchOffsetLog2) &&
      (1 << ((byte)param_3->farMatchOffsetLog2 & 0x1f) <= param_2)) &&
     (param_1 < param_3->farMatchMinLen)) {
    return false;
  }
  if (param_2 < 0x100000) {
    return true;
  }
  if (0x3fffff < param_2) {
    return 7 < param_1;
  }
  if (0x1fffff < param_2) {
    return 5 < param_1;
  }
  return 4 < param_1;
}

// newLZHC_IsLOMatchBetter @ 14f35b700

bool __cdecl oo2::newLZHC_IsLOMatchBetter(int param_1,int param_2,int param_3)

{
  if ((1 < param_1) &&
     (((param_2 <= param_1 + 1 || ((param_2 <= param_1 + 2 && (0x3ff < param_3)))) ||
      ((param_2 <= param_1 + 3 && (0xffff < param_3)))))) {
    return true;
  }
  return false;
}

// newLZHC_IsNormalMatchBetter @ 14f35b740

bool __cdecl oo2::newLZHC_IsNormalMatchBetter(int param_1,int param_2,int param_3,int param_4)

{
  if (param_1 < param_3) {
    return false;
  }
  if (param_1 == param_3) {
    return param_2 < param_4;
  }
  if (param_3 + 1 < param_1) {
    return true;
  }
  return param_2 >> 7 <= param_4;
}

// newLZHC_LazyMatchDelta @ 14f35b780

int __cdecl
oo2::newLZHC_LazyMatchDelta
          (int param_1,uint param_2,bool param_3,int param_4,uint param_5,bool param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar2 = 0;
  iVar3 = iVar2;
  if (!param_3) {
    iVar3 = 0x1f;
    if (param_2 != 0) {
      for (; param_2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    iVar1 = iVar2;
    if (param_2 != 0) {
      iVar1 = iVar3 + 1;
    }
    iVar3 = iVar1 + 2;
  }
  if (!param_6) {
    iVar1 = 0x1f;
    if (param_5 != 0) {
      for (; param_5 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    if (param_5 != 0) {
      iVar2 = iVar1 + 1;
    }
    return iVar2 + -2 + ((param_1 - param_4) * 4 - iVar3);
  }
  return ((param_1 - param_4) * 4 - iVar3) + -4;
}

// newLZHC_decode_chunk_phase1 @ 14f35b800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

long64 __cdecl
oo2::newLZHC_decode_chunk_phase1
          (int param_1,uchar *param_2,uchar *param_3,uchar *param_4,long64 param_5,long64 param_6,
          uchar *param_7,uchar *param_8,newLZHC_chunk_arrays *param_9)

{
  uint *puVar1;
  undefined8 uVar2;
  int iVar3;
  long64 lVar4;
  longlong lVar5;
  byte *pbVar6;
  uchar *puVar7;
  uchar *puVar8;
  char *pcVar9;
  undefined1 auStackY_198 [32];
  long64 local_128;
  uint local_120;
  long64 local_118;
  long64 local_110;
  uchar *local_108;
  uchar *local_100;
  uchar *local_f8;
  long64 local_f0;
  uint *local_e8;
  longlong local_e0;
  uchar *local_d8;
  long64 local_d0;
  uchar *local_c8;
  uint *local_c0;
  int *local_b8;
  long64 local_b0;
  long64 local_a8;
  long64 local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_c8 = param_7;
  if (5 < param_1) {
    return -1;
  }
  rrPrintfKill("newlzhc chunk type %d = %s [%d->%d]\n");
  param_9->chunk_ptr = param_4;
  param_9->scratch_ptr = param_7;
  param_9->scratch_end = param_8;
  if ((longlong)param_3 - (longlong)param_2 < 0xd) {
    return -1;
  }
  if (param_6 == 0) {
    uVar2 = *(undefined8 *)param_2;
    param_2 = param_2 + 8;
    *(undefined8 *)param_4 = uVar2;
  }
  local_100 = (uchar *)(param_5 / 5);
  local_f8 = (uchar *)0x0;
  local_128 = 0;
  local_120 = 0;
  if (param_2 < param_3) {
    if (*param_2 < 0x80) {
      lVar4 = newLZ_get_arraylens(param_2,param_3,&local_128,param_5 / 3);
      if (lVar4 < 0) {
        return -1;
      }
      puVar8 = param_8 + -local_128;
      local_108 = puVar8;
      lVar5 = newLZ_get_array(&local_108,param_2,param_3,&local_a8,local_128,false,param_7,puVar8);
      if (lVar5 < 0) {
        return -1;
      }
LAB_14f35ba6a:
      param_2 = param_2 + lVar5;
    }
    else {
      local_120 = *param_2 - 0x7f;
      pbVar6 = param_2 + 1;
      lVar4 = newLZ_get_arraylens(pbVar6,param_3,&local_128,param_5 / 3);
      if (lVar4 < 0) {
        return -1;
      }
      puVar8 = param_8 + -local_128;
      local_108 = puVar8;
      lVar4 = newLZ_get_array(&local_108,pbVar6,param_3,&local_b0,local_128,false,param_7,puVar8);
      if (lVar4 < 0) {
        return -1;
      }
      param_2 = pbVar6 + lVar4;
      if (1 < (int)local_120) {
        puVar8 = puVar8 + -local_128;
        local_f0 = 0;
        local_f8 = puVar8;
        lVar5 = newLZ_get_array(&local_f8,param_2,param_3,&local_f0,local_128,false,param_7,puVar8);
        if (lVar5 < 0) {
          return -1;
        }
        if (local_128 != local_f0) {
          return -1;
        }
        goto LAB_14f35ba6a;
      }
    }
    local_110 = 0;
    lVar4 = newLZ_get_arraylens(param_2,param_3,&local_110,(long64)local_100);
    if (lVar4 < 0) {
      return -1;
    }
    puVar8 = puVar8 + -local_110;
    local_d8 = puVar8;
    lVar4 = newLZ_get_array(&local_d8,param_2,param_3,&local_a0,local_110,false,param_7,puVar8);
    if (lVar4 < 0) {
      return -1;
    }
    local_b8 = (int *)((ulonglong)(param_7 + 0xf) & 0xfffffffffffffff0);
    param_9->offsets_count = local_128;
    pbVar6 = param_2 + lVar4;
    param_9->offsets = local_b8;
    param_9->excesses_count = local_110;
    local_c0 = (uint *)(local_128 * 4 + 0xf + (longlong)local_b8 & 0xfffffffffffffff0);
    param_9->excesses = local_c0;
    puVar1 = local_c0 + local_110;
    if (param_1 < 2) {
      lVar5 = (longlong)puVar8 - (longlong)puVar1;
      if (param_5 < (longlong)puVar8 - (longlong)puVar1) {
        lVar5 = param_5;
      }
      local_e8 = puVar1;
      lVar4 = newLZ_get_array((uchar **)&local_e8,pbVar6,param_3,&local_d0,lVar5,true,
                              (uchar *)puVar1,puVar8);
      if (lVar4 < 0) {
        return -1;
      }
      param_9->literals_ptrs[0] = (uchar *)local_e8;
      param_9->literals_counts[0] = local_d0;
      local_e0 = local_d0;
    }
    else {
      if (param_1 == 2) {
        lVar4 = 2;
      }
      else {
        lVar4 = 0x10;
        if (param_1 == 3) {
          lVar4 = 4;
        }
      }
      lVar4 = newLZ_get_multiarray
                        (pbVar6,param_3,(uchar *)puVar1,puVar8,param_9->literals_ptrs,
                         param_9->literals_counts,lVar4,&local_e0,true,(uchar *)puVar1,puVar8);
      if (lVar4 < 0) {
        return -1;
      }
      if (param_5 < local_e0) {
        return -1;
      }
    }
    pbVar6 = pbVar6 + lVar4;
    param_9->tot_literals_count = local_e0;
    local_118 = 0;
    puVar7 = (uchar *)((longlong)puVar1 + local_e0);
    lVar5 = param_5 / 2;
    if (pbVar6 < param_3) {
      if (*pbVar6 < 0x80) {
        if ((longlong)puVar8 - (longlong)puVar7 <= lVar5) {
          lVar5 = (longlong)puVar8 - (longlong)puVar7;
        }
        local_100 = puVar7;
        lVar4 = newLZ_get_array(&local_100,pbVar6,param_3,&local_118,lVar5,true,puVar7,puVar8);
        if (lVar4 < 0) {
          return -1;
        }
        pbVar6 = pbVar6 + lVar4;
        param_9->packets = local_100;
        param_9->packets_count = local_118;
      }
      else {
        if (1 << (*pbVar6 & 0x1f) != 8) {
          ooLogErrorPre();
          if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
          goto LAB_14f35bc8e;
          pcVar9 = "OODLE ERROR : corruption : num_packets_arrays == (1<<3)\n";
          iVar3 = 0xb96;
          goto LAB_14f35bc83;
        }
        lVar4 = newLZ_get_multiarray
                          (pbVar6 + 1,param_3,puVar7,puVar8,param_9->packet_pos_ptrs,&local_98,8,
                           &local_118,true,puVar7,puVar8);
        if (lVar4 < 0) {
          return -1;
        }
        if (lVar5 < local_118) {
          return -1;
        }
        pbVar6 = pbVar6 + 1 + lVar4;
        param_9->packet_pos_ends[0] = param_9->packet_pos_ptrs[0] + local_98;
        param_9->packet_pos_ends[1] = param_9->packet_pos_ptrs[1] + local_90;
        param_9->packet_pos_ends[2] = param_9->packet_pos_ptrs[2] + local_88;
        param_9->packet_pos_ends[3] = param_9->packet_pos_ptrs[3] + local_80;
        param_9->packet_pos_ends[4] = param_9->packet_pos_ptrs[4] + local_78;
        param_9->packet_pos_ends[5] = param_9->packet_pos_ptrs[5] + local_70;
        param_9->packet_pos_ends[6] = param_9->packet_pos_ptrs[6] + local_68;
        param_9->packet_pos_ends[7] = param_9->packet_pos_ptrs[7] + local_60;
        param_9->packets = (uchar *)0x0;
        param_9->packets_count = local_118;
      }
      if (param_5 * 2 < (longlong)(puVar7 + (local_118 - (longlong)local_c8))) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
        goto LAB_14f35bc8e;
        pcVar9 = 
        "OODLE ERROR : corruption : rrPtrDiff( scratch_ptr - scratch_space ) <= 2*chunk_len\n";
        iVar3 = 0xbe1;
      }
      else {
        iVar3 = newLZ_get_offsets_excesses
                          (pbVar6,param_3,local_108,local_f8,local_128,local_120,local_d8,local_110,
                           local_b8,local_c0,param_6 + param_5,'\0',0);
        if (-1 < iVar3) {
          return 1;
        }
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
        goto LAB_14f35bc8e;
        pcVar9 = "OODLE ERROR : newLZ_get_offsets_excesses failed\n";
        iVar3 = 0xbf7;
      }
    }
    else {
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto LAB_14f35bc8e;
      pcVar9 = "OODLE ERROR : corruption : comp_ptr < chunk_comp_end\n";
      iVar3 = 0xb8e;
    }
  }
  else {
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto LAB_14f35bc8e;
    pcVar9 = "OODLE ERROR : corruption : comp_ptr < chunk_comp_end\n";
    iVar3 = 0xac8;
  }
LAB_14f35bc83:
  (*g_fp_OodleCore_Plugin_Printf)(0,"v:\\devel\\projects\\oodle2\\core\\newlzhc.cpp",iVar3,pcVar9);
LAB_14f35bc8e:
  ooLogErrorPost();
  return -1;
}

// newLZHC_decode_chunk_phase2 @ 14f35bee0

long64 __cdecl
oo2::newLZHC_decode_chunk_phase2
          (int param_1,uchar *param_2,long64 param_3,long64 param_4,newLZHC_chunk_arrays *param_5)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  long64 lVar4;
  newLZHC_decode_parse_func_set *pnVar5;
  _func___cdecl_bool_newLZHC_chunk_arrays_ptr_uchar_ptr_uchar_ptr_uchar_ptr_uchar_ptr *p_Var6;
  longlong lVar7;
  
  if (5 < param_1) {
    return -1;
  }
  pnVar5 = &newLZHC_decode_parse_funcs_regular;
  lVar7 = 8;
  if (param_4 != 0) {
    lVar7 = 0;
  }
  if (((byte)g_rrCPUx86_feature_flags & 8) != 0) {
    pnVar5 = &newLZHC_decode_parse_funcs_sse4;
  }
  if (param_5->packets == (uchar *)0x0) {
    if (param_1 == 1) {
      p_Var6 = pnVar5->multipacket_raw;
    }
    else if (param_1 == 0) {
      p_Var6 = pnVar5->multipacket_sub;
    }
    else if (param_1 == 2) {
      p_Var6 = pnVar5->multipacket_lamsub;
    }
    else if (param_1 == 3) {
      p_Var6 = pnVar5->multipacket_suband3;
    }
    else if (param_1 == 5) {
      p_Var6 = pnVar5->multipacket_subandF;
    }
    else {
      if (param_1 != 4) {
        iVar3 = 0xc9e;
        goto LAB_14f35bff8;
      }
      p_Var6 = pnVar5->multipacket_o1;
    }
  }
  else if (param_1 == 1) {
    p_Var6 = pnVar5->raw;
  }
  else if (param_1 == 0) {
    p_Var6 = pnVar5->sub;
  }
  else if (param_1 == 2) {
    p_Var6 = pnVar5->lamsub;
  }
  else if (param_1 == 3) {
    p_Var6 = pnVar5->suband3;
  }
  else if (param_1 == 5) {
    p_Var6 = pnVar5->subandF;
  }
  else {
    if (param_1 != 4) {
      iVar3 = 0xc5d;
LAB_14f35bff8:
      iVar3 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\newlzhc.cpp",iVar3,
                                 "oo2::newLZHC_decode_chunk_phase2","bad chunk_type");
      if (iVar3 == 0) {
        return 1;
      }
      pcVar1 = (code *)swi(3);
      lVar4 = (*pcVar1)();
      return lVar4;
    }
    p_Var6 = pnVar5->o1;
  }
  bVar2 = (*p_Var6)(param_5,param_2 + lVar7,param_2,param_2 + param_3,param_2 + -param_4);
  if (bVar2) {
    return 1;
  }
  return -1;
}

// newLZHC_encode_chunk_optimal_greedy @ 14f35c040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

long64 __cdecl
oo2::newLZHC_encode_chunk_optimal_greedy
          (float *param_1,int *param_2,newlzhc_passinfo *param_3,uchar *param_4,uchar *param_5,
          int param_6,ENewLZ_MinOffset param_7,newlz_vtable *param_8,
          newLZHC_MatchParseRecord *param_9,uchar *param_10,int param_11,long64 param_12,
          uchar *param_13,newlz_encoder_scratch *param_14,uchar *param_15,uchar *param_16,
          vector_a<oo2::newlzhc_encoder_parse> *param_17)

{
  OodleLZ_CompressionLevel OVar1;
  OodleLZ_CompressOptions *pOVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  match mVar10;
  long64 lVar11;
  uint uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uchar *puVar18;
  uchar *puVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  undefined1 auStackY_228 [32];
  int local_178;
  uint uStack_174;
  newLZHC_LOs local_c0;
  uint local_80;
  int iStack_7c;
  int iStack_78;
  uint uStack_74;
  ulonglong local_70;
  
  uVar5 = _UNK_150b50de8;
  uVar4 = ___xmm_00000008000000080000000800000008;
  local_70 = __security_cookie.value ^ (ulonglong)auStackY_228;
  *(undefined8 *)&param_17->field_0x10 = 0;
  pOVar2 = param_8->pOptions;
  uVar20 = pOVar2->dictionarySize;
  local_c0.lasts.contents[0xc] = 8;
  local_c0.lasts.contents[0xd] = 8;
  local_c0.lasts.contents[0xe] = 8;
  iVar21 = 8;
  if (param_12 != 0) {
    iVar21 = 0;
  }
  local_c0.lasts.contents[8] = (int)uVar4;
  local_c0.lasts.contents[9] = (int)((ulonglong)uVar4 >> 0x20);
  local_c0.lasts.contents[10] = (int)uVar5;
  local_c0.lasts.contents[0xb] = (int)((ulonglong)uVar5 >> 0x20);
  if ((int)uVar20 < 1) {
    uVar20 = 0x40000000;
  }
  else if (0x40000000 < (int)uVar20) {
    uVar20 = 0x40000000;
  }
  puVar18 = param_10 + (longlong)param_11 + -8;
  iVar15 = param_11 + -0x10;
  rrMemSetZero(param_3,0xc40c);
  iVar17 = iVar21;
  iVar23 = iVar21;
  iVar16 = iVar21;
  do {
    do {
      iVar22 = iVar17;
      if (iVar15 <= iVar22) {
        if (0 < param_11 - iVar16) {
          newLZHC_histo_literals
                    (&param_3->literals,param_10,(longlong)iVar16,(longlong)(param_11 - iVar16),
                     local_c0.lasts.contents[8],1);
        }
        uVar20 = param_8->entropy_flags;
        OVar1 = param_8->level;
        param_8->entropy_flags = uVar20 & 0xffffffef;
        param_8->level = OodleLZ_CompressionLevel_Normal;
        lVar11 = newLZHC_put_parse(param_14,param_1,&param_3->literals,param_2,param_10,param_11,
                                   param_4,param_5,param_12,param_8,local_c0.lasts.contents[8],
                                   param_17,iVar21,param_3,param_7);
        param_8->level = OVar1;
        param_8->entropy_flags = uVar20;
        return lVar11;
      }
      puVar19 = param_10 + iVar22;
      mVar10 = newLZHC_get_match_heuristic
                         (param_9 + iVar22,&local_c0,puVar19,puVar18,param_6,iVar22 - iVar16,
                          param_13,uVar20,param_7,pOVar2);
      local_178 = mVar10.ml;
      iVar17 = iVar22 + 1;
    } while (local_178 == 0);
    while (uStack_174 = mVar10.off, iVar17 < iVar15) {
      mVar10 = newLZHC_get_match_heuristic
                         (param_9 + (iVar22 + 1),&local_c0,puVar19 + 1,puVar18,param_6,
                          (iVar22 - iVar16) + 1,param_13,uVar20,param_7,pOVar2);
      if (mVar10.ml == 0) {
LAB_14f35c2c9:
        if (iVar15 <= iVar22 + 2) break;
        mVar10 = newLZHC_get_match_heuristic
                           (param_9 + (iVar22 + 2),&local_c0,puVar19 + 2,puVar18,param_6,
                            (iVar22 - iVar16) + 2,param_13,uVar20,param_7,pOVar2);
        if (mVar10.ml == 0) break;
        uVar12 = mVar10.off;
        if ((int)uVar12 < 1) {
          iVar17 = 0;
        }
        else {
          iVar17 = 0x1f;
          if (uVar12 != 0) {
            for (; uVar12 >> iVar17 == 0; iVar17 = iVar17 + -1) {
            }
          }
          iVar17 = iVar17 + 3;
        }
        if (0 < (int)uStack_174) {
          iVar16 = 0x1f;
          if (uStack_174 != 0) {
            for (; uStack_174 >> iVar16 == 0; iVar16 = iVar16 + -1) {
            }
          }
          if (uStack_174 == 0) {
            iVar16 = 0;
          }
          else {
            iVar16 = iVar16 + 1;
          }
          iVar16 = iVar16 + -2;
        }
        else {
          iVar16 = -4;
        }
        if (((mVar10.ml - local_178) * 4 - iVar17) + iVar16 < 4) break;
        lVar13 = 2;
      }
      else {
        uVar12 = mVar10.off;
        if ((int)uVar12 < 1) {
          iVar17 = 0;
        }
        else {
          iVar17 = 0x1f;
          if (uVar12 != 0) {
            for (; uVar12 >> iVar17 == 0; iVar17 = iVar17 + -1) {
            }
          }
          iVar17 = iVar17 + 3;
        }
        if (0 < (int)uStack_174) {
          iVar9 = 0x1f;
          if (uStack_174 != 0) {
            for (; uStack_174 >> iVar9 == 0; iVar9 = iVar9 + -1) {
            }
          }
          if (uStack_174 == 0) {
            iVar9 = 0;
          }
          else {
            iVar9 = iVar9 + 1;
          }
          iVar9 = iVar9 + -2;
        }
        else {
          iVar9 = -4;
        }
        if (((mVar10.ml - local_178) * 4 - iVar17) + iVar9 < 1) goto LAB_14f35c2c9;
        lVar13 = 1;
      }
      iVar22 = iVar22 + (int)lVar13;
      local_178 = mVar10.ml;
      puVar19 = puVar19 + lVar13;
      iVar16 = iVar23;
      iVar17 = iVar22 + 1;
    }
    iVar17 = local_c0.lasts.contents[8];
    if (((iVar22 == iVar23) && (uStack_174 == 0)) &&
       (local_c0.lasts.contents[8] == local_c0.lasts.contents[9])) {
      uStack_174 = 0xffffffff;
    }
    iVar16 = iVar22 - iVar23;
    lVar13 = *(longlong *)&param_17->field_0x10;
    local_80 = local_c0.lasts.contents[8];
    iStack_7c = iVar16;
    iStack_78 = local_178;
    uStack_74 = uStack_174;
    if ((*(ulonglong *)&param_17->field_0x8 < lVar13 + 1U) &&
       (iVar9 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h",0x3f,
                                   "oo2::vector_storage_a<struct oo2::newlzhc_encoder_parse>::needmakefit"
                                   ,"newsize <= m_capacity"), iVar9 != 0)) {
      pcVar3 = (code *)swi(3);
      lVar11 = (*pcVar3)();
      return lVar11;
    }
    *(longlong *)&param_17->field_0x10 = *(longlong *)&param_17->field_0x10 + 1;
    puVar14 = (undefined8 *)(lVar13 * 0x10 + *(longlong *)param_17);
    if (puVar14 != (undefined8 *)0x0) {
      *puVar14 = CONCAT44(iStack_7c,local_80);
      puVar14[1] = CONCAT44(uStack_74,iStack_78);
    }
    newLZHC_histo_literals(&param_3->literals,param_10,(longlong)iVar23,(longlong)iVar16,iVar17,1);
    iVar8 = local_c0.lasts.contents[0xe];
    iVar7 = local_c0.lasts.contents[0xd];
    iVar9 = local_c0.lasts.contents[0xc];
    iVar16 = local_c0.lasts.contents[0xb];
    iVar23 = local_c0.lasts.contents[10];
    iVar17 = local_c0.lasts.contents[9];
    if ((int)uStack_174 < 1) {
      lVar13 = (longlong)(int)-uStack_174;
      uVar4 = *(undefined8 *)(local_c0.lasts.contents + lVar13 + 2);
      uVar12 = local_c0.lasts.contents[lVar13 + 8];
      uVar5 = *(undefined8 *)(local_c0.lasts.contents + lVar13 + 4);
      uVar6 = *(undefined8 *)(local_c0.lasts.contents + lVar13 + 6);
      *(undefined8 *)(local_c0.lasts.contents + lVar13 + 1) =
           *(undefined8 *)(local_c0.lasts.contents + lVar13);
      *(undefined8 *)(local_c0.lasts.contents + lVar13 + 3) = uVar4;
      *(undefined8 *)(local_c0.lasts.contents + lVar13 + 5) = uVar5;
      *(undefined8 *)(local_c0.lasts.contents + lVar13 + 7) = uVar6;
      local_c0.lasts.contents[8] = uVar12;
    }
    else {
      local_c0.lasts.contents[9] = local_c0.lasts.contents[8];
      local_c0.lasts.contents[10] = iVar17;
      local_c0.lasts.contents[0xb] = iVar23;
      local_c0.lasts.contents[0xc] = iVar16;
      local_c0.lasts.contents[0xd] = iVar9;
      local_c0.lasts.contents[0xe] = iVar7;
      local_c0.lasts.contents[0xf] = iVar8;
      local_c0.lasts.contents[8] = uStack_174;
    }
    iVar23 = iVar22 + local_178;
    iVar17 = iVar23;
    iVar16 = iVar23;
  } while( true );
}

// newLZHC_encode_chunk_optimal_tll @ 14f35c600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

long64 __cdecl
oo2::newLZHC_encode_chunk_optimal_tll
          (newlz_vtable *param_1,newlz_encoder_scratch *param_2,uchar *param_3,uchar *param_4,
          int param_5,uchar *param_6,uchar *param_7,long64 param_8,int *param_9,float *param_10,
          OodleKrakenChunkDeadlines *param_11)

{
  ulonglong *puVar1;
  newlz_scratchblock *this;
  uint *puVar2;
  undefined1 auVar3 [16];
  rrArenaAllocator *prVar4;
  void *pvVar5;
  ulonglong uVar6;
  code *pcVar7;
  undefined8 uVar8;
  newlzhc_passinfo *_Src;
  newlz_vtable *pnVar9;
  newlz_encoder_scratch *pnVar10;
  byte bVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  long64 lVar15;
  newlzhc_encoder_parse *pnVar16;
  void *pvVar17;
  undefined8 *puVar18;
  uchar uVar19;
  int iVar20;
  size_t sVar21;
  ulonglong *puVar22;
  newlzhc_encoder_parse *pnVar23;
  uint uVar24;
  uint uVar25;
  uchar *puVar26;
  int *piVar27;
  OodleLZ_CompressOptions *pOVar28;
  newlzhc_codecosts *pnVar29;
  float fVar30;
  uint uVar31;
  int iVar32;
  ulong64 uVar33;
  int iVar34;
  float fVar35;
  ulonglong uVar36;
  longlong lVar37;
  ulonglong uVar38;
  float *pfVar39;
  float fVar40;
  ulonglong uVar41;
  uint *puVar42;
  newlzhc_encoder_parse *pnVar43;
  float fVar44;
  newLZHC_LOs_NoPad *pnVar45;
  uint uVar46;
  byte *pbVar47;
  uchar *puVar48;
  int iVar49;
  longlong lVar50;
  longlong lVar51;
  ulonglong uVar52;
  byte *pbVar53;
  uint uVar54;
  float fVar55;
  float fVar56;
  int *piVar57;
  size_t sVar58;
  float *pfVar59;
  longlong lVar60;
  uchar *puVar61;
  bool bVar62;
  bool bVar63;
  undefined1 auStackY_518 [32];
  int local_470;
  float local_46c;
  float local_468;
  float local_464;
  float local_460;
  uint local_458;
  float local_454;
  uchar *local_450;
  uint local_448;
  int local_444;
  void *local_440;
  newLZHC_LOs_NoPad *local_438;
  int local_430;
  longlong local_428;
  uint local_420;
  float local_41c;
  float local_418;
  int local_414;
  float local_410;
  float local_40c;
  int local_408;
  float local_404;
  float local_400;
  ENewLZ_MinOffset local_3fc;
  float local_3f8;
  ulonglong local_3f0;
  size_t local_3e8;
  int local_3e0;
  int local_3dc;
  uint local_3d8;
  float local_3d4;
  float local_3d0;
  int local_3cc;
  int local_3c8;
  int local_3c4;
  int *local_3c0;
  newlzhc_passinfo *local_3b8;
  int *local_3b0;
  ulonglong local_3a8;
  int local_3a0;
  float local_39c;
  int local_398;
  ulonglong *local_390;
  OodleLZ_CompressOptions *local_388;
  newlz_vtable *local_380;
  newlz_encoder_scratch *local_378;
  float local_370;
  uint local_36c;
  uint local_368;
  int local_364;
  uint local_360;
  int local_35c;
  int local_358;
  int local_354;
  float local_350;
  int local_34c;
  float *local_348;
  longlong local_340;
  longlong local_338;
  newlzhc_encoder_parse *local_330;
  ulonglong local_328;
  longlong local_320;
  UnpackedMatchPair *local_318;
  uchar *local_310;
  size_t local_308;
  float *local_300;
  int *local_2f8;
  uchar *local_2f0;
  longlong local_2e8;
  uchar *local_2e0;
  size_t local_2d8;
  vector_base<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>
  local_2d0;
  uchar *local_2b8;
  size_t local_2b0;
  size_t local_2a8;
  size_t local_2a0;
  ulonglong local_298;
  newlzhc_codecosts *local_290;
  rrArenaAllocator *local_288;
  uint local_280;
  int local_27c;
  int local_278;
  int local_274;
  uchar *local_270;
  newlzhc_passinfo *local_268;
  longlong local_260;
  ulong64 local_258;
  longlong local_250;
  uchar *local_248;
  int *local_240;
  ulong64 local_238;
  undefined1 auStack_200 [8];
  undefined1 auStack_1f8 [8];
  undefined1 auStack_1f0 [4];
  undefined1 auStack_1ec [12];
  int local_1e0 [4];
  int local_1d0;
  int local_1cc;
  int local_1c8;
  undefined1 auStack_1c0 [8];
  undefined1 auStack_1b8 [8];
  undefined1 auStack_1b0 [4];
  undefined1 auStack_1ac [12];
  float local_1a0 [4];
  float local_190;
  float local_18c;
  float local_188;
  uint auStack_180 [20];
  int aiStack_130 [10];
  float afStack_108 [10];
  float afStack_e0 [10];
  int aiStack_b8 [10];
  ulonglong local_90;
  undefined8 local_50;
  
  local_50 = 0xfffffffffffffffe;
  local_90 = __security_cookie.value ^ (ulonglong)auStackY_518;
  sVar58 = (size_t)param_5;
  local_444 = param_5;
  local_2f0 = param_6;
  local_248 = param_7;
  local_2f8 = param_9;
  local_300 = param_10;
  local_380 = param_1;
  local_378 = param_2;
  local_310 = param_3;
  if (fp_ThreadProfiler_Push == (_func___cdecl_ulong64_char_ptr_ulong64 *)0x0) {
    local_238 = 0xffffffffffffffff;
  }
  else {
    local_238 = (*fp_ThreadProfiler_Push)("leviathan_chunk_optimal",0);
  }
  *param_9 = 0;
  local_3e8 = sVar58;
  if (param_5 < 0x81) {
LAB_14f36024a:
    if (fp_ThreadProfiler_Pop != (_func___cdecl_void_ulong64 *)0x0) {
      (*fp_ThreadProfiler_Pop)(local_238);
    }
    return local_3e8;
  }
  if ((int)param_1->level < 8) {
    uVar54 = 1;
    local_2b0 = 1;
    if (5 < (int)param_1->level) {
      local_2b0 = 3;
    }
  }
  else {
    uVar54 = 2;
    local_2b0 = 8;
  }
  prVar4 = param_2->arena;
  local_388 = param_1->pOptions;
  local_36c = local_388->dictionarySize;
  if ((int)local_36c < 1) {
    local_36c = 0x40000000;
  }
  else if (0x40000000 < (int)local_36c) {
    local_36c = 0x40000000;
  }
  local_318 = param_2->match_pairs;
  local_2d0._padding_ = 0;
  local_2d0._padding_ = 0;
  local_2d0.m_size = 0;
  local_330 = (newlzhc_encoder_parse *)0x0;
  local_328 = 0;
  local_320 = 0;
  uVar36 = (ulonglong)(int)(((uint)param_5 >> 1) + 8);
  lVar37 = uVar36 * 0x10;
  local_288 = prVar4;
  newlz_scratchblock::extend(&param_2->newlzhc_parsevec_space,lVar37 + 0x10080,prVar4);
  local_2d0._padding_ = (longlong)(param_2->newlzhc_parsevec_space).m_ptr;
  local_2d0._padding_ = uVar36 & 0xfffffffffffffff;
  local_330 = (newlzhc_encoder_parse *)(local_2d0._padding_ + lVar37);
  local_328 = 0x1008;
  lVar37 = (longlong)(int)(param_5 + 0x100 + ((uint)param_5 >> 4));
  newlz_scratchblock::extend(&param_2->literals_space,lVar37,prVar4);
  local_2b8 = (param_2->literals_space).m_ptr;
  local_270 = local_2b8 + lVar37;
  local_350 = 1.12104e-44;
  if (param_8 != 0) {
    local_350 = 0.0;
  }
  local_410 = (float)(param_5 - 0x10);
  local_390 = (ulonglong *)(param_4 + (sVar58 - 8));
  local_2d8 = sVar58;
  newlz_scratchblock::extend(&param_2->newlzhc_passinfo_space,0x18818,prVar4);
  local_3b8 = (param_2->newlzhc_passinfo_space).m_ptr;
  local_268 = local_3b8 + 1;
  local_260 = (longlong)(param_5 + 1);
  uVar36 = (ulonglong)uVar54;
  local_3a8 = uVar36;
  newlz_scratchblock::extend
            (&param_2->newlzhc_arrivals_space,(ulonglong)uVar54 * local_260 * 0x30,prVar4);
  puVar48 = (param_2->newlzhc_arrivals_space).m_ptr;
  uVar13 = local_388->minMatchLen;
  if (local_388->minMatchLen < 4) {
    uVar13 = 4;
  }
  uVar38 = (ulonglong)uVar13;
  local_370 = 1.0737418e+09;
  local_3dc = 0;
  local_3e8 = 0x7fffffff;
  local_2e0 = puVar48 + (local_378->newlzhc_arrivals_space).m_size;
  local_3cc = param_5;
  local_440 = (void *)0x0;
  local_450 = puVar48;
  local_448 = uVar13;
  if (1 < uVar54) {
    this = &local_378->newlzhc_last_tll_len_space;
    newlz_scratchblock::extend(this,local_260 * 4,local_288);
    local_440 = this->m_ptr;
  }
  if ((int)local_380->level < 8) {
    local_414 = 1 << ((byte)local_380->level & 0x1f);
    local_364 = 0;
    local_360 = 0;
    if (3 < local_414) goto LAB_14f35c9b3;
  }
  else {
    local_414 = 0x100;
LAB_14f35c9b3:
    local_364 = 3;
    local_360 = local_414 - 3;
  }
  iVar12 = uVar13 + 1;
  local_274 = 0;
  if (iVar12 < local_414) {
    local_274 = iVar12;
  }
  local_280 = local_414 - iVar12;
  if (local_414 <= iVar12) {
    local_280 = 0;
  }
  local_354 = (int)local_410 - 5;
  local_3fc = eNewLZ_MinOffset_8;
  local_3c4 = 0;
  local_2e8 = 0;
  local_308 = local_2d8;
  local_298 = uVar38;
LAB_14f35ca26:
  pOVar28 = local_388;
  pvVar17 = local_440;
  if (local_3c4 != 0) {
    if (8 < (int)local_380->level) {
      local_3fc = eNewLZ_MinOffset_1;
      local_400 = 1.0737418e+09;
      uVar38 = 3;
      local_448 = 3;
      local_298 = 3;
      sVar58 = newLZHC_encode_chunk_optimal_greedy
                         (&local_400,&local_278,local_3b8,puVar48,local_2e0,3,eNewLZ_MinOffset_1,
                          local_380,(newLZHC_MatchParseRecord *)local_318,param_4,local_444,param_8,
                          local_310,local_378,local_2b8,local_270,
                          (vector_a<oo2::newlzhc_encoder_parse> *)&local_2d0);
      iVar12 = local_278;
      if ((longlong)local_2d8 <= (longlong)sVar58) goto LAB_14f3601f4;
      if (local_400 < *local_300) {
        *local_2f8 = local_278;
        *local_300 = local_400;
        memcpy(local_2f0,puVar48,sVar58);
        local_3e8 = sVar58;
      }
      local_3dc = iVar12;
LAB_14f35cd79:
      if (1 < uVar54) {
        local_3cc = uVar54 - 1;
        local_308 = uVar36 - 1;
        memset(pvVar17,0,local_260 * 4);
      }
      pnVar10 = local_378;
      newlz_scratchblock::extend(&local_378->newlzhc_codecosts_space,0x700c,local_288);
      pnVar29 = (pnVar10->newlzhc_codecosts_space).m_ptr;
      pnVar29->chunktype = iVar12;
      local_290 = pnVar29;
      if ((local_380->carried_encoder_state).m_size < 1) {
LAB_14f35ce27:
        optimal_rescale_passinfo(local_3b8);
      }
      else {
        pvVar5 = (local_380->carried_encoder_state).m_ptr;
        iVar49 = *(int *)((longlong)pvVar5 + local_2e8 * 4);
        if (iVar49 == -1) goto LAB_14f35ce27;
        optimal_rescale_passinfo2
                  (local_3b8,
                   (newlzhc_passinfo *)((longlong)pvVar5 + (longlong)local_3c4 * 0xc40c + 8),
                   iVar49 == iVar12);
      }
      pnVar29->offset_alt_modulo = local_3b8->offset_alt_modulo;
      optimal_passinfo_to_codecost(local_3b8,pnVar29);
      if (-1 < (int)(local_444 * uVar54)) {
        lVar37 = (longlong)(int)(local_444 * uVar54) + 1;
        puVar26 = puVar48;
        do {
          puVar26[0] = 0xff;
          puVar26[1] = 0xff;
          puVar26[2] = 0xff;
          puVar26[3] = '\x7f';
          puVar26 = puVar26 + 0x30;
          lVar37 = lVar37 + -1;
        } while (lVar37 != 0);
      }
      uVar36 = (ulonglong)((int)local_350 * uVar54);
      puVar26 = puVar48 + uVar36 * 0x30;
      puVar26[0] = '\0';
      puVar26[1] = '\0';
      puVar26[2] = '\0';
      puVar26[3] = '\0';
      puVar26 = puVar48 + uVar36 * 0x30 + 4;
      puVar26[0] = '\b';
      puVar26[1] = '\0';
      puVar26[2] = '\0';
      puVar26[3] = '\0';
      puVar26 = puVar48 + uVar36 * 0x30 + 8;
      puVar26[0] = '\b';
      puVar26[1] = '\0';
      puVar26[2] = '\0';
      puVar26[3] = '\0';
      puVar26 = puVar48 + uVar36 * 0x30 + 0xc;
      puVar26[0] = '\b';
      puVar26[1] = '\0';
      puVar26[2] = '\0';
      puVar26[3] = '\0';
      puVar26 = puVar48 + uVar36 * 0x30 + 0x10;
      puVar26[0] = '\b';
      puVar26[1] = '\0';
      puVar26[2] = '\0';
      puVar26[3] = '\0';
      puVar26 = puVar48 + uVar36 * 0x30 + 0x14;
      puVar26[0] = '\b';
      puVar26[1] = '\0';
      puVar26[2] = '\0';
      puVar26[3] = '\0';
      puVar26 = puVar48 + uVar36 * 0x30 + 0x18;
      puVar26[0] = '\b';
      puVar26[1] = '\0';
      puVar26[2] = '\0';
      puVar26[3] = '\0';
      puVar26 = puVar48 + uVar36 * 0x30 + 0x1c;
      puVar26[0] = '\b';
      puVar26[1] = '\0';
      puVar26[2] = '\0';
      puVar26[3] = '\0';
      puVar26 = puVar48 + uVar36 * 0x30 + 0x20;
      puVar26[0] = '\0';
      puVar26[1] = '\0';
      puVar26[2] = '\0';
      puVar26[3] = '\0';
      puVar26[4] = '\0';
      puVar26[5] = '\0';
      puVar26[6] = '\0';
      puVar26[7] = '\0';
      puVar26 = puVar48 + uVar36 * 0x30 + 0x28;
      puVar26[0] = '\0';
      puVar26[1] = '\0';
      puVar26[2] = '\0';
      puVar26[3] = '\0';
      puVar26[4] = '\0';
      puVar26[5] = '\0';
      puVar26[6] = '\0';
      puVar26[7] = '\0';
      local_404 = -NAN;
      local_3c8 = 0x7fffffff;
      local_400 = 0.0;
      local_258 = 0;
      local_2d0.m_size = 0;
      fVar44 = local_350;
      if ((int)local_350 < (int)local_410) {
        do {
          uVar36 = (ulonglong)uVar54;
          fVar35 = local_410;
          if (parse_chunk_len + (int)fVar44 < (int)local_410) {
            fVar35 = (float)(parse_chunk_len + (int)fVar44);
          }
          fVar40 = local_410;
          if ((int)((int)fVar44 + 0x1000U) < (int)local_410) {
            fVar40 = (float)((int)fVar44 + 0x1000U);
          }
          local_418 = local_410;
          if ((int)fVar40 < (int)((int)local_410 - 0x10U)) {
            local_418 = fVar40;
          }
          local_460 = local_410;
          if ((int)fVar35 < (int)((int)local_410 - 0x10U)) {
            local_460 = fVar35;
          }
          local_408 = 0;
          iVar12 = (int)param_4;
          fVar35 = fVar44;
          local_41c = fVar44;
          local_2d0.m_size = local_258;
          if (uVar54 < 2) {
LAB_14f35d219:
            sVar58 = (size_t)(uint)local_460;
            local_46c = fVar44;
            fVar40 = local_460;
            if ((int)local_460 <= (int)local_418) {
              do {
                fVar35 = local_41c;
                if (local_46c == local_410) {
                  sVar58 = (size_t)(uint)local_410;
                  fVar40 = local_410;
                  break;
                }
                lVar37 = (longlong)(int)local_46c;
                puVar2 = (uint *)(param_4 + lVar37);
                uVar13 = *puVar2;
                local_398 = (int)local_46c * uVar54;
                lVar51 = (longlong)local_398;
                local_240 = (int *)(puVar48 + lVar51 * 0x30);
                iVar49 = (int)sVar58;
                local_368 = uVar13;
                if (uVar54 != 1) {
                  if (iVar49 <= (int)local_46c) {
                    sVar58 = 0;
                    iVar34 = 0x7fffffff;
                    sVar21 = sVar58;
                    piVar57 = local_240;
                    fVar40 = local_46c;
                    do {
                      iVar32 = *piVar57;
                      if ((iVar32 < iVar34) &&
                         (sVar58 = (ulonglong)(uint)fVar40, iVar34 = iVar32, sVar21 == local_308)) {
                        sVar58 = (ulonglong)
                                 (uint)((int)local_46c - *(int *)((longlong)local_440 + lVar37 * 4))
                        ;
                      }
                      fVar40 = (float)((int)fVar40 - 1);
                      sVar21 = sVar21 + 1;
                      piVar57 = piVar57 + 0xc;
                    } while ((longlong)sVar21 < (longlong)local_3a8);
                    pnVar29 = local_290;
                    puVar48 = local_450;
                    fVar40 = (float)sVar58;
                    if (iVar49 <= (int)(float)sVar58) break;
                  }
                  piVar57 = (int *)(puVar48 + (local_308 + lVar51) * 0x30);
                  if (*piVar57 == 0x7fffffff) goto LAB_14f35d590;
                  lVar50 = (longlong)piVar57[1];
                  iVar49 = 0;
                  switch(pnVar29->chunktype) {
                  case 0:
                    iVar49 = pnVar29->codecost_literal[0]
                             [(byte)(param_4[lVar37] - param_4[lVar37 - lVar50])];
                    break;
                  case 1:
                    iVar49 = pnVar29->codecost_literal[0][param_4[lVar37]];
                    break;
                  case 2:
                    iVar49 = pnVar29->codecost_literal[0]
                             [(ulonglong)(byte)(param_4[lVar37] - param_4[lVar37 - lVar50]) +
                              (-(ulonglong)(*(int *)((longlong)local_440 + lVar37 * 4) != 0) & 0x100
                              )];
                    break;
                  case 3:
                    bVar11 = param_4[lVar37] - param_4[lVar37 - lVar50];
                    uVar24 = (uint)local_46c & 3;
                    goto LAB_14f35d539;
                  case 4:
                    iVar49 = pnVar29->codecost_literal[param_4[lVar37 + -1] >> 4][param_4[lVar37]];
                    break;
                  case 5:
                    bVar11 = param_4[lVar37] - param_4[lVar37 - lVar50];
                    uVar24 = (uint)local_46c & 0xf;
LAB_14f35d539:
                    iVar49 = pnVar29->codecost_literal[uVar24][bVar11];
                  }
                  iVar49 = *piVar57 + iVar49;
                  piVar27 = (int *)(puVar48 + (lVar51 + local_308 + local_3a8) * 0x30);
                  if (iVar49 < *piVar27) {
                    uVar8 = *(undefined8 *)(piVar57 + 2);
                    *(undefined8 *)piVar27 = *(undefined8 *)piVar57;
                    *(undefined8 *)(piVar27 + 2) = uVar8;
                    *(undefined1 (*) [16])(piVar27 + 4) = *(undefined1 (*) [16])(piVar57 + 4);
                    uVar8 = *(undefined8 *)(piVar57 + 10);
                    *(undefined8 *)(piVar27 + 8) = *(undefined8 *)(piVar57 + 8);
                    *(undefined8 *)(piVar27 + 10) = uVar8;
                    *piVar27 = iVar49;
                    *(int *)((longlong)local_440 + lVar37 * 4 + 4) =
                         *(int *)((longlong)local_440 + lVar37 * 4) + 1;
                  }
                  goto LAB_14f35d590;
                }
                if (local_46c == local_41c) goto LAB_14f35d590;
                iVar32 = (int)local_46c - (int)local_41c;
                lVar50 = (longlong)*(int *)(puVar48 + (longlong)(int)local_41c * 0x30 + 4);
                lVar51 = lVar37 + -1;
                iVar34 = 0;
                switch(pnVar29->chunktype) {
                case 0:
                  uVar36 = (ulonglong)(byte)(param_4[lVar51] - param_4[lVar51 - lVar50]);
                  goto LAB_14f35d344;
                case 1:
                  uVar36 = (ulonglong)param_4[lVar51];
                  goto LAB_14f35d344;
                case 2:
                  lVar60 = 0;
                  if (iVar32 != 1) {
                    lVar60 = 0x100;
                  }
                  iVar34 = pnVar29->codecost_literal[0]
                           [(ulonglong)(byte)(param_4[lVar51] - param_4[lVar51 - lVar50]) + lVar60];
                  break;
                case 3:
                  uVar19 = param_4[lVar51];
                  uVar24 = (uint)lVar51 & 3;
                  goto LAB_14f35d334;
                case 4:
                  iVar34 = pnVar29->codecost_literal[param_4[lVar37 + -2] >> 4][param_4[lVar51]];
                  break;
                case 5:
                  uVar19 = param_4[lVar51];
                  uVar24 = (uint)lVar51 & 0xf;
LAB_14f35d334:
                  uVar36 = (ulonglong)(byte)(uVar19 - param_4[lVar51 - lVar50]) +
                           (ulonglong)uVar24 * 0x100;
LAB_14f35d344:
                  iVar34 = pnVar29->codecost_literal[0][uVar36];
                }
                local_408 = local_408 + iVar34;
                lVar51 = lVar37 * 6;
                if (*(int *)(puVar48 + lVar37 * 0x30) == 0x7fffffff) {
LAB_14f35d590:
                  uVar36 = 0;
                }
                else {
                  iVar34 = *(int *)(puVar48 + (longlong)(int)local_41c * 0x30);
                  uVar36 = 0;
                  iVar20 = 0;
                  if (2 < iVar32) {
                    if (iVar32 + -3 < 0xff) {
                      iVar20 = pnVar29->codecost_excess_ml[(longlong)iVar32 + 0xfd];
                    }
                    else {
                      iVar20 = cost_excess_huge(iVar32 + -3,pnVar29->codecost_excess_lrl);
                    }
                  }
                  if ((*(int *)(puVar48 + lVar51 * 8) < iVar20 + iVar34 + local_408) &&
                     (local_408 = (int)uVar36, local_41c = local_46c, iVar49 <= (int)local_46c)) {
                    sVar58 = (size_t)(uint)local_46c;
                    fVar35 = local_46c;
                    fVar40 = local_46c;
                    break;
                  }
                }
                pnVar29 = local_290;
                uVar52 = uVar36 & 0xffffffff;
                uVar38 = uVar36;
                uVar41 = uVar36;
                do {
                  uVar46 = (uint)uVar38;
                  local_430 = (int)uVar52;
                  uVar24 = local_318[lVar37 * 4 + uVar36].length;
                  if ((int)uVar24 < (int)local_448) break;
                  uVar31 = local_318[lVar37 * 4 + uVar36].offset;
                  uVar25 = (int)local_390 - (int)puVar2;
                  if ((int)uVar24 < (int)uVar25) {
                    uVar25 = uVar24;
                  }
                  if (uVar31 < local_36c) {
                    if (uVar31 < 8) {
                      if (local_3fc == eNewLZ_MinOffset_1) {
                        uVar24 = uVar31;
                        if ((int)uVar25 < (int)uVar31) {
                          uVar24 = uVar25;
                        }
                        if ((int)local_448 <= (int)uVar24) {
                          auStack_180[uVar41 * 2] = uVar24;
                          auStack_180[uVar41 * 2 + 1] = uVar31;
                          uVar52 = (ulonglong)(local_430 + 1);
                          uVar41 = uVar41 + 1;
                        }
                      }
                      uVar31 = rounded_up[uVar31];
                      if ((longlong)(ulonglong)uVar31 <= (longlong)puVar2 - (longlong)local_310) {
                        puVar42 = (uint *)((longlong)puVar2 - (ulonglong)uVar31);
                        uVar25 = uVar46;
                        if (uVar13 == *puVar42) {
                          puVar1 = (ulonglong *)(puVar2 + 1);
                          lVar51 = (longlong)puVar42 - (longlong)puVar2;
                          puVar22 = puVar1;
                          if (puVar1 <= local_390 + -1) {
LAB_14f35d670:
                            uVar38 = *(ulonglong *)(lVar51 + (longlong)puVar22) ^ *puVar22;
                            if (uVar38 == 0) goto code_r0x00014f35d679;
                            uVar6 = 0;
                            if (uVar38 != 0) {
                              for (; (uVar38 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
                              }
                            }
                            iVar49 = ((int)(uVar6 >> 3) - (int)puVar1) + (int)puVar22;
                            goto LAB_14f35d6b6;
                          }
LAB_14f35d685:
                          lVar50 = (longlong)puVar22 - (longlong)puVar1;
                          iVar49 = (int)lVar50;
                          for (; (puVar22 < local_390 &&
                                 (iVar49 = (int)lVar50,
                                 (char)*puVar22 == *(char *)(lVar51 + (longlong)puVar22)));
                              puVar22 = (ulonglong *)((longlong)puVar22 + 1)) {
                            lVar50 = lVar50 + 1;
                            iVar49 = (int)lVar50;
                          }
LAB_14f35d6b6:
                          uVar38 = 0;
                          uVar25 = iVar49 + 4;
                        }
                        if ((int)local_448 <= (int)uVar25) goto LAB_14f35d6c4;
                      }
                    }
                    else {
LAB_14f35d6c4:
                      if (((local_388->farMatchOffsetLog2 < 1) ||
                          ((int)uVar31 < 1 << ((byte)local_388->farMatchOffsetLog2 & 0x1f))) ||
                         (local_388->farMatchMinLen <= (int)uVar25)) {
                        if (0xfffff < (int)uVar31) {
                          if ((int)uVar31 < 0x400000) {
                            if ((int)uVar31 < 0x200000) {
                              bVar63 = SBORROW4(uVar25,5);
                              bVar62 = (int)(uVar25 - 5) < 0;
                            }
                            else {
                              bVar63 = SBORROW4(uVar25,6);
                              bVar62 = (int)(uVar25 - 6) < 0;
                            }
                          }
                          else {
                            bVar63 = SBORROW4(uVar25,8);
                            bVar62 = (int)(uVar25 - 8) < 0;
                          }
                          if (bVar63 != bVar62) goto LAB_14f35d738;
                        }
                        auStack_180[uVar41 * 2] = uVar25;
                        auStack_180[uVar41 * 2 + 1] = uVar31;
                        uVar52 = (ulonglong)((int)uVar52 + 1);
                        uVar41 = uVar41 + 1;
                      }
                    }
                  }
LAB_14f35d738:
                  uVar46 = (uint)uVar38;
                  local_430 = (int)uVar52;
                  uVar36 = uVar36 + 1;
                } while ((longlong)uVar36 < 4);
                if (local_3fc == eNewLZ_MinOffset_8) {
                  uVar13 = puVar2[-2] ^ uVar13;
                  if (uVar13 == 0) {
                    puVar1 = (ulonglong *)(puVar2 + 1);
                    lVar37 = (longlong)(puVar2 + -2) - (longlong)puVar2;
                    puVar22 = puVar1;
                    if (puVar1 <= local_390 + -1) {
LAB_14f35d7a0:
                      uVar36 = *(ulonglong *)(lVar37 + (longlong)puVar22) ^ *puVar22;
                      if (uVar36 == 0) goto code_r0x00014f35d7ad;
                      uVar38 = 0;
                      if (uVar36 != 0) {
                        for (; (uVar36 >> uVar38 & 1) == 0; uVar38 = uVar38 + 1) {
                        }
                      }
                      iVar49 = ((int)(uVar38 >> 3) - (int)puVar1) + (int)puVar22;
                      goto LAB_14f35d7d9;
                    }
LAB_14f35d7b6:
                    lVar51 = (longlong)puVar22 - (longlong)puVar1;
                    iVar49 = (int)lVar51;
                    for (; (puVar22 < local_390 &&
                           (iVar49 = (int)lVar51,
                           (char)*puVar22 == *(char *)(lVar37 + (longlong)puVar22)));
                        puVar22 = (ulonglong *)((longlong)puVar22 + 1)) {
                      lVar51 = lVar51 + 1;
                      iVar49 = (int)lVar51;
                    }
LAB_14f35d7d9:
                    uVar24 = iVar49 + 4;
                  }
                  else {
                    uVar24 = 3;
                    if ((uVar13 & 0xffffff) != 0) {
                      uVar24 = uVar46;
                    }
                  }
                  if ((int)local_448 <= (int)uVar24) {
                    auStack_180[uVar41 * 2] = uVar24;
                    auStack_180[uVar41 * 2 + 1] = 8;
                    local_430 = local_430 + 1;
                  }
                }
                uVar36 = 0;
                local_420 = 0;
                local_3e0 = 0x7fffffff;
                local_3f0 = 0;
                local_39c = (float)((int)local_46c - (int)local_41c);
                local_454 = 0.0;
                local_2a0 = 0;
                local_2a8 = (size_t)(int)local_39c;
                sVar58 = local_2a8;
                uVar38 = uVar36;
                uVar41 = uVar36;
                puVar48 = local_450;
                fVar35 = local_39c;
LAB_14f35d850:
                while( true ) {
                  iVar49 = 0;
                  fVar40 = (float)uVar38;
                  local_464 = fVar40;
                  if (uVar54 == 1) break;
                  if ((int)fVar40 < (int)uVar54) {
                    local_470 = local_240[local_2a0 * 0xc];
                    if (local_470 != 0x7fffffff) {
                      if (local_2a0 == local_308) {
                        local_464 = *(float *)((longlong)local_440 + (longlong)(int)local_46c * 4);
                        uVar38 = (ulonglong)(uint)local_464;
                      }
                      local_468 = (float)(local_398 + (int)fVar40);
LAB_14f35dcc2:
                      uVar41 = 0;
                      iVar49 = (int)uVar38;
                      local_3a0 = iVar49;
                      if (2 < iVar49) {
                        local_3a0 = 3;
                        if (iVar49 + -3 < 0xff) {
                          iVar49 = pnVar29->codecost_excess_ml[(longlong)iVar49 + 0xfd];
                        }
                        else {
                          iVar49 = cost_excess_huge(iVar49 + -3,pnVar29->codecost_excess_lrl);
                        }
                        local_470 = local_470 + iVar49;
                      }
                      local_438 = (newLZHC_LOs_NoPad *)
                                  (puVar48 + (longlong)(int)local_468 * 0x30 + 4);
                      local_458 = 0;
                      local_428 = 0;
                      lVar37 = (longlong)local_3a0;
                      uVar36 = uVar41;
                      local_340 = lVar37;
                      do {
                        local_40c = (float)local_438->lasts[local_428];
                        local_3b0 = (int *)(longlong)(int)local_40c;
                        uVar13 = *(uint *)(param_4 +
                                          ((longlong)(int)local_46c - (longlong)local_3b0));
                        uVar24 = (uint)uVar36;
                        if ((short)local_368 == (short)uVar13) {
                          uVar13 = local_368 ^ uVar13;
                          if (uVar13 == 0) {
                            puVar1 = (ulonglong *)(param_4 + (int)local_46c + 4);
                            lVar51 = (longlong)
                                     (param_4 + ((longlong)(int)local_46c - (longlong)local_3b0)) -
                                     (longlong)(param_4 + (int)local_46c);
                            puVar22 = puVar1;
                            if (puVar1 <= local_390 + -1) {
LAB_14f35ddc0:
                              uVar36 = *(ulonglong *)(lVar51 + (longlong)puVar22) ^ *puVar22;
                              if (uVar36 == 0) goto code_r0x00014f35ddcd;
                              uVar52 = 0;
                              if (uVar36 != 0) {
                                for (; (uVar36 >> uVar52 & 1) == 0; uVar52 = uVar52 + 1) {
                                }
                              }
                              iVar49 = ((int)(uVar52 >> 3) - (int)puVar1) + (int)puVar22;
                              goto LAB_14f35ddf9;
                            }
LAB_14f35ddd6:
                            lVar50 = (longlong)puVar22 - (longlong)puVar1;
                            iVar49 = (int)lVar50;
                            for (; (puVar22 < local_390 &&
                                   (iVar49 = (int)lVar50,
                                   (char)*puVar22 == *(char *)(lVar51 + (longlong)puVar22)));
                                puVar22 = (ulonglong *)((longlong)puVar22 + 1)) {
                              lVar50 = lVar50 + 1;
                              iVar49 = (int)lVar50;
                            }
LAB_14f35ddf9:
                            fVar35 = (float)(iVar49 + 4);
                            uVar24 = local_458;
                          }
                          else {
                            fVar35 = (float)(3 - (uint)((uVar13 & 0xffffff) != 0));
                          }
                          fVar40 = fVar35;
                          if (((int)local_40c < 8) &&
                             (fVar40 = local_40c, (int)fVar35 < (int)local_40c)) {
                            fVar40 = fVar35;
                          }
                          local_3d4 = fVar40;
                          if ((int)uVar41 < (int)fVar40) {
                            fVar35 = (float)((int)fVar40 + (int)local_46c);
                            if ((int)local_460 <= (int)fVar35) {
                              local_460 = fVar35;
                            }
                            iVar34 = (int)uVar38;
                            local_3d8 = (int)local_46c - iVar34;
                            uVar36 = (ulonglong)local_3d8;
                            iVar49 = (int)fVar40 + -9;
                            pnVar45 = local_438;
                            local_3f8 = fVar35;
                            local_3d0 = fVar40;
                            if (iVar49 < 0) {
                              iVar49 = pnVar29->codecost_literal
                                       [(ulonglong)(local_3d8 & pnVar29->packet_pos_mask) + 0xf]
                                       [(longlong)(int)((int)fVar40 + (local_3a0 + uVar24 * 4) * 8)
                                        + 0xfe];
                            }
                            else {
                              lVar37 = (lVar37 + local_428 * 4) * 8;
                              if (iVar49 < 0xff) {
                                iVar49 = pnVar29->codecost_offset2[(longlong)(int)fVar40 + 0xf7];
                              }
                              else {
                                iVar49 = cost_excess_huge(iVar49,pnVar29->codecost_excess_ml);
                              }
                              iVar49 = pnVar29->codecost_packet
                                       [uVar36 & 0xffffffff & (ulonglong)pnVar29->packet_pos_mask]
                                       [lVar37 + 7] + iVar49;
                              uVar24 = local_458;
                            }
                            iVar49 = local_470 + iVar49;
                            local_358 = iVar49;
                            if (uVar54 == 1) {
                              piVar57 = (int *)(local_450 + (longlong)(int)fVar35 * 0x30);
                              if (iVar49 < *piVar57) {
                                *piVar57 = iVar49;
                                piVar57[8] = (int)fVar40;
                                piVar57[9] = iVar34;
                                newLZHC_LOs_NoPad::SetMTF
                                          ((newLZHC_LOs_NoPad *)(piVar57 + 1),pnVar45,uVar24);
                                piVar57[10] = 0;
                                piVar57[0xb] = (int)local_468;
                                goto LAB_14f35e1be;
                              }
                            }
                            else {
                              piVar57 = (int *)(local_450 +
                                               (longlong)(int)((int)fVar35 * uVar54) * 0x30);
                              if (iVar49 < *piVar57) {
                                *piVar57 = iVar49;
                                piVar57[8] = (int)fVar40;
                                piVar57[9] = iVar34;
                                newLZHC_LOs_NoPad::SetMTF
                                          ((newLZHC_LOs_NoPad *)(piVar57 + 1),pnVar45,uVar24);
                                piVar57[10] = 0;
                                piVar57[0xb] = (int)local_468;
                                pnVar45 = local_438;
                              }
                              iVar32 = 1;
                              lVar37 = (longlong)pnVar45->lasts[local_428];
                              piVar57 = (int *)((longlong)local_440 +
                                               ((longlong)(int)local_46c + 1 + (longlong)(int)fVar40
                                               ) * 4);
                              iVar20 = ((int)fVar35 + 1U) * uVar54;
                              pbVar53 = param_4 + (longlong)(int)local_46c + (longlong)(int)fVar40;
                              iVar34 = iVar49;
                              do {
                                iVar14 = 0;
                                switch(pnVar29->chunktype) {
                                case 0:
                                  uVar36 = (ulonglong)(byte)(*pbVar53 - pbVar53[-lVar37]);
                                  goto LAB_14f35e0a7;
                                case 1:
                                  uVar36 = (ulonglong)*pbVar53;
                                  goto LAB_14f35e0a7;
                                case 2:
                                  lVar51 = 0;
                                  if (iVar32 != 1) {
                                    lVar51 = 0x100;
                                  }
                                  iVar14 = pnVar29->codecost_literal[0]
                                           [(ulonglong)(byte)(*pbVar53 - pbVar53[-lVar37]) + lVar51]
                                  ;
                                  break;
                                case 3:
                                  lVar51 = (longlong)pbVar53 + -(longlong)param_4;
                                  bVar11 = *pbVar53 - param_4[lVar51 - lVar37];
                                  uVar13 = (uint)lVar51 & 3;
                                  goto LAB_14f35e09d;
                                case 4:
                                  iVar14 = pnVar29->codecost_literal[pbVar53[-1] >> 4][*pbVar53];
                                  break;
                                case 5:
                                  lVar51 = (longlong)pbVar53 + -(longlong)param_4;
                                  bVar11 = *pbVar53 - param_4[lVar51 - lVar37];
                                  uVar13 = (uint)lVar51 & 0xf;
LAB_14f35e09d:
                                  uVar36 = (ulonglong)bVar11 + (ulonglong)uVar13 * 0x100;
LAB_14f35e0a7:
                                  iVar14 = pnVar29->codecost_literal[0][uVar36];
                                }
                                iVar34 = iVar34 + iVar14;
                                piVar27 = (int *)(local_450 + (longlong)(iVar20 + iVar32) * 0x30);
                                if (iVar34 < *piVar27) {
                                  *piVar27 = iVar34;
                                  piVar27[8] = (int)fVar40;
                                  piVar27[9] = (int)local_464;
                                  local_1e0[0] = local_438->lasts[0];
                                  local_1e0[1] = local_438->lasts[1];
                                  local_1e0[2] = local_438->lasts[2];
                                  local_1e0[3] = local_438->lasts[3];
                                  local_1d0 = local_438->lasts[4];
                                  local_1cc = local_438->lasts[5];
                                  local_1c8 = local_438->lasts[6];
                                  iVar14 = local_1e0[local_428];
                                  uVar8 = *(undefined8 *)(auStack_1f8 + local_428 * 4);
                                  auVar3 = *(undefined1 (*) [16])(auStack_1f0 + local_428 * 4);
                                  *(undefined8 *)(auStack_200 + local_428 * 4 + 4) =
                                       *(undefined8 *)(auStack_200 + local_428 * 4);
                                  *(undefined8 *)(auStack_1f8 + local_428 * 4 + 4) = uVar8;
                                  *(undefined1 (*) [16])(auStack_1ec + local_428 * 4) = auVar3;
                                  local_1e0[0] = iVar14;
                                  piVar27[1] = iVar14;
                                  piVar27[2] = local_1e0[1];
                                  piVar27[3] = local_1e0[2];
                                  piVar27[4] = local_1e0[3];
                                  piVar27[5] = local_1d0;
                                  piVar27[6] = local_1cc;
                                  piVar27[7] = local_1c8;
                                  piVar27[10] = 0;
                                  piVar27[0xb] = (int)local_468;
                                  if (iVar32 == uVar54 - 1) {
                                    *piVar57 = iVar32;
                                  }
                                }
                                iVar32 = iVar32 + 1;
                                iVar20 = iVar20 + uVar54;
                                piVar57 = piVar57 + 1;
                                pbVar53 = pbVar53 + 1;
                              } while (iVar32 < (int)uVar54);
LAB_14f35e1be:
                              uVar36 = (ulonglong)local_3d8;
                              pnVar45 = local_438;
                            }
                            if ((uint)((int)fVar40 - local_364) < local_360) {
                              fVar56 = 2.8026e-45;
                              lVar37 = 2;
                              fVar35 = local_3f8;
                              iVar49 = local_358;
                              if (2 < (int)fVar40) {
                                iVar34 = ((int)local_46c + 3U) * uVar54;
                                local_3c0 = pnVar29->codecost_offset2 + 0xf9;
                                local_338 = (ulonglong)uVar54 * 0x30;
                                pfVar59 = (float *)(local_450 +
                                                   (longlong)(int)(((int)local_46c + 2U) * uVar54) *
                                                   0x30 + 0x24);
                                lVar51 = (local_340 + local_428 * 4) * 8;
                                puVar48 = local_450;
                                local_250 = lVar51;
                                do {
                                  lVar50 = local_428;
                                  iVar49 = (int)fVar56 + -9;
                                  local_348 = pfVar59;
                                  local_35c = iVar34;
                                  if (iVar49 < 0) {
                                    iVar49 = pnVar29->codecost_literal
                                             [(uVar36 & 0xffffffff &
                                              (ulonglong)pnVar29->packet_pos_mask) + 0xf]
                                             [lVar51 + lVar37 + 0xfe];
                                  }
                                  else {
                                    if (iVar49 < 0xff) {
                                      iVar49 = *local_3c0;
                                    }
                                    else {
                                      iVar49 = cost_excess_huge(iVar49,pnVar29->codecost_excess_ml);
                                      puVar48 = local_450;
                                    }
                                    iVar49 = pnVar29->codecost_packet
                                             [uVar36 & 0xffffffff &
                                              (ulonglong)pnVar29->packet_pos_mask][lVar51 + 7] +
                                             iVar49;
                                  }
                                  fVar35 = (float)(local_470 + iVar49);
                                  if (uVar54 == 1) {
                                    pfVar39 = (float *)(puVar48 + ((int)local_46c + lVar37) * 0x30);
                                    if ((int)fVar35 < (int)*pfVar39) {
                                      *pfVar39 = fVar35;
                                      pfVar39[8] = fVar56;
                                      pfVar39[9] = local_464;
                                      newLZHC_LOs_NoPad::SetMTF
                                                ((newLZHC_LOs_NoPad *)(pfVar39 + 1),pnVar45,
                                                 local_458);
                                      pfVar39[10] = 0.0;
                                      pfVar39[0xb] = local_468;
                                      local_348 = pfVar59;
                                      local_35c = iVar34;
                                      goto LAB_14f35e586;
                                    }
                                  }
                                  else {
                                    if ((int)fVar35 < (int)pfVar59[-9]) {
                                      pfVar59[-9] = fVar35;
                                      pfVar59[-1] = fVar56;
                                      *pfVar59 = local_464;
                                      newLZHC_LOs_NoPad::SetMTF
                                                ((newLZHC_LOs_NoPad *)(pfVar59 + -8),pnVar45,
                                                 local_458);
                                      pfVar59[1] = 0.0;
                                      pfVar59[2] = local_468;
                                    }
                                    iVar49 = 1;
                                    lVar51 = (longlong)local_438->lasts[lVar50];
                                    piVar57 = (int *)((longlong)local_440 +
                                                     ((longlong)(int)local_46c + 1 + lVar37) * 4);
                                    pbVar53 = param_4 + (int)local_46c + lVar37;
                                    do {
                                      iVar32 = 0;
                                      switch(pnVar29->chunktype) {
                                      case 0:
                                        uVar36 = (ulonglong)(byte)(*pbVar53 - pbVar53[-lVar51]);
                                        goto LAB_14f35e461;
                                      case 1:
                                        uVar36 = (ulonglong)*pbVar53;
                                        goto LAB_14f35e461;
                                      case 2:
                                        lVar50 = 0;
                                        if (iVar49 != 1) {
                                          lVar50 = 0x100;
                                        }
                                        iVar32 = pnVar29->codecost_literal[0]
                                                 [(ulonglong)(byte)(*pbVar53 - pbVar53[-lVar51]) +
                                                  lVar50];
                                        break;
                                      case 3:
                                        uVar13 = -iVar12 + (int)pbVar53 & 3;
                                        goto LAB_14f35e44c;
                                      case 4:
                                        iVar32 = pnVar29->codecost_literal[pbVar53[-1] >> 4]
                                                 [*pbVar53];
                                        break;
                                      case 5:
                                        uVar13 = -iVar12 + (int)pbVar53 & 0xf;
LAB_14f35e44c:
                                        uVar36 = (ulonglong)(byte)(*pbVar53 - pbVar53[-lVar51]) +
                                                 (ulonglong)uVar13 * 0x100;
LAB_14f35e461:
                                        iVar32 = pnVar29->codecost_literal[0][uVar36];
                                      }
                                      fVar35 = (float)((int)fVar35 + iVar32);
                                      pfVar59 = (float *)(local_450 +
                                                         (longlong)(iVar34 + iVar49) * 0x30);
                                      if ((int)fVar35 < (int)*pfVar59) {
                                        *pfVar59 = fVar35;
                                        pfVar59[8] = fVar56;
                                        pfVar59[9] = local_464;
                                        local_1a0[0] = (float)local_438->lasts[0];
                                        local_1a0[1] = (float)local_438->lasts[1];
                                        local_1a0[2] = (float)local_438->lasts[2];
                                        local_1a0[3] = (float)local_438->lasts[3];
                                        local_190 = (float)local_438->lasts[4];
                                        local_18c = (float)local_438->lasts[5];
                                        local_188 = (float)local_438->lasts[6];
                                        fVar40 = local_1a0[local_428];
                                        uVar8 = *(undefined8 *)(auStack_1b8 + local_428 * 4);
                                        auVar3 = *(undefined1 (*) [16])(auStack_1b0 + local_428 * 4)
                                        ;
                                        *(undefined8 *)(auStack_1c0 + local_428 * 4 + 4) =
                                             *(undefined8 *)(auStack_1c0 + local_428 * 4);
                                        *(undefined8 *)(auStack_1b8 + local_428 * 4 + 4) = uVar8;
                                        *(undefined1 (*) [16])(auStack_1ac + local_428 * 4) = auVar3
                                        ;
                                        local_1a0[0] = fVar40;
                                        pfVar59[1] = fVar40;
                                        pfVar59[2] = local_1a0[1];
                                        pfVar59[3] = local_1a0[2];
                                        pfVar59[4] = local_1a0[3];
                                        pfVar59[5] = local_190;
                                        pfVar59[6] = local_18c;
                                        pfVar59[7] = local_188;
                                        pfVar59[10] = 0.0;
                                        pfVar59[0xb] = local_468;
                                        if (iVar49 == uVar54 - 1) {
                                          *piVar57 = iVar49;
                                        }
                                      }
                                      iVar49 = iVar49 + 1;
                                      iVar34 = iVar34 + uVar54;
                                      piVar57 = piVar57 + 1;
                                      pbVar53 = pbVar53 + 1;
                                    } while (iVar49 < (int)uVar54);
LAB_14f35e586:
                                    iVar34 = local_35c;
                                    uVar36 = (ulonglong)local_3d8;
                                    puVar48 = local_450;
                                    lVar51 = local_250;
                                    pfVar59 = local_348;
                                  }
                                  fVar56 = (float)((int)fVar56 + 1);
                                  pfVar59 = (float *)((longlong)pfVar59 + local_338);
                                  iVar34 = iVar34 + uVar54;
                                  lVar37 = lVar37 + 1;
                                  local_3c0 = local_3c0 + 1;
                                  pnVar45 = local_438;
                                  fVar40 = local_3d4;
                                  fVar35 = local_3f8;
                                  iVar49 = local_358;
                                  local_35c = iVar34;
                                  local_348 = pfVar59;
                                } while ((int)fVar56 < (int)local_3d4);
                              }
                            }
                            if ((int)fVar35 < local_354) {
                              lVar37 = (longlong)(int)fVar35;
                              puVar1 = (ulonglong *)(param_4 + lVar37 + 3);
                              puVar22 = puVar1;
                              if (puVar1 <= local_390 + -1) {
LAB_14f35e640:
                                uVar36 = *(ulonglong *)(-(longlong)local_3b0 + (longlong)puVar22) ^
                                         *puVar22;
                                if (uVar36 == 0) goto code_r0x00014f35e64d;
                                uVar38 = 0;
                                if (uVar36 != 0) {
                                  for (; (uVar36 >> uVar38 & 1) == 0; uVar38 = uVar38 + 1) {
                                  }
                                }
                                iVar34 = ((int)(uVar38 >> 3) - (int)puVar1) + (int)puVar22;
                                goto LAB_14f35e679;
                              }
LAB_14f35e656:
                              lVar51 = (longlong)puVar22 - (longlong)puVar1;
                              iVar34 = (int)lVar51;
                              for (; (puVar22 < local_390 &&
                                     (iVar34 = (int)lVar51,
                                     (char)*puVar22 ==
                                     *(char *)(-(longlong)local_3b0 + (longlong)puVar22)));
                                  puVar22 = (ulonglong *)((longlong)puVar22 + 1)) {
                                lVar51 = lVar51 + 1;
                                iVar34 = (int)lVar51;
                              }
LAB_14f35e679:
                              uVar13 = 0;
                              if (param_4[lVar37 + 2] ==
                                  param_4[(longlong)(int)~(uint)local_40c + 3 + lVar37]) {
                                uVar13 = (param_4[lVar37 + 1] ==
                                         param_4[(longlong)(-2 - (int)local_40c) + 3 + lVar37]) + 1;
                              }
                              iVar32 = 3 - uVar13;
                              fVar30 = (float)(uVar13 + iVar34);
                              fVar56 = fVar30;
                              if (((int)local_40c < 8) &&
                                 (fVar56 = local_40c, (int)fVar30 < (int)local_40c)) {
                                fVar56 = fVar30;
                              }
                              if (1 < (int)fVar56) {
                                iVar34 = newlzhc_cost_literals
                                                   (param_4,lVar37,iVar32,(long64)local_3b0,pnVar29,
                                                    0);
                                iVar34 = iVar34 + iVar49;
                                iVar49 = iVar32;
                                if (2 < iVar32) {
                                  iVar49 = 3;
                                  iVar34 = iVar34 + *(int *)((longlong)pnVar29 +
                                                            (0x1b03 - (ulonglong)uVar13) * 4);
                                }
                                iVar20 = (int)fVar56 + -9;
                                iVar49 = iVar49 * 8;
                                if (iVar20 < 0) {
                                  iVar20 = pnVar29->codecost_literal
                                           [(ulonglong)((uint)fVar35 & pnVar29->packet_pos_mask) +
                                            0xf][(longlong)(iVar49 + (int)fVar56) + 0xfe];
                                }
                                else {
                                  if (iVar20 < 0xff) {
                                    iVar20 = pnVar29->codecost_offset2[(longlong)(int)fVar56 + 0xf7]
                                    ;
                                  }
                                  else {
                                    iVar20 = cost_excess_huge(iVar20,pnVar29->codecost_excess_ml);
                                  }
                                  iVar20 = pnVar29->codecost_packet
                                           [(uint)fVar35 & pnVar29->packet_pos_mask]
                                           [(longlong)iVar49 + 7] + iVar20;
                                }
                                puVar48 = local_450;
                                fVar35 = (float)(iVar32 + (int)fVar56 + (int)fVar35);
                                if ((int)local_460 <= (int)fVar35) {
                                  local_460 = fVar35;
                                }
                                piVar57 = (int *)(local_450 +
                                                 (longlong)(int)((int)fVar35 * uVar54) * 0x30);
                                if (iVar34 + iVar20 < *piVar57) {
                                  *piVar57 = iVar34 + iVar20;
                                  piVar57[8] = (int)fVar40;
                                  piVar57[9] = (int)local_464;
                                  newLZHC_LOs_NoPad::SetMTF
                                            ((newLZHC_LOs_NoPad *)(piVar57 + 1),local_438,local_458)
                                  ;
                                  *(char *)(piVar57 + 10) = (char)iVar32;
                                  piVar57[10] = piVar57[10] & 0xff;
                                  piVar57[10] = piVar57[10] | (int)fVar56 << 8;
                                  piVar57[0xb] = (int)local_468;
                                  uVar38 = (ulonglong)(uint)local_464;
                                  uVar41 = (ulonglong)(uint)local_3d0;
                                  lVar37 = local_340;
                                  uVar24 = local_458;
                                  goto LAB_14f35e850;
                                }
                              }
                            }
                            uVar41 = (ulonglong)(uint)local_3d0;
                            uVar38 = (ulonglong)(uint)local_464;
                            lVar37 = local_340;
                            puVar48 = local_450;
                            uVar24 = local_458;
                          }
                        }
LAB_14f35e850:
                        local_458 = uVar24 + 1;
                        uVar36 = (ulonglong)local_458;
                        local_428 = local_428 + 1;
                      } while ((int)local_458 < 7);
                      uVar36 = (ulonglong)local_420;
                      if ((int)local_420 < (int)uVar41) {
                        uVar36 = uVar41;
                      }
                      uVar13 = (uint)uVar36;
                      local_420 = uVar13;
                      if ((int)uVar13 < local_414) {
                        sVar58 = local_2a8;
                        fVar35 = local_39c;
                        if (local_470 < local_3e0) {
                          local_3e0 = local_470;
                          afStack_108[local_3f0] = (float)uVar38;
                          aiStack_130[local_3f0] = local_470;
                          afStack_e0[local_3f0] = local_468;
                          aiStack_b8[local_3f0] = (int)uVar41;
                          local_3f0 = local_3f0 + 1;
                        }
                        goto LAB_14f35e932;
                      }
                      goto LAB_14f35f539;
                    }
                    uVar36 = (ulonglong)local_420;
                    local_454 = (float)((int)fVar40 + 1);
                    uVar38 = (ulonglong)(uint)local_454;
                    local_2a0 = local_2a0 + 1;
                    uVar41 = local_3f0;
                  }
                  else {
                    if ((longlong)local_2b0 < (longlong)local_2a0) goto LAB_14f35e955;
                    local_464 = (float)((int)fVar40 - 1);
                    uVar38 = (ulonglong)(uint)local_464;
                    if ((int)local_46c - (int)local_464 < (int)fVar44) goto LAB_14f35e955;
                    local_468 = (float)(((int)local_46c - (int)local_464) * uVar54);
                    local_470 = *(int *)(puVar48 + (longlong)(int)local_468 * 0x30);
                    if (local_470 != 0x7fffffff) {
                      lVar51 = (longlong)*(int *)(puVar48 + (longlong)(int)local_468 * 0x30 + 4);
                      lVar37 = (longlong)(int)local_46c - (local_2a0 - 1);
                      iVar34 = 0;
                      if (local_464 != 0.0) {
                        switch(pnVar29->chunktype) {
                        case 0:
                          puVar26 = param_4 + lVar37;
                          uVar36 = uVar38;
                          iVar34 = iVar49;
                          do {
                            iVar34 = iVar34 + pnVar29->codecost_literal[0]
                                              [(byte)(*puVar26 - puVar26[-lVar51])];
                            puVar26 = puVar26 + 1;
                            uVar13 = (int)uVar36 - 1;
                            uVar36 = (ulonglong)uVar13;
                          } while (uVar13 != 0);
                          break;
                        case 1:
                          pbVar53 = param_4 + lVar37;
                          uVar36 = uVar38;
                          iVar34 = iVar49;
                          do {
                            iVar34 = iVar34 + pnVar29->codecost_literal[0][*pbVar53];
                            pbVar53 = pbVar53 + 1;
                            uVar13 = (int)uVar36 - 1;
                            uVar36 = (ulonglong)uVar13;
                          } while (uVar13 != 0);
                          break;
                        case 2:
                          iVar34 = pnVar29->codecost_literal[0]
                                   [(byte)(param_4[lVar37] - param_4[lVar37 - lVar51])];
                          iVar49 = (int)fVar40 - 2;
                          if (iVar49 != 0) {
                            puVar26 = param_4 + lVar37 + 1;
                            do {
                              iVar34 = iVar34 + pnVar29->codecost_literal[1]
                                                [(byte)(*puVar26 - puVar26[-lVar51])];
                              puVar26 = puVar26 + 1;
                              iVar49 = iVar49 + -1;
                            } while (iVar49 != 0);
                          }
                          break;
                        case 3:
                          puVar26 = param_4 + lVar37;
                          uVar36 = uVar38;
                          iVar34 = iVar49;
                          do {
                            iVar34 = iVar34 + pnVar29->codecost_literal[0]
                                              [CONCAT41((int)lVar37,*puVar26 - puVar26[-lVar51]) &
                                               0x3ff];
                            lVar37 = lVar37 + 1;
                            puVar26 = puVar26 + 1;
                            uVar13 = (int)uVar36 - 1;
                            uVar36 = (ulonglong)uVar13;
                          } while (uVar13 != 0);
                          break;
                        case 4:
                          pbVar53 = param_4 + lVar37;
                          uVar36 = uVar38;
                          iVar34 = iVar49;
                          do {
                            iVar34 = iVar34 + pnVar29->codecost_literal[pbVar53[-1] >> 4][*pbVar53];
                            pbVar53 = pbVar53 + 1;
                            uVar13 = (int)uVar36 - 1;
                            uVar36 = (ulonglong)uVar13;
                          } while (uVar13 != 0);
                          break;
                        case 5:
                          puVar26 = param_4 + lVar37;
                          uVar36 = uVar38;
                          iVar34 = iVar49;
                          do {
                            iVar34 = iVar34 + pnVar29->codecost_literal[0]
                                              [CONCAT41((int)lVar37,*puVar26 - puVar26[-lVar51]) &
                                               0xfff];
                            lVar37 = lVar37 + 1;
                            puVar26 = puVar26 + 1;
                            uVar13 = (int)uVar36 - 1;
                            uVar36 = (ulonglong)uVar13;
                          } while (uVar13 != 0);
                        }
                      }
switchD_14f35d926_default:
                      local_470 = local_470 + iVar34;
                      goto LAB_14f35dcc2;
                    }
                    uVar36 = (ulonglong)local_420;
                    local_454 = (float)((int)fVar40 + 1);
                    uVar38 = (ulonglong)(uint)local_454;
                    local_2a0 = local_2a0 + 1;
                    sVar58 = local_2a8;
                    fVar35 = local_39c;
                  }
                }
                if ((longlong)local_2a0 <= (longlong)local_2b0) {
                  sVar21 = local_2a0;
                  if ((local_2a0 == local_2b0) && ((longlong)local_2b0 < (longlong)sVar58)) {
                    uVar38 = (ulonglong)(uint)fVar35;
                    sVar21 = sVar58;
                    local_464 = fVar35;
                  }
                  fVar56 = (float)uVar38;
                  local_468 = (float)((int)local_46c - (int)fVar56);
                  lVar37 = (longlong)(int)local_46c - sVar21;
                  uVar41 = local_3f0;
                  if (lVar37 < (int)fVar44) goto LAB_14f35e955;
                  local_470 = *(int *)(puVar48 + lVar37 * 0x30);
                  if (local_470 != 0x7fffffff) {
                    if (fVar56 != fVar35) {
                      lVar51 = (longlong)*(int *)(puVar48 + lVar37 * 0x30 + 4);
                      iVar49 = 0;
                      iVar34 = 0;
                      if (fVar56 != 0.0) {
                        switch(pnVar29->chunktype) {
                        case 0:
                          puVar26 = param_4 + lVar37;
                          uVar36 = uVar38;
                          iVar34 = iVar49;
                          do {
                            iVar34 = iVar34 + pnVar29->codecost_literal[0]
                                              [(byte)(*puVar26 - puVar26[-lVar51])];
                            puVar26 = puVar26 + 1;
                            uVar13 = (int)uVar36 - 1;
                            uVar36 = (ulonglong)uVar13;
                          } while (uVar13 != 0);
                          break;
                        case 1:
                          pbVar53 = param_4 + lVar37;
                          uVar36 = uVar38;
                          iVar34 = iVar49;
                          do {
                            iVar34 = iVar34 + pnVar29->codecost_literal[0][*pbVar53];
                            pbVar53 = pbVar53 + 1;
                            uVar13 = (int)uVar36 - 1;
                            uVar36 = (ulonglong)uVar13;
                          } while (uVar13 != 0);
                          break;
                        case 2:
                          iVar34 = pnVar29->codecost_literal[0]
                                   [(byte)(param_4[lVar37] - param_4[lVar37 - lVar51])];
                          iVar49 = (int)fVar56 - 1;
                          if (iVar49 != 0) {
                            puVar26 = param_4 + lVar37 + 1;
                            do {
                              iVar34 = iVar34 + pnVar29->codecost_literal[1]
                                                [(byte)(*puVar26 - puVar26[-lVar51])];
                              puVar26 = puVar26 + 1;
                              iVar49 = iVar49 + -1;
                            } while (iVar49 != 0);
                          }
                          break;
                        case 3:
                          puVar26 = param_4 + lVar37;
                          uVar36 = uVar38;
                          iVar34 = iVar49;
                          do {
                            iVar34 = iVar34 + pnVar29->codecost_literal[0]
                                              [CONCAT41((int)lVar37,*puVar26 - puVar26[-lVar51]) &
                                               0x3ff];
                            lVar37 = lVar37 + 1;
                            puVar26 = puVar26 + 1;
                            uVar13 = (int)uVar36 - 1;
                            uVar36 = (ulonglong)uVar13;
                          } while (uVar13 != 0);
                          break;
                        case 4:
                          pbVar53 = param_4 + lVar37;
                          uVar36 = uVar38;
                          iVar34 = iVar49;
                          do {
                            iVar34 = iVar34 + pnVar29->codecost_literal[pbVar53[-1] >> 4][*pbVar53];
                            pbVar53 = pbVar53 + 1;
                            uVar13 = (int)uVar36 - 1;
                            uVar36 = (ulonglong)uVar13;
                          } while (uVar13 != 0);
                          break;
                        case 5:
                          puVar26 = param_4 + lVar37;
                          uVar36 = uVar38;
                          iVar34 = iVar49;
                          do {
                            iVar34 = iVar34 + pnVar29->codecost_literal[0]
                                              [CONCAT41((int)lVar37,*puVar26 - puVar26[-lVar51]) &
                                               0xfff];
                            lVar37 = lVar37 + 1;
                            puVar26 = puVar26 + 1;
                            uVar13 = (int)uVar36 - 1;
                            uVar36 = (ulonglong)uVar13;
                          } while (uVar13 != 0);
                        }
                      }
                      goto switchD_14f35d926_default;
                    }
                    local_470 = local_470 + local_408;
                    goto LAB_14f35dcc2;
                  }
                  uVar36 = (ulonglong)local_420;
                  local_454 = fVar40;
LAB_14f35e932:
                  local_454 = (float)((int)local_454 + 1);
                  uVar38 = (ulonglong)(uint)local_454;
                  local_2a0 = local_2a0 + 1;
                  uVar41 = local_3f0;
                  goto LAB_14f35d850;
                }
LAB_14f35e955:
                local_348 = (float *)0x0;
                pnVar45 = (newLZHC_LOs_NoPad *)(longlong)local_430;
                uVar13 = (uint)uVar36;
                local_438 = pnVar45;
                if (0 < (longlong)pnVar45) {
                  do {
                    lVar51 = 0;
                    uVar24 = auStack_180[(longlong)local_348 * 2];
                    piVar57 = (int *)(longlong)(int)uVar24;
                    uVar46 = auStack_180[(longlong)local_348 * 2 + 1];
                    iVar49 = 0x7fffffff;
                    lVar37 = -1;
                    local_3c0 = piVar57;
                    if (0 < (longlong)uVar41) {
                      iVar34 = uVar24 - 9;
                      do {
                        fVar35 = afStack_108[lVar51];
                        fVar40 = 4.2039e-45;
                        if ((int)fVar35 < 3) {
                          fVar40 = fVar35;
                        }
                        iVar20 = aiStack_130[lVar51];
                        uVar36 = (ulonglong)(uint)((int)local_46c - (int)fVar35);
                        iVar32 = (int)fVar40 * 8;
                        if (iVar34 < 0) {
                          iVar14 = pnVar29->codecost_packet
                                   [pnVar29->packet_pos_mask & (int)local_46c - (int)fVar35]
                                   [(longlong)(int)(iVar32 + uVar24) + 0xde];
                        }
                        else {
                          if (iVar34 < 0xff) {
                            iVar14 = pnVar29->codecost_offset2[(longlong)((longlong)piVar57 + 0xf7)]
                            ;
                          }
                          else {
                            iVar14 = cost_excess_huge(iVar34,pnVar29->codecost_excess_ml);
                          }
                          iVar14 = pnVar29->codecost_packet
                                   [(ulonglong)pnVar29->packet_pos_mask & uVar36 & 0xffffffff]
                                   [(longlong)iVar32 + 0xe7] + iVar14;
                        }
                        if (iVar14 + iVar20 < iVar49) {
                          lVar37 = lVar51;
                          iVar49 = iVar14 + iVar20;
                        }
                        lVar51 = lVar51 + 1;
                      } while (lVar51 < (longlong)local_3f0);
                      lVar51 = (longlong)(int)uVar46;
                      pnVar45 = local_438;
                      uVar41 = local_3f0;
                      if (-1 < lVar37) {
                        fVar35 = afStack_e0[lVar37];
                        lVar50 = (longlong)(int)fVar35;
                        fVar40 = afStack_108[lVar37];
                        fVar56 = 4.2039e-45;
                        if ((int)fVar40 < 3) {
                          fVar56 = fVar40;
                        }
                        puVar48 = local_450;
                        uVar13 = local_420;
                        local_40c = fVar56;
                        if ((int)uVar24 <= aiStack_b8[lVar37]) break;
                        if ((int)local_420 < (int)uVar24) {
                          local_420 = uVar24;
                        }
                        if ((int)local_460 <= (int)((int)local_46c + uVar24)) {
                          local_460 = (float)((int)local_46c + uVar24);
                        }
                        uVar13 = pnVar29->offset_alt_modulo;
                        if (uVar13 == 0) {
                          if ((int)uVar46 < 0x7fff08) {
                            uVar13 = uVar46 + 0xf8;
                            iVar49 = 0x1f;
                            if (uVar13 != 0) {
                              for (; uVar13 >> iVar49 == 0; iVar49 = iVar49 + -1) {
                              }
                            }
                            bVar11 = ((char)iVar49 + -8) * '\x10' | (byte)uVar13 & 0xf;
                          }
                          else {
                            iVar49 = 0x1f;
                            if (uVar46 - 0x7eff00 != 0) {
                              for (; uVar46 - 0x7eff00 >> iVar49 == 0; iVar49 = iVar49 + -1) {
                              }
                            }
                            bVar11 = (byte)iVar49 | 0xf0;
                          }
                          if (bVar11 < 0xf0) {
                            iVar49 = (bVar11 >> 4) + 4;
                          }
                          else {
                            iVar49 = bVar11 - 0xe0;
                          }
                          iVar49 = iVar49 * 0x20 + pnVar29->codecost_offset1[bVar11];
                          local_3e0 = iVar49 + 0xc;
                          if ((int)uVar46 < 0x7fff08) {
                            local_3e0 = iVar49;
                          }
                        }
                        else if (uVar13 == 1) {
                          uVar13 = uVar46 + 8;
                          iVar49 = 0x1f;
                          if (uVar13 != 0) {
                            for (; uVar13 >> iVar49 == 0; iVar49 = iVar49 + -1) {
                            }
                          }
                          bVar11 = (char)iVar49 - 3;
                          bVar11 = bVar11 * '\b' | (byte)(uVar13 >> (bVar11 & 0x1f)) ^ 8;
                          local_3e0 = (uint)(bVar11 >> 3) * 0x20 + pnVar29->codecost_offset1[bVar11]
                          ;
                        }
                        else {
                          uVar31 = uVar46 / uVar13 + 8;
                          iVar49 = 0x1f;
                          if (uVar31 != 0) {
                            for (; uVar31 >> iVar49 == 0; iVar49 = iVar49 + -1) {
                            }
                          }
                          bVar11 = (char)iVar49 - 3;
                          bVar11 = bVar11 * '\b' | (byte)(uVar31 >> (bVar11 & 0x1f)) ^ 8;
                          local_3e0 = pnVar29->codecost_offset2
                                      [(ulonglong)uVar46 % (ulonglong)uVar13 & 0xff] +
                                      pnVar29->codecost_offset1[bVar11] + (uint)(bVar11 >> 3) * 0x20
                          ;
                        }
                        local_3e0 = local_3e0 + aiStack_130[lVar37];
                        fVar30 = (float)((int)local_46c - (int)fVar40);
                        iVar49 = (int)fVar56 * 8;
                        fVar55 = local_46c;
                        local_3f8 = fVar30;
                        if (iVar34 < 0) {
                          local_398 = pnVar29->codecost_packet
                                      [(uint)fVar30 & pnVar29->packet_pos_mask]
                                      [(longlong)(int)(iVar49 + uVar24) + 0xde];
                        }
                        else {
                          if (iVar34 < 0xff) {
                            local_398 = pnVar29->codecost_offset2
                                        [(longlong)((longlong)piVar57 + 0xf7)];
                          }
                          else {
                            local_398 = cost_excess_huge(iVar34,pnVar29->codecost_excess_ml);
                          }
                          local_398 = pnVar29->codecost_packet
                                      [(uint)fVar30 & pnVar29->packet_pos_mask]
                                      [(longlong)iVar49 + 0xe7] + local_398;
                        }
                        local_398 = local_398 + local_3e0;
                        if (uVar54 == 1) {
                          piVar57 = (int *)(local_450 + (longlong)(int)(uVar24 + (int)fVar55) * 0x30
                                           );
                          if (local_398 < *piVar57) {
                            *piVar57 = local_398;
                            piVar57[8] = uVar24;
                            piVar57[9] = (int)fVar40;
                            piVar57[1] = uVar46;
                            piVar57[2] = *(int *)(local_450 + lVar50 * 0x30 + 4);
                            piVar57[3] = *(int *)(local_450 + lVar50 * 0x30 + 8);
                            piVar57[4] = *(int *)(local_450 + lVar50 * 0x30 + 0xc);
                            piVar57[5] = *(int *)(local_450 + lVar50 * 0x30 + 0x10);
                            piVar57[6] = *(int *)(local_450 + lVar50 * 0x30 + 0x14);
                            piVar57[7] = *(int *)(local_450 + lVar50 * 0x30 + 0x18);
                            piVar57[10] = 0;
                            piVar57[0xb] = (int)fVar35;
                          }
                        }
                        else {
                          piVar57 = (int *)(local_450 +
                                           (longlong)(int)((uVar24 + (int)fVar55) * uVar54) * 0x30);
                          if (local_398 < *piVar57) {
                            *piVar57 = local_398;
                            piVar57[8] = uVar24;
                            piVar57[9] = (int)fVar40;
                            piVar57[1] = uVar46;
                            piVar57[2] = *(int *)(local_450 + lVar50 * 0x30 + 4);
                            piVar57[3] = *(int *)(local_450 + lVar50 * 0x30 + 8);
                            piVar57[4] = *(int *)(local_450 + lVar50 * 0x30 + 0xc);
                            piVar57[5] = *(int *)(local_450 + lVar50 * 0x30 + 0x10);
                            piVar57[6] = *(int *)(local_450 + lVar50 * 0x30 + 0x14);
                            piVar57[7] = *(int *)(local_450 + lVar50 * 0x30 + 0x18);
                            piVar57[10] = 0;
                            piVar57[0xb] = (int)fVar35;
                          }
                          iVar34 = 1;
                          lVar37 = 1;
                          piVar57 = (int *)((longlong)local_440 +
                                           ((longlong)local_3c0 + (longlong)(int)local_46c + 1) * 4)
                          ;
                          iVar32 = (uVar24 + (int)fVar55 + 1) * uVar54;
                          pbVar53 = param_4 + (longlong)local_3c0 + (int)local_46c;
                          lVar60 = -lVar51;
                          iVar49 = local_398;
                          do {
                            iVar20 = 0;
                            switch(pnVar29->chunktype) {
                            case 0:
                              iVar20 = pnVar29->codecost_literal[0]
                                       [(byte)(*pbVar53 - pbVar53[lVar60])];
                              break;
                            case 1:
                              iVar20 = pnVar29->codecost_literal[0][*pbVar53];
                              break;
                            case 2:
                              uVar38 = (ulonglong)(byte)(*pbVar53 - pbVar53[lVar60]);
                              uVar36 = 0;
                              if (iVar34 != 1) {
                                uVar36 = 0x100;
                              }
                              goto LAB_14f35ee58;
                            case 3:
                              bVar11 = *pbVar53 - pbVar53[lVar60];
                              uVar13 = (int)pbVar53 + -iVar12 & 3;
                              goto LAB_14f35ee54;
                            case 4:
                              uVar38 = (ulonglong)(pbVar53[-1] >> 4) << 8;
                              uVar36 = (ulonglong)*pbVar53;
                              goto LAB_14f35ee58;
                            case 5:
                              bVar11 = *pbVar53 - pbVar53[lVar60];
                              uVar13 = (int)pbVar53 + -iVar12 & 0xf;
LAB_14f35ee54:
                              uVar38 = (ulonglong)bVar11;
                              uVar36 = (ulonglong)uVar13 << 8;
LAB_14f35ee58:
                              iVar20 = pnVar29->codecost_literal[0][uVar38 + uVar36];
                            }
                            iVar49 = iVar49 + iVar20;
                            piVar27 = (int *)(local_450 + (longlong)(iVar34 + iVar32) * 0x30);
                            if (iVar49 < *piVar27) {
                              *piVar27 = iVar49;
                              piVar27[8] = uVar24;
                              piVar27[9] = (int)fVar40;
                              piVar27[1] = uVar46;
                              piVar27[2] = *(int *)(local_450 + lVar50 * 0x30 + 4);
                              piVar27[3] = *(int *)(local_450 + lVar50 * 0x30 + 8);
                              piVar27[4] = *(int *)(local_450 + lVar50 * 0x30 + 0xc);
                              piVar27[5] = *(int *)(local_450 + lVar50 * 0x30 + 0x10);
                              piVar27[6] = *(int *)(local_450 + lVar50 * 0x30 + 0x14);
                              piVar27[7] = *(int *)(local_450 + lVar50 * 0x30 + 0x18);
                              piVar27[10] = 0;
                              piVar27[0xb] = (int)fVar35;
                              if (iVar34 == uVar54 - 1) {
                                *piVar57 = uVar54 - 1;
                              }
                            }
                            iVar34 = iVar34 + 1;
                            iVar32 = iVar32 + uVar54;
                            lVar37 = lVar37 + 1;
                            piVar57 = piVar57 + 1;
                            pbVar53 = pbVar53 + 1;
                            fVar30 = local_3f8;
                            fVar56 = local_40c;
                            fVar55 = local_46c;
                          } while (lVar37 < (longlong)local_3a8);
                        }
                        local_428 = lVar51;
                        if ((uVar24 - local_274 < local_280) &&
                           ((longlong)local_298 < (longlong)local_3c0)) {
                          uVar38 = (ulonglong)uVar54;
                          local_454 = (float)(((int)fVar55 + local_448) * uVar54);
                          local_3b0 = pnVar29->codecost_offset2 + local_298 + 0xf7;
                          fVar55 = (float)((local_448 + 1 +
                                           ((int)fVar55 - ((int)fVar55 + local_448))) * uVar54);
                          lVar37 = (longlong)(int)fVar56 * 8;
                          uVar36 = local_298;
                          uVar13 = local_448;
                          local_40c = fVar55;
                          local_338 = lVar37;
                          do {
                            iVar49 = uVar13 - 9;
                            if (iVar49 < 0) {
                              iVar49 = pnVar29->codecost_packet
                                       [(uint)fVar30 & pnVar29->packet_pos_mask]
                                       [uVar36 + lVar37 + 0xde];
                            }
                            else {
                              if (iVar49 < 0xff) {
                                iVar49 = *local_3b0;
                              }
                              else {
                                iVar49 = cost_excess_huge(iVar49,pnVar29->codecost_excess_ml);
                              }
                              iVar49 = pnVar29->codecost_packet
                                       [(uint)fVar30 & pnVar29->packet_pos_mask][lVar37 + 0xe7] +
                                       iVar49;
                            }
                            iVar49 = local_3e0 + iVar49;
                            if ((int)uVar38 == 1) {
                              piVar57 = (int *)(local_450 +
                                               ((longlong)(int)local_46c + uVar36) * 0x30);
                              if (iVar49 < *piVar57) {
                                *piVar57 = iVar49;
                                piVar57[8] = uVar13;
                                piVar57[9] = (int)fVar40;
                                piVar57[1] = uVar46;
                                piVar57[2] = *(int *)(local_450 + lVar50 * 0x30 + 4);
                                piVar57[3] = *(int *)(local_450 + lVar50 * 0x30 + 8);
                                piVar57[4] = *(int *)(local_450 + lVar50 * 0x30 + 0xc);
                                piVar57[5] = *(int *)(local_450 + lVar50 * 0x30 + 0x10);
                                piVar57[6] = *(int *)(local_450 + lVar50 * 0x30 + 0x14);
                                piVar57[7] = *(int *)(local_450 + lVar50 * 0x30 + 0x18);
                                piVar57[10] = 0;
                                piVar57[0xb] = (int)fVar35;
                              }
                            }
                            else {
                              piVar57 = (int *)(local_450 + (longlong)(int)local_454 * 0x30);
                              if (iVar49 < *piVar57) {
                                *piVar57 = iVar49;
                                piVar57[8] = uVar13;
                                piVar57[9] = (int)fVar40;
                                piVar57[1] = uVar46;
                                piVar57[2] = *(int *)(local_450 + lVar50 * 0x30 + 4);
                                piVar57[3] = *(int *)(local_450 + lVar50 * 0x30 + 8);
                                piVar57[4] = *(int *)(local_450 + lVar50 * 0x30 + 0xc);
                                piVar57[5] = *(int *)(local_450 + lVar50 * 0x30 + 0x10);
                                piVar57[6] = *(int *)(local_450 + lVar50 * 0x30 + 0x14);
                                piVar57[7] = *(int *)(local_450 + lVar50 * 0x30 + 0x18);
                                piVar57[10] = 0;
                                piVar57[0xb] = (int)fVar35;
                              }
                              iVar34 = 1;
                              lVar37 = 1;
                              piVar57 = (int *)((longlong)local_440 +
                                               ((longlong)(int)local_46c + 1 + uVar36) * 4);
                              iVar32 = (int)fVar55 + (int)local_454;
                              pbVar53 = param_4 + (longlong)(int)local_46c + uVar36;
                              do {
                                iVar20 = 0;
                                switch(pnVar29->chunktype) {
                                case 0:
                                  uVar38 = (ulonglong)(byte)(*pbVar53 - pbVar53[-local_428]);
                                  goto LAB_14f35f1ca;
                                case 1:
                                  uVar38 = (ulonglong)*pbVar53;
                                  goto LAB_14f35f1ca;
                                case 2:
                                  lVar51 = 0;
                                  if (iVar34 != 1) {
                                    lVar51 = 0x100;
                                  }
                                  iVar20 = pnVar29->codecost_literal[0]
                                           [(ulonglong)(byte)(*pbVar53 - pbVar53[-local_428]) +
                                            lVar51];
                                  break;
                                case 3:
                                  lVar51 = (longlong)pbVar53 + -(longlong)param_4;
                                  bVar11 = *pbVar53 - param_4[lVar51 - local_428];
                                  uVar31 = (uint)lVar51 & 3;
                                  goto LAB_14f35f1c0;
                                case 4:
                                  iVar20 = pnVar29->codecost_literal[pbVar53[-1] >> 4][*pbVar53];
                                  break;
                                case 5:
                                  lVar51 = (longlong)pbVar53 + -(longlong)param_4;
                                  bVar11 = *pbVar53 - param_4[lVar51 - local_428];
                                  uVar31 = (uint)lVar51 & 0xf;
LAB_14f35f1c0:
                                  uVar38 = (ulonglong)bVar11 + (ulonglong)uVar31 * 0x100;
LAB_14f35f1ca:
                                  iVar20 = pnVar29->codecost_literal[0][uVar38];
                                }
                                iVar49 = iVar49 + iVar20;
                                piVar27 = (int *)(local_450 + (longlong)(iVar32 + iVar34) * 0x30);
                                if (iVar49 < *piVar27) {
                                  *piVar27 = iVar49;
                                  piVar27[8] = uVar13;
                                  piVar27[9] = (int)fVar40;
                                  piVar27[1] = uVar46;
                                  piVar27[2] = *(int *)(local_450 + lVar50 * 0x30 + 4);
                                  piVar27[3] = *(int *)(local_450 + lVar50 * 0x30 + 8);
                                  piVar27[4] = *(int *)(local_450 + lVar50 * 0x30 + 0xc);
                                  piVar27[5] = *(int *)(local_450 + lVar50 * 0x30 + 0x10);
                                  piVar27[6] = *(int *)(local_450 + lVar50 * 0x30 + 0x14);
                                  piVar27[7] = *(int *)(local_450 + lVar50 * 0x30 + 0x18);
                                  piVar27[10] = 0;
                                  piVar27[0xb] = (int)fVar35;
                                  if (iVar34 == uVar54 - 1) {
                                    *piVar57 = uVar54 - 1;
                                  }
                                }
                                iVar34 = iVar34 + 1;
                                iVar32 = iVar32 + uVar54;
                                lVar37 = lVar37 + 1;
                                piVar57 = piVar57 + 1;
                                pbVar53 = pbVar53 + 1;
                              } while (lVar37 < (longlong)local_3a8);
                              uVar38 = (ulonglong)uVar54;
                              lVar37 = local_338;
                              fVar30 = local_3f8;
                              fVar55 = local_40c;
                            }
                            uVar13 = uVar13 + 1;
                            local_454 = (float)((int)local_454 + (int)uVar38);
                            uVar36 = uVar36 + 1;
                            local_3b0 = local_3b0 + 1;
                          } while ((longlong)uVar36 < (longlong)local_3c0);
                        }
                        pnVar45 = local_438;
                        uVar41 = local_3f0;
                        if ((int)((int)local_46c + uVar24) < local_354) {
                          lVar37 = (longlong)(int)((int)local_46c + uVar24);
                          puVar1 = (ulonglong *)(param_4 + lVar37 + 3);
                          puVar22 = puVar1;
                          if (puVar1 <= local_390 + -1) {
LAB_14f35f300:
                            uVar36 = *(ulonglong *)(-local_428 + (longlong)puVar22) ^ *puVar22;
                            if (uVar36 == 0) goto code_r0x00014f35f30d;
                            uVar38 = 0;
                            if (uVar36 != 0) {
                              for (; (uVar36 >> uVar38 & 1) == 0; uVar38 = uVar38 + 1) {
                              }
                            }
                            iVar49 = ((int)(uVar38 >> 3) - (int)puVar1) + (int)puVar22;
                            goto LAB_14f35f338;
                          }
LAB_14f35f316:
                          lVar51 = (longlong)puVar22 - (longlong)puVar1;
                          iVar49 = (int)lVar51;
                          for (; (puVar22 < local_390 &&
                                 (iVar49 = (int)lVar51,
                                 (char)*puVar22 == *(char *)((longlong)puVar22 + -local_428)));
                              puVar22 = (ulonglong *)((longlong)puVar22 + 1)) {
                            lVar51 = lVar51 + 1;
                            iVar49 = (int)lVar51;
                          }
LAB_14f35f338:
                          uVar36 = 0;
                          if (param_4[lVar37 + 2] == param_4[(longlong)(int)~uVar46 + 3 + lVar37]) {
                            uVar36 = (ulonglong)
                                     ((param_4[lVar37 + 1] ==
                                      param_4[(longlong)(int)(-2 - uVar46) + 3 + lVar37]) + 1);
                          }
                          iVar34 = 3 - (int)uVar36;
                          uVar31 = iVar49 + (int)uVar36;
                          uVar13 = uVar31;
                          if (((int)uVar46 < 8) && (uVar13 = uVar46, (int)uVar31 < (int)uVar46)) {
                            uVar13 = uVar31;
                          }
                          if (1 < (int)uVar13) {
                            iVar32 = newlzhc_cost_literals
                                               (param_4,lVar37,iVar34,local_428,pnVar29,0);
                            iVar32 = local_398 + iVar32;
                            iVar49 = iVar34;
                            if (2 < iVar34) {
                              iVar49 = 3;
                              iVar32 = iVar32 + *(int *)((longlong)pnVar29 + (0x1b03 - uVar36) * 4);
                            }
                            iVar20 = uVar13 - 9;
                            iVar49 = iVar49 * 8;
                            if (iVar20 < 0) {
                              iVar20 = pnVar29->codecost_literal
                                       [(ulonglong)
                                        ((int)local_46c + uVar24 & pnVar29->packet_pos_mask) + 0xf]
                                       [(longlong)(int)(iVar49 + uVar13) + 0xfe];
                            }
                            else {
                              if (iVar20 < 0xff) {
                                iVar20 = pnVar29->codecost_offset2[(longlong)(int)uVar13 + 0xf7];
                              }
                              else {
                                iVar20 = cost_excess_huge(iVar20,pnVar29->codecost_excess_ml);
                              }
                              iVar20 = pnVar29->codecost_packet
                                       [(int)local_46c + uVar24 & pnVar29->packet_pos_mask]
                                       [(longlong)iVar49 + 7] + iVar20;
                            }
                            fVar56 = (float)((int)local_46c + uVar24 + iVar34 + uVar13);
                            if ((int)local_460 <= (int)fVar56) {
                              local_460 = fVar56;
                            }
                            piVar57 = (int *)(local_450 +
                                             (longlong)(int)((int)fVar56 * uVar54) * 0x30);
                            pnVar45 = local_438;
                            uVar41 = local_3f0;
                            if (iVar32 + iVar20 < *piVar57) {
                              *piVar57 = iVar32 + iVar20;
                              piVar57[8] = uVar24;
                              piVar57[9] = (int)fVar40;
                              piVar57[1] = uVar46;
                              piVar57[2] = *(int *)(local_450 + lVar50 * 0x30 + 4);
                              piVar57[3] = *(int *)(local_450 + lVar50 * 0x30 + 8);
                              piVar57[4] = *(int *)(local_450 + lVar50 * 0x30 + 0xc);
                              piVar57[5] = *(int *)(local_450 + lVar50 * 0x30 + 0x10);
                              piVar57[6] = *(int *)(local_450 + lVar50 * 0x30 + 0x14);
                              piVar57[7] = *(int *)(local_450 + lVar50 * 0x30 + 0x18);
                              *(char *)(piVar57 + 10) = (char)iVar34;
                              piVar57[10] = piVar57[10] & 0xff;
                              piVar57[10] = piVar57[10] | uVar13 << 8;
                              piVar57[0xb] = (int)fVar35;
                            }
                          }
                        }
                      }
                    }
                    local_348 = (float *)((longlong)local_348 + 1);
                    puVar48 = local_450;
                    uVar13 = local_420;
                  } while ((longlong)local_348 < (longlong)pnVar45);
                }
                if (local_414 <= (int)uVar13) {
LAB_14f35f539:
                  local_40c = (float)((int)local_46c + uVar13);
                  if (local_40c == local_460) {
                    sVar58 = (size_t)(uint)local_40c;
                    fVar35 = local_40c;
                    fVar40 = local_40c;
                    break;
                  }
                  local_46c = (float)((int)local_40c - 1);
                  if (uVar54 == 1) {
                    local_408 = 0;
                    local_41c = local_40c;
                  }
                  else {
                    iVar49 = 1;
                    if (1 < local_3a8) {
                      iVar34 = ((int)local_40c + 1) * uVar54;
                      pbVar53 = param_4 + (int)local_40c;
                      lVar37 = -(longlong)
                                *(int *)(puVar48 +
                                        (longlong)(int)((int)local_40c * uVar54) * 0x30 + 4);
                      do {
                        lVar50 = (longlong)(iVar49 + iVar34);
                        lVar51 = (longlong)
                                 (int)(((int)local_40c - ((int)local_40c + 1)) * uVar54 + iVar49 +
                                      iVar34);
                        uVar8 = *(undefined8 *)(puVar48 + lVar51 * 0x30 + -0x30 + 8);
                        *(undefined8 *)(puVar48 + lVar50 * 0x30) =
                             *(undefined8 *)(puVar48 + lVar51 * 0x30 + -0x30);
                        *(undefined8 *)(puVar48 + lVar50 * 0x30 + 8) = uVar8;
                        *(undefined1 (*) [16])(puVar48 + lVar50 * 0x30 + 0x10) =
                             *(undefined1 (*) [16])(puVar48 + lVar51 * 0x30 + -0x20);
                        uVar8 = *(undefined8 *)(puVar48 + lVar51 * 0x30 + -0x10 + 8);
                        *(undefined8 *)(puVar48 + lVar50 * 0x30 + 0x20) =
                             *(undefined8 *)(puVar48 + lVar51 * 0x30 + -0x10);
                        *(undefined8 *)(puVar48 + lVar50 * 0x30 + 0x20 + 8) = uVar8;
                        iVar32 = 0;
                        switch(pnVar29->chunktype) {
                        case 0:
                          iVar32 = pnVar29->codecost_literal[0][(byte)(*pbVar53 - pbVar53[lVar37])];
                          break;
                        case 1:
                          iVar32 = pnVar29->codecost_literal[0][*pbVar53];
                          break;
                        case 2:
                          uVar38 = (ulonglong)(byte)(*pbVar53 - pbVar53[lVar37]);
                          uVar36 = 0;
                          if (iVar49 != 1) {
                            uVar36 = 0x100;
                          }
                          goto LAB_14f35f6dc;
                        case 3:
                          bVar11 = *pbVar53 - pbVar53[lVar37];
                          uVar13 = (int)pbVar53 + -iVar12 & 3;
                          goto LAB_14f35f6d8;
                        case 4:
                          uVar38 = (ulonglong)(pbVar53[-1] >> 4) << 8;
                          uVar36 = (ulonglong)*pbVar53;
                          goto LAB_14f35f6dc;
                        case 5:
                          bVar11 = *pbVar53 - pbVar53[lVar37];
                          uVar13 = (int)pbVar53 + -iVar12 & 0xf;
LAB_14f35f6d8:
                          uVar38 = (ulonglong)bVar11;
                          uVar36 = (ulonglong)uVar13 << 8;
LAB_14f35f6dc:
                          iVar32 = pnVar29->codecost_literal[0][uVar38 + uVar36];
                        }
                        *(int *)(puVar48 + lVar50 * 0x30) =
                             *(int *)(puVar48 + lVar50 * 0x30) + iVar32;
                        iVar49 = iVar49 + 1;
                        iVar34 = iVar34 + uVar54;
                        pbVar53 = pbVar53 + 1;
                      } while ((longlong)
                               (pbVar53 + ((1 - (longlong)param_4) - (longlong)(int)local_40c)) <
                               (longlong)(ulonglong)uVar54);
                    }
                    *(int *)((longlong)local_440 + (longlong)((int)local_40c + local_3cc) * 4) =
                         local_3cc;
                  }
                }
                local_46c = (float)((int)local_46c + 1);
                sVar58 = (size_t)(uint)local_460;
                fVar35 = local_41c;
                fVar40 = local_460;
              } while ((int)local_460 <= (int)local_418);
            }
          }
          else {
            iVar49 = ((int)fVar44 + 1) * uVar54;
            puVar26 = puVar48 + (longlong)iVar49 * 0x30;
            uVar41 = (ulonglong)(uVar54 - 1);
            uVar38 = uVar36;
            puVar61 = puVar26;
            do {
              do {
                puVar26[0] = 0xff;
                puVar26[1] = 0xff;
                puVar26[2] = 0xff;
                puVar26[3] = '\x7f';
                puVar26 = puVar26 + 0x30;
                uVar38 = uVar38 - 1;
              } while (uVar38 != 0);
              puVar26 = puVar61 + uVar36 * 0x30;
              uVar41 = uVar41 - 1;
              uVar38 = uVar36;
              puVar61 = puVar26;
            } while (uVar41 != 0);
            if (1 < uVar36) {
              lVar37 = 1;
              puVar26 = puVar48 + ((longlong)(int)((int)fVar44 * uVar54) + 1) * 0x30;
              do {
                puVar26[0] = 0xff;
                puVar26[1] = 0xff;
                puVar26[2] = 0xff;
                puVar26[3] = '\x7f';
                lVar37 = lVar37 + 1;
                puVar26 = puVar26 + 0x30;
              } while (lVar37 < (longlong)uVar36);
            }
            if ((int)uVar54 < (int)local_460 - (int)fVar44) {
              iVar34 = 1;
              if (1 < uVar36) {
                pbVar53 = param_4 + (int)fVar44;
                do {
                  lVar51 = (longlong)(iVar49 + iVar34);
                  lVar37 = (longlong)
                           (int)(iVar49 + iVar34 + ((int)fVar44 - ((int)fVar44 + 1)) * uVar54);
                  uVar8 = *(undefined8 *)(puVar48 + lVar37 * 0x30 + -0x30 + 8);
                  *(undefined8 *)(puVar48 + lVar51 * 0x30) =
                       *(undefined8 *)(puVar48 + lVar37 * 0x30 + -0x30);
                  *(undefined8 *)(puVar48 + lVar51 * 0x30 + 8) = uVar8;
                  *(undefined1 (*) [16])(puVar48 + lVar51 * 0x30 + 0x10) =
                       *(undefined1 (*) [16])(puVar48 + lVar37 * 0x30 + -0x20);
                  uVar8 = *(undefined8 *)(puVar48 + lVar37 * 0x30 + -0x10 + 8);
                  *(undefined8 *)(puVar48 + lVar51 * 0x30 + 0x20) =
                       *(undefined8 *)(puVar48 + lVar37 * 0x30 + -0x10);
                  *(undefined8 *)(puVar48 + lVar51 * 0x30 + 0x20 + 8) = uVar8;
                  lVar37 = (longlong)
                           *(int *)(puVar48 + (longlong)(int)((int)fVar44 * uVar54) * 0x30 + 4);
                  iVar32 = 0;
                  switch(pnVar29->chunktype) {
                  case 0:
                    uVar36 = (ulonglong)(byte)(*pbVar53 - pbVar53[-lVar37]);
                    goto LAB_14f35d1c1;
                  case 1:
                    uVar36 = (ulonglong)*pbVar53;
                    goto LAB_14f35d1c1;
                  case 2:
                    lVar50 = 0;
                    if (iVar34 != 1) {
                      lVar50 = 0x100;
                    }
                    iVar32 = pnVar29->codecost_literal[0]
                             [(ulonglong)(byte)(*pbVar53 - pbVar53[-lVar37]) + lVar50];
                    break;
                  case 3:
                    lVar50 = -(longlong)param_4 + (longlong)pbVar53;
                    bVar11 = *pbVar53 - param_4[lVar50 - lVar37];
                    uVar13 = (uint)lVar50 & 3;
                    goto LAB_14f35d1b7;
                  case 4:
                    iVar32 = pnVar29->codecost_literal[pbVar53[-1] >> 4][*pbVar53];
                    break;
                  case 5:
                    lVar50 = -(longlong)param_4 + (longlong)pbVar53;
                    bVar11 = *pbVar53 - param_4[lVar50 - lVar37];
                    uVar13 = (uint)lVar50 & 0xf;
LAB_14f35d1b7:
                    uVar36 = (ulonglong)bVar11 + (ulonglong)uVar13 * 0x100;
LAB_14f35d1c1:
                    iVar32 = pnVar29->codecost_literal[0][uVar36];
                  }
                  *(int *)(puVar48 + lVar51 * 0x30) = *(int *)(puVar48 + lVar51 * 0x30) + iVar32;
                  iVar34 = iVar34 + 1;
                  iVar49 = iVar49 + uVar54;
                  pbVar53 = pbVar53 + 1;
                  pvVar17 = local_440;
                } while ((longlong)(pbVar53 + ((1 - (longlong)param_4) - (longlong)(int)fVar44)) <
                         (longlong)local_3a8);
              }
              *(int *)((longlong)pvVar17 + (longlong)((int)fVar44 + local_3cc) * 4) = local_3cc;
              goto LAB_14f35d219;
            }
            sVar58 = (size_t)(uint)fVar44;
            fVar40 = fVar44;
            local_410 = fVar44;
          }
          local_460 = fVar40;
          uVar36 = local_328;
          iVar49 = (int)sVar58;
          fVar40 = (float)(iVar49 * uVar54);
          local_418 = fVar40;
          if ((int)((int)local_410 - 2U) <= iVar49) {
            if (uVar54 == 1) {
              local_454 = fVar44;
              if ((int)fVar44 < (int)((int)fVar35 - 8U)) {
                local_454 = (float)((int)fVar35 - 8U);
              }
              fVar40 = local_404;
              if ((int)local_454 < local_444) {
                lVar37 = (longlong)(int)local_454;
                pbVar53 = param_4 + lVar37;
                iVar49 = local_444 - (int)local_454;
                piVar57 = (int *)(local_450 + lVar37 * 0x30);
                do {
                  if (*piVar57 != 0x7fffffff) {
                    lVar51 = (longlong)piVar57[1];
                    iVar32 = 0;
                    iVar34 = 0;
                    if (iVar49 != 0) {
                      switch(pnVar29->chunktype) {
                      case 0:
                        pbVar47 = pbVar53;
                        iVar20 = iVar49;
                        iVar34 = iVar32;
                        do {
                          iVar34 = iVar34 + pnVar29->codecost_literal[0]
                                            [(byte)(*pbVar47 - pbVar47[-lVar51])];
                          pbVar47 = pbVar47 + 1;
                          iVar20 = iVar20 + -1;
                        } while (iVar20 != 0);
                        break;
                      case 1:
                        pbVar47 = pbVar53;
                        iVar20 = iVar49;
                        iVar34 = iVar32;
                        do {
                          iVar34 = iVar34 + pnVar29->codecost_literal[0][*pbVar47];
                          pbVar47 = pbVar47 + 1;
                          iVar20 = iVar20 + -1;
                        } while (iVar20 != 0);
                        break;
                      case 2:
                        iVar34 = pnVar29->codecost_literal[0]
                                 [(byte)(*pbVar53 - param_4[-lVar51 + lVar37])];
                        pbVar47 = pbVar53;
                        iVar32 = iVar49;
                        while (iVar32 = iVar32 + -1, iVar32 != 0) {
                          pbVar47 = pbVar47 + 1;
                          iVar34 = iVar34 + pnVar29->codecost_literal[1]
                                            [(byte)(*pbVar47 - pbVar47[-lVar51])];
                        }
                        break;
                      case 3:
                        pbVar47 = pbVar53;
                        iVar20 = iVar49;
                        iVar34 = iVar32;
                        do {
                          iVar34 = iVar34 + pnVar29->codecost_literal[0]
                                            [CONCAT41((int)pbVar47 - iVar12,
                                                      *pbVar47 - pbVar47[-lVar51]) & 0x3ff];
                          pbVar47 = pbVar47 + 1;
                          iVar20 = iVar20 + -1;
                        } while (iVar20 != 0);
                        break;
                      case 4:
                        pbVar47 = pbVar53;
                        iVar20 = iVar49;
                        iVar34 = iVar32;
                        do {
                          iVar34 = iVar34 + pnVar29->codecost_literal[pbVar47[-1] >> 4][*pbVar47];
                          pbVar47 = pbVar47 + 1;
                          iVar20 = iVar20 + -1;
                        } while (iVar20 != 0);
                        break;
                      case 5:
                        pbVar47 = pbVar53;
                        iVar20 = iVar49;
                        iVar34 = iVar32;
                        do {
                          iVar34 = iVar34 + pnVar29->codecost_literal[0]
                                            [CONCAT41((int)pbVar47 - iVar12,
                                                      *pbVar47 - pbVar47[-lVar51]) & 0xfff];
                          pbVar47 = pbVar47 + 1;
                          iVar20 = iVar20 + -1;
                        } while (iVar20 != 0);
                      }
                    }
                    iVar34 = *piVar57 + iVar34;
                    if (iVar34 < local_3c8) {
                      local_404 = local_454;
                      local_3c8 = iVar34;
                    }
                  }
                  local_454 = (float)((int)local_454 + 1);
                  iVar49 = iVar49 + -1;
                  lVar37 = lVar37 + 1;
                  piVar57 = piVar57 + 0xc;
                  pbVar53 = pbVar53 + 1;
                  fVar40 = local_404;
                } while ((int)local_454 < local_444);
              }
            }
            else {
              fVar35 = fVar44;
              if ((int)fVar44 < iVar49 + -8) {
                fVar35 = (float)(iVar49 + -8);
              }
              if ((int)fVar35 < local_444) {
                lVar37 = (longlong)(int)fVar35;
                local_430 = (int)fVar35 * uVar54;
                local_454 = (float)(local_444 - (int)fVar35);
                local_338 = (ulonglong)uVar54 * 0x30;
                local_3b0 = (int *)(local_450 + (longlong)local_430 * 0x30);
                do {
                  iVar49 = 0;
                  piVar57 = local_3b0;
                  do {
                    if (*piVar57 != 0x7fffffff) {
                      iVar34 = iVar49;
                      if (iVar49 == local_3cc) {
                        iVar34 = *(int *)((longlong)local_440 + lVar37 * 4);
                      }
                      if ((int)fVar44 <= (int)fVar35 - iVar34) {
                        lVar51 = (longlong)piVar57[1];
                        iVar20 = 0;
                        iVar32 = 0;
                        if (local_454 != 0.0) {
                          switch(pnVar29->chunktype) {
                          case 0:
                            puVar48 = param_4 + lVar37;
                            fVar40 = local_454;
                            iVar32 = iVar20;
                            do {
                              iVar32 = iVar32 + pnVar29->codecost_literal[0]
                                                [(byte)(*puVar48 - puVar48[-lVar51])];
                              puVar48 = puVar48 + 1;
                              fVar40 = (float)((int)fVar40 - 1);
                            } while (fVar40 != 0.0);
                            break;
                          case 1:
                            pbVar53 = param_4 + lVar37;
                            fVar40 = local_454;
                            iVar32 = iVar20;
                            do {
                              iVar32 = iVar32 + pnVar29->codecost_literal[0][*pbVar53];
                              pbVar53 = pbVar53 + 1;
                              fVar40 = (float)((int)fVar40 - 1);
                            } while (fVar40 != 0.0);
                            break;
                          case 2:
                            lVar50 = lVar37;
                            fVar40 = local_454;
                            iVar32 = iVar20;
                            if (iVar34 == 0) {
                              fVar40 = (float)((int)local_454 - 1);
                              lVar50 = lVar37 + 1;
                              iVar32 = pnVar29->codecost_literal[0]
                                       [(byte)(param_4[lVar37] - param_4[lVar37 - lVar51])];
                              if (fVar40 == 0.0) break;
                            }
                            puVar48 = param_4 + lVar50;
                            do {
                              iVar32 = iVar32 + pnVar29->codecost_literal[1]
                                                [(byte)(*puVar48 - puVar48[-lVar51])];
                              puVar48 = puVar48 + 1;
                              fVar40 = (float)((int)fVar40 - 1);
                            } while (fVar40 != 0.0);
                            break;
                          case 3:
                            puVar48 = param_4 + lVar37;
                            fVar40 = local_454;
                            iVar32 = iVar20;
                            do {
                              iVar32 = iVar32 + pnVar29->codecost_literal[0]
                                                [CONCAT41((int)puVar48 - iVar12,
                                                          *puVar48 - puVar48[-lVar51]) & 0x3ff];
                              puVar48 = puVar48 + 1;
                              fVar40 = (float)((int)fVar40 - 1);
                            } while (fVar40 != 0.0);
                            break;
                          case 4:
                            pbVar53 = param_4 + lVar37;
                            fVar40 = local_454;
                            iVar32 = iVar20;
                            do {
                              iVar32 = iVar32 + pnVar29->codecost_literal[pbVar53[-1] >> 4]
                                                [*pbVar53];
                              pbVar53 = pbVar53 + 1;
                              fVar40 = (float)((int)fVar40 - 1);
                            } while (fVar40 != 0.0);
                            break;
                          case 5:
                            puVar48 = param_4 + lVar37;
                            fVar40 = local_454;
                            iVar32 = iVar20;
                            do {
                              iVar32 = iVar32 + pnVar29->codecost_literal[0]
                                                [CONCAT41((int)puVar48 - iVar12,
                                                          *puVar48 - puVar48[-lVar51]) & 0xfff];
                              puVar48 = puVar48 + 1;
                              fVar40 = (float)((int)fVar40 - 1);
                            } while (fVar40 != 0.0);
                          }
                        }
                        iVar32 = *piVar57 + iVar32;
                        fVar40 = local_418;
                        if (iVar32 < local_3c8) {
                          local_418 = (float)(iVar49 + local_430);
                          fVar40 = local_418;
                          local_404 = (float)((int)fVar35 - iVar34);
                          local_3c8 = iVar32;
                        }
                      }
                    }
                    iVar49 = iVar49 + 1;
                    piVar57 = piVar57 + 0xc;
                  } while (iVar49 < (int)uVar54);
                  fVar35 = (float)((int)fVar35 + 1);
                  local_430 = local_430 + uVar54;
                  local_3b0 = local_3b0 + (ulonglong)uVar54 * 0xc;
                  local_454 = (float)((int)local_454 - 1);
                  lVar37 = lVar37 + 1;
                } while ((int)fVar35 < local_444);
              }
            }
            sVar58 = (size_t)(uint)local_404;
            local_460 = local_404;
            local_400 = *(float *)(local_450 + (longlong)(int)fVar40 * 0x30 + 4);
          }
          local_320 = 0;
          fVar56 = (float)sVar58;
          fVar35 = fVar56;
          puVar48 = local_450 + (longlong)(int)fVar40 * 0x30;
          lVar37 = local_320;
          puVar26 = local_450;
          pnVar43 = local_330;
          while (local_320 = lVar37, fVar56 != fVar44) {
            iVar12 = (int)sVar58;
            uVar13 = *(uint *)(puVar48 + 0x28);
            if (uVar13 != 0) {
              iVar12 = (iVar12 - (uVar13 >> 8)) - (uVar13 & 0xff);
              if ((uVar36 < lVar37 + 1U) &&
                 (iVar49 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h"
                                              ,0x3f,
                                              "oo2::vector_storage_a<struct oo2::newlzhc_encoder_parse>::needmakefit"
                                              ,"newsize <= m_capacity"), puVar26 = local_450,
                 pnVar43 = local_330, iVar49 != 0)) {
                pcVar7 = (code *)swi(3);
                lVar15 = (*pcVar7)();
                return lVar15;
              }
              local_320 = lVar37 + 1;
              pnVar23 = pnVar43 + lVar37;
              if (pnVar23 != (newlzhc_encoder_parse *)0x0) {
                pnVar23->lastoffset = 0;
                pnVar23->lrl = 0;
                pnVar23->ml = 0;
                pnVar23->offset = 0;
              }
              pnVar43[lVar37].lastoffset = *(int *)(puVar48 + 4);
              pnVar43[lVar37].offset = 0;
              pnVar43[lVar37].ml = *(uint *)(puVar48 + 0x28) >> 8;
              pnVar43[lVar37].lrl = (uint)puVar48[0x28];
            }
            lVar51 = local_320;
            fVar56 = (float)((iVar12 - *(int *)(puVar48 + 0x24)) - *(int *)(puVar48 + 0x20));
            sVar58 = (size_t)(uint)fVar56;
            puVar61 = puVar26 + (longlong)*(int *)(puVar48 + 0x2c) * 0x30;
            iVar12 = *(int *)(puVar48 + 4);
            if (iVar12 == *(int *)(puVar61 + 4)) {
              iVar12 = 0;
            }
            else if (iVar12 == *(int *)(puVar61 + 8)) {
              iVar12 = -1;
            }
            else if (iVar12 == *(int *)(puVar61 + 0xc)) {
              iVar12 = -2;
            }
            else if (iVar12 == *(int *)(puVar61 + 0x10)) {
              iVar12 = -3;
            }
            else if (iVar12 == *(int *)(puVar61 + 0x14)) {
              iVar12 = -4;
            }
            else if (iVar12 == *(int *)(puVar61 + 0x18)) {
              iVar12 = -5;
            }
            else if (iVar12 == *(int *)(puVar61 + 0x1c)) {
              iVar12 = -6;
            }
            if ((uVar36 < local_320 + 1U) &&
               (iVar49 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h"
                                            ,0x3f,
                                            "oo2::vector_storage_a<struct oo2::newlzhc_encoder_parse>::needmakefit"
                                            ,"newsize <= m_capacity"), puVar26 = local_450,
               pnVar43 = local_330, iVar49 != 0)) {
              pcVar7 = (code *)swi(3);
              lVar15 = (*pcVar7)();
              return lVar15;
            }
            lVar37 = lVar51 + 1;
            pnVar23 = pnVar43 + lVar51;
            if (pnVar23 != (newlzhc_encoder_parse *)0x0) {
              pnVar23->lastoffset = 0;
              pnVar23->lrl = 0;
              pnVar23->ml = 0;
              pnVar23->offset = 0;
            }
            pnVar43[lVar51].lastoffset = *(int *)(puVar61 + 4);
            pnVar43[lVar51].lrl = *(int *)(puVar48 + 0x24);
            pnVar43[lVar51].ml = *(int *)(puVar48 + 0x20);
            pnVar43[lVar51].offset = iVar12;
            fVar35 = local_460;
            puVar48 = puVar61;
            pnVar29 = local_290;
          }
          pnVar23 = pnVar43 + lVar37 + -1;
          pnVar16 = pnVar43;
          if (pnVar43 < pnVar23) {
            do {
              iVar12 = pnVar23->lrl;
              iVar49 = pnVar23->ml;
              iVar34 = pnVar23->offset;
              pnVar16->lastoffset = pnVar23->lastoffset;
              pnVar16->lrl = iVar12;
              pnVar16->ml = iVar49;
              pnVar16->offset = iVar34;
              *pnVar23 = *pnVar16;
              pnVar16 = pnVar16 + 1;
              pnVar23 = pnVar23 + -1;
            } while (pnVar16 < pnVar23);
          }
          vector_base<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>
          ::insert(&local_2d0,(longlong)(local_258 << 4) >> 4,pnVar43,pnVar43 + lVar37);
          _Src = local_3b8;
          fVar40 = local_404;
          lVar37 = (longlong)(int)local_404;
          if (fVar35 == local_404) goto LAB_14f35ff57;
          optimal_rescale_passinfo_incremental(local_3b8);
          optimal_update_passinfo
                    ((vector_a<oo2::newlzhc_encoder_parse> *)&local_330,(int)fVar44,_Src,param_4);
          optimal_passinfo_to_codecost(_Src,pnVar29);
          if ((int)local_410 <= (int)fVar35) goto LAB_14f35ff57;
          local_258 = local_2d0.m_size;
          puVar48 = local_450;
          pvVar17 = local_440;
          fVar44 = fVar35;
        } while( true );
      }
    }
    goto LAB_14f36024a;
  }
  local_3e8 = newLZHC_encode_chunk_optimal_greedy
                        (&local_370,&local_3dc,local_3b8,local_2f0,local_248,(int)uVar38,
                         eNewLZ_MinOffset_8,local_380,(newLZHC_MatchParseRecord *)local_318,param_4,
                         local_444,param_8,local_310,local_378,local_2b8,local_270,
                         (vector_a<oo2::newlzhc_encoder_parse> *)&local_2d0);
  iVar12 = local_3dc;
  if ((longlong)local_3e8 < (longlong)local_2d8) {
    *local_2f8 = local_3dc;
    *local_300 = local_370;
    if (pOVar28->minMatchLen < 8) {
      local_454 = 1.0737418e+09;
      sVar58 = newLZHC_encode_chunk_optimal_greedy
                         (&local_454,&local_27c,local_268,puVar48,local_2e0,8,local_3fc,local_380,
                          (newLZHC_MatchParseRecord *)local_318,param_4,local_444,param_8,local_310,
                          local_378,local_2b8,local_270,
                          (vector_a<oo2::newlzhc_encoder_parse> *)&local_2d0);
      iVar49 = local_27c;
      pOVar28 = local_388;
      if ((local_454 < *local_300) && ((longlong)sVar58 < (longlong)local_2d8)) {
        *local_2f8 = local_27c;
        *local_300 = local_454;
        memcpy(local_2f0,puVar48,sVar58);
        local_3e8 = sVar58;
        memcpy(local_3b8,local_268,0xc40c);
        local_3dc = iVar49;
        pOVar28 = local_388;
        iVar12 = iVar49;
      }
    }
    if (((6 < (int)local_380->level) || (local_380->compressor == OodleLZ_Compressor_Hydra)) &&
       (pOVar28->minMatchLen < 4)) {
      local_448 = 3;
      local_298 = 3;
    }
    goto LAB_14f35cd79;
  }
LAB_14f3601f4:
  local_3c4 = local_3c4 + 1;
  local_2e8 = local_2e8 + 1;
  if (1 < local_3c4) goto LAB_14f36024a;
  goto LAB_14f35ca26;
code_r0x00014f35d679:
  puVar22 = puVar22 + 1;
  if (local_390 + -1 < puVar22) goto LAB_14f35d685;
  goto LAB_14f35d670;
code_r0x00014f35d7ad:
  puVar22 = puVar22 + 1;
  if (local_390 + -1 < puVar22) goto LAB_14f35d7b6;
  goto LAB_14f35d7a0;
code_r0x00014f35f30d:
  puVar22 = puVar22 + 1;
  if (local_390 + -1 < puVar22) goto LAB_14f35f316;
  goto LAB_14f35f300;
code_r0x00014f35ddcd:
  puVar22 = puVar22 + 1;
  if (local_390 + -1 < puVar22) goto LAB_14f35ddd6;
  goto LAB_14f35ddc0;
code_r0x00014f35e64d:
  puVar22 = puVar22 + 1;
  if (local_390 + -1 < puVar22) goto LAB_14f35e656;
  goto LAB_14f35e640;
LAB_14f35ff57:
  uVar33 = local_2d0.m_size;
  if (local_2d0.m_size == 0) goto LAB_14f36024a;
  rrMemSetZero(_Src,0xc40c);
  fVar44 = local_350;
  if (0 < (longlong)uVar33) {
    piVar57 = (int *)(local_2d0._padding_ + 4);
    fVar35 = local_350;
    do {
      newLZHC_histo_literals
                (&_Src->literals,param_4,(longlong)(int)fVar35,(longlong)*piVar57,piVar57[-1],1);
      fVar35 = (float)((int)fVar35 + piVar57[1] + *piVar57);
      piVar57 = piVar57 + 4;
      uVar33 = uVar33 - 1;
    } while (uVar33 != 0);
  }
  fVar35 = local_400;
  iVar12 = local_444;
  lVar51 = (longlong)local_444;
  if (0 < local_444 - (int)fVar40) {
    newLZHC_histo_literals
              (&_Src->literals,param_4,lVar37,(longlong)(local_444 - (int)fVar40),(int)local_400,1);
  }
  pnVar9 = local_380;
  puVar48 = local_450;
  local_418 = 1.0737418e+09;
  sVar58 = newLZHC_put_parse(local_378,&local_418,&_Src->literals,&local_34c,param_4,iVar12,
                             local_450,local_2e0,param_8,local_380,(int)fVar35,
                             (vector_a<oo2::newlzhc_encoder_parse> *)&local_2d0,(int)fVar44,_Src,
                             local_3fc);
  prVar4 = local_288;
  if ((longlong)sVar58 < lVar51) {
    if ((pnVar9->carried_encoder_state).m_size != 0x18820) {
      lVar37 = (pnVar9->carried_encoder_state).m_capacity;
      if (lVar37 < 1) {
        if (local_288 != (rrArenaAllocator *)0x0) {
          pvVar17 = rrArenaAllocator::Alloc(local_288,0x18820,1);
          (pnVar9->carried_encoder_state).m_ptr = pvVar17;
          (pnVar9->carried_encoder_state).m_arena = prVar4;
        }
        puVar18 = (pnVar9->carried_encoder_state).m_ptr;
        if (puVar18 == (undefined8 *)0x0) {
          puVar18 = (*g_fp_OodleCore_Plugin_MallocAligned)(0x18820,0x10);
          if (puVar18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            Oodle_Core_Malloc_Failed(0x18820);
          }
          (pnVar9->carried_encoder_state).m_ptr = puVar18;
          (pnVar9->carried_encoder_state).m_arena = (rrArenaAllocator *)0x0;
        }
        (pnVar9->carried_encoder_state).m_capacity = 0x18820;
      }
      else {
        if ((lVar37 < 0x18820) &&
           (iVar12 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\newlz_vtable.h",0x94,
                                        "oo2::newlz_scratchblock::extend","size <= m_capacity"),
           iVar12 != 0)) {
          pcVar7 = (code *)swi(3);
          lVar15 = (*pcVar7)();
          return lVar15;
        }
        puVar18 = (pnVar9->carried_encoder_state).m_ptr;
      }
      (pnVar9->carried_encoder_state).m_size = 0x18820;
      *puVar18 = 0xffffffffffffffff;
    }
    pvVar17 = (pnVar9->carried_encoder_state).m_ptr;
    memcpy((void *)((longlong)local_3c4 * 0xc40c + 8 + (longlong)pvVar17),_Src,0xc40c);
    *(int *)((longlong)pvVar17 + local_2e8 * 4) = local_34c;
  }
  if (*local_300 <= local_418) {
    uVar38 = (ulonglong)local_448;
    uVar36 = local_3a8;
  }
  else {
    *local_2f8 = local_34c;
    *local_300 = local_418;
    memcpy(local_2f0,puVar48,sVar58);
    uVar38 = (ulonglong)local_448;
    uVar36 = local_3a8;
    local_3e8 = sVar58;
  }
  goto LAB_14f3601f4;
}

// newLZHC_get_match_heuristic @ 14f3603c0

match __cdecl
oo2::newLZHC_get_match_heuristic
          (newLZHC_MatchParseRecord *param_1,newLZHC_LOs *param_2,uchar *param_3,uchar *param_4,
          int param_5,int param_6,uchar *param_7,uint param_8,ENewLZ_MinOffset param_9,
          OodleLZ_CompressOptions *param_10)

{
  uint *puVar1;
  ulonglong uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  match mVar10;
  uint uVar11;
  ulonglong *puVar12;
  char *pcVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong *puVar16;
  OodleLZ_CompressOptions *pOVar17;
  longlong lVar18;
  
  uVar8 = *(uint *)param_3;
  uVar5 = 7;
  uVar7 = (param_2->lasts).contents[8];
  uVar4 = *(uint *)(param_3 + -(ulonglong)uVar7);
  if ((short)uVar8 == (short)uVar4) {
    uVar4 = uVar4 ^ uVar8;
    if (uVar4 == 0) {
      puVar16 = (ulonglong *)(param_3 + 4);
      puVar1 = (uint *)((longlong)(param_3 + -(ulonglong)uVar7) + 4);
      puVar12 = puVar16;
      if (puVar16 <= param_4 + -8) {
LAB_14f360430:
        uVar9 = *(ulonglong *)(((longlong)puVar1 - (longlong)puVar16) + (longlong)puVar12) ^
                *puVar12;
        if (uVar9 == 0) goto code_r0x00014f36043d;
        uVar2 = 0;
        if (uVar9 != 0) {
          for (; (uVar9 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
          }
        }
        lVar18 = ((uVar2 >> 3) - (longlong)puVar16) + (longlong)puVar12;
        goto LAB_14f360479;
      }
LAB_14f360446:
      lVar18 = (longlong)puVar12 - (longlong)puVar16;
      if (puVar12 < param_4) {
        pcVar13 = (char *)(lVar18 + (longlong)puVar1);
        do {
          if (pcVar13[(longlong)(param_3 + (4 - (longlong)puVar1))] != *pcVar13) break;
          pcVar13 = pcVar13 + 1;
          lVar18 = lVar18 + 1;
        } while (pcVar13 + ((longlong)puVar16 - (longlong)puVar1) < param_4);
      }
LAB_14f360479:
      uVar5 = (int)lVar18 + 4;
      uVar8 = *(uint *)param_3;
    }
    else {
      uVar5 = 3 - ((uVar4 & 0xffffff) != 0);
    }
    uVar4 = uVar5;
    if ((uVar7 < 8) && (uVar4 = uVar7, (int)uVar5 < (int)uVar7)) {
      uVar4 = uVar5;
    }
    uVar5 = uVar4 * 8 + 6;
    if ((int)uVar5 < 7) {
      uVar5 = 7;
    }
  }
  uVar4 = (param_2->lasts).contents[9];
  uVar6 = *(uint *)(param_3 + -(ulonglong)uVar4);
  uVar7 = uVar5;
  if ((short)uVar8 == (short)uVar6) {
    uVar6 = uVar6 ^ uVar8;
    if (uVar6 == 0) {
      puVar12 = (ulonglong *)(param_3 + 4);
      puVar1 = (uint *)((longlong)(param_3 + -(ulonglong)uVar4) + 4);
      puVar16 = puVar12;
      if (puVar12 <= param_4 + -8) {
LAB_14f360500:
        uVar9 = *(ulonglong *)(((longlong)puVar1 - (longlong)puVar12) + (longlong)puVar16) ^
                *puVar16;
        if (uVar9 == 0) goto code_r0x00014f36050d;
        uVar2 = 0;
        if (uVar9 != 0) {
          for (; (uVar9 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
          }
        }
        lVar18 = ((uVar2 >> 3) - (longlong)puVar12) + (longlong)puVar16;
        goto LAB_14f36054b;
      }
LAB_14f360516:
      lVar18 = (longlong)puVar16 - (longlong)puVar12;
      if (puVar16 < param_4) {
        pcVar13 = (char *)(lVar18 + (longlong)puVar1);
        do {
          if (pcVar13[(longlong)(param_3 + (4 - (longlong)puVar1))] != *pcVar13) break;
          pcVar13 = pcVar13 + 1;
          lVar18 = lVar18 + 1;
        } while (pcVar13 + ((longlong)puVar12 - (longlong)puVar1) < param_4);
      }
LAB_14f36054b:
      uVar7 = (int)lVar18 + 4;
      uVar8 = *(uint *)param_3;
    }
    else {
      uVar7 = 3 - ((uVar6 & 0xffffff) != 0);
    }
    uVar6 = uVar7;
    if ((uVar4 < 8) && (uVar6 = uVar4, (int)uVar7 < (int)uVar4)) {
      uVar6 = uVar7;
    }
    uVar7 = uVar6 * 8 + 5;
    if ((int)uVar7 < (int)uVar5) {
      uVar7 = uVar5;
    }
  }
  uVar4 = (param_2->lasts).contents[10];
  uVar6 = *(uint *)(param_3 + -(ulonglong)uVar4);
  uVar5 = uVar7;
  if ((short)uVar8 == (short)uVar6) {
    uVar6 = uVar6 ^ uVar8;
    if (uVar6 == 0) {
      puVar12 = (ulonglong *)(param_3 + 4);
      puVar1 = (uint *)((longlong)(param_3 + -(ulonglong)uVar4) + 4);
      puVar16 = puVar12;
      if (puVar12 <= param_4 + -8) {
LAB_14f3605d0:
        uVar9 = *(ulonglong *)(((longlong)puVar1 - (longlong)puVar12) + (longlong)puVar16) ^
                *puVar16;
        if (uVar9 == 0) goto code_r0x00014f3605dd;
        uVar2 = 0;
        if (uVar9 != 0) {
          for (; (uVar9 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
          }
        }
        lVar18 = ((uVar2 >> 3) - (longlong)puVar12) + (longlong)puVar16;
        goto LAB_14f360619;
      }
LAB_14f3605e6:
      lVar18 = (longlong)puVar16 - (longlong)puVar12;
      if (puVar16 < param_4) {
        pcVar13 = (char *)(lVar18 + (longlong)puVar1);
        do {
          if (pcVar13[(longlong)(param_3 + (4 - (longlong)puVar1))] != *pcVar13) break;
          pcVar13 = pcVar13 + 1;
          lVar18 = lVar18 + 1;
        } while (pcVar13 + ((longlong)puVar12 - (longlong)puVar1) < param_4);
      }
LAB_14f360619:
      uVar5 = (int)lVar18 + 4;
      uVar8 = *(uint *)param_3;
    }
    else {
      uVar5 = 3 - ((uVar6 & 0xffffff) != 0);
    }
    uVar6 = uVar5;
    if ((uVar4 < 8) && (uVar6 = uVar4, (int)uVar5 < (int)uVar4)) {
      uVar6 = uVar5;
    }
    uVar5 = uVar6 * 8 + 4;
    if ((int)uVar5 < (int)uVar7) {
      uVar5 = uVar7;
    }
  }
  uVar4 = (param_2->lasts).contents[0xb];
  uVar6 = *(uint *)(param_3 + -(ulonglong)uVar4);
  uVar7 = uVar5;
  if ((short)uVar8 == (short)uVar6) {
    uVar6 = uVar6 ^ uVar8;
    if (uVar6 == 0) {
      puVar12 = (ulonglong *)(param_3 + 4);
      puVar1 = (uint *)((longlong)(param_3 + -(ulonglong)uVar4) + 4);
      puVar16 = puVar12;
      if (puVar12 <= param_4 + -8) {
LAB_14f3606a0:
        uVar9 = *(ulonglong *)(((longlong)puVar1 - (longlong)puVar12) + (longlong)puVar16) ^
                *puVar16;
        if (uVar9 == 0) goto code_r0x00014f3606ad;
        uVar2 = 0;
        if (uVar9 != 0) {
          for (; (uVar9 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
          }
        }
        lVar18 = ((uVar2 >> 3) - (longlong)puVar12) + (longlong)puVar16;
        goto LAB_14f3606eb;
      }
LAB_14f3606b6:
      lVar18 = (longlong)puVar16 - (longlong)puVar12;
      if (puVar16 < param_4) {
        pcVar13 = (char *)(lVar18 + (longlong)puVar1);
        do {
          if (pcVar13[(longlong)(param_3 + (4 - (longlong)puVar1))] != *pcVar13) break;
          pcVar13 = pcVar13 + 1;
          lVar18 = lVar18 + 1;
        } while (pcVar13 + ((longlong)puVar12 - (longlong)puVar1) < param_4);
      }
LAB_14f3606eb:
      uVar7 = (int)lVar18 + 4;
      uVar8 = *(uint *)param_3;
    }
    else {
      uVar7 = 3 - ((uVar6 & 0xffffff) != 0);
    }
    uVar6 = uVar7;
    if ((uVar4 < 8) && (uVar6 = uVar4, (int)uVar7 < (int)uVar4)) {
      uVar6 = uVar7;
    }
    uVar7 = uVar6 * 8 + 3;
    if ((int)uVar7 < (int)uVar5) {
      uVar7 = uVar5;
    }
  }
  uVar4 = (param_2->lasts).contents[0xc];
  uVar6 = *(uint *)(param_3 + -(ulonglong)uVar4);
  uVar5 = uVar7;
  if ((short)uVar8 == (short)uVar6) {
    uVar6 = uVar6 ^ uVar8;
    if (uVar6 == 0) {
      puVar12 = (ulonglong *)(param_3 + 4);
      puVar1 = (uint *)((longlong)(param_3 + -(ulonglong)uVar4) + 4);
      puVar16 = puVar12;
      if (puVar12 <= param_4 + -8) {
LAB_14f360770:
        uVar9 = *(ulonglong *)(((longlong)puVar1 - (longlong)puVar12) + (longlong)puVar16) ^
                *puVar16;
        if (uVar9 == 0) goto code_r0x00014f36077d;
        uVar2 = 0;
        if (uVar9 != 0) {
          for (; (uVar9 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
          }
        }
        lVar18 = ((uVar2 >> 3) - (longlong)puVar12) + (longlong)puVar16;
        goto LAB_14f3607b9;
      }
LAB_14f360786:
      lVar18 = (longlong)puVar16 - (longlong)puVar12;
      if (puVar16 < param_4) {
        pcVar13 = (char *)(lVar18 + (longlong)puVar1);
        do {
          if (pcVar13[(longlong)(param_3 + (4 - (longlong)puVar1))] != *pcVar13) break;
          pcVar13 = pcVar13 + 1;
          lVar18 = lVar18 + 1;
        } while (pcVar13 + ((longlong)puVar12 - (longlong)puVar1) < param_4);
      }
LAB_14f3607b9:
      uVar5 = (int)lVar18 + 4;
      uVar8 = *(uint *)param_3;
    }
    else {
      uVar5 = 3 - ((uVar6 & 0xffffff) != 0);
    }
    uVar6 = uVar5;
    if ((uVar4 < 8) && (uVar6 = uVar4, (int)uVar5 < (int)uVar4)) {
      uVar6 = uVar5;
    }
    uVar5 = uVar6 * 8 + 2;
    if ((int)uVar5 < (int)uVar7) {
      uVar5 = uVar7;
    }
  }
  uVar4 = (param_2->lasts).contents[0xd];
  uVar6 = *(uint *)(param_3 + -(ulonglong)uVar4);
  uVar7 = uVar5;
  if ((short)uVar8 == (short)uVar6) {
    uVar6 = uVar6 ^ uVar8;
    if (uVar6 == 0) {
      puVar12 = (ulonglong *)(param_3 + 4);
      puVar1 = (uint *)((longlong)(param_3 + -(ulonglong)uVar4) + 4);
      puVar16 = puVar12;
      if (puVar12 <= param_4 + -8) {
LAB_14f360832:
        uVar9 = *(ulonglong *)(((longlong)puVar1 - (longlong)puVar12) + (longlong)puVar16) ^
                *puVar16;
        if (uVar9 == 0) goto code_r0x00014f36083f;
        uVar2 = 0;
        if (uVar9 != 0) {
          for (; (uVar9 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
          }
        }
        lVar18 = ((uVar2 >> 3) - (longlong)puVar12) + (longlong)puVar16;
        goto LAB_14f360879;
      }
LAB_14f360848:
      lVar18 = (longlong)puVar16 - (longlong)puVar12;
      if (puVar16 < param_4) {
        pcVar13 = (char *)(lVar18 + (longlong)puVar1);
        do {
          if (pcVar13[(longlong)(param_3 + (4 - (longlong)puVar1))] != *pcVar13) break;
          pcVar13 = pcVar13 + 1;
          lVar18 = lVar18 + 1;
        } while (pcVar13 + ((longlong)puVar12 - (longlong)puVar1) < param_4);
      }
LAB_14f360879:
      uVar7 = (int)lVar18 + 4;
      uVar8 = *(uint *)param_3;
    }
    else {
      uVar7 = 3 - ((uVar6 & 0xffffff) != 0);
    }
    uVar6 = uVar7;
    if ((uVar4 < 8) && (uVar6 = uVar4, (int)uVar7 < (int)uVar4)) {
      uVar6 = uVar7;
    }
    uVar7 = uVar6 * 8 + 1;
    if ((int)uVar7 < (int)uVar5) {
      uVar7 = uVar5;
    }
  }
  uVar5 = (param_2->lasts).contents[0xe];
  uVar4 = *(uint *)(param_3 + -(ulonglong)uVar5);
  uVar6 = uVar7;
  if ((short)uVar8 == (short)uVar4) {
    uVar4 = uVar4 ^ uVar8;
    if (uVar4 == 0) {
      puVar12 = (ulonglong *)(param_3 + 4);
      puVar1 = (uint *)((longlong)(param_3 + -(ulonglong)uVar5) + 4);
      puVar16 = puVar12;
      if (puVar12 <= param_4 + -8) {
LAB_14f360900:
        uVar9 = *(ulonglong *)(((longlong)puVar1 - (longlong)puVar12) + (longlong)puVar16) ^
                *puVar16;
        if (uVar9 == 0) goto code_r0x00014f36090d;
        uVar2 = 0;
        if (uVar9 != 0) {
          for (; (uVar9 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
          }
        }
        lVar18 = ((uVar2 >> 3) - (longlong)puVar12) + (longlong)puVar16;
        goto LAB_14f36094b;
      }
LAB_14f360916:
      lVar18 = (longlong)puVar16 - (longlong)puVar12;
      if (puVar16 < param_4) {
        pcVar13 = (char *)(lVar18 + (longlong)puVar1);
        do {
          if (pcVar13[(longlong)(param_3 + (4 - (longlong)puVar1))] != *pcVar13) break;
          pcVar13 = pcVar13 + 1;
          lVar18 = lVar18 + 1;
        } while (pcVar13 + ((longlong)puVar12 - (longlong)puVar1) < param_4);
      }
LAB_14f36094b:
      uVar8 = (int)lVar18 + 4;
    }
    else {
      uVar8 = 3 - ((uVar4 & 0xffffff) != 0);
    }
    uVar4 = uVar8;
    if ((uVar5 < 8) && (uVar4 = uVar5, (int)uVar8 < (int)uVar5)) {
      uVar4 = uVar8;
    }
    uVar6 = uVar4 * 8;
    if ((int)(uVar4 * 8) < (int)uVar7) {
      uVar6 = uVar7;
    }
  }
  uVar5 = (int)uVar6 >> 3;
  if ((int)uVar5 < 4) {
    uVar7 = 0;
    uVar8 = 0;
    lVar18 = 0;
    pOVar17 = param_10;
    do {
      uVar4 = param_1->pairs[lVar18].length;
      if (((int)uVar4 < param_5) ||
         (((longlong)param_4 - (longlong)param_3 < (longlong)(int)uVar4 &&
          (uVar4 = (int)param_4 - (int)param_3, (int)uVar4 < param_5)))) break;
      uVar15 = param_1->pairs[lVar18].offset;
      if (uVar15 < param_8) {
        if (uVar15 < 8) {
          if (param_9 == eNewLZ_MinOffset_1) {
            uVar11 = uVar15;
            if ((int)uVar4 < (int)uVar15) {
              uVar11 = uVar4;
            }
            if (((param_5 <= (int)uVar11) &&
                (bVar3 = newLZHC_IsAllowedNormalMatch(uVar11,uVar15,pOVar17), bVar3)) &&
               ((int)uVar7 <= (int)uVar11)) {
              if (uVar11 == uVar7) {
                bVar3 = (int)uVar15 < (int)uVar8;
LAB_14f360a67:
                if (!bVar3) goto LAB_14f360a72;
              }
              else if ((int)uVar11 <= (int)(uVar7 + 1)) {
                bVar3 = (int)uVar15 >> 7 <= (int)uVar8;
                goto LAB_14f360a67;
              }
              uVar7 = uVar11;
              uVar8 = uVar15;
            }
          }
LAB_14f360a72:
          uVar15 = rounded_up[uVar15];
          if ((longlong)(ulonglong)uVar15 <= (longlong)param_3 - (longlong)param_7) {
            uVar11 = *(uint *)param_3 ^ *(uint *)(param_3 + -(ulonglong)uVar15);
            if (uVar11 == 0) {
              puVar12 = (ulonglong *)(param_3 + 4);
              puVar1 = (uint *)((longlong)(param_3 + -(ulonglong)uVar15) + 4);
              puVar16 = puVar12;
              if (puVar12 <= param_4 + -8) {
LAB_14f360ad0:
                uVar9 = *(ulonglong *)(((longlong)puVar1 - (longlong)puVar12) + (longlong)puVar16) ^
                        *puVar16;
                if (uVar9 == 0) goto code_r0x00014f360ad9;
                uVar2 = 0;
                if (uVar9 != 0) {
                  for (; (uVar9 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
                  }
                }
                lVar14 = ((uVar2 >> 3) - (longlong)puVar12) + (longlong)puVar16;
                goto LAB_14f360b19;
              }
LAB_14f360ae5:
              lVar14 = (longlong)puVar16 - (longlong)puVar12;
              if (puVar16 < param_4) {
                pcVar13 = (char *)(lVar14 + (longlong)puVar1);
                do {
                  if (pcVar13[(longlong)(param_3 + (4 - (longlong)puVar1))] != *pcVar13) break;
                  pcVar13 = pcVar13 + 1;
                  lVar14 = lVar14 + 1;
                } while (pcVar13 + ((longlong)puVar12 - (longlong)puVar1) < param_4);
              }
LAB_14f360b19:
              uVar4 = (int)lVar14 + 4;
              pOVar17 = param_10;
            }
            else {
              uVar4 = 3;
              if ((uVar11 & 0xffffff) != 0) {
                uVar4 = 0;
              }
            }
            if (param_5 <= (int)uVar4) goto LAB_14f360b2a;
          }
        }
        else {
LAB_14f360b2a:
          bVar3 = newLZHC_IsAllowedNormalMatch(uVar4,uVar15,pOVar17);
          if ((bVar3) && ((int)uVar7 <= (int)uVar4)) {
            if (uVar4 == uVar7) {
              bVar3 = (int)uVar15 < (int)uVar8;
LAB_14f360b68:
              if (!bVar3) goto LAB_14f360b71;
            }
            else if ((int)uVar4 <= (int)(uVar7 + 1)) {
              bVar3 = (int)uVar15 >> 7 <= (int)uVar8;
              goto LAB_14f360b68;
            }
            uVar7 = uVar4;
            uVar8 = uVar15;
          }
        }
      }
LAB_14f360b71:
      lVar18 = lVar18 + 1;
    } while (lVar18 < 4);
    if (((int)uVar5 < 2) ||
       ((((int)(uVar5 + 1) < (int)uVar7 && (((int)(uVar5 + 2) < (int)uVar7 || ((int)uVar8 < 0x400)))
         ) && (((int)(uVar5 + 3) < (int)uVar7 || ((int)uVar8 < 0x10000)))))) goto LAB_14f360bd8;
  }
  uVar8 = (uVar6 & 7) - 6;
  uVar7 = uVar5;
LAB_14f360bd8:
  mVar10.off = uVar8;
  mVar10.ml = uVar7;
  return mVar10;
code_r0x00014f36043d:
  puVar12 = puVar12 + 1;
  if (param_4 + -8 < puVar12) goto LAB_14f360446;
  goto LAB_14f360430;
code_r0x00014f36050d:
  puVar16 = puVar16 + 1;
  if (param_4 + -8 < puVar16) goto LAB_14f360516;
  goto LAB_14f360500;
code_r0x00014f3605dd:
  puVar16 = puVar16 + 1;
  if (param_4 + -8 < puVar16) goto LAB_14f3605e6;
  goto LAB_14f3605d0;
code_r0x00014f3606ad:
  puVar16 = puVar16 + 1;
  if (param_4 + -8 < puVar16) goto LAB_14f3606b6;
  goto LAB_14f3606a0;
code_r0x00014f36077d:
  puVar16 = puVar16 + 1;
  if (param_4 + -8 < puVar16) goto LAB_14f360786;
  goto LAB_14f360770;
code_r0x00014f36083f:
  puVar16 = puVar16 + 1;
  if (param_4 + -8 < puVar16) goto LAB_14f360848;
  goto LAB_14f360832;
code_r0x00014f36090d:
  puVar16 = puVar16 + 1;
  if (param_4 + -8 < puVar16) goto LAB_14f360916;
  goto LAB_14f360900;
code_r0x00014f360ad9:
  puVar16 = puVar16 + 1;
  if (param_4 + -8 < puVar16) goto LAB_14f360ae5;
  goto LAB_14f360ad0;
}

// newLZHC_histo_literals @ 14f360c00

void __cdecl
oo2::newLZHC_histo_literals
          (newlzhc_histo *param_1,uchar *param_2,long64 param_3,long64 param_4,int param_5,
          int param_6)

{
  uint *puVar1;
  byte bVar2;
  uchar uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  uchar *puVar7;
  longlong lVar8;
  
  if (param_4 != 0) {
    lVar5 = (longlong)param_5;
    param_1->total = param_1->total + (int)param_4;
    bVar2 = param_2[param_3];
    uVar3 = param_2[param_3 - lVar5];
    param_1->literals_raw[bVar2] = param_1->literals_raw[bVar2] + param_6;
    lVar6 = param_3 + 1;
    param_1->literals_sub_lam[(byte)(bVar2 - uVar3)] =
         param_1->literals_sub_lam[(byte)(bVar2 - uVar3)] + param_6;
    puVar1 = param_1->literals_sub_andF[0] + (CONCAT41((int)param_3,bVar2 - uVar3) & 0xfff);
    *puVar1 = *puVar1 + param_6;
    puVar1 = param_1->literals_o1[(param_2 + param_3)[-1] >> 4] + bVar2;
    *puVar1 = *puVar1 + param_6;
    if (1 < param_4) {
      lVar8 = param_4 + -1;
      puVar7 = param_2 + (lVar6 - lVar5);
      do {
        bVar2 = puVar7[lVar5];
        param_1->literals_raw[bVar2] = param_1->literals_raw[bVar2] + param_6;
        uVar3 = *puVar7;
        uVar4 = (undefined4)lVar6;
        lVar6 = lVar6 + 1;
        param_1->literals_sub_later[(byte)(bVar2 - uVar3)] =
             param_1->literals_sub_later[(byte)(bVar2 - uVar3)] + param_6;
        puVar1 = param_1->literals_sub_andF[0] + (CONCAT41(uVar4,bVar2 - uVar3) & 0xfff);
        *puVar1 = *puVar1 + param_6;
        puVar1 = param_1->literals_o1[puVar7[lVar5 + -1] >> 4] + bVar2;
        *puVar1 = *puVar1 + param_6;
        lVar8 = lVar8 + -1;
        puVar7 = puVar7 + 1;
      } while (lVar8 != 0);
    }
  }
  return;
}

// newLZHC_put_parse @ 14f360d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

long64 __cdecl
oo2::newLZHC_put_parse
          (newlz_encoder_scratch *param_1,float *param_2,newlzhc_histo *param_3,int *param_4,
          uchar *param_5,int param_6,uchar *param_7,uchar *param_8,long64 param_9,
          newlz_vtable *param_10,int param_11,vector_a<oo2::newlzhc_encoder_parse> *param_12,
          int param_13,newlzhc_passinfo *param_14,ENewLZ_MinOffset param_15)

{
  float fVar1;
  undefined8 uVar2;
  char *pcVar3;
  code *pcVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  uchar uVar17;
  uchar uVar18;
  rrArenaAllocator *prVar19;
  float fVar20;
  newlzhc_passinfo *_Src;
  byte bVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  byte *pbVar28;
  long64 lVar29;
  uint *puVar30;
  long64 lVar31;
  byte *pbVar32;
  byte *pbVar33;
  rrArenaAllocator *prVar34;
  uchar *puVar35;
  newlzhc_passinfo *pnVar36;
  longlong lVar37;
  uint *puVar38;
  char cVar39;
  uchar uVar40;
  int iVar41;
  int iVar42;
  uint (*pauVar43) [256];
  rrArenaAllocator *prVar44;
  longlong lVar45;
  uint (*pauVar46) [256];
  ulonglong uVar47;
  uint (*pauVar48) [256];
  longlong lVar49;
  uint (*pauVar50) [256];
  uint *puVar51;
  uchar *puVar52;
  ulonglong *puVar53;
  int iVar54;
  byte *pbVar55;
  rrArenaAllocator **pprVar56;
  ulonglong uVar57;
  longlong lVar58;
  byte *pbVar59;
  ulonglong uVar60;
  int iVar61;
  byte *pbVar62;
  rrArenaAllocator *prVar63;
  uint uVar64;
  OodleSpeedFit *pOVar65;
  newlz_vtable *pnVar66;
  uchar *puVar67;
  uint *puVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  undefined4 extraout_XMM0_Db;
  undefined8 extraout_XMM0_Qb;
  char cVar74;
  float fVar77;
  char cVar84;
  char cVar85;
  char cVar86;
  char cVar87;
  char cVar88;
  char cVar89;
  char cVar90;
  undefined1 auVar82 [16];
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  undefined1 auStackY_e28 [32];
  float local_d98;
  OodleLZ_CompressionLevel local_d94;
  uint local_d90;
  uint *local_d88;
  rrArenaAllocator *local_d80;
  byte *local_d78;
  float local_d70 [2];
  uchar *local_d68;
  byte *local_d60;
  int *local_d58;
  int local_d50;
  uchar *local_d48;
  rrArenaAllocator *local_d40;
  OodleSpeedFit *local_d38;
  float local_d30 [2];
  vector_a<oo2::newlzhc_encoder_parse> *local_d28;
  longlong local_d20;
  int local_d18 [2];
  newlzhc_passinfo *local_d10;
  float local_d08 [2];
  undefined8 local_d00;
  undefined8 local_cf8;
  uint *local_cf0;
  newlz_vtable *local_ce8;
  byte *local_ce0;
  byte *local_cd8;
  uchar *local_cd0;
  uint *local_cc8;
  newlzhc_passinfo *local_cc0;
  ulonglong local_cb8;
  uint *local_cb0;
  uchar *local_ca8;
  float *local_ca0;
  longlong local_c98;
  rrArenaAllocator *local_c90;
  byte *local_c88;
  rrArenaAllocator *local_c80;
  byte *local_c78;
  longlong local_c70;
  undefined8 local_c68;
  rrArenaAllocator *local_c60;
  uchar *local_c58;
  uchar *local_c50;
  uchar *local_c48;
  uchar *local_c38 [4];
  uchar *local_c18;
  uchar *local_c10;
  uchar *local_c08;
  uchar *local_c00;
  ulonglong local_bf8 [4];
  rrArenaAllocator *local_bd8;
  uchar *local_bd0;
  uchar *local_bc8;
  uchar *local_bc0;
  uchar *local_bb8 [4];
  uchar *local_b98;
  uchar *local_b90;
  uchar *local_b88;
  uchar *local_b80;
  long64 local_b78;
  longlong alStack_b70 [47];
  rrArenaAllocator *local_9f8;
  longlong alStack_9f0 [15];
  rrArenaAllocator *local_978;
  longlong alStack_970 [15];
  uint local_8f8 [256];
  uint local_4f8 [256];
  ulonglong local_f8;
  undefined2 uVar75;
  undefined3 uVar76;
  undefined4 uVar78;
  undefined5 uVar79;
  undefined6 uVar80;
  undefined7 uVar81;
  undefined1 auVar83 [16];
  
  local_c68 = 0xfffffffffffffffe;
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_e28;
  local_ce0 = param_5;
  local_ca8 = param_7;
  local_d68 = param_8;
  local_ce8 = param_10;
  local_d28 = param_12;
  local_d10 = param_14;
  fVar1 = param_10->lambda;
  local_d90 = param_10->entropy_flags;
  local_d94 = param_10->level;
  local_d38 = param_10->speedfit;
  *param_2 = 1.0737418e+09;
  local_d78 = (byte *)(ulonglong)param_3->total;
  uVar2 = *(undefined8 *)&param_12->field_0x10;
  prVar34 = param_1->arena;
  local_cd0 = (uchar *)(longlong)((param_6 >> 4) + 0x100 + param_6);
  local_d58 = param_4;
  local_d40 = prVar34;
  local_d00 = uVar2;
  local_cc0 = (newlzhc_passinfo *)param_3;
  local_ca0 = param_2;
  newlz_scratchblock::extend(&param_1->literals_space,(long64)local_cd0,prVar34);
  local_d80 = (param_1->literals_space).m_ptr;
  local_d48 = param_7;
  local_d20 = (longlong)param_13;
  lVar37 = 0;
  if (0 < local_d20) {
    do {
      *param_7 = param_5[lVar37];
      param_7 = param_7 + 1;
      lVar37 = lVar37 + 1;
      local_d48 = param_7;
    } while (lVar37 < local_d20);
  }
  fVar73 = __real_4e800000;
  local_d08[0] = 1.0737418e+09;
  local_d30[0] = 1.0737418e+09;
  local_d50 = 0;
  iVar41 = param_6 / 3 + (param_6 >> 0x1f) +
           (int)(((longlong)param_6 / 3 + ((longlong)param_6 >> 0x3f) & 0xffffffffU) >> 0x1f);
  iVar42 = (int)uVar2;
  iVar22 = iVar42;
  if (iVar41 <= iVar42) {
    iVar22 = iVar41;
  }
  lVar37 = (longlong)iVar22;
  iVar22 = iVar42 * 2;
  if (param_6 / 5 <= iVar42 * 2) {
    iVar22 = param_6 / 5;
  }
  lVar49 = (longlong)iVar22;
  lVar58 = (lVar49 + lVar37) * 5 + 0x10;
  local_c98 = lVar58;
  local_c80 = prVar34;
  local_c70 = lVar58;
  if (prVar34 == (rrArenaAllocator *)0x0) {
    pbVar28 = (*g_fp_OodleCore_Plugin_MallocAligned)(lVar58,0x10);
    if (pbVar28 == (byte *)0x0) {
      local_cf8 = pbVar28;
                    /* WARNING: Subroutine does not return */
      Oodle_Core_Malloc_Failed(lVar58);
    }
  }
  else {
    pbVar28 = rrArenaAllocator::Alloc(prVar34,lVar58,0);
  }
  local_cf8 = pbVar28;
  local_c78 = pbVar28;
  if ((pbVar28 == (byte *)0x0) &&
     (iVar22 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\rrarenaallocator.h",0x19a,
                                  "oo2::rrScopeArenaAlloc::rrScopeArenaAlloc","m_ptr != NULL"),
     iVar22 != 0)) {
    pcVar4 = (code *)swi(3);
    lVar29 = (*pcVar4)();
    return lVar29;
  }
  lVar58 = 0;
  local_d18[0] = 0;
  local_cf0 = (uint *)(pbVar28 + lVar37);
  local_d60 = (byte *)((longlong)local_cf0 + lVar49);
  local_cc8 = (uint *)((ulonglong)(local_d60 + 3) & 0xfffffffffffffffc);
  local_cb0 = local_cc8 + lVar37;
  local_d88 = local_cb0 + lVar49;
  lVar37 = (longlong)iVar42;
  puVar38 = local_cc8;
  puVar30 = local_d88;
  puVar51 = local_cf0;
  pbVar28 = local_d60;
  pbVar62 = local_cf8;
  puVar68 = local_cb0;
  if (0 < iVar42) {
    do {
      lVar49 = *(longlong *)param_12;
      uVar23 = *(uint *)(lVar58 + 0xc + lVar49);
      if (0 < (int)uVar23) {
        *puVar38 = uVar23;
        if (param_15 != eNewLZ_MinOffset_1) {
          if ((int)uVar23 < 0x7fff08) {
            uVar23 = uVar23 + 0xf8;
            iVar22 = 0x1f;
            if (uVar23 != 0) {
              for (; uVar23 >> iVar22 == 0; iVar22 = iVar22 + -1) {
              }
            }
            bVar21 = ((char)iVar22 + -8) * '\x10' | (byte)uVar23 & 0xf;
          }
          else {
            iVar22 = 0x1f;
            if (uVar23 - 0x7eff00 != 0) {
              for (; uVar23 - 0x7eff00 >> iVar22 == 0; iVar22 = iVar22 + -1) {
              }
            }
            bVar21 = (byte)iVar22 | 0xf0;
          }
          *pbVar62 = bVar21;
        }
        local_d50 = local_d50 + 1;
        puVar38 = puVar38 + 1;
        pbVar62 = pbVar62 + 1;
      }
      iVar22 = *(int *)(lVar58 + 4 + lVar49);
      iVar41 = *(int *)(lVar58 + 8 + lVar49);
      iVar54 = iVar41 + -9;
      iVar42 = iVar22 + -3;
      if (-1 < iVar42) {
        bVar21 = 0xff;
        if (iVar42 < 0xff) {
          bVar21 = (byte)iVar42;
        }
        *(byte *)puVar51 = bVar21;
        puVar51 = (uint *)((longlong)puVar51 + 1);
        if (0xfe < iVar42) {
          *puVar68 = iVar22 - 0x102;
          puVar68 = puVar68 + 1;
        }
      }
      if (-1 < iVar54) {
        pbVar28 = pbVar28 + -1;
        bVar21 = 0xff;
        if (iVar54 < 0xff) {
          bVar21 = (byte)iVar54;
        }
        *pbVar28 = bVar21;
        if (0xfe < iVar54) {
          puVar30 = puVar30 + -1;
          *puVar30 = iVar41 - 0x108;
        }
      }
      lVar58 = lVar58 + 0x10;
      lVar37 = lVar37 + -1;
      param_5 = local_ce0;
    } while (lVar37 != 0);
  }
  lVar58 = (longlong)puVar51 - (longlong)local_cf0;
  local_d60 = local_d60 + -(longlong)pbVar28;
  memmove(puVar51,pbVar28,(size_t)local_d60);
  local_cd8 = local_d60 + lVar58;
  lVar37 = (longlong)puVar68 - (longlong)local_cb0;
  local_d88 = (uint *)((longlong)local_d88 - (longlong)puVar30 >> 2);
  memmove(puVar68,puVar30,(longlong)local_d88 * 4);
  puVar68 = local_cf0;
  pnVar36 = local_d10;
  local_ce0 = (byte *)((longlong)local_d88 + (lVar37 >> 2));
  puVar30 = local_d10->offset_histo1;
  puVar38 = local_d10->offset_histo2;
  if (local_d10 == (newlzhc_passinfo *)0x0) {
    puVar38 = (uint *)0x0;
    puVar30 = (uint *)0x0;
  }
  else {
    CountHistoArrayU8((uchar *)local_cf0,lVar58,local_d10->excess_lrl_histo,0x100,false);
    CountHistoArrayU8((uchar *)puVar51,(long64)local_d60,pnVar36->excess_ml_histo,0x100,false);
  }
  prVar34 = local_d40;
  puVar52 = local_d48;
  fVar20 = __real_53800000;
  lVar29 = newLZ_put_offset_44_or_alt_arrays
                     (local_d48,local_d68,local_cf8,local_cc8,local_d50,local_d90,fVar1,local_d38,
                      local_d08,__real_53800000,param_15,1,local_d18,local_d40,local_d94,puVar30,
                      puVar38);
  pOVar65 = local_d38;
  if (lVar29 < 0) {
    local_d78 = (byte *)0xffffffffffffffff;
    puVar38 = (uint *)(byte *)0xffffffffffffffff;
    fVar73 = local_d98;
    pbVar28 = local_d78;
    prVar63 = local_c60;
    goto LAB_14f362750;
  }
  if (pnVar36 != (newlzhc_passinfo *)0x0) {
    pnVar36->offset_alt_modulo = local_d18[0];
  }
  lVar31 = newLZ_put_array_split2_hinted
                     (puVar52 + lVar29,local_d68,(uchar *)puVar68,(long64)local_cd8,local_d90,fVar1,
                      local_d38,local_d30,prVar34,local_d94,(uint *)0x0,lVar58);
  pbVar28 = local_cd8;
  if (lVar31 < 0) {
    prVar34 = local_d40;
    puVar38 = (uint *)(longlong)param_6;
    fVar73 = local_d98;
    pbVar28 = (byte *)(longlong)param_6;
    prVar63 = local_c60;
    goto LAB_14f362750;
  }
  puVar52 = puVar52 + lVar29 + lVar31;
  local_d48 = puVar52;
  fVar69 = (*pOVar65->get_excesses)((long64)local_cd8,(long64)local_ce0);
  pbVar62 = local_d78;
  local_d30[0] = local_d30[0] + fVar69 * fVar1;
  pbVar59 = (byte *)(longlong)(int)local_d00;
  pbVar55 = pbVar59 + (longlong)(pbVar28 + 8) * 4 + (longlong)(local_d50 * 4) + (longlong)local_d78;
  pbVar33 = (byte *)(longlong)local_d50;
  if ((longlong)local_d50 <= (longlong)pbVar28) {
    pbVar33 = pbVar28;
  }
  pbVar32 = local_d78;
  if ((longlong)local_d78 <= (longlong)pbVar59) {
    pbVar32 = pbVar59;
  }
  if (((longlong)pbVar33 <= (longlong)pbVar32) &&
     (pbVar33 = pbVar59, (longlong)pbVar59 < (longlong)local_d78)) {
    pbVar33 = local_d78;
  }
  puVar38 = (uint *)(longlong)param_6;
  pbVar59 = (byte *)((longlong)puVar38 + (longlong)pbVar55);
  if ((longlong)puVar38 + (longlong)pbVar55 <
      (longlong)
      (pbVar55 + (longlong)(local_d50 * 2) + 0xc000 + (longlong)pbVar28 + (longlong)pbVar33)) {
    pbVar59 = pbVar55 + (longlong)(local_d50 * 2) + 0xc000 + (longlong)pbVar28 + (longlong)pbVar33;
  }
  local_d88 = puVar38;
  lVar29 = OodleLZ_Compressor_ScratchMemSize(local_ce8->compressor,(long64)puVar38);
  _Src = local_cc0;
  pnVar36 = local_d10;
  if (lVar29 < (longlong)(pbVar59 + 0x1000)) {
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
      (*g_fp_OodleCore_Plugin_Printf)
                (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc.cpp",0x6bc,
                 "OODLE ERROR : newLZ chunk needs too much scratch for decoder!\n");
    }
    ooLogErrorPost();
    prVar34 = local_d40;
    fVar73 = local_d98;
    pbVar28 = (byte *)puVar38;
    prVar63 = local_c60;
    goto LAB_14f362750;
  }
  local_d98 = 1.0737418e+09;
  fVar69 = (float)(longlong)pbVar62 + __real_40400000;
  local_d60 = (byte *)0xffffffffffffffff;
  if (pbVar62 < (byte *)0x20) {
    *local_d58 = 1;
    if (pbVar62 != (byte *)0x0) {
      newLZHC_parse_put_literals<1>
                (param_5,(long64)puVar38,local_d20,(uchar *)local_d80,(long64)pbVar62,param_12,
                 param_11);
    }
    prVar19 = local_d80;
    pbVar33 = (byte *)newLZ_put_array(puVar52,local_d68,(uchar *)local_d80,(long64)pbVar62,local_d90
                                      ,fVar1,local_d38,&local_d98,fVar20,prVar34,local_d94,
                                      (uint *)0x0);
    prVar44 = prVar34;
    fVar70 = fVar69;
    fVar73 = local_d98;
    prVar34 = local_d40;
    prVar63 = local_c60;
  }
  else {
    puVar30 = (local_cc0->literals).literals_sub_lam;
    lVar58 = (longlong)&local_cf0 - (longlong)local_cc0;
    lVar37 = 0x40;
    puVar38 = puVar30;
    local_ce8 = (newlz_vtable *)puVar30;
    do {
      *(uint *)((longlong)&local_d00 + (4 - (longlong)_Src) + (longlong)puVar38) =
           puVar38[0x100] + *puVar38;
      *(uint *)(((longlong)&local_cf8 - (longlong)_Src) + (longlong)puVar38) =
           puVar38[0x101] + puVar38[1];
      *(uint *)((longlong)&local_cf8 + (4 - (longlong)_Src) + (longlong)puVar38) =
           puVar38[0x102] + puVar38[2];
      *(uint *)((longlong)puVar38 + lVar58) = puVar38[0x103] + puVar38[3];
      puVar38 = puVar38 + 4;
      lVar37 = lVar37 + -1;
    } while (lVar37 != 0);
    if (local_d10 != (newlzhc_passinfo *)0x0) {
      if (_Src != local_d10) {
        memcpy(local_d10,_Src,0x8c04);
      }
      puVar38 = local_8f8;
      lVar37 = 8;
      puVar51 = pnVar36->literals_sub;
      do {
        uVar2 = *(undefined8 *)(puVar38 + 2);
        *(undefined8 *)puVar51 = *(undefined8 *)puVar38;
        *(undefined8 *)(puVar51 + 2) = uVar2;
        uVar2 = *(undefined8 *)(puVar38 + 6);
        *(undefined8 *)(puVar51 + 4) = *(undefined8 *)(puVar38 + 4);
        *(undefined8 *)(puVar51 + 6) = uVar2;
        uVar2 = *(undefined8 *)(puVar38 + 10);
        *(undefined8 *)(puVar51 + 8) = *(undefined8 *)(puVar38 + 8);
        *(undefined8 *)(puVar51 + 10) = uVar2;
        uVar2 = *(undefined8 *)(puVar38 + 0xe);
        *(undefined8 *)(puVar51 + 0xc) = *(undefined8 *)(puVar38 + 0xc);
        *(undefined8 *)(puVar51 + 0xe) = uVar2;
        uVar2 = *(undefined8 *)(puVar38 + 0x12);
        *(undefined8 *)(puVar51 + 0x10) = *(undefined8 *)(puVar38 + 0x10);
        *(undefined8 *)(puVar51 + 0x12) = uVar2;
        uVar2 = *(undefined8 *)(puVar38 + 0x16);
        *(undefined8 *)(puVar51 + 0x14) = *(undefined8 *)(puVar38 + 0x14);
        *(undefined8 *)(puVar51 + 0x16) = uVar2;
        uVar2 = *(undefined8 *)(puVar38 + 0x1a);
        *(undefined8 *)(puVar51 + 0x18) = *(undefined8 *)(puVar38 + 0x18);
        *(undefined8 *)(puVar51 + 0x1a) = uVar2;
        *(undefined1 (*) [16])(puVar51 + 0x1c) = *(undefined1 (*) [16])(puVar38 + 0x1c);
        puVar38 = puVar38 + 0x20;
        lVar37 = lVar37 + -1;
        puVar51 = puVar51 + 0x20;
      } while (lVar37 != 0);
    }
    puVar38 = (_Src->literals).literals_raw;
    local_cf0 = puVar38;
    uVar23 = rrSumOfHistogram(puVar38,0x100);
    uVar23 = newlz_array_estimate_complen_bits(puVar38,0x100,uVar23);
    uVar24 = rrSumOfHistogram(local_8f8,0x100);
    uVar24 = newlz_array_estimate_complen_bits(local_8f8,0x100,uVar24);
    fVar70 = (*local_d38->huff3)(0,0x80,0x14,__real_40c00000);
    fVar70 = fVar70 * fVar1;
    fVar95 = (float)(uVar23 + 7 >> 3) + fVar70;
    uVar23 = rrSumOfHistogram(puVar30,0x100);
    uVar23 = newlz_array_estimate_complen_bits(puVar30,0x100,uVar23);
    uVar25 = rrSumOfHistogram((_Src->literals).literals_sub_later,0x100);
    uVar25 = newlz_array_estimate_complen_bits((_Src->literals).literals_sub_later,0x100,uVar25);
    uVar64 = 0;
    pauVar48 = (_Src->literals).literals_sub_andF;
    lVar37 = 4;
    pauVar50 = pauVar48;
    do {
      lVar58 = 3;
      pauVar43 = pauVar50;
      pauVar46 = pauVar50;
      do {
        pauVar46 = pauVar46 + 4;
        simd_add_u32_256(local_4f8,*pauVar43,*pauVar46);
        pauVar43 = &local_4f8;
        lVar58 = lVar58 + -1;
      } while (lVar58 != 0);
      uVar26 = rrSumOfHistogram(local_4f8,0x100);
      uVar26 = newlz_array_estimate_complen_bits(local_4f8,0x100,uVar26);
      uVar64 = uVar64 + (uVar26 + 7 >> 3);
      pauVar50 = pauVar50 + 1;
      lVar37 = lVar37 + -1;
    } while (lVar37 != 0);
    fVar92 = fVar70 * __real_40800000;
    uVar26 = 0;
    lVar37 = 0x10;
    do {
      uVar27 = rrSumOfHistogram(*pauVar48,0x100);
      uVar27 = newlz_array_estimate_complen_bits(*pauVar48,0x100,uVar27);
      pnVar36 = local_cc0;
      uVar26 = uVar26 + (uVar27 + 7 >> 3);
      pauVar48 = pauVar48 + 1;
      lVar37 = lVar37 + -1;
    } while (lVar37 != 0);
    fVar93 = fVar70 * __real_41800000;
    uVar57 = 0;
    pauVar48 = (local_cc0->literals).literals_o1;
    lVar37 = 0x10;
    uVar47 = uVar57;
    do {
      uVar27 = rrSumOfHistogram(*pauVar48,0x100);
      uVar27 = newlz_array_estimate_complen_bits(*pauVar48,0x100,uVar27);
      pOVar65 = local_d38;
      pbVar28 = local_d78;
      uVar47 = (ulonglong)((int)uVar47 + (uVar27 + 7 >> 3));
      pauVar48 = pauVar48 + 1;
      lVar37 = lVar37 + -1;
    } while (lVar37 != 0);
    fVar71 = (*local_d38->parse_Leviathan_literals)((long64)local_d78,0);
    fVar94 = (float)(uVar24 + 7 >> 3) + fVar70 + fVar71 * fVar1;
    fVar71 = (*pOVar65->parse_Leviathan_literals)((long64)pbVar28,2);
    fVar71 = fVar70 + fVar70 + (float)((uVar25 + 7 >> 3) + (uVar23 + 7 >> 3)) + fVar71 * fVar1;
    fVar70 = (*pOVar65->parse_Leviathan_literals)((long64)pbVar28,3);
    fVar70 = fVar92 + (float)uVar64 + fVar70 * fVar1;
    fVar92 = (*pOVar65->parse_Leviathan_literals)((long64)pbVar28,5);
    fVar92 = (float)uVar26 + fVar93 + fVar92 * fVar1;
    fVar72 = (*pOVar65->parse_Leviathan_literals)((long64)pbVar28,4);
    fVar72 = fVar72 * fVar1 + (float)uVar47 + fVar93;
    fVar93 = fVar95;
    if (fVar94 <= fVar95) {
      fVar93 = fVar94;
    }
    auVar82._4_4_ = extraout_XMM0_Db;
    auVar82._0_4_ = fVar71;
    auVar82._8_4_ = (int)extraout_XMM0_Qb;
    auVar82._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
    if (fVar70 <= fVar71) {
      auVar82._0_4_ = fVar70;
    }
    fVar91 = fVar92;
    if (fVar72 <= fVar92) {
      fVar91 = fVar72;
    }
    fVar77 = auVar82._0_4_;
    if (fVar91 <= auVar82._0_4_) {
      fVar77 = fVar91;
    }
    if (param_15 == eNewLZ_MinOffset_1) {
      fVar70 = fVar73;
      fVar92 = fVar73;
      fVar93 = fVar95;
      fVar71 = fVar73;
      fVar94 = fVar73;
      fVar77 = fVar72;
    }
    if (fVar77 < fVar69) {
      if (fVar77 == fVar72) {
        puVar53 = (ulonglong *)(alStack_b70 + 0xf);
        lVar37 = 0x10;
        uVar47 = uVar57;
        do {
          uVar23 = rrSumOfHistogram((pnVar36->literals).literals_o1[uVar47],0x100);
          *puVar53 = (ulonglong)uVar23;
          uVar47 = uVar47 + 1;
          puVar53 = puVar53 + 1;
          lVar37 = lVar37 + -1;
        } while (lVar37 != 0);
        *local_d58 = 4;
        prVar34 = local_d80;
        uVar47 = uVar57;
        do {
          *(rrArenaAllocator **)((longlong)&local_9f8 + uVar47) = prVar34;
          *(rrArenaAllocator **)((longlong)&local_b78 + uVar47) = prVar34;
          lVar37 = (longlong)&prVar34->m_base + *(longlong *)((longlong)alStack_b70 + uVar47 + 0x78)
          ;
          *(longlong *)((longlong)alStack_9f0 + uVar47) = lVar37;
          *(longlong *)((longlong)alStack_b70 + uVar47) = lVar37;
          lVar37 = lVar37 + *(longlong *)((longlong)alStack_b70 + uVar47 + 0x80);
          *(longlong *)((longlong)alStack_9f0 + uVar47 + 8) = lVar37;
          *(longlong *)((longlong)alStack_b70 + uVar47 + 8) = lVar37;
          lVar37 = lVar37 + *(longlong *)((longlong)alStack_b70 + uVar47 + 0x88);
          *(longlong *)((longlong)alStack_9f0 + uVar47 + 0x10) = lVar37;
          *(longlong *)((longlong)alStack_b70 + uVar47 + 0x10) = lVar37;
          prVar34 = (rrArenaAllocator *)
                    (lVar37 + *(longlong *)((longlong)alStack_b70 + uVar47 + 0x90));
          uVar47 = uVar47 + 0x20;
        } while ((longlong)uVar47 < 0x80);
        lVar37 = local_d20;
        uVar47 = uVar57;
        if (0 < *(int *)&local_d28->field_0x10) {
          do {
            lVar58 = *(longlong *)local_d28;
            iVar22 = *(int *)(uVar47 + 4 + lVar58);
            if (iVar22 != 0) {
              puVar52 = param_5 + lVar37;
              iVar41 = iVar22;
              do {
                bVar21 = puVar52[-1];
                puVar35 = (uchar *)(&local_b78)[bVar21 >> 4];
                *puVar35 = *puVar52;
                (&local_b78)[bVar21 >> 4] = (long64)(puVar35 + 1);
                puVar52 = puVar52 + 1;
                iVar41 = iVar41 + -1;
              } while (iVar41 != 0);
            }
            lVar37 = lVar37 + (*(int *)(uVar47 + 8 + lVar58) + iVar22);
            uVar23 = (int)uVar57 + 1;
            uVar57 = (ulonglong)uVar23;
            uVar47 = uVar47 + 0x10;
          } while ((int)uVar23 < *(int *)&local_d28->field_0x10);
        }
        uVar47 = (longlong)local_d88 - lVar37;
        if ((0 < (longlong)uVar47) && ((int)uVar47 != 0)) {
          puVar52 = param_5 + lVar37;
          do {
            bVar21 = puVar52[-1];
            puVar35 = (uchar *)(&local_b78)[bVar21 >> 4];
            *puVar35 = *puVar52;
            (&local_b78)[bVar21 >> 4] = (long64)(puVar35 + 1);
            puVar52 = puVar52 + 1;
            uVar23 = (int)uVar47 - 1;
            uVar47 = (ulonglong)uVar23;
          } while (uVar23 != 0);
        }
        puVar53 = (ulonglong *)(alStack_b70 + 0xf);
        pprVar56 = &local_9f8;
LAB_14f361a5c:
        lVar29 = 0x10;
LAB_14f361a91:
        local_d60 = (byte *)newLZ_put_multiarray_indexed
                                      (local_d48,local_d68,(uchar **)pprVar56,(long64 *)puVar53,
                                       lVar29,local_d90,fVar1,pOVar65,&local_d98,local_d40,local_d94
                                      );
        pbVar28 = local_d78;
      }
      else {
        iVar22 = (int)param_5;
        uVar47 = uVar57;
        if (fVar77 == fVar70) {
          do {
            uVar23 = 0;
            pauVar48 = (pnVar36->literals).literals_sub_andF + uVar57;
            lVar37 = 4;
            do {
              uVar24 = rrSumOfHistogram(*pauVar48,0x100);
              uVar23 = uVar23 + uVar24;
              pauVar48 = pauVar48 + 4;
              lVar37 = lVar37 + -1;
            } while (lVar37 != 0);
            local_bf8[uVar47] = (ulonglong)uVar23;
            uVar57 = (ulonglong)((int)uVar57 + 1);
            uVar47 = uVar47 + 1;
          } while ((longlong)uVar47 < 4);
          *local_d58 = 3;
          local_bd8 = local_d80;
          local_c60 = local_d80;
          local_bd0 = (uchar *)((longlong)&local_d80->m_base + local_bf8[0]);
          local_c58 = local_bd0;
          local_bc8 = local_bd0 + local_bf8[1];
          local_c50 = local_bc8;
          local_bc0 = local_bc8 + local_bf8[2];
          local_c48 = local_bc8 + local_bf8[2];
          iVar41 = 0;
          lVar37 = local_d20;
          if (0 < *(int *)&local_d28->field_0x10) {
            lVar58 = 0;
            do {
              lVar49 = *(longlong *)local_d28;
              iVar42 = *(int *)(lVar58 + 4 + lVar49);
              if (iVar42 != 0) {
                iVar54 = *(int *)(lVar58 + lVar49);
                puVar52 = param_5 + lVar37;
                iVar61 = iVar42;
                do {
                  uVar23 = (int)puVar52 - iVar22 & 3;
                  prVar34 = (&local_c60)[uVar23];
                  *(uchar *)&prVar34->m_base = *puVar52 - puVar52[-(longlong)iVar54];
                  (&local_c60)[uVar23] = (rrArenaAllocator *)((longlong)&prVar34->m_base + 1);
                  puVar52 = puVar52 + 1;
                  iVar61 = iVar61 + -1;
                } while (iVar61 != 0);
              }
              lVar37 = lVar37 + (*(int *)(lVar58 + 8 + lVar49) + iVar42);
              iVar41 = iVar41 + 1;
              lVar58 = lVar58 + 0x10;
            } while (iVar41 < *(int *)&local_d28->field_0x10);
          }
          uVar47 = (longlong)local_d88 - lVar37;
          if ((0 < (longlong)uVar47) && ((int)uVar47 != 0)) {
            puVar52 = param_5 + lVar37;
            do {
              uVar23 = (int)puVar52 - iVar22 & 3;
              prVar34 = (&local_c60)[uVar23];
              *(uchar *)&prVar34->m_base = *puVar52 - puVar52[-(longlong)param_11];
              (&local_c60)[uVar23] = (rrArenaAllocator *)((longlong)&prVar34->m_base + 1);
              puVar52 = puVar52 + 1;
              uVar23 = (int)uVar47 - 1;
              uVar47 = (ulonglong)uVar23;
            } while (uVar23 != 0);
          }
          lVar29 = 4;
          puVar53 = local_bf8;
          pprVar56 = &local_bd8;
          pOVar65 = local_d38;
          goto LAB_14f361a91;
        }
        if (fVar77 == fVar92) {
          puVar53 = (ulonglong *)(alStack_b70 + 0x1f);
          lVar37 = 0x10;
          do {
            uVar23 = rrSumOfHistogram((pnVar36->literals).literals_sub_andF[uVar47],0x100);
            *puVar53 = (ulonglong)uVar23;
            uVar47 = uVar47 + 1;
            puVar53 = puVar53 + 1;
            lVar37 = lVar37 + -1;
          } while (lVar37 != 0);
          *local_d58 = 5;
          prVar34 = local_d80;
          do {
            *(rrArenaAllocator **)((longlong)alStack_970 + (uVar57 - 8)) = prVar34;
            *(rrArenaAllocator **)((longlong)&local_b78 + uVar57) = prVar34;
            lVar37 = (longlong)&prVar34->m_base +
                     *(longlong *)((longlong)alStack_b70 + uVar57 + 0xf8);
            *(longlong *)((longlong)alStack_970 + uVar57) = lVar37;
            *(longlong *)((longlong)alStack_b70 + uVar57) = lVar37;
            lVar37 = lVar37 + *(longlong *)((longlong)alStack_b70 + uVar57 + 0x100);
            *(longlong *)((longlong)alStack_970 + uVar57 + 8) = lVar37;
            *(longlong *)((longlong)alStack_b70 + uVar57 + 8) = lVar37;
            lVar37 = lVar37 + *(longlong *)((longlong)alStack_b70 + uVar57 + 0x108);
            *(longlong *)((longlong)alStack_970 + uVar57 + 0x10) = lVar37;
            *(longlong *)((longlong)alStack_b70 + uVar57 + 0x10) = lVar37;
            prVar34 = (rrArenaAllocator *)
                      (lVar37 + *(longlong *)((longlong)alStack_b70 + uVar57 + 0x110));
            uVar57 = uVar57 + 0x20;
          } while ((longlong)uVar57 < 0x80);
          iVar41 = 0;
          lVar37 = local_d20;
          if (0 < *(int *)&local_d28->field_0x10) {
            lVar58 = 0;
            do {
              lVar49 = *(longlong *)local_d28;
              iVar42 = *(int *)(lVar58 + 4 + lVar49);
              if (iVar42 != 0) {
                iVar54 = *(int *)(lVar58 + lVar49);
                puVar52 = param_5 + lVar37;
                iVar61 = iVar42;
                do {
                  uVar23 = (int)puVar52 - iVar22 & 0xf;
                  pcVar3 = (char *)(&local_b78)[uVar23];
                  *pcVar3 = *puVar52 - puVar52[-(longlong)iVar54];
                  (&local_b78)[uVar23] = (long64)(pcVar3 + 1);
                  puVar52 = puVar52 + 1;
                  iVar61 = iVar61 + -1;
                } while (iVar61 != 0);
              }
              lVar37 = lVar37 + (*(int *)(lVar58 + 8 + lVar49) + iVar42);
              iVar41 = iVar41 + 1;
              lVar58 = lVar58 + 0x10;
            } while (iVar41 < *(int *)&local_d28->field_0x10);
          }
          uVar47 = (longlong)local_d88 - lVar37;
          if ((0 < (longlong)uVar47) && ((int)uVar47 != 0)) {
            puVar52 = param_5 + lVar37;
            do {
              uVar23 = (int)puVar52 - iVar22 & 0xf;
              pcVar3 = (char *)(&local_b78)[uVar23];
              *pcVar3 = *puVar52 - puVar52[-(longlong)param_11];
              (&local_b78)[uVar23] = (long64)(pcVar3 + 1);
              puVar52 = puVar52 + 1;
              uVar23 = (int)uVar47 - 1;
              uVar47 = (ulonglong)uVar23;
            } while (uVar23 != 0);
          }
          puVar53 = (ulonglong *)(alStack_b70 + 0x1f);
          pprVar56 = &local_978;
          pOVar65 = local_d38;
          goto LAB_14f361a5c;
        }
        if (fVar77 == fVar71) {
          uVar23 = rrSumOfHistogram(&local_ce8->compressor,0x100);
          local_cb8 = (ulonglong)uVar23;
          *local_d58 = 2;
          local_cc0 = (newlzhc_passinfo *)(pbVar28 + -local_cb8);
          local_c90 = local_d80;
          local_c88 = (byte *)((longlong)&local_d80->m_base + (longlong)&local_cc0->literals);
          prVar34 = local_d80;
          pbVar62 = local_c88;
          lVar37 = local_d20;
          if (0 < *(int *)&local_d28->field_0x10) {
            lVar58 = 0;
            do {
              lVar49 = *(longlong *)local_d28;
              iVar22 = *(int *)(lVar58 + 4 + lVar49);
              if (iVar22 != 0) {
                iVar42 = *(int *)(lVar58 + lVar49);
                *pbVar62 = param_5[lVar37] - param_5[lVar37 - iVar42];
                pbVar62 = pbVar62 + 1;
                iVar41 = iVar22 + -1;
                if (iVar41 != 0) {
                  puVar52 = param_5 + lVar37 + 1;
                  do {
                    *(uchar *)&prVar34->m_base = *puVar52 - puVar52[-(longlong)iVar42];
                    prVar34 = (rrArenaAllocator *)((longlong)&prVar34->m_base + 1);
                    puVar52 = puVar52 + 1;
                    iVar41 = iVar41 + -1;
                  } while (iVar41 != 0);
                }
              }
              lVar37 = lVar37 + (*(int *)(lVar58 + 8 + lVar49) + iVar22);
              uVar23 = (int)uVar57 + 1;
              uVar57 = (ulonglong)uVar23;
              lVar58 = lVar58 + 0x10;
              pbVar28 = local_d78;
            } while ((int)uVar23 < *(int *)&local_d28->field_0x10);
          }
          if (0 < (longlong)local_d88 - lVar37) {
            *pbVar62 = param_5[lVar37] - param_5[lVar37 - param_11];
            iVar22 = (int)((longlong)local_d88 - lVar37) + -1;
            if (iVar22 != 0) {
              puVar52 = param_5 + lVar37 + 1;
              do {
                *(uchar *)&prVar34->m_base = *puVar52 - puVar52[-(longlong)param_11];
                puVar52 = puVar52 + 1;
                prVar34 = (rrArenaAllocator *)((longlong)&prVar34->m_base + 1);
                iVar22 = iVar22 + -1;
              } while (iVar22 != 0);
            }
          }
          local_d60 = (byte *)newLZ_put_multiarray_indexed
                                        (local_d48,local_d68,(uchar **)&local_c90,
                                         (long64 *)&local_cc0,2,local_d90,fVar1,pOVar65,&local_d98,
                                         local_d40,local_d94);
        }
      }
      fVar73 = (*pOVar65->parse_Leviathan_literals)((long64)pbVar28,*local_d58);
      local_d98 = local_d98 + fVar73 * fVar1;
    }
    param_12 = local_d28;
    pOVar65 = local_d38;
    pbVar62 = local_d78;
    prVar34 = local_d80;
    puVar38 = local_d88;
    if (fVar93 == fVar94) {
      iVar22 = 0;
      prVar63 = local_d80;
      lVar37 = local_d20;
      if (0 < *(int *)&local_d28->field_0x10) {
        lVar58 = 0;
        do {
          lVar49 = *(longlong *)local_d28;
          iVar41 = *(int *)(lVar58 + 4 + lVar49);
          uVar47 = (ulonglong)iVar41;
          if (iVar41 != 0) {
            puVar52 = param_5 + lVar37;
            iVar42 = *(int *)(lVar58 + lVar49);
            prVar44 = prVar63;
            uVar57 = uVar47;
            if (0xf < (longlong)uVar47) {
              uVar60 = uVar47 >> 4;
              uVar57 = uVar47 + uVar60 * -0x10;
              do {
                auVar82 = *(undefined1 (*) [16])(puVar52 + -(longlong)iVar42);
                cVar74 = *puVar52 - auVar82[0];
                cVar84 = puVar52[1] - auVar82[1];
                uVar75 = CONCAT11(cVar84,cVar74);
                cVar85 = puVar52[2] - auVar82[2];
                uVar76 = CONCAT12(cVar85,uVar75);
                cVar86 = puVar52[3] - auVar82[3];
                uVar78 = CONCAT13(cVar86,uVar76);
                cVar87 = puVar52[4] - auVar82[4];
                uVar79 = CONCAT14(cVar87,uVar78);
                cVar88 = puVar52[5] - auVar82[5];
                uVar80 = CONCAT15(cVar88,uVar79);
                cVar89 = puVar52[6] - auVar82[6];
                uVar81 = CONCAT16(cVar89,uVar80);
                cVar90 = puVar52[7] - auVar82[7];
                auVar83._0_8_ = CONCAT17(cVar90,uVar81);
                auVar83[8] = puVar52[8] - auVar82[8];
                auVar83[9] = puVar52[9] - auVar82[9];
                auVar83[10] = puVar52[10] - auVar82[10];
                auVar83[0xb] = puVar52[0xb] - auVar82[0xb];
                auVar83[0xc] = puVar52[0xc] - auVar82[0xc];
                auVar83[0xd] = puVar52[0xd] - auVar82[0xd];
                auVar83[0xe] = puVar52[0xe] - auVar82[0xe];
                auVar83[0xf] = puVar52[0xf] - auVar82[0xf];
                prVar44->m_base = auVar83._0_8_;
                prVar44->m_cur = auVar83._8_8_;
                puVar52 = puVar52 + 0x10;
                prVar44 = (rrArenaAllocator *)&prVar44->m_cur_max;
                uVar60 = uVar60 - 1;
              } while (uVar60 != 0);
            }
            if (uVar57 != 0) {
              lVar45 = (longlong)prVar44 - (longlong)puVar52;
              do {
                puVar52[lVar45] = *puVar52 - puVar52[-(longlong)iVar42];
                puVar52 = puVar52 + 1;
                uVar57 = uVar57 - 1;
              } while (uVar57 != 0);
            }
            prVar63 = (rrArenaAllocator *)((longlong)&prVar63->m_base + uVar47);
          }
          lVar37 = lVar37 + (*(int *)(lVar58 + 8 + lVar49) + iVar41);
          iVar22 = iVar22 + 1;
          lVar58 = lVar58 + 0x10;
        } while (iVar22 < *(int *)&local_d28->field_0x10);
      }
      if (0 < (longlong)local_d88 - lVar37) {
        puVar52 = param_5 + lVar37;
        uVar47 = (ulonglong)(int)((longlong)local_d88 - lVar37);
        if (0xf < (longlong)uVar47) {
          puVar35 = puVar52 + (-(longlong)param_11 - (longlong)prVar63);
          uVar57 = uVar47 >> 4;
          uVar47 = uVar47 + uVar57 * -0x10;
          do {
            auVar82 = *(undefined1 (*) [16])(puVar35 + (longlong)prVar63);
            uVar40 = puVar52[1];
            uVar5 = puVar52[2];
            uVar6 = puVar52[3];
            uVar7 = puVar52[4];
            uVar8 = puVar52[5];
            uVar9 = puVar52[6];
            uVar10 = puVar52[7];
            uVar11 = puVar52[8];
            uVar12 = puVar52[9];
            uVar13 = puVar52[10];
            uVar14 = puVar52[0xb];
            uVar15 = puVar52[0xc];
            uVar16 = puVar52[0xd];
            uVar17 = puVar52[0xe];
            uVar18 = puVar52[0xf];
            *(uchar *)&prVar63->m_base = *puVar52 - auVar82[0];
            *(uchar *)((longlong)&prVar63->m_base + 1) = uVar40 - auVar82[1];
            *(uchar *)((longlong)&prVar63->m_base + 2) = uVar5 - auVar82[2];
            *(uchar *)((longlong)&prVar63->m_base + 3) = uVar6 - auVar82[3];
            *(uchar *)((longlong)&prVar63->m_base + 4) = uVar7 - auVar82[4];
            *(uchar *)((longlong)&prVar63->m_base + 5) = uVar8 - auVar82[5];
            *(uchar *)((longlong)&prVar63->m_base + 6) = uVar9 - auVar82[6];
            *(uchar *)((longlong)&prVar63->m_base + 7) = uVar10 - auVar82[7];
            *(uchar *)&prVar63->m_cur = uVar11 - auVar82[8];
            *(uchar *)((longlong)&prVar63->m_cur + 1) = uVar12 - auVar82[9];
            *(uchar *)((longlong)&prVar63->m_cur + 2) = uVar13 - auVar82[10];
            *(uchar *)((longlong)&prVar63->m_cur + 3) = uVar14 - auVar82[0xb];
            *(uchar *)((longlong)&prVar63->m_cur + 4) = uVar15 - auVar82[0xc];
            *(uchar *)((longlong)&prVar63->m_cur + 5) = uVar16 - auVar82[0xd];
            *(uchar *)((longlong)&prVar63->m_cur + 6) = uVar17 - auVar82[0xe];
            *(uchar *)((longlong)&prVar63->m_cur + 7) = uVar18 - auVar82[0xf];
            puVar52 = puVar52 + 0x10;
            prVar63 = (rrArenaAllocator *)&prVar63->m_cur_max;
            uVar57 = uVar57 - 1;
          } while (uVar57 != 0);
        }
        if (uVar47 != 0) {
          lVar37 = (longlong)prVar63 - (longlong)puVar52;
          do {
            puVar52[lVar37] = *puVar52 - puVar52[-(longlong)param_11];
            puVar52 = puVar52 + 1;
            uVar47 = uVar47 - 1;
          } while (uVar47 != 0);
        }
      }
      fVar73 = (*local_d38->parse_Leviathan_literals)((long64)local_d78,0);
      prVar44 = local_d40;
      puVar52 = local_d48;
      local_d98 = local_d98 - fVar73 * fVar1;
      pbVar55 = (byte *)newLZ_put_array_histo
                                  (local_d48,local_d68,(uchar *)prVar34,(long64)pbVar62,local_8f8,
                                   local_d90,fVar1,pOVar65,&local_d98,fVar20,local_d40,local_d94);
      local_d98 = local_d98 + fVar73 * fVar1;
      pbVar33 = local_d60;
      pbVar28 = pbVar62;
      puVar38 = local_d88;
      if (0 < (longlong)pbVar55) {
        *local_d58 = 0;
        pbVar33 = pbVar55;
      }
    }
    else {
      pbVar33 = local_d60;
      prVar44 = local_d40;
      puVar52 = local_d48;
      if (fVar93 == fVar95) {
        newLZHC_parse_put_literals<1>
                  (param_5,(long64)local_d88,local_d20,(uchar *)local_d80,(long64)pbVar28,local_d28,
                   param_11);
        prVar44 = local_d40;
        puVar52 = local_d48;
        pbVar62 = (byte *)newLZ_put_array_histo
                                    (local_d48,local_d68,(uchar *)local_d80,(long64)pbVar28,
                                     local_cf0,local_d90,fVar1,local_d38,&local_d98,fVar20,local_d40
                                     ,local_d94);
        pbVar33 = local_d60;
        if (0 < (longlong)pbVar62) {
          *local_d58 = 1;
          pbVar33 = pbVar62;
        }
      }
    }
    prVar19 = local_d80;
    prVar34 = local_d40;
    fVar73 = local_d98;
    prVar63 = local_c60;
    fVar70 = local_d98;
    if ((((longlong)pbVar28 <= (longlong)pbVar33) || (fVar69 <= local_d98)) &&
       ((*local_d58 != 1 || ((local_d98 != fVar69 || (pbVar33 != pbVar28 + 3)))))) {
      *local_d58 = 1;
      newLZHC_parse_put_literals<1>
                (param_5,(long64)puVar38,local_d20,(uchar *)local_d80,(long64)pbVar28,param_12,
                 param_11);
      prVar19 = local_d80;
      pbVar33 = (byte *)newLZ_put_array_uncompressed
                                  (puVar52,local_d68,(uchar *)local_d80,(long64)pbVar28);
      fVar70 = fVar69;
      fVar73 = fVar69;
      prVar34 = local_d40;
      prVar63 = local_c60;
    }
  }
  local_d98 = fVar70;
  local_c60 = prVar44;
  pbVar28 = (byte *)puVar38;
  local_d40 = prVar34;
  if (-1 < (longlong)pbVar33) {
    pnVar66 = (newlz_vtable *)(puVar52 + (longlong)pbVar33);
    local_d70[0] = 1.0737418e+09;
    local_ce8 = pnVar66;
    if ((longlong)local_cd0 < (longlong)(int)local_d00) {
      local_d78 = (byte *)0xffffffffffffffff;
      puVar38 = (uint *)(byte *)0xffffffffffffffff;
      fVar73 = local_d98;
      pbVar28 = local_d78;
    }
    else {
      lVar37 = (longlong)((int)(param_6 + 7 + (param_6 + 7 >> 0x1f & 7U)) >> 3);
      puVar52 = (uchar *)(lVar37 * 8);
      local_cd0 = puVar52;
      local_c50 = puVar52;
      if (local_c60 == (rrArenaAllocator *)0x0) {
        puVar35 = (*g_fp_OodleCore_Plugin_MallocAligned)((long64)puVar52,0x10);
        if (puVar35 == (uchar *)0x0) {
                    /* WARNING: Subroutine does not return */
          Oodle_Core_Malloc_Failed((long64)puVar52);
        }
        local_c58 = puVar35;
      }
      else {
        puVar35 = rrArenaAllocator::Alloc(local_c60,(long64)puVar52,0);
        local_c58 = puVar35;
      }
      local_c58 = puVar35;
      if ((puVar35 == (uchar *)0x0) &&
         (iVar22 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\rrarenaallocator.h",0x19a,
                                      "oo2::rrScopeArenaAlloc::rrScopeArenaAlloc","m_ptr != NULL"),
         iVar22 != 0)) {
        pcVar4 = (code *)swi(3);
        lVar29 = (*pcVar4)();
        return lVar29;
      }
      local_bb8[0] = puVar35;
      local_bb8[1] = puVar35 + lVar37;
      local_c38[0] = puVar35;
      local_bb8[2] = local_bb8[1] + lVar37;
      local_c38[1] = local_bb8[1];
      local_bb8[3] = local_bb8[2] + lVar37;
      local_c38[2] = local_bb8[2];
      local_b98 = local_bb8[3] + lVar37;
      local_c38[3] = local_bb8[3];
      local_b90 = local_b98 + lVar37;
      local_c18 = local_b98;
      local_b88 = local_b90 + lVar37;
      local_c10 = local_b90;
      local_c08 = local_b88;
      local_b80 = local_b88 + lVar37;
      local_c00 = local_b88 + lVar37;
      if (0 < (int)local_d00) {
        lVar58 = 0;
        lVar37 = 0;
        do {
          lVar49 = *(longlong *)param_12;
          iVar22 = *(int *)(lVar37 + 0xc + lVar49);
          iVar41 = *(int *)(lVar37 + 4 + lVar49);
          if (3 < iVar41) {
            iVar41 = 3;
          }
          iVar42 = *(int *)(lVar37 + 8 + lVar49) + -2;
          if (7 < iVar42) {
            iVar42 = 7;
          }
          if (iVar22 < 1) {
            cVar39 = (char)iVar22 * -0x20;
          }
          else {
            cVar39 = -0x20;
          }
          uVar40 = cVar39 + (char)iVar42 + (char)iVar41 * '\b';
          *(uchar *)((longlong)&prVar19->m_base + lVar58) = uVar40;
          puVar52 = local_c38[param_13 & 7U];
          *puVar52 = uVar40;
          local_c38[param_13 & 7U] = puVar52 + 1;
          param_13 = param_13 + *(int *)(lVar37 + 8 + lVar49) + *(int *)(lVar37 + 4 + lVar49);
          lVar58 = lVar58 + 1;
          lVar37 = lVar37 + 0x10;
          pnVar66 = local_ce8;
          puVar52 = local_cd0;
        } while (lVar58 < (int)local_d00);
      }
      pauVar48 = local_d10->packet_pos_histo;
      lVar37 = 0;
      lVar58 = 8;
      pnVar36 = local_d10;
      do {
        lVar49 = *(longlong *)((longlong)local_c38 + lVar37) -
                 (longlong)*(uchar **)((longlong)local_bb8 + lVar37);
        *(longlong *)((longlong)&local_b78 + lVar37) = lVar49;
        if (pnVar36 != (newlzhc_passinfo *)0x0) {
          CountHistoArrayU8(*(uchar **)((longlong)local_bb8 + lVar37),lVar49,*pauVar48,0x100,false);
          pnVar36 = local_d10;
        }
        pOVar65 = local_d38;
        prVar34 = local_d40;
        pauVar48 = pauVar48 + 1;
        lVar37 = lVar37 + 8;
        lVar58 = lVar58 + -1;
      } while (lVar58 != 0);
      *(undefined1 *)&pnVar66->compressor = 0x83;
      lVar29 = newLZ_put_multiarray_indexed
                         ((byte *)((longlong)&pnVar66->compressor + 1),local_d68,local_bb8,
                          &local_b78,8,local_d90,fVar1,local_d38,local_d70,local_d40,local_d94);
      lVar37 = (longlong)(int)local_d00;
      if (lVar29 != -1) {
        fVar73 = (*pOVar65->parse_Leviathan_packetpos)(lVar37);
        local_d70[0] = local_d70[0] + fVar73 * fVar1;
      }
      local_d70[0] = local_d70[0] + __real_3f800000;
      lVar31 = newLZ_put_array((uchar *)pnVar66,local_d68,(uchar *)local_d80,lVar37,local_d90,fVar1,
                               pOVar65,local_d70,fVar20,prVar34,local_d94,(uint *)0x0);
      if (local_d10 != (newlzhc_passinfo *)0x0) {
        CountHistoArrayU8((uchar *)local_d80,lVar37,local_d10->packet_histo,0x100,false);
        local_d10->did_packet_pos = false;
      }
      if (lVar31 < 0) {
        if (local_d10 != (newlzhc_passinfo *)0x0) {
          local_d10->did_packet_pos = true;
        }
        lVar31 = lVar29 + 1;
        if (lVar29 + 1 < 0) {
          puVar38 = local_d88;
          fVar73 = local_d98;
          pbVar28 = local_d78;
          prVar63 = local_c60;
          if (puVar35 != (uchar *)0x0) {
            if (prVar34 == (rrArenaAllocator *)0x0) {
              (*g_fp_OodleCore_Plugin_Free)(puVar35);
              puVar38 = local_d88;
              fVar73 = local_d98;
              pbVar28 = local_d78;
              prVar63 = local_c60;
            }
            else {
              rrArenaAllocator::Free(prVar34,puVar35,(long64)puVar52);
              puVar38 = local_d88;
              fVar73 = local_d98;
              pbVar28 = local_d78;
              prVar63 = local_c60;
            }
          }
          goto LAB_14f362750;
        }
      }
      puVar67 = (uchar *)((longlong)&pnVar66->compressor + lVar31);
      if (puVar35 != (uchar *)0x0) {
        if (prVar34 == (rrArenaAllocator *)0x0) {
          (*g_fp_OodleCore_Plugin_Free)(puVar35);
        }
        else {
          rrArenaAllocator::Free(prVar34,puVar35,(long64)puVar52);
        }
      }
      lVar29 = newLZ_put_offsets_excesses
                         (puVar67,local_d68,local_cf8,local_cc8,local_d50,local_d18[0],local_cb0,
                          (int)local_ce0,0,0);
      puVar38 = local_d88;
      fVar73 = local_d98;
      pbVar28 = local_d78;
      prVar63 = local_c60;
      if ((-1 < lVar29) &&
         (pbVar62 = puVar67 + (lVar29 - (longlong)local_ca8),
         (longlong)pbVar62 < (longlong)local_d88)) {
        fVar73 = (*local_d38->parse_Leviathan)((long64)local_d88,lVar37,(long64)local_cd8);
        *local_ca0 = local_d70[0] + local_d98 + local_d08[0] + local_d30[0] +
                     fVar73 * fVar1 + (float)(local_d20 + lVar29);
        puVar38 = (uint *)pbVar62;
        fVar73 = local_d98;
        pbVar28 = local_d78;
        prVar63 = local_c60;
      }
    }
  }
LAB_14f362750:
  local_c60 = prVar63;
  local_d78 = pbVar28;
  local_d98 = fVar73;
  if (local_cf8 != (byte *)0x0) {
    if (prVar34 == (rrArenaAllocator *)0x0) {
      (*g_fp_OodleCore_Plugin_Free)(local_cf8);
    }
    else {
      rrArenaAllocator::Free(prVar34,local_cf8,local_c98);
    }
  }
  return (long64)(byte *)puVar38;
}

// newLZ_alt_offset_pack_u8_modulo1 @ 14f3628e0

uchar __cdecl oo2::newLZ_alt_offset_pack_u8_modulo1(uint param_1)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  
  uVar2 = param_1 + 8;
  iVar1 = 0x1f;
  if (uVar2 != 0) {
    for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  bVar3 = (char)iVar1 - 3;
  return (byte)(uVar2 >> (bVar3 & 0x1f)) ^ 8 | bVar3 * '\b';
}

// newLZ_alt_offset_pack_u8s @ 14f362900

void __cdecl oo2::newLZ_alt_offset_pack_u8s(uint param_1,uchar *param_2,uchar *param_3,int param_4)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  
  *param_3 = (uchar)(param_1 % (uint)param_4);
  uVar3 = param_1 / (uint)param_4 + 8;
  iVar1 = 0x1f;
  if (uVar3 != 0) {
    for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  bVar2 = (char)iVar1 - 3;
  *param_2 = (byte)(uVar3 >> (bVar2 & 0x1f)) ^ 8 | bVar2 * '\b';
  return;
}

// newLZ_alt_offset_unpack_numrawbits @ 14f362930

uint __cdecl oo2::newLZ_alt_offset_unpack_numrawbits(uchar param_1)

{
  return (uint)(param_1 >> 3);
}

// newLZ_get_array @ 14f362940

long64 __cdecl
oo2::newLZ_get_array
          (uchar **param_1,uchar *param_2,uchar *param_3,long64 *param_4,long64 param_5,bool param_6
          ,uchar *param_7,uchar *param_8)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  long64 lVar4;
  uint uVar5;
  longlong lVar6;
  size_t _Size;
  uchar *_Src;
  int iVar7;
  char *pcVar8;
  
  lVar6 = (longlong)param_3 - (longlong)param_2;
  if (lVar6 < 2) {
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto code_r0x00014f362a60;
    pcVar8 = "OODLE ERROR : corruption : 2 <= rrPtrDiff( from_end - from_ptr )\n";
    iVar7 = 0x35;
  }
  else {
    bVar1 = *param_2;
    bVar3 = bVar1 >> 4;
    uVar5 = (uint)bVar3;
    if (0x7f < bVar1) {
      uVar5 = uVar5 & 7;
      if ((bVar3 & 7) != 0) {
LAB_14f362ab4:
        lVar4 = newLZ_get_array_comp(uVar5,param_1,param_2,param_3,param_4,param_5,param_7,param_8);
        return lVar4;
      }
      _Src = param_2 + 2;
      _Size = (size_t)((ushort)(*(ushort *)param_2 >> 8 | *(ushort *)param_2 << 8) & 0xfff);
      if (param_5 < (longlong)_Size) {
        return -1;
      }
      if (param_3 < _Src + _Size) {
        return -1;
      }
LAB_14f3629d8:
      if (!param_6) {
        *param_1 = _Src;
        *param_4 = _Size;
        return (long64)(_Src + (_Size - (longlong)param_2));
      }
      memmove(*param_1,_Src,_Size);
      *param_4 = _Size;
      return (long64)(_Src + (_Size - (longlong)param_2));
    }
    if (3 < lVar6) {
      if (bVar3 != 0) goto LAB_14f362ab4;
      uVar5 = *(uint *)param_2;
      _Src = param_2 + 3;
      uVar2 = (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8;
      _Size = (size_t)((uVar2 | uVar5 << 0x18 & 0x3ffff00) >> 8);
      if (0x3ffff < (uVar2 | uVar5 << 0x18) >> 8) {
        return -1;
      }
      if (param_5 < (longlong)_Size) {
        return -1;
      }
      if ((longlong)param_3 - (longlong)_Src < (longlong)_Size) {
        return -1;
      }
      goto LAB_14f3629d8;
    }
    if (lVar6 != 3) {
      return -1;
    }
    if (CONCAT21(CONCAT11(bVar1,param_2[1]),param_2[2]) == 0) {
      *param_1 = (uchar *)0x0;
      *param_4 = 0;
      return (long64)&DAT_00000003;
    }
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto code_r0x00014f362a60;
    pcVar8 = "OODLE ERROR : corruption : header == 0\n";
    iVar7 = 0x78;
  }
  (*g_fp_OodleCore_Plugin_Printf)
            (0,"v:\\devel\\projects\\oodle2\\core\\newlz_arrays.inl",iVar7,pcVar8);
code_r0x00014f362a60:
  ooLogErrorPost();
  return -1;
}

// newLZ_offset44_pack_high_u8 @ 14f362b10

uchar __cdecl oo2::newLZ_offset44_pack_high_u8(int param_1)

{
  int iVar1;
  
  iVar1 = 0x1f;
  if (param_1 - 0x7eff00U != 0) {
    for (; param_1 - 0x7eff00U >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  return (byte)iVar1 | 0xf0;
}

// newLZ_offset44_pack_low_u8 @ 14f362b30

uchar __cdecl oo2::newLZ_offset44_pack_low_u8(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_1 + 0xf8;
  iVar1 = 0x1f;
  if (uVar2 != 0) {
    for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  return ((char)iVar1 + -8) * '\x10' | (byte)uVar2 & 0xf;
}

// newLZ_offset44_pack_u8 @ 14f362b50

uchar __cdecl oo2::newLZ_offset44_pack_u8(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 < 0x7fff08) {
    uVar2 = param_1 + 0xf8;
    iVar1 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    return ((char)iVar1 + -8) * '\x10' | (byte)uVar2 & 0xf;
  }
  iVar1 = 0x1f;
  if (param_1 - 0x7eff00U != 0) {
    for (; param_1 - 0x7eff00U >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  return (byte)iVar1 | 0xf0;
}

// newLZ_offset44_round_up_tiny @ 14f362b80

uint __cdecl oo2::newLZ_offset44_round_up_tiny(uint param_1)

{
  return rounded_up[param_1];
}

// newLZ_offset44_unpack_high_numrawbits @ 14f362ba0

uint __cdecl oo2::newLZ_offset44_unpack_high_numrawbits(uchar param_1)

{
  return param_1 - 0xe0;
}

// newLZ_offset44_unpack_low_numrawbits @ 14f362bb0

uint __cdecl oo2::newLZ_offset44_unpack_low_numrawbits(uchar param_1)

{
  return (param_1 >> 4) + 4;
}

// newLZ_offset44_unpack_numrawbits @ 14f362bc0

uint __cdecl oo2::newLZ_offset44_unpack_numrawbits(uchar param_1)

{
  if (param_1 < 0xf0) {
    return (param_1 >> 4) + 4;
  }
  return param_1 - 0xe0;
}

// newlz_array_estimate_complen_bytes @ 14f362be0

uint __cdecl oo2::newlz_array_estimate_complen_bytes(uint *param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = newlz_array_estimate_complen_bits(param_1,param_2,param_3);
  return uVar1 + 7 >> 3;
}

// newlz_copyliteral_subandF @ 14f362c00

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

// newlz_copyliterals_o1 @ 14f362c40

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

// newlz_copyliterals_subandF @ 14f362cb0

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

// newlz_literal_space_reserve_size @ 14f362cf0

int __cdecl oo2::newlz_literal_space_reserve_size(int param_1)

{
  return (param_1 >> 4) + 0x100 + param_1;
}

// newlz_literals_copy8suband3 @ 14f362d10

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

// newlz_literals_copy8suband3_second @ 14f362d50

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

// newlz_spaceSpeedTradeoffBytes_for_lambda @ 14f362d80

float __cdecl oo2::newlz_spaceSpeedTradeoffBytes_for_lambda(OodleLZ_CompressOptions *param_1)

{
  int iVar1;
  
  iVar1 = param_1->spaceSpeedTradeoffBytes;
  if (iVar1 == 0) {
    return __real_43800000;
  }
  if (iVar1 < 0) {
    return 0.0;
  }
  return (float)iVar1;
}

// newlzhc_advance_suband3_lit_offs @ 14f362db0

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

// newlzhc_cost_literals @ 14f362e00

int __cdecl
oo2::newlzhc_cost_literals
          (uchar *param_1,long64 param_2,int param_3,long64 param_4,newlzhc_codecosts *param_5,
          int param_6)

{
  byte *pbVar1;
  byte bVar2;
  uchar uVar3;
  int iVar4;
  longlong lVar5;
  uchar *puVar6;
  byte *pbVar7;
  uchar *puVar8;
  int iVar9;
  
  if (param_3 == 0) {
    return 0;
  }
  iVar9 = 0;
  switch(param_5->chunktype) {
  case 0:
    puVar8 = param_1 + param_2;
    do {
      uVar3 = *puVar8;
      puVar6 = puVar8 + -param_4;
      puVar8 = puVar8 + 1;
      iVar9 = iVar9 + param_5->codecost_literal[0][(byte)(uVar3 - *puVar6)];
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    return iVar9;
  case 1:
    pbVar7 = param_1 + param_2;
    do {
      bVar2 = *pbVar7;
      pbVar7 = pbVar7 + 1;
      iVar9 = iVar9 + param_5->codecost_literal[0][bVar2];
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    return iVar9;
  case 2:
    break;
  case 3:
    puVar8 = param_1 + param_2;
    do {
      uVar3 = *puVar8;
      puVar6 = puVar8 + -param_4;
      iVar4 = (int)puVar8;
      puVar8 = puVar8 + 1;
      iVar9 = iVar9 + param_5->codecost_literal[0]
                      [CONCAT41(iVar4 - (int)param_1,uVar3 - *puVar6) & 0x3ff];
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    return iVar9;
  case 4:
    pbVar7 = param_1 + param_2;
    do {
      pbVar1 = pbVar7 + -1;
      bVar2 = *pbVar7;
      pbVar7 = pbVar7 + 1;
      iVar9 = iVar9 + param_5->codecost_literal[*pbVar1 >> 4][bVar2];
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    return iVar9;
  case 5:
    puVar8 = param_1 + param_2;
    do {
      uVar3 = *puVar8;
      puVar6 = puVar8 + -param_4;
      iVar4 = (int)puVar8;
      puVar8 = puVar8 + 1;
      iVar9 = iVar9 + param_5->codecost_literal[0]
                      [CONCAT41(iVar4 - (int)param_1,uVar3 - *puVar6) & 0xfff];
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  default:
    return iVar9;
  }
  if (param_6 == 0) {
    puVar8 = param_1 + param_2;
    lVar5 = param_2 - param_4;
    param_2 = param_2 + 1;
    iVar9 = param_5->codecost_literal[0][(byte)(*puVar8 - param_1[lVar5])];
    param_3 = param_3 + -1;
    if (param_3 == 0) {
      return iVar9;
    }
  }
  puVar8 = param_1 + param_2;
  do {
    uVar3 = *puVar8;
    puVar6 = puVar8 + -param_4;
    puVar8 = puVar8 + 1;
    iVar9 = iVar9 + param_5->codecost_literal[1][(byte)(uVar3 - *puVar6)];
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return iVar9;
}

// newlzhc_estimate_array_complen @ 14f362fe0

uint __cdecl oo2::newlzhc_estimate_array_complen(uint *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = rrSumOfHistogram(param_1,param_2);
  uVar1 = newlz_array_estimate_complen_bits(param_1,param_2,uVar1);
  return uVar1 + 7 >> 3;
}

// newlzhc_estimate_array_complen @ 14f363020

uint __cdecl oo2::newlzhc_estimate_array_complen(uint *param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = newlz_array_estimate_complen_bits(param_1,param_2,param_3);
  return uVar1 + 7 >> 3;
}

// newlzhc_init_suband3_lit_offs @ 14f363040

__m128i * __cdecl oo2::newlzhc_init_suband3_lit_offs(__m128i *__return_storage_ptr__,int *param_1)

{
  __m128i *in_RAX;
  
  __return_storage_ptr__[1].m128i_i64[0] = __return_storage_ptr__->m128i_i64[0];
  *(long64 *)((longlong)__return_storage_ptr__ + 0x18) = __return_storage_ptr__->m128i_i64[1];
  return in_RAX;
}

// num_literal_arrays_from_type @ 14f363060

int __cdecl oo2::num_literal_arrays_from_type(int param_1)

{
  int iVar1;
  
  if (param_1 < 2) {
    return 1;
  }
  if (param_1 == 2) {
    return 2;
  }
  iVar1 = 0x10;
  if (param_1 == 3) {
    iVar1 = 4;
  }
  return iVar1;
}

// optimal_passinfo_to_codecost @ 14f3630a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl oo2::optimal_passinfo_to_codecost(newlzhc_passinfo *param_1,newlzhc_codecosts *param_2)

{
  uint *puVar1;
  int (*paiVar2) [256];
  uint (*pauVar3) [256];
  uint (*pauVar4) [256];
  longlong lVar5;
  uint (*pauVar6) [256];
  longlong lVar7;
  undefined1 auStackY_458 [32];
  uint local_428 [256];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_458;
  histo_to_codecost(param_1->offset_histo1,param_2->codecost_offset1,0x100,0xc,0xff);
  if (1 < param_1->offset_alt_modulo) {
    histo_to_codecost(param_1->offset_histo2,param_2->codecost_offset2,0x100,0,0xff);
  }
  histo_to_codecost(param_1->excess_ml_histo,param_2->codecost_excess_ml,0x100,6,0xff);
  histo_to_codecost(param_1->excess_lrl_histo,param_2->codecost_excess_lrl,0x100,2,0xff);
  if (param_1->did_packet_pos == false) {
    param_2->packet_pos_mask = 0;
    histo_to_codecost(param_1->packet_histo,param_2->codecost_packet[0],0x100,6,0xff);
  }
  else {
    param_2->packet_pos_mask = 7;
    pauVar6 = param_1->packet_pos_histo;
    lVar5 = 8;
    do {
      histo_to_codecost(*pauVar6,(int *)((longlong)param_2 + (-0x5400 - (longlong)param_1) +
                                        (longlong)pauVar6),0x100,6,0xff);
      pauVar6 = pauVar6 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  switch(param_2->chunktype) {
  case 0:
    puVar1 = param_1->literals_sub;
    goto LAB_14f363236;
  case 1:
    puVar1 = (param_1->literals).literals_raw;
LAB_14f363236:
    paiVar2 = param_2->codecost_literal;
LAB_14f36323a:
    histo_to_codecost(puVar1,*paiVar2,0x100,0,0xff);
    break;
  case 2:
    histo_to_codecost((param_1->literals).literals_sub_lam,param_2->codecost_literal[0],0x100,0,0xff
                     );
    paiVar2 = param_2->codecost_literal + 1;
    puVar1 = (param_1->literals).literals_sub_later;
    goto LAB_14f36323a;
  case 3:
    pauVar6 = (param_1->literals).literals_sub_andF + 4;
    lVar5 = 4;
    do {
      pauVar3 = pauVar6 + -4;
      lVar7 = 3;
      pauVar4 = pauVar6;
      do {
        simd_add_u32_256(local_428,*pauVar3,*pauVar4);
        pauVar4 = pauVar4 + 4;
        pauVar3 = &local_428;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      histo_to_codecost(local_428,
                        (int *)((longlong)param_2 + (-0x5c00 - (longlong)param_1) +
                               (longlong)pauVar6),0x100,0,0xff);
      pauVar6 = pauVar6 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    break;
  case 4:
    pauVar6 = (param_1->literals).literals_o1;
    lVar5 = 0x10;
    do {
      histo_to_codecost(*pauVar6,(int *)((longlong)param_2 + (-0xc00 - (longlong)param_1) +
                                        (longlong)pauVar6),0x100,0,0xff);
      pauVar6 = pauVar6 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    break;
  case 5:
    pauVar6 = (param_1->literals).literals_sub_andF;
    lVar5 = 0x10;
    do {
      histo_to_codecost(*pauVar6,(int *)((longlong)param_2 + (-0x4c00 - (longlong)param_1) +
                                        (longlong)pauVar6),0x100,0,0xff);
      pauVar6 = pauVar6 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}

// optimal_rescale_histo2 @ 14f363400

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl oo2::optimal_rescale_histo2(uint *param_1,uint *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint *puVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  
  iVar18 = OPTIMAL_RESCALE_ADD;
  iVar17 = _UNK_150631dac;
  iVar16 = _UNK_150631da8;
  iVar15 = _UNK_150631da4;
  iVar7 = ___xmm_00000001000000010000000100000001;
  uVar21 = OPTIMAL_RESCALE_SHIFT + 1;
  if ((param_1 <= param_2 + 0xff) && (param_2 <= param_1 + 0xff)) {
    lVar20 = 0x100;
    iVar7 = OPTIMAL_RESCALE_BIAS * 2;
    puVar19 = param_1;
    do {
      *puVar19 = (*puVar19 + 1 +
                  *(int *)((longlong)puVar19 + ((longlong)param_2 - (longlong)param_1)) + iVar7 >>
                 ((byte)uVar21 & 0x1f)) + iVar18;
      lVar20 = lVar20 + -1;
      puVar19 = puVar19 + 1;
    } while (lVar20 != 0);
    return;
  }
  iVar3 = OPTIMAL_RESCALE_BIAS * 2;
  iVar4 = OPTIMAL_RESCALE_BIAS * 2;
  iVar5 = OPTIMAL_RESCALE_BIAS * 2;
  iVar6 = OPTIMAL_RESCALE_BIAS * 2;
  lVar20 = 0x20;
  puVar19 = param_1 + 4;
  do {
    piVar2 = (int *)(((longlong)param_2 - (longlong)param_1) + -0x10 + (longlong)puVar19);
    iVar8 = piVar2[1];
    iVar9 = piVar2[2];
    iVar10 = piVar2[3];
    piVar1 = (int *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar19);
    iVar11 = *piVar1;
    iVar12 = piVar1[1];
    iVar13 = piVar1[2];
    iVar14 = piVar1[3];
    uVar22 = (ulonglong)uVar21;
    puVar19[-4] = (*piVar2 + puVar19[-4] + iVar3 + iVar7 >> uVar22) + iVar18;
    puVar19[-3] = (iVar8 + puVar19[-3] + iVar4 + iVar15 >> uVar22) + iVar18;
    puVar19[-2] = (iVar9 + puVar19[-2] + iVar5 + iVar16 >> uVar22) + iVar18;
    puVar19[-1] = (iVar10 + puVar19[-1] + iVar6 + iVar17 >> uVar22) + iVar18;
    *puVar19 = (iVar11 + *puVar19 + iVar3 + iVar7 >> uVar22) + iVar18;
    puVar19[1] = (iVar12 + puVar19[1] + iVar4 + iVar15 >> uVar22) + iVar18;
    puVar19[2] = (iVar13 + puVar19[2] + iVar5 + iVar16 >> uVar22) + iVar18;
    puVar19[3] = (iVar14 + puVar19[3] + iVar6 + iVar17 >> uVar22) + iVar18;
    lVar20 = lVar20 + -1;
    puVar19 = puVar19 + 8;
  } while (lVar20 != 0);
  return;
}

// optimal_rescale_histo @ 14f363540

void __cdecl oo2::optimal_rescale_histo(uint *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = OPTIMAL_RESCALE_ADD;
  iVar2 = OPTIMAL_RESCALE_BIAS;
  iVar1 = OPTIMAL_RESCALE_SHIFT;
  lVar4 = 0;
  do {
    param_1[lVar4] = (param_1[lVar4] + iVar2 >> ((byte)iVar1 & 0x1f)) + iVar3;
    param_1[lVar4 + 1] = (param_1[lVar4 + 1] + iVar2 >> ((byte)iVar1 & 0x1f)) + iVar3;
    lVar4 = lVar4 + 2;
  } while (lVar4 < 0x100);
  return;
}

// optimal_rescale_histo_incremental @ 14f3635a0

void __cdecl oo2::optimal_rescale_histo_incremental(uint *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  longlong lVar5;
  
  if (c_histo_rescale_incremental_total != 0) {
    uVar3 = rrSumOfHistogram(param_1,0x100);
    iVar2 = OPTIMAL_RESCALE_ADD;
    iVar1 = INCREMENTAL_RESCALE_BIAS;
    if ((uint)c_histo_rescale_incremental_total <= uVar3) {
      lVar5 = 0x10;
      puVar4 = param_1 + 8;
      do {
        puVar4[-8] = (puVar4[-8] + iVar1 >> 1) + iVar2;
        puVar4[-7] = (puVar4[-7] + iVar1 >> 1) + iVar2;
        puVar4[-6] = (puVar4[-6] + iVar1 >> 1) + iVar2;
        puVar4[-5] = (puVar4[-5] + iVar1 >> 1) + iVar2;
        puVar4[-4] = (puVar4[-4] + iVar1 >> 1) + iVar2;
        puVar4[-3] = (puVar4[-3] + iVar1 >> 1) + iVar2;
        puVar4[-2] = (puVar4[-2] + iVar1 >> 1) + iVar2;
        puVar4[-1] = (puVar4[-1] + iVar1 >> 1) + iVar2;
        *puVar4 = (*puVar4 + iVar1 >> 1) + iVar2;
        puVar4[1] = (puVar4[1] + iVar1 >> 1) + iVar2;
        puVar4[2] = (puVar4[2] + iVar1 >> 1) + iVar2;
        puVar4[3] = (puVar4[3] + iVar1 >> 1) + iVar2;
        puVar4[4] = (puVar4[4] + iVar1 >> 1) + iVar2;
        puVar4[5] = (puVar4[5] + iVar1 >> 1) + iVar2;
        puVar4[6] = (puVar4[6] + iVar1 >> 1) + iVar2;
        puVar4[7] = (puVar4[7] + iVar1 >> 1) + iVar2;
        lVar5 = lVar5 + -1;
        puVar4 = puVar4 + 0x10;
      } while (lVar5 != 0);
    }
  }
  return;
}

// optimal_rescale_passinfo2 @ 14f363680

void __cdecl
oo2::optimal_rescale_passinfo2(newlzhc_passinfo *param_1,newlzhc_passinfo *param_2,bool param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint (*pauVar5) [256];
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  optimal_rescale_histo2((param_1->literals).literals_raw,(param_2->literals).literals_raw);
  optimal_rescale_histo2((param_1->literals).literals_sub_lam,(param_2->literals).literals_sub_lam);
  optimal_rescale_histo2
            ((param_1->literals).literals_sub_later,(param_2->literals).literals_sub_later);
  pauVar5 = (param_1->literals).literals_o1;
  lVar6 = 0x10;
  lVar7 = (longlong)param_2 - (longlong)param_1;
  lVar8 = 0x10;
  do {
    optimal_rescale_histo2(*pauVar5,(uint *)(lVar7 + (longlong)pauVar5));
    pauVar5 = pauVar5 + 1;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  pauVar5 = (param_1->literals).literals_sub_andF;
  do {
    optimal_rescale_histo2(*pauVar5,(uint *)((longlong)pauVar5 + lVar7));
    pauVar5 = pauVar5 + 1;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  optimal_rescale_histo2(param_1->literals_sub,param_2->literals_sub);
  optimal_rescale_histo2(param_1->packet_histo,param_2->packet_histo);
  pauVar5 = param_1->packet_pos_histo;
  lVar6 = 4;
  do {
    optimal_rescale_histo2(*pauVar5,(uint *)((longlong)pauVar5 + lVar7));
    pauVar5 = pauVar5 + 1;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  optimal_rescale_histo2(param_1->excess_ml_histo,param_2->excess_ml_histo);
  optimal_rescale_histo2(param_1->excess_lrl_histo,param_2->excess_lrl_histo);
  iVar3 = OPTIMAL_RESCALE_ADD;
  iVar2 = OPTIMAL_RESCALE_BIAS;
  iVar1 = OPTIMAL_RESCALE_SHIFT;
  if (param_1->offset_alt_modulo == param_2->offset_alt_modulo) {
    optimal_rescale_histo2(param_1->offset_histo1,param_2->offset_histo1);
    if (1 < param_1->offset_alt_modulo) {
      optimal_rescale_histo2(param_1->offset_histo2,param_2->offset_histo2);
    }
  }
  else {
    lVar7 = 0;
    lVar6 = lVar7;
    do {
      bVar4 = (byte)iVar1;
      param_1->offset_histo1[lVar6] =
           (param_1->offset_histo1[lVar6] + iVar2 >> (bVar4 & 0x1f)) + iVar3;
      param_1->offset_histo1[lVar6 + 1] =
           (param_1->offset_histo1[lVar6 + 1] + iVar2 >> (bVar4 & 0x1f)) + iVar3;
      lVar6 = lVar6 + 2;
    } while (lVar6 < 0x100);
    if (1 < param_1->offset_alt_modulo) {
      do {
        param_1->offset_histo2[lVar7] =
             (param_1->offset_histo2[lVar7] + iVar2 >> (bVar4 & 0x1f)) + iVar3;
        param_1->offset_histo2[lVar7 + 1] =
             (param_1->offset_histo2[lVar7 + 1] + iVar2 >> (bVar4 & 0x1f)) + iVar3;
        lVar7 = lVar7 + 2;
      } while (lVar7 < 0x100);
    }
  }
  return;
}

// optimal_rescale_passinfo @ 14f3638c0

void __cdecl oo2::optimal_rescale_passinfo(newlzhc_passinfo *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint (*pauVar9) [256];
  longlong lVar10;
  
  iVar4 = OPTIMAL_RESCALE_ADD;
  iVar3 = OPTIMAL_RESCALE_BIAS;
  iVar2 = OPTIMAL_RESCALE_SHIFT;
  lVar10 = 0;
  lVar6 = lVar10;
  do {
    bVar5 = (byte)iVar2;
    (param_1->literals).literals_raw[lVar6] =
         ((param_1->literals).literals_raw[lVar6] + iVar3 >> (bVar5 & 0x1f)) + iVar4;
    (param_1->literals).literals_raw[lVar6 + 1] =
         ((param_1->literals).literals_raw[lVar6 + 1] + iVar3 >> (bVar5 & 0x1f)) + iVar4;
    lVar6 = lVar6 + 2;
    lVar8 = lVar10;
  } while (lVar6 < 0x100);
  do {
    uVar1 = (param_1->literals).literals_sub_lam[lVar8 + 1];
    (param_1->literals).literals_sub_lam[lVar8] =
         ((param_1->literals).literals_sub_lam[lVar8] + iVar3 >> (bVar5 & 0x1f)) + iVar4;
    (param_1->literals).literals_sub_lam[lVar8 + 1] = (uVar1 + iVar3 >> (bVar5 & 0x1f)) + iVar4;
    lVar8 = lVar8 + 2;
    lVar6 = lVar10;
  } while (lVar8 < 0x100);
  do {
    (param_1->literals).literals_sub_later[lVar6] =
         ((param_1->literals).literals_sub_later[lVar6] + iVar3 >> (bVar5 & 0x1f)) + iVar4;
    (param_1->literals).literals_sub_later[lVar6 + 1] =
         ((param_1->literals).literals_sub_later[lVar6 + 1] + iVar3 >> (bVar5 & 0x1f)) + iVar4;
    lVar6 = lVar6 + 2;
  } while (lVar6 < 0x100);
  lVar7 = 0x10;
  pauVar9 = (param_1->literals).literals_o1;
  lVar8 = 0x10;
  lVar6 = lVar10;
  do {
    do {
      (*pauVar9)[lVar6] = ((*pauVar9)[lVar6] + iVar3 >> (bVar5 & 0x1f)) + iVar4;
      (*pauVar9)[lVar6 + 1] = ((*pauVar9)[lVar6 + 1] + iVar3 >> (bVar5 & 0x1f)) + iVar4;
      lVar6 = lVar6 + 2;
    } while (lVar6 < 0x100);
    pauVar9 = pauVar9 + 1;
    lVar8 = lVar8 + -1;
    lVar6 = lVar10;
  } while (lVar8 != 0);
  pauVar9 = (param_1->literals).literals_sub_andF;
  do {
    do {
      (*pauVar9)[lVar6] = ((*pauVar9)[lVar6] + iVar3 >> (bVar5 & 0x1f)) + iVar4;
      (*pauVar9)[lVar6 + 1] = ((*pauVar9)[lVar6 + 1] + iVar3 >> (bVar5 & 0x1f)) + iVar4;
      lVar6 = lVar6 + 2;
    } while (lVar6 < 0x100);
    pauVar9 = pauVar9 + 1;
    lVar7 = lVar7 + -1;
    lVar6 = lVar10;
  } while (lVar7 != 0);
  do {
    param_1->literals_sub[lVar6] = (param_1->literals_sub[lVar6] + iVar3 >> (bVar5 & 0x1f)) + iVar4;
    param_1->literals_sub[lVar6 + 1] =
         (param_1->literals_sub[lVar6 + 1] + iVar3 >> (bVar5 & 0x1f)) + iVar4;
    lVar6 = lVar6 + 2;
    lVar8 = lVar10;
  } while (lVar6 < 0x100);
  do {
    param_1->offset_histo1[lVar8] =
         (param_1->offset_histo1[lVar8] + iVar3 >> (bVar5 & 0x1f)) + iVar4;
    param_1->offset_histo1[lVar8 + 1] =
         (param_1->offset_histo1[lVar8 + 1] + iVar3 >> (bVar5 & 0x1f)) + iVar4;
    lVar8 = lVar8 + 2;
  } while (lVar8 < 0x100);
  lVar6 = lVar10;
  lVar8 = lVar10;
  if (1 < param_1->offset_alt_modulo) {
    do {
      param_1->offset_histo2[lVar8] =
           (param_1->offset_histo2[lVar8] + iVar3 >> (bVar5 & 0x1f)) + iVar4;
      param_1->offset_histo2[lVar8 + 1] =
           (param_1->offset_histo2[lVar8 + 1] + iVar3 >> (bVar5 & 0x1f)) + iVar4;
      lVar8 = lVar8 + 2;
    } while (lVar8 < 0x100);
  }
  do {
    param_1->packet_histo[lVar6] = (param_1->packet_histo[lVar6] + iVar3 >> (bVar5 & 0x1f)) + iVar4;
    param_1->packet_histo[lVar6 + 1] =
         (param_1->packet_histo[lVar6 + 1] + iVar3 >> (bVar5 & 0x1f)) + iVar4;
    lVar6 = lVar6 + 2;
  } while (lVar6 < 0x100);
  pauVar9 = param_1->packet_pos_histo;
  lVar8 = 4;
  lVar6 = lVar10;
  do {
    do {
      (*pauVar9)[lVar6] = ((*pauVar9)[lVar6] + iVar3 >> (bVar5 & 0x1f)) + iVar4;
      (*pauVar9)[lVar6 + 1] = ((*pauVar9)[lVar6 + 1] + iVar3 >> (bVar5 & 0x1f)) + iVar4;
      lVar6 = lVar6 + 2;
    } while (lVar6 < 0x100);
    pauVar9 = pauVar9 + 1;
    lVar8 = lVar8 + -1;
    lVar6 = lVar10;
  } while (lVar8 != 0);
  do {
    param_1->excess_ml_histo[lVar6] =
         (param_1->excess_ml_histo[lVar6] + iVar3 >> (bVar5 & 0x1f)) + iVar4;
    param_1->excess_ml_histo[lVar6 + 1] =
         (param_1->excess_ml_histo[lVar6 + 1] + iVar3 >> (bVar5 & 0x1f)) + iVar4;
    lVar6 = lVar6 + 2;
  } while (lVar6 < 0x100);
  do {
    param_1->excess_lrl_histo[lVar10] =
         (param_1->excess_lrl_histo[lVar10] + iVar3 >> (bVar5 & 0x1f)) + iVar4;
    param_1->excess_lrl_histo[lVar10 + 1] =
         (param_1->excess_lrl_histo[lVar10 + 1] + iVar3 >> (bVar5 & 0x1f)) + iVar4;
    lVar10 = lVar10 + 2;
  } while (lVar10 < 0x100);
  return;
}

// optimal_rescale_passinfo_incremental @ 14f363c60

void __cdecl oo2::optimal_rescale_passinfo_incremental(newlzhc_passinfo *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  longlong lVar8;
  longlong lVar9;
  uint (*pauVar10) [256];
  longlong lVar11;
  
  lVar11 = 0x10;
  iVar5 = c_histo_rescale_incremental_total;
  if (c_histo_rescale_incremental_total != 0) {
    uVar4 = rrSumOfHistogram((param_1->literals).literals_raw,0x100);
    iVar3 = OPTIMAL_RESCALE_ADD;
    iVar5 = c_histo_rescale_incremental_total;
    iVar6 = INCREMENTAL_RESCALE_BIAS;
    if ((uint)c_histo_rescale_incremental_total <= uVar4) {
      lVar8 = 0x10;
      puVar7 = (param_1->literals).literals_raw + 8;
      do {
        puVar7[-8] = (puVar7[-8] + iVar6 >> 1) + iVar3;
        puVar7[-7] = (puVar7[-7] + iVar6 >> 1) + iVar3;
        puVar7[-6] = (puVar7[-6] + iVar6 >> 1) + iVar3;
        puVar7[-5] = (puVar7[-5] + iVar6 >> 1) + iVar3;
        puVar7[-4] = (iVar6 + puVar7[-4] >> 1) + iVar3;
        puVar7[-3] = (iVar6 + puVar7[-3] >> 1) + iVar3;
        puVar7[-2] = (iVar6 + puVar7[-2] >> 1) + iVar3;
        puVar7[-1] = (iVar6 + puVar7[-1] >> 1) + iVar3;
        *puVar7 = (*puVar7 + iVar6 >> 1) + iVar3;
        puVar7[1] = (puVar7[1] + iVar6 >> 1) + iVar3;
        puVar7[2] = (puVar7[2] + iVar6 >> 1) + iVar3;
        puVar7[3] = (puVar7[3] + iVar6 >> 1) + iVar3;
        puVar7[4] = (iVar6 + puVar7[4] >> 1) + iVar3;
        puVar7[5] = (iVar6 + puVar7[5] >> 1) + iVar3;
        puVar7[6] = (iVar6 + puVar7[6] >> 1) + iVar3;
        puVar7[7] = (iVar6 + puVar7[7] >> 1) + iVar3;
        lVar8 = lVar8 + -1;
        puVar7 = puVar7 + 0x10;
      } while (lVar8 != 0);
    }
    if (iVar5 != 0) {
      uVar4 = rrSumOfHistogram((param_1->literals).literals_sub_lam,0x100);
      iVar3 = OPTIMAL_RESCALE_ADD;
      iVar5 = c_histo_rescale_incremental_total;
      iVar6 = INCREMENTAL_RESCALE_BIAS;
      if ((uint)c_histo_rescale_incremental_total <= uVar4) {
        lVar8 = 0x10;
        puVar7 = (param_1->literals).literals_sub_lam + 8;
        do {
          puVar7[-8] = (puVar7[-8] + iVar6 >> 1) + iVar3;
          puVar7[-7] = (puVar7[-7] + iVar6 >> 1) + iVar3;
          puVar7[-6] = (puVar7[-6] + iVar6 >> 1) + iVar3;
          puVar7[-5] = (puVar7[-5] + iVar6 >> 1) + iVar3;
          puVar7[-4] = (iVar6 + puVar7[-4] >> 1) + iVar3;
          puVar7[-3] = (iVar6 + puVar7[-3] >> 1) + iVar3;
          puVar7[-2] = (iVar6 + puVar7[-2] >> 1) + iVar3;
          puVar7[-1] = (iVar6 + puVar7[-1] >> 1) + iVar3;
          *puVar7 = (*puVar7 + iVar6 >> 1) + iVar3;
          puVar7[1] = (puVar7[1] + iVar6 >> 1) + iVar3;
          puVar7[2] = (puVar7[2] + iVar6 >> 1) + iVar3;
          puVar7[3] = (puVar7[3] + iVar6 >> 1) + iVar3;
          puVar7[4] = (puVar7[4] + iVar6 >> 1) + iVar3;
          puVar7[5] = (puVar7[5] + iVar6 >> 1) + iVar3;
          puVar7[6] = (puVar7[6] + iVar6 >> 1) + iVar3;
          puVar7[7] = (puVar7[7] + iVar6 >> 1) + iVar3;
          lVar8 = lVar8 + -1;
          puVar7 = puVar7 + 0x10;
        } while (lVar8 != 0);
      }
      if (iVar5 != 0) {
        uVar4 = rrSumOfHistogram((param_1->literals).literals_sub_later,0x100);
        iVar3 = OPTIMAL_RESCALE_ADD;
        iVar5 = c_histo_rescale_incremental_total;
        iVar6 = INCREMENTAL_RESCALE_BIAS;
        if ((uint)c_histo_rescale_incremental_total <= uVar4) {
          lVar8 = 0x10;
          puVar7 = (param_1->literals).literals_sub_later + 8;
          do {
            puVar7[-8] = (iVar6 + puVar7[-8] >> 1) + iVar3;
            puVar7[-7] = (iVar6 + puVar7[-7] >> 1) + iVar3;
            puVar7[-6] = (iVar6 + puVar7[-6] >> 1) + iVar3;
            puVar7[-5] = (iVar6 + puVar7[-5] >> 1) + iVar3;
            puVar7[-4] = (puVar7[-4] + iVar6 >> 1) + iVar3;
            puVar7[-3] = (puVar7[-3] + iVar6 >> 1) + iVar3;
            puVar7[-2] = (puVar7[-2] + iVar6 >> 1) + iVar3;
            puVar7[-1] = (puVar7[-1] + iVar6 >> 1) + iVar3;
            *puVar7 = (iVar6 + *puVar7 >> 1) + iVar3;
            puVar7[1] = (iVar6 + puVar7[1] >> 1) + iVar3;
            puVar7[2] = (iVar6 + puVar7[2] >> 1) + iVar3;
            puVar7[3] = (iVar6 + puVar7[3] >> 1) + iVar3;
            puVar7[4] = (puVar7[4] + iVar6 >> 1) + iVar3;
            puVar7[5] = (puVar7[5] + iVar6 >> 1) + iVar3;
            puVar7[6] = (puVar7[6] + iVar6 >> 1) + iVar3;
            puVar7[7] = (puVar7[7] + iVar6 >> 1) + iVar3;
            lVar8 = lVar8 + -1;
            puVar7 = puVar7 + 0x10;
          } while (lVar8 != 0);
        }
      }
    }
  }
  pauVar10 = (param_1->literals).literals_o1;
  lVar8 = 0x10;
  do {
    if (iVar5 != 0) {
      uVar4 = rrSumOfHistogram(*pauVar10,0x100);
      iVar3 = OPTIMAL_RESCALE_ADD;
      iVar5 = c_histo_rescale_incremental_total;
      iVar6 = INCREMENTAL_RESCALE_BIAS;
      if ((uint)c_histo_rescale_incremental_total <= uVar4) {
        lVar9 = 0x10;
        puVar7 = *pauVar10 + 8;
        do {
          uVar4 = puVar7[-7];
          uVar1 = puVar7[-6];
          uVar2 = puVar7[-5];
          (*(uint (*) [256])(puVar7 + -8))[0] =
               (iVar6 + (*(uint (*) [256])(puVar7 + -8))[0] >> 1) + iVar3;
          puVar7[-7] = (iVar6 + uVar4 >> 1) + iVar3;
          puVar7[-6] = (iVar6 + uVar1 >> 1) + iVar3;
          puVar7[-5] = (iVar6 + uVar2 >> 1) + iVar3;
          puVar7[-4] = (puVar7[-4] + iVar6 >> 1) + iVar3;
          puVar7[-3] = (puVar7[-3] + iVar6 >> 1) + iVar3;
          puVar7[-2] = (puVar7[-2] + iVar6 >> 1) + iVar3;
          puVar7[-1] = (puVar7[-1] + iVar6 >> 1) + iVar3;
          *puVar7 = (iVar6 + *puVar7 >> 1) + iVar3;
          puVar7[1] = (iVar6 + puVar7[1] >> 1) + iVar3;
          puVar7[2] = (iVar6 + puVar7[2] >> 1) + iVar3;
          puVar7[3] = (iVar6 + puVar7[3] >> 1) + iVar3;
          puVar7[4] = (iVar6 + puVar7[4] >> 1) + iVar3;
          puVar7[5] = (iVar6 + puVar7[5] >> 1) + iVar3;
          puVar7[6] = (iVar6 + puVar7[6] >> 1) + iVar3;
          puVar7[7] = (iVar6 + puVar7[7] >> 1) + iVar3;
          lVar9 = lVar9 + -1;
          puVar7 = puVar7 + 0x10;
        } while (lVar9 != 0);
      }
    }
    pauVar10 = pauVar10 + 1;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  pauVar10 = (param_1->literals).literals_sub_andF;
  lVar8 = 0x10;
  do {
    if (iVar5 != 0) {
      uVar4 = rrSumOfHistogram(*pauVar10,0x100);
      iVar3 = OPTIMAL_RESCALE_ADD;
      iVar5 = c_histo_rescale_incremental_total;
      iVar6 = INCREMENTAL_RESCALE_BIAS;
      if ((uint)c_histo_rescale_incremental_total <= uVar4) {
        lVar9 = 0x10;
        puVar7 = *pauVar10 + 8;
        do {
          uVar4 = puVar7[-7];
          uVar1 = puVar7[-6];
          uVar2 = puVar7[-5];
          (*(uint (*) [256])(puVar7 + -8))[0] =
               (iVar6 + (*(uint (*) [256])(puVar7 + -8))[0] >> 1) + iVar3;
          puVar7[-7] = (iVar6 + uVar4 >> 1) + iVar3;
          puVar7[-6] = (iVar6 + uVar1 >> 1) + iVar3;
          puVar7[-5] = (iVar6 + uVar2 >> 1) + iVar3;
          puVar7[-4] = (puVar7[-4] + iVar6 >> 1) + iVar3;
          puVar7[-3] = (puVar7[-3] + iVar6 >> 1) + iVar3;
          puVar7[-2] = (puVar7[-2] + iVar6 >> 1) + iVar3;
          puVar7[-1] = (puVar7[-1] + iVar6 >> 1) + iVar3;
          *puVar7 = (iVar6 + *puVar7 >> 1) + iVar3;
          puVar7[1] = (iVar6 + puVar7[1] >> 1) + iVar3;
          puVar7[2] = (iVar6 + puVar7[2] >> 1) + iVar3;
          puVar7[3] = (iVar6 + puVar7[3] >> 1) + iVar3;
          puVar7[4] = (iVar6 + puVar7[4] >> 1) + iVar3;
          puVar7[5] = (iVar6 + puVar7[5] >> 1) + iVar3;
          puVar7[6] = (iVar6 + puVar7[6] >> 1) + iVar3;
          puVar7[7] = (iVar6 + puVar7[7] >> 1) + iVar3;
          lVar9 = lVar9 + -1;
          puVar7 = puVar7 + 0x10;
        } while (lVar9 != 0);
      }
    }
    pauVar10 = pauVar10 + 1;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  iVar6 = 0;
  if (iVar5 != 0) {
    uVar4 = rrSumOfHistogram(param_1->literals_sub,0x100);
    iVar3 = OPTIMAL_RESCALE_ADD;
    iVar6 = c_histo_rescale_incremental_total;
    iVar5 = INCREMENTAL_RESCALE_BIAS;
    if ((uint)c_histo_rescale_incremental_total <= uVar4) {
      lVar8 = 0x10;
      puVar7 = param_1->literals_sub + 8;
      do {
        puVar7[-8] = (iVar5 + puVar7[-8] >> 1) + iVar3;
        puVar7[-7] = (iVar5 + puVar7[-7] >> 1) + iVar3;
        puVar7[-6] = (iVar5 + puVar7[-6] >> 1) + iVar3;
        puVar7[-5] = (iVar5 + puVar7[-5] >> 1) + iVar3;
        puVar7[-4] = (puVar7[-4] + iVar5 >> 1) + iVar3;
        puVar7[-3] = (puVar7[-3] + iVar5 >> 1) + iVar3;
        puVar7[-2] = (puVar7[-2] + iVar5 >> 1) + iVar3;
        puVar7[-1] = (puVar7[-1] + iVar5 >> 1) + iVar3;
        *puVar7 = (iVar5 + *puVar7 >> 1) + iVar3;
        puVar7[1] = (iVar5 + puVar7[1] >> 1) + iVar3;
        puVar7[2] = (iVar5 + puVar7[2] >> 1) + iVar3;
        puVar7[3] = (iVar5 + puVar7[3] >> 1) + iVar3;
        puVar7[4] = (iVar5 + puVar7[4] >> 1) + iVar3;
        puVar7[5] = (iVar5 + puVar7[5] >> 1) + iVar3;
        puVar7[6] = (iVar5 + puVar7[6] >> 1) + iVar3;
        puVar7[7] = (iVar5 + puVar7[7] >> 1) + iVar3;
        lVar8 = lVar8 + -1;
        puVar7 = puVar7 + 0x10;
      } while (lVar8 != 0);
    }
    if (iVar6 != 0) {
      uVar4 = rrSumOfHistogram(param_1->offset_histo1,0x100);
      iVar3 = OPTIMAL_RESCALE_ADD;
      iVar6 = c_histo_rescale_incremental_total;
      iVar5 = INCREMENTAL_RESCALE_BIAS;
      if ((uint)c_histo_rescale_incremental_total <= uVar4) {
        lVar8 = 0x10;
        puVar7 = param_1->offset_histo1 + 8;
        do {
          puVar7[-8] = (iVar5 + puVar7[-8] >> 1) + iVar3;
          puVar7[-7] = (iVar5 + puVar7[-7] >> 1) + iVar3;
          puVar7[-6] = (iVar5 + puVar7[-6] >> 1) + iVar3;
          puVar7[-5] = (iVar5 + puVar7[-5] >> 1) + iVar3;
          puVar7[-4] = (iVar5 + puVar7[-4] >> 1) + iVar3;
          puVar7[-3] = (iVar5 + puVar7[-3] >> 1) + iVar3;
          puVar7[-2] = (iVar5 + puVar7[-2] >> 1) + iVar3;
          puVar7[-1] = (iVar5 + puVar7[-1] >> 1) + iVar3;
          *puVar7 = (iVar5 + *puVar7 >> 1) + iVar3;
          puVar7[1] = (iVar5 + puVar7[1] >> 1) + iVar3;
          puVar7[2] = (iVar5 + puVar7[2] >> 1) + iVar3;
          puVar7[3] = (iVar5 + puVar7[3] >> 1) + iVar3;
          puVar7[4] = (iVar5 + puVar7[4] >> 1) + iVar3;
          puVar7[5] = (iVar5 + puVar7[5] >> 1) + iVar3;
          puVar7[6] = (iVar5 + puVar7[6] >> 1) + iVar3;
          puVar7[7] = (iVar5 + puVar7[7] >> 1) + iVar3;
          lVar8 = lVar8 + -1;
          puVar7 = puVar7 + 0x10;
        } while (lVar8 != 0);
      }
    }
  }
  if (1 < param_1->offset_alt_modulo) {
    iVar5 = 0;
    if (iVar6 == 0) goto LAB_14f3643b0;
    uVar4 = rrSumOfHistogram(param_1->offset_histo2,0x100);
    iVar3 = OPTIMAL_RESCALE_ADD;
    iVar6 = c_histo_rescale_incremental_total;
    iVar5 = INCREMENTAL_RESCALE_BIAS;
    if ((uint)c_histo_rescale_incremental_total <= uVar4) {
      lVar8 = 0x10;
      puVar7 = param_1->offset_histo2 + 8;
      do {
        puVar7[-8] = (puVar7[-8] + iVar5 >> 1) + iVar3;
        puVar7[-7] = (puVar7[-7] + iVar5 >> 1) + iVar3;
        puVar7[-6] = (puVar7[-6] + iVar5 >> 1) + iVar3;
        puVar7[-5] = (puVar7[-5] + iVar5 >> 1) + iVar3;
        puVar7[-4] = (iVar5 + puVar7[-4] >> 1) + iVar3;
        puVar7[-3] = (iVar5 + puVar7[-3] >> 1) + iVar3;
        puVar7[-2] = (iVar5 + puVar7[-2] >> 1) + iVar3;
        puVar7[-1] = (iVar5 + puVar7[-1] >> 1) + iVar3;
        *puVar7 = (*puVar7 + iVar5 >> 1) + iVar3;
        puVar7[1] = (puVar7[1] + iVar5 >> 1) + iVar3;
        puVar7[2] = (puVar7[2] + iVar5 >> 1) + iVar3;
        puVar7[3] = (puVar7[3] + iVar5 >> 1) + iVar3;
        puVar7[4] = (iVar5 + puVar7[4] >> 1) + iVar3;
        puVar7[5] = (iVar5 + puVar7[5] >> 1) + iVar3;
        puVar7[6] = (iVar5 + puVar7[6] >> 1) + iVar3;
        puVar7[7] = (iVar5 + puVar7[7] >> 1) + iVar3;
        lVar8 = lVar8 + -1;
        puVar7 = puVar7 + 0x10;
      } while (lVar8 != 0);
    }
  }
  iVar5 = 0;
  if (iVar6 != 0) {
    uVar4 = rrSumOfHistogram(param_1->packet_histo,0x100);
    iVar3 = OPTIMAL_RESCALE_ADD;
    iVar5 = c_histo_rescale_incremental_total;
    iVar6 = INCREMENTAL_RESCALE_BIAS;
    if ((uint)c_histo_rescale_incremental_total <= uVar4) {
      lVar8 = 0x10;
      puVar7 = param_1->packet_histo + 8;
      do {
        puVar7[-8] = (iVar6 + puVar7[-8] >> 1) + iVar3;
        puVar7[-7] = (iVar6 + puVar7[-7] >> 1) + iVar3;
        puVar7[-6] = (iVar6 + puVar7[-6] >> 1) + iVar3;
        puVar7[-5] = (iVar6 + puVar7[-5] >> 1) + iVar3;
        puVar7[-4] = (iVar6 + puVar7[-4] >> 1) + iVar3;
        puVar7[-3] = (iVar6 + puVar7[-3] >> 1) + iVar3;
        puVar7[-2] = (iVar6 + puVar7[-2] >> 1) + iVar3;
        puVar7[-1] = (iVar6 + puVar7[-1] >> 1) + iVar3;
        *puVar7 = (iVar6 + *puVar7 >> 1) + iVar3;
        puVar7[1] = (iVar6 + puVar7[1] >> 1) + iVar3;
        puVar7[2] = (iVar6 + puVar7[2] >> 1) + iVar3;
        puVar7[3] = (iVar6 + puVar7[3] >> 1) + iVar3;
        puVar7[4] = (puVar7[4] + iVar6 >> 1) + iVar3;
        puVar7[5] = (puVar7[5] + iVar6 >> 1) + iVar3;
        puVar7[6] = (puVar7[6] + iVar6 >> 1) + iVar3;
        puVar7[7] = (puVar7[7] + iVar6 >> 1) + iVar3;
        lVar8 = lVar8 + -1;
        puVar7 = puVar7 + 0x10;
      } while (lVar8 != 0);
    }
  }
LAB_14f3643b0:
  pauVar10 = param_1->packet_pos_histo;
  lVar8 = 4;
  do {
    if (iVar5 != 0) {
      uVar4 = rrSumOfHistogram(*pauVar10,0x100);
      iVar3 = OPTIMAL_RESCALE_ADD;
      iVar5 = c_histo_rescale_incremental_total;
      iVar6 = INCREMENTAL_RESCALE_BIAS;
      if ((uint)c_histo_rescale_incremental_total <= uVar4) {
        lVar9 = 0x10;
        puVar7 = *pauVar10 + 8;
        do {
          uVar4 = puVar7[-7];
          uVar1 = puVar7[-6];
          uVar2 = puVar7[-5];
          (*(uint (*) [256])(puVar7 + -8))[0] =
               (iVar6 + (*(uint (*) [256])(puVar7 + -8))[0] >> 1) + iVar3;
          puVar7[-7] = (iVar6 + uVar4 >> 1) + iVar3;
          puVar7[-6] = (iVar6 + uVar1 >> 1) + iVar3;
          puVar7[-5] = (iVar6 + uVar2 >> 1) + iVar3;
          puVar7[-4] = (puVar7[-4] + iVar6 >> 1) + iVar3;
          puVar7[-3] = (puVar7[-3] + iVar6 >> 1) + iVar3;
          puVar7[-2] = (puVar7[-2] + iVar6 >> 1) + iVar3;
          puVar7[-1] = (puVar7[-1] + iVar6 >> 1) + iVar3;
          *puVar7 = (iVar6 + *puVar7 >> 1) + iVar3;
          puVar7[1] = (iVar6 + puVar7[1] >> 1) + iVar3;
          puVar7[2] = (iVar6 + puVar7[2] >> 1) + iVar3;
          puVar7[3] = (iVar6 + puVar7[3] >> 1) + iVar3;
          puVar7[4] = (iVar6 + puVar7[4] >> 1) + iVar3;
          puVar7[5] = (iVar6 + puVar7[5] >> 1) + iVar3;
          puVar7[6] = (iVar6 + puVar7[6] >> 1) + iVar3;
          puVar7[7] = (iVar6 + puVar7[7] >> 1) + iVar3;
          lVar9 = lVar9 + -1;
          puVar7 = puVar7 + 0x10;
        } while (lVar9 != 0);
      }
    }
    pauVar10 = pauVar10 + 1;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  if (iVar5 != 0) {
    uVar4 = rrSumOfHistogram(param_1->excess_ml_histo,0x100);
    iVar3 = OPTIMAL_RESCALE_ADD;
    iVar6 = c_histo_rescale_incremental_total;
    iVar5 = INCREMENTAL_RESCALE_BIAS;
    if ((uint)c_histo_rescale_incremental_total <= uVar4) {
      lVar8 = 0x10;
      puVar7 = param_1->excess_ml_histo + 8;
      do {
        puVar7[-8] = (iVar5 + puVar7[-8] >> 1) + iVar3;
        puVar7[-7] = (iVar5 + puVar7[-7] >> 1) + iVar3;
        puVar7[-6] = (iVar5 + puVar7[-6] >> 1) + iVar3;
        puVar7[-5] = (iVar5 + puVar7[-5] >> 1) + iVar3;
        puVar7[-4] = (puVar7[-4] + iVar5 >> 1) + iVar3;
        puVar7[-3] = (puVar7[-3] + iVar5 >> 1) + iVar3;
        puVar7[-2] = (puVar7[-2] + iVar5 >> 1) + iVar3;
        puVar7[-1] = (puVar7[-1] + iVar5 >> 1) + iVar3;
        *puVar7 = (iVar5 + *puVar7 >> 1) + iVar3;
        puVar7[1] = (iVar5 + puVar7[1] >> 1) + iVar3;
        puVar7[2] = (iVar5 + puVar7[2] >> 1) + iVar3;
        puVar7[3] = (iVar5 + puVar7[3] >> 1) + iVar3;
        puVar7[4] = (iVar5 + puVar7[4] >> 1) + iVar3;
        puVar7[5] = (iVar5 + puVar7[5] >> 1) + iVar3;
        puVar7[6] = (iVar5 + puVar7[6] >> 1) + iVar3;
        puVar7[7] = (iVar5 + puVar7[7] >> 1) + iVar3;
        lVar8 = lVar8 + -1;
        puVar7 = puVar7 + 0x10;
      } while (lVar8 != 0);
    }
    if (iVar6 != 0) {
      uVar4 = rrSumOfHistogram(param_1->excess_lrl_histo,0x100);
      iVar6 = OPTIMAL_RESCALE_ADD;
      iVar5 = INCREMENTAL_RESCALE_BIAS;
      if ((uint)c_histo_rescale_incremental_total <= uVar4) {
        puVar7 = param_1->excess_lrl_histo + 8;
        do {
          puVar7[-8] = (iVar5 + puVar7[-8] >> 1) + iVar6;
          puVar7[-7] = (iVar5 + puVar7[-7] >> 1) + iVar6;
          puVar7[-6] = (iVar5 + puVar7[-6] >> 1) + iVar6;
          puVar7[-5] = (iVar5 + puVar7[-5] >> 1) + iVar6;
          puVar7[-4] = (iVar5 + puVar7[-4] >> 1) + iVar6;
          puVar7[-3] = (iVar5 + puVar7[-3] >> 1) + iVar6;
          puVar7[-2] = (iVar5 + puVar7[-2] >> 1) + iVar6;
          puVar7[-1] = (iVar5 + puVar7[-1] >> 1) + iVar6;
          *puVar7 = (iVar5 + *puVar7 >> 1) + iVar6;
          puVar7[1] = (iVar5 + puVar7[1] >> 1) + iVar6;
          puVar7[2] = (iVar5 + puVar7[2] >> 1) + iVar6;
          puVar7[3] = (iVar5 + puVar7[3] >> 1) + iVar6;
          puVar7[4] = (iVar5 + puVar7[4] >> 1) + iVar6;
          puVar7[5] = (iVar5 + puVar7[5] >> 1) + iVar6;
          puVar7[6] = (iVar5 + puVar7[6] >> 1) + iVar6;
          puVar7[7] = (iVar5 + puVar7[7] >> 1) + iVar6;
          lVar11 = lVar11 + -1;
          puVar7 = puVar7 + 0x10;
        } while (lVar11 != 0);
      }
    }
  }
  return;
}

// optimal_update_passinfo @ 14f364640

void __cdecl
oo2::optimal_update_passinfo
          (vector_a<oo2::newlzhc_encoder_parse> *param_1,int param_2,newlzhc_passinfo *param_3,
          uchar *param_4)

{
  uint *puVar1;
  uchar uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  uint uVar8;
  uchar *puVar9;
  int iVar10;
  uchar *puVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  int *piVar18;
  longlong local_48;
  
  lVar17 = 0;
  if (0 < *(longlong *)&param_1->field_0x10) {
    local_48 = 0;
    iVar12 = optimal_update_codelens_histo_inc;
    do {
      piVar18 = (int *)(*(longlong *)param_1 + local_48);
      iVar3 = piVar18[1];
      lVar13 = (longlong)iVar3;
      iVar4 = piVar18[2];
      iVar7 = *piVar18;
      newLZHC_histo_literals(&param_3->literals,param_4,(longlong)param_2,lVar13,iVar7,iVar12);
      if (0 < iVar3) {
        puVar9 = param_4 + param_2;
        do {
          uVar2 = *puVar9;
          puVar11 = puVar9 + -(longlong)iVar7;
          puVar9 = puVar9 + 1;
          param_3->literals_sub[(byte)(uVar2 - *puVar11)] =
               param_3->literals_sub[(byte)(uVar2 - *puVar11)] + iVar12;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
      iVar7 = piVar18[3];
      iVar14 = iVar3;
      if (3 < iVar3) {
        iVar14 = 3;
      }
      if (iVar14 == 3) {
        iVar10 = 0xff;
        if (iVar3 + -3 < 0xff) {
          iVar10 = iVar3 + -3;
        }
        param_3->excess_lrl_histo[iVar10] = param_3->excess_lrl_histo[iVar10] + iVar12;
      }
      iVar10 = piVar18[2];
      iVar14 = iVar14 * 8;
      if (iVar10 == 1) {
        iVar7 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\newlzhc.cpp",0x1245,
                                   "oo2::optimal_update_passinfo","ml == 1");
        iVar12 = optimal_update_codelens_histo_inc;
        if (iVar7 != 0) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      else {
        iVar16 = iVar10 + -2;
        if (7 < iVar16) {
          iVar16 = 7;
        }
        uVar8 = piVar18[3];
        if (iVar7 < 1) {
          iVar14 = iVar14 + iVar16 + uVar8 * -0x20;
        }
        else {
          uVar5 = param_3->offset_alt_modulo;
          iVar14 = iVar14 + iVar16 + 0xe0;
          if (uVar5 == 0) {
            if ((int)uVar8 < 0x7fff08) {
              uVar8 = uVar8 + 0xf8;
              iVar7 = 0x1f;
              if (uVar8 != 0) {
                for (; uVar8 >> iVar7 == 0; iVar7 = iVar7 + -1) {
                }
              }
              param_3->offset_histo1[(byte)(((char)iVar7 + -8) * '\x10' | (byte)uVar8 & 0xf)] =
                   param_3->offset_histo1[(byte)(((char)iVar7 + -8) * '\x10' | (byte)uVar8 & 0xf)] +
                   iVar12;
            }
            else {
              iVar7 = 0x1f;
              if (uVar8 - 0x7eff00 != 0) {
                for (; uVar8 - 0x7eff00 >> iVar7 == 0; iVar7 = iVar7 + -1) {
                }
              }
              param_3->offset_histo1[(byte)((byte)iVar7 | 0xf0)] =
                   param_3->offset_histo1[(byte)((byte)iVar7 | 0xf0)] + iVar12;
            }
          }
          else if (uVar5 == 1) {
            uVar8 = uVar8 + 8;
            iVar7 = 0x1f;
            if (uVar8 != 0) {
              for (; uVar8 >> iVar7 == 0; iVar7 = iVar7 + -1) {
              }
            }
            param_3->offset_histo1
            [(ulonglong)(byte)((byte)(uVar8 >> ((byte)(iVar7 - 3U) & 0x3f)) ^ 8) |
             (ulonglong)(iVar7 - 3U & 0x1f) << 3] =
                 param_3->offset_histo1
                 [(ulonglong)(byte)((byte)(uVar8 >> ((byte)(iVar7 - 3U) & 0x3f)) ^ 8) |
                  (ulonglong)(iVar7 - 3U & 0x1f) << 3] + iVar12;
          }
          else {
            uVar15 = uVar8 / uVar5 + 8;
            iVar7 = 0x1f;
            if (uVar15 != 0) {
              for (; uVar15 >> iVar7 == 0; iVar7 = iVar7 + -1) {
              }
            }
            param_3->offset_histo1
            [(ulonglong)(byte)((byte)(uVar15 >> ((byte)(iVar7 - 3U) & 0x3f)) ^ 8) |
             (ulonglong)(iVar7 - 3U & 0x1f) << 3] =
                 param_3->offset_histo1
                 [(ulonglong)(byte)((byte)(uVar15 >> ((byte)(iVar7 - 3U) & 0x3f)) ^ 8) |
                  (ulonglong)(iVar7 - 3U & 0x1f) << 3] + iVar12;
            param_3->offset_histo2[(ulonglong)uVar8 % (ulonglong)uVar5 & 0xff] =
                 param_3->offset_histo2[(ulonglong)uVar8 % (ulonglong)uVar5 & 0xff] + iVar12;
          }
        }
        if (iVar16 == 7) {
          iVar7 = 0xff;
          if (iVar10 + -9 < 0xff) {
            iVar7 = iVar10 + -9;
          }
          param_3->excess_ml_histo[iVar7] = param_3->excess_ml_histo[iVar7] + iVar12;
        }
      }
      local_48 = local_48 + 0x10;
      lVar17 = lVar17 + 1;
      param_3->packet_histo[iVar14] = param_3->packet_histo[iVar14] + iVar12;
      puVar1 = param_3->packet_pos_histo[param_2 & 7] + iVar14;
      *puVar1 = *puVar1 + iVar12;
      param_2 = param_2 + iVar4 + iVar3;
    } while (lVar17 < *(longlong *)&param_1->field_0x10);
  }
  return;
}

// parse_to_packet @ 14f364900

int __cdecl oo2::parse_to_packet(newlzhc_encoder_parse *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1->ml + -2;
  iVar1 = param_1->lrl;
  if (3 < param_1->lrl) {
    iVar1 = 3;
  }
  if (7 < iVar2) {
    iVar2 = 7;
  }
  iVar2 = iVar2 + iVar1 * 8;
  if (param_1->offset < 1) {
    return iVar2 + param_1->offset * -0x20;
  }
  return iVar2 + 0xe0;
}

// prefetch_next @ 14f364950

void __thiscall
oo2::CTMF<unsigned_int,0,0,4>::prefetch_next(CTMF<unsigned_int,0,0,4> *this,uchar *param_1)

{
  byte bVar1;
  uint uVar2;
  
  this->m_next_ptr = param_1;
  bVar1 = (byte)this->m_table_size_bits & 0x1f;
  uVar2 = (uint)(this->m_hash_mul * *(longlong *)param_1 >> 0x20);
  uVar2 = uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
  this->m_next_hash = uVar2;
  this->m_next_row = (this->m_hash_table).m_ptr + (this->m_hash_row_mask & uVar2);
  return;
}

// provide_arena @ 14f364990

void __thiscall
oo2::vector_a<oo2::newlzhc_encoder_parse>::provide_arena
          (vector_a<oo2::newlzhc_encoder_parse> *this,void *param_1,ulong64 param_2)

{
  *(ulong64 *)&this->field_0x8 = param_2 >> 4;
  *(void **)this = param_1;
  return;
}

// provide_arena @ 14f3649b0

void __thiscall
oo2::vector_storage_a<oo2::newlzhc_encoder_parse>::provide_arena
          (vector_storage_a<oo2::newlzhc_encoder_parse> *this,void *param_1,ulong64 param_2)

{
  this->m_capacity = param_2 >> 4;
  this->m_data = param_1;
  return;
}

// ptr_sub_saturate @ 14f3649d0

uchar * __cdecl oo2::ptr_sub_saturate(uchar *param_1,long64 param_2,uchar *param_3)

{
  uchar *puVar1;
  
  puVar1 = param_1 + -param_2;
  if ((longlong)param_1 - (longlong)param_3 < param_2) {
    puVar1 = param_3;
  }
  return puVar1;
}

// push_back @ 14f364a00

void __thiscall
oo2::vector_flex<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>::
push_back(vector_flex<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>
          *this,newlzhc_encoder_parse *param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  
  lVar1 = *(longlong *)&this->field_0x10;
  if (*(ulonglong *)&this->field_0x8 < lVar1 + 1U) {
    iVar4 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h",0x3f,
                               "oo2::vector_storage_a<struct oo2::newlzhc_encoder_parse>::needmakefit"
                               ,"newsize <= m_capacity");
    if (iVar4 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(longlong *)&this->field_0x10 = *(longlong *)&this->field_0x10 + 1;
  puVar5 = (undefined8 *)(lVar1 * 0x10 + *(longlong *)this);
  if (puVar5 != (undefined8 *)0x0) {
    uVar3 = *(undefined8 *)&param_1->ml;
    *puVar5 = *(undefined8 *)param_1;
    puVar5[1] = uVar3;
  }
  return;
}

// push_back @ 14f364a80

void __thiscall
oo2::vector_flex<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>::
push_back(vector_flex<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>
          *this)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  undefined8 *puVar4;
  
  lVar1 = *(longlong *)&this->field_0x10;
  if (*(ulonglong *)&this->field_0x8 < lVar1 + 1U) {
    iVar3 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h",0x3f,
                               "oo2::vector_storage_a<struct oo2::newlzhc_encoder_parse>::needmakefit"
                               ,"newsize <= m_capacity");
    if (iVar3 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(longlong *)&this->field_0x10 = *(longlong *)&this->field_0x10 + 1;
  puVar4 = (undefined8 *)(lVar1 * 0x10 + *(longlong *)this);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 0;
    puVar4[1] = 0;
  }
  return;
}

// put_sub_literals @ 14f364b00

void __cdecl oo2::put_sub_literals(uchar *param_1,uchar *param_2,long64 param_3,long64 param_4)

{
  uchar *puVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  uchar uVar17;
  uchar uVar18;
  uchar uVar19;
  uchar uVar20;
  uchar uVar21;
  uchar uVar22;
  uchar uVar23;
  uchar uVar24;
  uchar uVar25;
  uchar uVar26;
  uchar uVar27;
  uchar uVar28;
  uchar uVar29;
  uchar uVar30;
  uchar uVar31;
  uchar uVar32;
  longlong lVar33;
  ulonglong uVar34;
  
  if (0xf < param_3) {
    uVar34 = (ulonglong)param_3 >> 4;
    param_3 = param_3 + uVar34 * -0x10;
    do {
      uVar2 = *param_2;
      uVar3 = param_2[1];
      uVar4 = param_2[2];
      uVar5 = param_2[3];
      uVar6 = param_2[4];
      uVar7 = param_2[5];
      uVar8 = param_2[6];
      uVar9 = param_2[7];
      uVar10 = param_2[8];
      uVar11 = param_2[9];
      uVar12 = param_2[10];
      uVar13 = param_2[0xb];
      uVar14 = param_2[0xc];
      uVar15 = param_2[0xd];
      uVar16 = param_2[0xe];
      uVar17 = param_2[0xf];
      puVar1 = param_2 + -param_4;
      uVar18 = puVar1[1];
      uVar19 = puVar1[2];
      uVar20 = puVar1[3];
      uVar21 = puVar1[4];
      uVar22 = puVar1[5];
      uVar23 = puVar1[6];
      uVar24 = puVar1[7];
      uVar25 = puVar1[8];
      uVar26 = puVar1[9];
      uVar27 = puVar1[10];
      uVar28 = puVar1[0xb];
      uVar29 = puVar1[0xc];
      uVar30 = puVar1[0xd];
      uVar31 = puVar1[0xe];
      uVar32 = puVar1[0xf];
      param_2 = param_2 + 0x10;
      *param_1 = uVar2 - *puVar1;
      param_1[1] = uVar3 - uVar18;
      param_1[2] = uVar4 - uVar19;
      param_1[3] = uVar5 - uVar20;
      param_1[4] = uVar6 - uVar21;
      param_1[5] = uVar7 - uVar22;
      param_1[6] = uVar8 - uVar23;
      param_1[7] = uVar9 - uVar24;
      param_1[8] = uVar10 - uVar25;
      param_1[9] = uVar11 - uVar26;
      param_1[10] = uVar12 - uVar27;
      param_1[0xb] = uVar13 - uVar28;
      param_1[0xc] = uVar14 - uVar29;
      param_1[0xd] = uVar15 - uVar30;
      param_1[0xe] = uVar16 - uVar31;
      param_1[0xf] = uVar17 - uVar32;
      param_1 = param_1 + 0x10;
      uVar34 = uVar34 - 1;
    } while (uVar34 != 0);
  }
  if (param_3 != 0) {
    lVar33 = (longlong)param_1 - (longlong)param_2;
    do {
      param_2[lVar33] = *param_2 - param_2[-param_4];
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// release @ 14f364b80

void __thiscall oo2::CTMF<unsigned_int,0,0,4>::release(CTMF<unsigned_int,0,0,4> *this)

{
  uint *puVar1;
  rrArenaAllocator *this_00;
  void *pvVar2;
  
  puVar1 = (this->m_hash_table).m_ptr;
  if (puVar1 != (uint *)0x0) {
    this_00 = this->m_hash_table_arena;
    if ((this_00 != (rrArenaAllocator *)0x0) &&
       (pvVar2 = (this->m_hash_table).m_alloc, pvVar2 != (void *)0x0)) {
      if (this_00->m_unorderedStart != 0) {
        rrArenaAllocator::Free
                  (this_00,pvVar2,(1L << ((byte)this->m_table_size_bits & 0x3f)) * 4 + 0x40);
      }
      (this->m_hash_table).m_alloc = (void *)0x0;
      (this->m_hash_table).m_ptr = (uint *)0x0;
      return;
    }
    (*g_fp_OodleCore_Plugin_Free)(puVar1);
    (this->m_hash_table).m_ptr = (uint *)0x0;
  }
  return;
}

// release @ 14f364c00

void __thiscall
oo2::vector_base<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>::
release(vector_base<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>
        *this)

{
  this->m_size = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  return;
}

// release @ 14f364c20

void __thiscall
oo2::vector_storage_a<oo2::newlzhc_encoder_parse>::release
          (vector_storage_a<oo2::newlzhc_encoder_parse> *this)

{
  this->m_data = (void *)0x0;
  this->m_capacity = 0;
  return;
}

// reset @ 14f364c30

void __thiscall oo2::CTMF<unsigned_int,0,0,4>::reset(CTMF<unsigned_int,0,0,4> *this)

{
  memset((this->m_hash_table).m_ptr,0,(1L << ((byte)this->m_table_size_bits & 0x3f)) << 2);
  return;
}

// rrAlignUp64 @ 14f364c60

ulong64 __cdecl oo2::rrAlignUp64(ulong64 param_1,long64 param_2)

{
  return (param_1 - 1) + param_2 & ~(param_2 - 1U);
}

// rrAlignUpA @ 14f364c80

long64 __cdecl oo2::rrAlignUpA(long64 param_1,long64 param_2)

{
  return param_1 + -1 + param_2 & ~(param_2 - 1U);
}

// rrAlignUpA @ 14f364ca0

ulong64 __cdecl oo2::rrAlignUpA(ulong64 param_1,long64 param_2)

{
  return (param_1 - 1) + param_2 & ~(param_2 - 1U);
}

// rrCPUx86_feature_present @ 14f364cc0

int __cdecl oo2::rrCPUx86_feature_present(uint param_1)

{
  return g_rrCPUx86_feature_flags & param_1;
}

// rrClz32 @ 14f364cd0

uint __cdecl oo2::rrClz32(uint param_1)

{
  int iVar1;
  
  iVar1 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  return 0x1f - iVar1;
}

// rrCtz32 @ 14f364cf0

uint __cdecl oo2::rrCtz32(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    for (; (param_1 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  return uVar1;
}

// rrCtz64 @ 14f364d00

uint __cdecl oo2::rrCtz64(ulong64 param_1)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (param_1 != 0) {
    for (; (param_1 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
    }
  }
  return (uint)lVar1;
}

// rrCtzBytes64 @ 14f364d10

uint __cdecl oo2::rrCtzBytes64(ulong64 param_1)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    for (; (param_1 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  return (uint)(uVar1 >> 3) & 0x1fffffff;
}

// rrGetBitLevel_V @ 14f364d20

uint __cdecl oo2::rrGetBitLevel_V(uint param_1)

{
  int iVar1;
  
  iVar1 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  if (param_1 != 0) {
    return iVar1 + 1;
  }
  return 0;
}

// rrGetBitLevel_V_NonZero @ 14f364d40

uint __cdecl oo2::rrGetBitLevel_V_NonZero(uint param_1)

{
  int iVar1;
  
  iVar1 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  return iVar1 + 1;
}

// rrPrintfKill @ 14f364d60

void __cdecl oo2::rrPrintfKill(char *param_1)

{
  return;
}

// rrPrintf_nop @ 14f364d80

void __cdecl oo2::rrPrintf_nop(void)

{
  return;
}

// rrPtrDiff32 @ 14f364d90

int __cdecl oo2::rrPtrDiff32(long64 param_1)

{
  return (int)param_1;
}

// rrPtrDiff @ 14f364da0

long64 __cdecl oo2::rrPtrDiff(long64 param_1)

{
  return param_1;
}

// rrVarBits_CountBits_EliasGamma @ 14f364db0

int __cdecl oo2::rrVarBits_CountBits_EliasGamma(uint param_1)

{
  int iVar1;
  
  iVar1 = 0x1f;
  if (param_1 + 1 != 0) {
    for (; param_1 + 1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  return iVar1 * 2 + 1;
}

// rrVarBits_CountBits_ExpGolomb @ 14f364dd0

int __cdecl oo2::rrVarBits_CountBits_ExpGolomb(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (param_1 >> ((byte)param_2 & 0x1f)) + 1;
  iVar1 = 0x1f;
  if (uVar2 != 0) {
    for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  return iVar1 * 2 + 1 + param_2;
}

// rrsimd_has_sse4 @ 14f364df0

int __cdecl oo2::rrsimd_has_sse4(void)

{
  return g_rrCPUx86_feature_flags & 8;
}

// second_hash_index @ 14f364e00

ulong64 __thiscall
oo2::CTMF<unsigned_int,0,0,4>::second_hash_index
          (CTMF<unsigned_int,0,0,4> *this,uint param_1,uchar *param_2)

{
  return 0;
}

// set_base @ 14f364e10

void __thiscall
oo2::CTMF<unsigned_int,0,0,4>::set_base(CTMF<unsigned_int,0,0,4> *this,void *param_1)

{
  this->m_base_ptr = param_1;
  return;
}

// set_base_and_preload @ 14f364e20

void __thiscall
oo2::CTMF<unsigned_int,0,0,4>::set_base_and_preload
          (CTMF<unsigned_int,0,0,4> *this,void *param_1,void *param_2,long64 param_3)

{
  uint *puVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  ulong64 uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  
  this->m_base_ptr = param_1;
  if (param_2 == param_1) {
    return;
  }
  if (fp_ThreadProfiler_Push == (_func___cdecl_ulong64_char_ptr_ulong64 *)0x0) {
    uVar6 = 0xffffffffffffffff;
  }
  else {
    uVar6 = (*fp_ThreadProfiler_Push)("ctmf_preload",0);
  }
  lVar9 = (longlong)param_2 - (longlong)param_1;
  if ((lVar9 < 1) &&
     (iVar4 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\ctmf.h",0xda,
                                 "oo2::CTMF<unsigned int,0,0,4>::set_base_and_preload",
                                 "preload_len > 0"), iVar4 != 0)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_3 < lVar9) {
    param_1 = (void *)((longlong)param_2 - param_3);
    lVar9 = param_3;
  }
  lVar8 = 2;
  if (2 < lVar9 >> 0x12) {
    lVar8 = lVar9 >> 0x12;
  }
  lVar9 = (lVar9 / 2) / lVar8;
  this->m_next_ptr = param_1;
  bVar3 = (byte)this->m_table_size_bits & 0x1f;
  uVar7 = (uint)(*(longlong *)param_1 * this->m_hash_mul >> 0x20);
  uVar7 = uVar7 << bVar3 | uVar7 >> 0x20 - bVar3;
  this->m_next_hash = uVar7;
  this->m_next_row = (this->m_hash_table).m_ptr + (uVar7 & this->m_hash_row_mask);
  do {
    lVar9 = lVar9 + -1;
    if (lVar9 < 1) {
      if (param_2 <= param_1) {
        if (fp_ThreadProfiler_Pop == (_func___cdecl_void_ulong64 *)0x0) {
          return;
        }
        (*fp_ThreadProfiler_Pop)(uVar6);
        return;
      }
      lVar8 = lVar8 >> 1;
      if ((lVar8 < 1) &&
         (iVar4 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\ctmf.h",0xed,
                                     "oo2::CTMF<unsigned int,0,0,4>::set_base_and_preload",
                                     "step >= 1"), iVar4 != 0)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar9 = ((longlong)param_2 - (longlong)param_1) / lVar8;
      if (1 < lVar8) {
        lVar9 = lVar9 / 2;
      }
    }
    iVar4 = (int)param_1;
    puVar1 = this->m_next_row;
    uVar7 = this->m_next_hash;
    param_1 = (void *)((longlong)param_1 + lVar8);
    this->m_next_ptr = param_1;
    bVar3 = (byte)this->m_table_size_bits & 0x1f;
    uVar5 = (uint)(*(longlong *)param_1 * this->m_hash_mul >> 0x20);
    uVar5 = uVar5 << bVar3 | uVar5 >> 0x20 - bVar3;
    this->m_next_hash = uVar5;
    this->m_next_row = (this->m_hash_table).m_ptr + (uVar5 & this->m_hash_row_mask);
    *puVar1 = (uVar7 ^ iVar4 - *(int *)&this->m_base_ptr) & 0x3ffffff ^ uVar7;
  } while( true );
}

// set_next @ 14f365020

void __thiscall
oo2::CTMF<unsigned_int,0,0,4>::set_next(CTMF<unsigned_int,0,0,4> *this,uchar *param_1)

{
  byte bVar1;
  uint uVar2;
  
  this->m_next_ptr = param_1;
  bVar1 = (byte)this->m_table_size_bits & 0x1f;
  uVar2 = (uint)(this->m_hash_mul * *(longlong *)param_1 >> 0x20);
  uVar2 = uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
  this->m_next_hash = uVar2;
  this->m_next_row = (this->m_hash_table).m_ptr + (this->m_hash_row_mask & uVar2);
  return;
}

// shrink @ 14f365060

void __thiscall
oo2::vector_base<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>::
shrink(vector_base<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>
       *this,ulong64 param_1)

{
  this->m_size = param_1;
  return;
}

// size32 @ 14f365070

int __thiscall
oo2::vector_flex<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>::
size32(vector_flex<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>
       *this)

{
  return *(int *)&this->field_0x10;
}

// size @ 14f365080

ulong64 __thiscall
oo2::vector_base<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>::
size(vector_base<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>
     *this)

{
  return this->m_size;
}

// size @ 14f365090

ulong64 __thiscall
oo2::vector_flex<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>::
size(vector_flex<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>
     *this)

{
  return *(ulong64 *)&this->field_0x10;
}

// size @ 14f3650a0

long64 __thiscall oo2::newlz_scratchblock::size(newlz_scratchblock *this)

{
  return this->m_size;
}

// sizea @ 14f3650b0

long64 __thiscall
oo2::vector_flex<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>::
sizea(vector_flex<oo2::newlzhc_encoder_parse,oo2::vector_storage_a<oo2::newlzhc_encoder_parse>_>
      *this)

{
  return *(long64 *)&this->field_0x10;
}

// speedfit_estimate_entropy_array_time @ 14f3650c0

float __cdecl oo2::speedfit_estimate_entropy_array_time(OodleSpeedFit *param_1,long64 param_2)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014f3650db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (*param_1->huff3)(param_2,0x80,0x14,__real_40c00000);
  return fVar1;
}

// step_and_insert @ 14f3650f0

void __thiscall
oo2::CTMF<unsigned_int,0,0,4>::step_and_insert
          (CTMF<unsigned_int,0,0,4> *this,uchar *param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  ulong64 uVar7;
  longlong lVar8;
  int iVar9;
  
  plVar3 = (longlong *)this->m_next_ptr;
  plVar1 = (longlong *)(param_1 + param_2);
  if (plVar3 < plVar1) {
    iVar2 = *(int *)&this->m_base_ptr;
    *this->m_next_row = ((int)plVar3 - iVar2 ^ this->m_next_hash) & 0x3ffffff ^ this->m_next_hash;
    iVar9 = (*(int *)&this->m_next_ptr - (int)param_1) + 1;
    if (iVar9 < param_2) {
      lVar8 = (longlong)iVar9;
      do {
        plVar3 = (longlong *)(param_1 + lVar8);
        uVar6 = ((int)param_1 - iVar2) + iVar9;
        iVar9 = iVar9 * 2;
        lVar8 = lVar8 * 2;
        bVar4 = (byte)this->m_table_size_bits & 0x1f;
        uVar5 = (uint)(*plVar3 * this->m_hash_mul >> 0x20);
        uVar5 = uVar5 << bVar4 | uVar5 >> 0x20 - bVar4;
        (this->m_hash_table).m_ptr[this->m_hash_row_mask & uVar5] =
             (uVar6 ^ uVar5) & 0x3ffffff ^ uVar5;
      } while (iVar9 < param_2);
    }
    uVar7 = this->m_hash_mul;
    bVar4 = (byte)this->m_table_size_bits;
    this->m_next_ptr = (uchar *)plVar1;
  }
  else {
    if (plVar3 == plVar1) {
      return;
    }
    uVar7 = this->m_hash_mul;
    this->m_next_ptr = (uchar *)plVar1;
    bVar4 = (byte)this->m_table_size_bits;
  }
  uVar6 = (uint)(uVar7 * *plVar1 >> 0x20);
  uVar6 = uVar6 << (bVar4 & 0x1f) | uVar6 >> 0x20 - (bVar4 & 0x1f);
  this->m_next_hash = uVar6;
  this->m_next_row = (this->m_hash_table).m_ptr + (this->m_hash_row_mask & uVar6);
  return;
}

// try_lo_arrival_tll @ 14f3651e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl
oo2::try_lo_arrival_tll
          (newlzhc_optimal_arrival_tll *param_1,int param_2,int param_3,uchar *param_4,int *param_5,
          int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,
          newLZHC_LOs_NoPad *param_12,newlzhc_codecosts *param_13)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  newlzhc_optimal_arrival_tll *pnVar12;
  int iVar13;
  int iVar14;
  byte *pbVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  undefined1 auStack_128 [40];
  int local_100;
  int local_f8;
  undefined4 uStack_f4;
  int local_f0;
  undefined4 uStack_ec;
  uchar *local_e8;
  int local_e0;
  int *local_d8;
  newlzhc_optimal_arrival_tll *local_d0;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  int local_a0 [4];
  int local_90;
  int local_8c;
  int local_88;
  ulonglong local_80;
  
  local_80 = __security_cookie.value ^ (ulonglong)auStack_128;
  uVar10 = (ulonglong)(uint)(param_6 - param_8);
  local_d8 = param_5;
  iVar14 = param_10 + -9;
  _local_f8 = CONCAT44(uStack_f4,param_6);
  _local_f0 = CONCAT44(uStack_ec,param_11);
  iVar17 = (param_9 + param_11 * 4) * 8;
  local_100 = param_3;
  local_e8 = param_4;
  local_d0 = param_1;
  if (iVar14 < 0) {
    iVar14 = param_13->codecost_literal
             [(ulonglong)(param_13->packet_pos_mask & param_6 - param_8) + 0xf]
             [(longlong)(iVar17 + param_10) + 0xfe];
  }
  else {
    if (iVar14 < 0xff) {
      iVar14 = param_13->codecost_offset2[(longlong)param_10 + 0xf7];
    }
    else {
      iVar14 = cost_excess_huge(iVar14,param_13->codecost_excess_ml);
      param_11 = local_f0;
    }
    iVar14 = param_13->codecost_packet[(ulonglong)param_13->packet_pos_mask & uVar10 & 0xffffffff]
             [(longlong)iVar17 + 7] + iVar14;
  }
  iVar14 = param_7 + iVar14;
  local_e0 = iVar14;
  if (param_2 == 1) {
    pnVar12 = param_1 + (param_6 + param_10);
    if (iVar14 < pnVar12->cost) {
      pnVar12->lrl = param_8;
      pnVar12->cost = iVar14;
      pnVar12->ml = param_10;
      newLZHC_LOs_NoPad::SetMTF(&pnVar12->los,param_12,param_11);
      (pnVar12->field4_0x28).is_twostep = 0;
      pnVar12->prev_index = local_100;
    }
  }
  else {
    pnVar12 = param_1 + (param_6 + param_10) * param_2;
    if (iVar14 < pnVar12->cost) {
      pnVar12->lrl = param_8;
      pnVar12->cost = iVar14;
      pnVar12->ml = param_10;
      newLZHC_LOs_NoPad::SetMTF(&pnVar12->los,param_12,param_11);
      pnVar12->prev_index = local_100;
      (pnVar12->field4_0x28).is_twostep = 0;
    }
    lVar9 = (longlong)local_f0;
    iVar13 = 1;
    lVar2 = lVar9 * 4;
    lVar18 = -(longlong)param_12->lasts[lVar9];
    iVar16 = (param_10 + 1 + local_f8) * param_2;
    lVar1 = (longlong)local_f8 + (longlong)param_10;
    local_d8 = local_d8 + lVar1 + 1;
    pbVar15 = local_e8 + lVar1;
    iVar17 = iVar14;
    do {
      iVar14 = 0;
      switch(param_13->chunktype) {
      case 0:
        iVar14 = param_13->codecost_literal[0][(byte)(*pbVar15 - pbVar15[lVar18])];
        break;
      case 1:
        iVar14 = param_13->codecost_literal[0][*pbVar15];
        break;
      case 2:
        uVar11 = (ulonglong)(byte)(*pbVar15 - pbVar15[lVar18]);
        uVar10 = 0;
        if (iVar13 != 1) {
          uVar10 = 0x100;
        }
        goto LAB_14f36549f;
      case 3:
        bVar7 = *pbVar15 - pbVar15[lVar18];
        uVar8 = -(int)local_e8 + (int)pbVar15 & 3;
        goto LAB_14f36549b;
      case 4:
        uVar11 = (ulonglong)(pbVar15[-1] >> 4) << 8;
        uVar10 = (ulonglong)*pbVar15;
        goto LAB_14f36549f;
      case 5:
        bVar7 = *pbVar15 - pbVar15[lVar18];
        uVar8 = -(int)local_e8 + (int)pbVar15 & 0xf;
LAB_14f36549b:
        uVar11 = (ulonglong)bVar7;
        uVar10 = (ulonglong)uVar8 << 8;
LAB_14f36549f:
        iVar14 = param_13->codecost_literal[0][uVar11 + uVar10];
      }
      iVar17 = iVar17 + iVar14;
      pnVar12 = local_d0 + (iVar16 + iVar13);
      if (iVar17 < pnVar12->cost) {
        pnVar12->lrl = param_8;
        pnVar12->cost = iVar17;
        pnVar12->ml = param_10;
        local_a0[0] = param_12->lasts[0];
        local_a0[1] = param_12->lasts[1];
        local_a0[2] = param_12->lasts[2];
        local_a0[3] = param_12->lasts[3];
        local_90 = param_12->lasts[4];
        local_8c = param_12->lasts[5];
        local_88 = param_12->lasts[6];
        uVar3 = *(undefined8 *)(auStack_c0 + lVar2);
        uVar4 = *(undefined8 *)(auStack_b8 + lVar2);
        (pnVar12->los).lasts[0] = local_a0[lVar9];
        uVar5 = *(undefined8 *)(auStack_b0 + lVar2);
        uVar6 = *(undefined8 *)((longlong)&uStack_a8 + lVar2);
        (pnVar12->field4_0x28).is_twostep = 0;
        *(undefined8 *)(auStack_c0 + lVar2 + 4) = uVar3;
        *(undefined8 *)(auStack_b8 + lVar2 + 4) = uVar4;
        *(undefined8 *)(auStack_b0 + lVar2 + 4) = uVar5;
        *(undefined8 *)(local_a0 + lVar9 + -1) = uVar6;
        (pnVar12->los).lasts[1] = local_a0[1];
        (pnVar12->los).lasts[2] = local_a0[2];
        (pnVar12->los).lasts[3] = local_a0[3];
        (pnVar12->los).lasts[4] = local_90;
        (pnVar12->los).lasts[5] = local_8c;
        (pnVar12->los).lasts[6] = local_88;
        pnVar12->prev_index = local_100;
        if (iVar13 == param_2 + -1) {
          *local_d8 = iVar13;
        }
      }
      iVar13 = iVar13 + 1;
      iVar16 = iVar16 + param_2;
      local_d8 = local_d8 + 1;
      pbVar15 = pbVar15 + 1;
      iVar14 = local_e0;
    } while (iVar13 < param_2);
  }
  return iVar14;
}

// try_match_arrival_tll @ 14f3655e0

int __cdecl
oo2::try_match_arrival_tll
          (newlzhc_optimal_arrival_tll *param_1,int param_2,int param_3,uchar *param_4,int *param_5,
          int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,
          newLZHC_LOs_NoPad *param_12,newlzhc_codecosts *param_13)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int *piVar10;
  newlzhc_optimal_arrival_tll *pnVar11;
  byte *pbVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  
  uVar15 = (ulonglong)param_10;
  uVar3 = (ulonglong)(uint)(param_6 - param_8);
  iVar5 = param_10 + -9;
  iVar13 = param_9 * 8;
  if (iVar5 < 0) {
    iVar5 = param_13->codecost_packet[param_13->packet_pos_mask & param_6 - param_8]
            [(longlong)(iVar13 + param_10) + 0xde];
  }
  else {
    if (iVar5 < 0xff) {
      iVar5 = param_13->codecost_offset2[uVar15 + 0xf7];
    }
    else {
      iVar5 = cost_excess_huge(iVar5,param_13->codecost_excess_ml);
    }
    iVar5 = param_13->codecost_packet[(ulonglong)param_13->packet_pos_mask & uVar3 & 0xffffffff]
            [(longlong)iVar13 + 0xe7] + iVar5;
  }
  iVar13 = param_6 + param_10;
  iVar5 = param_7 + iVar5;
  if (param_2 == 1) {
    pnVar11 = param_1 + iVar13;
    if (iVar5 < pnVar11->cost) {
      pnVar11->cost = iVar5;
      pnVar11->ml = param_10;
      pnVar11->lrl = param_8;
      (pnVar11->los).lasts[0] = param_11;
      (pnVar11->los).lasts[1] = param_12->lasts[0];
      (pnVar11->los).lasts[2] = param_12->lasts[1];
      (pnVar11->los).lasts[3] = param_12->lasts[2];
      (pnVar11->los).lasts[4] = param_12->lasts[3];
      (pnVar11->los).lasts[5] = param_12->lasts[4];
      (pnVar11->los).lasts[6] = param_12->lasts[5];
      (pnVar11->field4_0x28).is_twostep = 0;
      pnVar11->prev_index = param_3;
    }
  }
  else {
    pnVar11 = param_1 + iVar13 * param_2;
    if (iVar5 < pnVar11->cost) {
      pnVar11->cost = iVar5;
      pnVar11->ml = param_10;
      pnVar11->lrl = param_8;
      (pnVar11->los).lasts[0] = param_11;
      (pnVar11->los).lasts[1] = param_12->lasts[0];
      (pnVar11->los).lasts[2] = param_12->lasts[1];
      (pnVar11->los).lasts[3] = param_12->lasts[2];
      (pnVar11->los).lasts[4] = param_12->lasts[3];
      (pnVar11->los).lasts[5] = param_12->lasts[4];
      (pnVar11->los).lasts[6] = param_12->lasts[5];
      (pnVar11->field4_0x28).is_twostep = 0;
      pnVar11->prev_index = param_3;
    }
    lVar2 = (longlong)param_6 + uVar15;
    lVar1 = (longlong)param_11;
    iVar14 = (iVar13 + 1) * param_2;
    pbVar12 = param_4 + lVar2;
    iVar9 = 1;
    piVar10 = param_5 + lVar2 + 1;
    lVar2 = (1 - (longlong)param_6) - uVar15;
    iVar13 = iVar5;
    do {
      iVar7 = 0;
      switch(param_13->chunktype) {
      case 0:
        uVar3 = (ulonglong)(byte)(*pbVar12 - pbVar12[-lVar1]);
        goto LAB_14f365908;
      case 1:
        uVar3 = (ulonglong)*pbVar12;
        goto LAB_14f365908;
      case 2:
        lVar8 = 0;
        if (iVar9 != 1) {
          lVar8 = 0x100;
        }
        iVar7 = param_13->codecost_literal[0][(ulonglong)(byte)(*pbVar12 - pbVar12[-lVar1]) + lVar8]
        ;
        break;
      case 3:
        lVar8 = -(longlong)param_4 + (longlong)pbVar12;
        bVar4 = *pbVar12 - param_4[lVar8 - lVar1];
        uVar6 = (uint)lVar8 & 3;
        goto LAB_14f3658fe;
      case 4:
        iVar7 = param_13->codecost_literal[pbVar12[-1] >> 4][*pbVar12];
        break;
      case 5:
        lVar8 = -(longlong)param_4 + (longlong)pbVar12;
        bVar4 = *pbVar12 - param_4[lVar8 - lVar1];
        uVar15 = (ulonglong)(uint)param_10;
        uVar6 = (uint)lVar8 & 0xf;
LAB_14f3658fe:
        uVar3 = (ulonglong)bVar4 + (ulonglong)uVar6 * 0x100;
LAB_14f365908:
        iVar7 = param_13->codecost_literal[0][uVar3];
      }
      iVar13 = iVar13 + iVar7;
      pnVar11 = param_1 + (iVar14 + iVar9);
      if (iVar13 < pnVar11->cost) {
        (pnVar11->los).lasts[0] = param_11;
        pnVar11->cost = iVar13;
        pnVar11->ml = (int)uVar15;
        pnVar11->lrl = param_8;
        (pnVar11->los).lasts[1] = param_12->lasts[0];
        (pnVar11->los).lasts[2] = param_12->lasts[1];
        (pnVar11->los).lasts[3] = param_12->lasts[2];
        (pnVar11->los).lasts[4] = param_12->lasts[3];
        (pnVar11->los).lasts[5] = param_12->lasts[4];
        (pnVar11->los).lasts[6] = param_12->lasts[5];
        pnVar11->prev_index = param_3;
        (pnVar11->field4_0x28).is_twostep = 0;
        if (iVar9 == param_2 + -1) {
          *piVar10 = param_2 + -1;
        }
      }
      pbVar12 = pbVar12 + 1;
      iVar9 = iVar9 + 1;
      iVar14 = iVar14 + param_2;
      piVar10 = piVar10 + 1;
    } while ((longlong)(pbVar12 + (lVar2 - (longlong)param_4)) < (longlong)param_2);
  }
  return iVar5;
}

// try_two_step_arrival_tll @ 14f365a00

void __cdecl
oo2::try_two_step_arrival_tll
          (newlzhc_optimal_arrival_tll *param_1,int param_2,int param_3,uchar *param_4,
          uchar *param_5,int *param_6,int param_7,int param_8,int param_9,int param_10,int param_11,
          int param_12,newLZHC_LOs_NoPad *param_13,newlzhc_codecosts *param_14)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  ulonglong *puVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  newlzhc_optimal_arrival_tll *pnVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  
  lVar15 = (longlong)param_7;
  puVar1 = (ulonglong *)(param_4 + lVar15 + 3);
  lVar3 = -(longlong)param_12;
  puVar5 = puVar1;
  do {
    if (param_5 + -8 < puVar5) {
      lVar14 = (longlong)puVar5 - (longlong)puVar1;
      iVar12 = (int)lVar14;
      for (; (puVar5 < param_5 &&
             (iVar12 = (int)lVar14, (char)*puVar5 == *(char *)(lVar3 + (longlong)puVar5)));
          puVar5 = (ulonglong *)((longlong)puVar5 + 1)) {
        lVar14 = lVar14 + 1;
        iVar12 = (int)lVar14;
      }
LAB_14f365a99:
      uVar10 = 0;
      if (param_4[lVar15 + 2] == param_4[(longlong)~param_12 + 3 + lVar15]) {
        uVar10 = (param_4[lVar15 + 1] == param_4[(longlong)(-2 - param_12) + 3 + lVar15]) + 1;
      }
      iVar11 = 3 - uVar10;
      iVar12 = iVar12 + uVar10;
      iVar13 = iVar12;
      if ((param_12 < 8) && (iVar13 = param_12, iVar12 < param_12)) {
        iVar13 = iVar12;
      }
      if (1 < iVar13) {
        iVar4 = newlzhc_cost_literals(param_4,lVar15,iVar11,(longlong)param_12,param_14,0);
        iVar4 = iVar4 + param_8;
        iVar12 = iVar11;
        if (2 < iVar11) {
          iVar12 = 3;
          iVar4 = iVar4 + *(int *)((longlong)param_14 + (0x1b03 - (ulonglong)uVar10) * 4);
        }
        iVar6 = iVar13 + -9;
        iVar12 = iVar12 * 8;
        if (iVar6 < 0) {
          iVar6 = param_14->codecost_literal[(ulonglong)(param_14->packet_pos_mask & param_7) + 0xf]
                  [(longlong)(iVar12 + iVar13) + 0xfe];
        }
        else {
          if (iVar6 < 0xff) {
            iVar6 = param_14->codecost_offset2[(longlong)iVar13 + 0xf7];
          }
          else {
            iVar6 = cost_excess_huge(iVar6,param_14->codecost_excess_ml);
          }
          iVar6 = iVar6 + param_14->codecost_packet[param_14->packet_pos_mask & param_7]
                          [(longlong)iVar12 + 7];
        }
        iVar8 = iVar11 + iVar13 + param_7;
        iVar12 = *param_6;
        if (*param_6 <= iVar8) {
          iVar12 = iVar8;
        }
        *param_6 = iVar12;
        pnVar9 = param_1 + iVar8 * param_2;
        if (iVar4 + iVar6 < pnVar9->cost) {
          pnVar9->ml = param_9;
          pnVar9->lrl = param_10;
          pnVar9->cost = iVar4 + iVar6;
          if (param_11 < 0) {
            (pnVar9->los).lasts[0] = param_12;
            (pnVar9->los).lasts[1] = param_13->lasts[0];
            (pnVar9->los).lasts[2] = param_13->lasts[1];
            (pnVar9->los).lasts[3] = param_13->lasts[2];
            (pnVar9->los).lasts[4] = param_13->lasts[3];
            (pnVar9->los).lasts[5] = param_13->lasts[4];
            (pnVar9->los).lasts[6] = param_13->lasts[5];
          }
          else {
            newLZHC_LOs_NoPad::SetMTF(&pnVar9->los,param_13,param_11);
          }
          (pnVar9->field4_0x28).twostep.lrl = (byte)iVar11;
          (pnVar9->field4_0x28).is_twostep = (pnVar9->field4_0x28).is_twostep & 0xff;
          (pnVar9->field4_0x28).is_twostep = (pnVar9->field4_0x28).is_twostep | iVar13 << 8;
          pnVar9->prev_index = param_3;
        }
      }
      return;
    }
    uVar7 = *(ulonglong *)(lVar3 + (longlong)puVar5) ^ *puVar5;
    if (uVar7 != 0) {
      uVar2 = 0;
      if (uVar7 != 0) {
        for (; (uVar7 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
        }
      }
      iVar12 = ((int)(uVar2 >> 3) - (int)puVar1) + (int)puVar5;
      goto LAB_14f365a99;
    }
    puVar5 = puVar5 + 1;
  } while( true );
}

// dtor$0 @ 150284500

void `oo2::newLZHC_encode_chunk<oo2::CTMF<unsigned_int,1,0,4>,0,1,0>'::__l1::dtor_0
               (undefined8 param_1,longlong param_2)

{
  oo2::vector_a<oo2::newlzhc_encoder_parse>::~vector_a<oo2::newlzhc_encoder_parse>
            ((vector_a<oo2::newlzhc_encoder_parse> *)((param_2 + 0xc0U & 0xffffffffffffffc0) + 0x78)
            );
  return;
}

// dtor$1 @ 150284540

void `oo2::newLZHC_encode_chunk<oo2::CTMF<unsigned_int,1,0,4>,0,1,0>'::__l1::dtor_1
               (undefined8 param_1,longlong param_2)

{
  oo2::rrScopeArenaAlloc::~rrScopeArenaAlloc
            ((rrScopeArenaAlloc *)((param_2 + 0xc0U & 0xffffffffffffffc0) + 0xf8));
  return;
}

// dtor$0 @ 150284580

void `oo2::newLZHC_encode_chunk<oo2::CTMF<unsigned_int,2,8,4>,2,1,0>'::__l1::dtor_0
               (undefined8 param_1,longlong param_2)

{
  oo2::vector_a<oo2::newlzhc_encoder_parse>::~vector_a<oo2::newlzhc_encoder_parse>
            ((vector_a<oo2::newlzhc_encoder_parse> *)((param_2 + 0xc0U & 0xffffffffffffffc0) + 0x88)
            );
  return;
}

// dtor$1 @ 1502845c0

void `oo2::newLZHC_encode_chunk<oo2::CTMF<unsigned_int,2,8,4>,2,1,0>'::__l1::dtor_1
               (undefined8 param_1,longlong param_2)

{
  oo2::rrScopeArenaAlloc::~rrScopeArenaAlloc
            ((rrScopeArenaAlloc *)((param_2 + 0xc0U & 0xffffffffffffffc0) + 0x108));
  return;
}

// dtor$0 @ 150284600

void `oo2::newLZHC_encode_chunk<oo2::CTMF<unsigned_int,3,0,4>,1,1,0>'::__l1::dtor_0
               (undefined8 param_1,longlong param_2)

{
  oo2::vector_a<oo2::newlzhc_encoder_parse>::~vector_a<oo2::newlzhc_encoder_parse>
            ((vector_a<oo2::newlzhc_encoder_parse> *)((param_2 + 0xc0U & 0xffffffffffffffc0) + 0x90)
            );
  return;
}

// dtor$1 @ 150284640

void `oo2::newLZHC_encode_chunk<oo2::CTMF<unsigned_int,3,0,4>,1,1,0>'::__l1::dtor_1
               (undefined8 param_1,longlong param_2)

{
  oo2::rrScopeArenaAlloc::~rrScopeArenaAlloc
            ((rrScopeArenaAlloc *)((param_2 + 0xc0U & 0xffffffffffffffc0) + 0x108));
  return;
}

// dtor$0 @ 150284680

void `oo2::newLZHC_encode_chunk<oo2::CTMF<unsigned_int,0,0,4>,0,1,5>'::__l1::dtor_0
               (undefined8 param_1,longlong param_2)

{
  oo2::vector_a<oo2::newlzhc_encoder_parse>::~vector_a<oo2::newlzhc_encoder_parse>
            ((vector_a<oo2::newlzhc_encoder_parse> *)((param_2 + 0xc0U & 0xffffffffffffffc0) + 0x78)
            );
  return;
}

// dtor$1 @ 1502846c0

void `oo2::newLZHC_encode_chunk<oo2::CTMF<unsigned_int,0,0,4>,0,1,5>'::__l1::dtor_1
               (undefined8 param_1,longlong param_2)

{
  oo2::rrScopeArenaAlloc::~rrScopeArenaAlloc
            ((rrScopeArenaAlloc *)((param_2 + 0xc0U & 0xffffffffffffffc0) + 0x110));
  return;
}

// dtor$0 @ 150284700

void `oo2::Leviathan_Compress'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  oo2::rrArenaAllocatorStateSaver::~rrArenaAllocatorStateSaver
            ((rrArenaAllocatorStateSaver *)(param_2 + 0x48));
  return;
}

// dtor$1 @ 150284720

/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

void `oo2::Leviathan_Compress'::__l1::dtor_1(undefined8 param_1,longlong param_2)

{
  oo2::newlz_vtable::~newlz_vtable((newlz_vtable *)(param_2 + 0x60));
  return;
}

// dtor$0 @ 150284740

void `oo2::newLZHC_encode_chunk_optimal_tll'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  oo2::ThreadProfileScope::~ThreadProfileScope
            ((ThreadProfileScope *)((param_2 + 0xd0U & 0xffffffffffffffc0) + 0x248));
  return;
}

// dtor$1 @ 150284780

void `oo2::newLZHC_encode_chunk_optimal_tll'::__l1::dtor_1(undefined8 param_1,longlong param_2)

{
  oo2::vector_a<oo2::newlzhc_encoder_parse>::~vector_a<oo2::newlzhc_encoder_parse>
            ((vector_a<oo2::newlzhc_encoder_parse> *)
             ((param_2 + 0xd0U & 0xffffffffffffffc0) + 0x1b0));
  return;
}

// dtor$2 @ 1502847c0

void `oo2::newLZHC_encode_chunk_optimal_tll'::__l1::dtor_2(undefined8 param_1,longlong param_2)

{
  oo2::vector_a<oo2::newlzhc_encoder_parse>::~vector_a<oo2::newlzhc_encoder_parse>
            ((vector_a<oo2::newlzhc_encoder_parse> *)
             ((param_2 + 0xd0U & 0xffffffffffffffc0) + 0x150));
  return;
}

// dtor$0 @ 150284800

void `oo2::newLZHC_put_parse'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  oo2::rrScopeArenaAlloc::~rrScopeArenaAlloc((rrScopeArenaAlloc *)(param_2 + 0x1a8));
  return;
}

// dtor$1 @ 150284820

void `oo2::newLZHC_put_parse'::__l1::dtor_1(undefined8 param_1,longlong param_2)

{
  oo2::rrScopeArenaAlloc::~rrScopeArenaAlloc((rrScopeArenaAlloc *)(param_2 + 0x1c8));
  return;
}

// dtor$0 @ 150284840

void `oo2::CTMF<unsigned_int,0,0,4>::set_base_and_preload'::__l1::dtor_0
               (undefined8 param_1,longlong param_2)

{
  oo2::ThreadProfileScope::~ThreadProfileScope((ThreadProfileScope *)(param_2 + 0x50));
  return;
}

