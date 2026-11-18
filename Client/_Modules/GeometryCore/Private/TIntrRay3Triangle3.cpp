// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 1

// FindIntersection @ 14339f650

bool __cdecl
UE::Geometry::TIntrRay3Triangle3<double,UE::Math::TRay<double>_>::FindIntersection
          (TRay<double> *param_1,TTriangle3<double> *param_2,double *param_3,
          TVector<double> *param_4,EIntersectionType *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  double dVar7;
  uint uVar8;
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
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  
  dVar16 = param_2->V[0].field0_0x0._s_0.X;
  dVar18 = param_2->V[0].field0_0x0._s_0.Y;
  dVar14 = param_2->V[0].field0_0x0._s_0.Z;
  dVar15 = param_2->V[2].field0_0x0._s_0.Y - dVar18;
  dVar13 = param_2->V[1].field0_0x0._s_0.X - dVar16;
  dVar3 = param_2->V[1].field0_0x0._s_0.Z - dVar14;
  dVar4 = param_2->V[1].field0_0x0._s_0.Y - dVar18;
  dVar5 = param_2->V[2].field0_0x0._s_0.X - dVar16;
  dVar16 = (param_1->Origin).field0_0x0._s_0.X - dVar16;
  dVar18 = (param_1->Origin).field0_0x0._s_0.Y - dVar18;
  dVar9 = param_2->V[2].field0_0x0._s_0.Z - dVar14;
  dVar12 = *(double *)&(param_1->Direction).field0_0x0;
  uVar19 = SUB84(dVar12,0);
  uVar20 = (uint)((ulonglong)dVar12 >> 0x20);
  dVar14 = (param_1->Origin).field0_0x0._s_0.Z - dVar14;
  dVar1 = *(double *)((longlong)&(param_1->Direction).field0_0x0 + 8);
  uVar21 = SUB84(dVar1,0);
  uVar22 = (uint)((ulonglong)dVar1 >> 0x20);
  dVar7 = dVar9 * dVar4 - dVar15 * dVar3;
  dVar2 = *(double *)((longlong)&(param_1->Direction).field0_0x0 + 0x10);
  uVar23 = SUB84(dVar2,0);
  uVar24 = (uint)((ulonglong)dVar2 >> 0x20);
  dVar17 = dVar5 * dVar3 - dVar9 * dVar13;
  dVar10 = dVar15 * dVar13 - dVar5 * dVar4;
  dVar12 = dVar1 * dVar17 + dVar12 * dVar7 + dVar2 * dVar10;
  uVar6 = (uint)__xmm_80000000000000008000000000000000;
  uVar8 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  dVar11 = dVar16;
  dVar1 = dVar18;
  dVar2 = dVar14;
  if (dVar12 <= __real_3e45798ee2308c3a) {
    if (__real_be45798ee2308c3a <= dVar12) goto LAB_14339f94d;
    uVar23 = uVar23 ^ uVar6;
    uVar24 = uVar24 ^ uVar8;
    dVar12 = (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) ^ uVar8,SUB84(dVar12,0) ^ uVar6);
    uVar19 = uVar19 ^ uVar6;
    uVar20 = uVar20 ^ uVar8;
    uVar21 = uVar21 ^ uVar6;
    uVar22 = uVar22 ^ uVar8;
    dVar11 = (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) ^ uVar8,SUB84(dVar16,0) ^ uVar6);
    dVar1 = (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) ^ uVar8,SUB84(dVar18,0) ^ uVar6);
    dVar2 = (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) ^ uVar8,SUB84(dVar14,0) ^ uVar6);
  }
  dVar5 = (dVar9 * dVar1 - dVar15 * dVar2) * (param_1->Direction).field0_0x0._s_0.X +
          (dVar5 * dVar2 - dVar9 * dVar11) * (param_1->Direction).field0_0x0._s_0.Y +
          (dVar15 * dVar11 - dVar5 * dVar1) * (param_1->Direction).field0_0x0._s_0.Z;
  if ((((0.0 <= dVar5) &&
       (dVar16 = (dVar16 * dVar3 - dVar13 * dVar14) * (double)CONCAT44(uVar22,uVar21) +
                 (dVar4 * dVar14 - dVar3 * dVar18) * (double)CONCAT44(uVar20,uVar19) +
                 (dVar13 * dVar18 - dVar4 * dVar16) * (double)CONCAT44(uVar24,uVar23), 0.0 <= dVar16
       )) && (dVar5 + dVar16 <= dVar12)) &&
     (dVar18 = dVar17 * dVar1 + dVar7 * dVar11 + dVar10 * dVar2,
     dVar18 = (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) ^ uVar8,SUB84(dVar18,0) ^ uVar6),
     0.0 <= dVar18)) {
    dVar12 = __real_3ff0000000000000 / dVar12;
    dVar14 = __real_3ff0000000000000 - dVar12 * dVar5;
    *param_3 = dVar12 * dVar18;
    (param_4->field0_0x0)._s_0.Y = dVar12 * dVar5;
    (param_4->field0_0x0)._s_0.Z = dVar12 * dVar16;
    (param_4->field0_0x0)._s_0.X = dVar14 - dVar12 * dVar16;
    *param_5 = Point;
    return true;
  }
LAB_14339f94d:
  *param_5 = Empty;
  return false;
}

