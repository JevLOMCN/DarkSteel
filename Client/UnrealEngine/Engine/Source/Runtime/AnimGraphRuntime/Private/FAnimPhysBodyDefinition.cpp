// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 3

// StaticStruct @ 1463e1550

UScriptStruct * __cdecl FAnimPhysBodyDefinition::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimPhysBodyDefinition.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimPhysBodyDefinition.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimPhysBodyDefinition,(UObject *)pUVar1,
                         L"AnimPhysBodyDefinition");
  }
  return Z_Registration_Info_UScriptStruct_FAnimPhysBodyDefinition.OuterSingleton;
}

// FAnimPhysBodyDefinition @ 146406410

FAnimPhysBodyDefinition * __thiscall
FAnimPhysBodyDefinition::FAnimPhysBodyDefinition(FAnimPhysBodyDefinition *this)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  
  (this->BoundBone).BoneName.ComparisonIndex = 0;
  (this->BoundBone).BoneName.Number = 0;
  puVar1 = &(this->BoundBone).field_0x8;
  (this->BoundBone).BoneIndex = -1;
  (this->BoundBone).bUseSkeletonIndex = 0;
  (this->BoundBone).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  (this->BoxExtents).field0_0x0._s_0.X = 10.0;
  (this->BoxExtents).field0_0x0._s_0.Y = 10.0;
  (this->BoxExtents).field0_0x0._s_0.Z = 10.0;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LocalJointOffset).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LocalJointOffset).field0_0x0._s_0.Y = (double)uVar2;
  (this->LocalJointOffset).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->ConstraintSetup).LinearXLimitType = Limited;
  (this->ConstraintSetup).LinearYLimitType = Limited;
  (this->ConstraintSetup).LinearZLimitType = Limited;
  (this->ConstraintSetup).bLinearFullyLocked = false;
  (this->ConstraintSetup).LinearAxesMin.field0_0x0._s_0.X = 0.0;
  (this->ConstraintSetup).LinearAxesMin.field0_0x0._s_0.Y = 0.0;
  (this->ConstraintSetup).LinearAxesMin.field0_0x0._s_0.Z = 0.0;
  (this->ConstraintSetup).LinearAxesMax.field0_0x0._s_0.X = 0.0;
  (this->ConstraintSetup).LinearAxesMax.field0_0x0._s_0.Y = 0.0;
  (this->ConstraintSetup).LinearAxesMax.field0_0x0._s_0.Z = 0.0;
  (this->ConstraintSetup).AngularConstraintType = Angular;
  (this->ConstraintSetup).TwistAxis = AxisX;
  (this->ConstraintSetup).AngularTargetAxis = AxisX;
  (this->ConstraintSetup).ConeAngle = 0.0;
  (this->ConstraintSetup).AngularLimitsMin.field0_0x0._s_0.X = 0.0;
  (this->ConstraintSetup).AngularLimitsMin.field0_0x0._s_0.Y = 0.0;
  (this->ConstraintSetup).AngularLimitsMin.field0_0x0._s_0.Z = 0.0;
  (this->ConstraintSetup).AngularLimitsMax.field0_0x0._s_0.X = 0.0;
  (this->ConstraintSetup).AngularLimitsMax.field0_0x0._s_0.Y = 0.0;
  (this->ConstraintSetup).AngularLimitsMax.field0_0x0._s_0.Z = 0.0;
  (this->ConstraintSetup).AngularTarget.field0_0x0._s_0.X = 0.0;
  (this->ConstraintSetup).AngularTarget.field0_0x0._s_0.Y = 0.0;
  (this->ConstraintSetup).AngularTarget.field0_0x0._s_0.Z = 0.0;
  this->CollisionType = CoM;
  this->SphereCollisionRadius = 10.0;
  return this;
}

// operator= @ 14640c8a0

FAnimPhysBodyDefinition * __thiscall
FAnimPhysBodyDefinition::operator=(FAnimPhysBodyDefinition *this,FAnimPhysBodyDefinition *param_1)

{
  undefined4 uVar1;
  double dVar2;
  AnimPhysLinearConstraintType AVar3;
  AnimPhysLinearConstraintType AVar4;
  bool bVar5;
  AnimPhysAngularConstraintType AVar6;
  AnimPhysTwistAxis AVar7;
  AnimPhysTwistAxis AVar8;
  undefined1 uVar9;
  float fVar10;
  
  (this->BoundBone).BoneName = (param_1->BoundBone).BoneName;
  uVar1 = *(undefined4 *)&(param_1->BoundBone).field_0x8;
  *(uint *)&(this->BoundBone).field_0x8 =
       (uVar1 ^ *(uint *)&(this->BoundBone).field_0x8) & 0x80000000 ^ uVar1;
  *(uint *)&(this->BoundBone).field_0x8 =
       ((param_1->BoundBone).BoneIndex ^ SPULL(uVar1,0,0x1f)) & 0x7fffffffU ^
       *(uint *)&(param_1->BoundBone).field_0x8;
  (this->BoundBone).CachedCompactPoseIndex = (param_1->BoundBone).CachedCompactPoseIndex;
  dVar2 = (param_1->BoxExtents).field0_0x0._s_0.Y;
  (this->BoxExtents).field0_0x0._s_0.X = (param_1->BoxExtents).field0_0x0._s_0.X;
  (this->BoxExtents).field0_0x0._s_0.Y = dVar2;
  (this->BoxExtents).field0_0x0._s_0.Z = (param_1->BoxExtents).field0_0x0._s_0.Z;
  dVar2 = (param_1->LocalJointOffset).field0_0x0._s_0.Y;
  (this->LocalJointOffset).field0_0x0._s_0.X = (param_1->LocalJointOffset).field0_0x0._s_0.X;
  (this->LocalJointOffset).field0_0x0._s_0.Y = dVar2;
  (this->LocalJointOffset).field0_0x0._s_0.Z = (param_1->LocalJointOffset).field0_0x0._s_0.Z;
  AVar3 = (param_1->ConstraintSetup).LinearYLimitType;
  AVar4 = (param_1->ConstraintSetup).LinearZLimitType;
  bVar5 = (param_1->ConstraintSetup).bLinearFullyLocked;
  uVar1 = *(undefined4 *)&(param_1->ConstraintSetup).field_0x4;
  dVar2 = (param_1->ConstraintSetup).LinearAxesMin.field0_0x0._s_0.X;
  (this->ConstraintSetup).LinearXLimitType = (param_1->ConstraintSetup).LinearXLimitType;
  (this->ConstraintSetup).LinearYLimitType = AVar3;
  (this->ConstraintSetup).LinearZLimitType = AVar4;
  (this->ConstraintSetup).bLinearFullyLocked = bVar5;
  *(undefined4 *)&(this->ConstraintSetup).field_0x4 = uVar1;
  (this->ConstraintSetup).LinearAxesMin.field0_0x0._s_0.X = dVar2;
  dVar2 = (param_1->ConstraintSetup).LinearAxesMin.field0_0x0._s_0.Z;
  (this->ConstraintSetup).LinearAxesMin.field0_0x0._s_0.Y =
       (param_1->ConstraintSetup).LinearAxesMin.field0_0x0._s_0.Y;
  (this->ConstraintSetup).LinearAxesMin.field0_0x0._s_0.Z = dVar2;
  dVar2 = (param_1->ConstraintSetup).LinearAxesMax.field0_0x0._s_0.Y;
  (this->ConstraintSetup).LinearAxesMax.field0_0x0._s_0.X =
       (param_1->ConstraintSetup).LinearAxesMax.field0_0x0._s_0.X;
  (this->ConstraintSetup).LinearAxesMax.field0_0x0._s_0.Y = dVar2;
  AVar6 = (param_1->ConstraintSetup).AngularConstraintType;
  AVar7 = (param_1->ConstraintSetup).TwistAxis;
  AVar8 = (param_1->ConstraintSetup).AngularTargetAxis;
  uVar9 = (param_1->ConstraintSetup).field_0x3b;
  fVar10 = (param_1->ConstraintSetup).ConeAngle;
  (this->ConstraintSetup).LinearAxesMax.field0_0x0._s_0.Z =
       (param_1->ConstraintSetup).LinearAxesMax.field0_0x0._s_0.Z;
  (this->ConstraintSetup).AngularConstraintType = AVar6;
  (this->ConstraintSetup).TwistAxis = AVar7;
  (this->ConstraintSetup).AngularTargetAxis = AVar8;
  (this->ConstraintSetup).field_0x3b = uVar9;
  (this->ConstraintSetup).ConeAngle = fVar10;
  dVar2 = (param_1->ConstraintSetup).AngularLimitsMin.field0_0x0._s_0.Y;
  (this->ConstraintSetup).AngularLimitsMin.field0_0x0._s_0.X =
       (param_1->ConstraintSetup).AngularLimitsMin.field0_0x0._s_0.X;
  (this->ConstraintSetup).AngularLimitsMin.field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->ConstraintSetup).AngularLimitsMax.field0_0x0._s_0.X;
  (this->ConstraintSetup).AngularLimitsMin.field0_0x0._s_0.Z =
       (param_1->ConstraintSetup).AngularLimitsMin.field0_0x0._s_0.Z;
  (this->ConstraintSetup).AngularLimitsMax.field0_0x0._s_0.X = dVar2;
  dVar2 = (param_1->ConstraintSetup).AngularLimitsMax.field0_0x0._s_0.Z;
  (this->ConstraintSetup).AngularLimitsMax.field0_0x0._s_0.Y =
       (param_1->ConstraintSetup).AngularLimitsMax.field0_0x0._s_0.Y;
  (this->ConstraintSetup).AngularLimitsMax.field0_0x0._s_0.Z = dVar2;
  dVar2 = (param_1->ConstraintSetup).AngularTarget.field0_0x0._s_0.Y;
  (this->ConstraintSetup).AngularTarget.field0_0x0._s_0.X =
       (param_1->ConstraintSetup).AngularTarget.field0_0x0._s_0.X;
  (this->ConstraintSetup).AngularTarget.field0_0x0._s_0.Y = dVar2;
  (this->ConstraintSetup).AngularTarget.field0_0x0._s_0.Z =
       (param_1->ConstraintSetup).AngularTarget.field0_0x0._s_0.Z;
  this->CollisionType = param_1->CollisionType;
  this->SphereCollisionRadius = param_1->SphereCollisionRadius;
  return this;
}

