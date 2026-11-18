// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// StaticStruct @ 14822b560

UScriptStruct * __cdecl FLinearDriveConstraint::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLinearDriveConstraint.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FLinearDriveConstraint.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLinearDriveConstraint,(UObject *)pUVar1,
                         L"LinearDriveConstraint");
  }
  return Z_Registration_Info_UScriptStruct_FLinearDriveConstraint.OuterSingleton;
}

// FLinearDriveConstraint @ 14824f4a0

FLinearDriveConstraint * __thiscall
FLinearDriveConstraint::FLinearDriveConstraint(FLinearDriveConstraint *this)

{
  undefined1 *puVar1;
  
  (this->XDrive).bEnablePositionDrive = '\0';
  (this->XDrive).bEnableVelocityDrive = '\0';
  (this->YDrive).bEnablePositionDrive = '\0';
  (this->YDrive).bEnableVelocityDrive = '\0';
  (this->ZDrive).bEnablePositionDrive = '\0';
  (this->ZDrive).bEnableVelocityDrive = '\0';
  (this->PositionTarget).field0_0x0._s_0.X = 0.0;
  (this->PositionTarget).field0_0x0._s_0.Y = 0.0;
  (this->PositionTarget).field0_0x0._s_0.Z = 0.0;
  (this->VelocityTarget).field0_0x0._s_0.X = 0.0;
  (this->VelocityTarget).field0_0x0._s_0.Y = 0.0;
  (this->VelocityTarget).field0_0x0._s_0.Z = 0.0;
  (this->XDrive).Stiffness = 50.0;
  (this->XDrive).Damping = 1.0;
  (this->XDrive).MaxForce = 0.0;
  (this->YDrive).Stiffness = 50.0;
  (this->YDrive).Damping = 1.0;
  (this->YDrive).MaxForce = 0.0;
  (this->ZDrive).Stiffness = 50.0;
  (this->ZDrive).Damping = 1.0;
  (this->ZDrive).MaxForce = 0.0;
  this->bAccelerationMode = true;
  return this;
}

// GetAccelerationMode @ 148283b10

bool __thiscall FLinearDriveConstraint::GetAccelerationMode(FLinearDriveConstraint *this)

{
  return this->bAccelerationMode;
}

// GetDriveParams @ 148287690

void __thiscall
FLinearDriveConstraint::GetDriveParams
          (FLinearDriveConstraint *this,float *param_1,float *param_2,float *param_3)

{
  *param_1 = (this->XDrive).Stiffness;
  *param_2 = (this->XDrive).Damping;
  *param_3 = (this->XDrive).MaxForce;
  return;
}

// GetDriveParams @ 1482876b0

void __thiscall
FLinearDriveConstraint::GetDriveParams
          (FLinearDriveConstraint *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (this->ZDrive).Stiffness;
  fVar2 = (this->XDrive).Stiffness;
  (param_1->field0_0x0)._s_0.Y = (double)(this->YDrive).Stiffness;
  (param_1->field0_0x0)._s_0.X = (double)fVar2;
  (param_1->field0_0x0)._s_0.Z = (double)fVar1;
  fVar1 = (this->ZDrive).Damping;
  fVar2 = (this->XDrive).Damping;
  (param_2->field0_0x0)._s_0.Y = (double)(this->YDrive).Damping;
  (param_2->field0_0x0)._s_0.X = (double)fVar2;
  (param_2->field0_0x0)._s_0.Z = (double)fVar1;
  fVar1 = (this->ZDrive).MaxForce;
  fVar2 = (this->XDrive).MaxForce;
  (param_3->field0_0x0)._s_0.Y = (double)(this->YDrive).MaxForce;
  (param_3->field0_0x0)._s_0.X = (double)fVar2;
  (param_3->field0_0x0)._s_0.Z = (double)fVar1;
  return;
}

// SetAccelerationMode @ 1482a9390

void __thiscall
FLinearDriveConstraint::SetAccelerationMode(FLinearDriveConstraint *this,bool param_1)

{
  this->bAccelerationMode = param_1;
  return;
}

// SetDriveParams @ 1482aab10

void __thiscall
FLinearDriveConstraint::SetDriveParams
          (FLinearDriveConstraint *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (param_3->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.X;
  (this->XDrive).Damping = (float)(param_2->field0_0x0)._s_0.X;
  (this->XDrive).Stiffness = (float)dVar2;
  (this->XDrive).MaxForce = (float)dVar1;
  dVar1 = (param_3->field0_0x0)._s_0.Y;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  (this->YDrive).Damping = (float)(param_2->field0_0x0)._s_0.Y;
  (this->YDrive).Stiffness = (float)dVar2;
  (this->YDrive).MaxForce = (float)dVar1;
  dVar1 = (param_3->field0_0x0)._s_0.Z;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  (this->ZDrive).Damping = (float)(param_2->field0_0x0)._s_0.Z;
  (this->ZDrive).Stiffness = (float)dVar2;
  (this->ZDrive).MaxForce = (float)dVar1;
  return;
}

// SetDriveParams @ 1482aaba0

void __thiscall
FLinearDriveConstraint::SetDriveParams
          (FLinearDriveConstraint *this,float param_1,float param_2,float param_3)

{
  (this->XDrive).Stiffness = param_1;
  (this->XDrive).Damping = param_2;
  (this->XDrive).MaxForce = param_3;
  (this->YDrive).Stiffness = param_1;
  (this->YDrive).Damping = param_2;
  (this->YDrive).MaxForce = param_3;
  (this->ZDrive).Stiffness = param_1;
  (this->ZDrive).Damping = param_2;
  (this->ZDrive).MaxForce = param_3;
  return;
}

// SetLinearPositionDrive @ 1482ac270

void __thiscall
FLinearDriveConstraint::SetLinearPositionDrive
          (FLinearDriveConstraint *this,bool param_1,bool param_2,bool param_3)

{
  undefined1 *puVar1;
  
  (this->XDrive).bEnablePositionDrive = '\0';
  (this->YDrive).bEnablePositionDrive = '\0';
  (this->ZDrive).bEnablePositionDrive = '\0';
  puVar1 = &(this->XDrive).field_0xc;
  *puVar1 = *puVar1 | param_1;
  puVar1 = &(this->YDrive).field_0xc;
  *puVar1 = *puVar1 | param_2;
  puVar1 = &(this->ZDrive).field_0xc;
  *puVar1 = *puVar1 | param_3;
  return;
}

// SetLinearVelocityDrive @ 1482ac6b0

void __thiscall
FLinearDriveConstraint::SetLinearVelocityDrive
          (FLinearDriveConstraint *this,bool param_1,bool param_2,bool param_3)

{
  undefined1 *puVar1;
  
  (this->XDrive).bEnableVelocityDrive = '\0';
  (this->YDrive).bEnableVelocityDrive = '\0';
  (this->ZDrive).bEnableVelocityDrive = '\0';
  puVar1 = &(this->XDrive).field_0xc;
  *puVar1 = *puVar1 | param_1 * '\x02';
  puVar1 = &(this->YDrive).field_0xc;
  *puVar1 = *puVar1 | param_2 * '\x02';
  puVar1 = &(this->ZDrive).field_0xc;
  *puVar1 = *puVar1 | param_3 * '\x02';
  return;
}

