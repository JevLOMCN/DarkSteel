// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 4

// SphereAABBIntersection<float> @ 145475880

bool __cdecl FMath::SphereAABBIntersection<float>(TSphere<float> *param_1,TBox<float> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = (param_2->Min).field0_0x0._s_0.X;
  fVar2 = 0.0;
  fVar1 = (param_1->Center).field0_0x0._s_0.X;
  if ((fVar1 < fVar3) || (fVar3 = (param_2->Max).field0_0x0._s_0.X, fVar3 < fVar1)) {
    fVar2 = (fVar1 - fVar3) * (fVar1 - fVar3);
  }
  fVar3 = (param_2->Min).field0_0x0._s_0.Y;
  fVar1 = (param_1->Center).field0_0x0._s_0.Y;
  if ((fVar1 < fVar3) || (fVar3 = (param_2->Max).field0_0x0._s_0.Y, fVar3 < fVar1)) {
    fVar2 = fVar2 + (fVar1 - fVar3) * (fVar1 - fVar3);
  }
  fVar3 = (param_2->Min).field0_0x0._s_0.Z;
  fVar1 = (param_1->Center).field0_0x0._s_0.Z;
  if ((fVar1 < fVar3) || (fVar3 = (param_2->Max).field0_0x0._s_0.Z, fVar3 < fVar1)) {
    fVar2 = fVar2 + (fVar1 - fVar3) * (fVar1 - fVar3);
  }
  return fVar2 <= param_1->W * param_1->W;
}

// SphereAABBIntersection<float> @ 145475910

bool __cdecl
FMath::SphereAABBIntersection<float>(TVector<float> *param_1,float param_2,TBox<float> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (param_3->Min).field0_0x0._s_0.X;
  fVar3 = (param_1->field0_0x0)._s_0.X;
  fVar2 = 0.0;
  if ((fVar3 < fVar1) || (fVar1 = (param_3->Max).field0_0x0._s_0.X, fVar1 < fVar3)) {
    fVar2 = (fVar3 - fVar1) * (fVar3 - fVar1);
  }
  fVar3 = (param_3->Min).field0_0x0._s_0.Y;
  fVar1 = (param_1->field0_0x0)._s_0.Y;
  if ((fVar1 < fVar3) || (fVar3 = (param_3->Max).field0_0x0._s_0.Y, fVar3 < fVar1)) {
    fVar2 = fVar2 + (fVar1 - fVar3) * (fVar1 - fVar3);
  }
  fVar3 = (param_3->Min).field0_0x0._s_0.Z;
  fVar1 = (param_1->field0_0x0)._s_0.Z;
  if ((fVar1 < fVar3) || (fVar3 = (param_3->Max).field0_0x0._s_0.Z, fVar3 < fVar1)) {
    fVar2 = fVar2 + (fVar1 - fVar3) * (fVar1 - fVar3);
  }
  return fVar2 <= param_2;
}

// LineBoxIntersection<double> @ 1456042c0

bool __cdecl
FMath::LineBoxIntersection<double>
          (TBox<double> *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4,TVector<double> *param_5)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  dVar2 = (param_2->field0_0x0)._s_0.X;
  bVar6 = false;
  dVar3 = (param_1->Min).field0_0x0._s_0.X;
  if (dVar3 <= dVar2) {
    dVar7 = (param_1->Max).field0_0x0._s_0.X;
    if (dVar2 <= dVar7) {
      dVar7 = 0.0;
    }
    else {
      bVar6 = true;
      if (dVar7 < (param_3->field0_0x0)._s_0.X) {
        return false;
      }
      dVar7 = (dVar7 - dVar2) * (param_5->field0_0x0)._s_0.X;
    }
  }
  else {
    bVar6 = true;
    if ((param_3->field0_0x0)._s_0.X <= dVar3 && dVar3 != (param_3->field0_0x0)._s_0.X) {
      return false;
    }
    dVar7 = (dVar3 - dVar2) * (param_5->field0_0x0)._s_0.X;
  }
  dVar4 = (param_1->Min).field0_0x0._s_0.Y;
  dVar11 = (param_2->field0_0x0)._s_0.Y;
  if (dVar4 <= dVar11) {
    dVar8 = (param_1->Max).field0_0x0._s_0.Y;
    if (dVar11 <= dVar8) {
      dVar8 = 0.0;
    }
    else {
      bVar6 = true;
      if (dVar8 < (param_3->field0_0x0)._s_0.Y) {
        return false;
      }
      dVar8 = (dVar8 - dVar11) * (param_5->field0_0x0)._s_0.Y;
    }
  }
  else {
    pdVar1 = &(param_3->field0_0x0)._s_0.Y;
    bVar6 = true;
    if (*pdVar1 <= dVar4 && dVar4 != *pdVar1) {
      return false;
    }
    dVar8 = (dVar4 - dVar11) * (param_5->field0_0x0)._s_0.Y;
  }
  dVar5 = (param_1->Min).field0_0x0._s_0.Z;
  dVar9 = (param_2->field0_0x0)._s_0.Z;
  if (dVar5 <= dVar9) {
    dVar10 = (param_1->Max).field0_0x0._s_0.Z;
    if (dVar9 <= dVar10) {
      dVar10 = 0.0;
      if (!bVar6) {
        return true;
      }
    }
    else {
      if (dVar10 < (param_3->field0_0x0)._s_0.Z) {
        return false;
      }
      dVar10 = (dVar10 - dVar9) * (param_5->field0_0x0)._s_0.Z;
    }
  }
  else {
    pdVar1 = &(param_3->field0_0x0)._s_0.Z;
    if (*pdVar1 <= dVar5 && dVar5 != *pdVar1) {
      return false;
    }
    dVar10 = (dVar5 - dVar9) * (param_5->field0_0x0)._s_0.Z;
  }
  if (dVar8 <= dVar7) {
    dVar8 = dVar7;
  }
  if (dVar8 <= dVar10) {
    dVar8 = dVar10;
  }
  if ((0.0 <= dVar8) && (dVar8 <= __real_3ff0000000000000)) {
    dVar2 = dVar8 * (param_4->field0_0x0)._s_0.X + dVar2;
    dVar11 = dVar8 * (param_4->field0_0x0)._s_0.Y + dVar11;
    dVar9 = dVar8 * (param_4->field0_0x0)._s_0.Z + dVar9;
    if (((dVar3 - __real_3fb99999a0000000 < dVar2) &&
        (((dVar2 < (param_1->Max).field0_0x0._s_0.X + __real_3fb99999a0000000 &&
          (dVar4 - __real_3fb99999a0000000 < dVar11)) &&
         (dVar11 < (param_1->Max).field0_0x0._s_0.Y + __real_3fb99999a0000000)))) &&
       ((dVar5 - __real_3fb99999a0000000 < dVar9 &&
        (dVar9 < (param_1->Max).field0_0x0._s_0.Z + __real_3fb99999a0000000)))) {
      return true;
    }
  }
  return false;
}

// LineBoxIntersection<double> @ 1456044b0

bool __cdecl
FMath::LineBoxIntersection<double>
          (TBox<double> *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4)

{
  double dVar1;
  bool bVar2;
  TVector<double>_u_0 local_28;
  
  dVar1 = (param_4->field0_0x0)._s_0.X;
  if (dVar1 == 0.0) {
    local_28._s_0.X = __real_47eff933c0000000;
  }
  else {
    local_28._s_0.X = __real_3ff0000000000000 / dVar1;
  }
  dVar1 = (param_4->field0_0x0)._s_0.Y;
  if (dVar1 == 0.0) {
    local_28._s_0.Y = __real_47eff933c0000000;
  }
  else {
    local_28._s_0.Y = __real_3ff0000000000000 / dVar1;
  }
  dVar1 = (param_4->field0_0x0)._s_0.Z;
  if (dVar1 != 0.0) {
    local_28._s_0.Z = __real_3ff0000000000000 / dVar1;
    bVar2 = LineBoxIntersection<double>
                      (param_1,param_2,param_3,param_4,(TVector<double> *)&local_28._s_0);
    return bVar2;
  }
  local_28._s_0.Z = __real_47eff933c0000000;
  bVar2 = LineBoxIntersection<double>
                    (param_1,param_2,param_3,param_4,(TVector<double> *)&local_28._s_0);
  return bVar2;
}

