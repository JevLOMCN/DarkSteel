// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsControl
// Functions: 2

// StaticStruct @ 14d9b1200

UScriptStruct * __cdecl FPhysicsControl::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPhysicsControl.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PhysicsControl();
    Z_Registration_Info_UScriptStruct_FPhysicsControl.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPhysicsControl,(UObject *)pUVar1,
                         L"PhysicsControl");
  }
  return Z_Registration_Info_UScriptStruct_FPhysicsControl.OuterSingleton;
}

// FPhysicsControl @ 14d9bf1b0

FPhysicsControl * __thiscall FPhysicsControl::FPhysicsControl(FPhysicsControl *this)

{
  undefined8 uVar1;
  
  (this->ControlData).bEnabled = true;
  (this->ParentBoneName).ComparisonIndex = 0;
  (this->ParentBoneName).Number = 0;
  (this->ChildBoneName).ComparisonIndex = 0;
  (this->ChildBoneName).Number = 0;
  (this->ControlData).LinearStrength = 0.0;
  (this->ControlData).MaxForce = 0.0;
  (this->ControlData).AngularStrength = 0.0;
  (this->ControlData).MaxTorque = 0.0;
  (this->ControlData).LinearDampingRatio = 1.0;
  (this->ControlData).LinearExtraDamping = 0.0;
  (this->ControlData).AngularDampingRatio = 1.0;
  (this->ControlData).AngularExtraDamping = 0.0;
  (this->ControlData).LinearTargetVelocityMultiplier = 1.0;
  (this->ControlData).AngularTargetVelocityMultiplier = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ControlData).CustomControlPoint.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ControlData).CustomControlPoint.field0_0x0._s_0.Y = (double)uVar1;
  (this->ControlData).CustomControlPoint.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->ControlData).bUseCustomControlPoint = false;
  (this->ControlData).bUseSkeletalAnimation = true;
  (this->ControlData).bDisableCollision = false;
  (this->ControlData).bOnlyControlChildObject = false;
  (this->ControlMultiplier).LinearStrengthMultiplier.field0_0x0._s_0.X = 1.0;
  (this->ControlMultiplier).LinearStrengthMultiplier.field0_0x0._s_0.Y = 1.0;
  (this->ControlMultiplier).LinearStrengthMultiplier.field0_0x0._s_0.Z = 1.0;
  (this->ControlMultiplier).LinearDampingRatioMultiplier.field0_0x0._s_0.X = 1.0;
  (this->ControlMultiplier).LinearDampingRatioMultiplier.field0_0x0._s_0.Y = 1.0;
  (this->ControlMultiplier).LinearDampingRatioMultiplier.field0_0x0._s_0.Z = 1.0;
  (this->ControlMultiplier).LinearExtraDampingMultiplier.field0_0x0._s_0.X = 1.0;
  (this->ControlMultiplier).LinearExtraDampingMultiplier.field0_0x0._s_0.Y = 1.0;
  (this->ControlMultiplier).LinearExtraDampingMultiplier.field0_0x0._s_0.Z = 1.0;
  (this->ControlMultiplier).MaxForceMultiplier.field0_0x0._s_0.X = 1.0;
  (this->ControlMultiplier).MaxForceMultiplier.field0_0x0._s_0.Y = 1.0;
  (this->ControlMultiplier).MaxForceMultiplier.field0_0x0._s_0.Z = 1.0;
  (this->ControlMultiplier).AngularStrengthMultiplier = 1.0;
  (this->ControlMultiplier).AngularDampingRatioMultiplier = 1.0;
  (this->ControlMultiplier).AngularExtraDampingMultiplier = 1.0;
  (this->ControlMultiplier).MaxTorqueMultiplier = 1.0;
  return this;
}

