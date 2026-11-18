// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// MemmoveBitsWordOrder @ 1415d4fb0

void __cdecl
FBitArrayMemory::MemmoveBitsWordOrder
          (uint *param_1,int param_2,uint *param_3,int param_4,uint param_5)

{
  byte bVar1;
  byte bVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  
  if (param_5 != 0) {
    uVar4 = (uint)param_2 >> 0x1f;
    if (0x1f < param_2) {
      uVar4 = 1;
    }
    if (uVar4 != 0) {
      iVar5 = (int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5;
      param_2 = param_2 + iVar5 * -0x20;
      param_1 = param_1 + iVar5;
      if (param_2 < 0) {
        param_1 = param_1 + -1;
        param_2 = param_2 + 0x20;
      }
    }
    uVar4 = (uint)param_4 >> 0x1f;
    if (0x1f < param_4) {
      uVar4 = 1;
    }
    if (uVar4 != 0) {
      iVar5 = (int)(param_4 + (param_4 >> 0x1f & 0x1fU)) >> 5;
      param_4 = param_4 + iVar5 * -0x20;
      param_3 = param_3 + iVar5;
      if (param_4 < 0) {
        param_3 = param_3 + -1;
        param_4 = param_4 + 0x20;
      }
    }
    uVar4 = param_2 - param_4;
    if (uVar4 == 0) {
      uVar8 = -1 << ((byte)param_2 & 0x1f);
      uVar4 = (param_2 + param_5) - 1 >> 5;
      uVar11 = 0xffffffff >> (0x1f - ((char)(param_2 + param_5) - 1U & 0x1f) & 0x1f);
      puVar9 = param_1 + uVar4;
      puVar3 = param_3 + uVar4;
      if (uVar4 == 0) {
        *param_1 = ~(uVar11 & uVar8) & *param_1 | uVar11 & uVar8 & *param_3;
        return;
      }
      if (param_1 <= param_3 || puVar3 < param_1) {
        *param_1 = ~uVar8 & *param_1 | *param_3 & uVar8;
        puVar6 = param_1 + 1;
        if (puVar6 < puVar9) {
          puVar13 = puVar6;
          do {
            *puVar13 = *(uint *)((longlong)param_3 + (4 - (longlong)puVar6) + (longlong)puVar13);
            puVar13 = puVar13 + 1;
          } while (puVar13 < puVar9);
        }
        *puVar9 = ~uVar11 & *puVar9 | *puVar3 & uVar11;
        return;
      }
      *puVar9 = ~uVar11 & *puVar9 | *puVar3 & uVar11;
      puVar9 = puVar9 + -1;
      if (param_1 < puVar9) {
        puVar6 = puVar9;
        do {
          *puVar6 = *(uint *)((longlong)puVar3 + (-4 - (longlong)puVar9) + (longlong)puVar6);
          puVar6 = puVar6 + -1;
        } while (param_1 < puVar6);
      }
      *param_1 = ~uVar8 & *param_1 | *param_3 & uVar8;
      return;
    }
    if ((int)uVar4 < 0) {
      uVar4 = uVar4 + 0x20;
    }
    uVar11 = (param_5 - 1) + param_2;
    uVar14 = (uVar11 & 0x1f) + 1;
    bVar2 = (byte)uVar4;
    bVar1 = -bVar2;
    uVar8 = 0xffffffff;
    if (param_2 != 0) {
      uVar8 = -1 << ((byte)param_2 & 0x1f);
    }
    uVar12 = 0xffffffff >> (0x20U - (char)uVar14 & 0x1f);
    puVar3 = param_1 + (uVar11 >> 5);
    puVar9 = param_3 + ((param_5 - 1) + param_4 >> 5);
    if (param_1 == puVar3) {
      uVar8 = uVar8 & uVar12;
      if (param_4 < param_2) {
        *param_1 = uVar8 & *param_3 << (bVar2 & 0x1f) | ~uVar8 & *param_1;
      }
      else {
        uVar4 = *param_3 >> (bVar1 & 0x1f);
        if (param_3 != puVar9) {
          uVar4 = uVar4 | *puVar9 << (bVar2 & 0x1f);
        }
        *param_1 = uVar8 & uVar4 | ~uVar8 & *param_1;
      }
    }
    else if (param_3 < param_1 && param_1 <= puVar9) {
      uVar11 = *puVar9 << (bVar2 & 0x1f);
      if (uVar4 < uVar14) {
        puVar6 = puVar9 + -1;
        puVar9 = puVar9 + -1;
        uVar4 = *puVar6 << (bVar2 & 0x1f);
        uVar14 = *puVar6 >> (bVar1 & 0x1f) | uVar11;
      }
      else {
        uVar14 = *puVar9 >> (bVar1 & 0x1f);
        uVar4 = uVar11;
      }
      *puVar3 = uVar14 & uVar12 | *puVar3 & ~uVar12;
      while (puVar3 = puVar3 + -1, puVar3 != param_1) {
        uVar11 = puVar9[-1];
        puVar9 = puVar9 + -1;
        *puVar3 = uVar11 >> (bVar1 & 0x1f) | uVar4;
        uVar4 = uVar11 << (bVar2 & 0x1f);
      }
      if (param_4 < param_2) {
        uVar11 = 0;
      }
      else {
        uVar11 = puVar9[-1] >> (bVar1 & 0x1f);
      }
      *puVar3 = (uVar4 | uVar11) & uVar8 | ~uVar8 & *puVar3;
    }
    else {
      uVar11 = *param_3 >> (bVar1 & 0x1f);
      if (param_4 < param_2) {
        uVar7 = *param_3 << (bVar2 & 0x1f);
        uVar10 = uVar11;
      }
      else {
        puVar9 = param_3 + 1;
        param_3 = param_3 + 1;
        uVar10 = *puVar9 >> (bVar1 & 0x1f);
        uVar7 = *puVar9 << (bVar2 & 0x1f) | uVar11;
      }
      *param_1 = uVar7 & uVar8 | *param_1 & ~uVar8;
      while (param_1 = param_1 + 1, param_1 != puVar3) {
        uVar8 = param_3[1];
        param_3 = param_3 + 1;
        *param_1 = uVar8 << (bVar2 & 0x1f) | uVar10;
        uVar10 = uVar8 >> (bVar1 & 0x1f);
      }
      if (uVar4 < uVar14) {
        uVar4 = param_3[1] << (bVar2 & 0x1f);
      }
      else {
        uVar4 = 0;
      }
      *param_1 = (uVar10 | uVar4) & uVar12 | ~uVar12 & *param_1;
    }
  }
  return;
}

// MemmoveBitsWordOrderAlignedInternal @ 1415d5380

void __cdecl
FBitArrayMemory::MemmoveBitsWordOrderAlignedInternal
          (uint *param_1,uint *param_2,int param_3,uint param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = -1 << ((byte)param_3 & 0x1f);
  uVar7 = 0xffffffff >> (0x1f - (((byte)param_3 - 1) + (char)param_4 & 0x1f) & 0x1f);
  uVar3 = param_3 + -1 + param_4 >> 5;
  puVar4 = param_1 + uVar3;
  puVar2 = param_2 + uVar3;
  if (uVar3 == 0) {
    *param_1 = ~(uVar7 & uVar6) & *param_1 | *param_2 & uVar7 & uVar6;
    return;
  }
  if (param_1 <= param_2 || puVar2 < param_1) {
    *param_1 = ~uVar6 & *param_1 | *param_2 & uVar6;
    puVar1 = param_1 + 1;
    if (puVar1 < puVar4) {
      puVar5 = puVar1;
      do {
        *puVar5 = *(uint *)((longlong)param_2 + (4 - (longlong)puVar1) + (longlong)puVar5);
        puVar5 = puVar5 + 1;
      } while (puVar5 < puVar4);
    }
    *puVar4 = ~uVar7 & *puVar4 | *puVar2 & uVar7;
    return;
  }
  puVar1 = puVar4 + -1;
  *puVar4 = ~uVar7 & *puVar4 | *puVar2 & uVar7;
  if (param_1 < puVar1) {
    puVar4 = puVar1;
    do {
      *puVar4 = *(uint *)((longlong)puVar2 + (-4 - (longlong)puVar1) + (longlong)puVar4);
      puVar4 = puVar4 + -1;
    } while (param_1 < puVar4);
  }
  *param_1 = ~uVar6 & *param_1 | *param_2 & uVar6;
  return;
}

// ModularizeWordOffset @ 1415d5b50

void __cdecl FBitArrayMemory::ModularizeWordOffset(uint **param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *param_2;
  if (0x1f < uVar1) {
    iVar2 = (int)(uVar1 + ((int)uVar1 >> 0x1f & 0x1fU)) >> 5;
    *param_1 = *param_1 + iVar2;
    *param_2 = *param_2 + iVar2 * -0x20;
    if (*param_2 < 0) {
      *param_1 = *param_1 + -1;
      *param_2 = *param_2 + 0x20;
    }
  }
  return;
}

