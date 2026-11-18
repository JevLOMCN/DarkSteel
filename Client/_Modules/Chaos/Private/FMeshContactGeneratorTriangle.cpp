// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// GetNormal @ 1439d3550

TVector<double,3> * __thiscall
Chaos::Private::FMeshContactGeneratorTriangle::GetNormal(FMeshContactGeneratorTriangle *this)

{
  TVector<double,3> *pTVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  pTVar1 = &this->Normal;
  if (__real_7fefffffffffffff == *(double *)pTVar1) {
    dVar10 = *(double *)&(this->Triangle).ABC[1].field_0x8 -
             *(double *)&(this->Triangle).ABC[0].field_0x8;
    dVar11 = *(double *)&(this->Triangle).ABC[2].field_0x10 -
             *(double *)&(this->Triangle).ABC[0].field_0x10;
    dVar12 = *(double *)((this->Triangle).ABC + 2) - *(double *)(this->Triangle).ABC;
    dVar3 = *(double *)&(this->Triangle).ABC[2].field_0x8 -
            *(double *)&(this->Triangle).ABC[0].field_0x8;
    dVar9 = *(double *)((this->Triangle).ABC + 1) - *(double *)(this->Triangle).ABC;
    dVar4 = *(double *)&(this->Triangle).ABC[1].field_0x10 -
            *(double *)&(this->Triangle).ABC[0].field_0x10;
    dVar5 = dVar10 * dVar11 - dVar4 * dVar3;
    dVar4 = dVar4 * dVar12 - dVar9 * dVar11;
    dVar3 = dVar9 * dVar3 - dVar10 * dVar12;
    dVar9 = dVar4 * dVar4 + dVar5 * dVar5 + dVar3 * dVar3;
    uVar8 = dVar3;
    uVar6 = dVar4;
    uVar7 = dVar5;
    if ((dVar9 != __real_3ff0000000000000) &&
       (uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
       uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_,
       uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
       __real_3e45798ee0000000 <= dVar9)) {
      dVar9 = __real_3ff0000000000000 / SQRT(dVar9);
      uVar8 = dVar3 * dVar9;
      uVar6 = dVar4 * dVar9;
      uVar7 = dVar5 * dVar9;
    }
    auVar2._8_4_ = (int)uVar6;
    auVar2._0_8_ = uVar7;
    auVar2._12_4_ = (int)((ulonglong)uVar6 >> 0x20);
    *(undefined1 (*) [16])pTVar1 = auVar2;
    *(undefined8 *)&(this->Normal).field_0x10 = uVar8;
  }
  return pTVar1;
}

// FMeshContactGeneratorTriangle @ 143afa330

FMeshContactGeneratorTriangle * __thiscall
Chaos::Private::FMeshContactGeneratorTriangle::FMeshContactGeneratorTriangle
          (FMeshContactGeneratorTriangle *this,TTriangle<double> *param_1,int param_2,int param_3,
          int param_4,int param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&param_1->ABC[0].field_0x8;
  *(undefined8 *)(this->Triangle).ABC = *(undefined8 *)param_1->ABC;
  *(undefined8 *)&(this->Triangle).ABC[0].field_0x8 = uVar1;
  uVar1 = *(undefined8 *)(param_1->ABC + 1);
  *(undefined8 *)&(this->Triangle).ABC[0].field_0x10 = *(undefined8 *)&param_1->ABC[0].field_0x10;
  *(undefined8 *)((this->Triangle).ABC + 1) = uVar1;
  uVar1 = *(undefined8 *)&param_1->ABC[1].field_0x10;
  *(undefined8 *)&(this->Triangle).ABC[1].field_0x8 = *(undefined8 *)&param_1->ABC[1].field_0x8;
  *(undefined8 *)&(this->Triangle).ABC[1].field_0x10 = uVar1;
  uVar1 = *(undefined8 *)&param_1->ABC[2].field_0x8;
  *(undefined8 *)((this->Triangle).ABC + 2) = *(undefined8 *)(param_1->ABC + 2);
  *(undefined8 *)&(this->Triangle).ABC[2].field_0x8 = uVar1;
  *(undefined8 *)&(this->Triangle).ABC[2].field_0x10 = *(undefined8 *)&param_1->ABC[2].field_0x10;
  *(undefined8 *)&this->Normal = 0x7fefffffffffffff;
  *(undefined8 *)&(this->Normal).field_0x8 = 0x7fefffffffffffff;
  *(undefined8 *)&(this->Normal).field_0x10 = 0x7fefffffffffffff;
  this->VertexIndices[1] = param_4;
  this->VertexIndices[2] = param_5;
  this->TriangleIndex = param_2;
  this->VertexIndices[0] = param_3;
  this->NumFaceEdgeCollisions = '\0';
  this->VisitIndex = -1;
  this->bEnabled = true;
  return this;
}

