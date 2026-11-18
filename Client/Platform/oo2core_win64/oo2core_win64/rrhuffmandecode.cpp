// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2core_win64
// Functions: 50

// check_value_cast<unsigned_char,int> @ 14f392ec0

uchar __cdecl oo2::check_value_cast<unsigned_char,int>(int *param_1)

{
  return (uchar)*param_1;
}

// check_value_cast<unsigned_short,unsigned___int64> @ 14f392ed0

ushort __cdecl oo2::check_value_cast<unsigned_short,unsigned___int64>(ulong64 *param_1)

{
  return (ushort)*param_1;
}

// rrAlignDownPointer<unsigned_char> @ 14f392ee0

uchar * __cdecl oo2::rrAlignDownPointer<unsigned_char>(uchar *param_1,long64 param_2)

{
  return (uchar *)(~(param_2 - 1U) & (ulonglong)param_1);
}

// BuildDecodeTable_Core @ 14f392f00

void __cdecl oo2::BuildDecodeTable_Core(uchar *param_1,int param_2,uint *param_3,ushort *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  byte *pbVar6;
  ushort uVar7;
  int iVar8;
  uint *puVar9;
  
  iVar8 = 0;
  uVar4 = param_2 & 0xfffffffc;
  puVar9 = (uint *)param_1;
  if (0 < (int)uVar4) {
    do {
      uVar1 = *puVar9;
      uVar3 = uVar1 >> 0x18;
      if (((uVar3 != 0 || (uVar1 & 0xff0000) != 0) || (uVar1 & 0xff00) != 0) || (uVar1 & 0xff) != 0)
      {
        uVar2 = param_3[uVar1 & 0xff];
        uVar7 = (ushort)iVar8;
        param_4[uVar2] = uVar7;
        param_3[uVar1 & 0xff] = uVar2 + 1;
        bVar5 = (byte)((uVar1 & 0xff00) >> 8);
        uVar2 = param_3[bVar5];
        param_3[bVar5] = uVar2 + 1;
        param_4[uVar2] = uVar7 + 1;
        bVar5 = (byte)((uVar1 & 0xff0000) >> 0x10);
        uVar1 = param_3[bVar5];
        param_3[bVar5] = uVar1 + 1;
        param_4[uVar1] = uVar7 + 2;
        uVar1 = param_3[uVar3];
        param_3[uVar3] = uVar1 + 1;
        param_4[uVar1] = uVar7 + 3;
      }
      iVar8 = iVar8 + 4;
      puVar9 = puVar9 + 1;
    } while (iVar8 < (int)uVar4);
  }
  if ((int)uVar4 < param_2) {
    pbVar6 = param_1 + (int)uVar4;
    do {
      bVar5 = *pbVar6;
      pbVar6 = pbVar6 + 1;
      uVar1 = param_3[bVar5];
      param_4[uVar1] = (ushort)uVar4;
      uVar4 = uVar4 + 1;
      param_3[bVar5] = uVar1 + 1;
    } while ((int)uVar4 < param_2);
  }
  return;
}

// OodleFree @ 14f393020

void __cdecl oo2::OodleFree(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f393020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleCore_Plugin_Free)(param_1);
  return;
}

// OodleMallocAligned @ 14f393030

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

// RR_GET32_NATIVE @ 14f393070

uint __cdecl oo2::RR_GET32_NATIVE(void *param_1)

{
  return *(uint *)param_1;
}

// RR_GET64_NATIVE @ 14f393080

ulong64 __cdecl oo2::RR_GET64_NATIVE(void *param_1)

{
  return *(ulong64 *)param_1;
}

// RR_PUT64_NATIVE @ 14f393090

void __cdecl oo2::RR_PUT64_NATIVE(void *param_1,ulong64 param_2)

{
  *(ulong64 *)param_1 = param_2;
  return;
}

// SloppyMemset_Impl @ 14f3930a0

void __cdecl oo2::SloppyMemset_Impl(void *param_1,__m128i *param_2,long64 param_3,long64 param_4)

{
  long64 lVar1;
  long64 lVar2;
  long64 *plVar3;
  
  lVar1 = param_2->m128i_i64[0];
  lVar2 = param_2->m128i_i64[1];
  *(long64 *)param_1 = lVar1;
  *(long64 *)((longlong)param_1 + 8) = lVar2;
  if (0x10 < param_3) {
    plVar3 = (long64 *)((longlong)param_1 + 0x10U & 0xfffffffffffffff0);
    do {
      *plVar3 = lVar1;
      plVar3[1] = lVar2;
      plVar3 = plVar3 + 2;
    } while (plVar3 < (long64 *)((longlong)param_1 + param_3));
  }
  return;
}

// rrAlignDown32 @ 14f3930e0

uint __cdecl oo2::rrAlignDown32(uint param_1,long64 param_2)

{
  return -(int)param_2 & param_1;
}

// rrAlignDown64 @ 14f3930f0

ulong64 __cdecl oo2::rrAlignDown64(ulong64 param_1,long64 param_2)

{
  return ~(param_2 - 1U) & param_1;
}

// rrAlignDown @ 14f393110

int __cdecl oo2::rrAlignDown(int param_1,long64 param_2)

{
  return -(int)param_2 & param_1;
}

// rrAlignDownA @ 14f393120

ulong64 __cdecl oo2::rrAlignDownA(ulong64 param_1,long64 param_2)

{
  return ~(param_2 - 1U) & param_1;
}

// rrAlignUp32 @ 14f393140

uint __cdecl oo2::rrAlignUp32(uint param_1,long64 param_2)

{
  return (param_1 - 1) + (int)param_2 & -(int)param_2;
}

// rrAlignUp @ 14f393150

int __cdecl oo2::rrAlignUp(int param_1,long64 param_2)

{
  return param_1 + -1 + (int)param_2 & -(int)param_2;
}

// rrAlignUp @ 14f393160

uint __cdecl oo2::rrAlignUp(uint param_1,long64 param_2)

{
  return (param_1 - 1) + (int)param_2 & -(int)param_2;
}

// rrClz32 @ 14f393170

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

// rrClz64 @ 14f393190

uint __cdecl oo2::rrClz64(ulong64 param_1)

{
  longlong lVar1;
  
  lVar1 = 0x3f;
  if (param_1 != 0) {
    for (; param_1 >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  return 0x3f - (int)lVar1;
}

// rrFoldUpNegatives @ 14f3931b0

uint __cdecl oo2::rrFoldUpNegatives(int param_1)

{
  return param_1 >> 0x1f ^ param_1 * 2;
}

// rrGetBitLevel_V_NonZero @ 14f3931c0

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

// rrHuffman_BuildDecodeTable @ 14f3931e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl oo2::rrHuffman_BuildDecodeTable(rrHuffman *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  ushort uVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  int *piVar15;
  int iVar16;
  char *pcVar17;
  byte *pbVar18;
  ulong64 *puVar19;
  uint *puVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  undefined1 auStack_d8 [32];
  uint local_b8 [32];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  puVar4 = param_1->decodeTable;
  uVar14 = param_1->topSym + 1;
  if (param_1->gotNumSymbols < 2) {
    param_1->codePrefixByLen[0] = 0;
    *puVar4 = (ushort)param_1->oneChar;
    return 1;
  }
  iVar9 = param_1->minCodeLen;
  lVar22 = (longlong)iVar9;
  if (iVar9 < 1) {
code_r0x00014f3934a0:
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto LAB_14f3934c9;
    pcVar17 = "OODLE ERROR : LZ corruption : Invalid Min/Max CodeLen!\n";
    iVar9 = 0x148;
  }
  else {
    iVar1 = param_1->maxCodeLen;
    lVar23 = (longlong)iVar1;
    if ((iVar1 == 0) || (0x1e < iVar1)) goto code_r0x00014f3934a0;
    memset(param_1->firstBranchCodeSL,0,lVar22 << 3);
    iVar12 = 0;
    local_b8[lVar22] = 0;
    iVar10 = 0;
    iVar16 = 0;
    uVar13 = 0;
    if (lVar22 <= lVar23) {
      iVar9 = 0x40 - iVar9;
      lVar21 = (lVar23 - lVar22) + 1;
      piVar15 = param_1->numCodesOfLen + lVar22;
      puVar19 = param_1->firstBranchCodeSL + lVar22;
      do {
        *(int *)(((longlong)local_b8 - (longlong)param_1->numCodesOfLen) + (longlong)piVar15) =
             iVar16;
        ((rrHuffman *)(puVar19 + -0x20))->codePrefixByLen[0] = (ulonglong)(uint)(iVar10 - iVar16);
        uVar13 = (ulonglong)(uint)(*piVar15 + iVar10);
        bVar8 = (byte)iVar9;
        iVar9 = iVar9 + -1;
        *puVar19 = (ulonglong)(uint)(*piVar15 + iVar10) << (bVar8 & 0x3f);
        iVar16 = iVar16 + *piVar15;
        iVar10 = (iVar10 + *piVar15) * 2;
        lVar21 = lVar21 + -1;
        piVar15 = piVar15 + 1;
        puVar19 = puVar19 + 1;
      } while (lVar21 != 0);
    }
    if (uVar13 == 1L << ((byte)iVar1 & 0x3f)) {
      memset(param_1->firstBranchCodeSL + lVar23,-1,(longlong)(0x20 - iVar1) << 3);
      puVar5 = (uint *)param_1->codeLenTable;
      local_b8[0] = param_1->gotNumSymbols;
      uVar7 = uVar14 & 0xfffffffc;
      puVar20 = puVar5;
      if (0 < (int)uVar7) {
        do {
          uVar2 = *puVar20;
          uVar6 = uVar2 >> 0x18;
          if (((uVar6 != 0 || (uVar2 & 0xff0000) != 0) || (uVar2 & 0xff00) != 0) ||
              (uVar2 & 0xff) != 0) {
            uVar3 = local_b8[uVar2 & 0xff];
            uVar11 = (ushort)iVar12;
            puVar4[uVar3] = uVar11;
            local_b8[uVar2 & 0xff] = uVar3 + 1;
            bVar8 = (byte)((uVar2 & 0xff00) >> 8);
            uVar3 = local_b8[bVar8];
            local_b8[bVar8] = uVar3 + 1;
            puVar4[uVar3] = uVar11 + 1;
            bVar8 = (byte)((uVar2 & 0xff0000) >> 0x10);
            uVar2 = local_b8[bVar8];
            local_b8[bVar8] = uVar2 + 1;
            puVar4[uVar2] = uVar11 + 2;
            uVar2 = local_b8[uVar6];
            local_b8[uVar6] = uVar2 + 1;
            puVar4[uVar2] = uVar11 + 3;
          }
          iVar12 = iVar12 + 4;
          puVar20 = puVar20 + 1;
        } while (iVar12 < (int)uVar7);
      }
      if ((int)uVar7 < (int)uVar14) {
        pbVar18 = (byte *)((longlong)(int)uVar7 + (longlong)puVar5);
        do {
          bVar8 = *pbVar18;
          uVar2 = local_b8[bVar8];
          pbVar18 = pbVar18 + 1;
          puVar4[uVar2] = (ushort)uVar7;
          uVar7 = uVar7 + 1;
          local_b8[bVar8] = uVar2 + 1;
        } while ((int)uVar7 < (int)uVar14);
      }
      return 1;
    }
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto LAB_14f3934c9;
    pcVar17 = "OODLE ERROR : LZ corruption : Code Lens not Kraft!\n";
    iVar9 = 0x17a;
  }
  (*g_fp_OodleCore_Plugin_Printf)
            (0,"v:\\devel\\projects\\oodle2\\core\\rrhuffmandecode.cpp",iVar9,pcVar17);
LAB_14f3934c9:
  ooLogErrorPost();
  return 0;
}

// rrHuffman_BuildFastDecodeTable @ 14f393520

int __cdecl oo2::rrHuffman_BuildFastDecodeTable(rrHuffman *param_1,int param_2)

{
  ushort uVar1;
  uchar *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  int iVar5;
  uchar *puVar6;
  undefined4 *puVar7;
  longlong lVar8;
  uchar *puVar9;
  ushort *puVar10;
  size_t _Size;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int *piVar19;
  undefined2 uVar20;
  undefined4 uVar21;
  
  iVar5 = rrHuffman_BuildDecodeTable(param_1);
  if (iVar5 != 0) {
    puVar2 = param_1->fastDecode_CodeLen;
    iVar5 = param_1->numFastDecodeBits;
    puVar3 = param_1->fastDecode_Symbol;
    if (param_1->gotNumSymbols < 2) {
      memset(param_1->firstBranchCodeSL,0,0x100);
      if (param_2 != 0) {
        _Size = (size_t)(1 << ((byte)iVar5 & 0x1f));
        memset(puVar2,0,_Size);
        rrMemSet32_Aligned(puVar3,param_1->oneChar << 0x10 | param_1->oneChar,_Size * 2);
      }
    }
    else {
      uVar11 = param_1->minCodeLen;
      uVar12 = (ulonglong)(int)uVar11;
      uVar16 = 0;
      iVar14 = 0;
      puVar4 = param_1->decodeTable;
      if ((int)uVar11 <= iVar5) {
        uVar17 = uVar16;
        if ((int)uVar11 < iVar5) {
          piVar19 = param_1->numCodesOfLen + uVar12;
          iVar13 = iVar5 - uVar11;
          uVar18 = uVar16;
          do {
            uVar11 = *piVar19;
            uVar15 = (ulonglong)uVar11;
            if (uVar11 != 0) {
              iVar14 = 1 << ((byte)iVar13 & 0x1f);
              lVar8 = (longlong)(int)(uVar11 << ((byte)iVar13 & 0x1f));
              puVar9 = puVar2 + uVar17;
              uVar20 = CONCAT11((char)uVar12,(char)uVar12);
              uVar21 = CONCAT22(uVar20,uVar20);
              *(undefined4 *)puVar9 = uVar21;
              *(undefined4 *)(puVar9 + 4) = uVar21;
              *(undefined4 *)(puVar9 + 8) = uVar21;
              *(undefined4 *)(puVar9 + 0xc) = uVar21;
              if (0x10 < lVar8) {
                puVar6 = (uchar *)((ulonglong)(puVar9 + 0x10) & 0xfffffffffffffff0);
                do {
                  *(undefined4 *)puVar6 = uVar21;
                  *(undefined4 *)(puVar6 + 4) = uVar21;
                  *(undefined4 *)(puVar6 + 8) = uVar21;
                  *(undefined4 *)(puVar6 + 0xc) = uVar21;
                  puVar6 = puVar6 + 0x10;
                } while (puVar6 < puVar9 + lVar8);
              }
              if (0 < (int)uVar11) {
                puVar10 = puVar3 + uVar17;
                uVar17 = uVar17 + uVar15 * (longlong)iVar14;
                uVar18 = (ulonglong)((int)uVar18 + uVar11);
                do {
                  uVar1 = puVar4[uVar16];
                  uVar16 = uVar16 + 1;
                  uVar21 = CONCAT22(uVar1,uVar1);
                  *(undefined4 *)puVar10 = uVar21;
                  *(undefined4 *)(puVar10 + 2) = uVar21;
                  *(undefined4 *)(puVar10 + 4) = uVar21;
                  *(undefined4 *)(puVar10 + 6) = uVar21;
                  if (0x10 < (longlong)(iVar14 * 2)) {
                    puVar7 = (undefined4 *)((ulonglong)(puVar10 + 8) & 0xfffffffffffffff0);
                    do {
                      *puVar7 = uVar21;
                      puVar7[1] = uVar21;
                      puVar7[2] = uVar21;
                      puVar7[3] = uVar21;
                      puVar7 = puVar7 + 4;
                    } while (puVar7 < (undefined4 *)((longlong)puVar10 + (longlong)(iVar14 * 2)));
                  }
                  puVar10 = puVar10 + iVar14;
                  uVar15 = uVar15 - 1;
                } while (uVar15 != 0);
              }
            }
            iVar14 = (int)uVar18;
            uVar11 = (int)uVar12 + 1;
            uVar12 = (ulonglong)uVar11;
            piVar19 = piVar19 + 1;
            iVar13 = iVar13 + -1;
          } while ((int)uVar11 < iVar5);
        }
        lVar8 = (longlong)param_1->numCodesOfLen[(int)uVar11];
        if (0 < param_1->numCodesOfLen[(int)uVar11]) {
          puVar2 = puVar2 + uVar17;
          uVar20 = CONCAT11((char)uVar11,(char)uVar11);
          uVar21 = CONCAT22(uVar20,uVar20);
          *(undefined4 *)puVar2 = uVar21;
          *(undefined4 *)(puVar2 + 4) = uVar21;
          *(undefined4 *)(puVar2 + 8) = uVar21;
          *(undefined4 *)(puVar2 + 0xc) = uVar21;
          if (0x10 < lVar8) {
            puVar9 = (uchar *)((ulonglong)(puVar2 + 0x10) & 0xfffffffffffffff0);
            do {
              *(undefined4 *)puVar9 = uVar21;
              *(undefined4 *)(puVar9 + 4) = uVar21;
              *(undefined4 *)(puVar9 + 8) = uVar21;
              *(undefined4 *)(puVar9 + 0xc) = uVar21;
              puVar9 = puVar9 + 0x10;
            } while (puVar9 < puVar2 + lVar8);
          }
          memcpy(puVar3 + uVar17,puVar4 + iVar14,lVar8 * 2);
        }
      }
    }
    return 1;
  }
  return 0;
}

// rrHuffman_Create @ 14f3937c0

rrHuffman * __cdecl oo2::rrHuffman_Create(int param_1,int param_2,void *param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar1 = param_1 + 4U & 0xfffffffc;
  uVar6 = uVar1 + 0xf & 0xfffffff0;
  uVar4 = uVar1 * 2 + 0xf & 0xfffffff0;
  uVar2 = uVar4;
  if (0 < param_2) {
    uVar2 = uVar4 + (3 << ((byte)param_2 & 0x1f)) + 0x10;
  }
  iVar5 = 0;
  if (param_3 == (void *)0x0) {
    if ((int)uVar2 < (int)(uVar1 * 4)) {
      uVar2 = uVar1 * 4;
    }
    lVar7 = (longlong)(int)(uVar6 + 0x2e0 + uVar2);
    param_3 = (*g_fp_OodleCore_Plugin_MallocAligned)(lVar7,0x10);
    iVar5 = 1;
    if (param_3 == (rrHuffman *)0x0) {
                    /* WARNING: Subroutine does not return */
      Oodle_Core_Malloc_Failed(lVar7);
    }
  }
  if (((ulonglong)param_3 & 0xf) == 0) {
    memset(param_3,0,0x2c8);
    ((rrHuffman *)param_3)->codeLenTable =
         (uchar *)(((rrHuffman *)((longlong)param_3 + 0x2c8))->codePrefixByLen + 1);
    puVar3 = (uint *)((longlong)(((rrHuffman *)((longlong)param_3 + 0x2c8))->codePrefixByLen + 1) +
                     (longlong)(int)uVar6);
    ((rrHuffman *)param_3)->ownsMemory = iVar5;
    ((rrHuffman *)param_3)->numFastDecodeBits = param_2;
    ((rrHuffman *)param_3)->numSymbols = param_1;
    ((rrHuffman *)param_3)->encodeTable = puVar3;
    ((rrHuffman *)param_3)->decodeTable = (ushort *)puVar3;
    if (0 < param_2) {
      ((rrHuffman *)param_3)->fastDecode_CodeLen =
           (uchar *)((longlong)puVar3 + (longlong)(int)uVar4);
      ((rrHuffman *)param_3)->fastDecode_Symbol =
           (ushort *)
           ((uchar *)((longlong)puVar3 + (longlong)(int)uVar4) +
           (longlong)(1 << ((byte)param_2 & 0x1f)) + 0x10);
    }
  }
  else {
    param_3 = (rrHuffman *)0x0;
  }
  return param_3;
}

// rrHuffman_CreateCopy @ 14f393900

rrHuffman * __cdecl oo2::rrHuffman_CreateCopy(rrHuffman *param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulong64 uVar4;
  uint uVar5;
  rrHuffman *prVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  
  iVar1 = param_1->numSymbols;
  iVar2 = param_1->numFastDecodeBits;
  uVar5 = iVar1 + 4U & 0xfffffffc;
  uVar9 = uVar5 + 0xf & 0xfffffff0;
  uVar12 = uVar5 * 2 + 0xf & 0xfffffff0;
  uVar7 = uVar12;
  if (0 < iVar2) {
    uVar7 = uVar12 + (3 << ((byte)iVar2 & 0x1f)) + 0x10;
  }
  iVar10 = 0;
  if (param_2 == (void *)0x0) {
    if ((int)uVar7 < (int)(uVar5 * 4)) {
      uVar7 = uVar5 * 4;
    }
    lVar11 = (longlong)(int)(uVar9 + 0x2e0 + uVar7);
    param_2 = (*g_fp_OodleCore_Plugin_MallocAligned)(lVar11,0x10);
    iVar10 = 1;
    if (param_2 == (rrHuffman *)0x0) {
                    /* WARNING: Subroutine does not return */
      Oodle_Core_Malloc_Failed(lVar11);
    }
  }
  if (((ulonglong)param_2 & 0xf) == 0) {
    memset(param_2,0,0x2c8);
    ((rrHuffman *)param_2)->numSymbols = iVar1;
    ((rrHuffman *)param_2)->codeLenTable =
         (uchar *)(((rrHuffman *)((longlong)param_2 + 0x2c8))->codePrefixByLen + 1);
    puVar8 = (uint *)((longlong)(((rrHuffman *)((longlong)param_2 + 0x2c8))->codePrefixByLen + 1) +
                     (longlong)(int)uVar9);
    ((rrHuffman *)param_2)->ownsMemory = iVar10;
    ((rrHuffman *)param_2)->numFastDecodeBits = iVar2;
    ((rrHuffman *)param_2)->encodeTable = puVar8;
    ((rrHuffman *)param_2)->decodeTable = (ushort *)puVar8;
    if (0 < iVar2) {
      ((rrHuffman *)param_2)->fastDecode_CodeLen =
           (uchar *)((longlong)puVar8 + (longlong)(int)uVar12);
      ((rrHuffman *)param_2)->fastDecode_Symbol =
           (ushort *)
           ((uchar *)((longlong)puVar8 + (longlong)(int)uVar12) +
           (longlong)(1 << ((byte)iVar2 & 0x1f)) + 0x10);
    }
    uVar5 = param_1->numSymbols + 4U & 0xfffffffc;
    uVar7 = uVar5 * 2 + 0xf & 0xfffffff0;
    if (0 < param_1->numFastDecodeBits) {
      uVar7 = uVar7 + (3 << ((byte)param_1->numFastDecodeBits & 0x1f)) + 0x10;
    }
    if ((int)uVar7 < (int)(uVar5 * 4)) {
      uVar7 = uVar5 * 4;
    }
    memcpy((rrHuffman *)((longlong)param_2 + 0x2c8),param_1 + 1,
           (longlong)(int)(uVar7 + (uVar5 + 0xf & 0xfffffff0) + 0x10));
    ((rrHuffman *)param_2)->gotNumSymbols = param_1->gotNumSymbols;
    ((rrHuffman *)param_2)->oneChar = param_1->oneChar;
    ((rrHuffman *)param_2)->topSym = param_1->topSym;
    ((rrHuffman *)param_2)->minCodeLen = param_1->minCodeLen;
    ((rrHuffman *)param_2)->maxCodeLen = param_1->maxCodeLen;
    lVar11 = 2;
    uVar3 = *(undefined8 *)(param_1->numCodesOfLen + 2);
    *(undefined8 *)((rrHuffman *)param_2)->numCodesOfLen = *(undefined8 *)param_1->numCodesOfLen;
    *(undefined8 *)(((rrHuffman *)param_2)->numCodesOfLen + 2) = uVar3;
    uVar3 = *(undefined8 *)(param_1->numCodesOfLen + 6);
    *(undefined8 *)(((rrHuffman *)param_2)->numCodesOfLen + 4) =
         *(undefined8 *)(param_1->numCodesOfLen + 4);
    *(undefined8 *)(((rrHuffman *)param_2)->numCodesOfLen + 6) = uVar3;
    uVar3 = *(undefined8 *)(param_1->numCodesOfLen + 10);
    *(undefined8 *)(((rrHuffman *)param_2)->numCodesOfLen + 8) =
         *(undefined8 *)(param_1->numCodesOfLen + 8);
    *(undefined8 *)(((rrHuffman *)param_2)->numCodesOfLen + 10) = uVar3;
    uVar3 = *(undefined8 *)(param_1->numCodesOfLen + 0xe);
    *(undefined8 *)(((rrHuffman *)param_2)->numCodesOfLen + 0xc) =
         *(undefined8 *)(param_1->numCodesOfLen + 0xc);
    *(undefined8 *)(((rrHuffman *)param_2)->numCodesOfLen + 0xe) = uVar3;
    uVar3 = *(undefined8 *)(param_1->numCodesOfLen + 0x12);
    *(undefined8 *)(((rrHuffman *)param_2)->numCodesOfLen + 0x10) =
         *(undefined8 *)(param_1->numCodesOfLen + 0x10);
    *(undefined8 *)(((rrHuffman *)param_2)->numCodesOfLen + 0x12) = uVar3;
    uVar3 = *(undefined8 *)(param_1->numCodesOfLen + 0x16);
    *(undefined8 *)(((rrHuffman *)param_2)->numCodesOfLen + 0x14) =
         *(undefined8 *)(param_1->numCodesOfLen + 0x14);
    *(undefined8 *)(((rrHuffman *)param_2)->numCodesOfLen + 0x16) = uVar3;
    uVar3 = *(undefined8 *)(param_1->numCodesOfLen + 0x1a);
    *(undefined8 *)(((rrHuffman *)param_2)->numCodesOfLen + 0x18) =
         *(undefined8 *)(param_1->numCodesOfLen + 0x18);
    *(undefined8 *)(((rrHuffman *)param_2)->numCodesOfLen + 0x1a) = uVar3;
    uVar3 = *(undefined8 *)(param_1->numCodesOfLen + 0x1e);
    *(undefined8 *)(((rrHuffman *)param_2)->numCodesOfLen + 0x1c) =
         *(undefined8 *)(param_1->numCodesOfLen + 0x1c);
    *(undefined8 *)(((rrHuffman *)param_2)->numCodesOfLen + 0x1e) = uVar3;
    prVar6 = param_2;
    do {
      uVar4 = param_1->codePrefixByLen[1];
      prVar6->codePrefixByLen[0] = param_1->codePrefixByLen[0];
      prVar6->codePrefixByLen[1] = uVar4;
      uVar4 = param_1->codePrefixByLen[3];
      prVar6->codePrefixByLen[2] = param_1->codePrefixByLen[2];
      prVar6->codePrefixByLen[3] = uVar4;
      uVar4 = param_1->codePrefixByLen[5];
      prVar6->codePrefixByLen[4] = param_1->codePrefixByLen[4];
      prVar6->codePrefixByLen[5] = uVar4;
      uVar4 = param_1->codePrefixByLen[7];
      prVar6->codePrefixByLen[6] = param_1->codePrefixByLen[6];
      prVar6->codePrefixByLen[7] = uVar4;
      uVar4 = param_1->codePrefixByLen[9];
      prVar6->codePrefixByLen[8] = param_1->codePrefixByLen[8];
      prVar6->codePrefixByLen[9] = uVar4;
      uVar4 = param_1->codePrefixByLen[0xb];
      prVar6->codePrefixByLen[10] = param_1->codePrefixByLen[10];
      prVar6->codePrefixByLen[0xb] = uVar4;
      uVar4 = param_1->codePrefixByLen[0xd];
      prVar6->codePrefixByLen[0xc] = param_1->codePrefixByLen[0xc];
      prVar6->codePrefixByLen[0xd] = uVar4;
      uVar4 = param_1->codePrefixByLen[0xf];
      prVar6->codePrefixByLen[0xe] = param_1->codePrefixByLen[0xe];
      prVar6->codePrefixByLen[0xf] = uVar4;
      lVar11 = lVar11 + -1;
      prVar6 = (rrHuffman *)(prVar6->codePrefixByLen + 0x10);
      param_1 = (rrHuffman *)(param_1->codePrefixByLen + 0x10);
    } while (lVar11 != 0);
  }
  else {
    param_2 = (rrHuffman *)0x0;
  }
  return param_2;
}

// rrHuffman_Free @ 14f393bc0

void __cdecl oo2::rrHuffman_Free(rrHuffman *param_1)

{
  if (param_1->ownsMemory != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014f393bc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*g_fp_OodleCore_Plugin_Free)(param_1);
    return;
  }
  return;
}

// rrHuffman_GetCodeLen @ 14f393be0

int __cdecl oo2::rrHuffman_GetCodeLen(rrHuffman *param_1,int param_2)

{
  return (int)param_1->codeLenTable[param_2];
}

// rrHuffman_GetMaxCodeLen @ 14f393c00

int __cdecl oo2::rrHuffman_GetMaxCodeLen(rrHuffman *param_1)

{
  return param_1->maxCodeLen;
}

// rrHuffman_MemorySizeNeeded @ 14f393c10

int __cdecl oo2::rrHuffman_MemorySizeNeeded(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1 + 4U & 0xfffffffc;
  uVar2 = uVar1 * 2 + 0xf & 0xfffffff0;
  if (0 < param_2) {
    uVar2 = uVar2 + (3 << ((byte)param_2 & 0x1f)) + 0x10;
  }
  if ((int)uVar2 < (int)(uVar1 * 4)) {
    uVar2 = uVar1 * 4;
  }
  return (uVar1 + 0xf & 0xfffffff0) + 0x2e0 + uVar2;
}

// rrHuffman_PackCodeLens4 @ 14f393c60

void __cdecl
oo2::rrHuffman_PackCodeLens4
          (rrHuffman *param_1,ulong64 *param_2,long64 *param_3,uchar **param_4,uchar **param_5)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar6 = 0;
  iVar4 = 0;
  if (1 < (uint)param_1->numSymbols) {
    uVar2 = param_1->numSymbols - 1;
    iVar4 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    iVar4 = iVar4 + 1;
  }
  lVar9 = (longlong)iVar4;
  lVar8 = 0x3f - *param_3 >> 3;
  uVar5 = *param_2 << ((char)*param_3 + 1U & 0x3f);
  *(ulonglong *)*param_4 =
       uVar5 >> 0x38 | (uVar5 & 0xff000000000000) >> 0x28 | (uVar5 & 0xff0000000000) >> 0x18 |
       (uVar5 & 0xff00000000) >> 8 | (uVar5 & 0xff000000) << 8 | (uVar5 & 0xff0000) << 0x18 |
       (uVar5 & 0xff00) << 0x28 | uVar5 << 0x38;
  *param_4 = *param_4 + lVar8;
  *param_3 = *param_3 + lVar8 * 8;
  bVar3 = (byte)iVar4;
  *param_2 = *param_2 << (bVar3 & 0x3f);
  *param_2 = *param_2 | (longlong)param_1->gotNumSymbols;
  *param_3 = *param_3 - lVar9;
  if (param_1->gotNumSymbols != 0) {
    if (param_1->gotNumSymbols == 1) {
      uVar6 = *param_2 << ((char)*param_3 + 1U & 0x3f);
      lVar8 = 0x3f - *param_3 >> 3;
      *(ulonglong *)*param_4 =
           uVar6 >> 0x38 | (uVar6 & 0xff000000000000) >> 0x28 | (uVar6 & 0xff0000000000) >> 0x18 |
           (uVar6 & 0xff00000000) >> 8 | (uVar6 & 0xff000000) << 8 | (uVar6 & 0xff0000) << 0x18 |
           (uVar6 & 0xff00) << 0x28 | uVar6 << 0x38;
      *param_4 = *param_4 + lVar8;
      *param_3 = *param_3 + lVar8 * 8;
      *param_2 = *param_2 << (bVar3 & 0x3f);
      *param_2 = *param_2 | (longlong)param_1->oneChar;
      *param_3 = *param_3 - lVar9;
      return;
    }
    if ((uint)param_1->maxCodeLen < 2) {
      iVar4 = 0;
    }
    else {
      uVar2 = param_1->maxCodeLen - 1;
      iVar4 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      iVar4 = iVar4 + 1;
    }
    *param_2 = *param_2 << 3 | (longlong)iVar4;
    *param_3 = *param_3 + -3;
    uVar5 = uVar6;
    if (0 < param_1->numSymbols) {
      do {
        bVar1 = param_1->codeLenTable[uVar5];
        if (bVar1 != 0) {
          lVar8 = 0x3f - *param_3 >> 3;
          uVar7 = *param_2 << ((char)*param_3 + 1U & 0x3f);
          *(ulonglong *)*param_4 =
               uVar7 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 | (uVar7 & 0xff0000000000) >> 0x18
               | (uVar7 & 0xff00000000) >> 8 | (uVar7 & 0xff000000) << 8 |
               (uVar7 & 0xff0000) << 0x18 | (uVar7 & 0xff00) << 0x28 | uVar7 << 0x38;
          *param_4 = *param_4 + lVar8;
          *param_3 = *param_3 + lVar8 * 8;
          *param_2 = *param_2 << (bVar3 & 0x3f) | (longlong)(int)uVar6;
          *param_3 = *param_3 - lVar9;
          *param_2 = *param_2 << ((byte)iVar4 & 0x3f) | (ulonglong)bVar1 - 1;
          *param_3 = *param_3 - (longlong)iVar4;
        }
        uVar2 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar2;
        uVar5 = uVar5 + 1;
      } while ((int)uVar2 < param_1->numSymbols);
    }
  }
  return;
}

// rrHuffman_PackCodeLens8 @ 14f393e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
oo2::rrHuffman_PackCodeLens8
          (rrHuffman *param_1,ulong64 *param_2,long64 *param_3,uchar **param_4,uchar **param_5)

{
  uchar uVar1;
  byte bVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  uchar *puVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined1 auStack_138 [36];
  int local_114;
  ulonglong local_108;
  int local_f8 [32];
  ulonglong local_78;
  
  dVar4 = __real_42374876e0000000;
  local_78 = __security_cookie.value ^ (ulonglong)auStack_138;
  if ((uint)param_1->numSymbols < 2) {
    local_114 = 0;
  }
  else {
    uVar13 = param_1->numSymbols - 1;
    local_114 = 0x1f;
    if (uVar13 != 0) {
      for (; uVar13 >> local_114 == 0; local_114 = local_114 + -1) {
      }
    }
    local_114 = local_114 + 1;
  }
  iVar6 = param_1->topSym;
  local_114 = local_114 * 4;
  lVar14 = 0;
  local_f8[0] = 0;
  local_f8[1] = 0;
  local_f8[2] = 0;
  local_f8[3] = 0;
  local_f8[4] = 0;
  local_f8[5] = 0;
  local_f8[6] = 0;
  local_f8[7] = 0;
  local_f8[8] = 0;
  local_f8[9] = 0;
  local_f8[10] = 0;
  local_f8[0xb] = 0;
  local_f8[0xc] = 0;
  local_f8[0xd] = 0;
  local_f8[0xe] = 0;
  local_f8[0xf] = 0;
  local_f8[0x10] = 0;
  local_f8[0x11] = 0;
  local_f8[0x12] = 0;
  local_f8[0x13] = 0;
  local_f8[0x14] = 0;
  local_f8[0x15] = 0;
  local_f8[0x16] = 0;
  local_f8[0x17] = 0;
  local_f8[0x18] = 0;
  local_f8[0x19] = 0;
  local_f8[0x1a] = 0;
  local_f8[0x1b] = 0;
  local_f8[0x1c] = 0;
  local_f8[0x1d] = 0;
  local_f8[0x1e] = 0;
  local_f8[0x1f] = 0;
  if (-1 < (longlong)iVar6) {
    puVar9 = param_1->codeLenTable;
    iVar10 = local_114;
    do {
      bVar7 = puVar9[lVar14];
      if (bVar7 != 0) {
        iVar8 = (uint)bVar7 - (iVar10 + 2 >> 2);
        local_f8[iVar8 * 2 ^ iVar8 >> 0x1f] = local_f8[iVar8 * 2 ^ iVar8 >> 0x1f] + 1;
        iVar10 = (iVar10 * 3 + 2 >> 2) + (uint)bVar7;
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 <= iVar6);
  }
  uVar18 = 1;
  lVar14 = 0x3f - *param_3 >> 3;
  uVar11 = *param_2 << ((char)*param_3 + 1U & 0x3f);
  *(ulonglong *)*param_4 =
       uVar11 >> 0x38 | (uVar11 & 0xff000000000000) >> 0x28 | (uVar11 & 0xff0000000000) >> 0x18 |
       (uVar11 & 0xff00000000) >> 8 | (uVar11 & 0xff000000) << 8 | (uVar11 & 0xff0000) << 0x18 |
       (uVar11 & 0xff00) << 0x28 | uVar11 << 0x38;
  *param_4 = *param_4 + lVar14;
  *param_3 = *param_3 + lVar14 * 8;
  uVar13 = 0;
  do {
    iVar6 = EntropyOfCountsRice(local_f8,0x20,uVar13);
    uVar19 = uVar13;
    dVar5 = (double)iVar6;
    if (dVar4 <= (double)iVar6) {
      uVar19 = uVar18;
      dVar5 = dVar4;
    }
    dVar4 = dVar5;
    uVar18 = uVar19;
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 4);
  *param_2 = *param_2 << 2 | (longlong)(int)uVar18;
  *param_3 = *param_3 + -2;
  uVar1 = *param_1->codeLenTable;
  iVar6 = 0;
  *param_2 = (ulonglong)(uVar1 != '\0') | *param_2 * 2;
  *param_3 = *param_3 + -1;
  lVar14 = 0;
  do {
    iVar10 = 0;
    if ((uVar1 == '\0') || (lVar14 != 0)) {
      if (iVar6 < param_1->numSymbols) {
        do {
          if (param_1->codeLenTable[lVar14] != '\0') break;
          iVar10 = iVar10 + 1;
          iVar6 = iVar6 + 1;
          lVar14 = lVar14 + 1;
        } while (lVar14 < param_1->numSymbols);
      }
      uVar19 = (iVar10 - 1U >> 1) + 1;
      uVar13 = 0x1f;
      if (uVar19 != 0) {
        for (; uVar19 >> uVar13 == 0; uVar13 = uVar13 - 1) {
        }
      }
      uVar16 = uVar13;
      if (0x1e < uVar13) {
        uVar11 = (ulonglong)(uVar13 / 0x1f);
        do {
          *param_2 = *param_2 << 0x1f;
          *param_3 = *param_3 + -0x1f;
          uVar16 = uVar16 - 0x1f;
          lVar15 = 0x3f - *param_3 >> 3;
          uVar12 = *param_2 << ((char)*param_3 + 1U & 0x3f);
          *(ulonglong *)*param_4 =
               uVar12 >> 0x38 | (uVar12 & 0xff000000000000) >> 0x28 |
               (uVar12 & 0xff0000000000) >> 0x18 | (uVar12 & 0xff00000000) >> 8 |
               (uVar12 & 0xff000000) << 8 | (uVar12 & 0xff0000) << 0x18 | (uVar12 & 0xff00) << 0x28
               | uVar12 << 0x38;
          *param_4 = *param_4 + lVar15;
          *param_3 = *param_3 + lVar15 * 8;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      *param_2 = *param_2 << ((byte)(uVar16 + 1) & 0x3f) | 1;
      *param_3 = *param_3 - (ulonglong)(uVar16 + 1);
      lVar15 = 0x3f - *param_3 >> 3;
      uVar11 = *param_2 << ((char)*param_3 + 1U & 0x3f);
      *(ulonglong *)*param_4 =
           uVar11 >> 0x38 | (uVar11 & 0xff000000000000) >> 0x28 | (uVar11 & 0xff0000000000) >> 0x18
           | (uVar11 & 0xff00000000) >> 8 | (uVar11 & 0xff000000) << 8 | (uVar11 & 0xff0000) << 0x18
           | (uVar11 & 0xff00) << 0x28 | uVar11 << 0x38;
      *param_4 = *param_4 + lVar15;
      *param_3 = *param_3 + lVar15 * 8;
      if (uVar13 != 0) {
        *param_2 = (ulonglong)(uVar19 - (1 << ((byte)uVar13 & 0x1f))) |
                   *param_2 << ((byte)uVar13 & 0x3f);
        *param_3 = *param_3 - (ulonglong)uVar13;
        lVar15 = 0x3f - *param_3 >> 3;
        uVar11 = *param_2 << ((char)*param_3 + 1U & 0x3f);
        *(ulonglong *)*param_4 =
             uVar11 >> 0x38 | (uVar11 & 0xff000000000000) >> 0x28 |
             (uVar11 & 0xff0000000000) >> 0x18 | (uVar11 & 0xff00000000) >> 8 |
             (uVar11 & 0xff000000) << 8 | (uVar11 & 0xff0000) << 0x18 | (uVar11 & 0xff00) << 0x28 |
             uVar11 << 0x38;
        *param_4 = *param_4 + lVar15;
        *param_3 = *param_3 + lVar15 * 8;
      }
      *param_2 = (ulonglong)(iVar10 - 1U & 1) | *param_2 * 2;
      lVar3 = *param_3;
      lVar15 = lVar3 + -1;
      *param_3 = lVar15;
      lVar15 = 0x3f - lVar15 >> 3;
      uVar11 = *param_2 << ((byte)lVar3 & 0x3f);
      *(ulonglong *)*param_4 =
           uVar11 >> 0x38 | (uVar11 & 0xff000000000000) >> 0x28 | (uVar11 & 0xff0000000000) >> 0x18
           | (uVar11 & 0xff00000000) >> 8 | (uVar11 & 0xff000000) << 8 | (uVar11 & 0xff0000) << 0x18
           | (uVar11 & 0xff00) << 0x28 | uVar11 << 0x38;
      *param_4 = *param_4 + lVar15;
      *param_3 = *param_3 + lVar15 * 8;
    }
    if (param_1->numSymbols <= iVar6) {
      return;
    }
    uVar13 = 0;
    puVar9 = param_1->codeLenTable + lVar14;
    iVar10 = iVar6;
    do {
      if (*puVar9 == '\0') break;
      uVar13 = uVar13 + 1;
      iVar10 = iVar10 + 1;
      puVar9 = puVar9 + 1;
    } while (iVar10 < param_1->numSymbols);
    uVar16 = (uVar13 - 1 >> 1) + 1;
    uVar19 = 0x1f;
    if (uVar16 != 0) {
      for (; uVar16 >> uVar19 == 0; uVar19 = uVar19 - 1) {
      }
    }
    uVar17 = uVar19;
    if (0x1e < uVar19) {
      uVar11 = (ulonglong)(uVar19 / 0x1f);
      do {
        *param_2 = *param_2 << 0x1f;
        *param_3 = *param_3 + -0x1f;
        uVar17 = uVar17 - 0x1f;
        lVar15 = 0x3f - *param_3 >> 3;
        uVar12 = *param_2 << ((char)*param_3 + 1U & 0x3f);
        *(ulonglong *)*param_4 =
             uVar12 >> 0x38 | (uVar12 & 0xff000000000000) >> 0x28 |
             (uVar12 & 0xff0000000000) >> 0x18 | (uVar12 & 0xff00000000) >> 8 |
             (uVar12 & 0xff000000) << 8 | (uVar12 & 0xff0000) << 0x18 | (uVar12 & 0xff00) << 0x28 |
             uVar12 << 0x38;
        *param_4 = *param_4 + lVar15;
        *param_3 = *param_3 + lVar15 * 8;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    *param_2 = *param_2 << ((byte)(uVar17 + 1) & 0x3f) | 1;
    *param_3 = *param_3 - (ulonglong)(uVar17 + 1);
    lVar15 = 0x3f - *param_3 >> 3;
    uVar11 = *param_2 << ((char)*param_3 + 1U & 0x3f);
    *(ulonglong *)*param_4 =
         uVar11 >> 0x38 | (uVar11 & 0xff000000000000) >> 0x28 | (uVar11 & 0xff0000000000) >> 0x18 |
         (uVar11 & 0xff00000000) >> 8 | (uVar11 & 0xff000000) << 8 | (uVar11 & 0xff0000) << 0x18 |
         (uVar11 & 0xff00) << 0x28 | uVar11 << 0x38;
    *param_4 = *param_4 + lVar15;
    *param_3 = *param_3 + lVar15 * 8;
    if (uVar19 != 0) {
      *param_2 = (ulonglong)(uVar16 - (1 << ((byte)uVar19 & 0x1f))) |
                 *param_2 << ((byte)uVar19 & 0x3f);
      *param_3 = *param_3 - (ulonglong)uVar19;
      lVar15 = 0x3f - *param_3 >> 3;
      uVar11 = *param_2 << ((char)*param_3 + 1U & 0x3f);
      *(ulonglong *)*param_4 =
           uVar11 >> 0x38 | (uVar11 & 0xff000000000000) >> 0x28 | (uVar11 & 0xff0000000000) >> 0x18
           | (uVar11 & 0xff00000000) >> 8 | (uVar11 & 0xff000000) << 8 | (uVar11 & 0xff0000) << 0x18
           | (uVar11 & 0xff00) << 0x28 | uVar11 << 0x38;
      *param_4 = *param_4 + lVar15;
      *param_3 = *param_3 + lVar15 * 8;
    }
    *param_2 = (ulonglong)(uVar13 - 1 & 1) | *param_2 * 2;
    lVar3 = *param_3;
    lVar15 = lVar3 + -1;
    *param_3 = lVar15;
    lVar15 = 0x3f - lVar15 >> 3;
    uVar11 = *param_2 << ((byte)lVar3 & 0x3f);
    *(ulonglong *)*param_4 =
         uVar11 >> 0x38 | (uVar11 & 0xff000000000000) >> 0x28 | (uVar11 & 0xff0000000000) >> 0x18 |
         (uVar11 & 0xff00000000) >> 8 | (uVar11 & 0xff000000) << 8 | (uVar11 & 0xff0000) << 0x18 |
         (uVar11 & 0xff00) << 0x28 | uVar11 << 0x38;
    *param_4 = *param_4 + lVar15;
    *param_3 = *param_3 + lVar15 * 8;
    if (0 < (int)uVar13) {
      bVar7 = (byte)uVar18;
      iVar6 = iVar6 + uVar13;
      local_108 = (ulonglong)uVar13;
      do {
        bVar2 = param_1->codeLenTable[lVar14];
        iVar10 = (uint)bVar2 - (local_114 + 2 >> 2);
        uVar13 = iVar10 * 2 ^ iVar10 >> 0x1f;
        uVar19 = uVar13 >> (bVar7 & 0x1f);
        if (0x1e < uVar19) {
          uVar11 = (ulonglong)(uVar19 / 0x1f);
          do {
            *param_2 = *param_2 << 0x1f;
            *param_3 = *param_3 + -0x1f;
            uVar19 = uVar19 - 0x1f;
            lVar15 = 0x3f - *param_3 >> 3;
            uVar12 = *param_2 << ((char)*param_3 + 1U & 0x3f);
            *(ulonglong *)*param_4 =
                 uVar12 >> 0x38 | (uVar12 & 0xff000000000000) >> 0x28 |
                 (uVar12 & 0xff0000000000) >> 0x18 | (uVar12 & 0xff00000000) >> 8 |
                 (uVar12 & 0xff000000) << 8 | (uVar12 & 0xff0000) << 0x18 |
                 (uVar12 & 0xff00) << 0x28 | uVar12 << 0x38;
            *param_4 = *param_4 + lVar15;
            *param_3 = *param_3 + lVar15 * 8;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        *param_2 = *param_2 << ((byte)(uVar19 + 1) & 0x3f) | 1;
        *param_3 = *param_3 - (ulonglong)(uVar19 + 1);
        lVar14 = lVar14 + 1;
        lVar15 = 0x3f - *param_3 >> 3;
        local_114 = (local_114 * 3 + 2 >> 2) + (uint)bVar2;
        uVar11 = *param_2 << ((char)*param_3 + 1U & 0x3f);
        *(ulonglong *)*param_4 =
             uVar11 >> 0x38 | (uVar11 & 0xff000000000000) >> 0x28 |
             (uVar11 & 0xff0000000000) >> 0x18 | (uVar11 & 0xff00000000) >> 8 |
             (uVar11 & 0xff000000) << 8 | (uVar11 & 0xff0000) << 0x18 | (uVar11 & 0xff00) << 0x28 |
             uVar11 << 0x38;
        *param_4 = *param_4 + lVar15;
        *param_3 = *param_3 + lVar15 * 8;
        *param_2 = (longlong)(int)(uVar13 & (1 << (bVar7 & 0x1f) | 1U >> 0x20 - (bVar7 & 0x1f)) - 1)
                   | *param_2 << (bVar7 & 0x3f);
        *param_3 = *param_3 - (ulonglong)uVar18;
        lVar15 = 0x3f - *param_3 >> 3;
        uVar11 = *param_2 << ((char)*param_3 + 1U & 0x3f);
        *(ulonglong *)*param_4 =
             uVar11 >> 0x38 | (uVar11 & 0xff000000000000) >> 0x28 |
             (uVar11 & 0xff0000000000) >> 0x18 | (uVar11 & 0xff00000000) >> 8 |
             (uVar11 & 0xff000000) << 8 | (uVar11 & 0xff0000) << 0x18 | (uVar11 & 0xff00) << 0x28 |
             uVar11 << 0x38;
        *param_4 = *param_4 + lVar15;
        *param_3 = *param_3 + lVar15 * 8;
        local_108 = local_108 - 1;
      } while (local_108 != 0);
    }
    if (param_1->numSymbols <= iVar6) {
      return;
    }
  } while( true );
}

// rrHuffman_PackCodeLens @ 14f394500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl oo2::rrHuffman_PackCodeLens(rrHuffman *param_1,_rrVarBits_ *param_2)

{
  byte bVar1;
  uchar uVar2;
  double dVar3;
  double dVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  byte bVar8;
  int iVar9;
  uchar *puVar10;
  int iVar11;
  longlong lVar12;
  ulonglong *puVar13;
  ulong64 uVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  undefined1 auStack_138 [36];
  int local_114;
  ulonglong local_108;
  _rrVarBits_ *local_f8;
  uchar *local_f0;
  int local_e8 [32];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_138;
  lVar12 = param_2->m_inv_bitlen;
  local_f0 = param_2->m_end;
  puVar13 = (ulonglong *)param_2->m_cur;
  lVar16 = 0x3f - lVar12 >> 3;
  uVar5 = param_2->m_bits << ((char)lVar12 + 1U & 0x3f);
  uVar7 = param_2->m_bits * 2;
  *puVar13 = uVar5 >> 0x38 | (uVar5 & 0xff000000000000) >> 0x28 | (uVar5 & 0xff0000000000) >> 0x18 |
             (uVar5 & 0xff00000000) >> 8 | (uVar5 & 0xff000000) << 8 | (uVar5 & 0xff0000) << 0x18 |
             (uVar5 & 0xff00) << 0x28 | uVar5 << 0x38;
  dVar3 = __real_42374876e0000000;
  uVar5 = 0;
  uVar22 = param_1->numSymbols;
  lVar12 = lVar12 + lVar16 * 8;
  puVar13 = (ulonglong *)((longlong)puVar13 + lVar16);
  lVar16 = lVar12 + -1;
  iVar17 = 0;
  bVar8 = (byte)lVar12;
  local_114 = 0;
  if (param_1->gotNumSymbols < 5) {
    if (1 < uVar22) {
      iVar17 = 0x1f;
      if (uVar22 - 1 != 0) {
        for (; uVar22 - 1 >> iVar17 == 0; iVar17 = iVar17 + -1) {
        }
      }
      iVar17 = iVar17 + 1;
    }
    lVar20 = (longlong)iVar17;
    uVar6 = uVar7 << (bVar8 & 0x3f);
    lVar12 = 0x3f - lVar16 >> 3;
    *puVar13 = uVar6 >> 0x38 | (uVar6 & 0xff000000000000) >> 0x28 | (uVar6 & 0xff0000000000) >> 0x18
               | (uVar6 & 0xff00000000) >> 8 | (uVar6 & 0xff000000) << 8 |
               (uVar6 & 0xff0000) << 0x18 | (uVar6 & 0xff00) << 0x28 | uVar6 << 0x38;
    puVar13 = (ulonglong *)((longlong)puVar13 + lVar12);
    iVar11 = param_1->gotNumSymbols;
    bVar8 = (byte)iVar17;
    uVar14 = uVar7 << (bVar8 & 0x3f) | (longlong)iVar11;
    lVar16 = lVar16 + (lVar12 * 8 - lVar20);
    if (iVar11 != 0) {
      if (iVar11 == 1) {
        uVar7 = uVar14 << ((char)lVar16 + 1U & 0x3f);
        *puVar13 = uVar7 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 |
                   (uVar7 & 0xff0000000000) >> 0x18 | (uVar7 & 0xff00000000) >> 8 |
                   (uVar7 & 0xff000000) << 8 | (uVar7 & 0xff0000) << 0x18 | (uVar7 & 0xff00) << 0x28
                   | uVar7 << 0x38;
        lVar12 = 0x3f - lVar16 >> 3;
        puVar13 = (ulonglong *)((longlong)puVar13 + lVar12);
        uVar14 = uVar14 << (bVar8 & 0x3f) | (longlong)param_1->oneChar;
        lVar16 = lVar16 + (lVar12 * 8 - lVar20);
      }
      else {
        if (1 < (uint)param_1->maxCodeLen) {
          uVar22 = param_1->maxCodeLen - 1;
          local_114 = 0x1f;
          if (uVar22 != 0) {
            for (; uVar22 >> local_114 == 0; local_114 = local_114 + -1) {
            }
          }
          local_114 = local_114 + 1;
        }
        uVar14 = uVar14 * 8 | (longlong)local_114;
        lVar16 = lVar16 + -3;
        uVar7 = uVar5;
        if (0 < param_1->numSymbols) {
          do {
            bVar1 = param_1->codeLenTable[uVar5];
            if (bVar1 != 0) {
              uVar6 = uVar14 << ((char)lVar16 + 1U & 0x3f);
              *puVar13 = uVar6 >> 0x38 | (uVar6 & 0xff000000000000) >> 0x28 |
                         (uVar6 & 0xff0000000000) >> 0x18 | (uVar6 & 0xff00000000) >> 8 |
                         (uVar6 & 0xff000000) << 8 | (uVar6 & 0xff0000) << 0x18 |
                         (uVar6 & 0xff00) << 0x28 | uVar6 << 0x38;
              lVar12 = 0x3f - lVar16 >> 3;
              puVar13 = (ulonglong *)((longlong)puVar13 + lVar12);
              uVar14 = (uVar14 << (bVar8 & 0x3f) | (longlong)(int)uVar7) << ((byte)local_114 & 0x3f)
                       | (ulonglong)bVar1 - 1;
              lVar16 = lVar16 + ((lVar12 * 8 - (longlong)local_114) - lVar20);
            }
            uVar22 = (int)uVar7 + 1;
            uVar5 = uVar5 + 1;
            uVar7 = (ulonglong)uVar22;
          } while ((int)uVar22 < param_1->numSymbols);
        }
      }
    }
  }
  else {
    if (1 < uVar22) {
      local_114 = 0x1f;
      if (uVar22 - 1 != 0) {
        for (; uVar22 - 1 >> local_114 == 0; local_114 = local_114 + -1) {
        }
      }
      local_114 = local_114 + 1;
    }
    iVar17 = param_1->topSym;
    local_114 = local_114 * 4;
    local_e8[0] = 0;
    local_e8[1] = 0;
    local_e8[2] = 0;
    local_e8[3] = 0;
    local_e8[4] = 0;
    local_e8[5] = 0;
    local_e8[6] = 0;
    local_e8[7] = 0;
    local_e8[8] = 0;
    local_e8[9] = 0;
    local_e8[10] = 0;
    local_e8[0xb] = 0;
    local_e8[0xc] = 0;
    local_e8[0xd] = 0;
    local_e8[0xe] = 0;
    local_e8[0xf] = 0;
    local_e8[0x10] = 0;
    local_e8[0x11] = 0;
    local_e8[0x12] = 0;
    local_e8[0x13] = 0;
    local_e8[0x14] = 0;
    local_e8[0x15] = 0;
    local_e8[0x16] = 0;
    local_e8[0x17] = 0;
    local_e8[0x18] = 0;
    local_e8[0x19] = 0;
    local_e8[0x1a] = 0;
    local_e8[0x1b] = 0;
    local_e8[0x1c] = 0;
    local_e8[0x1d] = 0;
    local_e8[0x1e] = 0;
    local_e8[0x1f] = 0;
    if (-1 < (longlong)iVar17) {
      puVar10 = param_1->codeLenTable;
      uVar6 = uVar5;
      iVar11 = local_114;
      do {
        bVar1 = puVar10[uVar6];
        if (bVar1 != 0) {
          iVar9 = (uint)bVar1 - (iVar11 + 2 >> 2);
          local_e8[iVar9 * 2 ^ iVar9 >> 0x1f] = local_e8[iVar9 * 2 ^ iVar9 >> 0x1f] + 1;
          iVar11 = (iVar11 * 3 + 2 >> 2) + (uint)bVar1;
        }
        uVar6 = uVar6 + 1;
      } while ((longlong)uVar6 <= (longlong)iVar17);
    }
    uVar6 = (uVar7 | 1) << (bVar8 & 0x3f);
    lVar12 = 0x3f - lVar16 >> 3;
    uVar22 = 1;
    *puVar13 = uVar6 >> 0x38 | (uVar6 & 0xff000000000000) >> 0x28 | (uVar6 & 0xff0000000000) >> 0x18
               | (uVar6 & 0xff00000000) >> 8 | (uVar6 & 0xff000000) << 8 |
               (uVar6 & 0xff0000) << 0x18 | (uVar6 & 0xff00) << 0x28 | uVar6 << 0x38;
    puVar13 = (ulonglong *)((longlong)puVar13 + lVar12);
    local_f8 = param_2;
    do {
      uVar21 = (uint)uVar5;
      iVar17 = EntropyOfCountsRice(local_e8,0x20,uVar21);
      uVar15 = uVar21;
      dVar4 = (double)iVar17;
      if (dVar3 <= (double)iVar17) {
        uVar15 = uVar22;
        dVar4 = dVar3;
      }
      dVar3 = dVar4;
      uVar22 = uVar15;
      uVar5 = (ulonglong)(uVar21 + 1);
    } while ((int)(uVar21 + 1) < 4);
    iVar17 = 0;
    lVar20 = 0;
    uVar2 = *param_1->codeLenTable;
    uVar14 = ((uVar7 | 1) * 4 | (longlong)(int)uVar22) * 2 | (ulonglong)(uVar2 != '\0');
    lVar16 = lVar16 + lVar12 * 8 + -3;
    do {
      iVar11 = 0;
      if ((uVar2 == '\0') || (lVar20 != 0)) {
        if (iVar17 < param_1->numSymbols) {
          iVar11 = 0;
          do {
            if (param_1->codeLenTable[lVar20] != '\0') break;
            iVar11 = iVar11 + 1;
            iVar17 = iVar17 + 1;
            lVar20 = lVar20 + 1;
          } while (lVar20 < param_1->numSymbols);
        }
        uVar21 = (iVar11 - 1U >> 1) + 1;
        uVar15 = 0x1f;
        if (uVar21 != 0) {
          for (; uVar21 >> uVar15 == 0; uVar15 = uVar15 - 1) {
          }
        }
        uVar18 = uVar15;
        if (0x1e < uVar15) {
          uVar7 = (ulonglong)(uVar15 / 0x1f);
          do {
            lVar16 = lVar16 + -0x1f;
            uVar14 = uVar14 << 0x1f;
            uVar18 = uVar18 - 0x1f;
            lVar12 = 0x3f - lVar16 >> 3;
            uVar5 = uVar14 << ((char)lVar16 + 1U & 0x3f);
            *puVar13 = uVar5 >> 0x38 | (uVar5 & 0xff000000000000) >> 0x28 |
                       (uVar5 & 0xff0000000000) >> 0x18 | (uVar5 & 0xff00000000) >> 8 |
                       (uVar5 & 0xff000000) << 8 | (uVar5 & 0xff0000) << 0x18 |
                       (uVar5 & 0xff00) << 0x28 | uVar5 << 0x38;
            lVar16 = lVar16 + lVar12 * 8;
            puVar13 = (ulonglong *)((longlong)puVar13 + lVar12);
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        lVar16 = lVar16 - (ulonglong)(uVar18 + 1);
        uVar5 = uVar14 << ((byte)(uVar18 + 1) & 0x3f) | 1;
        lVar12 = 0x3f - lVar16 >> 3;
        uVar7 = uVar5 << ((char)lVar16 + 1U & 0x3f);
        *puVar13 = uVar7 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 |
                   (uVar7 & 0xff0000000000) >> 0x18 | (uVar7 & 0xff00000000) >> 8 |
                   (uVar7 & 0xff000000) << 8 | (uVar7 & 0xff0000) << 0x18 | (uVar7 & 0xff00) << 0x28
                   | uVar7 << 0x38;
        lVar16 = lVar16 + lVar12 * 8;
        puVar13 = (ulonglong *)((longlong)puVar13 + lVar12);
        if (uVar15 != 0) {
          lVar16 = lVar16 - (ulonglong)uVar15;
          lVar12 = 0x3f - lVar16 >> 3;
          uVar5 = (ulonglong)(uVar21 - (1 << ((byte)uVar15 & 0x1f))) |
                  uVar5 << ((byte)uVar15 & 0x3f);
          uVar7 = uVar5 << ((char)lVar16 + 1U & 0x3f);
          *puVar13 = uVar7 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 |
                     (uVar7 & 0xff0000000000) >> 0x18 | (uVar7 & 0xff00000000) >> 8 |
                     (uVar7 & 0xff000000) << 8 | (uVar7 & 0xff0000) << 0x18 |
                     (uVar7 & 0xff00) << 0x28 | uVar7 << 0x38;
          lVar16 = lVar16 + lVar12 * 8;
          puVar13 = (ulonglong *)((longlong)puVar13 + lVar12);
        }
        uVar14 = (ulonglong)(iVar11 - 1U & 1) | uVar5 * 2;
        lVar12 = 0x3f - (lVar16 + -1) >> 3;
        uVar7 = uVar14 << ((byte)lVar16 & 0x3f);
        *puVar13 = uVar7 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 |
                   (uVar7 & 0xff0000000000) >> 0x18 | (uVar7 & 0xff00000000) >> 8 |
                   (uVar7 & 0xff000000) << 8 | (uVar7 & 0xff0000) << 0x18 | (uVar7 & 0xff00) << 0x28
                   | uVar7 << 0x38;
        puVar13 = (ulonglong *)((longlong)puVar13 + lVar12);
        lVar16 = lVar16 + -1 + lVar12 * 8;
      }
      param_2 = local_f8;
      if (param_1->numSymbols <= iVar17) break;
      uVar15 = 0;
      puVar10 = param_1->codeLenTable + lVar20;
      iVar11 = iVar17;
      do {
        if (*puVar10 == '\0') break;
        uVar15 = uVar15 + 1;
        iVar11 = iVar11 + 1;
        puVar10 = puVar10 + 1;
      } while (iVar11 < param_1->numSymbols);
      uVar18 = (uVar15 - 1 >> 1) + 1;
      uVar21 = 0x1f;
      if (uVar18 != 0) {
        for (; uVar18 >> uVar21 == 0; uVar21 = uVar21 - 1) {
        }
      }
      uVar19 = uVar21;
      if (0x1e < uVar21) {
        uVar7 = (ulonglong)(uVar21 / 0x1f);
        do {
          lVar16 = lVar16 + -0x1f;
          uVar14 = uVar14 << 0x1f;
          uVar19 = uVar19 - 0x1f;
          lVar12 = 0x3f - lVar16 >> 3;
          uVar5 = uVar14 << ((char)lVar16 + 1U & 0x3f);
          *puVar13 = uVar5 >> 0x38 | (uVar5 & 0xff000000000000) >> 0x28 |
                     (uVar5 & 0xff0000000000) >> 0x18 | (uVar5 & 0xff00000000) >> 8 |
                     (uVar5 & 0xff000000) << 8 | (uVar5 & 0xff0000) << 0x18 |
                     (uVar5 & 0xff00) << 0x28 | uVar5 << 0x38;
          lVar16 = lVar16 + lVar12 * 8;
          puVar13 = (ulonglong *)((longlong)puVar13 + lVar12);
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      lVar16 = lVar16 - (ulonglong)(uVar19 + 1);
      uVar5 = uVar14 << ((byte)(uVar19 + 1) & 0x3f) | 1;
      lVar12 = 0x3f - lVar16 >> 3;
      uVar7 = uVar5 << ((char)lVar16 + 1U & 0x3f);
      *puVar13 = uVar7 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 |
                 (uVar7 & 0xff0000000000) >> 0x18 | (uVar7 & 0xff00000000) >> 8 |
                 (uVar7 & 0xff000000) << 8 | (uVar7 & 0xff0000) << 0x18 | (uVar7 & 0xff00) << 0x28 |
                 uVar7 << 0x38;
      lVar16 = lVar16 + lVar12 * 8;
      puVar13 = (ulonglong *)((longlong)puVar13 + lVar12);
      if (uVar21 != 0) {
        lVar16 = lVar16 - (ulonglong)uVar21;
        lVar12 = 0x3f - lVar16 >> 3;
        uVar5 = (ulonglong)(uVar18 - (1 << ((byte)uVar21 & 0x1f))) | uVar5 << ((byte)uVar21 & 0x3f);
        uVar7 = uVar5 << ((char)lVar16 + 1U & 0x3f);
        *puVar13 = uVar7 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 |
                   (uVar7 & 0xff0000000000) >> 0x18 | (uVar7 & 0xff00000000) >> 8 |
                   (uVar7 & 0xff000000) << 8 | (uVar7 & 0xff0000) << 0x18 | (uVar7 & 0xff00) << 0x28
                   | uVar7 << 0x38;
        lVar16 = lVar16 + lVar12 * 8;
        puVar13 = (ulonglong *)((longlong)puVar13 + lVar12);
      }
      uVar14 = (ulonglong)(uVar15 - 1 & 1) | uVar5 * 2;
      lVar12 = 0x3f - (lVar16 + -1) >> 3;
      uVar7 = uVar14 << ((byte)lVar16 & 0x3f);
      *puVar13 = uVar7 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 |
                 (uVar7 & 0xff0000000000) >> 0x18 | (uVar7 & 0xff00000000) >> 8 |
                 (uVar7 & 0xff000000) << 8 | (uVar7 & 0xff0000) << 0x18 | (uVar7 & 0xff00) << 0x28 |
                 uVar7 << 0x38;
      puVar13 = (ulonglong *)((longlong)puVar13 + lVar12);
      lVar16 = lVar16 + -1 + lVar12 * 8;
      if (0 < (int)uVar15) {
        bVar8 = (byte)uVar22;
        iVar17 = iVar17 + uVar15;
        local_108 = (ulonglong)uVar15;
        do {
          bVar1 = param_1->codeLenTable[lVar20];
          iVar11 = (uint)bVar1 - (local_114 + 2 >> 2);
          uVar21 = iVar11 * 2 ^ iVar11 >> 0x1f;
          uVar15 = uVar21 >> (bVar8 & 0x1f);
          if (0x1e < uVar15) {
            uVar7 = (ulonglong)(uVar15 / 0x1f);
            do {
              lVar16 = lVar16 + -0x1f;
              uVar14 = uVar14 << 0x1f;
              uVar15 = uVar15 - 0x1f;
              lVar12 = 0x3f - lVar16 >> 3;
              uVar5 = uVar14 << ((char)lVar16 + 1U & 0x3f);
              *puVar13 = uVar5 >> 0x38 | (uVar5 & 0xff000000000000) >> 0x28 |
                         (uVar5 & 0xff0000000000) >> 0x18 | (uVar5 & 0xff00000000) >> 8 |
                         (uVar5 & 0xff000000) << 8 | (uVar5 & 0xff0000) << 0x18 |
                         (uVar5 & 0xff00) << 0x28 | uVar5 << 0x38;
              lVar16 = lVar16 + lVar12 * 8;
              puVar13 = (ulonglong *)((longlong)puVar13 + lVar12);
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
          }
          lVar16 = lVar16 - (ulonglong)(uVar15 + 1);
          uVar5 = uVar14 << ((byte)(uVar15 + 1) & 0x3f) | 1;
          lVar12 = 0x3f - lVar16 >> 3;
          uVar7 = uVar5 << ((char)lVar16 + 1U & 0x3f);
          lVar20 = lVar20 + 1;
          *puVar13 = uVar7 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 |
                     (uVar7 & 0xff0000000000) >> 0x18 | (uVar7 & 0xff00000000) >> 8 |
                     (uVar7 & 0xff000000) << 8 | (uVar7 & 0xff0000) << 0x18 |
                     (uVar7 & 0xff00) << 0x28 | uVar7 << 0x38;
          puVar13 = (ulonglong *)((longlong)puVar13 + lVar12);
          uVar14 = (longlong)(int)(uVar21 & (1 << (bVar8 & 0x1f) | 1U >> 0x20 - (bVar8 & 0x1f)) - 1)
                   | uVar5 << (bVar8 & 0x3f);
          lVar16 = lVar16 + (lVar12 * 8 - (ulonglong)uVar22);
          lVar12 = 0x3f - lVar16 >> 3;
          local_114 = (local_114 * 3 + 2 >> 2) + (uint)bVar1;
          uVar7 = uVar14 << ((char)lVar16 + 1U & 0x3f);
          *puVar13 = uVar7 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 |
                     (uVar7 & 0xff0000000000) >> 0x18 | (uVar7 & 0xff00000000) >> 8 |
                     (uVar7 & 0xff000000) << 8 | (uVar7 & 0xff0000) << 0x18 |
                     (uVar7 & 0xff00) << 0x28 | uVar7 << 0x38;
          lVar16 = lVar16 + lVar12 * 8;
          puVar13 = (ulonglong *)((longlong)puVar13 + lVar12);
          local_108 = local_108 - 1;
        } while (local_108 != 0);
      }
    } while (iVar17 < param_1->numSymbols);
  }
  param_2->m_end = local_f0;
  param_2->m_bits = uVar14;
  param_2->m_inv_bitlen = lVar16;
  param_2->m_cur = (uchar *)puVar13;
  return;
}

// rrHuffman_UnPackCodeLens4 @ 14f394ce0

int __cdecl
oo2::rrHuffman_UnPackCodeLens4
          (rrHuffman *param_1,ulong64 *param_2,long64 *param_3,uchar **param_4,uchar **param_5)

{
  ulonglong *puVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  byte bVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  char *pcVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  
  if ((uint)param_1->numSymbols < 2) {
    iVar14 = 0;
  }
  else {
    uVar4 = param_1->numSymbols - 1;
    iVar14 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    iVar14 = iVar14 + 1;
  }
  uVar6 = *param_2;
  bVar2 = (byte)iVar14;
  bVar9 = 0x40 - bVar2;
  lVar22 = (longlong)iVar14;
  *param_2 = uVar6 << (bVar2 & 0x3f);
  *param_3 = *param_3 + lVar22;
  iVar14 = (int)(uVar6 >> (bVar9 & 0x3f));
  param_1->gotNumSymbols = iVar14;
  if (param_1->numSymbols < iVar14) {
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
    goto code_r0x00014f395140;
    pcVar17 = "OODLE ERROR : LZ corruption : HI->gotNumSymbols > HI->numSymbols\n";
    iVar14 = 0x2a9;
  }
  else {
    if (iVar14 == 0) {
      param_1->minCodeLen = 0;
      param_1->maxCodeLen = 0;
      return 1;
    }
    if (iVar14 == 1) {
      lVar12 = *param_3;
      puVar1 = (ulonglong *)*param_4;
      lVar15 = lVar12 >> 3;
      if ((longlong)*param_5 - (longlong)puVar1 < 8) {
        uVar6 = rrVB_Get64BE_Masked((uchar *)puVar1,*param_5);
      }
      else {
        uVar6 = *puVar1;
        uVar6 = uVar6 >> 0x38 | (uVar6 & 0xff000000000000) >> 0x28 |
                (uVar6 & 0xff0000000000) >> 0x18 | (uVar6 & 0xff00000000) >> 8 |
                (uVar6 & 0xff000000) << 8 | (uVar6 & 0xff0000) << 0x18 | (uVar6 & 0xff00) << 0x28 |
                uVar6 << 0x38;
      }
      *param_2 = *param_2 | uVar6 >> (0x3fU - (char)lVar12 & 0x3f);
      *param_4 = *param_4 + lVar15;
      *param_3 = *param_3 + lVar15 * -8;
      uVar6 = *param_2 >> (bVar9 & 0x3f);
      *param_2 = *param_2 << (bVar2 & 0x3f);
      *param_3 = *param_3 + lVar22;
      if (uVar6 < (ulonglong)(longlong)param_1->numSymbols) {
        param_1->minCodeLen = 0;
        param_1->maxCodeLen = 0;
        param_1->oneChar = (uint)uVar6 & 0xffff;
        param_1->topSym = (uint)uVar6;
        param_1->codeLenTable[uVar6] = '\0';
        *param_1->decodeTable = (ushort)uVar6;
        return 1;
      }
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
      goto code_r0x00014f395140;
      pcVar17 = "OODLE ERROR : LZ corruption : HI->oneChar >= HI->numSymbols\n";
      iVar14 = 0x2ba;
    }
    else {
      memset(param_1->codeLenTable,0,(longlong)param_1->numSymbols);
      uVar6 = *param_2;
      *param_2 = uVar6 * 8;
      *param_3 = *param_3 + 3;
      if ((uint)(uVar6 >> 0x3d) < 6) {
        iVar14 = 0;
        param_1->minCodeLen = 0x20;
        param_1->maxCodeLen = 0;
        param_1->topSym = -1;
        if (param_1->gotNumSymbols < 1) {
          return 1;
        }
        bVar3 = (byte)(uVar6 >> 0x38);
        while( true ) {
          puVar1 = (ulonglong *)*param_4;
          lVar15 = *param_3 >> 3;
          lVar12 = (longlong)*param_5 - (longlong)puVar1;
          if (lVar12 < 8) {
            if (lVar12 < 1) {
              uVar8 = 0;
            }
            else {
              uVar8 = (ulonglong)(byte)*puVar1;
            }
            if (lVar12 == 1 || lVar12 + -1 < 0) {
              uVar20 = 0;
            }
            else {
              uVar20 = (ulonglong)*(byte *)((longlong)puVar1 + 1);
            }
            if (lVar12 == 2 || lVar12 + -2 < 0) {
              uVar18 = 0;
            }
            else {
              uVar18 = (ulonglong)*(byte *)((longlong)puVar1 + 2);
            }
            if (lVar12 == 3 || lVar12 + -3 < 0) {
              uVar10 = 0;
            }
            else {
              uVar10 = (ulonglong)*(byte *)((longlong)puVar1 + 3);
            }
            lVar12 = (longlong)*param_5 - ((longlong)puVar1 + 4);
            if (lVar12 < 1) {
              uVar21 = 0;
            }
            else {
              uVar21 = (ulonglong)*(byte *)((longlong)puVar1 + 4);
            }
            if (lVar12 == 1 || lVar12 + -1 < 0) {
              uVar19 = 0;
            }
            else {
              uVar19 = (ulonglong)*(byte *)((longlong)puVar1 + 5);
            }
            if (lVar12 == 2 || lVar12 + -2 < 0) {
              uVar13 = 0;
            }
            else {
              uVar13 = (ulonglong)*(byte *)((longlong)puVar1 + 6);
            }
            if (lVar12 == 3 || lVar12 + -3 < 0) {
              uVar7 = 0;
            }
            else {
              uVar7 = (ulonglong)*(byte *)((longlong)puVar1 + 7);
            }
            uVar7 = ((((((uVar8 << 8 | uVar20) << 8 | uVar18) << 8 | uVar10) << 8 | uVar21) << 8 |
                     uVar19) << 8 | uVar13) << 8 | uVar7;
          }
          else {
            uVar8 = *puVar1;
            uVar7 = uVar8 >> 0x38 | (uVar8 & 0xff000000000000) >> 0x28 |
                    (uVar8 & 0xff0000000000) >> 0x18 | (uVar8 & 0xff00000000) >> 8 |
                    (uVar8 & 0xff000000) << 8 | (uVar8 & 0xff0000) << 0x18 |
                    (uVar8 & 0xff00) << 0x28 | uVar8 << 0x38;
          }
          *param_2 = *param_2 | uVar7 >> (0x3fU - (char)*param_3 & 0x3f);
          *param_4 = *param_4 + lVar15;
          *param_3 = *param_3 + lVar15 * -8;
          uVar8 = *param_2;
          *param_2 = uVar8 << (bVar2 & 0x3f);
          *param_3 = *param_3 + lVar22;
          uVar20 = *param_2;
          *param_2 = uVar20 << (bVar3 >> 5);
          *param_3 = *param_3 + (uVar6 >> 0x3d);
          iVar5 = (int)((uVar20 >> 1) >> (0x3f - (bVar3 >> 5) & 0x3f));
          iVar11 = iVar5 + 1;
          iVar16 = (int)(uVar8 >> (bVar9 & 0x3f));
          if ((param_1->numSymbols <= iVar16) || (0xf < iVar5)) break;
          param_1->codeLenTable[iVar16] = (uchar)iVar11;
          if (iVar16 <= param_1->topSym) {
            ooLogErrorPre();
            if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
            goto code_r0x00014f395140;
            pcVar17 = "OODLE ERROR : LZ corruption : sym <= HI->topSym\n";
            iVar14 = 0x2fc;
            goto LAB_14f395132;
          }
          param_1->topSym = iVar16;
          param_1->numCodesOfLen[iVar11] = param_1->numCodesOfLen[iVar11] + 1;
          iVar5 = param_1->maxCodeLen;
          if (param_1->maxCodeLen <= iVar11) {
            iVar5 = iVar11;
          }
          param_1->maxCodeLen = iVar5;
          iVar5 = param_1->minCodeLen;
          if (iVar11 <= param_1->minCodeLen) {
            iVar5 = iVar11;
          }
          iVar14 = iVar14 + 1;
          param_1->minCodeLen = iVar5;
          if (param_1->gotNumSymbols <= iVar14) {
            return 1;
          }
        }
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
        goto code_r0x00014f395140;
        pcVar17 = 
        "OODLE ERROR : LZ corruption : sym >= HI->numSymbols || len > RR_HUFFMAN_MAX_CODELEN_LIMIT \n"
        ;
        iVar14 = 0x2f3;
      }
      else {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
        goto code_r0x00014f395140;
        pcVar17 = "OODLE ERROR : LZ corruption : log2CodeLen > 5\n";
        iVar14 = 0x2d3;
      }
    }
  }
LAB_14f395132:
  (*g_fp_OodleCore_Plugin_Printf)
            (0,"v:\\devel\\projects\\oodle2\\core\\rrhuffmandecode.cpp",iVar14,pcVar17);
code_r0x00014f395140:
  ooLogErrorPost();
  return 0;
}

// rrHuffman_UnPackCodeLens8 @ 14f395160

int __cdecl
oo2::rrHuffman_UnPackCodeLens8
          (rrHuffman *param_1,ulong64 *param_2,long64 *param_3,uchar **param_4,uchar **param_5)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  uchar *_Dst;
  ulong64 uVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int iVar19;
  uint uVar20;
  ulonglong uVar21;
  uint uVar22;
  uint uVar23;
  longlong lVar24;
  longlong lVar25;
  uint uVar26;
  longlong lVar27;
  ulonglong uVar28;
  char *pcVar29;
  long64 lVar30;
  bool bVar31;
  uint local_res10;
  int local_res20;
  int local_68;
  
  uVar15 = param_1->numSymbols;
  uVar18 = 0;
  iVar19 = 0;
  uVar20 = 0;
  uVar22 = uVar20;
  if (1 < uVar15) {
    iVar6 = 0x1f;
    if (uVar15 - 1 != 0) {
      for (; uVar15 - 1 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    uVar22 = iVar6 + 1;
  }
  uVar1 = *param_2;
  local_res20 = 0;
  *param_2 = uVar1 * 4;
  *param_3 = *param_3 + 2;
  puVar2 = (ulonglong *)*param_4;
  lVar24 = *param_3 >> 3;
  lVar27 = (longlong)*param_5 - (longlong)puVar2;
  if (lVar27 < 8) {
    uVar17 = uVar18;
    if (0 < lVar27) {
      uVar17 = (ulonglong)(byte)*puVar2;
    }
    uVar8 = uVar18;
    if (lVar27 != 1 && -1 < lVar27 + -1) {
      uVar8 = (ulonglong)*(byte *)((longlong)puVar2 + 1);
    }
    uVar21 = uVar18;
    if (lVar27 != 2 && -1 < lVar27 + -2) {
      uVar21 = (ulonglong)*(byte *)((longlong)puVar2 + 2);
    }
    uVar10 = uVar18;
    if (lVar27 != 3 && -1 < lVar27 + -3) {
      uVar10 = (ulonglong)*(byte *)((longlong)puVar2 + 3);
    }
    lVar27 = (longlong)*param_5 - ((longlong)puVar2 + 4);
    uVar9 = uVar18;
    if (0 < lVar27) {
      uVar9 = (ulonglong)*(byte *)((longlong)puVar2 + 4);
    }
    uVar12 = uVar18;
    if (lVar27 != 1 && -1 < lVar27 + -1) {
      uVar12 = (ulonglong)*(byte *)((longlong)puVar2 + 5);
    }
    uVar13 = uVar18;
    if (lVar27 != 2 && -1 < lVar27 + -2) {
      uVar13 = (ulonglong)*(byte *)((longlong)puVar2 + 6);
    }
    uVar16 = uVar18;
    if (lVar27 != 3 && -1 < lVar27 + -3) {
      uVar16 = (ulonglong)*(byte *)((longlong)puVar2 + 7);
    }
    uVar16 = ((((((uVar17 << 8 | uVar8) << 8 | uVar21) << 8 | uVar10) << 8 | uVar9) << 8 | uVar12)
              << 8 | uVar13) << 8 | uVar16;
  }
  else {
    uVar17 = *puVar2;
    uVar16 = uVar17 >> 0x38 | (uVar17 & 0xff000000000000) >> 0x28 |
             (uVar17 & 0xff0000000000) >> 0x18 | (uVar17 & 0xff00000000) >> 8 |
             (uVar17 & 0xff000000) << 8 | (uVar17 & 0xff0000) << 0x18 | (uVar17 & 0xff00) << 0x28 |
             uVar17 << 0x38;
  }
  local_res10 = 0;
  local_68 = uVar22 * 4;
  *param_2 = *param_2 | uVar16 >> (0x3fU - (char)*param_3 & 0x3f);
  *param_4 = *param_4 + lVar24;
  *param_3 = *param_3 + lVar24 * -8;
  _Dst = param_1->codeLenTable;
  memset(_Dst,0,(ulonglong)uVar15);
  uVar3 = *param_2;
  *param_2 = uVar3 * 2;
  lVar30 = *param_3 + 1;
  *param_3 = lVar30;
  uVar22 = 0;
  if ((longlong)uVar3 < 0) {
    bVar31 = uVar15 != 0;
    goto LAB_14f395807;
  }
  uVar17 = *param_2;
  uVar8 = uVar18;
  if (uVar17 == 0) {
LAB_14f395390:
    do {
      while( true ) {
        puVar2 = (ulonglong *)*param_4;
        lVar24 = (longlong)*param_5 - (longlong)puVar2;
        lVar27 = lVar30 >> 3;
        if (lVar24 < 8) {
          uVar17 = uVar18;
          if (0 < lVar24) {
            uVar17 = (ulonglong)(byte)*puVar2;
          }
          uVar21 = uVar18;
          if (lVar24 != 1 && -1 < lVar24 + -1) {
            uVar21 = (ulonglong)*(byte *)((longlong)puVar2 + 1);
          }
          uVar10 = uVar18;
          if (lVar24 != 2 && -1 < lVar24 + -2) {
            uVar10 = (ulonglong)*(byte *)((longlong)puVar2 + 2);
          }
          uVar9 = uVar18;
          if (lVar24 != 3 && -1 < lVar24 + -3) {
            uVar9 = (ulonglong)*(byte *)((longlong)puVar2 + 3);
          }
          lVar24 = (longlong)*param_5 - ((longlong)puVar2 + 4);
          uVar12 = uVar18;
          if (0 < lVar24) {
            uVar12 = (ulonglong)*(byte *)((longlong)puVar2 + 4);
          }
          uVar13 = uVar18;
          if (lVar24 != 1 && -1 < lVar24 + -1) {
            uVar13 = (ulonglong)*(byte *)((longlong)puVar2 + 5);
          }
          uVar16 = uVar18;
          if (lVar24 != 2 && -1 < lVar24 + -2) {
            uVar16 = (ulonglong)*(byte *)((longlong)puVar2 + 6);
          }
          uVar28 = uVar18;
          if (lVar24 != 3 && -1 < lVar24 + -3) {
            uVar28 = (ulonglong)*(byte *)((longlong)puVar2 + 7);
          }
          lVar30 = *param_3;
          uVar28 = ((((((uVar17 << 8 | uVar21) << 8 | uVar10) << 8 | uVar9) << 8 | uVar12) << 8 |
                    uVar13) << 8 | uVar16) << 8 | uVar28;
        }
        else {
          uVar17 = *puVar2;
          uVar28 = uVar17 >> 0x38 | (uVar17 & 0xff000000000000) >> 0x28 |
                   (uVar17 & 0xff0000000000) >> 0x18 | (uVar17 & 0xff00000000) >> 8 |
                   (uVar17 & 0xff000000) << 8 | (uVar17 & 0xff0000) << 0x18 |
                   (uVar17 & 0xff00) << 0x28 | uVar17 << 0x38;
        }
        *param_2 = *param_2 | uVar28 >> (0x3fU - (char)lVar30 & 0x3f);
        *param_4 = *param_4 + lVar27;
        lVar24 = *param_3 + lVar27 * -8;
        *param_3 = lVar24;
        uVar17 = *param_2;
        iVar6 = (int)uVar8;
        if (uVar17 == 0) break;
        lVar24 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar24 == 0; lVar24 = lVar24 + -1) {
          }
        }
        uVar26 = -(int)lVar24 + 0x3f;
        if (uVar26 < 0x1f) {
          uVar23 = -(int)lVar24 + 0x40;
          *param_2 = uVar17 << ((byte)uVar23 & 0x3f);
          *param_3 = *param_3 + (ulonglong)uVar23;
          lVar24 = *param_3;
          uVar26 = iVar6 + uVar26;
          uVar23 = uVar22;
          if (uVar26 != 0) {
            puVar2 = (ulonglong *)*param_4;
            lVar27 = (longlong)*param_5 - (longlong)puVar2;
            if (lVar27 < 8) {
              uVar17 = uVar18;
              if (0 < lVar27) {
                uVar17 = (ulonglong)(byte)*puVar2;
              }
              uVar8 = uVar18;
              if (lVar27 != 1 && -1 < lVar27 + -1) {
                uVar8 = (ulonglong)*(byte *)((longlong)puVar2 + 1);
              }
              uVar21 = uVar18;
              if (lVar27 != 2 && -1 < lVar27 + -2) {
                uVar21 = (ulonglong)*(byte *)((longlong)puVar2 + 2);
              }
              uVar10 = uVar18;
              if (lVar27 != 3 && -1 < lVar27 + -3) {
                uVar10 = (ulonglong)*(byte *)((longlong)puVar2 + 3);
              }
              lVar27 = (longlong)*param_5 - ((longlong)puVar2 + 4);
              uVar9 = uVar18;
              if (0 < lVar27) {
                uVar9 = (ulonglong)*(byte *)((longlong)puVar2 + 4);
              }
              uVar12 = uVar18;
              if (lVar27 != 1 && -1 < lVar27 + -1) {
                uVar12 = (ulonglong)*(byte *)((longlong)puVar2 + 5);
              }
              uVar13 = uVar18;
              if (lVar27 != 2 && -1 < lVar27 + -2) {
                uVar13 = (ulonglong)*(byte *)((longlong)puVar2 + 6);
              }
              uVar16 = uVar18;
              if (lVar27 != 3 && -1 < lVar27 + -3) {
                uVar16 = (ulonglong)*(byte *)((longlong)puVar2 + 7);
              }
              uVar16 = ((((((uVar17 << 8 | uVar8) << 8 | uVar21) << 8 | uVar10) << 8 | uVar9) << 8 |
                        uVar12) << 8 | uVar13) << 8 | uVar16;
            }
            else {
              uVar17 = *puVar2;
              uVar16 = uVar17 >> 0x38 | (uVar17 & 0xff000000000000) >> 0x28 |
                       (uVar17 & 0xff0000000000) >> 0x18 | (uVar17 & 0xff00000000) >> 8 |
                       (uVar17 & 0xff000000) << 8 | (uVar17 & 0xff0000) << 0x18 |
                       (uVar17 & 0xff00) << 0x28 | uVar17 << 0x38;
            }
            *param_2 = *param_2 | uVar16 >> (0x3fU - (char)lVar24 & 0x3f);
            bVar4 = (byte)uVar26;
            *param_4 = *param_4 + (lVar24 >> 3);
            *param_3 = *param_3 + (lVar24 >> 3) * -8;
            uVar17 = *param_2;
            *param_2 = uVar17 << (bVar4 & 0x3f);
            *param_3 = *param_3 + (ulonglong)uVar26;
            lVar24 = *param_3;
            uVar23 = ((1 << (bVar4 & 0x1f)) + (int)(uVar17 >> (0x40 - bVar4 & 0x3f))) * 2 - 2;
          }
          goto LAB_14f3956a3;
        }
        *param_2 = uVar17 << 0x1f;
        *param_3 = *param_3 + 0x1f;
        lVar30 = *param_3;
        uVar8 = (ulonglong)(iVar6 + 0x1f);
      }
      *param_2 = 0;
      lVar24 = 0x3f - lVar24;
      lVar30 = *param_3 + lVar24;
      *param_3 = lVar30;
      uVar8 = (ulonglong)(uint)(iVar6 + (int)lVar24);
    } while (*param_4 < *param_5);
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
      (*g_fp_OodleCore_Plugin_Printf)
                (0,"v:\\devel\\projects\\oodle2\\core\\rrvarbitcodes.cpp",0x45,
                 "OODLE ERROR : corruption : ReadUnary past end\n");
    }
    ooLogErrorPost();
    lVar24 = *param_3;
    uVar23 = uVar20;
LAB_14f3956a3:
    puVar2 = (ulonglong *)*param_4;
    lVar27 = (longlong)*param_5 - (longlong)puVar2;
    if (lVar27 < 8) {
      uVar17 = uVar18;
      if (0 < lVar27) {
        uVar17 = (ulonglong)(byte)*puVar2;
      }
      uVar8 = uVar18;
      if (lVar27 != 1 && -1 < lVar27 + -1) {
        uVar8 = (ulonglong)*(byte *)((longlong)puVar2 + 1);
      }
      uVar21 = uVar18;
      if (lVar27 != 2 && -1 < lVar27 + -2) {
        uVar21 = (ulonglong)*(byte *)((longlong)puVar2 + 2);
      }
      uVar10 = uVar18;
      if (lVar27 != 3 && -1 < lVar27 + -3) {
        uVar10 = (ulonglong)*(byte *)((longlong)puVar2 + 3);
      }
      lVar27 = (longlong)*param_5 - ((longlong)puVar2 + 4);
      uVar9 = uVar18;
      if (0 < lVar27) {
        uVar9 = (ulonglong)*(byte *)((longlong)puVar2 + 4);
      }
      uVar12 = uVar18;
      if (lVar27 != 1 && -1 < lVar27 + -1) {
        uVar12 = (ulonglong)*(byte *)((longlong)puVar2 + 5);
      }
      uVar13 = uVar18;
      if (lVar27 != 2 && -1 < lVar27 + -2) {
        uVar13 = (ulonglong)*(byte *)((longlong)puVar2 + 6);
      }
      uVar16 = uVar18;
      if (lVar27 != 3 && -1 < lVar27 + -3) {
        uVar16 = (ulonglong)*(byte *)((longlong)puVar2 + 7);
      }
      uVar16 = ((((((uVar17 << 8 | uVar8) << 8 | uVar21) << 8 | uVar10) << 8 | uVar9) << 8 | uVar12)
                << 8 | uVar13) << 8 | uVar16;
    }
    else {
      uVar17 = *puVar2;
      uVar16 = uVar17 >> 0x38 | (uVar17 & 0xff000000000000) >> 0x28 |
               (uVar17 & 0xff0000000000) >> 0x18 | (uVar17 & 0xff00000000) >> 8 |
               (uVar17 & 0xff000000) << 8 | (uVar17 & 0xff0000) << 0x18 | (uVar17 & 0xff00) << 0x28
               | uVar17 << 0x38;
    }
    *param_2 = *param_2 | uVar16 >> (0x3fU - (char)lVar24 & 0x3f);
    *param_4 = *param_4 + (lVar24 >> 3);
    *param_3 = *param_3 + (lVar24 >> 3) * -8;
    uVar3 = *param_2;
    *param_2 = uVar3 * 2;
    *param_3 = *param_3 + 1;
    iVar6 = uVar23 - (int)((longlong)uVar3 >> 0x3f);
  }
  else {
    lVar24 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar24 == 0; lVar24 = lVar24 + -1) {
      }
    }
    iVar6 = (0x40 - (int)lVar24) * 2;
    if (0x1e < iVar6) goto LAB_14f395390;
    *param_2 = uVar17 << ((byte)iVar6 & 0x3f);
    *param_3 = *param_3 + (longlong)iVar6;
    iVar6 = (int)(uVar17 >> (0x40 - (byte)iVar6 & 0x3f)) + -2;
  }
  lVar30 = *param_3;
  local_res10 = iVar6 + 1;
  bVar31 = local_res10 < uVar15;
  if (uVar15 < local_res10) {
    ooLogErrorPre();
    if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
      iVar19 = 0x3bf;
LAB_14f3969f7:
      pcVar29 = "OODLE ERROR : LZ corruption : i + RunLen > packNumSymbols \n";
LAB_14f3969fe:
      (*g_fp_OodleCore_Plugin_Printf)
                (0,"v:\\devel\\projects\\oodle2\\core\\rrhuffmandecode.cpp",iVar19,pcVar29);
    }
LAB_14f396a09:
    ooLogErrorPost();
    return 0;
  }
LAB_14f395807:
  uVar23 = 1;
  if (bVar31) {
    bVar4 = (byte)(uVar1 >> 0x38);
    do {
      puVar2 = (ulonglong *)*param_4;
      lVar24 = (longlong)*param_5 - (longlong)puVar2;
      if (lVar24 < 8) {
        uVar17 = uVar18;
        if (0 < lVar24) {
          uVar17 = (ulonglong)(byte)*puVar2;
        }
        uVar8 = uVar18;
        if (lVar24 != 1 && -1 < lVar24 + -1) {
          uVar8 = (ulonglong)*(byte *)((longlong)puVar2 + 1);
        }
        uVar21 = uVar18;
        if (lVar24 != 2 && -1 < lVar24 + -2) {
          uVar21 = (ulonglong)*(byte *)((longlong)puVar2 + 2);
        }
        uVar10 = uVar18;
        if (lVar24 != 3 && -1 < lVar24 + -3) {
          uVar10 = (ulonglong)*(byte *)((longlong)puVar2 + 3);
        }
        lVar24 = (longlong)*param_5 - ((longlong)puVar2 + 4);
        uVar9 = uVar18;
        if (0 < lVar24) {
          uVar9 = (ulonglong)*(byte *)((longlong)puVar2 + 4);
        }
        uVar12 = uVar18;
        if (lVar24 != 1 && -1 < lVar24 + -1) {
          uVar12 = (ulonglong)*(byte *)((longlong)puVar2 + 5);
        }
        uVar13 = uVar18;
        if (lVar24 != 2 && -1 < lVar24 + -2) {
          uVar13 = (ulonglong)*(byte *)((longlong)puVar2 + 6);
        }
        uVar16 = uVar18;
        if (lVar24 != 3 && -1 < lVar24 + -3) {
          uVar16 = (ulonglong)*(byte *)((longlong)puVar2 + 7);
        }
        uVar16 = ((((((uVar17 << 8 | uVar8) << 8 | uVar21) << 8 | uVar10) << 8 | uVar9) << 8 |
                  uVar12) << 8 | uVar13) << 8 | uVar16;
      }
      else {
        uVar17 = *puVar2;
        uVar16 = uVar17 >> 0x38 | (uVar17 & 0xff000000000000) >> 0x28 |
                 (uVar17 & 0xff0000000000) >> 0x18 | (uVar17 & 0xff00000000) >> 8 |
                 (uVar17 & 0xff000000) << 8 | (uVar17 & 0xff0000) << 0x18 |
                 (uVar17 & 0xff00) << 0x28 | uVar17 << 0x38;
      }
      *param_2 = *param_2 | uVar16 >> (0x3fU - (char)lVar30 & 0x3f);
      *param_4 = *param_4 + (lVar30 >> 3);
      lVar30 = *param_3 + (lVar30 >> 3) * -8;
      *param_3 = lVar30;
      uVar17 = *param_2;
      uVar8 = uVar18;
      if (uVar17 == 0) {
LAB_14f395990:
        do {
          while( true ) {
            puVar2 = (ulonglong *)*param_4;
            lVar24 = (longlong)*param_5 - (longlong)puVar2;
            lVar27 = lVar30 >> 3;
            if (lVar24 < 8) {
              uVar17 = uVar18;
              if (0 < lVar24) {
                uVar17 = (ulonglong)(byte)*puVar2;
              }
              uVar21 = uVar18;
              if (lVar24 != 1 && -1 < lVar24 + -1) {
                uVar21 = (ulonglong)*(byte *)((longlong)puVar2 + 1);
              }
              uVar10 = uVar18;
              if (lVar24 != 2 && -1 < lVar24 + -2) {
                uVar10 = (ulonglong)*(byte *)((longlong)puVar2 + 2);
              }
              uVar9 = uVar18;
              if (lVar24 != 3 && -1 < lVar24 + -3) {
                uVar9 = (ulonglong)*(byte *)((longlong)puVar2 + 3);
              }
              lVar24 = (longlong)*param_5 - ((longlong)puVar2 + 4);
              uVar12 = uVar18;
              if (0 < lVar24) {
                uVar12 = (ulonglong)*(byte *)((longlong)puVar2 + 4);
              }
              uVar13 = uVar18;
              if (lVar24 != 1 && -1 < lVar24 + -1) {
                uVar13 = (ulonglong)*(byte *)((longlong)puVar2 + 5);
              }
              uVar16 = uVar18;
              if (lVar24 != 2 && -1 < lVar24 + -2) {
                uVar16 = (ulonglong)*(byte *)((longlong)puVar2 + 6);
              }
              uVar28 = uVar18;
              if (lVar24 != 3 && -1 < lVar24 + -3) {
                uVar28 = (ulonglong)*(byte *)((longlong)puVar2 + 7);
              }
              lVar30 = *param_3;
              uVar28 = ((((((uVar17 << 8 | uVar21) << 8 | uVar10) << 8 | uVar9) << 8 | uVar12) << 8
                        | uVar13) << 8 | uVar16) << 8 | uVar28;
            }
            else {
              uVar17 = *puVar2;
              uVar28 = uVar17 >> 0x38 | (uVar17 & 0xff000000000000) >> 0x28 |
                       (uVar17 & 0xff0000000000) >> 0x18 | (uVar17 & 0xff00000000) >> 8 |
                       (uVar17 & 0xff000000) << 8 | (uVar17 & 0xff0000) << 0x18 |
                       (uVar17 & 0xff00) << 0x28 | uVar17 << 0x38;
            }
            *param_2 = *param_2 | uVar28 >> (0x3fU - (char)lVar30 & 0x3f);
            *param_4 = *param_4 + lVar27;
            lVar24 = *param_3 + lVar27 * -8;
            *param_3 = lVar24;
            uVar17 = *param_2;
            iVar6 = (int)uVar8;
            uVar23 = uVar22;
            if (uVar17 == 0) break;
            lVar24 = 0x3f;
            if (uVar17 != 0) {
              for (; uVar17 >> lVar24 == 0; lVar24 = lVar24 + -1) {
              }
            }
            uVar26 = -(int)lVar24 + 0x3f;
            if (uVar26 < 0x1f) {
              uVar11 = -(int)lVar24 + 0x40;
              *param_2 = uVar17 << ((byte)uVar11 & 0x3f);
              *param_3 = *param_3 + (ulonglong)uVar11;
              lVar24 = *param_3;
              uVar26 = iVar6 + uVar26;
              if (uVar26 != 0) {
                puVar2 = (ulonglong *)*param_4;
                lVar27 = (longlong)*param_5 - (longlong)puVar2;
                if (lVar27 < 8) {
                  uVar17 = uVar18;
                  if (0 < lVar27) {
                    uVar17 = (ulonglong)(byte)*puVar2;
                  }
                  uVar8 = uVar18;
                  if (lVar27 != 1 && -1 < lVar27 + -1) {
                    uVar8 = (ulonglong)*(byte *)((longlong)puVar2 + 1);
                  }
                  uVar21 = uVar18;
                  if (lVar27 != 2 && -1 < lVar27 + -2) {
                    uVar21 = (ulonglong)*(byte *)((longlong)puVar2 + 2);
                  }
                  uVar10 = uVar18;
                  if (lVar27 != 3 && -1 < lVar27 + -3) {
                    uVar10 = (ulonglong)*(byte *)((longlong)puVar2 + 3);
                  }
                  lVar27 = (longlong)*param_5 - ((longlong)puVar2 + 4);
                  uVar9 = uVar18;
                  if (0 < lVar27) {
                    uVar9 = (ulonglong)*(byte *)((longlong)puVar2 + 4);
                  }
                  uVar12 = uVar18;
                  if (lVar27 != 1 && -1 < lVar27 + -1) {
                    uVar12 = (ulonglong)*(byte *)((longlong)puVar2 + 5);
                  }
                  uVar13 = uVar18;
                  if (lVar27 != 2 && -1 < lVar27 + -2) {
                    uVar13 = (ulonglong)*(byte *)((longlong)puVar2 + 6);
                  }
                  uVar16 = uVar18;
                  if (lVar27 != 3 && -1 < lVar27 + -3) {
                    uVar16 = (ulonglong)*(byte *)((longlong)puVar2 + 7);
                  }
                  uVar16 = ((((((uVar17 << 8 | uVar8) << 8 | uVar21) << 8 | uVar10) << 8 | uVar9) <<
                             8 | uVar12) << 8 | uVar13) << 8 | uVar16;
                }
                else {
                  uVar17 = *puVar2;
                  uVar16 = uVar17 >> 0x38 | (uVar17 & 0xff000000000000) >> 0x28 |
                           (uVar17 & 0xff0000000000) >> 0x18 | (uVar17 & 0xff00000000) >> 8 |
                           (uVar17 & 0xff000000) << 8 | (uVar17 & 0xff0000) << 0x18 |
                           (uVar17 & 0xff00) << 0x28 | uVar17 << 0x38;
                }
                *param_2 = *param_2 | uVar16 >> (0x3fU - (char)lVar24 & 0x3f);
                bVar5 = (byte)uVar26;
                *param_4 = *param_4 + (lVar24 >> 3);
                *param_3 = *param_3 + (lVar24 >> 3) * -8;
                uVar17 = *param_2;
                *param_2 = uVar17 << (bVar5 & 0x3f);
                *param_3 = *param_3 + (ulonglong)uVar26;
                lVar24 = *param_3;
                uVar23 = ((1 << (bVar5 & 0x1f)) + (int)(uVar17 >> (0x40 - bVar5 & 0x3f))) * 2 - 2;
              }
              goto LAB_14f395ca6;
            }
            *param_2 = uVar17 << 0x1f;
            *param_3 = *param_3 + 0x1f;
            lVar30 = *param_3;
            uVar8 = (ulonglong)(iVar6 + 0x1f);
          }
          *param_2 = 0;
          lVar24 = 0x3f - lVar24;
          lVar30 = *param_3 + lVar24;
          *param_3 = lVar30;
          uVar8 = (ulonglong)(uint)(iVar6 + (int)lVar24);
        } while (*param_4 < *param_5);
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          (*g_fp_OodleCore_Plugin_Printf)
                    (0,"v:\\devel\\projects\\oodle2\\core\\rrvarbitcodes.cpp",0x45,
                     "OODLE ERROR : corruption : ReadUnary past end\n");
        }
        ooLogErrorPost();
        lVar24 = *param_3;
LAB_14f395ca6:
        puVar2 = (ulonglong *)*param_4;
        lVar27 = (longlong)*param_5 - (longlong)puVar2;
        if (lVar27 < 8) {
          uVar17 = uVar18;
          if (0 < lVar27) {
            uVar17 = (ulonglong)(byte)*puVar2;
          }
          uVar8 = uVar18;
          if (lVar27 != 1 && -1 < lVar27 + -1) {
            uVar8 = (ulonglong)*(byte *)((longlong)puVar2 + 1);
          }
          uVar21 = uVar18;
          if (lVar27 != 2 && -1 < lVar27 + -2) {
            uVar21 = (ulonglong)*(byte *)((longlong)puVar2 + 2);
          }
          uVar10 = uVar18;
          if (lVar27 != 3 && -1 < lVar27 + -3) {
            uVar10 = (ulonglong)*(byte *)((longlong)puVar2 + 3);
          }
          lVar27 = (longlong)*param_5 - ((longlong)puVar2 + 4);
          uVar9 = uVar18;
          if (0 < lVar27) {
            uVar9 = (ulonglong)*(byte *)((longlong)puVar2 + 4);
          }
          uVar12 = uVar18;
          if (lVar27 != 1 && -1 < lVar27 + -1) {
            uVar12 = (ulonglong)*(byte *)((longlong)puVar2 + 5);
          }
          uVar13 = uVar18;
          if (lVar27 != 2 && -1 < lVar27 + -2) {
            uVar13 = (ulonglong)*(byte *)((longlong)puVar2 + 6);
          }
          uVar16 = uVar18;
          if (lVar27 != 3 && -1 < lVar27 + -3) {
            uVar16 = (ulonglong)*(byte *)((longlong)puVar2 + 7);
          }
          uVar16 = ((((((uVar17 << 8 | uVar8) << 8 | uVar21) << 8 | uVar10) << 8 | uVar9) << 8 |
                    uVar12) << 8 | uVar13) << 8 | uVar16;
        }
        else {
          uVar17 = *puVar2;
          uVar16 = uVar17 >> 0x38 | (uVar17 & 0xff000000000000) >> 0x28 |
                   (uVar17 & 0xff0000000000) >> 0x18 | (uVar17 & 0xff00000000) >> 8 |
                   (uVar17 & 0xff000000) << 8 | (uVar17 & 0xff0000) << 0x18 |
                   (uVar17 & 0xff00) << 0x28 | uVar17 << 0x38;
        }
        *param_2 = *param_2 | uVar16 >> (0x3fU - (char)lVar24 & 0x3f);
        *param_4 = *param_4 + (lVar24 >> 3);
        *param_3 = *param_3 + (lVar24 >> 3) * -8;
        uVar3 = *param_2;
        *param_2 = uVar3 * 2;
        *param_3 = *param_3 + 1;
        iVar6 = uVar23 - (int)((longlong)uVar3 >> 0x3f);
      }
      else {
        lVar24 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar24 == 0; lVar24 = lVar24 + -1) {
          }
        }
        iVar6 = (0x40 - (int)lVar24) * 2;
        if (0x1e < iVar6) goto LAB_14f395990;
        *param_2 = uVar17 << ((byte)iVar6 & 0x3f);
        *param_3 = *param_3 + (longlong)iVar6;
        iVar6 = (int)(uVar17 >> (0x40 - (byte)iVar6 & 0x3f)) + -2;
      }
      uVar23 = iVar6 + 1;
      if (uVar15 - local_res10 < uVar23) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
        goto LAB_14f396a09;
        iVar19 = 0x3cc;
        goto LAB_14f3969f7;
      }
      puVar2 = (ulonglong *)*param_4;
      lVar27 = *param_3 >> 3;
      lVar24 = (longlong)*param_5 - (longlong)puVar2;
      if (lVar24 < 8) {
        uVar17 = uVar18;
        if (0 < lVar24) {
          uVar17 = (ulonglong)(byte)*puVar2;
        }
        uVar8 = uVar18;
        if (lVar24 != 1 && -1 < lVar24 + -1) {
          uVar8 = (ulonglong)*(byte *)((longlong)puVar2 + 1);
        }
        uVar21 = uVar18;
        if (lVar24 != 2 && -1 < lVar24 + -2) {
          uVar21 = (ulonglong)*(byte *)((longlong)puVar2 + 2);
        }
        uVar10 = uVar18;
        if (lVar24 != 3 && -1 < lVar24 + -3) {
          uVar10 = (ulonglong)*(byte *)((longlong)puVar2 + 3);
        }
        lVar24 = (longlong)*param_5 - ((longlong)puVar2 + 4);
        uVar9 = uVar18;
        if (0 < lVar24) {
          uVar9 = (ulonglong)*(byte *)((longlong)puVar2 + 4);
        }
        uVar12 = uVar18;
        if (lVar24 != 1 && -1 < lVar24 + -1) {
          uVar12 = (ulonglong)*(byte *)((longlong)puVar2 + 5);
        }
        uVar13 = uVar18;
        if (lVar24 != 2 && -1 < lVar24 + -2) {
          uVar13 = (ulonglong)*(byte *)((longlong)puVar2 + 6);
        }
        uVar16 = uVar18;
        if (lVar24 != 3 && -1 < lVar24 + -3) {
          uVar16 = (ulonglong)*(byte *)((longlong)puVar2 + 7);
        }
        uVar16 = ((((((uVar17 << 8 | uVar8) << 8 | uVar21) << 8 | uVar10) << 8 | uVar9) << 8 |
                  uVar12) << 8 | uVar13) << 8 | uVar16;
      }
      else {
        uVar17 = *puVar2;
        uVar16 = uVar17 >> 0x38 | (uVar17 & 0xff000000000000) >> 0x28 |
                 (uVar17 & 0xff0000000000) >> 0x18 | (uVar17 & 0xff00000000) >> 8 |
                 (uVar17 & 0xff000000) << 8 | (uVar17 & 0xff0000) << 0x18 |
                 (uVar17 & 0xff00) << 0x28 | uVar17 << 0x38;
      }
      *param_2 = *param_2 | uVar16 >> (0x3fU - (char)*param_3 & 0x3f);
      *param_4 = *param_4 + lVar27;
      lVar24 = *param_3 + lVar27 * -8;
      *param_3 = lVar24;
      uVar17 = uVar18;
      if (uVar23 != 0) {
        do {
          uVar8 = *param_2;
          if (uVar8 == 0) {
            iVar6 = 0x40;
          }
          else {
            lVar27 = 0x3f;
            if (uVar8 != 0) {
              for (; uVar8 >> lVar27 == 0; lVar27 = lVar27 + -1) {
              }
            }
            iVar6 = 0x3f - (int)lVar27;
          }
          uVar26 = (uint)(uVar1 >> 0x3e) + 1 + iVar6;
          uVar21 = uVar18;
          if (uVar26 < 0x1f) {
            iVar14 = (int)(uVar8 >> (0x40 - (byte)uVar26 & 0x3f));
            *param_2 = uVar8 << ((byte)uVar26 & 0x3f);
            iVar6 = iVar6 + -1;
            *param_3 = *param_3 + (ulonglong)uVar26;
          }
          else {
            do {
              while( true ) {
                puVar2 = (ulonglong *)*param_4;
                lVar25 = (longlong)*param_5 - (longlong)puVar2;
                lVar27 = lVar24 >> 3;
                if (lVar25 < 8) {
                  uVar8 = uVar18;
                  if (0 < lVar25) {
                    uVar8 = (ulonglong)(byte)*puVar2;
                  }
                  uVar10 = uVar18;
                  if (lVar25 != 1 && -1 < lVar25 + -1) {
                    uVar10 = (ulonglong)*(byte *)((longlong)puVar2 + 1);
                  }
                  uVar9 = uVar18;
                  if (lVar25 != 2 && -1 < lVar25 + -2) {
                    uVar9 = (ulonglong)*(byte *)((longlong)puVar2 + 2);
                  }
                  uVar12 = uVar18;
                  if (lVar25 != 3 && -1 < lVar25 + -3) {
                    uVar12 = (ulonglong)*(byte *)((longlong)puVar2 + 3);
                  }
                  lVar24 = (longlong)*param_5 - ((longlong)puVar2 + 4);
                  uVar13 = uVar18;
                  if (0 < lVar24) {
                    uVar13 = (ulonglong)*(byte *)((longlong)puVar2 + 4);
                  }
                  uVar16 = uVar18;
                  if (lVar24 != 1 && -1 < lVar24 + -1) {
                    uVar16 = (ulonglong)*(byte *)((longlong)puVar2 + 5);
                  }
                  uVar28 = uVar18;
                  if (lVar24 != 2 && -1 < lVar24 + -2) {
                    uVar28 = (ulonglong)*(byte *)((longlong)puVar2 + 6);
                  }
                  uVar7 = uVar18;
                  if (lVar24 != 3 && -1 < lVar24 + -3) {
                    uVar7 = (ulonglong)*(byte *)((longlong)puVar2 + 7);
                  }
                  lVar24 = *param_3;
                  uVar7 = ((((((uVar8 << 8 | uVar10) << 8 | uVar9) << 8 | uVar12) << 8 | uVar13) <<
                            8 | uVar16) << 8 | uVar28) << 8 | uVar7;
                }
                else {
                  uVar8 = *puVar2;
                  uVar7 = uVar8 >> 0x38 | (uVar8 & 0xff000000000000) >> 0x28 |
                          (uVar8 & 0xff0000000000) >> 0x18 | (uVar8 & 0xff00000000) >> 8 |
                          (uVar8 & 0xff000000) << 8 | (uVar8 & 0xff0000) << 0x18 |
                          (uVar8 & 0xff00) << 0x28 | uVar8 << 0x38;
                }
                *param_2 = *param_2 | uVar7 >> (0x3fU - (char)lVar24 & 0x3f);
                *param_4 = *param_4 + lVar27;
                lVar27 = *param_3 + lVar27 * -8;
                *param_3 = lVar27;
                uVar8 = *param_2;
                iVar6 = (int)uVar21;
                if (uVar8 == 0) break;
                lVar24 = 0x3f;
                if (uVar8 != 0) {
                  for (; uVar8 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                  }
                }
                uVar26 = -(int)lVar24 + 0x3f;
                if (uVar26 < 0x1f) {
                  uVar11 = -(int)lVar24 + 0x40;
                  iVar6 = uVar26 + iVar6;
                  *param_2 = uVar8 << ((byte)uVar11 & 0x3f);
                  *param_3 = *param_3 + (ulonglong)uVar11;
                  goto LAB_14f39619b;
                }
                *param_2 = uVar8 << 0x1f;
                *param_3 = *param_3 + 0x1f;
                lVar24 = *param_3;
                uVar21 = (ulonglong)(iVar6 + 0x1f);
              }
              *param_2 = 0;
              lVar27 = 0x3f - lVar27;
              lVar24 = *param_3 + lVar27;
              *param_3 = lVar24;
              uVar21 = (ulonglong)(uint)(iVar6 + (int)lVar27);
            } while (*param_4 < *param_5);
            ooLogErrorPre();
            if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
            {
              (*g_fp_OodleCore_Plugin_Printf)
                        (0,"v:\\devel\\projects\\oodle2\\core\\rrvarbitcodes.cpp",0x45,
                         "OODLE ERROR : corruption : ReadUnary past end\n");
            }
            ooLogErrorPost();
            iVar6 = iVar19;
LAB_14f39619b:
            puVar2 = (ulonglong *)*param_4;
            lVar27 = *param_3 >> 3;
            lVar24 = (longlong)*param_5 - (longlong)puVar2;
            if (lVar24 < 8) {
              uVar8 = uVar18;
              if (0 < lVar24) {
                uVar8 = (ulonglong)(byte)*puVar2;
              }
              uVar21 = uVar18;
              if (lVar24 != 1 && -1 < lVar24 + -1) {
                uVar21 = (ulonglong)*(byte *)((longlong)puVar2 + 1);
              }
              uVar10 = uVar18;
              if (lVar24 != 2 && -1 < lVar24 + -2) {
                uVar10 = (ulonglong)*(byte *)((longlong)puVar2 + 2);
              }
              uVar9 = uVar18;
              if (lVar24 != 3 && -1 < lVar24 + -3) {
                uVar9 = (ulonglong)*(byte *)((longlong)puVar2 + 3);
              }
              lVar24 = (longlong)*param_5 - ((longlong)puVar2 + 4);
              uVar12 = uVar18;
              if (0 < lVar24) {
                uVar12 = (ulonglong)*(byte *)((longlong)puVar2 + 4);
              }
              uVar13 = uVar18;
              if (lVar24 != 1 && -1 < lVar24 + -1) {
                uVar13 = (ulonglong)*(byte *)((longlong)puVar2 + 5);
              }
              uVar16 = uVar18;
              if (lVar24 != 2 && -1 < lVar24 + -2) {
                uVar16 = (ulonglong)*(byte *)((longlong)puVar2 + 6);
              }
              uVar28 = uVar18;
              if (lVar24 != 3 && -1 < lVar24 + -3) {
                uVar28 = (ulonglong)*(byte *)((longlong)puVar2 + 7);
              }
              uVar28 = ((((((uVar8 << 8 | uVar21) << 8 | uVar10) << 8 | uVar9) << 8 | uVar12) << 8 |
                        uVar13) << 8 | uVar16) << 8 | uVar28;
            }
            else {
              uVar8 = *puVar2;
              uVar28 = uVar8 >> 0x38 | (uVar8 & 0xff000000000000) >> 0x28 |
                       (uVar8 & 0xff0000000000) >> 0x18 | (uVar8 & 0xff00000000) >> 8 |
                       (uVar8 & 0xff000000) << 8 | (uVar8 & 0xff0000) << 0x18 |
                       (uVar8 & 0xff00) << 0x28 | uVar8 << 0x38;
            }
            *param_2 = *param_2 | uVar28 >> (0x3fU - (char)*param_3 & 0x3f);
            *param_4 = *param_4 + lVar27;
            *param_3 = *param_3 + lVar27 * -8;
            iVar14 = (int)((*param_2 >> 1) >> (0x3f - (bVar4 >> 6) & 0x3f));
            *param_2 = *param_2 << (bVar4 >> 6);
            *param_3 = *param_3 + (uVar1 >> 0x3e);
          }
          puVar2 = (ulonglong *)*param_4;
          uVar26 = (iVar6 << (bVar4 >> 6)) + iVar14;
          lVar24 = *param_3 >> 3;
          lVar27 = (longlong)*param_5 - (longlong)puVar2;
          if (lVar27 < 8) {
            uVar8 = uVar18;
            if (0 < lVar27) {
              uVar8 = (ulonglong)(byte)*puVar2;
            }
            uVar21 = uVar18;
            if (lVar27 != 1 && -1 < lVar27 + -1) {
              uVar21 = (ulonglong)*(byte *)((longlong)puVar2 + 1);
            }
            uVar10 = uVar18;
            if (lVar27 != 2 && -1 < lVar27 + -2) {
              uVar10 = (ulonglong)*(byte *)((longlong)puVar2 + 2);
            }
            uVar9 = uVar18;
            if (lVar27 != 3 && -1 < lVar27 + -3) {
              uVar9 = (ulonglong)*(byte *)((longlong)puVar2 + 3);
            }
            lVar27 = (longlong)*param_5 - ((longlong)puVar2 + 4);
            uVar12 = uVar18;
            if (0 < lVar27) {
              uVar12 = (ulonglong)*(byte *)((longlong)puVar2 + 4);
            }
            uVar13 = uVar18;
            if (lVar27 != 1 && -1 < lVar27 + -1) {
              uVar13 = (ulonglong)*(byte *)((longlong)puVar2 + 5);
            }
            uVar16 = uVar18;
            if (lVar27 != 2 && -1 < lVar27 + -2) {
              uVar16 = (ulonglong)*(byte *)((longlong)puVar2 + 6);
            }
            uVar28 = uVar18;
            if (lVar27 != 3 && -1 < lVar27 + -3) {
              uVar28 = (ulonglong)*(byte *)((longlong)puVar2 + 7);
            }
            uVar28 = ((((((uVar8 << 8 | uVar21) << 8 | uVar10) << 8 | uVar9) << 8 | uVar12) << 8 |
                      uVar13) << 8 | uVar16) << 8 | uVar28;
          }
          else {
            uVar8 = *puVar2;
            uVar28 = uVar8 >> 0x38 | (uVar8 & 0xff000000000000) >> 0x28 |
                     (uVar8 & 0xff0000000000) >> 0x18 | (uVar8 & 0xff00000000) >> 8 |
                     (uVar8 & 0xff000000) << 8 | (uVar8 & 0xff0000) << 0x18 |
                     (uVar8 & 0xff00) << 0x28 | uVar8 << 0x38;
          }
          *param_2 = *param_2 | uVar28 >> (0x3fU - (char)*param_3 & 0x3f);
          *param_4 = *param_4 + lVar24;
          lVar24 = *param_3 + lVar24 * -8;
          iVar6 = (local_68 + 2 >> 2) + (uVar26 >> 1 ^ -(uVar26 & 1));
          *param_3 = lVar24;
          if (0xf < iVar6 - 1U) {
            ooLogErrorPre();
            if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
            goto LAB_14f396a09;
            pcVar29 = 
            "OODLE ERROR : LZ corruption : curCodeLen < 1 || curCodeLen > RR_HUFFMAN_MAX_CODELEN_LIMIT ) \n"
            ;
            iVar19 = 0x3de;
            goto LAB_14f3969fe;
          }
          uVar26 = (int)uVar17 + 1;
          uVar17 = (ulonglong)uVar26;
          local_68 = (local_68 * 3 + 2 >> 2) + iVar6;
          _Dst[local_res10] = (uchar)iVar6;
          local_res10 = local_res10 + 1;
          param_1->numCodesOfLen[iVar6] = param_1->numCodesOfLen[iVar6] + 1;
        } while (uVar26 < uVar23);
      }
      local_res20 = local_res20 + uVar23;
      uVar23 = local_res10;
      if (uVar15 <= local_res10) break;
      uVar17 = *param_2;
      uVar8 = uVar18;
      if (uVar17 == 0) {
LAB_14f3964b0:
        do {
          while( true ) {
            puVar2 = (ulonglong *)*param_4;
            lVar27 = (longlong)*param_5 - (longlong)puVar2;
            lVar25 = lVar24 >> 3;
            if (lVar27 < 8) {
              uVar17 = uVar18;
              if (0 < lVar27) {
                uVar17 = (ulonglong)(byte)*puVar2;
              }
              uVar21 = uVar18;
              if (lVar27 != 1 && -1 < lVar27 + -1) {
                uVar21 = (ulonglong)*(byte *)((longlong)puVar2 + 1);
              }
              uVar10 = uVar18;
              if (lVar27 != 2 && -1 < lVar27 + -2) {
                uVar10 = (ulonglong)*(byte *)((longlong)puVar2 + 2);
              }
              uVar9 = uVar18;
              if (lVar27 != 3 && -1 < lVar27 + -3) {
                uVar9 = (ulonglong)*(byte *)((longlong)puVar2 + 3);
              }
              lVar24 = (longlong)*param_5 - ((longlong)puVar2 + 4);
              uVar12 = uVar18;
              if (0 < lVar24) {
                uVar12 = (ulonglong)*(byte *)((longlong)puVar2 + 4);
              }
              uVar13 = uVar18;
              if (lVar24 != 1 && -1 < lVar24 + -1) {
                uVar13 = (ulonglong)*(byte *)((longlong)puVar2 + 5);
              }
              uVar16 = uVar18;
              if (lVar24 != 2 && -1 < lVar24 + -2) {
                uVar16 = (ulonglong)*(byte *)((longlong)puVar2 + 6);
              }
              uVar28 = uVar18;
              if (lVar24 != 3 && -1 < lVar24 + -3) {
                uVar28 = (ulonglong)*(byte *)((longlong)puVar2 + 7);
              }
              lVar24 = *param_3;
              uVar28 = ((((((uVar17 << 8 | uVar21) << 8 | uVar10) << 8 | uVar9) << 8 | uVar12) << 8
                        | uVar13) << 8 | uVar16) << 8 | uVar28;
            }
            else {
              uVar17 = *puVar2;
              uVar28 = uVar17 >> 0x38 | (uVar17 & 0xff000000000000) >> 0x28 |
                       (uVar17 & 0xff0000000000) >> 0x18 | (uVar17 & 0xff00000000) >> 8 |
                       (uVar17 & 0xff000000) << 8 | (uVar17 & 0xff0000) << 0x18 |
                       (uVar17 & 0xff00) << 0x28 | uVar17 << 0x38;
            }
            *param_2 = *param_2 | uVar28 >> (0x3fU - (char)lVar24 & 0x3f);
            *param_4 = *param_4 + lVar25;
            lVar27 = *param_3 + lVar25 * -8;
            *param_3 = lVar27;
            uVar17 = *param_2;
            iVar14 = (int)uVar8;
            iVar6 = iVar19;
            if (uVar17 == 0) break;
            lVar24 = 0x3f;
            if (uVar17 != 0) {
              for (; uVar17 >> lVar24 == 0; lVar24 = lVar24 + -1) {
              }
            }
            uVar26 = -(int)lVar24 + 0x3f;
            if (uVar26 < 0x1f) {
              uVar11 = -(int)lVar24 + 0x40;
              *param_2 = uVar17 << ((byte)uVar11 & 0x3f);
              *param_3 = *param_3 + (ulonglong)uVar11;
              lVar24 = *param_3;
              uVar26 = iVar14 + uVar26;
              if (uVar26 != 0) {
                puVar2 = (ulonglong *)*param_4;
                lVar27 = (longlong)*param_5 - (longlong)puVar2;
                if (lVar27 < 8) {
                  uVar17 = uVar18;
                  if (0 < lVar27) {
                    uVar17 = (ulonglong)(byte)*puVar2;
                  }
                  uVar8 = uVar18;
                  if (lVar27 != 1 && -1 < lVar27 + -1) {
                    uVar8 = (ulonglong)*(byte *)((longlong)puVar2 + 1);
                  }
                  uVar21 = uVar18;
                  if (lVar27 != 2 && -1 < lVar27 + -2) {
                    uVar21 = (ulonglong)*(byte *)((longlong)puVar2 + 2);
                  }
                  uVar10 = uVar18;
                  if (lVar27 != 3 && -1 < lVar27 + -3) {
                    uVar10 = (ulonglong)*(byte *)((longlong)puVar2 + 3);
                  }
                  lVar27 = (longlong)*param_5 - ((longlong)puVar2 + 4);
                  uVar9 = uVar18;
                  if (0 < lVar27) {
                    uVar9 = (ulonglong)*(byte *)((longlong)puVar2 + 4);
                  }
                  uVar12 = uVar18;
                  if (lVar27 != 1 && -1 < lVar27 + -1) {
                    uVar12 = (ulonglong)*(byte *)((longlong)puVar2 + 5);
                  }
                  uVar13 = uVar18;
                  if (lVar27 != 2 && -1 < lVar27 + -2) {
                    uVar13 = (ulonglong)*(byte *)((longlong)puVar2 + 6);
                  }
                  uVar16 = uVar18;
                  if (lVar27 != 3 && -1 < lVar27 + -3) {
                    uVar16 = (ulonglong)*(byte *)((longlong)puVar2 + 7);
                  }
                  uVar16 = ((((((uVar17 << 8 | uVar8) << 8 | uVar21) << 8 | uVar10) << 8 | uVar9) <<
                             8 | uVar12) << 8 | uVar13) << 8 | uVar16;
                }
                else {
                  uVar17 = *puVar2;
                  uVar16 = uVar17 >> 0x38 | (uVar17 & 0xff000000000000) >> 0x28 |
                           (uVar17 & 0xff0000000000) >> 0x18 | (uVar17 & 0xff00000000) >> 8 |
                           (uVar17 & 0xff000000) << 8 | (uVar17 & 0xff0000) << 0x18 |
                           (uVar17 & 0xff00) << 0x28 | uVar17 << 0x38;
                }
                *param_2 = *param_2 | uVar16 >> (0x3fU - (char)lVar24 & 0x3f);
                bVar5 = (byte)uVar26;
                *param_4 = *param_4 + (lVar24 >> 3);
                *param_3 = *param_3 + (lVar24 >> 3) * -8;
                uVar17 = *param_2;
                *param_2 = uVar17 << (bVar5 & 0x3f);
                *param_3 = *param_3 + (ulonglong)uVar26;
                lVar24 = *param_3;
                iVar6 = ((1 << (bVar5 & 0x1f)) + (int)(uVar17 >> (0x40 - bVar5 & 0x3f))) * 2 + -2;
              }
              goto LAB_14f3967c5;
            }
            *param_2 = uVar17 << 0x1f;
            *param_3 = *param_3 + 0x1f;
            lVar24 = *param_3;
            uVar8 = (ulonglong)(iVar14 + 0x1f);
          }
          *param_2 = 0;
          lVar27 = 0x3f - lVar27;
          lVar24 = *param_3 + lVar27;
          *param_3 = lVar24;
          uVar8 = (ulonglong)(uint)(iVar14 + (int)lVar27);
        } while (*param_4 < *param_5);
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          (*g_fp_OodleCore_Plugin_Printf)
                    (0,"v:\\devel\\projects\\oodle2\\core\\rrvarbitcodes.cpp",0x45,
                     "OODLE ERROR : corruption : ReadUnary past end\n");
        }
        ooLogErrorPost();
        lVar24 = *param_3;
LAB_14f3967c5:
        puVar2 = (ulonglong *)*param_4;
        lVar27 = (longlong)*param_5 - (longlong)puVar2;
        if (lVar27 < 8) {
          uVar17 = uVar18;
          if (0 < lVar27) {
            uVar17 = (ulonglong)(byte)*puVar2;
          }
          uVar8 = uVar18;
          if (lVar27 != 1 && -1 < lVar27 + -1) {
            uVar8 = (ulonglong)*(byte *)((longlong)puVar2 + 1);
          }
          uVar21 = uVar18;
          if (lVar27 != 2 && -1 < lVar27 + -2) {
            uVar21 = (ulonglong)*(byte *)((longlong)puVar2 + 2);
          }
          uVar10 = uVar18;
          if (lVar27 != 3 && -1 < lVar27 + -3) {
            uVar10 = (ulonglong)*(byte *)((longlong)puVar2 + 3);
          }
          lVar27 = (longlong)*param_5 - ((longlong)puVar2 + 4);
          uVar9 = uVar18;
          if (0 < lVar27) {
            uVar9 = (ulonglong)*(byte *)((longlong)puVar2 + 4);
          }
          uVar12 = uVar18;
          if (lVar27 != 1 && -1 < lVar27 + -1) {
            uVar12 = (ulonglong)*(byte *)((longlong)puVar2 + 5);
          }
          uVar13 = uVar18;
          if (lVar27 != 2 && -1 < lVar27 + -2) {
            uVar13 = (ulonglong)*(byte *)((longlong)puVar2 + 6);
          }
          uVar16 = uVar18;
          if (lVar27 != 3 && -1 < lVar27 + -3) {
            uVar16 = (ulonglong)*(byte *)((longlong)puVar2 + 7);
          }
          uVar16 = ((((((uVar17 << 8 | uVar8) << 8 | uVar21) << 8 | uVar10) << 8 | uVar9) << 8 |
                    uVar12) << 8 | uVar13) << 8 | uVar16;
        }
        else {
          uVar17 = *puVar2;
          uVar16 = uVar17 >> 0x38 | (uVar17 & 0xff000000000000) >> 0x28 |
                   (uVar17 & 0xff0000000000) >> 0x18 | (uVar17 & 0xff00000000) >> 8 |
                   (uVar17 & 0xff000000) << 8 | (uVar17 & 0xff0000) << 0x18 |
                   (uVar17 & 0xff00) << 0x28 | uVar17 << 0x38;
        }
        *param_2 = *param_2 | uVar16 >> (0x3fU - (char)lVar24 & 0x3f);
        *param_4 = *param_4 + (lVar24 >> 3);
        *param_3 = *param_3 + (lVar24 >> 3) * -8;
        uVar3 = *param_2;
        *param_2 = uVar3 * 2;
        *param_3 = *param_3 + 1;
        iVar6 = iVar6 - (int)((longlong)uVar3 >> 0x3f);
      }
      else {
        lVar27 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar27 == 0; lVar27 = lVar27 + -1) {
          }
        }
        iVar6 = (0x40 - (int)lVar27) * 2;
        if (0x1e < iVar6) goto LAB_14f3964b0;
        *param_2 = uVar17 << ((byte)iVar6 & 0x3f);
        *param_3 = *param_3 + (longlong)iVar6;
        iVar6 = (int)(uVar17 >> (0x40 - (byte)iVar6 & 0x3f)) + -2;
      }
      lVar30 = *param_3;
      if (uVar15 - local_res10 < iVar6 + 1U) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
        goto LAB_14f396a09;
        iVar19 = 0x3f8;
        goto LAB_14f3969f7;
      }
      local_res10 = local_res10 + iVar6 + 1U;
    } while (local_res10 < uVar15);
  }
  param_1->topSym = uVar23 - 1;
  param_1->gotNumSymbols = local_res20;
  iVar19 = param_1->numCodesOfLen[0];
  while (iVar19 == 0) {
    uVar20 = (int)uVar18 + 1;
    uVar18 = (ulonglong)uVar20;
    iVar19 = param_1->numCodesOfLen[uVar18];
  }
  uVar18 = 0x1f;
  uVar15 = 0x1f;
  iVar19 = param_1->numCodesOfLen[0x1f];
  while (iVar19 == 0) {
    uVar15 = (int)uVar18 - 1;
    uVar18 = (ulonglong)uVar15;
    iVar19 = param_1->numCodesOfLen[uVar18];
  }
  param_1->maxCodeLen = uVar15;
  param_1->minCodeLen = uVar20;
  return 1;
}

// rrHuffman_UnPackCodeLens @ 14f396a20

int __cdecl oo2::rrHuffman_UnPackCodeLens(rrHuffman *param_1,_rrVarBits_ *param_2)

{
  ulonglong *puVar1;
  uchar *_Dst;
  byte bVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulong64 uVar21;
  uint uVar22;
  ulonglong *puVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  char *pcVar28;
  char cVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  uint uVar33;
  bool bVar34;
  uint local_res20;
  long64 local_80;
  ulonglong local_78;
  int local_70;
  int local_6c;
  
  puVar1 = (ulonglong *)param_2->m_end;
  lVar15 = param_2->m_inv_bitlen;
  puVar23 = (ulonglong *)param_2->m_cur;
  lVar14 = (longlong)puVar1 - (longlong)puVar23;
  uVar16 = 0;
  iVar24 = 0;
  uVar25 = 0;
  if (lVar14 < 8) {
    uVar18 = uVar16;
    if (0 < lVar14) {
      uVar18 = (ulonglong)(byte)*puVar23;
    }
    uVar32 = uVar16;
    if (lVar14 != 1 && -1 < lVar14 + -1) {
      uVar32 = (ulonglong)*(byte *)((longlong)puVar23 + 1);
    }
    uVar31 = uVar16;
    if (lVar14 != 2 && -1 < lVar14 + -2) {
      uVar31 = (ulonglong)*(byte *)((longlong)puVar23 + 2);
    }
    uVar30 = uVar16;
    if (lVar14 != 3 && -1 < lVar14 + -3) {
      uVar30 = (ulonglong)*(byte *)((longlong)puVar23 + 3);
    }
    lVar14 = (longlong)puVar1 - ((longlong)puVar23 + 4);
    uVar7 = uVar16;
    if (0 < lVar14) {
      uVar7 = (ulonglong)*(byte *)((longlong)puVar23 + 4);
    }
    uVar9 = uVar16;
    if (lVar14 != 1 && -1 < lVar14 + -1) {
      uVar9 = (ulonglong)*(byte *)((longlong)puVar23 + 5);
    }
    uVar6 = uVar16;
    if (lVar14 != 2 && -1 < lVar14 + -2) {
      uVar6 = (ulonglong)*(byte *)((longlong)puVar23 + 6);
    }
    uVar5 = uVar16;
    if (lVar14 != 3 && -1 < lVar14 + -3) {
      uVar5 = (ulonglong)*(byte *)((longlong)puVar23 + 7);
    }
    uVar18 = (((uVar18 << 8 | uVar32) << 8 | uVar31) << 8 | uVar30) << 0x20 |
             ((uVar7 << 8 | uVar9) << 8 | uVar6) << 8 | uVar5;
  }
  else {
    uVar18 = *puVar23;
    uVar18 = uVar18 >> 0x38 | (uVar18 & 0xff000000000000) >> 0x28 |
             (uVar18 & 0xff0000000000) >> 0x18 | (uVar18 & 0xff00000000) >> 8 |
             (uVar18 & 0xff000000) << 8 | (uVar18 & 0xff0000) << 0x18 | (uVar18 & 0xff00) << 0x28 |
             uVar18 << 0x38;
  }
  uVar13 = param_1->numSymbols;
  uVar18 = param_2->m_bits | uVar18 >> (0x3fU - (char)lVar15 & 0x3f);
  local_80 = lVar15 + (lVar15 >> 3) * -8 + 1;
  puVar23 = (ulonglong *)((longlong)puVar23 + (lVar15 >> 3));
  if ((longlong)uVar18 < 0) {
    uVar22 = uVar25;
    if (1 < uVar13) {
      iVar4 = 0x1f;
      if (uVar13 - 1 != 0) {
        for (; uVar13 - 1 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      uVar22 = iVar4 + 1;
    }
    local_80 = local_80 + 2;
    local_70 = 0;
    uVar32 = uVar18 & 0x7fffffffffffffff;
    lVar15 = (longlong)puVar1 - (longlong)puVar23;
    uVar27 = 1;
    if (lVar15 < 8) {
      uVar31 = uVar16;
      if (0 < lVar15) {
        uVar31 = (ulonglong)(byte)*puVar23;
      }
      uVar30 = uVar16;
      if (lVar15 != 1 && -1 < lVar15 + -1) {
        uVar30 = (ulonglong)*(byte *)((longlong)puVar23 + 1);
      }
      uVar7 = uVar16;
      if (lVar15 != 2 && -1 < lVar15 + -2) {
        uVar7 = (ulonglong)*(byte *)((longlong)puVar23 + 2);
      }
      uVar9 = uVar16;
      if (lVar15 != 3 && -1 < lVar15 + -3) {
        uVar9 = (ulonglong)*(byte *)((longlong)puVar23 + 3);
      }
      lVar15 = (longlong)puVar1 - ((longlong)puVar23 + 4);
      uVar6 = uVar16;
      if (0 < lVar15) {
        uVar6 = (ulonglong)*(byte *)((longlong)puVar23 + 4);
      }
      uVar5 = uVar16;
      if (lVar15 != 1 && -1 < lVar15 + -1) {
        uVar5 = (ulonglong)*(byte *)((longlong)puVar23 + 5);
      }
      uVar20 = uVar16;
      if (lVar15 != 2 && -1 < lVar15 + -2) {
        uVar20 = (ulonglong)*(byte *)((longlong)puVar23 + 6);
      }
      uVar19 = uVar16;
      if (lVar15 != 3 && -1 < lVar15 + -3) {
        uVar19 = (ulonglong)*(byte *)((longlong)puVar23 + 7);
      }
      uVar19 = ((((((uVar31 << 8 | uVar30) << 8 | uVar7) << 8 | uVar9) << 8 | uVar6) << 8 | uVar5)
                << 8 | uVar20) << 8 | uVar19;
    }
    else {
      uVar31 = *puVar23;
      uVar19 = uVar31 >> 0x38 | (uVar31 & 0xff000000000000) >> 0x28 |
               (uVar31 & 0xff0000000000) >> 0x18 | (uVar31 & 0xff00000000) >> 8 |
               (uVar31 & 0xff000000) << 8 | (uVar31 & 0xff0000) << 0x18 | (uVar31 & 0xff00) << 0x28
               | uVar31 << 0x38;
    }
    local_6c = uVar22 * 4;
    puVar23 = (ulonglong *)((longlong)puVar23 + (local_80 >> 3));
    _Dst = param_1->codeLenTable;
    uVar18 = uVar18 << 3 | uVar19 >> (0x3fU - (char)local_80 & 0x3f);
    local_res20 = 0;
    memset(_Dst,0,(ulonglong)uVar13);
    local_78 = uVar18 * 2;
    local_80 = local_80 + (local_80 >> 3) * -8 + 1;
    uVar22 = 0;
    if ((longlong)uVar18 < 0) {
      bVar34 = uVar13 != 0;
      uVar18 = uVar16;
    }
    else {
      uVar18 = uVar16;
      if (local_78 == 0) {
LAB_14f396d70:
        do {
          while( true ) {
            lVar15 = (longlong)puVar1 - (longlong)puVar23;
            if (lVar15 < 8) {
              uVar31 = uVar16;
              if (0 < lVar15) {
                uVar31 = (ulonglong)(byte)*puVar23;
              }
              uVar30 = uVar16;
              if (lVar15 != 1 && -1 < lVar15 + -1) {
                uVar30 = (ulonglong)*(byte *)((longlong)puVar23 + 1);
              }
              uVar7 = uVar16;
              if (lVar15 != 2 && -1 < lVar15 + -2) {
                uVar7 = (ulonglong)*(byte *)((longlong)puVar23 + 2);
              }
              uVar9 = uVar16;
              if (lVar15 != 3 && -1 < lVar15 + -3) {
                uVar9 = (ulonglong)*(byte *)((longlong)puVar23 + 3);
              }
              lVar15 = (longlong)puVar1 - ((longlong)puVar23 + 4);
              uVar6 = uVar16;
              if (0 < lVar15) {
                uVar6 = (ulonglong)*(byte *)((longlong)puVar23 + 4);
              }
              uVar5 = uVar16;
              if (lVar15 != 1 && -1 < lVar15 + -1) {
                uVar5 = (ulonglong)*(byte *)((longlong)puVar23 + 5);
              }
              uVar20 = uVar16;
              if (lVar15 != 2 && -1 < lVar15 + -2) {
                uVar20 = (ulonglong)*(byte *)((longlong)puVar23 + 6);
              }
              uVar19 = uVar16;
              if (lVar15 != 3 && -1 < lVar15 + -3) {
                uVar19 = (ulonglong)*(byte *)((longlong)puVar23 + 7);
              }
              uVar19 = ((((((uVar31 << 8 | uVar30) << 8 | uVar7) << 8 | uVar9) << 8 | uVar6) << 8 |
                        uVar5) << 8 | uVar20) << 8 | uVar19;
            }
            else {
              uVar31 = *puVar23;
              uVar19 = uVar31 >> 0x38 | (uVar31 & 0xff000000000000) >> 0x28 |
                       (uVar31 & 0xff0000000000) >> 0x18 | (uVar31 & 0xff00000000) >> 8 |
                       (uVar31 & 0xff000000) << 8 | (uVar31 & 0xff0000) << 0x18 |
                       (uVar31 & 0xff00) << 0x28 | uVar31 << 0x38;
            }
            puVar23 = (ulonglong *)((longlong)puVar23 + (local_80 >> 3));
            lVar15 = local_80 + (local_80 >> 3) * -8;
            local_78 = local_78 | uVar19 >> (0x3fU - (char)local_80 & 0x3f);
            iVar4 = (int)uVar18;
            uVar12 = uVar25;
            if (local_78 == 0) break;
            lVar14 = 0x3f;
            if (local_78 != 0) {
              for (; local_78 >> lVar14 == 0; lVar14 = lVar14 + -1) {
              }
            }
            uVar33 = -(int)lVar14 + 0x3f;
            if (uVar33 < 0x1f) {
              uVar11 = -(int)lVar14 + 0x40;
              uVar18 = local_78 << ((byte)uVar11 & 0x3f);
              uVar33 = uVar33 + iVar4;
              local_80 = lVar15 + (ulonglong)uVar11;
              if (uVar33 != 0) {
                lVar15 = (longlong)puVar1 - (longlong)puVar23;
                if (lVar15 < 8) {
                  uVar31 = uVar16;
                  if (0 < lVar15) {
                    uVar31 = (ulonglong)(byte)*puVar23;
                  }
                  uVar30 = uVar16;
                  if (lVar15 != 1 && -1 < lVar15 + -1) {
                    uVar30 = (ulonglong)*(byte *)((longlong)puVar23 + 1);
                  }
                  uVar7 = uVar16;
                  if (lVar15 != 2 && -1 < lVar15 + -2) {
                    uVar7 = (ulonglong)*(byte *)((longlong)puVar23 + 2);
                  }
                  uVar9 = uVar16;
                  if (lVar15 != 3 && -1 < lVar15 + -3) {
                    uVar9 = (ulonglong)*(byte *)((longlong)puVar23 + 3);
                  }
                  lVar15 = (longlong)puVar1 - ((longlong)puVar23 + 4);
                  uVar6 = uVar16;
                  if (0 < lVar15) {
                    uVar6 = (ulonglong)*(byte *)((longlong)puVar23 + 4);
                  }
                  uVar5 = uVar16;
                  if (lVar15 != 1 && -1 < lVar15 + -1) {
                    uVar5 = (ulonglong)*(byte *)((longlong)puVar23 + 5);
                  }
                  uVar20 = uVar16;
                  if (lVar15 != 2 && -1 < lVar15 + -2) {
                    uVar20 = (ulonglong)*(byte *)((longlong)puVar23 + 6);
                  }
                  uVar19 = uVar16;
                  if (lVar15 != 3 && -1 < lVar15 + -3) {
                    uVar19 = (ulonglong)*(byte *)((longlong)puVar23 + 7);
                  }
                  uVar19 = ((((((uVar31 << 8 | uVar30) << 8 | uVar7) << 8 | uVar9) << 8 | uVar6) <<
                             8 | uVar5) << 8 | uVar20) << 8 | uVar19;
                }
                else {
                  uVar31 = *puVar23;
                  uVar19 = uVar31 >> 0x38 | (uVar31 & 0xff000000000000) >> 0x28 |
                           (uVar31 & 0xff0000000000) >> 0x18 | (uVar31 & 0xff00000000) >> 8 |
                           (uVar31 & 0xff000000) << 8 | (uVar31 & 0xff0000) << 0x18 |
                           (uVar31 & 0xff00) << 0x28 | uVar31 << 0x38;
                }
                puVar23 = (ulonglong *)((longlong)puVar23 + (local_80 >> 3));
                bVar2 = (byte)uVar33;
                uVar31 = uVar18 | uVar19 >> (0x3fU - (char)local_80 & 0x3f);
                uVar18 = uVar31 << (bVar2 & 0x3f);
                local_80 = local_80 + (ulonglong)uVar33 + (local_80 >> 3) * -8;
                uVar12 = ((1 << (bVar2 & 0x1f)) + (int)(uVar31 >> (0x40 - bVar2 & 0x3f))) * 2 - 2;
              }
              goto LAB_14f397032;
            }
            local_78 = local_78 << 0x1f;
            local_80 = lVar15 + 0x1f;
            uVar18 = (ulonglong)(iVar4 + 0x1f);
          }
          local_80 = 0x3f;
          uVar18 = (ulonglong)(uint)(iVar4 + (0x3f - (int)lVar15));
          local_78 = uVar16;
        } while (puVar23 < puVar1);
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          (*g_fp_OodleCore_Plugin_Printf)
                    (0,"v:\\devel\\projects\\oodle2\\core\\rrvarbitcodes.cpp",0x45,
                     "OODLE ERROR : corruption : ReadUnary past end\n");
        }
        ooLogErrorPost();
        uVar18 = uVar16;
LAB_14f397032:
        lVar15 = (longlong)puVar1 - (longlong)puVar23;
        if (lVar15 < 8) {
          uVar31 = uVar16;
          if (0 < lVar15) {
            uVar31 = (ulonglong)(byte)*puVar23;
          }
          uVar30 = uVar16;
          if (lVar15 != 1 && -1 < lVar15 + -1) {
            uVar30 = (ulonglong)*(byte *)((longlong)puVar23 + 1);
          }
          uVar7 = uVar16;
          if (lVar15 != 2 && -1 < lVar15 + -2) {
            uVar7 = (ulonglong)*(byte *)((longlong)puVar23 + 2);
          }
          uVar9 = uVar16;
          if (lVar15 != 3 && -1 < lVar15 + -3) {
            uVar9 = (ulonglong)*(byte *)((longlong)puVar23 + 3);
          }
          lVar15 = (longlong)puVar1 - ((longlong)puVar23 + 4);
          uVar6 = uVar16;
          if (0 < lVar15) {
            uVar6 = (ulonglong)*(byte *)((longlong)puVar23 + 4);
          }
          uVar5 = uVar16;
          if (lVar15 != 1 && -1 < lVar15 + -1) {
            uVar5 = (ulonglong)*(byte *)((longlong)puVar23 + 5);
          }
          uVar20 = uVar16;
          if (lVar15 != 2 && -1 < lVar15 + -2) {
            uVar20 = (ulonglong)*(byte *)((longlong)puVar23 + 6);
          }
          uVar19 = uVar16;
          if (lVar15 != 3 && -1 < lVar15 + -3) {
            uVar19 = (ulonglong)*(byte *)((longlong)puVar23 + 7);
          }
          uVar19 = ((((((uVar31 << 8 | uVar30) << 8 | uVar7) << 8 | uVar9) << 8 | uVar6) << 8 |
                    uVar5) << 8 | uVar20) << 8 | uVar19;
        }
        else {
          uVar31 = *puVar23;
          uVar19 = uVar31 >> 0x38 | (uVar31 & 0xff000000000000) >> 0x28 |
                   (uVar31 & 0xff0000000000) >> 0x18 | (uVar31 & 0xff00000000) >> 8 |
                   (uVar31 & 0xff000000) << 8 | (uVar31 & 0xff0000) << 0x18 |
                   (uVar31 & 0xff00) << 0x28 | uVar31 << 0x38;
        }
        puVar23 = (ulonglong *)((longlong)puVar23 + (local_80 >> 3));
        uVar18 = uVar18 | uVar19 >> (0x3fU - (char)local_80 & 0x3f);
        local_78 = uVar18 * 2;
        local_80 = local_80 + (local_80 >> 3) * -8 + 1;
        iVar4 = uVar12 - (int)((longlong)uVar18 >> 0x3f);
      }
      else {
        lVar15 = 0x3f;
        if (local_78 != 0) {
          for (; local_78 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar4 = (0x40 - (int)lVar15) * 2;
        if (0x1e < iVar4) goto LAB_14f396d70;
        uVar18 = local_78 >> (0x40 - (byte)iVar4 & 0x3f);
        local_78 = local_78 << ((byte)iVar4 & 0x3f);
        local_80 = local_80 + iVar4;
        iVar4 = (int)uVar18 + -2;
      }
      local_res20 = iVar4 + 1;
      bVar34 = local_res20 < uVar13;
      uVar18 = (ulonglong)local_res20;
      if (uVar13 < local_res20) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          pcVar28 = "OODLE ERROR : LZ corruption : i + RunLen > packNumSymbols \n";
          iVar4 = 0x3bf;
LAB_14f3982e8:
          (*g_fp_OodleCore_Plugin_Printf)
                    (0,"v:\\devel\\projects\\oodle2\\core\\rrhuffmandecode.cpp",iVar4,pcVar28);
        }
        goto LAB_14f3982f3;
      }
    }
    if (bVar34) {
      bVar2 = (byte)(uVar32 >> 0x38);
      do {
        lVar15 = (longlong)puVar1 - (longlong)puVar23;
        if (lVar15 < 8) {
          uVar31 = uVar16;
          if (0 < lVar15) {
            uVar31 = (ulonglong)(byte)*puVar23;
          }
          uVar30 = uVar16;
          if (lVar15 != 1 && -1 < lVar15 + -1) {
            uVar30 = (ulonglong)*(byte *)((longlong)puVar23 + 1);
          }
          uVar7 = uVar16;
          if (lVar15 != 2 && -1 < lVar15 + -2) {
            uVar7 = (ulonglong)*(byte *)((longlong)puVar23 + 2);
          }
          uVar9 = uVar16;
          if (lVar15 != 3 && -1 < lVar15 + -3) {
            uVar9 = (ulonglong)*(byte *)((longlong)puVar23 + 3);
          }
          lVar15 = (longlong)puVar1 - ((longlong)puVar23 + 4);
          uVar6 = uVar16;
          if (0 < lVar15) {
            uVar6 = (ulonglong)*(byte *)((longlong)puVar23 + 4);
          }
          uVar5 = uVar16;
          if (lVar15 != 1 && -1 < lVar15 + -1) {
            uVar5 = (ulonglong)*(byte *)((longlong)puVar23 + 5);
          }
          uVar20 = uVar16;
          if (lVar15 != 2 && -1 < lVar15 + -2) {
            uVar20 = (ulonglong)*(byte *)((longlong)puVar23 + 6);
          }
          uVar19 = uVar16;
          if (lVar15 != 3 && -1 < lVar15 + -3) {
            uVar19 = (ulonglong)*(byte *)((longlong)puVar23 + 7);
          }
          uVar19 = ((((((uVar31 << 8 | uVar30) << 8 | uVar7) << 8 | uVar9) << 8 | uVar6) << 8 |
                    uVar5) << 8 | uVar20) << 8 | uVar19;
        }
        else {
          uVar31 = *puVar23;
          uVar19 = uVar31 >> 0x38 | (uVar31 & 0xff000000000000) >> 0x28 |
                   (uVar31 & 0xff0000000000) >> 0x18 | (uVar31 & 0xff00000000) >> 8 |
                   (uVar31 & 0xff000000) << 8 | (uVar31 & 0xff0000) << 0x18 |
                   (uVar31 & 0xff00) << 0x28 | uVar31 << 0x38;
        }
        puVar23 = (ulonglong *)((longlong)puVar23 + (local_80 >> 3));
        lVar15 = local_80 + (local_80 >> 3) * -8;
        uVar30 = local_78 | uVar19 >> (0x3fU - (char)local_80 & 0x3f);
        uVar31 = uVar16;
        if (uVar30 == 0) {
LAB_14f397310:
          do {
            while( true ) {
              lVar14 = (longlong)puVar1 - (longlong)puVar23;
              if (lVar14 < 8) {
                uVar18 = uVar16;
                if (0 < lVar14) {
                  uVar18 = (ulonglong)(byte)*puVar23;
                }
                uVar7 = uVar16;
                if (lVar14 != 1 && -1 < lVar14 + -1) {
                  uVar7 = (ulonglong)*(byte *)((longlong)puVar23 + 1);
                }
                uVar9 = uVar16;
                if (lVar14 != 2 && -1 < lVar14 + -2) {
                  uVar9 = (ulonglong)*(byte *)((longlong)puVar23 + 2);
                }
                uVar6 = uVar16;
                if (lVar14 != 3 && -1 < lVar14 + -3) {
                  uVar6 = (ulonglong)*(byte *)((longlong)puVar23 + 3);
                }
                lVar14 = (longlong)puVar1 - ((longlong)puVar23 + 4);
                uVar5 = uVar16;
                if (0 < lVar14) {
                  uVar5 = (ulonglong)*(byte *)((longlong)puVar23 + 4);
                }
                uVar20 = uVar16;
                if (lVar14 != 1 && -1 < lVar14 + -1) {
                  uVar20 = (ulonglong)*(byte *)((longlong)puVar23 + 5);
                }
                uVar19 = uVar16;
                if (lVar14 != 2 && -1 < lVar14 + -2) {
                  uVar19 = (ulonglong)*(byte *)((longlong)puVar23 + 6);
                }
                uVar8 = uVar16;
                if (lVar14 != 3 && -1 < lVar14 + -3) {
                  uVar8 = (ulonglong)*(byte *)((longlong)puVar23 + 7);
                }
                uVar8 = ((((((uVar18 << 8 | uVar7) << 8 | uVar9) << 8 | uVar6) << 8 | uVar5) << 8 |
                         uVar20) << 8 | uVar19) << 8 | uVar8;
              }
              else {
                uVar18 = *puVar23;
                uVar8 = uVar18 >> 0x38 | (uVar18 & 0xff000000000000) >> 0x28 |
                        (uVar18 & 0xff0000000000) >> 0x18 | (uVar18 & 0xff00000000) >> 8 |
                        (uVar18 & 0xff000000) << 8 | (uVar18 & 0xff0000) << 0x18 |
                        (uVar18 & 0xff00) << 0x28 | uVar18 << 0x38;
              }
              puVar23 = (ulonglong *)((longlong)puVar23 + (lVar15 >> 3));
              lVar14 = lVar15 + (lVar15 >> 3) * -8;
              uVar30 = uVar30 | uVar8 >> (0x3fU - (char)lVar15 & 0x3f);
              iVar4 = (int)uVar31;
              uVar27 = uVar22;
              if (uVar30 == 0) break;
              lVar15 = 0x3f;
              if (uVar30 != 0) {
                for (; uVar30 >> lVar15 == 0; lVar15 = lVar15 + -1) {
                }
              }
              uVar12 = -(int)lVar15 + 0x3f;
              if (uVar12 < 0x1f) {
                uVar33 = -(int)lVar15 + 0x40;
                uVar30 = uVar30 << ((byte)uVar33 & 0x3f);
                uVar12 = uVar12 + iVar4;
                lVar15 = lVar14 + (ulonglong)uVar33;
                if (uVar12 != 0) {
                  lVar14 = (longlong)puVar1 - (longlong)puVar23;
                  if (lVar14 < 8) {
                    uVar18 = uVar16;
                    if (0 < lVar14) {
                      uVar18 = (ulonglong)(byte)*puVar23;
                    }
                    uVar31 = uVar16;
                    if (lVar14 != 1 && -1 < lVar14 + -1) {
                      uVar31 = (ulonglong)*(byte *)((longlong)puVar23 + 1);
                    }
                    uVar7 = uVar16;
                    if (lVar14 != 2 && -1 < lVar14 + -2) {
                      uVar7 = (ulonglong)*(byte *)((longlong)puVar23 + 2);
                    }
                    uVar9 = uVar16;
                    if (lVar14 != 3 && -1 < lVar14 + -3) {
                      uVar9 = (ulonglong)*(byte *)((longlong)puVar23 + 3);
                    }
                    lVar14 = (longlong)puVar1 - ((longlong)puVar23 + 4);
                    uVar6 = uVar16;
                    if (0 < lVar14) {
                      uVar6 = (ulonglong)*(byte *)((longlong)puVar23 + 4);
                    }
                    uVar5 = uVar16;
                    if (lVar14 != 1 && -1 < lVar14 + -1) {
                      uVar5 = (ulonglong)*(byte *)((longlong)puVar23 + 5);
                    }
                    uVar20 = uVar16;
                    if (lVar14 != 2 && -1 < lVar14 + -2) {
                      uVar20 = (ulonglong)*(byte *)((longlong)puVar23 + 6);
                    }
                    uVar19 = uVar16;
                    if (lVar14 != 3 && -1 < lVar14 + -3) {
                      uVar19 = (ulonglong)*(byte *)((longlong)puVar23 + 7);
                    }
                    uVar19 = ((((((uVar18 << 8 | uVar31) << 8 | uVar7) << 8 | uVar9) << 8 | uVar6)
                               << 8 | uVar5) << 8 | uVar20) << 8 | uVar19;
                  }
                  else {
                    uVar18 = *puVar23;
                    uVar19 = uVar18 >> 0x38 | (uVar18 & 0xff000000000000) >> 0x28 |
                             (uVar18 & 0xff0000000000) >> 0x18 | (uVar18 & 0xff00000000) >> 8 |
                             (uVar18 & 0xff000000) << 8 | (uVar18 & 0xff0000) << 0x18 |
                             (uVar18 & 0xff00) << 0x28 | uVar18 << 0x38;
                  }
                  puVar23 = (ulonglong *)((longlong)puVar23 + (lVar15 >> 3));
                  bVar10 = (byte)uVar12;
                  uVar18 = uVar30 | uVar19 >> (0x3fU - (char)lVar15 & 0x3f);
                  uVar30 = uVar18 << (bVar10 & 0x3f);
                  lVar15 = lVar15 + (ulonglong)uVar12 + (lVar15 >> 3) * -8;
                  uVar27 = ((1 << (bVar10 & 0x1f)) + (int)(uVar18 >> (-bVar10 & 0x3f))) * 2 - 2;
                }
                goto LAB_14f3975d2;
              }
              uVar30 = uVar30 << 0x1f;
              lVar15 = lVar14 + 0x1f;
              uVar31 = (ulonglong)(iVar4 + 0x1f);
            }
            lVar15 = 0x3f;
            uVar31 = (ulonglong)(uint)(iVar4 + (0x3f - (int)lVar14));
            uVar30 = uVar16;
          } while (puVar23 < puVar1);
          ooLogErrorPre();
          if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
            (*g_fp_OodleCore_Plugin_Printf)
                      (0,"v:\\devel\\projects\\oodle2\\core\\rrvarbitcodes.cpp",0x45,
                       "OODLE ERROR : corruption : ReadUnary past end\n");
          }
          ooLogErrorPost();
LAB_14f3975d2:
          lVar14 = (longlong)puVar1 - (longlong)puVar23;
          if (lVar14 < 8) {
            uVar18 = uVar16;
            if (0 < lVar14) {
              uVar18 = (ulonglong)(byte)*puVar23;
            }
            uVar31 = uVar16;
            if (lVar14 != 1 && -1 < lVar14 + -1) {
              uVar31 = (ulonglong)*(byte *)((longlong)puVar23 + 1);
            }
            uVar7 = uVar16;
            if (lVar14 != 2 && -1 < lVar14 + -2) {
              uVar7 = (ulonglong)*(byte *)((longlong)puVar23 + 2);
            }
            uVar9 = uVar16;
            if (lVar14 != 3 && -1 < lVar14 + -3) {
              uVar9 = (ulonglong)*(byte *)((longlong)puVar23 + 3);
            }
            lVar14 = (longlong)puVar1 - ((longlong)puVar23 + 4);
            uVar6 = uVar16;
            if (0 < lVar14) {
              uVar6 = (ulonglong)*(byte *)((longlong)puVar23 + 4);
            }
            uVar5 = uVar16;
            if (lVar14 != 1 && -1 < lVar14 + -1) {
              uVar5 = (ulonglong)*(byte *)((longlong)puVar23 + 5);
            }
            uVar20 = uVar16;
            if (lVar14 != 2 && -1 < lVar14 + -2) {
              uVar20 = (ulonglong)*(byte *)((longlong)puVar23 + 6);
            }
            uVar19 = uVar16;
            if (lVar14 != 3 && -1 < lVar14 + -3) {
              uVar19 = (ulonglong)*(byte *)((longlong)puVar23 + 7);
            }
            uVar19 = ((((((uVar18 << 8 | uVar31) << 8 | uVar7) << 8 | uVar9) << 8 | uVar6) << 8 |
                      uVar5) << 8 | uVar20) << 8 | uVar19;
          }
          else {
            uVar18 = *puVar23;
            uVar19 = uVar18 >> 0x38 | (uVar18 & 0xff000000000000) >> 0x28 |
                     (uVar18 & 0xff0000000000) >> 0x18 | (uVar18 & 0xff00000000) >> 8 |
                     (uVar18 & 0xff000000) << 8 | (uVar18 & 0xff0000) << 0x18 |
                     (uVar18 & 0xff00) << 0x28 | uVar18 << 0x38;
          }
          puVar23 = (ulonglong *)((longlong)puVar23 + (lVar15 >> 3));
          uVar30 = uVar30 | uVar19 >> (0x3fU - (char)lVar15 & 0x3f);
          local_78 = uVar30 * 2;
          local_80 = lVar15 + (lVar15 >> 3) * -8 + 1;
          iVar4 = uVar27 - (int)((longlong)uVar30 >> 0x3f);
          uVar27 = local_res20;
        }
        else {
          lVar14 = 0x3f;
          if (uVar30 != 0) {
            for (; uVar30 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          iVar4 = (0x40 - (int)lVar14) * 2;
          if (0x1e < iVar4) goto LAB_14f397310;
          local_78 = uVar30 << ((byte)iVar4 & 0x3f);
          local_80 = lVar15 + iVar4;
          iVar4 = (int)(uVar30 >> (-(byte)iVar4 & 0x3f)) + -2;
          uVar27 = (uint)uVar18;
        }
        uVar12 = iVar4 + 1;
        if (uVar13 - uVar27 < uVar12) {
          ooLogErrorPre();
          if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
          goto LAB_14f3982f3;
          pcVar28 = "OODLE ERROR : LZ corruption : i + RunLen > packNumSymbols \n";
          iVar4 = 0x3cc;
          goto LAB_14f3982e8;
        }
        lVar15 = (longlong)puVar1 - (longlong)puVar23;
        if (lVar15 < 8) {
          uVar18 = uVar16;
          if (0 < lVar15) {
            uVar18 = (ulonglong)(byte)*puVar23;
          }
          uVar31 = uVar16;
          if (lVar15 != 1 && -1 < lVar15 + -1) {
            uVar31 = (ulonglong)*(byte *)((longlong)puVar23 + 1);
          }
          uVar30 = uVar16;
          if (lVar15 != 2 && -1 < lVar15 + -2) {
            uVar30 = (ulonglong)*(byte *)((longlong)puVar23 + 2);
          }
          uVar7 = uVar16;
          if (lVar15 != 3 && -1 < lVar15 + -3) {
            uVar7 = (ulonglong)*(byte *)((longlong)puVar23 + 3);
          }
          lVar15 = (longlong)puVar1 - ((longlong)puVar23 + 4);
          uVar9 = uVar16;
          if (0 < lVar15) {
            uVar9 = (ulonglong)*(byte *)((longlong)puVar23 + 4);
          }
          uVar6 = uVar16;
          if (lVar15 != 1 && -1 < lVar15 + -1) {
            uVar6 = (ulonglong)*(byte *)((longlong)puVar23 + 5);
          }
          uVar5 = uVar16;
          if (lVar15 != 2 && -1 < lVar15 + -2) {
            uVar5 = (ulonglong)*(byte *)((longlong)puVar23 + 6);
          }
          uVar20 = uVar16;
          if (lVar15 != 3 && -1 < lVar15 + -3) {
            uVar20 = (ulonglong)*(byte *)((longlong)puVar23 + 7);
          }
          uVar20 = ((((((uVar18 << 8 | uVar31) << 8 | uVar30) << 8 | uVar7) << 8 | uVar9) << 8 |
                    uVar6) << 8 | uVar5) << 8 | uVar20;
        }
        else {
          uVar18 = *puVar23;
          uVar20 = uVar18 >> 0x38 | (uVar18 & 0xff000000000000) >> 0x28 |
                   (uVar18 & 0xff0000000000) >> 0x18 | (uVar18 & 0xff00000000) >> 8 |
                   (uVar18 & 0xff000000) << 8 | (uVar18 & 0xff0000) << 0x18 |
                   (uVar18 & 0xff00) << 0x28 | uVar18 << 0x38;
        }
        cVar29 = (char)local_80;
        puVar23 = (ulonglong *)((longlong)puVar23 + (local_80 >> 3));
        local_80 = local_80 + (local_80 >> 3) * -8;
        local_78 = local_78 | uVar20 >> (0x3fU - cVar29 & 0x3f);
        uVar18 = uVar16;
        if (uVar12 != 0) {
          do {
            if (local_78 == 0) {
              iVar4 = 0x40;
            }
            else {
              lVar15 = 0x3f;
              if (local_78 != 0) {
                for (; local_78 >> lVar15 == 0; lVar15 = lVar15 + -1) {
                }
              }
              iVar4 = 0x3f - (int)lVar15;
            }
            uVar27 = (uint)(uVar32 >> 0x3d) + 1 + iVar4;
            uVar31 = uVar16;
            if (uVar27 < 0x1f) {
              iVar17 = (int)(local_78 >> (0x40 - (byte)uVar27 & 0x3f));
              local_78 = local_78 << ((byte)uVar27 & 0x3f);
              lVar15 = local_80 + (ulonglong)uVar27;
              iVar4 = iVar4 + -1;
            }
            else {
              do {
                while( true ) {
                  lVar15 = (longlong)puVar1 - (longlong)puVar23;
                  if (lVar15 < 8) {
                    uVar30 = uVar16;
                    if (0 < lVar15) {
                      uVar30 = (ulonglong)(byte)*puVar23;
                    }
                    uVar7 = uVar16;
                    if (lVar15 != 1 && -1 < lVar15 + -1) {
                      uVar7 = (ulonglong)*(byte *)((longlong)puVar23 + 1);
                    }
                    uVar9 = uVar16;
                    if (lVar15 != 2 && -1 < lVar15 + -2) {
                      uVar9 = (ulonglong)*(byte *)((longlong)puVar23 + 2);
                    }
                    uVar6 = uVar16;
                    if (lVar15 != 3 && -1 < lVar15 + -3) {
                      uVar6 = (ulonglong)*(byte *)((longlong)puVar23 + 3);
                    }
                    lVar15 = (longlong)puVar1 - ((longlong)puVar23 + 4);
                    uVar5 = uVar16;
                    if (0 < lVar15) {
                      uVar5 = (ulonglong)*(byte *)((longlong)puVar23 + 4);
                    }
                    uVar20 = uVar16;
                    if (lVar15 != 1 && -1 < lVar15 + -1) {
                      uVar20 = (ulonglong)*(byte *)((longlong)puVar23 + 5);
                    }
                    uVar19 = uVar16;
                    if (lVar15 != 2 && -1 < lVar15 + -2) {
                      uVar19 = (ulonglong)*(byte *)((longlong)puVar23 + 6);
                    }
                    uVar8 = uVar16;
                    if (lVar15 != 3 && -1 < lVar15 + -3) {
                      uVar8 = (ulonglong)*(byte *)((longlong)puVar23 + 7);
                    }
                    uVar8 = ((((((uVar30 << 8 | uVar7) << 8 | uVar9) << 8 | uVar6) << 8 | uVar5) <<
                              8 | uVar20) << 8 | uVar19) << 8 | uVar8;
                  }
                  else {
                    uVar30 = *puVar23;
                    uVar8 = uVar30 >> 0x38 | (uVar30 & 0xff000000000000) >> 0x28 |
                            (uVar30 & 0xff0000000000) >> 0x18 | (uVar30 & 0xff00000000) >> 8 |
                            (uVar30 & 0xff000000) << 8 | (uVar30 & 0xff0000) << 0x18 |
                            (uVar30 & 0xff00) << 0x28 | uVar30 << 0x38;
                  }
                  puVar23 = (ulonglong *)((longlong)puVar23 + (local_80 >> 3));
                  local_78 = local_78 | uVar8 >> (0x3fU - (char)local_80 & 0x3f);
                  lVar15 = local_80 + (local_80 >> 3) * -8;
                  iVar4 = (int)uVar31;
                  if (local_78 == 0) break;
                  lVar14 = 0x3f;
                  if (local_78 != 0) {
                    for (; local_78 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                    }
                  }
                  uVar27 = -(int)lVar14 + 0x3f;
                  if (uVar27 < 0x1f) {
                    uVar33 = -(int)lVar14 + 0x40;
                    local_78 = local_78 << ((byte)uVar33 & 0x3f);
                    iVar4 = uVar27 + iVar4;
                    local_80 = lVar15 + (ulonglong)uVar33;
                    goto LAB_14f397a08;
                  }
                  local_78 = local_78 << 0x1f;
                  local_80 = lVar15 + 0x1f;
                  uVar31 = (ulonglong)(iVar4 + 0x1f);
                }
                local_80 = 0x3f;
                uVar31 = (ulonglong)(uint)(iVar4 + (0x3f - (int)lVar15));
                local_78 = uVar16;
              } while (puVar23 < puVar1);
              ooLogErrorPre();
              if (g_fp_OodleCore_Plugin_Printf !=
                  (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
                (*g_fp_OodleCore_Plugin_Printf)
                          (0,"v:\\devel\\projects\\oodle2\\core\\rrvarbitcodes.cpp",0x45,
                           "OODLE ERROR : corruption : ReadUnary past end\n");
              }
              ooLogErrorPost();
              iVar4 = iVar24;
LAB_14f397a08:
              lVar15 = (longlong)puVar1 - (longlong)puVar23;
              if (lVar15 < 8) {
                uVar31 = uVar16;
                if (0 < lVar15) {
                  uVar31 = (ulonglong)(byte)*puVar23;
                }
                uVar30 = uVar16;
                if (lVar15 != 1 && -1 < lVar15 + -1) {
                  uVar30 = (ulonglong)*(byte *)((longlong)puVar23 + 1);
                }
                uVar7 = uVar16;
                if (lVar15 != 2 && -1 < lVar15 + -2) {
                  uVar7 = (ulonglong)*(byte *)((longlong)puVar23 + 2);
                }
                uVar9 = uVar16;
                if (lVar15 != 3 && -1 < lVar15 + -3) {
                  uVar9 = (ulonglong)*(byte *)((longlong)puVar23 + 3);
                }
                lVar15 = (longlong)puVar1 - ((longlong)puVar23 + 4);
                uVar6 = uVar16;
                if (0 < lVar15) {
                  uVar6 = (ulonglong)*(byte *)((longlong)puVar23 + 4);
                }
                uVar5 = uVar16;
                if (lVar15 != 1 && -1 < lVar15 + -1) {
                  uVar5 = (ulonglong)*(byte *)((longlong)puVar23 + 5);
                }
                uVar20 = uVar16;
                if (lVar15 != 2 && -1 < lVar15 + -2) {
                  uVar20 = (ulonglong)*(byte *)((longlong)puVar23 + 6);
                }
                uVar19 = uVar16;
                if (lVar15 != 3 && -1 < lVar15 + -3) {
                  uVar19 = (ulonglong)*(byte *)((longlong)puVar23 + 7);
                }
                uVar19 = ((((((uVar31 << 8 | uVar30) << 8 | uVar7) << 8 | uVar9) << 8 | uVar6) << 8
                          | uVar5) << 8 | uVar20) << 8 | uVar19;
              }
              else {
                uVar31 = *puVar23;
                uVar19 = uVar31 >> 0x38 | (uVar31 & 0xff000000000000) >> 0x28 |
                         (uVar31 & 0xff0000000000) >> 0x18 | (uVar31 & 0xff00000000) >> 8 |
                         (uVar31 & 0xff000000) << 8 | (uVar31 & 0xff0000) << 0x18 |
                         (uVar31 & 0xff00) << 0x28 | uVar31 << 0x38;
              }
              puVar23 = (ulonglong *)((longlong)puVar23 + (local_80 >> 3));
              local_78 = local_78 | uVar19 >> (0x3fU - (char)local_80 & 0x3f);
              iVar17 = (int)((local_78 >> 1) >> (0x3f - (bVar2 >> 5) & 0x3f));
              local_78 = local_78 << (bVar2 >> 5);
              lVar15 = local_80 + (uVar32 >> 0x3d) + (local_80 >> 3) * -8;
            }
            uVar27 = (iVar4 << (bVar2 >> 5)) + iVar17;
            lVar14 = (longlong)puVar1 - (longlong)puVar23;
            if (lVar14 < 8) {
              uVar31 = uVar16;
              if (0 < lVar14) {
                uVar31 = (ulonglong)(byte)*puVar23;
              }
              uVar30 = uVar16;
              if (lVar14 != 1 && -1 < lVar14 + -1) {
                uVar30 = (ulonglong)*(byte *)((longlong)puVar23 + 1);
              }
              uVar7 = uVar16;
              if (lVar14 != 2 && -1 < lVar14 + -2) {
                uVar7 = (ulonglong)*(byte *)((longlong)puVar23 + 2);
              }
              uVar9 = uVar16;
              if (lVar14 != 3 && -1 < lVar14 + -3) {
                uVar9 = (ulonglong)*(byte *)((longlong)puVar23 + 3);
              }
              lVar14 = (longlong)puVar1 - ((longlong)puVar23 + 4);
              uVar6 = uVar16;
              if (0 < lVar14) {
                uVar6 = (ulonglong)*(byte *)((longlong)puVar23 + 4);
              }
              uVar5 = uVar16;
              if (lVar14 != 1 && -1 < lVar14 + -1) {
                uVar5 = (ulonglong)*(byte *)((longlong)puVar23 + 5);
              }
              uVar20 = uVar16;
              if (lVar14 != 2 && -1 < lVar14 + -2) {
                uVar20 = (ulonglong)*(byte *)((longlong)puVar23 + 6);
              }
              uVar19 = uVar16;
              if (lVar14 != 3 && -1 < lVar14 + -3) {
                uVar19 = (ulonglong)*(byte *)((longlong)puVar23 + 7);
              }
              uVar19 = ((((((uVar31 << 8 | uVar30) << 8 | uVar7) << 8 | uVar9) << 8 | uVar6) << 8 |
                        uVar5) << 8 | uVar20) << 8 | uVar19;
            }
            else {
              uVar31 = *puVar23;
              uVar19 = uVar31 >> 0x38 | (uVar31 & 0xff000000000000) >> 0x28 |
                       (uVar31 & 0xff0000000000) >> 0x18 | (uVar31 & 0xff00000000) >> 8 |
                       (uVar31 & 0xff000000) << 8 | (uVar31 & 0xff0000) << 0x18 |
                       (uVar31 & 0xff00) << 0x28 | uVar31 << 0x38;
            }
            puVar23 = (ulonglong *)((longlong)puVar23 + (lVar15 >> 3));
            local_80 = lVar15 + (lVar15 >> 3) * -8;
            local_78 = local_78 | uVar19 >> (0x3fU - (char)lVar15 & 0x3f);
            iVar4 = (local_6c + 2 >> 2) + (uVar27 >> 1 ^ -(uVar27 & 1));
            if (0xf < iVar4 - 1U) {
              ooLogErrorPre();
              if (g_fp_OodleCore_Plugin_Printf ==
                  (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f3982f3;
              pcVar28 = 
              "OODLE ERROR : LZ corruption : curCodeLen < 1 || curCodeLen > RR_HUFFMAN_MAX_CODELEN_LIMIT ) \n"
              ;
              iVar4 = 0x3de;
              goto LAB_14f3982e8;
            }
            uVar33 = (int)uVar18 + 1;
            uVar18 = (ulonglong)uVar33;
            local_6c = (local_6c * 3 + 2 >> 2) + iVar4;
            _Dst[local_res20] = (uchar)iVar4;
            local_res20 = local_res20 + 1;
            param_1->numCodesOfLen[iVar4] = param_1->numCodesOfLen[iVar4] + 1;
            uVar27 = local_res20;
          } while (uVar33 < uVar12);
        }
        local_70 = local_70 + uVar12;
        if (uVar13 <= uVar27) break;
        uVar18 = uVar16;
        if (local_78 == 0) {
LAB_14f397d40:
          do {
            while( true ) {
              lVar15 = (longlong)puVar1 - (longlong)puVar23;
              if (lVar15 < 8) {
                uVar31 = uVar16;
                if (0 < lVar15) {
                  uVar31 = (ulonglong)(byte)*puVar23;
                }
                uVar30 = uVar16;
                if (lVar15 != 1 && -1 < lVar15 + -1) {
                  uVar30 = (ulonglong)*(byte *)((longlong)puVar23 + 1);
                }
                uVar7 = uVar16;
                if (lVar15 != 2 && -1 < lVar15 + -2) {
                  uVar7 = (ulonglong)*(byte *)((longlong)puVar23 + 2);
                }
                uVar9 = uVar16;
                if (lVar15 != 3 && -1 < lVar15 + -3) {
                  uVar9 = (ulonglong)*(byte *)((longlong)puVar23 + 3);
                }
                lVar15 = (longlong)puVar1 - ((longlong)puVar23 + 4);
                uVar6 = uVar16;
                if (0 < lVar15) {
                  uVar6 = (ulonglong)*(byte *)((longlong)puVar23 + 4);
                }
                uVar5 = uVar16;
                if (lVar15 != 1 && -1 < lVar15 + -1) {
                  uVar5 = (ulonglong)*(byte *)((longlong)puVar23 + 5);
                }
                uVar20 = uVar16;
                if (lVar15 != 2 && -1 < lVar15 + -2) {
                  uVar20 = (ulonglong)*(byte *)((longlong)puVar23 + 6);
                }
                uVar19 = uVar16;
                if (lVar15 != 3 && -1 < lVar15 + -3) {
                  uVar19 = (ulonglong)*(byte *)((longlong)puVar23 + 7);
                }
                uVar19 = ((((((uVar31 << 8 | uVar30) << 8 | uVar7) << 8 | uVar9) << 8 | uVar6) << 8
                          | uVar5) << 8 | uVar20) << 8 | uVar19;
              }
              else {
                uVar31 = *puVar23;
                uVar19 = uVar31 >> 0x38 | (uVar31 & 0xff000000000000) >> 0x28 |
                         (uVar31 & 0xff0000000000) >> 0x18 | (uVar31 & 0xff00000000) >> 8 |
                         (uVar31 & 0xff000000) << 8 | (uVar31 & 0xff0000) << 0x18 |
                         (uVar31 & 0xff00) << 0x28 | uVar31 << 0x38;
              }
              puVar23 = (ulonglong *)((longlong)puVar23 + (local_80 >> 3));
              lVar15 = local_80 + (local_80 >> 3) * -8;
              local_78 = local_78 | uVar19 >> (0x3fU - (char)local_80 & 0x3f);
              iVar4 = (int)uVar18;
              if (local_78 == 0) break;
              lVar14 = 0x3f;
              if (local_78 != 0) {
                for (; local_78 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                }
              }
              uVar33 = -(int)lVar14 + 0x3f;
              if (uVar33 < 0x1f) {
                uVar12 = -(int)lVar14 + 0x40;
                uVar18 = local_78 << ((byte)uVar12 & 0x3f);
                uVar33 = uVar33 + iVar4;
                local_80 = lVar15 + (ulonglong)uVar12;
                uVar12 = uVar25;
                if (uVar33 != 0) {
                  lVar15 = (longlong)puVar1 - (longlong)puVar23;
                  if (lVar15 < 8) {
                    uVar31 = uVar16;
                    if (0 < lVar15) {
                      uVar31 = (ulonglong)(byte)*puVar23;
                    }
                    uVar30 = uVar16;
                    if (lVar15 != 1 && -1 < lVar15 + -1) {
                      uVar30 = (ulonglong)*(byte *)((longlong)puVar23 + 1);
                    }
                    uVar7 = uVar16;
                    if (lVar15 != 2 && -1 < lVar15 + -2) {
                      uVar7 = (ulonglong)*(byte *)((longlong)puVar23 + 2);
                    }
                    uVar9 = uVar16;
                    if (lVar15 != 3 && -1 < lVar15 + -3) {
                      uVar9 = (ulonglong)*(byte *)((longlong)puVar23 + 3);
                    }
                    lVar15 = (longlong)puVar1 - ((longlong)puVar23 + 4);
                    uVar6 = uVar16;
                    if (0 < lVar15) {
                      uVar6 = (ulonglong)*(byte *)((longlong)puVar23 + 4);
                    }
                    uVar5 = uVar16;
                    if (lVar15 != 1 && -1 < lVar15 + -1) {
                      uVar5 = (ulonglong)*(byte *)((longlong)puVar23 + 5);
                    }
                    uVar20 = uVar16;
                    if (lVar15 != 2 && -1 < lVar15 + -2) {
                      uVar20 = (ulonglong)*(byte *)((longlong)puVar23 + 6);
                    }
                    uVar19 = uVar16;
                    if (lVar15 != 3 && -1 < lVar15 + -3) {
                      uVar19 = (ulonglong)*(byte *)((longlong)puVar23 + 7);
                    }
                    uVar19 = ((((((uVar31 << 8 | uVar30) << 8 | uVar7) << 8 | uVar9) << 8 | uVar6)
                               << 8 | uVar5) << 8 | uVar20) << 8 | uVar19;
                  }
                  else {
                    uVar31 = *puVar23;
                    uVar19 = uVar31 >> 0x38 | (uVar31 & 0xff000000000000) >> 0x28 |
                             (uVar31 & 0xff0000000000) >> 0x18 | (uVar31 & 0xff00000000) >> 8 |
                             (uVar31 & 0xff000000) << 8 | (uVar31 & 0xff0000) << 0x18 |
                             (uVar31 & 0xff00) << 0x28 | uVar31 << 0x38;
                  }
                  puVar23 = (ulonglong *)((longlong)puVar23 + (local_80 >> 3));
                  bVar10 = (byte)uVar33;
                  uVar31 = uVar18 | uVar19 >> (0x3fU - (char)local_80 & 0x3f);
                  uVar18 = uVar31 << (bVar10 & 0x3f);
                  local_80 = local_80 + (ulonglong)uVar33 + (local_80 >> 3) * -8;
                  uVar12 = ((1 << (bVar10 & 0x1f)) + (int)(uVar31 >> (-bVar10 & 0x3f))) * 2 - 2;
                }
                goto LAB_14f397fff;
              }
              local_78 = local_78 << 0x1f;
              local_80 = lVar15 + 0x1f;
              uVar18 = (ulonglong)(iVar4 + 0x1f);
            }
            local_80 = 0x3f;
            uVar18 = (ulonglong)(uint)(iVar4 + (0x3f - (int)lVar15));
            local_78 = uVar16;
          } while (puVar23 < puVar1);
          ooLogErrorPre();
          if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
            (*g_fp_OodleCore_Plugin_Printf)
                      (0,"v:\\devel\\projects\\oodle2\\core\\rrvarbitcodes.cpp",0x45,
                       "OODLE ERROR : corruption : ReadUnary past end\n");
          }
          ooLogErrorPost();
          uVar18 = uVar16;
          uVar12 = uVar22;
LAB_14f397fff:
          lVar15 = (longlong)puVar1 - (longlong)puVar23;
          if (lVar15 < 8) {
            uVar31 = uVar16;
            if (0 < lVar15) {
              uVar31 = (ulonglong)(byte)*puVar23;
            }
            uVar30 = uVar16;
            if (lVar15 != 1 && -1 < lVar15 + -1) {
              uVar30 = (ulonglong)*(byte *)((longlong)puVar23 + 1);
            }
            uVar7 = uVar16;
            if (lVar15 != 2 && -1 < lVar15 + -2) {
              uVar7 = (ulonglong)*(byte *)((longlong)puVar23 + 2);
            }
            uVar9 = uVar16;
            if (lVar15 != 3 && -1 < lVar15 + -3) {
              uVar9 = (ulonglong)*(byte *)((longlong)puVar23 + 3);
            }
            lVar15 = (longlong)puVar1 - ((longlong)puVar23 + 4);
            uVar6 = uVar16;
            if (0 < lVar15) {
              uVar6 = (ulonglong)*(byte *)((longlong)puVar23 + 4);
            }
            uVar5 = uVar16;
            if (lVar15 != 1 && -1 < lVar15 + -1) {
              uVar5 = (ulonglong)*(byte *)((longlong)puVar23 + 5);
            }
            uVar20 = uVar16;
            if (lVar15 != 2 && -1 < lVar15 + -2) {
              uVar20 = (ulonglong)*(byte *)((longlong)puVar23 + 6);
            }
            uVar19 = uVar16;
            if (lVar15 != 3 && -1 < lVar15 + -3) {
              uVar19 = (ulonglong)*(byte *)((longlong)puVar23 + 7);
            }
            uVar19 = ((((((uVar31 << 8 | uVar30) << 8 | uVar7) << 8 | uVar9) << 8 | uVar6) << 8 |
                      uVar5) << 8 | uVar20) << 8 | uVar19;
          }
          else {
            uVar31 = *puVar23;
            uVar19 = uVar31 >> 0x38 | (uVar31 & 0xff000000000000) >> 0x28 |
                     (uVar31 & 0xff0000000000) >> 0x18 | (uVar31 & 0xff00000000) >> 8 |
                     (uVar31 & 0xff000000) << 8 | (uVar31 & 0xff0000) << 0x18 |
                     (uVar31 & 0xff00) << 0x28 | uVar31 << 0x38;
          }
          puVar23 = (ulonglong *)((longlong)puVar23 + (local_80 >> 3));
          uVar18 = uVar18 | uVar19 >> (0x3fU - (char)local_80 & 0x3f);
          local_78 = uVar18 * 2;
          local_80 = local_80 + (local_80 >> 3) * -8 + 1;
          iVar4 = uVar12 - (int)((longlong)uVar18 >> 0x3f);
        }
        else {
          lVar15 = 0x3f;
          if (local_78 != 0) {
            for (; local_78 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          iVar4 = (0x40 - (int)lVar15) * 2;
          if (0x1e < iVar4) goto LAB_14f397d40;
          uVar18 = local_78 >> (-(byte)iVar4 & 0x3f);
          local_78 = local_78 << ((byte)iVar4 & 0x3f);
          local_80 = local_80 + iVar4;
          iVar4 = (int)uVar18 + -2;
          local_res20 = uVar27;
        }
        if (uVar13 - local_res20 < iVar4 + 1U) {
          ooLogErrorPre();
          if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
          goto LAB_14f3982f3;
          pcVar28 = "OODLE ERROR : LZ corruption : i + RunLen > packNumSymbols \n";
          iVar4 = 0x3f8;
          goto LAB_14f3982e8;
        }
        local_res20 = local_res20 + iVar4 + 1U;
        uVar18 = (ulonglong)local_res20;
      } while (local_res20 < uVar13);
    }
    param_1->topSym = uVar27 - 1;
    param_1->gotNumSymbols = local_70;
    iVar24 = param_1->numCodesOfLen[0];
    while (iVar24 == 0) {
      uVar25 = (int)uVar16 + 1;
      uVar16 = (ulonglong)uVar25;
      iVar24 = param_1->numCodesOfLen[uVar16];
    }
    uVar16 = 0x1f;
    uVar13 = 0x1f;
    iVar24 = param_1->numCodesOfLen[0x1f];
    while (iVar24 == 0) {
      uVar13 = (int)uVar16 - 1;
      uVar16 = (ulonglong)uVar13;
      iVar24 = param_1->numCodesOfLen[uVar16];
    }
    param_1->maxCodeLen = uVar13;
    param_1->minCodeLen = uVar25;
  }
  else {
    if (1 < uVar13) {
      iVar4 = 0x1f;
      if (uVar13 - 1 != 0) {
        for (; uVar13 - 1 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      uVar25 = iVar4 + 1;
    }
    lVar15 = (longlong)(int)uVar25;
    local_80 = local_80 + lVar15;
    bVar2 = (byte)uVar25;
    bVar10 = 0x40 - bVar2;
    uVar32 = uVar18 * 2 << (bVar2 & 0x3f);
    iVar4 = (int)(uVar18 * 2 >> (bVar10 & 0x3f));
    param_1->gotNumSymbols = iVar4;
    local_78 = uVar32;
    if ((int)uVar13 < iVar4) {
      ooLogErrorPre();
      if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
        pcVar28 = "OODLE ERROR : LZ corruption : HI->gotNumSymbols > HI->numSymbols\n";
        iVar4 = 0x2a9;
        goto LAB_14f3982e8;
      }
LAB_14f3982f3:
      ooLogErrorPost();
      goto LAB_14f39823d;
    }
    if (iVar4 == 0) {
      param_1->minCodeLen = 0;
      param_1->maxCodeLen = 0;
    }
    else {
      if (iVar4 != 1) {
        memset(param_1->codeLenTable,0,(longlong)(int)uVar13);
        local_80 = local_80 + 3;
        local_78 = uVar32 << 3;
        if ((uint)(uVar32 >> 0x3d) < 6) {
          param_1->minCodeLen = 0x20;
          param_1->maxCodeLen = 0;
          param_1->topSym = -1;
          if (0 < param_1->gotNumSymbols) {
            bVar3 = (byte)(uVar32 >> 0x38);
            do {
              if ((longlong)puVar1 - (longlong)puVar23 < 8) {
                uVar25 = rrVB_Get32BE_Masked((byte *)((longlong)puVar23 + 4),(uchar *)puVar1);
                uVar13 = rrVB_Get32BE_Masked((uchar *)puVar23,(uchar *)puVar1);
                uVar18 = CONCAT44(uVar13,uVar25);
              }
              else {
                uVar18 = *puVar23;
                uVar18 = uVar18 >> 0x38 | (uVar18 & 0xff000000000000) >> 0x28 |
                         (uVar18 & 0xff0000000000) >> 0x18 | (uVar18 & 0xff00000000) >> 8 |
                         (uVar18 & 0xff000000) << 8 | (uVar18 & 0xff0000) << 0x18 |
                         (uVar18 & 0xff00) << 0x28 | uVar18 << 0x38;
              }
              puVar23 = (ulonglong *)((longlong)puVar23 + (local_80 >> 3));
              uVar18 = local_78 | uVar18 >> (0x3fU - (char)local_80 & 0x3f);
              uVar31 = uVar18 << (bVar2 & 0x3f);
              local_78 = uVar31 << (bVar3 >> 5);
              iVar4 = (int)((uVar31 >> 1) >> (0x3f - (bVar3 >> 5) & 0x3f));
              iVar17 = iVar4 + 1;
              local_80 = local_80 + (uVar32 >> 0x3d) + (local_80 >> 3) * -8 + lVar15;
              iVar26 = (int)(uVar18 >> (bVar10 & 0x3f));
              if ((param_1->numSymbols <= iVar26) || (0x10 < iVar17)) {
                ooLogErrorPre();
                if (g_fp_OodleCore_Plugin_Printf ==
                    (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f3982f3;
                pcVar28 = 
                "OODLE ERROR : LZ corruption : sym >= HI->numSymbols || len > RR_HUFFMAN_MAX_CODELEN_LIMIT \n"
                ;
                iVar4 = 0x2f3;
                goto LAB_14f3982e8;
              }
              param_1->codeLenTable[iVar26] = (uchar)iVar17;
              if (iVar26 <= param_1->topSym) {
                ooLogErrorPre();
                if (g_fp_OodleCore_Plugin_Printf ==
                    (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) goto LAB_14f3982f3;
                pcVar28 = "OODLE ERROR : LZ corruption : sym <= HI->topSym\n";
                iVar4 = 0x2fc;
                goto LAB_14f3982e8;
              }
              param_1->topSym = iVar26;
              param_1->numCodesOfLen[(longlong)iVar4 + 1] =
                   param_1->numCodesOfLen[(longlong)iVar4 + 1] + 1;
              iVar4 = iVar17;
              if (iVar17 < param_1->maxCodeLen) {
                iVar4 = param_1->maxCodeLen;
              }
              param_1->maxCodeLen = iVar4;
              if (param_1->minCodeLen < iVar17) {
                iVar17 = param_1->minCodeLen;
              }
              uVar25 = (int)uVar16 + 1;
              uVar16 = (ulonglong)uVar25;
              param_1->minCodeLen = iVar17;
            } while ((int)uVar25 < param_1->gotNumSymbols);
          }
          goto LAB_14f398238;
        }
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf == (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0)
        goto LAB_14f3982f3;
        pcVar28 = "OODLE ERROR : LZ corruption : log2CodeLen > 5\n";
        iVar4 = 0x2d3;
        goto LAB_14f3982e8;
      }
      if ((longlong)puVar1 - (longlong)puVar23 < 8) {
        uVar21 = rrVB_Get64BE_Masked((uchar *)puVar23,(uchar *)puVar1);
      }
      else {
        uVar16 = *puVar23;
        uVar21 = uVar16 >> 0x38 | (uVar16 & 0xff000000000000) >> 0x28 |
                 (uVar16 & 0xff0000000000) >> 0x18 | (uVar16 & 0xff00000000) >> 8 |
                 (uVar16 & 0xff000000) << 8 | (uVar16 & 0xff0000) << 0x18 |
                 (uVar16 & 0xff00) << 0x28 | uVar16 << 0x38;
      }
      puVar23 = (ulonglong *)((longlong)puVar23 + (local_80 >> 3));
      uVar32 = uVar32 | uVar21 >> (0x3fU - (char)local_80 & 0x3f);
      uVar16 = uVar32 >> (bVar10 & 0x3f);
      local_78 = uVar32 << (bVar2 & 0x3f);
      local_80 = local_80 + lVar15 + (local_80 >> 3) * -8;
      if ((ulonglong)(longlong)(int)uVar13 <= uVar16) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          pcVar28 = "OODLE ERROR : LZ corruption : HI->oneChar >= HI->numSymbols\n";
          iVar4 = 0x2ba;
          goto LAB_14f3982e8;
        }
        goto LAB_14f3982f3;
      }
      param_1->minCodeLen = 0;
      param_1->maxCodeLen = 0;
      param_1->oneChar = (uint)uVar16 & 0xffff;
      param_1->topSym = (uint)uVar16;
      param_1->codeLenTable[uVar16] = '\0';
      *param_1->decodeTable = (ushort)uVar16;
    }
  }
LAB_14f398238:
  iVar24 = 1;
LAB_14f39823d:
  param_2->m_bits = local_78;
  param_2->m_inv_bitlen = local_80;
  param_2->m_end = (uchar *)puVar1;
  param_2->m_cur = (uchar *)puVar23;
  return iVar24;
}

// rrIlog2ceil @ 14f398610

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

// rrPtrDiff @ 14f398630

long64 __cdecl oo2::rrPtrDiff(long64 param_1)

{
  return param_1;
}

// rrUnfoldNegatives @ 14f398640

int __cdecl oo2::rrUnfoldNegatives(uint param_1)

{
  return -(param_1 & 1) ^ param_1 >> 1;
}

// rrVB_Get32BE_Masked @ 14f398660

uint __cdecl oo2::rrVB_Get32BE_Masked(uchar *param_1,uchar *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  lVar1 = (longlong)param_2 - (longlong)param_1;
  uVar3 = 0;
  if (lVar1 < 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = (uint)*param_1;
  }
  if (lVar1 == 1 || lVar1 + -1 < 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (uint)param_1[1];
  }
  if (lVar1 == 2 || lVar1 + -2 < 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (uint)param_1[2];
  }
  if (lVar1 != 3 && -1 < lVar1 + -3) {
    uVar3 = (uint)param_1[3];
  }
  return ((uVar2 << 8 | uVar5) << 8 | uVar4) << 8 | uVar3;
}

// rrVB_Get64BE_Masked @ 14f3986e0

ulong64 __cdecl oo2::rrVB_Get64BE_Masked(uchar *param_1,uchar *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar5 = 0;
  lVar6 = (longlong)param_2 - (longlong)param_1;
  uVar4 = uVar5;
  if (0 < lVar6) {
    uVar4 = (ulonglong)*param_1;
  }
  uVar2 = uVar5;
  if (lVar6 != 1 && -1 < lVar6 + -1) {
    uVar2 = (ulonglong)param_1[1];
  }
  uVar8 = uVar5;
  if (lVar6 != 2 && -1 < lVar6 + -2) {
    uVar8 = (ulonglong)param_1[2];
  }
  uVar1 = uVar5;
  if (lVar6 != 3 && -1 < lVar6 + -3) {
    uVar1 = (ulonglong)param_1[3];
  }
  lVar6 = (longlong)param_2 - (longlong)(param_1 + 4);
  uVar3 = uVar5;
  if (0 < lVar6) {
    uVar3 = (ulonglong)param_1[4];
  }
  uVar9 = uVar5;
  if (lVar6 != 1 && -1 < lVar6 + -1) {
    uVar9 = (ulonglong)param_1[5];
  }
  uVar7 = uVar5;
  if (lVar6 != 2 && -1 < lVar6 + -2) {
    uVar7 = (ulonglong)param_1[6];
  }
  if (lVar6 != 3 && -1 < lVar6 + -3) {
    uVar5 = (ulonglong)param_1[7];
  }
  return ((((((uVar4 << 8 | uVar2) << 8 | uVar8) << 8 | uVar1) << 8 | uVar3) << 8 | uVar9) << 8 |
         uVar7) << 8 | uVar5;
}

// rrVarBits_ReadEliasGamma @ 14f3987c0

uint __cdecl
oo2::rrVarBits_ReadEliasGamma(ulong64 *param_1,long64 *param_2,uchar **param_3,uchar **param_4)

{
  uint uVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  byte bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  long64 lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  
  lVar16 = *param_2;
  uVar10 = 0;
  uVar11 = uVar10;
  while( true ) {
    while( true ) {
      puVar2 = (ulonglong *)*param_3;
      lVar15 = (longlong)*param_4 - (longlong)puVar2;
      lVar13 = lVar16 >> 3;
      if (lVar15 < 8) {
        uVar9 = uVar10;
        if (0 < lVar15) {
          uVar9 = (ulonglong)(byte)*puVar2;
        }
        uVar17 = uVar10;
        if (lVar15 != 1 && -1 < lVar15 + -1) {
          uVar17 = (ulonglong)*(byte *)((longlong)puVar2 + 1);
        }
        uVar4 = uVar10;
        if (lVar15 != 2 && -1 < lVar15 + -2) {
          uVar4 = (ulonglong)*(byte *)((longlong)puVar2 + 2);
        }
        uVar3 = uVar10;
        if (lVar15 != 3 && -1 < lVar15 + -3) {
          uVar3 = (ulonglong)*(byte *)((longlong)puVar2 + 3);
        }
        lVar15 = (longlong)*param_4 - ((longlong)puVar2 + 4);
        uVar18 = uVar10;
        if (0 < lVar15) {
          uVar18 = (ulonglong)*(byte *)((longlong)puVar2 + 4);
        }
        uVar7 = uVar10;
        if (lVar15 != 1 && -1 < lVar15 + -1) {
          uVar7 = (ulonglong)*(byte *)((longlong)puVar2 + 5);
        }
        uVar6 = uVar10;
        if (lVar15 != 2 && -1 < lVar15 + -2) {
          uVar6 = (ulonglong)*(byte *)((longlong)puVar2 + 6);
        }
        uVar8 = uVar10;
        if (lVar15 != 3 && -1 < lVar15 + -3) {
          uVar8 = (ulonglong)*(byte *)((longlong)puVar2 + 7);
        }
        lVar16 = *param_2;
        uVar8 = ((((((uVar9 << 8 | uVar17) << 8 | uVar4) << 8 | uVar3) << 8 | uVar18) << 8 | uVar7)
                 << 8 | uVar6) << 8 | uVar8;
      }
      else {
        uVar9 = *puVar2;
        uVar8 = uVar9 >> 0x38 | (uVar9 & 0xff000000000000) >> 0x28 |
                (uVar9 & 0xff0000000000) >> 0x18 | (uVar9 & 0xff00000000) >> 8 |
                (uVar9 & 0xff000000) << 8 | (uVar9 & 0xff0000) << 0x18 | (uVar9 & 0xff00) << 0x28 |
                uVar9 << 0x38;
      }
      *param_1 = *param_1 | uVar8 >> (0x3fU - (char)lVar16 & 0x3f);
      *param_3 = *param_3 + lVar13;
      lVar13 = *param_2 + lVar13 * -8;
      *param_2 = lVar13;
      uVar9 = *param_1;
      iVar12 = (int)uVar11;
      if (uVar9 != 0) break;
      *param_1 = 0;
      lVar13 = 0x3f - lVar13;
      lVar16 = *param_2 + lVar13;
      uVar11 = (ulonglong)(uint)(iVar12 + (int)lVar13);
      *param_2 = lVar16;
      if (*param_4 <= *param_3) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          (*g_fp_OodleCore_Plugin_Printf)
                    (0,"v:\\devel\\projects\\oodle2\\core\\rrvarbitcodes.cpp",0x45,
                     "OODLE ERROR : corruption : ReadUnary past end\n");
        }
        ooLogErrorPost();
        return 0;
      }
    }
    lVar13 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar14 = -(int)lVar13 + 0x3f;
    if (uVar14 < 0x1f) break;
    *param_1 = uVar9 << 0x1f;
    *param_2 = *param_2 + 0x1f;
    lVar16 = *param_2;
    uVar11 = (ulonglong)(iVar12 + 0x1f);
  }
  uVar1 = -(int)lVar13 + 0x40;
  *param_1 = uVar9 << ((byte)uVar1 & 0x3f);
  lVar13 = *param_2 + (ulonglong)uVar1;
  *param_2 = lVar13;
  uVar14 = iVar12 + uVar14;
  if (uVar14 == 0) {
    return 0;
  }
  puVar2 = (ulonglong *)*param_3;
  lVar15 = (longlong)*param_4 - (longlong)puVar2;
  if (lVar15 < 8) {
    uVar11 = uVar10;
    if (0 < lVar15) {
      uVar11 = (ulonglong)(byte)*puVar2;
    }
    uVar9 = uVar10;
    if (lVar15 != 1 && -1 < lVar15 + -1) {
      uVar9 = (ulonglong)*(byte *)((longlong)puVar2 + 1);
    }
    uVar17 = uVar10;
    if (lVar15 != 2 && -1 < lVar15 + -2) {
      uVar17 = (ulonglong)*(byte *)((longlong)puVar2 + 2);
    }
    uVar4 = uVar10;
    if (lVar15 != 3 && -1 < lVar15 + -3) {
      uVar4 = (ulonglong)*(byte *)((longlong)puVar2 + 3);
    }
    lVar15 = (longlong)*param_4 - ((longlong)puVar2 + 4);
    uVar3 = uVar10;
    if (0 < lVar15) {
      uVar3 = (ulonglong)*(byte *)((longlong)puVar2 + 4);
    }
    uVar18 = uVar10;
    if (lVar15 != 1 && -1 < lVar15 + -1) {
      uVar18 = (ulonglong)*(byte *)((longlong)puVar2 + 5);
    }
    uVar7 = uVar10;
    if (lVar15 != 2 && -1 < lVar15 + -2) {
      uVar7 = (ulonglong)*(byte *)((longlong)puVar2 + 6);
    }
    if (lVar15 != 3 && -1 < lVar15 + -3) {
      uVar10 = (ulonglong)*(byte *)((longlong)puVar2 + 7);
    }
    uVar10 = ((((((uVar11 << 8 | uVar9) << 8 | uVar17) << 8 | uVar4) << 8 | uVar3) << 8 | uVar18) <<
              8 | uVar7) << 8 | uVar10;
  }
  else {
    uVar11 = *puVar2;
    uVar10 = uVar11 >> 0x38 | (uVar11 & 0xff000000000000) >> 0x28 |
             (uVar11 & 0xff0000000000) >> 0x18 | (uVar11 & 0xff00000000) >> 8 |
             (uVar11 & 0xff000000) << 8 | (uVar11 & 0xff0000) << 0x18 | (uVar11 & 0xff00) << 0x28 |
             uVar11 << 0x38;
  }
  *param_1 = *param_1 | uVar10 >> (0x3fU - (char)lVar13 & 0x3f);
  *param_3 = *param_3 + (lVar13 >> 3);
  *param_2 = *param_2 + (lVar13 >> 3) * -8;
  uVar11 = *param_1;
  bVar5 = (byte)uVar14;
  *param_1 = uVar11 << (bVar5 & 0x3f);
  *param_2 = *param_2 + (ulonglong)uVar14;
  return (1 << (bVar5 & 0x1f)) + -1 + (int)(uVar11 >> (0x40 - bVar5 & 0x3f));
}

// rrVarBits_ReadExpGolomb @ 14f398b20

uint __cdecl
oo2::rrVarBits_ReadExpGolomb
          (ulong64 *param_1,long64 *param_2,uchar **param_3,uchar **param_4,uint param_5)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  byte bVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  long64 lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  
  lVar17 = *param_2;
  uVar11 = 0;
  uVar10 = uVar11;
  do {
    while( true ) {
      puVar1 = (ulonglong *)*param_3;
      lVar16 = (longlong)*param_4 - (longlong)puVar1;
      lVar14 = lVar17 >> 3;
      if (lVar16 < 8) {
        uVar8 = uVar11;
        if (0 < lVar16) {
          uVar8 = (ulonglong)(byte)*puVar1;
        }
        uVar18 = uVar11;
        if (lVar16 != 1 && -1 < lVar16 + -1) {
          uVar18 = (ulonglong)*(byte *)((longlong)puVar1 + 1);
        }
        uVar3 = uVar11;
        if (lVar16 != 2 && -1 < lVar16 + -2) {
          uVar3 = (ulonglong)*(byte *)((longlong)puVar1 + 2);
        }
        uVar2 = uVar11;
        if (lVar16 != 3 && -1 < lVar16 + -3) {
          uVar2 = (ulonglong)*(byte *)((longlong)puVar1 + 3);
        }
        lVar16 = (longlong)*param_4 - ((longlong)puVar1 + 4);
        uVar19 = uVar11;
        if (0 < lVar16) {
          uVar19 = (ulonglong)*(byte *)((longlong)puVar1 + 4);
        }
        uVar6 = uVar11;
        if (lVar16 != 1 && -1 < lVar16 + -1) {
          uVar6 = (ulonglong)*(byte *)((longlong)puVar1 + 5);
        }
        uVar9 = uVar11;
        if (lVar16 != 2 && -1 < lVar16 + -2) {
          uVar9 = (ulonglong)*(byte *)((longlong)puVar1 + 6);
        }
        uVar7 = uVar11;
        if (lVar16 != 3 && -1 < lVar16 + -3) {
          uVar7 = (ulonglong)*(byte *)((longlong)puVar1 + 7);
        }
        lVar17 = *param_2;
        uVar7 = ((((((uVar8 << 8 | uVar18) << 8 | uVar3) << 8 | uVar2) << 8 | uVar19) << 8 | uVar6)
                 << 8 | uVar9) << 8 | uVar7;
      }
      else {
        uVar8 = *puVar1;
        uVar7 = uVar8 >> 0x38 | (uVar8 & 0xff000000000000) >> 0x28 |
                (uVar8 & 0xff0000000000) >> 0x18 | (uVar8 & 0xff00000000) >> 8 |
                (uVar8 & 0xff000000) << 8 | (uVar8 & 0xff0000) << 0x18 | (uVar8 & 0xff00) << 0x28 |
                uVar8 << 0x38;
      }
      *param_1 = *param_1 | uVar7 >> (0x3fU - (char)lVar17 & 0x3f);
      *param_3 = *param_3 + lVar14;
      lVar14 = *param_2 + lVar14 * -8;
      *param_2 = lVar14;
      uVar8 = *param_1;
      iVar12 = (int)uVar10;
      iVar13 = 0;
      if (uVar8 != 0) break;
      *param_1 = 0;
      lVar14 = 0x3f - lVar14;
      lVar17 = *param_2 + lVar14;
      uVar10 = (ulonglong)(uint)(iVar12 + (int)lVar14);
      *param_2 = lVar17;
      if (*param_4 <= *param_3) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          (*g_fp_OodleCore_Plugin_Printf)
                    (0,"v:\\devel\\projects\\oodle2\\core\\rrvarbitcodes.cpp",0x45,
                     "OODLE ERROR : corruption : ReadUnary past end\n");
        }
        ooLogErrorPost();
        lVar17 = *param_2;
LAB_14f398e5f:
        puVar1 = (ulonglong *)*param_3;
        lVar16 = lVar17 >> 3;
        lVar14 = (longlong)*param_4 - (longlong)puVar1;
        if (lVar14 < 8) {
          uVar10 = uVar11;
          if (0 < lVar14) {
            uVar10 = (ulonglong)(byte)*puVar1;
          }
          uVar8 = uVar11;
          if (lVar14 != 1 && -1 < lVar14 + -1) {
            uVar8 = (ulonglong)*(byte *)((longlong)puVar1 + 1);
          }
          uVar18 = uVar11;
          if (lVar14 != 2 && -1 < lVar14 + -2) {
            uVar18 = (ulonglong)*(byte *)((longlong)puVar1 + 2);
          }
          uVar3 = uVar11;
          if (lVar14 != 3 && -1 < lVar14 + -3) {
            uVar3 = (ulonglong)*(byte *)((longlong)puVar1 + 3);
          }
          lVar14 = (longlong)*param_4 - ((longlong)puVar1 + 4);
          uVar2 = uVar11;
          if (0 < lVar14) {
            uVar2 = (ulonglong)*(byte *)((longlong)puVar1 + 4);
          }
          uVar19 = uVar11;
          if (lVar14 != 1 && -1 < lVar14 + -1) {
            uVar19 = (ulonglong)*(byte *)((longlong)puVar1 + 5);
          }
          uVar6 = uVar11;
          if (lVar14 != 2 && -1 < lVar14 + -2) {
            uVar6 = (ulonglong)*(byte *)((longlong)puVar1 + 6);
          }
          if (lVar14 != 3 && -1 < lVar14 + -3) {
            uVar11 = (ulonglong)*(byte *)((longlong)puVar1 + 7);
          }
          lVar17 = *param_2;
          uVar11 = ((((((uVar10 << 8 | uVar8) << 8 | uVar18) << 8 | uVar3) << 8 | uVar2) << 8 |
                    uVar19) << 8 | uVar6) << 8 | uVar11;
        }
        else {
          uVar10 = *puVar1;
          uVar11 = uVar10 >> 0x38 | (uVar10 & 0xff000000000000) >> 0x28 |
                   (uVar10 & 0xff0000000000) >> 0x18 | (uVar10 & 0xff00000000) >> 8 |
                   (uVar10 & 0xff000000) << 8 | (uVar10 & 0xff0000) << 0x18 |
                   (uVar10 & 0xff00) << 0x28 | uVar10 << 0x38;
        }
        bVar4 = (byte)param_5;
        *param_1 = *param_1 | uVar11 >> (0x3fU - (char)lVar17 & 0x3f);
        *param_3 = *param_3 + lVar16;
        *param_2 = *param_2 + lVar16 * -8;
        uVar10 = *param_1;
        *param_1 = uVar10 << (bVar4 & 0x3f);
        *param_2 = *param_2 + (ulonglong)param_5;
        return (int)((uVar10 >> 1) >> (0x3f - bVar4 & 0x3f)) + (iVar13 << (bVar4 & 0x1f));
      }
    }
    lVar14 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar15 = -(int)lVar14 + 0x3f;
    if (uVar15 < 0x1f) {
      uVar5 = -(int)lVar14 + 0x40;
      uVar15 = uVar15 + iVar12;
      *param_1 = uVar8 << ((byte)uVar5 & 0x3f);
      lVar17 = *param_2 + (ulonglong)uVar5;
      *param_2 = lVar17;
      if (uVar15 != 0) {
        puVar1 = (ulonglong *)*param_3;
        lVar14 = (longlong)*param_4 - (longlong)puVar1;
        if (lVar14 < 8) {
          uVar10 = uVar11;
          if (0 < lVar14) {
            uVar10 = (ulonglong)(byte)*puVar1;
          }
          uVar8 = uVar11;
          if (lVar14 != 1 && -1 < lVar14 + -1) {
            uVar8 = (ulonglong)*(byte *)((longlong)puVar1 + 1);
          }
          uVar18 = uVar11;
          if (lVar14 != 2 && -1 < lVar14 + -2) {
            uVar18 = (ulonglong)*(byte *)((longlong)puVar1 + 2);
          }
          uVar3 = uVar11;
          if (lVar14 != 3 && -1 < lVar14 + -3) {
            uVar3 = (ulonglong)*(byte *)((longlong)puVar1 + 3);
          }
          lVar14 = (longlong)*param_4 - ((longlong)puVar1 + 4);
          uVar2 = uVar11;
          if (0 < lVar14) {
            uVar2 = (ulonglong)*(byte *)((longlong)puVar1 + 4);
          }
          uVar19 = uVar11;
          if (lVar14 != 1 && -1 < lVar14 + -1) {
            uVar19 = (ulonglong)*(byte *)((longlong)puVar1 + 5);
          }
          uVar6 = uVar11;
          if (lVar14 != 2 && -1 < lVar14 + -2) {
            uVar6 = (ulonglong)*(byte *)((longlong)puVar1 + 6);
          }
          uVar9 = uVar11;
          if (lVar14 != 3 && -1 < lVar14 + -3) {
            uVar9 = (ulonglong)*(byte *)((longlong)puVar1 + 7);
          }
          uVar9 = ((((((uVar10 << 8 | uVar8) << 8 | uVar18) << 8 | uVar3) << 8 | uVar2) << 8 |
                   uVar19) << 8 | uVar6) << 8 | uVar9;
        }
        else {
          uVar10 = *puVar1;
          uVar9 = uVar10 >> 0x38 | (uVar10 & 0xff000000000000) >> 0x28 |
                  (uVar10 & 0xff0000000000) >> 0x18 | (uVar10 & 0xff00000000) >> 8 |
                  (uVar10 & 0xff000000) << 8 | (uVar10 & 0xff0000) << 0x18 |
                  (uVar10 & 0xff00) << 0x28 | uVar10 << 0x38;
        }
        *param_1 = *param_1 | uVar9 >> (0x3fU - (char)lVar17 & 0x3f);
        *param_3 = *param_3 + (lVar17 >> 3);
        *param_2 = *param_2 + (lVar17 >> 3) * -8;
        uVar10 = *param_1;
        bVar4 = (byte)uVar15;
        *param_1 = uVar10 << (bVar4 & 0x3f);
        *param_2 = *param_2 + (ulonglong)uVar15;
        lVar17 = *param_2;
        iVar13 = (1 << (bVar4 & 0x1f)) + -1 + (int)(uVar10 >> (0x40 - bVar4 & 0x3f));
      }
      goto LAB_14f398e5f;
    }
    *param_1 = uVar8 << 0x1f;
    *param_2 = *param_2 + 0x1f;
    lVar17 = *param_2;
    uVar10 = (ulonglong)(iVar12 + 0x1f);
  } while( true );
}

// rrVarBits_ReadExpGolomb_Small @ 14f398fc0

uint __cdecl
oo2::rrVarBits_ReadExpGolomb_Small
          (ulong64 *param_1,long64 *param_2,uchar **param_3,uchar **param_4,uint param_5)

{
  ulonglong *puVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  byte bVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  long64 lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  
  uVar12 = *param_1;
  iVar16 = 0x40;
  if (uVar12 != 0) {
    lVar7 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar16 = 0x3f - (int)lVar7;
  }
  iVar16 = param_5 + 1 + iVar16 * 2;
  bVar2 = (byte)param_5;
  if (iVar16 < 0x1f) {
    *param_1 = uVar12 << ((byte)iVar16 & 0x3f);
    *param_2 = *param_2 + (longlong)iVar16;
    return (int)(uVar12 >> (0x40 - (byte)iVar16 & 0x3f)) - (1 << (bVar2 & 0x1f));
  }
  uVar13 = 0;
  uVar12 = uVar13;
  while( true ) {
    lVar18 = *param_2;
    while( true ) {
      puVar1 = (ulonglong *)*param_3;
      lVar7 = (longlong)*param_4 - (longlong)puVar1;
      lVar15 = lVar18 >> 3;
      if (lVar7 < 8) {
        uVar10 = uVar13;
        if (0 < lVar7) {
          uVar10 = (ulonglong)(byte)*puVar1;
        }
        uVar19 = uVar13;
        if (lVar7 != 1 && -1 < lVar7 + -1) {
          uVar19 = (ulonglong)*(byte *)((longlong)puVar1 + 1);
        }
        uVar4 = uVar13;
        if (lVar7 != 2 && -1 < lVar7 + -2) {
          uVar4 = (ulonglong)*(byte *)((longlong)puVar1 + 2);
        }
        uVar3 = uVar13;
        if (lVar7 != 3 && -1 < lVar7 + -3) {
          uVar3 = (ulonglong)*(byte *)((longlong)puVar1 + 3);
        }
        lVar7 = (longlong)*param_4 - ((longlong)puVar1 + 4);
        uVar20 = uVar13;
        if (0 < lVar7) {
          uVar20 = (ulonglong)*(byte *)((longlong)puVar1 + 4);
        }
        uVar8 = uVar13;
        if (lVar7 != 1 && -1 < lVar7 + -1) {
          uVar8 = (ulonglong)*(byte *)((longlong)puVar1 + 5);
        }
        uVar11 = uVar13;
        if (lVar7 != 2 && -1 < lVar7 + -2) {
          uVar11 = (ulonglong)*(byte *)((longlong)puVar1 + 6);
        }
        uVar9 = uVar13;
        if (lVar7 != 3 && -1 < lVar7 + -3) {
          uVar9 = (ulonglong)*(byte *)((longlong)puVar1 + 7);
        }
        lVar18 = *param_2;
        uVar9 = ((((((uVar10 << 8 | uVar19) << 8 | uVar4) << 8 | uVar3) << 8 | uVar20) << 8 | uVar8)
                 << 8 | uVar11) << 8 | uVar9;
      }
      else {
        uVar10 = *puVar1;
        uVar9 = uVar10 >> 0x38 | (uVar10 & 0xff000000000000) >> 0x28 |
                (uVar10 & 0xff0000000000) >> 0x18 | (uVar10 & 0xff00000000) >> 8 |
                (uVar10 & 0xff000000) << 8 | (uVar10 & 0xff0000) << 0x18 | (uVar10 & 0xff00) << 0x28
                | uVar10 << 0x38;
      }
      *param_1 = *param_1 | uVar9 >> (0x3fU - (char)lVar18 & 0x3f);
      *param_3 = *param_3 + lVar15;
      lVar7 = *param_2 + lVar15 * -8;
      *param_2 = lVar7;
      uVar10 = *param_1;
      iVar16 = (int)uVar12;
      iVar14 = 0;
      if (uVar10 != 0) break;
      *param_1 = 0;
      lVar7 = 0x3f - lVar7;
      lVar18 = *param_2 + lVar7;
      uVar12 = (ulonglong)(uint)(iVar16 + (int)lVar7);
      *param_2 = lVar18;
      if (*param_4 <= *param_3) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          (*g_fp_OodleCore_Plugin_Printf)
                    (0,"v:\\devel\\projects\\oodle2\\core\\rrvarbitcodes.cpp",0x45,
                     "OODLE ERROR : corruption : ReadUnary past end\n");
        }
        ooLogErrorPost();
        lVar18 = *param_2;
        goto LAB_14f39932c;
      }
    }
    lVar7 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar17 = -(int)lVar7 + 0x3f;
    if (uVar17 < 0x1f) break;
    *param_1 = uVar10 << 0x1f;
    *param_2 = *param_2 + 0x1f;
    uVar12 = (ulonglong)(iVar16 + 0x1f);
  }
  uVar6 = -(int)lVar7 + 0x40;
  uVar17 = uVar17 + iVar16;
  *param_1 = uVar10 << ((byte)uVar6 & 0x3f);
  lVar18 = *param_2 + (ulonglong)uVar6;
  *param_2 = lVar18;
  if (uVar17 != 0) {
    puVar1 = (ulonglong *)*param_3;
    lVar7 = (longlong)*param_4 - (longlong)puVar1;
    if (lVar7 < 8) {
      uVar12 = uVar13;
      if (0 < lVar7) {
        uVar12 = (ulonglong)(byte)*puVar1;
      }
      uVar10 = uVar13;
      if (lVar7 != 1 && -1 < lVar7 + -1) {
        uVar10 = (ulonglong)*(byte *)((longlong)puVar1 + 1);
      }
      uVar19 = uVar13;
      if (lVar7 != 2 && -1 < lVar7 + -2) {
        uVar19 = (ulonglong)*(byte *)((longlong)puVar1 + 2);
      }
      uVar4 = uVar13;
      if (lVar7 != 3 && -1 < lVar7 + -3) {
        uVar4 = (ulonglong)*(byte *)((longlong)puVar1 + 3);
      }
      lVar7 = (longlong)*param_4 - ((longlong)puVar1 + 4);
      uVar3 = uVar13;
      if (0 < lVar7) {
        uVar3 = (ulonglong)*(byte *)((longlong)puVar1 + 4);
      }
      uVar20 = uVar13;
      if (lVar7 != 1 && -1 < lVar7 + -1) {
        uVar20 = (ulonglong)*(byte *)((longlong)puVar1 + 5);
      }
      uVar8 = uVar13;
      if (lVar7 != 2 && -1 < lVar7 + -2) {
        uVar8 = (ulonglong)*(byte *)((longlong)puVar1 + 6);
      }
      uVar11 = uVar13;
      if (lVar7 != 3 && -1 < lVar7 + -3) {
        uVar11 = (ulonglong)*(byte *)((longlong)puVar1 + 7);
      }
      uVar11 = ((((((uVar12 << 8 | uVar10) << 8 | uVar19) << 8 | uVar4) << 8 | uVar3) << 8 | uVar20)
                << 8 | uVar8) << 8 | uVar11;
    }
    else {
      uVar12 = *puVar1;
      uVar11 = uVar12 >> 0x38 | (uVar12 & 0xff000000000000) >> 0x28 |
               (uVar12 & 0xff0000000000) >> 0x18 | (uVar12 & 0xff00000000) >> 8 |
               (uVar12 & 0xff000000) << 8 | (uVar12 & 0xff0000) << 0x18 | (uVar12 & 0xff00) << 0x28
               | uVar12 << 0x38;
    }
    *param_1 = *param_1 | uVar11 >> (0x3fU - (char)lVar18 & 0x3f);
    *param_3 = *param_3 + (lVar18 >> 3);
    *param_2 = *param_2 + (lVar18 >> 3) * -8;
    uVar12 = *param_1;
    bVar5 = (byte)uVar17;
    *param_1 = uVar12 << (bVar5 & 0x3f);
    *param_2 = *param_2 + (ulonglong)uVar17;
    lVar18 = *param_2;
    iVar14 = (1 << (bVar5 & 0x1f)) + -1 + (int)(uVar12 >> (0x40 - bVar5 & 0x3f));
  }
LAB_14f39932c:
  puVar1 = (ulonglong *)*param_3;
  lVar15 = lVar18 >> 3;
  lVar7 = (longlong)*param_4 - (longlong)puVar1;
  if (lVar7 < 8) {
    uVar12 = uVar13;
    if (0 < lVar7) {
      uVar12 = (ulonglong)(byte)*puVar1;
    }
    uVar10 = uVar13;
    if (lVar7 != 1 && -1 < lVar7 + -1) {
      uVar10 = (ulonglong)*(byte *)((longlong)puVar1 + 1);
    }
    uVar19 = uVar13;
    if (lVar7 != 2 && -1 < lVar7 + -2) {
      uVar19 = (ulonglong)*(byte *)((longlong)puVar1 + 2);
    }
    uVar4 = uVar13;
    if (lVar7 != 3 && -1 < lVar7 + -3) {
      uVar4 = (ulonglong)*(byte *)((longlong)puVar1 + 3);
    }
    lVar7 = (longlong)*param_4 - ((longlong)puVar1 + 4);
    uVar3 = uVar13;
    if (0 < lVar7) {
      uVar3 = (ulonglong)*(byte *)((longlong)puVar1 + 4);
    }
    uVar20 = uVar13;
    if (lVar7 != 1 && -1 < lVar7 + -1) {
      uVar20 = (ulonglong)*(byte *)((longlong)puVar1 + 5);
    }
    uVar8 = uVar13;
    if (lVar7 != 2 && -1 < lVar7 + -2) {
      uVar8 = (ulonglong)*(byte *)((longlong)puVar1 + 6);
    }
    if (lVar7 != 3 && -1 < lVar7 + -3) {
      uVar13 = (ulonglong)*(byte *)((longlong)puVar1 + 7);
    }
    lVar18 = *param_2;
    uVar13 = ((((((uVar12 << 8 | uVar10) << 8 | uVar19) << 8 | uVar4) << 8 | uVar3) << 8 | uVar20)
              << 8 | uVar8) << 8 | uVar13;
  }
  else {
    uVar12 = *puVar1;
    uVar13 = uVar12 >> 0x38 | (uVar12 & 0xff000000000000) >> 0x28 |
             (uVar12 & 0xff0000000000) >> 0x18 | (uVar12 & 0xff00000000) >> 8 |
             (uVar12 & 0xff000000) << 8 | (uVar12 & 0xff0000) << 0x18 | (uVar12 & 0xff00) << 0x28 |
             uVar12 << 0x38;
  }
  *param_1 = *param_1 | uVar13 >> (0x3fU - (char)lVar18 & 0x3f);
  *param_3 = *param_3 + lVar15;
  *param_2 = *param_2 + lVar15 * -8;
  uVar12 = *param_1;
  *param_1 = uVar12 << (bVar2 & 0x3f);
  *param_2 = *param_2 + (ulonglong)param_5;
  return (int)((uVar12 >> 1) >> (0x3f - bVar2 & 0x3f)) + (iVar14 << (bVar2 & 0x1f));
}

// rrVarBits_ReadRice @ 14f3994e0

uint __cdecl
oo2::rrVarBits_ReadRice
          (ulong64 *param_1,long64 *param_2,uchar **param_3,uchar **param_4,uint param_5)

{
  ulonglong *puVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  long64 lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  
  lVar17 = *param_2;
  uVar10 = 0;
  uVar11 = uVar10;
  do {
    while( true ) {
      puVar1 = (ulonglong *)*param_3;
      lVar16 = (longlong)*param_4 - (longlong)puVar1;
      lVar13 = lVar17 >> 3;
      if (lVar16 < 8) {
        uVar9 = uVar10;
        if (0 < lVar16) {
          uVar9 = (ulonglong)(byte)*puVar1;
        }
        uVar18 = uVar10;
        if (lVar16 != 1 && -1 < lVar16 + -1) {
          uVar18 = (ulonglong)*(byte *)((longlong)puVar1 + 1);
        }
        uVar4 = uVar10;
        if (lVar16 != 2 && -1 < lVar16 + -2) {
          uVar4 = (ulonglong)*(byte *)((longlong)puVar1 + 2);
        }
        uVar3 = uVar10;
        if (lVar16 != 3 && -1 < lVar16 + -3) {
          uVar3 = (ulonglong)*(byte *)((longlong)puVar1 + 3);
        }
        lVar16 = (longlong)*param_4 - ((longlong)puVar1 + 4);
        uVar19 = uVar10;
        if (0 < lVar16) {
          uVar19 = (ulonglong)*(byte *)((longlong)puVar1 + 4);
        }
        uVar7 = uVar10;
        if (lVar16 != 1 && -1 < lVar16 + -1) {
          uVar7 = (ulonglong)*(byte *)((longlong)puVar1 + 5);
        }
        uVar6 = uVar10;
        if (lVar16 != 2 && -1 < lVar16 + -2) {
          uVar6 = (ulonglong)*(byte *)((longlong)puVar1 + 6);
        }
        uVar8 = uVar10;
        if (lVar16 != 3 && -1 < lVar16 + -3) {
          uVar8 = (ulonglong)*(byte *)((longlong)puVar1 + 7);
        }
        lVar17 = *param_2;
        uVar8 = ((((((uVar9 << 8 | uVar18) << 8 | uVar4) << 8 | uVar3) << 8 | uVar19) << 8 | uVar7)
                 << 8 | uVar6) << 8 | uVar8;
      }
      else {
        uVar9 = *puVar1;
        uVar8 = uVar9 >> 0x38 | (uVar9 & 0xff000000000000) >> 0x28 |
                (uVar9 & 0xff0000000000) >> 0x18 | (uVar9 & 0xff00000000) >> 8 |
                (uVar9 & 0xff000000) << 8 | (uVar9 & 0xff0000) << 0x18 | (uVar9 & 0xff00) << 0x28 |
                uVar9 << 0x38;
      }
      *param_1 = *param_1 | uVar8 >> (0x3fU - (char)lVar17 & 0x3f);
      *param_3 = *param_3 + lVar13;
      lVar13 = *param_2 + lVar13 * -8;
      *param_2 = lVar13;
      uVar9 = *param_1;
      iVar12 = (int)uVar11;
      if (uVar9 != 0) break;
      *param_1 = 0;
      lVar13 = 0x3f - lVar13;
      lVar17 = *param_2 + lVar13;
      uVar11 = (ulonglong)(uint)(iVar12 + (int)lVar13);
      *param_2 = lVar17;
      if (*param_4 <= *param_3) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          (*g_fp_OodleCore_Plugin_Printf)
                    (0,"v:\\devel\\projects\\oodle2\\core\\rrvarbitcodes.cpp",0x45,
                     "OODLE ERROR : corruption : ReadUnary past end\n");
        }
        ooLogErrorPost();
        iVar12 = 0;
LAB_14f3996cd:
        lVar13 = *param_2;
        puVar1 = (ulonglong *)*param_3;
        lVar14 = lVar13 >> 3;
        lVar16 = (longlong)*param_4 - (longlong)puVar1;
        if (lVar16 < 8) {
          uVar11 = uVar10;
          if (0 < lVar16) {
            uVar11 = (ulonglong)(byte)*puVar1;
          }
          uVar9 = uVar10;
          if (lVar16 != 1 && -1 < lVar16 + -1) {
            uVar9 = (ulonglong)*(byte *)((longlong)puVar1 + 1);
          }
          uVar18 = uVar10;
          if (lVar16 != 2 && -1 < lVar16 + -2) {
            uVar18 = (ulonglong)*(byte *)((longlong)puVar1 + 2);
          }
          uVar4 = uVar10;
          if (lVar16 != 3 && -1 < lVar16 + -3) {
            uVar4 = (ulonglong)*(byte *)((longlong)puVar1 + 3);
          }
          lVar13 = (longlong)*param_4 - ((longlong)puVar1 + 4);
          uVar3 = uVar10;
          if (0 < lVar13) {
            uVar3 = (ulonglong)*(byte *)((longlong)puVar1 + 4);
          }
          uVar19 = uVar10;
          if (lVar13 != 1 && -1 < lVar13 + -1) {
            uVar19 = (ulonglong)*(byte *)((longlong)puVar1 + 5);
          }
          uVar7 = uVar10;
          if (lVar13 != 2 && -1 < lVar13 + -2) {
            uVar7 = (ulonglong)*(byte *)((longlong)puVar1 + 6);
          }
          if (lVar13 != 3 && -1 < lVar13 + -3) {
            uVar10 = (ulonglong)*(byte *)((longlong)puVar1 + 7);
          }
          lVar13 = *param_2;
          uVar10 = ((((((uVar11 << 8 | uVar9) << 8 | uVar18) << 8 | uVar4) << 8 | uVar3) << 8 |
                    uVar19) << 8 | uVar7) << 8 | uVar10;
        }
        else {
          uVar11 = *puVar1;
          uVar10 = uVar11 >> 0x38 | (uVar11 & 0xff000000000000) >> 0x28 |
                   (uVar11 & 0xff0000000000) >> 0x18 | (uVar11 & 0xff00000000) >> 8 |
                   (uVar11 & 0xff000000) << 8 | (uVar11 & 0xff0000) << 0x18 |
                   (uVar11 & 0xff00) << 0x28 | uVar11 << 0x38;
        }
        bVar2 = (byte)param_5;
        *param_1 = *param_1 | uVar10 >> (0x3fU - (char)lVar13 & 0x3f);
        *param_3 = *param_3 + lVar14;
        *param_2 = *param_2 + lVar14 * -8;
        uVar11 = *param_1;
        *param_1 = uVar11 << (bVar2 & 0x3f);
        *param_2 = *param_2 + (ulonglong)param_5;
        return (int)((uVar11 >> 1) >> (0x3f - bVar2 & 0x3f)) + (iVar12 << (bVar2 & 0x1f));
      }
    }
    lVar13 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar15 = -(int)lVar13 + 0x3f;
    if (uVar15 < 0x1f) {
      uVar5 = -(int)lVar13 + 0x40;
      iVar12 = uVar15 + iVar12;
      *param_1 = uVar9 << ((byte)uVar5 & 0x3f);
      *param_2 = *param_2 + (ulonglong)uVar5;
      goto LAB_14f3996cd;
    }
    *param_1 = uVar9 << 0x1f;
    *param_2 = *param_2 + 0x1f;
    lVar17 = *param_2;
    uVar11 = (ulonglong)(iVar12 + 0x1f);
  } while( true );
}

// rrVarBits_ReadRice_Small @ 14f399840

uint __cdecl
oo2::rrVarBits_ReadRice_Small
          (ulong64 *param_1,long64 *param_2,uchar **param_3,uchar **param_4,uint param_5)

{
  ulonglong *puVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  long64 lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  
  uVar13 = *param_1;
  if (uVar13 == 0) {
    iVar14 = 0x40;
  }
  else {
    lVar7 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar14 = 0x3f - (int)lVar7;
  }
  uVar3 = param_5 + 1 + iVar14;
  bVar2 = (byte)param_5;
  if (uVar3 < 0x1f) {
    *param_1 = uVar13 << ((byte)uVar3 & 0x3f);
    *param_2 = *param_2 + (ulonglong)uVar3;
    return (iVar14 + -1 << (bVar2 & 0x1f)) + (int)(uVar13 >> (0x40 - (byte)uVar3 & 0x3f));
  }
  lVar17 = *param_2;
  uVar12 = 0;
  uVar13 = uVar12;
  do {
    while( true ) {
      puVar1 = (ulonglong *)*param_3;
      lVar7 = (longlong)*param_4 - (longlong)puVar1;
      lVar15 = lVar17 >> 3;
      if (lVar7 < 8) {
        uVar11 = uVar12;
        if (0 < lVar7) {
          uVar11 = (ulonglong)(byte)*puVar1;
        }
        uVar18 = uVar12;
        if (lVar7 != 1 && -1 < lVar7 + -1) {
          uVar18 = (ulonglong)*(byte *)((longlong)puVar1 + 1);
        }
        uVar5 = uVar12;
        if (lVar7 != 2 && -1 < lVar7 + -2) {
          uVar5 = (ulonglong)*(byte *)((longlong)puVar1 + 2);
        }
        uVar4 = uVar12;
        if (lVar7 != 3 && -1 < lVar7 + -3) {
          uVar4 = (ulonglong)*(byte *)((longlong)puVar1 + 3);
        }
        lVar7 = (longlong)*param_4 - ((longlong)puVar1 + 4);
        uVar19 = uVar12;
        if (0 < lVar7) {
          uVar19 = (ulonglong)*(byte *)((longlong)puVar1 + 4);
        }
        uVar9 = uVar12;
        if (lVar7 != 1 && -1 < lVar7 + -1) {
          uVar9 = (ulonglong)*(byte *)((longlong)puVar1 + 5);
        }
        uVar8 = uVar12;
        if (lVar7 != 2 && -1 < lVar7 + -2) {
          uVar8 = (ulonglong)*(byte *)((longlong)puVar1 + 6);
        }
        uVar10 = uVar12;
        if (lVar7 != 3 && -1 < lVar7 + -3) {
          uVar10 = (ulonglong)*(byte *)((longlong)puVar1 + 7);
        }
        lVar17 = *param_2;
        uVar10 = ((((((uVar11 << 8 | uVar18) << 8 | uVar5) << 8 | uVar4) << 8 | uVar19) << 8 | uVar9
                  ) << 8 | uVar8) << 8 | uVar10;
      }
      else {
        uVar11 = *puVar1;
        uVar10 = uVar11 >> 0x38 | (uVar11 & 0xff000000000000) >> 0x28 |
                 (uVar11 & 0xff0000000000) >> 0x18 | (uVar11 & 0xff00000000) >> 8 |
                 (uVar11 & 0xff000000) << 8 | (uVar11 & 0xff0000) << 0x18 |
                 (uVar11 & 0xff00) << 0x28 | uVar11 << 0x38;
      }
      *param_1 = *param_1 | uVar10 >> (0x3fU - (char)lVar17 & 0x3f);
      *param_3 = *param_3 + lVar15;
      lVar7 = *param_2 + lVar15 * -8;
      *param_2 = lVar7;
      uVar11 = *param_1;
      iVar14 = (int)uVar13;
      if (uVar11 != 0) break;
      *param_1 = 0;
      lVar7 = 0x3f - lVar7;
      lVar17 = *param_2 + lVar7;
      uVar13 = (ulonglong)(uint)(iVar14 + (int)lVar7);
      *param_2 = lVar17;
      if (*param_4 <= *param_3) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          (*g_fp_OodleCore_Plugin_Printf)
                    (0,"v:\\devel\\projects\\oodle2\\core\\rrvarbitcodes.cpp",0x45,
                     "OODLE ERROR : corruption : ReadUnary past end\n");
        }
        ooLogErrorPost();
        iVar14 = 0;
LAB_14f399a60:
        lVar7 = *param_2;
        puVar1 = (ulonglong *)*param_3;
        lVar16 = lVar7 >> 3;
        lVar15 = (longlong)*param_4 - (longlong)puVar1;
        if (lVar15 < 8) {
          uVar13 = uVar12;
          if (0 < lVar15) {
            uVar13 = (ulonglong)(byte)*puVar1;
          }
          uVar11 = uVar12;
          if (lVar15 != 1 && -1 < lVar15 + -1) {
            uVar11 = (ulonglong)*(byte *)((longlong)puVar1 + 1);
          }
          uVar18 = uVar12;
          if (lVar15 != 2 && -1 < lVar15 + -2) {
            uVar18 = (ulonglong)*(byte *)((longlong)puVar1 + 2);
          }
          uVar5 = uVar12;
          if (lVar15 != 3 && -1 < lVar15 + -3) {
            uVar5 = (ulonglong)*(byte *)((longlong)puVar1 + 3);
          }
          lVar7 = (longlong)*param_4 - ((longlong)puVar1 + 4);
          uVar4 = uVar12;
          if (0 < lVar7) {
            uVar4 = (ulonglong)*(byte *)((longlong)puVar1 + 4);
          }
          uVar19 = uVar12;
          if (lVar7 != 1 && -1 < lVar7 + -1) {
            uVar19 = (ulonglong)*(byte *)((longlong)puVar1 + 5);
          }
          uVar9 = uVar12;
          if (lVar7 != 2 && -1 < lVar7 + -2) {
            uVar9 = (ulonglong)*(byte *)((longlong)puVar1 + 6);
          }
          if (lVar7 != 3 && -1 < lVar7 + -3) {
            uVar12 = (ulonglong)*(byte *)((longlong)puVar1 + 7);
          }
          lVar7 = *param_2;
          uVar12 = ((((((uVar13 << 8 | uVar11) << 8 | uVar18) << 8 | uVar5) << 8 | uVar4) << 8 |
                    uVar19) << 8 | uVar9) << 8 | uVar12;
        }
        else {
          uVar13 = *puVar1;
          uVar12 = uVar13 >> 0x38 | (uVar13 & 0xff000000000000) >> 0x28 |
                   (uVar13 & 0xff0000000000) >> 0x18 | (uVar13 & 0xff00000000) >> 8 |
                   (uVar13 & 0xff000000) << 8 | (uVar13 & 0xff0000) << 0x18 |
                   (uVar13 & 0xff00) << 0x28 | uVar13 << 0x38;
        }
        *param_1 = *param_1 | uVar12 >> (0x3fU - (char)lVar7 & 0x3f);
        *param_3 = *param_3 + lVar16;
        *param_2 = *param_2 + lVar16 * -8;
        uVar13 = *param_1;
        *param_1 = uVar13 << (bVar2 & 0x3f);
        *param_2 = *param_2 + (ulonglong)param_5;
        return (int)((uVar13 >> 1) >> (0x3f - bVar2 & 0x3f)) + (iVar14 << (bVar2 & 0x1f));
      }
    }
    lVar7 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar3 = -(int)lVar7 + 0x3f;
    if (uVar3 < 0x1f) {
      uVar6 = -(int)lVar7 + 0x40;
      iVar14 = uVar3 + iVar14;
      *param_1 = uVar11 << ((byte)uVar6 & 0x3f);
      *param_2 = *param_2 + (ulonglong)uVar6;
      goto LAB_14f399a60;
    }
    *param_1 = uVar11 << 0x1f;
    *param_2 = *param_2 + 0x1f;
    lVar17 = *param_2;
    uVar13 = (ulonglong)(iVar14 + 0x1f);
  } while( true );
}

// rrVarBits_ReadUnary @ 14f399c00

uint __cdecl
oo2::rrVarBits_ReadUnary(ulong64 *param_1,long64 *param_2,uchar **param_3,uchar **param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  long64 lVar16;
  ulonglong uVar17;
  
  lVar16 = *param_2;
  uVar17 = 0;
  uVar12 = uVar17;
  while( true ) {
    while( true ) {
      puVar1 = (ulonglong *)*param_3;
      lVar6 = (longlong)*param_4 - (longlong)puVar1;
      lVar10 = lVar16 >> 3;
      if (lVar6 < 8) {
        uVar3 = uVar17;
        if (0 < lVar6) {
          uVar3 = (ulonglong)(byte)*puVar1;
        }
        uVar8 = uVar17;
        if (lVar6 != 1 && -1 < lVar6 + -1) {
          uVar8 = (ulonglong)*(byte *)((longlong)puVar1 + 1);
        }
        uVar14 = uVar17;
        if (lVar6 != 2 && -1 < lVar6 + -2) {
          uVar14 = (ulonglong)*(byte *)((longlong)puVar1 + 2);
        }
        uVar5 = uVar17;
        if (lVar6 != 3 && -1 < lVar6 + -3) {
          uVar5 = (ulonglong)*(byte *)((longlong)puVar1 + 3);
        }
        lVar6 = (longlong)*param_4 - ((longlong)puVar1 + 4);
        uVar9 = uVar17;
        if (0 < lVar6) {
          uVar9 = (ulonglong)*(byte *)((longlong)puVar1 + 4);
        }
        uVar15 = uVar17;
        if (lVar6 != 1 && -1 < lVar6 + -1) {
          uVar15 = (ulonglong)*(byte *)((longlong)puVar1 + 5);
        }
        uVar7 = uVar17;
        if (lVar6 != 2 && -1 < lVar6 + -2) {
          uVar7 = (ulonglong)*(byte *)((longlong)puVar1 + 6);
        }
        uVar2 = uVar17;
        if (lVar6 != 3 && -1 < lVar6 + -3) {
          uVar2 = (ulonglong)*(byte *)((longlong)puVar1 + 7);
        }
        lVar16 = *param_2;
        uVar2 = ((((((uVar3 << 8 | uVar8) << 8 | uVar14) << 8 | uVar5) << 8 | uVar9) << 8 | uVar15)
                 << 8 | uVar7) << 8 | uVar2;
      }
      else {
        uVar3 = *puVar1;
        uVar2 = uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 |
                (uVar3 & 0xff0000000000) >> 0x18 | (uVar3 & 0xff00000000) >> 8 |
                (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 | (uVar3 & 0xff00) << 0x28 |
                uVar3 << 0x38;
      }
      *param_1 = *param_1 | uVar2 >> (0x3fU - (char)lVar16 & 0x3f);
      *param_3 = *param_3 + lVar10;
      lVar6 = *param_2 + lVar10 * -8;
      *param_2 = lVar6;
      uVar3 = *param_1;
      iVar11 = (int)uVar12;
      if (uVar3 != 0) break;
      *param_1 = 0;
      lVar6 = 0x3f - lVar6;
      lVar16 = *param_2 + lVar6;
      uVar12 = (ulonglong)(uint)(iVar11 + (int)lVar6);
      *param_2 = lVar16;
      if (*param_4 <= *param_3) {
        ooLogErrorPre();
        if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
          (*g_fp_OodleCore_Plugin_Printf)
                    (0,"v:\\devel\\projects\\oodle2\\core\\rrvarbitcodes.cpp",0x45,
                     "OODLE ERROR : corruption : ReadUnary past end\n");
        }
        ooLogErrorPost();
        return 0;
      }
    }
    lVar6 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar13 = -(int)lVar6 + 0x3f;
    if (uVar13 < 0x1f) break;
    *param_1 = uVar3 << 0x1f;
    *param_2 = *param_2 + 0x1f;
    lVar16 = *param_2;
    uVar12 = (ulonglong)(iVar11 + 0x1f);
  }
  uVar4 = -(int)lVar6 + 0x40;
  *param_1 = uVar3 << ((byte)uVar4 & 0x3f);
  *param_2 = *param_2 + (ulonglong)uVar4;
  return uVar13 + iVar11;
}

// rrVarBits_WriteEliasGamma @ 14f399e20

void __cdecl
oo2::rrVarBits_WriteEliasGamma
          (ulong64 *param_1,long64 *param_2,uchar **param_3,uchar **param_4,uint param_5)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar4 = param_5 + 1;
  uVar1 = 0x1f;
  if (uVar4 != 0) {
    for (; uVar4 >> uVar1 == 0; uVar1 = uVar1 - 1) {
    }
  }
  uVar3 = uVar1;
  if (0x1e < uVar1) {
    uVar5 = (ulonglong)(uVar1 / 0x1f);
    do {
      *param_1 = *param_1 << 0x1f;
      *param_2 = *param_2 + -0x1f;
      uVar3 = uVar3 - 0x1f;
      lVar6 = 0x3f - *param_2 >> 3;
      uVar2 = *param_1 << ((char)*param_2 + 1U & 0x3f);
      *(ulonglong *)*param_3 =
           uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 | (uVar2 & 0xff0000000000) >> 0x18 |
           (uVar2 & 0xff00000000) >> 8 | (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
           (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
      *param_3 = *param_3 + lVar6;
      *param_2 = *param_2 + lVar6 * 8;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  *param_1 = *param_1 << ((byte)(uVar3 + 1) & 0x3f) | 1;
  *param_2 = *param_2 - (ulonglong)(uVar3 + 1);
  lVar6 = 0x3f - *param_2 >> 3;
  uVar5 = *param_1 << ((char)*param_2 + 1U & 0x3f);
  *(ulonglong *)*param_3 =
       uVar5 >> 0x38 | (uVar5 & 0xff000000000000) >> 0x28 | (uVar5 & 0xff0000000000) >> 0x18 |
       (uVar5 & 0xff00000000) >> 8 | (uVar5 & 0xff000000) << 8 | (uVar5 & 0xff0000) << 0x18 |
       (uVar5 & 0xff00) << 0x28 | uVar5 << 0x38;
  *param_3 = *param_3 + lVar6;
  *param_2 = *param_2 + lVar6 * 8;
  if (uVar1 != 0) {
    *param_1 = (ulonglong)(uVar4 - (1 << ((byte)uVar1 & 0x1f))) | *param_1 << ((byte)uVar1 & 0x3f);
    *param_2 = *param_2 - (ulonglong)uVar1;
    lVar6 = 0x3f - *param_2 >> 3;
    uVar5 = *param_1 << ((char)*param_2 + 1U & 0x3f);
    *(ulonglong *)*param_3 =
         uVar5 >> 0x38 | (uVar5 & 0xff000000000000) >> 0x28 | (uVar5 & 0xff0000000000) >> 0x18 |
         (uVar5 & 0xff00000000) >> 8 | (uVar5 & 0xff000000) << 8 | (uVar5 & 0xff0000) << 0x18 |
         (uVar5 & 0xff00) << 0x28 | uVar5 << 0x38;
    *param_3 = *param_3 + lVar6;
    *param_2 = *param_2 + lVar6 * 8;
  }
  return;
}

// rrVarBits_WriteExpGolomb @ 14f399f60

void __cdecl
oo2::rrVarBits_WriteExpGolomb
          (ulong64 *param_1,long64 *param_2,uchar **param_3,uchar **param_4,uint param_5,
          uint param_6)

{
  uint uVar1;
  byte bVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  bVar2 = (byte)param_6;
  uVar5 = (param_5 >> (bVar2 & 0x1f)) + 1;
  uVar1 = 0x1f;
  if (uVar5 != 0) {
    for (; uVar5 >> uVar1 == 0; uVar1 = uVar1 - 1) {
    }
  }
  uVar4 = uVar1;
  if (0x1e < uVar1) {
    uVar6 = (ulonglong)(uVar1 / 0x1f);
    do {
      *param_1 = *param_1 << 0x1f;
      *param_2 = *param_2 + -0x1f;
      uVar4 = uVar4 - 0x1f;
      lVar7 = 0x3f - *param_2 >> 3;
      uVar3 = *param_1 << ((char)*param_2 + 1U & 0x3f);
      *(ulonglong *)*param_3 =
           uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 | (uVar3 & 0xff0000000000) >> 0x18 |
           (uVar3 & 0xff00000000) >> 8 | (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
           (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38;
      *param_3 = *param_3 + lVar7;
      *param_2 = *param_2 + lVar7 * 8;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  *param_1 = *param_1 << ((byte)(uVar4 + 1) & 0x3f) | 1;
  *param_2 = *param_2 - (ulonglong)(uVar4 + 1);
  lVar7 = 0x3f - *param_2 >> 3;
  uVar6 = *param_1 << ((char)*param_2 + 1U & 0x3f);
  *(ulonglong *)*param_3 =
       uVar6 >> 0x38 | (uVar6 & 0xff000000000000) >> 0x28 | (uVar6 & 0xff0000000000) >> 0x18 |
       (uVar6 & 0xff00000000) >> 8 | (uVar6 & 0xff000000) << 8 | (uVar6 & 0xff0000) << 0x18 |
       (uVar6 & 0xff00) << 0x28 | uVar6 << 0x38;
  *param_3 = *param_3 + lVar7;
  *param_2 = *param_2 + lVar7 * 8;
  if (uVar1 != 0) {
    *param_1 = (ulonglong)(uVar5 - (1 << ((byte)uVar1 & 0x1f))) | *param_1 << ((byte)uVar1 & 0x3f);
    *param_2 = *param_2 - (ulonglong)uVar1;
    lVar7 = 0x3f - *param_2 >> 3;
    uVar6 = *param_1 << ((char)*param_2 + 1U & 0x3f);
    *(ulonglong *)*param_3 =
         uVar6 >> 0x38 | (uVar6 & 0xff000000000000) >> 0x28 | (uVar6 & 0xff0000000000) >> 0x18 |
         (uVar6 & 0xff00000000) >> 8 | (uVar6 & 0xff000000) << 8 | (uVar6 & 0xff0000) << 0x18 |
         (uVar6 & 0xff00) << 0x28 | uVar6 << 0x38;
    *param_3 = *param_3 + lVar7;
    *param_2 = *param_2 + lVar7 * 8;
  }
  *param_1 = (ulonglong)((1 << (bVar2 & 0x1f)) - 1U & param_5) | *param_1 << (bVar2 & 0x3f);
  *param_2 = *param_2 - (ulonglong)param_6;
  lVar7 = 0x3f - *param_2 >> 3;
  uVar6 = *param_1 << ((char)*param_2 + 1U & 0x3f);
  *(ulonglong *)*param_3 =
       uVar6 >> 0x38 | (uVar6 & 0xff000000000000) >> 0x28 | (uVar6 & 0xff0000000000) >> 0x18 |
       (uVar6 & 0xff00000000) >> 8 | (uVar6 & 0xff000000) << 8 | (uVar6 & 0xff0000) << 0x18 |
       (uVar6 & 0xff00) << 0x28 | uVar6 << 0x38;
  *param_3 = *param_3 + lVar7;
  *param_2 = *param_2 + lVar7 * 8;
  return;
}

// rrVarBits_WriteRice @ 14f39a100

void __cdecl
oo2::rrVarBits_WriteRice
          (ulong64 *param_1,long64 *param_2,uchar **param_3,uchar **param_4,uint param_5,
          uint param_6)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  
  bVar1 = (byte)param_6;
  uVar5 = param_5 >> (bVar1 & 0x1f);
  if (0x1e < uVar5) {
    uVar3 = (ulonglong)(uVar5 / 0x1f);
    do {
      *param_1 = *param_1 << 0x1f;
      *param_2 = *param_2 + -0x1f;
      uVar5 = uVar5 - 0x1f;
      lVar4 = 0x3f - *param_2 >> 3;
      uVar2 = *param_1 << ((char)*param_2 + 1U & 0x3f);
      *(ulonglong *)*param_3 =
           uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 | (uVar2 & 0xff0000000000) >> 0x18 |
           (uVar2 & 0xff00000000) >> 8 | (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
           (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
      *param_3 = *param_3 + lVar4;
      *param_2 = *param_2 + lVar4 * 8;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  *param_1 = *param_1 << ((byte)(uVar5 + 1) & 0x3f) | 1;
  *param_2 = *param_2 - (ulonglong)(uVar5 + 1);
  lVar4 = 0x3f - *param_2 >> 3;
  uVar3 = *param_1 << ((char)*param_2 + 1U & 0x3f);
  *(ulonglong *)*param_3 =
       uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 | (uVar3 & 0xff0000000000) >> 0x18 |
       (uVar3 & 0xff00000000) >> 8 | (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
       (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38;
  *param_3 = *param_3 + lVar4;
  *param_2 = *param_2 + lVar4 * 8;
  *param_1 = (longlong)(int)((1 << (bVar1 & 0x1f)) - 1U & param_5) | *param_1 << (bVar1 & 0x3f);
  *param_2 = *param_2 - (ulonglong)param_6;
  lVar4 = 0x3f - *param_2 >> 3;
  uVar3 = *param_1 << ((char)*param_2 + 1U & 0x3f);
  *(ulonglong *)*param_3 =
       uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 | (uVar3 & 0xff0000000000) >> 0x18 |
       (uVar3 & 0xff00000000) >> 8 | (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
       (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38;
  *param_3 = *param_3 + lVar4;
  *param_2 = *param_2 + lVar4 * 8;
  return;
}

// rrVarBits_WriteUnary @ 14f39a230

void __cdecl
oo2::rrVarBits_WriteUnary
          (ulong64 *param_1,long64 *param_2,uchar **param_3,uchar **param_4,uint param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if (0x1e < param_5) {
    uVar2 = (ulonglong)(param_5 / 0x1f);
    do {
      *param_1 = *param_1 << 0x1f;
      *param_2 = *param_2 + -0x1f;
      param_5 = param_5 - 0x1f;
      lVar3 = 0x3f - *param_2 >> 3;
      uVar1 = *param_1 << ((char)*param_2 + 1U & 0x3f);
      *(ulonglong *)*param_3 =
           uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 | (uVar1 & 0xff0000000000) >> 0x18 |
           (uVar1 & 0xff00000000) >> 8 | (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 |
           (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38;
      *param_3 = *param_3 + lVar3;
      *param_2 = *param_2 + lVar3 * 8;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  *param_1 = *param_1 << ((byte)(param_5 + 1) & 0x3f) | 1;
  *param_2 = *param_2 - (ulonglong)(param_5 + 1);
  lVar3 = 0x3f - *param_2 >> 3;
  uVar2 = *param_1 << ((char)*param_2 + 1U & 0x3f);
  *(ulonglong *)*param_3 =
       uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 | (uVar2 & 0xff0000000000) >> 0x18 |
       (uVar2 & 0xff00000000) >> 8 | (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
       (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
  *param_3 = *param_3 + lVar3;
  *param_2 = *param_2 + lVar3 * 8;
  return;
}

