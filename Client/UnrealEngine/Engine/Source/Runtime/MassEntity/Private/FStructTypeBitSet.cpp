// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 1

// GetTypeHash @ 147228bc0

uint __cdecl FStructTypeBitSet::GetTypeHash(FConstBitSetContainer *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  FConstBitSetContainer *pFVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  pFVar4 = param_1;
  if (*(FConstBitSetContainer **)&param_1->field_0x10 != (FConstBitSetContainer *)0x0) {
    pFVar4 = *(FConstBitSetContainer **)&param_1->field_0x10;
  }
  uVar9 = 0;
  iVar2 = *(uint *)&param_1->field_0x18 + 0x1f;
  iVar2 = (int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5;
  uVar5 = *(uint *)&param_1->field_0x18 & 0x8000001f;
  if ((int)uVar5 < 0) {
    uVar5 = (uVar5 - 1 | 0xffffffe0) + 1;
  }
  uVar1 = 0xffffffff >> ((byte)(0x20 - uVar5) & 0x1f);
  if (0x1f < (int)(0x20 - uVar5)) {
    uVar1 = 0xffffffff;
  }
  uVar5 = 0xffffffff;
  if (iVar2 == 1) {
    uVar5 = uVar1;
  }
  uVar7 = 0;
  uVar6 = 0;
  if (0 < iVar2) {
    do {
      uVar3 = *(uint *)(&pFVar4->field_0x0 + uVar9 * 4);
      if (uVar5 != 0xffffffff) {
        uVar3 = uVar3 & uVar5;
      }
      if (uVar3 == 0) {
        uVar5 = uVar7;
        if (uVar6 != 0) {
          uVar5 = uVar6;
        }
        uVar6 = 0x9e3779b9 - uVar5 ^ uVar5 << 8;
        uVar8 = -(uVar6 + uVar5) ^ uVar6 >> 0xd;
        uVar3 = (uVar5 - uVar8) - uVar6 ^ uVar8 >> 0xc;
        uVar5 = (uVar6 - uVar8) - uVar3 ^ uVar3 << 0x10;
        uVar8 = (uVar8 - uVar5) - uVar3 ^ uVar5 >> 5;
        uVar6 = (uVar3 - uVar8) - uVar5 ^ uVar8 >> 3;
        uVar5 = (uVar5 - uVar6) - uVar8 ^ uVar6 << 10;
        uVar6 = (uVar8 - uVar5) - uVar6 ^ uVar5 >> 0xf;
      }
      else {
        if (uVar6 != 0) {
          uVar7 = uVar6;
        }
        uVar5 = uVar7 - uVar3 ^ uVar3 >> 0xd;
        uVar7 = (-0x61c88647 - uVar5) - uVar3 ^ uVar5 << 8;
        uVar6 = (uVar3 - uVar7) - uVar5 ^ uVar7 >> 0xd;
        uVar5 = (uVar5 - uVar6) - uVar7 ^ uVar6 >> 0xc;
        uVar7 = (uVar7 - uVar5) - uVar6 ^ uVar5 << 0x10;
        uVar6 = (uVar6 - uVar7) - uVar5 ^ uVar7 >> 5;
        uVar5 = (uVar5 - uVar6) - uVar7 ^ uVar6 >> 3;
        uVar7 = (uVar7 - uVar5) - uVar6 ^ uVar5 << 10;
        uVar7 = (uVar6 - uVar7) - uVar5 ^ uVar7 >> 0xf;
        uVar6 = 0;
      }
      uVar3 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar3;
      uVar5 = 0xffffffff;
      if (uVar3 == iVar2 - 1U) {
        uVar5 = uVar1;
      }
    } while ((int)uVar3 < iVar2);
  }
  return uVar7;
}

