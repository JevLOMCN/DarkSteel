// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// ~FCharacterMovementComponentAsyncOutput @ 1476e8dd0

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
FCharacterMovementComponentAsyncOutput::~FCharacterMovementComponentAsyncOutput
          (FCharacterMovementComponentAsyncOutput *this)

{
  FCharacterAsyncOutput *pFVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined ***)this = &___7FCharacterMovementComponentAsyncOutput__6B_;
  pFVar1 = (this->CharacterOutput).Ptr;
  if (pFVar1 != (FCharacterAsyncOutput *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  pFVar2 = (this->UpdatedComponentOutput).SpeculativeOverlaps.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

// Copy @ 1476fa190

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
FCharacterMovementComponentAsyncOutput::Copy
          (FCharacterMovementComponentAsyncOutput *this,
          FCharacterMovementComponentAsyncOutput *param_1)

{
  int *piVar1;
  FUpdatedComponentAsyncOutput *pFVar2;
  int iVar3;
  int iVar4;
  FOverlapInfo *pFVar5;
  FCharacterAsyncOutput *pFVar6;
  FCharacterAsyncOutput *pFVar7;
  double dVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  FFindFloorResult *pFVar12;
  FFindFloorResult *pFVar13;
  FFindFloorResult *pFVar14;
  FFindFloorResult *pFVar15;
  longlong lVar16;
  
  this->bIsValid = param_1->bIsValid;
  this->bWasSimulatingRootMotion = param_1->bWasSimulatingRootMotion;
  this->MovementMode = param_1->MovementMode;
  this->GroundMovementMode = param_1->GroundMovementMode;
  this->CustomMovementMode = param_1->CustomMovementMode;
  dVar8 = (param_1->Acceleration).field0_0x0._s_0.Y;
  (this->Acceleration).field0_0x0._s_0.X = (param_1->Acceleration).field0_0x0._s_0.X;
  (this->Acceleration).field0_0x0._s_0.Y = dVar8;
  (this->Acceleration).field0_0x0._s_0.Z = (param_1->Acceleration).field0_0x0._s_0.Z;
  this->AnalogInputModifier = param_1->AnalogInputModifier;
  dVar8 = (param_1->LastUpdateLocation).field0_0x0._s_0.Y;
  (this->LastUpdateLocation).field0_0x0._s_0.X = (param_1->LastUpdateLocation).field0_0x0._s_0.X;
  (this->LastUpdateLocation).field0_0x0._s_0.Y = dVar8;
  (this->LastUpdateLocation).field0_0x0._s_0.Z = (param_1->LastUpdateLocation).field0_0x0._s_0.Z;
  dVar8 = (param_1->LastUpdateRotation).Y;
  (this->LastUpdateRotation).X = (param_1->LastUpdateRotation).X;
  (this->LastUpdateRotation).Y = dVar8;
  dVar8 = (param_1->LastUpdateRotation).W;
  (this->LastUpdateRotation).Z = (param_1->LastUpdateRotation).Z;
  (this->LastUpdateRotation).W = dVar8;
  dVar8 = (param_1->LastUpdateVelocity).field0_0x0._s_0.Y;
  (this->LastUpdateVelocity).field0_0x0._s_0.X = (param_1->LastUpdateVelocity).field0_0x0._s_0.X;
  (this->LastUpdateVelocity).field0_0x0._s_0.Y = dVar8;
  (this->LastUpdateVelocity).field0_0x0._s_0.Z = (param_1->LastUpdateVelocity).field0_0x0._s_0.Z;
  this->bForceNextFloorCheck = param_1->bForceNextFloorCheck;
  dVar8 = (param_1->Velocity).field0_0x0._s_0.Y;
  (this->Velocity).field0_0x0._s_0.X = (param_1->Velocity).field0_0x0._s_0.X;
  (this->Velocity).field0_0x0._s_0.Y = dVar8;
  (this->Velocity).field0_0x0._s_0.Z = (param_1->Velocity).field0_0x0._s_0.Z;
  dVar8 = (param_1->LastPreAdditiveVelocity).field0_0x0._s_0.Y;
  (this->LastPreAdditiveVelocity).field0_0x0._s_0.X =
       (param_1->LastPreAdditiveVelocity).field0_0x0._s_0.X;
  (this->LastPreAdditiveVelocity).field0_0x0._s_0.Y = dVar8;
  (this->LastPreAdditiveVelocity).field0_0x0._s_0.Z =
       (param_1->LastPreAdditiveVelocity).field0_0x0._s_0.Z;
  this->bIsAdditiveVelocityApplied = param_1->bIsAdditiveVelocityApplied;
  this->bDeferUpdateBasedMovement = param_1->bDeferUpdateBasedMovement;
  this->MoveComponentFlags = param_1->MoveComponentFlags;
  dVar8 = (param_1->PendingForceToApply).field0_0x0._s_0.Y;
  (this->PendingForceToApply).field0_0x0._s_0.X = (param_1->PendingForceToApply).field0_0x0._s_0.X;
  (this->PendingForceToApply).field0_0x0._s_0.Y = dVar8;
  (this->PendingForceToApply).field0_0x0._s_0.Z = (param_1->PendingForceToApply).field0_0x0._s_0.Z;
  dVar8 = (param_1->PendingImpulseToApply).field0_0x0._s_0.Y;
  (this->PendingImpulseToApply).field0_0x0._s_0.X =
       (param_1->PendingImpulseToApply).field0_0x0._s_0.X;
  (this->PendingImpulseToApply).field0_0x0._s_0.Y = dVar8;
  (this->PendingImpulseToApply).field0_0x0._s_0.Z =
       (param_1->PendingImpulseToApply).field0_0x0._s_0.Z;
  dVar8 = (param_1->PendingLaunchVelocity).field0_0x0._s_0.Y;
  (this->PendingLaunchVelocity).field0_0x0._s_0.X =
       (param_1->PendingLaunchVelocity).field0_0x0._s_0.X;
  (this->PendingLaunchVelocity).field0_0x0._s_0.Y = dVar8;
  (this->PendingLaunchVelocity).field0_0x0._s_0.Z =
       (param_1->PendingLaunchVelocity).field0_0x0._s_0.Z;
  this->bCrouchMaintainsBaseLocation = param_1->bCrouchMaintainsBaseLocation;
  this->bJustTeleported = param_1->bJustTeleported;
  this->ScaledCapsuleRadius = param_1->ScaledCapsuleRadius;
  this->ScaledCapsuleHalfHeight = param_1->ScaledCapsuleHalfHeight;
  this->bIsCrouched = param_1->bIsCrouched;
  this->bWantsToCrouch = param_1->bWantsToCrouch;
  this->bMovementInProgress = param_1->bMovementInProgress;
  lVar16 = 2;
  pFVar12 = &this->CurrentFloor;
  pFVar13 = &param_1->CurrentFloor;
  do {
    pFVar15 = pFVar13;
    pFVar14 = pFVar12;
    pFVar12 = (FFindFloorResult *)&(pFVar14->HitResult).TraceStart;
    fVar10 = pFVar15->FloorDist;
    fVar11 = pFVar15->LineDist;
    iVar3 = pFVar15->_padding_;
    pFVar13 = (FFindFloorResult *)&(pFVar15->HitResult).TraceStart;
    *(undefined4 *)&pFVar14->field_0x0 = *(undefined4 *)&pFVar15->field_0x0;
    pFVar14->FloorDist = fVar10;
    pFVar14->LineDist = fVar11;
    pFVar14->_padding_ = iVar3;
    fVar10 = (pFVar15->HitResult).Time;
    fVar11 = (pFVar15->HitResult).Distance;
    iVar3 = (pFVar15->HitResult)._padding_;
    (pFVar14->HitResult).FaceIndex = (pFVar15->HitResult).FaceIndex;
    (pFVar14->HitResult).Time = fVar10;
    (pFVar14->HitResult).Distance = fVar11;
    (pFVar14->HitResult)._padding_ = iVar3;
    uVar9 = *(undefined8 *)&(pFVar15->HitResult).Location.field_0x8;
    *(undefined8 *)&(pFVar14->HitResult).Location = *(undefined8 *)&(pFVar15->HitResult).Location;
    *(undefined8 *)&(pFVar14->HitResult).Location.field_0x8 = uVar9;
    uVar9 = *(undefined8 *)&(pFVar15->HitResult).ImpactPoint;
    *(undefined8 *)&(pFVar14->HitResult).Location.field_0x10 =
         *(undefined8 *)&(pFVar15->HitResult).Location.field_0x10;
    *(undefined8 *)&(pFVar14->HitResult).ImpactPoint = uVar9;
    uVar9 = *(undefined8 *)&(pFVar15->HitResult).ImpactPoint.field_0x10;
    *(undefined8 *)&(pFVar14->HitResult).ImpactPoint.field_0x8 =
         *(undefined8 *)&(pFVar15->HitResult).ImpactPoint.field_0x8;
    *(undefined8 *)&(pFVar14->HitResult).ImpactPoint.field_0x10 = uVar9;
    uVar9 = *(undefined8 *)&(pFVar15->HitResult).Normal.field_0x8;
    *(undefined8 *)&(pFVar14->HitResult).Normal = *(undefined8 *)&(pFVar15->HitResult).Normal;
    *(undefined8 *)&(pFVar14->HitResult).Normal.field_0x8 = uVar9;
    uVar9 = *(undefined8 *)&(pFVar15->HitResult).ImpactNormal;
    *(undefined8 *)&(pFVar14->HitResult).Normal.field_0x10 =
         *(undefined8 *)&(pFVar15->HitResult).Normal.field_0x10;
    *(undefined8 *)&(pFVar14->HitResult).ImpactNormal = uVar9;
    uVar9 = *(undefined8 *)&(pFVar15->HitResult).ImpactNormal.field_0x10;
    *(undefined8 *)&(pFVar14->HitResult).ImpactNormal.field_0x8 =
         *(undefined8 *)&(pFVar15->HitResult).ImpactNormal.field_0x8;
    *(undefined8 *)&(pFVar14->HitResult).ImpactNormal.field_0x10 = uVar9;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  uVar9 = *(undefined8 *)&(pFVar15->HitResult).TraceStart.field_0x8;
  pFVar2 = &this->UpdatedComponentOutput;
  *(undefined8 *)pFVar12 = *(undefined8 *)pFVar13;
  *(undefined8 *)&(pFVar14->HitResult).TraceStart.field_0x8 = uVar9;
  this->bHasRequestedVelocity = param_1->bHasRequestedVelocity;
  this->bRequestedMoveWithMaxSpeed = param_1->bRequestedMoveWithMaxSpeed;
  dVar8 = (param_1->RequestedVelocity).field0_0x0._s_0.Y;
  (this->RequestedVelocity).field0_0x0._s_0.X = (param_1->RequestedVelocity).field0_0x0._s_0.X;
  (this->RequestedVelocity).field0_0x0._s_0.Y = dVar8;
  (this->RequestedVelocity).field0_0x0._s_0.Z = (param_1->RequestedVelocity).field0_0x0._s_0.Z;
  dVar8 = (param_1->LastUpdateRequestedVelocity).field0_0x0._s_0.Y;
  (this->LastUpdateRequestedVelocity).field0_0x0._s_0.X =
       (param_1->LastUpdateRequestedVelocity).field0_0x0._s_0.X;
  (this->LastUpdateRequestedVelocity).field0_0x0._s_0.Y = dVar8;
  (this->LastUpdateRequestedVelocity).field0_0x0._s_0.Z =
       (param_1->LastUpdateRequestedVelocity).field0_0x0._s_0.Z;
  this->NumJumpApexAttempts = param_1->NumJumpApexAttempts;
  dVar8 = (param_1->AnimRootMotionVelocity).field0_0x0._s_0.Y;
  (this->AnimRootMotionVelocity).field0_0x0._s_0.X =
       (param_1->AnimRootMotionVelocity).field0_0x0._s_0.X;
  (this->AnimRootMotionVelocity).field0_0x0._s_0.Y = dVar8;
  (this->AnimRootMotionVelocity).field0_0x0._s_0.Z =
       (param_1->AnimRootMotionVelocity).field0_0x0._s_0.Z;
  this->bShouldApplyDeltaToMeshPhysicsTransforms = param_1->bShouldApplyDeltaToMeshPhysicsTransforms
  ;
  dVar8 = (param_1->DeltaPosition).field0_0x0._s_0.Y;
  (this->DeltaPosition).field0_0x0._s_0.X = (param_1->DeltaPosition).field0_0x0._s_0.X;
  (this->DeltaPosition).field0_0x0._s_0.Y = dVar8;
  (this->DeltaPosition).field0_0x0._s_0.Z = (param_1->DeltaPosition).field0_0x0._s_0.Z;
  dVar8 = (param_1->DeltaQuat).Y;
  (this->DeltaQuat).X = (param_1->DeltaQuat).X;
  (this->DeltaQuat).Y = dVar8;
  dVar8 = (param_1->DeltaQuat).W;
  (this->DeltaQuat).Z = (param_1->DeltaQuat).Z;
  (this->DeltaQuat).W = dVar8;
  this->DeltaTime = param_1->DeltaTime;
  dVar8 = (param_1->OldVelocity).field0_0x0._s_0.Y;
  (this->OldVelocity).field0_0x0._s_0.X = (param_1->OldVelocity).field0_0x0._s_0.X;
  (this->OldVelocity).field0_0x0._s_0.Y = dVar8;
  (this->OldVelocity).field0_0x0._s_0.Z = (param_1->OldVelocity).field0_0x0._s_0.Z;
  dVar8 = (param_1->OldLocation).field0_0x0._s_0.Y;
  (this->OldLocation).field0_0x0._s_0.X = (param_1->OldLocation).field0_0x0._s_0.X;
  (this->OldLocation).field0_0x0._s_0.Y = dVar8;
  (this->OldLocation).field0_0x0._s_0.Z = (param_1->OldLocation).field0_0x0._s_0.Z;
  dVar8 = (param_1->ModifiedRotationRate).Yaw;
  (this->ModifiedRotationRate).Pitch = (param_1->ModifiedRotationRate).Pitch;
  (this->ModifiedRotationRate).Yaw = dVar8;
  (this->ModifiedRotationRate).Roll = (param_1->ModifiedRotationRate).Roll;
  this->bUsingModifiedRotationRate = param_1->bUsingModifiedRotationRate;
  this->bShouldDisablePostPhysicsTick = param_1->bShouldDisablePostPhysicsTick;
  this->bShouldEnablePostPhysicsTick = param_1->bShouldEnablePostPhysicsTick;
  this->bShouldAddMovementBaseTickDependency = param_1->bShouldAddMovementBaseTickDependency;
  this->bShouldRemoveMovementBaseTickDependency = param_1->bShouldRemoveMovementBaseTickDependency;
  this->NewMovementBase = param_1->NewMovementBase;
  this->NewMovementBaseOwner = param_1->NewMovementBaseOwner;
  if (pFVar2 != &param_1->UpdatedComponentOutput) {
    iVar3 = (this->UpdatedComponentOutput).SpeculativeOverlaps.ArrayMax;
    piVar1 = &(this->UpdatedComponentOutput).SpeculativeOverlaps.ArrayMax;
    pFVar5 = (FOverlapInfo *)
             (param_1->UpdatedComponentOutput).SpeculativeOverlaps.AllocatorInstance.Data;
    iVar4 = (param_1->UpdatedComponentOutput).SpeculativeOverlaps.ArrayNum;
    (this->UpdatedComponentOutput).SpeculativeOverlaps.ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x108,8,iVar4,iVar3,(ForAnyElementType *)pFVar2,iVar4,piVar1);
      ConstructItems<FOverlapInfo,FOverlapInfo,int>
                ((pFVar2->SpeculativeOverlaps).AllocatorInstance.Data,pFVar5,iVar4);
    }
  }
  pFVar6 = (param_1->CharacterOutput).Ptr;
  pFVar7 = (this->CharacterOutput).Ptr;
  dVar8 = (pFVar6->Rotation).Yaw;
  (pFVar7->Rotation).Pitch = (pFVar6->Rotation).Pitch;
  (pFVar7->Rotation).Yaw = dVar8;
  (pFVar7->Rotation).Roll = (pFVar6->Rotation).Roll;
  pFVar7->JumpCurrentCountPreJump = pFVar6->JumpCurrentCountPreJump;
  pFVar7->JumpCurrentCount = pFVar6->JumpCurrentCount;
  pFVar7->JumpForceTimeRemaining = pFVar6->JumpForceTimeRemaining;
  pFVar7->JumpKeyHoldTime = pFVar6->JumpKeyHoldTime;
  pFVar7->bWasJumping = pFVar6->bWasJumping;
  pFVar7->bPressedJump = pFVar6->bPressedJump;
  pFVar7->bClearJumpInput = pFVar6->bClearJumpInput;
  return;
}

// GetAxisDeltaRotation @ 147706af0

float __cdecl
FCharacterMovementComponentAsyncOutput::GetAxisDeltaRotation(float param_1,float param_2)

{
  float fVar1;
  
  if (0.0 <= param_1) {
    fVar1 = param_1 * param_2;
    if (__real_43b40000 <= param_1 * param_2) {
      fVar1 = __real_43b40000;
    }
    return fVar1;
  }
  return __real_43b40000;
}

// GetDeltaRotation @ 147707250

TRotator<double> * __cdecl
FCharacterMovementComponentAsyncOutput::GetDeltaRotation
          (TRotator<double> *__return_storage_ptr__,TRotator<double> *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = __real_43b40000;
  if ((0.0 <= (float)param_1->Roll) &&
     (fVar3 = (float)param_1->Roll * param_2, __real_43b40000 <= fVar3)) {
    fVar3 = __real_43b40000;
  }
  fVar2 = __real_43b40000;
  if ((0.0 <= (float)param_1->Yaw) &&
     (fVar2 = (float)param_1->Yaw * param_2, __real_43b40000 <= fVar2)) {
    fVar2 = __real_43b40000;
  }
  fVar1 = __real_43b40000;
  if ((0.0 <= (float)param_1->Pitch) &&
     (fVar1 = (float)param_1->Pitch * param_2, __real_43b40000 <= fVar1)) {
    fVar1 = __real_43b40000;
  }
  __return_storage_ptr__->Pitch = (double)fVar1;
  __return_storage_ptr__->Yaw = (double)fVar2;
  __return_storage_ptr__->Roll = (double)fVar3;
  return __return_storage_ptr__;
}

