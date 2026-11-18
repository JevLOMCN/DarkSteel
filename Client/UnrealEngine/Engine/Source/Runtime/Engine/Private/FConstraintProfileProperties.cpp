// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticStruct @ 14822c960

UScriptStruct * __cdecl FConstraintProfileProperties::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FConstraintProfileProperties.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FConstraintProfileProperties.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FConstraintProfileProperties,(UObject *)pUVar1,
                         L"ConstraintProfileProperties");
  }
  return Z_Registration_Info_UScriptStruct_FConstraintProfileProperties.OuterSingleton;
}

// FConstraintProfileProperties @ 14824e870

FConstraintProfileProperties * __thiscall
FConstraintProfileProperties::FConstraintProfileProperties(FConstraintProfileProperties *this)

{
  int *piVar1;
  undefined1 *puVar2;
  
  puVar2 = &(this->LinearLimit).field_0x10;
  *puVar2 = *puVar2 & 0xfe;
  piVar1 = &(this->ConeLimit)._padding_;
  *(byte *)piVar1 = (byte)*piVar1 | 1;
  puVar2 = &(this->TwistLimit).field_0x10;
  *puVar2 = *puVar2 | 1;
  this->bLinearBreakable = '\0';
  this->bLinearPlasticity = '\0';
  (this->LinearDrive).XDrive.bEnablePositionDrive = '\0';
  (this->LinearDrive).XDrive.bEnableVelocityDrive = '\0';
  (this->LinearDrive).YDrive.bEnablePositionDrive = '\0';
  (this->LinearDrive).YDrive.bEnableVelocityDrive = '\0';
  (this->LinearDrive).ZDrive.bEnablePositionDrive = '\0';
  (this->LinearDrive).ZDrive.bEnableVelocityDrive = '\0';
  (this->AngularDrive).TwistDrive.bEnablePositionDrive = '\0';
  (this->AngularDrive).TwistDrive.bEnableVelocityDrive = '\0';
  (this->AngularDrive).SwingDrive.bEnablePositionDrive = '\0';
  (this->AngularDrive).SwingDrive.bEnableVelocityDrive = '\0';
  (this->AngularDrive).SlerpDrive.bEnablePositionDrive = '\0';
  (this->AngularDrive).SlerpDrive.bEnableVelocityDrive = '\0';
  *(undefined4 *)&(this->LinearLimit).field_0x8 = 0;
  (this->LinearLimit).Limit = 0.0;
  *(undefined8 *)&this->LinearLimit = 0;
  (this->ConeLimit).Swing1Motion = '\0';
  (this->ConeLimit).Swing2Motion = '\0';
  (this->TwistLimit).TwistMotion.Value = '\0';
  (this->LinearDrive).PositionTarget.field0_0x0._s_0.X = 0.0;
  (this->LinearDrive).PositionTarget.field0_0x0._s_0.Y = 0.0;
  (this->LinearDrive).PositionTarget.field0_0x0._s_0.Z = 0.0;
  (this->LinearDrive).VelocityTarget.field0_0x0._s_0.X = 0.0;
  (this->LinearDrive).VelocityTarget.field0_0x0._s_0.Y = 0.0;
  (this->LinearDrive).VelocityTarget.field0_0x0._s_0.Z = 0.0;
  (this->AngularDrive).OrientationTarget.Pitch = 0.0;
  (this->AngularDrive).OrientationTarget.Yaw = 0.0;
  (this->AngularDrive).OrientationTarget.Roll = 0.0;
  (this->AngularDrive).AngularVelocityTarget.field0_0x0._s_0.X = 0.0;
  (this->AngularDrive).AngularVelocityTarget.field0_0x0._s_0.Y = 0.0;
  (this->AngularDrive).AngularVelocityTarget.field0_0x0._s_0.Z = 0.0;
  (this->LinearPlasticityType).Value = '\0';
  this->ProjectionLinearTolerance = 5.0;
  this->ProjectionAngularTolerance = 180.0;
  this->ProjectionLinearAlpha = 1.0;
  this->ProjectionAngularAlpha = 0.0;
  this->ShockPropagationAlpha = 0.3;
  this->LinearBreakThreshold = 300.0;
  this->LinearPlasticityThreshold = 0.1;
  this->AngularBreakThreshold = 500.0;
  this->AngularPlasticityThreshold = 10.0;
  this->ContactTransferScale = 0.0;
  (this->LinearLimit).XMotion = '\x02';
  (this->LinearLimit).YMotion = '\x02';
  (this->LinearLimit).ZMotion.Value = '\x02';
  *(undefined4 *)&(this->LinearLimit).field_0xc = 0x40a00000;
  *(undefined4 *)&(this->ConeLimit)._padding_ = 0x42480000;
  *(undefined8 *)((longlong)&(this->ConeLimit)._padding_ + 4) = 0x40a00000;
  (this->ConeLimit).Swing1LimitDegrees = 45.0;
  (this->ConeLimit).Swing2LimitDegrees = 45.0;
  *(undefined4 *)((longlong)&(this->ConeLimit)._padding_ + 4) = 0x3f800000;
  *(undefined4 *)&this->TwistLimit = 0x42480000;
  *(undefined8 *)&(this->TwistLimit).field_0x4 = 0x40a00000;
  (this->TwistLimit).TwistLimitDegrees = 45.0;
  *(undefined4 *)&(this->TwistLimit).field_0xc = 0x3f800000;
  puVar2 = &this->field_0x80;
  this->bDisableCollision = '\0';
  this->bAngularPlasticity = '\0';
  this->bAngularBreakable = '\0';
  this->bUseLinearJointSolver = '\x01';
  this->bEnableMassConditioning = '\x01';
  this->bEnableProjection = '\x01';
  this->bEnableShockPropagation = '\0';
  this->bParentDominates = '\0';
  (this->LinearDrive).XDrive.Stiffness = 50.0;
  (this->LinearDrive).XDrive.Damping = 1.0;
  (this->LinearDrive).XDrive.MaxForce = 0.0;
  (this->LinearDrive).YDrive.Stiffness = 50.0;
  (this->LinearDrive).YDrive.Damping = 1.0;
  (this->LinearDrive).YDrive.MaxForce = 0.0;
  (this->LinearDrive).ZDrive.Stiffness = 50.0;
  (this->LinearDrive).ZDrive.Damping = 1.0;
  (this->LinearDrive).ZDrive.MaxForce = 0.0;
  (this->LinearDrive).bAccelerationMode = true;
  (this->AngularDrive).TwistDrive.Stiffness = 50.0;
  (this->AngularDrive).TwistDrive.Damping = 1.0;
  (this->AngularDrive).TwistDrive.MaxForce = 0.0;
  (this->AngularDrive).SwingDrive.Stiffness = 50.0;
  (this->AngularDrive).SwingDrive.Damping = 1.0;
  (this->AngularDrive).SwingDrive.MaxForce = 0.0;
  (this->AngularDrive).SlerpDrive.Stiffness = 50.0;
  (this->AngularDrive).SlerpDrive.Damping = 1.0;
  (this->AngularDrive).SlerpDrive.MaxForce = 0.0;
  (this->AngularDrive).AngularDriveMode = '\0';
  (this->AngularDrive).bAccelerationMode = true;
  return this;
}

// UpdateBreakable_AssumesLocked @ 1482b74c0

void __thiscall
FConstraintProfileProperties::UpdateBreakable_AssumesLocked
          (FConstraintProfileProperties *this,FPhysicsConstraintReference_Chaos *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = __real_7f7fffff;
  if (this->bLinearBreakable != 0) {
    fVar1 = this->LinearBreakThreshold;
  }
  fVar2 = __real_7f7fffff;
  if (this->bAngularBreakable != '\0') {
    fVar2 = this->AngularBreakThreshold;
  }
  FChaosEngineInterface::SetBreakForces_AssumesLocked(param_1,fVar1,fVar2);
  return;
}

// UpdateConstraintFlags_AssumesLocked @ 1482b7760

void __thiscall
FConstraintProfileProperties::UpdateConstraintFlags_AssumesLocked
          (FConstraintProfileProperties *this,FPhysicsConstraintReference_Chaos *param_1)

{
  FChaosEngineInterface::SetCanVisualize(param_1,true);
  FChaosEngineInterface::SetCollisionEnabled(param_1,(bool)(~this->bDisableCollision & 1));
  FChaosEngineInterface::SetProjectionEnabled_AssumesLocked
            (param_1,this->bEnableProjection,this->ProjectionLinearAlpha,
             this->ProjectionAngularAlpha,this->ProjectionLinearTolerance,
             this->ProjectionAngularTolerance);
  FChaosEngineInterface::SetShockPropagationEnabled_AssumesLocked
            (param_1,this->bEnableShockPropagation,this->ShockPropagationAlpha);
  FChaosEngineInterface::SetParentDominates_AssumesLocked(param_1,this->bParentDominates);
  FChaosEngineInterface::SetMassConditioningEnabled_AssumesLocked
            (param_1,this->bEnableMassConditioning);
  FChaosEngineInterface::SetUseLinearJointSolver_AssumesLocked(param_1,this->bUseLinearJointSolver);
  return;
}

// UpdateContactTransferScale_AssumesLocked @ 1482b7890

void __thiscall
FConstraintProfileProperties::UpdateContactTransferScale_AssumesLocked
          (FConstraintProfileProperties *this,FPhysicsConstraintReference_Chaos *param_1)

{
  FChaosEngineInterface::SetContactTransferScale_AssumesLocked(param_1,this->ContactTransferScale);
  return;
}

// UpdatePlasticity_AssumesLocked @ 1482bd290

void __thiscall
FConstraintProfileProperties::UpdatePlasticity_AssumesLocked
          (FConstraintProfileProperties *this,FPhysicsConstraintReference_Chaos *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = __real_7f7fffff;
  if (this->bLinearPlasticity != '\0') {
    fVar1 = this->LinearPlasticityThreshold;
  }
  fVar2 = __real_7f7fffff;
  if ((bool)this->bAngularPlasticity) {
    fVar2 = this->AngularPlasticityThreshold * __real_3c8efa35;
  }
  FChaosEngineInterface::SetPlasticityLimits_AssumesLocked
            (param_1,fVar1,fVar2,(uint)(this->LinearPlasticityType).Value);
  return;
}

// Update_AssumesLocked @ 1482bdfc0

void __thiscall
FConstraintProfileProperties::Update_AssumesLocked
          (FConstraintProfileProperties *this,FPhysicsConstraintReference_Chaos *param_1,
          float param_2,float param_3,bool param_4)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  FChaosEngineInterface::SetCanVisualize(param_1,true);
  FChaosEngineInterface::SetCollisionEnabled(param_1,(bool)(~this->bDisableCollision & 1));
  FChaosEngineInterface::SetProjectionEnabled_AssumesLocked
            (param_1,this->bEnableProjection,this->ProjectionLinearAlpha,
             this->ProjectionAngularAlpha,this->ProjectionLinearTolerance,
             this->ProjectionAngularTolerance);
  FChaosEngineInterface::SetShockPropagationEnabled_AssumesLocked
            (param_1,this->bEnableShockPropagation,this->ShockPropagationAlpha);
  FChaosEngineInterface::SetParentDominates_AssumesLocked(param_1,this->bParentDominates);
  FChaosEngineInterface::SetMassConditioningEnabled_AssumesLocked
            (param_1,this->bEnableMassConditioning);
  FChaosEngineInterface::SetUseLinearJointSolver_AssumesLocked(param_1,this->bUseLinearJointSolver);
  FLinearConstraint::UpdateLinearLimit_AssumesLocked(&this->LinearLimit,param_1,param_2,param_3);
  FConeConstraint::UpdateConeLimit_AssumesLocked(&this->ConeLimit,param_1,param_2);
  FTwistConstraint::UpdateTwistLimit_AssumesLocked(&this->TwistLimit,param_1,param_2);
  fVar4 = __real_7f7fffff;
  fVar2 = __real_7f7fffff;
  if (this->bLinearBreakable != 0) {
    fVar2 = this->LinearBreakThreshold;
  }
  fVar3 = __real_7f7fffff;
  if (this->bAngularBreakable != '\0') {
    fVar3 = this->AngularBreakThreshold;
  }
  FChaosEngineInterface::SetBreakForces_AssumesLocked(param_1,fVar2,fVar3);
  fVar2 = fVar4;
  if (this->bLinearPlasticity != '\0') {
    fVar2 = this->LinearPlasticityThreshold;
  }
  if ((bool)this->bAngularPlasticity) {
    fVar4 = this->AngularPlasticityThreshold * __real_3c8efa35;
  }
  FChaosEngineInterface::SetPlasticityLimits_AssumesLocked
            (param_1,fVar2,fVar4,(uint)(this->LinearPlasticityType).Value);
  FChaosEngineInterface::SetContactTransferScale_AssumesLocked(param_1,this->ContactTransferScale);
  bVar1 = FPhysicsConstraintReference_Chaos::IsValid(param_1);
  if (bVar1) {
    FPhysInterface_Chaos::UpdateLinearDrive_AssumesLocked(param_1,&this->LinearDrive,param_4);
    FPhysInterface_Chaos::UpdateAngularDrive_AssumesLocked(param_1,&this->AngularDrive,param_4);
  }
  return;
}

