// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 13

// StaticStruct @ 14822b8b0

UScriptStruct * __cdecl FAngularDriveConstraint::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAngularDriveConstraint.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAngularDriveConstraint.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAngularDriveConstraint,(UObject *)pUVar1,
                         L"AngularDriveConstraint");
  }
  return Z_Registration_Info_UScriptStruct_FAngularDriveConstraint.OuterSingleton;
}

// FAngularDriveConstraint @ 14824df70

FAngularDriveConstraint * __thiscall
FAngularDriveConstraint::FAngularDriveConstraint(FAngularDriveConstraint *this)

{
  undefined1 *puVar1;
  
  (this->TwistDrive).bEnablePositionDrive = '\0';
  (this->TwistDrive).bEnableVelocityDrive = '\0';
  (this->SwingDrive).bEnablePositionDrive = '\0';
  (this->SwingDrive).bEnableVelocityDrive = '\0';
  (this->SlerpDrive).bEnablePositionDrive = '\0';
  (this->SlerpDrive).bEnableVelocityDrive = '\0';
  (this->OrientationTarget).Pitch = 0.0;
  (this->OrientationTarget).Yaw = 0.0;
  (this->OrientationTarget).Roll = 0.0;
  (this->AngularVelocityTarget).field0_0x0._s_0.X = 0.0;
  (this->AngularVelocityTarget).field0_0x0._s_0.Y = 0.0;
  (this->AngularVelocityTarget).field0_0x0._s_0.Z = 0.0;
  (this->TwistDrive).Stiffness = 50.0;
  (this->TwistDrive).Damping = 1.0;
  (this->TwistDrive).MaxForce = 0.0;
  (this->SwingDrive).Stiffness = 50.0;
  (this->SwingDrive).Damping = 1.0;
  (this->SwingDrive).MaxForce = 0.0;
  (this->SlerpDrive).Stiffness = 50.0;
  (this->SlerpDrive).Damping = 1.0;
  (this->SlerpDrive).MaxForce = 0.0;
  this->AngularDriveMode = '\0';
  this->bAccelerationMode = true;
  return this;
}

// GetAccelerationMode @ 148283b00

bool __thiscall FAngularDriveConstraint::GetAccelerationMode(FAngularDriveConstraint *this)

{
  return this->bAccelerationMode;
}

// GetDriveParams @ 1482875f0

void __thiscall
FAngularDriveConstraint::GetDriveParams
          (FAngularDriveConstraint *this,float *param_1,float *param_2,float *param_3)

{
  *param_1 = (this->SwingDrive).Stiffness;
  *param_2 = (this->SwingDrive).Damping;
  *param_3 = (this->SwingDrive).MaxForce;
  return;
}

// GetDriveParams @ 148287610

void __thiscall
FAngularDriveConstraint::GetDriveParams
          (FAngularDriveConstraint *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (this->TwistDrive).MaxForce;
  fVar2 = (this->SwingDrive).Stiffness;
  (param_1->field0_0x0)._s_0.Y = (double)(this->TwistDrive).Stiffness;
  (param_1->field0_0x0)._s_0.X = (double)fVar2;
  (param_1->field0_0x0)._s_0.Z = (double)fVar1;
  fVar1 = (this->TwistDrive).MaxForce;
  fVar2 = (this->SwingDrive).Damping;
  (param_2->field0_0x0)._s_0.Y = (double)(this->TwistDrive).Damping;
  (param_2->field0_0x0)._s_0.X = (double)fVar2;
  (param_2->field0_0x0)._s_0.Z = (double)fVar1;
  fVar1 = (this->TwistDrive).MaxForce;
  fVar2 = (this->SwingDrive).MaxForce;
  (param_3->field0_0x0)._s_0.Y = (double)(this->TwistDrive).Damping;
  (param_3->field0_0x0)._s_0.X = (double)fVar2;
  (param_3->field0_0x0)._s_0.Z = (double)fVar1;
  return;
}

// SetAccelerationMode @ 1482a9380

void __thiscall
FAngularDriveConstraint::SetAccelerationMode(FAngularDriveConstraint *this,bool param_1)

{
  this->bAccelerationMode = param_1;
  return;
}

// SetAngularDriveMode @ 1482a95b0

void __thiscall
FAngularDriveConstraint::SetAngularDriveMode(FAngularDriveConstraint *this,Type param_1)

{
  (this->AngularDriveMode).Value = (uchar)param_1;
  return;
}

// SetAngularVelocityDriveSLERP @ 1482a9ec0

void __thiscall
FAngularDriveConstraint::SetAngularVelocityDriveSLERP(FAngularDriveConstraint *this,bool param_1)

{
  undefined1 *puVar1;
  
  (this->SlerpDrive).bEnableVelocityDrive = '\0';
  puVar1 = &(this->SlerpDrive).field_0xc;
  *puVar1 = *puVar1 | param_1 * '\x02';
  return;
}

// SetAngularVelocityDriveTwistAndSwing @ 1482a9fe0

void __thiscall
FAngularDriveConstraint::SetAngularVelocityDriveTwistAndSwing
          (FAngularDriveConstraint *this,bool param_1,bool param_2)

{
  undefined1 *puVar1;
  
  (this->SwingDrive).bEnableVelocityDrive = '\0';
  (this->TwistDrive).bEnableVelocityDrive = '\0';
  puVar1 = &(this->SwingDrive).field_0xc;
  *puVar1 = *puVar1 | param_2 * '\x02';
  puVar1 = &(this->TwistDrive).field_0xc;
  *puVar1 = *puVar1 | param_1 * '\x02';
  return;
}

// SetDriveParams @ 1482aa700

void __thiscall
FAngularDriveConstraint::SetDriveParams
          (FAngularDriveConstraint *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (param_3->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.X;
  (this->SwingDrive).Damping = (float)(param_2->field0_0x0)._s_0.X;
  (this->SwingDrive).Stiffness = (float)dVar2;
  (this->SwingDrive).MaxForce = (float)dVar1;
  dVar1 = (param_3->field0_0x0)._s_0.Y;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  (this->TwistDrive).Damping = (float)(param_2->field0_0x0)._s_0.Y;
  (this->TwistDrive).Stiffness = (float)dVar2;
  (this->TwistDrive).MaxForce = (float)dVar1;
  dVar1 = (param_3->field0_0x0)._s_0.Z;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  (this->SlerpDrive).Damping = (float)(param_2->field0_0x0)._s_0.Z;
  (this->SlerpDrive).Stiffness = (float)dVar2;
  (this->SlerpDrive).MaxForce = (float)dVar1;
  return;
}

// SetDriveParams @ 1482aa790

void __thiscall
FAngularDriveConstraint::SetDriveParams
          (FAngularDriveConstraint *this,float param_1,float param_2,float param_3)

{
  (this->SwingDrive).Stiffness = param_1;
  (this->SwingDrive).Damping = param_2;
  (this->SwingDrive).MaxForce = param_3;
  (this->TwistDrive).Stiffness = param_1;
  (this->TwistDrive).Damping = param_2;
  (this->TwistDrive).MaxForce = param_3;
  (this->SlerpDrive).Stiffness = param_1;
  (this->SlerpDrive).Damping = param_2;
  (this->SlerpDrive).MaxForce = param_3;
  return;
}

// SetOrientationDriveSLERP @ 1482ad8f0

void __thiscall
FAngularDriveConstraint::SetOrientationDriveSLERP(FAngularDriveConstraint *this,bool param_1)

{
  undefined1 *puVar1;
  
  (this->SlerpDrive).bEnablePositionDrive = '\0';
  puVar1 = &(this->SlerpDrive).field_0xc;
  *puVar1 = *puVar1 | param_1;
  return;
}

// SetOrientationDriveTwistAndSwing @ 1482ada10

void __thiscall
FAngularDriveConstraint::SetOrientationDriveTwistAndSwing
          (FAngularDriveConstraint *this,bool param_1,bool param_2)

{
  undefined1 *puVar1;
  
  (this->SwingDrive).bEnablePositionDrive = '\0';
  (this->TwistDrive).bEnablePositionDrive = '\0';
  puVar1 = &(this->SwingDrive).field_0xc;
  *puVar1 = *puVar1 | param_2;
  puVar1 = &(this->TwistDrive).field_0xc;
  *puVar1 = *puVar1 | param_1;
  return;
}

