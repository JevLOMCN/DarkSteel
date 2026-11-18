// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2core_win64
// Functions: 72

// OodleDeleteVirtual<oo2::CacheTableMatchFinder> @ 14f39e540

void __cdecl oo2::OodleDeleteVirtual<oo2::CacheTableMatchFinder>(CacheTableMatchFinder *param_1)

{
  (**(code **)param_1->_padding_)(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00014f39e558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleCore_Plugin_Free)(param_1);
  return;
}

// ProcessChunkTemplate<oo2::CacheTableMatchFinder::MatchEvalGeneric> @ 14f39e580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

long64 __thiscall
oo2::CacheTableMatchFinder::ProcessChunkTemplate<oo2::CacheTableMatchFinder::MatchEvalGeneric>
          (CacheTableMatchFinder *this,long64 param_1,long64 param_2,long64 param_3,
          UnpackedMatchPair *param_4,int param_5)

{
  ulonglong *puVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  UnpackedMatchPair *_Dst;
  LRMSet *pLVar4;
  uchar *puVar5;
  uint *puVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  long64 lVar14;
  byte bVar15;
  ulonglong *puVar16;
  uchar *puVar17;
  int *piVar18;
  int *piVar19;
  longlong lVar20;
  uint uVar21;
  longlong lVar22;
  ulonglong uVar23;
  uchar *puVar24;
  uint *puVar25;
  longlong lVar26;
  longlong lVar27;
  bool bVar28;
  undefined1 auStackY_208 [32];
  int iStack_1c4;
  uint *local_1c0;
  int local_198 [2];
  uint *local_190;
  uchar *local_188;
  longlong local_180;
  uchar *local_178;
  int aiStack_170 [2];
  undefined8 local_168;
  int local_160 [66];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_208;
  pLVar4 = this->m_lrms;
  puVar5 = this->m_raw_end;
  local_178 = this->m_ubuf;
  local_180 = this->m_parse_end_pos;
  puVar1 = (ulonglong *)(puVar5 + -4);
  local_188 = puVar5;
joined_r0x00014f39e603:
  if (param_3 <= param_1) {
    return param_1;
  }
  local_190 = (this->ctmf).m_next_row_second;
  puVar3 = (ulonglong *)(local_178 + param_1);
  puVar6 = (this->ctmf).m_next_row;
  uVar21 = (this->ctmf).m_next_hash;
  bVar15 = (byte)(this->ctmf).m_table_size_bits;
  if (param_1 + 8 < local_180) {
    puVar25 = (this->ctmf).m_hash_table.m_ptr;
    puVar16 = puVar3 + 1;
    (this->ctmf).m_next_ptr = (uchar *)puVar16;
    uVar11 = (uint)(*puVar16 * (this->ctmf).m_hash_mul >> 0x20);
    uVar11 = uVar11 << (bVar15 & 0x1f) | uVar11 >> 0x20 - (bVar15 & 0x1f);
    (this->ctmf).m_next_hash = uVar11;
    (this->ctmf).m_next_row = puVar25 + (uVar11 & (this->ctmf).m_hash_row_mask);
    (this->ctmf).m_next_row_second =
         puVar25 + (*puVar16 * -0x30e44323485a9b9d >> (0x40 - bVar15 & 0x3f) & 0xfffffffffffffff0);
  }
  puVar25 = (this->ctmf).m_hash_table.m_ptr;
  plVar2 = (longlong *)((longlong)puVar3 + 1);
  (this->ctmf).m_next_ptr = (uchar *)plVar2;
  uVar11 = (uint)((this->ctmf).m_hash_mul * *plVar2 >> 0x20);
  uVar11 = uVar11 << (bVar15 & 0x1f) | uVar11 >> 0x20 - (bVar15 & 0x1f);
  (this->ctmf).m_next_hash = uVar11;
  (this->ctmf).m_next_row = puVar25 + (uVar11 & (this->ctmf).m_hash_row_mask);
  lVar20 = 0;
  (this->ctmf).m_next_row_second =
       puVar25 + ((ulonglong)(*plVar2 * -0x30e44323485a9b9d) >> (0x40 - bVar15 & 0x3f) &
                 0xfffffffffffffff0);
  if ((pLVar4 != (LRMSet *)0x0) &&
     (iVar12 = LRMScannerWindowed_FindMatchAndRoll
                         (&this->scanner,(uchar *)puVar3,local_188,(long64 *)local_198), 0 < iVar12)
     ) {
    local_168._0_4_ = iVar12;
    lVar20 = 1;
    local_168._4_4_ = local_198[0];
  }
  lVar27 = -param_1;
  uVar21 = uVar21 & 0xfc000000;
  puVar24 = &DAT_00000003;
  local_1c0 = puVar6;
  do {
    puVar25 = local_1c0 + 2;
    lVar26 = 4;
    do {
      uVar11 = (uint)param_1;
      if (((((puVar25[-2] & 0xfc000000) == uVar21) &&
           (uVar23 = (ulonglong)(puVar25[-2] - uVar11) | 0xfffffffffc000000,
           lVar27 <= (longlong)uVar23)) && ((longlong)puVar24 < (longlong)puVar1 - (longlong)puVar3)
          ) && (puVar24[(longlong)puVar3] ==
                ((uchar *)(uVar23 + (longlong)puVar3))[(longlong)puVar24])) {
        lVar22 = (longlong)(uVar23 + (longlong)puVar3) - (longlong)puVar3;
        puVar16 = puVar3;
        if (puVar3 <= puVar5 + -0xc) {
LAB_14f39e7f0:
          uVar13 = *(ulonglong *)(lVar22 + (longlong)puVar16) ^ *puVar16;
          if (uVar13 == 0) goto code_r0x00014f39e7fd;
          uVar8 = 0;
          if (uVar13 != 0) {
            for (; (uVar13 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
            }
          }
          puVar17 = (uchar *)(((uVar8 >> 3) - (longlong)puVar3) + (longlong)puVar16);
          goto LAB_14f39e825;
        }
LAB_14f39e806:
        puVar17 = (uchar *)((longlong)puVar16 - (longlong)puVar3);
        for (; (puVar16 < puVar1 && ((uchar)*puVar16 == *(uchar *)(lVar22 + (longlong)puVar16)));
            puVar16 = (ulonglong *)((longlong)puVar16 + 1)) {
          puVar17 = puVar17 + 1;
        }
LAB_14f39e825:
        if ((longlong)puVar24 < (longlong)puVar17) {
          *(int *)(&local_168 + lVar20) = (int)puVar17;
          local_160[lVar20 * 2 + -1] = -(int)uVar23;
          lVar20 = lVar20 + 1;
          puVar24 = puVar17;
        }
      }
      if ((((puVar25[-1] & 0xfc000000) == uVar21) &&
          (uVar23 = (ulonglong)(puVar25[-1] - uVar11) | 0xfffffffffc000000,
          lVar27 <= (longlong)uVar23)) &&
         (((longlong)puVar24 < (longlong)puVar1 - (longlong)puVar3 &&
          (puVar24[(longlong)puVar3] == ((uchar *)(uVar23 + (longlong)puVar3))[(longlong)puVar24])))
         ) {
        lVar22 = (longlong)(uVar23 + (longlong)puVar3) - (longlong)puVar3;
        puVar16 = puVar3;
        if (puVar3 <= puVar5 + -0xc) {
LAB_14f39e890:
          uVar13 = *(ulonglong *)(lVar22 + (longlong)puVar16) ^ *puVar16;
          if (uVar13 == 0) goto code_r0x00014f39e89d;
          uVar8 = 0;
          if (uVar13 != 0) {
            for (; (uVar13 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
            }
          }
          puVar17 = (uchar *)(((uVar8 >> 3) - (longlong)puVar3) + (longlong)puVar16);
          goto LAB_14f39e8c5;
        }
LAB_14f39e8a6:
        puVar17 = (uchar *)((longlong)puVar16 - (longlong)puVar3);
        for (; (puVar16 < puVar1 && ((uchar)*puVar16 == *(uchar *)(lVar22 + (longlong)puVar16)));
            puVar16 = (ulonglong *)((longlong)puVar16 + 1)) {
          puVar17 = puVar17 + 1;
        }
LAB_14f39e8c5:
        if ((longlong)puVar24 < (longlong)puVar17) {
          *(int *)(&local_168 + lVar20) = (int)puVar17;
          local_160[lVar20 * 2 + -1] = -(int)uVar23;
          lVar20 = lVar20 + 1;
          puVar24 = puVar17;
        }
      }
      if (((((*puVar25 & 0xfc000000) == uVar21) &&
           (uVar23 = (ulonglong)(*puVar25 - uVar11) | 0xfffffffffc000000, lVar27 <= (longlong)uVar23
           )) && ((longlong)puVar24 < (longlong)puVar1 - (longlong)puVar3)) &&
         (puVar24[(longlong)puVar3] == ((uchar *)(uVar23 + (longlong)puVar3))[(longlong)puVar24])) {
        lVar22 = (longlong)(uVar23 + (longlong)puVar3) - (longlong)puVar3;
        puVar16 = puVar3;
        if (puVar3 <= puVar5 + -0xc) {
LAB_14f39e940:
          uVar13 = *(ulonglong *)(lVar22 + (longlong)puVar16) ^ *puVar16;
          if (uVar13 == 0) goto code_r0x00014f39e94d;
          uVar8 = 0;
          if (uVar13 != 0) {
            for (; (uVar13 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
            }
          }
          puVar17 = (uchar *)(((uVar8 >> 3) - (longlong)puVar3) + (longlong)puVar16);
          goto LAB_14f39e979;
        }
LAB_14f39e956:
        puVar17 = (uchar *)((longlong)puVar16 - (longlong)puVar3);
        for (; (puVar16 < puVar1 && ((uchar)*puVar16 == *(uchar *)(lVar22 + (longlong)puVar16)));
            puVar16 = (ulonglong *)((longlong)puVar16 + 1)) {
          puVar17 = puVar17 + 1;
        }
LAB_14f39e979:
        if ((longlong)puVar24 < (longlong)puVar17) {
          *(int *)(&local_168 + lVar20) = (int)puVar17;
          local_160[lVar20 * 2 + -1] = -(int)uVar23;
          lVar20 = lVar20 + 1;
          puVar24 = puVar17;
        }
      }
      if ((((puVar25[1] & 0xfc000000) == uVar21) &&
          (uVar23 = (ulonglong)(puVar25[1] - uVar11) | 0xfffffffffc000000,
          lVar27 <= (longlong)uVar23)) &&
         (((longlong)puVar24 < (longlong)puVar1 - (longlong)puVar3 &&
          (puVar24[(longlong)puVar3] == ((uchar *)(uVar23 + (longlong)puVar3))[(longlong)puVar24])))
         ) {
        lVar22 = (longlong)(uVar23 + (longlong)puVar3) - (longlong)puVar3;
        puVar16 = puVar3;
        if (puVar3 <= puVar5 + -0xc) {
LAB_14f39e9f0:
          uVar13 = *(ulonglong *)(lVar22 + (longlong)puVar16) ^ *puVar16;
          if (uVar13 == 0) goto code_r0x00014f39e9fd;
          uVar8 = 0;
          if (uVar13 != 0) {
            for (; (uVar13 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
            }
          }
          puVar17 = (uchar *)(((uVar8 >> 3) - (longlong)puVar3) + (longlong)puVar16);
          goto LAB_14f39ea25;
        }
LAB_14f39ea06:
        puVar17 = (uchar *)((longlong)puVar16 - (longlong)puVar3);
        for (; (puVar16 < puVar1 && ((uchar)*puVar16 == *(uchar *)(lVar22 + (longlong)puVar16)));
            puVar16 = (ulonglong *)((longlong)puVar16 + 1)) {
          puVar17 = puVar17 + 1;
        }
LAB_14f39ea25:
        if ((longlong)puVar24 < (longlong)puVar17) {
          *(int *)(&local_168 + lVar20) = (int)puVar17;
          local_160[lVar20 * 2 + -1] = -(int)uVar23;
          lVar20 = lVar20 + 1;
          puVar24 = puVar17;
        }
      }
      puVar25 = puVar25 + 4;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    if (local_1c0 == local_190) goto LAB_14f39eab1;
    local_1c0 = local_190;
  } while( true );
code_r0x00014f39e7fd:
  puVar16 = puVar16 + 1;
  if (puVar5 + -0xc < puVar16) goto LAB_14f39e806;
  goto LAB_14f39e7f0;
code_r0x00014f39e89d:
  puVar16 = puVar16 + 1;
  if (puVar5 + -0xc < puVar16) goto LAB_14f39e8a6;
  goto LAB_14f39e890;
code_r0x00014f39e94d:
  puVar16 = puVar16 + 1;
  if (puVar5 + -0xc < puVar16) goto LAB_14f39e956;
  goto LAB_14f39e940;
code_r0x00014f39e9fd:
  puVar16 = puVar16 + 1;
  if (puVar5 + -0xc < puVar16) goto LAB_14f39ea06;
  goto LAB_14f39e9f0;
LAB_14f39eab1:
  uVar21 = uVar11 & 0x3ffffff | uVar21;
  uVar7 = *(undefined8 *)(puVar6 + 3);
  *(undefined8 *)(puVar6 + 1) = *(undefined8 *)puVar6;
  *(undefined8 *)(puVar6 + 3) = *(undefined8 *)(puVar6 + 2);
  *(undefined8 *)(puVar6 + 4) = uVar7;
  *(undefined8 *)(puVar6 + 6) = *(undefined8 *)(puVar6 + 5);
  *(undefined8 *)(puVar6 + 8) = *(undefined8 *)(puVar6 + 7);
  *(undefined8 *)(puVar6 + 10) = *(undefined8 *)(puVar6 + 9);
  *(undefined8 *)(puVar6 + 0xc) = *(undefined8 *)(puVar6 + 0xb);
  *(undefined8 *)(puVar6 + 0xe) = *(undefined8 *)(puVar6 + 0xd);
  *puVar6 = uVar21;
  uVar7 = *(undefined8 *)(local_190 + 3);
  *(undefined8 *)(local_190 + 1) = *(undefined8 *)local_190;
  *(undefined8 *)(local_190 + 3) = *(undefined8 *)(local_190 + 2);
  *(undefined8 *)(local_190 + 4) = uVar7;
  *(undefined8 *)(local_190 + 6) = *(undefined8 *)(local_190 + 5);
  *(undefined8 *)(local_190 + 8) = *(undefined8 *)(local_190 + 7);
  *(undefined8 *)(local_190 + 10) = *(undefined8 *)(local_190 + 9);
  *(undefined8 *)(local_190 + 0xc) = *(undefined8 *)(local_190 + 0xb);
  *(undefined8 *)(local_190 + 0xe) = *(undefined8 *)(local_190 + 0xd);
  *local_190 = uVar21;
  lVar27 = (longlong)param_5;
  _Dst = param_4 + (param_1 - param_2) * lVar27;
  if (lVar20 == 0) {
    _Dst->length = 0;
  }
  else {
    if (1 < lVar20) {
      lVar26 = 1;
      do {
        uVar7 = (&local_168)[lVar26];
        lVar22 = lVar26;
        if (0 < lVar26) {
          iStack_1c4 = (int)((ulonglong)uVar7 >> 0x20);
          piVar18 = aiStack_170 + lVar26 * 2;
          do {
            if ((int)uVar7 == *piVar18) {
              bVar28 = iStack_1c4 < piVar18[1];
            }
            else {
              bVar28 = *piVar18 <= (int)uVar7;
            }
            if (!bVar28) break;
            lVar22 = lVar22 + -1;
            *(undefined8 *)(piVar18 + 2) = *(undefined8 *)piVar18;
            piVar18 = piVar18 + -2;
          } while (0 < lVar22);
        }
        lVar26 = lVar26 + 1;
        (&local_168)[lVar22] = uVar7;
      } while (lVar26 < lVar20);
      piVar18 = (int *)(&local_168 + lVar20);
      iVar12 = (int)local_168;
      piVar10 = (int *)&local_168;
      do {
        piVar19 = piVar10;
        if (aiStack_170 + lVar20 * 2 <= piVar19) break;
        bVar28 = iVar12 != piVar19[2];
        iVar12 = piVar19[2];
        piVar10 = piVar19 + 2;
      } while (bVar28);
      if (piVar19 < aiStack_170 + lVar20 * 2) {
        piVar10 = piVar19 + 4;
        while (piVar9 = piVar10, piVar9 < piVar18) {
          piVar10 = piVar9 + 2;
          if (*piVar19 != *piVar9) {
            piVar19 = piVar19 + 2;
            *(undefined8 *)piVar19 = *(undefined8 *)piVar9;
          }
        }
        piVar18 = piVar19 + 2;
      }
      lVar20 = (longlong)(int)((longlong)piVar18 - (longlong)&local_168 >> 3);
    }
    iVar12 = (int)local_168;
    lVar22 = (longlong)(int)local_168;
    lVar26 = lVar27;
    if (lVar20 < lVar27) {
      lVar26 = lVar20;
    }
    memcpy(_Dst,&local_168,lVar26 * 8);
    if (lVar26 < lVar27) {
      _Dst[lVar26].length = 0;
    }
    if (0x4c < iVar12) {
      this->longMatchEnd = param_1 + lVar22;
      this->longMatchOffs = local_168._4_4_;
      this->longMatchPos = param_1;
      this->longMatchLen = iVar12;
      lVar14 = ReportLongMatch(this,param_4,param_2,param_3,param_1,param_5);
      param_1 = lVar14 + -1;
    }
  }
  param_1 = param_1 + 1;
  goto joined_r0x00014f39e603;
}

// ProcessChunkTemplate<oo2::CacheTableMatchFinder::MatchEvalSSE2> @ 14f39ed20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long64 __thiscall
oo2::CacheTableMatchFinder::ProcessChunkTemplate<oo2::CacheTableMatchFinder::MatchEvalSSE2>
          (CacheTableMatchFinder *this,long64 param_1,long64 param_2,long64 param_3,
          UnpackedMatchPair *param_4,int param_5)

{
  longlong *plVar1;
  ulonglong *puVar2;
  UnpackedMatchPair *_Dst;
  uchar *puVar3;
  uint *puVar4;
  uint *puVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ushort uVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int *piVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  ulonglong *puVar18;
  long64 lVar19;
  byte bVar20;
  ulonglong uVar21;
  uchar *puVar22;
  int *piVar23;
  int *piVar24;
  longlong lVar25;
  uint *puVar26;
  longlong lVar27;
  longlong lVar28;
  ulonglong uVar29;
  longlong lVar30;
  uchar *puVar31;
  uint uVar32;
  bool bVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auStackY_208 [32];
  int iStack_1cc;
  int local_1b0 [2];
  long64 local_1a8;
  uchar *local_1a0;
  longlong local_198;
  uchar *local_190;
  LRMSet *local_188;
  int aiStack_180 [2];
  undefined8 local_178;
  int local_170 [66];
  ulonglong local_68;
  
  uVar13 = _UNK_1531da91c;
  uVar12 = _UNK_1531da918;
  uVar11 = _UNK_1531da914;
  uVar10 = ___xmm_fc000000fc000000fc000000fc000000;
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_208;
  puVar3 = this->m_raw_end;
  local_188 = this->m_lrms;
  local_190 = this->m_ubuf;
  local_198 = this->m_parse_end_pos;
  local_1a0 = puVar3;
  local_1a8 = param_2;
  do {
    if (param_3 <= param_1) {
      return param_1;
    }
    uVar17 = (this->ctmf).m_next_hash;
    puVar2 = (ulonglong *)(local_190 + param_1);
    puVar4 = (this->ctmf).m_next_row;
    puVar5 = (this->ctmf).m_next_row_second;
    bVar20 = (byte)(this->ctmf).m_table_size_bits;
    if (param_1 + 8 < local_198) {
      puVar26 = (this->ctmf).m_hash_table.m_ptr;
      puVar18 = puVar2 + 1;
      (this->ctmf).m_next_ptr = (uchar *)puVar18;
      uVar15 = (uint)(*puVar18 * (this->ctmf).m_hash_mul >> 0x20);
      uVar15 = uVar15 << (bVar20 & 0x1f) | uVar15 >> 0x20 - (bVar20 & 0x1f);
      (this->ctmf).m_next_hash = uVar15;
      (this->ctmf).m_next_row = puVar26 + (uVar15 & (this->ctmf).m_hash_row_mask);
      (this->ctmf).m_next_row_second =
           puVar26 + (*puVar18 * -0x30e44323485a9b9d >> (0x40 - bVar20 & 0x3f) & 0xfffffffffffffff0)
      ;
    }
    puVar26 = (this->ctmf).m_hash_table.m_ptr;
    plVar1 = (longlong *)((longlong)puVar2 + 1);
    (this->ctmf).m_next_ptr = (uchar *)plVar1;
    uVar15 = (uint)((this->ctmf).m_hash_mul * *plVar1 >> 0x20);
    uVar15 = uVar15 << (bVar20 & 0x1f) | uVar15 >> 0x20 - (bVar20 & 0x1f);
    (this->ctmf).m_next_hash = uVar15;
    (this->ctmf).m_next_row = puVar26 + (uVar15 & (this->ctmf).m_hash_row_mask);
    lVar25 = 0;
    (this->ctmf).m_next_row_second =
         puVar26 + ((ulonglong)(*plVar1 * -0x30e44323485a9b9d) >> (0x40 - bVar20 & 0x3f) &
                   0xfffffffffffffff0);
    if ((local_188 != (LRMSet *)0x0) &&
       (iVar16 = LRMScannerWindowed_FindMatchAndRoll
                           (&this->scanner,(uchar *)puVar2,local_1a0,(long64 *)local_1b0),
       0 < iVar16)) {
      local_178._0_4_ = iVar16;
      lVar25 = 1;
      local_178._4_4_ = local_1b0[0];
    }
    lVar19 = local_1a8;
    uVar15 = uVar17 & 0xfc000000;
    puVar31 = &DAT_00000003;
    puVar26 = puVar4;
    do {
      auVar36._0_4_ = -(uint)((uVar10 & puVar26[4]) == uVar15);
      auVar36._4_4_ = -(uint)((uVar11 & puVar26[5]) == uVar15);
      auVar36._8_4_ = -(uint)((uVar12 & puVar26[6]) == uVar15);
      auVar36._12_4_ = -(uint)((uVar13 & puVar26[7]) == uVar15);
      auVar37._0_4_ = -(uint)((uVar10 & *puVar26) == uVar15);
      auVar37._4_4_ = -(uint)((uVar11 & puVar26[1]) == uVar15);
      auVar37._8_4_ = -(uint)((uVar12 & puVar26[2]) == uVar15);
      auVar37._12_4_ = -(uint)((uVar13 & puVar26[3]) == uVar15);
      auVar37 = packssdw(auVar37,auVar36);
      auVar35._0_4_ = -(uint)((uVar10 & puVar26[8]) == uVar15);
      auVar35._4_4_ = -(uint)((uVar11 & puVar26[9]) == uVar15);
      auVar35._8_4_ = -(uint)((uVar12 & puVar26[10]) == uVar15);
      auVar35._12_4_ = -(uint)((uVar13 & puVar26[0xb]) == uVar15);
      auVar34._0_4_ = -(uint)((uVar10 & puVar26[0xc]) == uVar15);
      auVar34._4_4_ = -(uint)((uVar11 & puVar26[0xd]) == uVar15);
      auVar34._8_4_ = -(uint)((uVar12 & puVar26[0xe]) == uVar15);
      auVar34._12_4_ = -(uint)((uVar13 & puVar26[0xf]) == uVar15);
      auVar36 = packssdw(auVar35,auVar34);
      auVar36 = packsswb(auVar37,auVar36);
      uVar8 = (ushort)(SUB161(auVar36 >> 7,0) & 1) | (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar36[0xf] >> 7) << 0xf;
      uVar32 = (uint)uVar8;
      if (uVar8 != 0) {
        do {
          iVar16 = 0;
          if (uVar32 != 0) {
            for (; (uVar32 >> iVar16 & 1) == 0; iVar16 = iVar16 + 1) {
            }
          }
          uVar32 = uVar32 & uVar32 - 1;
          uVar29 = (ulonglong)(puVar26[iVar16] - (uint)param_1) | 0xfffffffffc000000;
          if (((-param_1 <= (longlong)uVar29) &&
              ((longlong)puVar31 < (longlong)(puVar3 + -4) - (longlong)puVar2)) &&
             (puVar31[(longlong)puVar2] == ((uchar *)(uVar29 + (longlong)puVar2))[(longlong)puVar31]
             )) {
            lVar27 = (longlong)(uVar29 + (longlong)puVar2) - (longlong)puVar2;
            puVar18 = puVar2;
            if (puVar2 <= puVar3 + -0xc) {
LAB_14f39efd5:
              uVar21 = *(ulonglong *)(lVar27 + (longlong)puVar18) ^ *puVar18;
              if (uVar21 == 0) goto code_r0x00014f39efde;
              uVar7 = 0;
              if (uVar21 != 0) {
                for (; (uVar21 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
                }
              }
              puVar22 = (uchar *)(((uVar7 >> 3) - (longlong)puVar2) + (longlong)puVar18);
              goto LAB_14f39f006;
            }
LAB_14f39efe7:
            puVar22 = (uchar *)((longlong)puVar18 - (longlong)puVar2);
            for (; (puVar18 < puVar3 + -4 &&
                   ((uchar)*puVar18 == *(uchar *)((longlong)puVar18 + lVar27)));
                puVar18 = (ulonglong *)((longlong)puVar18 + 1)) {
              puVar22 = puVar22 + 1;
            }
LAB_14f39f006:
            if ((longlong)puVar31 < (longlong)puVar22) {
              *(int *)(&local_178 + lVar25) = (int)puVar22;
              local_170[lVar25 * 2 + -1] = -(int)uVar29;
              lVar25 = lVar25 + 1;
              puVar31 = puVar22;
            }
          }
        } while (uVar32 != 0);
      }
      bVar33 = puVar26 != puVar5;
      puVar26 = puVar5;
    } while (bVar33);
    uVar6 = *(undefined8 *)(puVar4 + 3);
    lVar27 = (longlong)param_5;
    uVar17 = ((uint)param_1 ^ uVar17) & 0x3ffffff ^ uVar17;
    *(undefined8 *)(puVar4 + 1) = *(undefined8 *)puVar4;
    *(undefined8 *)(puVar4 + 3) = *(undefined8 *)(puVar4 + 2);
    *(undefined8 *)(puVar4 + 4) = uVar6;
    *(undefined8 *)(puVar4 + 6) = *(undefined8 *)(puVar4 + 5);
    *(undefined8 *)(puVar4 + 8) = *(undefined8 *)(puVar4 + 7);
    *(undefined8 *)(puVar4 + 10) = *(undefined8 *)(puVar4 + 9);
    *(undefined8 *)(puVar4 + 0xc) = *(undefined8 *)(puVar4 + 0xb);
    *(undefined8 *)(puVar4 + 0xe) = *(undefined8 *)(puVar4 + 0xd);
    *puVar4 = uVar17;
    uVar6 = *(undefined8 *)(puVar5 + 3);
    *(undefined8 *)(puVar5 + 1) = *(undefined8 *)puVar5;
    *(undefined8 *)(puVar5 + 3) = *(undefined8 *)(puVar5 + 2);
    *(undefined8 *)(puVar5 + 4) = uVar6;
    *(undefined8 *)(puVar5 + 6) = *(undefined8 *)(puVar5 + 5);
    *(undefined8 *)(puVar5 + 8) = *(undefined8 *)(puVar5 + 7);
    *(undefined8 *)(puVar5 + 10) = *(undefined8 *)(puVar5 + 9);
    *(undefined8 *)(puVar5 + 0xc) = *(undefined8 *)(puVar5 + 0xb);
    *(undefined8 *)(puVar5 + 0xe) = *(undefined8 *)(puVar5 + 0xd);
    *puVar5 = uVar17;
    _Dst = param_4 + (param_1 - local_1a8) * lVar27;
    if (lVar25 == 0) {
      _Dst->length = 0;
    }
    else {
      if (1 < lVar25) {
        lVar30 = 1;
        do {
          uVar6 = (&local_178)[lVar30];
          lVar28 = lVar30;
          if (0 < lVar30) {
            iStack_1cc = (int)((ulonglong)uVar6 >> 0x20);
            piVar23 = aiStack_180 + lVar30 * 2;
            do {
              if ((int)uVar6 == *piVar23) {
                bVar33 = iStack_1cc < piVar23[1];
              }
              else {
                bVar33 = *piVar23 <= (int)uVar6;
              }
              if (!bVar33) break;
              lVar28 = lVar28 + -1;
              *(undefined8 *)(piVar23 + 2) = *(undefined8 *)piVar23;
              piVar23 = piVar23 + -2;
            } while (0 < lVar28);
          }
          lVar30 = lVar30 + 1;
          (&local_178)[lVar28] = uVar6;
        } while (lVar30 < lVar25);
        piVar23 = (int *)(&local_178 + lVar25);
        iVar16 = (int)local_178;
        piVar14 = (int *)&local_178;
        do {
          piVar24 = piVar14;
          if (aiStack_180 + lVar25 * 2 <= piVar24) break;
          bVar33 = iVar16 != piVar24[2];
          iVar16 = piVar24[2];
          piVar14 = piVar24 + 2;
        } while (bVar33);
        if (piVar24 < aiStack_180 + lVar25 * 2) {
          piVar14 = piVar24 + 4;
          while (piVar9 = piVar14, piVar9 < piVar23) {
            piVar14 = piVar9 + 2;
            if (*piVar24 != *piVar9) {
              piVar24 = piVar24 + 2;
              *(undefined8 *)piVar24 = *(undefined8 *)piVar9;
            }
          }
          piVar23 = piVar24 + 2;
        }
        lVar25 = (longlong)(int)((longlong)piVar23 - (longlong)&local_178 >> 3);
      }
      iVar16 = (int)local_178;
      lVar28 = (longlong)(int)local_178;
      lVar30 = lVar27;
      if (lVar25 < lVar27) {
        lVar30 = lVar25;
      }
      memcpy(_Dst,&local_178,lVar30 * 8);
      if (lVar30 < lVar27) {
        _Dst[lVar30].length = 0;
      }
      if (0x4c < iVar16) {
        this->longMatchEnd = lVar28 + param_1;
        this->longMatchOffs = local_178._4_4_;
        this->longMatchPos = param_1;
        this->longMatchLen = iVar16;
        lVar19 = ReportLongMatch(this,param_4,lVar19,param_3,param_1,param_5);
        param_1 = lVar19 + -1;
      }
    }
    param_1 = param_1 + 1;
  } while( true );
code_r0x00014f39efde:
  puVar18 = puVar18 + 1;
  if (puVar3 + -0xc < puVar18) goto LAB_14f39efe7;
  goto LAB_14f39efd5;
}

// construct<oo2::CacheTableMatchFinder,unsigned_char_const_*_&,__int64_&,__int64_&,oo2::LRMSet_*_&,oo2::rrArenaAllocator_*_&> @ 14f39f320

CacheTableMatchFinder * __cdecl
oo2::
construct<oo2::CacheTableMatchFinder,unsigned_char_const_*_&,__int64_&,__int64_&,oo2::LRMSet_*_&,oo2::rrArenaAllocator_*_&>
          (CacheTableMatchFinder *param_1,uchar **param_2,long64 *param_3,long64 *param_4,
          LRMSet **param_5,rrArenaAllocator **param_6)

{
  if (param_1 != (CacheTableMatchFinder *)0x0) {
    CacheTableMatchFinder::CacheTableMatchFinder
              (param_1,*param_2,*param_3,*param_4,*param_5,*param_6);
  }
  return param_1;
}

// destruct_virtual<oo2::CacheTableMatchFinder> @ 14f39f380

CacheTableMatchFinder * __cdecl
oo2::destruct_virtual<oo2::CacheTableMatchFinder>(CacheTableMatchFinder *param_1)

{
  (**(code **)param_1->_padding_)(param_1,0);
  return param_1;
}

// forward<oo2::LRMSet_*_&> @ 14f39f3a0

LRMSet ** __cdecl oo2::forward<oo2::LRMSet_*_&>(LRMSet **param_1)

{
  return param_1;
}

// forward<oo2::rrArenaAllocator_*_&> @ 14f39f3b0

rrArenaAllocator ** __cdecl oo2::forward<oo2::rrArenaAllocator_*_&>(rrArenaAllocator **param_1)

{
  return param_1;
}

// forward<unsigned_char_const_*_&> @ 14f39f3c0

uchar ** __cdecl oo2::forward<unsigned_char_const_*_&>(uchar **param_1)

{
  return param_1;
}

// forward<__int64_&> @ 14f39f3d0

long64 * __cdecl oo2::forward<__int64_&>(long64 *param_1)

{
  return param_1;
}

// hash_n_bytes<8> @ 14f39f3e0

ulong64 __cdecl oo2::`anonymous_namespace'::hash_n_bytes<8>(uchar *param_1,int param_2)

{
  return (ulonglong)(*(longlong *)param_1 * -0x30e44323485a9b9d) >> (0x40U - (char)param_2 & 0x3f);
}

// rrAlignUpPointer<void> @ 14f39f410

void * __cdecl oo2::rrAlignUpPointer<void>(void *param_1,long64 param_2)

{
  return (void *)((longlong)param_1 + param_2 + -1 & ~(param_2 - 1U));
}

// unique<oo2::UnpackedMatchPair_*,oo2::UnpackedMatchPair_EqualLength> @ 14f39f440

UnpackedMatchPair * __cdecl
oo2::unique<oo2::UnpackedMatchPair_*,oo2::UnpackedMatchPair_EqualLength>
          (UnpackedMatchPair *param_1,UnpackedMatchPair *param_2,
          UnpackedMatchPair_EqualLength param_3)

{
  UnpackedMatchPair *pUVar1;
  UnpackedMatchPair *pUVar2;
  int iVar3;
  
  if (param_1 < param_2 + -1) {
    iVar3 = param_1->length;
    do {
      pUVar1 = param_1 + 1;
      pUVar2 = param_1 + 1;
      if (iVar3 == pUVar1->length) {
        pUVar1 = param_1 + 2;
        while (pUVar2 = pUVar1, pUVar2 < param_2) {
          pUVar1 = pUVar2 + 1;
          if (param_1->length != pUVar2->length) {
            param_1 = param_1 + 1;
            *param_1 = *pUVar2;
          }
        }
        return param_1 + 1;
      }
      param_1 = pUVar2;
      iVar3 = pUVar1->length;
    } while (pUVar2 < param_2 + -1);
  }
  return param_2;
}

// CTMF<unsigned_int,4,8,4> @ 14f39f4a0

CTMF<unsigned_int,4,8,4> * __thiscall
oo2::CTMF<unsigned_int,4,8,4>::CTMF<unsigned_int,4,8,4>(CTMF<unsigned_int,4,8,4> *this)

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

// CacheTableMatchFinder @ 14f39f4e0

CacheTableMatchFinder * __thiscall
oo2::CacheTableMatchFinder::CacheTableMatchFinder
          (CacheTableMatchFinder *this,uchar *param_1,long64 param_2,long64 param_3,LRMSet *param_4,
          rrArenaAllocator *param_5)

{
  void *pvVar1;
  longlong *plVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong *puVar7;
  byte bVar8;
  longlong lVar9;
  ulonglong *puVar10;
  int iVar11;
  uint *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  this->_padding_ = (longlong)&___7CacheTableMatchFinder_oo2__6B_;
  (this->ctmf).m_hash_table_arena = (rrArenaAllocator *)0x0;
  (this->ctmf).m_hash_table.m_ptr = (uint *)0x0;
  (this->ctmf).m_hash_table.m_alloc = (void *)0x0;
  (this->ctmf).m_base_ptr = (uchar *)0x0;
  (this->ctmf).m_next_row = (uint *)0x0;
  (this->ctmf).m_next_row_second = (uint *)0x0;
  (this->ctmf).m_next_hash = 0;
  this->m_ubuf = param_1;
  this->m_raw = param_1 + param_3;
  this->m_raw_end = param_1 + param_2;
  this->m_size = param_2;
  this->m_parse_end_pos = param_2 + -8;
  this->m_pos = param_3;
  this->m_lrms = param_4;
  this->longMatchPos = 0;
  this->longMatchEnd = 0;
  this->longMatchLen = 0;
  this->longMatchOffs = 0;
  lVar6 = 0x7fffffff;
  if (param_2 < 0x7fffffff) {
    lVar6 = param_2;
  }
  lVar9 = -0x80000000;
  if (-0x80000000 < lVar6) {
    lVar9 = lVar6;
  }
  if ((uint)lVar9 < 2) {
LAB_14f39f5b0:
    iVar11 = 0x12;
  }
  else {
    uVar5 = (uint)lVar9 - 1;
    iVar3 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    iVar11 = 0x18;
    if (iVar3 + 1 < 0x18) {
      iVar11 = iVar3 + 1;
    }
    if (iVar11 < 0x13) goto LAB_14f39f5b0;
  }
  (this->ctmf).m_table_size_bits = iVar11;
  (this->ctmf).m_hash_row_mask = (1 << ((byte)iVar11 & 0x1f)) - 0x10;
  (this->ctmf).m_next_ptr = (uchar *)0x0;
  (this->ctmf).m_hash_mul = 0xb7a5646300000000;
  lVar6 = (1L << ((byte)iVar11 & 0x3f)) * 4;
  if (param_5 != (rrArenaAllocator *)0x0) {
    uVar13 = lVar6 + 0x4fU & 0xfffffffffffffff0;
    uVar14 = (ulonglong)(-(uint)(param_5->m_unorderedStart != 0) & 0x10);
    pvVar1 = (void *)param_5->m_cur;
    if (param_5->m_size + param_5->m_base < (longlong)pvVar1 + uVar13 + uVar14) {
      (this->ctmf).m_hash_table.m_alloc = (void *)0x0;
    }
    else {
      puVar10 = (ulonglong *)((longlong)pvVar1 + uVar13);
      param_5->m_cur = (ulong64)puVar10;
      if (param_5->m_unorderedStart != 0) {
        *puVar10 = uVar13;
        puVar10[1] = 0;
        param_5->m_cur = param_5->m_cur + uVar14;
        puVar10 = (ulonglong *)param_5->m_cur;
      }
      puVar7 = (ulonglong *)param_5->m_cur_max;
      if ((ulonglong *)param_5->m_cur_max <= puVar10) {
        puVar7 = puVar10;
      }
      param_5->m_cur_max = (ulong64)puVar7;
      (this->ctmf).m_hash_table.m_alloc = pvVar1;
      if (pvVar1 != (void *)0x0) {
        puVar12 = (uint *)((longlong)pvVar1 + 0x3fU & 0xffffffffffffffc0);
        goto LAB_14f39f699;
      }
    }
  }
  puVar12 = (*g_fp_OodleCore_Plugin_MallocAligned)(lVar6,0x40);
  if (puVar12 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(lVar6);
  }
LAB_14f39f699:
  (this->ctmf).m_hash_table.m_ptr = puVar12;
  (this->ctmf).m_hash_table_arena = param_5;
  memset((this->ctmf).m_hash_table.m_ptr,0,(1L << ((byte)(this->ctmf).m_table_size_bits & 0x3f)) * 4
        );
  CTMF<unsigned_int,4,8,4>::set_base_and_preload(&this->ctmf,param_1,this->m_raw,param_3);
  plVar2 = (longlong *)this->m_raw;
  (this->ctmf).m_next_ptr = (uchar *)plVar2;
  bVar8 = (byte)(this->ctmf).m_table_size_bits;
  bVar4 = bVar8 & 0x1f;
  uVar5 = (uint)((this->ctmf).m_hash_mul * *plVar2 >> 0x20);
  uVar5 = uVar5 << bVar4 | uVar5 >> 0x20 - bVar4;
  (this->ctmf).m_next_hash = uVar5;
  puVar12 = (this->ctmf).m_hash_table.m_ptr;
  (this->ctmf).m_next_row = puVar12 + ((this->ctmf).m_hash_row_mask & uVar5);
  (this->ctmf).m_next_row_second =
       puVar12 + ((ulonglong)(*plVar2 * -0x30e44323485a9b9d) >> (0x40 - bVar8 & 0x3f) &
                 0xfffffffffffffff0);
  LRMScannerWindowed_Init(&this->scanner,this->m_lrms,this->m_raw,this->m_raw_end,0x40000000);
  return this;
}

// IncrementalMatchFinder @ 14f39f780

IncrementalMatchFinder * __thiscall
oo2::IncrementalMatchFinder::IncrementalMatchFinder(IncrementalMatchFinder *this)

{
  *this = (IncrementalMatchFinder)&___7IncrementalMatchFinder_oo2__6B_;
  return this;
}

// ~CTMF<unsigned_int,4,8,4> @ 14f39f7a0

void __thiscall
oo2::CTMF<unsigned_int,4,8,4>::~CTMF<unsigned_int,4,8,4>(CTMF<unsigned_int,4,8,4> *this)

{
  release(this);
  return;
}

// ~CacheTableMatchFinder @ 14f39f7c0

void __thiscall oo2::CacheTableMatchFinder::~CacheTableMatchFinder(CacheTableMatchFinder *this)

{
  this->_padding_ = (longlong)&___7CacheTableMatchFinder_oo2__6B_;
  CTMF<unsigned_int,4,8,4>::release(&this->ctmf);
  CTMF<unsigned_int,4,8,4>::release(&this->ctmf);
  this->_padding_ = (longlong)&___7IncrementalMatchFinder_oo2__6B_;
  return;
}

// ~IncrementalMatchFinder @ 14f39f810

void __thiscall oo2::IncrementalMatchFinder::~IncrementalMatchFinder(IncrementalMatchFinder *this)

{
  *this = (IncrementalMatchFinder)&___7IncrementalMatchFinder_oo2__6B_;
  return;
}

// operator() @ 14f39f830

bool __thiscall
oo2::UnpackedMatchPair_EqualLength::operator()
          (UnpackedMatchPair_EqualLength *this,UnpackedMatchPair *param_1,UnpackedMatchPair *param_2
          )

{
  return param_1->length == param_2->length;
}

// operator() @ 14f39f840

bool __thiscall
oo2::UnpackedMatchPair_Sort_HighLength_then_LowOffset::operator()
          (UnpackedMatchPair_Sort_HighLength_then_LowOffset *this,UnpackedMatchPair *param_1,
          UnpackedMatchPair *param_2)

{
  if (param_1->length != param_2->length) {
    return param_2->length <= param_1->length;
  }
  return param_1->offset < param_2->offset;
}

// `scalar_deleting_destructor' @ 14f39f860

void * __thiscall
oo2::CacheTableMatchFinder::_scalar_deleting_destructor_(CacheTableMatchFinder *this,uint param_1)

{
  this->_padding_ = (longlong)&___7CacheTableMatchFinder_oo2__6B_;
  CTMF<unsigned_int,4,8,4>::release(&this->ctmf);
  CTMF<unsigned_int,4,8,4>::release(&this->ctmf);
  this->_padding_ = (longlong)&___7IncrementalMatchFinder_oo2__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x278);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f39f8e0

void * __thiscall
oo2::IncrementalMatchFinder::_scalar_deleting_destructor_(IncrementalMatchFinder *this,uint param_1)

{
  *this = (IncrementalMatchFinder)&___7IncrementalMatchFinder_oo2__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// CTMF_CreateMatchFinder @ 14f39f920

IncrementalMatchFinder * __cdecl
oo2::CTMF_CreateMatchFinder
          (uchar *param_1,long64 param_2,long64 param_3,LRMSet *param_4,OodleLZ_Jobify param_5,
          void *param_6,rrArenaAllocator *param_7)

{
  CacheTableMatchFinder *this;
  
  if (param_7 == (rrArenaAllocator *)0x0) {
    this = (*g_fp_OodleCore_Plugin_MallocAligned)(0x278,0x10);
    if (this == (CacheTableMatchFinder *)0x0) {
                    /* WARNING: Subroutine does not return */
      Oodle_Core_Malloc_Failed(0x278);
    }
  }
  else {
    this = rrArenaAllocator::Alloc(param_7,0x278,0);
  }
  if (this != (CacheTableMatchFinder *)0x0) {
    CacheTableMatchFinder::CacheTableMatchFinder(this,param_1,param_2,param_3,param_4,param_7);
  }
  return (IncrementalMatchFinder *)this;
}

// EvalMatches @ 14f39fa00

long64 __thiscall
oo2::CacheTableMatchFinder::MatchEvalGeneric::EvalMatches
          (MatchEvalGeneric *this,UnpackedMatchPair *param_1,long64 param_2,long64 param_3,
          uint *param_4,uint *param_5,uint param_6,uchar *param_7,uchar *param_8,long64 param_9)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  bool bVar12;
  
  uVar6 = param_6 & 0xfc000000;
  pcVar5 = &DAT_00000003;
  do {
    puVar7 = param_4 + 2;
    lVar10 = 4;
    do {
      iVar11 = (int)param_3;
      if (((((puVar7[-2] & 0xfc000000) == uVar6) &&
           (uVar9 = (ulonglong)(puVar7[-2] - iVar11) | 0xfffffffffc000000,
           param_9 <= (longlong)uVar9)) &&
          ((longlong)pcVar5 < (longlong)param_8 - (longlong)param_7)) &&
         (pcVar5[(longlong)param_7] == (param_7 + uVar9)[(longlong)pcVar5])) {
        lVar8 = (longlong)(param_7 + uVar9) - (longlong)param_7;
        puVar3 = (ulonglong *)param_7;
        if (param_7 <= param_8 + -8) {
LAB_14f39fab0:
          uVar2 = *(ulonglong *)(lVar8 + (longlong)puVar3) ^ *puVar3;
          if (uVar2 == 0) goto code_r0x00014f39fabd;
          uVar1 = 0;
          if (uVar2 != 0) {
            for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
            }
          }
          pcVar4 = (char *)(((uVar1 >> 3) - (longlong)param_7) + (longlong)puVar3);
          goto LAB_14f39fae5;
        }
LAB_14f39fac6:
        pcVar4 = (char *)((longlong)puVar3 - (longlong)param_7);
        for (; (puVar3 < param_8 && ((char)*puVar3 == *(char *)((longlong)puVar3 + lVar8)));
            puVar3 = (ulonglong *)((longlong)puVar3 + 1)) {
          pcVar4 = pcVar4 + 1;
        }
LAB_14f39fae5:
        if ((longlong)pcVar5 < (longlong)pcVar4) {
          param_1[param_2].length = (int)pcVar4;
          param_1[param_2].offset = -(int)uVar9;
          param_2 = param_2 + 1;
          pcVar5 = pcVar4;
        }
      }
      if ((((puVar7[-1] & 0xfc000000) == uVar6) &&
          (uVar9 = (ulonglong)(puVar7[-1] - iVar11) | 0xfffffffffc000000, param_9 <= (longlong)uVar9
          )) && (((longlong)pcVar5 < (longlong)param_8 - (longlong)param_7 &&
                 (pcVar5[(longlong)param_7] == (param_7 + uVar9)[(longlong)pcVar5])))) {
        lVar8 = (longlong)(param_7 + uVar9) - (longlong)param_7;
        puVar3 = (ulonglong *)param_7;
        if (param_7 <= param_8 + -8) {
LAB_14f39fb50:
          uVar2 = *(ulonglong *)(lVar8 + (longlong)puVar3) ^ *puVar3;
          if (uVar2 == 0) goto code_r0x00014f39fb5d;
          uVar1 = 0;
          if (uVar2 != 0) {
            for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
            }
          }
          pcVar4 = (char *)(((uVar1 >> 3) - (longlong)param_7) + (longlong)puVar3);
          goto LAB_14f39fb85;
        }
LAB_14f39fb66:
        pcVar4 = (char *)((longlong)puVar3 - (longlong)param_7);
        for (; (puVar3 < param_8 && ((char)*puVar3 == *(char *)((longlong)puVar3 + lVar8)));
            puVar3 = (ulonglong *)((longlong)puVar3 + 1)) {
          pcVar4 = pcVar4 + 1;
        }
LAB_14f39fb85:
        if ((longlong)pcVar5 < (longlong)pcVar4) {
          param_1[param_2].length = (int)pcVar4;
          param_1[param_2].offset = -(int)uVar9;
          param_2 = param_2 + 1;
          pcVar5 = pcVar4;
        }
      }
      if (((((*puVar7 & 0xfc000000) == uVar6) &&
           (uVar9 = (ulonglong)(*puVar7 - iVar11) | 0xfffffffffc000000, param_9 <= (longlong)uVar9))
          && ((longlong)pcVar5 < (longlong)param_8 - (longlong)param_7)) &&
         (pcVar5[(longlong)param_7] == (param_7 + uVar9)[(longlong)pcVar5])) {
        lVar8 = (longlong)(param_7 + uVar9) - (longlong)param_7;
        puVar3 = (ulonglong *)param_7;
        if (param_7 <= param_8 + -8) {
LAB_14f39fbf0:
          uVar2 = *(ulonglong *)(lVar8 + (longlong)puVar3) ^ *puVar3;
          if (uVar2 == 0) goto code_r0x00014f39fbfd;
          uVar1 = 0;
          if (uVar2 != 0) {
            for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
            }
          }
          pcVar4 = (char *)(((uVar1 >> 3) - (longlong)param_7) + (longlong)puVar3);
          goto LAB_14f39fc25;
        }
LAB_14f39fc06:
        pcVar4 = (char *)((longlong)puVar3 - (longlong)param_7);
        for (; (puVar3 < param_8 && ((char)*puVar3 == *(char *)((longlong)puVar3 + lVar8)));
            puVar3 = (ulonglong *)((longlong)puVar3 + 1)) {
          pcVar4 = pcVar4 + 1;
        }
LAB_14f39fc25:
        if ((longlong)pcVar5 < (longlong)pcVar4) {
          param_1[param_2].length = (int)pcVar4;
          param_1[param_2].offset = -(int)uVar9;
          param_2 = param_2 + 1;
          pcVar5 = pcVar4;
        }
      }
      if ((((puVar7[1] & 0xfc000000) == uVar6) &&
          (uVar9 = (ulonglong)(puVar7[1] - iVar11) | 0xfffffffffc000000, param_9 <= (longlong)uVar9)
          ) && (((longlong)pcVar5 < (longlong)param_8 - (longlong)param_7 &&
                (pcVar5[(longlong)param_7] == (param_7 + uVar9)[(longlong)pcVar5])))) {
        lVar8 = (longlong)(param_7 + uVar9) - (longlong)param_7;
        puVar3 = (ulonglong *)param_7;
        if (param_7 <= param_8 + -8) {
LAB_14f39fc90:
          uVar2 = *(ulonglong *)(lVar8 + (longlong)puVar3) ^ *puVar3;
          if (uVar2 == 0) goto code_r0x00014f39fc9d;
          uVar1 = 0;
          if (uVar2 != 0) {
            for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
            }
          }
          pcVar4 = (char *)(((uVar1 >> 3) - (longlong)param_7) + (longlong)puVar3);
          goto LAB_14f39fcc5;
        }
LAB_14f39fca6:
        pcVar4 = (char *)((longlong)puVar3 - (longlong)param_7);
        for (; (puVar3 < param_8 && ((char)*puVar3 == *(char *)((longlong)puVar3 + lVar8)));
            puVar3 = (ulonglong *)((longlong)puVar3 + 1)) {
          pcVar4 = pcVar4 + 1;
        }
LAB_14f39fcc5:
        if ((longlong)pcVar5 < (longlong)pcVar4) {
          param_1[param_2].length = (int)pcVar4;
          param_1[param_2].offset = -(int)uVar9;
          param_2 = param_2 + 1;
          pcVar5 = pcVar4;
        }
      }
      puVar7 = puVar7 + 4;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    bVar12 = param_4 == param_5;
    param_4 = param_5;
    if (bVar12) {
      return param_2;
    }
  } while( true );
code_r0x00014f39fabd:
  puVar3 = puVar3 + 1;
  if (param_8 + -8 < puVar3) goto LAB_14f39fac6;
  goto LAB_14f39fab0;
code_r0x00014f39fb5d:
  puVar3 = puVar3 + 1;
  if (param_8 + -8 < puVar3) goto LAB_14f39fb66;
  goto LAB_14f39fb50;
code_r0x00014f39fbfd:
  puVar3 = puVar3 + 1;
  if (param_8 + -8 < puVar3) goto LAB_14f39fc06;
  goto LAB_14f39fbf0;
code_r0x00014f39fc9d:
  puVar3 = puVar3 + 1;
  if (param_8 + -8 < puVar3) goto LAB_14f39fca6;
  goto LAB_14f39fc90;
}

// EvalMatches @ 14f39fd80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long64 __thiscall
oo2::CacheTableMatchFinder::MatchEvalSSE2::EvalMatches
          (MatchEvalSSE2 *this,UnpackedMatchPair *param_1,long64 param_2,long64 param_3,
          uint *param_4,uint *param_5,uint param_6,uchar *param_7,uchar *param_8,long64 param_9)

{
  int iVar1;
  ulonglong uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  char *pcVar11;
  char *pcVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  bool bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  uVar7 = _UNK_1531da91c;
  uVar6 = _UNK_1531da918;
  uVar5 = _UNK_1531da914;
  uVar4 = ___xmm_fc000000fc000000fc000000fc000000;
  uVar8 = param_6 & 0xfc000000;
  pcVar12 = &DAT_00000003;
  do {
    auVar19._0_4_ = -(uint)((uVar4 & param_4[4]) == uVar8);
    auVar19._4_4_ = -(uint)((uVar5 & param_4[5]) == uVar8);
    auVar19._8_4_ = -(uint)((uVar6 & param_4[6]) == uVar8);
    auVar19._12_4_ = -(uint)((uVar7 & param_4[7]) == uVar8);
    auVar20._0_4_ = -(uint)((uVar4 & *param_4) == uVar8);
    auVar20._4_4_ = -(uint)((uVar5 & param_4[1]) == uVar8);
    auVar20._8_4_ = -(uint)((uVar6 & param_4[2]) == uVar8);
    auVar20._12_4_ = -(uint)((uVar7 & param_4[3]) == uVar8);
    auVar20 = packssdw(auVar20,auVar19);
    auVar18._0_4_ = -(uint)((uVar4 & param_4[8]) == uVar8);
    auVar18._4_4_ = -(uint)((uVar5 & param_4[9]) == uVar8);
    auVar18._8_4_ = -(uint)((uVar6 & param_4[10]) == uVar8);
    auVar18._12_4_ = -(uint)((uVar7 & param_4[0xb]) == uVar8);
    auVar17._0_4_ = -(uint)((uVar4 & param_4[0xc]) == uVar8);
    auVar17._4_4_ = -(uint)((uVar5 & param_4[0xd]) == uVar8);
    auVar17._8_4_ = -(uint)((uVar6 & param_4[0xe]) == uVar8);
    auVar17._12_4_ = -(uint)((uVar7 & param_4[0xf]) == uVar8);
    auVar19 = packssdw(auVar18,auVar17);
    auVar19 = packsswb(auVar20,auVar19);
    uVar3 = (ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
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
            (ushort)(byte)(auVar19[0xf] >> 7) << 0xf;
    uVar13 = (uint)uVar3;
    if (uVar3 != 0) {
      do {
        iVar1 = 0;
        if (uVar13 != 0) {
          for (; (uVar13 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
          }
        }
        uVar13 = uVar13 & uVar13 - 1;
        uVar15 = (ulonglong)(param_4[iVar1] - (int)param_3) | 0xfffffffffc000000;
        if (((param_9 <= (longlong)uVar15) &&
            ((longlong)pcVar12 < (longlong)param_8 - (longlong)param_7)) &&
           (pcVar12[(longlong)param_7] == (param_7 + uVar15)[(longlong)pcVar12])) {
          lVar14 = (longlong)(param_7 + uVar15) - (longlong)param_7;
          puVar9 = (ulonglong *)param_7;
          if (param_7 <= param_8 + -8) {
LAB_14f39fe77:
            uVar10 = *(ulonglong *)(lVar14 + (longlong)puVar9) ^ *puVar9;
            if (uVar10 == 0) goto code_r0x00014f39fe82;
            uVar2 = 0;
            if (uVar10 != 0) {
              for (; (uVar10 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
              }
            }
            pcVar11 = (char *)(((uVar2 >> 3) - (longlong)param_7) + (longlong)puVar9);
            goto LAB_14f39feaa;
          }
LAB_14f39fe8b:
          pcVar11 = (char *)((longlong)puVar9 - (longlong)param_7);
          for (; (puVar9 < param_8 && ((char)*puVar9 == *(char *)((longlong)puVar9 + lVar14)));
              puVar9 = (ulonglong *)((longlong)puVar9 + 1)) {
            pcVar11 = pcVar11 + 1;
          }
LAB_14f39feaa:
          if ((longlong)pcVar12 < (longlong)pcVar11) {
            param_1[param_2].length = (int)pcVar11;
            param_1[param_2].offset = -(int)uVar15;
            param_2 = param_2 + 1;
            pcVar12 = pcVar11;
          }
        }
      } while (uVar13 != 0);
    }
    bVar16 = param_4 == param_5;
    param_4 = param_5;
    if (bVar16) {
      return param_2;
    }
  } while( true );
code_r0x00014f39fe82:
  puVar9 = puVar9 + 1;
  if (param_8 + -8 < puVar9) goto LAB_14f39fe8b;
  goto LAB_14f39fe77;
}

// GetNumBytesZeroNeverAllR @ 14f39ff10

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

// OodleFree @ 14f39ff20

void __cdecl oo2::OodleFree(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f39ff20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleCore_Plugin_Free)(param_1);
  return;
}

// OodleMalloc @ 14f39ff40

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

// OodleMallocAligned @ 14f39ff90

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

// ProcessChunk @ 14f39ffe0

int __thiscall
oo2::CacheTableMatchFinder::ProcessChunk
          (CacheTableMatchFinder *this,int param_1,UnpackedMatchPair *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  UnpackedMatchPair *pUVar4;
  longlong lVar5;
  
  lVar1 = this->m_pos;
  lVar5 = param_1 + lVar1;
  lVar3 = lVar5;
  if (this->m_parse_end_pos <= lVar5) {
    lVar3 = this->m_parse_end_pos;
  }
  if (this->m_size <= lVar5) {
    lVar5 = this->m_size;
  }
  lVar2 = lVar1;
  if ((this->longMatchOffs != 0) && (lVar1 < lVar3)) {
    lVar2 = ReportLongMatch(this,param_2,lVar1,lVar3,lVar1,param_3);
  }
  if ((g_rrCPUx86_feature_flags & 0x100) == 0) {
    lVar3 = ProcessChunkSSE2(this,lVar2,lVar1,lVar3,param_2,param_3);
  }
  else {
    lVar3 = ProcessChunkAVX2(this,lVar2,lVar1,lVar3,param_2,param_3);
  }
  if (lVar3 != lVar5) {
    pUVar4 = param_2 + (lVar3 - lVar1) * (longlong)param_3;
    for (; lVar3 < lVar5; lVar3 = lVar3 + 1) {
      pUVar4->length = 0;
      pUVar4 = pUVar4 + param_3;
    }
  }
  this->m_pos = lVar3;
  return (int)lVar5 - (int)lVar1;
}

// ProcessChunkGeneric @ 14f3a00e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

long64 __thiscall
oo2::CacheTableMatchFinder::ProcessChunkGeneric
          (CacheTableMatchFinder *this,long64 param_1,long64 param_2,long64 param_3,
          UnpackedMatchPair *param_4,int param_5)

{
  ulonglong *puVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  UnpackedMatchPair *_Dst;
  LRMSet *pLVar4;
  uchar *puVar5;
  uint *puVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  uchar **ppuVar9;
  uchar **ppuVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  long64 lVar14;
  byte bVar15;
  ulonglong *puVar16;
  uchar *puVar17;
  uchar **ppuVar18;
  uchar **ppuVar19;
  longlong lVar20;
  uint uVar21;
  longlong lVar22;
  ulonglong uVar23;
  uchar *puVar24;
  uint *puVar25;
  longlong lVar26;
  longlong lVar27;
  bool bVar28;
  undefined1 auStackY_1f8 [32];
  int iStack_1bc;
  uint *local_1b8;
  int local_190 [2];
  uint *local_188;
  uchar *local_180;
  longlong local_178;
  uchar *local_170;
  undefined8 local_168;
  undefined8 local_160 [33];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  local_178 = this->m_parse_end_pos;
  pLVar4 = this->m_lrms;
  puVar5 = this->m_raw_end;
  local_170 = this->m_ubuf;
  puVar1 = (ulonglong *)(puVar5 + -4);
  local_180 = puVar5;
joined_r0x00014f3a0152:
  if (param_3 <= param_1) {
    return param_1;
  }
  local_188 = (this->ctmf).m_next_row_second;
  puVar3 = (ulonglong *)(local_170 + param_1);
  puVar6 = (this->ctmf).m_next_row;
  uVar21 = (this->ctmf).m_next_hash;
  bVar15 = (byte)(this->ctmf).m_table_size_bits;
  if (param_1 + 8 < local_178) {
    puVar25 = (this->ctmf).m_hash_table.m_ptr;
    puVar16 = puVar3 + 1;
    (this->ctmf).m_next_ptr = (uchar *)puVar16;
    uVar11 = (uint)((this->ctmf).m_hash_mul * *puVar16 >> 0x20);
    uVar11 = uVar11 << (bVar15 & 0x1f) | uVar11 >> 0x20 - (bVar15 & 0x1f);
    (this->ctmf).m_next_hash = uVar11;
    (this->ctmf).m_next_row = puVar25 + (uVar11 & (this->ctmf).m_hash_row_mask);
    (this->ctmf).m_next_row_second =
         puVar25 + (*puVar16 * -0x30e44323485a9b9d >> (0x40 - bVar15 & 0x3f) & 0xfffffffffffffff0);
  }
  puVar25 = (this->ctmf).m_hash_table.m_ptr;
  plVar2 = (longlong *)((longlong)puVar3 + 1);
  (this->ctmf).m_next_ptr = (uchar *)plVar2;
  uVar11 = (uint)((this->ctmf).m_hash_mul * *plVar2 >> 0x20);
  uVar11 = uVar11 << (bVar15 & 0x1f) | uVar11 >> 0x20 - (bVar15 & 0x1f);
  (this->ctmf).m_next_hash = uVar11;
  (this->ctmf).m_next_row = puVar25 + (uVar11 & (this->ctmf).m_hash_row_mask);
  lVar20 = 0;
  (this->ctmf).m_next_row_second =
       puVar25 + ((ulonglong)(*plVar2 * -0x30e44323485a9b9d) >> (0x40 - bVar15 & 0x3f) &
                 0xfffffffffffffff0);
  if ((pLVar4 != (LRMSet *)0x0) &&
     (iVar12 = LRMScannerWindowed_FindMatchAndRoll
                         (&this->scanner,(uchar *)puVar3,local_180,(long64 *)local_190), 0 < iVar12)
     ) {
    local_168._0_4_ = iVar12;
    lVar20 = 1;
    local_168._4_4_ = local_190[0];
  }
  lVar27 = -param_1;
  uVar21 = uVar21 & 0xfc000000;
  puVar24 = &DAT_00000003;
  local_1b8 = puVar6;
  do {
    puVar25 = local_1b8 + 2;
    lVar26 = 4;
    do {
      uVar11 = (uint)param_1;
      if (((((puVar25[-2] & 0xfc000000) == uVar21) &&
           (uVar23 = (ulonglong)(puVar25[-2] - uVar11) | 0xfffffffffc000000,
           lVar27 <= (longlong)uVar23)) && ((longlong)puVar24 < (longlong)puVar1 - (longlong)puVar3)
          ) && (puVar24[(longlong)puVar3] ==
                ((uchar *)(uVar23 + (longlong)puVar3))[(longlong)puVar24])) {
        lVar22 = (longlong)(uVar23 + (longlong)puVar3) - (longlong)puVar3;
        puVar16 = puVar3;
        if (puVar3 <= puVar5 + -0xc) {
LAB_14f3a0330:
          uVar13 = *(ulonglong *)(lVar22 + (longlong)puVar16) ^ *puVar16;
          if (uVar13 == 0) goto code_r0x00014f3a033d;
          uVar8 = 0;
          if (uVar13 != 0) {
            for (; (uVar13 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
            }
          }
          puVar17 = (uchar *)(((uVar8 >> 3) - (longlong)puVar3) + (longlong)puVar16);
          goto LAB_14f3a0365;
        }
LAB_14f3a0346:
        puVar17 = (uchar *)((longlong)puVar16 - (longlong)puVar3);
        for (; (puVar16 < puVar1 && ((uchar)*puVar16 == *(uchar *)(lVar22 + (longlong)puVar16)));
            puVar16 = (ulonglong *)((longlong)puVar16 + 1)) {
          puVar17 = puVar17 + 1;
        }
LAB_14f3a0365:
        if ((longlong)puVar24 < (longlong)puVar17) {
          *(int *)(&local_168 + lVar20) = (int)puVar17;
          *(int *)((longlong)local_160 + lVar20 * 8 + -4) = -(int)uVar23;
          lVar20 = lVar20 + 1;
          puVar24 = puVar17;
        }
      }
      if ((((puVar25[-1] & 0xfc000000) == uVar21) &&
          (uVar23 = (ulonglong)(puVar25[-1] - uVar11) | 0xfffffffffc000000,
          lVar27 <= (longlong)uVar23)) &&
         (((longlong)puVar24 < (longlong)puVar1 - (longlong)puVar3 &&
          (puVar24[(longlong)puVar3] == ((uchar *)(uVar23 + (longlong)puVar3))[(longlong)puVar24])))
         ) {
        lVar22 = (longlong)(uVar23 + (longlong)puVar3) - (longlong)puVar3;
        puVar16 = puVar3;
        if (puVar3 <= puVar5 + -0xc) {
LAB_14f3a03d0:
          uVar13 = *(ulonglong *)(lVar22 + (longlong)puVar16) ^ *puVar16;
          if (uVar13 == 0) goto code_r0x00014f3a03dd;
          uVar8 = 0;
          if (uVar13 != 0) {
            for (; (uVar13 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
            }
          }
          puVar17 = (uchar *)(((uVar8 >> 3) - (longlong)puVar3) + (longlong)puVar16);
          goto LAB_14f3a0405;
        }
LAB_14f3a03e6:
        puVar17 = (uchar *)((longlong)puVar16 - (longlong)puVar3);
        for (; (puVar16 < puVar1 && ((uchar)*puVar16 == *(uchar *)(lVar22 + (longlong)puVar16)));
            puVar16 = (ulonglong *)((longlong)puVar16 + 1)) {
          puVar17 = puVar17 + 1;
        }
LAB_14f3a0405:
        if ((longlong)puVar24 < (longlong)puVar17) {
          *(int *)(&local_168 + lVar20) = (int)puVar17;
          *(int *)((longlong)local_160 + lVar20 * 8 + -4) = -(int)uVar23;
          lVar20 = lVar20 + 1;
          puVar24 = puVar17;
        }
      }
      if (((((*puVar25 & 0xfc000000) == uVar21) &&
           (uVar23 = (ulonglong)(*puVar25 - uVar11) | 0xfffffffffc000000, lVar27 <= (longlong)uVar23
           )) && ((longlong)puVar24 < (longlong)puVar1 - (longlong)puVar3)) &&
         (puVar24[(longlong)puVar3] == ((uchar *)(uVar23 + (longlong)puVar3))[(longlong)puVar24])) {
        lVar22 = (longlong)(uVar23 + (longlong)puVar3) - (longlong)puVar3;
        puVar16 = puVar3;
        if (puVar3 <= puVar5 + -0xc) {
LAB_14f3a0470:
          uVar13 = *(ulonglong *)(lVar22 + (longlong)puVar16) ^ *puVar16;
          if (uVar13 == 0) goto code_r0x00014f3a047d;
          uVar8 = 0;
          if (uVar13 != 0) {
            for (; (uVar13 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
            }
          }
          puVar17 = (uchar *)(((uVar8 >> 3) - (longlong)puVar3) + (longlong)puVar16);
          goto LAB_14f3a04a5;
        }
LAB_14f3a0486:
        puVar17 = (uchar *)((longlong)puVar16 - (longlong)puVar3);
        for (; (puVar16 < puVar1 && ((uchar)*puVar16 == *(uchar *)(lVar22 + (longlong)puVar16)));
            puVar16 = (ulonglong *)((longlong)puVar16 + 1)) {
          puVar17 = puVar17 + 1;
        }
LAB_14f3a04a5:
        if ((longlong)puVar24 < (longlong)puVar17) {
          *(int *)(&local_168 + lVar20) = (int)puVar17;
          *(int *)((longlong)local_160 + lVar20 * 8 + -4) = -(int)uVar23;
          lVar20 = lVar20 + 1;
          puVar24 = puVar17;
        }
      }
      if ((((puVar25[1] & 0xfc000000) == uVar21) &&
          (uVar23 = (ulonglong)(puVar25[1] - uVar11) | 0xfffffffffc000000,
          lVar27 <= (longlong)uVar23)) &&
         (((longlong)puVar24 < (longlong)puVar1 - (longlong)puVar3 &&
          (puVar24[(longlong)puVar3] == ((uchar *)(uVar23 + (longlong)puVar3))[(longlong)puVar24])))
         ) {
        lVar22 = (longlong)(uVar23 + (longlong)puVar3) - (longlong)puVar3;
        puVar16 = puVar3;
        if (puVar3 <= puVar5 + -0xc) {
LAB_14f3a0510:
          uVar13 = *(ulonglong *)(lVar22 + (longlong)puVar16) ^ *puVar16;
          if (uVar13 == 0) goto code_r0x00014f3a051d;
          uVar8 = 0;
          if (uVar13 != 0) {
            for (; (uVar13 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
            }
          }
          puVar17 = (uchar *)(((uVar8 >> 3) - (longlong)puVar3) + (longlong)puVar16);
          goto LAB_14f3a0545;
        }
LAB_14f3a0526:
        puVar17 = (uchar *)((longlong)puVar16 - (longlong)puVar3);
        for (; (puVar16 < puVar1 && ((uchar)*puVar16 == *(uchar *)(lVar22 + (longlong)puVar16)));
            puVar16 = (ulonglong *)((longlong)puVar16 + 1)) {
          puVar17 = puVar17 + 1;
        }
LAB_14f3a0545:
        if ((longlong)puVar24 < (longlong)puVar17) {
          *(int *)(&local_168 + lVar20) = (int)puVar17;
          *(int *)((longlong)local_160 + lVar20 * 8 + -4) = -(int)uVar23;
          lVar20 = lVar20 + 1;
          puVar24 = puVar17;
        }
      }
      puVar25 = puVar25 + 4;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    if (local_1b8 == local_188) goto LAB_14f3a05d1;
    local_1b8 = local_188;
  } while( true );
code_r0x00014f3a033d:
  puVar16 = puVar16 + 1;
  if (puVar5 + -0xc < puVar16) goto LAB_14f3a0346;
  goto LAB_14f3a0330;
code_r0x00014f3a03dd:
  puVar16 = puVar16 + 1;
  if (puVar5 + -0xc < puVar16) goto LAB_14f3a03e6;
  goto LAB_14f3a03d0;
code_r0x00014f3a047d:
  puVar16 = puVar16 + 1;
  if (puVar5 + -0xc < puVar16) goto LAB_14f3a0486;
  goto LAB_14f3a0470;
code_r0x00014f3a051d:
  puVar16 = puVar16 + 1;
  if (puVar5 + -0xc < puVar16) goto LAB_14f3a0526;
  goto LAB_14f3a0510;
LAB_14f3a05d1:
  lVar27 = (longlong)param_5;
  uVar21 = uVar11 & 0x3ffffff | uVar21;
  uVar7 = *(undefined8 *)(puVar6 + 3);
  *(undefined8 *)(puVar6 + 1) = *(undefined8 *)puVar6;
  *(undefined8 *)(puVar6 + 3) = *(undefined8 *)(puVar6 + 2);
  *(undefined8 *)(puVar6 + 4) = uVar7;
  *(undefined8 *)(puVar6 + 6) = *(undefined8 *)(puVar6 + 5);
  *(undefined8 *)(puVar6 + 8) = *(undefined8 *)(puVar6 + 7);
  *(undefined8 *)(puVar6 + 10) = *(undefined8 *)(puVar6 + 9);
  *(undefined8 *)(puVar6 + 0xc) = *(undefined8 *)(puVar6 + 0xb);
  *(undefined8 *)(puVar6 + 0xe) = *(undefined8 *)(puVar6 + 0xd);
  *puVar6 = uVar21;
  uVar7 = *(undefined8 *)(local_188 + 3);
  *(undefined8 *)(local_188 + 1) = *(undefined8 *)local_188;
  *(undefined8 *)(local_188 + 3) = *(undefined8 *)(local_188 + 2);
  *(undefined8 *)(local_188 + 4) = uVar7;
  *(undefined8 *)(local_188 + 6) = *(undefined8 *)(local_188 + 5);
  *(undefined8 *)(local_188 + 8) = *(undefined8 *)(local_188 + 7);
  *(undefined8 *)(local_188 + 10) = *(undefined8 *)(local_188 + 9);
  *(undefined8 *)(local_188 + 0xc) = *(undefined8 *)(local_188 + 0xb);
  *(undefined8 *)(local_188 + 0xe) = *(undefined8 *)(local_188 + 0xd);
  *local_188 = uVar21;
  _Dst = param_4 + (param_1 - param_2) * lVar27;
  if (lVar20 == 0) {
    _Dst->length = 0;
  }
  else {
    if (1 < lVar20) {
      lVar26 = 1;
      do {
        uVar7 = (&local_168)[lVar26];
        lVar22 = lVar26;
        if (0 < lVar26) {
          iStack_1bc = (int)((ulonglong)uVar7 >> 0x20);
          ppuVar18 = &local_170 + lVar26;
          do {
            if ((int)uVar7 == *(int *)ppuVar18) {
              bVar28 = iStack_1bc < *(int *)((longlong)ppuVar18 + 4);
            }
            else {
              bVar28 = *(int *)ppuVar18 <= (int)uVar7;
            }
            if (!bVar28) break;
            lVar22 = lVar22 + -1;
            ppuVar18[1] = *ppuVar18;
            ppuVar18 = ppuVar18 + -1;
          } while (0 < lVar22);
        }
        lVar26 = lVar26 + 1;
        (&local_168)[lVar22] = uVar7;
      } while (lVar26 < lVar20);
      ppuVar18 = (uchar **)(&local_168 + lVar20);
      iVar12 = (int)local_168;
      ppuVar10 = (uchar **)&local_168;
      do {
        ppuVar19 = ppuVar10;
        if (&local_170 + lVar20 <= ppuVar19) break;
        bVar28 = iVar12 != *(int *)(ppuVar19 + 1);
        iVar12 = *(int *)(ppuVar19 + 1);
        ppuVar10 = ppuVar19 + 1;
      } while (bVar28);
      if (ppuVar19 < &local_170 + lVar20) {
        ppuVar10 = ppuVar19 + 2;
        while (ppuVar9 = ppuVar10, ppuVar9 < ppuVar18) {
          ppuVar10 = ppuVar9 + 1;
          if (*(int *)ppuVar19 != *(int *)ppuVar9) {
            ppuVar19 = ppuVar19 + 1;
            *ppuVar19 = *ppuVar9;
          }
        }
        ppuVar18 = ppuVar19 + 1;
      }
      lVar20 = (longlong)(int)((longlong)ppuVar18 - (longlong)&local_168 >> 3);
    }
    iVar12 = (int)local_168;
    lVar22 = (longlong)(int)local_168;
    lVar26 = lVar27;
    if (lVar20 < lVar27) {
      lVar26 = lVar20;
    }
    memcpy(_Dst,&local_168,lVar26 * 8);
    if (lVar26 < lVar27) {
      _Dst[lVar26].length = 0;
    }
    if (0x4c < iVar12) {
      this->longMatchEnd = lVar22 + param_1;
      this->longMatchOffs = local_168._4_4_;
      this->longMatchPos = param_1;
      this->longMatchLen = iVar12;
      lVar14 = ReportLongMatch(this,param_4,param_2,param_3,param_1,param_5);
      param_1 = lVar14 + -1;
    }
  }
  param_1 = param_1 + 1;
  goto joined_r0x00014f3a0152;
}

// ProcessChunkSSE2 @ 14f3a0840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long64 __thiscall
oo2::CacheTableMatchFinder::ProcessChunkSSE2
          (CacheTableMatchFinder *this,long64 param_1,long64 param_2,long64 param_3,
          UnpackedMatchPair *param_4,int param_5)

{
  longlong *plVar1;
  ulonglong *puVar2;
  UnpackedMatchPair *_Dst;
  uchar *puVar3;
  uint *puVar4;
  uint *puVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ushort uVar8;
  LRMSet **ppLVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  LRMSet **ppLVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  ulonglong *puVar18;
  long64 lVar19;
  byte bVar20;
  ulonglong uVar21;
  uchar *puVar22;
  LRMSet **ppLVar23;
  LRMSet **ppLVar24;
  longlong lVar25;
  uint *puVar26;
  longlong lVar27;
  longlong lVar28;
  ulonglong uVar29;
  longlong lVar30;
  uchar *puVar31;
  uint uVar32;
  bool bVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auStackY_1f8 [32];
  int iStack_1c4;
  int local_1a8 [2];
  long64 local_1a0;
  uchar *local_198;
  longlong local_190;
  uchar *local_188;
  LRMSet *local_180;
  undefined8 local_178;
  undefined8 local_170 [33];
  ulonglong local_68;
  
  uVar13 = _UNK_1531da91c;
  uVar12 = _UNK_1531da918;
  uVar11 = _UNK_1531da914;
  uVar10 = ___xmm_fc000000fc000000fc000000fc000000;
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  local_190 = this->m_parse_end_pos;
  puVar3 = this->m_raw_end;
  local_188 = this->m_ubuf;
  local_180 = this->m_lrms;
  local_198 = puVar3;
  local_1a0 = param_2;
  do {
    if (param_3 <= param_1) {
      return param_1;
    }
    uVar17 = (this->ctmf).m_next_hash;
    puVar2 = (ulonglong *)(local_188 + param_1);
    puVar4 = (this->ctmf).m_next_row;
    puVar5 = (this->ctmf).m_next_row_second;
    bVar20 = (byte)(this->ctmf).m_table_size_bits;
    if (param_1 + 8 < local_190) {
      puVar26 = (this->ctmf).m_hash_table.m_ptr;
      puVar18 = puVar2 + 1;
      (this->ctmf).m_next_ptr = (uchar *)puVar18;
      uVar15 = (uint)((this->ctmf).m_hash_mul * *puVar18 >> 0x20);
      uVar15 = uVar15 << (bVar20 & 0x1f) | uVar15 >> 0x20 - (bVar20 & 0x1f);
      (this->ctmf).m_next_hash = uVar15;
      (this->ctmf).m_next_row = puVar26 + (uVar15 & (this->ctmf).m_hash_row_mask);
      (this->ctmf).m_next_row_second =
           puVar26 + (*puVar18 * -0x30e44323485a9b9d >> (0x40 - bVar20 & 0x3f) & 0xfffffffffffffff0)
      ;
    }
    puVar26 = (this->ctmf).m_hash_table.m_ptr;
    plVar1 = (longlong *)((longlong)puVar2 + 1);
    (this->ctmf).m_next_ptr = (uchar *)plVar1;
    uVar15 = (uint)((this->ctmf).m_hash_mul * *plVar1 >> 0x20);
    uVar15 = uVar15 << (bVar20 & 0x1f) | uVar15 >> 0x20 - (bVar20 & 0x1f);
    (this->ctmf).m_next_hash = uVar15;
    (this->ctmf).m_next_row = puVar26 + (uVar15 & (this->ctmf).m_hash_row_mask);
    lVar25 = 0;
    (this->ctmf).m_next_row_second =
         puVar26 + ((ulonglong)(*plVar1 * -0x30e44323485a9b9d) >> (0x40 - bVar20 & 0x3f) &
                   0xfffffffffffffff0);
    if ((local_180 != (LRMSet *)0x0) &&
       (iVar16 = LRMScannerWindowed_FindMatchAndRoll
                           (&this->scanner,(uchar *)puVar2,local_198,(long64 *)local_1a8),
       0 < iVar16)) {
      local_178._0_4_ = iVar16;
      lVar25 = 1;
      local_178._4_4_ = local_1a8[0];
    }
    lVar19 = local_1a0;
    uVar15 = uVar17 & 0xfc000000;
    puVar31 = &DAT_00000003;
    puVar26 = puVar4;
    do {
      auVar36._0_4_ = -(uint)((uVar10 & puVar26[4]) == uVar15);
      auVar36._4_4_ = -(uint)((uVar11 & puVar26[5]) == uVar15);
      auVar36._8_4_ = -(uint)((uVar12 & puVar26[6]) == uVar15);
      auVar36._12_4_ = -(uint)((uVar13 & puVar26[7]) == uVar15);
      auVar37._0_4_ = -(uint)((uVar10 & *puVar26) == uVar15);
      auVar37._4_4_ = -(uint)((uVar11 & puVar26[1]) == uVar15);
      auVar37._8_4_ = -(uint)((uVar12 & puVar26[2]) == uVar15);
      auVar37._12_4_ = -(uint)((uVar13 & puVar26[3]) == uVar15);
      auVar37 = packssdw(auVar37,auVar36);
      auVar35._0_4_ = -(uint)((uVar10 & puVar26[8]) == uVar15);
      auVar35._4_4_ = -(uint)((uVar11 & puVar26[9]) == uVar15);
      auVar35._8_4_ = -(uint)((uVar12 & puVar26[10]) == uVar15);
      auVar35._12_4_ = -(uint)((uVar13 & puVar26[0xb]) == uVar15);
      auVar34._0_4_ = -(uint)((uVar10 & puVar26[0xc]) == uVar15);
      auVar34._4_4_ = -(uint)((uVar11 & puVar26[0xd]) == uVar15);
      auVar34._8_4_ = -(uint)((uVar12 & puVar26[0xe]) == uVar15);
      auVar34._12_4_ = -(uint)((uVar13 & puVar26[0xf]) == uVar15);
      auVar36 = packssdw(auVar35,auVar34);
      auVar36 = packsswb(auVar37,auVar36);
      uVar8 = (ushort)(SUB161(auVar36 >> 7,0) & 1) | (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar36[0xf] >> 7) << 0xf;
      uVar32 = (uint)uVar8;
      if (uVar8 != 0) {
        do {
          iVar16 = 0;
          if (uVar32 != 0) {
            for (; (uVar32 >> iVar16 & 1) == 0; iVar16 = iVar16 + 1) {
            }
          }
          uVar32 = uVar32 & uVar32 - 1;
          uVar29 = (ulonglong)(puVar26[iVar16] - (uint)param_1) | 0xfffffffffc000000;
          if (((-param_1 <= (longlong)uVar29) &&
              ((longlong)puVar31 < (longlong)(puVar3 + -4) - (longlong)puVar2)) &&
             (puVar31[(longlong)puVar2] == ((uchar *)(uVar29 + (longlong)puVar2))[(longlong)puVar31]
             )) {
            lVar27 = (longlong)(uVar29 + (longlong)puVar2) - (longlong)puVar2;
            puVar18 = puVar2;
            if (puVar2 <= puVar3 + -0xc) {
LAB_14f3a0ae0:
              uVar21 = *(ulonglong *)(lVar27 + (longlong)puVar18) ^ *puVar18;
              if (uVar21 == 0) goto code_r0x00014f3a0ae9;
              uVar7 = 0;
              if (uVar21 != 0) {
                for (; (uVar21 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
                }
              }
              puVar22 = (uchar *)(((uVar7 >> 3) - (longlong)puVar2) + (longlong)puVar18);
              goto LAB_14f3a0b14;
            }
LAB_14f3a0af2:
            puVar22 = (uchar *)((longlong)puVar18 - (longlong)puVar2);
            for (; (puVar18 < puVar3 + -4 &&
                   ((uchar)*puVar18 == *(uchar *)((longlong)puVar18 + lVar27)));
                puVar18 = (ulonglong *)((longlong)puVar18 + 1)) {
              puVar22 = puVar22 + 1;
            }
LAB_14f3a0b14:
            if ((longlong)puVar31 < (longlong)puVar22) {
              *(int *)(&local_178 + lVar25) = (int)puVar22;
              *(int *)((longlong)local_170 + lVar25 * 8 + -4) = -(int)uVar29;
              lVar25 = lVar25 + 1;
              puVar31 = puVar22;
            }
          }
        } while (uVar32 != 0);
      }
      bVar33 = puVar26 != puVar5;
      puVar26 = puVar5;
    } while (bVar33);
    uVar6 = *(undefined8 *)(puVar4 + 3);
    uVar17 = ((uint)param_1 ^ uVar17) & 0x3ffffff ^ uVar17;
    *(undefined8 *)(puVar4 + 1) = *(undefined8 *)puVar4;
    *(undefined8 *)(puVar4 + 3) = *(undefined8 *)(puVar4 + 2);
    *(undefined8 *)(puVar4 + 4) = uVar6;
    *(undefined8 *)(puVar4 + 6) = *(undefined8 *)(puVar4 + 5);
    *(undefined8 *)(puVar4 + 8) = *(undefined8 *)(puVar4 + 7);
    *(undefined8 *)(puVar4 + 10) = *(undefined8 *)(puVar4 + 9);
    *(undefined8 *)(puVar4 + 0xc) = *(undefined8 *)(puVar4 + 0xb);
    *(undefined8 *)(puVar4 + 0xe) = *(undefined8 *)(puVar4 + 0xd);
    *puVar4 = uVar17;
    uVar6 = *(undefined8 *)(puVar5 + 3);
    *(undefined8 *)(puVar5 + 1) = *(undefined8 *)puVar5;
    *(undefined8 *)(puVar5 + 3) = *(undefined8 *)(puVar5 + 2);
    *(undefined8 *)(puVar5 + 4) = uVar6;
    *(undefined8 *)(puVar5 + 6) = *(undefined8 *)(puVar5 + 5);
    *(undefined8 *)(puVar5 + 8) = *(undefined8 *)(puVar5 + 7);
    *(undefined8 *)(puVar5 + 10) = *(undefined8 *)(puVar5 + 9);
    *(undefined8 *)(puVar5 + 0xc) = *(undefined8 *)(puVar5 + 0xb);
    *(undefined8 *)(puVar5 + 0xe) = *(undefined8 *)(puVar5 + 0xd);
    *puVar5 = uVar17;
    lVar27 = (longlong)param_5;
    _Dst = param_4 + (param_1 - local_1a0) * lVar27;
    if (lVar25 == 0) {
      _Dst->length = 0;
    }
    else {
      if (1 < lVar25) {
        lVar30 = 1;
        do {
          uVar6 = (&local_178)[lVar30];
          lVar28 = lVar30;
          if (0 < lVar30) {
            iStack_1c4 = (int)((ulonglong)uVar6 >> 0x20);
            ppLVar23 = &local_180 + lVar30;
            do {
              if ((int)uVar6 == *(int *)ppLVar23) {
                bVar33 = iStack_1c4 < *(int *)((longlong)ppLVar23 + 4);
              }
              else {
                bVar33 = *(int *)ppLVar23 <= (int)uVar6;
              }
              if (!bVar33) break;
              lVar28 = lVar28 + -1;
              ppLVar23[1] = *ppLVar23;
              ppLVar23 = ppLVar23 + -1;
            } while (0 < lVar28);
          }
          lVar30 = lVar30 + 1;
          (&local_178)[lVar28] = uVar6;
        } while (lVar30 < lVar25);
        ppLVar23 = (LRMSet **)(&local_178 + lVar25);
        iVar16 = (int)local_178;
        ppLVar14 = (LRMSet **)&local_178;
        do {
          ppLVar24 = ppLVar14;
          if (&local_180 + lVar25 <= ppLVar24) break;
          bVar33 = iVar16 != *(int *)(ppLVar24 + 1);
          iVar16 = *(int *)(ppLVar24 + 1);
          ppLVar14 = ppLVar24 + 1;
        } while (bVar33);
        if (ppLVar24 < &local_180 + lVar25) {
          ppLVar14 = ppLVar24 + 2;
          while (ppLVar9 = ppLVar14, ppLVar9 < ppLVar23) {
            ppLVar14 = ppLVar9 + 1;
            if (*(int *)ppLVar24 != *(int *)ppLVar9) {
              ppLVar24 = ppLVar24 + 1;
              *ppLVar24 = *ppLVar9;
            }
          }
          ppLVar23 = ppLVar24 + 1;
        }
        lVar25 = (longlong)(int)((longlong)ppLVar23 - (longlong)&local_178 >> 3);
      }
      iVar16 = (int)local_178;
      lVar28 = (longlong)(int)local_178;
      lVar30 = lVar27;
      if (lVar25 < lVar27) {
        lVar30 = lVar25;
      }
      memcpy(_Dst,&local_178,lVar30 * 8);
      if (lVar30 < lVar27) {
        _Dst[lVar30].length = 0;
      }
      if (0x4c < iVar16) {
        this->longMatchEnd = lVar28 + param_1;
        this->longMatchOffs = local_178._4_4_;
        this->longMatchPos = param_1;
        this->longMatchLen = iVar16;
        lVar19 = ReportLongMatch(this,param_4,lVar19,param_3,param_1,param_5);
        param_1 = lVar19 + -1;
      }
    }
    param_1 = param_1 + 1;
  } while( true );
code_r0x00014f3a0ae9:
  puVar18 = puVar18 + 1;
  if (puVar3 + -0xc < puVar18) goto LAB_14f3a0af2;
  goto LAB_14f3a0ae0;
}

// RR_GET64_NATIVE @ 14f3a0e20

ulong64 __cdecl oo2::RR_GET64_NATIVE(void *param_1)

{
  return *(ulong64 *)param_1;
}

// Release @ 14f3a0e30

void __thiscall oo2::CacheTableMatchFinder::Release(CacheTableMatchFinder *this)

{
  rrArenaAllocator *this_00;
  
  this_00 = (this->ctmf).m_hash_table_arena;
  (**(code **)this->_padding_)(this,0);
  if (this_00 != (rrArenaAllocator *)0x0) {
    rrArenaAllocator::Free(this_00,this,0x278);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014f3a0e75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleCore_Plugin_Free)(this);
  return;
}

// ReportLongMatch @ 14f3a0ea0

long64 __thiscall
oo2::CacheTableMatchFinder::ReportLongMatch
          (CacheTableMatchFinder *this,UnpackedMatchPair *param_1,long64 param_2,long64 param_3,
          long64 param_4,int param_5)

{
  longlong lVar1;
  UnpackedMatchPair *pUVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  long64 lVar6;
  
  lVar1 = this->longMatchPos;
  lVar6 = param_2;
  if (param_2 < lVar1 + 1) {
    lVar6 = lVar1 + 1;
  }
  lVar5 = (longlong)param_5;
  if (this->longMatchEnd < param_3) {
    param_3 = this->longMatchEnd;
  }
  if (lVar6 < param_3) {
    pUVar2 = param_1 + (lVar6 - param_2) * lVar5;
    lVar1 = param_3 - lVar6;
    do {
      pUVar2->length = 0;
      pUVar2 = pUVar2 + lVar5;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
    lVar1 = this->longMatchPos;
  }
  if ((lVar6 <= lVar1 + 1) && (lVar1 + 1 < param_3)) {
    lVar1 = ((lVar1 - param_2) + 1) * lVar5;
    param_1[lVar1].length = this->longMatchLen + -1;
    param_1[lVar1].offset = this->longMatchOffs;
    param_1[lVar1 + 1].length = 0;
    lVar1 = this->longMatchPos;
  }
  lVar4 = lVar1 + 2;
  if (lVar1 + 2 <= lVar6) {
    lVar4 = lVar6;
  }
  lVar4 = (ulonglong)((int)lVar1 - (int)lVar4 & 3) + lVar4;
  if (lVar4 < param_3) {
    lVar1 = lVar4 - param_2;
    do {
      pUVar2 = param_1 + lVar1 * lVar5;
      iVar3 = (int)lVar4;
      lVar4 = lVar4 + 4;
      pUVar2->length = (int)this->longMatchEnd - iVar3;
      pUVar2->offset = this->longMatchOffs;
      pUVar2[1].length = 0;
      lVar1 = lVar1 + 4;
    } while (lVar4 < param_3);
  }
  if (param_3 == this->longMatchEnd) {
    if (this->longMatchEnd < this->m_parse_end_pos) {
      CTMF<unsigned_int,4,8,4>::step_and_insert
                (&this->ctmf,this->m_ubuf + this->longMatchPos,this->longMatchLen);
    }
    if (this->m_lrms != (LRMSet *)0x0) {
      LRMScannerWindowed_Init
                (&this->scanner,this->m_lrms,this->m_ubuf + this->longMatchEnd,this->m_raw_end,
                 0x40000000);
    }
    this->longMatchOffs = 0;
  }
  return param_3;
}

// S32_checkA @ 14f3a1010

int __cdecl oo2::S32_checkA(long64 param_1)

{
  return (int)param_1;
}

// S32_clampA @ 14f3a1020

int __cdecl oo2::S32_clampA(long64 param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0x7fffffff;
  if (param_1 < 0x7fffffff) {
    lVar2 = param_1;
  }
  lVar1 = -0x80000000;
  if (-0x80000000 < lVar2) {
    lVar1 = lVar2;
  }
  return (int)lVar1;
}

// ThreadProfiler_Pop @ 14f3a1060

void __cdecl oo2::ThreadProfiler_Pop(ulong64 param_1)

{
  if (fp_ThreadProfiler_Pop != (_func___cdecl_void_ulong64 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f3a106c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*fp_ThreadProfiler_Pop)(param_1);
    return;
  }
  return;
}

// ThreadProfiler_Push @ 14f3a1080

ulong64 __cdecl oo2::ThreadProfiler_Push(char *param_1,ulong64 param_2)

{
  ulong64 uVar1;
  
  if (fp_ThreadProfiler_Push != (_func___cdecl_ulong64_char_ptr_ulong64 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f3a108c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*fp_ThreadProfiler_Push)(param_1,param_2);
    return uVar1;
  }
  return 0xffffffffffffffff;
}

// U8_void @ 14f3a10a0

uchar * __cdecl oo2::U8_void(void *param_1)

{
  return param_1;
}

// allocate @ 14f3a10c0

void __thiscall
oo2::CTMF<unsigned_int,4,8,4>::allocate
          (CTMF<unsigned_int,4,8,4> *this,int param_1,int param_2,int param_3,
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
  this->m_hash_row_mask = (1 << ((byte)param_1 & 0x1f)) - 0x10;
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
        goto LAB_14f3a11ed;
      }
    }
  }
  puVar8 = (*g_fp_OodleCore_Plugin_MallocAligned)(lVar9,0x40);
  if (puVar8 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(lVar9);
  }
LAB_14f3a11ed:
  (this->m_hash_table).m_ptr = puVar8;
  this->m_hash_table_arena = param_4;
  memset((this->m_hash_table).m_ptr,0,(1L << ((byte)this->m_table_size_bits & 0x3f)) << 2);
  return;
}

// getmatchlen_mml1_forceinline @ 14f3a1240

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

// hash @ 14f3a12a0

uint __thiscall oo2::CTMF<unsigned_int,4,8,4>::hash(CTMF<unsigned_int,4,8,4> *this,uchar *param_1)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = (byte)this->m_table_size_bits & 0x1f;
  uVar2 = (uint)(this->m_hash_mul * *(longlong *)param_1 >> 0x20);
  return uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
}

// hash_bytes_64 @ 14f3a12c0

ulong64 __cdecl oo2::`anonymous_namespace'::hash_bytes_64(uchar *param_1,ulong64 param_2)

{
  return param_2 * *(longlong *)param_1;
}

// havematch_better @ 14f3a12e0

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
LAB_14f3a1310:
      uVar3 = *(ulonglong *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2) ^ *puVar2;
      if (uVar3 == 0) goto code_r0x00014f3a1319;
      uVar1 = 0;
      if (uVar3 != 0) {
        for (; (uVar3 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
        }
      }
      pcVar4 = (char *)(((uVar1 >> 3) - (longlong)param_1) + (longlong)puVar2);
      goto LAB_14f3a1345;
    }
LAB_14f3a1325:
    pcVar4 = (char *)((longlong)puVar2 - (longlong)param_1);
    for (; (puVar2 < param_3 &&
           ((char)*puVar2 == *(char *)((longlong)puVar2 + ((longlong)param_2 - (longlong)param_1))))
        ; puVar2 = (ulonglong *)((longlong)puVar2 + 1)) {
      pcVar4 = pcVar4 + 1;
    }
LAB_14f3a1345:
    if (param_4 < (longlong)pcVar4) {
      *param_5 = (long64)pcVar4;
      return true;
    }
  }
  return false;
code_r0x00014f3a1319:
  puVar2 = puVar2 + 1;
  if (param_3 + -8 < puVar2) goto LAB_14f3a1325;
  goto LAB_14f3a1310;
}

// insert @ 14f3a1370

void __thiscall
oo2::CTMF<unsigned_int,4,8,4>::insert
          (CTMF<unsigned_int,4,8,4> *this,uint *param_1,uint param_2,uint param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 3);
  *(undefined8 *)(param_1 + 1) = *(undefined8 *)param_1;
  *(undefined8 *)(param_1 + 3) = *(undefined8 *)(param_1 + 2);
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 5);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 7);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_1 + 9);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 0xb);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_1 + 0xd);
  *param_1 = (param_2 ^ param_3) & 0x3ffffff ^ param_3;
  return;
}

// prefetch_next @ 14f3a13b0

void __thiscall
oo2::CTMF<unsigned_int,4,8,4>::prefetch_next(CTMF<unsigned_int,4,8,4> *this,uchar *param_1)

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
                0xfffffffffffffff0);
  return;
}

// release @ 14f3a1420

void __thiscall oo2::CTMF<unsigned_int,4,8,4>::release(CTMF<unsigned_int,4,8,4> *this)

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

// reset @ 14f3a14a0

void __thiscall oo2::CTMF<unsigned_int,4,8,4>::reset(CTMF<unsigned_int,4,8,4> *this)

{
  memset((this->m_hash_table).m_ptr,0,(1L << ((byte)this->m_table_size_bits & 0x3f)) << 2);
  return;
}

// resolve_neg_offset @ 14f3a14d0

long64 __cdecl oo2::CTMF<unsigned_int,4,8,4>::resolve_neg_offset(uint param_1,uint param_2)

{
  return (ulonglong)(param_1 - param_2) | 0xfffffffffc000000;
}

// rrAlignUp64 @ 14f3a14f0

ulong64 __cdecl oo2::rrAlignUp64(ulong64 param_1,long64 param_2)

{
  return (param_1 - 1) + param_2 & ~(param_2 - 1U);
}

// rrAlignUpA @ 14f3a1510

long64 __cdecl oo2::rrAlignUpA(long64 param_1,long64 param_2)

{
  return param_1 + -1 + param_2 & ~(param_2 - 1U);
}

// rrAlignUpA @ 14f3a1530

ulong64 __cdecl oo2::rrAlignUpA(ulong64 param_1,long64 param_2)

{
  return (param_1 - 1) + param_2 & ~(param_2 - 1U);
}

// rrCPUx86_feature_present @ 14f3a1550

int __cdecl oo2::rrCPUx86_feature_present(uint param_1)

{
  return g_rrCPUx86_feature_flags & param_1;
}

// rrClz32 @ 14f3a1560

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

// rrCtz32 @ 14f3a1580

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

// rrCtz64 @ 14f3a1590

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

// rrCtzBytes64 @ 14f3a15a0

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

// rrGetBitLevel_V_NonZero @ 14f3a15b0

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

// rrIlog2ceil @ 14f3a15c0

uint __cdecl oo2::rrIlog2ceil(uint param_1)

{
  int iVar1;
  
  if (param_1 < 2) {
    return 0;
  }
  iVar1 = 0x1f;
  if (param_1 - 1 != 0) {
    for (; param_1 - 1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  return iVar1 + 1;
}

// rrPrintf_nop @ 14f3a15e0

void __cdecl oo2::rrPrintf_nop(void)

{
  return;
}

// rrPtrDiff32 @ 14f3a15f0

int __cdecl oo2::rrPtrDiff32(long64 param_1)

{
  return (int)param_1;
}

// rrPtrDiff @ 14f3a1600

long64 __cdecl oo2::rrPtrDiff(long64 param_1)

{
  return param_1;
}

// second_hash_index @ 14f3a1610

ulong64 __thiscall
oo2::CTMF<unsigned_int,4,8,4>::second_hash_index
          (CTMF<unsigned_int,4,8,4> *this,uint param_1,uchar *param_2)

{
  return (ulonglong)(*(longlong *)param_2 * -0x30e44323485a9b9d) >>
         (0x40U - (char)this->m_table_size_bits & 0x3f) & 0xfffffffffffffff0;
}

// set_base_and_preload @ 14f3a1640

void __thiscall
oo2::CTMF<unsigned_int,4,8,4>::set_base_and_preload
          (CTMF<unsigned_int,4,8,4> *this,void *param_1,void *param_2,long64 param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  code *pcVar4;
  byte bVar5;
  undefined8 uVar6;
  int iVar7;
  ulong64 uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  
  this->m_base_ptr = param_1;
  if (param_2 == param_1) {
    return;
  }
  if (fp_ThreadProfiler_Push == (_func___cdecl_ulong64_char_ptr_ulong64 *)0x0) {
    uVar8 = 0xffffffffffffffff;
  }
  else {
    uVar8 = (*fp_ThreadProfiler_Push)("ctmf_preload",0);
  }
  lVar12 = (longlong)param_2 - (longlong)param_1;
  if ((lVar12 < 1) &&
     (iVar7 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\ctmf.h",0xda,
                                 "oo2::CTMF<unsigned int,4,8,4>::set_base_and_preload",
                                 "preload_len > 0"), iVar7 != 0)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (param_3 < lVar12) {
    param_1 = (void *)((longlong)param_2 - param_3);
    lVar12 = param_3;
  }
  lVar11 = 2;
  if (2 < lVar12 >> 0x12) {
    lVar11 = lVar12 >> 0x12;
  }
  lVar12 = (lVar12 / 2) / lVar11;
  this->m_next_ptr = param_1;
  bVar5 = (byte)this->m_table_size_bits & 0x1f;
  uVar9 = (uint)(*(longlong *)param_1 * this->m_hash_mul >> 0x20);
  uVar9 = uVar9 << bVar5 | uVar9 >> 0x20 - bVar5;
  this->m_next_hash = uVar9;
  puVar1 = (this->m_hash_table).m_ptr;
  this->m_next_row = puVar1 + (uVar9 & this->m_hash_row_mask);
  this->m_next_row_second =
       puVar1 + ((ulonglong)(*(longlong *)param_1 * -0x30e44323485a9b9d) >>
                 (0x40U - (char)this->m_table_size_bits & 0x3f) & 0xfffffffffffffff0);
  do {
    lVar12 = lVar12 + -1;
    if (lVar12 < 1) {
      if (param_2 <= param_1) {
        if (fp_ThreadProfiler_Pop == (_func___cdecl_void_ulong64 *)0x0) {
          return;
        }
        (*fp_ThreadProfiler_Pop)(uVar8);
        return;
      }
      lVar11 = lVar11 >> 1;
      if ((lVar11 < 1) &&
         (iVar7 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\ctmf.h",0xed,
                                     "oo2::CTMF<unsigned int,4,8,4>::set_base_and_preload",
                                     "step >= 1"), iVar7 != 0)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar12 = ((longlong)param_2 - (longlong)param_1) / lVar11;
      if (1 < lVar11) {
        lVar12 = lVar12 / 2;
      }
    }
    iVar7 = *(int *)&this->m_base_ptr;
    iVar13 = (int)param_1;
    puVar1 = this->m_next_row;
    puVar2 = this->m_next_row_second;
    uVar9 = this->m_next_hash;
    param_1 = (void *)((longlong)param_1 + lVar11);
    this->m_next_ptr = param_1;
    bVar5 = (byte)this->m_table_size_bits & 0x1f;
    uVar10 = (uint)(*(longlong *)param_1 * this->m_hash_mul >> 0x20);
    uVar10 = uVar10 << bVar5 | uVar10 >> 0x20 - bVar5;
    this->m_next_hash = uVar10;
    puVar3 = (this->m_hash_table).m_ptr;
    this->m_next_row = puVar3 + (uVar10 & this->m_hash_row_mask);
    this->m_next_row_second =
         puVar3 + ((ulonglong)(*(longlong *)param_1 * -0x30e44323485a9b9d) >>
                   (0x40U - (char)this->m_table_size_bits & 0x3f) & 0xfffffffffffffff0);
    uVar6 = *(undefined8 *)(puVar1 + 3);
    *(undefined8 *)(puVar1 + 1) = *(undefined8 *)puVar1;
    *(undefined8 *)(puVar1 + 3) = *(undefined8 *)(puVar1 + 2);
    *(undefined8 *)(puVar1 + 4) = uVar6;
    *(undefined8 *)(puVar1 + 6) = *(undefined8 *)(puVar1 + 5);
    *(undefined8 *)(puVar1 + 8) = *(undefined8 *)(puVar1 + 7);
    *(undefined8 *)(puVar1 + 10) = *(undefined8 *)(puVar1 + 9);
    *(undefined8 *)(puVar1 + 0xc) = *(undefined8 *)(puVar1 + 0xb);
    *(undefined8 *)(puVar1 + 0xe) = *(undefined8 *)(puVar1 + 0xd);
    uVar9 = (uVar9 ^ iVar13 - iVar7) & 0x3ffffff ^ uVar9;
    *puVar1 = uVar9;
    uVar6 = *(undefined8 *)(puVar2 + 3);
    *(undefined8 *)(puVar2 + 1) = *(undefined8 *)puVar2;
    *(undefined8 *)(puVar2 + 3) = *(undefined8 *)(puVar2 + 2);
    *(undefined8 *)(puVar2 + 4) = uVar6;
    *(undefined8 *)(puVar2 + 6) = *(undefined8 *)(puVar2 + 5);
    *(undefined8 *)(puVar2 + 8) = *(undefined8 *)(puVar2 + 7);
    *(undefined8 *)(puVar2 + 10) = *(undefined8 *)(puVar2 + 9);
    *(undefined8 *)(puVar2 + 0xc) = *(undefined8 *)(puVar2 + 0xb);
    *(undefined8 *)(puVar2 + 0xe) = *(undefined8 *)(puVar2 + 0xd);
    *puVar2 = uVar9;
  } while( true );
}

// set_next @ 14f3a18d0

void __thiscall
oo2::CTMF<unsigned_int,4,8,4>::set_next(CTMF<unsigned_int,4,8,4> *this,uchar *param_1)

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
                0xfffffffffffffff0);
  return;
}

// step_and_insert @ 14f3a1940

void __thiscall
oo2::CTMF<unsigned_int,4,8,4>::step_and_insert
          (CTMF<unsigned_int,4,8,4> *this,uchar *param_1,int param_2)

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
  uint uVar10;
  ulonglong uVar11;
  ulong64 uVar12;
  int iVar13;
  longlong lVar14;
  
  plVar4 = (longlong *)this->m_next_ptr;
  plVar1 = (longlong *)(param_1 + param_2);
  if (plVar4 < plVar1) {
    puVar5 = this->m_next_row;
    iVar3 = *(int *)&this->m_base_ptr;
    uVar10 = this->m_next_hash;
    uVar6 = *(undefined8 *)(puVar5 + 3);
    uVar9 = this->m_next_hash;
    *(undefined8 *)(puVar5 + 1) = *(undefined8 *)puVar5;
    *(undefined8 *)(puVar5 + 3) = *(undefined8 *)(puVar5 + 2);
    *(undefined8 *)(puVar5 + 4) = uVar6;
    *(undefined8 *)(puVar5 + 6) = *(undefined8 *)(puVar5 + 5);
    *(undefined8 *)(puVar5 + 8) = *(undefined8 *)(puVar5 + 7);
    *(undefined8 *)(puVar5 + 10) = *(undefined8 *)(puVar5 + 9);
    *(undefined8 *)(puVar5 + 0xc) = *(undefined8 *)(puVar5 + 0xb);
    *(undefined8 *)(puVar5 + 0xe) = *(undefined8 *)(puVar5 + 0xd);
    *puVar5 = ((int)plVar4 - iVar3 ^ uVar10) & 0x3ffffff ^ uVar9;
    puVar5 = this->m_next_row_second;
    iVar13 = *(int *)&this->m_next_ptr;
    uVar10 = this->m_next_hash;
    uVar6 = *(undefined8 *)(puVar5 + 3);
    uVar9 = this->m_next_hash;
    *(undefined8 *)(puVar5 + 1) = *(undefined8 *)puVar5;
    *(undefined8 *)(puVar5 + 3) = *(undefined8 *)(puVar5 + 2);
    *(undefined8 *)(puVar5 + 4) = uVar6;
    *(undefined8 *)(puVar5 + 6) = *(undefined8 *)(puVar5 + 5);
    *(undefined8 *)(puVar5 + 8) = *(undefined8 *)(puVar5 + 7);
    *(undefined8 *)(puVar5 + 10) = *(undefined8 *)(puVar5 + 9);
    *(undefined8 *)(puVar5 + 0xc) = *(undefined8 *)(puVar5 + 0xb);
    *(undefined8 *)(puVar5 + 0xe) = *(undefined8 *)(puVar5 + 0xd);
    *puVar5 = (iVar13 - iVar3 ^ uVar10) & 0x3ffffff ^ uVar9;
    iVar13 = (*(int *)&this->m_next_ptr - (int)param_1) + 1;
    if (iVar13 < param_2) {
      lVar14 = (longlong)iVar13;
      do {
        plVar4 = (longlong *)(param_1 + lVar14);
        lVar14 = lVar14 * 2;
        bVar8 = (byte)this->m_table_size_bits & 0x1f;
        uVar10 = (uint)(*plVar4 * this->m_hash_mul >> 0x20);
        uVar9 = uVar10 << bVar8 | uVar10 >> 0x20 - bVar8;
        uVar11 = (ulonglong)(uVar9 & this->m_hash_row_mask);
        puVar5 = (this->m_hash_table).m_ptr;
        puVar2 = puVar5 + uVar11 + 3;
        uVar6 = *(undefined8 *)puVar2;
        uVar7 = *(undefined8 *)(puVar2 + 2);
        puVar5 = puVar5 + uVar11;
        uVar10 = ((int)param_1 - iVar3) + iVar13;
        iVar13 = iVar13 * 2;
        *(undefined8 *)(puVar5 + 8) = *(undefined8 *)(puVar5 + 7);
        *(undefined8 *)(puVar5 + 10) = *(undefined8 *)(puVar5 + 9);
        *(undefined8 *)(puVar5 + 0xc) = *(undefined8 *)(puVar5 + 0xb);
        *(undefined8 *)(puVar5 + 0xe) = *(undefined8 *)(puVar5 + 0xd);
        *(undefined8 *)(puVar5 + 1) = *(undefined8 *)puVar5;
        *(undefined8 *)(puVar5 + 3) = *(undefined8 *)(puVar5 + 2);
        *(undefined8 *)(puVar5 + 4) = uVar6;
        *(undefined8 *)(puVar5 + 6) = uVar7;
        *puVar5 = (uVar10 ^ uVar9) & 0x3ffffff ^ uVar9;
      } while (iVar13 < param_2);
    }
    uVar12 = this->m_hash_mul;
    bVar8 = (byte)this->m_table_size_bits;
    this->m_next_ptr = (uchar *)plVar1;
  }
  else {
    if (plVar4 == plVar1) {
      return;
    }
    uVar12 = this->m_hash_mul;
    this->m_next_ptr = (uchar *)plVar1;
    bVar8 = (byte)this->m_table_size_bits;
  }
  puVar5 = (this->m_hash_table).m_ptr;
  uVar10 = (uint)(uVar12 * *plVar1 >> 0x20);
  uVar10 = uVar10 << (bVar8 & 0x1f) | uVar10 >> 0x20 - (bVar8 & 0x1f);
  this->m_next_hash = uVar10;
  this->m_next_row = puVar5 + (this->m_hash_row_mask & uVar10);
  this->m_next_row_second =
       puVar5 + ((ulonglong)(*plVar1 * -0x30e44323485a9b9d) >>
                 (0x40U - (char)this->m_table_size_bits & 0x3f) & 0xfffffffffffffff0);
  return;
}

// dtor$0 @ 150284c40

void `oo2::
     construct<oo2::CacheTableMatchFinder,unsigned_char_const_*_&,__int64_&,__int64_&,oo2::LRMSet_*_&,oo2::rrArenaAllocator_*_&>'
     ::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  ::operator_delete(*(void **)(param_2 + 0x38),eRRPlacementNew,*(void **)(param_2 + 0x50));
  return;
}

// dtor$0 @ 150284c80

void `oo2::CacheTableMatchFinder::CacheTableMatchFinder'::__l1::dtor_0
               (undefined8 param_1,longlong param_2)

{
  oo2::IncrementalMatchFinder::~IncrementalMatchFinder(*(IncrementalMatchFinder **)(param_2 + 0x80))
  ;
  return;
}

// dtor$1 @ 150284ca0

void `oo2::CacheTableMatchFinder::CacheTableMatchFinder'::__l1::dtor_1
               (undefined8 param_1,longlong param_2)

{
  oo2::CTMF<unsigned_int,4,8,4>::~CTMF<unsigned_int,4,8,4>
            ((CTMF<unsigned_int,4,8,4> *)(*(longlong *)(param_2 + 0x80) + 0x58));
  return;
}

// dtor$0 @ 150284cc0

void `oo2::CTMF_CreateMatchFinder'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  ::operator_delete(*(void **)(param_2 + 0x38),eRRPlacementNew,*(void **)(param_2 + 0x90));
  return;
}

// dtor$0 @ 150284d00

void `oo2::CTMF<unsigned_int,4,8,4>::set_base_and_preload'::__l1::dtor_0
               (undefined8 param_1,longlong param_2)

{
  oo2::ThreadProfileScope::~ThreadProfileScope((ThreadProfileScope *)(param_2 + 0x60));
  return;
}

