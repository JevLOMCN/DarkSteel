// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: uejpeg_w64
// Functions: 85

// FUN_14f646a80 @ 14f646a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

undefined8 * FUN_14f646a80(undefined8 *param_1,void *param_2,ulonglong param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  OodleLZ_CompressOptions *pOVar3;
  long64 lVar4;
  void *pvVar5;
  OodleLZ_CompressionLevel OVar6;
  undefined1 auStackY_e8 [32];
  OodleLZ_CompressOptions local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  OVar6 = OodleLZ_CompressionLevel_Normal;
  if (param_3 < 0x400001) {
    OVar6 = OodleLZ_CompressionLevel_Max;
  }
  pOVar3 = OodleLZ_CompressOptions_GetDefault(OodleLZ_Compressor_Kraken,OVar6);
  local_98.unused_was_verbosity = pOVar3->unused_was_verbosity;
  local_98.minMatchLen = pOVar3->minMatchLen;
  local_98.seekChunkReset = pOVar3->seekChunkReset;
  local_98.seekChunkLen = pOVar3->seekChunkLen;
  local_98.profile = pOVar3->profile;
  local_98.dictionarySize = pOVar3->dictionarySize;
  uVar1 = pOVar3->unused_was_maxHuffmansPerChunk;
  local_98.sendQuantumCRCs = pOVar3->sendQuantumCRCs;
  local_98.maxLocalDictionarySize = pOVar3->maxLocalDictionarySize;
  uVar2._0_4_ = pOVar3->makeLongRangeMatcher;
  uVar2._4_4_ = pOVar3->matchTableSizeLog2;
  local_98.jobify = pOVar3->jobify;
  local_98._52_4_ = *(undefined4 *)&pOVar3->field_0x34;
  local_98.jobifyUserPtr = pOVar3->jobifyUserPtr;
  local_98.farMatchMinLen = pOVar3->farMatchMinLen;
  local_98.farMatchOffsetLog2 = pOVar3->farMatchOffsetLog2;
  local_98.reserved._0_8_ = *(undefined8 *)pOVar3->reserved;
  local_98.reserved._8_8_ = *(undefined8 *)(pOVar3->reserved + 2);
  local_98.unused_was_maxHuffmansPerChunk = uVar1;
  local_98.spaceSpeedTradeoffBytes = 0x10;
  local_98._40_8_ = uVar2 & 0xffffffff00000000;
  lVar4 = OodleLZ_GetCompressedBufferSizeNeeded(DAT_154df48a4,param_3);
  pvVar5 = (void *)(*(code *)PTR_malloc_154df4928)(lVar4);
  lVar4 = OodleLZ_Compress(DAT_154df48a4,param_2,param_3,pvVar5,OVar6,&local_98,(void *)0x0,
                           (void *)0x0,(void *)0x0,0);
  param_1[1] = lVar4;
  *param_1 = pvVar5;
  return param_1;
}

// FUN_14f646bb0 @ 14f646bb0

/* WARNING: Enum "OodleLZ_Decode_ThreadPhase": Some values do not have unique names */

void FUN_14f646bb0(void *param_1,long64 param_2,void *param_3,long64 param_4)

{
  OodleLZ_Decompress(param_1,param_2,param_3,param_4,OodleLZ_FuzzSafe_Yes,OodleLZ_CheckCRC_No,
                     OodleLZ_Verbosity_None,(void *)0x0,0,
                     (_func___cdecl_OodleDecompressCallbackRet_void_ptr_uchar_ptr_long64_uchar_ptr_long64_long64_long64
                      *)0x0,(void *)0x0,(void *)0x0,0,OodleLZ_Decode_ThreadPhaseAll);
  return;
}

// FUN_14f646c00 @ 14f646c00

size_t FUN_14f646c00(longlong *param_1,void *param_2,size_t param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = (*(code *)PTR_realloc_154df4938)(*param_1,param_1[2] + param_3);
  if (lVar2 == 0) {
    (*(code *)PTR_free_154df4930)(*param_1);
    param_1[2] = 0;
    return 0;
  }
  lVar1 = *param_1;
  *param_1 = lVar2;
  param_1[1] = (param_1[1] - lVar1) + lVar2;
  memcpy((void *)(lVar2 + param_1[2]),param_2,param_3);
  param_1[2] = param_1[2] + param_3;
  return param_3;
}

// FUN_14f646c90 @ 14f646c90

size_t FUN_14f646c90(longlong *param_1,void *param_2,size_t param_3)

{
  size_t _Size;
  size_t sVar1;
  
  sVar1 = param_1[2] - (param_1[1] - *param_1);
  _Size = param_3;
  if ((longlong)sVar1 < (longlong)param_3) {
    _Size = sVar1;
  }
  memcpy(param_2,(void *)param_1[1],_Size);
  memset((void *)(_Size + (longlong)param_2),0,param_3 - _Size);
  param_1[1] = param_1[1] + _Size;
  return _Size;
}

// FUN_14f646d50 @ 14f646d50

void FUN_14f646d50(FILE *param_1,long param_2)

{
  int _Ch;
  
  fseek(param_1,param_2,1);
  _Ch = fgetc(param_1);
  if (_Ch != -1) {
    ungetc(_Ch,param_1);
    return;
  }
  return;
}

// FUN_14f646d90 @ 14f646d90

undefined4 FUN_14f646d90(FILE *param_1)

{
  int iVar1;
  
  iVar1 = feof(param_1);
  if (iVar1 == 0) {
    iVar1 = ferror(param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

// malloc @ 14f646dd0

void * __cdecl malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = malloc(_Size);
  return pvVar1;
}

// free @ 14f646de0

void __cdecl free(void *_Memory)

{
  free(_Memory);
  return;
}

// realloc @ 14f646df0

void * __cdecl realloc(void *_Memory,size_t _NewSize)

{
  void *pvVar1;
  
  pvVar1 = realloc(_Memory,_NewSize);
  return pvVar1;
}

// FUN_14f646e20 @ 14f646e20

void FUN_14f646e20(longlong param_1,undefined1 *param_2,undefined1 *param_3,int param_4)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  uint uVar33;
  int iVar34;
  undefined1 *puVar35;
  ulonglong uVar36;
  longlong lVar37;
  undefined2 *puVar38;
  longlong lVar39;
  undefined1 *puVar40;
  
  iVar34 = 0;
  if (0 < param_4 + -0xf) {
    uVar33 = (param_4 - 0x10U >> 4) + 1;
    uVar36 = (ulonglong)uVar33;
    iVar34 = uVar33 * 0x10;
    puVar35 = param_2;
    puVar40 = param_3;
    do {
      puVar1 = puVar35 + (param_1 - (longlong)param_2);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      uVar5 = puVar1[4];
      uVar6 = puVar1[5];
      uVar7 = puVar1[6];
      uVar8 = puVar1[7];
      uVar9 = puVar1[8];
      uVar10 = puVar1[9];
      uVar11 = puVar1[10];
      uVar12 = puVar1[0xb];
      uVar13 = puVar1[0xc];
      uVar14 = puVar1[0xd];
      uVar15 = puVar1[0xe];
      uVar16 = puVar1[0xf];
      uVar17 = *puVar35;
      uVar18 = puVar35[1];
      uVar19 = puVar35[2];
      uVar20 = puVar35[3];
      uVar21 = puVar35[4];
      uVar22 = puVar35[5];
      uVar23 = puVar35[6];
      uVar24 = puVar35[7];
      uVar25 = puVar35[8];
      uVar26 = puVar35[9];
      uVar27 = puVar35[10];
      uVar28 = puVar35[0xb];
      uVar29 = puVar35[0xc];
      uVar30 = puVar35[0xd];
      uVar31 = puVar35[0xe];
      uVar32 = puVar35[0xf];
      puVar35 = puVar35 + 0x10;
      *puVar40 = *puVar1;
      puVar40[1] = uVar17;
      puVar40[2] = uVar2;
      puVar40[3] = uVar18;
      puVar40[4] = uVar3;
      puVar40[5] = uVar19;
      puVar40[6] = uVar4;
      puVar40[7] = uVar20;
      puVar40[8] = uVar5;
      puVar40[9] = uVar21;
      puVar40[10] = uVar6;
      puVar40[0xb] = uVar22;
      puVar40[0xc] = uVar7;
      puVar40[0xd] = uVar23;
      puVar40[0xe] = uVar8;
      puVar40[0xf] = uVar24;
      puVar40[0x10] = uVar9;
      puVar40[0x11] = uVar25;
      puVar40[0x12] = uVar10;
      puVar40[0x13] = uVar26;
      puVar40[0x14] = uVar11;
      puVar40[0x15] = uVar27;
      puVar40[0x16] = uVar12;
      puVar40[0x17] = uVar28;
      puVar40[0x18] = uVar13;
      puVar40[0x19] = uVar29;
      puVar40[0x1a] = uVar14;
      puVar40[0x1b] = uVar30;
      puVar40[0x1c] = uVar15;
      puVar40[0x1d] = uVar31;
      puVar40[0x1e] = uVar16;
      puVar40[0x1f] = uVar32;
      uVar36 = uVar36 - 1;
      puVar40 = puVar40 + 0x20;
    } while (uVar36 != 0);
  }
  lVar37 = (longlong)iVar34;
  if (lVar37 < param_4) {
    puVar35 = (undefined1 *)(lVar37 + param_1);
    lVar39 = param_4 - lVar37;
    puVar38 = (undefined2 *)(param_3 + lVar37 * 2);
    do {
      puVar40 = puVar35 + ((longlong)param_2 - param_1);
      uVar2 = *puVar35;
      puVar35 = puVar35 + 1;
      *puVar38 = CONCAT11(*puVar40,uVar2);
      lVar39 = lVar39 + -1;
      puVar38 = puVar38 + 1;
    } while (lVar39 != 0);
  }
  return;
}

// FUN_14f646ee0 @ 14f646ee0

void FUN_14f646ee0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)(param_1 + 0x80);
  lVar2 = 0x10;
  do {
    if (plVar1[-1] != 0) {
      (*(code *)PTR_free_154df4930)();
    }
    if (*plVar1 != 0) {
      (*(code *)PTR_free_154df4930)();
    }
    if (plVar1[1] != 0) {
      (*(code *)PTR_free_154df4930)();
    }
    plVar1 = plVar1 + 0xd;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}

// FUN_14f646f40 @ 14f646f40

void FUN_14f646f40(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 local_res18 [16];
  
  local_res18[0] = param_3;
  (*(code *)*param_1)(param_2,local_res18,1);
  return;
}

// FUN_14f646fc0 @ 14f646fc0

int FUN_14f646fc0(undefined8 *param_1,undefined8 param_2,uint *param_3,int *param_4,int *param_5,
                 uint param_6,undefined4 *param_7,ushort *param_8)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  ushort uVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int local_40;
  
  uVar2 = *param_8;
  uVar3 = param_8[1];
  uVar4 = param_8[0x1e0];
  uVar5 = param_8[0x1e1];
  uVar13 = *param_5 - param_6;
  puVar7 = param_7;
  if (uVar13 != 0) {
    iVar11 = (uVar13 ^ (int)uVar13 >> 0x1f) - ((int)uVar13 >> 0x1f);
    if ((int)uVar13 < 0) {
      uVar13 = uVar13 - 1;
    }
    uVar9 = 1;
    while (iVar11 = iVar11 >> 1, iVar11 != 0) {
      uVar9 = uVar9 + 1;
    }
    param_6._2_1_ = (byte)uVar9;
    param_6 = CONCAT22(uVar9,(1 << (param_6._2_1_ & 0x1f)) - 1U & (ushort)uVar13);
    FUN_14f647460(param_1,param_2,param_3,param_4,param_7 + uVar9);
    puVar7 = &param_6;
  }
  FUN_14f647460(param_1,param_2,param_3,param_4,puVar7);
  piVar8 = param_5 + 0x3d;
  iVar11 = 0x3f;
  lVar10 = 0x3f;
  do {
    if (piVar8[2] != 0) break;
    if (piVar8[1] != 0) {
      iVar11 = iVar11 + -1;
      break;
    }
    if (*piVar8 != 0) {
      iVar11 = iVar11 + -2;
      break;
    }
    iVar11 = iVar11 + -3;
    lVar10 = lVar10 + -3;
    piVar8 = piVar8 + -3;
  } while (0 < lVar10);
  if (iVar11 == 0) {
    *param_4 = *param_4 + (uint)uVar3;
    *param_3 = *param_3 | (uint)uVar2 << (0x18U - (char)*param_4 & 0x1f);
    iVar11 = *param_4;
    while (7 < iVar11) {
      cVar1 = *(char *)((longlong)param_3 + 2);
      param_6._1_3_ = (undefined3)(param_6 >> 8);
      param_6 = CONCAT31(param_6._1_3_,cVar1);
      (*(code *)*param_1)(param_2,&param_6,1);
      if (cVar1 == -1) {
        param_6 = param_6 & 0xffffff00;
        (*(code *)*param_1)(param_2,&param_6,1);
      }
      *param_3 = *param_3 << 8;
      *param_4 = *param_4 + -8;
      iVar11 = *param_4;
    }
  }
  else {
    local_40 = 1;
    if (0 < iVar11) {
      lVar10 = 1;
      do {
        iVar6 = param_5[lVar10];
        iVar15 = local_40;
        while ((iVar6 == 0 && (lVar10 <= iVar11))) {
          lVar10 = lVar10 + 1;
          iVar15 = iVar15 + 1;
          iVar6 = param_5[lVar10];
        }
        uVar13 = iVar15 - local_40;
        if (0xf < (int)uVar13) {
          if (0 < (int)uVar13 >> 4) {
            uVar12 = (ulonglong)(uint)((int)uVar13 >> 4);
            do {
              *param_4 = *param_4 + (uint)uVar5;
              *param_3 = *param_3 | (uint)uVar4 << (0x18U - (char)*param_4 & 0x1f);
              iVar6 = *param_4;
              while (7 < iVar6) {
                cVar1 = *(char *)((longlong)param_3 + 2);
                param_6._1_3_ = (undefined3)(param_6 >> 8);
                param_6 = CONCAT31(param_6._1_3_,cVar1);
                (*(code *)*param_1)(param_2,&param_6,1);
                if (cVar1 == -1) {
                  param_6 = param_6 & 0xffffff00;
                  (*(code *)*param_1)(param_2,&param_6,1);
                }
                *param_3 = *param_3 << 8;
                *param_4 = *param_4 + -8;
                iVar6 = *param_4;
              }
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          uVar13 = uVar13 & 0xf;
        }
        uVar14 = param_5[lVar10];
        iVar6 = (uVar14 ^ (int)uVar14 >> 0x1f) - ((int)uVar14 >> 0x1f);
        if ((int)uVar14 < 0) {
          uVar14 = uVar14 - 1;
        }
        uVar9 = 1;
        while (iVar6 = iVar6 >> 1, iVar6 != 0) {
          uVar9 = uVar9 + 1;
        }
        FUN_14f647460(param_1,param_2,param_3,param_4,
                      param_8 + (longlong)(int)((uint)uVar9 + uVar13 * 0x10) * 2);
        *param_4 = *param_4 + (uint)uVar9;
        *param_3 = *param_3 |
                   (uint)(ushort)((1 << ((byte)uVar9 & 0x1f)) - 1U & (ushort)uVar14) <<
                   (0x18U - (char)*param_4 & 0x1f);
        iVar6 = *param_4;
        while (7 < iVar6) {
          cVar1 = *(char *)((longlong)param_3 + 2);
          param_6._1_3_ = (undefined3)(param_6 >> 8);
          param_6 = CONCAT31(param_6._1_3_,cVar1);
          (*(code *)*param_1)(param_2,&param_6,1);
          if (cVar1 == -1) {
            param_6 = param_6 & 0xffffff00;
            (*(code *)*param_1)(param_2,&param_6,1);
          }
          *param_3 = *param_3 << 8;
          *param_4 = *param_4 + -8;
          iVar6 = *param_4;
        }
        local_40 = iVar15 + 1;
        lVar10 = lVar10 + 1;
      } while (lVar10 <= iVar11);
    }
    if (iVar11 != 0x3f) {
      *param_4 = *param_4 + (uint)uVar3;
      *param_3 = *param_3 | (uint)uVar2 << (0x18U - (char)*param_4 & 0x1f);
      iVar11 = *param_4;
      while (7 < iVar11) {
        cVar1 = *(char *)((longlong)param_3 + 2);
        param_6._1_3_ = (undefined3)(param_6 >> 8);
        param_6 = CONCAT31(param_6._1_3_,cVar1);
        (*(code *)*param_1)(param_2,&param_6,1);
        if (cVar1 == -1) {
          param_6 = param_6 & 0xffffff00;
          (*(code *)*param_1)(param_2,&param_6,1);
        }
        *param_3 = *param_3 << 8;
        *param_4 = *param_4 + -8;
        iVar11 = *param_4;
      }
    }
  }
  return *param_5;
}

// FUN_14f647460 @ 14f647460

void FUN_14f647460(undefined8 *param_1,undefined8 param_2,uint *param_3,int *param_4,ushort *param_5
                  )

{
  char cVar1;
  int iVar2;
  
  *param_4 = *param_4 + (uint)param_5[1];
  *param_3 = *param_3 | (uint)*param_5 << (0x18U - (char)*param_4 & 0x1f);
  iVar2 = *param_4;
  while (7 < iVar2) {
    cVar1 = *(char *)((longlong)param_3 + 2);
    param_5._0_1_ = cVar1;
    (*(code *)*param_1)(param_2,&param_5,1);
    if (cVar1 == -1) {
      param_5._0_1_ = 0;
      (*(code *)*param_1)(param_2,&param_5,1);
    }
    *param_3 = *param_3 << 8;
    *param_4 = *param_4 + -8;
    iVar2 = *param_4;
  }
  return;
}

// FUN_14f647520 @ 14f647520

undefined4 * FUN_14f647520(undefined4 *param_1,int param_2,ushort *param_3)

{
  longlong lVar1;
  int *piVar2;
  ushort uVar3;
  int iVar4;
  undefined8 uVar5;
  ushort *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  
  *param_1 = 0;
  memset(param_1 + 1,0,0x6ac);
  uVar3 = param_3[3];
  uVar12 = 0x7fffffff;
  if (param_3[1] - 1 < 0x7ffffffe) {
    uVar12 = (uint)param_3[1];
  }
  if ((uVar3 != 0) && (uVar3 < uVar12)) {
    uVar12 = (uint)uVar3;
  }
  uVar3 = param_3[5];
  if ((uVar3 != 0) && (uVar3 < uVar12)) {
    uVar12 = (uint)uVar3;
  }
  uVar3 = param_3[7];
  if ((uVar3 != 0) && (uVar3 < uVar12)) {
    uVar12 = (uint)uVar3;
  }
  param_1[10] = 0;
  iVar9 = 0;
  iVar10 = (int)(param_2 + -1 + uVar12) / param_2;
  iVar4 = (param_3[1] / uVar12) * iVar10;
  param_1[2] = iVar4;
  iVar4 = (uint)*param_3 * iVar4;
  param_1[6] = iVar4;
  param_1[10] = param_1[10] + iVar4;
  iVar4 = (param_3[3] / uVar12) * iVar10;
  param_1[3] = iVar4;
  iVar4 = (uint)param_3[2] * iVar4;
  param_1[7] = iVar4;
  param_1[10] = param_1[10] + iVar4;
  iVar4 = (param_3[5] / uVar12) * iVar10;
  param_1[4] = iVar4;
  iVar4 = (uint)param_3[4] * iVar4;
  param_1[8] = iVar4;
  param_1[10] = param_1[10] + iVar4;
  uVar7 = (ulonglong)param_3[7] % (ulonglong)uVar12;
  iVar10 = (param_3[7] / uVar12) * iVar10;
  param_1[5] = iVar10;
  iVar10 = (uint)param_3[6] * iVar10;
  param_1[9] = iVar10;
  param_1[10] = param_1[10] + iVar10;
  if (0 < param_2) {
    lVar1 = (longlong)param_1 + (6 - (longlong)param_3);
    lVar8 = (longlong)param_1 + (0x2e - (longlong)param_3);
    do {
      uVar5 = (*(code *)PTR_malloc_154df4928)((longlong)(int)(param_1[10] << 6) * 2,uVar7);
      *(undefined8 *)((longlong)param_3 + lVar8 + 0x4a) = uVar5;
      uVar5 = (*(code *)PTR_malloc_154df4928)((longlong)(int)(param_1[10] << 6) * 2);
      *(undefined8 *)((longlong)param_3 + lVar8 + 0x52) = uVar5;
      if (*(longlong *)((longlong)param_3 + lVar8 + 0x4a) == 0) {
        *param_1 = 6;
      }
      if (*(longlong *)((longlong)param_3 + lVar8 + 0x52) == 0) {
        *param_1 = 6;
      }
      *(undefined4 *)(lVar8 + 0x42 + (longlong)param_3) = 0;
      puVar6 = param_3 + 1;
      lVar11 = 4;
      do {
        iVar10 = *(int *)(lVar1 + (longlong)puVar6) * iVar9;
        *(int *)((longlong)puVar6 + lVar8) = iVar10;
        iVar4 = *(int *)(lVar1 + (longlong)puVar6) + iVar10;
        *(int *)((longlong)puVar6 + lVar8 + 0x10) = iVar4;
        if ((int)(uint)*puVar6 < iVar10) {
          *(uint *)((longlong)puVar6 + lVar8) = (uint)*puVar6;
        }
        if ((int)(uint)*puVar6 < iVar4) {
          *(uint *)((longlong)puVar6 + lVar8 + 0x10) = (uint)*puVar6;
        }
        uVar3 = puVar6[-1];
        uVar7 = (ulonglong)uVar3;
        iVar4 = *(int *)((longlong)puVar6 + lVar8 + 0x10) - *(int *)((longlong)puVar6 + lVar8);
        *(int *)((longlong)puVar6 + lVar8 + 0x30) = iVar4;
        *(uint *)((longlong)puVar6 + lVar8 + 0x20) = (uint)uVar3;
        puVar6 = puVar6 + 2;
        piVar2 = (int *)(lVar8 + 0x42 + (longlong)param_3);
        *piVar2 = *piVar2 + iVar4 * (uint)uVar3;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      iVar9 = iVar9 + 1;
      *(int *)(lVar8 + 0x66 + (longlong)param_3) = *(int *)(lVar8 + 0x42 + (longlong)param_3) << 6;
      lVar8 = lVar8 + 0x68;
    } while (iVar9 < param_2);
  }
  return param_1;
}

// FUN_14f647780 @ 14f647780

undefined8 FUN_14f647780(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}

// FUN_14f647790 @ 14f647790

void FUN_14f647790(longlong param_1,longlong param_2,longlong param_3,byte *param_4,int param_5,
                  int param_6)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  lVar2 = (longlong)param_5;
  if (0 < lVar2) {
    puVar1 = (undefined1 *)(param_1 + 2);
    param_2 = param_2 - (longlong)param_4;
    param_3 = param_3 - (longlong)param_4;
    uVar8 = 0;
    do {
      iVar3 = (uint)param_4[param_2] * 0x100000 + 0x80000;
      uVar6 = (int)((*param_4 - 0x80) * 0x166e90 + iVar3) >> 0x14;
      uVar4 = (int)((param_4[param_3] - 0x80) * -0x581a0 + (*param_4 - 0x80) * -0xb6d20 + iVar3) >>
              0x14;
      uVar5 = (int)((param_4[param_3] - 0x80) * 0x1c5a20 + iVar3) >> 0x14;
      uVar7 = uVar6;
      if ((0xff < uVar6) && (uVar7 = 0xff, (int)uVar6 < 0)) {
        uVar7 = uVar8;
      }
      uVar6 = uVar4;
      if ((0xff < uVar4) && (uVar6 = 0xff, (int)uVar4 < 0)) {
        uVar6 = uVar8;
      }
      uVar4 = uVar5;
      if ((0xff < uVar5) && (uVar4 = 0xff, (int)uVar5 < 0)) {
        uVar4 = uVar8;
      }
      puVar1[-2] = (char)uVar7;
      param_4 = param_4 + 1;
      puVar1[-1] = (char)uVar6;
      *puVar1 = (char)uVar4;
      puVar1[1] = 0xff;
      puVar1 = puVar1 + param_6;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}

// FUN_14f6478b0 @ 14f6478b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14f6478b0(undefined1 (*param_1) [16],longlong param_2,longlong param_3,longlong param_4,
                  int param_5,int param_6)

{
  int iVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  char cVar18;
  undefined1 auVar19 [14];
  undefined1 auVar20 [12];
  unkbyte10 Var21;
  undefined1 auVar22 [14];
  undefined1 auVar23 [12];
  unkbyte9 Var24;
  undefined1 auVar25 [14];
  undefined1 auVar26 [12];
  undefined1 auVar27 [14];
  undefined1 auVar28 [12];
  undefined6 uVar29;
  undefined4 uVar30;
  undefined2 uVar31;
  short sVar32;
  short sVar33;
  short sVar34;
  short sVar35;
  short sVar36;
  short sVar37;
  short sVar38;
  short sVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  uint uVar43;
  longlong lVar44;
  byte *pbVar45;
  int iVar46;
  int iVar47;
  uint uVar48;
  uint uVar49;
  undefined1 *puVar50;
  bool bVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  short sVar65;
  short sVar74;
  short sVar75;
  short sVar76;
  short sVar77;
  short sVar78;
  short sVar79;
  undefined1 auVar66 [16];
  undefined1 auVar72 [16];
  short sVar80;
  undefined1 auVar73 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined2 uVar91;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  ushort uVar101;
  ushort uVar109;
  ushort uVar110;
  ushort uVar111;
  ushort uVar112;
  ushort uVar113;
  ushort uVar114;
  undefined1 auVar102 [16];
  ushort uVar115;
  undefined1 auVar116 [16];
  undefined1 auVar57 [16];
  undefined1 auVar62 [16];
  undefined1 auVar58 [16];
  undefined1 auVar63 [16];
  undefined1 auVar59 [16];
  undefined1 auVar64 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined4 uVar92;
  undefined6 uVar93;
  undefined8 uVar94;
  undefined1 auVar95 [12];
  undefined1 auVar96 [14];
  undefined1 auVar100 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  
  auVar42 = ___xmm_c5a2c5a2c5a2c5a2c5a2c5a2c5a2c5a2;
  auVar41 = ___xmm_66e966e966e966e966e966e966e966e9;
  auVar40 = ___xmm_80808080808080808080808080808080;
  sVar39 = _UNK_1506e9cee;
  sVar38 = _UNK_1506e9cec;
  sVar37 = _UNK_1506e9cea;
  sVar36 = _UNK_1506e9ce8;
  sVar35 = _UNK_1506e9ce6;
  sVar34 = _UNK_1506e9ce4;
  sVar33 = _UNK_1506e9ce2;
  sVar32 = ___xmm_00ff00ff00ff00ff00ff00ff00ff00ff;
  iVar47 = 0;
  if ((param_6 == 4) && (7 < param_5)) {
    auVar97._0_12_ = __xmm_a7e6a7e6a7e6a7e6a7e6a7e6a7e6a7e6._0_12_;
    auVar97._12_2_ = __xmm_a7e6a7e6a7e6a7e6a7e6a7e6a7e6a7e6._6_2_;
    auVar97._14_2_ = _UNK_153479106;
    auVar72._12_4_ = auVar97._12_4_;
    auVar72._0_10_ = (unkbyte10)__xmm_a7e6a7e6a7e6a7e6a7e6a7e6a7e6a7e6;
    auVar72._10_2_ = _UNK_153479104;
    auVar54._10_6_ = auVar72._10_6_;
    auVar54._0_8_ = (undefined8)__xmm_a7e6a7e6a7e6a7e6a7e6a7e6a7e6a7e6;
    auVar54._8_2_ = __xmm_a7e6a7e6a7e6a7e6a7e6a7e6a7e6a7e6._4_2_;
    auVar116._8_8_ = auVar54._8_8_;
    auVar116._6_2_ = _UNK_153479102;
    auVar116._4_2_ = __xmm_a7e6a7e6a7e6a7e6a7e6a7e6a7e6a7e6._2_2_;
    auVar116._0_2_ = (undefined2)__xmm_a7e6a7e6a7e6a7e6a7e6a7e6a7e6a7e6;
    auVar116._2_2_ = ___xmm_492e492e492e492e492e492e492e492e;
    iVar46 = iVar47;
    do {
      lVar44 = (longlong)iVar46;
      iVar47 = iVar46 + 8;
      uVar94 = *(undefined8 *)(lVar44 + param_2);
      auVar108._0_14_ = auVar40._0_14_;
      auVar108[0xe] = auVar40[7];
      auVar108[0xf] = (char)((ulonglong)uVar94 >> 0x38);
      auVar107._14_2_ = auVar108._14_2_;
      auVar107._0_13_ = auVar40._0_13_;
      auVar107[0xd] = (char)((ulonglong)uVar94 >> 0x30);
      auVar106._13_3_ = auVar107._13_3_;
      auVar106._0_12_ = auVar40._0_12_;
      auVar106[0xc] = auVar40[6];
      auVar105._12_4_ = auVar106._12_4_;
      auVar105._0_11_ = auVar40._0_11_;
      auVar105[0xb] = (char)((ulonglong)uVar94 >> 0x28);
      auVar104._11_5_ = auVar105._11_5_;
      auVar104._0_10_ = auVar40._0_10_;
      auVar104[10] = auVar40[5];
      auVar103._10_6_ = auVar104._10_6_;
      auVar103._0_9_ = auVar40._0_9_;
      auVar103[9] = (char)((ulonglong)uVar94 >> 0x20);
      auVar102._9_7_ = auVar103._9_7_;
      auVar102._0_8_ = auVar40._0_8_;
      auVar102[8] = auVar40[4];
      Var21 = CONCAT91(CONCAT81(auVar102._8_8_,(char)((ulonglong)uVar94 >> 0x18)),auVar40[3]);
      auVar20._2_10_ = Var21;
      auVar20[1] = (char)((ulonglong)uVar94 >> 0x10);
      auVar20[0] = auVar40[2];
      auVar19._2_12_ = auVar20;
      auVar19[1] = (char)((ulonglong)uVar94 >> 8);
      auVar19[0] = auVar40[1];
      auVar52._8_8_ = 0;
      auVar52._0_8_ = *(ulonglong *)(lVar44 + param_3);
      auVar52 = auVar52 ^ auVar40;
      uVar101 = CONCAT11((char)uVar94,auVar40[0]) >> 4;
      uVar109 = auVar19._0_2_ >> 4;
      uVar110 = auVar20._0_2_ >> 4;
      uVar111 = (ushort)Var21 >> 4;
      uVar112 = auVar102._8_2_ >> 4;
      uVar113 = auVar104._10_2_ >> 4;
      uVar114 = auVar106._12_2_ >> 4;
      uVar115 = auVar107._14_2_ >> 4;
      auVar88._0_14_ = ZEXT814(0);
      auVar88[0xe] = 0;
      auVar88[0xf] = auVar52[7];
      auVar87._14_2_ = auVar88._14_2_;
      auVar87._0_13_ = auVar88._0_13_;
      auVar87[0xd] = auVar52[6];
      auVar86._13_3_ = auVar87._13_3_;
      auVar86._0_12_ = auVar88._0_12_;
      auVar86[0xc] = 0;
      auVar85._12_4_ = auVar86._12_4_;
      auVar85._0_11_ = auVar88._0_11_;
      auVar85[0xb] = auVar52[5];
      auVar84._11_5_ = auVar85._11_5_;
      auVar84._0_10_ = auVar88._0_10_;
      auVar84[10] = 0;
      auVar83._10_6_ = auVar84._10_6_;
      auVar83._0_9_ = auVar88._0_9_;
      auVar83[9] = auVar52[4];
      auVar26._1_10_ = (unkuint10)CONCAT81((ulonglong)auVar83._9_7_ << 8,auVar52[3]) << 8;
      auVar26[0] = auVar52[2];
      auVar26[0xb] = 0;
      auVar25._1_12_ = auVar26 << 8;
      auVar25[0] = auVar52[1];
      auVar25[0xd] = 0;
      auVar89._1_14_ = auVar25 << 8;
      auVar89[0] = auVar52[0];
      auVar89[0xf] = 0;
      auVar53._8_8_ = 0;
      auVar53._0_8_ = *(ulonglong *)(lVar44 + param_4);
      iVar1 = iVar46 + 0xf;
      auVar53 = auVar53 ^ auVar40;
      auVar89 = psraw(auVar89 << 8,4);
      auVar71._0_14_ = ZEXT814(0);
      auVar71[0xe] = 0;
      auVar71[0xf] = auVar53[7];
      auVar70._14_2_ = auVar71._14_2_;
      auVar70._0_13_ = auVar71._0_13_;
      auVar70[0xd] = auVar53[6];
      auVar69._13_3_ = auVar70._13_3_;
      auVar69._0_12_ = auVar71._0_12_;
      auVar69[0xc] = 0;
      auVar68._12_4_ = auVar69._12_4_;
      auVar68._0_11_ = auVar71._0_11_;
      auVar68[0xb] = auVar53[5];
      auVar67._11_5_ = auVar68._11_5_;
      auVar67._0_10_ = auVar71._0_10_;
      auVar67[10] = 0;
      auVar66._10_6_ = auVar67._10_6_;
      auVar66._0_9_ = auVar71._0_9_;
      auVar66[9] = auVar53[4];
      auVar28._1_10_ = (unkuint10)CONCAT81((ulonglong)auVar66._9_7_ << 8,auVar53[3]) << 8;
      auVar28[0] = auVar53[2];
      auVar28[0xb] = 0;
      auVar27._1_12_ = auVar28 << 8;
      auVar27[0] = auVar53[1];
      auVar27[0xd] = 0;
      auVar99._1_14_ = auVar27 << 8;
      auVar99[0] = auVar53[0];
      auVar99[0xf] = 0;
      auVar54 = pmulhw(auVar89,auVar42);
      auVar72 = psraw(auVar99 << 8,4);
      auVar97 = pmulhw(auVar72,auVar41);
      auVar55._0_2_ = auVar54._0_2_ + uVar101 + auVar89._0_2_ * 2;
      auVar55._2_2_ = auVar54._2_2_ + uVar109 + auVar89._2_2_ * 2;
      auVar55._4_2_ = auVar54._4_2_ + uVar110 + auVar89._4_2_ * 2;
      auVar55._6_2_ = auVar54._6_2_ + uVar111 + auVar89._6_2_ * 2;
      auVar55._8_2_ = auVar54._8_2_ + uVar112 + auVar89._8_2_ * 2;
      auVar55._10_2_ = auVar54._10_2_ + uVar113 + auVar89._10_2_ * 2;
      auVar55._12_2_ = auVar54._12_2_ + uVar114 + auVar89._12_2_ * 2;
      auVar55._14_2_ = auVar54._14_2_ + uVar115 + auVar89._14_2_ * 2;
      auVar54 = psraw(auVar55,4);
      sVar65 = auVar72._0_2_;
      auVar98._0_2_ = auVar97._0_2_ + uVar101 + sVar65;
      sVar74 = auVar72._2_2_;
      auVar98._2_2_ = auVar97._2_2_ + uVar109 + sVar74;
      sVar75 = auVar72._4_2_;
      auVar98._4_2_ = auVar97._4_2_ + uVar110 + sVar75;
      sVar76 = auVar72._6_2_;
      auVar98._6_2_ = auVar97._6_2_ + uVar111 + sVar76;
      sVar77 = auVar72._8_2_;
      auVar98._8_2_ = auVar97._8_2_ + uVar112 + sVar77;
      sVar78 = auVar72._10_2_;
      auVar98._10_2_ = auVar97._10_2_ + uVar113 + sVar78;
      sVar79 = auVar72._12_2_;
      auVar98._12_2_ = auVar97._12_2_ + uVar114 + sVar79;
      sVar80 = auVar72._14_2_;
      auVar98._14_2_ = auVar97._14_2_ + uVar115 + sVar80;
      auVar99 = psraw(auVar98,4);
      sVar2 = auVar99._0_2_;
      sVar4 = auVar99._2_2_;
      sVar5 = auVar99._4_2_;
      sVar6 = auVar99._6_2_;
      sVar7 = auVar99._8_2_;
      sVar8 = auVar99._10_2_;
      sVar9 = auVar99._12_2_;
      sVar3 = auVar99._14_2_;
      cVar18 = (0 < sVar3) * (sVar3 < 0x100) * auVar99[0xe] - (0xff < sVar3);
      sVar10 = auVar54._0_2_;
      sVar11 = auVar54._2_2_;
      sVar12 = auVar54._4_2_;
      sVar13 = auVar54._6_2_;
      sVar14 = auVar54._8_2_;
      sVar15 = auVar54._10_2_;
      sVar16 = auVar54._12_2_;
      sVar17 = auVar54._14_2_;
      auVar59._0_12_ = auVar89._0_12_;
      auVar59._12_2_ = auVar89._6_2_;
      auVar59._14_2_ = sVar76;
      auVar58._12_4_ = auVar59._12_4_;
      auVar58._0_10_ = auVar89._0_10_;
      auVar58._10_2_ = sVar75;
      auVar57._10_6_ = auVar58._10_6_;
      auVar57._0_8_ = auVar89._0_8_;
      auVar57._8_2_ = auVar89._4_2_;
      auVar56._8_8_ = auVar57._8_8_;
      auVar56._6_2_ = sVar74;
      auVar56._4_2_ = auVar89._2_2_;
      auVar56._2_2_ = sVar65;
      auVar56._0_2_ = auVar89._0_2_;
      auVar97 = pmaddwd(auVar116,auVar56);
      auVar90._2_2_ = sVar77;
      auVar90._0_2_ = auVar89._8_2_;
      auVar90._4_2_ = auVar89._10_2_;
      auVar90._6_2_ = sVar78;
      auVar90._8_2_ = auVar89._12_2_;
      auVar90._10_2_ = sVar79;
      auVar90._12_2_ = auVar89._14_2_;
      auVar90._14_2_ = sVar80;
      auVar72 = pmaddwd(auVar116,auVar90);
      auVar81._0_4_ = auVar97._0_4_ >> 0x10;
      auVar81._4_4_ = auVar97._4_4_ >> 0x10;
      auVar81._8_4_ = auVar97._8_4_ >> 0x10;
      auVar81._12_4_ = auVar97._12_4_ >> 0x10;
      auVar60._0_4_ = auVar72._0_4_ >> 0x10;
      auVar60._4_4_ = auVar72._4_4_ >> 0x10;
      auVar60._8_4_ = auVar72._8_4_ >> 0x10;
      auVar60._12_4_ = auVar72._12_4_ >> 0x10;
      auVar72 = packssdw(auVar81,auVar60);
      auVar82._0_2_ = (auVar72._0_2_ - sVar65) + uVar101;
      auVar82._2_2_ = (auVar72._2_2_ - sVar74) + uVar109;
      auVar82._4_2_ = (auVar72._4_2_ - sVar75) + uVar110;
      auVar82._6_2_ = (auVar72._6_2_ - sVar76) + uVar111;
      auVar82._8_2_ = (auVar72._8_2_ - sVar77) + uVar112;
      auVar82._10_2_ = (auVar72._10_2_ - sVar78) + uVar113;
      auVar82._12_2_ = (auVar72._12_2_ - sVar79) + uVar114;
      auVar82._14_2_ = (auVar72._14_2_ - sVar80) + uVar115;
      auVar72 = psraw(auVar82,4);
      sVar3 = auVar72._0_2_;
      sVar65 = auVar72._2_2_;
      sVar74 = auVar72._4_2_;
      sVar75 = auVar72._6_2_;
      sVar76 = auVar72._8_2_;
      sVar77 = auVar72._10_2_;
      sVar78 = auVar72._12_2_;
      sVar79 = auVar72._14_2_;
      uVar31 = CONCAT11((0 < sVar79) * (sVar79 < 0x100) * auVar72[0xe] - (0xff < sVar79),cVar18);
      uVar30 = CONCAT31(CONCAT21(uVar31,(0 < sVar78) * (sVar78 < 0x100) * auVar72[0xc] -
                                        (0xff < sVar78)),
                        (0 < sVar9) * (sVar9 < 0x100) * auVar99[0xc] - (0xff < sVar9));
      uVar29 = CONCAT51(CONCAT41(uVar30,(0 < sVar77) * (sVar77 < 0x100) * auVar72[10] -
                                        (0xff < sVar77)),
                        (0 < sVar8) * (sVar8 < 0x100) * auVar99[10] - (0xff < sVar8));
      Var24 = CONCAT72(CONCAT61(uVar29,(0 < sVar76) * (sVar76 < 0x100) * auVar72[8] -
                                       (0xff < sVar76)),
                       CONCAT11((0 < sVar7) * (sVar7 < 0x100) * auVar99[8] - (0xff < sVar7),cVar18))
      ;
      Var21 = CONCAT91(CONCAT81((longlong)((unkuint9)Var24 >> 8),
                                (0 < sVar75) * (sVar75 < 0x100) * auVar72[6] - (0xff < sVar75)),
                       (0 < sVar6) * (sVar6 < 0x100) * auVar99[6] - (0xff < sVar6));
      auVar23._2_10_ = Var21;
      auVar23[1] = (0 < sVar74) * (sVar74 < 0x100) * auVar72[4] - (0xff < sVar74);
      auVar23[0] = (0 < sVar5) * (sVar5 < 0x100) * auVar99[4] - (0xff < sVar5);
      auVar22._2_12_ = auVar23;
      auVar22[1] = (0 < sVar65) * (sVar65 < 0x100) * auVar72[2] - (0xff < sVar65);
      auVar22[0] = (0 < sVar4) * (sVar4 < 0x100) * auVar99[2] - (0xff < sVar4);
      auVar73._0_2_ =
           CONCAT11((0 < sVar3) * (sVar3 < 0x100) * auVar72[0] - (0xff < sVar3),
                    (0 < sVar2) * (sVar2 < 0x100) * auVar99[0] - (0xff < sVar2));
      auVar73._2_14_ = auVar22;
      uVar91 = CONCAT11((0 < sVar32) * (sVar32 < 0x100) * (char)sVar32 - (0xff < sVar32),
                        (0 < sVar10) * (sVar10 < 0x100) * auVar54[0] - (0xff < sVar10));
      uVar92 = CONCAT13((0 < sVar33) * (sVar33 < 0x100) * (char)sVar33 - (0xff < sVar33),
                        CONCAT12((0 < sVar11) * (sVar11 < 0x100) * auVar54[2] - (0xff < sVar11),
                                 uVar91));
      uVar93 = CONCAT15((0 < sVar34) * (sVar34 < 0x100) * (char)sVar34 - (0xff < sVar34),
                        CONCAT14((0 < sVar12) * (sVar12 < 0x100) * auVar54[4] - (0xff < sVar12),
                                 uVar92));
      uVar94 = CONCAT17((0 < sVar35) * (sVar35 < 0x100) * (char)sVar35 - (0xff < sVar35),
                        CONCAT16((0 < sVar13) * (sVar13 < 0x100) * auVar54[6] - (0xff < sVar13),
                                 uVar93));
      auVar95._0_10_ =
           CONCAT19((0 < sVar36) * (sVar36 < 0x100) * (char)sVar36 - (0xff < sVar36),
                    CONCAT18((0 < sVar14) * (sVar14 < 0x100) * auVar54[8] - (0xff < sVar14),uVar94))
      ;
      auVar95[10] = (0 < sVar15) * (sVar15 < 0x100) * auVar54[10] - (0xff < sVar15);
      auVar95[0xb] = (0 < sVar37) * (sVar37 < 0x100) * (char)sVar37 - (0xff < sVar37);
      auVar96[0xc] = (0 < sVar16) * (sVar16 < 0x100) * auVar54[0xc] - (0xff < sVar16);
      auVar96._0_12_ = auVar95;
      auVar96[0xd] = (0 < sVar38) * (sVar38 < 0x100) * (char)sVar38 - (0xff < sVar38);
      auVar100[0xe] = (0 < sVar17) * (sVar17 < 0x100) * auVar54[0xe] - (0xff < sVar17);
      auVar100._0_14_ = auVar96;
      auVar100[0xf] = (0 < sVar39) * (sVar39 < 0x100) * (char)sVar39 - (0xff < sVar39);
      auVar64._0_12_ = auVar73._0_12_;
      auVar64._12_2_ = (short)Var21;
      auVar64._14_2_ = (short)((ulonglong)uVar94 >> 0x30);
      auVar63._12_4_ = auVar64._12_4_;
      auVar63._0_10_ = auVar73._0_10_;
      auVar63._10_2_ = (short)((uint6)uVar93 >> 0x20);
      auVar62._10_6_ = auVar63._10_6_;
      auVar62._0_8_ = auVar73._0_8_;
      auVar62._8_2_ = auVar23._0_2_;
      auVar61._8_8_ = auVar62._8_8_;
      auVar61._6_2_ = (short)((uint)uVar92 >> 0x10);
      auVar61._4_2_ = auVar22._0_2_;
      auVar61._2_2_ = uVar91;
      auVar61._0_2_ = auVar73._0_2_;
      *param_1 = auVar61;
      *(short *)param_1[1] = (short)((unkuint9)Var24 >> 8);
      *(short *)(param_1[1] + 2) = (short)((unkuint10)auVar95._0_10_ >> 0x40);
      *(short *)(param_1[1] + 4) = (short)uVar29;
      *(short *)(param_1[1] + 6) = auVar95._10_2_;
      *(short *)(param_1[1] + 8) = (short)uVar30;
      *(short *)(param_1[1] + 10) = auVar96._12_2_;
      *(undefined2 *)(param_1[1] + 0xc) = uVar31;
      *(short *)(param_1[1] + 0xe) = auVar100._14_2_;
      param_1 = param_1 + 2;
      iVar46 = iVar47;
    } while (iVar1 < param_5);
  }
  lVar44 = (longlong)iVar47;
  if (lVar44 < param_5) {
    puVar50 = *param_1 + 2;
    pbVar45 = (byte *)(lVar44 + param_4);
    lVar44 = param_5 - lVar44;
    do {
      iVar47 = (uint)pbVar45[param_2 - param_4] * 0x100000 + 0x80000;
      uVar49 = (int)((*pbVar45 - 0x80) * 0x166e90 + iVar47) >> 0x14;
      uVar43 = (int)((pbVar45[param_3 - param_4] - 0x80) * -0x581a0 + (*pbVar45 - 0x80) * -0xb6d20 +
                    iVar47) >> 0x14;
      uVar48 = (int)((pbVar45[param_3 - param_4] - 0x80) * 0x1c5a20 + iVar47) >> 0x14;
      if ((0xff < uVar49) && (bVar51 = (int)uVar49 < 0, uVar49 = 0xff, bVar51)) {
        uVar49 = 0;
      }
      if ((0xff < uVar43) && (bVar51 = (int)uVar43 < 0, uVar43 = 0xff, bVar51)) {
        uVar43 = 0;
      }
      if ((0xff < uVar48) && (bVar51 = (int)uVar48 < 0, uVar48 = 0xff, bVar51)) {
        uVar48 = 0;
      }
      puVar50[-2] = (char)uVar49;
      pbVar45 = pbVar45 + 1;
      puVar50[-1] = (char)uVar43;
      *puVar50 = (char)uVar48;
      puVar50[1] = 0xff;
      puVar50 = puVar50 + param_6;
      lVar44 = lVar44 + -1;
    } while (lVar44 != 0);
  }
  return;
}

// FUN_14f647b60 @ 14f647b60

bool FUN_14f647b60(uint param_1,uint param_2)

{
  if ((int)(~param_1 ^ ~param_2) < 0) {
    return true;
  }
  if (((int)param_1 < 0) && ((int)param_2 < 0)) {
    return (int)(-0x80000000 - param_2) <= (int)param_1;
  }
  return (int)param_1 <= (int)(0x7fffffff - param_2);
}

// FUN_14f647bd0 @ 14f647bd0

ulonglong FUN_14f647bd0(longlong param_1)

{
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    uVar1 = (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x28));
    if ((int)uVar1 == 0) {
      return uVar1;
    }
    if (*(int *)(param_1 + 0x30) == 0) {
      return 1;
    }
  }
  return (ulonglong)(*(ulonglong *)(param_1 + 200) <= *(ulonglong *)(param_1 + 0xc0));
}

// FUN_14f647c30 @ 14f647c30

void FUN_14f647c30(short *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  sbyte sVar3;
  int iVar4;
  ushort uVar5;
  int iVar6;
  byte *pbVar7;
  
  iVar6 = 0;
  pbVar7 = param_2;
  do {
    bVar1 = *pbVar7;
    *param_1 = 0;
    if (bVar1 != 0xff) {
      bVar2 = param_2[(ulonglong)bVar1 + 0x400];
      bVar1 = param_2[(ulonglong)bVar1 + 0x500];
      uVar5 = bVar2 & 0xf;
      if (((bVar2 & 0xf) != 0) && ((ushort)(bVar1 + uVar5) < 10)) {
        sVar3 = (sbyte)uVar5;
        iVar4 = (int)(iVar6 << (bVar1 & 0x1f) & 0x1ffU) >> (9U - sVar3 & 0x1f);
        if (iVar4 < 1 << (sVar3 - 1U & 0x1f)) {
          iVar4 = iVar4 + (1 - (1 << sVar3));
        }
        if (iVar4 + 0x80U < 0x100) {
          *param_1 = ((short)iVar4 * 0x10 + (ushort)(bVar2 >> 4)) * 0x10 + uVar5 + (ushort)bVar1;
        }
      }
    }
    iVar6 = iVar6 + 1;
    pbVar7 = pbVar7 + 1;
    param_1 = param_1 + 1;
  } while (iVar6 < 0x200);
  return;
}

// FUN_14f647d20 @ 14f647d20

undefined8 FUN_14f647d20(void *param_1,longlong param_2)

{
  ulonglong uVar1;
  byte bVar2;
  undefined2 *puVar3;
  longlong lVar4;
  ushort *puVar5;
  ulonglong uVar6;
  byte *pbVar7;
  uint uVar8;
  undefined1 *puVar11;
  uint uVar12;
  ulonglong uVar14;
  byte *pbVar15;
  int *piVar16;
  int iVar17;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar13;
  
  uVar6 = 0;
  uVar1 = uVar6;
  uVar10 = uVar6;
  uVar14 = uVar6;
  do {
    iVar17 = (int)uVar14;
    if (0 < *(int *)(param_2 + (longlong)iVar17 * 4)) {
      uVar13 = uVar6;
      do {
        *(char *)((longlong)param_1 + uVar1 + 0x500) = (char)uVar14 + '\x01';
        uVar10 = (ulonglong)((int)uVar10 + 1);
        uVar1 = uVar1 + 1;
        if (0x100 < (longlong)uVar1) {
          *(char **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x9cf0) = "bad size list";
          return 0;
        }
        uVar12 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar12;
      } while ((int)uVar12 < *(int *)(param_2 + (longlong)iVar17 * 4));
    }
    uVar14 = (ulonglong)(iVar17 + 1U);
  } while ((int)(iVar17 + 1U) < 0x10);
  piVar16 = (int *)((longlong)param_1 + 0x608);
  uVar12 = 1;
  pbVar7 = (byte *)((longlong)param_1 + 0x500);
  *(undefined1 *)((longlong)(int)uVar10 + 0x500 + (longlong)param_1) = 0;
  iVar17 = 0xf;
  uVar1 = uVar6;
  uVar10 = uVar6;
  uVar14 = uVar6;
  pbVar15 = pbVar7;
  do {
    uVar8 = (uint)uVar10;
    piVar16[0x12] = (int)uVar1 - uVar8;
    if (*pbVar15 == uVar12) {
      puVar3 = (undefined2 *)((longlong)param_1 + uVar14 * 2 + 0x200);
      do {
        *puVar3 = (short)uVar10;
        puVar3 = puVar3 + 1;
        uVar14 = uVar14 + 1;
        uVar1 = (ulonglong)((int)uVar1 + 1);
        pbVar15 = pbVar7 + uVar14;
        uVar9 = (uint)uVar10;
        uVar8 = uVar9 + 1;
        uVar10 = (ulonglong)uVar8;
      } while (pbVar7[uVar14] == uVar12);
      if ((uint)(1 << ((byte)uVar12 & 0x1f)) <= uVar9) {
        *(char **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9cf0) = "bad code lengths";
        return 0;
      }
    }
    uVar10 = (ulonglong)(uVar8 * 2);
    *piVar16 = uVar8 << ((byte)iVar17 & 0x1f);
    uVar12 = uVar12 + 1;
    piVar16 = piVar16 + 1;
    iVar17 = iVar17 + -1;
    if (iVar17 < 0) {
      *(undefined4 *)((longlong)param_1 + (longlong)(int)uVar12 * 4 + 0x604) = 0xffffffff;
      memset(param_1,0xff,0x200);
      if (0 < (int)uVar1) {
        puVar5 = (ushort *)((longlong)param_1 + 0x200);
        do {
          if (*pbVar7 < 10) {
            bVar2 = 9 - *pbVar7;
            iVar17 = 1 << (bVar2 & 0x1f);
            if (0 < iVar17) {
              puVar11 = (undefined1 *)
                        ((longlong)(int)((uint)*puVar5 << (bVar2 & 0x1f)) + (longlong)param_1);
              for (lVar4 = (longlong)iVar17; lVar4 != 0; lVar4 = lVar4 + -1) {
                *puVar11 = (char)uVar6;
                puVar11 = puVar11 + 1;
              }
            }
          }
          uVar12 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar12;
          puVar5 = puVar5 + 1;
          pbVar7 = pbVar7 + 1;
        } while ((int)uVar12 < (int)uVar1);
      }
      return 1;
    }
  } while( true );
}

// FUN_14f647f70 @ 14f647f70

/* WARNING: Removing unreachable block (ram,0x00014f647f7d) */

undefined4 FUN_14f647f70(void)

{
  longlong lVar1;
  
  lVar1 = cpuid_Version_info(1);
  return *(undefined4 *)(lVar1 + 8);
}

// FUN_14f647f90 @ 14f647f90

bool FUN_14f647f90(longlong *param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  
  *(undefined4 *)((longlong)param_1 + 0x484c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x909) = 0;
  *(undefined1 *)(param_1 + 0x905) = 0xff;
  cVar2 = FUN_14f648540();
  if (cVar2 != -0x28) {
    *(char **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9cf0) = "no SOI";
    return false;
  }
  if (param_2 == 1) {
    return true;
  }
  bVar3 = FUN_14f648540(param_1);
  uVar5 = (uint)bVar3;
  if (bVar3 != 0xc0) {
    do {
      if (uVar5 - 0xc1 < 2) break;
      iVar4 = FUN_14f64bbe0(param_1);
      if (iVar4 == 0) {
        return false;
      }
      bVar3 = FUN_14f648540(param_1);
      while (bVar3 == 0xff) {
        lVar1 = *param_1;
        if (*(longlong *)(lVar1 + 0x10) == 0) {
LAB_14f648079:
          if (*(ulonglong *)(lVar1 + 200) <= *(ulonglong *)(lVar1 + 0xc0)) {
LAB_14f6480e3:
            *(char **)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9cf0)
                 = "no SOF";
            return false;
          }
        }
        else {
          iVar4 = (**(code **)(lVar1 + 0x20))(*(undefined8 *)(lVar1 + 0x28));
          if (iVar4 != 0) {
            if (*(int *)(lVar1 + 0x30) == 0) goto LAB_14f6480e3;
            goto LAB_14f648079;
          }
        }
        bVar3 = FUN_14f648540(param_1);
      }
      uVar5 = (uint)bVar3;
    } while (uVar5 != 0xc0);
  }
  *(uint *)(param_1 + 0x906) = (uint)(uVar5 == 0xc2);
  iVar4 = FUN_14f64b410(param_1,param_2);
  return iVar4 != 0;
}

// FUN_14f648110 @ 14f648110

undefined8 FUN_14f648110(longlong *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  
  param_1[0x8db] = 0;
  param_1[0x8dc] = 0;
  param_1[0x8e7] = 0;
  param_1[0x8e8] = 0;
  param_1[0x8f3] = 0;
  param_1[0x8f4] = 0;
  param_1[0x8ff] = 0;
  param_1[0x900] = 0;
  *(undefined4 *)(param_1 + 0x90d) = 0;
  uVar5 = FUN_14f647f90(param_1,0);
  if ((int)uVar5 == 0) {
    return uVar5;
  }
  bVar1 = FUN_14f648540(param_1);
  uVar6 = (uint)bVar1;
  if (bVar1 != 0xd9) {
    do {
      if (uVar6 == 0xda) {
        iVar3 = FUN_14f64c320(param_1);
        if ((iVar3 == 0) || (iVar3 = FUN_14f64ab80(param_1), iVar3 == 0)) {
          return 0;
        }
        if ((char)param_1[0x905] == -1) {
          uVar2 = FUN_14f64cd90(param_1);
          *(undefined1 *)(param_1 + 0x905) = uVar2;
        }
        bVar1 = FUN_14f648540(param_1);
        uVar6 = (uint)bVar1;
        if (uVar6 - 0xd0 < 8) goto LAB_14f648242;
      }
      else {
        if (uVar6 == 0xdc) {
          iVar3 = FUN_14f648420(*param_1);
          iVar4 = FUN_14f648420(*param_1);
          if (iVar3 != 4) {
            *(char **)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9cf0)
                 = "bad DNL len";
            return 0;
          }
          if (iVar4 != *(int *)(*param_1 + 4)) {
            *(char **)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9cf0)
                 = "bad DNL height";
            return 0;
          }
        }
        else {
          iVar3 = FUN_14f64bbe0(param_1,uVar6);
          if (iVar3 == 0) {
            return 1;
          }
        }
LAB_14f648242:
        bVar1 = FUN_14f648540(param_1);
        uVar6 = (uint)bVar1;
      }
    } while (uVar6 != 0xd9);
  }
  if ((int)param_1[0x906] != 0) {
    FUN_14f64a530(param_1);
  }
  return 1;
}

// FUN_14f6482e0 @ 14f6482e0

int FUN_14f6482e0(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0x4824) < param_2) {
    FUN_14f648610();
  }
  if (*(int *)(param_1 + 0x4824) < param_2) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x4820);
  uVar2 = *(uint *)(&DAT_153478d30 + (longlong)param_2 * 4);
  bVar3 = (byte)param_2 & 0x1f;
  uVar4 = uVar1 << bVar3 | uVar1 >> 0x20 - bVar3;
  *(int *)(param_1 + 0x4824) = *(int *)(param_1 + 0x4824) - param_2;
  *(uint *)(param_1 + 0x4820) = ~uVar2 & uVar4;
  return (*(uint *)(&DAT_153478d90 + (longlong)param_2 * 4) & 0xffffffffU - ((int)uVar1 >> 0x1f)) +
         (uVar2 & uVar4);
}

// FUN_14f648390 @ 14f648390

undefined4 FUN_14f648390(longlong param_1,uint param_2,undefined4 param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  if (0 < (int)param_2) {
    plVar1 = (longlong *)(param_1 + 0x46d8);
    uVar2 = (ulonglong)param_2;
    do {
      if (*plVar1 != 0) {
        (*(code *)PTR_free_154df4930)();
        *plVar1 = 0;
        plVar1[-1] = 0;
      }
      if (plVar1[1] != 0) {
        (*(code *)PTR_free_154df4930)();
        plVar1[1] = 0;
        plVar1[3] = 0;
      }
      if (plVar1[2] != 0) {
        (*(code *)PTR_free_154df4930)();
        plVar1[2] = 0;
      }
      plVar1 = plVar1 + 0xc;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return param_3;
}

// FUN_14f648420 @ 14f648420

int FUN_14f648420(longlong param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte bVar3;
  
  pbVar2 = *(byte **)(param_1 + 0xc0);
  if (pbVar2 < *(byte **)(param_1 + 200)) {
    bVar3 = *pbVar2;
    *(byte **)(param_1 + 0xc0) = pbVar2 + 1;
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    bVar3 = 0;
  }
  else {
    FUN_14f64c730();
    bVar3 = **(byte **)(param_1 + 0xc0);
    *(byte **)(param_1 + 0xc0) = *(byte **)(param_1 + 0xc0) + 1;
  }
  pbVar2 = *(byte **)(param_1 + 0xc0);
  if (*(byte **)(param_1 + 200) <= pbVar2) {
    if (*(int *)(param_1 + 0x30) == 0) {
      return (uint)bVar3 * 0x100;
    }
    FUN_14f64c730(param_1);
    pbVar2 = *(byte **)(param_1 + 0xc0);
  }
  bVar1 = *pbVar2;
  *(byte **)(param_1 + 0xc0) = pbVar2 + 1;
  return (uint)bVar1 + (uint)bVar3 * 0x100;
}

// FUN_14f6484e0 @ 14f6484e0

ulonglong FUN_14f6484e0(longlong param_1)

{
  byte bVar1;
  byte *pbVar2;
  ulonglong in_RAX;
  
  pbVar2 = *(byte **)(param_1 + 0xc0);
  if (pbVar2 < *(byte **)(param_1 + 200)) {
    bVar1 = *pbVar2;
    *(byte **)(param_1 + 0xc0) = pbVar2 + 1;
    return (ulonglong)bVar1;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_14f64c730();
    bVar1 = **(byte **)(param_1 + 0xc0);
    *(byte **)(param_1 + 0xc0) = *(byte **)(param_1 + 0xc0) + 1;
    return (ulonglong)bVar1;
  }
  return in_RAX & 0xffffffffffffff00;
}

// FUN_14f648540 @ 14f648540

ulonglong FUN_14f648540(longlong *param_1)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  char *pcVar4;
  byte *pbVar5;
  
  bVar1 = *(byte *)(param_1 + 0x905);
  if (bVar1 != 0xff) {
    *(undefined1 *)(param_1 + 0x905) = 0xff;
    return (ulonglong)bVar1;
  }
  lVar3 = *param_1;
  pcVar4 = *(char **)(lVar3 + 0xc0);
  if (*(char **)(lVar3 + 200) <= pcVar4) {
    if (*(int *)(lVar3 + 0x30) == 0) goto LAB_14f6485f8;
    FUN_14f64c730(lVar3);
    pcVar4 = *(char **)(lVar3 + 0xc0);
  }
  cVar2 = *pcVar4;
  pcVar4 = pcVar4 + 1;
  *(char **)(lVar3 + 0xc0) = pcVar4;
  if (cVar2 == -1) {
    do {
      lVar3 = *param_1;
      pbVar5 = *(byte **)(lVar3 + 0xc0);
      if (*(byte **)(lVar3 + 200) <= pbVar5) {
        if (*(int *)(lVar3 + 0x30) == 0) {
          return 0;
        }
        FUN_14f64c730(lVar3);
        pbVar5 = *(byte **)(lVar3 + 0xc0);
      }
      bVar1 = *pbVar5;
      *(byte **)(lVar3 + 0xc0) = pbVar5 + 1;
    } while (bVar1 == 0xff);
    return (ulonglong)bVar1;
  }
LAB_14f6485f8:
  return CONCAT71((int7)((ulonglong)pcVar4 >> 8),0xff);
}

// FUN_14f648610 @ 14f648610

void FUN_14f648610(longlong *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  byte *pbVar3;
  char *pcVar4;
  int iVar5;
  byte bVar6;
  char cVar7;
  uint uVar8;
  
  do {
    if (*(int *)((longlong)param_1 + 0x482c) == 0) {
      lVar2 = *param_1;
      pbVar3 = *(byte **)(lVar2 + 0xc0);
      if (pbVar3 < *(byte **)(lVar2 + 200)) {
        bVar6 = *pbVar3;
        *(byte **)(lVar2 + 0xc0) = pbVar3 + 1;
      }
      else if (*(int *)(lVar2 + 0x30) == 0) {
        bVar6 = 0;
      }
      else {
        FUN_14f64c730(lVar2);
        bVar6 = **(byte **)(lVar2 + 0xc0);
        *(byte **)(lVar2 + 0xc0) = *(byte **)(lVar2 + 0xc0) + 1;
      }
      uVar8 = (uint)bVar6;
      if (uVar8 == 0xff) {
        lVar2 = *param_1;
        pcVar4 = *(char **)(lVar2 + 0xc0);
        if (pcVar4 < *(char **)(lVar2 + 200)) {
          cVar7 = *pcVar4;
          *(char **)(lVar2 + 0xc0) = pcVar4 + 1;
        }
        else if (*(int *)(lVar2 + 0x30) == 0) {
          cVar7 = '\0';
        }
        else {
          FUN_14f64c730(lVar2);
          cVar7 = **(char **)(lVar2 + 0xc0);
          *(char **)(lVar2 + 0xc0) = *(char **)(lVar2 + 0xc0) + 1;
        }
        while (cVar7 == -1) {
          lVar2 = *param_1;
          pcVar4 = *(char **)(lVar2 + 0xc0);
          if (pcVar4 < *(char **)(lVar2 + 200)) {
            cVar7 = *pcVar4;
            *(char **)(lVar2 + 0xc0) = pcVar4 + 1;
          }
          else if (*(int *)(lVar2 + 0x30) == 0) {
            cVar7 = '\0';
          }
          else {
            puVar1 = (undefined1 *)(lVar2 + 0x38);
            iVar5 = (**(code **)(lVar2 + 0x10))
                              (*(undefined8 *)(lVar2 + 0x28),puVar1,*(undefined4 *)(lVar2 + 0x34));
            *(int *)(lVar2 + 0xb8) =
                 *(int *)(lVar2 + 0xb8) + (*(int *)(lVar2 + 0xc0) - *(int *)(lVar2 + 0xd0));
            *(undefined1 **)(lVar2 + 0xc0) = puVar1;
            if (iVar5 == 0) {
              *(undefined4 *)(lVar2 + 0x30) = 0;
              *(longlong *)(lVar2 + 200) = lVar2 + 0x39;
              *puVar1 = 0;
            }
            else {
              *(longlong *)(lVar2 + 200) = lVar2 + 0x38 + (longlong)iVar5;
            }
            cVar7 = **(char **)(lVar2 + 0xc0);
            *(char **)(lVar2 + 0xc0) = *(char **)(lVar2 + 0xc0) + 1;
          }
        }
        if (cVar7 != '\0') {
          *(char *)(param_1 + 0x905) = cVar7;
          *(undefined4 *)((longlong)param_1 + 0x482c) = 1;
          return;
        }
      }
    }
    else {
      uVar8 = 0;
    }
    *(uint *)(param_1 + 0x904) =
         *(uint *)(param_1 + 0x904) |
         uVar8 << (0x18U - (char)*(int *)((longlong)param_1 + 0x4824) & 0x1f);
    iVar5 = *(int *)((longlong)param_1 + 0x4824) + 8;
    *(int *)((longlong)param_1 + 0x4824) = iVar5;
    if (0x18 < iVar5) {
      return;
    }
  } while( true );
}

// FUN_14f6487f0 @ 14f6487f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14f6487f0(longlong param_1,int param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  short *psVar15;
  undefined1 *puVar16;
  int iVar17;
  int iVar18;
  longlong local_178 [3];
  longlong local_160;
  int local_130 [2];
  int local_128 [16];
  int local_e8 [40];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)local_178;
  piVar5 = local_128;
  psVar15 = (short *)(param_3 + 0x60);
  local_160 = 8;
  local_178[0] = 8;
  do {
    if ((((psVar15[-0x28] == 0) && (psVar15[-0x20] == 0)) && (psVar15[-0x18] == 0)) &&
       (((psVar15[-0x10] == 0 && (psVar15[-8] == 0)) && ((*psVar15 == 0 && (psVar15[8] == 0)))))) {
      iVar1 = (int)psVar15[-0x30] << 2;
      piVar5[0x30] = iVar1;
      piVar5[0x28] = iVar1;
      piVar5[0x20] = iVar1;
      piVar5[0x18] = iVar1;
      piVar5[8] = iVar1;
      *piVar5 = iVar1;
      piVar5[-8] = iVar1;
    }
    else {
      iVar12 = (int)psVar15[-0x18];
      iVar2 = (int)psVar15[8];
      iVar6 = (int)psVar15[-8];
      iVar1 = ((int)*psVar15 + (int)psVar15[-0x20]) * 0x1151;
      iVar3 = (int)psVar15[-0x28];
      iVar11 = iVar1 + *psVar15 * -0x3b21;
      iVar1 = psVar15[-0x20] * 0x187e + iVar1;
      iVar8 = ((int)psVar15[-0x30] - (int)psVar15[-0x10]) * 0x2000;
      iVar7 = ((int)psVar15[-0x10] + (int)psVar15[-0x30]) * 0x2000;
      iVar14 = iVar8 + iVar11 + 0x400;
      iVar13 = iVar1 + iVar7 + 0x400;
      iVar10 = (iVar8 - iVar11) + 0x400;
      iVar11 = (iVar7 - iVar1) + 0x400;
      iVar17 = (iVar6 + iVar3 + iVar2 + iVar12) * 0x25a1;
      iVar1 = (iVar2 + iVar3) * -0x1ccd;
      iVar8 = (iVar6 + iVar12) * -0x5203;
      iVar7 = iVar17 + (iVar2 + iVar12) * -0x3ec5;
      iVar17 = iVar17 + (iVar6 + iVar3) * -0xc7c;
      iVar3 = iVar3 * 0x300b + iVar17 + iVar1;
      iVar12 = iVar12 * 0x6254 + iVar7 + iVar8;
      iVar8 = iVar6 * 0x41b3 + iVar17 + iVar8;
      iVar7 = iVar2 * 0x98e + iVar1 + iVar7;
      piVar5[-8] = iVar13 + iVar3 >> 0xb;
      *piVar5 = iVar14 + iVar12 >> 0xb;
      piVar5[8] = iVar10 + iVar8 >> 0xb;
      iVar1 = iVar7 + iVar11 >> 0xb;
      piVar5[0x18] = iVar11 - iVar7 >> 0xb;
      piVar5[0x30] = iVar13 - iVar3 >> 0xb;
      piVar5[0x28] = iVar14 - iVar12 >> 0xb;
      piVar5[0x20] = iVar10 - iVar8 >> 0xb;
    }
    piVar5[0x10] = iVar1;
    psVar15 = psVar15 + 1;
    piVar5 = piVar5 + 1;
    local_178[0] = local_178[0] + -1;
  } while (local_178[0] != 0);
  piVar5 = local_130;
  puVar16 = (undefined1 *)(param_1 + 1);
  do {
    iVar1 = piVar5[1];
    iVar7 = piVar5[-1];
    iVar3 = piVar5[-3];
    iVar6 = (*piVar5 + piVar5[-4]) * 0x1151;
    iVar12 = piVar5[-4] * 0x187e + iVar6;
    iVar6 = iVar6 + *piVar5 * -0x3b21;
    iVar17 = (piVar5[-2] + piVar5[-6]) * 0x2000;
    iVar2 = (piVar5[-6] - piVar5[-2]) * 0x2000;
    iVar11 = piVar5[-5];
    iVar8 = iVar17 + iVar12 + 0x2020000;
    iVar14 = iVar2 + iVar6 + 0x2020000;
    iVar2 = (iVar2 - iVar6) + 0x2020000;
    iVar18 = (iVar17 - iVar12) + 0x2020000;
    iVar12 = (iVar7 + iVar11 + iVar1 + iVar3) * 0x25a1;
    iVar17 = (iVar1 + iVar11) * -0x1ccd;
    iVar13 = (iVar7 + iVar3) * -0x5203;
    iVar6 = iVar12 + (iVar1 + iVar3) * -0x3ec5;
    iVar12 = iVar12 + (iVar7 + iVar11) * -0xc7c;
    iVar10 = iVar3 * 0x6254 + iVar6 + iVar13;
    iVar3 = iVar11 * 0x300b + iVar12 + iVar17;
    iVar13 = iVar7 * 0x41b3 + iVar12 + iVar13;
    uVar4 = iVar3 + iVar8 >> 0x12;
    iVar6 = iVar1 * 0x98e + iVar17 + iVar6;
    if (0xff < uVar4) {
      if ((int)uVar4 < 0) {
        uVar4 = 0;
      }
      else if (0xff < (int)uVar4) {
        uVar4 = 0xff;
      }
    }
    uVar9 = iVar8 - iVar3 >> 0x12;
    puVar16[-1] = (char)uVar4;
    if (0xff < uVar9) {
      if ((int)uVar9 < 0) {
        uVar9 = 0;
      }
      else if (0xff < (int)uVar9) {
        uVar9 = 0xff;
      }
    }
    puVar16[6] = (char)uVar9;
    uVar4 = iVar14 + iVar10 >> 0x12;
    if (0xff < uVar4) {
      if ((int)uVar4 < 0) {
        uVar4 = 0;
      }
      else if (0xff < (int)uVar4) {
        uVar4 = 0xff;
      }
    }
    *puVar16 = (char)uVar4;
    uVar4 = iVar14 - iVar10 >> 0x12;
    if (0xff < uVar4) {
      if ((int)uVar4 < 0) {
        uVar4 = 0;
      }
      else if (0xff < (int)uVar4) {
        uVar4 = 0xff;
      }
    }
    puVar16[5] = (char)uVar4;
    uVar4 = iVar2 + iVar13 >> 0x12;
    if (0xff < uVar4) {
      if ((int)uVar4 < 0) {
        uVar4 = 0;
      }
      else if (0xff < (int)uVar4) {
        uVar4 = 0xff;
      }
    }
    puVar16[1] = (char)uVar4;
    uVar4 = iVar2 - iVar13 >> 0x12;
    if (0xff < uVar4) {
      if ((int)uVar4 < 0) {
        uVar4 = 0;
      }
      else if (0xff < (int)uVar4) {
        uVar4 = 0xff;
      }
    }
    puVar16[4] = (char)uVar4;
    uVar4 = iVar18 + iVar6 >> 0x12;
    if (0xff < uVar4) {
      if ((int)uVar4 < 0) {
        uVar4 = 0;
      }
      else if (0xff < (int)uVar4) {
        uVar4 = 0xff;
      }
    }
    puVar16[2] = (char)uVar4;
    uVar4 = iVar18 - iVar6 >> 0x12;
    if (0xff < uVar4) {
      if ((int)uVar4 < 0) {
        uVar4 = 0;
      }
      else if (0xff < (int)uVar4) {
        uVar4 = 0xff;
      }
    }
    piVar5 = piVar5 + 8;
    puVar16[3] = (char)uVar4;
    puVar16 = puVar16 + param_2;
    local_160 = local_160 + -1;
  } while (local_160 != 0);
  return;
}

// FUN_14f648c70 @ 14f648c70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14f648c70(char *param_1,int param_2,short *param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  short sVar31;
  short sVar32;
  short sVar33;
  short sVar34;
  short sVar35;
  short sVar36;
  short sVar37;
  short sVar38;
  short sVar39;
  short sVar40;
  short sVar41;
  short sVar42;
  short sVar43;
  short sVar44;
  short sVar45;
  short sVar46;
  short sVar47;
  short sVar48;
  short sVar49;
  short sVar50;
  short sVar51;
  short sVar52;
  short sVar53;
  short sVar54;
  short sVar55;
  short sVar56;
  short sVar57;
  short sVar58;
  short sVar59;
  short sVar60;
  short sVar61;
  longlong lVar62;
  uint6 uVar63;
  uint6 uVar64;
  int iVar65;
  int iVar72;
  int iVar73;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  int iVar74;
  int iVar75;
  int iVar76;
  int iVar93;
  undefined1 auVar77 [12];
  int iVar90;
  undefined1 auVar78 [16];
  int iVar91;
  int iVar94;
  int iVar96;
  undefined1 auVar81 [16];
  int iVar92;
  int iVar95;
  int iVar97;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar98 [12];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar103 [16];
  int iVar104;
  int iVar110;
  int iVar111;
  undefined1 auVar105 [16];
  int iVar112;
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  short sVar113;
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined2 uVar119;
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  int iVar120;
  int iVar131;
  int iVar132;
  undefined1 auVar121 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  int iVar133;
  int iVar134;
  int iVar135;
  undefined1 auVar130 [16];
  int iVar136;
  int iVar140;
  int iVar141;
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  int iVar142;
  int iVar143;
  int iVar149;
  short sVar150;
  int iVar152;
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  int iVar153;
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  short sVar151;
  undefined1 auVar148 [16];
  int iVar154;
  int iVar157;
  int iVar158;
  undefined1 auVar155 [16];
  int iVar159;
  undefined1 auVar156 [16];
  int iVar160;
  int iVar166;
  int iVar167;
  undefined1 auVar161 [16];
  undefined1 auVar165 [16];
  int iVar168;
  int iVar169;
  int iVar173;
  int iVar174;
  undefined1 auVar170 [16];
  int iVar175;
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  int iVar176;
  int iVar180;
  int iVar181;
  undefined1 auVar177 [16];
  int iVar184;
  undefined1 auVar178 [16];
  int iVar182;
  int iVar183;
  int iVar185;
  int iVar186;
  undefined1 auVar179 [16];
  int iVar187;
  int iVar193;
  int iVar194;
  undefined1 auVar188 [16];
  int iVar195;
  undefined1 auVar189 [16];
  int iVar196;
  undefined1 auVar197 [12];
  int iVar203;
  undefined1 auVar198 [16];
  undefined1 auVar199 [16];
  undefined1 auVar200 [16];
  int iVar204;
  int iVar205;
  undefined1 auVar202 [16];
  int iVar206;
  int iVar212;
  undefined1 auVar207 [12];
  int iVar213;
  int iVar214;
  undefined1 auVar209 [16];
  undefined1 auVar210 [16];
  undefined1 auVar211 [16];
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  int local_108;
  int iStack_104;
  int iStack_100;
  int iStack_fc;
  int local_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int local_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar86 [16];
  undefined1 auVar102 [16];
  undefined1 auVar122 [16];
  undefined1 auVar127 [16];
  undefined1 auVar123 [16];
  undefined1 auVar128 [16];
  undefined1 auVar124 [16];
  undefined1 auVar129 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar190 [16];
  undefined1 auVar191 [16];
  undefined1 auVar192 [16];
  undefined1 auVar201 [16];
  undefined1 auVar208 [16];
  
  auVar105 = *(undefined1 (*) [16])(param_3 + 0x28);
  auVar67 = *(undefined1 (*) [16])(param_3 + 0x10);
  auVar124._0_12_ = auVar67._0_12_;
  auVar124._12_2_ = auVar67._6_2_;
  auVar124._14_2_ = param_3[0x33];
  auVar123._12_4_ = auVar124._12_4_;
  auVar123._0_10_ = auVar67._0_10_;
  auVar123._10_2_ = param_3[0x32];
  auVar122._10_6_ = auVar123._10_6_;
  auVar122._0_8_ = auVar67._0_8_;
  auVar122._8_2_ = auVar67._4_2_;
  auVar121._8_8_ = auVar122._8_8_;
  auVar121._6_2_ = param_3[0x31];
  auVar121._4_2_ = auVar67._2_2_;
  auVar121._0_2_ = auVar67._0_2_;
  auVar121._2_2_ = param_3[0x30];
  auVar137._2_2_ = param_3[0x34];
  auVar137._0_2_ = auVar67._8_2_;
  auVar137._4_2_ = auVar67._10_2_;
  auVar137._6_2_ = param_3[0x35];
  auVar137._8_2_ = auVar67._12_2_;
  auVar137._10_2_ = param_3[0x36];
  auVar137._12_2_ = auVar67._14_2_;
  auVar137._14_2_ = param_3[0x37];
  auVar67 = *(undefined1 (*) [16])(param_3 + 0x38);
  auVar66 = pmaddwd(auVar137,___xmm_d6301151d6301151d6301151d6301151);
  auVar138 = pmaddwd(auVar137,___xmm_115129cf115129cf115129cf115129cf);
  sVar150 = auVar67._6_2_ + param_3[0xb];
  auVar125 = pmaddwd(auVar121,___xmm_115129cf115129cf115129cf115129cf);
  auVar198 = pmaddwd(auVar121,___xmm_d6301151d6301151d6301151d6301151);
  auVar164._0_12_ = auVar67._0_12_;
  auVar164._12_2_ = auVar67._6_2_;
  auVar164._14_2_ = param_3[0x1b];
  auVar163._12_4_ = auVar164._12_4_;
  auVar163._0_10_ = auVar67._0_10_;
  auVar163._10_2_ = param_3[0x1a];
  auVar162._10_6_ = auVar163._10_6_;
  auVar162._0_8_ = auVar67._0_8_;
  auVar162._8_2_ = auVar67._4_2_;
  auVar161._8_8_ = auVar162._8_8_;
  auVar161._6_2_ = param_3[0x19];
  auVar161._4_2_ = auVar67._2_2_;
  auVar161._2_2_ = param_3[0x18];
  auVar161._0_2_ = auVar67._0_2_;
  auVar170._2_2_ = param_3[0x1c];
  auVar170._0_2_ = auVar67._8_2_;
  auVar170._4_2_ = auVar67._10_2_;
  auVar170._6_2_ = param_3[0x1d];
  auVar170._8_2_ = auVar67._12_2_;
  auVar170._10_2_ = param_3[0x1e];
  auVar170._12_2_ = auVar67._14_2_;
  auVar170._14_2_ = param_3[0x1f];
  auVar188 = pmaddwd(auVar161,___xmm_c13bcac9c13bcac9c13bcac9c13bcac9);
  auVar177 = pmaddwd(auVar170,___xmm_c13bcac9c13bcac9c13bcac9c13bcac9);
  auVar165 = pmaddwd(auVar161,___xmm_238fc13b238fc13b238fc13b238fc13b);
  auVar98 = ZEXT812(0);
  auVar79._12_2_ = 0;
  auVar79._0_12_ = auVar98;
  auVar79._14_2_ = param_3[0x23] + param_3[3];
  auVar78._12_4_ = auVar79._12_4_;
  auVar78._0_10_ = auVar98._0_10_;
  auVar78._10_2_ = param_3[0x22] + param_3[2];
  lVar62 = (ulonglong)auVar78._10_6_ << 0x10;
  auVar81._2_8_ = lVar62;
  auVar81._0_2_ = param_3[0x21] + param_3[1];
  auVar81._10_6_ = 0;
  iVar74 = (int)((uint)(ushort)(param_3[0x20] + *param_3) << 0x10) >> 3;
  iVar90 = SUB164(auVar81 << 0x30,4) >> 3;
  iVar93 = (int)lVar62 >> 3;
  uVar63 = CONCAT24(param_3[0x25] + param_3[5],(uint)(ushort)(param_3[0x24] + param_3[4]));
  auVar77._0_10_ = (unkuint10)uVar63 << 0x10;
  auVar77._10_2_ = param_3[0x26] + param_3[6];
  auVar80._12_2_ = 0;
  auVar80._0_12_ = auVar77;
  auVar80._14_2_ = param_3[0x27] + param_3[7];
  auVar145._12_2_ = 0;
  auVar145._0_12_ = auVar98;
  auVar145._14_2_ = param_3[3] - param_3[0x23];
  auVar107._12_4_ = auVar145._12_4_;
  auVar107._10_2_ = param_3[2] - param_3[0x22];
  auVar107._0_10_ = auVar78._0_10_;
  lVar62 = (ulonglong)auVar107._10_6_ << 0x10;
  auVar99._2_8_ = lVar62;
  auVar99._0_2_ = param_3[1] - param_3[0x21];
  auVar99._10_6_ = 0;
  iVar65 = (int)((uint)(ushort)(*param_3 - param_3[0x20]) << 0x10) >> 3;
  iVar72 = SUB164(auVar99 << 0x30,4) >> 3;
  iVar73 = (int)lVar62 >> 3;
  iVar75 = (int)auVar77._0_10_ >> 3;
  iVar91 = (int)((int6)uVar63 >> 0x13);
  iVar94 = auVar77._8_4_ >> 3;
  iVar96 = auVar80._12_4_ >> 3;
  uVar63 = CONCAT24(param_3[5] - param_3[0x25],(uint)(ushort)(param_3[4] - param_3[0x24]));
  auVar207._0_10_ = (unkuint10)uVar63 << 0x10;
  auVar207._10_2_ = param_3[6] - param_3[0x26];
  auVar208._12_2_ = 0;
  auVar208._0_12_ = auVar207;
  auVar208._14_2_ = param_3[7] - param_3[0x27];
  auVar155._8_8_ =
       (undefined8)
       (CONCAT64(CONCAT42(CONCAT22(auVar105._6_2_ + param_3[0x1b],sVar150),
                          auVar105._4_2_ + param_3[0x1a]),
                 CONCAT22(auVar67._4_2_ + param_3[10],sVar150)) >> 0x10);
  auVar155._6_2_ = auVar105._2_2_ + param_3[0x19];
  auVar155._4_2_ = auVar67._2_2_ + param_3[9];
  auVar155._2_2_ = auVar105._0_2_ + param_3[0x18];
  auVar155._0_2_ = auVar67._0_2_ + param_3[8];
  auVar144._2_2_ = auVar105._8_2_ + param_3[0x1c];
  auVar144._0_2_ = auVar67._8_2_ + param_3[0xc];
  auVar144._4_2_ = auVar67._10_2_ + param_3[0xd];
  auVar144._6_2_ = auVar105._10_2_ + param_3[0x1d];
  auVar144._8_2_ = auVar67._12_2_ + param_3[0xe];
  auVar144._10_2_ = auVar105._12_2_ + param_3[0x1e];
  auVar144._12_2_ = auVar67._14_2_ + param_3[0xf];
  auVar144._14_2_ = auVar105._14_2_ + param_3[0x1f];
  auVar99 = pmaddwd(auVar144,___xmm_25a108d425a108d425a108d425a108d4);
  auVar67 = pmaddwd(auVar155,___xmm_d39e25a1d39e25a1d39e25a1d39e25a1);
  auVar81 = pmaddwd(auVar155,___xmm_25a108d425a108d425a108d425a108d4);
  auVar145 = pmaddwd(auVar144,___xmm_d39e25a1d39e25a1d39e25a1d39e25a1);
  auVar129._0_12_ = auVar105._0_12_;
  auVar129._12_2_ = auVar105._6_2_;
  auVar129._14_2_ = param_3[0xb];
  auVar128._12_4_ = auVar129._12_4_;
  auVar128._0_10_ = auVar105._0_10_;
  auVar128._10_2_ = param_3[10];
  auVar127._10_6_ = auVar128._10_6_;
  auVar127._0_8_ = auVar105._0_8_;
  auVar127._8_2_ = auVar105._4_2_;
  auVar126._8_8_ = auVar127._8_8_;
  auVar126._6_2_ = param_3[9];
  auVar126._4_2_ = auVar105._2_2_;
  auVar126._2_2_ = param_3[8];
  auVar126._0_2_ = auVar105._0_2_;
  auVar139._2_2_ = param_3[0xc];
  auVar139._0_2_ = auVar105._8_2_;
  auVar139._4_2_ = auVar105._10_2_;
  auVar139._6_2_ = param_3[0xd];
  auVar139._8_2_ = auVar105._12_2_;
  auVar139._10_2_ = param_3[0xe];
  auVar139._12_2_ = auVar105._14_2_;
  auVar139._14_2_ = param_3[0xf];
  auVar155 = pmaddwd(auVar126,___xmm_f3843537f3843537f3843537f3843537);
  auVar105 = pmaddwd(auVar139,___xmm_f3843537f3843537f3843537f3843537);
  iVar187 = auVar188._0_4_ + auVar81._0_4_;
  iVar193 = auVar188._4_4_ + auVar81._4_4_;
  iVar194 = auVar188._8_4_ + auVar81._8_4_;
  iVar195 = auVar188._12_4_ + auVar81._12_4_;
  iVar176 = auVar177._0_4_ + auVar99._0_4_;
  iVar180 = auVar177._4_4_ + auVar99._4_4_;
  iVar181 = auVar177._8_4_ + auVar99._8_4_;
  iVar184 = auVar177._12_4_ + auVar99._12_4_;
  iVar206 = (int)auVar207._0_10_ >> 3;
  iVar212 = (int)((int6)uVar63 >> 0x13);
  iVar213 = auVar207._8_4_ >> 3;
  iVar214 = auVar208._12_4_ >> 3;
  iVar160 = auVar165._0_4_ + auVar67._0_4_;
  iVar166 = auVar165._4_4_ + auVar67._4_4_;
  iVar167 = auVar165._8_4_ + auVar67._8_4_;
  iVar168 = auVar165._12_4_ + auVar67._12_4_;
  iVar154 = auVar155._0_4_ + auVar67._0_4_;
  iVar157 = auVar155._4_4_ + auVar67._4_4_;
  iVar158 = auVar155._8_4_ + auVar67._8_4_;
  iVar159 = auVar155._12_4_ + auVar67._12_4_;
  iVar104 = auVar105._0_4_ + auVar145._0_4_;
  iVar110 = auVar105._4_4_ + auVar145._4_4_;
  iVar111 = auVar105._8_4_ + auVar145._8_4_;
  iVar112 = auVar105._12_4_ + auVar145._12_4_;
  auVar105 = pmaddwd(auVar126,___xmm_238ff384238ff384238ff384238ff384);
  auVar67 = pmaddwd(auVar139,___xmm_238ff384238ff384238ff384238ff384);
  auVar155 = pmaddwd(auVar170,___xmm_238fc13b238fc13b238fc13b238fc13b);
  iVar120 = auVar105._0_4_ + auVar81._0_4_;
  iVar131 = auVar105._4_4_ + auVar81._4_4_;
  iVar132 = auVar105._8_4_ + auVar81._8_4_;
  iVar134 = auVar105._12_4_ + auVar81._12_4_;
  local_e8 = auVar138._0_4_;
  iStack_e4 = auVar138._4_4_;
  iStack_e0 = auVar138._8_4_;
  iStack_dc = auVar138._12_4_;
  iVar76 = iVar75 + local_e8 + ___xmm_00000400000004000000040000000400;
  iVar92 = iVar91 + iStack_e4 + _UNK_151c6bc34;
  iVar95 = iVar94 + iStack_e0 + _UNK_151c6bc38;
  iVar97 = iVar96 + iStack_dc + _UNK_151c6bc3c;
  iVar136 = auVar67._0_4_ + auVar99._0_4_;
  iVar140 = auVar67._4_4_ + auVar99._4_4_;
  iVar141 = auVar67._8_4_ + auVar99._8_4_;
  iVar142 = auVar67._12_4_ + auVar99._12_4_;
  iVar169 = auVar155._0_4_ + auVar145._0_4_;
  iVar173 = auVar155._4_4_ + auVar145._4_4_;
  iVar174 = auVar155._8_4_ + auVar145._8_4_;
  iVar175 = auVar155._12_4_ + auVar145._12_4_;
  local_108 = auVar125._0_4_;
  iStack_104 = auVar125._4_4_;
  iStack_100 = auVar125._8_4_;
  iStack_fc = auVar125._12_4_;
  auVar82._0_4_ = iVar76 - iVar136 >> 0xb;
  auVar82._4_4_ = iVar92 - iVar140 >> 0xb;
  auVar82._8_4_ = iVar95 - iVar141 >> 0xb;
  auVar82._12_4_ = iVar97 - iVar142 >> 0xb;
  iVar143 = iVar74 + local_108 + ___xmm_00000400000004000000040000000400;
  iVar149 = iVar90 + iStack_104 + _UNK_151c6bc34;
  iVar152 = iVar93 + iStack_100 + _UNK_151c6bc38;
  iVar153 = (auVar78._12_4_ >> 3) + iStack_fc + _UNK_151c6bc3c;
  auVar138._0_4_ = iVar76 + iVar136 >> 0xb;
  auVar138._4_4_ = iVar92 + iVar140 >> 0xb;
  auVar138._8_4_ = iVar95 + iVar141 >> 0xb;
  auVar138._12_4_ = iVar97 + iVar142 >> 0xb;
  auVar100._0_4_ = iVar143 + iVar120 >> 0xb;
  auVar100._4_4_ = iVar149 + iVar131 >> 0xb;
  auVar100._8_4_ = iVar152 + iVar132 >> 0xb;
  auVar100._12_4_ = iVar153 + iVar134 >> 0xb;
  local_b8 = auVar198._0_4_;
  iStack_b4 = auVar198._4_4_;
  iStack_b0 = auVar198._8_4_;
  iStack_ac = auVar198._12_4_;
  auVar105 = packssdw(auVar100,auVar138);
  iVar95 = iVar65 + local_b8 + ___xmm_00000400000004000000040000000400;
  iVar97 = iVar72 + iStack_b4 + _UNK_151c6bc34;
  iVar136 = iVar73 + iStack_b0 + _UNK_151c6bc38;
  iVar140 = (auVar107._12_4_ >> 3) + iStack_ac + _UNK_151c6bc3c;
  iVar141 = (iVar65 - local_b8) + ___xmm_00000400000004000000040000000400;
  iVar142 = (iVar72 - iStack_b4) + _UNK_151c6bc34;
  iVar133 = (iVar73 - iStack_b0) + _UNK_151c6bc38;
  iVar135 = ((auVar107._12_4_ >> 3) - iStack_ac) + _UNK_151c6bc3c;
  iVar76 = (iVar74 - local_108) + ___xmm_00000400000004000000040000000400;
  iVar90 = (iVar90 - iStack_104) + _UNK_151c6bc34;
  iVar92 = (iVar93 - iStack_100) + _UNK_151c6bc38;
  iVar93 = ((auVar78._12_4_ >> 3) - iStack_fc) + _UNK_151c6bc3c;
  auVar146._0_4_ = iVar143 - iVar120 >> 0xb;
  auVar146._4_4_ = iVar149 - iVar131 >> 0xb;
  auVar146._8_4_ = iVar152 - iVar132 >> 0xb;
  auVar146._12_4_ = iVar153 - iVar134 >> 0xb;
  auVar147 = packssdw(auVar146,auVar82);
  local_c8 = auVar66._0_4_;
  iStack_c4 = auVar66._4_4_;
  iStack_c0 = auVar66._8_4_;
  iStack_bc = auVar66._12_4_;
  iVar65 = iVar206 + local_c8 + ___xmm_00000400000004000000040000000400;
  iVar72 = iVar212 + iStack_c4 + _UNK_151c6bc34;
  iVar73 = iVar213 + iStack_c0 + _UNK_151c6bc38;
  iVar74 = iVar214 + iStack_bc + _UNK_151c6bc3c;
  auVar199._0_4_ = iVar95 + iVar160 >> 0xb;
  auVar199._4_4_ = iVar97 + iVar166 >> 0xb;
  auVar199._8_4_ = iVar136 + iVar167 >> 0xb;
  auVar199._12_4_ = iVar140 + iVar168 >> 0xb;
  auVar117._0_4_ = iVar95 - iVar160 >> 0xb;
  auVar117._4_4_ = iVar97 - iVar166 >> 0xb;
  auVar117._8_4_ = iVar136 - iVar167 >> 0xb;
  auVar117._12_4_ = iVar140 - iVar168 >> 0xb;
  auVar165._0_4_ = iVar65 + iVar169 >> 0xb;
  auVar165._4_4_ = iVar72 + iVar173 >> 0xb;
  auVar165._8_4_ = iVar73 + iVar174 >> 0xb;
  auVar165._12_4_ = iVar74 + iVar175 >> 0xb;
  iVar95 = (iVar206 - local_c8) + ___xmm_00000400000004000000040000000400;
  iVar97 = (iVar212 - iStack_c4) + _UNK_151c6bc34;
  iVar136 = (iVar213 - iStack_c0) + _UNK_151c6bc38;
  iVar140 = (iVar214 - iStack_bc) + _UNK_151c6bc3c;
  auVar200 = packssdw(auVar199,auVar165);
  auVar83._0_4_ = iVar65 - iVar169 >> 0xb;
  auVar83._4_4_ = iVar72 - iVar173 >> 0xb;
  auVar83._8_4_ = iVar73 - iVar174 >> 0xb;
  auVar83._12_4_ = iVar74 - iVar175 >> 0xb;
  auVar155 = packssdw(auVar117,auVar83);
  iVar65 = (iVar75 - local_e8) + ___xmm_00000400000004000000040000000400;
  iVar72 = (iVar91 - iStack_e4) + _UNK_151c6bc34;
  iVar73 = (iVar94 - iStack_e0) + _UNK_151c6bc38;
  iVar74 = (iVar96 - iStack_dc) + _UNK_151c6bc3c;
  auVar177._0_4_ = iVar95 + iVar104 >> 0xb;
  auVar177._4_4_ = iVar97 + iVar110 >> 0xb;
  auVar177._8_4_ = iVar136 + iVar111 >> 0xb;
  auVar177._12_4_ = iVar140 + iVar112 >> 0xb;
  auVar114._0_4_ = iVar141 + iVar154 >> 0xb;
  auVar114._4_4_ = iVar142 + iVar157 >> 0xb;
  auVar114._8_4_ = iVar133 + iVar158 >> 0xb;
  auVar114._12_4_ = iVar135 + iVar159 >> 0xb;
  auVar145 = packssdw(auVar114,auVar177);
  auVar106._0_4_ = iVar76 + iVar187 >> 0xb;
  auVar106._4_4_ = iVar90 + iVar193 >> 0xb;
  auVar106._8_4_ = iVar92 + iVar194 >> 0xb;
  auVar106._12_4_ = iVar93 + iVar195 >> 0xb;
  auVar130._0_4_ = iVar141 - iVar154 >> 0xb;
  auVar130._4_4_ = iVar142 - iVar157 >> 0xb;
  auVar130._8_4_ = iVar133 - iVar158 >> 0xb;
  auVar130._12_4_ = iVar135 - iVar159 >> 0xb;
  auVar188._0_4_ = iVar65 + iVar176 >> 0xb;
  auVar188._4_4_ = iVar72 + iVar180 >> 0xb;
  auVar188._8_4_ = iVar73 + iVar181 >> 0xb;
  auVar188._12_4_ = iVar74 + iVar184 >> 0xb;
  auVar107 = packssdw(auVar106,auVar188);
  local_128._0_2_ = auVar105._0_2_;
  local_128._2_2_ = auVar105._2_2_;
  uStack_124._0_2_ = auVar105._4_2_;
  uStack_124._2_2_ = auVar105._6_2_;
  uStack_120._0_2_ = auVar105._8_2_;
  uStack_120._2_2_ = auVar105._10_2_;
  uStack_11c._0_2_ = auVar105._12_2_;
  uStack_11c._2_2_ = auVar105._14_2_;
  auVar209._0_4_ = iVar95 - iVar104 >> 0xb;
  auVar209._4_4_ = iVar97 - iVar110 >> 0xb;
  auVar209._8_4_ = iVar136 - iVar111 >> 0xb;
  auVar209._12_4_ = iVar140 - iVar112 >> 0xb;
  auVar101._0_4_ = iVar76 - iVar187 >> 0xb;
  auVar101._4_4_ = iVar90 - iVar193 >> 0xb;
  auVar101._8_4_ = iVar92 - iVar194 >> 0xb;
  auVar101._12_4_ = iVar93 - iVar195 >> 0xb;
  auVar84._0_4_ = iVar65 - iVar176 >> 0xb;
  auVar84._4_4_ = iVar72 - iVar180 >> 0xb;
  auVar84._8_4_ = iVar73 - iVar181 >> 0xb;
  auVar84._12_4_ = iVar74 - iVar184 >> 0xb;
  auVar138 = packssdw(auVar130,auVar209);
  auVar81 = packssdw(auVar101,auVar84);
  uVar119 = auVar155._4_2_;
  sVar150 = auVar107._10_2_;
  sVar113 = auVar107._14_2_;
  auVar125._2_8_ =
       (longlong)
       (CONCAT64(CONCAT42(CONCAT22(auVar147._4_2_,uVar119),auVar138._4_2_),
                 CONCAT22(auVar81._4_2_,uVar119)) >> 0x10);
  auVar125._0_2_ = auVar107._4_2_;
  auVar125._10_6_ = 0;
  auVar66._12_4_ = 0;
  auVar66._0_12_ = SUB1612(auVar125 << 0x30,4);
  auVar66 = auVar66 << 0x20;
  auVar192._0_12_ = auVar66._0_12_;
  auVar192._12_2_ = auVar107._4_2_;
  auVar192._14_2_ = auVar107._12_2_;
  auVar191._12_4_ = auVar192._12_4_;
  auVar191._0_10_ = auVar66._0_10_;
  auVar191._10_2_ = auVar145._12_2_;
  auVar190._10_6_ = auVar191._10_6_;
  auVar190._0_8_ = auVar66._0_8_;
  auVar190._8_2_ = auVar145._4_2_;
  auVar189._8_8_ = auVar190._8_8_;
  auVar189._6_2_ = auVar200._12_2_;
  auVar189._4_2_ = auVar200._4_2_;
  auVar189._2_2_ = (undefined2)uStack_11c;
  auVar189._0_2_ = (undefined2)uStack_124;
  auVar210._2_2_ = auVar81._12_2_;
  auVar210._0_2_ = auVar81._4_2_;
  auVar210._4_2_ = auVar138._4_2_;
  auVar210._6_2_ = auVar138._12_2_;
  auVar210._8_2_ = uVar119;
  auVar210._10_2_ = auVar155._12_2_;
  auVar210._12_2_ = auVar147._4_2_;
  auVar210._14_2_ = auVar147._12_2_;
  auVar165 = pmaddwd(auVar189,___xmm_d6301151d6301151d6301151d6301151);
  auVar188 = pmaddwd(auVar189,___xmm_115129cf115129cf115129cf115129cf);
  auVar77 = ZEXT812(0);
  auVar86._12_2_ = 0;
  auVar86._0_12_ = auVar77;
  auVar86._14_2_ = auVar107._8_2_ + auVar107._0_2_;
  auVar85._12_4_ = auVar86._12_4_;
  auVar85._0_10_ = auVar77._0_10_;
  auVar85._10_2_ = auVar145._8_2_ + auVar145._0_2_;
  lVar62 = (ulonglong)auVar85._10_6_ << 0x10;
  auVar105._2_8_ = lVar62;
  auVar105._0_2_ = auVar200._8_2_ + auVar200._0_2_;
  auVar105._10_6_ = 0;
  uVar63 = CONCAT24(auVar138._8_2_ + auVar138._0_2_,(uint)(ushort)(auVar81._8_2_ + auVar81._0_2_));
  auVar197._0_10_ = (unkuint10)uVar63 << 0x10;
  auVar197._10_2_ = auVar155._8_2_ + auVar155._0_2_;
  auVar201._12_2_ = 0;
  auVar201._0_12_ = auVar197;
  auVar201._14_2_ = auVar147._8_2_ + auVar147._0_2_;
  iVar91 = (int)((uint)(ushort)((short)uStack_120 + (short)local_128) << 0x10) >> 3;
  iVar92 = SUB164(auVar105 << 0x30,4) >> 3;
  iVar93 = (int)lVar62 >> 3;
  auVar211._12_2_ = 0;
  auVar211._0_12_ = auVar77;
  auVar211._14_2_ = auVar107._0_2_ - auVar107._8_2_;
  auVar198._12_4_ = auVar211._12_4_;
  auVar198._10_2_ = auVar145._0_2_ - auVar145._8_2_;
  auVar198._0_10_ = auVar85._0_10_;
  lVar62 = (ulonglong)auVar198._10_6_ << 0x10;
  auVar67._2_8_ = lVar62;
  auVar67._0_2_ = auVar200._0_2_ - auVar200._8_2_;
  auVar67._10_6_ = 0;
  uVar64 = CONCAT24(auVar138._0_2_ - auVar138._8_2_,(uint)(ushort)(auVar81._0_2_ - auVar81._8_2_));
  auVar98._0_10_ = (unkuint10)uVar64 << 0x10;
  auVar98._10_2_ = auVar155._0_2_ - auVar155._8_2_;
  auVar102._12_2_ = 0;
  auVar102._0_12_ = auVar98;
  auVar102._14_2_ = auVar147._0_2_ - auVar147._8_2_;
  iVar65 = (int)((uint)(ushort)((short)local_128 - (short)uStack_120) << 0x10) >> 3;
  iVar73 = SUB164(auVar67 << 0x30,4) >> 3;
  iVar75 = (int)lVar62 >> 3;
  iVar94 = (int)auVar98._0_10_ >> 3;
  iVar96 = (int)((int6)uVar64 >> 0x13);
  iVar104 = auVar98._8_4_ >> 3;
  iVar111 = auVar102._12_4_ >> 3;
  sVar151 = sVar113 + auVar107._2_2_;
  auVar177 = pmaddwd(auVar210,___xmm_d6301151d6301151d6301151d6301151);
  auVar211 = pmaddwd(auVar210,___xmm_115129cf115129cf115129cf115129cf);
  auVar68._8_8_ =
       (undefined8)
       (CONCAT64(CONCAT42(CONCAT22(sVar150 + auVar107._6_2_,sVar151),
                          auVar145._10_2_ + auVar145._6_2_),
                 CONCAT22(auVar145._14_2_ + auVar145._2_2_,sVar151)) >> 0x10);
  auVar68._6_2_ = auVar200._10_2_ + auVar200._6_2_;
  auVar68._4_2_ = auVar200._14_2_ + auVar200._2_2_;
  auVar68._2_2_ = uStack_120._2_2_ + uStack_124._2_2_;
  auVar68._0_2_ = uStack_11c._2_2_ + local_128._2_2_;
  auVar148._2_2_ = auVar81._10_2_ + auVar81._6_2_;
  auVar148._0_2_ = auVar81._14_2_ + auVar81._2_2_;
  auVar148._4_2_ = auVar138._14_2_ + auVar138._2_2_;
  auVar148._6_2_ = auVar138._10_2_ + auVar138._6_2_;
  auVar148._8_2_ = auVar155._14_2_ + auVar155._2_2_;
  auVar148._10_2_ = auVar155._10_2_ + auVar155._6_2_;
  auVar148._12_2_ = auVar147._14_2_ + auVar147._2_2_;
  auVar148._14_2_ = auVar147._10_2_ + auVar147._6_2_;
  auVar67 = pmaddwd(auVar68,___xmm_25a108d425a108d425a108d425a108d4);
  auVar99 = pmaddwd(auVar148,___xmm_25a108d425a108d425a108d425a108d4);
  iVar196 = (int)auVar197._0_10_ >> 3;
  iVar203 = (int)((int6)uVar63 >> 0x13);
  iVar204 = auVar197._8_4_ >> 3;
  iVar205 = auVar201._12_4_ >> 3;
  auVar108._8_8_ =
       (undefined8)
       (CONCAT64(CONCAT42(CONCAT22(auVar107._6_2_,sVar113),auVar145._6_2_),
                 CONCAT22(auVar145._14_2_,sVar113)) >> 0x10);
  auVar108._6_2_ = auVar200._6_2_;
  auVar108._4_2_ = auVar200._14_2_;
  auVar108._2_2_ = uStack_124._2_2_;
  auVar108._0_2_ = uStack_11c._2_2_;
  auVar115._2_2_ = auVar81._6_2_;
  auVar115._0_2_ = auVar81._14_2_;
  auVar115._4_2_ = auVar138._14_2_;
  auVar115._6_2_ = auVar138._6_2_;
  auVar115._8_2_ = auVar155._14_2_;
  auVar115._10_2_ = auVar155._6_2_;
  auVar115._12_2_ = auVar147._14_2_;
  auVar115._14_2_ = auVar147._6_2_;
  auVar171._8_8_ =
       (undefined8)
       (CONCAT64(CONCAT42(CONCAT22(auVar107._2_2_,sVar150),auVar145._2_2_),
                 CONCAT22(auVar145._10_2_,sVar150)) >> 0x10);
  auVar171._6_2_ = auVar200._2_2_;
  auVar171._4_2_ = auVar200._10_2_;
  auVar171._2_2_ = local_128._2_2_;
  auVar171._0_2_ = uStack_120._2_2_;
  auVar178._2_2_ = auVar81._2_2_;
  auVar178._0_2_ = auVar81._10_2_;
  auVar178._4_2_ = auVar138._10_2_;
  auVar178._6_2_ = auVar138._2_2_;
  auVar178._8_2_ = auVar155._10_2_;
  auVar178._10_2_ = auVar155._2_2_;
  auVar178._12_2_ = auVar147._10_2_;
  auVar178._14_2_ = auVar147._2_2_;
  auVar105 = pmaddwd(auVar68,___xmm_d39e25a1d39e25a1d39e25a1d39e25a1);
  auVar155 = pmaddwd(auVar148,___xmm_d39e25a1d39e25a1d39e25a1d39e25a1);
  auVar138 = pmaddwd(auVar178,___xmm_238ff384238ff384238ff384238ff384);
  auVar81 = pmaddwd(auVar108,___xmm_238fc13b238fc13b238fc13b238fc13b);
  auVar66 = pmaddwd(auVar115,___xmm_238fc13b238fc13b238fc13b238fc13b);
  auVar125 = pmaddwd(auVar115,___xmm_c13bcac9c13bcac9c13bcac9c13bcac9);
  auVar107 = pmaddwd(auVar108,___xmm_c13bcac9c13bcac9c13bcac9c13bcac9);
  auVar145 = pmaddwd(auVar178,___xmm_f3843537f3843537f3843537f3843537);
  iVar206 = auVar138._0_4_ + auVar99._0_4_;
  iVar213 = auVar138._4_4_ + auVar99._4_4_;
  iVar182 = auVar138._8_4_ + auVar99._8_4_;
  iVar185 = auVar138._12_4_ + auVar99._12_4_;
  iVar136 = auVar81._0_4_ + auVar105._0_4_;
  iVar140 = auVar81._4_4_ + auVar105._4_4_;
  iVar120 = auVar81._8_4_ + auVar105._8_4_;
  iVar141 = auVar81._12_4_ + auVar105._12_4_;
  local_128 = auVar155._0_4_;
  uStack_124 = auVar155._4_4_;
  uStack_120 = auVar155._8_4_;
  uStack_11c = auVar155._12_4_;
  iVar131 = auVar66._0_4_ + local_128;
  iVar142 = auVar66._4_4_ + uStack_124;
  iVar132 = auVar66._8_4_ + uStack_120;
  iVar134 = auVar66._12_4_ + uStack_11c;
  auVar66 = pmaddwd(auVar171,___xmm_238ff384238ff384238ff384238ff384);
  iVar143 = auVar125._0_4_ + auVar99._0_4_;
  iVar149 = auVar125._4_4_ + auVar99._4_4_;
  iVar152 = auVar125._8_4_ + auVar99._8_4_;
  iVar153 = auVar125._12_4_ + auVar99._12_4_;
  iVar154 = auVar107._0_4_ + auVar67._0_4_;
  iVar157 = auVar107._4_4_ + auVar67._4_4_;
  iVar158 = auVar107._8_4_ + auVar67._8_4_;
  iVar159 = auVar107._12_4_ + auVar67._12_4_;
  auVar81 = pmaddwd(auVar171,___xmm_f3843537f3843537f3843537f3843537);
  local_128 = auVar145._0_4_ + local_128;
  uStack_124 = auVar145._4_4_ + uStack_124;
  uStack_120 = auVar145._8_4_ + uStack_120;
  uStack_11c = auVar145._12_4_ + uStack_11c;
  iVar176 = auVar66._0_4_ + auVar67._0_4_;
  iVar181 = auVar66._4_4_ + auVar67._4_4_;
  iVar187 = auVar66._8_4_ + auVar67._8_4_;
  iVar194 = auVar66._12_4_ + auVar67._12_4_;
  iVar160 = auVar81._0_4_ + auVar105._0_4_;
  iVar166 = auVar81._4_4_ + auVar105._4_4_;
  iVar167 = auVar81._8_4_ + auVar105._8_4_;
  iVar168 = auVar81._12_4_ + auVar105._12_4_;
  iVar95 = (iVar65 - auVar165._0_4_) + ___xmm_02020000020200000202000002020000;
  iVar97 = (iVar73 - auVar165._4_4_) + _UNK_1534790a4;
  iVar110 = (iVar75 - auVar165._8_4_) + _UNK_1534790a8;
  iVar112 = ((auVar198._12_4_ >> 3) - auVar165._12_4_) + _UNK_1534790ac;
  iVar72 = (iVar91 - auVar188._0_4_) + ___xmm_02020000020200000202000002020000;
  iVar74 = (iVar92 - auVar188._4_4_) + _UNK_1534790a4;
  iVar76 = (iVar93 - auVar188._8_4_) + _UNK_1534790a8;
  iVar90 = ((auVar85._12_4_ >> 3) - auVar188._12_4_) + _UNK_1534790ac;
  iVar212 = iVar65 + auVar165._0_4_ + ___xmm_02020000020200000202000002020000;
  iVar214 = iVar73 + auVar165._4_4_ + _UNK_1534790a4;
  iVar183 = iVar75 + auVar165._8_4_ + _UNK_1534790a8;
  iVar186 = (auVar198._12_4_ >> 3) + auVar165._12_4_ + _UNK_1534790ac;
  iVar169 = (iVar94 - auVar177._0_4_) + ___xmm_02020000020200000202000002020000;
  iVar173 = (iVar96 - auVar177._4_4_) + _UNK_1534790a4;
  iVar174 = (iVar104 - auVar177._8_4_) + _UNK_1534790a8;
  iVar175 = (iVar111 - auVar177._12_4_) + _UNK_1534790ac;
  iVar180 = iVar91 + auVar188._0_4_ + ___xmm_02020000020200000202000002020000;
  iVar184 = iVar92 + auVar188._4_4_ + _UNK_1534790a4;
  iVar193 = iVar93 + auVar188._8_4_ + _UNK_1534790a8;
  iVar195 = (auVar85._12_4_ >> 3) + auVar188._12_4_ + _UNK_1534790ac;
  auVar103._0_4_ = iVar95 + iVar160 >> 0x12;
  auVar103._4_4_ = iVar97 + iVar166 >> 0x12;
  auVar103._8_4_ = iVar110 + iVar167 >> 0x12;
  auVar103._12_4_ = iVar112 + iVar168 >> 0x12;
  iVar92 = iVar196 + auVar211._0_4_ + ___xmm_02020000020200000202000002020000;
  iVar93 = iVar203 + auVar211._4_4_ + _UNK_1534790a4;
  iVar133 = iVar204 + auVar211._8_4_ + _UNK_1534790a8;
  iVar135 = iVar205 + auVar211._12_4_ + _UNK_1534790ac;
  auVar156._0_4_ = iVar180 + iVar176 >> 0x12;
  auVar156._4_4_ = iVar184 + iVar181 >> 0x12;
  auVar156._8_4_ = iVar193 + iVar187 >> 0x12;
  auVar156._12_4_ = iVar195 + iVar194 >> 0x12;
  auVar147._0_4_ = iVar92 + iVar206 >> 0x12;
  auVar147._4_4_ = iVar93 + iVar213 >> 0x12;
  auVar147._8_4_ = iVar133 + iVar182 >> 0x12;
  auVar147._12_4_ = iVar135 + iVar185 >> 0x12;
  iVar65 = iVar94 + auVar177._0_4_ + ___xmm_02020000020200000202000002020000;
  iVar73 = iVar96 + auVar177._4_4_ + _UNK_1534790a4;
  iVar75 = iVar104 + auVar177._8_4_ + _UNK_1534790a8;
  iVar91 = iVar111 + auVar177._12_4_ + _UNK_1534790ac;
  auVar125 = packssdw(auVar156,auVar147);
  iVar94 = (iVar196 - auVar211._0_4_) + ___xmm_02020000020200000202000002020000;
  iVar96 = (iVar203 - auVar211._4_4_) + _UNK_1534790a4;
  iVar104 = (iVar204 - auVar211._8_4_) + _UNK_1534790a8;
  iVar111 = (iVar205 - auVar211._12_4_) + _UNK_1534790ac;
  auVar200._0_4_ = iVar65 + iVar131 >> 0x12;
  auVar200._4_4_ = iVar73 + iVar142 >> 0x12;
  auVar200._8_4_ = iVar75 + iVar132 >> 0x12;
  auVar200._12_4_ = iVar91 + iVar134 >> 0x12;
  auVar87._0_4_ = iVar212 + iVar136 >> 0x12;
  auVar87._4_4_ = iVar214 + iVar140 >> 0x12;
  auVar87._8_4_ = iVar183 + iVar120 >> 0x12;
  auVar87._12_4_ = iVar186 + iVar141 >> 0x12;
  auVar67 = packssdw(auVar87,auVar200);
  sVar150 = auVar125._0_2_;
  sVar2 = auVar125._2_2_;
  sVar6 = auVar125._4_2_;
  sVar10 = auVar125._6_2_;
  sVar14 = auVar125._8_2_;
  sVar18 = auVar125._10_2_;
  sVar22 = auVar125._12_2_;
  sVar26 = auVar125._14_2_;
  sVar30 = auVar67._0_2_;
  sVar34 = auVar67._2_2_;
  sVar38 = auVar67._4_2_;
  sVar42 = auVar67._6_2_;
  sVar46 = auVar67._8_2_;
  sVar50 = auVar67._10_2_;
  sVar54 = auVar67._12_2_;
  sVar58 = auVar67._14_2_;
  auVar69._0_4_ = iVar169 + local_128 >> 0x12;
  auVar69._4_4_ = iVar173 + uStack_124 >> 0x12;
  auVar69._8_4_ = iVar174 + uStack_120 >> 0x12;
  auVar69._12_4_ = iVar175 + uStack_11c >> 0x12;
  auVar66 = packssdw(auVar103,auVar69);
  auVar88._0_4_ = iVar72 + iVar154 >> 0x12;
  auVar88._4_4_ = iVar74 + iVar157 >> 0x12;
  auVar88._8_4_ = iVar76 + iVar158 >> 0x12;
  auVar88._12_4_ = iVar90 + iVar159 >> 0x12;
  auVar70._0_4_ = iVar94 + iVar143 >> 0x12;
  auVar70._4_4_ = iVar96 + iVar149 >> 0x12;
  auVar70._8_4_ = iVar104 + iVar152 >> 0x12;
  auVar70._12_4_ = iVar111 + iVar153 >> 0x12;
  auVar81 = packssdw(auVar88,auVar70);
  sVar113 = auVar66._0_2_;
  sVar3 = auVar66._2_2_;
  sVar7 = auVar66._4_2_;
  sVar11 = auVar66._6_2_;
  sVar15 = auVar66._8_2_;
  sVar19 = auVar66._10_2_;
  sVar23 = auVar66._12_2_;
  sVar27 = auVar66._14_2_;
  sVar31 = auVar81._0_2_;
  sVar35 = auVar81._2_2_;
  sVar39 = auVar81._4_2_;
  sVar43 = auVar81._6_2_;
  sVar47 = auVar81._8_2_;
  sVar51 = auVar81._10_2_;
  sVar55 = auVar81._12_2_;
  sVar59 = auVar81._14_2_;
  auVar71._0_4_ = iVar95 - iVar160 >> 0x12;
  auVar71._4_4_ = iVar97 - iVar166 >> 0x12;
  auVar71._8_4_ = iVar110 - iVar167 >> 0x12;
  auVar71._12_4_ = iVar112 - iVar168 >> 0x12;
  auVar116._0_4_ = iVar92 - iVar206 >> 0x12;
  auVar116._4_4_ = iVar93 - iVar213 >> 0x12;
  auVar116._8_4_ = iVar133 - iVar182 >> 0x12;
  auVar116._12_4_ = iVar135 - iVar185 >> 0x12;
  auVar89._0_4_ = iVar72 - iVar154 >> 0x12;
  auVar89._4_4_ = iVar74 - iVar157 >> 0x12;
  auVar89._8_4_ = iVar76 - iVar158 >> 0x12;
  auVar89._12_4_ = iVar90 - iVar159 >> 0x12;
  auVar109._0_4_ = iVar65 - iVar131 >> 0x12;
  auVar109._4_4_ = iVar73 - iVar142 >> 0x12;
  auVar109._8_4_ = iVar75 - iVar132 >> 0x12;
  auVar109._12_4_ = iVar91 - iVar134 >> 0x12;
  auVar179._0_4_ = iVar212 - iVar136 >> 0x12;
  auVar179._4_4_ = iVar214 - iVar140 >> 0x12;
  auVar179._8_4_ = iVar183 - iVar120 >> 0x12;
  auVar179._12_4_ = iVar186 - iVar141 >> 0x12;
  auVar145 = packssdw(auVar179,auVar109);
  auVar202._0_4_ = iVar94 - iVar143 >> 0x12;
  auVar202._4_4_ = iVar96 - iVar149 >> 0x12;
  auVar202._8_4_ = iVar104 - iVar152 >> 0x12;
  auVar202._12_4_ = iVar111 - iVar153 >> 0x12;
  auVar99 = packssdw(auVar89,auVar202);
  auVar172._0_4_ = iVar180 - iVar176 >> 0x12;
  auVar172._4_4_ = iVar184 - iVar181 >> 0x12;
  auVar172._8_4_ = iVar193 - iVar187 >> 0x12;
  auVar172._12_4_ = iVar195 - iVar194 >> 0x12;
  auVar107 = packssdw(auVar172,auVar116);
  sVar151 = auVar145._0_2_;
  sVar4 = auVar145._2_2_;
  sVar8 = auVar145._4_2_;
  sVar12 = auVar145._6_2_;
  sVar16 = auVar145._8_2_;
  sVar20 = auVar145._10_2_;
  sVar24 = auVar145._12_2_;
  sVar28 = auVar145._14_2_;
  sVar32 = auVar107._0_2_;
  sVar36 = auVar107._2_2_;
  sVar40 = auVar107._4_2_;
  sVar44 = auVar107._6_2_;
  sVar48 = auVar107._8_2_;
  sVar52 = auVar107._10_2_;
  sVar56 = auVar107._12_2_;
  sVar60 = auVar107._14_2_;
  auVar118._0_4_ = iVar169 - local_128 >> 0x12;
  auVar118._4_4_ = iVar173 - uStack_124 >> 0x12;
  auVar118._8_4_ = iVar174 - uStack_120 >> 0x12;
  auVar118._12_4_ = iVar175 - uStack_11c >> 0x12;
  auVar105 = packssdw(auVar71,auVar118);
  sVar1 = auVar99._0_2_;
  sVar5 = auVar99._2_2_;
  sVar9 = auVar99._4_2_;
  sVar13 = auVar99._6_2_;
  sVar17 = auVar99._8_2_;
  sVar21 = auVar99._10_2_;
  sVar25 = auVar99._12_2_;
  sVar29 = auVar99._14_2_;
  sVar33 = auVar105._0_2_;
  sVar37 = auVar105._2_2_;
  sVar41 = auVar105._4_2_;
  sVar45 = auVar105._6_2_;
  sVar49 = auVar105._8_2_;
  sVar53 = auVar105._10_2_;
  sVar57 = auVar105._12_2_;
  sVar61 = auVar105._14_2_;
  *param_1 = (0 < sVar150) * (sVar150 < 0x100) * auVar125[0] - (0xff < sVar150);
  param_1[1] = (0 < sVar30) * (sVar30 < 0x100) * auVar67[0] - (0xff < sVar30);
  param_1[2] = (0 < sVar113) * (sVar113 < 0x100) * auVar66[0] - (0xff < sVar113);
  param_1[3] = (0 < sVar31) * (sVar31 < 0x100) * auVar81[0] - (0xff < sVar31);
  param_1[4] = (0 < sVar1) * (sVar1 < 0x100) * auVar99[0] - (0xff < sVar1);
  param_1[5] = (0 < sVar33) * (sVar33 < 0x100) * auVar105[0] - (0xff < sVar33);
  param_1[6] = (0 < sVar151) * (sVar151 < 0x100) * auVar145[0] - (0xff < sVar151);
  param_1[7] = (0 < sVar32) * (sVar32 < 0x100) * auVar107[0] - (0xff < sVar32);
  param_1 = param_1 + param_2;
  *param_1 = (0 < sVar2) * (sVar2 < 0x100) * auVar125[2] - (0xff < sVar2);
  param_1[1] = (0 < sVar34) * (sVar34 < 0x100) * auVar67[2] - (0xff < sVar34);
  param_1[2] = (0 < sVar3) * (sVar3 < 0x100) * auVar66[2] - (0xff < sVar3);
  param_1[3] = (0 < sVar35) * (sVar35 < 0x100) * auVar81[2] - (0xff < sVar35);
  param_1[4] = (0 < sVar5) * (sVar5 < 0x100) * auVar99[2] - (0xff < sVar5);
  param_1[5] = (0 < sVar37) * (sVar37 < 0x100) * auVar105[2] - (0xff < sVar37);
  param_1[6] = (0 < sVar4) * (sVar4 < 0x100) * auVar145[2] - (0xff < sVar4);
  param_1[7] = (0 < sVar36) * (sVar36 < 0x100) * auVar107[2] - (0xff < sVar36);
  param_1 = param_1 + param_2;
  *param_1 = (0 < sVar6) * (sVar6 < 0x100) * auVar125[4] - (0xff < sVar6);
  param_1[1] = (0 < sVar38) * (sVar38 < 0x100) * auVar67[4] - (0xff < sVar38);
  param_1[2] = (0 < sVar7) * (sVar7 < 0x100) * auVar66[4] - (0xff < sVar7);
  param_1[3] = (0 < sVar39) * (sVar39 < 0x100) * auVar81[4] - (0xff < sVar39);
  param_1[4] = (0 < sVar9) * (sVar9 < 0x100) * auVar99[4] - (0xff < sVar9);
  param_1[5] = (0 < sVar41) * (sVar41 < 0x100) * auVar105[4] - (0xff < sVar41);
  param_1[6] = (0 < sVar8) * (sVar8 < 0x100) * auVar145[4] - (0xff < sVar8);
  param_1[7] = (0 < sVar40) * (sVar40 < 0x100) * auVar107[4] - (0xff < sVar40);
  param_1 = param_1 + param_2;
  *param_1 = (0 < sVar10) * (sVar10 < 0x100) * auVar125[6] - (0xff < sVar10);
  param_1[1] = (0 < sVar42) * (sVar42 < 0x100) * auVar67[6] - (0xff < sVar42);
  param_1[2] = (0 < sVar11) * (sVar11 < 0x100) * auVar66[6] - (0xff < sVar11);
  param_1[3] = (0 < sVar43) * (sVar43 < 0x100) * auVar81[6] - (0xff < sVar43);
  param_1[4] = (0 < sVar13) * (sVar13 < 0x100) * auVar99[6] - (0xff < sVar13);
  param_1[5] = (0 < sVar45) * (sVar45 < 0x100) * auVar105[6] - (0xff < sVar45);
  param_1[6] = (0 < sVar12) * (sVar12 < 0x100) * auVar145[6] - (0xff < sVar12);
  param_1[7] = (0 < sVar44) * (sVar44 < 0x100) * auVar107[6] - (0xff < sVar44);
  param_1 = param_1 + param_2;
  *param_1 = (0 < sVar14) * (sVar14 < 0x100) * auVar125[8] - (0xff < sVar14);
  param_1[1] = (0 < sVar46) * (sVar46 < 0x100) * auVar67[8] - (0xff < sVar46);
  param_1[2] = (0 < sVar15) * (sVar15 < 0x100) * auVar66[8] - (0xff < sVar15);
  param_1[3] = (0 < sVar47) * (sVar47 < 0x100) * auVar81[8] - (0xff < sVar47);
  param_1[4] = (0 < sVar17) * (sVar17 < 0x100) * auVar99[8] - (0xff < sVar17);
  param_1[5] = (0 < sVar49) * (sVar49 < 0x100) * auVar105[8] - (0xff < sVar49);
  param_1[6] = (0 < sVar16) * (sVar16 < 0x100) * auVar145[8] - (0xff < sVar16);
  param_1[7] = (0 < sVar48) * (sVar48 < 0x100) * auVar107[8] - (0xff < sVar48);
  param_1 = param_1 + param_2;
  *param_1 = (0 < sVar18) * (sVar18 < 0x100) * auVar125[10] - (0xff < sVar18);
  param_1[1] = (0 < sVar50) * (sVar50 < 0x100) * auVar67[10] - (0xff < sVar50);
  param_1[2] = (0 < sVar19) * (sVar19 < 0x100) * auVar66[10] - (0xff < sVar19);
  param_1[3] = (0 < sVar51) * (sVar51 < 0x100) * auVar81[10] - (0xff < sVar51);
  param_1[4] = (0 < sVar21) * (sVar21 < 0x100) * auVar99[10] - (0xff < sVar21);
  param_1[5] = (0 < sVar53) * (sVar53 < 0x100) * auVar105[10] - (0xff < sVar53);
  param_1[6] = (0 < sVar20) * (sVar20 < 0x100) * auVar145[10] - (0xff < sVar20);
  param_1[7] = (0 < sVar52) * (sVar52 < 0x100) * auVar107[10] - (0xff < sVar52);
  param_1 = param_1 + param_2;
  *param_1 = (0 < sVar22) * (sVar22 < 0x100) * auVar125[0xc] - (0xff < sVar22);
  param_1[1] = (0 < sVar54) * (sVar54 < 0x100) * auVar67[0xc] - (0xff < sVar54);
  param_1[2] = (0 < sVar23) * (sVar23 < 0x100) * auVar66[0xc] - (0xff < sVar23);
  param_1[3] = (0 < sVar55) * (sVar55 < 0x100) * auVar81[0xc] - (0xff < sVar55);
  param_1[4] = (0 < sVar25) * (sVar25 < 0x100) * auVar99[0xc] - (0xff < sVar25);
  param_1[5] = (0 < sVar57) * (sVar57 < 0x100) * auVar105[0xc] - (0xff < sVar57);
  param_1[6] = (0 < sVar24) * (sVar24 < 0x100) * auVar145[0xc] - (0xff < sVar24);
  param_1[7] = (0 < sVar56) * (sVar56 < 0x100) * auVar107[0xc] - (0xff < sVar56);
  param_1 = param_1 + param_2;
  *param_1 = (0 < sVar26) * (sVar26 < 0x100) * auVar125[0xe] - (0xff < sVar26);
  param_1[1] = (0 < sVar58) * (sVar58 < 0x100) * auVar67[0xe] - (0xff < sVar58);
  param_1[2] = (0 < sVar27) * (sVar27 < 0x100) * auVar66[0xe] - (0xff < sVar27);
  param_1[3] = (0 < sVar59) * (sVar59 < 0x100) * auVar81[0xe] - (0xff < sVar59);
  param_1[4] = (0 < sVar29) * (sVar29 < 0x100) * auVar99[0xe] - (0xff < sVar29);
  param_1[5] = (0 < sVar61) * (sVar61 < 0x100) * auVar105[0xe] - (0xff < sVar61);
  param_1[6] = (0 < sVar28) * (sVar28 < 0x100) * auVar145[0xe] - (0xff < sVar28);
  param_1[7] = (0 < sVar60) * (sVar60 < 0x100) * auVar107[0xe] - (0xff < sVar60);
  return;
}

// FUN_14f6494b0 @ 14f6494b0

undefined8
FUN_14f6494b0(longlong param_1,short *param_2,longlong param_3,longlong param_4,longlong param_5,
             int param_6,short *param_7)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  bool bVar5;
  int iVar6;
  uint *puVar7;
  short sVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  short sVar13;
  uint uVar14;
  
  if (*(int *)(param_1 + 0x4824) < 0x10) {
    FUN_14f648610();
  }
  if (*(int *)(param_1 + 0x4824) < 0x10) {
    FUN_14f648610(param_1);
  }
  uVar10 = *(uint *)(param_1 + 0x4820);
  bVar1 = *(byte *)((ulonglong)(uVar10 >> 0x17) + param_3);
  if (bVar1 < 0xff) {
    bVar2 = *(byte *)((ulonglong)bVar1 + 0x500 + param_3);
    if (*(int *)(param_1 + 0x4824) < (int)(uint)bVar2) goto LAB_14f649568;
    *(uint *)(param_1 + 0x4820) = uVar10 << (bVar2 & 0x1f);
    *(uint *)(param_1 + 0x4824) = *(int *)(param_1 + 0x4824) - (uint)bVar2;
    bVar1 = *(byte *)((ulonglong)bVar1 + 0x400 + param_3);
  }
  else {
    puVar7 = (uint *)(param_3 + 0x62c);
    iVar6 = 10;
    if (*puVar7 <= uVar10 >> 0x10) {
      do {
        iVar6 = iVar6 + 1;
        puVar7 = puVar7 + 1;
      } while (*puVar7 <= uVar10 >> 0x10);
      if (iVar6 == 0x11) {
        *(int *)(param_1 + 0x4824) = *(int *)(param_1 + 0x4824) + -0x10;
        goto LAB_14f649568;
      }
    }
    if (*(int *)(param_1 + 0x4824) < iVar6) goto LAB_14f649568;
    uVar14 = (uVar10 >> (0x20 - (byte)iVar6 & 0x1f) &
             *(uint *)(&DAT_153478d30 + (longlong)iVar6 * 4)) +
             *(int *)(param_3 + 0x64c + (longlong)iVar6 * 4);
    if (0xff < uVar14) goto LAB_14f649568;
    *(int *)(param_1 + 0x4824) = *(int *)(param_1 + 0x4824) - iVar6;
    *(uint *)(param_1 + 0x4820) = uVar10 << ((byte)iVar6 & 0x1f);
    bVar1 = *(byte *)((longlong)(int)uVar14 + 0x400 + param_3);
  }
  uVar10 = (uint)bVar1;
  if (0xf < uVar10) {
LAB_14f649568:
    *(char **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9cf0) = "bad huffman code";
    return 0;
  }
  memset(param_2,0,0x80);
  if (bVar1 != 0) {
    if (*(int *)(param_1 + 0x4824) < (int)uVar10) {
      FUN_14f648610(param_1);
    }
    if ((int)uVar10 <= *(int *)(param_1 + 0x4824)) {
      uVar14 = *(uint *)(param_1 + 0x4820);
      uVar12 = uVar14 << (bVar1 & 0x1f) | uVar14 >> 0x20 - (bVar1 & 0x1f);
      *(uint *)(param_1 + 0x4824) = *(int *)(param_1 + 0x4824) - uVar10;
      uVar3 = *(uint *)(&DAT_153478d30 + (longlong)(int)uVar10 * 4);
      *(uint *)(param_1 + 0x4820) = ~uVar3 & uVar12;
      uVar10 = (*(uint *)(&DAT_153478d90 + (longlong)(int)uVar10 * 4) &
               0xffffffffU - ((int)uVar14 >> 0x1f)) + (uVar3 & uVar12);
      goto LAB_14f649681;
    }
  }
  uVar10 = 0;
LAB_14f649681:
  uVar14 = *(uint *)((longlong)param_6 * 0x60 + 0x46b8 + param_1);
  if (-1 < (int)(~uVar14 ^ ~uVar10)) {
    if (((int)uVar14 < 0) && ((int)uVar10 < 0)) {
      bVar5 = (int)(-0x80000000 - uVar10) <= (int)uVar14;
    }
    else {
      bVar5 = (int)uVar14 <= (int)(0x7fffffff - uVar10);
    }
    if (!bVar5) {
      *(char **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9cf0) = "bad delta";
      return 0;
    }
  }
  uVar14 = uVar14 + uVar10;
  sVar13 = (short)uVar14;
  *(uint *)((longlong)param_6 * 0x60 + 0x46b8 + param_1) = uVar14;
  sVar8 = *param_7;
  iVar6 = FUN_14f64aac0(uVar14 & 0xffff,sVar8);
  if (iVar6 == 0) {
    *(char **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9cf0) = "can\'t merge dc and ac";
    return 0;
  }
  iVar6 = 1;
  *param_2 = sVar8 * sVar13;
  do {
    if (*(int *)(param_1 + 0x4824) < 0x10) {
      FUN_14f648610(param_1);
    }
    sVar8 = *(short *)(param_5 + (ulonglong)(*(uint *)(param_1 + 0x4820) >> 0x17) * 2);
    uVar10 = (uint)sVar8;
    if (uVar10 == 0) {
      if (*(int *)(param_1 + 0x4824) < 0x10) {
        FUN_14f648610(param_1);
      }
      uVar10 = *(uint *)(param_1 + 0x4820);
      bVar1 = *(byte *)((ulonglong)(uVar10 >> 0x17) + param_4);
      if (bVar1 < 0xff) {
        bVar2 = *(byte *)((ulonglong)bVar1 + 0x500 + param_4);
        if (*(int *)(param_1 + 0x4824) < (int)(uint)bVar2) goto LAB_14f6499ee;
        *(uint *)(param_1 + 0x4820) = uVar10 << (bVar2 & 0x1f);
        *(uint *)(param_1 + 0x4824) = *(int *)(param_1 + 0x4824) - (uint)bVar2;
        bVar1 = *(byte *)((ulonglong)bVar1 + 0x400 + param_4);
      }
      else {
        puVar7 = (uint *)(param_4 + 0x62c);
        iVar9 = 10;
        lVar11 = 10;
        if (*puVar7 <= uVar10 >> 0x10) {
          do {
            iVar9 = iVar9 + 1;
            puVar7 = puVar7 + 1;
            lVar11 = lVar11 + 1;
          } while (*puVar7 <= uVar10 >> 0x10);
          if (iVar9 == 0x11) {
            *(int *)(param_1 + 0x4824) = *(int *)(param_1 + 0x4824) + -0x10;
            goto LAB_14f6499ee;
          }
        }
        if (*(int *)(param_1 + 0x4824) < iVar9) {
LAB_14f6499ee:
          *(char **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x9cf0) = "bad huffman code";
          return 0;
        }
        uVar14 = (uVar10 >> (0x20 - (byte)iVar9 & 0x1f) & *(uint *)(&DAT_153478d30 + lVar11 * 4)) +
                 *(int *)(param_4 + 0x64c + lVar11 * 4);
        if (0xff < uVar14) goto LAB_14f6499ee;
        *(int *)(param_1 + 0x4824) = *(int *)(param_1 + 0x4824) - iVar9;
        *(uint *)(param_1 + 0x4820) = uVar10 << ((byte)iVar9 & 0x1f);
        bVar1 = *(byte *)((longlong)(int)uVar14 + 0x400 + param_4);
      }
      uVar10 = (uint)bVar1;
      uVar14 = uVar10 & 0xf;
      if ((bVar1 & 0xf) != 0) {
        iVar9 = *(int *)(param_1 + 0x4824);
        iVar6 = iVar6 + ((int)uVar10 >> 4);
        bVar1 = (&DAT_153478dd0)[iVar6];
        if (iVar9 < (int)uVar14) {
          FUN_14f648610();
          iVar9 = *(int *)(param_1 + 0x4824);
          if (iVar9 < (int)uVar14) {
            sVar8 = 0;
            goto LAB_14f6499b1;
          }
        }
        uVar10 = *(uint *)(param_1 + 0x4820);
        uVar12 = uVar10 << (sbyte)uVar14 | uVar10 >> 0x20 - (sbyte)uVar14;
        uVar3 = *(uint *)(&DAT_153478d30 + (ulonglong)uVar14 * 4);
        uVar4 = *(undefined4 *)(&DAT_153478d90 + (ulonglong)uVar14 * 4);
        *(uint *)(param_1 + 0x4824) = iVar9 - uVar14;
        *(uint *)(param_1 + 0x4820) = ~uVar3 & uVar12;
        sVar8 = ((ushort)uVar4 & 0xffffU - (short)((int)uVar10 >> 0x1f)) +
                ((ushort)uVar3 & (ushort)uVar12);
        goto LAB_14f6499b1;
      }
      if (uVar10 != 0xf0) {
        return 1;
      }
      iVar6 = iVar6 + 0x10;
    }
    else {
      uVar14 = uVar10 & 0xf;
      iVar6 = iVar6 + ((int)uVar10 >> 4 & 0xfU);
      if (*(int *)(param_1 + 0x4824) < (int)uVar14) goto LAB_14f6499ee;
      *(uint *)(param_1 + 0x4824) = *(int *)(param_1 + 0x4824) - uVar14;
      *(uint *)(param_1 + 0x4820) = *(uint *)(param_1 + 0x4820) << (sbyte)uVar14;
      bVar1 = (&DAT_153478dd0)[iVar6];
      sVar8 = (short)(char)((ushort)sVar8 >> 8);
LAB_14f6499b1:
      iVar6 = iVar6 + 1;
      param_2[bVar1] = param_7[bVar1] * sVar8;
    }
    if (0x3f < iVar6) {
      return 1;
    }
  } while( true );
}

// FUN_14f649a20 @ 14f649a20

undefined8 FUN_14f649a20(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  ushort *puVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  undefined4 uVar5;
  ushort uVar6;
  uint *puVar7;
  byte bVar8;
  sbyte sVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  ushort uVar14;
  int iVar15;
  ulonglong uVar16;
  short sVar17;
  longlong lVar18;
  uint uVar19;
  ulonglong uVar20;
  byte *pbVar21;
  
  iVar15 = *(int *)(param_1 + 0x4834);
  uVar16 = (ulonglong)iVar15;
  if (iVar15 == 0) {
    *(char **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9cf0) = "can\'t merge dc and ac";
    return 0;
  }
  if (*(int *)(param_1 + 0x483c) == 0) {
    uVar5 = *(undefined4 *)(param_1 + 0x4840);
    if (*(int *)(param_1 + 0x4844) == 0) {
      do {
        if (*(int *)(param_1 + 0x4824) < 0x10) {
          FUN_14f648610(param_1);
        }
        sVar17 = *(short *)(param_4 + (ulonglong)(*(uint *)(param_1 + 0x4820) >> 0x17) * 2);
        uVar11 = (uint)sVar17;
        iVar15 = (int)uVar16;
        bVar8 = (byte)uVar5;
        if (uVar11 == 0) {
          if (*(int *)(param_1 + 0x4824) < 0x10) {
            FUN_14f648610(param_1);
          }
          uVar11 = *(uint *)(param_1 + 0x4820);
          bVar2 = *(byte *)((ulonglong)(uVar11 >> 0x17) + param_3);
          if (bVar2 < 0xff) {
            bVar3 = *(byte *)((ulonglong)bVar2 + 0x500 + param_3);
            if (*(int *)(param_1 + 0x4824) < (int)(uint)bVar3) goto LAB_14f64a14d;
            *(uint *)(param_1 + 0x4820) = uVar11 << (bVar3 & 0x1f);
            *(uint *)(param_1 + 0x4824) = *(int *)(param_1 + 0x4824) - (uint)bVar3;
            bVar2 = *(byte *)((ulonglong)bVar2 + 0x400 + param_3);
          }
          else {
            puVar7 = (uint *)(param_3 + 0x62c);
            iVar12 = 10;
            lVar18 = 10;
            if (*puVar7 <= uVar11 >> 0x10) {
              do {
                iVar12 = iVar12 + 1;
                puVar7 = puVar7 + 1;
                lVar18 = lVar18 + 1;
              } while (*puVar7 <= uVar11 >> 0x10);
              if (iVar12 == 0x11) {
LAB_14f64a146:
                *(int *)(param_1 + 0x4824) = *(int *)(param_1 + 0x4824) + -0x10;
LAB_14f64a14d:
                *(char **)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x9cf0) = "bad huffman code";
                return 0;
              }
            }
            if (*(int *)(param_1 + 0x4824) < iVar12) goto LAB_14f64a14d;
            uVar10 = (uVar11 >> (0x20 - (byte)iVar12 & 0x1f) &
                     *(uint *)(&DAT_153478d30 + lVar18 * 4)) +
                     *(int *)(param_3 + 0x64c + lVar18 * 4);
            if (0xff < uVar10) goto LAB_14f64a14d;
            *(int *)(param_1 + 0x4824) = *(int *)(param_1 + 0x4824) - iVar12;
            *(uint *)(param_1 + 0x4820) = uVar11 << ((byte)iVar12 & 0x1f);
            bVar2 = *(byte *)((longlong)(int)uVar10 + 0x400 + param_3);
          }
          uVar10 = (int)(uint)bVar2 >> 4;
          uVar11 = bVar2 & 0xf;
          if ((bVar2 & 0xf) == 0) {
            if (uVar10 < 0xf) {
              sVar9 = (sbyte)uVar10;
              *(int *)(param_1 + 0x4844) = 1 << sVar9;
              if (uVar10 != 0) {
                if (*(int *)(param_1 + 0x4824) < (int)uVar10) {
                  FUN_14f648610();
                }
                if (*(int *)(param_1 + 0x4824) < (int)uVar10) {
                  *(undefined4 *)(param_1 + 0x4844) = *(undefined4 *)(param_1 + 0x4844);
                  *(int *)(param_1 + 0x4844) = *(int *)(param_1 + 0x4844) + -1;
                  return 1;
                }
                uVar13 = *(uint *)(param_1 + 0x4820) << sVar9 |
                         *(uint *)(param_1 + 0x4820) >> 0x20 - sVar9;
                *(uint *)(param_1 + 0x4824) = *(int *)(param_1 + 0x4824) - uVar10;
                uVar11 = *(uint *)(&DAT_153478d30 + (longlong)(int)uVar10 * 4);
                *(int *)(param_1 + 0x4844) = *(int *)(param_1 + 0x4844) + (uVar11 & uVar13);
                *(uint *)(param_1 + 0x4820) = ~uVar11 & uVar13;
              }
              *(int *)(param_1 + 0x4844) = *(int *)(param_1 + 0x4844) + -1;
              return 1;
            }
            uVar16 = (ulonglong)(iVar15 + 0x10);
          }
          else {
            iVar12 = *(int *)(param_1 + 0x4824);
            uVar16 = (ulonglong)(iVar15 + uVar10 + 1);
            bVar2 = (&DAT_153478dd0)[(int)(iVar15 + uVar10)];
            if (iVar12 < (int)uVar11) {
              FUN_14f648610(param_1);
              iVar12 = *(int *)(param_1 + 0x4824);
              if ((int)uVar11 <= iVar12) goto LAB_14f649c9f;
              sVar17 = 0;
            }
            else {
LAB_14f649c9f:
              uVar10 = *(uint *)(param_1 + 0x4820);
              uVar19 = uVar10 << (sbyte)uVar11 | uVar10 >> 0x20 - (sbyte)uVar11;
              uVar13 = *(uint *)(&DAT_153478d30 + (ulonglong)uVar11 * 4);
              *(uint *)(param_1 + 0x4824) = iVar12 - uVar11;
              *(uint *)(param_1 + 0x4820) = ~uVar13 & uVar19;
              sVar17 = ((ushort)*(undefined4 *)(&DAT_153478d90 + (ulonglong)uVar11 * 4) &
                       0xffffU - (short)((int)uVar10 >> 0x1f)) + ((ushort)uVar13 & (ushort)uVar19);
            }
            *(short *)(param_2 + (ulonglong)bVar2 * 2) = (1 << (bVar8 & 0x1f)) * sVar17;
          }
        }
        else {
          uVar10 = uVar11 & 0xf;
          iVar15 = iVar15 + ((int)uVar11 >> 4 & 0xfU);
          if (*(int *)(param_1 + 0x4824) < (int)uVar10) goto LAB_14f64a14d;
          *(uint *)(param_1 + 0x4824) = *(int *)(param_1 + 0x4824) - uVar10;
          *(uint *)(param_1 + 0x4820) = *(uint *)(param_1 + 0x4820) << (sbyte)uVar10;
          uVar16 = (ulonglong)(iVar15 + 1);
          *(short *)(param_2 + (ulonglong)(byte)(&DAT_153478dd0)[iVar15] * 2) =
               (short)(char)((ushort)sVar17 >> 8) * (1 << (bVar8 & 0x1f));
        }
        if (*(int *)(param_1 + 0x4838) < (int)uVar16) {
          return 1;
        }
      } while( true );
    }
    *(int *)(param_1 + 0x4844) = *(int *)(param_1 + 0x4844) + -1;
  }
  else {
    uVar14 = 1 << ((byte)*(undefined4 *)(param_1 + 0x4840) & 0x1f);
    uVar20 = uVar16;
    if (*(int *)(param_1 + 0x4844) == 0) {
      do {
        if (*(int *)(param_1 + 0x4824) < 0x10) {
          FUN_14f648610(param_1);
        }
        uVar11 = *(uint *)(param_1 + 0x4820);
        bVar8 = *(byte *)((ulonglong)(uVar11 >> 0x17) + param_3);
        if (bVar8 < 0xff) {
          bVar2 = *(byte *)((ulonglong)bVar8 + 0x500 + param_3);
          if (*(int *)(param_1 + 0x4824) < (int)(uint)bVar2) goto LAB_14f64a14d;
          *(uint *)(param_1 + 0x4820) = uVar11 << (bVar2 & 0x1f);
          *(uint *)(param_1 + 0x4824) = *(int *)(param_1 + 0x4824) - (uint)bVar2;
          bVar8 = *(byte *)((ulonglong)bVar8 + 0x400 + param_3);
        }
        else {
          puVar7 = (uint *)(param_3 + 0x62c);
          iVar15 = 10;
          lVar18 = 10;
          if (*puVar7 <= uVar11 >> 0x10) {
            do {
              iVar15 = iVar15 + 1;
              puVar7 = puVar7 + 1;
              lVar18 = lVar18 + 1;
            } while (*puVar7 <= uVar11 >> 0x10);
            if (iVar15 == 0x11) goto LAB_14f64a146;
          }
          if (*(int *)(param_1 + 0x4824) < iVar15) goto LAB_14f64a14d;
          uVar10 = (uVar11 >> (0x20 - (byte)iVar15 & 0x1f) & *(uint *)(&DAT_153478d30 + lVar18 * 4))
                   + *(int *)(param_3 + 0x64c + lVar18 * 4);
          if (0xff < uVar10) goto LAB_14f64a14d;
          *(int *)(param_1 + 0x4824) = *(int *)(param_1 + 0x4824) - iVar15;
          *(uint *)(param_1 + 0x4820) = uVar11 << ((byte)iVar15 & 0x1f);
          bVar8 = *(byte *)((longlong)(int)uVar10 + 0x400 + param_3);
        }
        uVar11 = (int)(uint)bVar8 >> 4;
        uVar10 = bVar8 & 0xf;
        if ((bVar8 & 0xf) == 0) {
          if (uVar11 < 0xf) {
            sVar9 = (sbyte)uVar11;
            *(int *)(param_1 + 0x4844) = (1 << sVar9) + -1;
            if (uVar11 != 0) {
              iVar15 = *(int *)(param_1 + 0x4824);
              if (iVar15 < (int)uVar11) {
                FUN_14f648610(param_1);
                iVar15 = *(int *)(param_1 + 0x4824);
                if (iVar15 < (int)uVar11) {
                  uVar11 = uVar10 + 0x40;
                  *(undefined4 *)(param_1 + 0x4844) = *(undefined4 *)(param_1 + 0x4844);
                  goto LAB_14f64a079;
                }
              }
              uVar13 = *(uint *)(param_1 + 0x4820) << sVar9 |
                       *(uint *)(param_1 + 0x4820) >> 0x20 - sVar9;
              *(uint *)(param_1 + 0x4824) = iVar15 - uVar11;
              uVar11 = *(uint *)(&DAT_153478d30 + (longlong)(int)uVar11 * 4);
              *(int *)(param_1 + 0x4844) = *(int *)(param_1 + 0x4844) + (uVar13 & uVar11);
              *(uint *)(param_1 + 0x4820) = ~uVar11 & uVar13;
            }
            uVar11 = 0x40;
          }
        }
        else {
          if (uVar10 != 1) goto LAB_14f64a14d;
          iVar15 = *(int *)(param_1 + 0x4824);
          if (iVar15 < 1) {
            FUN_14f648610(param_1);
            iVar15 = *(int *)(param_1 + 0x4824);
            if (0 < iVar15) goto LAB_14f64a04c;
          }
          else {
LAB_14f64a04c:
            uVar10 = *(uint *)(param_1 + 0x4820);
            *(uint *)(param_1 + 0x4820) = uVar10 * 2;
            *(int *)(param_1 + 0x4824) = iVar15 + -1;
            if ((uVar10 & 0x80000000) != 0) {
              uVar10 = (uint)(short)uVar14;
              goto LAB_14f64a079;
            }
          }
          uVar10 = -(int)(short)uVar14;
        }
LAB_14f64a079:
        if (*(int *)(param_1 + 0x4838) < (int)uVar16) {
          return 1;
        }
        do {
          pbVar21 = &DAT_153478dd0 + uVar20;
          uVar13 = (int)uVar16 + 1;
          uVar16 = (ulonglong)uVar13;
          uVar20 = uVar20 + 1;
          puVar1 = (ushort *)(param_2 + (ulonglong)*pbVar21 * 2);
          if (*(short *)(param_2 + (ulonglong)*pbVar21 * 2) == 0) {
            if (uVar11 == 0) {
              *puVar1 = (ushort)uVar10;
              break;
            }
            uVar11 = uVar11 - 1;
          }
          else {
            iVar15 = *(int *)(param_1 + 0x4824);
            if (iVar15 < 1) {
              FUN_14f648610(param_1);
              iVar15 = *(int *)(param_1 + 0x4824);
              if (iVar15 < 1) goto LAB_14f64a113;
            }
            uVar19 = *(uint *)(param_1 + 0x4820);
            *(uint *)(param_1 + 0x4820) = uVar19 * 2;
            *(int *)(param_1 + 0x4824) = iVar15 + -1;
            if (((uVar19 & 0x80000000) != 0) && (uVar4 = *puVar1, (uVar14 & uVar4) == 0)) {
              if ((short)uVar4 < 1) {
                *puVar1 = uVar4 - uVar14;
              }
              else {
                *puVar1 = uVar4 + uVar14;
              }
            }
          }
LAB_14f64a113:
        } while ((int)uVar13 <= *(int *)(param_1 + 0x4838));
        if (*(int *)(param_1 + 0x4838) < (int)uVar13) {
          return 1;
        }
      } while( true );
    }
    *(int *)(param_1 + 0x4844) = *(int *)(param_1 + 0x4844) + -1;
    if (iVar15 <= *(int *)(param_1 + 0x4838)) {
      pbVar21 = &DAT_153478dd0 + uVar16;
      do {
        puVar1 = (ushort *)(param_2 + (ulonglong)*pbVar21 * 2);
        if (*(short *)(param_2 + (ulonglong)*pbVar21 * 2) != 0) {
          if (*(int *)(param_1 + 0x4824) < 1) {
            FUN_14f648610(param_1);
          }
          if (0 < *(int *)(param_1 + 0x4824)) {
            uVar11 = *(uint *)(param_1 + 0x4820);
            *(uint *)(param_1 + 0x4820) = uVar11 * 2;
            *(int *)(param_1 + 0x4824) = *(int *)(param_1 + 0x4824) + -1;
            if (((uVar11 & 0x80000000) != 0) && (uVar4 = *puVar1, (uVar14 & uVar4) == 0)) {
              uVar6 = uVar14;
              if ((short)uVar4 < 1) {
                uVar6 = -uVar14;
              }
              *puVar1 = uVar4 + uVar6;
            }
          }
        }
        uVar11 = (int)uVar16 + 1;
        uVar16 = (ulonglong)uVar11;
        pbVar21 = pbVar21 + 1;
      } while ((int)uVar11 <= *(int *)(param_1 + 0x4838));
      return 1;
    }
  }
  return 1;
}

// FUN_14f64a1a0 @ 14f64a1a0

undefined8 FUN_14f64a1a0(longlong param_1,short *param_2,longlong param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  undefined8 uVar6;
  uint uVar7;
  short sVar8;
  uint uVar9;
  int iVar10;
  short sVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)(param_1 + 0x4838) != 0) {
    *(char **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9cf0) = "can\'t merge dc and ac";
    return 0;
  }
  if (*(int *)(param_1 + 0x4824) < 0x10) {
    FUN_14f648610();
  }
  if (*(int *)(param_1 + 0x483c) == 0) {
    memset(param_2,0,0x80);
    if (*(int *)(param_1 + 0x4824) < 0x10) {
      FUN_14f648610(param_1);
    }
    uVar13 = *(uint *)(param_1 + 0x4820);
    bVar1 = *(byte *)((ulonglong)(uVar13 >> 0x17) + param_3);
    if (bVar1 < 0xff) {
      bVar2 = *(byte *)((ulonglong)bVar1 + 0x500 + param_3);
      if ((int)(uint)bVar2 <= *(int *)(param_1 + 0x4824)) {
        *(uint *)(param_1 + 0x4820) = uVar13 << (bVar2 & 0x1f);
        *(uint *)(param_1 + 0x4824) = *(int *)(param_1 + 0x4824) - (uint)bVar2;
        bVar1 = *(byte *)((ulonglong)bVar1 + 0x400 + param_3);
LAB_14f64a33a:
        uVar13 = (uint)bVar1;
        if (uVar13 < 0x10) {
          if (bVar1 == 0) {
LAB_14f64a3b7:
            iVar10 = 0;
          }
          else {
            if (*(int *)(param_1 + 0x4824) < (int)uVar13) {
              FUN_14f648610(param_1);
            }
            if (*(int *)(param_1 + 0x4824) < (int)uVar13) goto LAB_14f64a3b7;
            uVar9 = *(uint *)(param_1 + 0x4820);
            *(uint *)(param_1 + 0x4824) = *(int *)(param_1 + 0x4824) - uVar13;
            uVar7 = uVar9 << (bVar1 & 0x1f) | uVar9 >> 0x20 - (bVar1 & 0x1f);
            uVar3 = *(uint *)(&DAT_153478d30 + (longlong)(int)uVar13 * 4);
            uVar13 = *(uint *)(&DAT_153478d90 + (longlong)(int)uVar13 * 4);
            *(uint *)(param_1 + 0x4820) = ~uVar3 & uVar7;
            iVar10 = (uVar13 & 0xffffffffU - ((int)uVar9 >> 0x1f)) + (uVar3 & uVar7);
          }
          iVar12 = *(int *)((longlong)param_4 * 0x60 + 0x46b8 + param_1);
          iVar4 = FUN_14f647b60(iVar12,iVar10);
          if (iVar4 == 0) {
            *(char **)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9cf0)
                 = "bad delta";
            return 0;
          }
          uVar13 = iVar12 + iVar10;
          sVar11 = (short)uVar13;
          *(uint *)((longlong)param_4 * 0x60 + 0x46b8 + param_1) = uVar13;
          sVar8 = 1 << ((byte)*(undefined4 *)(param_1 + 0x4840) & 0x1f);
          iVar10 = FUN_14f64aac0(uVar13 & 0xffff,sVar8);
          if (iVar10 != 0) {
            *param_2 = sVar8 * sVar11;
            goto LAB_14f64a49a;
          }
        }
      }
    }
    else {
      puVar5 = (uint *)(param_3 + 0x62c);
      iVar10 = 10;
      if (*puVar5 <= uVar13 >> 0x10) {
        do {
          iVar10 = iVar10 + 1;
          puVar5 = puVar5 + 1;
        } while (*puVar5 <= uVar13 >> 0x10);
        if (iVar10 == 0x11) {
          *(int *)(param_1 + 0x4824) = *(int *)(param_1 + 0x4824) + -0x10;
          goto LAB_14f64a2b8;
        }
      }
      if (iVar10 <= *(int *)(param_1 + 0x4824)) {
        uVar9 = (uVar13 >> (0x20 - (byte)iVar10 & 0x1f) &
                *(uint *)(&DAT_153478d30 + (longlong)iVar10 * 4)) +
                *(int *)(param_3 + 0x64c + (longlong)iVar10 * 4);
        if (uVar9 < 0x100) {
          *(int *)(param_1 + 0x4824) = *(int *)(param_1 + 0x4824) - iVar10;
          *(uint *)(param_1 + 0x4820) = uVar13 << ((byte)iVar10 & 0x1f);
          bVar1 = *(byte *)((longlong)(int)uVar9 + 0x400 + param_3);
          goto LAB_14f64a33a;
        }
      }
    }
LAB_14f64a2b8:
    *(char **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9cf0) = "can\'t merge dc and ac";
    uVar6 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x4824) < 1) {
      FUN_14f648610(param_1);
    }
    if (0 < *(int *)(param_1 + 0x4824)) {
      uVar13 = *(uint *)(param_1 + 0x4820);
      *(uint *)(param_1 + 0x4820) = uVar13 * 2;
      *(int *)(param_1 + 0x4824) = *(int *)(param_1 + 0x4824) + -1;
      if ((uVar13 & 0x80000000) != 0) {
        *param_2 = *param_2 + (1 << ((byte)*(undefined4 *)(param_1 + 0x4840) & 0x1f));
      }
    }
LAB_14f64a49a:
    uVar6 = 1;
  }
  return uVar6;
}

// FUN_14f64a530 @ 14f64a530

void FUN_14f64a530(longlong *param_1)

{
  short *psVar1;
  longlong lVar2;
  longlong lVar3;
  short *psVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  if (((int)param_1[0x906] != 0) && (iVar11 = 0, 0 < *(int *)(*param_1 + 8))) {
    plVar5 = param_1 + 0x8de;
    do {
      iVar6 = 0;
      iVar12 = *(int *)((longlong)plVar5 + -0x34) + 7 >> 3;
      iVar10 = (int)plVar5[-6] + 7 >> 3;
      if (0 < iVar10) {
        do {
          iVar8 = 0;
          if (0 < iVar12) {
            lVar7 = 0;
            do {
              lVar9 = 0x10;
              lVar2 = *plVar5 + (longlong)(((int)plVar5[1] * iVar6 + iVar8) * 0x40) * 2;
              lVar3 = ((longlong)*(int *)((longlong)plVar5 + -0x44) * 0x80 + 0x3488) - lVar2;
              psVar4 = (short *)(lVar2 + 2);
              do {
                psVar1 = psVar4 + 4;
                psVar4[-1] = psVar4[-1] *
                             *(short *)((longlong)param_1 + lVar3 + -2 + (longlong)psVar4);
                *psVar4 = *psVar4 * *(short *)((longlong)param_1 + lVar3 + -8 + (longlong)psVar1);
                psVar4[1] = psVar4[1] *
                            *(short *)((longlong)param_1 + lVar3 + -6 + (longlong)psVar1);
                psVar4[2] = psVar4[2] *
                            *(short *)((longlong)param_1 + lVar3 + -4 + (longlong)psVar1);
                lVar9 = lVar9 + -1;
                psVar4 = psVar1;
              } while (lVar9 != 0);
              (*(code *)param_1[0x90e])
                        (*(int *)((longlong)plVar5 + -0x2c) * iVar6 * 8 + lVar7 + plVar5[-4]);
              iVar8 = iVar8 + 1;
              lVar7 = lVar7 + 8;
            } while (iVar8 < iVar12);
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar10);
      }
      iVar11 = iVar11 + 1;
      plVar5 = plVar5 + 0xc;
    } while (iVar11 < *(int *)(*param_1 + 8));
  }
  return;
}

// FUN_14f64a6c0 @ 14f64a6c0

uint FUN_14f64a6c0(longlong param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x4824) < 1) {
    FUN_14f648610();
  }
  if (*(int *)(param_1 + 0x4824) < 1) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x4820);
  *(uint *)(param_1 + 0x4820) = uVar1 * 2;
  *(int *)(param_1 + 0x4824) = *(int *)(param_1 + 0x4824) + -1;
  return uVar1 & 0x80000000;
}

// FUN_14f64a720 @ 14f64a720

uint FUN_14f64a720(longlong param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x4824) < param_2) {
    FUN_14f648610();
  }
  if (*(int *)(param_1 + 0x4824) < param_2) {
    return 0;
  }
  bVar2 = (byte)param_2 & 0x1f;
  uVar3 = *(uint *)(param_1 + 0x4820) << bVar2 | *(uint *)(param_1 + 0x4820) >> 0x20 - bVar2;
  *(int *)(param_1 + 0x4824) = *(int *)(param_1 + 0x4824) - param_2;
  uVar1 = *(uint *)(&DAT_153478d30 + (longlong)param_2 * 4);
  *(uint *)(param_1 + 0x4820) = ~uVar1 & uVar3;
  return uVar1 & uVar3;
}

// FUN_14f64a7a0 @ 14f64a7a0

ulonglong FUN_14f64a7a0(longlong param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  
  if (*(int *)(param_1 + 0x4824) < 0x10) {
    FUN_14f648610();
  }
  uVar3 = *(uint *)(param_1 + 0x4820);
  bVar1 = *(byte *)((ulonglong)(uVar3 >> 0x17) + param_2);
  if (bVar1 < 0xff) {
    bVar2 = *(byte *)((ulonglong)bVar1 + 0x500 + param_2);
    if ((int)(uint)bVar2 <= *(int *)(param_1 + 0x4824)) {
      *(uint *)(param_1 + 0x4820) = uVar3 << (bVar2 & 0x1f);
      *(uint *)(param_1 + 0x4824) = *(int *)(param_1 + 0x4824) - (uint)bVar2;
      return (ulonglong)*(byte *)((ulonglong)bVar1 + 0x400 + param_2);
    }
  }
  else {
    puVar4 = (uint *)(param_2 + 0x62c);
    iVar5 = 10;
    if (*puVar4 <= uVar3 >> 0x10) {
      do {
        iVar5 = iVar5 + 1;
        puVar4 = puVar4 + 1;
      } while (*puVar4 <= uVar3 >> 0x10);
      if (iVar5 == 0x11) {
        *(int *)(param_1 + 0x4824) = *(int *)(param_1 + 0x4824) + -0x10;
        return 0xffffffff;
      }
    }
    if (iVar5 <= *(int *)(param_1 + 0x4824)) {
      uVar6 = (uVar3 >> (0x20 - (byte)iVar5 & 0x1f) &
              *(uint *)(&DAT_153478d30 + (longlong)iVar5 * 4)) +
              *(int *)(param_2 + 0x64c + (longlong)iVar5 * 4);
      if (uVar6 < 0x100) {
        *(int *)(param_1 + 0x4824) = *(int *)(param_1 + 0x4824) - iVar5;
        *(uint *)(param_1 + 0x4820) = uVar3 << ((byte)iVar5 & 0x1f);
        return (ulonglong)*(byte *)((longlong)(int)uVar6 + 0x400 + param_2);
      }
    }
  }
  return 0xffffffff;
}

// FUN_14f64a980 @ 14f64a980

undefined8 FUN_14f64a980(int param_1,int param_2,int param_3,int param_4)

{
  if ((((((-1 < param_1) && (-1 < param_2)) &&
        ((param_2 == 0 || (param_1 <= (int)(0x7fffffff / (longlong)param_2))))) &&
       ((param_1 = param_1 * param_2, -1 < param_1 && (-1 < param_3)))) &&
      ((param_3 == 0 || (param_1 <= (int)(0x7fffffff / (longlong)param_3))))) &&
     ((-1 < param_4 && (param_1 * param_3 <= 0x7fffffff - param_4)))) {
    return 1;
  }
  return 0;
}

// FUN_14f64aa10 @ 14f64aa10

undefined8 FUN_14f64aa10(int param_1,ulonglong param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = (int)param_2;
  if ((((-1 < param_1) && (-1 < iVar2)) &&
      ((iVar2 == 0 ||
       (param_2 = 0x7fffffff % (longlong)iVar2 & 0xffffffff,
       param_1 <= (int)(0x7fffffff / (longlong)iVar2))))) && (-1 < param_3)) {
    if (param_1 * iVar2 <= 0x7fffffff - param_3) {
                    /* WARNING: Could not recover jumptable at 0x00014f64aa5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)PTR_malloc_154df4928)((longlong)(param_1 * iVar2 + param_3),param_2);
      return uVar1;
    }
  }
  return 0;
}

// FUN_14f64aa70 @ 14f64aa70

undefined8 FUN_14f64aa70(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_14f64a980();
  if (iVar1 == 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014f64aaab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)PTR_malloc_154df4928)((longlong)(param_1 * param_2 * param_3 + param_4));
  return uVar2;
}

// FUN_14f64aac0 @ 14f64aac0

bool FUN_14f64aac0(ushort param_1,ushort param_2)

{
  if ((ushort)(param_2 + 1) < 2) {
    return true;
  }
  if (((param_1 ^ param_2) & 0x8000) == 0) {
    return (int)(short)param_1 <= (int)(0x7fff / (longlong)(int)(short)param_2);
  }
  if ((short)param_2 < 0) {
    return (int)(short)param_1 <= (int)(-0x8000 / (longlong)(int)(short)param_2);
  }
  return -0x8000 / (int)(short)param_2 <= (int)(short)param_1;
}

// FUN_14f64ab80 @ 14f64ab80

undefined8 FUN_14f64ab80(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_res10;
  int local_res18;
  
  *(undefined8 *)(param_1 + 0x4820) = 0;
  *(undefined4 *)(param_1 + 0x482c) = 0;
  *(undefined4 *)(param_1 + 0x47d8) = 0;
  *(undefined4 *)(param_1 + 0x4778) = 0;
  *(undefined4 *)(param_1 + 0x4718) = 0;
  *(undefined4 *)(param_1 + 0x46b8) = 0;
  *(undefined1 *)(param_1 + 0x4828) = 0xff;
  iVar10 = 0x7fffffff;
  if (*(int *)(param_1 + 0x4868) != 0) {
    iVar10 = *(int *)(param_1 + 0x4868);
  }
  *(undefined4 *)(param_1 + 0x4844) = 0;
  *(int *)(param_1 + 0x486c) = iVar10;
  if (*(int *)(param_1 + 0x4830) == 0) {
    iVar10 = 0;
    if (*(int *)(param_1 + 0x4854) == 1) {
      iVar7 = *(int *)(param_1 + 0x4858);
      lVar5 = (longlong)iVar7 * 0x60 + param_1;
      iVar9 = *(int *)(lVar5 + 0x46bc) + 7 >> 3;
      iVar2 = *(int *)(lVar5 + 0x46c0) + 7 >> 3;
      if (0 < iVar2) {
        do {
          iVar8 = 0;
          if (0 < iVar9) {
            iVar6 = 0;
            do {
              lVar1 = *(longlong *)(lVar5 + 0x46f0) +
                      (longlong)((*(int *)(lVar5 + 0x46f8) * iVar10 + iVar8) * 0x40) * 2;
              iVar3 = FUN_14f6494b0(param_1,lVar1,
                                    param_1 + 8 + (longlong)*(int *)(lVar5 + 0x46b0) * 0x690,
                                    param_1 + 0x1a48 + (longlong)*(int *)(lVar5 + 0x46b4) * 0x690,
                                    param_1 + 0x3688 + (longlong)*(int *)(lVar5 + 0x46b4) * 0x400,
                                    iVar7,param_1 + 0x3488 +
                                          (longlong)*(int *)(lVar5 + 0x46ac) * 0x80);
              if (iVar3 == 0) {
                return 0;
              }
              (**(code **)(param_1 + 0x4870))
                        ((longlong)(*(int *)(lVar5 + 0x46c4) * iVar10 * 8) +
                         *(longlong *)(lVar5 + 0x46d0) + (longlong)iVar6,*(int *)(lVar5 + 0x46c4),
                         lVar1);
              *(int *)(param_1 + 0x486c) = *(int *)(param_1 + 0x486c) + -1;
              if (*(int *)(param_1 + 0x486c) < 1) {
                if (*(int *)(param_1 + 0x4824) < 0x18) {
                  FUN_14f648610(param_1);
                }
                if (7 < (byte)(*(char *)(param_1 + 0x4828) + 0x30U)) {
                  return 1;
                }
                *(undefined8 *)(param_1 + 0x4820) = 0;
                *(undefined4 *)(param_1 + 0x482c) = 0;
                *(undefined4 *)(param_1 + 0x47d8) = 0;
                *(undefined4 *)(param_1 + 0x4778) = 0;
                *(undefined4 *)(param_1 + 0x4718) = 0;
                *(undefined4 *)(param_1 + 0x46b8) = 0;
                *(undefined1 *)(param_1 + 0x4828) = 0xff;
                iVar3 = 0x7fffffff;
                if (*(int *)(param_1 + 0x4868) != 0) {
                  iVar3 = *(int *)(param_1 + 0x4868);
                }
                *(undefined4 *)(param_1 + 0x4844) = 0;
                *(int *)(param_1 + 0x486c) = iVar3;
              }
              iVar8 = iVar8 + 1;
              iVar6 = iVar6 + 8;
            } while (iVar8 < iVar9);
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < iVar2);
      }
    }
    else {
      local_res18 = 0;
      if (0 < *(int *)(param_1 + 0x4694)) {
        do {
          local_res10 = 0;
          if (0 < *(int *)(param_1 + 0x4690)) {
            do {
              iVar10 = 0;
              if (0 < *(int *)(param_1 + 0x4854)) {
                piVar4 = (int *)(param_1 + 0x4858);
                do {
                  iVar7 = *piVar4;
                  iVar2 = 0;
                  lVar5 = (longlong)iVar7 * 0x60 + param_1;
                  if (0 < *(int *)(lVar5 + 0x46a8)) {
                    do {
                      iVar9 = *(int *)(lVar5 + 0x46a4);
                      iVar8 = 0;
                      if (0 < iVar9) {
                        do {
                          iVar6 = (iVar9 * local_res10 + iVar8) * 8;
                          iVar3 = (*(int *)(lVar5 + 0x46a8) * local_res18 + iVar2) * 8;
                          lVar1 = *(longlong *)(lVar5 + 0x46f0) +
                                  (longlong)((*(int *)(lVar5 + 0x46f8) * iVar3 + iVar6) * 8) * 2;
                          iVar9 = FUN_14f6494b0(param_1,lVar1,
                                                param_1 + 8 +
                                                (longlong)*(int *)(lVar5 + 0x46b0) * 0x690,
                                                param_1 + 0x1a48 +
                                                (longlong)*(int *)(lVar5 + 0x46b4) * 0x690,
                                                param_1 + 0x3688 +
                                                (longlong)*(int *)(lVar5 + 0x46b4) * 0x400,iVar7,
                                                param_1 + 0x3488 +
                                                (longlong)*(int *)(lVar5 + 0x46ac) * 0x80);
                          if (iVar9 == 0) {
                            return 0;
                          }
                          (**(code **)(param_1 + 0x4870))
                                    ((longlong)(*(int *)(lVar5 + 0x46c4) * iVar3) +
                                     *(longlong *)(lVar5 + 0x46d0) + (longlong)iVar6,
                                     *(int *)(lVar5 + 0x46c4),lVar1);
                          iVar9 = *(int *)(lVar5 + 0x46a4);
                          iVar8 = iVar8 + 1;
                        } while (iVar8 < iVar9);
                      }
                      iVar2 = iVar2 + 1;
                    } while (iVar2 < *(int *)(lVar5 + 0x46a8));
                  }
                  iVar10 = iVar10 + 1;
                  piVar4 = piVar4 + 1;
                } while (iVar10 < *(int *)(param_1 + 0x4854));
              }
              *(int *)(param_1 + 0x486c) = *(int *)(param_1 + 0x486c) + -1;
              if (*(int *)(param_1 + 0x486c) < 1) {
                if (*(int *)(param_1 + 0x4824) < 0x18) {
                  FUN_14f648610(param_1);
                }
                if (7 < (byte)(*(char *)(param_1 + 0x4828) + 0x30U)) {
                  return 1;
                }
                *(undefined8 *)(param_1 + 0x4820) = 0;
                *(undefined4 *)(param_1 + 0x482c) = 0;
                *(undefined4 *)(param_1 + 0x47d8) = 0;
                *(undefined4 *)(param_1 + 0x4778) = 0;
                *(undefined4 *)(param_1 + 0x4718) = 0;
                *(undefined4 *)(param_1 + 0x46b8) = 0;
                *(undefined1 *)(param_1 + 0x4828) = 0xff;
                iVar10 = 0x7fffffff;
                if (*(int *)(param_1 + 0x4868) != 0) {
                  iVar10 = *(int *)(param_1 + 0x4868);
                }
                *(undefined4 *)(param_1 + 0x4844) = 0;
                *(int *)(param_1 + 0x486c) = iVar10;
              }
              local_res10 = local_res10 + 1;
            } while (local_res10 < *(int *)(param_1 + 0x4690));
          }
          local_res18 = local_res18 + 1;
        } while (local_res18 < *(int *)(param_1 + 0x4694));
      }
    }
  }
  else if (*(int *)(param_1 + 0x4854) == 1) {
    iVar10 = *(int *)(param_1 + 0x4858);
    iVar7 = 0;
    lVar5 = (longlong)iVar10 * 0x60 + param_1;
    iVar9 = *(int *)(lVar5 + 0x46bc) + 7 >> 3;
    iVar2 = *(int *)(lVar5 + 0x46c0) + 7 >> 3;
    if (0 < iVar2) {
      do {
        iVar8 = 0;
        if (0 < iVar9) {
          do {
            lVar1 = *(longlong *)(lVar5 + 0x46f0) +
                    (longlong)((*(int *)(lVar5 + 0x46f8) * iVar7 + iVar8) * 0x40) * 2;
            if (*(int *)(param_1 + 0x4834) == 0) {
              iVar6 = FUN_14f64a1a0(param_1,lVar1,
                                    param_1 + 8 + (longlong)*(int *)(lVar5 + 0x46b0) * 0x690,iVar10)
              ;
            }
            else {
              iVar6 = FUN_14f649a20(param_1,lVar1,
                                    param_1 + 0x1a48 + (longlong)*(int *)(lVar5 + 0x46b4) * 0x690,
                                    param_1 + 0x3688 + (longlong)*(int *)(lVar5 + 0x46b4) * 0x400);
            }
            if (iVar6 == 0) {
              return 0;
            }
            *(int *)(param_1 + 0x486c) = *(int *)(param_1 + 0x486c) + -1;
            if (*(int *)(param_1 + 0x486c) < 1) {
              if (*(int *)(param_1 + 0x4824) < 0x18) {
                FUN_14f648610(param_1);
              }
              if (7 < (byte)(*(char *)(param_1 + 0x4828) + 0x30U)) {
                return 1;
              }
              *(undefined8 *)(param_1 + 0x4820) = 0;
              *(undefined4 *)(param_1 + 0x482c) = 0;
              *(undefined4 *)(param_1 + 0x47d8) = 0;
              *(undefined4 *)(param_1 + 0x4778) = 0;
              *(undefined4 *)(param_1 + 0x4718) = 0;
              *(undefined4 *)(param_1 + 0x46b8) = 0;
              *(undefined1 *)(param_1 + 0x4828) = 0xff;
              iVar6 = 0x7fffffff;
              if (*(int *)(param_1 + 0x4868) != 0) {
                iVar6 = *(int *)(param_1 + 0x4868);
              }
              *(undefined4 *)(param_1 + 0x4844) = 0;
              *(int *)(param_1 + 0x486c) = iVar6;
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < iVar9);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar2);
    }
  }
  else {
    iVar10 = 0;
    if (0 < *(int *)(param_1 + 0x4694)) {
      do {
        iVar7 = 0;
        if (0 < *(int *)(param_1 + 0x4690)) {
          do {
            iVar2 = 0;
            if (0 < *(int *)(param_1 + 0x4854)) {
              piVar4 = (int *)(param_1 + 0x4858);
              do {
                iVar9 = *piVar4;
                iVar8 = 0;
                lVar5 = (longlong)iVar9 * 0x60 + param_1;
                if (0 < *(int *)(lVar5 + 0x46a8)) {
                  do {
                    iVar6 = *(int *)(lVar5 + 0x46a4);
                    iVar3 = 0;
                    if (0 < iVar6) {
                      do {
                        iVar6 = FUN_14f64a1a0(param_1,*(longlong *)(lVar5 + 0x46f0) +
                                                      (longlong)
                                                      ((iVar6 * iVar7 +
                                                       (*(int *)(lVar5 + 0x46a8) * iVar10 + iVar8) *
                                                       *(int *)(lVar5 + 0x46f8) + iVar3) * 0x40) * 2
                                              ,param_1 + 8 +
                                               (longlong)*(int *)(lVar5 + 0x46b0) * 0x690,iVar9);
                        if (iVar6 == 0) {
                          return 0;
                        }
                        iVar6 = *(int *)(lVar5 + 0x46a4);
                        iVar3 = iVar3 + 1;
                      } while (iVar3 < iVar6);
                    }
                    iVar8 = iVar8 + 1;
                  } while (iVar8 < *(int *)(lVar5 + 0x46a8));
                }
                iVar2 = iVar2 + 1;
                piVar4 = piVar4 + 1;
              } while (iVar2 < *(int *)(param_1 + 0x4854));
            }
            *(int *)(param_1 + 0x486c) = *(int *)(param_1 + 0x486c) + -1;
            if (*(int *)(param_1 + 0x486c) < 1) {
              if (*(int *)(param_1 + 0x4824) < 0x18) {
                FUN_14f648610(param_1);
              }
              if (7 < (byte)(*(char *)(param_1 + 0x4828) + 0x30U)) {
                return 1;
              }
              *(undefined8 *)(param_1 + 0x4820) = 0;
              *(undefined4 *)(param_1 + 0x482c) = 0;
              *(undefined4 *)(param_1 + 0x47d8) = 0;
              *(undefined4 *)(param_1 + 0x4778) = 0;
              *(undefined4 *)(param_1 + 0x4718) = 0;
              *(undefined4 *)(param_1 + 0x46b8) = 0;
              *(undefined1 *)(param_1 + 0x4828) = 0xff;
              iVar2 = 0x7fffffff;
              if (*(int *)(param_1 + 0x4868) != 0) {
                iVar2 = *(int *)(param_1 + 0x4868);
              }
              *(undefined4 *)(param_1 + 0x4844) = 0;
              *(int *)(param_1 + 0x486c) = iVar2;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < *(int *)(param_1 + 0x4690));
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(int *)(param_1 + 0x4694));
    }
  }
  return 1;
}

// FUN_14f64b410 @ 14f64b410

undefined8 FUN_14f64b410(undefined8 *param_1,int param_2)

{
  char cVar1;
  uint *puVar2;
  byte *pbVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  byte bVar10;
  uint uVar11;
  ulonglong uVar12;
  uint *puVar13;
  int *piVar14;
  char *pcVar15;
  longlong *plVar16;
  uint uVar17;
  ulonglong uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  byte *pbVar23;
  
  puVar2 = (uint *)*param_1;
  uVar18 = 1;
  uVar17 = 1;
  iVar5 = FUN_14f648420(puVar2);
  if (10 < iVar5) {
    pcVar15 = *(char **)(puVar2 + 0x30);
    if (*(char **)(puVar2 + 0x32) <= pcVar15) {
      if (puVar2[0xc] == 0) goto LAB_14f64bb97;
      FUN_14f64c730(puVar2);
      pcVar15 = *(char **)(puVar2 + 0x30);
    }
    cVar1 = *pcVar15;
    *(char **)(puVar2 + 0x30) = pcVar15 + 1;
    if (cVar1 != '\b') {
LAB_14f64bb97:
      *(char **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9cf0) = "only 8-bit";
      return 0;
    }
    uVar6 = FUN_14f648420(puVar2);
    puVar2[1] = uVar6;
    if (uVar6 == 0) {
      *(char **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9cf0) = "no header height";
      return 0;
    }
    uVar6 = FUN_14f648420();
    *puVar2 = uVar6;
    if (uVar6 == 0) {
      *(char **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9cf0) = "0 width";
      return 0;
    }
    if ((0x1000000 < puVar2[1]) || (0x1000000 < uVar6)) {
      *(char **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9cf0) = "too large";
      return 0;
    }
    pbVar23 = *(byte **)(puVar2 + 0x30);
    if (pbVar23 < *(byte **)(puVar2 + 0x32)) {
      bVar10 = *pbVar23;
      *(byte **)(puVar2 + 0x30) = pbVar23 + 1;
    }
    else if (puVar2[0xc] == 0) {
      bVar10 = 0;
    }
    else {
      FUN_14f64c730(puVar2);
      bVar10 = **(byte **)(puVar2 + 0x30);
      *(byte **)(puVar2 + 0x30) = *(byte **)(puVar2 + 0x30) + 1;
    }
    uVar12 = (ulonglong)bVar10;
    if (((bVar10 - 1 & 0xfffffffc) != 0) || (bVar10 == 2)) {
      *(char **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9cf0) = "bad component count";
      return 0;
    }
    iVar21 = 0;
    puVar2[2] = (uint)bVar10;
    if (uVar12 != 0) {
      puVar7 = param_1 + 0x8dd;
      do {
        puVar7[-3] = 0;
        *puVar7 = 0;
        puVar7 = puVar7 + 0xc;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    if (iVar5 == puVar2[2] * 3 + 8) {
      *(undefined4 *)(param_1 + 0x90a) = 0;
      if (0 < (int)puVar2[2]) {
        pbVar23 = &DAT_153477b08;
        puVar13 = (uint *)((longlong)param_1 + 0x46a4);
        do {
          pbVar3 = *(byte **)(puVar2 + 0x30);
          if (pbVar3 < *(byte **)(puVar2 + 0x32)) {
            bVar10 = *pbVar3;
            *(byte **)(puVar2 + 0x30) = pbVar3 + 1;
          }
          else if (puVar2[0xc] == 0) {
            bVar10 = 0;
          }
          else {
            FUN_14f64c730(puVar2);
            bVar10 = **(byte **)(puVar2 + 0x30);
            *(byte **)(puVar2 + 0x30) = *(byte **)(puVar2 + 0x30) + 1;
          }
          puVar13[-1] = (uint)bVar10;
          if ((puVar2[2] == 3) && ((uint)bVar10 == (uint)*pbVar23)) {
            *(int *)(param_1 + 0x90a) = *(int *)(param_1 + 0x90a) + 1;
          }
          pbVar3 = *(byte **)(puVar2 + 0x30);
          if (pbVar3 < *(byte **)(puVar2 + 0x32)) {
            bVar10 = *pbVar3;
            *(byte **)(puVar2 + 0x30) = pbVar3 + 1;
          }
          else if (puVar2[0xc] == 0) {
            bVar10 = 0;
          }
          else {
            FUN_14f64c730(puVar2);
            bVar10 = **(byte **)(puVar2 + 0x30);
            *(byte **)(puVar2 + 0x30) = *(byte **)(puVar2 + 0x30) + 1;
          }
          bVar4 = bVar10 >> 4;
          *puVar13 = (uint)bVar4;
          if ((bVar4 == 0) || (bVar4 != 4 && 3 < bVar4)) goto LAB_14f64ba77;
          puVar13[1] = bVar10 & 0xf;
          if (((bVar10 & 0xf) == 0) || (4 < (bVar10 & 0xf))) goto LAB_14f64ba53;
          pbVar3 = *(byte **)(puVar2 + 0x30);
          if (pbVar3 < *(byte **)(puVar2 + 0x32)) {
            uVar6 = (uint)*pbVar3;
            *(byte **)(puVar2 + 0x30) = pbVar3 + 1;
          }
          else if (puVar2[0xc] == 0) {
            uVar6 = 0;
          }
          else {
            FUN_14f64c730(puVar2);
            uVar6 = (uint)**(byte **)(puVar2 + 0x30);
            *(byte **)(puVar2 + 0x30) = *(byte **)(puVar2 + 0x30) + 1;
          }
          puVar13[2] = uVar6;
          if (3 < uVar6) {
            lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            pcVar15 = "bad TQ";
            goto LAB_14f64b7b1;
          }
          iVar21 = iVar21 + 1;
          pbVar23 = pbVar23 + 1;
          puVar13 = puVar13 + 0x18;
        } while (iVar21 < (int)puVar2[2]);
      }
      if (param_2 != 0) {
        return 1;
      }
      uVar6 = puVar2[2];
      uVar12 = (ulonglong)uVar6;
      iVar21 = 0;
      iVar5 = FUN_14f64a980(*puVar2,puVar2[1],uVar6);
      if (iVar5 != 0) {
        if (0 < (int)uVar6) {
          puVar13 = (uint *)(param_1 + 0x8d5);
          do {
            if ((int)uVar18 < (int)puVar13[-1]) {
              uVar18 = (ulonglong)puVar13[-1];
            }
            if ((int)uVar17 < (int)*puVar13) {
              uVar17 = *puVar13;
            }
            puVar13 = puVar13 + 0x18;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        iVar22 = 0;
        iVar5 = (int)uVar18;
        if (0 < (int)uVar6) {
          piVar14 = (int *)(param_1 + 0x8d5);
          iVar19 = iVar22;
          do {
            if (iVar5 % piVar14[-1] != 0) goto LAB_14f64ba77;
            if ((int)uVar17 % *piVar14 != 0) goto LAB_14f64ba53;
            iVar19 = iVar19 + 1;
            piVar14 = piVar14 + 0x18;
          } while (iVar19 < (int)uVar6);
        }
        *(int *)(param_1 + 0x8d1) = iVar5;
        uVar11 = iVar5 * 8;
        *(uint *)((longlong)param_1 + 0x468c) = uVar17;
        uVar6 = uVar17 * 8;
        *(uint *)(param_1 + 0x8d3) = uVar11;
        *(uint *)((longlong)param_1 + 0x469c) = uVar6;
        *(uint *)(param_1 + 0x8d2) = ((*puVar2 - 1) + uVar11) / uVar11;
        *(uint *)((longlong)param_1 + 0x4694) = ((puVar2[1] - 1) + uVar6) / uVar6;
        if (iVar21 < (int)puVar2[2]) {
          piVar14 = (int *)((longlong)param_1 + 0x46a4);
          do {
            piVar14[6] = (int)((*puVar2 * *piVar14 + -1 + iVar5) / uVar18);
            piVar14[7] = (puVar2[1] * piVar14[1] + -1 + uVar17) / uVar17;
            iVar21 = *(int *)(param_1 + 0x8d2);
            iVar20 = iVar21 * *piVar14 * 8;
            piVar14[8] = iVar20;
            iVar19 = *(int *)((longlong)param_1 + 0x4694);
            piVar14[0x15] = (int)(iVar20 + (iVar20 >> 0x1f & 7U)) >> 3;
            iVar19 = piVar14[1] * iVar19 * 8;
            piVar14[9] = iVar19;
            piVar14[0x16] = (int)(iVar19 + (iVar19 >> 0x1f & 7U)) >> 3;
            if ((((iVar21 * *piVar14 * 8 < 0) || (iVar19 < 0)) ||
                ((iVar19 != 0 && ((int)(0x7fffffff / (longlong)iVar19) < iVar20)))) ||
               (((iVar20 = iVar20 * iVar19, iVar20 < 0 || (0x3fffffff < iVar20)) ||
                (0x7ffffff0 < iVar20 * 2)))) {
              piVar14[0xf] = 0;
              piVar14[0x10] = 0;
LAB_14f64bada:
              *(char **)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9cf0
                        ) = "outofmem";
              if ((int)(iVar22 + 1U) < 1) {
                return 0;
              }
              plVar16 = param_1 + 0x8db;
              uVar18 = (ulonglong)(iVar22 + 1U);
              do {
                if (*plVar16 != 0) {
                  (*(code *)PTR_free_154df4930)();
                  *plVar16 = 0;
                  plVar16[-1] = 0;
                }
                if (plVar16[1] != 0) {
                  (*(code *)PTR_free_154df4930)();
                  plVar16[1] = 0;
                  plVar16[3] = 0;
                }
                if (plVar16[2] != 0) {
                  (*(code *)PTR_free_154df4930)();
                  plVar16[2] = 0;
                }
                plVar16 = plVar16 + 0xc;
                uVar18 = uVar18 - 1;
              } while (uVar18 != 0);
              return 0;
            }
            lVar8 = (*(code *)PTR_malloc_154df4928)((longlong)(iVar20 * 2 + 0xf));
            *(longlong *)(piVar14 + 0xf) = lVar8;
            if (lVar8 == 0) goto LAB_14f64bada;
            iVar21 = piVar14[8];
            iVar19 = piVar14[9];
            *(ulonglong *)(piVar14 + 0x13) = lVar8 + 0xfU & 0xfffffffffffffff0;
            piVar14[0x11] = 0;
            piVar14[0x12] = 0;
            if (((iVar21 < 0) || (iVar19 < 0)) ||
               (((iVar19 != 0 && ((int)(0x7fffffff / (longlong)iVar19) < iVar21)) ||
                (0x7ffffff0 < iVar21 * iVar19)))) {
              piVar14[0xd] = 0;
              piVar14[0xe] = 0;
LAB_14f64ba9f:
              *(char **)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9cf0
                        ) = "outofmem";
              uVar9 = FUN_14f648390(param_1,iVar22 + 1,0);
              return uVar9;
            }
            lVar8 = (*(code *)PTR_malloc_154df4928)((longlong)(iVar21 * iVar19 + 0xf));
            *(longlong *)(piVar14 + 0xd) = lVar8;
            if (lVar8 == 0) goto LAB_14f64ba9f;
            iVar22 = iVar22 + 1;
            *(ulonglong *)(piVar14 + 0xb) = lVar8 + 0xfU & 0xfffffffffffffff0;
            piVar14 = piVar14 + 0x18;
          } while (iVar22 < (int)puVar2[2]);
        }
        return 1;
      }
      lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      pcVar15 = "too large";
      goto LAB_14f64b7b1;
    }
  }
  *(char **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9cf0
            ) = "bad SOF len";
  return 0;
LAB_14f64ba77:
  lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pcVar15 = "bad H";
  goto LAB_14f64b7b1;
LAB_14f64ba53:
  lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pcVar15 = "bad V";
LAB_14f64b7b1:
  *(char **)(lVar8 + 0x9cf0) = pcVar15;
  return 0;
}

// FUN_14f64bbe0 @ 14f64bbe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_14f64bbe0(longlong *param_1,int param_2)

{
  longlong lVar1;
  char *pcVar2;
  undefined1 *puVar3;
  bool bVar4;
  bool bVar5;
  ushort uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  byte bVar12;
  byte bVar13;
  undefined1 uVar14;
  ulonglong uVar15;
  char cVar16;
  longlong *plVar17;
  int iVar18;
  uint *puVar19;
  longlong *plVar20;
  longlong lVar21;
  undefined1 auStack_a8 [32];
  int local_88;
  uint local_84;
  uint local_78 [16];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (param_2 == 0xc4) {
    iVar7 = FUN_14f648420();
    for (iVar7 = iVar7 + -2; 0 < iVar7; iVar7 = iVar7 - iVar18) {
      lVar21 = *param_1;
      iVar18 = 0;
      pbVar11 = *(byte **)(lVar21 + 0xc0);
      local_88 = iVar7;
      if (pbVar11 < *(byte **)(lVar21 + 200)) {
        bVar12 = *pbVar11;
        *(byte **)(lVar21 + 0xc0) = pbVar11 + 1;
      }
      else if (*(int *)(lVar21 + 0x30) == 0) {
        bVar12 = 0;
      }
      else {
        FUN_14f64c730(lVar21);
        bVar12 = **(byte **)(lVar21 + 0xc0);
        *(byte **)(lVar21 + 0xc0) = *(byte **)(lVar21 + 0xc0) + 1;
      }
      local_84 = (uint)(bVar12 >> 4);
      if ((1 < local_84) || (3 < (bVar12 & 0xf))) {
LAB_14f64c2ae:
        *(char **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9cf0) = "bad DHT header";
        return false;
      }
      puVar19 = local_78;
      lVar21 = 0x10;
      do {
        lVar1 = *param_1;
        pbVar11 = *(byte **)(lVar1 + 0xc0);
        if (pbVar11 < *(byte **)(lVar1 + 200)) {
          bVar13 = *pbVar11;
          *(byte **)(lVar1 + 0xc0) = pbVar11 + 1;
        }
        else if (*(int *)(lVar1 + 0x30) == 0) {
          bVar13 = 0;
        }
        else {
          FUN_14f64c730(lVar1);
          bVar13 = **(byte **)(lVar1 + 0xc0);
          *(byte **)(lVar1 + 0xc0) = *(byte **)(lVar1 + 0xc0) + 1;
        }
        *puVar19 = (uint)bVar13;
        iVar18 = iVar18 + (uint)bVar13;
        puVar19 = puVar19 + 1;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      if (0x100 < iVar18) goto LAB_14f64c2ae;
      iVar7 = local_88 + -0x11;
      uVar15 = (ulonglong)(bVar12 & 0xf);
      local_88 = iVar7;
      if (bVar12 >> 4 == 0) {
        plVar20 = param_1 + uVar15 * 0xd2;
        iVar10 = FUN_14f647d20(plVar20 + 1,local_78);
        if (iVar10 == 0) {
          return false;
        }
        plVar17 = plVar20 + 0x81;
      }
      else {
        plVar20 = param_1 + uVar15 * 0xd2;
        iVar10 = FUN_14f647d20(plVar20 + 0x349,local_78);
        if (iVar10 == 0) {
          return false;
        }
        plVar17 = plVar20 + 0x3c9;
      }
      lVar21 = 0;
      if (0 < iVar18) {
        do {
          lVar1 = *param_1;
          puVar3 = *(undefined1 **)(lVar1 + 0xc0);
          if (puVar3 < *(undefined1 **)(lVar1 + 200)) {
            uVar14 = *puVar3;
            *(undefined1 **)(lVar1 + 0xc0) = puVar3 + 1;
          }
          else if (*(int *)(lVar1 + 0x30) == 0) {
            uVar14 = 0;
          }
          else {
            FUN_14f64c730(lVar1);
            uVar14 = **(undefined1 **)(lVar1 + 0xc0);
            *(undefined1 **)(lVar1 + 0xc0) = *(undefined1 **)(lVar1 + 0xc0) + 1;
          }
          *(undefined1 *)(lVar21 + (longlong)plVar17) = uVar14;
          lVar21 = lVar21 + 1;
          iVar7 = local_88;
        } while (lVar21 < iVar18);
      }
      if (local_84 != 0) {
        FUN_14f647c30(param_1 + uVar15 * 0x80 + 0x6d1,plVar20 + 0x349);
      }
    }
LAB_14f64c2da:
    return iVar7 == 0;
  }
  if (param_2 == 0xdb) {
    iVar7 = FUN_14f648420();
    for (iVar7 = iVar7 + -2; 0 < iVar7; iVar7 = iVar7 - iVar18) {
      lVar21 = *param_1;
      pbVar11 = *(byte **)(lVar21 + 0xc0);
      if (pbVar11 < *(byte **)(lVar21 + 200)) {
        uVar15 = (ulonglong)*pbVar11;
        *(byte **)(lVar21 + 0xc0) = pbVar11 + 1;
      }
      else if (*(int *)(lVar21 + 0x30) == 0) {
        uVar15 = 0;
      }
      else {
        FUN_14f64c730(lVar21);
        uVar15 = (ulonglong)**(byte **)(lVar21 + 0xc0);
        *(byte **)(lVar21 + 0xc0) = *(byte **)(lVar21 + 0xc0) + 1;
      }
      uVar9 = (uint)uVar15 & 0xf;
      uVar15 = uVar15 >> 4;
      if (1 < (uint)uVar15) {
        *(char **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9cf0) = "bad DQT type";
        return false;
      }
      if (3 < uVar9) {
        *(char **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9cf0) = "bad DQT table";
        return false;
      }
      lVar21 = 0;
      do {
        if (uVar15 == 0) {
          lVar1 = *param_1;
          pbVar11 = *(byte **)(lVar1 + 0xc0);
          if (pbVar11 < *(byte **)(lVar1 + 200)) {
            bVar12 = *pbVar11;
            *(byte **)(lVar1 + 0xc0) = pbVar11 + 1;
          }
          else if (*(int *)(lVar1 + 0x30) == 0) {
            bVar12 = 0;
          }
          else {
            FUN_14f64c730(lVar1);
            bVar12 = **(byte **)(lVar1 + 0xc0);
            *(byte **)(lVar1 + 0xc0) = *(byte **)(lVar1 + 0xc0) + 1;
          }
          uVar6 = (ushort)bVar12;
        }
        else {
          uVar6 = FUN_14f648420(*param_1);
        }
        pbVar11 = &DAT_153478dd0 + lVar21;
        lVar21 = lVar21 + 1;
        *(ushort *)
         ((longlong)param_1 + ((ulonglong)*pbVar11 + (ulonglong)uVar9 * 0x40) * 2 + 0x3488) = uVar6;
      } while (lVar21 < 0x40);
      iVar18 = 0x41;
      if (uVar15 != 0) {
        iVar18 = 0x81;
      }
    }
    goto LAB_14f64c2da;
  }
  if (param_2 == 0xdd) {
    iVar7 = FUN_14f648420(*param_1);
    if (iVar7 == 4) {
      uVar8 = FUN_14f648420(*param_1);
      *(undefined4 *)(param_1 + 0x90d) = uVar8;
      return true;
    }
    *(char **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9cf0) = "bad DRI len";
    return false;
  }
  if (param_2 == 0xff) {
    *(char **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9cf0) = "expected marker";
    return false;
  }
  if ((0xf < param_2 - 0xe0U) && (param_2 != 0xfe)) {
    *(char **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9cf0) = "unknown marker";
    return false;
  }
  iVar7 = FUN_14f648420(*param_1);
  if (iVar7 < 2) {
    lVar21 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (param_2 != 0xfe) {
      *(char **)(lVar21 + 0x9cf0) = "bad APP len";
      return false;
    }
    *(char **)(lVar21 + 0x9cf0) = "bad COM len";
    return false;
  }
  iVar18 = iVar7 + -2;
  if (param_2 == 0xe0) {
    if (4 < iVar18) {
      lVar21 = 0;
      bVar5 = true;
      do {
        lVar1 = *param_1;
        pcVar2 = *(char **)(lVar1 + 0xc0);
        if (pcVar2 < *(char **)(lVar1 + 200)) {
          cVar16 = *pcVar2;
          *(char **)(lVar1 + 0xc0) = pcVar2 + 1;
        }
        else if (*(int *)(lVar1 + 0x30) == 0) {
          cVar16 = '\0';
        }
        else {
          FUN_14f64c730(lVar1);
          cVar16 = **(char **)(lVar1 + 0xc0);
          *(char **)(lVar1 + 0xc0) = *(char **)(lVar1 + 0xc0) + 1;
        }
        pcVar2 = &DAT_153477774 + lVar21;
        lVar21 = lVar21 + 1;
        bVar4 = false;
        if (cVar16 == *pcVar2) {
          bVar4 = bVar5;
        }
        bVar5 = bVar4;
      } while (lVar21 < 5);
      iVar18 = iVar7 + -7;
      if (bVar4) {
        *(undefined4 *)(param_1 + 0x909) = 1;
        FUN_14f64cd30(*param_1,iVar18);
        return true;
      }
    }
    goto LAB_14f64bea8;
  }
  if ((param_2 != 0xee) || (iVar18 < 0xc)) goto LAB_14f64bea8;
  lVar21 = 0;
  bVar5 = true;
  do {
    lVar1 = *param_1;
    pcVar2 = *(char **)(lVar1 + 0xc0);
    if (pcVar2 < *(char **)(lVar1 + 200)) {
      cVar16 = *pcVar2;
      *(char **)(lVar1 + 0xc0) = pcVar2 + 1;
    }
    else if (*(int *)(lVar1 + 0x30) == 0) {
      cVar16 = '\0';
    }
    else {
      FUN_14f64c730(lVar1);
      cVar16 = **(char **)(lVar1 + 0xc0);
      *(char **)(lVar1 + 0xc0) = *(char **)(lVar1 + 0xc0) + 1;
    }
    pcVar2 = &DAT_15347777c + lVar21;
    lVar21 = lVar21 + 1;
    bVar4 = false;
    if (cVar16 == *pcVar2) {
      bVar4 = bVar5;
    }
    bVar5 = bVar4;
  } while (lVar21 < 6);
  iVar18 = iVar7 + -8;
  if (!bVar4) goto LAB_14f64bea8;
  lVar21 = *param_1;
  if (*(ulonglong *)(lVar21 + 0xc0) < *(ulonglong *)(lVar21 + 200)) {
    *(ulonglong *)(lVar21 + 0xc0) = *(ulonglong *)(lVar21 + 0xc0) + 1;
  }
  else if (*(int *)(lVar21 + 0x30) != 0) {
    FUN_14f64c730(lVar21);
    *(longlong *)(lVar21 + 0xc0) = *(longlong *)(lVar21 + 0xc0) + 1;
  }
  FUN_14f648420(*param_1);
  FUN_14f648420();
  lVar21 = *param_1;
  pbVar11 = *(byte **)(lVar21 + 0xc0);
  if (pbVar11 < *(byte **)(lVar21 + 200)) {
LAB_14f64be8b:
    bVar12 = *pbVar11;
    *(byte **)(lVar21 + 0xc0) = pbVar11 + 1;
  }
  else {
    if (*(int *)(lVar21 + 0x30) != 0) {
      FUN_14f64c730(lVar21);
      pbVar11 = *(byte **)(lVar21 + 0xc0);
      goto LAB_14f64be8b;
    }
    bVar12 = 0;
  }
  iVar18 = iVar7 + -0xe;
  *(uint *)((longlong)param_1 + 0x484c) = (uint)bVar12;
LAB_14f64bea8:
  FUN_14f64cd30(*param_1,iVar18);
  return true;
}

// FUN_14f64c320 @ 14f64c320

undefined8 FUN_14f64c320(longlong *param_1)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  uint *puVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  char *pcVar8;
  longlong lVar9;
  longlong *plVar10;
  
  iVar3 = FUN_14f648420();
  lVar9 = *param_1;
  pbVar2 = *(byte **)(lVar9 + 0xc0);
  if (pbVar2 < *(byte **)(lVar9 + 200)) {
    bVar5 = *pbVar2;
    *(byte **)(lVar9 + 0xc0) = pbVar2 + 1;
  }
  else if (*(int *)(lVar9 + 0x30) == 0) {
    bVar5 = 0;
  }
  else {
    FUN_14f64c730(lVar9);
    bVar5 = **(byte **)(lVar9 + 0xc0);
    *(byte **)(lVar9 + 0xc0) = *(byte **)(lVar9 + 0xc0) + 1;
  }
  *(uint *)((longlong)param_1 + 0x4854) = (uint)bVar5;
  if ((3 < bVar5 - 1) ||
     ((uint)bVar5 != *(uint *)(*param_1 + 8) && (int)*(uint *)(*param_1 + 8) <= (int)(uint)bVar5)) {
    *(char **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9cf0) = "bad SOS component count";
    return 0;
  }
  if (iVar3 != (uint)bVar5 * 2 + 6) {
    *(char **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9cf0) = "bad SOS len";
    return 0;
  }
  iVar3 = 0;
  if (bVar5 != 0) {
    plVar10 = param_1 + 0x90b;
    do {
      lVar9 = *param_1;
      pbVar2 = *(byte **)(lVar9 + 0xc0);
      if (pbVar2 < *(byte **)(lVar9 + 200)) {
        bVar5 = *pbVar2;
        *(byte **)(lVar9 + 0xc0) = pbVar2 + 1;
      }
      else if (*(int *)(lVar9 + 0x30) == 0) {
        bVar5 = 0;
      }
      else {
        FUN_14f64c730(lVar9);
        bVar5 = **(byte **)(lVar9 + 0xc0);
        *(byte **)(lVar9 + 0xc0) = *(byte **)(lVar9 + 0xc0) + 1;
      }
      lVar9 = *param_1;
      pbVar2 = *(byte **)(lVar9 + 0xc0);
      if (pbVar2 < *(byte **)(lVar9 + 200)) {
        bVar6 = *pbVar2;
        *(byte **)(lVar9 + 0xc0) = pbVar2 + 1;
      }
      else if (*(int *)(lVar9 + 0x30) == 0) {
        bVar6 = 0;
      }
      else {
        FUN_14f64c730(lVar9);
        bVar6 = **(byte **)(lVar9 + 0xc0);
        *(byte **)(lVar9 + 0xc0) = *(byte **)(lVar9 + 0xc0) + 1;
      }
      iVar7 = 0;
      lVar9 = 0;
      iVar1 = *(int *)(*param_1 + 8);
      if (0 < iVar1) {
        puVar4 = (uint *)(param_1 + 0x8d4);
        do {
          if (*puVar4 == (uint)bVar5) break;
          iVar7 = iVar7 + 1;
          lVar9 = lVar9 + 1;
          puVar4 = puVar4 + 0x18;
        } while (iVar7 < iVar1);
      }
      if (iVar7 == iVar1) {
        return 0;
      }
      bVar5 = bVar6 >> 4;
      *(uint *)(param_1 + lVar9 * 0xc + 0x8d6) = (uint)bVar5;
      if (bVar5 != 3 && 2 < bVar5) {
        lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        pcVar8 = "bad DC huff";
        goto LAB_14f64c552;
      }
      *(uint *)(lVar9 * 0x60 + 0x46b4 + (longlong)param_1) = bVar6 & 0xf;
      if (3 < (bVar6 & 0xf)) {
        lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        pcVar8 = "bad AC huff";
        goto LAB_14f64c552;
      }
      *(int *)plVar10 = iVar7;
      iVar3 = iVar3 + 1;
      plVar10 = (longlong *)((longlong)plVar10 + 4);
    } while (iVar3 < *(int *)((longlong)param_1 + 0x4854));
  }
  lVar9 = *param_1;
  pbVar2 = *(byte **)(lVar9 + 0xc0);
  if (pbVar2 < *(byte **)(lVar9 + 200)) {
    bVar5 = *pbVar2;
    *(byte **)(lVar9 + 0xc0) = pbVar2 + 1;
  }
  else if (*(int *)(lVar9 + 0x30) == 0) {
    bVar5 = 0;
  }
  else {
    FUN_14f64c730(lVar9);
    bVar5 = **(byte **)(lVar9 + 0xc0);
    *(byte **)(lVar9 + 0xc0) = *(byte **)(lVar9 + 0xc0) + 1;
  }
  lVar9 = *param_1;
  *(uint *)((longlong)param_1 + 0x4834) = (uint)bVar5;
  pbVar2 = *(byte **)(lVar9 + 0xc0);
  if (pbVar2 < *(byte **)(lVar9 + 200)) {
    bVar5 = *pbVar2;
    *(byte **)(lVar9 + 0xc0) = pbVar2 + 1;
  }
  else if (*(int *)(lVar9 + 0x30) == 0) {
    bVar5 = 0;
  }
  else {
    FUN_14f64c730(lVar9);
    bVar5 = **(byte **)(lVar9 + 0xc0);
    *(byte **)(lVar9 + 0xc0) = *(byte **)(lVar9 + 0xc0) + 1;
  }
  lVar9 = *param_1;
  *(uint *)(param_1 + 0x907) = (uint)bVar5;
  pbVar2 = *(byte **)(lVar9 + 0xc0);
  if (pbVar2 < *(byte **)(lVar9 + 200)) {
    bVar5 = *pbVar2;
    *(byte **)(lVar9 + 0xc0) = pbVar2 + 1;
  }
  else if (*(int *)(lVar9 + 0x30) == 0) {
    bVar5 = 0;
  }
  else {
    FUN_14f64c730(lVar9);
    bVar5 = **(byte **)(lVar9 + 0xc0);
    *(byte **)(lVar9 + 0xc0) = *(byte **)(lVar9 + 0xc0) + 1;
  }
  bVar6 = bVar5 >> 4;
  *(uint *)((longlong)param_1 + 0x483c) = (uint)bVar6;
  *(uint *)(param_1 + 0x908) = bVar5 & 0xf;
  if ((int)param_1[0x906] == 0) {
    if (((*(int *)((longlong)param_1 + 0x4834) == 0) && (bVar6 == 0)) && ((bVar5 & 0xf) == 0)) {
      *(undefined4 *)(param_1 + 0x907) = 0x3f;
      return 1;
    }
  }
  else if (((*(int *)((longlong)param_1 + 0x4834) < 0x40) && ((int)param_1[0x907] < 0x40)) &&
          ((*(int *)((longlong)param_1 + 0x4834) <= (int)param_1[0x907] &&
           ((bVar6 < 0xe && ((bVar5 & 0xf) < 0xe)))))) {
    return 1;
  }
  lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pcVar8 = "bad SOS";
LAB_14f64c552:
  *(char **)(lVar9 + 0x9cf0) = pcVar8;
  return 0;
}

// FUN_14f64c730 @ 14f64c730

void FUN_14f64c730(longlong param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  puVar1 = (undefined1 *)(param_1 + 0x38);
  iVar2 = (**(code **)(param_1 + 0x10))
                    (*(undefined8 *)(param_1 + 0x28),puVar1,*(undefined4 *)(param_1 + 0x34));
  *(int *)(param_1 + 0xb8) =
       *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
  *(undefined1 **)(param_1 + 0xc0) = puVar1;
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(longlong *)(param_1 + 200) = param_1 + 0x39;
    *puVar1 = 0;
    return;
  }
  *(longlong *)(param_1 + 200) = param_1 + 0x38 + (longlong)iVar2;
  return;
}

// FUN_14f64c800 @ 14f64c800

byte * FUN_14f64c800(byte *param_1,byte *param_2,undefined8 param_3,int param_4)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  bVar1 = *param_2;
  *param_1 = bVar1;
  if (param_4 != 1) {
    iVar7 = 1;
    lVar6 = (longlong)(param_4 + -1);
    param_1[1] = (byte)(param_2[1] + 2 + (uint)*param_2 + (uint)*param_2 * 2 >> 2);
    if (1 < lVar6) {
      lVar5 = lVar6 + -1;
      iVar7 = (int)lVar5 + 1;
      pbVar4 = param_2;
      pbVar2 = param_1;
      do {
        iVar3 = (uint)pbVar4[1] + (uint)pbVar4[1] * 2;
        pbVar2[2] = (byte)(*pbVar4 + 1 + iVar3 >> 2);
        pbVar2[3] = (byte)(iVar3 + 2 + (uint)pbVar4[2] >> 2);
        lVar5 = lVar5 + -1;
        pbVar4 = pbVar4 + 1;
        pbVar2 = pbVar2 + 2;
      } while (lVar5 != 0);
    }
    param_1[iVar7 * 2] =
         (byte)((uint)param_2[lVar6] + (uint)param_2[lVar6] * 2 + param_2[param_4 + -2] + 1 >> 2);
    param_1[iVar7 * 2 + 1] = param_2[lVar6];
    return param_1;
  }
  param_1[1] = bVar1;
  return param_1;
}

// FUN_14f64c900 @ 14f64c900

undefined1 * FUN_14f64c900(undefined1 *param_1,byte *param_2,byte *param_3,int param_4)

{
  byte bVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined1 uVar6;
  longlong lVar7;
  
  bVar1 = *param_2;
  if (param_4 != 1) {
    iVar3 = (uint)bVar1 + (uint)bVar1 * 2 + (uint)*param_3;
    *param_1 = (char)(iVar3 + 2U >> 2);
    if (1 < (longlong)param_4) {
      lVar7 = (longlong)param_2 - (longlong)param_3;
      lVar5 = (longlong)param_4 + -1;
      iVar4 = iVar3;
      puVar2 = param_1;
      do {
        param_3 = param_3 + 1;
        iVar3 = (uint)param_3[lVar7] + (uint)param_3[lVar7] * 2 + (uint)*param_3;
        puVar2[1] = (char)((uint)(iVar4 * 2 + 7 + iVar3 + iVar4) >> 4);
        puVar2[2] = (char)((uint)(iVar4 + (iVar3 + 4) * 2 + iVar3) >> 4);
        lVar5 = lVar5 + -1;
        iVar4 = iVar3;
        puVar2 = puVar2 + 2;
      } while (lVar5 != 0);
    }
    param_1[param_4 * 2 + -1] = (char)(iVar3 + 1U >> 2);
    return param_1;
  }
  uVar6 = (undefined1)(*param_3 + 2 + (uint)bVar1 + (uint)bVar1 * 2 >> 2);
  param_1[1] = uVar6;
  *param_1 = uVar6;
  return param_1;
}

// FUN_14f64c9e0 @ 14f64c9e0

/* WARNING: Removing unreachable block (ram,0x00014f64cac4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_14f64c9e0(char *param_1,byte *param_2,ulonglong *param_3,int param_4)

{
  byte *pbVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  byte bVar4;
  undefined1 auVar5 [15];
  undefined1 auVar6 [15];
  undefined1 auVar7 [15];
  undefined1 auVar8 [15];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  undefined1 auVar17 [15];
  undefined1 auVar18 [15];
  unkuint9 Var19;
  undefined1 auVar20 [11];
  undefined1 auVar21 [13];
  undefined1 auVar22 [15];
  unkuint9 Var23;
  undefined1 auVar24 [11];
  undefined1 auVar25 [15];
  undefined1 auVar26 [15];
  undefined1 auVar27 [15];
  undefined1 auVar28 [15];
  short sVar29;
  short sVar30;
  short sVar31;
  short sVar32;
  short sVar33;
  short sVar34;
  short sVar35;
  short sVar36;
  short sVar37;
  short sVar38;
  short sVar39;
  short sVar40;
  short sVar41;
  short sVar42;
  short sVar43;
  short sVar44;
  uint uVar45;
  int iVar46;
  int iVar47;
  char cVar48;
  longlong lVar49;
  int iVar50;
  byte *pbVar51;
  ulonglong *puVar52;
  char *pcVar53;
  ulonglong uVar54;
  longlong lVar55;
  ulonglong *puVar56;
  ushort uVar57;
  ushort uVar60;
  ushort uVar61;
  ushort uVar62;
  ushort uVar63;
  ushort uVar64;
  ushort uVar65;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  ushort uVar66;
  undefined1 auVar67 [16];
  ushort uVar68;
  ushort uVar69;
  ushort uVar70;
  ushort uVar71;
  ushort uVar72;
  ushort uVar73;
  ushort uVar74;
  ushort uVar75;
  
  sVar44 = _UNK_15347908e;
  sVar43 = _UNK_15347908c;
  sVar42 = _UNK_15347908a;
  sVar41 = _UNK_153479088;
  sVar40 = _UNK_153479086;
  sVar39 = _UNK_153479084;
  sVar38 = _UNK_153479082;
  sVar37 = ___xmm_00080008000800080008000800080008;
  sVar36 = _UNK_15347907e;
  sVar35 = _UNK_15347907c;
  sVar34 = _UNK_15347907a;
  sVar33 = _UNK_153479078;
  sVar32 = _UNK_153479076;
  sVar31 = _UNK_153479074;
  sVar30 = _UNK_153479072;
  sVar29 = ___xmm_00070007000700070007000700070007;
  iVar50 = 0;
  iVar47 = (uint)*param_2 + (uint)*param_2 * 2;
  if (param_4 == 1) {
    cVar48 = (char)((byte)*param_3 + 2 + iVar47 >> 2);
    param_1[1] = cVar48;
    *param_1 = cVar48;
    return param_1;
  }
  iVar47 = iVar47 + (uint)(byte)*param_3;
  uVar45 = param_4 - 1U & 0xfffffff8;
  if (0 < (int)uVar45) {
    lVar49 = (longlong)param_2 - (longlong)param_3;
    uVar45 = (uVar45 - 1 >> 3) + 1;
    uVar54 = (ulonglong)uVar45;
    iVar50 = uVar45 * 8;
    puVar52 = param_3 + 1;
    puVar56 = param_3;
    pcVar53 = param_1;
    do {
      uVar2 = *(ulonglong *)(lVar49 + (longlong)puVar56);
      uVar3 = *puVar56;
      puVar56 = puVar56 + 1;
      auVar6._8_6_ = 0;
      auVar6._0_8_ = uVar2;
      auVar6[0xe] = (char)(uVar2 >> 0x38);
      auVar8._8_4_ = 0;
      auVar8._0_8_ = uVar2;
      auVar8[0xc] = (char)(uVar2 >> 0x30);
      auVar8._13_2_ = auVar6._13_2_;
      auVar10._8_4_ = 0;
      auVar10._0_8_ = uVar2;
      auVar10._12_3_ = auVar8._12_3_;
      auVar12._8_2_ = 0;
      auVar12._0_8_ = uVar2;
      auVar12[10] = (char)(uVar2 >> 0x28);
      auVar12._11_4_ = auVar10._11_4_;
      auVar14._8_2_ = 0;
      auVar14._0_8_ = uVar2;
      auVar14._10_5_ = auVar12._10_5_;
      auVar16[8] = (char)(uVar2 >> 0x20);
      auVar16._0_8_ = uVar2;
      auVar16._9_6_ = auVar14._9_6_;
      auVar18._7_8_ = 0;
      auVar18._0_7_ = auVar16._8_7_;
      Var19 = CONCAT81(SUB158(auVar18 << 0x40,7),(char)(uVar2 >> 0x18));
      auVar25._9_6_ = 0;
      auVar25._0_9_ = Var19;
      auVar20._1_10_ = SUB1510(auVar25 << 0x30,5);
      auVar20[0] = (char)(uVar2 >> 0x10);
      auVar26._11_4_ = 0;
      auVar26._0_11_ = auVar20;
      auVar21._1_12_ = SUB1512(auVar26 << 0x20,3);
      auVar21[0] = (char)(uVar2 >> 8);
      auVar59._0_2_ = CONCAT11(0,(byte)uVar2);
      auVar59._2_13_ = auVar21;
      auVar59[0xf] = 0;
      auVar5._8_6_ = 0;
      auVar5._0_8_ = uVar3;
      auVar5[0xe] = (char)(uVar3 >> 0x38);
      auVar7._8_4_ = 0;
      auVar7._0_8_ = uVar3;
      auVar7[0xc] = (char)(uVar3 >> 0x30);
      auVar7._13_2_ = auVar5._13_2_;
      auVar9._8_4_ = 0;
      auVar9._0_8_ = uVar3;
      auVar9._12_3_ = auVar7._12_3_;
      auVar11._8_2_ = 0;
      auVar11._0_8_ = uVar3;
      auVar11[10] = (char)(uVar3 >> 0x28);
      auVar11._11_4_ = auVar9._11_4_;
      auVar13._8_2_ = 0;
      auVar13._0_8_ = uVar3;
      auVar13._10_5_ = auVar11._10_5_;
      auVar15[8] = (char)(uVar3 >> 0x20);
      auVar15._0_8_ = uVar3;
      auVar15._9_6_ = auVar13._9_6_;
      auVar22._7_8_ = 0;
      auVar22._0_7_ = auVar15._8_7_;
      Var23 = CONCAT81(SUB158(auVar22 << 0x40,7),(char)(uVar3 >> 0x18));
      auVar27._9_6_ = 0;
      auVar27._0_9_ = Var23;
      auVar24._1_10_ = SUB1510(auVar27 << 0x30,5);
      auVar24[0] = (char)(uVar3 >> 0x10);
      auVar28._11_4_ = 0;
      auVar28._0_11_ = auVar24;
      auVar17[2] = (char)(uVar3 >> 8);
      auVar17._0_2_ = (ushort)uVar3;
      auVar17._3_12_ = SUB1512(auVar28 << 0x20,3);
      auVar58 = psllw(auVar59,2);
      auVar67._0_2_ = (((ushort)uVar3 & 0xff) - auVar59._0_2_) + auVar58._0_2_;
      auVar67._2_2_ = (auVar17._2_2_ - auVar21._0_2_) + auVar58._2_2_;
      auVar67._4_2_ = (auVar24._0_2_ - auVar20._0_2_) + auVar58._4_2_;
      auVar67._6_2_ = ((short)Var23 - (short)Var19) + auVar58._6_2_;
      auVar67._8_2_ = (auVar15._8_2_ - auVar16._8_2_) + auVar58._8_2_;
      auVar67._10_2_ = (auVar11._10_2_ - auVar12._10_2_) + auVar58._10_2_;
      auVar67._12_2_ = (auVar7._12_2_ - auVar8._12_2_) + auVar58._12_2_;
      auVar67._14_2_ = ((auVar5._13_2_ >> 8) - (auVar6._13_2_ >> 8)) + auVar58._14_2_;
      auVar59 = psllw(auVar67,2);
      uVar57 = (ushort)(((short)iVar47 - auVar67._0_2_) + auVar59._0_2_ + sVar37) >> 4;
      uVar60 = (ushort)((auVar67._2_2_ - auVar67._0_2_) + auVar59._0_2_ + sVar29) >> 4;
      uVar61 = (ushort)((auVar67._0_2_ - auVar67._2_2_) + auVar59._2_2_ + sVar38) >> 4;
      uVar62 = (ushort)((auVar67._4_2_ - auVar67._2_2_) + auVar59._2_2_ + sVar30) >> 4;
      uVar63 = (ushort)((auVar67._2_2_ - auVar67._4_2_) + auVar59._4_2_ + sVar39) >> 4;
      uVar64 = (ushort)((auVar67._6_2_ - auVar67._4_2_) + auVar59._4_2_ + sVar31) >> 4;
      uVar65 = (ushort)((auVar67._4_2_ - auVar67._6_2_) + auVar59._6_2_ + sVar40) >> 4;
      uVar66 = (ushort)((auVar67._8_2_ - auVar67._6_2_) + auVar59._6_2_ + sVar32) >> 4;
      uVar68 = (ushort)((auVar67._6_2_ - auVar67._8_2_) + auVar59._8_2_ + sVar41) >> 4;
      uVar69 = (ushort)((auVar67._10_2_ - auVar67._8_2_) + auVar59._8_2_ + sVar33) >> 4;
      uVar70 = (ushort)((auVar67._8_2_ - auVar67._10_2_) + auVar59._10_2_ + sVar42) >> 4;
      uVar71 = (ushort)((auVar67._12_2_ - auVar67._10_2_) + auVar59._10_2_ + sVar34) >> 4;
      uVar72 = (ushort)((auVar67._10_2_ - auVar67._12_2_) + auVar59._12_2_ + sVar43) >> 4;
      uVar73 = (ushort)((auVar67._14_2_ - auVar67._12_2_) + auVar59._12_2_ + sVar35) >> 4;
      uVar74 = (ushort)((auVar67._12_2_ - auVar67._14_2_) + auVar59._14_2_ + sVar44) >> 4;
      uVar75 = (ushort)((((ushort)*(byte *)(lVar49 + (longlong)puVar52) +
                          (ushort)*(byte *)(lVar49 + (longlong)puVar52) * 2 + (ushort)(byte)*puVar52
                         ) - auVar67._14_2_) + auVar59._14_2_ + sVar36) >> 4;
      *pcVar53 = (uVar57 != 0) * (uVar57 < 0x100) * (char)uVar57 - (0xff < uVar57);
      pcVar53[1] = (uVar60 != 0) * (uVar60 < 0x100) * (char)uVar60 - (0xff < uVar60);
      pcVar53[2] = (uVar61 != 0) * (uVar61 < 0x100) * (char)uVar61 - (0xff < uVar61);
      pcVar53[3] = (uVar62 != 0) * (uVar62 < 0x100) * (char)uVar62 - (0xff < uVar62);
      pcVar53[4] = (uVar63 != 0) * (uVar63 < 0x100) * (char)uVar63 - (0xff < uVar63);
      pcVar53[5] = (uVar64 != 0) * (uVar64 < 0x100) * (char)uVar64 - (0xff < uVar64);
      pcVar53[6] = (uVar65 != 0) * (uVar65 < 0x100) * (char)uVar65 - (0xff < uVar65);
      pcVar53[7] = (uVar66 != 0) * (uVar66 < 0x100) * (char)uVar66 - (0xff < uVar66);
      pcVar53[8] = (uVar68 != 0) * (uVar68 < 0x100) * (char)uVar68 - (0xff < uVar68);
      pcVar53[9] = (uVar69 != 0) * (uVar69 < 0x100) * (char)uVar69 - (0xff < uVar69);
      pcVar53[10] = (uVar70 != 0) * (uVar70 < 0x100) * (char)uVar70 - (0xff < uVar70);
      pcVar53[0xb] = (uVar71 != 0) * (uVar71 < 0x100) * (char)uVar71 - (0xff < uVar71);
      pcVar53[0xc] = (uVar72 != 0) * (uVar72 < 0x100) * (char)uVar72 - (0xff < uVar72);
      pcVar53[0xd] = (uVar73 != 0) * (uVar73 < 0x100) * (char)uVar73 - (0xff < uVar73);
      pcVar53[0xe] = (uVar74 != 0) * (uVar74 < 0x100) * (char)uVar74 - (0xff < uVar74);
      pcVar53[0xf] = (uVar75 != 0) * (uVar75 < 0x100) * (char)uVar75 - (0xff < uVar75);
      bVar4 = *(byte *)(lVar49 + -9 + (longlong)(puVar52 + 1));
      iVar47 = (uint)bVar4 + (uint)bVar4 * 2 + (uint)*(byte *)((longlong)puVar52 + -1);
      uVar54 = uVar54 - 1;
      puVar52 = puVar52 + 1;
      pcVar53 = pcVar53 + 0x10;
    } while (uVar54 != 0);
  }
  iVar46 = (uint)param_2[iVar50] + (uint)param_2[iVar50] * 2 +
           (uint)*(byte *)((longlong)iVar50 + (longlong)param_3);
  param_1[iVar50 * 2] = (char)((uint)(iVar47 + 8 + iVar46 * 3) >> 4);
  lVar49 = (longlong)(iVar50 + 1);
  if (lVar49 < param_4) {
    pbVar51 = (byte *)(lVar49 + (longlong)param_3);
    lVar55 = param_4 - lVar49;
    pcVar53 = param_1 + lVar49 * 2;
    iVar50 = iVar46;
    do {
      bVar4 = *pbVar51;
      pbVar1 = pbVar51 + ((longlong)param_2 - (longlong)param_3);
      pbVar51 = pbVar51 + 1;
      iVar46 = (uint)*pbVar1 + (uint)*pbVar1 * 2 + (uint)bVar4;
      pcVar53[-1] = (char)((uint)(iVar50 * 2 + 7 + iVar46 + iVar50) >> 4);
      *pcVar53 = (char)((uint)(iVar50 + (iVar46 + 4) * 2 + iVar46) >> 4);
      lVar55 = lVar55 + -1;
      pcVar53 = pcVar53 + 2;
      iVar50 = iVar46;
    } while (lVar55 != 0);
  }
  param_1[param_4 * 2 + -1] = (char)(iVar46 + 1U >> 2);
  return param_1;
}

// FUN_14f64cc00 @ 14f64cc00

longlong FUN_14f64cc00(longlong param_1,byte *param_2,byte *param_3,int param_4)

{
  byte bVar1;
  byte *pbVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = (longlong)param_4;
  if (param_2 < param_3) {
    if (0 < param_4) {
      lVar5 = (longlong)param_2 - (longlong)param_3;
      lVar3 = param_1 - (longlong)param_3;
      do {
        pbVar2 = param_3 + lVar5;
        bVar1 = *param_3;
        param_3 = param_3 + 1;
        param_3[lVar3 + -1] = (byte)(bVar1 + 2 + (uint)*pbVar2 + (uint)*pbVar2 * 2 >> 2);
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      return param_1;
    }
  }
  else if (0 < param_4) {
    pbVar2 = param_3;
    do {
      pbVar2[param_1 - (longlong)param_3] =
           (byte)(*pbVar2 + 1 +
                  (uint)pbVar2[(longlong)param_2 - (longlong)param_3] +
                  (uint)pbVar2[(longlong)param_2 - (longlong)param_3] * 2 >> 2);
      lVar4 = lVar4 + -1;
      pbVar2 = pbVar2 + 1;
    } while (lVar4 != 0);
  }
  return param_1;
}

// FUN_14f64ccb0 @ 14f64ccb0

/* WARNING: Removing unreachable block (ram,0x00014f64ccea) */

code * FUN_14f64ccb0(longlong param_1)

{
  uint *puVar1;
  code *pcVar2;
  
  *(code **)(param_1 + 0x4870) = FUN_14f6487f0;
  *(code **)(param_1 + 0x4878) = FUN_14f647790;
  *(code **)(param_1 + 0x4880) = FUN_14f64c900;
  puVar1 = (uint *)cpuid_Version_info(1);
  pcVar2 = (code *)(ulonglong)*puVar1;
  if ((puVar1[2] >> 0x1a & 1) != 0) {
    *(code **)(param_1 + 0x4870) = FUN_14f648c70;
    *(code **)(param_1 + 0x4878) = FUN_14f6478b0;
    pcVar2 = FUN_14f64c9e0;
    *(code **)(param_1 + 0x4880) = FUN_14f64c9e0;
  }
  return pcVar2;
}

// FUN_14f64cd30 @ 14f64cd30

void FUN_14f64cd30(longlong param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    if (param_2 < 0) {
      *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 200);
      return;
    }
    if ((*(longlong *)(param_1 + 0x10) != 0) &&
       (iVar1 = *(int *)(param_1 + 200) - *(int *)(param_1 + 0xc0), iVar1 < param_2)) {
      *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 200);
                    /* WARNING: Could not recover jumptable at 0x00014f64cd74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x28),param_2 - iVar1);
      return;
    }
    *(longlong *)(param_1 + 0xc0) = *(longlong *)(param_1 + 0xc0) + (longlong)param_2;
  }
  return;
}

// FUN_14f64cd90 @ 14f64cd90

char FUN_14f64cd90(longlong *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  char *pcVar4;
  char cVar5;
  
LAB_14f64cdb0:
  lVar2 = *param_1;
  if (*(longlong *)(lVar2 + 0x10) == 0) {
LAB_14f64cdcd:
    if (*(ulonglong *)(lVar2 + 200) <= *(ulonglong *)(lVar2 + 0xc0)) {
      return -1;
    }
  }
  else {
    iVar3 = (**(code **)(lVar2 + 0x20))(*(undefined8 *)(lVar2 + 0x28));
    if (iVar3 != 0) {
      if (*(int *)(lVar2 + 0x30) == 0) {
        return -1;
      }
      goto LAB_14f64cdcd;
    }
  }
  lVar2 = *param_1;
  pcVar4 = *(char **)(lVar2 + 0xc0);
  if (*(char **)(lVar2 + 200) <= pcVar4) goto code_r0x00014f64cdfb;
  goto LAB_14f64ce59;
code_r0x00014f64cdfb:
  if (*(int *)(lVar2 + 0x30) != 0) {
    puVar1 = (undefined1 *)(lVar2 + 0x38);
    iVar3 = (**(code **)(lVar2 + 0x10))
                      (*(undefined8 *)(lVar2 + 0x28),puVar1,*(undefined4 *)(lVar2 + 0x34));
    *(int *)(lVar2 + 0xb8) =
         *(int *)(lVar2 + 0xb8) + (*(int *)(lVar2 + 0xc0) - *(int *)(lVar2 + 0xd0));
    *(undefined1 **)(lVar2 + 0xc0) = puVar1;
    if (iVar3 == 0) {
      *(undefined4 *)(lVar2 + 0x30) = 0;
      *(longlong *)(lVar2 + 200) = lVar2 + 0x39;
      *puVar1 = 0;
    }
    else {
      *(longlong *)(lVar2 + 200) = lVar2 + 0x38 + (longlong)iVar3;
    }
    pcVar4 = *(char **)(lVar2 + 0xc0);
LAB_14f64ce59:
    cVar5 = *pcVar4;
    *(char **)(lVar2 + 0xc0) = pcVar4 + 1;
    if (cVar5 == -1) {
      do {
        lVar2 = *param_1;
        if (*(longlong *)(lVar2 + 0x10) == 0) {
LAB_14f64ce8d:
          if (*(ulonglong *)(lVar2 + 200) <= *(ulonglong *)(lVar2 + 0xc0)) {
            return -1;
          }
        }
        else {
          iVar3 = (**(code **)(lVar2 + 0x20))();
          if (iVar3 != 0) {
            if (*(int *)(lVar2 + 0x30) == 0) {
              return -1;
            }
            goto LAB_14f64ce8d;
          }
        }
        lVar2 = *param_1;
        pcVar4 = *(char **)(lVar2 + 0xc0);
        if (pcVar4 < *(char **)(lVar2 + 200)) {
          cVar5 = *pcVar4;
          *(char **)(lVar2 + 0xc0) = pcVar4 + 1;
        }
        else if (*(int *)(lVar2 + 0x30) == 0) {
          cVar5 = '\0';
        }
        else {
          puVar1 = (undefined1 *)(lVar2 + 0x38);
          iVar3 = (**(code **)(lVar2 + 0x10))
                            (*(undefined8 *)(lVar2 + 0x28),puVar1,*(undefined4 *)(lVar2 + 0x34));
          *(int *)(lVar2 + 0xb8) =
               *(int *)(lVar2 + 0xb8) + (*(int *)(lVar2 + 0xc0) - *(int *)(lVar2 + 0xd0));
          *(undefined1 **)(lVar2 + 0xc0) = puVar1;
          if (iVar3 == 0) {
            *(undefined4 *)(lVar2 + 0x30) = 0;
            *(longlong *)(lVar2 + 200) = lVar2 + 0x39;
            *puVar1 = 0;
          }
          else {
            *(longlong *)(lVar2 + 200) = lVar2 + 0x38 + (longlong)iVar3;
          }
          cVar5 = **(char **)(lVar2 + 0xc0);
          *(char **)(lVar2 + 0xc0) = *(char **)(lVar2 + 0xc0) + 1;
        }
        if (cVar5 == '\0') break;
        if (cVar5 != -1) {
          return cVar5;
        }
      } while( true );
    }
  }
  goto LAB_14f64cdb0;
}

// FUN_14f64cf80 @ 14f64cf80

/* WARNING: Removing unreachable block (ram,0x00014f64cf8d) */

uint FUN_14f64cf80(void)

{
  longlong lVar1;
  
  lVar1 = cpuid_Version_info(1);
  return *(int *)(lVar1 + 8) >> 0x1a & 1;
}

// uej__idct_fast_block @ 14f64cff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void uej__idct_fast_block(longlong param_1,int param_2,longlong param_3)

{
  int iVar1;
  undefined1 *puVar2;
  short sVar3;
  undefined1 uVar4;
  uint uVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  int iVar10;
  short sVar11;
  uint uVar12;
  short sVar13;
  int iVar14;
  short *psVar15;
  short sVar16;
  int *piVar17;
  short sVar18;
  bool bVar19;
  undefined1 local_168 [8];
  longlong local_160;
  longlong local_158;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  int local_138;
  int local_134;
  int local_130;
  int local_12c [9];
  int local_108 [8];
  int local_e8 [8];
  int local_c8 [8];
  int local_a8 [8];
  int local_88 [8];
  int local_68 [8];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)local_168;
  piVar17 = local_12c;
  psVar15 = (short *)(param_3 + 0x60);
  local_158 = 8;
  local_160 = 8;
  do {
    piVar17 = piVar17 + 1;
    sVar11 = psVar15[-0x28];
    if (((((sVar11 == 0) && (psVar15[-0x20] == 0)) && (psVar15[-0x18] == 0)) &&
        ((psVar15[-0x10] == 0 && (psVar15[-8] == 0)))) && ((*psVar15 == 0 && (psVar15[8] == 0)))) {
      iVar1 = (int)psVar15[-0x30];
      piVar17[0x30] = iVar1;
      piVar17[0x28] = iVar1;
      piVar17[0x20] = iVar1;
      piVar17[0x10] = iVar1;
      piVar17[8] = iVar1;
      *piVar17 = iVar1;
      piVar17[-8] = iVar1;
    }
    else {
      sVar18 = psVar15[-0x10] + psVar15[-0x30];
      sVar7 = psVar15[-0x30] - psVar15[-0x10];
      sVar16 = *psVar15 + psVar15[-0x20];
      sVar3 = psVar15[-8] + psVar15[-0x18];
      sVar9 = (short)((uint)(((int)psVar15[-0x20] - (int)*psVar15) * 0x16a) >> 8) - sVar16;
      sVar6 = psVar15[8] + sVar11;
      iVar1 = (int)(short)(psVar15[-8] - psVar15[-0x18]);
      iVar10 = (int)(short)(sVar11 - psVar15[8]);
      sVar11 = sVar3 + sVar6;
      iVar14 = (int)(short)(sVar18 + sVar16);
      sVar8 = (short)((uint)((iVar1 + iVar10) * 0x1d9) >> 8);
      sVar13 = ((short)((uint)(iVar1 * -0x29d) >> 8) - sVar11) + sVar8;
      piVar17[-8] = iVar14 + sVar11;
      piVar17[0x30] = iVar14 - sVar11;
      iVar1 = (int)(short)(sVar9 + sVar7);
      sVar11 = (short)((uint)(((int)sVar6 - (int)sVar3) * 0x16a) >> 8) - sVar13;
      *piVar17 = iVar1 + sVar13;
      piVar17[0x28] = iVar1 - sVar13;
      iVar1 = (int)(short)(sVar7 - sVar9);
      piVar17[8] = iVar1 + sVar11;
      piVar17[0x20] = iVar1 - sVar11;
      iVar14 = (int)(short)(sVar18 - sVar16);
      iVar10 = (int)(short)(((short)((uint)(iVar10 * 0x115) >> 8) - sVar8) + sVar11);
      iVar1 = iVar14 + iVar10;
      piVar17[0x10] = iVar14 - iVar10;
    }
    piVar17[0x18] = iVar1;
    psVar15 = psVar15 + 1;
    local_160 = local_160 + -1;
  } while (local_160 != 0);
  piVar17 = &local_130;
  puVar2 = (undefined1 *)(param_1 + 1);
  do {
    if ((((piVar17[-5] == 0) && (piVar17[-4] == 0)) &&
        ((piVar17[-3] == 0 && (((piVar17[-2] == 0 && (piVar17[-1] == 0)) && (*piVar17 == 0)))))) &&
       (piVar17[1] == 0)) {
      uVar5 = (piVar17[-6] >> 5) + 0x80;
      uVar12 = uVar5;
      if ((0xff < uVar5) && (uVar12 = 0xff, (int)uVar5 < 0)) {
        uVar12 = 0;
      }
      uVar4 = (undefined1)uVar12;
      puVar2[6] = uVar4;
      puVar2[5] = uVar4;
      puVar2[4] = uVar4;
      puVar2[3] = uVar4;
      puVar2[1] = uVar4;
      *puVar2 = uVar4;
      puVar2[-1] = uVar4;
    }
    else {
      sVar18 = (short)piVar17[-2] + (short)piVar17[-6];
      sVar8 = (short)piVar17[-6] - (short)piVar17[-2];
      sVar11 = (short)*piVar17 + (short)piVar17[-4];
      sVar3 = (short)((uint)(((int)(short)piVar17[-4] - (int)(short)*piVar17) * 0x16a) >> 8) -
              sVar11;
      sVar6 = (short)piVar17[-1] + (short)piVar17[-3];
      sVar16 = (short)piVar17[1] + (short)piVar17[-5];
      sVar7 = sVar6 + sVar16;
      iVar14 = (int)(short)((short)piVar17[-5] - (short)piVar17[1]);
      iVar1 = (int)(short)((short)piVar17[-1] - (short)piVar17[-3]);
      sVar9 = (short)((uint)((iVar1 + iVar14) * 0x1d9) >> 8);
      sVar13 = ((short)((uint)(iVar1 * -0x29d) >> 8) - sVar7) + sVar9;
      iVar1 = (int)(short)(sVar18 + sVar11);
      sVar6 = (short)((uint)(((int)sVar16 - (int)sVar6) * 0x16a) >> 8) - sVar13;
      uVar12 = (iVar1 + sVar7 >> 5) + 0x80;
      if ((0xff < uVar12) && (bVar19 = (int)uVar12 < 0, uVar12 = 0xff, bVar19)) {
        uVar12 = 0;
      }
      puVar2[-1] = (char)uVar12;
      uVar12 = (iVar1 - sVar7 >> 5) + 0x80;
      if ((0xff < uVar12) && (bVar19 = (int)uVar12 < 0, uVar12 = 0xff, bVar19)) {
        uVar12 = 0;
      }
      puVar2[6] = (char)uVar12;
      iVar1 = (int)(short)(sVar3 + sVar8);
      uVar12 = (iVar1 + sVar13 >> 5) + 0x80;
      if ((0xff < uVar12) && (bVar19 = (int)uVar12 < 0, uVar12 = 0xff, bVar19)) {
        uVar12 = 0;
      }
      *puVar2 = (char)uVar12;
      uVar12 = (iVar1 - sVar13 >> 5) + 0x80;
      if ((0xff < uVar12) && (bVar19 = (int)uVar12 < 0, uVar12 = 0xff, bVar19)) {
        uVar12 = 0;
      }
      puVar2[5] = (char)uVar12;
      iVar1 = (int)(short)(sVar8 - sVar3);
      uVar12 = (iVar1 + sVar6 >> 5) + 0x80;
      if ((0xff < uVar12) && (bVar19 = (int)uVar12 < 0, uVar12 = 0xff, bVar19)) {
        uVar12 = 0;
      }
      puVar2[1] = (char)uVar12;
      uVar12 = (iVar1 - sVar6 >> 5) + 0x80;
      if ((0xff < uVar12) && (bVar19 = (int)uVar12 < 0, uVar12 = 0xff, bVar19)) {
        uVar12 = 0;
      }
      puVar2[4] = (char)uVar12;
      iVar1 = (int)(short)(sVar18 - sVar11);
      iVar14 = (int)(short)(((short)((uint)(iVar14 * 0x115) >> 8) - sVar9) + sVar6);
      uVar12 = (iVar1 + iVar14 >> 5) + 0x80;
      if ((0xff < uVar12) && (bVar19 = (int)uVar12 < 0, uVar12 = 0xff, bVar19)) {
        uVar12 = 0;
      }
      puVar2[3] = (char)uVar12;
      uVar12 = (iVar1 - iVar14 >> 5) + 0x80;
      if ((0xff < uVar12) && (bVar19 = (int)uVar12 < 0, uVar12 = 0xff, bVar19)) {
        uVar12 = 0;
      }
    }
    puVar2[2] = (char)uVar12;
    piVar17 = piVar17 + 8;
    puVar2 = puVar2 + param_2;
    local_158 = local_158 + -1;
  } while (local_158 != 0);
  return;
}

// uej__idct_fast_block_simd @ 14f64d4a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void uej__idct_fast_block_simd(char *param_1,int param_2,short *param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  undefined1 auVar18 [16];
  short sVar26;
  undefined1 auVar19 [16];
  short sVar27;
  short sVar29;
  short sVar30;
  short sVar31;
  short sVar32;
  short sVar33;
  short sVar34;
  short sVar35;
  undefined1 auVar28 [16];
  short sVar38;
  short sVar39;
  short sVar40;
  short sVar41;
  short sVar42;
  undefined1 auVar36 [16];
  short sVar43;
  undefined1 auVar37 [16];
  short sVar44;
  short sVar48;
  short sVar49;
  short sVar50;
  short sVar51;
  short sVar52;
  short sVar53;
  short sVar54;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  short sVar58;
  short sVar59;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  short sVar60;
  short sVar61;
  short sVar64;
  short sVar65;
  short sVar66;
  short sVar67;
  short sVar68;
  short sVar69;
  short sVar70;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  short sVar71;
  short sVar73;
  short sVar74;
  short sVar75;
  short sVar76;
  short sVar77;
  short sVar78;
  short sVar79;
  undefined1 auVar72 [16];
  short sVar80;
  short sVar81;
  short sVar82;
  short sVar83;
  short sVar84;
  short sVar85;
  short sVar86;
  short sVar87;
  short sVar88;
  short sVar90;
  short sVar91;
  short sVar92;
  short sVar93;
  short sVar94;
  short sVar95;
  short sVar96;
  short sVar97;
  short sVar98;
  short sVar99;
  short sVar100;
  short sVar101;
  short sVar102;
  short sVar103;
  undefined1 auVar89 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  
  auVar36._0_2_ = param_3[0x28] - param_3[0x18];
  auVar36._2_2_ = param_3[0x29] - param_3[0x19];
  auVar36._4_2_ = param_3[0x2a] - param_3[0x1a];
  auVar36._6_2_ = param_3[0x2b] - param_3[0x1b];
  auVar36._8_2_ = param_3[0x2c] - param_3[0x1c];
  auVar36._10_2_ = param_3[0x2d] - param_3[0x1d];
  auVar36._12_2_ = param_3[0x2e] - param_3[0x1e];
  auVar36._14_2_ = param_3[0x2f] - param_3[0x1f];
  sVar1 = param_3[0x30] + param_3[0x10];
  sVar2 = param_3[0x31] + param_3[0x11];
  sVar3 = param_3[0x32] + param_3[0x12];
  sVar4 = param_3[0x33] + param_3[0x13];
  sVar5 = param_3[0x34] + param_3[0x14];
  sVar6 = param_3[0x35] + param_3[0x15];
  sVar7 = param_3[0x36] + param_3[0x16];
  sVar8 = param_3[0x37] + param_3[0x17];
  auVar47._0_2_ = param_3[0x10] - param_3[0x30];
  auVar47._2_2_ = param_3[0x11] - param_3[0x31];
  auVar47._4_2_ = param_3[0x12] - param_3[0x32];
  auVar47._6_2_ = param_3[0x13] - param_3[0x33];
  auVar47._8_2_ = param_3[0x14] - param_3[0x34];
  auVar47._10_2_ = param_3[0x15] - param_3[0x35];
  auVar47._12_2_ = param_3[0x16] - param_3[0x36];
  auVar47._14_2_ = param_3[0x17] - param_3[0x37];
  sVar9 = param_3[0x28] + param_3[0x18];
  sVar10 = param_3[0x29] + param_3[0x19];
  sVar11 = param_3[0x2a] + param_3[0x1a];
  sVar12 = param_3[0x2b] + param_3[0x1b];
  sVar13 = param_3[0x2c] + param_3[0x1c];
  sVar14 = param_3[0x2d] + param_3[0x1d];
  sVar15 = param_3[0x2e] + param_3[0x1e];
  sVar16 = param_3[0x2f] + param_3[0x1f];
  auVar18 = psllw(auVar47,2);
  auVar18 = pmulhw(auVar18,___xmm_5a805a805a805a805a805a805a805a80);
  sVar27 = param_3[0x38] + param_3[8];
  sVar29 = param_3[0x39] + param_3[9];
  sVar30 = param_3[0x3a] + param_3[10];
  sVar31 = param_3[0x3b] + param_3[0xb];
  sVar32 = param_3[0x3c] + param_3[0xc];
  sVar33 = param_3[0x3d] + param_3[0xd];
  sVar34 = param_3[0x3e] + param_3[0xe];
  sVar35 = param_3[0x3f] + param_3[0xf];
  auVar55._0_2_ = param_3[8] - param_3[0x38];
  auVar55._2_2_ = param_3[9] - param_3[0x39];
  auVar55._4_2_ = param_3[10] - param_3[0x3a];
  auVar55._6_2_ = param_3[0xb] - param_3[0x3b];
  auVar55._8_2_ = param_3[0xc] - param_3[0x3c];
  auVar55._10_2_ = param_3[0xd] - param_3[0x3d];
  auVar55._12_2_ = param_3[0xe] - param_3[0x3e];
  auVar55._14_2_ = param_3[0xf] - param_3[0x3f];
  sVar17 = auVar18._0_2_ - sVar1;
  sVar20 = auVar18._2_2_ - sVar2;
  sVar21 = auVar18._4_2_ - sVar3;
  sVar22 = auVar18._6_2_ - sVar4;
  sVar23 = auVar18._8_2_ - sVar5;
  sVar24 = auVar18._10_2_ - sVar6;
  sVar25 = auVar18._12_2_ - sVar7;
  sVar26 = auVar18._14_2_ - sVar8;
  sVar87 = param_3[0x20] + *param_3;
  sVar90 = param_3[0x21] + param_3[1];
  sVar92 = param_3[0x22] + param_3[2];
  sVar94 = param_3[0x23] + param_3[3];
  sVar96 = param_3[0x24] + param_3[4];
  sVar98 = param_3[0x25] + param_3[5];
  sVar100 = param_3[0x26] + param_3[6];
  sVar102 = param_3[0x27] + param_3[7];
  auVar106._0_2_ = sVar27 - sVar9;
  auVar106._2_2_ = sVar29 - sVar10;
  auVar106._4_2_ = sVar30 - sVar11;
  auVar106._6_2_ = sVar31 - sVar12;
  auVar106._8_2_ = sVar32 - sVar13;
  auVar106._10_2_ = sVar33 - sVar14;
  auVar106._12_2_ = sVar34 - sVar15;
  auVar106._14_2_ = sVar35 - sVar16;
  sVar71 = *param_3 - param_3[0x20];
  sVar73 = param_3[1] - param_3[0x21];
  sVar74 = param_3[2] - param_3[0x22];
  sVar75 = param_3[3] - param_3[0x23];
  sVar76 = param_3[4] - param_3[0x24];
  sVar77 = param_3[5] - param_3[0x25];
  sVar78 = param_3[6] - param_3[0x26];
  sVar79 = param_3[7] - param_3[0x27];
  sVar61 = sVar1 + sVar87;
  sVar64 = sVar2 + sVar90;
  sVar65 = sVar3 + sVar92;
  sVar66 = sVar4 + sVar94;
  sVar67 = sVar5 + sVar96;
  sVar68 = sVar6 + sVar98;
  sVar69 = sVar7 + sVar100;
  sVar70 = sVar8 + sVar102;
  sVar87 = sVar87 - sVar1;
  sVar90 = sVar90 - sVar2;
  sVar92 = sVar92 - sVar3;
  sVar94 = sVar94 - sVar4;
  sVar96 = sVar96 - sVar5;
  sVar98 = sVar98 - sVar6;
  sVar100 = sVar100 - sVar7;
  sVar102 = sVar102 - sVar8;
  auVar18 = psllw(auVar106,2);
  auVar28 = pmulhw(auVar18,___xmm_5a805a805a805a805a805a805a805a80);
  auVar18._0_2_ = auVar55._0_2_ + auVar36._0_2_;
  auVar18._2_2_ = auVar55._2_2_ + auVar36._2_2_;
  auVar18._4_2_ = auVar55._4_2_ + auVar36._4_2_;
  auVar18._6_2_ = auVar55._6_2_ + auVar36._6_2_;
  auVar18._8_2_ = auVar55._8_2_ + auVar36._8_2_;
  auVar18._10_2_ = auVar55._10_2_ + auVar36._10_2_;
  auVar18._12_2_ = auVar55._12_2_ + auVar36._12_2_;
  auVar18._14_2_ = auVar55._14_2_ + auVar36._14_2_;
  auVar56 = psllw(auVar55,2);
  auVar57 = pmulhw(auVar56,___xmm_45404540454045404540454045404540);
  sVar27 = sVar27 + sVar9;
  sVar29 = sVar29 + sVar10;
  sVar30 = sVar30 + sVar11;
  sVar31 = sVar31 + sVar12;
  sVar32 = sVar32 + sVar13;
  sVar33 = sVar33 + sVar14;
  sVar34 = sVar34 + sVar15;
  sVar35 = sVar35 + sVar16;
  auVar18 = psllw(auVar18,2);
  sVar44 = sVar17 + sVar71;
  sVar48 = sVar20 + sVar73;
  sVar49 = sVar21 + sVar74;
  sVar50 = sVar22 + sVar75;
  sVar51 = sVar23 + sVar76;
  sVar52 = sVar24 + sVar77;
  sVar53 = sVar25 + sVar78;
  sVar54 = sVar26 + sVar79;
  auVar18 = pmulhw(auVar18,___xmm_76407640764076407640764076407640);
  sVar71 = sVar71 - sVar17;
  sVar73 = sVar73 - sVar20;
  sVar74 = sVar74 - sVar21;
  sVar75 = sVar75 - sVar22;
  sVar76 = sVar76 - sVar23;
  sVar77 = sVar77 - sVar24;
  sVar78 = sVar78 - sVar25;
  sVar79 = sVar79 - sVar26;
  auVar56 = psllw(auVar36,2);
  sVar80 = sVar27 + sVar61;
  sVar81 = sVar29 + sVar64;
  sVar82 = sVar30 + sVar65;
  sVar83 = sVar31 + sVar66;
  sVar84 = sVar32 + sVar67;
  sVar9 = sVar33 + sVar68;
  sVar85 = sVar34 + sVar69;
  sVar86 = sVar35 + sVar70;
  auVar56 = pmulhw(auVar56,___xmm_98c098c098c098c098c098c098c098c0);
  sVar61 = sVar61 - sVar27;
  sVar64 = sVar64 - sVar29;
  sVar65 = sVar65 - sVar30;
  sVar66 = sVar66 - sVar31;
  sVar67 = sVar67 - sVar32;
  sVar68 = sVar68 - sVar33;
  sVar69 = sVar69 - sVar34;
  sVar70 = sVar70 - sVar35;
  sVar27 = ((auVar56._0_2_ - auVar36._0_2_) + auVar18._0_2_) - sVar27;
  sVar29 = ((auVar56._2_2_ - auVar36._2_2_) + auVar18._2_2_) - sVar29;
  sVar30 = ((auVar56._4_2_ - auVar36._4_2_) + auVar18._4_2_) - sVar30;
  sVar31 = ((auVar56._6_2_ - auVar36._6_2_) + auVar18._6_2_) - sVar31;
  sVar32 = ((auVar56._8_2_ - auVar36._8_2_) + auVar18._8_2_) - sVar32;
  sVar33 = ((auVar56._10_2_ - auVar36._10_2_) + auVar18._10_2_) - sVar33;
  sVar34 = ((auVar56._12_2_ - auVar36._12_2_) + auVar18._12_2_) - sVar34;
  sVar35 = ((auVar56._14_2_ - auVar36._14_2_) + auVar18._14_2_) - sVar35;
  sVar12 = auVar28._0_2_ - sVar27;
  sVar14 = auVar28._2_2_ - sVar29;
  sVar15 = auVar28._4_2_ - sVar30;
  sVar16 = auVar28._6_2_ - sVar31;
  sVar17 = auVar28._8_2_ - sVar32;
  sVar23 = auVar28._10_2_ - sVar33;
  sVar24 = auVar28._12_2_ - sVar34;
  sVar25 = auVar28._14_2_ - sVar35;
  sVar10 = (auVar57._0_2_ - auVar18._0_2_) + sVar12;
  sVar13 = (auVar57._2_2_ - auVar18._2_2_) + sVar14;
  sVar20 = (auVar57._4_2_ - auVar18._4_2_) + sVar15;
  sVar21 = (auVar57._6_2_ - auVar18._6_2_) + sVar16;
  sVar22 = (auVar57._8_2_ - auVar18._8_2_) + sVar17;
  sVar58 = (auVar57._10_2_ - auVar18._10_2_) + sVar23;
  sVar59 = (auVar57._12_2_ - auVar18._12_2_) + sVar24;
  sVar60 = (auVar57._14_2_ - auVar18._14_2_) + sVar25;
  sVar26 = sVar27 + sVar44;
  sVar38 = sVar29 + sVar48;
  sVar39 = sVar30 + sVar49;
  sVar40 = sVar31 + sVar50;
  sVar41 = sVar32 + sVar51;
  sVar11 = sVar33 + sVar52;
  sVar42 = sVar34 + sVar53;
  sVar43 = sVar35 + sVar54;
  sVar44 = sVar44 - sVar27;
  sVar48 = sVar48 - sVar29;
  sVar49 = sVar49 - sVar30;
  sVar50 = sVar50 - sVar31;
  sVar51 = sVar51 - sVar32;
  sVar52 = sVar52 - sVar33;
  sVar53 = sVar53 - sVar34;
  sVar54 = sVar54 - sVar35;
  sVar1 = sVar10 + sVar87;
  sVar2 = sVar13 + sVar90;
  sVar3 = sVar20 + sVar92;
  sVar4 = sVar21 + sVar94;
  sVar5 = sVar22 + sVar96;
  sVar6 = sVar58 + sVar98;
  sVar7 = sVar59 + sVar100;
  sVar8 = sVar60 + sVar102;
  sVar87 = sVar87 - sVar10;
  sVar90 = sVar90 - sVar13;
  sVar92 = sVar92 - sVar20;
  sVar94 = sVar94 - sVar21;
  sVar96 = sVar96 - sVar22;
  sVar98 = sVar98 - sVar58;
  sVar100 = sVar100 - sVar59;
  sVar102 = sVar102 - sVar60;
  sVar20 = sVar12 + sVar71;
  sVar29 = sVar14 + sVar73;
  sVar21 = sVar15 + sVar74;
  sVar30 = sVar16 + sVar75;
  sVar10 = sVar17 + sVar76;
  sVar13 = sVar23 + sVar77;
  sVar22 = sVar24 + sVar78;
  sVar31 = sVar25 + sVar79;
  sVar71 = sVar71 - sVar12;
  sVar73 = sVar73 - sVar14;
  sVar74 = sVar74 - sVar15;
  sVar75 = sVar75 - sVar16;
  sVar76 = sVar76 - sVar17;
  sVar77 = sVar77 - sVar23;
  sVar78 = sVar78 - sVar24;
  sVar79 = sVar79 - sVar25;
  sVar88 = sVar84 + sVar80;
  sVar91 = sVar41 + sVar26;
  sVar93 = sVar10 + sVar20;
  sVar95 = sVar96 + sVar87;
  sVar97 = sVar5 + sVar1;
  sVar99 = sVar76 + sVar71;
  sVar101 = sVar51 + sVar44;
  sVar103 = sVar67 + sVar61;
  sVar80 = sVar80 - sVar84;
  sVar26 = sVar26 - sVar41;
  sVar20 = sVar20 - sVar10;
  sVar87 = sVar87 - sVar96;
  sVar1 = sVar1 - sVar5;
  sVar71 = sVar71 - sVar76;
  sVar44 = sVar44 - sVar51;
  sVar61 = sVar61 - sVar67;
  sVar5 = sVar85 + sVar82;
  sVar10 = sVar42 + sVar39;
  sVar12 = sVar22 + sVar21;
  sVar14 = sVar100 + sVar92;
  sVar15 = sVar7 + sVar3;
  sVar16 = sVar78 + sVar74;
  sVar17 = sVar53 + sVar49;
  sVar27 = sVar69 + sVar65;
  auVar63._0_2_ = sVar82 - sVar85;
  auVar63._2_2_ = sVar39 - sVar42;
  auVar63._4_2_ = sVar21 - sVar22;
  auVar63._6_2_ = sVar92 - sVar100;
  auVar63._8_2_ = sVar3 - sVar7;
  auVar63._10_2_ = sVar74 - sVar78;
  auVar63._12_2_ = sVar49 - sVar53;
  auVar63._14_2_ = sVar65 - sVar69;
  auVar18 = psllw(auVar63,2);
  sVar35 = sVar5 + sVar88;
  sVar39 = sVar10 + sVar91;
  sVar41 = sVar12 + sVar93;
  sVar42 = sVar14 + sVar95;
  sVar49 = sVar15 + sVar97;
  sVar51 = sVar16 + sVar99;
  sVar53 = sVar17 + sVar101;
  sVar58 = sVar27 + sVar103;
  auVar18 = pmulhw(auVar18,___xmm_5a805a805a805a805a805a805a805a80);
  sVar88 = sVar88 - sVar5;
  sVar91 = sVar91 - sVar10;
  sVar93 = sVar93 - sVar12;
  sVar95 = sVar95 - sVar14;
  sVar97 = sVar97 - sVar15;
  sVar99 = sVar99 - sVar16;
  sVar101 = sVar101 - sVar17;
  sVar103 = sVar103 - sVar27;
  sVar21 = sVar86 + sVar81;
  sVar22 = sVar43 + sVar38;
  sVar23 = sVar31 + sVar29;
  sVar32 = sVar102 + sVar90;
  sVar24 = sVar8 + sVar2;
  sVar33 = sVar79 + sVar73;
  sVar25 = sVar54 + sVar48;
  sVar34 = sVar70 + sVar64;
  auVar105._0_2_ = sVar81 - sVar86;
  auVar105._2_2_ = sVar38 - sVar43;
  auVar105._4_2_ = sVar29 - sVar31;
  auVar105._6_2_ = sVar90 - sVar102;
  auVar105._8_2_ = sVar2 - sVar8;
  auVar105._10_2_ = sVar73 - sVar79;
  auVar105._12_2_ = sVar48 - sVar54;
  auVar105._14_2_ = sVar64 - sVar70;
  auVar56 = psllw(auVar105,2);
  auVar106 = pmulhw(auVar56,___xmm_45404540454045404540454045404540);
  sVar5 = auVar18._0_2_ - sVar5;
  sVar10 = auVar18._2_2_ - sVar10;
  sVar12 = auVar18._4_2_ - sVar12;
  sVar14 = auVar18._6_2_ - sVar14;
  sVar15 = auVar18._8_2_ - sVar15;
  sVar16 = auVar18._10_2_ - sVar16;
  sVar17 = auVar18._12_2_ - sVar17;
  sVar27 = auVar18._14_2_ - sVar27;
  auVar45._0_2_ = sVar9 - sVar83;
  auVar45._2_2_ = sVar11 - sVar40;
  auVar45._4_2_ = sVar13 - sVar30;
  auVar45._6_2_ = sVar98 - sVar94;
  auVar45._8_2_ = sVar6 - sVar4;
  auVar45._10_2_ = sVar77 - sVar75;
  auVar45._12_2_ = sVar52 - sVar50;
  auVar45._14_2_ = sVar68 - sVar66;
  sVar29 = sVar5 + sVar80;
  sVar31 = sVar10 + sVar26;
  sVar38 = sVar12 + sVar20;
  sVar43 = sVar14 + sVar87;
  sVar48 = sVar15 + sVar1;
  sVar54 = sVar16 + sVar71;
  sVar59 = sVar17 + sVar44;
  sVar60 = sVar27 + sVar61;
  sVar80 = sVar80 - sVar5;
  sVar26 = sVar26 - sVar10;
  sVar20 = sVar20 - sVar12;
  sVar87 = sVar87 - sVar14;
  sVar1 = sVar1 - sVar15;
  sVar71 = sVar71 - sVar16;
  sVar44 = sVar44 - sVar17;
  sVar61 = sVar61 - sVar27;
  auVar56._0_2_ = auVar105._0_2_ + auVar45._0_2_;
  auVar56._2_2_ = auVar105._2_2_ + auVar45._2_2_;
  auVar56._4_2_ = auVar105._4_2_ + auVar45._4_2_;
  auVar56._6_2_ = auVar105._6_2_ + auVar45._6_2_;
  auVar56._8_2_ = auVar105._8_2_ + auVar45._8_2_;
  auVar56._10_2_ = auVar105._10_2_ + auVar45._10_2_;
  auVar56._12_2_ = auVar105._12_2_ + auVar45._12_2_;
  auVar56._14_2_ = auVar105._14_2_ + auVar45._14_2_;
  sVar9 = sVar9 + sVar83;
  sVar11 = sVar11 + sVar40;
  sVar13 = sVar13 + sVar30;
  sVar98 = sVar98 + sVar94;
  sVar6 = sVar6 + sVar4;
  sVar77 = sVar77 + sVar75;
  sVar52 = sVar52 + sVar50;
  sVar68 = sVar68 + sVar66;
  auVar18 = psllw(auVar56,2);
  auVar18 = pmulhw(auVar18,___xmm_76407640764076407640764076407640);
  sVar2 = sVar21 + sVar9;
  sVar3 = sVar22 + sVar11;
  sVar4 = sVar23 + sVar13;
  sVar5 = sVar32 + sVar98;
  sVar7 = sVar24 + sVar6;
  sVar8 = sVar33 + sVar77;
  sVar10 = sVar25 + sVar52;
  sVar12 = sVar34 + sVar68;
  auVar37._0_2_ = sVar21 - sVar9;
  auVar37._2_2_ = sVar22 - sVar11;
  auVar37._4_2_ = sVar23 - sVar13;
  auVar37._6_2_ = sVar32 - sVar98;
  auVar37._8_2_ = sVar24 - sVar6;
  auVar37._10_2_ = sVar33 - sVar77;
  auVar37._12_2_ = sVar25 - sVar52;
  auVar37._14_2_ = sVar34 - sVar68;
  auVar56 = psllw(auVar45,2);
  auVar56 = pmulhw(auVar56,___xmm_98c098c098c098c098c098c098c098c0);
  auVar28 = psllw(auVar37,2);
  auVar28 = pmulhw(auVar28,___xmm_5a805a805a805a805a805a805a805a80);
  auVar46._0_2_ = sVar2 + sVar35;
  auVar46._2_2_ = sVar3 + sVar39;
  auVar46._4_2_ = sVar4 + sVar41;
  auVar46._6_2_ = sVar5 + sVar42;
  auVar46._8_2_ = sVar7 + sVar49;
  auVar46._10_2_ = sVar8 + sVar51;
  auVar46._12_2_ = sVar10 + sVar53;
  auVar46._14_2_ = sVar12 + sVar58;
  sVar6 = ((auVar56._0_2_ - auVar45._0_2_) + auVar18._0_2_) - sVar2;
  sVar9 = ((auVar56._2_2_ - auVar45._2_2_) + auVar18._2_2_) - sVar3;
  sVar11 = ((auVar56._4_2_ - auVar45._4_2_) + auVar18._4_2_) - sVar4;
  sVar13 = ((auVar56._6_2_ - auVar45._6_2_) + auVar18._6_2_) - sVar5;
  sVar14 = ((auVar56._8_2_ - auVar45._8_2_) + auVar18._8_2_) - sVar7;
  sVar98 = ((auVar56._10_2_ - auVar45._10_2_) + auVar18._10_2_) - sVar8;
  sVar15 = ((auVar56._12_2_ - auVar45._12_2_) + auVar18._12_2_) - sVar10;
  sVar16 = ((auVar56._14_2_ - auVar45._14_2_) + auVar18._14_2_) - sVar12;
  auVar47 = psraw(auVar46,5);
  auVar62._0_2_ = sVar35 - sVar2;
  auVar62._2_2_ = sVar39 - sVar3;
  auVar62._4_2_ = sVar41 - sVar4;
  auVar62._6_2_ = sVar42 - sVar5;
  auVar62._8_2_ = sVar49 - sVar7;
  auVar62._10_2_ = sVar51 - sVar8;
  auVar62._12_2_ = sVar53 - sVar10;
  auVar62._14_2_ = sVar58 - sVar12;
  sVar2 = auVar28._0_2_ - sVar6;
  sVar3 = auVar28._2_2_ - sVar9;
  sVar4 = auVar28._4_2_ - sVar11;
  sVar5 = auVar28._6_2_ - sVar13;
  sVar7 = auVar28._8_2_ - sVar14;
  sVar8 = auVar28._10_2_ - sVar98;
  sVar30 = auVar28._12_2_ - sVar15;
  sVar22 = auVar28._14_2_ - sVar16;
  auVar63 = psraw(auVar62,5);
  auVar57._0_2_ = sVar6 + sVar29;
  auVar57._2_2_ = sVar9 + sVar31;
  auVar57._4_2_ = sVar11 + sVar38;
  auVar57._6_2_ = sVar13 + sVar43;
  auVar57._8_2_ = sVar14 + sVar48;
  auVar57._10_2_ = sVar98 + sVar54;
  auVar57._12_2_ = sVar15 + sVar59;
  auVar57._14_2_ = sVar16 + sVar60;
  auVar19._0_2_ = sVar2 + sVar80;
  auVar19._2_2_ = sVar3 + sVar26;
  auVar19._4_2_ = sVar4 + sVar20;
  auVar19._6_2_ = sVar5 + sVar87;
  auVar19._8_2_ = sVar7 + sVar1;
  auVar19._10_2_ = sVar8 + sVar71;
  auVar19._12_2_ = sVar30 + sVar44;
  auVar19._14_2_ = sVar22 + sVar61;
  auVar56 = psraw(auVar57,5);
  auVar72._0_2_ = sVar29 - sVar6;
  auVar72._2_2_ = sVar31 - sVar9;
  auVar72._4_2_ = sVar38 - sVar11;
  auVar72._6_2_ = sVar43 - sVar13;
  auVar72._8_2_ = sVar48 - sVar14;
  auVar72._10_2_ = sVar54 - sVar98;
  auVar72._12_2_ = sVar59 - sVar15;
  auVar72._14_2_ = sVar60 - sVar16;
  auVar28 = psraw(auVar19,5);
  auVar57 = psraw(auVar72,5);
  sVar16 = auVar28._0_2_ + ___xmm_00800080008000800080008000800080;
  sVar77 = auVar28._2_2_ + _UNK_153479092;
  sVar17 = auVar28._4_2_ + _UNK_153479094;
  sVar52 = auVar28._6_2_ + _UNK_153479096;
  sVar27 = auVar28._8_2_ + _UNK_153479098;
  sVar68 = auVar28._10_2_ + _UNK_15347909a;
  sVar29 = auVar28._12_2_ + _UNK_15347909c;
  sVar21 = auVar28._14_2_ + _UNK_15347909e;
  sVar6 = (auVar106._0_2_ - auVar18._0_2_) + sVar2;
  sVar65 = (auVar106._2_2_ - auVar18._2_2_) + sVar3;
  sVar66 = (auVar106._4_2_ - auVar18._4_2_) + sVar4;
  sVar67 = (auVar106._6_2_ - auVar18._6_2_) + sVar5;
  sVar69 = (auVar106._8_2_ - auVar18._8_2_) + sVar7;
  sVar70 = (auVar106._10_2_ - auVar18._10_2_) + sVar8;
  sVar73 = (auVar106._12_2_ - auVar18._12_2_) + sVar30;
  sVar74 = (auVar106._14_2_ - auVar18._14_2_) + sVar22;
  sVar31 = auVar47._0_2_ + ___xmm_00800080008000800080008000800080;
  sVar23 = auVar47._2_2_ + _UNK_153479092;
  sVar32 = auVar47._4_2_ + _UNK_153479094;
  sVar24 = auVar47._6_2_ + _UNK_153479096;
  sVar33 = auVar47._8_2_ + _UNK_153479098;
  sVar25 = auVar47._10_2_ + _UNK_15347909a;
  sVar34 = auVar47._12_2_ + _UNK_15347909c;
  sVar35 = auVar47._14_2_ + _UNK_15347909e;
  sVar38 = auVar63._0_2_ + ___xmm_00800080008000800080008000800080;
  sVar39 = auVar63._2_2_ + _UNK_153479092;
  sVar40 = auVar63._4_2_ + _UNK_153479094;
  sVar41 = auVar63._6_2_ + _UNK_153479096;
  sVar42 = auVar63._8_2_ + _UNK_153479098;
  sVar43 = auVar63._10_2_ + _UNK_15347909a;
  sVar48 = auVar63._12_2_ + _UNK_15347909c;
  sVar49 = auVar63._14_2_ + _UNK_15347909e;
  sVar9 = auVar56._0_2_ + ___xmm_00800080008000800080008000800080;
  sVar10 = auVar56._2_2_ + _UNK_153479092;
  sVar11 = auVar56._4_2_ + _UNK_153479094;
  sVar12 = auVar56._6_2_ + _UNK_153479096;
  sVar13 = auVar56._8_2_ + _UNK_153479098;
  sVar14 = auVar56._10_2_ + _UNK_15347909a;
  sVar98 = auVar56._12_2_ + _UNK_15347909c;
  sVar15 = auVar56._14_2_ + _UNK_15347909e;
  sVar50 = auVar57._0_2_ + ___xmm_00800080008000800080008000800080;
  sVar51 = auVar57._2_2_ + _UNK_153479092;
  sVar53 = auVar57._4_2_ + _UNK_153479094;
  sVar54 = auVar57._6_2_ + _UNK_153479096;
  sVar58 = auVar57._8_2_ + _UNK_153479098;
  sVar59 = auVar57._10_2_ + _UNK_15347909a;
  sVar60 = auVar57._12_2_ + _UNK_15347909c;
  sVar64 = auVar57._14_2_ + _UNK_15347909e;
  auVar104._0_2_ = sVar80 - sVar2;
  auVar104._2_2_ = sVar26 - sVar3;
  auVar104._4_2_ = sVar20 - sVar4;
  auVar104._6_2_ = sVar87 - sVar5;
  auVar104._8_2_ = sVar1 - sVar7;
  auVar104._10_2_ = sVar71 - sVar8;
  auVar104._12_2_ = sVar44 - sVar30;
  auVar104._14_2_ = sVar61 - sVar22;
  auVar28._0_2_ = sVar6 + sVar88;
  auVar28._2_2_ = sVar65 + sVar91;
  auVar28._4_2_ = sVar66 + sVar93;
  auVar28._6_2_ = sVar67 + sVar95;
  auVar28._8_2_ = sVar69 + sVar97;
  auVar28._10_2_ = sVar70 + sVar99;
  auVar28._12_2_ = sVar73 + sVar101;
  auVar28._14_2_ = sVar74 + sVar103;
  auVar18 = psraw(auVar28,5);
  auVar89._0_2_ = sVar88 - sVar6;
  auVar89._2_2_ = sVar91 - sVar65;
  auVar89._4_2_ = sVar93 - sVar66;
  auVar89._6_2_ = sVar95 - sVar67;
  auVar89._8_2_ = sVar97 - sVar69;
  auVar89._10_2_ = sVar99 - sVar70;
  auVar89._12_2_ = sVar101 - sVar73;
  auVar89._14_2_ = sVar103 - sVar74;
  sVar1 = auVar18._0_2_ + ___xmm_00800080008000800080008000800080;
  sVar2 = auVar18._2_2_ + _UNK_153479092;
  sVar3 = auVar18._4_2_ + _UNK_153479094;
  sVar4 = auVar18._6_2_ + _UNK_153479096;
  sVar5 = auVar18._8_2_ + _UNK_153479098;
  sVar6 = auVar18._10_2_ + _UNK_15347909a;
  sVar7 = auVar18._12_2_ + _UNK_15347909c;
  sVar8 = auVar18._14_2_ + _UNK_15347909e;
  auVar18 = psraw(auVar104,5);
  sVar67 = auVar18._0_2_ + ___xmm_00800080008000800080008000800080;
  sVar69 = auVar18._2_2_ + _UNK_153479092;
  sVar70 = auVar18._4_2_ + _UNK_153479094;
  sVar71 = auVar18._6_2_ + _UNK_153479096;
  sVar73 = auVar18._8_2_ + _UNK_153479098;
  sVar74 = auVar18._10_2_ + _UNK_15347909a;
  sVar75 = auVar18._12_2_ + _UNK_15347909c;
  sVar76 = auVar18._14_2_ + _UNK_15347909e;
  auVar18 = psraw(auVar89,5);
  sVar20 = auVar18._0_2_ + ___xmm_00800080008000800080008000800080;
  sVar30 = auVar18._2_2_ + _UNK_153479092;
  sVar22 = auVar18._4_2_ + _UNK_153479094;
  sVar26 = auVar18._6_2_ + _UNK_153479096;
  sVar44 = auVar18._8_2_ + _UNK_153479098;
  sVar61 = auVar18._10_2_ + _UNK_15347909a;
  sVar65 = auVar18._12_2_ + _UNK_15347909c;
  sVar66 = auVar18._14_2_ + _UNK_15347909e;
  *param_1 = (0 < sVar31) * (sVar31 < 0x100) * (char)sVar31 - (0xff < sVar31);
  param_1[1] = (0 < sVar9) * (sVar9 < 0x100) * (char)sVar9 - (0xff < sVar9);
  param_1[2] = (0 < sVar16) * (sVar16 < 0x100) * (char)sVar16 - (0xff < sVar16);
  param_1[3] = (0 < sVar20) * (sVar20 < 0x100) * (char)sVar20 - (0xff < sVar20);
  param_1[4] = (0 < sVar1) * (sVar1 < 0x100) * (char)sVar1 - (0xff < sVar1);
  param_1[5] = (0 < sVar67) * (sVar67 < 0x100) * (char)sVar67 - (0xff < sVar67);
  param_1[6] = (0 < sVar50) * (sVar50 < 0x100) * (char)sVar50 - (0xff < sVar50);
  param_1[7] = (0 < sVar38) * (sVar38 < 0x100) * (char)sVar38 - (0xff < sVar38);
  param_1 = param_1 + param_2;
  *param_1 = (0 < sVar23) * (sVar23 < 0x100) * (char)sVar23 - (0xff < sVar23);
  param_1[1] = (0 < sVar10) * (sVar10 < 0x100) * (char)sVar10 - (0xff < sVar10);
  param_1[2] = (0 < sVar77) * (sVar77 < 0x100) * (char)sVar77 - (0xff < sVar77);
  param_1[3] = (0 < sVar30) * (sVar30 < 0x100) * (char)sVar30 - (0xff < sVar30);
  param_1[4] = (0 < sVar2) * (sVar2 < 0x100) * (char)sVar2 - (0xff < sVar2);
  param_1[5] = (0 < sVar69) * (sVar69 < 0x100) * (char)sVar69 - (0xff < sVar69);
  param_1[6] = (0 < sVar51) * (sVar51 < 0x100) * (char)sVar51 - (0xff < sVar51);
  param_1[7] = (0 < sVar39) * (sVar39 < 0x100) * (char)sVar39 - (0xff < sVar39);
  param_1 = param_1 + param_2;
  *param_1 = (0 < sVar32) * (sVar32 < 0x100) * (char)sVar32 - (0xff < sVar32);
  param_1[1] = (0 < sVar11) * (sVar11 < 0x100) * (char)sVar11 - (0xff < sVar11);
  param_1[2] = (0 < sVar17) * (sVar17 < 0x100) * (char)sVar17 - (0xff < sVar17);
  param_1[3] = (0 < sVar22) * (sVar22 < 0x100) * (char)sVar22 - (0xff < sVar22);
  param_1[4] = (0 < sVar3) * (sVar3 < 0x100) * (char)sVar3 - (0xff < sVar3);
  param_1[5] = (0 < sVar70) * (sVar70 < 0x100) * (char)sVar70 - (0xff < sVar70);
  param_1[6] = (0 < sVar53) * (sVar53 < 0x100) * (char)sVar53 - (0xff < sVar53);
  param_1[7] = (0 < sVar40) * (sVar40 < 0x100) * (char)sVar40 - (0xff < sVar40);
  param_1 = param_1 + param_2;
  *param_1 = (0 < sVar24) * (sVar24 < 0x100) * (char)sVar24 - (0xff < sVar24);
  param_1[1] = (0 < sVar12) * (sVar12 < 0x100) * (char)sVar12 - (0xff < sVar12);
  param_1[2] = (0 < sVar52) * (sVar52 < 0x100) * (char)sVar52 - (0xff < sVar52);
  param_1[3] = (0 < sVar26) * (sVar26 < 0x100) * (char)sVar26 - (0xff < sVar26);
  param_1[4] = (0 < sVar4) * (sVar4 < 0x100) * (char)sVar4 - (0xff < sVar4);
  param_1[5] = (0 < sVar71) * (sVar71 < 0x100) * (char)sVar71 - (0xff < sVar71);
  param_1[6] = (0 < sVar54) * (sVar54 < 0x100) * (char)sVar54 - (0xff < sVar54);
  param_1[7] = (0 < sVar41) * (sVar41 < 0x100) * (char)sVar41 - (0xff < sVar41);
  param_1 = param_1 + param_2;
  *param_1 = (0 < sVar33) * (sVar33 < 0x100) * (char)sVar33 - (0xff < sVar33);
  param_1[1] = (0 < sVar13) * (sVar13 < 0x100) * (char)sVar13 - (0xff < sVar13);
  param_1[2] = (0 < sVar27) * (sVar27 < 0x100) * (char)sVar27 - (0xff < sVar27);
  param_1[3] = (0 < sVar44) * (sVar44 < 0x100) * (char)sVar44 - (0xff < sVar44);
  param_1[4] = (0 < sVar5) * (sVar5 < 0x100) * (char)sVar5 - (0xff < sVar5);
  param_1[5] = (0 < sVar73) * (sVar73 < 0x100) * (char)sVar73 - (0xff < sVar73);
  param_1[6] = (0 < sVar58) * (sVar58 < 0x100) * (char)sVar58 - (0xff < sVar58);
  param_1[7] = (0 < sVar42) * (sVar42 < 0x100) * (char)sVar42 - (0xff < sVar42);
  param_1 = param_1 + param_2;
  *param_1 = (0 < sVar25) * (sVar25 < 0x100) * (char)sVar25 - (0xff < sVar25);
  param_1[1] = (0 < sVar14) * (sVar14 < 0x100) * (char)sVar14 - (0xff < sVar14);
  param_1[2] = (0 < sVar68) * (sVar68 < 0x100) * (char)sVar68 - (0xff < sVar68);
  param_1[3] = (0 < sVar61) * (sVar61 < 0x100) * (char)sVar61 - (0xff < sVar61);
  param_1[4] = (0 < sVar6) * (sVar6 < 0x100) * (char)sVar6 - (0xff < sVar6);
  param_1[5] = (0 < sVar74) * (sVar74 < 0x100) * (char)sVar74 - (0xff < sVar74);
  param_1[6] = (0 < sVar59) * (sVar59 < 0x100) * (char)sVar59 - (0xff < sVar59);
  param_1[7] = (0 < sVar43) * (sVar43 < 0x100) * (char)sVar43 - (0xff < sVar43);
  param_1 = param_1 + param_2;
  *param_1 = (0 < sVar34) * (sVar34 < 0x100) * (char)sVar34 - (0xff < sVar34);
  param_1[1] = (0 < sVar98) * (sVar98 < 0x100) * (char)sVar98 - (0xff < sVar98);
  param_1[2] = (0 < sVar29) * (sVar29 < 0x100) * (char)sVar29 - (0xff < sVar29);
  param_1[3] = (0 < sVar65) * (sVar65 < 0x100) * (char)sVar65 - (0xff < sVar65);
  param_1[4] = (0 < sVar7) * (sVar7 < 0x100) * (char)sVar7 - (0xff < sVar7);
  param_1[5] = (0 < sVar75) * (sVar75 < 0x100) * (char)sVar75 - (0xff < sVar75);
  param_1[6] = (0 < sVar60) * (sVar60 < 0x100) * (char)sVar60 - (0xff < sVar60);
  param_1[7] = (0 < sVar48) * (sVar48 < 0x100) * (char)sVar48 - (0xff < sVar48);
  param_1 = param_1 + param_2;
  *param_1 = (0 < sVar35) * (sVar35 < 0x100) * (char)sVar35 - (0xff < sVar35);
  param_1[1] = (0 < sVar15) * (sVar15 < 0x100) * (char)sVar15 - (0xff < sVar15);
  param_1[2] = (0 < sVar21) * (sVar21 < 0x100) * (char)sVar21 - (0xff < sVar21);
  param_1[3] = (0 < sVar66) * (sVar66 < 0x100) * (char)sVar66 - (0xff < sVar66);
  param_1[4] = (0 < sVar8) * (sVar8 < 0x100) * (char)sVar8 - (0xff < sVar8);
  param_1[5] = (0 < sVar76) * (sVar76 < 0x100) * (char)sVar76 - (0xff < sVar76);
  param_1[6] = (0 < sVar64) * (sVar64 < 0x100) * (char)sVar64 - (0xff < sVar64);
  param_1[7] = (0 < sVar49) * (sVar49 < 0x100) * (char)sVar49 - (0xff < sVar49);
  return;
}

// uejpeg_decode @ 14f64d930

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
uejpeg_decode(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
             undefined4 *param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  undefined8 uVar10;
  int *piVar11;
  longlong lVar12;
  int iVar13;
  undefined1 auStack_12b8 [32];
  undefined1 local_1298 [2352];
  int local_968;
  int iStack_964;
  ulonglong local_38;
  undefined8 uStack_28;
  
  uStack_28 = 0x14f64d940;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_12b8;
  iVar13 = 0;
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 0;
  piVar8 = (int *)uejpeg_decode_threaded_start(local_1298,param_1,param_2,param_6);
  lVar12 = 0x12;
  piVar7 = &local_968;
  do {
    piVar11 = piVar7;
    piVar9 = piVar8;
    uVar10 = *(undefined8 *)(piVar9 + 2);
    uVar4 = *(undefined8 *)(piVar9 + 4);
    uVar5 = *(undefined8 *)(piVar9 + 6);
    *(undefined8 *)piVar11 = *(undefined8 *)piVar9;
    *(undefined8 *)(piVar11 + 2) = uVar10;
    uVar10 = *(undefined8 *)(piVar9 + 8);
    uVar6 = *(undefined8 *)(piVar9 + 10);
    *(undefined8 *)(piVar11 + 4) = uVar4;
    *(undefined8 *)(piVar11 + 6) = uVar5;
    uVar4 = *(undefined8 *)(piVar9 + 0xc);
    uVar5 = *(undefined8 *)(piVar9 + 0xe);
    *(undefined8 *)(piVar11 + 8) = uVar10;
    *(undefined8 *)(piVar11 + 10) = uVar6;
    uVar10 = *(undefined8 *)(piVar9 + 0x10);
    uVar6 = *(undefined8 *)(piVar9 + 0x12);
    *(undefined8 *)(piVar11 + 0xc) = uVar4;
    *(undefined8 *)(piVar11 + 0xe) = uVar5;
    uVar4 = *(undefined8 *)(piVar9 + 0x14);
    uVar5 = *(undefined8 *)(piVar9 + 0x16);
    *(undefined8 *)(piVar11 + 0x10) = uVar10;
    *(undefined8 *)(piVar11 + 0x12) = uVar6;
    uVar10 = *(undefined8 *)(piVar9 + 0x18);
    uVar6 = *(undefined8 *)(piVar9 + 0x1a);
    *(undefined8 *)(piVar11 + 0x14) = uVar4;
    *(undefined8 *)(piVar11 + 0x16) = uVar5;
    uVar4 = *(undefined8 *)(piVar9 + 0x1c);
    uVar5 = *(undefined8 *)(piVar9 + 0x1e);
    *(undefined8 *)(piVar11 + 0x18) = uVar10;
    *(undefined8 *)(piVar11 + 0x1a) = uVar6;
    *(undefined8 *)(piVar11 + 0x1c) = uVar4;
    *(undefined8 *)(piVar11 + 0x1e) = uVar5;
    lVar12 = lVar12 + -1;
    piVar8 = piVar9 + 0x20;
    piVar7 = piVar11 + 0x20;
  } while (lVar12 != 0);
  iVar1 = piVar9[0x21];
  iVar2 = piVar9[0x22];
  iVar3 = piVar9[0x23];
  uVar4 = *(undefined8 *)(piVar9 + 0x24);
  uVar5 = *(undefined8 *)(piVar9 + 0x26);
  uVar10 = *(undefined8 *)(piVar9 + 0x28);
  piVar11[0x20] = piVar9[0x20];
  piVar11[0x21] = iVar1;
  piVar11[0x22] = iVar2;
  piVar11[0x23] = iVar3;
  *(undefined8 *)(piVar11 + 0x24) = uVar4;
  *(undefined8 *)(piVar11 + 0x26) = uVar5;
  *(undefined8 *)(piVar11 + 0x28) = uVar10;
  if (local_968 == 0) {
    if (0 < iStack_964) {
      do {
        uejpeg_decode_thread_run(&local_968,iVar13);
        if (local_968 != 0) goto LAB_14f64da05;
        iVar13 = iVar13 + 1;
      } while (iVar13 < iStack_964);
    }
    uVar10 = uejpeg_decode_threaded_finish(&local_968,param_3,param_4,param_5);
  }
  else {
LAB_14f64da05:
    uVar10 = 0;
  }
  return uVar10;
}

// uejpeg_decode_mem @ 14f64da70

void uejpeg_decode_mem(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined4 param_6)

{
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  
  local_18 = (longlong)param_2;
  local_28 = param_1;
  local_20 = param_1;
  uejpeg_decode(&s_uejpeg_buffer_fns,&local_28,param_3,param_4,param_5,param_6);
  return;
}

// uejpeg_decode_mem_threaded_start @ 14f64dac0

undefined8 *
uejpeg_decode_mem_threaded_start
          (undefined8 *param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 local_948;
  undefined8 local_940;
  longlong local_938;
  undefined1 local_930 [2344];
  
  *(undefined4 *)param_1 = 0;
  memset((undefined4 *)((longlong)param_1 + 4),0,0x924);
  local_948 = param_2;
  local_940 = param_2;
  local_938 = (longlong)param_3;
  puVar3 = (undefined8 *)
           uejpeg_decode_threaded_start(local_930,&s_uejpeg_buffer_fns,&local_948,param_4);
  lVar5 = 0x12;
  puVar2 = param_1;
  do {
    puVar6 = puVar2;
    puVar4 = puVar3;
    uVar1 = puVar4[1];
    *puVar6 = *puVar4;
    puVar6[1] = uVar1;
    uVar1 = puVar4[3];
    puVar6[2] = puVar4[2];
    puVar6[3] = uVar1;
    uVar1 = puVar4[5];
    puVar6[4] = puVar4[4];
    puVar6[5] = uVar1;
    uVar1 = puVar4[7];
    puVar6[6] = puVar4[6];
    puVar6[7] = uVar1;
    uVar1 = puVar4[9];
    puVar6[8] = puVar4[8];
    puVar6[9] = uVar1;
    uVar1 = puVar4[0xb];
    puVar6[10] = puVar4[10];
    puVar6[0xb] = uVar1;
    uVar1 = puVar4[0xd];
    puVar6[0xc] = puVar4[0xc];
    puVar6[0xd] = uVar1;
    uVar1 = puVar4[0xf];
    puVar6[0xe] = puVar4[0xe];
    puVar6[0xf] = uVar1;
    lVar5 = lVar5 + -1;
    puVar3 = puVar4 + 0x10;
    puVar2 = puVar6 + 0x10;
  } while (lVar5 != 0);
  uVar1 = puVar4[0x11];
  puVar6[0x10] = puVar4[0x10];
  puVar6[0x11] = uVar1;
  uVar1 = puVar4[0x13];
  puVar6[0x12] = puVar4[0x12];
  puVar6[0x13] = uVar1;
  puVar6[0x14] = puVar4[0x14];
  return param_1;
}

// uejpeg_decode_mem_to_jpeg @ 14f64dbc0

void uejpeg_decode_mem_to_jpeg
               (undefined8 param_1,int param_2,undefined8 *param_3,undefined4 *param_4,
               undefined4 param_5)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  longlong local_10;
  
  local_30 = 0;
  local_28 = 0;
  local_10 = (longlong)param_2;
  local_38 = 0;
  local_20 = param_1;
  local_18 = param_1;
  uejpeg_decode_to_jpeg(&s_uejpeg_buffer_fns,&local_20,&s_uejpeg_buffer_fns,&local_38,param_5);
  *param_3 = local_38;
  *param_4 = (undefined4)local_28;
  return;
}

// uejpeg_decode_thread_run @ 14f64dc40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014f64dc85) */

int uejpeg_decode_thread_run(int *param_1,int param_2)

{
  short sVar1;
  uint uVar2;
  undefined8 *puVar3;
  int iVar4;
  short *psVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  short *psVar15;
  undefined1 auStack_358 [32];
  int local_338;
  int local_334;
  int local_330;
  longlong *local_328;
  int local_320;
  uint local_31c;
  longlong local_318;
  short *local_310;
  short *local_308;
  short *local_300;
  ulonglong local_2f8;
  uint *local_2f0;
  longlong local_2e8;
  int *local_2d8;
  code *local_2d0;
  short local_2c8 [64];
  short local_248 [256];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_358;
  iVar8 = *param_1;
  if (iVar8 == 0) {
    puVar3 = (undefined8 *)cpuid_Version_info(1);
    local_2e8 = *puVar3;
    local_2d0 = FUN_14f6487f0;
    if ((*(uint *)(puVar3 + 1) >> 0x1a & 1) != 0) {
      local_2d0 = FUN_14f648c70;
    }
    local_2d8 = param_1;
    if (*(char *)((longlong)param_1 + 0x1a) == '\0') {
      memcpy(*(void **)(param_1 + (longlong)param_2 * 0x1a + 0xae),
             *(void **)(param_1 + (longlong)param_2 * 0x1a + 0xb0),
             (longlong)(param_1[(longlong)param_2 * 0x1a + 0xb3] * 2));
    }
    else if ((param_1[(longlong)param_2 * 0x1a + 0xb2] != 0) &&
            (iVar8 = (*(code *)PTR_FUN_154df48b0)
                               (*(undefined8 *)(param_1 + (longlong)param_2 * 0x1a + 0xb0),
                                (longlong)param_1[(longlong)param_2 * 0x1a + 0xb2],
                                *(undefined8 *)(param_1 + (longlong)param_2 * 0x1a + 0xae),
                                (longlong)(param_1[(longlong)param_2 * 0x1a + 0xb3] * 2)),
            iVar8 == 0)) {
      *param_1 = 4;
      return 4;
    }
    FUN_14f646e20(*(longlong *)(param_1 + (longlong)param_2 * 0x1a + 0xae),
                  *(longlong *)(param_1 + (longlong)param_2 * 0x1a + 0xae) +
                  (longlong)param_1[(longlong)param_2 * 0x1a + 0xb3],
                  *(undefined8 *)(param_1 + (longlong)param_2 * 0x1a + 0xac));
    lVar14 = 0x16;
    if ((*(byte *)(param_1 + 2) & 2) != 0) {
      psVar5 = local_248;
      lVar12 = 0x16;
      do {
        piVar10 = &DAT_153477460;
        lVar11 = 0x40;
        do {
          iVar8 = *piVar10;
          piVar10 = piVar10 + 1;
          *psVar5 = (short)((int)((uint)*(ushort *)((longlong)param_1 + (lVar12 + iVar8) * 2) *
                                  (int)*(short *)(&DAT_1534772e0 + (longlong)iVar8 * 2) + 0x800) >>
                           0xc);
          psVar5 = psVar5 + 1;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
        lVar12 = lVar12 + 0x40;
      } while (lVar12 < 0x116);
    }
    local_310 = *(short **)(param_1 + (longlong)param_2 * 0x1a + 0xac);
    psVar5 = local_248;
    local_328 = (longlong *)(param_1 + 0x242);
    local_2f0 = (uint *)(param_1 + (longlong)param_2 * 0x1a + 0xa6);
    do {
      local_31c = local_2f0[-4];
      uVar6 = (ulonglong)(int)local_31c;
      uVar2 = *local_2f0;
      local_2f8 = (ulonglong)uVar2;
      iVar8 = uVar2 * local_31c;
      local_338 = local_31c * 8;
      if (0 < (int)uVar2) {
        iVar13 = 0;
        iVar7 = local_31c << 6;
        local_330 = local_2f0[-0xc] * local_338 * 8;
        lVar12 = uVar6 * 2;
        local_300 = local_310;
        local_334 = iVar7;
        local_320 = iVar8;
        local_308 = psVar5;
        local_2e8 = lVar12;
        do {
          iVar9 = 0;
          if (0 < (int)uVar6) {
            local_318 = (longlong)local_330;
            lVar11 = 0;
            psVar15 = local_300;
            do {
              if ((*(byte *)(param_1 + 2) & 2) == 0) {
                piVar10 = &DAT_153477460;
                lVar12 = 0x40;
                psVar5 = psVar15;
                do {
                  iVar7 = *piVar10;
                  piVar10 = piVar10 + 1;
                  sVar1 = *psVar5;
                  psVar5 = psVar5 + iVar8;
                  local_2c8[iVar7] =
                       *(short *)((longlong)param_1 + (iVar7 + lVar14) * 2) * (sVar1 + -0x80);
                  lVar12 = lVar12 + -1;
                } while (lVar12 != 0);
                (*local_2d0)(local_318 + lVar11 + *local_328,local_338,local_2c8);
                iVar8 = local_320;
              }
              else {
                iVar7 = 0;
                lVar12 = 0x40;
                piVar10 = &DAT_153477460;
                do {
                  iVar4 = iVar13 + iVar7;
                  iVar7 = iVar7 + iVar8;
                  local_2c8[*piVar10] = (local_310[iVar4 + iVar9] + -0x80) * *psVar5;
                  lVar12 = lVar12 + -1;
                  piVar10 = piVar10 + 1;
                  psVar5 = psVar5 + 1;
                } while (lVar12 != 0);
                uej__idct_fast_block_simd(local_318 + lVar11 + *local_328,local_338,local_2c8);
                param_1 = local_2d8;
              }
              uVar6 = (ulonglong)local_31c;
              iVar9 = iVar9 + 1;
              psVar15 = psVar15 + 1;
              lVar11 = lVar11 + 8;
              lVar12 = local_2e8;
              psVar5 = local_308;
              iVar7 = local_334;
            } while (iVar9 < (int)local_31c);
          }
          local_300 = (short *)((longlong)local_300 + lVar12);
          local_330 = local_330 + iVar7;
          iVar13 = iVar13 + (int)uVar6;
          local_2f8 = local_2f8 - 1;
        } while (local_2f8 != 0);
      }
      local_328 = local_328 + 1;
      local_2f0 = local_2f0 + 1;
      psVar5 = psVar5 + 0x40;
      lVar14 = lVar14 + 0x40;
      local_310 = local_310 + (iVar8 << 6);
    } while (lVar14 < 0x116);
    iVar8 = 0;
  }
  return iVar8;
}

// uejpeg_decode_threaded_finish @ 14f64e0c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014f64e1db) */

longlong uejpeg_decode_threaded_finish(int *param_1,int *param_2,int *param_3,undefined4 *param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  ushort uVar5;
  ushort uVar6;
  undefined8 *puVar7;
  code *pcVar8;
  longlong lVar9;
  int iVar10;
  code *pcVar11;
  undefined8 uVar12;
  int iVar13;
  uint uVar14;
  ushort *puVar15;
  ulonglong uVar16;
  undefined1 *puVar17;
  undefined8 uVar18;
  undefined1 *puVar19;
  byte *pbVar20;
  ulonglong uVar21;
  int *piVar22;
  int *piVar23;
  longlong *plVar24;
  ulonglong uVar25;
  longlong lVar26;
  short *psVar27;
  int iVar28;
  ulonglong uVar29;
  longlong lVar30;
  ushort *puVar31;
  undefined1 auStack_1f8 [32];
  int local_1d8;
  undefined4 local_1d0;
  uint local_1c8;
  int local_1c0;
  code *local_1b8;
  code *local_1b0;
  int *local_1a8;
  longlong local_1a0;
  longlong local_198;
  longlong local_190;
  longlong local_188;
  int *local_178;
  int *local_170;
  undefined4 *local_168;
  longlong local_160;
  undefined1 *local_158;
  longlong local_150;
  byte *local_148;
  longlong local_140 [5];
  undefined1 local_118 [28];
  int local_fc [2];
  int local_f4 [39];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  uVar29 = 0;
  local_140[1] = 0;
  local_140[2] = 0;
  local_1a0 = (longlong)param_1[4];
  local_140[3] = 0;
  iVar28 = param_1[5];
  bVar2 = *(byte *)(param_1 + 6);
  iVar13 = 0;
  *param_2 = 0;
  *param_3 = 0;
  *param_4 = 0;
  local_140[0] = 0;
  if (*param_1 == 0) {
    lVar26 = (ulonglong)bVar2 * (longlong)iVar28 * local_1a0 * 4 + 7;
    local_1a8 = param_1;
    local_178 = param_2;
    local_170 = param_3;
    local_168 = param_4;
    local_190 = (*(code *)PTR_malloc_154df4928)
                          ((longlong)((ulonglong)((uint)(lVar26 >> 0x3f) & 7) + lVar26) >> 3);
    if (local_190 == 0) {
      uejpeg_free_decode_context(param_1);
      plVar24 = local_140;
      lVar26 = 4;
      do {
        if (*plVar24 != 0) {
          (*(code *)PTR_free_154df4930)();
        }
        plVar24 = plVar24 + 1;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      local_190 = 0;
    }
    else {
      local_1b0 = FUN_14f64c900;
      uVar14 = 1;
      local_198 = 1;
      puVar7 = (undefined8 *)cpuid_Version_info(1);
      local_188 = *puVar7;
      local_1b8 = FUN_14f647790;
      if ((*(uint *)(puVar7 + 1) >> 0x1a & 1) != 0) {
        local_1b8 = FUN_14f6478b0;
        local_1b0 = FUN_14f64c9e0;
      }
      puVar31 = (ushort *)((longlong)param_1 + 0x1e);
      uVar25 = 1;
      lVar26 = 4;
      puVar15 = puVar31;
      do {
        if (uVar14 < puVar15[-1]) {
          uVar14 = (uint)puVar15[-1];
        }
        if ((uint)uVar25 < (uint)*puVar15) {
          uVar25 = (ulonglong)*puVar15;
        }
        lVar26 = lVar26 + -1;
        puVar15 = puVar15 + 2;
      } while (lVar26 != 0);
      bVar2 = *(byte *)((longlong)param_1 + 0x19);
      uVar16 = uVar29;
      uVar21 = uVar29;
      if ((ulonglong)bVar2 != 0) {
        do {
          if ((bVar2 == 3) && (*(char *)(uVar16 + 0x22e + (longlong)param_1) == (&s_RGB)[uVar16])) {
            uVar21 = (ulonglong)((int)uVar21 + 1);
          }
          iVar13 = (int)uVar21;
          uVar16 = uVar16 + 1;
        } while ((longlong)uVar16 < (longlong)(ulonglong)bVar2);
      }
      if ((bVar2 != 3) ||
         ((iVar13 != 3 &&
          (((char)param_1[0x8b] != '\0' || (*(char *)((longlong)param_1 + 0x22d) != '\0')))))) {
        local_198 = 0;
      }
      local_160 = 0;
      local_158 = (undefined1 *)0x0;
      local_150 = 0;
      local_148 = (byte *)0x0;
      memset(local_118,0,0xc0);
      pcVar8 = local_1b0;
      local_1c0 = 0;
      local_1c8 = 0;
      local_188 = (longlong)param_1 + (0x908 - (longlong)local_140);
      piVar22 = local_fc;
      do {
        if ((puVar31[-1] != 0) && (*puVar31 != 0)) {
          lVar26 = (*(code *)PTR_malloc_154df4928)(param_1[4] + 3);
          uVar5 = puVar31[-1];
          local_140[uVar29] = lVar26;
          piVar22[3] = 0;
          uVar6 = *puVar31;
          iVar13 = (int)((ulonglong)uVar14 / (ulonglong)(longlong)(int)(uint)uVar5);
          piVar22[-1] = iVar13;
          iVar10 = (int)(uVar25 / (ulonglong)(longlong)(int)(uint)uVar6);
          *piVar22 = iVar10;
          iVar28 = param_1[4];
          piVar22[2] = iVar10 >> 1;
          piVar22[1] = (int)((ulonglong)(uint)(iVar28 + -1 + iVar13) /
                            ((ulonglong)uVar14 / (ulonglong)(longlong)(int)(uint)uVar5));
          uVar12 = *(undefined8 *)((longlong)local_140 + local_188 + uVar29 * 8);
          *(undefined8 *)(piVar22 + -3) = uVar12;
          if (local_1c0 <= iVar10) {
            local_1c0 = iVar10;
          }
          *(undefined8 *)(piVar22 + -5) = uVar12;
          if ((int)local_1c8 <= iVar13) {
            local_1c8 = iVar13;
          }
          if (iVar13 == 1) {
            if (iVar10 == 1) {
              pcVar11 = FUN_14f647780;
            }
            else {
              if (iVar10 != 2) goto LAB_14f64e39d;
              pcVar11 = FUN_14f64cc00;
            }
          }
          else {
LAB_14f64e39d:
            if (iVar13 == 2) {
              if (iVar10 == 1) {
                pcVar11 = FUN_14f64c800;
                goto LAB_14f64e3c5;
              }
              if (iVar10 == 2) {
                *(code **)(piVar22 + -7) = pcVar8;
                goto LAB_14f64e3c9;
              }
            }
            pcVar11 = (code *)&LAB_14f64c7b0;
          }
LAB_14f64e3c5:
          *(code **)(piVar22 + -7) = pcVar11;
        }
LAB_14f64e3c9:
        uVar29 = uVar29 + 1;
        piVar22 = piVar22 + 0xc;
        puVar31 = puVar31 + 2;
      } while ((longlong)uVar29 < 4);
      local_1c8 = 0;
      piVar22 = param_1;
      if (param_1[5] != 0) {
        do {
          param_1 = local_1a8;
          piVar23 = local_f4;
          psVar27 = (short *)((longlong)piVar22 + 0x1e);
          lVar30 = (ulonglong)(local_1c8 * piVar22[4] * 4) + local_190;
          lVar26 = 0;
          do {
            if ((psVar27[-1] != 0) && (*psVar27 != 0)) {
              uVar14 = piVar23[-2];
              iVar28 = *piVar23;
              if (iVar28 < (int)uVar14 >> 1) {
                uVar12 = *(undefined8 *)(piVar23 + -5);
                uVar18 = *(undefined8 *)(piVar23 + -7);
              }
              else {
                uVar12 = *(undefined8 *)(piVar23 + -7);
                uVar18 = *(undefined8 *)(piVar23 + -5);
              }
              local_1d8 = piVar23[-3];
              uVar12 = (**(code **)(piVar23 + -9))
                                 (*(undefined8 *)((longlong)local_140 + lVar26),uVar18,uVar12,
                                  piVar23[-1]);
              *(undefined8 *)((longlong)&local_160 + lVar26) = uVar12;
              iVar28 = iVar28 + 1;
              *piVar23 = iVar28;
              if ((int)uVar14 <= iVar28) {
                iVar28 = param_1[5];
                iVar13 = piVar23[1] + 1;
                *piVar23 = 0;
                *(longlong *)(piVar23 + -7) = *(longlong *)(piVar23 + -5);
                piVar23[1] = iVar13;
                if ((iVar13 < (int)((iVar28 + -1 + uVar14) / uVar14)) &&
                   (iVar13 < *(int *)(psVar27 + 0x46d))) {
                  *(longlong *)(piVar23 + -5) =
                       (longlong)*(int *)(psVar27 + 0x465) + *(longlong *)(piVar23 + -5);
                }
              }
            }
            lVar9 = local_1a0;
            psVar27 = psVar27 + 2;
            piVar23 = piVar23 + 0xc;
            lVar26 = lVar26 + 8;
          } while (lVar26 < 0x20);
          iVar28 = (int)local_1a0;
          if (*(char *)((longlong)param_1 + 0x19) == '\x03') {
            if (local_198 == 0) {
              local_1d0 = 4;
              local_1d8 = iVar28;
              (*local_1b8)(lVar30,local_160,local_158,local_150);
            }
            else if (0 < local_1a0) {
              puVar17 = (undefined1 *)(lVar30 + 2);
              puVar19 = local_158;
              lVar26 = local_1a0;
              do {
                puVar17[-2] = puVar19[local_160 - (longlong)local_158];
                puVar17[-1] = *puVar19;
                *puVar17 = (puVar19 + 1)[(local_150 - (longlong)local_158) + -1];
                puVar17[1] = 0xff;
                lVar26 = lVar26 + -1;
                puVar17 = puVar17 + 4;
                puVar19 = puVar19 + 1;
              } while (lVar26 != 0);
            }
          }
          else if (*(char *)((longlong)param_1 + 0x19) == '\x04') {
            if ((char)param_1[0x8b] == '\0') {
              if (0 < local_1a0) {
                pbVar20 = local_148;
                puVar17 = (undefined1 *)(lVar30 + 2);
                lVar26 = local_1a0;
                do {
                  bVar2 = *pbVar20;
                  pbVar1 = pbVar20 + (local_160 - (longlong)local_148);
                  pbVar20 = pbVar20 + 1;
                  uVar14 = (uint)*pbVar1 * (uint)bVar2 + 0x80;
                  puVar17[-2] = (char)((uVar14 >> 8) + uVar14 >> 8);
                  uVar14 = (uint)pbVar20[(longlong)(local_158 + (-1 - (longlong)local_148))] *
                           (uint)bVar2 + 0x80;
                  puVar17[-1] = (char)((uVar14 >> 8) + uVar14 >> 8);
                  bVar3 = pbVar20[(local_150 - (longlong)local_148) + -1];
                  puVar17[1] = 0xff;
                  uVar14 = (uint)bVar3 * (uint)bVar2 + 0x80;
                  *puVar17 = (char)((uVar14 >> 8) + uVar14 >> 8);
                  lVar26 = lVar26 + -1;
                  puVar17 = puVar17 + 4;
                } while (lVar26 != 0);
              }
            }
            else {
              local_1d0 = 4;
              if ((char)param_1[0x8b] == '\x02') {
                local_1d8 = iVar28;
                (*local_1b8)();
                lVar26 = 0;
                if (0 < lVar9) {
                  pbVar20 = (byte *)(lVar30 + 2);
                  do {
                    bVar2 = local_148[lVar26];
                    lVar26 = lVar26 + 1;
                    pbVar20[1] = 0xff;
                    uVar14 = (uint)(byte)~pbVar20[-2] * (uint)bVar2 + 0x80;
                    pbVar20[-2] = (byte)((uVar14 >> 8) + uVar14 >> 8);
                    uVar14 = (uint)(byte)~pbVar20[-1] * (uint)bVar2 + 0x80;
                    pbVar20[-1] = (byte)((uVar14 >> 8) + uVar14 >> 8);
                    uVar14 = (uint)(byte)~*pbVar20 * (uint)bVar2 + 0x80;
                    *pbVar20 = (byte)((uVar14 >> 8) + uVar14 >> 8);
                    pbVar20 = pbVar20 + 4;
                  } while (lVar26 < lVar9);
                }
              }
              else {
                local_1d8 = iVar28;
                (*local_1b8)();
                lVar26 = 0;
                if (0 < lVar9) {
                  pbVar20 = (byte *)(lVar30 + 3);
                  do {
                    pbVar1 = local_148 + lVar26;
                    lVar26 = lVar26 + 1;
                    *pbVar20 = *pbVar1;
                    pbVar20 = pbVar20 + 4;
                  } while (lVar26 < lVar9);
                }
              }
            }
          }
          else {
            lVar26 = 0;
            if (0 < local_1a0) {
              puVar17 = (undefined1 *)(lVar30 + 1);
              do {
                uVar4 = *(undefined1 *)(lVar26 + local_160);
                lVar26 = lVar26 + 1;
                puVar17[1] = uVar4;
                *puVar17 = uVar4;
                puVar17[-1] = uVar4;
                puVar17[2] = 0xff;
                puVar17 = puVar17 + 4;
              } while (lVar26 < local_1a0);
            }
          }
          local_1c8 = local_1c8 + 1;
          piVar22 = param_1;
        } while (local_1c8 < (uint)param_1[5]);
      }
      plVar24 = (longlong *)(param_1 + 0x242);
      lVar26 = 4;
      do {
        if (*plVar24 != 0) {
          (*(code *)PTR_free_154df4930)();
        }
        plVar24 = plVar24 + 1;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      plVar24 = (longlong *)(param_1 + 0xae);
      lVar26 = 0x10;
      do {
        if (plVar24[-1] != 0) {
          (*(code *)PTR_free_154df4930)();
        }
        if (*plVar24 != 0) {
          (*(code *)PTR_free_154df4930)();
        }
        if (plVar24[1] != 0) {
          (*(code *)PTR_free_154df4930)();
        }
        plVar24 = plVar24 + 0xd;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      plVar24 = local_140;
      lVar26 = 4;
      do {
        if (*plVar24 != 0) {
          (*(code *)PTR_free_154df4930)();
        }
        plVar24 = plVar24 + 1;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      *local_178 = param_1[4];
      *local_170 = param_1[5];
      *local_168 = 4;
    }
  }
  else {
    local_190 = 0;
  }
  return local_190;
}

// uejpeg_decode_threaded_start @ 14f64e840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
uejpeg_decode_threaded_start
          (undefined4 *param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined4 uVar11;
  longlong lVar12;
  short *psVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ushort *puVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  uint uVar19;
  uint *puVar20;
  ulonglong uVar21;
  uint uVar22;
  longlong *plVar24;
  undefined1 auStack_738 [32];
  uint local_718;
  int iStack_714;
  longlong local_710;
  undefined8 local_708;
  undefined1 local_700 [1712];
  int local_50;
  short local_4c;
  ulonglong local_48;
  ulonglong uVar23;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_738;
  uVar21 = 0;
  *param_1 = 0;
  local_710 = param_2;
  local_708 = param_3;
  memset(param_1 + 1,0,0x924);
  param_1[2] = param_4;
  lVar12 = (**(code **)(param_2 + 8))(param_3,&local_50,6);
  if ((((((lVar12 == 6) && (local_50 == _s_OOJPEG)) && (local_4c == DAT_153479024)) &&
       ((lVar12 = (**(code **)(param_2 + 8))(param_3,&local_718,8), lVar12 == 8 &&
        (iStack_714 == 0x52444849)))) &&
      (lVar12 = (**(code **)(param_2 + 8))(param_3,param_1 + 3,0x10), lVar12 == 0x10)) &&
     (((param_1[3] == 4 && (iVar3 = param_1[4], iVar3 != 0)) &&
      ((iVar3 < 0x1000001 && ((iVar4 = param_1[5], iVar4 != 0 && (iVar4 < 0x1000001)))))))) {
    bVar1 = *(byte *)((longlong)param_1 + 0x19);
    uVar23 = (ulonglong)bVar1;
    if (((bVar1 - 1 & 0xfffffffc) == 0) &&
       (((((bVar1 != 2 && (*(char *)(param_1 + 6) == '\b')) &&
          (iVar10 = FUN_14f64a980(iVar3,iVar4,bVar1,0), iVar10 != 0)) &&
         (((byte)(*(char *)((longlong)param_1 + 0x1b) - 1U) < 0x10 &&
          ((uint)bVar1 * iVar4 * iVar3 != 0)))) &&
        (((lVar12 = (**(code **)(param_2 + 8))(param_3,&local_718,8), lVar12 == 8 &&
          ((iStack_714 == 0x5244484c &&
           (lVar12 = (**(code **)(param_2 + 8))(param_3,param_1 + 7,0x216), lVar12 == 0x216)))) &&
         ((byte)(*(char *)(param_1 + 0x8b) + 1U) < 4)))))) {
      uVar22 = 1;
      uVar19 = 1;
      if (bVar1 != 0) {
        uVar18 = (ulonglong)(uint)bVar1;
        puVar16 = (ushort *)((longlong)param_1 + 0x1e);
        do {
          if (uVar22 < puVar16[-1]) {
            uVar22 = (uint)puVar16[-1];
          }
          if (uVar19 < *puVar16) {
            uVar19 = (uint)*puVar16;
          }
          uVar18 = uVar18 - 1;
          puVar16 = puVar16 + 2;
        } while (uVar18 != 0);
      }
      if (bVar1 != 0) {
        puVar16 = (ushort *)(param_1 + 7);
        uVar18 = uVar21;
        do {
          uVar2 = *puVar16;
          if (((((int)(iVar3 + 7 + (iVar3 + 7 >> 0x1f & 7U)) >> 3) * 8 + 8 < (int)((uint)uVar2 * 8))
              || ((int)((uint)uVar2 * 8) <
                  (int)((longlong)
                        ((longlong)(int)(iVar3 + (iVar3 >> 0x1f & 7U)) & 0xfffffffffffffff8U) /
                       (longlong)(int)((ulonglong)uVar22 / (ulonglong)(longlong)(int)(uint)uVar2))))
             || ((uint)puVar16[1] * (uint)uVar2 == 0)) goto LAB_14f64ed00;
          uVar18 = uVar18 + 1;
          puVar16 = puVar16 + 2;
          param_2 = local_710;
        } while ((longlong)uVar18 < (longlong)uVar23);
      }
      if (uVar23 < 4) {
        psVar13 = (short *)((longlong)param_1 + uVar23 * 4 + 0x1e);
        uVar18 = uVar23;
        do {
          if ((psVar13[-1] != 0) || (*psVar13 != 0)) goto LAB_14f64ed00;
          uVar18 = uVar18 + 1;
          psVar13 = psVar13 + 2;
        } while ((longlong)uVar18 < 4);
      }
      if (bVar1 != 0) {
        puVar16 = (ushort *)((longlong)param_1 + 0x1e);
        uVar18 = uVar21;
        do {
          if ((1 < (int)((ulonglong)uVar22 / (ulonglong)(longlong)(int)(uint)puVar16[-1]) - 1U) ||
             (1 < (int)((ulonglong)uVar19 / (ulonglong)(longlong)(int)(uint)*puVar16) - 1U)) {
            uVar11 = 9;
            goto LAB_14f64ed05;
          }
          if (((int)((ulonglong)uVar22 % (ulonglong)(longlong)(int)(uint)puVar16[-1]) != 0) ||
             ((int)((ulonglong)uVar19 % (ulonglong)(longlong)(int)(uint)*puVar16) != 0))
          goto LAB_14f64ed00;
          uVar18 = uVar18 + 1;
          puVar16 = puVar16 + 2;
        } while ((longlong)uVar18 < (longlong)uVar23);
      }
      puVar14 = (undefined8 *)
                FUN_14f647520(local_700,*(undefined1 *)((longlong)param_1 + 0x1b),param_1 + 7);
      uVar8 = local_708;
      lVar12 = 0xd;
      puVar9 = (undefined8 *)(param_1 + 0x8e);
      do {
        puVar17 = puVar9;
        puVar15 = puVar14;
        uVar7 = puVar15[1];
        *puVar17 = *puVar15;
        puVar17[1] = uVar7;
        uVar7 = puVar15[3];
        puVar17[2] = puVar15[2];
        puVar17[3] = uVar7;
        uVar7 = puVar15[5];
        puVar17[4] = puVar15[4];
        puVar17[5] = uVar7;
        uVar7 = puVar15[7];
        puVar17[6] = puVar15[6];
        puVar17[7] = uVar7;
        uVar7 = puVar15[9];
        puVar17[8] = puVar15[8];
        puVar17[9] = uVar7;
        uVar7 = puVar15[0xb];
        puVar17[10] = puVar15[10];
        puVar17[0xb] = uVar7;
        uVar7 = puVar15[0xd];
        puVar17[0xc] = puVar15[0xc];
        puVar17[0xd] = uVar7;
        uVar7 = puVar15[0xf];
        puVar17[0xe] = puVar15[0xe];
        puVar17[0xf] = uVar7;
        lVar12 = lVar12 + -1;
        puVar14 = puVar15 + 0x10;
        puVar9 = puVar17 + 0x10;
      } while (lVar12 != 0);
      uVar7 = puVar15[0x11];
      puVar17[0x10] = puVar15[0x10];
      puVar17[0x11] = uVar7;
      uVar7 = puVar15[0x13];
      puVar17[0x12] = puVar15[0x12];
      puVar17[0x13] = uVar7;
      uVar11 = *(undefined4 *)((longlong)puVar15 + 0xa4);
      uVar5 = *(undefined4 *)(puVar15 + 0x15);
      uVar6 = *(undefined4 *)((longlong)puVar15 + 0xac);
      *(undefined4 *)(puVar17 + 0x14) = *(undefined4 *)(puVar15 + 0x14);
      *(undefined4 *)((longlong)puVar17 + 0xa4) = uVar11;
      *(undefined4 *)(puVar17 + 0x15) = uVar5;
      *(undefined4 *)((longlong)puVar17 + 0xac) = uVar6;
      if (*(char *)((longlong)param_1 + 0x1b) != '\0') {
        puVar20 = param_1 + 0xb2;
        uVar23 = uVar21;
        do {
          lVar12 = (**(code **)(param_2 + 8))(uVar8,&local_718,8);
          if ((lVar12 != 8) || (iStack_714 != 0x544c5053)) goto LAB_14f64ed00;
          lVar12 = (*(code *)PTR_malloc_154df4928)(local_718);
          *(longlong *)(puVar20 + -2) = lVar12;
          *puVar20 = local_718;
          if ((local_718 != puVar20[1] * 2) && (*(char *)((longlong)param_1 + 0x1a) == '\0'))
          goto LAB_14f64ed00;
          if (lVar12 == 0) goto LAB_14f64ecf9;
          uVar18 = (**(code **)(param_2 + 8))(uVar8,lVar12,local_718);
          if (uVar18 != local_718) goto LAB_14f64ed00;
          uVar22 = (int)uVar23 + 1;
          uVar23 = (ulonglong)uVar22;
          puVar20 = puVar20 + 0x1a;
        } while ((int)uVar22 < (int)(uint)*(byte *)((longlong)param_1 + 0x1b));
      }
      plVar24 = (longlong *)(param_1 + 0x242);
      puVar16 = (ushort *)((longlong)param_1 + 0x1e);
      while( true ) {
        *(uint *)(puVar16 + 0x465) = (uint)puVar16[-1] * 8;
        *(uint *)(puVar16 + 0x46d) = (uint)*puVar16 * 8;
        lVar12 = (*(code *)PTR_malloc_154df4928)
                           ((longlong)(int)((uint)*puVar16 * (uint)puVar16[-1] * 0x40));
        *plVar24 = lVar12;
        if (lVar12 == 0) break;
        uVar21 = uVar21 + 1;
        plVar24 = plVar24 + 1;
        puVar16 = puVar16 + 2;
        if (3 < (longlong)uVar21) {
          param_1[1] = (uint)*(byte *)((longlong)param_1 + 0x1b);
          return param_1;
        }
      }
LAB_14f64ecf9:
      uVar11 = 6;
      goto LAB_14f64ed05;
    }
  }
LAB_14f64ed00:
  uVar11 = 4;
LAB_14f64ed05:
  *param_1 = uVar11;
  uejpeg_free_decode_context(param_1);
  return param_1;
}

// uejpeg_decode_to_jpeg @ 14f64ed50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
uejpeg_decode_to_jpeg(ulonglong param_1,ulonglong param_2,undefined8 *param_3,undefined8 param_4)

{
  int *piVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  int iVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  void *_Src;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  uint *puVar21;
  uint uVar22;
  uint *puVar23;
  longlong lVar24;
  longlong lVar25;
  char cVar26;
  undefined8 uVar27;
  int *piVar28;
  longlong *plVar29;
  ulonglong uVar30;
  longlong lVar31;
  ulonglong uVar32;
  uint uVar33;
  uint uVar34;
  longlong lVar35;
  longlong lVar36;
  int iVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  longlong lVar40;
  longlong lVar41;
  longlong lVar42;
  int iVar43;
  undefined1 auStack_1128 [32];
  int *local_1108;
  undefined4 local_1100;
  undefined *local_10f8;
  undefined *local_10f0;
  char local_10e8 [8];
  uint local_10e0;
  int local_10dc;
  uint local_10d8;
  uint local_10d4;
  undefined4 local_10d0;
  undefined4 local_10cc;
  undefined4 local_10c8;
  uint *local_10c0;
  uint *local_10b8;
  ulonglong local_10b0;
  ulonglong local_10a8;
  ulonglong local_10a0;
  undefined8 local_1098;
  int local_1090;
  undefined8 *local_1088;
  uint local_1080;
  int iStack_107c;
  ulonglong local_1078;
  longlong local_1070;
  ulonglong local_1068;
  int local_1060;
  undefined8 local_105c;
  undefined4 local_1054;
  ushort local_1048 [8];
  char acStack_1038 [128];
  char acStack_fb8 [384];
  char local_e38;
  undefined8 local_e28 [10];
  uint local_dd8 [4];
  uint local_dc8 [8];
  longlong local_da8 [2];
  int aiStack_d94 [391];
  int local_778 [64];
  undefined1 local_678 [256];
  undefined1 local_578 [256];
  int local_478 [64];
  undefined1 local_378 [256];
  undefined1 local_278 [512];
  undefined4 local_78;
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_72;
  undefined1 local_71;
  undefined1 local_70;
  undefined2 local_6f;
  char local_6d;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int local_60;
  short local_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_1128;
  uVar27 = 4;
  local_10a8 = param_2;
  local_1098 = param_4;
  local_1088 = param_3;
  local_1078 = param_1;
  lVar15 = (**(code **)(param_1 + 8))(param_2,&local_60,6);
  if (((lVar15 != 6) || (local_60 != _s_OOJPEG)) || (local_5c != DAT_153479024)) {
    return 3;
  }
  uVar32 = 0;
  uVar33 = 0;
  local_1060 = 0;
  local_105c = 0;
  local_1054 = 0;
  memset(local_1048,0,0x216);
  memset(local_e28,0,0x6b0);
  local_10d0 = 0;
  local_1090 = 0;
  local_10dc = 0;
  local_10cc = 0;
  local_10c8 = 0;
  local_10e0 = 0;
  lVar15 = (**(code **)(param_1 + 8))(param_2,&local_1080,8);
  if (((lVar15 != 8) || (iStack_107c != 0x52444849)) ||
     ((lVar15 = (**(code **)(param_1 + 8))(param_2,&local_1060,0x10), lVar15 != 0x10 ||
      (local_1060 != 4)))) {
LAB_14f64eeb9:
    lVar15 = 0x10;
    plVar29 = local_da8;
    do {
      if (plVar29[-1] != 0) {
        (*(code *)PTR_free_154df4930)();
      }
      if (*plVar29 != 0) {
        (*(code *)PTR_free_154df4930)();
      }
      if (plVar29[1] != 0) {
        (*(code *)PTR_free_154df4930)();
      }
      plVar29 = plVar29 + 0xd;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    return uVar27;
  }
  iVar43 = (int)local_105c;
  local_10c0 = (uint *)CONCAT44(local_10c0._4_4_,(int)local_105c);
  if (((int)local_105c == 0) || (0x1000000 < (int)local_105c)) goto LAB_14f64eeb9;
  local_1070 = CONCAT44(local_1070._4_4_,local_105c._4_4_);
  if ((local_105c._4_4_ == 0) || (0x1000000 < local_105c._4_4_)) goto LAB_14f64eeb9;
  uVar30 = (ulonglong)local_1054._1_1_;
  if (local_1054._1_1_ != 3) {
    uVar27 = 7;
    goto LAB_14f64eeb9;
  }
  if ((char)local_1054 != '\b') goto LAB_14f64eeb9;
  local_10b0 = CONCAT44(local_10b0._4_4_,(uint)local_1054._3_1_);
  if (0xf < local_1054._3_1_ - 1) goto LAB_14f64eeb9;
  iVar37 = 0;
  iVar14 = FUN_14f64a980(local_105c & 0xffffffff,local_105c._4_4_,3,0);
  if ((((iVar14 == 0) || ((int)local_1070 * iVar43 * 3 == 0)) ||
      (lVar15 = (**(code **)(param_1 + 8))(param_2,&local_1080,iVar37 + 8), lVar15 != 8)) ||
     ((iStack_107c != 0x5244484c ||
      (lVar15 = (**(code **)(param_1 + 8))(param_2,local_1048,0x216), uVar18 = local_10b0,
      lVar15 != 0x216)))) goto LAB_14f64eeb9;
  local_10b8 = (uint *)((ulonglong)local_10b8 & 0xffffffff00000000);
  local_10d4 = 0;
  local_10d8 = 0;
  if (3 < (byte)(local_e38 + 1U)) goto LAB_14f64eeb9;
  uVar38 = 1;
  uVar22 = 1;
  uVar19 = uVar32;
  do {
    if ((uint)uVar38 < (uint)local_1048[uVar19 * 2]) {
      uVar38 = (ulonglong)local_1048[uVar19 * 2];
    }
    if (uVar22 < local_1048[uVar19 * 2 + 1]) {
      uVar22 = (uint)local_1048[uVar19 * 2 + 1];
    }
    uVar19 = uVar19 + 1;
  } while ((longlong)uVar19 < 3);
  iVar43 = iVar43 + 7;
  uVar19 = uVar32;
  do {
    uVar2 = local_1048[uVar19 * 2];
    local_1068 = uVar30;
    if (((int)(iVar43 + (iVar43 >> 0x1f & 7U)) >> 3) * 8 + 8 < (int)((uint)uVar2 * 8))
    goto LAB_14f64eeb9;
    if (((int)((uint)uVar2 * 8) <
         (int)((longlong)
               ((longlong)(int)((int)local_10c0 + ((int)local_10c0 >> 0x1f & 7U)) &
               0xfffffffffffffff8U) /
              (longlong)(int)(uVar38 / (ulonglong)(longlong)(int)(uint)uVar2))) ||
       ((uint)local_1048[uVar19 * 2 + 1] * (uint)uVar2 == 0)) goto LAB_14f64eeb9;
    uVar19 = uVar19 + 1;
  } while ((longlong)uVar19 < 3);
  iVar43 = (uint)local_10b0;
  lVar15 = 3;
  do {
    if ((local_1048[lVar15 * 2] != 0) || (local_1048[lVar15 * 2 + 1] != 0)) goto LAB_14f64eeb9;
    lVar15 = lVar15 + 1;
    uVar30 = uVar32;
  } while (lVar15 < 4);
  do {
    if (((int)(uVar38 % (ulonglong)(longlong)(int)(uint)local_1048[uVar30 * 2]) != 0) ||
       ((int)((ulonglong)uVar22 % (ulonglong)(longlong)(int)(uint)local_1048[uVar30 * 2 + 1]) != 0))
    goto LAB_14f64eeb9;
    iVar14 = (int)(uVar38 / (ulonglong)(longlong)(int)(uint)local_1048[uVar30 * 2]);
    if ((1 < iVar14 - 1U) ||
       (iVar37 = (int)((ulonglong)uVar22 /
                      (ulonglong)(longlong)(int)(uint)local_1048[uVar30 * 2 + 1]), 1 < iVar37 - 1U))
    {
LAB_14f64f2a0:
      uVar27 = 9;
      goto LAB_14f64eeb9;
    }
    if (iVar14 == 2) {
      if (iVar37 == 1) {
        local_10b8 = (uint *)CONCAT44(local_10b8._4_4_,1);
      }
      else {
        if (iVar37 != 2) goto LAB_14f64f2a0;
        local_10d4 = 1;
      }
    }
    else if ((iVar14 == 1) && (iVar37 == 2)) {
      local_10d8 = 1;
    }
    else if (iVar14 != iVar37) goto LAB_14f64f2a0;
    uVar30 = uVar30 + 1;
  } while ((longlong)uVar30 < 3);
  puVar16 = (undefined8 *)FUN_14f647520(local_778,(uint)local_10b0,local_1048);
  lVar15 = 0xd;
  puVar13 = local_e28;
  do {
    puVar20 = puVar13;
    puVar17 = puVar16;
    uVar9 = puVar17[1];
    uVar10 = puVar17[2];
    uVar11 = puVar17[3];
    *puVar20 = *puVar17;
    puVar20[1] = uVar9;
    uVar9 = puVar17[4];
    uVar12 = puVar17[5];
    puVar20[2] = uVar10;
    puVar20[3] = uVar11;
    uVar10 = puVar17[6];
    uVar11 = puVar17[7];
    puVar20[4] = uVar9;
    puVar20[5] = uVar12;
    uVar9 = puVar17[8];
    uVar12 = puVar17[9];
    puVar20[6] = uVar10;
    puVar20[7] = uVar11;
    uVar10 = puVar17[10];
    uVar11 = puVar17[0xb];
    puVar20[8] = uVar9;
    puVar20[9] = uVar12;
    uVar9 = puVar17[0xc];
    uVar12 = puVar17[0xd];
    puVar20[10] = uVar10;
    puVar20[0xb] = uVar11;
    uVar10 = puVar17[0xe];
    uVar11 = puVar17[0xf];
    puVar20[0xc] = uVar9;
    puVar20[0xd] = uVar12;
    puVar20[0xe] = uVar10;
    puVar20[0xf] = uVar11;
    lVar15 = lVar15 + -1;
    puVar16 = puVar17 + 0x10;
    puVar13 = puVar20 + 0x10;
  } while (lVar15 != 0);
  local_10b0 = 0;
  uVar9 = puVar17[0x11];
  uVar10 = puVar17[0x12];
  uVar11 = puVar17[0x13];
  puVar20[0x10] = puVar17[0x10];
  puVar20[0x11] = uVar9;
  uVar5 = *(undefined4 *)(puVar17 + 0x14);
  uVar6 = *(undefined4 *)((longlong)puVar17 + 0xa4);
  uVar7 = *(undefined4 *)(puVar17 + 0x15);
  uVar8 = *(undefined4 *)((longlong)puVar17 + 0xac);
  local_10a0 = uVar18 & 0xffffffff;
  puVar20[0x12] = uVar10;
  puVar20[0x13] = uVar11;
  *(undefined4 *)(puVar20 + 0x14) = uVar5;
  *(undefined4 *)((longlong)puVar20 + 0xa4) = uVar6;
  *(undefined4 *)(puVar20 + 0x15) = uVar7;
  *(undefined4 *)((longlong)puVar20 + 0xac) = uVar8;
  if (iVar43 != 0) {
    piVar28 = aiStack_d94;
    do {
      lVar15 = (**(code **)(param_1 + 8))(param_2,&local_1080,8);
      if ((lVar15 != 8) || (iStack_107c != 0x544c5053)) goto LAB_14f64eeb9;
      _Src = (void *)(*(code *)PTR_malloc_154df4928)(local_1080);
      *(void **)(piVar28 + -3) = _Src;
      if (_Src == (void *)0x0) {
        uVar27 = 6;
        goto LAB_14f64eeb9;
      }
      iVar43 = *piVar28;
      if ((piVar28[-1] != iVar43 * 2) && (local_1054._2_1_ == '\0')) goto LAB_14f64eeb9;
      uVar18 = (ulonglong)local_1080;
      uVar30 = (**(code **)(local_1078 + 8))(local_10a8,_Src,local_1080);
      if (uVar30 != uVar18) goto LAB_14f64eeb9;
      if (local_1054._2_1_ == '\0') {
        memcpy(*(void **)(piVar28 + -5),_Src,uVar18);
      }
      else if ((local_1080 != 0) &&
              (iVar14 = (*(code *)PTR_FUN_154df48b0)
                                  (_Src,uVar18,*(undefined8 *)(piVar28 + -5),(longlong)(iVar43 * 2))
              , iVar14 == 0)) goto LAB_14f64eeb9;
      FUN_14f646e20(*(longlong *)(piVar28 + -5),*(longlong *)(piVar28 + -5) + (longlong)iVar43,
                    *(undefined8 *)(piVar28 + -7),iVar43);
      piVar28 = piVar28 + 0x1a;
      local_10b0 = local_10b0 + 1;
      param_1 = local_1078;
      param_2 = local_10a8;
    } while ((longlong)local_10b0 < (longlong)local_10a0);
  }
  puVar16 = local_1088;
  uVar27 = local_1098;
  (*(code *)*local_1088)(local_1098,&DAT_153478d10,0x19);
  piVar28 = &DAT_153477360;
  do {
    local_10e8[0] = acStack_1038[(longlong)*piVar28 * 2 + 1];
    (*(code *)*puVar16)(uVar27,local_10e8,1);
    local_10e8[0] = acStack_1038[(longlong)*piVar28 * 2];
    (*(code *)*puVar16)(uVar27,local_10e8,1);
    piVar28 = piVar28 + 1;
  } while ((longlong)piVar28 < 0x153477460);
  local_10e8[0] = '\x11';
  (*(code *)*puVar16)(uVar27,local_10e8,1);
  piVar28 = &DAT_153477360;
  do {
    local_10e8[0] = acStack_fb8[(longlong)*piVar28 * 2 + 1];
    (*(code *)*puVar16)(uVar27,local_10e8,1);
    local_10e8[0] = acStack_fb8[(longlong)*piVar28 * 2];
    (*(code *)*puVar16)(uVar27,local_10e8,1);
    uVar34 = local_10d4;
    uVar22 = local_10d8;
    piVar28 = piVar28 + 1;
  } while ((longlong)piVar28 < 0x153477460);
  iVar43 = (uint)local_10b8;
  local_73 = (undefined1)((ulonglong)local_1070 >> 8);
  local_72 = (undefined1)local_1070;
  local_78 = 0x1100c0ff;
  local_74 = 8;
  local_6f = 0x103;
  local_6c = 0x1110200;
  local_68 = 0xff011103;
  local_64 = 0xa201c4;
  local_71 = (undefined1)((ulonglong)local_10c0 >> 8);
  local_70 = SUB81(local_10c0,0);
  if ((uint)local_10b8 == 0) {
    if (local_10d4 == 0) {
      local_6d = (local_10d8 != 0) + '\x11';
    }
    else {
      local_6d = '\"';
    }
  }
  else {
    local_6d = '!';
  }
  lVar15 = (*(code *)*puVar16)(uVar27,&local_78,0x18);
  if (lVar15 != 0x18) {
    uVar27 = 5;
    goto LAB_14f64eeb9;
  }
  lVar15 = (*(code *)*puVar16)(uVar27,&DAT_153477b19,0x10);
  if (lVar15 != 0x10) {
    uVar27 = 5;
    goto LAB_14f64eeb9;
  }
  lVar15 = (*(code *)*puVar16)(uVar27,&DAT_153477b30,0xc);
  if (lVar15 != 0xc) {
    uVar27 = 5;
    goto LAB_14f64eeb9;
  }
  local_10e8[0] = '\x10';
  (*(code *)*puVar16)(uVar27,local_10e8,1);
  lVar15 = (*(code *)*puVar16)(uVar27,&DAT_153477b41,0x10);
  if (lVar15 != 0x10) {
    uVar27 = 5;
    goto LAB_14f64eeb9;
  }
  lVar15 = (*(code *)*puVar16)(uVar27,&DAT_153477b60,0xa2);
  if (lVar15 != 0xa2) {
    uVar27 = 5;
    goto LAB_14f64eeb9;
  }
  local_10e8[0] = '\x01';
  (*(code *)*puVar16)(uVar27,local_10e8,1);
  lVar15 = (*(code *)*puVar16)(uVar27,&DAT_153477c09,0x10);
  if (lVar15 != 0x10) {
    uVar27 = 5;
    goto LAB_14f64eeb9;
  }
  lVar15 = (*(code *)*puVar16)(uVar27,&DAT_153477c20,0xc);
  if (lVar15 != 0xc) {
    uVar27 = 5;
    goto LAB_14f64eeb9;
  }
  local_10e8[0] = '\x11';
  (*(code *)*puVar16)(uVar27,local_10e8,1);
  lVar15 = (*(code *)*puVar16)(uVar27,&DAT_153477c31,0x10);
  if (lVar15 != 0x10) {
    uVar27 = 5;
    goto LAB_14f64eeb9;
  }
  lVar15 = (*(code *)*puVar16)(uVar27,&DAT_153477c50,0xa2);
  if (lVar15 != 0xa2) {
    uVar27 = 5;
    goto LAB_14f64eeb9;
  }
  lVar15 = (*(code *)*puVar16)(uVar27,&DAT_153478d78,0xe);
  if (lVar15 != 0xe) {
    uVar27 = 5;
    goto LAB_14f64eeb9;
  }
  iVar14 = local_1090;
  if (uVar34 == 0) {
    if (iVar43 != 0) {
LAB_14f64f850:
      if (local_10a0 != 0) {
        puVar21 = local_dd8;
        do {
          uVar33 = puVar21[4];
          local_10d8 = 0;
          if (0 < (int)uVar33) {
            uVar22 = *puVar21;
            uVar30 = uVar32;
            local_10c0 = puVar21;
            do {
              local_10d4 = 0;
              uVar34 = (uint)uVar30;
              if (0 < (int)uVar22) {
                local_10a8 = *(ulonglong *)(puVar21 + 10);
                iVar43 = uVar33 * uVar22;
                local_10b8 = (uint *)&DAT_00000002;
                local_10b0 = CONCAT44(local_10b0._4_4_,iVar43);
                uVar18 = uVar32;
                uVar19 = uVar32;
                do {
                  uVar27 = local_1098;
                  iVar14 = (int)uVar30;
                  uVar33 = (uint)uVar18;
                  if (iVar14 < iVar14 + 1) {
                    uVar18 = (ulonglong)(uint)((iVar14 + 1) - iVar14);
                    lVar15 = local_10a8 + ((longlong)(int)(uVar22 * iVar14) + uVar19) * 2;
                    uVar30 = uVar32;
                    do {
                      if ((longlong)uVar19 < (longlong)local_10b8) {
                        lVar31 = (longlong)local_10b8 - uVar19;
                        lVar42 = uVar30 << 6;
                        uVar30 = uVar30 + lVar31;
                        uVar38 = uVar32;
                        lVar35 = lVar15;
                        do {
                          do {
                            uVar39 = uVar38 + 4;
                            local_778[*(int *)((longlong)&DAT_153477460 + uVar38) + lVar42] =
                                 *(short *)(lVar35 + (longlong)
                                                     (*(int *)((longlong)&DAT_153477360 + uVar38) *
                                                     iVar43) * 2) + -0x80;
                            uVar38 = uVar39;
                          } while ((longlong)uVar39 < 0x100);
                          lVar35 = lVar35 + 2;
                          lVar42 = lVar42 + 0x40;
                          lVar31 = lVar31 + -1;
                          uVar38 = uVar32;
                        } while (lVar31 != 0);
                      }
                      lVar15 = lVar15 + (longlong)(int)uVar22 * 2;
                      uVar18 = uVar18 - 1;
                      puVar21 = local_10c0;
                      puVar16 = local_1088;
                      uVar33 = local_10d4;
                    } while (uVar18 != 0);
                  }
                  lVar15 = local_10a8 + (longlong)(iVar43 << 6) * 2;
                  if (1 < local_1068) {
                    lVar35 = local_1068 - 1;
                    lVar42 = 0x40;
                    puVar21 = puVar21 + 5;
                    do {
                      uVar22 = puVar21[-4];
                      iVar43 = uVar22 * *puVar21;
                      uVar30 = uVar32;
                      do {
                        piVar28 = (int *)((longlong)&DAT_153477360 + uVar30);
                        piVar1 = (int *)((longlong)&DAT_153477460 + uVar30);
                        uVar30 = uVar30 + 4;
                        local_478[*piVar1 + lVar42] =
                             *(short *)(lVar15 + ((longlong)(int)(uVar22 * local_10d8) +
                                                 (longlong)((int)uVar33 / 2)) * 2 +
                                       (longlong)(*piVar28 * iVar43) * 2) + -0x80;
                      } while ((longlong)uVar30 < 0x100);
                      puVar21 = puVar21 + 1;
                      lVar42 = lVar42 + 0x40;
                      lVar15 = lVar15 + (longlong)(iVar43 * 0x40) * 2;
                      lVar35 = lVar35 + -1;
                    } while (lVar35 != 0);
                    puVar16 = local_1088;
                    iVar43 = (uint)local_10b0;
                  }
                  local_10f0 = &DAT_153478500;
                  local_10f8 = &DAT_153477d00;
                  local_1100 = local_10d0;
                  local_1108 = local_778;
                  local_1100 = FUN_14f646fc0(puVar16,local_1098,&local_10e0,&local_10dc);
                  local_10f0 = &DAT_153478500;
                  local_10f8 = &DAT_153477d00;
                  local_1108 = (int *)local_678;
                  local_10d0 = FUN_14f646fc0(puVar16,uVar27,&local_10e0,&local_10dc);
                  local_10f0 = &DAT_153478900;
                  local_10f8 = &DAT_153478100;
                  local_1100 = local_10cc;
                  local_1108 = (int *)local_378;
                  local_10cc = FUN_14f646fc0(puVar16,uVar27,&local_10e0,&local_10dc);
                  local_10f0 = &DAT_153478900;
                  local_10f8 = &DAT_153478100;
                  local_1100 = local_10c8;
                  local_1108 = (int *)local_278;
                  local_10c8 = FUN_14f646fc0(puVar16,uVar27,&local_10e0,&local_10dc);
                  uVar19 = uVar19 + 2;
                  local_10d4 = local_10d4 + 2;
                  uVar18 = (ulonglong)local_10d4;
                  local_10b8 = (uint *)((longlong)local_10b8 + 2);
                  uVar30 = (ulonglong)local_10d8;
                  uVar22 = *local_10c0;
                  puVar21 = local_10c0;
                } while ((int)local_10d4 < (int)uVar22);
                uVar33 = local_10c0[4];
                uVar34 = local_10d8;
              }
              local_10d8 = uVar34 + 1;
              uVar30 = (ulonglong)local_10d8;
            } while ((int)local_10d8 < (int)uVar33);
          }
          puVar21 = puVar21 + 0x1a;
          local_10a0 = local_10a0 - 1;
        } while (local_10a0 != 0);
        local_10a0 = 0;
        uVar27 = local_1098;
        iVar14 = local_10dc;
        uVar33 = local_10e0;
        local_10c0 = puVar21;
      }
      goto LAB_14f650369;
    }
    if (uVar22 == 0) {
      if (local_10a0 != 0) {
        puVar21 = local_dc8;
        do {
          uVar33 = *puVar21;
          uVar22 = puVar21[-4];
          uVar30 = (ulonglong)(int)uVar22;
          local_10b0 = CONCAT44(local_10b0._4_4_,uVar22);
          if (0 < (int)uVar33) {
            local_10a8 = 0;
            puVar23 = (uint *)(uVar30 * 2);
            local_1078 = (ulonglong)uVar33;
            local_10c0 = puVar23;
            local_10b8 = puVar21;
            do {
              puVar16 = local_1088;
              if (0 < (int)uVar30) {
                lVar15 = *(longlong *)(puVar21 + 6) + local_10a8;
                uVar30 = uVar30 & 0xffffffff;
                uVar18 = local_1068;
                do {
                  if (uVar18 != 0) {
                    uVar19 = uVar32;
                    uVar38 = uVar18;
                    uVar39 = uVar32;
                    lVar35 = lVar15;
                    do {
                      do {
                        uVar18 = uVar19 + 4;
                        local_778[(longlong)*(int *)((longlong)&DAT_153477460 + uVar19) + uVar39] =
                             *(short *)(lVar35 + (longlong)
                                                 (int)(*(int *)((longlong)&DAT_153477360 + uVar19) *
                                                      uVar33 * uVar22) * 2) + -0x80;
                        uVar19 = uVar18;
                      } while ((longlong)uVar18 < 0x100);
                      lVar35 = lVar35 + (longlong)(int)(uVar33 * uVar22 * 0x40) * 2;
                      uVar39 = uVar39 + 0x40;
                      uVar38 = uVar38 - 1;
                      uVar19 = uVar32;
                      uVar18 = local_1068;
                    } while (uVar38 != 0);
                  }
                  local_10f0 = &DAT_153478500;
                  local_10f8 = &DAT_153477d00;
                  local_1100 = local_10d0;
                  local_1108 = local_778;
                  local_10d0 = FUN_14f646fc0(puVar16,local_1098,&local_10e0,&local_10dc);
                  local_10f0 = &DAT_153478900;
                  local_10f8 = &DAT_153478100;
                  local_1100 = local_10cc;
                  local_1108 = (int *)local_678;
                  local_10cc = FUN_14f646fc0(puVar16,local_1098,&local_10e0,&local_10dc);
                  local_10f0 = &DAT_153478900;
                  local_10f8 = &DAT_153478100;
                  local_1100 = local_10c8;
                  local_1108 = (int *)local_578;
                  local_10c8 = FUN_14f646fc0(puVar16,local_1098,&local_10e0,&local_10dc);
                  lVar15 = lVar15 + 2;
                  uVar30 = uVar30 - 1;
                } while (uVar30 != 0);
                uVar30 = local_10b0 & 0xffffffff;
                puVar21 = local_10b8;
                puVar23 = local_10c0;
              }
              local_10a8 = local_10a8 + (longlong)puVar23;
              local_1078 = local_1078 - 1;
            } while (local_1078 != 0);
          }
          puVar21 = puVar21 + 0x1a;
          local_10a0 = local_10a0 - 1;
        } while (local_10a0 != 0);
        local_10a0 = 0;
        puVar16 = local_1088;
        uVar27 = local_1098;
        iVar14 = local_10dc;
        uVar33 = local_10e0;
        local_10b8 = puVar21;
      }
      goto LAB_14f650369;
    }
  }
  else {
    if (iVar43 != 0) goto LAB_14f64f850;
    if (uVar22 == 0) {
      if (local_10a0 != 0) {
        puVar21 = local_dd8;
        do {
          uVar33 = puVar21[4];
          local_10d8 = 0;
          if (0 < (int)uVar33) {
            uVar22 = *puVar21;
            local_10c0 = puVar21;
            do {
              local_10b8 = (uint *)0x0;
              local_10d4 = 0;
              if (0 < (int)uVar22) {
                local_10a8 = *(ulonglong *)(puVar21 + 10);
                iVar43 = uVar33 * uVar22;
                local_10b0 = 2;
                do {
                  uVar27 = local_1098;
                  puVar23 = local_10b8;
                  lVar15 = 0;
                  if ((int)local_10d8 < (int)(local_10d8 + 2)) {
                    uVar32 = (ulonglong)((local_10d8 + 2) - local_10d8);
                    lVar35 = local_10a8 +
                             (longlong)((longlong)(int)(uVar22 * local_10d8) + (longlong)local_10b8)
                             * 2;
                    lVar42 = lVar15;
                    do {
                      if ((longlong)local_10b8 < (longlong)local_10b0) {
                        lVar36 = local_10b0 - (longlong)local_10b8;
                        lVar40 = lVar42 << 6;
                        lVar42 = lVar42 + lVar36;
                        lVar31 = lVar15;
                        lVar25 = lVar35;
                        do {
                          do {
                            lVar41 = lVar31 + 4;
                            local_778[*(int *)((longlong)&DAT_153477460 + lVar31) + lVar40] =
                                 *(short *)(lVar25 + (longlong)
                                                     (*(int *)((longlong)&DAT_153477360 + lVar31) *
                                                     iVar43) * 2) + -0x80;
                            lVar31 = lVar41;
                          } while (lVar41 < 0x100);
                          lVar25 = lVar25 + 2;
                          lVar40 = lVar40 + 0x40;
                          lVar36 = lVar36 + -1;
                          lVar31 = lVar15;
                        } while (lVar36 != 0);
                      }
                      lVar35 = lVar35 + (longlong)(int)uVar22 * 2;
                      uVar32 = uVar32 - 1;
                      puVar21 = local_10c0;
                      puVar16 = local_1088;
                    } while (uVar32 != 0);
                  }
                  lVar15 = local_10a8 + (longlong)(iVar43 * 0x40) * 2;
                  if (1 < local_1068) {
                    lVar35 = local_1068 - 1;
                    lVar42 = 0x40;
                    puVar21 = puVar21 + 5;
                    do {
                      lVar31 = 0;
                      uVar33 = puVar21[-4];
                      uVar22 = puVar21[-4];
                      uVar34 = *puVar21;
                      do {
                        piVar28 = (int *)((longlong)&DAT_153477360 + lVar31);
                        piVar1 = (int *)((longlong)&DAT_153477460 + lVar31);
                        lVar31 = lVar31 + 4;
                        local_478[*piVar1 + lVar42] =
                             *(short *)(lVar15 + ((longlong)(int)(((int)local_10d8 / 2) * uVar22) +
                                                 (longlong)((int)local_10d4 / 2)) * 2 +
                                       (longlong)(int)(*piVar28 * uVar33 * uVar34) * 2) + -0x80;
                      } while (lVar31 < 0x100);
                      puVar21 = puVar21 + 1;
                      lVar42 = lVar42 + 0x40;
                      lVar15 = lVar15 + (longlong)(int)(uVar33 * uVar34 * 0x40) * 2;
                      lVar35 = lVar35 + -1;
                      puVar16 = local_1088;
                    } while (lVar35 != 0);
                  }
                  local_10f0 = &DAT_153478500;
                  local_10f8 = &DAT_153477d00;
                  local_1100 = local_10d0;
                  local_1108 = local_778;
                  local_1100 = FUN_14f646fc0(puVar16,local_1098,&local_10e0,&local_10dc);
                  local_10f0 = &DAT_153478500;
                  local_10f8 = &DAT_153477d00;
                  local_1108 = (int *)local_678;
                  local_1100 = FUN_14f646fc0(puVar16,uVar27,&local_10e0,&local_10dc);
                  local_10f0 = &DAT_153478500;
                  local_10f8 = &DAT_153477d00;
                  local_1108 = (int *)local_578;
                  local_1100 = FUN_14f646fc0(puVar16,uVar27,&local_10e0,&local_10dc);
                  local_10f0 = &DAT_153478500;
                  local_10f8 = &DAT_153477d00;
                  local_1108 = local_478;
                  local_10d0 = FUN_14f646fc0(puVar16,uVar27,&local_10e0,&local_10dc);
                  local_10f0 = &DAT_153478900;
                  local_10f8 = &DAT_153478100;
                  local_1100 = local_10cc;
                  local_1108 = (int *)local_378;
                  local_10cc = FUN_14f646fc0(puVar16,uVar27,&local_10e0,&local_10dc);
                  local_10f0 = &DAT_153478900;
                  local_10f8 = &DAT_153478100;
                  local_1100 = local_10c8;
                  local_1108 = (int *)local_278;
                  local_10c8 = FUN_14f646fc0(puVar16,uVar27,&local_10e0,&local_10dc);
                  local_10d4 = local_10d4 + 2;
                  local_10b0 = local_10b0 + 2;
                  local_10b8 = (uint *)((longlong)puVar23 + 2);
                  uVar22 = *local_10c0;
                  puVar21 = local_10c0;
                } while ((int)local_10d4 < (int)uVar22);
                uVar33 = local_10c0[4];
              }
              local_10d8 = local_10d8 + 2;
            } while ((int)local_10d8 < (int)uVar33);
          }
          puVar21 = puVar21 + 0x1a;
          local_10a0 = local_10a0 - 1;
        } while (local_10a0 != 0);
        local_10a0 = 0;
        uVar27 = local_1098;
        iVar14 = local_10dc;
        uVar33 = local_10e0;
        local_10c0 = puVar21;
      }
      goto LAB_14f650369;
    }
  }
  if (local_10a0 != 0) {
    puVar21 = local_dd8;
    do {
      uVar33 = puVar21[4];
      local_10d8 = 0;
      local_10b0 = CONCAT44(local_10b0._4_4_,uVar33);
      if (0 < (int)uVar33) {
        uVar22 = *puVar21;
        local_10b8 = (uint *)CONCAT44(local_10b8._4_4_,uVar22);
        local_10c0 = puVar21;
        do {
          lVar15 = 0;
          if (0 < (int)uVar22) {
            local_1078 = *(ulonglong *)(puVar21 + 10);
            local_10a8 = (ulonglong)uVar22;
            local_1070 = 1;
            uVar34 = uVar22;
            do {
              uVar27 = local_1098;
              lVar35 = 0;
              if ((int)local_10d8 < (int)(local_10d8 + 2)) {
                uVar32 = (ulonglong)((local_10d8 + 2) - local_10d8);
                lVar42 = local_1078 + ((int)(uVar34 * local_10d8) + lVar15) * 2;
                lVar31 = lVar35;
                do {
                  if (lVar15 < local_1070) {
                    lVar41 = local_1070 - lVar15;
                    lVar36 = lVar31 << 6;
                    lVar31 = lVar31 + lVar41;
                    lVar25 = lVar35;
                    lVar40 = lVar42;
                    do {
                      do {
                        lVar24 = lVar25 + 4;
                        local_778[*(int *)((longlong)&DAT_153477460 + lVar25) + lVar36] =
                             *(short *)(lVar40 + (longlong)
                                                 (int)(*(int *)((longlong)&DAT_153477360 + lVar25) *
                                                      uVar33 * uVar22) * 2) + -0x80;
                        lVar25 = lVar24;
                      } while (lVar24 < 0x100);
                      lVar40 = lVar40 + 2;
                      lVar36 = lVar36 + 0x40;
                      lVar41 = lVar41 + -1;
                      lVar25 = lVar35;
                    } while (lVar41 != 0);
                  }
                  lVar42 = lVar42 + (longlong)(int)uVar34 * 2;
                  uVar32 = uVar32 - 1;
                  puVar21 = local_10c0;
                  puVar16 = local_1088;
                } while (uVar32 != 0);
              }
              lVar35 = local_1078 + (longlong)(int)(uVar33 * uVar22 * 0x40) * 2;
              if (1 < local_1068) {
                puVar21 = puVar21 + 5;
                lVar42 = local_1068 - 1;
                lVar31 = 0x40;
                do {
                  lVar25 = 0;
                  uVar34 = *puVar21;
                  uVar3 = puVar21[-4];
                  uVar4 = puVar21[-4];
                  do {
                    piVar28 = (int *)((longlong)&DAT_153477360 + lVar25);
                    piVar1 = (int *)((longlong)&DAT_153477460 + lVar25);
                    lVar25 = lVar25 + 4;
                    local_478[*piVar1 + lVar31] =
                         *(short *)(lVar35 + ((int)(((int)local_10d8 / 2) * uVar3) + lVar15) * 2 +
                                   (longlong)(int)(*piVar28 * uVar34 * uVar4) * 2) + -0x80;
                  } while (lVar25 < 0x100);
                  puVar21 = puVar21 + 1;
                  lVar31 = lVar31 + 0x40;
                  lVar35 = lVar35 + (longlong)(int)(uVar34 * uVar4 * 0x40) * 2;
                  lVar42 = lVar42 + -1;
                  puVar16 = local_1088;
                } while (lVar42 != 0);
              }
              local_10f0 = &DAT_153478500;
              local_10f8 = &DAT_153477d00;
              local_1100 = local_10d0;
              local_1108 = local_778;
              local_1100 = FUN_14f646fc0(puVar16,local_1098,&local_10e0,&local_10dc);
              local_10f0 = &DAT_153478500;
              local_10f8 = &DAT_153477d00;
              local_1108 = (int *)local_678;
              local_10d0 = FUN_14f646fc0(puVar16,uVar27,&local_10e0,&local_10dc);
              local_10f0 = &DAT_153478900;
              local_10f8 = &DAT_153478100;
              local_1100 = local_10cc;
              local_1108 = (int *)local_378;
              local_10cc = FUN_14f646fc0(puVar16,uVar27,&local_10e0,&local_10dc);
              local_10f0 = &DAT_153478900;
              local_10f8 = &DAT_153478100;
              local_1100 = local_10c8;
              local_1108 = (int *)local_278;
              local_10c8 = FUN_14f646fc0(puVar16,uVar27,&local_10e0,&local_10dc);
              lVar15 = lVar15 + 1;
              local_1070 = local_1070 + 1;
              local_10a8 = local_10a8 - 1;
              puVar21 = local_10c0;
              uVar34 = (uint)local_10b8;
            } while (local_10a8 != 0);
            local_10a8 = 0;
            uVar33 = (uint)local_10b0;
            uVar22 = (uint)local_10b8;
          }
          local_10d8 = local_10d8 + 2;
        } while ((int)local_10d8 < (int)uVar33);
      }
      puVar21 = puVar21 + 0x1a;
      local_10a0 = local_10a0 - 1;
    } while (local_10a0 != 0);
    local_10a0 = 0;
    uVar27 = local_1098;
    iVar14 = local_10dc;
    uVar33 = local_10e0;
    local_10c0 = puVar21;
  }
LAB_14f650369:
  lVar15 = 0x10;
  uVar22 = iVar14 + 7;
  uVar33 = uVar33 | 0x7f << (0x18U - (char)uVar22 & 0x1f);
  if (7 < (int)uVar22) {
    uVar32 = (ulonglong)(uVar22 >> 3);
    do {
      cVar26 = (char)(uVar33 >> 0x10);
      local_10e8[0] = cVar26;
      (*(code *)*puVar16)(uVar27,local_10e8,1);
      if (cVar26 == -1) {
        local_10e8[0] = '\0';
        (*(code *)*puVar16)(uVar27,local_10e8,1);
      }
      uVar33 = uVar33 << 8;
      uVar32 = uVar32 - 1;
    } while (uVar32 != 0);
  }
  local_10e8[0] = -1;
  (*(code *)*puVar16)(uVar27,local_10e8,1);
  local_10e8[0] = -0x27;
  (*(code *)*puVar16)(uVar27,local_10e8,1);
  plVar29 = local_da8;
  do {
    if (plVar29[-1] != 0) {
      (*(code *)PTR_free_154df4930)();
    }
    if (*plVar29 != 0) {
      (*(code *)PTR_free_154df4930)();
    }
    if (plVar29[1] != 0) {
      (*(code *)PTR_free_154df4930)();
    }
    plVar29 = plVar29 + 0xd;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  return 0;
}

// uejpeg_encode_image_mem_threaded_finish @ 14f650450

undefined4
uejpeg_encode_image_mem_threaded_finish(undefined4 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  
  uejpeg_encode_image_threaded_finish();
  puVar1 = *(undefined8 **)(param_1 + 4);
  *param_2 = *puVar1;
  *param_3 = *(undefined4 *)(puVar1 + 2);
  (*(code *)PTR_free_154df4930)(*(undefined8 *)(param_1 + 4));
  return *param_1;
}

// uejpeg_encode_image_mem_threaded_start @ 14f6504a0

undefined8 *
uejpeg_encode_image_mem_threaded_start
          (undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 local_b08 [2816];
  
  *(undefined4 *)param_1 = 0;
  memset((undefined4 *)((longlong)param_1 + 4),0,0xafc);
  puVar2 = (undefined8 *)(*(code *)PTR_malloc_154df4928)(0x18);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined4 *)param_1 = 6;
  }
  else {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2 = (undefined8 *)
             uejpeg_encode_image_threaded_start
                       (local_b08,&s_uejpeg_buffer_fns,puVar2,param_2,param_3,param_4,param_5,
                        param_6,param_7);
    lVar4 = 0x16;
    puVar3 = param_1;
    do {
      uVar1 = puVar2[1];
      *puVar3 = *puVar2;
      puVar3[1] = uVar1;
      uVar1 = puVar2[3];
      puVar3[2] = puVar2[2];
      puVar3[3] = uVar1;
      uVar1 = puVar2[5];
      puVar3[4] = puVar2[4];
      puVar3[5] = uVar1;
      uVar1 = puVar2[7];
      puVar3[6] = puVar2[6];
      puVar3[7] = uVar1;
      uVar1 = puVar2[9];
      puVar3[8] = puVar2[8];
      puVar3[9] = uVar1;
      uVar1 = puVar2[0xb];
      puVar3[10] = puVar2[10];
      puVar3[0xb] = uVar1;
      uVar1 = puVar2[0xd];
      puVar3[0xc] = puVar2[0xc];
      puVar3[0xd] = uVar1;
      uVar1 = puVar2[0xf];
      puVar3[0xe] = puVar2[0xe];
      puVar3[0xf] = uVar1;
      lVar4 = lVar4 + -1;
      puVar2 = puVar2 + 0x10;
      puVar3 = puVar3 + 0x10;
    } while (lVar4 != 0);
  }
  return param_1;
}

// uejpeg_encode_image_thread_run @ 14f6505d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int uejpeg_encode_image_thread_run(int *param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  int iVar15;
  void *_Dst;
  int *piVar16;
  int iVar17;
  short *psVar18;
  undefined1 *puVar19;
  int iVar20;
  undefined1 *puVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auStack_9d8 [32];
  int local_9b8;
  undefined4 local_9b4;
  int local_9b0;
  int local_9ac;
  int local_9a8;
  int local_9a4;
  int local_9a0;
  int local_99c;
  int local_998;
  int local_994;
  int local_990;
  int local_98c;
  int local_988;
  int local_984;
  int local_980;
  int local_97c;
  int local_978;
  int local_974;
  int local_970;
  ulonglong local_968;
  int *local_960;
  int *local_958;
  longlong local_950;
  longlong local_948;
  longlong local_940;
  longlong local_938;
  longlong local_930;
  longlong local_928;
  longlong local_920;
  int *local_918;
  longlong local_910;
  longlong local_908;
  longlong local_900 [3];
  float local_8e8 [64];
  float local_7e8 [64];
  float local_6e8 [64];
  float local_5e8 [64];
  short local_4e8 [128];
  short local_3e8 [128];
  short local_2e8 [128];
  short local_1e8 [128];
  ulonglong local_e8;
  
  fVar13 = __real_3f1645a2;
  fVar12 = __real_3ed65e89;
  fVar11 = __real_3ea99ae9;
  fVar10 = __real_3e991687;
  fVar9 = __real_3e2cca2e;
  fVar8 = __real_3de978d5;
  fVar7 = __real_43000000;
  fVar6 = __real_437f0000;
  fVar5 = __real_3f000000;
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_9d8;
  iVar15 = *param_1;
  if (iVar15 == 0) {
    lVar3 = *(longlong *)(param_1 + 10);
    iVar15 = param_1[6];
    iVar23 = param_1[8];
    iVar2 = param_1[7];
    lVar27 = (longlong)iVar2;
    local_900[0] = (longlong)param_2;
    local_908 = local_900[0] * 0x68;
    local_994 = 0;
    lVar28 = *(longlong *)(param_1 + local_900[0] * 0x1a + 0x2c);
    iVar24 = param_1[local_900[0] * 0x1a + 0x26] * param_1[local_900[0] * 0x1a + 0x22];
    lVar25 = lVar28 + (longlong)(iVar24 * 0x40) * 2;
    local_948 = lVar28 + (longlong)(iVar24 * 0x80) * 2;
    local_940 = lVar28 + (longlong)(iVar24 * 0xc0) * 2;
    local_9a0 = param_1[local_900[0] * 0x1a + 0x1a] * 8;
    iVar14 = param_1[local_900[0] * 0x1a + 0x1e] << 3;
    local_990 = iVar14;
    local_970 = iVar24;
    local_950 = lVar25;
    local_918 = param_1;
    local_910 = lVar28;
    if (local_9a0 < iVar14) {
      local_99c = local_9a0 + 8;
      local_998 = local_9a0 * iVar15;
      local_9b4 = 0x80;
      do {
        local_9b0 = 0;
        if (0 < iVar15) {
          local_958 = param_1 + 0x240;
          local_960 = param_1 + 0x280;
          local_9a4 = 2 - iVar15;
          local_928 = lVar28 - lVar25;
          lVar26 = local_940 - lVar25;
          local_920 = local_948 - lVar25;
          lVar29 = (longlong)iVar24 * 2;
          local_9ac = local_9a4 * iVar23;
          local_9a8 = iVar15 + -2;
          local_938 = lVar29;
          local_930 = lVar26;
          do {
            iVar24 = local_9b0;
            lVar25 = 0;
            if (local_9a0 < local_99c) {
              lVar28 = (longlong)local_9a0;
              local_968 = (ulonglong)(uint)(local_99c - local_9a0);
              local_9b8 = local_998;
              do {
                local_974 = local_9a4 + local_9b0 + iVar15 + 6;
                if (local_9b0 < local_974) {
                  iVar14 = local_9a8 - iVar15;
                  local_984 = (iVar14 + 3 + local_9b0) * iVar23;
                  local_978 = (iVar14 + 1 + local_9b0) * iVar23;
                  local_97c = (iVar14 + 4 + local_9b0) * iVar23;
                  iVar17 = (local_9b8 - (local_9a4 + local_9b0)) + local_9b0;
                  local_98c = (iVar17 + 1) * iVar23;
                  local_988 = (iVar17 + 2) * iVar23;
                  local_980 = (iVar17 + 3) * iVar23;
                  iVar14 = local_9ac;
                  iVar22 = local_9b0;
                  do {
                    iVar20 = iVar14 + iVar17 * iVar23;
                    if (lVar27 <= lVar28) {
                      iVar20 = ((iVar2 + -1) * iVar15 + iVar22) * iVar23;
                    }
                    if (iVar15 <= iVar22) {
                      iVar20 = iVar20 - (local_978 + iVar14);
                    }
                    fVar30 = (float)*(byte *)(iVar20 + lVar3);
                    fVar31 = (float)*(byte *)((iVar20 + 1) + lVar3);
                    fVar32 = (float)*(byte *)((iVar20 + 2) + lVar3);
                    fVar4 = fVar6;
                    if (iVar23 == 4) {
                      fVar4 = (float)*(byte *)((iVar20 + 3) + lVar3);
                    }
                    iVar20 = local_98c + iVar14;
                    local_5e8[lVar25] = fVar4 - fVar7;
                    local_8e8[lVar25] = (fVar30 * fVar10 + fVar31 * fVar13 + fVar32 * fVar8) - fVar7
                    ;
                    local_6e8[lVar25] =
                         (fVar30 * fVar5 - fVar31 * fVar12) - fVar32 * ___real_3da685db;
                    local_7e8[lVar25] = fVar32 * fVar5 - (fVar30 * fVar9 + fVar31 * fVar11);
                    if (lVar27 <= lVar28) {
                      iVar20 = ((iVar2 + -1) * iVar15 + 1 + iVar22) * iVar23;
                    }
                    if (iVar15 <= iVar22 + 1) {
                      iVar20 = iVar20 - iVar14;
                    }
                    fVar30 = (float)*(byte *)(iVar20 + lVar3);
                    fVar31 = (float)*(byte *)((iVar20 + 1) + lVar3);
                    fVar32 = (float)*(byte *)((iVar20 + 2) + lVar3);
                    fVar4 = fVar6;
                    if (iVar23 == 4) {
                      fVar4 = (float)*(byte *)((iVar20 + 3) + lVar3);
                    }
                    iVar20 = local_988 + iVar14;
                    local_5e8[lVar25 + 1] = fVar4 - fVar7;
                    local_8e8[lVar25 + 1] =
                         (fVar30 * fVar10 + fVar31 * fVar13 + fVar32 * fVar8) - fVar7;
                    local_6e8[lVar25 + 1] =
                         (fVar30 * fVar5 - fVar31 * fVar12) - fVar32 * ___real_3da685db;
                    local_7e8[lVar25 + 1] = fVar32 * fVar5 - (fVar30 * fVar9 + fVar31 * fVar11);
                    if (lVar27 <= lVar28) {
                      iVar20 = ((iVar2 + -1) * iVar15 + 2 + iVar22) * iVar23;
                    }
                    if (iVar15 <= iVar22 + 2) {
                      iVar20 = iVar20 - (local_984 + iVar14);
                    }
                    fVar30 = (float)*(byte *)(iVar20 + lVar3);
                    fVar31 = (float)*(byte *)((iVar20 + 1) + lVar3);
                    fVar32 = (float)*(byte *)((iVar20 + 2) + lVar3);
                    fVar4 = fVar6;
                    if (iVar23 == 4) {
                      fVar4 = (float)*(byte *)((iVar20 + 3) + lVar3);
                    }
                    iVar20 = local_980 + iVar14;
                    local_5e8[lVar25 + 2] = fVar4 - fVar7;
                    local_8e8[lVar25 + 2] =
                         (fVar30 * fVar10 + fVar31 * fVar13 + fVar32 * fVar8) - fVar7;
                    local_6e8[lVar25 + 2] =
                         (fVar30 * fVar5 - fVar31 * fVar12) - fVar32 * ___real_3da685db;
                    local_7e8[lVar25 + 2] = fVar32 * fVar5 - (fVar30 * fVar9 + fVar31 * fVar11);
                    if (lVar27 <= lVar28) {
                      iVar20 = ((iVar2 + -1) * iVar15 + 3 + iVar22) * iVar23;
                    }
                    if (iVar15 <= iVar22 + 3) {
                      iVar20 = iVar20 - (local_97c + iVar14);
                    }
                    fVar30 = (float)*(byte *)(iVar20 + lVar3);
                    fVar31 = (float)*(byte *)((iVar20 + 1) + lVar3);
                    fVar32 = (float)*(byte *)((iVar20 + 2) + lVar3);
                    fVar4 = fVar6;
                    if (iVar23 == 4) {
                      fVar4 = (float)*(byte *)((iVar20 + 3) + lVar3);
                    }
                    iVar14 = iVar14 + iVar23 * 4;
                    iVar22 = iVar22 + 4;
                    local_5e8[lVar25 + 3] = fVar4 - fVar7;
                    local_8e8[lVar25 + 3] =
                         (fVar30 * fVar10 + fVar31 * fVar13 + fVar32 * fVar8) - fVar7;
                    local_6e8[lVar25 + 3] =
                         (fVar30 * fVar5 - fVar31 * fVar12) - fVar32 * ___real_3da685db;
                    local_7e8[lVar25 + 3] = fVar32 * fVar5 - (fVar30 * fVar9 + fVar31 * fVar11);
                    lVar25 = lVar25 + 4;
                  } while (iVar22 < local_9a4 + local_9b0 + iVar15 + 3);
                  if (iVar22 < local_974) {
                    iVar17 = (local_9b8 + iVar22) * iVar23;
                    iVar14 = ((iVar22 - iVar15) + 1) * iVar23;
                    do {
                      iVar20 = iVar17;
                      if (lVar27 <= lVar28) {
                        iVar20 = ((iVar2 + -1) * iVar15 + iVar22) * iVar23;
                      }
                      if (iVar15 <= iVar22) {
                        iVar20 = iVar20 - iVar14;
                      }
                      fVar30 = (float)*(byte *)(iVar20 + lVar3);
                      fVar31 = (float)*(byte *)((iVar20 + 1) + lVar3);
                      fVar32 = (float)*(byte *)((iVar20 + 2) + lVar3);
                      fVar4 = fVar6;
                      if (iVar23 == 4) {
                        fVar4 = (float)*(byte *)((iVar20 + 3) + lVar3);
                      }
                      iVar22 = iVar22 + 1;
                      iVar17 = iVar17 + iVar23;
                      iVar14 = iVar14 + iVar23;
                      local_5e8[lVar25] = fVar4 - fVar7;
                      local_8e8[lVar25] =
                           (fVar30 * fVar10 + fVar31 * fVar13 + fVar32 * fVar8) - fVar7;
                      local_6e8[lVar25] =
                           (fVar30 * fVar5 - fVar31 * fVar12) - fVar32 * ___real_3da685db;
                      local_7e8[lVar25] = fVar32 * fVar5 - (fVar30 * fVar9 + fVar31 * fVar11);
                      lVar25 = lVar25 + 1;
                    } while (iVar22 < local_974);
                  }
                }
                local_9b8 = local_9b8 + iVar15;
                lVar28 = lVar28 + 1;
                local_968 = local_968 - 1;
              } while (local_968 != 0);
              local_968 = 0;
              lVar26 = local_930;
              lVar29 = local_938;
            }
            FUN_14f6529a0(local_8e8,8,local_958,local_4e8);
            FUN_14f6529a0(local_7e8,8,local_960,local_3e8);
            FUN_14f6529a0(local_6e8,8,local_960,local_2e8);
            FUN_14f6529a0(local_5e8,8,local_958,local_1e8);
            lVar25 = 0;
            lVar28 = 0x40;
            psVar18 = (short *)(local_950 + (longlong)local_994 * 2);
            do {
              *(short *)(local_928 + (longlong)psVar18) =
                   *(short *)((longlong)local_4e8 + lVar25) + (short)local_9b4;
              *psVar18 = *(short *)((longlong)local_3e8 + lVar25) + (short)local_9b4;
              *(short *)(local_920 + (longlong)psVar18) =
                   *(short *)((longlong)local_2e8 + lVar25) + (short)local_9b4;
              if (iVar23 == 4) {
                *(short *)(lVar26 + (longlong)psVar18) =
                     *(short *)((longlong)local_1e8 + lVar25) + (short)local_9b4;
              }
              psVar18 = (short *)((longlong)psVar18 + lVar29);
              lVar25 = lVar25 + 4;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            local_9a8 = local_9a8 + -8;
            local_9ac = local_9ac + iVar23 * 8;
            local_994 = local_994 + 1;
            local_9b0 = iVar24 + 8;
            lVar25 = local_950;
            lVar28 = local_910;
            param_1 = local_918;
            iVar24 = local_970;
            iVar14 = local_990;
          } while (local_9b0 < iVar15);
        }
        local_9a0 = local_9a0 + 8;
        local_998 = local_998 + iVar15 * 8;
        local_99c = local_99c + 8;
      } while (local_9a0 < iVar14);
    }
    lVar3 = local_900[0];
    iVar23 = 0;
    iVar15 = *(int *)(local_908 + 0xcc + (longlong)param_1);
    lVar25 = *(longlong *)(local_908 + 0xb8 + (longlong)param_1);
    puVar1 = (undefined1 *)(lVar25 + iVar15);
    if (0 < iVar15) {
      puVar19 = puVar1;
      puVar21 = *(undefined1 **)(local_908 + 0xb0 + (longlong)param_1);
      do {
        puVar19[lVar25 - (longlong)puVar1] = *puVar21;
        iVar23 = iVar23 + 1;
        *puVar19 = puVar21[1];
        puVar19 = puVar19 + 1;
        puVar21 = puVar21 + 2;
      } while (iVar23 < *(int *)(local_908 + 0xcc + (longlong)param_1));
    }
    if ((*(byte *)(param_1 + 0xc) & 1) == 0) {
      piVar16 = (int *)(*(code *)PTR_FUN_154df48a8)
                                 (local_900,*(undefined8 *)(param_1 + local_900[0] * 0x1a + 0x2e),
                                  (longlong)(param_1[local_900[0] * 0x1a + 0x33] * 2));
      iVar15 = piVar16[1];
      iVar23 = piVar16[2];
      param_1[lVar3 * 0x1a + 0x30] = *piVar16;
      (param_1 + lVar3 * 0x1a + 0x30)[1] = iVar15;
      param_1[lVar3 * 0x1a + 0x32] = iVar23;
    }
    else {
      _Dst = (void *)(*(code *)PTR_malloc_154df4928)
                               ((longlong)(param_1[local_900[0] * 0x1a + 0x33] * 2));
      param_1[lVar3 * 0x1a + 0x32] = param_1[lVar3 * 0x1a + 0x33] * 2;
      *(void **)(param_1 + lVar3 * 0x1a + 0x30) = _Dst;
      memcpy(_Dst,*(void **)(param_1 + lVar3 * 0x1a + 0x2e),
             (longlong)(param_1[lVar3 * 0x1a + 0x33] * 2));
    }
    iVar15 = 0;
  }
  return iVar15;
}

// uejpeg_encode_image_threaded_finish @ 14f651120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int uejpeg_encode_image_threaded_finish(int *param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int *piVar5;
  longlong *plVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined8 local_24;
  undefined1 local_1c;
  undefined1 auStack_1b [2];
  undefined1 uStack_19;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  if (*param_1 != 0) {
    return *param_1;
  }
  (*(code *)**(undefined8 **)(param_1 + 2))(*(undefined8 *)(param_1 + 4),&s_OOJPEG,6);
  local_28 = 4;
  iVar4 = 0;
  lVar3 = 0x10;
  local_24 = *(undefined8 *)(param_1 + 6);
  uVar1 = 0xd;
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    uVar1 = 0;
  }
  _local_1c = CONCAT31((uint3)*(byte *)(param_1 + 8),8);
  _local_1c = CONCAT13((char)param_1[0xd],CONCAT12(uVar1,_local_1c));
  local_38 = 0x10;
  local_34 = 0x52444849;
  lVar2 = (*(code *)**(undefined8 **)(param_1 + 2))(*(undefined8 *)(param_1 + 4),&local_38,8);
  if ((lVar2 == 8) &&
     (lVar2 = (*(code *)**(undefined8 **)(param_1 + 2))(*(undefined8 *)(param_1 + 4),&local_28,0x10)
     , lVar2 == 0x10)) {
    local_30 = 0x216;
    local_2c = 0x5244484c;
    lVar2 = (*(code *)**(undefined8 **)(param_1 + 2))(*(undefined8 *)(param_1 + 4),&local_30,8);
    if ((lVar2 == 8) &&
       (lVar2 = (*(code *)**(undefined8 **)(param_1 + 2))
                          (*(undefined8 *)(param_1 + 4),param_1 + 0x1ba,0x216), lVar2 == 0x216)) {
      if (0 < param_1[0xd]) {
        piVar5 = param_1 + 0x32;
        do {
          lVar2 = (*(code *)**(undefined8 **)(param_1 + 2))
                            (*(undefined8 *)(param_1 + 4),param_1 + (longlong)iVar4 * 0x1a + 0x32,4)
          ;
          if (((lVar2 != 4) ||
              (lVar2 = (*(code *)**(undefined8 **)(param_1 + 2))
                                 (*(undefined8 *)(param_1 + 4),"SPLT",4), lVar2 != 4)) ||
             (lVar2 = (*(code *)**(undefined8 **)(param_1 + 2))
                                (*(undefined8 *)(param_1 + 4),*(undefined8 *)(piVar5 + -2),
                                 (longlong)*piVar5), lVar2 != *piVar5)) goto LAB_14f6512ce;
          iVar4 = iVar4 + 1;
          piVar5 = piVar5 + 0x1a;
        } while (iVar4 < param_1[0xd]);
      }
      goto LAB_14f6512d4;
    }
  }
LAB_14f6512ce:
  *param_1 = 5;
LAB_14f6512d4:
  plVar6 = (longlong *)(param_1 + 0x2e);
  do {
    if (plVar6[-1] != 0) {
      (*(code *)PTR_free_154df4930)();
    }
    if (*plVar6 != 0) {
      (*(code *)PTR_free_154df4930)();
    }
    if (plVar6[1] != 0) {
      (*(code *)PTR_free_154df4930)();
    }
    plVar6 = plVar6 + 0xd;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return *param_1;
}

// uejpeg_encode_image_threaded_start @ 14f651340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * uejpeg_encode_image_threaded_start
                (int *param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5,
                int param_6,undefined8 param_7,int param_8,int param_9)

{
  float fVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  float *pfVar20;
  undefined2 *puVar21;
  int *piVar22;
  undefined2 uVar23;
  float *pfVar24;
  int *piVar25;
  longlong *plVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  undefined2 auStack_8f0 [64];
  undefined2 auStack_870 [16];
  undefined8 uStack_850;
  undefined1 auStack_848 [32];
  undefined1 local_828 [1712];
  ushort local_178 [64];
  ushort local_f8 [64];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_848;
  lVar28 = 0;
  *param_1 = 0;
  uStack_850 = 0x14f6513aa;
  memset(param_1 + 1,0,0xafc);
  lVar30 = (longlong)param_6;
  *(undefined8 *)(param_1 + 10) = param_7;
  param_1[0xc] = param_9;
  *(undefined8 *)(param_1 + 2) = param_2;
  iVar17 = 0x5a;
  if (param_8 != 0) {
    iVar17 = param_8;
  }
  *(undefined8 *)(param_1 + 4) = param_3;
  param_1[6] = param_4;
  param_1[7] = param_5;
  param_1[8] = param_6;
  fVar16 = __real_407b14bf;
  fVar15 = __real_406c835f;
  fVar14 = __real_4054db30;
  fVar13 = __real_400e39da;
  fVar12 = __real_3fc3ef15;
  fVar11 = __real_3f47c5c2;
  fVar10 = __real_403504f3;
  fVar9 = __real_3f800000;
  lVar27 = lVar28;
  lVar29 = lVar28;
  if (iVar17 < 1) {
    iVar17 = 5000;
  }
  else {
    if (100 < iVar17) {
      iVar17 = 100;
    }
    if (iVar17 < 0x32) {
      iVar17 = (int)(5000 / (longlong)iVar17);
    }
    else {
      iVar17 = (100 - iVar17) * 2;
    }
  }
  do {
    iVar6 = (*(int *)((longlong)&DAT_1534778d0 + lVar27) * iVar17 + 0x32) / 100;
    if (iVar6 < 1) {
      uVar23 = 1;
    }
    else {
      uVar23 = (undefined2)iVar6;
      if (0xffff < iVar6) {
        uVar23 = 0xffff;
      }
    }
    iVar6 = *(int *)((longlong)&DAT_1534779d0 + lVar27);
    *(undefined2 *)((longlong)local_178 + lVar29) = uVar23;
    iVar6 = (iVar6 * iVar17 + 0x32) / 100;
    if (iVar6 < 1) {
      uVar23 = 1;
    }
    else {
      uVar23 = (undefined2)iVar6;
      if (0xffff < iVar6) {
        uVar23 = 0xffff;
      }
    }
    *(undefined2 *)((longlong)local_f8 + lVar29) = uVar23;
    lVar27 = lVar27 + 4;
    lVar29 = lVar29 + 2;
  } while (lVar27 < 0x100);
  pfVar24 = (float *)&DAT_153477ad0;
  pfVar20 = (float *)(param_1 + 0x280);
  do {
    fVar1 = *pfVar24;
    uVar2 = *(ushort *)((longlong)local_f8 + lVar28);
    uVar3 = *(ushort *)((longlong)local_178 + lVar28 + 2);
    pfVar20[-0x40] = fVar9 / ((float)*(ushort *)((longlong)local_178 + lVar28) * fVar1 * fVar10);
    uVar4 = *(ushort *)((longlong)local_f8 + lVar28 + 2);
    *pfVar20 = fVar9 / ((float)uVar2 * fVar1 * fVar10);
    uVar2 = *(ushort *)((longlong)local_178 + lVar28 + 4);
    pfVar20[-0x3f] = fVar9 / ((float)uVar3 * fVar1 * fVar16);
    uVar3 = *(ushort *)((longlong)local_f8 + lVar28 + 4);
    pfVar20[1] = fVar9 / ((float)uVar4 * fVar1 * fVar16);
    uVar4 = *(ushort *)((longlong)local_178 + lVar28 + 6);
    pfVar20[-0x3e] = fVar9 / ((float)uVar2 * fVar1 * fVar15);
    uVar2 = *(ushort *)((longlong)local_f8 + lVar28 + 6);
    pfVar20[2] = fVar9 / ((float)uVar3 * fVar1 * fVar15);
    uVar3 = *(ushort *)((longlong)local_178 + lVar28 + 8);
    pfVar20[-0x3d] = fVar9 / ((float)uVar4 * fVar1 * fVar14);
    uVar4 = *(ushort *)((longlong)local_f8 + lVar28 + 8);
    pfVar20[3] = fVar9 / ((float)uVar2 * fVar1 * fVar14);
    pfVar20[-0x3c] = fVar9 / ((float)uVar3 * fVar1 * fVar10);
    pfVar20[4] = fVar9 / ((float)uVar4 * fVar1 * fVar10);
    pfVar24 = pfVar24 + 1;
    uVar2 = *(ushort *)((longlong)local_f8 + lVar28 + 10);
    uVar3 = *(ushort *)((longlong)local_178 + lVar28 + 0xc);
    pfVar20[-0x3b] =
         fVar9 / ((float)*(ushort *)((longlong)local_178 + lVar28 + 10) * fVar1 * fVar13);
    uVar4 = *(ushort *)((longlong)local_f8 + lVar28 + 0xc);
    pfVar20[5] = fVar9 / ((float)uVar2 * fVar1 * fVar13);
    uVar2 = *(ushort *)((longlong)local_178 + lVar28 + 0xe);
    pfVar20[-0x3a] = fVar9 / ((float)uVar3 * fVar1 * fVar12);
    uVar3 = *(ushort *)((longlong)local_f8 + lVar28 + 0xe);
    pfVar20[6] = fVar9 / ((float)uVar4 * fVar1 * fVar12);
    pfVar20[-0x39] = fVar9 / ((float)uVar2 * fVar1 * fVar11);
    pfVar20[7] = fVar9 / ((float)uVar3 * fVar1 * fVar11);
    pfVar20 = pfVar20 + 8;
    lVar28 = lVar28 + 0x10;
  } while ((longlong)pfVar24 < 0x153477af0);
  *(undefined2 *)(param_1 + 0x23e) = 1;
  piVar25 = param_1 + 0x1de;
  lVar28 = 0x40;
  do {
    uVar23 = *(undefined2 *)(((longlong)auStack_8f0 - (longlong)param_1) + (longlong)piVar25);
    uVar5 = *(undefined2 *)(((longlong)auStack_870 - (longlong)param_1) + (longlong)piVar25);
    *(undefined2 *)(piVar25 + -0x20) = uVar23;
    *(undefined2 *)piVar25 = uVar5;
    *(undefined2 *)(piVar25 + 0x20) = uVar5;
    *(undefined2 *)(piVar25 + 0x40) = uVar23;
    piVar25 = (int *)((longlong)piVar25 + 2);
    lVar28 = lVar28 + -1;
  } while (lVar28 != 0);
  *(undefined4 *)((longlong)param_1 + 0x8fa) = 0x3020100;
  if (0 < param_6) {
    puVar21 = (undefined2 *)((longlong)param_1 + 0x6ea);
    do {
      puVar21[-1] = (short)((int)((param_4 + 7 >> 0x1f & 7U) + param_4 + 7) >> 3);
      *puVar21 = (short)((int)(param_5 + 7 + (param_5 + 7 >> 0x1f & 7U)) >> 3);
      puVar21 = puVar21 + 2;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
  }
  lVar28 = 0x10;
  iVar17 = (int)(param_1[7] + 0xff + (param_1[7] + 0xff >> 0x1f & 0xffU)) >> 8;
  if (0x10 < iVar17) {
    iVar17 = 0x10;
  }
  param_1[0xd] = iVar17;
  uStack_850 = 0x14f651873;
  puVar18 = (undefined8 *)FUN_14f647520(local_828,iVar17,param_1 + 0x1ba);
  lVar30 = 0xd;
  piVar25 = param_1 + 0xe;
  do {
    piVar22 = piVar25;
    puVar19 = puVar18;
    uVar8 = puVar19[1];
    *(undefined8 *)piVar22 = *puVar19;
    *(undefined8 *)(piVar22 + 2) = uVar8;
    uVar8 = puVar19[3];
    *(undefined8 *)(piVar22 + 4) = puVar19[2];
    *(undefined8 *)(piVar22 + 6) = uVar8;
    uVar8 = puVar19[5];
    *(undefined8 *)(piVar22 + 8) = puVar19[4];
    *(undefined8 *)(piVar22 + 10) = uVar8;
    uVar8 = puVar19[7];
    *(undefined8 *)(piVar22 + 0xc) = puVar19[6];
    *(undefined8 *)(piVar22 + 0xe) = uVar8;
    uVar8 = puVar19[9];
    *(undefined8 *)(piVar22 + 0x10) = puVar19[8];
    *(undefined8 *)(piVar22 + 0x12) = uVar8;
    uVar8 = puVar19[0xb];
    *(undefined8 *)(piVar22 + 0x14) = puVar19[10];
    *(undefined8 *)(piVar22 + 0x16) = uVar8;
    uVar8 = puVar19[0xd];
    *(undefined8 *)(piVar22 + 0x18) = puVar19[0xc];
    *(undefined8 *)(piVar22 + 0x1a) = uVar8;
    uVar8 = puVar19[0xf];
    *(undefined8 *)(piVar22 + 0x1c) = puVar19[0xe];
    *(undefined8 *)(piVar22 + 0x1e) = uVar8;
    lVar30 = lVar30 + -1;
    puVar18 = puVar19 + 0x10;
    piVar25 = piVar22 + 0x20;
  } while (lVar30 != 0);
  uVar8 = puVar19[0x11];
  *(undefined8 *)(piVar22 + 0x20) = puVar19[0x10];
  *(undefined8 *)(piVar22 + 0x22) = uVar8;
  uVar8 = puVar19[0x13];
  *(undefined8 *)(piVar22 + 0x24) = puVar19[0x12];
  *(undefined8 *)(piVar22 + 0x26) = uVar8;
  iVar17 = *(int *)((longlong)puVar19 + 0xa4);
  iVar6 = *(int *)(puVar19 + 0x15);
  iVar7 = *(int *)((longlong)puVar19 + 0xac);
  piVar22[0x28] = *(int *)(puVar19 + 0x14);
  piVar22[0x29] = iVar17;
  piVar22[0x2a] = iVar6;
  piVar22[0x2b] = iVar7;
  iVar17 = param_1[0xe];
  if (iVar17 == 0) {
    param_1[1] = param_1[0xd];
  }
  else {
    *param_1 = iVar17;
    plVar26 = (longlong *)(param_1 + 0x2e);
    do {
      if (plVar26[-1] != 0) {
        uStack_850 = 0x14f651904;
        (*(code *)PTR_free_154df4930)();
      }
      if (*plVar26 != 0) {
        uStack_850 = 0x14f651912;
        (*(code *)PTR_free_154df4930)();
      }
      if (plVar26[1] != 0) {
        uStack_850 = 0x14f651921;
        (*(code *)PTR_free_154df4930)();
      }
      plVar26 = plVar26 + 0xd;
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
  }
  return param_1;
}

// uejpeg_encode_jpeg_mem @ 14f651990

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
uejpeg_encode_jpeg_mem
          (longlong param_1,int param_2,undefined8 *param_3,undefined4 *param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int *piVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auStack_1598 [32];
  undefined4 local_1578;
  undefined8 local_1568;
  undefined8 local_1560;
  undefined8 local_1558;
  undefined1 local_1550 [2296];
  undefined1 local_c58 [16];
  undefined8 local_c48;
  undefined4 local_c28;
  undefined4 local_ba0;
  longlong local_b98;
  longlong local_b90;
  longlong local_b88;
  longlong local_b80;
  undefined1 local_b78 [592];
  int local_928;
  int iStack_924;
  ulonglong local_28;
  undefined8 local_20;
  
  local_20 = 0x14f6519b0;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1598;
  iVar10 = 0;
  local_b90 = param_1 + param_2;
  *param_3 = 0;
  local_c48 = 0;
  local_c28 = 0;
  local_ba0 = 0;
  *param_4 = 0;
  local_b98 = param_1;
  local_b88 = param_1;
  local_b80 = local_b90;
  iVar4 = FUN_14f652bb0(local_c58,local_b78);
  if (iVar4 == 0) {
    uVar5 = 1;
  }
  else {
    local_1568 = 0;
    local_1560 = 0;
    local_1558 = 0;
    local_1578 = param_5;
    puVar6 = (undefined8 *)FUN_14f6520d0(local_1550,&s_uejpeg_buffer_fns,&local_1568,local_b78);
    lVar9 = 0x11;
    piVar3 = &local_928;
    do {
      piVar8 = piVar3;
      puVar7 = puVar6;
      uVar5 = puVar7[1];
      *(undefined8 *)piVar8 = *puVar7;
      *(undefined8 *)(piVar8 + 2) = uVar5;
      uVar5 = puVar7[3];
      *(undefined8 *)(piVar8 + 4) = puVar7[2];
      *(undefined8 *)(piVar8 + 6) = uVar5;
      uVar5 = puVar7[5];
      *(undefined8 *)(piVar8 + 8) = puVar7[4];
      *(undefined8 *)(piVar8 + 10) = uVar5;
      uVar5 = puVar7[7];
      *(undefined8 *)(piVar8 + 0xc) = puVar7[6];
      *(undefined8 *)(piVar8 + 0xe) = uVar5;
      uVar5 = puVar7[9];
      *(undefined8 *)(piVar8 + 0x10) = puVar7[8];
      *(undefined8 *)(piVar8 + 0x12) = uVar5;
      uVar5 = puVar7[0xb];
      *(undefined8 *)(piVar8 + 0x14) = puVar7[10];
      *(undefined8 *)(piVar8 + 0x16) = uVar5;
      uVar5 = puVar7[0xd];
      *(undefined8 *)(piVar8 + 0x18) = puVar7[0xc];
      *(undefined8 *)(piVar8 + 0x1a) = uVar5;
      uVar5 = puVar7[0xf];
      *(undefined8 *)(piVar8 + 0x1c) = puVar7[0xe];
      *(undefined8 *)(piVar8 + 0x1e) = uVar5;
      lVar9 = lVar9 + -1;
      puVar6 = puVar7 + 0x10;
      piVar3 = piVar8 + 0x20;
    } while (lVar9 != 0);
    uVar5 = puVar7[0x11];
    *(undefined8 *)(piVar8 + 0x20) = puVar7[0x10];
    *(undefined8 *)(piVar8 + 0x22) = uVar5;
    uVar5 = puVar7[0x13];
    *(undefined8 *)(piVar8 + 0x24) = puVar7[0x12];
    *(undefined8 *)(piVar8 + 0x26) = uVar5;
    uVar5 = puVar7[0x15];
    *(undefined8 *)(piVar8 + 0x28) = puVar7[0x14];
    *(undefined8 *)(piVar8 + 0x2a) = uVar5;
    uVar5 = puVar7[0x17];
    *(undefined8 *)(piVar8 + 0x2c) = puVar7[0x16];
    *(undefined8 *)(piVar8 + 0x2e) = uVar5;
    uVar5 = puVar7[0x19];
    *(undefined8 *)(piVar8 + 0x30) = puVar7[0x18];
    *(undefined8 *)(piVar8 + 0x32) = uVar5;
    uVar5 = puVar7[0x1b];
    *(undefined8 *)(piVar8 + 0x34) = puVar7[0x1a];
    *(undefined8 *)(piVar8 + 0x36) = uVar5;
    iVar4 = *(int *)((longlong)puVar7 + 0xe4);
    iVar1 = *(int *)(puVar7 + 0x1d);
    iVar2 = *(int *)((longlong)puVar7 + 0xec);
    piVar8[0x38] = *(int *)(puVar7 + 0x1c);
    piVar8[0x39] = iVar4;
    piVar8[0x3a] = iVar1;
    piVar8[0x3b] = iVar2;
    *(undefined8 *)(piVar8 + 0x3c) = puVar7[0x1e];
    if (0 < iStack_924) {
      do {
        uejpeg_encode_jpeg_thread_run(&local_928,iVar10);
        iVar10 = iVar10 + 1;
      } while (iVar10 < iStack_924);
    }
    uejpeg_encode_jpeg_threaded_finish(&local_928);
    uVar5 = CONCAT44(iStack_924,local_928);
    if (local_928 == 0) {
      *param_3 = local_1568;
      *param_4 = (undefined4)local_1558;
      uVar5 = 0;
    }
  }
  return uVar5;
}

// uejpeg_encode_jpeg_mem_threaded_finish @ 14f651b80

undefined4
uejpeg_encode_jpeg_mem_threaded_finish(undefined4 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  uejpeg_encode_jpeg_threaded_finish();
  *param_2 = **(undefined8 **)(param_1 + 4);
  *param_3 = *(undefined4 *)(*(longlong *)(param_1 + 4) + 0x10);
  (*(code *)PTR_free_154df4930)(*(undefined8 *)(param_1 + 4));
  return *param_1;
}

// uejpeg_encode_jpeg_mem_threaded_start @ 14f651be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
uejpeg_encode_jpeg_mem_threaded_start
          (undefined8 *param_1,longlong param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined1 auStack_c78 [32];
  undefined4 local_c58;
  undefined1 local_c48 [2304];
  undefined1 local_348 [16];
  undefined8 local_338;
  undefined4 local_318;
  undefined4 local_290;
  longlong local_288;
  longlong local_280;
  longlong local_278;
  longlong local_270;
  undefined1 local_268 [520];
  longlong local_60 [9];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c78;
  *(undefined4 *)param_1 = 0;
  memset((undefined4 *)((longlong)param_1 + 4),0,0x8f4);
  local_280 = param_2 + param_3;
  local_338 = 0;
  local_318 = 0;
  local_290 = 0;
  local_288 = param_2;
  local_278 = param_2;
  local_270 = local_280;
  iVar6 = FUN_14f652bb0(local_348,local_268);
  if (iVar6 == 0) {
    *(undefined4 *)param_1 = 1;
  }
  else {
    puVar7 = (undefined8 *)(*(code *)PTR_malloc_154df4928)();
    if (puVar7 == (undefined8 *)0x0) {
      *(undefined4 *)param_1 = 6;
    }
    else {
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      local_c58 = param_4;
      puVar7 = (undefined8 *)FUN_14f6520d0(local_c48,&s_uejpeg_buffer_fns,puVar7,local_268);
      lVar9 = 0x11;
      puVar5 = param_1;
      do {
        puVar10 = puVar5;
        puVar8 = puVar7;
        uVar4 = puVar8[1];
        *puVar10 = *puVar8;
        puVar10[1] = uVar4;
        uVar4 = puVar8[3];
        puVar10[2] = puVar8[2];
        puVar10[3] = uVar4;
        uVar4 = puVar8[5];
        puVar10[4] = puVar8[4];
        puVar10[5] = uVar4;
        uVar4 = puVar8[7];
        puVar10[6] = puVar8[6];
        puVar10[7] = uVar4;
        uVar4 = puVar8[9];
        puVar10[8] = puVar8[8];
        puVar10[9] = uVar4;
        uVar4 = puVar8[0xb];
        puVar10[10] = puVar8[10];
        puVar10[0xb] = uVar4;
        uVar4 = puVar8[0xd];
        puVar10[0xc] = puVar8[0xc];
        puVar10[0xd] = uVar4;
        uVar4 = puVar8[0xf];
        puVar10[0xe] = puVar8[0xe];
        puVar10[0xf] = uVar4;
        lVar9 = lVar9 + -1;
        puVar7 = puVar8 + 0x10;
        puVar5 = puVar10 + 0x10;
      } while (lVar9 != 0);
      uVar4 = puVar8[0x11];
      plVar11 = local_60;
      lVar9 = 4;
      puVar10[0x10] = puVar8[0x10];
      puVar10[0x11] = uVar4;
      uVar4 = puVar8[0x13];
      puVar10[0x12] = puVar8[0x12];
      puVar10[0x13] = uVar4;
      uVar4 = puVar8[0x15];
      puVar10[0x14] = puVar8[0x14];
      puVar10[0x15] = uVar4;
      uVar4 = puVar8[0x17];
      puVar10[0x16] = puVar8[0x16];
      puVar10[0x17] = uVar4;
      uVar4 = puVar8[0x19];
      puVar10[0x18] = puVar8[0x18];
      puVar10[0x19] = uVar4;
      uVar4 = puVar8[0x1b];
      puVar10[0x1a] = puVar8[0x1a];
      puVar10[0x1b] = uVar4;
      uVar1 = *(undefined4 *)((longlong)puVar8 + 0xe4);
      uVar2 = *(undefined4 *)(puVar8 + 0x1d);
      uVar3 = *(undefined4 *)((longlong)puVar8 + 0xec);
      *(undefined4 *)(puVar10 + 0x1c) = *(undefined4 *)(puVar8 + 0x1c);
      *(undefined4 *)((longlong)puVar10 + 0xe4) = uVar1;
      *(undefined4 *)(puVar10 + 0x1d) = uVar2;
      *(undefined4 *)((longlong)puVar10 + 0xec) = uVar3;
      puVar10[0x1e] = puVar8[0x1e];
      do {
        if (*plVar11 != 0) {
          (*(code *)PTR_free_154df4930)();
        }
        plVar11 = plVar11 + 1;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
  }
  return param_1;
}

// uejpeg_encode_jpeg_thread_run @ 14f651dd0

int uejpeg_encode_jpeg_thread_run(int *param_1,int param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined1 *puVar4;
  void *_Dst;
  int *piVar5;
  undefined1 *puVar6;
  longlong lVar7;
  int iVar8;
  undefined1 local_18 [16];
  
  iVar8 = *param_1;
  if (((iVar8 == 0) && (-1 < param_2)) && (param_2 < param_1[1])) {
    iVar8 = 0;
    lVar7 = (longlong)param_2;
    lVar2 = *(longlong *)(param_1 + lVar7 * 0x1a + 0xb2);
    puVar1 = (undefined1 *)(lVar2 + param_1[lVar7 * 0x1a + 0xb7]);
    if (0 < param_1[lVar7 * 0x1a + 0xb7]) {
      puVar4 = puVar1;
      puVar6 = *(undefined1 **)(param_1 + lVar7 * 0x1a + 0xb0);
      do {
        puVar4[lVar2 - (longlong)puVar1] = *puVar6;
        iVar8 = iVar8 + 1;
        *puVar4 = puVar6[1];
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 2;
      } while (iVar8 < param_1[lVar7 * 0x1a + 0xb7]);
    }
    if ((*(byte *)(param_1 + 6) & 1) != 0) {
      _Dst = (void *)(*(code *)PTR_malloc_154df4928)((longlong)(param_1[lVar7 * 0x1a + 0xb7] * 2));
      iVar8 = param_1[lVar7 * 0x1a + 0xb7];
      *(void **)(param_1 + lVar7 * 0x1a + 0xb4) = _Dst;
      param_1[(lVar7 + 7) * 0x1a] = iVar8 * 2;
      memcpy(_Dst,*(void **)(param_1 + lVar7 * 0x1a + 0xb2),(longlong)(iVar8 * 2));
      return 0;
    }
    piVar5 = (int *)(*(code *)PTR_FUN_154df48a8)
                              (local_18,*(undefined8 *)(param_1 + lVar7 * 0x1a + 0xb2),
                               (longlong)(param_1[lVar7 * 0x1a + 0xb7] * 2));
    iVar8 = piVar5[1];
    iVar3 = piVar5[2];
    param_1[lVar7 * 0x1a + 0xb4] = *piVar5;
    param_1[lVar7 * 0x1a + 0xb5] = iVar8;
    iVar8 = 0;
    param_1[(lVar7 + 7) * 0x1a] = iVar3;
  }
  return iVar8;
}

// uejpeg_encode_jpeg_threaded_finish @ 14f651f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int uejpeg_encode_jpeg_threaded_finish(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined8 local_24;
  undefined1 local_1c;
  undefined1 auStack_1b [2];
  undefined1 uStack_19;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  iVar2 = *param_1;
  if (iVar2 == 0) {
    (*(code *)**(undefined8 **)(param_1 + 2))(*(undefined8 *)(param_1 + 4),&s_OOJPEG,6);
    local_28 = 4;
    iVar2 = 0;
    lVar3 = 0x10;
    local_24 = *(undefined8 *)(param_1 + 7);
    uVar1 = 0xd;
    if ((*(byte *)(param_1 + 6) & 1) != 0) {
      uVar1 = 0;
    }
    _local_1c = CONCAT31((uint3)*(byte *)(param_1 + 9),8);
    _local_1c = CONCAT13((char)param_1[10],CONCAT12(uVar1,_local_1c));
    local_38 = 0x10;
    local_34 = 0x52444849;
    (*(code *)**(undefined8 **)(param_1 + 2))(*(undefined8 *)(param_1 + 4),&local_38,8);
    (*(code *)**(undefined8 **)(param_1 + 2))(*(undefined8 *)(param_1 + 4),&local_28,0x10);
    local_30 = 0x10;
    local_2c = 0x5244484c;
    (*(code *)**(undefined8 **)(param_1 + 2))(*(undefined8 *)(param_1 + 4),&local_30,8);
    (*(code *)**(undefined8 **)(param_1 + 2))(*(undefined8 *)(param_1 + 4),param_1 + 0xb,0x216);
    if (0 < param_1[10]) {
      piVar4 = param_1 + 0xb4;
      do {
        (*(code *)**(undefined8 **)(param_1 + 2))
                  (*(undefined8 *)(param_1 + 4),param_1 + ((longlong)iVar2 + 7) * 0x1a,4);
        (*(code *)**(undefined8 **)(param_1 + 2))(*(undefined8 *)(param_1 + 4),"SPLT",4);
        (*(code *)**(undefined8 **)(param_1 + 2))
                  (*(undefined8 *)(param_1 + 4),*(undefined8 *)piVar4,(longlong)piVar4[2]);
        iVar2 = iVar2 + 1;
        piVar4 = piVar4 + 0x1a;
      } while (iVar2 < param_1[10]);
    }
    plVar5 = (longlong *)(param_1 + 0xb2);
    do {
      if (plVar5[-1] != 0) {
        (*(code *)PTR_free_154df4930)();
      }
      if (*plVar5 != 0) {
        (*(code *)PTR_free_154df4930)();
      }
      if (plVar5[1] != 0) {
        (*(code *)PTR_free_154df4930)();
      }
      plVar5 = plVar5 + 0xd;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    iVar2 = *param_1;
  }
  return iVar2;
}

// FUN_14f6520d0 @ 14f6520d0

undefined4 *
FUN_14f6520d0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             int param_5)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  short *psVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  short *psVar17;
  short *psVar18;
  ulonglong uVar19;
  int *piVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  short *local_res18;
  longlong local_res20;
  longlong local_720;
  longlong local_710;
  undefined1 local_6f8 [1720];
  
  *param_1 = 0;
  memset(param_1 + 1,0,0x8f4);
  *(undefined8 *)(param_1 + 2) = param_2;
  plVar1 = (longlong *)(param_4 + 0x82);
  param_1[6] = param_5;
  *(undefined8 *)(param_1 + 4) = param_3;
  param_1[7] = *param_4;
  param_1[8] = param_4[1];
  if (*plVar1 != 0) {
    *(undefined2 *)(param_1 + 0xb) = *(undefined2 *)(param_4 + 0x8a);
    *(undefined2 *)((longlong)param_1 + 0x2e) = *(undefined2 *)(param_4 + 0x8e);
    *(undefined1 *)((longlong)param_1 + 0x23e) = *(undefined1 *)((longlong)param_4 + 0x24a);
  }
  if (*(longlong *)(param_4 + 0x84) != 0) {
    *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_4 + 0x8b);
    *(undefined2 *)((longlong)param_1 + 0x32) = *(undefined2 *)(param_4 + 0x8f);
    *(undefined1 *)((longlong)param_1 + 0x23f) = *(undefined1 *)((longlong)param_4 + 0x24b);
  }
  if (*(longlong *)(param_4 + 0x86) != 0) {
    *(undefined2 *)(param_1 + 0xd) = *(undefined2 *)(param_4 + 0x8c);
    *(undefined2 *)((longlong)param_1 + 0x36) = *(undefined2 *)(param_4 + 0x90);
    *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(param_4 + 0x93);
  }
  if (*(longlong *)(param_4 + 0x88) != 0) {
    *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(param_4 + 0x8d);
    *(undefined2 *)((longlong)param_1 + 0x3a) = *(undefined2 *)(param_4 + 0x91);
    *(undefined1 *)((longlong)param_1 + 0x241) = *(undefined1 *)((longlong)param_4 + 0x24d);
  }
  *(undefined1 *)(param_1 + 0x8f) = *(undefined1 *)(param_4 + 0x92);
  lVar14 = 4;
  *(undefined1 *)((longlong)param_1 + 0x23d) = *(undefined1 *)((longlong)param_4 + 0x249);
  puVar9 = (undefined8 *)(param_1 + 0xf);
  puVar11 = (undefined8 *)(param_4 + 2);
  do {
    uVar7 = puVar11[1];
    *puVar9 = *puVar11;
    puVar9[1] = uVar7;
    uVar7 = puVar11[3];
    puVar9[2] = puVar11[2];
    puVar9[3] = uVar7;
    uVar7 = puVar11[5];
    puVar9[4] = puVar11[4];
    puVar9[5] = uVar7;
    uVar7 = puVar11[7];
    puVar9[6] = puVar11[6];
    puVar9[7] = uVar7;
    uVar7 = puVar11[9];
    puVar9[8] = puVar11[8];
    puVar9[9] = uVar7;
    uVar7 = puVar11[0xb];
    puVar9[10] = puVar11[10];
    puVar9[0xb] = uVar7;
    uVar4 = *(undefined4 *)((longlong)puVar11 + 100);
    uVar5 = *(undefined4 *)(puVar11 + 0xd);
    uVar6 = *(undefined4 *)((longlong)puVar11 + 0x6c);
    *(undefined4 *)(puVar9 + 0xc) = *(undefined4 *)(puVar11 + 0xc);
    *(undefined4 *)((longlong)puVar9 + 100) = uVar4;
    *(undefined4 *)(puVar9 + 0xd) = uVar5;
    *(undefined4 *)((longlong)puVar9 + 0x6c) = uVar6;
    uVar4 = *(undefined4 *)((longlong)puVar11 + 0x74);
    uVar5 = *(undefined4 *)(puVar11 + 0xf);
    uVar6 = *(undefined4 *)((longlong)puVar11 + 0x7c);
    *(undefined4 *)(puVar9 + 0xe) = *(undefined4 *)(puVar11 + 0xe);
    *(undefined4 *)((longlong)puVar9 + 0x74) = uVar4;
    *(undefined4 *)(puVar9 + 0xf) = uVar5;
    *(undefined4 *)((longlong)puVar9 + 0x7c) = uVar6;
    lVar14 = lVar14 + -1;
    puVar9 = puVar9 + 0x10;
    puVar11 = puVar11 + 0x10;
  } while (lVar14 != 0);
  param_1[9] = 0;
  if (*plVar1 != 0) {
    param_1[9] = 1;
    *(undefined2 *)(param_1 + 0xb) = *(undefined2 *)(param_4 + 0x8a);
    *(undefined2 *)((longlong)param_1 + 0x2e) = *(undefined2 *)(param_4 + 0x8e);
  }
  if (*(longlong *)(param_4 + 0x84) != 0) {
    param_1[9] = param_1[9] + 1;
    *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_4 + 0x8b);
    *(undefined2 *)((longlong)param_1 + 0x32) = *(undefined2 *)(param_4 + 0x8f);
  }
  if (*(longlong *)(param_4 + 0x86) != 0) {
    param_1[9] = param_1[9] + 1;
    *(undefined2 *)(param_1 + 0xd) = *(undefined2 *)(param_4 + 0x8c);
    *(undefined2 *)((longlong)param_1 + 0x36) = *(undefined2 *)(param_4 + 0x90);
  }
  if (*(longlong *)(param_4 + 0x88) != 0) {
    param_1[9] = param_1[9] + 1;
    *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(param_4 + 0x8d);
    *(undefined2 *)((longlong)param_1 + 0x3a) = *(undefined2 *)(param_4 + 0x91);
  }
  iVar8 = (int)(param_1[8] + 0xff + (param_1[8] + 0xff >> 0x1f & 0xffU)) >> 8;
  if (0x10 < iVar8) {
    iVar8 = 0x10;
  }
  param_1[10] = iVar8;
  param_1[1] = iVar8;
  puVar9 = (undefined8 *)FUN_14f647520(local_6f8,iVar8,param_1 + 0xb);
  lVar14 = 0xd;
  puVar11 = (undefined8 *)(param_1 + 0x92);
  do {
    puVar12 = puVar11;
    puVar10 = puVar9;
    uVar7 = puVar10[1];
    *puVar12 = *puVar10;
    puVar12[1] = uVar7;
    uVar7 = puVar10[3];
    puVar12[2] = puVar10[2];
    puVar12[3] = uVar7;
    uVar7 = puVar10[5];
    puVar12[4] = puVar10[4];
    puVar12[5] = uVar7;
    uVar7 = puVar10[7];
    puVar12[6] = puVar10[6];
    puVar12[7] = uVar7;
    uVar7 = puVar10[9];
    puVar12[8] = puVar10[8];
    puVar12[9] = uVar7;
    uVar7 = puVar10[0xb];
    puVar12[10] = puVar10[10];
    puVar12[0xb] = uVar7;
    uVar7 = puVar10[0xd];
    puVar12[0xc] = puVar10[0xc];
    puVar12[0xd] = uVar7;
    uVar7 = puVar10[0xf];
    puVar12[0xe] = puVar10[0xe];
    puVar12[0xf] = uVar7;
    lVar14 = lVar14 + -1;
    puVar9 = puVar10 + 0x10;
    puVar11 = puVar12 + 0x10;
  } while (lVar14 != 0);
  uVar7 = puVar10[0x11];
  param_5 = 0;
  puVar12[0x10] = puVar10[0x10];
  puVar12[0x11] = uVar7;
  uVar7 = puVar10[0x13];
  puVar12[0x12] = puVar10[0x12];
  puVar12[0x13] = uVar7;
  uVar7 = puVar10[0x15];
  puVar12[0x14] = puVar10[0x14];
  puVar12[0x15] = uVar7;
  if (0 < (int)param_1[10]) {
    plVar15 = (longlong *)(param_1 + 0xb0);
    local_710 = 0xaa;
    do {
      psVar18 = (short *)*plVar15;
      local_res20 = 0;
      lVar14 = 0x1e;
      local_720 = 4;
      plVar16 = plVar1;
      local_res18 = psVar18;
      do {
        if (*plVar16 != 0) {
          uVar2 = param_1[local_710 + local_res20 + -4];
          uVar3 = param_1[local_710 + local_res20];
          lVar22 = *plVar16 +
                   (longlong)(int)(param_1[local_710 + local_res20 + -0xc] * uVar2 * 0x40) * 2;
          psVar17 = psVar18;
          if (0 < (int)uVar3) {
            uVar23 = (ulonglong)uVar3;
            uVar19 = (longlong)(int)uVar2;
            do {
              if (0 < (int)uVar19) {
                uVar19 = uVar19 & 0xffffffff;
                psVar17 = psVar18;
                do {
                  piVar20 = &DAT_153477460;
                  lVar21 = 0x40;
                  psVar13 = psVar17;
                  do {
                    iVar8 = *piVar20;
                    piVar20 = piVar20 + 1;
                    *psVar13 = (short)((int)*(short *)(lVar22 + (longlong)iVar8 * 2) /
                                      (int)(uint)*(ushort *)
                                                  ((longlong)param_1 + (lVar14 + iVar8) * 2)) + 0x80
                    ;
                    psVar13 = psVar13 + (int)(uVar3 * uVar2);
                    lVar21 = lVar21 + -1;
                  } while (lVar21 != 0);
                  lVar22 = lVar22 + 0x80;
                  psVar17 = psVar17 + 1;
                  uVar19 = uVar19 - 1;
                } while (uVar19 != 0);
                uVar19 = (ulonglong)uVar2;
              }
              psVar18 = psVar18 + (int)uVar2;
              uVar23 = uVar23 - 1;
              psVar17 = local_res18;
            } while (uVar23 != 0);
          }
          psVar18 = psVar17 + (int)(uVar3 * uVar2 * 0x40);
          local_res18 = psVar18;
        }
        local_res20 = local_res20 + 1;
        plVar16 = plVar16 + 1;
        lVar14 = lVar14 + 0x40;
        local_720 = local_720 + -1;
      } while (local_720 != 0);
      local_710 = local_710 + 0x1a;
      param_5 = param_5 + 1;
      plVar15 = plVar15 + 0xd;
    } while (param_5 < (int)param_1[10]);
  }
  return param_1;
}

// uejpeg_encode_to_mem @ 14f6525d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void uejpeg_encode_to_mem
               (undefined8 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_16a8 [32];
  undefined4 local_1688;
  undefined4 local_1680;
  undefined8 local_1678;
  undefined4 local_1670;
  undefined4 local_1668;
  undefined8 local_1658;
  undefined8 local_1650;
  undefined8 local_1648;
  undefined1 local_1640 [2824];
  undefined8 local_b38;
  ulonglong local_38;
  undefined8 uStack_28;
  
  uStack_28 = 0x14f6525e0;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_16a8;
  local_1668 = param_8;
  local_1670 = param_7;
  local_1678 = param_6;
  iVar8 = 0;
  local_1650 = 0;
  local_1648 = 0;
  local_1680 = param_5;
  local_1658 = 0;
  local_1688 = param_4;
  puVar5 = (undefined8 *)
           uejpeg_encode_image_threaded_start(local_1640,&s_uejpeg_buffer_fns,&local_1658,param_3);
  lVar7 = 0x16;
  puVar6 = &local_b38;
  do {
    uVar4 = puVar5[1];
    *puVar6 = *puVar5;
    puVar6[1] = uVar4;
    uVar4 = puVar5[3];
    puVar6[2] = puVar5[2];
    puVar6[3] = uVar4;
    uVar4 = puVar5[5];
    puVar6[4] = puVar5[4];
    puVar6[5] = uVar4;
    uVar4 = puVar5[7];
    puVar6[6] = puVar5[6];
    puVar6[7] = uVar4;
    uVar4 = puVar5[9];
    puVar6[8] = puVar5[8];
    puVar6[9] = uVar4;
    uVar4 = puVar5[0xb];
    puVar6[10] = puVar5[10];
    puVar6[0xb] = uVar4;
    uVar1 = *(undefined4 *)((longlong)puVar5 + 100);
    uVar2 = *(undefined4 *)(puVar5 + 0xd);
    uVar3 = *(undefined4 *)((longlong)puVar5 + 0x6c);
    *(undefined4 *)(puVar6 + 0xc) = *(undefined4 *)(puVar5 + 0xc);
    *(undefined4 *)((longlong)puVar6 + 100) = uVar1;
    *(undefined4 *)(puVar6 + 0xd) = uVar2;
    *(undefined4 *)((longlong)puVar6 + 0x6c) = uVar3;
    uVar4 = puVar5[0xf];
    puVar6[0xe] = puVar5[0xe];
    puVar6[0xf] = uVar4;
    lVar7 = lVar7 + -1;
    puVar5 = puVar5 + 0x10;
    puVar6 = puVar6 + 0x10;
  } while (lVar7 != 0);
  if (0 < local_b38._4_4_) {
    do {
      uejpeg_encode_image_thread_run(&local_b38,iVar8);
      iVar8 = iVar8 + 1;
    } while (iVar8 < local_b38._4_4_);
  }
  uejpeg_encode_image_threaded_finish(&local_b38);
  *param_1 = local_1658;
  *param_2 = (undefined4)local_1648;
  return;
}

// FUN_14f652740 @ 14f652740

void FUN_14f652740(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  float *param_6,float *param_7,float *param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar4 = *param_7 + *param_2;
  fVar8 = *param_2 - *param_7;
  fVar9 = *param_1 - *param_8;
  fVar5 = *param_1 + *param_8;
  fVar3 = *param_6 + *param_3;
  fVar7 = *param_3 - *param_6;
  fVar1 = *param_5 + *param_4;
  fVar2 = fVar1 + fVar5;
  fVar5 = fVar5 - fVar1;
  fVar1 = fVar3 + fVar4;
  fVar6 = (*param_4 - *param_5) + fVar7;
  fVar7 = (fVar7 + fVar8) * __real_3f3504f3;
  *param_1 = fVar1 + fVar2;
  *param_5 = fVar2 - fVar1;
  fVar2 = fVar7 + fVar9;
  fVar1 = ((fVar4 - fVar3) + fVar5) * __real_3f3504f3;
  fVar8 = fVar8 + fVar9;
  fVar9 = fVar9 - fVar7;
  *param_3 = fVar1 + fVar5;
  fVar4 = fVar6 * __real_3f0a8bd4;
  fVar3 = fVar8 * __real_3fa73d75;
  *param_7 = fVar5 - fVar1;
  fVar1 = (fVar6 - fVar8) * __real_3ec3ef15;
  fVar4 = fVar4 + fVar1;
  fVar3 = fVar3 + fVar1;
  *param_6 = fVar9 + fVar4;
  *param_4 = fVar9 - fVar4;
  *param_2 = fVar2 + fVar3;
  *param_8 = fVar2 - fVar3;
  return;
}

// uejpeg_free_decode_context @ 14f6528b0

void uejpeg_free_decode_context(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)(param_1 + 0x908);
  lVar2 = 4;
  do {
    if (*plVar1 != 0) {
      (*(code *)PTR_free_154df4930)();
    }
    plVar1 = plVar1 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  plVar1 = (longlong *)(param_1 + 0x2b8);
  lVar2 = 0x10;
  do {
    if (plVar1[-1] != 0) {
      (*(code *)PTR_free_154df4930)();
    }
    if (*plVar1 != 0) {
      (*(code *)PTR_free_154df4930)();
    }
    if (plVar1[1] != 0) {
      (*(code *)PTR_free_154df4930)();
    }
    plVar1 = plVar1 + 0xd;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}

// uejpeg_free_encode_image_context @ 14f652940

void uejpeg_free_encode_image_context(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)(param_1 + 0xb8);
  lVar2 = 0x10;
  do {
    if (plVar1[-1] != 0) {
      (*(code *)PTR_free_154df4930)();
    }
    if (*plVar1 != 0) {
      (*(code *)PTR_free_154df4930)();
    }
    if (plVar1[1] != 0) {
      (*(code *)PTR_free_154df4930)();
    }
    plVar1 = plVar1 + 0xd;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}

// FUN_14f6529a0 @ 14f6529a0

void FUN_14f6529a0(float *param_1,int param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  longlong local_68;
  
  iVar4 = 0;
  local_68 = 0;
  if (0 < param_2 * 8) {
    do {
      pfVar3 = param_1 + iVar4;
      FUN_14f652740(pfVar3,pfVar3 + 1,pfVar3 + 2,pfVar3 + 3,pfVar3 + 4,pfVar3 + 5,pfVar3 + 6,
                    pfVar3 + 7);
      iVar4 = iVar4 + param_2;
    } while (iVar4 < param_2 * 8);
  }
  lVar5 = 8;
  lVar6 = (longlong)(param_2 * 6);
  pfVar3 = param_1 + lVar6;
  do {
    FUN_14f652740(pfVar3 + -lVar6,pfVar3 + (param_2 - lVar6),pfVar3 + (param_2 * 2 - lVar6),
                  pfVar3 + (param_2 * 3 - lVar6),pfVar3 + (param_2 * 4 - lVar6),
                  pfVar3 + (param_2 * 5 - lVar6),pfVar3,pfVar3 + (param_2 * 7 - lVar6));
    fVar2 = __real_3f000000;
    pfVar3 = pfVar3 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  lVar5 = 8;
  do {
    lVar6 = 8;
    pfVar3 = param_1;
    do {
      fVar7 = *(float *)(param_3 + local_68 * 4) * *pfVar3;
      if (0.0 <= fVar7) {
        fVar7 = floorf(fVar7 + fVar2);
      }
      else {
        fVar7 = ceilf(fVar7 - fVar2);
      }
      piVar1 = &DAT_153477360 + local_68;
      pfVar3 = pfVar3 + 1;
      local_68 = local_68 + 1;
      *(int *)(param_4 + (longlong)*piVar1 * 4) = (int)fVar7;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    param_1 = param_1 + param_2;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return;
}

// FUN_14f652bb0 @ 14f652bb0

undefined8 FUN_14f652bb0(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong *plVar4;
  void *_Dst;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  int *piVar12;
  undefined8 *puVar13;
  uint uVar14;
  ulonglong uVar15;
  
  memset(param_2,0,0x250);
  plVar4 = (longlong *)(*(code *)PTR_malloc_154df4928)(0x4888);
  *plVar4 = param_1;
  FUN_14f64ccb0(plVar4);
  iVar3 = FUN_14f648110(plVar4);
  if (iVar3 == 0) {
    FUN_14f648390(plVar4,*(undefined4 *)(*plVar4 + 8),0);
    return 0;
  }
  uVar10 = 0;
  *param_2 = *(undefined4 *)*plVar4;
  param_2[1] = *(undefined4 *)(*plVar4 + 4);
  if (0 < *(int *)(*plVar4 + 8)) {
    plVar9 = (longlong *)(param_2 + 2);
    piVar12 = param_2 + 0x8e;
    plVar8 = plVar4 + 0x8df;
    puVar13 = (undefined8 *)(param_2 + 0x82);
    uVar15 = uVar10;
    do {
      _Dst = (void *)(*(code *)PTR_malloc_154df4928)
                               ((longlong)(*(int *)((longlong)plVar8 + 4) * (int)*plVar8 * 0x40) * 2
                               );
      *puVar13 = _Dst;
      memcpy(_Dst,(void *)plVar8[-1],
             (longlong)(*(int *)((longlong)plVar8 + 4) * (int)*plVar8 * 0x40) * 2);
      piVar12[-4] = (int)*plVar8;
      *piVar12 = *(int *)((longlong)plVar8 + 4);
      lVar5 = (longlong)*(int *)((longlong)plVar8 + -0x4c);
      lVar7 = 0;
      lVar11 = (plVar4 + lVar5 * 0x10 + 0x691)[1];
      *plVar9 = plVar4[lVar5 * 0x10 + 0x691];
      plVar9[1] = lVar11;
      lVar11 = (plVar4 + lVar5 * 0x10 + 0x693)[1];
      plVar9[2] = plVar4[lVar5 * 0x10 + 0x693];
      plVar9[3] = lVar11;
      lVar11 = (plVar4 + lVar5 * 0x10 + 0x695)[1];
      plVar9[4] = plVar4[lVar5 * 0x10 + 0x695];
      plVar9[5] = lVar11;
      lVar11 = (plVar4 + lVar5 * 0x10 + 0x697)[1];
      plVar9[6] = plVar4[lVar5 * 0x10 + 0x697];
      plVar9[7] = lVar11;
      lVar11 = (plVar4 + lVar5 * 0x10 + 0x699)[1];
      plVar9[8] = plVar4[lVar5 * 0x10 + 0x699];
      plVar9[9] = lVar11;
      lVar11 = (plVar4 + lVar5 * 0x10 + 0x69b)[1];
      plVar9[10] = plVar4[lVar5 * 0x10 + 0x69b];
      plVar9[0xb] = lVar11;
      plVar6 = plVar4 + lVar5 * 0x10 + 0x69d;
      uVar1 = *(undefined4 *)((longlong)plVar6 + 4);
      lVar11 = plVar6[1];
      uVar2 = *(undefined4 *)((longlong)plVar6 + 0xc);
      *(int *)(plVar9 + 0xc) = (int)*plVar6;
      *(undefined4 *)((longlong)plVar9 + 100) = uVar1;
      *(int *)(plVar9 + 0xd) = (int)lVar11;
      *(undefined4 *)((longlong)plVar9 + 0x6c) = uVar2;
      lVar11 = (plVar4 + lVar5 * 0x10 + 0x69f)[1];
      plVar9[0xe] = plVar4[lVar5 * 0x10 + 0x69f];
      plVar9[0xf] = lVar11;
      plVar6 = plVar9;
      do {
        if ((short)*plVar6 == 0) {
          lVar11 = (longlong)*(int *)(*plVar4 + 8);
          if (0 < lVar11) {
            plVar9 = plVar4 + 0x8db;
            do {
              if (*plVar9 != 0) {
                (*(code *)PTR_free_154df4930)();
                *plVar9 = 0;
                plVar9[-1] = 0;
              }
              if (plVar9[1] != 0) {
                (*(code *)PTR_free_154df4930)();
                plVar9[1] = 0;
                plVar9[3] = 0;
              }
              if (plVar9[2] != 0) {
                (*(code *)PTR_free_154df4930)();
                plVar9[2] = 0;
              }
              plVar9 = plVar9 + 0xc;
              lVar11 = lVar11 + -1;
            } while (lVar11 != 0);
          }
          (*(code *)PTR_free_154df4930)(plVar4);
          return 0;
        }
        lVar7 = lVar7 + 1;
        plVar6 = (longlong *)((longlong)plVar6 + 2);
      } while (lVar7 < 0x40);
      uVar14 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar14;
      *(char *)((longlong)param_2 + uVar10 + 0x24a) = (char)plVar8[-0xb];
      puVar13 = puVar13 + 1;
      uVar10 = uVar10 + 1;
      piVar12 = piVar12 + 1;
      plVar9 = plVar9 + 0x10;
      plVar8 = plVar8 + 0xc;
    } while ((int)uVar14 < *(int *)(*plVar4 + 8));
  }
  *(undefined1 *)(param_2 + 0x92) = *(undefined1 *)((longlong)plVar4 + 0x484c);
  *(char *)((longlong)param_2 + 0x249) = (char)plVar4[0x909];
  lVar11 = (longlong)*(int *)(*plVar4 + 8);
  if (0 < lVar11) {
    plVar9 = plVar4 + 0x8db;
    do {
      if (*plVar9 != 0) {
        (*(code *)PTR_free_154df4930)();
        *plVar9 = 0;
        plVar9[-1] = 0;
      }
      if (plVar9[1] != 0) {
        (*(code *)PTR_free_154df4930)();
        plVar9[1] = 0;
        plVar9[3] = 0;
      }
      if (plVar9[2] != 0) {
        (*(code *)PTR_free_154df4930)();
        plVar9[2] = 0;
      }
      plVar9 = plVar9 + 0xc;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  (*(code *)PTR_free_154df4930)(plVar4);
  return 1;
}

// uejpeg_set_alloc @ 14f652e90

void uejpeg_set_alloc(undefined8 *param_1)

{
  PTR_malloc_154df4928 = (undefined *)*param_1;
  PTR_free_154df4930 = (undefined *)param_1[1];
  PTR_realloc_154df4938 = (undefined *)param_1[2];
  return;
}

