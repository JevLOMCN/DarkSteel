// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 1

// __common_sfmod_cout_rare @ 150168eb0

void __cdecl __common_sfmod_cout_rare(void)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  float fVar6;
  float *in_RCX;
  uint uVar7;
  float *in_RDX;
  float fVar8;
  float *in_R8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  float fVar12;
  
  fVar6 = *in_RCX;
  fVar1 = *in_RDX;
  fVar8 = ABS(fVar1);
  uVar7 = (uint)fVar6 & 0x80000000;
  fVar12 = *in_RCX;
  fVar2 = ABS(fVar6);
  if (fVar8 == 1.0) {
    if ((uint)fVar2 < 0x3f800001) {
      if (fVar2 == 1.0) {
        *in_R8 = fVar12 * 0.0;
      }
      else {
        *in_R8 = fVar12;
      }
      return;
    }
    if ((uint)fVar2 < 0x4b000000) {
      bVar4 = 0x17 - (char)((int)fVar2 + 0x800000U >> 0x17);
      *in_R8 = (float)((uint)(fVar12 - (float)(((uint)fVar2 >> (bVar4 & 0x1f)) << (bVar4 & 0x1f) |
                                              uVar7)) | uVar7);
      return;
    }
    if ((uint)fVar2 < 0x7f800000) goto LAB_150168f5d;
    if (0x7f800000 < (uint)fVar2) goto LAB_1501690d4;
    if (fVar2 == INFINITY) goto LAB_1501690b7;
  }
  else {
    if ((0x7f800000 < (uint)fVar2) || (0x7f800000 < (uint)fVar8)) {
LAB_1501690d4:
      *in_R8 = fVar12 * *in_RDX;
      return;
    }
    if ((fVar8 == 0.0) || (fVar2 == INFINITY)) {
LAB_1501690b7:
      *in_R8 = -NAN;
      return;
    }
    if (fVar8 == INFINITY) {
      *in_R8 = fVar12;
      return;
    }
  }
  if ((uint)fVar2 < (uint)fVar8) {
    *in_R8 = fVar12;
    return;
  }
  if (fVar2 != fVar8) {
    iVar11 = (((uint)fVar6 & 0x7ff00000) >> 0x17) - 0x7f;
    iVar5 = (((uint)fVar1 & 0x7ff00000) >> 0x17) - 0x7f;
    uVar3 = (uint)fVar6 & 0x7fffff;
    uVar10 = (uint)fVar1 & 0x7fffff;
    if ((iVar11 == -0x7f) && (uVar3 != 0)) {
      iVar11 = -0x7e;
      do {
        uVar3 = uVar3 * 2;
        iVar11 = iVar11 + -1;
      } while (uVar3 < 0x800000);
    }
    else {
      uVar3 = uVar3 + 0x800000;
    }
    if ((iVar5 == -0x7f) && (uVar10 != 0)) {
      iVar5 = -0x7e;
      do {
        uVar10 = uVar10 * 2;
        iVar5 = iVar5 + -1;
      } while (uVar10 < 0x800000);
    }
    else {
      uVar10 = uVar10 + 0x800000;
    }
    uVar9 = 0;
    if (iVar11 - iVar5 != -1) {
      do {
        uVar9 = uVar9 + 1;
        if (uVar10 <= uVar3) {
          uVar3 = uVar3 - uVar10;
        }
        uVar3 = uVar3 * 2;
      } while (uVar9 < (iVar11 - iVar5) + 1U);
    }
    if (uVar3 != 0) {
      for (uVar3 = uVar3 >> 1; uVar3 < 0x800000; uVar3 = uVar3 * 2) {
        iVar5 = iVar5 + -1;
      }
      if (iVar5 < -0x7e) {
        uVar3 = uVar3 >> (2U - (char)iVar5 & 0x1f);
        iVar5 = 0;
      }
      else {
        uVar3 = uVar3 & 0x7fffff;
        iVar5 = iVar5 + 0x7f;
      }
      fVar6 = (float)(iVar5 << 0x17 | uVar3);
      fVar12 = fVar6 - *in_RDX;
      if ((uint)fVar6 < (uint)fVar8) {
        fVar12 = fVar6;
      }
      if (uVar7 != 0) {
        fVar12 = (float)((uint)fVar12 ^ _2il0floatpacket_0);
      }
      *in_R8 = fVar12;
      return;
    }
    *in_R8 = fVar12 * 0.0;
    return;
  }
LAB_150168f5d:
  *in_R8 = fVar12 * 0.0;
  return;
}

