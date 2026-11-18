// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PBIK
// Functions: 7

// FPinConstraint @ 14ded65d0

FPinConstraint * __thiscall
PBIK::FPinConstraint::FPinConstraint(FPinConstraint *this,FRigidBody *param_1,FBone *param_2)

{
  double dVar1;
  double dVar2;
  TVector<double>_u_0 local_68;
  TVector<double>_u_0 local_48;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  this->Body = param_1;
  this->_padding_ = (longlong)&___7FPinConstraint_PBIK__6B_;
  this->PinBone = param_2;
  *(undefined1 *)&this->_padding_ = 1;
  this->Alpha = 1.0;
  dVar1 = (param_1->Rotation).W * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar2 = (param_1->Rotation).Y * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  local_18._8_4_ = SUB84(dVar1,0);
  local_18._0_8_ =
       (param_1->Rotation).Z * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  local_18._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  local_68._s_0.X = (param_2->Position).field0_0x0._s_0.X - (param_1->Position).field0_0x0._s_0.X;
  local_28._8_4_ = SUB84(dVar2,0);
  local_28._0_8_ =
       (param_1->Rotation).X * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  local_28._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  local_68._s_0.Y = (param_2->Position).field0_0x0._s_0.Y - (param_1->Position).field0_0x0._s_0.Y;
  local_68._s_0.Z = (param_2->Position).field0_0x0._s_0.Z - (param_1->Position).field0_0x0._s_0.Z;
  UE::Math::TQuat<double>::RotateVector
            ((TQuat<double> *)local_28,(TVector<double> *)&local_48._s_0,
             (TVector<double> *)&local_68._s_0);
  (this->PinPointLocalToA).field0_0x0._s_0.X = local_48._s_0.X;
  (this->PinPointLocalToA).field0_0x0._s_0.Y = local_48._s_0.Y;
  (this->PinPointLocalToA).field0_0x0._s_0.Z = local_48._s_0.Z;
  dVar1 = (param_2->Position).field0_0x0._s_0.Y;
  (this->GoalPosition).field0_0x0._s_0.X = (param_2->Position).field0_0x0._s_0.X;
  (this->GoalPosition).field0_0x0._s_0.Y = dVar1;
  (this->GoalPosition).field0_0x0._s_0.Z = (param_2->Position).field0_0x0._s_0.Z;
  dVar1 = (param_2->Rotation).Y;
  (this->GoalRotation).X = (param_2->Rotation).X;
  (this->GoalRotation).Y = dVar1;
  dVar1 = (param_2->Rotation).W;
  (this->GoalRotation).Z = (param_2->Rotation).Z;
  (this->GoalRotation).W = dVar1;
  return this;
}

// ~FPinConstraint @ 14ded6970

void __thiscall PBIK::FPinConstraint::~FPinConstraint(FPinConstraint *this)

{
  this->_padding_ = (longlong)&___7FPinConstraint_PBIK__6B_;
  return;
}

// GetCurrentPinPoint @ 14deda600

TVector<double> * __thiscall
PBIK::FPinConstraint::GetCurrentPinPoint
          (FPinConstraint *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  FRigidBody *pFVar3;
  TVector<double>_u_0 local_48;
  TVector<double>_u_0 local_28;
  
  local_28._s_0.X = (this->PinPointLocalToA).field0_0x0._s_0.X;
  local_28._s_0.Y = (this->PinPointLocalToA).field0_0x0._s_0.Y;
  pFVar3 = this->Body;
  local_28._s_0.Z = (this->PinPointLocalToA).field0_0x0._s_0.Z;
  UE::Math::TQuat<double>::RotateVector
            (&pFVar3->Rotation,(TVector<double> *)&local_48._s_0,(TVector<double> *)&local_28._s_0);
  dVar1 = (pFVar3->Position).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       local_48._s_0.X + (pFVar3->Position).field0_0x0._s_0.X;
  dVar2 = (pFVar3->Position).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = local_48._s_0.Y + dVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_48._s_0.Z + dVar2;
  return __return_storage_ptr__;
}

// GetPositionCorrection @ 14deda7f0

TVector<double> * __thiscall
PBIK::FPinConstraint::GetPositionCorrection
          (FPinConstraint *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  FRigidBody *pFVar5;
  double dVar6;
  TVector<double>_u_0 local_48;
  TVector<double>_u_0 local_28;
  
  local_48._s_0.X = (this->PinPointLocalToA).field0_0x0._s_0.X;
  local_48._s_0.Y = (this->PinPointLocalToA).field0_0x0._s_0.Y;
  local_48._s_0.Z = (this->PinPointLocalToA).field0_0x0._s_0.Z;
  UE::Math::TQuat<double>::RotateVector
            (&this->Body->Rotation,(TVector<double> *)&local_28._s_0,
             (TVector<double> *)&local_48._s_0);
  (param_1->field0_0x0)._s_0.X = local_28._s_0.X;
  (param_1->field0_0x0)._s_0.Y = local_28._s_0.Y;
  (param_1->field0_0x0)._s_0.Z = local_28._s_0.Z;
  pFVar5 = this->Body;
  dVar6 = (double)this->Alpha;
  dVar1 = (pFVar5->Position).field0_0x0._s_0.Y;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       ((this->GoalPosition).field0_0x0._s_0.X -
       ((pFVar5->Position).field0_0x0._s_0.X + (param_1->field0_0x0)._s_0.X)) * dVar6;
  dVar3 = (pFVar5->Position).field0_0x0._s_0.Z;
  dVar4 = (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       ((this->GoalPosition).field0_0x0._s_0.Y - (dVar1 + dVar2)) * dVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       ((this->GoalPosition).field0_0x0._s_0.Z - (dVar3 + dVar4)) * dVar6;
  return __return_storage_ptr__;
}

// SetGoal @ 14dedd440

void __thiscall
PBIK::FPinConstraint::SetGoal
          (FPinConstraint *this,TVector<double> *param_1,TQuat<double> *param_2,float param_3)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->GoalPosition).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->GoalPosition).field0_0x0._s_0.Y = dVar1;
  (this->GoalPosition).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  dVar1 = param_2->Y;
  (this->GoalRotation).X = param_2->X;
  (this->GoalRotation).Y = dVar1;
  dVar1 = param_2->W;
  (this->GoalRotation).Z = param_2->Z;
  (this->GoalRotation).W = dVar1;
  this->Alpha = param_3;
  return;
}

// Solve @ 14deddec0

void __thiscall PBIK::FPinConstraint::Solve(FPinConstraint *this,FPBIKSolverSettings *param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  FRigidBody *pFVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  TVector<double>_u_0 local_98;
  TVector<double>_u_0 local_78;
  TVector<double>_u_0 local_58 [3];
  
  if (((char)this->_padding_ != '\0') && (fVar1 = this->Alpha, __real_38d1b717 < fVar1)) {
    local_98._s_0.X = (this->PinPointLocalToA).field0_0x0._s_0.X;
    local_98._s_0.Y = (this->PinPointLocalToA).field0_0x0._s_0.Y;
    local_98._s_0.Z = (this->PinPointLocalToA).field0_0x0._s_0.Z;
    pFVar5 = this->Body;
    UE::Math::TQuat<double>::RotateVector
              (&pFVar5->Rotation,(TVector<double> *)&local_78._s_0,(TVector<double> *)&local_98._s_0
              );
    dVar7 = (double)fVar1;
    local_58[0]._s_0.Z = local_78._s_0.Z;
    local_58[0]._s_0.X = local_78._s_0.X;
    local_58[0]._s_0.Y = local_78._s_0.Y;
    local_98._s_0.X =
         ((this->GoalPosition).field0_0x0._s_0.X -
         (local_78._s_0.X + (pFVar5->Position).field0_0x0._s_0.X)) * dVar7;
    local_98._s_0.Y =
         ((this->GoalPosition).field0_0x0._s_0.Y -
         (local_78._s_0.Y + (pFVar5->Position).field0_0x0._s_0.Y)) * dVar7;
    local_98._s_0.Z =
         ((this->GoalPosition).field0_0x0._s_0.Z -
         (local_78._s_0.Z + (pFVar5->Position).field0_0x0._s_0.Z)) * dVar7;
    FRigidBody::ApplyPushToRotateBody
              (pFVar5,(TVector<double> *)&local_98._s_0,(TVector<double> *)&local_58[0]._s_0);
    local_58[0]._0_8_ = (this->PinPointLocalToA).field0_0x0._s_0.X;
    local_58[0]._8_8_ = (this->PinPointLocalToA).field0_0x0._s_0.Y;
    pFVar5 = this->Body;
    local_58[0]._16_8_ = (this->PinPointLocalToA).field0_0x0._s_0.Z;
    UE::Math::TQuat<double>::RotateVector
              (&pFVar5->Rotation,(TVector<double> *)&local_98._s_0,
               (TVector<double> *)&local_58[0]._s_0);
    dVar7 = (pFVar5->Position).field0_0x0._s_0.Y;
    dVar2 = (pFVar5->Position).field0_0x0._s_0.Z;
    dVar3 = (this->GoalPosition).field0_0x0._s_0.Y;
    dVar4 = (this->GoalPosition).field0_0x0._s_0.Z;
    dVar6 = (double)this->Alpha;
    dVar8 = (double)param_1->OverRelaxation;
    (pFVar5->Position).field0_0x0._s_0.X =
         ((this->GoalPosition).field0_0x0._s_0.X -
         ((pFVar5->Position).field0_0x0._s_0.X + local_98._s_0.X)) * dVar6 * dVar8 +
         (pFVar5->Position).field0_0x0._s_0.X;
    (pFVar5->Position).field0_0x0._s_0.Y =
         dVar7 + (dVar3 - (dVar7 + local_98._s_0.Y)) * dVar6 * dVar8;
    (pFVar5->Position).field0_0x0._s_0.Z =
         dVar2 + (dVar4 - (dVar2 + local_98._s_0.Z)) * dVar6 * dVar8;
  }
  return;
}

// UpdateFromInputs @ 14dee0b40

void __thiscall PBIK::FPinConstraint::UpdateFromInputs(FPinConstraint *this)

{
  FRigidBody *pFVar1;
  FBone *pFVar2;
  double dVar3;
  double dVar4;
  TVector<double>_u_0 local_68;
  TVector<double>_u_0 local_48;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  pFVar1 = this->Body;
  pFVar2 = this->PinBone;
  dVar3 = (pFVar1->Rotation).W * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar4 = (pFVar1->Rotation).Y * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  local_18._8_4_ = SUB84(dVar3,0);
  local_18._0_8_ =
       (pFVar1->Rotation).Z * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  local_18._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  local_68._s_0.X = (pFVar2->Position).field0_0x0._s_0.X - (pFVar1->Position).field0_0x0._s_0.X;
  local_28._8_4_ = SUB84(dVar4,0);
  local_28._0_8_ =
       (pFVar1->Rotation).X * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  local_28._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  local_68._s_0.Y = (pFVar2->Position).field0_0x0._s_0.Y - (pFVar1->Position).field0_0x0._s_0.Y;
  local_68._s_0.Z = (pFVar2->Position).field0_0x0._s_0.Z - (pFVar1->Position).field0_0x0._s_0.Z;
  UE::Math::TQuat<double>::RotateVector
            ((TQuat<double> *)local_28,(TVector<double> *)&local_48._s_0,
             (TVector<double> *)&local_68._s_0);
  (this->PinPointLocalToA).field0_0x0._s_0.X = local_48._s_0.X;
  (this->PinPointLocalToA).field0_0x0._s_0.Y = local_48._s_0.Y;
  (this->PinPointLocalToA).field0_0x0._s_0.Z = local_48._s_0.Z;
  return;
}

