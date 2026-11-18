// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 100

// AddHitCapsule @ 14b494240

void __thiscall
UDS_MovementCore::AddHitCapsule
          (UDS_MovementCore *this,TWeakObjectPtr<UCapsuleComponent,FWeakObjectPtr> *param_1)

{
  return;
}

// AddHitCollision @ 14b494250

void __thiscall UDS_MovementCore::AddHitCollision(UDS_MovementCore *this,FHitResult *param_1)

{
  return;
}

// AddInputVector @ 14b494260

void __thiscall UDS_MovementCore::AddInputVector(UDS_MovementCore *this,TVector<double> *param_1)

{
  return;
}

// ClearHitCollisionCapsuleList @ 14b494280

void __thiscall UDS_MovementCore::ClearHitCollisionCapsuleList(UDS_MovementCore *this)

{
  return;
}

// ClearHitCollisionList @ 14b494290

void __thiscall UDS_MovementCore::ClearHitCollisionList(UDS_MovementCore *this)

{
  return;
}

// GetFallingLateralAcceleration @ 14b494b50

TVector<double> * __thiscall
UDS_MovementCore::GetFallingLateralAcceleration
          (UDS_MovementCore *this,TVector<double> *__return_storage_ptr__,float param_1)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetGravityScale @ 14b494b80

float __thiscall UDS_MovementCore::GetGravityScale(UDS_MovementCore *this)

{
  return __real_3f800000;
}

// GetGravityZ @ 14b494b90

float __thiscall UDS_MovementCore::GetGravityZ(UDS_MovementCore *this)

{
  return 0.0;
}

// GetLastInputVector @ 14b494bd0

TVector<double> * __thiscall
UDS_MovementCore::GetLastInputVector(UDS_MovementCore *this,TVector<double> *__return_storage_ptr__)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetLastSavedInputVector @ 14b494c00

TVector<double> * __thiscall
UDS_MovementCore::GetLastSavedInputVector
          (UDS_MovementCore *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->LastSaveInputVector).field0_0x0._s_0.Y;
  dVar1 = (this->LastSaveInputVector).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->LastSaveInputVector).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetLastUpdateVelocity @ 14b494c30

TVector<double> * __thiscall
UDS_MovementCore::GetLastUpdateVelocity
          (UDS_MovementCore *this,TVector<double> *__return_storage_ptr__)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetMaxSwimSpeed @ 14b494c70

float __thiscall UDS_MovementCore::GetMaxSwimSpeed(UDS_MovementCore *this)

{
  return 0.0;
}

// GetMountRotateAngle @ 14b494c80

float __thiscall UDS_MovementCore::GetMountRotateAngle(UDS_MovementCore *this)

{
  return 0.0;
}

// GetMovementMode @ 14b494c90

EMovementMode __thiscall UDS_MovementCore::GetMovementMode(UDS_MovementCore *this)

{
  return MOVE_Walking;
}

// GetPrevMovementMode @ 14b494d10

EMovementMode __thiscall UDS_MovementCore::GetPrevMovementMode(UDS_MovementCore *this)

{
  return MOVE_Walking;
}

// GetQuatFromCurrentFloorPitch @ 14b4954a0

TQuat<double> * __thiscall
UDS_MovementCore::GetQuatFromCurrentFloorPitch
          (UDS_MovementCore *this,TQuat<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = UE::Math::TQuat<double>::Identity.W;
  dVar2 = UE::Math::TQuat<double>::Identity.Z;
  dVar1 = UE::Math::TQuat<double>::Identity.Y;
  __return_storage_ptr__->X = UE::Math::TQuat<double>::Identity.X;
  __return_storage_ptr__->Y = dVar1;
  __return_storage_ptr__->Z = dVar2;
  __return_storage_ptr__->W = dVar3;
  return __return_storage_ptr__;
}

// GetSwimDeceleration @ 14b495500

float __thiscall UDS_MovementCore::GetSwimDeceleration(UDS_MovementCore *this)

{
  return 0.0;
}

// GetTerminalVelocity @ 14b495540

float __thiscall UDS_MovementCore::GetTerminalVelocity(UDS_MovementCore *this)

{
  return 0.0;
}

// IsLocationOnceWalkable @ 14b4955f0

bool __thiscall
UDS_MovementCore::IsLocationOnceWalkable
          (UDS_MovementCore *this,TVector<double> *param_1,TVector<double> *param_2)

{
  return false;
}

// IsLocationWalkable @ 14b495600

bool __thiscall
UDS_MovementCore::IsLocationWalkable
          (UDS_MovementCore *this,TVector<double> *param_1,TVector<double> *param_2,bool param_3)

{
  return false;
}

// IsUseSweepTest @ 14b495630

bool __thiscall UDS_MovementCore::IsUseSweepTest(UDS_MovementCore *this)

{
  return this->UseSweepTest;
}

// IsWallLike @ 14b495640

bool __thiscall
UDS_MovementCore::IsWallLike(UDS_MovementCore *this,FHitResult *param_1,bool param_2,bool param_3)

{
  return false;
}

// Jump @ 14b495650

void __thiscall UDS_MovementCore::Jump(UDS_MovementCore *this,float param_1)

{
  return;
}

// SetBrakingDecelerationMountFlying @ 14b4956d0

void __thiscall
UDS_MovementCore::SetBrakingDecelerationMountFlying(UDS_MovementCore *this,float param_1)

{
  return;
}

// SetBrakingDecelerationSwimming @ 14b4956e0

void __thiscall
UDS_MovementCore::SetBrakingDecelerationSwimming(UDS_MovementCore *this,float param_1)

{
  return;
}

// SetGravityScale @ 14b4956f0

void __thiscall UDS_MovementCore::SetGravityScale(UDS_MovementCore *this,float param_1)

{
  return;
}

// SetMaxAcceleration @ 14b495700

void __thiscall UDS_MovementCore::SetMaxAcceleration(UDS_MovementCore *this,float param_1)

{
  return;
}

// SetMaxMountFlyingSpeed @ 14b495710

void __thiscall UDS_MovementCore::SetMaxMountFlyingSpeed(UDS_MovementCore *this,float param_1)

{
  return;
}

// SetMaxSwimSpeed @ 14b495720

void __thiscall UDS_MovementCore::SetMaxSwimSpeed(UDS_MovementCore *this,float param_1)

{
  return;
}

// SetMovementMode @ 14b495730

void __thiscall UDS_MovementCore::SetMovementMode(UDS_MovementCore *this,EMovementMode param_1)

{
  return;
}

// SetPrevMovementMode @ 14b495740

void __thiscall UDS_MovementCore::SetPrevMovementMode(UDS_MovementCore *this,EMovementMode param_1)

{
  return;
}

// SetTerminalVelocity @ 14b495750

void __thiscall UDS_MovementCore::SetTerminalVelocity(UDS_MovementCore *this,float param_1)

{
  return;
}

// SetUseSweepTest @ 14b495760

void __thiscall UDS_MovementCore::SetUseSweepTest(UDS_MovementCore *this,bool param_1)

{
  this->UseSweepTest = param_1;
  return;
}

// SetVelocity @ 14b495770

void __thiscall UDS_MovementCore::SetVelocity(UDS_MovementCore *this,TVector<double> *param_1)

{
  return;
}

// SetWalkableFloorAngle @ 14b495780

void __thiscall UDS_MovementCore::SetWalkableFloorAngle(UDS_MovementCore *this,float param_1)

{
  return;
}

// StaticClass @ 14b4957b0

UClass * __cdecl UDS_MovementCore::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MovementCore.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MovementCore",
               &Z_Registration_Info_UClass_UDS_MovementCore.InnerSingleton,
               StaticRegisterNativesUDS_MovementCore,0x260,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_MovementCore>,
               InternalVTableHelperCtorCaller<UDS_MovementCore>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MovementCore.InnerSingleton;
}

// StopMove @ 14b495890

void __thiscall UDS_MovementCore::StopMove(UDS_MovementCore *this)

{
  return;
}

// UDS_MovementCore @ 14b501660

UDS_MovementCore * __thiscall
UDS_MovementCore::UDS_MovementCore(UDS_MovementCore *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_MovementCore__6B_;
  *(undefined8 *)&this->OnCharacterMovementUpdated = 0;
  *(undefined8 *)&(this->OnCharacterMovementUpdated).field_0x8 = 0;
  *(undefined8 *)&(this->OnCharacterMovementUpdated).field_0x10 = 0;
  (this->OwnerActor).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CharStatusData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CharInfoData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&(this->OnCharacterMovementUpdated).field_0x18 = 2;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ActorLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ActorLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->ActorLocation).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->PreActorLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PreActorLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->PreActorLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->PrevRelativeLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PrevRelativeLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->PrevRelativeLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->RelativeLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->RelativeLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->RelativeLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ServerActorLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ServerActorLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->ServerActorLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ParentLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
  ;
  (this->ParentLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->ParentLocation).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
  ;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ParentLocationDelta).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ParentLocationDelta).field0_0x0._s_0.Y = (double)uVar1;
  (this->ParentLocationDelta).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ParentDiffLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ParentDiffLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->ParentDiffLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->RelativeRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->RelativeRotation).Yaw = dVar2;
  (this->RelativeRotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->CurRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->CurRotation).Yaw = dVar2;
  (this->CurRotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->PreRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->PreRotation).Yaw = dVar2;
  (this->PreRotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->ParentRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->ParentRotation).Yaw = dVar2;
  (this->ParentRotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->OriginSkillForwardRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->OriginSkillForwardRotation).Yaw = dVar2;
  (this->OriginSkillForwardRotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->SkillForwardRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->SkillForwardRotation).Yaw = dVar2;
  (this->SkillForwardRotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  this->RotationVelocity2D = 0.0;
  this->RotationVelocityZ = 0.0;
  this->DirectionAngleFromInputVector2D = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->DirectionAngleFromInputVectorZ = 0.0;
  (this->PrevVelocity).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PrevVelocity).field0_0x0._s_0.Y = (double)uVar1;
  (this->PrevVelocity).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Velocity).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Velocity).field0_0x0._s_0.Y = (double)uVar1;
  (this->Velocity).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->RelativeVelocity).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->RelativeVelocity).field0_0x0._s_0.Y = (double)uVar1;
  (this->RelativeVelocity).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->AirWalkVelocity).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->AirWalkVelocity).field0_0x0._s_0.Y = (double)uVar1;
  (this->AirWalkVelocity).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SkillVelocity).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SkillVelocity).field0_0x0._s_0.Y = (double)uVar1;
  (this->SkillVelocity).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LastSaveInputVector).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LastSaveInputVector).field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->SlopeAngleDegrees = 0.0;
  (this->LastSaveInputVector).field0_0x0._s_0.Z = (double)uVar1;
  this->UseSweepTest = true;
  return this;
}

// ~UDS_MovementCore @ 14b502840

void __thiscall UDS_MovementCore::~UDS_MovementCore(UDS_MovementCore *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_MovementCore__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnCharacterMovementUpdated).field_0x8,
             *(int *)&(this->OnCharacterMovementUpdated).field_0x10);
  pvVar1 = *(void **)&(this->OnCharacterMovementUpdated).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCharacterMovementUpdated);
  UObject::~UObject((UObject *)this);
  return;
}

// GetDeceleration @ 14b5042e0

float __thiscall UDS_MovementCore::GetDeceleration(UDS_MovementCore *this)

{
  return 0.0;
}

// GetJumpZVelocity @ 14b5043d0

float __thiscall UDS_MovementCore::GetJumpZVelocity(UDS_MovementCore *this)

{
  return 0.0;
}

// GetMaxAcceleration @ 14b5043e0

float __thiscall UDS_MovementCore::GetMaxAcceleration(UDS_MovementCore *this)

{
  return 0.0;
}

// GetPredictedStopLocation @ 14b5043f0

TVector<double> * __thiscall
UDS_MovementCore::GetPredictedStopLocation
          (UDS_MovementCore *this,TVector<double> *__return_storage_ptr__)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14b504d20

UClass * __cdecl UDS_MovementCore::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MovementCore.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MovementCore",
               &Z_Registration_Info_UClass_UDS_MovementCore.InnerSingleton,
               StaticRegisterNativesUDS_MovementCore,0x260,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_MovementCore>,
               InternalVTableHelperCtorCaller<UDS_MovementCore>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MovementCore.InnerSingleton;
}

// StaticRegisterNativesUDS_MovementCore @ 14b505bb0

void __cdecl UDS_MovementCore::StaticRegisterNativesUDS_MovementCore(void)

{
  return;
}

// GetSlopeAngle @ 14b879390

float __thiscall UDS_MovementCore::GetSlopeAngle(UDS_MovementCore *this)

{
  return this->SlopeAngleDegrees;
}

// UDS_MovementCore @ 14bc2b150

UDS_MovementCore * __thiscall
UDS_MovementCore::UDS_MovementCore(UDS_MovementCore *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_MovementCore__6B_;
  *(undefined8 *)&this->OnCharacterMovementUpdated = 0;
  *(undefined8 *)&(this->OnCharacterMovementUpdated).field_0x8 = 0;
  *(undefined8 *)&(this->OnCharacterMovementUpdated).field_0x10 = 0;
  (this->OwnerActor).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CharStatusData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CharInfoData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&(this->OnCharacterMovementUpdated).field_0x18 = 2;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ActorLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ActorLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->ActorLocation).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->PreActorLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PreActorLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->PreActorLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->PrevRelativeLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PrevRelativeLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->PrevRelativeLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->RelativeLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->RelativeLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->RelativeLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ServerActorLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ServerActorLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->ServerActorLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ParentLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
  ;
  (this->ParentLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->ParentLocation).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
  ;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ParentLocationDelta).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ParentLocationDelta).field0_0x0._s_0.Y = (double)uVar1;
  (this->ParentLocationDelta).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ParentDiffLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ParentDiffLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->ParentDiffLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->RelativeRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->RelativeRotation).Yaw = dVar2;
  (this->RelativeRotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->CurRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->CurRotation).Yaw = dVar2;
  (this->CurRotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->PreRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->PreRotation).Yaw = dVar2;
  (this->PreRotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->ParentRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->ParentRotation).Yaw = dVar2;
  (this->ParentRotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->OriginSkillForwardRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->OriginSkillForwardRotation).Yaw = dVar2;
  (this->OriginSkillForwardRotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->SkillForwardRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->SkillForwardRotation).Yaw = dVar2;
  (this->SkillForwardRotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  this->RotationVelocity2D = 0.0;
  this->RotationVelocityZ = 0.0;
  this->DirectionAngleFromInputVector2D = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->DirectionAngleFromInputVectorZ = 0.0;
  (this->PrevVelocity).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PrevVelocity).field0_0x0._s_0.Y = (double)uVar1;
  (this->PrevVelocity).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Velocity).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Velocity).field0_0x0._s_0.Y = (double)uVar1;
  (this->Velocity).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->RelativeVelocity).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->RelativeVelocity).field0_0x0._s_0.Y = (double)uVar1;
  (this->RelativeVelocity).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->AirWalkVelocity).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->AirWalkVelocity).field0_0x0._s_0.Y = (double)uVar1;
  (this->AirWalkVelocity).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SkillVelocity).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SkillVelocity).field0_0x0._s_0.Y = (double)uVar1;
  (this->SkillVelocity).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LastSaveInputVector).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LastSaveInputVector).field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->SlopeAngleDegrees = 0.0;
  (this->LastSaveInputVector).field0_0x0._s_0.Z = (double)uVar1;
  this->UseSweepTest = true;
  return this;
}

// CallMovementUpdateDelegate @ 14bc2ffa0

void __thiscall
UDS_MovementCore::CallMovementUpdateDelegate
          (UDS_MovementCore *this,float param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  undefined1 *puVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  bool bVar12;
  char cVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  FDestructionSentinel local_b8;
  double local_98;
  double dStack_90;
  double local_88;
  double local_78;
  double dStack_70;
  double local_68;
  
  dVar7 = (param_3->field0_0x0)._s_0.X;
  dVar8 = (param_3->field0_0x0)._s_0.Y;
  dVar2 = (param_3->field0_0x0)._s_0.Z;
  dVar9 = (param_2->field0_0x0)._s_0.X;
  dVar10 = (param_2->field0_0x0)._s_0.Y;
  dVar3 = (param_2->field0_0x0)._s_0.Z;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnCharacterMovementUpdated,(FWriteAccessScope *)&local_b8);
  puVar1 = &(this->OnCharacterMovementUpdated).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar11 = false;
  uVar15 = *(int *)&(this->OnCharacterMovementUpdated).field_0x10 - 1;
  if (-1 < (int)uVar15) {
    lVar16 = (longlong)(int)uVar15 << 4;
    bVar11 = false;
    do {
      uVar14 = 0;
      if ((int)uVar15 < *(int *)&(this->OnCharacterMovementUpdated).field_0x10) {
        uVar14 = ~uVar15 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar4 = *(longlong *)&(this->OnCharacterMovementUpdated).field_0x8;
      if (((*(int *)(lVar16 + 8 + lVar4) == 0) ||
          (plVar5 = *(longlong **)(lVar16 + lVar4), plVar5 == (longlong *)0x0)) ||
         (local_98 = dVar7, dStack_90 = dVar8, local_88 = dVar2, local_78 = dVar9,
         dStack_70 = dVar10, local_68 = dVar3,
         cVar13 = (**(code **)(*plVar5 + 0x68))(plVar5,param_1,&local_78,&local_98), cVar13 == '\0')
         ) {
        bVar11 = true;
      }
      lVar16 = lVar16 + -0x10;
      uVar15 = uVar15 - 1;
    } while (-1 < (int)uVar15);
  }
  puVar1 = &(this->OnCharacterMovementUpdated).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar11) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnCharacterMovementUpdated,false);
  }
  if (local_b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
  }
  return;
}

// Deinitialize @ 14bc388b0

void __thiscall UDS_MovementCore::Deinitialize(UDS_MovementCore *this)

{
  (this->OwnerActor).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CharStatusData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CharInfoData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  return;
}

// GetActorFootLocation @ 14bc3eee0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TVector<double> * __thiscall
UDS_MovementCore::GetActorFootLocation
          (UDS_MovementCore *this,TVector<double> *__return_storage_ptr__)

{
  undefined8 uVar1;
  FDS_EntityBase *pFVar2;
  uint uVar3;
  float fVar4;
  uint uVar5;
  TVector<double>_u_0 local_28;
  
  pFVar2 = FDS_EntityBase::GetEntityBaseFromActor
                     ((TWeakObjectPtr<AActor,FWeakObjectPtr>)(this->OwnerActor).WeakPtr);
  if (pFVar2 != (FDS_EntityBase *)0x0) {
    GetActorLocation(this,(TVector<double> *)&local_28._s_0);
    uVar3 = SUB84(local_28._s_0.X,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar5 = (uint)((ulonglong)local_28._0_8_ >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_
    ;
    if (((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar5,uVar3) &&
          (double)CONCAT44(uVar5,uVar3) != __real_3f1a36e2e0000000) ||
        (uVar3 = SUB84(local_28._s_0.Y,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar5 = (uint)((ulonglong)local_28._8_8_ >> 0x20) &
                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar5,uVar3) &&
        (double)CONCAT44(uVar5,uVar3) != __real_3f1a36e2e0000000)) ||
       (uVar3 = SUB84(local_28._s_0.Z,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar5 = (uint)((ulonglong)local_28._16_8_ >> 0x20) &
               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar5,uVar3) &&
       (double)CONCAT44(uVar5,uVar3) != __real_3f1a36e2e0000000)) {
      fVar4 = (float)((uint)pFVar2->ScaledCapsuleHalfHeight ^ __xmm_80000000800000008000000080000000
                     );
      *(double *)&__return_storage_ptr__->field0_0x0 = local_28._s_0.X;
      *(double *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = local_28._s_0.Y;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = local_28._s_0.Z + (double)fVar4;
      return __return_storage_ptr__;
    }
  }
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetActorForwardVector @ 14bc3efc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector<double> * __thiscall
UDS_MovementCore::GetActorForwardVector
          (UDS_MovementCore *this,TVector<double> *__return_storage_ptr__)

{
  bool bVar1;
  UObject *pUVar2;
  TVector<double>_u_0 *pTVar3;
  TVector<double>_u_0 local_38;
  double local_20;
  double dStack_18;
  double local_10;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->OwnerActor).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
    if (*(USceneComponent **)(pUVar2 + 0xb) == (USceneComponent *)0x0) {
      pTVar3 = &local_38;
      local_38._s_0.X = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
      local_38._s_0.Y = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
      local_38._s_0.Z = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
    }
    else {
      pTVar3 = &USceneComponent::GetForwardVector
                          (*(USceneComponent **)(pUVar2 + 0xb),(TVector<double> *)&local_38._s_0)->
                field0_0x0;
    }
    local_20 = (((TVector<double>_u_0 *)&(pTVar3->_s_0).X)->_s_0).X;
    dStack_18 = (pTVar3->_s_0).Y;
    local_10 = (pTVar3->_s_0).Z;
  }
  else {
    local_20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = local_20;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_18;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_10;
  return __return_storage_ptr__;
}

// GetActorHeadLocation @ 14bc3f0f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TVector<double> * __thiscall
UDS_MovementCore::GetActorHeadLocation
          (UDS_MovementCore *this,TVector<double> *__return_storage_ptr__)

{
  float fVar1;
  undefined8 uVar2;
  FDS_EntityBase *pFVar3;
  uint uVar4;
  uint uVar5;
  TVector<double>_u_0 local_28;
  
  pFVar3 = FDS_EntityBase::GetEntityBaseFromActor
                     ((TWeakObjectPtr<AActor,FWeakObjectPtr>)(this->OwnerActor).WeakPtr);
  if (pFVar3 != (FDS_EntityBase *)0x0) {
    GetActorLocation(this,(TVector<double> *)&local_28._s_0);
    uVar4 = SUB84(local_28._s_0.X,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar5 = (uint)((ulonglong)local_28._0_8_ >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_
    ;
    if (((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar5,uVar4) &&
          (double)CONCAT44(uVar5,uVar4) != __real_3f1a36e2e0000000) ||
        (uVar4 = SUB84(local_28._s_0.Y,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar5 = (uint)((ulonglong)local_28._8_8_ >> 0x20) &
                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar5,uVar4) &&
        (double)CONCAT44(uVar5,uVar4) != __real_3f1a36e2e0000000)) ||
       (uVar4 = SUB84(local_28._s_0.Z,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar5 = (uint)((ulonglong)local_28._16_8_ >> 0x20) &
               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar5,uVar4) &&
       (double)CONCAT44(uVar5,uVar4) != __real_3f1a36e2e0000000)) {
      fVar1 = pFVar3->ScaledCapsuleHalfHeight;
      *(double *)&__return_storage_ptr__->field0_0x0 = local_28._s_0.X;
      *(double *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = local_28._s_0.Y;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = local_28._s_0.Z + (double)fVar1;
      return __return_storage_ptr__;
    }
  }
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetActorLocation @ 14bc3f1c0

TVector<double> * __thiscall
UDS_MovementCore::GetActorLocation(UDS_MovementCore *this,TVector<double> *__return_storage_ptr__)

{
  longlong lVar1;
  bool bVar2;
  UObject *pUVar3;
  double local_28;
  double dStack_20;
  double local_18;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->OwnerActor).WeakPtr);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
    lVar1 = *(longlong *)(pUVar3 + 0xb);
    if (lVar1 == 0) {
      local_28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
    else {
      local_28 = *(double *)(lVar1 + 0x210);
      dStack_20 = *(double *)(lVar1 + 0x218);
      local_18 = *(double *)(lVar1 + 0x220);
    }
  }
  else {
    local_28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = local_28;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_20;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_18;
  return __return_storage_ptr__;
}

// GetActorRelativeLocation @ 14bc3f270

TVector<double> * __thiscall
UDS_MovementCore::GetActorRelativeLocation
          (UDS_MovementCore *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->RelativeLocation).field0_0x0._s_0.Y;
  dVar1 = (this->RelativeLocation).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->RelativeLocation).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetActorRelativeRotation @ 14bc3f2a0

TRotator<double> * __thiscall
UDS_MovementCore::GetActorRelativeRotation
          (UDS_MovementCore *this,TRotator<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->RelativeRotation).Yaw;
  dVar1 = (this->RelativeRotation).Roll;
  __return_storage_ptr__->Pitch = (this->RelativeRotation).Pitch;
  __return_storage_ptr__->Yaw = dVar2;
  __return_storage_ptr__->Roll = dVar1;
  return __return_storage_ptr__;
}

// GetActorRightVector @ 14bc3f2d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector<double> * __thiscall
UDS_MovementCore::GetActorRightVector
          (UDS_MovementCore *this,TVector<double> *__return_storage_ptr__)

{
  bool bVar1;
  UObject *pUVar2;
  TVector<double>_u_0 *pTVar3;
  TVector<double>_u_0 local_38;
  double local_20;
  double dStack_18;
  double local_10;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->OwnerActor).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
    if (*(USceneComponent **)(pUVar2 + 0xb) == (USceneComponent *)0x0) {
      pTVar3 = &local_38;
      local_38._s_0.X = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X;
      local_38._s_0.Y = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y;
      local_38._s_0.Z = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z;
    }
    else {
      pTVar3 = &USceneComponent::GetRightVector
                          (*(USceneComponent **)(pUVar2 + 0xb),(TVector<double> *)&local_38._s_0)->
                field0_0x0;
    }
    local_20 = (((TVector<double>_u_0 *)&(pTVar3->_s_0).X)->_s_0).X;
    dStack_18 = (pTVar3->_s_0).Y;
    local_10 = (pTVar3->_s_0).Z;
  }
  else {
    local_20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = local_20;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_18;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_10;
  return __return_storage_ptr__;
}

// GetActorRotation @ 14bc3f390

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TRotator<double> * __thiscall
UDS_MovementCore::GetActorRotation(UDS_MovementCore *this,TRotator<double> *__return_storage_ptr__)

{
  bool bVar1;
  UObject *pUVar2;
  TRotator<double> *pTVar3;
  TRotator<double> local_38;
  double local_20;
  double dStack_18;
  double local_10;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->OwnerActor).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
    if (*(USceneComponent **)(pUVar2 + 0xb) == (USceneComponent *)0x0) {
      pTVar3 = &local_38;
      local_38.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
      local_38.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
      local_38.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
    }
    else {
      pTVar3 = USceneComponent::GetComponentRotation(*(USceneComponent **)(pUVar2 + 0xb),&local_38);
    }
    local_20 = pTVar3->Pitch;
    dStack_18 = pTVar3->Yaw;
    local_10 = pTVar3->Roll;
  }
  else {
    local_20 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    dStack_18 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    local_10 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  }
  __return_storage_ptr__->Pitch = local_20;
  __return_storage_ptr__->Yaw = dStack_18;
  __return_storage_ptr__->Roll = local_10;
  return __return_storage_ptr__;
}

// GetActorTransform @ 14bc3f450

TTransform<double> * __thiscall
UDS_MovementCore::GetActorTransform
          (UDS_MovementCore *this,TTransform<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  UObject *pUVar6;
  TTransform<double> *pTVar7;
  
  bVar5 = FWeakObjectPtr::IsValid(&(this->OwnerActor).WeakPtr);
  if (bVar5) {
    pUVar6 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
    if (*(longlong *)(pUVar6 + 0xb) != 0) {
      pTVar7 = (TTransform<double> *)(*(longlong *)(pUVar6 + 0xb) + 0x1f0);
      goto LAB_14bc3f490;
    }
  }
  pTVar7 = &UE::Math::TTransform<double>::Identity;
LAB_14bc3f490:
  dVar1 = (pTVar7->Rotation).XY.m128d_f64[1];
  dVar2 = (pTVar7->Rotation).ZW.m128d_f64[0];
  dVar3 = (pTVar7->Rotation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (pTVar7->Rotation).XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar1;
  dVar1 = (pTVar7->Translation).XY.m128d_f64[0];
  dVar4 = (pTVar7->Translation).XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar3;
  dVar2 = (pTVar7->Translation).ZW.m128d_f64[0];
  dVar3 = (pTVar7->Translation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar1;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar4;
  dVar1 = (pTVar7->Scale3D).XY.m128d_f64[0];
  dVar4 = (pTVar7->Scale3D).XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar3;
  dVar2 = (pTVar7->Scale3D).ZW.m128d_f64[0];
  dVar3 = (pTVar7->Scale3D).ZW.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar1;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar4;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar3;
  return __return_storage_ptr__;
}

// GetAirWalkSpeed @ 14bc3f4f0

TVector<double> * __thiscall
UDS_MovementCore::GetAirWalkSpeed(UDS_MovementCore *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->AirWalkVelocity).field0_0x0._s_0.Y;
  dVar1 = (this->AirWalkVelocity).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->AirWalkVelocity).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetCurrentFloor @ 14bc405e0

FHitResult * __thiscall
UDS_MovementCore::GetCurrentFloor(UDS_MovementCore *this,FHitResult *__return_storage_ptr__)

{
  memset(__return_storage_ptr__,0,0x100);
  (__return_storage_ptr__->HitObjectHandle).ReferenceObject.WeakPtr = (FWeakObjectPtr)0x0;
  (__return_storage_ptr__->HitObjectHandle).ManagerInterface.ObjectInstance.WeakPtr =
       (FWeakObjectPtr)0x0;
  __return_storage_ptr__->Time = 1.0;
  __return_storage_ptr__->MyItem = -1;
  (__return_storage_ptr__->HitObjectHandle).ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  (__return_storage_ptr__->HitObjectHandle).InstanceIndex = -1;
  (__return_storage_ptr__->HitObjectHandle).ResolutionStatus = Invalid;
  *(undefined3 *)&(__return_storage_ptr__->HitObjectHandle).field_0x1d = 0;
  return __return_storage_ptr__;
}

// GetHitCollisionCapsuleList @ 14bc41080

TArray<TWeakObjectPtr<UCapsuleComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> * __thiscall
UDS_MovementCore::GetHitCollisionCapsuleList(UDS_MovementCore *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_MovementCore::GetHitCollisionCapsuleList'::__l2::
             _dynamic_atexit_destructor_for__emptyHitCollisions__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &emptyHitCollisions;
}

// GetHitCollisionList @ 14bc41170

TArray<FHitResult,TSizedDefaultAllocator<32>_> * __thiscall
UDS_MovementCore::GetHitCollisionList(UDS_MovementCore *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_MovementCore::GetHitCollisionList'::__l2::
             _dynamic_atexit_destructor_for__emptyHits__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &emptyHits;
}

// GetLastRotateVector @ 14bc41ac0

TVector<double> * __thiscall
UDS_MovementCore::GetLastRotateVector
          (UDS_MovementCore *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  TRotator<double> *this_00;
  TVector<double>_u_0 *pTVar3;
  uint uVar4;
  uint uVar5;
  double local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  TVector<double>_u_0 local_40;
  TVector<double> local_28;
  
  (**(code **)(this->_padding_ + 0x458))(this,&local_58);
  uVar4 = SUB84(local_58,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar5 = (uint)((ulonglong)local_58 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar5,uVar4) &&
        (double)CONCAT44(uVar5,uVar4) != __real_3f1a36e2e0000000) ||
      (uVar4 = (uint)uStack_50 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar5 = (uint)((ulonglong)uStack_50 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar5,uVar4) &&
      (double)CONCAT44(uVar5,uVar4) != __real_3f1a36e2e0000000)) ||
     (uVar4 = (uint)local_48 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar5 = (uint)((ulonglong)local_48 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar5,uVar4) &&
     (double)CONCAT44(uVar5,uVar4) != __real_3f1a36e2e0000000)) {
    pTVar3 = &local_40;
    local_40._16_8_ = local_48;
    local_40._0_8_ = local_58;
    local_40._8_8_ = uStack_50;
  }
  else {
    this_00 = GetActorRotation(this,(TRotator<double> *)&local_40._s_0);
    pTVar3 = &UE::Math::TRotator<double>::Vector(this_00,&local_28)->field0_0x0;
  }
  dVar2 = (pTVar3->_s_0).Y;
  dVar1 = (pTVar3->_s_0).Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (((TVector<double>_u_0 *)&(pTVar3->_s_0).X)->_s_0).X
  ;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetLastRotateYaw @ 14bc41c20

float __thiscall UDS_MovementCore::GetLastRotateYaw(UDS_MovementCore *this)

{
  TRotator<double> *pTVar1;
  TVector<double> local_58;
  TRotator<double> local_40;
  TRotator<double> local_28;
  
  (**(code **)(this->_padding_ + 0x458))(this,&local_58);
  if ((((double)CONCAT44((uint)((ulonglong)local_58.field0_0x0._0_8_ >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(local_58.field0_0x0._s_0.X,0) &
                         (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= __real_3f1a36e2e0000000)
      && ((double)CONCAT44((uint)((ulonglong)local_58.field0_0x0._8_8_ >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(local_58.field0_0x0._s_0.Y,0) &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= __real_3f1a36e2e0000000)
      ) && ((double)CONCAT44((uint)((ulonglong)local_58.field0_0x0._16_8_ >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(local_58.field0_0x0._s_0.Z,0) &
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            __real_3f1a36e2e0000000)) {
    pTVar1 = GetActorRotation(this,&local_28);
    return (float)pTVar1->Yaw;
  }
  UE::Math::TVector<double>::ToOrientationRotator(&local_58,&local_40);
  return (float)local_40.Yaw;
}

// GetLocationGap @ 14bc41db0

TVector<double> * __thiscall
UDS_MovementCore::GetLocationGap(UDS_MovementCore *this,TVector<double> *__return_storage_ptr__)

{
  longlong lVar1;
  double dVar2;
  bool bVar3;
  UObject *pUVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  double local_58;
  double local_50;
  double local_48;
  double local_30;
  
  bVar3 = FWeakObjectPtr::IsValid(&(this->OwnerActor).WeakPtr);
  if (bVar3) {
    pUVar4 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
    lVar1 = *(longlong *)(pUVar4 + 0xb);
    if (lVar1 == 0) {
      local_30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    }
    else {
      local_30 = *(double *)(lVar1 + 0x220);
      uVar7 = *(uint *)(lVar1 + 0x210);
      uVar8 = *(uint *)(lVar1 + 0x214);
      uVar9 = *(uint *)(lVar1 + 0x218);
      uVar10 = *(uint *)(lVar1 + 0x21c);
    }
  }
  else {
    local_30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  }
  (**(code **)(this->_padding_ + 0x330))(this,&local_58);
  if ((((__real_3f1a36e2e0000000 <=
         (double)CONCAT44(uVar8 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          uVar7 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) &&
         (double)CONCAT44(uVar8 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          uVar7 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) !=
         __real_3f1a36e2e0000000) ||
       (__real_3f1a36e2e0000000 <=
        (double)CONCAT44(uVar10 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         uVar9 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) &&
        (double)CONCAT44(uVar10 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         uVar9 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) !=
        __real_3f1a36e2e0000000)) ||
      (uVar5 = SUB84(local_30,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar6 = (uint)((ulonglong)local_30 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar6,uVar5) &&
      (double)CONCAT44(uVar6,uVar5) != __real_3f1a36e2e0000000)) &&
     (((uVar5 = SUB84(local_58,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar6 = (uint)((ulonglong)local_58 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar6,uVar5) &&
       (double)CONCAT44(uVar6,uVar5) != __real_3f1a36e2e0000000 ||
       (uVar5 = SUB84(local_50,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar6 = (uint)((ulonglong)local_50 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar6,uVar5) &&
       (double)CONCAT44(uVar6,uVar5) != __real_3f1a36e2e0000000)) ||
      (uVar5 = SUB84(local_48,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar6 = (uint)((ulonglong)local_48 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar6,uVar5) &&
      (double)CONCAT44(uVar6,uVar5) != __real_3f1a36e2e0000000)))) {
    (__return_storage_ptr__->field0_0x0)._s_0.Z = local_48 - local_30;
    (__return_storage_ptr__->field0_0x0)._s_0.X = local_58 - (double)CONCAT44(uVar8,uVar7);
    (__return_storage_ptr__->field0_0x0)._s_0.Y = local_50 - (double)CONCAT44(uVar10,uVar9);
    return __return_storage_ptr__;
  }
  dVar2 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                           UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                        UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetMaxMoveSpeed @ 14bc420a0

float __thiscall UDS_MovementCore::GetMaxMoveSpeed(UDS_MovementCore *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->CharStatusData).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->CharStatusData).WeakPtr);
    return (float)*(double *)&pUVar2[4].field_0x10;
  }
  return 0.0;
}

// GetMaxStepHeight @ 14bc42150

float __thiscall UDS_MovementCore::GetMaxStepHeight(UDS_MovementCore *this)

{
  return __real_42340000;
}

// GetMoveSpeed @ 14bc421a0

float __thiscall UDS_MovementCore::GetMoveSpeed(UDS_MovementCore *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  dVar1 = (this->Velocity).field0_0x0._s_0.X;
  dVar2 = (this->Velocity).field0_0x0._s_0.Y;
  dVar3 = (this->Velocity).field0_0x0._s_0.Z;
  auVar4._0_8_ = dVar1 * dVar1;
  auVar4._8_8_ = 0;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = dVar2 * dVar2 + auVar4._0_8_ + dVar3 * dVar3;
  auVar5 = sqrtpd(auVar4,auVar5);
  return (float)auVar5._0_8_;
}

// GetMovementCore @ 14bc42300

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> __cdecl
UDS_MovementCore::GetMovementCore(ulong64 param_1)

{
  UDS_EntityManager *this;
  FDS_EntityBase *pFVar1;
  FWeakObjectPtr *pFVar2;
  ulong64 in_RDX;
  FWeakObjectPtr local_res8;
  undefined8 local_res18;
  undefined1 local_res20 [8];
  
  this = UDS_EntityManager::GetInst();
  if (this != (UDS_EntityManager *)0x0) {
    pFVar1 = UDS_EntityManager::FindEntityBase(this,in_RDX);
    if (pFVar1 != (FDS_EntityBase *)0x0) {
      pFVar2 = (FWeakObjectPtr *)(**(code **)(pFVar1->_padding_ + 0x78))(pFVar1,local_res20);
      goto LAB_14bc4235e;
    }
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
  pFVar2 = &local_res8;
LAB_14bc4235e:
  *(FWeakObjectPtr *)param_1 = *pFVar2;
  return (TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetOwnerEntity @ 14bc42f40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FDS_EntityBase * __thiscall UDS_MovementCore::GetOwnerEntity(UDS_MovementCore *this)

{
  FDS_EntityBase *pFVar1;
  
  pFVar1 = FDS_EntityBase::GetEntityBaseFromActor
                     ((TWeakObjectPtr<AActor,FWeakObjectPtr>)(this->OwnerActor).WeakPtr);
  return pFVar1;
}

// GetParentDiffLocation @ 14bc42fb0

TVector<double> * __thiscall
UDS_MovementCore::GetParentDiffLocation
          (UDS_MovementCore *this,TVector<double> *__return_storage_ptr__)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetParentLocationDelta @ 14bc430b0

TVector<double> * __thiscall
UDS_MovementCore::GetParentLocationDelta
          (UDS_MovementCore *this,TVector<double> *__return_storage_ptr__)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetRelativeVelocity @ 14bc43630

TVector<double> * __thiscall
UDS_MovementCore::GetRelativeVelocity
          (UDS_MovementCore *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->RelativeVelocity).field0_0x0._s_0.Y;
  dVar1 = (this->RelativeVelocity).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->RelativeVelocity).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetServerFootLocation @ 14bc436e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TVector<double> * __thiscall
UDS_MovementCore::GetServerFootLocation
          (UDS_MovementCore *this,TVector<double> *__return_storage_ptr__)

{
  undefined8 uVar1;
  FDS_EntityBase *pFVar2;
  uint uVar3;
  float fVar4;
  uint uVar5;
  undefined8 local_28;
  undefined8 uStack_20;
  double local_18;
  
  pFVar2 = FDS_EntityBase::GetEntityBaseFromActor
                     ((TWeakObjectPtr<AActor,FWeakObjectPtr>)(this->OwnerActor).WeakPtr);
  if (pFVar2 != (FDS_EntityBase *)0x0) {
    (**(code **)(this->_padding_ + 0x330))(this,&local_28);
    uVar3 = (uint)local_28 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar5 = (uint)((ulonglong)local_28 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if (((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar5,uVar3) &&
          (double)CONCAT44(uVar5,uVar3) != __real_3f1a36e2e0000000) ||
        (uVar3 = (uint)uStack_20 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar5 = (uint)((ulonglong)uStack_20 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar5,uVar3) &&
        (double)CONCAT44(uVar5,uVar3) != __real_3f1a36e2e0000000)) ||
       (uVar3 = SUB84(local_18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar5 = (uint)((ulonglong)local_18 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar5,uVar3) &&
       (double)CONCAT44(uVar5,uVar3) != __real_3f1a36e2e0000000)) {
      fVar4 = (float)((uint)pFVar2->ScaledCapsuleHalfHeight ^ __xmm_80000000800000008000000080000000
                     );
      *(undefined8 *)&__return_storage_ptr__->field0_0x0 = local_28;
      *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uStack_20;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = local_18 + (double)fVar4;
      return __return_storage_ptr__;
    }
  }
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetServerHeadLocation @ 14bc437e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TVector<double> * __thiscall
UDS_MovementCore::GetServerHeadLocation
          (UDS_MovementCore *this,TVector<double> *__return_storage_ptr__)

{
  float fVar1;
  undefined8 uVar2;
  FDS_EntityBase *pFVar3;
  uint uVar4;
  uint uVar5;
  undefined8 local_28;
  undefined8 uStack_20;
  double local_18;
  
  pFVar3 = FDS_EntityBase::GetEntityBaseFromActor
                     ((TWeakObjectPtr<AActor,FWeakObjectPtr>)(this->OwnerActor).WeakPtr);
  if (pFVar3 != (FDS_EntityBase *)0x0) {
    (**(code **)(this->_padding_ + 0x330))(this,&local_28);
    uVar4 = (uint)local_28 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar5 = (uint)((ulonglong)local_28 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if (((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar5,uVar4) &&
          (double)CONCAT44(uVar5,uVar4) != __real_3f1a36e2e0000000) ||
        (uVar4 = (uint)uStack_20 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar5 = (uint)((ulonglong)uStack_20 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar5,uVar4) &&
        (double)CONCAT44(uVar5,uVar4) != __real_3f1a36e2e0000000)) ||
       (uVar4 = SUB84(local_18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar5 = (uint)((ulonglong)local_18 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar5,uVar4) &&
       (double)CONCAT44(uVar5,uVar4) != __real_3f1a36e2e0000000)) {
      fVar1 = pFVar3->ScaledCapsuleHalfHeight;
      *(undefined8 *)&__return_storage_ptr__->field0_0x0 = local_28;
      *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uStack_20;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = local_18 + (double)fVar1;
      return __return_storage_ptr__;
    }
  }
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetServerLocation @ 14bc43aa0

TVector<double> * __thiscall
UDS_MovementCore::GetServerLocation(UDS_MovementCore *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->ServerActorLocation).field0_0x0._s_0.Y;
  dVar1 = (this->ServerActorLocation).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->ServerActorLocation).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetSkillVelocity @ 14bc440f0

TVector<double> * __thiscall
UDS_MovementCore::GetSkillVelocity(UDS_MovementCore *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->SkillVelocity).field0_0x0._s_0.Y;
  dVar1 = (this->SkillVelocity).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->SkillVelocity).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetVelocity @ 14bc44bc0

TVector<double> * __thiscall
UDS_MovementCore::GetVelocity(UDS_MovementCore *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->Velocity).field0_0x0._s_0.Y;
  dVar1 = (this->Velocity).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->Velocity).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetWalkableFloorAngle @ 14bc44c50

float __thiscall UDS_MovementCore::GetWalkableFloorAngle(UDS_MovementCore *this)

{
  return __real_42330f72;
}

// Initialize @ 14bc48ba0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_MovementCore::Initialize
          (UDS_MovementCore *this,TWeakObjectPtr<AActor,FWeakObjectPtr> param_1,
          TWeakObjectPtr<UActorComponent,FWeakObjectPtr> param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FDS_EntityBase *pFVar4;
  UObject *pUVar5;
  TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> TVar6;
  TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> TVar7;
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> TVar8;
  FWeakObjectPtr local_res10;
  undefined1 local_res20 [8];
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  double local_18;
  
  local_res10 = param_1.WeakPtr;
  bVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar3) {
    pFVar4 = FDS_EntityBase::GetEntityBaseFromActor
                       ((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_res10);
    if (pFVar4 == (FDS_EntityBase *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5301173160157118521>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Components\\Movement\\DS_MovementCore.cpp"
                         ,0x39,"entityBase");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      (**(code **)(this->_padding_ + 0x2b8))(this);
      (this->OwnerActor).WeakPtr = local_res10;
      pcVar2 = *(code **)(this->_padding_ + 0x380);
      pUVar5 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
      lVar1 = *(longlong *)(pUVar5 + 0xb);
      local_28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      uStack_24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      uStack_20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      uStack_1c = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      local_18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      if (lVar1 != 0) {
        local_28 = *(undefined4 *)(lVar1 + 0x210);
        uStack_24 = *(undefined4 *)(lVar1 + 0x214);
        uStack_20 = *(undefined4 *)(lVar1 + 0x218);
        uStack_1c = *(undefined4 *)(lVar1 + 0x21c);
        local_18 = *(double *)(lVar1 + 0x220);
      }
      (*pcVar2)(this,&local_28);
      TVar6 = UDS_CharStatusData::GetData((ulong64)local_res20);
                    /* WARNING: Load size is inaccurate */
      (this->CharStatusData).WeakPtr = *TVar6.WeakPtr;
      TVar7 = UDS_CharInfoData::GetData((ulong64)local_38);
                    /* WARNING: Load size is inaccurate */
      (this->CharInfoData).WeakPtr = *TVar7.WeakPtr;
      TVar8 = UDS_CharStateData::GetData((ulong64)local_30);
                    /* WARNING: Load size is inaccurate */
      (this->CharStateData).WeakPtr = *TVar8.WeakPtr;
    }
  }
  return;
}

// IsFullySubmerged @ 14bc4aa30

bool __thiscall UDS_MovementCore::IsFullySubmerged(UDS_MovementCore *this)

{
  return false;
}

// IsMovingOnGround @ 14bc4b3b0

bool __thiscall UDS_MovementCore::IsMovingOnGround(UDS_MovementCore *this)

{
  return false;
}

// IsPathWalkable @ 14bc4b3d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector<double> * __thiscall
UDS_MovementCore::IsPathWalkable
          (UDS_MovementCore *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1,
          TVector<double> *param_2)

{
  undefined8 uVar1;
  double dVar2;
  float fVar3;
  int iVar4;
  bool bVar5;
  AActor *this_00;
  UWorld *pUVar6;
  ForAnyElementType FVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined4 uVar13;
  undefined4 uVar14;
  double dVar15;
  double dVar16;
  double _X;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 local_res8 [8];
  TVector<double>_u_0 local_258;
  double local_240;
  double local_238;
  double local_230;
  undefined1 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined2 local_21c;
  void *local_218;
  undefined8 local_210;
  void *local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined1 local_1f0;
  undefined4 local_1ec;
  undefined1 local_1e8;
  double local_1c8;
  undefined4 uStack_1c0;
  undefined1 uStack_1bc;
  undefined2 uStack_1bb;
  undefined1 uStack_1b9;
  FPredictProjectilePathResult local_1b8;
  
  bVar5 = FWeakObjectPtr::IsValid(&(this->OwnerActor).WeakPtr);
  dVar10 = __real_3ff0000000000000;
  local_258._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  local_258._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_258._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  if (bVar5) {
    uVar17 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
    uVar18 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
    uVar1 = (param_2->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
    local_218 = (void *)0x0;
    local_210 = 0;
    local_208 = (void *)0x0;
    local_200 = 0;
    local_1f4 = 0;
    local_21c = 1;
    local_1f0 = 0;
    dVar15 = (double)uVar18 * (double)uVar18 + (double)uVar17 * (double)uVar17 +
             (double)uVar1 * (double)uVar1;
    local_1e8 = 0;
    if (dVar15 != __real_3ff0000000000000) {
      if (__real_3e45798ee0000000 <= dVar15) {
        dVar15 = __real_3ff0000000000000 / SQRT(dVar15);
        uVar18 = (double)uVar18 * dVar15;
        uVar1 = (double)uVar1 * dVar15;
        uVar17 = (double)uVar17 * dVar15;
      }
      else {
        local_1c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      }
    }
    local_240 = (double)uVar17 * __real_4072c00000000000;
    local_238 = (double)uVar18 * __real_4072c00000000000;
    local_228 = 1;
    local_230 = (double)uVar1 * __real_4072c00000000000;
    local_224 = 0;
    local_1f8 = 0x41700000;
    local_220 = 0x3f800000;
    local_1ec = 0x40400000;
    local_1b8.PathData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b8.PathData.ArrayNum = 0;
    local_1b8.PathData.ArrayMax = 0;
    local_1b8.LastTraceDestination.Location.field0_0x0._s_0.X = 0.0;
    local_1b8.LastTraceDestination.Location.field0_0x0._s_0.Y = 0.0;
    local_1b8.LastTraceDestination.Location.field0_0x0._s_0.Z = 0.0;
    local_1b8.LastTraceDestination.Velocity.field0_0x0._s_0.X = 0.0;
    local_1b8.LastTraceDestination.Velocity.field0_0x0._s_0.Y = 0.0;
    local_1b8.LastTraceDestination.Velocity.field0_0x0._s_0.Z = 0.0;
    local_1b8.LastTraceDestination.Time = 0.0;
    local_1b8.HitResult.PhysMaterial.WeakPtr.ObjectIndex = 0;
    local_1b8.HitResult.PhysMaterial.WeakPtr.ObjectSerialNumber = 0;
    local_1b8.HitResult.Component.WeakPtr.ObjectIndex = 0;
    local_1b8.HitResult.Component.WeakPtr.ObjectSerialNumber = 0;
    local_1b8.HitResult.PhysicsObjectOwner.WeakPtr.ObjectIndex = 0;
    local_1b8.HitResult.PhysicsObjectOwner.WeakPtr.ObjectSerialNumber = 0;
    local_1b8.HitResult.BoneName.ComparisonIndex.Value = 0;
    local_1b8.HitResult.BoneName.Number = 0;
    local_1b8.HitResult.MyBoneName.ComparisonIndex.Value = 0;
    local_1b8.HitResult.MyBoneName.Number = 0;
    memset(&local_1b8.HitResult,0,0x100);
    uStack_1bb = 0;
    local_1b8.HitResult.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
    local_1b8.HitResult.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
    local_1b8.HitResult.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
    local_1b8.HitResult.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber =
         0;
    uStack_1b9 = 0;
    local_1c8 = 0.0;
    uStack_1c0 = 0xffffffff;
    uStack_1bc = 0;
    local_1b8.HitResult.HitObjectHandle.InstanceIndex = -1;
    local_1b8.HitResult.HitObjectHandle.ResolutionStatus = Invalid;
    local_1b8.HitResult.HitObjectHandle._29_3_ = 0;
    local_1b8.HitResult.Time = 1.0;
    local_1b8.HitResult.MyItem = -1;
    local_1b8.HitResult.HitObjectHandle.ManagerInterface.InterfaceInstance =
         (IActorInstanceManagerInterface *)0x0;
    this_00 = (AActor *)FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
    pUVar6 = AActor::GetWorld(this_00);
    bVar5 = UGameplayStatics::PredictProjectilePath
                      ((UObject *)pUVar6,(FPredictProjectilePathParams *)&local_258._s_0,&local_1b8)
    ;
    fVar3 = __real_42300000;
    dVar2 = __real_404ca5dc1a63c1f8;
    dVar15 = __real_bff0000000000000;
    if (bVar5) {
      iVar4 = local_1b8.PathData.ArrayNum;
      uVar8 = (ulonglong)local_1b8.PathData.ArrayNum;
      pFVar9 = local_1b8.PathData.AllocatorInstance.Data + uVar8 * 0x38;
      FVar7.Data = local_1b8.PathData.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar8 != iVar4) {
          `TCheckedPointerIterator<FPredictProjectilePathPointData,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
          uVar8 = local_1b8.PathData._8_8_ & 0xffffffff;
        }
        if (FVar7.Data == pFVar9) {
          dVar10 = (param_2->field0_0x0)._s_0.X;
          dVar15 = (param_2->field0_0x0)._s_0.Y;
          uVar1 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 0x10);
          uVar13 = (undefined4)uVar1;
          uVar14 = (undefined4)((ulonglong)uVar1 >> 0x20);
          goto LAB_14bc4b6fd;
        }
        dVar16 = *(double *)(FVar7.Data + 0x10);
        auVar11._0_8_ = dVar16 * dVar16;
        auVar11._8_8_ = 0;
        auVar12._8_8_ = 0;
        auVar12._0_8_ =
             *(double *)(FVar7.Data + 8) * *(double *)(FVar7.Data + 8) +
             *(double *)FVar7.Data * *(double *)FVar7.Data + auVar11._0_8_;
        auVar12 = sqrtpd(auVar11,auVar12);
        dVar16 = dVar16 / auVar12._0_8_;
        _X = dVar15;
        if ((dVar15 <= dVar16) && (_X = dVar16, dVar10 <= dVar16)) {
          _X = dVar10;
        }
        dVar16 = acos(_X);
        if (fVar3 < (float)(dVar16 * dVar2)) break;
        FVar7.Data = FVar7.Data + 0x38;
      }
      dVar10 = *(double *)FVar7.Data;
      dVar15 = *(double *)(FVar7.Data + 8);
      uVar13 = SUB84(*(double *)(FVar7.Data + 0x10),0);
      uVar14 = (undefined4)((ulonglong)*(double *)(FVar7.Data + 0x10) >> 0x20);
LAB_14bc4b6fd:
      (__return_storage_ptr__->field0_0x0)._s_0.X = dVar10;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar15;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)CONCAT44(uVar14,uVar13);
      if (local_1b8.PathData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.PathData.AllocatorInstance.Data);
      }
      if (local_208 != (void *)0x0) {
        FMemory::Free(local_208);
      }
      if (local_218 != (void *)0x0) {
        FMemory::Free(local_218);
      }
    }
    else {
      dVar15 = (param_1->field0_0x0)._s_0.Y;
      dVar10 = (param_1->field0_0x0)._s_0.Z;
      (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar15;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar10;
      if (local_1b8.PathData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.PathData.AllocatorInstance.Data);
      }
      if (local_208 != (void *)0x0) {
        FMemory::Free(local_208);
      }
      if (local_218 != (void *)0x0) {
        FMemory::Free(local_218);
      }
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0)._s_0.X = local_258._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = local_258._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = local_258._s_0.Z;
  }
  return __return_storage_ptr__;
}

// IsWalkable @ 14bc4bf00

bool __thiscall
UDS_MovementCore::IsWalkable(UDS_MovementCore *this,float param_1,TVector<double> *param_2)

{
  return true;
}

// MoveSmooth @ 14bc4c200

void __thiscall
UDS_MovementCore::MoveSmooth
          (UDS_MovementCore *this,TVector<double> *param_1,float param_2,bool param_3)

{
  return;
}

// ServerMoveSmooth @ 14bc5be70

void __thiscall
UDS_MovementCore::ServerMoveSmooth(UDS_MovementCore *this,TVector<double> *param_1,float param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar5 = (double)param_2;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  dVar2 = (param_1->field0_0x0)._s_0.X;
  dVar3 = (this->ServerActorLocation).field0_0x0._s_0.Z;
  dVar4 = (this->ServerActorLocation).field0_0x0._s_0.X;
  (this->ServerActorLocation).field0_0x0._s_0.Y =
       dVar5 * (param_1->field0_0x0)._s_0.Y + (this->ServerActorLocation).field0_0x0._s_0.Y;
  (this->ServerActorLocation).field0_0x0._s_0.Z = dVar5 * dVar1 + dVar3;
  (this->ServerActorLocation).field0_0x0._s_0.X = dVar5 * dVar2 + dVar4;
  return;
}

// SetActorLocation @ 14bc5c0b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDS_MovementCore::SetActorLocation(UDS_MovementCore *this,TVector<double> *param_1)

{
  bool bVar1;
  AActor *this_00;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->OwnerActor).WeakPtr);
  if (bVar1) {
    this_00 = (AActor *)FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
    AActor::SetActorLocation(this_00,param_1,false,(FHitResult *)0x0,None);
  }
  return;
}

// SetActorLocationZ @ 14bc5c100

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDS_MovementCore::SetActorLocationZ(UDS_MovementCore *this,float param_1)

{
  TWeakObjectPtr<AActor,FWeakObjectPtr> *this_00;
  longlong lVar1;
  bool bVar2;
  UObject *pUVar3;
  AActor *this_01;
  TVector<double>_u_0 local_38 [2];
  
  this_00 = &this->OwnerActor;
  bVar2 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    lVar1 = *(longlong *)(pUVar3 + 0xb);
    local_38[0]._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    local_38[0]._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    local_38[0]._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    local_38[0]._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    if (lVar1 != 0) {
      local_38[0]._0_4_ = *(undefined4 *)(lVar1 + 0x210);
      local_38[0]._4_4_ = *(undefined4 *)(lVar1 + 0x214);
      local_38[0]._8_4_ = *(undefined4 *)(lVar1 + 0x218);
      local_38[0]._12_4_ = *(undefined4 *)(lVar1 + 0x21c);
    }
    local_38[0]._16_8_ = (undefined8)param_1;
    this_01 = (AActor *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    AActor::SetActorLocation
              (this_01,(TVector<double> *)&local_38[0]._s_0,false,(FHitResult *)0x0,None);
  }
  return;
}

// SetActorRelativeLocation @ 14bc5c1b0

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
UDS_MovementCore::SetActorRelativeLocation(UDS_MovementCore *this,TVector<double> *param_1)

{
  double dVar1;
  bool bVar2;
  AActor *this_00;
  TVector<double>_u_0 local_28;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->OwnerActor).WeakPtr);
  if (bVar2) {
    dVar1 = (param_1->field0_0x0)._s_0.Y;
    (this->RelativeLocation).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
    (this->RelativeLocation).field0_0x0._s_0.Y = dVar1;
    (this->RelativeLocation).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
    this_00 = (AActor *)FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
    local_28._s_0.X = (param_1->field0_0x0)._s_0.X;
    local_28._s_0.Y = (param_1->field0_0x0)._s_0.Y;
    local_28._s_0.Z = (param_1->field0_0x0)._s_0.Z;
    AActor::SetActorRelativeLocation
              (this_00,(TVector<double> *)&local_28._s_0,false,(FHitResult *)0x0,None);
  }
  return;
}

// SetActorRelativeRotation @ 14bc5c260

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
UDS_MovementCore::SetActorRelativeRotation(UDS_MovementCore *this,TRotator<double> *param_1)

{
  double dVar1;
  bool bVar2;
  AActor *this_00;
  TRotator<double> local_28;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->OwnerActor).WeakPtr);
  if (bVar2) {
    dVar1 = param_1->Yaw;
    (this->RelativeRotation).Pitch = param_1->Pitch;
    (this->RelativeRotation).Yaw = dVar1;
    (this->RelativeRotation).Roll = param_1->Roll;
    this_00 = (AActor *)FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
    local_28.Pitch = param_1->Pitch;
    local_28.Yaw = param_1->Yaw;
    local_28.Roll = param_1->Roll;
    AActor::SetActorRelativeRotation(this_00,&local_28,false,(FHitResult *)0x0,None);
  }
  return;
}

// SetActorRotation @ 14bc5c380

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDS_MovementCore::SetActorRotation(UDS_MovementCore *this,TRotator<double> *param_1)

{
  bool bVar1;
  AActor *this_00;
  UDS_CharInfoData *this_01;
  TRotator<double> local_28;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->OwnerActor).WeakPtr);
  if (bVar1) {
    this_00 = (AActor *)FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
    local_28.Pitch = param_1->Pitch;
    local_28.Yaw = param_1->Yaw;
    local_28.Roll = param_1->Roll;
    AActor::SetActorRotation(this_00,&local_28,None);
    bVar1 = FWeakObjectPtr::IsValid(&(this->CharInfoData).WeakPtr);
    if (bVar1) {
      this_01 = (UDS_CharInfoData *)FWeakObjectPtr::Get(&(this->CharInfoData).WeakPtr);
      UDS_CharInfoData::SetDirection(this_01,(float)param_1->Yaw);
    }
  }
  return;
}

// SetAirWalkVelocity @ 14bc5c540

void __thiscall
UDS_MovementCore::SetAirWalkVelocity(UDS_MovementCore *this,TVector<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->AirWalkVelocity).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->AirWalkVelocity).field0_0x0._s_0.Y = dVar1;
  (this->AirWalkVelocity).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  return;
}

// SetLastSavedInputVector @ 14bc60150

void __thiscall
UDS_MovementCore::SetLastSavedInputVector(UDS_MovementCore *this,TVector<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->LastSaveInputVector).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->LastSaveInputVector).field0_0x0._s_0.Y = dVar1;
  (this->LastSaveInputVector).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  return;
}

// SetMoveToFloor @ 14bc61390

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_MovementCore::SetMoveToFloor(UDS_MovementCore *this,bool param_1,float param_2)

{
  float fVar1;
  undefined8 uVar2;
  double dVar3;
  ForAnyElementType _Src;
  bool bVar4;
  int iVar5;
  FDS_EntityBase *pFVar6;
  FDS_EntityBase *pFVar7;
  TVector<double> *pTVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  FWeakObjectPtr local_res8;
  TVector<double>_u_0 local_e8;
  ForAnyElementType local_d0;
  undefined8 local_c8;
  TVector<double>_u_0 local_c0;
  TVector<double>_u_0 local_a8;
  TVector<double> local_88 [4];
  
  pFVar6 = FDS_EntityBase::GetEntityBaseFromActor
                     ((TWeakObjectPtr<AActor,FWeakObjectPtr>)(this->OwnerActor).WeakPtr);
  if (pFVar6 != (FDS_EntityBase *)0x0) {
    fVar1 = pFVar6->ScaledCapsuleHalfHeight;
    if (param_1) {
      pFVar7 = FDS_EntityBase::GetEntityBaseFromActor
                         ((TWeakObjectPtr<AActor,FWeakObjectPtr>)(this->OwnerActor).WeakPtr);
      dVar3 = __real_3f1a36e2e0000000;
      uVar14 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar11 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      if (pFVar7 != (FDS_EntityBase *)0x0) {
        GetActorLocation(this,(TVector<double> *)&local_e8._s_0);
        uVar13 = (uint)((ulonglong)local_e8._0_8_ >> 0x20);
        uVar10 = SUB84(local_e8._s_0.X,0) & uVar11;
        uVar12 = uVar13 & uVar14;
        if (((dVar3 <= (double)CONCAT44(uVar12,uVar10) && (double)CONCAT44(uVar12,uVar10) != dVar3)
            || (dVar3 <= (double)CONCAT44(local_e8._12_4_ & uVar14,local_e8._8_4_ & uVar11) &&
                (double)CONCAT44(local_e8._12_4_ & uVar14,local_e8._8_4_ & uVar11) != dVar3)) ||
           (uVar10 = SUB84(local_e8._s_0.Z,0) & uVar11,
           uVar12 = (uint)((ulonglong)local_e8._16_8_ >> 0x20) & uVar14,
           uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_,
           uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
           uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_,
           uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
           uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
           dVar3 <= (double)CONCAT44(uVar12,uVar10) && (double)CONCAT44(uVar12,uVar10) != dVar3)) {
          local_e8._s_0.Z = local_e8._s_0.Z + (double)pFVar7->ScaledCapsuleHalfHeight;
          uVar15 = SUB84(local_e8._s_0.X,0);
          uVar16 = uVar13;
          uVar17 = local_e8._8_4_;
          uVar18 = local_e8._12_4_;
          uVar2 = local_e8._s_0.Z;
        }
      }
      local_c0._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      local_c0._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      local_c0._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      local_c0._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      local_c0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      (**(code **)(pFVar6->_padding_ + 0x1d0))(pFVar6,&local_res8);
      bVar4 = FWeakObjectPtr::IsValid(&local_res8);
      local_a8._0_4_ = uVar15;
      local_a8._4_4_ = uVar16;
      local_a8._8_4_ = uVar17;
      local_a8._12_4_ = uVar18;
      local_a8._s_0.Z = (double)uVar2;
      if (bVar4) {
        local_d0.Data = (FScriptContainerElement *)0x0;
        local_c8 = 0;
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&local_d0,(int *)((longlong)&local_c8 + 4));
        _Src.Data = local_d0.Data;
        local_e8._s_0.X = 0.0;
        local_e8._8_4_ = iVar5 + 1;
        local_c8 = CONCAT44(local_c8._4_4_,local_e8._8_4_);
        *(undefined4 *)(local_d0.Data + (longlong)iVar5 * 4) = 0x13;
        lVar9 = (longlong)(int)local_e8._8_4_;
        if (local_e8._8_4_ == 0) {
          local_e8._12_4_ = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_e8._8_4_,0,(ForAnyElementType *)&local_e8._s_0,local_e8._8_4_,
                     (int *)((longlong)&local_e8._s_0.Y + 4));
          memcpy((void *)local_e8._s_0.X,_Src.Data,lVar9 << 2);
        }
        pTVar8 = DS_Util::GetFloorLocationByLocation
                           (local_88,(TVector<double> *)&local_a8._s_0,
                            (TArray<ECollisionChannel,TSizedDefaultAllocator<32>_> *)&local_e8._s_0,
                            __real_43160000,false);
        local_c0._s_0.X = (double)*(undefined8 *)&pTVar8->field0_0x0;
        local_c0._s_0.Y = *(double *)((longlong)&pTVar8->field0_0x0 + 8);
        local_c0._s_0.Z = *(double *)((longlong)&pTVar8->field0_0x0 + 0x10);
        if (local_d0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d0.Data);
        }
      }
      else {
        pTVar8 = DS_Util::GetNPCFloorLocationByLocation
                           (local_88,(TVector<double> *)&local_a8._s_0,__real_43160000,false);
        local_c0._s_0.X = (double)*(undefined8 *)&pTVar8->field0_0x0;
        local_c0._s_0.Y = *(double *)((longlong)&pTVar8->field0_0x0 + 8);
        local_c0._s_0.Z = *(double *)((longlong)&pTVar8->field0_0x0 + 0x10);
      }
      uVar10 = SUB84(local_c0._s_0.X,0) & uVar11;
      uVar13 = (uint)((ulonglong)local_c0._0_8_ >> 0x20) & uVar14;
      if (((dVar3 <= (double)CONCAT44(uVar13,uVar10) && (double)CONCAT44(uVar13,uVar10) != dVar3) ||
          (uVar10 = SUB84(local_c0._s_0.Y,0) & uVar11,
          uVar13 = (uint)((ulonglong)local_c0._8_8_ >> 0x20) & uVar14,
          dVar3 <= (double)CONCAT44(uVar13,uVar10) && (double)CONCAT44(uVar13,uVar10) != dVar3)) ||
         (uVar11 = SUB84(local_c0._s_0.Z,0) & uVar11,
         uVar14 = (uint)((ulonglong)local_c0._16_8_ >> 0x20) & uVar14,
         dVar3 <= (double)CONCAT44(uVar14,uVar11) && (double)CONCAT44(uVar14,uVar11) != dVar3)) {
        local_c0._s_0.Z = local_c0._s_0.Z + (double)fVar1;
        (**(code **)(this->_padding_ + 0x358))(this,&local_c0);
      }
    }
    else {
      GetActorLocation(this,(TVector<double> *)&local_e8._s_0);
      local_e8._s_0.Z = (double)(fVar1 + param_2);
      (**(code **)(this->_padding_ + 0x358))(this,&local_e8);
    }
  }
  return;
}

// SetOriginSkillForwardRotation @ 14bc61980

void __thiscall
UDS_MovementCore::SetOriginSkillForwardRotation(UDS_MovementCore *this,TRotator<double> *param_1)

{
  double dVar1;
  
  dVar1 = param_1->Yaw;
  (this->OriginSkillForwardRotation).Pitch = param_1->Pitch;
  (this->OriginSkillForwardRotation).Yaw = dVar1;
  (this->OriginSkillForwardRotation).Roll = param_1->Roll;
  return;
}

// SetServerLocation @ 14bc647d0

void __thiscall UDS_MovementCore::SetServerLocation(UDS_MovementCore *this,TVector<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->ServerActorLocation).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->ServerActorLocation).field0_0x0._s_0.Y = dVar1;
  (this->ServerActorLocation).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  return;
}

// SetSkillForwardRotation @ 14bc64980

void __thiscall
UDS_MovementCore::SetSkillForwardRotation(UDS_MovementCore *this,TRotator<double> *param_1)

{
  double dVar1;
  
  dVar1 = param_1->Yaw;
  (this->SkillForwardRotation).Pitch = param_1->Pitch;
  (this->SkillForwardRotation).Yaw = dVar1;
  (this->SkillForwardRotation).Roll = param_1->Roll;
  return;
}

// SetSkillVelocity @ 14bc649a0

void __thiscall UDS_MovementCore::SetSkillVelocity(UDS_MovementCore *this,TVector<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->SkillVelocity).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->SkillVelocity).field0_0x0._s_0.Y = dVar1;
  (this->SkillVelocity).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  return;
}

// Tick @ 14bc67510

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_MovementCore::Tick(UDS_MovementCore *this,float *param_1)

{
  undefined1 *puVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  bool bVar13;
  char cVar14;
  uint uVar15;
  FDS_EntityBase *pFVar16;
  UObject *pUVar17;
  longlong lVar18;
  TVector<double>_u_0 *pTVar19;
  uint uVar20;
  FDestructionSentinel local_e8;
  TVector<double>_u_0 local_d0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double local_98;
  double dStack_90;
  double local_88;
  TVector<double> local_78 [4];
  
  bVar12 = FWeakObjectPtr::IsValid(&(this->OwnerActor).WeakPtr);
  if (((bVar12) &&
      (pFVar16 = FDS_EntityBase::GetEntityBaseFromActor
                           ((TWeakObjectPtr<AActor,FWeakObjectPtr>)(this->OwnerActor).WeakPtr),
      pFVar16 != (FDS_EntityBase *)0x0)) &&
     (pUVar17 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr), (pUVar17[2].field_0x8 & 0x80) == 0
     )) {
    lVar18 = (**(code **)(pFVar16->_padding_ + 0x1d8))(pFVar16);
    if (lVar18 == 0) {
      pTVar19 = &GetActorLocation(this,local_78)->field0_0x0;
    }
    else {
      pTVar19 = &local_d0;
      local_d0._s_0.X = (this->RelativeLocation).field0_0x0._s_0.X;
      local_d0._s_0.Y = (this->RelativeLocation).field0_0x0._s_0.Y;
      local_d0._s_0.Z = (this->RelativeLocation).field0_0x0._s_0.Z;
    }
    fVar2 = *param_1;
    dVar8 = (this->Velocity).field0_0x0._s_0.X;
    dVar9 = (this->Velocity).field0_0x0._s_0.Y;
    dVar3 = (this->Velocity).field0_0x0._s_0.Z;
    dVar10 = (((TVector<double>_u_0 *)&(pTVar19->_s_0).X)->_s_0).X;
    dVar11 = (pTVar19->_s_0).Y;
    dVar4 = (pTVar19->_s_0).Z;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnCharacterMovementUpdated,(FWriteAccessScope *)&local_e8);
    puVar1 = &(this->OnCharacterMovementUpdated).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar12 = false;
    uVar20 = *(int *)&(this->OnCharacterMovementUpdated).field_0x10 - 1;
    if (-1 < (int)uVar20) {
      lVar18 = (longlong)(int)uVar20 << 4;
      bVar12 = false;
      do {
        uVar15 = 0;
        if ((int)uVar20 < *(int *)&(this->OnCharacterMovementUpdated).field_0x10) {
          uVar15 = ~uVar20 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar5 = *(longlong *)&(this->OnCharacterMovementUpdated).field_0x8;
        if (((*(int *)(lVar18 + 8 + lVar5) == 0) ||
            (plVar6 = *(longlong **)(lVar18 + lVar5), plVar6 == (longlong *)0x0)) ||
           (local_b8 = dVar8, dStack_b0 = dVar9, local_a8 = dVar3, local_98 = dVar10,
           dStack_90 = dVar11, local_88 = dVar4,
           cVar14 = (**(code **)(*plVar6 + 0x68))(plVar6,fVar2,&local_98,&local_b8), cVar14 == '\0')
           ) {
          bVar12 = true;
        }
        lVar18 = lVar18 + -0x10;
        uVar20 = uVar20 - 1;
      } while (-1 < (int)uVar20);
    }
    puVar1 = &(this->OnCharacterMovementUpdated).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar12) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &this->OnCharacterMovementUpdated,false);
    }
    if (local_e8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
    }
  }
  return;
}

// UseSkillVelocity @ 14bc6f1a0

TVector<double> * __thiscall
UDS_MovementCore::UseSkillVelocity(UDS_MovementCore *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar3 = *(undefined4 *)&(this->SkillVelocity).field0_0x0;
  uVar4 = *(undefined4 *)((longlong)&(this->SkillVelocity).field0_0x0 + 4);
  uVar5 = *(undefined4 *)((longlong)&(this->SkillVelocity).field0_0x0 + 8);
  uVar6 = *(undefined4 *)((longlong)&(this->SkillVelocity).field0_0x0 + 0xc);
  lVar2 = this->_padding_;
  dVar1 = (this->SkillVelocity).field0_0x0._s_0.Z;
  *(undefined4 *)&__return_storage_ptr__->field0_0x0 = uVar3;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = uVar4;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar5;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = uVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  (**(code **)(lVar2 + 0x3a8))(uVar3,&UE::Math::TVector<double>::ZeroVector);
  return __return_storage_ptr__;
}

