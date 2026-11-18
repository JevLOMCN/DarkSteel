// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 3

// Value<0> @ 14c945440

double __thiscall
UE::Geometry::
TTriLinearGridInterpolant<UE::Geometry::TCachingMeshSDF<UE::Geometry::FDynamicMesh3>,double,1>::
Value<0>(TTriLinearGridInterpolant<UE::Geometry::TCachingMeshSDF<UE::Geometry::FDynamicMesh3>,double,1>
         *this,TVector<double> *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  FVector3i_u_0 local_c8 [13];
  
  dVar8 = __real_3ff0000000000000;
  dVar20 = __real_3ff0000000000000 / this->CellSize;
  dVar7 = ((param_1->field0_0x0)._s_0.Y - (this->GridOrigin).field0_0x0._s_0.Y) * dVar20;
  dVar6 = ((param_1->field0_0x0)._s_0.Z - (this->GridOrigin).field0_0x0._s_0.Z) * dVar20;
  dVar20 = ((param_1->field0_0x0)._s_0.X - (this->GridOrigin).field0_0x0._s_0.X) * dVar20;
  iVar10 = (int)dVar7;
  iVar9 = (int)dVar6;
  iVar1 = iVar10 + 1;
  iVar11 = (int)dVar20;
  iVar2 = iVar9 + 1;
  if ((((iVar11 < 0) || (iVar3 = iVar11 + 1, (this->Dimensions).field0_0x0._s_0.X <= iVar3)) ||
      (iVar10 < 0)) ||
     ((((this->Dimensions).field0_0x0._s_0.Y <= iVar1 || (iVar9 < 0)) ||
      ((this->Dimensions).field0_0x0._s_0.Z <= iVar2)))) {
    dVar20 = this->Outside;
  }
  else {
    dVar20 = dVar20 - (double)iVar11;
    dVar6 = dVar6 - (double)iVar9;
    dVar5 = __real_3ff0000000000000 - dVar20;
    dVar7 = dVar7 - (double)iVar10;
    local_c8[0]._0_4_ = iVar11;
    local_c8[0]._4_4_ = iVar10;
    local_c8[0]._8_4_ = iVar9;
    fVar12 = TCachingMeshSDF<UE::Geometry::FDynamicMesh3>::GetValue
                       (this->Grid,(FVector3i *)&local_c8[0]._s_0);
    dVar4 = dVar8 - dVar7;
    dVar8 = dVar8 - dVar6;
    local_c8[0]._0_4_ = iVar3;
    local_c8[0]._4_4_ = iVar10;
    local_c8[0]._8_4_ = iVar9;
    fVar13 = TCachingMeshSDF<UE::Geometry::FDynamicMesh3>::GetValue
                       (this->Grid,(FVector3i *)&local_c8[0]._s_0);
    local_c8[0]._0_4_ = iVar11;
    local_c8[0]._4_4_ = iVar10;
    local_c8[0]._8_4_ = iVar2;
    fVar14 = TCachingMeshSDF<UE::Geometry::FDynamicMesh3>::GetValue
                       (this->Grid,(FVector3i *)&local_c8[0]._s_0);
    local_c8[0]._0_4_ = iVar3;
    local_c8[0]._4_4_ = iVar10;
    local_c8[0]._8_4_ = iVar2;
    fVar15 = TCachingMeshSDF<UE::Geometry::FDynamicMesh3>::GetValue
                       (this->Grid,(FVector3i *)&local_c8[0]._s_0);
    local_c8[0]._0_4_ = iVar11;
    local_c8[0]._4_4_ = iVar1;
    local_c8[0]._8_4_ = iVar9;
    fVar16 = TCachingMeshSDF<UE::Geometry::FDynamicMesh3>::GetValue
                       (this->Grid,(FVector3i *)&local_c8[0]._s_0);
    local_c8[0]._0_4_ = iVar3;
    local_c8[0]._4_4_ = iVar1;
    local_c8[0]._8_4_ = iVar9;
    fVar17 = TCachingMeshSDF<UE::Geometry::FDynamicMesh3>::GetValue
                       (this->Grid,(FVector3i *)&local_c8[0]._s_0);
    local_c8[0]._0_4_ = iVar11;
    local_c8[0]._4_4_ = iVar1;
    local_c8[0]._8_4_ = iVar2;
    fVar18 = TCachingMeshSDF<UE::Geometry::FDynamicMesh3>::GetValue
                       (this->Grid,(FVector3i *)&local_c8[0]._s_0);
    local_c8[0]._0_4_ = iVar3;
    local_c8[0]._4_4_ = iVar1;
    local_c8[0]._8_4_ = iVar2;
    fVar19 = TCachingMeshSDF<UE::Geometry::FDynamicMesh3>::GetValue
                       (this->Grid,(FVector3i *)&local_c8[0]._s_0);
    dVar20 = ((double)fVar19 * dVar20 + dVar5 * (double)fVar18) * dVar6 * dVar7 +
             ((double)fVar17 * dVar20 + dVar5 * (double)fVar16) * dVar8 * dVar7 +
             ((double)fVar13 * dVar20 + dVar5 * (double)fVar12) * dVar8 * dVar4 +
             ((double)fVar15 * dVar20 + dVar5 * (double)fVar14) * dVar4 * dVar6;
  }
  return dVar20;
}

// Value<0> @ 14c945740

double __thiscall
UE::Geometry::
TTriLinearGridInterpolant<UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>,double,1>
::Value<0>(TTriLinearGridInterpolant<UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>,double,1>
           *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  TBlockedGrid3<float,8> *this_00;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  FVector3i_u_0 local_e8;
  FVector3i_u_0 local_dc;
  FVector3i_u_0 local_d0;
  FVector3i_u_0 local_c4;
  FVector3i_u_0 local_b8;
  FVector3i_u_0 local_ac;
  FVector3i_u_0 local_a0;
  FVector3i_u_0 local_94 [11];
  
  dVar14 = __real_3ff0000000000000 / this->CellSize;
  dVar4 = ((param_1->field0_0x0)._s_0.Y - (this->GridOrigin).field0_0x0._s_0.Y) * dVar14;
  dVar3 = ((param_1->field0_0x0)._s_0.Z - (this->GridOrigin).field0_0x0._s_0.Z) * dVar14;
  dVar14 = ((param_1->field0_0x0)._s_0.X - (this->GridOrigin).field0_0x0._s_0.X) * dVar14;
  local_e8._s_0.Y = (int)dVar4;
  local_e8._s_0.Z = (int)dVar3;
  local_b8._s_0.Y = local_e8._s_0.Y + 1;
  local_e8._s_0.X = (int)dVar14;
  local_d0._s_0.Z = local_e8._s_0.Z + 1;
  if ((((local_e8._s_0.X < 0) ||
       (local_dc._s_0.X = local_e8._s_0.X + 1,
       (this->Dimensions).field0_0x0._s_0.X <= local_dc._s_0.X)) || (local_e8._s_0.Y < 0)) ||
     ((((this->Dimensions).field0_0x0._s_0.Y <= local_b8._s_0.Y || (local_e8._s_0.Z < 0)) ||
      ((this->Dimensions).field0_0x0._s_0.Z <= local_d0._s_0.Z)))) {
    dVar14 = this->Outside;
  }
  else {
    this_00 = &this->Grid->Grid;
    dVar14 = dVar14 - (double)local_e8._s_0.X;
    dVar3 = dVar3 - (double)local_e8._s_0.Z;
    dVar2 = __real_3ff0000000000000 - dVar14;
    dVar4 = dVar4 - (double)local_e8._s_0.Y;
    dVar1 = __real_3ff0000000000000 - dVar3;
    dVar5 = __real_3ff0000000000000 - dVar4;
    local_dc._s_0.Y = local_e8._s_0.Y;
    local_dc._s_0.Z = local_e8._s_0.Z;
    local_d0._s_0.X = local_e8._s_0.X;
    local_d0._s_0.Y = local_e8._s_0.Y;
    local_c4._s_0.X = local_dc._s_0.X;
    local_c4._s_0.Y = local_e8._s_0.Y;
    local_c4._s_0.Z = local_d0._s_0.Z;
    local_b8._s_0.X = local_e8._s_0.X;
    local_b8._s_0.Z = local_e8._s_0.Z;
    local_ac._s_0.X = local_dc._s_0.X;
    local_ac._s_0.Y = local_b8._s_0.Y;
    local_ac._s_0.Z = local_e8._s_0.Z;
    local_a0._s_0.X = local_e8._s_0.X;
    local_a0._s_0.Y = local_b8._s_0.Y;
    local_a0._s_0.Z = local_d0._s_0.Z;
    local_94[0]._0_4_ = local_dc._s_0.X;
    local_94[0]._4_4_ = local_b8._s_0.Y;
    local_94[0]._8_4_ = local_d0._s_0.Z;
    fVar6 = TBasicBlockedDenseGrid3<float,8>::GetValue
                      ((TBasicBlockedDenseGrid3<float,8> *)this_00,(FVector3i *)&local_e8._s_0);
    fVar7 = TBasicBlockedDenseGrid3<float,8>::GetValue
                      ((TBasicBlockedDenseGrid3<float,8> *)this_00,(FVector3i *)&local_dc._s_0);
    fVar8 = TBasicBlockedDenseGrid3<float,8>::GetValue
                      ((TBasicBlockedDenseGrid3<float,8> *)this_00,(FVector3i *)&local_d0._s_0);
    fVar9 = TBasicBlockedDenseGrid3<float,8>::GetValue
                      ((TBasicBlockedDenseGrid3<float,8> *)this_00,(FVector3i *)&local_c4._s_0);
    fVar10 = TBasicBlockedDenseGrid3<float,8>::GetValue
                       ((TBasicBlockedDenseGrid3<float,8> *)this_00,(FVector3i *)&local_b8._s_0);
    fVar11 = TBasicBlockedDenseGrid3<float,8>::GetValue
                       ((TBasicBlockedDenseGrid3<float,8> *)this_00,(FVector3i *)&local_ac._s_0);
    fVar12 = TBasicBlockedDenseGrid3<float,8>::GetValue
                       ((TBasicBlockedDenseGrid3<float,8> *)this_00,(FVector3i *)&local_a0._s_0);
    fVar13 = TBasicBlockedDenseGrid3<float,8>::GetValue
                       ((TBasicBlockedDenseGrid3<float,8> *)this_00,(FVector3i *)&local_94[0]._s_0);
    dVar14 = ((double)fVar6 * dVar2 + (double)fVar7 * dVar14) * dVar5 * dVar1 +
             ((double)fVar8 * dVar2 + (double)fVar9 * dVar14) * dVar5 * dVar3 +
             ((double)fVar10 * dVar2 + (double)fVar11 * dVar14) * dVar1 * dVar4 +
             ((double)fVar12 * dVar2 + (double)fVar13 * dVar14) * dVar3 * dVar4;
  }
  return dVar14;
}

// Value<0> @ 14c945a30

double __thiscall
UE::Geometry::
TTriLinearGridInterpolant<UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>,double,1>
::Value<0>(TTriLinearGridInterpolant<UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>,double,1>
           *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  TBlockedGrid3<float,8> *this_00;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  FVector3i_u_0 local_e8;
  FVector3i_u_0 local_dc;
  FVector3i_u_0 local_d0;
  FVector3i_u_0 local_c4;
  FVector3i_u_0 local_b8;
  FVector3i_u_0 local_ac;
  FVector3i_u_0 local_a0;
  FVector3i_u_0 local_94 [11];
  
  dVar14 = __real_3ff0000000000000 / this->CellSize;
  dVar4 = ((param_1->field0_0x0)._s_0.Y - (this->GridOrigin).field0_0x0._s_0.Y) * dVar14;
  dVar3 = ((param_1->field0_0x0)._s_0.Z - (this->GridOrigin).field0_0x0._s_0.Z) * dVar14;
  dVar14 = ((param_1->field0_0x0)._s_0.X - (this->GridOrigin).field0_0x0._s_0.X) * dVar14;
  local_e8._s_0.Y = (int)dVar4;
  local_e8._s_0.Z = (int)dVar3;
  local_b8._s_0.Y = local_e8._s_0.Y + 1;
  local_e8._s_0.X = (int)dVar14;
  local_d0._s_0.Z = local_e8._s_0.Z + 1;
  if ((((local_e8._s_0.X < 0) ||
       (local_dc._s_0.X = local_e8._s_0.X + 1,
       (this->Dimensions).field0_0x0._s_0.X <= local_dc._s_0.X)) || (local_e8._s_0.Y < 0)) ||
     ((((this->Dimensions).field0_0x0._s_0.Y <= local_b8._s_0.Y || (local_e8._s_0.Z < 0)) ||
      ((this->Dimensions).field0_0x0._s_0.Z <= local_d0._s_0.Z)))) {
    dVar14 = this->Outside;
  }
  else {
    this_00 = &this->Grid->Grid;
    dVar14 = dVar14 - (double)local_e8._s_0.X;
    dVar3 = dVar3 - (double)local_e8._s_0.Z;
    dVar2 = __real_3ff0000000000000 - dVar14;
    dVar4 = dVar4 - (double)local_e8._s_0.Y;
    dVar1 = __real_3ff0000000000000 - dVar3;
    dVar5 = __real_3ff0000000000000 - dVar4;
    local_dc._s_0.Y = local_e8._s_0.Y;
    local_dc._s_0.Z = local_e8._s_0.Z;
    local_d0._s_0.X = local_e8._s_0.X;
    local_d0._s_0.Y = local_e8._s_0.Y;
    local_c4._s_0.X = local_dc._s_0.X;
    local_c4._s_0.Y = local_e8._s_0.Y;
    local_c4._s_0.Z = local_d0._s_0.Z;
    local_b8._s_0.X = local_e8._s_0.X;
    local_b8._s_0.Z = local_e8._s_0.Z;
    local_ac._s_0.X = local_dc._s_0.X;
    local_ac._s_0.Y = local_b8._s_0.Y;
    local_ac._s_0.Z = local_e8._s_0.Z;
    local_a0._s_0.X = local_e8._s_0.X;
    local_a0._s_0.Y = local_b8._s_0.Y;
    local_a0._s_0.Z = local_d0._s_0.Z;
    local_94[0]._0_4_ = local_dc._s_0.X;
    local_94[0]._4_4_ = local_b8._s_0.Y;
    local_94[0]._8_4_ = local_d0._s_0.Z;
    fVar6 = TBasicBlockedDenseGrid3<float,8>::GetValue
                      ((TBasicBlockedDenseGrid3<float,8> *)this_00,(FVector3i *)&local_e8._s_0);
    fVar7 = TBasicBlockedDenseGrid3<float,8>::GetValue
                      ((TBasicBlockedDenseGrid3<float,8> *)this_00,(FVector3i *)&local_dc._s_0);
    fVar8 = TBasicBlockedDenseGrid3<float,8>::GetValue
                      ((TBasicBlockedDenseGrid3<float,8> *)this_00,(FVector3i *)&local_d0._s_0);
    fVar9 = TBasicBlockedDenseGrid3<float,8>::GetValue
                      ((TBasicBlockedDenseGrid3<float,8> *)this_00,(FVector3i *)&local_c4._s_0);
    fVar10 = TBasicBlockedDenseGrid3<float,8>::GetValue
                       ((TBasicBlockedDenseGrid3<float,8> *)this_00,(FVector3i *)&local_b8._s_0);
    fVar11 = TBasicBlockedDenseGrid3<float,8>::GetValue
                       ((TBasicBlockedDenseGrid3<float,8> *)this_00,(FVector3i *)&local_ac._s_0);
    fVar12 = TBasicBlockedDenseGrid3<float,8>::GetValue
                       ((TBasicBlockedDenseGrid3<float,8> *)this_00,(FVector3i *)&local_a0._s_0);
    fVar13 = TBasicBlockedDenseGrid3<float,8>::GetValue
                       ((TBasicBlockedDenseGrid3<float,8> *)this_00,(FVector3i *)&local_94[0]._s_0);
    dVar14 = ((double)fVar6 * dVar2 + (double)fVar7 * dVar14) * dVar5 * dVar1 +
             ((double)fVar8 * dVar2 + (double)fVar9 * dVar14) * dVar5 * dVar3 +
             ((double)fVar10 * dVar2 + (double)fVar11 * dVar14) * dVar1 * dVar4 +
             ((double)fVar12 * dVar2 + (double)fVar13 * dVar14) * dVar3 * dVar4;
  }
  return dVar14;
}

