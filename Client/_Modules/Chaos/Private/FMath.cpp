// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 3

// PointBoxIntersection<double> @ 143723e40

bool __cdecl FMath::PointBoxIntersection<double>(TVector<double> *param_1,TBox<double> *param_2)

{
  double *pdVar1;
  double dVar2;
  
  dVar2 = (param_1->field0_0x0)._s_0.X;
  if (((((param_2->Min).field0_0x0._s_0.X <= dVar2) &&
       (dVar2 < (param_2->Max).field0_0x0._s_0.X || dVar2 == (param_2->Max).field0_0x0._s_0.X)) &&
      (dVar2 = (param_1->field0_0x0)._s_0.Y, (param_2->Min).field0_0x0._s_0.Y <= dVar2)) &&
     (((pdVar1 = &(param_2->Max).field0_0x0._s_0.Y, dVar2 < *pdVar1 || dVar2 == *pdVar1 &&
       (dVar2 = (param_1->field0_0x0)._s_0.Z, (param_2->Min).field0_0x0._s_0.Z <= dVar2)) &&
      (pdVar1 = &(param_2->Max).field0_0x0._s_0.Z, dVar2 < *pdVar1 || dVar2 == *pdVar1)))) {
    return true;
  }
  return false;
}

// SphereAABBIntersection<double> @ 14372caa0

bool __cdecl
FMath::SphereAABBIntersection<double>(TVector<double> *param_1,double param_2,TBox<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (param_3->Min).field0_0x0._s_0.X;
  dVar3 = (param_1->field0_0x0)._s_0.X;
  dVar2 = 0.0;
  if ((dVar3 < dVar1) || (dVar1 = (param_3->Max).field0_0x0._s_0.X, dVar1 < dVar3)) {
    dVar2 = (dVar3 - dVar1) * (dVar3 - dVar1);
  }
  dVar3 = (param_3->Min).field0_0x0._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  if ((dVar1 < dVar3) || (dVar3 = (param_3->Max).field0_0x0._s_0.Y, dVar3 < dVar1)) {
    dVar2 = dVar2 + (dVar1 - dVar3) * (dVar1 - dVar3);
  }
  dVar3 = (param_3->Min).field0_0x0._s_0.Z;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  if ((dVar1 < dVar3) || (dVar3 = (param_3->Max).field0_0x0._s_0.Z, dVar3 < dVar1)) {
    dVar2 = dVar2 + (dVar1 - dVar3) * (dVar1 - dVar3);
  }
  return dVar2 <= param_2;
}

// IntersectPlanes3<float> @ 143a29cf0

bool __cdecl
FMath::IntersectPlanes3<float>
          (TVector<float> *param_1,TPlane<float> *param_2,TPlane<float> *param_3,
          TPlane<float> *param_4)

{
  float fVar1;
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
  bool bVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  fVar1 = *(float *)((longlong)&param_4->_padding_ + 4);
  fVar2 = (float)param_4->_padding_;
  fVar3 = *(float *)((longlong)&param_2->_padding_ + 4);
  fVar4 = (float)param_3->_padding_;
  fVar5 = *(float *)&param_3->_padding_;
  fVar6 = (float)param_2->_padding_;
  fVar7 = *(float *)&param_2->_padding_;
  fVar8 = *(float *)((longlong)&param_3->_padding_ + 4);
  fVar15 = fVar3 * fVar4 - fVar6 * fVar8;
  fVar16 = fVar5 * fVar6 - fVar7 * fVar4;
  fVar17 = fVar7 * fVar8 - fVar5 * fVar3;
  fVar9 = *(float *)&param_4->_padding_;
  fVar14 = fVar1 * fVar16 + fVar9 * fVar15 + fVar2 * fVar17;
  bVar13 = __real_358637be <= fVar14 * fVar14;
  if (bVar13) {
    fVar10 = param_2->W;
    fVar11 = param_3->W;
    fVar12 = param_4->W;
    fVar14 = __real_3f800000 / fVar14;
    (param_1->field0_0x0)._s_0.X =
         ((fVar6 * fVar1 - fVar3 * fVar2) * fVar11 + (fVar8 * fVar2 - fVar4 * fVar1) * fVar10 +
         fVar12 * fVar15) * fVar14;
    (param_1->field0_0x0)._s_0.Y =
         ((fVar7 * fVar2 - fVar6 * fVar9) * fVar11 + (fVar4 * fVar9 - fVar5 * fVar2) * fVar10 +
         fVar12 * fVar16) * fVar14;
    (param_1->field0_0x0)._s_0.Z =
         ((fVar3 * fVar9 - fVar7 * fVar1) * fVar11 + (fVar5 * fVar1 - fVar8 * fVar9) * fVar10 +
         fVar12 * fVar17) * fVar14;
  }
  else {
    *(undefined8 *)&param_1->field0_0x0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    (param_1->field0_0x0)._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  }
  return bVar13;
}

