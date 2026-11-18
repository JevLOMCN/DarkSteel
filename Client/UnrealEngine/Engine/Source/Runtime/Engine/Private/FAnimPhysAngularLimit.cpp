// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// FAnimPhysAngularLimit @ 1474b1a30

FAnimPhysAngularLimit * __thiscall
FAnimPhysAngularLimit::FAnimPhysAngularLimit
          (FAnimPhysAngularLimit *this,FAnimPhysRigidBody *param_1,FAnimPhysRigidBody *param_2,
          TVector<double> *param_3,float param_4,float param_5,float param_6)

{
  double dVar1;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)param_2;
  dVar1 = (param_3->field0_0x0)._s_0.Y;
  (this->WorldSpaceAxis).field0_0x0._s_0.X = (param_3->field0_0x0)._s_0.X;
  (this->WorldSpaceAxis).field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_3->field0_0x0)._s_0.Z;
  this->TargetSpin = param_4;
  (this->WorldSpaceAxis).field0_0x0._s_0.Z = dVar1;
  this->MinimumTorque = param_5;
  this->MaximumTorque = param_6;
  this->Torque = 0.0;
  UpdateCachedData(this);
  return this;
}

// FAnimPhysAngularLimit @ 1474b1a90

FAnimPhysAngularLimit * __thiscall
FAnimPhysAngularLimit::FAnimPhysAngularLimit(FAnimPhysAngularLimit *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  return this;
}

// Iter @ 1474eaa30

void __thiscall FAnimPhysAngularLimit::Iter(FAnimPhysAngularLimit *this,float param_1)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  double dVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  
  if (this->TargetSpin != __real_ff7fffff) {
    lVar3 = this->_padding_;
    dVar6 = 0.0;
    if (lVar3 == 0) {
      dVar1 = 0.0;
    }
    else {
      dVar2 = *(double *)(lVar3 + 0x68);
      dVar4 = *(double *)(lVar3 + 0x70);
      dVar1 = *(double *)(lVar3 + 0x78);
      dVar1 = (dVar4 * *(double *)(lVar3 + 0x138) + dVar2 * *(double *)(lVar3 + 0x118) +
               dVar1 * *(double *)(lVar3 + 0x158) + *(double *)(lVar3 + 0x178) * 0.0) *
              (this->WorldSpaceAxis).field0_0x0._s_0.Y +
              (dVar4 * *(double *)(lVar3 + 0x130) + dVar2 * *(double *)(lVar3 + 0x110) +
               dVar1 * *(double *)(lVar3 + 0x150) + *(double *)(lVar3 + 0x170) * 0.0) *
              (this->WorldSpaceAxis).field0_0x0._s_0.X +
              (*(double *)(lVar3 + 0x120) * dVar2 + *(double *)(lVar3 + 0x140) * dVar4 +
               *(double *)(lVar3 + 0x160) * dVar1 + *(double *)(lVar3 + 0x180) * 0.0) *
              (this->WorldSpaceAxis).field0_0x0._s_0.Z;
    }
    lVar3 = this->_padding_;
    if (lVar3 != 0) {
      dVar2 = *(double *)(lVar3 + 0x68);
      dVar4 = *(double *)(lVar3 + 0x70);
      dVar6 = *(double *)(lVar3 + 0x78);
      dVar6 = (*(double *)(lVar3 + 0x138) * dVar4 + *(double *)(lVar3 + 0x118) * dVar2 +
               *(double *)(lVar3 + 0x158) * dVar6 + *(double *)(lVar3 + 0x178) * 0.0) *
              (this->WorldSpaceAxis).field0_0x0._s_0.Y +
              (*(double *)(lVar3 + 0x130) * dVar4 + *(double *)(lVar3 + 0x110) * dVar2 +
               *(double *)(lVar3 + 0x150) * dVar6 + *(double *)(lVar3 + 0x170) * 0.0) *
              (this->WorldSpaceAxis).field0_0x0._s_0.X +
              (*(double *)(lVar3 + 0x140) * dVar4 + *(double *)(lVar3 + 0x120) * dVar2 +
               *(double *)(lVar3 + 0x160) * dVar6 + *(double *)(lVar3 + 0x180) * 0.0) *
              (this->WorldSpaceAxis).field0_0x0._s_0.Z;
    }
    fVar7 = (this->TargetSpin - (float)(dVar1 - dVar6)) * this->CachedSpinToTorque;
    fVar5 = param_1 * this->MaximumTorque - this->Torque;
    fVar8 = param_1 * this->MinimumTorque - this->Torque;
    if (fVar5 <= fVar7) {
      fVar7 = fVar5;
    }
    if (fVar7 <= fVar8) {
      fVar7 = fVar8;
    }
    dVar6 = (double)fVar7;
    if (lVar3 != 0) {
      dVar1 = (this->WorldSpaceAxis).field0_0x0._s_0.Y;
      dVar2 = (this->WorldSpaceAxis).field0_0x0._s_0.Z;
      *(double *)(lVar3 + 0x68) =
           *(double *)(lVar3 + 0x68) - dVar6 * (this->WorldSpaceAxis).field0_0x0._s_0.X;
      *(double *)(lVar3 + 0x70) = *(double *)(lVar3 + 0x70) - dVar6 * dVar1;
      *(double *)(lVar3 + 0x78) = *(double *)(lVar3 + 0x78) - dVar6 * dVar2;
    }
    lVar3 = this->_padding_;
    if (lVar3 != 0) {
      dVar1 = (this->WorldSpaceAxis).field0_0x0._s_0.Z;
      dVar2 = (this->WorldSpaceAxis).field0_0x0._s_0.X;
      *(double *)(lVar3 + 0x70) =
           dVar6 * (this->WorldSpaceAxis).field0_0x0._s_0.Y + *(double *)(lVar3 + 0x70);
      *(double *)(lVar3 + 0x78) = dVar6 * dVar1 + *(double *)(lVar3 + 0x78);
      *(double *)(lVar3 + 0x68) = dVar6 * dVar2 + *(double *)(lVar3 + 0x68);
    }
    this->Torque = fVar7 + this->Torque;
  }
  return;
}

// RemoveBias @ 1474f5380

void __thiscall FAnimPhysAngularLimit::RemoveBias(FAnimPhysAngularLimit *this)

{
  float fVar1;
  
  if (this->MinimumTorque <= 0.0 && this->MinimumTorque != 0.0) {
    this->TargetSpin = 0.0;
    return;
  }
  fVar1 = this->TargetSpin;
  if (0.0 <= fVar1) {
    fVar1 = 0.0;
  }
  this->TargetSpin = fVar1;
  return;
}

// UpdateCachedData @ 147500080

void __thiscall FAnimPhysAngularLimit::UpdateCachedData(FAnimPhysAngularLimit *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  
  lVar5 = this->_padding_;
  if (lVar5 == 0) {
    dVar1 = 0.0;
  }
  else {
    dVar1 = (this->WorldSpaceAxis).field0_0x0._s_0.X;
    dVar2 = (this->WorldSpaceAxis).field0_0x0._s_0.Y;
    dVar3 = (this->WorldSpaceAxis).field0_0x0._s_0.Z;
    dVar1 = dVar2 * (dVar1 * *(double *)(lVar5 + 0x118) + dVar2 * *(double *)(lVar5 + 0x138) +
                     dVar3 * *(double *)(lVar5 + 0x158) + *(double *)(lVar5 + 0x178) * 0.0) +
            dVar1 * (dVar1 * *(double *)(lVar5 + 0x110) + dVar2 * *(double *)(lVar5 + 0x130) +
                     dVar3 * *(double *)(lVar5 + 0x150) + *(double *)(lVar5 + 0x170) * 0.0) +
            dVar3 * (*(double *)(lVar5 + 0x120) * dVar1 + *(double *)(lVar5 + 0x140) * dVar2 +
                     *(double *)(lVar5 + 0x160) * dVar3 + *(double *)(lVar5 + 0x180) * 0.0);
  }
  lVar5 = this->_padding_;
  if (lVar5 == 0) {
    dVar2 = 0.0;
  }
  else {
    dVar2 = (this->WorldSpaceAxis).field0_0x0._s_0.X;
    dVar3 = (this->WorldSpaceAxis).field0_0x0._s_0.Y;
    dVar4 = (this->WorldSpaceAxis).field0_0x0._s_0.Z;
    dVar2 = dVar3 * (dVar3 * *(double *)(lVar5 + 0x138) + dVar2 * *(double *)(lVar5 + 0x118) +
                     dVar4 * *(double *)(lVar5 + 0x158) + *(double *)(lVar5 + 0x178) * 0.0) +
            dVar2 * (dVar3 * *(double *)(lVar5 + 0x130) + dVar2 * *(double *)(lVar5 + 0x110) +
                     dVar4 * *(double *)(lVar5 + 0x150) + *(double *)(lVar5 + 0x170) * 0.0) +
            dVar4 * (*(double *)(lVar5 + 0x140) * dVar3 + *(double *)(lVar5 + 0x120) * dVar2 +
                     *(double *)(lVar5 + 0x160) * dVar4 + *(double *)(lVar5 + 0x180) * 0.0);
  }
  this->CachedSpinToTorque = (float)(__real_3ff0000000000000 / (dVar2 + dVar1));
  return;
}

