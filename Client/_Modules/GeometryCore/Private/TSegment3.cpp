// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 2

// DistanceSquared @ 14358cfe0

float __thiscall
UE::Geometry::TSegment3<float>::DistanceSquared(TSegment3<float> *this,TVector<float> *param_1)

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
  
  fVar8 = (this->Center).field0_0x0._s_0.Y;
  fVar1 = (this->Direction).field0_0x0._s_0.X;
  fVar2 = (this->Direction).field0_0x0._s_0.Y;
  fVar3 = (this->Direction).field0_0x0._s_0.Z;
  fVar7 = (param_1->field0_0x0)._s_0.Y;
  fVar4 = (this->Center).field0_0x0._s_0.X;
  fVar5 = (this->Center).field0_0x0._s_0.Z;
  fVar9 = (param_1->field0_0x0)._s_0.X;
  fVar10 = (param_1->field0_0x0)._s_0.Z;
  fVar11 = (fVar7 - fVar8) * fVar2 + (fVar9 - fVar4) * fVar1 + (fVar10 - fVar5) * fVar3;
  fVar6 = this->Extent;
  if (fVar11 < fVar6) {
    if ((float)((uint)fVar6 ^ __xmm_80000000800000008000000080000000) < fVar11) {
      fVar9 = fVar9 - (fVar1 * fVar11 + fVar4);
      fVar7 = fVar7 - (fVar2 * fVar11 + fVar8);
      fVar10 = fVar10 - (fVar3 * fVar11 + fVar5);
      fVar8 = fVar7 * fVar7 + fVar9 * fVar9 + fVar10 * fVar10;
    }
    else {
      fVar9 = (fVar4 - fVar1 * fVar6) - fVar9;
      fVar7 = (fVar8 - fVar2 * fVar6) - fVar7;
      fVar10 = (fVar5 - fVar3 * fVar6) - fVar10;
      fVar8 = fVar7 * fVar7 + fVar9 * fVar9 + fVar10 * fVar10;
    }
  }
  else {
    fVar7 = (fVar2 * fVar6 + fVar8) - fVar7;
    fVar9 = (fVar1 * fVar6 + fVar4) - fVar9;
    fVar10 = (fVar3 * fVar6 + fVar5) - fVar10;
    fVar8 = fVar7 * fVar7 + fVar9 * fVar9 + fVar10 * fVar10;
  }
  return fVar8;
}

// DistanceSquared @ 14358d180

double __thiscall
UE::Geometry::TSegment3<double>::DistanceSquared(TSegment3<double> *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  dVar9 = (this->Center).field0_0x0._s_0.Y;
  dVar1 = (this->Direction).field0_0x0._s_0.X;
  dVar2 = (this->Direction).field0_0x0._s_0.Y;
  dVar3 = (this->Direction).field0_0x0._s_0.Z;
  dVar8 = (param_1->field0_0x0)._s_0.Y;
  dVar4 = (this->Center).field0_0x0._s_0.X;
  dVar5 = (this->Center).field0_0x0._s_0.Z;
  dVar10 = (param_1->field0_0x0)._s_0.X;
  dVar11 = (param_1->field0_0x0)._s_0.Z;
  dVar7 = (dVar8 - dVar9) * dVar2 + (dVar10 - dVar4) * dVar1 + (dVar11 - dVar5) * dVar3;
  dVar6 = this->Extent;
  if (dVar7 < dVar6) {
    if ((double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) ^
                         __xmm_80000000000000008000000000000000._4_4_,
                         SUB84(dVar6,0) ^ (uint)__xmm_80000000000000008000000000000000) < dVar7) {
      dVar10 = dVar10 - (dVar1 * dVar7 + dVar4);
      dVar8 = dVar8 - (dVar2 * dVar7 + dVar9);
      dVar11 = dVar11 - (dVar3 * dVar7 + dVar5);
      dVar9 = dVar8 * dVar8 + dVar10 * dVar10 + dVar11 * dVar11;
    }
    else {
      dVar10 = (dVar4 - dVar1 * dVar6) - dVar10;
      dVar8 = (dVar9 - dVar2 * dVar6) - dVar8;
      dVar11 = (dVar5 - dVar3 * dVar6) - dVar11;
      dVar9 = dVar8 * dVar8 + dVar10 * dVar10 + dVar11 * dVar11;
    }
  }
  else {
    dVar8 = (dVar2 * dVar6 + dVar9) - dVar8;
    dVar10 = (dVar1 * dVar6 + dVar4) - dVar10;
    dVar11 = (dVar3 * dVar6 + dVar5) - dVar11;
    dVar9 = dVar8 * dVar8 + dVar10 * dVar10 + dVar11 * dVar11;
  }
  return dVar9;
}

