// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsControl
// Functions: 2

// FRigidBodyModifierRecord @ 14d9bf7f0

FRigidBodyModifierRecord * __thiscall
FRigidBodyModifierRecord::FRigidBodyModifierRecord
          (FRigidBodyModifierRecord *this,FPhysicsBodyModifier *param_1,FActorHandle *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined3 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  float fVar9;
  EPhysicsMovementType EVar10;
  TEnumAsByte<ECollisionEnabled::Type> TVar11;
  EPhysicsControlKinematicTargetSpace EVar12;
  undefined1 uVar13;
  undefined4 uVar3;
  
  EVar10 = (param_1->ModifierData).MovementType;
  TVar11.Value = (param_1->ModifierData).CollisionType.Value;
  EVar12 = (param_1->ModifierData).KinematicTargetSpace;
  uVar13 = (param_1->ModifierData).field_0x3;
  fVar9 = (param_1->ModifierData).GravityMultiplier;
  (this->Modifier).BoneName = param_1->BoneName;
  (this->Modifier).ModifierData.MovementType = EVar10;
  (this->Modifier).ModifierData.CollisionType = (TEnumAsByte<ECollisionEnabled::Type>)TVar11.Value;
  (this->Modifier).ModifierData.KinematicTargetSpace = EVar12;
  (this->Modifier).ModifierData.field_0x3 = uVar13;
  (this->Modifier).ModifierData.GravityMultiplier = fVar9;
  uVar1 = (param_1->ModifierData).PhysicsBlendWeight;
  uVar2 = (param_1->ModifierData).bUpdateKinematicFromSimulation;
  uVar4 = *(undefined3 *)&(param_1->ModifierData).field_0xd;
  uVar3 = CONCAT31(uVar4,uVar2);
  uVar5 = (this->Modifier).ModifierData.MovementType;
  uVar6 = (this->Modifier).ModifierData.CollisionType;
  uVar7 = (this->Modifier).ModifierData.KinematicTargetSpace;
  uVar8 = (this->Modifier).ModifierData.field_0x3;
  fVar9 = (this->Modifier).ModifierData.GravityMultiplier;
  this->ActorHandle = param_2;
  (this->Modifier).ModifierData.MovementType = uVar5;
  (this->Modifier).ModifierData.CollisionType = (TEnumAsByte<ECollisionEnabled::Type>)uVar6;
  (this->Modifier).ModifierData.KinematicTargetSpace = uVar7;
  (this->Modifier).ModifierData.field_0x3 = uVar8;
  (this->Modifier).ModifierData.GravityMultiplier = fVar9;
  (this->Modifier).ModifierData.PhysicsBlendWeight = (float)uVar1;
  *(undefined4 *)&(this->Modifier).ModifierData.bUpdateKinematicFromSimulation = uVar3;
  (this->ModifierData).MovementType = uVar5;
  (this->ModifierData).CollisionType = (TEnumAsByte<ECollisionEnabled::Type>)uVar6;
  (this->ModifierData).KinematicTargetSpace = uVar7;
  (this->ModifierData).field_0x3 = uVar8;
  (this->ModifierData).GravityMultiplier = fVar9;
  (this->ModifierData).PhysicsBlendWeight = (float)uVar1;
  *(undefined4 *)&(this->ModifierData).bUpdateKinematicFromSimulation = uVar3;
  return this;
}

// ResetCurrent @ 14d9e8760

void __thiscall FRigidBodyModifierRecord::ResetCurrent(FRigidBodyModifierRecord *this)

{
  TEnumAsByte<ECollisionEnabled::Type> TVar1;
  EPhysicsControlKinematicTargetSpace EVar2;
  undefined1 uVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  undefined3 uVar7;
  
  TVar1.Value = (this->Modifier).ModifierData.CollisionType.Value;
  EVar2 = (this->Modifier).ModifierData.KinematicTargetSpace;
  uVar3 = (this->Modifier).ModifierData.field_0x3;
  fVar4 = (this->Modifier).ModifierData.GravityMultiplier;
  fVar5 = (this->Modifier).ModifierData.PhysicsBlendWeight;
  bVar6 = (this->Modifier).ModifierData.bUpdateKinematicFromSimulation;
  uVar7 = *(undefined3 *)&(this->Modifier).ModifierData.field_0xd;
  (this->ModifierData).MovementType = (this->Modifier).ModifierData.MovementType;
  (this->ModifierData).CollisionType = (TEnumAsByte<ECollisionEnabled::Type>)TVar1.Value;
  (this->ModifierData).KinematicTargetSpace = EVar2;
  (this->ModifierData).field_0x3 = uVar3;
  (this->ModifierData).GravityMultiplier = fVar4;
  (this->ModifierData).PhysicsBlendWeight = fVar5;
  (this->ModifierData).bUpdateKinematicFromSimulation = bVar6;
  *(undefined3 *)&(this->ModifierData).field_0xd = uVar7;
  return;
}

