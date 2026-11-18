// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 15

// FSavedMove_Character @ 1477ee060

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FSavedMove_Character * __thiscall
FSavedMove_Character::FSavedMove_Character(FSavedMove_Character *this)

{
  FFindFloorResult *pFVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  pFVar1->bBlockingHit = 0;
  pFVar1->bLineTrace = 0;
  pFVar1->bWalkableFloor = 0;
  *(undefined ***)this = &___7FSavedMove_Character__6B_;
  (this->StartFloor).FloorDist = 0.0;
  (this->StartFloor).LineDist = 0.0;
  memset(&(this->StartFloor).HitResult,0,0x100);
  (this->StartFloor).HitResult.MyItem = -1;
  (this->StartFloor).HitResult.Time = 1.0;
  (this->StartFloor).HitResult.HitObjectHandle.ReferenceObject.WeakPtr = (FWeakObjectPtr)0x0;
  (this->StartFloor).HitResult.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr =
       (FWeakObjectPtr)0x0;
  (this->StartFloor).HitResult.HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  (this->StartFloor).HitResult.HitObjectHandle.InstanceIndex = -1;
  (this->StartFloor).HitResult.HitObjectHandle.ResolutionStatus = Invalid;
  *(undefined3 *)&(this->StartFloor).HitResult.HitObjectHandle.field_0x1d = 0;
  (this->StartBase).WeakPtr = (FWeakObjectPtr)0x0;
  (this->StartBoneName).ComparisonIndex = 0;
  (this->StartBoneName).Number = 0;
  (this->StartAttachParent).WeakPtr = (FWeakObjectPtr)0x0;
  (this->StartAttachSocketName).ComparisonIndex = 0;
  (this->StartAttachSocketName).Number = 0;
  (this->EndBase).WeakPtr = (FWeakObjectPtr)0x0;
  (this->EndBoneName).ComparisonIndex = 0;
  (this->EndBoneName).Number = 0;
  (this->EndAttachParent).WeakPtr = (FWeakObjectPtr)0x0;
  (this->EndAttachSocketName).ComparisonIndex = 0;
  (this->EndAttachSocketName).Number = 0;
  (this->RootMotionMontage).WeakPtr = (FWeakObjectPtr)0x0;
  (this->RootMotionMovement).bHasRootMotion = false;
  (this->RootMotionMovement).BlendWeight = 0.0;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar4._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->RootMotionMovement).RootMotionTransform.Rotation.XY.m128d_f64 =
       auVar4;
  auVar5._8_4_ = SUB84((double)fVar3,0);
  auVar5._0_8_ = (double)fVar2;
  auVar5._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->RootMotionMovement).RootMotionTransform.Rotation.ZW.m128d_f64 =
       auVar5;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->RootMotionMovement).RootMotionTransform.Translation.XY.m128d_f64 =
       auVar6;
  auVar7._8_4_ = SUB84((double)fVar3,0);
  auVar7._0_8_ = (double)fVar2;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->RootMotionMovement).RootMotionTransform.Translation.ZW.m128d_f64 =
       auVar7;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->RootMotionMovement).RootMotionTransform.Scale3D.XY.m128d_f64 = auVar8
  ;
  auVar9._8_4_ = SUB84((double)fVar3,0);
  auVar9._0_8_ = (double)fVar2;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->RootMotionMovement).RootMotionTransform.Scale3D.ZW.m128d_f64 = auVar9
  ;
  FRootMotionSourceGroup::FRootMotionSourceGroup(&this->SavedRootMotion);
  this->AccelMagThreshold = 1.0;
  this->AccelDotThreshold = 0.9;
  this->AccelDotThresholdCombine = 0.996;
  this->MaxSpeedThresholdCombine = 10.0;
  return this;
}

// ~FSavedMove_Character @ 1477f3cd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FSavedMove_Character::~FSavedMove_Character(FSavedMove_Character *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &___7FSavedMove_Character__6B_;
  (this->SavedRootMotion)._padding_ = (longlong)&___7FRootMotionSourceGroup__6B_;
  DestructItems<TSharedPtr<FRootMotionSource,1>,int>
            ((TSharedPtr<FRootMotionSource,1> *)
             (this->SavedRootMotion).PendingAddRootMotionSources.AllocatorInstance.Data,
             (this->SavedRootMotion).PendingAddRootMotionSources.ArrayNum);
  pFVar1 = (this->SavedRootMotion).PendingAddRootMotionSources.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<FRootMotionSource,1>,int>
            ((TSharedPtr<FRootMotionSource,1> *)
             (this->SavedRootMotion).RootMotionSources.AllocatorInstance.Data,
             (this->SavedRootMotion).RootMotionSources.ArrayNum);
  pFVar1 = (this->SavedRootMotion).RootMotionSources.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// AddStructReferencedObjects @ 1478054d0

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
FSavedMove_Character::AddStructReferencedObjects
          (FSavedMove_Character *this,FReferenceCollector *param_1)

{
  FReferenceCollector::AddReferencedObject
            (param_1,&(this->RootMotionMontage).WeakPtr,(UObject *)0x0,(FProperty *)0x0);
  FRootMotionSourceGroup::AddStructReferencedObjects(&this->SavedRootMotion,param_1);
  return;
}

// CanCombineWith @ 14780ffa0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
FSavedMove_Character::CanCombineWith
          (FSavedMove_Character *this,TSharedPtr<FSavedMove_Character,1> *param_1,
          ACharacter *param_2,float param_3)

{
  FSavedMove_Character *pFVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  UPrimitiveComponent *pUVar7;
  UPrimitiveComponent *pUVar8;
  UObject *pUVar9;
  UObject *pUVar10;
  UObject *pUVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  TRotator<double> local_48 [2];
  
  pFVar1 = param_1->Object;
  if ((((this->bForceNoCombine == '\0') && (pFVar1->bForceNoCombine == '\0')) &&
      (this->bOldTimeStampBeforeReset == '\0')) &&
     ((bVar3 = TWeakObjectPtr<UAnimMontage,FWeakObjectPtr>::UEOpEquals
                         (&this->RootMotionMontage,(void *)0x0), bVar3 &&
      (bVar3 = TWeakObjectPtr<UAnimMontage,FWeakObjectPtr>::UEOpEquals
                         (&pFVar1->RootMotionMontage,(void *)0x0), bVar3)))) {
    if (((pFVar1->Acceleration).field0_0x0._s_0.X == 0.0) &&
       (((pFVar1->Acceleration).field0_0x0._s_0.Y == 0.0 &&
        ((pFVar1->Acceleration).field0_0x0._s_0.Z == 0.0)))) {
      if ((this->Acceleration).field0_0x0._s_0.X != 0.0) {
        return false;
      }
      if ((this->Acceleration).field0_0x0._s_0.Y != 0.0) {
        return false;
      }
      if ((this->Acceleration).field0_0x0._s_0.Z != 0.0) {
        return false;
      }
    }
    else {
      if (param_3 <= pFVar1->DeltaTime + this->DeltaTime) {
        return false;
      }
      if ((this->AccelNormal).field0_0x0._s_0.Y * (pFVar1->AccelNormal).field0_0x0._s_0.Y +
          (this->AccelNormal).field0_0x0._s_0.X * (pFVar1->AccelNormal).field0_0x0._s_0.X +
          (this->AccelNormal).field0_0x0._s_0.Z * (pFVar1->AccelNormal).field0_0x0._s_0.Z <
          (double)this->AccelDotThresholdCombine) {
        return false;
      }
    }
    if ((((this->StartVelocity).field0_0x0._s_0.X == 0.0) &&
        ((this->StartVelocity).field0_0x0._s_0.Y == 0.0)) &&
       ((this->StartVelocity).field0_0x0._s_0.Z == 0.0)) {
      cVar4 = '\x01';
    }
    else {
      cVar4 = '\0';
    }
    if ((((pFVar1->StartVelocity).field0_0x0._s_0.X == 0.0) &&
        ((pFVar1->StartVelocity).field0_0x0._s_0.Y == 0.0)) &&
       ((pFVar1->StartVelocity).field0_0x0._s_0.Z == 0.0)) {
      cVar5 = '\x01';
    }
    else {
      cVar5 = '\0';
    }
    if (cVar4 == cVar5) {
      fVar12 = (float)((uint)(this->MaxSpeed - pFVar1->MaxSpeed) &
                      __xmm_7fffffff7fffffff7fffffff7fffffff);
      if (((fVar12 < this->MaxSpeedThresholdCombine || fVar12 == this->MaxSpeedThresholdCombine) &&
          ((this->MaxSpeed == 0.0) == (pFVar1->MaxSpeed == 0.0))) &&
         ((((this->JumpKeyHoldTime == 0.0) == (pFVar1->JumpKeyHoldTime == 0.0) &&
           (((((this->field_0x10 ^ pFVar1->field_0x10) & 0x20) == 0 &&
             (this->JumpCurrentCount == pFVar1->JumpCurrentCount)) &&
            (this->JumpMaxCount == pFVar1->JumpMaxCount)))) &&
          ((this->JumpForceTimeRemaining == 0.0) == (pFVar1->JumpForceTimeRemaining == 0.0))))) {
        pcVar2 = *(code **)(*(longlong *)this + 0x50);
        cVar4 = (**(code **)(*(longlong *)pFVar1 + 0x50))(pFVar1);
        cVar5 = (*pcVar2)(this);
        if (cVar5 == cVar4) {
          pUVar7 = (UPrimitiveComponent *)FWeakObjectPtr::Get(&(this->StartBase).WeakPtr);
          pUVar8 = (UPrimitiveComponent *)FWeakObjectPtr::Get(&(pFVar1->StartBase).WeakPtr);
          bVar3 = MovementBaseUtility::IsDynamicBase(pUVar7);
          bVar6 = MovementBaseUtility::IsDynamicBase(pUVar8);
          if (((bVar3 == bVar6) &&
              ((((CharacterMovementCVars::NetEnableMoveCombiningOnStaticBaseChange != 0 && (!bVar3))
                && (!bVar6)) ||
               ((pUVar7 == pUVar8 && (this->StartBoneName == pFVar1->StartBoneName)))))) &&
             ((this->StartPackedMovementMode == pFVar1->StartPackedMovementMode &&
              (((this->EndPackedMovementMode == pFVar1->StartPackedMovementMode &&
                (pFVar1->StartCapsuleRadius == this->StartCapsuleRadius)) &&
               (pFVar1->StartCapsuleHalfHeight == this->StartCapsuleHalfHeight)))))) {
            pUVar9 = FWeakObjectPtr::Get(&(this->StartAttachParent).WeakPtr);
            pUVar10 = FWeakObjectPtr::Get(&(this->EndAttachParent).WeakPtr);
            pUVar11 = FWeakObjectPtr::Get(&(pFVar1->StartAttachParent).WeakPtr);
            if ((((pUVar9 == pUVar11) && (pUVar10 == pUVar11)) &&
                (this->StartAttachSocketName == pFVar1->StartAttachSocketName)) &&
               (this->EndAttachSocketName == pFVar1->StartAttachSocketName)) {
              if (pUVar11 == (UObject *)0x0) {
                bVar3 = UE::Math::TQuat<double>::Equals
                                  (&this->StartBaseRotation,&pFVar1->StartBaseRotation,
                                   __real_3f1a36e2e0000000);
              }
              else {
                dVar13 = (this->StartAttachRelativeLocation).field0_0x0._s_0.X -
                         (pFVar1->StartAttachRelativeLocation).field0_0x0._s_0.X;
                dVar15 = (this->StartAttachRelativeLocation).field0_0x0._s_0.Y -
                         (pFVar1->StartAttachRelativeLocation).field0_0x0._s_0.Y;
                dVar14 = (this->StartAttachRelativeLocation).field0_0x0._s_0.Z -
                         (pFVar1->StartAttachRelativeLocation).field0_0x0._s_0.Z;
                dVar16 = (double)CharacterMovementCVars::NetMoveCombiningAttachedLocationTolerance;
                if (dVar16 < (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) &
                                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                              SUB84(dVar13,0) &
                                              (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
                  return false;
                }
                if (dVar16 < (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) &
                                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                              SUB84(dVar15,0) &
                                              (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
                  return false;
                }
                if (dVar16 < (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                              SUB84(dVar14,0) &
                                              (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
                  return false;
                }
                local_48[0].Roll =
                     (this->StartAttachRelativeRotation).Roll -
                     (pFVar1->StartAttachRelativeRotation).Roll;
                local_48[0].Pitch =
                     (this->StartAttachRelativeRotation).Pitch -
                     (pFVar1->StartAttachRelativeRotation).Pitch;
                local_48[0].Yaw = 0.0;
                bVar3 = UE::Math::TRotator<double>::IsNearlyZero
                                  (local_48,(double)CharacterMovementCVars::
                                                    NetMoveCombiningAttachedRotationTolerance);
              }
              if (((bVar3 != false) && (pFVar1->CustomTimeDilation == this->CustomTimeDilation)) &&
                 (this->EndActorOverlapCounter == pFVar1->StartActorOverlapCounter)) {
                return true;
              }
            }
          }
        }
      }
    }
  }
  return false;
}

// Clear @ 147812010

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FSavedMove_Character::Clear(FSavedMove_Character *this)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  double dVar11;
  FFindFloorResult *pFVar12;
  uint *puVar13;
  FFindFloorResult *pFVar14;
  uint *puVar15;
  longlong lVar16;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  uint local_118 [4];
  undefined1 local_108 [4];
  undefined4 uStack_104;
  undefined4 local_64;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_18;
  undefined8 local_10;
  
  this->bPressedJump = '\0';
  this->bWasJumping = '\0';
  this->bOldTimeStampBeforeReset = '\0';
  this->bForceNoCombine = '\0';
  this->bForceMaxAccel = '\0';
  this->bWantsToCrouch = '\0';
  local_118[0] = local_118[0] & 0xfffffff8;
  this->TimeStamp = 0.0;
  this->DeltaTime = 0.0;
  this->JumpForceTimeRemaining = 0.0;
  this->MovementMode = '\0';
  this->StartPackedMovementMode = '\0';
  this->CustomTimeDilation = 1.0;
  this->JumpKeyHoldTime = 0.0;
  this->JumpMaxCount = 1;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->JumpCurrentCount = 0;
  local_118[1] = 0;
  local_118[2] = 0;
  local_58 = 0;
  (this->StartLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartLocation).field0_0x0._s_0.Y = (double)uVar10;
  local_18 = 0;
  (this->StartLocation).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_10 = 0;
  (this->StartRelativeLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartRelativeLocation).field0_0x0._s_0.Y = (double)uVar10;
  (this->StartRelativeLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StartVelocity).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartVelocity).field0_0x0._s_0.Y = (double)uVar10;
  (this->StartVelocity).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_30 = 0;
  uStack_28 = 0;
  memset(local_108,0,0x100);
  local_50 = 0;
  uStack_48 = 0;
  lVar16 = 2;
  local_64 = 0xffffffff;
  uStack_104 = 0x3f800000;
  local_40 = 0;
  uStack_38 = 0xffffffff;
  pFVar12 = &this->StartFloor;
  puVar13 = local_118;
  do {
    puVar15 = puVar13;
    pFVar14 = pFVar12;
    pFVar12 = (FFindFloorResult *)&(pFVar14->HitResult).TraceStart;
    uVar2 = puVar15[1];
    uVar3 = puVar15[2];
    uVar4 = puVar15[3];
    uVar5 = puVar15[4];
    uVar6 = puVar15[5];
    uVar7 = puVar15[6];
    uVar8 = puVar15[7];
    puVar13 = puVar15 + 0x20;
    *(uint *)&pFVar14->field_0x0 = puVar15[0];
    pFVar14->FloorDist = (float)uVar2;
    pFVar14->LineDist = (float)uVar3;
    pFVar14->_padding_ = uVar4;
    uVar2 = puVar15[8];
    uVar3 = puVar15[9];
    uVar4 = puVar15[10];
    uVar9 = puVar15[0xb];
    (pFVar14->HitResult).FaceIndex = uVar5;
    (pFVar14->HitResult).Time = (float)uVar6;
    (pFVar14->HitResult).Distance = (float)uVar7;
    (pFVar14->HitResult)._padding_ = uVar8;
    uVar5 = puVar15[0xc];
    uVar6 = puVar15[0xd];
    uVar7 = puVar15[0xe];
    uVar8 = puVar15[0xf];
    *(uint *)&(pFVar14->HitResult).Location.field_0x0 = uVar2;
    *(uint *)&(pFVar14->HitResult).Location.field_0x4 = uVar3;
    *(uint *)&(pFVar14->HitResult).Location.field_0x8 = uVar4;
    *(uint *)&(pFVar14->HitResult).Location.field_0xc = uVar9;
    uVar2 = puVar15[0x10];
    uVar3 = puVar15[0x11];
    uVar4 = puVar15[0x12];
    uVar9 = puVar15[0x13];
    *(uint *)&(pFVar14->HitResult).Location.field_0x10 = uVar5;
    *(uint *)&(pFVar14->HitResult).Location.field_0x14 = uVar6;
    *(uint *)&(pFVar14->HitResult).ImpactPoint.field_0x0 = uVar7;
    *(uint *)&(pFVar14->HitResult).ImpactPoint.field_0x4 = uVar8;
    uVar5 = puVar15[0x14];
    uVar6 = puVar15[0x15];
    uVar7 = puVar15[0x16];
    uVar8 = puVar15[0x17];
    *(uint *)&(pFVar14->HitResult).ImpactPoint.field_0x8 = uVar2;
    *(uint *)&(pFVar14->HitResult).ImpactPoint.field_0xc = uVar3;
    *(uint *)&(pFVar14->HitResult).ImpactPoint.field_0x10 = uVar4;
    *(uint *)&(pFVar14->HitResult).ImpactPoint.field_0x14 = uVar9;
    uVar2 = puVar15[0x18];
    uVar3 = puVar15[0x19];
    uVar4 = puVar15[0x1a];
    uVar9 = puVar15[0x1b];
    *(uint *)&(pFVar14->HitResult).Normal.field_0x0 = uVar5;
    *(uint *)&(pFVar14->HitResult).Normal.field_0x4 = uVar6;
    *(uint *)&(pFVar14->HitResult).Normal.field_0x8 = uVar7;
    *(uint *)&(pFVar14->HitResult).Normal.field_0xc = uVar8;
    uVar5 = puVar15[0x1c];
    uVar6 = puVar15[0x1d];
    uVar7 = puVar15[0x1e];
    uVar8 = puVar15[0x1f];
    *(uint *)&(pFVar14->HitResult).Normal.field_0x10 = uVar2;
    *(uint *)&(pFVar14->HitResult).Normal.field_0x14 = uVar3;
    *(uint *)&(pFVar14->HitResult).ImpactNormal.field_0x0 = uVar4;
    *(uint *)&(pFVar14->HitResult).ImpactNormal.field_0x4 = uVar9;
    *(uint *)&(pFVar14->HitResult).ImpactNormal.field_0x8 = uVar5;
    *(uint *)&(pFVar14->HitResult).ImpactNormal.field_0xc = uVar6;
    *(uint *)&(pFVar14->HitResult).ImpactNormal.field_0x10 = uVar7;
    *(uint *)&(pFVar14->HitResult).ImpactNormal.field_0x14 = uVar8;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  uVar2 = puVar13[1];
  uVar3 = puVar15[0x22];
  uVar4 = puVar15[0x23];
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  *(uint *)&((FVector_NetQuantize *)pFVar12)->field_0x0 = puVar13[0];
  *(uint *)&((FVector_NetQuantize *)pFVar12)->field_0x4 = uVar2;
  *(uint *)&(pFVar14->HitResult).TraceStart.field_0x8 = uVar3;
  dVar11 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  *(uint *)&(pFVar14->HitResult).TraceStart.field_0xc = uVar4;
  (this->StartRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->StartRotation).Yaw = dVar11;
  (this->StartRotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  dVar11 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->StartControlRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->StartControlRotation).Yaw = dVar11;
  (this->StartControlRotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  dVar11 = UE::Math::TQuat<double>::Identity.Y;
  (this->StartBaseRotation).X = UE::Math::TQuat<double>::Identity.X;
  (this->StartBaseRotation).Y = dVar11;
  dVar11 = UE::Math::TQuat<double>::Identity.W;
  (this->StartBaseRotation).Z = UE::Math::TQuat<double>::Identity.Z;
  (this->StartBaseRotation).W = dVar11;
  this->StartCapsuleRadius = 0.0;
  this->StartCapsuleHalfHeight = 0.0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (this->StartBase).WeakPtr = local_res8;
  (this->StartBoneName).ComparisonIndex = 0;
  (this->StartBoneName).Number = 0;
  this->StartActorOverlapCounter = 0;
  this->StartComponentOverlapCounter = 0;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (this->StartAttachParent).WeakPtr = local_res8;
  (this->StartAttachSocketName).ComparisonIndex = 0;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StartAttachSocketName).Number = 0;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  (this->StartAttachRelativeLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartAttachRelativeLocation).field0_0x0._s_0.Y = (double)uVar10;
  (this->StartAttachRelativeLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar11 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->StartAttachRelativeRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->StartAttachRelativeRotation).Yaw = dVar11;
  (this->StartAttachRelativeRotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SavedLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SavedLocation).field0_0x0._s_0.Y = (double)uVar10;
  (this->SavedLocation).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar11 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->SavedRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->SavedRotation).Yaw = dVar11;
  (this->SavedRotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SavedRelativeLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SavedRelativeLocation).field0_0x0._s_0.Y = (double)uVar10;
  (this->SavedRelativeLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar11 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->SavedControlRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->SavedControlRotation).Yaw = dVar11;
  (this->SavedControlRotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SavedRelativeAcceleration).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SavedRelativeAcceleration).field0_0x0._s_0.Y = (double)uVar10;
  (this->SavedRelativeAcceleration).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Acceleration).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Acceleration).field0_0x0._s_0.Y = (double)uVar10;
  (this->Acceleration).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->MaxSpeed = 0.0;
  this->AccelMag = 0.0;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->AccelNormal).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->AccelNormal).field0_0x0._s_0.Y = (double)uVar10;
  (this->AccelNormal).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (this->EndBase).WeakPtr = local_res8;
  (this->EndBoneName).ComparisonIndex = 0;
  (this->EndBoneName).Number = 0;
  this->EndActorOverlapCounter = 0;
  this->EndComponentOverlapCounter = 0;
  this->EndPackedMovementMode = '\0';
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (this->EndAttachParent).WeakPtr = local_res8;
  (this->EndAttachSocketName).ComparisonIndex = 0;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->EndAttachSocketName).Number = 0;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  (this->EndAttachRelativeLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->EndAttachRelativeLocation).field0_0x0._s_0.Y = (double)uVar10;
  (this->EndAttachRelativeLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar11 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->EndAttachRelativeRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->EndAttachRelativeRotation).Yaw = dVar11;
  (this->EndAttachRelativeRotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (this->RootMotionMontage).WeakPtr = local_res8;
  (this->RootMotionMovement).bHasRootMotion = false;
  (this->RootMotionMovement).BlendWeight = 0.0;
  this->RootMotionTrackPosition = 0.0;
  this->RootMotionPreviousTrackPosition = 0.0;
  this->RootMotionPlayRateWithScale = 1.0;
  FRootMotionSourceGroup::Clear(&this->SavedRootMotion);
  return;
}

// CombineWith @ 1478153e0

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
FSavedMove_Character::CombineWith
          (FSavedMove_Character *this,FSavedMove_Character *param_1,ACharacter *param_2,
          APlayerController *param_3,TVector<double> *param_4)

{
  UCharacterMovementComponent *pUVar1;
  code *pcVar2;
  FName FVar3;
  double dVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  FFindFloorResult *pFVar9;
  FFindFloorResult *pFVar10;
  ETeleportType EVar11;
  UObject *pUVar12;
  FFindFloorResult *pFVar13;
  FFindFloorResult *pFVar14;
  longlong lVar15;
  TVector<double>_u_0 local_58;
  TVector<double>_u_0 local_38;
  
  pUVar1 = (param_2->CharacterMovement).field0_0x0.DebugPtr;
  pUVar12 = FWeakObjectPtr::Get(&(this->StartAttachParent).WeakPtr);
  if (pUVar12 == (UObject *)0x0) {
    if ((pUVar1->bJustTeleported == '\0') && (pUVar1->bNetworkLargeClientCorrection == '\0')) {
      EVar11 = None;
    }
    else {
      EVar11 = TeleportPhysics;
    }
    local_38._s_0.X = (param_1->StartRotation).Pitch;
    local_38._s_0.Y = (param_1->StartRotation).Yaw;
    local_38._s_0.Z = (param_1->StartRotation).Roll;
    local_58._s_0.X = (param_4->field0_0x0)._s_0.X;
    local_58._s_0.Y = (param_4->field0_0x0)._s_0.Y;
    local_58._s_0.Z = (param_4->field0_0x0)._s_0.Z;
    USceneComponent::SetWorldLocationAndRotation
              (*(USceneComponent **)&pUVar1->field_0xc0,(TVector<double> *)&local_58._s_0,
               (TRotator<double> *)&local_38._s_0,false,(FHitResult *)0x0,EVar11);
  }
  else {
    if ((pUVar1->bJustTeleported == '\0') && (pUVar1->bNetworkLargeClientCorrection == '\0')) {
      EVar11 = None;
    }
    else {
      EVar11 = TeleportPhysics;
    }
    local_58._s_0.X = (this->StartAttachRelativeRotation).Pitch;
    local_58._s_0.Y = (this->StartAttachRelativeRotation).Yaw;
    local_58._s_0.Z = (this->StartAttachRelativeRotation).Roll;
    local_38._s_0.X = (this->StartAttachRelativeLocation).field0_0x0._s_0.X;
    local_38._s_0.Y = (this->StartAttachRelativeLocation).field0_0x0._s_0.Y;
    local_38._s_0.Z = (this->StartAttachRelativeLocation).field0_0x0._s_0.Z;
    USceneComponent::SetRelativeLocationAndRotation
              (*(USceneComponent **)&pUVar1->field_0xc0,(TVector<double> *)&local_38._s_0,
               (TRotator<double> *)&local_58._s_0,false,(FHitResult *)0x0,EVar11);
  }
  dVar4 = (param_1->StartVelocity).field0_0x0._s_0.Y;
  *(double *)&pUVar1->field_0xd8 = (param_1->StartVelocity).field0_0x0._s_0.X;
  *(double *)&pUVar1->field_0xe0 = dVar4;
  pcVar2 = *(code **)(*(longlong *)pUVar1 + 0x7b8);
  *(double *)&pUVar1->field_0xe8 = (param_1->StartVelocity).field0_0x0._s_0.Z;
  FVar3 = param_1->StartBoneName;
  pUVar12 = FWeakObjectPtr::Get(&(param_1->StartBase).WeakPtr);
  (*pcVar2)(pUVar1,pUVar12,FVar3,1);
  lVar15 = 2;
  pFVar9 = &pUVar1->CurrentFloor;
  pFVar10 = &param_1->StartFloor;
  do {
    pFVar14 = pFVar10;
    pFVar13 = pFVar9;
    pFVar9 = (FFindFloorResult *)&(pFVar13->HitResult).TraceStart;
    fVar6 = pFVar14->FloorDist;
    fVar7 = pFVar14->LineDist;
    iVar8 = pFVar14->_padding_;
    pFVar10 = (FFindFloorResult *)&(pFVar14->HitResult).TraceStart;
    *(undefined4 *)&pFVar13->field_0x0 = *(undefined4 *)&pFVar14->field_0x0;
    pFVar13->FloorDist = fVar6;
    pFVar13->LineDist = fVar7;
    pFVar13->_padding_ = iVar8;
    fVar6 = (pFVar14->HitResult).Time;
    fVar7 = (pFVar14->HitResult).Distance;
    iVar8 = (pFVar14->HitResult)._padding_;
    (pFVar13->HitResult).FaceIndex = (pFVar14->HitResult).FaceIndex;
    (pFVar13->HitResult).Time = fVar6;
    (pFVar13->HitResult).Distance = fVar7;
    (pFVar13->HitResult)._padding_ = iVar8;
    uVar5 = *(undefined8 *)&(pFVar14->HitResult).Location.field_0x8;
    *(undefined8 *)&(pFVar13->HitResult).Location = *(undefined8 *)&(pFVar14->HitResult).Location;
    *(undefined8 *)&(pFVar13->HitResult).Location.field_0x8 = uVar5;
    uVar5 = *(undefined8 *)&(pFVar14->HitResult).ImpactPoint;
    *(undefined8 *)&(pFVar13->HitResult).Location.field_0x10 =
         *(undefined8 *)&(pFVar14->HitResult).Location.field_0x10;
    *(undefined8 *)&(pFVar13->HitResult).ImpactPoint = uVar5;
    uVar5 = *(undefined8 *)&(pFVar14->HitResult).ImpactPoint.field_0x10;
    *(undefined8 *)&(pFVar13->HitResult).ImpactPoint.field_0x8 =
         *(undefined8 *)&(pFVar14->HitResult).ImpactPoint.field_0x8;
    *(undefined8 *)&(pFVar13->HitResult).ImpactPoint.field_0x10 = uVar5;
    uVar5 = *(undefined8 *)&(pFVar14->HitResult).Normal.field_0x8;
    *(undefined8 *)&(pFVar13->HitResult).Normal = *(undefined8 *)&(pFVar14->HitResult).Normal;
    *(undefined8 *)&(pFVar13->HitResult).Normal.field_0x8 = uVar5;
    uVar5 = *(undefined8 *)&(pFVar14->HitResult).ImpactNormal;
    *(undefined8 *)&(pFVar13->HitResult).Normal.field_0x10 =
         *(undefined8 *)&(pFVar14->HitResult).Normal.field_0x10;
    *(undefined8 *)&(pFVar13->HitResult).ImpactNormal = uVar5;
    uVar5 = *(undefined8 *)&(pFVar14->HitResult).ImpactNormal.field_0x10;
    *(undefined8 *)&(pFVar13->HitResult).ImpactNormal.field_0x8 =
         *(undefined8 *)&(pFVar14->HitResult).ImpactNormal.field_0x8;
    *(undefined8 *)&(pFVar13->HitResult).ImpactNormal.field_0x10 = uVar5;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  uVar5 = *(undefined8 *)&(pFVar14->HitResult).TraceStart.field_0x8;
  *(undefined8 *)pFVar9 = *(undefined8 *)pFVar10;
  *(undefined8 *)&(pFVar13->HitResult).TraceStart.field_0x8 = uVar5;
  this->DeltaTime = param_1->DeltaTime + this->DeltaTime;
  param_2->JumpForceTimeRemaining = param_1->JumpForceTimeRemaining;
  param_2->JumpKeyHoldTime = param_1->JumpKeyHoldTime;
  param_2->JumpCurrentCountPreJump = param_1->JumpCurrentCount;
  return;
}

// GetCompressedFlags @ 147835950

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

uchar __thiscall FSavedMove_Character::GetCompressedFlags(FSavedMove_Character *this)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = this->bPressedJump;
  bVar2 = bVar1 | 2;
  if (this->bWantsToCrouch == '\0') {
    bVar2 = bVar1;
  }
  return bVar2;
}

// GetPackedAngles @ 14783b650

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
FSavedMove_Character::GetPackedAngles(FSavedMove_Character *this,uint *param_1,uchar *param_2)

{
  double dVar1;
  
  dVar1 = __real_3fe0000000000000;
  *param_1 = (int)((longlong)
                   ROUND((double)((float)(this->SavedControlRotation).Yaw * __real_47800000) *
                         __real_3f76c16c16c16c17 + __real_3fe0000000000000) >> 1) << 0x10 |
             (uint)((longlong)
                    ROUND((double)((float)(this->SavedControlRotation).Pitch * __real_47800000) *
                          __real_3f76c16c16c16c17 + __real_3fe0000000000000) >> 1) & 0xffff;
  *param_2 = (uchar)((longlong)
                     ROUND((this->SavedControlRotation).Roll * __real_3ff6c16c16c16c17 + dVar1) >> 1
                    );
  return;
}

// GetRevertedLocation @ 14783d210

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

TVector<double> * __thiscall
FSavedMove_Character::GetRevertedLocation
          (FSavedMove_Character *this,TVector<double> *__return_storage_ptr__)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  UObject *pUVar10;
  undefined1 (*pauVar11) [16];
  UPrimitiveComponent *pUVar12;
  undefined1 auVar13 [16];
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auStack_f8 [32];
  TVector<double>_u_0 local_d8;
  undefined1 local_b8 [96];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pUVar10 = FWeakObjectPtr::Get(&(this->StartAttachParent).WeakPtr);
  if (pUVar10 == (UObject *)0x0) {
    pUVar12 = (UPrimitiveComponent *)FWeakObjectPtr::Get(&(this->StartBase).WeakPtr);
    bVar9 = MovementBaseUtility::IsDynamicBase(pUVar12);
    if (bVar9) {
      MovementBaseUtility::TransformLocationToWorld
                (pUVar12,this->StartBoneName,&this->StartRelativeLocation,
                 (TVector<double> *)&local_d8._s_0);
      uVar14 = SUB84(local_d8._s_0.Z,0);
      uVar15 = (undefined4)((ulonglong)local_d8._16_8_ >> 0x20);
      (__return_storage_ptr__->field0_0x0)._s_0.X = local_d8._s_0.X;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = local_d8._s_0.Y;
    }
    else {
      dVar3 = (this->StartLocation).field0_0x0._s_0.Y;
      (__return_storage_ptr__->field0_0x0)._s_0.X = (this->StartLocation).field0_0x0._s_0.X;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
      uVar1 = *(undefined8 *)((longlong)&(this->StartLocation).field0_0x0 + 0x10);
      uVar14 = (undefined4)uVar1;
      uVar15 = (undefined4)((ulonglong)uVar1 >> 0x20);
    }
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)CONCAT44(uVar15,uVar14);
  }
  else {
    pauVar11 = (undefined1 (*) [16])
               (**(code **)(*(longlong *)pUVar10 + 0x520))
                         (pUVar10,local_b8,this->StartAttachSocketName,0);
    auVar2 = pauVar11[1];
    dVar6 = (this->StartAttachRelativeLocation).field0_0x0._s_0.Z * *(double *)pauVar11[5];
    dVar7 = *(double *)(pauVar11[5] + 8) * 0.0;
    dVar8 = *(double *)(pauVar11[1] + 8);
    dVar4 = *(double *)pauVar11[4] * (this->StartAttachRelativeLocation).field0_0x0._s_0.X;
    dVar5 = *(double *)(pauVar11[4] + 8) * (this->StartAttachRelativeLocation).field0_0x0._s_0.Y;
    uVar14 = (undefined4)((ulonglong)dVar5 >> 0x20);
    auVar13 = *pauVar11;
    auVar16 = blendpd(auVar13,auVar2,2);
    auVar24._8_4_ = SUB84(dVar5,0);
    auVar24._0_8_ = dVar4;
    auVar24._12_4_ = uVar14;
    dVar3 = auVar2._0_8_;
    auVar25._0_8_ = auVar24._8_8_ * auVar13._0_8_ - auVar13._8_8_ * dVar4;
    auVar25._8_8_ = dVar6 * auVar13._8_8_ - dVar3 * dVar5;
    auVar26._8_4_ = SUB84(dVar5,0);
    auVar26._0_8_ = dVar4;
    auVar26._12_4_ = uVar14;
    auVar13._8_4_ = SUB84(dVar7,0);
    auVar13._0_8_ = dVar6;
    auVar13._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    auVar13 = blendpd(auVar26,auVar13,2);
    auVar18._0_8_ = auVar13._0_8_ * dVar3 - auVar16._0_8_ * dVar6;
    auVar18._8_8_ = auVar13._8_8_ * auVar2._8_8_ - auVar16._8_8_ * dVar7;
    auVar13 = *pauVar11;
    auVar26 = blendpd(auVar25,auVar18,2);
    auVar27._0_8_ = auVar26._0_8_ + auVar26._0_8_;
    auVar27._8_8_ = auVar26._8_8_ + auVar26._8_8_;
    dVar20 = auVar25._8_8_ + auVar25._8_8_;
    dVar21 = auVar18._0_8_ + auVar18._0_8_;
    auVar22._8_4_ = SUB84(dVar21,0);
    auVar22._0_8_ = dVar20;
    uVar14 = (undefined4)((ulonglong)dVar21 >> 0x20);
    auVar22._12_4_ = uVar14;
    auVar17._8_4_ = SUB84(dVar21,0);
    auVar17._0_8_ = dVar20;
    auVar17._12_4_ = uVar14;
    auVar26 = blendpd(auVar13,auVar2,2);
    auVar18 = blendpd(auVar17,auVar27,2);
    auVar23._0_8_ = auVar22._8_8_ * auVar13._0_8_ - auVar13._8_8_ * dVar20;
    auVar23._8_8_ = auVar27._0_8_ * auVar13._8_8_ - dVar3 * dVar21;
    auVar19._0_8_ = auVar18._0_8_ * dVar3 - auVar26._0_8_ * auVar27._0_8_;
    auVar19._8_8_ = auVar18._8_8_ * auVar2._8_8_ - auVar26._8_8_ * auVar27._8_8_;
    dVar7 = *(double *)pauVar11[3];
    auVar16._8_4_ = SUB84(auVar23._8_8_,0);
    auVar16._0_8_ = auVar23._0_8_;
    auVar16._12_4_ = (int)((ulonglong)auVar23._8_8_ >> 0x20);
    auVar13 = blendpd(auVar23,auVar19,2);
    dVar3 = dVar8 * dVar21 + dVar5 + auVar19._0_8_ + *(double *)(pauVar11[2] + 8);
    auVar2._8_4_ = SUB84(dVar3,0);
    auVar2._0_8_ = dVar8 * dVar20 + dVar4 + auVar16._8_8_ + *(double *)pauVar11[2];
    auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         dVar8 * auVar27._0_8_ + dVar6 + auVar13._0_8_ + dVar7;
  }
  return __return_storage_ptr__;
}

// IsImportantMove @ 147840440

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
FSavedMove_Character::IsImportantMove
          (FSavedMove_Character *this,TSharedPtr<FSavedMove_Character,1> *param_1)

{
  FSavedMove_Character *pFVar1;
  code *pcVar2;
  char cVar3;
  char cVar4;
  float fVar5;
  
  pFVar1 = param_1->Object;
  pcVar2 = *(code **)(*(longlong *)this + 0x50);
  cVar3 = (**(code **)(*(longlong *)pFVar1 + 0x50))(pFVar1);
  cVar4 = (*pcVar2)(this);
  if (((cVar4 == cVar3) && (this->StartPackedMovementMode == pFVar1->EndPackedMovementMode)) &&
     (this->EndPackedMovementMode == pFVar1->EndPackedMovementMode)) {
    if ((((pFVar1->Acceleration).field0_0x0._s_0.X == (this->Acceleration).field0_0x0._s_0.X) &&
        ((pFVar1->Acceleration).field0_0x0._s_0.Y == (this->Acceleration).field0_0x0._s_0.Y)) &&
       ((pFVar1->Acceleration).field0_0x0._s_0.Z == (this->Acceleration).field0_0x0._s_0.Z)) {
      return false;
    }
    fVar5 = (float)((uint)(this->AccelMag - pFVar1->AccelMag) &
                   __xmm_7fffffff7fffffff7fffffff7fffffff);
    if (fVar5 < this->AccelMagThreshold || fVar5 == this->AccelMagThreshold) {
      return (pFVar1->AccelNormal).field0_0x0._s_0.Y * (this->AccelNormal).field0_0x0._s_0.Y +
             (pFVar1->AccelNormal).field0_0x0._s_0.X * (this->AccelNormal).field0_0x0._s_0.X +
             (pFVar1->AccelNormal).field0_0x0._s_0.Z * (this->AccelNormal).field0_0x0._s_0.Z <
             (double)this->AccelDotThreshold;
    }
  }
  return true;
}

// IsMatchingStartControlRotation @ 147840710

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
FSavedMove_Character::IsMatchingStartControlRotation
          (FSavedMove_Character *this,APlayerController *param_1)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  int iVar10;
  double *pdVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  double dVar35;
  undefined1 auVar34 [16];
  undefined1 auVar36 [16];
  undefined1 local_58 [80];
  
  if (param_1 != (APlayerController *)0x0) {
    dVar9 = (double)CharacterMovementCVars::NetStationaryRotationTolerance;
    pdVar11 = (double *)(**(code **)(param_1->_padding_ + 0x7a8))(param_1,local_58);
    dVar33 = (this->StartControlRotation).Pitch - *pdVar11;
    dVar35 = (this->StartControlRotation).Yaw - pdVar11[1];
    dVar2 = (this->StartControlRotation).Roll - pdVar11[2];
    auVar19._8_4_ = SUB84(dVar35,0);
    auVar19._0_8_ = dVar33;
    auVar19._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
    auVar20 = divpd(auVar19,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
    auVar20 = roundpd(in_XMM1,auVar20,3);
    dVar6 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
    auVar27._0_8_ = auVar20._0_8_ * dVar6;
    dVar7 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
    auVar27._8_8_ = auVar20._8_8_ * dVar7;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = dVar2;
    dVar33 = dVar33 - auVar27._0_8_;
    dVar35 = dVar35 - auVar27._8_8_;
    auVar20 = divpd(auVar21,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
    auVar20 = roundpd(auVar27,auVar20,3);
    dVar4 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
    dVar5 = GlobalVectorConstants::Double360.ZW.m128d_f64[1];
    auVar22._8_4_ = SUB84(dVar35,0);
    auVar22._0_8_ = dVar33;
    auVar22._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
    dVar2 = dVar2 - auVar20._0_8_ * dVar4;
    dVar3 = 0.0 - auVar20._8_8_ * dVar5;
    uVar13 = -(ulonglong)(0.0 <= dVar33);
    uVar15 = -(ulonglong)(0.0 <= dVar35);
    auVar28._0_8_ = uVar13 & (ulonglong)dVar33;
    auVar28._8_4_ = (undefined4)(uVar15 & (ulonglong)dVar35);
    auVar28._12_4_ = (undefined4)((uVar15 & (ulonglong)dVar35) >> 0x20);
    dVar35 = auVar22._8_8_ + dVar7;
    uVar14 = -(ulonglong)(0.0 <= dVar2);
    uVar16 = -(ulonglong)(0.0 <= dVar3);
    auVar36._0_4_ = ~(uint)uVar13 & SUB84(dVar33 + dVar6,0);
    auVar36._4_4_ = ~(uint)(uVar13 >> 0x20) & (uint)((ulonglong)(dVar33 + dVar6) >> 0x20);
    auVar36._8_4_ = ~(uint)uVar15 & SUB84(dVar35,0);
    auVar36._12_4_ = ~(uint)(uVar15 >> 0x20) & (uint)((ulonglong)dVar35 >> 0x20);
    auVar36 = auVar36 | auVar28;
    auVar23._8_4_ = SUB84(dVar3,0);
    auVar23._0_8_ = dVar2;
    auVar23._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    dVar35 = auVar23._8_8_ + dVar5;
    auVar34._0_4_ = ~(uint)uVar14 & SUB84(dVar2 + dVar4,0);
    auVar34._4_4_ = ~(uint)(uVar14 >> 0x20) & (uint)((ulonglong)(dVar2 + dVar4) >> 0x20);
    auVar34._8_4_ = ~(uint)uVar16 & SUB84(dVar35,0);
    auVar34._12_4_ = ~(uint)(uVar16 >> 0x20) & (uint)((ulonglong)dVar35 >> 0x20);
    auVar20._8_4_ = (int)((ulonglong)dVar3 & uVar16);
    auVar20._0_8_ = (ulonglong)dVar2 & uVar14;
    auVar20._12_4_ = (int)(((ulonglong)dVar3 & uVar16) >> 0x20);
    auVar34 = auVar34 | auVar20;
    uVar14 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar34._0_8_);
    uVar16 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[1] < auVar34._8_8_);
    uVar15 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar36._0_8_);
    uVar17 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar36._8_8_);
    auVar29._0_8_ = uVar14 & (ulonglong)(auVar34._0_8_ - dVar4);
    uVar13 = uVar16 & (ulonglong)(auVar34._8_8_ - dVar5);
    auVar29._8_4_ = (undefined4)uVar13;
    auVar29._12_4_ = (undefined4)(uVar13 >> 0x20);
    auVar24._0_4_ = ~(uint)uVar14 & auVar34._0_4_;
    auVar24._4_4_ = ~(uint)(uVar14 >> 0x20) & auVar34._4_4_;
    auVar24._8_4_ = ~(uint)uVar16 & auVar34._8_4_;
    auVar24._12_4_ = ~(uint)(uVar16 >> 0x20) & auVar34._12_4_;
    auVar29 = auVar29 | auVar24;
    auVar25._8_4_ = SUB84(dVar9,0);
    auVar25._0_8_ = dVar9;
    auVar25._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    auVar30._0_8_ =
         (double)CONCAT44(auVar29._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          auVar29._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar30._8_4_ = auVar29._8_4_ & _UNK_15061cc88;
    auVar30._12_4_ = auVar29._12_4_ & _UNK_15061cc8c;
    auVar26._8_8_ = -(ulonglong)(auVar25._8_8_ < auVar30._8_8_);
    auVar26._0_8_ = -(ulonglong)(dVar9 < auVar30._0_8_);
    uVar12 = movmskpd((int)param_1,auVar26);
    auVar31._0_8_ = uVar15 & (ulonglong)(auVar36._0_8_ - dVar6);
    uVar13 = uVar17 & (ulonglong)(auVar36._8_8_ - dVar7);
    auVar31._8_4_ = (undefined4)uVar13;
    auVar31._12_4_ = (undefined4)(uVar13 >> 0x20);
    auVar1._4_4_ = ~(uint)(uVar15 >> 0x20) & auVar36._4_4_;
    auVar1._0_4_ = ~(uint)uVar15 & auVar36._0_4_;
    auVar1._8_4_ = ~(uint)uVar17 & auVar36._8_4_;
    auVar1._12_4_ = ~(uint)(uVar17 >> 0x20) & auVar36._12_4_;
    auVar31 = auVar31 | auVar1;
    auVar32._0_8_ =
         (double)CONCAT44(auVar31._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          auVar31._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar32._8_4_ = auVar31._8_4_ & _UNK_15061cc88;
    auVar32._12_4_ = auVar31._12_4_ & _UNK_15061cc8c;
    lVar18 = -(ulonglong)(dVar9 < auVar32._8_8_);
    auVar8._8_4_ = (int)lVar18;
    auVar8._0_8_ = -(ulonglong)(dVar9 < auVar32._0_8_);
    auVar8._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
    iVar10 = movmskpd((int)pdVar11,auVar8);
    return (uVar12 & 0x3fffffff) == 0 && iVar10 == 0;
  }
  return false;
}

// PostUpdate @ 147855070

/* WARNING: Type propagation algorithm not settling */
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
FSavedMove_Character::PostUpdate
          (FSavedMove_Character *this,ACharacter *param_1,EPostUpdateMode param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  FWeakObjectPtr FVar4;
  FName FVar5;
  UAnimMontage *pUVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  uint uVar13;
  uchar uVar14;
  bool bVar15;
  char cVar16;
  TRotator<double> *pTVar17;
  double *pdVar18;
  UPrimitiveComponent *pUVar19;
  UClass *pUVar20;
  FAnimMontageInstance *pFVar21;
  UObject *pUVar22;
  char cVar23;
  longlong *plVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined8 uVar29;
  FWeakObjectPtr local_res8;
  UAnimMontage *local_res10;
  TRotator<double> local_78 [4];
  
  uVar14 = (**(code **)(*(longlong *)(param_1->CharacterMovement).field0_0x0.DebugPtr + 0x668))();
  this->EndPackedMovementMode = uVar14;
  this->MovementMode = uVar14;
  lVar3 = *(longlong *)&param_1->field_0x1b8;
  uVar25 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  uVar26 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  uVar27 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uVar28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  uVar29 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (lVar3 != 0) {
    uVar25 = *(undefined4 *)(lVar3 + 0x210);
    uVar26 = *(undefined4 *)(lVar3 + 0x214);
    uVar27 = *(undefined4 *)(lVar3 + 0x218);
    uVar28 = *(undefined4 *)(lVar3 + 0x21c);
    uVar29 = *(double *)(lVar3 + 0x220);
  }
  *(undefined4 *)&(this->SavedLocation).field0_0x0 = uVar25;
  *(undefined4 *)((longlong)&(this->SavedLocation).field0_0x0 + 4) = uVar26;
  *(undefined4 *)((longlong)&(this->SavedLocation).field0_0x0 + 8) = uVar27;
  *(undefined4 *)((longlong)&(this->SavedLocation).field0_0x0 + 0xc) = uVar28;
  (this->SavedLocation).field0_0x0._s_0.Z = (double)uVar29;
  if (*(USceneComponent **)&param_1->field_0x1b8 == (USceneComponent *)0x0) {
    pTVar17 = local_78;
    local_78[0].Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    local_78[0].Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    local_78[0].Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  }
  else {
    pTVar17 = USceneComponent::GetComponentRotation
                        (*(USceneComponent **)&param_1->field_0x1b8,local_78);
  }
  uVar25 = *(undefined4 *)((longlong)&pTVar17->Pitch + 4);
  uVar26 = *(undefined4 *)&pTVar17->Yaw;
  uVar27 = *(undefined4 *)((longlong)&pTVar17->Yaw + 4);
  *(undefined4 *)&(this->SavedRotation).Pitch = *(undefined4 *)&pTVar17->Pitch;
  *(undefined4 *)((longlong)&(this->SavedRotation).Pitch + 4) = uVar25;
  *(undefined4 *)&(this->SavedRotation).Yaw = uVar26;
  *(undefined4 *)((longlong)&(this->SavedRotation).Yaw + 4) = uVar27;
  (this->SavedRotation).Roll = pTVar17->Roll;
  pdVar18 = (double *)(**(code **)(*(longlong *)param_1 + 0x360))(param_1,local_78);
  dVar9 = pdVar18[1];
  (this->SavedVelocity).field0_0x0._s_0.X = *pdVar18;
  (this->SavedVelocity).field0_0x0._s_0.Y = dVar9;
  (this->SavedVelocity).field0_0x0._s_0.Z = pdVar18[2];
  FVar4 = (FWeakObjectPtr)(param_1->BasedMovement).MovementBase.field0_0x0.DebugPtr;
  local_res8 = FVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar4 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar4);
  }
  FWeakObjectPtr::operator=(&(this->EndBase).WeakPtr,(FObjectPtr)&local_res8);
  this->EndBoneName = (param_1->BasedMovement).BoneName;
  bVar15 = MovementBaseUtility::IsDynamicBase((UPrimitiveComponent *)FVar4);
  if (bVar15) {
    dVar9 = *(double *)&(param_1->BasedMovement).Location.field_0x8;
    (this->SavedRelativeLocation).field0_0x0._s_0.X = *(double *)&(param_1->BasedMovement).Location;
    (this->SavedRelativeLocation).field0_0x0._s_0.Y = dVar9;
    (this->SavedRelativeLocation).field0_0x0._s_0.Z =
         *(double *)&(param_1->BasedMovement).Location.field_0x10;
  }
  if ((CharacterMovementCVars::NetUseBaseRelativeAcceleration != 0) &&
     (bVar15 = MovementBaseUtility::IsDynamicBase((UPrimitiveComponent *)FVar4), bVar15)) {
    FVar5 = this->EndBoneName;
    pUVar19 = (UPrimitiveComponent *)FWeakObjectPtr::Get(&(this->EndBase).WeakPtr);
    MovementBaseUtility::TransformDirectionToLocal
              (pUVar19,FVar5,&this->Acceleration,&this->SavedRelativeAcceleration);
  }
  lVar3 = *(longlong *)&((param_1->CharacterMovement).field0_0x0.DebugPtr)->field_0xc0;
  if (lVar3 != 0) {
    local_res8 = *(FWeakObjectPtr *)(lVar3 + 0xd0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (FWeakObjectPtr)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    FWeakObjectPtr::operator=(&(this->EndAttachParent).WeakPtr,(FObjectPtr)&local_res8);
    this->EndAttachSocketName = *(FName *)(lVar3 + 0xd8);
    dVar9 = *(double *)(lVar3 + 0x150);
    (this->EndAttachRelativeLocation).field0_0x0._s_0.X = *(double *)(lVar3 + 0x148);
    (this->EndAttachRelativeLocation).field0_0x0._s_0.Y = dVar9;
    (this->EndAttachRelativeLocation).field0_0x0._s_0.Z = *(double *)(lVar3 + 0x158);
    dVar9 = *(double *)(lVar3 + 0x168);
    (this->EndAttachRelativeRotation).Pitch = *(double *)(lVar3 + 0x160);
    (this->EndAttachRelativeRotation).Yaw = dVar9;
    (this->EndAttachRelativeRotation).Roll = *(double *)(lVar3 + 0x170);
  }
  pTVar17 = APawn::GetControlRotation((APawn *)param_1,local_78);
  dVar12 = __real_4076800000000000;
  dVar9 = FGenericPlatformMath::Fmod(pTVar17->Roll,__real_4076800000000000);
  if (dVar9 < 0.0) {
    dVar9 = dVar9 + dVar12;
  }
  dVar10 = FGenericPlatformMath::Fmod(pTVar17->Yaw,dVar12);
  if (dVar10 < 0.0) {
    dVar10 = dVar10 + dVar12;
  }
  dVar11 = FGenericPlatformMath::Fmod(pTVar17->Pitch,dVar12);
  if (dVar11 < 0.0) {
    dVar11 = dVar11 + dVar12;
  }
  auVar7._8_4_ = SUB84(dVar10,0);
  auVar7._0_8_ = dVar11;
  auVar7._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  (this->SavedControlRotation).Pitch = dVar11;
  (this->SavedControlRotation).Yaw = (double)auVar7._8_8_;
  (this->SavedControlRotation).Roll = dVar9;
  local_78[0].Roll = dVar9;
  if (*(longlong *)&param_1->field_0x2f0 != 0) goto LAB_1478553f6;
  plVar24 = *(longlong **)&param_1->field_0x158;
  if (plVar24 == (longlong *)0x0) {
LAB_147855377:
    plVar24 = (longlong *)0x0;
  }
  else {
    pUVar20 = Z_Construct_UClass_AController_NoRegister();
    iVar1 = (int)pUVar20->_padding_;
    if ((*(int *)(plVar24[2] + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(plVar24[2] + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar20->_padding_)) goto LAB_147855377;
  }
  if (plVar24 != (longlong *)0x0) {
    pdVar18 = (double *)(**(code **)(*plVar24 + 0x7a8))(plVar24,local_78);
    dVar9 = FGenericPlatformMath::Fmod(pdVar18[2],dVar12);
    if (dVar9 < 0.0) {
      dVar9 = dVar9 + dVar12;
    }
    dVar10 = FGenericPlatformMath::Fmod(pdVar18[1],dVar12);
    if (dVar10 < 0.0) {
      dVar10 = dVar10 + dVar12;
    }
    dVar11 = FGenericPlatformMath::Fmod(*pdVar18,dVar12);
    if (dVar11 < 0.0) {
      dVar11 = dVar11 + dVar12;
    }
    auVar8._8_4_ = SUB84(dVar10,0);
    auVar8._0_8_ = dVar11;
    auVar8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    (this->SavedControlRotation).Pitch = dVar11;
    (this->SavedControlRotation).Yaw = (double)auVar8._8_8_;
    (this->SavedControlRotation).Roll = dVar9;
  }
LAB_1478553f6:
  if (param_2 == PostUpdate_Record) {
    pFVar21 = ACharacter::GetRootMotionAnimMontageInstance(param_1);
    if (pFVar21 != (FAnimMontageInstance *)0x0) {
      if (pFVar21->DisableRootMotionCount < 1) {
        pUVar6 = (pFVar21->Montage).field0_0x0.DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (pUVar6 != (UAnimMontage *)0x0) {
            UE::GC::MarkAsReachable((UObject *)pUVar6);
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar6 != (UAnimMontage *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar6);
          }
        }
        local_res8.ObjectIndex = 0;
        local_res8.ObjectSerialNumber = 0;
        local_res10 = pUVar6;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UAnimMontage *)0x0))
        {
          UE::GC::MarkAsReachable((UObject *)pUVar6);
        }
        FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
        (this->RootMotionMontage).WeakPtr = local_res8;
        this->RootMotionTrackPosition = pFVar21->Position;
        this->RootMotionPreviousTrackPosition = (pFVar21->DeltaTimeRecord).Previous;
        pUVar22 = FWeakObjectPtr::Get(&(this->RootMotionMontage).WeakPtr);
        this->RootMotionPlayRateWithScale = *(float *)&pUVar22[4].field_0x8 * pFVar21->PlayRate;
        (this->RootMotionMovement).bHasRootMotion = (param_1->ClientRootMotionParams).bHasRootMotion
        ;
        (this->RootMotionMovement).BlendWeight = (param_1->ClientRootMotionParams).BlendWeight;
        dVar9 = (param_1->ClientRootMotionParams).RootMotionTransform.Rotation.XY.m128d_f64[1];
        (this->RootMotionMovement).RootMotionTransform.Rotation.XY.m128d_f64[0] =
             (param_1->ClientRootMotionParams).RootMotionTransform.Rotation.XY.m128d_f64[0];
        (this->RootMotionMovement).RootMotionTransform.Rotation.XY.m128d_f64[1] = dVar9;
        dVar9 = (param_1->ClientRootMotionParams).RootMotionTransform.Rotation.ZW.m128d_f64[1];
        (this->RootMotionMovement).RootMotionTransform.Rotation.ZW.m128d_f64[0] =
             (param_1->ClientRootMotionParams).RootMotionTransform.Rotation.ZW.m128d_f64[0];
        (this->RootMotionMovement).RootMotionTransform.Rotation.ZW.m128d_f64[1] = dVar9;
        dVar9 = (param_1->ClientRootMotionParams).RootMotionTransform.Translation.XY.m128d_f64[1];
        (this->RootMotionMovement).RootMotionTransform.Translation.XY.m128d_f64[0] =
             (param_1->ClientRootMotionParams).RootMotionTransform.Translation.XY.m128d_f64[0];
        (this->RootMotionMovement).RootMotionTransform.Translation.XY.m128d_f64[1] = dVar9;
        dVar9 = (param_1->ClientRootMotionParams).RootMotionTransform.Translation.ZW.m128d_f64[1];
        (this->RootMotionMovement).RootMotionTransform.Translation.ZW.m128d_f64[0] =
             (param_1->ClientRootMotionParams).RootMotionTransform.Translation.ZW.m128d_f64[0];
        (this->RootMotionMovement).RootMotionTransform.Translation.ZW.m128d_f64[1] = dVar9;
        dVar9 = (param_1->ClientRootMotionParams).RootMotionTransform.Scale3D.XY.m128d_f64[1];
        (this->RootMotionMovement).RootMotionTransform.Scale3D.XY.m128d_f64[0] =
             (param_1->ClientRootMotionParams).RootMotionTransform.Scale3D.XY.m128d_f64[0];
        (this->RootMotionMovement).RootMotionTransform.Scale3D.XY.m128d_f64[1] = dVar9;
        dVar9 = (param_1->ClientRootMotionParams).RootMotionTransform.Scale3D.ZW.m128d_f64[1];
        (this->RootMotionMovement).RootMotionTransform.Scale3D.ZW.m128d_f64[0] =
             (param_1->ClientRootMotionParams).RootMotionTransform.Scale3D.ZW.m128d_f64[0];
        (this->RootMotionMovement).RootMotionTransform.Scale3D.ZW.m128d_f64[1] = dVar9;
      }
      this->bForceNoCombine = '\x01';
    }
    bVar15 = FRootMotionSourceGroup::HasActiveRootMotionSources(&param_1->SavedRootMotion);
    if (bVar15) {
      FRootMotionSourceGroup::operator=(&this->SavedRootMotion,&param_1->SavedRootMotion);
      this->bForceNoCombine = '\x01';
    }
    uVar2 = param_1->NumActorOverlapEventsCounter;
    this->EndActorOverlapCounter = uVar2;
    uVar13 = UPrimitiveComponent::GlobalOverlapEventsCounter;
    this->EndComponentOverlapCounter = UPrimitiveComponent::GlobalOverlapEventsCounter;
    if ((this->StartActorOverlapCounter != uVar2) || (this->StartComponentOverlapCounter != uVar13))
    {
      this->bForceNoCombine = '\x01';
    }
    if ((((this->StartVelocity).field0_0x0._s_0.X == 0.0) &&
        ((this->StartVelocity).field0_0x0._s_0.Y == 0.0)) &&
       ((this->StartVelocity).field0_0x0._s_0.Z == 0.0)) {
      cVar23 = '\x01';
    }
    else {
      cVar23 = '\0';
    }
    if ((((this->SavedVelocity).field0_0x0._s_0.X == 0.0) &&
        ((this->SavedVelocity).field0_0x0._s_0.Y == 0.0)) &&
       ((this->SavedVelocity).field0_0x0._s_0.Z == 0.0)) {
      cVar16 = '\x01';
    }
    else {
      cVar16 = '\0';
    }
    if (cVar23 != cVar16) {
      this->bForceNoCombine = '\x01';
    }
    if (this->StartPackedMovementMode != this->EndPackedMovementMode) {
      this->bForceNoCombine = '\x01';
    }
    if (((this->CharacterOwner->bPressedJump ^ this->bPressedJump) & 1) != 0) {
      this->field_0x10 = this->field_0x10 | 8;
    }
  }
  else if ((param_2 == PostUpdate_Replay) && ((bool)param_1->bClientResimulateRootMotionSources)) {
    FRootMotionSourceGroup::operator=
              (&param_1->SavedRootMotion,
               &((param_1->CharacterMovement).field0_0x0.DebugPtr)->CurrentRootMotion);
  }
  return;
}

// PrepMoveFor @ 1478559f0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FSavedMove_Character::PrepMoveFor(FSavedMove_Character *this,ACharacter *param_1)

{
  byte bVar1;
  UAnimMontage *pUVar2;
  UCharacterMovementComponent *pUVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  bool bVar10;
  char cVar11;
  uchar uVar12;
  FAnimMontageInstance *this_00;
  UAnimMontage *pUVar13;
  UObject *pUVar14;
  FNetworkPredictionData_Client_Character *pFVar15;
  float fVar16;
  FName local_res8;
  FString local_58;
  undefined1 local_48 [16];
  double local_38;
  
  bVar10 = TWeakObjectPtr<UAnimMontage,FWeakObjectPtr>::UEOpEquals
                     (&this->RootMotionMontage,(void *)0x0);
  if (!bVar10) {
    if ((param_1->bClientResimulateRootMotion != '\0') &&
       (this_00 = ACharacter::GetRootMotionAnimMontageInstance(param_1),
       this_00 != (FAnimMontageInstance *)0x0)) {
      pUVar13 = (UAnimMontage *)FWeakObjectPtr::Get(&(this->RootMotionMontage).WeakPtr);
      pUVar2 = (this_00->Montage).field0_0x0.DebugPtr;
      if (pUVar2 == (UAnimMontage *)0x0) {
        bVar10 = pUVar13 == (UAnimMontage *)0x0;
      }
      else {
        bVar10 = pUVar2 == pUVar13;
      }
      if (bVar10) {
        (this->RootMotionMovement).bHasRootMotion = false;
        (this->RootMotionMovement).BlendWeight = 0.0;
        fVar16 = this_00->Position;
        this->RootMotionTrackPosition = fVar16;
        this->RootMotionPreviousTrackPosition = fVar16;
        pUVar14 = FWeakObjectPtr::Get(&(this->RootMotionMontage).WeakPtr);
        this->RootMotionPlayRateWithScale = *(float *)&pUVar14[4].field_0x8 * this_00->PlayRate;
        FAnimMontageInstance::SimulateAdvance
                  (this_00,this->DeltaTime,&this->RootMotionTrackPosition,&this->RootMotionMovement)
        ;
        this_00->Position = this->RootMotionTrackPosition;
        (this_00->MarkerTickRecord).PreviousMarker.MarkerIndex = -2;
        (this_00->MarkerTickRecord).NextMarker.MarkerIndex = -2;
        fVar16 = ACharacter::GetAnimRootMotionTranslationScale(param_1);
        local_38 = (double)fVar16;
        dVar9 = (this->RootMotionMovement).RootMotionTransform.Translation.ZW.m128d_f64[0];
        dVar8 = (this->RootMotionMovement).RootMotionTransform.Translation.ZW.m128d_f64[1] * 0.0;
        local_48._8_4_ = SUB84(local_38,0);
        local_48._0_8_ = local_38;
        local_48._12_4_ = (int)((ulonglong)local_38 >> 0x20);
        dVar6 = local_38 *
                (this->RootMotionMovement).RootMotionTransform.Translation.XY.m128d_f64[1];
        auVar5._8_4_ = SUB84(dVar6,0);
        auVar5._0_8_ = local_38 *
                       (this->RootMotionMovement).RootMotionTransform.Translation.XY.m128d_f64[0];
        auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
        *(undefined1 (*) [16])
         (this->RootMotionMovement).RootMotionTransform.Translation.XY.m128d_f64 = auVar5;
        auVar7._8_4_ = SUB84(dVar8,0);
        auVar7._0_8_ = local_38 * dVar9;
        auVar7._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
        *(undefined1 (*) [16])
         (this->RootMotionMovement).RootMotionTransform.Translation.ZW.m128d_f64 = auVar7;
      }
    }
    pUVar3 = (param_1->CharacterMovement).field0_0x0.DebugPtr;
    (pUVar3->RootMotionParams).bHasRootMotion = (this->RootMotionMovement).bHasRootMotion;
    (pUVar3->RootMotionParams).BlendWeight = (this->RootMotionMovement).BlendWeight;
    dVar6 = (this->RootMotionMovement).RootMotionTransform.Rotation.XY.m128d_f64[1];
    (pUVar3->RootMotionParams).RootMotionTransform.Rotation.XY.m128d_f64[0] =
         (this->RootMotionMovement).RootMotionTransform.Rotation.XY.m128d_f64[0];
    *(double *)((longlong)(pUVar3->RootMotionParams).RootMotionTransform.Rotation.XY.m128d_f64 + 8)
         = dVar6;
    dVar6 = (this->RootMotionMovement).RootMotionTransform.Rotation.ZW.m128d_f64[1];
    (pUVar3->RootMotionParams).RootMotionTransform.Rotation.ZW.m128d_f64[0] =
         (this->RootMotionMovement).RootMotionTransform.Rotation.ZW.m128d_f64[0];
    *(double *)((longlong)(pUVar3->RootMotionParams).RootMotionTransform.Rotation.ZW.m128d_f64 + 8)
         = dVar6;
    dVar6 = (this->RootMotionMovement).RootMotionTransform.Translation.XY.m128d_f64[1];
    (pUVar3->RootMotionParams).RootMotionTransform.Translation.XY.m128d_f64[0] =
         (this->RootMotionMovement).RootMotionTransform.Translation.XY.m128d_f64[0];
    *(double *)
     ((longlong)(pUVar3->RootMotionParams).RootMotionTransform.Translation.XY.m128d_f64 + 8) = dVar6
    ;
    dVar6 = (this->RootMotionMovement).RootMotionTransform.Translation.ZW.m128d_f64[1];
    (pUVar3->RootMotionParams).RootMotionTransform.Translation.ZW.m128d_f64[0] =
         (this->RootMotionMovement).RootMotionTransform.Translation.ZW.m128d_f64[0];
    *(double *)
     ((longlong)(pUVar3->RootMotionParams).RootMotionTransform.Translation.ZW.m128d_f64 + 8) = dVar6
    ;
    dVar6 = (this->RootMotionMovement).RootMotionTransform.Scale3D.XY.m128d_f64[1];
    (pUVar3->RootMotionParams).RootMotionTransform.Scale3D.XY.m128d_f64[0] =
         (this->RootMotionMovement).RootMotionTransform.Scale3D.XY.m128d_f64[0];
    *(double *)((longlong)(pUVar3->RootMotionParams).RootMotionTransform.Scale3D.XY.m128d_f64 + 8) =
         dVar6;
    dVar6 = (this->RootMotionMovement).RootMotionTransform.Scale3D.ZW.m128d_f64[1];
    (pUVar3->RootMotionParams).RootMotionTransform.Scale3D.ZW.m128d_f64[0] =
         (this->RootMotionMovement).RootMotionTransform.Scale3D.ZW.m128d_f64[0];
    *(double *)((longlong)(pUVar3->RootMotionParams).RootMotionTransform.Scale3D.ZW.m128d_f64 + 8) =
         dVar6;
  }
  bVar10 = FRootMotionSourceGroup::HasActiveRootMotionSources(&this->SavedRootMotion);
  if ((!bVar10) &&
     (bVar10 = FRootMotionSourceGroup::HasActiveRootMotionSources(&param_1->SavedRootMotion),
     !bVar10)) goto LAB_147855d47;
  if ((bool)param_1->bClientResimulateRootMotionSources) {
    if (6 < (byte)LogRootMotion._0_1_) {
      local_res8.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
      local_res8.Number = *(uint *)&param_1->field_0x1c;
      ::FName::ToString(&local_res8,&local_58);
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogRootMotion);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    FRootMotionSourceGroup::UpdateStateFrom(&this->SavedRootMotion,&param_1->SavedRootMotion,false);
    FRootMotionSourceGroup::CleanUpInvalidRootMotion
              (&this->SavedRootMotion,this->DeltaTime,param_1,
               (param_1->CharacterMovement).field0_0x0.DebugPtr);
    FRootMotionSourceGroup::PrepareRootMotion
              (&this->SavedRootMotion,this->DeltaTime,param_1,
               (param_1->CharacterMovement).field0_0x0.DebugPtr,false);
  }
  else {
    pUVar3 = (param_1->CharacterMovement).field0_0x0.DebugPtr;
    pFVar15 = pUVar3->ClientPredictionData;
    if (pFVar15 == (FNetworkPredictionData_Client_Character *)0x0) {
      pFVar15 = (FNetworkPredictionData_Client_Character *)
                (**(code **)(*(longlong *)&pUVar3->field_0x198 + 0x28))();
      pUVar3->ClientPredictionData = pFVar15;
      if (pFVar15 == (FNetworkPredictionData_Client_Character *)0x0) goto LAB_147855d2d;
    }
    if (((pFVar15->SavedMoves).ArrayNum < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (*(FSavedMove_Character **)(pFVar15->SavedMoves).AllocatorInstance.Data != this) {
      pUVar3 = (param_1->CharacterMovement).field0_0x0.DebugPtr;
      FRootMotionSourceGroup::CleanUpInvalidRootMotion
                (&pUVar3->CurrentRootMotion,this->DeltaTime,param_1,pUVar3);
    }
  }
LAB_147855d2d:
  FRootMotionSourceGroup::operator=
            (&((param_1->CharacterMovement).field0_0x0.DebugPtr)->CurrentRootMotion,
             &this->SavedRootMotion);
LAB_147855d47:
  pUVar3 = (param_1->CharacterMovement).field0_0x0.DebugPtr;
  bVar1 = pUVar3->field_0x2f9;
  pUVar3->field_0x2f9 = (bVar1 ^ this->field_0x10) & 4 ^ bVar1;
  if ((CharacterMovementCVars::bResetJumpStateDuringResimIfNotFalling == false) ||
     (cVar11 = (**(code **)(*(longlong *)
                             &((param_1->CharacterMovement).field0_0x0.DebugPtr)->field_0x128 + 0xd8
                           ))(), cVar11 != '\0')) {
    param_1->field_0x461 =
         ((byte)this->field_0x10 >> 2 ^ param_1->field_0x461) & 8 ^ param_1->field_0x461;
    param_1->JumpKeyHoldTime = this->JumpKeyHoldTime;
    param_1->JumpForceTimeRemaining = this->JumpForceTimeRemaining;
    param_1->JumpMaxCount = this->JumpMaxCount;
    param_1->JumpCurrentCount = this->JumpCurrentCount;
    param_1->JumpCurrentCountPreJump = this->JumpCurrentCount;
  }
  else {
    (**(code **)(*(longlong *)param_1 + 0x918))(param_1);
  }
  uVar12 = (**(code **)(*(longlong *)(param_1->CharacterMovement).field0_0x0.DebugPtr + 0x668))();
  this->StartPackedMovementMode = uVar12;
  return;
}

// SetInitialPosition @ 14786b2e0

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
FSavedMove_Character::SetInitialPosition(FSavedMove_Character *this,ACharacter *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  UCharacterMovementComponent *pUVar3;
  UPrimitiveComponent *pUVar4;
  FName FVar5;
  UCapsuleComponent *pUVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  double dVar13;
  FFindFloorResult *pFVar14;
  FFindFloorResult *pFVar15;
  bool bVar16;
  TVector<double>_u_0 *pTVar17;
  FFindFloorResult *pFVar18;
  TRotator<double> *pTVar19;
  byte bVar20;
  FFindFloorResult *pFVar21;
  longlong lVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined8 uVar27;
  UPrimitiveComponent *local_res8;
  TVector<double>_u_0 local_68 [4];
  
  lVar22 = *(longlong *)&param_1->field_0x1b8;
  uVar23 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  uVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  uVar25 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uVar26 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  uVar27 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (lVar22 != 0) {
    uVar23 = *(undefined4 *)(lVar22 + 0x210);
    uVar24 = *(undefined4 *)(lVar22 + 0x214);
    uVar25 = *(undefined4 *)(lVar22 + 0x218);
    uVar26 = *(undefined4 *)(lVar22 + 0x21c);
    uVar27 = *(double *)(lVar22 + 0x220);
  }
  *(undefined4 *)&(this->StartLocation).field0_0x0 = uVar23;
  *(undefined4 *)((longlong)&(this->StartLocation).field0_0x0 + 4) = uVar24;
  *(undefined4 *)((longlong)&(this->StartLocation).field0_0x0 + 8) = uVar25;
  *(undefined4 *)((longlong)&(this->StartLocation).field0_0x0 + 0xc) = uVar26;
  (this->StartLocation).field0_0x0._s_0.Z = (double)uVar27;
  if (*(USceneComponent **)&param_1->field_0x1b8 == (USceneComponent *)0x0) {
    pTVar17 = local_68;
    local_68[0]._s_0.X = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    local_68[0]._s_0.Y = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    local_68[0]._s_0.Z = UE::Math::TRotator<double>::ZeroRotator.Roll;
  }
  else {
    pTVar17 = (TVector<double>_u_0 *)
              USceneComponent::GetComponentRotation
                        (*(USceneComponent **)&param_1->field_0x1b8,
                         (TRotator<double> *)&local_68[0]._s_0);
  }
  dVar7 = (pTVar17->_s_0).Y;
  (this->StartRotation).Pitch = (pTVar17->_s_0).X;
  (this->StartRotation).Yaw = dVar7;
  (this->StartRotation).Roll = (pTVar17->_s_0).Z;
  pUVar3 = (param_1->CharacterMovement).field0_0x0.DebugPtr;
  dVar7 = *(double *)&pUVar3->field_0xe0;
  (this->StartVelocity).field0_0x0._s_0.X = *(double *)&pUVar3->field_0xd8;
  (this->StartVelocity).field0_0x0._s_0.Y = dVar7;
  (this->StartVelocity).field0_0x0._s_0.Z = *(double *)&pUVar3->field_0xe8;
  pUVar4 = (param_1->BasedMovement).MovementBase.field0_0x0.DebugPtr;
  local_res8 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UPrimitiveComponent *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  FWeakObjectPtr::operator=(&(this->StartBase).WeakPtr,(FObjectPtr)&local_res8);
  dVar7 = UE::Math::TQuat<double>::Identity.Y;
  (this->StartBaseRotation).X = UE::Math::TQuat<double>::Identity.X;
  (this->StartBaseRotation).Y = dVar7;
  dVar7 = UE::Math::TQuat<double>::Identity.W;
  lVar22 = 2;
  (this->StartBaseRotation).Z = UE::Math::TQuat<double>::Identity.Z;
  (this->StartBaseRotation).W = dVar7;
  pFVar14 = &((param_1->CharacterMovement).field0_0x0.DebugPtr)->CurrentFloor;
  pFVar15 = &this->StartFloor;
  do {
    pFVar21 = pFVar15;
    pFVar18 = pFVar14;
    pFVar15 = (FFindFloorResult *)&(pFVar21->HitResult).TraceStart;
    fVar10 = pFVar18->FloorDist;
    fVar11 = pFVar18->LineDist;
    iVar12 = pFVar18->_padding_;
    pFVar14 = (FFindFloorResult *)&(pFVar18->HitResult).TraceStart;
    *(undefined4 *)&pFVar21->field_0x0 = *(undefined4 *)&pFVar18->field_0x0;
    pFVar21->FloorDist = fVar10;
    pFVar21->LineDist = fVar11;
    pFVar21->_padding_ = iVar12;
    fVar10 = (pFVar18->HitResult).Time;
    fVar11 = (pFVar18->HitResult).Distance;
    iVar12 = (pFVar18->HitResult)._padding_;
    (pFVar21->HitResult).FaceIndex = (pFVar18->HitResult).FaceIndex;
    (pFVar21->HitResult).Time = fVar10;
    (pFVar21->HitResult).Distance = fVar11;
    (pFVar21->HitResult)._padding_ = iVar12;
    uVar27 = *(undefined8 *)&(pFVar18->HitResult).Location.field_0x8;
    *(undefined8 *)&(pFVar21->HitResult).Location = *(undefined8 *)&(pFVar18->HitResult).Location;
    *(undefined8 *)&(pFVar21->HitResult).Location.field_0x8 = uVar27;
    uVar27 = *(undefined8 *)&(pFVar18->HitResult).ImpactPoint;
    *(undefined8 *)&(pFVar21->HitResult).Location.field_0x10 =
         *(undefined8 *)&(pFVar18->HitResult).Location.field_0x10;
    *(undefined8 *)&(pFVar21->HitResult).ImpactPoint = uVar27;
    uVar27 = *(undefined8 *)&(pFVar18->HitResult).ImpactPoint.field_0x10;
    *(undefined8 *)&(pFVar21->HitResult).ImpactPoint.field_0x8 =
         *(undefined8 *)&(pFVar18->HitResult).ImpactPoint.field_0x8;
    *(undefined8 *)&(pFVar21->HitResult).ImpactPoint.field_0x10 = uVar27;
    uVar27 = *(undefined8 *)&(pFVar18->HitResult).Normal.field_0x8;
    *(undefined8 *)&(pFVar21->HitResult).Normal = *(undefined8 *)&(pFVar18->HitResult).Normal;
    *(undefined8 *)&(pFVar21->HitResult).Normal.field_0x8 = uVar27;
    uVar27 = *(undefined8 *)&(pFVar18->HitResult).ImpactNormal;
    *(undefined8 *)&(pFVar21->HitResult).Normal.field_0x10 =
         *(undefined8 *)&(pFVar18->HitResult).Normal.field_0x10;
    *(undefined8 *)&(pFVar21->HitResult).ImpactNormal = uVar27;
    uVar27 = *(undefined8 *)&(pFVar18->HitResult).ImpactNormal.field_0x10;
    *(undefined8 *)&(pFVar21->HitResult).ImpactNormal.field_0x8 =
         *(undefined8 *)&(pFVar18->HitResult).ImpactNormal.field_0x8;
    *(undefined8 *)&(pFVar21->HitResult).ImpactNormal.field_0x10 = uVar27;
    lVar22 = lVar22 + -1;
  } while (lVar22 != 0);
  uVar27 = *(undefined8 *)&(pFVar18->HitResult).TraceStart.field_0x8;
  *(undefined8 *)pFVar15 = *(undefined8 *)pFVar14;
  *(undefined8 *)&(pFVar21->HitResult).TraceStart.field_0x8 = uVar27;
  this->CustomTimeDilation = *(float *)&param_1->field_0x68;
  this->StartBoneName = (param_1->BasedMovement).BoneName;
  this->StartActorOverlapCounter = param_1->NumActorOverlapEventsCounter;
  this->StartComponentOverlapCounter = UPrimitiveComponent::GlobalOverlapEventsCounter;
  bVar16 = MovementBaseUtility::IsDynamicBase(pUVar4);
  if (bVar16) {
    dVar7 = *(double *)&(param_1->BasedMovement).Location.field_0x8;
    FVar5 = this->StartBoneName;
    (this->StartRelativeLocation).field0_0x0._s_0.X = *(double *)&(param_1->BasedMovement).Location;
    (this->StartRelativeLocation).field0_0x0._s_0.Y = dVar7;
    (this->StartRelativeLocation).field0_0x0._s_0.Z =
         *(double *)&(param_1->BasedMovement).Location.field_0x10;
    MovementBaseUtility::GetMovementBaseTransform
              (pUVar4,FVar5,(TVector<double> *)&local_68[0]._s_0,&this->StartBaseRotation);
  }
  lVar22 = *(longlong *)&((param_1->CharacterMovement).field0_0x0.DebugPtr)->field_0xc0;
  if (lVar22 != 0) {
    local_res8 = *(UPrimitiveComponent **)(lVar22 + 0xd0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res8 != (UPrimitiveComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    FWeakObjectPtr::operator=(&(this->StartAttachParent).WeakPtr,(FObjectPtr)&local_res8);
    this->StartAttachSocketName = *(FName *)(lVar22 + 0xd8);
    dVar7 = *(double *)(lVar22 + 0x150);
    (this->StartAttachRelativeLocation).field0_0x0._s_0.X = *(double *)(lVar22 + 0x148);
    (this->StartAttachRelativeLocation).field0_0x0._s_0.Y = dVar7;
    (this->StartAttachRelativeLocation).field0_0x0._s_0.Z = *(double *)(lVar22 + 0x158);
    dVar7 = *(double *)(lVar22 + 0x168);
    (this->StartAttachRelativeRotation).Pitch = *(double *)(lVar22 + 0x160);
    (this->StartAttachRelativeRotation).Yaw = dVar7;
    (this->StartAttachRelativeRotation).Roll = *(double *)(lVar22 + 0x170);
  }
  pTVar19 = APawn::GetControlRotation((APawn *)param_1,(TRotator<double> *)&local_68[0]._s_0);
  dVar13 = __real_4076800000000000;
  dVar7 = FGenericPlatformMath::Fmod(pTVar19->Roll,__real_4076800000000000);
  if (dVar7 < 0.0) {
    dVar7 = dVar7 + dVar13;
  }
  dVar8 = FGenericPlatformMath::Fmod(pTVar19->Yaw,dVar13);
  if (dVar8 < 0.0) {
    dVar8 = dVar8 + dVar13;
  }
  dVar9 = FGenericPlatformMath::Fmod(pTVar19->Pitch,dVar13);
  if (dVar9 < 0.0) {
    dVar9 = dVar9 + dVar13;
  }
  (this->StartControlRotation).Pitch = dVar9;
  (this->StartControlRotation).Yaw = dVar8;
  (this->StartControlRotation).Roll = dVar7;
  pUVar6 = (param_1->CapsuleComponent).field0_0x0.DebugPtr;
  uVar1 = pUVar6->_padding_;
  uVar2 = pUVar6->_padding_;
  uVar23 = (int)uVar2;
  uVar24 = (int)((ulonglong)uVar2 >> 0x20);
  if ((double)uVar1 <= (double)uVar2) {
    uVar23 = (int)uVar1;
    uVar24 = (int)((ulonglong)uVar1 >> 0x20);
  }
  this->StartCapsuleRadius = (float)(double)CONCAT44(uVar24,uVar23) * pUVar6->CapsuleRadius;
  this->StartCapsuleHalfHeight = (float)(double)pUVar6->_padding_ * pUVar6->CapsuleHalfHeight;
  bVar20 = (param_1->bPressedJump ^ this->bPressedJump) & 1 ^ this->field_0x10;
  this->field_0x10 = bVar20;
  this->field_0x10 = (param_1->field_0x461 << 2 ^ bVar20) & 0x20 ^ bVar20;
  this->JumpKeyHoldTime = param_1->JumpKeyHoldTime;
  this->JumpForceTimeRemaining = param_1->JumpForceTimeRemaining;
  this->JumpMaxCount = param_1->JumpMaxCount;
  return;
}

// SetMoveFor @ 14786c410

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
FSavedMove_Character::SetMoveFor
          (FSavedMove_Character *this,ACharacter *param_1,float param_2,TVector<double> *param_3,
          FNetworkPredictionData_Client_Character *param_4)

{
  double dVar1;
  double dVar2;
  UCharacterMovementComponent *pUVar3;
  uchar uVar4;
  bool bVar5;
  double *pdVar6;
  FAnimMontageInstance *pFVar7;
  byte bVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  float fVar13;
  TVector<double>_u_0 local_48;
  undefined1 local_28 [32];
  
  this->DeltaTime = param_2;
  this->CharacterOwner = param_1;
  (**(code **)(*(longlong *)this + 0x18))();
  fVar9 = __real_322bcc77;
  dVar1 = (param_3->field0_0x0)._s_0.X;
  dVar12 = (param_3->field0_0x0)._s_0.Y;
  dVar2 = (param_3->field0_0x0)._s_0.Z;
  auVar10._0_8_ = dVar1 * dVar1;
  auVar10._8_8_ = 0;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = dVar12 * dVar12 + auVar10._0_8_ + dVar2 * dVar2;
  auVar11 = sqrtpd(auVar10,auVar11);
  fVar13 = (float)auVar11._0_8_;
  this->AccelMag = fVar13;
  if (fVar13 <= fVar9) {
    local_48._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_48._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_48._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    dVar12 = __real_3ff0000000000000 / (double)fVar13;
    local_48._s_0.Z = dVar12 * (param_3->field0_0x0)._s_0.Z;
    dVar1 = dVar12 * (param_3->field0_0x0)._s_0.Y;
    local_48._8_4_ = SUB84(dVar1,0);
    local_48._s_0.X = dVar12 * (param_3->field0_0x0)._s_0.X;
    local_48._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  }
  (this->AccelNormal).field0_0x0._s_0.X = local_48._s_0.X;
  (this->AccelNormal).field0_0x0._s_0.Y = local_48._s_0.Y;
  (this->AccelNormal).field0_0x0._s_0.Z = local_48._s_0.Z;
  pUVar3 = (param_1->CharacterMovement).field0_0x0.DebugPtr;
  local_48._0_16_ = *(undefined1 (*) [16])&param_3->field0_0x0;
  local_48._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  pdVar6 = (double *)(**(code **)(*(longlong *)pUVar3 + 0xa88))(pUVar3,local_28,&local_48);
  dVar1 = pdVar6[1];
  (this->Acceleration).field0_0x0._s_0.X = *pdVar6;
  (this->Acceleration).field0_0x0._s_0.Y = dVar1;
  (this->Acceleration).field0_0x0._s_0.Z = pdVar6[2];
  fVar9 = (float)(**(code **)(*(longlong *)(param_1->CharacterMovement).field0_0x0.DebugPtr + 0x500)
                 )();
  this->MaxSpeed = fVar9;
  this->JumpCurrentCount = param_1->JumpCurrentCountPreJump;
  bVar8 = ((byte)((param_1->CharacterMovement).field0_0x0.DebugPtr)->field_0x565 >> 4 ^
          this->field_0x10) & 2 ^ this->field_0x10;
  this->field_0x10 = bVar8;
  this->field_0x10 =
       (bVar8 ^ ((param_1->CharacterMovement).field0_0x0.DebugPtr)->field_0x2f9) & 4 ^ bVar8;
  uVar4 = (**(code **)(*(longlong *)(param_1->CharacterMovement).field0_0x0.DebugPtr + 0x668))();
  this->StartPackedMovementMode = uVar4;
  this->MovementMode = uVar4;
  bVar5 = FRootMotionSourceGroup::HasActiveRootMotionSources
                    (&((param_1->CharacterMovement).field0_0x0.DebugPtr)->CurrentRootMotion);
  if (bVar5) {
    this->bForceNoCombine = '\x01';
  }
  pFVar7 = ACharacter::GetRootMotionAnimMontageInstance(param_1);
  if (pFVar7 != (FAnimMontageInstance *)0x0) {
    this->bForceNoCombine = '\x01';
  }
  pUVar3 = (param_1->CharacterMovement).field0_0x0.DebugPtr;
  if ((((pUVar3->PendingLaunchVelocity).field0_0x0._s_0.X != 0.0) ||
      ((pUVar3->PendingLaunchVelocity).field0_0x0._s_0.Y != 0.0)) ||
     ((pUVar3->PendingLaunchVelocity).field0_0x0._s_0.Z != 0.0)) {
    this->bForceNoCombine = '\x01';
  }
  this->TimeStamp = param_4->CurrentTimeStamp;
  return;
}

