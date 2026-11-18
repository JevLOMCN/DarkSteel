// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 1

// __common_dinvsqrt_cout_rare @ 150169150

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __common_dinvsqrt_cout_rare(void)

{
  ushort uVar1;
  uint uVar2;
  double *in_RCX;
  uint uVar3;
  double *in_RDX;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  
  if (((ulonglong)*in_RCX & 0x7ff0000000000000) == 0x7ff0000000000000) {
    if ((((ulonglong)*in_RCX & 0xfffff00000000) == 0) && (*(int *)in_RCX == 0)) {
      if (((ulonglong)*in_RCX & 0x8000000000000000) != 0x8000000000000000) {
        *in_RDX = DAT_156208720 / *in_RCX;
        return;
      }
      *in_RDX = *in_RCX / *in_RCX;
      return;
    }
    *in_RDX = *in_RCX / *in_RCX;
    return;
  }
  dVar7 = *in_RCX;
  iVar4 = 0;
  dVar5 = dVar7;
  if (((ulonglong)*in_RCX & 0x7ff0000000000000) == 0) {
    iVar4 = -0x1e;
    dVar5 = DAT_156208718 * dVar7;
  }
  if (DAT_156208720 < dVar5) {
    local_30._6_2_ = (ushort)((ulonglong)dVar5 >> 0x30);
    uVar1 = local_30._6_2_;
    local_30 = (double)CONCAT26((local_30._6_2_ & 0x800f) + 0x3ff0,SUB86(dVar5,0));
    uVar2 = ((uVar1 & 0x7ff0) >> 4) - 0x3ff;
    uVar3 = uVar2 & 1;
    dVar7 = local_30 + local_30;
    if (uVar3 == 0) {
      dVar7 = local_30;
    }
    local_28 = SUB84(local_30 + DAT_156208708,0);
    dVar6 = DAT_156208710 * dVar7 - (DAT_156208710 * dVar7 - dVar7);
    dVar5 = *(double *)(&_vmldInvSqrtHATab + (ulonglong)((local_28 & 0x3f) + uVar3 * 0x20) * 2);
    dVar8 = (double)CONCAT26(DAT_156208728._6_2_,(undefined6)DAT_156208728) - dVar6 * dVar5 * dVar5;
    dVar9 = (dVar7 - dVar6) * dVar5 * dVar5;
    dVar7 = dVar8 - dVar9;
    local_38 = (double)CONCAT26(DAT_156208728._6_2_ & 0x800f |
                                (ushort)((0x3ff - (iVar4 + (uVar2 - uVar3 >> 1)) & 0x7ff) << 4),
                                (undefined6)DAT_156208728);
    dVar6 = DAT_156208710 * dVar8 - (DAT_156208710 * dVar8 - dVar8);
    dVar11 = DAT_156208730 * dVar5 * dVar6;
    dVar10 = dVar5 + dVar11;
    *in_RDX = ((dVar5 - dVar10) + dVar11 +
               (((((((DAT_156208768 * dVar7 + _DAT_156208760) * dVar7 + _DAT_156208758) * dVar7 +
                   _DAT_156208750) * dVar7 + _DAT_156208748) * dVar7 + _DAT_156208740) * dVar7 +
                _DAT_156208738) * dVar7 * dVar7 - (dVar9 - (dVar8 - dVar6)) * DAT_156208730) * dVar5
              + dVar10) * local_38;
    return;
  }
  if (dVar5 < DAT_156208720) {
    *in_RDX = DAT_156208720 / DAT_156208720;
    return;
  }
  *in_RDX = (double)CONCAT26(DAT_156208728._6_2_,(undefined6)DAT_156208728) / dVar7;
  return;
}

