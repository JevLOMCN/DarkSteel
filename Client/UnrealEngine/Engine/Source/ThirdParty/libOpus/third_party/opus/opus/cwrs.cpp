// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 3

// FUN_14f88933c @ 14f88933c

float FUN_14f88933c(int param_1,ulonglong param_2,uint param_3,int *param_4)

{
  undefined *puVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  undefined **ppuVar11;
  short sVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar15 = 0.0;
  uVar7 = (ulonglong)param_1;
  iVar4 = (int)param_2;
  param_2 = param_2 & 0xffffffff;
  if (iVar4 < 1) {
    celt_fatal("assertion failed: _k>0","../../../third_party/opus/src/celt/cwrs.c",0x1d5);
  }
  if (param_1 < 2) {
    celt_fatal("assertion failed: _n>1","../../../third_party/opus/src/celt/cwrs.c",0x1d6);
  }
  if (2 < param_1) {
    lVar9 = uVar7 << 2;
    ppuVar11 = &PTR_DAT_1535198e0 + uVar7;
    do {
      lVar5 = (longlong)(int)param_2;
      sVar12 = (short)param_2;
      if ((int)param_2 < (int)uVar7) {
        uVar10 = *(uint *)((&PTR_DAT_1535198e8)[lVar5] + lVar9);
        if ((param_3 < *(uint *)((&PTR_DAT_1535198e0)[lVar5] + lVar9)) || (uVar10 <= param_3)) {
          uVar8 = (param_3 < uVar10) - 1;
          param_3 = param_3 - (uVar10 & uVar8);
          do {
            uVar10 = (int)param_2 - 1;
            param_2 = (ulonglong)uVar10;
          } while (param_3 < *(uint *)((&PTR_DAT_1535198e0)[(int)uVar10] + lVar9));
          param_3 = param_3 - *(uint *)((&PTR_DAT_1535198e0)[(int)uVar10] + lVar9);
          uVar3 = (ushort)uVar8;
          sVar2 = uVar3 - (short)uVar10;
          goto LAB_14f889475;
        }
        param_3 = param_3 - *(uint *)((&PTR_DAT_1535198e0)[lVar5] + lVar9);
        iVar6 = 0;
      }
      else {
        puVar1 = *ppuVar11;
        uVar10 = (param_3 < *(uint *)(puVar1 + lVar5 * 4 + 4)) - 1;
        param_3 = param_3 - (uVar10 & *(uint *)(puVar1 + lVar5 * 4 + 4));
        if (param_3 < *(uint *)(puVar1 + lVar9)) {
          param_2 = uVar7 & 0xffffffff;
          do {
            uVar8 = (int)param_2 - 1;
            param_2 = (ulonglong)uVar8;
            uVar8 = *(uint *)((&PTR_DAT_1535198e0)[(int)uVar8] + lVar9);
          } while (param_3 < uVar8);
        }
        else {
          for (uVar8 = *(uint *)(puVar1 + lVar5 * 4); param_3 < uVar8;
              uVar8 = *(uint *)(puVar1 + (longlong)(int)uVar8 * 4)) {
            uVar8 = (int)param_2 - 1;
            param_2 = (ulonglong)uVar8;
          }
        }
        uVar3 = (ushort)uVar10;
        param_3 = param_3 - uVar8;
        sVar2 = uVar3 - (short)param_2;
LAB_14f889475:
        iVar6 = (int)(short)(sVar2 + sVar12 ^ uVar3);
        fVar15 = (float)iVar6 * (float)iVar6 + fVar15;
      }
      iVar4 = (int)param_2;
      *param_4 = iVar6;
      uVar10 = (int)uVar7 - 1;
      uVar7 = (ulonglong)uVar10;
      param_4 = param_4 + 1;
      ppuVar11 = ppuVar11 + -1;
      lVar9 = lVar9 + -4;
    } while (2 < (int)uVar10);
  }
  uVar10 = iVar4 * 2 + 1;
  uVar8 = (param_3 < uVar10) - 1;
  iVar6 = param_3 - (uVar8 & uVar10);
  uVar10 = iVar6 + 1U >> 1;
  if (uVar10 != 0) {
    iVar6 = iVar6 + uVar10 * -2 + 1;
  }
  uVar3 = (ushort)uVar8;
  iVar4 = (int)(short)((uVar3 - (short)uVar10) + (short)iVar4 ^ uVar3);
  *param_4 = iVar4;
  fVar13 = (float)iVar4;
  iVar4 = (int)(short)((short)uVar10 + -(short)iVar6 ^ -(short)iVar6);
  param_4[1] = iVar4;
  fVar14 = (float)iVar4;
  return fVar13 * fVar13 + fVar15 + fVar14 * fVar14;
}

// decode_pulses @ 14f889538

void decode_pulses(undefined8 param_1,int param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = param_3 + 1;
  iVar1 = iVar5;
  if (param_2 < iVar5) {
    iVar1 = param_2;
  }
  if (iVar5 < param_2) {
    iVar5 = param_2;
  }
  iVar2 = param_3;
  if (param_2 < param_3) {
    iVar2 = param_2;
  }
  iVar3 = param_3;
  if (param_3 < param_2) {
    iVar3 = param_2;
  }
  uVar4 = ec_dec_uint(param_4,*(int *)((&PTR_DAT_1535198e0)[iVar1] + (longlong)iVar5 * 4) +
                              *(int *)((&PTR_DAT_1535198e0)[iVar2] + (longlong)iVar3 * 4));
  FUN_14f88933c(param_2,param_3,uVar4,param_1);
  return;
}

// encode_pulses @ 14f8895d4

void encode_pulses(longlong param_1,int param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  if (param_3 < 1) {
    celt_fatal("assertion failed: _k>0","../../../third_party/opus/src/celt/cwrs.c",0x1cb);
  }
  if (param_2 < 2) {
    celt_fatal("assertion failed: _n>=2","../../../third_party/opus/src/celt/cwrs.c",0x1bc);
  }
  iVar9 = param_2 + -1;
  puVar4 = (uint *)(param_1 + (longlong)iVar9 * 4);
  uVar3 = (int)*puVar4 >> 0x1f;
  uVar8 = *puVar4 >> 0x1f;
  iVar5 = (*puVar4 ^ uVar3) - uVar3;
  iVar6 = param_2 - iVar9;
  do {
    puVar4 = puVar4 + -1;
    iVar9 = iVar9 + -1;
    iVar7 = iVar6 + 1;
    iVar1 = iVar5;
    if (iVar7 < iVar5) {
      iVar1 = iVar7;
    }
    iVar2 = iVar5;
    if (iVar5 < iVar7) {
      iVar2 = iVar7;
    }
    uVar8 = uVar8 + *(int *)((&PTR_DAT_1535198e0)[iVar1] + (longlong)iVar2 * 4);
    uVar3 = (int)*puVar4 >> 0x1f;
    iVar5 = iVar5 + ((*puVar4 ^ uVar3) - uVar3);
    if ((int)*puVar4 < 0) {
      iVar1 = iVar5;
      if (iVar7 < iVar5 + 1) {
        iVar1 = iVar6;
      }
      iVar2 = iVar5;
      if (iVar5 + 1 < iVar7) {
        iVar2 = iVar6;
      }
      uVar8 = uVar8 + *(int *)((&PTR_DAT_1535198e8)[iVar1] + (longlong)iVar2 * 4 + 4);
    }
    iVar6 = iVar7;
  } while (0 < iVar9);
  iVar6 = param_3 + 1;
  iVar5 = iVar6;
  if (param_2 < iVar6) {
    iVar5 = param_2;
  }
  if (iVar6 < param_2) {
    iVar6 = param_2;
  }
  iVar9 = param_3;
  if (param_2 < param_3) {
    iVar9 = param_2;
  }
  if (param_3 < param_2) {
    param_3 = param_2;
  }
  ec_enc_uint(param_4,uVar8,
              *(int *)((&PTR_DAT_1535198e0)[iVar5] + (longlong)iVar6 * 4) +
              *(int *)((&PTR_DAT_1535198e0)[iVar9] + (longlong)param_3 * 4));
  return;
}

