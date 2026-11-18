// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2core_win64
// Functions: 15

// ProcessChunkTemplate<oo2::CacheTableMatchFinder::MatchEvalAVX2> @ 14f3cc800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long64 __thiscall
oo2::CacheTableMatchFinder::ProcessChunkTemplate<oo2::CacheTableMatchFinder::MatchEvalAVX2>
          (CacheTableMatchFinder *this,long64 param_1,long64 param_2,long64 param_3,
          UnpackedMatchPair *param_4,int param_5)

{
  longlong *plVar1;
  ulonglong *puVar2;
  UnpackedMatchPair *_Dst;
  undefined1 auVar3 [32];
  uchar *puVar4;
  undefined1 (*pauVar5) [32];
  undefined1 (*pauVar6) [32];
  uint *puVar7;
  undefined8 uVar8;
  byte bVar9;
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  uint uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  LRMSet **ppLVar16;
  LRMSet **ppLVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  ulonglong *puVar22;
  long64 lVar23;
  ulonglong uVar24;
  uchar *puVar25;
  LRMSet **ppLVar26;
  LRMSet **ppLVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  uchar *puVar31;
  longlong lVar32;
  uint uVar33;
  bool bVar34;
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [64];
  undefined1 auStackY_2c8 [32];
  int iStack_27c;
  int local_258 [2];
  uchar *local_250;
  longlong local_248;
  uchar *local_240;
  LRMSet *local_238;
  undefined8 local_230;
  undefined8 local_228 [33];
  undefined1 local_120 [32];
  undefined1 local_100 [32];
  undefined1 local_e0 [32];
  undefined1 local_c0 [32];
  ulonglong local_a0;
  
  local_a0 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  puVar4 = this->m_raw_end;
  local_240 = this->m_ubuf;
  local_248 = this->m_parse_end_pos;
  local_238 = this->m_lrms;
  if (param_1 < param_3) {
    auVar38 = ZEXT3264(___ymm_fc000000fc000000fc000000fc000000fc000000fc000000fc000000fc000000);
    local_250 = puVar4;
    do {
      uVar21 = (this->ctmf).m_next_hash;
      puVar2 = (ulonglong *)(local_240 + param_1);
      pauVar5 = (undefined1 (*) [32])(this->ctmf).m_next_row;
      pauVar6 = (undefined1 (*) [32])(this->ctmf).m_next_row_second;
      iVar19 = (this->ctmf).m_table_size_bits;
      if (param_1 + 8 < local_248) {
        puVar7 = (this->ctmf).m_hash_table.m_ptr;
        puVar22 = puVar2 + 1;
        (this->ctmf).m_next_ptr = (uchar *)puVar22;
        bVar9 = (byte)iVar19 & 0x1f;
        uVar18 = (uint)(*puVar22 * (this->ctmf).m_hash_mul >> 0x20);
        uVar18 = uVar18 << bVar9 | uVar18 >> 0x20 - bVar9;
        (this->ctmf).m_next_hash = uVar18;
        (this->ctmf).m_next_row = puVar7 + (uVar18 & (this->ctmf).m_hash_row_mask);
        (this->ctmf).m_next_row_second =
             puVar7 + (*puVar22 * -0x30e44323485a9b9d >> ((ulonglong)(0x40 - iVar19) & 0x3f) &
                      0xfffffffffffffff0);
      }
      puVar7 = (this->ctmf).m_hash_table.m_ptr;
      plVar1 = (longlong *)((longlong)puVar2 + 1);
      (this->ctmf).m_next_ptr = (uchar *)plVar1;
      bVar9 = (byte)iVar19 & 0x1f;
      uVar18 = (uint)((this->ctmf).m_hash_mul * *plVar1 >> 0x20);
      uVar18 = uVar18 << bVar9 | uVar18 >> 0x20 - bVar9;
      (this->ctmf).m_next_hash = uVar18;
      (this->ctmf).m_next_row = puVar7 + (uVar18 & (this->ctmf).m_hash_row_mask);
      lVar28 = 0;
      (this->ctmf).m_next_row_second =
           puVar7 + ((ulonglong)(*plVar1 * -0x30e44323485a9b9d) >>
                     ((ulonglong)(0x40 - iVar19) & 0x3f) & 0xfffffffffffffff0);
      if (local_238 != (LRMSet *)0x0) {
        iVar19 = LRMScannerWindowed_FindMatchAndRoll
                           (&this->scanner,(uchar *)puVar2,local_250,(long64 *)local_258);
        auVar38 = ZEXT3264(___ymm_fc000000fc000000fc000000fc000000fc000000fc000000fc000000fc000000);
        if (0 < iVar19) {
          local_230._0_4_ = iVar19;
          lVar28 = 1;
          local_230._4_4_ = local_258[0];
        }
      }
      auVar3 = *pauVar5;
      uVar20 = (uint)param_1;
      auVar35._4_4_ = uVar20;
      auVar35._0_4_ = uVar20;
      auVar35._8_4_ = uVar20;
      auVar35._12_4_ = uVar20;
      auVar35._16_4_ = uVar20;
      auVar35._20_4_ = uVar20;
      auVar35._24_4_ = uVar20;
      auVar35._28_4_ = uVar20;
      auVar11 = vpsubd_avx2(auVar3,auVar35);
      auVar37 = auVar38._0_32_;
      local_120 = vpor_avx2(auVar11,auVar37);
      auVar11 = vpsubd_avx2(pauVar5[1],auVar35);
      local_100 = vpor_avx2(auVar11,auVar37);
      auVar11 = vpsubd_avx2(*pauVar6,auVar35);
      local_e0 = vpor_avx2(auVar11,auVar37);
      auVar11 = vpsubd_avx2(pauVar6[1],auVar35);
      local_c0 = vpor_avx2(auVar11,auVar37);
      auVar11 = vpand_avx2(*pauVar6,auVar37);
      auVar35 = vpand_avx2(pauVar6[1],auVar37);
      uVar18 = uVar21 & 0xfc000000;
      auVar36._0_8_ = CONCAT44(uVar21,uVar21) & 0xfc000000fc000000;
      auVar36._8_4_ = uVar18;
      auVar36._12_4_ = uVar18;
      auVar36._16_4_ = uVar18;
      auVar36._20_4_ = uVar18;
      auVar36._24_4_ = uVar18;
      auVar36._28_4_ = uVar18;
      auVar11 = vpcmpeqd_avx2(auVar11,auVar36);
      auVar10 = vpcmpeqd_avx2(auVar35,auVar36);
      auVar35 = vpand_avx2(auVar3,auVar37);
      auVar37 = vpand_avx2(pauVar5[1],auVar37);
      auVar11 = vpackssdw_avx2(auVar11,auVar10);
      auVar35 = vpcmpeqd_avx2(auVar35,auVar36);
      auVar37 = vpcmpeqd_avx2(auVar37,auVar36);
      auVar35 = vpackssdw_avx2(auVar35,auVar37);
      auVar11 = vpacksswb_avx2(auVar35,auVar11);
      auVar11 = vpermd_avx2(___ymm_0000000700000003000000060000000200000005000000010000000400000000,
                            auVar11);
      uVar18 = (uint)(SUB321(auVar11 >> 7,0) & 1) | (uint)(SUB321(auVar11 >> 0xf,0) & 1) << 1 |
               (uint)(SUB321(auVar11 >> 0x17,0) & 1) << 2 |
               (uint)(SUB321(auVar11 >> 0x1f,0) & 1) << 3 |
               (uint)(SUB321(auVar11 >> 0x27,0) & 1) << 4 |
               (uint)(SUB321(auVar11 >> 0x2f,0) & 1) << 5 |
               (uint)(SUB321(auVar11 >> 0x37,0) & 1) << 6 |
               (uint)(SUB321(auVar11 >> 0x3f,0) & 1) << 7 |
               (uint)(SUB321(auVar11 >> 0x47,0) & 1) << 8 |
               (uint)(SUB321(auVar11 >> 0x4f,0) & 1) << 9 |
               (uint)(SUB321(auVar11 >> 0x57,0) & 1) << 10 |
               (uint)(SUB321(auVar11 >> 0x5f,0) & 1) << 0xb |
               (uint)(SUB321(auVar11 >> 0x67,0) & 1) << 0xc |
               (uint)(SUB321(auVar11 >> 0x6f,0) & 1) << 0xd |
               (uint)(SUB321(auVar11 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar11 >> 0x7f,0) << 0xf
      ;
      uVar33 = uVar18 | (uint)(SUB321(auVar11 >> 0x87,0) & 1) << 0x10 |
               (uint)(SUB321(auVar11 >> 0x8f,0) & 1) << 0x11 |
               (uint)(SUB321(auVar11 >> 0x97,0) & 1) << 0x12 |
               (uint)(SUB321(auVar11 >> 0x9f,0) & 1) << 0x13 |
               (uint)(SUB321(auVar11 >> 0xa7,0) & 1) << 0x14 |
               (uint)(SUB321(auVar11 >> 0xaf,0) & 1) << 0x15 |
               (uint)(SUB321(auVar11 >> 0xb7,0) & 1) << 0x16 |
               (uint)SUB321(auVar11 >> 0xbf,0) << 0x17 |
               (uint)(SUB321(auVar11 >> 199,0) & 1) << 0x18 |
               (uint)(SUB321(auVar11 >> 0xcf,0) & 1) << 0x19 |
               (uint)(SUB321(auVar11 >> 0xd7,0) & 1) << 0x1a |
               (uint)(SUB321(auVar11 >> 0xdf,0) & 1) << 0x1b |
               (uint)(SUB321(auVar11 >> 0xe7,0) & 1) << 0x1c |
               (uint)(SUB321(auVar11 >> 0xef,0) & 1) << 0x1d |
               (uint)(SUB321(auVar11 >> 0xf7,0) & 1) << 0x1e |
               (uint)(byte)(auVar11[0x1f] >> 7) << 0x1f;
      if (pauVar5 == pauVar6) {
        uVar33 = uVar18;
      }
      puVar31 = &DAT_00000003;
      if (uVar33 != 0) {
        do {
          uVar18 = 0;
          for (uVar12 = uVar33; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
            uVar18 = uVar18 + 1;
          }
          uVar33 = uVar33 - 1 & uVar33;
          iVar19 = *(int *)(local_120 + (ulonglong)uVar18 * 4);
          if (((-param_1 <= (longlong)iVar19) &&
              (puVar25 = (uchar *)((longlong)iVar19 + (longlong)puVar2),
              (longlong)puVar31 < (longlong)(puVar4 + -4) - (longlong)puVar2)) &&
             (puVar31[(longlong)puVar2] == puVar25[(longlong)puVar31])) {
            lVar29 = (longlong)puVar25 - (longlong)puVar2;
            puVar22 = puVar2;
            if (puVar2 <= puVar4 + -0xc) {
LAB_14f3ccb10:
              uVar24 = *(ulonglong *)(lVar29 + (longlong)puVar22) ^ *puVar22;
              if (uVar24 == 0) goto code_r0x00014f3ccb1d;
              uVar18 = 0;
              for (; (uVar24 & 1) == 0; uVar24 = uVar24 >> 1 | 0x8000000000000000) {
                uVar18 = uVar18 + 1;
              }
              puVar25 = (uchar *)(((ulonglong)(uVar18 >> 3) - (longlong)puVar2) + (longlong)puVar22)
              ;
              goto LAB_14f3ccb45;
            }
LAB_14f3ccb26:
            puVar25 = (uchar *)((longlong)puVar22 - (longlong)puVar2);
            for (; (puVar22 < puVar4 + -4 &&
                   ((uchar)*puVar22 == *(uchar *)((longlong)puVar22 + lVar29)));
                puVar22 = (ulonglong *)((longlong)puVar22 + 1)) {
              puVar25 = puVar25 + 1;
            }
LAB_14f3ccb45:
            if ((longlong)puVar31 < (longlong)puVar25) {
              *(int *)(&local_230 + lVar28) = (int)puVar25;
              *(int *)((longlong)local_228 + lVar28 * 8 + -4) = -iVar19;
              lVar28 = lVar28 + 1;
              puVar31 = puVar25;
            }
          }
        } while (uVar33 != 0);
        auVar3 = *pauVar5;
      }
      uVar8 = *(undefined8 *)(pauVar5[1] + 4);
      uVar13 = *(undefined8 *)(pauVar5[1] + 0xc);
      uVar14 = *(undefined8 *)(pauVar5[1] + 0x14);
      *(undefined1 (*) [32])(*pauVar5 + 4) = auVar3;
      *(undefined8 *)pauVar5[1] = *(undefined8 *)(*pauVar5 + 0x1c);
      *(undefined8 *)(pauVar5[1] + 8) = uVar8;
      *(undefined8 *)(pauVar5[1] + 0x10) = uVar13;
      *(undefined8 *)(pauVar5[1] + 0x18) = uVar14;
      uVar21 = (uVar20 ^ uVar21) & 0x3ffffff ^ uVar21;
      lVar29 = (longlong)param_5;
      *(uint *)*pauVar5 = uVar21;
      uVar8 = *(undefined8 *)(*pauVar6 + 0x1c);
      uVar13 = *(undefined8 *)(pauVar6[1] + 4);
      uVar14 = *(undefined8 *)(pauVar6[1] + 0xc);
      uVar15 = *(undefined8 *)(pauVar6[1] + 0x14);
      *(undefined8 *)(*pauVar6 + 4) = *(undefined8 *)*pauVar6;
      *(undefined8 *)(*pauVar6 + 0xc) = *(undefined8 *)(*pauVar6 + 8);
      *(undefined8 *)(*pauVar6 + 0x14) = *(undefined8 *)(*pauVar6 + 0x10);
      *(undefined8 *)(*pauVar6 + 0x1c) = *(undefined8 *)(*pauVar6 + 0x18);
      *(undefined8 *)pauVar6[1] = uVar8;
      *(undefined8 *)(pauVar6[1] + 8) = uVar13;
      *(undefined8 *)(pauVar6[1] + 0x10) = uVar14;
      *(undefined8 *)(pauVar6[1] + 0x18) = uVar15;
      *(uint *)*pauVar6 = uVar21;
      _Dst = param_4 + (param_1 - param_2) * lVar29;
      if (lVar28 == 0) {
        _Dst->length = 0;
      }
      else {
        if (1 < lVar28) {
          lVar32 = 1;
          do {
            uVar8 = (&local_230)[lVar32];
            ppLVar26 = &local_238 + lVar32;
            iStack_27c = (int)((ulonglong)uVar8 >> 0x20);
            lVar30 = lVar32;
            do {
              if ((int)uVar8 == *(int *)ppLVar26) {
                bVar34 = iStack_27c < *(int *)((longlong)ppLVar26 + 4);
              }
              else {
                bVar34 = *(int *)ppLVar26 <= (int)uVar8;
              }
              if (!bVar34) break;
              lVar30 = lVar30 + -1;
              ppLVar26[1] = *ppLVar26;
              ppLVar26 = ppLVar26 + -1;
            } while (0 < lVar30);
            lVar32 = lVar32 + 1;
            (&local_230)[lVar30] = uVar8;
          } while (lVar32 < lVar28);
          ppLVar26 = (LRMSet **)(&local_230 + lVar28);
          iVar19 = (int)local_230;
          ppLVar17 = (LRMSet **)&local_230;
          do {
            ppLVar27 = ppLVar17;
            if (&local_238 + lVar28 <= ppLVar27) break;
            bVar34 = iVar19 != *(int *)(ppLVar27 + 1);
            iVar19 = *(int *)(ppLVar27 + 1);
            ppLVar17 = ppLVar27 + 1;
          } while (bVar34);
          if (ppLVar27 < &local_238 + lVar28) {
            ppLVar17 = ppLVar27 + 2;
            while (ppLVar16 = ppLVar17, ppLVar16 < ppLVar26) {
              ppLVar17 = ppLVar16 + 1;
              if (*(int *)ppLVar27 != *(int *)ppLVar16) {
                ppLVar27 = ppLVar27 + 1;
                *ppLVar27 = *ppLVar16;
              }
            }
            ppLVar26 = ppLVar27 + 1;
          }
          lVar28 = (longlong)(int)((longlong)ppLVar26 - (longlong)&local_230 >> 3);
        }
        iVar19 = (int)local_230;
        lVar32 = (longlong)(int)local_230;
        if (lVar28 < lVar29) {
          lVar29 = lVar28;
        }
        memcpy(_Dst,&local_230,lVar29 * 8);
        if (lVar29 < param_5) {
          _Dst[lVar29].length = 0;
        }
        if (0x4c < iVar19) {
          this->longMatchEnd = param_1 + lVar32;
          this->longMatchOffs = local_230._4_4_;
          this->longMatchPos = param_1;
          this->longMatchLen = iVar19;
          lVar23 = ReportLongMatch(this,param_4,param_2,param_3,param_1,param_5);
          param_1 = lVar23 + -1;
        }
        auVar38 = ZEXT3264(___ymm_fc000000fc000000fc000000fc000000fc000000fc000000fc000000fc000000);
      }
      param_1 = param_1 + 1;
    } while (param_1 < param_3);
  }
  return param_1;
code_r0x00014f3ccb1d:
  puVar22 = puVar22 + 1;
  if (puVar4 + -0xc < puVar22) goto LAB_14f3ccb26;
  goto LAB_14f3ccb10;
}

// hash_n_bytes<8> @ 14f3ccdd0

ulong64 __cdecl oo2::`anonymous_namespace'::hash_n_bytes<8>(uchar *param_1,int param_2)

{
  return (ulonglong)(*(longlong *)param_1 * -0x30e44323485a9b9d) >>
         ((ulonglong)(0x40 - param_2) & 0x3f);
}

// unique<oo2::UnpackedMatchPair_*,oo2::UnpackedMatchPair_EqualLength> @ 14f3cce00

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

// EvalMatches @ 14f3cce60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long64 __thiscall
oo2::CacheTableMatchFinder::MatchEvalAVX2::EvalMatches
          (MatchEvalAVX2 *this,UnpackedMatchPair *param_1,long64 param_2,long64 param_3,
          uint *param_4,uint *param_5,uint param_6,uchar *param_7,uchar *param_8,long64 param_9)

{
  int iVar1;
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  char *pcVar10;
  uint uVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auStack_128 [8];
  undefined1 local_120 [32];
  undefined1 local_100 [32];
  undefined1 local_e0 [32];
  undefined1 local_c0 [32];
  ulonglong local_a0;
  
  local_a0 = __security_cookie.value ^ (ulonglong)auStack_128;
  uVar7 = param_6 & 0xfc000000;
  uVar13 = (undefined4)param_3;
  auVar14._4_4_ = uVar13;
  auVar14._0_4_ = uVar13;
  auVar14._8_4_ = uVar13;
  auVar14._12_4_ = uVar13;
  auVar14._16_4_ = uVar13;
  auVar14._20_4_ = uVar13;
  auVar14._24_4_ = uVar13;
  auVar14._28_4_ = uVar13;
  auVar4 = vpsubd_avx2(*(undefined1 (*) [32])param_4,auVar14);
  local_120 = vpor_avx2(auVar4,
                        ___ymm_fc000000fc000000fc000000fc000000fc000000fc000000fc000000fc000000);
  auVar4 = vpsubd_avx2(*(undefined1 (*) [32])(param_4 + 8),auVar14);
  local_100 = vpor_avx2(auVar4,
                        ___ymm_fc000000fc000000fc000000fc000000fc000000fc000000fc000000fc000000);
  auVar4 = vpsubd_avx2(*(undefined1 (*) [32])param_5,auVar14);
  local_e0 = vpor_avx2(auVar4,
                       ___ymm_fc000000fc000000fc000000fc000000fc000000fc000000fc000000fc000000);
  auVar4 = vpsubd_avx2(*(undefined1 (*) [32])(param_5 + 8),auVar14);
  local_c0 = vpor_avx2(auVar4,
                       ___ymm_fc000000fc000000fc000000fc000000fc000000fc000000fc000000fc000000);
  auVar4 = vpand_avx2(*(undefined1 (*) [32])(param_5 + 8),
                      ___ymm_fc000000fc000000fc000000fc000000fc000000fc000000fc000000fc000000);
  auVar14 = vpand_avx2(*(undefined1 (*) [32])param_5,
                       ___ymm_fc000000fc000000fc000000fc000000fc000000fc000000fc000000fc000000);
  auVar15._0_8_ = CONCAT44(param_6,param_6) & 0xfc000000fc000000;
  auVar15._8_4_ = uVar7;
  auVar15._12_4_ = uVar7;
  auVar15._16_4_ = uVar7;
  auVar15._20_4_ = uVar7;
  auVar15._24_4_ = uVar7;
  auVar15._28_4_ = uVar7;
  auVar3 = vpcmpeqd_avx2(auVar14,auVar15);
  auVar4 = vpcmpeqd_avx2(auVar4,auVar15);
  auVar14 = vpand_avx2(*(undefined1 (*) [32])param_4,
                       ___ymm_fc000000fc000000fc000000fc000000fc000000fc000000fc000000fc000000);
  auVar2 = vpand_avx2(*(undefined1 (*) [32])(param_4 + 8),
                      ___ymm_fc000000fc000000fc000000fc000000fc000000fc000000fc000000fc000000);
  auVar4 = vpackssdw_avx2(auVar3,auVar4);
  auVar14 = vpcmpeqd_avx2(auVar14,auVar15);
  auVar2 = vpcmpeqd_avx2(auVar2,auVar15);
  auVar14 = vpackssdw_avx2(auVar14,auVar2);
  auVar4 = vpacksswb_avx2(auVar14,auVar4);
  auVar4 = vpermd_avx2(___ymm_0000000700000003000000060000000200000005000000010000000400000000,
                       auVar4);
  uVar7 = (uint)(SUB321(auVar4 >> 7,0) & 1) | (uint)(SUB321(auVar4 >> 0xf,0) & 1) << 1 |
          (uint)(SUB321(auVar4 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar4 >> 0x1f,0) & 1) << 3 |
          (uint)(SUB321(auVar4 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar4 >> 0x2f,0) & 1) << 5 |
          (uint)(SUB321(auVar4 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar4 >> 0x3f,0) & 1) << 7 |
          (uint)(SUB321(auVar4 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar4 >> 0x4f,0) & 1) << 9 |
          (uint)(SUB321(auVar4 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar4 >> 0x5f,0) & 1) << 0xb |
          (uint)(SUB321(auVar4 >> 0x67,0) & 1) << 0xc | (uint)(SUB321(auVar4 >> 0x6f,0) & 1) << 0xd
          | (uint)(SUB321(auVar4 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar4 >> 0x7f,0) << 0xf;
  uVar11 = uVar7 | (uint)(SUB321(auVar4 >> 0x87,0) & 1) << 0x10 |
           (uint)(SUB321(auVar4 >> 0x8f,0) & 1) << 0x11 |
           (uint)(SUB321(auVar4 >> 0x97,0) & 1) << 0x12 |
           (uint)(SUB321(auVar4 >> 0x9f,0) & 1) << 0x13 |
           (uint)(SUB321(auVar4 >> 0xa7,0) & 1) << 0x14 |
           (uint)(SUB321(auVar4 >> 0xaf,0) & 1) << 0x15 |
           (uint)(SUB321(auVar4 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar4 >> 0xbf,0) << 0x17 |
           (uint)(SUB321(auVar4 >> 199,0) & 1) << 0x18 |
           (uint)(SUB321(auVar4 >> 0xcf,0) & 1) << 0x19 |
           (uint)(SUB321(auVar4 >> 0xd7,0) & 1) << 0x1a |
           (uint)(SUB321(auVar4 >> 0xdf,0) & 1) << 0x1b |
           (uint)(SUB321(auVar4 >> 0xe7,0) & 1) << 0x1c |
           (uint)(SUB321(auVar4 >> 0xef,0) & 1) << 0x1d |
           (uint)(SUB321(auVar4 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar4[0x1f] >> 7) << 0x1f;
  if (param_4 == param_5) {
    uVar11 = uVar7;
  }
  pcVar6 = &DAT_00000003;
  while( true ) {
    do {
      if (uVar11 == 0) {
        return param_2;
      }
      uVar7 = 0;
      for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
        uVar7 = uVar7 + 1;
      }
      uVar11 = uVar11 - 1 & uVar11;
      iVar1 = *(int *)(local_120 + (ulonglong)uVar7 * 4);
    } while (((iVar1 < param_9) || ((longlong)param_8 - (longlong)param_7 <= (longlong)pcVar6)) ||
            (pcVar6[(longlong)param_7] != (param_7 + iVar1)[(longlong)pcVar6]));
    lVar12 = (longlong)(param_7 + iVar1) - (longlong)param_7;
    puVar8 = (ulonglong *)param_7;
    if (param_7 <= param_8 + -8) break;
LAB_14f3cd006:
    pcVar10 = (char *)((longlong)puVar8 - (longlong)param_7);
    for (; (puVar8 < param_8 && ((char)*puVar8 == *(char *)((longlong)puVar8 + lVar12)));
        puVar8 = (ulonglong *)((longlong)puVar8 + 1)) {
      pcVar10 = pcVar10 + 1;
    }
LAB_14f3cd025:
    if ((longlong)pcVar6 < (longlong)pcVar10) {
      param_1[param_2].length = (int)pcVar10;
      param_1[param_2].offset = -iVar1;
      param_2 = param_2 + 1;
      pcVar6 = pcVar10;
    }
  }
LAB_14f3ccff0:
  uVar9 = *(ulonglong *)(lVar12 + (longlong)puVar8) ^ *puVar8;
  if (uVar9 == 0) goto code_r0x00014f3ccffd;
  uVar7 = 0;
  for (; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x8000000000000000) {
    uVar7 = uVar7 + 1;
  }
  pcVar10 = (char *)(((ulonglong)(uVar7 >> 3) - (longlong)param_7) + (longlong)puVar8);
  goto LAB_14f3cd025;
code_r0x00014f3ccffd:
  puVar8 = puVar8 + 1;
  if (param_8 + -8 < puVar8) goto LAB_14f3cd006;
  goto LAB_14f3ccff0;
}

// GetNumBytesZeroNeverAllR @ 14f3cd0b0

int __cdecl oo2::GetNumBytesZeroNeverAllR(ulong64 param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  for (; (param_1 & 1) == 0; param_1 = param_1 >> 1 | 0x8000000000000000) {
    uVar1 = uVar1 + 1;
  }
  return uVar1 >> 3;
}

// ProcessChunkAVX2 @ 14f3cd0c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long64 __thiscall
oo2::CacheTableMatchFinder::ProcessChunkAVX2
          (CacheTableMatchFinder *this,long64 param_1,long64 param_2,long64 param_3,
          UnpackedMatchPair *param_4,int param_5)

{
  longlong *plVar1;
  ulonglong *puVar2;
  UnpackedMatchPair *_Dst;
  undefined1 auVar3 [32];
  uchar *puVar4;
  undefined1 (*pauVar5) [32];
  undefined1 (*pauVar6) [32];
  uint *puVar7;
  undefined8 uVar8;
  byte bVar9;
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  uint uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  LRMSet **ppLVar16;
  LRMSet **ppLVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  ulonglong *puVar22;
  long64 lVar23;
  ulonglong uVar24;
  uchar *puVar25;
  LRMSet **ppLVar26;
  LRMSet **ppLVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  uchar *puVar31;
  longlong lVar32;
  uint uVar33;
  bool bVar34;
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [64];
  undefined1 auStackY_2c8 [32];
  int iStack_27c;
  int local_258 [2];
  uchar *local_250;
  longlong local_248;
  uchar *local_240;
  LRMSet *local_238;
  undefined8 local_230;
  undefined8 local_228 [33];
  undefined1 local_120 [32];
  undefined1 local_100 [32];
  undefined1 local_e0 [32];
  undefined1 local_c0 [32];
  ulonglong local_a0;
  
  local_a0 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  local_248 = this->m_parse_end_pos;
  puVar4 = this->m_raw_end;
  local_240 = this->m_ubuf;
  local_238 = this->m_lrms;
  if (param_1 < param_3) {
    auVar38 = ZEXT3264(___ymm_fc000000fc000000fc000000fc000000fc000000fc000000fc000000fc000000);
    local_250 = puVar4;
    do {
      uVar21 = (this->ctmf).m_next_hash;
      puVar2 = (ulonglong *)(local_240 + param_1);
      pauVar5 = (undefined1 (*) [32])(this->ctmf).m_next_row;
      pauVar6 = (undefined1 (*) [32])(this->ctmf).m_next_row_second;
      iVar19 = (this->ctmf).m_table_size_bits;
      if (param_1 + 8 < local_248) {
        puVar7 = (this->ctmf).m_hash_table.m_ptr;
        puVar22 = puVar2 + 1;
        (this->ctmf).m_next_ptr = (uchar *)puVar22;
        bVar9 = (byte)iVar19 & 0x1f;
        uVar18 = (uint)((this->ctmf).m_hash_mul * *puVar22 >> 0x20);
        uVar18 = uVar18 << bVar9 | uVar18 >> 0x20 - bVar9;
        (this->ctmf).m_next_hash = uVar18;
        (this->ctmf).m_next_row = puVar7 + (uVar18 & (this->ctmf).m_hash_row_mask);
        (this->ctmf).m_next_row_second =
             puVar7 + (*puVar22 * -0x30e44323485a9b9d >> ((ulonglong)(0x40 - iVar19) & 0x3f) &
                      0xfffffffffffffff0);
      }
      puVar7 = (this->ctmf).m_hash_table.m_ptr;
      plVar1 = (longlong *)((longlong)puVar2 + 1);
      (this->ctmf).m_next_ptr = (uchar *)plVar1;
      bVar9 = (byte)iVar19 & 0x1f;
      uVar18 = (uint)((this->ctmf).m_hash_mul * *plVar1 >> 0x20);
      uVar18 = uVar18 << bVar9 | uVar18 >> 0x20 - bVar9;
      (this->ctmf).m_next_hash = uVar18;
      (this->ctmf).m_next_row = puVar7 + (uVar18 & (this->ctmf).m_hash_row_mask);
      lVar28 = 0;
      (this->ctmf).m_next_row_second =
           puVar7 + ((ulonglong)(*plVar1 * -0x30e44323485a9b9d) >>
                     ((ulonglong)(0x40 - iVar19) & 0x3f) & 0xfffffffffffffff0);
      if (local_238 != (LRMSet *)0x0) {
        iVar19 = LRMScannerWindowed_FindMatchAndRoll
                           (&this->scanner,(uchar *)puVar2,local_250,(long64 *)local_258);
        auVar38 = ZEXT3264(___ymm_fc000000fc000000fc000000fc000000fc000000fc000000fc000000fc000000);
        if (0 < iVar19) {
          local_230._0_4_ = iVar19;
          lVar28 = 1;
          local_230._4_4_ = local_258[0];
        }
      }
      auVar3 = *pauVar5;
      uVar20 = (uint)param_1;
      auVar35._4_4_ = uVar20;
      auVar35._0_4_ = uVar20;
      auVar35._8_4_ = uVar20;
      auVar35._12_4_ = uVar20;
      auVar35._16_4_ = uVar20;
      auVar35._20_4_ = uVar20;
      auVar35._24_4_ = uVar20;
      auVar35._28_4_ = uVar20;
      auVar11 = vpsubd_avx2(auVar3,auVar35);
      auVar37 = auVar38._0_32_;
      local_120 = vpor_avx2(auVar11,auVar37);
      auVar11 = vpsubd_avx2(pauVar5[1],auVar35);
      local_100 = vpor_avx2(auVar11,auVar37);
      auVar11 = vpsubd_avx2(*pauVar6,auVar35);
      local_e0 = vpor_avx2(auVar11,auVar37);
      auVar11 = vpsubd_avx2(pauVar6[1],auVar35);
      local_c0 = vpor_avx2(auVar11,auVar37);
      auVar11 = vpand_avx2(*pauVar6,auVar37);
      auVar35 = vpand_avx2(pauVar6[1],auVar37);
      uVar18 = uVar21 & 0xfc000000;
      auVar36._0_8_ = CONCAT44(uVar21,uVar21) & 0xfc000000fc000000;
      auVar36._8_4_ = uVar18;
      auVar36._12_4_ = uVar18;
      auVar36._16_4_ = uVar18;
      auVar36._20_4_ = uVar18;
      auVar36._24_4_ = uVar18;
      auVar36._28_4_ = uVar18;
      auVar11 = vpcmpeqd_avx2(auVar11,auVar36);
      auVar10 = vpcmpeqd_avx2(auVar35,auVar36);
      auVar35 = vpand_avx2(auVar3,auVar37);
      auVar37 = vpand_avx2(pauVar5[1],auVar37);
      auVar11 = vpackssdw_avx2(auVar11,auVar10);
      auVar35 = vpcmpeqd_avx2(auVar35,auVar36);
      auVar37 = vpcmpeqd_avx2(auVar37,auVar36);
      auVar35 = vpackssdw_avx2(auVar35,auVar37);
      auVar11 = vpacksswb_avx2(auVar35,auVar11);
      auVar11 = vpermd_avx2(___ymm_0000000700000003000000060000000200000005000000010000000400000000,
                            auVar11);
      uVar18 = (uint)(SUB321(auVar11 >> 7,0) & 1) | (uint)(SUB321(auVar11 >> 0xf,0) & 1) << 1 |
               (uint)(SUB321(auVar11 >> 0x17,0) & 1) << 2 |
               (uint)(SUB321(auVar11 >> 0x1f,0) & 1) << 3 |
               (uint)(SUB321(auVar11 >> 0x27,0) & 1) << 4 |
               (uint)(SUB321(auVar11 >> 0x2f,0) & 1) << 5 |
               (uint)(SUB321(auVar11 >> 0x37,0) & 1) << 6 |
               (uint)(SUB321(auVar11 >> 0x3f,0) & 1) << 7 |
               (uint)(SUB321(auVar11 >> 0x47,0) & 1) << 8 |
               (uint)(SUB321(auVar11 >> 0x4f,0) & 1) << 9 |
               (uint)(SUB321(auVar11 >> 0x57,0) & 1) << 10 |
               (uint)(SUB321(auVar11 >> 0x5f,0) & 1) << 0xb |
               (uint)(SUB321(auVar11 >> 0x67,0) & 1) << 0xc |
               (uint)(SUB321(auVar11 >> 0x6f,0) & 1) << 0xd |
               (uint)(SUB321(auVar11 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar11 >> 0x7f,0) << 0xf
      ;
      uVar33 = uVar18 | (uint)(SUB321(auVar11 >> 0x87,0) & 1) << 0x10 |
               (uint)(SUB321(auVar11 >> 0x8f,0) & 1) << 0x11 |
               (uint)(SUB321(auVar11 >> 0x97,0) & 1) << 0x12 |
               (uint)(SUB321(auVar11 >> 0x9f,0) & 1) << 0x13 |
               (uint)(SUB321(auVar11 >> 0xa7,0) & 1) << 0x14 |
               (uint)(SUB321(auVar11 >> 0xaf,0) & 1) << 0x15 |
               (uint)(SUB321(auVar11 >> 0xb7,0) & 1) << 0x16 |
               (uint)SUB321(auVar11 >> 0xbf,0) << 0x17 |
               (uint)(SUB321(auVar11 >> 199,0) & 1) << 0x18 |
               (uint)(SUB321(auVar11 >> 0xcf,0) & 1) << 0x19 |
               (uint)(SUB321(auVar11 >> 0xd7,0) & 1) << 0x1a |
               (uint)(SUB321(auVar11 >> 0xdf,0) & 1) << 0x1b |
               (uint)(SUB321(auVar11 >> 0xe7,0) & 1) << 0x1c |
               (uint)(SUB321(auVar11 >> 0xef,0) & 1) << 0x1d |
               (uint)(SUB321(auVar11 >> 0xf7,0) & 1) << 0x1e |
               (uint)(byte)(auVar11[0x1f] >> 7) << 0x1f;
      if (pauVar5 == pauVar6) {
        uVar33 = uVar18;
      }
      puVar31 = &DAT_00000003;
      if (uVar33 != 0) {
        do {
          uVar18 = 0;
          for (uVar12 = uVar33; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
            uVar18 = uVar18 + 1;
          }
          uVar33 = uVar33 - 1 & uVar33;
          iVar19 = *(int *)(local_120 + (ulonglong)uVar18 * 4);
          if (((-param_1 <= (longlong)iVar19) &&
              (puVar25 = (uchar *)((longlong)iVar19 + (longlong)puVar2),
              (longlong)puVar31 < (longlong)(puVar4 + -4) - (longlong)puVar2)) &&
             (puVar31[(longlong)puVar2] == puVar25[(longlong)puVar31])) {
            lVar29 = (longlong)puVar25 - (longlong)puVar2;
            puVar22 = puVar2;
            if (puVar2 <= puVar4 + -0xc) {
LAB_14f3cd3c0:
              uVar24 = *(ulonglong *)(lVar29 + (longlong)puVar22) ^ *puVar22;
              if (uVar24 == 0) goto code_r0x00014f3cd3cd;
              uVar18 = 0;
              for (; (uVar24 & 1) == 0; uVar24 = uVar24 >> 1 | 0x8000000000000000) {
                uVar18 = uVar18 + 1;
              }
              puVar25 = (uchar *)(((ulonglong)(uVar18 >> 3) - (longlong)puVar2) + (longlong)puVar22)
              ;
              goto LAB_14f3cd3f9;
            }
LAB_14f3cd3d6:
            puVar25 = (uchar *)((longlong)puVar22 - (longlong)puVar2);
            for (; (puVar22 < puVar4 + -4 &&
                   ((uchar)*puVar22 == *(uchar *)((longlong)puVar22 + lVar29)));
                puVar22 = (ulonglong *)((longlong)puVar22 + 1)) {
              puVar25 = puVar25 + 1;
            }
LAB_14f3cd3f9:
            if ((longlong)puVar31 < (longlong)puVar25) {
              *(int *)(&local_230 + lVar28) = (int)puVar25;
              *(int *)((longlong)local_228 + lVar28 * 8 + -4) = -iVar19;
              lVar28 = lVar28 + 1;
              puVar31 = puVar25;
            }
          }
        } while (uVar33 != 0);
        auVar3 = *pauVar5;
      }
      uVar8 = *(undefined8 *)(pauVar5[1] + 4);
      uVar13 = *(undefined8 *)(pauVar5[1] + 0xc);
      uVar14 = *(undefined8 *)(pauVar5[1] + 0x14);
      lVar29 = (longlong)param_5;
      *(undefined1 (*) [32])(*pauVar5 + 4) = auVar3;
      *(undefined8 *)pauVar5[1] = *(undefined8 *)(*pauVar5 + 0x1c);
      *(undefined8 *)(pauVar5[1] + 8) = uVar8;
      *(undefined8 *)(pauVar5[1] + 0x10) = uVar13;
      *(undefined8 *)(pauVar5[1] + 0x18) = uVar14;
      uVar21 = (uVar20 ^ uVar21) & 0x3ffffff ^ uVar21;
      *(uint *)*pauVar5 = uVar21;
      uVar8 = *(undefined8 *)(*pauVar6 + 0x1c);
      uVar13 = *(undefined8 *)(pauVar6[1] + 4);
      uVar14 = *(undefined8 *)(pauVar6[1] + 0xc);
      uVar15 = *(undefined8 *)(pauVar6[1] + 0x14);
      *(undefined8 *)(*pauVar6 + 4) = *(undefined8 *)*pauVar6;
      *(undefined8 *)(*pauVar6 + 0xc) = *(undefined8 *)(*pauVar6 + 8);
      *(undefined8 *)(*pauVar6 + 0x14) = *(undefined8 *)(*pauVar6 + 0x10);
      *(undefined8 *)(*pauVar6 + 0x1c) = *(undefined8 *)(*pauVar6 + 0x18);
      *(undefined8 *)pauVar6[1] = uVar8;
      *(undefined8 *)(pauVar6[1] + 8) = uVar13;
      *(undefined8 *)(pauVar6[1] + 0x10) = uVar14;
      *(undefined8 *)(pauVar6[1] + 0x18) = uVar15;
      *(uint *)*pauVar6 = uVar21;
      _Dst = param_4 + (param_1 - param_2) * lVar29;
      if (lVar28 == 0) {
        _Dst->length = 0;
      }
      else {
        if (1 < lVar28) {
          lVar32 = 1;
          do {
            uVar8 = (&local_230)[lVar32];
            ppLVar26 = &local_238 + lVar32;
            iStack_27c = (int)((ulonglong)uVar8 >> 0x20);
            lVar30 = lVar32;
            do {
              if ((int)uVar8 == *(int *)ppLVar26) {
                bVar34 = iStack_27c < *(int *)((longlong)ppLVar26 + 4);
              }
              else {
                bVar34 = *(int *)ppLVar26 <= (int)uVar8;
              }
              if (!bVar34) break;
              lVar30 = lVar30 + -1;
              ppLVar26[1] = *ppLVar26;
              ppLVar26 = ppLVar26 + -1;
            } while (0 < lVar30);
            lVar32 = lVar32 + 1;
            (&local_230)[lVar30] = uVar8;
          } while (lVar32 < lVar28);
          ppLVar26 = (LRMSet **)(&local_230 + lVar28);
          iVar19 = (int)local_230;
          ppLVar17 = (LRMSet **)&local_230;
          do {
            ppLVar27 = ppLVar17;
            if (&local_238 + lVar28 <= ppLVar27) break;
            bVar34 = iVar19 != *(int *)(ppLVar27 + 1);
            iVar19 = *(int *)(ppLVar27 + 1);
            ppLVar17 = ppLVar27 + 1;
          } while (bVar34);
          if (ppLVar27 < &local_238 + lVar28) {
            ppLVar17 = ppLVar27 + 2;
            while (ppLVar16 = ppLVar17, ppLVar16 < ppLVar26) {
              ppLVar17 = ppLVar16 + 1;
              if (*(int *)ppLVar27 != *(int *)ppLVar16) {
                ppLVar27 = ppLVar27 + 1;
                *ppLVar27 = *ppLVar16;
              }
            }
            ppLVar26 = ppLVar27 + 1;
          }
          lVar28 = (longlong)(int)((longlong)ppLVar26 - (longlong)&local_230 >> 3);
        }
        iVar19 = (int)local_230;
        lVar32 = (longlong)(int)local_230;
        if (lVar28 < lVar29) {
          lVar29 = lVar28;
        }
        memcpy(_Dst,&local_230,lVar29 * 8);
        if (lVar29 < param_5) {
          _Dst[lVar29].length = 0;
        }
        if (0x4c < iVar19) {
          this->longMatchEnd = param_1 + lVar32;
          this->longMatchOffs = local_230._4_4_;
          this->longMatchPos = param_1;
          this->longMatchLen = iVar19;
          lVar23 = ReportLongMatch(this,param_4,param_2,param_3,param_1,param_5);
          param_1 = lVar23 + -1;
        }
        auVar38 = ZEXT3264(___ymm_fc000000fc000000fc000000fc000000fc000000fc000000fc000000fc000000);
      }
      param_1 = param_1 + 1;
    } while (param_1 < param_3);
  }
  return param_1;
code_r0x00014f3cd3cd:
  puVar22 = puVar22 + 1;
  if (puVar4 + -0xc < puVar22) goto LAB_14f3cd3d6;
  goto LAB_14f3cd3c0;
}

// RR_GET64_NATIVE @ 14f3cd6a0

ulong64 __cdecl oo2::RR_GET64_NATIVE(void *param_1)

{
  return *(ulong64 *)param_1;
}

// S32_checkA @ 14f3cd6b0

int __cdecl oo2::S32_checkA(long64 param_1)

{
  return (int)param_1;
}

// getmatchlen_mml1_forceinline @ 14f3cd6c0

long64 __cdecl oo2::getmatchlen_mml1_forceinline(uchar *param_1,uchar *param_2,uchar *param_3)

{
  uint uVar1;
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
  for (; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x8000000000000000) {
    uVar1 = uVar1 + 1;
  }
  return (long64)((longlong)puVar2 + ((ulonglong)(uVar1 >> 3) - (longlong)param_1));
}

// hash_bytes_64 @ 14f3cd730

ulong64 __cdecl oo2::`anonymous_namespace'::hash_bytes_64(uchar *param_1,ulong64 param_2)

{
  return param_2 * *(longlong *)param_1;
}

// havematch_better @ 14f3cd740

bool __cdecl
oo2::havematch_better(uchar *param_1,uchar *param_2,uchar *param_3,long64 param_4,long64 *param_5)

{
  uint uVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  char *pcVar4;
  
  if ((param_4 < (longlong)param_3 - (longlong)param_1) && (param_1[param_4] == param_2[param_4])) {
    puVar2 = (ulonglong *)param_1;
    if (param_1 <= param_3 + -8) {
LAB_14f3cd770:
      uVar3 = *(ulonglong *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2) ^ *puVar2;
      if (uVar3 == 0) goto code_r0x00014f3cd779;
      uVar1 = 0;
      for (; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x8000000000000000) {
        uVar1 = uVar1 + 1;
      }
      pcVar4 = (char *)(((ulonglong)(uVar1 >> 3) - (longlong)param_1) + (longlong)puVar2);
      goto LAB_14f3cd7a5;
    }
LAB_14f3cd785:
    pcVar4 = (char *)((longlong)puVar2 - (longlong)param_1);
    for (; (puVar2 < param_3 &&
           ((char)*puVar2 == *(char *)((longlong)puVar2 + ((longlong)param_2 - (longlong)param_1))))
        ; puVar2 = (ulonglong *)((longlong)puVar2 + 1)) {
      pcVar4 = pcVar4 + 1;
    }
LAB_14f3cd7a5:
    if (param_4 < (longlong)pcVar4) {
      *param_5 = (long64)pcVar4;
      return true;
    }
  }
  return false;
code_r0x00014f3cd779:
  puVar2 = puVar2 + 1;
  if (param_3 + -8 < puVar2) goto LAB_14f3cd785;
  goto LAB_14f3cd770;
}

// rrCtz32 @ 14f3cd7e0

uint __cdecl oo2::rrCtz32(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  for (; (param_1 & 1) == 0; param_1 = param_1 >> 1 | 0x80000000) {
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}

// rrCtz64 @ 14f3cd7f0

uint __cdecl oo2::rrCtz64(ulong64 param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  for (; (param_1 & 1) == 0; param_1 = param_1 >> 1 | 0x8000000000000000) {
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}

// rrCtzBytes64 @ 14f3cd800

uint __cdecl oo2::rrCtzBytes64(ulong64 param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  for (; (param_1 & 1) == 0; param_1 = param_1 >> 1 | 0x8000000000000000) {
    uVar1 = uVar1 + 1;
  }
  return uVar1 >> 3;
}

// rrPtrDiff @ 14f3cd810

long64 __cdecl oo2::rrPtrDiff(long64 param_1)

{
  return param_1;
}

