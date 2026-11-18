// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2core_win64
// Functions: 37

// ByteCopy<oo2::rrHuffman_CharAndCount,oo2::rrHuffman_CharAndCount> @ 14f39a300

void __cdecl
oo2::ByteCopy<oo2::rrHuffman_CharAndCount,oo2::rrHuffman_CharAndCount>
          (rrHuffman_CharAndCount *param_1,rrHuffman_CharAndCount *param_2)

{
  *param_1 = *param_2;
  return;
}

// ByteCopy<oo2::Bytes<4>,oo2::Bytes<4>_> @ 14f39a310

void __cdecl oo2::ByteCopy<oo2::Bytes<4>,oo2::Bytes<4>_>(Bytes<4> *param_1,Bytes<4> *param_2)

{
  *(undefined4 *)param_1->bytes = *(undefined4 *)param_2->bytes;
  return;
}

// ByteSwap<oo2::rrHuffman_CharAndCount> @ 14f39a320

void __cdecl
oo2::ByteSwap<oo2::rrHuffman_CharAndCount>
          (rrHuffman_CharAndCount *param_1,rrHuffman_CharAndCount *param_2)

{
  rrHuffman_CharAndCount rVar1;
  
  rVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = rVar1;
  return;
}

// check_value_cast<unsigned_short,int> @ 14f39a340

ushort __cdecl oo2::check_value_cast<unsigned_short,int>(int *param_1)

{
  return (ushort)*param_1;
}

// check_value_cast<unsigned_short,unsigned_int> @ 14f39a350

ushort __cdecl oo2::check_value_cast<unsigned_short,unsigned_int>(uint *param_1)

{
  return (ushort)*param_1;
}

// check_value_cast<unsigned_int,unsigned___int64> @ 14f39a360

uint __cdecl oo2::check_value_cast<unsigned_int,unsigned___int64>(ulong64 *param_1)

{
  return (uint)*param_1;
}

// stdsort<oo2::rrHuffman_CharAndCount_*,oo2::rrHuffman_CharAndCountCompareCount> @ 14f39a380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
oo2::stdsort<oo2::rrHuffman_CharAndCount_*,oo2::rrHuffman_CharAndCountCompareCount>
          (rrHuffman_CharAndCount *param_1,rrHuffman_CharAndCount *param_2,
          rrHuffman_CharAndCountCompareCount param_3)

{
  ushort uVar1;
  ushort uVar2;
  rrHuffman_CharAndCount rVar3;
  uint uVar4;
  longlong lVar5;
  rrHuffman_CharAndCount *prVar6;
  ushort uVar7;
  ulonglong uVar8;
  longlong lVar9;
  rrHuffman_CharAndCount *prVar10;
  rrHuffman_CharAndCount *prVar11;
  rrHuffman_CharAndCount *prVar12;
  ulonglong uVar13;
  rrHuffman_CharAndCount *prVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong *puVar17;
  ulonglong *puVar18;
  undefined1 auStack_648 [1536];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_648;
  uVar15 = (ulonglong)(int)((longlong)param_2 - (longlong)param_1 >> 2);
  prVar14 = param_1 + (uVar15 - 1);
  uVar8 = uVar15;
  puVar18 = local_48;
  if (1 < uVar15) {
    do {
      puVar17 = puVar18;
      puVar18 = puVar17 + -3;
      uVar8 = (uVar8 >> 2) + (uVar8 >> 1);
    } while (uVar8 != 0);
    puVar17[-4] = 0;
LAB_14f39a430:
    do {
      if (1 < uVar15) {
        if (uVar15 == 2) {
          if (prVar14->count < param_1->count) {
            rVar3 = *param_1;
            *param_1 = *prVar14;
LAB_14f39a6be:
            *prVar14 = rVar3;
          }
        }
        else {
          uVar7 = param_1->count;
          uVar1 = prVar14->count;
          uVar8 = uVar15 >> 1;
          uVar2 = param_1[uVar8].count;
          prVar6 = param_1 + uVar8;
          if (uVar2 < uVar7) {
            if (uVar2 < uVar1) {
              if (uVar7 < uVar1) {
                rVar3 = *param_1;
                *param_1 = *prVar6;
                *prVar6 = rVar3;
                goto code_r0x00014f39a4c0;
              }
              rVar3 = *prVar6;
              *prVar6 = *param_1;
              *param_1 = rVar3;
              rVar3 = *prVar6;
              *prVar6 = *prVar14;
            }
            else {
LAB_14f39a4b2:
              rVar3 = *param_1;
              *param_1 = *prVar14;
            }
LAB_14f39a4bb:
            *prVar14 = rVar3;
          }
          else if (uVar1 < uVar2) {
            if (uVar7 < uVar1) {
              rVar3 = *prVar6;
              *prVar6 = *prVar14;
              goto LAB_14f39a4bb;
            }
            rVar3 = *param_1;
            *param_1 = *prVar6;
            *prVar6 = rVar3;
            goto LAB_14f39a4b2;
          }
code_r0x00014f39a4c0:
          if (4 < uVar15) {
            if (puVar18 == local_48) {
LAB_14f39a5d6:
              uVar8 = uVar8 - 1;
              prVar6 = prVar6 + -1;
              uVar13 = uVar8 * 2 + 1;
              prVar11 = prVar6;
LAB_14f39a5f0:
              prVar10 = param_1 + uVar13;
              if ((prVar10 + 1 <= prVar14) && (prVar10->count < prVar10[1].count)) {
                uVar13 = uVar13 + 1;
                prVar10 = prVar10 + 1;
              }
              if (prVar11->count < prVar10->count) goto code_r0x00014f39a617;
              goto LAB_14f39a62f;
            }
            rVar3 = *prVar6;
            *prVar6 = *param_1;
            *param_1 = rVar3;
            prVar6 = param_1;
            prVar11 = prVar14;
            while( true ) {
              prVar10 = prVar11;
              do {
                prVar11 = prVar10 + -1;
                prVar12 = prVar10 + -1;
                prVar10 = prVar11;
              } while (param_1->count < prVar12->count);
              prVar10 = prVar6;
              if (prVar11 <= prVar6) break;
              do {
                prVar6 = prVar10;
                prVar10 = prVar6 + 1;
              } while (prVar6[1].count < param_1->count);
              if (prVar11 <= prVar10) break;
              rVar3 = *prVar10;
              *prVar10 = *prVar11;
              *prVar11 = rVar3;
              prVar6 = prVar10;
            }
            rVar3 = *param_1;
            *param_1 = *prVar6;
            *prVar6 = rVar3;
            uVar4 = (uint)rVar3 >> 0x10;
            prVar11 = prVar6;
            do {
              prVar10 = prVar11 + 1;
              uVar7 = (ushort)uVar4;
              if (prVar14 <= prVar10) break;
              uVar7 = prVar6->count;
              uVar4 = (uint)uVar7;
              prVar12 = prVar11 + 1;
              prVar11 = prVar10;
            } while (prVar12->count <= uVar7);
            do {
              prVar11 = prVar6 + -1;
              if (prVar11 <= param_1) break;
              prVar12 = prVar6 + -1;
              prVar6 = prVar11;
            } while (uVar7 <= prVar12->count);
            lVar9 = (longlong)prVar14 - (longlong)prVar10 >> 2;
            lVar16 = (longlong)prVar11 - (longlong)param_1 >> 2;
            uVar15 = lVar9 + 1;
            uVar8 = lVar16 + 1;
            prVar6 = prVar11;
            prVar12 = param_1;
            if (uVar8 > uVar15) {
              prVar6 = prVar14;
              prVar12 = prVar10;
              prVar10 = param_1;
              prVar14 = prVar11;
            }
            *puVar18 = (ulonglong)prVar12;
            lVar5 = lVar9;
            if (uVar8 <= uVar15) {
              lVar5 = lVar16;
            }
            puVar18[1] = (ulonglong)prVar6;
            puVar18[2] = lVar5 + 1;
            if (uVar8 <= uVar15) {
              lVar16 = lVar9;
            }
            uVar15 = lVar16 + 1;
            param_1 = prVar10;
            puVar18 = puVar18 + 3;
            goto LAB_14f39a430;
          }
          if (uVar15 != 3) {
            uVar7 = param_1[1].count;
            if (prVar6->count < uVar7) {
              if (prVar14->count <= uVar7) {
                rVar3 = *prVar6;
                *prVar6 = param_1[1];
                param_1[1] = rVar3;
                rVar3 = *prVar6;
                *prVar6 = *prVar14;
                goto LAB_14f39a6be;
              }
              rVar3 = param_1[1];
              param_1[1] = *prVar6;
              *prVar6 = rVar3;
            }
            else if (uVar7 < param_1->count) {
              rVar3 = *param_1;
              *param_1 = param_1[1];
              param_1[1] = rVar3;
            }
          }
        }
      }
LAB_14f39a6c1:
      uVar15 = puVar18[-1];
      param_1 = (rrHuffman_CharAndCount *)puVar18[-3];
      prVar14 = (rrHuffman_CharAndCount *)puVar18[-2];
      puVar18 = puVar18 + -3;
    } while (uVar15 != 0);
  }
  return;
code_r0x00014f39a617:
  rVar3 = *prVar11;
  uVar13 = uVar13 * 2 + 1;
  *prVar11 = *prVar10;
  *prVar10 = rVar3;
  prVar11 = prVar10;
  if (uVar15 <= uVar13) {
LAB_14f39a62f:
    if (uVar8 == 0) {
      uVar15 = uVar15 - 1;
      rVar3 = *param_1;
      uVar13 = 1;
      *param_1 = *prVar14;
      *prVar14 = rVar3;
      prVar14 = prVar14 + -1;
      prVar11 = param_1;
      if (uVar15 < 2) goto LAB_14f39a6c1;
      goto LAB_14f39a5f0;
    }
    goto LAB_14f39a5d6;
  }
  goto LAB_14f39a5f0;
}

// swap3<oo2::rrHuffman_CharAndCount> @ 14f39a740

void __cdecl
oo2::swap3<oo2::rrHuffman_CharAndCount>
          (rrHuffman_CharAndCount *param_1,rrHuffman_CharAndCount *param_2,
          rrHuffman_CharAndCount *param_3)

{
  rrHuffman_CharAndCount rVar1;
  
  rVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = rVar1;
  rVar1 = *param_1;
  *param_1 = *param_3;
  *param_3 = rVar1;
  return;
}

// swap<oo2::rrHuffman_CharAndCount> @ 14f39a760

void __cdecl
oo2::swap<oo2::rrHuffman_CharAndCount>
          (rrHuffman_CharAndCount *param_1,rrHuffman_CharAndCount *param_2)

{
  rrHuffman_CharAndCount rVar1;
  
  rVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = rVar1;
  return;
}

// operator< @ 14f39a780

bool __cdecl oo2::operator<(SymHeapNode *param_1,SymHeapNode *param_2)

{
  return param_1->score < param_2->score;
}

// operator() @ 14f39a790

void __thiscall
oo2::swap_functor<oo2::rrHuffman_CharAndCount>::operator()
          (swap_functor<oo2::rrHuffman_CharAndCount> *this,rrHuffman_CharAndCount *param_1,
          rrHuffman_CharAndCount *param_2)

{
  rrHuffman_CharAndCount rVar1;
  
  rVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = rVar1;
  return;
}

// operator() @ 14f39a7b0

bool __thiscall
oo2::rrHuffman_CharAndCountCompareCount::operator()
          (rrHuffman_CharAndCountCompareCount *this,rrHuffman_CharAndCount *param_1,
          rrHuffman_CharAndCount *param_2)

{
  return param_1->count < param_2->count;
}

// OodleFree @ 14f39a7d0

void __cdecl oo2::OodleFree(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f39a7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleCore_Plugin_Free)(param_1);
  return;
}

// OodleMallocAligned @ 14f39a7e0

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

// RR_PUT32_NATIVE @ 14f39a820

void __cdecl oo2::RR_PUT32_NATIVE(void *param_1,uint param_2)

{
  *(uint *)param_1 = param_2;
  return;
}

// rrAlignUp64 @ 14f39a830

ulong64 __cdecl oo2::rrAlignUp64(ulong64 param_1,long64 param_2)

{
  return (param_1 - 1) + param_2 & ~(param_2 - 1U);
}

// rrAlignUpA @ 14f39a850

long64 __cdecl oo2::rrAlignUpA(long64 param_1,long64 param_2)

{
  return param_1 + -1 + param_2 & ~(param_2 - 1U);
}

// rrClz32 @ 14f39a870

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

// rrGetBitLevel_V_NonZero @ 14f39a890

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

// rrHuffman_BuildCodeLens @ 14f39a8a0

void __cdecl
oo2::rrHuffman_BuildCodeLens
          (rrHuffman *param_1,uint *param_2,uint param_3,int param_4,rrArenaAllocator *param_5,
          int param_6)

{
  longlong *plVar1;
  uint uVar2;
  rrHuffman_CharAndCount *prVar3;
  longlong *plVar4;
  code *pcVar5;
  float fVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  int *piVar12;
  rrHuffman_CharAndCount *prVar13;
  rrArenaAllocator *prVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  float fVar22;
  
  uVar2 = param_1->numSymbols;
  lVar20 = 0;
  param_1->minCodeLen = 0;
  param_1->maxCodeLen = 0;
  param_1->numCodesOfLen[0] = 0;
  param_1->numCodesOfLen[1] = 0;
  param_1->numCodesOfLen[2] = 0;
  param_1->numCodesOfLen[3] = 0;
  param_1->numCodesOfLen[4] = 0;
  param_1->numCodesOfLen[5] = 0;
  param_1->numCodesOfLen[6] = 0;
  param_1->numCodesOfLen[7] = 0;
  param_1->numCodesOfLen[8] = 0;
  param_1->numCodesOfLen[9] = 0;
  param_1->numCodesOfLen[10] = 0;
  param_1->numCodesOfLen[0xb] = 0;
  param_1->numCodesOfLen[0xc] = 0;
  param_1->numCodesOfLen[0xd] = 0;
  param_1->numCodesOfLen[0xe] = 0;
  param_1->numCodesOfLen[0xf] = 0;
  param_1->numCodesOfLen[0x10] = 0;
  param_1->numCodesOfLen[0x11] = 0;
  param_1->numCodesOfLen[0x12] = 0;
  param_1->numCodesOfLen[0x13] = 0;
  param_1->numCodesOfLen[0x14] = 0;
  param_1->numCodesOfLen[0x15] = 0;
  param_1->numCodesOfLen[0x16] = 0;
  param_1->numCodesOfLen[0x17] = 0;
  param_1->numCodesOfLen[0x18] = 0;
  param_1->numCodesOfLen[0x19] = 0;
  param_1->numCodesOfLen[0x1a] = 0;
  param_1->numCodesOfLen[0x1b] = 0;
  param_1->numCodesOfLen[0x1c] = 0;
  param_1->numCodesOfLen[0x1d] = 0;
  param_1->numCodesOfLen[0x1e] = 0;
  param_1->numCodesOfLen[0x1f] = 0;
  memset(param_1->codeLenTable,0,(longlong)(int)uVar2);
  if (0xe < param_4 - 1U) {
    param_4 = 0xf;
  }
  if (param_3 < 0x10000) {
    puVar9 = (uint *)0x0;
    prVar14 = (rrArenaAllocator *)0x0;
  }
  else {
    lVar20 = (longlong)param_1->numSymbols << 2;
    if (param_5 == (rrArenaAllocator *)0x0) {
      puVar9 = (*g_fp_OodleCore_Plugin_MallocAligned)(lVar20,0x10);
      if (puVar9 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        Oodle_Core_Malloc_Failed(lVar20);
      }
    }
    else {
      puVar9 = rrArenaAllocator::Alloc(param_5,lVar20,0);
    }
    if (puVar9 == (uint *)0x0) {
      iVar7 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\rrarenaallocator.h",0x1bc,
                                 "oo2::rrScopeArenaAlloc::Alloc","m_ptr != NULL");
      if (iVar7 != 0) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar7 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\rrhuffman.cpp",0x6e7,
                                 "oo2::rrHuffman_BuildCodeLens","dest != NULL");
      if (iVar7 != 0) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    fVar6 = __real_3f000000;
    uVar17 = 0;
    lVar19 = 0;
    iVar7 = 0;
    lVar18 = (longlong)param_1->numSymbols;
    prVar14 = param_5;
    if (0 < lVar18) {
      lVar15 = 0;
      uVar8 = 0;
      do {
        uVar10 = param_2[lVar15];
        uVar17 = uVar17 + uVar10;
        iVar16 = iVar7;
        if (uVar10 <= uVar8) {
          iVar16 = (int)lVar19;
        }
        lVar19 = (longlong)iVar16;
        if (uVar10 <= uVar8) {
          uVar10 = uVar8;
        }
        iVar7 = iVar7 + 1;
        lVar15 = lVar15 + 1;
        uVar8 = uVar10;
      } while (lVar15 < lVar18);
      if ((0xffff < uVar10) || (0xffff < uVar17)) {
        fVar22 = __real_477fff00 / (float)uVar10;
        if (__real_477fff00 / (float)uVar17 <= __real_477fff00 / (float)uVar10) {
          fVar22 = __real_477fff00 / (float)uVar17;
        }
        uVar17 = 0;
        lVar15 = 0;
        do {
          uVar8 = 0;
          if (param_2[lVar15] != 0) {
            uVar8 = (uint)((float)param_2[lVar15] * fVar22 + fVar6);
            uVar10 = 0xffff;
            if (uVar8 < 0xffff) {
              uVar10 = uVar8;
            }
            uVar8 = 1;
            if (1 < uVar10) {
              uVar8 = uVar10;
            }
            uVar17 = uVar17 + uVar8;
          }
          puVar9[lVar15] = uVar8;
          lVar15 = lVar15 + 1;
        } while (lVar15 < lVar18);
        param_2 = puVar9;
        if (0xffff < uVar17) {
          puVar11 = puVar9 + lVar19;
          *puVar11 = *puVar11 + (0xffff - uVar17);
          if ((*puVar11 == 0) &&
             (iVar7 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\rrhuffman.cpp",0x11c,
                                         "oo2::rrHuffman_ScaleCounts","destCounts[maxi] > 0"),
             iVar7 != 0)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
      }
    }
  }
  prVar3 = (rrHuffman_CharAndCount *)param_1->encodeTable;
  iVar7 = 0;
  prVar13 = prVar3;
  if (0 < (int)(uVar2 & 0xfffffff8)) {
    iVar16 = 2;
    puVar11 = param_2 + 4;
    lVar18 = 4;
    do {
      if (((*(longlong *)(puVar11 + -4) != 0 || *(longlong *)puVar11 != 0) ||
          *(longlong *)(puVar11 + 2) != 0) || *(longlong *)(puVar11 + -2) != 0) {
        *prVar13 = (rrHuffman_CharAndCount)((int)*(longlong *)(puVar11 + -4) * 0x10000 + iVar7);
        lVar19 = 0;
        if (puVar11[-4] != 0) {
          lVar19 = lVar18;
        }
        piVar12 = (int *)((longlong)&prVar13->symbol + lVar19);
        *piVar12 = puVar11[-3] * 0x10000 + -1 + iVar16;
        lVar19 = 0;
        if (puVar11[-3] != 0) {
          lVar19 = lVar18;
        }
        piVar12 = (int *)((longlong)piVar12 + lVar19);
        *piVar12 = puVar11[-2] * 0x10000 + iVar16;
        lVar19 = 0;
        if (puVar11[-2] != 0) {
          lVar19 = lVar18;
        }
        piVar12 = (int *)((longlong)piVar12 + lVar19);
        *piVar12 = puVar11[-1] * 0x10000 + 1 + iVar16;
        lVar19 = 0;
        if (puVar11[-1] != 0) {
          lVar19 = lVar18;
        }
        piVar12 = (int *)((longlong)piVar12 + lVar19);
        *piVar12 = *puVar11 * 0x10000 + 2 + iVar16;
        lVar19 = 0;
        if (*puVar11 != 0) {
          lVar19 = lVar18;
        }
        piVar12 = (int *)((longlong)piVar12 + lVar19);
        *piVar12 = puVar11[1] * 0x10000 + 3 + iVar16;
        lVar19 = 0;
        if (puVar11[1] != 0) {
          lVar19 = lVar18;
        }
        piVar12 = (int *)((longlong)piVar12 + lVar19);
        *piVar12 = puVar11[2] * 0x10000 + 4 + iVar16;
        lVar19 = 0;
        if (puVar11[2] != 0) {
          lVar19 = lVar18;
        }
        piVar12 = (int *)((longlong)piVar12 + lVar19);
        *piVar12 = puVar11[3] * 0x10000 + 5 + iVar16;
        lVar19 = 0;
        if (puVar11[3] != 0) {
          lVar19 = lVar18;
        }
        prVar13 = (rrHuffman_CharAndCount *)((longlong)piVar12 + lVar19);
      }
      iVar7 = iVar7 + 8;
      iVar16 = iVar16 + 8;
      puVar11 = puVar11 + 8;
    } while (iVar7 < (int)(uVar2 & 0xfffffff8));
  }
  for (lVar18 = (longlong)iVar7; lVar18 < (int)uVar2; lVar18 = lVar18 + 1) {
    uVar17 = param_2[lVar18];
    *prVar13 = (rrHuffman_CharAndCount)(uVar17 * 0x10000 + iVar7);
    lVar19 = 0;
    if (uVar17 != 0) {
      lVar19 = 4;
    }
    prVar13 = (rrHuffman_CharAndCount *)((longlong)&prVar13->symbol + lVar19);
    iVar7 = iVar7 + 1;
  }
  iVar7 = (int)((longlong)prVar13 - (longlong)prVar3 >> 2);
  param_1->topSym = (uint)prVar3[(longlong)iVar7 + -1].symbol;
  param_1->gotNumSymbols = iVar7;
  if (iVar7 < 2) {
    param_1->oneChar = (uint)prVar3->symbol;
  }
  else {
    rrHuffman_Sort(prVar3,iVar7,param_5);
    param_1->oneChar = (uint)prVar3[(longlong)param_1->gotNumSymbols + -1].symbol;
    rrHuffman_BuildCodeLens_Moffat_InPlace(param_1,param_4,prVar3);
    if (param_4 < param_1->maxCodeLen) {
      if (param_6 == 0) {
        rrHuffman_BuildCodeLens_Limited_Heuristic(param_1,param_2,param_4,prVar3,param_5);
      }
      else {
        rrHuffman_BuildCodeLens_Limited_PackageMerge(param_1,param_2,param_4,param_5);
      }
      if ((param_4 < param_1->maxCodeLen) &&
         (iVar7 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\rrhuffman.cpp",0x776,
                                     "oo2::rrHuffman_BuildCodeLens","HI->maxCodeLen <= limitCodeLen"
                                    ), iVar7 != 0)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  if (puVar9 == (uint *)0x0) {
    return;
  }
  if (prVar14 != (rrArenaAllocator *)0x0) {
    uVar21 = lVar20 + 0xfU & 0xfffffffffffffff0;
    if ((uint *)prVar14->m_unorderedStart == (uint *)0x0) {
      if (uVar21 + (longlong)puVar9 == prVar14->m_cur) {
        prVar14->m_cur = prVar14->m_cur - uVar21;
        return;
      }
    }
    else if (((uint *)prVar14->m_unorderedStart <= puVar9) &&
            (puVar9 < (uint *)(prVar14->m_size + prVar14->m_base))) {
      plVar1 = (longlong *)(uVar21 + (longlong)puVar9);
      plVar1[1] = 1;
      plVar4 = (longlong *)prVar14->m_cur;
      if (plVar1 + 2 != plVar4) {
        return;
      }
      while( true ) {
        if (plVar4 == (longlong *)prVar14->m_unorderedStart) {
          return;
        }
        if (plVar1[1] != 1) break;
        prVar14->m_cur = prVar14->m_cur + (-0x10 - *plVar1);
        plVar4 = (longlong *)prVar14->m_cur;
        plVar1 = plVar4 + -2;
      }
      return;
    }
  }
  (*g_fp_OodleCore_Plugin_Free)(puVar9);
  return;
}

// rrHuffman_BuildCodeLens_Branchy @ 14f39ae40

void __cdecl
oo2::rrHuffman_BuildCodeLens_Branchy(rrHuffman *param_1,int param_2,rrHuffman_CharAndCount *param_3)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uchar *puVar5;
  ushort uVar6;
  longlong lVar7;
  rrHuffman_CharAndCount *prVar8;
  ushort uVar9;
  ushort *puVar10;
  ushort *puVar11;
  int iVar12;
  int iVar13;
  ushort uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  
  iVar4 = param_1->gotNumSymbols;
  lVar19 = (longlong)iVar4;
  puVar1 = &param_3->count;
  param_3[lVar19].count = 0xffff;
  uVar2 = param_3[1].count;
  iVar20 = iVar4 + 1;
  uVar14 = *puVar1;
  param_3[1].count = (ushort)iVar20;
  *puVar1 = (ushort)iVar20;
  puVar11 = &param_3[iVar20].count;
  *puVar11 = uVar2 + uVar14;
  iVar13 = iVar4 + 2;
  iVar12 = iVar20;
  if (2 < lVar19) {
    lVar18 = 2;
    puVar10 = &param_3[2].count;
    do {
      uVar2 = *puVar10;
      uVar14 = *puVar11;
      uVar9 = (ushort)iVar13;
      if (uVar14 < uVar2) {
        *puVar11 = uVar9;
        iVar12 = iVar12 + 1;
        puVar11 = puVar11 + 2;
        if (iVar12 != iVar13) {
          uVar6 = *puVar11;
          uVar3 = uVar2;
          goto LAB_14f39af1b;
        }
        *puVar10 = uVar9;
        lVar18 = lVar18 + 1;
        puVar10 = puVar10 + 2;
        uVar14 = uVar14 + uVar2;
      }
      else {
        *puVar10 = uVar9;
        lVar18 = lVar18 + 1;
        puVar10 = puVar10 + 2;
        uVar6 = uVar14;
        uVar3 = *puVar10;
        uVar14 = uVar2;
LAB_14f39af1b:
        if (uVar6 < uVar3) {
          iVar12 = iVar12 + 1;
          *puVar11 = uVar9;
          puVar11 = puVar11 + 2;
        }
        else {
          lVar18 = lVar18 + 1;
          *puVar10 = uVar9;
          puVar10 = puVar10 + 2;
          uVar6 = uVar3;
        }
        uVar14 = uVar6 + uVar14;
      }
      lVar7 = (longlong)iVar13;
      iVar13 = iVar13 + 1;
      param_3[lVar7].count = uVar14;
    } while (lVar18 < lVar19);
  }
  iVar20 = iVar4 + -1 + iVar20;
  if (iVar13 < iVar20) {
    puVar11 = &param_3[(longlong)iVar12 + 1].count;
    do {
      puVar11[-2] = (ushort)iVar13;
      *puVar11 = (ushort)iVar13;
      puVar11 = puVar11 + 4;
      iVar13 = iVar13 + 1;
    } while (iVar13 < iVar20);
  }
  uVar16 = 0;
  param_3[(longlong)iVar13 + -1].count = 0;
  param_3[lVar19].count = 0;
  lVar18 = (longlong)(iVar13 + -2);
  if (-1 < iVar13 + -2) {
    puVar11 = &param_3[lVar18].count;
    do {
      lVar18 = lVar18 + -1;
      *puVar11 = param_3[*puVar11].count + 1;
      puVar11 = puVar11 + -2;
    } while (-1 < lVar18);
  }
  puVar5 = param_1->codeLenTable;
  param_1->minCodeLen = (uint)param_3[(longlong)param_1->gotNumSymbols + -1].count;
  param_1->maxCodeLen = (uint)*puVar1;
  param_3[lVar19].count = 0;
  uVar2 = *puVar1;
  prVar8 = param_3;
  uVar17 = uVar16;
  while (iVar13 = (int)uVar17, param_2 <= (int)(uint)uVar2) {
    *puVar1 = (ushort)param_2;
    uVar16 = uVar16 + 1;
    puVar11 = &prVar8->symbol;
    uVar17 = (ulonglong)(iVar13 + 1);
    prVar8 = param_3 + uVar16;
    puVar1 = &prVar8->count;
    puVar5[*puVar11] = (uchar)param_2;
    uVar2 = *puVar1;
  }
  lVar19 = (longlong)iVar13;
  prVar8 = param_3 + lVar19;
  param_1->numCodesOfLen[param_2] = iVar13;
  uVar2 = prVar8->count;
  while (uVar2 != 0) {
    uVar16 = uVar17;
    do {
      puVar1 = &prVar8->symbol;
      lVar19 = lVar19 + 1;
      prVar8 = param_3 + lVar19;
      uVar15 = (int)uVar16 + 1;
      uVar16 = (ulonglong)uVar15;
      puVar5[*puVar1] = (uchar)uVar2;
    } while (prVar8->count == uVar2);
    param_1->numCodesOfLen[uVar2] = uVar15 - (int)uVar17;
    uVar17 = uVar16;
    uVar2 = prVar8->count;
  }
  return;
}

// rrHuffman_BuildCodeLens_Limited_Heuristic @ 14f39b0c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
oo2::rrHuffman_BuildCodeLens_Limited_Heuristic
          (rrHuffman *param_1,uint *param_2,int param_3,rrHuffman_CharAndCount *param_4,
          rrArenaAllocator *param_5)

{
  ushort *puVar1;
  uint *puVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  ushort uVar7;
  ushort uVar8;
  uchar *puVar9;
  byte bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  ushort *puVar24;
  int iVar25;
  longlong lVar26;
  byte bVar27;
  uint uVar28;
  int *piVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  int iVar32;
  int iVar33;
  longlong lVar34;
  int iVar35;
  uint uVar36;
  longlong local_108;
  int iStack_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  uint local_e8 [20];
  uint local_98 [20];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)&local_108;
  uVar31 = 0;
  lVar26 = (longlong)param_3;
  local_f0 = param_1;
  local_108 = 1;
  lVar34 = lVar26 + 1;
  local_e8[0] = 0;
  if (-1 < lVar34) {
    bVar27 = 0;
    uVar30 = uVar31;
    do {
      bVar10 = bVar27 & 0x1f;
      bVar27 = bVar27 - 1;
      local_98[uVar30] = 1 << bVar10;
      uVar30 = uVar30 + 1;
    } while ((longlong)uVar30 <= lVar34);
  }
  local_e8[lVar34] = 0;
  local_f8 = param_1->numCodesOfLen;
  if (0 < lVar26) {
    lVar34 = lVar26;
    uVar30 = uVar31;
    do {
      local_e8[lVar34] = (uint)uVar30;
      puVar2 = local_98 + lVar34;
      lVar34 = lVar34 + -1;
      local_e8[0] = (uint)uVar30 +
                    *(int *)((longlong)puVar2 + ((longlong)local_f8 - (longlong)local_98));
      uVar30 = (ulonglong)local_e8[0];
      uVar31 = uVar31 + *(int *)((longlong)puVar2 + ((longlong)local_f8 - (longlong)local_98)) *
                        *puVar2;
    } while (0 < lVar34);
  }
  while (uVar31 != 0x100000000) {
    if (0x100000000 < uVar31) {
      iVar25 = 0x1f;
      uVar28 = (uint)uVar31;
      if (uVar28 != 0) {
        for (; uVar28 >> iVar25 == 0; iVar25 = iVar25 + -1) {
        }
      }
      iVar35 = -0x80000000;
      iVar32 = -iVar25 + 0x1f;
      uVar36 = 0xffffffff;
      if ((1 < iVar32) && (local_98[iVar32] < uVar28 * 2)) {
        iVar32 = -iVar25 + 0x1e;
      }
      lVar34 = (longlong)iVar32;
      if (lVar26 <= lVar34) goto LAB_14f39b310;
      do {
        uVar28 = local_e8[lVar34];
        if ((*(uint *)((longlong)&local_f0 + lVar34 * 4 + 4) != uVar28) &&
           (iVar25 = -(param_2[param_4[(int)uVar28].symbol] << ((byte)iVar32 & 0x1f)),
           iVar35 < iVar25)) {
          iVar35 = iVar25;
          uVar36 = uVar28;
        }
        iVar32 = iVar32 + 1;
        lVar34 = lVar34 + 1;
      } while (lVar34 < lVar26);
      if ((int)uVar36 < 0) goto LAB_14f39b310;
      uVar7 = param_4[(int)uVar36].count;
      uVar28 = local_98[(ulonglong)uVar7 + 1];
      local_e8[uVar7] = local_e8[uVar7] + 1;
      uVar31 = uVar31 - uVar28;
      param_4[(int)uVar36].count = uVar7 + 1;
    }
    if (uVar31 < 0x100000000) {
      iVar35 = -0x80000000;
      uVar28 = -(int)uVar31;
      iVar32 = -1;
      iVar25 = 0x1f;
      if (uVar28 != 0) {
        for (; uVar28 >> iVar25 == 0; iVar25 = iVar25 + -1) {
        }
      }
      iVar25 = -iVar25;
      iVar33 = iVar25 + 0x20;
      if ((2 < iVar33) &&
         (*(uint *)(&stack0xffffffffffffffe4 + (longlong)iVar25 * 4) < (uint)((int)uVar31 * -2))) {
        iVar33 = iVar25 + 0x1f;
      }
      for (lVar34 = (longlong)iVar33; lVar34 <= lVar26; lVar34 = lVar34 + 1) {
        uVar28 = *(uint *)((longlong)&local_f0 + lVar34 * 4 + 4);
        if (uVar28 != local_e8[lVar34]) {
          iVar25 = param_2[param_4[(longlong)(int)uVar28 + -1].symbol] << ((byte)iVar33 & 0x1f);
          if (iVar35 < iVar25) {
            iVar35 = iVar25;
            iVar32 = uVar28 - 1;
          }
        }
        iVar33 = iVar33 + 1;
      }
      uVar7 = param_4[iVar32].count;
      uVar28 = local_98[uVar7];
      piVar29 = (int *)((longlong)&local_f0 + (ulonglong)uVar7 * 4 + 4);
      *piVar29 = *piVar29 + -1;
      uVar31 = uVar31 + uVar28;
      param_4[iVar32].count = uVar7 - 1;
    }
  }
LAB_14f39b42b:
  uVar7 = param_4->count;
  puVar9 = param_1->codeLenTable;
  uVar8 = param_4[(longlong)param_1->gotNumSymbols + -1].count;
  iVar25 = 1;
  if (((0 < param_3) && (0xf < (uint)param_3)) &&
     ((local_e8 + lVar26 < param_1->numCodesOfLen + 1 || (local_f8 + lVar26 < local_e8)))) {
    piVar29 = param_1->numCodesOfLen + 5;
    iVar25 = 1;
    do {
      piVar3 = (int *)((longlong)piVar29 + ((longlong)&local_f8 - (longlong)local_f8));
      iVar35 = piVar3[1];
      iVar32 = piVar3[2];
      iVar33 = piVar3[3];
      local_108 = local_108 + 0x10;
      iVar25 = iVar25 + 0x10;
      piVar4 = (int *)((longlong)&iStack_fc + -(longlong)local_f8 + (longlong)piVar29);
      iVar11 = piVar4[1];
      iVar12 = piVar4[2];
      iVar13 = piVar4[3];
      piVar5 = (int *)((longlong)&local_f0 + -(longlong)local_f8 + 4 + (longlong)piVar29);
      iVar14 = *piVar5;
      iVar15 = piVar5[1];
      iVar16 = piVar5[2];
      iVar17 = piVar5[3];
      piVar5 = piVar29 + 0x10;
      piVar6 = (int *)(&stack0xfffffffffffffed8 + -(longlong)local_f8 + (longlong)piVar5);
      iVar18 = *piVar6;
      iVar19 = piVar6[1];
      iVar20 = piVar6[2];
      iVar21 = piVar6[3];
      piVar29[-4] = *piVar4 - *piVar3;
      piVar29[-3] = iVar11 - iVar35;
      piVar29[-2] = iVar12 - iVar32;
      piVar29[-1] = iVar13 - iVar33;
      piVar3 = (int *)(&stack0xfffffffffffffee8 + -(longlong)local_f8 + (longlong)piVar5);
      iVar35 = *piVar3;
      iVar32 = piVar3[1];
      iVar33 = piVar3[2];
      iVar11 = piVar3[3];
      piVar3 = (int *)(&stack0xfffffffffffffee4 + -(longlong)local_f8 + (longlong)piVar5);
      iVar12 = *piVar3;
      iVar13 = piVar3[1];
      iVar22 = piVar3[2];
      iVar23 = piVar3[3];
      *piVar29 = iVar14 - iVar18;
      piVar29[1] = iVar15 - iVar19;
      piVar29[2] = iVar16 - iVar20;
      piVar29[3] = iVar17 - iVar21;
      piVar3 = (int *)(((longlong)&local_108 - (longlong)local_f8) + (longlong)piVar5);
      iVar14 = *piVar3;
      iVar15 = piVar3[1];
      iVar16 = piVar3[2];
      iVar17 = piVar3[3];
      piVar3 = (int *)(&stack0xfffffffffffffef4 + -(longlong)local_f8 + (longlong)piVar5);
      iVar18 = *piVar3;
      iVar19 = piVar3[1];
      iVar20 = piVar3[2];
      iVar21 = piVar3[3];
      piVar29[4] = iVar12 - iVar35;
      piVar29[5] = iVar13 - iVar32;
      piVar29[6] = iVar22 - iVar33;
      piVar29[7] = iVar23 - iVar11;
      piVar29[8] = iVar18 - iVar14;
      piVar29[9] = iVar19 - iVar15;
      piVar29[10] = iVar20 - iVar16;
      piVar29[0xb] = iVar21 - iVar17;
      piVar29 = piVar5;
    } while (local_108 <= (longlong)((longlong)param_3 & 0xfffffffffffffff0U));
  }
  iVar35 = 0;
  for (lVar34 = (longlong)iVar25; lVar34 <= lVar26; lVar34 = lVar34 + 1) {
    param_1->numCodesOfLen[lVar34] =
         *(int *)((longlong)&local_f0 + lVar34 * 4 + 4) - local_e8[lVar34];
  }
  if (0 < param_1->gotNumSymbols) {
    do {
      puVar24 = &param_4->symbol;
      iVar35 = iVar35 + 1;
      puVar1 = &param_4->count;
      param_4 = param_4 + 1;
      puVar9[*puVar24] = (uchar)*puVar1;
    } while (iVar35 < param_1->gotNumSymbols);
  }
  param_1->minCodeLen = (uint)uVar8;
  param_1->maxCodeLen = (uint)uVar7;
  return;
LAB_14f39b310:
  do {
    iVar25 = -0x80000000;
    uVar28 = 0xffffffff;
    bVar27 = 1;
    lVar34 = 1;
    if (1 < lVar26) {
      do {
        uVar36 = local_e8[lVar34];
        if ((*(uint *)((longlong)&local_f0 + lVar34 * 4 + 4) != uVar36) &&
           (iVar35 = -(param_2[param_4[(int)uVar36].symbol] << (bVar27 & 0x1f)), iVar25 < iVar35)) {
          iVar25 = iVar35;
          uVar28 = uVar36;
        }
        bVar27 = bVar27 + 1;
        lVar34 = lVar34 + 1;
      } while (lVar34 < lVar26);
    }
    uVar7 = param_4[(int)uVar28].count;
    uVar36 = local_98[(ulonglong)uVar7 + 1];
    local_e8[uVar7] = local_e8[uVar7] + 1;
    uVar31 = uVar31 - uVar36;
    param_4[(int)uVar28].count = uVar7 + 1;
  } while (0x100000000 < uVar31);
  for (; uVar31 < 0x100000000; uVar31 = uVar31 + uVar28) {
    bVar27 = 2;
    iVar25 = -0x80000000;
    iVar35 = -1;
    lVar34 = 2;
    if (1 < lVar26) {
      do {
        uVar28 = *(uint *)((longlong)&local_f0 + lVar34 * 4 + 4);
        if ((uVar28 != local_e8[lVar34]) &&
           ((undefined1 *)(local_98[lVar34] + uVar31) < &DAT_100000001)) {
          iVar32 = param_2[param_4[(longlong)(int)uVar28 + -1].symbol] << (bVar27 & 0x1f);
          if (iVar25 < iVar32) {
            iVar25 = iVar32;
            iVar35 = uVar28 - 1;
          }
        }
        bVar27 = bVar27 + 1;
        lVar34 = lVar34 + 1;
      } while (lVar34 <= lVar26);
    }
    uVar7 = param_4[iVar35].count;
    uVar28 = local_98[uVar7];
    piVar29 = (int *)((longlong)&local_f0 + (ulonglong)uVar7 * 4 + 4);
    *piVar29 = *piVar29 + -1;
    param_4[iVar35].count = uVar7 - 1;
  }
  goto LAB_14f39b42b;
}

// rrHuffman_BuildCodeLens_Limited_PackageMerge @ 14f39b600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
oo2::rrHuffman_BuildCodeLens_Limited_PackageMerge
          (rrHuffman *param_1,uint *param_2,int param_3,rrArenaAllocator *param_4)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  ushort uVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  ushort *puVar8;
  ulonglong uVar9;
  longlong *plVar10;
  rrHuffman_CharAndCount *prVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  void *pvVar16;
  longlong lVar17;
  rrHuffman_CharAndCount *prVar18;
  uint uVar19;
  undefined1 auStack_228 [36];
  int local_204;
  void *local_200;
  rrHuffman_CharAndCount *local_1f8;
  rrArenaAllocator *local_1f0;
  rrHuffman *local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  int aiStack_1cc [31];
  undefined8 uStack_150;
  rrHuffman_CharAndCount *local_148;
  longlong local_140 [31];
  ulonglong local_48;
  
  local_1d8 = 0xfffffffffffffffe;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_228;
  lVar14 = (longlong)param_3;
  prVar18 = (rrHuffman_CharAndCount *)param_1->encodeTable;
  iVar13 = 0;
  iVar7 = 0;
  prVar11 = prVar18;
  if (0 < param_1->numSymbols) {
    do {
      if (param_2[iVar7] != 0) {
        prVar11->symbol = (ushort)iVar7;
        prVar11->count = (ushort)param_2[iVar7];
        iVar13 = iVar13 + 1;
        prVar11 = prVar11 + 1;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < param_1->numSymbols);
  }
  param_1->gotNumSymbols = iVar13;
  local_1f8 = prVar18;
  local_1f0 = param_4;
  local_1e8 = param_1;
  rrHuffman_Sort(prVar18,iVar13,param_4);
  if ((uint)param_1->gotNumSymbols < 2) {
    iVar7 = 0;
  }
  else {
    uVar19 = param_1->gotNumSymbols - 1;
    iVar7 = 0x1f;
    if (uVar19 != 0) {
      for (; uVar19 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    iVar7 = iVar7 + 1;
  }
  if ((param_3 < iVar7) &&
     (iVar7 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\rrhuffman.cpp",0x249,
                                 "oo2::rrHuffman_BuildCodeLens_Limited_PackageMerge",
                                 "Impossible short code limit requested!\n"), iVar7 != 0)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  prVar18[iVar13].count = 0xffff;
  iVar7 = iVar13 * 2 + -2;
  local_204 = param_3 + -1;
  lVar15 = (longlong)(local_204 * iVar7) << 2;
  local_1e0 = lVar15;
  if (param_4 == (rrArenaAllocator *)0x0) {
    pvVar6 = (*g_fp_OodleCore_Plugin_MallocAligned)(lVar15,0x10);
    if (pvVar6 == (void *)0x0) {
      local_200 = pvVar6;
                    /* WARNING: Subroutine does not return */
      Oodle_Core_Malloc_Failed(lVar15);
    }
  }
  else {
    pvVar6 = rrArenaAllocator::Alloc(param_4,lVar15,0);
  }
  local_200 = pvVar6;
  if ((pvVar6 == (void *)0x0) &&
     (iVar5 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\rrarenaallocator.h",0x19a,
                                 "oo2::rrScopeArenaAlloc::rrScopeArenaAlloc","m_ptr != NULL"),
     iVar5 != 0)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  memset(local_140,0,0xf8);
  local_148 = prVar18;
  lVar15 = 1;
  if (1 < lVar14) {
    pvVar16 = pvVar6;
    do {
      local_140[lVar15 + -1] = (longlong)pvVar16;
      pvVar16 = (void *)((longlong)pvVar16 + (longlong)iVar7 * 4);
      lVar15 = lVar15 + 1;
    } while (lVar15 < lVar14);
  }
  aiStack_1cc[2] = 0;
  aiStack_1cc[3] = 0;
  aiStack_1cc[4] = 0;
  aiStack_1cc[5] = 0;
  aiStack_1cc[6] = 0;
  aiStack_1cc[7] = 0;
  aiStack_1cc[8] = 0;
  aiStack_1cc[9] = 0;
  aiStack_1cc[10] = 0;
  aiStack_1cc[0xb] = 0;
  aiStack_1cc[0xc] = 0;
  aiStack_1cc[0xd] = 0;
  aiStack_1cc[0xe] = 0;
  aiStack_1cc[0xf] = 0;
  aiStack_1cc[0x10] = 0;
  aiStack_1cc[0x11] = 0;
  aiStack_1cc[0x12] = 0;
  aiStack_1cc[0x13] = 0;
  aiStack_1cc[0x14] = 0;
  aiStack_1cc[0x15] = 0;
  aiStack_1cc[0x16] = 0;
  aiStack_1cc[0x17] = 0;
  aiStack_1cc[0x18] = 0;
  aiStack_1cc[0x19] = 0;
  aiStack_1cc[0x1a] = 0;
  aiStack_1cc[0x1b] = 0;
  aiStack_1cc[0x1c] = 0;
  aiStack_1cc[0x1d] = 0;
  stack0xfffffffffffffeac = 0;
  uStack_150._4_4_ = 0;
  aiStack_1cc[1] = iVar13;
  lVar15 = 1;
  if (1 < lVar14) {
    do {
      iVar5 = 0;
      iVar13 = 0;
      lVar12 = 0;
      if (0 < iVar7) {
        iVar1 = aiStack_1cc[lVar15];
        lVar17 = 0;
        prVar18 = local_1f8;
        do {
          uVar4 = prVar18->count;
          if ((iVar5 + 1 < iVar1) &&
             (uVar19 = (uint)*(ushort *)((&uStack_150)[lVar15] + 6 + lVar17) +
                       (uint)*(ushort *)((&uStack_150)[lVar15] + 2 + lVar17), uVar19 <= uVar4)) {
            puVar8 = (ushort *)(local_140[lVar15 + -1] + lVar12 * 4);
            puVar8[1] = (ushort)uVar19;
            uVar4 = (ushort)iVar5 | 0x8000;
            iVar5 = iVar5 + 2;
            lVar17 = lVar17 + 8;
          }
          else {
            if (uVar4 == 0xffff) break;
            puVar8 = (ushort *)(local_140[lVar15 + -1] + lVar12 * 4);
            puVar8[1] = uVar4;
            uVar4 = prVar18->symbol;
            prVar18 = prVar18 + 1;
          }
          *puVar8 = uVar4;
          iVar13 = iVar13 + 1;
          lVar12 = lVar12 + 1;
        } while (lVar12 < iVar7);
      }
      aiStack_1cc[lVar15 + 1] = iVar13;
      lVar15 = lVar15 + 1;
      param_4 = local_1f0;
      pvVar6 = local_200;
      param_1 = local_1e8;
    } while (lVar15 < lVar14);
  }
  memset(param_1->codeLenTable,0,(longlong)param_1->numSymbols);
  lVar14 = (longlong)local_204;
  iVar7 = aiStack_1cc[lVar14 + 1];
  for (; -1 < lVar14; lVar14 = lVar14 + -1) {
    iVar13 = 0;
    lVar15 = 0;
    if (0 < iVar7) {
      lVar12 = local_140[lVar14 + -1];
      do {
        uVar4 = *(ushort *)(lVar12 + lVar15 * 4);
        if (uVar4 < 0x8000) {
          param_1->codeLenTable[uVar4] = param_1->codeLenTable[uVar4] + '\x01';
        }
        else {
          iVar13 = uVar4 - 0x7ffe;
        }
        lVar15 = lVar15 + 1;
      } while (lVar15 < iVar7);
    }
    iVar7 = iVar13;
  }
  rrHuffman_FinishCodeLens(param_1);
  if (pvVar6 != (void *)0x0) {
    if (param_4 != (rrArenaAllocator *)0x0) {
      uVar9 = local_1e0 + 0xfU & 0xfffffffffffffff0;
      if ((void *)param_4->m_unorderedStart == (void *)0x0) {
        if ((longlong)pvVar6 + uVar9 == param_4->m_cur) {
          param_4->m_cur = param_4->m_cur - uVar9;
          return;
        }
      }
      else if (((void *)param_4->m_unorderedStart <= pvVar6) &&
              (pvVar6 < (void *)(param_4->m_size + param_4->m_base))) {
        plVar10 = (longlong *)(uVar9 + (longlong)pvVar6);
        plVar10[1] = 1;
        plVar2 = (longlong *)param_4->m_cur;
        if (plVar10 + 2 != plVar2) {
          return;
        }
        while( true ) {
          if (plVar2 == (longlong *)param_4->m_unorderedStart) {
            return;
          }
          if (plVar10[1] != 1) break;
          param_4->m_cur = param_4->m_cur + (-0x10 - *plVar10);
          plVar2 = (longlong *)param_4->m_cur;
          plVar10 = plVar2 + -2;
        }
        return;
      }
    }
    (*g_fp_OodleCore_Plugin_Free)(pvVar6);
    return;
  }
  return;
}

// rrHuffman_BuildCodeLens_Moffat_InPlace @ 14f39ba60

void __cdecl
oo2::rrHuffman_BuildCodeLens_Moffat_InPlace
          (rrHuffman *param_1,int param_2,rrHuffman_CharAndCount *param_3)

{
  uchar *puVar1;
  uint uVar2;
  longlong lVar3;
  int iVar5;
  ushort *puVar6;
  rrHuffman_CharAndCount *prVar7;
  ushort uVar8;
  ulonglong uVar9;
  int iVar10;
  ushort *puVar11;
  longlong lVar12;
  ushort uVar13;
  int iVar14;
  uint uVar15;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar4;
  ulonglong uVar16;
  
  iVar14 = param_1->gotNumSymbols;
  uVar19 = (ulonglong)iVar14;
  puVar1 = param_1->codeLenTable;
  uVar9 = 0;
  iVar10 = 1;
  iVar17 = 0;
  param_3[uVar19].count = 0xffff;
  iVar5 = 1;
  param_3->count = param_3->count + param_3[1].count;
  if (2 < (longlong)uVar19) {
    lVar12 = 2;
    puVar11 = &param_3[2].count;
    puVar6 = &param_3->count;
    uVar4 = uVar9;
    do {
      uVar8 = *puVar11;
      uVar13 = *puVar6;
      if (uVar13 < uVar8) {
        uVar4 = (ulonglong)((int)uVar4 + 1);
        *puVar6 = (ushort)iVar5;
        puVar6 = puVar6 + 2;
        uVar8 = uVar13;
      }
      else {
        lVar12 = lVar12 + 1;
        puVar11 = puVar11 + 2;
      }
      if (((int)uVar4 < iVar5) && (uVar13 = *puVar6, uVar13 < *puVar11)) {
        uVar4 = (ulonglong)((int)uVar4 + 1);
        *puVar6 = (ushort)iVar5;
        puVar6 = puVar6 + 2;
      }
      else {
        uVar13 = *puVar11;
        lVar12 = lVar12 + 1;
        puVar11 = puVar11 + 2;
      }
      iVar17 = (int)uVar4;
      lVar3 = (longlong)iVar5;
      iVar5 = iVar5 + 1;
      param_3[lVar3].count = uVar13 + uVar8;
    } while (lVar12 < (longlong)uVar19);
  }
  if (iVar5 < iVar14 + -1) {
    puVar6 = &param_3[(longlong)iVar17 + 1].count;
    do {
      puVar6[-2] = (ushort)iVar5;
      *puVar6 = (ushort)iVar5;
      puVar6 = puVar6 + 4;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar14 + -1);
  }
  iVar14 = iVar14 + -3;
  param_3[uVar19 - 2].count = 0;
  lVar12 = uVar19 - 2;
  if (-1 < iVar14) {
    puVar6 = &param_3[uVar19 - 3].count;
    do {
      iVar14 = iVar14 + -1;
      *puVar6 = param_3[*puVar6].count + 1;
      puVar6 = puVar6 + -2;
    } while (-1 < iVar14);
  }
  uVar8 = param_3->count;
  uVar4 = uVar9;
  do {
    uVar2 = (uint)uVar4;
    uVar15 = 0;
    if (-1 < lVar12) {
      puVar6 = &param_3[lVar12].count;
      uVar16 = uVar9;
      do {
        uVar15 = (uint)uVar16;
        if (*puVar6 != uVar2) break;
        puVar6 = puVar6 + -2;
        uVar15 = uVar15 + 1;
        uVar16 = (ulonglong)uVar15;
        lVar12 = lVar12 + -1;
      } while (-1 < lVar12);
    }
    iVar10 = iVar10 - uVar15;
    if (0 < iVar10) {
      uVar18 = (int)uVar19 - iVar10;
      uVar19 = (ulonglong)uVar18;
      lVar3 = (longlong)iVar10;
      if (0 < iVar10) {
        prVar7 = param_3 + (int)uVar18;
        do {
          prVar7->count = (ushort)uVar4;
          puVar6 = &prVar7->symbol;
          prVar7 = prVar7 + 1;
          puVar1[*puVar6] = (uchar)uVar4;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
      }
      param_1->numCodesOfLen[(int)uVar2] = iVar10;
      if (uVar18 == 0) goto LAB_14f39bc60;
    }
    uVar2 = uVar2 + 1;
    uVar4 = (ulonglong)uVar2;
    iVar10 = uVar15 * 2;
  } while (uVar2 != param_2);
  iVar14 = (int)uVar19;
  if (0 < iVar14) {
    do {
      param_3[uVar9].count = (ushort)uVar2;
      prVar7 = param_3 + uVar9;
      uVar9 = uVar9 + 1;
      puVar1[prVar7->symbol] = (uchar)uVar2;
    } while ((longlong)uVar9 < (longlong)iVar14);
  }
  param_1->numCodesOfLen[(int)uVar2] = iVar14;
LAB_14f39bc60:
  param_1->minCodeLen = (uint)param_3[(longlong)param_1->gotNumSymbols + -1].count;
  param_1->maxCodeLen = uVar8 + 1;
  return;
}

// rrHuffman_BuildEncodeTable @ 14f39bca0

int __cdecl oo2::rrHuffman_BuildEncodeTable(rrHuffman *param_1)

{
  byte bVar1;
  uchar *puVar2;
  uint *puVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulong64 *puVar9;
  int *piVar10;
  
  if (param_1->gotNumSymbols < 2) {
    if (param_1->gotNumSymbols == 0) {
      param_1->oneChar = 0;
      iVar4 = 0;
    }
    else {
      iVar4 = param_1->oneChar;
    }
    param_1->encodeTable[iVar4] = 0;
    return 1;
  }
  if ((param_1->maxCodeLen != 0) && (param_1->maxCodeLen < 0x1f)) {
    uVar6 = 0;
    puVar2 = param_1->codeLenTable;
    param_1->codePrefixByLen[0] = 0;
    iVar4 = param_1->numSymbols;
    param_1->codePrefixByLen[param_1->minCodeLen] = 0;
    uVar8 = (ulonglong)param_1->minCodeLen;
    if (param_1->minCodeLen < param_1->maxCodeLen) {
      piVar10 = param_1->numCodesOfLen + uVar8;
      puVar9 = param_1->codePrefixByLen + uVar8;
      uVar5 = uVar6;
      do {
        puVar9 = puVar9 + 1;
        uVar5 = (ulonglong)(uint)(((int)uVar5 + *piVar10) * 2);
        piVar10 = piVar10 + 1;
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
        *puVar9 = uVar5;
      } while ((int)uVar7 < param_1->maxCodeLen);
    }
    puVar3 = param_1->encodeTable;
    if (0 < (longlong)iVar4) {
      do {
        bVar1 = puVar2[uVar6];
        puVar3[uVar6] = (uint)param_1->codePrefixByLen[bVar1];
        uVar6 = uVar6 + 1;
        param_1->codePrefixByLen[bVar1] = param_1->codePrefixByLen[bVar1] + 1;
      } while ((longlong)uVar6 < (longlong)iVar4);
    }
    return 1;
  }
  return 0;
}

// rrHuffman_FinishCodeLens @ 14f39bde0

void __cdecl oo2::rrHuffman_FinishCodeLens(rrHuffman *param_1)

{
  int iVar1;
  uchar *puVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  
  param_1->numCodesOfLen[0] = 0;
  param_1->numCodesOfLen[1] = 0;
  param_1->numCodesOfLen[2] = 0;
  param_1->numCodesOfLen[3] = 0;
  param_1->numCodesOfLen[4] = 0;
  param_1->numCodesOfLen[5] = 0;
  param_1->numCodesOfLen[6] = 0;
  param_1->numCodesOfLen[7] = 0;
  param_1->numCodesOfLen[8] = 0;
  param_1->numCodesOfLen[9] = 0;
  param_1->numCodesOfLen[10] = 0;
  param_1->numCodesOfLen[0xb] = 0;
  param_1->numCodesOfLen[0xc] = 0;
  param_1->numCodesOfLen[0xd] = 0;
  param_1->numCodesOfLen[0xe] = 0;
  param_1->numCodesOfLen[0xf] = 0;
  param_1->numCodesOfLen[0x10] = 0;
  param_1->numCodesOfLen[0x11] = 0;
  param_1->numCodesOfLen[0x12] = 0;
  param_1->numCodesOfLen[0x13] = 0;
  param_1->numCodesOfLen[0x14] = 0;
  param_1->numCodesOfLen[0x15] = 0;
  param_1->numCodesOfLen[0x16] = 0;
  param_1->numCodesOfLen[0x17] = 0;
  param_1->numCodesOfLen[0x18] = 0;
  param_1->numCodesOfLen[0x19] = 0;
  param_1->numCodesOfLen[0x1a] = 0;
  param_1->numCodesOfLen[0x1b] = 0;
  param_1->numCodesOfLen[0x1c] = 0;
  param_1->numCodesOfLen[0x1d] = 0;
  param_1->numCodesOfLen[0x1e] = 0;
  param_1->numCodesOfLen[0x1f] = 0;
  iVar1 = param_1->topSym;
  puVar2 = param_1->codeLenTable;
  if (-1 < (longlong)iVar1) {
    lVar5 = 0;
    do {
      if (puVar2[lVar5] != 0) {
        param_1->numCodesOfLen[puVar2[lVar5]] = param_1->numCodesOfLen[puVar2[lVar5]] + 1;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 <= iVar1);
  }
  piVar3 = param_1->numCodesOfLen + 1;
  iVar6 = 1;
  iVar1 = *piVar3;
  while (iVar1 == 0) {
    iVar6 = iVar6 + 1;
    piVar3 = piVar3 + 1;
    iVar1 = *piVar3;
  }
  piVar3 = param_1->numCodesOfLen + 0x1f;
  iVar4 = 0x1f;
  iVar1 = *piVar3;
  while (iVar1 == 0) {
    iVar4 = iVar4 + -1;
    piVar3 = piVar3 + -1;
    iVar1 = *piVar3;
  }
  param_1->maxCodeLen = iVar4;
  param_1->minCodeLen = iVar6;
  return;
}

// rrHuffman_PrintCodeLens @ 14f39bea0

void __cdecl oo2::rrHuffman_PrintCodeLens(rrHuffman *param_1)

{
  _func___cdecl_void_int_char_ptr_int_char_ptr *p_Var1;
  uint uVar2;
  ulonglong uVar3;
  int *piVar4;
  
  p_Var1 = g_fp_OodleCore_Plugin_Printf;
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    rrlog2_F64((double)param_1->gotNumSymbols);
    (*p_Var1)(1,"v:\\devel\\projects\\oodle2\\core\\rrhuffman.cpp",0x7d2,
              "rrHuffman : gotNumSymbols : %d , log2 : %f\n");
  }
  uVar3 = (ulonglong)param_1->minCodeLen;
  p_Var1 = g_fp_OodleCore_Plugin_Printf;
  if (param_1->minCodeLen <= param_1->maxCodeLen) {
    piVar4 = param_1->numCodesOfLen + uVar3;
    do {
      if ((0 < *piVar4) && (p_Var1 != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)) {
        (*p_Var1)(1,"v:\\devel\\projects\\oodle2\\core\\rrhuffman.cpp",0x7dc,"%d : %d , %f%%\n");
        p_Var1 = g_fp_OodleCore_Plugin_Printf;
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
      piVar4 = piVar4 + 1;
    } while ((int)uVar2 <= param_1->maxCodeLen);
  }
  if (p_Var1 != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*p_Var1)(1,"v:\\devel\\projects\\oodle2\\core\\rrhuffman.cpp",0x7e5," mean : %f, var : %f\n");
  }
  return;
}

// rrHuffman_PrintCodes @ 14f39c080

void __cdecl oo2::rrHuffman_PrintCodes(rrHuffman *param_1)

{
  _func___cdecl_void_int_char_ptr_int_char_ptr *p_Var1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_1->numSymbols) {
    lVar2 = 0;
    p_Var1 = g_fp_OodleCore_Plugin_Printf;
    do {
      if (param_1->codeLenTable[lVar2] != '\0') {
        if (p_Var1 != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          (*p_Var1)(1,"v:\\devel\\projects\\oodle2\\core\\rrhuffman.cpp",0x7c6,"%d : %d : ");
          p_Var1 = g_fp_OodleCore_Plugin_Printf;
        }
        if (param_1->encodeTable != (uint *)0x0) {
          rrPrintfBinary(param_1->encodeTable[lVar2],(uint)param_1->codeLenTable[lVar2]);
          p_Var1 = g_fp_OodleCore_Plugin_Printf;
        }
        if (p_Var1 != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          (*p_Var1)(1,"v:\\devel\\projects\\oodle2\\core\\rrhuffman.cpp",0x7c9,"\n");
          p_Var1 = g_fp_OodleCore_Plugin_Printf;
        }
      }
      iVar3 = iVar3 + 1;
      lVar2 = lVar2 + 1;
    } while (iVar3 < param_1->numSymbols);
  }
  return;
}

// rrHuffman_PrintEntropies @ 14f39c180

void __cdecl oo2::rrHuffman_PrintEntropies(rrHuffman *param_1,uint *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong lVar8;
  ulonglong uVar7;
  
  rrEntropyOfHistogram(param_2,param_1->numSymbols);
  uVar1 = param_1->numSymbols;
  lVar8 = (longlong)(int)uVar1;
  uVar2 = 0;
  iVar5 = 0;
  uVar6 = 0;
  if ((0 < (int)uVar1) && (7 < uVar1)) {
    uVar3 = uVar1 & 0x80000007;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffff8) + 1;
    }
    uVar7 = uVar2;
    do {
      uVar6 = (int)uVar7 + 8;
      uVar7 = (ulonglong)uVar6;
      uVar2 = uVar2 + 8;
    } while ((longlong)uVar2 < (longlong)(int)(uVar1 - uVar3));
  }
  lVar4 = (longlong)(int)uVar6;
  if ((lVar4 < lVar8) && (1 < lVar8 - lVar4)) {
    do {
      lVar4 = lVar4 + 2;
    } while (lVar4 < lVar8 + -1);
  }
  if ((int)uVar1 < 4) {
    if ((int)uVar1 < 1) goto LAB_14f39c38c;
  }
  else {
    uVar6 = (uVar1 - 4 >> 2) + 1;
    uVar2 = (ulonglong)uVar6;
    iVar5 = uVar6 * 4;
    do {
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    if ((int)uVar1 <= iVar5) goto LAB_14f39c38c;
  }
  uVar2 = (ulonglong)(uVar1 - iVar5);
  do {
    uVar2 = uVar2 - 1;
  } while (uVar2 != 0);
LAB_14f39c38c:
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (1,"v:\\devel\\projects\\oodle2\\core\\rrhuffman.cpp",0x832,
               "True entropy : %6.3f , Huffman : %6.3f\n");
  }
  return;
}

// rrHuffman_ProvideCodeLens @ 14f39c400

int __cdecl oo2::rrHuffman_ProvideCodeLens(rrHuffman *param_1,uchar *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uchar *puVar7;
  
  uVar5 = 0;
  param_1->oneChar = 0xffff;
  param_1->topSym = 0;
  param_1->minCodeLen = 0;
  param_1->maxCodeLen = 0;
  param_1->gotNumSymbols = 0;
  uVar6 = uVar5;
  puVar7 = param_2;
  if (0 < param_1->numSymbols) {
    do {
      param_1->codeLenTable[(longlong)puVar7 - (longlong)param_2] = *puVar7;
      iVar2 = param_1->gotNumSymbols;
      iVar4 = (int)uVar6;
      if (*puVar7 != '\0') {
        iVar2 = iVar2 + 1;
        param_1->topSym = iVar4;
        param_1->gotNumSymbols = iVar2;
        param_1->oneChar = iVar4;
      }
      uVar6 = (ulonglong)(iVar4 + 1U);
      puVar7 = puVar7 + 1;
    } while ((int)(iVar4 + 1U) < param_1->numSymbols);
    if (1 < iVar2) {
      param_1->numCodesOfLen[0] = 0;
      param_1->numCodesOfLen[1] = 0;
      param_1->numCodesOfLen[2] = 0;
      param_1->numCodesOfLen[3] = 0;
      param_1->numCodesOfLen[4] = 0;
      param_1->numCodesOfLen[5] = 0;
      param_1->numCodesOfLen[6] = 0;
      param_1->numCodesOfLen[7] = 0;
      param_1->numCodesOfLen[8] = 0;
      param_1->numCodesOfLen[9] = 0;
      param_1->numCodesOfLen[10] = 0;
      param_1->numCodesOfLen[0xb] = 0;
      param_1->numCodesOfLen[0xc] = 0;
      param_1->numCodesOfLen[0xd] = 0;
      param_1->numCodesOfLen[0xe] = 0;
      param_1->numCodesOfLen[0xf] = 0;
      param_1->numCodesOfLen[0x10] = 0;
      param_1->numCodesOfLen[0x11] = 0;
      param_1->numCodesOfLen[0x12] = 0;
      param_1->numCodesOfLen[0x13] = 0;
      param_1->numCodesOfLen[0x14] = 0;
      param_1->numCodesOfLen[0x15] = 0;
      param_1->numCodesOfLen[0x16] = 0;
      param_1->numCodesOfLen[0x17] = 0;
      param_1->numCodesOfLen[0x18] = 0;
      param_1->numCodesOfLen[0x19] = 0;
      param_1->numCodesOfLen[0x1a] = 0;
      param_1->numCodesOfLen[0x1b] = 0;
      param_1->numCodesOfLen[0x1c] = 0;
      param_1->numCodesOfLen[0x1d] = 0;
      param_1->numCodesOfLen[0x1e] = 0;
      param_1->numCodesOfLen[0x1f] = 0;
      iVar2 = param_1->topSym;
      puVar7 = param_1->codeLenTable;
      if (-1 < (longlong)iVar2) {
        do {
          if (puVar7[uVar5] != 0) {
            param_1->numCodesOfLen[puVar7[uVar5]] = param_1->numCodesOfLen[puVar7[uVar5]] + 1;
          }
          uVar5 = uVar5 + 1;
        } while ((longlong)uVar5 <= (longlong)iVar2);
      }
      piVar1 = param_1->numCodesOfLen + 1;
      iVar4 = 1;
      iVar2 = *piVar1;
      while (iVar2 == 0) {
        iVar4 = iVar4 + 1;
        piVar1 = piVar1 + 1;
        iVar2 = *piVar1;
      }
      piVar1 = param_1->numCodesOfLen + 0x1f;
      iVar3 = 0x1f;
      iVar2 = *piVar1;
      while (iVar2 == 0) {
        iVar3 = iVar3 + -1;
        piVar1 = piVar1 + -1;
        iVar2 = *piVar1;
      }
      param_1->minCodeLen = iVar4;
      param_1->maxCodeLen = iVar3;
      return 1;
    }
  }
  return 0;
}

// rrHuffman_ScaleCounts @ 14f39c580

uint * __cdecl
oo2::rrHuffman_ScaleCounts(rrHuffman *param_1,uint *param_2,uint *param_3,uint param_4,uint param_5)

{
  code *pcVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  float fVar12;
  
  fVar2 = __real_3f000000;
  lVar7 = (longlong)param_1->numSymbols;
  uVar6 = 0;
  lVar8 = 0;
  iVar9 = 0;
  if (0 < lVar7) {
    lVar11 = 0;
    uVar10 = 0;
    do {
      uVar4 = param_2[lVar11];
      uVar6 = uVar6 + uVar4;
      iVar3 = iVar9;
      if (uVar4 <= uVar10) {
        iVar3 = (int)lVar8;
        uVar4 = uVar10;
      }
      iVar9 = iVar9 + 1;
      lVar8 = (longlong)iVar3;
      lVar11 = lVar11 + 1;
      uVar10 = uVar4;
    } while (lVar11 < lVar7);
    if ((param_4 < uVar4) || (param_5 < uVar6)) {
      uVar10 = 0;
      puVar5 = param_3;
      fVar12 = (float)param_4 / (float)uVar4;
      if ((float)param_5 / (float)uVar6 <= (float)param_4 / (float)uVar4) {
        fVar12 = (float)param_5 / (float)uVar6;
      }
      do {
        uVar6 = *(uint *)(((longlong)param_2 - (longlong)param_3) + (longlong)puVar5);
        uVar4 = 0;
        if (uVar6 != 0) {
          uVar4 = (uint)((float)uVar6 * fVar12 + fVar2);
          uVar6 = param_4;
          if (uVar4 < param_4) {
            uVar6 = uVar4;
          }
          uVar4 = 1;
          if (1 < uVar6) {
            uVar4 = uVar6;
          }
          uVar10 = uVar10 + uVar4;
        }
        *puVar5 = uVar4;
        lVar7 = lVar7 + -1;
        puVar5 = puVar5 + 1;
      } while (lVar7 != 0);
      param_2 = param_3;
      if (param_5 < uVar10) {
        puVar5 = param_3 + lVar8;
        *puVar5 = *puVar5 + (param_5 - uVar10);
        if ((*puVar5 == 0) &&
           (iVar9 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\rrhuffman.cpp",0x11c,
                                       "oo2::rrHuffman_ScaleCounts","destCounts[maxi] > 0"),
           iVar9 != 0)) {
          pcVar1 = (code *)swi(3);
          puVar5 = (uint *)(*pcVar1)();
          return puVar5;
        }
      }
    }
  }
  return param_2;
}

// rrHuffman_Sort @ 14f39c6e0

void __cdecl
oo2::rrHuffman_Sort(rrHuffman_CharAndCount *param_1,int param_2,rrArenaAllocator *param_3)

{
  int *piVar1;
  uint *puVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  longlong *plVar6;
  code *pcVar7;
  int iVar8;
  void *_Dst;
  uint uVar9;
  int *piVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  ushort *puVar16;
  ulonglong uVar17;
  rrHuffman_CharAndCount *prVar18;
  ulonglong uVar19;
  int local_res10;
  rrHuffman_CharAndCount *local_60;
  
  if (1 < param_2) {
    uVar19 = (ulonglong)param_2;
    if (param_2 < 0x21) {
      stdsort<oo2::rrHuffman_CharAndCount_*,oo2::rrHuffman_CharAndCountCompareCount>
                (param_1,param_1 + uVar19,local_res10._0_1_);
    }
    else {
      lVar12 = uVar19 * 4 + 0xc00;
      if (param_3 == (rrArenaAllocator *)0x0) {
        _Dst = (*g_fp_OodleCore_Plugin_MallocAligned)(lVar12,0x10);
        if (_Dst == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          Oodle_Core_Malloc_Failed(lVar12);
        }
      }
      else {
        _Dst = rrArenaAllocator::Alloc(param_3,lVar12,0);
      }
      if ((_Dst == (void *)0x0) &&
         (iVar8 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\rrarenaallocator.h",0x19a,
                                     "oo2::rrScopeArenaAlloc::rrScopeArenaAlloc","m_ptr != NULL"),
         iVar8 != 0)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      memset(_Dst,0,0x800);
      for (prVar18 = param_1; prVar18 != param_1 + ((longlong)param_2 & 0xfffffffffffffffe);
          prVar18 = prVar18 + 2) {
        uVar4 = prVar18->count;
        uVar5 = prVar18[1].count;
        piVar10 = (int *)((longlong)_Dst + ((ulonglong)uVar4 & 0xff) * 4);
        *piVar10 = *piVar10 + 1;
        piVar10 = (int *)((longlong)_Dst + (ulonglong)((uVar4 >> 8) + 0x100) * 4);
        *piVar10 = *piVar10 + 1;
        piVar10 = (int *)((longlong)_Dst + ((ulonglong)uVar5 & 0xff) * 4);
        *piVar10 = *piVar10 + 1;
        piVar10 = (int *)((longlong)_Dst + (ulonglong)((uVar5 >> 8) + 0x100) * 4);
        *piVar10 = *piVar10 + 1;
      }
      local_60 = (rrHuffman_CharAndCount *)((longlong)_Dst + 0xc00);
      if ((param_2 & 1U) != 0) {
        uVar4 = prVar18->count;
        piVar10 = (int *)((longlong)_Dst + ((ulonglong)uVar4 & 0xff) * 4);
        *piVar10 = *piVar10 + 1;
        piVar10 = (int *)((longlong)_Dst + (ulonglong)((uVar4 >> 8) + 0x100) * 4);
        *piVar10 = *piVar10 + 1;
      }
      local_res10 = 0;
      prVar18 = param_1;
      do {
        piVar1 = (int *)((longlong)_Dst + (longlong)(local_res10 << 8) * 4);
        iVar8 = 0;
        piVar10 = piVar1 + 1;
        lVar12 = (longlong)_Dst + (0x800 - (longlong)piVar1);
        do {
          *(int *)(lVar12 + -4 + (longlong)piVar10) = iVar8;
          iVar14 = piVar10[-1];
          *(int *)((longlong)piVar10 + lVar12) = iVar8 + iVar14;
          iVar8 = iVar8 + iVar14 + *piVar10;
          piVar10 = piVar10 + 2;
        } while (iVar8 < param_2);
        if (local_res10 == 0) {
          uVar15 = 0;
          if (-1 < param_2 + -4) {
            puVar16 = &prVar18[2].count;
            uVar17 = (ulonglong)((uint)param_2 >> 2);
            uVar15 = uVar17 * 4;
            do {
              uVar9 = *(uint *)((longlong)_Dst + (ulonglong)(byte)puVar16[-4] * 4 + 0x800);
              *(uint *)((longlong)_Dst + (ulonglong)(byte)puVar16[-4] * 4 + 0x800) = uVar9 + 1;
              local_60[uVar9] = *(rrHuffman_CharAndCount *)(puVar16 + -5);
              uVar9 = *(uint *)((longlong)_Dst + (ulonglong)(byte)puVar16[-2] * 4 + 0x800);
              *(uint *)((longlong)_Dst + (ulonglong)(byte)puVar16[-2] * 4 + 0x800) = uVar9 + 1;
              local_60[uVar9] = *(rrHuffman_CharAndCount *)(puVar16 + -3);
              uVar9 = *(uint *)((longlong)_Dst + (ulonglong)(byte)*puVar16 * 4 + 0x800);
              *(uint *)((longlong)_Dst + (ulonglong)(byte)*puVar16 * 4 + 0x800) = uVar9 + 1;
              local_60[uVar9] = *(rrHuffman_CharAndCount *)(puVar16 + -1);
              uVar9 = *(uint *)((longlong)_Dst + (ulonglong)(byte)puVar16[2] * 4 + 0x800);
              *(uint *)((longlong)_Dst + (ulonglong)(byte)puVar16[2] * 4 + 0x800) = uVar9 + 1;
              local_60[uVar9] = *(rrHuffman_CharAndCount *)(puVar16 + 1);
              puVar16 = puVar16 + 8;
              uVar17 = uVar17 - 1;
            } while (uVar17 != 0);
          }
          if (uVar15 < uVar19) {
            do {
              uVar17 = (ulonglong)(byte)prVar18[uVar15].count;
              uVar9 = *(uint *)((longlong)_Dst + uVar17 * 4 + 0x800);
              *(uint *)((longlong)_Dst + uVar17 * 4 + 0x800) = uVar9 + 1;
              local_60[uVar9] = prVar18[uVar15];
              uVar15 = uVar15 + 1;
            } while ((longlong)uVar15 < (longlong)uVar19);
          }
        }
        else {
          if (*piVar1 == param_2) {
            memcpy(local_60,prVar18,uVar19 * 4);
            break;
          }
          bVar3 = *(byte *)((longlong)&prVar18->count + 1);
          iVar14 = 1;
          uVar15 = 1;
          iVar8 = 0;
          do {
            uVar9 = (uint)bVar3;
            bVar3 = *(byte *)((longlong)&prVar18[uVar15].count + 1);
            puVar16 = &prVar18[uVar15].count;
            uVar17 = uVar15;
            iVar13 = iVar14;
            while (bVar3 == uVar9) {
              iVar13 = iVar13 + 1;
              uVar17 = uVar17 + 1;
              if (uVar17 == uVar19) break;
              bVar3 = *(byte *)((longlong)puVar16 + 5);
              puVar16 = puVar16 + 2;
            }
            puVar2 = (uint *)((longlong)_Dst + (ulonglong)uVar9 * 4 + 0x800);
            memcpy(local_60 + *puVar2,prVar18 + iVar8,(longlong)(iVar13 - iVar8) << 2);
            *puVar2 = *puVar2 + (iVar13 - iVar8);
            iVar14 = iVar13 + 1;
            uVar15 = uVar17 + 1;
            iVar8 = iVar13;
          } while (iVar14 < param_2);
          if (iVar14 == param_2) {
            local_60[*(uint *)((longlong)_Dst + (ulonglong)bVar3 * 4 + 0x800)] = prVar18[uVar17];
          }
        }
        prVar18 = (rrHuffman_CharAndCount *)((longlong)_Dst + 0xc00);
        local_res10 = local_res10 + 1;
        local_60 = param_1;
      } while (local_res10 < 2);
      if (_Dst != (void *)0x0) {
        if (param_3 != (rrArenaAllocator *)0x0) {
          uVar19 = uVar19 * 4 + 0xc0f & 0xfffffffffffffff0;
          if ((void *)param_3->m_unorderedStart == (void *)0x0) {
            if ((longlong)_Dst + uVar19 == param_3->m_cur) {
              param_3->m_cur = param_3->m_cur - uVar19;
              return;
            }
          }
          else if (((void *)param_3->m_unorderedStart <= _Dst) &&
                  (_Dst < (void *)(param_3->m_size + param_3->m_base))) {
            plVar11 = (longlong *)(uVar19 + (longlong)_Dst);
            plVar11[1] = 1;
            plVar6 = (longlong *)param_3->m_cur;
            if (plVar11 + 2 != plVar6) {
              return;
            }
            while( true ) {
              if (plVar6 == (longlong *)param_3->m_unorderedStart) {
                return;
              }
              if (plVar11[1] != 1) break;
              param_3->m_cur = param_3->m_cur + (-0x10 - *plVar11);
              plVar6 = (longlong *)param_3->m_cur;
              plVar11 = plVar6 + -2;
            }
            return;
          }
        }
        (*g_fp_OodleCore_Plugin_Free)(_Dst);
      }
    }
  }
  return;
}

// rrIlog2ceil @ 14f39cb30

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

// rrPtrDiff32 @ 14f39cb50

int __cdecl oo2::rrPtrDiff32(long64 param_1)

{
  return (int)param_1;
}

// rr_ftoi_round_positive @ 14f39cb60

int __cdecl oo2::rr_ftoi_round_positive(float param_1)

{
  return (int)(param_1 + __real_3f000000);
}

// rr_ftoi_trunc @ 14f39cb80

int __cdecl oo2::rr_ftoi_trunc(float param_1)

{
  return (int)param_1;
}

// dtor$0 @ 150284c20

void `oo2::rrHuffman_BuildCodeLens'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  oo2::rrScopeArenaAlloc::~rrScopeArenaAlloc((rrScopeArenaAlloc *)(param_2 + 0x40));
  return;
}

