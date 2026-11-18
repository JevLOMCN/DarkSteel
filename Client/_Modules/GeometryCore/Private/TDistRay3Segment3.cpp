// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 1

// SquaredDistance @ 14361b1a0

double __cdecl
UE::Geometry::TDistRay3Segment3<double>::SquaredDistance
          (TRay<double> *param_1,TSegment3<double> *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  uint uVar9;
  double dVar10;
  uint uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  
  dVar15 = (param_1->Direction).field0_0x0._s_0.X;
  dVar14 = (param_2->Direction).field0_0x0._s_0.X;
  dVar13 = (param_1->Origin).field0_0x0._s_0.Z - (param_2->Center).field0_0x0._s_0.Z;
  dVar7 = (param_2->Direction).field0_0x0._s_0.Z;
  dVar10 = (param_2->Direction).field0_0x0._s_0.Y;
  uVar5 = (uint)__xmm_80000000000000008000000000000000;
  uVar8 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  dVar2 = (param_1->Origin).field0_0x0._s_0.Y - (param_2->Center).field0_0x0._s_0.Y;
  dVar4 = (param_1->Origin).field0_0x0._s_0.X - (param_2->Center).field0_0x0._s_0.X;
  dVar1 = (param_1->Direction).field0_0x0._s_0.Y;
  dVar6 = dVar1 * dVar10 + dVar15 * dVar14 + (param_1->Direction).field0_0x0._s_0.Z * dVar7;
  dVar1 = dVar1 * dVar2 + dVar15 * dVar4;
  uVar18 = SUB84(dVar6,0) ^ uVar5;
  uVar19 = (uint)((ulonglong)dVar6 >> 0x20) ^ uVar8;
  dVar14 = dVar10 * dVar2 + dVar14 * dVar4 + dVar7 * dVar13;
  dVar7 = (param_1->Direction).field0_0x0._s_0.Z * dVar13 + dVar1;
  dVar10 = __real_3ff0000000000000 -
           (double)CONCAT44(uVar19,uVar18) * (double)CONCAT44(uVar19,uVar18);
  dVar15 = param_2->Extent;
  uVar22 = SUB84(dVar10,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar23 = (uint)((ulonglong)dVar10 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar11 = (uint)((ulonglong)dVar15 >> 0x20);
  uVar9 = SUB84(dVar15,0);
  dVar10 = dVar15;
  if ((double)CONCAT44(uVar23,uVar22) < __real_3e45798ee2308c3a) {
    if (0.0 <= (double)CONCAT44(uVar19,uVar18) && (double)CONCAT44(uVar19,uVar18) != 0.0) {
      dVar10 = (double)CONCAT44(uVar11 ^ uVar8,uVar9 ^ uVar5);
    }
    dVar7 = dVar10 * (double)CONCAT44(uVar19,uVar18) + dVar7;
    dVar14 = (dVar10 - (dVar14 + dVar14)) * dVar10;
    uVar5 = SUB84(dVar7,0) ^ uVar5;
    uVar8 = (uint)((ulonglong)dVar7 >> 0x20) ^ uVar8;
    dVar6 = (double)CONCAT44(uVar8,uVar5);
    if (dVar6 <= 0.0) {
      dVar6 = 0.0;
    }
    else {
      dVar14 = dVar14 - (double)CONCAT44(uVar8,uVar5) * dVar6;
    }
    goto LAB_14361b521;
  }
  dVar3 = dVar15 * (double)CONCAT44(uVar23,uVar22);
  dVar6 = (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) ^ uVar8,SUB84(dVar14,0) ^ uVar5) *
          (double)CONCAT44(uVar19,uVar18) - dVar7;
  uVar20 = SUB84(dVar3,0) ^ uVar5;
  uVar21 = (uint)((ulonglong)dVar3 >> 0x20) ^ uVar8;
  dVar12 = dVar7 * (double)CONCAT44(uVar19,uVar18) + dVar14;
  if (dVar6 < 0.0) {
    if ((double)CONCAT44(uVar21,uVar20) <= dVar12 && dVar12 != (double)CONCAT44(uVar21,uVar20)) {
      if ((dVar3 < dVar12) &&
         (dVar7 = dVar15 * (double)CONCAT44(uVar19,uVar18) + dVar7,
         dVar6 = (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) ^ uVar8,SUB84(dVar7,0) ^ uVar5),
         0.0 < dVar6)) {
        dVar14 = (dVar15 - (dVar14 + dVar14)) * dVar15;
        goto LAB_14361b48b;
      }
      dVar10 = (double)CONCAT44(uVar11 ^ uVar8,uVar9 ^ uVar5);
    }
    else {
      dVar10 = (double)CONCAT44(uVar11 ^ uVar8,uVar9 ^ uVar5);
      dVar6 = dVar15 * (double)CONCAT44(uVar19,uVar18) - dVar7;
      if (0.0 < dVar6) {
        dVar14 = ((double)CONCAT44(uVar11 ^ uVar8,uVar9 ^ uVar5) - (dVar14 + dVar14)) * dVar10 -
                 dVar6 * dVar6;
        goto LAB_14361b521;
      }
    }
    dVar6 = 0.0;
    if ((dVar10 <= dVar14) && (dVar10 = dVar15, dVar14 <= dVar15)) {
      dVar10 = dVar14;
    }
    dVar14 = (dVar10 - (dVar14 + dVar14)) * dVar10;
  }
  else {
    uVar16 = SUB84(dVar14 + dVar14,0) ^ uVar5;
    uVar17 = (uint)((ulonglong)(dVar14 + dVar14) >> 0x20) ^ uVar8;
    if (dVar12 < (double)CONCAT44(uVar21,uVar20)) {
      uVar9 = uVar9 ^ uVar5;
      uVar11 = uVar11 ^ uVar8;
      dVar15 = (double)CONCAT44(uVar11,uVar9);
      dVar7 = (double)CONCAT44(uVar11,uVar9) * (double)CONCAT44(uVar19,uVar18) + dVar7;
      dVar14 = ((double)CONCAT44(uVar11,uVar9) + (double)CONCAT44(uVar17,uVar16)) * dVar15;
      dVar6 = (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) ^ uVar8,SUB84(dVar7,0) ^ uVar5);
      if (0.0 < dVar6) {
LAB_14361b48b:
        dVar14 = dVar14 - dVar6 * dVar6;
        dVar10 = dVar15;
        goto LAB_14361b521;
      }
    }
    else {
      if (dVar12 <= dVar3) {
        dVar10 = __real_3ff0000000000000 / (double)CONCAT44(uVar23,uVar22);
        dVar6 = dVar6 * dVar10;
        dVar10 = dVar10 * dVar12;
        dVar14 = ((dVar13 + dVar13) * (param_1->Direction).field0_0x0._s_0.Z + dVar1 + dVar1 +
                 dVar10 * (double)CONCAT44(uVar19,uVar18) + dVar6) * dVar6 +
                 (dVar6 * (double)CONCAT44(uVar19,uVar18) + dVar10 + (double)CONCAT44(uVar17,uVar16)
                 ) * dVar10;
        goto LAB_14361b521;
      }
      dVar7 = dVar15 * (double)CONCAT44(uVar19,uVar18) + dVar7;
      dVar14 = ((double)CONCAT44(uVar17,uVar16) + dVar15) * dVar15;
      uVar5 = SUB84(dVar7,0) ^ uVar5;
      uVar8 = (uint)((ulonglong)dVar7 >> 0x20) ^ uVar8;
      dVar6 = (double)CONCAT44(uVar8,uVar5);
      if (0.0 < dVar6) {
        dVar14 = dVar14 - (double)CONCAT44(uVar8,uVar5) * dVar6;
        goto LAB_14361b521;
      }
    }
    dVar6 = 0.0;
    dVar10 = dVar15;
  }
LAB_14361b521:
  dVar15 = dVar14 + dVar13 * dVar13 + dVar4 * dVar4 + dVar2 * dVar2;
  *param_3 = dVar6;
  *param_4 = dVar10;
  if (dVar15 <= 0.0) {
    dVar15 = 0.0;
  }
  return dVar15;
}

