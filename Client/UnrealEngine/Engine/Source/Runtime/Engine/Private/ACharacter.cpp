// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 193

// ACharacter @ 1476e6950

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

ACharacter * __thiscall ACharacter::ACharacter(ACharacter *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  APawn::APawn((APawn *)this,param_1);
  *(undefined ***)this = &_vftable__for__AActor__;
  (this->BasedMovement).bServerHasBaseComponent = '\0';
  (this->BasedMovement).bServerHasVelocity = '\0';
  (this->BasedMovement).bRelativeRotation = '\0';
  (this->ReplicatedBasedMovement).bServerHasBaseComponent = '\0';
  (this->ReplicatedBasedMovement).bServerHasVelocity = '\0';
  (this->ReplicatedBasedMovement).bRelativeRotation = '\0';
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__INavAgentInterface__;
  (this->Mesh).field0_0x0.DebugPtr = (USkeletalMeshComponent *)0x0;
  (this->CharacterMovement).field0_0x0.DebugPtr = (UCharacterMovementComponent *)0x0;
  (this->CapsuleComponent).field0_0x0.DebugPtr = (UCapsuleComponent *)0x0;
  (this->BasedMovement).BaseID = 0;
  (this->BasedMovement).BoneName.ComparisonIndex = 0;
  (this->BasedMovement).BoneName.Number = 0;
  (this->BasedMovement).MovementBase.field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  (this->BasedMovement).Rotation.Pitch = 0.0;
  (this->BasedMovement).Rotation.Yaw = 0.0;
  (this->BasedMovement).Rotation.Roll = 0.0;
  (this->ReplicatedBasedMovement).BaseID = 0;
  (this->ReplicatedBasedMovement).BoneName.ComparisonIndex = 0;
  (this->ReplicatedBasedMovement).BoneName.Number = 0;
  (this->ReplicatedBasedMovement).MovementBase.field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  (this->ReplicatedBasedMovement).Rotation.Pitch = 0.0;
  (this->ReplicatedBasedMovement).Rotation.Yaw = 0.0;
  (this->ReplicatedBasedMovement).Rotation.Roll = 0.0;
  *(undefined8 *)&this->OnReachedJumpApex = 0;
  *(undefined8 *)&(this->OnReachedJumpApex).field_0x8 = 0;
  *(undefined8 *)&(this->OnReachedJumpApex).field_0x10 = 0;
  *(undefined8 *)&this->LandedDelegate = 0;
  *(undefined8 *)&(this->LandedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->LandedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->MovementModeChangedDelegate = 0;
  *(undefined8 *)&(this->MovementModeChangedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->MovementModeChangedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnCharacterMovementUpdated = 0;
  *(undefined8 *)&(this->OnCharacterMovementUpdated).field_0x8 = 0;
  *(undefined8 *)&(this->OnCharacterMovementUpdated).field_0x10 = 0;
  FRootMotionSourceGroup::FRootMotionSourceGroup(&this->SavedRootMotion);
  (this->ClientRootMotionParams).bHasRootMotion = false;
  (this->ClientRootMotionParams).BlendWeight = 0.0;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->ClientRootMotionParams).RootMotionTransform.Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->ClientRootMotionParams).RootMotionTransform.Rotation.XY.m128d_f64[1] = (double)fVar2;
  (this->ClientRootMotionParams).RootMotionTransform.Rotation.ZW.m128d_f64[0] = (double)fVar3;
  (this->ClientRootMotionParams).RootMotionTransform.Rotation.ZW.m128d_f64[1] = (double)fVar4;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->ClientRootMotionParams).RootMotionTransform.Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->ClientRootMotionParams).RootMotionTransform.Translation.XY.m128d_f64[1] = (double)fVar2;
  (this->ClientRootMotionParams).RootMotionTransform.Translation.ZW.m128d_f64[0] = (double)fVar3;
  (this->ClientRootMotionParams).RootMotionTransform.Translation.ZW.m128d_f64[1] = (double)fVar4;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->ClientRootMotionParams).RootMotionTransform.Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->ClientRootMotionParams).RootMotionTransform.Scale3D.XY.m128d_f64[1] = (double)fVar2;
  (this->ClientRootMotionParams).RootMotionTransform.Scale3D.ZW.m128d_f64[0] = (double)fVar3;
  (this->ClientRootMotionParams).RootMotionTransform.Scale3D.ZW.m128d_f64[1] = (double)fVar4;
  (this->RootMotionRepMoves).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootMotionRepMoves).ArrayNum = 0;
  (this->RootMotionRepMoves).ArrayMax = 0;
  (this->RepRootMotion).Animation.field0_0x0.DebugPtr = (UAnimSequenceBase *)0x0;
  (this->RepRootMotion).bIsActive = false;
  (this->RepRootMotion).bRelativePosition = false;
  (this->RepRootMotion).bRelativeRotation = false;
  (this->RepRootMotion).Position = 0.0;
  (this->RepRootMotion).Rotation.Pitch = 0.0;
  (this->RepRootMotion).Rotation.Yaw = 0.0;
  (this->RepRootMotion).Rotation.Roll = 0.0;
  (this->RepRootMotion).MovementBase.field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  (this->RepRootMotion).MovementBaseBoneName.ComparisonIndex = 0;
  (this->RepRootMotion).MovementBaseBoneName.Number = 0;
  FRootMotionSourceGroup::FRootMotionSourceGroup(&(this->RepRootMotion).AuthoritativeRootMotion);
  return this;
}

// ACharacter @ 1476e6b30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ACharacter * __thiscall ACharacter::ACharacter(ACharacter *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  byte *pbVar2;
  longlong lVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  FName FVar14;
  UClass *pUVar15;
  UCapsuleComponent *pUVar16;
  UCharacterMovementComponent *pUVar17;
  USkeletalMeshComponent *pUVar18;
  float fVar19;
  
  APawn::APawn((APawn *)this,param_1);
  *(undefined ***)this = &_vftable__for__AActor__;
  (this->BasedMovement).bServerHasBaseComponent = '\0';
  (this->BasedMovement).bServerHasVelocity = '\0';
  (this->BasedMovement).bRelativeRotation = '\0';
  (this->ReplicatedBasedMovement).bServerHasBaseComponent = '\0';
  (this->ReplicatedBasedMovement).bServerHasVelocity = '\0';
  (this->ReplicatedBasedMovement).bRelativeRotation = '\0';
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__INavAgentInterface__;
  (this->Mesh).field0_0x0.DebugPtr = (USkeletalMeshComponent *)0x0;
  (this->CharacterMovement).field0_0x0.DebugPtr = (UCharacterMovementComponent *)0x0;
  (this->CapsuleComponent).field0_0x0.DebugPtr = (UCapsuleComponent *)0x0;
  (this->BasedMovement).BaseID = 0;
  (this->BasedMovement).BoneName.ComparisonIndex = 0;
  (this->BasedMovement).BoneName.Number = 0;
  (this->BasedMovement).MovementBase.field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  (this->BasedMovement).Rotation.Pitch = 0.0;
  (this->BasedMovement).Rotation.Yaw = 0.0;
  (this->BasedMovement).Rotation.Roll = 0.0;
  (this->ReplicatedBasedMovement).BaseID = 0;
  (this->ReplicatedBasedMovement).BoneName.ComparisonIndex = 0;
  (this->ReplicatedBasedMovement).BoneName.Number = 0;
  (this->ReplicatedBasedMovement).MovementBase.field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  (this->ReplicatedBasedMovement).Rotation.Pitch = 0.0;
  (this->ReplicatedBasedMovement).Rotation.Yaw = 0.0;
  (this->ReplicatedBasedMovement).Rotation.Roll = 0.0;
  *(undefined8 *)&this->OnReachedJumpApex = 0;
  *(undefined8 *)&(this->OnReachedJumpApex).field_0x8 = 0;
  *(undefined8 *)&(this->OnReachedJumpApex).field_0x10 = 0;
  *(undefined8 *)&this->LandedDelegate = 0;
  *(undefined8 *)&(this->LandedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->LandedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->MovementModeChangedDelegate = 0;
  *(undefined8 *)&(this->MovementModeChangedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->MovementModeChangedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnCharacterMovementUpdated = 0;
  *(undefined8 *)&(this->OnCharacterMovementUpdated).field_0x8 = 0;
  *(undefined8 *)&(this->OnCharacterMovementUpdated).field_0x10 = 0;
  FRootMotionSourceGroup::FRootMotionSourceGroup(&this->SavedRootMotion);
  (this->ClientRootMotionParams).bHasRootMotion = false;
  (this->ClientRootMotionParams).BlendWeight = 0.0;
  fVar19 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ClientRootMotionParams).RootMotionTransform.Rotation.XY.m128d_f64 =
       auVar5;
  auVar6._8_4_ = SUB84((double)fVar4,0);
  auVar6._0_8_ = (double)fVar19;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(this->ClientRootMotionParams).RootMotionTransform.Rotation.ZW.m128d_f64 =
       auVar6;
  fVar19 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ClientRootMotionParams).RootMotionTransform.Translation.XY.m128d_f64
       = auVar7;
  auVar8._8_4_ = SUB84((double)fVar4,0);
  auVar8._0_8_ = (double)fVar19;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(this->ClientRootMotionParams).RootMotionTransform.Translation.ZW.m128d_f64
       = auVar8;
  fVar19 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar9._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar9._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ClientRootMotionParams).RootMotionTransform.Scale3D.XY.m128d_f64 =
       auVar9;
  auVar10._8_4_ = SUB84((double)fVar4,0);
  auVar10._0_8_ = (double)fVar19;
  auVar10._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(this->ClientRootMotionParams).RootMotionTransform.Scale3D.ZW.m128d_f64 =
       auVar10;
  (this->RootMotionRepMoves).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootMotionRepMoves).ArrayNum = 0;
  (this->RootMotionRepMoves).ArrayMax = 0;
  (this->RepRootMotion).Animation.field0_0x0.DebugPtr = (UAnimSequenceBase *)0x0;
  (this->RepRootMotion).bIsActive = false;
  (this->RepRootMotion).bRelativePosition = false;
  (this->RepRootMotion).bRelativeRotation = false;
  (this->RepRootMotion).Position = 0.0;
  (this->RepRootMotion).Rotation.Pitch = 0.0;
  (this->RepRootMotion).Rotation.Yaw = 0.0;
  (this->RepRootMotion).Rotation.Roll = 0.0;
  (this->RepRootMotion).MovementBase.field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  (this->RepRootMotion).MovementBaseBoneName.ComparisonIndex = 0;
  (this->RepRootMotion).MovementBaseBoneName.Number = 0;
  FRootMotionSourceGroup::FRootMotionSourceGroup(&(this->RepRootMotion).AuthoritativeRootMotion);
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar3 + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::ConstructorStatics.ID_Characters,L"Characters");
      FText::AsLocalizable_Advanced_LocText
                (&::ConstructorStatics.NAME_Characters,L"SpriteCategory",L"Characters",L"Characters"
                );
      atexit(`ACharacter::ACharacter'::__l2::_dynamic_atexit_destructor_for__ConstructorStatics__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(uint *)&this->field_0x2c8 = *(uint *)&this->field_0x2c8 & 0xfffffffa;
  *(uint *)&this->field_0x2c8 = *(uint *)&this->field_0x2c8 | 2;
  FVar14 = CapsuleComponentName;
  pUVar15 = Z_Construct_UClass_UCapsuleComponent_NoRegister();
  pUVar16 = (UCapsuleComponent *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar14,pUVar15,pUVar15,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar16 != (UCapsuleComponent *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar16);
  }
  (this->CapsuleComponent).field0_0x0.DebugPtr = pUVar16;
  pUVar16->CapsuleRadius = 34.0;
  pUVar16->CapsuleHalfHeight = 88.0;
  (**(code **)(pUVar16->_padding_ + 0x788))(pUVar16,UCollisionProfile::Pawn_ProfileName,1);
  *(undefined1 *)((longlong)&((this->CapsuleComponent).field0_0x0.DebugPtr)->_padding_ + 7) = 0;
  USceneComponent::SetShouldUpdatePhysicsVolume
            ((USceneComponent *)(this->CapsuleComponent).field0_0x0.DebugPtr,true);
  UActorComponent::SetCanEverAffectNavigation
            ((UActorComponent *)(this->CapsuleComponent).field0_0x0.DebugPtr,false);
  pbVar2 = (byte *)((longlong)&((this->CapsuleComponent).field0_0x0.DebugPtr)->_padding_ + 4);
  *pbVar2 = *pbVar2 | 4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar16 = (this->CapsuleComponent).field0_0x0.DebugPtr, pUVar16 != (UCapsuleComponent *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar16);
  }
  *(TObjectPtr<UCapsuleComponent>_u_0 *)&this->field_0x1b8 = (this->CapsuleComponent).field0_0x0;
  this->JumpKeyHoldTime = 0.0;
  this->JumpMaxHoldTime = 0.0;
  this->bClientCheckEncroachmentOnNetUpdate = '\x01';
  this->bWasJumping = '\0';
  this->JumpMaxCount = 1;
  this->JumpCurrentCount = 0;
  this->JumpCurrentCountPreJump = 0;
  this->AnimRootMotionTranslationScale = 1.0;
  FVar14 = CharacterMovementComponentName;
  pUVar15 = Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
  pUVar17 = (UCharacterMovementComponent *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar14,pUVar15,pUVar15,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (pUVar17 == (UCharacterMovementComponent *)0x0)) {
    (this->CharacterMovement).field0_0x0.DebugPtr = pUVar17;
    if (pUVar17 != (UCharacterMovementComponent *)0x0) goto LAB_1476e6e92;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar17);
    (this->CharacterMovement).field0_0x0.DebugPtr = pUVar17;
LAB_1476e6e92:
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar16 = (this->CapsuleComponent).field0_0x0.DebugPtr, pUVar16 != (UCapsuleComponent *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)pUVar16);
    }
    *(TObjectPtr<UCapsuleComponent>_u_0 *)&pUVar17->field_0xc0 = (this->CapsuleComponent).field0_0x0
    ;
  }
  pUVar17 = (this->CharacterMovement).field0_0x0.DebugPtr;
  if (pUVar17 != (UCharacterMovementComponent *)0x0) {
    fVar19 = UCharacterMovementComponent::GetCrouchedHalfHeight(pUVar17);
    this->CrouchedEyeHeight = fVar19 * __real_3f4ccccd;
  }
  FVar14 = MeshComponentName;
  pUVar15 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
  pUVar18 = (USkeletalMeshComponent *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar14,pUVar15,pUVar15,false,false);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (pUVar18 == (USkeletalMeshComponent *)0x0)) {
    (this->Mesh).field0_0x0.DebugPtr = pUVar18;
    if (pUVar18 == (USkeletalMeshComponent *)0x0) goto LAB_1476e6fed;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar18);
    (this->Mesh).field0_0x0.DebugPtr = pUVar18;
  }
  pbVar2 = (byte *)((longlong)&pUVar18->_padding_ + 1);
  *pbVar2 = *pbVar2 | 4;
  pbVar2 = (byte *)((longlong)&((this->Mesh).field0_0x0.DebugPtr)->_padding_ + 1);
  *pbVar2 = *pbVar2 | 8;
  pbVar2 = (byte *)((longlong)&((this->Mesh).field0_0x0.DebugPtr)->_padding_ + 5);
  *pbVar2 = *pbVar2 & 0xfe;
  *(undefined1 *)((longlong)&((this->Mesh).field0_0x0.DebugPtr)->_padding_ + 4) = 1;
  pbVar2 = (byte *)((longlong)&((this->Mesh).field0_0x0.DebugPtr)->_padding_ + 6);
  *pbVar2 = *pbVar2 | 0x20;
  pbVar2 = (byte *)((longlong)&((this->Mesh).field0_0x0.DebugPtr)->_padding_ + 6);
  *pbVar2 = *pbVar2 | 4;
  *(undefined1 *)&((this->Mesh).field0_0x0.DebugPtr)->_padding_ = 0;
  USceneComponent::SetupAttachment
            ((USceneComponent *)(this->Mesh).field0_0x0.DebugPtr,
             (USceneComponent *)(this->CapsuleComponent).field0_0x0.DebugPtr,(FName)0x0);
  if (*(int *)(lVar3 + 0x9d4c) < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      ::FName::FName(&MeshCollisionProfileName,L"CharacterMesh");
      _Init_thread_footer(&::_TSS1);
    }
  }
  pUVar18 = (this->Mesh).field0_0x0.DebugPtr;
  (**(code **)(pUVar18->_padding_ + 0x788))(pUVar18,MeshCollisionProfileName,1);
  UPrimitiveComponent::SetGenerateOverlapEvents
            ((UPrimitiveComponent *)(this->Mesh).field0_0x0.DebugPtr,false);
  UActorComponent::SetCanEverAffectNavigation
            ((UActorComponent *)(this->Mesh).field0_0x0.DebugPtr,false);
LAB_1476e6fed:
  dVar11 = UE::Math::TQuat<double>::Identity.Y;
  (this->BaseRotationOffset).X = UE::Math::TQuat<double>::Identity.X;
  (this->BaseRotationOffset).Y = dVar11;
  dVar11 = UE::Math::TQuat<double>::Identity.W;
  (this->BaseRotationOffset).Z = UE::Math::TQuat<double>::Identity.Z;
  (this->BaseRotationOffset).W = dVar11;
  uVar13 = UCharacterMovementComponent::DefaultGravityDirection.field0_0x0._s_0.Z;
  uVar12 = UCharacterMovementComponent::DefaultGravityDirection.field0_0x0._s_0.Y;
  *(double *)&this->ReplicatedGravityDirection =
       UCharacterMovementComponent::DefaultGravityDirection.field0_0x0._s_0.X;
  *(undefined8 *)&(this->ReplicatedGravityDirection).field_0x8 = uVar12;
  *(undefined8 *)&(this->ReplicatedGravityDirection).field_0x10 = uVar13;
  return this;
}

// ~ACharacter @ 1476e8b30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ACharacter::~ACharacter(ACharacter *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  *(undefined ***)this = &_vftable__for__AActor__;
  (this->RepRootMotion).AuthoritativeRootMotion._padding_ =
       (longlong)&___7FRootMotionSourceGroup__6B_;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__INavAgentInterface__;
  DestructItems<TSharedPtr<FRootMotionSource,1>,int>
            ((TSharedPtr<FRootMotionSource,1> *)
             (this->RepRootMotion).AuthoritativeRootMotion.PendingAddRootMotionSources.
             AllocatorInstance.Data,
             (this->RepRootMotion).AuthoritativeRootMotion.PendingAddRootMotionSources.ArrayNum);
  pFVar1 = (this->RepRootMotion).AuthoritativeRootMotion.PendingAddRootMotionSources.
           AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<FRootMotionSource,1>,int>
            ((TSharedPtr<FRootMotionSource,1> *)
             (this->RepRootMotion).AuthoritativeRootMotion.RootMotionSources.AllocatorInstance.Data,
             (this->RepRootMotion).AuthoritativeRootMotion.RootMotionSources.ArrayNum);
  pFVar1 = (this->RepRootMotion).AuthoritativeRootMotion.RootMotionSources.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FSimulatedRootMotionReplicatedMove,int>
            ((FSimulatedRootMotionReplicatedMove *)(this->RootMotionRepMoves).AllocatorInstance.Data
             ,(this->RootMotionRepMoves).ArrayNum);
  pFVar1 = (this->RootMotionRepMoves).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
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
  }
  pvVar2 = *(void **)&(this->OnCharacterMovementUpdated).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCharacterMovementUpdated);
  pvVar2 = *(void **)&(this->MovementModeChangedDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MovementModeChangedDelegate);
  pvVar2 = *(void **)&(this->LandedDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->LandedDelegate);
  pvVar2 = *(void **)&(this->OnReachedJumpApex).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnReachedJumpApex);
  APawn::~APawn((APawn *)this);
  return;
}

// ApplyAsyncOutput @ 1476ee6d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ACharacter::ApplyAsyncOutput(ACharacter *this,FCharacterAsyncOutput *param_1)

{
  this->JumpCurrentCountPreJump = param_1->JumpCurrentCountPreJump;
  this->JumpCurrentCount = param_1->JumpCurrentCount;
  this->JumpForceTimeRemaining = param_1->JumpForceTimeRemaining;
  this->field_0x461 = (param_1->bWasJumping << 3 ^ this->field_0x461) & 8U ^ this->field_0x461;
  this->JumpKeyHoldTime = param_1->JumpKeyHoldTime;
  if (param_1->bClearJumpInput != false) {
    this->bPressedJump = '\0';
  }
  return;
}

// ApplyDamageMomentum @ 1476ee8e0

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
ACharacter::ApplyDamageMomentum
          (ACharacter *this,float param_1,FDamageEvent *param_2,APawn *param_3,AActor *param_4)

{
  float fVar1;
  int iVar2;
  UObject *pUVar3;
  longlong lVar4;
  UCharacterMovementComponent *pUVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  UClass *pUVar11;
  UClass *pUVar12;
  UClass *pUVar13;
  byte bVar14;
  double local_198;
  double local_190;
  double local_188;
  double local_170;
  undefined1 local_168 [16];
  double local_158;
  undefined1 local_148 [4];
  undefined4 local_144;
  undefined4 local_a4;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  
  pUVar12 = (param_2->DamageTypeClass).Class.field0_0x0.DebugPtr;
  pUVar13 = (UClass *)0x0;
  if ((pUVar12 != (UClass *)0x0) &&
     (pUVar11 = Z_Construct_UClass_UDamageType_NoRegister(), pUVar11 != (UClass *)0x0)) {
    iVar2 = (int)pUVar11->_padding_;
    if (((int)pUVar12->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)iVar2 * 8) !=
        &pUVar11->_padding_)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) {
      pUVar13 = (param_2->DamageTypeClass).Class.field0_0x0.DebugPtr;
    }
  }
  if ((pUVar13->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar13);
  }
  pUVar3 = (pUVar13->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar12 = Z_Construct_UClass_UDamageType_NoRegister();
  iVar2 = (int)pUVar12->_padding_;
  if (((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar2) ||
      ((longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
       &pUVar12->_padding_)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Ret->IsA(T::StaticClass())",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                          ,0x1181,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  fVar1 = *(float *)&pUVar3[1].field_0x4;
  if ((__real_40400000 < fVar1) &&
     ((this->CharacterMovement).field0_0x0.DebugPtr != (UCharacterMovementComponent *)0x0)) {
    memset(local_148,0,0x100);
    local_90 = 0;
    uStack_88 = 0;
    local_144 = 0x3f800000;
    local_a4 = 0xffffffff;
    local_80 = 0;
    uStack_7c = 0;
    uStack_78 = 0xffffffff;
    uStack_74 = 0;
    (**(code **)(param_2->_padding_ + 0x18))(param_2,this,param_3,local_148,&local_198);
    dVar9 = (double)fVar1;
    dVar7 = dVar9 * local_188;
    bVar14 = ~(byte)(*(uint *)(pUVar3 + 1) >> 1) & 1;
    dVar8 = dVar7;
    if ((bVar14 == 0) &&
       (fVar1 = ((this->CharacterMovement).field0_0x0.DebugPtr)->Mass, __real_322bcc77 < fVar1)) {
      dVar8 = dVar7 / (double)fVar1;
    }
    pUVar12 = *(UClass **)&((this->CharacterMovement).field0_0x0.DebugPtr)->field_0x10;
    local_170 = dVar7;
    if ((pUVar12->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar12);
    }
    pUVar3 = (pUVar12->ClassDefaultObject).field0_0x0.DebugPtr;
    pUVar13 = Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
    lVar4 = *(longlong *)&pUVar3->field_0x10;
    iVar2 = (int)pUVar13->_padding_;
    if (((*(int *)(lVar4 + 0x38) < iVar2) ||
        ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar2 * 8) !=
         &pUVar13->_padding_)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Class->GetDefaultObject()->IsA(T::StaticClass())",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                            ,0x1469,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((pUVar12->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar12);
    }
    pUVar5 = (this->CharacterMovement).field0_0x0.DebugPtr;
    if (((double)*(float *)&(pUVar12->ClassDefaultObject).field0_0x0.DebugPtr[10].field_0x20 <
         *(double *)&pUVar5->field_0xe8) && (0.0 < dVar8)) {
      local_170 = dVar7 * __real_3fe0000000000000;
    }
    local_168._8_4_ = SUB84(dVar9 * local_190,0);
    local_168._0_8_ = dVar9 * local_198;
    local_168._12_4_ = (int)((ulonglong)(dVar9 * local_190) >> 0x20);
    local_158 = local_170;
    (**(code **)(*(longlong *)pUVar5 + 0x8d8))(pUVar5,local_168,bVar14);
  }
  return;
}

// BaseChange @ 1476f0590

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ACharacter::BaseChange(ACharacter *this)

{
  UCharacterMovementComponent *pUVar1;
  char cVar2;
  AActor *pAVar3;
  
  pUVar1 = (this->CharacterMovement).field0_0x0.DebugPtr;
  if ((((pUVar1 != (UCharacterMovementComponent *)0x0) && ((pUVar1->MovementMode).Value != '\0')) &&
      (pAVar3 = APawn::GetMovementBaseActor((APawn *)this), pAVar3 != (AActor *)0x0)) &&
     (cVar2 = (**(code **)(pAVar3->_padding_ + 0x6a8))(pAVar3,this), cVar2 == '\0')) {
    pUVar1 = (this->CharacterMovement).field0_0x0.DebugPtr;
    (**(code **)(*(longlong *)pUVar1 + 0x728))(pUVar1,pAVar3);
  }
  return;
}

// BeginPlay @ 1476f0660

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ACharacter::BeginPlay(ACharacter *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  FDestructionSentinel FStack_28;
  
  AActor::BeginPlay((AActor *)this);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&APawn::OnPawnBeginPlay,
             (FWriteAccessScope *)&FStack_28);
  bVar3 = false;
  APawn::OnPawnBeginPlay._28_4_ = APawn::OnPawnBeginPlay._28_4_ + 1;
  uVar7 = APawn::OnPawnBeginPlay._16_4_ - 1;
  if (-1 < (int)uVar7) {
    lVar8 = (longlong)(int)uVar7 << 4;
    bVar3 = false;
    do {
      uVar6 = 0;
      if ((int)uVar7 < (int)APawn::OnPawnBeginPlay._16_4_) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((*(int *)(lVar8 + 8 + APawn::OnPawnBeginPlay._8_8_) == 0) ||
          (plVar1 = *(longlong **)(lVar8 + APawn::OnPawnBeginPlay._8_8_), plVar1 == (longlong *)0x0)
          ) || (cVar5 = (**(code **)(*plVar1 + 0x68))(plVar1,this), cVar5 == '\0')) {
        bVar3 = true;
      }
      lVar8 = lVar8 + -0x10;
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  APawn::OnPawnBeginPlay._28_4_ = APawn::OnPawnBeginPlay._28_4_ + -1;
  if (bVar3) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&APawn::OnPawnBeginPlay,false);
  }
  if (FStack_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_28.Accessor,&FStack_28);
  }
  return;
}

// CacheInitialMeshOffset @ 1476f19c0

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
ACharacter::CacheInitialMeshOffset
          (ACharacter *this,TVector<double> *param_1,TRotator<double> *param_2)

{
  double dVar1;
  double dVar2;
  TQuat<double> *pTVar3;
  TQuat<double> local_28;
  
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  (this->BaseTranslationOffset).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->BaseTranslationOffset).field0_0x0._s_0.Y = dVar2;
  (this->BaseTranslationOffset).field0_0x0._s_0.Z = dVar1;
  pTVar3 = UE::Math::TRotator<double>::Quaternion(param_2,&local_28);
  dVar1 = pTVar3->Y;
  (this->BaseRotationOffset).X = pTVar3->X;
  (this->BaseRotationOffset).Y = dVar1;
  dVar1 = pTVar3->W;
  (this->BaseRotationOffset).Z = pTVar3->Z;
  (this->BaseRotationOffset).W = dVar1;
  return;
}

// CanCrouch @ 1476f5b50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall ACharacter::CanCrouch(ACharacter *this)

{
  UCharacterMovementComponent *pUVar1;
  longlong *plVar2;
  char cVar3;
  
  if ((this->bIsCrouched == '\0') &&
     (pUVar1 = (this->CharacterMovement).field0_0x0.DebugPtr,
     pUVar1 != (UCharacterMovementComponent *)0x0)) {
    cVar3 = (**(code **)(*(longlong *)&pUVar1->field_0x128 + 0x110))();
    if ((cVar3 != '\0') && (plVar2 = *(longlong **)&this->field_0x1b8, plVar2 != (longlong *)0x0)) {
      cVar3 = (**(code **)(*plVar2 + 0x4f8))(plVar2,0);
      if (cVar3 == '\0') {
        return true;
      }
    }
  }
  return false;
}

// CanJump @ 1476f5c30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall ACharacter::CanJump(ACharacter *this)

{
  undefined1 uVar1;
  UFunction *this_00;
  UClass *pUVar2;
  char local_res10 [24];
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_ACharacter_CanJumpInternal);
  pUVar2 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar2->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res10[0] = '\0';
    (**(code **)(*(longlong *)this + 0x260))(this,this_00,local_res10);
    return local_res10[0] != '\0';
  }
                    /* WARNING: Could not recover jumptable at 0x0001476f5c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this + 0x910))(this);
  return (bool)uVar1;
}

// CanJumpInternal @ 1476f5dd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall ACharacter::CanJumpInternal(ACharacter *this)

{
  undefined1 uVar1;
  UFunction *this_00;
  UClass *pUVar2;
  char local_res10 [24];
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_ACharacter_CanJumpInternal);
  pUVar2 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar2->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res10[0] = '\0';
    (**(code **)(*(longlong *)this + 0x260))(this,this_00,local_res10);
    return local_res10[0] != '\0';
  }
                    /* WARNING: Could not recover jumptable at 0x0001476f5e34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this + 0x910))(this);
  return (bool)uVar1;
}

// CanJumpInternal_Implementation @ 1476f5e50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall ACharacter::CanJumpInternal_Implementation(ACharacter *this)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  
  if (this->bIsCrouched != '\0') {
    return false;
  }
  cVar1 = (**(code **)(*(longlong *)(this->CharacterMovement).field0_0x0.DebugPtr + 0x708))();
  if (cVar1 == '\0') {
    return false;
  }
  if ((this->bWasJumping == '\0') ||
     (fVar4 = (float)(**(code **)(*(longlong *)this + 0x9b8))(this), fVar4 <= 0.0)) {
    if ((this->JumpCurrentCount == 0) &&
       (cVar1 = (**(code **)(*(longlong *)
                              &((this->CharacterMovement).field0_0x0.DebugPtr)->field_0x128 + 0xd8))
                          (), cVar1 != '\0')) {
      iVar2 = this->JumpCurrentCount + 1;
      bVar3 = SBORROW4(iVar2,this->JumpMaxCount);
      iVar2 = iVar2 - this->JumpMaxCount;
    }
    else {
      bVar3 = SBORROW4(this->JumpCurrentCount,this->JumpMaxCount);
      iVar2 = this->JumpCurrentCount - this->JumpMaxCount;
    }
    if (bVar3 == iVar2 < 0) {
      return false;
    }
    return true;
  }
  if (this->bPressedJump == '\0') {
    return false;
  }
  fVar4 = this->JumpKeyHoldTime;
  fVar5 = (float)(**(code **)(*(longlong *)this + 0x9b8))(this);
  if (fVar4 < fVar5) {
    if (this->JumpCurrentCount < this->JumpMaxCount) {
      return true;
    }
    if (this->bWasJumping != '\0') {
      if (this->JumpCurrentCount == this->JumpMaxCount) {
        return true;
      }
      return false;
    }
    return false;
  }
  return false;
}

// CanUseRootMotionRepMove @ 1476f5fa0

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
ACharacter::CanUseRootMotionRepMove
          (ACharacter *this,FSimulatedRootMotionReplicatedMove *param_1,
          FAnimMontageInstance *param_2)

{
  UAnimMontage *pUVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  UWorld *pUVar6;
  UAnimMontage *pUVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int local_res10 [2];
  
  pUVar6 = AActor::GetWorld((AActor *)this);
  if (pUVar6->TimeSeconds - (double)param_1->Time <= __real_3fe0000000000000) {
    pUVar7 = (param_2->Montage).field0_0x0.DebugPtr;
    if ((pUVar7 == (UAnimMontage *)0x0) || (bVar3 = UAnimMontage::IsDynamicMontage(pUVar7), !bVar3))
    {
      pUVar7 = (param_2->Montage).field0_0x0.DebugPtr;
    }
    else {
      pUVar7 = (UAnimMontage *)
               UAnimMontage::GetFirstAnimReference((param_2->Montage).field0_0x0.DebugPtr);
    }
    pUVar1 = (UAnimMontage *)(param_1->RootMotion).Animation.field0_0x0.DebugPtr;
    if ((pUVar1 != (UAnimMontage *)0x0) && (pUVar1 == pUVar7)) {
      pUVar7 = (param_2->Montage).field0_0x0.DebugPtr;
      fVar8 = (param_1->RootMotion).Position;
      fVar10 = param_2->Position - fVar8;
      local_res10[0] = UAnimMontage::GetSectionIndexFromPosition(pUVar7,param_2->Position);
      if (local_res10[0] != -1) {
        iVar4 = FAnimMontageInstance::GetNextSectionID(param_2,local_res10);
        iVar5 = UAnimMontage::GetSectionIndexFromPosition(pUVar7,fVar8);
        bVar3 = iVar5 == local_res10[0];
        if ((iVar4 != local_res10[0]) ||
           (fVar9 = (float)((uint)fVar10 & __xmm_7fffffff7fffffff7fffffff7fffffff),
           fVar8 = UAnimMontage::GetSectionLength(pUVar7,local_res10[0]),
           fVar9 <= fVar8 * __real_3f000000)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        fVar8 = param_2->PlayRate;
        if (4 < (byte)LogRootMotion._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRootMotion);
        }
        if (((bVar3) && (!bVar2)) && (0.0 <= fVar10 * fVar8)) {
          return true;
        }
      }
    }
  }
  return false;
}

// CheckJumpInput @ 1476f6e80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ACharacter::CheckJumpInput(ACharacter *this,float param_1)

{
  UCharacterMovementComponent *pUVar1;
  char cVar2;
  bool bVar3;
  UFunction *this_00;
  UClass *pUVar4;
  float fVar5;
  
  this->JumpCurrentCountPreJump = this->JumpCurrentCount;
  pUVar1 = (this->CharacterMovement).field0_0x0.DebugPtr;
  if ((pUVar1 != (UCharacterMovementComponent *)0x0) && (this->bPressedJump != '\0')) {
    if ((this->JumpCurrentCount == 0) &&
       (cVar2 = (**(code **)(*(longlong *)&pUVar1->field_0x128 + 0xd8))(), cVar2 != '\0')) {
      this->JumpCurrentCount = this->JumpCurrentCount + 1;
    }
    bVar3 = CanJump(this);
    if ((bVar3) && (CharacterCVars::UseLegacyDoJump != 0)) {
      pUVar1 = (this->CharacterMovement).field0_0x0.DebugPtr;
      cVar2 = (**(code **)(*(longlong *)pUVar1 + 0x700))(pUVar1,this->bClientUpdating);
    }
    else {
      pUVar1 = (this->CharacterMovement).field0_0x0.DebugPtr;
      cVar2 = (**(code **)(*(longlong *)pUVar1 + 0x6f8))(pUVar1,this->bClientUpdating,param_1);
    }
    if ((cVar2 != '\0') && (this->bWasJumping == '\0')) {
      this->JumpCurrentCount = this->JumpCurrentCount + 1;
      fVar5 = (float)(**(code **)(*(longlong *)this + 0x9b8))(this);
      this->JumpForceTimeRemaining = fVar5;
      this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_ACharacter_OnJumped);
      pUVar4 = UField::GetOwnerClass((UField *)this_00);
      if ((pUVar4->ClassFlags & CLASS_Native) == CLASS_None) {
        (**(code **)(*(longlong *)this + 0x260))(this,this_00,0);
      }
      else {
        (**(code **)(*(longlong *)this + 0x940))(this);
      }
    }
    this->field_0x461 = (cVar2 << 3 ^ this->field_0x461) & 8U ^ this->field_0x461;
  }
  return;
}

// ClearCrossLevelReferences @ 1476f73d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ACharacter::ClearCrossLevelReferences(ACharacter *this)

{
  UPrimitiveComponent *this_00;
  UPackage *pUVar1;
  UPackage *pUVar2;
  
  this_00 = (this->BasedMovement).MovementBase.field0_0x0.DebugPtr;
  if (this_00 != (UPrimitiveComponent *)0x0) {
    pUVar1 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this_00);
    pUVar2 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
    if (pUVar2 != pUVar1) {
      (**(code **)(*(longlong *)this + 0x8b8))(this,0,0,1);
    }
  }
  AActor::ClearCrossLevelReferences((AActor *)this);
  return;
}

// ClearJumpInput @ 1476f7440

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ACharacter::ClearJumpInput(ACharacter *this,float param_1)

{
  float fVar1;
  float fVar2;
  
  if (this->bPressedJump == '\0') {
    this->bWasJumping = '\0';
    this->JumpForceTimeRemaining = 0.0;
  }
  else {
    fVar2 = param_1 + this->JumpKeyHoldTime;
    this->JumpKeyHoldTime = fVar2;
    fVar1 = (float)(**(code **)(*(longlong *)this + 0x9b8))();
    if (fVar1 <= fVar2) {
      this->bPressedJump = '\0';
      return;
    }
  }
  return;
}

// ClientAckGoodMove @ 1476f7710

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ACharacter::ClientAckGoodMove(ACharacter *this,float param_1)

{
  UFunction *pUVar1;
  float local_res10 [6];
  
  local_res10[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_ACharacter_ClientAckGoodMove);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,local_res10);
  return;
}

// ClientAckGoodMove_Implementation @ 1476f7750

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ACharacter::ClientAckGoodMove_Implementation(ACharacter *this,float param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001476f775a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(this->CharacterMovement).field0_0x0.DebugPtr + 0xb38))();
  return;
}

// ClientAdjustPosition @ 1476f7770

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
ACharacter::ClientAdjustPosition
          (ACharacter *this,float param_1,TVector<double> *param_2,TVector<double> *param_3,
          UPrimitiveComponent *param_4,FName param_5,bool param_6,bool param_7,uchar param_8)

{
  UFunction *pUVar1;
  float local_58 [2];
  double local_50;
  double dStack_48;
  double local_40;
  double local_38;
  double dStack_30;
  double local_28;
  UPrimitiveComponent *local_20;
  FName local_18;
  bool local_10;
  bool local_f;
  uchar local_e;
  
  local_50 = (param_2->field0_0x0)._s_0.X;
  dStack_48 = (param_2->field0_0x0)._s_0.Y;
  local_20 = param_4;
  local_18 = param_5;
  local_10 = param_6;
  local_40 = (param_2->field0_0x0)._s_0.Z;
  local_f = param_7;
  local_38 = (param_3->field0_0x0)._s_0.X;
  dStack_30 = (param_3->field0_0x0)._s_0.Y;
  local_28 = (param_3->field0_0x0)._s_0.Z;
  local_e = param_8;
  local_58[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_ACharacter_ClientAdjustPosition);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,local_58);
  return;
}

// ClientAdjustPosition_Implementation @ 1476f7820

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
ACharacter::ClientAdjustPosition_Implementation
          (ACharacter *this,float param_1,TVector<double> *param_2,TVector<double> *param_3,
          UPrimitiveComponent *param_4,FName param_5,bool param_6,bool param_7,uchar param_8)

{
  UCharacterMovementComponent *pUVar1;
  undefined4 in_XMM1_Db;
  double local_68;
  double dStack_60;
  double local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  double local_38;
  undefined1 local_28 [24];
  undefined1 local_10;
  
  local_68 = (param_3->field0_0x0)._s_0.X;
  dStack_60 = (param_3->field0_0x0)._s_0.Y;
  pUVar1 = (this->CharacterMovement).field0_0x0.DebugPtr;
  local_58 = (param_3->field0_0x0)._s_0.Z;
  local_38 = (param_2->field0_0x0)._s_0.Z;
  local_48 = *(undefined4 *)&param_2->field0_0x0;
  uStack_44 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 4);
  uStack_40 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 8);
  uStack_3c = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc);
  local_10 = 0;
  (**(code **)(*(longlong *)pUVar1 + 0xb40))
            (pUVar1,CONCAT44(in_XMM1_Db,param_1),&local_48,&local_68,param_4,param_5,param_6,param_7
             ,param_8,local_28);
  return;
}

// ClientAdjustRootMotionPosition @ 1476f78d0

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
ACharacter::ClientAdjustRootMotionPosition
          (ACharacter *this,float param_1,float param_2,TVector<double> *param_3,
          FVector_NetQuantizeNormal *param_4,float param_5,UPrimitiveComponent *param_6,
          FName param_7,bool param_8,bool param_9,uchar param_10)

{
  UFunction *pUVar1;
  float local_68;
  float local_64;
  double local_60;
  double dStack_58;
  double local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  float local_30;
  UPrimitiveComponent *local_28;
  FName local_20;
  bool local_18;
  bool local_17;
  uchar local_16;
  
  local_60 = (param_3->field0_0x0)._s_0.X;
  dStack_58 = (param_3->field0_0x0)._s_0.Y;
  local_50 = (param_3->field0_0x0)._s_0.Z;
  local_48 = *(undefined8 *)param_4;
  uStack_40 = *(undefined8 *)&param_4->field_0x8;
  local_38 = *(undefined8 *)&param_4->field_0x10;
  local_28 = param_6;
  local_20 = param_7;
  local_18 = param_8;
  local_17 = param_9;
  local_16 = param_10;
  local_30 = param_5;
  local_68 = param_1;
  local_64 = param_2;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_ACharacter_ClientAdjustRootMotionPosition);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,&local_68);
  return;
}

// ClientAdjustRootMotionPosition_Implementation @ 1476f79a0

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
ACharacter::ClientAdjustRootMotionPosition_Implementation
          (ACharacter *this,float param_1,float param_2,TVector<double> *param_3,
          FVector_NetQuantizeNormal *param_4,float param_5,UPrimitiveComponent *param_6,
          FName param_7,bool param_8,bool param_9,uchar param_10)

{
  UCharacterMovementComponent *pUVar1;
  code *pcVar2;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  double local_28;
  double dStack_20;
  double local_18;
  
  pUVar1 = (this->CharacterMovement).field0_0x0.DebugPtr;
  local_48 = *(undefined8 *)param_4;
  uStack_40 = *(undefined8 *)&param_4->field_0x8;
  local_38 = *(undefined8 *)&param_4->field_0x10;
  local_28 = (param_3->field0_0x0)._s_0.X;
  dStack_20 = (param_3->field0_0x0)._s_0.Y;
  pcVar2 = *(code **)(*(longlong *)pUVar1 + 0xb50);
  local_18 = (param_3->field0_0x0)._s_0.Z;
  (*pcVar2)(pUVar1,pcVar2,param_2,&local_28,&local_48,param_5,param_6,param_7,param_8,param_9,
            param_10);
  return;
}

// ClientAdjustRootMotionSourcePosition @ 1476f7a60

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
ACharacter::ClientAdjustRootMotionSourcePosition
          (ACharacter *this,float param_1,FRootMotionSourceGroup *param_2,bool param_3,float param_4
          ,TVector<double> *param_5,FVector_NetQuantizeNormal *param_6,float param_7,
          UPrimitiveComponent *param_8,FName param_9,bool param_10,bool param_11,uchar param_12)

{
  FScriptContainerElement *pFVar1;
  UFunction *pUVar2;
  float local_c8 [2];
  FRootMotionSourceGroup local_c0;
  undefined1 local_78;
  float local_74;
  double local_70;
  double dStack_68;
  double local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  float local_40;
  UPrimitiveComponent *local_38;
  FName local_30;
  bool local_28;
  bool local_27;
  uchar local_26;
  
  FRootMotionSourceGroup::FRootMotionSourceGroup(&local_c0);
  local_30.ComparisonIndex.Value = 0;
  local_30.Number = 0;
  local_c8[0] = param_1;
  FRootMotionSourceGroup::operator=(&local_c0,param_2);
  local_74 = param_4;
  local_70 = (param_5->field0_0x0)._s_0.X;
  dStack_68 = (param_5->field0_0x0)._s_0.Y;
  local_60 = (param_5->field0_0x0)._s_0.Z;
  local_58 = *(undefined8 *)param_6;
  uStack_50 = *(undefined8 *)&param_6->field_0x8;
  local_48 = *(undefined8 *)&param_6->field_0x10;
  local_38 = param_8;
  local_30 = param_9;
  local_28 = param_10;
  local_27 = param_11;
  local_26 = param_12;
  local_40 = param_7;
  local_78 = param_3;
  pUVar2 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_ACharacter_ClientAdjustRootMotionSourcePosition);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar2,local_c8);
  local_c0._padding_ = (longlong)&___7FRootMotionSourceGroup__6B_;
  DestructItems<TSharedPtr<FRootMotionSource,1>,int>
            ((TSharedPtr<FRootMotionSource,1> *)
             local_c0.PendingAddRootMotionSources.AllocatorInstance.Data,
             local_c0.PendingAddRootMotionSources.ArrayNum);
  if ((TSharedPtr<FRootMotionSource,1> *)local_c0.PendingAddRootMotionSources.AllocatorInstance.Data
      != (TSharedPtr<FRootMotionSource,1> *)0x0) {
    FMemory::Free(local_c0.PendingAddRootMotionSources.AllocatorInstance.Data);
  }
  DestructItems<TSharedPtr<FRootMotionSource,1>,int>
            ((TSharedPtr<FRootMotionSource,1> *)local_c0.RootMotionSources.AllocatorInstance.Data,
             local_c0.RootMotionSources.ArrayNum);
  if ((TSharedPtr<FRootMotionSource,1> *)local_c0.RootMotionSources.AllocatorInstance.Data !=
      (TSharedPtr<FRootMotionSource,1> *)0x0) {
    FMemory::Free(local_c0.RootMotionSources.AllocatorInstance.Data);
  }
  param_2->_padding_ = (longlong)&___7FRootMotionSourceGroup__6B_;
  DestructItems<TSharedPtr<FRootMotionSource,1>,int>
            ((TSharedPtr<FRootMotionSource,1> *)
             (param_2->PendingAddRootMotionSources).AllocatorInstance.Data,
             (param_2->PendingAddRootMotionSources).ArrayNum);
  pFVar1 = (param_2->PendingAddRootMotionSources).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<FRootMotionSource,1>,int>
            ((TSharedPtr<FRootMotionSource,1> *)(param_2->RootMotionSources).AllocatorInstance.Data,
             (param_2->RootMotionSources).ArrayNum);
  pFVar1 = (param_2->RootMotionSources).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ClientAdjustRootMotionSourcePosition_Implementation @ 1476f7be0

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
ACharacter::ClientAdjustRootMotionSourcePosition_Implementation
          (ACharacter *this,float param_1,FRootMotionSourceGroup *param_2,bool param_3,float param_4
          ,TVector<double> *param_5,FVector_NetQuantizeNormal *param_6,float param_7,
          UPrimitiveComponent *param_8,FName param_9,bool param_10,bool param_11,uchar param_12)

{
  UCharacterMovementComponent *pUVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  FRootMotionSourceGroup *pFVar4;
  undefined4 in_XMM1_Db;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  double local_88;
  double dStack_80;
  double local_78;
  FRootMotionSourceGroup local_68;
  
  pUVar1 = (this->CharacterMovement).field0_0x0.DebugPtr;
  pcVar2 = *(code **)(*(longlong *)pUVar1 + 0xb58);
  pFVar4 = FRootMotionSourceGroup::FRootMotionSourceGroup(&local_68,param_2);
  local_a8 = *(undefined8 *)param_6;
  uStack_a0 = *(undefined8 *)&param_6->field_0x8;
  local_98 = *(undefined8 *)&param_6->field_0x10;
  local_88 = (param_5->field0_0x0)._s_0.X;
  dStack_80 = (param_5->field0_0x0)._s_0.Y;
  local_78 = (param_5->field0_0x0)._s_0.Z;
  (*pcVar2)(pUVar1,CONCAT44(in_XMM1_Db,param_1),pFVar4,param_3,param_4,&local_88,&local_a8,param_7,
            param_8,param_9,param_10,param_11,param_12);
  param_2->_padding_ = (longlong)&___7FRootMotionSourceGroup__6B_;
  DestructItems<TSharedPtr<FRootMotionSource,1>,int>
            ((TSharedPtr<FRootMotionSource,1> *)
             (param_2->PendingAddRootMotionSources).AllocatorInstance.Data,
             (param_2->PendingAddRootMotionSources).ArrayNum);
  pFVar3 = (param_2->PendingAddRootMotionSources).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<TSharedPtr<FRootMotionSource,1>,int>
            ((TSharedPtr<FRootMotionSource,1> *)(param_2->RootMotionSources).AllocatorInstance.Data,
             (param_2->RootMotionSources).ArrayNum);
  pFVar3 = (param_2->RootMotionSources).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// ClientCheatFly @ 1476f7d50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ACharacter::ClientCheatFly(ACharacter *this)

{
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_ACharacter_ClientCheatFly);
                    /* WARNING: Could not recover jumptable at 0x0001476f7d7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,0,*(code **)(*(longlong *)this + 0x260));
  return;
}

// ClientCheatFly_Implementation @ 1476f7d90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ACharacter::ClientCheatFly_Implementation(ACharacter *this)

{
  undefined1 *puVar1;
  UCharacterMovementComponent *pUVar2;
  
  AActor::SetActorEnableCollision((AActor *)this,true);
  pUVar2 = (this->CharacterMovement).field0_0x0.DebugPtr;
  if (pUVar2 != (UCharacterMovementComponent *)0x0) {
    pUVar2->bCheatFlying = '\x01';
    pUVar2 = (this->CharacterMovement).field0_0x0.DebugPtr;
                    /* WARNING: Could not recover jumptable at 0x0001476f7dca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 0x658))(pUVar2,5,0);
    return;
  }
  return;
}

// ClientCheatGhost @ 1476f7de0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ACharacter::ClientCheatGhost(ACharacter *this)

{
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_ACharacter_ClientCheatGhost);
                    /* WARNING: Could not recover jumptable at 0x0001476f7e0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,0,*(code **)(*(longlong *)this + 0x260));
  return;
}

// ClientCheatGhost_Implementation @ 1476f7e20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ACharacter::ClientCheatGhost_Implementation(ACharacter *this)

{
  undefined1 *puVar1;
  UCharacterMovementComponent *pUVar2;
  
  AActor::SetActorEnableCollision((AActor *)this,false);
  pUVar2 = (this->CharacterMovement).field0_0x0.DebugPtr;
  if (pUVar2 != (UCharacterMovementComponent *)0x0) {
    pUVar2->bCheatFlying = '\x01';
    pUVar2 = (this->CharacterMovement).field0_0x0.DebugPtr;
                    /* WARNING: Could not recover jumptable at 0x0001476f7e5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 0x658))(pUVar2,5,0);
    return;
  }
  return;
}

// ClientCheatWalk @ 1476f7e70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ACharacter::ClientCheatWalk(ACharacter *this)

{
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_ACharacter_ClientCheatWalk);
                    /* WARNING: Could not recover jumptable at 0x0001476f7e9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,0,*(code **)(*(longlong *)this + 0x260));
  return;
}

// ClientCheatWalk_Implementation @ 1476f7eb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ACharacter::ClientCheatWalk_Implementation(ACharacter *this)

{
  undefined1 *puVar1;
  UCharacterMovementComponent *pUVar2;
  
  AActor::SetActorEnableCollision((AActor *)this,true);
  pUVar2 = (this->CharacterMovement).field0_0x0.DebugPtr;
  if (pUVar2 != (UCharacterMovementComponent *)0x0) {
    pUVar2->bCheatFlying = '\0';
    pUVar2 = (this->CharacterMovement).field0_0x0.DebugPtr;
                    /* WARNING: Could not recover jumptable at 0x0001476f7eea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 0x658))(pUVar2,3,0);
    return;
  }
  return;
}

// ClientMoveResponsePacked @ 1476f7f00

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
ACharacter::ClientMoveResponsePacked(ACharacter *this,FCharacterMoveResponsePackedBits *param_1)

{
  UFunction *pUVar1;
  undefined1 auStack_148 [32];
  FCharacterNetworkSerializationPackedBits local_128;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_128.DataBits.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_128.DataBits.NumBits = 0;
  local_128.DataBits.MaxBits = 0x400;
  local_128.PackageMapExports.References.AllocatorInstance.SecondaryData =
       (ForElementType<TObjectPtr<UObject>_>)0x0;
  local_128.PackageMapExports.References.ArrayNum = 0;
  local_128.PackageMapExports.References.ArrayMax = 4;
  local_128.PackageMapExports.Names.AllocatorInstance.SecondaryData = (ForElementType<FName>)0x0;
  local_128.PackageMapExports.Names.ArrayNum = 0;
  local_128.PackageMapExports.Names.ArrayMax = 4;
  local_128.NetTokensPendingExport.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Net::FNetToken>)0x0;
  local_128.NetTokensPendingExport.ArrayNum = 0;
  local_128.NetTokensPendingExport.ArrayMax = 4;
  local_128.SavedPackageMap = (UPackageMap *)0x0;
  FCharacterNetworkSerializationPackedBits::operator=
            (&local_128,(FCharacterNetworkSerializationPackedBits *)param_1);
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_ACharacter_ClientMoveResponsePacked);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,&local_128);
  if (local_128.NetTokensPendingExport.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::Net::FNetToken>)0x0) {
    FMemory::Free((void *)local_128.NetTokensPendingExport.AllocatorInstance.SecondaryData);
  }
  if (local_128.PackageMapExports.Names.AllocatorInstance.SecondaryData !=
      (ForElementType<FName>)0x0) {
    FMemory::Free((void *)local_128.PackageMapExports.Names.AllocatorInstance.SecondaryData);
  }
  if (local_128.PackageMapExports.References.AllocatorInstance.SecondaryData !=
      (ForElementType<TObjectPtr<UObject>_>)0x0) {
    FMemory::Free((void *)local_128.PackageMapExports.References.AllocatorInstance.SecondaryData);
  }
  if (local_128.DataBits.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_128.DataBits.AllocatorInstance.SecondaryData);
  }
  return;
}

// ClientMoveResponsePacked_Implementation @ 1476f8010

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
ACharacter::ClientMoveResponsePacked_Implementation
          (ACharacter *this,FCharacterMoveResponsePackedBits *param_1)

{
  UCharacterMovementComponent::MoveResponsePacked_ClientReceive
            ((this->CharacterMovement).field0_0x0.DebugPtr,param_1);
  return;
}

// ClientMoveResponsePacked_Validate @ 1476f8030

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
ACharacter::ClientMoveResponsePacked_Validate
          (ACharacter *this,FCharacterMoveResponsePackedBits *param_1)

{
  return true;
}

// ClientVeryShortAdjustPosition @ 1476f8040

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
ACharacter::ClientVeryShortAdjustPosition
          (ACharacter *this,float param_1,TVector<double> *param_2,UPrimitiveComponent *param_3,
          FName param_4,bool param_5,bool param_6,uchar param_7)

{
  UFunction *pUVar1;
  float local_48 [2];
  double local_40;
  double dStack_38;
  double local_30;
  UPrimitiveComponent *local_28;
  FName local_20;
  bool local_18;
  bool local_17;
  uchar local_16;
  
  local_40 = (param_2->field0_0x0)._s_0.X;
  dStack_38 = (param_2->field0_0x0)._s_0.Y;
  local_20 = param_4;
  local_18 = param_5;
  local_17 = param_6;
  local_30 = (param_2->field0_0x0)._s_0.Z;
  local_16 = param_7;
  local_48[0] = param_1;
  local_28 = param_3;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_ACharacter_ClientVeryShortAdjustPosition);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,local_48);
  return;
}

// ClientVeryShortAdjustPosition_Implementation @ 1476f80d0

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
ACharacter::ClientVeryShortAdjustPosition_Implementation
          (ACharacter *this,float param_1,TVector<double> *param_2,UPrimitiveComponent *param_3,
          FName param_4,bool param_5,bool param_6,uchar param_7)

{
  UCharacterMovementComponent *pUVar1;
  code *pcVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  double local_18;
  
  local_28 = *(undefined4 *)&param_2->field0_0x0;
  uStack_24 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 4);
  uStack_20 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 8);
  uStack_1c = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc);
  pUVar1 = (this->CharacterMovement).field0_0x0.DebugPtr;
  local_18 = (param_2->field0_0x0)._s_0.Z;
  pcVar2 = *(code **)(*(longlong *)pUVar1 + 0xb48);
  (*pcVar2)(pUVar1,pcVar2,&local_28,param_3,param_4,param_5,param_6,param_7);
  return;
}

// Crouch @ 1476fad30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ACharacter::Crouch(ACharacter *this,bool param_1)

{
  undefined1 *puVar1;
  UCharacterMovementComponent *pUVar2;
  char cVar3;
  undefined7 in_register_00000011;
  FName local_res8 [4];
  FString local_18;
  
  if ((this->CharacterMovement).field0_0x0.DebugPtr != (UCharacterMovementComponent *)0x0) {
    cVar3 = (**(code **)(*(longlong *)this + 0x980))(this,CONCAT71(in_register_00000011,param_1));
    pUVar2 = (this->CharacterMovement).field0_0x0.DebugPtr;
    if (cVar3 != '\0') {
      pUVar2->bWantsToCrouch = '\x01';
      return;
    }
    cVar3 = (**(code **)(*(longlong *)&pUVar2->field_0x128 + 0x110))();
    if ((cVar3 == '\0') && (4 < (byte)LogCharacter._0_1_)) {
      local_res8[0].ComparisonIndex.Value = *(uint *)&this->field_0x18;
      local_res8[0].Number = *(uint *)&this->field_0x1c;
      ::FName::ToString(local_res8,&local_18);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogCharacter);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// DisplayDebug @ 1476fc340

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
ACharacter::DisplayDebug
          (ACharacter *this,UCanvas *param_1,FDebugDisplayInfo *param_2,float *param_3,
          float *param_4)

{
  FName *pFVar1;
  UPrimitiveComponent *pUVar2;
  UCharacterMovementComponent *pUVar3;
  bool bVar4;
  bool bVar5;
  ForAnyElementType FVar6;
  char cVar7;
  FString *pFVar8;
  FName *pFVar9;
  FScriptContainerElement *pFVar10;
  float local_98 [2];
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  local_98[0] = 0.0;
  APawn::DisplayDebug((APawn *)this,param_1,param_2,param_3,param_4);
  local_98[0] = 0.0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&NAME_Physics,L"Physics");
    _Init_thread_footer(&::_TSS0);
  }
  pFVar9 = (FName *)(param_2->DisplayNames).AllocatorInstance.Data;
  pFVar1 = pFVar9 + (param_2->DisplayNames).ArrayNum;
  if (pFVar9 == pFVar1) {
    return;
  }
  while (*pFVar9 != NAME_Physics) {
    pFVar9 = pFVar9 + 1;
    if (pFVar9 == pFVar1) {
      return;
    }
  }
  local_98[0] = local_98[0] + __real_40800000;
  pFVar10 = (FScriptContainerElement *)0x0;
  if (((this->CharacterMovement).field0_0x0.DebugPtr == (UCharacterMovementComponent *)0x0) ||
     (pUVar2 = (this->BasedMovement).MovementBase.field0_0x0.DebugPtr,
     pUVar2 == (UPrimitiveComponent *)0x0)) {
    ::FString::FString(&local_80,"Not Based");
    goto LAB_1476fc515;
  }
  cVar7 = (**(code **)(*(longlong *)pUVar2 + 0x5d8))();
  if (cVar7 == '\0') {
    pUVar2 = (this->BasedMovement).MovementBase.field0_0x0.DebugPtr;
    local_90.Data.AllocatorInstance.Data._0_4_ = *(uint *)&pUVar2->field_0x18;
    local_90.Data.AllocatorInstance.Data._4_4_ = *(uint *)&pUVar2->field_0x1c;
    ::FName::ToString((FName *)&local_90,&local_80);
    pFVar8 = &local_80;
    bVar5 = false;
    bVar4 = true;
LAB_1476fc497:
    pFVar10 = (pFVar8->Data).AllocatorInstance.Data;
    (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar8->Data).ArrayNum = 0;
    (pFVar8->Data).ArrayMax = 0;
    if ((bVar4) && (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    if (bVar5) goto LAB_1476fc4c8;
  }
  else {
    pFVar8 = ::FString::FString(&local_60,"World Geometry");
    bVar5 = true;
    bVar4 = false;
    if (&local_50 != pFVar8) goto LAB_1476fc497;
LAB_1476fc4c8:
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
  }
  ::FString::PrintfImpl(&local_80,L"Based On %s");
  if (pFVar10 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar10);
  }
LAB_1476fc515:
  FVar6.Data = local_80.Data.AllocatorInstance.Data;
  UE::Math::TRotator<double>::ToCompactString(&(this->BasedMovement).Rotation,&local_90);
  UE::Math::TVector<double>::ToCompactString
            ((TVector<double> *)&(this->BasedMovement).Location,&local_60);
  ::FString::PrintfImpl(&local_80,L"RelativeLoc: %s Rot: %s %s");
  FDisplayDebugManager::DrawString(&param_1->DisplayDebugManager,&local_80,local_98);
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  if ((FName)local_90.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  pUVar3 = (this->CharacterMovement).field0_0x0.DebugPtr;
  if (pUVar3 != (UCharacterMovementComponent *)0x0) {
    (**(code **)(*(longlong *)pUVar3 + 0x8e8))(pUVar3,param_1,param_2,param_3,param_4);
  }
  pUVar3 = (this->CharacterMovement).field0_0x0.DebugPtr;
  if (pUVar3 != (UCharacterMovementComponent *)0x0) {
    (**(code **)(*(longlong *)&pUVar3->field_0x128 + 0xd0))();
  }
  ::FString::PrintfImpl(&local_70,L"Crouched %i");
  FDisplayDebugManager::DrawString(&param_1->DisplayDebugManager,&local_70,local_98);
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  if (FVar6.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar6.Data);
  }
  return;
}

// FillAsyncInput @ 147703da0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ACharacter::FillAsyncInput(ACharacter *this,FCharacterAsyncInput *param_1)

{
  USkeletalMeshComponent *pUVar1;
  double dVar2;
  undefined1 uVar3;
  double *pdVar4;
  float fVar5;
  undefined1 local_28 [32];
  
  fVar5 = (float)(**(code **)(*(longlong *)this + 0x9b8))();
  param_1->JumpMaxHoldTime = fVar5;
  param_1->JumpMaxCount = this->JumpMaxCount;
  param_1->LocalRole = ROLE_Authority;
  param_1->RemoteRole = (uint)(byte)this->field_0x60;
  param_1->bIsLocallyControlled = true;
  pUVar1 = (this->Mesh).field0_0x0.DebugPtr;
  if (pUVar1 == (USkeletalMeshComponent *)0x0) {
    uVar3 = false;
  }
  else {
    uVar3 = (**(code **)(pUVar1->_padding_ + 0xc38))();
  }
  param_1->bIsPlayingNetworkedRootMontage = (bool)uVar3;
  param_1->bUseControllerRotationPitch = (bool)(this->field_0x2c8 & 1);
  param_1->bUseControllerRotationYaw = (bool)((byte)(*(uint *)&this->field_0x2c8 >> 1) & 1);
  param_1->bUseControllerRotationRoll = (bool)((byte)(*(uint *)&this->field_0x2c8 >> 2) & 1);
  pdVar4 = (double *)
           (**(code **)(**(longlong **)&this->field_0x2f0 + 0x7e8))
                     (*(longlong **)&this->field_0x2f0,local_28);
  dVar2 = pdVar4[1];
  (param_1->ControllerDesiredRotation).Pitch = *pdVar4;
  (param_1->ControllerDesiredRotation).Yaw = dVar2;
  (param_1->ControllerDesiredRotation).Roll = pdVar4[2];
  return;
}

// FindComponentByClass @ 1477049e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UActorComponent * __thiscall
ACharacter::FindComponentByClass(ACharacter *this,TSubclassOf<UActorComponent> param_1)

{
  int iVar1;
  longlong lVar2;
  USkeletalMeshComponent *pUVar3;
  bool bVar4;
  UClass *pUVar5;
  UActorComponent *pUVar6;
  UObject *pUVar7;
  UObject *local_res8;
  
  if (((this->Mesh).field0_0x0.DebugPtr == (USkeletalMeshComponent *)0x0) ||
     (lVar2 = *(longlong *)param_1.Class.field0_0x0, lVar2 == 0)) goto LAB_147704ad5;
  pUVar5 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar5 == (UClass *)0x0) goto LAB_147704ad5;
  iVar1 = (int)pUVar5->_padding_;
  if ((*(int *)(lVar2 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar5->_padding_)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((!bVar4) || (pUVar7 = *(UObject **)param_1.Class.field0_0x0, pUVar7 == (UObject *)0x0))
  goto LAB_147704ad5;
  pUVar3 = (this->Mesh).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  pUVar5 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar5 == (UClass *)0x0) {
LAB_147704a9c:
    pUVar7 = (UObject *)0x0;
  }
  else {
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)&pUVar7[1].field_0x10 < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)&pUVar7[1].field_0x8 + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_147704a9c;
  }
  lVar2 = pUVar3->_padding_;
  if ((*(int *)&pUVar7[1].field_0x10 <= *(int *)(lVar2 + 0x38)) &&
     (*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)&pUVar7[1].field_0x10 * 8) ==
      &pUVar7[1].field_0x8)) {
    return (UActorComponent *)(this->Mesh).field0_0x0.DebugPtr;
  }
LAB_147704ad5:
  local_res8 = *(UObject **)param_1.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  pUVar6 = AActor::FindComponentByClass((AActor *)this,(TSubclassOf<UActorComponent>)&local_res8);
  return pUVar6;
}

// FindRootMotionRepMove @ 147704fc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __thiscall ACharacter::FindRootMotionRepMove(ACharacter *this,FAnimMontageInstance *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  double dVar4;
  uint uVar5;
  float fVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  UWorld *pUVar11;
  UAnimMontage *pUVar12;
  uint uVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  int local_res8 [2];
  
  fVar6 = __real_3f000000;
  uVar5 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  dVar4 = __real_3fe0000000000000;
  uVar13 = (this->RootMotionRepMoves).ArrayNum - 1;
  uVar8 = 0xffffffff;
  if (-1 < (int)uVar13) {
    lVar14 = (longlong)(int)uVar13 * 0xd0;
    do {
      uVar8 = 0;
      if ((int)uVar13 < (this->RootMotionRepMoves).ArrayNum) {
        uVar8 = ~uVar13 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        iVar9 = (*pcVar2)();
        return iVar9;
      }
      pFVar1 = (this->RootMotionRepMoves).AllocatorInstance.Data;
      pUVar11 = AActor::GetWorld((AActor *)this);
      if (pUVar11->TimeSeconds - (double)*(float *)(pFVar1 + lVar14) <= dVar4) {
        pUVar12 = (param_1->Montage).field0_0x0.DebugPtr;
        if ((pUVar12 == (UAnimMontage *)0x0) ||
           (bVar7 = UAnimMontage::IsDynamicMontage(pUVar12), !bVar7)) {
          pUVar12 = (param_1->Montage).field0_0x0.DebugPtr;
        }
        else {
          pUVar12 = (UAnimMontage *)
                    UAnimMontage::GetFirstAnimReference((param_1->Montage).field0_0x0.DebugPtr);
        }
        if ((*(UAnimMontage **)(pFVar1 + lVar14 + 8) != (UAnimMontage *)0x0) &&
           (*(UAnimMontage **)(pFVar1 + lVar14 + 8) == pUVar12)) {
          pUVar12 = (param_1->Montage).field0_0x0.DebugPtr;
          fVar15 = *(float *)(pFVar1 + lVar14 + 0x14);
          fVar16 = param_1->Position - fVar15;
          local_res8[0] = UAnimMontage::GetSectionIndexFromPosition(pUVar12,param_1->Position);
          if (local_res8[0] != -1) {
            iVar9 = FAnimMontageInstance::GetNextSectionID(param_1,local_res8);
            iVar10 = UAnimMontage::GetSectionIndexFromPosition(pUVar12,fVar15);
            bVar7 = iVar10 == local_res8[0];
            if ((iVar9 != local_res8[0]) ||
               (fVar15 = UAnimMontage::GetSectionLength(pUVar12,local_res8[0]),
               (float)((uint)fVar16 & uVar5) <= fVar15 * fVar6)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            fVar15 = param_1->PlayRate;
            if (4 < (byte)LogRootMotion._0_1_) {
              UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRootMotion);
            }
            if (((bVar7) && (!bVar3)) && (uVar8 = uVar13, 0.0 <= fVar16 * fVar15)) break;
          }
        }
      }
      lVar14 = lVar14 + -0xd0;
      uVar13 = uVar13 - 1;
      uVar8 = 0xffffffff;
    } while (-1 < (int)uVar13);
  }
  if (4 < (byte)LogRootMotion._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRootMotion);
  }
  return uVar8;
}

// GatherCurrentMovement @ 1477064d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ACharacter::GatherCurrentMovement(ACharacter *this)

{
  double dVar1;
  char cVar2;
  FRepMovement *pFVar3;
  TVector<double> *pTVar4;
  TVector<double> local_28;
  
  AActor::GatherCurrentMovement((AActor *)this);
  if ((this->field_0x58 & 0x10) != 0) {
    pFVar3 = AActor::GetReplicatedMovement_Mutable((AActor *)this);
    cVar2 = (**(code **)(*(longlong *)this + 0x8d0))(this);
    if (cVar2 != '\0') {
      pFVar3->field_0x78 = pFVar3->field_0x78 | 4;
      pTVar4 = UCharacterMovementComponent::GetCurrentAcceleration
                         ((this->CharacterMovement).field0_0x0.DebugPtr,&local_28);
      dVar1 = (pTVar4->field0_0x0)._s_0.Y;
      (pFVar3->Acceleration).field0_0x0._s_0.X = (pTVar4->field0_0x0)._s_0.X;
      (pFVar3->Acceleration).field0_0x0._s_0.Y = dVar1;
      (pFVar3->Acceleration).field0_0x0._s_0.Z = (pTVar4->field0_0x0)._s_0.Z;
      return;
    }
    pFVar3->field_0x78 = pFVar3->field_0x78 & 0xfb;
  }
  return;
}

// GetAnimRootMotionTranslationScale @ 1477068b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __thiscall ACharacter::GetAnimRootMotionTranslationScale(ACharacter *this)

{
  return this->AnimRootMotionTranslationScale;
}

// GetCurrentMontage @ 1477071c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UAnimMontage * __thiscall ACharacter::GetCurrentMontage(ACharacter *this)

{
  USkeletalMeshComponent *this_00;
  UAnimInstance *this_01;
  UAnimMontage *pUVar1;
  
  this_00 = (this->Mesh).field0_0x0.DebugPtr;
  if (this_00 != (USkeletalMeshComponent *)0x0) {
    this_01 = USkeletalMeshComponent::GetAnimInstance(this_00);
    if (this_01 != (UAnimInstance *)0x0) {
      pUVar1 = UAnimInstance::GetCurrentActiveMontage(this_01);
      return pUVar1;
    }
  }
  return (UAnimMontage *)0x0;
}

// GetDefaultHalfHeight @ 147707200

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __thiscall ACharacter::GetDefaultHalfHeight(ACharacter *this)

{
  UCapsuleComponent *pUVar1;
  ACharacter *pAVar2;
  float fVar3;
  
  pAVar2 = UClass::GetDefaultObject<ACharacter>(*(UClass **)&this->field_0x10);
  pUVar1 = (pAVar2->CapsuleComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UCapsuleComponent *)0x0) {
    return (float)(double)pUVar1->_padding_ * pUVar1->CapsuleHalfHeight;
  }
  fVar3 = APawn::GetDefaultHalfHeight((APawn *)this);
  return fVar3;
}

// GetGravityDirection @ 147707490

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
ACharacter::GetGravityDirection(ACharacter *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  UCharacterMovementComponent *pUVar2;
  double dVar3;
  undefined8 uVar4;
  
  uVar4 = UCharacterMovementComponent::DefaultGravityDirection.field0_0x0._s_0.Y;
  pUVar2 = (this->CharacterMovement).field0_0x0.DebugPtr;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UCharacterMovementComponent::DefaultGravityDirection.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UCharacterMovementComponent::DefaultGravityDirection.field0_0x0._s_0.Z;
  if (pUVar2 != (UCharacterMovementComponent *)0x0) {
    dVar3 = (pUVar2->GravityDirection).field0_0x0._s_0.Y;
    dVar1 = (pUVar2->GravityDirection).field0_0x0._s_0.Z;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (pUVar2->GravityDirection).field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  }
  return __return_storage_ptr__;
}

// GetGravityTransform @ 1477074e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TQuat<double> * __thiscall
ACharacter::GetGravityTransform(ACharacter *this,TQuat<double> *__return_storage_ptr__)

{
  UCharacterMovementComponent *pUVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar4 = UE::Math::TQuat<double>::Identity.W;
  dVar3 = UE::Math::TQuat<double>::Identity.Z;
  dVar2 = UE::Math::TQuat<double>::Identity.Y;
  pUVar1 = (this->CharacterMovement).field0_0x0.DebugPtr;
  __return_storage_ptr__->X = UE::Math::TQuat<double>::Identity.X;
  __return_storage_ptr__->Y = dVar2;
  __return_storage_ptr__->Z = dVar3;
  __return_storage_ptr__->W = dVar4;
  if (pUVar1 != (UCharacterMovementComponent *)0x0) {
    dVar2 = (pUVar1->WorldToGravityTransform).Y;
    dVar3 = (pUVar1->WorldToGravityTransform).Z;
    dVar4 = (pUVar1->WorldToGravityTransform).W;
    __return_storage_ptr__->X = (pUVar1->WorldToGravityTransform).X;
    __return_storage_ptr__->Y = dVar2;
    __return_storage_ptr__->Z = dVar3;
    __return_storage_ptr__->W = dVar4;
  }
  return __return_storage_ptr__;
}

// GetJumpMaxHoldTime @ 147707bf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __thiscall ACharacter::GetJumpMaxHoldTime(ACharacter *this)

{
  return this->JumpMaxHoldTime;
}

// GetLifetimeReplicatedProps @ 147708090

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
ACharacter::GetLifetimeReplicatedProps
          (ACharacter *this,TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  FProperty *pFVar5;
  FName local_res18;
  FString local_48;
  FDoRepLifetimeParams local_38;
  
  APawn::GetLifetimeReplicatedProps((APawn *)this,param_1);
  pFVar2 = ::FName::FName(&local_res18,0xf,L"JumpMaxHoldTime",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = StaticClass();
  pUVar4 = StaticClass();
  DisableReplicatedLifetimeProperty(pUVar4,pUVar3,FVar1,param_1);
  pFVar2 = ::FName::FName(&local_res18,0xc,L"JumpMaxCount",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = StaticClass();
  pUVar4 = StaticClass();
  DisableReplicatedLifetimeProperty(pUVar4,pUVar3,FVar1,param_1);
  local_38.Condition = COND_SimulatedOnly;
  local_38.RepNotifyCondition = REPNOTIFY_OnChanged;
  local_38.bIsPushBased = false;
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  pFVar2 = ::FName::FName(&local_res18,0xd,L"RepRootMotion",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = StaticClass();
  StaticClass();
  pFVar5 = FindFieldChecked<FProperty>((UStruct *)pUVar3,FVar1);
  if ((pFVar5->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar5,&local_48);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  RegisterReplicatedLifetimeProperty(pFVar5,param_1,&local_38);
  local_38.Condition = COND_SimulatedOnly;
  local_38.RepNotifyCondition = REPNOTIFY_OnChanged;
  local_38.bIsPushBased = false;
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  pFVar2 = ::FName::FName(&local_res18,0x17,L"ReplicatedBasedMovement",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = StaticClass();
  StaticClass();
  pFVar5 = FindFieldChecked<FProperty>((UStruct *)pUVar3,FVar1);
  if ((pFVar5->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar5,&local_48);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  RegisterReplicatedLifetimeProperty(pFVar5,param_1,&local_38);
  local_38.Condition = COND_SimulatedOnlyNoReplay;
  local_38.RepNotifyCondition = REPNOTIFY_OnChanged;
  local_38.bIsPushBased = false;
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  pFVar2 = ::FName::FName(&local_res18,0x2c,L"ReplicatedServerLastTransformUpdateTimeStamp",
                          FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = StaticClass();
  StaticClass();
  pFVar5 = FindFieldChecked<FProperty>((UStruct *)pUVar3,FVar1);
  if ((pFVar5->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar5,&local_48);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  RegisterReplicatedLifetimeProperty(pFVar5,param_1,&local_38);
  local_38.Condition = COND_SimulatedOnly;
  local_38.RepNotifyCondition = REPNOTIFY_OnChanged;
  local_38.bIsPushBased = false;
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  pFVar2 = ::FName::FName(&local_res18,0x16,L"ReplicatedMovementMode",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = StaticClass();
  StaticClass();
  pFVar5 = FindFieldChecked<FProperty>((UStruct *)pUVar3,FVar1);
  if ((pFVar5->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar5,&local_48);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  RegisterReplicatedLifetimeProperty(pFVar5,param_1,&local_38);
  local_38.Condition = COND_SimulatedOnly;
  local_38.RepNotifyCondition = REPNOTIFY_OnChanged;
  local_38.bIsPushBased = false;
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  pFVar2 = ::FName::FName(&local_res18,0xb,L"bIsCrouched",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = StaticClass();
  StaticClass();
  pFVar5 = FindFieldChecked<FProperty>((UStruct *)pUVar3,FVar1);
  if ((pFVar5->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar5,&local_48);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  RegisterReplicatedLifetimeProperty(pFVar5,param_1,&local_38);
  local_38.Condition = COND_SimulatedOnly;
  local_38.RepNotifyCondition = REPNOTIFY_OnChanged;
  local_38.bIsPushBased = false;
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  pFVar2 = ::FName::FName(&local_res18,0x18,L"bProxyIsJumpForceApplied",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = StaticClass();
  StaticClass();
  pFVar5 = FindFieldChecked<FProperty>((UStruct *)pUVar3,FVar1);
  if ((pFVar5->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar5,&local_48);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  RegisterReplicatedLifetimeProperty(pFVar5,param_1,&local_38);
  local_38.Condition = COND_SimulatedOnly;
  local_38.RepNotifyCondition = REPNOTIFY_OnChanged;
  local_38.bIsPushBased = false;
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  pFVar2 = ::FName::FName(&local_res18,0x1e,L"AnimRootMotionTranslationScale",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = StaticClass();
  StaticClass();
  pFVar5 = FindFieldChecked<FProperty>((UStruct *)pUVar3,FVar1);
  if ((pFVar5->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar5,&local_48);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  RegisterReplicatedLifetimeProperty(pFVar5,param_1,&local_38);
  local_38.Condition = COND_SimulatedOnly;
  local_38.RepNotifyCondition = REPNOTIFY_OnChanged;
  local_38.bIsPushBased = false;
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  pFVar2 = ::FName::FName(&local_res18,0x1a,L"ReplicatedGravityDirection",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = StaticClass();
  StaticClass();
  pFVar5 = FindFieldChecked<FProperty>((UStruct *)pUVar3,FVar1);
  if ((pFVar5->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar5,&local_48);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  RegisterReplicatedLifetimeProperty(pFVar5,param_1,&local_38);
  local_38.Condition = COND_ReplayOnly;
  local_38.RepNotifyCondition = REPNOTIFY_OnChanged;
  local_38.bIsPushBased = false;
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  pFVar2 = ::FName::FName(&local_res18,0x22,L"ReplayLastTransformUpdateTimeStamp",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = StaticClass();
  StaticClass();
  pFVar5 = FindFieldChecked<FProperty>((UStruct *)pUVar3,FVar1);
  if ((pFVar5->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar5,&local_48);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  RegisterReplicatedLifetimeProperty(pFVar5,param_1,&local_38);
  return;
}

// GetMovementComponent @ 147708d10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UPawnMovementComponent * __thiscall ACharacter::GetMovementComponent(ACharacter *this)

{
  return (UPawnMovementComponent *)(this->CharacterMovement).field0_0x0.DebugPtr;
}

// GetNavAgentLocation @ 147708d20

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

TVector<double> * __thiscall
ACharacter::GetNavAgentLocation(ACharacter *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  longlong *plVar2;
  longlong lVar3;
  double dVar4;
  double *pdVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 local_48 [64];
  
  uVar8 = FNavigationSystem::InvalidLocation.field0_0x0._s_0.Y;
  plVar2 = *(longlong **)&this->field_0x88;
  (__return_storage_ptr__->field0_0x0)._s_0.X = FNavigationSystem::InvalidLocation.field0_0x0._s_0.X
  ;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar8;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = FNavigationSystem::InvalidLocation.field0_0x0._s_0.Z
  ;
  if (plVar2 != (longlong *)0x0) {
    pdVar5 = (double *)(**(code **)(*plVar2 + 0x600))(plVar2,local_48);
    dVar4 = pdVar5[1];
    dVar1 = pdVar5[2];
    (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar5;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar4;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  }
  if ((((__real_7fefffffffffffff == (__return_storage_ptr__->field0_0x0)._s_0.X) &&
       (__real_7fefffffffffffff == (__return_storage_ptr__->field0_0x0)._s_0.Y)) &&
      (__real_7fefffffffffffff == (__return_storage_ptr__->field0_0x0)._s_0.Z)) &&
     (lVar3 = *(longlong *)&this->field_0x90, lVar3 != 0)) {
    dVar1 = this[-1].ClientRootMotionParams.RootMotionTransform.Translation.ZW.m128d_f64[1];
    if (dVar1 == 0.0) {
      uVar6 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      uVar7 = (undefined4)
              ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
      uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    }
    else {
      uVar6 = *(undefined4 *)((longlong)dVar1 + 0x220);
      uVar7 = *(undefined4 *)((longlong)dVar1 + 0x224);
      uVar8 = *(double *)((longlong)dVar1 + 0x210);
      uVar9 = *(double *)((longlong)dVar1 + 0x218);
    }
    dVar1 = *(double *)(lVar3 + 0x240);
    (__return_storage_ptr__->field0_0x0)._s_0.X = (double)uVar8;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar9;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         (double)CONCAT44(uVar7,uVar6) - (double)((float)dVar1 * *(float *)(lVar3 + 0x568));
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 147709d90

UClass * __cdecl ACharacter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ACharacter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Character",&Z_Registration_Info_UClass_ACharacter.InnerSingleton,
               StaticRegisterNativesACharacter,0x680,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<ACharacter>,
               InternalVTableHelperCtorCaller<ACharacter>,local_res8,APawn::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ACharacter.InnerSingleton;
}

// GetRepRootMotion_Mutable @ 14770a6d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FRepRootMotionMontage * __thiscall ACharacter::GetRepRootMotion_Mutable(ACharacter *this)

{
  return &this->RepRootMotion;
}

// GetReplicatedBasedMovement_Mutable @ 14770a6e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FBasedMovementInfo * __thiscall ACharacter::GetReplicatedBasedMovement_Mutable(ACharacter *this)

{
  return &this->ReplicatedBasedMovement;
}

// GetReplicatedCustomConditionState @ 14770a6f0

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
ACharacter::GetReplicatedCustomConditionState
          (ACharacter *this,FCustomPropertyConditionState *param_1)

{
  USkeletalMeshComponent *pUVar1;
  ForElementType<unsigned_int> FVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  
  AActor::GetReplicatedCustomConditionState((AActor *)this,param_1);
  bVar4 = FRootMotionSourceGroup::HasActiveRootMotionSources
                    (&((this->CharacterMovement).field0_0x0.DebugPtr)->CurrentRootMotion);
  if (bVar4) {
LAB_14770a73a:
    bVar4 = true;
  }
  else {
    pUVar1 = (this->Mesh).field0_0x0.DebugPtr;
    if (pUVar1 != (USkeletalMeshComponent *)0x0) {
      cVar5 = (**(code **)(pUVar1->_padding_ + 0xc38))();
      if (cVar5 != '\0') goto LAB_14770a73a;
    }
    bVar4 = false;
  }
  if ((param_1->CurrentState).NumBits < 0x19) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FVar2 = (param_1->CurrentState).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<unsigned_int>)0x0) {
    param_1 = (FCustomPropertyConditionState *)FVar2;
  }
  uVar7 = *(uint *)param_1 | 0x1000000;
  if (!bVar4) {
    uVar7 = *(uint *)param_1 & 0xfeffffff;
  }
  *(uint *)param_1 = uVar7;
  return;
}

// GetReplicatedGravityDirection @ 14770a7a0

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
ACharacter::GetReplicatedGravityDirection(ACharacter *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = *(double *)&(this->ReplicatedGravityDirection).field_0x8;
  dVar1 = *(double *)&(this->ReplicatedGravityDirection).field_0x10;
  (__return_storage_ptr__->field0_0x0)._s_0.X = *(double *)&this->ReplicatedGravityDirection;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetRootMotionAnimMontageInstance @ 14770a7d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FAnimMontageInstance * __thiscall ACharacter::GetRootMotionAnimMontageInstance(ACharacter *this)

{
  USkeletalMeshComponent *this_00;
  UAnimInstance *pUVar1;
  FAnimMontageInstance *pFVar2;
  
  this_00 = (this->Mesh).field0_0x0.DebugPtr;
  if (this_00 != (USkeletalMeshComponent *)0x0) {
    pUVar1 = USkeletalMeshComponent::GetAnimInstance(this_00);
    if (pUVar1 != (UAnimInstance *)0x0) {
      pUVar1 = USkeletalMeshComponent::GetAnimInstance((this->Mesh).field0_0x0.DebugPtr);
      pFVar2 = UAnimInstance::GetRootMotionMontageInstance(pUVar1);
      return pFVar2;
    }
  }
  return (FAnimMontageInstance *)0x0;
}

// GetSimpleCollisionCylinder @ 14770a9c0

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
ACharacter::GetSimpleCollisionCylinder(ACharacter *this,float *param_1,float *param_2)

{
  UCapsuleComponent *pUVar1;
  bool bVar2;
  char cVar3;
  double dVar4;
  FString local_28 [2];
  
  bVar2 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if ((bVar2) && (4 < (byte)LogCharacter._0_1_)) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,local_28,(UObject *)0x0);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogCharacter);
    if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
    }
  }
  if ((*(UCapsuleComponent **)&this->field_0x1b8 == (this->CapsuleComponent).field0_0x0.DebugPtr) &&
     (cVar3 = (**(code **)(*(longlong *)this + 0x690))(this), cVar3 != '\0')) {
    pUVar1 = (this->CapsuleComponent).field0_0x0.DebugPtr;
    dVar4 = (double)pUVar1->_padding_;
    if ((double)pUVar1->_padding_ <= (double)pUVar1->_padding_) {
      dVar4 = (double)pUVar1->_padding_;
    }
    *param_1 = (float)dVar4 * pUVar1->CapsuleRadius;
    *param_2 = (float)(double)pUVar1->_padding_ * pUVar1->CapsuleHalfHeight;
    return;
  }
  AActor::GetSimpleCollisionCylinder((AActor *)this,param_1,param_2);
  return;
}

// HasAnyRootMotion @ 147712be0

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

bool __thiscall ACharacter::HasAnyRootMotion(ACharacter *this)

{
  UCharacterMovementComponent *pUVar1;
  ACharacter *this_00;
  bool bVar2;
  
  pUVar1 = (this->CharacterMovement).field0_0x0.DebugPtr;
  if (pUVar1 == (UCharacterMovementComponent *)0x0) {
    return false;
  }
  bVar2 = FRootMotionSourceGroup::HasActiveRootMotionSources(&pUVar1->CurrentRootMotion);
  if (bVar2) {
    return true;
  }
  this_00 = (pUVar1->CharacterOwner).field0_0x0.DebugPtr;
  if (((this_00 != (ACharacter *)0x0) && (bVar2 = IsPlayingRootMotion(this_00), bVar2)) &&
     ((((pUVar1->CharacterOwner).field0_0x0.DebugPtr)->Mesh).field0_0x0.DebugPtr !=
      (USkeletalMeshComponent *)0x0)) {
    return true;
  }
  return false;
}

// InitializeAsyncOutput @ 147714500

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ACharacter::InitializeAsyncOutput(ACharacter *this,FCharacterAsyncOutput *param_1)

{
  double dVar1;
  TRotator<double> *pTVar2;
  TRotator<double> local_28;
  
  pTVar2 = AActor::GetActorRotation((AActor *)this,&local_28);
  dVar1 = pTVar2->Yaw;
  (param_1->Rotation).Pitch = pTVar2->Pitch;
  (param_1->Rotation).Yaw = dVar1;
  (param_1->Rotation).Roll = pTVar2->Roll;
  param_1->JumpCurrentCountPreJump = this->JumpCurrentCountPreJump;
  param_1->JumpCurrentCount = this->JumpCurrentCount;
  param_1->JumpForceTimeRemaining = this->JumpForceTimeRemaining;
  param_1->bWasJumping = this->bWasJumping;
  param_1->bPressedJump = this->bPressedJump;
  param_1->JumpKeyHoldTime = this->JumpKeyHoldTime;
  param_1->bClearJumpInput = false;
  return;
}

// IsCrouched @ 1477147e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall ACharacter::IsCrouched(ACharacter *this)

{
  return this->bIsCrouched;
}

// IsJumpProvidingForce @ 1477149a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall ACharacter::IsJumpProvidingForce(ACharacter *this)

{
  float fVar1;
  double dVar2;
  UWorld *pUVar3;
  float fVar4;
  
  if (0.0 < this->JumpForceTimeRemaining) {
    return true;
  }
  if ((this->bProxyIsJumpForceApplied != '\0') && (this->field_0x168 == '\x01')) {
    pUVar3 = AActor::GetWorld((AActor *)this);
    fVar1 = this->ProxyJumpForceStartedTime;
    dVar2 = pUVar3->TimeSeconds;
    fVar4 = (float)(**(code **)(*(longlong *)this + 0x9b8))(this);
    return dVar2 - (double)fVar1 <= (double)fVar4;
  }
  return false;
}

// IsPlayingNetworkedRootMotionMontage @ 147714a70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall ACharacter::IsPlayingNetworkedRootMotionMontage(ACharacter *this)

{
  USkeletalMeshComponent *pUVar1;
  undefined1 uVar2;
  
  pUVar1 = (this->Mesh).field0_0x0.DebugPtr;
  if (pUVar1 != (USkeletalMeshComponent *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147714a7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(pUVar1->_padding_ + 0xc38))();
    return (bool)uVar2;
  }
  return false;
}

// IsPlayingRootMotion @ 147714a90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall ACharacter::IsPlayingRootMotion(ACharacter *this)

{
  USkeletalMeshComponent *pUVar1;
  undefined1 uVar2;
  
  pUVar1 = (this->Mesh).field0_0x0.DebugPtr;
  if (pUVar1 != (USkeletalMeshComponent *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147714a9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(pUVar1->_padding_ + 0xc30))();
    return (bool)uVar2;
  }
  return false;
}

// Jump @ 147714db0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ACharacter::Jump(ACharacter *this)

{
  this->bPressedJump = '\x01';
  this->JumpKeyHoldTime = 0.0;
  return;
}

// JumpIsAllowedInternal @ 147714dd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall ACharacter::JumpIsAllowedInternal(ACharacter *this)

{
  char cVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  
  cVar1 = (**(code **)(*(longlong *)(this->CharacterMovement).field0_0x0.DebugPtr + 0x708))();
  bVar2 = false;
  if (cVar1 != '\0') {
    if (this->bWasJumping != '\0') {
      fVar3 = (float)(**(code **)(*(longlong *)this + 0x9b8))(this);
      if (0.0 < fVar3) {
        if (this->bPressedJump != '\0') {
          fVar3 = this->JumpKeyHoldTime;
          fVar4 = (float)(**(code **)(*(longlong *)this + 0x9b8))(this);
          if (fVar3 < fVar4) {
            if ((this->JumpCurrentCount < this->JumpMaxCount) ||
               ((this->bWasJumping != '\0' && (this->JumpCurrentCount == this->JumpMaxCount)))) {
              return true;
            }
          }
        }
        return false;
      }
    }
    if (this->JumpCurrentCount == 0) {
      cVar1 = (**(code **)(*(longlong *)
                            &((this->CharacterMovement).field0_0x0.DebugPtr)->field_0x128 + 0xd8))()
      ;
      if (cVar1 != '\0') {
        return this->JumpCurrentCount + 1 < this->JumpMaxCount;
      }
    }
    bVar2 = this->JumpCurrentCount < this->JumpMaxCount;
  }
  return bVar2;
}

// K2_OnEndCrouch @ 147714ec0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ACharacter::K2_OnEndCrouch(ACharacter *this,float param_1,float param_2)

{
  UFunction *pUVar1;
  float local_res8;
  float local_resc;
  
  local_res8 = param_1;
  local_resc = param_2;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_ACharacter_K2_OnEndCrouch);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,&local_res8);
  return;
}

// K2_OnMovementModeChanged @ 147714f10

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
ACharacter::K2_OnMovementModeChanged
          (ACharacter *this,EMovementMode param_1,EMovementMode param_2,uchar param_3,uchar param_4)

{
  UFunction *pUVar1;
  undefined1 local_res20;
  undefined1 local_res21;
  uchar local_res22;
  uchar local_res23;
  
  local_res20 = (undefined1)param_1;
  local_res23 = param_4;
  local_res21 = (undefined1)param_2;
  local_res22 = param_3;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_ACharacter_K2_OnMovementModeChanged);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,&local_res20);
  return;
}

// K2_OnStartCrouch @ 147714f60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ACharacter::K2_OnStartCrouch(ACharacter *this,float param_1,float param_2)

{
  UFunction *pUVar1;
  float local_res8;
  float local_resc;
  
  local_res8 = param_1;
  local_resc = param_2;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_ACharacter_K2_OnStartCrouch);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,&local_res8);
  return;
}

// K2_UpdateCustomMovement @ 147714fb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ACharacter::K2_UpdateCustomMovement(ACharacter *this,float param_1)

{
  UFunction *pUVar1;
  float local_res10 [6];
  
  local_res10[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_ACharacter_K2_UpdateCustomMovement);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,local_res10);
  return;
}

// Landed @ 147714ff0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ACharacter::Landed(ACharacter *this,FHitResult *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  FHitResult *pFVar5;
  UFunction *pUVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 local_108 [32];
  
  lVar8 = 2;
  lVar9 = 2;
  pFVar5 = param_1;
  puVar7 = local_108;
  do {
    uVar1 = *(undefined8 *)&pFVar5->Distance;
    uVar2 = *(undefined8 *)&pFVar5->Location;
    uVar3 = *(undefined8 *)&(pFVar5->Location).field_0x8;
    *puVar7 = *(undefined8 *)pFVar5;
    puVar7[1] = uVar1;
    uVar1 = *(undefined8 *)&(pFVar5->Location).field_0x10;
    uVar4 = *(undefined8 *)&pFVar5->ImpactPoint;
    puVar7[2] = uVar2;
    puVar7[3] = uVar3;
    uVar2 = *(undefined8 *)&(pFVar5->ImpactPoint).field_0x8;
    uVar3 = *(undefined8 *)&(pFVar5->ImpactPoint).field_0x10;
    puVar7[4] = uVar1;
    puVar7[5] = uVar4;
    uVar1 = *(undefined8 *)&pFVar5->Normal;
    uVar4 = *(undefined8 *)&(pFVar5->Normal).field_0x8;
    puVar7[6] = uVar2;
    puVar7[7] = uVar3;
    uVar2 = *(undefined8 *)&(pFVar5->Normal).field_0x10;
    uVar3 = *(undefined8 *)&pFVar5->ImpactNormal;
    puVar7[8] = uVar1;
    puVar7[9] = uVar4;
    uVar1 = *(undefined8 *)&(pFVar5->ImpactNormal).field_0x8;
    uVar4 = *(undefined8 *)&(pFVar5->ImpactNormal).field_0x10;
    puVar7[10] = uVar2;
    puVar7[0xb] = uVar3;
    uVar2 = *(undefined8 *)&pFVar5->TraceStart;
    uVar3 = *(undefined8 *)&(pFVar5->TraceStart).field_0x8;
    puVar7[0xc] = uVar1;
    puVar7[0xd] = uVar4;
    puVar7[0xe] = uVar2;
    puVar7[0xf] = uVar3;
    lVar9 = lVar9 + -1;
    pFVar5 = (FHitResult *)&(pFVar5->TraceStart).field_0x10;
    puVar7 = puVar7 + 0x10;
  } while (lVar9 != 0);
  pUVar6 = UObject::FindFunctionChecked((UObject *)this,NAME_ACharacter_OnLanded);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar6,local_108);
  puVar7 = local_108;
  do {
    uVar1 = *(undefined8 *)&param_1->Distance;
    uVar2 = *(undefined8 *)&param_1->Location;
    uVar3 = *(undefined8 *)&(param_1->Location).field_0x8;
    *puVar7 = *(undefined8 *)param_1;
    puVar7[1] = uVar1;
    uVar1 = *(undefined8 *)&(param_1->Location).field_0x10;
    uVar4 = *(undefined8 *)&param_1->ImpactPoint;
    puVar7[2] = uVar2;
    puVar7[3] = uVar3;
    uVar2 = *(undefined8 *)&(param_1->ImpactPoint).field_0x8;
    uVar3 = *(undefined8 *)&(param_1->ImpactPoint).field_0x10;
    puVar7[4] = uVar1;
    puVar7[5] = uVar4;
    uVar1 = *(undefined8 *)&param_1->Normal;
    uVar4 = *(undefined8 *)&(param_1->Normal).field_0x8;
    puVar7[6] = uVar2;
    puVar7[7] = uVar3;
    uVar2 = *(undefined8 *)&(param_1->Normal).field_0x10;
    uVar3 = *(undefined8 *)&param_1->ImpactNormal;
    puVar7[8] = uVar1;
    puVar7[9] = uVar4;
    uVar1 = *(undefined8 *)&(param_1->ImpactNormal).field_0x8;
    uVar4 = *(undefined8 *)&(param_1->ImpactNormal).field_0x10;
    puVar7[10] = uVar2;
    puVar7[0xb] = uVar3;
    uVar2 = *(undefined8 *)&param_1->TraceStart;
    uVar3 = *(undefined8 *)&(param_1->TraceStart).field_0x8;
    puVar7[0xc] = uVar1;
    puVar7[0xd] = uVar4;
    puVar7[0xe] = uVar2;
    puVar7[0xf] = uVar3;
    lVar8 = lVar8 + -1;
    puVar7 = puVar7 + 0x10;
    param_1 = (FHitResult *)&(param_1->TraceStart).field_0x10;
  } while (lVar8 != 0);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->LandedDelegate,local_108
            );
  return;
}

// LaunchCharacter @ 147715160

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
ACharacter::LaunchCharacter(ACharacter *this,TVector<double> *param_1,bool param_2,bool param_3)

{
  UCharacterMovementComponent *pUVar1;
  UFunction *pUVar2;
  FName local_res8;
  undefined1 local_88 [16];
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double dStack_50;
  double local_48;
  undefined1 local_40;
  undefined1 local_3f;
  
  if (5 < (byte)LogCharacter._0_1_) {
    local_res8.ComparisonIndex.Value = *(uint *)&this->field_0x18;
    local_res8.Number = *(uint *)&this->field_0x1c;
    ::FName::ToString(&local_res8,(FString *)local_88);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogCharacter);
    if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_88._0_8_);
    }
  }
  if ((this->CharacterMovement).field0_0x0.DebugPtr != (UCharacterMovementComponent *)0x0) {
    local_88._0_8_ = (param_1->field0_0x0)._s_0.X;
    local_88._8_8_ = (param_1->field0_0x0)._s_0.Y;
    local_78 = (param_1->field0_0x0)._s_0.Z;
    (**(code **)(*(longlong *)this + 0x360))(this,&local_70);
    if (!param_2) {
      local_88._0_8_ = (double)local_88._0_8_ + local_70;
      local_88._8_8_ = (double)local_88._8_8_ + local_68;
    }
    if (!param_3) {
      local_78 = local_78 + local_60;
    }
    pUVar1 = (this->CharacterMovement).field0_0x0.DebugPtr;
    (**(code **)(*(longlong *)pUVar1 + 0x710))(pUVar1,local_88);
    local_58 = (param_1->field0_0x0)._s_0.X;
    dStack_50 = (param_1->field0_0x0)._s_0.Y;
    local_48 = (param_1->field0_0x0)._s_0.Z;
    local_40 = param_2;
    local_3f = param_3;
    pUVar2 = UObject::FindFunctionChecked((UObject *)this,NAME_ACharacter_OnLaunched);
    (**(code **)(*(longlong *)this + 0x260))(this,pUVar2,&local_58);
  }
  return;
}

// NotifyActorBeginOverlap @ 14771c160

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ACharacter::NotifyActorBeginOverlap(ACharacter *this,AActor *param_1)

{
  this->NumActorOverlapEventsCounter = this->NumActorOverlapEventsCounter + 1;
  AActor::NotifyActorBeginOverlap((AActor *)this,param_1);
  return;
}

// NotifyActorEndOverlap @ 14771c180

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ACharacter::NotifyActorEndOverlap(ACharacter *this,AActor *param_1)

{
  this->NumActorOverlapEventsCounter = this->NumActorOverlapEventsCounter + 1;
  AActor::NotifyActorEndOverlap((AActor *)this,param_1);
  return;
}

// NotifyJumpApex @ 14771c1a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ACharacter::NotifyJumpApex(ACharacter *this)

{
  int iVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnReachedJumpApex,
             &local_28);
  iVar1 = *(int *)&(this->OnReachedJumpApex).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  if (0 < iVar1) {
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnReachedJumpApex,
               (void *)0x0);
  }
  return;
}

// OnEndCrouch @ 14771c200

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ACharacter::OnEndCrouch(ACharacter *this,float param_1,float param_2)

{
  USkeletalMeshComponent *this_00;
  ACharacter *pAVar1;
  TVector<double> *pTVar2;
  UFunction *pUVar3;
  double dVar4;
  float local_res8;
  float local_resc;
  
  (**(code **)(*(longlong *)this + 0x7e0))();
  pAVar1 = GetDefault<ACharacter>(*(UClass **)&this->field_0x10);
  this_00 = (this->Mesh).field0_0x0.DebugPtr;
  if ((this_00 == (USkeletalMeshComponent *)0x0) ||
     ((pAVar1->Mesh).field0_0x0.DebugPtr == (USkeletalMeshComponent *)0x0)) {
    dVar4 = (pAVar1->BaseTranslationOffset).field0_0x0._s_0.Z;
  }
  else {
    pTVar2 = USceneComponent::GetRelativeLocation_DirectMutable((USceneComponent *)this_00);
    dVar4 = (double)((pAVar1->Mesh).field0_0x0.DebugPtr)->_padding_;
    (pTVar2->field0_0x0)._s_0.Z = dVar4;
  }
  (this->BaseTranslationOffset).field0_0x0._s_0.Z = dVar4;
  local_res8 = param_1;
  local_resc = param_2;
  pUVar3 = UObject::FindFunctionChecked((UObject *)this,NAME_ACharacter_K2_OnEndCrouch);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar3,&local_res8);
  return;
}

// OnJumped @ 14771c2d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ACharacter::OnJumped(ACharacter *this)

{
  UFunction *this_00;
  UClass *pUVar1;
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_ACharacter_OnJumped);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
                    /* WARNING: Could not recover jumptable at 0x00014771c313. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this + 0x260))(this,this_00,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014771c324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x940))(this);
  return;
}

// OnJumped_Implementation @ 14771c340

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ACharacter::OnJumped_Implementation(ACharacter *this)

{
  return;
}

// OnLanded @ 14771c350

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ACharacter::OnLanded(ACharacter *this,FHitResult *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  UFunction *pUVar6;
  longlong lVar7;
  undefined8 local_108 [32];
  
  lVar7 = 2;
  puVar5 = local_108;
  do {
    uVar1 = *(undefined8 *)&param_1->Distance;
    uVar2 = *(undefined8 *)&param_1->Location;
    uVar3 = *(undefined8 *)&(param_1->Location).field_0x8;
    *puVar5 = *(undefined8 *)param_1;
    puVar5[1] = uVar1;
    uVar1 = *(undefined8 *)&(param_1->Location).field_0x10;
    uVar4 = *(undefined8 *)&param_1->ImpactPoint;
    puVar5[2] = uVar2;
    puVar5[3] = uVar3;
    uVar2 = *(undefined8 *)&(param_1->ImpactPoint).field_0x8;
    uVar3 = *(undefined8 *)&(param_1->ImpactPoint).field_0x10;
    puVar5[4] = uVar1;
    puVar5[5] = uVar4;
    uVar1 = *(undefined8 *)&param_1->Normal;
    uVar4 = *(undefined8 *)&(param_1->Normal).field_0x8;
    puVar5[6] = uVar2;
    puVar5[7] = uVar3;
    uVar2 = *(undefined8 *)&(param_1->Normal).field_0x10;
    uVar3 = *(undefined8 *)&param_1->ImpactNormal;
    puVar5[8] = uVar1;
    puVar5[9] = uVar4;
    uVar1 = *(undefined8 *)&(param_1->ImpactNormal).field_0x8;
    uVar4 = *(undefined8 *)&(param_1->ImpactNormal).field_0x10;
    puVar5[10] = uVar2;
    puVar5[0xb] = uVar3;
    uVar2 = *(undefined8 *)&param_1->TraceStart;
    uVar3 = *(undefined8 *)&(param_1->TraceStart).field_0x8;
    puVar5[0xc] = uVar1;
    puVar5[0xd] = uVar4;
    puVar5[0xe] = uVar2;
    puVar5[0xf] = uVar3;
    lVar7 = lVar7 + -1;
    puVar5 = puVar5 + 0x10;
    param_1 = (FHitResult *)&(param_1->TraceStart).field_0x10;
  } while (lVar7 != 0);
  pUVar6 = UObject::FindFunctionChecked((UObject *)this,NAME_ACharacter_OnLanded);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar6,local_108);
  return;
}

// OnLaunched @ 14771c400

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
ACharacter::OnLaunched(ACharacter *this,TVector<double> *param_1,bool param_2,bool param_3)

{
  UFunction *pUVar1;
  double local_28;
  double dStack_20;
  double local_18;
  undefined1 local_10;
  undefined1 local_f;
  
  local_28 = (param_1->field0_0x0)._s_0.X;
  dStack_20 = (param_1->field0_0x0)._s_0.Y;
  local_18 = (param_1->field0_0x0)._s_0.Z;
  local_10 = param_2;
  local_f = param_3;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_ACharacter_OnLaunched);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,&local_28);
  return;
}

// OnMovementModeChanged @ 14771c460

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
ACharacter::OnMovementModeChanged(ACharacter *this,EMovementMode param_1,uchar param_2)

{
  UCharacterMovementComponent *pUVar1;
  char cVar2;
  UWorld *pUVar3;
  UFunction *pUVar4;
  undefined1 local_res18;
  uchar local_res19;
  uchar local_res1a;
  uchar local_res1b;
  ACharacter *local_18;
  undefined1 local_10;
  uchar local_f;
  
  if (this->bPressedJump != '\0') {
    cVar2 = (**(code **)(*(longlong *)&((this->CharacterMovement).field0_0x0.DebugPtr)->field_0x128
                        + 0xd8))();
    if (cVar2 != '\0') goto LAB_14771c4ad;
  }
  (**(code **)(*(longlong *)this + 0x918))(this);
LAB_14771c4ad:
  if (this->bProxyIsJumpForceApplied != '\0') {
    cVar2 = (**(code **)(*(longlong *)&((this->CharacterMovement).field0_0x0.DebugPtr)->field_0x128
                        + 0xd8))();
    if (cVar2 != '\0') {
      pUVar3 = AActor::GetWorld((AActor *)this);
      this->ProxyJumpForceStartedTime = (float)pUVar3->TimeSeconds;
    }
  }
  pUVar1 = (this->CharacterMovement).field0_0x0.DebugPtr;
  local_res19 = (pUVar1->MovementMode).Value;
  local_res1b = pUVar1->CustomMovementMode;
  local_res18 = (char)param_1;
  local_res1a = param_2;
  pUVar4 = UObject::FindFunctionChecked((UObject *)this,NAME_ACharacter_K2_OnMovementModeChanged);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar4,&local_res18);
  local_18 = this;
  local_10 = (char)param_1;
  local_f = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->MovementModeChangedDelegate,&local_18);
  return;
}

// OnRep_IsCrouched @ 14771c940

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ACharacter::OnRep_IsCrouched(ACharacter *this)

{
  undefined1 *puVar1;
  UCharacterMovementComponent *pUVar2;
  
  pUVar2 = (this->CharacterMovement).field0_0x0.DebugPtr;
  if (pUVar2 != (UCharacterMovementComponent *)0x0) {
    if (this->bIsCrouched == '\0') {
      pUVar2->field_0x565 = pUVar2->field_0x565 & 0xdf;
      pUVar2 = (this->CharacterMovement).field0_0x0.DebugPtr;
      (**(code **)(*(longlong *)pUVar2 + 0x880))(pUVar2,1);
    }
    else {
      pUVar2->field_0x565 = pUVar2->field_0x565 | 0x20;
      (**(code **)(*(longlong *)(this->CharacterMovement).field0_0x0.DebugPtr + 0x878))();
    }
    ((this->CharacterMovement).field0_0x0.DebugPtr)->bNetworkUpdateReceived = '\x01';
  }
  return;
}

// OnRep_ReplayLastTransformUpdateTimeStamp @ 14771c9c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ACharacter::OnRep_ReplayLastTransformUpdateTimeStamp(ACharacter *this)

{
  this->ReplicatedServerLastTransformUpdateTimeStamp = this->ReplayLastTransformUpdateTimeStamp;
  return;
}

// OnRep_ReplicatedBasedMovement @ 14771c9e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

void __thiscall ACharacter::OnRep_ReplicatedBasedMovement(ACharacter *this)

{
  undefined1 *puVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  byte bVar5;
  USkeletalMeshComponent *pUVar6;
  UPrimitiveComponent *pUVar7;
  longlong lVar8;
  UCharacterMovementComponent *pUVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  bool bVar14;
  char cVar15;
  TRotationMatrix<double> *pTVar16;
  TRotator<double> *pTVar17;
  longlong *plVar18;
  undefined ***pppuVar19;
  byte bVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  undefined1 auVar30 [16];
  undefined4 uVar31;
  double dVar34;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auStack_308 [32];
  TQuat<double> *local_2e8;
  byte local_2d8 [8];
  double local_2d0;
  double dStack_2c8;
  double local_2c0;
  TRotator<double> local_2b8;
  undefined1 local_2a0 [16];
  double local_290;
  TQuat<double> local_288;
  code *local_268;
  undefined **local_258;
  ACharacter *pAStack_250;
  byte *local_248;
  undefined ***local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined **local_228;
  ACharacter *pAStack_220;
  byte *local_218;
  TQuatRotationTranslationMatrix<double> local_208;
  TMatrix<double> local_188;
  TRotationMatrix<double> local_108;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_308;
  if (((this->field_0x58 & 0x10) != 0) && (this->field_0x168 == '\x01')) {
    pUVar6 = (this->Mesh).field0_0x0.DebugPtr;
    if ((pUVar6 != (USkeletalMeshComponent *)0x0) &&
       (cVar15 = (**(code **)(pUVar6->_padding_ + 0xc38))(), cVar15 != '\0')) {
      return;
    }
    ((this->CharacterMovement).field0_0x0.DebugPtr)->bNetworkUpdateReceived = '\x01';
    local_2d8[0] = this->bInBaseReplication;
    local_268 = UE::Core::Private::Function::
                TFunctionRefCaller<`ACharacter::OnRep_ReplicatedBasedMovement'::__l2::<lambda_1>,void>
                ::Call;
    local_228 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`ACharacter::OnRep_ReplicatedBasedMovement'::`2'::<lambda_1>,0,0>
                 ::_vftable_;
    local_248 = local_2d8;
    this->bInBaseReplication = '\x01';
    pUVar7 = (this->ReplicatedBasedMovement).MovementBase.field0_0x0.DebugPtr;
    local_240 = (undefined ***)0x0;
    local_258 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`ACharacter::OnRep_ReplicatedBasedMovement'::`2'::<lambda_1>,0,0>
                 ::_vftable_;
    pAStack_220 = this;
    pAStack_250 = this;
    local_218 = local_248;
    if (((this->BasedMovement).MovementBase.field0_0x0.DebugPtr == pUVar7) &&
       ((this->BasedMovement).BoneName == (this->ReplicatedBasedMovement).BoneName)) {
      bVar14 = false;
    }
    else {
      bVar14 = true;
      (**(code **)(*(longlong *)this + 0x8b8))
                (this,pUVar7,(this->ReplicatedBasedMovement).BoneName,1);
    }
    FBasedMovementInfo::operator=(&this->BasedMovement,&this->ReplicatedBasedMovement);
    pUVar7 = (this->ReplicatedBasedMovement).MovementBase.field0_0x0.DebugPtr;
    if ((pUVar7 != (UPrimitiveComponent *)0x0) && (pUVar7->field_0x1ab == '\x02')) {
      lVar8 = *(longlong *)&this->field_0x1b8;
      if (lVar8 == 0) {
        local_2d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        dStack_2c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_2c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_238 = 0;
        uStack_230 = 0;
        local_228 = ___xmm_3ff00000000000000000000000000000;
        pAStack_220 = _UNK_15061cbc8;
      }
      else {
        local_2c0 = *(double *)(lVar8 + 0x220);
        local_2d0 = *(double *)(lVar8 + 0x210);
        dStack_2c8 = *(double *)(lVar8 + 0x218);
        local_238 = *(undefined8 *)(lVar8 + 0x1f0);
        uStack_230 = *(undefined8 *)(lVar8 + 0x1f8);
        local_228 = *(undefined ***)(lVar8 + 0x200);
        pAStack_220 = *(ACharacter **)(lVar8 + 0x208);
      }
      pUVar9 = (this->CharacterMovement).field0_0x0.DebugPtr;
      MovementBaseUtility::GetMovementBaseTransform
                (pUVar7,(this->ReplicatedBasedMovement).BoneName,&pUVar9->OldBaseLocation,
                 &pUVar9->OldBaseQuat);
      auVar3 = *(undefined1 (*) [16])&(this->ReplicatedBasedMovement).Location;
      pUVar9 = (this->CharacterMovement).field0_0x0.DebugPtr;
      dVar2 = *(double *)&(this->ReplicatedBasedMovement).Location.field_0x10;
      dVar34 = auVar3._8_8_;
      auVar4._0_8_ = (pUVar9->OldBaseQuat).Z;
      auVar4._8_8_ = (pUVar9->OldBaseQuat).W;
      auVar24._0_8_ = (pUVar9->OldBaseQuat).X;
      auVar24._8_8_ = (pUVar9->OldBaseQuat).Y;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = dVar2;
      auVar25 = blendpd(auVar3,auVar25,2);
      auVar21._8_4_ = (int)auVar4._0_8_;
      auVar21._0_8_ = auVar24._8_8_;
      auVar21._12_4_ = (int)((ulonglong)auVar4._0_8_ >> 0x20);
      auVar30 = blendpd(auVar24,auVar4,2);
      auVar32._0_8_ = dVar34 * (double)auVar24._0_8_ - (double)auVar24._8_8_ * auVar3._0_8_;
      auVar32._8_8_ = dVar2 * (double)auVar24._8_8_ - auVar21._8_8_ * dVar34;
      auVar26._0_8_ = auVar25._0_8_ * (double)auVar4._0_8_ - auVar30._0_8_ * dVar2;
      auVar26._8_8_ = auVar25._8_8_ * (double)auVar4._8_8_ - auVar30._8_8_ * 0.0;
      dVar11 = auVar32._8_8_ + auVar32._8_8_;
      dVar12 = auVar26._0_8_ + auVar26._0_8_;
      uVar31 = (undefined4)((ulonglong)dVar12 >> 0x20);
      auVar25 = blendpd(auVar32,auVar26,2);
      auVar33._0_8_ = auVar25._0_8_ + auVar25._0_8_;
      auVar33._8_8_ = auVar25._8_8_ + auVar25._8_8_;
      auVar22._8_4_ = SUB84(dVar12,0);
      auVar22._0_8_ = dVar11;
      auVar22._12_4_ = uVar31;
      auVar27._8_4_ = SUB84(dVar12,0);
      auVar27._0_8_ = dVar11;
      auVar27._12_4_ = uVar31;
      auVar25 = blendpd(auVar27,auVar33,2);
      dVar29 = auVar33._0_8_ * (double)auVar24._8_8_ - auVar22._8_8_ * (double)auVar4._0_8_;
      auVar23._8_4_ = SUB84(auVar33._8_8_,0);
      auVar23._0_8_ = auVar33._0_8_;
      auVar23._12_4_ = (int)((ulonglong)auVar33._8_8_ >> 0x20);
      auVar28._0_8_ = auVar25._0_8_ * (double)auVar4._0_8_ - auVar33._0_8_ * auVar30._0_8_;
      auVar28._8_8_ = auVar25._8_8_ * (double)auVar4._8_8_ - auVar23._8_8_ * auVar30._8_8_;
      auVar30._8_4_ = SUB84(dVar29,0);
      auVar30._0_8_ = dVar12 * (double)auVar24._0_8_ - dVar11 * (double)auVar24._8_8_;
      auVar30._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
      auVar24 = blendpd(auVar30,auVar28,2);
      local_290 = auVar33._0_8_ * (double)auVar4._8_8_ + dVar2 + auVar24._0_8_ +
                  (pUVar9->OldBaseLocation).field0_0x0._s_0.Z;
      dVar2 = dVar12 * (double)auVar4._8_8_ + dVar34 + auVar28._0_8_ +
              (pUVar9->OldBaseLocation).field0_0x0._s_0.Y;
      local_2a0._8_4_ = SUB84(dVar2,0);
      local_2a0._0_8_ =
           dVar11 * (double)auVar4._8_8_ + auVar3._0_8_ + dVar29 +
           (pUVar9->OldBaseLocation).field0_0x0._s_0.X;
      local_2a0._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
      if ((((this->ReplicatedBasedMovement).bRelativeRotation == '\0') ||
          (pUVar7 = (this->ReplicatedBasedMovement).MovementBase.field0_0x0.DebugPtr,
          pUVar7 == (UPrimitiveComponent *)0x0)) || (pUVar7->field_0x1ab != '\x02')) {
        bVar13 = false;
      }
      else {
        bVar13 = true;
      }
      if (bVar13) {
        pTVar16 = UE::Math::TRotationMatrix<double>::TRotationMatrix<double>
                            (&local_108,&(this->ReplicatedBasedMovement).Rotation);
        UE::Math::TQuatRotationTranslationMatrix<double>::TQuatRotationTranslationMatrix<double>
                  (&local_208,&((this->CharacterMovement).field0_0x0.DebugPtr)->OldBaseQuat,
                   &UE::Math::TVector<double>::ZeroVector);
        VectorMatrixMultiply(&local_188,(TMatrix<double> *)pTVar16,(TMatrix<double> *)&local_208);
        pTVar17 = UE::Math::TMatrix<double>::Rotator(&local_188,(TRotator<double> *)&local_288);
        local_2b8.Pitch = pTVar17->Pitch;
        local_2b8.Yaw = pTVar17->Yaw;
        local_2b8.Roll = pTVar17->Roll;
        cVar15 = (**(code **)(*(longlong *)(this->CharacterMovement).field0_0x0.DebugPtr + 0x8b0))()
        ;
        if (cVar15 != '\0') {
          local_2b8.Pitch = 0.0;
          local_2b8.Roll = 0.0;
        }
      }
      else {
        local_2b8.Pitch = (this->ReplicatedBasedMovement).Rotation.Pitch;
        local_2b8.Yaw = (this->ReplicatedBasedMovement).Rotation.Yaw;
        local_2b8.Roll = (this->ReplicatedBasedMovement).Rotation.Roll;
      }
      if (((bVar14) || ((double)local_2a0._0_8_ != local_2d0)) ||
         (((double)local_2a0._8_8_ != dStack_2c8 || (local_290 != local_2c0)))) {
        bVar20 = 0x20;
      }
      else {
        bVar20 = 0;
      }
      pUVar9 = (this->CharacterMovement).field0_0x0.DebugPtr;
      bVar5 = pUVar9->field_0x564;
      pUVar9->field_0x564 = (bVar5 & 0x20 | bVar20) ^ bVar5 & 0xdf;
      ((this->CharacterMovement).field0_0x0.DebugPtr)->bNetworkSmoothingComplete = '\0';
      pUVar9 = (this->CharacterMovement).field0_0x0.DebugPtr;
      pcVar10 = *(code **)(*(longlong *)&pUVar9->field_0x198 + 0x20);
      local_2e8 = UE::Math::TRotator<double>::Quaternion(&local_2b8,&local_288);
      (*pcVar10)(&pUVar9->field_0x198,&local_2d0,&local_238,local_2a0);
      (**(code **)(*(longlong *)this + 0x9e0))(this,&local_2d0,&local_238);
    }
    UE::Core::Private::Function::CheckCallable(local_268);
    pcVar10 = local_268;
    pppuVar19 = &local_258;
    if (local_240 != (undefined ***)0x0) {
      pppuVar19 = local_240;
    }
    plVar18 = (longlong *)(*(code *)(*pppuVar19)[1])();
    if (pcVar10 ==
        UE::Core::Private::Function::
        TFunctionRefCaller<`ACharacter::OnRep_ReplicatedBasedMovement'::__l2::<lambda_1>,void>::Call
       ) {
      bVar20 = *(byte *)(*plVar18 + 0x460);
      *(byte *)(*plVar18 + 0x460) = (bVar20 ^ *(byte *)plVar18[1]) & 1 ^ bVar20;
    }
    else {
      (*pcVar10)(plVar18);
    }
    if (local_268 != (code *)0x0) {
      pppuVar19 = &local_258;
      if (local_240 != (undefined ***)0x0) {
        pppuVar19 = local_240;
      }
      (*(code *)(*pppuVar19)[2])();
    }
  }
  return;
}

// OnRep_ReplicatedMovement @ 14771cf40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ACharacter::OnRep_ReplicatedMovement(ACharacter *this)

{
  USkeletalMeshComponent *pUVar1;
  UCharacterMovementComponent *pUVar2;
  char cVar3;
  bool bVar4;
  
  pUVar1 = (this->Mesh).field0_0x0.DebugPtr;
  if ((pUVar1 != (USkeletalMeshComponent *)0x0) &&
     (cVar3 = (**(code **)(pUVar1->_padding_ + 0xc38))(), cVar3 != '\0')) {
    return;
  }
  pUVar2 = (this->CharacterMovement).field0_0x0.DebugPtr;
  if ((pUVar2 != (UCharacterMovementComponent *)0x0) &&
     (bVar4 = FRootMotionSourceGroup::HasActiveRootMotionSources(&pUVar2->CurrentRootMotion), bVar4)
     ) {
    return;
  }
  AActor::OnRep_ReplicatedMovement((AActor *)this);
  return;
}

// OnRep_RootMotion @ 14771cfa0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ACharacter::OnRep_RootMotion(ACharacter *this)

{
  int *piVar1;
  int *piVar2;
  TArray<FSimulatedRootMotionReplicatedMove,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined1 *puVar4;
  FScriptContainerElement *pFVar5;
  UCharacterMovementComponent *pUVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  UWorld *pUVar10;
  uint uVar11;
  uint uVar12;
  
  if (((this->field_0x58 & 0x10) != 0) && (this->field_0x168 == '\x01')) {
    if (4 < (byte)LogRootMotion._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRootMotion);
    }
    pTVar3 = &this->RootMotionRepMoves;
    piVar1 = &(this->RootMotionRepMoves).ArrayNum;
    piVar2 = &(this->RootMotionRepMoves).ArrayMax;
    if ((this->RepRootMotion).bIsActive == false) {
      DestructItems<FSimulatedRootMotionReplicatedMove,int>
                ((FSimulatedRootMotionReplicatedMove *)(pTVar3->AllocatorInstance).Data,*piVar1);
      *piVar1 = 0;
      if (*piVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xd0,8,0,&pTVar3->AllocatorInstance,0,piVar2);
      }
    }
    else {
      iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xd0,8,1,&pTVar3->AllocatorInstance,piVar1,piVar2);
      memset((pTVar3->AllocatorInstance).Data + (longlong)iVar9 * 0xd0,0,0xd0);
      uVar12 = *piVar1 - 1;
      uVar11 = 0;
      if ((int)uVar12 < *piVar1) {
        uVar11 = ~uVar12 >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      iVar9 = *piVar1;
      pFVar5 = (pTVar3->AllocatorInstance).Data;
      FRepRootMotionMontage::operator=
                ((FRepRootMotionMontage *)(pFVar5 + (longlong)iVar9 * 0xd0 + -200),
                 &this->RepRootMotion);
      pUVar10 = AActor::GetWorld((AActor *)this);
      *(float *)(pFVar5 + (longlong)iVar9 * 0xd0 + -0xd0) = (float)pUVar10->TimeSeconds;
    }
    pUVar6 = (this->CharacterMovement).field0_0x0.DebugPtr;
    if (pUVar6 != (UCharacterMovementComponent *)0x0) {
      pUVar6->bNetworkUpdateReceived = '\x01';
    }
  }
  return;
}

// OnStartCrouch @ 14771d1b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ACharacter::OnStartCrouch(ACharacter *this,float param_1,float param_2)

{
  USkeletalMeshComponent *this_00;
  ACharacter *pAVar1;
  TVector<double> *pTVar2;
  UFunction *pUVar3;
  double dVar4;
  float local_res8;
  float local_resc;
  
  (**(code **)(*(longlong *)this + 0x7e0))();
  pAVar1 = GetDefault<ACharacter>(*(UClass **)&this->field_0x10);
  this_00 = (this->Mesh).field0_0x0.DebugPtr;
  if ((this_00 == (USkeletalMeshComponent *)0x0) ||
     ((pAVar1->Mesh).field0_0x0.DebugPtr == (USkeletalMeshComponent *)0x0)) {
    dVar4 = (double)param_1 + (pAVar1->BaseTranslationOffset).field0_0x0._s_0.Z;
  }
  else {
    pTVar2 = USceneComponent::GetRelativeLocation_DirectMutable((USceneComponent *)this_00);
    dVar4 = (double)param_1 + (double)((pAVar1->Mesh).field0_0x0.DebugPtr)->_padding_;
    (pTVar2->field0_0x0)._s_0.Z = dVar4;
  }
  (this->BaseTranslationOffset).field0_0x0._s_0.Z = dVar4;
  local_res8 = param_1;
  local_resc = param_2;
  pUVar3 = UObject::FindFunctionChecked((UObject *)this,NAME_ACharacter_K2_OnStartCrouch);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar3,&local_res8);
  return;
}

// OnUpdateSimulatedPosition @ 14771d280

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
ACharacter::OnUpdateSimulatedPosition
          (ACharacter *this,TVector<double> *param_1,TQuat<double> *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  float fVar3;
  undefined1 uVar4;
  byte bVar5;
  longlong lVar6;
  UCharacterMovementComponent *pUVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_CharacterOnNetUpdateSimulatedPosition> FVar13;
  UWorld *pUVar14;
  TRotator<double> *pTVar15;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar16;
  FNameEntryId FVar17;
  FName FVar18;
  char cVar19;
  FNameEntryId FVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  double dVar23;
  double dVar24;
  LARGE_INTEGER local_res8;
  FName local_res10;
  TRotator<double> local_98;
  TVector<double>_u_0 local_78;
  TRotator<double> local_58 [2];
  
  FVar20.Value = 0;
  FVar13 = StatPtr_STAT_CharacterOnNetUpdateSimulatedPosition;
  if (StatPtr_STAT_CharacterOnNetUpdateSimulatedPosition ==
      (FThreadSafeStaticStat<FStat_STAT_CharacterOnNetUpdateSimulatedPosition>)0x0) {
    pFVar12 = ::FName::FName(&local_res10,"STAT_CharacterOnNetUpdateSimulatedPosition");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_CharacterOnNetUpdateSimulatedPosition>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_CharacterOnNetUpdateSimulatedPosition,*pFVar12,
                        L"Char OnNetUpdateSimulatedPosition","STATGROUP_Character",
                        "STATCAT_Advanced",L"Character",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar13;
  bVar8 = false;
  bVar10 = false;
  FVar17 = FVar18.ComparisonIndex.Value;
  uVar16 = FVar18.Number;
  if ((FVar17.Value != 0) || (uVar16 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar17.Value;
        local_res8.s.HighPart = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Character.cpp"
                   ,0x620);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar17.Value;
      local_res8.s.HighPart = uVar16;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      bVar9 = true;
      FVar20.Value = FVar17.Value;
      goto LAB_14771d3ee;
    }
  }
  bVar9 = false;
  FVar18.ComparisonIndex.Value = 0;
  FVar18.Number = 0;
LAB_14771d3ee:
  lVar6 = *(longlong *)&this->field_0x1b8;
  this->bSimGravityDisabled = '\0';
  if (lVar6 == 0) {
    dVar23 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                              UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
    dVar24 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                              UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
    uVar21 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
    uVar22 = (undefined4)
             ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
  }
  else {
    dVar23 = *(double *)(lVar6 + 0x210);
    dVar24 = *(double *)(lVar6 + 0x218);
    uVar21 = *(undefined4 *)(lVar6 + 0x220);
    uVar22 = *(undefined4 *)(lVar6 + 0x224);
  }
  local_98.Roll = (double)CONCAT44(uVar22,uVar21);
  if (((dVar23 == (param_1->field0_0x0)._s_0.X) && (dVar24 == (param_1->field0_0x0)._s_0.Y)) &&
     (local_98.Roll == (param_1->field0_0x0)._s_0.Z)) {
    cVar19 = '\0';
  }
  else {
    cVar19 = '\x01';
  }
  if ((((this->bClientCheckEncroachmentOnNetUpdate != '\0') &&
       (pUVar7 = (this->CharacterMovement).field0_0x0.DebugPtr,
       *(double *)&pUVar7->field_0xd8 == 0.0)) &&
      ((*(double *)&pUVar7->field_0xe0 == 0.0 && (*(double *)&pUVar7->field_0xe8 == 0.0)))) &&
     ((cVar19 != '\0' ||
      (fVar3 = *(float *)&this->field_0x170, pUVar14 = AActor::GetWorld((AActor *)this),
      (double)fVar3 == pUVar14->TimeSeconds)))) {
    pUVar14 = AActor::GetWorld((AActor *)this);
    pTVar15 = AActor::GetActorRotation((AActor *)this,local_58);
    lVar6 = *(longlong *)&this->field_0x1b8;
    local_78._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    local_78._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    local_78._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    local_78._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    local_78._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (lVar6 != 0) {
      local_78._0_4_ = *(undefined4 *)(lVar6 + 0x210);
      local_78._4_4_ = *(undefined4 *)(lVar6 + 0x214);
      local_78._8_4_ = *(undefined4 *)(lVar6 + 0x218);
      local_78._12_4_ = *(undefined4 *)(lVar6 + 0x21c);
      local_78._s_0.Z = *(double *)(lVar6 + 0x220);
    }
    local_98.Pitch = pTVar15->Pitch;
    local_98.Yaw = pTVar15->Yaw;
    local_98.Roll = pTVar15->Roll;
    bVar11 = UWorld::EncroachingBlockingGeometry
                       (pUVar14,(AActor *)this,(TVector<double> *)&local_78._s_0,&local_98,
                        (TVector<double> *)0x0);
    if (bVar11) {
      this->bSimGravityDisabled = '\x01';
    }
  }
  pUVar7 = (this->CharacterMovement).field0_0x0.DebugPtr;
  bVar5 = pUVar7->field_0x564;
  pUVar7->field_0x564 = (cVar19 << 5 | bVar5 & 0x20) ^ bVar5 & 0xdf;
  ((this->CharacterMovement).field0_0x0.DebugPtr)->bNetworkUpdateReceived = '\x01';
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar18 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_98.Yaw = (double)(CONCAT44(FVar18.Number,FVar20.Value) & 0xffff6fffffffffff |
                             0x600000000000);
      QueryPerformanceCounter(&local_res8);
      local_98.Pitch = (double)(ulonglong)local_res8.s.LowPart;
      FThreadStats::AddStatMessage(this_00,(FStatMessage *)&local_98);
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

// OnWalkingOffLedge @ 14771d6b0

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
ACharacter::OnWalkingOffLedge
          (ACharacter *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3,float param_4)

{
  UFunction *this_00;
  UClass *pUVar1;
  double local_58;
  double dStack_50;
  double local_48;
  double local_40;
  double dStack_38;
  double local_30;
  double local_28;
  double dStack_20;
  double local_18;
  float local_10;
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_ACharacter_OnWalkingOffLedge);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_58 = (param_1->field0_0x0)._s_0.X;
    dStack_50 = (param_1->field0_0x0)._s_0.Y;
    local_48 = (param_1->field0_0x0)._s_0.Z;
    local_40 = (param_2->field0_0x0)._s_0.X;
    dStack_38 = (param_2->field0_0x0)._s_0.Y;
    local_30 = (param_2->field0_0x0)._s_0.Z;
    local_28 = (param_3->field0_0x0)._s_0.X;
    dStack_20 = (param_3->field0_0x0)._s_0.Y;
    local_18 = (param_3->field0_0x0)._s_0.Z;
    local_10 = param_4;
    (**(code **)(*(longlong *)this + 0x260))(this,this_00,&local_58);
  }
  else {
    (**(code **)(*(longlong *)this + 0x960))(this,param_1,param_2,param_3,param_4);
  }
  return;
}

// OnWalkingOffLedge_Implementation @ 14771d7a0

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
ACharacter::OnWalkingOffLedge_Implementation
          (ACharacter *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3,float param_4)

{
  return;
}

// PawnClientRestart @ 14771dd10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ACharacter::PawnClientRestart(ACharacter *this)

{
  UCharacterMovementComponent *pUVar1;
  
  pUVar1 = (this->CharacterMovement).field0_0x0.DebugPtr;
  if (pUVar1 != (UCharacterMovementComponent *)0x0) {
    (**(code **)(*(longlong *)pUVar1 + 0x510))();
    (**(code **)(*(longlong *)&((this->CharacterMovement).field0_0x0.DebugPtr)->field_0x198 + 0x48))
              ();
  }
  APawn::PawnClientRestart((APawn *)this);
  return;
}

// PlayAnimMontage @ 147720bc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __thiscall
ACharacter::PlayAnimMontage(ACharacter *this,UAnimMontage *param_1,float param_2,FName param_3)

{
  USkeletalMeshComponent *this_00;
  UAnimInstance *this_01;
  float fVar1;
  
  this_00 = (this->Mesh).field0_0x0.DebugPtr;
  if (this_00 == (USkeletalMeshComponent *)0x0) {
    this_01 = (UAnimInstance *)0x0;
  }
  else {
    this_01 = USkeletalMeshComponent::GetAnimInstance(this_00);
  }
  if (((param_1 == (UAnimMontage *)0x0) || (this_01 == (UAnimInstance *)0x0)) ||
     (fVar1 = UAnimInstance::Montage_Play(this_01,param_1,param_2,MontageLength,0.0,true),
     fVar1 <= 0.0)) {
    fVar1 = 0.0;
  }
  else if (param_3 != (FName)0x0) {
    UAnimInstance::Montage_JumpToSection(this_01,param_3,param_1);
  }
  return fVar1;
}

// PossessedBy @ 147720d50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ACharacter::PossessedBy(ACharacter *this,AController *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  
  APawn::PossessedBy((APawn *)this,param_1);
  if ((((this->Mesh).field0_0x0.DebugPtr != (USkeletalMeshComponent *)0x0) &&
      ((this->field_0x58 & 0x10) != 0)) && (this->field_0x60 == '\x02')) {
    lVar2 = (**(code **)(*(longlong *)this + 0x570))(this);
    if (lVar2 != 0) {
      ((this->Mesh).field0_0x0.DebugPtr)->bOnlyAllowAutonomousTickPose = '\x01';
    }
  }
  return;
}

// PostInitializeComponents @ 147720da0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ACharacter::PostInitializeComponents(ACharacter *this)

{
  int *piVar1;
  USkeletalMeshComponent *pUVar2;
  UCharacterMovementComponent *pUVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  ENetMode EVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_ACharacter::PostInitializeComponents(void)_::_2_::FStat_STAT_Character_PostInitComponents>
  FVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar12;
  FNameEntryId FVar13;
  FName FVar14;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FName local_98;
  FName local_90;
  FStatMessage local_80;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_Character_PostInitComponents ==
          (FThreadSafeStaticStat<_public:_virtual_void___cdecl_ACharacter::PostInitializeComponents(void)_::_2_::FStat_STAT_Character_PostInitComponents>
           )0x0) {
        pFVar10 = ::FName::FName(&local_res20,"STAT_Character_PostInitComponents");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Character_PostInitComponents,*pFVar10,
                   L"STAT_Character_PostInitComponents","STATGROUP_Quick","STATCAT_Advanced",
                   L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar11 = StatPtr_STAT_Character_PostInitComponents;
  if (StatPtr_STAT_Character_PostInitComponents ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_ACharacter::PostInitializeComponents(void)_::_2_::FStat_STAT_Character_PostInitComponents>
       )0x0) {
    pFVar10 = ::FName::FName(&local_98,"STAT_Character_PostInitComponents");
    FVar11 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_ACharacter::PostInitializeComponents(void)_::_2_::FStat_STAT_Character_PostInitComponents>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Character_PostInitComponents,
                          *pFVar10,L"STAT_Character_PostInitComponents","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar11;
  bVar5 = false;
  bVar7 = false;
  local_90.ComparisonIndex.Value = 0;
  local_90.Number = 0;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar12 = FVar14.Number;
  if ((FVar13.Value != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar13.Value;
        local_res10.Number = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Character.cpp"
                   ,0x8d);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar13.Value;
      local_res18.s.HighPart = uVar12;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar6 = true;
      goto LAB_147720f12;
    }
  }
  bVar6 = false;
  FVar14 = local_90;
LAB_147720f12:
  APawn::PostInitializeComponents((APawn *)this);
  if (this == (ACharacter *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Test",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Object.h"
                       ,0x760,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((*(uint *)&this->field_0x8 >> 0x1e & 1) == 0) {
    pUVar2 = (this->Mesh).field0_0x0.DebugPtr;
    if (pUVar2 != (USkeletalMeshComponent *)0x0) {
      local_68 = pUVar2->_padding_;
      lStack_60 = pUVar2->_padding_;
      local_58 = pUVar2->_padding_;
      local_48 = (undefined4)pUVar2->_padding_;
      uStack_44 = *(undefined4 *)((longlong)&pUVar2->_padding_ + 4);
      uStack_40 = (undefined4)pUVar2->_padding_;
      uStack_3c = *(undefined4 *)((longlong)&pUVar2->_padding_ + 4);
      local_38 = pUVar2->_padding_;
      (**(code **)(*(longlong *)this + 0x8c0))(this,&local_48);
      pUVar2 = (this->Mesh).field0_0x0.DebugPtr;
      if (((pUVar2->_padding_ & 0x20000) != 0) &&
         (pUVar3 = (this->CharacterMovement).field0_0x0.DebugPtr,
         pUVar3 != (UCharacterMovementComponent *)0x0)) {
        FTickFunction::AddPrerequisite
                  ((FTickFunction *)&pUVar2->_padding_,(UObject *)pUVar3,
                   (FTickFunction *)&pUVar3->field_0x38);
      }
    }
    pUVar3 = (this->CharacterMovement).field0_0x0.DebugPtr;
    if ((pUVar3 != (UCharacterMovementComponent *)0x0) &&
       ((this->CapsuleComponent).field0_0x0.DebugPtr != (UCapsuleComponent *)0x0)) {
      (**(code **)(*(longlong *)&pUVar3->field_0x128 + 0xb8))();
    }
    if (*(longlong *)&this->field_0x2f0 == 0) {
      EVar9 = AActor::InternalGetNetMode((AActor *)this);
      if (((EVar9 != NM_Client) &&
          (pUVar3 = (this->CharacterMovement).field0_0x0.DebugPtr,
          pUVar3 != (UCharacterMovementComponent *)0x0)) &&
         (pUVar3->bRunPhysicsWithNoController != '\0')) {
        (**(code **)(*(longlong *)pUVar3 + 0x8b8))();
      }
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar6) && (FVar14 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_80.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_80.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_80.StatData.Pad[4] = '\0';
      local_80.StatData.Pad[5] = '\0';
      local_80.StatData.Pad[6] = '\0';
      local_80.StatData.Pad[7] = '\0';
      local_80.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_80.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_80.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_80.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_80);
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

// PostLoad @ 1477211e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ACharacter::PostLoad(ACharacter *this)

{
  AActor::PostLoad((AActor *)this);
  this->field_0x16b = 0;
  return;
}

// PostNetReceive @ 1477211f0

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

void __thiscall ACharacter::PostNetReceive(ACharacter *this)

{
  undefined1 *puVar1;
  uchar uVar2;
  undefined1 uVar3;
  UCharacterMovementComponent *pUVar4;
  uchar uVar5;
  double *pdVar6;
  byte bVar7;
  double dVar8;
  uint uVar9;
  uint uVar10;
  
  if (this->field_0x168 != '\x01') goto LAB_1477212fa;
  pdVar6 = (double *)(**(code **)(*(longlong *)this + 0x8e8))();
  dVar8 = *(double *)&this->PreNetReceivedGravityDirection - *pdVar6;
  uVar9 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar10 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (((__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) & uVar10,SUB84(dVar8,0) & uVar9)) ||
      (dVar8 = *(double *)&(this->PreNetReceivedGravityDirection).field_0x8 - pdVar6[1],
      __real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) & uVar10,SUB84(dVar8,0) & uVar9))) ||
     (dVar8 = *(double *)&(this->PreNetReceivedGravityDirection).field_0x10 - pdVar6[2],
     __real_3f1a36e2e0000000 <
     (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) & uVar10,SUB84(dVar8,0) & uVar9))) {
    bVar7 = 1;
  }
  else {
    bVar7 = 0;
  }
  pUVar4 = (this->CharacterMovement).field0_0x0.DebugPtr;
  pUVar4->bNetworkGravityDirectionChanged = bVar7;
  uVar2 = this->ReplicatedMovementMode;
  if (SavedMovementMode == uVar2) {
    uVar5 = (**(code **)(*(longlong *)(this->CharacterMovement).field0_0x0.DebugPtr + 0x668))();
    if (uVar5 != uVar2) goto LAB_1477212b1;
    bVar7 = 0;
  }
  else {
LAB_1477212b1:
    bVar7 = 0x80;
  }
  puVar1 = &((this->CharacterMovement).field0_0x0.DebugPtr)->field_0x564;
  *puVar1 = *puVar1 | bVar7;
  pUVar4 = (this->CharacterMovement).field0_0x0.DebugPtr;
  uVar3 = pUVar4->field_0x564;
  if ((((bool)pUVar4->bNetworkMovementModeChanged) || (pUVar4->bJustTeleported != '\0')) ||
     (pUVar4->bNetworkGravityDirectionChanged != 0)) {
    bVar7 = 0x40;
  }
  else {
    bVar7 = 0;
  }
  pUVar4->field_0x564 = (bVar7 | uVar3 & 0x40) ^ uVar3 & 0xbf;
LAB_1477212fa:
  AActor::PostNetReceive((AActor *)this);
  return;
}

// PostNetReceiveLocationAndRotation @ 147721310

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

void __thiscall ACharacter::PostNetReceiveLocationAndRotation(ACharacter *this)

{
  undefined1 *puVar1;
  UPrimitiveComponent *pUVar2;
  longlong lVar3;
  UCharacterMovementComponent *pUVar4;
  code *pcVar5;
  TQuat<double> *pTVar6;
  byte bVar7;
  double local_78;
  double dStack_70;
  double local_68;
  TVector<double>_u_0 local_60;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  TQuat<double> local_28;
  
  if (this->field_0x168 == '\x01') {
    pUVar2 = (this->ReplicatedBasedMovement).MovementBase.field0_0x0.DebugPtr;
    if ((pUVar2 == (UPrimitiveComponent *)0x0) || (pUVar2->field_0x1ab != '\x02')) {
      lVar3 = *(longlong *)&this->field_0x1b8;
      local_68 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_78 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_70 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      if (lVar3 != 0) {
        local_68 = *(double *)(lVar3 + 0x220);
        local_78 = *(double *)(lVar3 + 0x210);
        dStack_70 = *(double *)(lVar3 + 0x218);
      }
      FRepMovement::RebaseOntoLocalOrigin
                ((TVector<double> *)&local_60._s_0,(TVector<double> *)&this->field_0x100,
                 (AActor *)this);
      lVar3 = *(longlong *)&this->field_0x1b8;
      if (lVar3 == 0) {
        local_48 = 0;
        uStack_44 = 0;
        uStack_40 = 0;
        uStack_3c = 0;
        local_38 = ___xmm_3ff00000000000000000000000000000;
        uStack_30 = _UNK_15061cbc8;
      }
      else {
        local_48 = *(undefined4 *)(lVar3 + 0x1f0);
        uStack_44 = *(undefined4 *)(lVar3 + 500);
        uStack_40 = *(undefined4 *)(lVar3 + 0x1f8);
        uStack_3c = *(undefined4 *)(lVar3 + 0x1fc);
        local_38 = *(undefined8 *)(lVar3 + 0x200);
        uStack_30 = *(undefined8 *)(lVar3 + 0x208);
      }
      ((this->CharacterMovement).field0_0x0.DebugPtr)->bNetworkSmoothingComplete = '\0';
      if (((local_78 == local_60._s_0.X) && (dStack_70 == local_60._s_0.Y)) &&
         (local_68 == local_60._s_0.Z)) {
        bVar7 = 0;
      }
      else {
        bVar7 = 0x20;
      }
      puVar1 = &((this->CharacterMovement).field0_0x0.DebugPtr)->field_0x564;
      *puVar1 = *puVar1 | bVar7;
      pUVar4 = (this->CharacterMovement).field0_0x0.DebugPtr;
      pcVar5 = *(code **)(*(longlong *)&pUVar4->field_0x198 + 0x20);
      pTVar6 = UE::Math::TRotator<double>::Quaternion
                         ((TRotator<double> *)&this->field_0x118,&local_28);
      (*pcVar5)(&pUVar4->field_0x198,&local_78,&local_48,&local_60,pTVar6);
      (**(code **)(*(longlong *)this + 0x9e0))(this,&local_78,&local_48);
    }
    ((this->CharacterMovement).field0_0x0.DebugPtr)->bNetworkUpdateReceived = '\x01';
  }
  return;
}

// PreNetReceive @ 1477214c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ACharacter::PreNetReceive(ACharacter *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 local_28 [32];
  
  SavedMovementMode = this->ReplicatedMovementMode;
  puVar3 = (undefined8 *)(**(code **)(*(longlong *)this + 0x8e8))(this,local_28);
  uVar2 = puVar3[1];
  uVar1 = puVar3[2];
  *(undefined8 *)&this->PreNetReceivedGravityDirection = *puVar3;
  *(undefined8 *)&(this->PreNetReceivedGravityDirection).field_0x8 = uVar2;
  *(undefined8 *)&(this->PreNetReceivedGravityDirection).field_0x10 = uVar1;
  AActor::PreNetReceive((AActor *)this);
  return;
}

// PreReplication @ 147721510

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ACharacter::PreReplication(ACharacter *this,IRepChangedPropertyTracker *param_1)

{
  undefined1 *puVar1;
  double dVar2;
  undefined8 uVar3;
  USkeletalMeshComponent *pUVar4;
  UPrimitiveComponent *pUVar5;
  longlong lVar6;
  UCharacterMovementComponent *pUVar7;
  double dVar8;
  undefined8 uVar9;
  bool bVar10;
  char cVar11;
  uchar uVar12;
  UAnimInstance *pUVar13;
  FAnimMontageInstance *pFVar14;
  UWorld *pUVar15;
  TVector<double>_u_0 *pTVar16;
  UAnimMontage *this_00;
  TVector<double> *pTVar17;
  FNetPropertyConditionManager *pFVar18;
  TRotator<double> *pTVar19;
  bool bVar20;
  byte bVar21;
  TVector<double>_u_0 local_48;
  TRotator<double> local_30;
  
  APawn::PreReplication((APawn *)this,param_1);
  if (((this->field_0x58 & 0x10) == 0) ||
     ((bVar10 = FRootMotionSourceGroup::HasActiveRootMotionSources
                          (&((this->CharacterMovement).field0_0x0.DebugPtr)->CurrentRootMotion),
      !bVar10 &&
      ((pUVar4 = (this->Mesh).field0_0x0.DebugPtr, pUVar4 == (USkeletalMeshComponent *)0x0 ||
       (cVar11 = (**(code **)(pUVar4->_padding_ + 0xc38))(), cVar11 == '\0')))))) {
    bVar10 = (this->RepRootMotion).bIsActive;
    (this->RepRootMotion).bIsActive = false;
    (this->RepRootMotion).Animation.field0_0x0.DebugPtr = (UAnimSequenceBase *)0x0;
    FRootMotionSourceGroup::Clear(&(this->RepRootMotion).AuthoritativeRootMotion);
  }
  else {
    pUVar4 = (this->Mesh).field0_0x0.DebugPtr;
    pFVar14 = (FAnimMontageInstance *)0x0;
    if ((pUVar4 != (USkeletalMeshComponent *)0x0) &&
       (pUVar13 = USkeletalMeshComponent::GetAnimInstance(pUVar4), pUVar13 != (UAnimInstance *)0x0))
    {
      pUVar13 = USkeletalMeshComponent::GetAnimInstance((this->Mesh).field0_0x0.DebugPtr);
      pFVar14 = UAnimInstance::GetRootMotionMontageInstance(pUVar13);
    }
    (this->RepRootMotion).bIsActive = true;
    pUVar5 = (this->BasedMovement).MovementBase.field0_0x0.DebugPtr;
    if ((pUVar5 == (UPrimitiveComponent *)0x0) || (pUVar5->field_0x1ab != '\x02')) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    (this->RepRootMotion).bRelativePosition = bVar10;
    if ((((this->BasedMovement).bRelativeRotation == '\0') ||
        (pUVar5 = (this->BasedMovement).MovementBase.field0_0x0.DebugPtr,
        pUVar5 == (UPrimitiveComponent *)0x0)) || (pUVar5->field_0x1ab != '\x02')) {
      bVar20 = false;
    }
    else {
      bVar20 = true;
    }
    (this->RepRootMotion).bRelativeRotation = bVar20;
    if (bVar10 == false) {
      pUVar15 = AActor::GetWorld((AActor *)this);
      lVar6 = *(longlong *)&this->field_0x1b8;
      local_48._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      local_48._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      local_48._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      local_48._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      local_48._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      if (lVar6 != 0) {
        local_48._0_4_ = *(undefined4 *)(lVar6 + 0x210);
        local_48._4_4_ = *(undefined4 *)(lVar6 + 0x214);
        local_48._8_4_ = *(undefined4 *)(lVar6 + 0x218);
        local_48._12_4_ = *(undefined4 *)(lVar6 + 0x21c);
        local_48._s_0.Z = *(double *)(lVar6 + 0x220);
      }
      pTVar16 = &FRepMovement::RebaseOntoZeroOrigin
                           ((TVector<double> *)&local_30,(TVector<double> *)&local_48._s_0,
                            &pUVar15->OriginLocation)->field0_0x0;
    }
    else {
      pTVar16 = &local_48;
      local_48._s_0.X = *(double *)&(this->BasedMovement).Location;
      local_48._s_0.Y = *(double *)&(this->BasedMovement).Location.field_0x8;
      local_48._s_0.Z = *(double *)&(this->BasedMovement).Location.field_0x10;
    }
    dVar8 = (pTVar16->_s_0).Y;
    dVar2 = (pTVar16->_s_0).Z;
    *(double *)&(this->RepRootMotion).Location =
         (((TVector<double>_u_0 *)&(pTVar16->_s_0).X)->_s_0).X;
    *(double *)&(this->RepRootMotion).Location.field_0x8 = dVar8;
    *(double *)&(this->RepRootMotion).Location.field_0x10 = dVar2;
    if ((this->RepRootMotion).bRelativeRotation == false) {
      pTVar16 = (TVector<double>_u_0 *)AActor::GetActorRotation((AActor *)this,&local_30);
    }
    else {
      pTVar16 = &local_48;
      local_48._s_0.X = (this->BasedMovement).Rotation.Pitch;
      local_48._s_0.Y = (this->BasedMovement).Rotation.Yaw;
      local_48._s_0.Z = (this->BasedMovement).Rotation.Roll;
    }
    dVar2 = (pTVar16->_s_0).Y;
    (this->RepRootMotion).Rotation.Pitch = (pTVar16->_s_0).X;
    (this->RepRootMotion).Rotation.Yaw = dVar2;
    (this->RepRootMotion).Rotation.Roll = (pTVar16->_s_0).Z;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 = (this->BasedMovement).MovementBase.field0_0x0.DebugPtr,
       pUVar5 != (UPrimitiveComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->RepRootMotion).MovementBase.field0_0x0 = (this->BasedMovement).MovementBase.field0_0x0;
    (this->RepRootMotion).MovementBaseBoneName = (this->BasedMovement).BoneName;
    if (pFVar14 == (FAnimMontageInstance *)0x0) {
      (this->RepRootMotion).Animation.field0_0x0.DebugPtr = (UAnimSequenceBase *)0x0;
    }
    else {
      bVar10 = UAnimMontage::IsDynamicMontage((pFVar14->Montage).field0_0x0.DebugPtr);
      this_00 = (pFVar14->Montage).field0_0x0.DebugPtr;
      if (bVar10) {
        this_00 = (UAnimMontage *)UAnimMontage::GetFirstAnimReference(this_00);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UAnimMontage *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      (this->RepRootMotion).Animation.field0_0x0.DebugPtr = (UAnimSequenceBase *)this_00;
      (this->RepRootMotion).Position = pFVar14->Position;
    }
    FRootMotionSourceGroup::operator=
              (&(this->RepRootMotion).AuthoritativeRootMotion,
               &((this->CharacterMovement).field0_0x0.DebugPtr)->CurrentRootMotion);
    pTVar17 = UCharacterMovementComponent::GetCurrentAcceleration
                        ((this->CharacterMovement).field0_0x0.DebugPtr,(TVector<double> *)&local_30)
    ;
    bVar10 = true;
    dVar8 = (pTVar17->field0_0x0)._s_0.Y;
    dVar2 = (pTVar17->field0_0x0)._s_0.Z;
    *(double *)&(this->RepRootMotion).Acceleration = (pTVar17->field0_0x0)._s_0.X;
    *(double *)&(this->RepRootMotion).Acceleration.field_0x8 = dVar8;
    *(double *)&(this->RepRootMotion).Acceleration.field_0x10 = dVar2;
    pUVar7 = (this->CharacterMovement).field0_0x0.DebugPtr;
    uVar9 = *(undefined8 *)&pUVar7->field_0xe0;
    uVar3 = *(undefined8 *)&pUVar7->field_0xe8;
    *(undefined8 *)&(this->RepRootMotion).LinearVelocity = *(undefined8 *)&pUVar7->field_0xd8;
    *(undefined8 *)&(this->RepRootMotion).LinearVelocity.field_0x8 = uVar9;
    *(undefined8 *)&(this->RepRootMotion).LinearVelocity.field_0x10 = uVar3;
  }
  pFVar18 = UE::Net::Private::FNetPropertyConditionManager::Get();
  UE::Net::Private::FNetPropertyConditionManager::SetPropertyActiveOverride
            (pFVar18,(UObject *)this,0x18,bVar10);
  this->bProxyIsJumpForceApplied = '\0';
  pUVar7 = (this->CharacterMovement).field0_0x0.DebugPtr;
  bVar21 = 0;
  if (0.0 < this->JumpForceTimeRemaining) {
    bVar21 = 4;
  }
  this->field_0x460 = this->field_0x460 | bVar21;
  uVar12 = (**(code **)(*(longlong *)pUVar7 + 0x668))();
  bVar21 = this->field_0x58;
  this->ReplicatedMovementMode = uVar12;
  pUVar7 = (this->CharacterMovement).field0_0x0.DebugPtr;
  dVar8 = (pUVar7->GravityDirection).field0_0x0._s_0.Y;
  dVar2 = (pUVar7->GravityDirection).field0_0x0._s_0.Z;
  *(double *)&this->ReplicatedGravityDirection = (pUVar7->GravityDirection).field0_0x0._s_0.X;
  *(double *)&(this->ReplicatedGravityDirection).field_0x8 = dVar8;
  *(double *)&(this->ReplicatedGravityDirection).field_0x10 = dVar2;
  if ((bVar21 & 0x10) != 0) {
    FBasedMovementInfo::operator=(&this->ReplicatedBasedMovement,&this->BasedMovement);
    pUVar5 = (this->BasedMovement).MovementBase.field0_0x0.DebugPtr;
    if ((pUVar5 != (UPrimitiveComponent *)0x0) && (pUVar5->field_0x1ab == '\x02')) {
      pUVar7 = (this->CharacterMovement).field0_0x0.DebugPtr;
      if ((*(double *)&pUVar7->field_0xd8 == 0.0) &&
         ((*(double *)&pUVar7->field_0xe0 == 0.0 && (*(double *)&pUVar7->field_0xe8 == 0.0)))) {
        bVar21 = 0;
      }
      else {
        bVar21 = 4;
      }
      (this->ReplicatedBasedMovement).bServerHasVelocity = '\0';
      puVar1 = &(this->ReplicatedBasedMovement).field_0x2;
      *puVar1 = *puVar1 | bVar21;
      if ((((this->BasedMovement).bRelativeRotation == '\0') ||
          (pUVar5 = (this->BasedMovement).MovementBase.field0_0x0.DebugPtr,
          pUVar5 == (UPrimitiveComponent *)0x0)) || (pUVar5->field_0x1ab != '\x02')) {
        pTVar19 = AActor::GetActorRotation((AActor *)this,&local_30);
        dVar2 = pTVar19->Yaw;
        (this->ReplicatedBasedMovement).Rotation.Pitch = pTVar19->Pitch;
        (this->ReplicatedBasedMovement).Rotation.Yaw = dVar2;
        (this->ReplicatedBasedMovement).Rotation.Roll = pTVar19->Roll;
      }
    }
  }
  pFVar18 = UE::Net::Private::FNetPropertyConditionManager::Get();
  UE::Net::Private::FNetPropertyConditionManager::SetPropertyActiveOverride
            (pFVar18,(UObject *)this,0xe,(bool)((byte)this->field_0x58 >> 4 & 1));
  pUVar7 = (this->CharacterMovement).field0_0x0.DebugPtr;
  if ((pUVar7->NetworkSmoothingMode == Linear) ||
     (pUVar7->bNetworkAlwaysReplicateTransformUpdateTimestamp != '\0')) {
    this->ReplicatedServerLastTransformUpdateTimeStamp = pUVar7->ServerLastTransformUpdateTimeStamp;
  }
  else {
    this->ReplicatedServerLastTransformUpdateTimeStamp = 0.0;
  }
  return;
}

// PreReplicationForReplay @ 1477219a0

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
ACharacter::PreReplicationForReplay(ACharacter *this,IRepChangedPropertyTracker *param_1)

{
  bool bVar1;
  ENetMode EVar2;
  UWorld *this_00;
  double *pdVar3;
  undefined1 local_28 [32];
  
  AActor::PreReplicationForReplay((AActor *)this,param_1);
  this_00 = AActor::GetWorld((AActor *)this);
  if (this_00 != (UWorld *)0x0) {
    bVar1 = UWorld::IsRecordingClientReplay(this_00);
    if (((bVar1) && (*(longlong *)&this->field_0x2f0 != 0)) && (this->field_0x168 == '\x02')) {
      EVar2 = AActor::InternalGetNetMode((AActor *)this);
      if (EVar2 == NM_Client) {
        pdVar3 = (double *)
                 (**(code **)(**(longlong **)&this->field_0x2f0 + 0x7a8))
                           (*(longlong **)&this->field_0x2f0,local_28);
        APawn::SetRemoteViewPitch((APawn *)this,*pdVar3);
      }
    }
    this->ReplayLastTransformUpdateTimeStamp = (float)this_00->TimeSeconds;
  }
  return;
}

// RecalculateBaseEyeHeight @ 147722a80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ACharacter::RecalculateBaseEyeHeight(ACharacter *this)

{
  int iVar1;
  UClass *this_00;
  UObject *pUVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  UClass *pUVar6;
  
  if (this->bIsCrouched != '\0') {
    *(float *)&this->field_0x2cc = this->CrouchedEyeHeight;
    return;
  }
  this_00 = *(UClass **)&this->field_0x10;
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar2 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar6 = APawn::StaticClass();
  lVar3 = *(longlong *)&pUVar2->field_0x10;
  iVar1 = (int)pUVar6->_padding_;
  if ((*(int *)(lVar3 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar6->_padding_)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Class->GetDefaultObject()->IsA(T::StaticClass())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                       ,0x1469,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  *(undefined4 *)&this->field_0x2cc =
       *(undefined4 *)&(this_00->ClassDefaultObject).field0_0x0.DebugPtr[0x11].field_0x24;
  return;
}

// RecalculateCrouchedEyeHeight @ 147722aa0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ACharacter::RecalculateCrouchedEyeHeight(ACharacter *this)

{
  UCharacterMovementComponent *this_00;
  float fVar1;
  
  this_00 = (this->CharacterMovement).field0_0x0.DebugPtr;
  if (this_00 != (UCharacterMovementComponent *)0x0) {
    fVar1 = UCharacterMovementComponent::GetCrouchedHalfHeight(this_00);
    this->CrouchedEyeHeight = fVar1 * __real_3f4ccccd;
  }
  return;
}

// ResetJumpState @ 147724cd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ACharacter::ResetJumpState(ACharacter *this)

{
  UCharacterMovementComponent *pUVar1;
  char cVar2;
  
  this->bPressedJump = '\0';
  this->bWasJumping = '\0';
  this->JumpKeyHoldTime = 0.0;
  this->JumpForceTimeRemaining = 0.0;
  pUVar1 = (this->CharacterMovement).field0_0x0.DebugPtr;
  if (pUVar1 != (UCharacterMovementComponent *)0x0) {
    cVar2 = (**(code **)(*(longlong *)&pUVar1->field_0x128 + 0xd8))();
    if (cVar2 == '\0') {
      this->JumpCurrentCount = 0;
      this->JumpCurrentCountPreJump = 0;
    }
  }
  return;
}

// Restart @ 147725340

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ACharacter::Restart(ACharacter *this)

{
  UCharacterMovementComponent *pUVar1;
  
  APawn::Restart((APawn *)this);
  this->bPressedJump = '\0';
  this->JumpCurrentCount = 0;
  this->JumpCurrentCountPreJump = 0;
  (**(code **)(*(longlong *)this + 0x918))(this);
  (**(code **)(*(longlong *)this + 0x978))(this,1);
  pUVar1 = (this->CharacterMovement).field0_0x0.DebugPtr;
  if (pUVar1 != (UCharacterMovementComponent *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014772538c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar1 + 0x8b8))();
    return;
  }
  return;
}

// RestoreReplicatedMove @ 1477253e0

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

bool __thiscall
ACharacter::RestoreReplicatedMove(ACharacter *this,FSimulatedRootMotionReplicatedMove *param_1)

{
  undefined1 *puVar1;
  double dVar2;
  undefined1 auVar3 [16];
  UPrimitiveComponent *pUVar4;
  FName FVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  TRotationMatrix<double> *pTVar10;
  TQuatRotationTranslationMatrix<double> *pTVar11;
  TRotator<double> *pTVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar27;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auStackY_2b8 [32];
  TVector<double>_u_0 local_288;
  TVector<double>_u_0 local_268;
  TRotator<double> local_248;
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  TMatrix<double> local_208;
  TRotationMatrix<double> local_188;
  TQuatRotationTranslationMatrix<double> local_108;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  pUVar4 = (param_1->RootMotion).MovementBase.field0_0x0.DebugPtr;
  FVar5 = (param_1->RootMotion).MovementBaseBoneName;
  if ((param_1->RootMotion).bRelativePosition == false) {
    FRepMovement::RebaseOntoLocalOrigin
              ((TVector<double> *)&local_268._s_0,(TVector<double> *)&(param_1->RootMotion).Location
               ,(AActor *)this);
    local_248.Pitch = (param_1->RootMotion).Rotation.Pitch;
    local_248.Yaw = (param_1->RootMotion).Rotation.Yaw;
    local_248.Roll = (param_1->RootMotion).Rotation.Roll;
    local_288._s_0.X = local_268._s_0.X;
    local_288._s_0.Y = local_268._s_0.Y;
    local_288._s_0.Z = local_268._s_0.Z;
    AActor::SetActorLocationAndRotation
              ((AActor *)this,(TVector<double> *)&local_288._s_0,&local_248,false,(FHitResult *)0x0,
               None);
  }
  else {
    if ((pUVar4 == (UPrimitiveComponent *)0x0) || (pUVar4->field_0x1ab != '\x02')) {
      return false;
    }
    MovementBaseUtility::GetMovementBaseTransform
              (pUVar4,FVar5,(TVector<double> *)&local_288._s_0,(TQuat<double> *)local_228);
    auVar3 = *(undefined1 (*) [16])&(param_1->RootMotion).Location;
    dVar2 = *(double *)&(param_1->RootMotion).Location.field_0x10;
    dVar21 = local_228._8_8_;
    dVar9 = local_218._0_8_;
    auVar24 = blendpd(local_228,local_218,2);
    dVar6 = local_218._8_8_;
    dVar27 = auVar3._8_8_;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = dVar2;
    auVar17 = blendpd(auVar3,auVar17,2);
    auVar25._0_8_ = dVar27 * local_228._0_8_ - dVar21 * auVar3._0_8_;
    auVar25._8_8_ = dVar2 * dVar21 - dVar9 * dVar27;
    auVar18._0_8_ = auVar17._0_8_ * dVar9 - auVar24._0_8_ * dVar2;
    auVar18._8_8_ = auVar17._8_8_ * dVar6 - auVar24._8_8_ * 0.0;
    dVar7 = auVar25._8_8_ + auVar25._8_8_;
    dVar8 = auVar18._0_8_ + auVar18._0_8_;
    uVar13 = (undefined4)((ulonglong)dVar8 >> 0x20);
    auVar17 = blendpd(auVar25,auVar18,2);
    auVar26._0_8_ = auVar17._0_8_ + auVar17._0_8_;
    auVar26._8_8_ = auVar17._8_8_ + auVar17._8_8_;
    auVar22._8_4_ = SUB84(dVar8,0);
    auVar22._0_8_ = dVar7;
    auVar22._12_4_ = uVar13;
    auVar19._8_4_ = SUB84(dVar8,0);
    auVar19._0_8_ = dVar7;
    auVar19._12_4_ = uVar13;
    auVar17 = blendpd(auVar19,auVar26,2);
    auVar23._0_8_ = auVar22._8_8_ * local_228._0_8_ - dVar7 * dVar21;
    auVar23._8_8_ = auVar26._0_8_ * dVar21 - dVar8 * dVar9;
    auVar20._0_8_ = auVar17._0_8_ * dVar9 - auVar26._0_8_ * auVar24._0_8_;
    auVar20._8_8_ = auVar17._8_8_ * dVar6 - auVar26._8_8_ * auVar24._8_8_;
    auVar17 = blendpd(auVar23,auVar20,2);
    local_268._s_0.Z = local_288._s_0.Z + auVar26._0_8_ * dVar6 + dVar2 + auVar17._0_8_;
    dVar2 = dVar7 * dVar6 + auVar3._0_8_ + auVar23._8_8_ + local_288._s_0.X;
    dVar9 = dVar8 * dVar6 + dVar27 + auVar20._0_8_ + local_288._s_0.Y;
    if ((param_1->RootMotion).bRelativeRotation == false) {
      uVar13 = *(undefined4 *)&(param_1->RootMotion).Rotation.Pitch;
      uVar14 = *(undefined4 *)((longlong)&(param_1->RootMotion).Rotation.Pitch + 4);
      uVar15 = *(undefined4 *)&(param_1->RootMotion).Rotation.Yaw;
      uVar16 = *(undefined4 *)((longlong)&(param_1->RootMotion).Rotation.Yaw + 4);
      local_248.Roll = (param_1->RootMotion).Rotation.Roll;
    }
    else {
      pTVar10 = UE::Math::TRotationMatrix<double>::TRotationMatrix<double>
                          (&local_188,&(param_1->RootMotion).Rotation);
      pTVar11 = UE::Math::TQuatRotationTranslationMatrix<double>::
                TQuatRotationTranslationMatrix<double>
                          (&local_108,(TQuat<double> *)local_228,
                           &UE::Math::TVector<double>::ZeroVector);
      VectorMatrixMultiply(&local_208,(TMatrix<double> *)pTVar10,(TMatrix<double> *)pTVar11);
      pTVar12 = UE::Math::TMatrix<double>::Rotator(&local_208,(TRotator<double> *)&local_268._s_0);
      uVar13 = *(undefined4 *)&pTVar12->Pitch;
      uVar14 = *(undefined4 *)((longlong)&pTVar12->Pitch + 4);
      uVar15 = *(undefined4 *)&pTVar12->Yaw;
      uVar16 = *(undefined4 *)((longlong)&pTVar12->Yaw + 4);
      local_248.Roll = pTVar12->Roll;
    }
    local_248.Pitch = (double)CONCAT44(uVar14,uVar13);
    local_248.Yaw = (double)CONCAT44(uVar16,uVar15);
    local_268._8_4_ = SUB84(dVar9,0);
    local_268._s_0.X = dVar2;
    local_268._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    AActor::SetActorLocationAndRotation
              ((AActor *)this,(TVector<double> *)&local_268._s_0,&local_248,false,(FHitResult *)0x0,
               None);
  }
  ((this->CharacterMovement).field0_0x0.DebugPtr)->bJustTeleported = '\x01';
  (**(code **)(*(longlong *)this + 0x8b8))(this,pUVar4,FVar5,1);
  return true;
}

// RootMotionDebugClientPrintOnScreen @ 1477259c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ACharacter::RootMotionDebugClientPrintOnScreen(ACharacter *this,FString *param_1)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  UFunction *pUVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  if (&local_18 != param_1) {
    uVar1 = (param_1->Data).ArrayNum;
    _Src = (param_1->Data).AllocatorInstance.Data;
    local_18.Data.ArrayMax = 0;
    local_18.Data.ArrayNum = uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar1,0,(ForAnyElementType *)&local_18,uVar1,&local_18.Data.ArrayMax);
      memcpy(local_18.Data.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 * 2);
    }
  }
  pUVar2 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_ACharacter_RootMotionDebugClientPrintOnScreen);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar2,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// RootMotionDebugClientPrintOnScreen_Implementation @ 147725a90

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
ACharacter::RootMotionDebugClientPrintOnScreen_Implementation(ACharacter *this,FString *param_1)

{
  RootMotionSourceDebug::PrintOnScreenServerMsg(param_1);
  return;
}

// SaveRelativeBasedMovement @ 147725dc0

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
ACharacter::SaveRelativeBasedMovement
          (ACharacter *this,TVector<double> *param_1,TRotator<double> *param_2,bool param_3)

{
  undefined1 *puVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  *(double *)&(this->BasedMovement).Location = (param_1->field0_0x0)._s_0.X;
  *(double *)&(this->BasedMovement).Location.field_0x8 = dVar3;
  *(double *)&(this->BasedMovement).Location.field_0x10 = dVar2;
  dVar2 = param_2->Yaw;
  (this->BasedMovement).Rotation.Pitch = param_2->Pitch;
  (this->BasedMovement).Rotation.Yaw = dVar2;
  dVar2 = param_2->Roll;
  (this->BasedMovement).bRelativeRotation = '\0';
  puVar1 = &(this->BasedMovement).field_0x2;
  *puVar1 = *puVar1 | param_3 * '\x02';
  (this->BasedMovement).Rotation.Roll = dVar2;
  return;
}

// ServerMove @ 147726b90

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
ACharacter::ServerMove
          (ACharacter *this,float param_1,FVector_NetQuantize10 *param_2,
          FVector_NetQuantize100 *param_3,uchar param_4,uchar param_5,uint param_6,
          UPrimitiveComponent *param_7,FName param_8,uchar param_9)

{
  UFunction *pUVar1;
  float local_68 [2];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  uchar local_30;
  uchar local_2f;
  uint local_2c;
  UPrimitiveComponent *local_28;
  FName local_20;
  uchar local_18;
  
  local_60 = *(undefined8 *)param_2;
  uStack_58 = *(undefined8 *)&param_2->field_0x8;
  local_30 = param_4;
  local_2f = param_5;
  local_2c = param_6;
  local_28 = param_7;
  local_50 = *(undefined8 *)&param_2->field_0x10;
  local_20 = param_8;
  local_48 = *(undefined8 *)param_3;
  uStack_40 = *(undefined8 *)&param_3->field_0x8;
  local_38 = *(undefined8 *)&param_3->field_0x10;
  local_18 = param_9;
  local_68[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_ACharacter_ServerMove);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,local_68);
  return;
}

// ServerMoveDual @ 147726c50

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
ACharacter::ServerMoveDual
          (ACharacter *this,float param_1,FVector_NetQuantize10 *param_2,uchar param_3,uint param_4,
          float param_5,FVector_NetQuantize10 *param_6,FVector_NetQuantize100 *param_7,uchar param_8
          ,uchar param_9,uint param_10,UPrimitiveComponent *param_11,FName param_12,uchar param_13)

{
  UFunction *pUVar1;
  float local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  uchar local_68;
  uint local_64;
  float local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  uchar local_28;
  uchar local_27;
  uint local_24;
  UPrimitiveComponent *local_20;
  FName local_18;
  uchar local_10;
  
  local_80 = *(undefined8 *)param_2;
  uStack_78 = *(undefined8 *)&param_2->field_0x8;
  local_70 = *(undefined8 *)&param_2->field_0x10;
  local_64 = param_4;
  local_60 = param_5;
  local_58 = *(undefined8 *)param_6;
  uStack_50 = *(undefined8 *)&param_6->field_0x8;
  local_48 = *(undefined8 *)&param_6->field_0x10;
  local_40 = *(undefined8 *)param_7;
  uStack_38 = *(undefined8 *)&param_7->field_0x8;
  local_30 = *(undefined8 *)&param_7->field_0x10;
  local_28 = param_8;
  local_27 = param_9;
  local_24 = param_10;
  local_20 = param_11;
  local_18 = param_12;
  local_10 = param_13;
  local_88[0] = param_1;
  local_68 = param_3;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_ACharacter_ServerMoveDual);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,local_88);
  return;
}

// ServerMoveDualHybridRootMotion @ 147726d50

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
ACharacter::ServerMoveDualHybridRootMotion
          (ACharacter *this,float param_1,FVector_NetQuantize10 *param_2,uchar param_3,uint param_4,
          float param_5,FVector_NetQuantize10 *param_6,FVector_NetQuantize100 *param_7,uchar param_8
          ,uchar param_9,uint param_10,UPrimitiveComponent *param_11,FName param_12,uchar param_13)

{
  UFunction *pUVar1;
  float local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  uchar local_68;
  uint local_64;
  float local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  uchar local_28;
  uchar local_27;
  uint local_24;
  UPrimitiveComponent *local_20;
  FName local_18;
  uchar local_10;
  
  local_80 = *(undefined8 *)param_2;
  uStack_78 = *(undefined8 *)&param_2->field_0x8;
  local_70 = *(undefined8 *)&param_2->field_0x10;
  local_64 = param_4;
  local_60 = param_5;
  local_58 = *(undefined8 *)param_6;
  uStack_50 = *(undefined8 *)&param_6->field_0x8;
  local_48 = *(undefined8 *)&param_6->field_0x10;
  local_40 = *(undefined8 *)param_7;
  uStack_38 = *(undefined8 *)&param_7->field_0x8;
  local_30 = *(undefined8 *)&param_7->field_0x10;
  local_28 = param_8;
  local_27 = param_9;
  local_24 = param_10;
  local_20 = param_11;
  local_18 = param_12;
  local_10 = param_13;
  local_88[0] = param_1;
  local_68 = param_3;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_ACharacter_ServerMoveDualHybridRootMotion);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,local_88);
  return;
}

// ServerMoveDualHybridRootMotion_Implementation @ 147726e50

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
ACharacter::ServerMoveDualHybridRootMotion_Implementation
          (ACharacter *this,float param_1,FVector_NetQuantize10 *param_2,uchar param_3,uint param_4,
          float param_5,FVector_NetQuantize10 *param_6,FVector_NetQuantize100 *param_7,uchar param_8
          ,uchar param_9,uint param_10,UPrimitiveComponent *param_11,FName param_12,uchar param_13)

{
  UCharacterMovementComponent *pUVar1;
  undefined4 in_XMM1_Db;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_18 = *(undefined8 *)&param_2->field_0x10;
  pUVar1 = (this->CharacterMovement).field0_0x0.DebugPtr;
  local_68 = *(undefined8 *)param_7;
  uStack_60 = *(undefined8 *)&param_7->field_0x8;
  local_58 = *(undefined8 *)&param_7->field_0x10;
  local_48 = *(undefined8 *)param_6;
  uStack_40 = *(undefined8 *)&param_6->field_0x8;
  local_38 = *(undefined8 *)&param_6->field_0x10;
  local_28 = *(undefined8 *)param_2;
  uStack_20 = *(undefined8 *)&param_2->field_0x8;
  (**(code **)(*(longlong *)pUVar1 + 0xbb0))
            (pUVar1,CONCAT44(in_XMM1_Db,param_1),&local_28,param_1,param_4,param_5,&local_48,
             &local_68,param_8,param_9,param_10,param_11,param_12,param_13);
  return;
}

// ServerMoveDualHybridRootMotion_Validate @ 147726f50

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
ACharacter::ServerMoveDualHybridRootMotion_Validate
          (ACharacter *this,float param_1,FVector_NetQuantize10 *param_2,uchar param_3,uint param_4,
          float param_5,FVector_NetQuantize10 *param_6,FVector_NetQuantize100 *param_7,uchar param_8
          ,uchar param_9,uint param_10,UPrimitiveComponent *param_11,FName param_12,uchar param_13)

{
  UCharacterMovementComponent *pUVar1;
  undefined1 uVar2;
  undefined4 in_XMM1_Db;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_18 = *(undefined8 *)&param_2->field_0x10;
  pUVar1 = (this->CharacterMovement).field0_0x0.DebugPtr;
  local_68 = *(undefined8 *)param_7;
  uStack_60 = *(undefined8 *)&param_7->field_0x8;
  local_58 = *(undefined8 *)&param_7->field_0x10;
  local_48 = *(undefined8 *)param_6;
  uStack_40 = *(undefined8 *)&param_6->field_0x8;
  local_38 = *(undefined8 *)&param_6->field_0x10;
  local_28 = *(undefined8 *)param_2;
  uStack_20 = *(undefined8 *)&param_2->field_0x8;
  uVar2 = (**(code **)(*(longlong *)pUVar1 + 3000))
                    (pUVar1,CONCAT44(in_XMM1_Db,param_1),&local_28,param_1,param_4,param_5,&local_48
                     ,&local_68,param_8,param_9,param_10,param_11,param_12,param_13);
  return (bool)uVar2;
}

// ServerMoveDualNoBase @ 147727050

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
ACharacter::ServerMoveDualNoBase
          (ACharacter *this,float param_1,FVector_NetQuantize10 *param_2,uchar param_3,uint param_4,
          float param_5,FVector_NetQuantize10 *param_6,FVector_NetQuantize100 *param_7,uchar param_8
          ,uchar param_9,uint param_10,uchar param_11)

{
  UFunction *pUVar1;
  float local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  uchar local_58;
  uint local_54;
  float local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  uchar local_18;
  uchar local_17;
  uint local_14;
  uchar local_10;
  
  local_70 = *(undefined8 *)param_2;
  uStack_68 = *(undefined8 *)&param_2->field_0x8;
  local_60 = *(undefined8 *)&param_2->field_0x10;
  local_54 = param_4;
  local_50 = param_5;
  local_48 = *(undefined8 *)param_6;
  uStack_40 = *(undefined8 *)&param_6->field_0x8;
  local_38 = *(undefined8 *)&param_6->field_0x10;
  local_30 = *(undefined8 *)param_7;
  uStack_28 = *(undefined8 *)&param_7->field_0x8;
  local_20 = *(undefined8 *)&param_7->field_0x10;
  local_18 = param_8;
  local_17 = param_9;
  local_14 = param_10;
  local_10 = param_11;
  local_78[0] = param_1;
  local_58 = param_3;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_ACharacter_ServerMoveDualNoBase);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,local_78);
  return;
}

// ServerMoveDualNoBase_Implementation @ 147727130

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
ACharacter::ServerMoveDualNoBase_Implementation
          (ACharacter *this,float param_1,FVector_NetQuantize10 *param_2,uchar param_3,uint param_4,
          float param_5,FVector_NetQuantize10 *param_6,FVector_NetQuantize100 *param_7,uchar param_8
          ,uchar param_9,uint param_10,uchar param_11)

{
  UCharacterMovementComponent *pUVar1;
  undefined4 in_XMM1_Db;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  pUVar1 = (this->CharacterMovement).field0_0x0.DebugPtr;
  local_68 = *(undefined8 *)param_7;
  uStack_60 = *(undefined8 *)&param_7->field_0x8;
  local_58 = *(undefined8 *)&param_7->field_0x10;
  local_48 = *(undefined8 *)param_6;
  uStack_40 = *(undefined8 *)&param_6->field_0x8;
  local_38 = *(undefined8 *)&param_6->field_0x10;
  local_28 = *(undefined8 *)param_2;
  uStack_20 = *(undefined8 *)&param_2->field_0x8;
  local_18 = *(undefined8 *)&param_2->field_0x10;
  (**(code **)(*(longlong *)pUVar1 + 0xb98))
            (pUVar1,CONCAT44(in_XMM1_Db,param_1),&local_28,param_1,param_4,param_5,&local_48,
             &local_68,param_8,param_9,param_10,0,0,param_11);
  return;
}

// ServerMoveDualNoBase_Validate @ 147727230

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
ACharacter::ServerMoveDualNoBase_Validate
          (ACharacter *this,float param_1,FVector_NetQuantize10 *param_2,uchar param_3,uint param_4,
          float param_5,FVector_NetQuantize10 *param_6,FVector_NetQuantize100 *param_7,uchar param_8
          ,uchar param_9,uint param_10,uchar param_11)

{
  UCharacterMovementComponent *pUVar1;
  undefined1 uVar2;
  undefined4 in_XMM1_Db;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  pUVar1 = (this->CharacterMovement).field0_0x0.DebugPtr;
  local_68 = *(undefined8 *)param_7;
  uStack_60 = *(undefined8 *)&param_7->field_0x8;
  local_58 = *(undefined8 *)&param_7->field_0x10;
  local_48 = *(undefined8 *)param_6;
  uStack_40 = *(undefined8 *)&param_6->field_0x8;
  local_38 = *(undefined8 *)&param_6->field_0x10;
  local_28 = *(undefined8 *)param_2;
  uStack_20 = *(undefined8 *)&param_2->field_0x8;
  local_18 = *(undefined8 *)&param_2->field_0x10;
  uVar2 = (**(code **)(*(longlong *)pUVar1 + 0xba0))
                    (pUVar1,CONCAT44(in_XMM1_Db,param_1),&local_28,param_1,param_4,param_5,&local_48
                     ,&local_68,param_8,param_9,param_10,0,0,param_11);
  return (bool)uVar2;
}

// ServerMoveDual_Implementation @ 147727330

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
ACharacter::ServerMoveDual_Implementation
          (ACharacter *this,float param_1,FVector_NetQuantize10 *param_2,uchar param_3,uint param_4,
          float param_5,FVector_NetQuantize10 *param_6,FVector_NetQuantize100 *param_7,uchar param_8
          ,uchar param_9,uint param_10,UPrimitiveComponent *param_11,FName param_12,uchar param_13)

{
  UCharacterMovementComponent *pUVar1;
  undefined4 in_XMM1_Db;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_18 = *(undefined8 *)&param_2->field_0x10;
  pUVar1 = (this->CharacterMovement).field0_0x0.DebugPtr;
  local_68 = *(undefined8 *)param_7;
  uStack_60 = *(undefined8 *)&param_7->field_0x8;
  local_58 = *(undefined8 *)&param_7->field_0x10;
  local_48 = *(undefined8 *)param_6;
  uStack_40 = *(undefined8 *)&param_6->field_0x8;
  local_38 = *(undefined8 *)&param_6->field_0x10;
  local_28 = *(undefined8 *)param_2;
  uStack_20 = *(undefined8 *)&param_2->field_0x8;
  (**(code **)(*(longlong *)pUVar1 + 0xb98))
            (pUVar1,CONCAT44(in_XMM1_Db,param_1),&local_28,param_1,param_4,param_5,&local_48,
             &local_68,param_8,param_9,param_10,param_11,param_12,param_13);
  return;
}

// ServerMoveDual_Validate @ 147727430

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
ACharacter::ServerMoveDual_Validate
          (ACharacter *this,float param_1,FVector_NetQuantize10 *param_2,uchar param_3,uint param_4,
          float param_5,FVector_NetQuantize10 *param_6,FVector_NetQuantize100 *param_7,uchar param_8
          ,uchar param_9,uint param_10,UPrimitiveComponent *param_11,FName param_12,uchar param_13)

{
  UCharacterMovementComponent *pUVar1;
  undefined1 uVar2;
  undefined4 in_XMM1_Db;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_18 = *(undefined8 *)&param_2->field_0x10;
  pUVar1 = (this->CharacterMovement).field0_0x0.DebugPtr;
  local_68 = *(undefined8 *)param_7;
  uStack_60 = *(undefined8 *)&param_7->field_0x8;
  local_58 = *(undefined8 *)&param_7->field_0x10;
  local_48 = *(undefined8 *)param_6;
  uStack_40 = *(undefined8 *)&param_6->field_0x8;
  local_38 = *(undefined8 *)&param_6->field_0x10;
  local_28 = *(undefined8 *)param_2;
  uStack_20 = *(undefined8 *)&param_2->field_0x8;
  uVar2 = (**(code **)(*(longlong *)pUVar1 + 0xba0))
                    (pUVar1,CONCAT44(in_XMM1_Db,param_1),&local_28,param_1,param_4,param_5,&local_48
                     ,&local_68,param_8,param_9,param_10,param_11,param_12,param_13);
  return (bool)uVar2;
}

// ServerMoveNoBase @ 147727530

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
ACharacter::ServerMoveNoBase
          (ACharacter *this,float param_1,FVector_NetQuantize10 *param_2,
          FVector_NetQuantize100 *param_3,uchar param_4,uchar param_5,uint param_6,uchar param_7)

{
  UFunction *pUVar1;
  float local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  uchar local_20;
  uchar local_1f;
  uint local_1c;
  uchar local_18;
  
  local_50 = *(undefined8 *)param_2;
  uStack_48 = *(undefined8 *)&param_2->field_0x8;
  local_20 = param_4;
  local_40 = *(undefined8 *)&param_2->field_0x10;
  local_1f = param_5;
  local_1c = param_6;
  local_38 = *(undefined8 *)param_3;
  uStack_30 = *(undefined8 *)&param_3->field_0x8;
  local_28 = *(undefined8 *)&param_3->field_0x10;
  local_18 = param_7;
  local_58[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_ACharacter_ServerMoveNoBase);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,local_58);
  return;
}

// ServerMoveNoBase_Implementation @ 1477275d0

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
ACharacter::ServerMoveNoBase_Implementation
          (ACharacter *this,float param_1,FVector_NetQuantize10 *param_2,
          FVector_NetQuantize100 *param_3,uchar param_4,uchar param_5,uint param_6,uchar param_7)

{
  UCharacterMovementComponent *pUVar1;
  undefined4 in_XMM1_Db;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_48 = *(undefined8 *)param_3;
  uStack_40 = *(undefined8 *)&param_3->field_0x8;
  pUVar1 = (this->CharacterMovement).field0_0x0.DebugPtr;
  local_38 = *(undefined8 *)&param_3->field_0x10;
  local_18 = *(undefined8 *)&param_2->field_0x10;
  local_28 = *(undefined4 *)param_2;
  uStack_24 = *(undefined4 *)&param_2->field_0x4;
  uStack_20 = *(undefined4 *)&param_2->field_0x8;
  uStack_1c = *(undefined4 *)&param_2->field_0xc;
  (**(code **)(*(longlong *)pUVar1 + 0xb80))
            (pUVar1,CONCAT44(in_XMM1_Db,param_1),&local_28,&local_48,param_4,param_5,param_6,0,0,
             param_7);
  return;
}

// ServerMoveNoBase_Validate @ 147727680

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
ACharacter::ServerMoveNoBase_Validate
          (ACharacter *this,float param_1,FVector_NetQuantize10 *param_2,
          FVector_NetQuantize100 *param_3,uchar param_4,uchar param_5,uint param_6,uchar param_7)

{
  UCharacterMovementComponent *pUVar1;
  undefined1 uVar2;
  undefined4 in_XMM1_Db;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_48 = *(undefined8 *)param_3;
  uStack_40 = *(undefined8 *)&param_3->field_0x8;
  pUVar1 = (this->CharacterMovement).field0_0x0.DebugPtr;
  local_38 = *(undefined8 *)&param_3->field_0x10;
  local_18 = *(undefined8 *)&param_2->field_0x10;
  local_28 = *(undefined4 *)param_2;
  uStack_24 = *(undefined4 *)&param_2->field_0x4;
  uStack_20 = *(undefined4 *)&param_2->field_0x8;
  uStack_1c = *(undefined4 *)&param_2->field_0xc;
  uVar2 = (**(code **)(*(longlong *)pUVar1 + 0xb88))
                    (pUVar1,CONCAT44(in_XMM1_Db,param_1),&local_28,&local_48,param_4,param_5,param_6
                     ,0,0,param_7);
  return (bool)uVar2;
}

// ServerMoveOld @ 147727730

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
ACharacter::ServerMoveOld
          (ACharacter *this,float param_1,FVector_NetQuantize10 *param_2,uchar param_3)

{
  UFunction *pUVar1;
  float local_38 [2];
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  uchar local_18;
  
  local_30 = *(undefined8 *)param_2;
  uStack_28 = *(undefined8 *)&param_2->field_0x8;
  local_20 = *(undefined8 *)&param_2->field_0x10;
  local_38[0] = param_1;
  local_18 = param_3;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_ACharacter_ServerMoveOld);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,local_38);
  return;
}

// ServerMoveOld_Implementation @ 147727790

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
ACharacter::ServerMoveOld_Implementation
          (ACharacter *this,float param_1,FVector_NetQuantize10 *param_2,uchar param_3)

{
  UCharacterMovementComponent *pUVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_28 = *(undefined4 *)param_2;
  uStack_24 = *(undefined4 *)&param_2->field_0x4;
  uStack_20 = *(undefined4 *)&param_2->field_0x8;
  uStack_1c = *(undefined4 *)&param_2->field_0xc;
  pUVar1 = (this->CharacterMovement).field0_0x0.DebugPtr;
  local_18 = *(undefined8 *)&param_2->field_0x10;
  (**(code **)(*(longlong *)pUVar1 + 0xbc8))(pUVar1,param_1,&local_28);
  return;
}

// ServerMoveOld_Validate @ 1477277d0

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
ACharacter::ServerMoveOld_Validate
          (ACharacter *this,float param_1,FVector_NetQuantize10 *param_2,uchar param_3)

{
  UCharacterMovementComponent *pUVar1;
  undefined1 uVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_28 = *(undefined4 *)param_2;
  uStack_24 = *(undefined4 *)&param_2->field_0x4;
  uStack_20 = *(undefined4 *)&param_2->field_0x8;
  uStack_1c = *(undefined4 *)&param_2->field_0xc;
  pUVar1 = (this->CharacterMovement).field0_0x0.DebugPtr;
  local_18 = *(undefined8 *)&param_2->field_0x10;
  uVar2 = (**(code **)(*(longlong *)pUVar1 + 0xbd0))(pUVar1,param_1,&local_28);
  return (bool)uVar2;
}

// ServerMovePacked @ 147727810

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
ACharacter::ServerMovePacked(ACharacter *this,FCharacterServerMovePackedBits *param_1)

{
  UFunction *pUVar1;
  undefined1 auStack_148 [32];
  FCharacterNetworkSerializationPackedBits local_128;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_128.DataBits.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_128.DataBits.NumBits = 0;
  local_128.DataBits.MaxBits = 0x400;
  local_128.PackageMapExports.References.AllocatorInstance.SecondaryData =
       (ForElementType<TObjectPtr<UObject>_>)0x0;
  local_128.PackageMapExports.References.ArrayNum = 0;
  local_128.PackageMapExports.References.ArrayMax = 4;
  local_128.PackageMapExports.Names.AllocatorInstance.SecondaryData = (ForElementType<FName>)0x0;
  local_128.PackageMapExports.Names.ArrayNum = 0;
  local_128.PackageMapExports.Names.ArrayMax = 4;
  local_128.NetTokensPendingExport.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Net::FNetToken>)0x0;
  local_128.NetTokensPendingExport.ArrayNum = 0;
  local_128.NetTokensPendingExport.ArrayMax = 4;
  local_128.SavedPackageMap = (UPackageMap *)0x0;
  FCharacterNetworkSerializationPackedBits::operator=
            (&local_128,(FCharacterNetworkSerializationPackedBits *)param_1);
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_ACharacter_ServerMovePacked);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,&local_128);
  if (local_128.NetTokensPendingExport.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::Net::FNetToken>)0x0) {
    FMemory::Free((void *)local_128.NetTokensPendingExport.AllocatorInstance.SecondaryData);
  }
  if (local_128.PackageMapExports.Names.AllocatorInstance.SecondaryData !=
      (ForElementType<FName>)0x0) {
    FMemory::Free((void *)local_128.PackageMapExports.Names.AllocatorInstance.SecondaryData);
  }
  if (local_128.PackageMapExports.References.AllocatorInstance.SecondaryData !=
      (ForElementType<TObjectPtr<UObject>_>)0x0) {
    FMemory::Free((void *)local_128.PackageMapExports.References.AllocatorInstance.SecondaryData);
  }
  if (local_128.DataBits.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_128.DataBits.AllocatorInstance.SecondaryData);
  }
  return;
}

// ServerMovePacked_Implementation @ 147727920

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
ACharacter::ServerMovePacked_Implementation
          (ACharacter *this,FCharacterServerMovePackedBits *param_1)

{
  UCharacterMovementComponent::ServerMovePacked_ServerReceive
            ((this->CharacterMovement).field0_0x0.DebugPtr,param_1);
  return;
}

// ServerMovePacked_Validate @ 147727940

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
ACharacter::ServerMovePacked_Validate(ACharacter *this,FCharacterServerMovePackedBits *param_1)

{
  return true;
}

// ServerMove_Implementation @ 147727950

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
ACharacter::ServerMove_Implementation
          (ACharacter *this,float param_1,FVector_NetQuantize10 *param_2,
          FVector_NetQuantize100 *param_3,uchar param_4,uchar param_5,uint param_6,
          UPrimitiveComponent *param_7,FName param_8,uchar param_9)

{
  UCharacterMovementComponent *pUVar1;
  code *pcVar2;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_48 = *(undefined8 *)param_3;
  uStack_40 = *(undefined8 *)&param_3->field_0x8;
  pUVar1 = (this->CharacterMovement).field0_0x0.DebugPtr;
  local_38 = *(undefined8 *)&param_3->field_0x10;
  local_28 = *(undefined4 *)param_2;
  uStack_24 = *(undefined4 *)&param_2->field_0x4;
  uStack_20 = *(undefined4 *)&param_2->field_0x8;
  uStack_1c = *(undefined4 *)&param_2->field_0xc;
  local_18 = *(undefined8 *)&param_2->field_0x10;
  pcVar2 = *(code **)(*(longlong *)pUVar1 + 0xb80);
  (*pcVar2)(pUVar1,pcVar2,&local_28,&local_48,param_4,param_5,param_6,param_7,param_8,param_9);
  return;
}

// ServerMove_Validate @ 147727a00

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
ACharacter::ServerMove_Validate
          (ACharacter *this,float param_1,FVector_NetQuantize10 *param_2,
          FVector_NetQuantize100 *param_3,uchar param_4,uchar param_5,uint param_6,
          UPrimitiveComponent *param_7,FName param_8,uchar param_9)

{
  UCharacterMovementComponent *pUVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_48 = *(undefined8 *)param_3;
  uStack_40 = *(undefined8 *)&param_3->field_0x8;
  pUVar1 = (this->CharacterMovement).field0_0x0.DebugPtr;
  local_38 = *(undefined8 *)&param_3->field_0x10;
  local_28 = *(undefined4 *)param_2;
  uStack_24 = *(undefined4 *)&param_2->field_0x4;
  uStack_20 = *(undefined4 *)&param_2->field_0x8;
  uStack_1c = *(undefined4 *)&param_2->field_0xc;
  local_18 = *(undefined8 *)&param_2->field_0x10;
  pcVar2 = *(code **)(*(longlong *)pUVar1 + 0xb88);
  uVar3 = (*pcVar2)(pUVar1,pcVar2,&local_28,&local_48,param_4,param_5,param_6,param_7,param_8,
                    param_9);
  return (bool)uVar3;
}

// SetAnimRootMotionTranslationScale @ 147727d30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ACharacter::SetAnimRootMotionTranslationScale(ACharacter *this,float param_1)

{
  this->AnimRootMotionTranslationScale = param_1;
  return;
}

// SetBase @ 147727d40

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
ACharacter::SetBase(ACharacter *this,UPrimitiveComponent *param_1,FName param_2,bool param_3)

{
  undefined1 *puVar1;
  FFindFloorResult *pFVar2;
  int iVar3;
  UPrimitiveComponent *pUVar4;
  UCharacterMovementComponent *pUVar5;
  float fVar6;
  char cVar7;
  UClass *pUVar8;
  longlong lVar9;
  FName FVar10;
  UPrimitiveComponent *pUVar11;
  FName FVar12;
  bool bVar13;
  FName local_res8;
  FString local_48;
  FString local_38;
  
  FVar12.ComparisonIndex.Value = 0;
  FVar12.Number = 0;
  if (param_1 == (UPrimitiveComponent *)0x0) {
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    param_2 = FVar12;
  }
  pUVar4 = (this->BasedMovement).MovementBase.field0_0x0.DebugPtr;
  if (pUVar4 == (UPrimitiveComponent *)0x0) {
    bVar13 = param_1 == (UPrimitiveComponent *)0x0;
  }
  else {
    bVar13 = pUVar4 == param_1;
  }
  if ((bVar13) && (param_2 == (this->BasedMovement).BoneName)) {
    return;
  }
  if (param_1 != (UPrimitiveComponent *)0x0) {
    FVar10 = *(FName *)&param_1->field_0xa8;
    if (FVar10 == (FName)0x0) {
LAB_147727de0:
      FVar10 = FVar12;
    }
    else {
      pUVar8 = Z_Construct_UClass_APawn_NoRegister();
      iVar3 = (int)pUVar8->_padding_;
      if ((*(int *)(*(longlong *)((longlong)FVar10 + 0x10) + 0x38) < iVar3) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)((longlong)FVar10 + 0x10) + 0x30) + (longlong)iVar3 * 8) !=
          &pUVar8->_padding_)) goto LAB_147727de0;
    }
    if (FVar10 != (FName)0x0) {
      while( true ) {
        if (FVar10 == (FName)this) {
          if ((byte)LogCharacter._0_1_ < 3) {
            return;
          }
          local_res8.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
          local_res8.Number = *(uint *)&param_1->field_0x1c;
          ::FName::ToString(&local_res8,&local_38);
          local_res8.ComparisonIndex.Value = *(uint *)&this->field_0x18;
          local_res8.Number = *(uint *)&this->field_0x1c;
          ::FName::ToString(&local_res8,&local_48);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCharacter);
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
          if (local_38.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return;
          }
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
          return;
        }
        lVar9 = (**(code **)(*(longlong *)FVar10 + 0x768))(FVar10);
        if ((lVar9 == 0) || (FVar10 = *(FName *)(lVar9 + 0xa8), FVar10 == (FName)0x0)) break;
        pUVar8 = Z_Construct_UClass_APawn_NoRegister();
        iVar3 = (int)pUVar8->_padding_;
        if ((*(int *)(*(longlong *)((longlong)FVar10 + 0x10) + 0x38) < iVar3) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)((longlong)FVar10 + 0x10) + 0x30) + (longlong)iVar3 * 8) !=
            &pUVar8->_padding_)) break;
      }
    }
  }
  pUVar4 = (this->BasedMovement).MovementBase.field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UPrimitiveComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->BasedMovement).MovementBase.field0_0x0.DebugPtr = param_1;
  (this->BasedMovement).BoneName = param_2;
  if (!bVar13) {
    (this->BasedMovement).BaseID = (this->BasedMovement).BaseID + 1;
  }
  if ((this->CharacterMovement).field0_0x0.DebugPtr != (UCharacterMovementComponent *)0x0) {
    cVar7 = '\0';
    pUVar11 = param_1;
    do {
      if (pUVar11 == (UPrimitiveComponent *)0x0) break;
      local_res8.ComparisonIndex.Value = 0;
      local_res8.Number = 0;
      cVar7 = (**(code **)(*(longlong *)pUVar11 + 0x4f8))(pUVar11,0);
      pUVar11 = *(UPrimitiveComponent **)&pUVar11->field_0xd0;
    } while (cVar7 == '\0');
    if ((!bVar13) &&
       (MovementBaseUtility::RemoveTickDependency
                  ((FTickFunction *)&((this->CharacterMovement).field0_0x0.DebugPtr)->field_0x38,
                   pUVar4), cVar7 == '\0')) {
      MovementBaseUtility::AddTickDependency
                ((FTickFunction *)&((this->CharacterMovement).field0_0x0.DebugPtr)->field_0x38,
                 param_1);
    }
    if (param_1 == (UPrimitiveComponent *)0x0) {
      pUVar5 = (this->CharacterMovement).field0_0x0.DebugPtr;
      (this->BasedMovement).bRelativeRotation = '\0';
      fVar6 = __real_3f800000;
      (this->BasedMovement).BoneName.ComparisonIndex = 0;
      (this->BasedMovement).BoneName.Number = 0;
      pFVar2->bBlockingHit = 0;
      pFVar2->bLineTrace = 0;
      pFVar2->bWalkableFloor = 0;
      (pUVar5->CurrentFloor).FloorDist = 0.0;
      (pUVar5->CurrentFloor).LineDist = 0.0;
      local_res8.ComparisonIndex.Value = 0;
      local_res8.Number = 0;
      FHitResult::Reset(&(pUVar5->CurrentFloor).HitResult,fVar6,false);
      cVar7 = false;
    }
    else if (this->bInBaseReplication == 0) {
      (**(code **)(*(longlong *)(this->CharacterMovement).field0_0x0.DebugPtr + 0x6e0))();
    }
    FTickFunction::SetTickFunctionEnable
              ((FTickFunction *)
               &((this->CharacterMovement).field0_0x0.DebugPtr)->PostPhysicsTickFunction,(bool)cVar7
              );
    if ((this->field_0x168 == '\x03') || (this->field_0x168 == '\x02')) {
      (this->BasedMovement).bServerHasBaseComponent = '\0';
      puVar1 = &(this->BasedMovement).field_0x2;
      *puVar1 = *puVar1 | (this->BasedMovement).MovementBase.field0_0x0.DebugPtr !=
                          (UPrimitiveComponent *)0x0;
      if ((byte)LogCharacter._0_1_ < 6) goto LAB_147728178;
      if ((param_1 == (UPrimitiveComponent *)0x0) || (*(longlong *)&param_1->field_0x10 == 0)) {
        ::FString::FString(&local_48,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_48,(UObject *)0x0,None)
        ;
      }
      local_res8.ComparisonIndex.Value = *(uint *)&this->field_0x18;
      local_res8.Number = *(uint *)&this->field_0x1c;
      ::FName::ToString(&local_res8,&local_38);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogCharacter);
    }
    else {
      if ((byte)LogCharacter._0_1_ < 6) goto LAB_147728178;
      if ((param_1 == (UPrimitiveComponent *)0x0) || (*(longlong *)&param_1->field_0x10 == 0)) {
        ::FString::FString(&local_48,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_48,(UObject *)0x0,None)
        ;
      }
      local_res8.ComparisonIndex.Value = *(uint *)&this->field_0x18;
      local_res8.Number = *(uint *)&this->field_0x1c;
      ::FName::ToString(&local_res8,&local_38);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogCharacter);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
LAB_147728178:
  if (param_3) {
    (**(code **)(*(longlong *)this + 0x8d8))(this);
  }
  return;
}

// SetIsCrouched @ 1477287f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ACharacter::SetIsCrouched(ACharacter *this,bool param_1)

{
  this->bIsCrouched = '\0';
  this->field_0x460 = this->field_0x460 | param_1 * '\x02';
  return;
}

// SetProxyIsJumpForceApplied @ 147729160

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ACharacter::SetProxyIsJumpForceApplied(ACharacter *this,bool param_1)

{
  this->bProxyIsJumpForceApplied = '\0';
  this->field_0x460 = this->field_0x460 | param_1 << 2;
  return;
}

// SetRepRootMotion @ 1477293e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ACharacter::SetRepRootMotion(ACharacter *this,FRepRootMotionMontage *param_1)

{
  FRepRootMotionMontage::operator=(&this->RepRootMotion,param_1);
  return;
}

// SetReplayLastTransformUpdateTimeStamp @ 147729400

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ACharacter::SetReplayLastTransformUpdateTimeStamp(ACharacter *this,float param_1)

{
  this->ReplayLastTransformUpdateTimeStamp = param_1;
  return;
}

// SetReplicateMovement @ 147729410

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ACharacter::SetReplicateMovement(ACharacter *this,bool param_1)

{
  UCharacterMovementComponent *pUVar1;
  char cVar2;
  longlong lVar3;
  UWorld *pUVar4;
  
  AActor::SetReplicateMovement((AActor *)this,param_1);
  pUVar1 = (this->CharacterMovement).field0_0x0.DebugPtr;
  if ((((pUVar1 != (UCharacterMovementComponent *)0x0) && (this->field_0x168 == '\x03')) &&
      (cVar2 = (**(code **)(*(longlong *)&pUVar1->field_0x198 + 0x40))(), cVar2 != '\0')) &&
     (lVar3 = (**(code **)(*(longlong *)
                            &((this->CharacterMovement).field0_0x0.DebugPtr)->field_0x198 + 0x30))()
     , lVar3 != 0)) {
    pUVar4 = AActor::GetWorld((AActor *)this);
    *(float *)(lVar3 + 8) = (float)pUVar4->TimeSeconds;
  }
  return;
}

// SetReplicatedBasedMovement @ 147729490

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ACharacter::SetReplicatedBasedMovement(ACharacter *this,FBasedMovementInfo *param_1)

{
  FBasedMovementInfo::operator=(&this->ReplicatedBasedMovement,param_1);
  return;
}

// SetReplicatedGravityDirection @ 1477294b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ACharacter::SetReplicatedGravityDirection(ACharacter *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  *(double *)&this->ReplicatedGravityDirection = (param_1->field0_0x0)._s_0.X;
  *(double *)&(this->ReplicatedGravityDirection).field_0x8 = dVar2;
  *(double *)&(this->ReplicatedGravityDirection).field_0x10 = dVar1;
  return;
}

// SetReplicatedMovementMode @ 1477294d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ACharacter::SetReplicatedMovementMode(ACharacter *this,uchar param_1)

{
  this->ReplicatedMovementMode = param_1;
  return;
}

// SetReplicatedServerLastTransformUpdateTimeStamp @ 1477294e0

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
ACharacter::SetReplicatedServerLastTransformUpdateTimeStamp(ACharacter *this,float param_1)

{
  this->ReplicatedServerLastTransformUpdateTimeStamp = param_1;
  return;
}

// SetupPlayerInputComponent @ 1477299a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ACharacter::SetupPlayerInputComponent(ACharacter *this,UInputComponent *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (UInputComponent *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PlayerInputComponent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Character.cpp"
                       ,0xdb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ShouldNotifyLanded @ 147729e20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall ACharacter::ShouldNotifyLanded(ACharacter *this,FHitResult *param_1)

{
  undefined1 uVar1;
  
  uVar1 = this->field_0x460;
  if (this->bClientUpdating == '\x01' && this->bClientWasFalling == '\0') {
    return false;
  }
  this->field_0x460 = uVar1 & 0xdf;
  return true;
}

// SimulatedRootMotionPositionFixup @ 147729f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

void __thiscall ACharacter::SimulatedRootMotionPositionFixup(ACharacter *this,float param_1)

{
  TArray<FSimulatedRootMotionReplicatedMove,TSizedDefaultAllocator<32>_> *this_00;
  float fVar1;
  USkeletalMeshComponent *this_01;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  UAnimInstance *pUVar7;
  FAnimMontageInstance *pFVar8;
  byte bVar9;
  undefined1 *puVar10;
  FSimulatedRootMotionReplicatedMove *pFVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  undefined1 auStackY_1f8 [32];
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double local_190;
  double dStack_188;
  double local_180;
  FAnimExtractContext local_178;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_d0;
  double dStack_c8;
  undefined8 local_c0;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  this_01 = (this->Mesh).field0_0x0.DebugPtr;
  if ((this_01 != (USkeletalMeshComponent *)0x0) &&
     (pUVar7 = USkeletalMeshComponent::GetAnimInstance(this_01), pUVar7 != (UAnimInstance *)0x0)) {
    pUVar7 = USkeletalMeshComponent::GetAnimInstance((this->Mesh).field0_0x0.DebugPtr);
    pFVar8 = UAnimInstance::GetRootMotionMontageInstance(pUVar7);
    if ((pFVar8 != (FAnimMontageInstance *)0x0) &&
       (((this->CharacterMovement).field0_0x0.DebugPtr != (UCharacterMovementComponent *)0x0 &&
        ((this->Mesh).field0_0x0.DebugPtr != (USkeletalMeshComponent *)0x0)))) {
      uVar5 = FindRootMotionRepMove(this,pFVar8);
      if (uVar5 != 0xffffffff) {
        lVar2 = *(longlong *)&this->field_0x1b8;
        if (lVar2 == 0) {
          local_1a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          dStack_1a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_198 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          local_108 = 0;
          uStack_104 = 0;
          uStack_100 = 0;
          uStack_fc = 0;
          local_f8 = ___xmm_3ff00000000000000000000000000000;
          uStack_f0 = _UNK_15061cbc8;
        }
        else {
          local_198 = *(double *)(lVar2 + 0x220);
          local_1a8 = *(double *)(lVar2 + 0x210);
          dStack_1a0 = *(double *)(lVar2 + 0x218);
          local_108 = *(undefined4 *)(lVar2 + 0x1f0);
          uStack_104 = *(undefined4 *)(lVar2 + 500);
          uStack_100 = *(undefined4 *)(lVar2 + 0x1f8);
          uStack_fc = *(undefined4 *)(lVar2 + 0x1fc);
          local_f8 = *(undefined8 *)(lVar2 + 0x200);
          uStack_f0 = *(undefined8 *)(lVar2 + 0x208);
          local_e8 = local_1a8;
          dStack_e0 = dStack_1a0;
          local_d8 = local_198;
        }
        this_00 = &this->RootMotionRepMoves;
        uVar6 = 0;
        if ((int)uVar5 < (this->RootMotionRepMoves).ArrayNum) {
          uVar6 = ~uVar5 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar11 = (FSimulatedRootMotionReplicatedMove *)
                  ((this_00->AllocatorInstance).Data + (longlong)(int)uVar5 * 0xd0);
        bVar4 = RestoreReplicatedMove(this,pFVar11);
        if (bVar4) {
          fVar1 = (pFVar11->RootMotion).Position;
          fVar14 = pFVar8->Position - fVar1;
          if (__real_38d1b717 < (float)((uint)fVar14 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
            local_178.bExtractRootMotion = false;
            local_178.DeltaTimeRecord.bPreviousIsValid = false;
            local_178.DeltaTimeRecord._9_3_ = 0;
            local_178.CurrentTime = 0.0;
            local_178.DeltaTimeRecord.Delta = 0.0;
            local_178.DeltaTimeRecord.Previous = 0.0;
            local_178.bLooping = false;
            local_178.PoseCurves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_178.PoseCurves.ArrayNum = 0;
            local_178.PoseCurves.ArrayMax = 0;
            local_178.BonesRequired.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_178.BonesRequired.ArrayNum = 0;
            local_178.BonesRequired.ArrayMax = 0;
            local_178.InterpolationOverride.bIsSet = false;
            UAnimMontage::ExtractRootMotionFromTrackRange
                      ((pFVar8->Montage).field0_0x0.DebugPtr,&local_b8,fVar1,pFVar8->Position,
                       &local_178);
            if (local_178.BonesRequired.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_178.BonesRequired.AllocatorInstance.Data);
            }
            if (local_178.PoseCurves.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_178.PoseCurves.AllocatorInstance.Data);
            }
            if (((this->CharacterMovement).field0_0x0.DebugPtr != (UCharacterMovementComponent *)0x0
                ) && (__real_322bcc77 <
                      (float)((uint)pFVar8->PlayRate & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
              fVar14 = fVar14 / pFVar8->PlayRate;
              if ((fVar14 <= 0.0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("DeltaTime > 0.f",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Character.cpp"
                                     ,0x5a0,L""), bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              UCharacterMovementComponent::SimulateRootMotion
                        ((this->CharacterMovement).field0_0x0.DebugPtr,fVar14,&local_b8);
              lVar2 = *(longlong *)&this->field_0x1b8;
              if (lVar2 == 0) {
                uVar12 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
                uVar13 = (undefined4)
                         ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20
                         );
                local_190 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                dStack_188 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
              }
              else {
                local_c0 = *(undefined8 *)(lVar2 + 0x220);
                uVar12 = (undefined4)local_c0;
                uVar13 = (undefined4)((ulonglong)local_c0 >> 0x20);
                local_d0 = *(double *)(lVar2 + 0x210);
                dStack_c8 = *(double *)(lVar2 + 0x218);
                local_190 = local_d0;
                dStack_188 = dStack_c8;
              }
              local_180 = (double)CONCAT44(uVar13,uVar12);
              ((this->CharacterMovement).field0_0x0.DebugPtr)->bNetworkSmoothingComplete = '\0';
              if (((local_1a8 == local_190) && (dStack_1a0 == dStack_188)) &&
                 (local_198 == local_180)) {
                bVar9 = 0;
              }
              else {
                bVar9 = 0x20;
              }
              puVar10 = &((this->CharacterMovement).field0_0x0.DebugPtr)->field_0x564;
              *puVar10 = *puVar10 | bVar9;
              puVar10 = &((this->CharacterMovement).field0_0x0.DebugPtr)->field_0x198;
              lVar2 = *(longlong *)&this->field_0x1b8;
              if (lVar2 == 0) {
                local_128 = 0;
                uStack_124 = 0;
                uStack_120 = 0;
                uStack_11c = 0;
                local_118 = ___xmm_3ff00000000000000000000000000000;
                uStack_110 = _UNK_15061cbc8;
              }
              else {
                local_128 = *(undefined4 *)(lVar2 + 0x1f0);
                uStack_124 = *(undefined4 *)(lVar2 + 500);
                uStack_120 = *(undefined4 *)(lVar2 + 0x1f8);
                uStack_11c = *(undefined4 *)(lVar2 + 0x1fc);
                local_118 = *(undefined8 *)(lVar2 + 0x200);
                uStack_110 = *(undefined8 *)(lVar2 + 0x208);
              }
              (**(code **)(*(longlong *)puVar10 + 0x20))(puVar10,&local_1a8,&local_108,&local_190);
            }
          }
        }
        if (4 < (byte)LogRootMotion._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRootMotion);
        }
        uVar5 = uVar5 + 1;
        uVar6 = 0;
        if ((int)uVar5 <= (this->RootMotionRepMoves).ArrayNum) {
          uVar6 = ~uVar5 >> 0x1f;
        }
        if ((uVar6 == 0) &&
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
        if (uVar5 != 0) {
          TArray<FSimulatedRootMotionReplicatedMove,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                    (this_00,0,uVar5);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xd0,8,&this_00->AllocatorInstance,(this->RootMotionRepMoves).ArrayNum,
                     &(this->RootMotionRepMoves).ArrayMax);
        }
      }
    }
  }
  return;
}

// StaticRegisterNativesACharacter @ 14772bdb0

void __cdecl ACharacter::StaticRegisterNativesACharacter(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x2a;
  local_18.DataPtr = Z_Construct_UClass_ACharacter_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// StopAnimMontage @ 14772cb80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ACharacter::StopAnimMontage(ACharacter *this,UAnimMontage *param_1)

{
  USkeletalMeshComponent *pUVar1;
  bool bVar2;
  UAnimInstance *this_00;
  UAnimInstance *this_01;
  
  pUVar1 = (this->Mesh).field0_0x0.DebugPtr;
  if (pUVar1 == (USkeletalMeshComponent *)0x0) {
    this_00 = (UAnimInstance *)0x0;
  }
  else {
    this_00 = USkeletalMeshComponent::GetAnimInstance(pUVar1);
  }
  if (param_1 == (UAnimMontage *)0x0) {
    pUVar1 = (this->Mesh).field0_0x0.DebugPtr;
    if (pUVar1 != (USkeletalMeshComponent *)0x0) {
      this_01 = USkeletalMeshComponent::GetAnimInstance(pUVar1);
      if (this_01 != (UAnimInstance *)0x0) {
        param_1 = UAnimInstance::GetCurrentActiveMontage(this_01);
        goto LAB_14772cbd7;
      }
    }
    param_1 = (UAnimMontage *)0x0;
  }
LAB_14772cbd7:
  if ((this_00 != (UAnimInstance *)0x0) && (param_1 != (UAnimMontage *)0x0)) {
    bVar2 = UAnimInstance::Montage_GetIsStopped(this_00,param_1);
    if (!bVar2) {
      UAnimInstance::Montage_Stop(this_00,(param_1->BlendOut).BlendTime,param_1);
    }
  }
  return;
}

// StopJumping @ 14772d060

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ACharacter::StopJumping(ACharacter *this)

{
  this->bPressedJump = '\0';
                    /* WARNING: Could not recover jumptable at 0x00014772d06a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x918))();
  return;
}

// TornOff @ 14772fff0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ACharacter::TornOff(ACharacter *this)

{
  undefined1 *puVar1;
  UCharacterMovementComponent *pUVar2;
  USkeletalMeshComponent *pUVar3;
  
  AActor::TornOff((AActor *)this);
  pUVar2 = (this->CharacterMovement).field0_0x0.DebugPtr;
  if (pUVar2 != (UCharacterMovementComponent *)0x0) {
    (**(code **)(*(longlong *)&pUVar2->field_0x198 + 0x48))();
    (**(code **)(*(longlong *)&((this->CharacterMovement).field0_0x0.DebugPtr)->field_0x198 + 0x50))
              ();
  }
  pUVar3 = (this->Mesh).field0_0x0.DebugPtr;
  if (pUVar3 != (USkeletalMeshComponent *)0x0) {
    pUVar3->bOnlyAllowAutonomousTickPose = '\0';
  }
  return;
}

// TurnOff @ 147730ca0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ACharacter::TurnOff(ACharacter *this)

{
  undefined1 *puVar1;
  UCharacterMovementComponent *pUVar2;
  USkeletalMeshComponent *pUVar3;
  char cVar4;
  ENetMode EVar5;
  
  pUVar2 = (this->CharacterMovement).field0_0x0.DebugPtr;
  if (pUVar2 != (UCharacterMovementComponent *)0x0) {
    (**(code **)(*(longlong *)pUVar2 + 0x510))();
    (**(code **)(*(longlong *)(this->CharacterMovement).field0_0x0.DebugPtr + 0x680))();
  }
  EVar5 = AActor::InternalGetNetMode((AActor *)this);
  if ((EVar5 != NM_DedicatedServer) &&
     (pUVar3 = (this->Mesh).field0_0x0.DebugPtr, pUVar3 != (USkeletalMeshComponent *)0x0)) {
    pUVar3->bPauseAnims = '\x01';
    pUVar3 = (this->Mesh).field0_0x0.DebugPtr;
    cVar4 = (**(code **)(pUVar3->_padding_ + 0x4f8))(pUVar3,0);
    if (cVar4 != '\0') {
      ((this->Mesh).field0_0x0.DebugPtr)->bBlendPhysics = '\x01';
      (((this->Mesh).field0_0x0.DebugPtr)->KinematicBonesUpdateType).Value = '\x01';
    }
  }
  APawn::TurnOff((APawn *)this);
  return;
}

// UnCrouch @ 1477310b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ACharacter::UnCrouch(ACharacter *this,bool param_1)

{
  undefined1 *puVar1;
  UCharacterMovementComponent *pUVar2;
  
  pUVar2 = (this->CharacterMovement).field0_0x0.DebugPtr;
  if (pUVar2 != (UCharacterMovementComponent *)0x0) {
    pUVar2->bWantsToCrouch = '\0';
  }
  return;
}

// UnPossessed @ 1477310d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ACharacter::UnPossessed(ACharacter *this)

{
  undefined1 *puVar1;
  UCharacterMovementComponent *pUVar2;
  USkeletalMeshComponent *pUVar3;
  
  APawn::UnPossessed((APawn *)this);
  pUVar2 = (this->CharacterMovement).field0_0x0.DebugPtr;
  if (pUVar2 != (UCharacterMovementComponent *)0x0) {
    (**(code **)(*(longlong *)&pUVar2->field_0x198 + 0x48))();
    (**(code **)(*(longlong *)&((this->CharacterMovement).field0_0x0.DebugPtr)->field_0x198 + 0x50))
              ();
  }
  pUVar3 = (this->Mesh).field0_0x0.DebugPtr;
  if (pUVar3 != (USkeletalMeshComponent *)0x0) {
    pUVar3->bOnlyAllowAutonomousTickPose = '\0';
  }
  return;
}

// UpdateNavigationRelevance @ 147732410

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ACharacter::UpdateNavigationRelevance(ACharacter *this)

{
  UCapsuleComponent *this_00;
  
  this_00 = (this->CapsuleComponent).field0_0x0.DebugPtr;
  if (this_00 != (UCapsuleComponent *)0x0) {
    UActorComponent::SetCanEverAffectNavigation
              ((UActorComponent *)this_00,(bool)((byte)(*(uint *)&this->field_0x2c8 >> 3) & 1));
    return;
  }
  return;
}

// ValidateGeneratedRepEnums @ 1477326a0

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
ACharacter::ValidateGeneratedRepEnums
          (ACharacter *this,TArray<FRepRecord,TSizedDefaultAllocator<32>_> *param_1)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  FName FVar4;
  int *piVar5;
  FName FVar6;
  
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar5 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&Name_ReplicatedBasedMovement,L"ReplicatedBasedMovement");
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar5 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FName::FName(&Name_ReplicatedServerLastTransformUpdateTimeStamp,
                   L"ReplicatedServerLastTransformUpdateTimeStamp");
    _Init_thread_footer(&::_TSS1);
  }
  if ((*piVar5 < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    ::FName::FName(&Name_ReplayLastTransformUpdateTimeStamp,L"ReplayLastTransformUpdateTimeStamp");
    _Init_thread_footer(&::_TSS2);
  }
  if ((*piVar5 < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
    ::FName::FName(&Name_ReplicatedGravityDirection,L"ReplicatedGravityDirection");
    _Init_thread_footer(&::_TSS3);
  }
  if ((*piVar5 < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
    ::FName::FName(&Name_AnimRootMotionTranslationScale,L"AnimRootMotionTranslationScale");
    _Init_thread_footer(&::_TSS4);
  }
  if ((*piVar5 < ::_TSS5) && (_Init_thread_header(&::_TSS5), ::_TSS5 == -1)) {
    ::FName::FName(&Name_bIsCrouched,L"bIsCrouched");
    _Init_thread_footer(&::_TSS5);
  }
  if ((*piVar5 < ::_TSS6) && (_Init_thread_header(&::_TSS6), ::_TSS6 == -1)) {
    ::FName::FName(&Name_bProxyIsJumpForceApplied,L"bProxyIsJumpForceApplied");
    _Init_thread_footer(&::_TSS6);
  }
  if ((*piVar5 < ::_TSS7) && (_Init_thread_header(&::_TSS7), ::_TSS7 == -1)) {
    ::FName::FName(&Name_ReplicatedMovementMode,L"ReplicatedMovementMode");
    _Init_thread_footer(&::_TSS7);
  }
  if ((*piVar5 < ::_TSS8) && (_Init_thread_header(&::_TSS8), ::_TSS8 == -1)) {
    ::FName::FName(&Name_JumpMaxHoldTime,L"JumpMaxHoldTime");
    _Init_thread_footer(&::_TSS8);
  }
  if ((*piVar5 < ::_TSS9) && (_Init_thread_header(&::_TSS9), ::_TSS9 == -1)) {
    ::FName::FName(&Name_JumpMaxCount,L"JumpMaxCount");
    _Init_thread_footer(&::_TSS9);
  }
  if ((*piVar5 < ::_TSS10) && (_Init_thread_header(&::_TSS10), ::_TSS10 == -1)) {
    ::FName::FName(&Name_RepRootMotion,L"RepRootMotion");
    _Init_thread_footer(&::_TSS10);
  }
  if ((param_1->ArrayNum < 0xf) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0xe0);
  bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
  FVar6.ComparisonIndex.Value = 0;
  FVar6.Number = 0;
  FVar4 = FVar6;
  if (bVar3) {
    FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
  }
  if (Name_ReplicatedBasedMovement == FVar4) {
    if ((param_1->ArrayNum < 0x10) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0xf0);
    bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
    FVar4 = FVar6;
    if (bVar3) {
      FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
    }
    if (Name_ReplicatedServerLastTransformUpdateTimeStamp == FVar4) {
      if ((param_1->ArrayNum < 0x11) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x100);
      bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
      FVar4 = FVar6;
      if (bVar3) {
        FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
      }
      if (Name_ReplayLastTransformUpdateTimeStamp == FVar4) {
        if ((param_1->ArrayNum < 0x12) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x110);
        bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
        FVar4 = FVar6;
        if (bVar3) {
          FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
        }
        if (Name_ReplicatedGravityDirection == FVar4) {
          if ((param_1->ArrayNum < 0x13) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x120);
          bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
          FVar4 = FVar6;
          if (bVar3) {
            FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
          }
          if (Name_AnimRootMotionTranslationScale == FVar4) {
            if ((param_1->ArrayNum < 0x14) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x130);
            bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
            FVar4 = FVar6;
            if (bVar3) {
              FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
            }
            if (Name_bIsCrouched == FVar4) {
              if ((param_1->ArrayNum < 0x15) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x140);
              bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
              FVar4 = FVar6;
              if (bVar3) {
                FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
              }
              if (Name_bProxyIsJumpForceApplied == FVar4) {
                if ((param_1->ArrayNum < 0x16) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x150);
                bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
                FVar4 = FVar6;
                if (bVar3) {
                  FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
                }
                if (Name_ReplicatedMovementMode == FVar4) {
                  if ((param_1->ArrayNum < 0x17) &&
                     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar3)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x160);
                  bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
                  FVar4 = FVar6;
                  if (bVar3) {
                    FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
                  }
                  if (Name_JumpMaxHoldTime == FVar4) {
                    if ((param_1->ArrayNum < 0x18) &&
                       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar3)) {
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x170);
                    bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
                    FVar4 = FVar6;
                    if (bVar3) {
                      FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
                    }
                    if (Name_JumpMaxCount == FVar4) {
                      if ((param_1->ArrayNum < 0x19) &&
                         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar3)) {
                        pcVar2 = (code *)swi(3);
                        (*pcVar2)();
                        return;
                      }
                      pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x180);
                      bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
                      if (bVar3) {
                        FVar6 = *(FName *)((longlong)pvVar1 + 0x20);
                      }
                      if (Name_RepRootMotion == FVar6) {
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("bIsValid",
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\Character.gen.cpp"
                     ,0x1213,
                     L"UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ACharacter"
                    );
  if (!bVar3) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// execCacheInitialMeshOffset @ 147734850

void __cdecl ACharacter::execCacheInitialMeshOffset(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_48 = local_78;
  uStack_40 = uStack_70;
  local_38 = local_68;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = local_60;
  uStack_24 = uStack_5c;
  uStack_20 = uStack_58;
  uStack_1c = uStack_54;
  local_18 = local_50;
  (**(code **)(*(longlong *)param_1 + 0x8c0))(param_1,&local_28,&local_48);
  return;
}

// execCanCrouch @ 147734950

void __cdecl ACharacter::execCanCrouch(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x980))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execCanJump @ 147734990

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl ACharacter::execCanJump(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = CanJump((ACharacter *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execCanJumpInternal @ 1477349d0

void __cdecl ACharacter::execCanJumpInternal(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x910))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execClientAckGoodMove @ 147734bb0

void __cdecl ACharacter::execClientAckGoodMove(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(**(longlong **)(param_1 + 0x15) + 0xb38))
            (*(longlong **)(param_1 + 0x15),local_res8[0]);
  return;
}

// execClientAdjustPosition @ 147734c40

void __cdecl ACharacter::execClientAdjustPosition(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  bool bVar3;
  undefined1 local_res8 [8];
  int local_res10 [2];
  int local_res20 [2];
  undefined4 local_d8 [2];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined1 local_48 [24];
  undefined1 local_30;
  
  local_d8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_d8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c0);
  }
  local_c8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  local_d0 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d0);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar2 = local_res10[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar3 = local_res20[0] != 0;
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_78 = local_b0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_88 = local_c0;
  uStack_80 = uStack_b8;
  local_58 = local_98;
  local_30 = 0;
  local_68 = local_a8;
  uStack_64 = uStack_a4;
  uStack_60 = uStack_a0;
  uStack_5c = uStack_9c;
  (**(code **)(**(longlong **)(param_1 + 0x15) + 0xb40))
            (*(longlong **)(param_1 + 0x15),local_d8[0],&local_68,&local_88,local_c8,local_d0,bVar2,
             bVar3,local_res8[0],local_48);
  return;
}

// execClientAdjustRootMotionPosition @ 147734ef0

void __cdecl
ACharacter::execClientAdjustRootMotionPosition(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  bool bVar3;
  undefined1 local_res8 [8];
  int local_res10 [2];
  int local_res20 [2];
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0 [2];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_b0[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_b0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_b0);
  }
  local_b4 = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b4);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_b8 = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  local_a0 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a0);
  }
  local_a8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar2 = local_res10[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar3 = local_res20[0] != 0;
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_68 = local_98;
  uStack_60 = uStack_90;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_58 = local_88;
  local_48 = local_80;
  uStack_40 = uStack_78;
  local_38 = local_70;
  (**(code **)(**(longlong **)(param_1 + 0x15) + 0xb50))
            (*(longlong **)(param_1 + 0x15),local_b0[0],local_b4,&local_48,&local_68,local_b8,
             local_a0,local_a8,bVar2,bVar3,local_res8[0]);
  return;
}

// execClientAdjustRootMotionSourcePosition @ 147735230

void __cdecl
ACharacter::execClientAdjustRootMotionSourcePosition(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  FRootMotionSourceGroup *pFVar11;
  FRootMotionSourceGroup *pFVar12;
  bool bVar13;
  bool bVar14;
  undefined1 local_res8 [8];
  undefined1 local_res10;
  int local_228;
  int local_224;
  int local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  FRootMotionSourceGroup local_1c8;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  FRootMotionSourceGroup local_138;
  FRootMotionSourceGroup local_f0 [2];
  
  local_214 = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_214,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_214);
  }
  FRootMotionSourceGroup::FRootMotionSourceGroup(&local_1c8);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1c8);
  }
  local_228 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_228,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_228);
  }
  bVar13 = local_228 != 0;
  local_218 = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_218,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_218);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1e8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_200,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_200);
  }
  local_21c = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_21c,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_21c);
  }
  local_208 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_208,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_208);
  }
  local_210 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_210,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_210);
  }
  local_224 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_224,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_224);
  }
  local_res10 = local_224 != 0;
  local_220 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_220,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_220);
  }
  bVar14 = local_220 != 0;
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  uVar10 = local_208;
  uVar9 = local_210;
  uVar7 = local_218;
  uVar6 = local_21c;
  uVar5 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar11 = FRootMotionSourceGroup::FRootMotionSourceGroup(&local_138,&local_1c8);
  uVar8 = local_214;
  plVar2 = *(longlong **)(param_1 + 0x15);
  pcVar3 = *(code **)(*plVar2 + 0xb58);
  pFVar12 = FRootMotionSourceGroup::FRootMotionSourceGroup(local_f0,pFVar11);
  local_178 = local_200;
  uStack_170 = uStack_1f8;
  local_168 = local_1f0;
  local_158 = local_1e8;
  uStack_150 = uStack_1e0;
  local_148 = local_1d8;
  (*pcVar3)(plVar2,uVar8,pFVar12,bVar13,uVar7,&local_158,&local_178,uVar6,uVar10,uVar9,local_res10,
            bVar14,uVar5);
  pFVar11->_padding_ = (longlong)&___7FRootMotionSourceGroup__6B_;
  DestructItems<TSharedPtr<FRootMotionSource,1>,int>
            ((TSharedPtr<FRootMotionSource,1> *)
             (pFVar11->PendingAddRootMotionSources).AllocatorInstance.Data,
             (pFVar11->PendingAddRootMotionSources).ArrayNum);
  pFVar4 = (pFVar11->PendingAddRootMotionSources).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DestructItems<TSharedPtr<FRootMotionSource,1>,int>
            ((TSharedPtr<FRootMotionSource,1> *)(pFVar11->RootMotionSources).AllocatorInstance.Data,
             (pFVar11->RootMotionSources).ArrayNum);
  pFVar4 = (pFVar11->RootMotionSources).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  local_1c8._padding_ = (longlong)&___7FRootMotionSourceGroup__6B_;
  DestructItems<TSharedPtr<FRootMotionSource,1>,int>
            ((TSharedPtr<FRootMotionSource,1> *)
             local_1c8.PendingAddRootMotionSources.AllocatorInstance.Data,
             local_1c8.PendingAddRootMotionSources.ArrayNum);
  if ((TSharedPtr<FRootMotionSource,1> *)
      local_1c8.PendingAddRootMotionSources.AllocatorInstance.Data !=
      (TSharedPtr<FRootMotionSource,1> *)0x0) {
    FMemory::Free(local_1c8.PendingAddRootMotionSources.AllocatorInstance.Data);
  }
  DestructItems<TSharedPtr<FRootMotionSource,1>,int>
            ((TSharedPtr<FRootMotionSource,1> *)local_1c8.RootMotionSources.AllocatorInstance.Data,
             local_1c8.RootMotionSources.ArrayNum);
  if ((TSharedPtr<FRootMotionSource,1> *)local_1c8.RootMotionSources.AllocatorInstance.Data !=
      (TSharedPtr<FRootMotionSource,1> *)0x0) {
    FMemory::Free(local_1c8.RootMotionSources.AllocatorInstance.Data);
  }
  return;
}

// execClientCheatFly @ 147735730

void __cdecl ACharacter::execClientCheatFly(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147735748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x9c8))();
  return;
}

// execClientCheatGhost @ 147735760

void __cdecl ACharacter::execClientCheatGhost(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147735778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x9d0))();
  return;
}

// execClientCheatWalk @ 147735790

void __cdecl ACharacter::execClientCheatWalk(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0001477357a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x9c0))();
  return;
}

// execClientMoveResponsePacked @ 1477357c0

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

void __cdecl
ACharacter::execClientMoveResponsePacked(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 auStack_148 [32];
  undefined1 local_128 [128];
  void *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  void *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  void *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  void *local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  local_9c = 0x400;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_6c = 4;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 4;
  local_28 = (void *)0x0;
  local_20 = 0;
  local_1c = 4;
  local_18 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_128);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UCharacterMovementComponent::MoveResponsePacked_ClientReceive
            (*(UCharacterMovementComponent **)(param_1 + 0x15),
             (FCharacterMoveResponsePackedBits *)local_128);
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  return;
}

// execClientVeryShortAdjustPosition @ 147735910

void __cdecl
ACharacter::execClientVeryShortAdjustPosition(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  bool bVar3;
  undefined1 local_res8 [8];
  int local_res10 [2];
  int local_res20 [2];
  undefined4 local_78 [2];
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  local_78[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  local_68 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_70 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar2 = local_res10[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar3 = local_res20[0] != 0;
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_38 = local_50;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_48 = local_60;
  uStack_44 = uStack_5c;
  uStack_40 = uStack_58;
  uStack_3c = uStack_54;
  (**(code **)(**(longlong **)(param_1 + 0x15) + 0xb48))
            (*(longlong **)(param_1 + 0x15),local_78[0],&local_48,local_68,local_70,bVar2,bVar3,
             local_res8[0]);
  return;
}

// execCrouch @ 147735cd0

void __cdecl ACharacter::execCrouch(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x970))(param_1,local_res8[0] != 0);
  return;
}

// execGetAnimRootMotionTranslationScale @ 1477364c0

void __cdecl
ACharacter::execGetAnimRootMotionTranslationScale(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0x1b].field_0x20;
  return;
}

// execGetBaseRotationOffsetRotator @ 147736670

void __cdecl
ACharacter::execGetBaseRotationOffsetRotator(UObject *param_1,FFrame *param_2,void *param_3)

{
  TQuat<double> *this;
  TRotator<double> local_48;
  undefined1 local_28 [32];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = (TQuat<double> *)(**(code **)(*(longlong *)param_1 + 0x8e0))(param_1,local_28);
  UE::Math::TQuat<double>::Rotator(this,&local_48);
  *(double *)param_3 = local_48.Pitch;
  *(double *)((longlong)param_3 + 8) = local_48.Yaw;
  *(double *)((longlong)param_3 + 0x10) = local_48.Roll;
  return;
}

// execGetBaseTranslationOffset @ 1477366d0

void __cdecl
ACharacter::execGetBaseTranslationOffset(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = *(undefined8 *)&param_1[0x1a].field_0x8;
  uVar1 = *(undefined8 *)&param_1[0x1a].field_0x10;
  *(undefined8 *)param_3 = *(undefined8 *)(param_1 + 0x1a);
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  *(undefined8 *)((longlong)param_3 + 0x10) = uVar1;
  return;
}

// execGetCurrentMontage @ 147736710

void __cdecl ACharacter::execGetCurrentMontage(UObject *param_1,FFrame *param_2,void *param_3)

{
  UAnimInstance *this;
  UAnimMontage *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(USkeletalMeshComponent **)&param_1[0x14].field_0x20 != (USkeletalMeshComponent *)0x0) {
    this = USkeletalMeshComponent::GetAnimInstance
                     (*(USkeletalMeshComponent **)&param_1[0x14].field_0x20);
    if (this != (UAnimInstance *)0x0) {
      pUVar1 = UAnimInstance::GetCurrentActiveMontage(this);
      *(UAnimMontage **)param_3 = pUVar1;
      return;
    }
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execHasAnyRootMotion @ 147736a80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl ACharacter::execHasAnyRootMotion(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(UCharacterMovementComponent **)(param_1 + 0x15) != (UCharacterMovementComponent *)0x0) {
    bVar1 = UCharacterMovementComponent::HasRootMotionSources
                      (*(UCharacterMovementComponent **)(param_1 + 0x15));
    *(bool *)param_3 = bVar1;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execIsJumpProvidingForce @ 147736b00

void __cdecl ACharacter::execIsJumpProvidingForce(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x920))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execIsPlayingNetworkedRootMotionMontage @ 147736b40

void __cdecl
ACharacter::execIsPlayingNetworkedRootMotionMontage(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong **)&param_1[0x14].field_0x20 != (longlong *)0x0) {
    uVar1 = (**(code **)(**(longlong **)&param_1[0x14].field_0x20 + 0xc38))();
    *(undefined1 *)param_3 = uVar1;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execIsPlayingRootMotion @ 147736b90

void __cdecl ACharacter::execIsPlayingRootMotion(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong **)&param_1[0x14].field_0x20 != (longlong *)0x0) {
    uVar1 = (**(code **)(**(longlong **)&param_1[0x14].field_0x20 + 0xc30))();
    *(undefined1 *)param_3 = uVar1;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execJump @ 147736be0

void __cdecl ACharacter::execJump(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147736bf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x900))();
  return;
}

// execLaunchCharacter @ 147736c10

void __cdecl ACharacter::execLaunchCharacter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res8 [2];
  int local_res10 [2];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar2 = local_res8[0] != 0;
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_38 = local_58;
  uStack_34 = uStack_54;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  local_28 = local_48;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x938))(param_1,&local_38,bVar2,local_res10[0] != 0);
  return;
}

// execOnJumped @ 147736d90

void __cdecl ACharacter::execOnJumped(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147736da8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x940))();
  return;
}

// execOnRep_IsCrouched @ 147736e90

void __cdecl ACharacter::execOnRep_IsCrouched(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147736ea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x8f0))();
  return;
}

// execOnRep_ReplayLastTransformUpdateTimeStamp @ 147736ec0

void __cdecl
ACharacter::execOnRep_ReplayLastTransformUpdateTimeStamp
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)&param_1[0x19].field_0x4;
  return;
}

// execOnRep_ReplicatedBasedMovement @ 147736ef0

void __cdecl
ACharacter::execOnRep_ReplicatedBasedMovement(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147736f08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x8c8))();
  return;
}

// execOnRep_RootMotion @ 147736f20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl ACharacter::execOnRep_RootMotion(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  UObject *pUVar3;
  byte *pbVar4;
  ForAnyElementType FVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  UWorld *pUVar9;
  uint uVar10;
  uint uVar11;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((param_1[2].field_0x8 & 0x10) != 0) && (*(char *)(param_1 + 9) == '\x01')) {
    if (4 < (byte)LogRootMotion._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRootMotion);
    }
    pUVar3 = param_1 + 0x24;
    puVar1 = &param_1[0x24].field_0x8;
    puVar2 = &param_1[0x24].field_0xc;
    if (param_1[0x24].field_0x18 == '\0') {
      DestructItems<FSimulatedRootMotionReplicatedMove,int>
                ((FSimulatedRootMotionReplicatedMove *)*(FScriptContainerElement **)pUVar3,
                 *(int *)puVar1);
      *(undefined4 *)puVar1 = 0;
      if (*(int *)puVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xd0,8,0,(ForAnyElementType *)pUVar3,0,(int *)puVar2);
      }
    }
    else {
      iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xd0,8,1,(ForAnyElementType *)pUVar3,(int *)puVar1,(int *)puVar2);
      memset(*(FScriptContainerElement **)pUVar3 + (longlong)iVar8 * 0xd0,0,0xd0);
      uVar10 = *(int *)puVar1 - 1;
      uVar11 = 0;
      if ((int)uVar10 < *(int *)puVar1) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar8 = *(int *)puVar1;
      FVar5.Data = *(FScriptContainerElement **)pUVar3;
      FRepRootMotionMontage::operator=
                ((FRepRootMotionMontage *)(FVar5.Data + (longlong)iVar8 * 0xd0 + -200),
                 (FRepRootMotionMontage *)&param_1[0x24].field_0x10);
      pUVar9 = AActor::GetWorld((AActor *)param_1);
      *(float *)(FVar5.Data + (longlong)iVar8 * 0xd0 + -0xd0) = (float)pUVar9->TimeSeconds;
    }
    if (*(longlong *)(param_1 + 0x15) != 0) {
      pbVar4 = (byte *)(*(longlong *)(param_1 + 0x15) + 0x564);
      *pbVar4 = *pbVar4 | 0x40;
    }
  }
  return;
}

// execOnWalkingOffLedge @ 1477370d0

void __cdecl ACharacter::execOnWalkingOffLedge(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar *puVar3;
  uchar *puVar4;
  undefined4 local_res8 [2];
  uchar local_68 [24];
  uchar local_50 [24];
  uchar local_38 [32];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_68);
  }
  puVar3 = param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  puVar4 = local_68;
  if (puVar3 != (uchar *)0x0) {
    puVar4 = puVar3;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_50,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_50);
  }
  puVar3 = param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  puVar2 = local_50;
  if (puVar3 != (uchar *)0x0) {
    puVar2 = puVar3;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  local_res8[0] = 0;
  puVar3 = local_38;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x960))(param_1,puVar4,puVar2,puVar3,local_res8[0]);
  return;
}

// execPlayAnimMontage @ 147737310

void __cdecl ACharacter::execPlayAnimMontage(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  undefined8 local_res18;
  
  local_res18 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x928))(param_1,local_res18,local_res8[0],local_res10)
  ;
  *(undefined4 *)param_3 = uVar2;
  return;
}

// execRootMotionDebugClientPrintOnScreen @ 147737490

void __cdecl
ACharacter::execRootMotionDebugClientPrintOnScreen(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x9d8))(param_1,&local_18);
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execServerMove @ 147737540

void __cdecl ACharacter::execServerMove(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_a4 = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a4);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  local_res20[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_a8 = 0;
  FUInt32Property::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_98 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_a0 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a0);
  }
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_58 = local_90;
  uStack_50 = uStack_88;
  local_48 = local_80;
  local_28 = local_68;
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x15) + 0xb88))
                    (*(longlong **)(param_1 + 0x15),local_a4,&local_38,&local_58,local_res20[0],
                     local_res10[0],local_a8,local_98,local_a0,local_res8[0]);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"ServerMove_Validate");
  }
  else {
    local_28 = local_80;
    local_38 = local_90;
    uStack_30 = uStack_88;
    local_48 = local_68;
    (**(code **)(**(longlong **)(param_1 + 0x15) + 0xb80))
              (*(longlong **)(param_1 + 0x15),local_a4,&local_58,&local_38,local_res20[0],
               local_res10[0],local_a8,local_98,local_a0,local_res8[0]);
  }
  return;
}

// execServerMoveDual @ 1477378b0

void __cdecl ACharacter::execServerMoveDual(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  undefined1 local_f8 [4];
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8 [2];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_e8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_e8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a0);
  }
  local_f8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_f8);
  }
  local_ec = 0;
  FUInt32Property::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_ec,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_ec);
  }
  local_f0 = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f0);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d0);
  }
  local_res20[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_f4 = 0;
  FUInt32Property::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f4);
  }
  local_d8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  local_e0 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e0);
  }
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_78 = local_c0;
  local_88 = local_d0;
  uStack_80 = uStack_c8;
  local_58 = local_a8;
  local_68 = local_b8;
  uStack_60 = uStack_b0;
  local_38 = local_90;
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x15) + 0xba0))
                    (*(longlong **)(param_1 + 0x15),local_e8[0],&local_48,local_f8[0],local_ec,
                     local_f0,&local_68,&local_88,local_res20[0],local_res10[0],local_f4,local_d8,
                     local_e0,local_res8[0]);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"ServerMoveDual_Validate");
  }
  else {
    local_48 = local_d0;
    uStack_40 = uStack_c8;
    local_38 = local_c0;
    local_68 = local_b8;
    uStack_60 = uStack_b0;
    local_58 = local_a8;
    local_78 = local_90;
    (**(code **)(**(longlong **)(param_1 + 0x15) + 0xb98))
              (*(longlong **)(param_1 + 0x15),local_e8[0],&local_88,local_f8[0],local_ec,local_f0,
               &local_68,&local_48,local_res20[0],local_res10[0],local_f4,local_d8,local_e0,
               local_res8[0]);
  }
  return;
}

// execServerMoveDualHybridRootMotion @ 147737da0

void __cdecl
ACharacter::execServerMoveDualHybridRootMotion(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  undefined1 local_f8 [4];
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8 [2];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_e8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_e8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a0);
  }
  local_f8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_f8);
  }
  local_ec = 0;
  FUInt32Property::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_ec,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_ec);
  }
  local_f0 = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f0);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d0);
  }
  local_res20[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_f4 = 0;
  FUInt32Property::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f4);
  }
  local_d8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  local_e0 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e0);
  }
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_78 = local_c0;
  local_88 = local_d0;
  uStack_80 = uStack_c8;
  local_58 = local_a8;
  local_68 = local_b8;
  uStack_60 = uStack_b0;
  local_38 = local_90;
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x15) + 3000))
                    (*(longlong **)(param_1 + 0x15),local_e8[0],&local_48,local_f8[0],local_ec,
                     local_f0,&local_68,&local_88,local_res20[0],local_res10[0],local_f4,local_d8,
                     local_e0,local_res8[0]);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"ServerMoveDualHybridRootMotion_Validate");
  }
  else {
    local_48 = local_d0;
    uStack_40 = uStack_c8;
    local_38 = local_c0;
    local_68 = local_b8;
    uStack_60 = uStack_b0;
    local_58 = local_a8;
    local_78 = local_90;
    (**(code **)(**(longlong **)(param_1 + 0x15) + 0xbb0))
              (*(longlong **)(param_1 + 0x15),local_e8[0],&local_88,local_f8[0],local_ec,local_f0,
               &local_68,&local_48,local_res20[0],local_res10[0],local_f4,local_d8,local_e0,
               local_res8[0]);
  }
  return;
}

// execServerMoveDualNoBase @ 147738290

void __cdecl ACharacter::execServerMoveDualNoBase(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  undefined1 local_res8 [8];
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  undefined1 local_f8 [4];
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8 [2];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_e8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_e8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  local_f8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_f8);
  }
  local_ec = 0;
  FUInt32Property::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_ec,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_ec);
  }
  local_f0 = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f0);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c0);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  local_res20[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_f4 = 0;
  FUInt32Property::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f4);
  }
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_78 = local_c8;
  local_88 = local_d8;
  uStack_80 = uStack_d0;
  local_58 = local_b0;
  local_68 = local_c0;
  uStack_60 = uStack_b8;
  local_e0 = 0;
  local_38 = local_98;
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x15) + 0xba0))
                    (*(longlong **)(param_1 + 0x15),local_e8[0],&local_48,local_f8[0],local_ec,
                     local_f0,&local_68,&local_88,local_res20[0],local_res10[0],local_f4,0,0,
                     local_res8[0]);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"ServerMoveDualNoBase_Validate");
    return;
  }
  local_48 = local_d8;
  uStack_40 = uStack_d0;
  local_e0 = 0;
  local_38 = local_c8;
  local_68 = local_c0;
  uStack_60 = uStack_b8;
  local_58 = local_b0;
  local_78 = local_98;
  (**(code **)(**(longlong **)(param_1 + 0x15) + 0xb98))
            (*(longlong **)(param_1 + 0x15),local_e8[0],&local_88,local_f8[0],local_ec,local_f0,
             &local_68,&local_48,local_res20[0],local_res10[0],local_f4,0,0,local_res8[0]);
  return;
}

// execServerMoveNoBase @ 147738710

void __cdecl ACharacter::execServerMoveNoBase(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_94 = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_94,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_94);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_70,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_70);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_res20[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_98 = 0;
  FUInt32Property::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_58 = local_88;
  uStack_50 = uStack_80;
  local_90 = 0;
  local_48 = local_78;
  local_28 = local_60;
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x15) + 0xb88))
                    (*(longlong **)(param_1 + 0x15),local_94,&local_38,&local_58,local_res20[0],
                     local_res10[0],local_98,0,0,local_res8[0]);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"ServerMoveNoBase_Validate");
  }
  else {
    local_28 = local_78;
    local_38 = local_88;
    uStack_30 = uStack_80;
    local_90 = 0;
    local_48 = local_60;
    (**(code **)(**(longlong **)(param_1 + 0x15) + 0xb80))
              (*(longlong **)(param_1 + 0x15),local_94,&local_58,&local_38,local_res20[0],
               local_res10[0],local_98,0,0,local_res8[0]);
  }
  return;
}

// execServerMoveOld @ 147738a00

void __cdecl ACharacter::execServerMoveOld(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_28 = local_48;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  local_18 = local_38;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x15) + 0xbd0))
                    (*(longlong **)(param_1 + 0x15),local_res10[0],&local_28,local_res8[0]);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"ServerMoveOld_Validate");
    return;
  }
  local_18 = local_38;
  local_28 = local_48;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  (**(code **)(**(longlong **)(param_1 + 0x15) + 0xbc8))
            (*(longlong **)(param_1 + 0x15),local_res10[0],&local_28,local_res8[0]);
  return;
}

// execServerMovePacked @ 147738b90

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

void __cdecl ACharacter::execServerMovePacked(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 auStack_148 [32];
  undefined1 local_128 [128];
  void *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  void *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  void *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  void *local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  local_9c = 0x400;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_6c = 4;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 4;
  local_28 = (void *)0x0;
  local_20 = 0;
  local_1c = 4;
  local_18 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_128);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UCharacterMovementComponent::ServerMovePacked_ServerReceive
            (*(UCharacterMovementComponent **)(param_1 + 0x15),
             (FCharacterServerMovePackedBits *)local_128);
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  return;
}

// execStopAnimMontage @ 1477395d0

void __cdecl ACharacter::execStopAnimMontage(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x930))(param_1,local_res8);
  return;
}

// execStopJumping @ 147739660

void __cdecl ACharacter::execStopJumping(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147739678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x908))();
  return;
}

// execUnCrouch @ 147739b20

void __cdecl ACharacter::execUnCrouch(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x978))(param_1,local_res8[0] != 0);
  return;
}

