// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// FindIntersection @ 143fac380

bool __cdecl
UE::Geometry::TIntrRay3Triangle3<float,UE::Math::TRay<float>_>::FindIntersection
          (TRay<float> *param_1,TTriangle3<float> *param_2,float *param_3,TVector<double> *param_4,
          EIntersectionType *param_5)

{
  double dVar1;
  float fVar2;
  float fVar3;
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
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  fVar19 = param_2->V[0].field0_0x0._s_0.Y;
  fVar20 = param_2->V[0].field0_0x0._s_0.Z;
  fVar18 = param_2->V[0].field0_0x0._s_0.X;
  fVar5 = param_2->V[2].field0_0x0._s_0.Y - fVar19;
  fVar6 = param_2->V[1].field0_0x0._s_0.Z - fVar20;
  fVar4 = param_2->V[1].field0_0x0._s_0.X - fVar18;
  fVar8 = param_2->V[1].field0_0x0._s_0.Y - fVar19;
  fVar10 = param_2->V[2].field0_0x0._s_0.Z - fVar20;
  fVar12 = param_2->V[2].field0_0x0._s_0.X - fVar18;
  fVar20 = (param_1->Origin).field0_0x0._s_0.Z - fVar20;
  fVar19 = (param_1->Origin).field0_0x0._s_0.Y - fVar19;
  fVar15 = (param_1->Direction).field0_0x0._s_0.X;
  fVar18 = (param_1->Origin).field0_0x0._s_0.X - fVar18;
  fVar16 = (param_1->Direction).field0_0x0._s_0.Y;
  fVar17 = (param_1->Direction).field0_0x0._s_0.Z;
  fVar2 = fVar10 * fVar8 - fVar5 * fVar6;
  fVar3 = fVar12 * fVar6 - fVar10 * fVar4;
  fVar7 = fVar5 * fVar4 - fVar12 * fVar8;
  fVar9 = fVar16 * fVar3 + fVar15 * fVar2 + fVar17 * fVar7;
  fVar11 = fVar18;
  fVar13 = fVar19;
  fVar14 = fVar20;
  if (fVar9 <= __real_358637bd) {
    if (__real_b58637bd <= fVar9) goto LAB_143fac683;
    fVar9 = (float)((uint)fVar9 ^ __xmm_80000000800000008000000080000000);
    fVar15 = (float)((uint)fVar15 ^ __xmm_80000000800000008000000080000000);
    fVar16 = (float)((uint)fVar16 ^ __xmm_80000000800000008000000080000000);
    fVar17 = (float)((uint)fVar17 ^ __xmm_80000000800000008000000080000000);
    fVar11 = (float)((uint)fVar18 ^ __xmm_80000000800000008000000080000000);
    fVar13 = (float)((uint)fVar19 ^ __xmm_80000000800000008000000080000000);
    fVar14 = (float)((uint)fVar20 ^ __xmm_80000000800000008000000080000000);
  }
  fVar5 = (fVar10 * fVar13 - fVar5 * fVar14) * (param_1->Direction).field0_0x0._s_0.X +
          (fVar12 * fVar14 - fVar10 * fVar11) * (param_1->Direction).field0_0x0._s_0.Y +
          (fVar5 * fVar11 - fVar12 * fVar13) * (param_1->Direction).field0_0x0._s_0.Z;
  if ((((0.0 <= fVar5) &&
       (fVar19 = (fVar18 * fVar6 - fVar4 * fVar20) * fVar16 +
                 (fVar8 * fVar20 - fVar6 * fVar19) * fVar15 +
                 (fVar4 * fVar19 - fVar8 * fVar18) * fVar17, 0.0 <= fVar19)) &&
      (fVar5 + fVar19 <= fVar9)) &&
     (fVar20 = (float)((uint)(fVar3 * fVar13 + fVar2 * fVar11 + fVar7 * fVar14) ^
                      __xmm_80000000800000008000000080000000), 0.0 <= fVar20)) {
    fVar9 = __real_3f800000 / fVar9;
    *param_3 = fVar9 * fVar20;
    dVar1 = __real_3ff0000000000000 - (double)(fVar9 * fVar5);
    (param_4->field0_0x0)._s_0.Y = (double)(fVar9 * fVar5);
    (param_4->field0_0x0)._s_0.Z = (double)(fVar9 * fVar19);
    (param_4->field0_0x0)._s_0.X = dVar1 - (double)(fVar9 * fVar19);
    *param_5 = Point;
    return true;
  }
LAB_143fac683:
  *param_5 = Empty;
  return false;
}

