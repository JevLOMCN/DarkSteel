// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// FAnimPhysLinearLimit @ 1474b1ad0

FAnimPhysLinearLimit * __thiscall
FAnimPhysLinearLimit::FAnimPhysLinearLimit
          (FAnimPhysLinearLimit *this,FAnimPhysRigidBody *param_1,FAnimPhysRigidBody *param_2,
          TVector<double> *param_3,TVector<double> *param_4,TVector<double> *param_5,float param_6,
          float param_7,TVector2<double> *param_8)

{
  double dVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double dVar4;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)param_2;
  dVar4 = (param_3->field0_0x0)._s_0.Y;
  (this->FirstPosition).field0_0x0._s_0.X = (param_3->field0_0x0)._s_0.X;
  (this->FirstPosition).field0_0x0._s_0.Y = dVar4;
  (this->FirstPosition).field0_0x0._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  dVar4 = (param_4->field0_0x0)._s_0.Y;
  (this->SecondPosition).field0_0x0._s_0.X = (param_4->field0_0x0)._s_0.X;
  (this->SecondPosition).field0_0x0._s_0.Y = dVar4;
  (this->SecondPosition).field0_0x0._s_0.Z = (param_4->field0_0x0)._s_0.Z;
  dVar4 = (param_5->field0_0x0)._s_0.Y;
  (this->LimitNormal).field0_0x0._s_0.X = (param_5->field0_0x0)._s_0.X;
  (this->LimitNormal).field0_0x0._s_0.Y = dVar4;
  dVar4 = (param_5->field0_0x0)._s_0.Z;
  this->TargetSpeed = param_6;
  (this->LimitNormal).field0_0x0._s_0.Z = dVar4;
  this->TargetSpeedWithoutBias = param_7;
  dVar4 = *(double *)((longlong)&param_8->field0_0x0 + 8);
  uVar2 = SUB84(dVar4,0);
  uVar3 = (undefined4)((ulonglong)dVar4 >> 0x20);
  dVar1 = *(double *)&param_8->field0_0x0;
  if (dVar1 <= dVar4) {
    uVar2 = SUB84(dVar1,0);
    uVar3 = (undefined4)((ulonglong)dVar1 >> 0x20);
  }
  this->MinimumForce = (float)(double)CONCAT44(uVar3,uVar2);
  dVar4 = (param_8->field0_0x0)._s_0.Y;
  dVar1 = (param_8->field0_0x0)._s_0.X;
  if (dVar4 <= dVar1) {
    dVar4 = dVar1;
  }
  this->SumImpulses = 0.0;
  this->Maximumforce = (float)dVar4;
  UpdateCachedData(this);
  return this;
}

// FAnimPhysLinearLimit @ 1474b1b80

FAnimPhysLinearLimit * __thiscall
FAnimPhysLinearLimit::FAnimPhysLinearLimit(FAnimPhysLinearLimit *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  return this;
}

// Iter @ 1474ead10

void __thiscall FAnimPhysLinearLimit::Iter(FAnimPhysLinearLimit *this,float param_1)

{
  double dVar1;
  FAnimPhysRigidBody *pFVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  double local_b8;
  double dStack_b0;
  undefined8 local_a8;
  
  pFVar2 = (FAnimPhysRigidBody *)this->_padding_;
  dVar9 = 0.0;
  if (pFVar2 == (FAnimPhysRigidBody *)0x0) {
    dVar7 = 0.0;
    dVar4 = 0.0;
    dVar10 = 0.0;
  }
  else {
    dVar7 = (double)pFVar2->_padding_;
    dVar11 = (double)pFVar2->_padding_;
    dVar10 = (double)pFVar2->_padding_;
    dVar4 = dVar11 * (pFVar2->InverseWorldSpaceTensor).M[1][0] +
            (pFVar2->InverseWorldSpaceTensor).M[0][0] * dVar7 +
            (pFVar2->InverseWorldSpaceTensor).M[2][0] * dVar10 +
            (pFVar2->InverseWorldSpaceTensor).M[3][0] * 0.0;
    dVar5 = dVar11 * (pFVar2->InverseWorldSpaceTensor).M[1][1] +
            (pFVar2->InverseWorldSpaceTensor).M[0][1] * dVar7 +
            (pFVar2->InverseWorldSpaceTensor).M[2][1] * dVar10 +
            (pFVar2->InverseWorldSpaceTensor).M[3][1] * 0.0;
    dVar10 = (pFVar2->InverseWorldSpaceTensor).M[0][2] * dVar7 +
             (pFVar2->InverseWorldSpaceTensor).M[1][2] * dVar11 +
             (pFVar2->InverseWorldSpaceTensor).M[2][2] * dVar10 +
             (pFVar2->InverseWorldSpaceTensor).M[3][2] * 0.0;
    dVar11 = (double)pFVar2->InverseMass;
    dVar7 = (dVar4 * (this->WorldSpacePosition0).field0_0x0._s_0.Y -
            dVar5 * (this->WorldSpacePosition0).field0_0x0._s_0.X) +
            dVar11 * (double)pFVar2->_padding_;
    dVar4 = (dVar10 * (this->WorldSpacePosition0).field0_0x0._s_0.X -
            dVar4 * (this->WorldSpacePosition0).field0_0x0._s_0.Z) +
            dVar11 * (double)pFVar2->_padding_;
    dVar10 = (dVar5 * (this->WorldSpacePosition0).field0_0x0._s_0.Z -
             dVar10 * (this->WorldSpacePosition0).field0_0x0._s_0.Y) +
             dVar11 * (double)pFVar2->_padding_;
  }
  lVar3 = this->_padding_;
  if (lVar3 == 0) {
    dVar5 = 0.0;
    dVar11 = 0.0;
  }
  else {
    dVar11 = *(double *)(lVar3 + 0x68);
    dVar12 = *(double *)(lVar3 + 0x70);
    dVar9 = *(double *)(lVar3 + 0x78);
    dVar5 = *(double *)(lVar3 + 0x110) * dVar11 + *(double *)(lVar3 + 0x130) * dVar12 +
            *(double *)(lVar3 + 0x150) * dVar9 + *(double *)(lVar3 + 0x170) * 0.0;
    dVar6 = *(double *)(lVar3 + 0x118) * dVar11 + *(double *)(lVar3 + 0x138) * dVar12 +
            *(double *)(lVar3 + 0x158) * dVar9 + *(double *)(lVar3 + 0x178) * 0.0;
    dVar11 = *(double *)(lVar3 + 0x120) * dVar11 + *(double *)(lVar3 + 0x140) * dVar12 +
             *(double *)(lVar3 + 0x160) * dVar9 + *(double *)(lVar3 + 0x180) * 0.0;
    dVar12 = (double)*(float *)(lVar3 + 0x84);
    dVar9 = (dVar5 * (this->WorldSpacePosition1).field0_0x0._s_0.Y -
            dVar6 * (this->WorldSpacePosition1).field0_0x0._s_0.X) +
            dVar12 * *(double *)(lVar3 + 0x60);
    dVar5 = (dVar11 * (this->WorldSpacePosition1).field0_0x0._s_0.X -
            dVar5 * (this->WorldSpacePosition1).field0_0x0._s_0.Z) +
            dVar12 * *(double *)(lVar3 + 0x58);
    dVar11 = (dVar6 * (this->WorldSpacePosition1).field0_0x0._s_0.Z -
             dVar11 * (this->WorldSpacePosition1).field0_0x0._s_0.Y) +
             dVar12 * *(double *)(lVar3 + 0x50);
  }
  dVar6 = (this->LimitNormal).field0_0x0._s_0.X;
  dVar12 = (this->LimitNormal).field0_0x0._s_0.Y;
  dVar1 = (this->LimitNormal).field0_0x0._s_0.Z;
  fVar13 = ((float)((uint)this->TargetSpeed ^ __xmm_80000000800000008000000080000000) -
           (float)((dVar5 - dVar4) * dVar12 + (dVar11 - dVar10) * dVar6 + (dVar9 - dVar7) * dVar1))
           * this->InverseInertiaImpulse;
  fVar14 = param_1 * this->MinimumForce - this->SumImpulses;
  fVar8 = param_1 * this->Maximumforce - this->SumImpulses;
  if (fVar8 <= fVar13) {
    fVar13 = fVar8;
  }
  if (fVar13 <= fVar14) {
    fVar13 = fVar14;
  }
  if (pFVar2 != (FAnimPhysRigidBody *)0x0) {
    dVar9 = (double)(float)((uint)fVar13 ^ __xmm_80000000800000008000000080000000);
    local_a8 = dVar9 * dVar1;
    dStack_b0 = dVar9 * dVar12;
    local_b8 = dVar9 * dVar6;
    FAnimPhys::ApplyImpulse(pFVar2,&this->WorldSpacePosition0,(TVector<double> *)&local_b8);
  }
  if ((FAnimPhysRigidBody *)this->_padding_ != (FAnimPhysRigidBody *)0x0) {
    dVar10 = (double)fVar13;
    dVar9 = (this->LimitNormal).field0_0x0._s_0.Y * dVar10;
    local_a8 = dVar10 * (this->LimitNormal).field0_0x0._s_0.Z;
    unique0x100000e2 = SUB84(dVar9,0);
    local_b8 = (this->LimitNormal).field0_0x0._s_0.X * dVar10;
    unique0x100000e6 = (int)((ulonglong)dVar9 >> 0x20);
    FAnimPhys::ApplyImpulse
              ((FAnimPhysRigidBody *)this->_padding_,&this->WorldSpacePosition1,
               (TVector<double> *)&local_b8);
  }
  this->SumImpulses = fVar13 + this->SumImpulses;
  return;
}

// RemoveBias @ 1474f53b0

void __thiscall FAnimPhysLinearLimit::RemoveBias(FAnimPhysLinearLimit *this)

{
  this->TargetSpeed = this->TargetSpeedWithoutBias;
  return;
}

// UpdateCachedData @ 1475002e0

void __thiscall FAnimPhysLinearLimit::UpdateCachedData(FAnimPhysLinearLimit *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  TVector<double>_u_0 *pTVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  TVector<double>_u_0 local_e8;
  TVector<double>_u_0 local_c8 [8];
  
  local_e8._s_0.X = (this->FirstPosition).field0_0x0._s_0.X;
  local_e8._s_0.Y = (this->FirstPosition).field0_0x0._s_0.Y;
  lVar8 = this->_padding_;
  local_e8._s_0.Z = (this->FirstPosition).field0_0x0._s_0.Z;
  if (lVar8 == 0) {
    pTVar12 = &local_e8;
  }
  else {
    UE::Math::TQuat<double>::RotateVector
              ((TQuat<double> *)(lVar8 + 0x20),(TVector<double> *)&local_c8[0]._s_0,
               (TVector<double> *)&local_e8._s_0);
    pTVar12 = local_c8;
  }
  dVar7 = pTVar12->XYZ[1];
  lVar9 = this->_padding_;
  dVar1 = pTVar12->XYZ[2];
  (this->WorldSpacePosition0).field0_0x0._s_0.X = (pTVar12->_s_0).X;
  (this->WorldSpacePosition0).field0_0x0._s_0.Y = dVar7;
  (this->WorldSpacePosition0).field0_0x0._s_0.Z = dVar1;
  local_e8._s_0.Z = (this->SecondPosition).field0_0x0._s_0.Z;
  local_e8._s_0.X = (this->SecondPosition).field0_0x0._s_0.X;
  local_e8._s_0.Y = (this->SecondPosition).field0_0x0._s_0.Y;
  if (lVar9 == 0) {
    pTVar12 = &local_e8;
  }
  else {
    UE::Math::TQuat<double>::RotateVector
              ((TQuat<double> *)(lVar9 + 0x20),(TVector<double> *)&local_c8[0]._s_0,
               (TVector<double> *)&local_e8._s_0);
    pTVar12 = local_c8;
  }
  dVar1 = pTVar12->XYZ[2];
  dVar7 = 0.0;
  dVar2 = pTVar12->XYZ[1];
  (this->WorldSpacePosition1).field0_0x0._s_0.X = (pTVar12->_s_0).X;
  (this->WorldSpacePosition1).field0_0x0._s_0.Y = dVar2;
  (this->WorldSpacePosition1).field0_0x0._s_0.Z = dVar1;
  if (lVar8 == 0) {
    dVar1 = 0.0;
  }
  else {
    dVar1 = (this->WorldSpacePosition0).field0_0x0._s_0.Y;
    dVar2 = (this->WorldSpacePosition0).field0_0x0._s_0.Z;
    dVar3 = (this->WorldSpacePosition0).field0_0x0._s_0.X;
    dVar4 = (this->LimitNormal).field0_0x0._s_0.Y;
    dVar5 = (this->LimitNormal).field0_0x0._s_0.Z;
    dVar6 = (this->LimitNormal).field0_0x0._s_0.X;
    dVar15 = dVar1 * dVar5 - dVar4 * dVar2;
    dVar13 = dVar2 * dVar6 - dVar3 * dVar5;
    dVar14 = dVar4 * dVar3 - dVar1 * dVar6;
    dVar10 = *(double *)(lVar8 + 0x130) * dVar13 + *(double *)(lVar8 + 0x110) * dVar15 +
             dVar14 * *(double *)(lVar8 + 0x150) + *(double *)(lVar8 + 0x170) * 0.0;
    dVar11 = *(double *)(lVar8 + 0x138) * dVar13 + *(double *)(lVar8 + 0x118) * dVar15 +
             dVar14 * *(double *)(lVar8 + 0x158) + *(double *)(lVar8 + 0x178) * 0.0;
    dVar14 = *(double *)(lVar8 + 0x140) * dVar13 + *(double *)(lVar8 + 0x120) * dVar15 +
             *(double *)(lVar8 + 0x160) * dVar14 + *(double *)(lVar8 + 0x180) * 0.0;
    dVar1 = (dVar14 * dVar3 - dVar2 * dVar10) * dVar4 + (dVar2 * dVar11 - dVar1 * dVar14) * dVar6 +
            (dVar1 * dVar10 - dVar11 * dVar3) * dVar5 + (double)*(float *)(lVar8 + 0x84);
  }
  if (lVar9 != 0) {
    dVar7 = (this->WorldSpacePosition1).field0_0x0._s_0.Z;
    dVar2 = (this->WorldSpacePosition1).field0_0x0._s_0.Y;
    dVar3 = (this->WorldSpacePosition1).field0_0x0._s_0.X;
    dVar4 = (this->LimitNormal).field0_0x0._s_0.Y;
    dVar5 = (this->LimitNormal).field0_0x0._s_0.Z;
    dVar6 = (this->LimitNormal).field0_0x0._s_0.X;
    dVar15 = dVar2 * dVar5 - dVar7 * dVar4;
    dVar13 = dVar6 * dVar7 - dVar3 * dVar5;
    dVar14 = dVar3 * dVar4 - dVar6 * dVar2;
    dVar10 = *(double *)(lVar9 + 0x110) * dVar15 + *(double *)(lVar9 + 0x130) * dVar13 +
             dVar14 * *(double *)(lVar9 + 0x150) + *(double *)(lVar9 + 0x170) * 0.0;
    dVar11 = *(double *)(lVar9 + 0x118) * dVar15 + *(double *)(lVar9 + 0x138) * dVar13 +
             dVar14 * *(double *)(lVar9 + 0x158) + *(double *)(lVar9 + 0x178) * 0.0;
    dVar14 = *(double *)(lVar9 + 0x120) * dVar15 + *(double *)(lVar9 + 0x140) * dVar13 +
             *(double *)(lVar9 + 0x160) * dVar14 + *(double *)(lVar9 + 0x180) * 0.0;
    dVar7 = (dVar11 * dVar7 - dVar14 * dVar2) * dVar6 + (dVar14 * dVar3 - dVar10 * dVar7) * dVar4 +
            (dVar10 * dVar2 - dVar11 * dVar3) * dVar5 + (double)*(float *)(lVar9 + 0x84);
  }
  this->InverseInertiaImpulse = (float)(__real_3ff0000000000000 / (dVar7 + dVar1));
  return;
}

