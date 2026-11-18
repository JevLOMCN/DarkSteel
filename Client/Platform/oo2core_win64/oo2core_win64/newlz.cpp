// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2core_win64
// Functions: 394

// newLZ_decode_parse_raw @ 14f331440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
oo2::newLZ_decode_parse_raw
          (newLZ_chunk_arrays *param_1,uchar *param_2,uchar *param_3,uchar *param_4,uchar *param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  byte bVar6;
  undefined8 uVar7;
  uchar *puVar8;
  uchar *puVar9;
  uchar *puVar10;
  ulonglong uVar11;
  uint *puVar12;
  uchar *_Src;
  size_t _Size;
  ulonglong uVar13;
  byte *pbVar14;
  uchar *puVar15;
  byte *pbVar16;
  uchar *puVar17;
  undefined1 auStack_278 [56];
  uint *local_240;
  uchar *local_238;
  uchar *local_230;
  byte *local_228;
  uint *local_220;
  uint *local_218;
  long64 local_210;
  int aiStack_1fc [57];
  uchar local_118 [200];
  ulonglong local_50;
  
  uVar7 = _UNK_150ae9808;
  uVar5 = ___xmm_00000003000000030000000300000003;
  local_50 = __security_cookie.value ^ (ulonglong)auStack_278;
  if ((longlong)param_4 - (longlong)param_3 < 0x10) {
    return false;
  }
  local_240 = (uint *)param_1->offsets;
  local_210 = param_1->offsets_count;
  pbVar16 = param_1->packets;
  puVar12 = param_1->excesses;
  _Src = param_1->literals_ptr;
  local_228 = pbVar16 + param_1->packets_count;
  _Size = param_1->literals_count;
  aiStack_1fc[3] = -8;
  aiStack_1fc[4] = 0xfffffff8;
  aiStack_1fc[5] = 0xfffffff8;
  if (0x14f < (longlong)param_4 - (longlong)param_3) {
    param_3 = param_4 + -0x150;
  }
  local_220 = puVar12 + param_1->excesses_count;
  *(undefined8 *)local_220 = ___xmm_00000003000000030000000300000003;
  *(undefined8 *)(local_220 + 2) = uVar7;
  puVar15 = _Src + _Size;
  *(undefined8 *)(local_220 + 4) = uVar5;
  *(undefined8 *)(local_220 + 6) = uVar7;
  *(undefined8 *)(local_220 + 8) = uVar5;
  *(undefined8 *)(local_220 + 10) = uVar7;
  *(undefined8 *)(local_220 + 0xc) = uVar5;
  *(undefined8 *)(local_220 + 0xe) = uVar7;
  if (200 < (longlong)_Size) {
    _Size = 200;
  }
  puVar17 = puVar15 + -_Size;
  local_238 = param_4;
  local_230 = puVar17;
  local_218 = local_240;
  memcpy(local_118 + -_Size,puVar17,_Size);
  memset(local_118,0,200);
  while (pbVar16 < local_228) {
    if (param_3 <= param_2) goto LAB_14f3317c0;
    if (puVar17 <= _Src) {
      if (puVar15 < _Src) {
        return false;
      }
      local_230 = local_118;
      _Src = _Src + (longlong)(local_118 + -(longlong)puVar15);
      puVar15 = local_118;
    }
    pbVar14 = local_228;
    if (7 < (longlong)local_228 - (longlong)pbVar16) {
      pbVar14 = pbVar16 + 8;
    }
    if (pbVar16 < pbVar14) {
      do {
        bVar1 = *pbVar16;
        pbVar16 = pbVar16 + 1;
        uVar11 = (ulonglong)(bVar1 & 3);
        bVar6 = bVar1 >> 6;
        uVar13 = (ulonglong)(bVar1 >> 2 & 0xf);
        aiStack_1fc[6] = *local_240;
        if (uVar11 == 3) {
          uVar11 = (ulonglong)*puVar12;
          puVar12 = puVar12 + 1;
        }
        *(undefined8 *)param_2 = *(undefined8 *)_Src;
        if (((8 < uVar11) &&
            (*(undefined8 *)(param_2 + 8) = *(undefined8 *)(_Src + 8), 0x10 < uVar11)) &&
           (*(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(_Src + 0x10), 0x18 < uVar11)) {
          if ((-(longlong)_Src + (longlong)local_230 <= (longlong)uVar11) &&
             (pbVar14 = pbVar16, -(longlong)_Src + (longlong)puVar15 < (longlong)uVar11)) {
            return false;
          }
          if ((-(longlong)param_2 + (longlong)param_3 < (longlong)uVar11) &&
             (pbVar14 = pbVar16,
             (longlong)(local_238 + -(longlong)param_2 + -0x10) < (longlong)uVar11)) {
            return false;
          }
          param_2 = param_2 + 0x18;
          _Src = _Src + 0x18;
          uVar11 = uVar11 - 0x18;
          do {
            uVar11 = uVar11 - 8;
            *(undefined8 *)param_2 = *(undefined8 *)_Src;
            _Src = _Src + 8;
            param_2 = param_2 + 8;
          } while (0 < (longlong)uVar11);
        }
        iVar2 = aiStack_1fc[(ulonglong)bVar6 + 3];
        puVar17 = param_2 + uVar11;
        _Src = _Src + uVar11;
        iVar3 = aiStack_1fc[bVar6];
        aiStack_1fc[(ulonglong)bVar6 + 3] = aiStack_1fc[(ulonglong)bVar6 + 2];
        aiStack_1fc[(ulonglong)bVar6 + 2] = aiStack_1fc[(ulonglong)bVar6 + 1];
        aiStack_1fc[(ulonglong)bVar6 + 1] = iVar3;
        aiStack_1fc[3] = iVar2;
        local_240 = (uint *)((longlong)local_240 + (ulonglong)(bVar6 + 1 & 4));
        if ((ulonglong)(longlong)iVar2 < (ulonglong)((longlong)param_5 - (longlong)puVar17)) {
          return false;
        }
        puVar8 = puVar17 + iVar2;
        if (uVar13 == 0xf) {
          uVar4 = *puVar12;
          puVar12 = puVar12 + 1;
          if ((longlong)(local_238 + (-8 - (longlong)puVar17)) < (longlong)(ulonglong)(uVar4 + 0xe))
          {
            return false;
          }
          param_2 = puVar17 + (uVar4 + 0xe);
          *(undefined8 *)puVar17 = *(undefined8 *)puVar8;
          *(undefined8 *)(puVar17 + 8) = *(undefined8 *)(puVar8 + 8);
          puVar9 = puVar8 + 0x18;
          *(undefined8 *)(puVar17 + 0x10) = *(undefined8 *)(puVar8 + 0x10);
          for (puVar17 = puVar17 + 0x18; puVar17 < param_2; puVar17 = puVar17 + 8) {
            uVar5 = *(undefined8 *)puVar9;
            puVar9 = puVar9 + 8;
            *(undefined8 *)puVar17 = uVar5;
          }
          if (param_3 <= param_2) break;
        }
        else {
          *(undefined8 *)puVar17 = *(undefined8 *)puVar8;
          param_2 = puVar17 + uVar13 + 2;
          *(undefined8 *)(puVar17 + 8) = *(undefined8 *)(puVar8 + 8);
        }
      } while (pbVar16 < pbVar14);
    }
    if (local_220 < local_240) {
      return false;
    }
    puVar17 = local_230;
    if (local_220 < puVar12) {
      return false;
    }
  }
LAB_14f33198f:
  if ((local_240 == local_218 + local_210) && (puVar12 == local_220)) {
    if (param_2 < local_238) {
      if ((longlong)puVar15 - (longlong)_Src == (longlong)local_238 - (longlong)param_2) {
        memcpy(param_2,_Src,(longlong)local_238 - (longlong)param_2);
        return true;
      }
    }
    else if (param_2 == local_238) {
      return true;
    }
  }
  return false;
LAB_14f3317c0:
  do {
    if (puVar17 <= _Src) {
      if (puVar15 < _Src) {
        return false;
      }
      puVar17 = local_118;
      _Src = _Src + (longlong)(local_118 + -(longlong)puVar15);
      puVar15 = local_118;
    }
    bVar1 = *pbVar16;
    pbVar16 = pbVar16 + 1;
    aiStack_1fc[6] = *local_240;
    uVar11 = (ulonglong)(bVar1 & 3);
    uVar13 = (ulonglong)(bVar1 >> 2 & 0xf);
    bVar1 = bVar1 >> 6;
    if (uVar11 == 3) {
      uVar11 = (ulonglong)*puVar12;
      puVar12 = puVar12 + 1;
    }
    if ((longlong)(local_238 + (-0x10 - (longlong)param_2)) < (longlong)uVar11) {
      return false;
    }
    *(undefined8 *)param_2 = *(undefined8 *)_Src;
    if (((8 < uVar11) && (*(undefined8 *)(param_2 + 8) = *(undefined8 *)(_Src + 8), 0x10 < uVar11))
       && (*(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(_Src + 0x10), 0x18 < uVar11)) {
      if (((longlong)puVar17 - (longlong)_Src <= (longlong)uVar11) &&
         ((longlong)puVar15 - (longlong)_Src < (longlong)uVar11)) {
        return false;
      }
      param_2 = param_2 + 0x18;
      _Src = _Src + 0x18;
      uVar11 = uVar11 - 0x18;
      do {
        uVar11 = uVar11 - 8;
        *(undefined8 *)param_2 = *(undefined8 *)_Src;
        _Src = _Src + 8;
        param_2 = param_2 + 8;
      } while (0 < (longlong)uVar11);
    }
    iVar2 = aiStack_1fc[(ulonglong)bVar1 + 3];
    puVar8 = param_2 + uVar11;
    _Src = _Src + uVar11;
    iVar3 = aiStack_1fc[bVar1];
    aiStack_1fc[(ulonglong)bVar1 + 3] = aiStack_1fc[(ulonglong)bVar1 + 2];
    aiStack_1fc[(ulonglong)bVar1 + 2] = aiStack_1fc[(ulonglong)bVar1 + 1];
    aiStack_1fc[(ulonglong)bVar1 + 1] = iVar3;
    aiStack_1fc[3] = iVar2;
    local_240 = (uint *)((longlong)local_240 + (ulonglong)(bVar1 + 1 & 4));
    if ((ulonglong)(longlong)iVar2 < (ulonglong)((longlong)param_5 - (longlong)puVar8)) {
      return false;
    }
    puVar9 = puVar8 + iVar2;
    if (uVar13 == 0xf) {
      uVar4 = *puVar12;
      puVar12 = puVar12 + 1;
      if ((longlong)(local_238 + (-8 - (longlong)puVar8)) < (longlong)(ulonglong)(uVar4 + 0xe)) {
        return false;
      }
      param_2 = puVar8 + (uVar4 + 0xe);
      *(undefined8 *)puVar8 = *(undefined8 *)puVar9;
      *(undefined8 *)(puVar8 + 8) = *(undefined8 *)(puVar9 + 8);
      puVar10 = puVar9 + 0x18;
      *(undefined8 *)(puVar8 + 0x10) = *(undefined8 *)(puVar9 + 0x10);
      for (puVar8 = puVar8 + 0x18; puVar8 < param_2; puVar8 = puVar8 + 8) {
        uVar5 = *(undefined8 *)puVar10;
        puVar10 = puVar10 + 8;
        *(undefined8 *)puVar8 = uVar5;
      }
    }
    else {
      *(undefined8 *)puVar8 = *(undefined8 *)puVar9;
      param_2 = puVar8 + uVar13 + 2;
      *(undefined8 *)(puVar8 + 8) = *(undefined8 *)(puVar9 + 8);
    }
    if (local_220 < local_240) {
      return false;
    }
    if (local_220 < puVar12) {
      return false;
    }
  } while (pbVar16 < local_228);
  goto LAB_14f33198f;
}

// newLZ_decode_parse_sub @ 14f331a20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
oo2::newLZ_decode_parse_sub
          (newLZ_chunk_arrays *param_1,uchar *param_2,uchar *param_3,uchar *param_4,uchar *param_5)

{
  uchar *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uchar *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uchar *puVar12;
  longlong lVar13;
  size_t _Size;
  uchar *puVar14;
  byte *pbVar15;
  uchar *puVar16;
  uint *puVar17;
  uint *puVar18;
  byte *pbVar19;
  undefined1 auStack_278 [56];
  uchar *local_240;
  uchar *local_238;
  uchar *local_230;
  byte *local_228;
  uint *local_220;
  uint *local_218;
  uint *local_210;
  long64 local_208;
  int aiStack_1fc [57];
  uchar local_118 [200];
  ulonglong local_50;
  
  uVar3 = _UNK_150ae9808;
  uVar2 = ___xmm_00000003000000030000000300000003;
  local_50 = __security_cookie.value ^ (ulonglong)auStack_278;
  if ((longlong)param_4 - (longlong)param_3 < 0x10) {
    return false;
  }
  puVar17 = (uint *)param_1->offsets;
  uVar11 = 0xfffffffffffffff8;
  local_208 = param_1->offsets_count;
  pbVar19 = param_1->packets;
  puVar18 = param_1->excesses;
  puVar12 = param_1->literals_ptr;
  local_228 = pbVar19 + param_1->packets_count;
  _Size = param_1->literals_count;
  aiStack_1fc[3] = 0xfffffff8;
  aiStack_1fc[4] = 0xfffffff8;
  aiStack_1fc[5] = 0xfffffff8;
  local_230 = param_3;
  if (0x14f < (longlong)param_4 - (longlong)param_3) {
    local_230 = param_4 + -0x150;
  }
  local_218 = puVar18 + param_1->excesses_count;
  *(undefined8 *)local_218 = ___xmm_00000003000000030000000300000003;
  *(undefined8 *)(local_218 + 2) = uVar3;
  puVar16 = puVar12 + _Size;
  *(undefined8 *)(local_218 + 4) = uVar2;
  *(undefined8 *)(local_218 + 6) = uVar3;
  *(undefined8 *)(local_218 + 8) = uVar2;
  *(undefined8 *)(local_218 + 10) = uVar3;
  *(undefined8 *)(local_218 + 0xc) = uVar2;
  *(undefined8 *)(local_218 + 0xe) = uVar3;
  if (200 < (longlong)_Size) {
    _Size = 200;
  }
  local_238 = puVar16 + -_Size;
  local_240 = param_4;
  local_220 = puVar17;
  local_210 = puVar17;
  memcpy(local_118 + -_Size,local_238,_Size);
  memset(local_118,0,200);
  while (pbVar19 < local_228) {
    if (local_230 <= param_2) goto LAB_14f331dc5;
    if (local_238 <= puVar12) {
      if (puVar16 < puVar12) {
        return false;
      }
      local_238 = local_118;
      puVar12 = puVar12 + (longlong)(local_118 + -(longlong)puVar16);
      puVar16 = local_118;
    }
    pbVar15 = local_228;
    if (7 < (longlong)local_228 - (longlong)pbVar19) {
      pbVar15 = pbVar19 + 8;
    }
    if (pbVar19 < pbVar15) {
      do {
        bVar4 = *pbVar19;
        pbVar19 = pbVar19 + 1;
        uVar5 = *puVar18;
        uVar9 = (ulonglong)(bVar4 & 3);
        uVar2 = *(undefined8 *)(param_2 + uVar11);
        uVar3 = *(undefined8 *)puVar12;
        uVar10 = (ulonglong)(bVar4 >> 2 & 0xf);
        bVar4 = bVar4 >> 6;
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
        if (uVar9 == 3) {
          uVar9 = (ulonglong)uVar5;
          puVar18 = puVar18 + 1;
        }
        if (8 < uVar9) {
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
          if (0x10 < uVar9) {
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
            if (0x18 < uVar9) {
              if ((-(longlong)puVar12 + (longlong)local_238 <= (longlong)uVar9) &&
                 (pbVar15 = pbVar19, -(longlong)puVar12 + (longlong)puVar16 < (longlong)uVar9)) {
                return false;
              }
              if ((-(longlong)param_2 + (longlong)local_230 < (longlong)uVar9) &&
                 (pbVar15 = pbVar19,
                 (longlong)(local_240 + -(longlong)param_2 + -0x10) < (longlong)uVar9)) {
                return false;
              }
              param_2 = param_2 + 0x18;
              puVar12 = puVar12 + 0x18;
              uVar9 = uVar9 - 0x18;
              do {
                uVar2 = *(undefined8 *)(param_2 + uVar11);
                uVar9 = uVar9 - 8;
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
              } while (0 < (longlong)uVar9);
            }
          }
        }
        iVar6 = aiStack_1fc[(ulonglong)bVar4 + 3];
        uVar11 = (ulonglong)iVar6;
        puVar14 = param_2 + uVar9;
        puVar12 = puVar12 + uVar9;
        iVar7 = aiStack_1fc[bVar4];
        aiStack_1fc[(ulonglong)bVar4 + 3] = aiStack_1fc[(ulonglong)bVar4 + 2];
        aiStack_1fc[(ulonglong)bVar4 + 2] = aiStack_1fc[(ulonglong)bVar4 + 1];
        aiStack_1fc[(ulonglong)bVar4 + 1] = iVar7;
        puVar17 = (uint *)((longlong)local_220 + (ulonglong)(bVar4 + 1 & 4));
        aiStack_1fc[3] = iVar6;
        if (uVar11 < (ulonglong)((longlong)param_5 - (longlong)puVar14)) {
          return false;
        }
        puVar1 = puVar14 + uVar11;
        local_220 = puVar17;
        if (uVar10 == 0xf) {
          uVar5 = *puVar18;
          puVar18 = puVar18 + 1;
          if ((longlong)(local_240 + (-8 - (longlong)puVar14)) < (longlong)(ulonglong)(uVar5 + 0xe))
          {
            return false;
          }
          param_2 = puVar14 + (uVar5 + 0xe);
          *(undefined8 *)puVar14 = *(undefined8 *)puVar1;
          *(undefined8 *)(puVar14 + 8) = *(undefined8 *)(puVar1 + 8);
          puVar8 = puVar1 + 0x18;
          *(undefined8 *)(puVar14 + 0x10) = *(undefined8 *)(puVar1 + 0x10);
          for (puVar14 = puVar14 + 0x18; puVar14 < param_2; puVar14 = puVar14 + 8) {
            uVar2 = *(undefined8 *)puVar8;
            puVar8 = puVar8 + 8;
            *(undefined8 *)puVar14 = uVar2;
          }
          if (local_230 <= param_2) break;
        }
        else {
          param_2 = puVar14 + uVar10 + 2;
          *(undefined8 *)puVar14 = *(undefined8 *)puVar1;
          *(undefined8 *)(puVar14 + 8) = *(undefined8 *)(puVar1 + 8);
        }
      } while (pbVar19 < pbVar15);
    }
    if (local_218 < puVar17) {
      return false;
    }
    if (local_218 < puVar18) {
      return false;
    }
  }
LAB_14f331fe2:
  if ((puVar17 == local_210 + local_208) && (puVar18 == local_218)) {
    if (param_2 < local_240) {
      uVar9 = (longlong)local_240 - (longlong)param_2;
      if ((longlong)puVar16 - (longlong)puVar12 != uVar9) {
        return false;
      }
      if (7 < (longlong)uVar9) {
        uVar10 = uVar9 >> 3;
        uVar9 = uVar9 + uVar10 * -8;
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
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      if (uVar9 != 0) {
        lVar13 = (longlong)puVar12 - (longlong)param_2;
        do {
          *param_2 = param_2[lVar13] + param_2[uVar11];
          param_2 = param_2 + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
    }
    if (param_2 == local_240) {
      return true;
    }
  }
  return false;
LAB_14f331dc5:
  do {
    if (local_238 <= puVar12) {
      if (puVar16 < puVar12) {
        return false;
      }
      local_238 = local_118;
      puVar12 = puVar12 + (longlong)(local_118 + -(longlong)puVar16);
      puVar16 = local_118;
    }
    bVar4 = *pbVar19;
    pbVar19 = pbVar19 + 1;
    uVar9 = (ulonglong)(bVar4 & 3);
    uVar10 = (ulonglong)(bVar4 >> 2 & 0xf);
    bVar4 = bVar4 >> 6;
    if (uVar9 == 3) {
      uVar9 = (ulonglong)*puVar18;
      puVar18 = puVar18 + 1;
    }
    if ((longlong)(local_240 + (-0x10 - (longlong)param_2)) < (longlong)uVar9) {
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
    if (8 < uVar9) {
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
      if (0x10 < uVar9) {
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
        if (0x18 < uVar9) {
          if (((longlong)local_238 - (longlong)puVar12 <= (longlong)uVar9) &&
             ((longlong)puVar16 - (longlong)puVar12 < (longlong)uVar9)) {
            return false;
          }
          param_2 = param_2 + 0x18;
          puVar12 = puVar12 + 0x18;
          uVar9 = uVar9 - 0x18;
          do {
            uVar2 = *(undefined8 *)(param_2 + uVar11);
            uVar9 = uVar9 - 8;
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
          } while (0 < (longlong)uVar9);
        }
      }
    }
    iVar6 = aiStack_1fc[(ulonglong)bVar4 + 3];
    uVar11 = (ulonglong)iVar6;
    puVar14 = param_2 + uVar9;
    puVar12 = puVar12 + uVar9;
    iVar7 = aiStack_1fc[bVar4];
    aiStack_1fc[(ulonglong)bVar4 + 3] = aiStack_1fc[(ulonglong)bVar4 + 2];
    aiStack_1fc[(ulonglong)bVar4 + 2] = aiStack_1fc[(ulonglong)bVar4 + 1];
    puVar17 = (uint *)((longlong)puVar17 + (ulonglong)(bVar4 + 1 & 4));
    aiStack_1fc[(ulonglong)bVar4 + 1] = iVar7;
    aiStack_1fc[3] = iVar6;
    if (uVar11 < (ulonglong)((longlong)param_5 - (longlong)puVar14)) {
      return false;
    }
    puVar1 = puVar14 + uVar11;
    if (uVar10 == 0xf) {
      uVar5 = *puVar18;
      puVar18 = puVar18 + 1;
      if ((longlong)(local_240 + (-8 - (longlong)puVar14)) < (longlong)(ulonglong)(uVar5 + 0xe)) {
        return false;
      }
      param_2 = puVar14 + (uVar5 + 0xe);
      *(undefined8 *)puVar14 = *(undefined8 *)puVar1;
      *(undefined8 *)(puVar14 + 8) = *(undefined8 *)(puVar1 + 8);
      puVar8 = puVar1 + 0x18;
      *(undefined8 *)(puVar14 + 0x10) = *(undefined8 *)(puVar1 + 0x10);
      for (puVar14 = puVar14 + 0x18; puVar14 < param_2; puVar14 = puVar14 + 8) {
        uVar2 = *(undefined8 *)puVar8;
        puVar8 = puVar8 + 8;
        *(undefined8 *)puVar14 = uVar2;
      }
    }
    else {
      *(undefined8 *)puVar14 = *(undefined8 *)puVar1;
      param_2 = puVar14 + uVar10 + 2;
      *(undefined8 *)(puVar14 + 8) = *(undefined8 *)(puVar1 + 8);
    }
    if (local_218 < puVar17) {
      return false;
    }
    if (local_218 < puVar18) {
      return false;
    }
  } while (pbVar19 < local_228);
  goto LAB_14f331fe2;
}

// ByteCopy<oo2::newlz_encoder_parse,oo2::newlz_encoder_parse> @ 14f3320d0

void __cdecl
oo2::ByteCopy<oo2::newlz_encoder_parse,oo2::newlz_encoder_parse>
          (newlz_encoder_parse *param_1,newlz_encoder_parse *param_2)

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

// ByteCopy<oo2::Bytes<16>,oo2::Bytes<16>_> @ 14f3320e0

void __cdecl oo2::ByteCopy<oo2::Bytes<16>,oo2::Bytes<16>_>(Bytes<16> *param_1,Bytes<16> *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2->bytes + 8);
  *(undefined8 *)param_1->bytes = *(undefined8 *)param_2->bytes;
  *(undefined8 *)(param_1->bytes + 8) = uVar1;
  return;
}

// ByteSwap<oo2::newlz_encoder_parse> @ 14f3320f0

void __cdecl
oo2::ByteSwap<oo2::newlz_encoder_parse>(newlz_encoder_parse *param_1,newlz_encoder_parse *param_2)

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

// OodleDelete<oo2::CTMF<unsigned_int,1,0,4>_> @ 14f332110

void __cdecl oo2::OodleDelete<oo2::CTMF<unsigned_int,1,0,4>_>(CTMF<unsigned_int,1,0,4> *param_1)

{
  destruct<oo2::CTMF<unsigned_int,1,0,4>_>(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014f332126. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleCore_Plugin_Free)(param_1);
  return;
}

// OodleDelete<oo2::CTMF<unsigned_int,2,8,4>_> @ 14f332140

void __cdecl oo2::OodleDelete<oo2::CTMF<unsigned_int,2,8,4>_>(CTMF<unsigned_int,2,8,4> *param_1)

{
  destruct<oo2::CTMF<unsigned_int,2,8,4>_>(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014f332156. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleCore_Plugin_Free)(param_1);
  return;
}

// OodleDelete<oo2::CTMF<unsigned_int,3,0,4>_> @ 14f332170

void __cdecl oo2::OodleDelete<oo2::CTMF<unsigned_int,3,0,4>_>(CTMF<unsigned_int,3,0,4> *param_1)

{
  destruct<oo2::CTMF<unsigned_int,3,0,4>_>(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014f332186. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleCore_Plugin_Free)(param_1);
  return;
}

// OodleDelete<oo2::FastCTMF<unsigned_short>_> @ 14f3321a0

void __cdecl oo2::OodleDelete<oo2::FastCTMF<unsigned_short>_>(FastCTMF<unsigned_short> *param_1)

{
  destruct<oo2::FastCTMF<unsigned_short>_>(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014f3321b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleCore_Plugin_Free)(param_1);
  return;
}

// OodleDelete<oo2::FastCTMF<unsigned_int>_> @ 14f3321d0

void __cdecl oo2::OodleDelete<oo2::FastCTMF<unsigned_int>_>(FastCTMF<unsigned_int> *param_1)

{
  destruct<oo2::FastCTMF<unsigned_int>_>(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014f3321e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleCore_Plugin_Free)(param_1);
  return;
}

// appendv<oo2::vector_a<oo2::newlz_encoder_parse>_> @ 14f332200

void __thiscall
oo2::vector_flex<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>::
appendv<oo2::vector_a<oo2::newlz_encoder_parse>_>
          (vector_flex<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>
           *this,vector_a<oo2::newlz_encoder_parse> *param_1)

{
  vector_base<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>::insert
            ((vector_base<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>
              *)this,(*(longlong *)&this->field_0x10 << 4) >> 4,*(newlz_encoder_parse **)param_1,
             *(newlz_encoder_parse **)param_1 + *(longlong *)&param_1->field_0x10);
  return;
}

// check_value_cast<__int64,unsigned___int64> @ 14f332230

long64 __cdecl oo2::check_value_cast<__int64,unsigned___int64>(ulong64 *param_1)

{
  return *param_1;
}

// construct<oo2::CTMF<unsigned_int,1,0,4>_> @ 14f332240

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

// construct<oo2::CTMF<unsigned_int,2,8,4>_> @ 14f332280

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

// construct<oo2::CTMF<unsigned_int,3,0,4>_> @ 14f3322c0

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

// construct<oo2::FastCTMF<unsigned_short>_> @ 14f332300

FastCTMF<unsigned_short> * __cdecl
oo2::construct<oo2::FastCTMF<unsigned_short>_>(FastCTMF<unsigned_short> *param_1)

{
  if (param_1 != (FastCTMF<unsigned_short> *)0x0) {
    param_1->m_hash_table_arena = (rrArenaAllocator *)0x0;
    (param_1->m_hash_table).m_ptr = (ushort *)0x0;
    (param_1->m_hash_table).m_alloc = (void *)0x0;
    param_1->m_hash_mul = 0;
    param_1->m_table_size_bits = 0;
    param_1->m_hash_shift = 0;
    param_1->m_base_ptr = (uchar *)0x0;
  }
  return param_1;
}

// construct<oo2::FastCTMF<unsigned_int>_> @ 14f332330

FastCTMF<unsigned_int> * __cdecl
oo2::construct<oo2::FastCTMF<unsigned_int>_>(FastCTMF<unsigned_int> *param_1)

{
  if (param_1 != (FastCTMF<unsigned_int> *)0x0) {
    param_1->m_hash_table_arena = (rrArenaAllocator *)0x0;
    (param_1->m_hash_table).m_ptr = (uint *)0x0;
    (param_1->m_hash_table).m_alloc = (void *)0x0;
    param_1->m_hash_mul = 0;
    param_1->m_table_size_bits = 0;
    param_1->m_hash_shift = 0;
    param_1->m_base_ptr = (uchar *)0x0;
  }
  return param_1;
}

// construct<oo2::newlz_encoder_parse> @ 14f332360

newlz_encoder_parse * __cdecl oo2::construct<oo2::newlz_encoder_parse>(newlz_encoder_parse *param_1)

{
  if (param_1 != (newlz_encoder_parse *)0x0) {
    param_1->lastoffset = 0;
    param_1->lrl = 0;
    param_1->ml = 0;
    param_1->offset = 0;
  }
  return param_1;
}

// copy<oo2::newlz_encoder_parse> @ 14f332380

void __cdecl
oo2::copy<oo2::newlz_encoder_parse>
          (newlz_encoder_parse *param_1,newlz_encoder_parse *param_2,ulong64 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  newlz_encoder_parse *pnVar4;
  
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

// copy_construct<int> @ 14f3323b0

void __cdecl oo2::copy_construct<int>(int *param_1,int *param_2)

{
  if (param_1 != (int *)0x0) {
    *param_1 = *param_2;
  }
  return;
}

// copy_construct<oo2::newlz_encoder_parse> @ 14f3323c0

void __cdecl
oo2::copy_construct<oo2::newlz_encoder_parse>
          (newlz_encoder_parse *param_1,newlz_encoder_parse *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != (newlz_encoder_parse *)0x0) {
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

// copy_construct<oo2::newlz_encoder_parse> @ 14f3323e0

void __cdecl
oo2::copy_construct<oo2::newlz_encoder_parse>
          (newlz_encoder_parse *param_1,newlz_encoder_parse *param_2,ulong64 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    lVar4 = (longlong)param_2 - (longlong)param_1;
    do {
      if (param_1 != (newlz_encoder_parse *)0x0) {
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

// copy_construct_identical<int> @ 14f332410

void __cdecl oo2::copy_construct_identical<int>(int *param_1,int *param_2,ulong64 param_3)

{
  int iVar1;
  
  if (param_3 != 0) {
    iVar1 = *param_2;
    for (; param_3 != 0; param_3 = param_3 - 1) {
      *param_1 = iVar1;
      param_1 = param_1 + 1;
    }
  }
  return;
}

// destruct<int> @ 14f332440

int * __cdecl oo2::destruct<int>(int *param_1)

{
  return param_1;
}

// destruct<int> @ 14f332450

int * __cdecl oo2::destruct<int>(int *param_1,ulong64 param_2)

{
  return param_1;
}

// destruct<oo2::CTMF<unsigned_int,1,0,4>_> @ 14f332460

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

// destruct<oo2::CTMF<unsigned_int,2,8,4>_> @ 14f3324e0

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

// destruct<oo2::CTMF<unsigned_int,3,0,4>_> @ 14f332560

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

// destruct<oo2::FastCTMF<unsigned_short>_> @ 14f3325e0

FastCTMF<unsigned_short> * __cdecl
oo2::destruct<oo2::FastCTMF<unsigned_short>_>(FastCTMF<unsigned_short> *param_1)

{
  rrArenaAllocator *this;
  ushort *puVar1;
  void *pvVar2;
  
  this = param_1->m_hash_table_arena;
  puVar1 = (param_1->m_hash_table).m_ptr;
  if (puVar1 != (ushort *)0x0) {
    if ((this == (rrArenaAllocator *)0x0) ||
       (pvVar2 = (param_1->m_hash_table).m_alloc, pvVar2 == (void *)0x0)) {
      (*g_fp_OodleCore_Plugin_Free)(puVar1);
    }
    else {
      if (this->m_unorderedStart != 0) {
        rrArenaAllocator::Free
                  (this,pvVar2,(1L << ((byte)param_1->m_table_size_bits & 0x3f)) * 2 + 0x40);
      }
      (param_1->m_hash_table).m_alloc = (void *)0x0;
    }
    (param_1->m_hash_table).m_ptr = (ushort *)0x0;
  }
  return param_1;
}

// destruct<oo2::FastCTMF<unsigned_int>_> @ 14f332660

FastCTMF<unsigned_int> * __cdecl
oo2::destruct<oo2::FastCTMF<unsigned_int>_>(FastCTMF<unsigned_int> *param_1)

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

// destruct<oo2::newlz_encoder_parse> @ 14f3326e0

newlz_encoder_parse * __cdecl oo2::destruct<oo2::newlz_encoder_parse>(newlz_encoder_parse *param_1)

{
  return param_1;
}

// destruct<oo2::newlz_encoder_parse> @ 14f3326f0

newlz_encoder_parse * __cdecl
oo2::destruct<oo2::newlz_encoder_parse>(newlz_encoder_parse *param_1,ulong64 param_2)

{
  return param_1;
}

// extend_construct_in_place<> @ 14f332700

void __thiscall
oo2::vector_base<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>::
extend_construct_in_place<>
          (vector_base<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>
           *this)

{
  ulong64 uVar1;
  code *pcVar2;
  int iVar3;
  undefined8 *puVar4;
  
  uVar1 = this->m_size;
  if ((ulonglong)this->_padding_ < uVar1 + 1) {
    iVar3 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h",0x3f,
                               "oo2::vector_storage_a<struct oo2::newlz_encoder_parse>::needmakefit"
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

// fast_ctmf_insert<unsigned_short> @ 14f332770

ushort __cdecl
oo2::`anonymous_namespace'::fast_ctmf_insert<unsigned_short>
          (ushort *param_1,uchar *param_2,ulong64 param_3,int param_4,long64 param_5)

{
  ushort uVar1;
  ulonglong uVar2;
  
  uVar2 = param_3 * *(longlong *)param_2 >> ((byte)param_4 & 0x3f);
  uVar1 = param_1[uVar2];
  param_1[uVar2] = (ushort)param_5;
  return uVar1;
}

// fast_ctmf_insert<unsigned_short> @ 14f3327a0

ushort __cdecl
oo2::`anonymous_namespace'::fast_ctmf_insert<unsigned_short>
          (ushort *param_1,ulong64 param_2,ulong64 param_3,int param_4,long64 param_5)

{
  ushort uVar1;
  ulonglong uVar2;
  
  uVar2 = param_2 * param_3 >> ((byte)param_4 & 0x3f);
  uVar1 = param_1[uVar2];
  param_1[uVar2] = (ushort)param_5;
  return uVar1;
}

// fast_ctmf_insert<unsigned_int> @ 14f3327d0

uint __cdecl
oo2::`anonymous_namespace'::fast_ctmf_insert<unsigned_int>
          (uint *param_1,uchar *param_2,ulong64 param_3,int param_4,long64 param_5)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = param_3 * *(longlong *)param_2 >> ((byte)param_4 & 0x3f);
  uVar1 = param_1[uVar2];
  param_1[uVar2] = (uint)param_5;
  return uVar1;
}

// fast_ctmf_insert<unsigned_int> @ 14f3327f0

uint __cdecl
oo2::`anonymous_namespace'::fast_ctmf_insert<unsigned_int>
          (uint *param_1,ulong64 param_2,ulong64 param_3,int param_4,long64 param_5)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = param_2 * param_3 >> ((byte)param_4 & 0x3f);
  uVar1 = param_1[uVar2];
  param_1[uVar2] = (uint)param_5;
  return uVar1;
}

// hash_n_bytes<8> @ 14f332810

ulong64 __cdecl oo2::`anonymous_namespace'::hash_n_bytes<8>(uchar *param_1,int param_2)

{
  return (ulonglong)(*(longlong *)param_1 * -0x30e44323485a9b9d) >> (0x40U - (char)param_2 & 0x3f);
}

// hash_n_bytes<0> @ 14f332840

ulong64 __cdecl oo2::`anonymous_namespace'::hash_n_bytes<0>(uchar *param_1,int param_2)

{
  return 0;
}

// move<oo2::newlz_encoder_parse> @ 14f332860

void __cdecl
oo2::move<oo2::newlz_encoder_parse>
          (newlz_encoder_parse *param_1,newlz_encoder_parse *param_2,ulong64 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  newlz_encoder_parse *pnVar4;
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

// newLZ_encode_chunk<oo2::CTMF<unsigned_int,1,0,4>,0,1,8> @ 14f3328c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

long64 __cdecl
oo2::newLZ_encode_chunk<oo2::CTMF<unsigned_int,1,0,4>,0,1,8>
          (newlz_vtable *param_1,newlz_encoder_scratch *param_2,uchar *param_3,uchar *param_4,
          int param_5,uchar *param_6,uchar *param_7,long64 param_8,int *param_9,float *param_10,
          OodleKrakenChunkDeadlines *param_11)

{
  longlong *plVar1;
  undefined8 uVar2;
  uchar *puVar3;
  OodleLZ_CompressOptions *pOVar4;
  void *pvVar5;
  uint *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  char *pcVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong *puVar18;
  ulonglong *puVar19;
  ulonglong *puVar20;
  longlong lVar21;
  uint uVar22;
  long64 lVar23;
  uint uVar24;
  ulonglong *puVar25;
  longlong lVar26;
  char cVar27;
  int iVar28;
  short sVar29;
  char *pcVar30;
  char cVar31;
  int iVar32;
  int iVar33;
  ulonglong *puVar34;
  ulonglong *puVar35;
  bool bVar36;
  bool bVar37;
  undefined1 auStackY_248 [32];
  uint local_1e0;
  uint local_1d0;
  int local_1c0;
  uint local_1b8;
  uchar *local_1a8;
  uint local_198;
  newLZ_encoder_arrays local_120;
  uint auStack_78 [6];
  uint local_60 [4];
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_248;
  lVar23 = (long64)param_5;
  *param_9 = -1;
  if (0x80 < param_5) {
    pOVar4 = param_1->pOptions;
    local_198 = pOVar4->dictionarySize;
    if ((int)local_198 < 1) {
      local_198 = 0x40000000;
    }
    else if (0x40000000 < (int)local_198) {
      local_198 = 0x40000000;
    }
    pvVar5 = param_1->matcher;
    iVar32 = 4;
    if (4 < pOVar4->minMatchLen) {
      iVar32 = pOVar4->minMatchLen;
    }
    newLZ_encoder_arrays_point_to_scratch
              (&local_120,param_2,param_5,param_4,param_1->bitstream_flags);
    local_1d0 = 8;
    auStack_78[2] = 8;
    auStack_78[3] = 8;
    local_1b8 = 8;
    puVar34 = (ulonglong *)(param_4 + lVar23 + -8);
    auStack_78[4] = 8;
    lVar26 = 8;
    if (param_8 != 0) {
      lVar26 = 0;
    }
    puVar25 = (ulonglong *)(param_4 + lVar26);
    *(ulonglong **)((longlong)pvVar5 + 0x28) = puVar25;
    bVar9 = (byte)*(undefined4 *)((longlong)pvVar5 + 0x18) & 0x1f;
    uVar10 = (uint)(*(longlong *)((longlong)pvVar5 + 0x40) * *puVar25 >> 0x20);
    uVar10 = uVar10 << bVar9 | uVar10 >> 0x20 - bVar9;
    *(uint *)((longlong)pvVar5 + 0x48) = uVar10;
    local_1a8 = local_120.excess_u8_ptr;
    *(ulonglong *)((longlong)pvVar5 + 0x30) =
         *(longlong *)((longlong)pvVar5 + 8) +
         (ulonglong)(uVar10 & *(uint *)((longlong)pvVar5 + 0x1c)) * 4;
LAB_14f332a4f:
    uVar17 = 0x100;
    puVar35 = puVar25;
    while( true ) {
      uVar13 = 0;
      puVar18 = (ulonglong *)((longlong)puVar35 + 1);
      if (*(uint *)puVar18 == *(uint *)((longlong)puVar35 + (1 - (longlong)(int)local_1d0))) break;
      if ((longlong)(param_4 + lVar23 + -0x10) - (longlong)puVar35 <= (longlong)(uVar17 >> 8))
      goto LAB_14f3333e3;
      uVar10 = *(uint *)((longlong)pvVar5 + 0x48);
      puVar18 = (ulonglong *)((uVar17 >> 8) + (longlong)puVar35);
      uVar16 = (uint)*puVar35;
      uVar22 = (int)puVar35 - *(int *)((longlong)pvVar5 + 0x20);
      puVar6 = *(uint **)((longlong)pvVar5 + 0x30);
      *(ulonglong **)((longlong)pvVar5 + 0x28) = puVar18;
      bVar9 = (byte)*(undefined4 *)((longlong)pvVar5 + 0x18) & 0x1f;
      uVar11 = (uint)(*(longlong *)((longlong)pvVar5 + 0x40) * *puVar18 >> 0x20);
      uVar11 = uVar11 << bVar9 | uVar11 >> 0x20 - bVar9;
      *(uint *)((longlong)pvVar5 + 0x48) = uVar11;
      *(ulonglong *)((longlong)pvVar5 + 0x30) =
           *(longlong *)((longlong)pvVar5 + 8) +
           (ulonglong)(uVar11 & *(uint *)((longlong)pvVar5 + 0x1c)) * 4;
      local_1e0 = 0;
      iVar33 = -1;
      local_1c0 = -1;
      uVar11 = *(uint *)((longlong)puVar35 - (ulonglong)local_1d0);
      sVar29 = (short)uVar16;
      if (sVar29 == (short)uVar11) {
        uVar11 = uVar11 ^ uVar16;
        if (uVar11 == 0) {
          puVar20 = (ulonglong *)((longlong)puVar35 + 4);
          lVar26 = (longlong)((longlong)puVar35 - (ulonglong)local_1d0) - (longlong)puVar35;
          puVar19 = puVar20;
          if (puVar20 <= puVar34 + -1) {
LAB_14f332b30:
            uVar13 = *(ulonglong *)(lVar26 + (longlong)puVar19) ^ *puVar19;
            if (uVar13 == 0) goto code_r0x00014f332b39;
            uVar14 = 0;
            if (uVar13 != 0) {
              for (; (uVar13 >> uVar14 & 1) == 0; uVar14 = uVar14 + 1) {
              }
            }
            iVar33 = ((int)(uVar14 >> 3) - (int)puVar20) + (int)puVar19;
            goto LAB_14f332b65;
          }
LAB_14f332b45:
          lVar21 = (longlong)puVar19 - (longlong)puVar20;
          iVar33 = (int)lVar21;
          for (; (puVar19 < puVar34 &&
                 (iVar33 = (int)lVar21, (char)*puVar19 == *(char *)(lVar26 + (longlong)puVar19)));
              puVar19 = (ulonglong *)((longlong)puVar19 + 1)) {
            lVar21 = lVar21 + 1;
            iVar33 = (int)lVar21;
          }
LAB_14f332b65:
          local_1e0 = iVar33 + 4;
        }
        else {
          local_1e0 = 3 - ((uVar11 & 0xffffff) != 0);
        }
        uVar13 = (ulonglong)local_1e0;
        iVar33 = 0;
        local_1c0 = 0;
      }
      uVar11 = *(uint *)((longlong)puVar35 - (ulonglong)auStack_78[3]);
      if (sVar29 == (short)uVar11) {
        uVar11 = uVar11 ^ uVar16;
        if (uVar11 == 0) {
          puVar20 = (ulonglong *)((longlong)puVar35 + 4);
          lVar26 = (longlong)((longlong)puVar35 - (ulonglong)auStack_78[3]) - (longlong)puVar35;
          puVar19 = puVar20;
          if (puVar20 <= puVar34 + -1) {
LAB_14f332bc7:
            uVar14 = *(ulonglong *)(lVar26 + (longlong)puVar19) ^ *puVar19;
            if (uVar14 == 0) goto code_r0x00014f332bd0;
            uVar8 = 0;
            if (uVar14 != 0) {
              for (; (uVar14 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
              }
            }
            iVar28 = ((int)(uVar8 >> 3) - (int)puVar20) + (int)puVar19;
            goto LAB_14f332bf9;
          }
LAB_14f332bd9:
          lVar21 = (longlong)puVar19 - (longlong)puVar20;
          iVar28 = (int)lVar21;
          for (; (puVar19 < puVar34 &&
                 (iVar28 = (int)lVar21, (char)*puVar19 == *(char *)(lVar26 + (longlong)puVar19)));
              puVar19 = (ulonglong *)((longlong)puVar19 + 1)) {
            lVar21 = lVar21 + 1;
            iVar28 = (int)lVar21;
          }
LAB_14f332bf9:
          uVar11 = iVar28 + 4;
        }
        else {
          uVar11 = 3 - ((uVar11 & 0xffffff) != 0);
        }
        if ((int)uVar13 < (int)uVar11) {
          iVar33 = 1;
          local_1c0 = 1;
          uVar13 = (ulonglong)uVar11;
          local_1e0 = uVar11;
        }
      }
      uVar11 = *(uint *)((longlong)puVar35 - (ulonglong)local_1b8);
      if (sVar29 == (short)uVar11) {
        uVar11 = uVar11 ^ uVar16;
        if (uVar11 == 0) {
          puVar20 = (ulonglong *)((longlong)puVar35 + 4);
          lVar26 = (longlong)((longlong)puVar35 - (ulonglong)local_1b8) - (longlong)puVar35;
          puVar19 = puVar20;
          if (puVar20 <= puVar34 + -1) {
LAB_14f332c70:
            uVar14 = *(ulonglong *)(lVar26 + (longlong)puVar19) ^ *puVar19;
            if (uVar14 == 0) goto code_r0x00014f332c7d;
            uVar8 = 0;
            if (uVar14 != 0) {
              for (; (uVar14 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
              }
            }
            iVar28 = ((int)(uVar8 >> 3) - (int)puVar20) + (int)puVar19;
            goto LAB_14f332ca5;
          }
LAB_14f332c86:
          lVar21 = (longlong)puVar19 - (longlong)puVar20;
          iVar28 = (int)lVar21;
          for (; (puVar19 < puVar34 &&
                 (iVar28 = (int)lVar21, (char)*puVar19 == *(char *)(lVar26 + (longlong)puVar19)));
              puVar19 = (ulonglong *)((longlong)puVar19 + 1)) {
            lVar21 = lVar21 + 1;
            iVar28 = (int)lVar21;
          }
LAB_14f332ca5:
          uVar16 = iVar28 + 4;
        }
        else {
          uVar16 = 3 - ((uVar11 & 0xffffff) != 0);
        }
        if ((int)uVar13 < (int)uVar16) {
          iVar33 = 2;
          local_1c0 = 2;
          uVar13 = (ulonglong)uVar16;
          local_1e0 = uVar16;
        }
      }
      uVar11 = (uint)uVar13;
      if (3 < (int)uVar11) {
        uVar16 = -iVar33;
        uVar11 = *puVar6;
        *puVar6 = (uVar22 ^ uVar10) & 0x3ffffff ^ uVar10;
        puVar6[1] = uVar11;
LAB_14f332fa4:
        puVar18 = puVar35;
        uVar10 = uVar16;
        if (0 < (int)uVar16) goto LAB_14f333078;
        goto LAB_14f333065;
      }
      uVar16 = 0;
      uVar14 = uVar13;
      iVar28 = iVar32;
      if (0x37 < (longlong)puVar35 - (longlong)puVar25) {
        local_1e0 = uVar16;
        if (2 < (int)uVar11) {
          local_1e0 = uVar11;
        }
        uVar14 = (ulonglong)local_1e0;
        if (iVar32 < 5) {
          iVar28 = 5;
        }
      }
      uVar11 = *puVar6;
      uVar13 = 0;
      local_60[0] = uVar22 - uVar11 & 0x3ffffff;
      local_60[1] = uVar22 - puVar6[1] & 0x3ffffff;
      uVar24 = uVar16;
      if (((puVar6[1] ^ uVar10) & 0xfc000000) == 0) {
        uVar24 = 2;
      }
      uVar24 = ((uVar11 ^ uVar10) & 0xfc000000) == 0 | uVar24;
      pcVar30 = (char *)(longlong)(iVar28 + -1);
      if (uVar24 != 0) {
        do {
          uVar11 = 0;
          if (uVar24 != 0) {
            for (; (uVar24 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
            }
          }
          uVar24 = uVar24 & uVar24 - 1;
          uVar11 = local_60[uVar11];
          if (uVar11 < local_198) {
            if (uVar11 < 8) {
              uVar11 = 8;
            }
            if (((longlong)pcVar30 < (longlong)puVar34 - (longlong)puVar35) &&
               (pcVar30[(longlong)puVar35] == pcVar30[(longlong)puVar35 - (ulonglong)uVar11])) {
              lVar26 = ((longlong)puVar35 - (ulonglong)uVar11) - (longlong)puVar35;
              puVar20 = puVar35;
              if (puVar35 <= puVar34 + -1) {
LAB_14f332dd0:
                uVar14 = *(ulonglong *)(lVar26 + (longlong)puVar20) ^ *puVar20;
                if (uVar14 == 0) goto code_r0x00014f332ddd;
                uVar8 = 0;
                if (uVar14 != 0) {
                  for (; (uVar14 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
                  }
                }
                pcVar15 = (char *)(((uVar8 >> 3) - (longlong)puVar35) + (longlong)puVar20);
                goto LAB_14f332e09;
              }
LAB_14f332de6:
              pcVar15 = (char *)((longlong)puVar20 - (longlong)puVar35);
              for (puVar20 = (ulonglong *)(pcVar15 + (longlong)puVar35);
                  (puVar20 < puVar34 && ((char)*puVar20 == *(char *)(lVar26 + (longlong)puVar20)));
                  puVar20 = (ulonglong *)((longlong)puVar20 + 1)) {
                pcVar15 = pcVar15 + 1;
              }
LAB_14f332e09:
              if ((longlong)pcVar30 < (longlong)pcVar15) {
                iVar33 = (int)pcVar15;
                pcVar30 = pcVar15;
                if (((pOVar4->farMatchOffsetLog2 < 1) ||
                    ((int)uVar11 < 1 << ((byte)pOVar4->farMatchOffsetLog2 & 0x1f))) ||
                   (pOVar4->farMatchMinLen <= iVar33)) {
                  if (0xfffff < (int)uVar11) {
                    if ((int)uVar11 < 0x400000) {
                      if ((int)uVar11 < 0x200000) {
                        bVar37 = SBORROW4(iVar33,5);
                        bVar36 = iVar33 + -5 < 0;
                      }
                      else {
                        bVar37 = SBORROW4(iVar33,6);
                        bVar36 = iVar33 + -6 < 0;
                      }
                    }
                    else {
                      bVar37 = SBORROW4(iVar33,8);
                      bVar36 = iVar33 + -8 < 0;
                    }
                    if (bVar37 != bVar36) goto LAB_14f332ecf;
                  }
                  if ((5 < iVar33) || ((int)uVar11 < max_offset[iVar33])) {
                    iVar28 = (int)uVar13;
                    if (iVar28 <= iVar33) {
                      if (iVar33 == iVar28) {
                        bVar36 = (int)uVar11 < (int)uVar16;
LAB_14f332ec6:
                        if (!bVar36) goto LAB_14f332ecf;
                      }
                      else if (iVar33 <= iVar28 + 1) {
                        bVar36 = (int)uVar11 >> 7 <= (int)uVar16;
                        goto LAB_14f332ec6;
                      }
                      uVar13 = (ulonglong)pcVar15 & 0xffffffff;
                      uVar16 = uVar11;
                    }
                  }
                }
              }
            }
          }
LAB_14f332ecf:
        } while (uVar24 != 0);
        uVar14 = (ulonglong)local_1e0;
        uVar11 = *puVar6;
        iVar33 = local_1c0;
      }
      puVar6[1] = uVar11;
      *puVar6 = (uVar22 ^ uVar10) & 0x3ffffff ^ uVar10;
      iVar28 = (int)uVar14;
      if (uVar16 != 0) {
        iVar12 = (int)uVar13;
        if ((1 < iVar28) &&
           (((iVar12 <= iVar28 + 1 || ((iVar12 <= iVar28 + 2 && (0x3ff < (int)uVar16)))) ||
            ((iVar12 <= iVar28 + 3 && (0xffff < (int)uVar16)))))) {
          uVar16 = -iVar33;
          uVar13 = uVar14;
        }
        goto LAB_14f332fa4;
      }
      if (1 < iVar28) {
        uVar16 = -iVar33;
        uVar13 = uVar14;
        goto LAB_14f332fa4;
      }
      uVar17 = (ulonglong)((int)uVar17 + 1);
      puVar35 = puVar18;
    }
    puVar20 = (ulonglong *)((longlong)puVar35 + 5);
    lVar26 = -(longlong)(int)local_1d0;
    puVar19 = puVar20;
    if (puVar20 <= puVar34 + -1) {
LAB_14f332fd0:
      uVar17 = *(ulonglong *)(lVar26 + (longlong)puVar19) ^ *puVar19;
      if (uVar17 == 0) goto code_r0x00014f332fdd;
      uVar13 = 0;
      if (uVar17 != 0) {
        for (; (uVar17 >> uVar13 & 1) == 0; uVar13 = uVar13 + 1) {
        }
      }
      iVar33 = ((int)(uVar13 >> 3) - (int)puVar20) + (int)puVar19;
      goto LAB_14f333005;
    }
LAB_14f332fe6:
    lVar21 = (longlong)puVar19 - (longlong)puVar20;
    iVar33 = (int)lVar21;
    for (; (puVar19 < puVar34 &&
           (iVar33 = (int)lVar21, (char)*puVar19 == *(char *)((longlong)puVar19 + lVar26)));
        puVar19 = (ulonglong *)((longlong)puVar19 + 1)) {
      lVar21 = lVar21 + 1;
      iVar33 = (int)lVar21;
    }
LAB_14f333005:
    uVar13 = (ulonglong)(iVar33 + 4);
    uVar10 = *(uint *)((longlong)pvVar5 + 0x48);
    uVar16 = 0;
    puVar6 = *(uint **)((longlong)pvVar5 + 0x30);
    *(longlong **)((longlong)pvVar5 + 0x28) = (longlong *)((longlong)puVar35 + 2);
    bVar9 = (byte)*(undefined4 *)((longlong)pvVar5 + 0x18) & 0x1f;
    uVar11 = (uint)((ulonglong)
                    (*(longlong *)((longlong)pvVar5 + 0x40) * *(longlong *)((longlong)puVar35 + 2))
                   >> 0x20);
    uVar11 = uVar11 << bVar9 | uVar11 >> 0x20 - bVar9;
    *(uint *)((longlong)pvVar5 + 0x48) = uVar11;
    *(ulonglong *)((longlong)pvVar5 + 0x30) =
         *(longlong *)((longlong)pvVar5 + 8) +
         (ulonglong)(uVar11 & *(uint *)((longlong)pvVar5 + 0x1c)) * 4;
    iVar33 = *(int *)((longlong)pvVar5 + 0x20);
    puVar6[1] = *puVar6;
    *puVar6 = ((int)puVar35 - iVar33 ^ uVar10) & 0x3ffffff ^ uVar10;
LAB_14f333065:
    puVar35 = puVar18;
    uVar10 = auStack_78[2 - (longlong)(int)uVar16];
LAB_14f333078:
    uVar11 = (uint)uVar13;
    if (puVar25 < puVar35) {
      lVar26 = *(longlong *)((longlong)pvVar5 + 0x20);
      lVar21 = (longlong)puVar35 - lVar26;
      do {
        uVar11 = (uint)uVar13;
        if ((lVar21 <= (int)uVar10) ||
           (*(char *)(lVar26 + -1 + lVar21) != *(char *)((lVar26 - (int)uVar10) + -1 + lVar21)))
        break;
        puVar35 = (ulonglong *)((longlong)puVar35 + -1);
        lVar21 = lVar21 + -1;
        uVar11 = uVar11 + 1;
        uVar13 = (ulonglong)uVar11;
      } while (puVar25 < puVar35);
    }
    if ((uVar16 == 0) && (puVar35 == puVar25)) {
      uVar16 = 0xffffffff;
    }
    iVar33 = (int)puVar35 - (int)puVar25;
    if (iVar33 == 0) {
      cVar27 = '\0';
    }
    else if (iVar33 < 9) {
      iVar28 = iVar33 + -3;
      *local_1a8 = (uchar)iVar28;
      if (-1 < iVar28) {
        local_1a8 = local_1a8 + 1;
      }
      iVar12 = iVar33;
      if (-1 < iVar28) {
        iVar12 = 3;
      }
      cVar27 = (char)iVar12;
      *(ulonglong *)local_120.literals_ptr_raw = *puVar25;
      uVar17 = *puVar25;
      local_120.literals_ptr_raw =
           (uchar *)((longlong)local_120.literals_ptr_raw + (longlong)iVar33);
      uVar2 = *(undefined8 *)((longlong)puVar25 - (longlong)local_120.lastoffset);
      *(ulonglong *)local_120.literals_ptr_sub =
           CONCAT17((char)(uVar17 >> 0x38) - (char)((ulonglong)uVar2 >> 0x38),
                    CONCAT16((char)(uVar17 >> 0x30) - (char)((ulonglong)uVar2 >> 0x30),
                             CONCAT15((char)(uVar17 >> 0x28) - (char)((ulonglong)uVar2 >> 0x28),
                                      CONCAT14((char)(uVar17 >> 0x20) -
                                               (char)((ulonglong)uVar2 >> 0x20),
                                               CONCAT13((char)(uVar17 >> 0x18) -
                                                        (char)((ulonglong)uVar2 >> 0x18),
                                                        CONCAT12((char)(uVar17 >> 0x10) -
                                                                 (char)((ulonglong)uVar2 >> 0x10),
                                                                 CONCAT11((char)(uVar17 >> 8) -
                                                                          (char)((ulonglong)uVar2 >>
                                                                                8),(char)uVar17 -
                                                                                   (char)uVar2))))))
                   );
      local_120.literals_ptr_sub = local_120.literals_ptr_sub + iVar33;
      local_120.excess_u8_ptr = local_1a8;
    }
    else {
      cVar27 = '\x03';
      newLZ_encoder_arrays_put_long_lrl<1>(&local_120,(uchar *)puVar25,iVar33);
      local_1a8 = local_120.excess_u8_ptr;
    }
    uVar10 = auStack_78[3];
    iVar33 = uVar11 - 2;
    if (0xe < iVar33) {
      iVar33 = 0xf;
      if ((int)(uVar11 - 0x11) < 0xff) {
        *local_1a8 = (uchar)(uVar11 - 0x11);
      }
      else {
        *local_1a8 = 0xff;
        *local_120.excess_u32_ptr = uVar11 - 0x110;
        local_120.excess_u32_ptr = local_120.excess_u32_ptr + 1;
      }
      local_1a8 = local_1a8 + 1;
      local_120.excess_u8_ptr = local_1a8;
    }
    cVar27 = cVar27 + (char)iVar33 * '\x04';
    if ((int)uVar16 < 1) {
      lVar26 = (longlong)(int)-uVar16;
      cVar31 = (char)uVar16 * -0x40;
      local_120.lastoffset = auStack_78[lVar26 + 2];
      auStack_78[lVar26 + 2] = auStack_78[lVar26 + 1];
      auStack_78[lVar26 + 1] = auStack_78[lVar26];
      local_1b8 = auStack_78[4];
      auStack_78[2] = local_120.lastoffset;
      local_1d0 = local_120.lastoffset;
    }
    else {
      local_1b8 = auStack_78[3];
      auStack_78[3] = local_1d0;
      auStack_78[4] = uVar10;
      auStack_78[2] = uVar16;
      local_120.lastoffset = uVar16;
      if ((int)uVar16 < 0x7fff08) {
        uVar10 = uVar16 + 0xf8;
        iVar33 = 0x1f;
        if (uVar10 != 0) {
          for (; uVar10 >> iVar33 == 0; iVar33 = iVar33 + -1) {
          }
        }
        *local_120.offsets_u8_ptr = ((char)iVar33 + -8) * '\x10' | (byte)uVar10 & 0xf;
        *local_120.offsets_ptr = uVar16;
        local_120.offsets_u8_ptr = local_120.offsets_u8_ptr + 1;
        local_120.offsets_ptr = local_120.offsets_ptr + 1;
      }
      else {
        newLZ_encoder_arrays_put_long_offset(&local_120,uVar16);
        local_1a8 = local_120.excess_u8_ptr;
      }
      cVar31 = -0x40;
      local_1d0 = uVar16;
    }
    puVar3 = local_120.packets_ptr + 1;
    *local_120.packets_ptr = cVar27 + cVar31;
    lVar26 = (longlong)(int)uVar11;
    puVar25 = (ulonglong *)(lVar26 + (longlong)puVar35);
    local_120.packets_ptr = puVar3;
    if (puVar25 < param_4 + lVar23 + -0x10) {
      plVar7 = *(longlong **)((longlong)pvVar5 + 0x28);
      lVar21 = (longlong)puVar25 - lVar26;
      plVar1 = (longlong *)(lVar21 + lVar26);
      if (plVar1 <= plVar7) goto code_r0x00014f333300;
      iVar33 = *(int *)((longlong)pvVar5 + 0x20);
      puVar6 = *(uint **)((longlong)pvVar5 + 0x30);
      uVar10 = *puVar6;
      *puVar6 = ((int)plVar7 - iVar33 ^ *(uint *)((longlong)pvVar5 + 0x48)) & 0x3ffffff ^
                *(uint *)((longlong)pvVar5 + 0x48);
      puVar6[1] = uVar10;
      iVar28 = (*(int *)((longlong)pvVar5 + 0x28) - (int)lVar21) + 1;
      if (iVar28 < (int)uVar11) {
        lVar26 = (longlong)iVar28;
        do {
          plVar7 = (longlong *)(lVar26 + lVar21);
          lVar26 = lVar26 * 2;
          bVar9 = (byte)*(undefined4 *)((longlong)pvVar5 + 0x18) & 0x1f;
          uVar10 = (uint)((ulonglong)(*plVar7 * *(longlong *)((longlong)pvVar5 + 0x40)) >> 0x20);
          uVar10 = uVar10 << bVar9 | uVar10 >> 0x20 - bVar9;
          uVar17 = (ulonglong)(*(uint *)((longlong)pvVar5 + 0x1c) & uVar10);
          puVar6 = (uint *)(*(longlong *)((longlong)pvVar5 + 8) + uVar17 * 4);
          puVar6[1] = *(uint *)(*(longlong *)((longlong)pvVar5 + 8) + uVar17 * 4);
          iVar12 = iVar28 - iVar33;
          iVar28 = iVar28 * 2;
          *puVar6 = (iVar12 + (int)lVar21 ^ uVar10) & 0x3ffffff ^ uVar10;
        } while (iVar28 < (int)uVar11);
      }
      *(longlong **)((longlong)pvVar5 + 0x28) = plVar1;
      uVar10 = (uint)((ulonglong)(*plVar1 * *(longlong *)((longlong)pvVar5 + 0x40)) >> 0x20);
      goto LAB_14f3333a7;
    }
LAB_14f3333e3:
    newLZ_encoder_arrays_finish_chunk<1>(&local_120,(uchar *)puVar25);
    lVar23 = newLZ_encoder_arrays_output
                       (param_10,param_9,(newlz_passinfo *)0x0,param_6,param_7,param_1,param_2,
                        &local_120,param_8,param_11);
  }
  return lVar23;
code_r0x00014f332fdd:
  puVar19 = puVar19 + 1;
  if (puVar34 + -1 < puVar19) goto LAB_14f332fe6;
  goto LAB_14f332fd0;
code_r0x00014f332b39:
  puVar19 = puVar19 + 1;
  if (puVar34 + -1 < puVar19) goto LAB_14f332b45;
  goto LAB_14f332b30;
code_r0x00014f332bd0:
  puVar19 = puVar19 + 1;
  if (puVar34 + -1 < puVar19) goto LAB_14f332bd9;
  goto LAB_14f332bc7;
code_r0x00014f332c7d:
  puVar19 = puVar19 + 1;
  if (puVar34 + -1 < puVar19) goto LAB_14f332c86;
  goto LAB_14f332c70;
code_r0x00014f332ddd:
  puVar20 = puVar20 + 1;
  if (puVar34 + -1 < puVar20) goto LAB_14f332de6;
  goto LAB_14f332dd0;
code_r0x00014f333300:
  if (plVar7 != plVar1) {
    *(longlong **)((longlong)pvVar5 + 0x28) = plVar1;
    uVar10 = (uint)((ulonglong)(*(longlong *)((longlong)pvVar5 + 0x40) * *plVar1) >> 0x20);
LAB_14f3333a7:
    bVar9 = (byte)*(undefined4 *)((longlong)pvVar5 + 0x18) & 0x1f;
    uVar10 = uVar10 << bVar9 | uVar10 >> 0x20 - bVar9;
    *(uint *)((longlong)pvVar5 + 0x48) = uVar10;
    *(ulonglong *)((longlong)pvVar5 + 0x30) =
         *(longlong *)((longlong)pvVar5 + 8) +
         (ulonglong)(*(uint *)((longlong)pvVar5 + 0x1c) & uVar10) * 4;
  }
  goto LAB_14f332a4f;
}

// newLZ_encode_chunk<oo2::CTMF<unsigned_int,2,8,4>,2,1,0> @ 14f3334a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014f333c1a) */
/* WARNING: Removing unreachable block (ram,0x00014f3340b1) */
/* WARNING: Removing unreachable block (ram,0x00014f333b6d) */
/* WARNING: Removing unreachable block (ram,0x00014f333c2b) */
/* WARNING: Removing unreachable block (ram,0x00014f333b87) */
/* WARNING: Removing unreachable block (ram,0x00014f3340dd) */
/* WARNING: Removing unreachable block (ram,0x00014f33412d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

long64 __cdecl
oo2::newLZ_encode_chunk<oo2::CTMF<unsigned_int,2,8,4>,2,1,0>
          (newlz_vtable *param_1,newlz_encoder_scratch *param_2,uchar *param_3,uchar *param_4,
          int param_5,uchar *param_6,uchar *param_7,long64 param_8,int *param_9,float *param_10,
          OodleKrakenChunkDeadlines *param_11)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint *puVar3;
  uchar *puVar4;
  longlong *plVar5;
  undefined1 (*pauVar6) [16];
  uint uVar7;
  ulonglong uVar8;
  byte bVar9;
  ushort uVar10;
  uint uVar11;
  CTMF<unsigned_int,2,8,4> *pCVar12;
  OodleLZ_CompressOptions *pOVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  ulonglong *puVar18;
  ulonglong uVar19;
  uchar *puVar20;
  int iVar21;
  ulonglong *puVar22;
  ulonglong *puVar23;
  long64 lVar24;
  ulonglong *puVar25;
  int iVar26;
  longlong lVar27;
  char cVar28;
  int iVar29;
  short sVar30;
  longlong lVar31;
  ulonglong *puVar32;
  char cVar33;
  CTMF<unsigned_int,2,8,4> *pCVar34;
  ulonglong *puVar35;
  int iVar36;
  bool bVar37;
  bool bVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auStackY_258 [32];
  int local_200;
  int local_1ec;
  uint local_1e4;
  uint local_1e0;
  uint local_1d0;
  uchar *local_1c8;
  match local_1b0;
  CTMF<unsigned_int,2,8,4> *local_1a8;
  uint local_1a0;
  undefined1 (*local_198) [16];
  undefined1 (*local_190) [16];
  OodleLZ_CompressOptions *local_188;
  ulonglong *local_180;
  OodleKrakenChunkDeadlines *local_178;
  newlz_encoder_scratch *local_170;
  newlz_vtable *local_168;
  uchar *local_160;
  uchar *local_158;
  int *local_150;
  float *local_148;
  newLZ_encoder_arrays local_140;
  newLZ_LOs local_a0;
  uint local_80 [4];
  uint local_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_258;
  lVar24 = (long64)param_5;
  local_158 = param_6;
  local_148 = param_10;
  local_160 = param_7;
  local_178 = param_11;
  *param_9 = -1;
  local_150 = param_9;
  if (0x80 < param_5) {
    local_188 = param_1->pOptions;
    local_1e4 = local_188->dictionarySize;
    if ((int)local_1e4 < 1) {
      local_1e4 = 0x40000000;
    }
    else if (0x40000000 < (int)local_1e4) {
      local_1e4 = 0x40000000;
    }
    pCVar34 = param_1->matcher;
    iVar36 = 4;
    if (4 < local_188->minMatchLen) {
      iVar36 = local_188->minMatchLen;
    }
    local_1a8 = pCVar34;
    local_170 = param_2;
    local_168 = param_1;
    newLZ_encoder_arrays_point_to_scratch
              (&local_140,param_2,param_5,param_4,param_1->bitstream_flags);
    puVar3 = (pCVar34->m_hash_table).m_ptr;
    local_1e0 = 8;
    local_a0.lasts.contents[4] = 8;
    puVar35 = (ulonglong *)(param_4 + lVar24 + -8);
    local_a0.lasts.contents[5] = 8;
    lVar27 = 8;
    if (param_8 != 0) {
      lVar27 = 0;
    }
    local_1d0 = 8;
    puVar32 = (ulonglong *)(param_4 + lVar27);
    local_a0.lasts.contents[6] = 8;
    pCVar34->m_next_ptr = (uchar *)puVar32;
    bVar9 = (byte)pCVar34->m_table_size_bits & 0x1f;
    uVar14 = (uint)(pCVar34->m_hash_mul * *puVar32 >> 0x20);
    uVar14 = uVar14 << bVar9 | uVar14 >> 0x20 - bVar9;
    pCVar34->m_next_hash = uVar14;
    pCVar34->m_next_row = puVar3 + (uVar14 & pCVar34->m_hash_row_mask);
    local_1c8 = local_140.excess_u8_ptr;
    pCVar34->m_next_row_second =
         puVar3 + (*puVar32 * -0x30e44323485a9b9d >>
                   (0x40U - (char)pCVar34->m_table_size_bits & 0x3f) & 0xfffffffffffffffc);
    puVar18 = (ulonglong *)(param_4 + lVar24 + -0x10);
    puVar23 = puVar32;
LAB_14f333660:
    puVar25 = puVar23;
    pOVar13 = local_188;
    pCVar12 = local_1a8;
    if (1 < (longlong)puVar18 - (longlong)puVar25) {
      local_198 = (undefined1 (*) [16])pCVar34->m_next_row;
      local_180 = (ulonglong *)((longlong)puVar25 + 1);
      uVar14 = (uint)*puVar25;
      puVar3 = (pCVar34->m_hash_table).m_ptr;
      local_1a0 = (int)puVar25 - *(int *)&pCVar34->m_base_ptr;
      local_190 = (undefined1 (*) [16])pCVar34->m_next_row_second;
      uVar16 = pCVar34->m_next_hash;
      pCVar34->m_next_ptr = (uchar *)local_180;
      bVar9 = (byte)pCVar34->m_table_size_bits & 0x1f;
      uVar15 = (uint)(pCVar34->m_hash_mul * *local_180 >> 0x20);
      uVar15 = uVar15 << bVar9 | uVar15 >> 0x20 - bVar9;
      pCVar34->m_next_hash = uVar15;
      pCVar34->m_next_row = puVar3 + (uVar15 & pCVar34->m_hash_row_mask);
      pCVar34->m_next_row_second =
           puVar3 + (*local_180 * -0x30e44323485a9b9d >>
                     (0x40U - (char)pCVar34->m_table_size_bits & 0x3f) & 0xfffffffffffffffc);
      iVar26 = -1;
      local_1ec = -1;
      local_200 = 0;
      uVar15 = *(uint *)((longlong)puVar25 - (ulonglong)local_1e0);
      sVar30 = (short)uVar14;
      if (sVar30 == (short)uVar15) {
        uVar15 = uVar15 ^ uVar14;
        if (uVar15 == 0) {
          puVar23 = (ulonglong *)((longlong)puVar25 + 4);
          lVar27 = (longlong)((longlong)puVar25 - (ulonglong)local_1e0) - (longlong)puVar25;
          puVar22 = puVar23;
          if (puVar23 <= puVar35 + -1) {
LAB_14f333750:
            uVar19 = *(ulonglong *)(lVar27 + (longlong)puVar22) ^ *puVar22;
            if (uVar19 == 0) goto code_r0x00014f333759;
            uVar8 = 0;
            if (uVar19 != 0) {
              for (; (uVar19 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
              }
            }
            local_200 = ((int)(uVar8 >> 3) - (int)puVar23) + (int)puVar22;
            goto LAB_14f333785;
          }
LAB_14f333765:
          lVar31 = (longlong)puVar22 - (longlong)puVar23;
          local_200 = (int)lVar31;
          for (; (puVar22 < puVar35 &&
                 (local_200 = (int)lVar31, (uchar)*puVar22 == *(uchar *)((longlong)puVar22 + lVar27)
                 )); puVar22 = (ulonglong *)((longlong)puVar22 + 1)) {
            lVar31 = lVar31 + 1;
            local_200 = (int)lVar31;
          }
LAB_14f333785:
          local_200 = local_200 + 4;
        }
        else {
          local_200 = 3 - (uint)((uVar15 & 0xffffff) != 0);
        }
        iVar26 = 0;
        local_1ec = 0;
      }
      uVar15 = *(uint *)((longlong)puVar25 - (ulonglong)(uint)local_a0.lasts.contents[5]);
      if (sVar30 == (short)uVar15) {
        uVar15 = uVar15 ^ uVar14;
        if (uVar15 == 0) {
          puVar23 = (ulonglong *)((longlong)puVar25 + 4);
          lVar27 = (longlong)((longlong)puVar25 - (ulonglong)(uint)local_a0.lasts.contents[5]) -
                   (longlong)puVar25;
          puVar22 = puVar23;
          if (puVar23 <= puVar35 + -1) {
LAB_14f3337e5:
            uVar19 = *(ulonglong *)(lVar27 + (longlong)puVar22) ^ *puVar22;
            if (uVar19 == 0) goto code_r0x00014f3337ee;
            uVar8 = 0;
            if (uVar19 != 0) {
              for (; (uVar19 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
              }
            }
            iVar21 = ((int)(uVar8 >> 3) - (int)puVar23) + (int)puVar22;
            goto LAB_14f333819;
          }
LAB_14f3337f7:
          lVar31 = (longlong)puVar22 - (longlong)puVar23;
          iVar21 = (int)lVar31;
          for (; (puVar22 < puVar35 &&
                 (iVar21 = (int)lVar31, (uchar)*puVar22 == *(uchar *)((longlong)puVar22 + lVar27)));
              puVar22 = (ulonglong *)((longlong)puVar22 + 1)) {
            lVar31 = lVar31 + 1;
            iVar21 = (int)lVar31;
          }
LAB_14f333819:
          iVar21 = iVar21 + 4;
        }
        else {
          iVar21 = 3 - (uint)((uVar15 & 0xffffff) != 0);
        }
        if (local_200 < iVar21) {
          iVar26 = 1;
          local_1ec = 1;
          local_200 = iVar21;
        }
      }
      uVar15 = *(uint *)((longlong)puVar25 - (ulonglong)local_1d0);
      if (sVar30 == (short)uVar15) {
        uVar15 = uVar15 ^ uVar14;
        if (uVar15 == 0) {
          puVar23 = (ulonglong *)((longlong)puVar25 + 4);
          lVar27 = (longlong)((longlong)puVar25 - (ulonglong)local_1d0) - (longlong)puVar25;
          puVar22 = puVar23;
          if (puVar23 <= puVar35 + -1) {
LAB_14f333890:
            uVar19 = *(ulonglong *)(lVar27 + (longlong)puVar22) ^ *puVar22;
            if (uVar19 == 0) goto code_r0x00014f33389d;
            uVar8 = 0;
            if (uVar19 != 0) {
              for (; (uVar19 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
              }
            }
            iVar21 = ((int)(uVar8 >> 3) - (int)puVar23) + (int)puVar22;
            goto LAB_14f3338c5;
          }
LAB_14f3338a6:
          lVar31 = (longlong)puVar22 - (longlong)puVar23;
          iVar21 = (int)lVar31;
          for (; (puVar22 < puVar35 &&
                 (iVar21 = (int)lVar31, (uchar)*puVar22 == *(uchar *)((longlong)puVar22 + lVar27)));
              puVar22 = (ulonglong *)((longlong)puVar22 + 1)) {
            lVar31 = lVar31 + 1;
            iVar21 = (int)lVar31;
          }
LAB_14f3338c5:
          iVar21 = iVar21 + 4;
        }
        else {
          iVar21 = 3 - (uint)((uVar15 & 0xffffff) != 0);
        }
        if (local_200 < iVar21) {
          iVar26 = 2;
          local_1ec = 2;
          local_200 = iVar21;
        }
      }
      uVar14 = local_1e0;
      if (3 < local_200) {
        auVar45 = ZEXT416((local_1a0 ^ uVar16) & 0x3ffffff ^ uVar16);
        auVar44._0_8_ = *(ulonglong *)*local_198 << 0x20;
        auVar44._8_8_ = *(longlong *)(*local_198 + 8) << 0x20 | *(ulonglong *)*local_198 >> 0x20;
        *local_198 = auVar44 | auVar45;
        auVar43._0_8_ = *(ulonglong *)*local_190 << 0x20;
        auVar43._8_8_ = *(longlong *)(*local_190 + 8) << 0x20 | *(ulonglong *)*local_190 >> 0x20;
        *local_190 = auVar43 | auVar45;
        goto LAB_14f333c38;
      }
      iVar21 = iVar36;
      if (0x37 < (longlong)puVar25 - (longlong)puVar32) {
        iVar29 = 0;
        if (2 < local_200) {
          iVar29 = local_200;
        }
        local_200 = iVar29;
        if (iVar36 < 5) {
          iVar21 = 5;
        }
      }
      uVar16 = uVar16 & 0xfc000000;
      auVar44 = *local_198;
      auVar43 = *local_190;
      local_70 = local_1a0 - auVar43._0_4_ & ___xmm_03ffffff03ffffff03ffffff03ffffff;
      uStack_6c = local_1a0 - auVar43._4_4_ & _UNK_1531da904;
      uStack_68 = local_1a0 - auVar43._8_4_ & _UNK_1531da908;
      uStack_64 = local_1a0 - auVar43._12_4_ & _UNK_1531da90c;
      local_80[0] = local_1a0 - auVar44._0_4_ & ___xmm_03ffffff03ffffff03ffffff03ffffff;
      local_80[1] = local_1a0 - auVar44._4_4_ & _UNK_1531da904;
      local_80[2] = local_1a0 - auVar44._8_4_ & _UNK_1531da908;
      local_80[3] = local_1a0 - auVar44._12_4_ & _UNK_1531da90c;
      auVar45 = ___xmm_fc000000fc000000fc000000fc000000 & auVar44;
      auVar43 = ___xmm_fc000000fc000000fc000000fc000000 & auVar43;
      auVar46._0_4_ = -(uint)(auVar45._0_4_ == uVar16);
      auVar46._4_4_ = -(uint)(auVar45._4_4_ == uVar16);
      auVar46._8_4_ = -(uint)(auVar45._8_4_ == uVar16);
      auVar46._12_4_ = -(uint)(auVar45._12_4_ == uVar16);
      auVar45._0_4_ = -(uint)(auVar43._0_4_ == uVar16);
      auVar45._4_4_ = -(uint)(auVar43._4_4_ == uVar16);
      auVar45._8_4_ = -(uint)(auVar43._8_4_ == uVar16);
      auVar45._12_4_ = -(uint)(auVar43._12_4_ == uVar16);
      auVar43 = packssdw(auVar46,auVar45);
      auVar43 = packsswb(auVar43,ZEXT816(0));
      uVar10 = (ushort)(SUB161(auVar43 >> 7,0) & 1) | (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
               (ushort)(byte)(auVar43[0xf] >> 7) << 0xf;
      uVar15 = (uint)uVar10;
      if (local_198 == local_190) {
        uVar15 = uVar10 & 0xf;
      }
      puVar4 = (uchar *)(longlong)(iVar21 + -1);
      uVar11 = 0;
      iVar21 = 0;
joined_r0x00014f3339b3:
      if (uVar15 != 0) {
        uVar7 = 0;
        if (uVar15 != 0) {
          for (; (uVar15 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
          }
        }
        uVar15 = uVar15 & uVar15 - 1;
        uVar7 = local_80[uVar7];
        iVar26 = local_1ec;
        if (uVar7 < local_1e4) {
          if (uVar7 < 8) {
            uVar7 = 8;
          }
          if (((longlong)puVar4 < (longlong)puVar35 - (longlong)puVar25) &&
             (puVar4[(longlong)puVar25] == puVar4[(longlong)puVar25 - (ulonglong)uVar7])) {
            lVar27 = ((longlong)puVar25 - (ulonglong)uVar7) - (longlong)puVar25;
            puVar23 = puVar25;
            if (puVar25 <= puVar35 + -1) {
LAB_14f333a40:
              uVar19 = *(ulonglong *)(lVar27 + (longlong)puVar23) ^ *puVar23;
              if (uVar19 == 0) goto code_r0x00014f333a4d;
              uVar8 = 0;
              if (uVar19 != 0) {
                for (; (uVar19 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
                }
              }
              puVar20 = (uchar *)(((uVar8 >> 3) - (longlong)puVar25) + (longlong)puVar23);
              goto code_r0x00014f333a80;
            }
LAB_14f333a56:
            puVar20 = (uchar *)((longlong)puVar23 - (longlong)puVar25);
            for (puVar23 = (ulonglong *)(puVar20 + (longlong)puVar25);
                (puVar23 < puVar35 && ((uchar)*puVar23 == *(uchar *)((longlong)puVar23 + lVar27)));
                puVar23 = (ulonglong *)((longlong)puVar23 + 1)) {
              puVar20 = puVar20 + 1;
            }
code_r0x00014f333a80:
            if ((longlong)puVar4 < (longlong)puVar20) {
              iVar29 = (int)puVar20;
              puVar4 = puVar20;
              if (((local_188->farMatchOffsetLog2 < 1) ||
                  ((int)uVar7 < 1 << ((byte)local_188->farMatchOffsetLog2 & 0x1f))) ||
                 (local_188->farMatchMinLen <= iVar29)) {
                if (0xfffff < (int)uVar7) {
                  if ((int)uVar7 < 0x400000) {
                    if ((int)uVar7 < 0x200000) {
                      bVar38 = SBORROW4(iVar29,5);
                      bVar37 = iVar29 + -5 < 0;
                    }
                    else {
                      bVar38 = SBORROW4(iVar29,6);
                      bVar37 = iVar29 + -6 < 0;
                    }
                  }
                  else {
                    bVar38 = SBORROW4(iVar29,8);
                    bVar37 = iVar29 + -8 < 0;
                  }
                  if (bVar38 != bVar37) goto joined_r0x00014f3339b3;
                }
                if (((5 < iVar29) || ((int)uVar7 < max_offset[iVar29])) && (iVar21 <= iVar29)) {
                  if (iVar29 == iVar21) {
                    bVar37 = (int)uVar7 < (int)uVar11;
code_r0x00014f333b40:
                    if (!bVar37) goto joined_r0x00014f3339b3;
                  }
                  else if (iVar29 <= iVar21 + 1) {
                    bVar37 = (int)uVar7 >> 7 <= (int)uVar11;
                    goto code_r0x00014f333b40;
                  }
                  uVar11 = uVar7;
                  iVar21 = iVar29;
                }
              }
            }
          }
        }
        goto joined_r0x00014f3339b3;
      }
      auVar47._0_8_ = auVar44._0_8_ << 0x20;
      auVar47._8_8_ = auVar44._8_8_ << 0x20 | auVar44._0_8_ >> 0x20;
      auVar44 = ZEXT416(local_1a0 & 0x3ffffff | uVar16);
      *local_198 = auVar47 | auVar44;
      auVar39._0_8_ = *(ulonglong *)*local_190 << 0x20;
      auVar39._8_8_ = *(longlong *)(*local_190 + 8) << 0x20 | *(ulonglong *)*local_190 >> 0x20;
      *local_190 = auVar39 | auVar44;
      if (uVar11 == 0) goto code_r0x00014f333b98;
      if ((1 < local_200) &&
         (((iVar21 <= local_200 + 1 || ((iVar21 <= local_200 + 2 && (0x3ff < (int)uVar11)))) ||
          ((iVar21 <= local_200 + 3 && (0xffff < (int)uVar11)))))) goto LAB_14f333c38;
      goto joined_r0x00014f333c4c;
    }
LAB_14f3341c2:
    newLZ_encoder_arrays_finish_chunk<1>(&local_140,(uchar *)puVar32);
    lVar24 = newLZ_encoder_arrays_output
                       (local_148,local_150,(newlz_passinfo *)0x0,local_158,local_160,local_168,
                        local_170,&local_140,param_8,local_178);
  }
  return lVar24;
code_r0x00014f333759:
  puVar22 = puVar22 + 1;
  if (puVar35 + -1 < puVar22) goto LAB_14f333765;
  goto LAB_14f333750;
code_r0x00014f3337ee:
  puVar22 = puVar22 + 1;
  if (puVar35 + -1 < puVar22) goto LAB_14f3337f7;
  goto LAB_14f3337e5;
code_r0x00014f33389d:
  puVar22 = puVar22 + 1;
  if (puVar35 + -1 < puVar22) goto LAB_14f3338a6;
  goto LAB_14f333890;
code_r0x00014f333a4d:
  puVar23 = puVar23 + 1;
  if (puVar35 + -1 < puVar23) goto LAB_14f333a56;
  goto LAB_14f333a40;
code_r0x00014f333b98:
  puVar23 = local_180;
  pCVar34 = local_1a8;
  if (1 < local_200) {
LAB_14f333c38:
    iVar21 = local_200;
    uVar11 = -iVar26;
joined_r0x00014f333c4c:
    for (; local_1e0 = uVar11, (ulonglong *)((longlong)puVar25 + 1U) < puVar18;
        puVar25 = (ulonglong *)((longlong)puVar25 + lVar27)) {
      bVar37 = newLZ_get_match_heuristic<oo2::CTMF<unsigned_int,2,8,4>_>
                         (&local_1b0,pCVar12,&local_a0,(uchar *)((longlong)puVar25 + 1),
                          (uchar *)puVar35,iVar36,(uchar *)puVar32,local_1e4,pOVar13);
      if ((bVar37) && (local_1b0.ml != 0)) {
        if (local_1b0.off < 1) {
          iVar26 = 0;
        }
        else {
          iVar26 = 0x1f;
          if (local_1b0.off != 0) {
            for (; (uint)local_1b0.off >> iVar26 == 0; iVar26 = iVar26 + -1) {
            }
          }
          if (local_1b0.off == 0) {
            iVar26 = 0;
          }
          else {
            iVar26 = iVar26 + 1;
          }
          iVar26 = iVar26 + 2;
        }
        iVar29 = 0;
        if ((int)local_1e0 < 1) {
          iVar29 = -4;
        }
        else {
          iVar17 = 0x1f;
          if (local_1e0 != 0) {
            for (; local_1e0 >> iVar17 == 0; iVar17 = iVar17 + -1) {
            }
          }
          if (local_1e0 != 0) {
            iVar29 = iVar17 + 1;
          }
          iVar29 = iVar29 + -2;
        }
        if (((local_1b0.ml - iVar21) * 4 - iVar26) + iVar29 < 1) goto LAB_14f333d0d;
        lVar27 = 1;
      }
      else {
LAB_14f333d0d:
        uVar14 = local_a0.lasts.contents[4];
        if ((((puVar18 <= (ulonglong *)((longlong)puVar25 + 2)) || (iVar21 == 2)) ||
            (bVar37 = newLZ_get_match_heuristic<oo2::CTMF<unsigned_int,2,8,4>_>
                                (&local_1b0,pCVar12,&local_a0,(uchar *)((longlong)puVar25 + 2),
                                 (uchar *)puVar35,iVar36,(uchar *)puVar32,local_1e4,pOVar13),
            uVar14 = local_a0.lasts.contents[4], !bVar37)) || (local_1b0.ml == 0)) break;
        if (local_1b0.off < 1) {
          iVar26 = 0;
        }
        else {
          iVar26 = 0x1f;
          if (local_1b0.off != 0) {
            for (; (uint)local_1b0.off >> iVar26 == 0; iVar26 = iVar26 + -1) {
            }
          }
          if (local_1b0.off == 0) {
            iVar26 = 0;
          }
          else {
            iVar26 = iVar26 + 1;
          }
          iVar26 = iVar26 + 2;
        }
        iVar29 = 0;
        if ((int)local_1e0 < 1) {
          iVar29 = -4;
        }
        else {
          iVar17 = 0x1f;
          if (local_1e0 != 0) {
            for (; local_1e0 >> iVar17 == 0; iVar17 = iVar17 + -1) {
            }
          }
          if (local_1e0 != 0) {
            iVar29 = iVar17 + 1;
          }
          iVar29 = iVar29 + -2;
        }
        if (((local_1b0.ml - iVar21) * 4 - iVar26) + iVar29 < 4) break;
        lVar27 = 2;
      }
      iVar21 = local_1b0.ml;
      uVar11 = local_1b0.off;
      uVar14 = local_a0.lasts.contents[4];
    }
    uVar16 = local_1e0;
    if ((int)local_1e0 < 1) {
      uVar16 = *(uint *)((longlong)&local_a0 + (longlong)(int)local_1e0 * -4 + 0x10);
    }
    if (puVar32 < puVar25) {
      puVar4 = pCVar12->m_base_ptr;
      lVar27 = (longlong)puVar25 - (longlong)puVar4;
      do {
        if ((lVar27 <= (int)uVar16) ||
           (puVar4[lVar27 + -1] != puVar4[lVar27 + (-1 - (longlong)(int)uVar16)])) break;
        puVar25 = (ulonglong *)((longlong)puVar25 + -1);
        lVar27 = lVar27 + -1;
        iVar21 = iVar21 + 1;
      } while (puVar32 < puVar25);
    }
    if ((local_1e0 == 0) && (puVar25 == puVar32)) {
      local_1e0 = 0xffffffff;
    }
    iVar26 = (int)puVar25 - (int)puVar32;
    if (iVar26 == 0) {
      cVar28 = '\0';
    }
    else if (iVar26 < 9) {
      *local_1c8 = (uchar)(iVar26 + -3);
      iVar29 = iVar26;
      if (-1 < iVar26 + -3) {
        iVar29 = 3;
        local_1c8 = local_1c8 + 1;
      }
      cVar28 = (char)iVar29;
      *(ulonglong *)local_140.literals_ptr_raw = *puVar32;
      uVar19 = *puVar32;
      local_140.literals_ptr_raw =
           (uchar *)((longlong)local_140.literals_ptr_raw + (longlong)iVar26);
      uVar2 = *(undefined8 *)((longlong)puVar32 - (longlong)local_140.lastoffset);
      *(ulonglong *)local_140.literals_ptr_sub =
           CONCAT17((char)(uVar19 >> 0x38) - (char)((ulonglong)uVar2 >> 0x38),
                    CONCAT16((char)(uVar19 >> 0x30) - (char)((ulonglong)uVar2 >> 0x30),
                             CONCAT15((char)(uVar19 >> 0x28) - (char)((ulonglong)uVar2 >> 0x28),
                                      CONCAT14((char)(uVar19 >> 0x20) -
                                               (char)((ulonglong)uVar2 >> 0x20),
                                               CONCAT13((char)(uVar19 >> 0x18) -
                                                        (char)((ulonglong)uVar2 >> 0x18),
                                                        CONCAT12((char)(uVar19 >> 0x10) -
                                                                 (char)((ulonglong)uVar2 >> 0x10),
                                                                 CONCAT11((char)(uVar19 >> 8) -
                                                                          (char)((ulonglong)uVar2 >>
                                                                                8),(char)uVar19 -
                                                                                   (char)uVar2))))))
                   );
      local_140.literals_ptr_sub = local_140.literals_ptr_sub + iVar26;
      local_140.excess_u8_ptr = local_1c8;
    }
    else {
      cVar28 = '\x03';
      newLZ_encoder_arrays_put_long_lrl<1>(&local_140,(uchar *)puVar32,iVar26);
      local_1c8 = local_140.excess_u8_ptr;
    }
    iVar29 = local_a0.lasts.contents[5];
    iVar26 = iVar21 + -2;
    if (0xe < iVar26) {
      iVar26 = 0xf;
      if (iVar21 + -0x11 < 0xff) {
        *local_1c8 = (uchar)(iVar21 + -0x11);
      }
      else {
        *local_1c8 = 0xff;
        *local_140.excess_u32_ptr = iVar21 - 0x110;
        local_140.excess_u32_ptr = local_140.excess_u32_ptr + 1;
      }
      local_1c8 = local_1c8 + 1;
      local_140.excess_u8_ptr = local_1c8;
    }
    cVar28 = cVar28 + (char)iVar26 * '\x04';
    if ((int)local_1e0 < 1) {
      lVar27 = (longlong)(int)-local_1e0;
      cVar33 = (char)local_1e0 * -0x40;
      local_1e0 = local_a0.lasts.contents[lVar27 + 4];
      iVar26 = local_a0.lasts.contents[lVar27 + 2];
      local_a0.lasts.contents[lVar27 + 4] = local_a0.lasts.contents[lVar27 + 3];
      local_a0.lasts.contents[lVar27 + 3] = iVar26;
      local_1d0 = local_a0.lasts.contents[6];
      local_a0.lasts.contents[4] = local_1e0;
      local_140.lastoffset = local_1e0;
    }
    else {
      local_a0.lasts.contents[4] = local_1e0;
      local_1d0 = local_a0.lasts.contents[5];
      local_a0.lasts.contents[5] = uVar14;
      local_a0.lasts.contents[6] = iVar29;
      local_140.lastoffset = local_1e0;
      if ((int)local_1e0 < 0x7fff08) {
        uVar14 = local_1e0 + 0xf8;
        iVar26 = 0x1f;
        if (uVar14 != 0) {
          for (; uVar14 >> iVar26 == 0; iVar26 = iVar26 + -1) {
          }
        }
        *local_140.offsets_u8_ptr = ((char)iVar26 + -8) * '\x10' | (byte)uVar14 & 0xf;
        *local_140.offsets_ptr = local_1e0;
        local_140.offsets_u8_ptr = local_140.offsets_u8_ptr + 1;
        local_140.offsets_ptr = local_140.offsets_ptr + 1;
      }
      else {
        newLZ_encoder_arrays_put_long_offset(&local_140,local_1e0);
        local_1c8 = local_140.excess_u8_ptr;
      }
      cVar33 = -0x40;
    }
    puVar4 = local_140.packets_ptr + 1;
    *local_140.packets_ptr = cVar28 + cVar33;
    lVar27 = (longlong)iVar21;
    puVar32 = (ulonglong *)(lVar27 + (longlong)puVar25);
    local_140.packets_ptr = puVar4;
    if (puVar18 <= puVar32) goto LAB_14f3341c2;
    lVar31 = (longlong)puVar32 - lVar27;
    plVar5 = (longlong *)local_1a8->m_next_ptr;
    plVar1 = (longlong *)(lVar31 + lVar27);
    puVar23 = puVar32;
    pCVar34 = local_1a8;
    if (plVar5 < plVar1) {
      iVar26 = *(int *)&local_1a8->m_base_ptr;
      pauVar6 = (undefined1 (*) [16])local_1a8->m_next_row;
      auVar40._0_8_ = *(ulonglong *)*pauVar6 << 0x20;
      auVar40._8_8_ = *(longlong *)(*pauVar6 + 8) << 0x20 | *(ulonglong *)*pauVar6 >> 0x20;
      *pauVar6 = ZEXT416(((int)plVar5 - iVar26 ^ local_1a8->m_next_hash) & 0x3ffffff ^
                         local_1a8->m_next_hash) | auVar40;
      pauVar6 = (undefined1 (*) [16])local_1a8->m_next_row_second;
      auVar41._0_8_ = *(ulonglong *)*pauVar6 << 0x20;
      auVar41._8_8_ = *(longlong *)(*pauVar6 + 8) << 0x20 | *(ulonglong *)*pauVar6 >> 0x20;
      *pauVar6 = ZEXT416((*(int *)&local_1a8->m_next_ptr - iVar26 ^ local_1a8->m_next_hash) &
                         0x3ffffff ^ local_1a8->m_next_hash) | auVar41;
      iVar29 = (*(int *)&local_1a8->m_next_ptr - (int)lVar31) + 1;
      if (iVar29 < iVar21) {
        lVar27 = (longlong)iVar29;
        do {
          plVar5 = (longlong *)(lVar27 + lVar31);
          lVar27 = lVar27 * 2;
          puVar3 = (local_1a8->m_hash_table).m_ptr;
          bVar9 = (byte)local_1a8->m_table_size_bits & 0x1f;
          uVar14 = (uint)(*plVar5 * local_1a8->m_hash_mul >> 0x20);
          uVar16 = uVar14 << bVar9 | uVar14 >> 0x20 - bVar9;
          uVar14 = local_1a8->m_hash_row_mask & uVar16;
          puVar25 = (ulonglong *)(puVar3 + uVar14);
          uVar19 = *puVar25;
          auVar42._0_8_ = uVar19 << 0x20;
          auVar42._8_8_ = puVar25[1] << 0x20 | uVar19 >> 0x20;
          iVar17 = iVar29 - iVar26;
          iVar29 = iVar29 * 2;
          *(undefined1 (*) [16])(puVar3 + uVar14) =
               ZEXT416((iVar17 + (int)lVar31 ^ uVar16) & 0x3ffffff ^ uVar16) | auVar42;
        } while (iVar29 < iVar21);
      }
    }
    else if (plVar5 == plVar1) goto LAB_14f333660;
    puVar3 = (local_1a8->m_hash_table).m_ptr;
    local_1a8->m_next_ptr = (uchar *)plVar1;
    bVar9 = (byte)local_1a8->m_table_size_bits & 0x1f;
    uVar14 = (uint)(local_1a8->m_hash_mul * *plVar1 >> 0x20);
    uVar14 = uVar14 << bVar9 | uVar14 >> 0x20 - bVar9;
    local_1a8->m_next_hash = uVar14;
    local_1a8->m_next_row = puVar3 + (local_1a8->m_hash_row_mask & uVar14);
    local_1a8->m_next_row_second =
         puVar3 + ((ulonglong)(*plVar1 * -0x30e44323485a9b9d) >>
                   (0x40U - (char)local_1a8->m_table_size_bits & 0x3f) & 0xfffffffffffffffc);
  }
  goto LAB_14f333660;
}

// newLZ_encode_chunk<oo2::CTMF<unsigned_int,3,0,4>,1,1,0> @ 14f334280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

long64 __cdecl
oo2::newLZ_encode_chunk<oo2::CTMF<unsigned_int,3,0,4>,1,1,0>
          (newlz_vtable *param_1,newlz_encoder_scratch *param_2,uchar *param_3,uchar *param_4,
          int param_5,uchar *param_6,uchar *param_7,long64 param_8,int *param_9,float *param_10,
          OodleKrakenChunkDeadlines *param_11)

{
  longlong *plVar1;
  uint *puVar2;
  undefined8 uVar3;
  uint uVar4;
  OodleLZ_CompressOptions *pOVar5;
  CTMF<unsigned_int,3,0,4> *pCVar6;
  uint *puVar7;
  longlong *plVar8;
  ulonglong uVar9;
  byte bVar10;
  ushort uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  ulonglong uVar19;
  uchar *puVar20;
  int iVar21;
  ulonglong *puVar22;
  ulonglong *puVar23;
  ulonglong uVar24;
  ulonglong *puVar25;
  uint uVar26;
  long64 lVar27;
  ulonglong *puVar28;
  ulonglong *puVar29;
  longlong lVar30;
  char cVar31;
  short sVar32;
  uchar *puVar33;
  longlong lVar34;
  char cVar35;
  int iVar36;
  int iVar37;
  uint uVar38;
  int iVar39;
  ulonglong *puVar40;
  bool bVar41;
  bool bVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auStackY_278 [32];
  int local_220;
  uint local_210;
  int local_1f8;
  uint local_1ec;
  uint local_1e8;
  uchar *local_1e0;
  ulonglong *local_1d8;
  match local_1a8;
  ulonglong *local_1a0;
  OodleKrakenChunkDeadlines *local_198;
  newlz_encoder_scratch *local_190;
  newlz_vtable *local_188;
  uchar *local_180;
  uchar *local_178;
  int *local_170;
  float *local_168;
  newLZ_encoder_arrays local_160;
  newLZ_LOs local_c0;
  uint local_a0 [4];
  uint local_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_278;
  lVar27 = (long64)param_5;
  local_178 = param_6;
  local_168 = param_10;
  local_180 = param_7;
  local_198 = param_11;
  local_170 = param_9;
  *param_9 = -1;
  if (0x80 < param_5) {
    pOVar5 = param_1->pOptions;
    local_1ec = pOVar5->dictionarySize;
    if ((int)local_1ec < 1) {
      local_1ec = 0x40000000;
    }
    else if (0x40000000 < (int)local_1ec) {
      local_1ec = 0x40000000;
    }
    pCVar6 = param_1->matcher;
    iVar36 = 4;
    if (4 < pOVar5->minMatchLen) {
      iVar36 = pOVar5->minMatchLen;
    }
    local_190 = param_2;
    local_188 = param_1;
    newLZ_encoder_arrays_point_to_scratch
              (&local_160,param_2,param_5,param_4,param_1->bitstream_flags);
    local_210 = 8;
    uVar24 = 8;
    local_c0.lasts.contents[4] = 8;
    local_c0.lasts.contents[5] = 8;
    local_1e8 = 8;
    puVar40 = (ulonglong *)(param_4 + lVar27 + -8);
    local_c0.lasts.contents[6] = 8;
    lVar30 = 8;
    if (param_8 != 0) {
      lVar30 = 0;
    }
    local_1d8 = (ulonglong *)(param_4 + lVar30);
    pCVar6->m_next_ptr = (uchar *)local_1d8;
    bVar10 = (byte)pCVar6->m_table_size_bits & 0x1f;
    uVar15 = (uint)(pCVar6->m_hash_mul * *local_1d8 >> 0x20);
    uVar15 = uVar15 << bVar10 | uVar15 >> 0x20 - bVar10;
    pCVar6->m_next_hash = uVar15;
    pCVar6->m_next_row = (pCVar6->m_hash_table).m_ptr + (uVar15 & pCVar6->m_hash_row_mask);
    puVar22 = (ulonglong *)(param_4 + lVar27 + -0x10);
    local_1e0 = local_160.excess_u8_ptr;
    puVar29 = local_1d8;
    while (1 < (longlong)puVar22 - (longlong)puVar29) {
      uVar15 = pCVar6->m_next_hash;
      puVar28 = (ulonglong *)((longlong)puVar29 + 1);
      uVar4 = (uint)*puVar29;
      uVar26 = (int)puVar29 - *(int *)&pCVar6->m_base_ptr;
      puVar7 = pCVar6->m_next_row;
      pCVar6->m_next_ptr = (uchar *)puVar28;
      bVar10 = (byte)pCVar6->m_table_size_bits & 0x1f;
      uVar16 = (uint)(pCVar6->m_hash_mul * *puVar28 >> 0x20);
      uVar16 = uVar16 << bVar10 | uVar16 >> 0x20 - bVar10;
      pCVar6->m_next_hash = uVar16;
      pCVar6->m_next_row = (pCVar6->m_hash_table).m_ptr + (uVar16 & pCVar6->m_hash_row_mask);
      local_220 = 0;
      iVar37 = -1;
      local_1f8 = -1;
      uVar16 = *(uint *)((longlong)puVar29 - uVar24);
      sVar32 = (short)uVar4;
      if (sVar32 == (short)uVar16) {
        uVar16 = uVar16 ^ uVar4;
        if (uVar16 == 0) {
          puVar25 = (ulonglong *)((longlong)puVar29 + 4);
          lVar30 = (longlong)((longlong)puVar29 - uVar24) - (longlong)puVar29;
          puVar23 = puVar25;
          if (puVar25 <= puVar40 + -1) {
LAB_14f3344d5:
            uVar24 = *(ulonglong *)(lVar30 + (longlong)puVar23) ^ *puVar23;
            if (uVar24 == 0) goto code_r0x00014f3344de;
            uVar19 = 0;
            if (uVar24 != 0) {
              for (; (uVar24 >> uVar19 & 1) == 0; uVar19 = uVar19 + 1) {
              }
            }
            local_220 = ((int)(uVar19 >> 3) - (int)puVar25) + (int)puVar23;
            goto LAB_14f334506;
          }
LAB_14f3344e7:
          lVar34 = (longlong)puVar23 - (longlong)puVar25;
          local_220 = (int)lVar34;
          for (; (puVar23 < puVar40 &&
                 (local_220 = (int)lVar34, (uchar)*puVar23 == *(uchar *)(lVar30 + (longlong)puVar23)
                 )); puVar23 = (ulonglong *)((longlong)puVar23 + 1)) {
            lVar34 = lVar34 + 1;
            local_220 = (int)lVar34;
          }
LAB_14f334506:
          local_220 = local_220 + 4;
        }
        else {
          local_220 = 3 - (uint)((uVar16 & 0xffffff) != 0);
        }
        iVar37 = 0;
        local_1f8 = 0;
      }
      uVar16 = *(uint *)((longlong)puVar29 - (ulonglong)(uint)local_c0.lasts.contents[5]);
      if (sVar32 == (short)uVar16) {
        uVar16 = uVar16 ^ uVar4;
        if (uVar16 == 0) {
          puVar25 = (ulonglong *)((longlong)puVar29 + 4);
          lVar30 = (longlong)((longlong)puVar29 - (ulonglong)(uint)local_c0.lasts.contents[5]) -
                   (longlong)puVar29;
          puVar23 = puVar25;
          if (puVar25 <= puVar40 + -1) {
LAB_14f334570:
            uVar24 = *(ulonglong *)(lVar30 + (longlong)puVar23) ^ *puVar23;
            if (uVar24 == 0) goto code_r0x00014f334579;
            uVar19 = 0;
            if (uVar24 != 0) {
              for (; (uVar24 >> uVar19 & 1) == 0; uVar19 = uVar19 + 1) {
              }
            }
            iVar21 = ((int)(uVar19 >> 3) - (int)puVar25) + (int)puVar23;
            goto LAB_14f3345a5;
          }
LAB_14f334585:
          lVar34 = (longlong)puVar23 - (longlong)puVar25;
          iVar21 = (int)lVar34;
          for (; (puVar23 < puVar40 &&
                 (iVar21 = (int)lVar34, (uchar)*puVar23 == *(uchar *)(lVar30 + (longlong)puVar23)));
              puVar23 = (ulonglong *)((longlong)puVar23 + 1)) {
            lVar34 = lVar34 + 1;
            iVar21 = (int)lVar34;
          }
LAB_14f3345a5:
          iVar21 = iVar21 + 4;
        }
        else {
          iVar21 = 3 - (uint)((uVar16 & 0xffffff) != 0);
        }
        if (local_220 < iVar21) {
          iVar37 = 1;
          local_1f8 = 1;
          local_220 = iVar21;
        }
      }
      uVar16 = *(uint *)((longlong)puVar29 - (ulonglong)local_1e8);
      if (sVar32 == (short)uVar16) {
        uVar16 = uVar16 ^ uVar4;
        if (uVar16 == 0) {
          puVar25 = (ulonglong *)((longlong)puVar29 + 4);
          lVar30 = (longlong)((longlong)puVar29 - (ulonglong)local_1e8) - (longlong)puVar29;
          puVar23 = puVar25;
          if (puVar25 <= puVar40 + -1) {
LAB_14f334610:
            uVar24 = *(ulonglong *)(lVar30 + (longlong)puVar23) ^ *puVar23;
            if (uVar24 == 0) goto code_r0x00014f33461d;
            uVar19 = 0;
            if (uVar24 != 0) {
              for (; (uVar24 >> uVar19 & 1) == 0; uVar19 = uVar19 + 1) {
              }
            }
            iVar21 = ((int)(uVar19 >> 3) - (int)puVar25) + (int)puVar23;
            goto LAB_14f334645;
          }
LAB_14f334626:
          lVar34 = (longlong)puVar23 - (longlong)puVar25;
          iVar21 = (int)lVar34;
          for (; (puVar23 < puVar40 &&
                 (iVar21 = (int)lVar34, (uchar)*puVar23 == *(uchar *)(lVar30 + (longlong)puVar23)));
              puVar23 = (ulonglong *)((longlong)puVar23 + 1)) {
            lVar34 = lVar34 + 1;
            iVar21 = (int)lVar34;
          }
LAB_14f334645:
          iVar21 = iVar21 + 4;
        }
        else {
          iVar21 = 3 - (uint)((uVar16 & 0xffffff) != 0);
        }
        if (local_220 < iVar21) {
          iVar37 = 2;
          local_1f8 = 2;
          local_220 = iVar21;
        }
      }
      local_1a0 = puVar28;
      if (local_220 < 4) {
        iVar21 = iVar36;
        if (0x37 < (longlong)puVar29 - (longlong)local_1d8) {
          iVar39 = 0;
          if (2 < local_220) {
            iVar39 = local_220;
          }
          local_220 = iVar39;
          if (iVar36 < 5) {
            iVar21 = 5;
          }
        }
        iVar39 = 0;
        uVar24 = 0;
        uVar38 = 0;
        uVar17 = uVar15 & 0xfc000000;
        uVar4 = *puVar7;
        uVar16 = puVar7[1];
        uVar12 = puVar7[2];
        uVar13 = puVar7[3];
        local_90 = uVar26 - puVar7[4] & ___xmm_03ffffff03ffffff03ffffff03ffffff;
        uStack_8c = uVar26 - puVar7[5] & _UNK_1531da904;
        uStack_88 = uVar26 - puVar7[6] & _UNK_1531da908;
        uStack_84 = uVar26 - puVar7[7] & _UNK_1531da90c;
        local_a0[0] = uVar26 - uVar4 & ___xmm_03ffffff03ffffff03ffffff03ffffff;
        local_a0[1] = uVar26 - uVar16 & _UNK_1531da904;
        local_a0[2] = uVar26 - uVar12 & _UNK_1531da908;
        local_a0[3] = uVar26 - uVar13 & _UNK_1531da90c;
        auVar43._0_4_ = -(uint)((___xmm_fc000000fc000000fc000000fc000000 & uVar4) == uVar17);
        auVar43._4_4_ = -(uint)((_UNK_1531da914 & uVar16) == uVar17);
        auVar43._8_4_ = -(uint)((_UNK_1531da918 & uVar12) == uVar17);
        auVar43._12_4_ = -(uint)((_UNK_1531da91c & uVar13) == uVar17);
        puVar33 = (uchar *)(longlong)(iVar21 + -1);
        auVar44._0_4_ = -(uint)((___xmm_fc000000fc000000fc000000fc000000 & puVar7[4]) == uVar17);
        auVar44._4_4_ = -(uint)((_UNK_1531da914 & puVar7[5]) == uVar17);
        auVar44._8_4_ = -(uint)((_UNK_1531da918 & puVar7[6]) == uVar17);
        auVar44._12_4_ = -(uint)((_UNK_1531da91c & puVar7[7]) == uVar17);
        auVar44 = packssdw(auVar43,auVar44);
        auVar44 = packsswb(auVar44,ZEXT816(0));
        uVar11 = (ushort)(SUB161(auVar44 >> 7,0) & 1) | (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar44 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar44 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar44 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar44 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar44 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar44 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar44 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar44 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar44 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar44 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar44 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe |
                 (ushort)(byte)(auVar44[0xf] >> 7) << 0xf;
        uVar17 = (uint)uVar11;
        if (uVar11 != 0) {
          do {
            uVar38 = 0;
            if (uVar17 != 0) {
              for (; (uVar17 >> uVar38 & 1) == 0; uVar38 = uVar38 + 1) {
              }
            }
            uVar17 = uVar17 & uVar17 - 1;
            uVar38 = local_a0[uVar38];
            if (uVar38 < local_1ec) {
              if (uVar38 < 8) {
                uVar38 = 8;
              }
              lVar30 = (longlong)puVar29 - (ulonglong)uVar38;
              if (((longlong)puVar33 < (longlong)puVar40 - (longlong)puVar29) &&
                 (puVar33[(longlong)puVar29] == puVar33[lVar30])) {
                lVar30 = lVar30 - (longlong)puVar29;
                puVar25 = puVar29;
                if (puVar29 <= puVar40 + -1) {
LAB_14f3347a0:
                  uVar19 = *(ulonglong *)(lVar30 + (longlong)puVar25) ^ *puVar25;
                  if (uVar19 == 0) goto code_r0x00014f3347ad;
                  uVar9 = 0;
                  if (uVar19 != 0) {
                    for (; (uVar19 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
                    }
                  }
                  puVar20 = (uchar *)(((uVar9 >> 3) - (longlong)puVar29) + (longlong)puVar25);
                  goto code_r0x00014f3347e0;
                }
LAB_14f3347b6:
                puVar20 = (uchar *)((longlong)puVar25 - (longlong)puVar29);
                for (puVar25 = (ulonglong *)(puVar20 + (longlong)puVar29);
                    (puVar25 < puVar40 &&
                    ((uchar)*puVar25 == *(uchar *)(lVar30 + (longlong)puVar25)));
                    puVar25 = (ulonglong *)((longlong)puVar25 + 1)) {
                  puVar20 = puVar20 + 1;
                }
code_r0x00014f3347e0:
                if ((longlong)puVar33 < (longlong)puVar20) {
                  iVar37 = (int)puVar20;
                  puVar33 = puVar20;
                  if (((pOVar5->farMatchOffsetLog2 < 1) ||
                      ((int)uVar38 < 1 << ((byte)pOVar5->farMatchOffsetLog2 & 0x1f))) ||
                     (pOVar5->farMatchMinLen <= iVar37)) {
                    if (0xfffff < (int)uVar38) {
                      if ((int)uVar38 < 0x400000) {
                        if ((int)uVar38 < 0x200000) {
                          bVar42 = SBORROW4(iVar37,5);
                          bVar41 = iVar37 + -5 < 0;
                        }
                        else {
                          bVar42 = SBORROW4(iVar37,6);
                          bVar41 = iVar37 + -6 < 0;
                        }
                      }
                      else {
                        bVar42 = SBORROW4(iVar37,8);
                        bVar41 = iVar37 + -8 < 0;
                      }
                      if (bVar42 != bVar41) goto LAB_14f3348b0;
                    }
                    if (((5 < iVar37) || ((int)uVar38 < max_offset[iVar37])) && (iVar39 <= iVar37))
                    {
                      if (iVar37 == iVar39) {
                        bVar41 = (int)uVar38 < (int)uVar24;
LAB_14f3348a7:
                        if (!bVar41) goto LAB_14f3348b0;
                      }
                      else if (iVar37 <= iVar39 + 1) {
                        bVar41 = (int)uVar38 >> 7 <= (int)uVar24;
                        goto LAB_14f3348a7;
                      }
                      uVar24 = (ulonglong)uVar38;
                      iVar39 = iVar37;
                    }
                  }
                }
              }
            }
LAB_14f3348b0:
            uVar38 = (uint)uVar24;
            iVar37 = local_1f8;
          } while (uVar17 != 0);
        }
        uVar3 = *(undefined8 *)(puVar7 + 3);
        puVar7[1] = uVar4;
        puVar7[2] = uVar16;
        puVar7[3] = uVar12;
        puVar7[4] = uVar13;
        *(undefined8 *)(puVar7 + 4) = uVar3;
        *(undefined8 *)(puVar7 + 6) = *(undefined8 *)(puVar7 + 5);
        *puVar7 = (uVar26 ^ uVar15) & 0x3ffffff ^ uVar15;
        if (uVar38 != 0) {
          if ((1 < local_220) &&
             (((iVar39 <= local_220 + 1 || ((iVar39 <= local_220 + 2 && (0x3ff < (int)uVar38)))) ||
              ((iVar39 <= local_220 + 3 && (0xffff < (int)uVar38)))))) goto LAB_14f334989;
          goto LAB_14f334991;
        }
        if (1 < local_220) goto LAB_14f334989;
      }
      else {
        uVar3 = *(undefined8 *)(puVar7 + 3);
        *(undefined8 *)(puVar7 + 1) = *(undefined8 *)puVar7;
        *(undefined8 *)(puVar7 + 3) = *(undefined8 *)(puVar7 + 2);
        *(undefined8 *)(puVar7 + 4) = uVar3;
        *(undefined8 *)(puVar7 + 6) = *(undefined8 *)(puVar7 + 5);
        *puVar7 = (uVar26 ^ uVar15) & 0x3ffffff ^ uVar15;
LAB_14f334989:
        uVar38 = -iVar37;
        iVar39 = local_220;
LAB_14f334991:
        if ((ulonglong *)((longlong)puVar29 + 1U) < puVar22) {
          while( true ) {
            puVar28 = (ulonglong *)((longlong)puVar29 + 1);
            bVar41 = newLZ_get_match_heuristic<oo2::CTMF<unsigned_int,3,0,4>_>
                               (&local_1a8,pCVar6,&local_c0,(uchar *)puVar28,(uchar *)puVar40,iVar36
                                ,(uchar *)local_1d8,local_1ec,pOVar5);
            local_210 = local_c0.lasts.contents[4];
            if ((!bVar41) || (local_1a8.ml == 0)) break;
            if (local_1a8.off < 1) {
              iVar37 = 0;
            }
            else {
              iVar37 = 0x1f;
              if (local_1a8.off != 0) {
                for (; (uint)local_1a8.off >> iVar37 == 0; iVar37 = iVar37 + -1) {
                }
              }
              if (local_1a8.off == 0) {
                iVar37 = 0;
              }
              else {
                iVar37 = iVar37 + 1;
              }
              iVar37 = iVar37 + 2;
            }
            if ((int)uVar38 < 1) {
              iVar21 = -4;
            }
            else {
              iVar21 = 0x1f;
              if (uVar38 != 0) {
                for (; uVar38 >> iVar21 == 0; iVar21 = iVar21 + -1) {
                }
              }
              if (uVar38 == 0) {
                iVar21 = 0;
              }
              else {
                iVar21 = iVar21 + 1;
              }
              iVar21 = iVar21 + -2;
            }
            if ((((local_1a8.ml - iVar39) * 4 - iVar37) + iVar21 < 1) ||
               (puVar25 = (ulonglong *)((longlong)puVar29 + 2), puVar29 = puVar28,
               uVar38 = local_1a8.off, iVar39 = local_1a8.ml, puVar22 <= puVar25)) break;
          }
        }
        uVar15 = uVar38;
        if ((int)uVar38 < 1) {
          uVar15 = *(uint *)((longlong)&local_c0 + (longlong)(int)uVar38 * -4 + 0x10);
        }
        if (local_1d8 < puVar29) {
          puVar33 = pCVar6->m_base_ptr;
          lVar30 = (longlong)puVar29 - (longlong)puVar33;
          do {
            if ((lVar30 <= (int)uVar15) ||
               (puVar33[lVar30 + -1] != puVar33[lVar30 + (-1 - (longlong)(int)uVar15)])) break;
            puVar29 = (ulonglong *)((longlong)puVar29 + -1);
            lVar30 = lVar30 + -1;
            iVar39 = iVar39 + 1;
          } while (local_1d8 < puVar29);
        }
        if ((uVar38 == 0) && (puVar29 == local_1d8)) {
          uVar38 = 0xffffffff;
        }
        iVar37 = (int)puVar29 - (int)local_1d8;
        if (iVar37 == 0) {
          cVar31 = '\0';
        }
        else if (iVar37 < 9) {
          iVar21 = iVar37 + -3;
          *local_1e0 = (uchar)iVar21;
          if (-1 < iVar21) {
            local_1e0 = local_1e0 + 1;
          }
          iVar18 = iVar37;
          if (-1 < iVar21) {
            iVar18 = 3;
          }
          cVar31 = (char)iVar18;
          *(ulonglong *)local_160.literals_ptr_raw = *local_1d8;
          uVar24 = *local_1d8;
          local_160.literals_ptr_raw =
               (uchar *)((longlong)local_160.literals_ptr_raw + (longlong)iVar37);
          uVar3 = *(undefined8 *)((longlong)local_1d8 - (longlong)local_160.lastoffset);
          *(ulonglong *)local_160.literals_ptr_sub =
               CONCAT17((char)(uVar24 >> 0x38) - (char)((ulonglong)uVar3 >> 0x38),
                        CONCAT16((char)(uVar24 >> 0x30) - (char)((ulonglong)uVar3 >> 0x30),
                                 CONCAT15((char)(uVar24 >> 0x28) - (char)((ulonglong)uVar3 >> 0x28),
                                          CONCAT14((char)(uVar24 >> 0x20) -
                                                   (char)((ulonglong)uVar3 >> 0x20),
                                                   CONCAT13((char)(uVar24 >> 0x18) -
                                                            (char)((ulonglong)uVar3 >> 0x18),
                                                            CONCAT12((char)(uVar24 >> 0x10) -
                                                                     (char)((ulonglong)uVar3 >> 0x10
                                                                           ),CONCAT11((char)(uVar24 
                                                  >> 8) - (char)((ulonglong)uVar3 >> 8),
                                                  (char)uVar24 - (char)uVar3)))))));
          local_160.literals_ptr_sub = local_160.literals_ptr_sub + iVar37;
          local_160.excess_u8_ptr = local_1e0;
        }
        else {
          cVar31 = '\x03';
          newLZ_encoder_arrays_put_long_lrl<1>(&local_160,(uchar *)local_1d8,iVar37);
          local_1e0 = local_160.excess_u8_ptr;
        }
        iVar37 = local_c0.lasts.contents[5];
        iVar21 = iVar39 + -2;
        if (0xe < iVar21) {
          iVar21 = 0xf;
          if (iVar39 + -0x11 < 0xff) {
            *local_1e0 = (uchar)(iVar39 + -0x11);
          }
          else {
            *local_1e0 = 0xff;
            *local_160.excess_u32_ptr = iVar39 - 0x110;
            local_160.excess_u32_ptr = local_160.excess_u32_ptr + 1;
          }
          local_1e0 = local_1e0 + 1;
          local_160.excess_u8_ptr = local_1e0;
        }
        cVar31 = cVar31 + (char)iVar21 * '\x04';
        if ((int)uVar38 < 1) {
          lVar30 = (longlong)(int)-uVar38;
          cVar35 = (char)uVar38 * -0x40;
          local_160.lastoffset = local_c0.lasts.contents[lVar30 + 4];
          iVar37 = local_c0.lasts.contents[lVar30 + 2];
          local_c0.lasts.contents[lVar30 + 4] = local_c0.lasts.contents[lVar30 + 3];
          local_c0.lasts.contents[lVar30 + 3] = iVar37;
          local_1e8 = local_c0.lasts.contents[6];
          local_c0.lasts.contents[4] = local_160.lastoffset;
          local_210 = local_160.lastoffset;
        }
        else {
          local_1e8 = local_c0.lasts.contents[5];
          local_c0.lasts.contents[5] = local_210;
          local_c0.lasts.contents[6] = iVar37;
          local_c0.lasts.contents[4] = uVar38;
          local_160.lastoffset = uVar38;
          if ((int)uVar38 < 0x7fff08) {
            uVar15 = uVar38 + 0xf8;
            iVar37 = 0x1f;
            if (uVar15 != 0) {
              for (; uVar15 >> iVar37 == 0; iVar37 = iVar37 + -1) {
              }
            }
            *local_160.offsets_u8_ptr = ((char)iVar37 + -8) * '\x10' | (byte)uVar15 & 0xf;
            *local_160.offsets_ptr = uVar38;
            local_160.offsets_u8_ptr = local_160.offsets_u8_ptr + 1;
            local_160.offsets_ptr = local_160.offsets_ptr + 1;
          }
          else {
            newLZ_encoder_arrays_put_long_offset(&local_160,uVar38);
            local_1e0 = local_160.excess_u8_ptr;
          }
          cVar35 = -0x40;
          local_210 = uVar38;
        }
        puVar33 = local_160.packets_ptr + 1;
        *local_160.packets_ptr = cVar35 + cVar31;
        lVar30 = (longlong)iVar39;
        local_1d8 = (ulonglong *)(lVar30 + (longlong)puVar29);
        local_160.packets_ptr = puVar33;
        if (puVar22 <= local_1d8) break;
        plVar8 = (longlong *)pCVar6->m_next_ptr;
        lVar34 = (longlong)local_1d8 - lVar30;
        plVar1 = (longlong *)(lVar34 + lVar30);
        puVar28 = local_1d8;
        if (plVar8 < plVar1) {
          puVar7 = pCVar6->m_next_row;
          iVar37 = *(int *)&pCVar6->m_base_ptr;
          uVar15 = pCVar6->m_next_hash;
          uVar4 = pCVar6->m_next_hash;
          uVar3 = *(undefined8 *)(puVar7 + 3);
          *(undefined8 *)(puVar7 + 1) = *(undefined8 *)puVar7;
          *(undefined8 *)(puVar7 + 3) = *(undefined8 *)(puVar7 + 2);
          *(undefined8 *)(puVar7 + 4) = uVar3;
          *(undefined8 *)(puVar7 + 6) = *(undefined8 *)(puVar7 + 5);
          *puVar7 = ((int)plVar8 - iVar37 ^ uVar15) & 0x3ffffff ^ uVar4;
          iVar21 = (*(int *)&pCVar6->m_next_ptr - (int)lVar34) + 1;
          if (iVar21 < iVar39) {
            lVar30 = (longlong)iVar21;
            do {
              plVar8 = (longlong *)(lVar34 + lVar30);
              lVar30 = lVar30 * 2;
              bVar10 = (byte)pCVar6->m_table_size_bits & 0x1f;
              uVar15 = (uint)(*plVar8 * pCVar6->m_hash_mul >> 0x20);
              uVar15 = uVar15 << bVar10 | uVar15 >> 0x20 - bVar10;
              uVar24 = (ulonglong)(uVar15 & pCVar6->m_hash_row_mask);
              puVar7 = (pCVar6->m_hash_table).m_ptr;
              puVar2 = puVar7 + uVar24 + 3;
              uVar3 = *(undefined8 *)puVar2;
              uVar14 = *(undefined8 *)(puVar2 + 2);
              puVar7 = puVar7 + uVar24;
              iVar18 = iVar21 - iVar37;
              iVar21 = iVar21 * 2;
              *(undefined8 *)(puVar7 + 1) = *(undefined8 *)puVar7;
              *(undefined8 *)(puVar7 + 3) = *(undefined8 *)(puVar7 + 2);
              *(undefined8 *)(puVar7 + 4) = uVar3;
              *(undefined8 *)(puVar7 + 6) = uVar14;
              *puVar7 = (iVar18 + (int)lVar34 ^ uVar15) & 0x3ffffff ^ uVar15;
            } while (iVar21 < iVar39);
          }
          pCVar6->m_next_ptr = (uchar *)plVar1;
          uVar15 = (uint)(*plVar1 * pCVar6->m_hash_mul >> 0x20);
        }
        else {
          if (plVar8 == plVar1) goto LAB_14f3348fa;
          pCVar6->m_next_ptr = (uchar *)plVar1;
          uVar15 = (uint)(pCVar6->m_hash_mul * *plVar1 >> 0x20);
        }
        bVar10 = (byte)pCVar6->m_table_size_bits & 0x1f;
        uVar15 = uVar15 << bVar10 | uVar15 >> 0x20 - bVar10;
        pCVar6->m_next_hash = uVar15;
        pCVar6->m_next_row = (pCVar6->m_hash_table).m_ptr + (pCVar6->m_hash_row_mask & uVar15);
      }
LAB_14f3348fa:
      uVar24 = (ulonglong)local_210;
      puVar29 = puVar28;
    }
    newLZ_encoder_arrays_finish_chunk<1>(&local_160,(uchar *)local_1d8);
    lVar27 = newLZ_encoder_arrays_output
                       (local_168,local_170,(newlz_passinfo *)0x0,local_178,local_180,local_188,
                        local_190,&local_160,param_8,local_198);
  }
  return lVar27;
code_r0x00014f3344de:
  puVar23 = puVar23 + 1;
  if (puVar40 + -1 < puVar23) goto LAB_14f3344e7;
  goto LAB_14f3344d5;
code_r0x00014f334579:
  puVar23 = puVar23 + 1;
  if (puVar40 + -1 < puVar23) goto LAB_14f334585;
  goto LAB_14f334570;
code_r0x00014f33461d:
  puVar23 = puVar23 + 1;
  if (puVar40 + -1 < puVar23) goto LAB_14f334626;
  goto LAB_14f334610;
code_r0x00014f3347ad:
  puVar25 = puVar25 + 1;
  if (puVar40 + -1 < puVar25) goto LAB_14f3347b6;
  goto LAB_14f3347a0;
}

// newLZ_encode_chunk_fast_mode<oo2::FastCTMF<unsigned_short>,3,0,1,0,0,0> @ 14f334ea0

/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

long64 __cdecl
oo2::newLZ_encode_chunk_fast_mode<oo2::FastCTMF<unsigned_short>,3,0,1,0,0,0>
          (newlz_vtable *param_1,newlz_encoder_scratch *param_2,uchar *param_3,uchar *param_4,
          int param_5,uchar *param_6,uchar *param_7,long64 param_8,int *param_9,float *param_10,
          OodleKrakenChunkDeadlines *param_11)

{
  short sVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  long64 lVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  uchar uVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong *puVar17;
  uint uVar18;
  int iVar19;
  char cVar20;
  longlong lVar21;
  ushort uVar22;
  int iVar23;
  longlong lVar24;
  ulonglong *puVar25;
  longlong lVar26;
  ulonglong *puVar27;
  ulonglong *puVar28;
  ulonglong *puVar29;
  uchar *puVar30;
  longlong lVar31;
  short local_118;
  newLZ_encoder_arrays local_c8;
  
  lVar21 = (longlong)param_5;
  *param_9 = -1;
  if (param_5 < 0x81) {
    return lVar21;
  }
  iVar12 = param_1->pOptions->dictionarySize;
  if (iVar12 < 1) {
    iVar12 = 0x40000000;
  }
  else if (0x40000000 < iVar12) {
    iVar12 = 0x40000000;
  }
  pvVar3 = param_1->matcher;
  newLZ_encoder_arrays_point_to_scratch(&local_c8,param_2,param_5,param_4,param_1->bitstream_flags);
  uVar4 = *(undefined8 *)((longlong)pvVar3 + 0x28);
  lVar5 = *(longlong *)((longlong)pvVar3 + 8);
  lVar26 = 0;
  puVar29 = (ulonglong *)(param_4 + lVar21 + -8);
  lVar15 = 8;
  uVar2 = *(undefined4 *)((longlong)pvVar3 + 0x24);
  lVar31 = -8;
  if (param_8 == 0) {
    lVar26 = 8;
  }
  puVar27 = (ulonglong *)(param_4 + lVar26);
  lVar26 = *(longlong *)((longlong)pvVar3 + 0x18);
  puVar28 = puVar27;
  puVar30 = local_c8.excess_u8_ptr;
LAB_14f334fe0:
  do {
    lVar24 = lVar15 >> 3;
    if ((longlong)(param_4 + lVar21 + -0x10) - (longlong)puVar27 <= lVar24) goto LAB_14f33520c;
    uVar6 = *puVar27;
    local_118 = (short)uVar4;
    local_118 = (short)puVar27 - local_118;
    bVar11 = (byte)uVar2;
    uVar9 = uVar6 * lVar26 >> (bVar11 & 0x3f);
    sVar1 = *(short *)(lVar5 + uVar9 * 2);
    *(short *)(lVar5 + uVar9 * 2) = local_118;
    uVar8 = (uint)uVar6;
    if ((uVar8 ^ *(uint *)((longlong)puVar27 + lVar31)) < 0x100) {
      puVar25 = (ulonglong *)((longlong)puVar27 + 1);
      uVar18 = 0;
      *(short *)(lVar5 + ((ulonglong)(lVar26 * *(longlong *)((longlong)puVar27 + 1)) >>
                         (bVar11 & 0x3f)) * 2) = local_118 + 1;
    }
    else {
      uVar22 = local_118 - sVar1;
      uVar18 = (uint)uVar22;
      if (*(uint *)((longlong)puVar27 - (ulonglong)uVar22) != uVar8) {
LAB_14f33504c:
        lVar16 = lVar15 + ((longlong)puVar27 - (longlong)puVar28 >> 1);
        lVar15 = 0x128;
        if (lVar16 < 0x128) {
          lVar15 = lVar16;
        }
        puVar27 = (ulonglong *)((longlong)puVar27 + lVar24);
        goto LAB_14f334fe0;
      }
      puVar25 = puVar27;
      if (uVar22 - 8 < iVar12 - 8U) {
        lVar31 = (longlong)(int)-(uint)uVar22;
      }
      else {
        if (uVar8 != (uint)puVar27[-1]) goto LAB_14f33504c;
        uVar18 = 8;
        lVar31 = -8;
      }
    }
    puVar17 = (ulonglong *)((longlong)puVar27 + 4);
    puVar27 = puVar17;
    if (puVar17 < puVar29) {
LAB_14f3350c0:
      puVar17 = puVar27 + 1;
      if (*puVar27 == *(ulonglong *)(lVar31 + (longlong)puVar27)) break;
      uVar9 = *(ulonglong *)(lVar31 + (longlong)puVar27) ^ *puVar27;
      uVar6 = 0;
      if (uVar9 != 0) {
        for (; (uVar9 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
        }
      }
      puVar17 = (ulonglong *)((longlong)puVar27 + (uVar6 >> 3));
    }
LAB_14f3350e9:
    puVar27 = puVar29;
    if (puVar17 < puVar29) {
      puVar27 = puVar17;
    }
    iVar19 = (int)puVar27 - (int)puVar25;
    iVar23 = (int)puVar25 - (int)puVar28;
    if (iVar23 == 0) {
      cVar20 = '\0';
    }
    else if (iVar23 < 9) {
      iVar13 = iVar23 + -3;
      *puVar30 = (uchar)iVar13;
      local_c8.excess_u8_ptr = puVar30;
      if (-1 < iVar13) {
        local_c8.excess_u8_ptr = puVar30 + 1;
      }
      iVar7 = iVar23;
      if (-1 < iVar13) {
        iVar7 = 3;
      }
      cVar20 = (char)iVar7;
      *(ulonglong *)local_c8.literals_ptr_raw = *puVar28;
      local_c8.literals_ptr_raw = (uchar *)((longlong)local_c8.literals_ptr_raw + (longlong)iVar23);
      puVar30 = local_c8.excess_u8_ptr;
    }
    else {
      cVar20 = '\x03';
      newLZ_encoder_arrays_put_long_lrl<0>(&local_c8,(uchar *)puVar28,iVar23);
      puVar30 = local_c8.excess_u8_ptr;
    }
    iVar23 = iVar19 + -2;
    if (0xe < iVar23) {
      iVar23 = 0xf;
      if (iVar19 + -0x11 < 0xff) {
        *puVar30 = (uchar)(iVar19 + -0x11);
      }
      else {
        *puVar30 = 0xff;
        *local_c8.excess_u32_ptr = iVar19 - 0x110;
        local_c8.excess_u32_ptr = local_c8.excess_u32_ptr + 1;
      }
      puVar30 = puVar30 + 1;
      local_c8.excess_u8_ptr = puVar30;
    }
    uVar14 = cVar20 + (char)iVar23 * '\x04';
    if (uVar18 != 0) {
      uVar8 = uVar18 + 0xf8;
      iVar19 = 0x1f;
      if (uVar8 != 0) {
        for (; uVar8 >> iVar19 == 0; iVar19 = iVar19 + -1) {
        }
      }
      uVar14 = uVar14 + 0xc0;
      *local_c8.offsets_u8_ptr = ((char)iVar19 + -8) * '\x10' | (byte)uVar8 & 0xf;
      local_c8.offsets_u8_ptr = local_c8.offsets_u8_ptr + 1;
      *local_c8.offsets_ptr = uVar18;
      local_c8.offsets_ptr = local_c8.offsets_ptr + 1;
      local_c8.lastoffset = uVar18;
    }
    *local_c8.packets_ptr = uVar14;
    local_c8.packets_ptr = local_c8.packets_ptr + 1;
    lVar15 = 8;
    puVar28 = puVar27;
    if (param_4 + lVar21 + -0x10 <= puVar27) {
LAB_14f33520c:
      newLZ_encoder_arrays_finish_chunk<0>(&local_c8,(uchar *)puVar28);
      lVar10 = newLZ_encoder_arrays_output
                         (param_10,param_9,(newlz_passinfo *)0x0,param_6,param_7,param_1,param_2,
                          &local_c8,param_8,param_11);
      return lVar10;
    }
  } while( true );
  puVar27 = puVar17;
  if (puVar29 <= puVar17) goto LAB_14f3350e9;
  goto LAB_14f3350c0;
}

// newLZ_encode_chunk_fast_mode<oo2::FastCTMF<unsigned_short>,4,1,0,0,0,0> @ 14f3352a0

/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

long64 __cdecl
oo2::newLZ_encode_chunk_fast_mode<oo2::FastCTMF<unsigned_short>,4,1,0,0,0,0>
          (newlz_vtable *param_1,newlz_encoder_scratch *param_2,uchar *param_3,uchar *param_4,
          int param_5,uchar *param_6,uchar *param_7,long64 param_8,int *param_9,float *param_10,
          OodleKrakenChunkDeadlines *param_11)

{
  int iVar1;
  uchar *puVar2;
  short sVar3;
  undefined4 uVar4;
  void *pvVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  long64 lVar13;
  byte bVar14;
  int iVar15;
  longlong lVar16;
  ulonglong *puVar17;
  uint uVar18;
  char cVar19;
  longlong lVar20;
  short sVar21;
  ushort uVar22;
  int iVar23;
  uchar uVar24;
  ulonglong *puVar25;
  longlong lVar26;
  ulonglong *puVar27;
  uchar *puVar28;
  ulonglong *puVar29;
  int iVar30;
  longlong lVar31;
  ulonglong *puVar32;
  newLZ_encoder_arrays local_c8;
  
  lVar20 = (longlong)param_5;
  *param_9 = -1;
  if (param_5 < 0x81) {
    return lVar20;
  }
  iVar15 = param_1->pOptions->dictionarySize;
  if (iVar15 < 1) {
    iVar15 = 0x40000000;
  }
  else if (0x40000000 < iVar15) {
    iVar15 = 0x40000000;
  }
  pvVar5 = param_1->matcher;
  newLZ_encoder_arrays_point_to_scratch(&local_c8,param_2,param_5,param_4,param_1->bitstream_flags);
  lVar6 = *(longlong *)((longlong)pvVar5 + 0x18);
  uVar4 = *(undefined4 *)((longlong)pvVar5 + 0x24);
  lVar26 = 0;
  puVar29 = (ulonglong *)(param_4 + lVar20 + -8);
  if (param_8 == 0) {
    lVar26 = 8;
  }
  lVar7 = *(longlong *)((longlong)pvVar5 + 8);
  lVar8 = *(longlong *)((longlong)pvVar5 + 0x28);
  puVar28 = local_c8.excess_u8_ptr;
  lVar31 = -8;
  puVar32 = (ulonglong *)(param_4 + lVar26);
LAB_14f3353e0:
  lVar26 = 0x10;
  puVar27 = puVar32;
  do {
    lVar16 = lVar26 >> 4;
    puVar17 = puVar32;
    if ((longlong)(param_4 + lVar20 + -0x10) - (longlong)puVar27 <= lVar16) goto LAB_14f335669;
    uVar9 = *puVar27;
    bVar14 = (byte)uVar4;
    uVar12 = uVar9 * lVar6 >> (bVar14 & 0x3f);
    sVar21 = (short)puVar27 - (short)lVar8;
    sVar3 = *(short *)(lVar7 + uVar12 * 2);
    *(short *)(lVar7 + uVar12 * 2) = sVar21;
    uVar11 = (uint)uVar9;
    if ((uVar11 ^ *(uint *)((longlong)puVar27 + lVar31)) < 0x100) {
      puVar25 = (ulonglong *)((longlong)puVar27 + 1);
      uVar18 = 0;
      *(short *)(lVar7 + ((ulonglong)(lVar6 * *(longlong *)((longlong)puVar27 + 1)) >>
                         (bVar14 & 0x3f)) * 2) = sVar21 + 1;
      lVar26 = lVar31;
      goto LAB_14f3354f1;
    }
    uVar22 = sVar21 - sVar3;
    uVar18 = (uint)uVar22;
    if (*(uint *)((longlong)puVar27 - (ulonglong)uVar22) == uVar11) {
      if (uVar22 - 8 < iVar15 - 8U) {
        lVar26 = (longlong)(int)-(uint)uVar22;
        goto LAB_14f33548d;
      }
      if (uVar11 == (uint)puVar27[-1]) break;
    }
    lVar26 = lVar26 + 1;
    puVar27 = (ulonglong *)((longlong)puVar27 + lVar16);
  } while( true );
  uVar18 = 8;
  lVar26 = -8;
LAB_14f33548d:
  puVar25 = puVar27;
  if (puVar32 < puVar27) {
    lVar16 = lVar8 - (longlong)puVar27;
    do {
      puVar25 = puVar27;
      if ((lVar26 <= lVar16) ||
         (puVar17 = (ulonglong *)((longlong)puVar27 - 1),
         (char)*puVar17 != *(char *)(lVar26 + -1 + (longlong)puVar27))) break;
      lVar16 = lVar16 + 1;
      puVar27 = puVar17;
      puVar25 = puVar17;
    } while (puVar32 < puVar17);
  }
  puVar27 = puVar25;
  if ((puVar25 == puVar32) && (uVar18 == 0)) {
    uVar18 = -(int)lVar31;
  }
LAB_14f3354f1:
  puVar27 = (ulonglong *)((longlong)puVar27 + 4);
  puVar17 = puVar27;
  if (puVar27 < puVar29) {
LAB_14f335500:
    puVar27 = puVar17 + 1;
    if (*puVar17 == *(ulonglong *)(lVar26 + (longlong)puVar17)) goto code_r0x00014f335510;
    uVar12 = *(ulonglong *)(lVar26 + (longlong)puVar17) ^ *puVar17;
    uVar9 = 0;
    if (uVar12 != 0) {
      for (; (uVar12 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
      }
    }
    puVar27 = (ulonglong *)((longlong)puVar17 + (uVar9 >> 3));
  }
LAB_14f335529:
  puVar17 = puVar29;
  if (puVar27 < puVar29) {
    puVar17 = puVar27;
  }
  iVar30 = (int)puVar17 - (int)puVar25;
  iVar23 = (int)puVar25 - (int)puVar32;
  if (iVar23 == 0) {
    cVar19 = '\0';
  }
  else if (iVar23 < 9) {
    iVar1 = iVar23 + -3;
    *puVar28 = (uchar)iVar1;
    local_c8.excess_u8_ptr = puVar28;
    if (-1 < iVar1) {
      local_c8.excess_u8_ptr = puVar28 + 1;
    }
    iVar10 = iVar23;
    if (-1 < iVar1) {
      iVar10 = 3;
    }
    cVar19 = (char)iVar10;
    *(ulonglong *)local_c8.literals_ptr_raw = *puVar32;
    local_c8.literals_ptr_raw = (uchar *)((longlong)local_c8.literals_ptr_raw + (longlong)iVar23);
    puVar28 = local_c8.excess_u8_ptr;
  }
  else {
    cVar19 = '\x03';
    newLZ_encoder_arrays_put_long_lrl<0>(&local_c8,(uchar *)puVar32,iVar23);
    puVar28 = local_c8.excess_u8_ptr;
  }
  iVar23 = iVar30 + -2;
  if (0xe < iVar23) {
    iVar23 = 0xf;
    if (iVar30 + -0x11 < 0xff) {
      *puVar28 = (uchar)(iVar30 + -0x11);
    }
    else {
      *puVar28 = 0xff;
      *local_c8.excess_u32_ptr = iVar30 - 0x110;
      local_c8.excess_u32_ptr = local_c8.excess_u32_ptr + 1;
    }
    puVar28 = puVar28 + 1;
    local_c8.excess_u8_ptr = puVar28;
  }
  uVar24 = cVar19 + (char)iVar23 * '\x04';
  if (0 < (int)uVar18) {
    uVar24 = uVar24 + 0xc0;
    local_c8.lastoffset = uVar18;
    if ((int)uVar18 < 0x7fff08) {
      uVar11 = uVar18 + 0xf8;
      iVar23 = 0x1f;
      if (uVar11 != 0) {
        for (; uVar11 >> iVar23 == 0; iVar23 = iVar23 + -1) {
        }
      }
      *local_c8.offsets_u8_ptr = ((char)iVar23 + -8) * '\x10' | (byte)uVar11 & 0xf;
      *local_c8.offsets_ptr = uVar18;
      local_c8.offsets_u8_ptr = local_c8.offsets_u8_ptr + 1;
      local_c8.offsets_ptr = local_c8.offsets_ptr + 1;
    }
    else {
      newLZ_encoder_arrays_put_long_offset(&local_c8,uVar18);
      puVar28 = local_c8.excess_u8_ptr;
    }
  }
  puVar2 = local_c8.packets_ptr + 1;
  *local_c8.packets_ptr = uVar24;
  lVar31 = lVar26;
  puVar32 = puVar17;
  local_c8.packets_ptr = puVar2;
  if (param_4 + lVar20 + -0x10 <= puVar17) {
LAB_14f335669:
    newLZ_encoder_arrays_finish_chunk<0>(&local_c8,(uchar *)puVar17);
    lVar13 = newLZ_encoder_arrays_output
                       (param_10,param_9,(newlz_passinfo *)0x0,param_6,param_7,param_1,param_2,
                        &local_c8,param_8,param_11);
    return lVar13;
  }
  goto LAB_14f3353e0;
code_r0x00014f335510:
  puVar17 = puVar27;
  if (puVar29 <= puVar27) goto LAB_14f335529;
  goto LAB_14f335500;
}

// newLZ_encode_chunk_fast_mode<oo2::FastCTMF<unsigned_int>,4,1,0,1,0,0> @ 14f335700

/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

long64 __cdecl
oo2::newLZ_encode_chunk_fast_mode<oo2::FastCTMF<unsigned_int>,4,1,0,1,0,0>
          (newlz_vtable *param_1,newlz_encoder_scratch *param_2,uchar *param_3,uchar *param_4,
          int param_5,uchar *param_6,uchar *param_7,long64 param_8,int *param_9,float *param_10,
          OodleKrakenChunkDeadlines *param_11)

{
  undefined8 uVar1;
  uchar *puVar2;
  undefined4 uVar3;
  void *pvVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  long64 lVar13;
  byte bVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  ulonglong *puVar19;
  ulonglong *puVar20;
  longlong lVar21;
  int iVar22;
  longlong lVar23;
  uchar uVar24;
  longlong lVar25;
  ulonglong *puVar26;
  uchar *puVar27;
  ulonglong *puVar28;
  char cVar29;
  longlong lVar30;
  newLZ_encoder_arrays local_c8;
  
  lVar21 = (longlong)param_5;
  *param_9 = -1;
  if (param_5 < 0x81) {
    return lVar21;
  }
  iVar15 = param_1->pOptions->dictionarySize;
  if (iVar15 < 1) {
    iVar15 = 0x40000000;
  }
  else if (0x40000000 < iVar15) {
    iVar15 = 0x40000000;
  }
  pvVar4 = param_1->matcher;
  newLZ_encoder_arrays_point_to_scratch(&local_c8,param_2,param_5,param_4,param_1->bitstream_flags);
  lVar5 = *(longlong *)((longlong)pvVar4 + 0x18);
  uVar3 = *(undefined4 *)((longlong)pvVar4 + 0x24);
  lVar25 = 0;
  puVar28 = (ulonglong *)(param_4 + lVar21 + -8);
  lVar30 = -8;
  if (param_8 == 0) {
    lVar25 = 8;
  }
  lVar6 = *(longlong *)((longlong)pvVar4 + 0x28);
  lVar7 = *(longlong *)((longlong)pvVar4 + 8);
  puVar26 = (ulonglong *)(param_4 + lVar25);
  puVar27 = local_c8.excess_u8_ptr;
LAB_14f335840:
  lVar25 = 0x10;
  puVar20 = puVar26;
  do {
    lVar23 = lVar25 >> 4;
    puVar12 = puVar26;
    if ((longlong)(param_4 + lVar21 + -0x10) - (longlong)puVar20 <= lVar23) goto LAB_14f335ae9;
    uVar8 = *puVar20;
    bVar14 = (byte)uVar3;
    uVar11 = uVar8 * lVar5 >> (bVar14 & 0x3f);
    iVar17 = (int)puVar20 - (int)lVar6;
    iVar22 = *(int *)(lVar7 + uVar11 * 4);
    *(int *)(lVar7 + uVar11 * 4) = iVar17;
    uVar10 = (uint)uVar8;
    iVar16 = (int)lVar30;
    if ((uVar10 ^ *(uint *)((longlong)puVar20 + lVar30)) < 0x100) {
      uVar18 = 0;
      *(int *)(lVar7 + ((ulonglong)(lVar5 * *(longlong *)((longlong)puVar20 + 1)) >> (bVar14 & 0x3f)
                       ) * 4) = iVar17 + 1;
      puVar19 = (ulonglong *)((longlong)puVar20 + 1);
      goto LAB_14f335946;
    }
    uVar18 = iVar17 - iVar22;
    if (*(uint *)((longlong)puVar20 - (longlong)(int)uVar18) == uVar10) {
      if (uVar18 - 8 < iVar15 - 8U) {
        lVar30 = (longlong)(int)-uVar18;
        goto LAB_14f3358e1;
      }
      if (uVar10 == (uint)puVar20[-1]) break;
    }
    lVar25 = lVar25 + 1;
    puVar20 = (ulonglong *)((longlong)puVar20 + lVar23);
  } while( true );
  uVar18 = 8;
  lVar30 = -8;
LAB_14f3358e1:
  puVar19 = puVar20;
  if (puVar26 < puVar20) {
    lVar25 = lVar6 - (longlong)puVar20;
    do {
      puVar19 = puVar20;
      if ((lVar30 <= lVar25) ||
         (puVar12 = (ulonglong *)((longlong)puVar20 - 1),
         (char)*puVar12 != *(char *)(lVar30 + -1 + (longlong)puVar20))) break;
      lVar25 = lVar25 + 1;
      puVar20 = puVar12;
      puVar19 = puVar12;
    } while (puVar26 < puVar12);
  }
  puVar20 = puVar19;
  if ((puVar19 == puVar26) && (uVar18 == 0)) {
    uVar18 = -iVar16;
  }
LAB_14f335946:
  puVar20 = (ulonglong *)((longlong)puVar20 + 4);
  puVar12 = puVar20;
  if (puVar20 < puVar28) {
LAB_14f335950:
    puVar20 = puVar12 + 1;
    if (*puVar12 == *(ulonglong *)(lVar30 + (longlong)puVar12)) goto code_r0x00014f335965;
    uVar11 = *(ulonglong *)(lVar30 + (longlong)puVar12) ^ *puVar12;
    uVar8 = 0;
    if (uVar11 != 0) {
      for (; (uVar11 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
      }
    }
    puVar20 = (ulonglong *)((longlong)puVar12 + (uVar8 >> 3));
  }
LAB_14f33597e:
  puVar12 = puVar28;
  if (puVar20 < puVar28) {
    puVar12 = puVar20;
  }
  iVar17 = (int)puVar12 - (int)puVar19;
  iVar22 = (int)puVar19 - (int)puVar26;
  if (iVar22 == 0) {
    cVar29 = '\0';
  }
  else if (iVar22 < 9) {
    iVar16 = iVar22 + -3;
    *puVar27 = (uchar)iVar16;
    local_c8.excess_u8_ptr = puVar27;
    if (-1 < iVar16) {
      local_c8.excess_u8_ptr = puVar27 + 1;
    }
    iVar9 = iVar22;
    if (-1 < iVar16) {
      iVar9 = 3;
    }
    cVar29 = (char)iVar9;
    *(ulonglong *)local_c8.literals_ptr_raw = *puVar26;
    uVar8 = *puVar26;
    local_c8.literals_ptr_raw = (uchar *)((longlong)local_c8.literals_ptr_raw + (longlong)iVar22);
    uVar1 = *(undefined8 *)((longlong)puVar26 - (longlong)local_c8.lastoffset);
    *(ulonglong *)local_c8.literals_ptr_sub =
         CONCAT17((char)(uVar8 >> 0x38) - (char)((ulonglong)uVar1 >> 0x38),
                  CONCAT16((char)(uVar8 >> 0x30) - (char)((ulonglong)uVar1 >> 0x30),
                           CONCAT15((char)(uVar8 >> 0x28) - (char)((ulonglong)uVar1 >> 0x28),
                                    CONCAT14((char)(uVar8 >> 0x20) -
                                             (char)((ulonglong)uVar1 >> 0x20),
                                             CONCAT13((char)(uVar8 >> 0x18) -
                                                      (char)((ulonglong)uVar1 >> 0x18),
                                                      CONCAT12((char)(uVar8 >> 0x10) -
                                                               (char)((ulonglong)uVar1 >> 0x10),
                                                               CONCAT11((char)(uVar8 >> 8) -
                                                                        (char)((ulonglong)uVar1 >> 8
                                                                              ),(char)uVar8 -
                                                                                (char)uVar1)))))));
    puVar27 = local_c8.excess_u8_ptr;
    local_c8.literals_ptr_sub = local_c8.literals_ptr_sub + iVar22;
  }
  else {
    cVar29 = '\x03';
    newLZ_encoder_arrays_put_long_lrl<1>(&local_c8,(uchar *)puVar26,iVar22);
    puVar27 = local_c8.excess_u8_ptr;
  }
  iVar22 = iVar17 + -2;
  if (0xe < iVar22) {
    iVar22 = 0xf;
    if (iVar17 + -0x11 < 0xff) {
      *puVar27 = (uchar)(iVar17 + -0x11);
    }
    else {
      *puVar27 = 0xff;
      *local_c8.excess_u32_ptr = iVar17 - 0x110;
      local_c8.excess_u32_ptr = local_c8.excess_u32_ptr + 1;
    }
    puVar27 = puVar27 + 1;
    local_c8.excess_u8_ptr = puVar27;
  }
  uVar24 = cVar29 + (char)iVar22 * '\x04';
  if (0 < (int)uVar18) {
    uVar24 = uVar24 + 0xc0;
    local_c8.lastoffset = uVar18;
    if ((int)uVar18 < 0x7fff08) {
      uVar10 = uVar18 + 0xf8;
      iVar22 = 0x1f;
      if (uVar10 != 0) {
        for (; uVar10 >> iVar22 == 0; iVar22 = iVar22 + -1) {
        }
      }
      *local_c8.offsets_u8_ptr = ((char)iVar22 + -8) * '\x10' | (byte)uVar10 & 0xf;
      *local_c8.offsets_ptr = uVar18;
      local_c8.offsets_u8_ptr = local_c8.offsets_u8_ptr + 1;
      local_c8.offsets_ptr = local_c8.offsets_ptr + 1;
    }
    else {
      newLZ_encoder_arrays_put_long_offset(&local_c8,uVar18);
      puVar27 = local_c8.excess_u8_ptr;
    }
  }
  puVar2 = local_c8.packets_ptr + 1;
  *local_c8.packets_ptr = uVar24;
  puVar26 = puVar12;
  local_c8.packets_ptr = puVar2;
  if (param_4 + lVar21 + -0x10 <= puVar12) {
LAB_14f335ae9:
    newLZ_encoder_arrays_finish_chunk<1>(&local_c8,(uchar *)puVar12);
    lVar13 = newLZ_encoder_arrays_output
                       (param_10,param_9,(newlz_passinfo *)0x0,param_6,param_7,param_1,param_2,
                        &local_c8,param_8,param_11);
    return lVar13;
  }
  goto LAB_14f335840;
code_r0x00014f335965:
  puVar12 = puVar20;
  if (puVar28 <= puVar20) goto LAB_14f33597e;
  goto LAB_14f335950;
}

// newLZ_encode_chunk_fast_mode<oo2::FastCTMF<unsigned_int>,5,1,0,1,1,1> @ 14f335b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

long64 __cdecl
oo2::newLZ_encode_chunk_fast_mode<oo2::FastCTMF<unsigned_int>,5,1,0,1,1,1>
          (newlz_vtable *param_1,newlz_encoder_scratch *param_2,uchar *param_3,uchar *param_4,
          int param_5,uchar *param_6,uchar *param_7,long64 param_8,int *param_9,float *param_10,
          OodleKrakenChunkDeadlines *param_11)

{
  longlong *plVar1;
  undefined8 uVar2;
  uchar *puVar3;
  undefined4 uVar4;
  void *pvVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  long64 lVar13;
  byte bVar14;
  int iVar15;
  ulonglong *puVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong *puVar19;
  ulonglong *puVar20;
  longlong lVar21;
  char cVar22;
  int iVar23;
  longlong lVar24;
  int iVar25;
  uint uVar26;
  char cVar27;
  longlong lVar28;
  ulonglong *puVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  undefined1 auStackY_218 [32];
  uint local_1b0;
  uchar *local_1a0;
  newLZ_encoder_arrays local_120;
  uint auStack_78 [6];
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_218;
  lVar24 = (longlong)param_5;
  *param_9 = -1;
  if (param_5 < 0x81) {
    return lVar24;
  }
  iVar15 = param_1->pOptions->dictionarySize;
  if (iVar15 < 1) {
    iVar15 = 0x40000000;
  }
  else if (0x40000000 < iVar15) {
    iVar15 = 0x40000000;
  }
  pvVar5 = param_1->matcher;
  newLZ_encoder_arrays_point_to_scratch(&local_120,param_2,param_5,param_4,param_1->bitstream_flags)
  ;
  lVar6 = *(longlong *)((longlong)pvVar5 + 8);
  lVar7 = *(longlong *)((longlong)pvVar5 + 0x18);
  uVar4 = *(undefined4 *)((longlong)pvVar5 + 0x24);
  lVar28 = 0;
  puVar16 = (ulonglong *)(param_4 + lVar24 + -8);
  uVar18 = 8;
  local_1b0 = 8;
  lVar21 = -8;
  if (param_8 == 0) {
    lVar28 = 8;
  }
  auStack_78[2] = 8;
  auStack_78[3] = 8;
  auStack_78[4] = 8;
  lVar8 = *(longlong *)((longlong)pvVar5 + 0x28);
  local_1a0 = local_120.excess_u8_ptr;
  puVar29 = (ulonglong *)(param_4 + lVar28);
LAB_14f335cf8:
  lVar28 = 0x20;
  puVar19 = puVar29;
  do {
    lVar17 = lVar28 >> 5;
    puVar12 = puVar29;
    if ((longlong)(param_4 + lVar24 + -0x10) - (longlong)puVar19 <= lVar17) goto LAB_14f33611c;
    uVar9 = *puVar19;
    bVar14 = (byte)uVar4;
    uVar11 = uVar9 * lVar7 >> (bVar14 & 0x3f);
    iVar23 = (int)lVar8;
    iVar25 = (int)puVar19 - iVar23;
    iVar31 = *(int *)(lVar6 + uVar11 * 4);
    *(int *)(lVar6 + uVar11 * 4) = iVar25;
    if ((short)uVar9 == *(short *)((longlong)puVar19 - (longlong)(int)auStack_78[3])) {
      uVar26 = 0xffffffff;
      uVar18 = auStack_78[3];
LAB_14f335e66:
      lVar21 = (longlong)(int)-uVar18;
      puVar20 = (ulonglong *)((longlong)puVar19 + 2);
      goto LAB_14f335e6d;
    }
    if ((short)uVar9 == *(short *)((longlong)puVar19 - (longlong)(int)uVar18)) {
      uVar26 = 0xfffffffe;
      goto LAB_14f335e66;
    }
    uVar10 = (uint)uVar9;
    if ((uVar10 ^ *(uint *)((longlong)puVar19 + lVar21)) < 0x100) {
      uVar26 = 0;
      puVar20 = (ulonglong *)((longlong)puVar19 + 4);
      *(int *)(lVar6 + ((ulonglong)(lVar7 * *(longlong *)((longlong)puVar19 + 1)) >> (bVar14 & 0x3f)
                       ) * 4) = iVar25 + 1;
      puVar19 = (ulonglong *)((longlong)puVar19 + 1);
      goto LAB_14f335e6d;
    }
    uVar26 = iVar25 - iVar31;
    if (*(uint *)((longlong)puVar19 - (longlong)(int)uVar26) == uVar10) {
      if (uVar26 - 8 < iVar15 - 8U) {
        lVar28 = (longlong)(int)-uVar26;
        goto LAB_14f335ddb;
      }
      if (uVar10 == (uint)puVar19[-1]) break;
    }
    lVar28 = lVar28 + 1;
    puVar19 = (ulonglong *)(lVar17 + (longlong)puVar19);
  } while( true );
  uVar26 = 8;
  lVar28 = -8;
LAB_14f335ddb:
  if (puVar29 < puVar19) {
    lVar17 = lVar8 - (longlong)puVar19;
    do {
      if ((lVar28 <= lVar17) ||
         (puVar12 = (ulonglong *)((longlong)puVar19 - 1),
         (char)*puVar12 != *(char *)(lVar28 + -1 + (longlong)puVar19))) break;
      lVar17 = lVar17 + 1;
      puVar19 = puVar12;
    } while (puVar29 < puVar12);
  }
  if ((puVar19 == puVar29) && (uVar26 == 0)) {
    uVar26 = -(int)lVar21;
  }
  puVar20 = (ulonglong *)((longlong)puVar19 + 4);
  lVar21 = lVar28;
LAB_14f335e6d:
  puVar12 = puVar20;
  if (puVar20 < puVar16) {
LAB_14f335e80:
    puVar20 = puVar12 + 1;
    if (*puVar12 == *(ulonglong *)(lVar21 + (longlong)puVar12)) goto code_r0x00014f335e90;
    uVar11 = *(ulonglong *)(lVar21 + (longlong)puVar12) ^ *puVar12;
    uVar9 = 0;
    if (uVar11 != 0) {
      for (; (uVar11 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
      }
    }
    puVar20 = (ulonglong *)((longlong)puVar12 + (uVar9 >> 3));
  }
LAB_14f335ea9:
  iVar31 = (int)puVar19;
  puVar12 = puVar16;
  if (puVar20 < puVar16) {
    puVar12 = puVar20;
  }
  iVar30 = (int)puVar12 - iVar31;
  iVar25 = iVar31 - (int)puVar29;
  if (iVar25 == 0) {
    cVar27 = '\0';
  }
  else if (iVar25 < 9) {
    *local_1a0 = (uchar)(iVar25 + -3);
    iVar32 = iVar25;
    if (-1 < iVar25 + -3) {
      iVar32 = 3;
      local_1a0 = local_1a0 + 1;
    }
    cVar27 = (char)iVar32;
    *(ulonglong *)local_120.literals_ptr_raw = *puVar29;
    uVar9 = *puVar29;
    local_120.literals_ptr_raw = (uchar *)((longlong)local_120.literals_ptr_raw + (longlong)iVar25);
    uVar2 = *(undefined8 *)((longlong)puVar29 - (longlong)local_120.lastoffset);
    *(ulonglong *)local_120.literals_ptr_sub =
         CONCAT17((char)(uVar9 >> 0x38) - (char)((ulonglong)uVar2 >> 0x38),
                  CONCAT16((char)(uVar9 >> 0x30) - (char)((ulonglong)uVar2 >> 0x30),
                           CONCAT15((char)(uVar9 >> 0x28) - (char)((ulonglong)uVar2 >> 0x28),
                                    CONCAT14((char)(uVar9 >> 0x20) -
                                             (char)((ulonglong)uVar2 >> 0x20),
                                             CONCAT13((char)(uVar9 >> 0x18) -
                                                      (char)((ulonglong)uVar2 >> 0x18),
                                                      CONCAT12((char)(uVar9 >> 0x10) -
                                                               (char)((ulonglong)uVar2 >> 0x10),
                                                               CONCAT11((char)(uVar9 >> 8) -
                                                                        (char)((ulonglong)uVar2 >> 8
                                                                              ),(char)uVar9 -
                                                                                (char)uVar2)))))));
    local_120.literals_ptr_sub = local_120.literals_ptr_sub + iVar25;
    local_120.excess_u8_ptr = local_1a0;
  }
  else {
    cVar27 = '\x03';
    newLZ_encoder_arrays_put_long_lrl<1>(&local_120,(uchar *)puVar29,iVar25);
    local_1a0 = local_120.excess_u8_ptr;
  }
  uVar18 = auStack_78[3];
  iVar25 = iVar30 + -2;
  if (0xe < iVar25) {
    iVar25 = 0xf;
    if (iVar30 + -0x11 < 0xff) {
      *local_1a0 = (uchar)(iVar30 + -0x11);
    }
    else {
      *local_1a0 = 0xff;
      *local_120.excess_u32_ptr = iVar30 - 0x110;
      local_120.excess_u32_ptr = local_120.excess_u32_ptr + 1;
    }
    local_1a0 = local_1a0 + 1;
    local_120.excess_u8_ptr = local_1a0;
  }
  cVar27 = cVar27 + (char)iVar25 * '\x04';
  if ((int)uVar26 < 1) {
    lVar28 = (longlong)(int)-uVar26;
    cVar22 = (char)uVar26 * -0x40;
    local_120.lastoffset = auStack_78[lVar28 + 2];
    auStack_78[lVar28 + 2] = auStack_78[lVar28 + 1];
    auStack_78[lVar28 + 1] = auStack_78[lVar28];
    auStack_78[2] = local_120.lastoffset;
    uVar18 = auStack_78[4];
    local_1b0 = local_120.lastoffset;
  }
  else {
    auStack_78[2] = uVar26;
    auStack_78[3] = local_1b0;
    auStack_78[4] = uVar18;
    local_120.lastoffset = uVar26;
    if ((int)uVar26 < 0x7fff08) {
      uVar10 = uVar26 + 0xf8;
      iVar25 = 0x1f;
      if (uVar10 != 0) {
        for (; uVar10 >> iVar25 == 0; iVar25 = iVar25 + -1) {
        }
      }
      *local_120.offsets_u8_ptr = ((char)iVar25 + -8) * '\x10' | (byte)uVar10 & 0xf;
      *local_120.offsets_ptr = uVar26;
      local_120.offsets_u8_ptr = local_120.offsets_u8_ptr + 1;
      local_120.offsets_ptr = local_120.offsets_ptr + 1;
    }
    else {
      newLZ_encoder_arrays_put_long_offset(&local_120,uVar26);
      local_1a0 = local_120.excess_u8_ptr;
    }
    cVar22 = -0x40;
    local_1b0 = uVar26;
  }
  puVar3 = local_120.packets_ptr + 1;
  *local_120.packets_ptr = cVar27 + cVar22;
  local_120.packets_ptr = puVar3;
  if (param_4 + lVar24 + -0x10 <= puVar12) {
LAB_14f33611c:
    newLZ_encoder_arrays_finish_chunk<1>(&local_120,(uchar *)puVar12);
    lVar13 = newLZ_encoder_arrays_output
                       (param_10,param_9,(newlz_passinfo *)0x0,param_6,param_7,param_1,param_2,
                        &local_120,param_8,param_11);
    return lVar13;
  }
  lVar28 = 1;
  puVar29 = puVar12;
  if (1 < (longlong)iVar30) {
    do {
      iVar25 = (int)lVar28;
      plVar1 = (longlong *)(lVar28 + (longlong)puVar19);
      lVar28 = lVar28 * 2;
      *(int *)(lVar6 + ((ulonglong)(lVar7 * *plVar1) >> (bVar14 & 0x3f)) * 4) =
           (iVar31 - iVar23) + iVar25;
    } while (lVar28 < iVar30);
  }
  goto LAB_14f335cf8;
code_r0x00014f335e90:
  puVar12 = puVar20;
  if (puVar16 <= puVar20) goto LAB_14f335ea9;
  goto LAB_14f335e80;
}

// newLZ_encode_chunk_optimal_parse_tll_core<1,oo2::NewLZParseCoreSSE2> @ 14f3361c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

void __cdecl
oo2::newLZ_encode_chunk_optimal_parse_tll_core<1,oo2::NewLZParseCoreSSE2>
          (uchar *param_1,int param_2,int param_3,int param_4,int param_5,uchar *param_6,
          uint param_7,newLZ_MatchParseRecord *param_8,int param_9,int param_10,
          newlz_optimal_arrivals_tll *param_11,int param_12,int *param_13,newlz_vtable *param_14,
          newlz_passinfo *param_15,newlz_codecosts *param_16,
          vector_a<oo2::newlz_encoder_parse> *param_17,vector_a<oo2::newlz_encoder_parse> *param_18,
          OodleLZ_CompressOptions *param_19)

{
  uchar uVar1;
  OodleLZ_CompressionLevel OVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  newLZ_MatchParseRecord *pnVar7;
  newlz_passinfo *pnVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  byte *pbVar14;
  byte bVar15;
  int *piVar16;
  newlz_optimal_arrival_tll *pnVar17;
  ulonglong *puVar18;
  newlz_encoder_parse *pnVar19;
  int *piVar20;
  int *piVar21;
  newlz_codecosts *pnVar22;
  uchar *puVar23;
  newlz_optimal_arrival_tll *pnVar24;
  uint uVar25;
  longlong lVar26;
  undefined1 (*pauVar27) [16];
  ulonglong uVar28;
  longlong lVar29;
  int (*paiVar30) [32];
  newlz_optimal_arrival_tll *pnVar31;
  uint uVar32;
  newlz_optimal_arrivals_tll *pnVar33;
  newlz_encoder_parse *pnVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  uchar *puVar38;
  uint uVar39;
  vector_a<oo2::newlz_encoder_parse> *pvVar40;
  uint uVar41;
  ulonglong *puVar42;
  ulonglong *puVar43;
  ulonglong uVar44;
  uint uVar45;
  uint uVar46;
  int (*paiVar47) [32];
  longlong lVar48;
  ulonglong uVar49;
  longlong lVar50;
  bool bVar51;
  bool bVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auStack_2e8 [32];
  uint local_2c8;
  uint local_2c4;
  uint local_2c0;
  uint local_2bc;
  newlz_optimal_arrivals_tll *local_2b8;
  uint local_2b0;
  uint local_2ac;
  uint local_2a8;
  int local_2a4;
  int local_2a0;
  int local_29c;
  uint local_298;
  uchar *local_290;
  newlz_codecosts *local_288;
  uint local_280;
  uint local_27c;
  uint local_278;
  uint local_274;
  int local_270;
  uint local_26c;
  longlong local_268;
  longlong local_260;
  uchar *local_258;
  int local_250;
  int local_24c;
  uint local_248;
  longlong local_240;
  int *local_238;
  longlong local_230;
  vector_a<oo2::newlz_encoder_parse> *local_228;
  int local_220;
  uint local_21c;
  uint local_218;
  uint local_214;
  uint local_20c;
  int local_208;
  uint local_204;
  longlong local_200;
  int local_1f8;
  int local_1f4;
  int local_1f0;
  uint local_1ec;
  uint local_1e8;
  int local_1e0;
  uint local_1dc;
  int local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  newLZ_MatchParseRecord *local_1c0;
  longlong local_1b8;
  newlz_optimal_arrival_tll *local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  ulonglong local_198;
  newLZ_MatchParseRecord *local_190;
  int local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  int local_178;
  int local_174;
  undefined4 local_170;
  undefined4 local_16c;
  int local_168;
  int local_164;
  int local_160;
  int *local_158;
  newlz_optimal_arrivals_tll *local_150;
  longlong local_148;
  vector_base<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_> *local_140;
  newlz_passinfo *local_138;
  int local_130;
  uint uStack_12c;
  uint uStack_128;
  uint uStack_124;
  newlz_optimal_arrival_tll *local_120;
  newlz_optimal_arrivals_tll *pnStack_118;
  undefined8 local_108;
  undefined8 uStack_100;
  newlz_optimal_arrival_tll *local_f8;
  newlz_optimal_arrivals_tll *pnStack_f0;
  int aiStack_e8 [10];
  uint auStack_c0 [10];
  int aiStack_98 [10];
  uint auStack_70 [10];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_2e8;
  uVar28 = (ulonglong)param_9;
  local_268 = (longlong)param_2;
  local_138 = param_15;
  local_274 = param_2 - 0x10;
  local_228 = param_18;
  OVar2 = param_14->level;
  local_288 = param_16;
  local_2b8 = param_11;
  local_190 = param_8;
  local_2c0 = param_9;
  local_140 = (vector_base<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>
               *)param_17;
  if ((int)OVar2 < 8) {
    local_220 = 0;
    local_24c = 1 << ((byte)OVar2 & 0x1f);
    local_21c = 0;
    if (local_24c < 4) goto LAB_14f3362b0;
  }
  else {
    local_24c = 0x100;
  }
  local_21c = local_24c - 3;
  local_220 = 3;
LAB_14f3362b0:
  iVar10 = param_9 + 1;
  local_1e0 = 0;
  if (iVar10 < local_24c) {
    local_1e0 = iVar10;
  }
  *(undefined8 *)&param_17->field_0x10 = 0;
  local_1dc = local_24c - iVar10;
  if (local_24c <= iVar10) {
    local_1dc = 0;
  }
  local_1f8 = 0x400;
  if (5 < (int)OVar2) {
    local_1f8 = 1;
  }
  if (param_3 < (int)local_274) {
    local_1f4 = param_2 + -0x20;
    local_208 = param_2 + -0x12;
    local_2ac = param_3;
    local_258 = param_1;
    local_204 = param_3;
    local_1f0 = param_4;
    local_1d8 = param_2;
    local_198 = uVar28;
    do {
      uVar49 = (ulonglong)local_2ac;
      uVar25 = local_274;
      if ((int)(local_1f0 + local_2ac) < (int)local_274) {
        uVar25 = local_1f0 + local_2ac;
      }
      uVar39 = local_274;
      if ((int)(local_2ac + param_5) < (int)local_274) {
        uVar39 = local_2ac + param_5;
      }
      local_248 = local_274;
      if ((int)uVar39 < local_1f4) {
        local_248 = uVar39;
      }
      local_2c8 = local_274;
      if ((int)uVar25 < local_1f4) {
        local_2c8 = uVar25;
      }
      uVar44 = (ulonglong)local_2c8;
      local_29c = 0;
      uVar13 = uVar49;
      uVar25 = local_2ac;
      local_2b0 = local_2ac;
      local_278 = local_2ac;
      if ((int)local_2c8 <= (int)local_248) {
        while( true ) {
          pnVar7 = local_190;
          uVar25 = (uint)uVar49;
          iVar10 = (int)uVar44;
          uVar39 = (uint)uVar13;
          if (uVar39 == local_274) break;
          lVar26 = (longlong)(int)uVar39;
          uVar46 = *(uint *)(local_258 + lVar26);
          puVar23 = local_258 + lVar26;
          local_290 = puVar23;
          local_280 = uVar46;
          local_1c8 = lVar26;
          if (uVar39 != uVar25) {
            piVar16 = param_11->costs;
            local_29c = local_29c +
                        param_16->codecost_literal
                        [(byte)(local_258[lVar26 + -1] -
                               (local_258[lVar26 + (-1 - (longlong)
                                                         param_11->payloads[(int)uVar25].los.lasts
                                                         [0])] & (byte)param_16->subliteralmask))];
            if (piVar16[lVar26] != 0x7fffffff) {
              iVar35 = piVar16[(int)uVar25];
              iVar11 = uVar39 - local_278;
              iVar37 = 0;
              if (2 < iVar11) {
                if (iVar11 + -3 < 0xff) {
                  iVar37 = param_16->codecost_offset2[(longlong)iVar11 + 0xfd];
                }
                else {
                  iVar37 = cost_excess_huge(iVar11 + -3,param_16);
                  piVar16 = param_11->costs;
                }
              }
              if (piVar16[lVar26] < iVar37 + iVar35 + local_29c) {
                local_29c = 0;
                local_278 = (uint)uVar13;
                if (iVar10 <= (int)local_278) {
                  uVar44 = uVar13 & 0xffffffff;
                  uVar25 = local_278;
                  local_2c8 = local_278;
                  goto LAB_14f3377ba;
                }
              }
            }
          }
          local_270 = 0x7fffffff;
          local_26c = (int)uVar13 - local_278;
          local_1c0 = pnVar7 + lVar26;
          local_27c = 0;
          local_230 = 0;
          local_2a8 = 0;
          if (-1 < param_10) {
            lVar50 = (longlong)(int)local_26c;
            local_1a0 = 0;
            local_1a8 = lVar50;
            uVar25 = local_26c;
            while( true ) {
              lVar29 = local_1a0;
              local_2c4 = local_2a8;
              if ((local_2a8 == param_10) && (local_2c4 = local_2a8, param_10 < (int)uVar25)) {
                lVar29 = lVar50;
                local_2c4 = uVar25;
              }
              uVar39 = local_2c4;
              iVar10 = (int)uVar13 - local_2c4;
              lVar26 = lVar26 - lVar29;
              local_2a4 = iVar10;
              if (iVar10 < (int)local_2ac) break;
              if (param_11->costs[lVar26] != 0x7fffffff) {
                iVar35 = local_29c;
                if (local_2c4 != uVar25) {
                  iVar35 = 0;
                  if (local_2c4 != 0) {
                    puVar23 = local_258 + iVar10;
                    uVar25 = local_2c4;
                    do {
                      pbVar14 = puVar23 + -(longlong)param_11->payloads[lVar26].los.lasts[0];
                      uVar1 = *puVar23;
                      puVar23 = puVar23 + 1;
                      iVar35 = iVar35 + param_16->codecost_literal
                                        [(byte)(uVar1 - (*pbVar14 & (byte)param_16->subliteralmask))
                                        ];
                      uVar25 = uVar25 - 1;
                    } while (uVar25 != 0);
                  }
                }
                iVar35 = iVar35 + param_11->costs[lVar26];
                local_200 = lVar29;
                if (2 < (int)local_2c4) {
                  local_200 = 3;
                  if ((int)(local_2c4 - 3) < 0xff) {
                    iVar37 = param_16->codecost_offset2[lVar29 + 0xfd];
                  }
                  else {
                    local_2a0 = iVar35;
                    iVar37 = cost_excess_huge(local_2c4 - 3,param_16);
                  }
                  iVar35 = iVar35 + iVar37;
                }
                piVar16 = param_16->codecost_packet + local_200 + 0x3c;
                pnVar31 = local_2b8->payloads + lVar26;
                local_298 = 0;
                local_2bc = 0;
                local_1d0 = 0;
                local_240 = 0;
                puVar23 = local_290;
                local_2a0 = iVar35;
                local_1b0 = pnVar31;
                do {
                  uVar46 = local_2bc;
                  uVar25 = (pnVar31->los).lasts[local_1d0];
                  lVar26 = (longlong)(int)uVar25;
                  local_148 = -lVar26;
                  local_1b8 = lVar26;
                  if ((short)local_280 == (short)*(uint *)(puVar23 + local_148)) {
                    uVar12 = *(uint *)(puVar23 + local_148) ^ local_280;
                    if (uVar12 == 0) {
                      puVar43 = (ulonglong *)(puVar23 + 4);
                      puVar42 = (ulonglong *)(local_258 + local_268 + -8);
                      puVar18 = puVar43;
                      if (puVar43 <= puVar42 + -1) {
LAB_14f336660:
                        uVar28 = *(ulonglong *)
                                  (puVar23 + ((local_148 + 4) - (longlong)puVar43) +
                                  (longlong)puVar18) ^ *puVar18;
                        if (uVar28 == 0) goto code_r0x00014f33666d;
                        uVar49 = 0;
                        if (uVar28 != 0) {
                          for (; (uVar28 >> uVar49 & 1) == 0; uVar49 = uVar49 + 1) {
                          }
                        }
                        local_184 = (undefined4)uVar49;
                        iVar35 = ((int)((uVar49 & 0xffffffff) >> 3) - (int)puVar43) + (int)puVar18;
                        goto LAB_14f336699;
                      }
LAB_14f336676:
                      lVar50 = (longlong)puVar18 - (longlong)puVar43;
                      iVar35 = (int)lVar50;
                      for (; (puVar18 < puVar42 &&
                             (iVar35 = (int)lVar50,
                             (uchar)*puVar18 ==
                             (puVar23 + ((local_148 + 4) - (longlong)puVar43))[(longlong)puVar18]));
                          puVar18 = (ulonglong *)((longlong)puVar18 + 1)) {
                        lVar50 = lVar50 + 1;
                        iVar35 = (int)lVar50;
                      }
LAB_14f336699:
                      uVar12 = iVar35 + 4;
                    }
                    else {
                      uVar12 = 3 - ((uVar12 & 0xffffff) != 0);
                    }
                    puVar23 = local_290;
                    local_218 = uVar12;
                    if ((int)local_298 < (int)uVar12) {
                      uVar45 = uVar12 + local_2b0;
                      local_20c = uVar45;
                      if ((int)uVar45 < (int)local_2c8) {
                        local_20c = local_2c8;
                      }
                      local_2c8 = local_20c;
                      local_298 = uVar12;
                      local_238 = piVar16;
                      local_214 = uVar45;
                      if ((int)uVar12 < 0x22) {
                        uStack_12c = local_2b0;
                        paiVar47 = param_16->cost_packet_short[local_200] + local_1d0;
                        local_130 = local_2a4;
                        uStack_128 = local_2c4;
                        piVar16 = *paiVar47 + 4;
                        local_108 = CONCAT44(local_2b0,local_2a4);
                        uStack_100 = CONCAT44(local_2bc,local_2c4);
                        pnStack_118 = local_2b8;
                        local_250 = *(int *)((longlong)(paiVar47 + -1) + 0x78 +
                                            (longlong)(int)uVar12 * 4) + local_2a0;
                        local_158 = local_2b8->costs + (longlong)(int)local_2b0 + 2;
                        pnStack_f0 = local_2b8;
                        iVar35 = 0;
                        lVar26 = 0;
                        local_150 = local_2b8;
                        local_260 = CONCAT44(local_260._4_4_,local_2bc);
                        local_1e8 = local_2c4;
                        local_1ec = local_2b0;
                        uVar25 = local_2b0;
                        iVar10 = local_2a0;
                        do {
                          piVar20 = (int *)((longlong)piVar16 +
                                           ((longlong)local_158 - (longlong)paiVar47) + -0x10);
                          piVar21 = (int *)((longlong)piVar16 +
                                           ((longlong)local_158 - (longlong)paiVar47));
                          auVar56._0_4_ =
                               -(uint)((*(int (*) [32])(piVar16 + -4))[0] + local_2a0 < *piVar20);
                          auVar56._4_4_ =
                               -(uint)((*(int (*) [32])(piVar16 + -4))[1] + local_2a0 < piVar20[1]);
                          auVar56._8_4_ =
                               -(uint)((*(int (*) [32])(piVar16 + -4))[2] + local_2a0 < piVar20[2]);
                          auVar56._12_4_ =
                               -(uint)((*(int (*) [32])(piVar16 + -4))[3] + local_2a0 < piVar20[3]);
                          auVar53 = *(undefined1 (*) [16])piVar16;
                          uVar25 = movmskps(uVar25,auVar56);
                          auVar54._0_4_ = -(uint)(local_2a0 + auVar53._0_4_ < *piVar21);
                          auVar54._4_4_ = -(uint)(local_2a0 + auVar53._4_4_ < piVar21[1]);
                          auVar54._8_4_ = -(uint)(local_2a0 + auVar53._8_4_ < piVar21[2]);
                          auVar54._12_4_ = -(uint)(local_2a0 + auVar53._12_4_ < piVar21[3]);
                          iVar10 = movmskps(iVar10,auVar54);
                          uVar39 = iVar10 * 0x10 + uVar25;
                          while (param_16 = local_288, pnVar24 = local_1b0, uStack_124 = local_2bc,
                                local_120 = pnVar31, local_f8 = pnVar31, uVar39 != 0) {
                            local_178 = 0;
                            if (uVar39 != 0) {
                              for (; (uVar39 >> local_178 & 1) == 0; local_178 = local_178 + 1) {
                              }
                            }
                            iVar10 = local_178 + iVar35;
                            uVar39 = uVar39 & uVar39 - 1;
                            if ((int)(uVar12 - 2) < iVar10) goto LAB_14f336aa2;
                            local_158[iVar10] = local_2a0 + (*paiVar47)[iVar10];
                            pnVar24 = local_2b8->payloads + (int)(local_2b0 + iVar10 + 2);
                            pnVar24->lrl = local_2c4;
                            pnVar24->ml = iVar10 + 2;
                            piVar21 = (pnVar31->los).lasts + 2;
                            if (local_2bc == 0) {
                              (pnVar24->los).lasts[0] = (pnVar31->los).lasts[0];
                              iVar10 = (pnVar31->los).lasts[1];
                            }
                            else {
                              if (local_2bc == 1) {
                                uVar25 = (pnVar31->los).lasts[1];
                              }
                              else {
                                uVar25 = *piVar21;
                                piVar21 = (pnVar31->los).lasts + 1;
                              }
                              (pnVar24->los).lasts[0] = uVar25;
                              iVar10 = (pnVar31->los).lasts[0];
                            }
                            (pnVar24->los).lasts[1] = iVar10;
                            uVar25 = *piVar21;
                            (pnVar24->los).lasts[2] = uVar25;
                            (pnVar24->field3_0x14).is_twostep = 0;
                            pnVar24->prev_index = local_2a4;
                          }
                          iVar35 = iVar35 + 8;
                          lVar26 = lVar26 + 8;
                          piVar16 = piVar16 + 8;
                          iVar10 = 0;
                        } while (lVar26 <= (longlong)(int)uVar12 + -2);
LAB_14f336aa2:
                        uVar25 = (uint)local_1b8;
                        piVar16 = local_238;
                        lVar26 = local_1b8;
                        uVar45 = local_214;
                      }
                      else {
                        iVar10 = local_2a0;
                        if ((int)(uVar12 - 0x11) < 0xff) {
                          iVar35 = param_16->codecost_offset2[(longlong)(int)uVar12 + 0xef];
                        }
                        else {
                          iVar35 = cost_excess_huge(uVar12 - 0x11,param_16);
                        }
                        piVar21 = local_238;
                        iVar37 = local_2a0;
                        uVar39 = local_2c4;
                        local_250 = *piVar16 + iVar35 + iVar10;
                        if (local_250 < local_2b8->costs[(int)uVar45]) {
                          local_2b8->costs[(int)uVar45] = local_250;
                          piVar20 = (pnVar31->los).lasts + 2;
                          pnVar24 = local_2b8->payloads + (int)uVar45;
                          pnVar24->ml = uVar12;
                          pnVar24->lrl = local_2c4;
                          if (uVar46 == 0) {
                            (pnVar24->los).lasts[0] = (pnVar31->los).lasts[0];
                            iVar10 = (pnVar31->los).lasts[1];
                          }
                          else {
                            if (uVar46 == 1) {
                              iVar10 = (pnVar31->los).lasts[1];
                            }
                            else {
                              iVar10 = *piVar20;
                              piVar20 = (pnVar31->los).lasts + 1;
                            }
                            (pnVar24->los).lasts[0] = iVar10;
                            iVar10 = (pnVar31->los).lasts[0];
                          }
                          (pnVar24->los).lasts[1] = iVar10;
                          (pnVar24->los).lasts[2] = *piVar20;
                          pnVar24->prev_index = local_2a4;
                          (pnVar24->field3_0x14).is_twostep = 0;
                        }
                        pnVar24 = pnVar31;
                        if (uVar12 - local_220 < local_21c) {
                          piVar16 = param_16->codecost_offset2 + 0xf1;
                          lVar26 = 2;
                          pnVar33 = local_2b8;
                          iVar10 = -0xf;
                          do {
                            if (iVar10 < 0) {
                              iVar35 = param_16->codecost_literal
                                       [local_200 + (local_240 + lVar26) * 4 + 0xf8];
                            }
                            else {
                              if (iVar10 < 0xff) {
                                iVar35 = *piVar16;
                              }
                              else {
                                iVar35 = cost_excess_huge(iVar10,param_16);
                              }
                              iVar35 = iVar35 + *piVar21;
                              pnVar33 = local_2b8;
                            }
                            lVar50 = local_1c8 + lVar26;
                            if (iVar35 + iVar37 < pnVar33->costs[lVar50]) {
                              pnVar33->costs[lVar50] = iVar35 + iVar37;
                              piVar20 = (pnVar31->los).lasts + 2;
                              pnVar17 = pnVar33->payloads + lVar50;
                              pnVar17->ml = iVar10 + 0x11;
                              pnVar17->lrl = uVar39;
                              if (uVar46 == 0) {
                                (pnVar17->los).lasts[0] = (pnVar31->los).lasts[0];
                                iVar35 = (pnVar31->los).lasts[1];
                              }
                              else {
                                if (uVar46 == 1) {
                                  iVar35 = (pnVar31->los).lasts[1];
                                }
                                else {
                                  iVar35 = *piVar20;
                                  piVar20 = (pnVar31->los).lasts + 1;
                                }
                                (pnVar17->los).lasts[0] = iVar35;
                                iVar35 = (pnVar31->los).lasts[0];
                              }
                              (pnVar17->los).lasts[1] = iVar35;
                              (pnVar17->los).lasts[2] = *piVar20;
                              pnVar17->prev_index = local_2a4;
                              (pnVar17->field3_0x14).is_twostep = 0;
                              pnVar33 = local_2b8;
                            }
                            lVar26 = lVar26 + 1;
                            piVar16 = piVar16 + 1;
                            iVar35 = iVar10 + 0x12;
                            iVar10 = iVar10 + 1;
                          } while (iVar35 < (int)uVar12);
                          goto LAB_14f336aa2;
                        }
                      }
                      pnVar17 = local_1b0;
                      puVar23 = local_290;
                      pnVar31 = pnVar24;
                      iVar10 = local_2a4;
                      uVar39 = local_2c4;
                      if ((int)uVar45 < (int)(local_274 - 5)) {
                        puVar38 = local_258 + (int)uVar45;
                        puVar43 = (ulonglong *)(puVar38 + 3);
                        puVar42 = (ulonglong *)(local_258 + local_268 + -8);
                        puVar18 = puVar43;
                        if (puVar43 <= puVar42 + -1) {
LAB_14f336b00:
                          uVar28 = *(ulonglong *)(-lVar26 + (longlong)puVar18) ^ *puVar18;
                          if (uVar28 == 0) goto code_r0x00014f336b0d;
                          uVar49 = 0;
                          if (uVar28 != 0) {
                            for (; (uVar28 >> uVar49 & 1) == 0; uVar49 = uVar49 + 1) {
                            }
                          }
                          local_17c = (undefined4)uVar49;
                          iVar35 = ((int)((uVar49 & 0xffffffff) >> 3) - (int)puVar43) + (int)puVar18
                          ;
                          goto LAB_14f336b38;
                        }
LAB_14f336b16:
                        lVar50 = (longlong)puVar18 - (longlong)puVar43;
                        iVar35 = (int)lVar50;
                        for (; (puVar18 < puVar42 &&
                               (iVar35 = (int)lVar50,
                               (char)*puVar18 == *(char *)(-lVar26 + (longlong)puVar18)));
                            puVar18 = (ulonglong *)((longlong)puVar18 + 1)) {
                          lVar50 = lVar50 + 1;
                          iVar35 = (int)lVar50;
                        }
LAB_14f336b38:
                        uVar32 = 0;
                        uVar41 = uVar32;
                        if (puVar38[2] == puVar38[(longlong)(int)~uVar25 + 3]) {
                          uVar41 = (puVar38[1] == puVar38[(longlong)(int)(-2 - uVar25) + 3]) + 1;
                        }
                        local_2c8 = local_20c;
                        iVar37 = 3 - uVar41;
                        iVar35 = uVar41 + iVar35;
                        piVar16 = local_238;
                        uVar46 = local_2bc;
                        if (1 < iVar35) {
                          iVar10 = iVar37;
                          do {
                            iVar11 = iVar10;
                            uVar1 = *puVar38;
                            pbVar14 = puVar38 + local_148;
                            puVar38 = puVar38 + 1;
                            uVar32 = uVar32 + param_16->codecost_literal
                                              [(byte)(uVar1 - (*pbVar14 &
                                                              (byte)param_16->subliteralmask))];
                            iVar10 = iVar11 + -1;
                          } while (iVar10 != 0);
                          iVar36 = local_250 + uVar32;
                          iVar10 = iVar37;
                          if (2 < iVar37) {
                            iVar10 = iVar11 + 2;
                            iVar36 = iVar36 + *(int *)((longlong)param_16 +
                                                      (0x403 - (ulonglong)uVar41) * 4);
                          }
                          iVar11 = iVar35 + -0x11;
                          if (iVar11 < 0) {
                            iVar11 = param_16->codecost_packet[iVar10 + (iVar35 + -2) * 4];
                          }
                          else {
                            if (iVar11 < 0xff) {
                              iVar11 = param_16->codecost_offset2[(longlong)iVar35 + 0xef];
                            }
                            else {
                              iVar11 = cost_excess_huge(iVar11,param_16);
                            }
                            iVar11 = iVar11 + param_16->codecost_packet[(longlong)iVar10 + 0x3c];
                          }
                          uVar45 = iVar37 + iVar35 + uVar45;
                          local_2c8 = uVar45;
                          if ((int)uVar45 < (int)local_20c) {
                            local_2c8 = local_20c;
                          }
                          puVar23 = local_290;
                          piVar16 = local_238;
                          pnVar31 = pnVar17;
                          iVar10 = local_2a4;
                          uVar46 = local_2bc;
                          uVar39 = local_2c4;
                          if (iVar36 + iVar11 < local_2b8->costs[(int)uVar45]) {
                            local_2b8->costs[(int)uVar45] = iVar36 + iVar11;
                            pnVar24 = local_2b8->payloads + (int)uVar45;
                            piVar21 = (pnVar17->los).lasts + 2;
                            pnVar24->ml = uVar12;
                            pnVar24->lrl = local_2c4;
                            if (local_2bc == 0) {
                              (pnVar24->los).lasts[0] = (pnVar17->los).lasts[0];
                              iVar11 = (pnVar17->los).lasts[1];
                            }
                            else {
                              if (local_2bc == 1) {
                                iVar11 = (pnVar17->los).lasts[1];
                              }
                              else {
                                iVar11 = *piVar21;
                                piVar21 = (pnVar17->los).lasts + 1;
                              }
                              (pnVar24->los).lasts[0] = iVar11;
                              iVar11 = (pnVar17->los).lasts[0];
                            }
                            (pnVar24->los).lasts[1] = iVar11;
                            (pnVar24->los).lasts[2] = *piVar21;
                            (pnVar24->field3_0x14).twostep.lrl = (byte)iVar37;
                            (pnVar24->field3_0x14).is_twostep =
                                 (pnVar24->field3_0x14).is_twostep & 0xff;
                            (pnVar24->field3_0x14).is_twostep =
                                 (pnVar24->field3_0x14).is_twostep | iVar35 << 8;
                            pnVar24->prev_index = local_2a4;
                          }
                        }
                      }
                    }
                  }
                  local_2bc = uVar46 + 1;
                  local_1d0 = local_1d0 + 1;
                  local_240 = local_240 + 0x10;
                  piVar16 = piVar16 + 0x40;
                } while ((int)local_2bc < 3);
                if ((int)local_27c < (int)local_298) {
                  local_27c = local_298;
                }
                local_238 = piVar16;
                if (local_24c <= (int)local_27c) goto LAB_14f337747;
                uVar13 = (ulonglong)local_2b0;
                lVar50 = local_1a8;
                param_11 = local_2b8;
                uVar25 = local_26c;
                if (local_2a0 < local_270) {
                  local_270 = local_2a0;
                  aiStack_98[local_230] = iVar10;
                  auStack_c0[local_230] = uVar39;
                  aiStack_e8[local_230] = local_2a0;
                  auStack_70[local_230] = local_298;
                  local_230 = local_230 + 1;
                }
              }
              local_2a8 = local_2a8 + 1;
              local_1a0 = local_1a0 + 1;
              if (param_10 < (int)local_2a8) break;
              lVar26 = (longlong)(int)uVar13;
            }
            uVar28 = (ulonglong)local_2c0;
            puVar23 = local_290;
            uVar46 = local_280;
          }
          local_260 = 0;
          do {
            lVar50 = local_230;
            lVar26 = 0;
            uVar25 = local_1c0->pairs[local_260].length;
            if ((int)uVar25 < (int)uVar28) break;
            local_2bc = local_1c0->pairs[local_260].offset;
            puVar43 = (ulonglong *)(local_258 + local_268 + -8);
            local_2c4 = (int)puVar43 - (int)puVar23;
            if ((int)uVar25 < (int)local_2c4) {
              local_2c4 = uVar25;
            }
            if (local_2bc < param_7) {
              if (local_2bc < 8) {
                local_2bc = rounded_up[local_2bc];
                if ((longlong)(ulonglong)local_2bc <= (longlong)puVar23 - (longlong)param_6) {
                  uVar25 = 0;
                  if (uVar46 == *(uint *)(puVar23 + -(ulonglong)local_2bc)) {
                    puVar18 = (ulonglong *)(puVar23 + 4);
                    lVar29 = (longlong)(puVar23 + -(ulonglong)local_2bc) + (4 - (longlong)puVar18);
                    puVar42 = puVar18;
                    if (puVar18 <= puVar43 + -1) {
LAB_14f336eb6:
                      uVar49 = *(ulonglong *)(lVar29 + (longlong)puVar42) ^ *puVar42;
                      if (uVar49 == 0) goto code_r0x00014f336ebf;
                      uVar13 = 0;
                      if (uVar49 != 0) {
                        for (; (uVar49 >> uVar13 & 1) == 0; uVar13 = uVar13 + 1) {
                        }
                      }
                      local_170 = (undefined4)uVar13;
                      iVar10 = ((int)((uVar13 & 0xffffffff) >> 3) - (int)puVar18) + (int)puVar42;
                      goto LAB_14f336ee7;
                    }
LAB_14f336ec8:
                    lVar48 = (longlong)puVar42 - (longlong)puVar18;
                    iVar10 = (int)lVar48;
                    for (; (puVar42 < puVar43 &&
                           (iVar10 = (int)lVar48,
                           (char)*puVar42 == *(char *)(lVar29 + (longlong)puVar42)));
                        puVar42 = (ulonglong *)((longlong)puVar42 + 1)) {
                      lVar48 = lVar48 + 1;
                      iVar10 = (int)lVar48;
                    }
LAB_14f336ee7:
                    local_2c4 = iVar10 + 4;
                  }
                  else {
                    local_2c4 = 0;
                  }
                  if (local_2bc != 8) {
                    if (uVar46 == *(uint *)(puVar23 + -8)) {
                      puVar18 = (ulonglong *)(puVar23 + 4);
                      puVar42 = puVar18;
                      if (puVar18 <= puVar43 + -1) {
LAB_14f336f30:
                        uVar49 = *(ulonglong *)
                                  (puVar23 + (-4 - (longlong)puVar18) + (longlong)puVar42) ^
                                 *puVar42;
                        if (uVar49 == 0) goto code_r0x00014f336f39;
                        uVar13 = 0;
                        if (uVar49 != 0) {
                          for (; (uVar49 >> uVar13 & 1) == 0; uVar13 = uVar13 + 1) {
                          }
                        }
                        local_16c = (undefined4)uVar13;
                        iVar10 = ((int)((uVar13 & 0xffffffff) >> 3) - (int)puVar18) + (int)puVar42;
                        goto LAB_14f336f65;
                      }
LAB_14f336f45:
                      lVar29 = (longlong)puVar42 - (longlong)puVar18;
                      iVar10 = (int)lVar29;
                      for (; (puVar42 < puVar43 &&
                             (iVar10 = (int)lVar29,
                             (uchar)*puVar42 ==
                             (puVar23 + (-4 - (longlong)puVar18))[(longlong)puVar42]));
                          puVar42 = (ulonglong *)((longlong)puVar42 + 1)) {
                        lVar29 = lVar29 + 1;
                        iVar10 = (int)lVar29;
                      }
LAB_14f336f65:
                      uVar25 = iVar10 + 4;
                    }
                    if ((int)local_2c4 <= (int)uVar25) {
                      local_2bc = 8;
                      local_2c4 = uVar25;
                    }
                  }
                  if ((int)uVar28 <= (int)local_2c4) goto LAB_14f336fad;
                }
              }
              else {
LAB_14f336fad:
                uVar25 = local_2bc;
                if (((param_19->farMatchOffsetLog2 < 1) ||
                    ((int)local_2bc < 1 << ((byte)param_19->farMatchOffsetLog2 & 0x1f))) ||
                   (param_19->farMatchMinLen <= (int)local_2c4)) {
                  if (0xfffff < (int)local_2bc) {
                    if ((int)local_2bc < 0x400000) {
                      if ((int)local_2bc < 0x200000) {
                        bVar52 = SBORROW4(local_2c4,5);
                        bVar51 = (int)(local_2c4 - 5) < 0;
                      }
                      else {
                        bVar52 = SBORROW4(local_2c4,6);
                        bVar51 = (int)(local_2c4 - 6) < 0;
                      }
                    }
                    else {
                      bVar52 = SBORROW4(local_2c4,8);
                      bVar51 = (int)(local_2c4 - 8) < 0;
                    }
                    if (bVar52 != bVar51) goto LAB_14f33771e;
                  }
                  lVar48 = (longlong)(int)local_2c4;
                  lVar29 = -1;
                  if (0 < local_230) {
                    iVar35 = local_2c4 - 0x11;
                    uVar39 = local_2c4;
                    iVar10 = 0x7fffffff;
                    do {
                      iVar37 = aiStack_e8[lVar26];
                      uVar46 = 3;
                      if ((int)auStack_c0[lVar26] < 3) {
                        uVar46 = auStack_c0[lVar26];
                      }
                      if (iVar35 < 0) {
                        iVar11 = param_16->codecost_packet[(int)(uVar46 + (uVar39 + 0x2e) * 4)];
                      }
                      else {
                        if (iVar35 < 0xff) {
                          iVar11 = param_16->codecost_offset2[lVar48 + 0xef];
                        }
                        else {
                          iVar11 = cost_excess_huge(iVar35,param_16);
                          uVar39 = local_2c4;
                        }
                        iVar11 = iVar11 + param_16->codecost_packet[(longlong)(int)uVar46 + 0xfc];
                      }
                      iVar36 = iVar11 + iVar37;
                      lVar9 = lVar26;
                      if (iVar10 <= iVar11 + iVar37) {
                        iVar36 = iVar10;
                        lVar9 = lVar29;
                      }
                      lVar29 = lVar9;
                      lVar26 = lVar26 + 1;
                      iVar10 = iVar36;
                    } while (lVar26 < lVar50);
                    puVar23 = local_290;
                    if (-1 < lVar29) {
                      uVar46 = auStack_c0[lVar29];
                      iVar10 = aiStack_98[lVar29];
                      uVar12 = 3;
                      if ((int)uVar46 < 3) {
                        uVar12 = uVar46;
                      }
                      pnVar31 = local_2b8->payloads + iVar10;
                      local_2a8 = uVar46;
                      local_270 = iVar10;
                      if ((int)uVar39 <= (int)auStack_70[lVar29]) break;
                      if ((int)local_27c < (int)uVar39) {
                        local_27c = uVar39;
                      }
                      uVar41 = local_2b0 + uVar39;
                      uVar45 = local_288->offset_alt_modulo;
                      if ((int)local_2c8 <= (int)uVar41) {
                        local_2c8 = uVar41;
                      }
                      if (uVar45 == 0) {
                        if ((int)uVar25 < 0x7fff08) {
                          uVar45 = uVar25 + 0xf8;
                          local_168 = 0x1f;
                          if (uVar45 != 0) {
                            for (; uVar45 >> local_168 == 0; local_168 = local_168 + -1) {
                            }
                          }
                          bVar15 = ((char)local_168 + -8) * '\x10' | (byte)uVar45 & 0xf;
                        }
                        else {
                          local_174 = 0x1f;
                          if (uVar25 - 0x7eff00 != 0) {
                            for (; uVar25 - 0x7eff00 >> local_174 == 0; local_174 = local_174 + -1)
                            {
                            }
                          }
                          bVar15 = (byte)local_174 | 0xf0;
                        }
                        if (bVar15 < 0xf0) {
                          iVar37 = (bVar15 >> 4) + 4;
                        }
                        else {
                          iVar37 = bVar15 - 0xe0;
                        }
                        iVar11 = local_288->codecost_offset1[bVar15] + iVar37 * 0x20;
                        iVar37 = iVar11 + 0xc;
                        if ((int)uVar25 < 0x7fff08) {
                          iVar37 = iVar11;
                        }
                      }
                      else if (uVar45 == 1) {
                        uVar25 = uVar25 + 8;
                        local_164 = 0x1f;
                        if (uVar25 != 0) {
                          for (; uVar25 >> local_164 == 0; local_164 = local_164 + -1) {
                          }
                        }
                        bVar15 = (char)local_164 - 3;
                        bVar15 = (byte)(uVar25 >> (bVar15 & 0x1f)) ^ 8 | bVar15 * '\b';
                        iVar37 = (uint)(bVar15 >> 3) * 0x20 + local_288->codecost_offset1[bVar15];
                      }
                      else {
                        uVar39 = uVar25 / uVar45 + 8;
                        local_160 = 0x1f;
                        if (uVar39 != 0) {
                          for (; uVar39 >> local_160 == 0; local_160 = local_160 + -1) {
                          }
                        }
                        bVar15 = (char)local_160 - 3;
                        bVar15 = (byte)(uVar39 >> (bVar15 & 0x1f)) ^ 8 | bVar15 * '\b';
                        iVar37 = local_288->codecost_offset1[bVar15] +
                                 local_288->codecost_offset2
                                 [(ulonglong)uVar25 % (ulonglong)uVar45 & 0xff] +
                                 (uint)(bVar15 >> 3) * 0x20;
                        uVar39 = local_2c4;
                      }
                      iVar37 = aiStack_e8[lVar29] + iVar37;
                      local_298 = uVar41;
                      if ((int)uVar39 < 0x22) {
                        iVar35 = uVar39 - local_2c0;
                        paiVar47 = local_288->cost_packet_short[(int)uVar12];
                        paiVar30 = paiVar47 + 3;
                        piVar21 = paiVar47[3] + 4;
                        local_26c = (*paiVar30)[iVar35] + iVar37;
                        piVar16 = local_2b8->costs;
                        uVar13 = 0;
                        lVar26 = (longlong)piVar16 +
                                 ((local_198 + local_1c8) * 4 - (longlong)paiVar30);
                        uVar28 = uVar13;
                        uVar49 = uVar13;
                        do {
                          piVar20 = (int *)((longlong)piVar21 + lVar26 + -0x10);
                          auVar55._0_4_ =
                               -(uint)((*(int (*) [32])(piVar21 + -4))[0] + iVar37 < *piVar20);
                          auVar55._4_4_ = -(uint)(piVar21[-3] + iVar37 < piVar20[1]);
                          auVar55._8_4_ = -(uint)(piVar21[-2] + iVar37 < piVar20[2]);
                          auVar55._12_4_ = -(uint)(piVar21[-1] + iVar37 < piVar20[3]);
                          piVar20 = (int *)((longlong)piVar21 + lVar26);
                          iVar11 = movmskps((int)uVar13,auVar55);
                          auVar53._0_4_ = -(uint)(*piVar21 + iVar37 < *piVar20);
                          auVar53._4_4_ = -(uint)(piVar21[1] + iVar37 < piVar20[1]);
                          auVar53._8_4_ = -(uint)(piVar21[2] + iVar37 < piVar20[2]);
                          auVar53._12_4_ = -(uint)(piVar21[3] + iVar37 < piVar20[3]);
                          iVar36 = movmskps(uVar12,auVar53);
                          uVar25 = iVar36 * 0x10 + iVar11;
                          while (uVar25 != 0) {
                            local_188 = 0;
                            if (uVar25 != 0) {
                              for (; (uVar25 >> local_188 & 1) == 0; local_188 = local_188 + 1) {
                              }
                            }
                            iVar11 = local_188 + (int)uVar28;
                            uVar25 = uVar25 & uVar25 - 1;
                            if (iVar35 < iVar11) goto LAB_14f3374f9;
                            piVar16[local_198 + local_1c8 + (longlong)iVar11] =
                                 (*paiVar30)[iVar11] + iVar37;
                            pnVar24 = local_2b8->payloads + (int)(local_2b0 + local_2c0 + iVar11);
                            pnVar24->lrl = uVar46;
                            (pnVar24->los).lasts[0] = local_2bc;
                            pnVar24->ml = local_2c0 + iVar11;
                            (pnVar24->los).lasts[1] = (pnVar31->los).lasts[0];
                            (pnVar24->los).lasts[2] = (pnVar31->los).lasts[1];
                            pnVar24->prev_index = iVar10;
                            (pnVar24->field3_0x14).is_twostep = 0;
                          }
                          uVar12 = 0;
                          uVar28 = (ulonglong)((int)uVar28 + 8);
                          uVar13 = (ulonglong)iVar35;
                          uVar49 = uVar49 + 8;
                          piVar21 = piVar21 + 8;
                        } while ((longlong)uVar49 <= (longlong)uVar13);
                      }
                      else {
                        if (iVar35 < 0xff) {
                          iVar35 = local_288->codecost_offset2[lVar48 + 0xef];
                        }
                        else {
                          iVar35 = cost_excess_huge(iVar35,local_288);
                          uVar39 = local_2c4;
                        }
                        lVar26 = (longlong)(int)uVar12;
                        local_26c = local_288->codecost_packet[lVar26 + 0xfc] + iVar35 + iVar37;
                        if ((int)local_26c < local_2b8->costs[(int)uVar41]) {
                          local_2b8->costs[(int)uVar41] = local_26c;
                          pnVar24 = local_2b8->payloads + (int)uVar41;
                          pnVar24->ml = uVar39;
                          pnVar24->lrl = uVar46;
                          (pnVar24->los).lasts[0] = local_2bc;
                          (pnVar24->los).lasts[1] = (pnVar31->los).lasts[0];
                          (pnVar24->los).lasts[2] = (pnVar31->los).lasts[1];
                          (pnVar24->field3_0x14).is_twostep = 0;
                          pnVar24->prev_index = iVar10;
                        }
                        if ((uVar39 - local_1e0 < local_1dc) && ((longlong)local_198 < lVar48)) {
                          iVar35 = (int)local_198 + -0x11;
                          piVar16 = local_288->codecost_offset2 + local_198 + 0xef;
                          piVar21 = local_288->codecost_packet + lVar26 + local_198 * 4 + 0xb8;
                          pnVar33 = local_2b8;
                          uVar28 = local_198;
                          do {
                            if (iVar35 < 0) {
                              iVar11 = *piVar21;
                            }
                            else {
                              pnVar22 = local_288;
                              if (iVar35 < 0xff) {
                                iVar11 = *piVar16;
                              }
                              else {
                                iVar11 = cost_excess_huge(iVar35,local_288);
                              }
                              iVar11 = iVar11 + pnVar22->codecost_packet[lVar26 + 0xfc];
                              pnVar33 = local_2b8;
                            }
                            lVar50 = local_1c8 + uVar28;
                            if (iVar11 + iVar37 < pnVar33->costs[lVar50]) {
                              pnVar33->costs[lVar50] = iVar11 + iVar37;
                              pnVar24 = pnVar33->payloads + lVar50;
                              pnVar24->ml = iVar35 + 0x11;
                              (pnVar24->los).lasts[0] = local_2bc;
                              pnVar24->lrl = uVar46;
                              (pnVar24->los).lasts[1] = (pnVar31->los).lasts[0];
                              (pnVar24->los).lasts[2] = (pnVar31->los).lasts[1];
                              (pnVar24->field3_0x14).is_twostep = 0;
                              pnVar24->prev_index = iVar10;
                            }
                            iVar35 = iVar35 + 1;
                            uVar28 = uVar28 + 1;
                            piVar21 = piVar21 + 4;
                            piVar16 = piVar16 + 1;
                            uVar41 = local_298;
                          } while ((longlong)uVar28 < lVar48);
                        }
                      }
LAB_14f3374f9:
                      pnVar22 = local_288;
                      uVar25 = local_2bc;
                      puVar23 = local_290;
                      if ((int)uVar41 < (int)(local_274 - 5)) {
                        puVar38 = local_258 + (int)uVar41;
                        puVar42 = (ulonglong *)(local_258 + local_268 + -8);
                        puVar43 = (ulonglong *)(puVar38 + 3);
                        lVar26 = -(longlong)(int)local_2bc;
                        puVar18 = puVar43;
                        if (puVar43 <= puVar42 + -1) {
LAB_14f337540:
                          uVar28 = *(ulonglong *)(lVar26 + (longlong)puVar18) ^ *puVar18;
                          if (uVar28 == 0) goto code_r0x00014f33754d;
                          uVar49 = 0;
                          if (uVar28 != 0) {
                            for (; (uVar28 >> uVar49 & 1) == 0; uVar49 = uVar49 + 1) {
                            }
                          }
                          local_180 = (undefined4)uVar49;
                          iVar10 = ((int)((uVar49 & 0xffffffff) >> 3) - (int)puVar43) + (int)puVar18
                          ;
                          goto LAB_14f337578;
                        }
LAB_14f337556:
                        lVar50 = (longlong)puVar18 - (longlong)puVar43;
                        iVar10 = (int)lVar50;
                        for (; (puVar18 < puVar42 &&
                               (iVar10 = (int)lVar50,
                               (char)*puVar18 == *(char *)((longlong)puVar18 + lVar26)));
                            puVar18 = (ulonglong *)((longlong)puVar18 + 1)) {
                          lVar50 = lVar50 + 1;
                          iVar10 = (int)lVar50;
                        }
LAB_14f337578:
                        iVar35 = 0;
                        uVar39 = 0;
                        if (puVar38[2] == puVar38[(longlong)(int)~local_2bc + 3]) {
                          uVar39 = (puVar38[1] == puVar38[(longlong)(int)(-2 - local_2bc) + 3]) + 1;
                        }
                        iVar37 = 3 - uVar39;
                        iVar10 = uVar39 + iVar10;
                        if (1 < iVar10) {
                          iVar11 = iVar37;
                          do {
                            iVar36 = iVar11;
                            pbVar14 = puVar38 + -(longlong)(int)local_2bc;
                            uVar1 = *puVar38;
                            puVar38 = puVar38 + 1;
                            iVar35 = iVar35 + local_288->codecost_literal
                                              [(byte)(uVar1 - (*pbVar14 &
                                                              (byte)local_288->subliteralmask))];
                            iVar11 = iVar36 + -1;
                          } while (iVar11 != 0);
                          iVar35 = local_26c + iVar35;
                          iVar11 = iVar37;
                          if (2 < iVar37) {
                            iVar11 = iVar36 + 2;
                            iVar35 = iVar35 + *(int *)((longlong)local_288 +
                                                      (0x403 - (ulonglong)uVar39) * 4);
                          }
                          iVar36 = iVar10 + -0x11;
                          if (iVar36 < 0) {
                            iVar36 = local_288->codecost_packet[iVar11 + (iVar10 + -2) * 4];
                          }
                          else {
                            if (iVar36 < 0xff) {
                              iVar36 = local_288->codecost_offset2[(longlong)iVar10 + 0xef];
                            }
                            else {
                              iVar36 = cost_excess_huge(iVar36,local_288);
                            }
                            iVar36 = iVar36 + pnVar22->codecost_packet[(longlong)iVar11 + 0x3c];
                          }
                          uVar12 = local_298 + iVar10 + iVar37;
                          uVar39 = uVar12;
                          if ((int)uVar12 < (int)local_2c8) {
                            uVar39 = local_2c8;
                          }
                          puVar23 = local_290;
                          local_2c8 = uVar39;
                          if (iVar35 + iVar36 < local_2b8->costs[(int)uVar12]) {
                            local_2b8->costs[(int)uVar12] = iVar35 + iVar36;
                            pnVar24 = local_2b8->payloads + (int)uVar12;
                            pnVar24->ml = local_2c4;
                            pnVar24->lrl = uVar46;
                            (pnVar24->los).lasts[0] = uVar25;
                            (pnVar24->los).lasts[1] = (pnVar31->los).lasts[0];
                            (pnVar24->los).lasts[2] = (pnVar31->los).lasts[1];
                            (pnVar24->field3_0x14).twostep.lrl = (byte)iVar37;
                            (pnVar24->field3_0x14).is_twostep =
                                 (pnVar24->field3_0x14).is_twostep & 0xff;
                            (pnVar24->field3_0x14).is_twostep =
                                 (pnVar24->field3_0x14).is_twostep | iVar10 << 8;
                            pnVar24->prev_index = local_270;
                          }
                        }
                      }
                    }
                  }
                  uVar28 = (ulonglong)local_2c0;
                }
              }
            }
LAB_14f33771e:
            local_260 = local_260 + 1;
            param_16 = local_288;
            uVar46 = local_280;
          } while (local_260 < 4);
          if (local_24c <= (int)local_27c) {
LAB_14f337747:
            uVar25 = local_2b0 + local_27c;
            if (uVar25 == local_2c8) {
              uVar44 = (ulonglong)uVar25;
              param_11 = local_2b8;
              local_2c8 = uVar25;
              goto LAB_14f3377ba;
            }
            local_2b0 = uVar25 - 1;
            local_29c = 0;
            local_278 = uVar25;
          }
          uVar49 = (ulonglong)local_278;
          uVar44 = (ulonglong)local_2c8;
          local_2b0 = local_2b0 + 1;
          param_11 = local_2b8;
          uVar25 = local_278;
          if ((int)local_248 < (int)local_2c8) goto LAB_14f3377ba;
          uVar28 = (ulonglong)local_2c0;
          uVar13 = (ulonglong)local_2b0;
          param_16 = local_288;
        }
        uVar44 = (ulonglong)local_274;
        local_2c8 = local_274;
LAB_14f3377ba:
        uVar49 = (ulonglong)local_2ac;
      }
      uVar39 = (uint)uVar49;
      iVar35 = (int)uVar44;
      iVar10 = iVar35;
      if (local_208 <= iVar35) {
        uVar44 = 0xffffffff;
        local_2c8 = 0xffffffff;
        uVar46 = 0x7fffffff;
        uVar28 = (ulonglong)(uVar25 - 8);
        if ((int)(uVar25 - 8) <= (int)uVar39) {
          uVar28 = uVar49;
        }
        local_2a8 = 0x7fffffff;
        lVar26 = (longlong)(int)uVar28;
        if (lVar26 < local_268) {
          iVar10 = local_1d8 - (int)uVar28;
          lVar50 = lVar26 * 0x1c;
          piVar16 = param_11->costs + lVar26;
          lVar26 = local_268 - lVar26;
          do {
            uVar25 = (uint)uVar28;
            if (*piVar16 != 0x7fffffff) {
              iVar37 = 0;
              if (iVar10 != 0) {
                puVar23 = local_258 + (int)uVar25;
                iVar11 = iVar10;
                iVar37 = 0;
                do {
                  pbVar14 = puVar23 + -(longlong)
                                       *(int *)((longlong)(local_2b8->payloads->los).lasts + lVar50)
                  ;
                  uVar1 = *puVar23;
                  puVar23 = puVar23 + 1;
                  iVar37 = iVar37 + local_288->codecost_literal
                                    [(byte)(uVar1 - (*pbVar14 & (byte)local_288->subliteralmask))];
                  iVar11 = iVar11 + -1;
                } while (iVar11 != 0);
                uVar44 = (ulonglong)local_2c8;
                uVar46 = local_2a8;
              }
              uVar39 = *piVar16 + iVar37;
              if ((int)uVar39 < (int)uVar46) {
                uVar44 = uVar28;
                uVar46 = uVar39;
                local_2c8 = uVar25;
                local_2a8 = uVar39;
              }
            }
            uVar28 = (ulonglong)(uVar25 + 1);
            iVar10 = iVar10 + -1;
            piVar16 = piVar16 + 1;
            lVar50 = lVar50 + 0x1c;
            lVar26 = lVar26 + -1;
            uVar39 = local_2ac;
          } while (lVar26 != 0);
        }
        iVar10 = (int)uVar44;
        param_11 = local_2b8;
      }
      *(undefined8 *)&local_228->field_0x10 = 0;
      lVar26 = 0;
      pnVar24 = param_11->payloads;
      pnVar31 = pnVar24 + iVar10;
      pvVar40 = local_228;
      local_248 = iVar35;
      if ((uint)uVar44 != uVar39) {
        do {
          iVar10 = (int)uVar44;
          uVar25 = (pnVar31->field3_0x14).is_twostep;
          if (uVar25 != 0) {
            lVar26 = *(longlong *)&pvVar40->field_0x10;
            iVar10 = (iVar10 - (uVar25 >> 8)) - (uVar25 & 0xff);
            if ((*(ulonglong *)&pvVar40->field_0x8 < lVar26 + 1U) &&
               (iVar37 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h"
                                            ,0x3f,
                                            "oo2::vector_storage_a<struct oo2::newlz_encoder_parse>::needmakefit"
                                            ,"newsize <= m_capacity"), pvVar40 = local_228,
               iVar37 != 0)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            *(longlong *)&pvVar40->field_0x10 = *(longlong *)&pvVar40->field_0x10 + 1;
            uVar28 = *(ulonglong *)pvVar40;
            lVar50 = *(longlong *)&pvVar40->field_0x10;
            pauVar27 = (undefined1 (*) [16])(lVar26 * 0x10 + uVar28);
            if (pauVar27 != (undefined1 (*) [16])0x0) {
              *pauVar27 = ZEXT816(0);
              lVar50 = *(longlong *)&pvVar40->field_0x10;
              uVar28 = *(ulonglong *)pvVar40;
            }
            *(int *)((uVar28 - 0x10) + lVar50 * 0x10) = (pnVar31->los).lasts[0];
            *(undefined4 *)((uVar28 - 4) + lVar50 * 0x10) = 0;
            *(uint *)((uVar28 - 8) + lVar50 * 0x10) = (pnVar31->field3_0x14).is_twostep >> 8;
            *(uint *)((uVar28 - 0xc) + lVar50 * 0x10) = (uint)(pnVar31->field3_0x14).twostep.lrl;
            pnVar24 = param_11->payloads;
          }
          iVar11 = 0;
          iVar37 = pnVar31->prev_index;
          uVar25 = (iVar10 - pnVar31->lrl) - pnVar31->ml;
          uVar44 = (ulonglong)uVar25;
          iVar10 = (pnVar31->los).lasts[0];
          pnVar17 = pnVar24 + iVar37;
          if (iVar10 != pnVar24[iVar37].los.lasts[0]) {
            if (iVar10 == (pnVar17->los).lasts[1]) {
              iVar11 = -1;
            }
            else {
              iVar11 = iVar10;
              if (iVar10 == (pnVar17->los).lasts[2]) {
                iVar11 = -2;
              }
            }
          }
          lVar26 = *(longlong *)&pvVar40->field_0x10;
          if ((*(ulonglong *)&pvVar40->field_0x8 < lVar26 + 1U) &&
             (iVar10 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h"
                                          ,0x3f,
                                          "oo2::vector_storage_a<struct oo2::newlz_encoder_parse>::needmakefit"
                                          ,"newsize <= m_capacity"), pvVar40 = local_228,
             iVar10 != 0)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          *(longlong *)&pvVar40->field_0x10 = *(longlong *)&pvVar40->field_0x10 + 1;
          uVar28 = *(ulonglong *)pvVar40;
          lVar50 = *(longlong *)&pvVar40->field_0x10;
          pauVar27 = (undefined1 (*) [16])(lVar26 * 0x10 + uVar28);
          if (pauVar27 != (undefined1 (*) [16])0x0) {
            *pauVar27 = ZEXT816(0);
            lVar50 = *(longlong *)&pvVar40->field_0x10;
            uVar28 = *(ulonglong *)pvVar40;
          }
          *(int *)((uVar28 - 0x10) + lVar50 * 0x10) = (pnVar17->los).lasts[0];
          *(int *)((uVar28 - 0xc) + lVar50 * 0x10) = pnVar31->lrl;
          *(int *)((uVar28 - 8) + lVar50 * 0x10) = pnVar31->ml;
          *(int *)((uVar28 - 4) + lVar50 * 0x10) = iVar11;
          pnVar24 = local_2b8->payloads;
          pnVar31 = pnVar24 + iVar37;
          param_11 = local_2b8;
        } while (uVar25 != local_2ac);
        lVar26 = *(longlong *)&pvVar40->field_0x10;
        uVar39 = local_2ac;
      }
      pnVar34 = *(newlz_encoder_parse **)pvVar40;
      pnVar19 = pnVar34 + lVar26 + -1;
      if (pnVar34 < pnVar19) {
        do {
          iVar4 = pnVar19->lrl;
          iVar5 = pnVar19->ml;
          iVar6 = pnVar19->offset;
          iVar10 = pnVar34->lastoffset;
          iVar37 = pnVar34->lrl;
          iVar11 = pnVar34->ml;
          iVar36 = pnVar34->offset;
          pnVar34->lastoffset = pnVar19->lastoffset;
          pnVar34->lrl = iVar4;
          pnVar34->ml = iVar5;
          pnVar34->offset = iVar6;
          pnVar34 = pnVar34 + 1;
          pnVar19->lastoffset = iVar10;
          pnVar19->lrl = iVar37;
          pnVar19->ml = iVar11;
          pnVar19->offset = iVar36;
          pnVar19 = pnVar19 + -1;
        } while (pnVar34 < pnVar19);
        lVar26 = *(longlong *)&pvVar40->field_0x10;
        pnVar34 = *(newlz_encoder_parse **)pvVar40;
      }
      vector_base<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>::insert
                (local_140,(longlong)(local_140->m_size << 4) >> 4,pnVar34,pnVar34 + lVar26);
      pnVar8 = local_138;
      if (local_208 <= iVar35) {
        return;
      }
      optimal_update_passinfo(local_228,uVar39,local_138,local_258);
      param_16 = local_288;
      uVar25 = local_2c8;
      uVar28 = (ulonglong)local_2c0;
      if (local_1f8 <= (int)(local_2c8 - local_204)) {
        local_204 = local_2c8;
        optimal_passinfo_to_codecost(pnVar8,local_288,local_2c0);
      }
      local_2ac = uVar25;
    } while ((int)uVar25 < (int)local_274);
  }
  return;
code_r0x00014f33666d:
  puVar18 = puVar18 + 1;
  if (puVar42 + -1 < puVar18) goto LAB_14f336676;
  goto LAB_14f336660;
code_r0x00014f336b0d:
  puVar18 = puVar18 + 1;
  if (puVar42 + -1 < puVar18) goto LAB_14f336b16;
  goto LAB_14f336b00;
code_r0x00014f336ebf:
  puVar42 = puVar42 + 1;
  if (puVar43 + -1 < puVar42) goto LAB_14f336ec8;
  goto LAB_14f336eb6;
code_r0x00014f336f39:
  puVar42 = puVar42 + 1;
  if (puVar43 + -1 < puVar42) goto LAB_14f336f45;
  goto LAB_14f336f30;
code_r0x00014f33754d:
  puVar18 = puVar18 + 1;
  if (puVar42 + -1 < puVar18) goto LAB_14f337556;
  goto LAB_14f337540;
}

// newLZ_encode_chunk_optimal_parse_tll_core<2,oo2::NewLZParseCoreSSE2> @ 14f337ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

void __cdecl
oo2::newLZ_encode_chunk_optimal_parse_tll_core<2,oo2::NewLZParseCoreSSE2>
          (uchar *param_1,int param_2,int param_3,int param_4,int param_5,uchar *param_6,
          uint param_7,newLZ_MatchParseRecord *param_8,int param_9,int param_10,
          newlz_optimal_arrivals_tll *param_11,int param_12,int *param_13,newlz_vtable *param_14,
          newlz_passinfo *param_15,newlz_codecosts *param_16,
          vector_a<oo2::newlz_encoder_parse> *param_17,vector_a<oo2::newlz_encoder_parse> *param_18,
          OodleLZ_CompressOptions *param_19)

{
  newlz_optimal_arrival_tll *pnVar1;
  uchar uVar2;
  OodleLZ_CompressionLevel OVar3;
  code *pcVar4;
  undefined8 uVar5;
  newlz_optimal_arrival_tll_u_20 nVar6;
  int iVar7;
  newlz_passinfo *pnVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  newlz_optimal_arrival_tll *pnVar14;
  byte *pbVar15;
  byte bVar16;
  int iVar17;
  longlong lVar18;
  ulonglong *puVar19;
  newlz_encoder_parse *pnVar20;
  newlz_codecosts *pnVar21;
  uchar *puVar22;
  newlz_optimal_arrival_tll *pnVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  newlz_optimal_arrivals_tll *pnVar27;
  int *piVar28;
  undefined8 *puVar29;
  ulonglong uVar30;
  int *piVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  newlz_encoder_parse *pnVar35;
  ulonglong uVar36;
  int iVar37;
  longlong lVar38;
  uchar *puVar39;
  newLZ_MatchParseRecord *pnVar40;
  vector_a<oo2::newlz_encoder_parse> *pvVar41;
  longlong lVar42;
  ulonglong *puVar43;
  ulonglong *puVar44;
  uint uVar45;
  int *piVar46;
  longlong lVar47;
  bool bVar48;
  bool bVar49;
  undefined1 auStack_258 [32];
  uint local_238;
  int local_234;
  uint local_230;
  uint local_22c;
  newlz_optimal_arrivals_tll *local_228;
  int local_220;
  uchar *local_218;
  int local_210;
  int local_20c;
  uint local_208;
  ulonglong local_200;
  newlz_codecosts *local_1f8;
  int local_1f0;
  int local_1ec;
  uint local_1e8;
  int local_1e4;
  uint local_1e0;
  int local_1dc;
  int local_1d8;
  int local_1d4;
  newlz_optimal_arrival_tll *local_1d0;
  int *local_1c8;
  int local_1c0;
  int local_1bc;
  longlong local_1b8;
  uint local_1b0;
  uint local_1ac;
  int *local_1a8;
  longlong local_1a0;
  uchar *local_198;
  int local_190;
  int local_18c;
  int local_188;
  newlz_optimal_arrival_tll *local_180;
  int local_178;
  newLZ_MatchParseRecord *local_170;
  vector_a<oo2::newlz_encoder_parse> *local_168;
  int local_160;
  uint local_15c;
  int local_158;
  int local_154;
  longlong local_150;
  longlong local_148;
  int local_140;
  int local_13c;
  uint local_138;
  int local_134;
  undefined4 local_130;
  undefined4 local_12c;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  newLZ_MatchParseRecord *local_108;
  longlong local_100;
  vector_base<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_> *local_f8;
  newlz_passinfo *local_f0;
  int aiStack_e8 [10];
  int aiStack_c0 [10];
  uint auStack_98 [10];
  uint auStack_70 [10];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_258;
  local_1dc = param_2 + -0x10;
  local_180 = (newlz_optimal_arrival_tll *)(longlong)param_12;
  local_108 = param_8;
  local_f0 = param_15;
  local_100 = (longlong)param_9;
  local_168 = param_18;
  OVar3 = param_14->level;
  local_1f8 = param_16;
  local_228 = param_11;
  local_20c = param_9;
  local_18c = param_12;
  local_1c8 = param_13;
  local_f8 = (vector_base<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>
              *)param_17;
  if ((int)OVar3 < 8) {
    local_160 = 0;
    local_238 = 1 << ((byte)OVar3 & 0x1f);
    local_15c = 0;
    if ((int)local_238 < 4) goto LAB_14f337c9d;
  }
  else {
    local_238 = 0x100;
  }
  local_15c = local_238 - 3;
  local_160 = 3;
LAB_14f337c9d:
  iVar9 = param_9 + 1;
  local_134 = 0;
  if (iVar9 < (int)local_238) {
    local_134 = iVar9;
  }
  local_158 = param_2 + -0x15;
  *(undefined8 *)&param_17->field_0x10 = 0;
  local_138 = local_238 - iVar9;
  if ((int)local_238 <= iVar9) {
    local_138 = 0;
  }
  local_13c = 0x400;
  if (5 < (int)OVar3) {
    local_13c = 1;
  }
  local_218 = param_1;
  local_1d4 = param_2;
  local_154 = param_3;
  local_140 = param_4;
  if (param_3 < local_1dc) {
    do {
      lVar42 = (longlong)param_3;
      iVar9 = local_1dc;
      if (param_3 + local_140 < local_1dc) {
        iVar9 = param_3 + local_140;
      }
      lVar47 = lVar42 + 1;
      iVar26 = local_1dc;
      if (param_3 + param_5 < local_1dc) {
        iVar26 = param_3 + param_5;
      }
      local_188 = local_1dc;
      if (iVar26 < local_1dc + -0x10) {
        local_188 = iVar26;
      }
      local_234 = local_1dc;
      if (iVar9 < local_1dc + -0x10) {
        local_234 = iVar9;
      }
      local_228->costs[lVar47 * 2] = 0x7fffffff;
      local_228->costs[lVar47 * 2 + 1] = 0x7fffffff;
      local_228->costs[lVar42 * 2 + 1] = 0x7fffffff;
      iVar9 = param_3;
      local_220 = param_3;
      iVar26 = param_3;
      if (2 < local_234 - param_3) {
        pnVar14 = local_228->payloads;
        lVar38 = lVar47 * 2 + 1;
        lVar18 = lVar47 * 2 + -2;
        iVar9 = pnVar14[lVar18].prev_index;
        uVar5 = *(undefined8 *)(pnVar14[lVar18].los.lasts + 2);
        iVar26 = pnVar14[lVar18].lrl;
        nVar6 = pnVar14[lVar18].field3_0x14;
        *(undefined8 *)pnVar14[lVar38].los.lasts = *(undefined8 *)pnVar14[lVar18].los.lasts;
        *(undefined8 *)(pnVar14[lVar38].los.lasts + 2) = uVar5;
        pnVar14[lVar38].lrl = iVar26;
        pnVar14[lVar38].field3_0x14 = nVar6;
        pnVar14[lVar38].prev_index = iVar9;
        local_228->costs[lVar38] =
             param_16->codecost_literal
             [(byte)(param_1[lVar42] -
                    (param_1[(lVar47 - local_228->payloads[lVar42 * 2].los.lasts[0]) + -1] &
                    (byte)param_16->subliteralmask))] + local_228->costs[lVar18];
        local_1c8[local_18c + param_3] = local_18c;
        iVar9 = local_234;
        local_210 = param_3;
        iVar26 = local_1dc;
        if (local_234 <= local_188) {
LAB_14f337e17:
          iVar9 = local_1dc;
          local_210 = param_3;
          iVar26 = local_1dc;
          if (param_3 != local_1dc) {
            pnVar14 = local_228->payloads;
            local_1ec = param_3 * 2;
            lVar42 = (longlong)param_3;
            lVar47 = (longlong)local_1ec;
            local_198 = param_1 + lVar42;
            local_1ac = *(uint *)(param_1 + lVar42);
            piVar46 = local_228->costs + lVar47;
            local_1b8 = lVar42;
            local_1a8 = piVar46;
            if (local_234 <= param_3) {
              iVar12 = *piVar46;
              iVar24 = 0x7fffffff;
              iVar9 = 0;
              if ((iVar12 < 0x7fffffff) &&
                 (iVar24 = iVar12, iVar9 = param_3, local_180 == (newlz_optimal_arrival_tll *)0x0))
              {
                iVar9 = param_3 - local_1c8[lVar42];
              }
              if (piVar46[1] < iVar24) {
                if (local_18c == 1) {
                  iVar9 = param_3 - local_1c8[lVar42];
                }
                else {
                  iVar9 = param_3 + -1;
                }
              }
              if (local_234 <= iVar9) goto LAB_14f33935e;
            }
            if (piVar46[(longlong)local_180] != 0x7fffffff) {
              pnVar23 = pnVar14 + (longlong)(local_180->los).lasts + lVar47;
              iVar9 = param_16->codecost_literal
                      [(byte)(param_1[lVar42] -
                             (param_1[lVar42 - (pnVar23->los).lasts[0]] &
                             (byte)param_16->subliteralmask))] + piVar46[(longlong)local_180];
              if (iVar9 < piVar46[(longlong)((longlong)(local_180->los).lasts + 2)]) {
                iVar26 = (pnVar23->los).lasts[1];
                iVar12 = (pnVar23->los).lasts[2];
                iVar24 = pnVar23->ml;
                lVar47 = (longlong)(local_180->los).lasts + lVar47 + 2;
                pnVar1 = pnVar14 + lVar47;
                (pnVar1->los).lasts[0] = (pnVar23->los).lasts[0];
                (pnVar1->los).lasts[1] = iVar26;
                (pnVar1->los).lasts[2] = iVar12;
                pnVar1->ml = iVar24;
                nVar6 = pnVar23->field3_0x14;
                pnVar14[lVar47].lrl = pnVar23->lrl;
                pnVar14[lVar47].field3_0x14 = nVar6;
                pnVar14[lVar47].prev_index = pnVar23->prev_index;
                piVar46[(longlong)((longlong)(local_180->los).lasts + 2)] = iVar9;
                local_1c8[lVar42 + 1] = local_1c8[lVar42] + 1;
              }
            }
            local_1f0 = 0x7fffffff;
            local_170 = local_108 + lVar42;
            pnVar14 = (newlz_optimal_arrival_tll *)0x0;
            local_1e0 = 0;
            local_1a0 = 0;
            pnVar27 = local_228;
            local_1d0 = pnVar14;
            piVar31 = local_1c8;
            iVar9 = local_1ec;
            do {
              local_1e8 = (uint)pnVar14;
              if ((int)local_1e8 < 2) {
                iVar12 = piVar46[(longlong)local_1d0];
                local_1d8 = iVar12;
                if (iVar12 != 0x7fffffff) {
                  local_22c = local_1e8;
                  if (local_1d0 == local_180) {
                    local_22c = piVar31[lVar42];
                    pnVar14 = (newlz_optimal_arrival_tll *)(ulonglong)local_22c;
                  }
                  uVar45 = local_1e8 + iVar9;
                  lVar47 = (longlong)(local_1d0->los).lasts + lVar42 * 2;
LAB_14f33807b:
                  uVar13 = 0;
                  uVar36 = (ulonglong)local_238;
                  iVar9 = (int)pnVar14;
                  local_230 = uVar45;
                  local_1d8 = iVar12;
                  local_190 = iVar9;
                  if (2 < iVar9) {
                    local_190 = 3;
                    if (iVar9 + -3 < 0xff) {
                      local_1d8 = param_16->codecost_offset2[(longlong)iVar9 + 0xfd];
                    }
                    else {
                      local_1d8 = cost_excess_huge(iVar9 + -3,param_16);
                    }
                    local_1d8 = iVar12 + local_1d8;
                  }
                  local_200 = uVar13;
                  local_148 = (longlong)local_190;
                  local_208 = (uint)local_200;
                  uVar30 = local_200 & 0xffffffff;
                  pnVar23 = pnVar27->payloads + lVar47;
                  uVar13 = local_200 & 0xffffffff;
                  puVar22 = local_198;
                  do {
                    uVar34 = (uint)uVar13;
                    uVar32 = (pnVar23->los).lasts[local_200];
                    lVar42 = (longlong)(int)uVar32;
                    uVar10 = *(uint *)(puVar22 + -lVar42);
                    local_150 = lVar42;
                    if ((short)local_1ac == (short)uVar10) {
                      uVar10 = uVar10 ^ local_1ac;
                      if (uVar10 == 0) {
                        puVar44 = (ulonglong *)(puVar22 + 4);
                        lVar47 = (longlong)(puVar22 + -lVar42) + (4 - (longlong)puVar44);
                        puVar43 = (ulonglong *)(local_218 + (longlong)local_1d4 + -8);
                        puVar19 = puVar44;
                        if (puVar44 <= puVar43 + -1) {
LAB_14f338150:
                          uVar13 = *(ulonglong *)(lVar47 + (longlong)puVar19) ^ *puVar19;
                          if (uVar13 == 0) goto code_r0x00014f33815d;
                          uVar36 = 0;
                          if (uVar13 != 0) {
                            for (; (uVar13 >> uVar36 & 1) == 0; uVar36 = uVar36 + 1) {
                            }
                          }
                          local_110 = (undefined4)uVar36;
                          iVar9 = ((int)((uVar36 & 0xffffffff) >> 3) - (int)puVar44) + (int)puVar19;
                          goto LAB_14f338185;
                        }
LAB_14f338166:
                        lVar18 = (longlong)puVar19 - (longlong)puVar44;
                        iVar9 = (int)lVar18;
                        for (; (puVar19 < puVar43 &&
                               (iVar9 = (int)lVar18,
                               (char)*puVar19 == *(char *)((longlong)puVar19 + lVar47)));
                            puVar19 = (ulonglong *)((longlong)puVar19 + 1)) {
                          lVar18 = lVar18 + 1;
                          iVar9 = (int)lVar18;
                        }
LAB_14f338185:
                        uVar36 = (ulonglong)local_238;
                        uVar10 = iVar9 + 4;
                      }
                      else {
                        uVar10 = 3 - ((uVar10 & 0xffffff) != 0);
                      }
                      uVar33 = (uint)uVar36;
                      if ((int)uVar30 < (int)uVar10) {
                        iVar9 = uVar10 - 0x11;
                        iVar26 = local_210 + uVar10;
                        local_1e4 = iVar26;
                        if (iVar26 < local_234) {
                          local_1e4 = local_234;
                        }
                        local_234 = local_1e4;
                        local_1bc = iVar26;
                        local_1b0 = uVar10;
                        if (iVar9 < 0) {
                          local_178 = param_16->codecost_packet
                                      [(int)(local_190 + -8 + (uVar34 * 0x10 + uVar10) * 4)];
                        }
                        else {
                          lVar47 = local_200 * 0x40 + local_148;
                          if (iVar9 < 0xff) {
                            local_178 = param_16->codecost_offset2[(longlong)(int)uVar10 + 0xef];
                          }
                          else {
                            local_178 = cost_excess_huge(iVar9,param_16);
                          }
                          local_178 = local_178 + param_16->codecost_packet[lVar47 + 0x3c];
                        }
                        uVar45 = local_208;
                        local_178 = local_1d8 + local_178;
                        iVar9 = iVar26 * 2;
                        if (local_178 < local_228->costs[iVar9]) {
                          local_228->costs[iVar9] = local_178;
                          pnVar14 = local_228->payloads + iVar9;
                          piVar46 = (pnVar23->los).lasts + 2;
                          pnVar14->ml = uVar10;
                          pnVar14->lrl = local_22c;
                          if (uVar34 == 0) {
                            (pnVar14->los).lasts[0] = (pnVar23->los).lasts[0];
                            iVar9 = (pnVar23->los).lasts[1];
                          }
                          else {
                            if (uVar34 == 1) {
                              iVar9 = (pnVar23->los).lasts[1];
                            }
                            else {
                              iVar9 = *piVar46;
                              piVar46 = (pnVar23->los).lasts + 1;
                            }
                            (pnVar14->los).lasts[0] = iVar9;
                            iVar9 = (pnVar23->los).lasts[0];
                          }
                          (pnVar14->los).lasts[1] = iVar9;
                          (pnVar14->los).lasts[2] = *piVar46;
                          pnVar14->prev_index = local_230;
                          (pnVar14->field3_0x14).is_twostep = 0;
                        }
                        lVar18 = local_1b8 + (int)uVar10;
                        lVar47 = (lVar18 + 1) * 2 + 1;
                        iVar9 = param_16->codecost_literal
                                [(byte)(local_218[lVar18] -
                                       (local_218[((lVar18 + 1) -
                                                  (longlong)(pnVar23->los).lasts[local_200]) + -1] &
                                       (byte)param_16->subliteralmask))] + local_178;
                        if (iVar9 < local_228->costs[lVar47]) {
                          local_228->costs[lVar47] = iVar9;
                          piVar46 = (pnVar23->los).lasts + 2;
                          pnVar14 = local_228->payloads + lVar47;
                          pnVar14->ml = uVar10;
                          pnVar14->lrl = local_22c;
                          if (uVar34 == 0) {
                            (pnVar14->los).lasts[0] = (pnVar23->los).lasts[0];
                            iVar9 = (pnVar23->los).lasts[1];
                          }
                          else {
                            if (uVar34 == 1) {
                              iVar9 = (pnVar23->los).lasts[1];
                            }
                            else {
                              iVar9 = *piVar46;
                              piVar46 = (pnVar23->los).lasts + 1;
                            }
                            (pnVar14->los).lasts[0] = iVar9;
                            iVar9 = (pnVar23->los).lasts[0];
                          }
                          (pnVar14->los).lasts[1] = iVar9;
                          (pnVar14->los).lasts[2] = *piVar46;
                          (pnVar14->field3_0x14).is_twostep = 0;
                          pnVar14->prev_index = local_230;
                          local_1c8[lVar18 + 1] = 1;
                        }
                        uVar36 = (ulonglong)uVar33;
                        uVar25 = uVar34;
                        local_238 = uVar33;
                        if (uVar10 - local_160 < local_15c) {
                          lVar42 = 2;
                          iVar9 = 2;
                          if (2 < (int)uVar10) {
                            lVar47 = -2;
                            piVar46 = param_16->codecost_offset2 + 0xf1;
                            do {
                              iVar26 = iVar9 + -0x11;
                              local_238 = (uint)uVar36;
                              uVar32 = local_230;
                              if (iVar26 < 0) {
                                iVar26 = param_16->codecost_literal
                                         [local_148 + (local_200 * 0x10 + lVar42) * 4 + 0xf8];
                              }
                              else {
                                lVar18 = local_200 * 0x40 + local_148;
                                if (iVar26 < 0xff) {
                                  iVar26 = *piVar46;
                                }
                                else {
                                  iVar26 = cost_excess_huge(iVar26,param_16);
                                }
                                iVar26 = param_16->codecost_packet[lVar18 + 0x3c] + iVar26;
                              }
                              iVar26 = local_1d8 + iVar26;
                              lVar18 = local_1b8 + lVar42;
                              if (iVar26 < local_228->costs[lVar18 * 2]) {
                                local_228->costs[lVar18 * 2] = iVar26;
                                pnVar14 = local_228->payloads + lVar18 * 2;
                                piVar31 = (pnVar23->los).lasts + 2;
                                pnVar14->ml = iVar9;
                                pnVar14->lrl = local_22c;
                                if (uVar45 == 0) {
                                  (pnVar14->los).lasts[0] = (pnVar23->los).lasts[0];
                                  iVar12 = (pnVar23->los).lasts[1];
                                }
                                else {
                                  if (uVar45 == 1) {
                                    iVar12 = (pnVar23->los).lasts[1];
                                  }
                                  else {
                                    iVar12 = *piVar31;
                                    piVar31 = (pnVar23->los).lasts + 1;
                                  }
                                  (pnVar14->los).lasts[0] = iVar12;
                                  iVar12 = (pnVar23->los).lasts[0];
                                }
                                (pnVar14->los).lasts[1] = iVar12;
                                (pnVar14->los).lasts[2] = *piVar31;
                                (pnVar14->field3_0x14).is_twostep = 0;
                                pnVar14->prev_index = uVar32;
                              }
                              lVar42 = lVar42 + 1;
                              lVar38 = local_1b8 + lVar42;
                              lVar18 = lVar42 + lVar38 * 2 + lVar47;
                              iVar26 = param_16->codecost_literal
                                       [(byte)(local_218[lVar38 + -1] -
                                              (local_218[lVar38 + (-1 - (longlong)
                                                                        (pnVar23->los).lasts
                                                                        [local_200])] &
                                              (byte)param_16->subliteralmask))] + iVar26;
                              uVar36 = (ulonglong)local_238;
                              if (iVar26 < local_228->costs[lVar18]) {
                                local_228->costs[lVar18] = iVar26;
                                pnVar14 = local_228->payloads + lVar18;
                                piVar31 = (pnVar23->los).lasts + 2;
                                pnVar14->ml = iVar9;
                                pnVar14->lrl = local_22c;
                                if (uVar45 == 0) {
                                  (pnVar14->los).lasts[0] = (pnVar23->los).lasts[0];
                                  iVar26 = (pnVar23->los).lasts[1];
                                }
                                else {
                                  if (uVar45 == 1) {
                                    iVar26 = (pnVar23->los).lasts[1];
                                  }
                                  else {
                                    iVar26 = *piVar31;
                                    piVar31 = (pnVar23->los).lasts + 1;
                                  }
                                  (pnVar14->los).lasts[0] = iVar26;
                                  iVar26 = (pnVar23->los).lasts[0];
                                }
                                (pnVar14->los).lasts[1] = iVar26;
                                (pnVar14->los).lasts[2] = *piVar31;
                                pnVar14->prev_index = local_230;
                                (pnVar14->field3_0x14).is_twostep = 0;
                                local_1c8[lVar38] = 1;
                              }
                              iVar9 = iVar9 + 1;
                              piVar46 = piVar46 + 1;
                              lVar47 = lVar47 + -1;
                              iVar26 = local_1bc;
                              uVar25 = local_208;
                            } while (iVar9 < (int)uVar10);
                          }
                          uVar32 = (uint)local_150;
                          lVar42 = local_150;
                        }
                        uVar34 = local_208;
                        if (iVar26 < local_158) {
                          puVar22 = local_218 + iVar26;
                          puVar44 = (ulonglong *)(puVar22 + 3);
                          puVar43 = (ulonglong *)(local_218 + (longlong)local_1d4 + -8);
                          puVar19 = puVar44;
                          if (puVar44 <= puVar43 + -1) {
LAB_14f3385c0:
                            uVar13 = *(ulonglong *)(-lVar42 + (longlong)puVar19) ^ *puVar19;
                            if (uVar13 == 0) goto code_r0x00014f3385cd;
                            uVar36 = 0;
                            if (uVar13 != 0) {
                              for (; (uVar13 >> uVar36 & 1) == 0; uVar36 = uVar36 + 1) {
                              }
                            }
                            local_114 = (undefined4)uVar36;
                            iVar9 = ((int)((uVar36 & 0xffffffff) >> 3) - (int)puVar44) +
                                    (int)puVar19;
                            goto LAB_14f3385f8;
                          }
LAB_14f3385d6:
                          lVar47 = (longlong)puVar19 - (longlong)puVar44;
                          iVar9 = (int)lVar47;
                          for (; (puVar19 < puVar43 &&
                                 (iVar9 = (int)lVar47,
                                 (char)*puVar19 == *(char *)(-lVar42 + (longlong)puVar19)));
                              puVar19 = (ulonglong *)((longlong)puVar19 + 1)) {
                            lVar47 = lVar47 + 1;
                            iVar9 = (int)lVar47;
                          }
LAB_14f3385f8:
                          uVar33 = 0;
                          uVar45 = uVar33;
                          if (puVar22[2] == puVar22[(longlong)(int)~uVar32 + 3]) {
                            uVar45 = (puVar22[1] == puVar22[(longlong)(int)(-2 - uVar32) + 3]) + 1;
                          }
                          local_234 = local_1e4;
                          iVar26 = 3 - uVar45;
                          iVar9 = uVar45 + iVar9;
                          if (1 < iVar9) {
                            iVar12 = iVar26;
                            do {
                              iVar24 = iVar12;
                              pbVar15 = puVar22 + -local_150;
                              uVar2 = *puVar22;
                              puVar22 = puVar22 + 1;
                              uVar33 = uVar33 + param_16->codecost_literal
                                                [(byte)(uVar2 - (*pbVar15 &
                                                                (byte)param_16->subliteralmask))];
                              iVar12 = iVar24 + -1;
                            } while (iVar12 != 0);
                            iVar12 = local_178 + uVar33;
                            iVar37 = iVar26;
                            if (2 < iVar26) {
                              iVar37 = iVar24 + 2;
                              iVar12 = iVar12 + *(int *)((longlong)param_16 +
                                                        (0x403 - (ulonglong)uVar45) * 4);
                            }
                            iVar24 = iVar9 + -0x11;
                            if (iVar24 < 0) {
                              iVar24 = param_16->codecost_packet[iVar37 + (iVar9 + -2) * 4];
                            }
                            else {
                              if (iVar24 < 0xff) {
                                iVar24 = param_16->codecost_offset2[(longlong)iVar9 + 0xef];
                              }
                              else {
                                iVar24 = cost_excess_huge(iVar24,param_16);
                              }
                              iVar24 = iVar24 + param_16->codecost_packet[(longlong)iVar37 + 0x3c];
                            }
                            iVar37 = iVar26 + iVar9 + local_1bc;
                            local_234 = iVar37;
                            if (iVar37 < local_1e4) {
                              local_234 = local_1e4;
                            }
                            iVar37 = iVar37 * 2;
                            uVar25 = uVar34;
                            if (iVar12 + iVar24 < local_228->costs[iVar37]) {
                              local_228->costs[iVar37] = iVar12 + iVar24;
                              pnVar14 = local_228->payloads + iVar37;
                              piVar46 = (pnVar23->los).lasts + 2;
                              pnVar14->ml = uVar10;
                              pnVar14->lrl = local_22c;
                              if (uVar34 == 0) {
                                (pnVar14->los).lasts[0] = (pnVar23->los).lasts[0];
                                iVar12 = (pnVar23->los).lasts[1];
                              }
                              else {
                                if (uVar34 == 1) {
                                  iVar12 = (pnVar23->los).lasts[1];
                                }
                                else {
                                  iVar12 = *piVar46;
                                  piVar46 = (pnVar23->los).lasts + 1;
                                }
                                (pnVar14->los).lasts[0] = iVar12;
                                iVar12 = (pnVar23->los).lasts[0];
                              }
                              uVar36 = (ulonglong)local_238;
                              (pnVar14->los).lasts[1] = iVar12;
                              (pnVar14->los).lasts[2] = *piVar46;
                              (pnVar14->field3_0x14).twostep.lrl = (byte)iVar26;
                              (pnVar14->field3_0x14).is_twostep =
                                   (pnVar14->field3_0x14).is_twostep & 0xff;
                              uVar30 = (ulonglong)local_1b0;
                              (pnVar14->field3_0x14).is_twostep =
                                   (pnVar14->field3_0x14).is_twostep | iVar9 << 8;
                              pnVar14->prev_index = local_230;
                              uVar45 = local_230;
                              goto LAB_14f3387c6;
                            }
                          }
                          uVar36 = (ulonglong)local_238;
                        }
                        uVar34 = uVar25;
                        uVar30 = (ulonglong)local_1b0;
                        uVar45 = local_230;
                      }
LAB_14f3387c6:
                      pnVar14 = (newlz_optimal_arrival_tll *)(ulonglong)local_22c;
                      puVar22 = local_198;
                    }
                    uVar32 = (uint)uVar30;
                    local_208 = uVar34 + 1;
                    uVar13 = (ulonglong)local_208;
                    local_200 = local_200 + 1;
                  } while ((int)local_208 < 3);
                  if ((int)local_1e0 < (int)uVar32) {
                    local_1e0 = uVar32;
                  }
                  if ((int)uVar36 <= (int)local_1e0) goto LAB_14f339261;
                  lVar42 = local_1b8;
                  pnVar27 = local_228;
                  piVar46 = local_1a8;
                  piVar31 = local_1c8;
                  param_3 = local_210;
                  iVar9 = local_1ec;
                  if (local_1d8 < local_1f0) {
                    local_1f0 = local_1d8;
                    aiStack_c0[local_1a0] = (int)pnVar14;
                    aiStack_e8[local_1a0] = local_1d8;
                    auStack_98[local_1a0] = uVar45;
                    auStack_70[local_1a0] = uVar32;
                    local_1a0 = local_1a0 + 1;
                  }
                }
              }
              else {
                if (param_10 < (int)local_1e8) goto LAB_14f33886f;
                local_22c = local_1e8 - 1;
                pnVar14 = (newlz_optimal_arrival_tll *)(ulonglong)local_22c;
                iVar26 = param_3 - local_22c;
                if (iVar26 < local_220) goto LAB_14f33886f;
                uVar45 = iVar26 * 2;
                lVar47 = (lVar42 - (longlong)local_1d0) * 2 + 2;
                lVar42 = local_1b8;
                piVar46 = local_1a8;
                piVar31 = local_1c8;
                local_230 = uVar45;
                if (pnVar27->costs[lVar47] != 0x7fffffff) {
                  iVar12 = 0;
                  puVar22 = local_218 + iVar26;
                  pnVar23 = pnVar14;
                  do {
                    pbVar15 = puVar22 + -(longlong)pnVar27->payloads[lVar47].los.lasts[0];
                    uVar2 = *puVar22;
                    puVar22 = puVar22 + 1;
                    iVar12 = iVar12 + param_16->codecost_literal
                                      [(byte)(uVar2 - (*pbVar15 & (byte)param_16->subliteralmask))];
                    uVar32 = (int)pnVar23 - 1;
                    pnVar23 = (newlz_optimal_arrival_tll *)(ulonglong)uVar32;
                  } while (uVar32 != 0);
                  iVar12 = iVar12 + pnVar27->costs[lVar47];
                  goto LAB_14f33807b;
                }
              }
              pnVar14 = (newlz_optimal_arrival_tll *)(ulonglong)(local_1e8 + 1);
              local_1d0 = (newlz_optimal_arrival_tll *)((longlong)(local_1d0->los).lasts + 1);
            } while( true );
          }
        }
      }
LAB_14f33935e:
      local_1dc = iVar26;
      local_234 = iVar9;
      local_188 = local_234;
      local_1e8 = local_1dc + -2;
      iVar9 = local_234 * 2;
      local_1f0 = iVar9;
      if ((int)local_1e8 <= local_234) {
        local_1ec = 0x7fffffff;
        local_1e4 = local_234 + -8;
        if (local_234 + -8 <= local_220) {
          local_1e4 = local_220;
        }
        lVar42 = (longlong)local_1e4;
        if (lVar42 < local_1d4) {
          local_1bc = local_1e4 * 2;
          local_1d0 = (newlz_optimal_arrival_tll *)(local_1c8 + lVar42);
          local_1c0 = local_1d4 - local_1e4;
          lVar47 = lVar42 * 0x38;
          piVar46 = local_228->costs + lVar42 * 2;
          local_1a8 = (int *)(local_1d4 - lVar42);
          do {
            pnVar14 = (newlz_optimal_arrival_tll *)0x0;
            iVar26 = 0;
            do {
              if (*piVar46 != 0x7fffffff) {
                iVar12 = iVar26;
                if (pnVar14 == local_180) {
                  iVar12 = (local_1d0->los).lasts[0];
                }
                if (local_220 <= local_1e4 - iVar12) {
                  if (local_1c0 == 0) {
                    iVar24 = 0;
                  }
                  else {
                    iVar24 = 0;
                    puVar22 = local_218 + local_1e4;
                    iVar9 = local_1c0;
                    do {
                      pbVar15 = puVar22 + -(longlong)
                                           *(int *)((longlong)(local_228->payloads->los).lasts +
                                                   lVar47);
                      uVar2 = *puVar22;
                      puVar22 = puVar22 + 1;
                      iVar24 = iVar24 + local_1f8->codecost_literal
                                        [(byte)(uVar2 - (*pbVar15 & (byte)local_1f8->subliteralmask)
                                               )];
                      iVar9 = iVar9 + -1;
                    } while (iVar9 != 0);
                  }
                  iVar24 = *piVar46 + iVar24;
                  iVar9 = local_1f0;
                  if (iVar24 < local_1ec) {
                    local_1f0 = local_1bc + iVar26;
                    local_234 = local_1e4 - iVar12;
                    local_1ec = iVar24;
                    iVar9 = local_1f0;
                  }
                }
              }
              iVar26 = iVar26 + 1;
              pnVar14 = (newlz_optimal_arrival_tll *)((longlong)(pnVar14->los).lasts + 1);
              piVar46 = piVar46 + 1;
              lVar47 = lVar47 + 0x1c;
            } while (iVar26 < 2);
            local_1e4 = local_1e4 + 1;
            local_1bc = local_1bc + 2;
            local_1c0 = local_1c0 + -1;
            local_1d0 = (newlz_optimal_arrival_tll *)((local_1d0->los).lasts + 1);
            local_1a8 = (int *)((longlong)local_1a8 + -1);
          } while (local_1a8 != (int *)0x0);
        }
      }
      lVar42 = 0;
      *(undefined8 *)&local_168->field_0x10 = 0;
      pnVar23 = local_228->payloads;
      pnVar14 = pnVar23 + iVar9;
      pnVar27 = local_228;
      pvVar41 = local_168;
      iVar9 = local_234;
      if (local_234 != local_220) {
        do {
          uVar45 = (pnVar14->field3_0x14).is_twostep;
          iVar26 = 0;
          if (uVar45 != 0) {
            lVar42 = *(longlong *)&pvVar41->field_0x10;
            iVar9 = (iVar9 - (uVar45 >> 8)) - (uVar45 & 0xff);
            if ((*(ulonglong *)&pvVar41->field_0x8 < lVar42 + 1U) &&
               (iVar12 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h"
                                            ,0x3f,
                                            "oo2::vector_storage_a<struct oo2::newlz_encoder_parse>::needmakefit"
                                            ,"newsize <= m_capacity"), pnVar27 = local_228,
               pvVar41 = local_168, iVar12 != 0)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            *(longlong *)&pvVar41->field_0x10 = *(longlong *)&pvVar41->field_0x10 + 1;
            uVar13 = *(ulonglong *)pvVar41;
            lVar47 = *(longlong *)&pvVar41->field_0x10;
            puVar29 = (undefined8 *)(lVar42 * 0x10 + uVar13);
            if (puVar29 != (undefined8 *)0x0) {
              *puVar29 = 0;
              puVar29[1] = 0;
              lVar47 = *(longlong *)&pvVar41->field_0x10;
              uVar13 = *(ulonglong *)pvVar41;
            }
            *(int *)((uVar13 - 0x10) + lVar47 * 0x10) = (pnVar14->los).lasts[0];
            *(undefined4 *)((uVar13 - 4) + lVar47 * 0x10) = 0;
            *(uint *)((uVar13 - 8) + lVar47 * 0x10) = (pnVar14->field3_0x14).is_twostep >> 8;
            *(uint *)((uVar13 - 0xc) + lVar47 * 0x10) = (uint)(pnVar14->field3_0x14).twostep.lrl;
            pnVar23 = pnVar27->payloads;
          }
          iVar12 = pnVar14->prev_index;
          iVar9 = (iVar9 - pnVar14->lrl) - pnVar14->ml;
          iVar24 = (pnVar14->los).lasts[0];
          pnVar1 = pnVar23 + iVar12;
          if (iVar24 != pnVar23[iVar12].los.lasts[0]) {
            if (iVar24 == (pnVar1->los).lasts[1]) {
              iVar26 = -1;
            }
            else {
              iVar26 = iVar24;
              if (iVar24 == (pnVar1->los).lasts[2]) {
                iVar26 = -2;
              }
            }
          }
          lVar42 = *(longlong *)&pvVar41->field_0x10;
          if ((*(ulonglong *)&pvVar41->field_0x8 < lVar42 + 1U) &&
             (iVar24 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h"
                                          ,0x3f,
                                          "oo2::vector_storage_a<struct oo2::newlz_encoder_parse>::needmakefit"
                                          ,"newsize <= m_capacity"), pnVar27 = local_228,
             pvVar41 = local_168, iVar24 != 0)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          *(longlong *)&pvVar41->field_0x10 = *(longlong *)&pvVar41->field_0x10 + 1;
          uVar13 = *(ulonglong *)pvVar41;
          lVar47 = *(longlong *)&pvVar41->field_0x10;
          puVar29 = (undefined8 *)(lVar42 * 0x10 + uVar13);
          if (puVar29 != (undefined8 *)0x0) {
            *puVar29 = 0;
            puVar29[1] = 0;
            lVar47 = *(longlong *)&pvVar41->field_0x10;
            uVar13 = *(ulonglong *)pvVar41;
          }
          *(int *)((uVar13 - 0x10) + lVar47 * 0x10) = (pnVar1->los).lasts[0];
          *(int *)((uVar13 - 0xc) + lVar47 * 0x10) = pnVar14->lrl;
          *(int *)((uVar13 - 8) + lVar47 * 0x10) = pnVar14->ml;
          *(int *)((uVar13 - 4) + lVar47 * 0x10) = iVar26;
          pnVar23 = pnVar27->payloads;
          pnVar14 = pnVar23 + iVar12;
        } while (iVar9 != local_220);
        lVar42 = *(longlong *)&pvVar41->field_0x10;
      }
      uVar45 = local_1e8;
      iVar9 = local_220;
      param_3 = local_234;
      pnVar35 = *(newlz_encoder_parse **)pvVar41;
      pnVar20 = pnVar35 + lVar42 + -1;
      if (pnVar35 < pnVar20) {
        do {
          iVar26 = pnVar20->lrl;
          iVar12 = pnVar20->ml;
          iVar24 = pnVar20->offset;
          iVar37 = pnVar35->lastoffset;
          iVar17 = pnVar35->lrl;
          iVar11 = pnVar35->ml;
          iVar7 = pnVar35->offset;
          pnVar35->lastoffset = pnVar20->lastoffset;
          pnVar35->lrl = iVar26;
          pnVar35->ml = iVar12;
          pnVar35->offset = iVar24;
          pnVar35 = pnVar35 + 1;
          pnVar20->lastoffset = iVar37;
          pnVar20->lrl = iVar17;
          pnVar20->ml = iVar11;
          pnVar20->offset = iVar7;
          pnVar20 = pnVar20 + -1;
        } while (pnVar35 < pnVar20);
        lVar42 = *(longlong *)&pvVar41->field_0x10;
        pnVar35 = *(newlz_encoder_parse **)pvVar41;
      }
      vector_base<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>::insert
                (local_f8,(longlong)(local_f8->m_size << 4) >> 4,pnVar35,pnVar35 + lVar42);
      pnVar8 = local_f0;
      param_1 = local_218;
      if ((int)uVar45 <= local_188) {
        return;
      }
      optimal_update_passinfo(local_168,iVar9,local_f0,local_218);
      param_16 = local_1f8;
      if (local_13c <= param_3 - local_154) {
        local_154 = param_3;
        optimal_passinfo_to_codecost(pnVar8,local_1f8,local_20c);
      }
    } while (param_3 < local_1dc);
  }
  return;
LAB_14f33886f:
  local_200 = 0;
  lVar42 = local_1a0;
  pnVar40 = local_170;
  puVar22 = local_218;
  iVar9 = local_20c;
  do {
    pnVar21 = local_1f8;
    uVar45 = pnVar40->pairs[local_200].length;
    if ((int)uVar45 < iVar9) break;
    local_230 = pnVar40->pairs[local_200].offset;
    puVar44 = (ulonglong *)(puVar22 + (longlong)local_1d4 + -8);
    local_22c = (int)puVar44 - (int)local_198;
    if ((int)uVar45 < (int)local_22c) {
      local_22c = uVar45;
    }
    if (local_230 < param_7) {
      if (local_230 < 8) {
        local_230 = rounded_up[local_230];
        if ((longlong)(ulonglong)local_230 <= (longlong)local_198 - (longlong)param_6) {
          if (local_1ac == *(uint *)(local_198 + -(ulonglong)local_230)) {
            puVar43 = (ulonglong *)(local_198 + 4);
            lVar47 = (longlong)(local_198 + -(ulonglong)local_230) + (4 - (longlong)puVar43);
            puVar19 = puVar43;
            if (puVar43 <= puVar44 + -1) {
LAB_14f338940:
              uVar13 = *(ulonglong *)(lVar47 + (longlong)puVar19) ^ *puVar19;
              if (uVar13 == 0) goto code_r0x00014f338949;
              uVar36 = 0;
              if (uVar13 != 0) {
                for (; (uVar13 >> uVar36 & 1) == 0; uVar36 = uVar36 + 1) {
                }
              }
              local_130 = (undefined4)uVar36;
              iVar26 = ((int)((uVar36 & 0xffffffff) >> 3) - (int)puVar43) + (int)puVar19;
              goto LAB_14f338974;
            }
LAB_14f338952:
            lVar18 = (longlong)puVar19 - (longlong)puVar43;
            iVar26 = (int)lVar18;
            for (; (puVar19 < puVar44 &&
                   (iVar26 = (int)lVar18, (char)*puVar19 == *(char *)(lVar47 + (longlong)puVar19)));
                puVar19 = (ulonglong *)((longlong)puVar19 + 1)) {
              lVar18 = lVar18 + 1;
              iVar26 = (int)lVar18;
            }
LAB_14f338974:
            local_22c = iVar26 + 4;
          }
          else {
            local_22c = 0;
          }
          if (local_230 != 8) {
            if (local_1ac == *(uint *)(local_198 + -8)) {
              puVar43 = (ulonglong *)(local_198 + 4);
              puVar19 = puVar43;
              if (puVar43 <= puVar44 + -1) {
LAB_14f3389d0:
                uVar13 = *(ulonglong *)(local_198 + (-4 - (longlong)puVar43) + (longlong)puVar19) ^
                         *puVar19;
                if (uVar13 == 0) goto code_r0x00014f3389dd;
                uVar36 = 0;
                if (uVar13 != 0) {
                  for (; (uVar13 >> uVar36 & 1) == 0; uVar36 = uVar36 + 1) {
                  }
                }
                local_12c = (undefined4)uVar36;
                iVar26 = ((int)((uVar36 & 0xffffffff) >> 3) - (int)puVar43) + (int)puVar19;
                goto LAB_14f338a05;
              }
LAB_14f3389e6:
              lVar47 = (longlong)puVar19 - (longlong)puVar43;
              iVar26 = (int)lVar47;
              for (; (puVar19 < puVar44 &&
                     (iVar26 = (int)lVar47,
                     (uchar)*puVar19 == (local_198 + (-4 - (longlong)puVar43))[(longlong)puVar19]));
                  puVar19 = (ulonglong *)((longlong)puVar19 + 1)) {
                lVar47 = lVar47 + 1;
                iVar26 = (int)lVar47;
              }
LAB_14f338a05:
              uVar45 = iVar26 + 4;
            }
            else {
              uVar45 = 0;
            }
            if ((int)local_22c <= (int)uVar45) {
              local_230 = 8;
              local_22c = uVar45;
            }
          }
          if (iVar9 <= (int)local_22c) goto LAB_14f338a2d;
        }
      }
      else {
LAB_14f338a2d:
        uVar45 = local_22c;
        if (((param_19->farMatchOffsetLog2 < 1) ||
            ((int)local_230 < 1 << ((byte)param_19->farMatchOffsetLog2 & 0x1f))) ||
           (param_19->farMatchMinLen <= (int)local_22c)) {
          if (0xfffff < (int)local_230) {
            if ((int)local_230 < 0x400000) {
              if ((int)local_230 < 0x200000) {
                bVar49 = SBORROW4(local_22c,5);
                bVar48 = (int)(local_22c - 5) < 0;
              }
              else {
                bVar49 = SBORROW4(local_22c,6);
                bVar48 = (int)(local_22c - 6) < 0;
              }
            }
            else {
              bVar49 = SBORROW4(local_22c,8);
              bVar48 = (int)(local_22c - 8) < 0;
            }
            if (bVar49 != bVar48) goto LAB_14f339233;
          }
          lVar47 = 0;
          lVar38 = (longlong)(int)local_22c;
          lVar18 = -1;
          pnVar40 = local_170;
          puVar22 = local_218;
          iVar9 = local_20c;
          if (0 < lVar42) {
            iVar26 = local_22c - 0x11;
            uVar32 = local_238;
            iVar9 = 0x7fffffff;
            do {
              iVar12 = aiStack_e8[lVar47];
              iVar24 = 3;
              if (aiStack_c0[lVar47] < 3) {
                iVar24 = aiStack_c0[lVar47];
              }
              if (iVar26 < 0) {
                iVar37 = pnVar21->codecost_packet[(int)(iVar24 + (uVar45 + 0x2e) * 4)];
              }
              else {
                if (iVar26 < 0xff) {
                  iVar37 = pnVar21->codecost_offset2[lVar38 + 0xef];
                }
                else {
                  iVar37 = cost_excess_huge(iVar26,pnVar21);
                }
                iVar37 = iVar37 + pnVar21->codecost_packet[(longlong)iVar24 + 0xfc];
                uVar32 = local_238;
              }
              iVar24 = iVar37 + iVar12;
              lVar42 = lVar47;
              if (iVar9 <= iVar37 + iVar12) {
                iVar24 = iVar9;
                lVar42 = lVar18;
              }
              lVar18 = lVar42;
              lVar47 = lVar47 + 1;
              iVar9 = iVar24;
            } while (lVar47 < local_1a0);
            lVar42 = local_1a0;
            pnVar40 = local_170;
            puVar22 = local_218;
            iVar9 = local_20c;
            if (-1 < lVar18) {
              iVar9 = aiStack_c0[lVar18];
              iVar12 = aiStack_e8[lVar18];
              local_208 = auStack_98[lVar18];
              iVar24 = 3;
              if (iVar9 < 3) {
                iVar24 = iVar9;
              }
              pnVar14 = local_228->payloads + (int)local_208;
              local_1d0 = pnVar14;
              if ((int)uVar45 <= (int)auStack_70[lVar18]) break;
              if ((int)local_1e0 < (int)uVar45) {
                local_1e0 = uVar45;
              }
              local_1ec = local_210 + uVar45;
              local_178 = local_1ec;
              if (local_1ec < local_234) {
                local_178 = local_234;
              }
              uVar10 = local_1f8->offset_alt_modulo;
              if (uVar10 == 0) {
                if ((int)local_230 < 0x7fff08) {
                  uVar10 = local_230 + 0xf8;
                  local_128 = 0x1f;
                  if (uVar10 != 0) {
                    for (; uVar10 >> local_128 == 0; local_128 = local_128 + -1) {
                    }
                  }
                  bVar16 = ((char)local_128 + -8) * '\x10' | (byte)uVar10 & 0xf;
                }
                else {
                  local_124 = 0x1f;
                  if (local_230 - 0x7eff00 != 0) {
                    for (; local_230 - 0x7eff00 >> local_124 == 0; local_124 = local_124 + -1) {
                    }
                  }
                  bVar16 = (byte)local_124 | 0xf0;
                }
                if (bVar16 < 0xf0) {
                  iVar37 = (bVar16 >> 4) + 4;
                }
                else {
                  iVar37 = bVar16 - 0xe0;
                }
                iVar17 = local_1f8->codecost_offset1[bVar16] + iVar37 * 0x20;
                iVar37 = iVar17 + 0xc;
                if ((int)local_230 < 0x7fff08) {
                  iVar37 = iVar17;
                }
              }
              else if (uVar10 == 1) {
                uVar10 = local_230 + 8;
                local_120 = 0x1f;
                if (uVar10 != 0) {
                  for (; uVar10 >> local_120 == 0; local_120 = local_120 + -1) {
                  }
                }
                bVar16 = (char)local_120 - 3;
                bVar16 = (byte)(uVar10 >> (bVar16 & 0x1f)) ^ 8 | bVar16 * '\b';
                iVar37 = (uint)(bVar16 >> 3) * 0x20 + local_1f8->codecost_offset1[bVar16];
              }
              else {
                uVar34 = local_230 / uVar10 + 8;
                local_11c = 0x1f;
                if (uVar34 != 0) {
                  for (; uVar34 >> local_11c == 0; local_11c = local_11c + -1) {
                  }
                }
                bVar16 = (char)local_11c - 3;
                bVar16 = (byte)(uVar34 >> (bVar16 & 0x1f)) ^ 8 | bVar16 * '\b';
                iVar37 = local_1f8->codecost_offset1[bVar16] +
                         local_1f8->codecost_offset2
                         [(ulonglong)local_230 % (ulonglong)uVar10 & 0xff] +
                         (uint)(bVar16 >> 3) * 0x20;
              }
              local_234 = local_178;
              local_1f0 = iVar9;
              if (iVar26 < 0) {
                local_1e4 = local_1f8->codecost_packet[(int)(iVar24 + (uVar45 + 0x2e) * 4)];
              }
              else {
                if (iVar26 < 0xff) {
                  local_1e4 = local_1f8->codecost_offset2[lVar38 + 0xef];
                }
                else {
                  local_1e4 = cost_excess_huge(iVar26,local_1f8);
                }
                local_1e4 = local_1e4 + local_1f8->codecost_packet[(longlong)iVar24 + 0xfc];
              }
              iVar17 = local_1f0;
              local_1e4 = local_1e4 + iVar12 + iVar37;
              iVar26 = local_1ec * 2;
              if (local_1e4 < local_228->costs[iVar26]) {
                local_228->costs[iVar26] = local_1e4;
                pnVar23 = local_228->payloads + iVar26;
                pnVar23->ml = uVar45;
                pnVar23->lrl = iVar9;
                (pnVar23->los).lasts[0] = local_230;
                (pnVar23->los).lasts[1] = (pnVar14->los).lasts[0];
                (pnVar23->los).lasts[2] = (pnVar14->los).lasts[1];
                pnVar23->prev_index = auStack_98[lVar18];
                (pnVar23->field3_0x14).is_twostep = 0;
              }
              lVar47 = local_1b8 + (int)local_22c;
              local_150 = (longlong)(int)local_230;
              piVar46 = (int *)(local_218 + -local_150);
              iVar26 = local_1e4 +
                       local_1f8->codecost_literal
                       [(byte)(local_218[lVar47] -
                              (*(byte *)(lVar47 + (longlong)piVar46) &
                              (byte)local_1f8->subliteralmask))];
              lVar42 = (lVar47 + 1) * 2 + 1;
              if (iVar26 < local_228->costs[lVar42]) {
                local_228->costs[lVar42] = iVar26;
                pnVar23 = local_228->payloads + lVar42;
                (pnVar23->los).lasts[0] = local_230;
                pnVar23->ml = local_22c;
                pnVar23->lrl = iVar9;
                (pnVar23->los).lasts[1] = (pnVar14->los).lasts[0];
                (pnVar23->los).lasts[2] = (pnVar14->los).lasts[1];
                pnVar23->prev_index = local_208;
                (pnVar23->field3_0x14).is_twostep = 0;
                local_1c8[lVar47 + 1] = 1;
              }
              local_238 = uVar32;
              local_1a8 = piVar46;
              if ((local_22c - local_134 < local_138) && (local_100 < (int)local_22c)) {
                iVar9 = (int)local_100 + -0x11;
                piVar31 = local_1f8->codecost_offset2 + local_100 + 0xef;
                piVar28 = local_1f8->codecost_packet + (longlong)iVar24 + local_100 * 4 + 0xb8;
                lVar42 = local_100;
                do {
                  if (iVar9 < 0) {
                    iVar26 = *piVar28;
                  }
                  else {
                    pnVar21 = local_1f8;
                    if (iVar9 < 0xff) {
                      iVar26 = *piVar31;
                    }
                    else {
                      iVar26 = cost_excess_huge(iVar9,local_1f8);
                    }
                    iVar26 = iVar26 + pnVar21->codecost_packet[(longlong)iVar24 + 0xfc];
                  }
                  iVar26 = iVar26 + iVar12 + iVar37;
                  lVar47 = local_1b8 + lVar42;
                  if (iVar26 < local_228->costs[lVar47 * 2]) {
                    local_228->costs[lVar47 * 2] = iVar26;
                    pnVar23 = local_228->payloads + lVar47 * 2;
                    pnVar23->ml = iVar9 + 0x11;
                    (pnVar23->los).lasts[0] = local_230;
                    pnVar23->lrl = iVar17;
                    (pnVar23->los).lasts[1] = (pnVar14->los).lasts[0];
                    (pnVar23->los).lasts[2] = (pnVar14->los).lasts[1];
                    pnVar23->prev_index = local_208;
                    (pnVar23->field3_0x14).is_twostep = 0;
                  }
                  iVar26 = local_1f8->codecost_literal
                           [(byte)(local_218[lVar47] -
                                  (*(byte *)((longlong)piVar46 + lVar47) &
                                  (byte)local_1f8->subliteralmask))] + iVar26;
                  lVar18 = (lVar47 + 1) * 2 + 1;
                  if (iVar26 < local_228->costs[lVar18]) {
                    local_228->costs[lVar18] = iVar26;
                    pnVar14 = local_228->payloads + lVar18;
                    pnVar14->ml = iVar9 + 0x11;
                    (pnVar14->los).lasts[0] = local_230;
                    pnVar14->lrl = iVar17;
                    (pnVar14->los).lasts[1] = (local_1d0->los).lasts[0];
                    (pnVar14->los).lasts[2] = (local_1d0->los).lasts[1];
                    pnVar14->prev_index = local_208;
                    (pnVar14->field3_0x14).is_twostep = 0;
                    local_1c8[lVar47 + 1] = 1;
                  }
                  iVar9 = iVar9 + 1;
                  lVar42 = lVar42 + 1;
                  piVar28 = piVar28 + 4;
                  piVar31 = piVar31 + 1;
                  pnVar14 = local_1d0;
                } while (lVar42 < (int)local_22c);
              }
              iVar12 = local_178;
              iVar26 = local_1ec;
              pnVar21 = local_1f8;
              lVar42 = local_1a0;
              pnVar40 = local_170;
              puVar22 = local_218;
              iVar9 = local_20c;
              if (local_1ec < local_158) {
                puVar43 = (ulonglong *)(local_218 + (longlong)local_1d4 + -8);
                puVar39 = local_218 + local_1ec;
                puVar44 = (ulonglong *)(puVar39 + 3);
                puVar19 = puVar44;
                if (puVar44 <= puVar43 + -1) {
LAB_14f339040:
                  uVar13 = *(ulonglong *)(-local_150 + (longlong)puVar19) ^ *puVar19;
                  if (uVar13 == 0) goto code_r0x00014f33904d;
                  uVar36 = 0;
                  if (uVar13 != 0) {
                    for (; (uVar13 >> uVar36 & 1) == 0; uVar36 = uVar36 + 1) {
                    }
                  }
                  local_118 = (undefined4)uVar36;
                  iVar24 = ((int)((uVar36 & 0xffffffff) >> 3) - (int)puVar44) + (int)puVar19;
                  goto LAB_14f339078;
                }
LAB_14f339056:
                lVar47 = (longlong)puVar19 - (longlong)puVar44;
                iVar24 = (int)lVar47;
                for (; (puVar19 < puVar43 &&
                       (iVar24 = (int)lVar47,
                       (char)*puVar19 == *(char *)((longlong)puVar19 + -local_150)));
                    puVar19 = (ulonglong *)((longlong)puVar19 + 1)) {
                  lVar47 = lVar47 + 1;
                  iVar24 = (int)lVar47;
                }
LAB_14f339078:
                iVar37 = 0;
                local_234 = local_178;
                uVar45 = 0;
                if (puVar39[2] == puVar39[(longlong)(int)~local_230 + 3]) {
                  uVar45 = (puVar39[1] == puVar39[(longlong)(int)(-2 - local_230) + 3]) + 1;
                }
                iVar17 = 3 - uVar45;
                iVar24 = uVar45 + iVar24;
                if (1 < iVar24) {
                  pbVar15 = (byte *)((longlong)local_1ec + (longlong)piVar46);
                  iVar9 = iVar17;
                  do {
                    iVar11 = iVar9;
                    uVar2 = *puVar39;
                    puVar39 = puVar39 + 1;
                    iVar37 = iVar37 + local_1f8->codecost_literal
                                      [(byte)(uVar2 - ((byte)local_1f8->subliteralmask & *pbVar15))]
                    ;
                    iVar9 = iVar11 + -1;
                    pbVar15 = pbVar15 + 1;
                  } while (iVar9 != 0);
                  iVar37 = local_1e4 + iVar37;
                  iVar9 = iVar17;
                  if (2 < iVar17) {
                    iVar9 = iVar11 + 2;
                    iVar37 = iVar37 + *(int *)((longlong)local_1f8 + (0x403 - (ulonglong)uVar45) * 4
                                              );
                  }
                  iVar11 = iVar24 + -0x11;
                  if (iVar11 < 0) {
                    iVar11 = local_1f8->codecost_packet[iVar9 + (iVar24 + -2) * 4];
                  }
                  else {
                    if (iVar11 < 0xff) {
                      iVar11 = local_1f8->codecost_offset2[(longlong)iVar24 + 0xef];
                    }
                    else {
                      iVar11 = cost_excess_huge(iVar11,local_1f8);
                    }
                    iVar11 = iVar11 + pnVar21->codecost_packet[(longlong)iVar9 + 0x3c];
                  }
                  iVar26 = iVar24 + iVar17 + iVar26;
                  local_234 = iVar26;
                  if (iVar26 < iVar12) {
                    local_234 = iVar12;
                  }
                  iVar26 = iVar26 * 2;
                  lVar42 = local_1a0;
                  pnVar40 = local_170;
                  puVar22 = local_218;
                  iVar9 = local_20c;
                  if (iVar37 + iVar11 < local_228->costs[iVar26]) {
                    local_228->costs[iVar26] = iVar37 + iVar11;
                    pnVar14 = local_228->payloads + iVar26;
                    pnVar14->ml = local_22c;
                    pnVar14->lrl = local_1f0;
                    (pnVar14->los).lasts[0] = local_230;
                    (pnVar14->los).lasts[1] = (local_1d0->los).lasts[0];
                    (pnVar14->los).lasts[2] = (local_1d0->los).lasts[1];
                    (pnVar14->field3_0x14).twostep.lrl = (byte)iVar17;
                    (pnVar14->field3_0x14).is_twostep = (pnVar14->field3_0x14).is_twostep & 0xff;
                    (pnVar14->field3_0x14).is_twostep =
                         (pnVar14->field3_0x14).is_twostep | iVar24 * 0x100;
                    pnVar14->prev_index = local_208;
                  }
                }
              }
            }
          }
        }
      }
    }
LAB_14f339233:
    local_200 = local_200 + 1;
  } while ((longlong)local_200 < 4);
  param_16 = local_1f8;
  if ((int)local_238 <= (int)local_1e0) {
LAB_14f339261:
    iVar9 = local_210 + local_1e0;
    iVar26 = local_1dc;
    if (iVar9 == local_234) goto LAB_14f33935e;
    pnVar14 = local_228->payloads;
    local_210 = iVar9 + -1;
    lVar47 = (longlong)iVar9 + 1;
    iVar26 = pnVar14[iVar9 * 2].los.lasts[0];
    lVar42 = lVar47 * 2 + -2;
    iVar12 = pnVar14[lVar42].prev_index;
    uVar5 = *(undefined8 *)(pnVar14[lVar42].los.lasts + 2);
    iVar24 = pnVar14[lVar42].lrl;
    nVar6 = pnVar14[lVar42].field3_0x14;
    *(undefined8 *)pnVar14[lVar47 * 2 + 1].los.lasts = *(undefined8 *)pnVar14[lVar42].los.lasts;
    *(undefined8 *)(pnVar14[lVar47 * 2 + 1].los.lasts + 2) = uVar5;
    pnVar14[lVar47 * 2 + 1].lrl = iVar24;
    pnVar14[lVar47 * 2 + 1].field3_0x14 = nVar6;
    pnVar14[lVar47 * 2 + 1].prev_index = iVar12;
    local_228->costs[lVar47 * 2 + 1] =
         param_16->codecost_literal
         [(byte)(local_218[iVar9] -
                (local_218[lVar47 + (-1 - (longlong)iVar26)] & (byte)param_16->subliteralmask))] +
         local_228->costs[lVar42];
    local_1c8[local_18c + iVar9] = local_18c;
  }
  param_3 = local_210 + 1;
  param_1 = local_218;
  iVar9 = local_234;
  local_210 = param_3;
  iVar26 = local_1dc;
  if (local_188 < local_234) goto LAB_14f33935e;
  goto LAB_14f337e17;
code_r0x00014f338949:
  puVar19 = puVar19 + 1;
  if (puVar44 + -1 < puVar19) goto LAB_14f338952;
  goto LAB_14f338940;
code_r0x00014f3389dd:
  puVar19 = puVar19 + 1;
  if (puVar44 + -1 < puVar19) goto LAB_14f3389e6;
  goto LAB_14f3389d0;
code_r0x00014f33904d:
  puVar19 = puVar19 + 1;
  if (puVar43 + -1 < puVar19) goto LAB_14f339056;
  goto LAB_14f339040;
code_r0x00014f33815d:
  puVar19 = puVar19 + 1;
  if (puVar43 + -1 < puVar19) goto LAB_14f338166;
  goto LAB_14f338150;
code_r0x00014f3385cd:
  puVar19 = puVar19 + 1;
  if (puVar43 + -1 < puVar19) goto LAB_14f3385d6;
  goto LAB_14f3385c0;
}

// newLZ_encoder_arrays_finish_chunk<1> @ 14f3397c0

void __cdecl oo2::newLZ_encoder_arrays_finish_chunk<1>(newLZ_encoder_arrays *param_1,uchar *param_2)

{
  uchar *_Size;
  
  _Size = param_1->chunk_ptr + ((longlong)param_1->chunk_len - (longlong)param_2);
  if (0 < (longlong)_Size) {
    memcpy(param_1->literals_ptr_raw,param_2,(size_t)_Size);
    param_1->literals_ptr_raw = param_1->literals_ptr_raw + (longlong)_Size;
    put_sub_literals(param_1->literals_ptr_sub,param_2,(long64)_Size,(longlong)param_1->lastoffset);
    param_1->literals_ptr_sub = param_1->literals_ptr_sub + (longlong)_Size;
  }
  return;
}

// newLZ_encoder_arrays_finish_chunk<0> @ 14f339840

void __cdecl oo2::newLZ_encoder_arrays_finish_chunk<0>(newLZ_encoder_arrays *param_1,uchar *param_2)

{
  uchar *_Size;
  
  _Size = param_1->chunk_ptr + ((longlong)param_1->chunk_len - (longlong)param_2);
  if (0 < (longlong)_Size) {
    memcpy(param_1->literals_ptr_raw,param_2,(size_t)_Size);
    param_1->literals_ptr_raw = param_1->literals_ptr_raw + (longlong)_Size;
  }
  return;
}

// newLZ_encoder_arrays_put_long_lrl<1> @ 14f3398a0

void __cdecl
oo2::newLZ_encoder_arrays_put_long_lrl<1>(newLZ_encoder_arrays *param_1,uchar *param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
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
  uchar uVar33;
  uchar *puVar34;
  uchar *puVar35;
  uchar *puVar36;
  longlong lVar37;
  longlong lVar38;
  uchar *puVar39;
  ulonglong uVar40;
  
  iVar3 = param_1->lastoffset;
  lVar38 = (longlong)param_3;
  puVar39 = param_1->literals_ptr_sub;
  puVar36 = param_2;
  lVar37 = lVar38;
  if (8 < lVar38) {
    uVar40 = lVar38 + 7U >> 4;
    lVar37 = lVar38 + uVar40 * -0x10;
    puVar35 = param_2;
    do {
      uVar4 = puVar35[1];
      uVar5 = puVar35[2];
      uVar6 = puVar35[3];
      uVar7 = puVar35[4];
      uVar8 = puVar35[5];
      uVar9 = puVar35[6];
      uVar10 = puVar35[7];
      uVar11 = puVar35[8];
      uVar12 = puVar35[9];
      uVar13 = puVar35[10];
      uVar14 = puVar35[0xb];
      uVar15 = puVar35[0xc];
      uVar16 = puVar35[0xd];
      uVar17 = puVar35[0xe];
      uVar18 = puVar35[0xf];
      puVar36 = puVar35 + 0x10;
      puVar34 = puVar35 + -(longlong)iVar3;
      uVar19 = puVar34[1];
      uVar20 = puVar34[2];
      uVar21 = puVar34[3];
      uVar22 = puVar34[4];
      uVar23 = puVar34[5];
      uVar24 = puVar34[6];
      uVar25 = puVar34[7];
      uVar26 = puVar34[8];
      uVar27 = puVar34[9];
      uVar28 = puVar34[10];
      uVar29 = puVar34[0xb];
      uVar30 = puVar34[0xc];
      uVar31 = puVar34[0xd];
      uVar32 = puVar34[0xe];
      uVar33 = puVar34[0xf];
      *puVar39 = *puVar35 - *puVar34;
      puVar39[1] = uVar4 - uVar19;
      puVar39[2] = uVar5 - uVar20;
      puVar39[3] = uVar6 - uVar21;
      puVar39[4] = uVar7 - uVar22;
      puVar39[5] = uVar8 - uVar23;
      puVar39[6] = uVar9 - uVar24;
      puVar39[7] = uVar10 - uVar25;
      puVar39[8] = uVar11 - uVar26;
      puVar39[9] = uVar12 - uVar27;
      puVar39[10] = uVar13 - uVar28;
      puVar39[0xb] = uVar14 - uVar29;
      puVar39[0xc] = uVar15 - uVar30;
      puVar39[0xd] = uVar16 - uVar31;
      puVar39[0xe] = uVar17 - uVar32;
      puVar39[0xf] = uVar18 - uVar33;
      puVar39 = puVar39 + 0x10;
      uVar40 = uVar40 - 1;
      puVar35 = puVar36;
    } while (uVar40 != 0);
  }
  if (0 < lVar37) {
    uVar1 = *(undefined8 *)puVar36;
    uVar2 = *(undefined8 *)(puVar36 + -(longlong)iVar3);
    *(ulonglong *)puVar39 =
         CONCAT17((char)((ulonglong)uVar1 >> 0x38) - (char)((ulonglong)uVar2 >> 0x38),
                  CONCAT16((char)((ulonglong)uVar1 >> 0x30) - (char)((ulonglong)uVar2 >> 0x30),
                           CONCAT15((char)((ulonglong)uVar1 >> 0x28) -
                                    (char)((ulonglong)uVar2 >> 0x28),
                                    CONCAT14((char)((ulonglong)uVar1 >> 0x20) -
                                             (char)((ulonglong)uVar2 >> 0x20),
                                             CONCAT13((char)((ulonglong)uVar1 >> 0x18) -
                                                      (char)((ulonglong)uVar2 >> 0x18),
                                                      CONCAT12((char)((ulonglong)uVar1 >> 0x10) -
                                                               (char)((ulonglong)uVar2 >> 0x10),
                                                               CONCAT11((char)((ulonglong)uVar1 >> 8
                                                                              ) - (char)((ulonglong)
                                                                                         uVar2 >> 8)
                                                                        ,(char)uVar1 - (char)uVar2))
                                                     )))));
  }
  puVar36 = param_1->literals_ptr_raw;
  param_1->literals_ptr_sub = param_1->literals_ptr_sub + lVar38;
  puVar39 = puVar36 + lVar38;
  do {
    uVar1 = *(undefined8 *)param_2;
    param_2 = param_2 + 8;
    *(undefined8 *)puVar36 = uVar1;
    puVar36 = puVar36 + 8;
  } while (puVar36 < puVar39);
  param_1->literals_ptr_raw = puVar39;
  if (param_3 + -3 < 0xff) {
    *param_1->excess_u8_ptr = (uchar)(param_3 + -3);
    param_1->excess_u8_ptr = param_1->excess_u8_ptr + 1;
  }
  else {
    *param_1->excess_u8_ptr = 0xff;
    param_1->excess_u8_ptr = param_1->excess_u8_ptr + 1;
    *param_1->excess_u32_ptr = param_3 - 0x102;
    param_1->excess_u32_ptr = param_1->excess_u32_ptr + 1;
  }
  return;
}

// newLZ_encoder_arrays_put_long_lrl<0> @ 14f3399c0

void __cdecl
oo2::newLZ_encoder_arrays_put_long_lrl<0>(newLZ_encoder_arrays *param_1,uchar *param_2,int param_3)

{
  undefined8 uVar1;
  uchar *puVar2;
  uchar *puVar3;
  
  puVar2 = param_1->literals_ptr_raw;
  puVar3 = puVar2 + param_3;
  do {
    uVar1 = *(undefined8 *)param_2;
    param_2 = param_2 + 8;
    *(undefined8 *)puVar2 = uVar1;
    puVar2 = puVar2 + 8;
  } while (puVar2 < puVar3);
  param_1->literals_ptr_raw = puVar3;
  if (param_3 + -3 < 0xff) {
    *param_1->excess_u8_ptr = (uchar)(param_3 + -3);
    param_1->excess_u8_ptr = param_1->excess_u8_ptr + 1;
    return;
  }
  *param_1->excess_u8_ptr = 0xff;
  param_1->excess_u8_ptr = param_1->excess_u8_ptr + 1;
  *param_1->excess_u32_ptr = param_3 - 0x102;
  param_1->excess_u32_ptr = param_1->excess_u32_ptr + 1;
  return;
}

// newLZ_encoder_arrays_put_packet<1,1> @ 14f339a20

void __cdecl
oo2::newLZ_encoder_arrays_put_packet<1,1>
          (newLZ_encoder_arrays *param_1,newLZ_LOs *param_2,int param_3,int param_4,int param_5,
          uchar *param_6)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  uchar *puVar6;
  char cVar7;
  uchar uVar8;
  
  if (param_3 == 0) {
    cVar7 = '\0';
  }
  else if (param_3 < 9) {
    puVar6 = param_1->excess_u8_ptr;
    iVar5 = param_3 + -3;
    *puVar6 = (uchar)iVar5;
    if (-1 < iVar5) {
      puVar6 = puVar6 + 1;
    }
    param_1->excess_u8_ptr = puVar6;
    iVar4 = param_3;
    if (-1 < iVar5) {
      iVar4 = 3;
    }
    cVar7 = (char)iVar4;
    *(undefined8 *)param_1->literals_ptr_raw = *(undefined8 *)param_6;
    param_1->literals_ptr_raw = param_1->literals_ptr_raw + param_3;
    uVar2 = *(undefined8 *)param_6;
    uVar3 = *(undefined8 *)(param_6 + -(longlong)param_1->lastoffset);
    *(ulonglong *)param_1->literals_ptr_sub =
         CONCAT17((char)((ulonglong)uVar2 >> 0x38) - (char)((ulonglong)uVar3 >> 0x38),
                  CONCAT16((char)((ulonglong)uVar2 >> 0x30) - (char)((ulonglong)uVar3 >> 0x30),
                           CONCAT15((char)((ulonglong)uVar2 >> 0x28) -
                                    (char)((ulonglong)uVar3 >> 0x28),
                                    CONCAT14((char)((ulonglong)uVar2 >> 0x20) -
                                             (char)((ulonglong)uVar3 >> 0x20),
                                             CONCAT13((char)((ulonglong)uVar2 >> 0x18) -
                                                      (char)((ulonglong)uVar3 >> 0x18),
                                                      CONCAT12((char)((ulonglong)uVar2 >> 0x10) -
                                                               (char)((ulonglong)uVar3 >> 0x10),
                                                               CONCAT11((char)((ulonglong)uVar2 >> 8
                                                                              ) - (char)((ulonglong)
                                                                                         uVar3 >> 8)
                                                                        ,(char)uVar2 - (char)uVar3))
                                                     )))));
    param_1->literals_ptr_sub = param_1->literals_ptr_sub + param_3;
  }
  else {
    cVar7 = '\x03';
    newLZ_encoder_arrays_put_long_lrl<1>(param_1,param_6,param_3);
  }
  iVar5 = param_4 + -2;
  if (0xe < iVar5) {
    iVar5 = 0xf;
    if (param_4 + -0x11 < 0xff) {
      *param_1->excess_u8_ptr = (uchar)(param_4 + -0x11);
      param_1->excess_u8_ptr = param_1->excess_u8_ptr + 1;
    }
    else {
      *param_1->excess_u8_ptr = 0xff;
      param_1->excess_u8_ptr = param_1->excess_u8_ptr + 1;
      *param_1->excess_u32_ptr = param_4 - 0x110;
      param_1->excess_u32_ptr = param_1->excess_u32_ptr + 1;
    }
  }
  uVar8 = cVar7 + (char)iVar5 * '\x04';
  if (0 < param_5) {
    uVar8 = uVar8 + 0xc0;
    param_1->lastoffset = param_5;
    if (param_5 < 0x7fff08) {
      uVar1 = param_5 + 0xf8;
      iVar5 = 0x1f;
      if (uVar1 != 0) {
        for (; uVar1 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      *param_1->offsets_u8_ptr = ((char)iVar5 + -8) * '\x10' | (byte)uVar1 & 0xf;
      param_1->offsets_u8_ptr = param_1->offsets_u8_ptr + 1;
      *param_1->offsets_ptr = param_5;
      param_1->offsets_ptr = param_1->offsets_ptr + 1;
    }
    else {
      newLZ_encoder_arrays_put_long_offset(param_1,param_5);
    }
  }
  *param_1->packets_ptr = uVar8;
  param_1->packets_ptr = param_1->packets_ptr + 1;
  return;
}

// newLZ_encoder_arrays_put_packet<1,0> @ 14f339b80

void __cdecl
oo2::newLZ_encoder_arrays_put_packet<1,0>
          (newLZ_encoder_arrays *param_1,newLZ_LOs *param_2,int param_3,int param_4,int param_5,
          uchar *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uchar *puVar4;
  char cVar5;
  uchar uVar6;
  
  if (param_3 == 0) {
    cVar5 = '\0';
  }
  else if (param_3 < 9) {
    puVar4 = param_1->excess_u8_ptr;
    iVar3 = param_3 + -3;
    *puVar4 = (uchar)iVar3;
    if (-1 < iVar3) {
      puVar4 = puVar4 + 1;
    }
    param_1->excess_u8_ptr = puVar4;
    iVar2 = param_3;
    if (-1 < iVar3) {
      iVar2 = 3;
    }
    cVar5 = (char)iVar2;
    *(undefined8 *)param_1->literals_ptr_raw = *(undefined8 *)param_6;
    param_1->literals_ptr_raw = param_1->literals_ptr_raw + param_3;
  }
  else {
    cVar5 = '\x03';
    newLZ_encoder_arrays_put_long_lrl<0>(param_1,param_6,param_3);
  }
  iVar3 = param_4 + -2;
  if (0xe < iVar3) {
    iVar3 = 0xf;
    if (param_4 + -0x11 < 0xff) {
      *param_1->excess_u8_ptr = (uchar)(param_4 + -0x11);
      param_1->excess_u8_ptr = param_1->excess_u8_ptr + 1;
    }
    else {
      *param_1->excess_u8_ptr = 0xff;
      param_1->excess_u8_ptr = param_1->excess_u8_ptr + 1;
      *param_1->excess_u32_ptr = param_4 - 0x110;
      param_1->excess_u32_ptr = param_1->excess_u32_ptr + 1;
    }
  }
  uVar6 = cVar5 + (char)iVar3 * '\x04';
  if (0 < param_5) {
    uVar6 = uVar6 + 0xc0;
    param_1->lastoffset = param_5;
    if (param_5 < 0x7fff08) {
      uVar1 = param_5 + 0xf8;
      iVar3 = 0x1f;
      if (uVar1 != 0) {
        for (; uVar1 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      *param_1->offsets_u8_ptr = ((char)iVar3 + -8) * '\x10' | (byte)uVar1 & 0xf;
      param_1->offsets_u8_ptr = param_1->offsets_u8_ptr + 1;
      *param_1->offsets_ptr = param_5;
      param_1->offsets_ptr = param_1->offsets_ptr + 1;
    }
    else {
      newLZ_encoder_arrays_put_long_offset(param_1,param_5);
    }
  }
  *param_1->packets_ptr = uVar6;
  param_1->packets_ptr = param_1->packets_ptr + 1;
  return;
}

// newLZ_encoder_arrays_put_packet<0,1> @ 14f339ca0

void __cdecl
oo2::newLZ_encoder_arrays_put_packet<0,1>
          (newLZ_encoder_arrays *param_1,newLZ_LOs *param_2,int param_3,int param_4,int param_5,
          uchar *param_6)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  uchar *puVar6;
  longlong lVar7;
  char cVar8;
  char cVar9;
  
  if (param_3 == 0) {
    cVar9 = '\0';
  }
  else if (param_3 < 9) {
    puVar6 = param_1->excess_u8_ptr;
    iVar5 = param_3 + -3;
    *puVar6 = (uchar)iVar5;
    if (-1 < iVar5) {
      puVar6 = puVar6 + 1;
    }
    param_1->excess_u8_ptr = puVar6;
    iVar4 = param_3;
    if (-1 < iVar5) {
      iVar4 = 3;
    }
    cVar9 = (char)iVar4;
    *(undefined8 *)param_1->literals_ptr_raw = *(undefined8 *)param_6;
    param_1->literals_ptr_raw = param_1->literals_ptr_raw + param_3;
    uVar2 = *(undefined8 *)param_6;
    uVar3 = *(undefined8 *)(param_6 + -(longlong)param_1->lastoffset);
    *(ulonglong *)param_1->literals_ptr_sub =
         CONCAT17((char)((ulonglong)uVar2 >> 0x38) - (char)((ulonglong)uVar3 >> 0x38),
                  CONCAT16((char)((ulonglong)uVar2 >> 0x30) - (char)((ulonglong)uVar3 >> 0x30),
                           CONCAT15((char)((ulonglong)uVar2 >> 0x28) -
                                    (char)((ulonglong)uVar3 >> 0x28),
                                    CONCAT14((char)((ulonglong)uVar2 >> 0x20) -
                                             (char)((ulonglong)uVar3 >> 0x20),
                                             CONCAT13((char)((ulonglong)uVar2 >> 0x18) -
                                                      (char)((ulonglong)uVar3 >> 0x18),
                                                      CONCAT12((char)((ulonglong)uVar2 >> 0x10) -
                                                               (char)((ulonglong)uVar3 >> 0x10),
                                                               CONCAT11((char)((ulonglong)uVar2 >> 8
                                                                              ) - (char)((ulonglong)
                                                                                         uVar3 >> 8)
                                                                        ,(char)uVar2 - (char)uVar3))
                                                     )))));
    param_1->literals_ptr_sub = param_1->literals_ptr_sub + param_3;
  }
  else {
    cVar9 = '\x03';
    newLZ_encoder_arrays_put_long_lrl<1>(param_1,param_6,param_3);
  }
  iVar5 = param_4 + -2;
  if (0xe < iVar5) {
    iVar5 = 0xf;
    if (param_4 + -0x11 < 0xff) {
      *param_1->excess_u8_ptr = (uchar)(param_4 + -0x11);
      param_1->excess_u8_ptr = param_1->excess_u8_ptr + 1;
    }
    else {
      *param_1->excess_u8_ptr = 0xff;
      param_1->excess_u8_ptr = param_1->excess_u8_ptr + 1;
      *param_1->excess_u32_ptr = param_4 - 0x110;
      param_1->excess_u32_ptr = param_1->excess_u32_ptr + 1;
    }
  }
  cVar9 = cVar9 + (char)iVar5 * '\x04';
  if (param_5 < 1) {
    lVar7 = (longlong)-param_5;
    cVar8 = (char)param_5 * -0x40;
    iVar5 = (param_2->lasts).contents[lVar7 + 4];
    iVar4 = (param_2->lasts).contents[lVar7 + 2];
    (param_2->lasts).contents[lVar7 + 4] = (param_2->lasts).contents[lVar7 + 3];
    (param_2->lasts).contents[lVar7 + 3] = iVar4;
    (param_2->lasts).contents[4] = iVar5;
    param_1->lastoffset = iVar5;
  }
  else {
    iVar5 = (param_2->lasts).contents[4];
    iVar4 = (param_2->lasts).contents[5];
    (param_2->lasts).contents[4] = param_5;
    (param_2->lasts).contents[5] = iVar5;
    (param_2->lasts).contents[6] = iVar4;
    param_1->lastoffset = param_5;
    if (param_5 < 0x7fff08) {
      uVar1 = param_5 + 0xf8;
      iVar5 = 0x1f;
      if (uVar1 != 0) {
        for (; uVar1 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      *param_1->offsets_u8_ptr = ((char)iVar5 + -8) * '\x10' | (byte)uVar1 & 0xf;
      param_1->offsets_u8_ptr = param_1->offsets_u8_ptr + 1;
      *param_1->offsets_ptr = param_5;
      param_1->offsets_ptr = param_1->offsets_ptr + 1;
    }
    else {
      newLZ_encoder_arrays_put_long_offset(param_1,param_5);
    }
    cVar8 = -0x40;
  }
  *param_1->packets_ptr = cVar9 + cVar8;
  param_1->packets_ptr = param_1->packets_ptr + 1;
  return;
}

// newLZ_find_lo0_match_ahead<oo2::CTMF<unsigned_int,1,0,4>_> @ 14f339e40

bool __cdecl
oo2::newLZ_find_lo0_match_ahead<oo2::CTMF<unsigned_int,1,0,4>_>
          (match *param_1,CTMF<unsigned_int,1,0,4> *param_2,newLZ_LOs *param_3,uchar *param_4,
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
  
  iVar10 = (param_3->lasts).contents[4];
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
LAB_14f339ec5:
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
      goto LAB_14f339ec5;
    }
    puVar7 = puVar7 + 1;
  } while( true );
}

// newLZ_find_lo0_match_ahead<oo2::CTMF<unsigned_int,2,8,4>_> @ 14f339f60

/* WARNING: Removing unreachable block (ram,0x00014f33a093) */
/* WARNING: Removing unreachable block (ram,0x00014f33a079) */

bool __cdecl
oo2::newLZ_find_lo0_match_ahead<oo2::CTMF<unsigned_int,2,8,4>_>
          (match *param_1,CTMF<unsigned_int,2,8,4> *param_2,newLZ_LOs *param_3,uchar *param_4,
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
  
  iVar13 = (param_3->lasts).contents[4];
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
LAB_14f339fe6:
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
      goto LAB_14f339fe6;
    }
    puVar11 = puVar11 + 1;
  } while( true );
}

// newLZ_find_lo0_match_ahead<oo2::CTMF<unsigned_int,3,0,4>_> @ 14f33a0c0

bool __cdecl
oo2::newLZ_find_lo0_match_ahead<oo2::CTMF<unsigned_int,3,0,4>_>
          (match *param_1,CTMF<unsigned_int,3,0,4> *param_2,newLZ_LOs *param_3,uchar *param_4,
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
  
  iVar11 = (param_3->lasts).contents[4];
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
LAB_14f33a145:
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
      goto LAB_14f33a145;
    }
    puVar8 = puVar8 + 1;
  } while( true );
}

// newLZ_get_match_heuristic<oo2::CTMF<unsigned_int,1,0,4>_> @ 14f33a1e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
oo2::newLZ_get_match_heuristic<oo2::CTMF<unsigned_int,1,0,4>_>
          (match *param_1,CTMF<unsigned_int,1,0,4> *param_2,newLZ_LOs *param_3,uchar *param_4,
          uchar *param_5,int param_6,uchar *param_7,uint param_8,OodleLZ_CompressOptions *param_9)

{
  uint uVar1;
  uint *puVar2;
  ulonglong uVar3;
  byte bVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  int iVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  char *pcVar13;
  char *pcVar14;
  int iVar15;
  longlong lVar16;
  short sVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  bool bVar21;
  bool bVar22;
  undefined1 local_88 [32];
  uint local_68 [4];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)local_88;
  puVar2 = param_2->m_next_row;
  uVar11 = *(uint *)param_4;
  uVar18 = (int)param_4 - *(int *)&param_2->m_base_ptr;
  uVar1 = param_2->m_next_hash;
  param_2->m_next_ptr = param_4 + 1;
  bVar4 = (byte)param_2->m_table_size_bits & 0x1f;
  uVar10 = (uint)(param_2->m_hash_mul * *(longlong *)(param_4 + 1) >> 0x20);
  uVar10 = uVar10 << bVar4 | uVar10 >> 0x20 - bVar4;
  param_2->m_next_hash = uVar10;
  param_2->m_next_row = (param_2->m_hash_table).m_ptr + (param_2->m_hash_row_mask & uVar10);
  iVar20 = 0;
  iVar19 = -1;
  iVar15 = 0;
  uVar10 = *(uint *)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[4]);
  sVar17 = (short)uVar11;
  if (sVar17 == (short)uVar10) {
    uVar10 = uVar10 ^ uVar11;
    if (uVar10 == 0) {
      puVar8 = (ulonglong *)(param_4 + 4);
      lVar16 = (longlong)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[4]) -
               (longlong)param_4;
      puVar6 = puVar8;
      if (puVar8 <= param_5 + -8) {
LAB_14f33a2c0:
        uVar5 = *(ulonglong *)(lVar16 + (longlong)puVar6) ^ *puVar6;
        if (uVar5 == 0) goto code_r0x00014f33a2c9;
        uVar9 = 0;
        if (uVar5 != 0) {
          for (; (uVar5 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
          }
        }
        iVar15 = ((int)(uVar9 >> 3) - (int)puVar8) + (int)puVar6;
        goto LAB_14f33a2f4;
      }
LAB_14f33a2d2:
      lVar12 = (longlong)puVar6 - (longlong)puVar8;
      iVar15 = (int)lVar12;
      for (; (puVar6 < param_5 &&
             (iVar15 = (int)lVar12, (char)*puVar6 == *(char *)((longlong)puVar6 + lVar16)));
          puVar6 = (ulonglong *)((longlong)puVar6 + 1)) {
        lVar12 = lVar12 + 1;
        iVar15 = (int)lVar12;
      }
LAB_14f33a2f4:
      iVar15 = iVar15 + 4;
    }
    else {
      iVar15 = 3 - (uint)((uVar10 & 0xffffff) != 0);
    }
    iVar19 = 0;
  }
  uVar10 = *(uint *)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[5]);
  if (sVar17 == (short)uVar10) {
    uVar10 = uVar10 ^ uVar11;
    if (uVar10 == 0) {
      puVar6 = (ulonglong *)(param_4 + 4);
      lVar16 = (longlong)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[5]) -
               (longlong)param_4;
      puVar8 = puVar6;
      if (puVar6 <= param_5 + -8) {
LAB_14f33a346:
        uVar5 = *(ulonglong *)(lVar16 + (longlong)puVar8) ^ *puVar8;
        if (uVar5 == 0) goto code_r0x00014f33a34f;
        uVar9 = 0;
        if (uVar5 != 0) {
          for (; (uVar5 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
          }
        }
        iVar7 = ((int)(uVar9 >> 3) - (int)puVar6) + (int)puVar8;
        goto LAB_14f33a379;
      }
LAB_14f33a358:
      lVar12 = (longlong)puVar8 - (longlong)puVar6;
      iVar7 = (int)lVar12;
      for (; (puVar8 < param_5 &&
             (iVar7 = (int)lVar12, (char)*puVar8 == *(char *)((longlong)puVar8 + lVar16)));
          puVar8 = (ulonglong *)((longlong)puVar8 + 1)) {
        lVar12 = lVar12 + 1;
        iVar7 = (int)lVar12;
      }
LAB_14f33a379:
      iVar7 = iVar7 + 4;
    }
    else {
      iVar7 = 3 - (uint)((uVar10 & 0xffffff) != 0);
    }
    if (iVar15 < iVar7) {
      iVar19 = 1;
      iVar15 = iVar7;
    }
  }
  uVar10 = *(uint *)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[6]);
  if (sVar17 == (short)uVar10) {
    uVar10 = uVar10 ^ uVar11;
    if (uVar10 == 0) {
      puVar6 = (ulonglong *)(param_4 + 4);
      lVar16 = (longlong)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[6]) -
               (longlong)param_4;
      puVar8 = puVar6;
      if (puVar6 <= param_5 + -8) {
LAB_14f33a3e0:
        uVar5 = *(ulonglong *)(lVar16 + (longlong)puVar8) ^ *puVar8;
        if (uVar5 == 0) goto code_r0x00014f33a3e9;
        uVar9 = 0;
        if (uVar5 != 0) {
          for (; (uVar5 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
          }
        }
        iVar7 = ((int)(uVar9 >> 3) - (int)puVar6) + (int)puVar8;
        goto LAB_14f33a414;
      }
LAB_14f33a3f2:
      lVar12 = (longlong)puVar8 - (longlong)puVar6;
      iVar7 = (int)lVar12;
      for (; (puVar8 < param_5 &&
             (iVar7 = (int)lVar12, (char)*puVar8 == *(char *)(lVar16 + (longlong)puVar8)));
          puVar8 = (ulonglong *)((longlong)puVar8 + 1)) {
        lVar12 = lVar12 + 1;
        iVar7 = (int)lVar12;
      }
LAB_14f33a414:
      iVar7 = iVar7 + 4;
    }
    else {
      iVar7 = 3 - (uint)((uVar10 & 0xffffff) != 0);
    }
    if (iVar15 < iVar7) {
      iVar19 = 2;
      iVar15 = iVar7;
    }
  }
  if (iVar15 < 4) {
    if (0x37 < (longlong)param_4 - (longlong)param_7) {
      iVar7 = 0;
      if (2 < iVar15) {
        iVar7 = iVar15;
      }
      iVar15 = iVar7;
      if (param_6 < 5) {
        param_6 = 5;
      }
    }
    uVar5 = 0;
    iVar7 = 0;
    uVar11 = *puVar2;
    local_68[0] = uVar18 - uVar11 & 0x3ffffff;
    local_68[1] = uVar18 - puVar2[1] & 0x3ffffff;
    uVar10 = 0;
    if (((puVar2[1] ^ uVar1) & 0xfc000000) == 0) {
      uVar10 = 2;
    }
    uVar10 = ((uVar11 ^ uVar1) & 0xfc000000) == 0 | uVar10;
    pcVar14 = (char *)(longlong)(param_6 + -1);
    if (uVar10 != 0) {
      do {
        uVar11 = 0;
        if (uVar10 != 0) {
          for (; (uVar10 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
          }
        }
        uVar10 = uVar10 & uVar10 - 1;
        uVar11 = local_68[uVar11];
        if (uVar11 < param_8) {
          if (uVar11 < 8) {
            uVar11 = 8;
          }
          lVar16 = (longlong)param_4 - (ulonglong)uVar11;
          if (((longlong)pcVar14 < (longlong)param_5 - (longlong)param_4) &&
             (pcVar14[(longlong)param_4] == pcVar14[lVar16])) {
            lVar16 = lVar16 - (longlong)param_4;
            puVar6 = (ulonglong *)param_4;
            if (param_4 <= param_5 + -8) {
LAB_14f33a560:
              uVar9 = *(ulonglong *)(lVar16 + (longlong)puVar6) ^ *puVar6;
              if (uVar9 == 0) goto code_r0x00014f33a569;
              uVar3 = 0;
              if (uVar9 != 0) {
                for (; (uVar9 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
                }
              }
              pcVar13 = (char *)(((uVar3 >> 3) - (longlong)param_4) + (longlong)puVar6);
              goto LAB_14f33a594;
            }
LAB_14f33a572:
            pcVar13 = (char *)((longlong)puVar6 - (longlong)param_4);
            for (; (puVar6 < param_5 && ((char)*puVar6 == *(char *)(lVar16 + (longlong)puVar6)));
                puVar6 = (ulonglong *)((longlong)puVar6 + 1)) {
              pcVar13 = pcVar13 + 1;
            }
LAB_14f33a594:
            if ((longlong)pcVar14 < (longlong)pcVar13) {
              iVar7 = (int)pcVar13;
              pcVar14 = pcVar13;
              if (((param_9->farMatchOffsetLog2 < 1) ||
                  ((int)uVar11 < 1 << ((byte)param_9->farMatchOffsetLog2 & 0x1f))) ||
                 (param_9->farMatchMinLen <= iVar7)) {
                if (0xfffff < (int)uVar11) {
                  if ((int)uVar11 < 0x400000) {
                    if ((int)uVar11 < 0x200000) {
                      bVar22 = SBORROW4(iVar7,5);
                      bVar21 = iVar7 + -5 < 0;
                    }
                    else {
                      bVar22 = SBORROW4(iVar7,6);
                      bVar21 = iVar7 + -6 < 0;
                    }
                  }
                  else {
                    bVar22 = SBORROW4(iVar7,8);
                    bVar21 = iVar7 + -8 < 0;
                  }
                  if (bVar22 != bVar21) goto LAB_14f33a640;
                }
                if (((5 < iVar7) || ((int)uVar11 < max_offset[iVar7])) && (iVar20 <= iVar7)) {
                  if (iVar7 == iVar20) {
                    bVar21 = (int)uVar11 < (int)uVar5;
LAB_14f33a631:
                    if (!bVar21) goto LAB_14f33a640;
                  }
                  else if (iVar7 <= iVar20 + 1) {
                    bVar21 = (int)uVar11 >> 7 <= (int)uVar5;
                    goto LAB_14f33a631;
                  }
                  uVar5 = (ulonglong)uVar11;
                  iVar20 = iVar7;
                }
              }
            }
          }
        }
LAB_14f33a640:
        iVar7 = (int)uVar5;
      } while (uVar10 != 0);
      uVar11 = *puVar2;
    }
    puVar2[1] = uVar11;
    *puVar2 = (uVar18 ^ uVar1) & 0x3ffffff ^ uVar1;
    if (iVar7 == 0) {
      if (iVar15 < 2) {
        return false;
      }
    }
    else if ((iVar15 < 2) ||
            (((iVar15 + 1 < iVar20 && ((iVar15 + 2 < iVar20 || (iVar7 < 0x400)))) &&
             ((iVar15 + 3 < iVar20 || (iVar7 < 0x10000)))))) {
      param_1->ml = iVar20;
      param_1->off = iVar7;
      return true;
    }
    param_1->ml = iVar15;
    param_1->off = -iVar19;
  }
  else {
    param_1->ml = iVar15;
    param_1->off = -iVar19;
    puVar2[1] = *puVar2;
    *puVar2 = (uVar18 ^ uVar1) & 0x3ffffff ^ uVar1;
  }
  return true;
code_r0x00014f33a2c9:
  puVar6 = puVar6 + 1;
  if (param_5 + -8 < puVar6) goto LAB_14f33a2d2;
  goto LAB_14f33a2c0;
code_r0x00014f33a34f:
  puVar8 = puVar8 + 1;
  if (param_5 + -8 < puVar8) goto LAB_14f33a358;
  goto LAB_14f33a346;
code_r0x00014f33a3e9:
  puVar8 = puVar8 + 1;
  if (param_5 + -8 < puVar8) goto LAB_14f33a3f2;
  goto LAB_14f33a3e0;
code_r0x00014f33a569:
  puVar6 = puVar6 + 1;
  if (param_5 + -8 < puVar6) goto LAB_14f33a572;
  goto LAB_14f33a560;
}

// newLZ_get_match_heuristic<oo2::CTMF<unsigned_int,2,8,4>_> @ 14f33a700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014f33ac1e) */
/* WARNING: Removing unreachable block (ram,0x00014f33a9b9) */
/* WARNING: Removing unreachable block (ram,0x00014f33a99e) */
/* WARNING: Removing unreachable block (ram,0x00014f33ac38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
oo2::newLZ_get_match_heuristic<oo2::CTMF<unsigned_int,2,8,4>_>
          (match *param_1,CTMF<unsigned_int,2,8,4> *param_2,newLZ_LOs *param_3,uchar *param_4,
          uchar *param_5,int param_6,uchar *param_7,uint param_8,OodleLZ_CompressOptions *param_9)

{
  longlong *plVar1;
  undefined1 (*pauVar2) [16];
  uint *puVar3;
  undefined1 (*pauVar4) [16];
  uint uVar5;
  ulonglong uVar6;
  byte bVar7;
  ushort uVar8;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  ulonglong *puVar12;
  int iVar13;
  ulonglong *puVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  char *pcVar18;
  short sVar19;
  uint uVar20;
  longlong lVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  bool bVar25;
  bool bVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 local_98 [32];
  uint local_78 [4];
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)local_98;
  pauVar2 = (undefined1 (*) [16])param_2->m_next_row;
  plVar1 = (longlong *)(param_4 + 1);
  uVar20 = *(uint *)param_4;
  uVar11 = param_2->m_next_hash;
  puVar3 = (param_2->m_hash_table).m_ptr;
  uVar24 = (int)param_4 - *(int *)&param_2->m_base_ptr;
  pauVar4 = (undefined1 (*) [16])param_2->m_next_row_second;
  param_2->m_next_ptr = (uchar *)plVar1;
  bVar7 = (byte)param_2->m_table_size_bits & 0x1f;
  uVar10 = (uint)(param_2->m_hash_mul * *plVar1 >> 0x20);
  uVar10 = uVar10 << bVar7 | uVar10 >> 0x20 - bVar7;
  param_2->m_next_hash = uVar10;
  param_2->m_next_row = puVar3 + (param_2->m_hash_row_mask & uVar10);
  param_2->m_next_row_second =
       puVar3 + ((ulonglong)(*plVar1 * -0x30e44323485a9b9d) >>
                 (0x40U - (char)param_2->m_table_size_bits & 0x3f) & 0xfffffffffffffffc);
  iVar22 = 0;
  iVar23 = -1;
  uVar10 = *(uint *)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[4]);
  sVar19 = (short)uVar20;
  if (sVar19 == (short)uVar10) {
    uVar10 = uVar10 ^ uVar20;
    if (uVar10 == 0) {
      puVar12 = (ulonglong *)(param_4 + 4);
      lVar21 = (longlong)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[4]) -
               (longlong)param_4;
      puVar14 = puVar12;
      if (puVar12 <= param_5 + -8) {
LAB_14f33a810:
        uVar15 = *(ulonglong *)(lVar21 + (longlong)puVar14) ^ *puVar14;
        if (uVar15 == 0) goto code_r0x00014f33a819;
        uVar6 = 0;
        if (uVar15 != 0) {
          for (; (uVar15 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
          }
        }
        iVar22 = ((int)(uVar6 >> 3) - (int)puVar12) + (int)puVar14;
        goto LAB_14f33a845;
      }
LAB_14f33a825:
      lVar17 = (longlong)puVar14 - (longlong)puVar12;
      iVar22 = (int)lVar17;
      for (; (puVar14 < param_5 &&
             (iVar22 = (int)lVar17, (char)*puVar14 == *(char *)(lVar21 + (longlong)puVar14)));
          puVar14 = (ulonglong *)((longlong)puVar14 + 1)) {
        lVar17 = lVar17 + 1;
        iVar22 = (int)lVar17;
      }
LAB_14f33a845:
      iVar22 = iVar22 + 4;
    }
    else {
      iVar22 = 3 - (uint)((uVar10 & 0xffffff) != 0);
    }
    iVar23 = 0;
  }
  uVar10 = *(uint *)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[5]);
  if (sVar19 == (short)uVar10) {
    uVar10 = uVar10 ^ uVar20;
    if (uVar10 == 0) {
      puVar12 = (ulonglong *)(param_4 + 4);
      lVar21 = (longlong)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[5]) -
               (longlong)param_4;
      puVar14 = puVar12;
      if (puVar12 <= param_5 + -8) {
LAB_14f33a895:
        uVar15 = *(ulonglong *)(lVar21 + (longlong)puVar14) ^ *puVar14;
        if (uVar15 == 0) goto code_r0x00014f33a89e;
        uVar6 = 0;
        if (uVar15 != 0) {
          for (; (uVar15 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
          }
        }
        iVar13 = ((int)(uVar6 >> 3) - (int)puVar12) + (int)puVar14;
        goto LAB_14f33a8c6;
      }
LAB_14f33a8a7:
      lVar17 = (longlong)puVar14 - (longlong)puVar12;
      iVar13 = (int)lVar17;
      for (; (puVar14 < param_5 &&
             (iVar13 = (int)lVar17, (char)*puVar14 == *(char *)(lVar21 + (longlong)puVar14)));
          puVar14 = (ulonglong *)((longlong)puVar14 + 1)) {
        lVar17 = lVar17 + 1;
        iVar13 = (int)lVar17;
      }
LAB_14f33a8c6:
      iVar13 = iVar13 + 4;
    }
    else {
      iVar13 = 3 - (uint)((uVar10 & 0xffffff) != 0);
    }
    if (iVar22 < iVar13) {
      iVar23 = 1;
      iVar22 = iVar13;
    }
  }
  uVar10 = *(uint *)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[6]);
  if (sVar19 == (short)uVar10) {
    uVar10 = uVar10 ^ uVar20;
    if (uVar10 == 0) {
      puVar12 = (ulonglong *)(param_4 + 4);
      lVar21 = (longlong)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[6]) -
               (longlong)param_4;
      puVar14 = puVar12;
      if (puVar12 <= param_5 + -8) {
LAB_14f33a930:
        uVar15 = *(ulonglong *)(lVar21 + (longlong)puVar14) ^ *puVar14;
        if (uVar15 == 0) goto code_r0x00014f33a93d;
        uVar6 = 0;
        if (uVar15 != 0) {
          for (; (uVar15 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
          }
        }
        iVar13 = ((int)(uVar6 >> 3) - (int)puVar12) + (int)puVar14;
        goto LAB_14f33a965;
      }
LAB_14f33a946:
      lVar17 = (longlong)puVar14 - (longlong)puVar12;
      iVar13 = (int)lVar17;
      for (; (puVar14 < param_5 &&
             (iVar13 = (int)lVar17, (char)*puVar14 == *(char *)(lVar21 + (longlong)puVar14)));
          puVar14 = (ulonglong *)((longlong)puVar14 + 1)) {
        lVar17 = lVar17 + 1;
        iVar13 = (int)lVar17;
      }
LAB_14f33a965:
      iVar13 = iVar13 + 4;
    }
    else {
      iVar13 = 3 - (uint)((uVar10 & 0xffffff) != 0);
    }
    if (iVar22 < iVar13) {
      iVar23 = 2;
      iVar22 = iVar13;
    }
  }
  if (iVar22 < 4) {
    if (0x37 < (longlong)param_4 - (longlong)param_7) {
      iVar13 = 0;
      if (2 < iVar22) {
        iVar13 = iVar22;
      }
      iVar22 = iVar13;
      if (param_6 < 5) {
        param_6 = 5;
      }
    }
    uVar11 = uVar11 & 0xfc000000;
    auVar29 = *pauVar2;
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
    auVar31._0_4_ = -(uint)(auVar30._0_4_ == uVar11);
    auVar31._4_4_ = -(uint)(auVar30._4_4_ == uVar11);
    auVar31._8_4_ = -(uint)(auVar30._8_4_ == uVar11);
    auVar31._12_4_ = -(uint)(auVar30._12_4_ == uVar11);
    auVar30._0_4_ = -(uint)(auVar28._0_4_ == uVar11);
    auVar30._4_4_ = -(uint)(auVar28._4_4_ == uVar11);
    auVar30._8_4_ = -(uint)(auVar28._8_4_ == uVar11);
    auVar30._12_4_ = -(uint)(auVar28._12_4_ == uVar11);
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
    uVar20 = (uint)uVar8;
    if (pauVar2 == pauVar4) {
      uVar20 = uVar8 & 0xf;
    }
    pcVar9 = (char *)(longlong)(param_6 + -1);
    iVar13 = 0;
    uVar10 = 0;
joined_r0x00014f33aaa2:
    if (uVar20 != 0) {
      uVar5 = 0;
      if (uVar20 != 0) {
        for (; (uVar20 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
        }
      }
      uVar20 = uVar20 & uVar20 - 1;
      uVar5 = local_78[uVar5];
      if (uVar5 < param_8) {
        if (uVar5 < 8) {
          uVar5 = 8;
        }
        if (((longlong)pcVar9 < (longlong)param_5 - (longlong)param_4) &&
           (pcVar9[(longlong)param_4] == pcVar9[(longlong)param_4 - (ulonglong)uVar5])) {
          lVar21 = ((longlong)param_4 - (ulonglong)uVar5) - (longlong)param_4;
          puVar12 = (ulonglong *)param_4;
          if (param_4 <= param_5 + -8) {
LAB_14f33ab20:
            uVar15 = *(ulonglong *)(lVar21 + (longlong)puVar12) ^ *puVar12;
            if (uVar15 == 0) goto code_r0x00014f33ab29;
            uVar6 = 0;
            if (uVar15 != 0) {
              for (; (uVar15 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
              }
            }
            pcVar18 = (char *)(((uVar6 >> 3) - (longlong)param_4) + (longlong)puVar12);
            goto LAB_14f33ab54;
          }
LAB_14f33ab32:
          pcVar18 = (char *)((longlong)puVar12 - (longlong)param_4);
          for (; (puVar12 < param_5 && ((char)*puVar12 == *(char *)(lVar21 + (longlong)puVar12)));
              puVar12 = (ulonglong *)((longlong)puVar12 + 1)) {
            pcVar18 = pcVar18 + 1;
          }
LAB_14f33ab54:
          if ((longlong)pcVar9 < (longlong)pcVar18) {
            iVar16 = (int)pcVar18;
            pcVar9 = pcVar18;
            if (((param_9->farMatchOffsetLog2 < 1) ||
                ((int)uVar5 < 1 << ((byte)param_9->farMatchOffsetLog2 & 0x1f))) ||
               (param_9->farMatchMinLen <= iVar16)) {
              if (0xfffff < (int)uVar5) {
                if ((int)uVar5 < 0x400000) {
                  if ((int)uVar5 < 0x200000) {
                    bVar26 = SBORROW4(iVar16,5);
                    bVar25 = iVar16 + -5 < 0;
                  }
                  else {
                    bVar26 = SBORROW4(iVar16,6);
                    bVar25 = iVar16 + -6 < 0;
                  }
                }
                else {
                  bVar26 = SBORROW4(iVar16,8);
                  bVar25 = iVar16 + -8 < 0;
                }
                if (bVar26 != bVar25) goto joined_r0x00014f33aaa2;
              }
              if (((5 < iVar16) || ((int)uVar5 < max_offset[iVar16])) && (iVar13 <= iVar16)) {
                if (iVar16 == iVar13) {
                  bVar25 = (int)uVar5 < (int)uVar10;
LAB_14f33abf0:
                  if (!bVar25) goto joined_r0x00014f33aaa2;
                }
                else if (iVar16 <= iVar13 + 1) {
                  bVar25 = (int)uVar5 >> 7 <= (int)uVar10;
                  goto LAB_14f33abf0;
                }
                iVar13 = iVar16;
                uVar10 = uVar5;
              }
            }
          }
        }
      }
      goto joined_r0x00014f33aaa2;
    }
    auVar32._0_8_ = auVar29._0_8_ << 0x20;
    auVar32._8_8_ = auVar29._8_8_ << 0x20 | auVar29._0_8_ >> 0x20;
    auVar28 = ZEXT416(uVar24 & 0x3ffffff | uVar11);
    *pauVar2 = auVar32 | auVar28;
    auVar29._0_8_ = *(ulonglong *)*pauVar4 << 0x20;
    auVar29._8_8_ = *(longlong *)(*pauVar4 + 8) << 0x20 | *(ulonglong *)*pauVar4 >> 0x20;
    *pauVar4 = auVar29 | auVar28;
    if (uVar10 == 0) {
      if (iVar22 < 2) {
        return false;
      }
    }
    else if ((iVar22 < 2) ||
            (((iVar22 + 1 < iVar13 && ((iVar22 + 2 < iVar13 || ((int)uVar10 < 0x400)))) &&
             ((iVar22 + 3 < iVar13 || ((int)uVar10 < 0x10000)))))) {
      param_1->ml = iVar13;
      param_1->off = uVar10;
      return true;
    }
    param_1->ml = iVar22;
    param_1->off = -iVar23;
  }
  else {
    param_1->ml = iVar22;
    param_1->off = -iVar23;
    auVar28._0_8_ = *(ulonglong *)*pauVar2 << 0x20;
    auVar28._8_8_ = *(longlong *)(*pauVar2 + 8) << 0x20 | *(ulonglong *)*pauVar2 >> 0x20;
    auVar29 = ZEXT416((uVar24 ^ uVar11) & 0x3ffffff ^ uVar11);
    *pauVar2 = auVar28 | auVar29;
    auVar27._0_8_ = *(ulonglong *)*pauVar4 << 0x20;
    auVar27._8_8_ = *(longlong *)(*pauVar4 + 8) << 0x20 | *(ulonglong *)*pauVar4 >> 0x20;
    *pauVar4 = auVar27 | auVar29;
  }
  return true;
code_r0x00014f33a819:
  puVar14 = puVar14 + 1;
  if (param_5 + -8 < puVar14) goto LAB_14f33a825;
  goto LAB_14f33a810;
code_r0x00014f33a89e:
  puVar14 = puVar14 + 1;
  if (param_5 + -8 < puVar14) goto LAB_14f33a8a7;
  goto LAB_14f33a895;
code_r0x00014f33a93d:
  puVar14 = puVar14 + 1;
  if (param_5 + -8 < puVar14) goto LAB_14f33a946;
  goto LAB_14f33a930;
code_r0x00014f33ab29:
  puVar12 = puVar12 + 1;
  if (param_5 + -8 < puVar12) goto LAB_14f33ab32;
  goto LAB_14f33ab20;
}

// newLZ_get_match_heuristic<oo2::CTMF<unsigned_int,3,0,4>_> @ 14f33ace0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
oo2::newLZ_get_match_heuristic<oo2::CTMF<unsigned_int,3,0,4>_>
          (match *param_1,CTMF<unsigned_int,3,0,4> *param_2,newLZ_LOs *param_3,uchar *param_4,
          uchar *param_5,int param_6,uchar *param_7,uint param_8,OodleLZ_CompressOptions *param_9)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  ulonglong uVar5;
  byte bVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  uint uVar11;
  ulonglong *puVar12;
  int iVar13;
  ulonglong *puVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar17;
  char *pcVar18;
  int iVar19;
  short sVar20;
  char *pcVar21;
  longlong lVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
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
  uVar1 = param_2->m_next_hash;
  puVar3 = param_2->m_next_row;
  uVar24 = (int)param_4 - *(int *)&param_2->m_base_ptr;
  uVar2 = *(uint *)param_4;
  param_2->m_next_ptr = param_4 + 1;
  bVar6 = (byte)param_2->m_table_size_bits & 0x1f;
  uVar16 = (uint)(param_2->m_hash_mul * *(longlong *)(param_4 + 1) >> 0x20);
  uVar16 = uVar16 << bVar6 | uVar16 >> 0x20 - bVar6;
  param_2->m_next_hash = uVar16;
  param_2->m_next_row = (param_2->m_hash_table).m_ptr + (param_2->m_hash_row_mask & uVar16);
  iVar25 = 0;
  iVar23 = -1;
  iVar19 = 0;
  uVar16 = *(uint *)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[4]);
  sVar20 = (short)uVar2;
  if (sVar20 == (short)uVar16) {
    uVar16 = uVar16 ^ uVar2;
    if (uVar16 == 0) {
      puVar14 = (ulonglong *)(param_4 + 4);
      lVar22 = (longlong)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[4]) -
               (longlong)param_4;
      puVar12 = puVar14;
      if (puVar14 <= param_5 + -8) {
LAB_14f33adb5:
        uVar15 = *(ulonglong *)(lVar22 + (longlong)puVar12) ^ *puVar12;
        if (uVar15 == 0) goto code_r0x00014f33adbe;
        uVar5 = 0;
        if (uVar15 != 0) {
          for (; (uVar15 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
          }
        }
        iVar19 = ((int)(uVar5 >> 3) - (int)puVar14) + (int)puVar12;
        goto LAB_14f33ade6;
      }
LAB_14f33adc7:
      lVar17 = (longlong)puVar12 - (longlong)puVar14;
      iVar19 = (int)lVar17;
      for (; (puVar12 < param_5 &&
             (iVar19 = (int)lVar17, (char)*puVar12 == *(char *)((longlong)puVar12 + lVar22)));
          puVar12 = (ulonglong *)((longlong)puVar12 + 1)) {
        lVar17 = lVar17 + 1;
        iVar19 = (int)lVar17;
      }
LAB_14f33ade6:
      iVar19 = iVar19 + 4;
    }
    else {
      iVar19 = 3 - (uint)((uVar16 & 0xffffff) != 0);
    }
    iVar23 = 0;
  }
  uVar16 = *(uint *)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[5]);
  if (sVar20 == (short)uVar16) {
    uVar16 = uVar16 ^ uVar2;
    if (uVar16 == 0) {
      puVar12 = (ulonglong *)(param_4 + 4);
      lVar22 = (longlong)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[5]) -
               (longlong)param_4;
      puVar14 = puVar12;
      if (puVar12 <= param_5 + -8) {
LAB_14f33ae35:
        uVar15 = *(ulonglong *)(lVar22 + (longlong)puVar14) ^ *puVar14;
        if (uVar15 == 0) goto code_r0x00014f33ae3e;
        uVar5 = 0;
        if (uVar15 != 0) {
          for (; (uVar15 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
          }
        }
        iVar13 = ((int)(uVar5 >> 3) - (int)puVar12) + (int)puVar14;
        goto LAB_14f33ae66;
      }
LAB_14f33ae47:
      lVar17 = (longlong)puVar14 - (longlong)puVar12;
      iVar13 = (int)lVar17;
      for (; (puVar14 < param_5 &&
             (iVar13 = (int)lVar17, (char)*puVar14 == *(char *)(lVar22 + (longlong)puVar14)));
          puVar14 = (ulonglong *)((longlong)puVar14 + 1)) {
        lVar17 = lVar17 + 1;
        iVar13 = (int)lVar17;
      }
LAB_14f33ae66:
      iVar13 = iVar13 + 4;
    }
    else {
      iVar13 = 3 - (uint)((uVar16 & 0xffffff) != 0);
    }
    if (iVar19 < iVar13) {
      iVar23 = 1;
      iVar19 = iVar13;
    }
  }
  uVar16 = *(uint *)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[6]);
  if (sVar20 == (short)uVar16) {
    uVar16 = uVar16 ^ uVar2;
    if (uVar16 == 0) {
      puVar12 = (ulonglong *)(param_4 + 4);
      lVar22 = (longlong)(param_4 + -(ulonglong)(uint)(param_3->lasts).contents[6]) -
               (longlong)param_4;
      puVar14 = puVar12;
      if (puVar12 <= param_5 + -8) {
LAB_14f33aec0:
        uVar15 = *(ulonglong *)(lVar22 + (longlong)puVar14) ^ *puVar14;
        if (uVar15 == 0) goto code_r0x00014f33aec9;
        uVar5 = 0;
        if (uVar15 != 0) {
          for (; (uVar15 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
          }
        }
        iVar13 = ((int)(uVar5 >> 3) - (int)puVar12) + (int)puVar14;
        goto LAB_14f33aef4;
      }
LAB_14f33aed2:
      lVar17 = (longlong)puVar14 - (longlong)puVar12;
      iVar13 = (int)lVar17;
      for (; (puVar14 < param_5 &&
             (iVar13 = (int)lVar17, (char)*puVar14 == *(char *)(lVar22 + (longlong)puVar14)));
          puVar14 = (ulonglong *)((longlong)puVar14 + 1)) {
        lVar17 = lVar17 + 1;
        iVar13 = (int)lVar17;
      }
LAB_14f33aef4:
      iVar13 = iVar13 + 4;
    }
    else {
      iVar13 = 3 - (uint)((uVar16 & 0xffffff) != 0);
    }
    if (iVar19 < iVar13) {
      iVar23 = 2;
      iVar19 = iVar13;
    }
  }
  if (iVar19 < 4) {
    if (0x37 < (longlong)param_4 - (longlong)param_7) {
      iVar13 = 0;
      if (2 < iVar19) {
        iVar13 = iVar19;
      }
      iVar19 = iVar13;
      if (param_6 < 5) {
        param_6 = 5;
      }
    }
    uVar26 = 0;
    uVar11 = uVar1 & 0xfc000000;
    uVar2 = *puVar3;
    uVar16 = puVar3[1];
    uVar8 = puVar3[2];
    uVar9 = puVar3[3];
    local_88 = uVar24 - puVar3[4] & ___xmm_03ffffff03ffffff03ffffff03ffffff;
    uStack_84 = uVar24 - puVar3[5] & _UNK_1531da904;
    uStack_80 = uVar24 - puVar3[6] & _UNK_1531da908;
    uStack_7c = uVar24 - puVar3[7] & _UNK_1531da90c;
    local_98[0] = uVar24 - uVar2 & ___xmm_03ffffff03ffffff03ffffff03ffffff;
    local_98[1] = uVar24 - uVar16 & _UNK_1531da904;
    local_98[2] = uVar24 - uVar8 & _UNK_1531da908;
    local_98[3] = uVar24 - uVar9 & _UNK_1531da90c;
    auVar29._0_4_ = -(uint)((___xmm_fc000000fc000000fc000000fc000000 & uVar2) == uVar11);
    auVar29._4_4_ = -(uint)((_UNK_1531da914 & uVar16) == uVar11);
    auVar29._8_4_ = -(uint)((_UNK_1531da918 & uVar8) == uVar11);
    auVar29._12_4_ = -(uint)((_UNK_1531da91c & uVar9) == uVar11);
    pcVar21 = (char *)(longlong)(param_6 + -1);
    auVar30._0_4_ = -(uint)((___xmm_fc000000fc000000fc000000fc000000 & puVar3[4]) == uVar11);
    auVar30._4_4_ = -(uint)((_UNK_1531da914 & puVar3[5]) == uVar11);
    auVar30._8_4_ = -(uint)((_UNK_1531da918 & puVar3[6]) == uVar11);
    auVar30._12_4_ = -(uint)((_UNK_1531da91c & puVar3[7]) == uVar11);
    auVar30 = packssdw(auVar29,auVar30);
    auVar30 = packsswb(auVar30,ZEXT816(0));
    uVar7 = (ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
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
    uVar11 = (uint)uVar7;
    if (uVar7 != 0) {
      do {
        uVar4 = 0;
        if (uVar11 != 0) {
          for (; (uVar11 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
          }
        }
        uVar11 = uVar11 & uVar11 - 1;
        uVar4 = local_98[uVar4];
        if (uVar4 < param_8) {
          if (uVar4 < 8) {
            uVar4 = 8;
          }
          if (((longlong)pcVar21 < (longlong)param_5 - (longlong)param_4) &&
             (pcVar21[(longlong)param_4] == pcVar21[(longlong)param_4 - (ulonglong)uVar4])) {
            lVar22 = ((longlong)param_4 - (ulonglong)uVar4) - (longlong)param_4;
            puVar12 = (ulonglong *)param_4;
            if (param_4 <= param_5 + -8) {
LAB_14f33b080:
              uVar15 = *(ulonglong *)(lVar22 + (longlong)puVar12) ^ *puVar12;
              if (uVar15 == 0) goto code_r0x00014f33b089;
              uVar5 = 0;
              if (uVar15 != 0) {
                for (; (uVar15 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
                }
              }
              pcVar18 = (char *)(((uVar5 >> 3) - (longlong)param_4) + (longlong)puVar12);
              goto LAB_14f33b0b4;
            }
LAB_14f33b092:
            pcVar18 = (char *)((longlong)puVar12 - (longlong)param_4);
            for (; (puVar12 < param_5 && ((char)*puVar12 == *(char *)(lVar22 + (longlong)puVar12)));
                puVar12 = (ulonglong *)((longlong)puVar12 + 1)) {
              pcVar18 = pcVar18 + 1;
            }
LAB_14f33b0b4:
            if ((longlong)pcVar21 < (longlong)pcVar18) {
              iVar13 = (int)pcVar18;
              pcVar21 = pcVar18;
              if (((param_9->farMatchOffsetLog2 < 1) ||
                  ((int)uVar4 < 1 << ((byte)param_9->farMatchOffsetLog2 & 0x1f))) ||
                 (param_9->farMatchMinLen <= iVar13)) {
                if (0xfffff < (int)uVar4) {
                  if ((int)uVar4 < 0x400000) {
                    if ((int)uVar4 < 0x200000) {
                      bVar28 = SBORROW4(iVar13,5);
                      bVar27 = iVar13 + -5 < 0;
                    }
                    else {
                      bVar28 = SBORROW4(iVar13,6);
                      bVar27 = iVar13 + -6 < 0;
                    }
                  }
                  else {
                    bVar28 = SBORROW4(iVar13,8);
                    bVar27 = iVar13 + -8 < 0;
                  }
                  if (bVar28 != bVar27) goto LAB_14f33b161;
                }
                if (((5 < iVar13) || ((int)uVar4 < max_offset[iVar13])) && (iVar25 <= iVar13)) {
                  if (iVar13 == iVar25) {
                    bVar27 = (int)uVar4 < (int)uVar26;
LAB_14f33b152:
                    if (!bVar27) goto LAB_14f33b161;
                  }
                  else if (iVar13 <= iVar25 + 1) {
                    bVar27 = (int)uVar4 >> 7 <= (int)uVar26;
                    goto LAB_14f33b152;
                  }
                  iVar25 = iVar13;
                  uVar26 = uVar4;
                }
              }
            }
          }
        }
LAB_14f33b161:
      } while (uVar11 != 0);
    }
    uVar10 = *(undefined8 *)(puVar3 + 3);
    puVar3[1] = uVar2;
    puVar3[2] = uVar16;
    puVar3[3] = uVar8;
    puVar3[4] = uVar9;
    *(undefined8 *)(puVar3 + 4) = uVar10;
    *(undefined8 *)(puVar3 + 6) = *(undefined8 *)(puVar3 + 5);
    *puVar3 = (uVar24 ^ uVar1) & 0x3ffffff ^ uVar1;
    if (uVar26 == 0) {
      if (iVar19 < 2) {
        return false;
      }
    }
    else if ((iVar19 < 2) ||
            (((iVar19 + 1 < iVar25 && ((iVar19 + 2 < iVar25 || ((int)uVar26 < 0x400)))) &&
             ((iVar19 + 3 < iVar25 || ((int)uVar26 < 0x10000)))))) {
      param_1->ml = iVar25;
      param_1->off = uVar26;
      return true;
    }
    param_1->ml = iVar19;
    param_1->off = -iVar23;
  }
  else {
    param_1->ml = iVar19;
    param_1->off = -iVar23;
    uVar10 = *(undefined8 *)(puVar3 + 3);
    *(undefined8 *)(puVar3 + 1) = *(undefined8 *)puVar3;
    *(undefined8 *)(puVar3 + 3) = *(undefined8 *)(puVar3 + 2);
    *(undefined8 *)(puVar3 + 4) = uVar10;
    *(undefined8 *)(puVar3 + 6) = *(undefined8 *)(puVar3 + 5);
    *puVar3 = (uVar24 ^ uVar1) & 0x3ffffff ^ uVar1;
  }
  return true;
code_r0x00014f33adbe:
  puVar12 = puVar12 + 1;
  if (param_5 + -8 < puVar12) goto LAB_14f33adc7;
  goto LAB_14f33adb5;
code_r0x00014f33ae3e:
  puVar14 = puVar14 + 1;
  if (param_5 + -8 < puVar14) goto LAB_14f33ae47;
  goto LAB_14f33ae35;
code_r0x00014f33aec9:
  puVar14 = puVar14 + 1;
  if (param_5 + -8 < puVar14) goto LAB_14f33aed2;
  goto LAB_14f33aec0;
code_r0x00014f33b089:
  puVar12 = puVar12 + 1;
  if (param_5 + -8 < puVar12) goto LAB_14f33b092;
  goto LAB_14f33b080;
}

// newLZ_get_match_heuristic_inline<oo2::CTMF<unsigned_int,1,0,4>_> @ 14f33b220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
oo2::newLZ_get_match_heuristic_inline<oo2::CTMF<unsigned_int,1,0,4>_>
          (match *param_1,CTMF<unsigned_int,1,0,4> *param_2,uint param_3,newLZ_LOs *param_4,
          uchar *param_5,uchar *param_6,int param_7,uchar *param_8,uint param_9,bool param_10,
          OodleLZ_CompressOptions *param_11)

{
  uint uVar1;
  uint *puVar2;
  ulonglong uVar3;
  byte bVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  int iVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  char *pcVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  short sVar17;
  uint uVar18;
  char *pcVar19;
  int iVar20;
  bool bVar21;
  bool bVar22;
  undefined1 local_78 [32];
  uint local_58 [4];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)local_78;
  puVar2 = param_2->m_next_row;
  uVar1 = param_2->m_next_hash;
  uVar18 = (int)param_5 - *(int *)&param_2->m_base_ptr;
  uVar15 = *(uint *)param_5;
  param_2->m_next_ptr = param_5 + param_3;
  bVar4 = (byte)param_2->m_table_size_bits & 0x1f;
  uVar10 = (uint)(param_2->m_hash_mul * *(longlong *)(param_5 + param_3) >> 0x20);
  uVar10 = uVar10 << bVar4 | uVar10 >> 0x20 - bVar4;
  param_2->m_next_hash = uVar10;
  param_2->m_next_row = (param_2->m_hash_table).m_ptr + (param_2->m_hash_row_mask & uVar10);
  iVar20 = -1;
  sVar17 = (short)uVar15;
  iVar13 = 0;
  if (param_10) {
    uVar10 = *(uint *)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[4]);
    iVar13 = 0;
    if (sVar17 == (short)uVar10) {
      uVar10 = uVar10 ^ uVar15;
      if (uVar10 == 0) {
        puVar6 = (ulonglong *)(param_5 + 4);
        lVar16 = (longlong)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[4]) -
                 (longlong)param_5;
        puVar8 = puVar6;
        if (puVar6 <= param_6 + -8) {
LAB_14f33b305:
          uVar5 = *(ulonglong *)(lVar16 + (longlong)puVar8) ^ *puVar8;
          if (uVar5 == 0) goto code_r0x00014f33b30e;
          uVar9 = 0;
          if (uVar5 != 0) {
            for (; (uVar5 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
            }
          }
          iVar13 = ((int)(uVar9 >> 3) - (int)puVar6) + (int)puVar8;
          goto LAB_14f33b339;
        }
LAB_14f33b317:
        lVar11 = (longlong)puVar8 - (longlong)puVar6;
        iVar13 = (int)lVar11;
        for (; (puVar8 < param_6 &&
               (iVar13 = (int)lVar11, (char)*puVar8 == *(char *)((longlong)puVar8 + lVar16)));
            puVar8 = (ulonglong *)((longlong)puVar8 + 1)) {
          lVar11 = lVar11 + 1;
          iVar13 = (int)lVar11;
        }
LAB_14f33b339:
        iVar13 = iVar13 + 4;
      }
      else {
        iVar13 = 3 - (uint)((uVar10 & 0xffffff) != 0);
      }
      iVar20 = 0;
    }
  }
  uVar10 = *(uint *)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[5]);
  if (sVar17 == (short)uVar10) {
    uVar10 = uVar10 ^ uVar15;
    if (uVar10 == 0) {
      puVar6 = (ulonglong *)(param_5 + 4);
      lVar16 = (longlong)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[5]) -
               (longlong)param_5;
      puVar8 = puVar6;
      if (puVar6 <= param_6 + -8) {
LAB_14f33b395:
        uVar5 = *(ulonglong *)(lVar16 + (longlong)puVar8) ^ *puVar8;
        if (uVar5 == 0) goto code_r0x00014f33b39e;
        uVar9 = 0;
        if (uVar5 != 0) {
          for (; (uVar5 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
          }
        }
        iVar7 = ((int)(uVar9 >> 3) - (int)puVar6) + (int)puVar8;
        goto LAB_14f33b3c6;
      }
LAB_14f33b3a7:
      lVar11 = (longlong)puVar8 - (longlong)puVar6;
      iVar7 = (int)lVar11;
      for (; (puVar8 < param_6 &&
             (iVar7 = (int)lVar11, (char)*puVar8 == *(char *)((longlong)puVar8 + lVar16)));
          puVar8 = (ulonglong *)((longlong)puVar8 + 1)) {
        lVar11 = lVar11 + 1;
        iVar7 = (int)lVar11;
      }
LAB_14f33b3c6:
      iVar7 = iVar7 + 4;
    }
    else {
      iVar7 = 3 - (uint)((uVar10 & 0xffffff) != 0);
    }
    if (iVar13 < iVar7) {
      iVar20 = 1;
      iVar13 = iVar7;
    }
  }
  uVar10 = *(uint *)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[6]);
  if (sVar17 == (short)uVar10) {
    uVar10 = uVar10 ^ uVar15;
    if (uVar10 == 0) {
      puVar6 = (ulonglong *)(param_5 + 4);
      lVar16 = (longlong)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[6]) -
               (longlong)param_5;
      puVar8 = puVar6;
      if (puVar6 <= param_6 + -8) {
LAB_14f33b430:
        uVar5 = *(ulonglong *)(lVar16 + (longlong)puVar8) ^ *puVar8;
        if (uVar5 == 0) goto code_r0x00014f33b439;
        uVar9 = 0;
        if (uVar5 != 0) {
          for (; (uVar5 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
          }
        }
        iVar7 = ((int)(uVar9 >> 3) - (int)puVar6) + (int)puVar8;
        goto LAB_14f33b465;
      }
LAB_14f33b445:
      lVar11 = (longlong)puVar8 - (longlong)puVar6;
      iVar7 = (int)lVar11;
      for (; (puVar8 < param_6 &&
             (iVar7 = (int)lVar11, (char)*puVar8 == *(char *)((longlong)puVar8 + lVar16)));
          puVar8 = (ulonglong *)((longlong)puVar8 + 1)) {
        lVar11 = lVar11 + 1;
        iVar7 = (int)lVar11;
      }
LAB_14f33b465:
      iVar7 = iVar7 + 4;
    }
    else {
      iVar7 = 3 - (uint)((uVar10 & 0xffffff) != 0);
    }
    if (iVar13 < iVar7) {
      iVar20 = 2;
      iVar13 = iVar7;
    }
  }
  if (3 < iVar13) {
    param_1->ml = iVar13;
    param_1->off = -iVar20;
    puVar2[1] = *puVar2;
    *puVar2 = (uVar18 ^ uVar1) & 0x3ffffff ^ uVar1;
    return true;
  }
  if (0x37 < (longlong)param_5 - (longlong)param_8) {
    iVar7 = 0;
    if (2 < iVar13) {
      iVar7 = iVar13;
    }
    iVar13 = iVar7;
    if (param_7 < 5) {
      param_7 = 5;
    }
  }
  uVar15 = *puVar2;
  uVar5 = 0;
  iVar7 = 0;
  local_58[0] = uVar18 - uVar15 & 0x3ffffff;
  iVar14 = 0;
  local_58[1] = uVar18 - puVar2[1] & 0x3ffffff;
  uVar10 = 0;
  if (((puVar2[1] ^ uVar1) & 0xfc000000) == 0) {
    uVar10 = 2;
  }
  uVar10 = ((uVar15 ^ uVar1) & 0xfc000000) == 0 | uVar10;
  pcVar19 = (char *)(longlong)(param_7 + -1);
  if (uVar10 != 0) {
    do {
      uVar15 = 0;
      if (uVar10 != 0) {
        for (; (uVar10 >> uVar15 & 1) == 0; uVar15 = uVar15 + 1) {
        }
      }
      uVar10 = uVar10 & uVar10 - 1;
      uVar15 = local_58[uVar15];
      if (uVar15 < param_9) {
        if (uVar15 < 8) {
          uVar15 = 8;
        }
        lVar16 = (longlong)param_5 - (ulonglong)uVar15;
        if (((longlong)pcVar19 < (longlong)param_6 - (longlong)param_5) &&
           (param_5[(longlong)pcVar19] == pcVar19[lVar16])) {
          lVar16 = lVar16 - (longlong)param_5;
          puVar6 = (ulonglong *)param_5;
          if (param_5 <= param_6 + -8) {
LAB_14f33b5c0:
            uVar9 = *(ulonglong *)(lVar16 + (longlong)puVar6) ^ *puVar6;
            if (uVar9 == 0) goto code_r0x00014f33b5c9;
            uVar3 = 0;
            if (uVar9 != 0) {
              for (; (uVar9 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
              }
            }
            pcVar12 = (char *)(((uVar3 >> 3) - (longlong)param_5) + (longlong)puVar6);
            goto LAB_14f33b5f4;
          }
LAB_14f33b5d2:
          pcVar12 = (char *)((longlong)puVar6 - (longlong)param_5);
          for (; (puVar6 < param_6 && ((char)*puVar6 == *(char *)(lVar16 + (longlong)puVar6)));
              puVar6 = (ulonglong *)((longlong)puVar6 + 1)) {
            pcVar12 = pcVar12 + 1;
          }
LAB_14f33b5f4:
          if ((longlong)pcVar19 < (longlong)pcVar12) {
            iVar14 = (int)pcVar12;
            pcVar19 = pcVar12;
            if (((param_11->farMatchOffsetLog2 < 1) ||
                ((int)uVar15 < 1 << ((byte)param_11->farMatchOffsetLog2 & 0x1f))) ||
               (param_11->farMatchMinLen <= iVar14)) {
              if (0xfffff < (int)uVar15) {
                if ((int)uVar15 < 0x400000) {
                  if ((int)uVar15 < 0x200000) {
                    bVar22 = SBORROW4(iVar14,5);
                    bVar21 = iVar14 + -5 < 0;
                  }
                  else {
                    bVar22 = SBORROW4(iVar14,6);
                    bVar21 = iVar14 + -6 < 0;
                  }
                }
                else {
                  bVar22 = SBORROW4(iVar14,8);
                  bVar21 = iVar14 + -8 < 0;
                }
                if (bVar22 != bVar21) goto code_r0x00014f33b6a0;
              }
              if (((5 < iVar14) || ((int)uVar15 < max_offset[iVar14])) && (iVar7 <= iVar14)) {
                if (iVar14 == iVar7) {
                  bVar21 = (int)uVar15 < (int)uVar5;
LAB_14f33b690:
                  if (!bVar21) goto code_r0x00014f33b6a0;
                }
                else if (iVar14 <= iVar7 + 1) {
                  bVar21 = (int)uVar15 >> 7 <= (int)uVar5;
                  goto LAB_14f33b690;
                }
                uVar5 = (ulonglong)uVar15;
                iVar7 = iVar14;
              }
            }
          }
        }
      }
code_r0x00014f33b6a0:
      iVar14 = (int)uVar5;
    } while (uVar10 != 0);
    uVar15 = *puVar2;
  }
  puVar2[1] = uVar15;
  *puVar2 = (uVar18 ^ uVar1) & 0x3ffffff ^ uVar1;
  if ((param_10) || (iVar14 != (param_4->lasts).contents[4])) {
    if (iVar14 == 0) {
      if (iVar13 < 2) {
        return false;
      }
    }
    else if ((iVar13 < 2) ||
            (((iVar13 + 1 < iVar7 && ((iVar13 + 2 < iVar7 || (iVar14 < 0x400)))) &&
             ((iVar13 + 3 < iVar7 || (iVar14 < 0x10000)))))) {
      param_1->off = iVar14;
      goto LAB_14f33b741;
    }
    param_1->ml = iVar13;
    param_1->off = -iVar20;
  }
  else {
    param_1->off = 0;
LAB_14f33b741:
    param_1->ml = iVar7;
  }
  return true;
code_r0x00014f33b30e:
  puVar8 = puVar8 + 1;
  if (param_6 + -8 < puVar8) goto LAB_14f33b317;
  goto LAB_14f33b305;
code_r0x00014f33b39e:
  puVar8 = puVar8 + 1;
  if (param_6 + -8 < puVar8) goto LAB_14f33b3a7;
  goto LAB_14f33b395;
code_r0x00014f33b439:
  puVar8 = puVar8 + 1;
  if (param_6 + -8 < puVar8) goto LAB_14f33b445;
  goto LAB_14f33b430;
code_r0x00014f33b5c9:
  puVar6 = puVar6 + 1;
  if (param_6 + -8 < puVar6) goto LAB_14f33b5d2;
  goto LAB_14f33b5c0;
}

// newLZ_get_match_heuristic_inline<oo2::CTMF<unsigned_int,2,8,4>_> @ 14f33b780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014f33bcc9) */
/* WARNING: Removing unreachable block (ram,0x00014f33ba55) */
/* WARNING: Removing unreachable block (ram,0x00014f33ba3e) */
/* WARNING: Removing unreachable block (ram,0x00014f33bce7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
oo2::newLZ_get_match_heuristic_inline<oo2::CTMF<unsigned_int,2,8,4>_>
          (match *param_1,CTMF<unsigned_int,2,8,4> *param_2,uint param_3,newLZ_LOs *param_4,
          uchar *param_5,uchar *param_6,int param_7,uchar *param_8,uint param_9,bool param_10,
          OodleLZ_CompressOptions *param_11)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  uint *puVar3;
  uint uVar4;
  ulonglong uVar5;
  byte bVar6;
  ushort uVar7;
  char *pcVar8;
  uint uVar9;
  ulonglong *puVar10;
  int iVar11;
  uint uVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  char *pcVar17;
  short sVar18;
  uint uVar19;
  longlong lVar20;
  longlong *plVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
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
  pauVar1 = (undefined1 (*) [16])param_2->m_next_row;
  uVar12 = param_2->m_next_hash;
  pauVar2 = (undefined1 (*) [16])param_2->m_next_row_second;
  uVar23 = (int)param_5 - *(int *)&param_2->m_base_ptr;
  uVar19 = *(uint *)param_5;
  plVar21 = (longlong *)(param_5 + param_3);
  puVar3 = (param_2->m_hash_table).m_ptr;
  param_2->m_next_ptr = (uchar *)plVar21;
  bVar6 = (byte)param_2->m_table_size_bits & 0x1f;
  uVar9 = (uint)(param_2->m_hash_mul * *plVar21 >> 0x20);
  uVar9 = uVar9 << bVar6 | uVar9 >> 0x20 - bVar6;
  param_2->m_next_hash = uVar9;
  param_2->m_next_row = puVar3 + (param_2->m_hash_row_mask & uVar9);
  param_2->m_next_row_second =
       puVar3 + ((ulonglong)(*plVar21 * -0x30e44323485a9b9d) >>
                 (0x40U - (char)param_2->m_table_size_bits & 0x3f) & 0xfffffffffffffffc);
  iVar24 = -1;
  sVar18 = (short)uVar19;
  iVar22 = 0;
  if (param_10) {
    uVar9 = *(uint *)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[4]);
    iVar22 = 0;
    if (sVar18 == (short)uVar9) {
      uVar9 = uVar9 ^ uVar19;
      if (uVar9 == 0) {
        puVar10 = (ulonglong *)(param_5 + 4);
        lVar20 = (longlong)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[4]) -
                 (longlong)param_5;
        puVar13 = puVar10;
        if (puVar10 <= param_6 + -8) {
LAB_14f33b8a5:
          uVar14 = *(ulonglong *)(lVar20 + (longlong)puVar13) ^ *puVar13;
          if (uVar14 == 0) goto code_r0x00014f33b8ae;
          uVar5 = 0;
          if (uVar14 != 0) {
            for (; (uVar14 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
            }
          }
          iVar22 = ((int)(uVar5 >> 3) - (int)puVar10) + (int)puVar13;
          goto LAB_14f33b8d9;
        }
LAB_14f33b8b7:
        lVar16 = (longlong)puVar13 - (longlong)puVar10;
        iVar22 = (int)lVar16;
        for (; (puVar13 < param_6 &&
               (iVar22 = (int)lVar16, (char)*puVar13 == *(char *)(lVar20 + (longlong)puVar13)));
            puVar13 = (ulonglong *)((longlong)puVar13 + 1)) {
          lVar16 = lVar16 + 1;
          iVar22 = (int)lVar16;
        }
LAB_14f33b8d9:
        iVar22 = iVar22 + 4;
      }
      else {
        iVar22 = 3 - (uint)((uVar9 & 0xffffff) != 0);
      }
      iVar24 = 0;
    }
  }
  uVar9 = *(uint *)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[5]);
  if (sVar18 == (short)uVar9) {
    uVar9 = uVar9 ^ uVar19;
    if (uVar9 == 0) {
      puVar10 = (ulonglong *)(param_5 + 4);
      lVar20 = (longlong)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[5]) -
               (longlong)param_5;
      puVar13 = puVar10;
      if (puVar10 <= param_6 + -8) {
LAB_14f33b930:
        uVar14 = *(ulonglong *)(lVar20 + (longlong)puVar13) ^ *puVar13;
        if (uVar14 == 0) goto code_r0x00014f33b939;
        uVar5 = 0;
        if (uVar14 != 0) {
          for (; (uVar14 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
          }
        }
        iVar11 = ((int)(uVar5 >> 3) - (int)puVar10) + (int)puVar13;
        goto LAB_14f33b965;
      }
LAB_14f33b945:
      lVar16 = (longlong)puVar13 - (longlong)puVar10;
      iVar11 = (int)lVar16;
      for (; (puVar13 < param_6 &&
             (iVar11 = (int)lVar16, (char)*puVar13 == *(char *)(lVar20 + (longlong)puVar13)));
          puVar13 = (ulonglong *)((longlong)puVar13 + 1)) {
        lVar16 = lVar16 + 1;
        iVar11 = (int)lVar16;
      }
LAB_14f33b965:
      iVar11 = iVar11 + 4;
    }
    else {
      iVar11 = 3 - (uint)((uVar9 & 0xffffff) != 0);
    }
    if (iVar22 < iVar11) {
      iVar24 = 1;
      iVar22 = iVar11;
    }
  }
  uVar9 = *(uint *)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[6]);
  if (sVar18 == (short)uVar9) {
    uVar9 = uVar9 ^ uVar19;
    if (uVar9 == 0) {
      puVar10 = (ulonglong *)(param_5 + 4);
      lVar20 = (longlong)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[6]) -
               (longlong)param_5;
      puVar13 = puVar10;
      if (puVar10 <= param_6 + -8) {
LAB_14f33b9d0:
        uVar14 = *(ulonglong *)(lVar20 + (longlong)puVar13) ^ *puVar13;
        if (uVar14 == 0) goto code_r0x00014f33b9dd;
        uVar5 = 0;
        if (uVar14 != 0) {
          for (; (uVar14 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
          }
        }
        iVar11 = ((int)(uVar5 >> 3) - (int)puVar10) + (int)puVar13;
        goto LAB_14f33ba05;
      }
LAB_14f33b9e6:
      lVar16 = (longlong)puVar13 - (longlong)puVar10;
      iVar11 = (int)lVar16;
      for (; (puVar13 < param_6 &&
             (iVar11 = (int)lVar16, (char)*puVar13 == *(char *)(lVar20 + (longlong)puVar13)));
          puVar13 = (ulonglong *)((longlong)puVar13 + 1)) {
        lVar16 = lVar16 + 1;
        iVar11 = (int)lVar16;
      }
LAB_14f33ba05:
      iVar11 = iVar11 + 4;
    }
    else {
      iVar11 = 3 - (uint)((uVar9 & 0xffffff) != 0);
    }
    if (iVar22 < iVar11) {
      iVar24 = 2;
      iVar22 = iVar11;
    }
  }
  if (3 < iVar22) {
    param_1->ml = iVar22;
    param_1->off = -iVar24;
    auVar29._0_8_ = *(ulonglong *)*pauVar1 << 0x20;
    auVar29._8_8_ = *(longlong *)(*pauVar1 + 8) << 0x20 | *(ulonglong *)*pauVar1 >> 0x20;
    auVar30 = ZEXT416((uVar23 ^ uVar12) & 0x3ffffff ^ uVar12);
    *pauVar1 = auVar29 | auVar30;
    auVar28._0_8_ = *(ulonglong *)*pauVar2 << 0x20;
    auVar28._8_8_ = *(longlong *)(*pauVar2 + 8) << 0x20 | *(ulonglong *)*pauVar2 >> 0x20;
    *pauVar2 = auVar28 | auVar30;
    return true;
  }
  if (0x37 < (longlong)param_5 - (longlong)param_8) {
    iVar11 = 0;
    if (2 < iVar22) {
      iVar11 = iVar22;
    }
    iVar22 = iVar11;
    if (param_7 < 5) {
      param_7 = 5;
    }
  }
  auVar29 = *pauVar2;
  uVar12 = uVar12 & 0xfc000000;
  local_58 = uVar23 - auVar29._0_4_ & ___xmm_03ffffff03ffffff03ffffff03ffffff;
  uStack_54 = uVar23 - auVar29._4_4_ & _UNK_1531da904;
  uStack_50 = uVar23 - auVar29._8_4_ & _UNK_1531da908;
  uStack_4c = uVar23 - auVar29._12_4_ & _UNK_1531da90c;
  auVar29 = ___xmm_fc000000fc000000fc000000fc000000 & auVar29;
  auVar28 = *pauVar1;
  auVar30 = ___xmm_fc000000fc000000fc000000fc000000 & auVar28;
  local_68[0] = uVar23 - auVar28._0_4_ & ___xmm_03ffffff03ffffff03ffffff03ffffff;
  local_68[1] = uVar23 - auVar28._4_4_ & _UNK_1531da904;
  local_68[2] = uVar23 - auVar28._8_4_ & _UNK_1531da908;
  local_68[3] = uVar23 - auVar28._12_4_ & _UNK_1531da90c;
  auVar31._0_4_ = -(uint)(auVar30._0_4_ == uVar12);
  auVar31._4_4_ = -(uint)(auVar30._4_4_ == uVar12);
  auVar31._8_4_ = -(uint)(auVar30._8_4_ == uVar12);
  auVar31._12_4_ = -(uint)(auVar30._12_4_ == uVar12);
  auVar30._0_4_ = -(uint)(auVar29._0_4_ == uVar12);
  auVar30._4_4_ = -(uint)(auVar29._4_4_ == uVar12);
  auVar30._8_4_ = -(uint)(auVar29._8_4_ == uVar12);
  auVar30._12_4_ = -(uint)(auVar29._12_4_ == uVar12);
  auVar29 = packssdw(auVar31,auVar30);
  auVar29 = packsswb(auVar29,ZEXT816(0));
  uVar7 = (ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
          (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
          (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
          (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar29[0xf] >> 7) << 0xf;
  uVar19 = (uint)uVar7;
  if (pauVar1 == pauVar2) {
    uVar19 = uVar7 & 0xf;
  }
  iVar11 = 0;
  uVar9 = 0;
  pcVar8 = (char *)(longlong)(param_7 + -1);
joined_r0x00014f33bb46:
  if (uVar19 != 0) {
    uVar4 = 0;
    if (uVar19 != 0) {
      for (; (uVar19 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
      }
    }
    uVar19 = uVar19 & uVar19 - 1;
    uVar4 = local_68[uVar4];
    if (uVar4 < param_9) {
      if (uVar4 < 8) {
        uVar4 = 8;
      }
      if (((longlong)pcVar8 < (longlong)param_6 - (longlong)param_5) &&
         (param_5[(longlong)pcVar8] == pcVar8[(longlong)param_5 - (ulonglong)uVar4])) {
        lVar20 = ((longlong)param_5 - (ulonglong)uVar4) - (longlong)param_5;
        puVar10 = (ulonglong *)param_5;
        if (param_5 <= param_6 + -8) {
LAB_14f33bbc0:
          uVar14 = *(ulonglong *)(lVar20 + (longlong)puVar10) ^ *puVar10;
          if (uVar14 == 0) goto code_r0x00014f33bbc9;
          uVar5 = 0;
          if (uVar14 != 0) {
            for (; (uVar14 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
            }
          }
          pcVar17 = (char *)(((uVar5 >> 3) - (longlong)param_5) + (longlong)puVar10);
          goto LAB_14f33bbf4;
        }
LAB_14f33bbd2:
        pcVar17 = (char *)((longlong)puVar10 - (longlong)param_5);
        for (; (puVar10 < param_6 && ((char)*puVar10 == *(char *)(lVar20 + (longlong)puVar10)));
            puVar10 = (ulonglong *)((longlong)puVar10 + 1)) {
          pcVar17 = pcVar17 + 1;
        }
LAB_14f33bbf4:
        if ((longlong)pcVar8 < (longlong)pcVar17) {
          iVar15 = (int)pcVar17;
          pcVar8 = pcVar17;
          if (((param_11->farMatchOffsetLog2 < 1) ||
              ((int)uVar4 < 1 << ((byte)param_11->farMatchOffsetLog2 & 0x1f))) ||
             (param_11->farMatchMinLen <= iVar15)) {
            if (0xfffff < (int)uVar4) {
              if ((int)uVar4 < 0x400000) {
                if ((int)uVar4 < 0x200000) {
                  bVar26 = SBORROW4(iVar15,5);
                  bVar25 = iVar15 + -5 < 0;
                }
                else {
                  bVar26 = SBORROW4(iVar15,6);
                  bVar25 = iVar15 + -6 < 0;
                }
              }
              else {
                bVar26 = SBORROW4(iVar15,8);
                bVar25 = iVar15 + -8 < 0;
              }
              if (bVar26 != bVar25) goto joined_r0x00014f33bb46;
            }
            if (((5 < iVar15) || ((int)uVar4 < max_offset[iVar15])) && (iVar11 <= iVar15)) {
              if (iVar15 == iVar11) {
                bVar25 = (int)uVar4 < (int)uVar9;
LAB_14f33bc8f:
                if (!bVar25) goto joined_r0x00014f33bb46;
              }
              else if (iVar15 <= iVar11 + 1) {
                bVar25 = (int)uVar4 >> 7 <= (int)uVar9;
                goto LAB_14f33bc8f;
              }
              iVar11 = iVar15;
              uVar9 = uVar4;
            }
          }
        }
      }
    }
    goto joined_r0x00014f33bb46;
  }
  auVar32._0_8_ = auVar28._0_8_ << 0x20;
  auVar32._8_8_ = auVar28._8_8_ << 0x20 | auVar28._0_8_ >> 0x20;
  auVar29 = ZEXT416(uVar23 & 0x3ffffff | uVar12);
  *pauVar1 = auVar32 | auVar29;
  auVar27._0_8_ = *(ulonglong *)*pauVar2 << 0x20;
  auVar27._8_8_ = *(longlong *)(*pauVar2 + 8) << 0x20 | *(ulonglong *)*pauVar2 >> 0x20;
  *pauVar2 = auVar27 | auVar29;
  if ((param_10) || (uVar9 != (param_4->lasts).contents[4])) {
    if (uVar9 == 0) {
      if (iVar22 < 2) {
        return false;
      }
    }
    else if ((iVar22 < 2) ||
            (((iVar22 + 1 < iVar11 && ((iVar22 + 2 < iVar11 || ((int)uVar9 < 0x400)))) &&
             ((iVar22 + 3 < iVar11 || ((int)uVar9 < 0x10000)))))) {
      param_1->off = uVar9;
      goto LAB_14f33bd61;
    }
    param_1->ml = iVar22;
    param_1->off = -iVar24;
  }
  else {
    param_1->off = 0;
LAB_14f33bd61:
    param_1->ml = iVar11;
  }
  return true;
code_r0x00014f33b8ae:
  puVar13 = puVar13 + 1;
  if (param_6 + -8 < puVar13) goto LAB_14f33b8b7;
  goto LAB_14f33b8a5;
code_r0x00014f33b939:
  puVar13 = puVar13 + 1;
  if (param_6 + -8 < puVar13) goto LAB_14f33b945;
  goto LAB_14f33b930;
code_r0x00014f33b9dd:
  puVar13 = puVar13 + 1;
  if (param_6 + -8 < puVar13) goto LAB_14f33b9e6;
  goto LAB_14f33b9d0;
code_r0x00014f33bbc9:
  puVar10 = puVar10 + 1;
  if (param_6 + -8 < puVar10) goto LAB_14f33bbd2;
  goto LAB_14f33bbc0;
}

// newLZ_get_match_heuristic_inline<oo2::CTMF<unsigned_int,3,0,4>_> @ 14f33bda0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
oo2::newLZ_get_match_heuristic_inline<oo2::CTMF<unsigned_int,3,0,4>_>
          (match *param_1,CTMF<unsigned_int,3,0,4> *param_2,uint param_3,newLZ_LOs *param_4,
          uchar *param_5,uchar *param_6,int param_7,uchar *param_8,uint param_9,bool param_10,
          OodleLZ_CompressOptions *param_11)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  ulonglong uVar5;
  byte bVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  int iVar14;
  ulonglong *puVar15;
  ulonglong uVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  char *pcVar20;
  short sVar21;
  char *pcVar22;
  int iVar23;
  longlong lVar24;
  int iVar25;
  uint uVar27;
  int iVar28;
  bool bVar29;
  bool bVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 local_a8 [32];
  uint local_88 [4];
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  ulonglong local_48;
  ulonglong uVar26;
  
  local_48 = __security_cookie.value ^ (ulonglong)local_a8;
  puVar3 = param_2->m_next_row;
  uVar1 = param_2->m_next_hash;
  uVar27 = (int)param_5 - *(int *)&param_2->m_base_ptr;
  uVar2 = *(uint *)param_5;
  param_2->m_next_ptr = param_5 + param_3;
  bVar6 = (byte)param_2->m_table_size_bits & 0x1f;
  uVar17 = (uint)(param_2->m_hash_mul * *(longlong *)(param_5 + param_3) >> 0x20);
  uVar17 = uVar17 << bVar6 | uVar17 >> 0x20 - bVar6;
  param_2->m_next_hash = uVar17;
  param_2->m_next_row = (param_2->m_hash_table).m_ptr + (param_2->m_hash_row_mask & uVar17);
  iVar28 = -1;
  sVar21 = (short)uVar2;
  iVar23 = 0;
  if (param_10) {
    uVar17 = *(uint *)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[4]);
    iVar23 = 0;
    if (sVar21 == (short)uVar17) {
      uVar17 = uVar17 ^ uVar2;
      if (uVar17 == 0) {
        puVar13 = (ulonglong *)(param_5 + 4);
        lVar24 = (longlong)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[4]) -
                 (longlong)param_5;
        puVar15 = puVar13;
        if (puVar13 <= param_6 + -8) {
LAB_14f33be85:
          uVar12 = *(ulonglong *)(lVar24 + (longlong)puVar15) ^ *puVar15;
          if (uVar12 == 0) goto code_r0x00014f33be8e;
          uVar26 = 0;
          if (uVar12 != 0) {
            for (; (uVar12 >> uVar26 & 1) == 0; uVar26 = uVar26 + 1) {
            }
          }
          iVar23 = ((int)(uVar26 >> 3) - (int)puVar13) + (int)puVar15;
          goto LAB_14f33beb9;
        }
LAB_14f33be97:
        lVar19 = (longlong)puVar15 - (longlong)puVar13;
        iVar23 = (int)lVar19;
        for (; (puVar15 < param_6 &&
               (iVar23 = (int)lVar19, (char)*puVar15 == *(char *)((longlong)puVar15 + lVar24)));
            puVar15 = (ulonglong *)((longlong)puVar15 + 1)) {
          lVar19 = lVar19 + 1;
          iVar23 = (int)lVar19;
        }
LAB_14f33beb9:
        iVar23 = iVar23 + 4;
      }
      else {
        iVar23 = 3 - (uint)((uVar17 & 0xffffff) != 0);
      }
      iVar28 = 0;
    }
  }
  uVar17 = *(uint *)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[5]);
  if (sVar21 == (short)uVar17) {
    uVar17 = uVar17 ^ uVar2;
    if (uVar17 == 0) {
      puVar13 = (ulonglong *)(param_5 + 4);
      lVar24 = (longlong)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[5]) -
               (longlong)param_5;
      puVar15 = puVar13;
      if (puVar13 <= param_6 + -8) {
LAB_14f33bf10:
        uVar12 = *(ulonglong *)(lVar24 + (longlong)puVar15) ^ *puVar15;
        if (uVar12 == 0) goto code_r0x00014f33bf19;
        uVar26 = 0;
        if (uVar12 != 0) {
          for (; (uVar12 >> uVar26 & 1) == 0; uVar26 = uVar26 + 1) {
          }
        }
        iVar14 = ((int)(uVar26 >> 3) - (int)puVar13) + (int)puVar15;
        goto LAB_14f33bf45;
      }
LAB_14f33bf25:
      lVar19 = (longlong)puVar15 - (longlong)puVar13;
      iVar14 = (int)lVar19;
      for (; (puVar15 < param_6 &&
             (iVar14 = (int)lVar19, (char)*puVar15 == *(char *)((longlong)puVar15 + lVar24)));
          puVar15 = (ulonglong *)((longlong)puVar15 + 1)) {
        lVar19 = lVar19 + 1;
        iVar14 = (int)lVar19;
      }
LAB_14f33bf45:
      iVar14 = iVar14 + 4;
    }
    else {
      iVar14 = 3 - (uint)((uVar17 & 0xffffff) != 0);
    }
    if (iVar23 < iVar14) {
      iVar28 = 1;
      iVar23 = iVar14;
    }
  }
  uVar17 = *(uint *)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[6]);
  if (sVar21 == (short)uVar17) {
    uVar17 = uVar17 ^ uVar2;
    if (uVar17 == 0) {
      puVar13 = (ulonglong *)(param_5 + 4);
      lVar24 = (longlong)(param_5 + -(ulonglong)(uint)(param_4->lasts).contents[6]) -
               (longlong)param_5;
      puVar15 = puVar13;
      if (puVar13 <= param_6 + -8) {
LAB_14f33bfb0:
        uVar12 = *(ulonglong *)(lVar24 + (longlong)puVar15) ^ *puVar15;
        if (uVar12 == 0) goto code_r0x00014f33bfbd;
        uVar26 = 0;
        if (uVar12 != 0) {
          for (; (uVar12 >> uVar26 & 1) == 0; uVar26 = uVar26 + 1) {
          }
        }
        iVar14 = ((int)(uVar26 >> 3) - (int)puVar13) + (int)puVar15;
        goto LAB_14f33bfe5;
      }
LAB_14f33bfc6:
      lVar19 = (longlong)puVar15 - (longlong)puVar13;
      iVar14 = (int)lVar19;
      for (; (puVar15 < param_6 &&
             (iVar14 = (int)lVar19, (char)*puVar15 == *(char *)(lVar24 + (longlong)puVar15)));
          puVar15 = (ulonglong *)((longlong)puVar15 + 1)) {
        lVar19 = lVar19 + 1;
        iVar14 = (int)lVar19;
      }
LAB_14f33bfe5:
      iVar14 = iVar14 + 4;
    }
    else {
      iVar14 = 3 - (uint)((uVar17 & 0xffffff) != 0);
    }
    if (iVar23 < iVar14) {
      iVar28 = 2;
      iVar23 = iVar14;
    }
  }
  if (3 < iVar23) {
    param_1->ml = iVar23;
    param_1->off = -iVar28;
    uVar10 = *(undefined8 *)(puVar3 + 3);
    *(undefined8 *)(puVar3 + 1) = *(undefined8 *)puVar3;
    *(undefined8 *)(puVar3 + 3) = *(undefined8 *)(puVar3 + 2);
    *(undefined8 *)(puVar3 + 4) = uVar10;
    *(undefined8 *)(puVar3 + 6) = *(undefined8 *)(puVar3 + 5);
    *puVar3 = (uVar27 ^ uVar1) & 0x3ffffff ^ uVar1;
    return true;
  }
  if (0x37 < (longlong)param_5 - (longlong)param_8) {
    iVar14 = 0;
    if (2 < iVar23) {
      iVar14 = iVar23;
    }
    iVar23 = iVar14;
    if (param_7 < 5) {
      param_7 = 5;
    }
  }
  uVar2 = *puVar3;
  uVar17 = puVar3[1];
  uVar8 = puVar3[2];
  uVar9 = puVar3[3];
  iVar14 = 0;
  uVar11 = uVar1 & 0xfc000000;
  uVar12 = 0;
  iVar25 = 0;
  local_78 = uVar27 - puVar3[4] & ___xmm_03ffffff03ffffff03ffffff03ffffff;
  uStack_74 = uVar27 - puVar3[5] & _UNK_1531da904;
  uStack_70 = uVar27 - puVar3[6] & _UNK_1531da908;
  uStack_6c = uVar27 - puVar3[7] & _UNK_1531da90c;
  local_88[0] = uVar27 - uVar2 & ___xmm_03ffffff03ffffff03ffffff03ffffff;
  local_88[1] = uVar27 - uVar17 & _UNK_1531da904;
  local_88[2] = uVar27 - uVar8 & _UNK_1531da908;
  local_88[3] = uVar27 - uVar9 & _UNK_1531da90c;
  auVar31._0_4_ = -(uint)((___xmm_fc000000fc000000fc000000fc000000 & uVar2) == uVar11);
  auVar31._4_4_ = -(uint)((_UNK_1531da914 & uVar17) == uVar11);
  auVar31._8_4_ = -(uint)((_UNK_1531da918 & uVar8) == uVar11);
  auVar31._12_4_ = -(uint)((_UNK_1531da91c & uVar9) == uVar11);
  pcVar22 = (char *)(longlong)(param_7 + -1);
  auVar32._0_4_ = -(uint)((___xmm_fc000000fc000000fc000000fc000000 & puVar3[4]) == uVar11);
  auVar32._4_4_ = -(uint)((_UNK_1531da914 & puVar3[5]) == uVar11);
  auVar32._8_4_ = -(uint)((_UNK_1531da918 & puVar3[6]) == uVar11);
  auVar32._12_4_ = -(uint)((_UNK_1531da91c & puVar3[7]) == uVar11);
  auVar32 = packssdw(auVar31,auVar32);
  auVar32 = packsswb(auVar32,ZEXT816(0));
  uVar7 = (ushort)(SUB161(auVar32 >> 7,0) & 1) | (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
          (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
          (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
          (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar32[0xf] >> 7) << 0xf;
  uVar11 = (uint)uVar7;
  if (uVar7 != 0) {
    do {
      uVar4 = 0;
      if (uVar11 != 0) {
        for (; (uVar11 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
        }
      }
      uVar11 = uVar11 & uVar11 - 1;
      uVar4 = local_88[uVar4];
      if (uVar4 < param_9) {
        uVar26 = (ulonglong)uVar4;
        if (uVar4 < 8) {
          uVar26 = 8;
        }
        iVar25 = (int)uVar26;
        if (((longlong)pcVar22 < (longlong)param_6 - (longlong)param_5) &&
           (param_5[(longlong)pcVar22] == pcVar22[(longlong)param_5 - uVar26])) {
          lVar24 = ((longlong)param_5 - uVar26) - (longlong)param_5;
          puVar13 = (ulonglong *)param_5;
          if (param_5 <= param_6 + -8) {
LAB_14f33c180:
            uVar16 = *(ulonglong *)(lVar24 + (longlong)puVar13) ^ *puVar13;
            if (uVar16 == 0) goto code_r0x00014f33c189;
            uVar5 = 0;
            if (uVar16 != 0) {
              for (; (uVar16 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
              }
            }
            pcVar20 = (char *)(((uVar5 >> 3) - (longlong)param_5) + (longlong)puVar13);
            goto LAB_14f33c1b4;
          }
LAB_14f33c192:
          pcVar20 = (char *)((longlong)puVar13 - (longlong)param_5);
          for (; (puVar13 < param_6 && ((char)*puVar13 == *(char *)(lVar24 + (longlong)puVar13)));
              puVar13 = (ulonglong *)((longlong)puVar13 + 1)) {
            pcVar20 = pcVar20 + 1;
          }
LAB_14f33c1b4:
          if ((longlong)pcVar22 < (longlong)pcVar20) {
            iVar18 = (int)pcVar20;
            pcVar22 = pcVar20;
            if (((param_11->farMatchOffsetLog2 < 1) ||
                (iVar25 < 1 << ((byte)param_11->farMatchOffsetLog2 & 0x1f))) ||
               (param_11->farMatchMinLen <= iVar18)) {
              if (0xfffff < iVar25) {
                if (iVar25 < 0x400000) {
                  if (iVar25 < 0x200000) {
                    bVar30 = SBORROW4(iVar18,5);
                    bVar29 = iVar18 + -5 < 0;
                  }
                  else {
                    bVar30 = SBORROW4(iVar18,6);
                    bVar29 = iVar18 + -6 < 0;
                  }
                }
                else {
                  bVar30 = SBORROW4(iVar18,8);
                  bVar29 = iVar18 + -8 < 0;
                }
                if (bVar30 != bVar29) goto code_r0x00014f33c260;
              }
              if (((5 < iVar18) || (iVar25 < max_offset[iVar18])) && (iVar14 <= iVar18)) {
                if (iVar18 == iVar14) {
                  bVar29 = iVar25 < (int)uVar12;
LAB_14f33c24f:
                  if (!bVar29) goto code_r0x00014f33c260;
                }
                else if (iVar18 <= iVar14 + 1) {
                  bVar29 = iVar25 >> 7 <= (int)uVar12;
                  goto LAB_14f33c24f;
                }
                uVar12 = uVar26;
                iVar14 = iVar18;
              }
            }
          }
        }
      }
code_r0x00014f33c260:
      iVar25 = (int)uVar12;
    } while (uVar11 != 0);
  }
  uVar10 = *(undefined8 *)(puVar3 + 3);
  puVar3[1] = uVar2;
  puVar3[2] = uVar17;
  puVar3[3] = uVar8;
  puVar3[4] = uVar9;
  *(undefined8 *)(puVar3 + 4) = uVar10;
  *(undefined8 *)(puVar3 + 6) = *(undefined8 *)(puVar3 + 5);
  *puVar3 = (uVar27 ^ uVar1) & 0x3ffffff ^ uVar1;
  if ((param_10) || (iVar25 != (param_4->lasts).contents[4])) {
    if (iVar25 == 0) {
      if (iVar23 < 2) {
        return false;
      }
    }
    else if ((iVar23 < 2) ||
            (((iVar23 + 1 < iVar14 && ((iVar23 + 2 < iVar14 || (iVar25 < 0x400)))) &&
             ((iVar23 + 3 < iVar14 || (iVar25 < 0x10000)))))) {
      param_1->off = iVar25;
      goto LAB_14f33c30c;
    }
    param_1->ml = iVar23;
    param_1->off = -iVar28;
  }
  else {
    param_1->off = 0;
LAB_14f33c30c:
    param_1->ml = iVar14;
  }
  return true;
code_r0x00014f33be8e:
  puVar15 = puVar15 + 1;
  if (param_6 + -8 < puVar15) goto LAB_14f33be97;
  goto LAB_14f33be85;
code_r0x00014f33bf19:
  puVar15 = puVar15 + 1;
  if (param_6 + -8 < puVar15) goto LAB_14f33bf25;
  goto LAB_14f33bf10;
code_r0x00014f33bfbd:
  puVar15 = puVar15 + 1;
  if (param_6 + -8 < puVar15) goto LAB_14f33bfc6;
  goto LAB_14f33bfb0;
code_r0x00014f33c189:
  puVar13 = puVar13 + 1;
  if (param_6 + -8 < puVar13) goto LAB_14f33c192;
  goto LAB_14f33c180;
}

// newlz_literals_copy8<1> @ 14f33c340

void __cdecl
oo2::`anonymous_namespace'::newlz_literals_copy8<1>(uchar *param_1,uchar *param_2,uchar *param_3)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_3;
  return;
}

// newlz_literals_copy8<0> @ 14f33c350

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

// newlz_vtable_setup_ctmf<oo2::CTMF<unsigned_int,1,0,4>_> @ 14f33c380

/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

void __cdecl
oo2::newlz_vtable_setup_ctmf<oo2::CTMF<unsigned_int,1,0,4>_>
          (newlz_vtable *param_1,uchar *param_2,uchar *param_3,int param_4,rrArenaAllocator *param_5
          ,int param_6)

{
  void *pvVar1;
  OodleLZ_CompressOptions *pOVar2;
  int iVar3;
  CTMF<unsigned_int,1,0,4> *pCVar4;
  code *pcVar5;
  CTMF<unsigned_int,1,0,4> *this;
  ulong64 uVar6;
  ulonglong *puVar7;
  CTMF<unsigned_int,1,0,4> *pCVar8;
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
  this = (CTMF<unsigned_int,1,0,4> *)param_5->m_cur;
  uVar11 = (ulonglong)(-(uint)(param_5->m_unorderedStart != 0) & 0x10);
  if (param_5->m_size + param_5->m_base < (longlong)&this[1].m_hash_table_arena + uVar11) {
LAB_14f33c46d:
    this = (*g_fp_OodleCore_Plugin_MallocAligned)(0x50,0x10);
    if (this == (CTMF<unsigned_int,1,0,4> *)0x0) {
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
    pcVar5 = void_deletor<oo2::CTMF<unsigned_int,1,0,4>_>;
  }
  else {
    pCVar8 = this + 1;
    param_5->m_cur = (ulong64)pCVar8;
    if (param_5->m_unorderedStart != 0) {
      pCVar8->m_hash_table_arena = (rrArenaAllocator *)0x50;
      this[1].m_hash_table.m_ptr = (uint *)0x0;
      param_5->m_cur = param_5->m_cur + uVar11;
      pCVar8 = (CTMF<unsigned_int,1,0,4> *)param_5->m_cur;
    }
    pCVar4 = (CTMF<unsigned_int,1,0,4> *)param_5->m_cur_max;
    if ((CTMF<unsigned_int,1,0,4> *)param_5->m_cur_max <= pCVar8) {
      pCVar4 = pCVar8;
    }
    param_5->m_cur_max = (ulong64)pCVar4;
    if (this == (CTMF<unsigned_int,1,0,4> *)0x0) goto LAB_14f33c46d;
    this->m_hash_table_arena = (rrArenaAllocator *)0x0;
    pcVar5 = void_destructor<oo2::CTMF<unsigned_int,1,0,4>_>;
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
  this->m_hash_row_mask = (1 << ((byte)param_4 & 0x1f)) - 2;
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
      goto LAB_14f33c5bb;
    }
  }
  puVar15 = (*g_fp_OodleCore_Plugin_MallocAligned)(lVar12,0x40);
  if (puVar15 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(lVar12);
  }
LAB_14f33c5bb:
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
    CTMF<unsigned_int,1,0,4>::set_base_and_preload(this,param_2,param_3,lVar14);
  }
  param_1->matcher = this;
  return;
}

// newlz_vtable_setup_ctmf<oo2::CTMF<unsigned_int,2,8,4>_> @ 14f33c660

/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

void __cdecl
oo2::newlz_vtable_setup_ctmf<oo2::CTMF<unsigned_int,2,8,4>_>
          (newlz_vtable *param_1,uchar *param_2,uchar *param_3,int param_4,rrArenaAllocator *param_5
          ,int param_6)

{
  void *pvVar1;
  OodleLZ_CompressOptions *pOVar2;
  int iVar3;
  CTMF<unsigned_int,2,8,4> *pCVar4;
  code *pcVar5;
  CTMF<unsigned_int,2,8,4> *this;
  ulong64 uVar6;
  ulonglong *puVar7;
  CTMF<unsigned_int,2,8,4> *pCVar8;
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
  this = (CTMF<unsigned_int,2,8,4> *)param_5->m_cur;
  uVar11 = (ulonglong)(-(uint)(param_5->m_unorderedStart != 0) & 0x10);
  if (param_5->m_size + param_5->m_base < (longlong)&this[1].m_hash_table_arena + uVar11) {
LAB_14f33c74d:
    this = (*g_fp_OodleCore_Plugin_MallocAligned)(0x50,0x10);
    if (this == (CTMF<unsigned_int,2,8,4> *)0x0) {
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
    pcVar5 = void_deletor<oo2::CTMF<unsigned_int,2,8,4>_>;
  }
  else {
    pCVar8 = this + 1;
    param_5->m_cur = (ulong64)pCVar8;
    if (param_5->m_unorderedStart != 0) {
      pCVar8->m_hash_table_arena = (rrArenaAllocator *)0x50;
      this[1].m_hash_table.m_ptr = (uint *)0x0;
      param_5->m_cur = param_5->m_cur + uVar11;
      pCVar8 = (CTMF<unsigned_int,2,8,4> *)param_5->m_cur;
    }
    pCVar4 = (CTMF<unsigned_int,2,8,4> *)param_5->m_cur_max;
    if ((CTMF<unsigned_int,2,8,4> *)param_5->m_cur_max <= pCVar8) {
      pCVar4 = pCVar8;
    }
    param_5->m_cur_max = (ulong64)pCVar4;
    if (this == (CTMF<unsigned_int,2,8,4> *)0x0) goto LAB_14f33c74d;
    this->m_hash_table_arena = (rrArenaAllocator *)0x0;
    pcVar5 = void_destructor<oo2::CTMF<unsigned_int,2,8,4>_>;
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
  this->m_hash_row_mask = (1 << ((byte)param_4 & 0x1f)) - 4;
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
      goto LAB_14f33c89b;
    }
  }
  puVar15 = (*g_fp_OodleCore_Plugin_MallocAligned)(lVar12,0x40);
  if (puVar15 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(lVar12);
  }
LAB_14f33c89b:
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
    CTMF<unsigned_int,2,8,4>::set_base_and_preload(this,param_2,param_3,lVar14);
  }
  param_1->matcher = this;
  return;
}

// newlz_vtable_setup_ctmf<oo2::CTMF<unsigned_int,3,0,4>_> @ 14f33c940

/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

void __cdecl
oo2::newlz_vtable_setup_ctmf<oo2::CTMF<unsigned_int,3,0,4>_>
          (newlz_vtable *param_1,uchar *param_2,uchar *param_3,int param_4,rrArenaAllocator *param_5
          ,int param_6)

{
  void *pvVar1;
  OodleLZ_CompressOptions *pOVar2;
  int iVar3;
  CTMF<unsigned_int,3,0,4> *pCVar4;
  code *pcVar5;
  CTMF<unsigned_int,3,0,4> *this;
  ulong64 uVar6;
  ulonglong *puVar7;
  CTMF<unsigned_int,3,0,4> *pCVar8;
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
  this = (CTMF<unsigned_int,3,0,4> *)param_5->m_cur;
  uVar11 = (ulonglong)(-(uint)(param_5->m_unorderedStart != 0) & 0x10);
  if (param_5->m_size + param_5->m_base < (longlong)&this[1].m_hash_table_arena + uVar11) {
LAB_14f33ca2d:
    this = (*g_fp_OodleCore_Plugin_MallocAligned)(0x50,0x10);
    if (this == (CTMF<unsigned_int,3,0,4> *)0x0) {
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
    pcVar5 = void_deletor<oo2::CTMF<unsigned_int,3,0,4>_>;
  }
  else {
    pCVar8 = this + 1;
    param_5->m_cur = (ulong64)pCVar8;
    if (param_5->m_unorderedStart != 0) {
      pCVar8->m_hash_table_arena = (rrArenaAllocator *)0x50;
      this[1].m_hash_table.m_ptr = (uint *)0x0;
      param_5->m_cur = param_5->m_cur + uVar11;
      pCVar8 = (CTMF<unsigned_int,3,0,4> *)param_5->m_cur;
    }
    pCVar4 = (CTMF<unsigned_int,3,0,4> *)param_5->m_cur_max;
    if ((CTMF<unsigned_int,3,0,4> *)param_5->m_cur_max <= pCVar8) {
      pCVar4 = pCVar8;
    }
    param_5->m_cur_max = (ulong64)pCVar4;
    if (this == (CTMF<unsigned_int,3,0,4> *)0x0) goto LAB_14f33ca2d;
    this->m_hash_table_arena = (rrArenaAllocator *)0x0;
    pcVar5 = void_destructor<oo2::CTMF<unsigned_int,3,0,4>_>;
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
  this->m_hash_row_mask = (1 << ((byte)param_4 & 0x1f)) - 8;
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
      goto LAB_14f33cb7b;
    }
  }
  puVar15 = (*g_fp_OodleCore_Plugin_MallocAligned)(lVar12,0x40);
  if (puVar15 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(lVar12);
  }
LAB_14f33cb7b:
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
    CTMF<unsigned_int,3,0,4>::set_base_and_preload(this,param_2,param_3,lVar14);
  }
  param_1->matcher = this;
  return;
}

// newlz_vtable_setup_ctmf<oo2::FastCTMF<unsigned_short>_> @ 14f33cc20

/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

void __cdecl
oo2::newlz_vtable_setup_ctmf<oo2::FastCTMF<unsigned_short>_>
          (newlz_vtable *param_1,uchar *param_2,uchar *param_3,int param_4,rrArenaAllocator *param_5
          ,int param_6)

{
  undefined4 uVar1;
  OodleLZ_CompressOptions *pOVar2;
  int iVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 *puVar6;
  ulonglong *puVar7;
  ulong64 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong *puVar11;
  longlong lVar12;
  void *_Dst;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  uchar *local_res18;
  
  param_1->ctmf_mem_size = (1L << ((byte)param_4 & 0x3f)) * 2;
  if (param_3 == (uchar *)0x0) {
    return;
  }
  uVar14 = (ulonglong)(-(uint)(param_5->m_unorderedStart != 0) & 0x10);
  puVar6 = (undefined8 *)param_5->m_cur;
  if (param_5->m_size + param_5->m_base < (longlong)puVar6 + uVar14 + 0x30) {
LAB_14f33cd12:
    puVar6 = (*g_fp_OodleCore_Plugin_MallocAligned)(0x30,0x10);
    if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      Oodle_Core_Malloc_Failed(0x30);
    }
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    pcVar5 = void_deletor<oo2::FastCTMF<unsigned_short>_>;
  }
  else {
    puVar10 = puVar6 + 6;
    param_5->m_cur = (ulong64)puVar10;
    if (param_5->m_unorderedStart != 0) {
      *puVar10 = 0x30;
      puVar6[7] = 0;
      param_5->m_cur = param_5->m_cur + uVar14;
      puVar10 = (undefined8 *)param_5->m_cur;
    }
    puVar4 = (undefined8 *)param_5->m_cur_max;
    if ((undefined8 *)param_5->m_cur_max <= puVar10) {
      puVar4 = puVar10;
    }
    param_5->m_cur_max = (ulong64)puVar4;
    if (puVar6 == (undefined8 *)0x0) goto LAB_14f33cd12;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    param_1->m_free_arena = param_5;
    param_1->m_free_pointer = puVar6;
    param_1->m_free_size = 0x30;
    pcVar5 = void_destructor<oo2::FastCTMF<unsigned_short>_>;
  }
  param_1->fp_free_matcher = pcVar5;
  *(int *)(puVar6 + 4) = param_4;
  *(int *)((longlong)puVar6 + 0x24) = 0x40 - param_4;
  if (((param_6 == 0) || (param_6 == 4)) ||
     ((param_6 != 5 && (((param_6 != 6 && (param_6 != 7)) && (param_6 != 8)))))) {
    lVar12 = -0x61c8864f00000000;
  }
  else {
    lVar12 = -0x30e44323485a9b9d << (('\b' - (char)param_6) * '\b' & 0x3fU);
  }
  puVar6[3] = lVar12;
  *puVar6 = param_5;
  lVar12 = (1L << ((byte)param_4 & 0x3f)) * 2;
  uVar14 = lVar12 + 0x4fU & 0xfffffffffffffff0;
  uVar15 = (ulonglong)(-(uint)(param_5->m_unorderedStart != 0) & 0x10);
  uVar8 = param_5->m_cur;
  if (param_5->m_size + param_5->m_base < uVar8 + uVar15 + uVar14) {
    puVar6[2] = 0;
  }
  else {
    puVar11 = (ulonglong *)(uVar8 + uVar14);
    param_5->m_cur = (ulong64)puVar11;
    if (param_5->m_unorderedStart != 0) {
      *puVar11 = uVar14;
      puVar11[1] = 0;
      param_5->m_cur = param_5->m_cur + uVar15;
      puVar11 = (ulonglong *)param_5->m_cur;
    }
    puVar7 = (ulonglong *)param_5->m_cur_max;
    if ((ulonglong *)param_5->m_cur_max <= puVar11) {
      puVar7 = puVar11;
    }
    param_5->m_cur_max = (ulong64)puVar7;
    puVar6[2] = uVar8;
    if (uVar8 != 0) {
      _Dst = (void *)(uVar8 + 0x3f & 0xffffffffffffffc0);
      goto LAB_14f33ce5d;
    }
  }
  _Dst = (*g_fp_OodleCore_Plugin_MallocAligned)(lVar12,0x40);
  if (_Dst == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(lVar12);
  }
LAB_14f33ce5d:
  puVar6[1] = _Dst;
  memset(_Dst,0,(1L << ((byte)*(undefined4 *)(puVar6 + 4) & 0x3f)) * 2);
  if (param_3 == param_2) {
    puVar6[5] = param_3;
  }
  else {
    lVar16 = (longlong)param_3 - (longlong)param_2;
    pOVar2 = param_1->pOptions;
    lVar12 = lVar16;
    if (((4 < (int)param_1->level) && (pOVar2->makeLongRangeMatcher != 0)) &&
       (pOVar2->maxLocalDictionarySize <= lVar16)) {
      lVar12 = (longlong)pOVar2->maxLocalDictionarySize;
    }
    iVar3 = pOVar2->dictionarySize;
    if ((0 < iVar3) && (iVar3 <= lVar12)) {
      lVar12 = (longlong)iVar3;
    }
    lVar13 = 0x1000000;
    if (lVar12 < 0x1000000) {
      lVar13 = lVar12;
    }
    puVar6[5] = param_2;
    if (param_2 < param_3) {
      if (fp_ThreadProfiler_Push == (_func___cdecl_ulong64_char_ptr_ulong64 *)0x0) {
        uVar8 = 0xffffffffffffffff;
        local_res18 = param_2;
      }
      else {
        uVar8 = (*fp_ThreadProfiler_Push)("fastctmf_preload",0);
        local_res18 = (uchar *)puVar6[5];
      }
      if (lVar13 < lVar16) {
        param_2 = param_3 + -lVar13;
        lVar16 = lVar13;
      }
      lVar12 = 2;
      if (2 < lVar16 >> 0x12) {
        lVar12 = lVar16 >> 0x12;
      }
      lVar9 = (lVar16 / 2) / lVar12;
      lVar16 = puVar6[1];
      lVar13 = puVar6[3];
      uVar1 = *(undefined4 *)((longlong)puVar6 + 0x24);
      do {
        lVar9 = lVar9 + -1;
        if (lVar9 < 1) {
          if (param_3 <= param_2) {
            if (fp_ThreadProfiler_Pop != (_func___cdecl_void_ulong64 *)0x0) {
              (*fp_ThreadProfiler_Pop)(uVar8);
            }
            break;
          }
          lVar12 = lVar12 >> 1;
          if ((lVar12 < 1) &&
             (iVar3 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\ctmf.h",0x4f4,
                                         "oo2::FastCTMF<unsigned short>::set_base_and_preload",
                                         "step >= 1"), iVar3 != 0)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar9 = ((longlong)param_3 - (longlong)param_2) / lVar12;
          if (1 < lVar12) {
            lVar9 = lVar9 / 2;
          }
        }
        *(short *)(lVar16 + ((ulonglong)(lVar13 * *(longlong *)param_2) >> ((byte)uVar1 & 0x3f)) * 2
                  ) = (short)param_2 - (short)local_res18;
        param_2 = (uchar *)((longlong)param_2 + lVar12);
      } while( true );
    }
  }
  param_1->matcher = puVar6;
  return;
}

// newlz_vtable_setup_ctmf<oo2::FastCTMF<unsigned_int>_> @ 14f33d040

/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

void __cdecl
oo2::newlz_vtable_setup_ctmf<oo2::FastCTMF<unsigned_int>_>
          (newlz_vtable *param_1,uchar *param_2,uchar *param_3,int param_4,rrArenaAllocator *param_5
          ,int param_6)

{
  undefined4 uVar1;
  OodleLZ_CompressOptions *pOVar2;
  int iVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 *puVar6;
  ulonglong *puVar7;
  ulong64 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong *puVar11;
  longlong lVar12;
  void *_Dst;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  uchar *local_res18;
  
  param_1->ctmf_mem_size = (1L << ((byte)param_4 & 0x3f)) << 2;
  if (param_3 == (uchar *)0x0) {
    return;
  }
  uVar14 = (ulonglong)(-(uint)(param_5->m_unorderedStart != 0) & 0x10);
  puVar6 = (undefined8 *)param_5->m_cur;
  if (param_5->m_size + param_5->m_base < (longlong)puVar6 + uVar14 + 0x30) {
LAB_14f33d132:
    puVar6 = (*g_fp_OodleCore_Plugin_MallocAligned)(0x30,0x10);
    if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      Oodle_Core_Malloc_Failed(0x30);
    }
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    pcVar5 = void_deletor<oo2::FastCTMF<unsigned_int>_>;
  }
  else {
    puVar10 = puVar6 + 6;
    param_5->m_cur = (ulong64)puVar10;
    if (param_5->m_unorderedStart != 0) {
      *puVar10 = 0x30;
      puVar6[7] = 0;
      param_5->m_cur = param_5->m_cur + uVar14;
      puVar10 = (undefined8 *)param_5->m_cur;
    }
    puVar4 = (undefined8 *)param_5->m_cur_max;
    if ((undefined8 *)param_5->m_cur_max <= puVar10) {
      puVar4 = puVar10;
    }
    param_5->m_cur_max = (ulong64)puVar4;
    if (puVar6 == (undefined8 *)0x0) goto LAB_14f33d132;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    param_1->m_free_arena = param_5;
    param_1->m_free_pointer = puVar6;
    param_1->m_free_size = 0x30;
    pcVar5 = void_destructor<oo2::FastCTMF<unsigned_int>_>;
  }
  param_1->fp_free_matcher = pcVar5;
  *(int *)(puVar6 + 4) = param_4;
  *(int *)((longlong)puVar6 + 0x24) = 0x40 - param_4;
  if (((param_6 == 0) || (param_6 == 4)) ||
     ((param_6 != 5 && (((param_6 != 6 && (param_6 != 7)) && (param_6 != 8)))))) {
    lVar12 = -0x61c8864f00000000;
  }
  else {
    lVar12 = -0x30e44323485a9b9d << (('\b' - (char)param_6) * '\b' & 0x3fU);
  }
  puVar6[3] = lVar12;
  *puVar6 = param_5;
  lVar12 = (1L << ((byte)param_4 & 0x3f)) * 4;
  uVar14 = lVar12 + 0x4fU & 0xfffffffffffffff0;
  uVar15 = (ulonglong)(-(uint)(param_5->m_unorderedStart != 0) & 0x10);
  uVar8 = param_5->m_cur;
  if (param_5->m_size + param_5->m_base < uVar8 + uVar15 + uVar14) {
    puVar6[2] = 0;
  }
  else {
    puVar11 = (ulonglong *)(uVar8 + uVar14);
    param_5->m_cur = (ulong64)puVar11;
    if (param_5->m_unorderedStart != 0) {
      *puVar11 = uVar14;
      puVar11[1] = 0;
      param_5->m_cur = param_5->m_cur + uVar15;
      puVar11 = (ulonglong *)param_5->m_cur;
    }
    puVar7 = (ulonglong *)param_5->m_cur_max;
    if ((ulonglong *)param_5->m_cur_max <= puVar11) {
      puVar7 = puVar11;
    }
    param_5->m_cur_max = (ulong64)puVar7;
    puVar6[2] = uVar8;
    if (uVar8 != 0) {
      _Dst = (void *)(uVar8 + 0x3f & 0xffffffffffffffc0);
      goto LAB_14f33d285;
    }
  }
  _Dst = (*g_fp_OodleCore_Plugin_MallocAligned)(lVar12,0x40);
  if (_Dst == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(lVar12);
  }
LAB_14f33d285:
  puVar6[1] = _Dst;
  memset(_Dst,0,(1L << ((byte)*(undefined4 *)(puVar6 + 4) & 0x3f)) * 4);
  if (param_3 == param_2) {
    puVar6[5] = param_3;
  }
  else {
    lVar16 = (longlong)param_3 - (longlong)param_2;
    pOVar2 = param_1->pOptions;
    lVar12 = lVar16;
    if (((4 < (int)param_1->level) && (pOVar2->makeLongRangeMatcher != 0)) &&
       (pOVar2->maxLocalDictionarySize <= lVar16)) {
      lVar12 = (longlong)pOVar2->maxLocalDictionarySize;
    }
    iVar3 = pOVar2->dictionarySize;
    if ((0 < iVar3) && (iVar3 <= lVar12)) {
      lVar12 = (longlong)iVar3;
    }
    lVar13 = 0x1000000;
    if (lVar12 < 0x1000000) {
      lVar13 = lVar12;
    }
    puVar6[5] = param_2;
    if (param_2 < param_3) {
      if (fp_ThreadProfiler_Push == (_func___cdecl_ulong64_char_ptr_ulong64 *)0x0) {
        uVar8 = 0xffffffffffffffff;
        local_res18 = param_2;
      }
      else {
        uVar8 = (*fp_ThreadProfiler_Push)("fastctmf_preload",0);
        local_res18 = (uchar *)puVar6[5];
      }
      if (lVar13 < lVar16) {
        param_2 = param_3 + -lVar13;
        lVar16 = lVar13;
      }
      lVar12 = 2;
      if (2 < lVar16 >> 0x12) {
        lVar12 = lVar16 >> 0x12;
      }
      lVar9 = (lVar16 / 2) / lVar12;
      lVar16 = puVar6[1];
      lVar13 = puVar6[3];
      uVar1 = *(undefined4 *)((longlong)puVar6 + 0x24);
      do {
        lVar9 = lVar9 + -1;
        if (lVar9 < 1) {
          if (param_3 <= param_2) {
            if (fp_ThreadProfiler_Pop != (_func___cdecl_void_ulong64 *)0x0) {
              (*fp_ThreadProfiler_Pop)(uVar8);
            }
            break;
          }
          lVar12 = lVar12 >> 1;
          if ((lVar12 < 1) &&
             (iVar3 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\ctmf.h",0x4f4,
                                         "oo2::FastCTMF<unsigned int>::set_base_and_preload",
                                         "step >= 1"), iVar3 != 0)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar9 = ((longlong)param_3 - (longlong)param_2) / lVar12;
          if (1 < lVar12) {
            lVar9 = lVar9 / 2;
          }
        }
        *(int *)(lVar16 + ((ulonglong)(lVar13 * *(longlong *)param_2) >> ((byte)uVar1 & 0x3f)) * 4)
             = (int)param_2 - (int)local_res18;
        param_2 = (uchar *)((longlong)param_2 + lVar12);
      } while( true );
    }
  }
  param_1->matcher = puVar6;
  return;
}

// reverse<oo2::newlz_encoder_parse_*> @ 14f33d470

void __cdecl
oo2::reverse<oo2::newlz_encoder_parse_*>(newlz_encoder_parse *param_1,newlz_encoder_parse *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  newlz_encoder_parse *pnVar8;
  
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

// rrAlignUpPointer<unsigned_char> @ 14f33d4a0

uchar * __cdecl oo2::rrAlignUpPointer<unsigned_char>(uchar *param_1,long64 param_2)

{
  return (uchar *)((ulonglong)(param_1 + param_2 + -1) & ~(param_2 - 1U));
}

// rrAlignUpPointer<unsigned_int> @ 14f33d4c0

uint * __cdecl oo2::rrAlignUpPointer<unsigned_int>(uint *param_1,long64 param_2)

{
  return (uint *)((longlong)param_1 + param_2 + -1 & ~(param_2 - 1U));
}

// rrAlignUpPointer<void> @ 14f33d4e0

void * __cdecl oo2::rrAlignUpPointer<void>(void *param_1,long64 param_2)

{
  return (void *)((longlong)param_1 + param_2 + -1 & ~(param_2 - 1U));
}

// rrArenaNewIfAvail<oo2::CTMF<unsigned_int,1,0,4>_> @ 14f33d500

CTMF<unsigned_int,1,0,4> * __cdecl
oo2::rrArenaNewIfAvail<oo2::CTMF<unsigned_int,1,0,4>_>(rrArenaAllocator *param_1)

{
  CTMF<unsigned_int,1,0,4> *pCVar1;
  CTMF<unsigned_int,1,0,4> *pCVar2;
  CTMF<unsigned_int,1,0,4> *pCVar3;
  ulonglong uVar4;
  
  pCVar1 = (CTMF<unsigned_int,1,0,4> *)param_1->m_cur;
  uVar4 = (ulonglong)(-(uint)(param_1->m_unorderedStart != 0) & 0x10);
  if ((longlong)&pCVar1[1].m_hash_table_arena + uVar4 <= param_1->m_size + param_1->m_base) {
    pCVar3 = pCVar1 + 1;
    param_1->m_cur = (ulong64)pCVar3;
    if (param_1->m_unorderedStart != 0) {
      pCVar3->m_hash_table_arena = (rrArenaAllocator *)0x50;
      pCVar1[1].m_hash_table.m_ptr = (uint *)0x0;
      param_1->m_cur = param_1->m_cur + uVar4;
      pCVar3 = (CTMF<unsigned_int,1,0,4> *)param_1->m_cur;
    }
    pCVar2 = (CTMF<unsigned_int,1,0,4> *)param_1->m_cur_max;
    if ((CTMF<unsigned_int,1,0,4> *)param_1->m_cur_max <= pCVar3) {
      pCVar2 = pCVar3;
    }
    param_1->m_cur_max = (ulong64)pCVar2;
    if (pCVar1 != (CTMF<unsigned_int,1,0,4> *)0x0) {
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
  return (CTMF<unsigned_int,1,0,4> *)0x0;
}

// rrArenaNewIfAvail<oo2::CTMF<unsigned_int,2,8,4>_> @ 14f33d5a0

CTMF<unsigned_int,2,8,4> * __cdecl
oo2::rrArenaNewIfAvail<oo2::CTMF<unsigned_int,2,8,4>_>(rrArenaAllocator *param_1)

{
  CTMF<unsigned_int,2,8,4> *pCVar1;
  CTMF<unsigned_int,2,8,4> *pCVar2;
  CTMF<unsigned_int,2,8,4> *pCVar3;
  ulonglong uVar4;
  
  pCVar1 = (CTMF<unsigned_int,2,8,4> *)param_1->m_cur;
  uVar4 = (ulonglong)(-(uint)(param_1->m_unorderedStart != 0) & 0x10);
  if ((longlong)&pCVar1[1].m_hash_table_arena + uVar4 <= param_1->m_size + param_1->m_base) {
    pCVar3 = pCVar1 + 1;
    param_1->m_cur = (ulong64)pCVar3;
    if (param_1->m_unorderedStart != 0) {
      pCVar3->m_hash_table_arena = (rrArenaAllocator *)0x50;
      pCVar1[1].m_hash_table.m_ptr = (uint *)0x0;
      param_1->m_cur = param_1->m_cur + uVar4;
      pCVar3 = (CTMF<unsigned_int,2,8,4> *)param_1->m_cur;
    }
    pCVar2 = (CTMF<unsigned_int,2,8,4> *)param_1->m_cur_max;
    if ((CTMF<unsigned_int,2,8,4> *)param_1->m_cur_max <= pCVar3) {
      pCVar2 = pCVar3;
    }
    param_1->m_cur_max = (ulong64)pCVar2;
    if (pCVar1 != (CTMF<unsigned_int,2,8,4> *)0x0) {
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
  return (CTMF<unsigned_int,2,8,4> *)0x0;
}

// rrArenaNewIfAvail<oo2::CTMF<unsigned_int,3,0,4>_> @ 14f33d640

CTMF<unsigned_int,3,0,4> * __cdecl
oo2::rrArenaNewIfAvail<oo2::CTMF<unsigned_int,3,0,4>_>(rrArenaAllocator *param_1)

{
  CTMF<unsigned_int,3,0,4> *pCVar1;
  CTMF<unsigned_int,3,0,4> *pCVar2;
  CTMF<unsigned_int,3,0,4> *pCVar3;
  ulonglong uVar4;
  
  pCVar1 = (CTMF<unsigned_int,3,0,4> *)param_1->m_cur;
  uVar4 = (ulonglong)(-(uint)(param_1->m_unorderedStart != 0) & 0x10);
  if ((longlong)&pCVar1[1].m_hash_table_arena + uVar4 <= param_1->m_size + param_1->m_base) {
    pCVar3 = pCVar1 + 1;
    param_1->m_cur = (ulong64)pCVar3;
    if (param_1->m_unorderedStart != 0) {
      pCVar3->m_hash_table_arena = (rrArenaAllocator *)0x50;
      pCVar1[1].m_hash_table.m_ptr = (uint *)0x0;
      param_1->m_cur = param_1->m_cur + uVar4;
      pCVar3 = (CTMF<unsigned_int,3,0,4> *)param_1->m_cur;
    }
    pCVar2 = (CTMF<unsigned_int,3,0,4> *)param_1->m_cur_max;
    if ((CTMF<unsigned_int,3,0,4> *)param_1->m_cur_max <= pCVar3) {
      pCVar2 = pCVar3;
    }
    param_1->m_cur_max = (ulong64)pCVar2;
    if (pCVar1 != (CTMF<unsigned_int,3,0,4> *)0x0) {
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
  return (CTMF<unsigned_int,3,0,4> *)0x0;
}

// rrArenaNewIfAvail<oo2::FastCTMF<unsigned_short>_> @ 14f33d6e0

FastCTMF<unsigned_short> * __cdecl
oo2::rrArenaNewIfAvail<oo2::FastCTMF<unsigned_short>_>(rrArenaAllocator *param_1)

{
  FastCTMF<unsigned_short> *pFVar1;
  FastCTMF<unsigned_short> *pFVar2;
  ulonglong uVar3;
  FastCTMF<unsigned_short> *pFVar4;
  
  pFVar1 = (FastCTMF<unsigned_short> *)param_1->m_cur;
  uVar3 = (ulonglong)(-(uint)(param_1->m_unorderedStart != 0) & 0x10);
  if ((longlong)&pFVar1[1].m_hash_table_arena + uVar3 <= param_1->m_size + param_1->m_base) {
    pFVar2 = pFVar1 + 1;
    param_1->m_cur = (ulong64)pFVar2;
    if (param_1->m_unorderedStart != 0) {
      pFVar2->m_hash_table_arena = (rrArenaAllocator *)0x30;
      pFVar1[1].m_hash_table.m_ptr = (ushort *)0x0;
      param_1->m_cur = param_1->m_cur + uVar3;
      pFVar2 = (FastCTMF<unsigned_short> *)param_1->m_cur;
    }
    pFVar4 = (FastCTMF<unsigned_short> *)param_1->m_cur_max;
    if ((FastCTMF<unsigned_short> *)param_1->m_cur_max <= pFVar2) {
      pFVar4 = pFVar2;
    }
    param_1->m_cur_max = (ulong64)pFVar4;
    if (pFVar1 != (FastCTMF<unsigned_short> *)0x0) {
      pFVar1->m_hash_table_arena = (rrArenaAllocator *)0x0;
      (pFVar1->m_hash_table).m_ptr = (ushort *)0x0;
      (pFVar1->m_hash_table).m_alloc = (void *)0x0;
      pFVar1->m_hash_mul = 0;
      pFVar1->m_table_size_bits = 0;
      pFVar1->m_hash_shift = 0;
      pFVar1->m_base_ptr = (uchar *)0x0;
      return pFVar1;
    }
  }
  return (FastCTMF<unsigned_short> *)0x0;
}

// rrArenaNewIfAvail<oo2::FastCTMF<unsigned_int>_> @ 14f33d780

FastCTMF<unsigned_int> * __cdecl
oo2::rrArenaNewIfAvail<oo2::FastCTMF<unsigned_int>_>(rrArenaAllocator *param_1)

{
  FastCTMF<unsigned_int> *pFVar1;
  FastCTMF<unsigned_int> *pFVar2;
  ulonglong uVar3;
  FastCTMF<unsigned_int> *pFVar4;
  
  pFVar1 = (FastCTMF<unsigned_int> *)param_1->m_cur;
  uVar3 = (ulonglong)(-(uint)(param_1->m_unorderedStart != 0) & 0x10);
  if ((longlong)&pFVar1[1].m_hash_table_arena + uVar3 <= param_1->m_size + param_1->m_base) {
    pFVar2 = pFVar1 + 1;
    param_1->m_cur = (ulong64)pFVar2;
    if (param_1->m_unorderedStart != 0) {
      pFVar2->m_hash_table_arena = (rrArenaAllocator *)0x30;
      pFVar1[1].m_hash_table.m_ptr = (uint *)0x0;
      param_1->m_cur = param_1->m_cur + uVar3;
      pFVar2 = (FastCTMF<unsigned_int> *)param_1->m_cur;
    }
    pFVar4 = (FastCTMF<unsigned_int> *)param_1->m_cur_max;
    if ((FastCTMF<unsigned_int> *)param_1->m_cur_max <= pFVar2) {
      pFVar4 = pFVar2;
    }
    param_1->m_cur_max = (ulong64)pFVar4;
    if (pFVar1 != (FastCTMF<unsigned_int> *)0x0) {
      pFVar1->m_hash_table_arena = (rrArenaAllocator *)0x0;
      (pFVar1->m_hash_table).m_ptr = (uint *)0x0;
      (pFVar1->m_hash_table).m_alloc = (void *)0x0;
      pFVar1->m_hash_mul = 0;
      pFVar1->m_table_size_bits = 0;
      pFVar1->m_hash_shift = 0;
      pFVar1->m_base_ptr = (uchar *)0x0;
      return pFVar1;
    }
  }
  return (FastCTMF<unsigned_int> *)0x0;
}

// swap<oo2::newlz_encoder_parse> @ 14f33d810

void __cdecl
oo2::swap<oo2::newlz_encoder_parse>(newlz_encoder_parse *param_1,newlz_encoder_parse *param_2)

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

// try_cached_match_truncations<<lambda_0b0f612dccaef8b3539db44dcbc21e11>_> @ 14f33d840

void __cdecl
oo2::NewLZParseCoreSSE2::try_cached_match_truncations<<lambda_0b0f612dccaef8b3539db44dcbc21e11>_>
          (int *param_1,int param_2,int *param_3,int param_4,
          <lambda_0b0f612dccaef8b3539db44dcbc21e11> *param_5)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  newLZ_LOs_NoPad *pnVar4;
  int iVar5;
  longlong lVar6;
  newlz_optimal_arrival_tll *pnVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  piVar9 = param_3 + 4;
  iVar12 = 0;
  lVar13 = 0;
  lVar6 = (longlong)param_1 - (longlong)param_3;
  piVar8 = param_3;
  do {
    piVar2 = (int *)(lVar6 + -0x10 + (longlong)piVar9);
    piVar1 = (int *)(lVar6 + (longlong)piVar9);
    auVar15._0_4_ = -(uint)(piVar9[-4] + param_2 < *piVar2);
    auVar15._4_4_ = -(uint)(piVar9[-3] + param_2 < piVar2[1]);
    auVar15._8_4_ = -(uint)(piVar9[-2] + param_2 < piVar2[2]);
    auVar15._12_4_ = -(uint)(piVar9[-1] + param_2 < piVar2[3]);
    iVar5 = movmskps((int)lVar6,auVar15);
    auVar14._0_4_ = -(uint)(param_2 + *piVar9 < *piVar1);
    auVar14._4_4_ = -(uint)(param_2 + piVar9[1] < piVar1[1]);
    auVar14._8_4_ = -(uint)(param_2 + piVar9[2] < piVar1[2]);
    auVar14._12_4_ = -(uint)(param_2 + piVar9[3] < piVar1[3]);
    iVar10 = movmskps((int)piVar8,auVar14);
    uVar11 = iVar10 * 0x10 + iVar5;
    while (uVar11 != 0) {
      iVar5 = 0;
      if (uVar11 != 0) {
        for (; (uVar11 >> iVar5 & 1) == 0; iVar5 = iVar5 + 1) {
        }
      }
      iVar5 = iVar5 + iVar12;
      uVar11 = uVar11 & uVar11 - 1;
      if (param_4 < iVar5) {
        return;
      }
      iVar10 = param_5->prev_index;
      iVar3 = param_5->pos;
      param_1[iVar5] = param_3[iVar5] + param_2;
      pnVar4 = param_5->los;
      pnVar7 = param_5->tll_arrivals->payloads + (iVar3 + iVar5 + 2);
      pnVar7->lrl = param_5->lrl;
      iVar3 = param_5->loi;
      pnVar7->ml = iVar5 + 2;
      piVar8 = pnVar4->lasts + 2;
      if (iVar3 == 0) {
        (pnVar7->los).lasts[0] = pnVar4->lasts[0];
        iVar5 = pnVar4->lasts[1];
      }
      else {
        if (iVar3 == 1) {
          iVar5 = pnVar4->lasts[1];
        }
        else {
          iVar5 = *piVar8;
          piVar8 = pnVar4->lasts + 1;
        }
        (pnVar7->los).lasts[0] = iVar5;
        iVar5 = pnVar4->lasts[0];
      }
      (pnVar7->los).lasts[1] = iVar5;
      (pnVar7->los).lasts[2] = *piVar8;
      (pnVar7->field3_0x14).is_twostep = 0;
      pnVar7->prev_index = iVar10;
    }
    iVar12 = iVar12 + 8;
    lVar13 = lVar13 + 8;
    piVar9 = piVar9 + 8;
    piVar8 = (int *)0x0;
    if (param_4 < lVar13) {
      return;
    }
  } while( true );
}

// try_cached_match_truncations<<lambda_219ae4272d9695eb7df24ed7841a4965>_> @ 14f33d9c0

void __cdecl
oo2::NewLZParseCoreSSE2::try_cached_match_truncations<<lambda_219ae4272d9695eb7df24ed7841a4965>_>
          (int *param_1,int param_2,int *param_3,int param_4,
          <lambda_219ae4272d9695eb7df24ed7841a4965> *param_5)

{
  int *piVar1;
  int iVar2;
  newLZ_LOs_NoPad *pnVar3;
  undefined4 in_EAX;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar8;
  int *piVar9;
  newlz_optimal_arrival_tll *pnVar10;
  int iVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  int *piVar7;
  
  piVar9 = param_3 + 4;
  iVar11 = 0;
  lVar8 = 0;
  piVar7 = param_1;
  do {
    piVar1 = (int *)((longlong)piVar9 + ((longlong)param_1 - (longlong)param_3) + -0x10);
    auVar13._0_4_ = -(uint)(piVar9[-4] + param_2 < *piVar1);
    auVar13._4_4_ = -(uint)(piVar9[-3] + param_2 < piVar1[1]);
    auVar13._8_4_ = -(uint)(piVar9[-2] + param_2 < piVar1[2]);
    auVar13._12_4_ = -(uint)(piVar9[-1] + param_2 < piVar1[3]);
    piVar1 = (int *)((longlong)piVar9 + ((longlong)param_1 - (longlong)param_3));
    uVar6 = movmskps((int)piVar7,auVar13);
    auVar12._0_4_ = -(uint)(*piVar9 + param_2 < *piVar1);
    auVar12._4_4_ = -(uint)(piVar9[1] + param_2 < piVar1[1]);
    auVar12._8_4_ = -(uint)(piVar9[2] + param_2 < piVar1[2]);
    auVar12._12_4_ = -(uint)(piVar9[3] + param_2 < piVar1[3]);
    iVar4 = movmskps(in_EAX,auVar12);
    uVar5 = iVar4 * 0x10 + uVar6;
    while (uVar5 != 0) {
      iVar4 = 0;
      if (uVar5 != 0) {
        for (; (uVar5 >> iVar4 & 1) == 0; iVar4 = iVar4 + 1) {
        }
      }
      iVar4 = iVar4 + iVar11;
      uVar5 = uVar5 & uVar5 - 1;
      if (param_4 < iVar4) {
        return;
      }
      iVar2 = param_5->pos;
      param_1[iVar4] = param_3[iVar4] + param_2;
      pnVar3 = param_5->los;
      iVar4 = param_5->mml + iVar4;
      pnVar10 = param_5->tll_arrivals->payloads + (iVar2 + iVar4);
      pnVar10->lrl = param_5->lrl;
      (pnVar10->los).lasts[0] = param_5->offset;
      pnVar10->ml = iVar4;
      (pnVar10->los).lasts[1] = pnVar3->lasts[0];
      (pnVar10->los).lasts[2] = pnVar3->lasts[1];
      uVar6 = param_5->prev_index;
      pnVar10->prev_index = uVar6;
      (pnVar10->field3_0x14).is_twostep = 0;
    }
    in_EAX = 0;
    piVar7 = (int *)(ulonglong)uVar6;
    iVar11 = iVar11 + 8;
    lVar8 = lVar8 + 8;
    piVar9 = piVar9 + 8;
    if (param_4 < lVar8) {
      return;
    }
  } while( true );
}

// try_cached_match_truncations<<lambda_4e971c24fef4a51b524d318736f024d6>_> @ 14f33db20

void __cdecl
oo2::NewLZParseCoreSSE2::try_cached_match_truncations<<lambda_4e971c24fef4a51b524d318736f024d6>_>
          (int *param_1,int param_2,int *param_3,int param_4,
          <lambda_4e971c24fef4a51b524d318736f024d6> *param_5)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  newLZ_LOs_NoPad *pnVar4;
  int iVar5;
  longlong lVar6;
  newlz_optimal_arrival_tll *pnVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  piVar9 = param_3 + 4;
  iVar12 = 0;
  lVar13 = 0;
  lVar6 = (longlong)param_1 - (longlong)param_3;
  piVar8 = param_3;
  do {
    piVar2 = (int *)(lVar6 + -0x10 + (longlong)piVar9);
    piVar1 = (int *)(lVar6 + (longlong)piVar9);
    auVar15._0_4_ = -(uint)(piVar9[-4] + param_2 < *piVar2);
    auVar15._4_4_ = -(uint)(piVar9[-3] + param_2 < piVar2[1]);
    auVar15._8_4_ = -(uint)(piVar9[-2] + param_2 < piVar2[2]);
    auVar15._12_4_ = -(uint)(piVar9[-1] + param_2 < piVar2[3]);
    iVar5 = movmskps((int)lVar6,auVar15);
    auVar14._0_4_ = -(uint)(param_2 + *piVar9 < *piVar1);
    auVar14._4_4_ = -(uint)(param_2 + piVar9[1] < piVar1[1]);
    auVar14._8_4_ = -(uint)(param_2 + piVar9[2] < piVar1[2]);
    auVar14._12_4_ = -(uint)(param_2 + piVar9[3] < piVar1[3]);
    iVar10 = movmskps((int)piVar8,auVar14);
    uVar11 = iVar10 * 0x10 + iVar5;
    while (uVar11 != 0) {
      iVar5 = 0;
      if (uVar11 != 0) {
        for (; (uVar11 >> iVar5 & 1) == 0; iVar5 = iVar5 + 1) {
        }
      }
      iVar5 = iVar5 + iVar12;
      uVar11 = uVar11 & uVar11 - 1;
      if (param_4 < iVar5) {
        return;
      }
      iVar10 = param_5->prev_index;
      iVar3 = param_5->pos;
      param_1[iVar5] = param_3[iVar5] + param_2;
      pnVar4 = param_5->los;
      pnVar7 = param_5->tll_arrivals->payloads + (iVar3 + iVar5 + 2);
      pnVar7->lrl = param_5->lrl;
      iVar3 = param_5->loi;
      pnVar7->ml = iVar5 + 2;
      piVar8 = pnVar4->lasts + 2;
      if (iVar3 == 0) {
        (pnVar7->los).lasts[0] = pnVar4->lasts[0];
        iVar5 = pnVar4->lasts[1];
      }
      else {
        if (iVar3 == 1) {
          iVar5 = pnVar4->lasts[1];
        }
        else {
          iVar5 = *piVar8;
          piVar8 = pnVar4->lasts + 1;
        }
        (pnVar7->los).lasts[0] = iVar5;
        iVar5 = pnVar4->lasts[0];
      }
      (pnVar7->los).lasts[1] = iVar5;
      (pnVar7->los).lasts[2] = *piVar8;
      (pnVar7->field3_0x14).is_twostep = 0;
      pnVar7->prev_index = iVar10;
    }
    iVar12 = iVar12 + 8;
    lVar13 = lVar13 + 8;
    piVar9 = piVar9 + 8;
    piVar8 = (int *)0x0;
    if (param_4 < lVar13) {
      return;
    }
  } while( true );
}

// try_cached_match_truncations<<lambda_ee9ea0a57b2a7ca38b0adf8cfe292b10>_> @ 14f33dca0

void __cdecl
oo2::NewLZParseCoreSSE2::try_cached_match_truncations<<lambda_ee9ea0a57b2a7ca38b0adf8cfe292b10>_>
          (int *param_1,int param_2,int *param_3,int param_4,
          <lambda_ee9ea0a57b2a7ca38b0adf8cfe292b10> *param_5)

{
  int *piVar1;
  int iVar2;
  newLZ_LOs_NoPad *pnVar3;
  undefined4 in_EAX;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar8;
  int *piVar9;
  newlz_optimal_arrival_tll *pnVar10;
  int iVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  int *piVar7;
  
  piVar9 = param_3 + 4;
  iVar11 = 0;
  lVar8 = 0;
  piVar7 = param_1;
  do {
    piVar1 = (int *)((longlong)piVar9 + ((longlong)param_1 - (longlong)param_3) + -0x10);
    auVar13._0_4_ = -(uint)(piVar9[-4] + param_2 < *piVar1);
    auVar13._4_4_ = -(uint)(piVar9[-3] + param_2 < piVar1[1]);
    auVar13._8_4_ = -(uint)(piVar9[-2] + param_2 < piVar1[2]);
    auVar13._12_4_ = -(uint)(piVar9[-1] + param_2 < piVar1[3]);
    piVar1 = (int *)((longlong)piVar9 + ((longlong)param_1 - (longlong)param_3));
    uVar6 = movmskps((int)piVar7,auVar13);
    auVar12._0_4_ = -(uint)(*piVar9 + param_2 < *piVar1);
    auVar12._4_4_ = -(uint)(piVar9[1] + param_2 < piVar1[1]);
    auVar12._8_4_ = -(uint)(piVar9[2] + param_2 < piVar1[2]);
    auVar12._12_4_ = -(uint)(piVar9[3] + param_2 < piVar1[3]);
    iVar4 = movmskps(in_EAX,auVar12);
    uVar5 = iVar4 * 0x10 + uVar6;
    while (uVar5 != 0) {
      iVar4 = 0;
      if (uVar5 != 0) {
        for (; (uVar5 >> iVar4 & 1) == 0; iVar4 = iVar4 + 1) {
        }
      }
      iVar4 = iVar4 + iVar11;
      uVar5 = uVar5 & uVar5 - 1;
      if (param_4 < iVar4) {
        return;
      }
      iVar2 = param_5->pos;
      param_1[iVar4] = param_3[iVar4] + param_2;
      pnVar3 = param_5->los;
      iVar4 = param_5->mml + iVar4;
      pnVar10 = param_5->tll_arrivals->payloads + (iVar2 + iVar4);
      pnVar10->lrl = param_5->lrl;
      (pnVar10->los).lasts[0] = param_5->offset;
      pnVar10->ml = iVar4;
      (pnVar10->los).lasts[1] = pnVar3->lasts[0];
      (pnVar10->los).lasts[2] = pnVar3->lasts[1];
      uVar6 = param_5->prev_index;
      pnVar10->prev_index = uVar6;
      (pnVar10->field3_0x14).is_twostep = 0;
    }
    in_EAX = 0;
    piVar7 = (int *)(ulonglong)uVar6;
    iVar11 = iVar11 + 8;
    lVar8 = lVar8 + 8;
    piVar9 = piVar9 + 8;
    if (param_4 < lVar8) {
      return;
    }
  } while( true );
}

// void_deletor<oo2::CTMF<unsigned_int,1,0,4>_> @ 14f33ddf0

void __cdecl oo2::void_deletor<oo2::CTMF<unsigned_int,1,0,4>_>(void *param_1)

{
  destruct<oo2::CTMF<unsigned_int,1,0,4>_>(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014f33de06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleCore_Plugin_Free)(param_1);
  return;
}

// void_deletor<oo2::CTMF<unsigned_int,2,8,4>_> @ 14f33de20

void __cdecl oo2::void_deletor<oo2::CTMF<unsigned_int,2,8,4>_>(void *param_1)

{
  destruct<oo2::CTMF<unsigned_int,2,8,4>_>(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014f33de36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleCore_Plugin_Free)(param_1);
  return;
}

// void_deletor<oo2::CTMF<unsigned_int,3,0,4>_> @ 14f33de50

void __cdecl oo2::void_deletor<oo2::CTMF<unsigned_int,3,0,4>_>(void *param_1)

{
  destruct<oo2::CTMF<unsigned_int,3,0,4>_>(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014f33de66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleCore_Plugin_Free)(param_1);
  return;
}

// void_deletor<oo2::FastCTMF<unsigned_short>_> @ 14f33de80

void __cdecl oo2::void_deletor<oo2::FastCTMF<unsigned_short>_>(void *param_1)

{
  destruct<oo2::FastCTMF<unsigned_short>_>(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014f33de96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleCore_Plugin_Free)(param_1);
  return;
}

// void_deletor<oo2::FastCTMF<unsigned_int>_> @ 14f33deb0

void __cdecl oo2::void_deletor<oo2::FastCTMF<unsigned_int>_>(void *param_1)

{
  destruct<oo2::FastCTMF<unsigned_int>_>(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014f33dec6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleCore_Plugin_Free)(param_1);
  return;
}

// void_destructor<oo2::CTMF<unsigned_int,1,0,4>_> @ 14f33dee0

void __cdecl oo2::void_destructor<oo2::CTMF<unsigned_int,1,0,4>_>(void *param_1)

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

// void_destructor<oo2::CTMF<unsigned_int,2,8,4>_> @ 14f33def0

void __cdecl oo2::void_destructor<oo2::CTMF<unsigned_int,2,8,4>_>(void *param_1)

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

// void_destructor<oo2::CTMF<unsigned_int,3,0,4>_> @ 14f33df00

void __cdecl oo2::void_destructor<oo2::CTMF<unsigned_int,3,0,4>_>(void *param_1)

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

// void_destructor<oo2::FastCTMF<unsigned_short>_> @ 14f33df10

void __cdecl oo2::void_destructor<oo2::FastCTMF<unsigned_short>_>(void *param_1)

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
                   (1L << ((byte)*(undefined4 *)((longlong)param_1 + 0x20) & 0x3f)) * 2 + 0x40);
      }
      *(undefined8 *)((longlong)param_1 + 0x10) = 0;
    }
    *(undefined8 *)((longlong)param_1 + 8) = 0;
  }
  return;
}

// void_destructor<oo2::FastCTMF<unsigned_int>_> @ 14f33df20

void __cdecl oo2::void_destructor<oo2::FastCTMF<unsigned_int>_>(void *param_1)

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
                   (1L << ((byte)*(undefined4 *)((longlong)param_1 + 0x20) & 0x3f)) * 4 + 0x40);
      }
      *(undefined8 *)((longlong)param_1 + 0x10) = 0;
    }
    *(undefined8 *)((longlong)param_1 + 8) = 0;
  }
  return;
}

// <lambda_0b0f612dccaef8b3539db44dcbc21e11> @ 14f33df40

<lambda_0b0f612dccaef8b3539db44dcbc21e11> * __thiscall
<lambda_0b0f612dccaef8b3539db44dcbc21e11>::<lambda_0b0f612dccaef8b3539db44dcbc21e11>
          (void *this,int *param_1,int *param_2,int *param_3,int *param_4,newLZ_LOs_NoPad *param_5,
          newlz_optimal_arrivals_tll *param_6)

{
  int iVar1;
  
  *(int *)this = *param_1;
  *(int *)((longlong)this + 4) = *param_2;
  *(int *)((longlong)this + 8) = *param_3;
  iVar1 = *param_4;
  *(newLZ_LOs_NoPad **)((longlong)this + 0x10) = param_5;
  *(newlz_optimal_arrivals_tll **)((longlong)this + 0x18) = param_6;
  *(int *)((longlong)this + 0xc) = iVar1;
  return this;
}

// <lambda_219ae4272d9695eb7df24ed7841a4965> @ 14f33df80

<lambda_219ae4272d9695eb7df24ed7841a4965> * __thiscall
<lambda_219ae4272d9695eb7df24ed7841a4965>::<lambda_219ae4272d9695eb7df24ed7841a4965>
          (void *this,int *param_1,int *param_2,int *param_3,int *param_4,uint *param_5,
          newLZ_LOs_NoPad *param_6,newlz_optimal_arrivals_tll *param_7)

{
  uint uVar1;
  
  *(int *)this = *param_1;
  *(int *)((longlong)this + 4) = *param_2;
  *(int *)((longlong)this + 8) = *param_3;
  *(int *)((longlong)this + 0xc) = *param_4;
  uVar1 = *param_5;
  *(newLZ_LOs_NoPad **)((longlong)this + 0x18) = param_6;
  *(newlz_optimal_arrivals_tll **)((longlong)this + 0x20) = param_7;
  *(uint *)((longlong)this + 0x10) = uVar1;
  return this;
}

// <lambda_4e971c24fef4a51b524d318736f024d6> @ 14f33dfc0

<lambda_4e971c24fef4a51b524d318736f024d6> * __thiscall
<lambda_4e971c24fef4a51b524d318736f024d6>::<lambda_4e971c24fef4a51b524d318736f024d6>
          (void *this,int *param_1,int *param_2,int *param_3,int *param_4,newLZ_LOs_NoPad *param_5,
          newlz_optimal_arrivals_tll *param_6)

{
  int iVar1;
  
  *(int *)this = *param_1;
  *(int *)((longlong)this + 4) = *param_2;
  *(int *)((longlong)this + 8) = *param_3;
  iVar1 = *param_4;
  *(newLZ_LOs_NoPad **)((longlong)this + 0x10) = param_5;
  *(newlz_optimal_arrivals_tll **)((longlong)this + 0x18) = param_6;
  *(int *)((longlong)this + 0xc) = iVar1;
  return this;
}

// <lambda_ee9ea0a57b2a7ca38b0adf8cfe292b10> @ 14f33e000

<lambda_ee9ea0a57b2a7ca38b0adf8cfe292b10> * __thiscall
<lambda_ee9ea0a57b2a7ca38b0adf8cfe292b10>::<lambda_ee9ea0a57b2a7ca38b0adf8cfe292b10>
          (void *this,int *param_1,int *param_2,int *param_3,int *param_4,uint *param_5,
          newLZ_LOs_NoPad *param_6,newlz_optimal_arrivals_tll *param_7)

{
  uint uVar1;
  
  *(int *)this = *param_1;
  *(int *)((longlong)this + 4) = *param_2;
  *(int *)((longlong)this + 8) = *param_3;
  *(int *)((longlong)this + 0xc) = *param_4;
  uVar1 = *param_5;
  *(newLZ_LOs_NoPad **)((longlong)this + 0x18) = param_6;
  *(newlz_optimal_arrivals_tll **)((longlong)this + 0x20) = param_7;
  *(uint *)((longlong)this + 0x10) = uVar1;
  return this;
}

// CTMF<unsigned_int,1,0,4> @ 14f33e040

CTMF<unsigned_int,1,0,4> * __thiscall
oo2::CTMF<unsigned_int,1,0,4>::CTMF<unsigned_int,1,0,4>(CTMF<unsigned_int,1,0,4> *this)

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

// CTMF<unsigned_int,2,8,4> @ 14f33e080

CTMF<unsigned_int,2,8,4> * __thiscall
oo2::CTMF<unsigned_int,2,8,4>::CTMF<unsigned_int,2,8,4>(CTMF<unsigned_int,2,8,4> *this)

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

// CTMF<unsigned_int,3,0,4> @ 14f33e0c0

CTMF<unsigned_int,3,0,4> * __thiscall
oo2::CTMF<unsigned_int,3,0,4>::CTMF<unsigned_int,3,0,4>(CTMF<unsigned_int,3,0,4> *this)

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

// FastCTMF<unsigned_short> @ 14f33e100

FastCTMF<unsigned_short> * __thiscall
oo2::FastCTMF<unsigned_short>::FastCTMF<unsigned_short>(FastCTMF<unsigned_short> *this)

{
  this->m_hash_table_arena = (rrArenaAllocator *)0x0;
  (this->m_hash_table).m_ptr = (ushort *)0x0;
  (this->m_hash_table).m_alloc = (void *)0x0;
  this->m_hash_mul = 0;
  this->m_table_size_bits = 0;
  this->m_hash_shift = 0;
  this->m_base_ptr = (uchar *)0x0;
  return this;
}

// FastCTMF<unsigned_int> @ 14f33e130

FastCTMF<unsigned_int> * __thiscall
oo2::FastCTMF<unsigned_int>::FastCTMF<unsigned_int>(FastCTMF<unsigned_int> *this)

{
  this->m_hash_table_arena = (rrArenaAllocator *)0x0;
  (this->m_hash_table).m_ptr = (uint *)0x0;
  (this->m_hash_table).m_alloc = (void *)0x0;
  this->m_hash_mul = 0;
  this->m_table_size_bits = 0;
  this->m_hash_shift = 0;
  this->m_base_ptr = (uchar *)0x0;
  return this;
}

// rrArenaArray<unsigned_short> @ 14f33e160

rrArenaArray<unsigned_short> * __thiscall
oo2::rrArenaArray<unsigned_short>::rrArenaArray<unsigned_short>(rrArenaArray<unsigned_short> *this)

{
  this->m_ptr = (ushort *)0x0;
  this->m_alloc = (void *)0x0;
  return this;
}

// rrArenaArray<unsigned_int> @ 14f33e180

rrArenaArray<unsigned_int> * __thiscall
oo2::rrArenaArray<unsigned_int>::rrArenaArray<unsigned_int>(rrArenaArray<unsigned_int> *this)

{
  this->m_ptr = (uint *)0x0;
  this->m_alloc = (void *)0x0;
  return this;
}

// vector_a<int> @ 14f33e1a0

vector_a<int> * __thiscall oo2::vector_a<int>::vector_a<int>(vector_a<int> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  return this;
}

// vector_a<oo2::newlz_encoder_parse> @ 14f33e1c0

vector_a<oo2::newlz_encoder_parse> * __thiscall
oo2::vector_a<oo2::newlz_encoder_parse>::vector_a<oo2::newlz_encoder_parse>
          (vector_a<oo2::newlz_encoder_parse> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  return this;
}

// vector_base<int,oo2::vector_storage_a<int>_> @ 14f33e1e0

vector_base<int,oo2::vector_storage_a<int>_> * __thiscall
oo2::vector_base<int,oo2::vector_storage_a<int>_>::vector_base<int,oo2::vector_storage_a<int>_>
          (vector_base<int,oo2::vector_storage_a<int>_> *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->m_size = 0;
  return this;
}

// vector_base<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_> @ 14f33e200

vector_base<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_> * __thiscall
oo2::vector_base<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>::
vector_base<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>
          (vector_base<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>
           *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->m_size = 0;
  return this;
}

// vector_flex<int,oo2::vector_storage_a<int>_> @ 14f33e220

vector_flex<int,oo2::vector_storage_a<int>_> * __thiscall
oo2::vector_flex<int,oo2::vector_storage_a<int>_>::vector_flex<int,oo2::vector_storage_a<int>_>
          (vector_flex<int,oo2::vector_storage_a<int>_> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  return this;
}

// vector_flex<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_> @ 14f33e240

vector_flex<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_> * __thiscall
oo2::vector_flex<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>::
vector_flex<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>
          (vector_flex<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>
           *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  return this;
}

// vector_storage_a<int> @ 14f33e260

vector_storage_a<int> * __thiscall
oo2::vector_storage_a<int>::vector_storage_a<int>(vector_storage_a<int> *this)

{
  this->m_data = (void *)0x0;
  this->m_capacity = 0;
  return this;
}

// vector_storage_a<oo2::newlz_encoder_parse> @ 14f33e280

vector_storage_a<oo2::newlz_encoder_parse> * __thiscall
oo2::vector_storage_a<oo2::newlz_encoder_parse>::vector_storage_a<oo2::newlz_encoder_parse>
          (vector_storage_a<oo2::newlz_encoder_parse> *this)

{
  this->m_data = (void *)0x0;
  this->m_capacity = 0;
  return this;
}

// HalfOpenS32Interval @ 14f33e2a0

HalfOpenS32Interval * __thiscall
oo2::HalfOpenS32Interval::HalfOpenS32Interval(HalfOpenS32Interval *this,int param_1,int param_2)

{
  this->base = 0;
  this->len = 0;
  if (param_1 < param_2) {
    this->base = param_1;
    this->len = param_2 - param_1;
  }
  return this;
}

// rrArenaAllocatorStateSaver @ 14f33e2c0

rrArenaAllocatorStateSaver * __thiscall
oo2::rrArenaAllocatorStateSaver::rrArenaAllocatorStateSaver
          (rrArenaAllocatorStateSaver *this,rrArenaAllocator *param_1)

{
  ulong64 uVar1;
  
  this->m_arena = param_1;
  uVar1 = param_1->m_cur;
  this->m_cur_save = uVar1;
  this->m_unordered_save = param_1->m_unorderedStart;
  param_1->m_unorderedStart = uVar1;
  return this;
}

// ~CTMF<unsigned_int,1,0,4> @ 14f33e300

void __thiscall
oo2::CTMF<unsigned_int,1,0,4>::~CTMF<unsigned_int,1,0,4>(CTMF<unsigned_int,1,0,4> *this)

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

// ~CTMF<unsigned_int,2,8,4> @ 14f33e3a0

void __thiscall
oo2::CTMF<unsigned_int,2,8,4>::~CTMF<unsigned_int,2,8,4>(CTMF<unsigned_int,2,8,4> *this)

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

// ~CTMF<unsigned_int,3,0,4> @ 14f33e440

void __thiscall
oo2::CTMF<unsigned_int,3,0,4>::~CTMF<unsigned_int,3,0,4>(CTMF<unsigned_int,3,0,4> *this)

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

// ~FastCTMF<unsigned_short> @ 14f33e4e0

void __thiscall
oo2::FastCTMF<unsigned_short>::~FastCTMF<unsigned_short>(FastCTMF<unsigned_short> *this)

{
  rrArenaAllocator *this_00;
  ushort *puVar1;
  void *pvVar2;
  
  this_00 = this->m_hash_table_arena;
  puVar1 = (this->m_hash_table).m_ptr;
  if (puVar1 != (ushort *)0x0) {
    if ((this_00 != (rrArenaAllocator *)0x0) &&
       (pvVar2 = (this->m_hash_table).m_alloc, pvVar2 != (void *)0x0)) {
      if (this_00->m_unorderedStart != 0) {
        rrArenaAllocator::Free
                  (this_00,pvVar2,(1L << ((byte)this->m_table_size_bits & 0x3f)) * 2 + 0x40);
      }
      (this->m_hash_table).m_alloc = (void *)0x0;
      (this->m_hash_table).m_ptr = (ushort *)0x0;
      return;
    }
    (*g_fp_OodleCore_Plugin_Free)(puVar1);
    (this->m_hash_table).m_ptr = (ushort *)0x0;
  }
  return;
}

// ~FastCTMF<unsigned_int> @ 14f33e580

void __thiscall oo2::FastCTMF<unsigned_int>::~FastCTMF<unsigned_int>(FastCTMF<unsigned_int> *this)

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

// ~rrArenaArray<unsigned_short> @ 14f33e610

void __thiscall
oo2::rrArenaArray<unsigned_short>::~rrArenaArray<unsigned_short>(rrArenaArray<unsigned_short> *this)

{
  return;
}

// ~rrArenaArray<unsigned_int> @ 14f33e620

void __thiscall
oo2::rrArenaArray<unsigned_int>::~rrArenaArray<unsigned_int>(rrArenaArray<unsigned_int> *this)

{
  return;
}

// ~vector_a<int> @ 14f33e630

void __thiscall oo2::vector_a<int>::~vector_a<int>(vector_a<int> *this)

{
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  return;
}

// ~vector_a<oo2::newlz_encoder_parse> @ 14f33e650

void __thiscall
oo2::vector_a<oo2::newlz_encoder_parse>::~vector_a<oo2::newlz_encoder_parse>
          (vector_a<oo2::newlz_encoder_parse> *this)

{
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  return;
}

// ~vector_base<int,oo2::vector_storage_a<int>_> @ 14f33e670

void __thiscall
oo2::vector_base<int,oo2::vector_storage_a<int>_>::~vector_base<int,oo2::vector_storage_a<int>_>
          (vector_base<int,oo2::vector_storage_a<int>_> *this)

{
  this->m_size = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  return;
}

// ~vector_base<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_> @ 14f33e690

void __thiscall
oo2::vector_base<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>::
~vector_base<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>
          (vector_base<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>
           *this)

{
  this->m_size = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  return;
}

// ~vector_flex<int,oo2::vector_storage_a<int>_> @ 14f33e6b0

void __thiscall
oo2::vector_flex<int,oo2::vector_storage_a<int>_>::~vector_flex<int,oo2::vector_storage_a<int>_>
          (vector_flex<int,oo2::vector_storage_a<int>_> *this)

{
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  return;
}

// ~vector_flex<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_> @ 14f33e6d0

void __thiscall
oo2::vector_flex<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>::
~vector_flex<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>
          (vector_flex<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>
           *this)

{
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  return;
}

// ~vector_storage_a<int> @ 14f33e6f0

void __thiscall oo2::vector_storage_a<int>::~vector_storage_a<int>(vector_storage_a<int> *this)

{
  return;
}

// ~vector_storage_a<oo2::newlz_encoder_parse> @ 14f33e700

void __thiscall
oo2::vector_storage_a<oo2::newlz_encoder_parse>::~vector_storage_a<oo2::newlz_encoder_parse>
          (vector_storage_a<oo2::newlz_encoder_parse> *this)

{
  return;
}

// ~rrArenaAllocatorStateSaver @ 14f33e720

void __thiscall
oo2::rrArenaAllocatorStateSaver::~rrArenaAllocatorStateSaver(rrArenaAllocatorStateSaver *this)

{
  ulong64 uVar1;
  rrArenaAllocator *prVar2;
  
  prVar2 = this->m_arena;
  if (prVar2->m_unorderedStart == 0) {
    prVar2->m_cur = this->m_cur_save;
    return;
  }
  if (prVar2->m_cur != prVar2->m_unorderedStart) {
    do {
      uVar1 = this->m_arena->m_cur;
      this->m_arena->m_cur = (uVar1 - *(longlong *)(uVar1 - 0x10)) - 0x10;
      prVar2 = this->m_arena;
    } while (prVar2->m_cur != prVar2->m_unorderedStart);
  }
  prVar2->m_unorderedStart = this->m_unordered_save;
  this->m_arena->m_cur = this->m_cur_save;
  return;
}

// operator_new @ 14f33e790

void * __cdecl operator_new(ulong64 param_1,ERRPlacementNew param_2,void *param_3)

{
  return param_3;
}

// operator_delete @ 14f33e7a0

void __cdecl operator_delete(void *param_1,ERRPlacementNew param_2,void *param_3)

{
  return;
}

// operator[] @ 14f33e7b0

newlz_encoder_parse * __thiscall
oo2::vector_flex<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>::
operator[](vector_flex<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>
           *this,ulong64 param_1)

{
  return (newlz_encoder_parse *)(param_1 * 0x10 + *(longlong *)this);
}

// operator[] @ 14f33e7d0

int * __thiscall
oo2::newLZ_PaddedLO_Storage::operator[](newLZ_PaddedLO_Storage *this,long64 param_1)

{
  return this->contents + param_1 + 4;
}

// operator[] @ 14f33e7e0

int * __thiscall
oo2::newLZ_PaddedLO_Storage::operator[](newLZ_PaddedLO_Storage *this,long64 param_1)

{
  return this->contents + param_1 + 4;
}

// operator[] @ 14f33e7f0

newlz_optimal_arrival_tll * __thiscall
oo2::newlz_optimal_arrivals_tll::operator[](newlz_optimal_arrivals_tll *this,long64 param_1)

{
  return this->payloads + param_1;
}

// operator() @ 14f33e800

void __thiscall <lambda_0b0f612dccaef8b3539db44dcbc21e11>::operator()(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  iVar1 = *(int *)((longlong)this + 0xc);
  puVar3 = *(undefined4 **)((longlong)this + 0x10);
  uVar2 = *(undefined4 *)this;
  puVar6 = (undefined4 *)
           ((longlong)(*(int *)((longlong)this + 4) + param_1 + 2) * 0x1c +
           *(longlong *)(*(longlong *)((longlong)this + 0x18) + 8));
  uVar4 = *(undefined4 *)((longlong)this + 8);
  puVar5 = puVar3 + 2;
  puVar6[3] = param_1 + 2;
  puVar6[4] = uVar4;
  if (iVar1 == 0) {
    *puVar6 = *puVar3;
    uVar4 = puVar3[1];
  }
  else {
    if (iVar1 == 1) {
      uVar4 = puVar3[1];
    }
    else {
      uVar4 = *puVar5;
      puVar5 = puVar3 + 1;
    }
    *puVar6 = uVar4;
    uVar4 = *puVar3;
  }
  puVar6[1] = uVar4;
  puVar6[2] = *puVar5;
  puVar6[5] = 0;
  puVar6[6] = uVar2;
  return;
}

// operator() @ 14f33e880

void __thiscall <lambda_219ae4272d9695eb7df24ed7841a4965>::operator()(void *this,int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar4 = *(undefined4 **)((longlong)this + 0x18);
  uVar1 = *(undefined4 *)((longlong)this + 0x10);
  puVar5 = (undefined4 *)
           ((longlong)(*(int *)((longlong)this + 8) + *(int *)this + param_1) * 0x1c +
           *(longlong *)(*(longlong *)((longlong)this + 0x20) + 8));
  uVar2 = *(undefined4 *)((longlong)this + 0xc);
  uVar3 = *(undefined4 *)((longlong)this + 4);
  puVar5[3] = *(int *)this + param_1;
  puVar5[4] = uVar2;
  *puVar5 = uVar1;
  puVar5[1] = *puVar4;
  puVar5[2] = puVar4[1];
  puVar5[5] = 0;
  puVar5[6] = uVar3;
  return;
}

// operator() @ 14f33e8e0

void __thiscall <lambda_4e971c24fef4a51b524d318736f024d6>::operator()(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  iVar1 = *(int *)((longlong)this + 0xc);
  puVar3 = *(undefined4 **)((longlong)this + 0x10);
  uVar2 = *(undefined4 *)this;
  puVar6 = (undefined4 *)
           ((longlong)(*(int *)((longlong)this + 4) + param_1 + 2) * 0x1c +
           *(longlong *)(*(longlong *)((longlong)this + 0x18) + 8));
  uVar4 = *(undefined4 *)((longlong)this + 8);
  puVar5 = puVar3 + 2;
  puVar6[3] = param_1 + 2;
  puVar6[4] = uVar4;
  if (iVar1 == 0) {
    *puVar6 = *puVar3;
    uVar4 = puVar3[1];
  }
  else {
    if (iVar1 == 1) {
      uVar4 = puVar3[1];
    }
    else {
      uVar4 = *puVar5;
      puVar5 = puVar3 + 1;
    }
    *puVar6 = uVar4;
    uVar4 = *puVar3;
  }
  puVar6[1] = uVar4;
  puVar6[2] = *puVar5;
  puVar6[5] = 0;
  puVar6[6] = uVar2;
  return;
}

// operator() @ 14f33e960

void __thiscall <lambda_ee9ea0a57b2a7ca38b0adf8cfe292b10>::operator()(void *this,int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar4 = *(undefined4 **)((longlong)this + 0x18);
  uVar1 = *(undefined4 *)((longlong)this + 0x10);
  puVar5 = (undefined4 *)
           ((longlong)(*(int *)((longlong)this + 8) + *(int *)this + param_1) * 0x1c +
           *(longlong *)(*(longlong *)((longlong)this + 0x20) + 8));
  uVar2 = *(undefined4 *)((longlong)this + 0xc);
  uVar3 = *(undefined4 *)((longlong)this + 4);
  puVar5[3] = *(int *)this + param_1;
  puVar5[4] = uVar2;
  *puVar5 = uVar1;
  puVar5[1] = *puVar4;
  puVar5[2] = puVar4[1];
  puVar5[5] = 0;
  puVar5[6] = uVar3;
  return;
}

// operator() @ 14f33e9c0

void __thiscall
oo2::swap_functor<oo2::newlz_encoder_parse>::operator()
          (swap_functor<oo2::newlz_encoder_parse> *this,newlz_encoder_parse *param_1,
          newlz_encoder_parse *param_2)

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

// Add @ 14f33e9e0

void __thiscall oo2::newLZ_LOs::Add(newLZ_LOs *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (this->lasts).contents[4];
  iVar2 = (this->lasts).contents[5];
  (this->lasts).contents[4] = param_1;
  (this->lasts).contents[5] = iVar1;
  (this->lasts).contents[6] = iVar2;
  return;
}

// Allocate @ 14f33ea00

void __thiscall
oo2::rrArenaArray<unsigned_short>::Allocate
          (rrArenaArray<unsigned_short> *this,rrArenaAllocator *param_1,long64 param_2,int param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  int iVar4;
  ushort *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  lVar1 = param_2 * 2;
  lVar7 = (longlong)param_3;
  if (param_1 != (rrArenaAllocator *)0x0) {
    puVar5 = (ushort *)param_1->m_cur;
    uVar8 = lVar1 + 0xf + lVar7 & 0xfffffffffffffff0;
    uVar6 = (ulonglong)(-(uint)(param_1->m_unorderedStart != 0) & 0x10);
    if (param_1->m_size + param_1->m_base < (longlong)puVar5 + uVar8 + uVar6) {
      this->m_alloc = (void *)0x0;
    }
    else {
      puVar3 = (ulonglong *)((longlong)puVar5 + uVar8);
      param_1->m_cur = (ulong64)puVar3;
      if (param_1->m_unorderedStart != 0) {
        *puVar3 = uVar8;
        puVar3[1] = 0;
        param_1->m_cur = param_1->m_cur + uVar6;
        puVar3 = (ulonglong *)param_1->m_cur;
      }
      puVar2 = (ulonglong *)param_1->m_cur_max;
      if ((ulonglong *)param_1->m_cur_max <= puVar3) {
        puVar2 = puVar3;
      }
      param_1->m_cur_max = (ulong64)puVar2;
      this->m_alloc = puVar5;
      if (puVar5 != (ushort *)0x0) {
        if (param_3 != 0) {
          puVar5 = (ushort *)((longlong)puVar5 + lVar7 + -1 & -lVar7);
        }
        this->m_ptr = puVar5;
        return;
      }
    }
  }
  iVar4 = 0x10;
  if (param_3 != 0) {
    iVar4 = param_3;
  }
  puVar5 = (*g_fp_OodleCore_Plugin_MallocAligned)(lVar1,iVar4);
  if (puVar5 == (ushort *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(lVar1);
  }
  this->m_ptr = puVar5;
  return;
}

// Allocate @ 14f33eb00

void __thiscall
oo2::rrArenaArray<unsigned_int>::Allocate
          (rrArenaArray<unsigned_int> *this,rrArenaAllocator *param_1,long64 param_2,int param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  int iVar4;
  uint *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  lVar1 = param_2 * 4;
  lVar7 = (longlong)param_3;
  if (param_1 != (rrArenaAllocator *)0x0) {
    puVar5 = (uint *)param_1->m_cur;
    uVar8 = lVar1 + 0xf + lVar7 & 0xfffffffffffffff0;
    uVar6 = (ulonglong)(-(uint)(param_1->m_unorderedStart != 0) & 0x10);
    if (param_1->m_size + param_1->m_base < (longlong)puVar5 + uVar8 + uVar6) {
      this->m_alloc = (void *)0x0;
    }
    else {
      puVar3 = (ulonglong *)((longlong)puVar5 + uVar8);
      param_1->m_cur = (ulong64)puVar3;
      if (param_1->m_unorderedStart != 0) {
        *puVar3 = uVar8;
        puVar3[1] = 0;
        param_1->m_cur = param_1->m_cur + uVar6;
        puVar3 = (ulonglong *)param_1->m_cur;
      }
      puVar2 = (ulonglong *)param_1->m_cur_max;
      if ((ulonglong *)param_1->m_cur_max <= puVar3) {
        puVar2 = puVar3;
      }
      param_1->m_cur_max = (ulong64)puVar2;
      this->m_alloc = puVar5;
      if (puVar5 != (uint *)0x0) {
        if (param_3 != 0) {
          puVar5 = (uint *)((longlong)puVar5 + lVar7 + -1 & -lVar7);
        }
        this->m_ptr = puVar5;
        return;
      }
    }
  }
  iVar4 = 0x10;
  if (param_3 != 0) {
    iVar4 = param_3;
  }
  puVar5 = (*g_fp_OodleCore_Plugin_MallocAligned)(lVar1,iVar4);
  if (puVar5 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(lVar1);
  }
  this->m_ptr = puVar5;
  return;
}

// Find @ 14f33ec00

int __thiscall oo2::newLZ_LOs_NoPad::Find(newLZ_LOs_NoPad *this,int param_1)

{
  int iVar1;
  
  if (param_1 == this->lasts[0]) {
    return 0;
  }
  if (param_1 == this->lasts[1]) {
    return 1;
  }
  iVar1 = -1;
  if (param_1 == this->lasts[2]) {
    iVar1 = 2;
  }
  return iVar1;
}

// GetNumBytesZeroNeverAllR @ 14f33ec30

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

// Hydra_Compress @ 14f33ec40

/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

long64 __cdecl
oo2::Hydra_Compress(OodleLZ_Compressor param_1,uchar *param_2,uchar *param_3,long64 param_4,
                   OodleLZ_CompressionLevel param_5,OodleLZ_CompressOptions *param_6,uchar *param_7,
                   LRMCascade *param_8,rrArenaAllocator *param_9)

{
  ulong64 uVar1;
  ulong64 uVar2;
  long64 lVar3;
  ulong64 uVar4;
  newlz_vtable local_238;
  newlz_vtable local_188;
  newlz_vtable local_d8;
  
  if (param_2 == (uchar *)0x0) {
    lVar3 = -1;
  }
  else {
    uVar1 = param_9->m_cur;
    uVar2 = param_9->m_unorderedStart;
    param_9->m_unorderedStart = uVar1;
    newlz_vtable::newlz_vtable(&local_238);
    newlz_vtable::newlz_vtable(&local_188);
    newlz_vtable::newlz_vtable(&local_d8);
    Kraken_FillVTable(&local_238,OodleLZ_Compressor_Hydra,param_4,param_5,param_6,param_7,param_2,
                      param_9);
    Mermaid_FillVTable(&local_188,OodleLZ_Compressor_Mermaid,param_4,param_5,param_6,param_7,param_2
                       ,param_9);
    local_238.pvtable2 = &local_188;
    local_188.lambda = local_238.lambda;
    local_238.try_huff_chunks = true;
    local_188.try_huff_chunks = false;
    if (5 < g_OodleLZ_BackwardsCompatible_MajorVersion) {
      Leviathan_FillVTable
                (&local_d8,OodleLZ_Compressor_Leviathan,param_4,param_5,param_6,param_7,param_2,
                 param_9);
      local_188.pvtable2 = &local_d8;
      local_d8.lambda = local_238.lambda;
      local_d8.try_huff_chunks = false;
    }
    lVar3 = newlz_compress_vtable(&local_238,param_2,param_3,param_4,param_7,param_8,param_9);
    newlz_vtable::~newlz_vtable(&local_d8);
    newlz_vtable::~newlz_vtable(&local_188);
    newlz_vtable::~newlz_vtable(&local_238);
    if (param_9->m_unorderedStart != 0) {
      uVar4 = param_9->m_cur;
      while (uVar4 != param_9->m_unorderedStart) {
        uVar4 = uVar4 + (-0x10 - *(longlong *)(uVar4 - 0x10));
        param_9->m_cur = uVar4;
      }
      param_9->m_unorderedStart = uVar2;
    }
    param_9->m_cur = uVar1;
  }
  return lVar3;
}

// IsLO @ 14f33ee60

bool __thiscall oo2::match::IsLO(match *this)

{
  return this->off < 1;
}

// Kraken_Compress @ 14f33ee80

/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

long64 __cdecl
oo2::Kraken_Compress
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
  Kraken_FillVTable(&local_d8,param_1,param_4,param_5,param_6,param_7,param_2,param_9);
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

// Kraken_DecodeOneQuantum @ 14f33efe0

/* WARNING: Enum "OodleLZ_Decode_ThreadPhase": Some values do not have unique names */

int __cdecl
oo2::Kraken_DecodeOneQuantum
          (uchar *param_1,uchar *param_2,uchar *param_3,int param_4,uchar *param_5,long64 param_6,
          void *param_7,long64 param_8,OodleLZ_Decode_ThreadPhase param_9)

{
  newLZ_chunk_arrays *pnVar1;
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
  newLZ_chunk_arrays *_Src_00;
  ushort *_Dst;
  uchar *puVar14;
  newLZ_chunk_arrays *local_58;
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
        goto LAB_14f33f453;
      }
      if (((uint *)(_Size + (longlong)_Dst) < _Src) || (puVar6 < _Dst)) {
        bVar3 = (byte)*_Src >> 4;
        uVar5 = (uint)bVar3;
        if ((byte)*_Src < 0x80) {
          if (bVar3 != 0) goto LAB_14f33f3fe;
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
LAB_14f33f3fe:
            local_50 = _Dst;
            pbVar8 = (byte *)newLZ_get_array_comp
                                       (uVar5,(uchar **)&local_50,(uchar *)_Src,(uchar *)puVar6,
                                        &param_8,_Size,(uchar *)_Src_00,puVar14);
          }
        }
        if (local_50 != _Dst) {
          return -1;
        }
        goto LAB_14f33f453;
      }
      bVar3 = (byte)*_Src >> 4;
      uVar5 = (uint)bVar3;
      if ((byte)*_Src < 0x80) {
        if (bVar3 == 0) {
          uVar5 = *_Src;
          local_58 = (newLZ_chunk_arrays *)((longlong)_Src + 3);
          uVar2 = (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8;
          uVar7 = (ulonglong)((uVar2 | uVar5 << 0x18 & 0x3ffff00) >> 8);
          if ((uVar2 | uVar5 << 0x18) >> 8 < 0x40000) {
            if ((longlong)_Size < (longlong)uVar7) {
              pbVar8 = (byte *)0xffffffffffffffff;
              local_58 = _Src_00;
              memcpy(_Dst,_Src_00,_Size);
            }
            else {
              if ((longlong)uVar7 <= (longlong)puVar6 - (longlong)local_58) goto LAB_14f33f265;
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
          goto LAB_14f33f453;
        }
LAB_14f33f2ff:
        local_58 = _Src_00;
        pbVar8 = (byte *)newLZ_get_array_comp
                                   (uVar5,(uchar **)&local_58,(uchar *)_Src,(uchar *)puVar6,&param_8
                                    ,_Size,(uchar *)_Src_00,puVar14);
LAB_14f33f333:
        if (local_58 != _Src_00) {
          return -1;
        }
        memcpy(_Dst,_Src_00,_Size);
      }
      else {
        uVar5 = uVar5 & 7;
        if ((bVar3 & 7) != 0) goto LAB_14f33f2ff;
        local_58 = (newLZ_chunk_arrays *)((longlong)_Src + 2);
        uVar7 = (ulonglong)((ushort)((ushort)*_Src >> 8 | (ushort)*_Src << 8) & 0xfff);
        if ((longlong)uVar7 <= (longlong)_Size) {
          if (puVar6 < (ushort *)((longlong)&local_58->chunk_ptr + uVar7)) {
            pbVar8 = (byte *)0xffffffffffffffff;
            local_58 = _Src_00;
            memcpy(_Dst,_Src_00,_Size);
            goto LAB_14f33f453;
          }
LAB_14f33f265:
          pbVar8 = (byte *)((uVar7 - (longlong)_Src) + (longlong)local_58);
          param_8 = uVar7;
          goto LAB_14f33f333;
        }
        pbVar8 = (byte *)0xffffffffffffffff;
        local_58 = _Src_00;
        memcpy(_Dst,_Src_00,_Size);
      }
LAB_14f33f453:
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
          goto LAB_14f33f52b;
          pcVar12 = "OODLE ERROR : corruption : chunk_len >= 128\n";
          iVar11 = 0xb26;
        }
        else {
          lVar4 = OodleLZ_Compressor_ScratchMemSize(OodleLZ_Compressor_Kraken,_Size);
          if (lVar4 <= (longlong)puVar14 - (longlong)_Src_00) {
            pnVar1 = (newLZ_chunk_arrays *)((longlong)&_Src_00->chunk_ptr + lVar4);
            if ((param_9 & OodleLZ_Decode_ThreadPhase1) != 0) {
              rrMemSetZero(_Src_00,0x50);
              lVar4 = newLZ_decode_chunk_phase1
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
              lVar4 = newLZ_decode_chunk_phase2(uVar9,(uchar *)_Dst,_Size,(long64)pbVar13,_Src_00);
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
            goto LAB_14f33f48c;
          }
          ooLogErrorPre();
          if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
          goto LAB_14f33f52b;
          pcVar12 = "OODLE ERROR : decoder scratch too small\n";
          iVar11 = 0xb2e;
        }
        (*g_fp_OodleCore_Plugin_Printf)
                  (0,"v:\\devel\\projects\\oodle2\\core\\newlz.cpp",iVar11,pcVar12);
LAB_14f33f52b:
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
LAB_14f33f48c:
    _Src = (uint *)((longlong)_Src + (longlong)pbVar8);
    _Dst = (ushort *)((longlong)_Dst + _Size);
  } while( true );
}

// Kraken_Decode_Headerless @ 14f33f540

long64 __cdecl
oo2::Kraken_Decode_Headerless
          (uchar *param_1,long64 param_2,uchar *param_3,long64 param_4,ulong64 param_5,int param_6,
          int param_7,int param_8,void *param_9,long64 param_10)

{
  long64 lVar1;
  size_t sVar2;
  int iVar3;
  char *pcVar4;
  uchar *puVar5;
  size_t local_res10;
  uchar *local_38 [2];
  
  if (param_2 < 0x20001) {
    if (param_6 == 0) {
      puVar5 = (uchar *)(param_10 + (longlong)param_9);
      if (param_7 == 0) {
        local_38[0] = param_9;
        lVar1 = newLZ_get_array(local_38,param_3,param_3 + param_4,(long64 *)&local_res10,param_2,
                                false,param_9,puVar5);
        sVar2 = local_res10;
        if (lVar1 < 0) {
          ooLogErrorPre();
          if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
            (*g_fp_OodleCore_Plugin_Printf)
                      (0,"v:\\devel\\projects\\oodle2\\core\\newlz.cpp",0xbd2,
                       "OODLE ERROR : Kraken_Decoder_Headerless: !lzEnable literal stream decode failed.\n"
                      );
            ooLogErrorPost();
            return 0;
          }
        }
        else {
          memcpy(param_1,local_38[0],local_res10);
          if (param_4 < lVar1) {
            ooLogErrorPre();
            if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
            {
              (*g_fp_OodleCore_Plugin_Printf)
                        (0,"v:\\devel\\projects\\oodle2\\core\\newlz.cpp",0xbdb,
                         "OODLE ERROR : Kraken_Decode_Headerless: !lz internal error - chunk_comp_len > comp_size.\n"
                        );
              ooLogErrorPost();
              return 0;
            }
          }
          else {
            if (lVar1 < param_4) {
              ooLogErrorPre();
              if (g_fp_OodleCore_Plugin_Printf !=
                  (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
                (*g_fp_OodleCore_Plugin_Printf)
                          (0,"v:\\devel\\projects\\oodle2\\core\\newlz.cpp",0xbe1,
                           "OODLE ERROR : Kraken_Decode_Headerless: !lz WARNING - given comp_size=%lld but literal stream only consumed %lld bytes.\n"
                          );
              }
              ooLogErrorPost();
              sVar2 = local_res10;
            }
            if (sVar2 == param_2) {
              return param_2;
            }
            ooLogErrorPre();
            if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
            {
              (*g_fp_OodleCore_Plugin_Printf)
                        (0,"v:\\devel\\projects\\oodle2\\core\\newlz.cpp",0xbe7,
                         "OODLE ERROR : Kraken_Decode_Headerless: !lz error - specified decomp_size was %lld but literal stream len was %lld.\n"
                        );
            }
          }
        }
        ooLogErrorPost();
        return 0;
      }
      if ((uchar *)((longlong)param_9 + 0x50) < puVar5) {
        rrMemSetZero(param_9,0x50);
        lVar1 = newLZ_decode_chunk_phase1
                          ((uint)(param_8 == 0),param_3,param_3 + param_4,param_1,param_2,param_5,
                           (uchar *)((longlong)param_9 + 0x50),puVar5,param_9);
        if (lVar1 < 0) {
          ooLogErrorPre();
          if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
          goto LAB_14f33f882;
          pcVar4 = "OODLE ERROR : Kraken_Decode_Headerless: phase1 (FE) decode failed!\n";
          iVar3 = 0xbfd;
        }
        else {
          lVar1 = newLZ_decode_chunk_phase2((uint)(param_8 == 0),param_1,param_2,param_5,param_9);
          if (-1 < lVar1) {
            return param_2;
          }
          ooLogErrorPre();
          if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
          goto LAB_14f33f882;
          pcVar4 = "OODLE ERROR : Kraken_Decode_Headerless: phase2 (BE) decode failed!\n";
          iVar3 = 0xc03;
        }
      }
      else {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
        goto LAB_14f33f882;
        pcVar4 = "OODLE ERROR : Kraken_Decode_Headerless: lz internal error - scratch?!?\n";
        iVar3 = 0xbf4;
      }
    }
    else {
      if (param_4 == param_2) {
        memmove(param_1,param_3,param_2);
        return param_2;
      }
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto LAB_14f33f882;
      pcVar4 = "OODLE ERROR : Kraken_Decode_Headerless: memcpy set but decomp_size != comp_size.\n";
      iVar3 = 0xbbc;
    }
  }
  else {
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto LAB_14f33f882;
    pcVar4 = "OODLE ERROR : Kraken_Decode_Headerless: decomp_size too large, must be <=128KiB.\n";
    iVar3 = 0xbb4;
  }
  (*g_fp_OodleCore_Plugin_Printf)(0,"v:\\devel\\projects\\oodle2\\core\\newlz.cpp",iVar3,pcVar4);
LAB_14f33f882:
  ooLogErrorPost();
  return 0;
}

// Kraken_FillVTable @ 14f33f8a0

/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

void __cdecl
oo2::Kraken_FillVTable
          (newlz_vtable *param_1,OodleLZ_Compressor param_2,long64 param_3,
          OodleLZ_CompressionLevel param_4,OodleLZ_CompressOptions *param_5,uchar *param_6,
          uchar *param_7,rrArenaAllocator *param_8)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  OodleSpeedFit *pOVar4;
  OodleLZ_CompressionLevel OVar5;
  int iVar6;
  float fVar7;
  
  OVar5 = OodleLZ_CompressionLevel_VeryFast;
  if (2 < (int)param_4) {
    OVar5 = param_4;
  }
  iVar1 = GetLZMatchTableBits(param_3,OVar5,param_5,0x10,0x14,0x11,0x18);
  param_1->compressor = param_2;
  param_1->level = param_4;
  param_1->decodeType = 6;
  pOVar4 = speedfit_get_default();
  param_1->speedfit = pOVar4;
  iVar3 = g_OodleLZ_BackwardsCompatible_MajorVersion;
  param_1->lambda = 0.01;
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
  param_1->try_huff_chunks = 2 < (int)param_4;
  fVar7 = fVar7 * __real_3c23d70a;
  param_1->entropy_flags = 0;
  param_1->bitstream_flags = 0;
  param_1->lambda = fVar7;
  if (2 < iVar3) {
    param_1->entropy_flags = 1;
  }
  uVar2 = (uint)(2 < iVar3);
  if (5 < iVar3) {
    param_1->entropy_flags = uVar2 | 0xde;
    if ((int)param_4 < 7) {
      if ((int)param_4 < 5) goto LAB_14f33f9b3;
    }
    else {
      param_1->entropy_flags = uVar2 | 0xfe;
    }
    param_1->bitstream_flags = 4;
  }
LAB_14f33f9b3:
  if (param_5->profile == OodleLZ_Profile_Reduced) {
    kraken_custom_reduced_profile(param_1);
  }
  iVar6 = 4;
  if (param_4 + OodleLZ_CompressionLevel_VeryFast < 6) {
    iVar3 = param_5->minMatchLen;
    if (iVar3 < 5) {
      if ((0x10000 < param_3) && (param_7 != (uchar *)0x0)) {
        iVar3 = newlz_guess_should_hash_length_be_over_four(param_7,param_3);
        iVar6 = 4;
        if (iVar3 != 0) {
          iVar6 = 6;
        }
      }
    }
    else {
      iVar6 = iVar3;
      if (8 < iVar3) {
        iVar6 = 8;
      }
    }
  }
  if (0x7fffffff < param_4) {
    if (1 < param_4 + OodleLZ_CompressionLevel_Normal) {
      if (param_4 == OodleLZ_CompressionLevel_HyperFast2) {
        iVar3 = iVar1;
        if ((param_5->matchTableSizeLog2 < 1) && (iVar3 = 0xe, iVar1 < 0xe)) {
          iVar3 = iVar1;
        }
        newlz_vtable_setup_ctmf<oo2::FastCTMF<unsigned_short>_>
                  (param_1,param_6,param_7,iVar3,param_8,iVar6);
        param_1->fp_encode_chunk =
             newLZ_encode_chunk_fast_mode<oo2::FastCTMF<unsigned_short>,4,1,0,0,0,0>;
        param_1->entropy_flags = param_1->entropy_flags & 0xffffffe9;
        return;
      }
      if (param_4 == OodleLZ_CompressionLevel_HyperFast) {
        iVar3 = iVar1;
        if ((param_5->matchTableSizeLog2 < 1) && (iVar3 = 0x10, iVar1 < 0x10)) {
          iVar3 = iVar1;
        }
        newlz_vtable_setup_ctmf<oo2::FastCTMF<unsigned_int>_>
                  (param_1,param_6,param_7,iVar3,param_8,iVar6);
        param_1->fp_encode_chunk =
             newLZ_encode_chunk_fast_mode<oo2::FastCTMF<unsigned_int>,4,1,0,1,0,0>;
        param_1->entropy_flags = param_1->entropy_flags & 0xffffffe9;
        return;
      }
    }
    iVar3 = iVar1;
    if ((param_5->matchTableSizeLog2 < 1) && (iVar3 = 0xc, iVar1 < 0xc)) {
      iVar3 = iVar1;
    }
    newlz_vtable_setup_ctmf<oo2::FastCTMF<unsigned_short>_>
              (param_1,param_6,param_7,iVar3,param_8,iVar6);
    param_1->fp_encode_chunk =
         newLZ_encode_chunk_fast_mode<oo2::FastCTMF<unsigned_short>,3,0,1,0,0,0>;
    param_1->entropy_flags = param_1->entropy_flags & 0xffffffe9;
    return;
  }
  if ((int)param_4 < 2) {
    iVar3 = iVar1;
    if ((param_5->matchTableSizeLog2 < 1) && (iVar3 = 0x13, iVar1 < 0x13)) {
      iVar3 = iVar1;
    }
    newlz_vtable_setup_ctmf<oo2::FastCTMF<unsigned_int>_>
              (param_1,param_6,param_7,iVar3,param_8,iVar6);
    param_1->entropy_flags = param_1->entropy_flags & 0xffffffe9;
    param_1->fp_encode_chunk = newLZ_encode_chunk_fast_mode<oo2::FastCTMF<unsigned_int>,5,1,0,1,1,1>
    ;
    return;
  }
  if ((int)param_4 < 3) {
    newlz_vtable_setup_ctmf<oo2::CTMF<unsigned_int,1,0,4>_>
              (param_1,param_6,param_7,iVar1,param_8,iVar6);
    param_1->entropy_flags = param_1->entropy_flags & 0xffffffed;
    param_1->fp_encode_chunk = newLZ_encode_chunk<oo2::CTMF<unsigned_int,1,0,4>,0,1,8>;
    return;
  }
  if (param_4 == OodleLZ_CompressionLevel_Fast) {
    iVar3 = iVar1;
    if ((param_5->matchTableSizeLog2 < 1) && (iVar3 = 0x15, iVar1 < 0x15)) {
      iVar3 = iVar1;
    }
    newlz_vtable_setup_ctmf<oo2::CTMF<unsigned_int,3,0,4>_>
              (param_1,param_6,param_7,iVar3,param_8,iVar6);
    param_1->entropy_flags = param_1->entropy_flags & 0xffffffed;
    param_1->fp_encode_chunk = newLZ_encode_chunk<oo2::CTMF<unsigned_int,3,0,4>,1,1,0>;
    return;
  }
  if (5 < (int)param_4) {
    newlz_scratchblock::extend(&param_1->carried_encoder_state,0x1804,param_8);
    (param_1->carried_encoder_state).m_size = 0;
    param_1->fp_encode_chunk = newLZ_encode_chunk_optimal_tll;
    param_1->fp_create_match_finder = SuffixTrie_CreateMatchFinder;
    param_1->find_all_matches_num_pairs = 4;
    param_1->wants_dic_limit_splits = true;
    return;
  }
  if (param_4 == OodleLZ_CompressionLevel_Optimal1) {
    newlz_scratchblock::extend(&param_1->carried_encoder_state,0x1804,param_8);
    (param_1->carried_encoder_state).m_size = 0;
    param_1->fp_encode_chunk = newLZ_encode_chunk_optimal_tll;
    param_1->fp_create_match_finder = CTMF_CreateMatchFinder;
    param_1->find_all_matches_num_pairs = 4;
    param_1->wants_dic_limit_splits = false;
    return;
  }
  newlz_vtable_setup_ctmf<oo2::CTMF<unsigned_int,2,8,4>_>(param_1,param_6,param_7,iVar1,param_8,0);
  param_1->fp_encode_chunk = newLZ_encode_chunk<oo2::CTMF<unsigned_int,2,8,4>,2,1,0>;
  if (param_4 != OodleLZ_CompressionLevel_Normal) {
    return;
  }
  param_1->entropy_flags = param_1->entropy_flags & 0xfffffffd;
  return;
}

// LastOffset @ 14f33fd20

int __thiscall oo2::newLZ_LOs_NoPad::LastOffset(newLZ_LOs_NoPad *this)

{
  return this->lasts[0];
}

// MTF3 @ 14f33fd30

int __thiscall oo2::newLZ_LOs::MTF3(newLZ_LOs *this,long64 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (this->lasts).contents[param_1 + 4];
  iVar2 = (this->lasts).contents[param_1 + 2];
  (this->lasts).contents[param_1 + 4] = (this->lasts).contents[param_1 + 3];
  (this->lasts).contents[param_1 + 3] = iVar2;
  (this->lasts).contents[4] = iVar1;
  return iVar1;
}

// MTF4 @ 14f33fd60

int __thiscall oo2::newLZ_LOs::MTF4(newLZ_LOs *this,long64 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (this->lasts).contents[param_1 + 4];
  iVar2 = (this->lasts).contents[param_1 + 2];
  iVar3 = (this->lasts).contents[param_1 + 1];
  (this->lasts).contents[param_1 + 4] = (this->lasts).contents[param_1 + 3];
  (this->lasts).contents[param_1 + 3] = iVar2;
  (this->lasts).contents[param_1 + 2] = iVar3;
  (this->lasts).contents[4] = iVar1;
  return iVar1;
}

// OodleFree @ 14f33fd90

void __cdecl oo2::OodleFree(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f33fd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleCore_Plugin_Free)(param_1);
  return;
}

// OodleFreeSized @ 14f33fda0

void __cdecl oo2::OodleFreeSized(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f33fda0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleCore_Plugin_Free)(param_1);
  return;
}

// OodleMalloc @ 14f33fdc0

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

// OodleMallocAligned @ 14f33fe10

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

// RR_GET16_NATIVE @ 14f33fe50

ushort __cdecl oo2::RR_GET16_NATIVE(void *param_1)

{
  return *(ushort *)param_1;
}

// RR_GET32_NATIVE @ 14f33fe60

uint __cdecl oo2::RR_GET32_NATIVE(void *param_1)

{
  return *(uint *)param_1;
}

// RR_GET64_NATIVE @ 14f33fe70

ulong64 __cdecl oo2::RR_GET64_NATIVE(void *param_1)

{
  return *(ulong64 *)param_1;
}

// RR_PUT64_NATIVE @ 14f33fe80

void __cdecl oo2::RR_PUT64_NATIVE(void *param_1,ulong64 param_2)

{
  *(ulong64 *)param_1 = param_2;
  return;
}

// Release @ 14f33fea0

void __thiscall
oo2::rrArenaArray<unsigned_short>::Release
          (rrArenaArray<unsigned_short> *this,rrArenaAllocator *param_1,long64 param_2,int param_3)

{
  if (this->m_ptr != (ushort *)0x0) {
    if ((param_1 != (rrArenaAllocator *)0x0) && (this->m_alloc != (void *)0x0)) {
      if (param_1->m_unorderedStart != 0) {
        rrArenaAllocator::Free(param_1,this->m_alloc,(longlong)param_3 + param_2 * 2);
      }
      this->m_alloc = (void *)0x0;
      this->m_ptr = (ushort *)0x0;
      return;
    }
    (*g_fp_OodleCore_Plugin_Free)(this->m_ptr);
    this->m_ptr = (ushort *)0x0;
  }
  return;
}

// Release @ 14f33ff20

void __thiscall
oo2::rrArenaArray<unsigned_int>::Release
          (rrArenaArray<unsigned_int> *this,rrArenaAllocator *param_1,long64 param_2,int param_3)

{
  if (this->m_ptr != (uint *)0x0) {
    if ((param_1 != (rrArenaAllocator *)0x0) && (this->m_alloc != (void *)0x0)) {
      if (param_1->m_unorderedStart != 0) {
        rrArenaAllocator::Free(param_1,this->m_alloc,(longlong)param_3 + param_2 * 4);
      }
      this->m_alloc = (void *)0x0;
      this->m_ptr = (uint *)0x0;
      return;
    }
    (*g_fp_OodleCore_Plugin_Free)(this->m_ptr);
    this->m_ptr = (uint *)0x0;
  }
  return;
}

// Reset @ 14f33ff90

void __thiscall oo2::newLZ_LOs::Reset(newLZ_LOs *this)

{
  (this->lasts).contents[4] = 8;
  (this->lasts).contents[5] = 8;
  (this->lasts).contents[6] = 8;
  return;
}

// Reset @ 14f33ffb0

void __thiscall oo2::newLZ_LOs_NoPad::Reset(newLZ_LOs_NoPad *this)

{
  this->lasts[0] = 8;
  this->lasts[1] = 8;
  this->lasts[2] = 8;
  return;
}

// Reset_Neg @ 14f33ffd0

void __thiscall oo2::newLZ_LOs::Reset_Neg(newLZ_LOs *this)

{
  (this->lasts).contents[4] = -8;
  (this->lasts).contents[5] = -8;
  (this->lasts).contents[6] = -8;
  return;
}

// SetAdd @ 14f33fff0

void __thiscall
oo2::newLZ_LOs_NoPad::SetAdd(newLZ_LOs_NoPad *this,newLZ_LOs_NoPad *param_1,int param_2)

{
  this->lasts[0] = param_2;
  this->lasts[1] = param_1->lasts[0];
  this->lasts[2] = param_1->lasts[1];
  return;
}

// SetMTF @ 14f340020

void __thiscall
oo2::newLZ_LOs_NoPad::SetMTF(newLZ_LOs_NoPad *this,newLZ_LOs_NoPad *param_1,long64 param_2)

{
  int *piVar1;
  
  piVar1 = param_1->lasts + 2;
  if (param_2 == 0) {
    this->lasts[0] = param_1->lasts[0];
    this->lasts[1] = param_1->lasts[1];
    this->lasts[2] = *piVar1;
    return;
  }
  if (param_2 == 1) {
    this->lasts[0] = param_1->lasts[1];
    this->lasts[1] = param_1->lasts[0];
    this->lasts[2] = *piVar1;
    return;
  }
  this->lasts[0] = *piVar1;
  this->lasts[1] = param_1->lasts[0];
  this->lasts[2] = param_1->lasts[1];
  return;
}

// ThreadProfiler_Pop @ 14f340080

void __cdecl oo2::ThreadProfiler_Pop(ulong64 param_1)

{
  if (fp_ThreadProfiler_Pop != (_func___cdecl_void_ulong64 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f34008c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*fp_ThreadProfiler_Pop)(param_1);
    return;
  }
  return;
}

// ThreadProfiler_Push @ 14f3400a0

ulong64 __cdecl oo2::ThreadProfiler_Push(char *param_1,ulong64 param_2)

{
  ulong64 uVar1;
  
  if (fp_ThreadProfiler_Push != (_func___cdecl_ulong64_char_ptr_ulong64 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f3400ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*fp_ThreadProfiler_Push)(param_1,param_2);
    return uVar1;
  }
  return 0xffffffffffffffff;
}

// U8_check @ 14f3400c0

uchar __cdecl oo2::U8_check(int param_1)

{
  return (uchar)param_1;
}

// U8_check @ 14f3400d0

uchar __cdecl oo2::U8_check(uint param_1)

{
  return (uchar)param_1;
}

// U8_void @ 14f3400e0

uchar * __cdecl oo2::U8_void(void *param_1)

{
  return param_1;
}

// U8_void @ 14f3400f0

uchar * __cdecl oo2::U8_void(void *param_1)

{
  return param_1;
}

// Zero @ 14f340100

void __thiscall
oo2::rrArenaArray<unsigned_short>::Zero(rrArenaArray<unsigned_short> *this,long64 param_1)

{
  memset(this->m_ptr,0,param_1 * 2);
  return;
}

// Zero @ 14f340120

void __thiscall
oo2::rrArenaArray<unsigned_int>::Zero(rrArenaArray<unsigned_int> *this,long64 param_1)

{
  memset(this->m_ptr,0,param_1 * 4);
  return;
}

// allocate @ 14f340140

void __thiscall
oo2::CTMF<unsigned_int,1,0,4>::allocate
          (CTMF<unsigned_int,1,0,4> *this,int param_1,int param_2,int param_3,
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
  this->m_hash_row_mask = (1 << ((byte)param_1 & 0x1f)) - 2;
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
        goto LAB_14f34026d;
      }
    }
  }
  puVar8 = (*g_fp_OodleCore_Plugin_MallocAligned)(lVar9,0x40);
  if (puVar8 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(lVar9);
  }
LAB_14f34026d:
  (this->m_hash_table).m_ptr = puVar8;
  this->m_hash_table_arena = param_4;
  memset((this->m_hash_table).m_ptr,0,(1L << ((byte)this->m_table_size_bits & 0x3f)) << 2);
  return;
}

// allocate @ 14f3402c0

void __thiscall
oo2::CTMF<unsigned_int,2,8,4>::allocate
          (CTMF<unsigned_int,2,8,4> *this,int param_1,int param_2,int param_3,
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
  this->m_hash_row_mask = (1 << ((byte)param_1 & 0x1f)) - 4;
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
        goto LAB_14f3403ed;
      }
    }
  }
  puVar8 = (*g_fp_OodleCore_Plugin_MallocAligned)(lVar9,0x40);
  if (puVar8 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(lVar9);
  }
LAB_14f3403ed:
  (this->m_hash_table).m_ptr = puVar8;
  this->m_hash_table_arena = param_4;
  memset((this->m_hash_table).m_ptr,0,(1L << ((byte)this->m_table_size_bits & 0x3f)) << 2);
  return;
}

// allocate @ 14f340440

void __thiscall
oo2::CTMF<unsigned_int,3,0,4>::allocate
          (CTMF<unsigned_int,3,0,4> *this,int param_1,int param_2,int param_3,
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
  this->m_hash_row_mask = (1 << ((byte)param_1 & 0x1f)) - 8;
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
        goto LAB_14f34056d;
      }
    }
  }
  puVar8 = (*g_fp_OodleCore_Plugin_MallocAligned)(lVar9,0x40);
  if (puVar8 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(lVar9);
  }
LAB_14f34056d:
  (this->m_hash_table).m_ptr = puVar8;
  this->m_hash_table_arena = param_4;
  memset((this->m_hash_table).m_ptr,0,(1L << ((byte)this->m_table_size_bits & 0x3f)) << 2);
  return;
}

// allocate @ 14f3405c0

void __thiscall
oo2::FastCTMF<unsigned_short>::allocate
          (FastCTMF<unsigned_short> *this,int param_1,int param_2,int param_3,
          rrArenaAllocator *param_4,int param_5)

{
  void *pvVar1;
  longlong lVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulong64 uVar5;
  ushort *_Dst;
  ulonglong uVar6;
  ulonglong uVar7;
  
  this->m_table_size_bits = param_1;
  this->m_hash_shift = 0x40 - param_1;
  if (((param_5 == 0) || (param_5 == 4)) ||
     ((param_5 != 5 && (((param_5 != 6 && (param_5 != 7)) && (param_5 != 8)))))) {
    uVar5 = 0x9e3779b100000000;
  }
  else {
    uVar5 = -0x30e44323485a9b9d << (('\b' - (char)param_5) * '\b' & 0x3fU);
  }
  this->m_hash_mul = uVar5;
  this->m_hash_table_arena = param_4;
  lVar2 = (1L << ((byte)param_1 & 0x3f)) * 2;
  if (param_4 != (rrArenaAllocator *)0x0) {
    pvVar1 = (void *)param_4->m_cur;
    uVar6 = lVar2 + 0x4fU & 0xfffffffffffffff0;
    uVar7 = (ulonglong)(-(uint)(param_4->m_unorderedStart != 0) & 0x10);
    if (param_4->m_size + param_4->m_base < (longlong)pvVar1 + uVar6 + uVar7) {
      (this->m_hash_table).m_alloc = (void *)0x0;
    }
    else {
      puVar4 = (ulonglong *)((longlong)pvVar1 + uVar6);
      param_4->m_cur = (ulong64)puVar4;
      if (param_4->m_unorderedStart != 0) {
        *puVar4 = uVar6;
        puVar4[1] = 0;
        param_4->m_cur = param_4->m_cur + uVar7;
        puVar4 = (ulonglong *)param_4->m_cur;
      }
      puVar3 = (ulonglong *)param_4->m_cur_max;
      if ((ulonglong *)param_4->m_cur_max <= puVar4) {
        puVar3 = puVar4;
      }
      param_4->m_cur_max = (ulong64)puVar3;
      (this->m_hash_table).m_alloc = pvVar1;
      if (pvVar1 != (void *)0x0) {
        _Dst = (ushort *)((longlong)pvVar1 + 0x3fU & 0xffffffffffffffc0);
        goto LAB_14f3406f8;
      }
    }
  }
  _Dst = (*g_fp_OodleCore_Plugin_MallocAligned)(lVar2,0x40);
  if (_Dst == (ushort *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(lVar2);
  }
LAB_14f3406f8:
  (this->m_hash_table).m_ptr = _Dst;
  memset(_Dst,0,(1L << ((byte)this->m_table_size_bits & 0x3f)) * 2);
  return;
}

// allocate @ 14f340740

void __thiscall
oo2::FastCTMF<unsigned_int>::allocate
          (FastCTMF<unsigned_int> *this,int param_1,int param_2,int param_3,
          rrArenaAllocator *param_4,int param_5)

{
  void *pvVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  ulong64 uVar4;
  uint *_Dst;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  this->m_table_size_bits = param_1;
  this->m_hash_shift = 0x40 - param_1;
  if (((param_5 == 0) || (param_5 == 4)) ||
     ((param_5 != 5 && (((param_5 != 6 && (param_5 != 7)) && (param_5 != 8)))))) {
    uVar4 = 0x9e3779b100000000;
  }
  else {
    uVar4 = -0x30e44323485a9b9d << (('\b' - (char)param_5) * '\b' & 0x3fU);
  }
  this->m_hash_mul = uVar4;
  this->m_hash_table_arena = param_4;
  lVar5 = (1L << ((byte)param_1 & 0x3f)) * 4;
  if (param_4 != (rrArenaAllocator *)0x0) {
    pvVar1 = (void *)param_4->m_cur;
    uVar6 = lVar5 + 0x4fU & 0xfffffffffffffff0;
    uVar7 = (ulonglong)(-(uint)(param_4->m_unorderedStart != 0) & 0x10);
    if (param_4->m_size + param_4->m_base < (longlong)pvVar1 + uVar6 + uVar7) {
      (this->m_hash_table).m_alloc = (void *)0x0;
    }
    else {
      puVar3 = (ulonglong *)((longlong)pvVar1 + uVar6);
      param_4->m_cur = (ulong64)puVar3;
      if (param_4->m_unorderedStart != 0) {
        *puVar3 = uVar6;
        puVar3[1] = 0;
        param_4->m_cur = param_4->m_cur + uVar7;
        puVar3 = (ulonglong *)param_4->m_cur;
      }
      puVar2 = (ulonglong *)param_4->m_cur_max;
      if ((ulonglong *)param_4->m_cur_max <= puVar3) {
        puVar2 = puVar3;
      }
      param_4->m_cur_max = (ulong64)puVar2;
      (this->m_hash_table).m_alloc = pvVar1;
      if (pvVar1 != (void *)0x0) {
        _Dst = (uint *)((longlong)pvVar1 + 0x3fU & 0xffffffffffffffc0);
        goto LAB_14f340878;
      }
    }
  }
  _Dst = (*g_fp_OodleCore_Plugin_MallocAligned)(lVar5,0x40);
  if (_Dst == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(lVar5);
  }
LAB_14f340878:
  (this->m_hash_table).m_ptr = _Dst;
  memset(_Dst,0,(1L << ((byte)this->m_table_size_bits & 0x3f)) << 2);
  return;
}

// at @ 14f3408c0

int * __thiscall
oo2::vector_flex<int,oo2::vector_storage_a<int>_>::at
          (vector_flex<int,oo2::vector_storage_a<int>_> *this,ulong64 param_1)

{
  return (int *)(*(longlong *)this + param_1 * 4);
}

// at @ 14f3408d0

newlz_encoder_parse * __thiscall
oo2::vector_flex<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>::at
          (vector_flex<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>
           *this,ulong64 param_1)

{
  return (newlz_encoder_parse *)(param_1 * 0x10 + *(longlong *)this);
}

// at @ 14f3408f0

newlz_encoder_parse * __thiscall
oo2::vector_flex<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>::at
          (vector_flex<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>
           *this,ulong64 param_1)

{
  return (newlz_encoder_parse *)(param_1 * 0x10 + *(longlong *)this);
}

// back @ 14f340910

newlz_encoder_parse * __thiscall
oo2::vector_flex<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>::back
          (vector_flex<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>
           *this)

{
  return (newlz_encoder_parse *)(*(longlong *)this + -0x10 + *(longlong *)&this->field_0x10 * 0x10);
}

// begin @ 14f340930

int * __thiscall
oo2::vector_base<int,oo2::vector_storage_a<int>_>::begin
          (vector_base<int,oo2::vector_storage_a<int>_> *this)

{
  return (int *)this->_padding_;
}

// begin @ 14f340940

newlz_encoder_parse * __thiscall
oo2::vector_base<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>::begin
          (vector_base<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>
           *this)

{
  return (newlz_encoder_parse *)this->_padding_;
}

// begin @ 14f340950

newlz_encoder_parse * __thiscall
oo2::vector_base<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>::begin
          (vector_base<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>
           *this)

{
  return (newlz_encoder_parse *)this->_padding_;
}

// begin @ 14f340960

newlz_encoder_parse * __thiscall
oo2::vector_flex<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>::begin
          (vector_flex<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>
           *this)

{
  return *(newlz_encoder_parse **)this;
}

// begin @ 14f340970

newlz_encoder_parse * __thiscall
oo2::vector_flex<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>::begin
          (vector_flex<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>
           *this)

{
  return *(newlz_encoder_parse **)this;
}

// begin @ 14f340980

int * __thiscall oo2::vector_storage_a<int>::begin(vector_storage_a<int> *this)

{
  return this->m_data;
}

// begin @ 14f340990

newlz_encoder_parse * __thiscall
oo2::vector_storage_a<oo2::newlz_encoder_parse>::begin
          (vector_storage_a<oo2::newlz_encoder_parse> *this)

{
  return this->m_data;
}

// begin @ 14f3409a0

newlz_encoder_parse * __thiscall
oo2::vector_storage_a<oo2::newlz_encoder_parse>::begin
          (vector_storage_a<oo2::newlz_encoder_parse> *this)

{
  return this->m_data;
}

// capacity @ 14f3409b0

ulong64 __thiscall
oo2::vector_base<int,oo2::vector_storage_a<int>_>::capacity
          (vector_base<int,oo2::vector_storage_a<int>_> *this)

{
  return this->_padding_;
}

// capacity @ 14f3409c0

ulong64 __thiscall
oo2::vector_base<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>::
capacity(vector_base<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>
         *this)

{
  return this->_padding_;
}

// capacity @ 14f3409d0

ulong64 __thiscall oo2::vector_storage_a<int>::capacity(vector_storage_a<int> *this)

{
  return this->m_capacity;
}

// capacity @ 14f3409e0

ulong64 __thiscall
oo2::vector_storage_a<oo2::newlz_encoder_parse>::capacity
          (vector_storage_a<oo2::newlz_encoder_parse> *this)

{
  return this->m_capacity;
}

// clear @ 14f3409f0

void __thiscall
oo2::vector_flex<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>::clear
          (vector_flex<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>
           *this)

{
  *(undefined8 *)&this->field_0x10 = 0;
  return;
}

// contains @ 14f340a00

bool __thiscall oo2::HalfOpenS32Interval::contains(HalfOpenS32Interval *this,int param_1)

{
  return param_1 - this->base < this->len;
}

// cost @ 14f340a10

int * __thiscall
oo2::newlz_optimal_arrivals_tll::cost(newlz_optimal_arrivals_tll *this,long64 param_1)

{
  return this->costs + param_1;
}

// cost_add_literal @ 14f340a20

int __cdecl
oo2::cost_add_literal(uchar *param_1,long64 param_2,long64 param_3,newlz_codecosts *param_4)

{
  return param_4->codecost_literal
         [(byte)(param_1[param_2] - (param_1[param_2 - param_3] & (byte)param_4->subliteralmask))];
}

// cost_excess @ 14f340a50

int __cdecl oo2::cost_excess(int param_1,newlz_codecosts *param_2)

{
  int iVar1;
  
  if (param_1 < 0xff) {
    return param_2->codecost_excess[param_1];
  }
  iVar1 = cost_excess_huge(param_1,param_2);
  return iVar1;
}

// cost_excess_huge @ 14f340a70

int __cdecl oo2::cost_excess_huge(int param_1,newlz_codecosts *param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (param_1 - 0xffU >> 6) + 1;
  iVar1 = 0x1f;
  if (uVar2 != 0) {
    for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  return param_2->codecost_excess[0xff] + 0xe0 + iVar1 * 0x40;
}

// cost_literals @ 14f340aa0

int __cdecl
oo2::cost_literals(uchar *param_1,long64 param_2,int param_3,long64 param_4,newlz_codecosts *param_5
                  )

{
  uchar uVar1;
  byte *pbVar2;
  uchar *puVar3;
  int iVar4;
  
  if (param_3 == 0) {
    return 0;
  }
  puVar3 = param_1 + param_2;
  iVar4 = 0;
  do {
    pbVar2 = puVar3 + -param_4;
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    iVar4 = iVar4 + param_5->codecost_literal
                    [(byte)(uVar1 - (*pbVar2 & (byte)param_5->subliteralmask))];
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return iVar4;
}

// cost_lo_match @ 14f340b10

int __cdecl oo2::cost_lo_match(int param_1,int param_2,int param_3,newlz_codecosts *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2 + -0x11;
  if (iVar1 < 0) {
    return param_4->codecost_packet[param_1 + (param_3 * 0x10 + param_2) * 4 + -8];
  }
  iVar2 = param_3 * 0x40 + param_1;
  if (iVar1 < 0xff) {
    return param_4->codecost_offset2[(longlong)param_2 + 0xef] +
           param_4->codecost_packet[(longlong)iVar2 + 0x3c];
  }
  iVar1 = cost_excess_huge(iVar1,param_4);
  return iVar1 + param_4->codecost_packet[(longlong)iVar2 + 0x3c];
}

// cost_normal_match @ 14f340ba0

int __cdecl oo2::cost_normal_match(int param_1,int param_2,newlz_codecosts *param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = (longlong)param_1;
  iVar1 = param_2 + -0x11;
  if (iVar1 < 0) {
    return param_3->codecost_packet[param_1 + (param_2 + 0x2e) * 4];
  }
  if (iVar1 < 0xff) {
    return param_3->codecost_offset2[(longlong)param_2 + 0xef] +
           param_3->codecost_packet[lVar2 + 0xfc];
  }
  iVar1 = cost_excess_huge(iVar1,param_3);
  return iVar1 + param_3->codecost_packet[lVar2 + 0xfc];
}

// cost_offset @ 14f340c20

int __cdecl oo2::cost_offset(int param_1,newlz_codecosts *param_2)

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

// data @ 14f340d10

ushort * __thiscall oo2::rrArenaArray<unsigned_short>::data(rrArenaArray<unsigned_short> *this)

{
  return this->m_ptr;
}

// data @ 14f340d20

uint * __thiscall oo2::rrArenaArray<unsigned_int>::data(rrArenaArray<unsigned_int> *this)

{
  return this->m_ptr;
}

// data @ 14f340d30

int * __thiscall
oo2::vector_flex<int,oo2::vector_storage_a<int>_>::data
          (vector_flex<int,oo2::vector_storage_a<int>_> *this)

{
  if (*(longlong *)&this->field_0x10 == 0) {
    return (int *)0x0;
  }
  return *(int **)this;
}

// different_bytes1to3le @ 14f340d50

uint __cdecl oo2::different_bytes1to3le(uint param_1,uint param_2)

{
  return (param_1 ^ param_2) >> 8;
}

// empty @ 14f340d60

bool __thiscall
oo2::vector_flex<int,oo2::vector_storage_a<int>_>::empty
          (vector_flex<int,oo2::vector_storage_a<int>_> *this)

{
  return *(longlong *)&this->field_0x10 == 0;
}

// end @ 14f340d70

newlz_encoder_parse * __thiscall
oo2::vector_base<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>::end
          (vector_base<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>
           *this)

{
  return (newlz_encoder_parse *)(this->m_size * 0x10 + this->_padding_);
}

// end @ 14f340d90

newlz_encoder_parse * __thiscall
oo2::vector_base<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>::end
          (vector_base<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>
           *this)

{
  return (newlz_encoder_parse *)(this->m_size * 0x10 + this->_padding_);
}

// end @ 14f340db0

newlz_encoder_parse * __thiscall
oo2::vector_flex<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>::end
          (vector_flex<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>
           *this)

{
  return (newlz_encoder_parse *)(*(longlong *)&this->field_0x10 * 0x10 + *(longlong *)this);
}

// end @ 14f340dd0

newlz_encoder_parse * __thiscall
oo2::vector_flex<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>::end
          (vector_flex<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>
           *this)

{
  return (newlz_encoder_parse *)(*(longlong *)&this->field_0x10 * 0x10 + *(longlong *)this);
}

// extend @ 14f340e00

void __thiscall
oo2::newlz_scratchblock::extend(newlz_scratchblock *this,long64 param_1,rrArenaAllocator *param_2)

{
  code *pcVar1;
  int iVar2;
  void *pvVar3;
  
  if (this->m_capacity < 1) {
    if (param_2 != (rrArenaAllocator *)0x0) {
      pvVar3 = rrArenaAllocator::Alloc(param_2,param_1,1);
      this->m_ptr = pvVar3;
      this->m_arena = param_2;
    }
    if (this->m_ptr == (void *)0x0) {
      pvVar3 = (*g_fp_OodleCore_Plugin_MallocAligned)(param_1,0x10);
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        Oodle_Core_Malloc_Failed(param_1);
      }
      this->m_ptr = pvVar3;
      this->m_arena = (rrArenaAllocator *)0x0;
    }
    this->m_capacity = param_1;
  }
  else {
    if (param_1 <= this->m_capacity) {
      this->m_size = param_1;
      return;
    }
    iVar2 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\newlz_vtable.h",0x94,
                               "oo2::newlz_scratchblock::extend","size <= m_capacity");
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->m_size = param_1;
  return;
}

// extend_copy @ 14f340ed0

void __thiscall
oo2::vector_base<int,oo2::vector_storage_a<int>_>::extend_copy
          (vector_base<int,oo2::vector_storage_a<int>_> *this,int *param_1,ulong64 param_2)

{
  code *pcVar1;
  int iVar2;
  ulong64 uVar3;
  int *piVar4;
  
  if ((ulonglong)this->_padding_ < this->m_size + param_2) {
    iVar2 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h",0x3f,
                               "oo2::vector_storage_a<int>::needmakefit","newsize <= m_capacity");
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 == 0) {
    this->m_size = this->m_size;
  }
  else {
    iVar2 = *param_1;
    piVar4 = (int *)(this->_padding_ + this->m_size * 4);
    for (uVar3 = param_2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *piVar4 = iVar2;
      piVar4 = piVar4 + 1;
    }
    this->m_size = this->m_size + param_2;
  }
  return;
}

// fast_ctmf_hash @ 14f340f60

ulong64 __cdecl
oo2::`anonymous_namespace'::fast_ctmf_hash(ulong64 param_1,ulong64 param_2,int param_3)

{
  return param_1 * param_2 >> ((byte)param_3 & 0x3f);
}

// find_candidates @ 14f340f80

uint __thiscall
oo2::CTMF<unsigned_int,1,0,4>::find_candidates
          (CTMF<unsigned_int,1,0,4> *this,uint *param_1,uint *param_2,uint *param_3,uint param_4,
          uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *param_2;
  *param_1 = param_4 - uVar1 & 0x3ffffff;
  uVar2 = param_2[1];
  uVar3 = 0;
  param_1[1] = param_4 - uVar2 & 0x3ffffff;
  if (((uVar2 ^ param_5) & 0xfc000000) == 0) {
    uVar3 = 2;
  }
  return ((uVar1 ^ param_5) & 0xfc000000) == 0 | uVar3;
}

// find_candidates @ 14f340fe0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall
oo2::CTMF<unsigned_int,2,8,4>::find_candidates
          (CTMF<unsigned_int,2,8,4> *this,uint *param_1,uint *param_2,uint *param_3,uint param_4,
          uint param_5)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  uVar12 = _UNK_1531da91c;
  uVar11 = _UNK_1531da918;
  uVar10 = _UNK_1531da914;
  uVar9 = ___xmm_fc000000fc000000fc000000fc000000;
  uVar14 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = *param_3;
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  uVar13 = param_5 & 0xfc000000;
  uVar18 = param_4 - uVar5 & ___xmm_03ffffff03ffffff03ffffff03ffffff;
  uVar21 = param_4 - uVar6 & _UNK_1531da904;
  uVar22 = param_4 - uVar7 & _UNK_1531da908;
  uVar23 = param_4 - uVar8 & _UNK_1531da90c;
  uVar15 = param_4 - uVar2 & _UNK_1531da904;
  uVar16 = param_4 - uVar3 & _UNK_1531da908;
  uVar17 = param_4 - uVar4 & _UNK_1531da90c;
  *param_1 = param_4 - uVar14 & ___xmm_03ffffff03ffffff03ffffff03ffffff;
  param_1[1] = uVar15;
  param_1[2] = uVar16;
  param_1[3] = uVar17;
  param_1[4] = uVar18;
  param_1[5] = uVar21;
  param_1[6] = uVar22;
  param_1[7] = uVar23;
  auVar20._0_4_ = -(uint)((uVar9 & uVar5) == uVar13);
  auVar20._4_4_ = -(uint)((uVar10 & uVar6) == uVar13);
  auVar20._8_4_ = -(uint)((uVar11 & uVar7) == uVar13);
  auVar20._12_4_ = -(uint)((uVar12 & uVar8) == uVar13);
  auVar19._0_4_ = -(uint)((uVar9 & uVar14) == uVar13);
  auVar19._4_4_ = -(uint)((uVar10 & uVar2) == uVar13);
  auVar19._8_4_ = -(uint)((uVar11 & uVar3) == uVar13);
  auVar19._12_4_ = -(uint)((uVar12 & uVar4) == uVar13);
  auVar20 = packssdw(auVar19,auVar20);
  auVar20 = packsswb(auVar20,ZEXT816(0));
  uVar1 = (ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
          (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
          (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
          (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar20[0xf] >> 7) << 0xf;
  uVar14 = (uint)uVar1;
  if (param_2 == param_3) {
    uVar14 = uVar1 & 0xf;
  }
  return uVar14;
}

// find_candidates @ 14f341070

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall
oo2::CTMF<unsigned_int,3,0,4>::find_candidates
          (CTMF<unsigned_int,3,0,4> *this,uint *param_1,uint *param_2,uint *param_3,uint param_4,
          uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  uVar12 = _UNK_1531da91c;
  uVar11 = _UNK_1531da918;
  uVar10 = _UNK_1531da914;
  uVar9 = ___xmm_fc000000fc000000fc000000fc000000;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  uVar8 = param_2[7];
  uVar13 = param_5 & 0xfc000000;
  uVar17 = param_4 - uVar5 & ___xmm_03ffffff03ffffff03ffffff03ffffff;
  uVar20 = param_4 - uVar6 & _UNK_1531da904;
  uVar21 = param_4 - uVar7 & _UNK_1531da908;
  uVar22 = param_4 - uVar8 & _UNK_1531da90c;
  uVar14 = param_4 - uVar2 & _UNK_1531da904;
  uVar15 = param_4 - uVar3 & _UNK_1531da908;
  uVar16 = param_4 - uVar4 & _UNK_1531da90c;
  *param_1 = param_4 - uVar1 & ___xmm_03ffffff03ffffff03ffffff03ffffff;
  param_1[1] = uVar14;
  param_1[2] = uVar15;
  param_1[3] = uVar16;
  param_1[4] = uVar17;
  param_1[5] = uVar20;
  param_1[6] = uVar21;
  param_1[7] = uVar22;
  auVar18._0_4_ = -(uint)((uVar9 & uVar1) == uVar13);
  auVar18._4_4_ = -(uint)((uVar10 & uVar2) == uVar13);
  auVar18._8_4_ = -(uint)((uVar11 & uVar3) == uVar13);
  auVar18._12_4_ = -(uint)((uVar12 & uVar4) == uVar13);
  auVar19._0_4_ = -(uint)((uVar9 & uVar5) == uVar13);
  auVar19._4_4_ = -(uint)((uVar10 & uVar6) == uVar13);
  auVar19._8_4_ = -(uint)((uVar11 & uVar7) == uVar13);
  auVar19._12_4_ = -(uint)((uVar12 & uVar8) == uVar13);
  auVar19 = packssdw(auVar18,auVar19);
  auVar19 = packsswb(auVar19,ZEXT816(0));
  return (uint)(ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) |
                        (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
                        (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
                        (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                        (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
                        (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                        (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
                        (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
                        (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
                        (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
                        (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
                        (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
                        (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
                        (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
                        (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                       (ushort)(byte)(auVar19[0xf] >> 7) << 0xf);
}

// find_candidates_generic @ 14f3410f0

uint __thiscall
oo2::CTMF<unsigned_int,1,0,4>::find_candidates_generic
          (CTMF<unsigned_int,1,0,4> *this,uint *param_1,uint *param_2,uint *param_3,uint param_4,
          uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *param_2;
  *param_1 = param_4 - uVar1 & 0x3ffffff;
  uVar2 = param_2[1];
  uVar3 = 0;
  param_1[1] = param_4 - uVar2 & 0x3ffffff;
  if (((uVar2 ^ param_5) & 0xfc000000) == 0) {
    uVar3 = 2;
  }
  return ((uVar1 ^ param_5) & 0xfc000000) == 0 | uVar3;
}

// find_candidates_generic @ 14f341150

uint __thiscall
oo2::CTMF<unsigned_int,2,8,4>::find_candidates_generic
          (CTMF<unsigned_int,2,8,4> *this,uint *param_1,uint *param_2,uint *param_3,uint param_4,
          uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = *param_2;
  *param_1 = param_4 - uVar1 & 0x3ffffff;
  uVar4 = param_2[1];
  param_1[1] = param_4 - uVar4 & 0x3ffffff;
  uVar2 = 0;
  if (((uVar4 ^ param_5) & 0xfc000000) == 0) {
    uVar2 = 2;
  }
  uVar4 = param_2[2];
  param_1[2] = param_4 - uVar4 & 0x3ffffff;
  uVar3 = 0;
  if (((uVar4 ^ param_5) & 0xfc000000) == 0) {
    uVar3 = 4;
  }
  uVar4 = param_2[3];
  param_1[3] = param_4 - uVar4 & 0x3ffffff;
  uVar5 = 0;
  if (((uVar4 ^ param_5) & 0xfc000000) == 0) {
    uVar5 = 8;
  }
  uVar5 = ((uVar1 ^ param_5) & 0xfc000000) == 0 | uVar2 | uVar3 | uVar5;
  if (param_2 != param_3) {
    uVar1 = *param_3;
    param_1[4] = param_4 - uVar1 & 0x3ffffff;
    uVar4 = 0;
    if (((uVar1 ^ param_5) & 0xfc000000) == 0) {
      uVar4 = 0x10;
    }
    uVar1 = param_3[1];
    param_1[5] = param_4 - uVar1 & 0x3ffffff;
    uVar2 = 0;
    if (((uVar1 ^ param_5) & 0xfc000000) == 0) {
      uVar2 = 0x20;
    }
    uVar1 = param_3[2];
    param_1[6] = param_4 - uVar1 & 0x3ffffff;
    uVar6 = 0;
    uVar3 = 0;
    if (((uVar1 ^ param_5) & 0xfc000000) == 0) {
      uVar3 = 0x40;
    }
    uVar1 = param_3[3];
    param_1[7] = param_4 - uVar1 & 0x3ffffff;
    if (((uVar1 ^ param_5) & 0xfc000000) == 0) {
      uVar6 = 0x80;
    }
    uVar5 = uVar5 | uVar4 | uVar2 | uVar3 | uVar6;
  }
  return uVar5;
}

// find_candidates_generic @ 14f3412c0

uint __thiscall
oo2::CTMF<unsigned_int,3,0,4>::find_candidates_generic
          (CTMF<unsigned_int,3,0,4> *this,uint *param_1,uint *param_2,uint *param_3,uint param_4,
          uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar1 = *param_2;
  *param_1 = param_4 - uVar1 & 0x3ffffff;
  uVar2 = param_2[1];
  param_1[1] = param_4 - uVar2 & 0x3ffffff;
  uVar3 = 0;
  if (((uVar2 ^ param_5) & 0xfc000000) == 0) {
    uVar3 = 2;
  }
  uVar2 = param_2[2];
  param_1[2] = param_4 - uVar2 & 0x3ffffff;
  uVar4 = 0;
  if (((uVar2 ^ param_5) & 0xfc000000) == 0) {
    uVar4 = 4;
  }
  uVar2 = param_2[3];
  param_1[3] = param_4 - uVar2 & 0x3ffffff;
  uVar5 = 0;
  if (((uVar2 ^ param_5) & 0xfc000000) == 0) {
    uVar5 = 8;
  }
  uVar2 = param_2[4];
  param_1[4] = param_4 - uVar2 & 0x3ffffff;
  uVar6 = 0;
  if (((uVar2 ^ param_5) & 0xfc000000) == 0) {
    uVar6 = 0x10;
  }
  uVar2 = param_2[5];
  param_1[5] = param_4 - uVar2 & 0x3ffffff;
  uVar7 = 0;
  if (((uVar2 ^ param_5) & 0xfc000000) == 0) {
    uVar7 = 0x20;
  }
  uVar2 = param_2[6];
  param_1[6] = param_4 - uVar2 & 0x3ffffff;
  uVar9 = 0;
  uVar8 = 0;
  if (((uVar2 ^ param_5) & 0xfc000000) == 0) {
    uVar8 = 0x40;
  }
  uVar2 = param_2[7];
  param_1[7] = param_4 - uVar2 & 0x3ffffff;
  if (((uVar2 ^ param_5) & 0xfc000000) == 0) {
    uVar9 = 0x80;
  }
  return ((uVar1 ^ param_5) & 0xfc000000) == 0 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 |
         uVar9;
}

// get @ 14f341420

void * __thiscall oo2::newlz_scratchblock::get(newlz_scratchblock *this)

{
  return this->m_ptr;
}

// getU8 @ 14f341430

uchar * __thiscall oo2::newlz_scratchblock::getU8(newlz_scratchblock *this)

{
  return this->m_ptr;
}

// get_mem_size @ 14f341440

long64 __cdecl oo2::CTMF<unsigned_int,1,0,4>::get_mem_size(int param_1,int param_2,int param_3)

{
  return (1L << ((byte)param_1 & 0x3f)) << 2;
}

// get_mem_size @ 14f341460

long64 __cdecl oo2::CTMF<unsigned_int,2,8,4>::get_mem_size(int param_1,int param_2,int param_3)

{
  return (1L << ((byte)param_1 & 0x3f)) << 2;
}

// get_mem_size @ 14f341480

long64 __cdecl oo2::CTMF<unsigned_int,3,0,4>::get_mem_size(int param_1,int param_2,int param_3)

{
  return (1L << ((byte)param_1 & 0x3f)) << 2;
}

// get_mem_size @ 14f3414a0

long64 __cdecl oo2::FastCTMF<unsigned_short>::get_mem_size(int param_1,int param_2,int param_3)

{
  return (1L << ((byte)param_1 & 0x3f)) * 2;
}

// get_mem_size @ 14f3414c0

long64 __cdecl oo2::FastCTMF<unsigned_int>::get_mem_size(int param_1,int param_2,int param_3)

{
  return (1L << ((byte)param_1 & 0x3f)) << 2;
}

// getmatchlen_after4 @ 14f3414e0

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

// getmatchlen_mml1 @ 14f341560

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

// getmatchlen_mml1_forceinline @ 14f3415c0

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

// getmatchlen_mml3_one32 @ 14f341620

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

// getmatchlen_mml3_two32 @ 14f3416c0

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

// getmatchlen_mml4_one32 @ 14f341760

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

// getmatchlen_mml4_two32 @ 14f3417e0

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

// hash @ 14f341860

uint __thiscall oo2::CTMF<unsigned_int,1,0,4>::hash(CTMF<unsigned_int,1,0,4> *this,uchar *param_1)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = (byte)this->m_table_size_bits & 0x1f;
  uVar2 = (uint)(this->m_hash_mul * *(longlong *)param_1 >> 0x20);
  return uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
}

// hash @ 14f341880

uint __thiscall oo2::CTMF<unsigned_int,2,8,4>::hash(CTMF<unsigned_int,2,8,4> *this,uchar *param_1)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = (byte)this->m_table_size_bits & 0x1f;
  uVar2 = (uint)(this->m_hash_mul * *(longlong *)param_1 >> 0x20);
  return uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
}

// hash @ 14f3418a0

uint __thiscall oo2::CTMF<unsigned_int,3,0,4>::hash(CTMF<unsigned_int,3,0,4> *this,uchar *param_1)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = (byte)this->m_table_size_bits & 0x1f;
  uVar2 = (uint)(this->m_hash_mul * *(longlong *)param_1 >> 0x20);
  return uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
}

// hash_bytes_64 @ 14f3418c0

ulong64 __cdecl oo2::`anonymous_namespace'::hash_bytes_64(uchar *param_1,ulong64 param_2)

{
  return param_2 * *(longlong *)param_1;
}

// havematch_better @ 14f3418e0

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
LAB_14f341910:
      uVar3 = *(ulonglong *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2) ^ *puVar2;
      if (uVar3 == 0) goto code_r0x00014f341919;
      uVar1 = 0;
      if (uVar3 != 0) {
        for (; (uVar3 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
        }
      }
      pcVar4 = (char *)(((uVar1 >> 3) - (longlong)param_1) + (longlong)puVar2);
      goto LAB_14f341945;
    }
LAB_14f341925:
    pcVar4 = (char *)((longlong)puVar2 - (longlong)param_1);
    for (; (puVar2 < param_3 &&
           ((char)*puVar2 == *(char *)((longlong)puVar2 + ((longlong)param_2 - (longlong)param_1))))
        ; puVar2 = (ulonglong *)((longlong)puVar2 + 1)) {
      pcVar4 = pcVar4 + 1;
    }
LAB_14f341945:
    if (param_4 < (longlong)pcVar4) {
      *param_5 = (long64)pcVar4;
      return true;
    }
  }
  return false;
code_r0x00014f341919:
  puVar2 = puVar2 + 1;
  if (param_3 + -8 < puVar2) goto LAB_14f341925;
  goto LAB_14f341910;
}

// havematch_mml2_one32 @ 14f341980

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

// init @ 14f341a30

void __thiscall
oo2::vector_base<int,oo2::vector_storage_a<int>_>::init
          (vector_base<int,oo2::vector_storage_a<int>_> *this)

{
  this->m_size = 0;
  return;
}

// init @ 14f341a40

void __thiscall
oo2::vector_base<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>::init
          (vector_base<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>
           *this)

{
  this->m_size = 0;
  return;
}

// init @ 14f341a60

void __thiscall
oo2::newlz_optimal_arrivals_tll::init(newlz_optimal_arrivals_tll *this,void *param_1,long64 param_2)

{
  this->costs = param_1;
  this->payloads = (newlz_optimal_arrival_tll *)((longlong)param_1 + param_2 * 4);
  this->count = param_2;
  return;
}

// insert @ 14f341a80

void __thiscall
oo2::CTMF<unsigned_int,1,0,4>::insert
          (CTMF<unsigned_int,1,0,4> *this,uint *param_1,uint param_2,uint param_3)

{
  param_1[1] = *param_1;
  *param_1 = (param_2 ^ param_3) & 0x3ffffff ^ param_3;
  return;
}

// insert @ 14f341aa0

/* WARNING: Removing unreachable block (ram,0x00014f341aae) */

void __thiscall
oo2::CTMF<unsigned_int,2,8,4>::insert
          (CTMF<unsigned_int,2,8,4> *this,uint *param_1,uint param_2,uint param_3)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(ulonglong *)param_1 << 0x20;
  auVar1._8_8_ = *(longlong *)(param_1 + 2) << 0x20 | *(ulonglong *)param_1 >> 0x20;
  *(undefined1 (*) [16])param_1 = ZEXT416((param_2 ^ param_3) & 0x3ffffff ^ param_3) | auVar1;
  return;
}

// insert @ 14f341ad0

void __thiscall
oo2::CTMF<unsigned_int,3,0,4>::insert
          (CTMF<unsigned_int,3,0,4> *this,uint *param_1,uint param_2,uint param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 3);
  *(undefined8 *)(param_1 + 1) = *(undefined8 *)param_1;
  *(undefined8 *)(param_1 + 3) = *(undefined8 *)(param_1 + 2);
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 5);
  *param_1 = (param_2 ^ param_3) & 0x3ffffff ^ param_3;
  return;
}

// insert @ 14f341b00

void __thiscall
oo2::vector_base<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>::insert
          (vector_base<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>
           *this,ulong64 param_1,newlz_encoder_parse *param_2,newlz_encoder_parse *param_3)

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
                                 "oo2::vector_storage_a<struct oo2::newlz_encoder_parse>::needmakefit"
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

// insert @ 14f341d00

newlz_encoder_parse * __thiscall
oo2::vector_flex<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>::insert
          (vector_flex<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>
           *this,newlz_encoder_parse *param_1,newlz_encoder_parse *param_2,
          newlz_encoder_parse *param_3)

{
  ulong64 uVar1;
  
  uVar1 = (longlong)param_1 - *(longlong *)this >> 4;
  vector_base<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>::insert
            ((vector_base<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>
              *)this,uVar1,param_2,param_3);
  return (newlz_encoder_parse *)(uVar1 * 0x10 + *(longlong *)this);
}

// makefit1 @ 14f341d40

int * __thiscall
oo2::vector_base<int,oo2::vector_storage_a<int>_>::makefit1
          (vector_base<int,oo2::vector_storage_a<int>_> *this,ulong64 param_1)

{
  return (int *)0x0;
}

// makefit1 @ 14f341d50

newlz_encoder_parse * __thiscall
oo2::vector_base<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>::
makefit1(vector_base<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>
         *this,ulong64 param_1)

{
  return (newlz_encoder_parse *)0x0;
}

// makefit1 @ 14f341d60

int * __thiscall
oo2::vector_storage_a<int>::makefit1(vector_storage_a<int> *this,ulong64 param_1,ulong64 param_2)

{
  return (int *)0x0;
}

// makefit1 @ 14f341d70

newlz_encoder_parse * __thiscall
oo2::vector_storage_a<oo2::newlz_encoder_parse>::makefit1
          (vector_storage_a<oo2::newlz_encoder_parse> *this,ulong64 param_1,ulong64 param_2)

{
  return (newlz_encoder_parse *)0x0;
}

// makefit2 @ 14f341d80

void __thiscall
oo2::vector_storage_a<int>::makefit2
          (vector_storage_a<int> *this,int *param_1,ulong64 param_2,ulong64 param_3)

{
  return;
}

// makefit2 @ 14f341d90

void __thiscall
oo2::vector_storage_a<oo2::newlz_encoder_parse>::makefit2
          (vector_storage_a<oo2::newlz_encoder_parse> *this,newlz_encoder_parse *param_1,
          ulong64 param_2,ulong64 param_3)

{
  return;
}

// needmakefit @ 14f341da0

bool __thiscall oo2::vector_storage_a<int>::needmakefit(vector_storage_a<int> *this,ulong64 param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  int iVar3;
  
  if (this->m_capacity < param_1) {
    iVar3 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h",0x3f,
                               "oo2::vector_storage_a<int>::needmakefit","newsize <= m_capacity");
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      uVar2 = (*pcVar1)();
      return (bool)uVar2;
    }
  }
  return false;
}

// needmakefit @ 14f341de0

bool __thiscall
oo2::vector_storage_a<oo2::newlz_encoder_parse>::needmakefit
          (vector_storage_a<oo2::newlz_encoder_parse> *this,ulong64 param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  int iVar3;
  
  if (this->m_capacity < param_1) {
    iVar3 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h",0x3f,
                               "oo2::vector_storage_a<struct oo2::newlz_encoder_parse>::needmakefit"
                               ,"newsize <= m_capacity");
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      uVar2 = (*pcVar1)();
      return (bool)uVar2;
    }
  }
  return false;
}

// newLZ_IsAllowedNormalMatch @ 14f341e20

bool __cdecl
oo2::newLZ_IsAllowedNormalMatch(int param_1,int param_2,OodleLZ_CompressOptions *param_3)

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

// newLZ_IsAllowedNormalMatch_Optimal @ 14f341ea0

bool __cdecl
oo2::newLZ_IsAllowedNormalMatch_Optimal(int param_1,int param_2,OodleLZ_CompressOptions *param_3)

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

// newLZ_IsLOMatchBetter @ 14f341f20

bool __cdecl oo2::newLZ_IsLOMatchBetter(int param_1,int param_2,int param_3)

{
  if ((1 < param_1) &&
     (((param_2 <= param_1 + 1 || ((param_2 <= param_1 + 2 && (0x3ff < param_3)))) ||
      ((param_2 <= param_1 + 3 && (0xffff < param_3)))))) {
    return true;
  }
  return false;
}

// newLZ_IsNormalMatchBetter @ 14f341f60

bool __cdecl oo2::newLZ_IsNormalMatchBetter(int param_1,int param_2,int param_3,int param_4)

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

// newLZ_LazyMatchDelta @ 14f341fa0

int __cdecl
oo2::newLZ_LazyMatchDelta
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

// newLZ_alt_offset_pack_u8_modulo1 @ 14f342010

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

// newLZ_alt_offset_pack_u8s @ 14f342030

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

// newLZ_alt_offset_unpack_numrawbits @ 14f342060

uint __cdecl oo2::newLZ_alt_offset_unpack_numrawbits(uchar param_1)

{
  return (uint)(param_1 >> 3);
}

// newLZ_decode_chunk_phase1 @ 14f342080

long64 __cdecl
oo2::newLZ_decode_chunk_phase1
          (int param_1,uchar *param_2,uchar *param_3,uchar *param_4,long64 param_5,long64 param_6,
          uchar *param_7,uchar *param_8,newLZ_chunk_arrays *param_9)

{
  uint *puVar1;
  byte bVar2;
  undefined8 uVar3;
  int iVar4;
  long64 lVar5;
  long64 lVar6;
  ulonglong uVar7;
  longlong lVar8;
  bool bVar9;
  byte *pbVar10;
  uchar *puVar11;
  uint *puVar12;
  char *pcVar13;
  uint uVar14;
  int *piVar15;
  uint local_res8;
  byte local_88;
  ulonglong local_80;
  long64 local_78;
  uchar *local_70;
  uchar *local_68;
  ulonglong local_60;
  uchar *local_58;
  ulonglong local_50;
  uchar *local_48;
  uchar *local_40;
  longlong local_38 [2];
  
  if (1 < param_1) {
    return -1;
  }
  rrPrintfKill("newlz chunk type %d = %s [%d->%d]\n");
  if ((param_4 + param_5 < param_2) || (param_3 < param_4)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  param_9->chunk_ptr = param_4;
  param_9->scratch_ptr = param_7;
  if ((longlong)param_3 - (longlong)param_2 < 0xd) {
    return -1;
  }
  if (param_6 == 0) {
    uVar3 = *(undefined8 *)param_2;
    param_2 = param_2 + 8;
    *(undefined8 *)param_4 = uVar3;
  }
  local_88 = 0;
  pbVar10 = param_2;
  uVar14 = 0;
  if ((param_2 < param_3) && (bVar2 = *param_2, uVar14 = 0, 0x7f < bVar2)) {
    pbVar10 = param_2 + 1;
    if ((bVar2 & 0xc0) == 0x80) {
      uVar14 = bVar2 & 0x3f;
      local_88 = bVar2;
      if (0x1f < uVar14) {
        if (pbVar10 == param_3) {
          ooLogErrorPre();
          if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
          goto LAB_14f34222e;
          pcVar13 = "OODLE ERROR : corruption : truncated excess byte count\n";
          iVar4 = 0x94d;
          goto LAB_14f342223;
        }
        bVar2 = *pbVar10;
        pbVar10 = param_2 + 2;
        uVar14 = uVar14 + (uint)bVar2 * 0x20;
      }
      goto LAB_14f3421c4;
    }
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto LAB_14f34222e;
    pcVar13 = "OODLE ERROR : corruption : excess reserved flag bit nonzero\n";
    iVar4 = 0x944;
  }
  else {
LAB_14f3421c4:
    local_58 = param_7;
    lVar8 = (longlong)param_8 - (longlong)param_7;
    if (param_5 < (longlong)param_8 - (longlong)param_7) {
      lVar8 = param_5;
    }
    lVar5 = newLZ_get_array(&local_58,pbVar10,param_3,local_38,lVar8,bVar9,param_7,param_8);
    if (lVar5 < 0) {
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto LAB_14f34222e;
      pcVar13 = "OODLE ERROR : corruption : bad literals\n";
      iVar4 = 0x96b;
    }
    else {
      param_9->literals_count = local_38[0];
      puVar11 = param_7 + local_38[0];
      param_9->literals_ptr = local_58;
      lVar8 = (longlong)param_8 - (longlong)puVar11;
      if (param_5 < (longlong)param_8 - (longlong)puVar11) {
        lVar8 = param_5;
      }
      local_60 = 0;
      local_40 = puVar11;
      lVar6 = newLZ_get_array(&local_40,pbVar10 + lVar5,param_3,(long64 *)&local_60,lVar8,bVar9,
                              puVar11,param_8);
      if (lVar6 < 0) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
        goto LAB_14f34222e;
        pcVar13 = "OODLE ERROR : corruption : bad packets\n";
        iVar4 = 0x98a;
      }
      else {
        pbVar10 = pbVar10 + lVar5 + lVar6;
        puVar11 = puVar11 + local_60;
        local_70 = (uchar *)0x0;
        local_80 = 0;
        local_res8 = 0;
        if ((longlong)param_3 - (longlong)pbVar10 < 3) {
          return -1;
        }
        uVar7 = (longlong)param_8 - (longlong)puVar11;
        local_68 = puVar11;
        if (*pbVar10 < 0x80) {
          if ((longlong)local_60 < (longlong)uVar7) {
            uVar7 = local_60;
          }
          lVar5 = newLZ_get_array(&local_68,pbVar10,param_3,(long64 *)&local_80,uVar7,false,puVar11,
                                  param_8);
          if (-1 < lVar5) {
            pbVar10 = pbVar10 + lVar5;
            puVar11 = puVar11 + local_80;
            goto LAB_14f3424a2;
          }
          ooLogErrorPre();
          if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
          goto LAB_14f34222e;
          pcVar13 = "OODLE ERROR : corruption : bad offsets44\n";
          iVar4 = 0x9eb;
        }
        else {
          local_res8 = *pbVar10 - 0x7f;
          if ((longlong)local_60 < (longlong)uVar7) {
            uVar7 = local_60;
          }
          lVar5 = newLZ_get_array(&local_68,pbVar10 + 1,param_3,(long64 *)&local_80,uVar7,false,
                                  puVar11,param_8);
          if (lVar5 < 0) {
            ooLogErrorPre();
            if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
            goto LAB_14f34222e;
            pcVar13 = "OODLE ERROR : corruption : bad offsets alt1\n";
            iVar4 = 0x9be;
          }
          else {
            pbVar10 = pbVar10 + 1 + lVar5;
            puVar11 = puVar11 + local_80;
            if (local_res8 == 1) {
LAB_14f3424a2:
              local_78 = 0;
              lVar8 = (longlong)(param_5 + (ulonglong)((uint)(param_5 >> 0x3f) & 3)) >> 2;
              if ((longlong)param_8 - (longlong)puVar11 <= lVar8) {
                lVar8 = (longlong)param_8 - (longlong)puVar11;
              }
              local_48 = puVar11;
              lVar5 = newLZ_get_array(&local_48,pbVar10,param_3,&local_78,lVar8,false,puVar11,
                                      param_8);
              if (lVar5 < 0) {
                ooLogErrorPre();
                if (g_fp_OodleCore_Plugin_Printf ==
                    (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f34222e;
                pcVar13 = "OODLE ERROR : corruption : bad excesses\n";
                iVar4 = 0xa03;
              }
              else {
                piVar15 = (int *)((ulonglong)(puVar11 + local_78 + 0xf) & 0xfffffffffffffff0);
                puVar12 = (uint *)(local_80 * 4 + 0xf + (longlong)piVar15 & 0xfffffffffffffff0);
                if (local_78 * 4 + 0x40 <= (longlong)param_8 - (longlong)puVar12) {
                  puVar1 = puVar12 + local_78;
                  puVar1[0] = 0;
                  puVar1[1] = 0;
                  puVar1[2] = 0;
                  puVar1[3] = 0;
                  puVar1 = puVar12 + local_78 + 4;
                  puVar1[0] = 0;
                  puVar1[1] = 0;
                  puVar1[2] = 0;
                  puVar1[3] = 0;
                  puVar1 = puVar12 + local_78 + 8;
                  puVar1[0] = 0;
                  puVar1[1] = 0;
                  puVar1[2] = 0;
                  puVar1[3] = 0;
                  puVar1 = puVar12 + local_78 + 0xc;
                  puVar1[0] = 0;
                  puVar1[1] = 0;
                  puVar1[2] = 0;
                  puVar1[3] = 0;
                  iVar4 = newLZ_get_offsets_excesses
                                    (pbVar10 + lVar5,param_3,local_68,local_70,local_80,local_res8,
                                     local_48,local_78,piVar15,puVar12,param_5 + param_6,local_88,
                                     uVar14);
                  if (iVar4 < 0) {
                    return -1;
                  }
                  param_9->offsets_count = local_80;
                  param_9->excesses_count = local_78;
                  param_9->packets = local_40;
                  param_9->packets_count = local_60;
                  param_9->offsets = piVar15;
                  param_9->excesses = puVar12;
                  return 1;
                }
                ooLogErrorPre();
                if (g_fp_OodleCore_Plugin_Printf ==
                    (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f34222e;
                pcVar13 = "OODLE ERROR : newlz scratch overflow\n";
                iVar4 = 0xa23;
              }
            }
            else {
              local_50 = 0;
              uVar7 = (longlong)param_8 - (longlong)puVar11;
              if ((longlong)local_80 < (longlong)param_8 - (longlong)puVar11) {
                uVar7 = local_80;
              }
              local_70 = puVar11;
              lVar5 = newLZ_get_array(&local_70,pbVar10,param_3,(long64 *)&local_50,uVar7,false,
                                      puVar11,param_8);
              if (lVar5 < 0) {
                ooLogErrorPre();
                if (g_fp_OodleCore_Plugin_Printf ==
                    (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f34222e;
                pcVar13 = "OODLE ERROR : corruption : bad offsets alt2\n";
                iVar4 = 0x9d3;
              }
              else {
                pbVar10 = pbVar10 + lVar5;
                puVar11 = puVar11 + local_80;
                if (local_80 == local_50) goto LAB_14f3424a2;
                ooLogErrorPre();
                if (g_fp_OodleCore_Plugin_Printf ==
                    (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f34222e;
                pcVar13 = "OODLE ERROR : corruption : offsets_count == offsets_count_2\n";
                iVar4 = 0x9dc;
              }
            }
          }
        }
      }
    }
  }
LAB_14f342223:
  (*g_fp_OodleCore_Plugin_Printf)(0,"v:\\devel\\projects\\oodle2\\core\\newlz.cpp",iVar4,pcVar13);
LAB_14f34222e:
  ooLogErrorPost();
  return -1;
}

// newLZ_decode_chunk_phase2 @ 14f342640

long64 __cdecl
oo2::newLZ_decode_chunk_phase2
          (int param_1,uchar *param_2,long64 param_3,long64 param_4,newLZ_chunk_arrays *param_5)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  long64 lVar4;
  newLZ_decode_parse_func_set *pnVar5;
  longlong lVar6;
  
  if (1 < param_1) {
    return -1;
  }
  pnVar5 = &newLZ_decode_parse_funcs_regular;
  lVar6 = 8;
  if (param_4 != 0) {
    lVar6 = 0;
  }
  if (((byte)g_rrCPUx86_feature_flags & 8) != 0) {
    pnVar5 = &newLZ_decode_parse_funcs_sse4;
  }
  if (param_1 == 1) {
    bVar2 = (*pnVar5->raw)(param_5,param_2 + lVar6,param_2,param_2 + param_3,param_2 + -param_4);
    if (bVar2) {
      return 1;
    }
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto LAB_14f342716;
    iVar3 = 0xa98;
  }
  else {
    if (param_1 != 0) {
      iVar3 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\newlz.cpp",0xaac,
                                 "oo2::newLZ_decode_chunk_phase2","bad chunk_type");
      if (iVar3 == 0) {
        return 1;
      }
      pcVar1 = (code *)swi(3);
      lVar4 = (*pcVar1)();
      return lVar4;
    }
    bVar2 = (*pnVar5->sub)(param_5,param_2 + lVar6,param_2,param_2 + param_3,param_2 + -param_4);
    if (bVar2) {
      return 1;
    }
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto LAB_14f342716;
    iVar3 = 0xaa6;
  }
  (*g_fp_OodleCore_Plugin_Printf)
            (0,"v:\\devel\\projects\\oodle2\\core\\newlz.cpp",iVar3,
             "OODLE ERROR : corruption : inconsistency detected during phase 2\n");
LAB_14f342716:
  ooLogErrorPost();
  return -1;
}

// newLZ_encode_chunk_optimal_greedy @ 14f342760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

long64 __cdecl
oo2::newLZ_encode_chunk_optimal_greedy
          (float *param_1,int *param_2,newlz_passinfo *param_3,uchar *param_4,uchar *param_5,
          int param_6,newlz_vtable *param_7,newLZ_MatchParseRecord *param_8,uchar *param_9,
          int param_10,long64 param_11,uchar *param_12,OodleKrakenChunkDeadlines *param_13,
          newlz_encoder_scratch *param_14,uchar *param_15,uchar *param_16)

{
  undefined8 uVar1;
  undefined8 uVar2;
  OodleLZ_CompressionLevel OVar3;
  OodleLZ_CompressOptions *pOVar4;
  int iVar5;
  int iVar6;
  match mVar7;
  longlong lVar8;
  long64 lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  char cVar14;
  uint uVar15;
  uchar *puVar16;
  char cVar17;
  uchar *puVar18;
  int iVar19;
  uint uVar20;
  undefined1 auStackY_208 [32];
  int local_1a0;
  int local_198;
  uchar *local_188;
  newLZ_encoder_arrays local_110;
  newLZ_LOs local_80;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_208;
  newLZ_encoder_arrays_point_to_scratch
            (&local_110,param_14,param_10,param_9,param_7->bitstream_flags);
  pOVar4 = param_7->pOptions;
  local_80.lasts.contents[4] = 8;
  local_80.lasts.contents[5] = 8;
  uVar20 = pOVar4->dictionarySize;
  local_80.lasts.contents[6] = 8;
  iVar13 = 8;
  if (param_11 != 0) {
    iVar13 = 0;
  }
  if ((int)uVar20 < 1) {
    uVar20 = 0x40000000;
  }
  else if (0x40000000 < (int)uVar20) {
    uVar20 = 0x40000000;
  }
  iVar19 = param_10 + -0x10;
  puVar16 = param_9 + (longlong)param_10 + -8;
  if (iVar13 < iVar19) {
    local_188 = local_110.excess_u8_ptr;
    iVar12 = iVar13;
    local_1a0 = iVar13;
    do {
      puVar18 = param_9 + iVar12;
      mVar7 = newLZ_get_match_heuristic
                        (param_8 + iVar12,&local_80,puVar18,puVar16,param_6,iVar12 - iVar13,param_12
                         ,uVar20,pOVar4);
      local_198 = mVar7.ml;
      iVar6 = iVar12 + 1;
      if (local_198 != 0) {
        while (uVar15 = mVar7.off, iVar6 < iVar19) {
          mVar7 = newLZ_get_match_heuristic
                            (param_8 + (iVar12 + 1),&local_80,puVar18 + 1,puVar16,param_6,
                             (iVar12 - iVar13) + 1,param_12,uVar20,pOVar4);
          if (mVar7.ml == 0) {
LAB_14f3429cf:
            if (iVar19 <= iVar12 + 2) break;
            mVar7 = newLZ_get_match_heuristic
                              (param_8 + (iVar12 + 2),&local_80,puVar18 + 2,puVar16,param_6,
                               (iVar12 - iVar13) + 2,param_12,uVar20,pOVar4);
            if (mVar7.ml == 0) break;
            uVar10 = mVar7.off;
            if ((int)uVar10 < 1) {
              iVar13 = 0;
            }
            else {
              iVar13 = 0x1f;
              if (uVar10 != 0) {
                for (; uVar10 >> iVar13 == 0; iVar13 = iVar13 + -1) {
                }
              }
              iVar13 = iVar13 + 3;
            }
            if (0 < (int)uVar15) {
              iVar6 = 0x1f;
              if (uVar15 != 0) {
                for (; uVar15 >> iVar6 == 0; iVar6 = iVar6 + -1) {
                }
              }
              if (uVar15 == 0) {
                iVar6 = 0;
              }
              else {
                iVar6 = iVar6 + 1;
              }
              iVar6 = iVar6 + -2;
            }
            else {
              iVar6 = -4;
            }
            if (((mVar7.ml - local_198) * 4 - iVar13) + iVar6 < 4) break;
            lVar8 = 2;
          }
          else {
            uVar10 = mVar7.off;
            if ((int)uVar10 < 1) {
              iVar6 = 0;
            }
            else {
              iVar6 = 0x1f;
              if (uVar10 != 0) {
                for (; uVar10 >> iVar6 == 0; iVar6 = iVar6 + -1) {
                }
              }
              iVar6 = iVar6 + 3;
            }
            if (0 < (int)uVar15) {
              iVar11 = 0x1f;
              if (uVar15 != 0) {
                for (; uVar15 >> iVar11 == 0; iVar11 = iVar11 + -1) {
                }
              }
              if (uVar15 == 0) {
                iVar11 = 0;
              }
              else {
                iVar11 = iVar11 + 1;
              }
              iVar11 = iVar11 + -2;
            }
            else {
              iVar11 = -4;
            }
            if (((mVar7.ml - local_198) * 4 - iVar6) + iVar11 < 1) goto LAB_14f3429cf;
            lVar8 = 1;
          }
          local_198 = mVar7.ml;
          iVar12 = iVar12 + (int)lVar8;
          puVar18 = puVar18 + lVar8;
          iVar13 = local_1a0;
          iVar6 = iVar12 + 1;
        }
        iVar6 = local_80.lasts.contents[5];
        iVar13 = local_80.lasts.contents[4];
        if (((uVar15 == 0) && (iVar12 == local_1a0)) &&
           (uVar15 = local_80.lasts.contents[4],
           local_80.lasts.contents[5] == local_80.lasts.contents[4])) {
          uVar15 = 0xffffffff;
        }
        puVar18 = param_9 + local_1a0;
        local_1a0 = iVar12 - local_1a0;
        if (local_1a0 == 0) {
          cVar17 = '\0';
        }
        else if (local_1a0 < 9) {
          iVar11 = local_1a0 + -3;
          *local_188 = (uchar)iVar11;
          if (-1 < iVar11) {
            local_188 = local_188 + 1;
          }
          iVar5 = local_1a0;
          if (-1 < iVar11) {
            iVar5 = 3;
          }
          cVar17 = (char)iVar5;
          *(undefined8 *)local_110.literals_ptr_raw = *(undefined8 *)puVar18;
          uVar1 = *(undefined8 *)puVar18;
          local_110.literals_ptr_raw = local_110.literals_ptr_raw + local_1a0;
          uVar2 = *(undefined8 *)(puVar18 + -(longlong)local_110.lastoffset);
          *(ulonglong *)local_110.literals_ptr_sub =
               CONCAT17((char)((ulonglong)uVar1 >> 0x38) - (char)((ulonglong)uVar2 >> 0x38),
                        CONCAT16((char)((ulonglong)uVar1 >> 0x30) - (char)((ulonglong)uVar2 >> 0x30)
                                 ,CONCAT15((char)((ulonglong)uVar1 >> 0x28) -
                                           (char)((ulonglong)uVar2 >> 0x28),
                                           CONCAT14((char)((ulonglong)uVar1 >> 0x20) -
                                                    (char)((ulonglong)uVar2 >> 0x20),
                                                    CONCAT13((char)((ulonglong)uVar1 >> 0x18) -
                                                             (char)((ulonglong)uVar2 >> 0x18),
                                                             CONCAT12((char)((ulonglong)uVar1 >>
                                                                            0x10) -
                                                                      (char)((ulonglong)uVar2 >>
                                                                            0x10),
                                                                      CONCAT11((char)((ulonglong)
                                                                                      uVar1 >> 8) -
                                                                               (char)((ulonglong)
                                                                                      uVar2 >> 8),
                                                                               (char)uVar1 -
                                                                               (char)uVar2)))))));
          local_110.literals_ptr_sub = local_110.literals_ptr_sub + local_1a0;
          local_110.excess_u8_ptr = local_188;
        }
        else {
          cVar17 = '\x03';
          newLZ_encoder_arrays_put_long_lrl<1>(&local_110,puVar18,local_1a0);
          local_188 = local_110.excess_u8_ptr;
        }
        iVar11 = local_198 + -2;
        if (0xe < iVar11) {
          iVar11 = 0xf;
          if (local_198 + -0x11 < 0xff) {
            *local_188 = (uchar)(local_198 + -0x11);
          }
          else {
            *local_188 = 0xff;
            *local_110.excess_u32_ptr = local_198 - 0x110;
            local_110.excess_u32_ptr = local_110.excess_u32_ptr + 1;
          }
          local_188 = local_188 + 1;
          local_110.excess_u8_ptr = local_188;
        }
        cVar17 = cVar17 + (char)iVar11 * '\x04';
        if ((int)uVar15 < 1) {
          lVar8 = (longlong)(int)-uVar15;
          cVar14 = (char)uVar15 * -0x40;
          local_110.lastoffset = local_80.lasts.contents[lVar8 + 4];
          iVar13 = local_80.lasts.contents[lVar8 + 2];
          local_80.lasts.contents[lVar8 + 4] = local_80.lasts.contents[lVar8 + 3];
          local_80.lasts.contents[lVar8 + 3] = iVar13;
          local_80.lasts.contents[4] = local_110.lastoffset;
        }
        else {
          local_80.lasts.contents[5] = iVar13;
          local_80.lasts.contents[6] = iVar6;
          local_110.lastoffset = uVar15;
          local_80.lasts.contents[4] = uVar15;
          if ((int)uVar15 < 0x7fff08) {
            uVar10 = uVar15 + 0xf8;
            iVar13 = 0x1f;
            if (uVar10 != 0) {
              for (; uVar10 >> iVar13 == 0; iVar13 = iVar13 + -1) {
              }
            }
            *local_110.offsets_u8_ptr = ((char)iVar13 + -8) * '\x10' | (byte)uVar10 & 0xf;
            *local_110.offsets_ptr = uVar15;
            local_110.offsets_u8_ptr = local_110.offsets_u8_ptr + 1;
            local_110.offsets_ptr = local_110.offsets_ptr + 1;
          }
          else {
            newLZ_encoder_arrays_put_long_offset(&local_110,uVar15);
            local_188 = local_110.excess_u8_ptr;
          }
          cVar14 = -0x40;
        }
        iVar13 = iVar12 + local_198;
        *local_110.packets_ptr = cVar14 + cVar17;
        iVar6 = iVar13;
        local_1a0 = iVar13;
        local_110.packets_ptr = local_110.packets_ptr + 1;
      }
      iVar12 = iVar6;
    } while (iVar6 < iVar19);
  }
  newLZ_encoder_arrays_finish_chunk<1>(&local_110,param_9 + iVar13);
  uVar20 = param_7->entropy_flags;
  OVar3 = param_7->level;
  param_7->entropy_flags = uVar20 & 0xffffffef;
  param_7->level = OodleLZ_CompressionLevel_Normal;
  lVar9 = newLZ_encoder_arrays_output
                    (param_1,param_2,param_3,param_4,param_5,param_7,param_14,&local_110,param_11,
                     param_13);
  param_7->level = OVar3;
  param_7->entropy_flags = uVar20;
  return lVar9;
}

// newLZ_encode_chunk_optimal_tll @ 14f342d80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

long64 __cdecl
oo2::newLZ_encode_chunk_optimal_tll
          (newlz_vtable *param_1,newlz_encoder_scratch *param_2,uchar *param_3,uchar *param_4,
          int param_5,uchar *param_6,uchar *param_7,long64 param_8,int *param_9,float *param_10,
          OodleKrakenChunkDeadlines *param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  rrArenaAllocator *prVar4;
  code *pcVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  long64 lVar10;
  longlong lVar11;
  longlong lVar12;
  newlz_encoder_scratch *pnVar13;
  uint uVar14;
  newlz_optimal_arrival_tll *pnVar15;
  ulong64 uVar16;
  float fVar17;
  int iVar18;
  longlong lVar19;
  ulonglong uVar20;
  char cVar21;
  ulong64 uVar22;
  int *piVar23;
  uchar *puVar24;
  char cVar25;
  uint uVar26;
  uchar *puVar27;
  newlz_vtable *pnVar28;
  size_t sVar29;
  int *piVar30;
  int iVar31;
  ulonglong uVar32;
  float fVar33;
  undefined1 auStackY_4f78 [32];
  float local_4ec0;
  float local_4ebc;
  uint local_4eb8;
  int local_4eb4;
  int local_4eb0;
  newlz_encoder_scratch *local_4ea8;
  OodleLZ_CompressOptions *local_4ea0;
  int local_4e98;
  uint local_4e94;
  uchar *local_4e90;
  UnpackedMatchPair *local_4e88;
  uchar *local_4e80;
  int local_4e78 [2];
  uchar *local_4e70;
  int *local_4e68;
  size_t local_4e60;
  uchar *local_4e58;
  uchar *local_4e50;
  size_t local_4e48;
  OodleKrakenChunkDeadlines *local_4e40;
  newlz_vtable *local_4e38;
  int local_4e30;
  int local_4e2c;
  OodleLZ_CompressionLevel local_4e28;
  int *local_4e20;
  rrArenaAllocator *local_4e18;
  float *local_4e10;
  longlong local_4e08;
  ulong64 local_4e00;
  void *local_4df8;
  ulonglong local_4df0;
  longlong local_4de8;
  newlz_optimal_arrivals_tll local_4de0;
  void *local_4dc8;
  undefined8 local_4dc0;
  undefined8 local_4db8;
  int *local_4db0;
  ulonglong local_4da8;
  ulonglong local_4da0;
  newLZ_encoder_arrays local_4d90;
  ulong64 local_4d00;
  uint auStack_4cd8 [6];
  newlz_passinfo local_4cc0;
  newlz_passinfo local_34b0;
  newlz_codecosts local_1ca0;
  ulonglong local_90;
  undefined8 local_80;
  undefined8 local_48;
  
  local_48 = 0x14f342d97;
  local_80 = 0xfffffffffffffffe;
  local_90 = __security_cookie.value ^ (ulonglong)auStackY_4f78;
  local_4e50 = param_6;
  local_4e68 = param_9;
  local_4e10 = param_10;
  local_4e40 = param_11;
  local_4ea8 = param_2;
  local_4e80 = param_4;
  local_4e70 = param_3;
  local_4e38 = param_1;
  if (fp_ThreadProfiler_Push == (_func___cdecl_ulong64_char_ptr_ulong64 *)0x0) {
    local_4e00 = 0xffffffffffffffff;
  }
  else {
    local_4e00 = (*fp_ThreadProfiler_Push)("kraken_chunk_optimal",0);
  }
  uVar16 = local_4e00;
  *param_9 = 0;
  sVar29 = (size_t)param_5;
  local_4d00 = local_4e00;
  if (0x80 < param_5) {
    if ((int)local_4e38->level < 8) {
      local_4eb8 = 1;
      local_4e98 = 1;
      if (5 < (int)local_4e38->level) {
        local_4e98 = 3;
      }
    }
    else {
      local_4eb8 = 2;
      local_4e98 = 8;
    }
    prVar4 = param_2->arena;
    local_4ea0 = local_4e38->pOptions;
    local_4e94 = local_4ea0->dictionarySize;
    if ((int)local_4e94 < 1) {
      local_4e94 = 0x40000000;
    }
    else if (0x40000000 < (int)local_4e94) {
      local_4e94 = 0x40000000;
    }
    local_4e88 = param_2->match_pairs;
    local_4df8 = (void *)0x0;
    local_4df0 = 0;
    local_4de8 = 0;
    local_4dc8 = (void *)0x0;
    local_4dc0 = 0;
    local_4db8 = 0;
    lVar19 = (sVar29 & 0xfffffffffffffff) * 8;
    local_4e60 = sVar29;
    local_4e18 = prVar4;
    newlz_scratchblock::extend(&param_2->parsevec_space,lVar19 + 0x10000,prVar4);
    local_4df8 = (param_2->parsevec_space).m_ptr;
    local_4df0 = (sVar29 & 0xfffffffffffffff) >> 1;
    local_4dc8 = (void *)((longlong)local_4df8 + lVar19);
    local_4dc0 = 0x1000;
    lVar19 = (longlong)(int)(param_5 + 0x100 + ((uint)param_5 >> 4));
    newlz_scratchblock::extend(&param_2->literals_space,lVar19,prVar4);
    pnVar13 = local_4ea8;
    puVar24 = (param_2->literals_space).m_ptr;
    puVar27 = puVar24 + lVar19;
    local_4e2c = 8;
    if (param_8 != 0) {
      local_4e2c = 0;
    }
    uVar22 = (ulong64)(int)((param_5 + 1) * local_4eb8);
    newlz_scratchblock::extend(&local_4ea8->arrivals_space,uVar22 << 5,local_4e18);
    fVar7 = __real_4e800000;
    local_4de0.costs = (pnVar13->arrivals_space).m_ptr;
    local_4de0.payloads = (newlz_optimal_arrival_tll *)(local_4de0.costs + uVar22);
    local_4eb0 = local_4ea0->minMatchLen;
    if (local_4eb0 < 4) {
      local_4eb0 = 4;
    }
    local_4ec0 = 1.0737418e+09;
    local_4de0.count = uVar22;
    local_4e48 = newLZ_encode_chunk_optimal_greedy
                           (&local_4ec0,local_4e68,&local_4cc0,local_4e50,param_7,local_4eb0,
                            local_4e38,(newLZ_MatchParseRecord *)local_4e88,local_4e80,param_5,
                            param_8,local_4e70,local_4e40,pnVar13,puVar24,puVar27);
    pnVar28 = local_4e38;
    sVar29 = local_4e60;
    if ((longlong)local_4e48 < (longlong)param_5) {
      if ((param_8 == 0) || (local_4e88->length < param_5 + -0x10)) {
        local_4e90 = (pnVar13->arrivals_space).m_ptr;
        local_4e58 = local_4e90 + (pnVar13->arrivals_space).m_size;
        if ((((int)local_4e38->level < 7) && (local_4e38->compressor != OodleLZ_Compressor_Hydra))
           || (3 < local_4ea0->minMatchLen)) {
          uVar20 = (ulonglong)(uint)param_5;
          fVar33 = local_4ec0;
        }
        else {
          local_4ebc = 1.0737418e+09;
          uVar20 = (ulonglong)param_5;
          sVar29 = newLZ_encode_chunk_optimal_greedy
                             (&local_4ebc,&local_4eb4,&local_34b0,local_4e90,local_4e58,3,local_4e38
                              ,(newLZ_MatchParseRecord *)local_4e88,local_4e80,param_5,param_8,
                              local_4e70,local_4e40,pnVar13,puVar24,puVar27);
          fVar17 = local_4ebc;
          pnVar13 = local_4ea8;
          fVar33 = local_4ec0;
          if ((local_4ebc < local_4ec0) && ((longlong)sVar29 < (longlong)uVar20)) {
            *local_4e68 = local_4eb4;
            memcpy(local_4e50,local_4e90,sVar29);
            local_4eb0 = 3;
            local_4e48 = sVar29;
            memcpy(&local_4cc0,&local_34b0,0x1804);
            pnVar13 = local_4ea8;
            fVar33 = fVar17;
          }
        }
        fVar17 = (float)uVar20;
        if (local_4ea0->minMatchLen < 8) {
          local_4ebc = 1.0737418e+09;
          sVar29 = newLZ_encode_chunk_optimal_greedy
                             (&local_4ebc,&local_4eb4,&local_34b0,local_4e90,local_4e58,8,pnVar28,
                              (newLZ_MatchParseRecord *)local_4e88,local_4e80,(int)fVar17,param_8,
                              local_4e70,local_4e40,pnVar13,puVar24,puVar27);
          fVar8 = local_4ebc;
          if ((local_4ebc < fVar33) && ((longlong)sVar29 < (longlong)(int)fVar17)) {
            *local_4e68 = local_4eb4;
            memcpy(local_4e50,local_4e90,sVar29);
            local_4e48 = sVar29;
            memcpy(&local_4cc0,&local_34b0,0x1804);
            fVar33 = fVar8;
          }
        }
        pnVar13 = local_4ea8;
        if (((6 < (int)pnVar28->level) || (pnVar28->compressor == OodleLZ_Compressor_Hydra)) &&
           (local_4ea0->minMatchLen < 4)) {
          local_4eb0 = 3;
        }
        local_4db0 = (int *)0x0;
        local_4da8 = 0;
        local_4da0 = 0;
        local_4e20 = (int *)0x0;
        local_4ec0 = fVar17;
        if (1 < local_4eb8) {
          uVar32 = (ulonglong)(param_5 + 1);
          newlz_scratchblock::extend(&local_4ea8->last_tll_len_space,uVar32 * 4,local_4e18);
          piVar30 = (pnVar13->last_tll_len_space).m_ptr;
          local_4da8 = uVar32 & 0x3fffffffffffffff;
          local_4ec0 = (float)(local_4eb8 - 1);
          local_4db0 = piVar30;
          if ((local_4da8 < uVar32) &&
             (iVar9 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h"
                                         ,0x3f,"oo2::vector_storage_a<int>::needmakefit",
                                         "newsize <= m_capacity"), iVar9 != 0)) {
            pcVar5 = (code *)swi(3);
            lVar10 = (*pcVar5)();
            return lVar10;
          }
          if (uVar32 == 0) {
            piVar30 = (int *)0x0;
          }
          else {
            memset(piVar30,0,uVar32 << 2);
          }
          uVar20 = (ulonglong)(uint)param_5;
          local_4e20 = piVar30;
          local_4da0 = uVar32;
        }
        local_4e28 = pnVar28->level;
        local_4eb4 = 0;
        iVar9 = pnVar28->carried_encoder_state_chunktype;
        local_4e30 = local_4eb8 * (int)uVar20;
        uVar14 = local_4eb8;
        iVar31 = local_4e78[0];
        while( true ) {
          piVar30 = local_4e20;
          lVar19 = 0;
          local_1ca0.chunktype = *local_4e68;
          local_1ca0.subliteralmask = 0xffffffff;
          if (local_1ca0.chunktype == 1) {
            local_1ca0.subliteralmask = 0;
          }
          lVar11 = lVar19;
          if (iVar9 < 0) {
            do {
              uVar3 = local_4cc0.literal_histo_raw[lVar11 + 1];
              uVar26 = local_4cc0.literal_histo_raw[lVar11 + 2];
              uVar6 = local_4cc0.literal_histo_raw[lVar11 + 3];
              local_4cc0.literal_histo_raw[lVar11] =
                   (local_4cc0.literal_histo_raw[lVar11] >> 4) +
                   ___xmm_00000001000000010000000100000001;
              local_4cc0.literal_histo_raw[lVar11 + 1] = (uVar3 >> 4) + _UNK_150631da4;
              local_4cc0.literal_histo_raw[lVar11 + 2] = (uVar26 >> 4) + _UNK_150631da8;
              local_4cc0.literal_histo_raw[lVar11 + 3] = (uVar6 >> 4) + _UNK_150631dac;
              uVar3 = local_4cc0.literal_histo_raw[lVar11 + 5];
              uVar26 = local_4cc0.literal_histo_raw[lVar11 + 6];
              uVar6 = local_4cc0.literal_histo_raw[lVar11 + 7];
              local_4cc0.literal_histo_raw[lVar11 + 4] =
                   (local_4cc0.literal_histo_raw[lVar11 + 4] >> 4) +
                   ___xmm_00000001000000010000000100000001;
              local_4cc0.literal_histo_raw[lVar11 + 5] = (uVar3 >> 4) + _UNK_150631da4;
              local_4cc0.literal_histo_raw[lVar11 + 6] = (uVar26 >> 4) + _UNK_150631da8;
              local_4cc0.literal_histo_raw[lVar11 + 7] = (uVar6 >> 4) + _UNK_150631dac;
              uVar3 = local_4cc0.literal_histo_raw[lVar11 + 9];
              uVar26 = local_4cc0.literal_histo_raw[lVar11 + 10];
              uVar6 = local_4cc0.literal_histo_raw[lVar11 + 0xb];
              local_4cc0.literal_histo_raw[lVar11 + 8] =
                   (local_4cc0.literal_histo_raw[lVar11 + 8] >> 4) +
                   ___xmm_00000001000000010000000100000001;
              local_4cc0.literal_histo_raw[lVar11 + 9] = (uVar3 >> 4) + _UNK_150631da4;
              local_4cc0.literal_histo_raw[lVar11 + 10] = (uVar26 >> 4) + _UNK_150631da8;
              local_4cc0.literal_histo_raw[lVar11 + 0xb] = (uVar6 >> 4) + _UNK_150631dac;
              uVar3 = local_4cc0.literal_histo_raw[lVar11 + 0xd];
              uVar26 = local_4cc0.literal_histo_raw[lVar11 + 0xe];
              uVar6 = local_4cc0.literal_histo_raw[lVar11 + 0xf];
              local_4cc0.literal_histo_raw[lVar11 + 0xc] =
                   (local_4cc0.literal_histo_raw[lVar11 + 0xc] >> 4) +
                   ___xmm_00000001000000010000000100000001;
              local_4cc0.literal_histo_raw[lVar11 + 0xd] = (uVar3 >> 4) + _UNK_150631da4;
              local_4cc0.literal_histo_raw[lVar11 + 0xe] = (uVar26 >> 4) + _UNK_150631da8;
              local_4cc0.literal_histo_raw[lVar11 + 0xf] = (uVar6 >> 4) + _UNK_150631dac;
              lVar11 = lVar11 + 0x10;
              lVar12 = lVar19;
            } while (lVar11 < 0x100);
            do {
              uVar3 = local_4cc0.literal_histo_sub[lVar12 + 1];
              uVar26 = local_4cc0.literal_histo_sub[lVar12 + 2];
              uVar6 = local_4cc0.literal_histo_sub[lVar12 + 3];
              local_4cc0.literal_histo_sub[lVar12] =
                   (local_4cc0.literal_histo_sub[lVar12] >> 4) +
                   ___xmm_00000001000000010000000100000001;
              local_4cc0.literal_histo_sub[lVar12 + 1] = (uVar3 >> 4) + _UNK_150631da4;
              local_4cc0.literal_histo_sub[lVar12 + 2] = (uVar26 >> 4) + _UNK_150631da8;
              local_4cc0.literal_histo_sub[lVar12 + 3] = (uVar6 >> 4) + _UNK_150631dac;
              uVar3 = local_4cc0.literal_histo_sub[lVar12 + 5];
              uVar26 = local_4cc0.literal_histo_sub[lVar12 + 6];
              uVar6 = local_4cc0.literal_histo_sub[lVar12 + 7];
              local_4cc0.literal_histo_sub[lVar12 + 4] =
                   (local_4cc0.literal_histo_sub[lVar12 + 4] >> 4) +
                   ___xmm_00000001000000010000000100000001;
              local_4cc0.literal_histo_sub[lVar12 + 5] = (uVar3 >> 4) + _UNK_150631da4;
              local_4cc0.literal_histo_sub[lVar12 + 6] = (uVar26 >> 4) + _UNK_150631da8;
              local_4cc0.literal_histo_sub[lVar12 + 7] = (uVar6 >> 4) + _UNK_150631dac;
              uVar3 = local_4cc0.literal_histo_sub[lVar12 + 9];
              uVar26 = local_4cc0.literal_histo_sub[lVar12 + 10];
              uVar6 = local_4cc0.literal_histo_sub[lVar12 + 0xb];
              local_4cc0.literal_histo_sub[lVar12 + 8] =
                   (local_4cc0.literal_histo_sub[lVar12 + 8] >> 4) +
                   ___xmm_00000001000000010000000100000001;
              local_4cc0.literal_histo_sub[lVar12 + 9] = (uVar3 >> 4) + _UNK_150631da4;
              local_4cc0.literal_histo_sub[lVar12 + 10] = (uVar26 >> 4) + _UNK_150631da8;
              local_4cc0.literal_histo_sub[lVar12 + 0xb] = (uVar6 >> 4) + _UNK_150631dac;
              uVar3 = local_4cc0.literal_histo_sub[lVar12 + 0xd];
              uVar26 = local_4cc0.literal_histo_sub[lVar12 + 0xe];
              uVar6 = local_4cc0.literal_histo_sub[lVar12 + 0xf];
              local_4cc0.literal_histo_sub[lVar12 + 0xc] =
                   (local_4cc0.literal_histo_sub[lVar12 + 0xc] >> 4) +
                   ___xmm_00000001000000010000000100000001;
              local_4cc0.literal_histo_sub[lVar12 + 0xd] = (uVar3 >> 4) + _UNK_150631da4;
              local_4cc0.literal_histo_sub[lVar12 + 0xe] = (uVar26 >> 4) + _UNK_150631da8;
              local_4cc0.literal_histo_sub[lVar12 + 0xf] = (uVar6 >> 4) + _UNK_150631dac;
              lVar12 = lVar12 + 0x10;
              lVar11 = lVar19;
            } while (lVar12 < 0x100);
            do {
              uVar3 = local_4cc0.offset_histo1[lVar11 + 1];
              uVar26 = local_4cc0.offset_histo1[lVar11 + 2];
              uVar6 = local_4cc0.offset_histo1[lVar11 + 3];
              local_4cc0.offset_histo1[lVar11] =
                   (local_4cc0.offset_histo1[lVar11] >> 4) + ___xmm_00000001000000010000000100000001
              ;
              local_4cc0.offset_histo1[lVar11 + 1] = (uVar3 >> 4) + _UNK_150631da4;
              local_4cc0.offset_histo1[lVar11 + 2] = (uVar26 >> 4) + _UNK_150631da8;
              local_4cc0.offset_histo1[lVar11 + 3] = (uVar6 >> 4) + _UNK_150631dac;
              uVar3 = local_4cc0.offset_histo1[lVar11 + 5];
              uVar26 = local_4cc0.offset_histo1[lVar11 + 6];
              uVar6 = local_4cc0.offset_histo1[lVar11 + 7];
              local_4cc0.offset_histo1[lVar11 + 4] =
                   (local_4cc0.offset_histo1[lVar11 + 4] >> 4) +
                   ___xmm_00000001000000010000000100000001;
              local_4cc0.offset_histo1[lVar11 + 5] = (uVar3 >> 4) + _UNK_150631da4;
              local_4cc0.offset_histo1[lVar11 + 6] = (uVar26 >> 4) + _UNK_150631da8;
              local_4cc0.offset_histo1[lVar11 + 7] = (uVar6 >> 4) + _UNK_150631dac;
              uVar3 = local_4cc0.offset_histo1[lVar11 + 9];
              uVar26 = local_4cc0.offset_histo1[lVar11 + 10];
              uVar6 = local_4cc0.offset_histo1[lVar11 + 0xb];
              local_4cc0.offset_histo1[lVar11 + 8] =
                   (local_4cc0.offset_histo1[lVar11 + 8] >> 4) +
                   ___xmm_00000001000000010000000100000001;
              local_4cc0.offset_histo1[lVar11 + 9] = (uVar3 >> 4) + _UNK_150631da4;
              local_4cc0.offset_histo1[lVar11 + 10] = (uVar26 >> 4) + _UNK_150631da8;
              local_4cc0.offset_histo1[lVar11 + 0xb] = (uVar6 >> 4) + _UNK_150631dac;
              uVar3 = local_4cc0.offset_histo1[lVar11 + 0xd];
              uVar26 = local_4cc0.offset_histo1[lVar11 + 0xe];
              uVar6 = local_4cc0.offset_histo1[lVar11 + 0xf];
              local_4cc0.offset_histo1[lVar11 + 0xc] =
                   (local_4cc0.offset_histo1[lVar11 + 0xc] >> 4) +
                   ___xmm_00000001000000010000000100000001;
              local_4cc0.offset_histo1[lVar11 + 0xd] = (uVar3 >> 4) + _UNK_150631da4;
              local_4cc0.offset_histo1[lVar11 + 0xe] = (uVar26 >> 4) + _UNK_150631da8;
              local_4cc0.offset_histo1[lVar11 + 0xf] = (uVar6 >> 4) + _UNK_150631dac;
              lVar11 = lVar11 + 0x10;
            } while (lVar11 < 0x100);
            lVar11 = lVar19;
            lVar12 = lVar19;
            if (1 < local_4cc0.offset_alt_modulo) {
              do {
                uVar3 = local_4cc0.offset_histo2[lVar12 + 1];
                uVar26 = local_4cc0.offset_histo2[lVar12 + 2];
                uVar6 = local_4cc0.offset_histo2[lVar12 + 3];
                local_4cc0.offset_histo2[lVar12] =
                     (local_4cc0.offset_histo2[lVar12] >> 4) +
                     ___xmm_00000001000000010000000100000001;
                local_4cc0.offset_histo2[lVar12 + 1] = (uVar3 >> 4) + _UNK_150631da4;
                local_4cc0.offset_histo2[lVar12 + 2] = (uVar26 >> 4) + _UNK_150631da8;
                local_4cc0.offset_histo2[lVar12 + 3] = (uVar6 >> 4) + _UNK_150631dac;
                uVar3 = local_4cc0.offset_histo2[lVar12 + 5];
                uVar26 = local_4cc0.offset_histo2[lVar12 + 6];
                uVar6 = local_4cc0.offset_histo2[lVar12 + 7];
                local_4cc0.offset_histo2[lVar12 + 4] =
                     (local_4cc0.offset_histo2[lVar12 + 4] >> 4) +
                     ___xmm_00000001000000010000000100000001;
                local_4cc0.offset_histo2[lVar12 + 5] = (uVar3 >> 4) + _UNK_150631da4;
                local_4cc0.offset_histo2[lVar12 + 6] = (uVar26 >> 4) + _UNK_150631da8;
                local_4cc0.offset_histo2[lVar12 + 7] = (uVar6 >> 4) + _UNK_150631dac;
                uVar3 = local_4cc0.offset_histo2[lVar12 + 9];
                uVar26 = local_4cc0.offset_histo2[lVar12 + 10];
                uVar6 = local_4cc0.offset_histo2[lVar12 + 0xb];
                local_4cc0.offset_histo2[lVar12 + 8] =
                     (local_4cc0.offset_histo2[lVar12 + 8] >> 4) +
                     ___xmm_00000001000000010000000100000001;
                local_4cc0.offset_histo2[lVar12 + 9] = (uVar3 >> 4) + _UNK_150631da4;
                local_4cc0.offset_histo2[lVar12 + 10] = (uVar26 >> 4) + _UNK_150631da8;
                local_4cc0.offset_histo2[lVar12 + 0xb] = (uVar6 >> 4) + _UNK_150631dac;
                uVar3 = local_4cc0.offset_histo2[lVar12 + 0xd];
                uVar26 = local_4cc0.offset_histo2[lVar12 + 0xe];
                uVar6 = local_4cc0.offset_histo2[lVar12 + 0xf];
                local_4cc0.offset_histo2[lVar12 + 0xc] =
                     (local_4cc0.offset_histo2[lVar12 + 0xc] >> 4) +
                     ___xmm_00000001000000010000000100000001;
                local_4cc0.offset_histo2[lVar12 + 0xd] = (uVar3 >> 4) + _UNK_150631da4;
                local_4cc0.offset_histo2[lVar12 + 0xe] = (uVar26 >> 4) + _UNK_150631da8;
                local_4cc0.offset_histo2[lVar12 + 0xf] = (uVar6 >> 4) + _UNK_150631dac;
                lVar12 = lVar12 + 0x10;
              } while (lVar12 < 0x100);
            }
            do {
              uVar3 = local_4cc0.packet_histo[lVar11 + 1];
              uVar26 = local_4cc0.packet_histo[lVar11 + 2];
              uVar6 = local_4cc0.packet_histo[lVar11 + 3];
              local_4cc0.packet_histo[lVar11] =
                   (local_4cc0.packet_histo[lVar11] >> 4) + ___xmm_00000001000000010000000100000001;
              local_4cc0.packet_histo[lVar11 + 1] = (uVar3 >> 4) + _UNK_150631da4;
              local_4cc0.packet_histo[lVar11 + 2] = (uVar26 >> 4) + _UNK_150631da8;
              local_4cc0.packet_histo[lVar11 + 3] = (uVar6 >> 4) + _UNK_150631dac;
              uVar3 = local_4cc0.packet_histo[lVar11 + 5];
              uVar26 = local_4cc0.packet_histo[lVar11 + 6];
              uVar6 = local_4cc0.packet_histo[lVar11 + 7];
              local_4cc0.packet_histo[lVar11 + 4] =
                   (local_4cc0.packet_histo[lVar11 + 4] >> 4) +
                   ___xmm_00000001000000010000000100000001;
              local_4cc0.packet_histo[lVar11 + 5] = (uVar3 >> 4) + _UNK_150631da4;
              local_4cc0.packet_histo[lVar11 + 6] = (uVar26 >> 4) + _UNK_150631da8;
              local_4cc0.packet_histo[lVar11 + 7] = (uVar6 >> 4) + _UNK_150631dac;
              uVar3 = local_4cc0.packet_histo[lVar11 + 9];
              uVar26 = local_4cc0.packet_histo[lVar11 + 10];
              uVar6 = local_4cc0.packet_histo[lVar11 + 0xb];
              local_4cc0.packet_histo[lVar11 + 8] =
                   (local_4cc0.packet_histo[lVar11 + 8] >> 4) +
                   ___xmm_00000001000000010000000100000001;
              local_4cc0.packet_histo[lVar11 + 9] = (uVar3 >> 4) + _UNK_150631da4;
              local_4cc0.packet_histo[lVar11 + 10] = (uVar26 >> 4) + _UNK_150631da8;
              local_4cc0.packet_histo[lVar11 + 0xb] = (uVar6 >> 4) + _UNK_150631dac;
              uVar3 = local_4cc0.packet_histo[lVar11 + 0xd];
              uVar26 = local_4cc0.packet_histo[lVar11 + 0xe];
              uVar6 = local_4cc0.packet_histo[lVar11 + 0xf];
              local_4cc0.packet_histo[lVar11 + 0xc] =
                   (local_4cc0.packet_histo[lVar11 + 0xc] >> 4) +
                   ___xmm_00000001000000010000000100000001;
              local_4cc0.packet_histo[lVar11 + 0xd] = (uVar3 >> 4) + _UNK_150631da4;
              local_4cc0.packet_histo[lVar11 + 0xe] = (uVar26 >> 4) + _UNK_150631da8;
              local_4cc0.packet_histo[lVar11 + 0xf] = (uVar6 >> 4) + _UNK_150631dac;
              lVar11 = lVar11 + 0x10;
            } while (lVar11 < 0x100);
            do {
              uVar3 = local_4cc0.excess_histo[lVar19 + 1];
              uVar26 = local_4cc0.excess_histo[lVar19 + 2];
              uVar6 = local_4cc0.excess_histo[lVar19 + 3];
              local_4cc0.excess_histo[lVar19] =
                   (local_4cc0.excess_histo[lVar19] >> 4) + ___xmm_00000001000000010000000100000001;
              local_4cc0.excess_histo[lVar19 + 1] = (uVar3 >> 4) + _UNK_150631da4;
              local_4cc0.excess_histo[lVar19 + 2] = (uVar26 >> 4) + _UNK_150631da8;
              local_4cc0.excess_histo[lVar19 + 3] = (uVar6 >> 4) + _UNK_150631dac;
              uVar3 = local_4cc0.excess_histo[lVar19 + 5];
              uVar26 = local_4cc0.excess_histo[lVar19 + 6];
              uVar6 = local_4cc0.excess_histo[lVar19 + 7];
              local_4cc0.excess_histo[lVar19 + 4] =
                   (local_4cc0.excess_histo[lVar19 + 4] >> 4) +
                   ___xmm_00000001000000010000000100000001;
              local_4cc0.excess_histo[lVar19 + 5] = (uVar3 >> 4) + _UNK_150631da4;
              local_4cc0.excess_histo[lVar19 + 6] = (uVar26 >> 4) + _UNK_150631da8;
              local_4cc0.excess_histo[lVar19 + 7] = (uVar6 >> 4) + _UNK_150631dac;
              uVar3 = local_4cc0.excess_histo[lVar19 + 9];
              uVar26 = local_4cc0.excess_histo[lVar19 + 10];
              uVar6 = local_4cc0.excess_histo[lVar19 + 0xb];
              local_4cc0.excess_histo[lVar19 + 8] =
                   (local_4cc0.excess_histo[lVar19 + 8] >> 4) +
                   ___xmm_00000001000000010000000100000001;
              local_4cc0.excess_histo[lVar19 + 9] = (uVar3 >> 4) + _UNK_150631da4;
              local_4cc0.excess_histo[lVar19 + 10] = (uVar26 >> 4) + _UNK_150631da8;
              local_4cc0.excess_histo[lVar19 + 0xb] = (uVar6 >> 4) + _UNK_150631dac;
              uVar3 = local_4cc0.excess_histo[lVar19 + 0xd];
              uVar26 = local_4cc0.excess_histo[lVar19 + 0xe];
              uVar6 = local_4cc0.excess_histo[lVar19 + 0xf];
              local_4cc0.excess_histo[lVar19 + 0xc] =
                   (local_4cc0.excess_histo[lVar19 + 0xc] >> 4) +
                   ___xmm_00000001000000010000000100000001;
              local_4cc0.excess_histo[lVar19 + 0xd] = (uVar3 >> 4) + _UNK_150631da4;
              local_4cc0.excess_histo[lVar19 + 0xe] = (uVar26 >> 4) + _UNK_150631da8;
              local_4cc0.excess_histo[lVar19 + 0xf] = (uVar6 >> 4) + _UNK_150631dac;
              lVar19 = lVar19 + 0x10;
            } while (lVar19 < 0x100);
          }
          else {
            optimal_rescale_passinfo2
                      (&local_4cc0,(pnVar28->carried_encoder_state).m_ptr,
                       iVar9 == local_1ca0.chunktype);
          }
          iVar9 = local_4eb0;
          local_1ca0.offset_alt_modulo = local_4cc0.offset_alt_modulo;
          optimal_passinfo_to_codecost(&local_4cc0,&local_1ca0,local_4eb0);
          puVar27 = local_4e80;
          if (-1 < local_4e30) {
            piVar23 = local_4de0.costs;
            for (lVar19 = (longlong)(local_4e30 + 1); iVar9 = local_4eb0, lVar19 != 0;
                lVar19 = lVar19 + -1) {
              *piVar23 = 0x7fffffff;
              piVar23 = piVar23 + 1;
            }
          }
          pnVar15 = local_4de0.payloads + local_4e2c * uVar14;
          local_4de0.costs[local_4e2c * uVar14] = 0;
          (pnVar15->los).lasts[0] = 8;
          (pnVar15->los).lasts[1] = 8;
          *(undefined8 *)((pnVar15->los).lasts + 2) = 8;
          pnVar15->lrl = 0;
          pnVar15->field3_0x14 = (newlz_optimal_arrival_tll_u_20)0x0;
          pnVar15->prev_index = 0;
          iVar18 = (int)uVar20;
          if (uVar14 == 1) {
            newLZ_encode_chunk_optimal_parse_tll_core<1,oo2::NewLZParseCoreSSE2>
                      (local_4e80,iVar18,local_4e2c,0x100,0x1000,local_4e70,local_4e94,
                       (newLZ_MatchParseRecord *)local_4e88,iVar9,local_4e98,&local_4de0,
                       (int)local_4ec0,piVar30,pnVar28,&local_4cc0,&local_1ca0,
                       (vector_a<oo2::newlz_encoder_parse> *)&local_4df8,
                       (vector_a<oo2::newlz_encoder_parse> *)&local_4dc8,local_4ea0);
          }
          else {
            if (uVar14 != 2) {
              pcVar5 = (code *)swi(3);
              lVar10 = (*pcVar5)();
              return lVar10;
            }
            newLZ_encode_chunk_optimal_parse_tll_core<2,oo2::NewLZParseCoreSSE2>
                      (local_4e80,iVar18,local_4e2c,0x100,0x1000,local_4e70,local_4e94,
                       (newLZ_MatchParseRecord *)local_4e88,iVar9,local_4e98,&local_4de0,
                       (int)local_4ec0,piVar30,pnVar28,&local_4cc0,&local_1ca0,
                       (vector_a<oo2::newlz_encoder_parse> *)&local_4df8,
                       (vector_a<oo2::newlz_encoder_parse> *)&local_4dc8,local_4ea0);
          }
          lVar19 = local_4de8;
          local_4ebc = fVar7;
          sVar29 = local_4e60;
          puVar24 = local_4e90;
          if (local_4de8 != 0) {
            newLZ_encoder_arrays_point_to_scratch
                      (&local_4d90,local_4ea8,iVar18,puVar27,pnVar28->bitstream_flags);
            uVar14 = 8;
            auStack_4cd8[2] = 8;
            uVar20 = 8;
            auStack_4cd8[3] = 8;
            auStack_4cd8[4] = 8;
            lVar11 = 0;
            if (param_8 == 0) {
              lVar11 = 8;
            }
            puVar27 = puVar27 + lVar11;
            if (0 < lVar19) {
              piVar30 = (int *)((longlong)local_4df8 + 8);
              puVar24 = local_4d90.excess_u8_ptr;
              do {
                uVar3 = piVar30[1];
                iVar9 = *piVar30;
                iVar31 = piVar30[-1];
                uVar26 = (uint)uVar20;
                local_4e08 = lVar19;
                if (iVar31 == 0) {
                  cVar25 = '\0';
                }
                else if (iVar31 < 9) {
                  *puVar24 = (uchar)(iVar31 + -3);
                  iVar18 = iVar31;
                  local_4d90.excess_u8_ptr = puVar24;
                  if (-1 < iVar31 + -3) {
                    iVar18 = 3;
                    local_4d90.excess_u8_ptr = puVar24 + 1;
                  }
                  cVar25 = (char)iVar18;
                  *(undefined8 *)local_4d90.literals_ptr_raw = *(undefined8 *)puVar27;
                  local_4d90.literals_ptr_raw = local_4d90.literals_ptr_raw + iVar31;
                  uVar1 = *(undefined8 *)puVar27;
                  uVar2 = *(undefined8 *)(puVar27 + -(longlong)local_4d90.lastoffset);
                  *(ulonglong *)local_4d90.literals_ptr_sub =
                       CONCAT17((char)((ulonglong)uVar1 >> 0x38) - (char)((ulonglong)uVar2 >> 0x38),
                                CONCAT16((char)((ulonglong)uVar1 >> 0x30) -
                                         (char)((ulonglong)uVar2 >> 0x30),
                                         CONCAT15((char)((ulonglong)uVar1 >> 0x28) -
                                                  (char)((ulonglong)uVar2 >> 0x28),
                                                  CONCAT14((char)((ulonglong)uVar1 >> 0x20) -
                                                           (char)((ulonglong)uVar2 >> 0x20),
                                                           CONCAT13((char)((ulonglong)uVar1 >> 0x18)
                                                                    - (char)((ulonglong)uVar2 >>
                                                                            0x18),
                                                                    CONCAT12((char)((ulonglong)uVar1
                                                                                   >> 0x10) -
                                                                             (char)((ulonglong)uVar2
                                                                                   >> 0x10),
                                                                             CONCAT11((char)((
                                                  ulonglong)uVar1 >> 8) -
                                                  (char)((ulonglong)uVar2 >> 8),
                                                  (char)uVar1 - (char)uVar2)))))));
                  local_4d90.literals_ptr_sub = local_4d90.literals_ptr_sub + iVar31;
                  puVar24 = local_4d90.excess_u8_ptr;
                }
                else {
                  cVar25 = '\x03';
                  newLZ_encoder_arrays_put_long_lrl<1>(&local_4d90,puVar27,iVar31);
                  puVar24 = local_4d90.excess_u8_ptr;
                  uVar26 = auStack_4cd8[3];
                }
                iVar31 = iVar9 + -2;
                if (0xe < iVar31) {
                  iVar31 = 0xf;
                  if (iVar9 + -0x11 < 0xff) {
                    *puVar24 = (uchar)(iVar9 + -0x11);
                  }
                  else {
                    *puVar24 = 0xff;
                    *local_4d90.excess_u32_ptr = iVar9 - 0x110;
                    local_4d90.excess_u32_ptr = local_4d90.excess_u32_ptr + 1;
                  }
                  puVar24 = puVar24 + 1;
                  local_4d90.excess_u8_ptr = puVar24;
                }
                cVar25 = cVar25 + (char)iVar31 * '\x04';
                if ((int)uVar3 < 1) {
                  lVar19 = (longlong)(int)-uVar3;
                  local_4d90.lastoffset = auStack_4cd8[lVar19 + 2];
                  auStack_4cd8[lVar19 + 2] = auStack_4cd8[lVar19 + 1];
                  auStack_4cd8[lVar19 + 1] = auStack_4cd8[lVar19];
                  auStack_4cd8[2] = local_4d90.lastoffset;
                  cVar21 = (char)uVar3 * -0x40;
                  uVar20 = (ulonglong)auStack_4cd8[3];
                  uVar14 = local_4d90.lastoffset;
                }
                else {
                  auStack_4cd8[2] = uVar3;
                  uVar20 = (ulonglong)uVar14;
                  auStack_4cd8[3] = uVar14;
                  auStack_4cd8[4] = uVar26;
                  local_4d90.lastoffset = uVar3;
                  if ((int)uVar3 < 0x7fff08) {
                    uVar14 = uVar3 + 0xf8;
                    iVar9 = 0x1f;
                    if (uVar14 != 0) {
                      for (; uVar14 >> iVar9 == 0; iVar9 = iVar9 + -1) {
                      }
                    }
                    *local_4d90.offsets_u8_ptr = ((char)iVar9 + -8) * '\x10' | (byte)uVar14 & 0xf;
                    local_4d90.offsets_u8_ptr = local_4d90.offsets_u8_ptr + 1;
                    *local_4d90.offsets_ptr = uVar3;
                    local_4d90.offsets_ptr = local_4d90.offsets_ptr + 1;
                  }
                  else {
                    newLZ_encoder_arrays_put_long_offset(&local_4d90,uVar3);
                    puVar24 = local_4d90.excess_u8_ptr;
                  }
                  cVar21 = -0x40;
                  uVar14 = uVar3;
                }
                *local_4d90.packets_ptr = cVar21 + cVar25;
                local_4d90.packets_ptr = local_4d90.packets_ptr + 1;
                puVar27 = puVar27 + (*piVar30 + piVar30[-1]);
                piVar30 = piVar30 + 4;
                lVar19 = local_4e08 + -1;
              } while (lVar19 != 0);
              local_4e08 = 0;
              uVar16 = local_4e00;
            }
            newLZ_encoder_arrays_finish_chunk<1>(&local_4d90,puVar27);
            pnVar28 = local_4e38;
            puVar24 = local_4e90;
            sVar29 = newLZ_encoder_arrays_output
                               (&local_4ebc,local_4e78,&local_4cc0,local_4e90,local_4e58,local_4e38,
                                local_4ea8,&local_4d90,param_8,local_4e40);
            uVar14 = local_4eb8;
            iVar31 = local_4e78[0];
          }
          fVar17 = local_4ebc;
          if (fVar33 <= local_4ebc) {
            *local_4e10 = fVar33;
            local_4e60 = local_4e48;
            sVar29 = local_4e48;
            goto LAB_14f343d4a;
          }
          *local_4e68 = iVar31;
          *local_4e10 = local_4ebc;
          memcpy(local_4e50,puVar24,sVar29);
          if ((((int)local_4e28 < 8) || (local_4eb4 != 0)) || (local_1ca0.chunktype == iVar31))
          break;
          pnVar28->carried_encoder_state_chunktype = -1;
          local_4eb4 = 1;
          iVar9 = -1;
          uVar20 = (ulonglong)(uint)param_5;
          fVar33 = fVar17;
          local_4e48 = sVar29;
        }
        newlz_scratchblock::extend(&pnVar28->carried_encoder_state,0x1804,local_4e18);
        memcpy((pnVar28->carried_encoder_state).m_ptr,&local_4cc0,0x1804);
        pnVar28->carried_encoder_state_chunktype = iVar31;
        local_4e60 = sVar29;
      }
      else {
        *local_4e10 = local_4ec0;
        sVar29 = local_4e48;
        local_4e60 = local_4e48;
      }
    }
  }
LAB_14f343d4a:
  if (fp_ThreadProfiler_Pop != (_func___cdecl_void_ulong64 *)0x0) {
    (*fp_ThreadProfiler_Pop)(uVar16);
  }
  return sVar29;
}

// newLZ_encoder_arrays_output @ 14f343da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

long64 __cdecl
oo2::newLZ_encoder_arrays_output
          (float *param_1,int *param_2,newlz_passinfo *param_3,uchar *param_4,uchar *param_5,
          newlz_vtable *param_6,newlz_encoder_scratch *param_7,newLZ_encoder_arrays *param_8,
          long64 param_9,OodleKrakenChunkDeadlines *param_10)

{
  uchar *puVar1;
  float fVar2;
  OodleLZ_CompressionLevel OVar3;
  _func___cdecl_float_long64_float_long64_float_long64_float_long64_float_long64_float_long64_float
  *p_Var4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  newlz_passinfo *pnVar13;
  uint *puVar14;
  longlong lVar15;
  long64 lVar16;
  longlong lVar17;
  uint *puVar18;
  longlong lVar19;
  int iVar20;
  longlong lVar21;
  OodleSpeedFit *pOVar22;
  longlong lVar23;
  int iVar24;
  uchar *puVar25;
  uchar *puVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auStackY_9c8 [32];
  float local_934;
  uint local_930;
  int local_92c;
  float local_928;
  float local_924;
  float local_920 [2];
  uchar *local_918;
  OodleSpeedFit *local_910;
  OodleKrakenChunkDeadlines *local_908;
  uchar *local_900;
  int local_8f8;
  rrArenaAllocator *local_8f0;
  int *local_8e8;
  long64 local_8e0;
  newlz_vtable *local_8d8;
  longlong local_8d0;
  uchar *local_8c8;
  newlz_passinfo *local_8c0;
  long64 local_8b8;
  longlong local_8b0;
  uchar *local_8a8;
  longlong local_8a0;
  float *local_898;
  uint local_888 [256];
  uint local_488 [256];
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_9c8;
  local_8f8 = param_8->chunk_len;
  local_8f0 = param_7->arena;
  local_930 = param_6->entropy_flags;
  fVar2 = param_6->lambda;
  OVar3 = param_6->level;
  local_910 = param_6->speedfit;
  puVar26 = param_8->chunk_ptr;
  *param_1 = 1.0737418e+09;
  local_8d0 = (longlong)param_8->packets_ptr - (longlong)param_8->packets_space;
  local_918 = param_5;
  local_8d8 = param_6;
  local_908 = param_10;
  if ((local_8d0 == 0) && (g_OodleLZ_BackwardsCompatible_MajorVersion < 6)) goto LAB_14f344296;
  local_8e8 = param_2;
  local_8c0 = param_3;
  local_8a8 = param_4;
  local_898 = param_1;
  if (param_3 != (newlz_passinfo *)0x0) {
    rrMemSetZero(param_3,0x1804);
  }
  lVar17 = 0;
  local_8a0 = lVar17;
  if (param_9 == 0) {
    local_8a0 = 8;
  }
  if (local_8a0 != 0) {
    do {
      puVar1 = puVar26 + lVar17;
      lVar17 = lVar17 + 1;
      *param_4 = *puVar1;
      param_4 = param_4 + 1;
    } while (lVar17 < local_8a0);
  }
  local_8b8 = 0;
  local_8e0 = 0;
  if ((local_8d8->bitstream_flags & 1) != 0) {
    local_8b8 = newLZ_put_excesses_u32_separate
                          (param_4,local_918,param_8->excess_u32_space,
                           (int)((longlong)param_8->excess_u32_ptr -
                                 (longlong)param_8->excess_u32_space >> 2));
    if ((local_8b8 < 0) ||
       (local_918 = local_918 + -local_8b8, (longlong)local_918 - (longlong)param_4 < 2))
    goto LAB_14f344296;
    if (local_8b8 < 0x20) {
      local_8e0 = 1;
      *param_4 = (byte)local_8b8 + 0x80;
      param_4 = param_4 + 1;
    }
    else {
      local_8e0 = 2;
      *param_4 = ((byte)local_8b8 & 0x1f) + 0xa0;
      param_4[1] = (uchar)(local_8b8 + -0x20 >> 5);
      param_4 = param_4 + 2;
    }
  }
  puVar25 = (uchar *)0xffffffffffffffff;
  puVar26 = param_8->literals_ptr_sub;
  lVar17 = (longlong)param_8->literals_ptr_raw - (longlong)param_8->literals_space_raw;
  puVar1 = param_8->literals_space_sub;
  local_934 = 1.0737418e+09;
  fVar29 = (float)lVar17 + __real_40400000;
  local_900 = puVar1;
  local_8c8 = puVar26;
  local_8b0 = lVar17;
  if ((lVar17 < 0x20) || ((int)OVar3 < -3)) {
    *local_8e8 = 1;
    puVar25 = (uchar *)newLZ_put_array_uncompressed
                                 (param_4,local_918,param_8->literals_space_raw,lVar17);
    local_934 = fVar29;
    pOVar22 = local_910;
joined_r0x00014f3442f2:
    local_900 = puVar25;
    if ((longlong)puVar25 < 0) goto LAB_14f344296;
  }
  else {
    CountHistoArrayU8(param_8->literals_space_raw,lVar17,local_488,0x100,false);
    if (puVar26 != puVar1) {
      CountHistoArrayU8(param_8->literals_space_sub,lVar17,local_888,0x100,false);
    }
    if (param_3 == (newlz_passinfo *)0x0) {
LAB_14f3440e2:
      if (local_8c8 != local_900) goto LAB_14f3440fc;
LAB_14f34420b:
      local_934 = 1.0737418e+09;
LAB_14f344212:
      pOVar22 = local_910;
      local_900 = (uchar *)newLZ_put_array_histo
                                     (param_4,local_918,param_8->literals_space_raw,lVar17,local_488
                                      ,local_930,fVar2,local_910,&local_934,local_908->literal,
                                      local_8f0,OVar3);
      if ((longlong)local_900 < 1) goto joined_r0x00014f3442f2;
      *local_8e8 = 1;
    }
    else {
      lVar19 = 8;
      pnVar13 = param_3;
      puVar14 = local_488;
      do {
        uVar7 = *(undefined8 *)(puVar14 + 2);
        uVar8 = *(undefined8 *)(puVar14 + 4);
        uVar9 = *(undefined8 *)(puVar14 + 6);
        *(undefined8 *)pnVar13->literal_histo_raw = *(undefined8 *)puVar14;
        *(undefined8 *)(pnVar13->literal_histo_raw + 2) = uVar7;
        uVar7 = *(undefined8 *)(puVar14 + 8);
        uVar10 = *(undefined8 *)(puVar14 + 10);
        *(undefined8 *)(pnVar13->literal_histo_raw + 4) = uVar8;
        *(undefined8 *)(pnVar13->literal_histo_raw + 6) = uVar9;
        uVar8 = *(undefined8 *)(puVar14 + 0xc);
        uVar9 = *(undefined8 *)(puVar14 + 0xe);
        *(undefined8 *)(pnVar13->literal_histo_raw + 8) = uVar7;
        *(undefined8 *)(pnVar13->literal_histo_raw + 10) = uVar10;
        uVar7 = *(undefined8 *)(puVar14 + 0x10);
        uVar10 = *(undefined8 *)(puVar14 + 0x12);
        *(undefined8 *)(pnVar13->literal_histo_raw + 0xc) = uVar8;
        *(undefined8 *)(pnVar13->literal_histo_raw + 0xe) = uVar9;
        uVar8 = *(undefined8 *)(puVar14 + 0x14);
        uVar9 = *(undefined8 *)(puVar14 + 0x16);
        *(undefined8 *)(pnVar13->literal_histo_raw + 0x10) = uVar7;
        *(undefined8 *)(pnVar13->literal_histo_raw + 0x12) = uVar10;
        uVar7 = *(undefined8 *)(puVar14 + 0x18);
        uVar10 = *(undefined8 *)(puVar14 + 0x1a);
        *(undefined8 *)(pnVar13->literal_histo_raw + 0x14) = uVar8;
        *(undefined8 *)(pnVar13->literal_histo_raw + 0x16) = uVar9;
        uVar8 = *(undefined8 *)(puVar14 + 0x1c);
        uVar9 = *(undefined8 *)(puVar14 + 0x1e);
        *(undefined8 *)(pnVar13->literal_histo_raw + 0x18) = uVar7;
        *(undefined8 *)(pnVar13->literal_histo_raw + 0x1a) = uVar10;
        *(undefined8 *)(pnVar13->literal_histo_raw + 0x1c) = uVar8;
        *(undefined8 *)(pnVar13->literal_histo_raw + 0x1e) = uVar9;
        lVar19 = lVar19 + -1;
        pnVar13 = (newlz_passinfo *)(pnVar13->literal_histo_raw + 0x20);
        puVar14 = puVar14 + 0x20;
      } while (lVar19 != 0);
      if (puVar26 == puVar1) goto LAB_14f3440e2;
      lVar19 = 8;
      puVar14 = param_3->literal_histo_sub;
      puVar18 = local_888;
      do {
        uVar7 = *(undefined8 *)(puVar18 + 2);
        uVar8 = *(undefined8 *)(puVar18 + 4);
        uVar9 = *(undefined8 *)(puVar18 + 6);
        *(undefined8 *)puVar14 = *(undefined8 *)puVar18;
        *(undefined8 *)(puVar14 + 2) = uVar7;
        uVar7 = *(undefined8 *)(puVar18 + 8);
        uVar10 = *(undefined8 *)(puVar18 + 10);
        *(undefined8 *)(puVar14 + 4) = uVar8;
        *(undefined8 *)(puVar14 + 6) = uVar9;
        uVar8 = *(undefined8 *)(puVar18 + 0xc);
        uVar9 = *(undefined8 *)(puVar18 + 0xe);
        *(undefined8 *)(puVar14 + 8) = uVar7;
        *(undefined8 *)(puVar14 + 10) = uVar10;
        uVar7 = *(undefined8 *)(puVar18 + 0x10);
        uVar10 = *(undefined8 *)(puVar18 + 0x12);
        *(undefined8 *)(puVar14 + 0xc) = uVar8;
        *(undefined8 *)(puVar14 + 0xe) = uVar9;
        uVar8 = *(undefined8 *)(puVar18 + 0x14);
        uVar9 = *(undefined8 *)(puVar18 + 0x16);
        *(undefined8 *)(puVar14 + 0x10) = uVar7;
        *(undefined8 *)(puVar14 + 0x12) = uVar10;
        uVar7 = *(undefined8 *)(puVar18 + 0x18);
        uVar10 = *(undefined8 *)(puVar18 + 0x1a);
        *(undefined8 *)(puVar14 + 0x14) = uVar8;
        *(undefined8 *)(puVar14 + 0x16) = uVar9;
        uVar8 = *(undefined8 *)(puVar18 + 0x1c);
        uVar9 = *(undefined8 *)(puVar18 + 0x1e);
        *(undefined8 *)(puVar14 + 0x18) = uVar7;
        *(undefined8 *)(puVar14 + 0x1a) = uVar10;
        *(undefined8 *)(puVar14 + 0x1c) = uVar8;
        *(undefined8 *)(puVar14 + 0x1e) = uVar9;
        lVar19 = lVar19 + -1;
        puVar14 = puVar14 + 0x20;
        puVar18 = puVar18 + 0x20;
      } while (lVar19 != 0);
LAB_14f3440fc:
      fVar27 = (*local_910->parse_Kraken_subliterals)(lVar17);
      bVar5 = 5 < (int)OVar3;
      if ((int)OVar3 < 6) {
        uVar11 = newlz_array_estimate_complen_bits(local_488,0x100,(uint)lVar17);
        uVar12 = newlz_array_estimate_complen_bits(local_888,0x100,(uint)lVar17);
        bVar5 = (float)(int)uVar12 * __real_3e000000 + fVar27 * fVar2 <
                (float)(int)uVar11 * __real_3e000000;
      }
      if (!bVar5) goto LAB_14f34420b;
      *local_8e8 = 0;
      puVar25 = (uchar *)newLZ_put_array_histo
                                   (param_4,local_918,param_8->literals_space_sub,lVar17,local_888,
                                    local_930,fVar2,local_910,&local_934,local_908->literal,
                                    local_8f0,OVar3);
      local_934 = fVar27 * fVar2 + local_934;
      local_900 = puVar25;
      if ((((longlong)puVar25 < 0) || (lVar17 <= (longlong)puVar25)) || (fVar29 < local_934))
      goto LAB_14f34420b;
      pOVar22 = local_910;
      if (5 < (int)OVar3) goto LAB_14f344212;
    }
  }
  puVar1 = local_918;
  puVar26 = param_4 + (longlong)local_900;
  puVar14 = param_3->packet_histo;
  local_920[0] = 1.0737418e+09;
  if (param_3 == (newlz_passinfo *)0x0) {
    puVar14 = (uint *)0x0;
  }
  local_8e8 = (int *)newLZ_put_array(puVar26,local_918,param_8->packets_space,local_8d0,local_930,
                                     fVar2,pOVar22,local_920,local_908->packet,local_8f0,OVar3,
                                     puVar14);
  if (-1 < (longlong)local_8e8) {
    puVar26 = puVar26 + (longlong)local_8e8;
    iVar24 = *(int *)&param_8->offsets_u8_ptr - *(int *)&param_8->offsets_u8_space;
    local_92c = 0;
    local_924 = 1.0737418e+09;
    puVar18 = param_3->offset_histo2;
    puVar14 = param_3->offset_histo1;
    if (param_3 == (newlz_passinfo *)0x0) {
      puVar18 = (uint *)0x0;
      puVar14 = (uint *)0x0;
    }
    local_8c8 = (uchar *)newLZ_put_offset_44_or_alt_arrays
                                   (puVar26,puVar1,param_8->offsets_u8_space,param_8->offsets_space,
                                    iVar24,local_930,fVar2,pOVar22,&local_924,local_908->offsets,
                                    eNewLZ_MinOffset_8,local_8d8->bitstream_flags & 4,&local_92c,
                                    local_8f0,OVar3,puVar14,puVar18);
    if ((longlong)local_8c8 < 0) {
      return -1;
    }
    puVar26 = puVar26 + (longlong)local_8c8;
    if (param_3 != (newlz_passinfo *)0x0) {
      param_3->offset_alt_modulo = local_92c;
    }
    iVar20 = *(int *)&param_8->excess_u8_ptr - *(int *)&param_8->excess_u8_space;
    puVar14 = local_8c0->excess_histo;
    lVar17 = (longlong)iVar20;
    local_928 = 1.0737418e+09;
    if (local_8c0 == (newlz_passinfo *)0x0) {
      puVar14 = (uint *)0x0;
    }
    local_8c0 = (newlz_passinfo *)
                newLZ_put_array(puVar26,puVar1,param_8->excess_u8_space,lVar17,local_930,fVar2,
                                pOVar22,&local_928,local_908->excesses_u8,local_8f0,OVar3,puVar14);
    lVar19 = (longlong)local_8f8;
    if ((longlong)local_8c0 < 0) {
      return lVar19;
    }
    puVar26 = puVar26 + (longlong)local_8c0;
    iVar6 = iVar20;
    if (iVar20 < iVar24) {
      iVar6 = iVar24;
    }
    lVar15 = (longlong)(iVar24 * 6) + iVar20 * 5 + local_8b0 + (longlong)iVar6 + local_8d0;
    lVar21 = local_8b0 + local_8d0 * 2;
    lVar23 = local_8b0 * 2;
    if (local_8b0 * 2 < lVar15) {
      lVar23 = lVar15;
    }
    lVar16 = OodleLZ_Compressor_ScratchMemSize(local_8d8->compressor,lVar19);
    if (lVar21 < lVar23) {
      lVar21 = lVar23;
    }
    if (lVar16 < lVar21 + 0xd020) {
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
        (*g_fp_OodleCore_Plugin_Printf)
                  (0,"v:\\devel\\projects\\oodle2\\core\\newlz.cpp",0x63c,
                   "OODLE ERROR : newLZ chunk needs too much scratch for decoder!\n");
      }
      ooLogErrorPost();
      return lVar19;
    }
    iVar20 = (int)((longlong)param_8->excess_u32_ptr - (longlong)param_8->excess_u32_space >> 2);
    lVar16 = newLZ_put_offsets_excesses
                       (puVar26,local_918,param_8->offsets_u8_space,param_8->offsets_space,iVar24,
                        local_92c,param_8->excess_u32_space,iVar20,local_8e0,local_8b8);
    pOVar22 = local_910;
    if (lVar16 < 0) {
      return lVar19;
    }
    puVar26 = puVar26 + (lVar16 - (longlong)local_8a8);
    if (lVar19 <= (longlong)puVar26) {
      return lVar19;
    }
    fVar29 = (*local_910->parse_Kraken)(lVar19,local_8d0,lVar17);
    if (local_908->parse <= fVar29 && fVar29 != local_908->parse) {
      return lVar19;
    }
    lVar19 = local_8e0 + lVar16 + local_8a0;
    fVar28 = local_920[0] + local_934 + local_924 + local_928;
    fVar27 = (*pOVar22->get_excesses)(lVar17,(longlong)iVar20);
    p_Var4 = pOVar22->recompute_Kraken_J;
    fVar27 = fVar28 + fVar29 * fVar2 + (float)lVar19 + fVar27 * fVar2;
    if (p_Var4 != (_func___cdecl_float_long64_float_long64_float_long64_float_long64_float_long64_float_long64_float
                   *)0x0) {
      fVar27 = (*p_Var4)((long64)puVar26,fVar2,(long64)local_900,local_934,(long64)local_8e8,
                         local_920[0],(long64)local_8c8,local_924,(long64)local_8c0,local_928,lVar19
                         ,fVar29);
    }
    *local_898 = fVar27;
    return (long64)puVar26;
  }
LAB_14f344296:
  return (longlong)local_8f8;
}

// newLZ_encoder_arrays_point_to_scratch @ 14f344700

void __cdecl
oo2::newLZ_encoder_arrays_point_to_scratch
          (newLZ_encoder_arrays *param_1,newlz_encoder_scratch *param_2,int param_3,uchar *param_4,
          uint param_5)

{
  int iVar1;
  rrArenaAllocator *prVar2;
  int iVar3;
  uchar *puVar4;
  uint *puVar5;
  int iVar6;
  
  prVar2 = param_2->arena;
  param_1->chunk_len = param_3;
  param_1->chunk_ptr = param_4;
  iVar1 = param_3 / 2 + 8;
  iVar3 = param_3 / 3;
  iVar6 = ((int)((param_3 >> 0x1f & 0xffU) + param_3) >> 8) * 4;
  newlz_scratchblock::extend
            (&param_2->newlz_arrays_space,
             (longlong)(iVar3 * 5 + (param_3 + 0x88) * 2 + iVar6 + param_3 / 5 + iVar1),prVar2);
  puVar4 = (param_2->newlz_arrays_space).m_ptr;
  param_1->literals_space_raw = puVar4;
  param_1->literals_ptr_raw = puVar4;
  puVar4 = puVar4 + (param_3 + 8);
  param_1->literals_space_sub = puVar4;
  param_1->literals_ptr_sub = puVar4;
  puVar4 = puVar4 + (param_3 + 8);
  param_1->packets_space = puVar4;
  param_1->packets_ptr = puVar4;
  puVar4 = puVar4 + iVar1;
  param_1->lastoffset = 8;
  param_1->offsets_u8_space = puVar4;
  param_1->offsets_u8_ptr = puVar4;
  puVar5 = (uint *)((ulonglong)(puVar4 + (longlong)iVar3 + 3) & 0xfffffffffffffffc);
  param_1->offsets_space = puVar5;
  param_1->offsets_ptr = puVar5;
  puVar4 = (uchar *)((longlong)puVar5 + (longlong)(iVar3 * 4));
  param_1->excess_u8_space = puVar4;
  param_1->excess_u8_ptr = puVar4;
  puVar5 = (uint *)((ulonglong)(puVar4 + (longlong)(param_3 / 5) + 3) & 0xfffffffffffffffc);
  param_1->excess_u32_space = puVar5;
  param_1->excess_ptr_end = (uchar *)((longlong)iVar6 + (longlong)puVar5);
  param_1->bitstream_flags = param_5;
  param_1->excess_u32_ptr = puVar5;
  return;
}

// newLZ_encoder_arrays_put_excess @ 14f344860

void __cdecl oo2::newLZ_encoder_arrays_put_excess(newLZ_encoder_arrays *param_1,int param_2)

{
  if (param_2 < 0xff) {
    *param_1->excess_u8_ptr = (uchar)param_2;
    param_1->excess_u8_ptr = param_1->excess_u8_ptr + 1;
    return;
  }
  *param_1->excess_u8_ptr = 0xff;
  param_1->excess_u8_ptr = param_1->excess_u8_ptr + 1;
  *param_1->excess_u32_ptr = param_2 - 0xff;
  param_1->excess_u32_ptr = param_1->excess_u32_ptr + 1;
  return;
}

// newLZ_encoder_arrays_put_long_offset @ 14f3448a0

void __cdecl oo2::newLZ_encoder_arrays_put_long_offset(newLZ_encoder_arrays *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0x1f;
  if (param_2 - 0x7eff00U != 0) {
    for (; param_2 - 0x7eff00U >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  *param_1->offsets_u8_ptr = (byte)iVar1 | 0xf0;
  param_1->offsets_u8_ptr = param_1->offsets_u8_ptr + 1;
  *param_1->offsets_ptr = param_2;
  param_1->offsets_ptr = param_1->offsets_ptr + 1;
  return;
}

// newLZ_get_array @ 14f3448e0

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
    goto code_r0x00014f344a00;
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
LAB_14f344a54:
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
LAB_14f344978:
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
      if (bVar3 != 0) goto LAB_14f344a54;
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
      goto LAB_14f344978;
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
    goto code_r0x00014f344a00;
    pcVar8 = "OODLE ERROR : corruption : header == 0\n";
    iVar7 = 0x78;
  }
  (*g_fp_OodleCore_Plugin_Printf)
            (0,"v:\\devel\\projects\\oodle2\\core\\newlz_arrays.inl",iVar7,pcVar8);
code_r0x00014f344a00:
  ooLogErrorPost();
  return -1;
}

// newLZ_get_match_heuristic @ 14f344ac0

match __cdecl
oo2::newLZ_get_match_heuristic
          (newLZ_MatchParseRecord *param_1,newLZ_LOs *param_2,uchar *param_3,uchar *param_4,
          int param_5,int param_6,uchar *param_7,uint param_8,OodleLZ_CompressOptions *param_9)

{
  uint uVar1;
  ulonglong uVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  match mVar8;
  uint uVar9;
  ulonglong *puVar10;
  char *pcVar11;
  longlong lVar12;
  char *pcVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong *puVar18;
  uint *puVar19;
  ulonglong uVar20;
  uint local_res10;
  int local_res18;
  
  uVar9 = *(uint *)param_3;
  uVar5 = *(uint *)(param_3 + -(ulonglong)(uint)(param_2->lasts).contents[4]);
  if ((short)uVar9 == (short)uVar5) {
    uVar5 = uVar5 ^ uVar9;
    if (uVar5 == 0) {
      puVar18 = (ulonglong *)(param_3 + 4);
      puVar19 = (uint *)((longlong)(param_3 + -(ulonglong)(uint)(param_2->lasts).contents[4]) + 4);
      puVar10 = puVar18;
      if (puVar18 <= param_4 + -8) {
LAB_14f344b25:
        uVar17 = *(ulonglong *)(((longlong)puVar19 - (longlong)puVar18) + (longlong)puVar10) ^
                 *puVar10;
        if (uVar17 == 0) goto code_r0x00014f344b2e;
        uVar6 = 0;
        if (uVar17 != 0) {
          for (; (uVar17 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
          }
        }
        lVar12 = ((uVar6 >> 3) - (longlong)puVar18) + (longlong)puVar10;
        goto LAB_14f344b6b;
      }
LAB_14f344b37:
      lVar12 = (longlong)puVar10 - (longlong)puVar18;
      if (puVar10 < param_4) {
        pcVar13 = (char *)(lVar12 + (longlong)puVar19);
        do {
          if (pcVar13[(longlong)(param_3 + (4 - (longlong)puVar19))] != *pcVar13) break;
          pcVar13 = pcVar13 + 1;
          lVar12 = lVar12 + 1;
        } while (pcVar13 + ((longlong)puVar18 - (longlong)puVar19) < param_4);
      }
LAB_14f344b6b:
      local_res10 = (int)lVar12 + 4;
      uVar9 = *(uint *)param_3;
    }
    else {
      local_res10 = 3 - ((uVar5 & 0xffffff) != 0);
    }
    bVar3 = 1;
  }
  else {
    bVar3 = 0;
  }
  uVar17 = (ulonglong)local_res10;
  if (bVar3 == 0) {
    uVar17 = 0;
  }
  local_res18 = bVar3 - 1;
  local_res10 = (uint)uVar17;
  uVar5 = *(uint *)(param_3 + -(ulonglong)(uint)(param_2->lasts).contents[5]);
  if ((short)uVar9 == (short)uVar5) {
    uVar5 = uVar5 ^ uVar9;
    if (uVar5 == 0) {
      puVar10 = (ulonglong *)(param_3 + 4);
      puVar19 = (uint *)((longlong)(param_3 + -(ulonglong)(uint)(param_2->lasts).contents[5]) + 4);
      puVar18 = puVar10;
      if (puVar10 <= param_4 + -8) {
LAB_14f344bf0:
        uVar6 = *(ulonglong *)(((longlong)puVar19 - (longlong)puVar10) + (longlong)puVar18) ^
                *puVar18;
        if (uVar6 == 0) goto code_r0x00014f344bfd;
        uVar20 = 0;
        if (uVar6 != 0) {
          for (; (uVar6 >> uVar20 & 1) == 0; uVar20 = uVar20 + 1) {
          }
        }
        lVar12 = ((uVar20 >> 3) - (longlong)puVar10) + (longlong)puVar18;
        goto LAB_14f344c39;
      }
LAB_14f344c06:
      lVar12 = (longlong)puVar18 - (longlong)puVar10;
      if (puVar18 < param_4) {
        pcVar13 = (char *)(lVar12 + (longlong)puVar19);
        do {
          if (pcVar13[(longlong)(param_3 + (4 - (longlong)puVar19))] != *pcVar13) break;
          pcVar13 = pcVar13 + 1;
          lVar12 = lVar12 + 1;
        } while (pcVar13 + ((longlong)puVar10 - (longlong)puVar19) < param_4);
      }
LAB_14f344c39:
      uVar5 = (int)lVar12 + 4;
      uVar9 = *(uint *)param_3;
    }
    else {
      uVar5 = 3 - ((uVar5 & 0xffffff) != 0);
    }
    if ((int)local_res10 < (int)uVar5) {
      local_res18 = 1;
      uVar17 = (ulonglong)uVar5;
      local_res10 = uVar5;
    }
  }
  uVar5 = *(uint *)(param_3 + -(ulonglong)(uint)(param_2->lasts).contents[6]);
  if ((short)uVar9 == (short)uVar5) {
    uVar5 = uVar5 ^ uVar9;
    if (uVar5 == 0) {
      puVar10 = (ulonglong *)(param_3 + 4);
      puVar19 = (uint *)((longlong)(param_3 + -(ulonglong)(uint)(param_2->lasts).contents[6]) + 4);
      puVar18 = puVar10;
      if (puVar10 <= param_4 + -8) {
LAB_14f344cb0:
        uVar6 = *(ulonglong *)(((longlong)puVar19 - (longlong)puVar10) + (longlong)puVar18) ^
                *puVar18;
        if (uVar6 == 0) goto code_r0x00014f344cb9;
        uVar20 = 0;
        if (uVar6 != 0) {
          for (; (uVar6 >> uVar20 & 1) == 0; uVar20 = uVar20 + 1) {
          }
        }
        lVar12 = ((uVar20 >> 3) - (longlong)puVar10) + (longlong)puVar18;
        goto LAB_14f344cf9;
      }
LAB_14f344cc5:
      lVar12 = (longlong)puVar18 - (longlong)puVar10;
      if (puVar18 < param_4) {
        pcVar13 = (char *)(lVar12 + (longlong)puVar19);
        do {
          if (pcVar13[(longlong)(param_3 + (4 - (longlong)puVar19))] != *pcVar13) break;
          pcVar13 = pcVar13 + 1;
          lVar12 = lVar12 + 1;
        } while (pcVar13 + ((longlong)puVar10 - (longlong)puVar19) < param_4);
      }
LAB_14f344cf9:
      uVar5 = (int)lVar12 + 4;
      uVar9 = *(uint *)param_3;
    }
    else {
      uVar5 = 3 - ((uVar5 & 0xffffff) != 0);
    }
    if ((int)uVar17 < (int)uVar5) {
      local_res18 = 2;
      uVar17 = (ulonglong)uVar5;
      local_res10 = uVar5;
    }
  }
  uVar5 = (uint)uVar17;
  if (3 < (int)uVar5) {
    return (match)((ulonglong)(uint)-local_res18 << 0x20 | uVar17);
  }
  uVar17 = 0;
  uVar6 = uVar17;
  uVar20 = uVar17;
  if (0x37 < param_6) {
    param_5 = param_5 + 1;
    local_res10 = 0;
    if (2 < (int)uVar5) {
      local_res10 = uVar5;
    }
  }
  do {
    uVar16 = (uint)uVar6;
    uVar5 = param_1->pairs[uVar20].length;
    if (((int)uVar5 < param_5) ||
       (((longlong)param_4 - (longlong)param_3 < (longlong)(int)uVar5 &&
        (uVar5 = (int)param_4 - (int)param_3, (int)uVar5 < param_5)))) break;
    uVar1 = param_1->pairs[uVar20].offset;
    uVar15 = (ulonglong)uVar1;
    if (uVar1 < param_8) {
      if (uVar1 < 8) {
        uVar15 = (ulonglong)rounded_up[uVar15];
        if ((longlong)uVar15 <= (longlong)param_3 - (longlong)param_7) {
          uVar9 = uVar9 ^ *(uint *)(param_3 + -uVar15);
          if (uVar9 == 0) {
            puVar10 = (ulonglong *)(param_3 + 4);
            puVar19 = (uint *)((longlong)(param_3 + -uVar15) + 4);
            puVar18 = puVar10;
            if (puVar10 <= (ulonglong *)((longlong)param_4 + -8)) {
LAB_14f344e45:
              uVar7 = *(ulonglong *)(((longlong)puVar19 - (longlong)puVar10) + (longlong)puVar18) ^
                      *puVar18;
              if (uVar7 == 0) goto code_r0x00014f344e4e;
              uVar2 = 0;
              if (uVar7 != 0) {
                for (; (uVar7 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
                }
              }
              pcVar13 = (char *)(((uVar2 >> 3) - (longlong)puVar10) + (longlong)puVar18);
              goto LAB_14f344e8b;
            }
LAB_14f344e57:
            pcVar13 = (char *)((longlong)puVar18 - (longlong)puVar10);
            if (puVar18 < param_4) {
              pcVar11 = pcVar13 + (longlong)puVar19;
              do {
                if (pcVar11[(longlong)(param_3 + (4 - (longlong)puVar19))] != *pcVar11) break;
                pcVar11 = pcVar11 + 1;
                pcVar13 = pcVar13 + 1;
              } while (pcVar11 + ((longlong)puVar10 - (longlong)puVar19) < param_4);
            }
LAB_14f344e8b:
            uVar5 = (int)pcVar13 + 4;
          }
          else {
            uVar5 = 3;
            if ((uVar9 & 0xffffff) != 0) {
              uVar5 = 0;
            }
          }
          if (param_5 <= (int)uVar5) goto LAB_14f344e94;
        }
      }
      else {
LAB_14f344e94:
        iVar14 = (int)uVar15;
        bVar4 = newLZ_IsAllowedNormalMatch(uVar5,iVar14,param_9);
        if ((bVar4) && ((int)uVar16 <= (int)uVar5)) {
          if (uVar5 == uVar16) {
            bVar4 = iVar14 < (int)uVar17;
LAB_14f344eda:
            if (!bVar4) goto LAB_14f344ee3;
          }
          else if ((int)uVar5 <= (int)(uVar16 + 1)) {
            bVar4 = iVar14 >> 7 <= (int)uVar17;
            goto LAB_14f344eda;
          }
          uVar6 = (ulonglong)uVar5;
          uVar17 = uVar15;
        }
      }
    }
LAB_14f344ee3:
    uVar16 = (uint)uVar6;
    uVar9 = *(uint *)param_3;
    uVar20 = uVar20 + 1;
  } while ((longlong)uVar20 < 4);
  if (((int)local_res10 < 2) ||
     ((((int)(local_res10 + 1) < (int)uVar16 &&
       (((int)(local_res10 + 2) < (int)uVar16 || ((int)uVar17 < 0x400)))) &&
      (((int)(local_res10 + 3) < (int)uVar16 || ((int)uVar17 < 0x10000)))))) {
    mVar8 = (match)(uVar17 << 0x20 | (ulonglong)uVar16);
  }
  else {
    mVar8.off = -local_res18;
    mVar8.ml = local_res10;
  }
  return mVar8;
code_r0x00014f344b2e:
  puVar10 = puVar10 + 1;
  if (param_4 + -8 < puVar10) goto LAB_14f344b37;
  goto LAB_14f344b25;
code_r0x00014f344bfd:
  puVar18 = puVar18 + 1;
  if (param_4 + -8 < puVar18) goto LAB_14f344c06;
  goto LAB_14f344bf0;
code_r0x00014f344cb9:
  puVar18 = puVar18 + 1;
  if (param_4 + -8 < puVar18) goto LAB_14f344cc5;
  goto LAB_14f344cb0;
code_r0x00014f344e4e:
  puVar18 = puVar18 + 1;
  if ((ulonglong *)((longlong)param_4 + -8) < puVar18) goto LAB_14f344e57;
  goto LAB_14f344e45;
}

// newLZ_offset44_pack_high_u8 @ 14f344f70

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

// newLZ_offset44_pack_low_u8 @ 14f344f90

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

// newLZ_offset44_pack_u8 @ 14f344fb0

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

// newLZ_offset44_round_up_tiny @ 14f344fe0

uint __cdecl oo2::newLZ_offset44_round_up_tiny(uint param_1)

{
  return rounded_up[param_1];
}

// newLZ_offset44_unpack_high_numrawbits @ 14f345000

uint __cdecl oo2::newLZ_offset44_unpack_high_numrawbits(uchar param_1)

{
  return param_1 - 0xe0;
}

// newLZ_offset44_unpack_low_numrawbits @ 14f345010

uint __cdecl oo2::newLZ_offset44_unpack_low_numrawbits(uchar param_1)

{
  return (param_1 >> 4) + 4;
}

// newLZ_offset44_unpack_numrawbits @ 14f345020

uint __cdecl oo2::newLZ_offset44_unpack_numrawbits(uchar param_1)

{
  if (param_1 < 0xf0) {
    return (param_1 >> 4) + 4;
  }
  return param_1 - 0xe0;
}

// newLZ_put_parse @ 14f345040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

long64 __cdecl
oo2::newLZ_put_parse
          (newlz_encoder_scratch *param_1,float *param_2,int *param_3,uchar *param_4,int param_5,
          uchar *param_6,uchar *param_7,long64 param_8,newlz_vtable *param_9,
          vector_a<oo2::newlz_encoder_parse> *param_10,newlz_passinfo *param_11,
          OodleKrakenChunkDeadlines *param_12)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uchar *puVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  long64 lVar9;
  longlong lVar10;
  char cVar11;
  longlong lVar12;
  uchar *puVar13;
  char cVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uchar *puVar19;
  undefined1 auStackY_1e8 [32];
  newLZ_encoder_arrays local_120;
  uint auStack_78 [6];
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  *param_2 = 1.0737418e+09;
  lVar15 = *(longlong *)&param_10->field_0x10;
  if (lVar15 == 0) {
    lVar9 = (long64)param_5;
  }
  else {
    newLZ_encoder_arrays_point_to_scratch
              (&local_120,param_1,param_5,param_4,param_9->bitstream_flags);
    lVar12 = 0;
    uVar16 = 8;
    auStack_78[2] = 8;
    auStack_78[3] = 8;
    if (param_8 == 0) {
      lVar12 = 8;
    }
    auStack_78[4] = 8;
    puVar19 = param_4 + lVar12;
    if (0 < lVar15) {
      lVar12 = 0;
      puVar13 = local_120.excess_u8_ptr;
      uVar17 = 8;
      do {
        cVar14 = '\x03';
        lVar6 = *(longlong *)param_10;
        iVar5 = *(int *)(lVar12 + 8 + lVar6);
        uVar18 = *(uint *)(lVar12 + 0xc + lVar6);
        iVar8 = *(int *)(lVar12 + 4 + lVar6);
        if (iVar8 == 0) {
          cVar14 = '\0';
        }
        else if (iVar8 < 9) {
          *puVar13 = (uchar)(iVar8 + -3);
          iVar7 = iVar8;
          local_120.excess_u8_ptr = puVar13;
          if (-1 < iVar8 + -3) {
            iVar7 = 3;
            local_120.excess_u8_ptr = puVar13 + 1;
          }
          cVar14 = (char)iVar7;
          *(undefined8 *)local_120.literals_ptr_raw = *(undefined8 *)puVar19;
          uVar2 = *(undefined8 *)puVar19;
          uVar3 = *(undefined8 *)(puVar19 + -(longlong)local_120.lastoffset);
          *(ulonglong *)local_120.literals_ptr_sub =
               CONCAT17((char)((ulonglong)uVar2 >> 0x38) - (char)((ulonglong)uVar3 >> 0x38),
                        CONCAT16((char)((ulonglong)uVar2 >> 0x30) - (char)((ulonglong)uVar3 >> 0x30)
                                 ,CONCAT15((char)((ulonglong)uVar2 >> 0x28) -
                                           (char)((ulonglong)uVar3 >> 0x28),
                                           CONCAT14((char)((ulonglong)uVar2 >> 0x20) -
                                                    (char)((ulonglong)uVar3 >> 0x20),
                                                    CONCAT13((char)((ulonglong)uVar2 >> 0x18) -
                                                             (char)((ulonglong)uVar3 >> 0x18),
                                                             CONCAT12((char)((ulonglong)uVar2 >>
                                                                            0x10) -
                                                                      (char)((ulonglong)uVar3 >>
                                                                            0x10),
                                                                      CONCAT11((char)((ulonglong)
                                                                                      uVar2 >> 8) -
                                                                               (char)((ulonglong)
                                                                                      uVar3 >> 8),
                                                                               (char)uVar2 -
                                                                               (char)uVar3)))))));
          puVar13 = local_120.excess_u8_ptr;
          local_120.literals_ptr_raw = local_120.literals_ptr_raw + iVar8;
          local_120.literals_ptr_sub = local_120.literals_ptr_sub + iVar8;
        }
        else {
          newLZ_encoder_arrays_put_long_lrl<1>(&local_120,puVar19,iVar8);
          puVar13 = local_120.excess_u8_ptr;
        }
        iVar8 = iVar5 + -2;
        if (0xe < iVar8) {
          iVar8 = 0xf;
          if (iVar5 + -0x11 < 0xff) {
            *puVar13 = (uchar)(iVar5 + -0x11);
          }
          else {
            *puVar13 = 0xff;
            *local_120.excess_u32_ptr = iVar5 - 0x110;
            local_120.excess_u32_ptr = local_120.excess_u32_ptr + 1;
          }
          puVar13 = puVar13 + 1;
          local_120.excess_u8_ptr = puVar13;
        }
        cVar14 = cVar14 + (char)iVar8 * '\x04';
        if ((int)uVar18 < 1) {
          lVar10 = (longlong)(int)-uVar18;
          cVar11 = (char)uVar18 * -0x40;
          uVar18 = auStack_78[lVar10 + 2];
          auStack_78[lVar10 + 2] = auStack_78[lVar10 + 1];
          auStack_78[lVar10 + 1] = auStack_78[lVar10];
          auStack_78[2] = uVar18;
          uVar16 = auStack_78[3];
          local_120.lastoffset = uVar18;
        }
        else {
          auStack_78[2] = uVar18;
          auStack_78[3] = uVar17;
          auStack_78[4] = uVar16;
          local_120.lastoffset = uVar18;
          if ((int)uVar18 < 0x7fff08) {
            uVar16 = uVar18 + 0xf8;
            iVar5 = 0x1f;
            if (uVar16 != 0) {
              for (; uVar16 >> iVar5 == 0; iVar5 = iVar5 + -1) {
              }
            }
            *local_120.offsets_u8_ptr = ((char)iVar5 + -8) * '\x10' | (byte)uVar16 & 0xf;
            *local_120.offsets_ptr = uVar18;
            local_120.offsets_u8_ptr = local_120.offsets_u8_ptr + 1;
            local_120.offsets_ptr = local_120.offsets_ptr + 1;
          }
          else {
            newLZ_encoder_arrays_put_long_offset(&local_120,uVar18);
            puVar13 = local_120.excess_u8_ptr;
          }
          cVar11 = -0x40;
          uVar16 = uVar17;
        }
        puVar4 = local_120.packets_ptr + 1;
        *local_120.packets_ptr = cVar14 + cVar11;
        lVar10 = lVar12 + 8;
        lVar1 = lVar12 + 4;
        lVar12 = lVar12 + 0x10;
        puVar19 = puVar19 + (*(int *)(lVar10 + lVar6) + *(int *)(lVar1 + lVar6));
        lVar15 = lVar15 + -1;
        uVar17 = uVar18;
        local_120.packets_ptr = puVar4;
      } while (lVar15 != 0);
    }
    newLZ_encoder_arrays_finish_chunk<1>(&local_120,puVar19);
    lVar9 = newLZ_encoder_arrays_output
                      (param_2,param_3,param_11,param_6,param_7,param_9,param_1,&local_120,param_8,
                       param_12);
  }
  return lVar9;
}

// newlz_literal_space_reserve_size @ 14f3453d0

int __cdecl oo2::newlz_literal_space_reserve_size(int param_1)

{
  return (param_1 >> 4) + 0x100 + param_1;
}

// newlz_spaceSpeedTradeoffBytes_for_lambda @ 14f345400

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

// optimal_passinfo_to_codecost @ 14f345440

void __cdecl
oo2::optimal_passinfo_to_codecost(newlz_passinfo *param_1,newlz_codecosts *param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int (*paaiVar5) [4] [32];
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int local_res8;
  
  uVar13 = (ulonglong)param_3;
  histo_to_codecost(param_1->offset_histo1,param_2->codecost_offset1,0x100,0x24,0xff);
  if (1 < param_1->offset_alt_modulo) {
    histo_to_codecost(param_1->offset_histo2,param_2->codecost_offset2,0x100,0,0xff);
  }
  histo_to_codecost(param_1->packet_histo,param_2->codecost_packet,0x100,0x12,0xff);
  histo_to_codecost(param_1->excess_histo,param_2->codecost_excess,0x100,0xc,0xff);
  if (param_2->chunktype != 1) {
    param_1 = (newlz_passinfo *)param_1->literal_histo_sub;
  }
  histo_to_codecost(param_1->literal_histo_raw,param_2->codecost_literal,0x100,0,0xff);
  uVar8 = 0;
  lVar1 = uVar13 - 2;
  paaiVar5 = param_2->cost_packet_short;
  uVar12 = uVar8;
  do {
    iVar11 = 0;
    local_res8 = 0;
    do {
      uVar9 = 2;
      uVar13 = uVar13 & 0xffffffff;
      lVar4 = lVar1;
      if (local_res8 != 3) {
        uVar13 = uVar9;
        lVar4 = 0;
      }
      lVar7 = lVar4 - uVar8;
      do {
        iVar2 = (int)uVar13;
        iVar10 = iVar2 + -2;
        iVar6 = 0xf;
        if (iVar10 < 0xf) {
          iVar6 = iVar10;
        }
        iVar3 = (int)uVar12;
        iVar6 = param_2->codecost_packet[iVar3 + (iVar6 + iVar11) * 4];
        if (0xe < iVar10) {
          iVar6 = iVar6 + *(int *)((longlong)paaiVar5 + lVar7 * 4 + -0x43c);
        }
        (*paaiVar5)[0][0] = iVar6;
        iVar10 = iVar2 + -1;
        iVar6 = 0xf;
        if (iVar10 < 0xf) {
          iVar6 = iVar10;
        }
        iVar6 = param_2->codecost_packet[iVar3 + (iVar6 + iVar11) * 4];
        if (0xe < iVar10) {
          iVar6 = iVar6 + *(int *)((longlong)paaiVar5 + lVar7 * 4 + -0x438);
        }
        (*paaiVar5)[0][1] = iVar6;
        iVar6 = 0xf;
        if (iVar2 < 0xf) {
          iVar6 = iVar2;
        }
        iVar6 = param_2->codecost_packet[iVar3 + (iVar6 + iVar11) * 4];
        if (0xe < iVar2) {
          iVar6 = iVar6 + *(int *)((longlong)paaiVar5 + lVar7 * 4 + -0x434);
        }
        (*paaiVar5)[0][2] = iVar6;
        iVar10 = iVar2 + 1;
        iVar6 = 0xf;
        if (iVar10 < 0xf) {
          iVar6 = iVar10;
        }
        iVar6 = param_2->codecost_packet[iVar3 + (iVar6 + iVar11) * 4];
        if (0xe < iVar10) {
          iVar6 = iVar6 + *(int *)((longlong)paaiVar5 + lVar7 * 4 + -0x430);
        }
        (*paaiVar5)[0][3] = iVar6;
        iVar10 = iVar2 + 2;
        iVar6 = 0xf;
        if (iVar10 < 0xf) {
          iVar6 = iVar10;
        }
        iVar6 = param_2->codecost_packet[iVar3 + (iVar6 + iVar11) * 4];
        if (0xe < iVar10) {
          iVar6 = iVar6 + *(int *)((longlong)paaiVar5 + lVar7 * 4 + -0x42c);
        }
        (*paaiVar5)[0][4] = iVar6;
        iVar10 = iVar2 + 3;
        iVar6 = 0xf;
        if (iVar10 < 0xf) {
          iVar6 = iVar10;
        }
        iVar6 = param_2->codecost_packet[iVar3 + (iVar6 + iVar11) * 4];
        if (0xe < iVar10) {
          iVar6 = iVar6 + *(int *)((longlong)paaiVar5 + lVar7 * 4 + -0x428);
        }
        (*paaiVar5)[0][5] = iVar6;
        iVar10 = iVar2 + 4;
        iVar6 = 0xf;
        if (iVar10 < 0xf) {
          iVar6 = iVar10;
        }
        iVar6 = param_2->codecost_packet[iVar3 + (iVar6 + iVar11) * 4];
        if (0xe < iVar10) {
          iVar6 = iVar6 + *(int *)((longlong)paaiVar5 + lVar7 * 4 + -0x424);
        }
        (*paaiVar5)[0][6] = iVar6;
        iVar10 = iVar2 + 5;
        iVar6 = 0xf;
        if (iVar10 < 0xf) {
          iVar6 = iVar10;
        }
        iVar6 = param_2->codecost_packet[iVar3 + (iVar6 + iVar11) * 4];
        if (0xe < iVar10) {
          iVar6 = iVar6 + *(int *)((longlong)paaiVar5 + lVar7 * 4 + -0x420);
        }
        (*paaiVar5)[0][7] = iVar6;
        iVar10 = iVar2 + 6;
        iVar6 = 0xf;
        if (iVar10 < 0xf) {
          iVar6 = iVar10;
        }
        iVar6 = param_2->codecost_packet[iVar3 + (iVar6 + iVar11) * 4];
        if (0xe < iVar10) {
          iVar6 = iVar6 + *(int *)((longlong)paaiVar5 + lVar7 * 4 + -0x41c);
        }
        (*paaiVar5)[0][8] = iVar6;
        iVar10 = iVar2 + 7;
        iVar6 = 0xf;
        if (iVar10 < 0xf) {
          iVar6 = iVar10;
        }
        iVar6 = param_2->codecost_packet[iVar3 + (iVar6 + iVar11) * 4];
        if (0xe < iVar10) {
          iVar6 = iVar6 + *(int *)((longlong)paaiVar5 + lVar7 * 4 + -0x418);
        }
        (*paaiVar5)[0][9] = iVar6;
        iVar10 = iVar2 + 8;
        iVar6 = 0xf;
        if (iVar10 < 0xf) {
          iVar6 = iVar10;
        }
        iVar6 = param_2->codecost_packet[iVar3 + (iVar6 + iVar11) * 4];
        if (0xe < iVar10) {
          iVar6 = iVar6 + *(int *)((longlong)paaiVar5 + lVar7 * 4 + -0x414);
        }
        (*paaiVar5)[0][10] = iVar6;
        iVar10 = iVar2 + 9;
        iVar6 = 0xf;
        if (iVar10 < 0xf) {
          iVar6 = iVar10;
        }
        iVar6 = param_2->codecost_packet[iVar3 + (iVar6 + iVar11) * 4];
        if (0xe < iVar10) {
          iVar6 = iVar6 + *(int *)((longlong)paaiVar5 + lVar7 * 4 + -0x410);
        }
        (*paaiVar5)[0][0xb] = iVar6;
        iVar10 = iVar2 + 10;
        iVar6 = 0xf;
        if (iVar10 < 0xf) {
          iVar6 = iVar10;
        }
        iVar6 = param_2->codecost_packet[iVar3 + (iVar6 + iVar11) * 4];
        if (0xe < iVar10) {
          iVar6 = iVar6 + *(int *)((longlong)paaiVar5 + lVar7 * 4 + -0x40c);
        }
        (*paaiVar5)[0][0xc] = iVar6;
        iVar10 = iVar2 + 0xb;
        iVar6 = 0xf;
        if (iVar10 < 0xf) {
          iVar6 = iVar10;
        }
        iVar6 = param_2->codecost_packet[iVar3 + (iVar6 + iVar11) * 4];
        if (0xe < iVar10) {
          iVar6 = iVar6 + *(int *)((longlong)paaiVar5 + lVar7 * 4 + -0x408);
        }
        (*paaiVar5)[0][0xd] = iVar6;
        iVar10 = iVar2 + 0xc;
        iVar6 = 0xf;
        if (iVar10 < 0xf) {
          iVar6 = iVar10;
        }
        iVar6 = param_2->codecost_packet[iVar3 + (iVar6 + iVar11) * 4];
        if (0xe < iVar10) {
          iVar6 = iVar6 + *(int *)((longlong)paaiVar5 + lVar7 * 4 + -0x404);
        }
        (*paaiVar5)[0][0xe] = iVar6;
        iVar10 = iVar2 + 0xd;
        iVar6 = 0xf;
        if (iVar10 < 0xf) {
          iVar6 = iVar10;
        }
        iVar6 = param_2->codecost_packet[iVar3 + (iVar6 + iVar11) * 4];
        if (0xe < iVar10) {
          iVar6 = iVar6 + *(int *)((lVar4 - uVar8) * 4 + -0x400 + (longlong)paaiVar5);
        }
        (*paaiVar5)[0][0xf] = iVar6;
        uVar13 = (ulonglong)(iVar2 + 0x10);
        paaiVar5 = (int (*) [4] [32])((*paaiVar5)[0] + 0x10);
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
      local_res8 = local_res8 + 1;
      uVar13 = (ulonglong)(uint)param_3;
      uVar8 = uVar8 + 0x20;
      iVar11 = iVar11 + 0x10;
    } while (iVar11 < 0x40);
    uVar12 = (ulonglong)(iVar3 + 1);
  } while ((longlong)uVar8 < 0x200);
  return;
}

// optimal_rescale_histo2 @ 14f345a00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl oo2::optimal_rescale_histo2(uint *param_1,uint *param_2)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
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
  uint *puVar16;
  longlong lVar17;
  longlong lVar18;
  
  iVar15 = _UNK_150631dac;
  iVar14 = _UNK_150631da8;
  iVar13 = _UNK_150631da4;
  iVar12 = ___xmm_00000001000000010000000100000001;
  if ((param_1 <= param_2 + 0xff) && (param_2 <= param_1 + 0xff)) {
    lVar18 = 0x100;
    puVar16 = param_1;
    do {
      *puVar16 = (*(int *)((longlong)puVar16 + ((longlong)param_2 - (longlong)param_1)) + *puVar16
                 >> 5) + 1;
      lVar18 = lVar18 + -1;
      puVar16 = puVar16 + 1;
    } while (lVar18 != 0);
    return;
  }
  lVar17 = (longlong)param_2 - (longlong)param_1;
  lVar18 = 0x10;
  puVar16 = param_1 + 4;
  do {
    piVar3 = (int *)(lVar17 + -0x10 + (longlong)puVar16);
    iVar4 = piVar3[1];
    iVar5 = piVar3[2];
    iVar6 = piVar3[3];
    piVar2 = (int *)(lVar17 + (longlong)puVar16);
    iVar7 = *piVar2;
    iVar8 = piVar2[1];
    iVar9 = piVar2[2];
    iVar10 = piVar2[3];
    puVar1 = puVar16 + 0x10;
    puVar16[-4] = (*piVar3 + puVar16[-4] >> 5) + iVar12;
    puVar16[-3] = (iVar4 + puVar16[-3] >> 5) + iVar13;
    puVar16[-2] = (iVar5 + puVar16[-2] >> 5) + iVar14;
    puVar16[-1] = (iVar6 + puVar16[-1] >> 5) + iVar15;
    piVar2 = (int *)(lVar17 + -0x30 + (longlong)puVar1);
    iVar4 = *piVar2;
    iVar5 = piVar2[1];
    iVar6 = piVar2[2];
    iVar11 = piVar2[3];
    *puVar16 = (iVar7 + *puVar16 >> 5) + iVar12;
    puVar16[1] = (iVar8 + puVar16[1] >> 5) + iVar13;
    puVar16[2] = (iVar9 + puVar16[2] >> 5) + iVar14;
    puVar16[3] = (iVar10 + puVar16[3] >> 5) + iVar15;
    puVar16[4] = (iVar4 + puVar16[4] >> 5) + iVar12;
    puVar16[5] = (iVar5 + puVar16[5] >> 5) + iVar13;
    puVar16[6] = (iVar6 + puVar16[6] >> 5) + iVar14;
    puVar16[7] = (iVar11 + puVar16[7] >> 5) + iVar15;
    piVar2 = (int *)(lVar17 + -0x20 + (longlong)puVar1);
    iVar4 = piVar2[1];
    iVar5 = piVar2[2];
    iVar6 = piVar2[3];
    puVar16[8] = (*piVar2 + puVar16[8] >> 5) + iVar12;
    puVar16[9] = (iVar4 + puVar16[9] >> 5) + iVar13;
    puVar16[10] = (iVar5 + puVar16[10] >> 5) + iVar14;
    puVar16[0xb] = (iVar6 + puVar16[0xb] >> 5) + iVar15;
    lVar18 = lVar18 + -1;
    puVar16 = puVar1;
  } while (lVar18 != 0);
  return;
}

// optimal_rescale_histo @ 14f345ae0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl oo2::optimal_rescale_histo(uint *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  longlong lVar6;
  
  iVar4 = _UNK_150631dac;
  iVar3 = _UNK_150631da8;
  iVar2 = _UNK_150631da4;
  iVar1 = ___xmm_00000001000000010000000100000001;
  lVar6 = 0x10;
  puVar5 = param_1 + 8;
  do {
    puVar5[-8] = (puVar5[-8] >> 4) + iVar1;
    puVar5[-7] = (puVar5[-7] >> 4) + iVar2;
    puVar5[-6] = (puVar5[-6] >> 4) + iVar3;
    puVar5[-5] = (puVar5[-5] >> 4) + iVar4;
    puVar5[-4] = (puVar5[-4] >> 4) + iVar1;
    puVar5[-3] = (puVar5[-3] >> 4) + iVar2;
    puVar5[-2] = (puVar5[-2] >> 4) + iVar3;
    puVar5[-1] = (puVar5[-1] >> 4) + iVar4;
    *puVar5 = (*puVar5 >> 4) + iVar1;
    puVar5[1] = (puVar5[1] >> 4) + iVar2;
    puVar5[2] = (puVar5[2] >> 4) + iVar3;
    puVar5[3] = (puVar5[3] >> 4) + iVar4;
    puVar5[4] = (puVar5[4] >> 4) + iVar1;
    puVar5[5] = (puVar5[5] >> 4) + iVar2;
    puVar5[6] = (puVar5[6] >> 4) + iVar3;
    puVar5[7] = (puVar5[7] >> 4) + iVar4;
    lVar6 = lVar6 + -1;
    puVar5 = puVar5 + 0x10;
  } while (lVar6 != 0);
  return;
}

// optimal_rescale_passinfo2 @ 14f345b60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
oo2::optimal_rescale_passinfo2(newlz_passinfo *param_1,newlz_passinfo *param_2,bool param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  longlong lVar10;
  uint *puVar11;
  longlong lVar12;
  longlong lVar13;
  
  iVar8 = _UNK_150631dac;
  iVar7 = _UNK_150631da8;
  iVar6 = _UNK_150631da4;
  iVar5 = ___xmm_00000001000000010000000100000001;
  lVar13 = 0x10;
  if (param_3) {
    optimal_rescale_histo2(param_1->literal_histo_raw,param_2->literal_histo_raw);
    optimal_rescale_histo2(param_1->literal_histo_sub,param_2->literal_histo_sub);
  }
  else {
    puVar9 = param_1->literal_histo_raw + 8;
    lVar10 = lVar13;
    do {
      uVar1 = puVar9[-7];
      uVar2 = puVar9[-6];
      uVar3 = puVar9[-5];
      ((newlz_passinfo *)(puVar9 + -8))->literal_histo_raw[0] =
           (((newlz_passinfo *)(puVar9 + -8))->literal_histo_raw[0] >> 4) + iVar5;
      puVar9[-7] = (uVar1 >> 4) + iVar6;
      puVar9[-6] = (uVar2 >> 4) + iVar7;
      puVar9[-5] = (uVar3 >> 4) + iVar8;
      puVar9[-4] = (puVar9[-4] >> 4) + iVar5;
      puVar9[-3] = (puVar9[-3] >> 4) + iVar6;
      puVar9[-2] = (puVar9[-2] >> 4) + iVar7;
      puVar9[-1] = (puVar9[-1] >> 4) + iVar8;
      *puVar9 = (*puVar9 >> 4) + iVar5;
      puVar9[1] = (puVar9[1] >> 4) + iVar6;
      puVar9[2] = (puVar9[2] >> 4) + iVar7;
      puVar9[3] = (puVar9[3] >> 4) + iVar8;
      puVar9[4] = (puVar9[4] >> 4) + iVar5;
      puVar9[5] = (puVar9[5] >> 4) + iVar6;
      puVar9[6] = (puVar9[6] >> 4) + iVar7;
      puVar9[7] = (puVar9[7] >> 4) + iVar8;
      lVar10 = lVar10 + -1;
      puVar9 = puVar9 + 0x10;
    } while (lVar10 != 0);
    puVar9 = param_1->literal_histo_sub + 8;
    lVar10 = lVar13;
    do {
      puVar9[-8] = (puVar9[-8] >> 4) + iVar5;
      puVar9[-7] = (puVar9[-7] >> 4) + iVar6;
      puVar9[-6] = (puVar9[-6] >> 4) + iVar7;
      puVar9[-5] = (puVar9[-5] >> 4) + iVar8;
      puVar9[-4] = (puVar9[-4] >> 4) + iVar5;
      puVar9[-3] = (puVar9[-3] >> 4) + iVar6;
      puVar9[-2] = (puVar9[-2] >> 4) + iVar7;
      puVar9[-1] = (puVar9[-1] >> 4) + iVar8;
      *puVar9 = (*puVar9 >> 4) + iVar5;
      puVar9[1] = (puVar9[1] >> 4) + iVar6;
      puVar9[2] = (puVar9[2] >> 4) + iVar7;
      puVar9[3] = (puVar9[3] >> 4) + iVar8;
      puVar9[4] = (puVar9[4] >> 4) + iVar5;
      puVar9[5] = (puVar9[5] >> 4) + iVar6;
      puVar9[6] = (puVar9[6] >> 4) + iVar7;
      puVar9[7] = (puVar9[7] >> 4) + iVar8;
      lVar10 = lVar10 + -1;
      puVar9 = puVar9 + 0x10;
    } while (lVar10 != 0);
  }
  optimal_rescale_histo2(param_1->packet_histo,param_2->packet_histo);
  optimal_rescale_histo2(param_1->excess_histo,param_2->excess_histo);
  if (param_1->offset_alt_modulo == param_2->offset_alt_modulo) {
    optimal_rescale_histo2(param_1->offset_histo1,param_2->offset_histo1);
    if (1 < param_1->offset_alt_modulo) {
      optimal_rescale_histo2(param_1->offset_histo2,param_2->offset_histo2);
      return;
    }
  }
  else {
    lVar12 = 8;
    lVar10 = 8;
    puVar9 = param_1->offset_histo1;
    puVar11 = param_2->offset_histo1;
    do {
      uVar4 = *(undefined8 *)(puVar11 + 2);
      *(undefined8 *)puVar9 = *(undefined8 *)puVar11;
      *(undefined8 *)(puVar9 + 2) = uVar4;
      uVar4 = *(undefined8 *)(puVar11 + 6);
      *(undefined8 *)(puVar9 + 4) = *(undefined8 *)(puVar11 + 4);
      *(undefined8 *)(puVar9 + 6) = uVar4;
      uVar4 = *(undefined8 *)(puVar11 + 10);
      *(undefined8 *)(puVar9 + 8) = *(undefined8 *)(puVar11 + 8);
      *(undefined8 *)(puVar9 + 10) = uVar4;
      uVar4 = *(undefined8 *)(puVar11 + 0xe);
      *(undefined8 *)(puVar9 + 0xc) = *(undefined8 *)(puVar11 + 0xc);
      *(undefined8 *)(puVar9 + 0xe) = uVar4;
      uVar4 = *(undefined8 *)(puVar11 + 0x12);
      *(undefined8 *)(puVar9 + 0x10) = *(undefined8 *)(puVar11 + 0x10);
      *(undefined8 *)(puVar9 + 0x12) = uVar4;
      uVar4 = *(undefined8 *)(puVar11 + 0x16);
      *(undefined8 *)(puVar9 + 0x14) = *(undefined8 *)(puVar11 + 0x14);
      *(undefined8 *)(puVar9 + 0x16) = uVar4;
      uVar4 = *(undefined8 *)(puVar11 + 0x1a);
      *(undefined8 *)(puVar9 + 0x18) = *(undefined8 *)(puVar11 + 0x18);
      *(undefined8 *)(puVar9 + 0x1a) = uVar4;
      uVar4 = *(undefined8 *)(puVar11 + 0x1e);
      *(undefined8 *)(puVar9 + 0x1c) = *(undefined8 *)(puVar11 + 0x1c);
      *(undefined8 *)(puVar9 + 0x1e) = uVar4;
      lVar10 = lVar10 + -1;
      puVar9 = puVar9 + 0x20;
      puVar11 = puVar11 + 0x20;
    } while (lVar10 != 0);
    puVar9 = param_2->offset_histo2;
    puVar11 = param_1->offset_histo2;
    do {
      uVar4 = *(undefined8 *)(puVar9 + 2);
      *(undefined8 *)puVar11 = *(undefined8 *)puVar9;
      *(undefined8 *)(puVar11 + 2) = uVar4;
      uVar4 = *(undefined8 *)(puVar9 + 6);
      *(undefined8 *)(puVar11 + 4) = *(undefined8 *)(puVar9 + 4);
      *(undefined8 *)(puVar11 + 6) = uVar4;
      uVar4 = *(undefined8 *)(puVar9 + 10);
      *(undefined8 *)(puVar11 + 8) = *(undefined8 *)(puVar9 + 8);
      *(undefined8 *)(puVar11 + 10) = uVar4;
      uVar4 = *(undefined8 *)(puVar9 + 0xe);
      *(undefined8 *)(puVar11 + 0xc) = *(undefined8 *)(puVar9 + 0xc);
      *(undefined8 *)(puVar11 + 0xe) = uVar4;
      uVar4 = *(undefined8 *)(puVar9 + 0x12);
      *(undefined8 *)(puVar11 + 0x10) = *(undefined8 *)(puVar9 + 0x10);
      *(undefined8 *)(puVar11 + 0x12) = uVar4;
      uVar4 = *(undefined8 *)(puVar9 + 0x16);
      *(undefined8 *)(puVar11 + 0x14) = *(undefined8 *)(puVar9 + 0x14);
      *(undefined8 *)(puVar11 + 0x16) = uVar4;
      uVar4 = *(undefined8 *)(puVar9 + 0x1a);
      *(undefined8 *)(puVar11 + 0x18) = *(undefined8 *)(puVar9 + 0x18);
      *(undefined8 *)(puVar11 + 0x1a) = uVar4;
      uVar4 = *(undefined8 *)(puVar9 + 0x1e);
      *(undefined8 *)(puVar11 + 0x1c) = *(undefined8 *)(puVar9 + 0x1c);
      *(undefined8 *)(puVar11 + 0x1e) = uVar4;
      iVar8 = _UNK_150631dac;
      iVar7 = _UNK_150631da8;
      iVar6 = _UNK_150631da4;
      iVar5 = ___xmm_00000001000000010000000100000001;
      lVar12 = lVar12 + -1;
      puVar9 = puVar9 + 0x20;
      puVar11 = puVar11 + 0x20;
    } while (lVar12 != 0);
    param_1->offset_alt_modulo = param_2->offset_alt_modulo;
    puVar9 = param_1->offset_histo1 + 8;
    lVar10 = lVar13;
    do {
      puVar9[-8] = (puVar9[-8] >> 4) + iVar5;
      puVar9[-7] = (puVar9[-7] >> 4) + iVar6;
      puVar9[-6] = (puVar9[-6] >> 4) + iVar7;
      puVar9[-5] = (puVar9[-5] >> 4) + iVar8;
      puVar9[-4] = (puVar9[-4] >> 4) + iVar5;
      puVar9[-3] = (puVar9[-3] >> 4) + iVar6;
      puVar9[-2] = (puVar9[-2] >> 4) + iVar7;
      puVar9[-1] = (puVar9[-1] >> 4) + iVar8;
      *puVar9 = (*puVar9 >> 4) + iVar5;
      puVar9[1] = (puVar9[1] >> 4) + iVar6;
      puVar9[2] = (puVar9[2] >> 4) + iVar7;
      puVar9[3] = (puVar9[3] >> 4) + iVar8;
      puVar9[4] = (puVar9[4] >> 4) + iVar5;
      puVar9[5] = (puVar9[5] >> 4) + iVar6;
      puVar9[6] = (puVar9[6] >> 4) + iVar7;
      puVar9[7] = (puVar9[7] >> 4) + iVar8;
      lVar10 = lVar10 + -1;
      puVar9 = puVar9 + 0x10;
    } while (lVar10 != 0);
    if (1 < param_1->offset_alt_modulo) {
      puVar9 = param_1->offset_histo2 + 8;
      do {
        puVar9[-8] = (puVar9[-8] >> 4) + iVar5;
        puVar9[-7] = (puVar9[-7] >> 4) + iVar6;
        puVar9[-6] = (puVar9[-6] >> 4) + iVar7;
        puVar9[-5] = (puVar9[-5] >> 4) + iVar8;
        puVar9[-4] = (puVar9[-4] >> 4) + iVar5;
        puVar9[-3] = (puVar9[-3] >> 4) + iVar6;
        puVar9[-2] = (puVar9[-2] >> 4) + iVar7;
        puVar9[-1] = (puVar9[-1] >> 4) + iVar8;
        *puVar9 = (*puVar9 >> 4) + iVar5;
        puVar9[1] = (puVar9[1] >> 4) + iVar6;
        puVar9[2] = (puVar9[2] >> 4) + iVar7;
        puVar9[3] = (puVar9[3] >> 4) + iVar8;
        puVar9[4] = (puVar9[4] >> 4) + iVar5;
        puVar9[5] = (puVar9[5] >> 4) + iVar6;
        puVar9[6] = (puVar9[6] >> 4) + iVar7;
        puVar9[7] = (puVar9[7] >> 4) + iVar8;
        lVar13 = lVar13 + -1;
        puVar9 = puVar9 + 0x10;
      } while (lVar13 != 0);
    }
  }
  return;
}

// optimal_rescale_passinfo @ 14f345ec0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl oo2::optimal_rescale_passinfo(newlz_passinfo *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  longlong lVar9;
  longlong lVar10;
  
  iVar7 = _UNK_150631dac;
  iVar6 = _UNK_150631da8;
  iVar5 = _UNK_150631da4;
  iVar4 = ___xmm_00000001000000010000000100000001;
  lVar9 = 0x10;
  lVar10 = 0x10;
  puVar8 = param_1->literal_histo_raw + 8;
  do {
    uVar1 = puVar8[-7];
    uVar2 = puVar8[-6];
    uVar3 = puVar8[-5];
    ((newlz_passinfo *)(puVar8 + -8))->literal_histo_raw[0] =
         (((newlz_passinfo *)(puVar8 + -8))->literal_histo_raw[0] >> 4) + iVar4;
    puVar8[-7] = (uVar1 >> 4) + iVar5;
    puVar8[-6] = (uVar2 >> 4) + iVar6;
    puVar8[-5] = (uVar3 >> 4) + iVar7;
    puVar8[-4] = (puVar8[-4] >> 4) + iVar4;
    puVar8[-3] = (puVar8[-3] >> 4) + iVar5;
    puVar8[-2] = (puVar8[-2] >> 4) + iVar6;
    puVar8[-1] = (puVar8[-1] >> 4) + iVar7;
    *puVar8 = (*puVar8 >> 4) + iVar4;
    puVar8[1] = (puVar8[1] >> 4) + iVar5;
    puVar8[2] = (puVar8[2] >> 4) + iVar6;
    puVar8[3] = (puVar8[3] >> 4) + iVar7;
    puVar8[4] = (puVar8[4] >> 4) + iVar4;
    puVar8[5] = (puVar8[5] >> 4) + iVar5;
    puVar8[6] = (puVar8[6] >> 4) + iVar6;
    puVar8[7] = (puVar8[7] >> 4) + iVar7;
    lVar10 = lVar10 + -1;
    puVar8 = puVar8 + 0x10;
  } while (lVar10 != 0);
  lVar10 = 0x10;
  puVar8 = param_1->literal_histo_sub + 8;
  do {
    puVar8[-8] = (puVar8[-8] >> 4) + iVar4;
    puVar8[-7] = (puVar8[-7] >> 4) + iVar5;
    puVar8[-6] = (puVar8[-6] >> 4) + iVar6;
    puVar8[-5] = (puVar8[-5] >> 4) + iVar7;
    puVar8[-4] = (puVar8[-4] >> 4) + iVar4;
    puVar8[-3] = (puVar8[-3] >> 4) + iVar5;
    puVar8[-2] = (puVar8[-2] >> 4) + iVar6;
    puVar8[-1] = (puVar8[-1] >> 4) + iVar7;
    *puVar8 = (*puVar8 >> 4) + iVar4;
    puVar8[1] = (puVar8[1] >> 4) + iVar5;
    puVar8[2] = (puVar8[2] >> 4) + iVar6;
    puVar8[3] = (puVar8[3] >> 4) + iVar7;
    puVar8[4] = (puVar8[4] >> 4) + iVar4;
    puVar8[5] = (puVar8[5] >> 4) + iVar5;
    puVar8[6] = (puVar8[6] >> 4) + iVar6;
    puVar8[7] = (puVar8[7] >> 4) + iVar7;
    lVar10 = lVar10 + -1;
    puVar8 = puVar8 + 0x10;
  } while (lVar10 != 0);
  lVar10 = 0x10;
  puVar8 = param_1->offset_histo1 + 8;
  do {
    puVar8[-8] = (puVar8[-8] >> 4) + iVar4;
    puVar8[-7] = (puVar8[-7] >> 4) + iVar5;
    puVar8[-6] = (puVar8[-6] >> 4) + iVar6;
    puVar8[-5] = (puVar8[-5] >> 4) + iVar7;
    puVar8[-4] = (puVar8[-4] >> 4) + iVar4;
    puVar8[-3] = (puVar8[-3] >> 4) + iVar5;
    puVar8[-2] = (puVar8[-2] >> 4) + iVar6;
    puVar8[-1] = (puVar8[-1] >> 4) + iVar7;
    *puVar8 = (*puVar8 >> 4) + iVar4;
    puVar8[1] = (puVar8[1] >> 4) + iVar5;
    puVar8[2] = (puVar8[2] >> 4) + iVar6;
    puVar8[3] = (puVar8[3] >> 4) + iVar7;
    puVar8[4] = (puVar8[4] >> 4) + iVar4;
    puVar8[5] = (puVar8[5] >> 4) + iVar5;
    puVar8[6] = (puVar8[6] >> 4) + iVar6;
    puVar8[7] = (puVar8[7] >> 4) + iVar7;
    lVar10 = lVar10 + -1;
    puVar8 = puVar8 + 0x10;
  } while (lVar10 != 0);
  if (1 < param_1->offset_alt_modulo) {
    lVar10 = 0x10;
    puVar8 = param_1->offset_histo2 + 8;
    do {
      puVar8[-8] = (puVar8[-8] >> 4) + iVar4;
      puVar8[-7] = (puVar8[-7] >> 4) + iVar5;
      puVar8[-6] = (puVar8[-6] >> 4) + iVar6;
      puVar8[-5] = (puVar8[-5] >> 4) + iVar7;
      puVar8[-4] = (puVar8[-4] >> 4) + iVar4;
      puVar8[-3] = (puVar8[-3] >> 4) + iVar5;
      puVar8[-2] = (puVar8[-2] >> 4) + iVar6;
      puVar8[-1] = (puVar8[-1] >> 4) + iVar7;
      *puVar8 = (*puVar8 >> 4) + iVar4;
      puVar8[1] = (puVar8[1] >> 4) + iVar5;
      puVar8[2] = (puVar8[2] >> 4) + iVar6;
      puVar8[3] = (puVar8[3] >> 4) + iVar7;
      puVar8[4] = (puVar8[4] >> 4) + iVar4;
      puVar8[5] = (puVar8[5] >> 4) + iVar5;
      puVar8[6] = (puVar8[6] >> 4) + iVar6;
      puVar8[7] = (puVar8[7] >> 4) + iVar7;
      lVar10 = lVar10 + -1;
      puVar8 = puVar8 + 0x10;
    } while (lVar10 != 0);
  }
  lVar10 = 0x10;
  puVar8 = param_1->packet_histo + 8;
  do {
    puVar8[-8] = (puVar8[-8] >> 4) + iVar4;
    puVar8[-7] = (puVar8[-7] >> 4) + iVar5;
    puVar8[-6] = (puVar8[-6] >> 4) + iVar6;
    puVar8[-5] = (puVar8[-5] >> 4) + iVar7;
    puVar8[-4] = (puVar8[-4] >> 4) + iVar4;
    puVar8[-3] = (puVar8[-3] >> 4) + iVar5;
    puVar8[-2] = (puVar8[-2] >> 4) + iVar6;
    puVar8[-1] = (puVar8[-1] >> 4) + iVar7;
    *puVar8 = (*puVar8 >> 4) + iVar4;
    puVar8[1] = (puVar8[1] >> 4) + iVar5;
    puVar8[2] = (puVar8[2] >> 4) + iVar6;
    puVar8[3] = (puVar8[3] >> 4) + iVar7;
    puVar8[4] = (puVar8[4] >> 4) + iVar4;
    puVar8[5] = (puVar8[5] >> 4) + iVar5;
    puVar8[6] = (puVar8[6] >> 4) + iVar6;
    puVar8[7] = (puVar8[7] >> 4) + iVar7;
    lVar10 = lVar10 + -1;
    puVar8 = puVar8 + 0x10;
  } while (lVar10 != 0);
  puVar8 = param_1->excess_histo + 8;
  do {
    puVar8[-8] = (puVar8[-8] >> 4) + iVar4;
    puVar8[-7] = (puVar8[-7] >> 4) + iVar5;
    puVar8[-6] = (puVar8[-6] >> 4) + iVar6;
    puVar8[-5] = (puVar8[-5] >> 4) + iVar7;
    puVar8[-4] = (puVar8[-4] >> 4) + iVar4;
    puVar8[-3] = (puVar8[-3] >> 4) + iVar5;
    puVar8[-2] = (puVar8[-2] >> 4) + iVar6;
    puVar8[-1] = (puVar8[-1] >> 4) + iVar7;
    *puVar8 = (*puVar8 >> 4) + iVar4;
    puVar8[1] = (puVar8[1] >> 4) + iVar5;
    puVar8[2] = (puVar8[2] >> 4) + iVar6;
    puVar8[3] = (puVar8[3] >> 4) + iVar7;
    puVar8[4] = (puVar8[4] >> 4) + iVar4;
    puVar8[5] = (puVar8[5] >> 4) + iVar5;
    puVar8[6] = (puVar8[6] >> 4) + iVar6;
    puVar8[7] = (puVar8[7] >> 4) + iVar7;
    lVar9 = lVar9 + -1;
    puVar8 = puVar8 + 0x10;
  } while (lVar9 != 0);
  return;
}

// optimal_update_passinfo @ 14f346140

void __cdecl
oo2::optimal_update_passinfo
          (vector_a<oo2::newlz_encoder_parse> *param_1,int param_2,newlz_passinfo *param_3,
          uchar *param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  
  lVar16 = 0;
  lVar17 = lVar16;
  if (0 < *(longlong *)&param_1->field_0x10) {
    do {
      piVar14 = (int *)(*(longlong *)param_1 + lVar17);
      lVar10 = (longlong)param_2;
      iVar8 = piVar14[1];
      lVar12 = (longlong)iVar8;
      iVar6 = piVar14[2];
      iVar7 = *piVar14;
      param_2 = param_2 + iVar6 + iVar8;
      if (0 < iVar8) {
        pbVar5 = param_4 + lVar10;
        do {
          bVar1 = *pbVar5;
          pbVar9 = pbVar5 + -(longlong)iVar7;
          pbVar5 = pbVar5 + 1;
          param_3->literal_histo_raw[bVar1] = param_3->literal_histo_raw[bVar1] + 2;
          param_3->literal_histo_sub[(byte)(bVar1 - *pbVar9)] =
               param_3->literal_histo_sub[(byte)(bVar1 - *pbVar9)] + 2;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
        iVar6 = piVar14[2];
      }
      iVar7 = iVar8;
      if (3 < iVar8) {
        iVar7 = 3;
      }
      iVar11 = iVar6 + -2;
      if (0xf < iVar11) {
        iVar11 = 0xf;
      }
      uVar4 = piVar14[3];
      iVar15 = iVar7 + iVar11 * 4;
      if ((int)uVar4 < 1) {
        iVar15 = iVar15 + uVar4 * -0x40;
      }
      else {
        uVar2 = param_3->offset_alt_modulo;
        iVar15 = iVar15 + 0xc0;
        if (uVar2 == 0) {
          if ((int)uVar4 < 0x7fff08) {
            uVar4 = uVar4 + 0xf8;
            iVar3 = 0x1f;
            if (uVar4 != 0) {
              for (; uVar4 >> iVar3 == 0; iVar3 = iVar3 + -1) {
              }
            }
            param_3->offset_histo1[(byte)(((char)iVar3 + -8) * '\x10' | (byte)uVar4 & 0xf)] =
                 param_3->offset_histo1[(byte)(((char)iVar3 + -8) * '\x10' | (byte)uVar4 & 0xf)] + 2
            ;
          }
          else {
            iVar3 = 0x1f;
            if (uVar4 - 0x7eff00 != 0) {
              for (; uVar4 - 0x7eff00 >> iVar3 == 0; iVar3 = iVar3 + -1) {
              }
            }
            param_3->offset_histo1[(byte)((byte)iVar3 | 0xf0)] =
                 param_3->offset_histo1[(byte)((byte)iVar3 | 0xf0)] + 2;
          }
        }
        else if (uVar2 == 1) {
          uVar4 = uVar4 + 8;
          iVar3 = 0x1f;
          if (uVar4 != 0) {
            for (; uVar4 >> iVar3 == 0; iVar3 = iVar3 + -1) {
            }
          }
          param_3->offset_histo1
          [(ulonglong)(byte)((byte)(uVar4 >> ((byte)(iVar3 - 3U) & 0x3f)) ^ 8) |
           (ulonglong)(iVar3 - 3U & 0x1f) << 3] =
               param_3->offset_histo1
               [(ulonglong)(byte)((byte)(uVar4 >> ((byte)(iVar3 - 3U) & 0x3f)) ^ 8) |
                (ulonglong)(iVar3 - 3U & 0x1f) << 3] + 2;
        }
        else {
          uVar13 = uVar4 / uVar2 + 8;
          iVar3 = 0x1f;
          if (uVar13 != 0) {
            for (; uVar13 >> iVar3 == 0; iVar3 = iVar3 + -1) {
            }
          }
          param_3->offset_histo1
          [(ulonglong)(byte)((byte)(uVar13 >> ((byte)(iVar3 - 3U) & 0x3f)) ^ 8) |
           (ulonglong)(iVar3 - 3U & 0x1f) << 3] =
               param_3->offset_histo1
               [(ulonglong)(byte)((byte)(uVar13 >> ((byte)(iVar3 - 3U) & 0x3f)) ^ 8) |
                (ulonglong)(iVar3 - 3U & 0x1f) << 3] + 2;
          param_3->offset_histo2[(ulonglong)uVar4 % (ulonglong)uVar2 & 0xff] =
               param_3->offset_histo2[(ulonglong)uVar4 % (ulonglong)uVar2 & 0xff] + 2;
        }
      }
      param_3->packet_histo[iVar15] = param_3->packet_histo[iVar15] + 2;
      if (iVar7 == 3) {
        iVar7 = 0xff;
        if (iVar8 + -3 < 0xff) {
          iVar7 = iVar8 + -3;
        }
        param_3->excess_histo[iVar7] = param_3->excess_histo[iVar7] + 2;
      }
      if (iVar11 == 0xf) {
        iVar8 = 0xff;
        if (iVar6 + -0x11 < 0xff) {
          iVar8 = iVar6 + -0x11;
        }
        param_3->excess_histo[iVar8] = param_3->excess_histo[iVar8] + 2;
      }
      lVar16 = lVar16 + 1;
      lVar17 = lVar17 + 0x10;
    } while (lVar16 < *(longlong *)&param_1->field_0x10);
  }
  return;
}

// prefetch_next @ 14f346370

void __thiscall
oo2::CTMF<unsigned_int,1,0,4>::prefetch_next(CTMF<unsigned_int,1,0,4> *this,uchar *param_1)

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

// prefetch_next @ 14f3463b0

void __thiscall
oo2::CTMF<unsigned_int,2,8,4>::prefetch_next(CTMF<unsigned_int,2,8,4> *this,uchar *param_1)

{
  uint *puVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  
  this->m_next_ptr = param_1;
  puVar1 = (this->m_hash_table).m_ptr;
  bVar3 = (byte)this->m_table_size_bits;
  bVar2 = bVar3 & 0x1f;
  uVar4 = (uint)(this->m_hash_mul * *(longlong *)param_1 >> 0x20);
  uVar4 = uVar4 << bVar2 | uVar4 >> 0x20 - bVar2;
  this->m_next_hash = uVar4;
  this->m_next_row = puVar1 + (this->m_hash_row_mask & uVar4);
  this->m_next_row_second =
       puVar1 + ((ulonglong)(*(longlong *)param_1 * -0x30e44323485a9b9d) >> (0x40 - bVar3 & 0x3f) &
                0xfffffffffffffffc);
  return;
}

// prefetch_next @ 14f346420

void __thiscall
oo2::CTMF<unsigned_int,3,0,4>::prefetch_next(CTMF<unsigned_int,3,0,4> *this,uchar *param_1)

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

// provide_arena @ 14f346460

void __thiscall oo2::vector_a<int>::provide_arena(vector_a<int> *this,void *param_1,ulong64 param_2)

{
  *(ulong64 *)&this->field_0x8 = param_2 >> 2;
  *(void **)this = param_1;
  return;
}

// provide_arena @ 14f346480

void __thiscall
oo2::vector_a<oo2::newlz_encoder_parse>::provide_arena
          (vector_a<oo2::newlz_encoder_parse> *this,void *param_1,ulong64 param_2)

{
  *(ulong64 *)&this->field_0x8 = param_2 >> 4;
  *(void **)this = param_1;
  return;
}

// provide_arena @ 14f3464a0

void __thiscall
oo2::vector_storage_a<int>::provide_arena(vector_storage_a<int> *this,void *param_1,ulong64 param_2)

{
  this->m_capacity = param_2 >> 2;
  this->m_data = param_1;
  return;
}

// provide_arena @ 14f3464c0

void __thiscall
oo2::vector_storage_a<oo2::newlz_encoder_parse>::provide_arena
          (vector_storage_a<oo2::newlz_encoder_parse> *this,void *param_1,ulong64 param_2)

{
  this->m_capacity = param_2 >> 4;
  this->m_data = param_1;
  return;
}

// ptr_sub_saturate @ 14f3464e0

uchar * __cdecl oo2::ptr_sub_saturate(uchar *param_1,long64 param_2,uchar *param_3)

{
  uchar *puVar1;
  
  puVar1 = param_1 + -param_2;
  if ((longlong)param_1 - (longlong)param_3 < param_2) {
    puVar1 = param_3;
  }
  return puVar1;
}

// push_back @ 14f346500

void __thiscall
oo2::vector_flex<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>::
push_back(vector_flex<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>
          *this)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  undefined8 *puVar4;
  
  lVar1 = *(longlong *)&this->field_0x10;
  if (*(ulonglong *)&this->field_0x8 < lVar1 + 1U) {
    iVar3 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h",0x3f,
                               "oo2::vector_storage_a<struct oo2::newlz_encoder_parse>::needmakefit"
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

// put_sub_literals8 @ 14f346570

void __cdecl oo2::put_sub_literals8(uchar *param_1,uchar *param_2,long64 param_3,long64 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)(param_2 + -param_4);
  *(ulonglong *)param_1 =
       CONCAT17((char)((ulonglong)uVar1 >> 0x38) - (char)((ulonglong)uVar2 >> 0x38),
                CONCAT16((char)((ulonglong)uVar1 >> 0x30) - (char)((ulonglong)uVar2 >> 0x30),
                         CONCAT15((char)((ulonglong)uVar1 >> 0x28) -
                                  (char)((ulonglong)uVar2 >> 0x28),
                                  CONCAT14((char)((ulonglong)uVar1 >> 0x20) -
                                           (char)((ulonglong)uVar2 >> 0x20),
                                           CONCAT13((char)((ulonglong)uVar1 >> 0x18) -
                                                    (char)((ulonglong)uVar2 >> 0x18),
                                                    CONCAT12((char)((ulonglong)uVar1 >> 0x10) -
                                                             (char)((ulonglong)uVar2 >> 0x10),
                                                             CONCAT11((char)((ulonglong)uVar1 >> 8)
                                                                      - (char)((ulonglong)uVar2 >> 8
                                                                              ),
                                                                      (char)uVar1 - (char)uVar2)))))
                        ));
  return;
}

// put_sub_literals @ 14f3465a0

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

// put_sub_literals_sloppy @ 14f346620

void __cdecl
oo2::put_sub_literals_sloppy(uchar *param_1,uchar *param_2,long64 param_3,long64 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
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
  uchar *puVar33;
  uchar *puVar34;
  ulonglong uVar35;
  
  if (8 < param_3) {
    uVar35 = param_3 + 7U >> 4;
    param_3 = param_3 + uVar35 * -0x10;
    puVar34 = param_2;
    do {
      uVar3 = puVar34[1];
      uVar4 = puVar34[2];
      uVar5 = puVar34[3];
      uVar6 = puVar34[4];
      uVar7 = puVar34[5];
      uVar8 = puVar34[6];
      uVar9 = puVar34[7];
      uVar10 = puVar34[8];
      uVar11 = puVar34[9];
      uVar12 = puVar34[10];
      uVar13 = puVar34[0xb];
      uVar14 = puVar34[0xc];
      uVar15 = puVar34[0xd];
      uVar16 = puVar34[0xe];
      uVar17 = puVar34[0xf];
      param_2 = puVar34 + 0x10;
      puVar33 = puVar34 + -param_4;
      uVar18 = puVar33[1];
      uVar19 = puVar33[2];
      uVar20 = puVar33[3];
      uVar21 = puVar33[4];
      uVar22 = puVar33[5];
      uVar23 = puVar33[6];
      uVar24 = puVar33[7];
      uVar25 = puVar33[8];
      uVar26 = puVar33[9];
      uVar27 = puVar33[10];
      uVar28 = puVar33[0xb];
      uVar29 = puVar33[0xc];
      uVar30 = puVar33[0xd];
      uVar31 = puVar33[0xe];
      uVar32 = puVar33[0xf];
      *param_1 = *puVar34 - *puVar33;
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
      uVar35 = uVar35 - 1;
      puVar34 = param_2;
    } while (uVar35 != 0);
  }
  if (0 < param_3) {
    uVar1 = *(undefined8 *)param_2;
    uVar2 = *(undefined8 *)(param_2 + -param_4);
    *(ulonglong *)param_1 =
         CONCAT17((char)((ulonglong)uVar1 >> 0x38) - (char)((ulonglong)uVar2 >> 0x38),
                  CONCAT16((char)((ulonglong)uVar1 >> 0x30) - (char)((ulonglong)uVar2 >> 0x30),
                           CONCAT15((char)((ulonglong)uVar1 >> 0x28) -
                                    (char)((ulonglong)uVar2 >> 0x28),
                                    CONCAT14((char)((ulonglong)uVar1 >> 0x20) -
                                             (char)((ulonglong)uVar2 >> 0x20),
                                             CONCAT13((char)((ulonglong)uVar1 >> 0x18) -
                                                      (char)((ulonglong)uVar2 >> 0x18),
                                                      CONCAT12((char)((ulonglong)uVar1 >> 0x10) -
                                                               (char)((ulonglong)uVar2 >> 0x10),
                                                               CONCAT11((char)((ulonglong)uVar1 >> 8
                                                                              ) - (char)((ulonglong)
                                                                                         uVar2 >> 8)
                                                                        ,(char)uVar1 - (char)uVar2))
                                                     )))));
  }
  return;
}

// release @ 14f3466a0

void __thiscall oo2::CTMF<unsigned_int,1,0,4>::release(CTMF<unsigned_int,1,0,4> *this)

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

// release @ 14f346720

void __thiscall oo2::CTMF<unsigned_int,2,8,4>::release(CTMF<unsigned_int,2,8,4> *this)

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

// release @ 14f3467a0

void __thiscall oo2::CTMF<unsigned_int,3,0,4>::release(CTMF<unsigned_int,3,0,4> *this)

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

// release @ 14f346820

void __thiscall oo2::FastCTMF<unsigned_short>::release(FastCTMF<unsigned_short> *this)

{
  ushort *puVar1;
  rrArenaAllocator *this_00;
  void *pvVar2;
  
  puVar1 = (this->m_hash_table).m_ptr;
  if (puVar1 != (ushort *)0x0) {
    this_00 = this->m_hash_table_arena;
    if ((this_00 != (rrArenaAllocator *)0x0) &&
       (pvVar2 = (this->m_hash_table).m_alloc, pvVar2 != (void *)0x0)) {
      if (this_00->m_unorderedStart != 0) {
        rrArenaAllocator::Free
                  (this_00,pvVar2,(1L << ((byte)this->m_table_size_bits & 0x3f)) * 2 + 0x40);
      }
      (this->m_hash_table).m_alloc = (void *)0x0;
      (this->m_hash_table).m_ptr = (ushort *)0x0;
      return;
    }
    (*g_fp_OodleCore_Plugin_Free)(puVar1);
    (this->m_hash_table).m_ptr = (ushort *)0x0;
  }
  return;
}

// release @ 14f3468a0

void __thiscall oo2::FastCTMF<unsigned_int>::release(FastCTMF<unsigned_int> *this)

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

// release @ 14f346920

void __thiscall
oo2::vector_base<int,oo2::vector_storage_a<int>_>::release
          (vector_base<int,oo2::vector_storage_a<int>_> *this)

{
  this->m_size = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  return;
}

// release @ 14f346940

void __thiscall
oo2::vector_base<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>::release
          (vector_base<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>
           *this)

{
  this->m_size = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  return;
}

// release @ 14f346960

void __thiscall oo2::vector_storage_a<int>::release(vector_storage_a<int> *this)

{
  this->m_data = (void *)0x0;
  this->m_capacity = 0;
  return;
}

// release @ 14f346970

void __thiscall
oo2::vector_storage_a<oo2::newlz_encoder_parse>::release
          (vector_storage_a<oo2::newlz_encoder_parse> *this)

{
  this->m_data = (void *)0x0;
  this->m_capacity = 0;
  return;
}

// reserve @ 14f346980

void __thiscall
oo2::newlz_scratchblock::reserve(newlz_scratchblock *this,long64 param_1,rrArenaAllocator *param_2)

{
  extend(this,param_1,param_2);
  this->m_size = 0;
  return;
}

// reset @ 14f3469b0

void __thiscall oo2::CTMF<unsigned_int,1,0,4>::reset(CTMF<unsigned_int,1,0,4> *this)

{
  memset((this->m_hash_table).m_ptr,0,(1L << ((byte)this->m_table_size_bits & 0x3f)) << 2);
  return;
}

// reset @ 14f3469e0

void __thiscall oo2::CTMF<unsigned_int,2,8,4>::reset(CTMF<unsigned_int,2,8,4> *this)

{
  memset((this->m_hash_table).m_ptr,0,(1L << ((byte)this->m_table_size_bits & 0x3f)) << 2);
  return;
}

// reset @ 14f346a10

void __thiscall oo2::CTMF<unsigned_int,3,0,4>::reset(CTMF<unsigned_int,3,0,4> *this)

{
  memset((this->m_hash_table).m_ptr,0,(1L << ((byte)this->m_table_size_bits & 0x3f)) << 2);
  return;
}

// reset @ 14f346a40

void __thiscall oo2::FastCTMF<unsigned_short>::reset(FastCTMF<unsigned_short> *this)

{
  memset((this->m_hash_table).m_ptr,0,(1L << ((byte)this->m_table_size_bits & 0x3f)) * 2);
  return;
}

// reset @ 14f346a70

void __thiscall oo2::FastCTMF<unsigned_int>::reset(FastCTMF<unsigned_int> *this)

{
  memset((this->m_hash_table).m_ptr,0,(1L << ((byte)this->m_table_size_bits & 0x3f)) << 2);
  return;
}

// resize @ 14f346aa0

void __thiscall
oo2::vector_flex<int,oo2::vector_storage_a<int>_>::resize
          (vector_flex<int,oo2::vector_storage_a<int>_> *this,ulong64 param_1,int *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  
  uVar1 = *(ulonglong *)&this->field_0x10;
  if (param_1 < uVar1) {
    *(ulong64 *)&this->field_0x10 = param_1;
    return;
  }
  lVar6 = param_1 - uVar1;
  if (*(ulonglong *)&this->field_0x8 < uVar1 + lVar6) {
    iVar3 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h",0x3f,
                               "oo2::vector_storage_a<int>::needmakefit","newsize <= m_capacity");
    if (iVar3 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar5 = *(longlong *)&this->field_0x10;
  if (lVar6 != 0) {
    iVar3 = *param_2;
    piVar7 = (int *)(*(longlong *)this + lVar5 * 4);
    for (lVar4 = lVar6; lVar4 != 0; lVar4 = lVar4 + -1) {
      *piVar7 = iVar3;
      piVar7 = piVar7 + 1;
    }
    lVar5 = *(longlong *)&this->field_0x10;
  }
  *(longlong *)&this->field_0x10 = lVar5 + lVar6;
  return;
}

// rrAlignUp64 @ 14f346b50

ulong64 __cdecl oo2::rrAlignUp64(ulong64 param_1,long64 param_2)

{
  return (param_1 - 1) + param_2 & ~(param_2 - 1U);
}

// rrAlignUpA @ 14f346b70

long64 __cdecl oo2::rrAlignUpA(long64 param_1,long64 param_2)

{
  return param_1 + -1 + param_2 & ~(param_2 - 1U);
}

// rrAlignUpA @ 14f346b90

ulong64 __cdecl oo2::rrAlignUpA(ulong64 param_1,long64 param_2)

{
  return (param_1 - 1) + param_2 & ~(param_2 - 1U);
}

// rrCPUx86_feature_present @ 14f346bb0

int __cdecl oo2::rrCPUx86_feature_present(uint param_1)

{
  return g_rrCPUx86_feature_flags & param_1;
}

// rrClearLowestSetBit32 @ 14f346bc0

uint __cdecl oo2::rrClearLowestSetBit32(uint param_1)

{
  return param_1 - 1 & param_1;
}

// rrClz32 @ 14f346bd0

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

// rrCtz32 @ 14f346bf0

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

// rrCtz64 @ 14f346c00

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

// rrCtzBytes64 @ 14f346c10

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

// rrGetBitLevel_V @ 14f346c20

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

// rrGetBitLevel_V_NonZero @ 14f346c40

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

// rrPrintfKill @ 14f346c60

void __cdecl oo2::rrPrintfKill(char *param_1)

{
  return;
}

// rrPrintf_nop @ 14f346c80

void __cdecl oo2::rrPrintf_nop(void)

{
  return;
}

// rrPtrDiff32 @ 14f346c90

int __cdecl oo2::rrPtrDiff32(long64 param_1)

{
  return (int)param_1;
}

// rrPtrDiff @ 14f346ca0

long64 __cdecl oo2::rrPtrDiff(long64 param_1)

{
  return param_1;
}

// rrVarBits_CountBits_EliasGamma @ 14f346cb0

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

// rrVarBits_CountBits_ExpGolomb @ 14f346cd0

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

// rrsimd_has_sse4 @ 14f346cf0

int __cdecl oo2::rrsimd_has_sse4(void)

{
  return g_rrCPUx86_feature_flags & 8;
}

// second_hash_index @ 14f346d00

ulong64 __thiscall
oo2::CTMF<unsigned_int,1,0,4>::second_hash_index
          (CTMF<unsigned_int,1,0,4> *this,uint param_1,uchar *param_2)

{
  return 0;
}

// second_hash_index @ 14f346d10

ulong64 __thiscall
oo2::CTMF<unsigned_int,2,8,4>::second_hash_index
          (CTMF<unsigned_int,2,8,4> *this,uint param_1,uchar *param_2)

{
  return (ulonglong)(*(longlong *)param_2 * -0x30e44323485a9b9d) >>
         (0x40U - (char)this->m_table_size_bits & 0x3f) & 0xfffffffffffffffc;
}

// second_hash_index @ 14f346d40

ulong64 __thiscall
oo2::CTMF<unsigned_int,3,0,4>::second_hash_index
          (CTMF<unsigned_int,3,0,4> *this,uint param_1,uchar *param_2)

{
  return 0;
}

// set_base @ 14f346d50

void __thiscall
oo2::CTMF<unsigned_int,1,0,4>::set_base(CTMF<unsigned_int,1,0,4> *this,void *param_1)

{
  this->m_base_ptr = param_1;
  return;
}

// set_base @ 14f346d60

void __thiscall
oo2::CTMF<unsigned_int,2,8,4>::set_base(CTMF<unsigned_int,2,8,4> *this,void *param_1)

{
  this->m_base_ptr = param_1;
  return;
}

// set_base @ 14f346d70

void __thiscall
oo2::CTMF<unsigned_int,3,0,4>::set_base(CTMF<unsigned_int,3,0,4> *this,void *param_1)

{
  this->m_base_ptr = param_1;
  return;
}

// set_base @ 14f346d80

void __thiscall
oo2::FastCTMF<unsigned_short>::set_base(FastCTMF<unsigned_short> *this,void *param_1)

{
  this->m_base_ptr = param_1;
  return;
}

// set_base @ 14f346d90

void __thiscall oo2::FastCTMF<unsigned_int>::set_base(FastCTMF<unsigned_int> *this,void *param_1)

{
  this->m_base_ptr = param_1;
  return;
}

// set_base_and_preload @ 14f346da0

void __thiscall
oo2::CTMF<unsigned_int,1,0,4>::set_base_and_preload
          (CTMF<unsigned_int,1,0,4> *this,void *param_1,void *param_2,long64 param_3)

{
  uint *puVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  ulong64 uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  
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
  lVar10 = (longlong)param_2 - (longlong)param_1;
  if ((lVar10 < 1) &&
     (iVar4 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\ctmf.h",0xda,
                                 "oo2::CTMF<unsigned int,1,0,4>::set_base_and_preload",
                                 "preload_len > 0"), iVar4 != 0)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_3 < lVar10) {
    param_1 = (void *)((longlong)param_2 - param_3);
    lVar10 = param_3;
  }
  lVar9 = 2;
  if (2 < lVar10 >> 0x12) {
    lVar9 = lVar10 >> 0x12;
  }
  lVar10 = (lVar10 / 2) / lVar9;
  this->m_next_ptr = param_1;
  bVar3 = (byte)this->m_table_size_bits & 0x1f;
  uVar7 = (uint)(*(longlong *)param_1 * this->m_hash_mul >> 0x20);
  uVar7 = uVar7 << bVar3 | uVar7 >> 0x20 - bVar3;
  this->m_next_hash = uVar7;
  this->m_next_row = (this->m_hash_table).m_ptr + (uVar7 & this->m_hash_row_mask);
  do {
    lVar10 = lVar10 + -1;
    if (lVar10 < 1) {
      if (param_2 <= param_1) {
        if (fp_ThreadProfiler_Pop == (_func___cdecl_void_ulong64 *)0x0) {
          return;
        }
        (*fp_ThreadProfiler_Pop)(uVar6);
        return;
      }
      lVar9 = lVar9 >> 1;
      if ((lVar9 < 1) &&
         (iVar4 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\ctmf.h",0xed,
                                     "oo2::CTMF<unsigned int,1,0,4>::set_base_and_preload",
                                     "step >= 1"), iVar4 != 0)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar10 = ((longlong)param_2 - (longlong)param_1) / lVar9;
      if (1 < lVar9) {
        lVar10 = lVar10 / 2;
      }
    }
    iVar4 = *(int *)&this->m_base_ptr;
    iVar8 = (int)param_1;
    puVar1 = this->m_next_row;
    uVar7 = this->m_next_hash;
    param_1 = (void *)((longlong)param_1 + lVar9);
    this->m_next_ptr = param_1;
    bVar3 = (byte)this->m_table_size_bits & 0x1f;
    uVar5 = (uint)(*(longlong *)param_1 * this->m_hash_mul >> 0x20);
    uVar5 = uVar5 << bVar3 | uVar5 >> 0x20 - bVar3;
    this->m_next_hash = uVar5;
    this->m_next_row = (this->m_hash_table).m_ptr + (uVar5 & this->m_hash_row_mask);
    puVar1[1] = *puVar1;
    *puVar1 = (uVar7 ^ iVar8 - iVar4) & 0x3ffffff ^ uVar7;
  } while( true );
}

// set_base_and_preload @ 14f346fa0

/* WARNING: Removing unreachable block (ram,0x00014f3471a2) */
/* WARNING: Removing unreachable block (ram,0x00014f3471b3) */

void __thiscall
oo2::CTMF<unsigned_int,2,8,4>::set_base_and_preload
          (CTMF<unsigned_int,2,8,4> *this,void *param_1,void *param_2,long64 param_3)

{
  uint *puVar1;
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  code *pcVar4;
  byte bVar5;
  int iVar6;
  ulong64 uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  this->m_base_ptr = param_1;
  if (param_2 == param_1) {
    return;
  }
  if (fp_ThreadProfiler_Push == (_func___cdecl_ulong64_char_ptr_ulong64 *)0x0) {
    uVar7 = 0xffffffffffffffff;
  }
  else {
    uVar7 = (*fp_ThreadProfiler_Push)("ctmf_preload",0);
  }
  lVar11 = (longlong)param_2 - (longlong)param_1;
  if ((lVar11 < 1) &&
     (iVar6 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\ctmf.h",0xda,
                                 "oo2::CTMF<unsigned int,2,8,4>::set_base_and_preload",
                                 "preload_len > 0"), iVar6 != 0)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (param_3 < lVar11) {
    param_1 = (void *)((longlong)param_2 - param_3);
    lVar11 = param_3;
  }
  lVar10 = 2;
  if (2 < lVar11 >> 0x12) {
    lVar10 = lVar11 >> 0x12;
  }
  lVar11 = (lVar11 / 2) / lVar10;
  this->m_next_ptr = param_1;
  bVar5 = (byte)this->m_table_size_bits & 0x1f;
  uVar8 = (uint)(*(longlong *)param_1 * this->m_hash_mul >> 0x20);
  uVar8 = uVar8 << bVar5 | uVar8 >> 0x20 - bVar5;
  this->m_next_hash = uVar8;
  puVar1 = (this->m_hash_table).m_ptr;
  this->m_next_row = puVar1 + (uVar8 & this->m_hash_row_mask);
  this->m_next_row_second =
       puVar1 + ((ulonglong)(*(longlong *)param_1 * -0x30e44323485a9b9d) >>
                 (0x40U - (char)this->m_table_size_bits & 0x3f) & 0xfffffffffffffffc);
  do {
    lVar11 = lVar11 + -1;
    if (lVar11 < 1) {
      if (param_2 <= param_1) {
        if (fp_ThreadProfiler_Pop == (_func___cdecl_void_ulong64 *)0x0) {
          return;
        }
        (*fp_ThreadProfiler_Pop)(uVar7);
        return;
      }
      lVar10 = lVar10 >> 1;
      if ((lVar10 < 1) &&
         (iVar6 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\ctmf.h",0xed,
                                     "oo2::CTMF<unsigned int,2,8,4>::set_base_and_preload",
                                     "step >= 1"), iVar6 != 0)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar11 = ((longlong)param_2 - (longlong)param_1) / lVar10;
      if (1 < lVar10) {
        lVar11 = lVar11 / 2;
      }
    }
    iVar6 = (int)param_1;
    pauVar2 = (undefined1 (*) [16])this->m_next_row;
    pauVar3 = (undefined1 (*) [16])this->m_next_row_second;
    uVar8 = this->m_next_hash;
    param_1 = (void *)((longlong)param_1 + lVar10);
    this->m_next_ptr = param_1;
    bVar5 = (byte)this->m_table_size_bits & 0x1f;
    uVar9 = (uint)(*(longlong *)param_1 * this->m_hash_mul >> 0x20);
    uVar9 = uVar9 << bVar5 | uVar9 >> 0x20 - bVar5;
    this->m_next_hash = uVar9;
    puVar1 = (this->m_hash_table).m_ptr;
    this->m_next_row = puVar1 + (uVar9 & this->m_hash_row_mask);
    this->m_next_row_second =
         puVar1 + ((ulonglong)(*(longlong *)param_1 * -0x30e44323485a9b9d) >>
                   (0x40U - (char)this->m_table_size_bits & 0x3f) & 0xfffffffffffffffc);
    auVar14 = ZEXT416((uVar8 ^ iVar6 - *(int *)&this->m_base_ptr) & 0x3ffffff ^ uVar8);
    auVar12._0_8_ = *(ulonglong *)*pauVar2 << 0x20;
    auVar12._8_8_ = *(longlong *)((longlong)*pauVar2 + 8) << 0x20 | *(ulonglong *)*pauVar2 >> 0x20;
    *pauVar2 = auVar12 | auVar14;
    auVar13._0_8_ = *(ulonglong *)*pauVar3 << 0x20;
    auVar13._8_8_ = *(longlong *)((longlong)*pauVar3 + 8) << 0x20 | *(ulonglong *)*pauVar3 >> 0x20;
    *pauVar3 = auVar13 | auVar14;
  } while( true );
}

// set_base_and_preload @ 14f347200

void __thiscall
oo2::CTMF<unsigned_int,3,0,4>::set_base_and_preload
          (CTMF<unsigned_int,3,0,4> *this,void *param_1,void *param_2,long64 param_3)

{
  uint *puVar1;
  code *pcVar2;
  byte bVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  ulong64 uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  
  this->m_base_ptr = param_1;
  if (param_2 == param_1) {
    return;
  }
  if (fp_ThreadProfiler_Push == (_func___cdecl_ulong64_char_ptr_ulong64 *)0x0) {
    uVar7 = 0xffffffffffffffff;
  }
  else {
    uVar7 = (*fp_ThreadProfiler_Push)("ctmf_preload",0);
  }
  lVar11 = (longlong)param_2 - (longlong)param_1;
  if ((lVar11 < 1) &&
     (iVar5 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\ctmf.h",0xda,
                                 "oo2::CTMF<unsigned int,3,0,4>::set_base_and_preload",
                                 "preload_len > 0"), iVar5 != 0)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_3 < lVar11) {
    param_1 = (void *)((longlong)param_2 - param_3);
    lVar11 = param_3;
  }
  lVar10 = 2;
  if (2 < lVar11 >> 0x12) {
    lVar10 = lVar11 >> 0x12;
  }
  lVar11 = (lVar11 / 2) / lVar10;
  this->m_next_ptr = param_1;
  bVar3 = (byte)this->m_table_size_bits & 0x1f;
  uVar8 = (uint)(*(longlong *)param_1 * this->m_hash_mul >> 0x20);
  uVar8 = uVar8 << bVar3 | uVar8 >> 0x20 - bVar3;
  this->m_next_hash = uVar8;
  this->m_next_row = (this->m_hash_table).m_ptr + (uVar8 & this->m_hash_row_mask);
  do {
    lVar11 = lVar11 + -1;
    if (lVar11 < 1) {
      if (param_2 <= param_1) {
        if (fp_ThreadProfiler_Pop == (_func___cdecl_void_ulong64 *)0x0) {
          return;
        }
        (*fp_ThreadProfiler_Pop)(uVar7);
        return;
      }
      lVar10 = lVar10 >> 1;
      if ((lVar10 < 1) &&
         (iVar5 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\ctmf.h",0xed,
                                     "oo2::CTMF<unsigned int,3,0,4>::set_base_and_preload",
                                     "step >= 1"), iVar5 != 0)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar11 = ((longlong)param_2 - (longlong)param_1) / lVar10;
      if (1 < lVar10) {
        lVar11 = lVar11 / 2;
      }
    }
    iVar5 = *(int *)&this->m_base_ptr;
    iVar9 = (int)param_1;
    puVar1 = this->m_next_row;
    uVar8 = this->m_next_hash;
    param_1 = (void *)((longlong)param_1 + lVar10);
    this->m_next_ptr = param_1;
    bVar3 = (byte)this->m_table_size_bits & 0x1f;
    uVar6 = (uint)(*(longlong *)param_1 * this->m_hash_mul >> 0x20);
    uVar6 = uVar6 << bVar3 | uVar6 >> 0x20 - bVar3;
    this->m_next_hash = uVar6;
    this->m_next_row = (this->m_hash_table).m_ptr + (uVar6 & this->m_hash_row_mask);
    uVar4 = *(undefined8 *)(puVar1 + 3);
    *(undefined8 *)(puVar1 + 1) = *(undefined8 *)puVar1;
    *(undefined8 *)(puVar1 + 3) = *(undefined8 *)(puVar1 + 2);
    *(undefined8 *)(puVar1 + 4) = uVar4;
    *(undefined8 *)(puVar1 + 6) = *(undefined8 *)(puVar1 + 5);
    *puVar1 = (uVar8 ^ iVar9 - iVar5) & 0x3ffffff ^ uVar8;
  } while( true );
}

// set_base_and_preload @ 14f347400

void __thiscall
oo2::FastCTMF<unsigned_short>::set_base_and_preload
          (FastCTMF<unsigned_short> *this,void *param_1,void *param_2,long64 param_3)

{
  int iVar1;
  ushort *puVar2;
  ulong64 uVar3;
  code *pcVar4;
  int iVar5;
  ulong64 uVar6;
  longlong lVar7;
  longlong lVar8;
  short sVar9;
  
  this->m_base_ptr = param_1;
  if (param_2 <= param_1) {
    return;
  }
  if (fp_ThreadProfiler_Push == (_func___cdecl_ulong64_char_ptr_ulong64 *)0x0) {
    uVar6 = 0xffffffffffffffff;
    sVar9 = (short)param_1;
  }
  else {
    uVar6 = (*fp_ThreadProfiler_Push)("fastctmf_preload",0);
    sVar9 = (short)this->m_base_ptr;
  }
  lVar7 = (longlong)param_2 - (longlong)param_1;
  if (param_3 < (longlong)param_2 - (longlong)param_1) {
    param_1 = (void *)((longlong)param_2 - param_3);
    lVar7 = param_3;
  }
  lVar8 = 2;
  if (2 < lVar7 >> 0x12) {
    lVar8 = lVar7 >> 0x12;
  }
  lVar7 = (lVar7 / 2) / lVar8;
  puVar2 = (this->m_hash_table).m_ptr;
  uVar3 = this->m_hash_mul;
  iVar1 = this->m_hash_shift;
  do {
    lVar7 = lVar7 + -1;
    if (lVar7 < 1) {
      if (param_2 <= param_1) {
        if (fp_ThreadProfiler_Pop == (_func___cdecl_void_ulong64 *)0x0) {
          return;
        }
        (*fp_ThreadProfiler_Pop)(uVar6);
        return;
      }
      lVar8 = lVar8 >> 1;
      if ((lVar8 < 1) &&
         (iVar5 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\ctmf.h",0x4f4,
                                     "oo2::FastCTMF<unsigned short>::set_base_and_preload",
                                     "step >= 1"), iVar5 != 0)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar7 = ((longlong)param_2 - (longlong)param_1) / lVar8;
      if (1 < lVar8) {
        lVar7 = lVar7 / 2;
      }
    }
    puVar2[uVar3 * *(longlong *)param_1 >> ((byte)iVar1 & 0x3f)] = (short)param_1 - sVar9;
    param_1 = (void *)((longlong)param_1 + lVar8);
  } while( true );
}

// set_base_and_preload @ 14f347580

void __thiscall
oo2::FastCTMF<unsigned_int>::set_base_and_preload
          (FastCTMF<unsigned_int> *this,void *param_1,void *param_2,long64 param_3)

{
  int iVar1;
  uint *puVar2;
  ulong64 uVar3;
  code *pcVar4;
  int iVar5;
  ulong64 uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  
  this->m_base_ptr = param_1;
  if (param_2 <= param_1) {
    return;
  }
  if (fp_ThreadProfiler_Push == (_func___cdecl_ulong64_char_ptr_ulong64 *)0x0) {
    uVar6 = 0xffffffffffffffff;
    iVar9 = (int)param_1;
  }
  else {
    uVar6 = (*fp_ThreadProfiler_Push)("fastctmf_preload",0);
    iVar9 = (int)this->m_base_ptr;
  }
  lVar7 = (longlong)param_2 - (longlong)param_1;
  if (param_3 < (longlong)param_2 - (longlong)param_1) {
    param_1 = (void *)((longlong)param_2 - param_3);
    lVar7 = param_3;
  }
  lVar8 = 2;
  if (2 < lVar7 >> 0x12) {
    lVar8 = lVar7 >> 0x12;
  }
  lVar7 = (lVar7 / 2) / lVar8;
  puVar2 = (this->m_hash_table).m_ptr;
  uVar3 = this->m_hash_mul;
  iVar1 = this->m_hash_shift;
  do {
    lVar7 = lVar7 + -1;
    if (lVar7 < 1) {
      if (param_2 <= param_1) {
        if (fp_ThreadProfiler_Pop == (_func___cdecl_void_ulong64 *)0x0) {
          return;
        }
        (*fp_ThreadProfiler_Pop)(uVar6);
        return;
      }
      lVar8 = lVar8 >> 1;
      if ((lVar8 < 1) &&
         (iVar5 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\ctmf.h",0x4f4,
                                     "oo2::FastCTMF<unsigned int>::set_base_and_preload","step >= 1"
                                    ), iVar5 != 0)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar7 = ((longlong)param_2 - (longlong)param_1) / lVar8;
      if (1 < lVar8) {
        lVar7 = lVar7 / 2;
      }
    }
    puVar2[uVar3 * *(longlong *)param_1 >> ((byte)iVar1 & 0x3f)] = (int)param_1 - iVar9;
    param_1 = (void *)((longlong)param_1 + lVar8);
  } while( true );
}

// set_lo @ 14f3476f0

void __thiscall
oo2::newlz_optimal_arrival_tll::set_lo
          (newlz_optimal_arrival_tll *this,int param_1,int param_2,int param_3,int param_4,
          int param_5,newLZ_LOs_NoPad *param_6)

{
  int iVar1;
  int *piVar2;
  
  this->lrl = param_3;
  this->ml = param_4;
  piVar2 = param_6->lasts + 2;
  if (param_5 == 0) {
    (this->los).lasts[0] = param_6->lasts[0];
    (this->los).lasts[1] = param_6->lasts[1];
    (this->los).lasts[2] = *piVar2;
    (this->field3_0x14).is_twostep = 0;
    this->prev_index = param_1;
    return;
  }
  if (param_5 == 1) {
    iVar1 = param_6->lasts[1];
  }
  else {
    iVar1 = *piVar2;
    piVar2 = param_6->lasts + 1;
  }
  (this->los).lasts[0] = iVar1;
  (this->los).lasts[1] = param_6->lasts[0];
  (this->los).lasts[2] = *piVar2;
  (this->field3_0x14).is_twostep = 0;
  this->prev_index = param_1;
  return;
}

// set_match @ 14f347760

void __thiscall
oo2::newlz_optimal_arrival_tll::set_match
          (newlz_optimal_arrival_tll *this,int param_1,int param_2,int param_3,int param_4,
          int param_5,newLZ_LOs_NoPad *param_6)

{
  this->ml = param_4;
  this->lrl = param_3;
  (this->los).lasts[0] = param_5;
  (this->los).lasts[1] = param_6->lasts[0];
  (this->los).lasts[2] = param_6->lasts[1];
  (this->field3_0x14).is_twostep = 0;
  this->prev_index = param_1;
  return;
}

// set_next @ 14f3477a0

void __thiscall
oo2::CTMF<unsigned_int,1,0,4>::set_next(CTMF<unsigned_int,1,0,4> *this,uchar *param_1)

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

// set_next @ 14f3477e0

void __thiscall
oo2::CTMF<unsigned_int,2,8,4>::set_next(CTMF<unsigned_int,2,8,4> *this,uchar *param_1)

{
  uint *puVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  
  this->m_next_ptr = param_1;
  puVar1 = (this->m_hash_table).m_ptr;
  bVar3 = (byte)this->m_table_size_bits;
  bVar2 = bVar3 & 0x1f;
  uVar4 = (uint)(this->m_hash_mul * *(longlong *)param_1 >> 0x20);
  uVar4 = uVar4 << bVar2 | uVar4 >> 0x20 - bVar2;
  this->m_next_hash = uVar4;
  this->m_next_row = puVar1 + (this->m_hash_row_mask & uVar4);
  this->m_next_row_second =
       puVar1 + ((ulonglong)(*(longlong *)param_1 * -0x30e44323485a9b9d) >> (0x40 - bVar3 & 0x3f) &
                0xfffffffffffffffc);
  return;
}

// set_next @ 14f347860

void __thiscall
oo2::CTMF<unsigned_int,3,0,4>::set_next(CTMF<unsigned_int,3,0,4> *this,uchar *param_1)

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

// shrink @ 14f3478a0

void __thiscall
oo2::vector_base<int,oo2::vector_storage_a<int>_>::shrink
          (vector_base<int,oo2::vector_storage_a<int>_> *this,ulong64 param_1)

{
  this->m_size = param_1;
  return;
}

// shrink @ 14f3478b0

void __thiscall
oo2::vector_base<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>::shrink
          (vector_base<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>
           *this,ulong64 param_1)

{
  this->m_size = param_1;
  return;
}

// size @ 14f3478c0

ulong64 __thiscall
oo2::vector_base<int,oo2::vector_storage_a<int>_>::size
          (vector_base<int,oo2::vector_storage_a<int>_> *this)

{
  return this->m_size;
}

// size @ 14f3478d0

ulong64 __thiscall
oo2::vector_base<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>::size
          (vector_base<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>
           *this)

{
  return this->m_size;
}

// size @ 14f3478e0

ulong64 __thiscall
oo2::vector_flex<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>::size
          (vector_flex<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>
           *this)

{
  return *(ulong64 *)&this->field_0x10;
}

// size @ 14f3478f0

long64 __cdecl oo2::newlz_optimal_arrivals_tll::size(long64 param_1)

{
  return param_1 << 5;
}

// sizea @ 14f347900

long64 __thiscall
oo2::vector_flex<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>::sizea
          (vector_flex<oo2::newlz_encoder_parse,oo2::vector_storage_a<oo2::newlz_encoder_parse>_>
           *this)

{
  return *(long64 *)&this->field_0x10;
}

// step_and_insert @ 14f347920

void __thiscall
oo2::CTMF<unsigned_int,1,0,4>::step_and_insert
          (CTMF<unsigned_int,1,0,4> *this,uchar *param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  uint uVar7;
  ulong64 uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  
  plVar3 = (longlong *)this->m_next_ptr;
  plVar1 = (longlong *)(param_1 + param_2);
  if (plVar3 < plVar1) {
    iVar2 = *(int *)&this->m_base_ptr;
    uVar7 = this->m_next_hash;
    puVar4 = this->m_next_row;
    uVar9 = this->m_next_hash;
    puVar4[1] = *puVar4;
    *puVar4 = ((int)plVar3 - iVar2 ^ uVar7) & 0x3ffffff ^ uVar9;
    iVar10 = (*(int *)&this->m_next_ptr - (int)param_1) + 1;
    if (iVar10 < param_2) {
      lVar11 = (longlong)iVar10;
      do {
        plVar3 = (longlong *)(param_1 + lVar11);
        lVar11 = lVar11 * 2;
        bVar6 = (byte)this->m_table_size_bits & 0x1f;
        uVar7 = (uint)(*plVar3 * this->m_hash_mul >> 0x20);
        uVar9 = uVar7 << bVar6 | uVar7 >> 0x20 - bVar6;
        puVar5 = (this->m_hash_table).m_ptr;
        uVar7 = this->m_hash_row_mask & uVar9;
        puVar4 = puVar5 + uVar7;
        puVar4[1] = puVar5[uVar7];
        uVar7 = ((int)param_1 - iVar2) + iVar10;
        iVar10 = iVar10 * 2;
        *puVar4 = (uVar7 ^ uVar9) & 0x3ffffff ^ uVar9;
      } while (iVar10 < param_2);
    }
    uVar8 = this->m_hash_mul;
    bVar6 = (byte)this->m_table_size_bits;
    this->m_next_ptr = (uchar *)plVar1;
  }
  else {
    if (plVar3 == plVar1) {
      return;
    }
    uVar8 = this->m_hash_mul;
    this->m_next_ptr = (uchar *)plVar1;
    bVar6 = (byte)this->m_table_size_bits;
  }
  uVar7 = (uint)(uVar8 * *plVar1 >> 0x20);
  uVar7 = uVar7 << (bVar6 & 0x1f) | uVar7 >> 0x20 - (bVar6 & 0x1f);
  this->m_next_hash = uVar7;
  this->m_next_row = (this->m_hash_table).m_ptr + (this->m_hash_row_mask & uVar7);
  return;
}

// step_and_insert @ 14f347a40

/* WARNING: Removing unreachable block (ram,0x00014f347b2f) */
/* WARNING: Removing unreachable block (ram,0x00014f347ac5) */
/* WARNING: Removing unreachable block (ram,0x00014f347a99) */

void __thiscall
oo2::CTMF<unsigned_int,2,8,4>::step_and_insert
          (CTMF<unsigned_int,2,8,4> *this,uchar *param_1,int param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 (*pauVar5) [16];
  uint *puVar6;
  uint uVar7;
  ulonglong uVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  ulong64 uVar12;
  int iVar13;
  longlong lVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  plVar4 = (longlong *)this->m_next_ptr;
  plVar1 = (longlong *)(param_1 + param_2);
  if (plVar4 < plVar1) {
    pauVar5 = (undefined1 (*) [16])this->m_next_row;
    iVar3 = *(int *)&this->m_base_ptr;
    auVar15._0_8_ = *(ulonglong *)*pauVar5 << 0x20;
    auVar15._8_8_ = *(longlong *)((longlong)*pauVar5 + 8) << 0x20 | *(ulonglong *)*pauVar5 >> 0x20;
    *pauVar5 = ZEXT416(((int)plVar4 - iVar3 ^ this->m_next_hash) & 0x3ffffff ^ this->m_next_hash) |
               auVar15;
    pauVar5 = (undefined1 (*) [16])this->m_next_row_second;
    auVar16._0_8_ = *(ulonglong *)*pauVar5 << 0x20;
    auVar16._8_8_ = *(longlong *)((longlong)*pauVar5 + 8) << 0x20 | *(ulonglong *)*pauVar5 >> 0x20;
    *pauVar5 = ZEXT416((*(int *)&this->m_next_ptr - iVar3 ^ this->m_next_hash) & 0x3ffffff ^
                       this->m_next_hash) | auVar16;
    iVar13 = (*(int *)&this->m_next_ptr - (int)param_1) + 1;
    if (iVar13 < param_2) {
      lVar14 = (longlong)iVar13;
      do {
        plVar4 = (longlong *)(param_1 + lVar14);
        lVar14 = lVar14 * 2;
        bVar9 = (byte)this->m_table_size_bits & 0x1f;
        uVar11 = (uint)(*plVar4 * this->m_hash_mul >> 0x20);
        uVar10 = uVar11 << bVar9 | uVar11 >> 0x20 - bVar9;
        uVar7 = uVar10 & this->m_hash_row_mask;
        puVar6 = (this->m_hash_table).m_ptr;
        puVar2 = (ulonglong *)(puVar6 + uVar7);
        uVar8 = *puVar2;
        uVar11 = ((int)param_1 - iVar3) + iVar13;
        auVar17._0_8_ = uVar8 << 0x20;
        auVar17._8_8_ = puVar2[1] << 0x20 | uVar8 >> 0x20;
        iVar13 = iVar13 * 2;
        *(undefined1 (*) [16])(puVar6 + uVar7) =
             ZEXT416((uVar11 ^ uVar10) & 0x3ffffff ^ uVar10) | auVar17;
      } while (iVar13 < param_2);
    }
    uVar12 = this->m_hash_mul;
    bVar9 = (byte)this->m_table_size_bits;
    this->m_next_ptr = (uchar *)plVar1;
  }
  else {
    if (plVar4 == plVar1) {
      return;
    }
    uVar12 = this->m_hash_mul;
    this->m_next_ptr = (uchar *)plVar1;
    bVar9 = (byte)this->m_table_size_bits;
  }
  puVar6 = (this->m_hash_table).m_ptr;
  uVar11 = (uint)(uVar12 * *plVar1 >> 0x20);
  uVar11 = uVar11 << (bVar9 & 0x1f) | uVar11 >> 0x20 - (bVar9 & 0x1f);
  this->m_next_hash = uVar11;
  this->m_next_row = puVar6 + (this->m_hash_row_mask & uVar11);
  this->m_next_row_second =
       puVar6 + ((ulonglong)(*plVar1 * -0x30e44323485a9b9d) >>
                 (0x40U - (char)this->m_table_size_bits & 0x3f) & 0xfffffffffffffffc);
  return;
}

// step_and_insert @ 14f347bc0

void __thiscall
oo2::CTMF<unsigned_int,3,0,4>::step_and_insert
          (CTMF<unsigned_int,3,0,4> *this,uchar *param_1,int param_2)

{
  longlong *plVar1;
  uint *puVar2;
  int iVar3;
  longlong *plVar4;
  uint *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte bVar8;
  uint uVar9;
  ulonglong uVar10;
  ulong64 uVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  
  plVar4 = (longlong *)this->m_next_ptr;
  plVar1 = (longlong *)(param_1 + param_2);
  if (plVar4 < plVar1) {
    puVar5 = this->m_next_row;
    iVar3 = *(int *)&this->m_base_ptr;
    uVar9 = this->m_next_hash;
    uVar12 = this->m_next_hash;
    uVar6 = *(undefined8 *)(puVar5 + 3);
    *(undefined8 *)(puVar5 + 1) = *(undefined8 *)puVar5;
    *(undefined8 *)(puVar5 + 3) = *(undefined8 *)(puVar5 + 2);
    *(undefined8 *)(puVar5 + 4) = uVar6;
    *(undefined8 *)(puVar5 + 6) = *(undefined8 *)(puVar5 + 5);
    *puVar5 = ((int)plVar4 - iVar3 ^ uVar9) & 0x3ffffff ^ uVar12;
    iVar13 = (*(int *)&this->m_next_ptr - (int)param_1) + 1;
    if (iVar13 < param_2) {
      lVar14 = (longlong)iVar13;
      do {
        plVar4 = (longlong *)(param_1 + lVar14);
        lVar14 = lVar14 * 2;
        bVar8 = (byte)this->m_table_size_bits & 0x1f;
        uVar9 = (uint)(*plVar4 * this->m_hash_mul >> 0x20);
        uVar12 = uVar9 << bVar8 | uVar9 >> 0x20 - bVar8;
        puVar5 = (this->m_hash_table).m_ptr;
        uVar10 = (ulonglong)(this->m_hash_row_mask & uVar12);
        puVar2 = puVar5 + uVar10 + 3;
        uVar6 = *(undefined8 *)puVar2;
        uVar7 = *(undefined8 *)(puVar2 + 2);
        puVar5 = puVar5 + uVar10;
        uVar9 = ((int)param_1 - iVar3) + iVar13;
        iVar13 = iVar13 * 2;
        *(undefined8 *)(puVar5 + 1) = *(undefined8 *)puVar5;
        *(undefined8 *)(puVar5 + 3) = *(undefined8 *)(puVar5 + 2);
        *(undefined8 *)(puVar5 + 4) = uVar6;
        *(undefined8 *)(puVar5 + 6) = uVar7;
        *puVar5 = (uVar9 ^ uVar12) & 0x3ffffff ^ uVar12;
      } while (iVar13 < param_2);
    }
    uVar11 = this->m_hash_mul;
    bVar8 = (byte)this->m_table_size_bits;
    this->m_next_ptr = (uchar *)plVar1;
  }
  else {
    if (plVar4 == plVar1) {
      return;
    }
    uVar11 = this->m_hash_mul;
    this->m_next_ptr = (uchar *)plVar1;
    bVar8 = (byte)this->m_table_size_bits;
  }
  uVar9 = (uint)(uVar11 * *plVar1 >> 0x20);
  uVar9 = uVar9 << (bVar8 & 0x1f) | uVar9 >> 0x20 - (bVar8 & 0x1f);
  this->m_next_hash = uVar9;
  this->m_next_row = (this->m_hash_table).m_ptr + (this->m_hash_row_mask & uVar9);
  return;
}

// try_lo_arrival_tll @ 14f347d00

int __cdecl
oo2::try_lo_arrival_tll
          (newlz_optimal_arrivals_tll *param_1,int param_2,int param_3,uchar *param_4,int *param_5,
          int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,
          newLZ_LOs_NoPad *param_12,newlz_codecosts *param_13)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uchar *puVar5;
  newlz_optimal_arrival_tll *pnVar6;
  int *piVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  newlz_optimal_arrivals_tll *pnVar11;
  uchar *puVar12;
  int iVar13;
  longlong lVar14;
  
  lVar14 = (longlong)param_10;
  iVar10 = param_10 + -0x11;
  pnVar11 = param_1;
  if (iVar10 < 0) {
    iVar10 = param_13->codecost_packet[param_9 + (param_11 * 0x10 + param_10) * 4 + -8];
  }
  else {
    iVar2 = param_11 * 0x40 + param_9;
    if (iVar10 < 0xff) {
      iVar10 = param_13->codecost_offset2[lVar14 + 0xef];
    }
    else {
      iVar10 = cost_excess_huge(iVar10,param_13);
    }
    iVar10 = param_13->codecost_packet[(longlong)iVar2 + 0x3c] + iVar10;
  }
  iVar10 = param_7 + iVar10;
  piVar4 = pnVar11->costs;
  iVar2 = param_6 + param_10;
  if (param_2 == 1) {
    if (iVar10 < piVar4[iVar2]) {
      piVar4[iVar2] = iVar10;
      piVar4 = param_12->lasts + 2;
      pnVar6 = pnVar11->payloads + iVar2;
      pnVar6->ml = param_10;
      pnVar6->lrl = param_8;
      if (param_11 == 0) {
        (pnVar6->los).lasts[0] = param_12->lasts[0];
        iVar2 = param_12->lasts[1];
      }
      else {
        if (param_11 == 1) {
          (pnVar6->los).lasts[0] = param_12->lasts[1];
        }
        else {
          (pnVar6->los).lasts[0] = *piVar4;
          piVar4 = param_12->lasts + 1;
        }
        iVar2 = param_12->lasts[0];
      }
      (pnVar6->los).lasts[1] = iVar2;
      (pnVar6->los).lasts[2] = *piVar4;
      (pnVar6->field3_0x14).is_twostep = 0;
      pnVar6->prev_index = param_3;
    }
    return iVar10;
  }
  iVar2 = iVar2 * param_2;
  if (iVar10 < piVar4[iVar2]) {
    piVar4[iVar2] = iVar10;
    piVar4 = param_12->lasts + 2;
    pnVar6 = pnVar11->payloads + iVar2;
    pnVar6->ml = param_10;
    pnVar6->lrl = param_8;
    if (param_11 == 0) {
      (pnVar6->los).lasts[0] = param_12->lasts[0];
      iVar2 = param_12->lasts[1];
    }
    else {
      if (param_11 == 1) {
        iVar2 = param_12->lasts[1];
      }
      else {
        iVar2 = *piVar4;
        piVar4 = param_12->lasts + 1;
      }
      (pnVar6->los).lasts[0] = iVar2;
      iVar2 = param_12->lasts[0];
    }
    (pnVar6->los).lasts[1] = iVar2;
    (pnVar6->los).lasts[2] = *piVar4;
    (pnVar6->field3_0x14).is_twostep = 0;
    pnVar6->prev_index = param_3;
  }
  iVar2 = param_12->lasts[param_11];
  lVar1 = param_6 + lVar14;
  iVar9 = 1;
  puVar12 = param_4 + lVar1;
  lVar8 = (lVar1 + 1) * (longlong)param_2;
  piVar4 = param_5 + lVar1 + 1;
  iVar13 = iVar10;
  do {
    puVar5 = puVar12 + lVar8 + (((1 - (longlong)param_6) - lVar14) - (longlong)param_4);
    iVar13 = iVar13 + param_13->codecost_literal
                      [(byte)(*puVar12 -
                             (puVar12[-(longlong)iVar2] & (byte)param_13->subliteralmask))];
    if (iVar13 < param_1->costs[(longlong)puVar5]) {
      param_1->costs[(longlong)puVar5] = iVar13;
      piVar7 = param_12->lasts + 2;
      pnVar6 = param_1->payloads + (longlong)puVar5;
      pnVar6->ml = param_10;
      pnVar6->lrl = param_8;
      if (param_11 == 0) {
        (pnVar6->los).lasts[0] = param_12->lasts[0];
        iVar3 = param_12->lasts[1];
      }
      else {
        if (param_11 == 1) {
          iVar3 = param_12->lasts[1];
        }
        else {
          iVar3 = *piVar7;
          piVar7 = param_12->lasts + 1;
        }
        (pnVar6->los).lasts[0] = iVar3;
        iVar3 = param_12->lasts[0];
      }
      (pnVar6->los).lasts[1] = iVar3;
      (pnVar6->los).lasts[2] = *piVar7;
      pnVar6->prev_index = param_3;
      (pnVar6->field3_0x14).is_twostep = 0;
      if (iVar9 == param_2 + -1) {
        *piVar4 = iVar9;
      }
    }
    iVar9 = iVar9 + 1;
    puVar12 = puVar12 + 1;
    lVar8 = lVar8 + param_2;
    piVar4 = piVar4 + 1;
  } while (iVar9 < param_2);
  return iVar10;
}

// try_match_arrival_tll @ 14f348000

int __cdecl
oo2::try_match_arrival_tll
          (newlz_optimal_arrivals_tll *param_1,int param_2,int param_3,uchar *param_4,int *param_5,
          int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,
          newLZ_LOs_NoPad *param_12,newlz_codecosts *param_13)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  newlz_optimal_arrival_tll *pnVar7;
  uchar *puVar8;
  int iVar9;
  int iVar10;
  
  lVar5 = (longlong)param_10;
  iVar4 = param_10 + -0x11;
  iVar9 = param_3;
  if (iVar4 < 0) {
    iVar4 = param_13->codecost_packet[param_9 + param_10 * 4 + 0xb8];
  }
  else {
    if (iVar4 < 0xff) {
      iVar4 = param_13->codecost_offset2[lVar5 + 0xef];
    }
    else {
      iVar4 = cost_excess_huge(iVar4,param_13);
    }
    iVar4 = param_13->codecost_packet[(longlong)param_9 + 0xfc] + iVar4;
  }
  iVar4 = param_7 + iVar4;
  piVar6 = param_1->costs;
  iVar10 = param_6 + param_10;
  if (param_2 == 1) {
    if (iVar4 < piVar6[iVar10]) {
      piVar6[iVar10] = iVar4;
      pnVar7 = param_1->payloads + iVar10;
      pnVar7->lrl = param_8;
      (pnVar7->los).lasts[0] = param_11;
      pnVar7->ml = param_10;
      (pnVar7->los).lasts[1] = param_12->lasts[0];
      (pnVar7->los).lasts[2] = param_12->lasts[1];
      (pnVar7->field3_0x14).is_twostep = 0;
      pnVar7->prev_index = iVar9;
    }
    return iVar4;
  }
  iVar3 = iVar10 * param_2;
  if (iVar4 < piVar6[iVar3]) {
    piVar6[iVar3] = iVar4;
    pnVar7 = param_1->payloads + iVar3;
    pnVar7->lrl = param_8;
    (pnVar7->los).lasts[0] = param_11;
    pnVar7->ml = param_10;
    (pnVar7->los).lasts[1] = param_12->lasts[0];
    (pnVar7->los).lasts[2] = param_12->lasts[1];
    (pnVar7->field3_0x14).is_twostep = 0;
    pnVar7->prev_index = iVar9;
  }
  lVar2 = param_6 + lVar5;
  iVar3 = 1;
  iVar10 = (iVar10 + 1) * param_2;
  piVar6 = param_5 + lVar2 + 1;
  puVar8 = param_4 + lVar2;
  iVar9 = iVar4;
  do {
    iVar9 = iVar9 + param_13->codecost_literal
                    [(byte)(*puVar8 - (puVar8[-(longlong)param_11] & (byte)param_13->subliteralmask)
                           )];
    iVar1 = iVar10 + iVar3;
    if (iVar9 < param_1->costs[iVar1]) {
      param_1->costs[iVar1] = iVar9;
      pnVar7 = param_1->payloads + iVar1;
      pnVar7->lrl = param_8;
      (pnVar7->los).lasts[0] = param_11;
      pnVar7->ml = param_10;
      (pnVar7->los).lasts[1] = param_12->lasts[0];
      (pnVar7->los).lasts[2] = param_12->lasts[1];
      (pnVar7->field3_0x14).is_twostep = 0;
      pnVar7->prev_index = param_3;
      if (iVar3 == param_2 + -1) {
        *piVar6 = param_2 + -1;
      }
    }
    puVar8 = puVar8 + 1;
    iVar3 = iVar3 + 1;
    iVar10 = iVar10 + param_2;
    piVar6 = piVar6 + 1;
  } while ((longlong)(puVar8 + (((1 - (longlong)param_6) - lVar5) - (longlong)param_4)) <
           (longlong)param_2);
  return iVar4;
}

// try_two_step_arrival_tll @ 14f348280

void __cdecl
oo2::try_two_step_arrival_tll
          (newlz_optimal_arrivals_tll *param_1,int param_2,int param_3,uchar *param_4,uchar *param_5
          ,int *param_6,int param_7,int param_8,int param_9,int param_10,int param_11,int param_12,
          newLZ_LOs_NoPad *param_13,newlz_codecosts *param_14)

{
  ulonglong *puVar1;
  int *piVar2;
  uchar uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong *puVar6;
  byte *pbVar7;
  ulonglong uVar8;
  newlz_optimal_arrival_tll *pnVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  uchar *puVar16;
  uint uVar17;
  ulonglong uVar18;
  
  puVar16 = param_4 + param_7;
  puVar1 = (ulonglong *)(puVar16 + 3);
  lVar4 = -(longlong)param_12;
  puVar6 = puVar1;
  do {
    if (param_5 + -8 < puVar6) {
      lVar14 = (longlong)puVar6 - (longlong)puVar1;
      iVar12 = (int)lVar14;
      for (; (puVar6 < param_5 &&
             (iVar12 = (int)lVar14, (char)*puVar6 == *(char *)(lVar4 + (longlong)puVar6)));
          puVar6 = (ulonglong *)((longlong)puVar6 + 1)) {
        lVar14 = lVar14 + 1;
        iVar12 = (int)lVar14;
      }
LAB_14f348319:
      uVar18 = 0;
      uVar8 = uVar18;
      if (puVar16[2] == puVar16[(longlong)~param_12 + 3]) {
        uVar8 = (ulonglong)((puVar16[1] == puVar16[(longlong)(-2 - param_12) + 3]) + 1);
      }
      iVar13 = 3 - (int)uVar8;
      iVar12 = iVar12 + (int)uVar8;
      if (1 < iVar12) {
        iVar10 = iVar13;
        do {
          iVar5 = iVar10;
          pbVar7 = puVar16 + -(longlong)param_12;
          uVar3 = *puVar16;
          puVar16 = puVar16 + 1;
          uVar17 = (int)uVar18 +
                   param_14->codecost_literal
                   [(byte)(uVar3 - (*pbVar7 & (byte)param_14->subliteralmask))];
          uVar18 = (ulonglong)uVar17;
          iVar10 = iVar5 + -1;
        } while (iVar10 != 0);
        iVar15 = param_8 + uVar17;
        iVar10 = iVar13;
        if (2 < iVar13) {
          iVar10 = iVar5 + 2;
          iVar15 = iVar15 + *(int *)((longlong)param_14 + (0x403 - uVar8) * 4);
        }
        iVar5 = iVar12 + -0x11;
        if (iVar5 < 0) {
          iVar5 = param_14->codecost_packet[iVar10 + (iVar12 + -2) * 4];
        }
        else {
          if (iVar5 < 0xff) {
            iVar5 = param_14->codecost_offset2[(longlong)iVar12 + 0xef];
          }
          else {
            iVar5 = cost_excess_huge(iVar5,param_14);
          }
          iVar5 = iVar5 + param_14->codecost_packet[(longlong)iVar10 + 0x3c];
        }
        iVar11 = iVar13 + iVar12 + param_7;
        iVar10 = *param_6;
        if (*param_6 <= iVar11) {
          iVar10 = iVar11;
        }
        iVar11 = iVar11 * param_2;
        *param_6 = iVar10;
        if (iVar15 + iVar5 < param_1->costs[iVar11]) {
          param_1->costs[iVar11] = iVar15 + iVar5;
          pnVar9 = param_1->payloads + iVar11;
          pnVar9->ml = param_9;
          pnVar9->lrl = param_10;
          if (param_11 < 0) {
            (pnVar9->los).lasts[0] = param_12;
            (pnVar9->los).lasts[1] = param_13->lasts[0];
            iVar10 = param_13->lasts[1];
          }
          else {
            piVar2 = param_13->lasts + 2;
            if (param_11 == 0) {
              (pnVar9->los).lasts[0] = param_13->lasts[0];
              (pnVar9->los).lasts[1] = param_13->lasts[1];
              iVar10 = *piVar2;
            }
            else if (param_11 == 1) {
              (pnVar9->los).lasts[0] = param_13->lasts[1];
              (pnVar9->los).lasts[1] = param_13->lasts[0];
              iVar10 = *piVar2;
            }
            else {
              (pnVar9->los).lasts[0] = *piVar2;
              (pnVar9->los).lasts[1] = param_13->lasts[0];
              iVar10 = param_13->lasts[1];
            }
          }
          (pnVar9->los).lasts[2] = iVar10;
          (pnVar9->field3_0x14).twostep.lrl = (byte)iVar13;
          (pnVar9->field3_0x14).is_twostep = (pnVar9->field3_0x14).is_twostep & 0xff;
          (pnVar9->field3_0x14).is_twostep = (pnVar9->field3_0x14).is_twostep | iVar12 * 0x100;
          pnVar9->prev_index = param_3;
        }
      }
      return;
    }
    uVar8 = *(ulonglong *)(lVar4 + (longlong)puVar6) ^ *puVar6;
    if (uVar8 != 0) {
      uVar18 = 0;
      if (uVar8 != 0) {
        for (; (uVar8 >> uVar18 & 1) == 0; uVar18 = uVar18 + 1) {
        }
      }
      iVar12 = ((int)(uVar18 >> 3) - (int)puVar1) + (int)puVar6;
      goto LAB_14f348319;
    }
    puVar6 = puVar6 + 1;
  } while( true );
}

// dtor$1 @ 150284260

void `oo2::newlz_vtable_setup_ctmf<oo2::FastCTMF<unsigned_short>_>'::__l1::dtor_1
               (undefined8 param_1,longlong param_2)

{
  oo2::ThreadProfileScope::~ThreadProfileScope((ThreadProfileScope *)(param_2 + 0x38));
  return;
}

// dtor$1 @ 150284280

void `oo2::newlz_vtable_setup_ctmf<oo2::FastCTMF<unsigned_int>_>'::__l1::dtor_1
               (undefined8 param_1,longlong param_2)

{
  oo2::ThreadProfileScope::~ThreadProfileScope((ThreadProfileScope *)(param_2 + 0x38));
  return;
}

// dtor$0 @ 1502842a0

void `oo2::Hydra_Compress'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  oo2::rrArenaAllocatorStateSaver::~rrArenaAllocatorStateSaver
            ((rrArenaAllocatorStateSaver *)(param_2 + 0x50));
  return;
}

// dtor$1 @ 1502842c0

/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

void `oo2::Hydra_Compress'::__l1::dtor_1(undefined8 param_1,longlong param_2)

{
  oo2::newlz_vtable::~newlz_vtable((newlz_vtable *)(param_2 + 0x70));
  return;
}

// dtor$2 @ 1502842e0

/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

void `oo2::Hydra_Compress'::__l1::dtor_2(undefined8 param_1,longlong param_2)

{
  oo2::newlz_vtable::~newlz_vtable((newlz_vtable *)(param_2 + 0x120));
  return;
}

// dtor$3 @ 150284300

/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

void `oo2::Hydra_Compress'::__l1::dtor_3(undefined8 param_1,longlong param_2)

{
  oo2::newlz_vtable::~newlz_vtable((newlz_vtable *)(param_2 + 0x1d0));
  return;
}

// dtor$0 @ 150284320

void `oo2::Kraken_Compress'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  oo2::rrArenaAllocatorStateSaver::~rrArenaAllocatorStateSaver
            ((rrArenaAllocatorStateSaver *)(param_2 + 0x48));
  return;
}

// dtor$1 @ 150284340

/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

void `oo2::Kraken_Compress'::__l1::dtor_1(undefined8 param_1,longlong param_2)

{
  oo2::newlz_vtable::~newlz_vtable((newlz_vtable *)(param_2 + 0x60));
  return;
}

// dtor$0 @ 150284360

void `oo2::newLZ_encode_chunk_optimal_tll'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  oo2::ThreadProfileScope::~ThreadProfileScope
            ((ThreadProfileScope *)((param_2 + 0xc0U & 0xffffffffffffffe0) + 0x1c0));
  return;
}

// dtor$1 @ 1502843a0

void `oo2::newLZ_encode_chunk_optimal_tll'::__l1::dtor_1(undefined8 param_1,longlong param_2)

{
  oo2::vector_a<oo2::newlz_encoder_parse>::~vector_a<oo2::newlz_encoder_parse>
            ((vector_a<oo2::newlz_encoder_parse> *)((param_2 + 0xc0U & 0xffffffffffffffe0) + 200));
  return;
}

// dtor$2 @ 1502843e0

void `oo2::newLZ_encode_chunk_optimal_tll'::__l1::dtor_2(undefined8 param_1,longlong param_2)

{
  oo2::vector_a<oo2::newlz_encoder_parse>::~vector_a<oo2::newlz_encoder_parse>
            ((vector_a<oo2::newlz_encoder_parse> *)((param_2 + 0xc0U & 0xffffffffffffffe0) + 0xf8));
  return;
}

// dtor$3 @ 150284420

void `oo2::newLZ_encode_chunk_optimal_tll'::__l1::dtor_3(undefined8 param_1,longlong param_2)

{
  oo2::vector_a<int>::~vector_a<int>
            ((vector_a<int> *)((param_2 + 0xc0U & 0xffffffffffffffe0) + 0x110));
  return;
}

// dtor$0 @ 150284460

void `oo2::CTMF<unsigned_int,1,0,4>::set_base_and_preload'::__l1::dtor_0
               (undefined8 param_1,longlong param_2)

{
  oo2::ThreadProfileScope::~ThreadProfileScope((ThreadProfileScope *)(param_2 + 0x50));
  return;
}

// dtor$0 @ 150284480

void `oo2::CTMF<unsigned_int,2,8,4>::set_base_and_preload'::__l1::dtor_0
               (undefined8 param_1,longlong param_2)

{
  oo2::ThreadProfileScope::~ThreadProfileScope((ThreadProfileScope *)(param_2 + 0x60));
  return;
}

// dtor$0 @ 1502844a0

void `oo2::CTMF<unsigned_int,3,0,4>::set_base_and_preload'::__l1::dtor_0
               (undefined8 param_1,longlong param_2)

{
  oo2::ThreadProfileScope::~ThreadProfileScope((ThreadProfileScope *)(param_2 + 0x50));
  return;
}

// dtor$0 @ 1502844c0

void `oo2::FastCTMF<unsigned_short>::set_base_and_preload'::__l1::dtor_0
               (undefined8 param_1,longlong param_2)

{
  oo2::ThreadProfileScope::~ThreadProfileScope((ThreadProfileScope *)(param_2 + 0x60));
  return;
}

// dtor$0 @ 1502844e0

void `oo2::FastCTMF<unsigned_int>::set_base_and_preload'::__l1::dtor_0
               (undefined8 param_1,longlong param_2)

{
  oo2::ThreadProfileScope::~ThreadProfileScope((ThreadProfileScope *)(param_2 + 0x60));
  return;
}

