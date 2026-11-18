// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 73

// ShouldUseLookAt @ 14b425420

bool __thiscall UDS_CharacterAnimBase::ShouldUseLookAt(UDS_CharacterAnimBase *this)

{
  return false;
}

// StaticClass @ 14b425430

UClass * __cdecl UDS_CharacterAnimBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CharacterAnimBase.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CharacterAnimBase",
               &Z_Registration_Info_UClass_UDS_CharacterAnimBase.InnerSingleton,
               StaticRegisterNativesUDS_CharacterAnimBase,0x6e0,0x10,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<UDS_CharacterAnimBase>,
               InternalVTableHelperCtorCaller<UDS_CharacterAnimBase>,aFStackX_8,
               UDS_AnimInstanceBase::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CharacterAnimBase.InnerSingleton;
}

// UDS_CharacterAnimBase @ 14b43c450

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

UDS_CharacterAnimBase * __thiscall
UDS_CharacterAnimBase::UDS_CharacterAnimBase(UDS_CharacterAnimBase *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  UDS_AnimInstanceBase::UDS_AnimInstanceBase((UDS_AnimInstanceBase *)this,param_1);
  this->LocomotionState = Default;
  this->DeadState = None;
  this->MoveMode = Idle;
  this->bLockFootIKPosition = false;
  *(undefined ***)this = &___7UDS_CharacterAnimBase__6B_;
  this->bIsLookAt = false;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->LookAtType = None;
  (this->LookAtLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
  ;
  (this->LookAtLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->LookAtLocation).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
  ;
  this->LookAtAlpha = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->HeadOffset).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->HeadOffset).field0_0x0._s_0.Y = (double)uVar1;
  (this->HeadOffset).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->bEnableFootControlRig = true;
  this->FootControlRigAlpha = 0.0;
  this->FinalBlowElementType = Max;
  this->FinalBlowHitAttackType = None;
  this->FinalBlowDeadAnimationType = None;
  (this->AnimSharedData).DeadAnimState = None;
  (this->AnimSharedData).LocomotionState = Default;
  (this->AnimSharedData).bIsActiveInput = false;
  (this->AnimSharedData).bIsInputLock = false;
  (this->AnimSharedData).bIsAutoMove = false;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->AnimSharedData).ActorLocation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->AnimSharedData).ActorLocation.field0_0x0._s_0.Y = (double)uVar1;
  (this->AnimSharedData).ActorLocation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->AnimSharedData).ActorRotation.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->AnimSharedData).ActorRotation.Yaw = dVar2;
  (this->AnimSharedData).ActorRotation.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  (this->AnimSharedData).RotationVelocity = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->AnimSharedData).Velocity.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->AnimSharedData).Velocity.field0_0x0._s_0.Y = (double)uVar1;
  (this->AnimSharedData).Velocity.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->AnimSharedData).VelocityLastFrame.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->AnimSharedData).VelocityLastFrame.field0_0x0._s_0.Y = (double)uVar1;
  (this->AnimSharedData).VelocityLastFrame.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->AnimSharedData).LastNonZeroVelocity.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->AnimSharedData).LastNonZeroVelocity.field0_0x0._s_0.Y = (double)uVar1;
  (this->AnimSharedData).LastNonZeroVelocity.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->AnimSharedData).VelocityAcceleration.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->AnimSharedData).VelocityAcceleration.field0_0x0._s_0.Y = (double)uVar1;
  (this->AnimSharedData).VelocityAcceleration.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->AnimSharedData).LocalVelocity2D.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->AnimSharedData).LocalVelocity2D.field0_0x0._s_0.Y = (double)uVar1;
  (this->AnimSharedData).LocalVelocity2D.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->AnimSharedData).LocalVelocity2D_Size = 0.0;
  (this->AnimSharedData).DirectionAngleFromVelocity = 0.0;
  (this->AnimSharedData).CardinalDirectionFromVelocity = Forward;
  (this->AnimSharedData).DisplacementSinceLastUpdate = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->AnimSharedData).Acceleration.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->AnimSharedData).Acceleration.field0_0x0._s_0.Y = (double)uVar1;
  (this->AnimSharedData).Acceleration.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->AnimSharedData).LocalAcceleration2D.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->AnimSharedData).LocalAcceleration2D.field0_0x0._s_0.Y = (double)uVar1;
  (this->AnimSharedData).LocalAcceleration2D.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->AnimSharedData).bHasAcceleration = false;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->AnimSharedData).PivotDirection2D.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->AnimSharedData).PivotDirection2D.field0_0x0._s_0.Y = (double)uVar1;
  (this->AnimSharedData).PivotDirection2D.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->AnimSharedData).CardinalDirectionFromAcceleration = Forward;
  (this->AnimSharedData).MoveSpeed = 0.0;
  (this->AnimSharedData).MaxMoveSpeed = 0.0;
  (this->AnimSharedData).MoveSpeedRatio = 0.0;
  (this->AnimSharedData).bIsTrace = false;
  (this->AnimSharedData).bIsResurrect = false;
  (this->AnimSharedData).bIsFalling = false;
  (this->AnimSharedData).bIsFlying = false;
  *(undefined8 *)&this->AnimLayerDescriptorMap = 0;
  *(undefined8 *)&(this->AnimLayerDescriptorMap).field_0x8 = 0;
  *(undefined8 *)&(this->AnimLayerDescriptorMap).field_0x20 = 0;
  *(undefined4 *)&(this->AnimLayerDescriptorMap).field_0x28 = 0;
  *(undefined4 *)&(this->AnimLayerDescriptorMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->AnimLayerDescriptorMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AnimLayerDescriptorMap).field_0x34 = 0;
  *(undefined8 *)&(this->AnimLayerDescriptorMap).field_0x40 = 0;
  *(undefined4 *)&(this->AnimLayerDescriptorMap).field_0x48 = 0;
  *(undefined8 *)&this->AnimLayerInstanceMap = 0;
  *(undefined8 *)&(this->AnimLayerInstanceMap).field_0x8 = 0;
  *(undefined8 *)&(this->AnimLayerInstanceMap).field_0x20 = 0;
  *(undefined4 *)&(this->AnimLayerInstanceMap).field_0x28 = 0;
  *(undefined4 *)&(this->AnimLayerInstanceMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->AnimLayerInstanceMap).field_0x34 = 0;
  *(undefined4 *)&(this->AnimLayerInstanceMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AnimLayerInstanceMap).field_0x40 = 0;
  *(undefined4 *)&(this->AnimLayerInstanceMap).field_0x48 = 0;
  *(undefined8 *)&this->UnlinkAnimLayerTimerMap = 0;
  *(undefined8 *)&(this->UnlinkAnimLayerTimerMap).field_0x8 = 0;
  *(undefined8 *)&(this->UnlinkAnimLayerTimerMap).field_0x20 = 0;
  *(undefined4 *)&(this->UnlinkAnimLayerTimerMap).field_0x28 = 0;
  *(undefined4 *)&(this->UnlinkAnimLayerTimerMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->UnlinkAnimLayerTimerMap).field_0x34 = 0;
  *(undefined4 *)&(this->UnlinkAnimLayerTimerMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->UnlinkAnimLayerTimerMap).field_0x40 = 0;
  *(undefined4 *)&(this->UnlinkAnimLayerTimerMap).field_0x48 = 0;
  (this->OwnerEntityMovementCore).WeakPtr = (FWeakObjectPtr)0x0;
  (this->EntityData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CommonSetting).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UDS_CharacterAnimBase @ 14b43cfe0

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

void __thiscall UDS_CharacterAnimBase::~UDS_CharacterAnimBase(UDS_CharacterAnimBase *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &___7UDS_CharacterAnimBase__6B_;
  *(undefined4 *)&(this->UnlinkAnimLayerTimerMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->UnlinkAnimLayerTimerMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_CharState,FTimerHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_CharState,FTimerHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->UnlinkAnimLayerTimerMap);
  *(undefined4 *)&(this->AnimLayerInstanceMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AnimLayerInstanceMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_CharState,UAnimInstance_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_CharState,UAnimInstance_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->AnimLayerInstanceMap);
  *(undefined4 *)&(this->AnimLayerDescriptorMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AnimLayerDescriptorMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_CharState,FDS_AnimLayerDescriptor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_CharState,FDS_AnimLayerDescriptor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->AnimLayerDescriptorMap);
  UDS_AnimInstanceBase::~UDS_AnimInstanceBase((UDS_AnimInstanceBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b43e680

UClass * __cdecl UDS_CharacterAnimBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CharacterAnimBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CharacterAnimBase",
               &Z_Registration_Info_UClass_UDS_CharacterAnimBase.InnerSingleton,
               StaticRegisterNativesUDS_CharacterAnimBase,0x6e0,0x10,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<UDS_CharacterAnimBase>,
               InternalVTableHelperCtorCaller<UDS_CharacterAnimBase>,local_res8,
               UDS_AnimInstanceBase::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CharacterAnimBase.InnerSingleton;
}

// InitAnimLength @ 14b43e740

void __thiscall UDS_CharacterAnimBase::InitAnimLength(UDS_CharacterAnimBase *this)

{
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UDS_CharacterAnimBase_InitAnimLength);
                    /* WARNING: Could not recover jumptable at 0x00014b43e76d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,0,*(code **)(*(longlong *)this + 0x260));
  return;
}

// ShouldChangeCharStateEvent @ 14b43e780

bool __thiscall UDS_CharacterAnimBase::ShouldChangeCharStateEvent(UDS_CharacterAnimBase *this)

{
  return true;
}

// StaticRegisterNativesUDS_CharacterAnimBase @ 14b43e930

void __cdecl UDS_CharacterAnimBase::StaticRegisterNativesUDS_CharacterAnimBase(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x15;
  local_18.DataPtr = Z_Construct_UClass_UDS_CharacterAnimBase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// __VTableCtorCaller @ 14b43f6c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
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

UObject * __cdecl UDS_CharacterAnimBase::__VTableCtorCaller(FVTableHelper *param_1)

{
  undefined8 uVar1;
  double dVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  UDS_AnimInstanceBase *this;
  
  pUVar3 = GetTransientPackageAsObject();
  pUVar4 = GetPrivateStaticClass();
  this = (UDS_AnimInstanceBase *)
         StaticAllocateObject
                   (pUVar4,pUVar3,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDS_AnimInstanceBase *)0x0) {
    UDS_AnimInstanceBase::UDS_AnimInstanceBase(this,param_1);
    *(undefined4 *)&this->field_0x448 = 0;
    *(undefined ***)this = &___7UDS_CharacterAnimBase__6B_;
    *(undefined2 *)&this->field_0x44c = 0;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)(this + 1) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&this[1].field_0x8 = uVar1;
    *(double *)&this[1].field_0x10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined4 *)&this[1].field_0x18 = 0;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)&this[1].field_0x20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&this[1].field_0x28 = uVar1;
    *(double *)&this[1].field_0x30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    this[1].field_0x38 = 1;
    *(undefined4 *)&this[1].field_0x3c = 0;
    *(undefined2 *)&this[1].field_0x40 = 8;
    this[1].field_0x42 = 0;
    *(undefined4 *)&this[1].field_0x48 = 0;
    this[1].field_0x4c = 0;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)&this[1].field_0x50 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&this[1].field_0x58 = uVar1;
    *(double *)&this[1].field_0x60 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    *(double *)&this[1].field_0x68 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    *(double *)&this[1].field_0x70 = dVar2;
    *(double *)&this[1].field_0x78 = UE::Math::TRotator<double>::ZeroRotator.Roll;
    *(undefined4 *)&this[1].field_0x80 = 0;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)&this[1].field_0x88 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&this[1].field_0x90 = uVar1;
    *(double *)&this[1].field_0x98 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)&this[1].field_0xa0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&this[1].field_0xa8 = uVar1;
    *(double *)&this[1].field_0xb0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)&this[1].field_0xb8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&this[1].field_0xc0 = uVar1;
    *(double *)&this[1].field_0xc8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)&this[1].field_0xd0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&this[1].field_0xd8 = uVar1;
    *(double *)&this[1].field_0xe0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)&this[1].field_0xe8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&this[1].field_0xf0 = uVar1;
    *(double *)&this[1].field_0xf8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined8 *)&this[1].field_0x100 = 0;
    this[1].field_0x108 = 0;
    *(undefined4 *)&this[1].field_0x10c = 0;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)&this[1].field_0x118 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&this[1].field_0x120 = uVar1;
    *(double *)&this[1].field_0x128 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)&this[1].field_0x130 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&this[1].field_0x138 = uVar1;
    *(double *)&this[1].field_0x140 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    this[1].field_0x148 = 0;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)&this[1].field_0x150 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&this[1].field_0x158 = uVar1;
    *(double *)&this[1].field_0x160 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    this[1].field_0x168 = 0;
    *(undefined8 *)&this[1].field_0x16c = 0;
    *(undefined8 *)&this[1].field_0x174 = 0;
    *(undefined8 *)&this[1].field_0x180 = 0;
    *(undefined8 *)&this[1].field_0x188 = 0;
    *(undefined8 *)&this[1].field_0x1a0 = 0;
    *(undefined4 *)&this[1].field_0x1a8 = 0;
    *(undefined4 *)&this[1].field_0x1ac = 0x80;
    *(undefined4 *)&this[1].field_0x1b0 = 0xffffffff;
    *(undefined4 *)&this[1].field_0x1b4 = 0;
    *(undefined8 *)&this[1].field_0x1c0 = 0;
    *(undefined4 *)&this[1].field_0x1c8 = 0;
    *(undefined8 *)&this[1].field_0x1d0 = 0;
    *(undefined8 *)&this[1].field_0x1d8 = 0;
    *(undefined8 *)&this[1].field_0x1f0 = 0;
    *(undefined4 *)&this[1].field_0x1f8 = 0;
    *(undefined4 *)&this[1].field_0x1fc = 0x80;
    *(undefined4 *)&this[1].field_0x200 = 0xffffffff;
    *(undefined4 *)&this[1].field_0x204 = 0;
    *(undefined8 *)&this[1].field_0x210 = 0;
    *(undefined4 *)&this[1].field_0x218 = 0;
    *(undefined8 *)&this[1].field_0x220 = 0;
    *(undefined8 *)&this[1].field_0x228 = 0;
    *(undefined8 *)&this[1].field_0x240 = 0;
    *(undefined4 *)&this[1].field_0x248 = 0;
    *(undefined4 *)&this[1].field_0x24c = 0x80;
    *(undefined4 *)&this[1].field_0x250 = 0xffffffff;
    *(undefined4 *)&this[1].field_0x254 = 0;
    *(undefined8 *)&this[1].field_0x260 = 0;
    *(undefined4 *)&this[1].field_0x268 = 0;
    *(undefined8 *)&this[1].field_0x270 = 0;
    *(undefined8 *)&this[1].field_0x278 = 0;
    *(undefined8 *)&this[1].field_0x280 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// execGetCardinalDirectionFromAngle @ 14b43fd30

void __cdecl
UDS_CharacterAnimBase::execGetCardinalDirectionFromAngle
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EDS_CardinalDirection EVar2;
  float local_res10 [2];
  float local_res18 [2];
  
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar2 = GetCardinalDirectionFromAngle
                    ((UDS_CharacterAnimBase *)param_1,local_res18[0],local_res10[0]);
  *(EDS_CardinalDirection *)param_3 = EVar2;
  return;
}

// execGetDeadAnimState @ 14b43fe10

void __cdecl
UDS_CharacterAnimBase::execGetDeadAnimState(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x1b].field_0x11;
  return;
}

// execGetDirectionAngleFromVelocity @ 14b43fe40

void __cdecl
UDS_CharacterAnimBase::execGetDirectionAngleFromVelocity
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = GetDirectionAngleFromVelocity((UDS_CharacterAnimBase *)param_1);
  *(float *)param_3 = fVar1;
  return;
}

// execGetFinalBlowDeadAnimationType @ 14b43fe80

void __cdecl
UDS_CharacterAnimBase::execGetFinalBlowDeadAnimationType
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x1d].field_0xa;
  return;
}

// execGetFinalBlowElementType @ 14b43feb0

void __cdecl
UDS_CharacterAnimBase::execGetFinalBlowElementType(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x1d].field_0x8;
  return;
}

// execGetFinalBlowHitAttackType @ 14b43fee0

void __cdecl
UDS_CharacterAnimBase::execGetFinalBlowHitAttackType(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x1d].field_0x9;
  return;
}

// execGetLastNonZeroVelocity @ 14b43ff10

void __cdecl
UDS_CharacterAnimBase::execGetLastNonZeroVelocity(UObject *param_1,FFrame *param_2,void *param_3)

{
  double dVar1;
  TVector<double> *pTVar2;
  TVector<double> local_28;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = GetLastNonZeroVelocity((UDS_CharacterAnimBase *)param_1,&local_28);
  dVar1 = (pTVar2->field0_0x0)._s_0.Y;
  *(double *)param_3 = (pTVar2->field0_0x0)._s_0.X;
  *(double *)((longlong)param_3 + 8) = dVar1;
  *(double *)((longlong)param_3 + 0x10) = (pTVar2->field0_0x0)._s_0.Z;
  return;
}

// execGetLeanAmount @ 14b43ff60

void __cdecl
UDS_CharacterAnimBase::execGetLeanAmount(UObject *param_1,FFrame *param_2,void *param_3)

{
  double dVar1;
  TVector2<double> *pTVar2;
  TVector2<double> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = GetLeanAmount((UDS_CharacterAnimBase *)param_1,&local_18);
  dVar1 = (pTVar2->field0_0x0)._s_0.Y;
  *(double *)param_3 = (pTVar2->field0_0x0)._s_0.X;
  *(double *)((longlong)param_3 + 8) = dVar1;
  return;
}

// execGetLinkedAnimLayerInstance @ 14b43ffa0

void __cdecl
UDS_CharacterAnimBase::execGetLinkedAnimLayerInstance
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UAnimInstance *pUVar2;
  EDS_CharState local_res10;
  
  local_res10 = None;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = GetLinkedAnimLayerInstance((UDS_CharacterAnimBase *)param_1,local_res10);
  *(UAnimInstance **)param_3 = pUVar2;
  return;
}

// execGetMaxMoveSpeed @ 14b440040

void __cdecl
UDS_CharacterAnimBase::execGetMaxMoveSpeed(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = GetMaxMoveSpeed((UDS_CharacterAnimBase *)param_1);
  *(float *)param_3 = fVar1;
  return;
}

// execGetMoveSpeed @ 14b440080

void __cdecl UDS_CharacterAnimBase::execGetMoveSpeed(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = GetMoveSpeed((UDS_CharacterAnimBase *)param_1);
  *(float *)param_3 = fVar1;
  return;
}

// execGetMoveSpeedRatio @ 14b4400c0

void __cdecl
UDS_CharacterAnimBase::execGetMoveSpeedRatio(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = GetMoveSpeedRatio((UDS_CharacterAnimBase *)param_1);
  *(float *)param_3 = fVar1;
  return;
}

// execGetOppositeCardinalDirection @ 14b440100

void __cdecl
UDS_CharacterAnimBase::execGetOppositeCardinalDirection
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EDS_CardinalDirection EVar2;
  EDS_CardinalDirection local_res10 [8];
  
  local_res10[0] = Forward;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar2 = GetOppositeCardinalDirection((UDS_CharacterAnimBase *)param_1,local_res10[0]);
  *(EDS_CardinalDirection *)param_3 = EVar2;
  return;
}

// execGetRotationVelocity @ 14b440190

void __cdecl
UDS_CharacterAnimBase::execGetRotationVelocity(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = GetRotationVelocity((UDS_CharacterAnimBase *)param_1);
  *(float *)param_3 = fVar1;
  return;
}

// execGetVelocity @ 14b4401d0

void __cdecl UDS_CharacterAnimBase::execGetVelocity(UObject *param_1,FFrame *param_2,void *param_3)

{
  double dVar1;
  TVector<double> *pTVar2;
  TVector<double> local_28;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = GetVelocity((UDS_CharacterAnimBase *)param_1,&local_28);
  dVar1 = (pTVar2->field0_0x0)._s_0.Y;
  *(double *)param_3 = (pTVar2->field0_0x0)._s_0.X;
  *(double *)((longlong)param_3 + 8) = dVar1;
  *(double *)((longlong)param_3 + 0x10) = (pTVar2->field0_0x0)._s_0.Z;
  return;
}

// execHasAcceleration @ 14b440220

void __cdecl
UDS_CharacterAnimBase::execHasAcceleration(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = HasAcceleration((UDS_CharacterAnimBase *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsDeadState @ 14b440260

void __cdecl UDS_CharacterAnimBase::execIsDeadState(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsDeadState((UDS_CharacterAnimBase *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsFalling @ 14b4402a0

void __cdecl UDS_CharacterAnimBase::execIsFalling(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x25].field_0x2;
  return;
}

// execIsFlying @ 14b4402d0

void __cdecl UDS_CharacterAnimBase::execIsFlying(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x25].field_0x3;
  return;
}

// execIsMoving @ 14b440300

void __cdecl UDS_CharacterAnimBase::execIsMoving(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x400))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execIsResurrect @ 14b440340

void __cdecl UDS_CharacterAnimBase::execIsResurrect(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x25].field_0x1;
  return;
}

// UDS_CharacterAnimBase @ 14b864a40

UDS_CharacterAnimBase * __thiscall
UDS_CharacterAnimBase::UDS_CharacterAnimBase
          (UDS_CharacterAnimBase *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UAnimInstance::UAnimInstance((UAnimInstance *)this,param_1);
  *(undefined8 *)&this->field_0x428 = 0;
  *(undefined8 *)&this->field_0x438 = 0;
  *(undefined ***)this = &___7UDS_CharacterAnimBase__6B_;
  *(undefined8 *)&this->field_0x430 = 0;
  this->LocomotionState = Default;
  this->DeadState = None;
  this->MoveMode = Idle;
  this->bLockFootIKPosition = false;
  this->bIsLookAt = false;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->LookAtType = None;
  (this->LookAtLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
  ;
  (this->LookAtLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->LookAtLocation).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
  ;
  this->LookAtAlpha = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->HeadOffset).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->HeadOffset).field0_0x0._s_0.Y = (double)uVar1;
  (this->HeadOffset).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->bEnableFootControlRig = true;
  this->FootControlRigAlpha = 0.0;
  this->FinalBlowElementType = Max;
  this->FinalBlowHitAttackType = None;
  this->FinalBlowDeadAnimationType = None;
  FDS_AnimSharedData::FDS_AnimSharedData(&this->AnimSharedData);
  *(undefined8 *)&this->AnimLayerDescriptorMap = 0;
  *(undefined8 *)&(this->AnimLayerDescriptorMap).field_0x8 = 0;
  *(undefined8 *)&(this->AnimLayerDescriptorMap).field_0x20 = 0;
  *(undefined4 *)&(this->AnimLayerDescriptorMap).field_0x28 = 0;
  *(undefined4 *)&(this->AnimLayerDescriptorMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->AnimLayerDescriptorMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AnimLayerDescriptorMap).field_0x34 = 0;
  *(undefined8 *)&(this->AnimLayerDescriptorMap).field_0x40 = 0;
  *(undefined4 *)&(this->AnimLayerDescriptorMap).field_0x48 = 0;
  *(undefined8 *)&this->AnimLayerInstanceMap = 0;
  *(undefined8 *)&(this->AnimLayerInstanceMap).field_0x8 = 0;
  *(undefined8 *)&(this->AnimLayerInstanceMap).field_0x20 = 0;
  *(undefined4 *)&(this->AnimLayerInstanceMap).field_0x28 = 0;
  *(undefined4 *)&(this->AnimLayerInstanceMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->AnimLayerInstanceMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AnimLayerInstanceMap).field_0x34 = 0;
  *(undefined8 *)&(this->AnimLayerInstanceMap).field_0x40 = 0;
  *(undefined4 *)&(this->AnimLayerInstanceMap).field_0x48 = 0;
  *(undefined8 *)&this->UnlinkAnimLayerTimerMap = 0;
  *(undefined8 *)&(this->UnlinkAnimLayerTimerMap).field_0x8 = 0;
  *(undefined8 *)&(this->UnlinkAnimLayerTimerMap).field_0x20 = 0;
  *(undefined4 *)&(this->UnlinkAnimLayerTimerMap).field_0x28 = 0;
  *(undefined4 *)&(this->UnlinkAnimLayerTimerMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->UnlinkAnimLayerTimerMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UnlinkAnimLayerTimerMap).field_0x34 = 0;
  *(undefined8 *)&(this->UnlinkAnimLayerTimerMap).field_0x40 = 0;
  *(undefined4 *)&(this->UnlinkAnimLayerTimerMap).field_0x48 = 0;
  (this->OwnerEntityMovementCore).WeakPtr = (FWeakObjectPtr)0x0;
  (this->EntityData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CommonSetting).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// GetAnimSharedData @ 14b8764f0

FDS_AnimSharedData * __thiscall
UDS_CharacterAnimBase::GetAnimSharedData(UDS_CharacterAnimBase *this)

{
  return &this->AnimSharedData;
}

// GetCardinalDirectionFromAngle @ 14b8768f0

EDS_CardinalDirection __thiscall
UDS_CharacterAnimBase::GetCardinalDirectionFromAngle
          (UDS_CharacterAnimBase *this,float param_1,float param_2)

{
  float fVar1;
  undefined1 in_XMM3 [16];
  undefined1 auVar2 [16];
  
  auVar2 = roundps(in_XMM3,ZEXT416((uint)(param_1 + __real_3f000000)),1);
  fVar1 = (float)((uint)auVar2._0_4_ & __xmm_7fffffff7fffffff7fffffff7fffffff);
  if (fVar1 <= param_2 + __real_42340000) {
    return Forward;
  }
  if (__real_43070000 - param_2 <= fVar1) {
    return Backward;
  }
  return (0.0 < auVar2._0_4_) + Left;
}

// GetCurAcceleration @ 14b8772b0

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
UDS_CharacterAnimBase::GetCurAcceleration
          (UDS_CharacterAnimBase *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  char cVar5;
  FDS_EntityBase *this_00;
  UDS_CharStateData *pUVar6;
  UObject *pUVar7;
  TVector<double> *pTVar8;
  bool bVar9;
  float fVar10;
  double dVar11;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res18;
  EDS_CharState local_res20;
  TVector<double> local_48 [2];
  
  dVar1 = (this->AnimSharedData).Velocity.field0_0x0._s_0.X;
  dVar2 = (this->AnimSharedData).Velocity.field0_0x0._s_0.Y;
  dVar11 = (this->AnimSharedData).Velocity.field0_0x0._s_0.Z;
  if (dVar2 * dVar2 + dVar1 * dVar1 + dVar11 * dVar11 == 0.0) goto LAB_14b877487;
  if ((char)(*(longlong **)&this->field_0x430)[2] == '\x02') {
    if (((this->AnimSharedData).bIsInputLock != true) &&
       ((this->AnimSharedData).bIsActiveInput != false)) goto LAB_14b877413;
    bVar9 = (this->AnimSharedData).bIsAutoMove == false;
  }
  else {
    cVar5 = (**(code **)(**(longlong **)&this->field_0x430 + 0x1e0))();
    if (cVar5 == '\x02') {
      this_00 = FDS_EntityBase::GetMainPlayerEntityBase(true);
      if (this_00 == (FDS_EntityBase *)0x0) goto LAB_14b877487;
      FDS_EntityBase::GetCharStateData(this_00);
      bVar9 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&local_res18,
                         (void *)0x0);
      if (bVar9) goto LAB_14b877487;
      (**(code **)(this_00->_padding_ + 0x1b8))(this_00,&local_res8);
      bVar9 = FWeakObjectPtr::IsValid(&local_res8);
      if (!bVar9) goto LAB_14b877487;
      pUVar7 = FWeakObjectPtr::Get(&local_res8);
      if (pUVar7[6].field_0x10 != '\x01') {
        pUVar7 = FWeakObjectPtr::Get(&local_res8);
        if (pUVar7[6].field_0x11 != '\0') goto LAB_14b877413;
      }
      pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res18);
      local_res20 = AutoMove;
      bVar9 = UDS_CharStateData::HasCharState(pUVar6,&local_res20);
      bVar9 = !bVar9;
    }
    else {
      pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x438);
      local_res8.ObjectIndex = 0x75;
      bVar9 = UDS_CharStateData::HasCharDetailState(pUVar6,(EDS_CharDetailState *)&local_res8);
    }
  }
  if (bVar9) {
LAB_14b877487:
    uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar4;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    return __return_storage_ptr__;
  }
LAB_14b877413:
  pUVar7 = FWeakObjectPtr::Get(&(this->OwnerEntityMovementCore).WeakPtr);
  fVar10 = (float)(**(code **)(*(longlong *)pUVar7 + 0x3b0))(pUVar7);
  pTVar8 = UE::Math::TVector<double>::GetSafeNormal
                     (&(this->AnimSharedData).Velocity,local_48,__real_3e45798ee0000000,
                      &UE::Math::TVector<double>::ZeroVector);
  dVar11 = (double)fVar10;
  dVar2 = (pTVar8->field0_0x0)._s_0.Y * dVar11;
  dVar1 = (pTVar8->field0_0x0)._s_0.Z;
  auVar3._8_4_ = SUB84(dVar2,0);
  auVar3._0_8_ = (pTVar8->field0_0x0)._s_0.X * dVar11;
  auVar3._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar11 * dVar1;
  return __return_storage_ptr__;
}

// GetDirectionAngleFromVelocity @ 14b877670

float __thiscall UDS_CharacterAnimBase::GetDirectionAngleFromVelocity(UDS_CharacterAnimBase *this)

{
  return (this->AnimSharedData).DirectionAngleFromVelocity;
}

// GetLastNonZeroVelocity @ 14b877c40

TVector<double> * __thiscall
UDS_CharacterAnimBase::GetLastNonZeroVelocity
          (UDS_CharacterAnimBase *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->AnimSharedData).LastNonZeroVelocity.field0_0x0._s_0.Y;
  dVar1 = (this->AnimSharedData).LastNonZeroVelocity.field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (this->AnimSharedData).LastNonZeroVelocity.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetLeanAmount @ 14b877d30

TVector2<double> * __thiscall
UDS_CharacterAnimBase::GetLeanAmount
          (UDS_CharacterAnimBase *this,TVector2<double> *__return_storage_ptr__)

{
  TWeakObjectPtr<AActor,FWeakObjectPtr> TVar1;
  
  TVar1.WeakPtr.ObjectIndex = *(int *)&this->field_0x428;
  TVar1.WeakPtr.ObjectSerialNumber = *(int *)&this->field_0x42c;
  FDS_AnimSharedData::GetLeanAmount
            (&this->AnimSharedData,__return_storage_ptr__,TVar1,
             (TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>)
             (this->OwnerEntityMovementCore).WeakPtr);
  return __return_storage_ptr__;
}

// GetLinkedAnimLayerInstance @ 14b877e50

UAnimInstance * __thiscall
UDS_CharacterAnimBase::GetLinkedAnimLayerInstance(UDS_CharacterAnimBase *this,EDS_CharState param_1)

{
  bool bVar1;
  UAnimInstance **ppUVar2;
  
  bVar1 = IsAnimLayerLinked(this,param_1);
  if (bVar1) {
    ppUVar2 = TMapBase<enum_EDS_CharState,UAnimInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CharState,UAnimInstance_*,0>_>
              ::FindChecked(&this->AnimLayerInstanceMap,param_1);
    return *ppUVar2;
  }
  return (UAnimInstance *)0x0;
}

// GetMaxMoveSpeed @ 14b878090

float __thiscall UDS_CharacterAnimBase::GetMaxMoveSpeed(UDS_CharacterAnimBase *this)

{
  return (this->AnimSharedData).MaxMoveSpeed;
}

// GetMoveSpeed @ 14b8787c0

float __thiscall UDS_CharacterAnimBase::GetMoveSpeed(UDS_CharacterAnimBase *this)

{
  return (this->AnimSharedData).MoveSpeed;
}

// GetMoveSpeedRatio @ 14b878810

float __thiscall UDS_CharacterAnimBase::GetMoveSpeedRatio(UDS_CharacterAnimBase *this)

{
  return (this->AnimSharedData).MoveSpeedRatio;
}

// GetOppositeCardinalDirection @ 14b8790c0

EDS_CardinalDirection __thiscall
UDS_CharacterAnimBase::GetOppositeCardinalDirection
          (UDS_CharacterAnimBase *this,EDS_CardinalDirection param_1)

{
  EDS_CardinalDirection EVar1;
  int iVar2;
  
  iVar2 = -(param_1 - 3);
  EVar1 = (EDS_CardinalDirection)iVar2;
  if (iVar2 < 0) {
    EVar1 = (EDS_CardinalDirection)(param_1 - 3);
  }
  return EVar1;
}

// GetRotationVelocity @ 14b879350

float __thiscall UDS_CharacterAnimBase::GetRotationVelocity(UDS_CharacterAnimBase *this)

{
  return (this->AnimSharedData).RotationVelocity;
}

// GetVelocity @ 14b8798c0

TVector<double> * __thiscall
UDS_CharacterAnimBase::GetVelocity
          (UDS_CharacterAnimBase *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->AnimSharedData).Velocity.field0_0x0._s_0.Y;
  dVar1 = (this->AnimSharedData).Velocity.field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->AnimSharedData).Velocity.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// HasAcceleration @ 14b879930

bool __thiscall UDS_CharacterAnimBase::HasAcceleration(UDS_CharacterAnimBase *this)

{
  return (this->AnimSharedData).bHasAcceleration;
}

// InitAlwaysLinkedAnimLayers @ 14b87a400

void __thiscall UDS_CharacterAnimBase::InitAlwaysLinkedAnimLayers(UDS_CharacterAnimBase *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  FDS_AnimLayerDescriptor *pFVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar11 = 0;
  puVar1 = &(this->AnimLayerDescriptorMap).field_0x10;
  iVar3 = *(int *)&(this->AnimLayerDescriptorMap).field_0x28;
  uVar6 = 1;
  iVar14 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->AnimLayerDescriptorMap).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar10 = *puVar15;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar14 = iVar14 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14b87a4ad;
      uVar10 = puVar15[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = local_res10 + -1 + iVar14;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14b87a4ad:
  uVar10 = *(uint *)&(this->AnimLayerDescriptorMap).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->AnimLayerDescriptorMap).field_0x8 -
                       *(int *)&(this->AnimLayerDescriptorMap).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->AnimLayerDescriptorMap).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->AnimLayerDescriptorMap).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14b87a5b0;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14b87a5b0:
  while( true ) {
    if (*(int *)&(this->AnimLayerDescriptorMap).field_0x8 -
        *(int *)&(this->AnimLayerDescriptorMap).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_CharState,FDS_AnimLayerDescriptor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pFVar13 = (FDS_AnimLayerDescriptor *)
              (*(longlong *)&this->AnimLayerDescriptorMap + 8 +
              (longlong)TStack_60.CurrentBitIndex * 0x20);
    if (pFVar13->bAlwaysLinked == true) {
      LinkAnimLayer(this,*(EDS_CharState *)
                          ((longlong)TStack_60.CurrentBitIndex * 0x20 +
                          *(longlong *)&this->AnimLayerDescriptorMap),pFVar13);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// IsAnimLayerLinked @ 14b87d3e0

bool __thiscall
UDS_CharacterAnimBase::IsAnimLayerLinked(UDS_CharacterAnimBase *this,EDS_CharState param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  if (*(int *)&(this->AnimLayerInstanceMap).field_0x8 !=
      *(int *)&(this->AnimLayerInstanceMap).field_0x34) {
    puVar2 = *(undefined1 **)&(this->AnimLayerInstanceMap).field_0x40;
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &(this->AnimLayerInstanceMap).field_0x38;
    }
    iVar1 = *(int *)(puVar2 + (ulonglong)
                              (*(int *)&(this->AnimLayerInstanceMap).field_0x48 - 1U &
                              (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4);
    if (iVar1 != -1) {
      do {
        if (*(EDS_CharState *)(*(longlong *)&this->AnimLayerInstanceMap + (longlong)iVar1 * 0x18) ==
            param_1) goto LAB_14b87d45c;
        iVar1 = *(int *)(*(longlong *)&this->AnimLayerInstanceMap + 0x10 + (longlong)iVar1 * 0x18);
      } while (iVar1 != -1);
    }
  }
  iVar1 = -1;
LAB_14b87d45c:
  return iVar1 != -1;
}

// IsDeadState @ 14b87d940

bool __thiscall UDS_CharacterAnimBase::IsDeadState(UDS_CharacterAnimBase *this)

{
  return this->DeadState != None;
}

// IsMoving @ 14b87db30

bool __thiscall UDS_CharacterAnimBase::IsMoving(UDS_CharacterAnimBase *this)

{
  return (this->AnimSharedData).bHasAcceleration;
}

// IsValidReferencedPtr @ 14b87e940

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
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall UDS_CharacterAnimBase::IsValidReferencedPtr(UDS_CharacterAnimBase *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  bVar2 = UDS_AnimInstanceBase::IsValidReferencedPtr((UDS_AnimInstanceBase *)this);
  if (bVar2) {
    bVar2 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                      (&this->OwnerEntityMovementCore,(void *)0x0);
    if ((((!bVar2) &&
         (bVar2 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&this->field_0x438,
                             (void *)0x0), !bVar2)) &&
        (bVar2 = TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr>::UEOpEquals
                           (&this->EntityData,(void *)0x0), !bVar2)) &&
       (bVar2 = TWeakObjectPtr<UDS_CommonSetting,FWeakObjectPtr>::UEOpEquals
                          (&this->CommonSetting,(void *)0x0), !bVar2)) {
      return true;
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2829040579294265144>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Animation\\DS_CharacterAnimBase.cpp"
                       ,200,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_CharacterAnimBase::IsValidReferencedPtr",0x2b,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0xc9,L"Invalid Referenced Ptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return false;
}

// LinkAnimLayer @ 14b87ee40

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
UDS_CharacterAnimBase::LinkAnimLayer
          (UDS_CharacterAnimBase *this,EDS_CharState param_1,FDS_AnimLayerDescriptor *param_2)

{
  TMap<EDS_CharState,FTimerHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_CharState,FTimerHandle,0>_>
  *this_00;
  UClass *pUVar1;
  bool bVar2;
  int iVar3;
  FTimerHandle *pFVar4;
  FTimerManager *this_01;
  FTimerData *pFVar5;
  TObjectPtr<UClass>_u_0 TVar6;
  UClass *pUVar7;
  USkeletalMeshComponent *pUVar8;
  undefined1 *puVar9;
  TObjectPtr<UClass>_u_0 local_res8;
  UAnimInstance *local_res10;
  FWeakObjectPtr local_res20;
  UAnimInstance *local_48;
  UAnimInstance **local_40;
  UAnimInstance *local_38 [2];
  
  this_00 = &this->UnlinkAnimLayerTimerMap;
  local_res10 = (UAnimInstance *)param_1;
  if (*(int *)&(this->UnlinkAnimLayerTimerMap).field_0x8 !=
      *(int *)&(this->UnlinkAnimLayerTimerMap).field_0x34) {
    puVar9 = *(undefined1 **)&(this->UnlinkAnimLayerTimerMap).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->UnlinkAnimLayerTimerMap).field_0x38;
    }
    iVar3 = *(int *)(puVar9 + ((param_1 >> 0x20) * 0x17 + param_1 &
                              (ulonglong)(*(int *)&(this->UnlinkAnimLayerTimerMap).field_0x48 - 1))
                              * 4);
    if (iVar3 != -1) {
      do {
        if (*(EDS_CharState *)(*(longlong *)this_00 + (longlong)iVar3 * 0x18) == param_1) {
          pFVar4 = TMapBase<enum_EDS_CharState,FTimerHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CharState,FTimerHandle,0>_>
                   ::FindChecked(this_00,param_1);
          local_res8 = (TObjectPtr<UClass>_u_0)pFVar4->Handle;
          this_01 = FDS_TimerManager::Get((UObject *)0x0);
          pFVar5 = FTimerManager::FindTimer(this_01,(FTimerHandle *)&local_res8.ObjectPtr);
          if (pFVar5 != (FTimerData *)0x0) {
            FTimerManager::InternalClearTimer(this_01,(FTimerHandle)local_res8.ObjectPtr.field0_0x0)
            ;
          }
          local_48 = local_res10;
          local_res8.DebugPtr = (UClass *)0x0;
          if (*(int *)&(this->UnlinkAnimLayerTimerMap).field_0x8 !=
              *(int *)&(this->UnlinkAnimLayerTimerMap).field_0x34) {
            TSet<TTuple<enum_EDS_CharState,FTimerHandle>,TDefaultMapHashableKeyFuncs<enum_EDS_CharState,FTimerHandle,0>,FDefaultSetAllocator>
            ::RemoveImpl<enum_EDS_CharState>
                      (this_00,(int)((ulonglong)local_res10 >> 0x20) * 0x17 + (int)local_res10,
                       (EDS_CharState *)&local_48);
          }
          break;
        }
        iVar3 = *(int *)(*(longlong *)this_00 + 0x10 + (longlong)iVar3 * 0x18);
      } while (iVar3 != -1);
    }
  }
  bVar2 = IsAnimLayerLinked(this,(EDS_CharState)local_res10);
  if (!bVar2) {
    TVar6.DebugPtr = (UClass *)UAnimInstance::GetSkelMeshComponentChecked((UAnimInstance *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((USkeletalMeshComponent *)TVar6.DebugPtr != (USkeletalMeshComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar6.DebugPtr);
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_res8.DebugPtr = TVar6.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((USkeletalMeshComponent *)TVar6.DebugPtr != (USkeletalMeshComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar6.DebugPtr);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_res8);
    bVar2 = FWeakObjectPtr::IsValid(&local_res20);
    if (((bVar2) &&
        (pUVar1 = (param_2->LayerClass).Class.field0_0x0.DebugPtr, pUVar1 != (UClass *)0x0)) &&
       (pUVar7 = Z_Construct_UClass_UAnimInstance_NoRegister(), pUVar7 != (UClass *)0x0)) {
      iVar3 = (int)pUVar7->_padding_;
      if (((int)pUVar1->_padding_ < iVar3) ||
         ((longlong *)*(undefined1 **)(pUVar1->_padding_ + (longlong)iVar3 * 8) !=
          &pUVar7->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) && ((param_2->LayerClass).Class.field0_0x0.DebugPtr != (UClass *)0x0)) {
        pUVar8 = (USkeletalMeshComponent *)FWeakObjectPtr::Get(&local_res20);
        local_res8 = (TObjectPtr<UClass>_u_0)(param_2->LayerClass).Class.field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_res8.DebugPtr != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
        }
        USkeletalMeshComponent::LinkAnimClassLayers(pUVar8,(TSubclassOf<UAnimInstance>)&local_res8);
        pUVar8 = (USkeletalMeshComponent *)FWeakObjectPtr::Get(&local_res20);
        local_res8 = (TObjectPtr<UClass>_u_0)(param_2->LayerClass).Class.field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_res8.DebugPtr != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
        }
        local_38[0] = USkeletalMeshComponent::GetLinkedAnimLayerInstanceByClass
                                (pUVar8,(TSubclassOf<UAnimInstance>)&local_res8);
        if (local_38[0] != (UAnimInstance *)0x0) {
          local_48 = (UAnimInstance *)&local_res10;
          local_40 = local_38;
          TSet<TTuple<enum_EDS_CharState,UAnimInstance_*>,TDefaultMapHashableKeyFuncs<enum_EDS_CharState,UAnimInstance_*,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<enum_EDS_CharState_&,UAnimInstance_*_&>_>
                    (&this->AnimLayerInstanceMap,
                     (TPairInitializer<EDS_CharState_&,UAnimInstance_*_&> *)&local_res8.ObjectPtr,
                     (bool *)&local_48);
        }
      }
    }
  }
  return;
}

// OnBindAnimationEvents @ 14b8811e0

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

void __thiscall UDS_CharacterAnimBase::OnBindAnimationEvents(UDS_CharacterAnimBase *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res8 [2];
  
  UDS_AnimInstanceBase::OnBindAnimationEvents((UDS_AnimInstanceBase *)this);
  (**(code **)(**(longlong **)&this->field_0x430 + 0x1b8))
            (*(longlong **)&this->field_0x430,local_res8);
  bVar2 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar2) {
    pcVar1 = *(code **)(*(longlong *)this + 0x3e0);
    pUVar3 = FWeakObjectPtr::Get(local_res8);
    (*pcVar1)(this,pUVar3[6].field_0x11);
    pcVar1 = *(code **)(*(longlong *)this + 1000);
    pUVar3 = FWeakObjectPtr::Get(local_res8);
    (*pcVar1)(this,pUVar3[6].field_0x10);
    pUVar3 = FWeakObjectPtr::Get(local_res8);
    TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_CharacterAnimBase>
              ((TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
               &pUVar3[4].field_0x10,(UDS_CharacterAnimBase *)(local_res8 + 1),(pmf_381e4520)this);
    pUVar3 = FWeakObjectPtr::Get(local_res8);
    TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_CharacterAnimBase>
              ((TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
               &pUVar3[5].field_0x8,(UDS_CharacterAnimBase *)(local_res8 + 1),(pmf_381e4520)this);
  }
  return;
}

// OnChangedCharState @ 14b885700

void __thiscall
UDS_CharacterAnimBase::OnChangedCharState
          (UDS_CharacterAnimBase *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
          FDS_ChangedCharStateInfo *param_2)

{
  undefined1 *this_00;
  EDS_LocomotionState EVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  UDS_CharStateData *pUVar6;
  UObject *pUVar7;
  FDS_SkillAttackTableRow *pFVar8;
  EDS_DeadAnimState EVar9;
  uint uVar10;
  EDS_CharDetailState local_res8 [2];
  EDS_CharDetailState local_res18 [2];
  EDS_CharDetailState local_res20 [2];
  EDS_CharDetailState local_d8 [4];
  FWeakObjectPtr local_c8;
  EDS_CharState local_c0 [17];
  
  this_00 = &this->field_0x438;
  bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00);
  if (!bVar4) {
    return;
  }
  pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  local_res8[0] = Resurrect_Instant;
  bVar4 = UDS_CharStateData::HasCharDetailState(pUVar6,local_res8);
  (this->AnimSharedData).bIsResurrect = bVar4;
  pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  local_res18[0] = Falling;
  bVar4 = UDS_CharStateData::HasCharDetailState(pUVar6,local_res18);
  (this->AnimSharedData).bIsFalling = bVar4;
  pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  local_res20[0] = Flying;
  bVar4 = UDS_CharStateData::HasCharDetailState(pUVar6,local_res20);
  (this->AnimSharedData).bIsFlying = bVar4;
  pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  EVar9 = Disappear;
  local_d8[0] = Trace;
  bVar4 = UDS_CharStateData::HasCharDetailState(pUVar6,local_d8);
  (this->AnimSharedData).bIsTrace = bVar4;
  pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  local_c0[0] = Swim;
  bVar4 = UDS_CharStateData::HasCharState(pUVar6,local_c0);
  bVar5 = true;
  if (((bVar4) || ((this->AnimSharedData).bIsFalling != false)) ||
     ((this->AnimSharedData).bIsFlying != false)) {
    bVar5 = false;
  }
  this->bEnableFootControlRig = bVar5;
  pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  local_c0[1] = 4;
  bVar4 = UDS_CharStateData::HasCharState(pUVar6,local_c0 + 1);
  (this->AnimSharedData).bIsAutoMove = bVar4;
  pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  uVar10 = 0xfffffffe;
  EVar1 = pUVar7[6].field_0x18;
  this->LocomotionState = EVar1;
  (this->AnimSharedData).LocomotionState = EVar1;
  this->DeadState = None;
  (this->AnimSharedData).DeadAnimState = None;
  pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  local_d8[1] = 0x6e;
  bVar4 = UDS_CharStateData::HasCharDetailState(pUVar6,local_d8 + 1);
  if (bVar4) {
    UDS_DeathData::GetData
              ((ulong64)&local_c8,*(ulong64 *)(*(longlong *)&this->field_0x430 + 8),false);
    bVar4 = FWeakObjectPtr::IsValid(&local_c8);
    if ((!bVar4) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_2829040579294265034>,true,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Animation\\DS_CharacterAnimBase.cpp"
                           ,0x136,"deathData.IsValid()"), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = FWeakObjectPtr::IsValid(&local_c8);
    if (bVar4) {
      pUVar7 = FWeakObjectPtr::Get(&local_c8);
      uVar10 = *(uint *)&pUVar7[3].field_0x14;
      if (uVar10 == 0) {
        pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
        local_d8[2] = 0x11;
        bVar4 = UDS_CharStateData::HasCharDetailState(pUVar6,local_d8 + 2);
        if (bVar4) goto LAB_14b8859c1;
      }
    }
    iVar2 = *(int *)(*(longlong *)&this->field_0x430 + 0x2e8);
    if ((0 < iVar2) &&
       (pFVar8 = FDS_SkillAttackTableRow::Get((longlong)iVar2,true),
       pFVar8 != (FDS_SkillAttackTableRow *)0x0)) {
      this->FinalBlowElementType = pFVar8->ElementType;
      this->FinalBlowHitAttackType = pFVar8->HitAttackType;
      this->FinalBlowDeadAnimationType = pFVar8->DeadAnimationType;
    }
    if ((this->AnimSharedData).bIsFalling == true) {
      this->DeadState = FallDead;
    }
    else {
      pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
      local_c0[2] = 1;
      bVar4 = UDS_CharStateData::HasCharState(pUVar6,local_c0 + 2);
      if (bVar4) {
        this->DeadState = SwimDead;
      }
      else {
        if ((uVar10 & 0xfffffffd) != 0) {
          EVar9 = Dead;
        }
        this->DeadState = EVar9;
      }
    }
  }
  (this->AnimSharedData).DeadAnimState = this->DeadState;
LAB_14b8859c1:
  RefreshLinkedAnimLayer(this,param_1,param_2);
  return;
}

// OnChangedInputLock @ 14b886880

void __thiscall UDS_CharacterAnimBase::OnChangedInputLock(UDS_CharacterAnimBase *this,bool param_1)

{
  (this->AnimSharedData).bIsInputLock = param_1;
  return;
}

// OnClearVariables @ 14b887900

void __thiscall UDS_CharacterAnimBase::OnClearVariables(UDS_CharacterAnimBase *this)

{
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  *(undefined8 *)&this->field_0x428 = 0;
  *(undefined8 *)&this->field_0x430 = 0;
  *(undefined8 *)&this->field_0x438 = 0;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (this->OwnerEntityMovementCore).WeakPtr = local_res8;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  *(int *)&this->field_0x438 = local_res8.ObjectIndex;
  *(int *)&this->field_0x43c = local_res8.ObjectSerialNumber;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (this->EntityData).WeakPtr = local_res8;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (this->CommonSetting).WeakPtr = local_res8;
  return;
}

// OnInitVariables @ 14b889930

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

void __thiscall UDS_CharacterAnimBase::OnInitVariables(UDS_CharacterAnimBase *this)

{
  double dVar1;
  double dVar2;
  longlong *plVar3;
  ulong64 uVar4;
  code *pcVar5;
  longlong lVar6;
  char cVar7;
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> TVar8;
  TWeakObjectPtr<UDS_CommonSetting,FWeakObjectPtr> TVar9;
  FWeakObjectPtr *pFVar10;
  TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr> TVar11;
  USkeletalMeshComponent *pUVar12;
  FName *pFVar13;
  UObject *pUVar14;
  AActor *this_00;
  TRotator<double> *pTVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  FName local_res8;
  double local_38;
  double local_30;
  double local_28;
  TRotator<double> local_20;
  
  cVar7 = (**(code **)(*(longlong *)this + 0x3d0))();
  if (cVar7 == '\x01') {
    TVar8 = FDS_EntityBase::GetCharStateData(*(FDS_EntityBase **)&this->field_0x430);
    *(undefined8 *)&this->field_0x438 = *(undefined8 *)TVar8.WeakPtr;
  }
  if (*(longlong *)&this->field_0x430 != 0) {
    TVar9 = UDS_CommonSetting::GetInst();
                    /* WARNING: Load size is inaccurate */
    (this->CommonSetting).WeakPtr = *TVar9.WeakPtr;
    plVar3 = *(longlong **)&this->field_0x430;
    uVar4 = plVar3[1];
    pFVar10 = (FWeakObjectPtr *)(**(code **)(*plVar3 + 0x78))(plVar3,&local_res8);
    (this->OwnerEntityMovementCore).WeakPtr = *pFVar10;
    TVar8 = UDS_CharStateData::GetData((ulong64)&local_res8);
    *(undefined8 *)&this->field_0x438 = *(undefined8 *)TVar8.WeakPtr;
    TVar11 = UDS_EntityData::GetData((ulong64)&local_res8,uVar4);
                    /* WARNING: Load size is inaccurate */
    (this->EntityData).WeakPtr = *TVar11.WeakPtr;
    this->bEnableFootControlRig = true;
    pUVar12 = UAnimInstance::GetOwningComponent((UAnimInstance *)this);
    pcVar5 = *(code **)(pUVar12->_padding_ + 0x528);
    pFVar13 = ::FName::FName(&local_res8,L"head");
    (*pcVar5)(pUVar12,&local_38,*pFVar13);
    dVar1 = (this->AnimSharedData).ActorLocation.field0_0x0._s_0.Y;
    dVar2 = (this->AnimSharedData).ActorLocation.field0_0x0._s_0.Z;
    (this->HeadOffset).field0_0x0._s_0.X =
         local_38 - (this->AnimSharedData).ActorLocation.field0_0x0._s_0.X;
    (this->HeadOffset).field0_0x0._s_0.Y = local_30 - dVar1;
    (this->HeadOffset).field0_0x0._s_0.Z = local_28 - dVar2;
    pUVar14 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x428);
    lVar6 = *(longlong *)(pUVar14 + 0xb);
    uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (lVar6 != 0) {
      uVar16 = *(undefined4 *)(lVar6 + 0x210);
      uVar17 = *(undefined4 *)(lVar6 + 0x214);
      uVar18 = *(undefined4 *)(lVar6 + 0x218);
      uVar19 = *(undefined4 *)(lVar6 + 0x21c);
      uVar20 = *(double *)(lVar6 + 0x220);
    }
    *(undefined4 *)&(this->AnimSharedData).ActorLocation.field0_0x0 = uVar16;
    *(undefined4 *)((longlong)&(this->AnimSharedData).ActorLocation.field0_0x0 + 4) = uVar17;
    *(undefined4 *)((longlong)&(this->AnimSharedData).ActorLocation.field0_0x0 + 8) = uVar18;
    *(undefined4 *)((longlong)&(this->AnimSharedData).ActorLocation.field0_0x0 + 0xc) = uVar19;
    (this->AnimSharedData).ActorLocation.field0_0x0._s_0.Z = (double)uVar20;
    this_00 = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x428);
    pTVar15 = AActor::GetActorRotation(this_00,&local_20);
    dVar1 = pTVar15->Yaw;
    (this->AnimSharedData).ActorRotation.Pitch = pTVar15->Pitch;
    (this->AnimSharedData).ActorRotation.Yaw = dVar1;
    (this->AnimSharedData).ActorRotation.Roll = pTVar15->Roll;
    InitAnimLength(this);
    InitAlwaysLinkedAnimLayers(this);
  }
  return;
}

// OnInputActived @ 14b88a140

void __thiscall UDS_CharacterAnimBase::OnInputActived(UDS_CharacterAnimBase *this,bool param_1)

{
  (this->AnimSharedData).bIsActiveInput = param_1;
  return;
}

// OnNativeInitializeAnimation @ 14b88a750

void __thiscall UDS_CharacterAnimBase::OnNativeInitializeAnimation(UDS_CharacterAnimBase *this)

{
  return;
}

// OnNativeThreadSafeUpdateAnimation @ 14b88aaf0

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
UDS_CharacterAnimBase::OnNativeThreadSafeUpdateAnimation(UDS_CharacterAnimBase *this,float param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [12];
  uint uVar4;
  uint uVar5;
  EDS_CardinalDirection EVar6;
  EDS_MoveMode EVar7;
  char cVar8;
  UObject *pUVar9;
  AActor *this_00;
  TRotator<double> *pTVar10;
  UDS_MovementCore *pUVar11;
  TVector<double> *pTVar12;
  UDS_EntityData *this_01;
  uint uVar13;
  float fVar14;
  float fVar15;
  uint uVar20;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar21;
  undefined8 uVar22;
  double dVar23;
  undefined8 uVar25;
  undefined1 auVar24 [16];
  undefined8 uVar28;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  TVector<double>_u_0 local_58;
  TRotator<double> local_40 [2];
  
  local_58._s_0.Z = (this->AnimSharedData).ActorLocation.field0_0x0._s_0.Z;
  auVar17 = *(undefined1 (*) [16])&(this->AnimSharedData).ActorLocation.field0_0x0;
  pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x428);
  lVar1 = *(longlong *)(pUVar9 + 0xb);
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  uVar25 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (lVar1 != 0) {
    uVar2 = *(double *)(lVar1 + 0x220);
    uVar22 = *(double *)(lVar1 + 0x210);
    uVar25 = *(double *)(lVar1 + 0x218);
  }
  uVar28 = 0;
  (this->AnimSharedData).ActorLocation.field0_0x0._s_0.X = (double)uVar22;
  (this->AnimSharedData).ActorLocation.field0_0x0._s_0.Y = (double)uVar25;
  (this->AnimSharedData).ActorLocation.field0_0x0._s_0.Z = (double)uVar2;
  this_00 = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x428);
  pTVar10 = AActor::GetActorRotation(this_00,local_40);
  dVar16 = pTVar10->Yaw;
  (this->AnimSharedData).ActorRotation.Pitch = pTVar10->Pitch;
  (this->AnimSharedData).ActorRotation.Yaw = dVar16;
  (this->AnimSharedData).ActorRotation.Roll = pTVar10->Roll;
  pUVar9 = FWeakObjectPtr::Get(&(this->OwnerEntityMovementCore).WeakPtr);
  dVar16 = __real_3f1a36e2e0000000;
  uVar5 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar4 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar13 = auVar17._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar20 = auVar17._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  (this->AnimSharedData).RotationVelocity = *(float *)(pUVar9 + 0xb);
  auVar3._4_8_ = uVar28;
  auVar3._0_4_ = auVar17._4_4_;
  auVar26._0_8_ = auVar3._0_8_ << 0x20;
  auVar26._8_4_ = auVar17._8_4_;
  auVar26._12_4_ = auVar17._12_4_;
  if (((dVar16 < (double)CONCAT44(uVar20,uVar13)) ||
      (dVar16 < (double)CONCAT44(auVar17._12_4_ & uVar5,auVar17._8_4_ & uVar4))) ||
     (dVar16 < (double)CONCAT44((uint)((ulonglong)local_58._16_8_ >> 0x20) & uVar5,
                                SUB84(local_58._s_0.Z,0) & uVar4))) {
    dVar23 = (this->AnimSharedData).ActorLocation.field0_0x0._s_0.X - auVar17._0_8_;
    dVar16 = (this->AnimSharedData).ActorLocation.field0_0x0._s_0.Y - auVar26._8_8_;
    auVar17._0_8_ = dVar16 * dVar16 + dVar23 * dVar23;
    auVar17._8_8_ = 0;
    auVar17 = sqrtpd(auVar17,auVar17);
    (this->AnimSharedData).DisplacementSinceLastUpdate = (float)auVar17._0_8_;
  }
  pUVar11 = (UDS_MovementCore *)FWeakObjectPtr::Get(&(this->OwnerEntityMovementCore).WeakPtr);
  pTVar12 = UDS_MovementCore::GetVelocity(pUVar11,(TVector<double> *)local_40);
  dVar16 = (pTVar12->field0_0x0)._s_0.Y;
  (this->AnimSharedData).Velocity.field0_0x0._s_0.X = (pTVar12->field0_0x0)._s_0.X;
  (this->AnimSharedData).Velocity.field0_0x0._s_0.Y = dVar16;
  (this->AnimSharedData).Velocity.field0_0x0._s_0.Z = (pTVar12->field0_0x0)._s_0.Z;
  local_58._s_0.X = (this->AnimSharedData).Velocity.field0_0x0._s_0.X;
  local_58._s_0.Y = (this->AnimSharedData).Velocity.field0_0x0._s_0.Y;
  local_58._s_0.Z = 0.0;
  pTVar12 = UE::Math::TRotator<double>::UnrotateVector
                      (&(this->AnimSharedData).ActorRotation,(TVector<double> *)local_40,
                       (TVector<double> *)&local_58._s_0);
  dVar16 = (pTVar12->field0_0x0)._s_0.Y;
  (this->AnimSharedData).LocalVelocity2D.field0_0x0._s_0.X = (pTVar12->field0_0x0)._s_0.X;
  (this->AnimSharedData).LocalVelocity2D.field0_0x0._s_0.Y = dVar16;
  (this->AnimSharedData).LocalVelocity2D.field0_0x0._s_0.Z = (pTVar12->field0_0x0)._s_0.Z;
  dVar16 = (this->AnimSharedData).LocalVelocity2D.field0_0x0._s_0.X;
  dVar23 = (this->AnimSharedData).LocalVelocity2D.field0_0x0._s_0.Y;
  auVar18._0_8_ = dVar16 * dVar16;
  auVar18._8_8_ = 0;
  auVar27._0_8_ = dVar23 * dVar23 + auVar18._0_8_;
  auVar27._8_8_ = 0;
  auVar17 = sqrtpd(auVar18,auVar27);
  (this->AnimSharedData).LocalVelocity2D_Size = (float)auVar17._0_8_;
  fVar14 = UKismetAnimationLibrary::CalculateDirection
                     ((TVector<double> *)&local_58._s_0,&(this->AnimSharedData).ActorRotation);
  (this->AnimSharedData).DirectionAngleFromVelocity = fVar14;
  auVar17 = roundps(auVar27,ZEXT416((uint)(fVar14 + __real_3f000000)),1);
  fVar14 = (float)((uint)auVar17._0_4_ & __xmm_7fffffff7fffffff7fffffff7fffffff);
  if (__real_42340000 < fVar14) {
    if (fVar14 < __real_43070000) {
      EVar6 = (0.0 < auVar17._0_4_) + Left;
    }
    else {
      EVar6 = Backward;
    }
  }
  else {
    EVar6 = Forward;
  }
  (this->AnimSharedData).CardinalDirectionFromVelocity = EVar6;
  UpdateAccelerationData(this,param_1);
  pUVar11 = (UDS_MovementCore *)FWeakObjectPtr::Get(&(this->OwnerEntityMovementCore).WeakPtr);
  pTVar12 = UDS_MovementCore::GetVelocity(pUVar11,(TVector<double> *)local_40);
  dVar16 = (pTVar12->field0_0x0)._s_0.Y;
  dVar23 = (pTVar12->field0_0x0)._s_0.X;
  auVar19._0_8_ = dVar23 * dVar23;
  auVar19._8_8_ = 0;
  auVar24._0_8_ = dVar16 * dVar16 + auVar19._0_8_;
  auVar24._8_8_ = 0;
  auVar17 = sqrtpd(auVar19,auVar24);
  (this->AnimSharedData).MoveSpeed = (float)auVar17._0_8_;
  pUVar11 = (UDS_MovementCore *)FWeakObjectPtr::Get(&(this->OwnerEntityMovementCore).WeakPtr);
  fVar15 = UDS_MovementCore::GetMaxMoveSpeed(pUVar11);
  (this->AnimSharedData).MaxMoveSpeed = fVar15;
  fVar14 = __real_322bcc77;
  fVar21 = (float)((uint)fVar15 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  (this->AnimSharedData).MoveSpeedRatio = 0.0;
  if (fVar14 < fVar21) {
    (this->AnimSharedData).MoveSpeedRatio = (this->AnimSharedData).MoveSpeed / fVar15;
  }
  if (this->LocomotionState == Default) {
    this_01 = (UDS_EntityData *)FWeakObjectPtr::Get(&(this->EntityData).WeakPtr);
    EVar7 = UDS_EntityData::GetMoveMode(this_01);
    this->MoveMode = EVar7;
  }
  cVar8 = (**(code **)(*(longlong *)this + 0x3f8))(this);
  if (cVar8 == '\x01') {
    (**(code **)(*(longlong *)this + 0x3f0))(this);
  }
  return;
}

// OnUnBindAnimationEvents @ 14b894160

void __thiscall UDS_CharacterAnimBase::OnUnBindAnimationEvents(UDS_CharacterAnimBase *this)

{
  char cVar1;
  bool bVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10 [3];
  
  cVar1 = (**(code **)(*(longlong *)this + 0x3d0))();
  if (cVar1 == '\x01') {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x438);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[7].field_0x20,this);
  }
  (**(code **)(**(longlong **)&this->field_0x430 + 0x1b8))
            (*(longlong **)&this->field_0x430,&local_res8);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&local_res8);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[4].field_0x10,this);
  }
  UDS_EntityData::GetData((ulong64)local_res10,*(ulong64 *)(*(longlong *)&this->field_0x430 + 8));
  bVar2 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(local_res10);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[6].field_0x18,this);
  }
  return;
}

// OnUnlinkAnimLayerTimerEnd @ 14b894ab0

void __thiscall
UDS_CharacterAnimBase::OnUnlinkAnimLayerTimerEnd
          (UDS_CharacterAnimBase *this,EDS_CharState param_1,TSubclassOf<UAnimInstance> param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  UDS_CharStateData *this_00;
  USkeletalMeshComponent *pUVar4;
  UClass *pUVar5;
  undefined1 *puVar6;
  FWeakObjectPtr local_res8;
  USkeletalMeshComponent *local_res10 [2];
  USkeletalMeshComponent *local_res20;
  
  local_res10[0] = (USkeletalMeshComponent *)param_1;
  if (*(int *)&(this->UnlinkAnimLayerTimerMap).field_0x8 !=
      *(int *)&(this->UnlinkAnimLayerTimerMap).field_0x34) {
    puVar6 = *(undefined1 **)&(this->UnlinkAnimLayerTimerMap).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->UnlinkAnimLayerTimerMap).field_0x38;
    }
    iVar3 = *(int *)(puVar6 + ((param_1 >> 0x20) * 0x17 + param_1 &
                              (ulonglong)(*(int *)&(this->UnlinkAnimLayerTimerMap).field_0x48 - 1))
                              * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&this->UnlinkAnimLayerTimerMap;
      do {
        if (*(EDS_CharState *)(lVar1 + (longlong)iVar3 * 0x18) == param_1) {
          local_res20 = (USkeletalMeshComponent *)param_1;
          TSet<TTuple<enum_EDS_CharState,FTimerHandle>,TDefaultMapHashableKeyFuncs<enum_EDS_CharState,FTimerHandle,0>,FDefaultSetAllocator>
          ::RemoveImpl<enum_EDS_CharState>
                    (&this->UnlinkAnimLayerTimerMap,(int)(param_1 >> 0x20) * 0x17 + (int)param_1,
                     (EDS_CharState *)&local_res20);
          break;
        }
        iVar3 = *(int *)(lVar1 + 0x10 + (longlong)iVar3 * 0x18);
      } while (iVar3 != -1);
    }
  }
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0x438);
  if (bVar2) {
    this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x438);
    bVar2 = UDS_CharStateData::HasCharState(this_00,(EDS_CharState *)local_res10);
    if (!bVar2) {
      pUVar4 = UAnimInstance::GetSkelMeshComponentChecked((UAnimInstance *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar4 != (USkeletalMeshComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_res20 = pUVar4;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar4 != (USkeletalMeshComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
      bVar2 = FWeakObjectPtr::IsValid(&local_res8);
      if (((bVar2) && (lVar1 = *(longlong *)param_2.Class.field0_0x0, lVar1 != 0)) &&
         (pUVar5 = Z_Construct_UClass_UAnimInstance_NoRegister(), pUVar5 != (UClass *)0x0)) {
        iVar3 = (int)pUVar5->_padding_;
        if ((*(int *)(lVar1 + 0x38) < iVar3) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar3 * 8) !=
            &pUVar5->_padding_)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((bVar2) && (*(longlong *)param_2.Class.field0_0x0 != 0)) {
          pUVar4 = (USkeletalMeshComponent *)FWeakObjectPtr::Get(&local_res8);
          local_res20 = *(USkeletalMeshComponent **)param_2.Class.field0_0x0;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_res20 != (USkeletalMeshComponent *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_res20);
          }
          USkeletalMeshComponent::UnlinkAnimClassLayers
                    (pUVar4,(TSubclassOf<UAnimInstance>)&local_res20);
          local_res20 = local_res10[0];
          if (*(int *)&(this->AnimLayerInstanceMap).field_0x8 !=
              *(int *)&(this->AnimLayerInstanceMap).field_0x34) {
            TSet<TTuple<enum_EDS_CharState,UAnimInstance_*>,TDefaultMapHashableKeyFuncs<enum_EDS_CharState,UAnimInstance_*,0>,FDefaultSetAllocator>
            ::RemoveImpl<enum_EDS_CharState>
                      (&this->AnimLayerInstanceMap,
                       (int)((ulonglong)local_res10[0] >> 0x20) * 0x17 + (int)local_res10[0],
                       (EDS_CharState *)&local_res20);
          }
        }
      }
    }
  }
  return;
}

// RefreshDeadState @ 14b896690

void __thiscall UDS_CharacterAnimBase::RefreshDeadState(UDS_CharacterAnimBase *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  EDS_DeadAnimState EVar4;
  UDS_CharStateData *pUVar5;
  UObject *pUVar6;
  FDS_SkillAttackTableRow *pFVar7;
  uint uVar8;
  EDS_CharDetailState local_res8 [2];
  EDS_CharDetailState local_res10 [2];
  FWeakObjectPtr local_res18;
  EDS_CharState local_res20;
  
  this->DeadState = None;
  (this->AnimSharedData).DeadAnimState = None;
  uVar8 = 0xfffffffe;
  pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x438);
  local_res8[0] = Dead;
  bVar3 = UDS_CharStateData::HasCharDetailState(pUVar5,local_res8);
  if (bVar3) {
    UDS_DeathData::GetData
              ((ulong64)&local_res18,*(ulong64 *)(*(longlong *)&this->field_0x430 + 8),false);
    bVar3 = FWeakObjectPtr::IsValid(&local_res18);
    if ((!bVar3) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_2829040579294265034>,true,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Animation\\DS_CharacterAnimBase.cpp"
                           ,0x136,"deathData.IsValid()"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = FWeakObjectPtr::IsValid(&local_res18);
    if (bVar3) {
      pUVar6 = FWeakObjectPtr::Get(&local_res18);
      uVar8 = *(uint *)&pUVar6[3].field_0x14;
      if (uVar8 == 0) {
        pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x438);
        local_res10[0] = SuicideSkill;
        bVar3 = UDS_CharStateData::HasCharDetailState(pUVar5,local_res10);
        if (bVar3) {
          return;
        }
      }
    }
    iVar1 = *(int *)(*(longlong *)&this->field_0x430 + 0x2e8);
    if ((0 < iVar1) &&
       (pFVar7 = FDS_SkillAttackTableRow::Get((longlong)iVar1,true),
       pFVar7 != (FDS_SkillAttackTableRow *)0x0)) {
      this->FinalBlowElementType = pFVar7->ElementType;
      this->FinalBlowHitAttackType = pFVar7->HitAttackType;
      this->FinalBlowDeadAnimationType = pFVar7->DeadAnimationType;
    }
    if ((this->AnimSharedData).bIsFalling == true) {
      this->DeadState = FallDead;
    }
    else {
      pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x438);
      local_res20 = Swim;
      bVar3 = UDS_CharStateData::HasCharState(pUVar5,&local_res20);
      if (bVar3) {
        this->DeadState = SwimDead;
      }
      else {
        EVar4 = Disappear;
        if ((uVar8 & 0xfffffffd) != 0) {
          EVar4 = Dead;
        }
        this->DeadState = EVar4;
      }
    }
  }
  (this->AnimSharedData).DeadAnimState = this->DeadState;
  return;
}

// RefreshLinkedAnimLayer @ 14b896ff0

void __thiscall
UDS_CharacterAnimBase::RefreshLinkedAnimLayer
          (UDS_CharacterAnimBase *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
          FDS_ChangedCharStateInfo *param_2)

{
  TMap<EDS_CharState,FDS_AnimLayerDescriptor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_CharState,FDS_AnimLayerDescriptor,0>_>
  *this_00;
  EDS_CharState EVar1;
  bool bVar2;
  UDS_CharStateData *this_01;
  FDS_AnimLayerDescriptor *pFVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  FWeakObjectPtr local_res10;
  
  EVar1 = param_2->RemovedCharState;
  this_00 = &this->AnimLayerDescriptorMap;
  puVar6 = &(this->AnimLayerDescriptorMap).field_0x40;
  local_res10 = param_1.WeakPtr;
  if (*(int *)&(this->AnimLayerDescriptorMap).field_0x8 !=
      *(int *)&(this->AnimLayerDescriptorMap).field_0x34) {
    puVar4 = *(undefined1 **)puVar6;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->AnimLayerDescriptorMap).field_0x38;
    }
    iVar5 = *(int *)(puVar4 + ((ulonglong)(*(int *)&(this->AnimLayerDescriptorMap).field_0x48 - 1) &
                              (EVar1 >> 0x20) * 0x17 + EVar1) * 4);
    if (iVar5 != -1) {
      do {
        if (*(EDS_CharState *)((longlong)iVar5 * 0x20 + *(longlong *)this_00) == EVar1) {
          if (iVar5 != -1) {
            this_01 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
            bVar2 = UDS_CharStateData::HasCharState(this_01,&param_2->RemovedCharState);
            if (!bVar2) {
              pFVar3 = TMapBase<enum_EDS_CharState,FDS_AnimLayerDescriptor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CharState,FDS_AnimLayerDescriptor,0>_>
                       ::FindChecked(this_00,param_2->RemovedCharState);
              UnlinkAnimLayer(this,param_2->RemovedCharState,pFVar3);
            }
          }
          break;
        }
        iVar5 = *(int *)((longlong)iVar5 * 0x20 + 0x18 + *(longlong *)this_00);
      } while (iVar5 != -1);
    }
  }
  EVar1 = param_2->AddedCharState;
  if (*(int *)&(this->AnimLayerDescriptorMap).field_0x8 !=
      *(int *)&(this->AnimLayerDescriptorMap).field_0x34) {
    puVar6 = *(undefined1 **)puVar6;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->AnimLayerDescriptorMap).field_0x38;
    }
    iVar5 = *(int *)(puVar6 + ((EVar1 >> 0x20) * 0x17 + EVar1 &
                              (ulonglong)(*(int *)&(this->AnimLayerDescriptorMap).field_0x48 - 1)) *
                              4);
    if (iVar5 != -1) {
      while (*(EDS_CharState *)((longlong)iVar5 * 0x20 + *(longlong *)this_00) != EVar1) {
        iVar5 = *(int *)((longlong)iVar5 * 0x20 + 0x18 + *(longlong *)this_00);
        if (iVar5 == -1) {
          return;
        }
      }
      pFVar3 = TMapBase<enum_EDS_CharState,FDS_AnimLayerDescriptor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CharState,FDS_AnimLayerDescriptor,0>_>
               ::FindChecked(this_00,EVar1);
      LinkAnimLayer(this,param_2->AddedCharState,pFVar3);
    }
  }
  return;
}

// SetFootIKPositionLock @ 14b898bc0

void __thiscall
UDS_CharacterAnimBase::SetFootIKPositionLock(UDS_CharacterAnimBase *this,bool param_1)

{
  this->bLockFootIKPosition = param_1;
  return;
}

// UnLinkAllAnimLayers @ 14b89cab0

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

void __thiscall UDS_CharacterAnimBase::UnLinkAllAnimLayers(UDS_CharacterAnimBase *this)

{
  TMap<EDS_CharState,UAnimInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_CharState,UAnimInstance_*,0>_>
  *this_00;
  ulonglong uVar1;
  uint uVar2;
  EDS_CharState EVar3;
  undefined1 *puVar4;
  code *pcVar5;
  TMap<EDS_CharState,FDS_AnimLayerDescriptor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_CharState,FDS_AnimLayerDescriptor,0>_>
  *pTVar6;
  bool bVar7;
  int iVar8;
  FTimerHandle *pFVar9;
  FTimerManager *this_01;
  FTimerData *pFVar10;
  USkeletalMeshComponent *this_02;
  longlong lVar11;
  undefined1 *puVar12;
  int iVar13;
  uint uVar14;
  TMap<EDS_CharState,FTimerHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_CharState,FTimerHandle,0>_>
  *pTVar15;
  uint *puVar16;
  EDS_CharState *pEVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  uint local_res10;
  int local_res18;
  FWeakObjectPtr local_res20;
  FTimerHandle local_c8;
  TMap<EDS_CharState,FDS_AnimLayerDescriptor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_CharState,FDS_AnimLayerDescriptor,0>_>
  *local_c0;
  int iStack_b8;
  uint uStack_b4;
  undefined1 *local_b0;
  undefined4 uStack_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  USkeletalMeshComponent *local_90;
  EDS_CharState local_88;
  UObject *local_80;
  TMap<EDS_CharState,FDS_AnimLayerDescriptor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_CharState,FDS_AnimLayerDescriptor,0>_>
  *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  if ((*(int *)&(this->AnimLayerInstanceMap).field_0x8 !=
       *(int *)&(this->AnimLayerInstanceMap).field_0x34) &&
     (bVar7 = UDS_AnimInstanceBase::IsValidReferencedPtr((UDS_AnimInstanceBase *)this), bVar7)) {
    local_90 = UAnimInstance::GetSkelMeshComponentChecked((UAnimInstance *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_90 != (USkeletalMeshComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_90);
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_90 != (USkeletalMeshComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_90);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_90);
    bVar7 = FWeakObjectPtr::IsValid(&local_res20);
    if (bVar7) {
      uStack_b4 = 1;
      local_c0 = &this->AnimLayerDescriptorMap;
      puVar4 = &(this->AnimLayerDescriptorMap).field_0x10;
      iVar8 = *(int *)&(this->AnimLayerDescriptorMap).field_0x28;
      local_a0 = 0;
      iStack_a4 = local_a0;
      iStack_b8 = 0;
      if (iVar8 != 0) {
        puVar16 = *(uint **)&(this->AnimLayerDescriptorMap).field_0x20;
        if (puVar16 == (uint *)0x0) {
          puVar16 = (uint *)puVar4;
        }
        uVar14 = *puVar16;
        local_a0 = 0;
        while (uVar14 == 0) {
          lVar11 = (longlong)iStack_b8;
          local_a0 = local_a0 + 0x20;
          iStack_b8 = iStack_b8 + 1;
          iStack_a4 = iVar8;
          if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b8) goto LAB_14b89cbfd;
          uVar14 = puVar16[lVar11 + 1];
        }
        uStack_b4 = -uVar14 & uVar14;
        uVar1 = (ulonglong)uStack_b4 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        local_res18 = (int)lVar11;
        iStack_a4 = local_a0 + -1 + local_res18;
        if (iVar8 < iStack_a4) {
          iStack_a4 = iVar8;
        }
      }
LAB_14b89cbfd:
      uVar14 = *(uint *)&(this->AnimLayerDescriptorMap).field_0x28;
      uVar18 = uVar14 & 0xffffffe0;
      iStack_98 = *(int *)&(this->AnimLayerDescriptorMap).field_0x8 -
                  *(int *)&(this->AnimLayerDescriptorMap).field_0x34;
      uStack_a8 = 0xffffffff;
      TStack_70._padding_ = CONCAT44(uStack_b4,iStack_b8);
      TStack_70.CurrentBitIndex = iStack_a4;
      TStack_70.UnvisitedBitMask = 0xffffffff;
      iVar13 = (int)uVar14 >> 5;
      TStack_70._28_4_ = iStack_a4;
      TStack_70.BaseBitIndex = local_a0;
      uStack_50 = CONCAT44(uStack_94,iStack_98);
      local_res10 = uVar14;
      local_b0 = puVar4;
      iStack_9c = iStack_a4;
      local_78 = local_c0;
      TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar4;
      if ((((int)uVar14 < 0) || (iVar8 < (int)uVar14)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar2 = *(uint *)&(this->AnimLayerDescriptorMap).field_0x28;
      if (uVar14 != uVar2) {
        puVar12 = *(undefined1 **)&(this->AnimLayerDescriptorMap).field_0x20;
        if (puVar12 == (undefined1 *)0x0) {
          puVar12 = puVar4;
        }
        uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar13 * 4);
        while (uVar14 == 0) {
          lVar11 = (longlong)iVar13;
          uVar18 = uVar18 + 0x20;
          iVar13 = iVar13 + 1;
          uVar14 = uVar2;
          local_res10 = uVar2;
          if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
          goto LAB_14b89cd0e;
          uVar14 = *(uint *)(puVar12 + lVar11 * 4 + 4);
        }
        uVar1 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        uVar14 = (int)lVar11 + -1 + uVar18;
        local_res10 = uVar14;
        if ((int)uVar2 < (int)uVar14) {
          uVar14 = uVar2;
          local_res10 = uVar2;
        }
      }
LAB_14b89cd0e:
LAB_14b89cd20:
      pTVar6 = local_78;
      if (*(int *)&local_78->field_0x8 - *(int *)&local_78->field_0x34 != (int)uStack_50) {
        `TSparseArray<TSparseSetElement<TTuple<enum_EDS_CharState,FDS_AnimLayerDescriptor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_70.CurrentBitIndex != uVar14) ||
          (TStack_70.Array !=
           (TBitArray<FDefaultBitArrayAllocator> *)&(this->AnimLayerDescriptorMap).field_0x10)) ||
         (pTVar6 != &this->AnimLayerDescriptorMap)) {
        pEVar17 = (EDS_CharState *)
                  ((longlong)TStack_70.CurrentBitIndex * 0x20 + *(longlong *)pTVar6);
        EVar3 = *pEVar17;
        if (*(int *)&(this->AnimLayerInstanceMap).field_0x8 !=
            *(int *)&(this->AnimLayerInstanceMap).field_0x34) {
          puVar4 = *(undefined1 **)&(this->AnimLayerInstanceMap).field_0x40;
          puVar12 = &(this->AnimLayerInstanceMap).field_0x38;
          if (puVar4 != (undefined1 *)0x0) {
            puVar12 = puVar4;
          }
          uVar18 = (int)(EVar3 >> 0x20) * 0x17 + (int)EVar3;
          iVar8 = *(int *)(puVar12 +
                          (ulonglong)
                          (*(int *)&(this->AnimLayerInstanceMap).field_0x48 - 1U & uVar18) * 4);
          uVar14 = local_res10;
          if (iVar8 != -1) {
            do {
              if (*(EDS_CharState *)
                   (*(longlong *)&this->AnimLayerInstanceMap + (longlong)iVar8 * 0x18) == EVar3) {
                pTVar15 = &this->UnlinkAnimLayerTimerMap;
                if (*(int *)&(this->UnlinkAnimLayerTimerMap).field_0x8 ==
                    *(int *)&(this->UnlinkAnimLayerTimerMap).field_0x34) goto LAB_14b89ce89;
                puVar4 = *(undefined1 **)&(this->UnlinkAnimLayerTimerMap).field_0x40;
                puVar12 = &(this->UnlinkAnimLayerTimerMap).field_0x38;
                if (puVar4 != (undefined1 *)0x0) {
                  puVar12 = puVar4;
                }
                iVar8 = *(int *)(puVar12 +
                                (ulonglong)
                                (*(int *)&(this->UnlinkAnimLayerTimerMap).field_0x48 - 1U & uVar18)
                                * 4);
                if (iVar8 == -1) goto LAB_14b89ce89;
                goto LAB_14b89ce10;
              }
              iVar8 = *(int *)(*(longlong *)&this->AnimLayerInstanceMap + 0x10 +
                              (longlong)iVar8 * 0x18);
            } while (iVar8 != -1);
          }
        }
        goto LAB_14b89cec1;
      }
      this_00 = &this->AnimLayerInstanceMap;
      bVar7 = 1 < *(int *)&(this->AnimLayerInstanceMap).field_0x48;
      if (!bVar7) {
        TSet<TTuple<enum_EDS_CharState,UAnimInstance_*>,TDefaultMapHashableKeyFuncs<enum_EDS_CharState,UAnimInstance_*,0>,FDefaultSetAllocator>
        ::UnhashElements(this_00);
      }
      puVar4 = &(this->AnimLayerInstanceMap).field_0xc;
      *(undefined4 *)&(this->AnimLayerInstanceMap).field_0x8 = 0;
      if (*(int *)puVar4 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar4);
      }
      *(undefined4 *)&(this->AnimLayerInstanceMap).field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->AnimLayerInstanceMap).field_0x34 = 0;
      iVar8 = *(int *)&(this->AnimLayerInstanceMap).field_0x2c;
      *(undefined4 *)&(this->AnimLayerInstanceMap).field_0x28 = 0;
      if ((iVar8 < 0) || (0x80 < iVar8)) {
        *(undefined4 *)&(this->AnimLayerInstanceMap).field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)&(this->AnimLayerInstanceMap).field_0x10,
                   0);
      }
      if (bVar7) {
        *(undefined4 *)&(this->AnimLayerInstanceMap).field_0x48 = 1;
        TSet<TTuple<enum_EDS_CharState,UAnimInstance_*>,TDefaultMapHashableKeyFuncs<enum_EDS_CharState,UAnimInstance_*,0>,FDefaultSetAllocator>
        ::Rehash(this_00);
      }
      pTVar15 = &this->UnlinkAnimLayerTimerMap;
      bVar7 = 1 < *(int *)&(this->UnlinkAnimLayerTimerMap).field_0x48;
      if (!bVar7) {
        TSet<TTuple<enum_EDS_CharState,FTimerHandle>,TDefaultMapHashableKeyFuncs<enum_EDS_CharState,FTimerHandle,0>,FDefaultSetAllocator>
        ::UnhashElements(pTVar15);
      }
      puVar4 = &(this->UnlinkAnimLayerTimerMap).field_0xc;
      *(undefined4 *)&(this->UnlinkAnimLayerTimerMap).field_0x8 = 0;
      if (*(int *)puVar4 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)pTVar15,0,(int *)puVar4);
      }
      *(undefined4 *)&(this->UnlinkAnimLayerTimerMap).field_0x34 = 0;
      *(undefined4 *)&(this->UnlinkAnimLayerTimerMap).field_0x30 = 0xffffffff;
      iVar8 = *(int *)&(this->UnlinkAnimLayerTimerMap).field_0x2c;
      *(undefined4 *)&(this->UnlinkAnimLayerTimerMap).field_0x28 = 0;
      if ((iVar8 < 0) || (0x80 < iVar8)) {
        *(undefined4 *)&(this->UnlinkAnimLayerTimerMap).field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)
                   &(this->UnlinkAnimLayerTimerMap).field_0x10,0);
      }
      if (bVar7) {
        *(undefined4 *)&(this->UnlinkAnimLayerTimerMap).field_0x48 = 1;
        TSet<TTuple<enum_EDS_CharState,FTimerHandle>,TDefaultMapHashableKeyFuncs<enum_EDS_CharState,FTimerHandle,0>,FDefaultSetAllocator>
        ::Rehash(pTVar15);
      }
    }
  }
  return;
  while (iVar8 = *(int *)(*(longlong *)pTVar15 + 0x10 + (longlong)iVar8 * 0x18), iVar8 != -1) {
LAB_14b89ce10:
    if (*(EDS_CharState *)(*(longlong *)pTVar15 + (longlong)iVar8 * 0x18) == EVar3) {
      pFVar9 = TMapBase<enum_EDS_CharState,FTimerHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CharState,FTimerHandle,0>_>
               ::FindChecked(pTVar15,EVar3);
      local_c8.Handle = pFVar9->Handle;
      this_01 = FDS_TimerManager::Get((UObject *)0x0);
      pFVar10 = FTimerManager::FindTimer(this_01,&local_c8);
      if (pFVar10 != (FTimerData *)0x0) {
        FTimerManager::InternalClearTimer(this_01,local_c8);
      }
      local_c8.Handle = 0;
      local_88 = EVar3;
      if (*(int *)&(this->UnlinkAnimLayerTimerMap).field_0x8 !=
          *(int *)&(this->UnlinkAnimLayerTimerMap).field_0x34) {
        TSet<TTuple<enum_EDS_CharState,FTimerHandle>,TDefaultMapHashableKeyFuncs<enum_EDS_CharState,FTimerHandle,0>,FDefaultSetAllocator>
        ::RemoveImpl<enum_EDS_CharState>(pTVar15,uVar18,&local_88);
      }
      break;
    }
  }
LAB_14b89ce89:
  this_02 = (USkeletalMeshComponent *)FWeakObjectPtr::Get(&local_res20);
  local_80 = (UObject *)pEVar17[2];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_80 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_80);
  }
  USkeletalMeshComponent::UnlinkAnimClassLayers(this_02,(TSubclassOf<UAnimInstance>)&local_80);
  uVar14 = local_res10;
LAB_14b89cec1:
  TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  goto LAB_14b89cd20;
}

// UnlinkAnimLayer @ 14b89e240

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
UDS_CharacterAnimBase::UnlinkAnimLayer
          (UDS_CharacterAnimBase *this,EDS_CharState param_1,FDS_AnimLayerDescriptor *param_2)

{
  UClass *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  FTimerManager *this_00;
  ForAnyElementType FVar6;
  ulonglong uVar7;
  int iVar8;
  EDS_CharState local_res10;
  undefined1 auStackY_108 [32];
  ForAnyElementType local_d0;
  int local_c8;
  FDelegateAllocation local_c0;
  FTimerHandle local_b0;
  TPairInitializer<EDS_CharState_&,FTimerHandle_&> local_a8;
  EDS_CharState *local_98;
  FTimerHandle *local_90;
  undefined1 local_88;
  FDelegateAllocation *local_80;
  FScriptContainerElement *local_78;
  int local_70;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_108;
  if (param_2->bAlwaysLinked == true) {
    return;
  }
  local_88 = 0;
  local_80 = &local_c0;
  local_b0.Handle = 0;
  local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_c0.DelegateSize = 0;
  local_res10 = param_1;
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,&local_c0);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__W4EDS_CharState__V__TSubclassOf_VUAnimInstance______6B_
    ;
    puVar4[1] = local_res10;
    pUVar1 = (param_2->LayerClass).Class.field0_0x0.DebugPtr;
    puVar4[2] = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[3] = uVar5;
    *puVar4 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_CharacterAnimBase____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__W4EDS_CharState__V__TSubclassOf_VUAnimInstance______6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_CharacterAnimBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar4[4] = 0;
    local_a8.Value = (FTimerHandle *)this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_CharacterAnimBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 4),(FObjectPtr)&local_a8.Value);
    puVar4[5] = OnUnlinkAnimLayerTimerEnd;
  }
  this_00 = FDS_TimerManager::Get((UObject *)0x0);
  local_78 = (FScriptContainerElement *)0x0;
  local_c8 = 0;
  local_70 = 0;
  local_d0.Data = (FScriptContainerElement *)0x0;
  FVar6.Data = (FScriptContainerElement *)0x0;
  iVar8 = 0;
  if ((local_c0.DelegateSize != 0) &&
     (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (**(code **)(*(longlong *)local_c0.DelegateAllocator + 0x48))
              (local_c0.DelegateAllocator,&local_d0);
    FVar6.Data = local_d0.Data;
    iVar8 = local_c8;
  }
  local_c8 = 0;
  local_d0.Data = (FScriptContainerElement *)0x0;
  if (local_70 == 0) {
LAB_14b89e3d7:
    if (local_78 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78);
    }
  }
  else if (local_78 != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_78)(local_78);
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_78,0,0,0x10);
    local_70 = 0;
    goto LAB_14b89e3d7;
  }
  local_78 = FVar6.Data;
  local_70 = iVar8;
  if (local_c8 == 0) {
LAB_14b89e421:
    if (local_d0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data);
    }
  }
  else if (local_d0.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_d0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_d0,0,0,0x10);
    local_c8 = 0;
    goto LAB_14b89e421;
  }
  local_48 = 1;
  FTimerManager::InternalSetTimer
            (this_00,&local_b0,(FTimerUnifiedDelegate *)&local_78,__real_41200000,false,
             __real_bf800000);
  uVar7 = (ulonglong)local_48;
  if ((3 < local_48) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar7] ==
      UE::Core::Private::
      TDestructorCaller<TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>_>::
      Destruct) {
    if (local_70 != 0) {
      if (local_78 == (FScriptContainerElement *)0x0) goto LAB_14b89e4f4;
      (*(code *)**(undefined8 **)local_78)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_78,0,0,0x10);
      local_70 = 0;
    }
    if (local_78 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78);
    }
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar7])(&local_78);
  }
LAB_14b89e4f4:
  local_98 = &local_res10;
  local_90 = &local_b0;
  TSet<TTuple<enum_EDS_CharState,FTimerHandle>,TDefaultMapHashableKeyFuncs<enum_EDS_CharState,FTimerHandle,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_CharState_&,FTimerHandle_&>_>
            (&this->UnlinkAnimLayerTimerMap,&local_a8,(bool *)&local_98);
  if ((local_c0.DelegateSize != 0) &&
     (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_c0,0,0,0x10);
    local_c0.DelegateSize = 0;
  }
  if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_c0.DelegateAllocator);
  }
  return;
}

// UpdateAccelerationData @ 14b89e930

void __thiscall
UDS_CharacterAnimBase::UpdateAccelerationData(UDS_CharacterAnimBase *this,float param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  EDS_CardinalDirection EVar7;
  TVector<double> *pTVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  uint uVar13;
  uint uVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  undefined8 uVar19;
  double dVar20;
  TVector<double>_u_0 local_68;
  TVector<double> local_50 [3];
  
  pTVar8 = GetCurAcceleration(this,local_50);
  dVar18 = (pTVar8->field0_0x0)._s_0.Y;
  (this->AnimSharedData).Acceleration.field0_0x0._s_0.X = (pTVar8->field0_0x0)._s_0.X;
  (this->AnimSharedData).Acceleration.field0_0x0._s_0.Y = dVar18;
  (this->AnimSharedData).Acceleration.field0_0x0._s_0.Z = (pTVar8->field0_0x0)._s_0.Z;
  local_68._s_0.X = (this->AnimSharedData).Acceleration.field0_0x0._s_0.X;
  local_68._s_0.Y = (this->AnimSharedData).Acceleration.field0_0x0._s_0.Y;
  local_68._s_0.Z = 0.0;
  pTVar8 = UE::Math::TRotator<double>::UnrotateVector
                     (&(this->AnimSharedData).ActorRotation,local_50,
                      (TVector<double> *)&local_68._s_0);
  uVar14 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar11 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar18 = (pTVar8->field0_0x0)._s_0.Y;
  (this->AnimSharedData).LocalAcceleration2D.field0_0x0._s_0.X = (pTVar8->field0_0x0)._s_0.X;
  (this->AnimSharedData).LocalAcceleration2D.field0_0x0._s_0.Y = dVar18;
  (this->AnimSharedData).LocalAcceleration2D.field0_0x0._s_0.Z = (pTVar8->field0_0x0)._s_0.Z;
  dVar18 = __real_3ff0000000000000;
  uVar1 = *(undefined8 *)&(this->AnimSharedData).LocalAcceleration2D.field0_0x0;
  uVar10 = (uint)uVar1 & uVar11;
  uVar13 = (uint)((ulonglong)uVar1 >> 0x20) & uVar14;
  if (((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar13,uVar10) &&
        (double)CONCAT44(uVar13,uVar10) != __real_3f1a36e2e0000000) ||
      (uVar1 = *(undefined8 *)((longlong)&(this->AnimSharedData).LocalAcceleration2D.field0_0x0 + 8)
      , uVar10 = (uint)uVar1 & uVar11, uVar13 = (uint)((ulonglong)uVar1 >> 0x20) & uVar14,
      __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar13,uVar10) &&
      (double)CONCAT44(uVar13,uVar10) != __real_3f1a36e2e0000000)) ||
     (uVar1 = *(undefined8 *)
               ((longlong)&(this->AnimSharedData).LocalAcceleration2D.field0_0x0 + 0x10),
     uVar11 = (uint)uVar1 & uVar11, uVar14 = (uint)((ulonglong)uVar1 >> 0x20) & uVar14,
     __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar14,uVar11) &&
     (double)CONCAT44(uVar14,uVar11) != __real_3f1a36e2e0000000)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  (this->AnimSharedData).bHasAcceleration = bVar6;
  dVar15 = local_68._s_0.Y * local_68._s_0.Y + local_68._s_0.X * local_68._s_0.X +
           local_68._s_0.Z * local_68._s_0.Z;
  uVar19 = local_68._s_0.Z;
  uVar1 = local_68._s_0.X;
  uVar4 = local_68._s_0.Y;
  uVar5 = local_68._s_0.Y;
  if ((dVar15 != dVar18) &&
     (uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
     uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
     uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
     uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
     __real_3e45798ee0000000 <= dVar15)) {
    dVar15 = dVar18 / SQRT(dVar15);
    uVar19 = local_68._s_0.Z * dVar15;
    uVar1 = local_68._s_0.X * dVar15;
    uVar4 = local_68._s_0.Y * dVar15;
    uVar5 = 0.0;
  }
  pTVar8 = &(this->AnimSharedData).PivotDirection2D;
  dVar15 = ((double)uVar1 - (pTVar8->field0_0x0)._s_0.X) * __real_3fe0000000000000 +
           (pTVar8->field0_0x0)._s_0.X;
  dVar20 = ((double)uVar19 - (this->AnimSharedData).PivotDirection2D.field0_0x0._s_0.Z) *
           __real_3fe0000000000000 + (this->AnimSharedData).PivotDirection2D.field0_0x0._s_0.Z;
  dVar3 = ((double)uVar4 - (this->AnimSharedData).PivotDirection2D.field0_0x0._s_0.Y) *
          __real_3fe0000000000000 + (this->AnimSharedData).PivotDirection2D.field0_0x0._s_0.Y;
  auVar17._8_4_ = (int)uVar5;
  auVar17._0_8_ = dVar3;
  auVar17._12_4_ = (int)((ulonglong)uVar5 >> 0x20);
  auVar16._8_8_ = auVar17._8_8_;
  auVar16._0_8_ = dVar3 * dVar3 + dVar15 * dVar15 + dVar20 * dVar20;
  uVar1 = dVar15;
  uVar4 = dVar3;
  uVar5 = dVar20;
  if ((auVar16._0_8_ != dVar18) &&
     (uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
     uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
     uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
     __real_3e45798ee0000000 <= auVar16._0_8_)) {
    auVar16._8_8_ = 0;
    dVar18 = dVar18 / SQRT(auVar16._0_8_);
    uVar1 = dVar15 * dVar18;
    uVar4 = dVar18 * dVar3;
    uVar5 = dVar18 * dVar20;
  }
  auVar2._8_4_ = (int)uVar4;
  auVar2._0_8_ = uVar1;
  auVar2._12_4_ = (int)((ulonglong)uVar4 >> 0x20);
  *(undefined1 (*) [16])&pTVar8->field0_0x0 = auVar2;
  (this->AnimSharedData).PivotDirection2D.field0_0x0._s_0.Z = (double)uVar5;
  fVar12 = UKismetAnimationLibrary::CalculateDirection(pTVar8,&(this->AnimSharedData).ActorRotation)
  ;
  auVar17 = roundps(auVar16,ZEXT416((uint)(fVar12 + __real_3f000000)),1);
  fVar12 = (float)((uint)auVar17._0_4_ & __xmm_7fffffff7fffffff7fffffff7fffffff);
  if (__real_42340000 < fVar12) {
    iVar9 = 0;
    if (fVar12 < __real_43070000) {
      iVar9 = (0.0 < auVar17._0_4_) - 2;
    }
  }
  else {
    iVar9 = -3;
  }
  EVar7 = (EDS_CardinalDirection)-iVar9;
  if (-iVar9 < 0) {
    EVar7 = (EDS_CardinalDirection)iVar9;
  }
  (this->AnimSharedData).CardinalDirectionFromAcceleration = EVar7;
  return;
}

// UpdateEssentialValues @ 14b8a2170

void __thiscall
UDS_CharacterAnimBase::UpdateEssentialValues(UDS_CharacterAnimBase *this,float param_1)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  double dVar10;
  
  dVar3 = (this->AnimSharedData).Velocity.field0_0x0._s_0.Y;
  dVar2 = (this->AnimSharedData).Velocity.field0_0x0._s_0.Z;
  dVar7 = (this->AnimSharedData).VelocityLastFrame.field0_0x0._s_0.Y;
  dVar8 = (this->AnimSharedData).VelocityLastFrame.field0_0x0._s_0.Z;
  dVar10 = (double)param_1;
  if ((double)param_1 <= __real_3f50624dd2f1a9fc) {
    dVar10 = __real_3f50624dd2f1a9fc;
  }
  dVar10 = __real_3ff0000000000000 / dVar10;
  (this->AnimSharedData).VelocityAcceleration.field0_0x0._s_0.X =
       ((this->AnimSharedData).Velocity.field0_0x0._s_0.X -
       (this->AnimSharedData).VelocityLastFrame.field0_0x0._s_0.X) * dVar10;
  dVar2 = (dVar2 - dVar8) * dVar10;
  auVar1._8_4_ = SUB84(dVar2,0);
  auVar1._0_8_ = (dVar3 - dVar7) * dVar10;
  auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(this->AnimSharedData).VelocityAcceleration.field0_0x0 + 8) =
       auVar1;
  dVar3 = (this->AnimSharedData).Velocity.field0_0x0._s_0.Y;
  dVar10 = (this->AnimSharedData).Velocity.field0_0x0._s_0.Z;
  (this->AnimSharedData).VelocityLastFrame.field0_0x0._s_0.X =
       (this->AnimSharedData).Velocity.field0_0x0._s_0.X;
  (this->AnimSharedData).VelocityLastFrame.field0_0x0._s_0.Y = dVar3;
  bVar9 = __real_40a00000 < (this->AnimSharedData).MoveSpeed;
  (this->AnimSharedData).VelocityLastFrame.field0_0x0._s_0.Z = dVar10;
  if (bVar9) {
    uVar4 = *(undefined4 *)((longlong)&(this->AnimSharedData).Velocity.field0_0x0 + 4);
    uVar5 = *(undefined4 *)((longlong)&(this->AnimSharedData).Velocity.field0_0x0 + 8);
    uVar6 = *(undefined4 *)((longlong)&(this->AnimSharedData).Velocity.field0_0x0 + 0xc);
    *(undefined4 *)&(this->AnimSharedData).LastNonZeroVelocity.field0_0x0 =
         *(undefined4 *)&(this->AnimSharedData).Velocity.field0_0x0;
    *(undefined4 *)((longlong)&(this->AnimSharedData).LastNonZeroVelocity.field0_0x0 + 4) = uVar4;
    *(undefined4 *)((longlong)&(this->AnimSharedData).LastNonZeroVelocity.field0_0x0 + 8) = uVar5;
    *(undefined4 *)((longlong)&(this->AnimSharedData).LastNonZeroVelocity.field0_0x0 + 0xc) = uVar6;
    (this->AnimSharedData).LastNonZeroVelocity.field0_0x0._s_0.Z = dVar10;
  }
  (this->AnimSharedData).bIsMovingLastFrame = (this->AnimSharedData).bIsMovingCurrentFrame;
  bVar9 = (bool)(**(code **)(*(longlong *)this + 0x400))();
  (this->AnimSharedData).bIsMovingCurrentFrame = bVar9;
  return;
}

// UpdateLocomotionStateTick @ 14b8a2900

void __thiscall
UDS_CharacterAnimBase::UpdateLocomotionStateTick(UDS_CharacterAnimBase *this,float param_1)

{
  EDS_MoveMode EVar1;
  UDS_EntityData *this_00;
  
  if (this->LocomotionState == Default) {
    this_00 = (UDS_EntityData *)FWeakObjectPtr::Get(&(this->EntityData).WeakPtr);
    EVar1 = UDS_EntityData::GetMoveMode(this_00);
    this->MoveMode = EVar1;
  }
  return;
}

// UpdateLookAt @ 14b8a2940

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDS_CharacterAnimBase::UpdateLookAt(UDS_CharacterAnimBase *this,float param_1)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  EDS_LookAtType EVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  UObject *pUVar11;
  TVector<double>_u_0 *pTVar12;
  double *pdVar13;
  double *pdVar14;
  float fVar15;
  uint uVar16;
  uint uVar17;
  double dVar18;
  double dVar19;
  TVector<double>_u_0 local_c8;
  TVector<double>_u_0 local_b0 [7];
  
  bVar10 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0x438);
  if (bVar10) {
    pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x438);
    EVar4 = pUVar11[6].field_0x20;
    this->LookAtType = EVar4;
    this->bIsLookAt = EVar4 != None;
    if (EVar4 == None) {
      if (0.0 < this->LookAtAlpha) {
        pUVar11 = FWeakObjectPtr::Get(&(this->CommonSetting).WeakPtr);
        fVar15 = this->LookAtAlpha - param_1 * *(float *)(pUVar11 + 5);
        if (__real_3f800000 <= fVar15) {
          fVar15 = __real_3f800000;
        }
        if (fVar15 <= 0.0) {
          fVar15 = 0.0;
        }
        this->LookAtAlpha = fVar15;
      }
    }
    else {
      pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x428);
      if (*(USceneComponent **)(pUVar11 + 0xb) == (USceneComponent *)0x0) {
        pTVar12 = local_b0;
        local_b0[0]._s_0.X = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
        local_b0[0]._s_0.Y = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
        local_b0[0]._s_0.Z = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
      }
      else {
        pTVar12 = &USceneComponent::GetForwardVector
                             (*(USceneComponent **)(pUVar11 + 0xb),
                              (TVector<double> *)&local_b0[0]._s_0)->field0_0x0;
      }
      dVar3 = __real_4059000000000000;
      dVar7 = (((TVector<double>_u_0 *)&(pTVar12->_s_0).X)->_s_0).X;
      dVar8 = (pTVar12->_s_0).Y;
      uVar1 = *(undefined8 *)&(this->LookAtLocation).field0_0x0;
      uVar16 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar17 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      dVar2 = (pTVar12->_s_0).Z;
      dVar5 = (this->AnimSharedData).ActorLocation.field0_0x0._s_0.X +
              (this->HeadOffset).field0_0x0._s_0.X;
      dVar6 = (this->HeadOffset).field0_0x0._s_0.Y +
              (this->AnimSharedData).ActorLocation.field0_0x0._s_0.Y;
      dVar19 = (this->HeadOffset).field0_0x0._s_0.Z +
               (this->AnimSharedData).ActorLocation.field0_0x0._s_0.Z;
      if ((((double)CONCAT44(uVar17,uVar16) < __real_3f1a36e2e0000000 ||
            (double)CONCAT44(uVar17,uVar16) == __real_3f1a36e2e0000000) &&
          (pdVar13 = &(this->LookAtLocation).field0_0x0._s_0.Y, dVar18 = *pdVar13,
          uVar16 = SUB84(dVar18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
          uVar17 = (uint)((ulonglong)dVar18 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
          (double)CONCAT44(uVar17,uVar16) < __real_3f1a36e2e0000000 ||
          (double)CONCAT44(uVar17,uVar16) == __real_3f1a36e2e0000000)) &&
         (pdVar14 = &(this->LookAtLocation).field0_0x0._s_0.Z, dVar18 = *pdVar14,
         uVar16 = SUB84(dVar18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
         uVar17 = (uint)((ulonglong)dVar18 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
         (double)CONCAT44(uVar17,uVar16) < __real_3f1a36e2e0000000 ||
         (double)CONCAT44(uVar17,uVar16) == __real_3f1a36e2e0000000)) {
        dVar18 = dVar2 * __real_4059000000000000;
        (this->LookAtLocation).field0_0x0._s_0.X = dVar7 * __real_4059000000000000 + dVar5;
        *pdVar13 = dVar8 * dVar3 + dVar6;
        *pdVar14 = dVar18 + dVar19;
      }
      pdVar14 = &(this->LookAtLocation).field0_0x0._s_0.Z;
      pdVar13 = &(this->LookAtLocation).field0_0x0._s_0.Y;
      local_b0[0]._16_8_ = dVar2;
      pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x438);
      dVar18 = *(double *)(pUVar11 + 7);
      dVar9 = *(double *)&pUVar11[7].field_0x8;
      dVar3 = *(double *)&pUVar11[7].field_0x10;
      local_c8._s_0.X = dVar18 - dVar5;
      local_c8._s_0.Y = dVar9 - dVar6;
      local_c8._s_0.Z = dVar3 - dVar19;
      local_b0[0]._16_8_ = dVar3;
      UE::Math::TVector<double>::GetSafeNormal
                ((TVector<double> *)&local_c8._s_0,(TVector<double> *)&local_b0[0]._s_0,
                 __real_3e45798ee0000000,&UE::Math::TVector<double>::ZeroVector);
      fVar15 = (float)((double)local_b0[0]._0_8_ * dVar7 + (double)local_b0[0]._8_8_ * dVar8 +
                      (double)local_b0[0]._16_8_ * dVar2);
      dVar2 = __real_bff0000000000000;
      if ((__real_bf800000 <= fVar15) && (dVar2 = (double)fVar15, __real_3ff0000000000000 <= dVar2))
      {
        dVar2 = __real_3ff0000000000000;
      }
      dVar2 = acos(dVar2);
      if (__real_42b40000 <= (float)(dVar2 * __real_404ca5dc1a63c1f8)) {
        pUVar11 = FWeakObjectPtr::Get(&(this->CommonSetting).WeakPtr);
        fVar15 = this->LookAtAlpha - param_1 * *(float *)(pUVar11 + 5);
      }
      else {
        pUVar11 = FWeakObjectPtr::Get(&(this->CommonSetting).WeakPtr);
        dVar2 = (this->LookAtLocation).field0_0x0._s_0.X;
        dVar5 = *pdVar13;
        dVar6 = *pdVar14;
        dVar19 = (double)(param_1 * *(float *)&pUVar11[4].field_0x1c);
        (this->LookAtLocation).field0_0x0._s_0.X = (dVar18 - dVar2) * dVar19 + dVar2;
        *pdVar13 = (dVar9 - dVar5) * dVar19 + dVar5;
        *pdVar14 = (dVar3 - dVar6) * dVar19 + dVar6;
        pUVar11 = FWeakObjectPtr::Get(&(this->CommonSetting).WeakPtr);
        fVar15 = param_1 * *(float *)&pUVar11[4].field_0x24 + this->LookAtAlpha;
      }
      this->LookAtAlpha = fVar15;
      if (__real_3f800000 <= fVar15) {
        fVar15 = __real_3f800000;
      }
      if (fVar15 <= 0.0) {
        fVar15 = 0.0;
      }
      this->LookAtAlpha = fVar15;
    }
  }
  return;
}

// UpdateMoveSpeedData @ 14b8a3370

void __thiscall
UDS_CharacterAnimBase::UpdateMoveSpeedData(UDS_CharacterAnimBase *this,float param_1)

{
  double dVar1;
  double dVar2;
  float fVar3;
  UDS_MovementCore *pUVar4;
  TVector<double> *pTVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  TVector<double> local_28;
  
  pUVar4 = (UDS_MovementCore *)FWeakObjectPtr::Get(&(this->OwnerEntityMovementCore).WeakPtr);
  pTVar5 = UDS_MovementCore::GetVelocity(pUVar4,&local_28);
  dVar1 = (pTVar5->field0_0x0)._s_0.Y;
  dVar2 = (pTVar5->field0_0x0)._s_0.X;
  auVar7._0_8_ = dVar2 * dVar2;
  auVar7._8_8_ = 0;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = dVar1 * dVar1 + auVar7._0_8_;
  auVar8 = sqrtpd(auVar7,auVar8);
  (this->AnimSharedData).MoveSpeed = (float)auVar8._0_8_;
  pUVar4 = (UDS_MovementCore *)FWeakObjectPtr::Get(&(this->OwnerEntityMovementCore).WeakPtr);
  fVar6 = UDS_MovementCore::GetMaxMoveSpeed(pUVar4);
  (this->AnimSharedData).MaxMoveSpeed = fVar6;
  fVar3 = __real_322bcc77;
  fVar9 = (float)((uint)fVar6 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  (this->AnimSharedData).MoveSpeedRatio = 0.0;
  if (fVar3 < fVar9) {
    (this->AnimSharedData).MoveSpeedRatio = (this->AnimSharedData).MoveSpeed / fVar6;
  }
  return;
}

// UpdateTransformData @ 14b8a3a30

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
UDS_CharacterAnimBase::UpdateTransformData(UDS_CharacterAnimBase *this,float param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  UObject *pUVar5;
  AActor *this_00;
  TRotator<double> *pTVar6;
  uint uVar7;
  uint uVar10;
  double dVar8;
  undefined1 auVar9 [16];
  undefined8 uVar11;
  double dVar12;
  undefined8 uVar14;
  undefined1 auVar13 [16];
  undefined8 uVar15;
  TRotator<double> local_30;
  
  uVar1 = *(undefined8 *)((longlong)&(this->AnimSharedData).ActorLocation.field0_0x0 + 0x10);
  auVar9 = *(undefined1 (*) [16])&(this->AnimSharedData).ActorLocation.field0_0x0;
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x428);
  lVar2 = *(longlong *)(pUVar5 + 0xb);
  uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (lVar2 != 0) {
    uVar15 = *(double *)(lVar2 + 0x220);
    uVar11 = *(double *)(lVar2 + 0x210);
    uVar14 = *(double *)(lVar2 + 0x218);
  }
  (this->AnimSharedData).ActorLocation.field0_0x0._s_0.X = (double)uVar11;
  (this->AnimSharedData).ActorLocation.field0_0x0._s_0.Y = (double)uVar14;
  (this->AnimSharedData).ActorLocation.field0_0x0._s_0.Z = (double)uVar15;
  this_00 = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x428);
  pTVar6 = AActor::GetActorRotation(this_00,&local_30);
  dVar8 = pTVar6->Yaw;
  (this->AnimSharedData).ActorRotation.Pitch = pTVar6->Pitch;
  (this->AnimSharedData).ActorRotation.Yaw = dVar8;
  (this->AnimSharedData).ActorRotation.Roll = pTVar6->Roll;
  pUVar5 = FWeakObjectPtr::Get(&(this->OwnerEntityMovementCore).WeakPtr);
  dVar8 = __real_3f1a36e2e0000000;
  uVar4 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar3 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar7 = auVar9._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar10 = auVar9._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  (this->AnimSharedData).RotationVelocity = *(float *)(pUVar5 + 0xb);
  if (((dVar8 < (double)CONCAT44(uVar10,uVar7)) ||
      (dVar8 < (double)CONCAT44(auVar9._12_4_ & uVar4,auVar9._8_4_ & uVar3))) ||
     (dVar8 < (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) & uVar4,(uint)uVar1 & uVar3))) {
    dVar12 = (this->AnimSharedData).ActorLocation.field0_0x0._s_0.X - auVar9._0_8_;
    dVar8 = (this->AnimSharedData).ActorLocation.field0_0x0._s_0.Y - auVar9._8_8_;
    auVar9._0_8_ = dVar8 * dVar8;
    auVar9._8_8_ = 0;
    auVar13._0_8_ = dVar12 * dVar12 + auVar9._0_8_;
    auVar13._8_8_ = 0;
    auVar9 = sqrtpd(auVar9,auVar13);
    (this->AnimSharedData).DisplacementSinceLastUpdate = (float)auVar9._0_8_;
  }
  return;
}

// UpdateVelocityData @ 14b8a3b70

void __thiscall UDS_CharacterAnimBase::UpdateVelocityData(UDS_CharacterAnimBase *this,float param_1)

{
  double dVar1;
  double dVar2;
  UDS_MovementCore *this_00;
  TVector<double> *pTVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  TVector<double>_u_0 local_38;
  TVector<double> local_20;
  
  this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get(&(this->OwnerEntityMovementCore).WeakPtr);
  pTVar3 = UDS_MovementCore::GetVelocity(this_00,&local_20);
  dVar1 = (pTVar3->field0_0x0)._s_0.Y;
  (this->AnimSharedData).Velocity.field0_0x0._s_0.X = (pTVar3->field0_0x0)._s_0.X;
  (this->AnimSharedData).Velocity.field0_0x0._s_0.Y = dVar1;
  (this->AnimSharedData).Velocity.field0_0x0._s_0.Z = (pTVar3->field0_0x0)._s_0.Z;
  local_38._s_0.X = (this->AnimSharedData).Velocity.field0_0x0._s_0.X;
  local_38._s_0.Y = (this->AnimSharedData).Velocity.field0_0x0._s_0.Y;
  local_38._s_0.Z = 0.0;
  pTVar3 = UE::Math::TRotator<double>::UnrotateVector
                     (&(this->AnimSharedData).ActorRotation,&local_20,
                      (TVector<double> *)&local_38._s_0);
  dVar1 = (pTVar3->field0_0x0)._s_0.Y;
  (this->AnimSharedData).LocalVelocity2D.field0_0x0._s_0.X = (pTVar3->field0_0x0)._s_0.X;
  (this->AnimSharedData).LocalVelocity2D.field0_0x0._s_0.Y = dVar1;
  (this->AnimSharedData).LocalVelocity2D.field0_0x0._s_0.Z = (pTVar3->field0_0x0)._s_0.Z;
  dVar1 = (this->AnimSharedData).LocalVelocity2D.field0_0x0._s_0.X;
  dVar2 = (this->AnimSharedData).LocalVelocity2D.field0_0x0._s_0.Y;
  auVar5._0_8_ = dVar1 * dVar1;
  auVar5._8_8_ = 0;
  auVar6._0_8_ = dVar2 * dVar2 + auVar5._0_8_;
  auVar6._8_8_ = 0;
  auVar5 = sqrtpd(auVar5,auVar6);
  (this->AnimSharedData).LocalVelocity2D_Size = (float)auVar5._0_8_;
  fVar4 = UKismetAnimationLibrary::CalculateDirection
                    ((TVector<double> *)&local_38._s_0,&(this->AnimSharedData).ActorRotation);
  (this->AnimSharedData).DirectionAngleFromVelocity = fVar4;
  auVar5 = roundps(auVar6,ZEXT416((uint)(fVar4 + __real_3f000000)),1);
  fVar4 = (float)((uint)auVar5._0_4_ & __xmm_7fffffff7fffffff7fffffff7fffffff);
  if (fVar4 <= __real_42340000) {
    (this->AnimSharedData).CardinalDirectionFromVelocity = Forward;
    return;
  }
  if (__real_43070000 <= fVar4) {
    (this->AnimSharedData).CardinalDirectionFromVelocity = Backward;
    return;
  }
  (this->AnimSharedData).CardinalDirectionFromVelocity = (0.0 < auVar5._0_4_) + Left;
  return;
}

