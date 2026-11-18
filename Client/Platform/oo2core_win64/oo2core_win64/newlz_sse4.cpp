// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2core_win64
// Functions: 10

// newLZ_decode_parse_raw_sse4 @ 14f3af300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
oo2::newLZ_decode_parse_raw_sse4
          (newLZ_chunk_arrays *param_1,uchar *param_2,uchar *param_3,uchar *param_4,uchar *param_5)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uchar *puVar5;
  ulonglong uVar6;
  uchar *puVar7;
  uchar *puVar8;
  byte *pbVar9;
  uint *puVar10;
  uchar *_Src;
  size_t _Size;
  ulonglong uVar11;
  byte *pbVar12;
  uint *puVar13;
  uchar *_Src_00;
  uchar *puVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auStack_238 [32];
  byte *local_218;
  uint *local_210;
  uchar *local_208;
  uchar *local_200;
  uint *local_1f8;
  long64 local_1f0;
  uchar local_120 [200];
  ulonglong local_58;
  
  auVar16 = ___xmm_fffffff8fffffff8fffffff8fffffff8;
  uVar4 = _UNK_150ae9808;
  uVar3 = ___xmm_00000003000000030000000300000003;
  local_58 = __security_cookie.value ^ (ulonglong)auStack_238;
  if ((longlong)param_4 - (longlong)param_3 < 0x10) {
    return false;
  }
  puVar13 = (uint *)param_1->offsets;
  local_1f0 = param_1->offsets_count;
  pbVar9 = param_1->packets;
  puVar10 = param_1->excesses;
  _Src = param_1->literals_ptr;
  local_218 = pbVar9 + param_1->packets_count;
  _Size = param_1->literals_count;
  local_200 = param_4 + -8;
  if (0x14f < (longlong)param_4 - (longlong)param_3) {
    param_3 = param_4 + -0x150;
  }
  local_210 = puVar10 + param_1->excesses_count;
  *(undefined8 *)local_210 = ___xmm_00000003000000030000000300000003;
  *(undefined8 *)(local_210 + 2) = uVar4;
  puVar14 = _Src + _Size;
  *(undefined8 *)(local_210 + 4) = uVar3;
  *(undefined8 *)(local_210 + 6) = uVar4;
  *(undefined8 *)(local_210 + 8) = uVar3;
  *(undefined8 *)(local_210 + 10) = uVar4;
  *(undefined8 *)(local_210 + 0xc) = uVar3;
  *(undefined8 *)(local_210 + 0xe) = uVar4;
  if (200 < (longlong)_Size) {
    _Size = 200;
  }
  _Src_00 = puVar14 + -_Size;
  local_208 = param_4;
  local_1f8 = puVar13;
  memcpy(local_120 + -_Size,_Src_00,_Size);
  memset(local_120,0,200);
  while (pbVar9 < local_218) {
    if (param_3 <= param_2) goto LAB_14f3af660;
    if (_Src_00 <= _Src) {
      if (puVar14 < _Src) {
        return false;
      }
      _Src_00 = local_120;
      _Src = _Src + (longlong)(local_120 + -(longlong)puVar14);
      puVar14 = local_120;
    }
    pbVar12 = local_218;
    if (7 < (longlong)local_218 - (longlong)pbVar9) {
      pbVar12 = pbVar9 + 8;
    }
    if (pbVar9 < pbVar12) {
      do {
        bVar1 = *pbVar9;
        auVar15._0_8_ = auVar16._0_8_;
        auVar15._8_8_ = auVar16._8_8_ & 0xffffffff | (ulonglong)*puVar13 << 0x20;
        uVar6 = (ulonglong)(bVar1 & 3);
        pbVar9 = pbVar9 + 1;
        uVar11 = (ulonglong)(bVar1 >> 2 & 0xf);
        if (uVar6 == 3) {
          uVar6 = (ulonglong)*puVar10;
          puVar10 = puVar10 + 1;
        }
        *(undefined8 *)param_2 = *(undefined8 *)_Src;
        if (((8 < uVar6) && (*(undefined8 *)(param_2 + 8) = *(undefined8 *)(_Src + 8), 0x10 < uVar6)
            ) && (*(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(_Src + 0x10), 0x18 < uVar6)) {
          if ((-(longlong)_Src + (longlong)_Src_00 <= (longlong)uVar6) &&
             (pbVar12 = pbVar9, -(longlong)_Src + (longlong)puVar14 < (longlong)uVar6)) {
            return false;
          }
          if ((-(longlong)param_2 + (longlong)param_3 < (longlong)uVar6) &&
             (pbVar12 = pbVar9, (longlong)(local_208 + -(longlong)param_2 + -0x10) < (longlong)uVar6
             )) {
            return false;
          }
          param_2 = param_2 + 0x18;
          _Src = _Src + 0x18;
          uVar6 = uVar6 - 0x18;
          do {
            uVar6 = uVar6 - 8;
            *(undefined8 *)param_2 = *(undefined8 *)_Src;
            _Src = _Src + 8;
            param_2 = param_2 + 8;
          } while (0 < (longlong)uVar6);
        }
        puVar5 = param_2 + uVar6;
        _Src = _Src + uVar6;
        auVar16 = pshufb(auVar15,(undefined1  [16])s_lo_shuffles[bVar1 >> 6]);
        puVar13 = (uint *)((longlong)puVar13 + (ulonglong)((bVar1 >> 6) + 1 & 4));
        if ((ulonglong)(longlong)auVar16._0_4_ < (ulonglong)((longlong)param_5 - (longlong)puVar5))
        {
          return false;
        }
        puVar7 = puVar5 + auVar16._0_4_;
        if (uVar11 == 0xf) {
          uVar2 = *puVar10;
          puVar10 = puVar10 + 1;
          if ((longlong)local_200 - (longlong)puVar5 < (longlong)(ulonglong)(uVar2 + 0xe)) {
            return false;
          }
          param_2 = puVar5 + (uVar2 + 0xe);
          *(undefined8 *)puVar5 = *(undefined8 *)puVar7;
          *(undefined8 *)(puVar5 + 8) = *(undefined8 *)(puVar7 + 8);
          puVar8 = puVar7 + 0x18;
          *(undefined8 *)(puVar5 + 0x10) = *(undefined8 *)(puVar7 + 0x10);
          for (puVar5 = puVar5 + 0x18; puVar5 < param_2; puVar5 = puVar5 + 8) {
            uVar3 = *(undefined8 *)puVar8;
            puVar8 = puVar8 + 8;
            *(undefined8 *)puVar5 = uVar3;
          }
          if (param_3 <= param_2) break;
        }
        else {
          *(undefined8 *)puVar5 = *(undefined8 *)puVar7;
          param_2 = puVar5 + uVar11 + 2;
          *(undefined8 *)(puVar5 + 8) = *(undefined8 *)(puVar7 + 8);
        }
      } while (pbVar9 < pbVar12);
    }
    if (local_210 < puVar13) {
      return false;
    }
    if (local_210 < puVar10) {
      return false;
    }
  }
LAB_14f3af833:
  if ((puVar13 == local_1f8 + local_1f0) && (puVar10 == local_210)) {
    if (param_2 < local_208) {
      if ((longlong)puVar14 - (longlong)_Src == (longlong)local_208 - (longlong)param_2) {
        memcpy(param_2,_Src,(longlong)local_208 - (longlong)param_2);
        return true;
      }
    }
    else if (param_2 == local_208) {
      return true;
    }
  }
  return false;
LAB_14f3af660:
  do {
    if (_Src_00 <= _Src) {
      if (puVar14 < _Src) {
        return false;
      }
      _Src_00 = local_120;
      _Src = _Src + (longlong)(local_120 + -(longlong)puVar14);
      puVar14 = local_120;
    }
    bVar1 = *pbVar9;
    auVar16._8_8_ = auVar16._8_8_ & 0xffffffff | (ulonglong)*puVar13 << 0x20;
    uVar6 = (ulonglong)(bVar1 & 3);
    pbVar9 = pbVar9 + 1;
    uVar11 = (ulonglong)(bVar1 >> 2 & 0xf);
    if (uVar6 == 3) {
      uVar6 = (ulonglong)*puVar10;
      puVar10 = puVar10 + 1;
    }
    if ((longlong)(local_208 + (-0x10 - (longlong)param_2)) < (longlong)uVar6) {
      return false;
    }
    *(undefined8 *)param_2 = *(undefined8 *)_Src;
    if (((8 < uVar6) && (*(undefined8 *)(param_2 + 8) = *(undefined8 *)(_Src + 8), 0x10 < uVar6)) &&
       (*(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(_Src + 0x10), 0x18 < uVar6)) {
      if (((longlong)_Src_00 - (longlong)_Src <= (longlong)uVar6) &&
         ((longlong)puVar14 - (longlong)_Src < (longlong)uVar6)) {
        return false;
      }
      param_2 = param_2 + 0x18;
      _Src = _Src + 0x18;
      uVar6 = uVar6 - 0x18;
      do {
        uVar6 = uVar6 - 8;
        *(undefined8 *)param_2 = *(undefined8 *)_Src;
        _Src = _Src + 8;
        param_2 = param_2 + 8;
      } while (0 < (longlong)uVar6);
    }
    puVar5 = param_2 + uVar6;
    _Src = _Src + uVar6;
    auVar16 = pshufb(auVar16,(undefined1  [16])s_lo_shuffles[bVar1 >> 6]);
    puVar13 = (uint *)((longlong)puVar13 + (ulonglong)((bVar1 >> 6) + 1 & 4));
    if ((ulonglong)(longlong)auVar16._0_4_ < (ulonglong)((longlong)param_5 - (longlong)puVar5)) {
      return false;
    }
    puVar7 = puVar5 + auVar16._0_4_;
    if (uVar11 == 0xf) {
      uVar2 = *puVar10;
      puVar10 = puVar10 + 1;
      if ((longlong)local_200 - (longlong)puVar5 < (longlong)(ulonglong)(uVar2 + 0xe)) {
        return false;
      }
      param_2 = puVar5 + (uVar2 + 0xe);
      *(undefined8 *)puVar5 = *(undefined8 *)puVar7;
      *(undefined8 *)(puVar5 + 8) = *(undefined8 *)(puVar7 + 8);
      puVar8 = puVar7 + 0x18;
      *(undefined8 *)(puVar5 + 0x10) = *(undefined8 *)(puVar7 + 0x10);
      for (puVar5 = puVar5 + 0x18; puVar5 < param_2; puVar5 = puVar5 + 8) {
        uVar3 = *(undefined8 *)puVar8;
        puVar8 = puVar8 + 8;
        *(undefined8 *)puVar5 = uVar3;
      }
    }
    else {
      *(undefined8 *)puVar5 = *(undefined8 *)puVar7;
      param_2 = puVar5 + uVar11 + 2;
      *(undefined8 *)(puVar5 + 8) = *(undefined8 *)(puVar7 + 8);
    }
    if (local_210 < puVar13) {
      return false;
    }
    if (local_210 < puVar10) {
      return false;
    }
  } while (pbVar9 < local_218);
  goto LAB_14f3af833;
}

// newLZ_decode_parse_sub_sse4 @ 14f3af8c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
oo2::newLZ_decode_parse_sub_sse4
          (newLZ_chunk_arrays *param_1,uchar *param_2,uchar *param_3,uchar *param_4,uchar *param_5)

{
  uchar *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  uint uVar5;
  uchar *puVar6;
  ulonglong uVar7;
  uchar *puVar8;
  ulonglong uVar9;
  byte *pbVar10;
  ulonglong uVar11;
  uchar *puVar12;
  longlong lVar13;
  size_t _Size;
  byte *pbVar14;
  uint *puVar15;
  uint *puVar16;
  uchar *puVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auStack_238 [32];
  uchar *local_218;
  byte *local_210;
  uchar *local_208;
  uint *local_200;
  uint *local_1f8;
  long64 local_1f0;
  uchar local_120 [200];
  ulonglong local_58;
  
  auVar19 = ___xmm_fffffff8fffffff8fffffff8fffffff8;
  uVar3 = _UNK_150ae9808;
  uVar2 = ___xmm_00000003000000030000000300000003;
  local_58 = __security_cookie.value ^ (ulonglong)auStack_238;
  if ((longlong)param_4 - (longlong)param_3 < 0x10) {
    return false;
  }
  puVar15 = (uint *)param_1->offsets;
  uVar11 = 0xfffffffffffffff8;
  local_1f0 = param_1->offsets_count;
  pbVar10 = param_1->packets;
  puVar16 = param_1->excesses;
  puVar12 = param_1->literals_ptr;
  local_210 = pbVar10 + param_1->packets_count;
  _Size = param_1->literals_count;
  if (0x14f < (longlong)param_4 - (longlong)param_3) {
    param_3 = param_4 + -0x150;
  }
  local_200 = puVar16 + param_1->excesses_count;
  *(undefined8 *)local_200 = ___xmm_00000003000000030000000300000003;
  *(undefined8 *)(local_200 + 2) = uVar3;
  puVar17 = puVar12 + _Size;
  *(undefined8 *)(local_200 + 4) = uVar2;
  *(undefined8 *)(local_200 + 6) = uVar3;
  *(undefined8 *)(local_200 + 8) = uVar2;
  *(undefined8 *)(local_200 + 10) = uVar3;
  *(undefined8 *)(local_200 + 0xc) = uVar2;
  *(undefined8 *)(local_200 + 0xe) = uVar3;
  if (200 < (longlong)_Size) {
    _Size = 200;
  }
  local_208 = puVar17 + -_Size;
  local_218 = param_4;
  local_1f8 = puVar15;
  memcpy(local_120 + -_Size,local_208,_Size);
  memset(local_120,0,200);
  while (pbVar10 < local_210) {
    if (param_3 <= param_2) goto LAB_14f3afc50;
    if (local_208 <= puVar12) {
      if (puVar17 < puVar12) {
        return false;
      }
      local_208 = local_120;
      puVar12 = puVar12 + (longlong)(local_120 + -(longlong)puVar17);
      puVar17 = local_120;
    }
    pbVar14 = local_210;
    if (7 < (longlong)local_210 - (longlong)pbVar10) {
      pbVar14 = pbVar10 + 8;
    }
    if (pbVar10 < pbVar14) {
      do {
        bVar4 = *pbVar10;
        uVar5 = *puVar16;
        uVar2 = *(undefined8 *)(param_2 + uVar11);
        uVar7 = (ulonglong)(bVar4 & 3);
        uVar3 = *(undefined8 *)puVar12;
        auVar18._0_8_ = auVar19._0_8_;
        auVar18._8_8_ = auVar19._8_8_ & 0xffffffff | (ulonglong)*puVar15 << 0x20;
        pbVar10 = pbVar10 + 1;
        uVar9 = (ulonglong)(bVar4 >> 2 & 0xf);
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
        if (uVar7 == 3) {
          uVar7 = (ulonglong)uVar5;
          puVar16 = puVar16 + 1;
        }
        if (8 < uVar7) {
          uVar2 = *(undefined8 *)(param_2 + uVar11 + 8);
          uVar3 = *(undefined8 *)(puVar12 + 8);
          *(ulonglong *)(param_2 + 8) =
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
          if (0x10 < uVar7) {
            uVar2 = *(undefined8 *)(param_2 + uVar11 + 0x10);
            uVar3 = *(undefined8 *)(puVar12 + 0x10);
            *(ulonglong *)(param_2 + 0x10) =
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
            if (0x18 < uVar7) {
              if ((-(longlong)puVar12 + (longlong)local_208 <= (longlong)uVar7) &&
                 (pbVar14 = pbVar10, -(longlong)puVar12 + (longlong)puVar17 < (longlong)uVar7)) {
                return false;
              }
              if ((-(longlong)param_2 + (longlong)param_3 < (longlong)uVar7) &&
                 (pbVar14 = pbVar10,
                 (longlong)(local_218 + -(longlong)param_2 + -0x10) < (longlong)uVar7)) {
                return false;
              }
              param_2 = param_2 + 0x18;
              puVar12 = puVar12 + 0x18;
              uVar7 = uVar7 - 0x18;
              do {
                uVar2 = *(undefined8 *)(param_2 + uVar11);
                uVar7 = uVar7 - 8;
                uVar3 = *(undefined8 *)puVar12;
                puVar12 = puVar12 + 8;
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
                                                                  CONCAT12((char)((ulonglong)uVar2
                                                                                 >> 0x10) +
                                                                           (char)((ulonglong)uVar3
                                                                                 >> 0x10),
                                                                           CONCAT11((char)((
                                                  ulonglong)uVar2 >> 8) +
                                                  (char)((ulonglong)uVar3 >> 8),
                                                  (char)uVar2 + (char)uVar3)))))));
                param_2 = param_2 + 8;
              } while (0 < (longlong)uVar7);
            }
          }
        }
        puVar6 = param_2 + uVar7;
        puVar12 = puVar12 + uVar7;
        auVar19 = pshufb(auVar18,(undefined1  [16])s_lo_shuffles[bVar4 >> 6]);
        uVar11 = (ulonglong)auVar19._0_4_;
        puVar15 = (uint *)((longlong)puVar15 + (ulonglong)((bVar4 >> 6) + 1 & 4));
        if (uVar11 < (ulonglong)((longlong)param_5 - (longlong)puVar6)) {
          return false;
        }
        puVar1 = puVar6 + uVar11;
        if (uVar9 == 0xf) {
          uVar5 = *puVar16;
          puVar16 = puVar16 + 1;
          if ((longlong)(local_218 + (-8 - (longlong)puVar6)) < (longlong)(ulonglong)(uVar5 + 0xe))
          {
            return false;
          }
          param_2 = puVar6 + (uVar5 + 0xe);
          *(undefined8 *)puVar6 = *(undefined8 *)puVar1;
          *(undefined8 *)(puVar6 + 8) = *(undefined8 *)(puVar1 + 8);
          puVar8 = puVar1 + 0x18;
          *(undefined8 *)(puVar6 + 0x10) = *(undefined8 *)(puVar1 + 0x10);
          for (puVar6 = puVar6 + 0x18; puVar6 < param_2; puVar6 = puVar6 + 8) {
            uVar2 = *(undefined8 *)puVar8;
            puVar8 = puVar8 + 8;
            *(undefined8 *)puVar6 = uVar2;
          }
          if (param_3 <= param_2) break;
        }
        else {
          *(undefined8 *)puVar6 = *(undefined8 *)puVar1;
          param_2 = puVar6 + uVar9 + 2;
          *(undefined8 *)(puVar6 + 8) = *(undefined8 *)(puVar1 + 8);
        }
      } while (pbVar10 < pbVar14);
    }
    if (local_200 < puVar15) {
      return false;
    }
    if (local_200 < puVar16) {
      return false;
    }
  }
LAB_14f3afe69:
  if ((puVar15 == local_1f8 + local_1f0) && (puVar16 == local_200)) {
    if (param_2 < local_218) {
      uVar7 = (longlong)local_218 - (longlong)param_2;
      if ((longlong)puVar17 - (longlong)puVar12 != uVar7) {
        return false;
      }
      if (7 < (longlong)uVar7) {
        uVar9 = uVar7 >> 3;
        uVar7 = uVar7 + uVar9 * -8;
        do {
          uVar2 = *(undefined8 *)(param_2 + uVar11);
          uVar3 = *(undefined8 *)puVar12;
          puVar12 = puVar12 + 8;
          *(ulonglong *)param_2 =
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
          param_2 = param_2 + 8;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      if (uVar7 != 0) {
        lVar13 = (longlong)puVar12 - (longlong)param_2;
        do {
          *param_2 = param_2[lVar13] + param_2[uVar11];
          param_2 = param_2 + 1;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
    }
    if (param_2 == local_218) {
      return true;
    }
  }
  return false;
LAB_14f3afc50:
  do {
    if (local_208 <= puVar12) {
      if (puVar17 < puVar12) {
        return false;
      }
      local_208 = local_120;
      puVar12 = puVar12 + (longlong)(local_120 + -(longlong)puVar17);
      puVar17 = local_120;
    }
    bVar4 = *pbVar10;
    auVar19._8_8_ = auVar19._8_8_ & 0xffffffff | (ulonglong)*puVar15 << 0x20;
    uVar7 = (ulonglong)(bVar4 & 3);
    pbVar10 = pbVar10 + 1;
    uVar9 = (ulonglong)(bVar4 >> 2 & 0xf);
    if (uVar7 == 3) {
      uVar7 = (ulonglong)*puVar16;
      puVar16 = puVar16 + 1;
    }
    if ((longlong)(local_218 + (-0x10 - (longlong)param_2)) < (longlong)uVar7) {
      return false;
    }
    uVar2 = *(undefined8 *)(param_2 + uVar11);
    uVar3 = *(undefined8 *)puVar12;
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
    if (8 < uVar7) {
      uVar2 = *(undefined8 *)(param_2 + uVar11 + 8);
      uVar3 = *(undefined8 *)(puVar12 + 8);
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
      if (0x10 < uVar7) {
        uVar2 = *(undefined8 *)(param_2 + uVar11 + 0x10);
        uVar3 = *(undefined8 *)(puVar12 + 0x10);
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
        if (0x18 < uVar7) {
          if (((longlong)local_208 - (longlong)puVar12 <= (longlong)uVar7) &&
             ((longlong)puVar17 - (longlong)puVar12 < (longlong)uVar7)) {
            return false;
          }
          param_2 = param_2 + 0x18;
          puVar12 = puVar12 + 0x18;
          uVar7 = uVar7 - 0x18;
          do {
            uVar2 = *(undefined8 *)(param_2 + uVar11);
            uVar7 = uVar7 - 8;
            uVar3 = *(undefined8 *)puVar12;
            puVar12 = puVar12 + 8;
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
          } while (0 < (longlong)uVar7);
        }
      }
    }
    puVar6 = param_2 + uVar7;
    puVar12 = puVar12 + uVar7;
    auVar19 = pshufb(auVar19,(undefined1  [16])s_lo_shuffles[bVar4 >> 6]);
    uVar11 = (ulonglong)auVar19._0_4_;
    puVar15 = (uint *)((longlong)puVar15 + (ulonglong)((bVar4 >> 6) + 1 & 4));
    if (uVar11 < (ulonglong)((longlong)param_5 - (longlong)puVar6)) {
      return false;
    }
    puVar1 = puVar6 + uVar11;
    if (uVar9 == 0xf) {
      uVar5 = *puVar16;
      puVar16 = puVar16 + 1;
      if ((longlong)(local_218 + (-8 - (longlong)puVar6)) < (longlong)(ulonglong)(uVar5 + 0xe)) {
        return false;
      }
      param_2 = puVar6 + (uVar5 + 0xe);
      *(undefined8 *)puVar6 = *(undefined8 *)puVar1;
      *(undefined8 *)(puVar6 + 8) = *(undefined8 *)(puVar1 + 8);
      puVar8 = puVar1 + 0x18;
      *(undefined8 *)(puVar6 + 0x10) = *(undefined8 *)(puVar1 + 0x10);
      for (puVar6 = puVar6 + 0x18; puVar6 < param_2; puVar6 = puVar6 + 8) {
        uVar2 = *(undefined8 *)puVar8;
        puVar8 = puVar8 + 8;
        *(undefined8 *)puVar6 = uVar2;
      }
    }
    else {
      *(undefined8 *)puVar6 = *(undefined8 *)puVar1;
      param_2 = puVar6 + uVar9 + 2;
      *(undefined8 *)(puVar6 + 8) = *(undefined8 *)(puVar1 + 8);
    }
    if (local_200 < puVar15) {
      return false;
    }
    if (local_200 < puVar16) {
      return false;
    }
  } while (pbVar10 < local_210);
  goto LAB_14f3afe69;
}

// newlz_literals_copy8<1> @ 14f3aff60

void __cdecl
oo2::`anonymous_namespace'::newlz_literals_copy8<1>(uchar *param_1,uchar *param_2,uchar *param_3)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_3;
  return;
}

// newlz_literals_copy8<0> @ 14f3aff70

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

// MTF @ 14f3aff90

int __thiscall oo2::newLZ_LOs_SSE4::MTF(newLZ_LOs_SSE4 *this,long64 param_1)

{
  undefined1 auVar1 [16];
  
  auVar1 = pshufb((undefined1  [16])this->offsets,(undefined1  [16])s_lo_shuffles[param_1]);
  *(undefined1 (*) [16])(this->offsets).m128i_i8 = auVar1;
  return auVar1._0_4_;
}

// RR_GET64_NATIVE @ 14f3affc0

ulong64 __cdecl oo2::RR_GET64_NATIVE(void *param_1)

{
  return *(ulong64 *)param_1;
}

// RR_PUT64_NATIVE @ 14f3affd0

void __cdecl oo2::RR_PUT64_NATIVE(void *param_1,ulong64 param_2)

{
  *(ulong64 *)param_1 = param_2;
  return;
}

// Reset_Neg @ 14f3affe0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall oo2::newLZ_LOs_SSE4::Reset_Neg(newLZ_LOs_SSE4 *this)

{
  long64 lVar1;
  
  lVar1 = _UNK_1531db198;
  (this->offsets).m128i_i64[0] = ___xmm_fffffff8fffffff8fffffff8fffffff8;
  (this->offsets).m128i_i64[1] = lVar1;
  return;
}

// ptr_sub_saturate @ 14f3b0000

uchar * __cdecl oo2::ptr_sub_saturate(uchar *param_1,long64 param_2,uchar *param_3)

{
  uchar *puVar1;
  
  puVar1 = param_1 + -param_2;
  if ((longlong)param_1 - (longlong)param_3 < param_2) {
    puVar1 = param_3;
  }
  return puVar1;
}

// rrPtrDiff @ 14f3b0020

long64 __cdecl oo2::rrPtrDiff(long64 param_1)

{
  return param_1;
}

