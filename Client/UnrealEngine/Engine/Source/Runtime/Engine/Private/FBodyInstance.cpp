// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 206

// IsInstanceSimulatingPhysics @ 1478406d0

bool __thiscall FBodyInstance::IsInstanceSimulatingPhysics(FBodyInstance *this)

{
  bool bVar1;
  
  bVar1 = FBodyInstanceCore::ShouldInstanceSimulatingPhysics((FBodyInstanceCore *)this);
  if (bVar1) {
    bVar1 = IsValidBodyInstance(this);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// FBodyInstance @ 147d77160

FBodyInstance * __thiscall FBodyInstance::FBodyInstance(FBodyInstance *this,FBodyInstance *param_1)

{
  TArray<TEnumAsByte<ECollisionEnabled::Type>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<TTuple<int,FCollisionResponse>,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined1 uVar4;
  int iVar5;
  FScriptContainerElement *_Src;
  TTuple<int,FCollisionResponse> *pTVar6;
  UPhysicalMaterial *pUVar7;
  TReferenceControllerBase<1> *pTVar8;
  double dVar9;
  void *pvVar10;
  undefined3 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  FBodyInstanceDelegatesPtr FVar16;
  FBodyInstanceDelegatesPtr FVar17;
  byte bVar18;
  
  pTVar1 = &this->ShapeCollisionEnabled;
  this->_padding_ = param_1->_padding_;
  FVar17 = (FBodyInstanceDelegatesPtr)0x0;
  this->_padding_ = param_1->_padding_;
  this->InstanceBodyIndex = param_1->InstanceBodyIndex;
  this->InstanceBoneIndex = param_1->InstanceBoneIndex;
  this->PositionSolverIterationCount = param_1->PositionSolverIterationCount;
  this->VelocitySolverIterationCount = param_1->VelocitySolverIterationCount;
  this->ProjectionSolverIterationCount = param_1->ProjectionSolverIterationCount;
  (this->ObjectType).Value = (param_1->ObjectType).Value;
  this->MaskFilter = param_1->MaskFilter;
  (this->CollisionEnabled).Value = (param_1->CollisionEnabled).Value;
  piVar2 = &(this->ShapeCollisionEnabled).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->ShapeCollisionEnabled).ArrayNum;
  _Src = (param_1->ShapeCollisionEnabled).AllocatorInstance.Data;
  (this->ShapeCollisionEnabled).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar5,0,&pTVar1->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar5);
  }
  pTVar3 = &this->ShapeCollisionResponses;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->ShapeCollisionResponses).ArrayMax;
  iVar5 = (param_1->ShapeCollisionResponses).ArrayNum;
  pTVar6 = (TTuple<int,FCollisionResponse> *)
           (param_1->ShapeCollisionResponses).AllocatorInstance.Data;
  (this->ShapeCollisionResponses).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,iVar5,0,&pTVar3->AllocatorInstance,iVar5,piVar2);
    ConstructItems<TTuple<int,FCollisionResponse>,TTuple<int,FCollisionResponse>,int>
              ((pTVar3->AllocatorInstance).Data,pTVar6,iVar5);
  }
  this->CurrentSceneState = param_1->CurrentSceneState;
  this->SleepFamily = param_1->SleepFamily;
  (this->DOFMode).Value = (param_1->DOFMode).Value;
  bVar18 = (this->bUseCCD ^ param_1->bUseCCD) & 1 ^ this->field_0x3b;
  this->field_0x3b = bVar18;
  bVar18 = (bVar18 ^ param_1->field_0x3b) & 2 ^ bVar18;
  this->field_0x3b = bVar18;
  bVar18 = (bVar18 ^ param_1->field_0x3b) & 4 ^ bVar18;
  this->field_0x3b = bVar18;
  bVar18 = (bVar18 ^ param_1->field_0x3b) & 8 ^ bVar18;
  this->field_0x3b = bVar18;
  bVar18 = (bVar18 ^ param_1->field_0x3b) & 0x10 ^ bVar18;
  this->field_0x3b = bVar18;
  bVar18 = (bVar18 ^ param_1->field_0x3b) & 0x20 ^ bVar18;
  this->field_0x3b = bVar18;
  bVar18 = (bVar18 ^ param_1->field_0x3b) & 0x40 ^ bVar18;
  this->field_0x3b = bVar18;
  this->field_0x3b = (bVar18 ^ param_1->field_0x3b) & 0x7f ^ param_1->field_0x3b;
  bVar18 = (this->bSmoothEdgeCollisions ^ param_1->bSmoothEdgeCollisions) & 1 ^ this->field_0x3c;
  this->field_0x3c = bVar18;
  bVar18 = (bVar18 ^ param_1->field_0x3c) & 2 ^ bVar18;
  this->field_0x3c = bVar18;
  bVar18 = (bVar18 ^ param_1->field_0x3c) & 4 ^ bVar18;
  this->field_0x3c = bVar18;
  bVar18 = (bVar18 ^ param_1->field_0x3c) & 8 ^ bVar18;
  this->field_0x3c = bVar18;
  bVar18 = (bVar18 ^ param_1->field_0x3c) & 0x10 ^ bVar18;
  this->field_0x3c = bVar18;
  bVar18 = (bVar18 ^ param_1->field_0x3c) & 0x20 ^ bVar18;
  this->field_0x3c = bVar18;
  bVar18 = (bVar18 ^ param_1->field_0x3c) & 0x40 ^ bVar18;
  this->field_0x3c = bVar18;
  this->field_0x3c = (bVar18 ^ param_1->field_0x3c) & 0x7f ^ param_1->field_0x3c;
  bVar18 = (this->bLockZRotation ^ param_1->bLockZRotation) & 1 ^ this->field_0x3d;
  this->field_0x3d = bVar18;
  bVar18 = (bVar18 ^ param_1->field_0x3d) & 2 ^ bVar18;
  this->field_0x3d = bVar18;
  bVar18 = (bVar18 ^ param_1->field_0x3d) & 4 ^ bVar18;
  this->field_0x3d = bVar18;
  bVar18 = (bVar18 ^ param_1->field_0x3d) & 8 ^ bVar18;
  this->field_0x3d = bVar18;
  bVar18 = (bVar18 ^ param_1->field_0x3d) & 0x10 ^ bVar18;
  this->field_0x3d = bVar18;
  bVar18 = (bVar18 ^ param_1->field_0x3d) & 0x20 ^ bVar18;
  this->field_0x3d = bVar18;
  bVar18 = (bVar18 ^ param_1->field_0x3d) & 0x40 ^ bVar18;
  this->field_0x3d = bVar18;
  this->field_0x3d = (bVar18 ^ param_1->field_0x3d) & 0x7f ^ param_1->field_0x3d;
  bVar18 = (this->bPendingCollisionProfileSetup ^ param_1->bPendingCollisionProfileSetup) & 1 ^
           this->field_0x3e;
  this->field_0x3e = bVar18;
  bVar18 = (bVar18 ^ param_1->field_0x3e) & 2 ^ bVar18;
  this->field_0x3e = bVar18;
  bVar18 = (bVar18 ^ param_1->field_0x3e) & 4 ^ bVar18;
  this->field_0x3e = bVar18;
  this->field_0x3e = (bVar18 ^ param_1->field_0x3e) & 8 ^ bVar18;
  this->SolverAsyncDeltaTime = param_1->SolverAsyncDeltaTime;
  this->CollisionProfileName = param_1->CollisionProfileName;
  dVar9 = (param_1->Scale3D).field0_0x0._s_0.Y;
  (this->Scale3D).field0_0x0._s_0.X = (param_1->Scale3D).field0_0x0._s_0.X;
  (this->Scale3D).field0_0x0._s_0.Y = dVar9;
  (this->Scale3D).field0_0x0._s_0.Z = (param_1->Scale3D).field0_0x0._s_0.Z;
  FCollisionResponse::FCollisionResponse(&this->CollisionResponses,&param_1->CollisionResponses);
  this->MaxDepenetrationVelocity = param_1->MaxDepenetrationVelocity;
  this->MassInKgOverride = param_1->MassInKgOverride;
  (this->ExternalCollisionProfileBodySetup).WeakPtr =
       (param_1->ExternalCollisionProfileBodySetup).WeakPtr;
  this->LinearDamping = param_1->LinearDamping;
  this->AngularDamping = param_1->AngularDamping;
  dVar9 = (param_1->CustomDOFPlaneNormal).field0_0x0._s_0.Y;
  (this->CustomDOFPlaneNormal).field0_0x0._s_0.X = (param_1->CustomDOFPlaneNormal).field0_0x0._s_0.X
  ;
  (this->CustomDOFPlaneNormal).field0_0x0._s_0.Y = dVar9;
  (this->CustomDOFPlaneNormal).field0_0x0._s_0.Z = (param_1->CustomDOFPlaneNormal).field0_0x0._s_0.Z
  ;
  dVar9 = (param_1->COMNudge).field0_0x0._s_0.Y;
  (this->COMNudge).field0_0x0._s_0.X = (param_1->COMNudge).field0_0x0._s_0.X;
  (this->COMNudge).field0_0x0._s_0.Y = dVar9;
  (this->COMNudge).field0_0x0._s_0.Z = (param_1->COMNudge).field0_0x0._s_0.Z;
  this->MassScale = param_1->MassScale;
  this->GravityGroupIndex = param_1->GravityGroupIndex;
  dVar9 = (param_1->InertiaTensorScale).field0_0x0._s_0.Y;
  (this->InertiaTensorScale).field0_0x0._s_0.X = (param_1->InertiaTensorScale).field0_0x0._s_0.X;
  (this->InertiaTensorScale).field0_0x0._s_0.Y = dVar9;
  (this->InertiaTensorScale).field0_0x0._s_0.Z = (param_1->InertiaTensorScale).field0_0x0._s_0.Z;
  this->DOFConstraint = param_1->DOFConstraint;
  this->WeldParent = param_1->WeldParent;
  uVar11 = *(undefined3 *)&(param_1->WalkableSlopeOverride).field_0x1;
  fVar12 = (param_1->WalkableSlopeOverride).WalkableSlopeAngle;
  fVar13 = (param_1->WalkableSlopeOverride).CachedSlopeAngle;
  fVar14 = (param_1->WalkableSlopeOverride).CachedSlopeCos;
  (this->WalkableSlopeOverride).WalkableSlopeBehavior =
       (TEnumAsByte<EWalkableSlopeBehavior>)
       (param_1->WalkableSlopeOverride).WalkableSlopeBehavior.Value;
  *(undefined3 *)&(this->WalkableSlopeOverride).field_0x1 = uVar11;
  (this->WalkableSlopeOverride).WalkableSlopeAngle = fVar12;
  (this->WalkableSlopeOverride).CachedSlopeAngle = fVar13;
  (this->WalkableSlopeOverride).CachedSlopeCos = fVar14;
  pUVar7 = (param_1->PhysMaterialOverride).field0_0x0.DebugPtr;
  (this->PhysMaterialOverride).field0_0x0.DebugPtr = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UPhysicalMaterial *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  this->MaxAngularVelocity = param_1->MaxAngularVelocity;
  this->CustomSleepThresholdMultiplier = param_1->CustomSleepThresholdMultiplier;
  this->StabilizationThresholdMultiplier = param_1->StabilizationThresholdMultiplier;
  this->PhysicsBlendWeight = param_1->PhysicsBlendWeight;
  this->ActorHandle = param_1->ActorHandle;
  (this->CharDebugName).Object = (param_1->CharDebugName).Object;
  pTVar8 = (param_1->CharDebugName).SharedReferenceCount.ReferenceController;
  (this->CharDebugName).SharedReferenceCount.ReferenceController = pTVar8;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->OwnerComponent).WeakPtr = (param_1->OwnerComponent).WeakPtr;
  this->BodyInstanceOwner = param_1->BodyInstanceOwner;
  (this->SourceObject).WeakPtr = (param_1->SourceObject).WeakPtr;
  this->BodyInstanceDelegates = (FBodyInstanceDelegatesPtr)0x0;
  if (param_1->BodyInstanceDelegates != (FBodyInstanceDelegatesPtr)0x0) {
    FVar16 = (FBodyInstanceDelegatesPtr)::operator_new(0x38);
    if (FVar16 != (FBodyInstanceDelegatesPtr)0x0) {
      *(undefined8 *)FVar16 = 0;
      *(undefined8 *)((longlong)FVar16 + 8) = 0;
      *(undefined4 *)((longlong)FVar16 + 0x10) = 0;
      *(undefined8 *)((longlong)FVar16 + 0x18) = 0;
      *(undefined8 *)((longlong)FVar16 + 0x20) = 0;
      *(undefined8 *)((longlong)FVar16 + 0x28) = 0;
      *(undefined8 *)((longlong)FVar16 + 0x30) = 2;
      FVar17 = FVar16;
    }
    FVar16 = this->BodyInstanceDelegates;
    if ((FVar16 != FVar17) &&
       (this->BodyInstanceDelegates = FVar17, FVar16 != (FBodyInstanceDelegatesPtr)0x0)) {
      DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
                (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)((longlong)FVar16 + 0x20),
                 *(int *)((longlong)FVar16 + 0x28));
      if (*(void **)((longlong)FVar16 + 0x20) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)FVar16 + 0x20));
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)((longlong)FVar16 + 0x18));
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)FVar16);
      ::operator_delete((void *)FVar16,0x38);
    }
    FBodyInstanceDelegates::operator=
              ((FBodyInstanceDelegates *)this->BodyInstanceDelegates,
               (FBodyInstanceDelegates *)param_1->BodyInstanceDelegates);
  }
  uVar15 = *(undefined4 *)&(param_1->PhysicsUserData).field_0x4;
  pvVar10 = (param_1->PhysicsUserData).Payload;
  (this->PhysicsUserData).Type = (param_1->PhysicsUserData).Type;
  *(undefined4 *)&(this->PhysicsUserData).field_0x4 = uVar15;
  (this->PhysicsUserData).Payload = pvVar10;
  (this->ShapeToBodiesMap).Object = (param_1->ShapeToBodiesMap).Object;
  pTVar8 = (param_1->ShapeToBodiesMap).SharedReferenceCount.ReferenceController;
  (this->ShapeToBodiesMap).SharedReferenceCount.ReferenceController = pTVar8;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// operator= @ 147d7bed0

FBodyInstance * __thiscall FBodyInstance::operator=(FBodyInstance *this,FBodyInstance *param_1)

{
  TArray<TEnumAsByte<ECollisionEnabled::Type>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<TTuple<int,FCollisionResponse>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FResponseChannel,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FResponseChannel,TSizedDefaultAllocator<32>_> *pTVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  TTuple<int,FCollisionResponse> *pTVar10;
  UPhysicalMaterial *pUVar11;
  TReferenceControllerBase<1> *pTVar12;
  TArray<char,TSizedDefaultAllocator<32>_> *pTVar13;
  TMap<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>
  *pTVar14;
  double dVar15;
  undefined8 uVar16;
  TReferenceControllerBase<1> *pTVar17;
  void *pvVar18;
  undefined3 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  FBodyInstanceDelegatesPtr FVar24;
  FBodyInstanceDelegatesPtr FVar25;
  byte bVar26;
  
  pTVar1 = &this->ShapeCollisionEnabled;
  this->_padding_ = param_1->_padding_;
  FVar25 = (FBodyInstanceDelegatesPtr)0x0;
  this->_padding_ = param_1->_padding_;
  this->InstanceBodyIndex = param_1->InstanceBodyIndex;
  this->InstanceBoneIndex = param_1->InstanceBoneIndex;
  this->PositionSolverIterationCount = param_1->PositionSolverIterationCount;
  this->VelocitySolverIterationCount = param_1->VelocitySolverIterationCount;
  this->ProjectionSolverIterationCount = param_1->ProjectionSolverIterationCount;
  (this->ObjectType).Value = (param_1->ObjectType).Value;
  this->MaskFilter = param_1->MaskFilter;
  (this->CollisionEnabled).Value = (param_1->CollisionEnabled).Value;
  if (pTVar1 != &param_1->ShapeCollisionEnabled) {
    iVar7 = (param_1->ShapeCollisionEnabled).ArrayNum;
    piVar2 = &(this->ShapeCollisionEnabled).ArrayMax;
    pFVar9 = (param_1->ShapeCollisionEnabled).AllocatorInstance.Data;
    (this->ShapeCollisionEnabled).ArrayNum = iVar7;
    if ((iVar7 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar7,*piVar2,&pTVar1->AllocatorInstance,iVar7,piVar2);
      if (iVar7 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,pFVar9,(longlong)iVar7);
      }
    }
  }
  pTVar3 = &this->ShapeCollisionResponses;
  if (pTVar3 != &param_1->ShapeCollisionResponses) {
    DestructItems<TTuple<int,FCollisionResponse>,int>
              ((TTuple<int,FCollisionResponse> *)(pTVar3->AllocatorInstance).Data,
               (this->ShapeCollisionResponses).ArrayNum);
    iVar7 = (param_1->ShapeCollisionResponses).ArrayNum;
    piVar2 = &(this->ShapeCollisionResponses).ArrayMax;
    pTVar10 = (TTuple<int,FCollisionResponse> *)
              (param_1->ShapeCollisionResponses).AllocatorInstance.Data;
    (this->ShapeCollisionResponses).ArrayNum = iVar7;
    if ((iVar7 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,iVar7,*piVar2,&pTVar3->AllocatorInstance,iVar7,piVar2);
      ConstructItems<TTuple<int,FCollisionResponse>,TTuple<int,FCollisionResponse>,int>
                ((pTVar3->AllocatorInstance).Data,pTVar10,iVar7);
    }
  }
  this->CurrentSceneState = param_1->CurrentSceneState;
  this->SleepFamily = param_1->SleepFamily;
  (this->DOFMode).Value = (param_1->DOFMode).Value;
  bVar26 = (this->bUseCCD ^ param_1->bUseCCD) & 1 ^ this->field_0x3b;
  this->field_0x3b = bVar26;
  bVar26 = (bVar26 ^ param_1->field_0x3b) & 2 ^ bVar26;
  this->field_0x3b = bVar26;
  bVar26 = (bVar26 ^ param_1->field_0x3b) & 4 ^ bVar26;
  this->field_0x3b = bVar26;
  bVar26 = (bVar26 ^ param_1->field_0x3b) & 8 ^ bVar26;
  this->field_0x3b = bVar26;
  bVar26 = (bVar26 ^ param_1->field_0x3b) & 0x10 ^ bVar26;
  this->field_0x3b = bVar26;
  bVar26 = (bVar26 ^ param_1->field_0x3b) & 0x20 ^ bVar26;
  this->field_0x3b = bVar26;
  bVar26 = (bVar26 ^ param_1->field_0x3b) & 0x40 ^ bVar26;
  this->field_0x3b = bVar26;
  this->field_0x3b = (bVar26 ^ param_1->field_0x3b) & 0x7f ^ param_1->field_0x3b;
  bVar26 = (this->bSmoothEdgeCollisions ^ param_1->bSmoothEdgeCollisions) & 1 ^ this->field_0x3c;
  this->field_0x3c = bVar26;
  bVar26 = (bVar26 ^ param_1->field_0x3c) & 2 ^ bVar26;
  this->field_0x3c = bVar26;
  bVar26 = (bVar26 ^ param_1->field_0x3c) & 4 ^ bVar26;
  this->field_0x3c = bVar26;
  bVar26 = (bVar26 ^ param_1->field_0x3c) & 8 ^ bVar26;
  this->field_0x3c = bVar26;
  bVar26 = (bVar26 ^ param_1->field_0x3c) & 0x10 ^ bVar26;
  this->field_0x3c = bVar26;
  bVar26 = (bVar26 ^ param_1->field_0x3c) & 0x20 ^ bVar26;
  this->field_0x3c = bVar26;
  bVar26 = (bVar26 ^ param_1->field_0x3c) & 0x40 ^ bVar26;
  this->field_0x3c = bVar26;
  pTVar4 = &(this->CollisionResponses).ResponseArray;
  this->field_0x3c = (bVar26 ^ param_1->field_0x3c) & 0x7f ^ param_1->field_0x3c;
  bVar26 = (this->bLockZRotation ^ param_1->bLockZRotation) & 1 ^ this->field_0x3d;
  this->field_0x3d = bVar26;
  bVar26 = (bVar26 ^ param_1->field_0x3d) & 2 ^ bVar26;
  this->field_0x3d = bVar26;
  bVar26 = (bVar26 ^ param_1->field_0x3d) & 4 ^ bVar26;
  this->field_0x3d = bVar26;
  bVar26 = (bVar26 ^ param_1->field_0x3d) & 8 ^ bVar26;
  this->field_0x3d = bVar26;
  bVar26 = (bVar26 ^ param_1->field_0x3d) & 0x10 ^ bVar26;
  this->field_0x3d = bVar26;
  bVar26 = (bVar26 ^ param_1->field_0x3d) & 0x20 ^ bVar26;
  this->field_0x3d = bVar26;
  bVar26 = (bVar26 ^ param_1->field_0x3d) & 0x40 ^ bVar26;
  this->field_0x3d = bVar26;
  this->field_0x3d = (bVar26 ^ param_1->field_0x3d) & 0x7f ^ param_1->field_0x3d;
  bVar26 = (this->bPendingCollisionProfileSetup ^ param_1->bPendingCollisionProfileSetup) & 1 ^
           this->field_0x3e;
  this->field_0x3e = bVar26;
  bVar26 = (bVar26 ^ param_1->field_0x3e) & 2 ^ bVar26;
  this->field_0x3e = bVar26;
  bVar26 = (bVar26 ^ param_1->field_0x3e) & 4 ^ bVar26;
  this->field_0x3e = bVar26;
  pTVar5 = &(param_1->CollisionResponses).ResponseArray;
  this->field_0x3e = (bVar26 ^ param_1->field_0x3e) & 8 ^ bVar26;
  this->SolverAsyncDeltaTime = param_1->SolverAsyncDeltaTime;
  this->CollisionProfileName = param_1->CollisionProfileName;
  dVar15 = (param_1->Scale3D).field0_0x0._s_0.Y;
  (this->Scale3D).field0_0x0._s_0.X = (param_1->Scale3D).field0_0x0._s_0.X;
  (this->Scale3D).field0_0x0._s_0.Y = dVar15;
  (this->Scale3D).field0_0x0._s_0.Z = (param_1->Scale3D).field0_0x0._s_0.Z;
  uVar16 = *(undefined8 *)
            ((longlong)&(param_1->CollisionResponses).ResponseToChannels.field0_0x0 + 8);
  *(undefined8 *)&(this->CollisionResponses).ResponseToChannels.field0_0x0 =
       *(undefined8 *)&(param_1->CollisionResponses).ResponseToChannels.field0_0x0;
  *(undefined8 *)((longlong)&(this->CollisionResponses).ResponseToChannels.field0_0x0 + 8) = uVar16;
  uVar16 = *(undefined8 *)
            ((longlong)&(param_1->CollisionResponses).ResponseToChannels.field0_0x0 + 0x18);
  *(undefined8 *)((longlong)&(this->CollisionResponses).ResponseToChannels.field0_0x0 + 0x10) =
       *(undefined8 *)
        ((longlong)&(param_1->CollisionResponses).ResponseToChannels.field0_0x0 + 0x10);
  *(undefined8 *)((longlong)&(this->CollisionResponses).ResponseToChannels.field0_0x0 + 0x18) =
       uVar16;
  if (pTVar4 != pTVar5) {
    iVar7 = (param_1->CollisionResponses).ResponseArray.ArrayNum;
    piVar2 = &(this->CollisionResponses).ResponseArray.ArrayMax;
    pFVar9 = (pTVar5->AllocatorInstance).Data;
    iVar8 = *piVar2;
    (this->CollisionResponses).ResponseArray.ArrayNum = iVar7;
    if ((iVar7 == 0) && (iVar8 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,iVar7,iVar8,&pTVar4->AllocatorInstance,iVar7,piVar2);
      if (iVar7 != 0) {
        memcpy((pTVar4->AllocatorInstance).Data,pFVar9,(longlong)iVar7 * 0xc);
      }
    }
  }
  this->MaxDepenetrationVelocity = param_1->MaxDepenetrationVelocity;
  this->MassInKgOverride = param_1->MassInKgOverride;
  (this->ExternalCollisionProfileBodySetup).WeakPtr =
       (param_1->ExternalCollisionProfileBodySetup).WeakPtr;
  this->LinearDamping = param_1->LinearDamping;
  this->AngularDamping = param_1->AngularDamping;
  dVar15 = (param_1->CustomDOFPlaneNormal).field0_0x0._s_0.Y;
  (this->CustomDOFPlaneNormal).field0_0x0._s_0.X = (param_1->CustomDOFPlaneNormal).field0_0x0._s_0.X
  ;
  (this->CustomDOFPlaneNormal).field0_0x0._s_0.Y = dVar15;
  (this->CustomDOFPlaneNormal).field0_0x0._s_0.Z = (param_1->CustomDOFPlaneNormal).field0_0x0._s_0.Z
  ;
  dVar15 = (param_1->COMNudge).field0_0x0._s_0.Y;
  (this->COMNudge).field0_0x0._s_0.X = (param_1->COMNudge).field0_0x0._s_0.X;
  (this->COMNudge).field0_0x0._s_0.Y = dVar15;
  (this->COMNudge).field0_0x0._s_0.Z = (param_1->COMNudge).field0_0x0._s_0.Z;
  this->MassScale = param_1->MassScale;
  this->GravityGroupIndex = param_1->GravityGroupIndex;
  dVar15 = (param_1->InertiaTensorScale).field0_0x0._s_0.Y;
  (this->InertiaTensorScale).field0_0x0._s_0.X = (param_1->InertiaTensorScale).field0_0x0._s_0.X;
  (this->InertiaTensorScale).field0_0x0._s_0.Y = dVar15;
  (this->InertiaTensorScale).field0_0x0._s_0.Z = (param_1->InertiaTensorScale).field0_0x0._s_0.Z;
  this->DOFConstraint = param_1->DOFConstraint;
  this->WeldParent = param_1->WeldParent;
  uVar19 = *(undefined3 *)&(param_1->WalkableSlopeOverride).field_0x1;
  fVar20 = (param_1->WalkableSlopeOverride).WalkableSlopeAngle;
  fVar21 = (param_1->WalkableSlopeOverride).CachedSlopeAngle;
  fVar22 = (param_1->WalkableSlopeOverride).CachedSlopeCos;
  (this->WalkableSlopeOverride).WalkableSlopeBehavior =
       (TEnumAsByte<EWalkableSlopeBehavior>)
       (param_1->WalkableSlopeOverride).WalkableSlopeBehavior.Value;
  *(undefined3 *)&(this->WalkableSlopeOverride).field_0x1 = uVar19;
  (this->WalkableSlopeOverride).WalkableSlopeAngle = fVar20;
  (this->WalkableSlopeOverride).CachedSlopeAngle = fVar21;
  (this->WalkableSlopeOverride).CachedSlopeCos = fVar22;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar11 = (param_1->PhysMaterialOverride).field0_0x0.DebugPtr,
     pUVar11 != (UPhysicalMaterial *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar11);
  }
  (this->PhysMaterialOverride).field0_0x0 = (param_1->PhysMaterialOverride).field0_0x0;
  this->MaxAngularVelocity = param_1->MaxAngularVelocity;
  this->CustomSleepThresholdMultiplier = param_1->CustomSleepThresholdMultiplier;
  this->StabilizationThresholdMultiplier = param_1->StabilizationThresholdMultiplier;
  this->PhysicsBlendWeight = param_1->PhysicsBlendWeight;
  this->ActorHandle = param_1->ActorHandle;
  pTVar12 = (param_1->CharDebugName).SharedReferenceCount.ReferenceController;
  pTVar13 = (param_1->CharDebugName).Object;
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar17 = (this->CharDebugName).SharedReferenceCount.ReferenceController;
  (this->CharDebugName).Object = pTVar13;
  (this->CharDebugName).SharedReferenceCount.ReferenceController = pTVar12;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
  (this->OwnerComponent).WeakPtr = (param_1->OwnerComponent).WeakPtr;
  this->BodyInstanceOwner = param_1->BodyInstanceOwner;
  (this->SourceObject).WeakPtr = (param_1->SourceObject).WeakPtr;
  FVar24 = this->BodyInstanceDelegates;
  if (param_1->BodyInstanceDelegates == (FBodyInstanceDelegatesPtr)0x0) {
    if (FVar24 != (FBodyInstanceDelegatesPtr)0x0) {
      this->BodyInstanceDelegates = (FBodyInstanceDelegatesPtr)0x0;
      DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
                (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)((longlong)FVar24 + 0x20),
                 *(int *)((longlong)FVar24 + 0x28));
      if (*(void **)((longlong)FVar24 + 0x20) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)FVar24 + 0x20));
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)((longlong)FVar24 + 0x18));
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)FVar24);
      ::operator_delete((void *)FVar24,0x38);
    }
  }
  else {
    if (FVar24 == (FBodyInstanceDelegatesPtr)0x0) {
      FVar24 = (FBodyInstanceDelegatesPtr)::operator_new(0x38);
      if (FVar24 != (FBodyInstanceDelegatesPtr)0x0) {
        *(undefined8 *)FVar24 = 0;
        *(undefined8 *)((longlong)FVar24 + 8) = 0;
        *(undefined4 *)((longlong)FVar24 + 0x10) = 0;
        *(undefined8 *)((longlong)FVar24 + 0x18) = 0;
        *(undefined8 *)((longlong)FVar24 + 0x20) = 0;
        *(undefined8 *)((longlong)FVar24 + 0x28) = 0;
        *(undefined8 *)((longlong)FVar24 + 0x30) = 2;
        FVar25 = FVar24;
      }
      FVar24 = this->BodyInstanceDelegates;
      if ((FVar24 != FVar25) &&
         (this->BodyInstanceDelegates = FVar25, FVar24 != (FBodyInstanceDelegatesPtr)0x0)) {
        DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
                  (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
                    ((longlong)FVar24 + 0x20),*(int *)((longlong)FVar24 + 0x28));
        if (*(void **)((longlong)FVar24 + 0x20) != (void *)0x0) {
          FMemory::Free(*(void **)((longlong)FVar24 + 0x20));
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)((longlong)FVar24 + 0x18));
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)FVar24);
        ::operator_delete((void *)FVar24,0x38);
      }
    }
    FBodyInstanceDelegates::operator=
              ((FBodyInstanceDelegates *)this->BodyInstanceDelegates,
               (FBodyInstanceDelegates *)param_1->BodyInstanceDelegates);
  }
  uVar23 = *(undefined4 *)&(param_1->PhysicsUserData).field_0x4;
  pvVar18 = (param_1->PhysicsUserData).Payload;
  (this->PhysicsUserData).Type = (param_1->PhysicsUserData).Type;
  *(undefined4 *)&(this->PhysicsUserData).field_0x4 = uVar23;
  (this->PhysicsUserData).Payload = pvVar18;
  pTVar12 = (param_1->ShapeToBodiesMap).SharedReferenceCount.ReferenceController;
  pTVar14 = (param_1->ShapeToBodiesMap).Object;
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar17 = (this->ShapeToBodiesMap).SharedReferenceCount.ReferenceController;
  (this->ShapeToBodiesMap).Object = pTVar14;
  (this->ShapeToBodiesMap).SharedReferenceCount.ReferenceController = pTVar12;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
  return this;
}

// StaticStruct @ 1481b9ad0

UScriptStruct * __cdecl FBodyInstance::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBodyInstance.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FBodyInstance.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBodyInstance,(UObject *)pUVar1,L"BodyInstance");
  }
  return Z_Registration_Info_UScriptStruct_FBodyInstance.OuterSingleton;
}

// OverlapTestForBodiesImpl<TSizedDefaultAllocator<32>_> @ 1481c31f0

bool __thiscall
FBodyInstance::OverlapTestForBodiesImpl<TSizedDefaultAllocator<32>_>
          (FBodyInstance *this,TVector<double> *param_1,TQuat<double> *param_2,
          TArray<FBodyInstance_*,TSizedDefaultAllocator<32>_> *param_3,bool param_4)

{
  undefined1 local_res8 [8];
  FSingleParticlePhysicsProxy *local_res10 [3];
  code *local_48;
  TQuat<double> **local_40;
  TQuat<double> *local_38;
  TVector<double> *local_30;
  TArray<FBodyInstance_*,TSizedDefaultAllocator<32>_> *local_28;
  undefined1 *local_20;
  bool *local_18;
  
  local_20 = local_res8;
  local_18 = &param_4;
  local_res8[0] = 0;
  local_40 = &local_38;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`FBodyInstance::OverlapTestForBodiesImpl<TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
             ::Call;
  local_res10[0] = this->ActorHandle;
  local_38 = param_2;
  local_30 = param_1;
  local_28 = param_3;
  FPhysInterface_Chaos::ExecuteRead
            (local_res10,
             (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_48);
  return (bool)local_res8[0];
}

// OverlapTestForBodiesImpl<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> @ 1481c3260

bool __thiscall
FBodyInstance::OverlapTestForBodiesImpl<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          (FBodyInstance *this,TVector<double> *param_1,TQuat<double> *param_2,
          TArray<FBodyInstance_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *param_3,
          bool param_4)

{
  undefined1 local_res8 [8];
  FSingleParticlePhysicsProxy *local_res10 [3];
  code *local_48;
  TQuat<double> **local_40;
  TQuat<double> *local_38;
  TVector<double> *local_30;
  TArray<FBodyInstance_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *local_28;
  undefined1 *local_20;
  bool *local_18;
  
  local_20 = local_res8;
  local_18 = &param_4;
  local_res8[0] = 0;
  local_40 = &local_38;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`FBodyInstance::OverlapTestForBodiesImpl<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
             ::Call;
  local_res10[0] = this->ActorHandle;
  local_38 = param_2;
  local_30 = param_1;
  local_28 = param_3;
  FPhysInterface_Chaos::ExecuteRead
            (local_res10,
             (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_48);
  return (bool)local_res8[0];
}

// FBodyInstance @ 1481c7170

FBodyInstance * __thiscall FBodyInstance::FBodyInstance(FBodyInstance *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  undefined8 uVar4;
  UPhysicsSettings *pUVar5;
  undefined8 local_res8;
  
  FBodyInstanceCore::FBodyInstanceCore((FBodyInstanceCore *)this);
  this->bLockZRotation = '\0';
  this->bInterpolateWhenSubStepping = '\0';
  this->bOverrideIterationCounts = '\0';
  this->bOverrideWalkableSlopeOnInstance = '\0';
  this->bOverrideMaxDepenetrationVelocity = '\0';
  this->bOverrideMaxAngularVelocity = '\0';
  this->bInterpolateWhenSubStepping = '\x01';
  (this->ShapeCollisionEnabled).ArrayNum = 0;
  (this->ShapeCollisionEnabled).ArrayMax = 0;
  this->InstanceBodyIndex = -1;
  (this->ShapeCollisionResponses).ArrayNum = 0;
  (this->ShapeCollisionResponses).ArrayMax = 0;
  this->InstanceBoneIndex = -1;
  this->PositionSolverIterationCount = '\b';
  this->VelocitySolverIterationCount = '\x02';
  puVar2 = &this->field_0x3e;
  this->bPendingCollisionProfileSetup = '\0';
  this->bOverrideSolverAsyncDeltaTime = '\0';
  this->bOneWayInteraction = '\0';
  this->bInertiaConditioning = '\x01';
  this->ProjectionSolverIterationCount = '\x01';
  this->ObjectType = '\0';
  this->MaskFilter = '\0';
  this->CollisionEnabled = '\x03';
  this->CurrentSceneState = NotAdded;
  this->SleepFamily = Normal;
  this->DOFMode = '\0';
  this->field_0x3b = 0x10;
  puVar1 = &this->field_0x3c;
  this->bSmoothEdgeCollisions = '\0';
  this->bLockYRotation = '\0';
  this->bLockXRotation = '\0';
  this->bLockZTranslation = '\0';
  this->bLockYTranslation = '\0';
  this->bLockXTranslation = '\0';
  this->bLockRotation = '\x01';
  this->bLockTranslation = '\x01';
  this->SolverAsyncDeltaTime = 0.016666668;
  (this->ShapeCollisionEnabled).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShapeCollisionResponses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->CollisionProfileName = UCollisionProfile::CustomCollisionProfileName;
  (this->Scale3D).field0_0x0._s_0.X = 1.0;
  (this->Scale3D).field0_0x0._s_0.Y = 1.0;
  (this->Scale3D).field0_0x0._s_0.Z = 1.0;
  FCollisionResponseContainer::FCollisionResponseContainer
            (&(this->CollisionResponses).ResponseToChannels);
  (this->CollisionResponses).ResponseArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CollisionResponses).ResponseArray.ArrayNum = 0;
  (this->CollisionResponses).ResponseArray.ArrayMax = 0;
  this->MaxDepenetrationVelocity = 0.0;
  this->MassInKgOverride = 100.0;
  (this->ExternalCollisionProfileBodySetup).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=
            (&(this->ExternalCollisionProfileBodySetup).WeakPtr,(FObjectPtr)&local_res8);
  this->LinearDamping = 0.01;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->AngularDamping = 0.0;
  (this->CustomDOFPlaneNormal).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->CustomDOFPlaneNormal).field0_0x0._s_0.Y = (double)uVar4;
  (this->CustomDOFPlaneNormal).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->COMNudge).field0_0x0._s_0.X = 0.0;
  (this->COMNudge).field0_0x0._s_0.Y = 0.0;
  (this->COMNudge).field0_0x0._s_0.Z = 0.0;
  (this->InertiaTensorScale).field0_0x0._s_0.X = 1.0;
  (this->InertiaTensorScale).field0_0x0._s_0.Y = 1.0;
  (this->InertiaTensorScale).field0_0x0._s_0.Z = 1.0;
  (this->WalkableSlopeOverride).WalkableSlopeBehavior.Value = '\0';
  (this->WalkableSlopeOverride).WalkableSlopeAngle = 0.0;
  (this->WalkableSlopeOverride).CachedSlopeAngle = 0.0;
  (this->WalkableSlopeOverride).CachedSlopeCos = 1.0;
  (this->PhysMaterialOverride).field0_0x0.DebugPtr = (UPhysicalMaterial *)0x0;
  (this->CharDebugName).Object = (TArray<char,TSizedDefaultAllocator<32>_> *)0x0;
  (this->CharDebugName).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->OwnerComponent).WeakPtr = (FWeakObjectPtr)0x0;
  (this->SourceObject).WeakPtr = (FWeakObjectPtr)0x0;
  this->BodyInstanceDelegates = (FBodyInstanceDelegatesPtr)0x0;
  (this->PhysicsUserData).Type = Invalid;
  (this->PhysicsUserData).Payload = (void *)0x0;
  (this->ShapeToBodiesMap).Object =
       (TMap<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>
        *)0x0;
  (this->ShapeToBodiesMap).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->MassScale = 1.0;
  this->GravityGroupIndex = '\0';
  this->DOFConstraint = (FConstraintInstance *)0x0;
  this->WeldParent = (FBodyInstance *)0x0;
  this->CustomSleepThresholdMultiplier = 1.0;
  this->StabilizationThresholdMultiplier = 1.0;
  this->PhysicsBlendWeight = 0.0;
  this->ActorHandle = (FSingleParticlePhysicsProxy *)0x0;
  this->BodyInstanceOwner = (IPhysicsBodyInstanceOwner *)0x0;
  pUVar5 = UPhysicsSettings::Get();
  this->MaxAngularVelocity = *(float *)&pUVar5->_padding_;
  return this;
}

// ~FBodyInstance @ 1481c8ef0

void __thiscall FBodyInstance::~FBodyInstance(FBodyInstance *this)

{
  FBodyInstanceDelegatesPtr this_00;
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ShapeToBodiesMap).SharedReferenceCount.ReferenceController);
  this_00 = this->BodyInstanceDelegates;
  if (this_00 != (FBodyInstanceDelegatesPtr)0x0) {
    DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
              (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)((longlong)this_00 + 0x20),
               *(int *)((longlong)this_00 + 0x28));
    if (*(void **)((longlong)this_00 + 0x20) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)this_00 + 0x20));
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)((longlong)this_00 + 0x18));
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
    ::operator_delete((void *)this_00,0x38);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CharDebugName).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->CollisionResponses).ResponseArray.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TTuple<int,FCollisionResponse>,int>
            ((TTuple<int,FCollisionResponse> *)
             (this->ShapeCollisionResponses).AllocatorInstance.Data,
             (this->ShapeCollisionResponses).ArrayNum);
  pFVar1 = (this->ShapeCollisionResponses).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ShapeCollisionEnabled).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator() @ 1481c9d40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`FBodyInstance::OverlapTestForBodiesImpl<TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>::operator()
          (void *this,FSingleParticlePhysicsProxy **param_1)

{
  undefined8 *puVar1;
  double *pdVar2;
  double *pdVar3;
  longlong *plVar4;
  FBodyInstance *pFVar5;
  longlong lVar6;
  bool bVar7;
  FImplicitObject *pFVar8;
  FPhysicsGeometryCollection_Chaos FVar9;
  ulonglong uVar10;
  ForElementType<FPhysicsShapeReference_Chaos> FVar11;
  ForElementType<FPhysicsShapeReference_Chaos> this_00;
  undefined8 *puVar12;
  ulonglong uVar13;
  undefined1 auStack_308 [32];
  undefined1 local_2d8 [4];
  uint local_2d4;
  FPhysicsShapeReference_Chaos local_2d0;
  TTransform<double> local_2b8;
  TArray<FPhysicsShapeReference_Chaos,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  local_258;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_308;
  pdVar2 = *(double **)this;
  pdVar3 = *(double **)((longlong)this + 8);
  local_2b8.Rotation.ZW.m128d_f64[0] = pdVar2[2];
  local_2b8.Rotation.ZW.m128d_f64[1] = pdVar2[3];
  local_2b8.Rotation.XY.m128d_f64[0] = *pdVar2;
  local_2b8.Rotation.XY.m128d_f64[1] = pdVar2[1];
  local_2b8.Translation.XY.m128d_f64[0] = *pdVar3;
  local_2b8.Translation.XY.m128d_f64[1] = pdVar3[1];
  local_2b8.Translation.ZW.m128d_f64[0] = pdVar3[2];
  local_2b8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_2b8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  local_2b8.Translation.ZW.m128d_f64[1] = 0.0;
  local_2b8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_2b8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_258.AllocatorInstance.SecondaryData = (ForElementType<FPhysicsShapeReference_Chaos>)0x0;
  local_258.ArrayNum = 0;
  local_258.ArrayMax = 0x20;
  FChaosEngineInterface::GetAllShapes_AssumedLocked(param_1,&local_258);
  uVar10 = (ulonglong)local_258.ArrayNum;
  local_2d4 = local_258.ArrayNum;
  this_00 = (ForElementType<FPhysicsShapeReference_Chaos>)&local_258;
  if (local_258.AllocatorInstance.SecondaryData != (ForElementType<FPhysicsShapeReference_Chaos>)0x0
     ) {
    this_00 = local_258.AllocatorInstance.SecondaryData;
  }
  FVar11 = (ForElementType<FPhysicsShapeReference_Chaos>)(uVar10 * 0x10 + (longlong)this_00);
  uVar13 = uVar10;
  local_2d0.ActorRef = (FSingleParticlePhysicsProxy *)FVar11;
  while( true ) {
    if ((int)uVar10 != (int)uVar13) {
      `TCheckedPointerIterator<FPhysicsShapeReference_Chaos,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_2d8);
    }
    if (this_00 == FVar11) break;
    pFVar8 = FPhysicsShapeReference_Chaos::GetGeometry((FPhysicsShapeReference_Chaos *)this_00);
    if (pFVar8->bIsConvex != false) {
      plVar4 = *(longlong **)((longlong)this + 0x10);
      puVar12 = (undefined8 *)*plVar4;
      lVar6 = plVar4[1];
      puVar1 = puVar12 + (int)lVar6;
      while( true ) {
        if ((int)plVar4[1] != (int)lVar6) {
          `TCheckedPointerIterator<FBodyInstance_*_const,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_2d8);
        }
        FVar11 = (ForElementType<FPhysicsShapeReference_Chaos>)local_2d0.ActorRef;
        if (puVar12 == puVar1) break;
        pFVar5 = (FBodyInstance *)*puVar12;
        bVar7 = *(bool *)*(undefined8 *)((longlong)this + 0x20);
        FVar9 = FChaosEngineInterface::GetGeometryCollection(&local_2d0);
        bVar7 = FPhysInterface_Chaos::Overlap_Geom
                          (pFVar5,(FPhysicsGeometryCollection_Chaos *)FVar9.Geom,&local_2b8,
                           (FMTDResult *)0x0,bVar7);
        *(bool *)*(undefined8 *)((longlong)this + 0x18) = bVar7;
        FPhysicsGeometryCollection_Chaos::~FPhysicsGeometryCollection_Chaos
                  ((FPhysicsGeometryCollection_Chaos *)&local_2d0);
        if (**(char **)((longlong)this + 0x18) != '\0') goto LAB_1481c9ed2;
        puVar12 = puVar12 + 1;
      }
    }
    uVar10 = (ulonglong)(uint)local_258.ArrayNum;
    this_00 = (ForElementType<FPhysicsShapeReference_Chaos>)((longlong)this_00 + 0x10);
    uVar13 = (ulonglong)local_2d4;
  }
LAB_1481c9ed2:
  if (local_258.AllocatorInstance.SecondaryData != (ForElementType<FPhysicsShapeReference_Chaos>)0x0
     ) {
    FMemory::Free((void *)local_258.AllocatorInstance.SecondaryData);
  }
  return;
}

// operator() @ 1481c9f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`FBodyInstance::OverlapTestForBodiesImpl<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>'
::__l2::<lambda_1>::operator()(void *this,FSingleParticlePhysicsProxy **param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  double *pdVar4;
  double *pdVar5;
  FBodyInstance *pFVar6;
  bool bVar7;
  FImplicitObject *pFVar8;
  FPhysicsGeometryCollection_Chaos FVar9;
  ulonglong uVar10;
  ForElementType<FPhysicsShapeReference_Chaos> FVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  ForElementType<FPhysicsShapeReference_Chaos> this_00;
  undefined1 auStack_308 [32];
  undefined1 local_2d8 [4];
  uint local_2d4;
  FPhysicsShapeReference_Chaos local_2d0;
  TTransform<double> local_2b8;
  TArray<FPhysicsShapeReference_Chaos,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  local_258;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_308;
  pdVar4 = *(double **)this;
  pdVar5 = *(double **)((longlong)this + 8);
  local_2b8.Rotation.ZW.m128d_f64[0] = pdVar4[2];
  local_2b8.Rotation.ZW.m128d_f64[1] = pdVar4[3];
  local_2b8.Rotation.XY.m128d_f64[0] = *pdVar4;
  local_2b8.Rotation.XY.m128d_f64[1] = pdVar4[1];
  local_2b8.Translation.XY.m128d_f64[0] = *pdVar5;
  local_2b8.Translation.XY.m128d_f64[1] = pdVar5[1];
  local_2b8.Translation.ZW.m128d_f64[0] = pdVar5[2];
  local_2b8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_2b8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  local_2b8.Translation.ZW.m128d_f64[1] = 0.0;
  local_2b8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_2b8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_258.AllocatorInstance.SecondaryData = (ForElementType<FPhysicsShapeReference_Chaos>)0x0;
  local_258.ArrayNum = 0;
  local_258.ArrayMax = 0x20;
  FChaosEngineInterface::GetAllShapes_AssumedLocked(param_1,&local_258);
  uVar10 = (ulonglong)local_258.ArrayNum;
  local_2d4 = local_258.ArrayNum;
  this_00 = (ForElementType<FPhysicsShapeReference_Chaos>)&local_258;
  if (local_258.AllocatorInstance.SecondaryData != (ForElementType<FPhysicsShapeReference_Chaos>)0x0
     ) {
    this_00 = local_258.AllocatorInstance.SecondaryData;
  }
  FVar11 = (ForElementType<FPhysicsShapeReference_Chaos>)(uVar10 * 0x10 + (longlong)this_00);
  uVar13 = uVar10;
  local_2d0.ActorRef = (FSingleParticlePhysicsProxy *)FVar11;
  while( true ) {
    if ((int)uVar10 != (int)uVar13) {
      `TCheckedPointerIterator<FPhysicsShapeReference_Chaos,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_2d8);
    }
    if (this_00 == FVar11) break;
    pFVar8 = FPhysicsShapeReference_Chaos::GetGeometry((FPhysicsShapeReference_Chaos *)this_00);
    if (pFVar8->bIsConvex != false) {
      puVar12 = *(undefined8 **)((longlong)this + 0x10);
      iVar3 = *(int *)(puVar12 + 2);
      piVar1 = (int *)(puVar12 + 2);
      if ((undefined8 *)puVar12[1] != (undefined8 *)0x0) {
        puVar12 = (undefined8 *)puVar12[1];
      }
      puVar2 = puVar12 + iVar3;
      while( true ) {
        if (*piVar1 != iVar3) {
          `TCheckedPointerIterator<FBodyInstance_*_const,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_2d8);
        }
        FVar11 = (ForElementType<FPhysicsShapeReference_Chaos>)local_2d0.ActorRef;
        if (puVar12 == puVar2) break;
        pFVar6 = (FBodyInstance *)*puVar12;
        bVar7 = *(bool *)*(undefined8 *)((longlong)this + 0x20);
        FVar9 = FChaosEngineInterface::GetGeometryCollection(&local_2d0);
        bVar7 = FPhysInterface_Chaos::Overlap_Geom
                          (pFVar6,(FPhysicsGeometryCollection_Chaos *)FVar9.Geom,&local_2b8,
                           (FMTDResult *)0x0,bVar7);
        *(bool *)*(undefined8 *)((longlong)this + 0x18) = bVar7;
        FPhysicsGeometryCollection_Chaos::~FPhysicsGeometryCollection_Chaos
                  ((FPhysicsGeometryCollection_Chaos *)&local_2d0);
        if (**(char **)((longlong)this + 0x18) != '\0') goto LAB_1481ca0cb;
        puVar12 = puVar12 + 1;
      }
    }
    uVar10 = (ulonglong)(uint)local_258.ArrayNum;
    this_00 = (ForElementType<FPhysicsShapeReference_Chaos>)((longlong)this_00 + 0x10);
    uVar13 = (ulonglong)local_2d4;
  }
LAB_1481ca0cb:
  if (local_258.AllocatorInstance.SecondaryData != (ForElementType<FPhysicsShapeReference_Chaos>)0x0
     ) {
    FMemory::Free((void *)local_258.AllocatorInstance.SecondaryData);
  }
  return;
}

// operator() @ 1481ca110

void __thiscall
`FBodyInstance::AddAngularImpulseInRadians'::__l2::<lambda_1>::operator()(void *this)

{
  bool bVar1;
  FSingleParticlePhysicsProxy *local_res8 [4];
  
  local_res8[0] = *(FSingleParticlePhysicsProxy **)(*(longlong *)((longlong)this + 0x20) + 0x138);
  bVar1 = FPhysInterface_Chaos::IsInScene(local_res8);
  if (bVar1) {
    local_res8[0] = *(FSingleParticlePhysicsProxy **)(*(longlong *)((longlong)this + 0x20) + 0x138);
    bVar1 = IsBodyDynamic(local_res8,*(bool *)((longlong)this + 0x19));
    if (bVar1) {
      local_res8[0] =
           *(FSingleParticlePhysicsProxy **)(*(longlong *)((longlong)this + 0x20) + 0x138);
      if (*(char *)((longlong)this + 0x18) != '\0') {
        FChaosEngineInterface::AddAngularVelocityInRadians_AssumesLocked
                  (local_res8,this,*(bool *)((longlong)this + 0x19));
        return;
      }
      FChaosEngineInterface::AddAngularImpulseInRadians_AssumesLocked
                (local_res8,this,*(bool *)((longlong)this + 0x19));
    }
  }
  return;
}

// operator() @ 1481ca1a0

void __thiscall `FBodyInstance::AddForce'::__l2::<lambda_1>::operator()(void *this)

{
  bool bVar1;
  FSingleParticlePhysicsProxy *local_res8 [4];
  
  local_res8[0] = *(FSingleParticlePhysicsProxy **)(*(longlong *)((longlong)this + 0x20) + 0x138);
  bVar1 = FPhysInterface_Chaos::IsInScene(local_res8);
  if (bVar1) {
    local_res8[0] = *(FSingleParticlePhysicsProxy **)(*(longlong *)((longlong)this + 0x20) + 0x138);
    bVar1 = IsBodyDynamic(local_res8,*(bool *)((longlong)this + 0x1a));
    if (bVar1) {
      local_res8[0] =
           *(FSingleParticlePhysicsProxy **)(*(longlong *)((longlong)this + 0x20) + 0x138);
      FChaosEngineInterface::AddForce_AssumesLocked
                (local_res8,this,*(bool *)((longlong)this + 0x18),*(bool *)((longlong)this + 0x19),
                 *(bool *)((longlong)this + 0x1a));
    }
  }
  return;
}

// operator() @ 1481ca230

void __thiscall `FBodyInstance::AddForceAtPosition'::__l2::<lambda_1>::operator()(void *this)

{
  bool bVar1;
  FSingleParticlePhysicsProxy *local_res8 [4];
  
  local_res8[0] = *(FSingleParticlePhysicsProxy **)(*(longlong *)((longlong)this + 0x38) + 0x138);
  bVar1 = FPhysInterface_Chaos::IsInScene(local_res8);
  if (bVar1) {
    local_res8[0] = *(FSingleParticlePhysicsProxy **)(*(longlong *)((longlong)this + 0x38) + 0x138);
    bVar1 = IsBodyDynamic(local_res8,*(bool *)((longlong)this + 0x32));
    if (bVar1) {
      local_res8[0] =
           *(FSingleParticlePhysicsProxy **)(*(longlong *)((longlong)this + 0x38) + 0x138);
      FChaosEngineInterface::AddForceAtPosition_AssumesLocked
                (local_res8,this,(TVector<double> *)((longlong)this + 0x18),
                 *(bool *)((longlong)this + 0x30),*(bool *)((longlong)this + 0x31),
                 *(bool *)((longlong)this + 0x32));
    }
  }
  return;
}

// operator() @ 1481ca2c0

void __thiscall `FBodyInstance::AddImpulse'::__l2::<lambda_1>::operator()(void *this)

{
  bool bVar1;
  FSingleParticlePhysicsProxy *local_res8 [4];
  
  local_res8[0] = *(FSingleParticlePhysicsProxy **)(*(longlong *)((longlong)this + 0x20) + 0x138);
  bVar1 = FPhysInterface_Chaos::IsInScene(local_res8);
  if (bVar1) {
    local_res8[0] = *(FSingleParticlePhysicsProxy **)(*(longlong *)((longlong)this + 0x20) + 0x138);
    bVar1 = IsBodyDynamic(local_res8,*(bool *)((longlong)this + 0x19));
    if (bVar1) {
      local_res8[0] =
           *(FSingleParticlePhysicsProxy **)(*(longlong *)((longlong)this + 0x20) + 0x138);
      if (*(char *)((longlong)this + 0x18) != '\0') {
        FChaosEngineInterface::AddVelocity_AssumesLocked
                  (local_res8,this,*(bool *)((longlong)this + 0x19));
        return;
      }
      FChaosEngineInterface::AddImpulse_AssumesLocked
                (local_res8,this,*(bool *)((longlong)this + 0x19));
    }
  }
  return;
}

// operator() @ 1481ca350

void __thiscall `FBodyInstance::AddImpulseAtPosition'::__l2::<lambda_1>::operator()(void *this)

{
  bool bVar1;
  FSingleParticlePhysicsProxy *local_res8 [4];
  
  local_res8[0] = *(FSingleParticlePhysicsProxy **)(*(longlong *)((longlong)this + 0x38) + 0x138);
  bVar1 = FPhysInterface_Chaos::IsInScene(local_res8);
  if (bVar1) {
    local_res8[0] = *(FSingleParticlePhysicsProxy **)(*(longlong *)((longlong)this + 0x38) + 0x138);
    bVar1 = IsBodyDynamic(local_res8,*(bool *)((longlong)this + 0x30));
    if (bVar1) {
      local_res8[0] =
           *(FSingleParticlePhysicsProxy **)(*(longlong *)((longlong)this + 0x38) + 0x138);
      FChaosEngineInterface::AddImpulseAtLocation_AssumesLocked
                (local_res8,this,(TVector<double> *)((longlong)this + 0x18),
                 *(bool *)((longlong)this + 0x30));
    }
  }
  return;
}

// operator() @ 1481ca3d0

void __thiscall
`FBodyInstance::AddRadialForceToBody'::__l2::<lambda_1>::operator()
          (void *this,FSingleParticlePhysicsProxy **param_1)

{
  bool bVar1;
  FPhysScene_Chaos *this_00;
  FSingleParticlePhysicsProxy *local_res18 [2];
  
  bVar1 = FChaosEngineInterface::IsRigidBody(param_1);
  if ((bVar1) && (bVar1 = FPhysInterface_Chaos::IsInScene(param_1), bVar1)) {
    bVar1 = FChaosEngineInterface::IsRigidBody(param_1);
    if ((bVar1) && (bVar1 = FChaosEngineInterface::IsKinematic_AssumesLocked(param_1), bVar1)) {
      return;
    }
    local_res18[0] = *(FSingleParticlePhysicsProxy **)(*(longlong *)this + 0x138);
    this_00 = (FPhysScene_Chaos *)FChaosEngineInterface::GetCurrentScene(local_res18);
    if (this_00 != (FPhysScene_Chaos *)0x0) {
      FPhysScene_Chaos::AddRadialForceToBody_AssumesLocked
                (this_00,*(FBodyInstance **)this,*(TVector<double> **)((longlong)this + 8),
                 **(float **)((longlong)this + 0x10),**(float **)((longlong)this + 0x18),
                 **(uchar **)((longlong)this + 0x20),*(bool *)*(undefined8 *)((longlong)this + 0x28)
                 ,*(bool *)*(undefined8 *)((longlong)this + 0x30));
    }
  }
  return;
}

// operator() @ 1481ca490

void __thiscall
`FBodyInstance::AddRadialImpulseToBody'::__l2::<lambda_1>::operator()
          (void *this,FSingleParticlePhysicsProxy **param_1)

{
  bool bVar1;
  
  bVar1 = FChaosEngineInterface::IsRigidBody(param_1);
  if ((bVar1) && (bVar1 = FPhysInterface_Chaos::IsInScene(param_1), bVar1)) {
    bVar1 = FChaosEngineInterface::IsRigidBody(param_1);
    if ((bVar1) && (bVar1 = FChaosEngineInterface::IsKinematic_AssumesLocked(param_1), bVar1)) {
      return;
    }
    FChaosEngineInterface::AddRadialImpulse_AssumesLocked
              (param_1,*(TVector<double> **)this,**(float **)((longlong)this + 8),
               **(float **)((longlong)this + 0x10),(uint)**(byte **)((longlong)this + 0x18),
               *(bool *)*(undefined8 *)((longlong)this + 0x20),false);
  }
  return;
}

// operator() @ 1481ca520

void __thiscall `FBodyInstance::AddTorqueInRadians'::__l2::<lambda_1>::operator()(void *this)

{
  bool bVar1;
  FSingleParticlePhysicsProxy *local_res8 [4];
  
  local_res8[0] = *(FSingleParticlePhysicsProxy **)(*(longlong *)((longlong)this + 0x20) + 0x138);
  bVar1 = FPhysInterface_Chaos::IsInScene(local_res8);
  if (bVar1) {
    local_res8[0] = *(FSingleParticlePhysicsProxy **)(*(longlong *)((longlong)this + 0x20) + 0x138);
    bVar1 = IsBodyDynamic(local_res8,*(bool *)((longlong)this + 0x1a));
    if (bVar1) {
      local_res8[0] =
           *(FSingleParticlePhysicsProxy **)(*(longlong *)((longlong)this + 0x20) + 0x138);
      FChaosEngineInterface::AddTorque_AssumesLocked
                (local_res8,this,*(bool *)((longlong)this + 0x18),*(bool *)((longlong)this + 0x19),
                 *(bool *)((longlong)this + 0x1a));
    }
  }
  return;
}

// operator() @ 1481ca5b0

void __thiscall
`FBodyInstance::AddVelocityChangeImpulseAtLocation'::__l2::<lambda_1>::operator()(void *this)

{
  bool bVar1;
  FSingleParticlePhysicsProxy *local_res8 [4];
  
  local_res8[0] = *(FSingleParticlePhysicsProxy **)(*(longlong *)((longlong)this + 0x38) + 0x138);
  bVar1 = FPhysInterface_Chaos::IsInScene(local_res8);
  if (bVar1) {
    local_res8[0] = *(FSingleParticlePhysicsProxy **)(*(longlong *)((longlong)this + 0x38) + 0x138);
    bVar1 = IsBodyDynamic(local_res8,*(bool *)((longlong)this + 0x30));
    if (bVar1) {
      local_res8[0] =
           *(FSingleParticlePhysicsProxy **)(*(longlong *)((longlong)this + 0x38) + 0x138);
      FChaosEngineInterface::AddVelocityChangeImpulseAtLocation_AssumesLocked
                (local_res8,this,(TVector<double> *)((longlong)this + 0x18),
                 *(bool *)((longlong)this + 0x30));
    }
  }
  return;
}

// operator() @ 1481ca630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FBodyInstance::GetUnrealWorldTransform'::__l2::<lambda_1>::operator()
          (void *this,FSingleParticlePhysicsProxy **param_1)

{
  double *pdVar1;
  double dVar2;
  TTransform<double> *pTVar3;
  undefined1 auStack_98 [32];
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  pTVar3 = GetUnrealWorldTransformImp_AssumesLocked
                     (&local_78,*(FBodyInstance **)((longlong)this + 8),
                      *(bool *)*(undefined8 *)((longlong)this + 0x10),
                      *(bool *)*(undefined8 *)((longlong)this + 0x18));
  pdVar1 = *(double **)this;
  dVar2 = (pTVar3->Rotation).XY.m128d_f64[1];
  *pdVar1 = (pTVar3->Rotation).XY.m128d_f64[0];
  pdVar1[1] = dVar2;
  dVar2 = (pTVar3->Rotation).ZW.m128d_f64[1];
  pdVar1[2] = (pTVar3->Rotation).ZW.m128d_f64[0];
  pdVar1[3] = dVar2;
  dVar2 = (pTVar3->Translation).XY.m128d_f64[1];
  pdVar1[4] = (pTVar3->Translation).XY.m128d_f64[0];
  pdVar1[5] = dVar2;
  dVar2 = (pTVar3->Translation).ZW.m128d_f64[1];
  pdVar1[6] = (pTVar3->Translation).ZW.m128d_f64[0];
  pdVar1[7] = dVar2;
  dVar2 = (pTVar3->Scale3D).XY.m128d_f64[1];
  pdVar1[8] = (pTVar3->Scale3D).XY.m128d_f64[0];
  pdVar1[9] = dVar2;
  dVar2 = (pTVar3->Scale3D).ZW.m128d_f64[1];
  pdVar1[10] = (pTVar3->Scale3D).ZW.m128d_f64[0];
  pdVar1[0xb] = dVar2;
  return;
}

// operator() @ 1481ca6c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
`FBodyInstance::OverlapMulti'::__l2::<lambda_1>::operator()
          (void *this,FSingleParticlePhysicsProxy **param_1)

{
  FBodyInstance *pFVar1;
  TMap<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>
  *this_00;
  double *pdVar2;
  TArray<FOverlapResult,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  FCollisionEnabledMask FVar8;
  uint uVar9;
  int iVar10;
  undefined7 extraout_var;
  FWeldInfo *pFVar11;
  FImplicitObject *pFVar12;
  longlong lVar13;
  FBodyInstance *pFVar14;
  uint uVar15;
  ForElementType<FPhysicsShapeReference_Chaos> FVar16;
  undefined1 auStackY_318 [32];
  undefined1 local_2c8 [8];
  TArray<FOverlapResult,TSizedDefaultAllocator<32>_> local_2c0;
  int local_2b0;
  longlong local_2a8;
  undefined1 local_2a0 [16];
  double dStack_290;
  double local_288;
  TQuat<double> local_278;
  TArray<FPhysicsShapeReference_Chaos,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  local_258;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_318;
  if (*param_1 != (FSingleParticlePhysicsProxy *)0x0) {
    uVar15 = 0;
    local_258.AllocatorInstance.SecondaryData = (ForElementType<FPhysicsShapeReference_Chaos>)0x0;
    local_258.ArrayNum = 0;
    local_258.ArrayMax = 0x20;
    FChaosEngineInterface::GetAllShapes_AssumedLocked(param_1,&local_258);
    local_2b0 = local_258.ArrayNum;
    local_2c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2c0.ArrayNum = 0;
    local_2c0.ArrayMax = 0;
    if (0 < local_258.ArrayNum) {
      local_2a8 = 0;
      do {
        lVar13 = local_2a8;
        bVar7 = FCollisionEnabledMask::operator_bool
                          ((FCollisionEnabledMask *)(*(longlong *)this + 0x88));
        if (bVar7) {
          lVar13 = *(longlong *)this;
          FBodyInstance::GetShapeCollisionEnabled(*(FBodyInstance **)((longlong)this + 8),uVar15);
          FVar8 = FCollisionEnabledMask::operator&
                            ((FCollisionEnabledMask *)(lVar13 + 0x88),(Type)local_2c8);
          bVar7 = FCollisionEnabledMask::operator_bool
                            ((FCollisionEnabledMask *)CONCAT71(extraout_var,FVar8.Bits));
          lVar13 = local_2a8;
          if (bVar7) goto LAB_1481ca7bb;
        }
        else {
LAB_1481ca7bb:
          uVar9 = 0;
          if ((int)uVar15 < local_258.ArrayNum) {
            uVar9 = ~uVar15 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar16 = (ForElementType<FPhysicsShapeReference_Chaos>)&local_258;
          if (local_258.AllocatorInstance.SecondaryData !=
              (ForElementType<FPhysicsShapeReference_Chaos>)0x0) {
            FVar16 = local_258.AllocatorInstance.SecondaryData;
          }
          FChaosEngineInterface::GetGeometryCollection((FPhysicsShapeReference_Chaos *)local_2a0);
          pFVar1 = *(FBodyInstance **)((longlong)this + 8);
          pFVar14 = pFVar1;
          if (pFVar1->WeldParent != (FBodyInstance *)0x0) {
            pFVar14 = pFVar1->WeldParent;
          }
          this_00 = (pFVar14->ShapeToBodiesMap).Object;
          if ((this_00 !=
               (TMap<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>
                *)0x0) &&
             (pFVar11 = TMapBase<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>
                        ::Find((TMapBase<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>
                                *)this_00,
                               (FPhysicsShapeReference_Chaos *)((longlong)FVar16 + lVar13)),
             pFVar11 != (FWeldInfo *)0x0)) {
            pFVar14 = pFVar11->ChildBI;
          }
          if ((pFVar14 == pFVar1) &&
             (pFVar12 = FPhysicsShapeReference_Chaos::GetGeometry
                                  ((FPhysicsShapeReference_Chaos *)((longlong)FVar16 + lVar13)),
             uVar6 = local_2c0._8_8_, pFVar12->bIsConvex != false)) {
            iVar5 = local_2c0.ArrayMax;
            local_2c0._8_8_ = (ulonglong)(uint)local_2c0.ArrayMax << 0x20;
            if (((longlong)uVar6 < 0) && (iVar5 != 0)) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x48,8,0,&local_2c0.AllocatorInstance,0,&local_2c0.ArrayMax);
            }
            pdVar2 = *(double **)((longlong)this + 0x18);
            local_278.X = *pdVar2;
            local_278.Y = pdVar2[1];
            local_278.Z = pdVar2[2];
            local_278.W = pdVar2[3];
            local_2a0._8_8_ = pdVar2[4];
            dStack_290 = pdVar2[5];
            local_288 = pdVar2[6];
            bVar7 = FGenericPhysicsInterface::GeomOverlapMulti<FPhysicsGeometryCollection_Chaos>
                              ((UWorld *)**(undefined8 **)((longlong)this + 0x10),
                               (FPhysicsGeometryCollection_Chaos *)local_2a0,
                               (TVector<double> *)(local_2a0 + 8),&local_278,&local_2c0,
                               **(ECollisionChannel **)((longlong)this + 0x20),
                               *(FCollisionQueryParams **)this,
                               *(FCollisionResponseParams **)((longlong)this + 0x28),
                               *(FCollisionObjectQueryParams **)((longlong)this + 0x30));
            if (bVar7) {
              **(undefined1 **)((longlong)this + 0x38) = 1;
            }
            pTVar3 = *(TArray<FOverlapResult,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x40)
            ;
            if ((pTVar3 == &local_2c0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(void*)this != (void*)&Source",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x96e,L""), bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar5 = local_2c0.ArrayNum;
            if (local_2c0.ArrayNum != 0) {
              iVar10 = UE::Core::Private::
                       ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x48,8,local_2c0.ArrayNum,&pTVar3->AllocatorInstance,
                                  &pTVar3->ArrayNum,&pTVar3->ArrayMax);
              ConstructItems<FOverlapResult,FOverlapResult,int>
                        ((pTVar3->AllocatorInstance).Data + (longlong)iVar10 * 0x48,
                         (FOverlapResult *)local_2c0.AllocatorInstance.Data,iVar5);
            }
          }
          FPhysicsGeometryCollection_Chaos::~FPhysicsGeometryCollection_Chaos
                    ((FPhysicsGeometryCollection_Chaos *)local_2a0);
        }
        uVar15 = uVar15 + 1;
        local_2a8 = local_2a8 + 0x10;
      } while ((int)uVar15 < local_2b0);
    }
    if ((FOverlapResult *)local_2c0.AllocatorInstance.Data != (FOverlapResult *)0x0) {
      FMemory::Free(local_2c0.AllocatorInstance.Data);
    }
    if (local_258.AllocatorInstance.SecondaryData !=
        (ForElementType<FPhysicsShapeReference_Chaos>)0x0) {
      FMemory::Free((void *)local_258.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// operator() @ 1481caa40

void __thiscall
`FBodyInstance::SetAngularVelocityInRadians'::__l2::<lambda_1>::operator()
          (void *this,FSingleParticlePhysicsProxy **param_1)

{
  double *pdVar1;
  bool bVar2;
  TVector<double> *pTVar3;
  TVector<double>_u_0 local_38;
  TVector<double> local_20;
  
  bVar2 = FChaosEngineInterface::IsRigidBody(param_1);
  if (bVar2) {
    pdVar1 = *(double **)this;
    local_38._s_0.X = *pdVar1;
    local_38._s_0.Y = pdVar1[1];
    local_38._s_0.Z = pdVar1[2];
    if (**(char **)((longlong)this + 8) != '\0') {
      pTVar3 = FChaosEngineInterface::GetAngularVelocity_AssumesLocked(&local_20,param_1);
      local_38._s_0.X = local_38._s_0.X + (pTVar3->field0_0x0)._s_0.X;
      local_38._s_0.Y = local_38._s_0.Y + (pTVar3->field0_0x0)._s_0.Y;
      local_38._s_0.Z = local_38._s_0.Z + (pTVar3->field0_0x0)._s_0.Z;
    }
    FChaosEngineInterface::SetAngularVelocity_AssumesLocked
              (param_1,(TVector<double> *)&local_38._s_0,true);
  }
  return;
}

// operator() @ 1481caae0

void __thiscall
`FBodyInstance::SetLinearVelocity'::__l2::<lambda_1>::operator()
          (void *this,FSingleParticlePhysicsProxy **param_1)

{
  double *pdVar1;
  bool bVar2;
  TVector<double> *pTVar3;
  TVector<double>_u_0 local_38;
  TVector<double> local_20;
  
  bVar2 = FChaosEngineInterface::IsRigidBody(param_1);
  if (bVar2) {
    pdVar1 = *(double **)this;
    local_38._s_0.X = *pdVar1;
    local_38._s_0.Y = pdVar1[1];
    local_38._s_0.Z = pdVar1[2];
    if (**(char **)((longlong)this + 8) != '\0') {
      pTVar3 = FChaosEngineInterface::GetLinearVelocity_AssumesLocked(&local_20,param_1);
      local_38._s_0.X = local_38._s_0.X + (pTVar3->field0_0x0)._s_0.X;
      local_38._s_0.Y = local_38._s_0.Y + (pTVar3->field0_0x0)._s_0.Y;
      local_38._s_0.Z = local_38._s_0.Z + (pTVar3->field0_0x0)._s_0.Z;
    }
    FChaosEngineInterface::SetLinearVelocity_AssumesLocked
              (param_1,(TVector<double> *)&local_38._s_0,true);
  }
  return;
}

// operator() @ 1481cab80

void __thiscall
`FBodyInstance::SetMaskFilter'::__l2::<lambda_1>::operator()
          (void *this,FSingleParticlePhysicsProxy **param_1)

{
  FBodyInstance *pFVar1;
  TMap<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>
  *this_00;
  int iVar2;
  FWeldInfo *pFVar3;
  FPhysicsShapeReference_Chaos *pFVar4;
  FBodyInstance *pFVar5;
  ForAnyElementType FVar6;
  undefined8 local_res18 [2];
  TArray<FPhysicsShapeReference_Chaos,TSizedDefaultAllocator<32>_> local_48;
  code *local_38;
  undefined8 *local_30;
  
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  FChaosEngineInterface::GetAllShapes_AssumedLocked(param_1,&local_48);
  iVar2 = local_48.ArrayNum;
  pFVar4 = (FPhysicsShapeReference_Chaos *)
           (local_48.AllocatorInstance.Data + (longlong)local_48.ArrayNum * 0x10);
  FVar6.Data = local_48.AllocatorInstance.Data;
  while( true ) {
    if (local_48.ArrayNum != iVar2) {
      `TCheckedPointerIterator<FPhysicsShapeReference_Chaos,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if ((FPhysicsShapeReference_Chaos *)FVar6.Data == pFVar4) break;
    pFVar1 = *(FBodyInstance **)this;
    pFVar5 = pFVar1;
    if (pFVar1->WeldParent != (FBodyInstance *)0x0) {
      pFVar5 = pFVar1->WeldParent;
    }
    this_00 = (pFVar5->ShapeToBodiesMap).Object;
    if ((this_00 !=
         (TMap<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>
          *)0x0) &&
       (pFVar3 = TMapBase<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>
                 ::Find((TMapBase<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>
                         *)this_00,(FPhysicsShapeReference_Chaos *)FVar6.Data),
       pFVar3 != (FWeldInfo *)0x0)) {
      pFVar5 = pFVar3->ChildBI;
    }
    if (pFVar5 == pFVar1) {
      local_res18[0] = *(undefined8 *)((longlong)this + 8);
      local_30 = local_res18;
      local_38 = UE::Core::Private::Function::
                 TFunctionRefCaller<``FBodyInstance::SetMaskFilter'::__l2::<lambda_1>::operator()'::__l9::<lambda_1>,void,FPhysicsShapeReference_Chaos_&>
                 ::Call;
      FPhysInterface_Chaos::ExecuteShapeWrite
                (pFVar1,(FPhysicsShapeReference_Chaos *)FVar6.Data,
                 (TFunctionRef<void___cdecl(FPhysicsShapeReference_Chaos_&)> *)&local_38);
    }
    FVar6.Data = FVar6.Data + 0x10;
  }
  if ((FPhysicsShapeReference_Chaos *)local_48.AllocatorInstance.Data !=
      (FPhysicsShapeReference_Chaos *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 1481cacb0

void __thiscall
`FBodyInstance::UnWeld'::__l2::<lambda_1>::operator()
          (void *this,FSingleParticlePhysicsProxy **param_1)

{
  FBodyInstance *pFVar1;
  TMap<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>
  *this_00;
  TSet<TTuple<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo>,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>,FDefaultSetAllocator>
  *this_01;
  code *pcVar2;
  bool bVar3;
  FWeldInfo *pFVar4;
  uint uVar5;
  FBodyInstance *pFVar6;
  uint uVar7;
  FPhysicsShapeReference_Chaos *pFVar8;
  longlong lVar9;
  FSingleParticlePhysicsProxy *local_res8;
  undefined8 local_res18;
  FBodyInstance *local_res20;
  FSingleParticlePhysicsProxy *local_68;
  TArray<FPhysicsShapeReference_Chaos,TSizedDefaultAllocator<32>_> local_60;
  code *local_50;
  FBodyInstance **local_48;
  
  local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.ArrayNum = 0;
  local_60.ArrayMax = 0;
  if (*(FSingleParticlePhysicsProxy **)(*(longlong *)this + 0x138) !=
      (FSingleParticlePhysicsProxy *)0x0) {
    local_res8 = *(FSingleParticlePhysicsProxy **)(*(longlong *)this + 0x138);
    FChaosEngineInterface::GetAllShapes_AssumedLocked(&local_res8,&local_60);
  }
  if ((EnsureUnweldModifiesGTOnly != 0) && ((*param_1)->_padding_ != 0)) {
    local_res18 = *(undefined8 *)this;
    ``FBodyInstance::UnWeld'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>::operator()
              (&local_res18);
  }
  uVar5 = local_60.ArrayNum - 1;
  if (-1 < (int)uVar5) {
    lVar9 = (longlong)(int)uVar5 << 4;
    do {
      uVar7 = 0;
      if ((int)uVar5 < local_60.ArrayNum) {
        uVar7 = ~uVar5 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = *(FBodyInstance **)this;
      pFVar8 = (FPhysicsShapeReference_Chaos *)(local_60.AllocatorInstance.Data + lVar9);
      pFVar6 = pFVar1;
      if (pFVar1->WeldParent != (FBodyInstance *)0x0) {
        pFVar6 = pFVar1->WeldParent;
      }
      this_00 = (pFVar6->ShapeToBodiesMap).Object;
      if ((this_00 !=
           (TMap<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>
            *)0x0) &&
         (pFVar4 = TMapBase<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>
                   ::Find((TMapBase<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>
                           *)this_00,pFVar8), pFVar4 != (FWeldInfo *)0x0)) {
        pFVar6 = pFVar4->ChildBI;
      }
      if ((FBodyInstance *)**(longlong **)((longlong)this + 8) == pFVar6) {
        if (((pFVar1->ShapeToBodiesMap).Object ==
             (TMap<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>
              *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_01 = (TSet<TTuple<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo>,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>,FDefaultSetAllocator>
                   *)(pFVar1->ShapeToBodiesMap).Object;
        if (*(int *)&(this_01->Elements).field_0x8 != *(int *)&(this_01->Elements).field_0x34) {
          uVar7 = ((uint)((ulonglong)pFVar8->Shape >> 0x14) & 0xffff ^
                  (uint)((ulonglong)pFVar8->Shape >> 4)) * -0x7a143595;
          uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
          TSet<TTuple<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo>,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>,FDefaultSetAllocator>
          ::RemoveImpl<FPhysicsShapeReference_Chaos>(this_01,uVar7 >> 0x10 ^ uVar7,pFVar8);
        }
        FChaosEngineInterface::DetachShape(param_1,pFVar8,true);
        **(undefined1 **)((longlong)this + 0x10) = 1;
      }
      lVar9 = lVar9 + -0x10;
      uVar5 = uVar5 - 1;
    } while (-1 < (int)uVar5);
  }
  if (**(char **)((longlong)this + 0x10) != '\0') {
    pFVar1 = *(FBodyInstance **)this;
    FBodyInstance::UpdatePhysicsFilterData(pFVar1);
    FBodyInstance::UpdateMassProperties(pFVar1);
    local_48 = &local_res20;
    local_50 = UE::Core::Private::Function::
               TFunctionRefCaller<`FBodyInstance::UpdateDampingProperties'::__l2::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
               ::Call;
    local_68 = pFVar1->ActorHandle;
    local_res20 = pFVar1;
    FPhysInterface_Chaos::ExecuteWrite
              (&local_68,
               (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_50
              );
  }
  *(undefined8 *)(**(longlong **)((longlong)this + 8) + 0x108) = 0;
  if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 1481caf50

void __thiscall
`FBodyInstance::UpdateInstanceSimulatePhysics'::__l2::<lambda_1>::operator()
          (void *this,FSingleParticlePhysicsProxy **param_1)

{
  FBodyInstance *this_00;
  uint uVar1;
  uint uVar2;
  
  **(undefined1 **)this = 1;
  FChaosEngineInterface::SetIsKinematic_AssumesLocked
            (param_1,**(char **)((longlong)this + 8) == '\0');
  FChaosEngineInterface::SetCcdEnabled_AssumesLocked
            (param_1,(bool)(*(byte *)(*(longlong *)((longlong)this + 0x10) + 0x3b) & 1));
  FChaosEngineInterface::SetMACDEnabled_AssumesLocked
            (param_1,(bool)(*(byte *)(*(longlong *)((longlong)this + 0x10) + 0x3b) >> 3 & 1));
  FChaosEngineInterface::SetPartialIslandSleepAllowed_AssumesLocked
            (param_1,(bool)(*(byte *)(*(longlong *)((longlong)this + 0x10) + 0x3b) >> 4 & 1));
  FChaosEngineInterface::SetOneWayInteraction_AssumesLocked
            (param_1,(bool)(*(byte *)(*(longlong *)((longlong)this + 0x10) + 0x3e) >> 2 & 1));
  uVar2 = 0xffffffff;
  if ((*(byte *)(*(longlong *)((longlong)this + 0x10) + 0x3d) & 0x40) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(byte *)(*(longlong *)((longlong)this + 0x10) + 0x12);
  }
  FChaosEngineInterface::SetPositionSolverIterationCount_AssumesLocked(param_1,uVar1);
  if ((*(byte *)(*(longlong *)((longlong)this + 0x10) + 0x3d) & 0x40) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(byte *)(*(longlong *)((longlong)this + 0x10) + 0x13);
  }
  FChaosEngineInterface::SetVelocitySolverIterationCount_AssumesLocked(param_1,uVar1);
  if ((*(byte *)(*(longlong *)((longlong)this + 0x10) + 0x3d) & 0x40) != 0) {
    uVar2 = (uint)*(byte *)(*(longlong *)((longlong)this + 0x10) + 0x14);
  }
  FChaosEngineInterface::SetProjectionSolverIterationCount_AssumesLocked(param_1,uVar2);
  this_00 = *(FBodyInstance **)((longlong)this + 0x10);
  if ((this_00->_padding_ & 1) != 0) {
    if ((this_00->_padding_ & 0x200) != 0) {
      FBodyInstance::UpdateMassProperties(this_00);
    }
    if ((*(byte *)(*(longlong *)((longlong)this + 0x10) + 8) & 0x40) != 0) {
      FChaosEngineInterface::WakeUp_AssumesLocked(param_1);
    }
  }
  return;
}

// operator() @ 1481cb060

void __thiscall
`FBodyInstance::UpdatePhysicalMaterials'::__l2::<lambda_1>::operator()
          (void *this,FSingleParticlePhysicsProxy **param_1)

{
  int iVar1;
  FBodyInstance *pFVar2;
  undefined8 uVar3;
  TMap<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>
  *this_00;
  code *pcVar4;
  bool bVar5;
  FWeldInfo *pFVar6;
  ForAnyElementType FVar7;
  FPhysicsShapeReference_Chaos *pFVar8;
  FBodyInstance *pFVar9;
  FBodyInstance *pFVar10;
  undefined1 local_res8 [8];
  FSingleParticlePhysicsProxy *local_res18;
  undefined8 local_res20;
  TArray<FPhysicsShapeReference_Chaos,TSizedDefaultAllocator<32>_> local_88;
  undefined8 local_78;
  int local_70;
  code *local_68;
  undefined8 **local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 *local_48;
  
  pFVar2 = *(FBodyInstance **)this;
  local_78 = **(undefined8 **)((longlong)this + 0x18);
  iVar1 = *(int *)(*(undefined8 **)((longlong)this + 0x18) + 1);
  if (iVar1 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar3 = *(undefined8 *)((longlong)this + 0x10);
  local_res20 = **(undefined8 **)((longlong)this + 8);
  pFVar10 = pFVar2;
  if (pFVar2->WeldParent != (FBodyInstance *)0x0) {
    pFVar10 = pFVar2->WeldParent;
  }
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  local_70 = iVar1;
  if (pFVar10->ActorHandle != (FSingleParticlePhysicsProxy *)0x0) {
    local_res18 = pFVar10->ActorHandle;
    FChaosEngineInterface::GetAllShapes_AssumedLocked(&local_res18,&local_88);
  }
  iVar1 = local_88.ArrayNum;
  pFVar8 = (FPhysicsShapeReference_Chaos *)
           (local_88.AllocatorInstance.Data + (longlong)local_88.ArrayNum * 0x10);
  FVar7.Data = local_88.AllocatorInstance.Data;
  while( true ) {
    if (local_88.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FPhysicsShapeReference_Chaos,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if ((FPhysicsShapeReference_Chaos *)FVar7.Data == pFVar8) break;
    pFVar9 = pFVar2;
    if (pFVar2->WeldParent != (FBodyInstance *)0x0) {
      pFVar9 = pFVar2->WeldParent;
    }
    this_00 = (pFVar9->ShapeToBodiesMap).Object;
    if (this_00 !=
        (TMap<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>
         *)0x0) {
      pFVar6 = TMapBase<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>
               ::Find((TMapBase<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>
                       *)this_00,(FPhysicsShapeReference_Chaos *)FVar7.Data);
      if (pFVar6 != (FWeldInfo *)0x0) {
        pFVar9 = pFVar6->ChildBI;
      }
    }
    if (pFVar9 == pFVar2) {
      local_58 = &local_res20;
      local_48 = &local_78;
      local_68 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FBodyInstance::ApplyMaterialToInstanceShapes_AssumesLocked'::__l9::<lambda_1>,void,FPhysicsShapeReference_Chaos_&>
                 ::Call;
      local_60 = &local_58;
      local_50 = uVar3;
      FPhysInterface_Chaos::ExecuteShapeWrite
                (pFVar10,(FPhysicsShapeReference_Chaos *)FVar7.Data,
                 (TFunctionRef<void___cdecl(FPhysicsShapeReference_Chaos_&)> *)&local_68);
    }
    FVar7.Data = FVar7.Data + 0x10;
  }
  if ((FPhysicsShapeReference_Chaos *)local_88.AllocatorInstance.Data !=
      (FPhysicsShapeReference_Chaos *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 1481cb1f0

void __thiscall
`FBodyInstance::UpdatePhysicsFilterData'::__l2::<lambda_1>::operator()
          (void *this,FSingleParticlePhysicsProxy **param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  FBodyInstance *pFVar4;
  code *pcVar5;
  uint uVar6;
  TEnumAsByte<ECollisionTraceFlag> TVar7;
  byte bVar8;
  byte bVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  Type TVar13;
  UBodySetupCore *pUVar14;
  undefined7 extraout_var;
  UObject *pUVar15;
  FWeldInfo *pFVar16;
  undefined7 extraout_var_00;
  UBodySetup *pUVar17;
  UClass *pUVar18;
  FChaosScene *this_00;
  FBodyInstance *this_01;
  uint uVar19;
  int iVar20;
  FBodyInstance *pFVar21;
  FPhysicsShapeReference_Chaos *pFVar22;
  char local_res8 [8];
  FSingleParticlePhysicsProxy **local_res10;
  uint local_128 [2];
  FBodyCollisionFilterData local_120;
  undefined4 local_f0;
  uint local_e8;
  FBodyCollisionFilterData local_e0;
  undefined4 local_b0;
  int local_a8;
  int local_a4;
  TArray<FPhysicsShapeReference_Chaos,TSizedDefaultAllocator<32>_> local_a0;
  FSingleParticlePhysicsProxy *local_90;
  FSingleParticlePhysicsProxy *local_88;
  code *local_80;
  uint **local_78;
  uint *local_70;
  int *local_68;
  FSingleParticlePhysicsProxy **local_60;
  FBodyCollisionFilterData *local_58;
  char *local_50;
  
  local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.ArrayNum = 0;
  local_a0.ArrayMax = 0;
  local_90 = *(FSingleParticlePhysicsProxy **)(*(longlong *)this + 0x138);
  local_res10 = param_1;
  local_a8 = FChaosEngineInterface::GetAllShapes_AssumedLocked(&local_90,&local_a0);
  iVar20 = local_a0.ArrayNum;
  local_a4 = local_a0.ArrayNum;
  local_e0.SimFilter.Word2 = 0;
  local_e0.SimFilter.Word3 = 0;
  local_e0.SimFilter.Word0 = 0;
  local_e0.SimFilter.Word1 = 0;
  local_e0.QuerySimpleFilter.Word2 = 0;
  local_e0.QuerySimpleFilter.Word3 = 0;
  local_e0.QuerySimpleFilter.Word0 = 0;
  local_e0.QuerySimpleFilter.Word1 = 0;
  local_e0.QueryComplexFilter.Word2 = 0;
  local_e0.QueryComplexFilter.Word3 = 0;
  local_e0.QueryComplexFilter.Word0 = 0;
  local_e0.QueryComplexFilter.Word1 = 0;
  FBodyInstance::BuildBodyFilterData(*(FBodyInstance **)this,&local_e0,-1);
  pUVar14 = (UBodySetupCore *)FWeakObjectPtr::Get(*(FWeakObjectPtr **)this);
  TVar7 = UBodySetupCore::GetCollisionTraceFlag(pUVar14);
  lVar3 = *(longlong *)this;
  cVar1 = *(char *)CONCAT71(extraout_var,TVar7.Value);
  pUVar15 = FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar3 + 0x150));
  if (pUVar15 == (UObject *)0x0) {
LAB_1481cb2f1:
    bVar8 = *(byte *)(lVar3 + 0x17);
  }
  else {
    if ((*(longlong *)&pUVar15[4].field_0x8 != 0) &&
       ((*(byte *)(*(longlong *)&pUVar15[4].field_0x8 + 0x5d) & 1) == 0)) {
      local_b0 = 0;
      goto LAB_1481cb35c;
    }
    pUVar18 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar2 = (int)pUVar18->_padding_;
    if ((*(int *)(*(longlong *)&pUVar15->field_0x10 + 0x38) < iVar2) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar15->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar18->_padding_)) goto LAB_1481cb2f1;
    bVar8 = pUVar15[0x17].field_0xf;
  }
  local_b0 = 0;
  if (bVar8 != 0) {
    if (((bVar8 - 1 & 0xfffffff9) == 0) && (bVar8 != 7)) {
      bVar9 = 1;
    }
    else {
      bVar9 = 0;
    }
    local_b0 = (uint)bVar9 << 0x10;
    bVar10 = bVar8 - 4 < 2;
    if ((SimCollisionEnabled != 0) && ((bVar10 || (bVar8 - 2 < 2)))) {
      local_b0 = CONCAT22(CONCAT11(bVar10,bVar9),CONCAT11(cVar1 == '\x03',1));
    }
  }
LAB_1481cb35c:
  local_res8[0] = '\0';
  local_e8 = 0;
  pFVar21 = *(FBodyInstance **)this;
  local_128[0] = 0;
  if (0 < iVar20) {
    do {
      uVar19 = local_e8;
      uVar6 = local_128[0];
      uVar12 = 0;
      if ((int)local_128[0] < local_a0.ArrayNum) {
        uVar12 = ~local_128[0] >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar12 = local_128[0];
      pFVar22 = (FPhysicsShapeReference_Chaos *)
                (local_a0.AllocatorInstance.Data + (longlong)(int)uVar6 * 0x10);
      pFVar4 = (*(FBodyInstance **)this)->WeldParent;
      this_01 = *(FBodyInstance **)this;
      if (pFVar4 != (FBodyInstance *)0x0) {
        this_01 = pFVar4;
      }
      if (((this_01->ShapeToBodiesMap).Object !=
           (TMap<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>
            *)0x0) &&
         (pFVar16 = TMapBase<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>
                    ::Find((TMapBase<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>
                            *)(this_01->ShapeToBodiesMap).Object,pFVar22),
         pFVar16 != (FWeldInfo *)0x0)) {
        this_01 = pFVar16->ChildBI;
      }
      if (this_01 != pFVar21) {
        pFVar21 = this_01;
        uVar19 = uVar12;
        local_e8 = uVar12;
      }
      iVar20 = uVar12 - uVar19;
      local_120.SimFilter.Word2 = 0;
      local_120.SimFilter.Word3 = 0;
      local_120.SimFilter.Word0 = 0;
      local_120.SimFilter.Word1 = 0;
      local_120.QuerySimpleFilter.Word2 = 0;
      local_120.QuerySimpleFilter.Word3 = 0;
      local_120.QuerySimpleFilter.Word0 = 0;
      local_120.QuerySimpleFilter.Word1 = 0;
      local_120.QueryComplexFilter.Word2 = 0;
      local_120.QueryComplexFilter.Word3 = 0;
      local_120.QueryComplexFilter.Word0 = 0;
      local_120.QueryComplexFilter.Word1 = 0;
      local_f0 = 0;
      if (this_01 == *(FBodyInstance **)this) {
        local_f0 = local_b0;
        local_120.SimFilter.Word0 = local_e0.SimFilter.Word0;
        local_120.SimFilter.Word1 = local_e0.SimFilter.Word1;
        local_120.SimFilter.Word2 = local_e0.SimFilter.Word2;
        local_120.SimFilter.Word3 = local_e0.SimFilter.Word3;
        local_120.QuerySimpleFilter.Word0 = local_e0.QuerySimpleFilter.Word0;
        local_120.QuerySimpleFilter.Word1 = local_e0.QuerySimpleFilter.Word1;
        local_120.QuerySimpleFilter.Word2 = local_e0.QuerySimpleFilter.Word2;
        local_120.QuerySimpleFilter.Word3 = local_e0.QuerySimpleFilter.Word3;
        local_120.QueryComplexFilter.Word0 = local_e0.QueryComplexFilter.Word0;
        local_120.QueryComplexFilter.Word1 = local_e0.QueryComplexFilter.Word1;
        local_120.QueryComplexFilter.Word2 = local_e0.QueryComplexFilter.Word2;
        local_120.QueryComplexFilter.Word3 = local_e0.QueryComplexFilter.Word3;
      }
      else {
        FBodyInstance::BuildBodyFilterData(this_01,&local_120,-1);
      }
      bVar10 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_01);
      if (bVar10) {
        pUVar14 = (UBodySetupCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_01);
        TVar7 = UBodySetupCore::GetCollisionTraceFlag(pUVar14);
        bVar10 = *(char *)CONCAT71(extraout_var_00,TVar7.Value) == '\x03';
      }
      else {
        bVar10 = false;
      }
      bVar11 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_01);
      if ((bVar11) &&
         (pUVar17 = FBodyInstance::GetBodySetup(this_01),
         iVar20 < (pUVar17->AggGeom).SkinnedTriangleMeshElems.ArrayNum +
                  (pUVar17->AggGeom).MLLevelSetElems.ArrayNum +
                  (pUVar17->AggGeom).SkinnedLevelSetElems.ArrayNum +
                  (pUVar17->AggGeom).LevelSetElems.ArrayNum +
                  (pUVar17->AggGeom).TaperedCapsuleElems.ArrayNum +
                  (pUVar17->AggGeom).ConvexElems.ArrayNum + (pUVar17->AggGeom).SphylElems.ArrayNum +
                  (pUVar17->AggGeom).BoxElems.ArrayNum + (pUVar17->AggGeom).SphereElems.ArrayNum)) {
        FBodyInstance::BuildBodyFilterData(this_01,&local_120,iVar20);
        TVar13 = FBodyInstance::GetShapeCollisionEnabled(this_01,iVar20);
        pUVar15 = FWeakObjectPtr::Get(&(this_01->OwnerComponent).WeakPtr);
        if (pUVar15 == (UObject *)0x0) {
LAB_1481cb594:
          bVar8 = (this_01->CollisionEnabled).Value;
LAB_1481cb598:
          if ((bVar8 != 0) && (-1 < (int)(TVar13 - QueryOnly))) {
            local_f0 = 0;
            iVar20 = *(int *)(L"Trail Particles" +
                             ((ulonglong)bVar8 * 5 + (longlong)(int)TVar13) * 2 + 8);
            if (iVar20 != 0) {
              if (((iVar20 - 1U & 0xfffffff9) == 0) && (iVar20 != 7)) {
                bVar8 = 1;
              }
              else {
                bVar8 = 0;
              }
              local_f0 = (uint)bVar8 << 0x10;
              bVar11 = iVar20 - 4U < 2;
              if ((SimCollisionEnabled != 0) && ((bVar11 || (iVar20 - 2U < 2)))) {
                local_f0 = (uint)CONCAT11(bVar11,bVar8) << 0x10;
                local_f0 = CONCAT31(local_f0._1_3_,1);
                if (bVar10) goto LAB_1481cb6f9;
              }
            }
            goto LAB_1481cb6fe;
          }
        }
        else if ((*(longlong *)&pUVar15[4].field_0x8 == 0) ||
                ((*(byte *)(*(longlong *)&pUVar15[4].field_0x8 + 0x5d) & 1) != 0)) {
          pUVar18 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
          iVar20 = (int)pUVar18->_padding_;
          if ((*(int *)(*(longlong *)&pUVar15->field_0x10 + 0x38) < iVar20) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar15->field_0x10 + 0x30) + (longlong)iVar20 * 8) !=
              &pUVar18->_padding_)) goto LAB_1481cb594;
          bVar8 = pUVar15[0x17].field_0xf;
          goto LAB_1481cb598;
        }
LAB_1481cb656:
        local_f0 = 0;
      }
      else {
        pUVar15 = FWeakObjectPtr::Get(&(this_01->OwnerComponent).WeakPtr);
        if (pUVar15 == (UObject *)0x0) {
LAB_1481cb698:
          bVar8 = (this_01->CollisionEnabled).Value;
        }
        else {
          if ((*(longlong *)&pUVar15[4].field_0x8 != 0) &&
             ((*(byte *)(*(longlong *)&pUVar15[4].field_0x8 + 0x5d) & 1) == 0)) goto LAB_1481cb656;
          pUVar18 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
          iVar20 = (int)pUVar18->_padding_;
          if ((*(int *)(*(longlong *)&pUVar15->field_0x10 + 0x38) < iVar20) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar15->field_0x10 + 0x30) + (longlong)iVar20 * 8) !=
              &pUVar18->_padding_)) goto LAB_1481cb698;
          bVar8 = pUVar15[0x17].field_0xf;
        }
        local_f0 = 0;
        if (bVar8 != 0) {
          if (((bVar8 - 1 & 0xfffffff9) == 0) && (bVar8 != 7)) {
            bVar9 = 1;
          }
          else {
            bVar9 = 0;
          }
          local_f0 = (uint)bVar9 << 0x10;
          bVar11 = bVar8 - 4 < 2;
          if ((SimCollisionEnabled != 0) && ((bVar11 || (bVar8 - 2 < 2)))) {
            local_f0 = (uint)CONCAT11(bVar11,bVar9) << 0x10;
            local_f0 = CONCAT31(local_f0._1_3_,1);
            if (!bVar10) goto LAB_1481cb6fe;
LAB_1481cb6f9:
            local_f0._0_2_ = CONCAT11(1,(undefined1)local_f0);
          }
        }
      }
LAB_1481cb6fe:
      param_1 = local_res10;
      local_70 = local_128;
      local_68 = &local_a8;
      local_60 = local_res10;
      local_58 = &local_120;
      local_50 = local_res8;
      local_78 = &local_70;
      local_80 = UE::Core::Private::Function::
                 TFunctionRefCaller<``FBodyInstance::UpdatePhysicsFilterData'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,void,FPhysicsShapeReference_Chaos_&>
                 ::Call;
      FPhysInterface_Chaos::ExecuteShapeWrite
                (*(FBodyInstance **)this,pFVar22,
                 (TFunctionRef<void___cdecl(FPhysicsShapeReference_Chaos_&)> *)&local_80);
      local_128[0] = local_128[0] + 1;
    } while ((int)local_128[0] < local_a4);
    if (local_res8[0] != '\0') {
      FBodyInstance::UpdateMassProperties(*(FBodyInstance **)this);
    }
  }
  local_88 = *(FSingleParticlePhysicsProxy **)(*(longlong *)this + 0x138);
  this_00 = FChaosEngineInterface::GetCurrentScene(&local_88);
  if (this_00 != (FChaosScene *)0x0) {
    FChaosScene::UpdateActorInAccelerationStructure(this_00,param_1);
  }
  FChaosEngineInterface::WakeUp_AssumesLocked(param_1);
  if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 1481cb7d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FBodyInstance::Weld'::__l2::<lambda_1>::operator()
          (void *this,FSingleParticlePhysicsProxy **param_1)

{
  undefined1 *puVar1;
  char cVar2;
  FName FVar3;
  FBodyInstance *pFVar4;
  IPhysicsProxyBase *pIVar5;
  TSet<TTuple<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo>,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>,FDefaultSetAllocator>
  *pTVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  TEnumAsByte<ECollisionTraceFlag> TVar13;
  byte bVar14;
  byte bVar15;
  bool bVar16;
  uint uVar17;
  int iVar18;
  FName *pFVar19;
  FThreadSafeStaticStat<FStat_STAT_UpdatePhysMats> FVar20;
  UPhysicalMaterial *pUVar21;
  UBodySetupCore *this_00;
  undefined7 extraout_var;
  UObject *pUVar22;
  UBodySetup *this_01;
  TReferenceControllerBase<1> *pTVar23;
  UClass *pUVar24;
  TReferenceControllerBase<1> **ppTVar25;
  FChaosScene *pFVar26;
  ForElementType<FSetElementId> FVar27;
  uint uVar28;
  TReferenceControllerBase<1> *pTVar29;
  TReferenceControllerBase<1> *pTVar30;
  longlong *plVar31;
  longlong lVar32;
  FNameEntryId FVar33;
  undefined1 auStackY_338 [32];
  FName local_2d8;
  TArray<UPhysicalMaterial_*,TSizedDefaultAllocator<32>_> local_2c0;
  FBodyCollisionData local_2b0;
  FColor_u_0 local_278 [2];
  uint local_270;
  uint uStack_26c;
  TArray<UPhysicalMaterial_*,TSizedDefaultAllocator<32>_> local_268;
  FName local_258;
  TReferenceControllerBase<1> *local_250;
  FSharedReferencer<1> local_248;
  TArray<FPhysicalMaterialMaskParams,TSizedDefaultAllocator<32>_> local_240;
  longlong *local_228;
  undefined1 auStack_220 [16];
  uint uStack_210;
  int iStack_20c;
  longlong local_208;
  TSet<TTuple<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo>,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>,FDefaultSetAllocator>
  *pTStack_200;
  TSet<TTuple<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo>,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>,FDefaultSetAllocator>
  *local_1f8;
  undefined2 local_1f0;
  TPairInitializer<FPhysicsShapeReference_Chaos_const_&,FBodyInstance::FWeldInfo_&&> local_1e8;
  FSingleParticlePhysicsProxy *local_1d8;
  FSingleParticlePhysicsProxy *local_1d0;
  longlong local_1c8;
  undefined8 *local_1c0;
  code *local_1b8;
  FWeldInfo **local_1b0;
  FName local_1a8;
  undefined1 local_1a0 [32];
  longlong local_180;
  TSet<TTuple<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo>,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>,FDefaultSetAllocator>
  *pTStack_178;
  TSet<FBodyInstance_*,DefaultKeyFuncs<FBodyInstance_*,0>,FDefaultSetAllocator> local_168;
  TTransform<double> local_118;
  undefined8 local_b8 [2];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_338;
  pTVar30 = (TReferenceControllerBase<1> *)0x0;
  FVar20 = StatPtr_STAT_UpdatePhysMats;
  if (StatPtr_STAT_UpdatePhysMats == (FThreadSafeStaticStat<FStat_STAT_UpdatePhysMats>)0x0) {
    pFVar19 = ::FName::FName(&local_1a8,"STAT_UpdatePhysMats");
    FVar20 = (FThreadSafeStaticStat<FStat_STAT_UpdatePhysMats>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdatePhysMats,*pFVar19,
                        L"Update Materials","STATGROUP_Physics","STATCAT_Advanced",L"Physics",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  local_2d8.ComparisonIndex.Value = 0;
  local_2d8.Number = 0;
  bVar12 = false;
  bVar11 = false;
  bVar10 = false;
  FVar3 = *(FName *)FVar20;
  FVar33 = FVar3.ComparisonIndex.Value;
  uVar17 = FVar3.Number;
  if ((FVar33.Value != 0) || (uVar17 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_278[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_278[0]._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
      bVar11 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_258.ComparisonIndex.Value = FVar33.Value;
        local_258.Number = uVar17;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_258,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                   ,0x791);
        bVar11 = true;
        bVar10 = true;
      }
    }
    bVar12 = false;
    if (FThreadStats::bPrimaryEnable != false) {
      local_270 = FVar33.Value;
      uStack_26c = uVar17;
      FThreadStats::AddMessage(FVar3,CycleScopeStart);
      bVar12 = true;
      local_2d8 = FVar3;
    }
  }
  *(undefined8 *)(**(longlong **)this + 0x108) = *(undefined8 *)((longlong)this + 8);
  pUVar21 = FBodyInstance::GetSimplePhysicalMaterial((FBodyInstance *)**(undefined8 **)this);
  local_268.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_240.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_240.ArrayNum = 0;
  local_240.ArrayMax = 0;
  pFVar4 = (FBodyInstance *)**(undefined8 **)this;
  local_2c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c0.ArrayNum = 0;
  local_2c0.ArrayMax = 0;
  FBodyInstance::GetComplexPhysicalMaterials
            (pFVar4,(TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>)
                    (pFVar4->OwnerComponent).WeakPtr,&local_2c0,&local_240,pFVar4->BodyInstanceOwner
            );
  if (local_268.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.AllocatorInstance.Data);
  }
  local_268.AllocatorInstance.Data = local_2c0.AllocatorInstance.Data;
  local_268.ArrayNum = local_2c0.ArrayNum;
  local_268.ArrayMax = local_2c0.ArrayMax;
  local_2c0.ArrayNum = 0;
  local_2c0.ArrayMax = 0;
  local_2c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2b0.CollisionFilterData.SimFilter.Word2 = 0;
  local_2b0.CollisionFilterData.SimFilter.Word3 = 0;
  local_2b0.CollisionFilterData.SimFilter.Word0 = 0;
  local_2b0.CollisionFilterData.SimFilter.Word1 = 0;
  local_2b0.CollisionFilterData.QuerySimpleFilter.Word2 = 0;
  local_2b0.CollisionFilterData.QuerySimpleFilter.Word3 = 0;
  local_2b0.CollisionFilterData.QuerySimpleFilter.Word0 = 0;
  local_2b0.CollisionFilterData.QuerySimpleFilter.Word1 = 0;
  local_2b0.CollisionFilterData.QueryComplexFilter.Word2 = 0;
  local_2b0.CollisionFilterData.QueryComplexFilter.Word3 = 0;
  local_2b0.CollisionFilterData.QueryComplexFilter.Word0 = 0;
  local_2b0.CollisionFilterData.QueryComplexFilter.Word1 = 0;
  local_2b0.CollisionFlags.bEnableSimCollisionSimple = false;
  local_2b0.CollisionFlags.bEnableSimCollisionComplex = false;
  local_2b0.CollisionFlags.bEnableQueryCollision = false;
  local_2b0.CollisionFlags.bEnableProbeCollision = false;
  FBodyInstance::BuildBodyFilterData
            (*(FBodyInstance **)((longlong)this + 8),&local_2b0.CollisionFilterData,-1);
  this_00 = (UBodySetupCore *)FWeakObjectPtr::Get(*(FWeakObjectPtr **)((longlong)this + 8));
  TVar13 = UBodySetupCore::GetCollisionTraceFlag(this_00);
  lVar32 = *(longlong *)((longlong)this + 8);
  cVar2 = *(char *)CONCAT71(extraout_var,TVar13.Value);
  pUVar22 = FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar32 + 0x150));
  if (pUVar22 == (UObject *)0x0) {
LAB_1481cbb2c:
    bVar14 = *(byte *)(lVar32 + 0x17);
  }
  else {
    if ((*(longlong *)&pUVar22[4].field_0x8 != 0) &&
       ((*(byte *)(*(longlong *)&pUVar22[4].field_0x8 + 0x5d) & 1) == 0)) {
      local_2b0.CollisionFlags.bEnableSimCollisionSimple = false;
      local_2b0.CollisionFlags.bEnableSimCollisionComplex = false;
      local_2b0.CollisionFlags.bEnableQueryCollision = false;
      local_2b0.CollisionFlags.bEnableProbeCollision = false;
      goto LAB_1481cba31;
    }
    pUVar24 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar18 = (int)pUVar24->_padding_;
    if ((*(int *)(*(longlong *)&pUVar22->field_0x10 + 0x38) < iVar18) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar22->field_0x10 + 0x30) + (longlong)iVar18 * 8) !=
        &pUVar24->_padding_)) goto LAB_1481cbb2c;
    bVar14 = pUVar22[0x17].field_0xf;
  }
  local_2b0.CollisionFlags.bEnableSimCollisionSimple = false;
  local_2b0.CollisionFlags.bEnableSimCollisionComplex = false;
  local_2b0.CollisionFlags.bEnableQueryCollision = false;
  local_2b0.CollisionFlags.bEnableProbeCollision = false;
  if (bVar14 != 0) {
    if (((bVar14 - 1 & 0xfffffff9) == 0) && (bVar14 != 7)) {
      bVar15 = 1;
    }
    else {
      bVar15 = 0;
    }
    local_2b0.CollisionFlags = (FBodyCollisionFlags)((uint)bVar15 << 0x10);
    bVar16 = bVar14 - 4 < 2;
    if ((SimCollisionEnabled != 0) && ((bVar16 || (bVar14 - 2 < 2)))) {
      local_2b0.CollisionFlags.bEnableProbeCollision = bVar16;
      local_2b0.CollisionFlags.bEnableQueryCollision = (bool)bVar15;
      local_2b0.CollisionFlags.bEnableSimCollisionComplex = cVar2 == '\x03';
      local_2b0.CollisionFlags.bEnableSimCollisionSimple = true;
    }
  }
LAB_1481cba31:
  this_01 = FBodyInstance::GetBodySetup((FBodyInstance *)**(undefined8 **)this);
  UBodySetup::AddShapesToRigidActor_AssumesLocked
            (this_01,*(FBodyInstance **)((longlong)this + 8),
             &(*(FBodyInstance **)((longlong)this + 8))->Scale3D,pUVar21,&local_268,&local_240,
             &local_2b0,*(TTransform<double> **)((longlong)this + 0x10),
             *(TArray<FPhysicsShapeReference_Chaos,TSizedDefaultAllocator<32>_> **)
              ((longlong)this + 0x18));
  FChaosEngineInterface::SetSendsSleepNotifies_AssumesLocked
            (param_1,(bool)(*(byte *)(**(longlong **)this + 8) >> 7));
  if (*(int *)(*(longlong *)((longlong)this + 0x18) + 8) != 0) {
    if (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x180) == 0) {
      pTVar23 = ::operator_new(0x50);
      pTVar29 = pTVar30;
      if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
        pTVar23[1]._padding_ = 0;
        pTVar23[1].SharedReferenceCount = (atomic<int>)0x0;
        pTVar23[1].WeakReferenceCount = (atomic<int>)0x0;
        pTVar23[3].SharedReferenceCount = (atomic<int>)0x0;
        pTVar23[3].WeakReferenceCount = (atomic<int>)0x0;
        pTVar23[4].SharedReferenceCount = (atomic<int>)0x0;
        pTVar23[4].WeakReferenceCount = (atomic<int>)0x0;
        pTVar23->_padding_ = 0;
        pTVar23->SharedReferenceCount = (atomic<int>)0x0;
        pTVar23->WeakReferenceCount = (atomic<int>)0x0;
        pTVar23[2]._padding_ = 0;
        pTVar23[2].SharedReferenceCount = (atomic<int>)0x0;
        pTVar23[2].WeakReferenceCount = (atomic<int>)0x80;
        *(undefined4 *)&pTVar23[3]._padding_ = 0xffffffff;
        *(undefined4 *)((longlong)&pTVar23[3]._padding_ + 4) = 0;
        pTVar23[4]._padding_ = 0;
        pTVar29 = pTVar23;
      }
      local_250 = pTVar29;
      pTVar23 = ::operator_new(0x18);
      local_248.ReferenceController = pTVar30;
      if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
        pTVar23->SharedReferenceCount = (atomic<int>)0x1;
        pTVar23->WeakReferenceCount = (atomic<int>)0x1;
        pTVar23->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_V__TMap_VFPhysicsShapeReference_Chaos__UFWeldInfo_FBodyInstance__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_VFPhysicsShapeReference_Chaos__UFWeldInfo_FBodyInstance___0A_____U__DefaultDeleter_V__TMap_VFPhysicsShapeReference_Chaos__UFWeldInfo_FBodyInstance__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_VFPhysicsShapeReference_Chaos__UFWeldInfo_FBodyInstance___0A______SharedPointerInternals___00_SharedPointerInternals__6B_
        ;
        pTVar23[1]._padding_ = (longlong)pTVar29;
        local_248.ReferenceController = pTVar23;
      }
      lVar32 = *(longlong *)((longlong)this + 8);
      ppTVar25 = (TReferenceControllerBase<1> **)(lVar32 + 0x180);
      if (ppTVar25 != &local_250) {
        *ppTVar25 = pTVar29;
        local_250 = (TReferenceControllerBase<1> *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(lVar32 + 0x188),&local_248);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_248.ReferenceController);
    }
    plVar31 = *(longlong **)((longlong)this + 0x18);
    pTVar29 = pTVar30;
    if (0 < (int)plVar31[1]) {
      do {
        uVar28 = (uint)pTVar30;
        uVar17 = 0;
        if ((int)uVar28 < (int)plVar31[1]) {
          uVar17 = ~uVar28 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar32 = *(longlong *)((longlong)&pTVar29->_padding_ + *plVar31);
        pIVar5 = *(IPhysicsProxyBase **)(*(longlong *)((longlong)this + 8) + 0x138);
        if ((*(byte *)(lVar32 + 8) & 3) == 0) {
          *(IPhysicsProxyBase **)(lVar32 + 0x48) = pIVar5;
          if (((pIVar5 != (IPhysicsProxyBase *)0x0) && (*(int *)(lVar32 + 0xc) != 0)) &&
             (pIVar5->Solver != (FPhysicsSolverBase *)0x0)) {
            Chaos::FPhysicsSolverBase::AddDirtyProxyShape
                      (pIVar5->Solver,pIVar5,*(uint *)(lVar32 + 8) >> 3);
          }
        }
        else {
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("false",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ShapeInstance.h"
                              ,0x2b2,L"");
          if (bVar16) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        lVar32 = *(longlong *)((longlong)this + 8);
        if ((*(longlong *)(lVar32 + 0x180) == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar16)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pTVar6 = *(TSet<TTuple<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo>,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>,FDefaultSetAllocator>
                   **)(lVar32 + 0x180);
        plVar31 = *(longlong **)((longlong)this + 0x18);
        local_b8[0] = **(undefined8 **)this;
        puVar7 = *(undefined8 **)((longlong)this + 0x10);
        local_a8 = *puVar7;
        uStack_a0 = puVar7[1];
        local_98 = puVar7[2];
        uStack_90 = puVar7[3];
        local_88 = puVar7[4];
        uStack_80 = puVar7[5];
        local_78 = puVar7[6];
        uStack_70 = puVar7[7];
        local_68 = puVar7[8];
        uStack_60 = puVar7[9];
        local_58 = puVar7[10];
        uStack_50 = puVar7[0xb];
        uVar17 = 0;
        if ((int)uVar28 < (int)plVar31[1]) {
          uVar17 = ~uVar28 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        local_1c8 = (longlong)(int)uVar28 * 0x10 + *plVar31;
        local_1c0 = local_b8;
        TSet<TTuple<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo>,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<FPhysicsShapeReference_Chaos_const_&,FBodyInstance::FWeldInfo_&&>_>
                  (pTVar6,&local_1e8,(bool *)&local_1c8);
        plVar31 = *(longlong **)((longlong)this + 0x18);
        pTVar30 = (TReferenceControllerBase<1> *)(ulonglong)(uVar28 + 1);
        pTVar29 = pTVar29 + 1;
      } while ((int)(uVar28 + 1) < (int)plVar31[1]);
    }
    pTVar6 = *(TSet<TTuple<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo>,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>,FDefaultSetAllocator>
               **)(**(longlong **)this + 0x180);
    if (pTVar6 != (TSet<TTuple<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo>,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>,FDefaultSetAllocator>
                   *)0x0) {
      local_168.Elements._0_8_ = 0;
      local_168.Elements._8_8_ = 0;
      local_168.Elements._32_8_ = 0;
      local_168.Elements._40_4_ = 0;
      local_168.Elements._44_4_ = 0x80;
      local_168.Elements._48_4_ = 0xffffffff;
      local_168.Elements._52_4_ = 0;
      local_168.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_168.HashSize = 0;
      TSet<TTuple<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo>,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>,FDefaultSetAllocator>
      ::TIterator::TIterator((TIterator *)local_1a0,pTVar6);
      local_1f0 = 0;
      stack0xfffffffffffffde8 = local_1a0._16_16_;
      local_228 = (longlong *)local_1a0._0_8_;
      auStack_220._0_8_ = local_1a0._8_8_;
      local_208 = local_180;
      pTStack_200 = pTStack_178;
      iVar18 = local_1a0._28_4_;
      local_1f8 = pTVar6;
      if (iVar18 < *(int *)(local_1a0._16_8_ + 0x18)) {
        do {
          lVar32 = (longlong)iVar18 * 0x90 + *local_228;
          uVar8 = *(ulonglong *)(lVar32 + 0x10);
          uVar17 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
          uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
          if (local_168.Elements._8_4_ != local_168.Elements._52_4_) {
            FVar27 = (ForElementType<FSetElementId>)&local_168.Hash;
            if (local_168.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar27 = local_168.Hash.SecondaryData;
            }
            for (iVar18 = *(int *)((longlong)FVar27 +
                                  (ulonglong)(local_168.HashSize - 1U & (uVar17 >> 0x10 ^ uVar17)) *
                                  4); iVar18 != -1;
                iVar18 = *(int *)(local_168.Elements._0_8_ + 8 + (longlong)iVar18 * 0x10)) {
              if (*(ulonglong *)(local_168.Elements._0_8_ + (longlong)iVar18 * 0x10) == uVar8) {
                if (iVar18 != -1) goto LAB_1481cbfea;
                break;
              }
            }
          }
          TSet<FBodyInstance_*,DefaultKeyFuncs<FBodyInstance_*,0>,FDefaultSetAllocator>::
          Emplace<FBodyInstance_*_const_&>
                    (&local_168,(FBodyInstance **)&local_270,(bool *)(lVar32 + 0x10));
          local_118.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_118.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
          local_118.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_118.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          local_118.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_118.Translation.ZW.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[3];
          local_118.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_118.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_118.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_118.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_118.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
          local_118.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_118.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_118.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          UE::Math::TTransform<double>::Multiply
                    (&local_118,(TTransform<double> *)(lVar32 + 0x20),
                     *(TTransform<double> **)((longlong)this + 0x20));
          FBodyInstance::Weld(*(FBodyInstance **)((longlong)this + 8),
                              *(FBodyInstance **)(lVar32 + 0x10),&local_118);
LAB_1481cbfea:
          uStack_210 = uStack_210 & ~auStack_220._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_220);
          iVar18 = iStack_20c;
        } while (iStack_20c < *(int *)(auStack_220._8_8_ + 0x18));
        if (((char)local_1f0 != '\0') && (local_1f0._1_1_ != '\0')) {
          uVar17 = *(int *)&(local_1f8->Elements).field_0x8 -
                   *(int *)&(local_1f8->Elements).field_0x34;
          if (uVar17 < 4) {
            iVar18 = 1;
          }
          else {
            uVar8 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
            lVar32 = 0x3f;
            if (uVar8 != 0) {
              for (; uVar8 >> lVar32 == 0; lVar32 = lVar32 + -1) {
              }
            }
            iVar18 = 1 << ((byte)lVar32 & 0x1f);
          }
          if (((0 < (int)uVar17) && (local_1f8->HashSize < iVar18)) ||
             (iVar18 < local_1f8->HashSize)) {
            local_1f8->HashSize = iVar18;
            TSet<TTuple<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo>,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>,FDefaultSetAllocator>
            ::Rehash(local_1f8);
          }
        }
      }
      bVar16 = 1 < pTVar6->HashSize;
      if (!bVar16) {
        TSet<TTuple<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo>,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>,FDefaultSetAllocator>
        ::UnhashElements(pTVar6);
      }
      puVar1 = &(pTVar6->Elements).field_0xc;
      *(undefined4 *)&(pTVar6->Elements).field_0x8 = 0;
      if (*(int *)puVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x90,0x10,0,(ForAnyElementType *)pTVar6,0,(int *)puVar1);
      }
      *(undefined4 *)&(pTVar6->Elements).field_0x30 = 0xffffffff;
      *(undefined4 *)&(pTVar6->Elements).field_0x34 = 0;
      iVar18 = *(int *)&(pTVar6->Elements).field_0x2c;
      *(undefined4 *)&(pTVar6->Elements).field_0x28 = 0;
      if ((iVar18 < 0) || (0x80 < iVar18)) {
        *(undefined4 *)&(pTVar6->Elements).field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)&(pTVar6->Elements).field_0x10,0);
      }
      if (bVar16) {
        pTVar6->HashSize = 1;
        TSet<TTuple<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo>,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>,FDefaultSetAllocator>
        ::Rehash(pTVar6);
      }
      local_168.HashSize = 0;
      if (local_168.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_168.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FBodyInstance_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FBodyInstance_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_168.Elements);
    }
  }
  pFVar4 = *(FBodyInstance **)((longlong)this + 8);
  FBodyInstance::UpdatePhysicsFilterData(pFVar4);
  FBodyInstance::UpdateMassProperties(pFVar4);
  local_1b0 = &local_1e8.Value;
  local_1b8 = UE::Core::Private::Function::
              TFunctionRefCaller<`FBodyInstance::UpdateDampingProperties'::__l2::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
              ::Call;
  local_1d8 = pFVar4->ActorHandle;
  local_1e8.Value = (FWeldInfo *)pFVar4;
  FPhysInterface_Chaos::ExecuteWrite
            (&local_1d8,
             (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_1b8)
  ;
  local_1d0 = *(FSingleParticlePhysicsProxy **)(**(longlong **)this + 0x138);
  pFVar26 = FChaosEngineInterface::GetCurrentScene(&local_1d0);
  FChaosEngineInterface::ReleaseActor
            ((FSingleParticlePhysicsProxy **)(**(longlong **)this + 0x138),pFVar26,false);
  if (local_240.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_240.AllocatorInstance.Data);
  }
  if (local_268.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.AllocatorInstance.Data);
  }
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar12) {
    FThreadStats::AddMessage(local_2d8,CycleScopeEnd);
  }
  return;
}

// operator() @ 1481cc310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`FBodyInstance::UpdateMassProperties'::__l5::<lambda_1>::operator()
          (void *this,FSingleParticlePhysicsProxy *param_1)

{
  undefined8 *puVar1;
  double *pdVar2;
  longlong lVar3;
  FBodyInstance *pFVar4;
  TMap<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>
  *pTVar5;
  longlong *plVar6;
  FScriptContainerElement *pFVar7;
  void *_Src;
  code *pcVar8;
  ulonglong uVar9;
  bool bVar10;
  ECollisionShapeType EVar11;
  int iVar12;
  int *piVar13;
  ulonglong *puVar14;
  FMassProperties *pFVar15;
  byte bVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong *plVar19;
  undefined1 *puVar20;
  uint uVar21;
  ForElementType<FPhysicsShapeReference_Chaos> FVar22;
  ForAnyElementType *pFVar23;
  uint uVar24;
  ForElementType<FPhysicsShapeReference_Chaos> FVar25;
  longlong lVar26;
  ForAnyElementType FVar27;
  int iVar28;
  ForAnyElementType *pFVar29;
  longlong lVar30;
  ForAnyElementType *pFVar31;
  ForElementType<unsigned_int> FVar32;
  FPhysicsShapeReference_Chaos *pFVar33;
  FScriptContainerElement *pFVar34;
  __m128d _Var35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined1 auStackY_918 [32];
  undefined1 local_8c8;
  undefined1 local_8c7;
  undefined1 local_8c6 [6];
  TArray<FPhysicsShapeReference_Chaos,TSizedDefaultAllocator<32>_> local_8c0;
  TArray<Chaos::FMassProperties,TSizedDefaultAllocator<32>_> local_8b0;
  FSingleParticlePhysicsProxy *local_8a0;
  undefined1 local_898 [8];
  int local_890;
  int local_88c;
  ulonglong *local_888;
  ForAnyElementType *local_880;
  ulonglong *local_878;
  undefined8 local_870;
  longlong *local_868;
  uint uStack_860;
  uint uStack_85c;
  TBitArray<FDefaultBitArrayAllocator> *local_858;
  undefined4 uStack_850;
  uint uStack_84c;
  uint local_848;
  undefined4 uStack_844;
  int iStack_840;
  undefined4 uStack_83c;
  longlong *local_838;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_830;
  undefined8 uStack_810;
  double local_808;
  double dStack_800;
  undefined8 local_7f8;
  undefined8 uStack_7f0;
  double local_7e8;
  longlong lStack_7e0;
  double local_7d8;
  double dStack_7d0;
  undefined1 local_7c8 [16];
  undefined8 local_7b8;
  undefined8 uStack_7b0;
  undefined8 local_7a8;
  undefined8 uStack_7a0;
  undefined8 local_798;
  double dStack_790;
  undefined8 local_788;
  undefined8 uStack_780;
  undefined8 local_778;
  undefined8 uStack_770;
  double local_768;
  undefined8 uStack_760;
  undefined8 local_758;
  undefined8 uStack_750;
  undefined1 local_748 [16];
  TVector<double>_u_0 local_738;
  double local_720;
  double dStack_718;
  double local_710;
  double local_708;
  double dStack_700;
  double local_6f8;
  undefined4 local_6d4;
  FBodyInstance *local_6c8;
  TArray<FPhysicsShapeReference_Chaos,TSizedDefaultAllocator<32>_> local_6b8;
  undefined8 local_6a8;
  undefined8 uStack_6a0;
  undefined8 local_698;
  undefined8 uStack_690;
  undefined8 local_688;
  undefined8 uStack_680;
  undefined8 local_678;
  undefined8 uStack_670;
  undefined8 local_668;
  undefined8 uStack_660;
  undefined8 local_658;
  undefined8 uStack_650;
  longlong local_648;
  undefined8 local_640;
  TBitArray<FDefaultBitArrayAllocator> local_638;
  undefined4 local_618;
  int local_614;
  undefined1 local_610 [8];
  undefined1 *local_608;
  int local_600;
  TTransform<double> local_5f8;
  TTransform<double> local_598;
  TTransform<double> local_538;
  undefined1 local_4d8 [24];
  double dStack_4c0;
  double local_4b8;
  double dStack_4b0;
  double local_4a8;
  double dStack_4a0;
  double local_498;
  double dStack_490;
  double local_488;
  double dStack_480;
  double local_478;
  double dStack_470;
  double local_468;
  double dStack_460;
  double local_458;
  double dStack_450;
  double local_448;
  double dStack_440;
  double local_438;
  double dStack_430;
  double local_428;
  double dStack_420;
  double local_418;
  double dStack_410;
  TArray<FPhysicsShapeReference_Chaos,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  local_408;
  FMassProperties local_1f8;
  FMassProperties local_128;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_918;
  local_8a0 = param_1;
  local_888 = this;
  if ((param_1 == (FSingleParticlePhysicsProxy *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("FPhysicsInterface::IsValid(Actor)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                          ,0xd0d,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar28 = 0;
  local_408.ArrayMax = 0x20;
  local_408.AllocatorInstance.SecondaryData = (ForElementType<FPhysicsShapeReference_Chaos>)0x0;
  local_408.ArrayNum = 0;
  FChaosEngineInterface::GetAllShapes_AssumedLocked(&local_8a0,&local_408);
  iVar12 = local_408.ArrayNum;
  uVar18 = (ulonglong)local_408.ArrayNum;
  FVar22 = (ForElementType<FPhysicsShapeReference_Chaos>)&local_408;
  if (local_408.AllocatorInstance.SecondaryData != (ForElementType<FPhysicsShapeReference_Chaos>)0x0
     ) {
    FVar22 = local_408.AllocatorInstance.SecondaryData;
  }
  FVar25 = (ForElementType<FPhysicsShapeReference_Chaos>)(uVar18 * 0x10 + (longlong)FVar22);
  while( true ) {
    if ((uint)uVar18 != iVar12) {
      local_8c8 = 0;
      `TCheckedPointerIterator<FPhysicsShapeReference_Chaos,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_8c8);
    }
    if (FVar22 == FVar25) break;
    bVar10 = FChaosEngineInterface::IsSimulationShape((FPhysicsShapeReference_Chaos *)FVar22);
    if (bVar10) {
      iVar28 = iVar28 + 1;
    }
    uVar18 = (ulonglong)(uint)local_408.ArrayNum;
    FVar22 = (ForElementType<FPhysicsShapeReference_Chaos>)((longlong)FVar22 + 0x10);
  }
  if (local_408.AllocatorInstance.SecondaryData != (ForElementType<FPhysicsShapeReference_Chaos>)0x0
     ) {
    FMemory::Free((void *)local_408.AllocatorInstance.SecondaryData);
  }
  if (iVar28 < 1) {
    return;
  }
  iVar12 = FChaosEngineInterface::GetNumShapes(&local_8a0);
  local_8c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_8c0.ArrayNum = 0;
  local_8c0.ArrayMax = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar12,&local_8c0.AllocatorInstance,&local_8c0.ArrayNum,&local_8c0.ArrayMax);
  FChaosEngineInterface::GetAllShapes_AssumedLocked(&local_8a0,&local_8c0);
  local_870 = 1;
  uVar21 = local_8c0.ArrayNum - 1;
  iVar12 = local_8c0.ArrayNum;
  if (-1 < (int)uVar21) {
    lVar26 = (longlong)(int)uVar21 << 4;
    do {
      uVar17 = 0;
      if ((int)uVar21 < local_8c0.ArrayNum) {
        uVar17 = ~uVar21 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar33 = (FPhysicsShapeReference_Chaos *)(local_8c0.AllocatorInstance.Data + lVar26);
      piVar13 = FChaosEngineInterface::GetUserData(pFVar33);
      if ((piVar13 == (int *)0x0) || (*piVar13 != 6)) {
        EVar11 = FChaosEngineInterface::GetShapeType(pFVar33);
LAB_1481cc527:
        bVar10 = false;
      }
      else {
        lVar3 = *(longlong *)(piVar13 + 2);
        EVar11 = FChaosEngineInterface::GetShapeType(pFVar33);
        if ((lVar3 == 0) || (bVar10 = true, (*(byte *)(lVar3 + 0x18) & 1) != 0)) goto LAB_1481cc527;
      }
      if ((EVar11 == Trimesh) || (bVar10)) {
        uVar17 = 0;
        if ((int)uVar21 < local_8c0.ArrayNum) {
          uVar17 = ~uVar21 >> 0x1f;
        }
        if (uVar17 == 0) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar10) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        iVar12 = (local_8c0.ArrayNum - uVar21) + -1;
        if (1 < iVar12) {
          iVar12 = 1;
        }
        iVar28 = local_8c0.ArrayNum;
        if (iVar12 != 0) {
          memmove(local_8c0.AllocatorInstance.Data + lVar26,
                  local_8c0.AllocatorInstance.Data + (longlong)(local_8c0.ArrayNum - iVar12) * 0x10,
                  (longlong)iVar12 << 4);
          iVar28 = local_8c0.ArrayNum;
        }
        local_8c0.ArrayNum = iVar28 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&local_8c0.AllocatorInstance,iVar28 + -1,&local_8c0.ArrayMax);
      }
      lVar26 = lVar26 + -0x10;
      uVar21 = uVar21 - 1;
      this = local_888;
      iVar12 = local_8c0.ArrayNum;
    } while (-1 < (int)uVar21);
  }
  pFVar4 = *(FBodyInstance **)this;
  local_7e8 = 0.0;
  local_808 = 0.0;
  dStack_800 = 0.0;
  pTVar5 = (pFVar4->ShapeToBodiesMap).Object;
  local_7f8 = 0;
  uStack_7f0 = 0;
  uVar36 = 0;
  uVar37 = 0;
  local_7b8 = 0;
  uStack_7b0 = 0;
  local_7d8 = 0.0;
  dStack_7d0 = 0.0;
  local_7c8 = ___xmm_3ff00000000000000000000000000000;
  local_758 = 0;
  uStack_750 = 0;
  local_748 = ___xmm_3ff00000000000000000000000000000;
  local_7a8 = 0;
  uStack_7a0 = 0;
  local_798 = 0;
  dStack_790 = 0.0;
  local_788 = 0;
  uStack_780 = 0;
  local_778 = 0;
  uStack_770 = 0;
  local_768 = 0.0;
  uStack_760 = 0;
  if ((pTVar5 != (TMap<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>
                  *)0x0) && (0 < *(int *)&pTVar5->field_0x8 - *(int *)&pTVar5->field_0x34)) {
    pFVar31 = (ForAnyElementType *)0x0;
    uVar21 = 0;
    local_648 = 0;
    pFVar34 = local_8c0.AllocatorInstance.Data + (longlong)iVar12 * 0x10;
    local_640 = 0;
    local_638.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_638.NumBits = 0;
    local_638.MaxBits = 0x80;
    local_618 = 0xffffffff;
    local_614 = 0;
    local_608 = (undefined1 *)0x0;
    local_600 = 0;
    FVar27.Data = local_8c0.AllocatorInstance.Data;
    iVar28 = iVar12;
LAB_1481cc730:
    if (iVar28 != iVar12) {
      local_8c7 = 0;
      `TCheckedPointerIterator<FPhysicsShapeReference_Chaos,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_8c7);
    }
    uVar17 = local_638.NumBits;
    if (FVar27.Data != pFVar34) {
      uVar18 = *(ulonglong *)this;
      if ((*(longlong *)(uVar18 + 0x180) == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      plVar6 = *(longlong **)(uVar18 + 0x180);
      uVar18 = *(ulonglong *)FVar27.Data;
      uVar17 = ((uint)(uVar18 >> 0x14) & 0xffff ^ (uint)(uVar18 >> 4)) * -0x7a143595;
      uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
      if ((int)plVar6[1] != *(int *)((longlong)plVar6 + 0x34)) {
        plVar19 = plVar6 + 7;
        if ((longlong *)plVar6[8] != (longlong *)0x0) {
          plVar19 = (longlong *)plVar6[8];
        }
        iVar28 = *(int *)((longlong)plVar19 +
                         (ulonglong)((int)plVar6[9] - 1U & (uVar17 >> 0x10 ^ uVar17)) * 4);
        if (iVar28 != -1) {
          do {
            puVar14 = (ulonglong *)((longlong)iVar28 * 0x90 + *plVar6);
            if (*puVar14 == uVar18) {
              pFVar29 = (ForAnyElementType *)(puVar14 + 2);
              if (puVar14 == (ulonglong *)0x0) {
                pFVar29 = pFVar31;
              }
              if (pFVar29 != (ForAnyElementType *)0x0) {
                pFVar7 = pFVar29->Data;
                uVar17 = ((uint)((ulonglong)pFVar7 >> 0x14) & 0xffff ^
                         (uint)((ulonglong)pFVar7 >> 4)) * -0x7a143595;
                uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
                if ((int)local_640 == local_614) goto LAB_1481cc963;
                puVar20 = local_610;
                if (local_608 != (undefined1 *)0x0) {
                  puVar20 = local_608;
                }
                iVar28 = *(int *)(puVar20 +
                                 (ulonglong)(local_600 - 1U & (uVar17 >> 0x10 ^ uVar17)) * 4);
                goto joined_r0x0001481cc928;
              }
              break;
            }
            iVar28 = (int)puVar14[0x10];
          } while (iVar28 != -1);
        }
      }
      uVar18 = *(ulonglong *)this;
      uVar17 = ((uint)(uVar18 >> 0x14) & 0xffff ^ (uint)(uVar18 >> 4)) * -0x7a143595;
      uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
      if ((int)local_640 != local_614) {
        puVar20 = local_610;
        if (local_608 != (undefined1 *)0x0) {
          puVar20 = local_608;
        }
        iVar28 = *(int *)(puVar20 + (ulonglong)(local_600 - 1U & (uVar17 >> 0x10 ^ uVar17)) * 4);
        while (iVar28 != -1) {
          puVar14 = (ulonglong *)((longlong)iVar28 * 0x90 + local_648);
          if (*puVar14 == uVar18) {
            pFVar23 = (ForAnyElementType *)(puVar14 + 2);
            if (puVar14 == (ulonglong *)0x0) {
              pFVar23 = pFVar31;
            }
            if (pFVar23 != (ForAnyElementType *)0x0) goto LAB_1481cca50;
            break;
          }
          iVar28 = (int)puVar14[0x10];
        }
      }
      local_878 = this;
      TSet<TTuple<FBodyInstance_*,``FBodyInstance::UpdateMassProperties'::__l5::<lambda_1>::operator()'::__l21::FWeldedBatch>,TDefaultMapHashableKeyFuncs<FBodyInstance_*,``FBodyInstance::UpdateMassProperties'::__l5::<lambda_1>::operator()'::__l21::FWeldedBatch,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<FBodyInstance_*_const_&>_>
                (&local_648,(TKeyInitializer<FBodyInstance_*_const_&> *)(local_898 + 4),
                 (bool *)&local_878);
      pFVar23 = (ForAnyElementType *)(local_648 + 0x10 + (longlong)(int)local_898._4_4_ * 0x90);
      *(double (*) [2])(pFVar23 + 2) = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
      *(double (*) [2])(pFVar23 + 4) = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
      *(double (*) [2])(pFVar23 + 6) =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      *(double (*) [2])(pFVar23 + 8) =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      *(double (*) [2])(pFVar23 + 10) = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      _Var35 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
      goto LAB_1481cca4c;
    }
    local_848 = 0;
    local_8b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_8b0.ArrayNum = 0;
    local_8b0.ArrayMax = 0;
    uStack_85c = (uint)local_870;
    uStack_84c = local_848;
    if (local_638.NumBits == 0) goto LAB_1481ccb91;
    FVar32 = (ForElementType<unsigned_int>)&local_638;
    if (local_638.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar32 = local_638.AllocatorInstance.SecondaryData;
    }
    uVar24 = *(uint *)FVar32;
    pFVar29 = pFVar31;
    local_848 = 0;
    uVar21 = 0;
    goto joined_r0x0001481ccb46;
  }
  if (iVar12 < 1) goto LAB_1481cd1bf;
  local_598.Rotation.XY.m128d_f64[0] = UE::Math::TQuat<double>::Identity.X;
  local_598.Rotation.XY.m128d_f64[1] = UE::Math::TQuat<double>::Identity.Y;
  local_598.Rotation.ZW.m128d_f64[0] = UE::Math::TQuat<double>::Identity.Z;
  local_598.Rotation.ZW.m128d_f64[1] = UE::Math::TQuat<double>::Identity.W;
  local_598.Translation.XY.m128d_f64[0] = 0.0;
  local_598.Translation.XY.m128d_f64[1] = 0.0;
  local_598.Translation.ZW.m128d_f64[0] = 0.0;
  local_598.Translation.ZW.m128d_f64[1] = 0.0;
  local_598.Scale3D.XY.m128d_f64[0] = (pFVar4->Scale3D).field0_0x0._s_0.X;
  local_598.Scale3D.XY.m128d_f64[1] = (pFVar4->Scale3D).field0_0x0._s_0.Y;
  local_598.Scale3D.ZW.m128d_f64[0] = (pFVar4->Scale3D).field0_0x0._s_0.Z;
  local_598.Scale3D.ZW.m128d_f64[1] = 0.0;
  pFVar15 = BodyUtils::ComputeMassProperties(&local_128,pFVar4,&local_8c0,&local_598,false);
  local_808 = pFVar15->Mass;
  dStack_800 = pFVar15->Volume;
  local_7f8 = *(undefined8 *)&pFVar15->CenterOfMass;
  uStack_7f0 = *(undefined8 *)&(pFVar15->CenterOfMass).field_0x8;
  local_7e8 = *(double *)&(pFVar15->CenterOfMass).field_0x10;
  lStack_7e0 = pFVar15->_padding_;
  local_7d8 = *(double *)&pFVar15->RotationOfMass;
  dStack_7d0 = *(double *)&(pFVar15->RotationOfMass).field_0x8;
  local_7c8 = *(undefined1 (*) [16])&(pFVar15->RotationOfMass).field_0x10;
  local_7b8 = *(undefined8 *)&pFVar15->InertiaTensor;
  uStack_7b0 = *(undefined8 *)&(pFVar15->InertiaTensor).field_0x8;
  local_7a8 = *(undefined8 *)&(pFVar15->InertiaTensor).field_0x10;
  uStack_7a0 = *(undefined8 *)&(pFVar15->InertiaTensor).field_0x18;
  local_788 = *(undefined8 *)&(pFVar15->InertiaTensor).field_0x30;
  uStack_780 = *(undefined8 *)&(pFVar15->InertiaTensor).field_0x38;
  local_798 = *(undefined8 *)&(pFVar15->InertiaTensor).field_0x20;
  dStack_790 = *(double *)&(pFVar15->InertiaTensor).field_0x28;
  local_778 = *(undefined8 *)&(pFVar15->InertiaTensor).field_0x40;
  uStack_770 = *(undefined8 *)&(pFVar15->InertiaTensor).field_0x48;
  local_768 = *(double *)&(pFVar15->InertiaTensor).field_0x50;
  uStack_760 = *(undefined8 *)&(pFVar15->InertiaTensor).field_0x58;
  local_758 = *(undefined8 *)&(pFVar15->InertiaTensor).field_0x60;
  uStack_750 = *(undefined8 *)&(pFVar15->InertiaTensor).field_0x68;
  local_748 = *(undefined1 (*) [16])&(pFVar15->InertiaTensor).field_0x70;
  goto LAB_1481cd1aa;
joined_r0x0001481cc928:
  if (iVar28 == -1) goto LAB_1481cc963;
  puVar14 = (ulonglong *)((longlong)iVar28 * 0x90 + local_648);
  if ((FScriptContainerElement *)*puVar14 == pFVar7) {
    pFVar23 = (ForAnyElementType *)(puVar14 + 2);
    if (puVar14 == (ulonglong *)0x0) {
      pFVar23 = pFVar31;
    }
    if (pFVar23 != (ForAnyElementType *)0x0) goto LAB_1481cca50;
    goto LAB_1481cc963;
  }
  iVar28 = (int)puVar14[0x10];
  goto joined_r0x0001481cc928;
LAB_1481cc963:
  local_880 = pFVar29;
  TSet<TTuple<FBodyInstance_*,``FBodyInstance::UpdateMassProperties'::__l5::<lambda_1>::operator()'::__l21::FWeldedBatch>,TDefaultMapHashableKeyFuncs<FBodyInstance_*,``FBodyInstance::UpdateMassProperties'::__l5::<lambda_1>::operator()'::__l21::FWeldedBatch,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<FBodyInstance_*_const_&>_>
            (&local_648,(TKeyInitializer<FBodyInstance_*_const_&> *)local_898,(bool *)&local_880);
  pFVar7 = pFVar29[3].Data;
  pFVar23 = (ForAnyElementType *)(local_648 + 0x10 + (longlong)(int)local_898._0_4_ * 0x90);
  pFVar23[2].Data = pFVar29[2].Data;
  pFVar23[3].Data = pFVar7;
  pFVar7 = pFVar29[5].Data;
  pFVar23[4].Data = pFVar29[4].Data;
  pFVar23[5].Data = pFVar7;
  pFVar7 = pFVar29[7].Data;
  pFVar23[6].Data = pFVar29[6].Data;
  pFVar23[7].Data = pFVar7;
  pFVar7 = pFVar29[9].Data;
  pFVar23[8].Data = pFVar29[8].Data;
  pFVar23[9].Data = pFVar7;
  pFVar7 = pFVar29[0xb].Data;
  pFVar23[10].Data = pFVar29[10].Data;
  pFVar23[0xb].Data = pFVar7;
  _Var35.m128d_f64 = *(double (*) [2])(pFVar29 + 0xc);
LAB_1481cca4c:
  *(double (*) [2])(pFVar23 + 0xc) = _Var35.m128d_f64;
LAB_1481cca50:
  if (((pFVar23->Data <= FVar27.Data) &&
      (FVar27.Data < pFVar23->Data + (longlong)*(int *)((longlong)&pFVar23[1].Data + 4) * 0x10)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar28 = *(int *)&pFVar23[1].Data;
  piVar13 = (int *)((longlong)&pFVar23[1].Data + 4);
  if (iVar28 == *piVar13) {
    iVar28 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,pFVar23,piVar13);
  }
  *(int *)&pFVar23[1].Data = iVar28 + 1;
  uVar18 = *(ulonglong *)FVar27.Data;
  uVar9 = *(ulonglong *)(FVar27.Data + 8);
  pFVar7 = pFVar23->Data;
  FVar27.Data = FVar27.Data + 0x10;
  *(ulonglong *)(pFVar7 + (longlong)iVar28 * 0x10) = uVar18;
  *(ulonglong *)(pFVar7 + (longlong)iVar28 * 0x10 + 8) = uVar9;
  iVar28 = local_8c0.ArrayNum;
  goto LAB_1481cc730;
joined_r0x0001481ccb46:
  if (uVar24 != 0) goto LAB_1481ccb6c;
  iVar12 = (int)pFVar31;
  local_848 = (int)pFVar29 + 0x20;
  pFVar29 = (ForAnyElementType *)(ulonglong)local_848;
  uVar21 = iVar12 + 1;
  pFVar31 = (ForAnyElementType *)(ulonglong)uVar21;
  uStack_84c = local_638.NumBits;
  if ((int)((local_638.NumBits - 1U) + ((int)(local_638.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
      (int)uVar21) goto LAB_1481ccb91;
  uVar24 = *(uint *)((longlong)FVar32 + ((longlong)iVar12 + 1) * 4);
  goto joined_r0x0001481ccb46;
LAB_1481ccb6c:
  uStack_85c = -uVar24 & uVar24;
  uVar18 = (ulonglong)uStack_85c * 2 + 1;
  lVar26 = 0x3f;
  if (uVar18 != 0) {
    for (; uVar18 >> lVar26 == 0; lVar26 = lVar26 + -1) {
    }
  }
  local_890 = (int)lVar26;
  uStack_84c = (local_848 - 1) + local_890;
  if (local_638.NumBits < (int)uStack_84c) {
    uStack_84c = local_638.NumBits;
  }
LAB_1481ccb91:
  local_868 = &local_648;
  uStack_844 = local_6d4;
  local_858 = &local_638;
  iStack_840 = (int)local_640 - local_614;
  uVar24 = local_638.NumBits & 0xffffffe0;
  uStack_850 = 0xffffffff;
  TStack_830.CurrentBitIndex = uStack_84c;
  TStack_830.UnvisitedBitMask = 0xffffffff;
  TStack_830._padding_ = CONCAT44(uStack_85c,uVar21);
  iVar12 = local_638.NumBits >> 5;
  TStack_830._28_4_ = local_6d4;
  TStack_830.BaseBitIndex = local_848;
  uStack_810 = CONCAT44(uStack_83c,iStack_840);
  bVar16 = (byte)local_638.NumBits;
  uStack_860 = uVar21;
  local_838 = local_868;
  TStack_830.Array = local_858;
  if ((local_638.NumBits < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (uVar17 != local_638.NumBits) {
    FVar32 = (ForElementType<unsigned_int>)&local_638;
    if (local_638.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar32 = local_638.AllocatorInstance.SecondaryData;
    }
    uVar21 = -1 << (bVar16 & 0x1f) & *(uint *)((longlong)FVar32 + (longlong)iVar12 * 4);
    while (uVar21 == 0) {
      lVar26 = (longlong)iVar12;
      uVar24 = uVar24 + 0x20;
      iVar12 = iVar12 + 1;
      uVar17 = local_638.NumBits;
      if ((int)((local_638.NumBits - 1U) + ((int)(local_638.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
          iVar12) goto LAB_1481cccb0;
      uVar21 = *(uint *)((longlong)FVar32 + (lVar26 + 1) * 4);
    }
    uVar18 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
    lVar26 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar26 == 0; lVar26 = lVar26 + -1) {
      }
    }
    local_88c = (int)lVar26;
    uVar17 = (uVar24 - 1) + local_88c;
    if (local_638.NumBits < (int)uVar17) {
      uVar17 = local_638.NumBits;
    }
  }
LAB_1481cccb0:
  while( true ) {
    plVar6 = local_838;
    if ((int)local_838[1] - *(int *)((longlong)local_838 + 0x34) != (int)uStack_810) {
      local_8c6[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FBodyInstance_*,``FBodyInstance::UpdateMassProperties'::__l5::<lambda_1>::operator()'::__l21::FWeldedBatch>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_8c6);
    }
    lVar26 = (longlong)TStack_830.CurrentBitIndex;
    if (((TStack_830.CurrentBitIndex == uVar17) && (TStack_830.Array == &local_638)) &&
       (plVar6 == &local_648)) break;
    lVar3 = *plVar6;
    local_6c8 = *(FBodyInstance **)(lVar3 + lVar26 * 0x90);
    local_6b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_6b8.ArrayNum = *(int *)(lVar3 + 0x18 + lVar26 * 0x90);
    lVar30 = (longlong)local_6b8.ArrayNum;
    _Src = *(void **)(lVar3 + 0x10 + lVar26 * 0x90);
    if (local_6b8.ArrayNum == 0) {
      local_6b8.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,local_6b8.ArrayNum,0,&local_6b8.AllocatorInstance,local_6b8.ArrayNum,
                 &local_6b8.ArrayMax);
      memcpy(local_6b8.AllocatorInstance.Data,_Src,lVar30 << 4);
    }
    puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar26 * 0x90);
    local_6a8 = *puVar1;
    uStack_6a0 = puVar1[1];
    uVar18 = *(ulonglong *)this;
    puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar26 * 0x90);
    local_698 = *puVar1;
    uStack_690 = puVar1[1];
    puVar1 = (undefined8 *)(lVar3 + 0x40 + lVar26 * 0x90);
    local_688 = *puVar1;
    uStack_680 = puVar1[1];
    puVar1 = (undefined8 *)(lVar3 + 0x50 + lVar26 * 0x90);
    local_678 = *puVar1;
    uStack_670 = puVar1[1];
    puVar1 = (undefined8 *)(lVar3 + 0x60 + lVar26 * 0x90);
    local_668 = *puVar1;
    uStack_660 = puVar1[1];
    puVar1 = (undefined8 *)(lVar3 + 0x70 + lVar26 * 0x90);
    local_658 = *puVar1;
    uStack_650 = puVar1[1];
    pdVar2 = (double *)(lVar3 + 0x60 + lVar26 * 0x90);
    local_720 = *pdVar2;
    dStack_718 = pdVar2[1];
    pdVar2 = (double *)(lVar3 + 0x30 + lVar26 * 0x90);
    local_5f8.Rotation.ZW.m128d_f64[0] = *pdVar2;
    local_5f8.Rotation.ZW.m128d_f64[1] = pdVar2[1];
    pdVar2 = (double *)(lVar3 + 0x20 + lVar26 * 0x90);
    local_5f8.Rotation.XY.m128d_f64[0] = *pdVar2;
    local_5f8.Rotation.XY.m128d_f64[1] = pdVar2[1];
    pdVar2 = (double *)(lVar3 + 0x50 + lVar26 * 0x90);
    local_5f8.Translation.ZW.m128d_f64[0] = *pdVar2;
    local_5f8.Translation.ZW.m128d_f64[1] = pdVar2[1];
    pdVar2 = (double *)(lVar3 + 0x40 + lVar26 * 0x90);
    local_5f8.Translation.XY.m128d_f64[0] = *pdVar2;
    local_5f8.Translation.XY.m128d_f64[1] = pdVar2[1];
    local_710 = *(double *)(lVar3 + 0x70 + lVar26 * 0x90);
    local_708 = local_720 * *(double *)(uVar18 + 0x50);
    dStack_700 = dStack_718 * *(double *)(uVar18 + 0x58);
    local_6f8 = local_710 * *(double *)(uVar18 + 0x60);
    local_5f8.Scale3D.ZW.m128d_f64[1] = 0.0;
    local_5f8.Scale3D.XY.m128d_f64[0] = local_708;
    local_5f8.Scale3D.XY.m128d_f64[1] = dStack_700;
    local_5f8.Scale3D.ZW.m128d_f64[0] = local_6f8;
    BodyUtils::ComputeMassProperties
              ((FMassProperties *)local_4d8,local_6c8,&local_6b8,&local_5f8,false);
    if (((local_8b0.AllocatorInstance.Data <= (FScriptContainerElement *)local_4d8) &&
        ((FScriptContainerElement *)local_4d8 <
         local_8b0.AllocatorInstance.Data + (longlong)local_8b0.ArrayMax * 0xd0)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar12 = local_8b0.ArrayNum;
    if (local_8b0.ArrayNum == local_8b0.ArrayMax) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x10d0,&local_8b0.AllocatorInstance,&local_8b0.ArrayMax);
    }
    local_8b0.ArrayNum = iVar12 + 1;
    pFVar34 = local_8b0.AllocatorInstance.Data + (longlong)iVar12 * 0xd0;
    *(undefined8 *)pFVar34 = local_4d8._0_8_;
    *(undefined8 *)(pFVar34 + 8) = local_4d8._8_8_;
    *(undefined8 *)(pFVar34 + 0x10) = local_4d8._16_8_;
    *(double *)(pFVar34 + 0x18) = dStack_4c0;
    *(double *)(pFVar34 + 0x20) = local_4b8;
    *(double *)(pFVar34 + 0x28) = dStack_4b0;
    *(double *)(pFVar34 + 0x30) = local_4a8;
    *(double *)(pFVar34 + 0x38) = dStack_4a0;
    *(double *)(pFVar34 + 0x40) = local_498;
    *(double *)(pFVar34 + 0x48) = dStack_490;
    *(double *)(pFVar34 + 0x50) = local_488;
    *(double *)(pFVar34 + 0x58) = dStack_480;
    *(double *)(pFVar34 + 0x60) = local_478;
    *(double *)(pFVar34 + 0x68) = dStack_470;
    *(double *)(pFVar34 + 0x70) = local_468;
    *(double *)(pFVar34 + 0x78) = dStack_460;
    *(double *)(pFVar34 + 0x80) = local_458;
    *(double *)(pFVar34 + 0x88) = dStack_450;
    *(double *)(pFVar34 + 0x90) = local_448;
    *(double *)(pFVar34 + 0x98) = dStack_440;
    *(double *)(pFVar34 + 0xa0) = local_438;
    *(double *)(pFVar34 + 0xa8) = dStack_430;
    *(double *)(pFVar34 + 0xb0) = local_428;
    *(double *)(pFVar34 + 0xb8) = dStack_420;
    *(double *)(pFVar34 + 0xc0) = local_418;
    *(double *)(pFVar34 + 200) = dStack_410;
    if (local_6b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6b8.AllocatorInstance.Data);
    }
    TStack_830.UnvisitedBitMask = TStack_830.UnvisitedBitMask & ~TStack_830._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_830);
  }
  if (0 < local_8b0.ArrayNum) {
    pFVar15 = Chaos::Combine(&local_1f8,&local_8b0);
    local_808 = pFVar15->Mass;
    dStack_800 = pFVar15->Volume;
    local_7f8 = *(undefined8 *)&pFVar15->CenterOfMass;
    uStack_7f0 = *(undefined8 *)&(pFVar15->CenterOfMass).field_0x8;
    local_7e8 = *(double *)&(pFVar15->CenterOfMass).field_0x10;
    lStack_7e0 = pFVar15->_padding_;
    local_7d8 = *(double *)&pFVar15->RotationOfMass;
    dStack_7d0 = *(double *)&(pFVar15->RotationOfMass).field_0x8;
    local_7c8 = *(undefined1 (*) [16])&(pFVar15->RotationOfMass).field_0x10;
    local_7b8 = *(undefined8 *)&pFVar15->InertiaTensor;
    uStack_7b0 = *(undefined8 *)&(pFVar15->InertiaTensor).field_0x8;
    local_7a8 = *(undefined8 *)&(pFVar15->InertiaTensor).field_0x10;
    uStack_7a0 = *(undefined8 *)&(pFVar15->InertiaTensor).field_0x18;
    local_798 = *(undefined8 *)&(pFVar15->InertiaTensor).field_0x20;
    dStack_790 = *(double *)&(pFVar15->InertiaTensor).field_0x28;
    local_788 = *(undefined8 *)&(pFVar15->InertiaTensor).field_0x30;
    uStack_780 = *(undefined8 *)&(pFVar15->InertiaTensor).field_0x38;
    local_778 = *(undefined8 *)&(pFVar15->InertiaTensor).field_0x40;
    uStack_770 = *(undefined8 *)&(pFVar15->InertiaTensor).field_0x48;
    local_768 = *(double *)&(pFVar15->InertiaTensor).field_0x50;
    uStack_760 = *(undefined8 *)&(pFVar15->InertiaTensor).field_0x58;
    local_758 = *(undefined8 *)&(pFVar15->InertiaTensor).field_0x60;
    uStack_750 = *(undefined8 *)&(pFVar15->InertiaTensor).field_0x68;
    local_748 = *(undefined1 (*) [16])&(pFVar15->InertiaTensor).field_0x70;
  }
  if (local_8b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8b0.AllocatorInstance.Data);
  }
  local_600 = 0;
  if (local_608 != (undefined1 *)0x0) {
    FMemory::Free(local_608);
  }
  TSparseArray<TSparseSetElement<TTuple<FBodyInstance_*,``FBodyInstance::UpdateMassProperties'::__l5::<lambda_1>::operator()'::__l21::FWeldedBatch>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FBodyInstance_*,__FBodyInstance::UpdateMassProperties_::__l5::<lambda_1>::operator()_::__l21::FWeldedBatch>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_648);
LAB_1481cd1aa:
  uVar36 = (undefined4)local_7b8;
  uVar37 = (undefined4)((ulonglong)local_7b8 >> 0x20);
LAB_1481cd1bf:
  if (__real_322bcc77 <
      (float)((dStack_790 + (double)CONCAT44(uVar37,uVar36) + local_768) * __real_3fd5555555555555))
  {
    local_738._s_0.X = (double)CONCAT44(uVar37,uVar36);
    local_738._s_0.Y = dStack_790;
    local_738._s_0.Z = local_768;
    FChaosEngineInterface::SetMassSpaceInertiaTensor_AssumesLocked
              (&local_8a0,(TVector<double> *)&local_738._s_0);
    FChaosEngineInterface::SetMass_AssumesLocked(&local_8a0,(float)local_808);
    local_538.Rotation.XY.m128d_f64[0] = local_7d8;
    local_538.Rotation.XY.m128d_f64[1] = dStack_7d0;
    local_538.Translation.XY.m128d_f64[1]._0_4_ = (undefined4)uStack_7f0;
    local_538.Translation.XY.m128d_f64[1]._4_4_ = (undefined4)((ulonglong)uStack_7f0 >> 0x20);
    local_538.Rotation.ZW.m128d_f64[0] = (double)local_7c8._0_8_;
    local_538.Rotation.ZW.m128d_f64[1] = (double)local_7c8._8_8_;
    local_538.Translation.ZW.m128d_f64[0] = local_7e8;
    local_538.Translation.ZW.m128d_f64[1] = 0.0;
    local_538.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
    local_538.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
    local_538.Translation.XY.m128d_f64[0]._0_4_ = (undefined4)local_7f8;
    local_538.Translation.XY.m128d_f64[0]._4_4_ = local_7f8._4_4_;
    local_538.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
    local_538.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
    FChaosEngineInterface::SetComLocalPose_AssumesLocked(&local_8a0,&local_538);
  }
  if (local_8c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8c0.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 1481cd2e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`FBodyInstance::UpdateTriMeshVertices'::__l5::<lambda_1>::operator()
          (void *this,FSingleParticlePhysicsProxy *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  FTriangleMeshImplicitObject *pFVar5;
  code *pcVar6;
  double dVar7;
  longlong lVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  ECollisionShapeType EVar14;
  byte bVar15;
  bool bVar16;
  uchar uVar17;
  TRefCountPtr<Chaos::FImplicitObject> TVar18;
  TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,0> *this_00;
  undefined8 *puVar19;
  FTriangleMeshImplicitObject *this_01;
  ForAnyElementType FVar20;
  FPhysicsShapeReference_Chaos *pFVar21;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_b0 [16];
  TArray<FPhysicsShapeReference_Chaos,TSizedDefaultAllocator<32>_> local_a0;
  undefined1 local_90 [16];
  double local_80;
  FSingleParticlePhysicsProxy *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  
  local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.ArrayNum = 0;
  local_a0.ArrayMax = 0;
  if (*(FSingleParticlePhysicsProxy **)(*(longlong *)this + 0x138) !=
      (FSingleParticlePhysicsProxy *)0x0) {
    local_78 = *(FSingleParticlePhysicsProxy **)(*(longlong *)this + 0x138);
    FChaosEngineInterface::GetAllShapes_AssumedLocked(&local_78,&local_a0);
  }
  iVar13 = local_a0.ArrayNum;
  uVar11 = _UNK_150689688;
  uVar10 = ___xmm_3ff00000000000003ff0000000000000;
  dVar9 = __real_3ff0000000000000;
  pFVar21 = (FPhysicsShapeReference_Chaos *)
            (local_a0.AllocatorInstance.Data + (longlong)local_a0.ArrayNum * 0x10);
  FVar20.Data = local_a0.AllocatorInstance.Data;
  do {
    this_01 = (FTriangleMeshImplicitObject *)0x0;
    if (local_a0.ArrayNum != iVar13) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FPhysicsShapeReference_Chaos,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if ((FPhysicsShapeReference_Chaos *)FVar20.Data == pFVar21) {
      if ((FPhysicsShapeReference_Chaos *)local_a0.AllocatorInstance.Data !=
          (FPhysicsShapeReference_Chaos *)0x0) {
        FMemory::Free(local_a0.AllocatorInstance.Data);
      }
      return;
    }
    EVar14 = FChaosEngineInterface::GetShapeType((FPhysicsShapeReference_Chaos *)FVar20.Data);
    if (EVar14 == Trimesh) {
      pFVar5 = (FTriangleMeshImplicitObject *)
               (((FPhysicsShapeReference_Chaos *)FVar20.Data)->Shape->Geometry).Reference;
      bVar15 = Chaos::FImplicitObject::GetType((FImplicitObject *)pFVar5);
      local_b0._0_8_ = (FTriangleMeshImplicitObject *)0x0;
      cVar4 = (char)pFVar5->_padding_;
      local_80 = dVar9;
      local_90._8_8_ = uVar11;
      local_90._0_8_ = uVar10;
      if ((bVar15 & 0x40) == 0) {
        if ((char)bVar15 < '\0') {
          if ((cVar4 != -0x75) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("T_DERIVED::StaticType() == Type",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                                  ,0xbb,L""), bVar16)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar8 = (pFVar5->MParticles)._padding_;
          dVar7 = (double)(float)((ulonglong)lVar8 >> 0x20);
          local_90._8_4_ = SUB84(dVar7,0);
          local_90._0_8_ = (double)(float)lVar8;
          local_90._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
          local_80 = (double)*(float *)&(pFVar5->MParticles)._padding_;
          TVar18 = Chaos::FTriangleMeshImplicitObject::DeepCopyGeometry
                             ((FTriangleMeshImplicitObject *)
                              (pFVar5->MElements).SmallIdxBuffer.AllocatorInstance.Data);
          uVar12 = local_b0._0_8_;
          puVar19 = local_68;
          pFVar5 = (FTriangleMeshImplicitObject *)local_b0._0_8_;
          if ((FImplicitObject *)local_b0 != TVar18.Reference) {
            pFVar5 = (FTriangleMeshImplicitObject *)(TVar18.Reference)->_padding_;
            (TVar18.Reference)->_padding_ = 0;
            if ((FTriangleMeshImplicitObject *)local_b0._0_8_ != (FTriangleMeshImplicitObject *)0x0)
            {
              LOCK();
              plVar1 = (longlong *)(local_b0._0_8_ + 8);
              lVar8 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if (((int)lVar8 == 1) && (*(int *)((longlong)(local_b0._0_8_ + 8) + 4) == 0)) {
                plVar1 = (longlong *)local_b0._0_8_;
                local_b0._0_8_ = pFVar5;
                (**(code **)*plVar1)(uVar12,1);
                puVar19 = local_68;
                pFVar5 = (FTriangleMeshImplicitObject *)local_b0._0_8_;
              }
            }
          }
        }
        else {
          if ((cVar4 != '\v') &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("T_DERIVED::StaticType() == Type",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                                  ,0xbb,L""), bVar16)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          TVar18 = Chaos::FTriangleMeshImplicitObject::DeepCopyGeometry(pFVar5);
          uVar12 = local_b0._0_8_;
          puVar19 = local_60;
          pFVar5 = (FTriangleMeshImplicitObject *)local_b0._0_8_;
          if ((FImplicitObject *)local_b0 != TVar18.Reference) {
            pFVar5 = (FTriangleMeshImplicitObject *)(TVar18.Reference)->_padding_;
            (TVar18.Reference)->_padding_ = 0;
            if ((FTriangleMeshImplicitObject *)local_b0._0_8_ != (FTriangleMeshImplicitObject *)0x0)
            {
              LOCK();
              plVar1 = (longlong *)(local_b0._0_8_ + 8);
              lVar8 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if (((int)lVar8 == 1) && (*(int *)((longlong)(local_b0._0_8_ + 8) + 4) == 0)) {
                plVar1 = (longlong *)local_b0._0_8_;
                local_b0._0_8_ = pFVar5;
                (**(code **)*plVar1)(uVar12,1);
                puVar19 = local_60;
                pFVar5 = (FTriangleMeshImplicitObject *)local_b0._0_8_;
              }
            }
          }
        }
      }
      else {
        if ((cVar4 != 'K') &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("T_DERIVED::StaticType() == Type",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                                ,0xbb,L""), bVar16)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        TVar18 = Chaos::FTriangleMeshImplicitObject::DeepCopyGeometry
                           ((FTriangleMeshImplicitObject *)(pFVar5->MParticles)._padding_);
        uVar12 = local_b0._0_8_;
        puVar19 = local_70;
        pFVar5 = (FTriangleMeshImplicitObject *)local_b0._0_8_;
        if ((FImplicitObject *)local_b0 != TVar18.Reference) {
          pFVar5 = (FTriangleMeshImplicitObject *)(TVar18.Reference)->_padding_;
          (TVar18.Reference)->_padding_ = 0;
          if ((FTriangleMeshImplicitObject *)local_b0._0_8_ != (FTriangleMeshImplicitObject *)0x0) {
            LOCK();
            plVar1 = (longlong *)(local_b0._0_8_ + 8);
            lVar8 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if (((int)lVar8 == 1) && (*(int *)((longlong)(local_b0._0_8_ + 8) + 4) == 0)) {
              plVar1 = (longlong *)local_b0._0_8_;
              local_b0._0_8_ = pFVar5;
              (**(code **)*plVar1)(uVar12,1);
              puVar19 = local_70;
              pFVar5 = (FTriangleMeshImplicitObject *)local_b0._0_8_;
            }
          }
        }
      }
      local_b0._0_8_ = pFVar5;
      if (puVar19 != (undefined8 *)0x0) {
        LOCK();
        piVar2 = (int *)(puVar19 + 1);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if ((iVar3 == 1) && (*(int *)((longlong)puVar19 + 0xc) == 0)) {
          (**(code **)*puVar19)(puVar19,1);
        }
      }
      if (((char)*(longlong *)(local_b0._0_8_ + 0x18) == '\v') &&
         (this_01 = (FTriangleMeshImplicitObject *)local_b0._0_8_,
         (FTriangleMeshImplicitObject *)local_b0._0_8_ != (FTriangleMeshImplicitObject *)0x0)) {
        LOCK();
        *(int *)(local_b0._0_8_ + 8) = (int)*(longlong *)(local_b0._0_8_ + 8) + 1;
        UNLOCK();
      }
      Chaos::FTriangleMeshImplicitObject::UpdateVertices
                (this_01,*(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> **)
                          ((longlong)this + 8));
      if ((((double)local_90._0_8_ == dVar9) && ((double)local_90._8_8_ == dVar9)) &&
         (local_80 == dVar9)) {
        FChaosEngineInterface::SetGeometry
                  ((FPhysicsShapeReference_Chaos *)FVar20.Data,
                   (TRefCountPtr<Chaos::FImplicitObject> *)local_b0);
      }
      else {
        this_00 = ::operator_new(0x78);
        if (this_00 == (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,0> *)0x0) {
          local_b0._8_8_ = (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,0> *)0x0;
        }
        else {
          uVar17 = Chaos::FImplicitObject::GetType((FImplicitObject *)this_01);
          Chaos::FImplicitObjectScaled::FImplicitObjectScaled
                    ((FImplicitObjectScaled *)this_00,2,uVar17);
          this_00->_padding_ =
               (longlong)
               &___7__TImplicitObjectScaled_VFTriangleMeshImplicitObject_Chaos___0A__Chaos__6B_;
          (this_00->MObject).Reference = this_01;
          if (this_01 != (FTriangleMeshImplicitObject *)0x0) {
            LOCK();
            *(int *)&this_01->_padding_ = (int)this_01->_padding_ + 1;
            UNLOCK();
          }
          uVar17 = Chaos::FImplicitObject::GetType((FImplicitObject *)(this_00->MObject).Reference);
          if ((char)uVar17 < '\0') {
            local_res18[0] = 0;
            `Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,0>::InitScaledImplicit'
            ::__l2::<lambda_1>::operator()(local_res18);
          }
          bVar15 = Chaos::FImplicitObject::GetType((FImplicitObject *)(this_00->MObject).Reference);
          if ((bVar15 & 0x40) != 0) {
            local_res20[0] = 0;
            `Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,0>::InitScaledImplicit'
            ::__l2::<lambda_2>::operator()(local_res20);
          }
          uVar17 = Chaos::FImplicitObject::GetType((FImplicitObject *)(this_00->MObject).Reference);
          if (((uVar17 == '\x04') || (uVar17 == '\x05')) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("false",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                                  ,0x42e,L""), bVar16)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar5 = (this_00->MObject).Reference;
          *(undefined1 *)((longlong)&this_00->_padding_ + 4) =
               *(undefined1 *)((longlong)&pFVar5->_padding_ + 4);
          *(undefined1 *)((longlong)&this_00->_padding_ + 5) =
               *(undefined1 *)((longlong)&pFVar5->_padding_ + 5);
          *(undefined4 *)&this_00->_padding_ = 0;
          Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,0>::SetScale
                    (this_00,(TVector<double,3> *)local_90);
          if (this_01 != (FTriangleMeshImplicitObject *)0x0) {
            LOCK();
            plVar1 = &this_01->_padding_;
            lVar8 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if (((int)lVar8 == 1) && (*(int *)((longlong)&this_01->_padding_ + 4) == 0)) {
              (**(code **)this_01->_padding_)(this_01,1);
            }
          }
          LOCK();
          *(int *)&this_00->_padding_ = (int)this_00->_padding_ + 1;
          UNLOCK();
          this_01 = (FTriangleMeshImplicitObject *)0x0;
          local_b0._8_8_ = this_00;
        }
        FChaosEngineInterface::SetGeometry
                  ((FPhysicsShapeReference_Chaos *)FVar20.Data,
                   (TRefCountPtr<Chaos::FImplicitObject> *)(local_b0 + 8));
        if ((TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,0> *)local_b0._8_8_ !=
            (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,0> *)0x0) {
          LOCK();
          plVar1 = (longlong *)(local_b0._8_8_ + 8);
          lVar8 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if (((int)lVar8 == 1) && (*(int *)((longlong)(local_b0._8_8_ + 8) + 4) == 0)) {
            (**(code **)*(longlong *)local_b0._8_8_)(local_b0._8_8_,1);
          }
        }
      }
      if (this_01 != (FTriangleMeshImplicitObject *)0x0) {
        LOCK();
        plVar1 = &this_01->_padding_;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (((int)lVar8 == 1) && (*(int *)((longlong)&this_01->_padding_ + 4) == 0)) {
          (**(code **)this_01->_padding_)(this_01,1);
        }
      }
      if ((FTriangleMeshImplicitObject *)local_b0._0_8_ != (FTriangleMeshImplicitObject *)0x0) {
        LOCK();
        plVar1 = (longlong *)(local_b0._0_8_ + 8);
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (((int)lVar8 == 1) && (*(int *)((longlong)(local_b0._0_8_ + 8) + 4) == 0)) {
          (**(code **)*(longlong *)local_b0._0_8_)(local_b0._0_8_,1);
        }
      }
    }
    FVar20.Data = FVar20.Data + 0x10;
  } while( true );
}

// operator() @ 1481cd800

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FBodyInstance::ApplyMaterialToInstanceShapes_AssumesLocked'::__l9::<lambda_1>::operator()
          (void *this,FPhysicsShapeReference_Chaos *param_1)

{
  int iVar1;
  TArrayView<FPhysicalMaterialMaskParams,int> *pTVar2;
  UPhysicalMaterial **ppUVar3;
  code *pcVar4;
  bool bVar5;
  ECollisionShapeType EVar6;
  FStaticBasicLogRecord *pFVar7;
  UPhysicalMaterial *local_res8;
  undefined4 uStack_6c;
  undefined4 uStack_5c;
  undefined4 uStack_4c;
  TArrayView<UPhysicalMaterial_*,int> local_48;
  TArrayView<UPhysicalMaterial_*,int> local_38;
  TArrayView<UPhysicalMaterial_*,int> local_28;
  TArrayView<UPhysicalMaterial_*,int> local_18;
  
  pTVar2 = *(TArrayView<FPhysicalMaterialMaskParams,int> **)((longlong)this + 0x10);
  ppUVar3 = (UPhysicalMaterial **)**(undefined8 **)((longlong)this + 8);
  iVar1 = *(int *)(*(undefined8 **)((longlong)this + 8) + 1);
  if ((iVar1 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_res8 = (UPhysicalMaterial *)**(longlong **)this;
  EVar6 = FChaosEngineInterface::GetShapeType(param_1);
  if (EVar6 == Trimesh) {
    if (iVar1 != 0) {
      if (pTVar2 != (TArrayView<FPhysicalMaterialMaskParams,int> *)0x0) {
        local_38._12_4_ = uStack_6c;
        local_38.ArrayNum = iVar1;
        local_38.DataPtr = ppUVar3;
        FPhysInterface_Chaos::SetMaterials(param_1,&local_38,pTVar2);
        return;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8608185054796976538>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                         ,0x119a,"ComplexPhysMatMasks");
      if (!bVar5) {
        local_48._12_4_ = uStack_6c;
        local_48.ArrayNum = iVar1;
        local_48.DataPtr = ppUVar3;
        FPhysInterface_Chaos::SetMaterials(param_1,&local_48);
        return;
      }
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (local_res8 != (UPhysicalMaterial *)0x0) {
      if (5 < (byte)LogPhysics._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPhysics);
      }
      local_28.DataPtr = &local_res8;
      local_28._12_4_ = uStack_5c;
      local_28.ArrayNum = 1;
      FPhysInterface_Chaos::SetMaterials(param_1,&local_28);
      return;
    }
    if ((byte)LogPhysics._0_1_ < 2) {
      return;
    }
    pFVar7 = &::LOG_Static;
  }
  else {
    if (local_res8 != (UPhysicalMaterial *)0x0) {
      local_18.DataPtr = &local_res8;
      local_18._12_4_ = uStack_4c;
      local_18.ArrayNum = 1;
      FPhysInterface_Chaos::SetMaterials(param_1,&local_18);
      return;
    }
    if ((byte)LogPhysics._0_1_ < 2) {
      return;
    }
    pFVar7 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<2>(pFVar7,(FLogCategoryBase *)&LogPhysics);
  return;
}

// operator() @ 1481ced90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001481d01b2) */
/* WARNING: Removing unreachable block (ram,0x0001481d01e2) */
/* WARNING: Removing unreachable block (ram,0x0001481d028e) */
/* WARNING: Removing unreachable block (ram,0x0001481d029d) */
/* WARNING: Removing unreachable block (ram,0x0001481d02a5) */
/* WARNING: Removing unreachable block (ram,0x0001481d02f3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FBodyInstance::UpdateBodyScale'::__l2::<lambda_2>::operator()
          (void *this,FSingleParticlePhysicsProxy **param_1)

{
  longlong *plVar1;
  double dVar2;
  undefined1 (*pauVar3) [16];
  longlong lVar4;
  FRigidBodyHandle_External *this_00;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  bool bVar12;
  TTransform<double> *pTVar13;
  TTransform<double> *pTVar14;
  TTransform<double> *pTVar15;
  TTransform<double> *pTVar16;
  TTransform<double> *pTVar17;
  TTransform<double> *pTVar18;
  TTransform<double> *pTVar19;
  TTransform<double> *pTVar20;
  TTransform<double> *pTVar21;
  double dVar22;
  FPhysicsShapeReference_Chaos *pFVar23;
  bool bVar24;
  ECollisionShapeType EVar25;
  byte bVar26;
  bool bVar27;
  uchar uVar28;
  undefined4 extraout_EAX;
  int iVar29;
  ulonglong uVar30;
  FImplicitObject *pFVar31;
  FWeldInfo *pFVar32;
  char *pcVar33;
  int *piVar34;
  TSphere<double,3> *this_01;
  TQuat<double> *pTVar35;
  double *pdVar36;
  TVector<double> *pTVar37;
  FCapsule *pFVar38;
  TImplicitObjectInstanced<Chaos::FConvex> *this_02;
  TImplicitObjectScaled<Chaos::FConvex,1> *this_03;
  TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *this_04;
  TImplicitObjectInstanced<Chaos::FTriangleMeshImplicitObject> *this_05;
  TRefCountPtr<Chaos::FImplicitObject> TVar39;
  undefined8 *puVar40;
  TImplicitObjectTransformed<double,3,1> *pTVar41;
  TImplicitObjectTransformed<double,3,1> *pTVar42;
  FImplicitObjectUnion *pFVar43;
  undefined4 uVar44;
  ulonglong uVar45;
  atomic<unsigned_char> *paVar46;
  TTransform<double> *pTVar47;
  FTriangleMeshImplicitObject *pFVar48;
  TVector<double>_u_0 *__return_storage_ptr__;
  byte bVar49;
  uint uVar50;
  ForAnyElementType this_06;
  FTriangleMeshImplicitObject *pFVar51;
  TVector<double>_u_0 *pTVar52;
  TTransform<double> *pTVar53;
  bool bVar54;
  longlong lVar55;
  double dVar56;
  double dVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  double dVar69;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  float fVar79;
  double dVar80;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  uint uVar88;
  uint uVar89;
  undefined4 uVar90;
  double dVar91;
  double dVar92;
  double dVar93;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  double dVar100;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  uint uVar101;
  double dVar102;
  double dVar103;
  double dVar104;
  double dVar108;
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  double dVar109;
  undefined4 uVar110;
  uint uVar111;
  uint uVar112;
  undefined1 auStackY_698 [32];
  TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_> local_660;
  longlong *local_650;
  undefined1 local_648;
  undefined1 local_647;
  undefined1 local_646;
  undefined1 local_645;
  undefined1 local_644 [4];
  VectorRegister4Double *local_640;
  undefined1 local_638 [16];
  double local_628;
  TRefCountPtr<Chaos::FImplicitObject> local_620;
  TArray<FPhysicsShapeReference_Chaos,TSizedDefaultAllocator<32>_> local_618;
  TRefCountPtr<Chaos::FImplicitObject> local_608;
  TRefCountPtr<Chaos::FImplicitObject> local_600;
  uint local_5f8;
  TRefCountPtr<Chaos::FTriangleMeshImplicitObject> local_5f0;
  TRefCountPtr<Chaos::FImplicitObject> local_5e8;
  VectorRegister4Double *local_5e0;
  VectorRegister4Double *local_5d8;
  VectorRegister4Double *local_5d0;
  VectorRegister4Double *local_5c8;
  VectorRegister4Double *local_5c0;
  VectorRegister4Double *local_5b8;
  FPhysicsShapeReference_Chaos *local_5b0;
  VectorRegister4Double *local_5a8;
  VectorRegister4Double *local_5a0;
  VectorRegister4Double *local_598;
  FSingleParticlePhysicsProxy *local_590;
  FSingleParticlePhysicsProxy *local_588;
  longlong local_580;
  undefined8 local_578;
  undefined8 uStack_570;
  double local_568;
  FPhysicsShapeReference_Chaos *local_558;
  undefined1 local_548 [16];
  double local_538;
  undefined8 local_528;
  undefined8 uStack_520;
  double local_518;
  double local_510;
  double local_508;
  double local_500;
  double local_4f8;
  double local_4f0;
  double local_4e8;
  double local_4e0;
  double local_4d8;
  TVector<double>_u_0 local_4d0;
  TVector<double>_u_0 local_4b8;
  undefined1 local_498 [16];
  undefined1 local_488 [16];
  double local_478;
  double local_470;
  double dStack_468;
  double local_460;
  undefined1 local_458 [16];
  double local_448;
  undefined1 local_440 [16];
  double local_430;
  double local_428;
  double dStack_420;
  double local_418;
  undefined1 local_410 [16];
  double local_400;
  undefined1 local_3f8 [16];
  double local_3e8;
  undefined1 local_3e0 [16];
  double local_3d0;
  undefined1 local_3c8 [16];
  double local_3b8;
  undefined1 local_3b0 [16];
  double local_3a0;
  double local_398;
  double dStack_390;
  double local_388;
  double local_380;
  double dStack_378;
  double local_370;
  double local_368;
  double dStack_360;
  double local_358;
  double local_350;
  double dStack_348;
  double local_340;
  TVector<double>_u_0 local_338;
  TVector<double>_u_0 local_318;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  TQuat<double> local_2d8;
  TTransform<double> local_2b8;
  undefined1 local_258 [16];
  double local_248;
  double dStack_240;
  undefined1 local_238 [16];
  undefined1 local_228 [16];
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  TTransform<double> local_138;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_698;
  local_618.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_618.ArrayNum = 0;
  local_618.ArrayMax = 0;
  iVar29 = 0;
  local_650 = this;
  if (*(FSingleParticlePhysicsProxy **)(*(longlong *)this + 0x138) !=
      (FSingleParticlePhysicsProxy *)0x0) {
    local_588 = *(FSingleParticlePhysicsProxy **)(*(longlong *)this + 0x138);
    FChaosEngineInterface::GetAllShapes_AssumedLocked(&local_588,&local_618);
    iVar29 = local_618.ArrayNum;
  }
  uVar110 = 0;
  uVar50 = 0;
  uVar90 = 0;
  if (0 < iVar29) {
    do {
      uVar101 = 0;
      if ((int)uVar50 < iVar29) {
        uVar101 = ~uVar50 >> 0x1f;
      }
      if ((uVar101 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      EVar25 = FChaosEngineInterface::GetShapeType
                         ((FPhysicsShapeReference_Chaos *)
                          (local_618.AllocatorInstance.Data + (longlong)(int)uVar50 * 0x10));
      if (EVar25 == Sphere) {
        uVar110 = 2;
        break;
      }
      uVar110 = uVar90;
      if (EVar25 == Capsule) {
        uVar110 = 1;
      }
      uVar50 = uVar50 + 1;
      uVar90 = uVar110;
      iVar29 = local_618.ArrayNum;
    } while ((int)uVar50 < local_618.ArrayNum);
  }
  dVar22 = __real_3f1a36e2e0000000;
  uVar112 = _UNK_15061cc8c;
  uVar111 = _UNK_15061cc88;
  uVar101 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar50 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar56 = __real_3e45798ee2308c3a;
  **(undefined4 **)((longlong)this + 8) = uVar110;
  pdVar36 = *(double **)((longlong)this + 0x10);
  dVar2 = *pdVar36;
  iVar29 = **(int **)((longlong)this + 8);
  if ((double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) & uVar101,SUB84(dVar2,0) & uVar50) <= dVar56
     ) {
    dVar2 = dVar22;
  }
  dVar57 = pdVar36[1];
  if ((double)CONCAT44((uint)((ulonglong)dVar57 >> 0x20) & uVar101,SUB84(dVar57,0) & uVar50) <=
      dVar56) {
    dVar57 = dVar22;
  }
  local_568 = pdVar36[2];
  if ((double)CONCAT44((uint)((ulonglong)local_568 >> 0x20) & uVar101,SUB84(local_568,0) & uVar50)
      <= dVar56) {
    local_568 = dVar22;
  }
  dVar56 = (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) & uVar101,SUB84(dVar2,0) & uVar50);
  dVar80 = (double)CONCAT44((uint)((ulonglong)dVar57 >> 0x20) & uVar101,SUB84(dVar57,0) & uVar50);
  uVar88 = SUB84(local_568,0) & uVar50;
  uVar89 = (uint)((ulonglong)local_568 >> 0x20) & uVar101;
  if (iVar29 == 0) {
    local_638._8_8_ = dVar57;
    local_638._0_8_ = dVar2;
    dVar56 = dVar57;
    local_628 = local_568;
  }
  else if (iVar29 == 1) {
    if (dVar56 <= dVar80) {
      dVar56 = dVar80;
    }
    fVar79 = (float)dVar56;
    if (dVar57 <= dVar2) {
      dVar57 = dVar2;
    }
    if (dVar57 < 0.0) {
      fVar79 = (float)((uint)fVar79 ^ __xmm_80000000800000008000000080000000);
    }
    dVar57 = (double)fVar79;
    local_638._8_4_ = SUB84(dVar57,0);
    local_638._0_8_ = dVar57;
    local_638._12_4_ = (int)((ulonglong)dVar57 >> 0x20);
    dVar2 = dVar57;
    dVar56 = 0.0;
    local_628 = local_568;
  }
  else if (iVar29 == 2) {
    if (dVar80 <= dVar56) {
      dVar56 = dVar80;
    }
    if (dVar57 <= dVar2) {
      dVar57 = dVar2;
    }
    if ((double)CONCAT44(uVar89,uVar88) <= dVar56) {
      dVar56 = (double)CONCAT44(uVar89,uVar88);
    }
    if (dVar57 <= local_568) {
      dVar57 = local_568;
    }
    fVar79 = (float)dVar56;
    if (dVar57 < 0.0) {
      fVar79 = (float)((uint)fVar79 ^ __xmm_80000000800000008000000080000000);
    }
    dVar57 = (double)fVar79;
    local_638._8_4_ = SUB84(dVar57,0);
    local_638._0_8_ = dVar57;
    local_638._12_4_ = (int)((ulonglong)dVar57 >> 0x20);
    dVar2 = dVar57;
    dVar56 = 0.0;
    local_628 = dVar57;
  }
  else {
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("false",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                        ,0x84e,L"");
    if (bVar24) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    dVar57 = (double)local_638._8_8_;
    dVar2 = (double)local_638._0_8_;
    dVar56 = (double)local_638._8_8_;
  }
  pauVar3 = *(undefined1 (**) [16])((longlong)this + 0x18);
  auVar77._0_4_ = SUB84(dVar2,0) & uVar50;
  auVar77._4_4_ = (uint)((ulonglong)dVar2 >> 0x20) & uVar101;
  auVar77._8_4_ = SUB84(dVar56,0) & uVar111;
  auVar77._12_4_ = (uint)((ulonglong)dVar56 >> 0x20) & uVar112;
  uVar111 = local_638._8_4_ & uVar50;
  uVar112 = local_638._12_4_ & uVar101;
  auVar78._8_4_ = SUB84(dVar57,0);
  auVar78._0_8_ = dVar2;
  auVar78._12_4_ = (int)((ulonglong)dVar57 >> 0x20);
  *pauVar3 = auVar78;
  *(double *)pauVar3[1] = local_628;
  uVar50 = SUB84(local_628,0) & uVar50;
  uVar101 = (uint)((ulonglong)local_628 >> 0x20) & uVar101;
  uVar30 = local_618._8_8_ & 0xffffffff;
  local_578 = CONCAT44(uVar112,uVar111);
  uStack_570 = 0;
  local_528 = (double)CONCAT44(uVar101,uVar50);
  uStack_520 = 0;
  local_660.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_660.ArrayNum = 0;
  local_660.ArrayMax = 0;
  local_498 = auVar77;
  if (local_618.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar30);
  }
  if (0 < local_618.ArrayNum) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_618.ArrayNum,&local_660.AllocatorInstance,0,&local_660.ArrayMax);
    uVar30 = local_618._8_8_ & 0xffffffff;
  }
  dVar80 = __real_3ff0000000000000;
  local_5f8 = (uint)uVar30;
  uVar45 = (ulonglong)(int)local_5f8;
  local_558 = (FPhysicsShapeReference_Chaos *)(local_618.AllocatorInstance.Data + uVar45 * 0x10);
  this_06.Data = local_618.AllocatorInstance.Data;
  dVar56 = dVar2;
  do {
    pFVar23 = local_558;
    fVar79 = __real_3f000000;
    dVar102 = auVar77._0_8_;
    uVar110 = (undefined4)((ulonglong)dVar57 >> 0x20);
    uVar90 = SUB84(dVar57,0);
    uVar89 = (uint)__xmm_80000000000000008000000000000000;
    uVar88 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    iVar29 = (int)uVar30;
    local_5b0 = (FPhysicsShapeReference_Chaos *)this_06.Data;
    if ((int)uVar30 != (int)uVar45) {
      local_648 = 0;
      `TCheckedPointerIterator<FPhysicsShapeReference_Chaos,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_648);
      iVar29 = local_618.ArrayNum;
    }
    if ((FPhysicsShapeReference_Chaos *)this_06.Data == pFVar23) {
      if (local_660.ArrayNum != iVar29) {
        **(undefined1 **)((longlong)this + 0x20) = 0;
        goto LAB_1481d0801;
      }
      this_00 = *(FRigidBodyHandle_External **)(*(longlong *)this + 0x138);
      pFVar43 = ::operator_new(0x70);
      if (pFVar43 == (FImplicitObjectUnion *)0x0) {
        local_5e8.Reference = (FImplicitObject *)0x0;
LAB_1481d07d3:
        Chaos::FRigidBodyHandle_External::SetGeometry(this_00,&local_5e8);
      }
      else {
        pFVar43 = Chaos::FImplicitObjectUnion::FImplicitObjectUnion(pFVar43,&local_660);
        local_5e8.Reference = (FImplicitObject *)pFVar43;
        if (pFVar43 == (FImplicitObjectUnion *)0x0) goto LAB_1481d07d3;
        LOCK();
        *(int *)&pFVar43->_padding_ = (int)pFVar43->_padding_ + 1;
        UNLOCK();
        Chaos::FRigidBodyHandle_External::SetGeometry(this_00,&local_5e8);
        LOCK();
        plVar1 = &pFVar43->_padding_;
        lVar55 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (((int)lVar55 == 1) && (*(int *)((longlong)&pFVar43->_padding_ + 4) == 0)) {
          (**(code **)pFVar43->_padding_)(pFVar43,1);
        }
      }
      local_590 = *(FSingleParticlePhysicsProxy **)(*(longlong *)this + 0x138);
      FChaosEngineInterface::WakeUp_AssumesLocked(&local_590);
LAB_1481d0801:
      DestructItems<TRefCountPtr<Chaos::FImplicitObject>,int>
                ((TRefCountPtr<Chaos::FImplicitObject> *)local_660.AllocatorInstance.Data,
                 local_660.ArrayNum);
      if (local_660.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_660.AllocatorInstance.Data);
      }
      if ((FPhysicsShapeReference_Chaos *)local_618.AllocatorInstance.Data !=
          (FPhysicsShapeReference_Chaos *)0x0) {
        FMemory::Free(local_618.AllocatorInstance.Data);
      }
      return;
    }
    pFVar31 = FPhysicsShapeReference_Chaos::GetGeometry
                        ((FPhysicsShapeReference_Chaos *)this_06.Data);
    bVar26 = Chaos::FImplicitObject::GetType(pFVar31);
    lVar55 = *(longlong *)this;
    bVar24 = IsInGameThread();
    if ((!bVar24) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsInGameThread()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                            ,0x6fb,L""), bVar24)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar4 = *(longlong *)(lVar55 + 0x108);
    if (lVar4 != 0) {
      lVar55 = lVar4;
    }
    if ((*(TMapBase<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>
           **)(lVar55 + 0x180) ==
         (TMapBase<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>
          *)0x0) ||
       (pFVar32 = TMapBase<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>
                  ::Find(*(TMapBase<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>
                           **)(lVar55 + 0x180),(FPhysicsShapeReference_Chaos *)this_06.Data),
       pFVar32 == (FWeldInfo *)0x0)) {
      pTVar47 = &UE::Math::TTransform<double>::Identity;
      pTVar19 = &UE::Math::TTransform<double>::Identity;
      pTVar53 = &UE::Math::TTransform<double>::Identity;
      pTVar20 = &UE::Math::TTransform<double>::Identity;
      pTVar21 = &UE::Math::TTransform<double>::Identity;
      pTVar18 = &UE::Math::TTransform<double>::Identity;
      pTVar13 = &UE::Math::TTransform<double>::Identity;
      pTVar14 = &UE::Math::TTransform<double>::Identity;
      pTVar15 = &UE::Math::TTransform<double>::Identity;
      pTVar16 = &UE::Math::TTransform<double>::Identity;
      pTVar17 = &UE::Math::TTransform<double>::Identity;
    }
    else {
      pTVar19 = &pFVar32->RelativeTM;
      pTVar14 = &pFVar32->RelativeTM;
      pTVar47 = &pFVar32->RelativeTM;
      pTVar20 = &pFVar32->RelativeTM;
      pTVar21 = &pFVar32->RelativeTM;
      pTVar15 = &pFVar32->RelativeTM;
      pTVar13 = &pFVar32->RelativeTM;
      pTVar18 = &pFVar32->RelativeTM;
      pTVar16 = &pFVar32->RelativeTM;
      pTVar53 = &pFVar32->RelativeTM;
      pTVar17 = &pFVar32->RelativeTM;
    }
    local_598 = &pTVar18->Translation;
    local_5a0 = &pTVar20->Scale3D;
    local_5a8 = &pTVar47->Translation;
    local_5b8 = &pTVar17->Translation;
    local_5c0 = &pTVar16->Translation;
    local_5c8 = &pTVar15->Translation;
    local_5d0 = &pTVar14->Translation;
    local_5d8 = &pTVar13->Translation;
    local_5e0 = &pTVar21->Scale3D;
    local_640 = &pTVar19->Scale3D;
    bVar12 = false;
    bVar24 = false;
    bVar54 = bVar26 == 4;
    if (bVar54) {
      bVar26 = Chaos::FImplicitObject::GetType((FImplicitObject *)pFVar31[1]._padding_);
    }
    if ((char)bVar26 < '\0') {
      bVar26 = bVar26 ^ 0x80;
      bVar12 = true;
      if ((bVar26 & 0x40) != 0) {
        pcVar33 = "!IsInstanced(ConcreteType)";
        iVar29 = 0x8d6;
        paVar46 = &bGEnsureHasExecuted<8608185054796974294>;
        bVar24 = false;
        bVar12 = true;
LAB_1481cf2bc:
        bVar27 = UE::Assert::Private::ExecCheckImplInternal
                           (paVar46,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                            ,iVar29,pcVar33);
        if (bVar27) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
    }
    else if ((bVar26 & 0x40) != 0) {
      bVar49 = bVar26 ^ 0x40;
      bVar26 = bVar26 ^ 0x40;
      bVar24 = true;
      if ((char)bVar49 < '\0') {
        pcVar33 = "!IsScaled(ConcreteType)";
        iVar29 = 0x8dd;
        paVar46 = &bGEnsureHasExecuted<8608185054796974301>;
        bVar24 = true;
        bVar12 = false;
        goto LAB_1481cf2bc;
      }
    }
    piVar34 = FChaosEngineInterface::GetUserData((FPhysicsShapeReference_Chaos *)this_06.Data);
    this = local_650;
    if ((piVar34 == (int *)0x0) || (*piVar34 != 6)) {
      lVar55 = 0;
    }
    else {
      lVar55 = *(longlong *)(piVar34 + 2);
    }
    switch(bVar26) {
    case 0:
      if (((lVar55 == 0) || (bVar24)) || (bVar12)) break;
      if ((FKSphereElem::StaticShapeType != *(Type *)(lVar55 + 0x14)) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("T::StaticShapeType == ShapeType",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\PhysicsEngine\\ShapeElem.h"
                              ,0x54,L""), bVar24)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this = local_650;
      if ((*(int *)local_650[1] != 2) &&
         (bVar24 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<8608185054796974317>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                              ,0x8ed,"ScaleMode == EScaleMode::LockedXYZ"), bVar24)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      auVar78 = *(undefined1 (*) [16])(pTVar53->Rotation).ZW.m128d_f64;
      auVar77 = *(undefined1 (*) [16])(pTVar53->Rotation).XY.m128d_f64;
      dVar103 = *(double *)(lVar55 + 0x40) * (local_640->ZW).m128d_f64[0];
      dVar91 = (local_640->ZW).m128d_f64[1] * 0.0;
      dVar104 = (pTVar53->Rotation).ZW.m128d_f64[1];
      dVar102 = (double)*(float *)(lVar55 + 0x48) * dVar102;
      dVar109 = (local_640->XY).m128d_f64[0] * *(double *)(lVar55 + 0x30);
      dVar108 = (local_640->XY).m128d_f64[1] * *(double *)(lVar55 + 0x38);
      local_548 = *(undefined1 (*) [16])(pTVar53->Rotation).XY.m128d_f64;
      if (dVar102 <= dVar22) {
        dVar102 = dVar22;
      }
      auVar72 = blendpd(local_548,auVar78,2);
      auVar94._8_4_ = SUB84(dVar108,0);
      auVar94._0_8_ = dVar109;
      uVar90 = (undefined4)((ulonglong)dVar108 >> 0x20);
      auVar94._12_4_ = uVar90;
      dVar92 = auVar78._0_8_;
      auVar95._0_8_ = auVar94._8_8_ * local_548._0_8_ - local_548._8_8_ * dVar109;
      auVar95._8_8_ = dVar103 * local_548._8_8_ - dVar92 * dVar108;
      auVar58._8_4_ = SUB84(dVar108,0);
      auVar58._0_8_ = dVar109;
      auVar58._12_4_ = uVar90;
      auVar10._8_4_ = SUB84(dVar91,0);
      auVar10._0_8_ = dVar103;
      auVar10._12_4_ = (int)((ulonglong)dVar91 >> 0x20);
      auVar62 = blendpd(auVar58,auVar10,2);
      auVar59._0_8_ = auVar62._0_8_ * dVar92 - auVar72._0_8_ * dVar103;
      auVar59._8_8_ = auVar62._8_8_ * auVar78._8_8_ - auVar72._8_8_ * dVar91;
      auVar62 = blendpd(auVar95,auVar59,2);
      dVar91 = auVar95._8_8_ + auVar95._8_8_;
      dVar11 = auVar59._0_8_ + auVar59._0_8_;
      uVar90 = (undefined4)((ulonglong)dVar11 >> 0x20);
      auVar96._0_8_ = auVar62._0_8_ + auVar62._0_8_;
      auVar96._8_8_ = auVar62._8_8_ + auVar62._8_8_;
      auVar81._8_4_ = SUB84(dVar11,0);
      auVar81._0_8_ = dVar91;
      auVar81._12_4_ = uVar90;
      auVar70._8_4_ = SUB84(dVar11,0);
      auVar70._0_8_ = dVar91;
      auVar70._12_4_ = uVar90;
      auVar62 = blendpd(auVar70,auVar96,2);
      auVar82._0_8_ = auVar81._8_8_ * auVar77._0_8_ - auVar77._8_8_ * dVar91;
      auVar82._8_8_ = auVar96._0_8_ * auVar77._8_8_ - dVar92 * dVar11;
      auVar77 = blendpd(auVar77,auVar78,2);
      auVar60._8_4_ = SUB84(auVar82._8_8_,0);
      auVar60._0_8_ = auVar82._0_8_;
      auVar60._12_4_ = (int)((ulonglong)auVar82._8_8_ >> 0x20);
      auVar71._0_8_ = auVar62._0_8_ * dVar92 - auVar77._0_8_ * auVar96._0_8_;
      auVar71._8_8_ = auVar62._8_8_ * auVar78._8_8_ - auVar77._8_8_ * auVar96._8_8_;
      auVar78 = blendpd(auVar82,auVar71,2);
      dVar91 = dVar91 * dVar104 + dVar109 + auVar60._8_8_ + (local_5a8->XY).m128d_f64[0];
      local_510 = dVar11 * dVar104 + dVar108 + auVar71._0_8_ + (local_5a8->XY).m128d_f64[1];
      local_400 = auVar96._0_8_ * dVar104 + dVar103 + auVar78._0_8_ + (local_5a8->ZW).m128d_f64[0];
      pdVar36 = *(double **)((longlong)this + 0x10);
      local_518 = dVar91 * *pdVar36;
      local_410._8_4_ = SUB84(local_510,0);
      local_410._0_8_ = dVar91;
      local_410._12_4_ = (int)((ulonglong)local_510 >> 0x20);
      local_510 = local_510 * pdVar36[1];
      local_508 = local_400 * pdVar36[2];
      this_01 = ::operator_new(0x30);
      if (this_01 == (TSphere<double,3> *)0x0) {
LAB_1481cf531:
        pFVar38 = (FCapsule *)0x0;
      }
      else {
        pFVar38 = (FCapsule *)
                  Chaos::TSphere<double,3>::TSphere<double,3>
                            (this_01,(TVector<double,3> *)&local_518,dVar102);
LAB_1481cf523:
        if (pFVar38 != (FCapsule *)0x0) {
          LOCK();
          *(int *)&pFVar38->_padding_ = (int)pFVar38->_padding_ + 1;
          UNLOCK();
        }
      }
      iVar29 = local_660.ArrayNum;
      if (local_660.ArrayNum == local_660.ArrayMax) {
        iVar29 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_660.AllocatorInstance,&local_660.ArrayMax);
      }
      local_660.ArrayNum = iVar29 + 1;
      *(FCapsule **)(local_660.AllocatorInstance.Data + (longlong)iVar29 * 8) = pFVar38;
      **(undefined1 **)((longlong)this + 0x20) = 1;
      goto LAB_1481d0711;
    case 1:
      if (((lVar55 != 0) && (!bVar12)) && (!bVar24)) {
        if ((FKBoxElem::StaticShapeType != *(Type *)(lVar55 + 0x14)) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("T::StaticShapeType == ShapeType",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\PhysicsEngine\\ShapeElem.h"
                                ,0x54,L""), bVar24)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        dVar102 = (double)(*(float *)(lVar55 + 0x60) * fVar79) * dVar102;
        if (dVar102 <= dVar22) {
          dVar102 = dVar22;
        }
        dVar103 = (double)(*(float *)(lVar55 + 100) * fVar79) * (double)CONCAT44(uVar112,uVar111);
        if (dVar103 <= dVar22) {
          dVar103 = dVar22;
        }
        dVar91 = (double)(*(float *)(lVar55 + 0x68) * fVar79) * local_528;
        if (dVar91 <= dVar22) {
          dVar91 = dVar22;
        }
        pTVar35 = UE::Math::TRotator<double>::Quaternion
                            ((TRotator<double> *)(lVar55 + 0x48),&local_2d8);
        local_138.Translation.ZW.m128d_f64[0] = *(double *)(lVar55 + 0x40);
        pTVar47 = &local_2b8;
        local_2f8 = pTVar35->X;
        dStack_2f0 = pTVar35->Y;
        local_2e8 = pTVar35->Z;
        dStack_2e0 = pTVar35->W;
        local_138.Translation.XY.m128d_f64[0] = *(double *)(lVar55 + 0x30);
        local_138.Translation.XY.m128d_f64[1] = *(double *)(lVar55 + 0x38);
        local_138.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
        local_138.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
        local_138.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
        local_138.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
        local_2b8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_2b8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_2b8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_2b8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_138.Translation.ZW.m128d_f64[1] = 0.0;
        local_2b8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_2b8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_2b8.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_2b8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_2b8.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_2b8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_2b8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        local_2b8.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_2b8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_2b8.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_138.Rotation.XY.m128d_f64[0] = local_2f8;
        local_138.Rotation.XY.m128d_f64[1] = dStack_2f0;
        local_138.Rotation.ZW.m128d_f64[0] = local_2e8;
        local_138.Rotation.ZW.m128d_f64[1] = dStack_2e0;
        UE::Math::TTransform<double>::Multiply(pTVar47,&local_138,pTVar53);
        local_258._8_8_ = local_2b8.Rotation.XY.m128d_f64[1];
        local_258._0_8_ = local_2b8.Rotation.XY.m128d_f64[0];
        local_208 = local_2b8.Scale3D.ZW.m128d_f64[0];
        dStack_200 = local_2b8.Scale3D.ZW.m128d_f64[1];
        dVar104 = local_628 * local_2b8.Translation.ZW.m128d_f64[0];
        local_238._0_8_ = local_2b8.Translation.XY.m128d_f64[0] * dVar2;
        local_238._8_8_ = local_2b8.Translation.XY.m128d_f64[1] * dVar57;
        local_228._8_4_ = SUB84(local_2b8.Translation.ZW.m128d_f64[1] * 0.0,0);
        local_228._0_8_ = dVar104;
        local_228._12_4_ = (int)((ulonglong)(local_2b8.Translation.ZW.m128d_f64[1] * 0.0) >> 0x20);
        local_248 = local_2b8.Rotation.ZW.m128d_f64[0];
        dStack_240 = local_2b8.Rotation.ZW.m128d_f64[1];
        local_218 = local_2b8.Scale3D.XY.m128d_f64[0];
        dStack_210 = local_2b8.Scale3D.XY.m128d_f64[1];
        if (!bVar54) {
          auVar83._8_8_ =
               -(ulonglong)
                (local_2b8.Rotation.XY.m128d_f64[1] == UE::Math::TQuat<double>::Identity.Y);
          auVar83._0_8_ =
               -(ulonglong)
                (local_2b8.Rotation.XY.m128d_f64[0] == UE::Math::TQuat<double>::Identity.X);
          auVar7._8_4_ = (int)-(ulonglong)
                               (local_2b8.Rotation.ZW.m128d_f64[1] ==
                               UE::Math::TQuat<double>::Identity.W);
          auVar7._0_8_ = -(ulonglong)
                          (local_2b8.Rotation.ZW.m128d_f64[0] == UE::Math::TQuat<double>::Identity.Z
                          );
          auVar7._12_4_ =
               (int)(-(ulonglong)
                      (local_2b8.Rotation.ZW.m128d_f64[1] == UE::Math::TQuat<double>::Identity.W) >>
                    0x20);
          iVar29 = movmskpd((int)pTVar47,auVar7);
          uVar50 = movmskpd(extraout_EAX,auVar83);
          if ((iVar29 << 2 | uVar50) != 0xf) {
            dVar108 = local_238._0_8_ - dVar102;
            dVar102 = dVar102 + local_238._0_8_;
            local_538 = dVar91 + dVar104;
            dVar109 = local_238._8_8_ - dVar103;
            dVar103 = dVar103 + local_238._8_8_;
            local_3f8 = local_238;
            local_3e8 = dVar104;
            local_3e0 = local_238;
            local_3d0 = dVar104;
            pFVar31 = ::operator_new(0x50);
            if (pFVar31 == (FImplicitObject *)0x0) {
              pFVar31 = (FImplicitObject *)0x0;
            }
            else {
              Chaos::FImplicitObject::FImplicitObject(pFVar31,3,'\x01');
              pFVar31->_padding_ = (longlong)&___7__TBox_N_02_Chaos__6B_;
              pFVar31[1]._padding_ = (longlong)dVar108;
              pFVar31[1]._padding_ = (longlong)dVar109;
              *(double *)&pFVar31[1].Margin = dVar104 - dVar91;
              *(double *)&pFVar31[1].Type = dVar102;
              pFVar31[2]._padding_ = (longlong)dVar103;
              pFVar31[2]._padding_ = (longlong)local_538;
              LOCK();
              *(int *)&pFVar31->_padding_ = (int)pFVar31->_padding_ + 1;
              UNLOCK();
              dVar57 = (double)local_638._8_8_;
              dVar2 = (double)local_638._0_8_;
              dVar56 = (double)local_638._0_8_;
            }
            iVar29 = local_660.ArrayNum;
            if (local_660.ArrayNum == local_660.ArrayMax) {
              iVar29 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&local_660.AllocatorInstance,&local_660.ArrayMax);
            }
            local_660.ArrayNum = iVar29 + 1;
            *(FImplicitObject **)(local_660.AllocatorInstance.Data + (longlong)iVar29 * 8) = pFVar31
            ;
            *(undefined1 *)local_650[4] = 1;
            this = local_650;
            goto LAB_1481d0711;
          }
        }
        local_538 = dVar91;
        TVar39.Reference = ::operator_new(0x50);
        if (TVar39.Reference == (FImplicitObject *)0x0) {
          TVar39.Reference = (FImplicitObject *)0x0;
        }
        else {
          Chaos::FImplicitObject::FImplicitObject(TVar39.Reference,3,'\x01');
          (TVar39.Reference)->_padding_ = (longlong)&___7__TBox_N_02_Chaos__6B_;
          TVar39.Reference[1]._padding_ =
               CONCAT44((uint)((ulonglong)dVar102 >> 0x20) ^ uVar88,SUB84(dVar102,0) ^ uVar89);
          TVar39.Reference[1]._padding_ =
               CONCAT44((uint)((ulonglong)dVar103 >> 0x20) ^ uVar88,SUB84(dVar103,0) ^ uVar89);
          uVar88 = (uint)((ulonglong)dVar91 >> 0x20) ^ uVar88;
          TVar39.Reference[1].Margin = (float)(SUB84(dVar91,0) ^ uVar89);
          TVar39.Reference[1].bIsConvex = (bool)(char)uVar88;
          TVar39.Reference[1].bDoCollide = (bool)(char)(uVar88 >> 8);
          TVar39.Reference[1].bHasBoundingBox = (bool)(char)(uVar88 >> 0x10);
          TVar39.Reference[1].bIsTracked = (bool)(char)(uVar88 >> 0x18);
          *(double *)&TVar39.Reference[1].Type = dVar102;
          TVar39.Reference[2]._padding_ = (longlong)dVar103;
          TVar39.Reference[2]._padding_ = (longlong)local_538;
          LOCK();
          *(int *)&(TVar39.Reference)->_padding_ = (int)(TVar39.Reference)->_padding_ + 1;
          UNLOCK();
          dVar57 = (double)local_638._8_8_;
          dVar2 = (double)local_638._0_8_;
          dVar56 = (double)local_638._0_8_;
        }
        local_608.Reference = TVar39.Reference;
        pTVar42 = ::operator_new(0xc0);
        if (pTVar42 == (TImplicitObjectTransformed<double,3,1> *)0x0) {
          pTVar42 = (TImplicitObjectTransformed<double,3,1> *)0x0;
        }
        else {
          pTVar42 = Chaos::TImplicitObjectTransformed<double,3,1>::
                    TImplicitObjectTransformed<double,3,1>
                              (pTVar42,&local_608,(TRigidTransform<double,3> *)local_258);
          TVar39.Reference = local_608.Reference;
          if (pTVar42 != (TImplicitObjectTransformed<double,3,1> *)0x0) {
            LOCK();
            *(int *)&pTVar42->_padding_ = (int)pTVar42->_padding_ + 1;
            UNLOCK();
          }
        }
        iVar29 = local_660.ArrayNum;
        if (local_660.ArrayNum == local_660.ArrayMax) {
          iVar29 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_660.AllocatorInstance,&local_660.ArrayMax);
        }
        local_660.ArrayNum = iVar29 + 1;
        *(TImplicitObjectTransformed<double,3,1> **)
         (local_660.AllocatorInstance.Data + (longlong)iVar29 * 8) = pTVar42;
        if (TVar39.Reference != (FImplicitObject *)0x0) {
          LOCK();
          plVar1 = &(TVar39.Reference)->_padding_;
          lVar55 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if (((int)lVar55 == 1) && (*(int *)((longlong)&(TVar39.Reference)->_padding_ + 4) == 0)) {
            (**(code **)(TVar39.Reference)->_padding_)(TVar39.Reference);
          }
        }
LAB_1481cf982:
        *(undefined1 *)local_650[4] = 1;
        this = local_650;
        goto LAB_1481d0711;
      }
      break;
    default:
      if (2 < (byte)LogPhysics._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysics);
      }
      break;
    case 3:
      if (lVar55 != 0) {
        if ((!bVar24) && (!bVar12)) {
          if ((*(int *)local_650[1] != 1) &&
             ((*(int *)local_650[1] != 2 &&
              (bVar24 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<8608185054796974381>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                                   ,0x92d,
                                   "ScaleMode == EScaleMode::LockedXY || ScaleMode == EScaleMode::LockedXYZ"
                                  ), bVar24)))) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (dVar102 <= (double)CONCAT44(uVar112,uVar111)) {
            dVar102 = (double)CONCAT44(uVar112,uVar111);
          }
          if (*(Type *)(lVar55 + 0x14) == TaperedCapsule) {
            if ((FKTaperedCapsuleElem::StaticShapeType != TaperedCapsule) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("T::StaticShapeType == ShapeType",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\PhysicsEngine\\ShapeElem.h"
                                    ,0x54,L""), bVar24)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pTVar52 = &local_4d0;
            __return_storage_ptr__ = &local_338;
            auVar78 = *(undefined1 (*) [16])(pTVar53->Rotation).XY.m128d_f64;
            dVar109 = (pTVar53->Rotation).ZW.m128d_f64[1];
            local_4d0._s_0.Z = dVar80;
            dVar103 = (double)((*(float *)(lVar55 + 100) + *(float *)(lVar55 + 0x60)) *
                              __real_3f000000);
            dVar102 = dVar103 * dVar102;
            if (dVar102 <= __real_3fb999999999999a) {
              dVar102 = __real_3fb999999999999a;
            }
            dVar92 = (local_5a0->XY).m128d_f64[0] * *(double *)(lVar55 + 0x30);
            dVar100 = (local_5a0->XY).m128d_f64[1] * *(double *)(lVar55 + 0x38);
            local_338._0_16_ = *(undefined1 (*) [16])(pTVar53->Rotation).XY.m128d_f64;
            auVar77 = *(undefined1 (*) [16])(pTVar53->Rotation).ZW.m128d_f64;
            auVar105._8_4_ = SUB84(dVar100,0);
            auVar105._0_8_ = dVar92;
            uVar90 = (undefined4)((ulonglong)dVar100 >> 0x20);
            auVar105._12_4_ = uVar90;
            auVar72 = blendpd(local_338._0_16_,auVar77,2);
            dVar11 = ((double)(*(float *)(lVar55 + 0x68) * __real_3f000000) + dVar103) *
                     (double)CONCAT44(uVar101,uVar50);
            dVar108 = *(double *)(lVar55 + 0x40) * (local_5a0->ZW).m128d_f64[0];
            dVar91 = (local_5a0->ZW).m128d_f64[1] * 0.0;
            dVar103 = auVar77._0_8_;
            auVar106._0_8_ = auVar105._8_8_ * local_338._0_8_ - local_338._8_8_ * dVar92;
            auVar106._8_8_ = dVar108 * local_338._8_8_ - dVar103 * dVar100;
            auVar61._8_4_ = SUB84(dVar100,0);
            auVar61._0_8_ = dVar92;
            auVar61._12_4_ = uVar90;
            auVar8._8_4_ = SUB84(dVar91,0);
            auVar8._0_8_ = dVar108;
            auVar8._12_4_ = (int)((ulonglong)dVar91 >> 0x20);
            auVar62 = blendpd(auVar61,auVar8,2);
            auVar63._0_8_ = auVar62._0_8_ * dVar103 - auVar72._0_8_ * dVar108;
            auVar63._8_8_ = auVar62._8_8_ * auVar77._8_8_ - auVar72._8_8_ * dVar91;
            auVar62 = blendpd(auVar106,auVar63,2);
            dVar91 = auVar106._8_8_ + auVar106._8_8_;
            dVar104 = auVar63._0_8_ + auVar63._0_8_;
            uVar90 = (undefined4)((ulonglong)dVar104 >> 0x20);
            auVar107._0_8_ = auVar62._0_8_ + auVar62._0_8_;
            auVar107._8_8_ = auVar62._8_8_ + auVar62._8_8_;
            auVar84._8_4_ = SUB84(dVar104,0);
            auVar84._0_8_ = dVar91;
            auVar84._12_4_ = uVar90;
            auVar73._8_4_ = SUB84(dVar104,0);
            auVar73._0_8_ = dVar91;
            auVar73._12_4_ = uVar90;
            auVar62 = blendpd(auVar73,auVar107,2);
            auVar85._0_8_ = auVar84._8_8_ * auVar78._0_8_ - auVar78._8_8_ * dVar91;
            auVar85._8_8_ = auVar107._0_8_ * auVar78._8_8_ - dVar103 * dVar104;
            auVar78 = blendpd(auVar78,auVar77,2);
            auVar64._8_4_ = SUB84(auVar85._8_8_,0);
            auVar64._0_8_ = auVar85._0_8_;
            auVar64._12_4_ = (int)((ulonglong)auVar85._8_8_ >> 0x20);
            auVar74._0_8_ = auVar62._0_8_ * dVar103 - auVar78._0_8_ * auVar107._0_8_;
            auVar74._8_8_ = auVar62._8_8_ * auVar77._8_8_ - auVar78._8_8_ * auVar107._8_8_;
            auVar78 = blendpd(auVar85,auVar74,2);
            dVar91 = dVar91 * dVar109 + dVar92 + auVar64._8_8_ + (local_598->XY).m128d_f64[0];
            dVar104 = dVar104 * dVar109 + dVar100 + auVar74._0_8_ + (local_598->XY).m128d_f64[1];
            local_3c8._8_4_ = SUB84(dVar104,0);
            local_3c8._0_8_ = dVar91;
            local_3c8._12_4_ = (int)((ulonglong)dVar104 >> 0x20);
            local_3b8 = auVar107._0_8_ * dVar109 + dVar108 + auVar78._0_8_ +
                        (local_598->ZW).m128d_f64[0];
            pdVar36 = *(double **)((longlong)this + 0x10);
            dVar104 = dVar104 * pdVar36[1];
            dVar103 = local_3b8 * pdVar36[2];
            local_4d0._s_0.X = 0.0;
            local_4d0._s_0.Y = 0.0;
          }
          else {
            if ((FKSphylElem::StaticShapeType != *(Type *)(lVar55 + 0x14)) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("T::StaticShapeType == ShapeType",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\PhysicsEngine\\ShapeElem.h"
                                    ,0x54,L""), bVar24)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pTVar52 = &local_4b8;
            __return_storage_ptr__ = &local_318;
            auVar78 = *(undefined1 (*) [16])(pTVar53->Rotation).XY.m128d_f64;
            dVar103 = *(double *)(lVar55 + 0x40) * (local_5e0->ZW).m128d_f64[0];
            dVar91 = (local_5e0->ZW).m128d_f64[1] * 0.0;
            auVar77 = *(undefined1 (*) [16])(pTVar53->Rotation).ZW.m128d_f64;
            dVar104 = (local_5e0->XY).m128d_f64[0] * *(double *)(lVar55 + 0x30);
            dVar109 = (local_5e0->XY).m128d_f64[1] * *(double *)(lVar55 + 0x38);
            local_318._0_16_ = *(undefined1 (*) [16])(pTVar53->Rotation).XY.m128d_f64;
            dVar102 = (double)*(float *)(lVar55 + 0x60) * dVar102;
            auVar97._8_4_ = SUB84(dVar109,0);
            auVar97._0_8_ = dVar104;
            uVar90 = (undefined4)((ulonglong)dVar109 >> 0x20);
            auVar97._12_4_ = uVar90;
            if (dVar102 <= __real_3fb999999999999a) {
              dVar102 = __real_3fb999999999999a;
            }
            dVar108 = auVar77._0_8_;
            auVar72 = blendpd(local_318._0_16_,auVar77,2);
            auVar98._0_8_ = auVar97._8_8_ * local_318._0_8_ - local_318._8_8_ * dVar104;
            auVar98._8_8_ = dVar103 * local_318._8_8_ - dVar108 * dVar109;
            dVar11 = (double)(*(float *)(lVar55 + 100) * __real_3f000000 + *(float *)(lVar55 + 0x60)
                             ) * (double)CONCAT44(uVar101,uVar50);
            dVar100 = (pTVar53->Rotation).ZW.m128d_f64[1];
            auVar65._8_4_ = SUB84(dVar109,0);
            auVar65._0_8_ = dVar104;
            auVar65._12_4_ = uVar90;
            auVar9._8_4_ = SUB84(dVar91,0);
            auVar9._0_8_ = dVar103;
            auVar9._12_4_ = (int)((ulonglong)dVar91 >> 0x20);
            auVar62 = blendpd(auVar65,auVar9,2);
            auVar66._0_8_ = auVar62._0_8_ * dVar108 - auVar72._0_8_ * dVar103;
            auVar66._8_8_ = auVar62._8_8_ * auVar77._8_8_ - auVar72._8_8_ * dVar91;
            local_4b8._s_0.Z = dVar80;
            auVar62 = blendpd(auVar98,auVar66,2);
            dVar91 = auVar98._8_8_ + auVar98._8_8_;
            dVar92 = auVar66._0_8_ + auVar66._0_8_;
            uVar90 = (undefined4)((ulonglong)dVar92 >> 0x20);
            auVar99._0_8_ = auVar62._0_8_ + auVar62._0_8_;
            auVar99._8_8_ = auVar62._8_8_ + auVar62._8_8_;
            auVar86._8_4_ = SUB84(dVar92,0);
            auVar86._0_8_ = dVar91;
            auVar86._12_4_ = uVar90;
            auVar75._8_4_ = SUB84(dVar92,0);
            auVar75._0_8_ = dVar91;
            auVar75._12_4_ = uVar90;
            auVar62 = blendpd(auVar75,auVar99,2);
            auVar87._0_8_ = auVar86._8_8_ * auVar78._0_8_ - auVar78._8_8_ * dVar91;
            auVar87._8_8_ = auVar99._0_8_ * auVar78._8_8_ - dVar108 * dVar92;
            auVar78 = blendpd(auVar78,auVar77,2);
            auVar67._8_4_ = SUB84(auVar87._8_8_,0);
            auVar67._0_8_ = auVar87._0_8_;
            auVar67._12_4_ = (int)((ulonglong)auVar87._8_8_ >> 0x20);
            auVar76._0_8_ = auVar62._0_8_ * dVar108 - auVar78._0_8_ * auVar99._0_8_;
            auVar76._8_8_ = auVar62._8_8_ * auVar77._8_8_ - auVar78._8_8_ * auVar99._8_8_;
            auVar78 = blendpd(auVar87,auVar76,2);
            dVar91 = dVar91 * dVar100 + dVar104 + auVar67._8_8_ + (local_5d8->XY).m128d_f64[0];
            dVar104 = dVar92 * dVar100 + dVar109 + auVar76._0_8_ + (local_5d8->XY).m128d_f64[1];
            local_3b0._8_4_ = SUB84(dVar104,0);
            local_3b0._0_8_ = dVar91;
            local_3b0._12_4_ = (int)((ulonglong)dVar104 >> 0x20);
            local_3a0 = auVar99._0_8_ * dVar100 + dVar103 + auVar78._0_8_ +
                        (local_5d8->ZW).m128d_f64[0];
            pdVar36 = *(double **)((longlong)this + 0x10);
            dVar104 = dVar104 * pdVar36[1];
            dVar103 = local_3a0 * pdVar36[2];
            local_4b8._s_0.X = 0.0;
            local_4b8._s_0.Y = 0.0;
          }
          dVar109 = *pdVar36;
          pTVar37 = UE::Math::TRotator<double>::RotateVector
                              ((TRotator<double> *)(lVar55 + 0x48),
                               (TVector<double> *)&__return_storage_ptr__->_s_0,
                               (TVector<double> *)&pTVar52->_s_0);
          dVar108 = dVar11;
          if (dVar102 <= dVar11) {
            dVar108 = dVar102;
          }
          local_538 = (pTVar37->field0_0x0)._s_0.Z;
          if (dVar108 <= dVar22) {
            dVar108 = dVar22;
          }
          dVar102 = dVar11 - dVar108;
          if (dVar11 - dVar108 <= dVar22) {
            dVar102 = dVar22;
          }
          local_500 = dVar102 * (pTVar37->field0_0x0)._s_0.X;
          local_4f8 = dVar102 * (pTVar37->field0_0x0)._s_0.Y;
          local_4e8 = dVar91 * dVar109 - local_500;
          local_500 = local_500 + dVar91 * dVar109;
          local_4e0 = dVar104 - local_4f8;
          local_4f8 = local_4f8 + dVar104;
          local_4d8 = dVar103 - dVar102 * local_538;
          local_4f0 = dVar102 * local_538 + dVar103;
          pFVar38 = ::operator_new(0x40);
          if (pFVar38 == (FCapsule *)0x0) goto LAB_1481cf531;
          pFVar38 = Chaos::FCapsule::FCapsule
                              (pFVar38,(TVector<double,3> *)&local_4e8,
                               (TVector<double,3> *)&local_500,dVar108);
          goto LAB_1481cf523;
        }
        goto LAB_1481d0711;
      }
      break;
    case 8:
      if ((lVar55 != 0) && ((bVar24 || (bVar12)))) {
        if ((FKConvexElem::StaticShapeType != *(Type *)(lVar55 + 0x14)) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("T::StaticShapeType == ShapeType",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\PhysicsEngine\\ShapeElem.h"
                                ,0x54,L""), bVar24)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (((dVar56 == dVar80) && ((double)local_638._8_8_ == dVar80)) && (local_628 == dVar80)) {
          uVar44 = 0x30;
          this_02 = ::operator_new(0x30);
          if (this_02 != (TImplicitObjectInstanced<Chaos::FConvex> *)0x0) {
            TVar39.Reference =
                 (FImplicitObject *)
                 Chaos::TImplicitObjectInstanced<Chaos::FConvex>::
                 TImplicitObjectInstanced<Chaos::FConvex>
                           (this_02,(TRefCountPtr<Chaos::FConvex> *)(lVar55 + 0xf0),0.0);
            uVar44 = SUB84(this_02,0);
            goto LAB_1481cff4b;
          }
LAB_1481cff59:
          TVar39.Reference = (FImplicitObject *)0x0;
        }
        else {
          uVar44 = 0x78;
          this_03 = ::operator_new(0x78);
          if (this_03 == (TImplicitObjectScaled<Chaos::FConvex,1> *)0x0) goto LAB_1481cff59;
          local_580 = *(longlong *)(lVar55 + 0xf0);
          local_478 = local_628;
          local_488._8_4_ = uVar90;
          local_488._0_8_ = dVar2;
          local_488._12_4_ = uVar110;
          if (local_580 != 0) {
            LOCK();
            *(int *)(local_580 + 8) = *(int *)(local_580 + 8) + 1;
            UNLOCK();
          }
          TVar39.Reference =
               (FImplicitObject *)
               Chaos::TImplicitObjectScaled<Chaos::FConvex,1>::
               TImplicitObjectScaled<Chaos::FConvex,1>
                         (this_03,(FConvex *)&local_580,(TVector<double,3> *)local_488,0.0);
          uVar44 = SUB84(this_03,0);
LAB_1481cff4b:
          if ((TImplicitObjectTransformed<double,3,1> *)TVar39.Reference !=
              (TImplicitObjectTransformed<double,3,1> *)0x0) {
            LOCK();
            *(int *)&((TImplicitObjectTransformed<double,3,1> *)TVar39.Reference)->_padding_ =
                 (int)((TImplicitObjectTransformed<double,3,1> *)TVar39.Reference)->_padding_ + 1;
            UNLOCK();
          }
        }
        auVar68._8_8_ =
             -(ulonglong)
              ((pTVar53->Rotation).ZW.m128d_f64[1] != UE::Math::TQuat<double>::Identity.W);
        auVar68._0_8_ =
             -(ulonglong)
              ((pTVar53->Rotation).ZW.m128d_f64[0] != UE::Math::TQuat<double>::Identity.Z);
        lVar55 = -(ulonglong)
                  ((pTVar53->Rotation).XY.m128d_f64[1] != UE::Math::TQuat<double>::Identity.Y);
        uVar50 = movmskpd(uVar44,auVar68);
        auVar6._8_4_ = (int)lVar55;
        auVar6._0_8_ = -(ulonglong)
                        ((pTVar53->Rotation).XY.m128d_f64[0] != UE::Math::TQuat<double>::Identity.X)
        ;
        auVar6._12_4_ = (int)((ulonglong)lVar55 >> 0x20);
        iVar29 = movmskpd((int)TVar39.Reference,auVar6);
        local_600.Reference = TVar39.Reference;
        if ((uVar50 & 0x3fffffff) == 0 && iVar29 == 0) {
          local_470 = (local_5d0->XY).m128d_f64[0];
          dStack_468 = (local_5d0->XY).m128d_f64[1];
          local_460 = (local_5d0->ZW).m128d_f64[0];
          if (((local_470 != UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X) ||
              (dStack_468 != UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y)) ||
             (pTVar42 = (TImplicitObjectTransformed<double,3,1> *)TVar39.Reference,
             local_460 != UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z))
          goto LAB_1481cffd1;
        }
        else {
LAB_1481cffd1:
          local_1c8 = (pTVar53->Translation).ZW.m128d_f64[0];
          dStack_1c0 = (pTVar53->Translation).ZW.m128d_f64[1];
          local_1d8 = (pTVar53->Translation).XY.m128d_f64[0];
          dStack_1d0 = (pTVar53->Translation).XY.m128d_f64[1];
          dVar103 = (pTVar53->Rotation).XY.m128d_f64[0];
          dVar91 = (pTVar53->Rotation).XY.m128d_f64[1];
          local_388 = (local_5c8->ZW).m128d_f64[0];
          dVar104 = (pTVar53->Rotation).ZW.m128d_f64[0];
          dVar109 = (pTVar53->Rotation).ZW.m128d_f64[1];
          dVar108 = (pTVar53->Scale3D).XY.m128d_f64[0];
          dVar92 = (pTVar53->Scale3D).XY.m128d_f64[1];
          dVar11 = (pTVar53->Scale3D).ZW.m128d_f64[0];
          dVar100 = (pTVar53->Scale3D).ZW.m128d_f64[1];
          local_398 = (local_5c8->XY).m128d_f64[0];
          dStack_390 = (local_5c8->XY).m128d_f64[1];
          dVar69 = local_388 * local_628;
          dVar102 = dStack_390 * (double)local_638._8_8_;
          dVar93 = local_398 * dVar56;
          local_380 = dVar93;
          dStack_378 = dVar102;
          local_370 = dVar69;
          pTVar41 = ::operator_new(0xc0);
          pTVar42 = (TImplicitObjectTransformed<double,3,1> *)0x0;
          if (pTVar41 != (TImplicitObjectTransformed<double,3,1> *)0x0) {
            dStack_1c0 = 0.0;
            local_1f8 = dVar103;
            dStack_1f0 = dVar91;
            local_1e8 = dVar104;
            dStack_1e0 = dVar109;
            local_1d8 = dVar93;
            dStack_1d0 = dVar102;
            local_1c8 = dVar69;
            local_1b8 = dVar108;
            dStack_1b0 = dVar92;
            local_1a8 = dVar11;
            dStack_1a0 = dVar100;
            pTVar42 = Chaos::TImplicitObjectTransformed<double,3,1>::
                      TImplicitObjectTransformed<double,3,1>
                                (pTVar41,&local_600,(TRigidTransform<double,3> *)&local_1f8);
            TVar39.Reference = local_600.Reference;
            if (pTVar42 != (TImplicitObjectTransformed<double,3,1> *)0x0) {
              LOCK();
              *(int *)&pTVar42->_padding_ = (int)pTVar42->_padding_ + 1;
              UNLOCK();
            }
          }
          if ((TImplicitObjectTransformed<double,3,1> *)TVar39.Reference !=
              (TImplicitObjectTransformed<double,3,1> *)0x0) {
            LOCK();
            plVar1 = &((TImplicitObjectTransformed<double,3,1> *)TVar39.Reference)->_padding_;
            lVar55 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if (((int)lVar55 == 1) &&
               (*(int *)((longlong)
                         &((TImplicitObjectTransformed<double,3,1> *)TVar39.Reference)->_padding_ +
                        4) == 0)) {
              (**(code **)((TImplicitObjectTransformed<double,3,1> *)TVar39.Reference)->_padding_)()
              ;
            }
          }
        }
        iVar29 = local_660.ArrayNum;
        if (local_660.ArrayNum == local_660.ArrayMax) {
          iVar29 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_660.AllocatorInstance,&local_660.ArrayMax);
        }
        local_660.ArrayNum = iVar29 + 1;
        local_600.Reference = (FImplicitObject *)0x0;
        *(TImplicitObjectTransformed<double,3,1> **)
         (local_660.AllocatorInstance.Data + (longlong)iVar29 * 8) = pTVar42;
        *(undefined1 *)local_650[4] = 1;
        this = local_650;
        goto LAB_1481d0711;
      }
      break;
    case 0xb:
      if ((bVar12) || (bVar24)) {
        if (bVar54) {
          pFVar31 = (FImplicitObject *)pFVar31[1]._padding_;
        }
        pFVar48 = (FTriangleMeshImplicitObject *)0x0;
        if (bVar12) {
          pFVar51 = *(FTriangleMeshImplicitObject **)&pFVar31[3].Margin;
          if (pFVar51 == (FTriangleMeshImplicitObject *)0x0) {
            this_04 = ::operator_new(0x78);
            if (this_04 == (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *)0x0) {
              this_04 = (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *)0x0;
            }
            else {
              local_448 = local_628;
              local_458._8_4_ = uVar90;
              local_458._0_8_ = dVar2;
              local_458._12_4_ = uVar110;
              uVar28 = Chaos::FImplicitObject::GetType((FImplicitObject *)0x0);
              Chaos::FImplicitObjectScaled::FImplicitObjectScaled
                        ((FImplicitObjectScaled *)this_04,2,uVar28);
              this_04->_padding_ =
                   (longlong)
                   &___7__TImplicitObjectScaled_VFTriangleMeshImplicitObject_Chaos___00_Chaos__6B_;
              (this_04->MObject).Reference = (FTriangleMeshImplicitObject *)0x0;
              uVar28 = Chaos::FImplicitObject::GetType
                                 ((FImplicitObject *)(this_04->MObject).Reference);
              if ((char)uVar28 < '\0') {
                local_647 = 0;
                `Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::
                InitScaledImplicit'::__l2::<lambda_1>::operator()(&local_647);
              }
              bVar26 = Chaos::FImplicitObject::GetType
                                 ((FImplicitObject *)(this_04->MObject).Reference);
              if ((bVar26 & 0x40) != 0) {
                local_646 = 0;
                `Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::
                InitScaledImplicit'::__l2::<lambda_2>::operator()(&local_646);
              }
              uVar28 = Chaos::FImplicitObject::GetType
                                 ((FImplicitObject *)(this_04->MObject).Reference);
              if (((uVar28 == '\x04') || (uVar28 == '\x05')) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("false",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                                      ,0x42e,L""), bVar24)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pFVar51 = (this_04->MObject).Reference;
              *(undefined1 *)((longlong)&this_04->_padding_ + 4) =
                   *(undefined1 *)((longlong)&pFVar51->_padding_ + 4);
              *(undefined1 *)((longlong)&this_04->_padding_ + 5) =
                   *(undefined1 *)((longlong)&pFVar51->_padding_ + 5);
              *(undefined4 *)&this_04->_padding_ = 0;
              Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::SetScale
                        (this_04,(TVector<double,3> *)local_458);
              LOCK();
              *(int *)&this_04->_padding_ = (int)this_04->_padding_ + 1;
              UNLOCK();
            }
            iVar29 = local_660.ArrayNum;
            if (local_660.ArrayNum == local_660.ArrayMax) {
              iVar29 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&local_660.AllocatorInstance,&local_660.ArrayMax);
            }
            local_660.ArrayNum = iVar29 + 1;
            *(TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> **)
             (local_660.AllocatorInstance.Data + (longlong)iVar29 * 8) = this_04;
          }
          else {
            LOCK();
            *(int *)&pFVar51->_padding_ = (int)pFVar51->_padding_ + 1;
            UNLOCK();
            LOCK();
            *(int *)&pFVar51->_padding_ = (int)pFVar51->_padding_ + 1;
            UNLOCK();
            LOCK();
            plVar1 = &pFVar51->_padding_;
            lVar55 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            pFVar48 = pFVar51;
            if (((int)lVar55 == 1) && (*(int *)((longlong)&pFVar51->_padding_ + 4) == 0)) {
              puVar40 = (undefined8 *)pFVar51->_padding_;
LAB_1481d032f:
              (*(code *)*puVar40)(pFVar51);
              pFVar48 = pFVar51;
            }
          }
        }
        else {
          if (!bVar24) break;
          pFVar51 = (FTriangleMeshImplicitObject *)pFVar31[1]._padding_;
          if (pFVar51 != (FTriangleMeshImplicitObject *)0x0) {
            LOCK();
            *(int *)&pFVar51->_padding_ = (int)pFVar51->_padding_ + 1;
            UNLOCK();
            LOCK();
            *(int *)&pFVar51->_padding_ = (int)pFVar51->_padding_ + 1;
            UNLOCK();
            LOCK();
            plVar1 = &pFVar51->_padding_;
            lVar55 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            pFVar48 = pFVar51;
            if (((int)lVar55 == 1) && (*(int *)((longlong)&pFVar51->_padding_ + 4) == 0)) {
              puVar40 = (undefined8 *)pFVar51->_padding_;
              goto LAB_1481d032f;
            }
          }
        }
        if (pFVar48 == (FTriangleMeshImplicitObject *)0x0) goto LAB_1481cf982;
        local_430 = local_628;
        local_440._8_4_ = uVar90;
        local_440._0_8_ = dVar2;
        local_440._12_4_ = uVar110;
        local_5f0.Reference = pFVar48;
        if (((dVar56 == dVar80) && ((double)local_638._8_8_ == dVar80)) && (local_628 == dVar80)) {
          uVar90 = 0x30;
          this_05 = ::operator_new(0x30);
          if (this_05 == (TImplicitObjectInstanced<Chaos::FTriangleMeshImplicitObject> *)0x0) {
            local_620.Reference = (FImplicitObject *)0x0;
          }
          else {
            local_620.Reference =
                 (FImplicitObject *)
                 Chaos::TImplicitObjectInstanced<Chaos::FTriangleMeshImplicitObject>::
                 TImplicitObjectInstanced<Chaos::FTriangleMeshImplicitObject>
                           (this_05,&local_5f0,0.0);
            uVar90 = SUB84(this_05,0);
            if ((TImplicitObjectTransformed<double,3,1> *)local_620.Reference !=
                (TImplicitObjectTransformed<double,3,1> *)0x0) {
              LOCK();
              *(int *)&((TImplicitObjectTransformed<double,3,1> *)local_620.Reference)->_padding_ =
                   (int)((TImplicitObjectTransformed<double,3,1> *)local_620.Reference)->_padding_ +
                   1;
              UNLOCK();
            }
          }
          iVar29 = (int)local_620.Reference;
          TVar39.Reference = local_620.Reference;
          if (pFVar48 != (FTriangleMeshImplicitObject *)0x0) {
            LOCK();
            plVar1 = &pFVar48->_padding_;
            iVar29 = (int)*plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((iVar29 == 1) && (iVar29 = *(int *)((longlong)&pFVar48->_padding_ + 4), iVar29 == 0)
               ) {
              puVar40 = (undefined8 *)pFVar48->_padding_;
LAB_1481d052d:
              TVar39.Reference = local_620.Reference;
              uVar90 = SUB84(pFVar48,0);
              iVar29 = (*(code *)*puVar40)();
            }
          }
        }
        else {
          uVar90 = 0x78;
          TVar39.Reference = ::operator_new(0x78);
          if ((TImplicitObjectTransformed<double,3,1> *)TVar39.Reference ==
              (TImplicitObjectTransformed<double,3,1> *)0x0) {
            TVar39.Reference = (FImplicitObject *)0x0;
            iVar29 = 0;
          }
          else {
            local_5f0.Reference = (FTriangleMeshImplicitObject *)0x0;
            uVar28 = Chaos::FImplicitObject::GetType((FImplicitObject *)pFVar48);
            Chaos::FImplicitObjectScaled::FImplicitObjectScaled
                      ((FImplicitObjectScaled *)TVar39.Reference,2,uVar28);
            ((TImplicitObjectTransformed<double,3,1> *)TVar39.Reference)->_padding_ =
                 (longlong)
                 &___7__TImplicitObjectScaled_VFTriangleMeshImplicitObject_Chaos___00_Chaos__6B_;
            ((TRefCountPtr<Chaos::FTriangleMeshImplicitObject> *)
            &(((TImplicitObjectTransformed<double,3,1> *)TVar39.Reference)->MTransform).field_0x40)
            ->Reference = pFVar48;
            LOCK();
            *(int *)&pFVar48->_padding_ = (int)pFVar48->_padding_ + 1;
            UNLOCK();
            uVar28 = Chaos::FImplicitObject::GetType
                               ((FImplicitObject *)
                                ((TRefCountPtr<Chaos::FTriangleMeshImplicitObject> *)
                                &(((TImplicitObjectTransformed<double,3,1> *)TVar39.Reference)->
                                 MTransform).field_0x40)->Reference);
            if ((char)uVar28 < '\0') {
              local_645 = 0;
              `Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::
              InitScaledImplicit'::__l2::<lambda_1>::operator()(&local_645);
            }
            bVar26 = Chaos::FImplicitObject::GetType
                               ((FImplicitObject *)
                                ((TRefCountPtr<Chaos::FTriangleMeshImplicitObject> *)
                                &(((TImplicitObjectTransformed<double,3,1> *)TVar39.Reference)->
                                 MTransform).field_0x40)->Reference);
            if ((bVar26 & 0x40) != 0) {
              local_644[0] = 0;
              `Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::
              InitScaledImplicit'::__l2::<lambda_2>::operator()(local_644);
            }
            uVar28 = Chaos::FImplicitObject::GetType
                               ((FImplicitObject *)
                                ((TRefCountPtr<Chaos::FTriangleMeshImplicitObject> *)
                                &(((TImplicitObjectTransformed<double,3,1> *)TVar39.Reference)->
                                 MTransform).field_0x40)->Reference);
            if (((uVar28 == '\x04') || (uVar28 == '\x05')) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("false",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                                    ,0x42e,L""), bVar24)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar51 = ((TRefCountPtr<Chaos::FTriangleMeshImplicitObject> *)
                      &(((TImplicitObjectTransformed<double,3,1> *)TVar39.Reference)->MTransform).
                       field_0x40)->Reference;
            *(undefined1 *)
             ((longlong)&((TImplicitObjectTransformed<double,3,1> *)TVar39.Reference)->_padding_ + 4
             ) = *(undefined1 *)((longlong)&pFVar51->_padding_ + 4);
            *(undefined1 *)
             ((longlong)&((TImplicitObjectTransformed<double,3,1> *)TVar39.Reference)->_padding_ + 5
             ) = *(undefined1 *)((longlong)&pFVar51->_padding_ + 5);
            *(undefined4 *)
             &(((TImplicitObjectTransformed<double,3,1> *)TVar39.Reference)->MTransform).field_0x8 =
                 0;
            pTVar42 = (TImplicitObjectTransformed<double,3,1> *)TVar39.Reference;
            Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::SetScale
                      ((TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *)
                       TVar39.Reference,(TVector<double,3> *)local_440);
            uVar90 = SUB84(pTVar42,0);
            LOCK();
            plVar1 = &pFVar48->_padding_;
            iVar29 = (int)*plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((iVar29 == 1) && (iVar29 = *(int *)((longlong)&pFVar48->_padding_ + 4), iVar29 == 0)
               ) {
              iVar29 = (**(code **)pFVar48->_padding_)();
              uVar90 = SUB84(pFVar48,0);
            }
            LOCK();
            *(int *)&((TImplicitObjectTransformed<double,3,1> *)TVar39.Reference)->_padding_ =
                 (int)((TImplicitObjectTransformed<double,3,1> *)TVar39.Reference)->_padding_ + 1;
            UNLOCK();
            pFVar48 = (FTriangleMeshImplicitObject *)0x0;
          }
          local_620.Reference = TVar39.Reference;
          if (pFVar48 != (FTriangleMeshImplicitObject *)0x0) {
            LOCK();
            plVar1 = &pFVar48->_padding_;
            iVar29 = (int)*plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((iVar29 == 1) && (iVar29 = *(int *)((longlong)&pFVar48->_padding_ + 4), iVar29 == 0)
               ) {
              puVar40 = (undefined8 *)pFVar48->_padding_;
              goto LAB_1481d052d;
            }
          }
        }
        auVar72._8_8_ =
             -(ulonglong)
              ((pTVar53->Rotation).ZW.m128d_f64[1] != UE::Math::TQuat<double>::Identity.W);
        auVar72._0_8_ =
             -(ulonglong)
              ((pTVar53->Rotation).ZW.m128d_f64[0] != UE::Math::TQuat<double>::Identity.Z);
        lVar55 = -(ulonglong)
                  ((pTVar53->Rotation).XY.m128d_f64[1] != UE::Math::TQuat<double>::Identity.Y);
        uVar50 = movmskpd(uVar90,auVar72);
        auVar62._8_4_ = (int)lVar55;
        auVar62._0_8_ =
             -(ulonglong)
              ((pTVar53->Rotation).XY.m128d_f64[0] != UE::Math::TQuat<double>::Identity.X);
        auVar62._12_4_ = (int)((ulonglong)lVar55 >> 0x20);
        iVar29 = movmskpd(iVar29,auVar62);
        if ((uVar50 & 0x3fffffff) == 0 && iVar29 == 0) {
          local_428 = (local_5c0->XY).m128d_f64[0];
          dStack_420 = (local_5c0->XY).m128d_f64[1];
          local_418 = (local_5c0->ZW).m128d_f64[0];
          if (((local_428 != UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X) ||
              (dStack_420 != UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y)) ||
             (pTVar42 = (TImplicitObjectTransformed<double,3,1> *)TVar39.Reference,
             local_418 != UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z))
          goto LAB_1481d05a6;
        }
        else {
LAB_1481d05a6:
          local_168 = (pTVar53->Translation).ZW.m128d_f64[0];
          dStack_160 = (pTVar53->Translation).ZW.m128d_f64[1];
          local_178 = (pTVar53->Translation).XY.m128d_f64[0];
          dStack_170 = (pTVar53->Translation).XY.m128d_f64[1];
          dVar103 = (pTVar53->Rotation).XY.m128d_f64[0];
          dVar91 = (pTVar53->Rotation).XY.m128d_f64[1];
          local_358 = (local_5b8->ZW).m128d_f64[0];
          dVar104 = (pTVar53->Rotation).ZW.m128d_f64[0];
          dVar109 = (pTVar53->Rotation).ZW.m128d_f64[1];
          dVar108 = (pTVar53->Scale3D).XY.m128d_f64[0];
          dVar92 = (pTVar53->Scale3D).XY.m128d_f64[1];
          dVar11 = (pTVar53->Scale3D).ZW.m128d_f64[0];
          dVar100 = (pTVar53->Scale3D).ZW.m128d_f64[1];
          local_368 = (local_5b8->XY).m128d_f64[0];
          dStack_360 = (local_5b8->XY).m128d_f64[1];
          dVar69 = local_358 * local_628;
          dVar102 = dStack_360 * (double)local_638._8_8_;
          dVar93 = local_368 * dVar56;
          local_350 = dVar93;
          dStack_348 = dVar102;
          local_340 = dVar69;
          pTVar41 = ::operator_new(0xc0);
          pTVar42 = (TImplicitObjectTransformed<double,3,1> *)0x0;
          if (pTVar41 != (TImplicitObjectTransformed<double,3,1> *)0x0) {
            dStack_160 = 0.0;
            local_198 = dVar103;
            dStack_190 = dVar91;
            local_188 = dVar104;
            dStack_180 = dVar109;
            local_178 = dVar93;
            dStack_170 = dVar102;
            local_168 = dVar69;
            local_158 = dVar108;
            dStack_150 = dVar92;
            local_148 = dVar11;
            dStack_140 = dVar100;
            pTVar42 = Chaos::TImplicitObjectTransformed<double,3,1>::
                      TImplicitObjectTransformed<double,3,1>
                                (pTVar41,&local_620,(TRigidTransform<double,3> *)&local_198);
            TVar39.Reference = local_620.Reference;
            if (pTVar42 != (TImplicitObjectTransformed<double,3,1> *)0x0) {
              LOCK();
              *(int *)&pTVar42->_padding_ = (int)pTVar42->_padding_ + 1;
              UNLOCK();
            }
          }
          if ((TImplicitObjectTransformed<double,3,1> *)TVar39.Reference !=
              (TImplicitObjectTransformed<double,3,1> *)0x0) {
            LOCK();
            plVar1 = &((TImplicitObjectTransformed<double,3,1> *)TVar39.Reference)->_padding_;
            lVar55 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if (((int)lVar55 == 1) &&
               (*(int *)((longlong)
                         &((TImplicitObjectTransformed<double,3,1> *)TVar39.Reference)->_padding_ +
                        4) == 0)) {
              (**(code **)((TImplicitObjectTransformed<double,3,1> *)TVar39.Reference)->_padding_)()
              ;
            }
          }
        }
        iVar29 = local_660.ArrayNum;
        if (local_660.ArrayNum == local_660.ArrayMax) {
          iVar29 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_660.AllocatorInstance,&local_660.ArrayMax);
        }
        local_660.ArrayNum = iVar29 + 1;
        local_620.Reference = (FImplicitObject *)0x0;
        *(TImplicitObjectTransformed<double,3,1> **)
         (local_660.AllocatorInstance.Data + (longlong)iVar29 * 8) = pTVar42;
        *(undefined1 *)local_650[4] = 1;
        this = local_650;
        goto LAB_1481d0711;
      }
      break;
    case 0xc:
      break;
    }
    this = local_650;
LAB_1481d0711:
    uVar30 = local_618._8_8_ & 0xffffffff;
    this_06.Data = (FScriptContainerElement *)(local_5b0 + 1);
    uVar45 = (ulonglong)local_5f8;
    uVar50 = (uint)local_528;
    uVar101 = local_528._4_4_;
    auVar77 = local_498;
    uVar111 = (uint)local_578;
    uVar112 = local_578._4_4_;
  } while( true );
}

// operator() @ 1481d08d0

void __thiscall
`FBodyInstance::SetBodyTransform'::__l53::<lambda_2>::operator()
          (void *this,FSingleParticlePhysicsProxy **param_1)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = FChaosEngineInterface::IsKinematic_AssumesLocked(param_1);
  bVar2 = FChaosEngineInterface::CanSimulate_AssumesLocked(param_1);
  if ((bVar1) && (bVar2)) {
    if (**(char **)this == '\0') {
      FPhysScene_Chaos::SetKinematicTarget_AssumesLocked
                ((FPhysScene_Chaos *)**(undefined8 **)((longlong)this + 8),
                 *(FBodyInstance **)((longlong)this + 0x10),
                 *(TTransform<double> **)((longlong)this + 0x18),true);
      return;
    }
    FChaosEngineInterface::SetKinematicTarget_AssumesLocked
              (param_1,*(TTransform<double> **)((longlong)this + 0x18));
  }
  FChaosEngineInterface::SetGlobalPose_AssumesLocked
            (param_1,*(TTransform<double> **)((longlong)this + 0x18),true);
  return;
}

// AddAngularImpulseInRadians @ 1481d1d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FBodyInstance::AddAngularImpulseInRadians
          (FBodyInstance *this,TVector<double> *param_1,bool param_2,FAsyncPhysicsTimestamp param_3,
          APlayerController *param_4)

{
  UActorComponent *pUVar1;
  UWorld *pUVar2;
  UObject *pUVar3;
  longlong *plVar4;
  char cVar5;
  undefined1 auStack_d8 [32];
  FAsyncPhysicsTimestamp local_a8;
  code *local_a0;
  undefined8 **ppuStack_98;
  undefined8 *local_90;
  FSingleParticlePhysicsProxy *local_88 [4];
  undefined4 uStack_68;
  undefined4 uStack_64;
  FBodyInstance *local_60;
  undefined1 local_58 [48];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if ((param_3.ServerFrame == -1) || (param_3.LocalFrame == -1)) {
    cVar5 = '\0';
  }
  else {
    cVar5 = '\x01';
  }
  local_a0 = (code *)(param_1->field0_0x0)._s_0.X;
  ppuStack_98 = (undefined8 **)(param_1->field0_0x0)._s_0.Y;
  uStack_68._0_2_ = CONCAT11(cVar5,param_2);
  local_a8 = *(FAsyncPhysicsTimestamp *)((longlong)&param_1->field0_0x0 + 0x10);
  local_58._0_8_ = (code *)0x0;
  local_60 = this;
  local_58._40_8_ = FMemory::Malloc(0x30,8);
  *(code **)(local_58._40_8_ + 8) = local_a0;
  *(undefined8 ***)(local_58._40_8_ + 0x10) = ppuStack_98;
  *(undefined ***)local_58._40_8_ =
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`FBodyInstance::AddAngularImpulseInRadians'::`2'::<lambda_1>,0,1>::
        _vftable_;
  *(int *)(local_58._40_8_ + 0x18) = local_a8.ServerFrame;
  *(int *)(local_58._40_8_ + 0x1c) = local_a8.LocalFrame;
  *(undefined4 *)(local_58._40_8_ + 0x20) = uStack_68;
  *(undefined4 *)(local_58._40_8_ + 0x24) = uStack_64;
  *(FBodyInstance **)(local_58._40_8_ + 0x28) = local_60;
  if ((undefined1 *)local_58._40_8_ != &DAT_fffffffffffffff8) {
    local_58._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FBodyInstance::AddAngularImpulseInRadians'::__l2::<lambda_1>,void>::
         Call;
  }
  local_a8 = param_3;
  if (((cVar5 == '\0') || (param_3.ServerFrame == -1)) || (param_3.LocalFrame == -1)) {
    local_90 = (undefined8 *)local_58;
    ppuStack_98 = &local_90;
    local_a0 = UE::Core::Private::Function::
               TFunctionRefCaller<`FBodyInstance::ApplyAsyncPhysicsCommand'::__l10::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
               ::Call;
    local_88[0] = this->ActorHandle;
    FPhysInterface_Chaos::ExecuteWrite
              (local_88,(TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)
                        &local_a0);
  }
  else {
    if (param_4 == (APlayerController *)0x0) {
      pUVar1 = (UActorComponent *)FWeakObjectPtr::Get(&(this->OwnerComponent).WeakPtr);
      if (pUVar1->WorldPrivate == (UWorld *)0x0) {
        pUVar2 = UActorComponent::GetWorld_Uncached(pUVar1);
        if (pUVar2 == (UWorld *)0x0) goto LAB_1481d1eb0;
      }
      pUVar1 = (UActorComponent *)FWeakObjectPtr::Get(&(this->OwnerComponent).WeakPtr);
      pUVar2 = pUVar1->WorldPrivate;
      if (pUVar2 == (UWorld *)0x0) {
        pUVar2 = UActorComponent::GetWorld_Uncached(pUVar1);
      }
      param_4 = UWorld::GetFirstPlayerController(pUVar2);
      if (param_4 == (APlayerController *)0x0) goto LAB_1481d1eb0;
    }
    local_a8.LocalFrame = local_a8.ServerFrame - param_4->NetworkPhysicsTickOffset;
    pUVar3 = FWeakObjectPtr::Get(&(this->OwnerComponent).WeakPtr);
    APlayerController::ExecuteAsyncPhysicsCommand
              (param_4,&local_a8,pUVar3,(TFunction<void___cdecl(void)> *)local_58,true);
  }
LAB_1481d1eb0:
  if ((code *)local_58._0_8_ != (code *)0x0) {
    plVar4 = (longlong *)(local_58 + 0x10);
    if ((longlong *)local_58._40_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_58._40_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return;
}

// AddCustomPhysics @ 1481d2050

void __thiscall
FBodyInstance::AddCustomPhysics
          (FBodyInstance *this,
          TDelegate<void___cdecl(float,FBodyInstance_*),FDefaultDelegateUserPolicy> *param_1)

{
  FSingleParticlePhysicsProxy *local_res8 [4];
  FBodyInstance *local_28;
  TDelegate<void___cdecl(float,FBodyInstance_*),FDefaultDelegateUserPolicy> *local_20;
  code *local_18;
  FBodyInstance **local_10;
  
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FBodyInstance::AddCustomPhysics'::__l2::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
             ::Call;
  local_res8[0] = this->ActorHandle;
  local_28 = this;
  local_20 = param_1;
  FPhysInterface_Chaos::ExecuteWrite
            (local_res8,
             (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_18);
  return;
}

// AddForce @ 1481d20a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FBodyInstance::AddForce
          (FBodyInstance *this,TVector<double> *param_1,bool param_2,bool param_3,
          FAsyncPhysicsTimestamp param_4,APlayerController *param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  UActorComponent *pUVar4;
  UWorld *pUVar5;
  UObject *pUVar6;
  longlong *plVar7;
  char cVar8;
  undefined1 auStack_d8 [32];
  FAsyncPhysicsTimestamp local_a8;
  code *local_a0;
  undefined8 **ppuStack_98;
  undefined8 *local_90;
  FSingleParticlePhysicsProxy *local_88 [4];
  undefined4 uStack_68;
  undefined4 uStack_64;
  FBodyInstance *local_60;
  undefined1 local_58 [48];
  ulonglong local_28;
  
  uVar3 = uStack_68;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if ((param_4.ServerFrame == -1) || (param_4.LocalFrame == -1)) {
    cVar8 = '\0';
  }
  else {
    cVar8 = '\x01';
  }
  local_a0 = (code *)(param_1->field0_0x0)._s_0.X;
  ppuStack_98 = (undefined8 **)(param_1->field0_0x0)._s_0.Y;
  uStack_68._3_1_ = SUB41(uVar3,3);
  uStack_68._0_3_ = CONCAT12(cVar8,CONCAT11(param_3,param_2));
  local_a8 = *(FAsyncPhysicsTimestamp *)((longlong)&param_1->field0_0x0 + 0x10);
  local_58._0_8_ = (code *)0x0;
  local_60 = this;
  local_58._40_8_ = FMemory::Malloc(0x30,8);
  iVar1 = local_a8.ServerFrame;
  iVar2 = local_a8.LocalFrame;
  *(code **)(local_58._40_8_ + 8) = local_a0;
  *(undefined8 ***)(local_58._40_8_ + 0x10) = ppuStack_98;
  *(undefined ***)local_58._40_8_ =
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`FBodyInstance::AddForce'::`2'::<lambda_1>,0,1>::_vftable_;
  local_a8 = param_4;
  *(int *)(local_58._40_8_ + 0x18) = iVar1;
  *(int *)(local_58._40_8_ + 0x1c) = iVar2;
  *(undefined4 *)(local_58._40_8_ + 0x20) = uStack_68;
  *(undefined4 *)(local_58._40_8_ + 0x24) = uStack_64;
  *(FBodyInstance **)(local_58._40_8_ + 0x28) = local_60;
  if ((undefined1 *)local_58._40_8_ != &DAT_fffffffffffffff8) {
    local_58._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FBodyInstance::AddForce'::__l2::<lambda_1>,void>::Call;
  }
  if (((cVar8 == '\0') || (param_4.ServerFrame == -1)) || (param_4.LocalFrame == -1)) {
    local_90 = (undefined8 *)local_58;
    ppuStack_98 = &local_90;
    local_a0 = UE::Core::Private::Function::
               TFunctionRefCaller<`FBodyInstance::ApplyAsyncPhysicsCommand'::__l10::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
               ::Call;
    local_88[0] = this->ActorHandle;
    FPhysInterface_Chaos::ExecuteWrite
              (local_88,(TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)
                        &local_a0);
  }
  else {
    if (param_5 == (APlayerController *)0x0) {
      pUVar4 = (UActorComponent *)FWeakObjectPtr::Get(&(this->OwnerComponent).WeakPtr);
      if (pUVar4->WorldPrivate == (UWorld *)0x0) {
        pUVar5 = UActorComponent::GetWorld_Uncached(pUVar4);
        if (pUVar5 == (UWorld *)0x0) goto LAB_1481d2254;
      }
      pUVar4 = (UActorComponent *)FWeakObjectPtr::Get(&(this->OwnerComponent).WeakPtr);
      pUVar5 = pUVar4->WorldPrivate;
      if (pUVar5 == (UWorld *)0x0) {
        pUVar5 = UActorComponent::GetWorld_Uncached(pUVar4);
      }
      param_5 = UWorld::GetFirstPlayerController(pUVar5);
      if (param_5 == (APlayerController *)0x0) goto LAB_1481d2254;
    }
    local_a8.LocalFrame = local_a8.ServerFrame - param_5->NetworkPhysicsTickOffset;
    pUVar6 = FWeakObjectPtr::Get(&(this->OwnerComponent).WeakPtr);
    APlayerController::ExecuteAsyncPhysicsCommand
              (param_5,&local_a8,pUVar6,(TFunction<void___cdecl(void)> *)local_58,true);
  }
LAB_1481d2254:
  if ((code *)local_58._0_8_ != (code *)0x0) {
    plVar7 = (longlong *)(local_58 + 0x10);
    if ((longlong *)local_58._40_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_58._40_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  return;
}

// AddForceAtPosition @ 1481d22a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FBodyInstance::AddForceAtPosition
          (FBodyInstance *this,TVector<double> *param_1,TVector<double> *param_2,bool param_3,
          bool param_4,FAsyncPhysicsTimestamp param_5,APlayerController *param_6)

{
  int iVar1;
  int iVar2;
  UActorComponent *pUVar3;
  UWorld *pUVar4;
  UObject *pUVar5;
  longlong *plVar6;
  char cVar7;
  undefined1 auStack_f8 [32];
  FAsyncPhysicsTimestamp local_c8;
  undefined8 *local_c0;
  code *local_b8;
  undefined8 **ppuStack_b0;
  FSingleParticlePhysicsProxy *local_a8 [4];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_70;
  bool bStack_6f;
  char cStack_6e;
  undefined5 uStack_6d;
  FBodyInstance *pFStack_68;
  undefined1 local_58 [48];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if ((param_5.ServerFrame == -1) || (param_5.LocalFrame == -1)) {
    cVar7 = '\0';
  }
  else {
    cVar7 = '\x01';
  }
  local_b8 = (code *)(param_1->field0_0x0)._s_0.X;
  ppuStack_b0 = (undefined8 **)(param_1->field0_0x0)._s_0.Y;
  bStack_6f = param_4;
  local_c8 = *(FAsyncPhysicsTimestamp *)((longlong)&param_1->field0_0x0 + 0x10);
  local_88 = *(undefined8 *)&param_2->field0_0x0;
  uStack_80 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
  local_58._0_8_ = (code *)0x0;
  local_c0 = *(undefined8 **)((longlong)&param_2->field0_0x0 + 0x10);
  local_70 = param_3;
  cStack_6e = cVar7;
  pFStack_68 = this;
  local_58._40_8_ = FMemory::Malloc(0x48,8);
  iVar1 = local_c8.ServerFrame;
  iVar2 = local_c8.LocalFrame;
  *(code **)(local_58._40_8_ + 8) = local_b8;
  *(undefined8 ***)(local_58._40_8_ + 0x10) = ppuStack_b0;
  *(undefined ***)local_58._40_8_ =
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`FBodyInstance::AddForceAtPosition'::`2'::<lambda_1>,0,1>::_vftable_;
  local_c8 = param_5;
  *(int *)(local_58._40_8_ + 0x18) = iVar1;
  *(int *)(local_58._40_8_ + 0x1c) = iVar2;
  *(undefined4 *)(local_58._40_8_ + 0x20) = (undefined4)local_88;
  *(undefined4 *)(local_58._40_8_ + 0x24) = local_88._4_4_;
  *(undefined4 *)(local_58._40_8_ + 0x28) = (undefined4)uStack_80;
  *(undefined4 *)(local_58._40_8_ + 0x2c) = uStack_80._4_4_;
  *(int *)(local_58._40_8_ + 0x30) = (int)local_c0;
  *(int *)(local_58._40_8_ + 0x34) = (int)((ulonglong)local_c0 >> 0x20);
  *(longlong *)(local_58._40_8_ + 0x38) =
       CONCAT53(uStack_6d,CONCAT12(cStack_6e,CONCAT11(bStack_6f,local_70)));
  *(FBodyInstance **)(local_58._40_8_ + 0x40) = pFStack_68;
  if ((undefined1 *)local_58._40_8_ != &DAT_fffffffffffffff8) {
    local_58._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FBodyInstance::AddForceAtPosition'::__l2::<lambda_1>,void>::Call;
  }
  if (((cVar7 == '\0') || (param_5.ServerFrame == -1)) || (param_5.LocalFrame == -1)) {
    local_c0 = (undefined8 *)local_58;
    ppuStack_b0 = &local_c0;
    local_b8 = UE::Core::Private::Function::
               TFunctionRefCaller<`FBodyInstance::ApplyAsyncPhysicsCommand'::__l10::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
               ::Call;
    local_a8[0] = this->ActorHandle;
    FPhysInterface_Chaos::ExecuteWrite
              (local_a8,(TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)
                        &local_b8);
  }
  else {
    if (param_6 == (APlayerController *)0x0) {
      pUVar3 = (UActorComponent *)FWeakObjectPtr::Get(&(this->OwnerComponent).WeakPtr);
      if (pUVar3->WorldPrivate == (UWorld *)0x0) {
        pUVar4 = UActorComponent::GetWorld_Uncached(pUVar3);
        if (pUVar4 == (UWorld *)0x0) goto LAB_1481d247e;
      }
      pUVar3 = (UActorComponent *)FWeakObjectPtr::Get(&(this->OwnerComponent).WeakPtr);
      pUVar4 = pUVar3->WorldPrivate;
      if (pUVar4 == (UWorld *)0x0) {
        pUVar4 = UActorComponent::GetWorld_Uncached(pUVar3);
      }
      param_6 = UWorld::GetFirstPlayerController(pUVar4);
      if (param_6 == (APlayerController *)0x0) goto LAB_1481d247e;
    }
    local_c8.LocalFrame = local_c8.ServerFrame - param_6->NetworkPhysicsTickOffset;
    pUVar5 = FWeakObjectPtr::Get(&(this->OwnerComponent).WeakPtr);
    APlayerController::ExecuteAsyncPhysicsCommand
              (param_6,&local_c8,pUVar5,(TFunction<void___cdecl(void)> *)local_58,true);
  }
LAB_1481d247e:
  if ((code *)local_58._0_8_ != (code *)0x0) {
    plVar6 = (longlong *)(local_58 + 0x10);
    if ((longlong *)local_58._40_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_58._40_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  return;
}

// AddImpulse @ 1481d24d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FBodyInstance::AddImpulse
          (FBodyInstance *this,TVector<double> *param_1,bool param_2,FAsyncPhysicsTimestamp param_3,
          APlayerController *param_4)

{
  UActorComponent *pUVar1;
  UWorld *pUVar2;
  UObject *pUVar3;
  longlong *plVar4;
  char cVar5;
  undefined1 auStack_d8 [32];
  FAsyncPhysicsTimestamp local_a8;
  code *local_a0;
  undefined8 **ppuStack_98;
  undefined8 *local_90;
  FSingleParticlePhysicsProxy *local_88 [4];
  undefined4 uStack_68;
  undefined4 uStack_64;
  FBodyInstance *local_60;
  undefined1 local_58 [48];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if ((param_3.ServerFrame == -1) || (param_3.LocalFrame == -1)) {
    cVar5 = '\0';
  }
  else {
    cVar5 = '\x01';
  }
  local_a0 = (code *)(param_1->field0_0x0)._s_0.X;
  ppuStack_98 = (undefined8 **)(param_1->field0_0x0)._s_0.Y;
  uStack_68._0_2_ = CONCAT11(cVar5,param_2);
  local_a8 = *(FAsyncPhysicsTimestamp *)((longlong)&param_1->field0_0x0 + 0x10);
  local_58._0_8_ = (code *)0x0;
  local_60 = this;
  local_58._40_8_ = FMemory::Malloc(0x30,8);
  *(code **)(local_58._40_8_ + 8) = local_a0;
  *(undefined8 ***)(local_58._40_8_ + 0x10) = ppuStack_98;
  *(undefined ***)local_58._40_8_ =
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`FBodyInstance::AddImpulse'::`2'::<lambda_1>,0,1>::_vftable_;
  *(int *)(local_58._40_8_ + 0x18) = local_a8.ServerFrame;
  *(int *)(local_58._40_8_ + 0x1c) = local_a8.LocalFrame;
  *(undefined4 *)(local_58._40_8_ + 0x20) = uStack_68;
  *(undefined4 *)(local_58._40_8_ + 0x24) = uStack_64;
  *(FBodyInstance **)(local_58._40_8_ + 0x28) = local_60;
  if ((undefined1 *)local_58._40_8_ != &DAT_fffffffffffffff8) {
    local_58._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FBodyInstance::AddImpulse'::__l2::<lambda_1>,void>::Call;
  }
  local_a8 = param_3;
  if (((cVar5 == '\0') || (param_3.ServerFrame == -1)) || (param_3.LocalFrame == -1)) {
    local_90 = (undefined8 *)local_58;
    ppuStack_98 = &local_90;
    local_a0 = UE::Core::Private::Function::
               TFunctionRefCaller<`FBodyInstance::ApplyAsyncPhysicsCommand'::__l10::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
               ::Call;
    local_88[0] = this->ActorHandle;
    FPhysInterface_Chaos::ExecuteWrite
              (local_88,(TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)
                        &local_a0);
  }
  else {
    if (param_4 == (APlayerController *)0x0) {
      pUVar1 = (UActorComponent *)FWeakObjectPtr::Get(&(this->OwnerComponent).WeakPtr);
      if (pUVar1->WorldPrivate == (UWorld *)0x0) {
        pUVar2 = UActorComponent::GetWorld_Uncached(pUVar1);
        if (pUVar2 == (UWorld *)0x0) goto LAB_1481d2680;
      }
      pUVar1 = (UActorComponent *)FWeakObjectPtr::Get(&(this->OwnerComponent).WeakPtr);
      pUVar2 = pUVar1->WorldPrivate;
      if (pUVar2 == (UWorld *)0x0) {
        pUVar2 = UActorComponent::GetWorld_Uncached(pUVar1);
      }
      param_4 = UWorld::GetFirstPlayerController(pUVar2);
      if (param_4 == (APlayerController *)0x0) goto LAB_1481d2680;
    }
    local_a8.LocalFrame = local_a8.ServerFrame - param_4->NetworkPhysicsTickOffset;
    pUVar3 = FWeakObjectPtr::Get(&(this->OwnerComponent).WeakPtr);
    APlayerController::ExecuteAsyncPhysicsCommand
              (param_4,&local_a8,pUVar3,(TFunction<void___cdecl(void)> *)local_58,true);
  }
LAB_1481d2680:
  if ((code *)local_58._0_8_ != (code *)0x0) {
    plVar4 = (longlong *)(local_58 + 0x10);
    if ((longlong *)local_58._40_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_58._40_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return;
}

// AddImpulseAtPosition @ 1481d26d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FBodyInstance::AddImpulseAtPosition
          (FBodyInstance *this,TVector<double> *param_1,TVector<double> *param_2,
          FAsyncPhysicsTimestamp param_3,APlayerController *param_4)

{
  UActorComponent *pUVar1;
  UWorld *pUVar2;
  UObject *pUVar3;
  longlong *plVar4;
  char cVar5;
  undefined1 auStack_f8 [32];
  FAsyncPhysicsTimestamp local_c8;
  undefined8 *local_c0;
  code *local_b8;
  undefined8 **ppuStack_b0;
  FSingleParticlePhysicsProxy *local_a8 [4];
  undefined8 local_88;
  undefined8 uStack_80;
  char local_70;
  undefined7 uStack_6f;
  FBodyInstance *pFStack_68;
  undefined1 local_58 [48];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if ((param_3.ServerFrame == -1) || (param_3.LocalFrame == -1)) {
    cVar5 = '\0';
  }
  else {
    cVar5 = '\x01';
  }
  local_b8 = (code *)(param_1->field0_0x0)._s_0.X;
  ppuStack_b0 = (undefined8 **)(param_1->field0_0x0)._s_0.Y;
  local_58._0_8_ = (code *)0x0;
  local_c8 = *(FAsyncPhysicsTimestamp *)((longlong)&param_1->field0_0x0 + 0x10);
  local_88 = *(undefined8 *)&param_2->field0_0x0;
  uStack_80 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
  local_c0 = *(undefined8 **)((longlong)&param_2->field0_0x0 + 0x10);
  local_70 = cVar5;
  pFStack_68 = this;
  local_58._40_8_ = FMemory::Malloc(0x48,8);
  *(code **)(local_58._40_8_ + 8) = local_b8;
  *(undefined8 ***)(local_58._40_8_ + 0x10) = ppuStack_b0;
  *(undefined ***)local_58._40_8_ =
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`FBodyInstance::AddImpulseAtPosition'::`2'::<lambda_1>,0,1>::_vftable_
  ;
  *(int *)(local_58._40_8_ + 0x18) = local_c8.ServerFrame;
  *(int *)(local_58._40_8_ + 0x1c) = local_c8.LocalFrame;
  *(undefined4 *)(local_58._40_8_ + 0x20) = (undefined4)local_88;
  *(undefined4 *)(local_58._40_8_ + 0x24) = local_88._4_4_;
  *(undefined4 *)(local_58._40_8_ + 0x28) = (undefined4)uStack_80;
  *(undefined4 *)(local_58._40_8_ + 0x2c) = uStack_80._4_4_;
  *(int *)(local_58._40_8_ + 0x30) = (int)local_c0;
  *(int *)(local_58._40_8_ + 0x34) = (int)((ulonglong)local_c0 >> 0x20);
  *(longlong *)(local_58._40_8_ + 0x38) = CONCAT71(uStack_6f,local_70);
  *(FBodyInstance **)(local_58._40_8_ + 0x40) = pFStack_68;
  if ((undefined1 *)local_58._40_8_ != &DAT_fffffffffffffff8) {
    local_58._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FBodyInstance::AddImpulseAtPosition'::__l2::<lambda_1>,void>::Call;
  }
  local_c8 = param_3;
  if (((cVar5 == '\0') || (param_3.ServerFrame == -1)) || (param_3.LocalFrame == -1)) {
    local_c0 = (undefined8 *)local_58;
    ppuStack_b0 = &local_c0;
    local_b8 = UE::Core::Private::Function::
               TFunctionRefCaller<`FBodyInstance::ApplyAsyncPhysicsCommand'::__l10::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
               ::Call;
    local_a8[0] = this->ActorHandle;
    FPhysInterface_Chaos::ExecuteWrite
              (local_a8,(TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)
                        &local_b8);
  }
  else {
    if (param_4 == (APlayerController *)0x0) {
      pUVar1 = (UActorComponent *)FWeakObjectPtr::Get(&(this->OwnerComponent).WeakPtr);
      if (pUVar1->WorldPrivate == (UWorld *)0x0) {
        pUVar2 = UActorComponent::GetWorld_Uncached(pUVar1);
        if (pUVar2 == (UWorld *)0x0) goto LAB_1481d289e;
      }
      pUVar1 = (UActorComponent *)FWeakObjectPtr::Get(&(this->OwnerComponent).WeakPtr);
      pUVar2 = pUVar1->WorldPrivate;
      if (pUVar2 == (UWorld *)0x0) {
        pUVar2 = UActorComponent::GetWorld_Uncached(pUVar1);
      }
      param_4 = UWorld::GetFirstPlayerController(pUVar2);
      if (param_4 == (APlayerController *)0x0) goto LAB_1481d289e;
    }
    local_c8.LocalFrame = local_c8.ServerFrame - param_4->NetworkPhysicsTickOffset;
    pUVar3 = FWeakObjectPtr::Get(&(this->OwnerComponent).WeakPtr);
    APlayerController::ExecuteAsyncPhysicsCommand
              (param_4,&local_c8,pUVar3,(TFunction<void___cdecl(void)> *)local_58,true);
  }
LAB_1481d289e:
  if ((code *)local_58._0_8_ != (code *)0x0) {
    plVar4 = (longlong *)(local_58 + 0x10);
    if ((longlong *)local_58._40_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_58._40_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return;
}

// AddRadialForceToBody @ 1481d30d0

void __thiscall
FBodyInstance::AddRadialForceToBody
          (FBodyInstance *this,TVector<double> *param_1,float param_2,float param_3,uchar param_4,
          bool param_5,bool param_6)

{
  FSingleParticlePhysicsProxy *local_res8 [2];
  float local_res18 [2];
  float local_res20 [2];
  code *local_58;
  FBodyInstance **local_50;
  FBodyInstance *local_48;
  TVector<double> *local_40;
  float *local_38;
  float *local_30;
  uchar *local_28;
  bool *local_20;
  bool *local_18;
  
  local_38 = local_res18;
  local_30 = local_res20;
  local_28 = &param_4;
  local_20 = &param_5;
  local_18 = &param_6;
  local_50 = &local_48;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`FBodyInstance::AddRadialForceToBody'::__l2::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
             ::Call;
  local_res8[0] = this->ActorHandle;
  local_res18[0] = param_2;
  local_res20[0] = param_3;
  local_48 = this;
  local_40 = param_1;
  FPhysInterface_Chaos::ExecuteWrite
            (local_res8,
             (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_58);
  return;
}

// AddRadialImpulseToBody @ 1481d3150

void __thiscall
FBodyInstance::AddRadialImpulseToBody
          (FBodyInstance *this,TVector<double> *param_1,float param_2,float param_3,uchar param_4,
          bool param_5)

{
  FSingleParticlePhysicsProxy *local_res8 [2];
  float local_res18 [2];
  float local_res20 [2];
  code *local_48;
  TVector<double> **local_40;
  TVector<double> *local_38;
  float *local_30;
  float *local_28;
  uchar *local_20;
  bool *local_18;
  
  local_30 = local_res18;
  local_28 = local_res20;
  local_20 = &param_4;
  local_18 = &param_5;
  local_40 = &local_38;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`FBodyInstance::AddRadialImpulseToBody'::__l2::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
             ::Call;
  local_res8[0] = this->ActorHandle;
  local_res18[0] = param_2;
  local_res20[0] = param_3;
  local_38 = param_1;
  FPhysInterface_Chaos::ExecuteWrite
            (local_res8,
             (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_48);
  return;
}

// AddTorqueInRadians @ 1481d3880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FBodyInstance::AddTorqueInRadians
          (FBodyInstance *this,TVector<double> *param_1,bool param_2,bool param_3,
          FAsyncPhysicsTimestamp param_4,APlayerController *param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  UActorComponent *pUVar4;
  UWorld *pUVar5;
  UObject *pUVar6;
  longlong *plVar7;
  char cVar8;
  undefined1 auStack_d8 [32];
  FAsyncPhysicsTimestamp local_a8;
  code *local_a0;
  undefined8 **ppuStack_98;
  undefined8 *local_90;
  FSingleParticlePhysicsProxy *local_88 [4];
  undefined4 uStack_68;
  undefined4 uStack_64;
  FBodyInstance *local_60;
  undefined1 local_58 [48];
  ulonglong local_28;
  
  uVar3 = uStack_68;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if ((param_4.ServerFrame == -1) || (param_4.LocalFrame == -1)) {
    cVar8 = '\0';
  }
  else {
    cVar8 = '\x01';
  }
  local_a0 = (code *)(param_1->field0_0x0)._s_0.X;
  ppuStack_98 = (undefined8 **)(param_1->field0_0x0)._s_0.Y;
  uStack_68._3_1_ = SUB41(uVar3,3);
  uStack_68._0_3_ = CONCAT12(cVar8,CONCAT11(param_3,param_2));
  local_a8 = *(FAsyncPhysicsTimestamp *)((longlong)&param_1->field0_0x0 + 0x10);
  local_58._0_8_ = (code *)0x0;
  local_60 = this;
  local_58._40_8_ = FMemory::Malloc(0x30,8);
  iVar1 = local_a8.ServerFrame;
  iVar2 = local_a8.LocalFrame;
  *(code **)(local_58._40_8_ + 8) = local_a0;
  *(undefined8 ***)(local_58._40_8_ + 0x10) = ppuStack_98;
  *(undefined ***)local_58._40_8_ =
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`FBodyInstance::AddTorqueInRadians'::`2'::<lambda_1>,0,1>::_vftable_;
  local_a8 = param_4;
  *(int *)(local_58._40_8_ + 0x18) = iVar1;
  *(int *)(local_58._40_8_ + 0x1c) = iVar2;
  *(undefined4 *)(local_58._40_8_ + 0x20) = uStack_68;
  *(undefined4 *)(local_58._40_8_ + 0x24) = uStack_64;
  *(FBodyInstance **)(local_58._40_8_ + 0x28) = local_60;
  if ((undefined1 *)local_58._40_8_ != &DAT_fffffffffffffff8) {
    local_58._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FBodyInstance::AddTorqueInRadians'::__l2::<lambda_1>,void>::Call;
  }
  if (((cVar8 == '\0') || (param_4.ServerFrame == -1)) || (param_4.LocalFrame == -1)) {
    local_90 = (undefined8 *)local_58;
    ppuStack_98 = &local_90;
    local_a0 = UE::Core::Private::Function::
               TFunctionRefCaller<`FBodyInstance::ApplyAsyncPhysicsCommand'::__l10::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
               ::Call;
    local_88[0] = this->ActorHandle;
    FPhysInterface_Chaos::ExecuteWrite
              (local_88,(TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)
                        &local_a0);
  }
  else {
    if (param_5 == (APlayerController *)0x0) {
      pUVar4 = (UActorComponent *)FWeakObjectPtr::Get(&(this->OwnerComponent).WeakPtr);
      if (pUVar4->WorldPrivate == (UWorld *)0x0) {
        pUVar5 = UActorComponent::GetWorld_Uncached(pUVar4);
        if (pUVar5 == (UWorld *)0x0) goto LAB_1481d3a34;
      }
      pUVar4 = (UActorComponent *)FWeakObjectPtr::Get(&(this->OwnerComponent).WeakPtr);
      pUVar5 = pUVar4->WorldPrivate;
      if (pUVar5 == (UWorld *)0x0) {
        pUVar5 = UActorComponent::GetWorld_Uncached(pUVar4);
      }
      param_5 = UWorld::GetFirstPlayerController(pUVar5);
      if (param_5 == (APlayerController *)0x0) goto LAB_1481d3a34;
    }
    local_a8.LocalFrame = local_a8.ServerFrame - param_5->NetworkPhysicsTickOffset;
    pUVar6 = FWeakObjectPtr::Get(&(this->OwnerComponent).WeakPtr);
    APlayerController::ExecuteAsyncPhysicsCommand
              (param_5,&local_a8,pUVar6,(TFunction<void___cdecl(void)> *)local_58,true);
  }
LAB_1481d3a34:
  if ((code *)local_58._0_8_ != (code *)0x0) {
    plVar7 = (longlong *)(local_58 + 0x10);
    if ((longlong *)local_58._40_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_58._40_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  return;
}

// AddVelocityChangeImpulseAtLocation @ 1481d3a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FBodyInstance::AddVelocityChangeImpulseAtLocation
          (FBodyInstance *this,TVector<double> *param_1,TVector<double> *param_2,
          FAsyncPhysicsTimestamp param_3,APlayerController *param_4)

{
  UActorComponent *pUVar1;
  UWorld *pUVar2;
  UObject *pUVar3;
  longlong *plVar4;
  char cVar5;
  undefined1 auStack_f8 [32];
  FAsyncPhysicsTimestamp local_c8;
  undefined8 *local_c0;
  code *local_b8;
  undefined8 **ppuStack_b0;
  FSingleParticlePhysicsProxy *local_a8 [4];
  undefined8 local_88;
  undefined8 uStack_80;
  char local_70;
  undefined7 uStack_6f;
  FBodyInstance *pFStack_68;
  undefined1 local_58 [48];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if ((param_3.ServerFrame == -1) || (param_3.LocalFrame == -1)) {
    cVar5 = '\0';
  }
  else {
    cVar5 = '\x01';
  }
  local_b8 = (code *)(param_1->field0_0x0)._s_0.X;
  ppuStack_b0 = (undefined8 **)(param_1->field0_0x0)._s_0.Y;
  local_58._0_8_ = (code *)0x0;
  local_c8 = *(FAsyncPhysicsTimestamp *)((longlong)&param_1->field0_0x0 + 0x10);
  local_88 = *(undefined8 *)&param_2->field0_0x0;
  uStack_80 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
  local_c0 = *(undefined8 **)((longlong)&param_2->field0_0x0 + 0x10);
  local_70 = cVar5;
  pFStack_68 = this;
  local_58._40_8_ = FMemory::Malloc(0x48,8);
  *(code **)(local_58._40_8_ + 8) = local_b8;
  *(undefined8 ***)(local_58._40_8_ + 0x10) = ppuStack_b0;
  *(undefined ***)local_58._40_8_ =
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`FBodyInstance::AddVelocityChangeImpulseAtLocation'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  *(int *)(local_58._40_8_ + 0x18) = local_c8.ServerFrame;
  *(int *)(local_58._40_8_ + 0x1c) = local_c8.LocalFrame;
  *(undefined4 *)(local_58._40_8_ + 0x20) = (undefined4)local_88;
  *(undefined4 *)(local_58._40_8_ + 0x24) = local_88._4_4_;
  *(undefined4 *)(local_58._40_8_ + 0x28) = (undefined4)uStack_80;
  *(undefined4 *)(local_58._40_8_ + 0x2c) = uStack_80._4_4_;
  *(int *)(local_58._40_8_ + 0x30) = (int)local_c0;
  *(int *)(local_58._40_8_ + 0x34) = (int)((ulonglong)local_c0 >> 0x20);
  *(longlong *)(local_58._40_8_ + 0x38) = CONCAT71(uStack_6f,local_70);
  *(FBodyInstance **)(local_58._40_8_ + 0x40) = pFStack_68;
  if ((undefined1 *)local_58._40_8_ != &DAT_fffffffffffffff8) {
    local_58._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FBodyInstance::AddVelocityChangeImpulseAtLocation'::__l2::<lambda_1>,void>
         ::Call;
  }
  local_c8 = param_3;
  if (((cVar5 == '\0') || (param_3.ServerFrame == -1)) || (param_3.LocalFrame == -1)) {
    local_c0 = (undefined8 *)local_58;
    ppuStack_b0 = &local_c0;
    local_b8 = UE::Core::Private::Function::
               TFunctionRefCaller<`FBodyInstance::ApplyAsyncPhysicsCommand'::__l10::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
               ::Call;
    local_a8[0] = this->ActorHandle;
    FPhysInterface_Chaos::ExecuteWrite
              (local_a8,(TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)
                        &local_b8);
  }
  else {
    if (param_4 == (APlayerController *)0x0) {
      pUVar1 = (UActorComponent *)FWeakObjectPtr::Get(&(this->OwnerComponent).WeakPtr);
      if (pUVar1->WorldPrivate == (UWorld *)0x0) {
        pUVar2 = UActorComponent::GetWorld_Uncached(pUVar1);
        if (pUVar2 == (UWorld *)0x0) goto LAB_1481d3c4e;
      }
      pUVar1 = (UActorComponent *)FWeakObjectPtr::Get(&(this->OwnerComponent).WeakPtr);
      pUVar2 = pUVar1->WorldPrivate;
      if (pUVar2 == (UWorld *)0x0) {
        pUVar2 = UActorComponent::GetWorld_Uncached(pUVar1);
      }
      param_4 = UWorld::GetFirstPlayerController(pUVar2);
      if (param_4 == (APlayerController *)0x0) goto LAB_1481d3c4e;
    }
    local_c8.LocalFrame = local_c8.ServerFrame - param_4->NetworkPhysicsTickOffset;
    pUVar3 = FWeakObjectPtr::Get(&(this->OwnerComponent).WeakPtr);
    APlayerController::ExecuteAsyncPhysicsCommand
              (param_4,&local_c8,pUVar3,(TFunction<void___cdecl(void)> *)local_58,true);
  }
LAB_1481d3c4e:
  if ((code *)local_58._0_8_ != (code *)0x0) {
    plVar4 = (longlong *)(local_58 + 0x10);
    if ((longlong *)local_58._40_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_58._40_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return;
}

// ApplyAsyncPhysicsCommand @ 1481d3ea0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FBodyInstance::ApplyAsyncPhysicsCommand
          (FBodyInstance *this,FAsyncPhysicsTimestamp param_1,bool param_2,
          APlayerController *param_3,TFunction<void___cdecl(void)> *param_4)

{
  TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> *this_00;
  FAsyncPhysicsTimestamp FVar1;
  int iVar2;
  UActorComponent *pUVar3;
  UWorld *pUVar4;
  UObject *pUVar5;
  FAsyncPhysicsTimestamp local_res10 [3];
  TFunction<void___cdecl(void)> *local_28;
  FSingleParticlePhysicsProxy *local_20;
  code *local_18;
  TFunction<void___cdecl(void)> **local_10;
  
  local_res10[0] = param_1;
  if (((!param_2) ||
      (local_res10[0].ServerFrame = param_1.ServerFrame, local_res10[0].ServerFrame == -1)) ||
     (param_1.LocalFrame == -1)) {
    local_28 = param_4;
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`FBodyInstance::ApplyAsyncPhysicsCommand'::__l10::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
               ::Call;
    local_20 = this->ActorHandle;
    FPhysInterface_Chaos::ExecuteWrite
              (&local_20,
               (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_18
              );
    return;
  }
  this_00 = &this->OwnerComponent;
  FVar1 = param_1;
  if (param_3 == (APlayerController *)0x0) {
    pUVar3 = (UActorComponent *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    if ((pUVar3->WorldPrivate == (UWorld *)0x0) &&
       (pUVar4 = UActorComponent::GetWorld_Uncached(pUVar3), pUVar4 == (UWorld *)0x0)) {
      return;
    }
    pUVar3 = (UActorComponent *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    pUVar4 = pUVar3->WorldPrivate;
    if (pUVar4 == (UWorld *)0x0) {
      pUVar4 = UActorComponent::GetWorld_Uncached(pUVar3);
    }
    param_3 = UWorld::GetFirstPlayerController(pUVar4);
    if (param_3 == (APlayerController *)0x0) {
      return;
    }
    FVar1 = local_res10[0];
  }
  local_res10[0] = FVar1;
  iVar2 = local_res10[0].ServerFrame - param_3->NetworkPhysicsTickOffset;
  local_res10[0].LocalFrame = iVar2;
  pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  APlayerController::ExecuteAsyncPhysicsCommand(param_3,local_res10,pUVar5,param_4,true);
  return;
}

// ApplyDeferredCollisionProfileName @ 1481d3fd0

void __thiscall FBodyInstance::ApplyDeferredCollisionProfileName(FBodyInstance *this)

{
  if (this->bPendingCollisionProfileSetup != 0) {
    SetCollisionProfileName(this,this->CollisionProfileName);
    this->bPendingCollisionProfileSetup = '\0';
  }
  return;
}

// ApplyMaterialToInstanceShapes_AssumesLocked @ 1481d4000

void __thiscall
FBodyInstance::ApplyMaterialToInstanceShapes_AssumesLocked
          (FBodyInstance *this,UPhysicalMaterial *param_1,
          TArray<UPhysicalMaterial_*,TSizedDefaultAllocator<32>_> *param_2,
          TArrayView<FPhysicalMaterialMaskParams,int> *param_3)

{
  TMap<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>
  *this_00;
  int iVar1;
  FWeldInfo *pFVar2;
  ForAnyElementType FVar3;
  FPhysicsShapeReference_Chaos *pFVar4;
  FBodyInstance *pFVar5;
  FBodyInstance *pFVar6;
  FSingleParticlePhysicsProxy *local_res8;
  UPhysicalMaterial *local_res10;
  TArray<FPhysicsShapeReference_Chaos,TSizedDefaultAllocator<32>_> local_78;
  code *local_68;
  undefined8 **local_60;
  UPhysicalMaterial **local_58;
  TArray<UPhysicalMaterial_*,TSizedDefaultAllocator<32>_> *local_50;
  TArrayView<FPhysicalMaterialMaskParams,int> *local_48;
  
  pFVar6 = this;
  if (this->WeldParent != (FBodyInstance *)0x0) {
    pFVar6 = this->WeldParent;
  }
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  local_res10 = param_1;
  if (pFVar6->ActorHandle != (FSingleParticlePhysicsProxy *)0x0) {
    local_res8 = pFVar6->ActorHandle;
    FChaosEngineInterface::GetAllShapes_AssumedLocked(&local_res8,&local_78);
  }
  iVar1 = local_78.ArrayNum;
  pFVar4 = (FPhysicsShapeReference_Chaos *)
           (local_78.AllocatorInstance.Data + (longlong)local_78.ArrayNum * 0x10);
  FVar3.Data = local_78.AllocatorInstance.Data;
  while( true ) {
    if (local_78.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FPhysicsShapeReference_Chaos,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if ((FPhysicsShapeReference_Chaos *)FVar3.Data == pFVar4) break;
    pFVar5 = this;
    if (this->WeldParent != (FBodyInstance *)0x0) {
      pFVar5 = this->WeldParent;
    }
    this_00 = (pFVar5->ShapeToBodiesMap).Object;
    if (this_00 !=
        (TMap<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>
         *)0x0) {
      pFVar2 = TMapBase<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>
               ::Find((TMapBase<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>
                       *)this_00,(FPhysicsShapeReference_Chaos *)FVar3.Data);
      if (pFVar2 != (FWeldInfo *)0x0) {
        pFVar5 = pFVar2->ChildBI;
      }
    }
    if (pFVar5 == this) {
      local_58 = &local_res10;
      local_60 = &local_58;
      local_68 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FBodyInstance::ApplyMaterialToInstanceShapes_AssumesLocked'::__l9::<lambda_1>,void,FPhysicsShapeReference_Chaos_&>
                 ::Call;
      local_50 = param_2;
      local_48 = param_3;
      FPhysInterface_Chaos::ExecuteShapeWrite
                (pFVar6,(FPhysicsShapeReference_Chaos *)FVar3.Data,
                 (TFunctionRef<void___cdecl(FPhysicsShapeReference_Chaos_&)> *)&local_68);
    }
    FVar3.Data = FVar3.Data + 0x10;
  }
  if ((FPhysicsShapeReference_Chaos *)local_78.AllocatorInstance.Data !=
      (FPhysicsShapeReference_Chaos *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return;
}

// ApplyMaterialToShape_AssumesLocked @ 1481d4170

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FBodyInstance::ApplyMaterialToShape_AssumesLocked
          (FPhysicsShapeReference_Chaos *param_1,UPhysicalMaterial *param_2,
          TArrayView<UPhysicalMaterial_*,int> *param_3,
          TArrayView<FPhysicalMaterialMaskParams,int> *param_4)

{
  code *pcVar1;
  ECollisionShapeType EVar2;
  bool bVar3;
  FStaticBasicLogRecord *pFVar4;
  UPhysicalMaterial *local_res10;
  undefined4 uStack_5c;
  undefined4 uStack_4c;
  TArrayView<UPhysicalMaterial_*,int> local_48;
  TArrayView<UPhysicalMaterial_*,int> local_38;
  TArrayView<UPhysicalMaterial_*,int> local_28;
  TArrayView<UPhysicalMaterial_*,int> local_18;
  
  local_res10 = param_2;
  EVar2 = FChaosEngineInterface::GetShapeType(param_1);
  if (EVar2 == Trimesh) {
    if (param_3->ArrayNum != 0) {
      if (param_4 != (TArrayView<FPhysicalMaterialMaskParams,int> *)0x0) {
        local_38.DataPtr = param_3->DataPtr;
        local_38.ArrayNum = param_3->ArrayNum;
        local_38._12_4_ = *(undefined4 *)&param_3->field_0xc;
        FPhysInterface_Chaos::SetMaterials(param_1,&local_38,param_4);
        return;
      }
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8608185054796976538>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                         ,0x119a,"ComplexPhysMatMasks");
      if (!bVar3) {
        local_48.DataPtr = param_3->DataPtr;
        local_48.ArrayNum = param_3->ArrayNum;
        local_48._12_4_ = *(undefined4 *)&param_3->field_0xc;
        FPhysInterface_Chaos::SetMaterials(param_1,&local_48);
        return;
      }
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (local_res10 != (UPhysicalMaterial *)0x0) {
      if (5 < (byte)LogPhysics._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPhysics);
      }
      local_28.DataPtr = &local_res10;
      local_28._12_4_ = uStack_5c;
      local_28.ArrayNum = 1;
      FPhysInterface_Chaos::SetMaterials(param_1,&local_28);
      return;
    }
    if ((byte)LogPhysics._0_1_ < 2) {
      return;
    }
    pFVar4 = &::LOG_Static;
  }
  else {
    if (local_res10 != (UPhysicalMaterial *)0x0) {
      local_18.DataPtr = &local_res10;
      local_18._12_4_ = uStack_4c;
      local_18.ArrayNum = 1;
      FPhysInterface_Chaos::SetMaterials(param_1,&local_18);
      return;
    }
    if ((byte)LogPhysics._0_1_ < 2) {
      return;
    }
    pFVar4 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<2>(pFVar4,(FLogCategoryBase *)&LogPhysics);
  return;
}

// ApplySerializedState @ 1481d4540

void __thiscall
FBodyInstance::ApplySerializedState
          (FBodyInstance *this,
          TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>
          *param_1,ESerializedDataContext param_2)

{
  TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_> *local_28;
  ESerializedDataContext local_20;
  code *local_18;
  TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_> **local_10;
  
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FBodyInstance::ApplySerializedState'::__l2::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_&>
             ::Call;
  local_28 = param_1;
  local_20 = param_2;
  FPhysInterface_Chaos::ExecuteWrite
            (&this->ActorHandle,
             (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_&)> *)&local_18,
             param_2 == Internal,Normal);
  return;
}

// ApplyWeldOnChildren @ 1481d4590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FBodyInstance::ApplyWeldOnChildren(FBodyInstance *this)

{
  int iVar1;
  FBodyInstance *pFVar2;
  code *pcVar3;
  bool bVar4;
  uchar uVar5;
  uint uVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  TTransform<double> *pTVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong local_c0;
  void *local_b8;
  undefined8 local_b0;
  void *local_a8;
  undefined8 local_a0;
  undefined1 local_98 [96];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pUVar7 = FWeakObjectPtr::Get(&(this->OwnerComponent).WeakPtr);
  if (pUVar7 != (UObject *)0x0) {
    uVar11 = 0;
    local_b8 = (void *)0x0;
    local_b0 = 0;
    local_a8 = (void *)0x0;
    local_a0 = 0;
    (**(code **)(*(longlong *)pUVar7 + 0x870))(pUVar7,&local_b8,&local_a8,1);
    uVar12 = uVar11;
    if (0 < (int)local_b0) {
      do {
        uVar10 = (uint)uVar11;
        uVar6 = 0;
        if ((int)uVar10 < (int)local_b0) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if (uVar6 == 0) {
          local_c8 = (longlong)(int)uVar10;
          local_c0 = (longlong)(int)local_b0;
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        pFVar2 = *(FBodyInstance **)(uVar12 + (longlong)local_b8);
        if (pFVar2 != this) {
          pUVar7 = FWeakObjectPtr::Get(&(pFVar2->OwnerComponent).WeakPtr);
          if (pUVar7 == (UObject *)0x0) {
LAB_1481d46f6:
            uVar5 = (pFVar2->CollisionEnabled).Value;
          }
          else {
            if ((*(longlong *)&pUVar7[4].field_0x8 != 0) &&
               ((*(byte *)(*(longlong *)&pUVar7[4].field_0x8 + 0x5d) & 1) == 0)) goto LAB_1481d4792;
            pUVar8 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
            iVar1 = (int)pUVar8->_padding_;
            if ((*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar1) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
                &pUVar8->_padding_)) goto LAB_1481d46f6;
            uVar5 = pUVar7[0x17].field_0xf;
          }
          if (((uVar5 == '\x02') || (uVar5 == '\x03')) &&
             (pUVar7 = FWeakObjectPtr::Get(&(pFVar2->OwnerComponent).WeakPtr),
             pUVar7 != (UObject *)0x0)) {
            pcVar3 = *(code **)(*(longlong *)pUVar7 + 0x520);
            uVar6 = 0;
            if ((int)uVar10 < (int)local_a0) {
              uVar6 = ~uVar10 >> 0x1f;
            }
            if (uVar6 == 0) {
              local_c8 = (longlong)(int)uVar10;
              local_c0 = (longlong)(int)local_a0;
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar4) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            pTVar9 = (TTransform<double> *)
                     (*pcVar3)(pUVar7,local_98,*(undefined8 *)(uVar12 + (longlong)local_a8),0);
            Weld(this,pFVar2,pTVar9);
          }
        }
LAB_1481d4792:
        uVar11 = (ulonglong)(uVar10 + 1);
        uVar12 = uVar12 + 8;
      } while ((int)(uVar10 + 1) < (int)local_b0);
    }
    if (local_a8 != (void *)0x0) {
      FMemory::Free(local_a8);
    }
    if (local_b8 != (void *)0x0) {
      FMemory::Free(local_b8);
    }
  }
  return;
}

// AsyncTermBody @ 1481d4e60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl FBodyInstance::AsyncTermBody(FAsyncTermBodyPayload *param_1)

{
  int *piVar1;
  FPhysScene_Chaos *this;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_TermBody> FVar8;
  UPrimitiveComponent *this_00;
  UWorld *pUVar9;
  FChaosScene *pFVar10;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar11;
  FNameEntryId FVar12;
  FName FVar13;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FStatMessage local_38;
  
  FVar8 = StatPtr_STAT_TermBody;
  if (StatPtr_STAT_TermBody == (FThreadSafeStaticStat<FStat_STAT_TermBody>)0x0) {
    pFVar7 = ::FName::FName(&local_res20,"STAT_TermBody");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_TermBody>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TermBody,*pFVar7,L"Term Body",
                       "STATGROUP_Physics","STATCAT_Advanced",L"Physics",true,true,ST_int64,true,
                       false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar11 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar11 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar12.Value;
        local_res10.Number = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                   ,0x71e);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar12.Value;
      local_res18.s.HighPart = uVar11;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar4 = true;
      goto LAB_1481d4fae;
    }
  }
  bVar4 = false;
  FVar13.ComparisonIndex.Value = 0;
  FVar13.Number = 0;
LAB_1481d4fae:
  this_00 = (UPrimitiveComponent *)FWeakObjectPtr::Get(&(param_1->OwnerComponent).WeakPtr);
  if (this_00 != (UPrimitiveComponent *)0x0) {
    pUVar9 = *(UWorld **)&this_00->field_0xb0;
    if (pUVar9 == (UWorld *)0x0) {
      pUVar9 = UActorComponent::GetWorld_Uncached((UActorComponent *)this_00);
    }
    this = pUVar9->PhysicsScene;
    if (this != (FPhysScene_Chaos *)0x0) {
      if (param_1->ActorHandle != (FSingleParticlePhysicsProxy *)0x0) {
        FPhysScene_Chaos::RemoveFromComponentMaps(this,(IPhysicsProxyBase *)param_1->ActorHandle);
      }
      if (param_1->bNotifyRigidBodyCollision != false) {
        FPhysScene_Chaos::UnRegisterForCollisionEvents(this,this_00);
      }
    }
  }
  if (param_1->ActorHandle != (FSingleParticlePhysicsProxy *)0x0) {
    pFVar10 = FChaosEngineInterface::GetCurrentScene(&param_1->ActorHandle);
    FChaosEngineInterface::ReleaseActor(&param_1->ActorHandle,pFVar10,false);
    if (param_1->ActorHandle != (FSingleParticlePhysicsProxy *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!FPhysicsInterface::IsValid(Payload.ActorHandle)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                         ,0x735,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_38.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_38);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

// BuildBodyCollisionFlags @ 1481d5750

void __cdecl
FBodyInstance::BuildBodyCollisionFlags(FBodyCollisionFlags *param_1,Type param_2,bool param_3)

{
  bool bVar1;
  
  param_1->bEnableSimCollisionComplex = false;
  param_1->bEnableQueryCollision = false;
  param_1->bEnableSimCollisionSimple = false;
  param_1->bEnableProbeCollision = false;
  if (param_2 != NoCollision) {
    if (((param_2 - QueryOnly & 0xfffffff9) == 0) && (param_2 != (ProbeOnly|QueryAndPhysics))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    param_1->bEnableQueryCollision = bVar1;
    bVar1 = param_2 - ProbeOnly < 2;
    if ((SimCollisionEnabled != 0) && ((bVar1 || (param_2 - PhysicsOnly < 2)))) {
      param_1->bEnableProbeCollision = bVar1;
      param_1->bEnableSimCollisionSimple = true;
      if (param_3) {
        param_1->bEnableSimCollisionComplex = true;
      }
    }
  }
  return;
}

// BuildBodyFilterData @ 1481d57c0

void __thiscall
FBodyInstance::BuildBodyFilterData
          (FBodyInstance *this,FBodyCollisionFilterData *param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  int iVar5;
  bool bVar6;
  char cVar7;
  bool bVar8;
  TEnumAsByte<ECollisionTraceFlag> TVar9;
  Type TVar10;
  Type TVar11;
  Type TVar12;
  UObject *pUVar13;
  UObject *pUVar14;
  UClass *pUVar15;
  UObject *pUVar16;
  FCollisionResponseContainer *pFVar17;
  UBodySetupCore *pUVar18;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  FBodyInstance *pFVar19;
  byte bVar20;
  Type TVar21;
  TEnumAsByte<ECollisionChannel> local_d4;
  FCollisionResponseContainer_u_0 local_c8;
  FCollisionResponseContainer_u_0 local_a8;
  FCollisionResponseContainer_u_0 local_88;
  FCollisionResponseContainer local_68;
  UObject *pUVar22;
  
  bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
  if (!bVar6) {
    return;
  }
  pUVar13 = FWeakObjectPtr::Get(&(this->OwnerComponent).WeakPtr);
  pUVar14 = FWeakObjectPtr::Get(&(this->SourceObject).WeakPtr);
  pUVar22 = (UObject *)0x0;
  TVar21 = NoCollision;
  if (pUVar14 == (UObject *)0x0) {
LAB_1481d5865:
    pUVar14 = pUVar22;
    if (pUVar13 == (UObject *)0x0) goto LAB_1481d5888;
    pUVar14 = *(UObject **)&pUVar13[4].field_0x8;
LAB_1481d5874:
    cVar7 = (**(code **)(*(longlong *)pUVar13 + 0x5d8))(pUVar13);
    bVar6 = false;
    if (cVar7 != '\0') goto LAB_1481d5888;
  }
  else {
    pUVar15 = Z_Construct_UClass_AActor_NoRegister();
    iVar5 = (int)pUVar15->_padding_;
    if ((*(int *)(*(longlong *)&pUVar14->field_0x10 + 0x38) < iVar5) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar14->field_0x10 + 0x30) + (longlong)iVar5 * 8) !=
        &pUVar15->_padding_)) goto LAB_1481d5865;
    if (pUVar13 != (UObject *)0x0) goto LAB_1481d5874;
LAB_1481d5888:
    bVar6 = true;
  }
  if (param_2 == -1) {
    TVar10 = GetCollisionEnabled(this,true);
  }
  else {
    TVar11 = GetShapeCollisionEnabled(this,param_2);
    TVar12 = GetCollisionEnabled(this,true);
    TVar10 = TVar21;
    if ((-1 < (int)(TVar12 - QueryOnly)) && (-1 < (int)(TVar11 - QueryOnly))) {
      TVar10 = *(Type *)(L"Trail Particles" +
                        ((longlong)(int)TVar12 * 5 + (longlong)(int)TVar11) * 2 + 8);
    }
  }
  local_c8._0_8_ = *(undefined8 *)&(this->CollisionResponses).ResponseToChannels.field0_0x0;
  local_c8._8_8_ =
       *(undefined8 *)((longlong)&(this->CollisionResponses).ResponseToChannels.field0_0x0 + 8);
  local_d4.Value = (this->ObjectType).Value;
  local_c8._16_8_ =
       *(undefined8 *)((longlong)&(this->CollisionResponses).ResponseToChannels.field0_0x0 + 0x10);
  local_c8._24_8_ =
       *(undefined8 *)((longlong)&(this->CollisionResponses).ResponseToChannels.field0_0x0 + 0x18);
  bVar20 = this->bNotifyRigidBodyCollision;
  if (pUVar13 == (UObject *)0x0) goto LAB_1481d5a7e;
  pUVar15 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
  iVar5 = (int)pUVar15->_padding_;
  if ((*(int *)(*(longlong *)&pUVar13->field_0x10 + 0x38) < iVar5) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&pUVar13->field_0x10 + 0x30) + (longlong)iVar5 * 8) !=
      &pUVar15->_padding_)) goto LAB_1481d5a7e;
  local_a8._0_8_ = CVarEnableDynamicPerBodyFilterHacks.Ref;
  bVar8 = IsInParallelGameThread();
  if (bVar8) {
LAB_1481d5965:
    pUVar16 = pUVar22;
  }
  else {
    bVar8 = IsInGameThread();
    pUVar16 = (UObject *)&DAT_00000004;
    if (bVar8) goto LAB_1481d5965;
  }
  if ((*(int *)(&pUVar16->field_0x0 + local_a8._0_8_) == 0) ||
     (this->bHACK_DisableCollisionResponse == '\0')) {
    pUVar16 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    if (pUVar16[1].field_0xa == '\0') {
      FCollisionResponseContainer::SetAllChannels
                ((FCollisionResponseContainer *)&local_c8._s_0,ECR_Block);
    }
    else {
      pUVar16 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
      if (pUVar16[1].field_0xa == '\x01') goto LAB_1481d59a4;
    }
  }
  else {
LAB_1481d59a4:
    FCollisionResponseContainer::SetAllChannels
              ((FCollisionResponseContainer *)&local_c8._s_0,ECR_Ignore);
    TVar10 = PhysicsOnly;
  }
  local_a8._0_8_ = CVarEnableDynamicPerBodyFilterHacks.Ref;
  bVar8 = IsInParallelGameThread();
  if ((bVar8) || (bVar8 = IsInGameThread(), pUVar16 = (UObject *)&DAT_00000004, bVar8)) {
    pUVar16 = pUVar22;
  }
  if ((*(int *)(&pUVar16->field_0x0 + local_a8._0_8_) == 0) ||
     (this->bHACK_DisableSkelComponentFilterOverriding == '\0')) {
    local_d4.Value = (**(code **)(*(longlong *)pUVar13 + 0x5f0))(pUVar13);
    pFVar17 = FCollisionResponseContainer::CreateMinContainer
                        ((FCollisionResponseContainer *)&local_a8._s_0,
                         (FCollisionResponseContainer *)&local_c8._s_0,
                         (FCollisionResponseContainer *)&pUVar13[0x19].field_0x10);
    local_c8._0_8_ = *(undefined8 *)&pFVar17->field0_0x0;
    local_c8._8_8_ = *(undefined8 *)((longlong)&pFVar17->field0_0x0 + 8);
    local_c8._16_4_ = *(undefined4 *)((longlong)&pFVar17->field0_0x0 + 0x10);
    local_c8._20_4_ = *(undefined4 *)((longlong)&pFVar17->field0_0x0 + 0x14);
    local_c8._24_4_ = *(undefined4 *)((longlong)&pFVar17->field0_0x0 + 0x18);
    local_c8._28_4_ = *(undefined4 *)((longlong)&pFVar17->field0_0x0 + 0x1c);
  }
  else {
    local_c8._0_8_ = *(undefined8 *)&(this->CollisionResponses).ResponseToChannels.field0_0x0;
    local_c8._8_8_ =
         *(undefined8 *)((longlong)&(this->CollisionResponses).ResponseToChannels.field0_0x0 + 8);
    local_c8._16_4_ =
         *(undefined4 *)((longlong)&(this->CollisionResponses).ResponseToChannels.field0_0x0 + 0x10)
    ;
    local_c8._20_4_ =
         *(undefined4 *)((longlong)&(this->CollisionResponses).ResponseToChannels.field0_0x0 + 0x14)
    ;
    local_c8._24_4_ =
         *(undefined4 *)((longlong)&(this->CollisionResponses).ResponseToChannels.field0_0x0 + 0x18)
    ;
    local_c8._28_4_ =
         *(undefined4 *)((longlong)&(this->CollisionResponses).ResponseToChannels.field0_0x0 + 0x1c)
    ;
  }
  if (param_2 != -1) {
    pFVar17 = GetShapeResponseToChannels(this,param_2,(FCollisionResponseContainer *)&local_c8._s_0)
    ;
    local_88._0_8_ = *(undefined8 *)&pFVar17->field0_0x0;
    local_88._8_8_ = *(undefined8 *)((longlong)&pFVar17->field0_0x0 + 8);
    local_88._16_8_ = *(undefined8 *)((longlong)&pFVar17->field0_0x0 + 0x10);
    local_88._24_8_ = *(undefined8 *)((longlong)&pFVar17->field0_0x0 + 0x18);
    pFVar17 = FCollisionResponseContainer::CreateMinContainer
                        (&local_68,(FCollisionResponseContainer *)&local_c8._s_0,
                         (FCollisionResponseContainer *)&local_88._s_0);
    local_c8._0_8_ = *(undefined8 *)&pFVar17->field0_0x0;
    local_c8._8_8_ = *(undefined8 *)((longlong)&pFVar17->field0_0x0 + 8);
    local_c8._16_8_ = *(undefined8 *)((longlong)&pFVar17->field0_0x0 + 0x10);
    local_c8._24_8_ = *(undefined8 *)((longlong)&pFVar17->field0_0x0 + 0x18);
  }
  if ((bVar20 == 0) || ((pUVar13[0x18].field_0xb & 0x40) == 0)) {
    bVar20 = 0;
  }
  else {
    bVar20 = 1;
  }
LAB_1481d5a7e:
  pUVar18 = (UBodySetupCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  TVar9 = UBodySetupCore::GetCollisionTraceFlag(pUVar18);
  cVar7 = *(char *)CONCAT71(extraout_var,TVar9.Value);
  pUVar18 = (UBodySetupCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  TVar9 = UBodySetupCore::GetCollisionTraceFlag(pUVar18);
  cVar1 = *(char *)CONCAT71(extraout_var_00,TVar9.Value);
  if (TVar10 != NoCollision) {
    pFVar19 = this;
    if (this->WeldParent != (FBodyInstance *)0x0) {
      pFVar19 = this->WeldParent;
    }
    bVar8 = FWeakObjectPtr::IsValid(&(this->SourceObject).WeakPtr);
    if (bVar8) {
      pUVar14 = FWeakObjectPtr::Get(&(this->SourceObject).WeakPtr);
      TVar10 = *(Type *)&pUVar14->field_0xc;
    }
    else {
      TVar10 = TVar21;
      if (pUVar14 != (UObject *)0x0) {
        TVar10 = *(Type *)&pUVar14->field_0xc;
      }
    }
    if (pUVar13 != (UObject *)0x0) {
      TVar21 = *(Type *)&pUVar13->field_0xc;
    }
    if ((pFVar19->bUseCCD == 0) || (bVar6)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    iVar5 = this->InstanceBodyIndex;
    FPhysicsFilterBuilder::FPhysicsFilterBuilder
              ((FPhysicsFilterBuilder *)&local_a8._s_0,local_d4,this->MaskFilter,
               (FCollisionResponseContainer *)&local_c8._s_0);
    if (bVar8) {
      local_a8._8_4_ = local_a8._8_4_ | 4;
    }
    if (bVar20 != 0) {
      local_a8._8_4_ = local_a8._8_4_ | 8;
    }
    if (bVar6) {
      local_a8._8_4_ = local_a8._8_4_ | 0x10;
    }
    if ((bool)this->bContactModification) {
      local_a8._8_4_ = local_a8._8_4_ | 0x20;
    }
    uVar3 = (undefined4)local_a8._0_8_;
    (param_1->SimFilter).Word0 = (uint)(ushort)iVar5;
    (param_1->SimFilter).Word1 = uVar3;
    (param_1->SimFilter).Word2 = TVar21;
    (param_1->SimFilter).Word3 = local_a8._8_4_;
    local_88._8_8_ = CONCAT44(local_a8._8_4_,local_a8._4_4_) | 0x100000000;
    if (cVar1 == '\x02') {
      local_88._8_8_ = CONCAT44(local_a8._8_4_,local_a8._4_4_) | 0x300000000;
    }
    local_c8._8_8_ = CONCAT44(local_a8._8_4_,local_a8._4_4_) | 0x200000000;
    if (cVar7 == '\x03') {
      local_c8._8_8_ = CONCAT44(local_a8._8_4_,local_a8._4_4_) | 0x300000000;
    }
    (param_1->QuerySimpleFilter).Word0 = TVar10;
    (param_1->QuerySimpleFilter).Word1 = uVar3;
    (param_1->QuerySimpleFilter).Word2 = local_88._8_4_;
    (param_1->QuerySimpleFilter).Word3 = local_88._12_4_;
    (param_1->QueryComplexFilter).Word0 = TVar10;
    (param_1->QueryComplexFilter).Word1 = uVar3;
    (param_1->QueryComplexFilter).Word2 = local_c8._8_4_;
    (param_1->QueryComplexFilter).Word3 = local_c8._12_4_;
  }
  return;
}

// ClearExternalCollisionProfile @ 1481da0a0

void __thiscall FBodyInstance::ClearExternalCollisionProfile(FBodyInstance *this)

{
  FWeakObjectPtr local_res8;
  undefined8 local_res10 [3];
  
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  (this->ExternalCollisionProfileBodySetup).WeakPtr = local_res8;
  LoadProfileData(this,false);
  return;
}

// ClearForces @ 1481da0f0

void __thiscall FBodyInstance::ClearForces(FBodyInstance *this,bool param_1)

{
  FSingleParticlePhysicsProxy *local_res8;
  undefined1 local_res10 [24];
  FBodyInstance *local_28;
  undefined1 *local_20;
  code *local_18;
  FBodyInstance **local_10;
  
  local_20 = local_res10;
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FBodyInstance::ClearForces'::__l2::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
             ::Call;
  local_res8 = this->ActorHandle;
  local_res10[0] = param_1;
  local_28 = this;
  FPhysInterface_Chaos::ExecuteWrite
            (&local_res8,
             (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_18);
  return;
}

// ClearTorques @ 1481da200

void __thiscall FBodyInstance::ClearTorques(FBodyInstance *this,bool param_1)

{
  FSingleParticlePhysicsProxy *local_res8;
  undefined1 local_res10 [24];
  FBodyInstance *local_28;
  undefined1 *local_20;
  code *local_18;
  FBodyInstance **local_10;
  
  local_20 = local_res10;
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FBodyInstance::ClearTorques'::__l2::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
             ::Call;
  local_res8 = this->ActorHandle;
  local_res10[0] = param_1;
  local_28 = this;
  FPhysInterface_Chaos::ExecuteWrite
            (&local_res8,
             (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_18);
  return;
}

// CopyBodyInstancePropertiesFrom @ 1481dbde0

void __thiscall
FBodyInstance::CopyBodyInstancePropertiesFrom(FBodyInstance *this,FBodyInstance *param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  
  if (param_1 == (FBodyInstance *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FromInst",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                       ,0xbc4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pUVar3 = FWeakObjectPtr::Get(&(param_1->OwnerComponent).WeakPtr);
  if (pUVar3 != (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FromInst->OwnerComponent.Get() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                       ,0xbc5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
  if (pUVar3 != (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FromInst->BodySetup.Get() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                       ,0xbc6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1->ActorHandle != (FSingleParticlePhysicsProxy *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!FPhysicsInterface::IsValid(FromInst->GetPhysicsActor())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                       ,0xbc7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->ActorHandle != (FSingleParticlePhysicsProxy *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!FPhysicsInterface::IsValid(GetPhysicsActor())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                       ,0xbc8,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  operator=(this,param_1);
  return;
}

// CopyRuntimeBodyInstancePropertiesFrom @ 1481dc180

void __thiscall
FBodyInstance::CopyRuntimeBodyInstancePropertiesFrom(FBodyInstance *this,FBodyInstance *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined3 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  
  if (param_1 == (FBodyInstance *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("FromInst",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                       ,0xbcf,L"");
    if (bVar7) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1->bPendingCollisionProfileSetup != 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!FromInst->bPendingCollisionProfileSetup",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                       ,0xbd0,L"");
    if (bVar7) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1->bOverrideWalkableSlopeOnInstance != '\0') {
    this->bOverrideWalkableSlopeOnInstance = '\x01';
    uVar3 = *(undefined3 *)&(param_1->WalkableSlopeOverride).field_0x1;
    fVar4 = (param_1->WalkableSlopeOverride).WalkableSlopeAngle;
    fVar5 = (param_1->WalkableSlopeOverride).CachedSlopeAngle;
    fVar6 = (param_1->WalkableSlopeOverride).CachedSlopeCos;
    (this->WalkableSlopeOverride).WalkableSlopeBehavior =
         (TEnumAsByte<EWalkableSlopeBehavior>)
         (param_1->WalkableSlopeOverride).WalkableSlopeBehavior.Value;
    *(undefined3 *)&(this->WalkableSlopeOverride).field_0x1 = uVar3;
    (this->WalkableSlopeOverride).WalkableSlopeAngle = fVar4;
    (this->WalkableSlopeOverride).CachedSlopeAngle = fVar5;
    (this->WalkableSlopeOverride).CachedSlopeCos = fVar6;
  }
  uVar2 = *(undefined8 *)
           ((longlong)&(param_1->CollisionResponses).ResponseToChannels.field0_0x0 + 8);
  *(undefined8 *)&(this->CollisionResponses).ResponseToChannels.field0_0x0 =
       *(undefined8 *)&(param_1->CollisionResponses).ResponseToChannels.field0_0x0;
  *(undefined8 *)((longlong)&(this->CollisionResponses).ResponseToChannels.field0_0x0 + 8) = uVar2;
  uVar2 = *(undefined8 *)
           ((longlong)&(param_1->CollisionResponses).ResponseToChannels.field0_0x0 + 0x18);
  *(undefined8 *)((longlong)&(this->CollisionResponses).ResponseToChannels.field0_0x0 + 0x10) =
       *(undefined8 *)
        ((longlong)&(param_1->CollisionResponses).ResponseToChannels.field0_0x0 + 0x10);
  *(undefined8 *)((longlong)&(this->CollisionResponses).ResponseToChannels.field0_0x0 + 0x18) =
       uVar2;
  TArray<FResponseChannel,TSizedDefaultAllocator<32>_>::operator=
            (&(this->CollisionResponses).ResponseArray,&(param_1->CollisionResponses).ResponseArray)
  ;
  this->CollisionProfileName = param_1->CollisionProfileName;
  (this->CollisionEnabled).Value = (param_1->CollisionEnabled).Value;
  UpdatePhysicsFilterData(this);
  return;
}

// CreateDOFLock @ 1481dd8d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FBodyInstance::CreateDOFLock(FBodyInstance *this)

{
  undefined1 *puVar1;
  int *piVar2;
  uchar uVar3;
  uchar uVar4;
  byte bVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 uVar11;
  bool bVar12;
  uchar uVar13;
  UPhysicsSettings *pUVar14;
  FConstraintInstance *pFVar15;
  UObject *pUVar16;
  uint uVar17;
  uint uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  double dVar36;
  undefined1 auVar37 [16];
  double dVar39;
  undefined4 uVar40;
  undefined1 auVar38 [16];
  uint uVar41;
  uint uVar42;
  double dVar47;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auStackY_208 [32];
  undefined1 local_1c8 [8];
  undefined1 local_1c0 [8];
  undefined1 local_1b8 [16];
  double local_1a8;
  FSingleParticlePhysicsProxy *local_1a0 [2];
  FSingleParticlePhysicsProxy *local_190;
  TVector<double>_u_0 local_188;
  undefined1 local_170 [16];
  undefined8 local_160;
  TVector<double>_u_0 local_158;
  code *local_140;
  double **local_138;
  double *local_130;
  FBodyInstance *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  TVector<double> local_110;
  double local_f8 [2];
  double local_e8 [2];
  double local_d8 [2];
  double local_c8 [2];
  double local_b8 [2];
  double local_a8 [2];
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_208;
  if (this->DOFConstraint != (FConstraintInstance *)0x0) {
    FConstraintInstance::TermConstraint(this->DOFConstraint);
    FConstraintInstance::Free(this->DOFConstraint);
    this->DOFConstraint = (FConstraintInstance *)0x0;
  }
  dVar31 = __real_3ff0000000000000;
  uVar13 = (this->DOFMode).Value;
  uVar41 = SUB84(__real_3ff0000000000000,0);
  uVar42 = (uint)((ulonglong)__real_3ff0000000000000 >> 0x20);
  if (uVar13 == '\0') {
    pUVar14 = UPhysicsSettings::Get();
    uVar3 = (pUVar14->DefaultDegreesOfFreedom).Value;
    if (uVar3 == '\x03') goto switchD_1481dd992_caseD_4;
    if (uVar3 == '\x02') goto switchD_1481dd992_caseD_3;
    if (uVar3 == '\x01') goto switchD_1481dd992_caseD_2;
    if (uVar3 != '\0') goto LAB_1481dd977;
    goto switchD_1481dd992_caseD_1;
  }
LAB_1481dd977:
  switch(uVar13) {
  case '\x02':
switchD_1481dd992_caseD_2:
    uVar41 = 0;
    uVar42 = 0;
    local_1a8 = 0.0;
    auVar19 = ___xmm_00000000000000003ff0000000000000;
    break;
  case '\x03':
switchD_1481dd992_caseD_3:
    uVar41 = 0;
    uVar42 = 0;
    local_1a8 = 0.0;
    auVar19 = ___xmm_3ff00000000000000000000000000000;
    break;
  case '\x04':
switchD_1481dd992_caseD_4:
    auVar19 = ZEXT816(0);
    local_1a8 = dVar31;
    break;
  case '\x05':
    local_1a8 = *(double *)((longlong)&(this->CustomDOFPlaneNormal).field0_0x0 + 0x10);
    uVar41 = SUB84(local_1a8,0);
    uVar42 = (uint)((ulonglong)local_1a8 >> 0x20);
    auVar19 = *(undefined1 (*) [16])&(this->CustomDOFPlaneNormal).field0_0x0;
    break;
  case '\x06':
    uVar41 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
    uVar42 = (uint)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
    auVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_16_;
    local_1a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    break;
  default:
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                        ,0x33d,L"");
    if (bVar12) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  case '\x01':
switchD_1481dd992_caseD_1:
    uVar41 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
    uVar42 = (uint)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
    auVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_16_;
    local_1a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  uVar13 = (this->DOFMode).Value;
  if (uVar13 == '\0') {
    pUVar14 = UPhysicsSettings::Get();
    uVar3 = (pUVar14->DefaultDegreesOfFreedom).Value;
    if (uVar3 == '\x03') {
      uVar13 = '\x04';
    }
    else if (uVar3 == '\x02') {
      uVar13 = '\x03';
    }
    else if (uVar3 == '\x01') {
      uVar13 = '\x02';
    }
    else if (uVar3 == '\0') {
      uVar13 = '\x01';
    }
  }
  local_190 = this->ActorHandle;
  bVar12 = FChaosEngineInterface::IsDynamic(&local_190);
  if (!bVar12) {
    return;
  }
  uVar17 = auVar19._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar18 = auVar19._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar18,uVar17) &&
        (double)CONCAT44(uVar18,uVar17) != __real_3f1a36e2e0000000) ||
      (uVar17 = auVar19._8_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar18 = auVar19._12_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar18,uVar17) &&
      (double)CONCAT44(uVar18,uVar17) != __real_3f1a36e2e0000000)) ||
     (__real_3f1a36e2e0000000 <=
      (double)CONCAT44(uVar42 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       uVar41 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) &&
      (double)CONCAT44(uVar42 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       uVar41 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) !=
      __real_3f1a36e2e0000000)) {
    if (uVar13 != '\x01') goto LAB_1481ddb01;
  }
  else if (uVar13 != '\x01') {
    return;
  }
  if (((this->bLockXTranslation == '\0' &&
        (this->bLockYTranslation == '\0' &&
        (this->bLockZTranslation == '\0' && this->bLockXRotation == '\0'))) &&
      (!(bool)this->bLockYRotation)) && (this->bLockZRotation == 0)) {
    return;
  }
LAB_1481ddb01:
  pFVar15 = FConstraintInstance::Alloc();
  this->DOFConstraint = pFVar15;
  local_1c0[0] = 0;
  local_1c8[0] = 0;
  piVar2 = &(pFVar15->ProfileInstance).ConeLimit._padding_;
  *(byte *)piVar2 = (byte)*piVar2 & 0xfe;
  puVar1 = &(this->DOFConstraint->ProfileInstance).TwistLimit.field_0x10;
  *puVar1 = *puVar1 & 0xfe;
  puVar1 = &(this->DOFConstraint->ProfileInstance).LinearLimit.field_0x10;
  *puVar1 = *puVar1 & 0xfe;
  local_130 = local_f8;
  local_120 = local_1c8;
  local_118 = local_1c0;
  local_138 = &local_130;
  local_f8[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
  local_f8[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
  local_e8[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
  local_e8[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
  local_140 = UE::Core::Private::Function::
              TFunctionRefCaller<`FBodyInstance::GetUnrealWorldTransform'::__l2::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
              ::Call;
  local_1a0[0] = this->ActorHandle;
  local_d8[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
  local_d8[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
  local_c8[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
  local_c8[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
  local_b8[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
  local_b8[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
  local_a8[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
  local_a8[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
  local_128 = this;
  FPhysInterface_Chaos::ExecuteRead
            (local_1a0,
             (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_140)
  ;
  auVar48 = ___xmm_00000000000000003ff0000000000000;
  auVar49 = ___xmm_3ff00000000000000000000000000000;
  pFVar15 = this->DOFConstraint;
  local_158._s_0.Z = 0.0;
  local_188._s_0.Z = 0.0;
  local_188._0_16_ = ___xmm_3ff00000000000000000000000000000;
  if (uVar13 == '\x01') {
    (pFVar15->ProfileInstance).TwistLimit.TwistMotion.Value = (byte)this->field_0x3c >> 5 & 2;
    FConstraintInstance::UpdateAngularLimit(pFVar15);
    pFVar15 = this->DOFConstraint;
    (pFVar15->ProfileInstance).ConeLimit.Swing2Motion.Value = (char)this->field_0x3c >> 7 & 2;
    FConstraintInstance::UpdateAngularLimit(pFVar15);
    pFVar15 = this->DOFConstraint;
    (pFVar15->ProfileInstance).ConeLimit.Swing1Motion.Value = this->bLockZRotation * '\x02';
    FConstraintInstance::UpdateAngularLimit(pFVar15);
    pFVar15 = this->DOFConstraint;
    bVar5 = this->field_0x3c;
    uVar13 = (pFVar15->ProfileInstance).LinearLimit.ZMotion.Value;
    uVar3 = (pFVar15->ProfileInstance).LinearLimit.YMotion.Value;
    (pFVar15->ProfileInstance).LinearLimit.Limit = (pFVar15->ProfileInstance).LinearLimit.Limit;
    (pFVar15->ProfileInstance).LinearLimit.YMotion.Value = uVar3;
    (pFVar15->ProfileInstance).LinearLimit.ZMotion.Value = uVar13;
    (pFVar15->ProfileInstance).LinearLimit.XMotion.Value = bVar5 >> 2 & 2;
    FConstraintInstance::UpdateLinearLimit(pFVar15);
    pFVar15 = this->DOFConstraint;
    bVar5 = this->field_0x3c;
    uVar13 = (pFVar15->ProfileInstance).LinearLimit.ZMotion.Value;
    (pFVar15->ProfileInstance).LinearLimit.Limit = (pFVar15->ProfileInstance).LinearLimit.Limit;
    (pFVar15->ProfileInstance).LinearLimit.ZMotion.Value = uVar13;
    (pFVar15->ProfileInstance).LinearLimit.YMotion.Value = bVar5 >> 3 & 2;
    FConstraintInstance::UpdateLinearLimit(pFVar15);
    pFVar15 = this->DOFConstraint;
    bVar5 = this->field_0x3c;
    uVar13 = (pFVar15->ProfileInstance).LinearLimit.YMotion.Value;
    (pFVar15->ProfileInstance).LinearLimit.Limit = (pFVar15->ProfileInstance).LinearLimit.Limit;
    (pFVar15->ProfileInstance).LinearLimit.YMotion.Value = uVar13;
    (pFVar15->ProfileInstance).LinearLimit.ZMotion.Value = bVar5 >> 4 & 2;
    FConstraintInstance::UpdateLinearLimit(pFVar15);
    uVar11 = local_158._s_0.Z;
  }
  else {
    if ((this->bLockRotation == '\0') && ((this->DOFMode).Value == '\x05')) {
      uVar13 = '\0';
    }
    else {
      uVar13 = '\x02';
    }
    (pFVar15->ProfileInstance).ConeLimit.Swing1Motion.Value = uVar13;
    FConstraintInstance::UpdateAngularLimit(pFVar15);
    pFVar15 = this->DOFConstraint;
    if ((this->bLockRotation == '\0') && ((this->DOFMode).Value == '\x05')) {
      uVar13 = '\0';
    }
    else {
      uVar13 = '\x02';
    }
    (pFVar15->ProfileInstance).ConeLimit.Swing2Motion.Value = uVar13;
    FConstraintInstance::UpdateAngularLimit(pFVar15);
    pFVar15 = this->DOFConstraint;
    (pFVar15->ProfileInstance).TwistLimit.TwistMotion.Value = '\0';
    FConstraintInstance::UpdateAngularLimit(pFVar15);
    pFVar15 = this->DOFConstraint;
    if ((this->bLockTranslation == '\0') && ((this->DOFMode).Value == '\x05')) {
      uVar13 = '\0';
    }
    else {
      uVar13 = '\x02';
    }
    uVar3 = (pFVar15->ProfileInstance).LinearLimit.ZMotion.Value;
    uVar4 = (pFVar15->ProfileInstance).LinearLimit.YMotion.Value;
    (pFVar15->ProfileInstance).LinearLimit.Limit = (pFVar15->ProfileInstance).LinearLimit.Limit;
    (pFVar15->ProfileInstance).LinearLimit.YMotion.Value = uVar4;
    (pFVar15->ProfileInstance).LinearLimit.ZMotion.Value = uVar3;
    (pFVar15->ProfileInstance).LinearLimit.XMotion.Value = uVar13;
    FConstraintInstance::UpdateLinearLimit(pFVar15);
    pFVar15 = this->DOFConstraint;
    uVar13 = (pFVar15->ProfileInstance).LinearLimit.ZMotion.Value;
    (pFVar15->ProfileInstance).LinearLimit.Limit = (pFVar15->ProfileInstance).LinearLimit.Limit;
    (pFVar15->ProfileInstance).LinearLimit.ZMotion.Value = uVar13;
    (pFVar15->ProfileInstance).LinearLimit.YMotion.Value = '\0';
    FConstraintInstance::UpdateLinearLimit(pFVar15);
    pFVar15 = this->DOFConstraint;
    uVar13 = (pFVar15->ProfileInstance).LinearLimit.YMotion.Value;
    (pFVar15->ProfileInstance).LinearLimit.Limit = (pFVar15->ProfileInstance).LinearLimit.Limit;
    (pFVar15->ProfileInstance).LinearLimit.YMotion.Value = uVar13;
    (pFVar15->ProfileInstance).LinearLimit.ZMotion.Value = '\0';
    FConstraintInstance::UpdateLinearLimit(pFVar15);
    dVar35 = auVar19._0_8_;
    dVar8 = auVar19._8_8_;
    dVar26 = dVar35 * dVar35 + dVar8 * dVar8 +
             (double)CONCAT44(uVar42,uVar41) * (double)CONCAT44(uVar42,uVar41);
    uVar11 = local_1a8;
    if ((dVar26 != dVar31) &&
       (auVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_16_,
       uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
       __real_3e45798ee0000000 <= dVar26)) {
      dVar31 = dVar31 / SQRT(dVar26);
      local_160 = dVar31 * (double)CONCAT44(uVar42,uVar41);
      auVar19._8_8_ = dVar8 * dVar31;
      auVar19._0_8_ = dVar35 * dVar31;
      uVar11 = local_160;
    }
    local_158._0_16_ = auVar19;
    local_158._s_0.Z = (double)uVar11;
    UE::Math::TVector<double>::FindBestAxisVectors
              ((TVector<double> *)&local_158._s_0,&local_110,(TVector<double> *)&local_188._s_0);
    auVar48 = auVar19;
    auVar49 = local_188._0_16_;
  }
  dVar35 = local_f8[0] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar26 = local_f8[1] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  pFVar15 = this->DOFConstraint;
  dVar31 = local_e8[0] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar8 = local_e8[1] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar32._8_4_ = SUB84(dVar26,0);
  auVar32._0_8_ = dVar35;
  auVar32._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
  auVar33._8_4_ = SUB84(dVar8,0);
  auVar33._0_8_ = dVar31;
  auVar33._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  auVar33 = blendpd(auVar32,auVar33,2);
  dVar47 = auVar48._8_8_;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar11;
  auVar19 = blendpd(auVar48,auVar9,2);
  auVar43._0_8_ = dVar47 * dVar35 - dVar26 * auVar48._0_8_;
  auVar43._8_8_ = (double)uVar11 * dVar26 - dVar31 * dVar47;
  auVar37._8_4_ = SUB84(auVar43._8_8_,0);
  auVar37._0_8_ = auVar43._0_8_;
  auVar37._12_4_ = (int)((ulonglong)auVar43._8_8_ >> 0x20);
  auVar20._0_8_ = auVar19._0_8_ * dVar31 - auVar33._0_8_ * (double)uVar11;
  auVar20._8_8_ = auVar19._8_8_ * dVar8 - auVar33._8_8_ * 0.0;
  auVar19 = blendpd(auVar43,auVar20,2);
  auVar44._0_8_ = auVar19._0_8_ + auVar19._0_8_;
  auVar44._8_8_ = auVar19._8_8_ + auVar19._8_8_;
  dVar36 = auVar37._8_8_ + auVar37._8_8_;
  dVar39 = auVar20._0_8_ + auVar20._0_8_;
  auVar27._8_4_ = SUB84(dVar39,0);
  auVar27._0_8_ = dVar36;
  uVar40 = (undefined4)((ulonglong)dVar39 >> 0x20);
  auVar27._12_4_ = uVar40;
  auVar21._8_4_ = SUB84(dVar39,0);
  auVar21._0_8_ = dVar36;
  auVar21._12_4_ = uVar40;
  auVar19 = blendpd(auVar21,auVar44,2);
  auVar28._0_8_ = auVar27._8_8_ * dVar35 - dVar36 * dVar26;
  auVar28._8_8_ = auVar44._0_8_ * dVar26 - dVar39 * dVar31;
  auVar22._0_8_ = auVar19._0_8_ * dVar31 - auVar44._0_8_ * auVar33._0_8_;
  auVar22._8_8_ = auVar19._8_8_ * dVar8 - auVar44._8_8_ * auVar33._8_8_;
  auVar19 = blendpd(auVar28,auVar22,2);
  (pFVar15->PriAxis1).field0_0x0._s_0.X = dVar36 * dVar8 + auVar48._0_8_ + auVar28._8_8_;
  (pFVar15->PriAxis1).field0_0x0._s_0.Y = dVar39 * dVar8 + dVar47 + auVar22._0_8_;
  (pFVar15->PriAxis1).field0_0x0._s_0.Z = auVar44._0_8_ * dVar8 + (double)uVar11 + auVar19._0_8_;
  dVar35 = local_f8[0] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar26 = local_f8[1] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar31 = local_e8[0] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar8 = local_e8[1] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar47 = auVar49._8_8_;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = local_188._s_0.Z;
  auVar19 = blendpd(auVar49,auVar10,2);
  auVar34._8_4_ = SUB84(dVar26,0);
  auVar34._0_8_ = dVar35;
  auVar34._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
  auVar7._8_4_ = SUB84(dVar8,0);
  auVar7._0_8_ = dVar31;
  auVar7._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  auVar33 = blendpd(auVar34,auVar7,2);
  auVar45._0_8_ = dVar47 * dVar35 - dVar26 * auVar49._0_8_;
  auVar45._8_8_ = local_188._s_0.Z * dVar26 - dVar31 * dVar47;
  auVar38._8_4_ = SUB84(auVar45._8_8_,0);
  auVar38._0_8_ = auVar45._0_8_;
  auVar38._12_4_ = (int)((ulonglong)auVar45._8_8_ >> 0x20);
  auVar23._0_8_ = auVar19._0_8_ * dVar31 - auVar33._0_8_ * local_188._s_0.Z;
  auVar23._8_8_ = auVar19._8_8_ * dVar8 - auVar33._8_8_ * 0.0;
  auVar19 = blendpd(auVar45,auVar23,2);
  dVar36 = auVar38._8_8_ + auVar38._8_8_;
  dVar39 = auVar23._0_8_ + auVar23._0_8_;
  auVar46._0_8_ = auVar19._0_8_ + auVar19._0_8_;
  auVar46._8_8_ = auVar19._8_8_ + auVar19._8_8_;
  pFVar15 = this->DOFConstraint;
  auVar29._8_4_ = SUB84(dVar39,0);
  auVar29._0_8_ = dVar36;
  uVar40 = (undefined4)((ulonglong)dVar39 >> 0x20);
  auVar29._12_4_ = uVar40;
  local_1a8 = 0.0;
  local_1b8._0_8_ = 0;
  local_1b8._8_8_ = 0;
  local_160 = 0.0;
  local_170._0_8_ = 0;
  local_170._8_8_ = 0;
  auVar24._8_4_ = SUB84(dVar39,0);
  auVar24._0_8_ = dVar36;
  auVar24._12_4_ = uVar40;
  auVar19 = blendpd(auVar24,auVar46,2);
  auVar30._0_8_ = auVar29._8_8_ * dVar35 - dVar36 * dVar26;
  auVar30._8_8_ = auVar46._0_8_ * dVar26 - dVar39 * dVar31;
  auVar25._0_8_ = auVar19._0_8_ * dVar31 - auVar46._0_8_ * auVar33._0_8_;
  auVar25._8_8_ = auVar19._8_8_ * dVar8 - auVar46._8_8_ * auVar33._8_8_;
  auVar19 = blendpd(auVar30,auVar25,2);
  (pFVar15->SecAxis1).field0_0x0._s_0.X = dVar36 * dVar8 + auVar49._0_8_ + auVar30._8_8_;
  (pFVar15->SecAxis1).field0_0x0._s_0.Y = dVar39 * dVar8 + dVar47 + auVar25._0_8_;
  (pFVar15->SecAxis1).field0_0x0._s_0.Z = auVar46._0_8_ * dVar8 + local_188._s_0.Z + auVar19._0_8_;
  pFVar15 = this->DOFConstraint;
  *(undefined1 (*) [16])&(pFVar15->PriAxis2).field0_0x0 = auVar48;
  (pFVar15->PriAxis2).field0_0x0._s_0.Z = (double)uVar11;
  pFVar15 = this->DOFConstraint;
  *(undefined1 (*) [16])&(pFVar15->SecAxis2).field0_0x0 = auVar49;
  (pFVar15->SecAxis2).field0_0x0._s_0.Z = local_188._s_0.Z;
  pFVar15 = this->DOFConstraint;
  (pFVar15->Pos2).field0_0x0._s_0.X = local_d8[0];
  (pFVar15->Pos2).field0_0x0._s_0.Y = local_d8[1];
  (pFVar15->Pos2).field0_0x0._s_0.Z = local_c8[0];
  pFVar15 = this->DOFConstraint;
  pUVar16 = FWeakObjectPtr::Get(&(this->OwnerComponent).WeakPtr);
  FConstraintInstance::InitConstraint
            (pFVar15,this,(FBodyInstance *)0x0,__real_3f800000,pUVar16,
             (TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *)local_170,
             (TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *)local_1b8);
  return;
}

// DoesUseCollisionProfile @ 1481e2560

bool __thiscall FBodyInstance::DoesUseCollisionProfile(FBodyInstance *this)

{
  UObject *pUVar1;
  FName FVar2;
  
  FVar2 = this->CollisionProfileName;
  pUVar1 = FWeakObjectPtr::Get(&(this->ExternalCollisionProfileBodySetup).WeakPtr,true);
  if (pUVar1 != (UObject *)0x0) {
    FVar2.ComparisonIndex.Value = *(uint *)&pUVar1[10].field_0x1c;
    FVar2.Number = *(uint *)&pUVar1[10].field_0x20;
  }
  if ((FVar2 != (FName)0x0) && (FVar2 != UCollisionProfile::CustomCollisionProfileName)) {
    return true;
  }
  return false;
}

// DrawCOMPosition @ 1481e25b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FBodyInstance::DrawCOMPosition
          (FBodyInstance *this,FPrimitiveDrawInterface *param_1,float param_2,FColor *param_3)

{
  undefined1 auStack_108 [32];
  FLinearColor_u_0 local_d8;
  double *local_c8;
  FSingleParticlePhysicsProxy *local_c0;
  code *local_b8;
  double **local_b0;
  TVector<double>_u_0 local_a8;
  double local_88 [2];
  double local_78 [2];
  double local_68 [2];
  double local_58 [2];
  double local_48 [2];
  double local_38 [2];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_c0 = this->ActorHandle;
  if (local_c0 != (FSingleParticlePhysicsProxy *)0x0) {
    local_d8._s_0.R = FLinearColor::sRGBToLinearTable[(param_3->field0_0x0)._s_0.R];
    local_d8._s_0.G = FLinearColor::sRGBToLinearTable[(param_3->field0_0x0)._s_0.G];
    local_d8._s_0.B = FLinearColor::sRGBToLinearTable[(param_3->field0_0x0)._s_0.B];
    local_88 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_c8 = local_88;
    local_b0 = &local_c8;
    local_b8 = UE::Core::Private::Function::
               TFunctionRefCaller<`FBodyInstance::GetMassSpaceToWorldSpace'::__l2::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
               ::Call;
    local_68 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_d8._s_0.A = (float)(param_3->field0_0x0)._s_0.A * __real_3b808081;
    local_48 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_78 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_58 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_38 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    FPhysInterface_Chaos::ExecuteRead
              (&local_c0,
               (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_b8
              );
    local_a8._s_0.Z = local_58[0];
    local_a8._s_0.X = local_68[0];
    local_a8._s_0.Y = local_68[1];
    DrawWireStar(param_1,(TVector<double> *)&local_a8._s_0,param_2,(FLinearColor *)&local_d8._s_0,
                 '\x01');
  }
  return;
}

// ExecuteOnCalculateCustomProjection @ 1481e3910

void __thiscall
FBodyInstance::ExecuteOnCalculateCustomProjection(FBodyInstance *this,TTransform<double> *param_1)

{
  FBodyInstanceDelegatesPtr this_00;
  atomic<unsigned___int64> aVar1;
  FReadAccessScope local_28;
  
  this_00 = this->BodyInstanceDelegates;
  if (this_00 != (FBodyInstanceDelegatesPtr)0x0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_28);
    if ((*(int *)&(((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   ((longlong)this_00 + 0x10))->AccessDetector).State != 0) &&
       (aVar1 = (((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this_00 + 8))
                ->AccessDetector).State, aVar1 != (atomic<unsigned___int64>)0x0)) {
      (**(code **)(*(longlong *)aVar1 + 0x68))(aVar1,this,param_1);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  return;
}

// FixupData @ 1481f2bc0

void __thiscall FBodyInstance::FixupData(FBodyInstance *this,UObject *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  int local_res8;
  
  if (param_1 == (UObject *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Loader",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                       ,0x116f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  UObjectBaseUtility::GetLinkerUEVersion((UObjectBaseUtility *)param_1);
  if (local_res8 < 0xdc) {
LAB_1481f2c42:
    bVar3 = true;
  }
  else {
    if (local_res8 < 0xff) {
      pUVar4 = Z_Construct_UClass_UShapeComponent_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) goto LAB_1481f2c42;
    }
    bVar3 = false;
  }
  LoadProfileData(this,bVar3);
  if ((this->CollisionProfileName == UCollisionProfile::CustomCollisionProfileName) &&
     (0xfe < local_res8)) {
    FCollisionResponse::UpdateResponseContainerFromArray(&this->CollisionResponses);
  }
  return;
}

// GetActorReferenceWithWelding @ 1481f4190

FSingleParticlePhysicsProxy ** __thiscall
FBodyInstance::GetActorReferenceWithWelding(FBodyInstance *this)

{
  if (this->WeldParent != (FBodyInstance *)0x0) {
    this = this->WeldParent;
  }
  return &this->ActorHandle;
}

// GetAllShapes_AssumesLocked @ 1481f4220

int __thiscall
FBodyInstance::GetAllShapes_AssumesLocked
          (FBodyInstance *this,
          TArray<FPhysicsShapeReference_Chaos,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FSingleParticlePhysicsProxy *local_res8 [4];
  
  local_res8[0] = this->ActorHandle;
  if (local_res8[0] != (FSingleParticlePhysicsProxy *)0x0) {
    iVar1 = FChaosEngineInterface::GetAllShapes_AssumedLocked(local_res8,param_1);
    return iVar1;
  }
  return 0;
}

// GetBodyBounds @ 1481f4490

TBox<double> * __thiscall
FBodyInstance::GetBodyBounds(FBodyInstance *this,TBox<double> *__return_storage_ptr__)

{
  TBox<double> *local_res8;
  FSingleParticlePhysicsProxy *local_res10 [3];
  code *local_18;
  TBox<double> **local_10;
  
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 0.0;
  __return_storage_ptr__->IsValid = '\0';
  __return_storage_ptr__->Pad[0] = '\0';
  __return_storage_ptr__->Pad[1] = '\0';
  __return_storage_ptr__->Pad[2] = '\0';
  __return_storage_ptr__->Pad[3] = '\0';
  __return_storage_ptr__->Pad[4] = '\0';
  __return_storage_ptr__->Pad[5] = '\0';
  __return_storage_ptr__->Pad[6] = '\0';
  local_10 = &local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FBodyInstance::GetBodyBounds'::__l2::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
             ::Call;
  local_res10[0] = this->ActorHandle;
  local_res8 = __return_storage_ptr__;
  FPhysInterface_Chaos::ExecuteRead
            (local_res10,
             (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_18);
  return __return_storage_ptr__;
}

// GetBodyBoundsLocal @ 1481f4500

TBox<double> * __thiscall
FBodyInstance::GetBodyBoundsLocal(FBodyInstance *this,TBox<double> *__return_storage_ptr__)

{
  TBox<double> *local_res8;
  FSingleParticlePhysicsProxy *local_res10 [3];
  code *local_18;
  TBox<double> **local_10;
  
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 0.0;
  __return_storage_ptr__->IsValid = '\0';
  __return_storage_ptr__->Pad[0] = '\0';
  __return_storage_ptr__->Pad[1] = '\0';
  __return_storage_ptr__->Pad[2] = '\0';
  __return_storage_ptr__->Pad[3] = '\0';
  __return_storage_ptr__->Pad[4] = '\0';
  __return_storage_ptr__->Pad[5] = '\0';
  __return_storage_ptr__->Pad[6] = '\0';
  local_10 = &local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FBodyInstance::GetBodyBoundsLocal'::__l2::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
             ::Call;
  local_res10[0] = this->ActorHandle;
  local_res8 = __return_storage_ptr__;
  FPhysInterface_Chaos::ExecuteRead
            (local_res10,
             (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_18);
  return __return_storage_ptr__;
}

// GetBodyDebugName @ 1481f4570

FString * __thiscall
FBodyInstance::GetBodyDebugName(FBodyInstance *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  UObject *pUVar3;
  FString *pFVar4;
  longlong lVar5;
  FString *pFVar6;
  int iVar7;
  FName local_res8;
  FString local_48;
  FString local_38;
  FString local_28;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pUVar3 = FWeakObjectPtr::Get(&(this->OwnerComponent).WeakPtr);
  if (pUVar3 != (UObject *)0x0) {
    pFVar4 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar3,&local_48,(UObject *)0x0);
    if (__return_storage_ptr__ != pFVar4) {
      pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
      (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = (pFVar4->Data).ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = (pFVar4->Data).ArrayMax;
      (pFVar4->Data).ArrayNum = 0;
      (pFVar4->Data).ArrayMax = 0;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    lVar5 = (**(code **)(*(longlong *)pUVar3 + 0x480))(pUVar3);
    if (lVar5 != 0) {
      ::FString::AppendChars(__return_storage_ptr__,L" ",1);
      local_res8 = *(FName *)(lVar5 + 0x18);
      ::FName::AppendString(&local_res8,__return_storage_ptr__);
    }
  }
  bVar2 = TWeakObjectPtr<UBodySetupCore,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UBodySetupCore,FWeakObjectPtr> *)this,(void *)0x0);
  if (!bVar2) {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    if (*(longlong *)(pUVar3 + 1) != 0) {
      pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
      pFVar4 = ::FName::ToString((FName *)(pUVar3 + 1),&local_28);
      pFVar6 = ::FString::FString(&local_38,L" Bone: ");
      ::FString::ConcatFF(&local_48,pFVar6,pFVar4);
      iVar7 = local_48.Data.ArrayNum + -1;
      if (local_48.Data.ArrayNum == 0) {
        iVar7 = 0;
      }
      ::FString::AppendChars
                (__return_storage_ptr__,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar7);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetBodyInertiaTensor @ 1481f4700

TVector<double> * __thiscall
FBodyInstance::GetBodyInertiaTensor(FBodyInstance *this,TVector<double> *__return_storage_ptr__)

{
  undefined8 uVar1;
  TVector<double> *local_res8;
  FSingleParticlePhysicsProxy *local_res10 [3];
  code *local_18;
  TVector<double> **local_10;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_10 = &local_res8;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FBodyInstance::GetBodyInertiaTensor'::__l2::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
             ::Call;
  local_res10[0] = this->ActorHandle;
  local_res8 = __return_storage_ptr__;
  FPhysInterface_Chaos::ExecuteRead
            (local_res10,
             (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_18);
  return __return_storage_ptr__;
}

// GetBodyInstanceResourceSizeEx @ 1481f4760

void __thiscall
FBodyInstance::GetBodyInstanceResourceSizeEx(FBodyInstance *this,FResourceSizeEx *param_1)

{
  ulong64 uVar1;
  FSingleParticlePhysicsProxy *local_res8 [4];
  
  local_res8[0] = this->ActorHandle;
  uVar1 = FChaosEngineInterface::GetResourceSizeEx(local_res8);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,uVar1);
  return;
}

// GetBodyMass @ 1481f47a0

float __thiscall FBodyInstance::GetBodyMass(FBodyInstance *this)

{
  float local_res8 [2];
  float *local_res10;
  FSingleParticlePhysicsProxy *local_res18 [2];
  code *local_18;
  undefined4 **local_10;
  
  local_res10 = local_res8;
  local_res8[0] = 0.0;
  local_10 = &local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FBodyInstance::GetBodyMass'::__l2::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
             ::Call;
  local_res18[0] = this->ActorHandle;
  FPhysInterface_Chaos::ExecuteRead
            (local_res18,
             (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_18);
  return local_res8[0];
}

// GetBodySetup @ 1481f4800

UBodySetup * __thiscall FBodyInstance::GetBodySetup(FBodyInstance *this)

{
  int iVar1;
  UBodySetup *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  pUVar2 = (UBodySetup *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pUVar2 == (UBodySetup *)0x0) {
    return (UBodySetup *)0x0;
  }
  pUVar3 = Z_Construct_UClass_UBodySetup_NoRegister();
  iVar1 = (int)pUVar3->_padding_;
  if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar3->_padding_)) {
    return pUVar2;
  }
  pFVar4 = GetTypeName<UBodySetup>(&local_28);
  pwVar5 = L"";
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  pFVar4 = GetFullNameForCastLogError<UBodySetupCore>(&local_18,(UBodySetupCore *)pUVar2);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar5,pwVar6);
}

// GetCollisionEnabled @ 1481f4960

Type __thiscall FBodyInstance::GetCollisionEnabled(FBodyInstance *this,bool param_1)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  
  if (!param_1) {
    return (Type)(this->CollisionEnabled).Value;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->OwnerComponent).WeakPtr);
  if (pUVar2 != (UObject *)0x0) {
    if ((*(longlong *)&pUVar2[4].field_0x8 != 0) &&
       ((*(byte *)(*(longlong *)&pUVar2[4].field_0x8 + 0x5d) & 1) == 0)) {
      return NoCollision;
    }
    pUVar3 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      return (Type)(byte)pUVar2[0x17].field_0xf;
    }
  }
  return (Type)(this->CollisionEnabled).Value;
}

// GetCollisionEnabled_CheckOwner @ 1481f4a00

Type __thiscall FBodyInstance::GetCollisionEnabled_CheckOwner(FBodyInstance *this)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = FWeakObjectPtr::Get(&(this->OwnerComponent).WeakPtr);
  if (pUVar2 != (UObject *)0x0) {
    if ((*(longlong *)&pUVar2[4].field_0x8 != 0) &&
       ((*(byte *)(*(longlong *)&pUVar2[4].field_0x8 + 0x5d) & 1) == 0)) {
      return NoCollision;
    }
    pUVar3 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      return (Type)(byte)pUVar2[0x17].field_0xf;
    }
  }
  return (Type)(this->CollisionEnabled).Value;
}

// GetCollisionProfileName @ 1481f4a90

FName __thiscall FBodyInstance::GetCollisionProfileName(FBodyInstance *this)

{
  FName FVar1;
  UObject *pUVar2;
  undefined1 in_DL;
  undefined7 in_register_00000011;
  
  FVar1._1_7_ = in_register_00000011;
  FVar1.ComparisonIndex.Value._0_1_ = in_DL;
  *(FName *)CONCAT71(in_register_00000011,in_DL) = this->CollisionProfileName;
  pUVar2 = FWeakObjectPtr::Get(&(this->ExternalCollisionProfileBodySetup).WeakPtr,true);
  if (pUVar2 != (UObject *)0x0) {
    *(undefined8 *)FVar1 = *(undefined8 *)&pUVar2[10].field_0x1c;
  }
  return FVar1;
}

// GetComplexPhysicalMaterials @ 1481f4ad0

TArray<UPhysicalMaterial_*,TSizedDefaultAllocator<32>_> * __thiscall
FBodyInstance::GetComplexPhysicalMaterials
          (FBodyInstance *this,
          TArray<UPhysicalMaterial_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<FPhysicalMaterialMaskParams,TSizedDefaultAllocator<32>_> *param_1)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  GetComplexPhysicalMaterials
            (this,(TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>)(this->OwnerComponent).WeakPtr
             ,__return_storage_ptr__,param_1,this->BodyInstanceOwner);
  return __return_storage_ptr__;
}

// GetComplexPhysicalMaterials @ 1481f4b10

TArray<UPhysicalMaterial_*,TSizedDefaultAllocator<32>_> * __thiscall
FBodyInstance::GetComplexPhysicalMaterials
          (FBodyInstance *this,
          TArray<UPhysicalMaterial_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  GetComplexPhysicalMaterials
            (this,(TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>)(this->OwnerComponent).WeakPtr
             ,__return_storage_ptr__,
             (TArray<FPhysicalMaterialMaskParams,TSizedDefaultAllocator<32>_> *)0x0,
             this->BodyInstanceOwner);
  return __return_storage_ptr__;
}

// GetComplexPhysicalMaterials @ 1481f4b50

void __thiscall
FBodyInstance::GetComplexPhysicalMaterials
          (FBodyInstance *this,TArray<UPhysicalMaterial_*,TSizedDefaultAllocator<32>_> *param_1)

{
  GetComplexPhysicalMaterials
            (this,(TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>)(this->OwnerComponent).WeakPtr
             ,param_1,(TArray<FPhysicalMaterialMaskParams,TSizedDefaultAllocator<32>_> *)0x0,
             this->BodyInstanceOwner);
  return;
}

// GetComplexPhysicalMaterials @ 1481f4b80

void __thiscall
FBodyInstance::GetComplexPhysicalMaterials
          (FBodyInstance *this,TArray<UPhysicalMaterial_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FPhysicalMaterialMaskParams,TSizedDefaultAllocator<32>_> *param_2)

{
  GetComplexPhysicalMaterials
            (this,(TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>)(this->OwnerComponent).WeakPtr
             ,param_1,param_2,this->BodyInstanceOwner);
  return;
}

// GetComplexPhysicalMaterials @ 1481f4bb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FBodyInstance::GetComplexPhysicalMaterials
          (FBodyInstance *param_1,TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> param_2,
          TArray<UPhysicalMaterial_*,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FPhysicalMaterialMaskParams,TSizedDefaultAllocator<32>_> *param_4,
          IPhysicsBodyInstanceOwner *param_5)

{
  int *piVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  UObject *pUVar7;
  longlong *plVar8;
  TObjectPtr<UPhysicalMaterial>_u_0 TVar9;
  uint uVar10;
  FScriptContainerElement *_Dst;
  uint uVar11;
  uint uVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  FWeakObjectPtr local_res10;
  longlong local_48;
  longlong local_40;
  
  local_res10 = param_2.WeakPtr;
  if ((GEngine == (UEngine *)0x0) ||
     ((GEngine->DefaultPhysMaterial).field0_0x0.DebugPtr == (UPhysicalMaterial *)0x0)) {
    if (1 < (byte)LogPhysics._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPhysics);
      return;
    }
  }
  else if ((param_1 == (FBodyInstance *)0x0) ||
          ((param_1->PhysMaterialOverride).field0_0x0.DebugPtr == (UPhysicalMaterial *)0x0)) {
    pUVar7 = FWeakObjectPtr::Get(&local_res10);
    if (pUVar7 == (UObject *)0x0) {
      if (param_5 != (IPhysicsBodyInstanceOwner *)0x0) {
        (**(code **)((longlong)*param_5 + 0x20))(param_5,param_3,param_4);
      }
    }
    else if (*(longlong *)(pUVar7 + 0x1e) == 0) {
      uVar5 = (**(code **)(*(longlong *)pUVar7 + 0x810))(pUVar7);
      TArray<UPhysicalMaterial_*,TSizedDefaultAllocator<32>_>::SetNum(param_3,uVar5,Default);
      if (param_4 != (TArray<FPhysicalMaterialMaskParams,TSizedDefaultAllocator<32>_> *)0x0) {
        iVar6 = param_4->ArrayNum;
        piVar1 = &param_4->ArrayNum;
        if (iVar6 < (int)uVar5) {
          UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,uVar5 - iVar6,&param_4->AllocatorInstance,piVar1,&param_4->ArrayMax);
        }
        else {
          if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
          }
          if ((int)uVar5 < iVar6) {
            uVar11 = iVar6 - uVar5;
            if (((int)(uVar11 | uVar5) < 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  ), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (uVar11 != 0) {
              _Dst = (param_4->AllocatorInstance).Data + (longlong)(int)uVar5 * 0x10;
              iVar6 = (*piVar1 - uVar11) - uVar5;
              if (iVar6 != 0) {
                memmove(_Dst,_Dst + (longlong)(int)uVar11 * 0x10,(longlong)iVar6 << 4);
              }
              *piVar1 = *piVar1 - uVar11;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,&param_4->AllocatorInstance,*piVar1,&param_4->ArrayMax);
            }
          }
        }
      }
      plVar13 = (longlong *)0x0;
      if (0 < (int)uVar5) {
        local_48 = 0;
        plVar8 = plVar13;
        plVar15 = plVar13;
        do {
          uVar11 = (uint)plVar8;
          TVar9 = (GEngine->DefaultPhysMaterial).field0_0x0;
          plVar8 = (longlong *)(**(code **)(*(longlong *)pUVar7 + 0x690))(pUVar7,plVar8);
          if (plVar8 != (longlong *)0x0) {
            TVar9.DebugPtr = (UPhysicalMaterial *)(**(code **)(*plVar8 + 0x318))(plVar8);
          }
          uVar12 = ~uVar11 >> 0x1f;
          uVar10 = 0;
          if ((int)uVar11 < param_3->ArrayNum) {
            uVar10 = uVar12;
          }
          if ((uVar10 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          *(TObjectPtr<UPhysicalMaterial>_u_0 *)
           ((param_3->AllocatorInstance).Data + (longlong)plVar15 * 8) = TVar9;
          if (param_4 != (TArray<FPhysicalMaterialMaskParams,TSizedDefaultAllocator<32>_> *)0x0) {
            local_40 = 0;
            plVar14 = plVar13;
            if ((plVar8 != (longlong *)0x0) &&
               (local_40 = (**(code **)(*plVar8 + 800))(plVar8), local_40 != 0)) {
              plVar14 = plVar8;
            }
            uVar10 = 0;
            if ((int)uVar11 < param_4->ArrayNum) {
              uVar10 = uVar12;
            }
            if ((uVar10 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            *(longlong *)((param_4->AllocatorInstance).Data + local_48) = local_40;
            uVar10 = 0;
            if ((int)uVar11 < param_4->ArrayNum) {
              uVar10 = uVar12;
            }
            if ((uVar10 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            *(longlong **)((param_4->AllocatorInstance).Data + local_48 + 8) = plVar14;
          }
          local_48 = local_48 + 0x10;
          plVar8 = (longlong *)(ulonglong)(uVar11 + 1);
          plVar15 = (longlong *)((longlong)plVar15 + 1);
        } while ((longlong)plVar15 < (longlong)(int)uVar5);
      }
    }
    else {
      TArray<UPhysicalMaterial_*,TSizedDefaultAllocator<32>_>::SetNum(param_3,1,Default);
      pUVar7 = FWeakObjectPtr::Get(&local_res10);
      uVar2 = *(undefined8 *)(pUVar7 + 0x1e);
      if ((param_3->ArrayNum < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(undefined8 *)(param_3->AllocatorInstance).Data = uVar2;
      if ((param_3->ArrayNum < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(longlong *)(param_3->AllocatorInstance).Data != 0) {
        if ((param_3->ArrayNum < 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        bVar4 = UObjectBase::IsValidLowLevel(*(UObjectBase **)(param_3->AllocatorInstance).Data);
        if ((!bVar4) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("!OutPhysMaterials[0] || OutPhysMaterials[0]->IsValidLowLevel()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                               ,0xcbc,L""), bVar4)) goto code_r0x0001481f4e61;
      }
    }
  }
  else {
    TArray<UPhysicalMaterial_*,TSizedDefaultAllocator<32>_>::SetNum(param_3,1,Default);
    TVar9 = (param_1->PhysMaterialOverride).field0_0x0;
    if ((param_3->ArrayNum < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(TObjectPtr<UPhysicalMaterial>_u_0 *)(param_3->AllocatorInstance).Data = TVar9;
    if ((param_3->ArrayNum < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(longlong *)(param_3->AllocatorInstance).Data != 0) {
      if ((param_3->ArrayNum < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      bVar4 = UObjectBase::IsValidLowLevel(*(UObjectBase **)(param_3->AllocatorInstance).Data);
      if ((!bVar4) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!OutPhysMaterials[0] || OutPhysMaterials[0]->IsValidLowLevel()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                             ,0xcb1,L""), bVar4)) {
code_r0x0001481f4e61:
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  return;
}

// GetCurrentWeldInfo @ 1481f5270

TMap<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>
* __thiscall FBodyInstance::GetCurrentWeldInfo(FBodyInstance *this)

{
  return (this->ShapeToBodiesMap).Object;
}

// GetDistanceToBody @ 1481f5b20

float __thiscall
FBodyInstance::GetDistanceToBody
          (FBodyInstance *this,TVector<double> *param_1,TVector<double> *param_2)

{
  bool bVar1;
  float local_res20 [2];
  
  local_res20[0] = -1.0;
  bVar1 = FPhysInterface_Chaos::GetSquaredDistanceToBody(this,param_1,local_res20,param_2);
  if (bVar1) {
    return SQRT(local_res20[0]);
  }
  return __real_bf800000;
}

// GetKinematicTarget @ 1481fbd30

TTransform<double> * __thiscall
FBodyInstance::GetKinematicTarget(FBodyInstance *this,TTransform<double> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  TTransform<double> *local_res8;
  FSingleParticlePhysicsProxy *local_res10 [3];
  code *local_18;
  TTransform<double> **local_10;
  
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  local_10 = &local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FBodyInstance::GetKinematicTarget'::__l2::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
             ::Call;
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = (double)fVar1;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (double)fVar2;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = (double)fVar1;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (double)fVar2;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = (double)fVar1;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (double)fVar2;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = (double)fVar3;
  local_res10[0] = this->ActorHandle;
  local_res8 = __return_storage_ptr__;
  FPhysInterface_Chaos::ExecuteRead
            (local_res10,
             (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_18);
  return __return_storage_ptr__;
}

// GetKinematicTarget_AssumesLocked @ 1481fbdc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform<double> * __thiscall
FBodyInstance::GetKinematicTarget_AssumesLocked
          (FBodyInstance *this,TTransform<double> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  TTransform<double> *pTVar10;
  undefined1 auStack_a8 [32];
  FSingleParticlePhysicsProxy *local_88 [2];
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = auVar8;
  local_88[0] = this->ActorHandle;
  if (local_88[0] != (FSingleParticlePhysicsProxy *)0x0) {
    pTVar10 = FChaosEngineInterface::GetKinematicTarget_AssumesLocked(&local_78,local_88);
    dVar9 = (pTVar10->Rotation).XY.m128d_f64[1];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (pTVar10->Rotation).XY.m128d_f64[0];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar9;
    dVar9 = (pTVar10->Rotation).ZW.m128d_f64[1];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (pTVar10->Rotation).ZW.m128d_f64[0];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar9;
    dVar9 = (pTVar10->Translation).XY.m128d_f64[1];
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (pTVar10->Translation).XY.m128d_f64[0];
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar9;
    dVar9 = (pTVar10->Translation).ZW.m128d_f64[1];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (pTVar10->Translation).ZW.m128d_f64[0];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar9;
    dVar9 = (pTVar10->Scale3D).XY.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = (pTVar10->Scale3D).XY.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar9;
    dVar9 = (pTVar10->Scale3D).ZW.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (pTVar10->Scale3D).ZW.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar9;
  }
  return __return_storage_ptr__;
}

// GetLockedAxis @ 1481fc290

TVector<double> * __thiscall
FBodyInstance::GetLockedAxis(FBodyInstance *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  uchar uVar2;
  uchar uVar3;
  code *pcVar4;
  double dVar5;
  undefined8 uVar6;
  bool bVar7;
  UPhysicsSettings *pUVar8;
  TVector<double> *pTVar9;
  
  uVar2 = (this->DOFMode).Value;
  if (uVar2 == '\0') {
    pUVar8 = UPhysicsSettings::Get();
    uVar3 = (pUVar8->DefaultDegreesOfFreedom).Value;
    if (uVar3 == '\x03') {
switchD_1481fc2f3_caseD_4:
      (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = 1.0;
      return __return_storage_ptr__;
    }
    if (uVar3 == '\x02') goto switchD_1481fc2f3_caseD_3;
    if (uVar3 == '\x01') goto switchD_1481fc2f3_caseD_2;
    if (uVar3 == '\0') goto switchD_1481fc2f3_caseD_1;
  }
  switch(uVar2) {
  case '\x02':
switchD_1481fc2f3_caseD_2:
    (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.X = 1.0;
    return __return_storage_ptr__;
  case '\x03':
switchD_1481fc2f3_caseD_3:
    (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = 1.0;
    return __return_storage_ptr__;
  case '\x04':
    goto switchD_1481fc2f3_caseD_4;
  case '\x05':
    dVar5 = (this->CustomDOFPlaneNormal).field0_0x0._s_0.Y;
    dVar1 = (this->CustomDOFPlaneNormal).field0_0x0._s_0.Z;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (this->CustomDOFPlaneNormal).field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar5;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
    return __return_storage_ptr__;
  default:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                       ,0x33d,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TVector<double> *)(*pcVar4)();
      return pTVar9;
    }
  case '\x01':
  case '\x06':
switchD_1481fc2f3_caseD_1:
    uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar6;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    return __return_storage_ptr__;
  }
}

// GetMassSpaceLocal @ 1481fc410

TTransform<double> * __thiscall
FBodyInstance::GetMassSpaceLocal(FBodyInstance *this,TTransform<double> *__return_storage_ptr__)

{
  TTransform<double> *local_res8;
  FSingleParticlePhysicsProxy *local_res10 [3];
  code *local_18;
  TTransform<double> **local_10;
  
  local_10 = &local_res8;
  *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Translation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(__return_storage_ptr__->Translation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FBodyInstance::GetMassSpaceLocal'::__l2::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
             ::Call;
  local_res10[0] = this->ActorHandle;
  local_res8 = __return_storage_ptr__;
  FPhysInterface_Chaos::ExecuteRead
            (local_res10,
             (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_18);
  return __return_storage_ptr__;
}

// GetMassSpaceToWorldSpace @ 1481fc4a0

TTransform<double> * __thiscall
FBodyInstance::GetMassSpaceToWorldSpace
          (FBodyInstance *this,TTransform<double> *__return_storage_ptr__)

{
  TTransform<double> *local_res8;
  FSingleParticlePhysicsProxy *local_res10 [3];
  code *local_18;
  TTransform<double> **local_10;
  
  local_10 = &local_res8;
  *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Translation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(__return_storage_ptr__->Translation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FBodyInstance::GetMassSpaceToWorldSpace'::__l2::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
             ::Call;
  local_res10[0] = this->ActorHandle;
  local_res8 = __return_storage_ptr__;
  FPhysInterface_Chaos::ExecuteRead
            (local_res10,
             (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_18);
  return __return_storage_ptr__;
}

// GetMaxAngularVelocityInRadians @ 1481fc540

float __thiscall FBodyInstance::GetMaxAngularVelocityInRadians(FBodyInstance *this)

{
  UPhysicsSettings *pUVar1;
  
  if (this->bOverrideMaxAngularVelocity != '\0') {
    return this->MaxAngularVelocity * __real_3c8efa35;
  }
  pUVar1 = UPhysicsSettings::Get();
  return *(float *)&pUVar1->_padding_ * __real_3c8efa35;
}

// GetOriginalBodyInstance @ 1481fcb30

FBodyInstance * __thiscall
FBodyInstance::GetOriginalBodyInstance(FBodyInstance *this,FPhysicsShapeReference_Chaos *param_1)

{
  TMap<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>
  *this_00;
  FWeldInfo *pFVar1;
  
  if (this->WeldParent != (FBodyInstance *)0x0) {
    this = this->WeldParent;
  }
  this_00 = (this->ShapeToBodiesMap).Object;
  if (this_00 !=
      (TMap<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>
       *)0x0) {
    pFVar1 = TMapBase<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>
             ::Find((TMapBase<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>
                     *)this_00,param_1);
    if (pFVar1 != (FWeldInfo *)0x0) {
      return pFVar1->ChildBI;
    }
  }
  return this;
}

// GetOverrideWalkableSlopeOnInstance @ 1481fcbc0

bool __thiscall FBodyInstance::GetOverrideWalkableSlopeOnInstance(FBodyInstance *this)

{
  return this->bOverrideWalkableSlopeOnInstance;
}

// GetPhysicsActor @ 1481fdbe0

FSingleParticlePhysicsProxy * __thiscall FBodyInstance::GetPhysicsActor(FBodyInstance *this)

{
  return this->ActorHandle;
}

// GetPhysicsActorHandle @ 1481fdbf0

FSingleParticlePhysicsProxy ** __thiscall FBodyInstance::GetPhysicsActorHandle(FBodyInstance *this)

{
  return &this->ActorHandle;
}

// GetPhysicsActorHandle @ 1481fdc00

FSingleParticlePhysicsProxy ** __thiscall FBodyInstance::GetPhysicsActorHandle(FBodyInstance *this)

{
  return &this->ActorHandle;
}

// GetPhysicsActorWeldRoot @ 1481fdc10

FSingleParticlePhysicsProxy * __thiscall FBodyInstance::GetPhysicsActorWeldRoot(FBodyInstance *this)

{
  if (this->WeldParent != (FBodyInstance *)0x0) {
    return this->WeldParent->ActorHandle;
  }
  return this->ActorHandle;
}

// GetPhysicsReplicationMode @ 1481fdc40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

EPhysicsReplicationMode __thiscall FBodyInstance::GetPhysicsReplicationMode(FBodyInstance *this)

{
  EPhysicsReplicationMode EVar1;
  UObject *pUVar2;
  
  pUVar2 = FWeakObjectPtr::Get(&(this->OwnerComponent).WeakPtr);
  if ((pUVar2 != (UObject *)0x0) && (*(AActor **)&pUVar2[4].field_0x8 != (AActor *)0x0)) {
    EVar1 = AActor::GetPhysicsReplicationMode(*(AActor **)&pUVar2[4].field_0x8);
    return EVar1;
  }
  return Default;
}

// GetPhysicsScene @ 1481fdc80

FPhysScene_Chaos * __thiscall FBodyInstance::GetPhysicsScene(FBodyInstance *this)

{
  FPhysScene_Chaos *pFVar1;
  FSingleParticlePhysicsProxy *local_res8 [4];
  
  local_res8[0] = this->ActorHandle;
  pFVar1 = (FPhysScene_Chaos *)FChaosEngineInterface::GetCurrentScene(local_res8);
  return pFVar1;
}

// GetPhysicsScene @ 1481fdcb0

FPhysScene_Chaos * __thiscall FBodyInstance::GetPhysicsScene(FBodyInstance *this)

{
  FPhysScene_Chaos *pFVar1;
  FSingleParticlePhysicsProxy *local_res8 [4];
  
  local_res8[0] = this->ActorHandle;
  pFVar1 = (FPhysScene_Chaos *)FChaosEngineInterface::GetCurrentScene(local_res8);
  return pFVar1;
}

// GetRelativeBodyTransform @ 1481fe1d0

TTransform<double> * __thiscall
FBodyInstance::GetRelativeBodyTransform(FBodyInstance *this,FPhysicsShapeReference_Chaos *param_1)

{
  TMap<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>
  *this_00;
  code *pcVar1;
  bool bVar2;
  TTransform<double> *pTVar3;
  FWeldInfo *pFVar4;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                       ,0x6fb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TTransform<double> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (this->WeldParent != (FBodyInstance *)0x0) {
    this = this->WeldParent;
  }
  this_00 = (this->ShapeToBodiesMap).Object;
  if (this_00 !=
      (TMap<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>
       *)0x0) {
    pFVar4 = TMapBase<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>
             ::Find((TMapBase<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>
                     *)this_00,param_1);
    if (pFVar4 != (FWeldInfo *)0x0) {
      return &pFVar4->RelativeTM;
    }
  }
  return &UE::Math::TTransform<double>::Identity;
}

// GetRigidBodyState @ 1481fe560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall FBodyInstance::GetRigidBodyState(FBodyInstance *this,FRigidBodyState *param_1)

{
  undefined1 auVar1 [16];
  bool bVar2;
  double dVar3;
  undefined1 auStack_188 [32];
  char local_168 [8];
  undefined1 local_160 [8];
  undefined1 local_158 [8];
  FSingleParticlePhysicsProxy *local_150;
  FSingleParticlePhysicsProxy *local_148;
  double *local_140;
  FSingleParticlePhysicsProxy *local_138;
  char *local_130;
  FSingleParticlePhysicsProxy *local_128;
  double local_120;
  double dStack_118;
  double local_110;
  code *local_108;
  double **local_100;
  double *local_f8;
  FBodyInstance *local_f0;
  code *local_e8;
  double **local_e0;
  code *local_d8;
  double **local_d0;
  code *local_c8;
  char **local_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double *local_98;
  FBodyInstance *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  double local_78 [2];
  double local_68 [2];
  double local_58 [2];
  double local_48 [2];
  double local_38 [2];
  double local_28 [2];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_188;
  bVar2 = FBodyInstanceCore::ShouldInstanceSimulatingPhysics((FBodyInstanceCore *)this);
  if ((bVar2) && (local_150 = this->ActorHandle, local_150 != (FSingleParticlePhysicsProxy *)0x0)) {
    local_98 = local_78;
    local_88 = local_160;
    local_80 = local_158;
    local_100 = &local_98;
    local_78[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
    local_78[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
    local_68[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
    local_68[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
    local_58[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
    local_58[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
    local_48[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
    local_48[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
    local_108 = UE::Core::Private::Function::
                TFunctionRefCaller<`FBodyInstance::GetUnrealWorldTransform'::__l2::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
                ::Call;
    local_158[0] = 0;
    local_160[0] = 1;
    local_38[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
    local_38[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
    local_28[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
    local_28[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
    local_90 = this;
    FPhysInterface_Chaos::ExecuteRead
              (&local_150,
               (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)
               &local_108);
    local_f8 = &local_b8;
    *(double *)&param_1->Position = local_58[0];
    *(double *)&(param_1->Position).field_0x8 = local_58[1];
    *(double *)&(param_1->Position).field_0x10 = local_48[0];
    (param_1->Quaternion).X = local_78[0];
    (param_1->Quaternion).Y = local_78[1];
    (param_1->Quaternion).Z = local_68[0];
    (param_1->Quaternion).W = local_68[1];
    local_e0 = &local_f8;
    local_e8 = UE::Core::Private::Function::
               TFunctionRefCaller<`FBodyInstance::GetUnrealWorldVelocity'::__l2::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
               ::Call;
    local_148 = this->ActorHandle;
    local_b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_f0 = this;
    FPhysInterface_Chaos::ExecuteRead
              (&local_148,
               (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_e8
              );
    local_140 = &local_120;
    *(double *)&param_1->LinVel = local_b8;
    *(double *)&(param_1->LinVel).field_0x8 = dStack_b0;
    *(double *)&(param_1->LinVel).field_0x10 = local_a8;
    local_d0 = &local_140;
    local_d8 = UE::Core::Private::Function::
               TFunctionRefCaller<`FBodyInstance::GetUnrealWorldAngularVelocityInRadians'::__l2::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
               ::Call;
    local_138 = this->ActorHandle;
    local_120 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_118 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_110 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    FPhysInterface_Chaos::ExecuteRead
              (&local_138,
               (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_d8
              );
    dVar3 = local_110 * ___xmm_404ca5dc00000000404ca5dc00000000;
    auVar1._8_4_ = SUB84(dStack_118 * _UNK_1506896a8,0);
    auVar1._0_8_ = local_120 * ___xmm_404ca5dc00000000404ca5dc00000000;
    auVar1._12_4_ = (int)((ulonglong)(dStack_118 * _UNK_1506896a8) >> 0x20);
    *(undefined1 (*) [16])&param_1->AngVel = auVar1;
    *(double *)&(param_1->AngVel).field_0x10 = dVar3;
    local_168[0] = '\0';
    local_130 = local_168;
    local_c0 = &local_130;
    local_c8 = UE::Core::Private::Function::
               TFunctionRefCaller<`FBodyInstance::IsInstanceAwake'::__l2::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
               ::Call;
    local_128 = this->ActorHandle;
    FPhysInterface_Chaos::ExecuteRead
              (&local_128,
               (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_c8
              );
    param_1->Flags = local_168[0] == '\0';
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

// GetShapeCollisionEnabled @ 1481fe7b0

Type __thiscall FBodyInstance::GetShapeCollisionEnabled(FBodyInstance *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  Type TVar4;
  char *pcVar5;
  UBodySetup *pUVar6;
  FKShapeElem *pFVar7;
  atomic<unsigned_char> *paVar8;
  int iVar9;
  
  if (this->bShapeCollisionEnabledIsSet != '\0') {
    if ((-1 < param_1) && (param_1 < (this->ShapeCollisionEnabled).ArrayNum)) {
      uVar3 = 0;
      if (param_1 < (this->ShapeCollisionEnabled).ArrayNum) {
        uVar3 = (uint)~param_1 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          TVar4 = (*pcVar1)();
          return TVar4;
        }
      }
      return (Type)(byte)(this->ShapeCollisionEnabled).AllocatorInstance.Data[param_1];
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8608185054796972985>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                       ,0x3b9,"ShapeCollisionEnabled.IsValidIndex(ShapeIndex)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar4 = (*pcVar1)();
      return TVar4;
    }
  }
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
  if (bVar2) {
    pUVar6 = GetBodySetup(this);
    pFVar7 = FKAggregateGeom::GetElement(&pUVar6->AggGeom,param_1);
    if (pFVar7 != (FKShapeElem *)0x0) {
      return (Type)(pFVar7->CollisionEnabled).Value;
    }
    pcVar5 = "Shape";
    iVar9 = 0x3c5;
    bVar2 = false;
    paVar8 = &bGEnsureHasExecuted<8608185054796972997>;
  }
  else {
    pcVar5 = "BodySetup.IsValid()";
    iVar9 = 0x3bf;
    bVar2 = true;
    paVar8 = &bGEnsureHasExecuted<8608185054796972991>;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (paVar8,bVar2,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                     ,iVar9,pcVar5);
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    TVar4 = (*pcVar1)();
    return TVar4;
  }
  return NoCollision;
}

// GetShapeResponseToChannels @ 1481fe8f0

FCollisionResponseContainer * __thiscall
FBodyInstance::GetShapeResponseToChannels(FBodyInstance *this,int param_1)

{
  FCollisionResponseContainer *pFVar1;
  
  pFVar1 = GetShapeResponseToChannels(this,param_1,&(this->CollisionResponses).ResponseToChannels);
  return pFVar1;
}

// GetShapeResponseToChannels @ 1481fe900

FCollisionResponseContainer * __thiscall
FBodyInstance::GetShapeResponseToChannels
          (FBodyInstance *this,int param_1,FCollisionResponseContainer *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FCollisionResponseContainer *pFVar4;
  uint uVar5;
  longlong lVar6;
  
  if ((this->bShapeCollisionResponsesIsSet != '\0') &&
     (uVar5 = 0, 0 < (this->ShapeCollisionResponses).ArrayNum)) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->ShapeCollisionResponses).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FCollisionResponseContainer *)(*pcVar1)();
        return pFVar4;
      }
      if (*(int *)((this->ShapeCollisionResponses).AllocatorInstance.Data + lVar6) == param_1) {
        uVar3 = 0;
        if ((int)uVar5 < (this->ShapeCollisionResponses).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FCollisionResponseContainer *)(*pcVar1)();
          return pFVar4;
        }
        return (FCollisionResponseContainer *)
               ((this->ShapeCollisionResponses).AllocatorInstance.Data +
               (longlong)(int)uVar5 * 0x38 + 8);
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x38;
    } while ((int)uVar5 < (this->ShapeCollisionResponses).ArrayNum);
  }
  return param_2;
}

// GetSimplePhysicalMaterial @ 1481fea20

UPhysicalMaterial * __thiscall FBodyInstance::GetSimplePhysicalMaterial(FBodyInstance *this)

{
  IPhysicsBodyInstanceOwner *pIVar1;
  UPhysicalMaterial *pUVar2;
  FWeakObjectPtr local_res8;
  UBodySetup *local_res10;
  
  pIVar1 = this->BodyInstanceOwner;
  local_res10 = GetBodySetup(this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UBodySetup *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UBodySetup *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  pUVar2 = GetSimplePhysicalMaterial
                     (this,(TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>)
                           (this->OwnerComponent).WeakPtr,
                      (TWeakObjectPtr<UBodySetup,FWeakObjectPtr>)local_res8,pIVar1);
  return pUVar2;
}

// GetSimplePhysicalMaterial @ 1481feac0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPhysicalMaterial * __cdecl
FBodyInstance::GetSimplePhysicalMaterial
          (FBodyInstance *param_1,TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> param_2,
          TWeakObjectPtr<UBodySetup,FWeakObjectPtr> param_3,IPhysicsBodyInstanceOwner *param_4)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  longlong *plVar6;
  UPhysicalMaterial *pUVar7;
  int iVar8;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18 [2];
  
  local_res10 = param_2.WeakPtr;
  local_res18[0] = param_3.WeakPtr;
  if ((GEngine == (UEngine *)0x0) ||
     ((GEngine->DefaultPhysMaterial).field0_0x0.DebugPtr == (UPhysicalMaterial *)0x0)) {
    if (1 < (byte)LogPhysics._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPhysics);
    }
    return (UPhysicalMaterial *)0x0;
  }
  pUVar7 = (param_1->PhysMaterialOverride).field0_0x0.DebugPtr;
  if (pUVar7 != (UPhysicalMaterial *)0x0) {
    bVar2 = UObjectBase::IsValidLowLevel((UObjectBase *)pUVar7);
    if (bVar2) {
      return pUVar7;
    }
    iVar8 = 0xc50;
    goto LAB_1481fec56;
  }
  pUVar3 = FWeakObjectPtr::Get(&local_res10);
  if ((pUVar3 != (UObject *)0x0) && (*(longlong *)(pUVar3 + 0x1e) != 0)) {
    pUVar3 = FWeakObjectPtr::Get(&local_res10);
    pUVar7 = *(UPhysicalMaterial **)(pUVar3 + 0x1e);
    if (pUVar7 == (UPhysicalMaterial *)0x0) {
      return (UPhysicalMaterial *)0x0;
    }
    bVar2 = UObjectBase::IsValidLowLevel((UObjectBase *)pUVar7);
    if (bVar2) {
      return pUVar7;
    }
    iVar8 = 0xc59;
    goto LAB_1481fec56;
  }
  pUVar4 = FWeakObjectPtr::Get(local_res18);
  if ((pUVar4 != (UObject *)0x0) && (*(longlong *)&pUVar4[5].field_0x18 != 0)) {
    pUVar3 = FWeakObjectPtr::Get(local_res18);
    pUVar7 = *(UPhysicalMaterial **)&pUVar3[5].field_0x18;
    if (pUVar7 == (UPhysicalMaterial *)0x0) {
      return (UPhysicalMaterial *)0x0;
    }
    bVar2 = UObjectBase::IsValidLowLevel((UObjectBase *)pUVar7);
    if (bVar2) {
      return pUVar7;
    }
    iVar8 = 0xc62;
    goto LAB_1481fec56;
  }
  if (pUVar3 == (UObject *)0x0) {
LAB_1481fec07:
    if (param_4 != (IPhysicsBodyInstanceOwner *)0x0) {
      pUVar7 = (UPhysicalMaterial *)(**(code **)((longlong)*param_4 + 0x18))(param_4);
LAB_1481fec15:
      if (pUVar7 != (UPhysicalMaterial *)0x0) {
        bVar2 = UObjectBase::IsValidLowLevel((UObjectBase *)pUVar7);
        if (bVar2) {
          return pUVar7;
        }
        iVar8 = 0xc79;
        goto LAB_1481fec56;
      }
    }
  }
  else {
    pUVar5 = Z_Construct_UClass_UMeshComponent_NoRegister();
    iVar8 = (int)pUVar5->_padding_;
    if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar8) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar8 * 8) !=
        &pUVar5->_padding_)) goto LAB_1481fec07;
    plVar6 = (longlong *)(**(code **)(*(longlong *)pUVar3 + 0x690))(pUVar3,0);
    if (plVar6 != (longlong *)0x0) {
      pUVar7 = (UPhysicalMaterial *)(**(code **)(*plVar6 + 0x318))(plVar6);
      goto LAB_1481fec15;
    }
  }
  pUVar7 = (GEngine->DefaultPhysMaterial).field0_0x0.DebugPtr;
  if (pUVar7 == (UPhysicalMaterial *)0x0) {
    return (UPhysicalMaterial *)0x0;
  }
  bVar2 = UObjectBase::IsValidLowLevel((UObjectBase *)pUVar7);
  if (bVar2) {
    return pUVar7;
  }
  iVar8 = 0xc7f;
LAB_1481fec56:
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!ReturnPhysMaterial || ReturnPhysMaterial->IsValidLowLevel()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                     ,iVar8,L"");
  if (!bVar2) {
    return pUVar7;
  }
  pcVar1 = (code *)swi(3);
  pUVar7 = (UPhysicalMaterial *)(*pcVar1)();
  return pUVar7;
}

// GetSleepThresholdMultiplier @ 1481fedc0

float __thiscall FBodyInstance::GetSleepThresholdMultiplier(FBodyInstance *this)

{
  if (this->SleepFamily == Sensitive) {
    return SensitiveSleepThresholdMultiplier;
  }
  if (this->SleepFamily == Custom) {
    return this->CustomSleepThresholdMultiplier;
  }
  return __real_3f800000;
}

// GetSquaredDistanceToBody @ 1481ff710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FBodyInstance::GetSquaredDistanceToBody
          (FBodyInstance *this,TVector<double> *param_1,float *param_2,TVector<double> *param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  UObject *pUVar4;
  FString *pFVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined4 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auStack_1a8 [32];
  char cStack_188;
  char acStack_187 [3];
  undefined4 uStack_184;
  FBodyInstance *pFStack_180;
  FBodyInstance *pFStack_178;
  undefined1 auStack_170 [16];
  TVector<double> *pTStack_160;
  FSingleParticlePhysicsProxy *pFStack_158;
  char *pcStack_150;
  FBodyInstance **ppFStack_148;
  FBodyInstance **ppFStack_140;
  char *pcStack_138;
  undefined1 *puStack_130;
  float *pfStack_128;
  TVector<double> **ppTStack_120;
  TVector<double> *pTStack_118;
  undefined4 *puStack_110;
  TTransform<double> *pTStack_108;
  undefined1 auStack_100 [16];
  double dStack_f0;
  TTransform<double> TStack_e8;
  ulonglong uStack_88;
  
  uStack_88 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  bVar6 = false;
  if (param_3 != (TVector<double> *)0x0) {
    dVar1 = (param_1->field0_0x0)._s_0.Y;
    (param_3->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
    (param_3->field0_0x0)._s_0.Y = dVar1;
    (param_3->field0_0x0)._s_0.Z = (param_1->field0_0x0)._s_0.Z;
    *param_2 = 0.0;
  }
  uStack_184 = 0x7f7fc99e;
  cStack_188 = '\0';
  acStack_187[0] = '\x01';
  pFStack_178 = this;
  if (this->WeldParent != (FBodyInstance *)0x0) {
    pFStack_178 = this->WeldParent;
  }
  pFStack_180 = this;
  pTStack_160 = param_3;
  GetUnrealWorldTransform(pFStack_178,&TStack_e8,true,false);
  pcStack_150 = acStack_187;
  TStack_e8.Rotation.XY.m128d_f64[0] =
       TStack_e8.Rotation.XY.m128d_f64[0] *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  TStack_e8.Rotation.XY.m128d_f64[1] =
       TStack_e8.Rotation.XY.m128d_f64[1] *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  ppFStack_148 = &pFStack_178;
  ppFStack_140 = &pFStack_180;
  pcStack_138 = &cStack_188;
  puStack_130 = auStack_100;
  ppTStack_120 = &pTStack_160;
  TStack_e8.Rotation.ZW.m128d_f64[0] =
       TStack_e8.Rotation.ZW.m128d_f64[0] *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  TStack_e8.Rotation.ZW.m128d_f64[1] =
       TStack_e8.Rotation.ZW.m128d_f64[1] *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  TStack_e8.Translation.ZW.m128d_f64[0] =
       (param_1->field0_0x0)._s_0.Z - TStack_e8.Translation.ZW.m128d_f64[0];
  TStack_e8.Translation.XY.m128d_f64[0] =
       (param_1->field0_0x0)._s_0.X - TStack_e8.Translation.XY.m128d_f64[0];
  TStack_e8.Translation.XY.m128d_f64[1] =
       (param_1->field0_0x0)._s_0.Y - TStack_e8.Translation.XY.m128d_f64[1];
  uVar14 = (undefined4)((ulonglong)TStack_e8.Translation.XY.m128d_f64[1] >> 0x20);
  auVar16._8_4_ = SUB84(TStack_e8.Translation.XY.m128d_f64[1],0);
  auVar16._0_8_ = TStack_e8.Translation.XY.m128d_f64[0];
  auVar16._12_4_ = uVar14;
  auVar15._8_4_ = SUB84(TStack_e8.Rotation.XY.m128d_f64[1],0);
  auVar15._0_8_ = TStack_e8.Rotation.XY.m128d_f64[0];
  auVar15._12_4_ = (int)((ulonglong)TStack_e8.Rotation.XY.m128d_f64[1] >> 0x20);
  auVar8._8_4_ = SUB84(TStack_e8.Rotation.ZW.m128d_f64[1],0);
  auVar8._0_8_ = TStack_e8.Rotation.ZW.m128d_f64[0];
  auVar8._12_4_ = (int)((ulonglong)TStack_e8.Rotation.ZW.m128d_f64[1] >> 0x20);
  auVar15 = blendpd(auVar15,auVar8,2);
  auVar17._0_8_ =
       auVar16._8_8_ * TStack_e8.Rotation.XY.m128d_f64[0] -
       TStack_e8.Rotation.XY.m128d_f64[1] * TStack_e8.Translation.XY.m128d_f64[0];
  auVar17._8_8_ =
       TStack_e8.Translation.ZW.m128d_f64[0] * TStack_e8.Rotation.XY.m128d_f64[1] -
       TStack_e8.Rotation.ZW.m128d_f64[0] * TStack_e8.Translation.XY.m128d_f64[1];
  auVar7._8_4_ = SUB84(TStack_e8.Translation.XY.m128d_f64[1],0);
  auVar7._0_8_ = TStack_e8.Translation.XY.m128d_f64[0];
  auVar7._12_4_ = uVar14;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = TStack_e8.Translation.ZW.m128d_f64[0];
  auVar8 = blendpd(auVar7,auVar3,2);
  auVar9._0_8_ = auVar8._0_8_ * TStack_e8.Rotation.ZW.m128d_f64[0] -
                 auVar15._0_8_ * TStack_e8.Translation.ZW.m128d_f64[0];
  auVar9._8_8_ = auVar8._8_8_ * TStack_e8.Rotation.ZW.m128d_f64[1] - auVar15._8_8_ * 0.0;
  auVar8 = blendpd(auVar17,auVar9,2);
  dVar1 = auVar17._8_8_ + auVar17._8_8_;
  dVar2 = auVar9._0_8_ + auVar9._0_8_;
  uVar14 = (undefined4)((ulonglong)dVar2 >> 0x20);
  auVar18._0_8_ = auVar8._0_8_ + auVar8._0_8_;
  auVar18._8_8_ = auVar8._8_8_ + auVar8._8_8_;
  auVar12._8_4_ = SUB84(dVar2,0);
  auVar12._0_8_ = dVar1;
  auVar12._12_4_ = uVar14;
  auVar10._8_4_ = SUB84(dVar2,0);
  auVar10._0_8_ = dVar1;
  auVar10._12_4_ = uVar14;
  auVar8 = blendpd(auVar10,auVar18,2);
  auVar13._0_8_ =
       auVar12._8_8_ * TStack_e8.Rotation.XY.m128d_f64[0] -
       dVar1 * TStack_e8.Rotation.XY.m128d_f64[1];
  auVar13._8_8_ =
       auVar18._0_8_ * TStack_e8.Rotation.XY.m128d_f64[1] -
       dVar2 * TStack_e8.Rotation.ZW.m128d_f64[0];
  auVar11._0_8_ = auVar8._0_8_ * TStack_e8.Rotation.ZW.m128d_f64[0] - auVar18._0_8_ * auVar15._0_8_;
  auVar11._8_8_ = auVar8._8_8_ * TStack_e8.Rotation.ZW.m128d_f64[1] - auVar18._8_8_ * auVar15._8_8_;
  auVar8 = blendpd(auVar13,auVar11,2);
  dVar2 = dVar2 * TStack_e8.Rotation.ZW.m128d_f64[1] + TStack_e8.Translation.XY.m128d_f64[1] +
          auVar11._0_8_;
  dStack_f0 = auVar18._0_8_ * TStack_e8.Rotation.ZW.m128d_f64[1] +
              TStack_e8.Translation.ZW.m128d_f64[0] + auVar8._0_8_;
  auStack_100._8_4_ = SUB84(dVar2,0);
  auStack_100._0_8_ =
       dVar1 * TStack_e8.Rotation.ZW.m128d_f64[1] + TStack_e8.Translation.XY.m128d_f64[0] +
       auVar13._8_8_;
  auStack_100._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  puStack_110 = &uStack_184;
  pTStack_108 = &TStack_e8;
  auStack_170._8_8_ = &pcStack_150;
  auStack_170._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FPhysInterface_Chaos::GetSquaredDistanceToBody'::__l2::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
       ::Call;
  pfStack_128 = param_2;
  pTStack_118 = param_1;
  pFStack_158 = GetPhysicsActor(pFStack_178);
  FPhysInterface_Chaos::ExecuteRead
            (&pFStack_158,
             (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)auStack_170
            );
  if (((cStack_188 == '\0') && (acStack_187[0] == '\0')) && (5 < (byte)LogPhysics._0_1_)) {
    pUVar4 = FWeakObjectPtr::Get(&(pFStack_180->OwnerComponent).WeakPtr);
    if (pUVar4 != (UObject *)0x0) {
      pUVar4 = FWeakObjectPtr::Get(&(pFStack_180->OwnerComponent).WeakPtr);
      pFVar5 = UObjectBaseUtility::GetPathName
                         ((UObjectBaseUtility *)pUVar4,(FString *)auStack_170,(UObject *)0x0);
      if ((pFVar5->Data).ArrayNum == 0) {
        bVar6 = true;
      }
      else {
        bVar6 = true;
      }
    }
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPhysics);
    if ((bVar6) && ((FScriptContainerElement *)auStack_170._0_8_ != (FScriptContainerElement *)0x0))
    {
      FMemory::Free((void *)auStack_170._0_8_);
    }
  }
  return (bool)cStack_188;
}

// GetUnrealWorldAngularVelocityInRadians @ 1481ffc80

TVector<double> * __thiscall
FBodyInstance::GetUnrealWorldAngularVelocityInRadians
          (FBodyInstance *this,TVector<double> *__return_storage_ptr__)

{
  undefined8 uVar1;
  TVector<double> *local_res8;
  FSingleParticlePhysicsProxy *local_res10 [3];
  code *local_18;
  TVector<double> **local_10;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_10 = &local_res8;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FBodyInstance::GetUnrealWorldAngularVelocityInRadians'::__l2::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
             ::Call;
  local_res10[0] = this->ActorHandle;
  local_res8 = __return_storage_ptr__;
  FPhysInterface_Chaos::ExecuteRead
            (local_res10,
             (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_18);
  return __return_storage_ptr__;
}

// GetUnrealWorldAngularVelocityInRadians_AssumesLocked @ 1481ffce0

TVector<double> * __thiscall
FBodyInstance::GetUnrealWorldAngularVelocityInRadians_AssumesLocked
          (FBodyInstance *this,TVector<double> *__return_storage_ptr__)

{
  FSingleParticlePhysicsProxy *local_res8 [4];
  
  local_res8[0] = this->ActorHandle;
  FChaosEngineInterface::GetAngularVelocity_AssumesLocked(__return_storage_ptr__,local_res8);
  return __return_storage_ptr__;
}

// GetUnrealWorldTransform @ 1481ffd20

TTransform<double> * __thiscall
FBodyInstance::GetUnrealWorldTransform
          (FBodyInstance *this,TTransform<double> *__return_storage_ptr__,bool param_1,bool param_2)

{
  FSingleParticlePhysicsProxy *local_res8 [2];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  code *local_38;
  TTransform<double> **local_30;
  TTransform<double> *local_28;
  FBodyInstance *local_20;
  undefined1 *local_18;
  undefined1 *local_10;
  
  local_18 = local_res18;
  *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Translation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(__return_storage_ptr__->Translation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_10 = local_res20;
  *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_30 = &local_28;
  *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`FBodyInstance::GetUnrealWorldTransform'::__l2::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
             ::Call;
  local_res8[0] = this->ActorHandle;
  local_res18[0] = param_1;
  local_res20[0] = param_2;
  local_28 = __return_storage_ptr__;
  local_20 = this;
  FPhysInterface_Chaos::ExecuteRead
            (local_res8,
             (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_38);
  return __return_storage_ptr__;
}

// GetUnrealWorldTransform_AssumesLocked @ 1481fff10

TTransform<double> * __thiscall
FBodyInstance::GetUnrealWorldTransform_AssumesLocked
          (FBodyInstance *this,TTransform<double> *__return_storage_ptr__,bool param_1,bool param_2)

{
  GetUnrealWorldTransformImp_AssumesLocked(__return_storage_ptr__,this,param_1,param_2);
  return __return_storage_ptr__;
}

// GetUnrealWorldVelocity @ 1481fff40

TVector<double> * __thiscall
FBodyInstance::GetUnrealWorldVelocity(FBodyInstance *this,TVector<double> *__return_storage_ptr__)

{
  undefined8 uVar1;
  FSingleParticlePhysicsProxy *local_res8 [4];
  TVector<double> *local_28;
  FBodyInstance *local_20;
  code *local_18;
  TVector<double> **local_10;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_10 = &local_28;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FBodyInstance::GetUnrealWorldVelocity'::__l2::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
             ::Call;
  local_res8[0] = this->ActorHandle;
  local_28 = __return_storage_ptr__;
  local_20 = this;
  FPhysInterface_Chaos::ExecuteRead
            (local_res8,
             (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_18);
  return __return_storage_ptr__;
}

// GetUnrealWorldVelocityAtPoint @ 1481fffb0

TVector<double> * __thiscall
FBodyInstance::GetUnrealWorldVelocityAtPoint
          (FBodyInstance *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  undefined8 uVar1;
  FSingleParticlePhysicsProxy *local_res8 [4];
  TVector<double> *local_28;
  TVector<double> *local_20;
  code *local_18;
  TVector<double> **local_10;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_10 = &local_28;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FBodyInstance::GetUnrealWorldVelocityAtPoint'::__l2::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
             ::Call;
  local_res8[0] = this->ActorHandle;
  local_28 = __return_storage_ptr__;
  local_20 = param_1;
  FPhysInterface_Chaos::ExecuteRead
            (local_res8,
             (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_18);
  return __return_storage_ptr__;
}

// GetUnrealWorldVelocityAtPoint_AssumesLocked @ 148200020

TVector<double> * __thiscall
FBodyInstance::GetUnrealWorldVelocityAtPoint_AssumesLocked
          (FBodyInstance *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  FSingleParticlePhysicsProxy *local_res8 [4];
  
  local_res8[0] = this->ActorHandle;
  FChaosEngineInterface::GetWorldVelocityAtPoint_AssumesLocked
            (__return_storage_ptr__,local_res8,param_1);
  return __return_storage_ptr__;
}

// GetUnrealWorldVelocity_AssumesLocked @ 148200060

TVector<double> * __thiscall
FBodyInstance::GetUnrealWorldVelocity_AssumesLocked
          (FBodyInstance *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  TVector<double> *pTVar3;
  FSingleParticlePhysicsProxy *local_res8 [4];
  TVector<double> local_28;
  
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  local_res8[0] = this->ActorHandle;
  if (local_res8[0] != (FSingleParticlePhysicsProxy *)0x0) {
    pTVar3 = FChaosEngineInterface::GetLinearVelocity_AssumesLocked(&local_28,local_res8);
    dVar2 = (pTVar3->field0_0x0)._s_0.Y;
    dVar1 = (pTVar3->field0_0x0)._s_0.Z;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (pTVar3->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  }
  return __return_storage_ptr__;
}

// GetWalkableSlopeOverride @ 148200f40

FWalkableSlopeOverride * __thiscall FBodyInstance::GetWalkableSlopeOverride(FBodyInstance *this)

{
  bool bVar1;
  UBodySetup *pUVar2;
  
  if (this->bOverrideWalkableSlopeOnInstance == '\0') {
    bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
    if (bVar1) {
      pUVar2 = GetBodySetup(this);
      return &pUVar2->WalkableSlopeOverride;
    }
  }
  return &this->WalkableSlopeOverride;
}

// InitBody @ 148202200

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FBodyInstance::InitBody
          (FBodyInstance *this,UBodySetup *param_1,TTransform<double> *param_2,
          UPrimitiveComponent *param_3,FPhysScene_Chaos *param_4,FInitBodySpawnParams *param_5,
          IPhysicsBodyInstanceOwner *param_6)

{
  InitBody(this,param_1,param_2,param_3,(UObject *)0x0,param_4,param_5,param_6);
  return;
}

// InitBody @ 148202240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FBodyInstance::InitBody
          (FBodyInstance *this,UBodySetup *param_1,TTransform<double> *param_2,
          UPrimitiveComponent *param_3,UObject *param_4,FPhysScene_Chaos *param_5,
          FInitBodySpawnParams *param_6,IPhysicsBodyInstanceOwner *param_7)

{
  int *piVar1;
  double *pdVar2;
  undefined4 *puVar3;
  FName FVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  bool bVar10;
  bool bVar11;
  TConsoleVariableData<int> *pTVar12;
  uchar this_00 [8];
  bool bVar13;
  bool bVar14;
  int iVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_InitBody> FVar17;
  ForElementType<UE::Math::TTransform<double>_> FVar18;
  UClass *pUVar19;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  ForElementType<FBodyInstance_*> FVar20;
  longlong lVar21;
  uint uVar22;
  ForElementType<FBodyInstance_*> FVar23;
  FNameEntryId FVar24;
  undefined1 auStackY_2a8 [32];
  FName local_248;
  FColor_u_0 local_238 [2];
  undefined1 local_230 [20];
  uint uStack_21c;
  FName local_218;
  uchar local_210 [8];
  FStatMessage local_208;
  FName local_1f8 [2];
  TInitBodiesHelperBase<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> local_1e8;
  TInitBodiesHelperBase<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> local_168;
  TArray<FBodyInstance_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> local_e8;
  TArray<UE::Math::TTransform<double>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  local_c8;
  ulonglong local_48;
  
  pTVar12 = CVarAllowCreatePhysxBodies.Ref;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  local_230._8_8_ = param_1;
  local_210 = (uchar  [8])this;
  bVar13 = IsInParallelGameThread();
  if (bVar13) {
LAB_1482022a8:
    lVar21 = 0;
  }
  else {
    bVar13 = IsInGameThread();
    lVar21 = 4;
    if (bVar13) goto LAB_1482022a8;
  }
  if (*(int *)((longlong)pTVar12->ShadowedValue + lVar21) == 0) {
    return;
  }
  FVar17 = StatPtr_STAT_InitBody;
  if (StatPtr_STAT_InitBody == (FThreadSafeStaticStat<FStat_STAT_InitBody>)0x0) {
    pFVar16 = ::FName::FName(local_1f8,"STAT_InitBody");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_InitBody>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InitBody,*pFVar16,L"Init Body",
                        "STATGROUP_Physics","STATCAT_Advanced",L"Physics",true,true,ST_int64,true,
                        false,MCR_Invalid);
  }
  local_248.ComparisonIndex.Value = 0;
  local_248.Number = 0;
  bVar11 = false;
  bVar10 = false;
  bVar13 = false;
  FVar4 = *(FName *)FVar17;
  FVar24 = FVar4.ComparisonIndex.Value;
  uVar22 = FVar4.Number;
  if ((FVar24.Value != 0) || (uVar22 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_238[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_238[0]._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar10 = false;
      bVar13 = true;
      if (-1 < CpuChannel->Enabled) {
        local_218.ComparisonIndex.Value = FVar24.Value;
        local_218.Number = uVar22;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_218,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                   ,0x6bf);
        bVar10 = true;
        bVar13 = true;
      }
    }
    bVar11 = false;
    if (FThreadStats::bPrimaryEnable != false) {
      local_230._16_4_ = FVar24.Value;
      uStack_21c = uVar22;
      FThreadStats::AddMessage(FVar4,CycleScopeStart);
      bVar11 = true;
      local_248 = FVar4;
    }
  }
  FVar23 = (ForElementType<FBodyInstance_*>)local_230._8_8_;
  if (((ForElementType<FBodyInstance_*>)local_230._8_8_ == (ForElementType<FBodyInstance_*>)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Setup",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                          ,0x6c0,L""), bVar14)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this_00 = local_210;
  local_e8.ArrayMax = 1;
  local_e8.AllocatorInstance.SecondaryData = (ForElementType<FBodyInstance_*>)0x0;
  local_c8.AllocatorInstance.SecondaryData = (ForElementType<UE::Math::TTransform<double>_>)0x0;
  local_e8.ArrayNum = 0;
  local_c8.ArrayNum = 0;
  local_c8.ArrayMax = 1;
  local_230[0] = local_210[0];
  local_230[1] = local_210[1];
  local_230[2] = local_210[2];
  local_230[3] = local_210[3];
  local_230[4] = local_210[4];
  local_230[5] = local_210[5];
  local_230[6] = local_210[6];
  local_230[7] = local_210[7];
  iVar15 = 0;
  if ((&local_e8 <=
       (TArray<FBodyInstance_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)local_230
      ) && (local_230 < &local_e8.AllocatorInstance.SecondaryData)) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar14) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar15 = local_e8.ArrayNum;
    if (local_e8.ArrayNum == local_e8.ArrayMax) {
      iVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FBodyInstance_*>_>
                         (0x808,&local_e8.AllocatorInstance,&local_e8.ArrayMax);
    }
  }
  local_e8.ArrayNum = iVar15 + 1;
  FVar20 = (ForElementType<FBodyInstance_*>)&local_e8;
  if (local_e8.AllocatorInstance.SecondaryData != (ForElementType<FBodyInstance_*>)0x0) {
    FVar20 = local_e8.AllocatorInstance.SecondaryData;
  }
  *(undefined8 *)((longlong)FVar20 + (longlong)iVar15 * 8) = local_230._0_8_;
  FVar18 = (ForElementType<UE::Math::TTransform<double>_>)&local_c8;
  if (local_c8.AllocatorInstance.SecondaryData != (ForElementType<UE::Math::TTransform<double>_>)0x0
     ) {
    FVar18 = local_c8.AllocatorInstance.SecondaryData;
  }
  if ((ulonglong)FVar18 <= param_2) {
    FVar18 = (ForElementType<UE::Math::TTransform<double>_>)&local_c8;
    if (local_c8.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Math::TTransform<double>_>)0x0) {
      FVar18 = local_c8.AllocatorInstance.SecondaryData;
    }
    FVar23 = (ForElementType<FBodyInstance_*>)local_230._8_8_;
    if ((param_2 < (TTransform<double> *)((longlong)local_c8.ArrayMax * 0x60 + (longlong)FVar18)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), FVar23 = (ForElementType<FBodyInstance_*>)local_230._8_8_, bVar14)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (local_c8.ArrayNum == local_c8.ArrayMax) {
    local_c8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TTransform<double>_>_>
                   (0x1060,&local_c8.AllocatorInstance,&local_c8.ArrayMax);
  }
  dVar9 = (param_2->Rotation).XY.m128d_f64[1];
  FVar18 = (ForElementType<UE::Math::TTransform<double>_>)&local_c8;
  if (local_c8.AllocatorInstance.SecondaryData != (ForElementType<UE::Math::TTransform<double>_>)0x0
     ) {
    FVar18 = local_c8.AllocatorInstance.SecondaryData;
  }
  lVar21 = (longlong)local_c8.ArrayNum * 0x60;
  local_c8.ArrayNum = local_c8.ArrayNum + 1;
  *(double *)(lVar21 + (longlong)FVar18) = (param_2->Rotation).XY.m128d_f64[0];
  ((double *)(lVar21 + (longlong)FVar18))[1] = dVar9;
  dVar9 = (param_2->Rotation).ZW.m128d_f64[1];
  pdVar2 = (double *)(lVar21 + 0x10 + (longlong)FVar18);
  *pdVar2 = (param_2->Rotation).ZW.m128d_f64[0];
  pdVar2[1] = dVar9;
  dVar9 = (param_2->Translation).XY.m128d_f64[1];
  pdVar2 = (double *)(lVar21 + 0x20 + (longlong)FVar18);
  *pdVar2 = (param_2->Translation).XY.m128d_f64[0];
  pdVar2[1] = dVar9;
  dVar9 = (param_2->Translation).ZW.m128d_f64[1];
  pdVar2 = (double *)(lVar21 + 0x30 + (longlong)FVar18);
  *pdVar2 = (param_2->Translation).ZW.m128d_f64[0];
  pdVar2[1] = dVar9;
  uVar6 = *(undefined4 *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 4);
  uVar7 = *(undefined4 *)((param_2->Scale3D).XY.m128d_f64 + 1);
  uVar8 = *(undefined4 *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 0xc);
  puVar3 = (undefined4 *)(lVar21 + 0x40 + (longlong)FVar18);
  *puVar3 = *(undefined4 *)(param_2->Scale3D).XY.m128d_f64;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  uVar6 = *(undefined4 *)((longlong)(param_2->Scale3D).ZW.m128d_f64 + 4);
  uVar7 = *(undefined4 *)((param_2->Scale3D).ZW.m128d_f64 + 1);
  uVar8 = *(undefined4 *)((longlong)(param_2->Scale3D).ZW.m128d_f64 + 0xc);
  puVar3 = (undefined4 *)(lVar21 + 0x50 + (longlong)FVar18);
  *puVar3 = *(undefined4 *)(param_2->Scale3D).ZW.m128d_f64;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  if ((param_4 == (UObject *)0x0) &&
     (((param_3 == (UPrimitiveComponent *)0x0 ||
       (param_4 = *(UObject **)&param_3->field_0xa8, param_4 == (UObject *)0x0)) &&
      (param_7 != (IPhysicsBodyInstanceOwner *)0x0)))) {
    param_4 = (UObject *)(**(code **)((longlong)*param_7 + 0x10))(param_7);
  }
  if (param_6->bStaticPhysics != false) {
    TInitBodiesHelperBase<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
    TInitBodiesHelperBase<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
              (&local_168,&local_e8,&local_c8,(UBodySetup *)FVar23,param_3,param_4,param_5,param_6,
               param_6->Aggregate,param_7);
    local_168.bStatic = true;
    local_168.SkelMeshComp = (USkeletalMeshComponent *)0x0;
    if ((local_168.SpawnParams)->bPhysicsTypeDeterminesSimulation != false) {
      GetSimulatingAndBlendWeight
                ((USkeletalMeshComponent *)0x0,local_168.BodySetup,&local_168.InstanceBlendWeight,
                 &local_168.bInstanceSimulatePhysics);
    }
    TInitBodiesHelperBase<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::InitBodies
              (&local_168);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_168.PhysXName.SharedReferenceCount.ReferenceController);
    goto LAB_1482027a1;
  }
  TInitBodiesHelperBase<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
  TInitBodiesHelperBase<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
            (&local_1e8,&local_e8,&local_c8,(UBodySetup *)FVar23,param_3,param_4,param_5,param_6,
             param_6->Aggregate,param_7);
  local_1e8.bStatic = (local_1e8.SpawnParams)->bStaticPhysics != false;
  if ((USkeletalMeshComponent *)local_1e8.PrimitiveComp == (USkeletalMeshComponent *)0x0) {
LAB_148202766:
    local_1e8.SkelMeshComp = (USkeletalMeshComponent *)0x0;
  }
  else {
    pUVar19 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar15 = (int)pUVar19->_padding_;
    if ((*(int *)(*(longlong *)&(local_1e8.PrimitiveComp)->field_0x10 + 0x38) < iVar15) ||
       (local_1e8.SkelMeshComp = (USkeletalMeshComponent *)local_1e8.PrimitiveComp,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&(local_1e8.PrimitiveComp)->field_0x10 + 0x30) +
        (longlong)iVar15 * 8) != &pUVar19->_padding_)) goto LAB_148202766;
  }
  if ((local_1e8.SpawnParams)->bPhysicsTypeDeterminesSimulation != false) {
    GetSimulatingAndBlendWeight
              (local_1e8.SkelMeshComp,local_1e8.BodySetup,&local_1e8.InstanceBlendWeight,
               &local_1e8.bInstanceSimulatePhysics);
  }
  TInitBodiesHelperBase<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::InitBodies
            (&local_1e8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1e8.PhysXName.SharedReferenceCount.ReferenceController);
  local_168.DebugName.SharedReferenceCount.ReferenceController =
       local_1e8.DebugName.SharedReferenceCount.ReferenceController;
LAB_1482027a1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_168.DebugName.SharedReferenceCount.ReferenceController);
  UpdateInterpolateWhenSubStepping((FBodyInstance *)this_00);
  if (local_c8.AllocatorInstance.SecondaryData != (ForElementType<UE::Math::TTransform<double>_>)0x0
     ) {
    FMemory::Free((void *)local_c8.AllocatorInstance.SecondaryData);
  }
  if (local_e8.AllocatorInstance.SecondaryData != (ForElementType<FBodyInstance_*>)0x0) {
    FMemory::Free((void *)local_e8.AllocatorInstance.SecondaryData);
  }
  if (bVar13) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar11) && (local_248 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_208.NameAndInfo.Index = local_248.ComparisonIndex.Value;
      local_208.NameAndInfo.Number = local_248.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter((LARGE_INTEGER *)(local_230 + 0x10));
      local_208.StatData.Pad[4] = '\0';
      local_208.StatData.Pad[5] = '\0';
      local_208.StatData.Pad[6] = '\0';
      local_208.StatData.Pad[7] = '\0';
      local_208.StatData.Pad[0] = local_230[0x10];
      local_208.StatData.Pad[1] = local_230[0x11];
      local_208.StatData.Pad[2] = local_230[0x12];
      local_208.StatData.Pad[3] = local_230[0x13];
      FThreadStats::AddStatMessage(this_01,&local_208);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

// InitDynamicProperties_AssumesLocked @ 1482028e0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall FBodyInstance::InitDynamicProperties_AssumesLocked(FBodyInstance *this)

{
  int iVar1;
  bool bVar2;
  uchar uVar3;
  TEnumAsByte<ECollisionTraceFlag> TVar4;
  bool bVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  UBodySetupCore *this_00;
  undefined7 extraout_var;
  UPhysicsSettings *pUVar8;
  FMessageLog *this_01;
  FText *pFVar9;
  FText *pFVar10;
  FTextFormat *pFVar11;
  double *pdVar12;
  longlong *plVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  FName local_res8;
  FSingleParticlePhysicsProxy *local_res10;
  float local_res18 [2];
  FSingleParticlePhysicsProxy *local_res20;
  undefined1 local_e8 [16];
  undefined1 local_d8 [8];
  FSharedReferencer<1> local_d0;
  undefined1 local_c8 [16];
  FSingleParticlePhysicsProxy **local_b8;
  TVector<double>_u_0 local_b0;
  FText local_98;
  FText local_88;
  FText local_78;
  FMessageLog local_68;
  
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
  if (!bVar2) {
    return;
  }
  pUVar6 = FWeakObjectPtr::Get(&(this->OwnerComponent).WeakPtr);
  if (pUVar6 == (UObject *)0x0) {
LAB_148202961:
    uVar3 = (this->CollisionEnabled).Value;
  }
  else {
    if ((*(longlong *)&pUVar6[4].field_0x8 != 0) &&
       ((*(byte *)(*(longlong *)&pUVar6[4].field_0x8 + 0x5d) & 1) == 0)) goto LAB_14820296d;
    pUVar7 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar7->_padding_)) goto LAB_148202961;
    uVar3 = pUVar6[0x17].field_0xf;
  }
  if (uVar3 == '\x01') {
    return;
  }
LAB_14820296d:
  local_res8 = (FName)this->ActorHandle;
  bVar2 = FChaosEngineInterface::IsDynamic((FSingleParticlePhysicsProxy **)&local_res8);
  if (bVar2) {
    this_00 = (UBodySetupCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    TVar4 = UBodySetupCore::GetCollisionTraceFlag(this_00);
    if (*(char *)CONCAT71(extraout_var,TVar4.Value) == '\x03') {
      if (((this->_padding_ & 1) != 0) &&
         (pUVar6 = FWeakObjectPtr::Get(&(this->OwnerComponent).WeakPtr), pUVar6 != (UObject *)0x0))
      {
        ::FName::FName(&local_res8,"PIE");
        this_01 = FMessageLog::FMessageLog(&local_68,&local_res8);
        UObjectBaseUtility::GetPathName
                  ((UObjectBaseUtility *)pUVar6,(FString *)local_e8,(UObject *)0x0);
        pFVar9 = FText::FromString(&local_78,(FString *)local_e8);
        pFVar10 = FText::AsLocalizable_Advanced_LocText
                            (&local_88,L"BodyInstance",L"SimComplexAsSimple",
                             L"Trying to simulate physics on \'\'{0}\'\' but it has ComplexAsSimple collision."
                            );
        pFVar11 = FTextFormat::FTextFormat((FTextFormat *)local_c8,pFVar10,Default);
        pFVar9 = FText::Format<FText>(&local_98,pFVar11,pFVar9);
        FMessageLog::Warning(this_01,(TSharedRef<FTokenizedMessage,1> *)local_d8,pFVar9);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_d0.ReferenceController);
        if (local_98.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
        }
        if (local_88.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
        }
        if ((FScriptContainerElement *)local_e8._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_e8._0_8_);
        }
        FMessageLog::~FMessageLog(&local_68);
      }
    }
    else {
      UpdateMassProperties(this);
      UpdateDampingProperties(this);
      if (this->bOverrideMaxAngularVelocity == '\0') {
        pUVar8 = UPhysicsSettings::Get();
        local_res18[0] = *(float *)&pUVar8->_padding_;
      }
      else {
        local_res18[0] = this->MaxAngularVelocity;
      }
      local_res18[0] = local_res18[0] * __real_3c8efa35;
      local_c8._0_8_ = &local_res8;
      local_c8._8_8_ = local_res18;
      local_res8 = (FName)((ulonglong)local_res8 & 0xffffffffffffff00);
      local_b8 = &local_res10;
      local_d0.ReferenceController = (TReferenceControllerBase<1> *)local_c8;
      local_d8 = (undefined1  [8])
                 UE::Core::Private::Function::
                 TFunctionRefCaller<`FBodyInstance::SetMaxAngularVelocityInRadians'::__l2::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
                 ::Call;
      local_res20 = this->ActorHandle;
      local_res10 = (FSingleParticlePhysicsProxy *)
                    CONCAT44(local_res10._4_4_,local_res18[0] * __real_42652ee0);
      FPhysInterface_Chaos::ExecuteWrite
                (&local_res20,
                 (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)
                 local_d8);
      this->MaxAngularVelocity = local_res10._0_4_;
      fVar17 = __real_bf800000;
      if (this->bOverrideMaxDepenetrationVelocity != '\0') {
        fVar17 = this->MaxDepenetrationVelocity;
      }
      local_e8._8_8_ = local_d8;
      local_d0.ReferenceController._0_4_ = fVar17;
      local_e8._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`FBodyInstance::UpdateMaxDepenetrationVelocity'::__l2::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
           ::Call;
      local_res8 = (FName)this->ActorHandle;
      local_d8 = (undefined1  [8])this;
      FPhysInterface_Chaos::ExecuteWrite
                ((FSingleParticlePhysicsProxy **)&local_res8,
                 (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)
                 local_e8);
      local_res8 = (FName)(CONCAT71(local_res8._1_7_,(byte)this->field_0x3e >> 2) &
                          0xffffffffffffff01);
      local_e8._8_8_ = &local_res8;
      local_e8._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`FBodyInstance::UpdateOneWayInteraction'::__l2::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
           ::Call;
      local_res10 = this->ActorHandle;
      FPhysInterface_Chaos::ExecuteWrite
                (&local_res10,
                 (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)
                 local_e8);
    }
    pUVar6 = FWeakObjectPtr::Get(&(this->OwnerComponent).WeakPtr);
    if (pUVar6 == (UObject *)0x0) {
      plVar13 = (longlong *)0x0;
    }
    else {
      plVar13 = *(longlong **)&pUVar6[4].field_0x8;
    }
    local_b0._s_0.Z = 0.0;
    local_b0._s_0.X = 0.0;
    local_b0._s_0.Y = 0.0;
    bVar2 = false;
    if (plVar13 != (longlong *)0x0) {
      pdVar12 = (double *)(**(code **)(*plVar13 + 0x360))(0,local_c8);
      local_b0._s_0.X = *pdVar12;
      local_b0._s_0.Y = pdVar12[1];
      local_b0._s_0.Z = pdVar12[2];
      bVar2 = false;
      if (__real_3e45798ec0000000 <
          local_b0._s_0.Y * local_b0._s_0.Y + local_b0._s_0.X * local_b0._s_0.X +
          local_b0._s_0.Z * local_b0._s_0.Z) {
        bVar2 = true;
      }
    }
    bVar5 = FBodyInstanceCore::ShouldInstanceSimulatingPhysics((FBodyInstanceCore *)this);
    if (bVar5) {
      local_res8 = (FName)this->ActorHandle;
      FChaosEngineInterface::SetLinearVelocity_AssumesLocked
                ((FSingleParticlePhysicsProxy **)&local_res8,(TVector<double> *)&local_b0._s_0,true)
      ;
    }
    fVar17 = __real_3f800000;
    fVar18 = SensitiveSleepThresholdMultiplier;
    if ((this->SleepFamily != Sensitive) && (fVar18 = __real_3f800000, this->SleepFamily == Custom))
    {
      fVar18 = this->CustomSleepThresholdMultiplier;
    }
    local_res8 = (FName)this->ActorHandle;
    FChaosEngineInterface::SetSleepThresholdMultiplier_AssumesLocked
              ((FSingleParticlePhysicsProxy **)&local_res8,fVar18);
    local_res8 = (FName)this->ActorHandle;
    fVar16 = FChaosEngineInterface::GetSleepEnergyThreshold_AssumesLocked
                       ((FSingleParticlePhysicsProxy **)&local_res8);
    fVar18 = SensitiveSleepThresholdMultiplier;
    if ((this->SleepFamily != Sensitive) && (fVar18 = fVar17, this->SleepFamily == Custom)) {
      fVar18 = this->CustomSleepThresholdMultiplier;
    }
    local_res8 = (FName)this->ActorHandle;
    FChaosEngineInterface::SetSleepEnergyThreshold_AssumesLocked
              ((FSingleParticlePhysicsProxy **)&local_res8,fVar18 * fVar16);
    local_res8 = (FName)this->ActorHandle;
    fVar17 = FChaosEngineInterface::GetStabilizationEnergyThreshold_AssumesLocked
                       ((FSingleParticlePhysicsProxy **)&local_res8);
    local_res8 = (FName)this->ActorHandle;
    FChaosEngineInterface::SetStabilizationEnergyThreshold_AssumesLocked
              ((FSingleParticlePhysicsProxy **)&local_res8,
               fVar17 * this->StabilizationThresholdMultiplier);
    uVar15 = 0xffffffff;
    if (this->bOverrideIterationCounts == '\0') {
      uVar14 = 0xffffffff;
    }
    else {
      uVar14 = (uint)this->PositionSolverIterationCount;
    }
    local_res8 = (FName)this->ActorHandle;
    FChaosEngineInterface::SetSolverPositionIterationCount_AssumesLocked
              ((FSingleParticlePhysicsProxy **)&local_res8,uVar14);
    if (this->bOverrideIterationCounts == '\0') {
      uVar14 = 0xffffffff;
    }
    else {
      uVar14 = (uint)this->VelocitySolverIterationCount;
    }
    local_res8 = (FName)this->ActorHandle;
    FChaosEngineInterface::SetSolverVelocityIterationCount_AssumesLocked
              ((FSingleParticlePhysicsProxy **)&local_res8,uVar14);
    if (this->bOverrideIterationCounts != '\0') {
      uVar15 = (uint)this->ProjectionSolverIterationCount;
    }
    local_res8 = (FName)this->ActorHandle;
    FChaosEngineInterface::SetSolverProjectionIterationCount_AssumesLocked
              ((FSingleParticlePhysicsProxy **)&local_res8,uVar15);
    CreateDOFLock(this);
    local_res8 = (FName)this->ActorHandle;
    bVar5 = FPhysInterface_Chaos::IsInScene((FSingleParticlePhysicsProxy **)&local_res8);
    if (bVar5) {
      local_res8 = (FName)this->ActorHandle;
      bVar5 = FChaosEngineInterface::IsRigidBody((FSingleParticlePhysicsProxy **)&local_res8);
      if ((((!bVar5) ||
           (bVar5 = FChaosEngineInterface::IsKinematic_AssumesLocked
                              ((FSingleParticlePhysicsProxy **)&local_res8), !bVar5)) &&
          ((this->_padding_ & 0x40) == 0)) && (!bVar2)) {
        local_res8 = (FName)this->ActorHandle;
        FChaosEngineInterface::SetWakeCounter_AssumesLocked
                  ((FSingleParticlePhysicsProxy **)&local_res8,0.0);
        local_res8 = (FName)this->ActorHandle;
        FChaosEngineInterface::PutToSleep_AssumesLocked((FSingleParticlePhysicsProxy **)&local_res8)
        ;
      }
    }
    local_res8 = (FName)this->ActorHandle;
    FChaosEngineInterface::SetInitialized_AssumesLocked
              ((FSingleParticlePhysicsProxy **)&local_res8,true);
  }
  return;
}

// InitStaticBodies @ 1482044b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
FBodyInstance::InitStaticBodies
          (TArray<FBodyInstance_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2,
          UBodySetup *param_3,UPrimitiveComponent *param_4,FPhysScene_Chaos *param_5,
          IPhysicsBodyInstanceOwner *param_6)

{
  int *piVar1;
  int iVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_StaticInitBodies> FVar11;
  UClass *pUVar12;
  UObject *pUVar13;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  uint uVar14;
  undefined4 local_res8;
  uint uStackX_c;
  FColor_u_0 local_res10 [2];
  FName local_res18;
  LARGE_INTEGER local_res20;
  FName local_118;
  FStatMessage local_108;
  FName local_f8 [2];
  TInitBodiesHelperBase<TSizedDefaultAllocator<32>_> local_e8;
  TArray<FBodyInstance_*,TSizedDefaultAllocator<32>_> local_68;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_58;
  
  FVar11 = StatPtr_STAT_StaticInitBodies;
  if (StatPtr_STAT_StaticInitBodies == (FThreadSafeStaticStat<FStat_STAT_StaticInitBodies>)0x0) {
    pFVar10 = ::FName::FName(local_f8,"STAT_StaticInitBodies");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_StaticInitBodies>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StaticInitBodies,*pFVar10,
                        L"Static Init Bodies","STATGROUP_Physics","STATCAT_Advanced",L"Physics",true
                        ,true,ST_int64,true,false,MCR_Invalid);
  }
  local_118.ComparisonIndex.Value = 0;
  local_118.Number = 0;
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  FVar3 = *(FName *)FVar11;
  uVar14 = FVar3.Number;
  if ((FVar3.ComparisonIndex.Value.Value != 0) || (uVar14 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar6 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar3.ComparisonIndex.Value.Value;
        local_res18.Number = uVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                   ,0x12c7);
        bVar6 = true;
        bVar5 = true;
      }
    }
    bVar7 = false;
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8._0_1_ = FVar3.ComparisonIndex.Value._0_1_;
      local_res8._1_1_ = FVar3.ComparisonIndex.Value._1_1_;
      local_res8._2_2_ = FVar3.ComparisonIndex.Value._2_2_;
      uStackX_c = uVar14;
      FThreadStats::AddMessage(FVar3,CycleScopeStart);
      bVar7 = true;
      local_118 = FVar3;
    }
  }
  if (param_3 == (UBodySetup *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("BodySetup",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                       ,0x12c8,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (param_5 == (FPhysScene_Chaos *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRBScene",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                       ,0x12c9,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (param_1->ArrayNum < 1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Bodies.Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                       ,0x12ca,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (param_6 != (IPhysicsBodyInstanceOwner *)0x0) {
    cVar9 = (**(code **)((longlong)*param_6 + 8))();
    if (cVar9 == '\0') {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InBodyInstanceOwner || InBodyInstanceOwner->IsStaticPhysics()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                         ,0x12cb,L"");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  if ((param_4 == (UPrimitiveComponent *)0x0) ||
     ((param_4->field_0x1ab != '\x02' && (param_4->bStaticWhenNotMoveable != '\0')))) {
    local_res8._0_1_ = true;
    if (param_4 != (UPrimitiveComponent *)0x0) goto LAB_1482046f5;
  }
  else {
    local_res8._0_1_ = false;
LAB_1482046f5:
    pUVar12 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar2 = (int)pUVar12->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&param_4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_4->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar12->_padding_)) {
      pUVar13 = *(UObject **)&param_4->field_0xa8;
      local_res8._1_1_ = true;
      goto LAB_148204752;
    }
  }
  local_res8._1_1_ = false;
  if (param_4 == (UPrimitiveComponent *)0x0) {
    if (param_6 == (IPhysicsBodyInstanceOwner *)0x0) {
      pUVar13 = (UObject *)0x0;
    }
    else {
      pUVar13 = (UObject *)(**(code **)((longlong)*param_6 + 0x10))(param_6);
    }
  }
  else {
    pUVar13 = *(UObject **)&param_4->field_0xa8;
  }
LAB_148204752:
  TInitBodiesHelperBase<TSizedDefaultAllocator<32>_>::
  TInitBodiesHelperBase<TSizedDefaultAllocator<32>_>
            (&local_e8,&local_68,&local_58,param_3,param_4,pUVar13,param_5,
             (FInitBodySpawnParams *)&local_res8,param_5._0_1_,param_6);
  local_68.AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
  (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = param_1->ArrayNum;
  local_68.ArrayMax = param_1->ArrayMax;
  param_1->ArrayNum = 0;
  param_1->ArrayMax = 0;
  local_58.AllocatorInstance.Data = (param_2->AllocatorInstance).Data;
  (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = param_2->ArrayNum;
  local_58.ArrayMax = param_2->ArrayMax;
  param_2->ArrayNum = 0;
  param_2->ArrayMax = 0;
  local_e8.bStatic = true;
  local_e8.SkelMeshComp = (USkeletalMeshComponent *)0x0;
  if ((local_e8.SpawnParams)->bPhysicsTypeDeterminesSimulation != false) {
    GetSimulatingAndBlendWeight
              ((USkeletalMeshComponent *)0x0,local_e8.BodySetup,&local_e8.InstanceBlendWeight,
               &local_e8.bInstanceSimulatePhysics);
  }
  TInitBodiesHelperBase<TSizedDefaultAllocator<32>_>::InitBodies(&local_e8);
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e8.PhysXName.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e8.DebugName.SharedReferenceCount.ReferenceController);
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (local_118 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_108.NameAndInfo.Index = local_118.ComparisonIndex.Value;
      local_108.NameAndInfo.Number = local_118.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_108.StatData.Pad[4] = '\0';
      local_108.StatData.Pad[5] = '\0';
      local_108.StatData.Pad[6] = '\0';
      local_108.StatData.Pad[7] = '\0';
      local_108.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_108.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_108.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_108.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_108);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  return;
}

// InitStaticBodies @ 148204930

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
FBodyInstance::InitStaticBodies
          (TArray<FBodyInstance_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2,
          UBodySetup *param_3,UPrimitiveComponent *param_4,FPhysScene_Chaos *param_5)

{
  int iVar1;
  FName FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_StaticInitBodies> FVar10;
  UClass *pUVar11;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  UObject *pUVar12;
  uint uVar13;
  int *piVar14;
  undefined4 local_res8;
  uint uStackX_c;
  FColor_u_0 local_res10 [2];
  FName local_res18;
  LARGE_INTEGER local_res20;
  FName local_f8;
  FStatMessage local_e8;
  FName local_d8 [2];
  TInitBodiesHelperBase<TSizedDefaultAllocator<32>_> local_c8;
  
  FVar10 = StatPtr_STAT_StaticInitBodies;
  if (StatPtr_STAT_StaticInitBodies == (FThreadSafeStaticStat<FStat_STAT_StaticInitBodies>)0x0) {
    pFVar9 = ::FName::FName(local_d8,"STAT_StaticInitBodies");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_StaticInitBodies>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StaticInitBodies,*pFVar9,
                        L"Static Init Bodies","STATGROUP_Physics","STATCAT_Advanced",L"Physics",true
                        ,true,ST_int64,true,false,MCR_Invalid);
  }
  local_f8.ComparisonIndex.Value = 0;
  local_f8.Number = 0;
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  FVar2 = *(FName *)FVar10;
  uVar13 = FVar2.Number;
  if ((FVar2.ComparisonIndex.Value.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar6 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar2.ComparisonIndex.Value.Value;
        local_res18.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                   ,0x12ae);
        bVar6 = true;
        bVar5 = true;
      }
    }
    bVar7 = false;
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8._0_1_ = FVar2.ComparisonIndex.Value._0_1_;
      local_res8._1_1_ = FVar2.ComparisonIndex.Value._1_1_;
      local_res8._2_2_ = FVar2.ComparisonIndex.Value._2_2_;
      uStackX_c = uVar13;
      FThreadStats::AddMessage(FVar2,CycleScopeStart);
      bVar7 = true;
      local_f8 = FVar2;
    }
  }
  if ((param_3 == (UBodySetup *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("BodySetup",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                         ,0x12b0,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((param_5 == (FPhysScene_Chaos *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InRBScene",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                         ,0x12b1,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((param_1->ArrayNum < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Bodies.Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                         ,0x12b2,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar8 = IsInGameThread();
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                         ,0x12b3,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  piVar14 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar14 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`FBodyInstance::InitStaticBodies'::__l2::_dynamic_atexit_destructor_for__BodiesStatic__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar14 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    atexit(`FBodyInstance::InitStaticBodies'::__l2::
           _dynamic_atexit_destructor_for__TransformsStatic__);
    _Init_thread_footer(&::_TSS1);
  }
  if ((BodiesStatic.ArrayNum != 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("BodiesStatic.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                         ,0x12b8,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((TransformsStatic.ArrayNum != 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("TransformsStatic.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                         ,0x12b9,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (param_1 != &BodiesStatic) {
    iVar1 = param_1->ArrayNum;
    pFVar3 = (param_1->AllocatorInstance).Data;
    BodiesStatic.ArrayNum = iVar1;
    if ((iVar1 == 0) && (BodiesStatic.ArrayMax == 0)) {
      BodiesStatic.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar1,BodiesStatic.ArrayMax,&BodiesStatic.AllocatorInstance,iVar1,
                 &BodiesStatic.ArrayMax);
      if (iVar1 != 0) {
        memcpy(BodiesStatic.AllocatorInstance.Data,pFVar3,(longlong)iVar1 << 3);
      }
    }
  }
  if (param_2 != &TransformsStatic) {
    iVar1 = param_2->ArrayNum;
    pFVar3 = (param_2->AllocatorInstance).Data;
    TransformsStatic.ArrayNum = iVar1;
    if ((iVar1 == 0) && (TransformsStatic.ArrayMax == 0)) {
      TransformsStatic.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,iVar1,TransformsStatic.ArrayMax,&TransformsStatic.AllocatorInstance,iVar1
                 ,&TransformsStatic.ArrayMax);
      if (iVar1 != 0) {
        memcpy(TransformsStatic.AllocatorInstance.Data,pFVar3,(longlong)iVar1 * 0x60);
      }
    }
  }
  if ((param_4 == (UPrimitiveComponent *)0x0) ||
     ((param_4->field_0x1ab != '\x02' && (param_4->bStaticWhenNotMoveable != '\0')))) {
    local_res8._0_1_ = true;
    if (param_4 != (UPrimitiveComponent *)0x0) goto LAB_148204cd1;
  }
  else {
    local_res8._0_1_ = false;
LAB_148204cd1:
    pUVar11 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar1 = (int)pUVar11->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar11->_padding_)) {
      pUVar12 = *(UObject **)&param_4->field_0xa8;
      local_res8._1_1_ = true;
      goto LAB_148204d16;
    }
  }
  local_res8._1_1_ = false;
  if (param_4 == (UPrimitiveComponent *)0x0) {
    pUVar12 = (UObject *)0x0;
  }
  else {
    pUVar12 = *(UObject **)&param_4->field_0xa8;
  }
LAB_148204d16:
  TInitBodiesHelperBase<TSizedDefaultAllocator<32>_>::
  TInitBodiesHelperBase<TSizedDefaultAllocator<32>_>
            (&local_c8,&BodiesStatic,&TransformsStatic,param_3,param_4,pUVar12,param_5,
             (FInitBodySpawnParams *)&local_res8,param_5._0_1_,(IPhysicsBodyInstanceOwner *)0x0);
  local_c8.bStatic = true;
  local_c8.SkelMeshComp = (USkeletalMeshComponent *)0x0;
  if ((local_c8.SpawnParams)->bPhysicsTypeDeterminesSimulation != false) {
    GetSimulatingAndBlendWeight
              ((USkeletalMeshComponent *)0x0,local_c8.BodySetup,&local_c8.InstanceBlendWeight,
               &local_c8.bInstanceSimulatePhysics);
  }
  TInitBodiesHelperBase<TSizedDefaultAllocator<32>_>::InitBodies(&local_c8);
  BodiesStatic.ArrayNum = 0;
  if ((BodiesStatic.ArrayMax < 0) && (BodiesStatic.ArrayMax != 0)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&BodiesStatic.AllocatorInstance,0,&BodiesStatic.ArrayMax);
  }
  TransformsStatic.ArrayNum = 0;
  if ((TransformsStatic.ArrayMax < 0) && (TransformsStatic.ArrayMax != 0)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,0,&TransformsStatic.AllocatorInstance,0,&TransformsStatic.ArrayMax);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.PhysXName.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.DebugName.SharedReferenceCount.ReferenceController);
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (local_f8 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_e8.NameAndInfo.Index = local_f8.ComparisonIndex.Value;
      local_e8.NameAndInfo.Number = local_f8.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_e8.StatData.Pad[4] = '\0';
      local_e8.StatData.Pad[5] = '\0';
      local_e8.StatData.Pad[6] = '\0';
      local_e8.StatData.Pad[7] = '\0';
      local_e8.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_e8.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_e8.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_e8.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_e8);
      piVar14 = &this->ScopeCount;
      *piVar14 = *piVar14 + -1;
      if (*piVar14 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  return;
}

// InvalidateCollisionProfileName @ 148205580

void __thiscall FBodyInstance::InvalidateCollisionProfileName(FBodyInstance *this)

{
  FWeakObjectPtr local_res8;
  undefined8 local_res10 [3];
  
  this->CollisionProfileName = UCollisionProfile::CustomCollisionProfileName;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  this->bPendingCollisionProfileSetup = '\0';
  (this->ExternalCollisionProfileBodySetup).WeakPtr = local_res8;
  return;
}

// IsDynamic @ 1482057e0

bool __thiscall FBodyInstance::IsDynamic(FBodyInstance *this)

{
  bool bVar1;
  FSingleParticlePhysicsProxy *local_res8 [4];
  
  local_res8[0] = this->ActorHandle;
  bVar1 = FChaosEngineInterface::IsDynamic(local_res8);
  return bVar1;
}

// IsInstanceAwake @ 148205840

bool __thiscall FBodyInstance::IsInstanceAwake(FBodyInstance *this)

{
  undefined1 local_res8 [8];
  undefined1 *local_res10;
  FSingleParticlePhysicsProxy *local_res18 [2];
  code *local_18;
  undefined1 **local_10;
  
  local_res10 = local_res8;
  local_res8[0] = 0;
  local_10 = &local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FBodyInstance::IsInstanceAwake'::__l2::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
             ::Call;
  local_res18[0] = this->ActorHandle;
  FPhysInterface_Chaos::ExecuteRead
            (local_res18,
             (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_18);
  return (bool)local_res8[0];
}

// IsNonKinematic @ 148205c20

bool __thiscall FBodyInstance::IsNonKinematic(FBodyInstance *this)

{
  return (bool)((byte)this->_padding_ & 1);
}

// IsPhysicsDisabled @ 148205c50

bool __thiscall FBodyInstance::IsPhysicsDisabled(FBodyInstance *this)

{
  undefined1 local_res8 [8];
  undefined1 *local_res10;
  FSingleParticlePhysicsProxy *local_res18 [2];
  code *local_18;
  undefined1 **local_10;
  
  local_res10 = local_res8;
  local_res8[0] = 0;
  local_10 = &local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FBodyInstance::IsPhysicsDisabled'::__l2::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
             ::Call;
  local_res18[0] = this->ActorHandle;
  FPhysInterface_Chaos::ExecuteRead
            (local_res18,
             (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_18);
  return (bool)local_res8[0];
}

// IsShapeBoundToBody @ 148205d90

bool __thiscall
FBodyInstance::IsShapeBoundToBody(FBodyInstance *this,FPhysicsShapeReference_Chaos *param_1)

{
  TMap<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>
  *this_00;
  FWeldInfo *pFVar1;
  FBodyInstance *pFVar2;
  
  pFVar2 = this;
  if (this->WeldParent != (FBodyInstance *)0x0) {
    pFVar2 = this->WeldParent;
  }
  this_00 = (pFVar2->ShapeToBodiesMap).Object;
  if (this_00 !=
      (TMap<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>
       *)0x0) {
    pFVar1 = TMapBase<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>
             ::Find((TMapBase<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>
                     *)this_00,param_1);
    if (pFVar1 != (FWeldInfo *)0x0) {
      pFVar2 = pFVar1->ChildBI;
    }
  }
  return pFVar2 == this;
}

// IsValidBodyInstance @ 148205e50

bool __thiscall FBodyInstance::IsValidBodyInstance(FBodyInstance *this)

{
  return this->ActorHandle != (FSingleParticlePhysicsProxy *)0x0;
}

// IsValidCollisionProfileName @ 148205e70

bool __cdecl FBodyInstance::IsValidCollisionProfileName(FName param_1)

{
  if ((param_1 != (FName)0x0) && (param_1 != UCollisionProfile::CustomCollisionProfileName)) {
    return true;
  }
  return false;
}

// LineTrace @ 1482069f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FBodyInstance::LineTrace
          (FBodyInstance *this,FHitResult *param_1,TVector<double> *param_2,TVector<double> *param_3
          ,bool param_4,bool param_5)

{
  int *piVar1;
  FName FVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal> FVar11;
  FThreadSafeStaticStat<FStat_STAT_Collision_FBodyInstance_LineTrace> FVar12;
  FThreadStats *pFVar13;
  FThreadStatsPool *pFVar14;
  FNameEntryId FVar15;
  FName FVar16;
  FName FVar17;
  FNameEntryId FVar18;
  bool bVar19;
  LARGE_INTEGER local_78;
  FStatMessage local_70;
  FName local_60;
  FName local_50;
  
  FVar18.Value = 0;
  FVar11 = StatPtr_STAT_Collision_SceneQueryTotal;
  if (StatPtr_STAT_Collision_SceneQueryTotal ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)0x0) {
    pFVar10 = ::FName::FName((FName *)&local_70,"STAT_Collision_SceneQueryTotal");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_SceneQueryTotal,
                        *pFVar10,L"SceneQueryTotal","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar11;
  bVar4 = false;
  bVar7 = false;
  local_50.ComparisonIndex.Value = 0;
  local_50.Number = 0;
  FVar15 = FVar17.ComparisonIndex.Value;
  uVar9 = FVar17.Number;
  if ((FVar15.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_78.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_78.s,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar4 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_78.s.LowPart = FVar15.Value;
        local_78.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_78.s,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                   ,0x1062);
        bVar4 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_78.s.LowPart = FVar15.Value;
      local_78.s.HighPart = uVar9;
      local_50 = FVar17;
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar5 = true;
      goto LAB_148206b3d;
    }
  }
  bVar5 = false;
  FVar17 = local_50;
LAB_148206b3d:
  FVar12 = StatPtr_STAT_Collision_FBodyInstance_LineTrace;
  if (StatPtr_STAT_Collision_FBodyInstance_LineTrace ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_FBodyInstance_LineTrace>)0x0) {
    pFVar10 = ::FName::FName((FName *)&local_70,"STAT_Collision_FBodyInstance_LineTrace");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Collision_FBodyInstance_LineTrace>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_FBodyInstance_LineTrace
                        ,*pFVar10,L"BodyInstanceLineTrace","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar2 = *(FName *)FVar12;
  bVar3 = false;
  bVar6 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  FVar15 = FVar2.ComparisonIndex.Value;
  uVar9 = FVar2.Number;
  if ((FVar15.Value == 0) && (uVar9 == 0)) {
    bVar8 = FPhysInterface_Chaos::LineTrace_Geom(param_1,this,param_2,param_3,param_4,param_5);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_78.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_78.s,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar3 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_78.s.LowPart = FVar15.Value;
        local_78.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_78.s,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                   ,0x1063);
        bVar3 = true;
        bVar6 = true;
      }
    }
    bVar19 = FThreadStats::bPrimaryEnable != false;
    FVar16 = local_60;
    if (bVar19) {
      local_78.s.LowPart = FVar15.Value;
      local_78.s.HighPart = uVar9;
      local_60 = FVar2;
      FThreadStats::AddMessage(FVar2,CycleScopeStart);
      FVar16 = FVar2;
      FVar18.Value = local_60.ComparisonIndex.Value;
    }
    bVar8 = FPhysInterface_Chaos::LineTrace_Geom(param_1,this,param_2,param_3,param_4,param_5);
    if (bVar6) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar3) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar19) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar13 == (FThreadStats *)0x0) {
        pFVar14 = FThreadStatsPool::Get();
        pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
      }
      if (pFVar13->bWaitForExplicitFlush < pFVar13->ScopeCount) {
        local_70.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
        local_70.NameAndInfo.Index.Value = FVar18.Value;
        QueryPerformanceCounter(&local_78);
        local_70.StatData.Pad[4] = '\0';
        local_70.StatData.Pad[5] = '\0';
        local_70.StatData.Pad[6] = '\0';
        local_70.StatData.Pad[7] = '\0';
        local_70.StatData.Pad[0] = local_78.s.LowPart._0_1_;
        local_70.StatData.Pad[1] = local_78.s.LowPart._1_1_;
        local_70.StatData.Pad[2] = local_78.s.LowPart._2_1_;
        local_70.StatData.Pad[3] = local_78.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar13,&local_70);
        piVar1 = &pFVar13->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar13,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar13,false,false);
        }
      }
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar5) && (FVar17 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar13 == (FThreadStats *)0x0) {
      pFVar14 = FThreadStatsPool::Get();
      pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
    }
    if (pFVar13->bWaitForExplicitFlush < pFVar13->ScopeCount) {
      local_70.NameAndInfo.Index.Value = local_50.ComparisonIndex.Value;
      local_70.NameAndInfo.Number = FVar17.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_78);
      local_70.StatData.Pad[4] = '\0';
      local_70.StatData.Pad[5] = '\0';
      local_70.StatData.Pad[6] = '\0';
      local_70.StatData.Pad[7] = '\0';
      local_70.StatData.Pad[0] = local_78.s.LowPart._0_1_;
      local_70.StatData.Pad[1] = local_78.s.LowPart._1_1_;
      local_70.StatData.Pad[2] = local_78.s.LowPart._2_1_;
      local_70.StatData.Pad[3] = local_78.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar13,&local_70);
      piVar1 = &pFVar13->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar13,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar13,false,false);
      }
    }
  }
  return bVar8;
}

// LoadProfileData @ 148206ec0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FBodyInstance::LoadProfileData(FBodyInstance *this,bool param_1)

{
  undefined4 uVar1;
  bool bVar2;
  UObject *pUVar3;
  UCollisionProfile *pUVar4;
  FName FVar5;
  FName local_res8;
  FString local_68;
  FCollisionResponseTemplate local_58;
  
  local_res8 = this->CollisionProfileName;
  pUVar3 = FWeakObjectPtr::Get(&(this->ExternalCollisionProfileBodySetup).WeakPtr,true);
  if (pUVar3 != (UObject *)0x0) {
    local_res8.ComparisonIndex.Value = *(uint *)&pUVar3[10].field_0x1c;
    local_res8.Number = *(uint *)&pUVar3[10].field_0x20;
  }
  if (!param_1) {
    if ((local_res8 != (FName)0x0) && (local_res8 != UCollisionProfile::CustomCollisionProfileName))
    {
      pUVar4 = UCollisionProfile::Get();
      bVar2 = UCollisionProfile::ReadConfig(pUVar4,local_res8,this);
      if (!bVar2) {
        InvalidateCollisionProfileName(this);
      }
    }
    FVar5 = this->CollisionProfileName;
    pUVar3 = FWeakObjectPtr::Get(&(this->ExternalCollisionProfileBodySetup).WeakPtr,true);
    if (pUVar3 != (UObject *)0x0) {
      FVar5.ComparisonIndex.Value = *(uint *)&pUVar3[10].field_0x1c;
      FVar5.Number = *(uint *)&pUVar3[10].field_0x20;
    }
    if ((FVar5 != (FName)0x0) && (FVar5 != UCollisionProfile::CustomCollisionProfileName)) {
      return;
    }
    bVar2 = FWeakObjectPtr::IsValid(&(this->ExternalCollisionProfileBodySetup).WeakPtr,true,false);
    if (bVar2) {
      pUVar3 = FWeakObjectPtr::Get(&(this->ExternalCollisionProfileBodySetup).WeakPtr,true);
      uVar1 = *(undefined4 *)&pUVar3[10].field_0x20;
      (this->CollisionProfileName).ComparisonIndex =
           (FNameEntryId)*(undefined4 *)&pUVar3[10].field_0x1c;
      (this->CollisionProfileName).Number = uVar1;
      (this->ObjectType).Value = pUVar3[9].field_0x15;
      (this->CollisionEnabled).Value = pUVar3[9].field_0x17;
      FCollisionResponse::SetCollisionResponseContainer
                (&this->CollisionResponses,(FCollisionResponseContainer *)&pUVar3[0xb].field_0x18);
      return;
    }
    FCollisionResponse::UpdateResponseContainerFromArray(&this->CollisionResponses);
    return;
  }
  if (local_res8 == (FName)0x0) {
    return;
  }
  if (local_res8 == UCollisionProfile::CustomCollisionProfileName) {
    return;
  }
  FCollisionResponseTemplate::FCollisionResponseTemplate(&local_58);
  pUVar4 = UCollisionProfile::Get();
  bVar2 = UCollisionProfile::GetProfileTemplate(pUVar4,local_res8,&local_58);
  if (bVar2) {
    bVar2 = FCollisionResponseTemplate::IsEqual
                      (&local_58,
                       (TEnumAsByte<ECollisionEnabled::Type>)(this->CollisionEnabled).Value,
                       (TEnumAsByte<ECollisionChannel>)(this->ObjectType).Value,
                       &(this->CollisionResponses).ResponseToChannels);
    if (bVar2) goto LAB_148206fca;
  }
  else if (2 < (byte)LogPhysics._0_1_) {
    ::FName::ToString(&local_res8,&local_68);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysics);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  InvalidateCollisionProfileName(this);
LAB_148206fca:
  if (local_58.CustomResponses.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.CustomResponses.AllocatorInstance.Data);
  }
  return;
}

// OnCalculateCustomProjection @ 1482086f0

TDelegate<void___cdecl(FBodyInstance_const_*,UE::Math::TTransform<double>_&),FDefaultDelegateUserPolicy>
* __thiscall FBodyInstance::OnCalculateCustomProjection(FBodyInstance *this)

{
  FBodyInstanceDelegatesPtr FVar1;
  FBodyInstanceDelegatesPtr FVar2;
  
  if (this->BodyInstanceDelegates != (FBodyInstanceDelegatesPtr)0x0) {
    return (TDelegate<void___cdecl(FBodyInstance_const_*,UE::Math::TTransform<double>_&),FDefaultDelegateUserPolicy>
            *)this->BodyInstanceDelegates;
  }
  FVar1 = (FBodyInstanceDelegatesPtr)::operator_new(0x38);
  FVar2 = (FBodyInstanceDelegatesPtr)0x0;
  if (FVar1 != (FBodyInstanceDelegatesPtr)0x0) {
    *(undefined8 *)FVar1 = 0;
    *(undefined8 *)((longlong)FVar1 + 8) = 0;
    *(undefined4 *)((longlong)FVar1 + 0x10) = 0;
    *(undefined8 *)((longlong)FVar1 + 0x18) = 0;
    *(undefined8 *)((longlong)FVar1 + 0x20) = 0;
    *(undefined8 *)((longlong)FVar1 + 0x28) = 0;
    *(undefined8 *)((longlong)FVar1 + 0x30) = 2;
    FVar2 = FVar1;
  }
  FVar1 = this->BodyInstanceDelegates;
  if (FVar1 == FVar2) {
    return (TDelegate<void___cdecl(FBodyInstance_const_*,UE::Math::TTransform<double>_&),FDefaultDelegateUserPolicy>
            *)FVar1;
  }
  this->BodyInstanceDelegates = FVar2;
  if (FVar1 != (FBodyInstanceDelegatesPtr)0x0) {
    DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
              (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)((longlong)FVar1 + 0x20),
               *(int *)((longlong)FVar1 + 0x28));
    if (*(void **)((longlong)FVar1 + 0x20) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)FVar1 + 0x20));
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)((longlong)FVar1 + 0x18));
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)FVar1);
    ::operator_delete((void *)FVar1,0x38);
    FVar2 = this->BodyInstanceDelegates;
  }
  return (TDelegate<void___cdecl(FBodyInstance_const_*,UE::Math::TTransform<double>_&),FDefaultDelegateUserPolicy>
          *)FVar2;
}

// OnRecalculatedMassProperties @ 148208c40

TMulticastDelegate<void___cdecl(FBodyInstance_*),FDefaultDelegateUserPolicy> * __thiscall
FBodyInstance::OnRecalculatedMassProperties(FBodyInstance *this)

{
  FBodyInstanceDelegatesPtr FVar1;
  FBodyInstanceDelegatesPtr FVar2;
  
  if (this->BodyInstanceDelegates == (FBodyInstanceDelegatesPtr)0x0) {
    FVar1 = (FBodyInstanceDelegatesPtr)::operator_new(0x38);
    FVar2 = (FBodyInstanceDelegatesPtr)0x0;
    if (FVar1 != (FBodyInstanceDelegatesPtr)0x0) {
      *(undefined8 *)FVar1 = 0;
      *(undefined8 *)((longlong)FVar1 + 8) = 0;
      *(undefined4 *)((longlong)FVar1 + 0x10) = 0;
      *(undefined8 *)((longlong)FVar1 + 0x18) = 0;
      *(undefined8 *)((longlong)FVar1 + 0x20) = 0;
      *(undefined8 *)((longlong)FVar1 + 0x28) = 0;
      *(undefined8 *)((longlong)FVar1 + 0x30) = 2;
      FVar2 = FVar1;
    }
    FVar1 = this->BodyInstanceDelegates;
    if ((FVar1 != FVar2) &&
       (this->BodyInstanceDelegates = FVar2, FVar1 != (FBodyInstanceDelegatesPtr)0x0)) {
      DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
                (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)((longlong)FVar1 + 0x20),
                 *(int *)((longlong)FVar1 + 0x28));
      if (*(void **)((longlong)FVar1 + 0x20) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)FVar1 + 0x20));
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)((longlong)FVar1 + 0x18));
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)FVar1);
      ::operator_delete((void *)FVar1,0x38);
    }
  }
  return (TMulticastDelegate<void___cdecl(FBodyInstance_*),FDefaultDelegateUserPolicy> *)
         ((longlong)this->BodyInstanceDelegates + 0x18);
}

// OverlapMulti @ 148209690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FBodyInstance::OverlapMulti
          (FBodyInstance *this,TArray<FOverlapResult,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2,TTransform<double> *param_3,TVector<double> *param_4,
          TQuat<double> *param_5,ECollisionChannel param_6,FComponentQueryParams *param_7,
          FCollisionResponseParams *param_8,FCollisionObjectQueryParams *param_9)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal> FVar9;
  FThreadSafeStaticStat<FStat_STAT_Collision_FBodyInstance_OverlapMulti> FVar10;
  TTransform<double> *pTVar11;
  UObject *pUVar12;
  UObject *pUVar13;
  FThreadStats *pFVar14;
  FThreadStatsPool *pFVar15;
  uint uVar16;
  FBodyInstance *pFVar17;
  FColor_u_0 FVar18;
  FName FVar19;
  FName FVar20;
  undefined1 uVar21;
  UWorld *local_res18 [2];
  undefined1 auStackY_398 [32];
  undefined1 local_338 [8];
  FColor_u_0 local_330;
  uint uStack_32c;
  LARGE_INTEGER local_328;
  FStatMessage local_320;
  FName local_310;
  FName local_300;
  TTransform<double> local_2e8;
  FComponentQueryParams *local_288;
  FBodyInstance *pFStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  double local_248;
  double dStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  TTransform<double> local_228;
  TTransform<double> local_1c8;
  TTransform<double> local_168;
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_398;
  bVar3 = false;
  bVar2 = false;
  FVar9 = StatPtr_STAT_Collision_SceneQueryTotal;
  local_res18[0] = param_2;
  local_328 = (LARGE_INTEGER)param_1;
  if (StatPtr_STAT_Collision_SceneQueryTotal ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)0x0) {
    pFVar8 = ::FName::FName((FName *)&local_320,"STAT_Collision_SceneQueryTotal");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_SceneQueryTotal,*pFVar8,
                       L"SceneQueryTotal","STATGROUP_Collision","STATCAT_Advanced",L"Collision",true
                       ,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar20 = *(FName *)FVar9;
  bVar5 = false;
  bVar7 = false;
  local_310.ComparisonIndex.Value = 0;
  local_310.Number = 0;
  FVar18.Bits = (uint)FVar20.ComparisonIndex.Value;
  uVar16 = FVar20.Number;
  if ((FVar18.Bits == 0) && (uVar16 == 0)) {
LAB_1482097f0:
    bVar6 = false;
    FVar20 = local_310;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_330.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_330._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_330.Bits = FVar18.Bits;
        uStack_32c = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_330._s_0,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                   ,0x10d5);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1482097f0;
    local_330.Bits = FVar18.Bits;
    uStack_32c = uVar16;
    FThreadStats::AddMessage(FVar20,CycleScopeStart);
    bVar6 = true;
  }
  FVar10 = StatPtr_STAT_Collision_FBodyInstance_OverlapMulti;
  if (StatPtr_STAT_Collision_FBodyInstance_OverlapMulti ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_FBodyInstance_OverlapMulti>)0x0) {
    pFVar8 = ::FName::FName((FName *)&local_320,"STAT_Collision_FBodyInstance_OverlapMulti");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_Collision_FBodyInstance_OverlapMulti>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_Collision_FBodyInstance_OverlapMulti,*pFVar8,
                        L"BodyInstanceOverlapMulti","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar10;
  local_300.ComparisonIndex.Value = 0;
  local_300.Number = 0;
  FVar18.Bits = (uint)FVar19.ComparisonIndex.Value;
  uVar16 = FVar19.Number;
  if ((FVar18.Bits != 0) || (uVar16 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_330.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_330._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar3 = false;
      bVar2 = true;
      if (-1 < CpuChannel->Enabled) {
        local_330.Bits = FVar18.Bits;
        uStack_32c = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_330._s_0,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                   ,0x10d6);
        bVar3 = true;
        bVar2 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_330.Bits = FVar18.Bits;
      uStack_32c = uVar16;
      FThreadStats::AddMessage(FVar19,CycleScopeStart);
      bVar3 = false;
      bVar4 = true;
      goto LAB_148209915;
    }
  }
  bVar4 = false;
  FVar19 = local_300;
LAB_148209915:
  if ((this->ActorHandle == (FSingleParticlePhysicsProxy *)0x0) &&
     ((this->WeldParent == (FBodyInstance *)0x0 ||
      (this->WeldParent->ActorHandle == (FSingleParticlePhysicsProxy *)0x0)))) {
    if (4 < (byte)LogCollision._0_1_) {
      GetBodyDebugName(this,(FString *)&local_320);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogCollision);
      if (local_320.StatData.Pad != (uchar  [8])0x0) {
        FMemory::Free((void *)local_320.StatData.Pad);
      }
    }
    uVar21 = 0;
  }
  else {
    local_338[0] = 0;
    local_288 = (FComponentQueryParams *)param_5->X;
    pFStack_280 = (FBodyInstance *)param_5->Y;
    local_278 = (UWorld **)param_5->Z;
    uStack_270 = (FComponentQueryParams **)param_5->W;
    local_108.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
    local_108.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
    local_258 = *(FCollisionObjectQueryParams **)((longlong)&param_4->field0_0x0 + 0x10);
    local_108.Translation.ZW.m128d_f64[1] = 0.0;
    local_108.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
    local_108.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
    local_268 = *(double *)&param_4->field0_0x0;
    uStack_260 = *(double *)((longlong)&param_4->field0_0x0 + 8);
    local_108.Rotation.XY.m128d_f64[0] = (double)local_288;
    local_108.Rotation.XY.m128d_f64[1] = (double)pFStack_280;
    local_108.Rotation.ZW.m128d_f64[0] = (double)local_278;
    local_108.Rotation.ZW.m128d_f64[1] = (double)uStack_270;
    local_108.Translation.XY.m128d_f64[0] = local_268;
    local_108.Translation.XY.m128d_f64[1] = uStack_260;
    local_108.Translation.ZW.m128d_f64[0] = (double)local_258;
    if (param_3 == (TTransform<double> *)0x0) {
      uStack_250 = (undefined1 *)0x0;
      local_238 = ___xmm_00000000000000003ff0000000000000;
      uStack_230 = _UNK_150689518;
      local_248 = ___xmm_3ff00000000000003ff0000000000000;
      dStack_240 = _UNK_150689688;
    }
    else {
      pFVar17 = this;
      pTVar11 = &local_a8;
      if (this->WeldParent != (FBodyInstance *)0x0) {
        pFVar17 = this->WeldParent;
        pTVar11 = &local_168;
      }
      pTVar11 = GetUnrealWorldTransform(pFVar17,pTVar11,true,false);
      local_1c8.Rotation.XY.m128d_f64[0] = (pTVar11->Rotation).XY.m128d_f64[0];
      local_1c8.Rotation.XY.m128d_f64[1] = (pTVar11->Rotation).XY.m128d_f64[1];
      local_1c8.Rotation.ZW.m128d_f64[0] = (pTVar11->Rotation).ZW.m128d_f64[0];
      local_1c8.Rotation.ZW.m128d_f64[1] = (pTVar11->Rotation).ZW.m128d_f64[1];
      local_1c8.Translation.XY.m128d_f64[0] = (pTVar11->Translation).XY.m128d_f64[0];
      local_1c8.Translation.XY.m128d_f64[1] = (pTVar11->Translation).XY.m128d_f64[1];
      local_1c8.Translation.ZW.m128d_f64[0] = (pTVar11->Translation).ZW.m128d_f64[0];
      local_1c8.Translation.ZW.m128d_f64[1] = (pTVar11->Translation).ZW.m128d_f64[1];
      local_1c8.Scale3D.XY.m128d_f64[0] = (pTVar11->Scale3D).XY.m128d_f64[0];
      local_1c8.Scale3D.XY.m128d_f64[1] = (pTVar11->Scale3D).XY.m128d_f64[1];
      local_1c8.Scale3D.ZW.m128d_f64[0] = (pTVar11->Scale3D).ZW.m128d_f64[0];
      local_1c8.Scale3D.ZW.m128d_f64[1] = (pTVar11->Scale3D).ZW.m128d_f64[1];
      local_228.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_228.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_228.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_228.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_228.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_228.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_228.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_228.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_228.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_228.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_228.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      local_228.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_228.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_228.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      UE::Math::TTransform<double>::Multiply(&local_228,param_3,&local_1c8);
      local_2e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_2e8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_2e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_2e8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_2e8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_2e8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_2e8.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_2e8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_2e8.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_2e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_2e8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      local_2e8.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_2e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_2e8.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      UE::Math::TTransform<double>::Multiply(&local_2e8,&local_108,&local_228);
      local_278 = (UWorld **)local_2e8.Rotation.ZW.m128d_f64[0];
      uStack_270 = (FComponentQueryParams **)local_2e8.Rotation.ZW.m128d_f64[1];
      local_288 = (FComponentQueryParams *)local_2e8.Rotation.XY.m128d_f64[0];
      pFStack_280 = (FBodyInstance *)local_2e8.Rotation.XY.m128d_f64[1];
      local_258 = (FCollisionObjectQueryParams *)local_2e8.Translation.ZW.m128d_f64[0];
      uStack_250 = (undefined1 *)local_2e8.Translation.ZW.m128d_f64[1];
      local_268 = local_2e8.Translation.XY.m128d_f64[0];
      uStack_260 = local_2e8.Translation.XY.m128d_f64[1];
      local_238 = local_2e8.Scale3D.ZW.m128d_f64[0];
      uStack_230 = local_2e8.Scale3D.ZW.m128d_f64[1];
      local_248 = local_2e8.Scale3D.XY.m128d_f64[0];
      dStack_240 = local_2e8.Scale3D.XY.m128d_f64[1];
    }
    if (this->WeldParent != (FBodyInstance *)0x0) {
      pUVar12 = FWeakObjectPtr::Get(&(this->WeldParent->OwnerComponent).WeakPtr);
      pUVar13 = FWeakObjectPtr::Get(&(this->OwnerComponent).WeakPtr);
      if ((pUVar12 == (UObject *)0x0) || (pUVar13 == (UObject *)0x0)) {
        local_2e8.Rotation.ZW.m128d_f64[0]._0_4_ = (undefined4)local_278;
        local_2e8.Rotation.ZW.m128d_f64[0]._4_4_ = local_278._4_4_;
        local_2e8.Rotation.ZW.m128d_f64[1]._0_4_ = (undefined4)uStack_270;
        local_2e8.Rotation.ZW.m128d_f64[1]._4_4_ = uStack_270._4_4_;
        local_2e8.Translation.XY.m128d_f64[0]._0_4_ = (undefined4)local_268;
        local_2e8.Translation.XY.m128d_f64[0]._4_4_ = local_268._4_4_;
        local_2e8.Translation.XY.m128d_f64[1]._0_4_ = (undefined4)uStack_260;
        local_2e8.Translation.XY.m128d_f64[1]._4_4_ = uStack_260._4_4_;
        local_2e8.Translation.ZW.m128d_f64[0]._0_4_ = (undefined4)local_258;
        local_2e8.Translation.ZW.m128d_f64[0]._4_4_ = local_258._4_4_;
        local_2e8.Translation.ZW.m128d_f64[1]._0_4_ = (undefined4)uStack_250;
        local_2e8.Translation.ZW.m128d_f64[1]._4_4_ = uStack_250._4_4_;
        local_2e8.Rotation.XY.m128d_f64[0] = (double)local_288;
        local_2e8.Rotation.XY.m128d_f64[1] = (double)pFStack_280;
      }
      else {
        local_168.Rotation.XY.m128d_f64[0] = *(double *)&pUVar12[0xc].field_0x10;
        local_168.Rotation.XY.m128d_f64[1] = *(double *)&pUVar12[0xc].field_0x18;
        local_168.Rotation.ZW.m128d_f64[0] = *(double *)&pUVar12[0xc].field_0x20;
        local_168.Rotation.ZW.m128d_f64[1] = *(double *)(pUVar12 + 0xd);
        local_168.Translation.XY.m128d_f64[0] = *(double *)&pUVar12[0xd].field_0x8;
        local_168.Translation.XY.m128d_f64[1] = *(double *)&pUVar12[0xd].field_0x10;
        local_168.Translation.ZW.m128d_f64[0] = *(double *)&pUVar12[0xd].field_0x18;
        local_168.Translation.ZW.m128d_f64[1] = *(double *)&pUVar12[0xd].field_0x20;
        local_168.Scale3D.XY.m128d_f64[0] = *(double *)(pUVar12 + 0xe);
        local_168.Scale3D.XY.m128d_f64[1] = *(double *)&pUVar12[0xe].field_0x8;
        local_168.Scale3D.ZW.m128d_f64[0] = *(double *)&pUVar12[0xe].field_0x10;
        local_168.Scale3D.ZW.m128d_f64[1] = *(double *)&pUVar12[0xe].field_0x18;
        local_1c8.Rotation.XY.m128d_f64[0] = *(double *)&pUVar13[0xc].field_0x10;
        local_1c8.Rotation.XY.m128d_f64[1] = *(double *)&pUVar13[0xc].field_0x18;
        local_1c8.Rotation.ZW.m128d_f64[0] = *(double *)&pUVar13[0xc].field_0x20;
        local_1c8.Rotation.ZW.m128d_f64[1] = *(double *)(pUVar13 + 0xd);
        local_1c8.Translation.XY.m128d_f64[0] = *(double *)&pUVar13[0xd].field_0x8;
        local_1c8.Translation.XY.m128d_f64[1] = *(double *)&pUVar13[0xd].field_0x10;
        local_1c8.Translation.ZW.m128d_f64[0] = *(double *)&pUVar13[0xd].field_0x18;
        local_1c8.Translation.ZW.m128d_f64[1] = *(double *)&pUVar13[0xd].field_0x20;
        local_1c8.Scale3D.XY.m128d_f64[0] = *(double *)(pUVar13 + 0xe);
        local_1c8.Scale3D.XY.m128d_f64[1] = *(double *)&pUVar13[0xe].field_0x8;
        local_1c8.Scale3D.ZW.m128d_f64[0] = *(double *)&pUVar13[0xe].field_0x10;
        local_1c8.Scale3D.ZW.m128d_f64[1] = *(double *)&pUVar13[0xe].field_0x18;
        UE::Math::TTransform<double>::GetRelativeTransform(&local_168,&local_a8,&local_1c8);
        local_228.Rotation.XY.m128d_f64[0] = (double)local_288;
        local_228.Rotation.XY.m128d_f64[1] = (double)pFStack_280;
        local_228.Rotation.ZW.m128d_f64[0] = (double)local_278;
        local_228.Rotation.ZW.m128d_f64[1] = (double)uStack_270;
        local_228.Translation.XY.m128d_f64[1] = uStack_260;
        local_228.Translation.XY.m128d_f64[0] = local_268;
        local_228.Scale3D.XY.m128d_f64 = *(double (*) [2])&(this->Scale3D).field0_0x0;
        local_228.Translation.ZW.m128d_f64[0] = (double)local_258;
        local_228.Translation.ZW.m128d_f64[1] = (double)uStack_250;
        local_228.Scale3D.ZW.m128d_f64[0] = (this->Scale3D).field0_0x0._s_0.Z;
        local_228.Scale3D.ZW.m128d_f64[1] = 0.0;
        local_2e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_2e8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_2e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_2e8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_2e8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_2e8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_2e8.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_2e8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_2e8.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_2e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_2e8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        local_2e8.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_2e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_2e8.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        UE::Math::TTransform<double>::Multiply(&local_2e8,&local_a8,&local_228);
        local_238._0_4_ = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0);
        local_238._4_4_ =
             (undefined4)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >> 0x20)
        ;
        uStack_230._0_4_ = 0;
        uStack_230._4_4_ = 0;
        local_248 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
        dStack_240 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
      }
      local_278 = (UWorld **)
                  CONCAT44(local_2e8.Rotation.ZW.m128d_f64[0]._4_4_,
                           local_2e8.Rotation.ZW.m128d_f64[0]._0_4_);
      uStack_270 = (FComponentQueryParams **)
                   CONCAT44(local_2e8.Rotation.ZW.m128d_f64[1]._4_4_,
                            local_2e8.Rotation.ZW.m128d_f64[1]._0_4_);
      local_268 = (double)CONCAT44(local_2e8.Translation.XY.m128d_f64[0]._4_4_,
                                   local_2e8.Translation.XY.m128d_f64[0]._0_4_);
      uStack_260 = (double)CONCAT44(local_2e8.Translation.XY.m128d_f64[1]._4_4_,
                                    local_2e8.Translation.XY.m128d_f64[1]._0_4_);
      local_258 = (FCollisionObjectQueryParams *)
                  CONCAT44(local_2e8.Translation.ZW.m128d_f64[0]._4_4_,
                           local_2e8.Translation.ZW.m128d_f64[0]._0_4_);
      uStack_250 = (undefined1 *)
                   CONCAT44(local_2e8.Translation.ZW.m128d_f64[1]._4_4_,
                            local_2e8.Translation.ZW.m128d_f64[1]._0_4_);
      local_288 = (FComponentQueryParams *)local_2e8.Rotation.XY.m128d_f64[0];
      pFStack_280 = (FBodyInstance *)local_2e8.Rotation.XY.m128d_f64[1];
    }
    pFVar17 = this;
    if (this->WeldParent != (FBodyInstance *)0x0) {
      pFVar17 = this->WeldParent;
    }
    local_2e8.Rotation.XY.m128d_f64[0] = (double)param_7;
    local_2e8.Rotation.ZW.m128d_f64[0] = (double)local_res18;
    local_2e8.Rotation.ZW.m128d_f64[1] = (double)&local_288;
    local_2e8.Translation.XY.m128d_f64[1] = (double)param_8;
    local_2e8.Translation.XY.m128d_f64[0] = (double)&param_6;
    local_2e8.Translation.ZW.m128d_f64[0] = (double)param_9;
    local_2e8.Translation.ZW.m128d_f64[1] = (double)local_338;
    local_2e8.Scale3D.XY.m128d_f64[0] = (double)local_328.QuadPart;
    local_320.NameAndInfo = (FStatNameAndInfo)&local_2e8;
    local_320.StatData.Pad =
         (uchar  [8])
         UE::Core::Private::Function::
         TFunctionRefCaller<`FBodyInstance::OverlapMulti'::__l2::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
         ::Call;
    local_328 = (LARGE_INTEGER)pFVar17->ActorHandle;
    local_2e8.Rotation.XY.m128d_f64[1] = (double)this;
    FPhysInterface_Chaos::ExecuteRead
              ((FSingleParticlePhysicsProxy **)&local_328,
               (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)
               &local_320);
    uVar21 = local_338[0];
  }
  if (bVar2) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar19 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    if (pFVar14->bWaitForExplicitFlush < pFVar14->ScopeCount) {
      local_320.NameAndInfo =
           (FStatNameAndInfo)((ulonglong)FVar19 & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_328);
      local_320.StatData.Pad = (uchar  [8])(local_328.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar14,&local_320);
      piVar1 = &pFVar14->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar14,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar14,false,false);
      }
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar6) && (FVar20 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    if (pFVar14->bWaitForExplicitFlush < pFVar14->ScopeCount) {
      local_320.NameAndInfo =
           (FStatNameAndInfo)((ulonglong)FVar20 & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_328);
      local_320.StatData.Pad = (uchar  [8])(local_328.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar14,&local_320);
      piVar1 = &pFVar14->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar14,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar14,false,false);
      }
    }
  }
  return (bool)uVar21;
}

// OverlapTest @ 148209fd0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FBodyInstance::OverlapTest
          (FBodyInstance *this,TVector<double> *param_1,TQuat<double> *param_2,
          FCollisionShape *param_3,FMTDResult *param_4,bool param_5)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal> FVar10;
  FThreadSafeStaticStat<FStat_STAT_Collision_FBodyInstance_OverlapTest> FVar11;
  FThreadStats *pFVar12;
  FThreadStatsPool *pFVar13;
  uint uVar14;
  FColor_u_0 FVar15;
  FName FVar16;
  FName FVar17;
  undefined1 local_res8 [8];
  TVector<double> *local_res10;
  LARGE_INTEGER local_res18;
  FColor_u_0 local_res20;
  uint uStackX_24;
  FStatMessage local_b8;
  FName local_a8;
  FName local_98;
  LARGE_INTEGER local_88;
  TVector<double> *local_80;
  undefined1 *local_78;
  FBodyInstance *local_70;
  FCollisionShape *local_68;
  FMTDResult **local_60;
  bool *local_58;
  
  bVar3 = false;
  bVar2 = false;
  FVar10 = StatPtr_STAT_Collision_SceneQueryTotal;
  local_res10 = param_1;
  local_res18 = (LARGE_INTEGER)param_2;
  if (StatPtr_STAT_Collision_SceneQueryTotal ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)0x0) {
    pFVar9 = ::FName::FName((FName *)&local_b8,"STAT_Collision_SceneQueryTotal");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_SceneQueryTotal,*pFVar9
                        ,L"SceneQueryTotal","STATGROUP_Collision","STATCAT_Advanced",L"Collision",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar10;
  bVar5 = false;
  bVar7 = false;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  FVar15.Bits = (uint)FVar17.ComparisonIndex.Value;
  uVar14 = FVar17.Number;
  if ((FVar15.Bits == 0) && (uVar14 == 0)) {
LAB_14820a10f:
    bVar6 = false;
    FVar17 = local_a8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.Bits = FVar15.Bits;
        uStackX_24 = uVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res20._s_0,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                   ,0x10a3);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14820a10f;
    local_res20.Bits = FVar15.Bits;
    uStackX_24 = uVar14;
    FThreadStats::AddMessage(FVar17,CycleScopeStart);
    bVar6 = true;
  }
  FVar11 = StatPtr_STAT_Collision_FBodyInstance_OverlapTest;
  if (StatPtr_STAT_Collision_FBodyInstance_OverlapTest ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_FBodyInstance_OverlapTest>)0x0) {
    pFVar9 = ::FName::FName((FName *)&local_b8,"STAT_Collision_FBodyInstance_OverlapTest");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_Collision_FBodyInstance_OverlapTest>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_Collision_FBodyInstance_OverlapTest,*pFVar9,
                        L"BodyInstanceOverlapTest","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar11;
  local_98.ComparisonIndex.Value = 0;
  local_98.Number = 0;
  FVar15.Bits = (uint)FVar16.ComparisonIndex.Value;
  uVar14 = FVar16.Number;
  if ((FVar15.Bits != 0) || (uVar14 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar3 = false;
      bVar2 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.Bits = FVar15.Bits;
        uStackX_24 = uVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res20._s_0,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                   ,0x10a4);
        bVar3 = true;
        bVar2 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20.Bits = FVar15.Bits;
      uStackX_24 = uVar14;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar3 = false;
      bVar4 = true;
      goto LAB_14820a22b;
    }
  }
  bVar4 = false;
  FVar16 = local_98;
LAB_14820a22b:
  local_88 = local_res18;
  local_80 = local_res10;
  local_78 = local_res8;
  local_60 = &param_4;
  local_58 = &param_5;
  local_b8.NameAndInfo = (FStatNameAndInfo)&local_88;
  local_b8.StatData.Pad =
       (uchar  [8])
       UE::Core::Private::Function::
       TFunctionRefCaller<`FBodyInstance::OverlapTest'::__l2::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
       ::Call;
  local_res18 = (LARGE_INTEGER)this->ActorHandle;
  local_res8[0] = 0;
  local_70 = this;
  local_68 = param_3;
  FPhysInterface_Chaos::ExecuteRead
            ((FSingleParticlePhysicsProxy **)&local_res18,
             (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_b8);
  uVar8 = local_res8[0];
  if (bVar2) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar12 == (FThreadStats *)0x0) {
      pFVar13 = FThreadStatsPool::Get();
      pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
    }
    if (pFVar12->bWaitForExplicitFlush < pFVar12->ScopeCount) {
      local_b8.NameAndInfo =
           (FStatNameAndInfo)((ulonglong)FVar16 & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res18);
      local_b8.StatData.Pad = (uchar  [8])(local_res18.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar12,&local_b8);
      piVar1 = &pFVar12->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar12,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar12,false,false);
      }
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar6) && (FVar17 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar12 == (FThreadStats *)0x0) {
      pFVar13 = FThreadStatsPool::Get();
      pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
    }
    if (pFVar12->bWaitForExplicitFlush < pFVar12->ScopeCount) {
      local_b8.NameAndInfo =
           (FStatNameAndInfo)((ulonglong)FVar17 & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res18);
      local_b8.StatData.Pad = (uchar  [8])(local_res18.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar12,&local_b8);
      piVar1 = &pFVar12->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar12,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar12,false,false);
      }
    }
  }
  return (bool)uVar8;
}

// OverlapTest_AssumesLocked @ 14820a450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FBodyInstance::OverlapTest_AssumesLocked
          (FBodyInstance *this,TVector<double> *param_1,TQuat<double> *param_2,
          FCollisionShape *param_3,FMTDResult *param_4,bool param_5)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal> FVar11;
  FThreadSafeStaticStat<FStat_STAT_Collision_FBodyInstance_OverlapTest> FVar12;
  FThreadStats *pFVar13;
  FThreadStatsPool *pFVar14;
  FColor_u_0 FVar15;
  FName FVar16;
  FName FVar17;
  FNameEntryId FVar18;
  FNameEntryId FVar19;
  undefined1 auStackY_168 [32];
  FColor_u_0 local_108;
  uint uStack_104;
  LARGE_INTEGER local_100;
  FStatMessage local_f8;
  FName local_e8;
  FName local_d8;
  TQuat<double> *local_c8;
  TVector<double> *local_c0;
  FMTDResult *local_b8;
  FCollisionShape *local_b0;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_b8 = param_4;
  FVar19.Value = 0;
  FVar11 = StatPtr_STAT_Collision_SceneQueryTotal;
  local_100 = (LARGE_INTEGER)this;
  local_c8 = param_2;
  local_c0 = param_1;
  local_b0 = param_3;
  if (StatPtr_STAT_Collision_SceneQueryTotal ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)0x0) {
    pFVar10 = ::FName::FName((FName *)&local_f8,"STAT_Collision_SceneQueryTotal");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_Collision_SceneQueryTotal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collision_SceneQueryTotal,
                        *pFVar10,L"SceneQueryTotal","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar11;
  bVar4 = false;
  bVar7 = false;
  local_e8.ComparisonIndex.Value = 0;
  local_e8.Number = 0;
  FVar15.Bits = (uint)FVar17.ComparisonIndex.Value;
  uVar9 = FVar17.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14820a5c1:
    bVar5 = false;
    FVar17 = local_e8;
    FVar18.Value = FVar19.Value;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_108.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_108._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar4 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_108.Bits = FVar15.Bits;
        uStack_104 = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_108._s_0,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                   ,0x10b4);
        bVar4 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14820a5c1;
    local_108.Bits = FVar15.Bits;
    uStack_104 = uVar9;
    local_e8 = FVar17;
    FThreadStats::AddMessage(FVar17,CycleScopeStart);
    bVar5 = true;
    FVar18.Value = local_e8.ComparisonIndex.Value;
  }
  FVar12 = StatPtr_STAT_Collision_FBodyInstance_OverlapTest;
  if (StatPtr_STAT_Collision_FBodyInstance_OverlapTest ==
      (FThreadSafeStaticStat<FStat_STAT_Collision_FBodyInstance_OverlapTest>)0x0) {
    pFVar10 = ::FName::FName((FName *)&local_f8,"STAT_Collision_FBodyInstance_OverlapTest");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Collision_FBodyInstance_OverlapTest>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_Collision_FBodyInstance_OverlapTest,*pFVar10,
                        L"BodyInstanceOverlapTest","STATGROUP_Collision","STATCAT_Advanced",
                        L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar12;
  bVar2 = false;
  bVar6 = false;
  local_d8.ComparisonIndex.Value = 0;
  local_d8.Number = 0;
  FVar15.Bits = (uint)FVar16.ComparisonIndex.Value;
  uVar9 = FVar16.Number;
  if ((FVar15.Bits != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_108.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_108._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar2 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_108.Bits = FVar15.Bits;
        uStack_104 = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_108._s_0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                   ,0x10b5);
        bVar2 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_108.Bits = FVar15.Bits;
      uStack_104 = uVar9;
      local_d8 = FVar16;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar3 = true;
      FVar19.Value = local_d8.ComparisonIndex.Value;
      goto LAB_14820a6e7;
    }
  }
  bVar3 = false;
  FVar16 = local_d8;
LAB_14820a6e7:
  local_a8.Rotation.ZW.m128d_f64[0] = local_c8->Z;
  local_a8.Rotation.ZW.m128d_f64[1] = local_c8->W;
  local_a8.Translation.XY.m128d_f64[0] = (local_c0->field0_0x0)._s_0.X;
  local_a8.Translation.XY.m128d_f64[1] = (local_c0->field0_0x0)._s_0.Y;
  local_a8.Rotation.XY.m128d_f64[0] = local_c8->X;
  local_a8.Rotation.XY.m128d_f64[1] = local_c8->Y;
  local_a8.Translation.ZW.m128d_f64[0] = (local_c0->field0_0x0)._s_0.Z;
  local_a8.Translation.ZW.m128d_f64[1] = 0.0;
  local_a8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_a8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_a8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_a8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  bVar8 = FPhysInterface_Chaos::Overlap_Geom
                    ((FBodyInstance *)local_100,local_b0,local_c8,&local_a8,local_b8,param_5);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar13 == (FThreadStats *)0x0) {
      pFVar14 = FThreadStatsPool::Get();
      pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
    }
    if (pFVar13->bWaitForExplicitFlush < pFVar13->ScopeCount) {
      local_f8.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      local_f8.NameAndInfo.Index.Value = FVar19.Value;
      QueryPerformanceCounter(&local_100);
      local_f8.StatData.Pad = (uchar  [8])(local_100.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar13,&local_f8);
      piVar1 = &pFVar13->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar13,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar13,false,false);
      }
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar5) && (FVar17 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar13 == (FThreadStats *)0x0) {
      pFVar14 = FThreadStatsPool::Get();
      pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
    }
    if (pFVar13->bWaitForExplicitFlush < pFVar13->ScopeCount) {
      local_f8.NameAndInfo.Number = FVar17.Number & 0xffff6fff | 0x6000;
      local_f8.NameAndInfo.Index.Value = FVar18.Value;
      QueryPerformanceCounter(&local_100);
      local_f8.StatData.Pad = (uchar  [8])(local_100.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar13,&local_f8);
      piVar1 = &pFVar13->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar13,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar13,false,false);
      }
    }
  }
  return bVar8;
}

// PostShapeChange @ 14820b6c0

void __thiscall FBodyInstance::PostShapeChange(FBodyInstance *this)

{
  FBodyInstance *local_res8;
  FSingleParticlePhysicsProxy *local_res10 [3];
  code *local_18;
  FBodyInstance **local_10;
  
  UpdatePhysicsFilterData(this);
  UpdateMassProperties(this);
  local_10 = &local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FBodyInstance::UpdateDampingProperties'::__l2::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
             ::Call;
  local_res10[0] = this->ActorHandle;
  local_res8 = this;
  FPhysInterface_Chaos::ExecuteWrite
            (local_res10,
             (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_18);
  return;
}

// PutInstanceToSleep @ 14820bf30

void __thiscall FBodyInstance::PutInstanceToSleep(FBodyInstance *this)

{
  undefined1 local_res8 [8];
  FSingleParticlePhysicsProxy *local_res10 [3];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res8;
  local_res8[0] = 0;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FBodyInstance::PutInstanceToSleep'::__l2::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
             ::Call;
  local_res10[0] = this->ActorHandle;
  FPhysInterface_Chaos::ExecuteWrite
            (local_res10,
             (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_18);
  return;
}

// ReleasePhysicsActor @ 14820e370

void __thiscall FBodyInstance::ReleasePhysicsActor(FBodyInstance *this)

{
  FSingleParticlePhysicsProxy **ppFVar1;
  code *pcVar2;
  bool bVar3;
  FChaosScene *pFVar4;
  FSingleParticlePhysicsProxy *local_res8 [4];
  
  ppFVar1 = &this->ActorHandle;
  local_res8[0] = *ppFVar1;
  if (local_res8[0] != (FSingleParticlePhysicsProxy *)0x0) {
    pFVar4 = FChaosEngineInterface::GetCurrentScene(local_res8);
    FChaosEngineInterface::ReleaseActor(ppFVar1,pFVar4,false);
    if (*ppFVar1 != (FSingleParticlePhysicsProxy *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActorHandle == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                         ,0xc0b,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  return;
}

// ReplaceResponseToChannels @ 148212d60

bool __thiscall
FBodyInstance::ReplaceResponseToChannels
          (FBodyInstance *this,ECollisionResponse param_1,ECollisionResponse param_2)

{
  bool bVar1;
  FWeakObjectPtr local_res8;
  undefined8 local_res20;
  
  bVar1 = FCollisionResponseContainer::ReplaceChannels
                    (&(this->CollisionResponses).ResponseToChannels,param_1,param_2);
  if (bVar1) {
    FCollisionResponse::UpdateArrayFromResponseContainer(&this->CollisionResponses);
    this->CollisionProfileName = UCollisionProfile::CustomCollisionProfileName;
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res20 = 0;
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
    this->bPendingCollisionProfileSetup = '\0';
    (this->ExternalCollisionProfileBodySetup).WeakPtr = local_res8;
    UpdatePhysicsFilterData(this);
    return true;
  }
  return false;
}

// ResolveDOFMode @ 148212f30

Type __cdecl FBodyInstance::ResolveDOFMode(Type param_1)

{
  uchar uVar1;
  Type TVar2;
  UPhysicsSettings *pUVar3;
  
  if (param_1 != Default) {
    return param_1;
  }
  pUVar3 = UPhysicsSettings::Get();
  uVar1 = (pUVar3->DefaultDegreesOfFreedom).Value;
  TVar2 = XYPlane;
  if (uVar1 != '\x03') {
    TVar2 = Default;
  }
  if (uVar1 == '\x02') {
    return XZPlane;
  }
  if (uVar1 == '\x01') {
    return YZPlane;
  }
  if (uVar1 == '\0') {
    TVar2 = SixDOF;
  }
  return TVar2;
}

// SerializeState @ 148215d90

void __thiscall
FBodyInstance::SerializeState
          (FBodyInstance *this,FSerializedDataBuffer *param_1,ESerializedDataContext param_2)

{
  FSerializedDataBuffer *local_28;
  ESerializedDataContext local_20;
  code *local_18;
  FSerializedDataBuffer **local_10;
  
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FBodyInstance::SerializeState'::__l2::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_&>
             ::Call;
  local_28 = param_1;
  local_20 = param_2;
  FPhysInterface_Chaos::ExecuteRead
            (&this->ActorHandle,
             (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_&)> *)&local_18,
             param_2 == Internal);
  return;
}

// SetAllowPartialIslandSleep @ 148216070

void __thiscall FBodyInstance::SetAllowPartialIslandSleep(FBodyInstance *this,bool param_1)

{
  FSingleParticlePhysicsProxy *local_res8 [4];
  FBodyInstance *local_28;
  undefined1 local_20;
  code *local_18;
  FBodyInstance **local_10;
  
  if (this->bAllowPartialIslandSleep != param_1) {
    local_10 = &local_28;
    this->field_0x3b = this->field_0x3b & 0xef | param_1 << 4;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`FBodyInstance::SetAllowPartialIslandSleep'::__l5::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
               ::Call;
    local_res8[0] = this->ActorHandle;
    local_28 = this;
    local_20 = param_1;
    FPhysInterface_Chaos::ExecuteWrite
              (local_res8,
               (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_18
              );
  }
  return;
}

// SetAngularVelocityInRadians @ 1482160e0

void __thiscall
FBodyInstance::SetAngularVelocityInRadians
          (FBodyInstance *this,TVector<double> *param_1,bool param_2,bool param_3)

{
  FSingleParticlePhysicsProxy *local_res8 [2];
  undefined1 local_res18 [16];
  TVector<double> *local_28;
  undefined1 *local_20;
  code *local_18;
  TVector<double> **local_10;
  
  local_20 = local_res18;
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FBodyInstance::SetAngularVelocityInRadians'::__l2::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
             ::Call;
  local_res8[0] = this->ActorHandle;
  local_res18[0] = param_2;
  local_28 = param_1;
  FPhysInterface_Chaos::ExecuteWrite
            (local_res8,
             (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_18);
  return;
}

// SetBodyTransform @ 1482161e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FBodyInstance::SetBodyTransform
          (FBodyInstance *this,TTransform<double> *param_1,ETeleportType param_2,bool param_3)

{
  int *piVar1;
  FBodyInstance *this_00;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  undefined4 extraout_EAX;
  undefined4 extraout_EAX_00;
  undefined4 extraout_EAX_01;
  undefined4 uVar13;
  int iVar14;
  FThreadSafeStaticStat<FStat_STAT_SetBodyTransform> in_RAX;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_SetBodyTransform> extraout_RAX;
  UObject *pUVar16;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar17;
  FThreadSafeStaticStat<FStat_STAT_SetBodyTransform> *pFVar18;
  FNameEntryId FVar19;
  FName FVar20;
  FThreadSafeStaticStat<FStat_STAT_SetBodyTransform> FVar21;
  longlong lVar22;
  uint uVar23;
  uint uVar25;
  double dVar24;
  uint uVar26;
  uint uVar28;
  double dVar27;
  uint local_res10;
  uint uStackX_14;
  ETeleportType local_res18 [8];
  FColor_u_0 local_148 [2];
  FChaosScene *local_140;
  uint local_138;
  uint local_134;
  FBodyInstance *local_130;
  FName local_128;
  FSingleParticlePhysicsProxy *local_118;
  FSingleParticlePhysicsProxy *local_110;
  FSingleParticlePhysicsProxy *local_108;
  TTransform<double> *local_100;
  FSingleParticlePhysicsProxy *local_f8;
  FSingleParticlePhysicsProxy *local_f0;
  LARGE_INTEGER local_e8;
  FStatMessage local_e0;
  FBodyInstance *local_d0;
  TTransform<double> *local_c8;
  code *local_c0;
  ETeleportType **local_b8;
  code *local_b0;
  TTransform<double> **local_a8;
  code *local_a0;
  FBodyInstance **local_98;
  FBodyInstance *local_90;
  FBodyInstance **local_88;
  uint *local_80;
  ETeleportType *local_78;
  FChaosScene **local_70;
  FBodyInstance *local_68;
  TTransform<double> *local_60;
  FName local_58;
  FString local_50;
  FString local_40;
  
  pFVar18 = (FThreadSafeStaticStat<FStat_STAT_SetBodyTransform> *)this;
  FVar21 = StatPtr_STAT_SetBodyTransform;
  local_res18[0] = param_2;
  if (StatPtr_STAT_SetBodyTransform == (FThreadSafeStaticStat<FStat_STAT_SetBodyTransform>)0x0) {
    pFVar15 = ::FName::FName(&local_58,"STAT_SetBodyTransform");
    pFVar18 = &StatPtr_STAT_SetBodyTransform;
    in_RAX = (FThreadSafeStaticStat<FStat_STAT_SetBodyTransform>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SetBodyTransform,*pFVar15,
                        L"Phys SetBodyTransform","STATGROUP_Physics","STATCAT_Advanced",L"Physics",
                        true,true,ST_int64,true,false,MCR_Invalid);
    FVar21 = in_RAX;
  }
  uVar13 = in_RAX._0_4_;
  FVar20 = *(FName *)FVar21;
  bVar9 = false;
  bVar11 = false;
  local_128.ComparisonIndex.Value = 0;
  local_128.Number = 0;
  FVar19 = FVar20.ComparisonIndex.Value;
  uVar17 = FVar20.Number;
  if ((FVar19.Value == 0) &&
     (pFVar18 = (FThreadSafeStaticStat<FStat_STAT_SetBodyTransform> *)((ulonglong)FVar20 >> 0x20),
     uVar17 == 0)) {
LAB_14821632e:
    bVar10 = false;
    FVar20 = local_128;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_148[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_148[0]._s_0,(char *)*(FName *)((longlong)FVar21 + 0x10));
      bVar9 = false;
      bVar11 = true;
      pFVar18._0_4_ = (uint)CpuChannel->Enabled >> 0x1f;
      pFVar18._4_4_ = 0;
      in_RAX = (FThreadSafeStaticStat<FStat_STAT_SetBodyTransform>)CpuChannel;
      if (-1 < CpuChannel->Enabled) {
        pFVar18 = (FThreadSafeStaticStat<FStat_STAT_SetBodyTransform> *)&local_138;
        local_138 = FVar19.Value;
        local_134 = uVar17;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)pFVar18,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                   ,0xab7);
        bVar9 = true;
        bVar11 = true;
        in_RAX = extraout_RAX;
      }
    }
    uVar13 = in_RAX._0_4_;
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14821632e;
    pFVar18 = (FThreadSafeStaticStat<FStat_STAT_SetBodyTransform> *)FVar20;
    local_res10 = FVar19.Value;
    uStackX_14 = uVar17;
    FThreadStats::AddMessage(FVar20,CycleScopeStart);
    bVar10 = true;
    uVar13 = extraout_EAX;
  }
  if ((GShouldLogOutAFrameOfSetBodyTransform == true) && (4 < (byte)LogPhysics._0_1_)) {
    GetBodyDebugName(this,&local_50);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPhysics);
    pFVar18 = (FThreadSafeStaticStat<FStat_STAT_SetBodyTransform> *)local_50.Data.AllocatorInstance;
    uVar13 = extraout_EAX_00;
    if ((FName)local_50.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
      pFVar18 = (FThreadSafeStaticStat<FStat_STAT_SetBodyTransform> *)
                local_50.Data.AllocatorInstance.Data;
      uVar13 = extraout_EAX_01;
    }
  }
  uVar23 = (uint)__xmm_7ff00000000000007ff0000000000000;
  uVar25 = __xmm_7ff00000000000007ff0000000000000._4_4_;
  uVar26 = __xmm_7ff00000000000007ff0000000000000._8_4_;
  uVar28 = __xmm_7ff00000000000007ff0000000000000._12_4_;
  dVar24 = (double)__xmm_7ff00000000000007ff0000000000000;
  dVar27 = __xmm_7ff00000000000007ff0000000000000._8_8_;
  lVar22 = -(ulonglong)
            ((double)CONCAT44(uVar28 & *(uint *)((longlong)(param_1->Rotation).ZW.m128d_f64 + 0xc),
                              uVar26 & *(uint *)((param_1->Rotation).ZW.m128d_f64 + 1)) == dVar27);
  auVar3._8_4_ = (int)lVar22;
  auVar3._0_8_ = -(ulonglong)
                  ((double)CONCAT44(uVar25 & *(uint *)((longlong)(param_1->Rotation).ZW.m128d_f64 +
                                                      4),
                                    uVar23 & *(uint *)(param_1->Rotation).ZW.m128d_f64) == dVar24);
  auVar3._12_4_ = (int)((ulonglong)lVar22 >> 0x20);
  uVar17 = movmskpd((uint)pFVar18,auVar3);
  lVar22 = -(ulonglong)
            ((double)CONCAT44(uVar28 & *(uint *)((longlong)(param_1->Rotation).XY.m128d_f64 + 0xc),
                              uVar26 & *(uint *)((param_1->Rotation).XY.m128d_f64 + 1)) == dVar27);
  auVar6._8_4_ = (int)lVar22;
  auVar6._0_8_ = -(ulonglong)
                  ((double)CONCAT44(uVar25 & *(uint *)((longlong)(param_1->Rotation).XY.m128d_f64 +
                                                      4),
                                    uVar23 & *(uint *)(param_1->Rotation).XY.m128d_f64) == dVar24);
  auVar6._12_4_ = (int)((ulonglong)lVar22 >> 0x20);
  iVar14 = movmskpd(uVar13,auVar6);
  if ((uVar17 & 0x3fffffff) == 0 && iVar14 == 0) {
    lVar22 = -(ulonglong)
              ((double)CONCAT44(uVar28 & *(uint *)((longlong)(param_1->Translation).ZW.m128d_f64 +
                                                  0xc),
                                uVar26 & *(uint *)((param_1->Translation).ZW.m128d_f64 + 1)) ==
              dVar27);
    auVar4._8_4_ = (int)lVar22;
    auVar4._0_8_ = -(ulonglong)
                    ((double)CONCAT44(uVar25 & *(uint *)((longlong)
                                                         (param_1->Translation).ZW.m128d_f64 + 4),
                                      uVar23 & *(uint *)(param_1->Translation).ZW.m128d_f64) ==
                    dVar24);
    auVar4._12_4_ = (int)((ulonglong)lVar22 >> 0x20);
    uVar17 = movmskpd(0,auVar4);
    lVar22 = -(ulonglong)
              ((double)CONCAT44(uVar28 & *(uint *)((longlong)(param_1->Translation).XY.m128d_f64 +
                                                  0xc),
                                uVar26 & *(uint *)((param_1->Translation).XY.m128d_f64 + 1)) ==
              dVar27);
    auVar7._8_4_ = (int)lVar22;
    auVar7._0_8_ = -(ulonglong)
                    ((double)CONCAT44(uVar25 & *(uint *)((longlong)
                                                         (param_1->Translation).XY.m128d_f64 + 4),
                                      uVar23 & *(uint *)(param_1->Translation).XY.m128d_f64) ==
                    dVar24);
    auVar7._12_4_ = (int)((ulonglong)lVar22 >> 0x20);
    iVar14 = movmskpd(iVar14,auVar7);
    if ((uVar17 & 0x3fffffff) != 0 || iVar14 != 0) goto LAB_148216402;
    lVar22 = -(ulonglong)
              ((double)CONCAT44(*(uint *)((longlong)(param_1->Scale3D).ZW.m128d_f64 + 0xc) & uVar28,
                                *(uint *)((param_1->Scale3D).ZW.m128d_f64 + 1) & uVar26) == dVar27);
    auVar5._8_4_ = (int)lVar22;
    auVar5._0_8_ = -(ulonglong)
                    ((double)CONCAT44(*(uint *)((longlong)(param_1->Scale3D).ZW.m128d_f64 + 4) &
                                      uVar25,*(uint *)(param_1->Scale3D).ZW.m128d_f64 & uVar23) ==
                    dVar24);
    auVar5._12_4_ = (int)((ulonglong)lVar22 >> 0x20);
    uVar17 = movmskpd(0,auVar5);
    lVar22 = -(ulonglong)
              ((double)CONCAT44(*(uint *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 0xc) & uVar28,
                                *(uint *)((param_1->Scale3D).XY.m128d_f64 + 1) & uVar26) == dVar27);
    auVar8._8_4_ = (int)lVar22;
    auVar8._0_8_ = -(ulonglong)
                    ((double)CONCAT44(*(uint *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 4) &
                                      uVar25,*(uint *)(param_1->Scale3D).XY.m128d_f64 & uVar23) ==
                    dVar24);
    auVar8._12_4_ = (int)((ulonglong)lVar22 >> 0x20);
    iVar14 = movmskpd(iVar14,auVar8);
    if ((uVar17 & 0x3fffffff) != 0 || iVar14 != 0) goto LAB_148216402;
  }
  else {
LAB_148216402:
    local_d0 = this;
    local_c8 = param_1;
    bVar12 = `FBodyInstance::SetBodyTransform'::__l24::<lambda_1>::operator()(&local_d0);
    if (!bVar12) goto LAB_148216638;
  }
  if (this->ActorHandle == (FSingleParticlePhysicsProxy *)0x0) {
    this_00 = this->WeldParent;
    if (this_00 != (FBodyInstance *)0x0) {
      local_130 = this;
      bVar12 = IsInGameThread();
      if ((!bVar12) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsInGameThread()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                              ,0x7d9,L""), bVar12)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_88 = &local_130;
      local_res10 = local_res10 & 0xffffff00;
      local_80 = &local_res10;
      local_98 = &local_90;
      local_a0 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FBodyInstance::UnWeld'::__l2::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
                 ::Call;
      local_f0 = this_00->ActorHandle;
      local_90 = this_00;
      FPhysInterface_Chaos::ExecuteWrite
                (&local_f0,
                 (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)
                 &local_a0);
      UpdateInterpolateWhenSubStepping(this_00);
      pUVar16 = FWeakObjectPtr::Get(&(local_130->OwnerComponent).WeakPtr);
      if (pUVar16 != (UObject *)0x0) {
        (**(code **)(*(longlong *)pUVar16 + 0x898))(pUVar16,0);
      }
      pUVar16 = FWeakObjectPtr::Get(&(this_00->OwnerComponent).WeakPtr);
      if (pUVar16 != (UObject *)0x0) {
        (**(code **)(*(longlong *)pUVar16 + 0x898))(pUVar16,0);
      }
      Weld(this_00,this,param_1);
    }
  }
  else {
    bVar12 = UE::Math::TTransform<double>::IsValid(param_1);
    if (bVar12) {
      local_118 = this->ActorHandle;
      local_140 = FChaosEngineInterface::GetCurrentScene(&local_118);
      local_110 = this->ActorHandle;
      bVar12 = FChaosEngineInterface::IsDynamic(&local_110);
      if (bVar12) {
        if (local_140 != (FChaosScene *)0x0) {
          local_78 = local_res18;
          local_70 = &local_140;
          local_b8 = &local_78;
          local_c0 = UE::Core::Private::Function::
                     TFunctionRefCaller<`FBodyInstance::SetBodyTransform'::__l53::<lambda_2>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
                     ::Call;
          local_108 = this->ActorHandle;
          local_68 = this;
          local_60 = param_1;
          FPhysInterface_Chaos::ExecuteWrite
                    (&local_108,
                     (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)
                     &local_c0);
        }
      }
      else if (local_140 != (FChaosScene *)0x0) {
        local_a8 = &local_100;
        local_b0 = UE::Core::Private::Function::
                   TFunctionRefCaller<`FBodyInstance::SetBodyTransform'::__l57::<lambda_3>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
                   ::Call;
        local_f8 = this->ActorHandle;
        local_100 = param_1;
        FPhysInterface_Chaos::ExecuteWrite
                  (&local_f8,
                   (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)
                   &local_b0);
      }
    }
    else if (2 < (byte)LogPhysics._0_1_) {
      UE::Math::TTransform<double>::ToString(param_1,&local_40);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysics);
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
    }
  }
LAB_148216638:
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar10) && (FVar20 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_e0.NameAndInfo.Index = FVar20.ComparisonIndex.Value;
      local_e0.NameAndInfo.Number = FVar20.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_e8);
      local_e0.StatData.Pad[4] = '\0';
      local_e0.StatData.Pad[5] = '\0';
      local_e0.StatData.Pad[6] = '\0';
      local_e0.StatData.Pad[7] = '\0';
      local_e0.StatData.Pad[0] = local_e8.s.LowPart._0_1_;
      local_e0.StatData.Pad[1] = local_e8.s.LowPart._1_1_;
      local_e0.StatData.Pad[2] = local_e8.s.LowPart._2_1_;
      local_e0.StatData.Pad[3] = local_e8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_e0);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

// SetCollisionEnabled @ 148216790

void __thiscall FBodyInstance::SetCollisionEnabled(FBodyInstance *this,Type param_1,bool param_2)

{
  byte bVar1;
  UObject *pUVar2;
  bool bVar3;
  FWeakObjectPtr local_res8;
  undefined8 local_res20;
  
  bVar1 = (this->CollisionEnabled).Value;
  if (bVar1 != param_1) {
    this->CollisionProfileName = UCollisionProfile::CustomCollisionProfileName;
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res20 = 0;
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
    this->bPendingCollisionProfileSetup = '\0';
    (this->ExternalCollisionProfileBodySetup).WeakPtr = local_res8;
    (this->CollisionEnabled).Value = (uchar)param_1;
    if (param_2) {
      UpdatePhysicsFilterData(this);
    }
    if ((bVar1 == 2) || (bVar1 == QueryAndPhysics)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (bVar3 != param_1 - PhysicsOnly < 2) {
      pUVar2 = FWeakObjectPtr::Get(&(this->OwnerComponent).WeakPtr);
      if (pUVar2 != (UObject *)0x0) {
        (**(code **)(*(longlong *)pUVar2 + 0x840))(pUVar2,this->InstanceBodyIndex);
      }
    }
  }
  return;
}

// SetCollisionProfileName @ 148216850

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FBodyInstance::SetCollisionProfileName(FBodyInstance *this,FName param_1)

{
  int *piVar1;
  TWeakObjectPtr<UBodySetup,FWeakObjectPtr> *this_00;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_BodyInst_SetCollisionProfileName> FVar6;
  UObject *pUVar7;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  LARGE_INTEGER LVar8;
  FName FVar9;
  FNameEntryId FVar10;
  LARGE_INTEGER local_res8;
  FName local_res18 [2];
  FStatMessage local_48;
  
  FVar10.Value = 0;
  FVar6 = StatPtr_STAT_BodyInst_SetCollisionProfileName;
  if (StatPtr_STAT_BodyInst_SetCollisionProfileName ==
      (FThreadSafeStaticStat<FStat_STAT_BodyInst_SetCollisionProfileName>)0x0) {
    pFVar5 = ::FName::FName(local_res18,"STAT_BodyInst_SetCollisionProfileName");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_BodyInst_SetCollisionProfileName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BodyInst_SetCollisionProfileName,
                       *pFVar5,L"BodyInstance SetCollisionProfileName","STATGROUP_Physics",
                       "STATCAT_Advanced",L"Physics",true,true,ST_int64,true,false,MCR_Invalid);
  }
  LVar8 = *(LARGE_INTEGER *)FVar6;
  bVar2 = false;
  bVar4 = false;
  if ((LVar8.s.LowPart == 0) && (LVar8.s.HighPart == 0)) {
LAB_14821699b:
    bVar3 = false;
    LVar8._0_4_ = 0;
    LVar8._4_4_ = 0;
  }
  else {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_res8.QuadPart = local_res8.QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8 = LVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                   ,700);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14821699b;
    local_res8 = LVar8;
    FThreadStats::AddMessage((FName)LVar8.s,CycleScopeStart);
    bVar3 = true;
    FVar10.Value = LVar8.s.LowPart;
  }
  this_00 = &this->ExternalCollisionProfileBodySetup;
  if (this->bPendingCollisionProfileSetup == 0) {
    FVar9 = this->CollisionProfileName;
    pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr,true);
    if (pUVar7 != (UObject *)0x0) {
      FVar9.ComparisonIndex.Value = *(uint *)&pUVar7[10].field_0x1c;
      FVar9.Number = *(uint *)&pUVar7[10].field_0x20;
    }
    if (FVar9 == param_1) goto LAB_148216a01;
  }
  local_res8.s.LowPart = 0;
  local_res8.s.HighPart = 0;
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res8.s,(FObjectPtr)local_res18);
  this_00->WeakPtr = (FWeakObjectPtr)local_res8;
  this->CollisionProfileName = param_1;
  LoadProfileData(this,false);
  this->bPendingCollisionProfileSetup = '\0';
LAB_148216a01:
  local_res8.s.LowPart = 0;
  local_res8.s.HighPart = 0;
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res8.s,(FObjectPtr)local_res18);
  this_00->WeakPtr = (FWeakObjectPtr)local_res8;
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && ((FName)LVar8.QuadPart != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_48.NameAndInfo.Number = LVar8.s.HighPart & 0xffff6fffU | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar10.Value;
      QueryPerformanceCounter(&local_res8);
      local_48.StatData.Pad = (uchar  [8])(local_res8.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_01,&local_48);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

// SetCollisionProfileNameDeferred @ 148216b10

void __thiscall FBodyInstance::SetCollisionProfileNameDeferred(FBodyInstance *this,FName param_1)

{
  FWeakObjectPtr local_res8;
  undefined8 local_res10 [3];
  
  this->CollisionProfileName = param_1;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  this->bPendingCollisionProfileSetup = '\x01';
  (this->ExternalCollisionProfileBodySetup).WeakPtr = local_res8;
  return;
}

// SetContactModification @ 148216bc0

void __thiscall FBodyInstance::SetContactModification(FBodyInstance *this,bool param_1)

{
  if (param_1 != this->bContactModification) {
    this->field_0x3b = this->field_0x3b & 0x7f | param_1 << 7;
    UpdatePhysicsFilterData(this);
    return;
  }
  return;
}

// SetDOFLock @ 148216c40

void __thiscall FBodyInstance::SetDOFLock(FBodyInstance *this,Type param_1)

{
  (this->DOFMode).Value = (uchar)param_1;
  CreateDOFLock(this);
  return;
}

// SetEnableGravity @ 1482170a0

void __thiscall FBodyInstance::SetEnableGravity(FBodyInstance *this,bool param_1)

{
  byte bVar1;
  FBodyInstance *local_res8;
  undefined1 local_res10 [8];
  FSingleParticlePhysicsProxy *local_res18 [2];
  code *local_18;
  FBodyInstance **local_10;
  
  bVar1 = (byte)this->_padding_;
  if ((bool)(bVar1 >> 2 & 1) != param_1) {
    local_10 = &local_res8;
    *(byte *)&this->_padding_ = bVar1 & 0xfb | param_1 << 2;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`FBodyInstance::SetEnableGravity'::__l6::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
               ::Call;
    local_res18[0] = this->ActorHandle;
    local_res8 = this;
    FPhysInterface_Chaos::ExecuteWrite
              (local_res18,
               (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_18
              );
    if ((this->_padding_ & 4) != 0) {
      local_10 = (FBodyInstance **)local_res10;
      local_res10[0] = 0;
      local_18 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FBodyInstance::WakeInstance'::__l2::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
                 ::Call;
      local_res8 = (FBodyInstance *)this->ActorHandle;
      FPhysInterface_Chaos::ExecuteWrite
                ((FSingleParticlePhysicsProxy **)&local_res8,
                 (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)
                 &local_18);
    }
  }
  return;
}

// SetGravityGroupIndex @ 148217670

void __thiscall FBodyInstance::SetGravityGroupIndex(FBodyInstance *this,int param_1)

{
  FBodyInstance *local_res18;
  FSingleParticlePhysicsProxy *local_res20;
  code *local_18;
  FBodyInstance **local_10;
  
  if (-1 < param_1) {
    local_10 = &local_res18;
    this->GravityGroupIndex = (uchar)param_1;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`FBodyInstance::SetGravityGroupIndex'::__l6::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
               ::Call;
    local_res20 = this->ActorHandle;
    local_res18 = this;
    FPhysInterface_Chaos::ExecuteWrite
              (&local_res20,
               (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_18
              );
  }
  return;
}

// SetGyroscopicTorqueEnabled @ 1482176c0

void __thiscall FBodyInstance::SetGyroscopicTorqueEnabled(FBodyInstance *this,bool param_1)

{
  byte bVar1;
  FBodyInstance *local_res8 [2];
  FSingleParticlePhysicsProxy *local_res18 [2];
  code *local_18;
  FBodyInstance **local_10;
  
  bVar1 = (byte)this->_padding_;
  if ((bool)(bVar1 >> 4 & 1) != param_1) {
    local_10 = local_res8;
    *(byte *)&this->_padding_ = bVar1 & 0xef | param_1 << 4;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`FBodyInstance::SetGyroscopicTorqueEnabled'::__l6::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
               ::Call;
    local_res18[0] = this->ActorHandle;
    local_res8[0] = this;
    FPhysInterface_Chaos::ExecuteWrite
              (local_res18,
               (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_18
              );
  }
  return;
}

// SetInertiaConditioningEnabled @ 148217730

void __thiscall FBodyInstance::SetInertiaConditioningEnabled(FBodyInstance *this,bool param_1)

{
  FSingleParticlePhysicsProxy *local_res8;
  undefined1 local_res10 [24];
  code *local_18;
  undefined1 *local_10;
  
  if (param_1 != this->bInertiaConditioning) {
    local_10 = local_res10;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`FBodyInstance::SetInertiaConditioningEnabled'::__l5::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
               ::Call;
    local_res8 = this->ActorHandle;
    this->field_0x3e = this->field_0x3e & 0xfd | param_1 * '\x02';
    local_res10[0] = param_1;
    FPhysInterface_Chaos::ExecuteWrite
              (&local_res8,
               (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_18
              );
  }
  return;
}

// SetInstanceNotifyRBCollision @ 148217880

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FBodyInstance::SetInstanceNotifyRBCollision(FBodyInstance *this,bool param_1)

{
  FPhysScene_Chaos *this_00;
  UPrimitiveComponent *this_01;
  UWorld *pUVar1;
  
  if (param_1 != this->bNotifyRigidBodyCollision) {
    this_01 = (UPrimitiveComponent *)FWeakObjectPtr::Get(&(this->OwnerComponent).WeakPtr);
    if ((this_01 != (UPrimitiveComponent *)0x0) &&
       (((pUVar1 = *(UWorld **)&this_01->field_0xb0, pUVar1 != (UWorld *)0x0 ||
         (pUVar1 = UActorComponent::GetWorld_Uncached((UActorComponent *)this_01),
         pUVar1 != (UWorld *)0x0)) &&
        (this_00 = pUVar1->PhysicsScene, this_00 != (FPhysScene_Chaos *)0x0)))) {
      if (param_1) {
        FPhysScene_Chaos::RegisterForCollisionEvents(this_00,this_01);
      }
      else {
        FPhysScene_Chaos::UnRegisterForCollisionEvents(this_00,this_01);
      }
    }
    this->bNotifyRigidBodyCollision = '\0';
    this->field_0x3b = this->field_0x3b | param_1 << 6;
    UpdatePhysicsFilterData(this);
    return;
  }
  return;
}

// SetInstanceSimulatePhysics @ 148217920

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FBodyInstance::SetInstanceSimulatePhysics
          (FBodyInstance *this,bool param_1,bool param_2,bool param_3)

{
  bool bVar1;
  TEnumAsByte<ECollisionTraceFlag> TVar2;
  UPrimitiveComponent *this_00;
  FBodyInstance *pFVar3;
  FMessageLog *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  UBodySetupCore *this_01;
  undefined7 extraout_var;
  undefined7 in_register_00000081;
  float fVar8;
  byte local_res10 [8];
  char local_res18 [8];
  FName local_230;
  FSingleParticlePhysicsProxy *local_228;
  FName local_220;
  FName local_218;
  FSingleParticlePhysicsProxy *local_210;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  code *local_1d8;
  char **local_1d0;
  char *local_1c8;
  byte *local_1c0;
  FBodyInstance *local_1b8;
  TSharedRef<FTokenizedMessage,1> local_1b0;
  FText local_1a0;
  FText local_190;
  TSharedRef<FTokenizedMessage,1> local_180;
  FText local_170;
  FText local_160;
  TSharedRef<FTokenizedMessage,1> local_150;
  FText local_140;
  FText local_130;
  FText local_120;
  FTextFormat local_110;
  FText local_100;
  FTextFormat local_f0;
  FText local_e0;
  FTextFormat local_d0;
  FMessageLog local_c0;
  FMessageLog local_90;
  FMessageLog local_60;
  
  if ((!param_1) ||
     (this_00 = (UPrimitiveComponent *)FWeakObjectPtr::Get(&(this->OwnerComponent).WeakPtr),
     this_00 == (UPrimitiveComponent *)0x0)) goto LAB_148217cbe;
  if (((this_00->field_0x98 & 1) != 0) &&
     ((pFVar3 = (FBodyInstance *)
                (**(code **)(*(longlong *)this_00 + 0x818))
                          (this_00,0,CONCAT71(in_register_00000081,1),0xffffffff), pFVar3 == this ||
      (bVar1 = UPrimitiveComponent::IsWelded(this_00), bVar1)))) {
    if ((!param_3) && (*(longlong *)&this_00->field_0xd0 != 0)) {
      (**(code **)(*(longlong *)this_00 + 0x518))
                (this_00,&FDetachmentTransformRules::KeepWorldTransform);
    }
    if ((this->_padding_ & 1) == 0) {
      ApplyWeldOnChildren(this);
    }
  }
  if (this->ActorHandle == (FSingleParticlePhysicsProxy *)0x0) {
    ::FName::FName(&local_230,"PIE");
    pFVar4 = FMessageLog::FMessageLog(&local_c0,&local_230);
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_208,(UObject *)0x0);
    pFVar5 = FText::FromString(&local_120,&local_208);
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_190,L"BodyInstance",L"SimPhysNoBody",
                        L"Trying to simulate physics on \'\'{0}\'\' but no physics body.");
    pFVar7 = FTextFormat::FTextFormat(&local_110,pFVar6,Default);
    pFVar5 = FText::Format<FText>(&local_1a0,pFVar7,pFVar5);
    FMessageLog::Warning(pFVar4,&local_1b0,pFVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1b0.SharedReferenceCount.ReferenceController);
    if (local_1a0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1a0.TextData.Reference + 0x10))();
    }
    if (local_190.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_190.TextData.Reference + 0x10))();
    }
    if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Data.AllocatorInstance.Data);
    }
    pFVar4 = &local_c0;
  }
  else {
    local_228 = this->ActorHandle;
    bVar1 = FChaosEngineInterface::IsStatic(&local_228);
    if (bVar1) {
      ::FName::FName(&local_220,"PIE");
      pFVar4 = FMessageLog::FMessageLog(&local_90,&local_220);
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_1f8,(UObject *)0x0);
      pFVar5 = FText::FromString(&local_100,&local_1f8);
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         (&local_160,L"BodyInstance",L"SimPhysStatic",
                          L"Trying to simulate physics on \'\'{0}\'\' but it is static.");
      pFVar7 = FTextFormat::FTextFormat(&local_f0,pFVar6,Default);
      pFVar5 = FText::Format<FText>(&local_170,pFVar7,pFVar5);
      FMessageLog::Warning(pFVar4,&local_180,pFVar5);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_180.SharedReferenceCount.ReferenceController);
      if (local_170.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_170.TextData.Reference + 0x10))();
      }
      if (local_160.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_160.TextData.Reference + 0x10))();
      }
      if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
      }
      pFVar4 = &local_90;
    }
    else {
      bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
      if (!bVar1) goto LAB_148217cbe;
      this_01 = (UBodySetupCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
      TVar2 = UBodySetupCore::GetCollisionTraceFlag(this_01);
      if (*(char *)CONCAT71(extraout_var,TVar2.Value) != '\x03') goto LAB_148217cbe;
      ::FName::FName(&local_218,"PIE");
      pFVar4 = FMessageLog::FMessageLog(&local_60,&local_218);
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_1e8,(UObject *)0x0);
      pFVar5 = FText::FromString(&local_e0,&local_1e8);
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         (&local_130,L"BodyInstance",L"SimComplexAsSimple",
                          L"Trying to simulate physics on \'\'{0}\'\' but it has ComplexAsSimple collision."
                         );
      pFVar7 = FTextFormat::FTextFormat(&local_d0,pFVar6,Default);
      pFVar5 = FText::Format<FText>(&local_140,pFVar7,pFVar5);
      FMessageLog::Warning(pFVar4,&local_150,pFVar5);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_150.SharedReferenceCount.ReferenceController);
      if (local_140.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_140.TextData.Reference + 0x10))();
      }
      if (local_130.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_130.TextData.Reference + 0x10))();
      }
      if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
      }
      pFVar4 = &local_60;
    }
  }
  FMessageLog::~FMessageLog(pFVar4);
LAB_148217cbe:
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe | param_1;
  if (!param_2) {
    if (param_1) {
      this->PhysicsBlendWeight = 1.0;
    }
    else {
      this->PhysicsBlendWeight = 0.0;
    }
  }
  bVar1 = FBodyInstanceCore::ShouldInstanceSimulatingPhysics((FBodyInstanceCore *)this);
  if ((bVar1) && (this->ActorHandle != (FSingleParticlePhysicsProxy *)0x0)) {
    local_res10[0] = 1;
  }
  else {
    local_res10[0] = 0;
  }
  local_210 = this->ActorHandle;
  local_1c8 = local_res18;
  local_1c0 = local_res10;
  local_1d0 = &local_1c8;
  local_1d8 = UE::Core::Private::Function::
              TFunctionRefCaller<`FBodyInstance::UpdateInstanceSimulatePhysics'::__l2::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
              ::Call;
  local_res18[0] = '\0';
  local_1b8 = this;
  FPhysInterface_Chaos::ExecuteWrite
            (&local_210,
             (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_1d8)
  ;
  if (local_res18[0] != '\0') {
    fVar8 = __real_3f800000;
    if (local_res10[0] == 0) {
      fVar8 = 0.0;
    }
    this->PhysicsBlendWeight = fVar8;
    *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe | local_res10[0] & 1;
  }
  return;
}

// SetLinearVelocity @ 148217dc0

void __thiscall
FBodyInstance::SetLinearVelocity
          (FBodyInstance *this,TVector<double> *param_1,bool param_2,bool param_3)

{
  FSingleParticlePhysicsProxy *local_res8 [2];
  undefined1 local_res18 [16];
  TVector<double> *local_28;
  undefined1 *local_20;
  code *local_18;
  TVector<double> **local_10;
  
  local_20 = local_res18;
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FBodyInstance::SetLinearVelocity'::__l2::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
             ::Call;
  local_res8[0] = this->ActorHandle;
  local_res18[0] = param_2;
  local_28 = param_1;
  FPhysInterface_Chaos::ExecuteWrite
            (local_res8,
             (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_18);
  return;
}

// SetMaskFilter @ 148217e10

void __thiscall FBodyInstance::SetMaskFilter(FBodyInstance *this,uchar param_1)

{
  FSingleParticlePhysicsProxy *local_res8;
  uchar local_res10 [24];
  FBodyInstance *local_28;
  uchar *local_20;
  code *local_18;
  FBodyInstance **local_10;
  
  if (this->MaskFilter != param_1) {
    local_20 = local_res10;
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`FBodyInstance::SetMaskFilter'::__l2::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
               ::Call;
    local_res8 = this->ActorHandle;
    local_res10[0] = param_1;
    local_28 = this;
    FPhysInterface_Chaos::ExecuteWrite
              (&local_res8,
               (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_18
              );
    this->MaskFilter = local_res10[0];
  }
  return;
}

// SetMassOverride @ 148217e70

void __thiscall FBodyInstance::SetMassOverride(FBodyInstance *this,float param_1,bool param_2)

{
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfd;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | param_2 * '\x02';
  this->MassInKgOverride = param_1;
  return;
}

// SetMassScale @ 148217e90

void __thiscall FBodyInstance::SetMassScale(FBodyInstance *this,float param_1)

{
  this->MassScale = param_1;
  UpdateMassProperties(this);
  return;
}

// SetMassSpaceLocal @ 148217eb0

void __thiscall FBodyInstance::SetMassSpaceLocal(FBodyInstance *this,TTransform<double> *param_1)

{
  TTransform<double> *local_res8;
  FSingleParticlePhysicsProxy *local_res10 [3];
  code *local_18;
  TTransform<double> **local_10;
  
  local_10 = &local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FBodyInstance::SetMassSpaceLocal'::__l2::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
             ::Call;
  local_res10[0] = this->ActorHandle;
  local_res8 = param_1;
  FPhysInterface_Chaos::ExecuteWrite
            (local_res10,
             (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_18);
  return;
}

// SetMaxAngularVelocityInRadians @ 148217f00

void __thiscall
FBodyInstance::SetMaxAngularVelocityInRadians
          (FBodyInstance *this,float param_1,bool param_2,bool param_3)

{
  FSingleParticlePhysicsProxy *local_res8;
  float local_res10 [2];
  undefined1 local_res18 [8];
  float local_res20 [2];
  code *local_48;
  undefined1 **local_40;
  undefined1 *local_38;
  float *local_30;
  float *local_28;
  
  local_res20[0] = param_1 * __real_42652ee0;
  local_38 = local_res18;
  local_30 = local_res10;
  local_28 = local_res20;
  local_40 = &local_38;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`FBodyInstance::SetMaxAngularVelocityInRadians'::__l2::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
             ::Call;
  local_res8 = this->ActorHandle;
  local_res10[0] = param_1;
  local_res18[0] = param_2;
  FPhysInterface_Chaos::ExecuteWrite
            (&local_res8,
             (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_48);
  this->MaxAngularVelocity = local_res20[0];
  if (param_3) {
    this->bOverrideMaxAngularVelocity = '\x01';
  }
  return;
}

// SetMaxDepenetrationVelocity @ 148217fa0

void __thiscall FBodyInstance::SetMaxDepenetrationVelocity(FBodyInstance *this,float param_1)

{
  FSingleParticlePhysicsProxy *local_res8 [4];
  FBodyInstance *local_28;
  float local_20;
  code *local_18;
  FBodyInstance **local_10;
  
  this->bOverrideMaxDepenetrationVelocity = '\x01';
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FBodyInstance::UpdateMaxDepenetrationVelocity'::__l2::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
             ::Call;
  local_res8[0] = this->ActorHandle;
  this->MaxDepenetrationVelocity = param_1;
  local_28 = this;
  local_20 = param_1;
  FPhysInterface_Chaos::ExecuteWrite
            (local_res8,
             (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_18);
  return;
}

// SetObjectType @ 148218140

void __thiscall FBodyInstance::SetObjectType(FBodyInstance *this,ECollisionChannel param_1)

{
  FWeakObjectPtr local_res8;
  undefined8 local_res18 [2];
  
  this->CollisionProfileName = UCollisionProfile::CustomCollisionProfileName;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18[0] = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  this->bPendingCollisionProfileSetup = '\0';
  (this->ExternalCollisionProfileBodySetup).WeakPtr = local_res8;
  (this->ObjectType).Value = (uchar)param_1;
  UpdatePhysicsFilterData(this);
  return;
}

// SetOneWayInteraction @ 1482181a0

void __thiscall FBodyInstance::SetOneWayInteraction(FBodyInstance *this,bool param_1)

{
  FSingleParticlePhysicsProxy *local_res8;
  undefined1 local_res10 [24];
  code *local_18;
  undefined1 *local_10;
  
  if (this->bOneWayInteraction != param_1) {
    local_10 = local_res10;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`FBodyInstance::UpdateOneWayInteraction'::__l2::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
               ::Call;
    local_res8 = this->ActorHandle;
    this->field_0x3e = this->field_0x3e & 0xfb | param_1 << 2;
    local_res10[0] = param_1;
    FPhysInterface_Chaos::ExecuteWrite
              (&local_res8,
               (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_18
              );
  }
  return;
}

// SetOverrideIterationCounts @ 148218210

void __thiscall FBodyInstance::SetOverrideIterationCounts(FBodyInstance *this,bool param_1)

{
  FSingleParticlePhysicsProxy *local_res8 [4];
  code *local_38;
  FBodyInstance **local_30;
  FBodyInstance *local_28;
  uint local_20;
  uint local_1c;
  uint local_18;
  
  if (param_1 != this->bOverrideIterationCounts) {
    this->field_0x3d = this->field_0x3d & 0xbf | param_1 << 6;
    local_1c = 0xffffffff;
    if (param_1) {
      local_20 = (uint)this->PositionSolverIterationCount;
      local_1c = (uint)this->VelocitySolverIterationCount;
      local_18 = (uint)this->ProjectionSolverIterationCount;
    }
    else {
      local_20 = 0xffffffff;
      local_18 = 0xffffffff;
    }
    local_30 = &local_28;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`FBodyInstance::SetOverrideIterationCounts'::__l5::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
               ::Call;
    local_res8[0] = this->ActorHandle;
    local_28 = this;
    FPhysInterface_Chaos::ExecuteWrite
              (local_res8,
               (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_38
              );
  }
  return;
}

// SetOverrideMaxDepenetrationVelocity @ 1482182b0

void __thiscall FBodyInstance::SetOverrideMaxDepenetrationVelocity(FBodyInstance *this,bool param_1)

{
  FSingleParticlePhysicsProxy *local_res8 [4];
  FBodyInstance *local_28;
  float local_20;
  code *local_18;
  FBodyInstance **local_10;
  
  this->bOverrideMaxDepenetrationVelocity = '\0';
  this->field_0x3d = this->field_0x3d | param_1 << 4;
  local_20 = __real_bf800000;
  if (param_1) {
    local_20 = this->MaxDepenetrationVelocity;
  }
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FBodyInstance::UpdateMaxDepenetrationVelocity'::__l2::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
             ::Call;
  local_res8[0] = this->ActorHandle;
  local_28 = this;
  FPhysInterface_Chaos::ExecuteWrite
            (local_res8,
             (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_18);
  return;
}

// SetPhysMaterialOverride @ 148218320

void __thiscall
FBodyInstance::SetPhysMaterialOverride(FBodyInstance *this,UPhysicalMaterial *param_1)

{
  (this->PhysMaterialOverride).field0_0x0.DebugPtr = param_1;
  UpdatePhysicalMaterials(this);
  UpdateMassProperties(this);
  return;
}

// SetPhysicsActor @ 148218350

void __thiscall
FBodyInstance::SetPhysicsActor(FBodyInstance *this,FSingleParticlePhysicsProxy *param_1)

{
  this->ActorHandle = param_1;
  return;
}

// SetPhysicsDisabled @ 148218360

void __thiscall FBodyInstance::SetPhysicsDisabled(FBodyInstance *this,bool param_1)

{
  undefined1 *local_res8;
  undefined1 local_res10 [8];
  FSingleParticlePhysicsProxy *local_res18 [2];
  code *local_18;
  undefined1 **local_10;
  
  local_res8 = local_res10;
  local_10 = &local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FBodyInstance::SetPhysicsDisabled'::__l2::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
             ::Call;
  local_res18[0] = this->ActorHandle;
  local_res10[0] = param_1;
  FPhysInterface_Chaos::ExecuteWrite
            (local_res18,
             (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_18);
  return;
}

// SetPositionSolverIterationCount @ 148218480

void __thiscall FBodyInstance::SetPositionSolverIterationCount(FBodyInstance *this,uchar param_1)

{
  FSingleParticlePhysicsProxy *local_res8 [4];
  FBodyInstance *local_28;
  uint local_20;
  code *local_18;
  FBodyInstance **local_10;
  
  if (this->PositionSolverIterationCount != param_1) {
    this->PositionSolverIterationCount = param_1;
    local_20 = (uint)param_1;
    if (this->bOverrideIterationCounts == '\0') {
      local_20 = 0xffffffff;
    }
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`FBodyInstance::SetPositionSolverIterationCount'::__l5::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
               ::Call;
    local_res8[0] = this->ActorHandle;
    local_28 = this;
    FPhysInterface_Chaos::ExecuteWrite
              (local_res8,
               (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_18
              );
  }
  return;
}

// SetProjectionSolverIterationCount @ 1482184e0

void __thiscall FBodyInstance::SetProjectionSolverIterationCount(FBodyInstance *this,uchar param_1)

{
  FSingleParticlePhysicsProxy *local_res8 [4];
  FBodyInstance *local_28;
  uint local_20;
  code *local_18;
  FBodyInstance **local_10;
  
  if (this->ProjectionSolverIterationCount != param_1) {
    this->ProjectionSolverIterationCount = param_1;
    local_20 = (uint)param_1;
    if (this->bOverrideIterationCounts == '\0') {
      local_20 = 0xffffffff;
    }
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`FBodyInstance::SetProjectionSolverIterationCount'::__l5::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
               ::Call;
    local_res8[0] = this->ActorHandle;
    local_28 = this;
    FPhysInterface_Chaos::ExecuteWrite
              (local_res8,
               (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_18
              );
  }
  return;
}

// SetResponseToAllChannels @ 148218670

bool __thiscall
FBodyInstance::SetResponseToAllChannels(FBodyInstance *this,ECollisionResponse param_1)

{
  bool bVar1;
  FWeakObjectPtr local_res8;
  undefined8 local_res18 [2];
  
  bVar1 = FCollisionResponseContainer::SetAllChannels
                    (&(this->CollisionResponses).ResponseToChannels,param_1);
  if (bVar1) {
    FCollisionResponse::UpdateArrayFromResponseContainer(&this->CollisionResponses);
    this->CollisionProfileName = UCollisionProfile::CustomCollisionProfileName;
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res18[0] = 0;
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
    this->bPendingCollisionProfileSetup = '\0';
    (this->ExternalCollisionProfileBodySetup).WeakPtr = local_res8;
    UpdatePhysicsFilterData(this);
    return true;
  }
  return false;
}

// SetResponseToChannel @ 148218700

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FBodyInstance::SetResponseToChannel
          (FBodyInstance *this,ECollisionChannel param_1,ECollisionResponse param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UCollisionProfile *this_00;
  int iVar4;
  FWeakObjectPtr local_res8;
  longlong local_res20;
  undefined8 local_38 [2];
  
  if (FCollisionResponseContainer::DefaultResponseContainer.field0_0x0.EnumArray[(int)param_1] ==
      param_2) {
    this_00 = UCollisionProfile::Get();
    UCollisionProfile::ReturnChannelNameFromContainerIndex(this_00,(int)&local_res20);
    iVar4 = 0;
    while( true ) {
      if ((iVar4 < 0) || ((this->CollisionResponses).ResponseArray.ArrayNum <= iVar4))
      goto LAB_1482187e7;
      if (iVar4 < 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      if (local_res20 ==
          *(longlong *)
           ((this->CollisionResponses).ResponseArray.AllocatorInstance.Data + (longlong)iVar4 * 0xc)
         ) break;
      iVar4 = iVar4 + 1;
    }
    TArray<FResponseChannel,TSizedDefaultAllocator<32>_>::RemoveAt
              (&(this->CollisionResponses).ResponseArray,iVar4,Default);
  }
  else {
    FCollisionResponse::AddReponseToArray(&this->CollisionResponses,param_1,param_2);
  }
LAB_1482187e7:
  bVar2 = FCollisionResponseContainer::SetResponse
                    (&(this->CollisionResponses).ResponseToChannels,param_1,param_2);
  if (bVar2) {
    this->CollisionProfileName = UCollisionProfile::CustomCollisionProfileName;
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_38[0] = 0;
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_38);
    this->bPendingCollisionProfileSetup = '\0';
    (this->ExternalCollisionProfileBodySetup).WeakPtr = local_res8;
    UpdatePhysicsFilterData(this);
    return true;
  }
  return false;
}

// SetResponseToChannels @ 148218870

bool __thiscall
FBodyInstance::SetResponseToChannels(FBodyInstance *this,FCollisionResponseContainer *param_1)

{
  undefined8 uVar1;
  int iVar2;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  iVar2 = memcmp(&this->CollisionResponses,param_1,0x20);
  if (iVar2 != 0) {
    uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
    *(undefined8 *)&(this->CollisionResponses).ResponseToChannels.field0_0x0 =
         *(undefined8 *)&param_1->field0_0x0;
    *(undefined8 *)((longlong)&(this->CollisionResponses).ResponseToChannels.field0_0x0 + 8) = uVar1
    ;
    uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 0x18);
    *(undefined8 *)((longlong)&(this->CollisionResponses).ResponseToChannels.field0_0x0 + 0x10) =
         *(undefined8 *)((longlong)&param_1->field0_0x0 + 0x10);
    *(undefined8 *)((longlong)&(this->CollisionResponses).ResponseToChannels.field0_0x0 + 0x18) =
         uVar1;
    FCollisionResponse::UpdateArrayFromResponseContainer(&this->CollisionResponses);
    this->CollisionProfileName = UCollisionProfile::CustomCollisionProfileName;
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = 0;
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    this->bPendingCollisionProfileSetup = '\0';
    (this->ExternalCollisionProfileBodySetup).WeakPtr = local_res8;
    UpdatePhysicsFilterData(this);
    return true;
  }
  return false;
}

// SetShapeCollisionEnabled @ 148218b20

void __thiscall
FBodyInstance::SetShapeCollisionEnabled(FBodyInstance *this,int param_1,Type param_2,bool param_3)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement FVar3;
  code *pcVar4;
  bool bVar5;
  Type TVar6;
  int iVar7;
  UBodySetup *pUVar8;
  FKShapeElem *pFVar9;
  FScriptContainerElement *_Dst;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  
  bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
  if (bVar5) {
    TVar6 = GetShapeCollisionEnabled(this,param_1);
    if (TVar6 != param_2) {
      uVar11 = 0;
      if (this->bShapeCollisionEnabledIsSet == '\0') {
        pUVar8 = GetBodySetup(this);
        piVar1 = &(this->ShapeCollisionEnabled).ArrayMax;
        piVar2 = &(this->ShapeCollisionEnabled).ArrayNum;
        uVar10 = (pUVar8->AggGeom).SkinnedTriangleMeshElems.ArrayNum +
                 (pUVar8->AggGeom).MLLevelSetElems.ArrayNum +
                 (pUVar8->AggGeom).SkinnedLevelSetElems.ArrayNum +
                 (pUVar8->AggGeom).LevelSetElems.ArrayNum +
                 (pUVar8->AggGeom).TaperedCapsuleElems.ArrayNum +
                 (pUVar8->AggGeom).ConvexElems.ArrayNum + (pUVar8->AggGeom).SphylElems.ArrayNum +
                 (pUVar8->AggGeom).BoxElems.ArrayNum + (pUVar8->AggGeom).SphereElems.ArrayNum;
        *piVar2 = 0;
        if (*piVar1 < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,0,&(this->ShapeCollisionEnabled).AllocatorInstance,0,piVar1);
        }
        this->bShapeCollisionEnabledIsSet = '\x01';
        iVar7 = *piVar2;
        if (iVar7 < (int)uVar10) {
          UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,uVar10 - iVar7,&(this->ShapeCollisionEnabled).AllocatorInstance,piVar2,
                     piVar1);
        }
        else {
          if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
          }
          if ((int)uVar10 < iVar7) {
            uVar12 = iVar7 - uVar10;
            if (((int)(uVar12 | uVar10) < 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  ), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (uVar12 != 0) {
              _Dst = (this->ShapeCollisionEnabled).AllocatorInstance.Data + (int)uVar10;
              iVar7 = (*piVar2 - uVar12) - uVar10;
              if (iVar7 != 0) {
                memmove(_Dst,_Dst + (int)uVar12,(longlong)iVar7);
              }
              *piVar2 = *piVar2 - uVar12;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,&(this->ShapeCollisionEnabled).AllocatorInstance,*piVar2,piVar1);
            }
          }
        }
        uVar14 = uVar11;
        if (0 < (int)uVar10) {
          do {
            pUVar8 = GetBodySetup(this);
            uVar13 = (uint)uVar14;
            pFVar9 = FKAggregateGeom::GetElement(&pUVar8->AggGeom,uVar13);
            FVar3 = (FScriptContainerElement)(pFVar9->CollisionEnabled).Value;
            uVar12 = 0;
            if ((int)uVar13 < *piVar2) {
              uVar12 = ~uVar13 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            (this->ShapeCollisionEnabled).AllocatorInstance.Data[uVar11] = FVar3;
            uVar11 = uVar11 + 1;
            uVar14 = (ulonglong)(uVar13 + 1);
          } while ((longlong)uVar11 < (longlong)(int)uVar10);
        }
      }
      uVar10 = 0;
      if (param_1 < (this->ShapeCollisionEnabled).ArrayNum) {
        uVar10 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (this->ShapeCollisionEnabled).AllocatorInstance.Data[param_1] = SUB41(param_2,0);
      if (param_3) {
        UpdatePhysicsFilterData(this);
      }
    }
  }
  else {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8608185054796972807>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                       ,0x307,"BodySetup.IsValid()");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// SetShapeResponseToChannels @ 148218e20

/* WARNING: Removing unreachable block (ram,0x00014821903a) */

bool __thiscall
FBodyInstance::SetShapeResponseToChannels
          (FBodyInstance *this,int param_1,FCollisionResponseContainer *param_2)

{
  TArray<TTuple<int,FCollisionResponse>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TTuple<int,FCollisionResponse> *pTVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  FCollisionResponseContainer_u_0 local_b8;
  void *local_98;
  undefined8 local_90;
  int local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong uVar12;
  
  uVar12 = 0;
  pTVar1 = &this->ShapeCollisionResponses;
  uVar11 = 0;
  if (this->bShapeCollisionResponsesIsSet == '\0') {
    piVar2 = &(this->ShapeCollisionResponses).ArrayMax;
    pTVar3 = (TTuple<int,FCollisionResponse> *)(pTVar1->AllocatorInstance).Data;
    iVar9 = (this->ShapeCollisionResponses).ArrayNum;
    if (*piVar2 < 0) {
      DestructItems<TTuple<int,FCollisionResponse>,int>(pTVar3,iVar9);
      (this->ShapeCollisionResponses).ArrayNum = 0;
      if (*piVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,0,&pTVar1->AllocatorInstance,0,piVar2);
      }
    }
    else {
      DestructItems<TTuple<int,FCollisionResponse>,int>(pTVar3,iVar9);
      (this->ShapeCollisionResponses).ArrayNum = 0;
    }
    this->bShapeCollisionResponsesIsSet = '\x01';
  }
  uVar13 = (this->ShapeCollisionResponses).ArrayNum;
  uVar14 = uVar12;
  uVar15 = uVar12;
  if (0 < (int)uVar13) {
    do {
      uVar11 = (uint)uVar12;
      uVar8 = 0;
      if ((int)uVar11 < (this->ShapeCollisionResponses).ArrayNum) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      if (*(int *)((pTVar1->AllocatorInstance).Data + uVar14) == param_1) break;
      uVar11 = uVar11 + 1;
      uVar12 = (ulonglong)uVar11;
      uVar15 = uVar15 + 1;
      uVar14 = uVar14 + 0x38;
    } while ((longlong)uVar15 < (longlong)(int)uVar13);
  }
  if (uVar11 == uVar13) {
    FCollisionResponseContainer::FCollisionResponseContainer
              ((FCollisionResponseContainer *)&local_b8._s_0);
    pFVar10 = (this->ShapeCollisionResponses).AllocatorInstance.Data;
    local_60 = 0;
    local_98 = (void *)0x0;
    local_58 = 0;
    local_90 = 0;
    local_80 = local_b8._0_8_;
    uStack_78 = local_b8._8_8_;
    local_70 = local_b8._16_8_;
    uStack_68 = local_b8._24_8_;
    local_88[0] = param_1;
    if (((pFVar10 <= (FScriptContainerElement *)local_88) &&
        ((FScriptContainerElement *)local_88 <
         pFVar10 + (longlong)(this->ShapeCollisionResponses).ArrayMax * 0x38)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    iVar9 = (this->ShapeCollisionResponses).ArrayNum;
    piVar2 = &(this->ShapeCollisionResponses).ArrayMax;
    if (iVar9 == *piVar2) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x838,&(this->ShapeCollisionResponses).AllocatorInstance,piVar2);
    }
    (this->ShapeCollisionResponses).ArrayNum = iVar9 + 1;
    pFVar10 = (this->ShapeCollisionResponses).AllocatorInstance.Data + (longlong)iVar9 * 0x38;
    *(int *)pFVar10 = local_88[0];
    *(undefined8 *)(pFVar10 + 8) = local_80;
    *(undefined8 *)(pFVar10 + 0x10) = uStack_78;
    *(undefined8 *)(pFVar10 + 0x18) = local_70;
    *(undefined8 *)(pFVar10 + 0x20) = uStack_68;
    *(undefined8 *)(pFVar10 + 0x28) = 0;
    *(undefined8 *)(pFVar10 + 0x28) = local_60;
    *(undefined4 *)(pFVar10 + 0x30) = (undefined4)local_58;
    *(undefined4 *)(pFVar10 + 0x34) = local_58._4_4_;
    local_58 = 0;
    local_60 = 0;
    if (local_98 != (void *)0x0) {
      FMemory::Free(local_98);
    }
  }
  uVar13 = 0;
  if ((int)uVar11 < (this->ShapeCollisionResponses).ArrayNum) {
    uVar13 = ~uVar11 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  pFVar10 = (this->ShapeCollisionResponses).AllocatorInstance.Data;
  iVar9 = memcmp(pFVar10 + (longlong)(int)uVar11 * 0x38 + 8,param_2,0x20);
  if (iVar9 != 0) {
    uVar5 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
    *(undefined8 *)(pFVar10 + (longlong)(int)uVar11 * 0x38 + 8) =
         *(undefined8 *)&param_2->field0_0x0;
    *(undefined8 *)(pFVar10 + (longlong)(int)uVar11 * 0x38 + 0x10) = uVar5;
    uVar5 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 0x18);
    *(undefined8 *)(pFVar10 + (longlong)(int)uVar11 * 0x38 + 0x18) =
         *(undefined8 *)((longlong)&param_2->field0_0x0 + 0x10);
    *(undefined8 *)(pFVar10 + (longlong)(int)uVar11 * 0x38 + 0x20) = uVar5;
    FCollisionResponse::UpdateArrayFromResponseContainer
              ((FCollisionResponse *)(pFVar10 + (longlong)(int)uVar11 * 0x38 + 8));
    UpdatePhysicsFilterData(this);
  }
  return iVar9 != 0;
}

// SetSmoothEdgeCollisionsEnabled @ 148219100

void __thiscall FBodyInstance::SetSmoothEdgeCollisionsEnabled(FBodyInstance *this,bool param_1)

{
  FSingleParticlePhysicsProxy *local_res8;
  undefined1 local_res10 [24];
  code *local_18;
  undefined1 *local_10;
  
  if (param_1 != this->bSmoothEdgeCollisions) {
    local_10 = local_res10;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`FBodyInstance::SetSmoothEdgeCollisionsEnabled'::__l5::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
               ::Call;
    local_res8 = this->ActorHandle;
    this->field_0x3c = this->field_0x3c & 0xfe | param_1;
    local_res10[0] = param_1;
    FPhysInterface_Chaos::ExecuteWrite
              (&local_res8,
               (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_18
              );
  }
  return;
}

// SetUpdateKinematicFromSimulation @ 148219360

void __thiscall FBodyInstance::SetUpdateKinematicFromSimulation(FBodyInstance *this,bool param_1)

{
  byte bVar1;
  FBodyInstance *local_res8 [2];
  FSingleParticlePhysicsProxy *local_res18 [2];
  code *local_18;
  FBodyInstance **local_10;
  
  bVar1 = (byte)this->_padding_;
  if ((bool)(bVar1 >> 3 & 1) != param_1) {
    local_10 = local_res8;
    *(byte *)&this->_padding_ = bVar1 & 0xf7 | param_1 << 3;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`FBodyInstance::SetUpdateKinematicFromSimulation'::__l6::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
               ::Call;
    local_res18[0] = this->ActorHandle;
    local_res8[0] = this;
    FPhysInterface_Chaos::ExecuteWrite
              (local_res18,
               (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_18
              );
  }
  return;
}

// SetUseCCD @ 1482193d0

void __thiscall FBodyInstance::SetUseCCD(FBodyInstance *this,bool param_1)

{
  FBodyInstance *local_res8 [2];
  FSingleParticlePhysicsProxy *local_res18 [2];
  code *local_18;
  FBodyInstance **local_10;
  
  if (this->bUseCCD != param_1) {
    local_10 = local_res8;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`FBodyInstance::SetUseCCD'::__l5::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
               ::Call;
    local_res18[0] = this->ActorHandle;
    this->field_0x3b = this->field_0x3b & 0xfe | param_1;
    local_res8[0] = this;
    FPhysInterface_Chaos::ExecuteWrite
              (local_res18,
               (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_18
              );
    UpdatePhysicsFilterData(this);
    return;
  }
  return;
}

// SetUseMACD @ 148219440

void __thiscall FBodyInstance::SetUseMACD(FBodyInstance *this,bool param_1)

{
  FSingleParticlePhysicsProxy *local_res8 [4];
  FBodyInstance *local_28;
  undefined1 local_20;
  code *local_18;
  FBodyInstance **local_10;
  
  if (this->bUseMACD != param_1) {
    local_10 = &local_28;
    this->field_0x3b = this->field_0x3b & 0xf7 | param_1 << 3;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`FBodyInstance::SetUseMACD'::__l5::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
               ::Call;
    local_res8[0] = this->ActorHandle;
    local_28 = this;
    local_20 = param_1;
    FPhysInterface_Chaos::ExecuteWrite
              (local_res8,
               (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_18
              );
  }
  return;
}

// SetVelocitySolverIterationCount @ 1482194b0

void __thiscall FBodyInstance::SetVelocitySolverIterationCount(FBodyInstance *this,uchar param_1)

{
  FSingleParticlePhysicsProxy *local_res8 [4];
  FBodyInstance *local_28;
  uint local_20;
  code *local_18;
  FBodyInstance **local_10;
  
  if (this->VelocitySolverIterationCount != param_1) {
    this->VelocitySolverIterationCount = param_1;
    local_20 = (uint)param_1;
    if (this->bOverrideIterationCounts == '\0') {
      local_20 = 0xffffffff;
    }
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`FBodyInstance::SetVelocitySolverIterationCount'::__l5::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
               ::Call;
    local_res8[0] = this->ActorHandle;
    local_28 = this;
    FPhysInterface_Chaos::ExecuteWrite
              (local_res8,
               (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_18
              );
  }
  return;
}

// SetWalkableSlopeOverride @ 148219510

void __thiscall
FBodyInstance::SetWalkableSlopeOverride
          (FBodyInstance *this,FWalkableSlopeOverride *param_1,bool param_2)

{
  undefined3 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  this->bOverrideWalkableSlopeOnInstance = '\0';
  this->field_0x3d = this->field_0x3d | param_2 << 5;
  uVar1 = *(undefined3 *)&param_1->field_0x1;
  fVar2 = param_1->WalkableSlopeAngle;
  fVar3 = param_1->CachedSlopeAngle;
  fVar4 = param_1->CachedSlopeCos;
  (this->WalkableSlopeOverride).WalkableSlopeBehavior =
       (TEnumAsByte<EWalkableSlopeBehavior>)(param_1->WalkableSlopeBehavior).Value;
  *(undefined3 *)&(this->WalkableSlopeOverride).field_0x1 = uVar1;
  (this->WalkableSlopeOverride).WalkableSlopeAngle = fVar2;
  (this->WalkableSlopeOverride).CachedSlopeAngle = fVar3;
  (this->WalkableSlopeOverride).CachedSlopeCos = fVar4;
  return;
}

// SetWeldedBodyTransform @ 148219530

void __thiscall
FBodyInstance::SetWeldedBodyTransform
          (FBodyInstance *this,FBodyInstance *param_1,TTransform<double> *param_2)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  undefined1 local_res8 [8];
  FBodyInstance *local_res10 [2];
  FSingleParticlePhysicsProxy *local_res20;
  code *local_48;
  FBodyInstance **local_40;
  FBodyInstance *local_38;
  FBodyInstance **local_30;
  undefined1 *local_28;
  
  local_res10[0] = param_1;
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                       ,0x7d9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_30 = local_res10;
  local_res8[0] = 0;
  local_28 = local_res8;
  local_40 = &local_38;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`FBodyInstance::UnWeld'::__l2::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
             ::Call;
  local_res20 = this->ActorHandle;
  local_38 = this;
  FPhysInterface_Chaos::ExecuteWrite
            (&local_res20,
             (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_48);
  UpdateInterpolateWhenSubStepping(this);
  pUVar3 = FWeakObjectPtr::Get(&(local_res10[0]->OwnerComponent).WeakPtr);
  if (pUVar3 != (UObject *)0x0) {
    (**(code **)(*(longlong *)pUVar3 + 0x898))(pUVar3,0);
  }
  pUVar3 = FWeakObjectPtr::Get(&(this->OwnerComponent).WeakPtr);
  if (pUVar3 != (UObject *)0x0) {
    (**(code **)(*(longlong *)pUVar3 + 0x898))(pUVar3,0);
  }
  Weld(this,param_1,param_2);
  return;
}

// StartAsyncTermBody_GameThread @ 14821fd20

/* WARNING: Enum "Type": Some values do not have unique names */

FAsyncTermBodyPayload * __thiscall
FBodyInstance::StartAsyncTermBody_GameThread
          (FBodyInstance *this,FAsyncTermBodyPayload *__return_storage_ptr__)

{
  int *piVar1;
  FConstraintInstance *this_00;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_TermBody> FVar6;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FNameEntryId FVar7;
  LARGE_INTEGER LVar8;
  bool bVar9;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_48;
  
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1795,"FBodyInstance::StartAsyncTermBody_GameThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
               ,0x703);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1795);
  }
  FVar7.Value = 0;
  FVar6 = StatPtr_STAT_TermBody;
  if (StatPtr_STAT_TermBody == (FThreadSafeStaticStat<FStat_STAT_TermBody>)0x0) {
    pFVar5 = ::FName::FName(&local_res10,"STAT_TermBody");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_TermBody>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TermBody,*pFVar5,L"Term Body",
                       "STATGROUP_Physics","STATCAT_Advanced",L"Physics",true,true,ST_int64,true,
                       false,MCR_Invalid);
  }
  LVar8 = *(LARGE_INTEGER *)FVar6;
  bVar2 = false;
  bVar4 = false;
  if ((LVar8.s.LowPart != 0) || (LVar8.s.HighPart != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.QuadPart = (ulonglong)(uint)local_res8.s.HighPart << 0x20;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8 = LVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                   ,0x704);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = LVar8;
      FThreadStats::AddMessage((FName)LVar8.s,CycleScopeStart);
      bVar3 = true;
      FVar7.Value = LVar8.s.LowPart;
      goto LAB_14821feaa;
    }
  }
  bVar3 = false;
  LVar8._0_4_ = 0;
  LVar8._4_4_ = 0;
LAB_14821feaa:
  (__return_storage_ptr__->OwnerComponent).WeakPtr = (FWeakObjectPtr)0x0;
  __return_storage_ptr__->bNotifyRigidBodyCollision = false;
  __return_storage_ptr__->ActorHandle = (FSingleParticlePhysicsProxy *)0x0;
  __return_storage_ptr__->ActorHandle = this->ActorHandle;
  (__return_storage_ptr__->OwnerComponent).WeakPtr = (this->OwnerComponent).WeakPtr;
  local_res8.s.LowPart = 0;
  local_res8.s.HighPart = 0;
  __return_storage_ptr__->bNotifyRigidBodyCollision = this->bNotifyRigidBodyCollision;
  this->ActorHandle = (FSingleParticlePhysicsProxy *)0x0;
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res8.s,(FObjectPtr)&local_res10);
  (this->OwnerComponent).WeakPtr = (FWeakObjectPtr)local_res8;
  this->BodyInstanceOwner = (IPhysicsBodyInstanceOwner *)0x0;
  this->CurrentSceneState = NotAdded;
  local_res8.QuadPart = 0;
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res8.s,(FObjectPtr)&local_res10);
  this->_padding_ = (longlong)local_res8;
  local_res8.s.LowPart = 0;
  local_res8.s.HighPart = 0;
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res8.s,(FObjectPtr)&local_res10);
  this_00 = this->DOFConstraint;
  (this->ExternalCollisionProfileBodySetup).WeakPtr = (FWeakObjectPtr)local_res8;
  if (this_00 != (FConstraintInstance *)0x0) {
    FConstraintInstance::TermConstraint(this_00);
    FConstraintInstance::Free(this->DOFConstraint);
    this->DOFConstraint = (FConstraintInstance *)0x0;
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && ((FName)LVar8.QuadPart != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_48.NameAndInfo.Number = LVar8.s.HighPart & 0xffff6fffU | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar7.Value;
      QueryPerformanceCounter(&local_res8);
      local_48.StatData.Pad = (uchar  [8])(local_res8.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_01,&local_48);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// Sweep @ 148220890

bool __thiscall
FBodyInstance::Sweep
          (FBodyInstance *this,FHitResult *param_1,TVector<double> *param_2,TVector<double> *param_3
          ,TQuat<double> *param_4,FCollisionShape *param_5,bool param_6)

{
  bool bVar1;
  
  bVar1 = FPhysInterface_Chaos::Sweep_Geom(param_1,this,param_2,param_3,param_4,param_5,param_6);
  return bVar1;
}

// TermBody @ 1482209a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FBodyInstance::TermBody(FBodyInstance *this,bool param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  TMap<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>
  *pTVar6;
  FBodyInstance *this_00;
  FScriptContainerElement *pFVar7;
  FPhysScene_Chaos *this_01;
  TTuple<int,FCollisionResponse> *pTVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  ForElementType<unsigned_int> FVar14;
  TMap<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>
  *pTVar15;
  bool bVar16;
  bool bVar17;
  FName *pFVar18;
  FThreadSafeStaticStat<FStat_STAT_TermBody> FVar19;
  FString *pFVar20;
  UPrimitiveComponent *this_02;
  UWorld *pUVar21;
  longlong lVar22;
  FName FVar23;
  int iVar24;
  int iVar25;
  ForElementType<unsigned_int> FVar26;
  uint *puVar27;
  uint uVar28;
  uint uVar29;
  undefined1 auStackY_3c8 [32];
  undefined1 local_367 [7];
  FName local_360;
  int local_358;
  FColor_u_0 local_354;
  FWeakObjectPtr local_350;
  FWeakObjectPtr local_348;
  FName local_340;
  ForElementType<unsigned_int> local_338;
  FName local_330;
  TMap<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>
  *local_320;
  int iStack_318;
  uint uStack_314;
  undefined1 *local_310;
  undefined4 uStack_308;
  int iStack_304;
  int local_300;
  int iStack_2fc;
  int iStack_2f8;
  undefined4 uStack_2f4;
  int local_2f0;
  TMap<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>
  *local_2e8;
  FBodyInstance *local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  TMap<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>
  *local_2c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2b8;
  undefined8 uStack_298;
  FBodyInstance *local_290;
  TStringBuilderBase<wchar_t> *local_288;
  FName local_280;
  FString local_278;
  FString local_268;
  TStringBuilderBase<wchar_t> local_258;
  wchar_t local_238 [256];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  bVar13 = false;
  bVar12 = false;
  iVar25 = 0;
  local_354.Bits = 0;
  FVar19 = StatPtr_STAT_TermBody;
  local_2e0 = this;
  if (StatPtr_STAT_TermBody == (FThreadSafeStaticStat<FStat_STAT_TermBody>)0x0) {
    pFVar18 = ::FName::FName(&local_280,"STAT_TermBody");
    FVar19 = (FThreadSafeStaticStat<FStat_STAT_TermBody>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TermBody,*pFVar18,L"Term Body",
                        "STATGROUP_Physics","STATCAT_Advanced",L"Physics",true,true,ST_int64,true,
                        false,MCR_Invalid);
  }
  FVar23 = *(FName *)FVar19;
  bVar10 = false;
  bVar11 = false;
  local_330.ComparisonIndex.Value = 0;
  local_330.Number = 0;
  bVar16 = false;
  bVar17 = false;
  if ((FVar23.ComparisonIndex.Value.Value != 0) || (FVar23.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_354.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_354._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
      bVar10 = false;
      bVar11 = true;
      bVar16 = false;
      bVar17 = true;
      if (-1 < CpuChannel->Enabled) {
        local_340.ComparisonIndex.Value = FVar23.ComparisonIndex.Value.Value;
        local_340.Number = FVar23.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_340,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                   ,0x73d);
        bVar10 = true;
        bVar11 = true;
        bVar16 = true;
        bVar17 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_360 = FVar23;
      FThreadStats::AddMessage(FVar23,CycleScopeStart);
      bVar16 = true;
      goto LAB_148220b1a;
    }
  }
  bVar11 = bVar17;
  bVar10 = bVar16;
  bVar16 = false;
  FVar23 = local_330;
LAB_148220b1a:
  pTVar6 = (this->ShapeToBodiesMap).Object;
  if ((pTVar6 != (TMap<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>
                  *)0x0) && (*(int *)&pTVar6->field_0x8 != *(int *)&pTVar6->field_0x34)) {
    local_258.Base = local_238;
    local_258.bIsDynamic = false;
    local_258.bIsExternal = false;
    local_338 = (ForElementType<unsigned_int>)&pTVar6->field_0x10;
    local_258.CurPos = local_238;
    local_258.End = (wchar_t *)local_38;
    local_358 = 0;
    local_300 = 0;
    iVar4 = *(int *)&pTVar6->field_0x28;
    uStack_314 = 1;
    iStack_304 = 0;
    if (iVar4 != 0) {
      puVar27 = *(uint **)&pTVar6->field_0x20;
      if (*(uint **)&pTVar6->field_0x20 == (uint *)0x0) {
        puVar27 = (uint *)local_338;
      }
      uVar29 = *puVar27;
      iVar25 = 0;
      while (uVar29 == 0) {
        lVar22 = (longlong)iVar25;
        local_300 = local_300 + 0x20;
        iVar25 = iVar25 + 1;
        iStack_304 = iVar4;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar25) goto LAB_148220bff;
        uVar29 = puVar27[lVar22 + 1];
      }
      uStack_314 = -uVar29 & uVar29;
      uVar3 = (ulonglong)uStack_314 * 2 + 1;
      lVar22 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar22 == 0; lVar22 = lVar22 + -1) {
        }
      }
      local_2f0 = (int)lVar22;
      iStack_304 = local_2f0 + -1 + local_300;
      if (iVar4 < iStack_304) {
        iStack_304 = iVar4;
      }
    }
LAB_148220bff:
    iStack_2f8 = *(int *)&pTVar6->field_0x8 - *(int *)&pTVar6->field_0x34;
    uVar29 = *(uint *)&pTVar6->field_0x28;
    uStack_308 = 0xffffffff;
    TStack_2b8.CurrentBitIndex = iStack_304;
    TStack_2b8.UnvisitedBitMask = 0xffffffff;
    TStack_2b8._padding_ = CONCAT44(uStack_314,iVar25);
    uVar28 = uVar29 & 0xffffffe0;
    iVar24 = (int)uVar29 >> 5;
    TStack_2b8._28_4_ = iStack_304;
    TStack_2b8.BaseBitIndex = local_300;
    uStack_298 = CONCAT44(uStack_2f4,iStack_2f8);
    local_320 = pTVar6;
    iStack_318 = iVar25;
    local_310 = (undefined1 *)local_338;
    iStack_2fc = iStack_304;
    local_2e8 = pTVar6;
    local_2c0 = pTVar6;
    TStack_2b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_338;
    if ((((int)uVar29 < 0) || (iVar4 < (int)uVar29)) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar17)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pTVar6 = local_2e8;
    FVar14 = local_338;
    uVar5 = *(int *)((longlong)local_338 + 0x18);
    if (uVar29 != uVar5) {
      FVar26 = *(ForElementType<unsigned_int> *)((longlong)local_338 + 0x10);
      if (*(ForElementType<unsigned_int> *)((longlong)local_338 + 0x10) ==
          (ForElementType<unsigned_int>)0x0) {
        FVar26 = local_338;
      }
      uVar29 = -1 << ((byte)uVar29 & 0x1f) & *(uint *)((longlong)FVar26 + (longlong)iVar24 * 4);
      while (uVar29 == 0) {
        lVar22 = (longlong)iVar24;
        uVar28 = uVar28 + 0x20;
        iVar24 = iVar24 + 1;
        uVar29 = uVar5;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24)
        goto LAB_148220d10;
        uVar29 = *(uint *)((undefined1 *)((longlong)FVar26 + 4) + lVar22 * 4);
      }
      uVar3 = (ulonglong)(-uVar29 & uVar29) * 2 + 1;
      lVar22 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar22 == 0; lVar22 = lVar22 + -1) {
        }
      }
      uVar29 = (int)lVar22 + -1 + uVar28;
      if ((int)uVar5 < (int)uVar29) {
        uVar29 = uVar5;
      }
    }
LAB_148220d10:
    while( true ) {
      pTVar15 = local_2c0;
      if (*(int *)&local_2c0->field_0x8 - *(int *)&local_2c0->field_0x34 != (int)uStack_298) {
        `TSparseArray<TSparseSetElement<TTuple<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_367);
      }
      this = local_2e0;
      if (((TStack_2b8.CurrentBitIndex == uVar29) &&
          ((ForElementType<unsigned_int>)TStack_2b8.Array == FVar14)) && (pTVar15 == pTVar6)) break;
      this_00 = *(FBodyInstance **)
                 (*(longlong *)pTVar15 + 0x10 + (longlong)TStack_2b8.CurrentBitIndex * 0x90);
      if (this_00 == (FBodyInstance *)0x0) {
        bVar12 = true;
        pFVar20 = ::FString::FString(&local_278,"null");
      }
      else {
        bVar13 = true;
        pFVar20 = GetBodyDebugName(this_00,&local_268);
      }
      pFVar7 = (pFVar20->Data).AllocatorInstance.Data;
      (pFVar20->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar20->Data).ArrayNum = 0;
      (pFVar20->Data).ArrayMax = 0;
      if (bVar12) {
        bVar12 = false;
        if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_278.Data.AllocatorInstance.Data);
        }
      }
      if (bVar13) {
        bVar13 = false;
        if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_268.Data.AllocatorInstance.Data);
        }
      }
      iVar25 = local_358;
      TStringBuilderBase<wchar_t>::AppendfImpl(&local_258,L"\tBody[%d]: \'%s\'\n");
      local_358 = iVar25 + 1;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      TStack_2b8.UnvisitedBitMask = TStack_2b8.UnvisitedBitMask & ~TStack_2b8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2b8);
    }
    local_288 = &local_258;
    local_290 = local_2e0;
    `FBodyInstance::TermBody'::__l5::<lambda_1>::operator()(&local_290);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_258);
  }
  this_02 = (UPrimitiveComponent *)FWeakObjectPtr::Get(&(this->OwnerComponent).WeakPtr);
  if (this_02 != (UPrimitiveComponent *)0x0) {
    pUVar21 = *(UWorld **)&this_02->field_0xb0;
    if (pUVar21 == (UWorld *)0x0) {
      pUVar21 = UActorComponent::GetWorld_Uncached((UActorComponent *)this_02);
    }
    this_01 = pUVar21->PhysicsScene;
    if (this_01 != (FPhysScene_Chaos *)0x0) {
      if (this->ActorHandle != (FSingleParticlePhysicsProxy *)0x0) {
        FPhysScene_Chaos::RemoveFromComponentMaps(this_01,(IPhysicsProxyBase *)this->ActorHandle);
      }
      if (this->bNotifyRigidBodyCollision != '\0') {
        FPhysScene_Chaos::UnRegisterForCollisionEvents(this_01,this_02);
      }
    }
  }
  if (this->ActorHandle != (FSingleParticlePhysicsProxy *)0x0) {
    ReleasePhysicsActor(this);
  }
  this->CurrentSceneState = NotAdded;
  local_350.ObjectIndex = 0;
  local_350.ObjectSerialNumber = 0;
  local_2d8 = 0;
  FWeakObjectPtr::operator=(&local_350,(FObjectPtr)&local_2d8);
  this->_padding_ = (longlong)local_350;
  local_348.ObjectIndex = 0;
  local_348.ObjectSerialNumber = 0;
  local_2d0 = 0;
  FWeakObjectPtr::operator=(&local_348,(FObjectPtr)&local_2d0);
  (this->OwnerComponent).WeakPtr = local_348;
  local_360.ComparisonIndex.Value = 0;
  local_360.Number = 0;
  local_2c8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_360,(FObjectPtr)&local_2c8);
  (this->ExternalCollisionProfileBodySetup).WeakPtr = (FWeakObjectPtr)local_360;
  if (bClearPerShapeOverridesOnTerminate != false) {
    this->bShapeCollisionEnabledIsSet = '\0';
    this->bShapeCollisionResponsesIsSet = '\0';
    (this->ShapeCollisionEnabled).ArrayNum = 0;
    if ((this->ShapeCollisionEnabled).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&(this->ShapeCollisionEnabled).AllocatorInstance,0,
                 &(this->ShapeCollisionEnabled).ArrayMax);
    }
    piVar2 = &(this->ShapeCollisionResponses).ArrayMax;
    pTVar8 = (TTuple<int,FCollisionResponse> *)
             (this->ShapeCollisionResponses).AllocatorInstance.Data;
    iVar25 = (this->ShapeCollisionResponses).ArrayNum;
    if ((this->ShapeCollisionResponses).ArrayMax < 0) {
      DestructItems<TTuple<int,FCollisionResponse>,int>(pTVar8,iVar25);
      (this->ShapeCollisionResponses).ArrayNum = 0;
      if (*piVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,0,&(this->ShapeCollisionResponses).AllocatorInstance,0,piVar2);
      }
    }
    else {
      DestructItems<TTuple<int,FCollisionResponse>,int>(pTVar8,iVar25);
      (this->ShapeCollisionResponses).ArrayNum = 0;
    }
  }
  if (this->DOFConstraint != (FConstraintInstance *)0x0) {
    FConstraintInstance::TermConstraint(this->DOFConstraint);
    FConstraintInstance::Free(this->DOFConstraint);
    this->DOFConstraint = (FConstraintInstance *)0x0;
  }
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar16) {
    FThreadStats::AddMessage(FVar23,CycleScopeEnd);
  }
  return;
}

// UnWeld @ 148222940

void __thiscall FBodyInstance::UnWeld(FBodyInstance *this,FBodyInstance *param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  undefined1 local_res8 [8];
  FBodyInstance *local_res10;
  FSingleParticlePhysicsProxy *local_res18 [2];
  code *local_38;
  FBodyInstance **local_30;
  FBodyInstance *local_28;
  FBodyInstance **local_20;
  undefined1 *local_18;
  
  local_res10 = param_1;
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                       ,0x7d9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_20 = &local_res10;
  local_res8[0] = 0;
  local_18 = local_res8;
  local_30 = &local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`FBodyInstance::UnWeld'::__l2::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
             ::Call;
  local_res18[0] = this->ActorHandle;
  local_28 = this;
  FPhysInterface_Chaos::ExecuteWrite
            (local_res18,
             (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_38);
  UpdateInterpolateWhenSubStepping(this);
  pUVar3 = FWeakObjectPtr::Get(&(local_res10->OwnerComponent).WeakPtr);
  if (pUVar3 != (UObject *)0x0) {
    (**(code **)(*(longlong *)pUVar3 + 0x898))(pUVar3,0);
  }
  pUVar3 = FWeakObjectPtr::Get(&(this->OwnerComponent).WeakPtr);
  if (pUVar3 != (UObject *)0x0) {
    (**(code **)(*(longlong *)pUVar3 + 0x898))(pUVar3,0);
  }
  return;
}

// UpdateBodyScale @ 1482237b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FBodyInstance::UpdateBodyScale(FBodyInstance *this,TVector<double> *param_1,bool param_2)

{
  int *piVar1;
  byte bVar2;
  double dVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_BodyInstanceUpdateBodyScale> FVar11;
  FChaosScene *this_00;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  LARGE_INTEGER LVar12;
  uint uVar13;
  uint uVar14;
  char local_res8 [8];
  LARGE_INTEGER local_res20;
  FStatMessage local_98;
  undefined4 local_88 [2];
  LARGE_INTEGER local_80;
  FBodyInstance *local_70;
  undefined4 *local_68;
  TVector<double> *local_60;
  double *local_58;
  char *local_50;
  double local_48;
  double dStack_40;
  double local_38;
  
  if (this->ActorHandle == (FSingleParticlePhysicsProxy *)0x0) {
    return false;
  }
  dVar3 = (this->Scale3D).field0_0x0._s_0.X - (param_1->field0_0x0)._s_0.X;
  uVar13 = SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar14 = (uint)((ulonglong)dVar3 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (((((double)CONCAT44(uVar14,uVar13) < __real_3f1a36e2e0000000 ||
         (double)CONCAT44(uVar14,uVar13) == __real_3f1a36e2e0000000) &&
       (dVar3 = (this->Scale3D).field0_0x0._s_0.Y - (param_1->field0_0x0)._s_0.Y,
       uVar13 = SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar14 = (uint)((ulonglong)dVar3 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       (double)CONCAT44(uVar14,uVar13) < __real_3f1a36e2e0000000 ||
       (double)CONCAT44(uVar14,uVar13) == __real_3f1a36e2e0000000)) &&
      (dVar3 = (this->Scale3D).field0_0x0._s_0.Z - (param_1->field0_0x0)._s_0.Z,
      uVar13 = SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar14 = (uint)((ulonglong)dVar3 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      (double)CONCAT44(uVar14,uVar13) < __real_3f1a36e2e0000000 ||
      (double)CONCAT44(uVar14,uVar13) == __real_3f1a36e2e0000000)) && (!param_2)) {
    return false;
  }
  FVar11 = StatPtr_STAT_BodyInstanceUpdateBodyScale;
  if (StatPtr_STAT_BodyInstanceUpdateBodyScale ==
      (FThreadSafeStaticStat<FStat_STAT_BodyInstanceUpdateBodyScale>)0x0) {
    pFVar10 = ::FName::FName((FName *)&local_98,"STAT_BodyInstanceUpdateBodyScale");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_BodyInstanceUpdateBodyScale>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BodyInstanceUpdateBodyScale,
                        *pFVar10,L"UpdateBodyScale","STATGROUP_Physics","STATCAT_Advanced",
                        L"Physics",true,true,ST_int64,true,false,MCR_Invalid);
  }
  LVar12 = *(LARGE_INTEGER *)FVar11;
  bVar4 = false;
  bVar6 = false;
  local_80.s.LowPart = 0;
  local_80.s.HighPart = 0;
  if ((LVar12.s.LowPart != 0) || (LVar12.s.HighPart != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20.QuadPart = local_res20.QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20.s,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20 = LVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res20.s,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                   ,0x892);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20 = LVar12;
      FThreadStats::AddMessage((FName)LVar12.s,CycleScopeStart);
      bVar5 = true;
      goto LAB_148223967;
    }
  }
  bVar5 = false;
  LVar12 = local_80;
LAB_148223967:
  local_res8[0] = '\0';
  iVar9 = _finite((this->Scale3D).field0_0x0._s_0.X);
  if (((iVar9 == 0) || (iVar9 = _finite((this->Scale3D).field0_0x0._s_0.Y), iVar9 == 0)) ||
     ((iVar9 = _finite((this->Scale3D).field0_0x0._s_0.Z), iVar9 == 0 ||
      (bVar8 = UE::Math::TVector<double>::ContainsNaN(param_1), bVar8)))) {
    local_98.StatData.Pad = (uchar  [8])this;
    local_98.NameAndInfo = (FStatNameAndInfo)param_1;
    `FBodyInstance::UpdateBodyScale'::__l2::<lambda_1>::operator()(&local_98);
  }
  local_68 = local_88;
  local_88[0] = 0;
  local_58 = &local_48;
  local_50 = local_res8;
  local_98.NameAndInfo = (FStatNameAndInfo)&local_70;
  local_98.StatData.Pad =
       (uchar  [8])
       UE::Core::Private::Function::
       TFunctionRefCaller<`FBodyInstance::UpdateBodyScale'::__l2::<lambda_2>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
       ::Call;
  local_res20 = (LARGE_INTEGER)this->ActorHandle;
  local_70 = this;
  local_60 = param_1;
  FPhysInterface_Chaos::ExecuteWrite
            ((FSingleParticlePhysicsProxy **)&local_res20,
             (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_98);
  if (local_res8[0] != '\0') {
    local_res20 = (LARGE_INTEGER)this->ActorHandle;
    (this->Scale3D).field0_0x0._s_0.X = local_48;
    (this->Scale3D).field0_0x0._s_0.Y = dStack_40;
    (this->Scale3D).field0_0x0._s_0.Z = local_38;
    this_00 = FChaosEngineInterface::GetCurrentScene((FSingleParticlePhysicsProxy **)&local_res20);
    if (this_00 != (FChaosScene *)0x0) {
      local_98.StatData.Pad = (uchar  [8])this->ActorHandle;
      FChaosScene::UpdateActorInAccelerationStructure
                (this_00,(FSingleParticlePhysicsProxy **)&local_98);
    }
    bVar2 = *(byte *)((longlong)&this->_padding_ + 1);
    if ((bVar2 & 1) != 0) {
      *(byte *)((longlong)&this->_padding_ + 1) = bVar2 | 2;
      bVar8 = FBodyInstanceCore::ShouldInstanceSimulatingPhysics((FBodyInstanceCore *)this);
      if (bVar8) {
        UpdateMassProperties(this);
      }
    }
  }
  cVar7 = local_res8[0];
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && ((FName)LVar12.QuadPart != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_98.NameAndInfo =
           (FStatNameAndInfo)(LVar12.QuadPart & 0xffff6fffffffffffU | 0x600000000000);
      QueryPerformanceCounter(&local_res20);
      local_98.StatData.Pad = (uchar  [8])(local_res20.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_01,&local_98);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
        return (bool)cVar7;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return (bool)cVar7;
}

// UpdateDampingProperties @ 148224d50

void __thiscall FBodyInstance::UpdateDampingProperties(FBodyInstance *this)

{
  FBodyInstance *local_res8;
  FSingleParticlePhysicsProxy *local_res10 [3];
  code *local_18;
  FBodyInstance **local_10;
  
  local_10 = &local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FBodyInstance::UpdateDampingProperties'::__l2::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
             ::Call;
  local_res10[0] = this->ActorHandle;
  local_res8 = this;
  FPhysInterface_Chaos::ExecuteWrite
            (local_res10,
             (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_18);
  return;
}

// UpdateDebugRendering @ 148224da0

void __thiscall FBodyInstance::UpdateDebugRendering(FBodyInstance *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->OwnerComponent).WeakPtr);
  if (pUVar1 != (UObject *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148224dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar1 + 0x898))(pUVar1,0,*(code **)(*(longlong *)pUVar1 + 0x898));
    return;
  }
  return;
}

// UpdateInstanceSimulatePhysics @ 148224de0

void __thiscall FBodyInstance::UpdateInstanceSimulatePhysics(FBodyInstance *this)

{
  bool bVar1;
  float fVar2;
  byte local_res8 [8];
  char local_res10 [8];
  FSingleParticlePhysicsProxy *local_res18;
  code *local_38;
  undefined1 **local_30;
  char *local_28;
  byte *local_20;
  FBodyInstance *local_18;
  
  bVar1 = FBodyInstanceCore::ShouldInstanceSimulatingPhysics((FBodyInstanceCore *)this);
  if ((bVar1) && (this->ActorHandle != (FSingleParticlePhysicsProxy *)0x0)) {
    local_res8[0] = 1;
  }
  else {
    local_res8[0] = 0;
  }
  local_28 = local_res10;
  local_res10[0] = '\0';
  local_20 = local_res8;
  local_30 = &local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`FBodyInstance::UpdateInstanceSimulatePhysics'::__l2::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
             ::Call;
  local_res18 = this->ActorHandle;
  local_18 = this;
  FPhysInterface_Chaos::ExecuteWrite
            (&local_res18,
             (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_38);
  if (local_res10[0] != '\0') {
    fVar2 = __real_3f800000;
    if (local_res8[0] == 0) {
      fVar2 = 0.0;
    }
    this->PhysicsBlendWeight = fVar2;
    *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
    *(byte *)&this->_padding_ = (byte)this->_padding_ | local_res8[0] & 1;
  }
  return;
}

// UpdateInterpolateWhenSubStepping @ 148224ea0

void __thiscall FBodyInstance::UpdateInterpolateWhenSubStepping(FBodyInstance *this)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  UPhysicsSettings *pUVar4;
  UObject *pUVar5;
  FBodyInstance *pFVar6;
  UClass *pUVar7;
  byte bVar8;
  
  pUVar4 = UPhysicsSettings::Get();
  if (pUVar4->bSubstepping == false) {
    return;
  }
  bVar2 = FWeakObjectPtr::IsValid(&(this->OwnerComponent).WeakPtr);
  if (bVar2) {
    pUVar5 = FWeakObjectPtr::Get(&(this->OwnerComponent).WeakPtr);
    pFVar6 = (FBodyInstance *)(**(code **)(*(longlong *)pUVar5 + 0x818))(pUVar5,0,1,0xffffffff);
    if (pFVar6 != this) {
      pUVar5 = FWeakObjectPtr::Get(&(this->OwnerComponent).WeakPtr);
      uVar3 = (**(code **)(*(longlong *)pUVar5 + 0x5e0))(pUVar5);
      goto LAB_148224f7f;
    }
  }
  pUVar5 = FWeakObjectPtr::Get(&(this->OwnerComponent).WeakPtr);
  if (pUVar5 != (UObject *)0x0) {
    if ((*(longlong *)&pUVar5[4].field_0x8 != 0) &&
       ((*(byte *)(*(longlong *)&pUVar5[4].field_0x8 + 0x5d) & 1) == 0)) {
      uVar3 = 0;
      goto LAB_148224f7f;
    }
    pUVar7 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar7->_padding_)) {
      uVar3 = (uint)(byte)pUVar5[0x17].field_0xf;
      goto LAB_148224f7f;
    }
  }
  uVar3 = (uint)(this->CollisionEnabled).Value;
LAB_148224f7f:
  bVar8 = 0x80;
  if (1 < uVar3 - 2) {
    bVar8 = 0;
  }
  this->bInterpolateWhenSubStepping = '\0';
  this->field_0x3d = this->field_0x3d | bVar8;
  if (this->WeldParent != (FBodyInstance *)0x0) {
    UpdateInterpolateWhenSubStepping(this->WeldParent);
    bVar8 = this->field_0x3d | this->WeldParent->field_0x3d;
    this->field_0x3d = (bVar8 ^ this->field_0x3d) & 0x7f ^ bVar8;
  }
  return;
}

// UpdateMassProperties @ 148224fe0

void __thiscall FBodyInstance::UpdateMassProperties(FBodyInstance *this)

{
  byte *pbVar1;
  FBodyInstanceDelegatesPtr FVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FSingleParticlePhysicsProxy *local_res8;
  FBodyInstance *local_res10;
  FSingleParticlePhysicsProxy *local_res18;
  code *local_58;
  FBodyInstance **local_50;
  FDestructionSentinel local_48;
  
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 & 0xfd;
  GetSimplePhysicalMaterial(this);
  if ((this->ActorHandle != (FSingleParticlePhysicsProxy *)0x0) &&
     (local_res8 = this->ActorHandle, bVar5 = FChaosEngineInterface::IsRigidBody(&local_res8), bVar5
     )) {
    local_50 = &local_res10;
    local_58 = UE::Core::Private::Function::
               TFunctionRefCaller<`FBodyInstance::UpdateMassProperties'::__l5::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
               ::Call;
    local_res18 = this->ActorHandle;
    local_res10 = this;
    FPhysInterface_Chaos::ExecuteWrite
              (&local_res18,
               (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_58
              );
  }
  FVar2 = this->BodyInstanceDelegates;
  if (FVar2 != (FBodyInstanceDelegatesPtr)0x0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)FVar2 + 0x18),
               (FWriteAccessScope *)&local_48);
    *(int *)((longlong)FVar2 + 0x34) = *(int *)((longlong)FVar2 + 0x34) + 1;
    bVar5 = false;
    uVar9 = *(int *)((longlong)FVar2 + 0x28) - 1;
    if (-1 < (int)uVar9) {
      lVar10 = (longlong)(int)uVar9 << 4;
      bVar5 = false;
      do {
        uVar8 = 0;
        if ((int)uVar9 < *(int *)((longlong)FVar2 + 0x28)) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (((*(int *)(lVar10 + 8 + *(longlong *)((longlong)FVar2 + 0x20)) == 0) ||
            (plVar3 = *(longlong **)(lVar10 + *(longlong *)((longlong)FVar2 + 0x20)),
            plVar3 == (longlong *)0x0)) || (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0'))
        {
          bVar5 = true;
        }
        lVar10 = lVar10 + -0x10;
        uVar9 = uVar9 - 1;
      } while (-1 < (int)uVar9);
    }
    *(int *)((longlong)FVar2 + 0x34) = *(int *)((longlong)FVar2 + 0x34) + -1;
    if (bVar5) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)FVar2 + 0x18),
                 false);
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
  }
  return;
}

// UpdateMaxDepenetrationVelocity @ 148225180

void __thiscall FBodyInstance::UpdateMaxDepenetrationVelocity(FBodyInstance *this)

{
  FSingleParticlePhysicsProxy *local_res8 [4];
  FBodyInstance *local_28;
  float local_20;
  code *local_18;
  FBodyInstance **local_10;
  
  local_20 = __real_bf800000;
  if (this->bOverrideMaxDepenetrationVelocity != '\0') {
    local_20 = this->MaxDepenetrationVelocity;
  }
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FBodyInstance::UpdateMaxDepenetrationVelocity'::__l2::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
             ::Call;
  local_res8[0] = this->ActorHandle;
  local_28 = this;
  FPhysInterface_Chaos::ExecuteWrite
            (local_res8,
             (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_18);
  return;
}

// UpdateOneWayInteraction @ 148225270

void __thiscall FBodyInstance::UpdateOneWayInteraction(FBodyInstance *this)

{
  byte local_res8 [8];
  FSingleParticlePhysicsProxy *local_res10 [3];
  code *local_18;
  byte *local_10;
  
  local_res8[0] = this->bOneWayInteraction;
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FBodyInstance::UpdateOneWayInteraction'::__l2::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
             ::Call;
  local_res10[0] = this->ActorHandle;
  FPhysInterface_Chaos::ExecuteWrite
            (local_res10,
             (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_18);
  return;
}

// UpdatePhysicalMaterials @ 1482252c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FBodyInstance::UpdatePhysicalMaterials(FBodyInstance *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_UpdatePhysMats> FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  FNameEntryId FVar8;
  FName FVar9;
  FBodyInstance *pFVar10;
  LARGE_INTEGER local_res8;
  FName local_res10;
  uint local_res18;
  uint uStackX_1c;
  UPhysicalMaterial *local_res20;
  FStatMessage local_a8;
  FName local_98;
  TArray<UPhysicalMaterial_*,TSizedDefaultAllocator<32>_> local_88;
  TArray<FPhysicalMaterialMaskParams,TSizedDefaultAllocator<32>_> local_78;
  code *local_68;
  FBodyInstance **local_60;
  FBodyInstance *local_58;
  UPhysicalMaterial **local_50;
  TArray<UPhysicalMaterial_*,TSizedDefaultAllocator<32>_> *local_48;
  TArray<FPhysicalMaterialMaskParams,TSizedDefaultAllocator<32>_> *local_40;
  
  FVar6 = StatPtr_STAT_UpdatePhysMats;
  if (StatPtr_STAT_UpdatePhysMats == (FThreadSafeStaticStat<FStat_STAT_UpdatePhysMats>)0x0) {
    pFVar5 = ::FName::FName((FName *)&local_a8,"STAT_UpdatePhysMats");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_UpdatePhysMats>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdatePhysMats,*pFVar5,
                       L"Update Materials","STATGROUP_Physics","STATCAT_Advanced",L"Physics",true,
                       true,ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  local_98.ComparisonIndex.Value = 0;
  local_98.Number = 0;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar7 = FVar9.Number;
  if ((FVar8.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.QuadPart = local_res8.QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar8.Value;
        local_res10.Number = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                   ,0x229);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18 = FVar8.Value;
      uStackX_1c = uVar7;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar3 = true;
      goto LAB_1482253f3;
    }
  }
  bVar3 = false;
  FVar9 = local_98;
LAB_1482253f3:
  local_res20 = GetSimplePhysicalMaterial(this);
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  GetComplexPhysicalMaterials
            (this,(TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>)(this->OwnerComponent).WeakPtr
             ,&local_88,&local_78,this->BodyInstanceOwner);
  local_50 = &local_res20;
  local_48 = &local_88;
  local_40 = &local_78;
  local_60 = &local_58;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`FBodyInstance::UpdatePhysicalMaterials'::__l2::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
             ::Call;
  pFVar10 = this;
  if (this->WeldParent != (FBodyInstance *)0x0) {
    pFVar10 = this->WeldParent;
  }
  local_res8 = (LARGE_INTEGER)pFVar10->ActorHandle;
  local_58 = this;
  FPhysInterface_Chaos::ExecuteWrite
            ((FSingleParticlePhysicsProxy **)&local_res8,
             (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_68);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_a8.NameAndInfo.Index = FVar9.ComparisonIndex.Value;
      local_a8.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res8);
      local_a8.StatData.Pad = (uchar  [8])(local_res8.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_00,&local_a8);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// UpdatePhysicsFilterData @ 148225590

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FBodyInstance::UpdatePhysicsFilterData(FBodyInstance *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_UpdatePhysFilter> FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FBodyInstance *pFVar8;
  FName FVar9;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FStatMessage local_38;
  
  FVar7 = StatPtr_STAT_UpdatePhysFilter;
  if (StatPtr_STAT_UpdatePhysFilter == (FThreadSafeStaticStat<FStat_STAT_UpdatePhysFilter>)0x0) {
    pFVar6 = ::FName::FName(&local_res20,"STAT_UpdatePhysFilter");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_UpdatePhysFilter>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdatePhysFilter,*pFVar6,
                       L"Filter Update","STATGROUP_Physics","STATCAT_Advanced",L"Physics",true,true,
                       ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)FVar7;
  bVar2 = false;
  bVar4 = false;
  if ((FVar9.ComparisonIndex.Value.Value != 0) || (FVar9.Number != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_res8.QuadPart = local_res8.QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar9.ComparisonIndex.Value.Value;
        local_res10.Number = FVar9.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                   ,0x3ed);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18 = FVar9;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar3 = true;
      goto LAB_1482256e7;
    }
  }
  bVar3 = false;
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
LAB_1482256e7:
  if (this->WeldParent == (FBodyInstance *)0x0) {
    if (this->ActorHandle != (FSingleParticlePhysicsProxy *)0x0) {
      bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
      if (bVar5) {
        local_38.NameAndInfo = (FStatNameAndInfo)&local_res18;
        local_38.StatData.Pad =
             (uchar  [8])
             UE::Core::Private::Function::
             TFunctionRefCaller<`FBodyInstance::UpdatePhysicsFilterData'::__l2::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
             ::Call;
        pFVar8 = this;
        if (this->WeldParent != (FBodyInstance *)0x0) {
          pFVar8 = this->WeldParent;
        }
        local_res8 = (LARGE_INTEGER)pFVar8->ActorHandle;
        local_res18 = (FName)this;
        FPhysInterface_Chaos::ExecuteWrite
                  ((FSingleParticlePhysicsProxy **)&local_res8,
                   (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)
                   &local_38);
        UpdateInterpolateWhenSubStepping(this);
      }
    }
  }
  else {
    UpdatePhysicsFilterData(this->WeldParent);
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo =
           (FStatNameAndInfo)((ulonglong)FVar9 & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res8);
      local_38.StatData.Pad = (uchar  [8])(local_res8.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_00,&local_38);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// UpdateSolverAsyncDeltaTime @ 148225f90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FBodyInstance::UpdateSolverAsyncDeltaTime(FBodyInstance *this)

{
  float fVar1;
  double dVar2;
  FPhysicsSolverBase *this_00;
  float fVar3;
  
  if (this->bOverrideSolverAsyncDeltaTime != '\0') {
    if (bEnableOverrideSolverDeltaTime) {
      fVar1 = this->SolverAsyncDeltaTime;
      if (0.0 <= fVar1) {
        this_00 = (FPhysicsSolverBase *)this->ActorHandle->_padding_;
        if ((Chaos::ForceDisableAsyncPhysics == 0) && (dVar2 = this_00->AsyncDt, 0.0 <= dVar2)) {
          fVar3 = (float)dVar2;
          if (fVar1 <= fVar3) {
            fVar3 = fVar1;
          }
          Chaos::FPhysicsSolverBase::EnableAsyncMode(this_00,(double)fVar3);
          return;
        }
        if (2 < (byte)LogPhysics._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysics);
          return;
        }
      }
      else if (1 < (byte)LogPhysics._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPhysics);
        return;
      }
    }
    else if (2 < (byte)LogPhysics._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysics);
      return;
    }
  }
  return;
}

// UpdateTriMeshVertices @ 148226d50

void __thiscall
FBodyInstance::UpdateTriMeshVertices
          (FBodyInstance *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  bool bVar1;
  FSingleParticlePhysicsProxy *local_res8;
  FBodyInstance *local_28;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_20;
  code *local_18;
  FBodyInstance **local_10;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
  if (bVar1) {
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`FBodyInstance::UpdateTriMeshVertices'::__l5::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
               ::Call;
    local_res8 = this->ActorHandle;
    local_28 = this;
    local_20 = param_1;
    FPhysInterface_Chaos::ExecuteWrite
              (&local_res8,
               (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_18
              );
  }
  return;
}

// UseExternalCollisionProfile @ 148226dc0

void __thiscall FBodyInstance::UseExternalCollisionProfile(FBodyInstance *this,UBodySetup *param_1)

{
  code *pcVar1;
  bool bVar2;
  UBodySetup *local_res8;
  
  if (param_1 == (UBodySetup *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8608185054796972869>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                       ,0x345,"InExternalCollisionProfileBodySetup");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UBodySetup *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=
            (&(this->ExternalCollisionProfileBodySetup).WeakPtr,(FObjectPtr)&local_res8);
  this->bPendingCollisionProfileSetup = '\0';
  LoadProfileData(this,false);
  return;
}

// ValidateTransform @ 1482271a0

bool __cdecl
FBodyInstance::ValidateTransform(TTransform<double> *param_1,FString *param_2,UBodySetup *param_3)

{
  bool bVar1;
  
  bVar1 = ValidateTransformScale(param_1,param_2);
  if (bVar1) {
    bVar1 = ValidateTransformMirror
                      (param_1,param_2,param_3->bGenerateMirroredCollision,
                       param_3->bGenerateNonMirroredCollision);
    if (bVar1) {
      bVar1 = ValidateTransformNaN(param_1,param_2,(FName *)&param_3->_padding_);
      if (bVar1) {
        return true;
      }
    }
  }
  return false;
}

// WakeInstance @ 1482274f0

void __thiscall FBodyInstance::WakeInstance(FBodyInstance *this)

{
  undefined1 local_res8 [8];
  FSingleParticlePhysicsProxy *local_res10 [3];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res8;
  local_res8[0] = 0;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FBodyInstance::WakeInstance'::__l2::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
             ::Call;
  local_res10[0] = this->ActorHandle;
  FPhysInterface_Chaos::ExecuteWrite
            (local_res10,
             (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_18);
  return;
}

// Weld @ 148227540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FBodyInstance::Weld(FBodyInstance *this,FBodyInstance *param_1,TTransform<double> *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UObject *pUVar4;
  undefined1 auStack_1a8 [32];
  undefined1 local_188 [8];
  undefined1 local_180 [8];
  FBodyInstance *local_178;
  void *local_170;
  undefined8 local_168;
  FSingleParticlePhysicsProxy *local_160;
  FSingleParticlePhysicsProxy *local_158;
  code *local_150;
  TTransform<double> **local_148;
  code *local_140;
  FBodyInstance ***local_138;
  TTransform<double> *local_130;
  FBodyInstance *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  FBodyInstance **local_110;
  FBodyInstance *local_108;
  TTransform<double> *local_100;
  void **local_f8;
  TTransform<double> *local_f0;
  TTransform<double> local_e8;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  local_178 = param_1;
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                       ,0x77c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (local_178 == (FBodyInstance *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TheirBody",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                       ,0x77d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_178);
  if ((bVar2) && (local_178->WeldParent != this)) {
    local_e8.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_170 = (void *)0x0;
    local_168 = 0;
    local_180[0] = 0;
    local_188[0] = 0;
    local_130 = &local_e8;
    local_120 = local_188;
    local_118 = local_180;
    local_148 = &local_130;
    local_e8.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_150 = UE::Core::Private::Function::
                TFunctionRefCaller<`FBodyInstance::GetUnrealWorldTransform'::__l2::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
                ::Call;
    local_160 = this->ActorHandle;
    local_e8.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_e8.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_e8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_e8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    local_128 = this;
    FPhysInterface_Chaos::ExecuteRead
              (&local_160,
               (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)
               &local_150);
    local_e8.Scale3D.XY.m128d_f64 = *(double (*) [2])&(this->Scale3D).field0_0x0;
    local_e8.Scale3D.ZW.m128d_f64[1] = 0.0;
    local_e8.Scale3D.ZW.m128d_f64[0] = (this->Scale3D).field0_0x0._s_0.Z;
    UE::Math::TTransform<double>::GetRelativeTransform(param_2,&local_88,&local_e8);
    local_110 = &local_178;
    local_100 = &local_88;
    local_f8 = &local_170;
    local_138 = &local_110;
    local_140 = UE::Core::Private::Function::
                TFunctionRefCaller<`FBodyInstance::Weld'::__l2::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
                ::Call;
    local_158 = this->ActorHandle;
    local_108 = this;
    local_f0 = param_2;
    FPhysInterface_Chaos::ExecuteWrite
              (&local_158,
               (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)
               &local_140);
    UpdateInterpolateWhenSubStepping(this);
    pUVar4 = FWeakObjectPtr::Get(&(local_178->OwnerComponent).WeakPtr);
    if (pUVar4 != (UObject *)0x0) {
      (**(code **)(*(longlong *)pUVar4 + 0x898))(pUVar4,0);
    }
    pUVar4 = FWeakObjectPtr::Get(&(this->OwnerComponent).WeakPtr);
    if (pUVar4 != (UObject *)0x0) {
      (**(code **)(*(longlong *)pUVar4 + 0x898))(pUVar4,0);
    }
    if (local_170 != (void *)0x0) {
      FMemory::Free(local_170);
    }
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

// operator() @ 150527c80

bool __thiscall `FBodyInstance::UpdateBodyScale'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8608185054796974231>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8608185054796974231>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 150527da0

bool __thiscall `FBodyInstance::TermBody'::__l5::<lambda_1>::operator()(void *this)

{
  TStringBuilderBase<wchar_t> *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UObject *pUVar4;
  bool bVar5;
  FName local_res10;
  FString local_28;
  
  bVar5 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8608185054796973899>);
  if (bVar2) {
    this_00 = *(TStringBuilderBase<wchar_t> **)((longlong)this + 8);
    if (this_00->End < this_00->CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(this_00,1);
    }
    *this_00->CurPos = L'\0';
    if ((*(longlong *)(*(longlong *)this + 0x180) == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)this + 0x150));
    local_res10.ComparisonIndex.Value = *(uint *)&pUVar4->field_0x18;
    local_res10.Number = *(uint *)&pUVar4->field_0x1c;
    ::FName::ToString(&local_res10,&local_28);
    bVar5 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8608185054796973899>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150527eb1;
    }
  }
  bVar2 = false;
LAB_150527eb1:
  if ((bVar5) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150527f30

bool __thiscall `FBodyInstance::SetBodyTransform'::__l24::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  UObject *pUVar5;
  bool bVar6;
  FString local_28;
  FString local_18;
  
  bVar2 = false;
  bVar6 = false;
  bVar3 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8608185054796974787>);
  if (bVar3) {
    UE::Math::TTransform<double>::ToString(*(TTransform<double> **)((longlong)this + 8),&local_18);
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)this + 0x150));
    bVar6 = pUVar5 != (UObject *)0x0;
    if (bVar6) {
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)this + 0x150));
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar5,&local_28,(UObject *)0x0);
    }
    bVar2 = true;
    bVar3 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8608185054796974787>,&::ENSURE_Static);
    if (bVar3) {
      bVar3 = true;
      goto LAB_150528001;
    }
  }
  bVar3 = false;
LAB_150528001:
  if ((bVar6) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (!bVar3) {
    return false;
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

