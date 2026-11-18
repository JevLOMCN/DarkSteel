// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// FChaosVDConstraint @ 1436f5af0

FChaosVDConstraint * __thiscall
FChaosVDConstraint::FChaosVDConstraint(FChaosVDConstraint *this,FChaosVDConstraint *param_1)

{
  float fVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  
  bVar5 = (this->bIsCurrent ^ param_1->bIsCurrent) & 1 ^ *(byte *)this;
  *(byte *)this = bVar5;
  bVar5 = (bVar5 ^ *(byte *)param_1) & 2 ^ bVar5;
  *(byte *)this = bVar5;
  bVar5 = (bVar5 ^ *(byte *)param_1) & 4 ^ bVar5;
  *(byte *)this = bVar5;
  bVar5 = (bVar5 ^ *(byte *)param_1) & 8 ^ bVar5;
  *(byte *)this = bVar5;
  bVar5 = (bVar5 ^ *(byte *)param_1) & 0x10 ^ bVar5;
  *(byte *)this = bVar5;
  bVar5 = (bVar5 ^ *(byte *)param_1) & 0x20 ^ bVar5;
  *(byte *)this = bVar5;
  bVar5 = (bVar5 ^ *(byte *)param_1) & 0x40 ^ bVar5;
  *(byte *)this = bVar5;
  *(byte *)this = (bVar5 ^ *(byte *)param_1) & 0x7f ^ *(byte *)param_1;
  bVar5 = (this->bIsProbe ^ param_1->bIsProbe) & 1 ^ this->field_0x1;
  this->field_0x1 = bVar5;
  bVar5 = (bVar5 ^ param_1->field_0x1) & 2 ^ bVar5;
  this->field_0x1 = bVar5;
  bVar5 = (bVar5 ^ param_1->field_0x1) & 4 ^ bVar5;
  this->field_0x1 = bVar5;
  bVar5 = (bVar5 ^ param_1->field_0x1) & 8 ^ bVar5;
  this->field_0x1 = bVar5;
  this->field_0x1 = (bVar5 ^ param_1->field_0x1) & 0x10 ^ bVar5;
  fVar1 = (param_1->Material).MaterialDynamicFriction;
  fVar3 = (param_1->Material).MaterialStaticFriction;
  fVar4 = (param_1->Material).MaterialRestitution;
  (this->Material).FaceIndex = (param_1->Material).FaceIndex;
  (this->Material).MaterialDynamicFriction = fVar1;
  (this->Material).MaterialStaticFriction = fVar3;
  (this->Material).MaterialRestitution = fVar4;
  fVar1 = (param_1->Material).StaticFriction;
  fVar3 = (param_1->Material).Restitution;
  fVar4 = (param_1->Material).RestitutionThreshold;
  (this->Material).DynamicFriction = (param_1->Material).DynamicFriction;
  (this->Material).StaticFriction = fVar1;
  (this->Material).Restitution = fVar3;
  (this->Material).RestitutionThreshold = fVar4;
  fVar1 = (param_1->Material).InvMassScale1;
  fVar3 = (param_1->Material).InvInertiaScale0;
  fVar4 = (param_1->Material).InvInertiaScale1;
  (this->Material).InvMassScale0 = (param_1->Material).InvMassScale0;
  (this->Material).InvMassScale1 = fVar1;
  (this->Material).InvInertiaScale0 = fVar3;
  (this->Material).InvInertiaScale1 = fVar4;
  dVar2 = (param_1->AccumulatedImpulse).field0_0x0._s_0.Y;
  (this->AccumulatedImpulse).field0_0x0._s_0.X = (param_1->AccumulatedImpulse).field0_0x0._s_0.X;
  (this->AccumulatedImpulse).field0_0x0._s_0.Y = dVar2;
  (this->AccumulatedImpulse).field0_0x0._s_0.Z = (param_1->AccumulatedImpulse).field0_0x0._s_0.Z;
  this->ShapesType = param_1->ShapesType;
  dVar2 = param_1->ShapeWorldTransforms[0].Rotation.XY.m128d_f64[1];
  this->ShapeWorldTransforms[0].Rotation.XY.m128d_f64[0] =
       param_1->ShapeWorldTransforms[0].Rotation.XY.m128d_f64[0];
  this->ShapeWorldTransforms[0].Rotation.XY.m128d_f64[1] = dVar2;
  dVar2 = param_1->ShapeWorldTransforms[0].Rotation.ZW.m128d_f64[1];
  this->ShapeWorldTransforms[0].Rotation.ZW.m128d_f64[0] =
       param_1->ShapeWorldTransforms[0].Rotation.ZW.m128d_f64[0];
  this->ShapeWorldTransforms[0].Rotation.ZW.m128d_f64[1] = dVar2;
  dVar2 = param_1->ShapeWorldTransforms[0].Translation.XY.m128d_f64[1];
  this->ShapeWorldTransforms[0].Translation.XY.m128d_f64[0] =
       param_1->ShapeWorldTransforms[0].Translation.XY.m128d_f64[0];
  this->ShapeWorldTransforms[0].Translation.XY.m128d_f64[1] = dVar2;
  dVar2 = param_1->ShapeWorldTransforms[0].Translation.ZW.m128d_f64[1];
  this->ShapeWorldTransforms[0].Translation.ZW.m128d_f64[0] =
       param_1->ShapeWorldTransforms[0].Translation.ZW.m128d_f64[0];
  this->ShapeWorldTransforms[0].Translation.ZW.m128d_f64[1] = dVar2;
  dVar2 = param_1->ShapeWorldTransforms[0].Scale3D.XY.m128d_f64[1];
  this->ShapeWorldTransforms[0].Scale3D.XY.m128d_f64[0] =
       param_1->ShapeWorldTransforms[0].Scale3D.XY.m128d_f64[0];
  this->ShapeWorldTransforms[0].Scale3D.XY.m128d_f64[1] = dVar2;
  dVar2 = param_1->ShapeWorldTransforms[0].Scale3D.ZW.m128d_f64[1];
  this->ShapeWorldTransforms[0].Scale3D.ZW.m128d_f64[0] =
       param_1->ShapeWorldTransforms[0].Scale3D.ZW.m128d_f64[0];
  this->ShapeWorldTransforms[0].Scale3D.ZW.m128d_f64[1] = dVar2;
  dVar2 = param_1->ShapeWorldTransforms[1].Rotation.XY.m128d_f64[1];
  this->ShapeWorldTransforms[1].Rotation.XY.m128d_f64[0] =
       param_1->ShapeWorldTransforms[1].Rotation.XY.m128d_f64[0];
  this->ShapeWorldTransforms[1].Rotation.XY.m128d_f64[1] = dVar2;
  dVar2 = param_1->ShapeWorldTransforms[1].Rotation.ZW.m128d_f64[1];
  this->ShapeWorldTransforms[1].Rotation.ZW.m128d_f64[0] =
       param_1->ShapeWorldTransforms[1].Rotation.ZW.m128d_f64[0];
  this->ShapeWorldTransforms[1].Rotation.ZW.m128d_f64[1] = dVar2;
  dVar2 = param_1->ShapeWorldTransforms[1].Translation.XY.m128d_f64[1];
  this->ShapeWorldTransforms[1].Translation.XY.m128d_f64[0] =
       param_1->ShapeWorldTransforms[1].Translation.XY.m128d_f64[0];
  this->ShapeWorldTransforms[1].Translation.XY.m128d_f64[1] = dVar2;
  dVar2 = param_1->ShapeWorldTransforms[1].Translation.ZW.m128d_f64[1];
  this->ShapeWorldTransforms[1].Translation.ZW.m128d_f64[0] =
       param_1->ShapeWorldTransforms[1].Translation.ZW.m128d_f64[0];
  this->ShapeWorldTransforms[1].Translation.ZW.m128d_f64[1] = dVar2;
  dVar2 = param_1->ShapeWorldTransforms[1].Scale3D.XY.m128d_f64[1];
  this->ShapeWorldTransforms[1].Scale3D.XY.m128d_f64[0] =
       param_1->ShapeWorldTransforms[1].Scale3D.XY.m128d_f64[0];
  this->ShapeWorldTransforms[1].Scale3D.XY.m128d_f64[1] = dVar2;
  dVar2 = param_1->ShapeWorldTransforms[1].Scale3D.ZW.m128d_f64[1];
  this->ShapeWorldTransforms[1].Scale3D.ZW.m128d_f64[0] =
       param_1->ShapeWorldTransforms[1].Scale3D.ZW.m128d_f64[0];
  this->ShapeWorldTransforms[1].Scale3D.ZW.m128d_f64[1] = dVar2;
  dVar2 = param_1->ImplicitTransforms[0].Rotation.XY.m128d_f64[1];
  this->ImplicitTransforms[0].Rotation.XY.m128d_f64[0] =
       param_1->ImplicitTransforms[0].Rotation.XY.m128d_f64[0];
  this->ImplicitTransforms[0].Rotation.XY.m128d_f64[1] = dVar2;
  dVar2 = param_1->ImplicitTransforms[0].Rotation.ZW.m128d_f64[1];
  this->ImplicitTransforms[0].Rotation.ZW.m128d_f64[0] =
       param_1->ImplicitTransforms[0].Rotation.ZW.m128d_f64[0];
  this->ImplicitTransforms[0].Rotation.ZW.m128d_f64[1] = dVar2;
  dVar2 = param_1->ImplicitTransforms[0].Translation.XY.m128d_f64[1];
  this->ImplicitTransforms[0].Translation.XY.m128d_f64[0] =
       param_1->ImplicitTransforms[0].Translation.XY.m128d_f64[0];
  this->ImplicitTransforms[0].Translation.XY.m128d_f64[1] = dVar2;
  dVar2 = param_1->ImplicitTransforms[0].Translation.ZW.m128d_f64[1];
  this->ImplicitTransforms[0].Translation.ZW.m128d_f64[0] =
       param_1->ImplicitTransforms[0].Translation.ZW.m128d_f64[0];
  this->ImplicitTransforms[0].Translation.ZW.m128d_f64[1] = dVar2;
  dVar2 = param_1->ImplicitTransforms[0].Scale3D.XY.m128d_f64[1];
  this->ImplicitTransforms[0].Scale3D.XY.m128d_f64[0] =
       param_1->ImplicitTransforms[0].Scale3D.XY.m128d_f64[0];
  this->ImplicitTransforms[0].Scale3D.XY.m128d_f64[1] = dVar2;
  dVar2 = param_1->ImplicitTransforms[0].Scale3D.ZW.m128d_f64[1];
  this->ImplicitTransforms[0].Scale3D.ZW.m128d_f64[0] =
       param_1->ImplicitTransforms[0].Scale3D.ZW.m128d_f64[0];
  this->ImplicitTransforms[0].Scale3D.ZW.m128d_f64[1] = dVar2;
  dVar2 = param_1->ImplicitTransforms[1].Rotation.XY.m128d_f64[1];
  this->ImplicitTransforms[1].Rotation.XY.m128d_f64[0] =
       param_1->ImplicitTransforms[1].Rotation.XY.m128d_f64[0];
  this->ImplicitTransforms[1].Rotation.XY.m128d_f64[1] = dVar2;
  dVar2 = param_1->ImplicitTransforms[1].Rotation.ZW.m128d_f64[1];
  this->ImplicitTransforms[1].Rotation.ZW.m128d_f64[0] =
       param_1->ImplicitTransforms[1].Rotation.ZW.m128d_f64[0];
  this->ImplicitTransforms[1].Rotation.ZW.m128d_f64[1] = dVar2;
  dVar2 = param_1->ImplicitTransforms[1].Translation.XY.m128d_f64[1];
  this->ImplicitTransforms[1].Translation.XY.m128d_f64[0] =
       param_1->ImplicitTransforms[1].Translation.XY.m128d_f64[0];
  this->ImplicitTransforms[1].Translation.XY.m128d_f64[1] = dVar2;
  dVar2 = param_1->ImplicitTransforms[1].Translation.ZW.m128d_f64[1];
  this->ImplicitTransforms[1].Translation.ZW.m128d_f64[0] =
       param_1->ImplicitTransforms[1].Translation.ZW.m128d_f64[0];
  this->ImplicitTransforms[1].Translation.ZW.m128d_f64[1] = dVar2;
  dVar2 = param_1->ImplicitTransforms[1].Scale3D.XY.m128d_f64[1];
  this->ImplicitTransforms[1].Scale3D.XY.m128d_f64[0] =
       param_1->ImplicitTransforms[1].Scale3D.XY.m128d_f64[0];
  this->ImplicitTransforms[1].Scale3D.XY.m128d_f64[1] = dVar2;
  dVar2 = param_1->ImplicitTransforms[1].Scale3D.ZW.m128d_f64[1];
  this->ImplicitTransforms[1].Scale3D.ZW.m128d_f64[0] =
       param_1->ImplicitTransforms[1].Scale3D.ZW.m128d_f64[0];
  this->ImplicitTransforms[1].Scale3D.ZW.m128d_f64[1] = dVar2;
  fVar1 = param_1->CullDistance;
  (this->CollisionMargins).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->CullDistance = fVar1;
  (this->CollisionMargins).AllocatorInstance.Data =
       (param_1->CollisionMargins).AllocatorInstance.Data;
  (param_1->CollisionMargins).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CollisionMargins).ArrayNum = (param_1->CollisionMargins).ArrayNum;
  (this->CollisionMargins).ArrayMax = (param_1->CollisionMargins).ArrayMax;
  (param_1->CollisionMargins).ArrayNum = 0;
  (param_1->CollisionMargins).ArrayMax = 0;
  this->CollisionTolerance = param_1->CollisionTolerance;
  this->ClosestManifoldPointIndex = param_1->ClosestManifoldPointIndex;
  this->ExpectedNumManifoldPoints = param_1->ExpectedNumManifoldPoints;
  dVar2 = (param_1->LastShapeWorldPositionDelta).field0_0x0._s_0.Y;
  (this->LastShapeWorldPositionDelta).field0_0x0._s_0.X =
       (param_1->LastShapeWorldPositionDelta).field0_0x0._s_0.X;
  (this->LastShapeWorldPositionDelta).field0_0x0._s_0.Y = dVar2;
  (this->LastShapeWorldPositionDelta).field0_0x0._s_0.Z =
       (param_1->LastShapeWorldPositionDelta).field0_0x0._s_0.Z;
  dVar2 = (param_1->LastShapeWorldRotationDelta).Y;
  (this->LastShapeWorldRotationDelta).X = (param_1->LastShapeWorldRotationDelta).X;
  (this->LastShapeWorldRotationDelta).Y = dVar2;
  dVar2 = (param_1->LastShapeWorldRotationDelta).W;
  (this->LastShapeWorldRotationDelta).Z = (param_1->LastShapeWorldRotationDelta).Z;
  (this->LastShapeWorldRotationDelta).W = dVar2;
  this->Stiffness = param_1->Stiffness;
  this->MinInitialPhi = param_1->MinInitialPhi;
  this->InitialOverlapDepenetrationVelocity = param_1->InitialOverlapDepenetrationVelocity;
  this->CCDTimeOfImpact = param_1->CCDTimeOfImpact;
  this->CCDEnablePenetration = param_1->CCDEnablePenetration;
  fVar1 = param_1->CCDTargetPenetration;
  (this->ManifoldPoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->CCDTargetPenetration = fVar1;
  (this->ManifoldPoints).AllocatorInstance.Data = (param_1->ManifoldPoints).AllocatorInstance.Data;
  (param_1->ManifoldPoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ManifoldPoints).ArrayNum = (param_1->ManifoldPoints).ArrayNum;
  (this->ManifoldPoints).ArrayMax = (param_1->ManifoldPoints).ArrayMax;
  (param_1->ManifoldPoints).ArrayNum = 0;
  (param_1->ManifoldPoints).ArrayMax = 0;
  this->Particle0Index = param_1->Particle0Index;
  this->Particle1Index = param_1->Particle1Index;
  this->SolverID = param_1->SolverID;
  return this;
}

