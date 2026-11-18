// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 1

// __common_dasin_cout_rare @ 150168050

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __common_dasin_cout_rare(void)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  double *in_RCX;
  uint uVar4;
  double *in_RDX;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  uint local_90;
  undefined8 local_88;
  
  dVar14 = *in_RCX;
  if (((ulonglong)*in_RCX & 0x7ff0000000000000) == 0x7ff0000000000000) {
    *in_RDX = dVar14 / dVar14;
  }
  else {
    local_a0._0_7_ = SUB87(dVar14,0);
    local_a0 = ABS((double)CONCAT17(*(undefined1 *)((longlong)in_RCX + 7),(undefined7)local_a0));
    dVar17 = (double)CONCAT26(DAT_1561f4440._6_2_,(undefined6)DAT_1561f4440);
    if (dVar17 < local_a0) {
      *in_RDX = (dVar14 - dVar14) / (dVar14 - dVar14);
    }
    else if (DAT_1561f4448 <= local_a0) {
      dVar14 = dVar17 - local_a0;
      local_a0._6_2_ = (ushort)((ulonglong)(DAT_1561f4448 * dVar14) >> 0x30);
      uVar3 = ((local_a0._6_2_ & 0x7ff0) >> 4) - 0x3ff;
      local_98 = (double)CONCAT26(DAT_1561f4440._6_2_ & 0x800f |
                                  (ushort)((0x3ff - uVar3 & 0x7ff) << 4),(undefined6)DAT_1561f4440);
      uVar4 = uVar3 & 1;
      local_98 = DAT_1561f4448 * dVar14 * local_98;
      dVar9 = local_98 + local_98;
      if (uVar4 == 0) {
        dVar9 = local_98;
      }
      local_90 = SUB84(local_98 + DAT_1561f4418,0);
      dVar1 = *(double *)(&_vmldASinHATab + (ulonglong)((local_90 & 0x1ff) + uVar4 * 0x100) * 2);
      dVar7 = DAT_1561f4410 * dVar9 - (DAT_1561f4410 * dVar9 - dVar9);
      dVar12 = dVar1 * dVar1 * (dVar9 - dVar7) + (dVar7 * dVar1 * dVar1 - dVar17);
      local_88 = (double)CONCAT26(DAT_1561f4440._6_2_ & 0x800f |
                                  (ushort)(((uVar3 - uVar4 >> 1) + 0x3ff & 0x7ff) << 4),
                                  (undefined6)DAT_1561f4440);
      dVar8 = dVar7 * dVar1 * local_88;
      dVar15 = DAT_1561f4408 * dVar8 - (DAT_1561f4408 * dVar8 - dVar8);
      dVar16 = DAT_1561f4408 * dVar14 - (DAT_1561f4408 * dVar14 - dVar14);
      dVar13 = dVar16 * dVar16;
      dVar11 = (((((((((((DAT_1561f4558 * dVar14 + _DAT_1561f4550) * dVar14 + _DAT_1561f4548) *
                        dVar14 + _DAT_1561f4540) * dVar14 + _DAT_1561f4538) * dVar14 +
                     _DAT_1561f4530) * dVar14 + _DAT_1561f4528) * dVar14 + _DAT_1561f4520) * dVar14
                  + _DAT_1561f4518) * dVar14 + _DAT_1561f4510) * dVar14 + _DAT_1561f4508) * dVar14 +
               _DAT_1561f4500) * dVar14 * dVar14 * dVar14;
      dVar6 = DAT_1561f4408 * dVar13 - (DAT_1561f4408 * dVar13 - dVar13);
      dVar10 = dVar6 * DAT_1561f44f0;
      dVar18 = dVar16 * DAT_1561f44e0 + dVar10;
      dVar2 = DAT_1561f44d0 + dVar18;
      dVar5 = DAT_1561f4408 * dVar2 - (DAT_1561f4408 * dVar2 - dVar2);
      dVar19 = dVar15 * dVar5;
      dVar17 = DAT_1561f4430 - dVar19;
      dVar17 = dVar17 + ((DAT_1561f4430 - dVar17) - dVar19) +
                        (DAT_1561f4438 -
                        (((dVar8 - dVar15) +
                         (dVar1 * (dVar9 - dVar7) +
                         dVar9 * dVar12 * ((((((DAT_1561f4590 * dVar12 + _DAT_1561f4588) * dVar12 +
                                              _DAT_1561f4580) * dVar12 + _DAT_1561f4578) * dVar12 +
                                            _DAT_1561f4570) * dVar12 + _DAT_1561f4568) * dVar12 +
                                          _DAT_1561f4560) * dVar1) * local_88) *
                         (DAT_1561f44d0 + _DAT_1561f44d8 +
                          (DAT_1561f44e0 + _DAT_1561f44e8 + (DAT_1561f44f0 + DAT_1561f44f8) * dVar14
                          ) * dVar14 + dVar11) +
                         ((dVar2 - dVar5) + (dVar16 * DAT_1561f44e0 - dVar18) + dVar10 +
                          (DAT_1561f44d0 - dVar2) + dVar18 + DAT_1561f44e0 * (dVar14 - dVar16) +
                         ((dVar13 - dVar6) + (dVar16 + dVar14) * (dVar14 - dVar16)) * DAT_1561f44f0)
                         * dVar15 +
                        ((DAT_1561f44f8 * dVar14 + _DAT_1561f44e8) * dVar14 + _DAT_1561f44d8 +
                        dVar11) * dVar15));
      local_a8._7_1_ = (byte)((ulonglong)dVar17 >> 0x38);
      local_a8._0_7_ = SUB87(dVar17,0);
      local_a8 = (double)CONCAT17(local_a8._7_1_ & 0x7f | *(byte *)((longlong)in_RCX + 7) & 0x80,
                                  (undefined7)local_a8);
      *in_RDX = local_a8;
    }
    else if (local_a0 <= _DAT_1561f4428) {
      if (local_a0 < _DAT_1561f4420) {
        local_a0 = local_a0 * local_a0 + local_a0;
        local_a8._7_1_ = (byte)((ulonglong)local_a0 >> 0x38);
        local_a8._0_7_ = SUB87(local_a0,0);
        local_a8 = (double)CONCAT17(local_a8._7_1_ & 0x7f | *(byte *)((longlong)in_RCX + 7) & 0x80,
                                    (undefined7)local_a8);
        *in_RDX = local_a8;
      }
      else {
        local_a0 = (local_a0 + dVar17) * local_a0;
        local_a8._7_1_ = (byte)((ulonglong)local_a0 >> 0x38);
        local_a8._0_7_ = SUB87(local_a0,0);
        local_a8 = (double)CONCAT17(local_a8._7_1_ & 0x7f | *(byte *)((longlong)in_RCX + 7) & 0x80,
                                    (undefined7)local_a8);
        *in_RDX = local_a8;
      }
    }
    else {
      dVar14 = DAT_1561f4408 * local_a0 - (DAT_1561f4408 * local_a0 - local_a0);
      dVar9 = dVar14 * dVar14;
      dVar17 = (local_a0 + dVar14) * (local_a0 - dVar14);
      dVar18 = dVar9 + dVar17;
      dVar12 = DAT_1561f4408 * dVar9 - (DAT_1561f4408 * dVar9 - dVar9);
      dVar17 = dVar17 + (dVar9 - dVar12);
      dVar5 = dVar14 * dVar12;
      dVar10 = local_a0 * dVar17 + (local_a0 - dVar14) * dVar12;
      dVar9 = DAT_1561f4408 * dVar5 - (DAT_1561f4408 * dVar5 - dVar5);
      dVar1 = dVar12 * dVar9;
      dVar13 = dVar12 * ((dVar5 - dVar9) + dVar10) + dVar17 * (dVar5 + dVar10);
      dVar12 = dVar1 + dVar13;
      dVar2 = DAT_1561f4408 * dVar1 - (DAT_1561f4408 * dVar1 - dVar1);
      dVar6 = local_a0 + dVar9 * DAT_1561f4450;
      dVar17 = dVar2 * DAT_1561f4460;
      dVar14 = dVar6 + dVar17;
      dVar14 = dVar14 + (dVar6 - dVar14) + dVar17 +
                        (local_a0 - dVar6) + dVar9 * DAT_1561f4450 +
                        DAT_1561f4458 * (dVar5 + dVar10) + DAT_1561f4468 * dVar12 +
                        (((((((((((DAT_1561f44c8 * dVar18 + _DAT_1561f44c0) * dVar18 +
                                 _DAT_1561f44b8) * dVar18 + _DAT_1561f44b0) * dVar18 +
                               _DAT_1561f44a8) * dVar18 + _DAT_1561f44a0) * dVar18 + _DAT_1561f4498)
                             * dVar18 + _DAT_1561f4490) * dVar18 + _DAT_1561f4488) * dVar18 +
                          _DAT_1561f4480) * dVar18 + _DAT_1561f4478) * dVar18 + _DAT_1561f4470) *
                        dVar18 * dVar12 + dVar10 * DAT_1561f4450 + (dVar5 - dVar9) * DAT_1561f4450 +
                        dVar13 * DAT_1561f4460 + DAT_1561f4460 * (dVar1 - dVar2);
      local_a8._7_1_ = (byte)((ulonglong)dVar14 >> 0x38);
      local_a8._0_7_ = SUB87(dVar14,0);
      local_a8 = (double)CONCAT17(local_a8._7_1_ & 0x7f | *(byte *)((longlong)in_RCX + 7) & 0x80,
                                  (undefined7)local_a8);
      *in_RDX = local_a8;
    }
  }
  return;
}

