// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 1

// __common_dfmod_cout_rare @ 150168b80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __common_dfmod_cout_rare(void)

{
  double dVar1;
  double dVar2;
  int iVar3;
  byte bVar4;
  double *in_RCX;
  double dVar5;
  ulonglong uVar6;
  double *in_RDX;
  double dVar7;
  ulonglong uVar8;
  double *in_R8;
  int iVar9;
  double dVar10;
  uint uVar11;
  
  dVar2 = *in_RCX;
  dVar10 = *in_RCX;
  dVar1 = *in_RDX;
  dVar5 = ABS(*in_RDX);
  dVar7 = ABS(dVar2);
  if (dVar5 == 1.0) {
    if ((ulonglong)dVar7 < 0x3ff0000000000001) {
      if (dVar7 == 1.0) {
        *in_R8 = dVar10 * 0.0;
      }
      else {
        *in_R8 = dVar10;
      }
      return;
    }
    if ((ulonglong)dVar7 < 0x4330000000000000) {
      bVar4 = 0x34 - (char)((longlong)dVar7 + 0xc010000000000000U >> 0x34);
      *in_R8 = (double)((ulonglong)
                        (dVar10 - (double)(((ulonglong)dVar7 >> (bVar4 & 0x3f)) << (bVar4 & 0x3f) |
                                          (ulonglong)dVar2 & 0x8000000000000000)) |
                       (ulonglong)dVar2 & 0x8000000000000000);
      return;
    }
    if ((ulonglong)dVar7 < 0x7ff0000000000000) goto LAB_150168c43;
  }
  if ((0x7ff0000000000000 < (ulonglong)dVar7) || (0x7ff0000000000000 < (ulonglong)dVar5)) {
    *in_R8 = dVar10 * dVar1;
    return;
  }
  if ((dVar5 == 0.0) || (dVar7 == INFINITY)) {
    *in_R8 = -NAN;
    return;
  }
  if (dVar5 == INFINITY) {
    *in_R8 = dVar10;
    return;
  }
  if ((ulonglong)dVar5 <= (ulonglong)dVar7) {
    if (dVar7 == dVar5) {
LAB_150168c43:
      *in_R8 = dVar10 * 0.0;
      return;
    }
    if ((dVar5 != 2147483647.0) || (0x432fffffffffffff < (ulonglong)dVar7)) {
      uVar8 = (ulonglong)dVar2 & 0xfffffffffffff;
      uVar6 = (ulonglong)*in_RDX & 0xfffffffffffff;
      iVar3 = (((uint)((ulonglong)dVar2 >> 0x20) & 0x7ff00000) >> 0x14) - 0x3ff;
      iVar9 = (uint)((ulonglong)dVar5 >> 0x34) - 0x3ff;
      if ((iVar3 == -0x3ff) && (uVar8 != 0)) {
        iVar3 = -0x3fe;
        do {
          uVar8 = uVar8 * 2;
          iVar3 = iVar3 + -1;
        } while (uVar8 < 0x10000000000000);
      }
      else {
        uVar8 = uVar8 | 0x10000000000000;
      }
      if ((iVar9 == -0x3ff) && (uVar6 != 0)) {
        iVar9 = -0x3fe;
        do {
          uVar6 = uVar6 * 2;
          iVar9 = iVar9 + -1;
        } while (uVar6 < 0x10000000000000);
      }
      else {
        uVar6 = uVar6 | 0x10000000000000;
      }
      uVar11 = 0;
      if (iVar3 - iVar9 != -1) {
        do {
          uVar11 = uVar11 + 1;
          if (uVar6 <= uVar8) {
            uVar8 = uVar8 - uVar6;
          }
          uVar8 = uVar8 * 2;
        } while (uVar11 < (iVar3 - iVar9) + 1U);
      }
      if (uVar8 != 0) {
        for (uVar8 = uVar8 >> 1; uVar8 < 0x10000000000000; uVar8 = uVar8 * 2) {
          iVar9 = iVar9 + -1;
        }
        if (iVar9 < -0x3fe) {
          iVar3 = 0;
          uVar8 = uVar8 >> (2U - (char)iVar9 & 0x3f);
        }
        else {
          uVar8 = uVar8 & 0xfffffffffffff;
          iVar3 = iVar9 + 0x3ff;
        }
        dVar10 = (double)((longlong)iVar3 << 0x34 | uVar8);
        if ((longlong)dVar2 < 0) {
          dVar10 = (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) ^ _UNK_156207b04,
                                    (uint)uVar8 ^ _2il0floatpacket_0);
        }
        *in_R8 = dVar10;
        return;
      }
      *in_R8 = dVar10 * 0.0;
      return;
    }
    dVar7 = dVar7 - (double)((longlong)(__libm_2_to_n31 * dVar7) & 0xffffffff) * __libm_2_to_p31_m1;
    dVar10 = dVar7 - dVar1;
    if (dVar7 < dVar1) {
      dVar10 = dVar7;
    }
    if ((longlong)dVar2 < 0) {
      dVar10 = (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) ^ _UNK_156207b04,
                                SUB84(dVar10,0) ^ _2il0floatpacket_0);
    }
  }
  *in_R8 = dVar10;
  return;
}

