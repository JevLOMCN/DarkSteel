// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosVDRuntime
// Functions: 5

// StaticStruct @ 1436ceaa0

UScriptStruct * __cdecl FChaosVDConstraint::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDConstraint.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UScriptStruct_FChaosVDConstraint.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDConstraint,(UObject *)pUVar1,
                         L"ChaosVDConstraint");
  }
  return Z_Registration_Info_UScriptStruct_FChaosVDConstraint.OuterSingleton;
}

// FChaosVDConstraint @ 1436d41c0

FChaosVDConstraint * __thiscall
FChaosVDConstraint::FChaosVDConstraint(FChaosVDConstraint *this,FChaosVDConstraint *param_1)

{
  int *piVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FChaosVDManifoldPoint,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  byte bVar10;
  
  bVar10 = (this->bIsCurrent ^ param_1->bIsCurrent) & 1 ^ *(byte *)this;
  *(byte *)this = bVar10;
  bVar10 = (bVar10 ^ *(byte *)param_1) & 2 ^ bVar10;
  *(byte *)this = bVar10;
  bVar10 = (bVar10 ^ *(byte *)param_1) & 4 ^ bVar10;
  *(byte *)this = bVar10;
  bVar10 = (bVar10 ^ *(byte *)param_1) & 8 ^ bVar10;
  *(byte *)this = bVar10;
  bVar10 = (bVar10 ^ *(byte *)param_1) & 0x10 ^ bVar10;
  *(byte *)this = bVar10;
  bVar10 = (bVar10 ^ *(byte *)param_1) & 0x20 ^ bVar10;
  *(byte *)this = bVar10;
  bVar10 = (bVar10 ^ *(byte *)param_1) & 0x40 ^ bVar10;
  *(byte *)this = bVar10;
  *(byte *)this = (bVar10 ^ *(byte *)param_1) & 0x7f ^ *(byte *)param_1;
  bVar10 = (this->bIsProbe ^ param_1->bIsProbe) & 1 ^ this->field_0x1;
  this->field_0x1 = bVar10;
  bVar10 = (bVar10 ^ param_1->field_0x1) & 2 ^ bVar10;
  this->field_0x1 = bVar10;
  bVar10 = (bVar10 ^ param_1->field_0x1) & 4 ^ bVar10;
  this->field_0x1 = bVar10;
  bVar10 = (bVar10 ^ param_1->field_0x1) & 8 ^ bVar10;
  this->field_0x1 = bVar10;
  this->field_0x1 = (bVar10 ^ param_1->field_0x1) & 0x10 ^ bVar10;
  fVar7 = (param_1->Material).MaterialDynamicFriction;
  fVar8 = (param_1->Material).MaterialStaticFriction;
  fVar9 = (param_1->Material).MaterialRestitution;
  (this->Material).FaceIndex = (param_1->Material).FaceIndex;
  (this->Material).MaterialDynamicFriction = fVar7;
  (this->Material).MaterialStaticFriction = fVar8;
  (this->Material).MaterialRestitution = fVar9;
  fVar7 = (param_1->Material).StaticFriction;
  fVar8 = (param_1->Material).Restitution;
  fVar9 = (param_1->Material).RestitutionThreshold;
  (this->Material).DynamicFriction = (param_1->Material).DynamicFriction;
  (this->Material).StaticFriction = fVar7;
  (this->Material).Restitution = fVar8;
  (this->Material).RestitutionThreshold = fVar9;
  fVar7 = (param_1->Material).InvMassScale1;
  fVar8 = (param_1->Material).InvInertiaScale0;
  fVar9 = (param_1->Material).InvInertiaScale1;
  (this->Material).InvMassScale0 = (param_1->Material).InvMassScale0;
  (this->Material).InvMassScale1 = fVar7;
  (this->Material).InvInertiaScale0 = fVar8;
  (this->Material).InvInertiaScale1 = fVar9;
  dVar6 = (param_1->AccumulatedImpulse).field0_0x0._s_0.Y;
  (this->AccumulatedImpulse).field0_0x0._s_0.X = (param_1->AccumulatedImpulse).field0_0x0._s_0.X;
  (this->AccumulatedImpulse).field0_0x0._s_0.Y = dVar6;
  (this->AccumulatedImpulse).field0_0x0._s_0.Z = (param_1->AccumulatedImpulse).field0_0x0._s_0.Z;
  this->ShapesType = param_1->ShapesType;
  dVar6 = param_1->ShapeWorldTransforms[0].Rotation.XY.m128d_f64[1];
  this->ShapeWorldTransforms[0].Rotation.XY.m128d_f64[0] =
       param_1->ShapeWorldTransforms[0].Rotation.XY.m128d_f64[0];
  this->ShapeWorldTransforms[0].Rotation.XY.m128d_f64[1] = dVar6;
  dVar6 = param_1->ShapeWorldTransforms[0].Rotation.ZW.m128d_f64[1];
  this->ShapeWorldTransforms[0].Rotation.ZW.m128d_f64[0] =
       param_1->ShapeWorldTransforms[0].Rotation.ZW.m128d_f64[0];
  this->ShapeWorldTransforms[0].Rotation.ZW.m128d_f64[1] = dVar6;
  dVar6 = param_1->ShapeWorldTransforms[0].Translation.XY.m128d_f64[1];
  pTVar2 = &this->CollisionMargins;
  this->ShapeWorldTransforms[0].Translation.XY.m128d_f64[0] =
       param_1->ShapeWorldTransforms[0].Translation.XY.m128d_f64[0];
  this->ShapeWorldTransforms[0].Translation.XY.m128d_f64[1] = dVar6;
  dVar6 = param_1->ShapeWorldTransforms[0].Translation.ZW.m128d_f64[1];
  this->ShapeWorldTransforms[0].Translation.ZW.m128d_f64[0] =
       param_1->ShapeWorldTransforms[0].Translation.ZW.m128d_f64[0];
  this->ShapeWorldTransforms[0].Translation.ZW.m128d_f64[1] = dVar6;
  dVar6 = param_1->ShapeWorldTransforms[0].Scale3D.XY.m128d_f64[1];
  this->ShapeWorldTransforms[0].Scale3D.XY.m128d_f64[0] =
       param_1->ShapeWorldTransforms[0].Scale3D.XY.m128d_f64[0];
  this->ShapeWorldTransforms[0].Scale3D.XY.m128d_f64[1] = dVar6;
  dVar6 = param_1->ShapeWorldTransforms[0].Scale3D.ZW.m128d_f64[1];
  this->ShapeWorldTransforms[0].Scale3D.ZW.m128d_f64[0] =
       param_1->ShapeWorldTransforms[0].Scale3D.ZW.m128d_f64[0];
  this->ShapeWorldTransforms[0].Scale3D.ZW.m128d_f64[1] = dVar6;
  dVar6 = param_1->ShapeWorldTransforms[1].Rotation.XY.m128d_f64[1];
  this->ShapeWorldTransforms[1].Rotation.XY.m128d_f64[0] =
       param_1->ShapeWorldTransforms[1].Rotation.XY.m128d_f64[0];
  this->ShapeWorldTransforms[1].Rotation.XY.m128d_f64[1] = dVar6;
  dVar6 = param_1->ShapeWorldTransforms[1].Rotation.ZW.m128d_f64[1];
  this->ShapeWorldTransforms[1].Rotation.ZW.m128d_f64[0] =
       param_1->ShapeWorldTransforms[1].Rotation.ZW.m128d_f64[0];
  this->ShapeWorldTransforms[1].Rotation.ZW.m128d_f64[1] = dVar6;
  dVar6 = param_1->ShapeWorldTransforms[1].Translation.XY.m128d_f64[1];
  this->ShapeWorldTransforms[1].Translation.XY.m128d_f64[0] =
       param_1->ShapeWorldTransforms[1].Translation.XY.m128d_f64[0];
  this->ShapeWorldTransforms[1].Translation.XY.m128d_f64[1] = dVar6;
  dVar6 = param_1->ShapeWorldTransforms[1].Translation.ZW.m128d_f64[1];
  this->ShapeWorldTransforms[1].Translation.ZW.m128d_f64[0] =
       param_1->ShapeWorldTransforms[1].Translation.ZW.m128d_f64[0];
  this->ShapeWorldTransforms[1].Translation.ZW.m128d_f64[1] = dVar6;
  dVar6 = param_1->ShapeWorldTransforms[1].Scale3D.XY.m128d_f64[1];
  this->ShapeWorldTransforms[1].Scale3D.XY.m128d_f64[0] =
       param_1->ShapeWorldTransforms[1].Scale3D.XY.m128d_f64[0];
  this->ShapeWorldTransforms[1].Scale3D.XY.m128d_f64[1] = dVar6;
  dVar6 = param_1->ShapeWorldTransforms[1].Scale3D.ZW.m128d_f64[1];
  this->ShapeWorldTransforms[1].Scale3D.ZW.m128d_f64[0] =
       param_1->ShapeWorldTransforms[1].Scale3D.ZW.m128d_f64[0];
  this->ShapeWorldTransforms[1].Scale3D.ZW.m128d_f64[1] = dVar6;
  dVar6 = param_1->ImplicitTransforms[0].Rotation.XY.m128d_f64[1];
  this->ImplicitTransforms[0].Rotation.XY.m128d_f64[0] =
       param_1->ImplicitTransforms[0].Rotation.XY.m128d_f64[0];
  this->ImplicitTransforms[0].Rotation.XY.m128d_f64[1] = dVar6;
  dVar6 = param_1->ImplicitTransforms[0].Rotation.ZW.m128d_f64[1];
  this->ImplicitTransforms[0].Rotation.ZW.m128d_f64[0] =
       param_1->ImplicitTransforms[0].Rotation.ZW.m128d_f64[0];
  this->ImplicitTransforms[0].Rotation.ZW.m128d_f64[1] = dVar6;
  dVar6 = param_1->ImplicitTransforms[0].Translation.XY.m128d_f64[1];
  this->ImplicitTransforms[0].Translation.XY.m128d_f64[0] =
       param_1->ImplicitTransforms[0].Translation.XY.m128d_f64[0];
  this->ImplicitTransforms[0].Translation.XY.m128d_f64[1] = dVar6;
  dVar6 = param_1->ImplicitTransforms[0].Translation.ZW.m128d_f64[1];
  this->ImplicitTransforms[0].Translation.ZW.m128d_f64[0] =
       param_1->ImplicitTransforms[0].Translation.ZW.m128d_f64[0];
  this->ImplicitTransforms[0].Translation.ZW.m128d_f64[1] = dVar6;
  dVar6 = param_1->ImplicitTransforms[0].Scale3D.XY.m128d_f64[1];
  this->ImplicitTransforms[0].Scale3D.XY.m128d_f64[0] =
       param_1->ImplicitTransforms[0].Scale3D.XY.m128d_f64[0];
  this->ImplicitTransforms[0].Scale3D.XY.m128d_f64[1] = dVar6;
  dVar6 = param_1->ImplicitTransforms[0].Scale3D.ZW.m128d_f64[1];
  this->ImplicitTransforms[0].Scale3D.ZW.m128d_f64[0] =
       param_1->ImplicitTransforms[0].Scale3D.ZW.m128d_f64[0];
  this->ImplicitTransforms[0].Scale3D.ZW.m128d_f64[1] = dVar6;
  dVar6 = param_1->ImplicitTransforms[1].Rotation.XY.m128d_f64[1];
  this->ImplicitTransforms[1].Rotation.XY.m128d_f64[0] =
       param_1->ImplicitTransforms[1].Rotation.XY.m128d_f64[0];
  this->ImplicitTransforms[1].Rotation.XY.m128d_f64[1] = dVar6;
  dVar6 = param_1->ImplicitTransforms[1].Rotation.ZW.m128d_f64[1];
  this->ImplicitTransforms[1].Rotation.ZW.m128d_f64[0] =
       param_1->ImplicitTransforms[1].Rotation.ZW.m128d_f64[0];
  this->ImplicitTransforms[1].Rotation.ZW.m128d_f64[1] = dVar6;
  dVar6 = param_1->ImplicitTransforms[1].Translation.XY.m128d_f64[1];
  this->ImplicitTransforms[1].Translation.XY.m128d_f64[0] =
       param_1->ImplicitTransforms[1].Translation.XY.m128d_f64[0];
  this->ImplicitTransforms[1].Translation.XY.m128d_f64[1] = dVar6;
  dVar6 = param_1->ImplicitTransforms[1].Translation.ZW.m128d_f64[1];
  this->ImplicitTransforms[1].Translation.ZW.m128d_f64[0] =
       param_1->ImplicitTransforms[1].Translation.ZW.m128d_f64[0];
  this->ImplicitTransforms[1].Translation.ZW.m128d_f64[1] = dVar6;
  dVar6 = param_1->ImplicitTransforms[1].Scale3D.XY.m128d_f64[1];
  this->ImplicitTransforms[1].Scale3D.XY.m128d_f64[0] =
       param_1->ImplicitTransforms[1].Scale3D.XY.m128d_f64[0];
  this->ImplicitTransforms[1].Scale3D.XY.m128d_f64[1] = dVar6;
  dVar6 = param_1->ImplicitTransforms[1].Scale3D.ZW.m128d_f64[1];
  this->ImplicitTransforms[1].Scale3D.ZW.m128d_f64[0] =
       param_1->ImplicitTransforms[1].Scale3D.ZW.m128d_f64[0];
  this->ImplicitTransforms[1].Scale3D.ZW.m128d_f64[1] = dVar6;
  this->CullDistance = param_1->CullDistance;
  piVar1 = &(this->CollisionMargins).ArrayMax;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->CollisionMargins).ArrayNum;
  pFVar5 = (param_1->CollisionMargins).AllocatorInstance.Data;
  (this->CollisionMargins).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar4,0,&pTVar2->AllocatorInstance,iVar4,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 2);
  }
  pTVar3 = &this->ManifoldPoints;
  this->CollisionTolerance = param_1->CollisionTolerance;
  this->ClosestManifoldPointIndex = param_1->ClosestManifoldPointIndex;
  this->ExpectedNumManifoldPoints = param_1->ExpectedNumManifoldPoints;
  dVar6 = (param_1->LastShapeWorldPositionDelta).field0_0x0._s_0.Y;
  (this->LastShapeWorldPositionDelta).field0_0x0._s_0.X =
       (param_1->LastShapeWorldPositionDelta).field0_0x0._s_0.X;
  (this->LastShapeWorldPositionDelta).field0_0x0._s_0.Y = dVar6;
  (this->LastShapeWorldPositionDelta).field0_0x0._s_0.Z =
       (param_1->LastShapeWorldPositionDelta).field0_0x0._s_0.Z;
  dVar6 = (param_1->LastShapeWorldRotationDelta).Y;
  (this->LastShapeWorldRotationDelta).X = (param_1->LastShapeWorldRotationDelta).X;
  (this->LastShapeWorldRotationDelta).Y = dVar6;
  dVar6 = (param_1->LastShapeWorldRotationDelta).W;
  (this->LastShapeWorldRotationDelta).Z = (param_1->LastShapeWorldRotationDelta).Z;
  (this->LastShapeWorldRotationDelta).W = dVar6;
  this->Stiffness = param_1->Stiffness;
  this->MinInitialPhi = param_1->MinInitialPhi;
  this->InitialOverlapDepenetrationVelocity = param_1->InitialOverlapDepenetrationVelocity;
  this->CCDTimeOfImpact = param_1->CCDTimeOfImpact;
  this->CCDEnablePenetration = param_1->CCDEnablePenetration;
  this->CCDTargetPenetration = param_1->CCDTargetPenetration;
  piVar1 = &(this->ManifoldPoints).ArrayMax;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->ManifoldPoints).ArrayNum;
  pFVar5 = (param_1->ManifoldPoints).AllocatorInstance.Data;
  (this->ManifoldPoints).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x130,8,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar5,(longlong)iVar4 * 0x130);
  }
  this->Particle0Index = param_1->Particle0Index;
  this->Particle1Index = param_1->Particle1Index;
  this->SolverID = param_1->SolverID;
  return this;
}

// FChaosVDConstraint @ 1436d4590

FChaosVDConstraint * __thiscall FChaosVDConstraint::FChaosVDConstraint(FChaosVDConstraint *this)

{
  undefined1 *puVar1;
  
  this->bIsProbe = '\0';
  this->bMaterialSet = '\0';
  this->bModifierApplied = '\0';
  this->bCCDSweepEnabled = '\0';
  this->bCCDEnabled = '\0';
  (this->Material).FaceIndex = -1;
  (this->Material).MaterialDynamicFriction = 0.0;
  (this->Material).MaterialStaticFriction = 0.0;
  (this->Material).MaterialRestitution = 0.0;
  (this->Material).DynamicFriction = 0.0;
  (this->Material).StaticFriction = 0.0;
  (this->Material).Restitution = 0.0;
  (this->Material).RestitutionThreshold = 0.0;
  (this->Material).InvMassScale0 = 0.0;
  (this->Material).InvMassScale1 = 0.0;
  (this->Material).InvInertiaScale0 = 0.0;
  (this->Material).InvInertiaScale1 = 0.0;
  (this->AccumulatedImpulse).field0_0x0._s_0.X = 0.0;
  (this->AccumulatedImpulse).field0_0x0._s_0.Y = 0.0;
  (this->AccumulatedImpulse).field0_0x0._s_0.Z = 0.0;
  this->ShapesType = Unknown;
  this->bIsCurrent = '\0';
  this->bIsQuadratic1 = '\0';
  this->bIsQuadratic0 = '\0';
  this->bWasManifoldRestored = '\0';
  this->bCanRestoreManifold = '\0';
  this->bUseIncrementalManifold = '\0';
  this->bUseManifold = '\0';
  this->bDisabled = '\0';
  *&this->ShapeWorldTransforms[0].Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&this->ShapeWorldTransforms[0].Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&this->ShapeWorldTransforms[0].Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&this->ShapeWorldTransforms[0].Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&this->ShapeWorldTransforms[0].Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&this->ShapeWorldTransforms[0].Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *&this->ShapeWorldTransforms[1].Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&this->ShapeWorldTransforms[1].Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&this->ShapeWorldTransforms[1].Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&this->ShapeWorldTransforms[1].Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&this->ShapeWorldTransforms[1].Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&this->ShapeWorldTransforms[1].Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *&this->ImplicitTransforms[0].Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&this->ImplicitTransforms[0].Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&this->ImplicitTransforms[0].Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&this->ImplicitTransforms[0].Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&this->ImplicitTransforms[0].Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&this->ImplicitTransforms[0].Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *&this->ImplicitTransforms[1].Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&this->ImplicitTransforms[1].Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&this->ImplicitTransforms[1].Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&this->ImplicitTransforms[1].Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&this->ImplicitTransforms[1].Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&this->ImplicitTransforms[1].Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (this->CollisionMargins).ArrayNum = 0;
  (this->CollisionMargins).ArrayMax = 0;
  (this->LastShapeWorldPositionDelta).field0_0x0._s_0.X = 0.0;
  (this->LastShapeWorldPositionDelta).field0_0x0._s_0.Y = 0.0;
  (this->LastShapeWorldPositionDelta).field0_0x0._s_0.Z = 0.0;
  (this->CollisionMargins).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastShapeWorldRotationDelta).X = 0.0;
  (this->LastShapeWorldRotationDelta).Y = 0.0;
  (this->LastShapeWorldRotationDelta).Z = 0.0;
  this->CullDistance = 0.0;
  this->CollisionTolerance = 0.0;
  this->ClosestManifoldPointIndex = 0;
  this->ExpectedNumManifoldPoints = 0;
  (this->LastShapeWorldRotationDelta).W = 1.0;
  this->Stiffness = 0.0;
  this->MinInitialPhi = 0.0;
  this->InitialOverlapDepenetrationVelocity = -1.0;
  this->CCDTimeOfImpact = 0.0;
  this->CCDEnablePenetration = 0.0;
  this->CCDTargetPenetration = 0.0;
  (this->ManifoldPoints).ArrayNum = 0;
  (this->ManifoldPoints).ArrayMax = 0;
  (this->ManifoldPoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Particle0Index = -1;
  this->Particle1Index = -1;
  this->SolverID = -1;
  return this;
}

// operator= @ 1436d64f0

FChaosVDConstraint * __thiscall
FChaosVDConstraint::operator=(FChaosVDConstraint *this,FChaosVDConstraint *param_1)

{
  int *piVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FChaosVDManifoldPoint,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  byte bVar10;
  
  bVar10 = (this->bIsCurrent ^ param_1->bIsCurrent) & 1 ^ *(byte *)this;
  *(byte *)this = bVar10;
  bVar10 = (bVar10 ^ *(byte *)param_1) & 2 ^ bVar10;
  *(byte *)this = bVar10;
  bVar10 = (bVar10 ^ *(byte *)param_1) & 4 ^ bVar10;
  *(byte *)this = bVar10;
  bVar10 = (bVar10 ^ *(byte *)param_1) & 8 ^ bVar10;
  *(byte *)this = bVar10;
  bVar10 = (bVar10 ^ *(byte *)param_1) & 0x10 ^ bVar10;
  *(byte *)this = bVar10;
  bVar10 = (bVar10 ^ *(byte *)param_1) & 0x20 ^ bVar10;
  *(byte *)this = bVar10;
  bVar10 = (bVar10 ^ *(byte *)param_1) & 0x40 ^ bVar10;
  *(byte *)this = bVar10;
  *(byte *)this = (bVar10 ^ *(byte *)param_1) & 0x7f ^ *(byte *)param_1;
  bVar10 = (this->bIsProbe ^ param_1->bIsProbe) & 1 ^ this->field_0x1;
  this->field_0x1 = bVar10;
  bVar10 = (bVar10 ^ param_1->field_0x1) & 2 ^ bVar10;
  this->field_0x1 = bVar10;
  bVar10 = (bVar10 ^ param_1->field_0x1) & 4 ^ bVar10;
  this->field_0x1 = bVar10;
  bVar10 = (bVar10 ^ param_1->field_0x1) & 8 ^ bVar10;
  this->field_0x1 = bVar10;
  this->field_0x1 = (bVar10 ^ param_1->field_0x1) & 0x10 ^ bVar10;
  fVar7 = (param_1->Material).MaterialDynamicFriction;
  fVar8 = (param_1->Material).MaterialStaticFriction;
  fVar9 = (param_1->Material).MaterialRestitution;
  (this->Material).FaceIndex = (param_1->Material).FaceIndex;
  (this->Material).MaterialDynamicFriction = fVar7;
  (this->Material).MaterialStaticFriction = fVar8;
  (this->Material).MaterialRestitution = fVar9;
  fVar7 = (param_1->Material).StaticFriction;
  fVar8 = (param_1->Material).Restitution;
  fVar9 = (param_1->Material).RestitutionThreshold;
  (this->Material).DynamicFriction = (param_1->Material).DynamicFriction;
  (this->Material).StaticFriction = fVar7;
  (this->Material).Restitution = fVar8;
  (this->Material).RestitutionThreshold = fVar9;
  fVar7 = (param_1->Material).InvMassScale1;
  fVar8 = (param_1->Material).InvInertiaScale0;
  fVar9 = (param_1->Material).InvInertiaScale1;
  (this->Material).InvMassScale0 = (param_1->Material).InvMassScale0;
  (this->Material).InvMassScale1 = fVar7;
  (this->Material).InvInertiaScale0 = fVar8;
  (this->Material).InvInertiaScale1 = fVar9;
  dVar6 = (param_1->AccumulatedImpulse).field0_0x0._s_0.Y;
  (this->AccumulatedImpulse).field0_0x0._s_0.X = (param_1->AccumulatedImpulse).field0_0x0._s_0.X;
  (this->AccumulatedImpulse).field0_0x0._s_0.Y = dVar6;
  (this->AccumulatedImpulse).field0_0x0._s_0.Z = (param_1->AccumulatedImpulse).field0_0x0._s_0.Z;
  this->ShapesType = param_1->ShapesType;
  dVar6 = param_1->ShapeWorldTransforms[0].Rotation.XY.m128d_f64[1];
  this->ShapeWorldTransforms[0].Rotation.XY.m128d_f64[0] =
       param_1->ShapeWorldTransforms[0].Rotation.XY.m128d_f64[0];
  this->ShapeWorldTransforms[0].Rotation.XY.m128d_f64[1] = dVar6;
  dVar6 = param_1->ShapeWorldTransforms[0].Rotation.ZW.m128d_f64[1];
  this->ShapeWorldTransforms[0].Rotation.ZW.m128d_f64[0] =
       param_1->ShapeWorldTransforms[0].Rotation.ZW.m128d_f64[0];
  this->ShapeWorldTransforms[0].Rotation.ZW.m128d_f64[1] = dVar6;
  dVar6 = param_1->ShapeWorldTransforms[0].Translation.XY.m128d_f64[1];
  pTVar2 = &this->CollisionMargins;
  this->ShapeWorldTransforms[0].Translation.XY.m128d_f64[0] =
       param_1->ShapeWorldTransforms[0].Translation.XY.m128d_f64[0];
  this->ShapeWorldTransforms[0].Translation.XY.m128d_f64[1] = dVar6;
  dVar6 = param_1->ShapeWorldTransforms[0].Translation.ZW.m128d_f64[1];
  this->ShapeWorldTransforms[0].Translation.ZW.m128d_f64[0] =
       param_1->ShapeWorldTransforms[0].Translation.ZW.m128d_f64[0];
  this->ShapeWorldTransforms[0].Translation.ZW.m128d_f64[1] = dVar6;
  dVar6 = param_1->ShapeWorldTransforms[0].Scale3D.XY.m128d_f64[1];
  this->ShapeWorldTransforms[0].Scale3D.XY.m128d_f64[0] =
       param_1->ShapeWorldTransforms[0].Scale3D.XY.m128d_f64[0];
  this->ShapeWorldTransforms[0].Scale3D.XY.m128d_f64[1] = dVar6;
  dVar6 = param_1->ShapeWorldTransforms[0].Scale3D.ZW.m128d_f64[1];
  this->ShapeWorldTransforms[0].Scale3D.ZW.m128d_f64[0] =
       param_1->ShapeWorldTransforms[0].Scale3D.ZW.m128d_f64[0];
  this->ShapeWorldTransforms[0].Scale3D.ZW.m128d_f64[1] = dVar6;
  dVar6 = param_1->ShapeWorldTransforms[1].Rotation.XY.m128d_f64[1];
  this->ShapeWorldTransforms[1].Rotation.XY.m128d_f64[0] =
       param_1->ShapeWorldTransforms[1].Rotation.XY.m128d_f64[0];
  this->ShapeWorldTransforms[1].Rotation.XY.m128d_f64[1] = dVar6;
  dVar6 = param_1->ShapeWorldTransforms[1].Rotation.ZW.m128d_f64[1];
  this->ShapeWorldTransforms[1].Rotation.ZW.m128d_f64[0] =
       param_1->ShapeWorldTransforms[1].Rotation.ZW.m128d_f64[0];
  this->ShapeWorldTransforms[1].Rotation.ZW.m128d_f64[1] = dVar6;
  dVar6 = param_1->ShapeWorldTransforms[1].Translation.XY.m128d_f64[1];
  this->ShapeWorldTransforms[1].Translation.XY.m128d_f64[0] =
       param_1->ShapeWorldTransforms[1].Translation.XY.m128d_f64[0];
  this->ShapeWorldTransforms[1].Translation.XY.m128d_f64[1] = dVar6;
  dVar6 = param_1->ShapeWorldTransforms[1].Translation.ZW.m128d_f64[1];
  this->ShapeWorldTransforms[1].Translation.ZW.m128d_f64[0] =
       param_1->ShapeWorldTransforms[1].Translation.ZW.m128d_f64[0];
  this->ShapeWorldTransforms[1].Translation.ZW.m128d_f64[1] = dVar6;
  dVar6 = param_1->ShapeWorldTransforms[1].Scale3D.XY.m128d_f64[1];
  this->ShapeWorldTransforms[1].Scale3D.XY.m128d_f64[0] =
       param_1->ShapeWorldTransforms[1].Scale3D.XY.m128d_f64[0];
  this->ShapeWorldTransforms[1].Scale3D.XY.m128d_f64[1] = dVar6;
  dVar6 = param_1->ShapeWorldTransforms[1].Scale3D.ZW.m128d_f64[1];
  this->ShapeWorldTransforms[1].Scale3D.ZW.m128d_f64[0] =
       param_1->ShapeWorldTransforms[1].Scale3D.ZW.m128d_f64[0];
  this->ShapeWorldTransforms[1].Scale3D.ZW.m128d_f64[1] = dVar6;
  dVar6 = param_1->ImplicitTransforms[0].Rotation.XY.m128d_f64[1];
  this->ImplicitTransforms[0].Rotation.XY.m128d_f64[0] =
       param_1->ImplicitTransforms[0].Rotation.XY.m128d_f64[0];
  this->ImplicitTransforms[0].Rotation.XY.m128d_f64[1] = dVar6;
  dVar6 = param_1->ImplicitTransforms[0].Rotation.ZW.m128d_f64[1];
  this->ImplicitTransforms[0].Rotation.ZW.m128d_f64[0] =
       param_1->ImplicitTransforms[0].Rotation.ZW.m128d_f64[0];
  this->ImplicitTransforms[0].Rotation.ZW.m128d_f64[1] = dVar6;
  dVar6 = param_1->ImplicitTransforms[0].Translation.XY.m128d_f64[1];
  this->ImplicitTransforms[0].Translation.XY.m128d_f64[0] =
       param_1->ImplicitTransforms[0].Translation.XY.m128d_f64[0];
  this->ImplicitTransforms[0].Translation.XY.m128d_f64[1] = dVar6;
  dVar6 = param_1->ImplicitTransforms[0].Translation.ZW.m128d_f64[1];
  this->ImplicitTransforms[0].Translation.ZW.m128d_f64[0] =
       param_1->ImplicitTransforms[0].Translation.ZW.m128d_f64[0];
  this->ImplicitTransforms[0].Translation.ZW.m128d_f64[1] = dVar6;
  dVar6 = param_1->ImplicitTransforms[0].Scale3D.XY.m128d_f64[1];
  this->ImplicitTransforms[0].Scale3D.XY.m128d_f64[0] =
       param_1->ImplicitTransforms[0].Scale3D.XY.m128d_f64[0];
  this->ImplicitTransforms[0].Scale3D.XY.m128d_f64[1] = dVar6;
  dVar6 = param_1->ImplicitTransforms[0].Scale3D.ZW.m128d_f64[1];
  this->ImplicitTransforms[0].Scale3D.ZW.m128d_f64[0] =
       param_1->ImplicitTransforms[0].Scale3D.ZW.m128d_f64[0];
  this->ImplicitTransforms[0].Scale3D.ZW.m128d_f64[1] = dVar6;
  dVar6 = param_1->ImplicitTransforms[1].Rotation.XY.m128d_f64[1];
  this->ImplicitTransforms[1].Rotation.XY.m128d_f64[0] =
       param_1->ImplicitTransforms[1].Rotation.XY.m128d_f64[0];
  this->ImplicitTransforms[1].Rotation.XY.m128d_f64[1] = dVar6;
  dVar6 = param_1->ImplicitTransforms[1].Rotation.ZW.m128d_f64[1];
  this->ImplicitTransforms[1].Rotation.ZW.m128d_f64[0] =
       param_1->ImplicitTransforms[1].Rotation.ZW.m128d_f64[0];
  this->ImplicitTransforms[1].Rotation.ZW.m128d_f64[1] = dVar6;
  dVar6 = param_1->ImplicitTransforms[1].Translation.XY.m128d_f64[1];
  this->ImplicitTransforms[1].Translation.XY.m128d_f64[0] =
       param_1->ImplicitTransforms[1].Translation.XY.m128d_f64[0];
  this->ImplicitTransforms[1].Translation.XY.m128d_f64[1] = dVar6;
  dVar6 = param_1->ImplicitTransforms[1].Translation.ZW.m128d_f64[1];
  this->ImplicitTransforms[1].Translation.ZW.m128d_f64[0] =
       param_1->ImplicitTransforms[1].Translation.ZW.m128d_f64[0];
  this->ImplicitTransforms[1].Translation.ZW.m128d_f64[1] = dVar6;
  dVar6 = param_1->ImplicitTransforms[1].Scale3D.XY.m128d_f64[1];
  this->ImplicitTransforms[1].Scale3D.XY.m128d_f64[0] =
       param_1->ImplicitTransforms[1].Scale3D.XY.m128d_f64[0];
  this->ImplicitTransforms[1].Scale3D.XY.m128d_f64[1] = dVar6;
  dVar6 = param_1->ImplicitTransforms[1].Scale3D.ZW.m128d_f64[1];
  this->ImplicitTransforms[1].Scale3D.ZW.m128d_f64[0] =
       param_1->ImplicitTransforms[1].Scale3D.ZW.m128d_f64[0];
  this->ImplicitTransforms[1].Scale3D.ZW.m128d_f64[1] = dVar6;
  this->CullDistance = param_1->CullDistance;
  if (pTVar2 != &param_1->CollisionMargins) {
    iVar4 = (param_1->CollisionMargins).ArrayNum;
    piVar1 = &(this->CollisionMargins).ArrayMax;
    pFVar5 = (param_1->CollisionMargins).AllocatorInstance.Data;
    (this->CollisionMargins).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar4,*piVar1,&pTVar2->AllocatorInstance,iVar4,piVar1);
      if (iVar4 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 2);
      }
    }
  }
  this->CollisionTolerance = param_1->CollisionTolerance;
  pTVar3 = &this->ManifoldPoints;
  this->ClosestManifoldPointIndex = param_1->ClosestManifoldPointIndex;
  this->ExpectedNumManifoldPoints = param_1->ExpectedNumManifoldPoints;
  dVar6 = (param_1->LastShapeWorldPositionDelta).field0_0x0._s_0.Y;
  (this->LastShapeWorldPositionDelta).field0_0x0._s_0.X =
       (param_1->LastShapeWorldPositionDelta).field0_0x0._s_0.X;
  (this->LastShapeWorldPositionDelta).field0_0x0._s_0.Y = dVar6;
  (this->LastShapeWorldPositionDelta).field0_0x0._s_0.Z =
       (param_1->LastShapeWorldPositionDelta).field0_0x0._s_0.Z;
  dVar6 = (param_1->LastShapeWorldRotationDelta).Y;
  (this->LastShapeWorldRotationDelta).X = (param_1->LastShapeWorldRotationDelta).X;
  (this->LastShapeWorldRotationDelta).Y = dVar6;
  dVar6 = (param_1->LastShapeWorldRotationDelta).W;
  (this->LastShapeWorldRotationDelta).Z = (param_1->LastShapeWorldRotationDelta).Z;
  (this->LastShapeWorldRotationDelta).W = dVar6;
  this->Stiffness = param_1->Stiffness;
  this->MinInitialPhi = param_1->MinInitialPhi;
  this->InitialOverlapDepenetrationVelocity = param_1->InitialOverlapDepenetrationVelocity;
  this->CCDTimeOfImpact = param_1->CCDTimeOfImpact;
  this->CCDEnablePenetration = param_1->CCDEnablePenetration;
  this->CCDTargetPenetration = param_1->CCDTargetPenetration;
  if (pTVar3 != &param_1->ManifoldPoints) {
    iVar4 = (param_1->ManifoldPoints).ArrayNum;
    piVar1 = &(this->ManifoldPoints).ArrayMax;
    pFVar5 = (param_1->ManifoldPoints).AllocatorInstance.Data;
    (this->ManifoldPoints).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x130,8,iVar4,*piVar1,&pTVar3->AllocatorInstance,iVar4,piVar1);
      if (iVar4 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,pFVar5,(longlong)iVar4 * 0x130);
      }
    }
  }
  this->Particle0Index = param_1->Particle0Index;
  this->Particle1Index = param_1->Particle1Index;
  this->SolverID = param_1->SolverID;
  return this;
}

// Serialize @ 1436dbf50

bool __thiscall FChaosVDConstraint::Serialize(FChaosVDConstraint *this,FArchive *param_1)

{
  EChaosVDContactShapesType *pEVar1;
  float *pfVar2;
  int *piVar3;
  longlong *plVar4;
  EChaosVDContactShapesType *pEVar5;
  float *pfVar6;
  int *piVar7;
  double dVar8;
  double dVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  byte bVar15;
  bool bVar16;
  ushort local_res8 [4];
  
  local_res8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    bVar16 = this->bIsCurrent != 0;
    local_res8[0] = (ushort)bVar16;
    if (this->bDisabled != '\0') {
      local_res8[0] = bVar16 | 2;
    }
    if (this->bUseManifold != '\0') {
      local_res8[0] = local_res8[0] | 4;
    }
    if (this->bUseIncrementalManifold != '\0') {
      local_res8[0] = local_res8[0] | 8;
    }
    if (this->bCanRestoreManifold != '\0') {
      local_res8[0] = local_res8[0] | 0x10;
    }
    if (this->bWasManifoldRestored != '\0') {
      local_res8[0] = local_res8[0] | 0x20;
    }
    if (this->bIsQuadratic0 != '\0') {
      local_res8[0] = local_res8[0] | 0x40;
    }
    if (this->bIsProbe != 0) {
      local_res8[0] = local_res8[0] | 0x100;
    }
    if (this->bCCDEnabled != '\0') {
      local_res8[0] = local_res8[0] | 0x200;
    }
    if (this->bCCDSweepEnabled != '\0') {
      local_res8[0] = local_res8[0] | 0x400;
    }
    if (this->bModifierApplied != '\0') {
      local_res8[0] = local_res8[0] | 0x800;
    }
    if (this->bMaterialSet != '\0') {
      local_res8[0] = local_res8[0] | 0x1000;
    }
    plVar4 = *(longlong **)&param_1->field_0x8;
    if ((ushort *)plVar4[1] < (ushort *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(ushort *)*plVar4;
      *plVar4 = *plVar4 + 2;
    }
  }
  else {
    plVar4 = *(longlong **)&param_1->field_0x8;
    if ((ushort *)plVar4[1] < (ushort *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(ushort *)*plVar4;
      *plVar4 = *plVar4 + 2;
    }
    bVar15 = (byte)local_res8[0];
    bVar10 = bVar15 & 1 | *(byte *)this & 0xfe;
    bVar10 = ((char)(local_res8[0] >> 1) * '\x02' ^ bVar10) & 2 ^ bVar10;
    bVar10 = (bVar15 & 0xfc ^ bVar10) & 4 ^ bVar10;
    bVar10 = (bVar15 & 0xf8 ^ bVar10) & 8 ^ bVar10;
    bVar10 = (bVar15 & 0xf0 ^ bVar10) & 0x10 ^ bVar10;
    bVar10 = (bVar15 & 0xe0 ^ bVar10) & 0x20 ^ bVar10;
    bVar11 = (byte)(local_res8[0] >> 8);
    bVar12 = (bVar11 ^ this->bIsProbe) & 1 ^ this->field_0x1;
    *(byte *)this = (bVar15 & 0xc0 ^ bVar10) & 0x40 ^ bVar10;
    bVar12 = (bVar11 & 0xfe ^ bVar12) & 2 ^ bVar12;
    bVar12 = (bVar11 & 0xfc ^ bVar12) & 4 ^ bVar12;
    bVar12 = (bVar11 & 0xf8 ^ bVar12) & 8 ^ bVar12;
    this->field_0x1 = (bVar11 & 0xf0 ^ bVar12) & 0x10 ^ bVar12;
  }
  puVar14 = &param_1->field_0x8;
  puVar13 = &param_1->field_0x2a;
  FChaosVDCollisionMaterial::Serialize(&this->Material,param_1);
  UE::Math::operator<<(param_1,&this->AccumulatedImpulse);
  pEVar1 = &this->ShapesType;
  pEVar5 = (EChaosVDContactShapesType *)**(undefined8 **)puVar14;
  if ((EChaosVDContactShapesType *)(*(undefined8 **)puVar14)[1] < pEVar5 + 1) {
    if ((*puVar13 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pEVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,pEVar1);
    }
  }
  else {
    *pEVar1 = *pEVar5;
    **(longlong **)puVar14 = **(longlong **)puVar14 + 4;
  }
  UE::Math::operator<<(param_1,(TQuat<double> *)this->ShapeWorldTransforms);
  UE::Math::operator<<(param_1,(TVector<double> *)&this->ShapeWorldTransforms[0].Translation);
  UE::Math::operator<<(param_1,(TVector<double> *)&this->ShapeWorldTransforms[0].Scale3D);
  if ((param_1->field_0x28 & 1) != 0) {
    dVar8 = this->ShapeWorldTransforms[0].Translation.ZW.m128d_f64[0];
    dVar9 = this->ShapeWorldTransforms[0].Translation.XY.m128d_f64[1];
    this->ShapeWorldTransforms[0].Translation.XY.m128d_f64[0] =
         this->ShapeWorldTransforms[0].Translation.XY.m128d_f64[0];
    this->ShapeWorldTransforms[0].Translation.XY.m128d_f64[1] = dVar9;
    this->ShapeWorldTransforms[0].Translation.ZW.m128d_f64[0] = dVar8;
    this->ShapeWorldTransforms[0].Translation.ZW.m128d_f64[1] = 0.0;
    dVar8 = this->ShapeWorldTransforms[0].Scale3D.ZW.m128d_f64[0];
    dVar9 = this->ShapeWorldTransforms[0].Scale3D.XY.m128d_f64[1];
    this->ShapeWorldTransforms[0].Scale3D.XY.m128d_f64[0] =
         this->ShapeWorldTransforms[0].Scale3D.XY.m128d_f64[0];
    this->ShapeWorldTransforms[0].Scale3D.XY.m128d_f64[1] = dVar9;
    this->ShapeWorldTransforms[0].Scale3D.ZW.m128d_f64[0] = dVar8;
    this->ShapeWorldTransforms[0].Scale3D.ZW.m128d_f64[1] = 0.0;
  }
  UE::Math::operator<<(param_1,(TQuat<double> *)(this->ShapeWorldTransforms + 1));
  UE::Math::operator<<(param_1,(TVector<double> *)&this->ShapeWorldTransforms[1].Translation);
  UE::Math::operator<<(param_1,(TVector<double> *)&this->ShapeWorldTransforms[1].Scale3D);
  if ((param_1->field_0x28 & 1) != 0) {
    dVar8 = this->ShapeWorldTransforms[1].Translation.ZW.m128d_f64[0];
    dVar9 = this->ShapeWorldTransforms[1].Translation.XY.m128d_f64[1];
    this->ShapeWorldTransforms[1].Translation.XY.m128d_f64[0] =
         this->ShapeWorldTransforms[1].Translation.XY.m128d_f64[0];
    this->ShapeWorldTransforms[1].Translation.XY.m128d_f64[1] = dVar9;
    this->ShapeWorldTransforms[1].Translation.ZW.m128d_f64[0] = dVar8;
    this->ShapeWorldTransforms[1].Translation.ZW.m128d_f64[1] = 0.0;
    dVar8 = this->ShapeWorldTransforms[1].Scale3D.ZW.m128d_f64[0];
    dVar9 = this->ShapeWorldTransforms[1].Scale3D.XY.m128d_f64[1];
    this->ShapeWorldTransforms[1].Scale3D.XY.m128d_f64[0] =
         this->ShapeWorldTransforms[1].Scale3D.XY.m128d_f64[0];
    this->ShapeWorldTransforms[1].Scale3D.XY.m128d_f64[1] = dVar9;
    this->ShapeWorldTransforms[1].Scale3D.ZW.m128d_f64[0] = dVar8;
    this->ShapeWorldTransforms[1].Scale3D.ZW.m128d_f64[1] = 0.0;
  }
  UE::Math::operator<<(param_1,(TQuat<double> *)this->ImplicitTransforms);
  UE::Math::operator<<(param_1,(TVector<double> *)&this->ImplicitTransforms[0].Translation);
  UE::Math::operator<<(param_1,(TVector<double> *)&this->ImplicitTransforms[0].Scale3D);
  if ((param_1->field_0x28 & 1) != 0) {
    dVar8 = this->ImplicitTransforms[0].Translation.ZW.m128d_f64[0];
    dVar9 = this->ImplicitTransforms[0].Translation.XY.m128d_f64[1];
    this->ImplicitTransforms[0].Translation.XY.m128d_f64[0] =
         this->ImplicitTransforms[0].Translation.XY.m128d_f64[0];
    this->ImplicitTransforms[0].Translation.XY.m128d_f64[1] = dVar9;
    this->ImplicitTransforms[0].Translation.ZW.m128d_f64[0] = dVar8;
    this->ImplicitTransforms[0].Translation.ZW.m128d_f64[1] = 0.0;
    dVar8 = this->ImplicitTransforms[0].Scale3D.ZW.m128d_f64[0];
    dVar9 = this->ImplicitTransforms[0].Scale3D.XY.m128d_f64[1];
    this->ImplicitTransforms[0].Scale3D.XY.m128d_f64[0] =
         this->ImplicitTransforms[0].Scale3D.XY.m128d_f64[0];
    this->ImplicitTransforms[0].Scale3D.XY.m128d_f64[1] = dVar9;
    this->ImplicitTransforms[0].Scale3D.ZW.m128d_f64[0] = dVar8;
    this->ImplicitTransforms[0].Scale3D.ZW.m128d_f64[1] = 0.0;
  }
  UE::Math::operator<<(param_1,(TQuat<double> *)(this->ImplicitTransforms + 1));
  UE::Math::operator<<(param_1,(TVector<double> *)&this->ImplicitTransforms[1].Translation);
  UE::Math::operator<<(param_1,(TVector<double> *)&this->ImplicitTransforms[1].Scale3D);
  if ((param_1->field_0x28 & 1) != 0) {
    dVar8 = this->ImplicitTransforms[1].Translation.ZW.m128d_f64[0];
    dVar9 = this->ImplicitTransforms[1].Translation.XY.m128d_f64[1];
    this->ImplicitTransforms[1].Translation.XY.m128d_f64[0] =
         this->ImplicitTransforms[1].Translation.XY.m128d_f64[0];
    this->ImplicitTransforms[1].Translation.XY.m128d_f64[1] = dVar9;
    this->ImplicitTransforms[1].Translation.ZW.m128d_f64[0] = dVar8;
    this->ImplicitTransforms[1].Translation.ZW.m128d_f64[1] = 0.0;
    dVar8 = this->ImplicitTransforms[1].Scale3D.ZW.m128d_f64[0];
    dVar9 = this->ImplicitTransforms[1].Scale3D.XY.m128d_f64[1];
    this->ImplicitTransforms[1].Scale3D.XY.m128d_f64[0] =
         this->ImplicitTransforms[1].Scale3D.XY.m128d_f64[0];
    this->ImplicitTransforms[1].Scale3D.XY.m128d_f64[1] = dVar9;
    this->ImplicitTransforms[1].Scale3D.ZW.m128d_f64[0] = dVar8;
    this->ImplicitTransforms[1].Scale3D.ZW.m128d_f64[1] = 0.0;
  }
  pfVar2 = &this->CullDistance;
  pfVar6 = (float *)**(undefined8 **)puVar14;
  if ((float *)(*(undefined8 **)puVar14)[1] < pfVar6 + 1) {
    if ((*puVar13 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar2);
    }
  }
  else {
    *pfVar2 = *pfVar6;
    **(longlong **)puVar14 = **(longlong **)puVar14 + 4;
  }
  TArrayPrivateFriend::Serialize<float,TSizedDefaultAllocator<32>_>(param_1,&this->CollisionMargins)
  ;
  pfVar2 = &this->CollisionTolerance;
  pfVar6 = (float *)**(undefined8 **)puVar14;
  if ((float *)(*(undefined8 **)puVar14)[1] < pfVar6 + 1) {
    if ((*puVar13 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar2);
    }
  }
  else {
    *pfVar2 = *pfVar6;
    **(longlong **)puVar14 = **(longlong **)puVar14 + 4;
  }
  piVar3 = &this->ClosestManifoldPointIndex;
  piVar7 = (int *)**(undefined8 **)puVar14;
  if ((int *)(*(undefined8 **)puVar14)[1] < piVar7 + 1) {
    if ((*puVar13 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar3,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar3);
    }
  }
  else {
    *piVar3 = *piVar7;
    **(longlong **)puVar14 = **(longlong **)puVar14 + 4;
  }
  piVar3 = &this->ExpectedNumManifoldPoints;
  piVar7 = (int *)**(undefined8 **)puVar14;
  if ((int *)(*(undefined8 **)puVar14)[1] < piVar7 + 1) {
    if ((*puVar13 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar3,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar3);
    }
  }
  else {
    *piVar3 = *piVar7;
    **(longlong **)puVar14 = **(longlong **)puVar14 + 4;
  }
  UE::Math::operator<<(param_1,&this->LastShapeWorldPositionDelta);
  UE::Math::operator<<(param_1,&this->LastShapeWorldRotationDelta);
  pfVar2 = &this->Stiffness;
  pfVar6 = (float *)**(undefined8 **)puVar14;
  if ((float *)(*(undefined8 **)puVar14)[1] < pfVar6 + 1) {
    if ((*puVar13 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar2);
    }
  }
  else {
    *pfVar2 = *pfVar6;
    **(longlong **)puVar14 = **(longlong **)puVar14 + 4;
  }
  pfVar2 = &this->MinInitialPhi;
  pfVar6 = (float *)**(undefined8 **)puVar14;
  if ((float *)(*(undefined8 **)puVar14)[1] < pfVar6 + 1) {
    if ((*puVar13 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar2);
    }
  }
  else {
    *pfVar2 = *pfVar6;
    **(longlong **)puVar14 = **(longlong **)puVar14 + 4;
  }
  pfVar2 = &this->InitialOverlapDepenetrationVelocity;
  pfVar6 = (float *)**(undefined8 **)puVar14;
  if ((float *)(*(undefined8 **)puVar14)[1] < pfVar6 + 1) {
    if ((*puVar13 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar2);
    }
  }
  else {
    *pfVar2 = *pfVar6;
    **(longlong **)puVar14 = **(longlong **)puVar14 + 4;
  }
  pfVar2 = &this->CCDTimeOfImpact;
  pfVar6 = (float *)**(undefined8 **)puVar14;
  if ((float *)(*(undefined8 **)puVar14)[1] < pfVar6 + 1) {
    if ((*puVar13 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar2);
    }
  }
  else {
    *pfVar2 = *pfVar6;
    **(longlong **)puVar14 = **(longlong **)puVar14 + 4;
  }
  pfVar2 = &this->CCDEnablePenetration;
  pfVar6 = (float *)**(undefined8 **)puVar14;
  if ((float *)(*(undefined8 **)puVar14)[1] < pfVar6 + 1) {
    if ((*puVar13 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar2);
    }
  }
  else {
    *pfVar2 = *pfVar6;
    **(longlong **)puVar14 = **(longlong **)puVar14 + 4;
  }
  pfVar2 = &this->CCDTargetPenetration;
  pfVar6 = (float *)**(undefined8 **)puVar14;
  if ((float *)(*(undefined8 **)puVar14)[1] < pfVar6 + 1) {
    if ((*puVar13 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar2);
    }
  }
  else {
    *pfVar2 = *pfVar6;
    **(longlong **)puVar14 = **(longlong **)puVar14 + 4;
  }
  TArrayPrivateFriend::Serialize<FChaosVDManifoldPoint,TSizedDefaultAllocator<32>_>
            (param_1,&this->ManifoldPoints);
  piVar3 = &this->SolverID;
  piVar7 = (int *)**(undefined8 **)puVar14;
  if ((int *)(*(undefined8 **)puVar14)[1] < piVar7 + 1) {
    if ((*puVar13 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar3,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar3);
    }
  }
  else {
    *piVar3 = *piVar7;
    **(longlong **)puVar14 = **(longlong **)puVar14 + 4;
  }
  piVar3 = &this->Particle0Index;
  piVar7 = (int *)**(undefined8 **)puVar14;
  if ((int *)(*(undefined8 **)puVar14)[1] < piVar7 + 1) {
    if ((*puVar13 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar3,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar3);
    }
  }
  else {
    *piVar3 = *piVar7;
    **(longlong **)puVar14 = **(longlong **)puVar14 + 4;
  }
  piVar3 = &this->Particle1Index;
  piVar7 = (int *)**(undefined8 **)puVar14;
  if (piVar7 + 1 <= (int *)(*(undefined8 **)puVar14)[1]) {
    *piVar3 = *piVar7;
    **(longlong **)puVar14 = **(longlong **)puVar14 + 4;
    return (bool)((byte)~param_1->field_0x29 >> 1 & 1);
  }
  if ((*puVar13 & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar3,4);
    return (bool)((byte)~param_1->field_0x29 >> 1 & 1);
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar3);
  return (bool)((byte)~param_1->field_0x29 >> 1 & 1);
}

