// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 48

// StaticClass @ 14791b9a0

UClass * __cdecl UProjectileMovementComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProjectileMovementComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ProjectileMovementComponent",
               &Z_Registration_Info_UClass_UProjectileMovementComponent.InnerSingleton,
               StaticRegisterNativesUProjectileMovementComponent,0x290,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UProjectileMovementComponent>,
               InternalVTableHelperCtorCaller<UProjectileMovementComponent>,local_res8,
               UMovementComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProjectileMovementComponent.InnerSingleton;
}

// UProjectileMovementComponent @ 147929ec0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UProjectileMovementComponent * __thiscall
UProjectileMovementComponent::UProjectileMovementComponent
          (UProjectileMovementComponent *this,FVTableHelper *param_1)

{
  UMovementComponent::UMovementComponent((UMovementComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined8 *)&this->OnProjectileBounce = 0;
  *(undefined8 *)&(this->OnProjectileBounce).field_0x8 = 0;
  *(undefined8 *)&(this->OnProjectileBounce).field_0x10 = 0;
  *(undefined8 *)&this->OnProjectileStop = 0;
  *(undefined8 *)&(this->OnProjectileStop).field_0x8 = 0;
  *(undefined8 *)&(this->OnProjectileStop).field_0x10 = 0;
  (this->HomingTargetComponent).WeakPtr = (FWeakObjectPtr)0x0;
  (this->InterpolatedComponentPtr).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UProjectileMovementComponent @ 147929f40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UProjectileMovementComponent * __thiscall
UProjectileMovementComponent::UProjectileMovementComponent
          (UProjectileMovementComponent *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  
  UMovementComponent::UMovementComponent((UMovementComponent *)this,param_1);
  this->bSimulationUseScopedMovement = '\0';
  this->bInterpolationUseScopedMovement = '\x01';
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined8 *)&this->OnProjectileBounce = 0;
  *(undefined8 *)&(this->OnProjectileBounce).field_0x8 = 0;
  *(undefined8 *)&(this->OnProjectileBounce).field_0x10 = 0;
  *(undefined8 *)&this->OnProjectileStop = 0;
  *(undefined8 *)&(this->OnProjectileStop).field_0x8 = 0;
  *(undefined8 *)&(this->OnProjectileStop).field_0x10 = 0;
  (this->HomingTargetComponent).WeakPtr = (FWeakObjectPtr)0x0;
  (this->InterpolatedComponentPtr).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  this->InterpLocationTime = 0.1;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  this->InterpRotationTime = 0.05;
  this->InterpLocationMaxLagDistance = 300.0;
  puVar2 = &this->field_0x130;
  this->bInitialVelocityInLocalSpace = '\x01';
  this->bSweepCollision = '\x01';
  this->bSimulationEnabled = '\x01';
  this->bForceSubStepping = '\0';
  this->InterpLocationSnapToTargetDistance = 500.0;
  this->ThrottleInterpolationThresholdNotRenderedShortTime = 0.2;
  this->ThrottleInterpolationThresholdNotRenderedLongTime = 1.0;
  this->ThrottleInterpolationFramesSinceInterp = 0;
  this->ThrottleInterpolationSkipFramesRecent = 1;
  this->ThrottleInterpolationSkipFramesNotRecent = 2;
  *(undefined8 *)&this->field_0xd8 = 0x3ff0000000000000;
  *(undefined8 *)&this->field_0xe0 = 0;
  *(undefined8 *)&this->field_0xe8 = 0;
  this->field_0x9b = this->field_0x9b | 1;
  this->ProjectileGravityScale = 1.0;
  puVar2 = &this->field_0x131;
  this->bBounceAngleAffectsFriction = '\0';
  this->bInterpolationComplete = '\x01';
  this->bThrottleInterpolation = '\0';
  this->bInterpRotation = '\0';
  this->bInterpMovement = '\0';
  this->bIsSliding = '\0';
  this->Bounciness = 0.6;
  this->Friction = 0.2;
  this->BounceVelocityStopSimulatingThreshold = 5.0;
  this->MinFrictionFraction = 0.0;
  this->HomingAccelerationMagnitude = 0.0;
  this->field_0x120 = this->field_0x120 & 0x7e;
  this->MaxSimulationTimeStep = 0.05;
  this->MaxSimulationIterations = 4;
  this->BounceAdditionalIterations = 1;
  this->PreviousHitTime = 1.0;
  uVar3 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
  (this->PreviousHitNormal).field0_0x0._s_0.X =
       UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
  (this->PreviousHitNormal).field0_0x0._s_0.Y = (double)uVar3;
  (this->PreviousHitNormal).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
  return this;
}

// ~UProjectileMovementComponent @ 14792cd70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UProjectileMovementComponent::~UProjectileMovementComponent(UProjectileMovementComponent *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  pvVar1 = *(void **)&(this->OnProjectileStop).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnProjectileStop);
  pvVar1 = *(void **)&(this->OnProjectileBounce).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnProjectileBounce);
  UMovementComponent::~UMovementComponent((UMovementComponent *)this);
  return;
}

// AddForce @ 14792f9b0

void __thiscall
UProjectileMovementComponent::AddForce(UProjectileMovementComponent *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  dVar2 = (this->PendingForce).field0_0x0._s_0.Y;
  (this->PendingForce).field0_0x0._s_0.X =
       (param_1->field0_0x0)._s_0.X + (this->PendingForce).field0_0x0._s_0.X;
  dVar3 = (param_1->field0_0x0)._s_0.Z;
  dVar4 = (this->PendingForce).field0_0x0._s_0.Z;
  (this->PendingForce).field0_0x0._s_0.Y = dVar1 + dVar2;
  (this->PendingForce).field0_0x0._s_0.Z = dVar3 + dVar4;
  return;
}

// CheckStillInWorld @ 147938eb0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UProjectileMovementComponent::CheckStillInWorld(UProjectileMovementComponent *this)

{
  int iVar1;
  AActor *this_00;
  USceneComponent *pUVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  UWorld *this_01;
  AWorldSettings *pAVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  UObject *pUVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 local_198 [16];
  double local_188;
  FName local_180 [3];
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  FScriptContainerElement *local_158;
  double dStack_150;
  double local_148;
  undefined1 local_138 [4];
  undefined4 local_134;
  undefined4 local_94;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  if (*(longlong *)&this->field_0xc0 == 0) {
    return false;
  }
  this_01 = *(UWorld **)&this->field_0xb0;
  if ((this_01 == (UWorld *)0x0) &&
     (this_01 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
     this_01 == (UWorld *)0x0)) {
    return false;
  }
  pAVar7 = UWorld::GetWorldSettings(this_01,true,true);
  if (pAVar7->bEnableWorldBoundsChecks == '\0') {
    return true;
  }
  this_00 = *(AActor **)(*(longlong *)&this->field_0xc0 + 0xa8);
  if (this_00 == (AActor *)0x0) {
    return false;
  }
  if (((uint)this_00->_padding_ >> 0x1e & 1) != 0) {
    return false;
  }
  pUVar2 = (this_00->RootComponent).field0_0x0.DebugPtr;
  if (pUVar2 == (USceneComponent *)0x0) {
    local_198._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_198._8_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar11 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
    uVar12 = (undefined4)
             ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
  }
  else {
    local_198._0_8_ = (pUVar2->ComponentToWorld).Translation.XY.m128d_f64[0];
    local_198._8_8_ = (pUVar2->ComponentToWorld).Translation.XY.m128d_f64[1];
    local_148 = (pUVar2->ComponentToWorld).Translation.ZW.m128d_f64[0];
    uVar11 = SUB84(local_148,0);
    uVar12 = (undefined4)((ulonglong)local_148 >> 0x20);
    local_158 = (FScriptContainerElement *)local_198._0_8_;
    dStack_150 = (double)local_198._8_8_;
  }
  local_188 = (double)CONCAT44(uVar12,uVar11);
  if ((double)pAVar7->KillZ <= local_188) {
    lVar3 = *(longlong *)&this->field_0xc0;
    if (lVar3 == 0) {
      return true;
    }
    if ((*(byte *)(lVar3 + 0x98) & 1) == 0) {
      return true;
    }
    if ((((__real_c290000000000000 <= *(double *)(lVar3 + 0x110) - *(double *)(lVar3 + 0x128)) &&
         (*(double *)(lVar3 + 0x110) + *(double *)(lVar3 + 0x128) <= __real_4290000000000000)) &&
        (__real_c290000000000000 <= *(double *)(lVar3 + 0x118) - *(double *)(lVar3 + 0x130))) &&
       (((*(double *)(lVar3 + 0x118) + *(double *)(lVar3 + 0x130) <= __real_4290000000000000 &&
         (__real_c290000000000000 <= *(double *)(lVar3 + 0x120) - *(double *)(lVar3 + 0x138))) &&
        (*(double *)(lVar3 + 0x120) + *(double *)(lVar3 + 0x138) <= __real_4290000000000000)))) {
      return true;
    }
    if (2 < (byte)LogProjectileMovement._0_1_) {
      local_180[0] = (FName)this_00->_padding_;
      ::FName::ToString(local_180,(FString *)local_198);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogProjectileMovement);
      if ((FScriptContainerElement *)local_198._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_198._0_8_);
      }
    }
    (**(code **)(this_00->_padding_ + 0x668))(this_00);
    AActor::SetActorEnableCollision(this_00,false);
    memset(local_138,0,0x100);
    uStack_160 = 0xffffffff;
    local_80 = 0;
    uStack_78 = 0;
    local_168 = 0;
    uStack_15c = 0;
    local_94 = 0xffffffff;
    local_134 = 0x3f800000;
    local_70 = 0;
    uStack_6c = 0;
    uStack_68 = 0xffffffff;
    uStack_64 = 0;
    (**(code **)(*(longlong *)this + 0x618))(this,local_138);
    return false;
  }
  pUVar9 = (pAVar7->KillZDamageType).Class.field0_0x0.DebugPtr;
  if ((pUVar9 != (UClass *)0x0) &&
     (pUVar8 = Z_Construct_UClass_UDamageType_NoRegister(), pUVar8 != (UClass *)0x0)) {
    iVar1 = (int)pUVar8->_padding_;
    if (((int)pUVar9->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar1 * 8) != &pUVar8->_padding_)
       ) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((bVar5) &&
       (pUVar9 = (pAVar7->KillZDamageType).Class.field0_0x0.DebugPtr, pUVar9 != (UClass *)0x0)) {
      pUVar8 = Z_Construct_UClass_UDamageType_NoRegister();
      if (pUVar8 == (UClass *)0x0) {
LAB_14793903a:
        pUVar9 = (UClass *)0x0;
      }
      else {
        iVar1 = (int)pUVar8->_padding_;
        if (((int)pUVar9->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar8->_padding_)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (!bVar5) goto LAB_14793903a;
        pUVar9 = (pAVar7->KillZDamageType).Class.field0_0x0.DebugPtr;
      }
      if ((pUVar9->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar9);
      }
      pUVar10 = (pUVar9->ClassDefaultObject).field0_0x0.DebugPtr;
      pUVar9 = Z_Construct_UClass_UDamageType_NoRegister();
      iVar1 = (int)pUVar9->_padding_;
      if (((*(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38) < iVar1) ||
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
           &pUVar9->_padding_)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ret->IsA(T::StaticClass())",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                             ,0x1181,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      goto LAB_1479390c1;
    }
  }
  pUVar9 = Z_Construct_UClass_UDamageType_NoRegister();
  if ((pUVar9->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar9);
  }
  pUVar10 = (pUVar9->ClassDefaultObject).field0_0x0.DebugPtr;
LAB_1479390c1:
  (**(code **)(this_00->_padding_ + 0x660))(this_00,pUVar10);
  return false;
}

// ClearPendingForce @ 147939b60

void __thiscall
UProjectileMovementComponent::ClearPendingForce(UProjectileMovementComponent *this,bool param_1)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->PendingForce).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PendingForce).field0_0x0._s_0.Y = (double)uVar1;
  (this->PendingForce).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (param_1) {
    (this->PendingForceThisUpdate).field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (this->PendingForceThisUpdate).field0_0x0._s_0.Y = (double)uVar1;
    (this->PendingForceThisUpdate).field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  return;
}

// ComputeAcceleration @ 14793ab40

TVector<double> * __thiscall
UProjectileMovementComponent::ComputeAcceleration
          (UProjectileMovementComponent *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1,float param_2)

{
  double dVar1;
  double dVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  double *pdVar7;
  float fVar8;
  undefined1 local_38 [48];
  
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  lVar4 = *(longlong *)this;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  fVar8 = (float)(**(code **)(lVar4 + 0x4f8))();
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (__return_storage_ptr__->field0_0x0)._s_0.X +
       (this->PendingForceThisUpdate).field0_0x0._s_0.X;
  dVar1 = (this->PendingForceThisUpdate).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       (double)fVar8 + (__return_storage_ptr__->field0_0x0)._s_0.Z +
       (this->PendingForceThisUpdate).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1 + (__return_storage_ptr__->field0_0x0)._s_0.Y;
  if ((bool)this->bIsHomingProjectile) {
    bVar6 = FWeakObjectPtr::IsValid(&(this->HomingTargetComponent).WeakPtr);
    if (bVar6) {
      pdVar7 = (double *)(**(code **)(*(longlong *)this + 0x680))(this,local_38,param_1,param_2);
      dVar1 = pdVar7[1];
      (__return_storage_ptr__->field0_0x0)._s_0.X =
           (__return_storage_ptr__->field0_0x0)._s_0.X + *pdVar7;
      dVar2 = pdVar7[2];
      (__return_storage_ptr__->field0_0x0)._s_0.Y =
           dVar1 + (__return_storage_ptr__->field0_0x0)._s_0.Y;
      (__return_storage_ptr__->field0_0x0)._s_0.Z =
           dVar2 + (__return_storage_ptr__->field0_0x0)._s_0.Z;
    }
  }
  return __return_storage_ptr__;
}

// ComputeBounceResult @ 14793ac40

TVector<double> * __thiscall
UProjectileMovementComponent::ComputeBounceResult
          (UProjectileMovementComponent *this,TVector<double> *__return_storage_ptr__,
          FHitResult *param_1,float param_2,TVector<double> *param_3)

{
  double dVar1;
  TVector<double> *pTVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  float fVar7;
  undefined4 in_XMM3_Db;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double local_b8;
  double local_b0;
  double local_a8;
  TVector<double>_u_0 local_98;
  TVector<double> local_78 [4];
  
  dVar11 = *(double *)&this->field_0xe0;
  dVar10 = *(double *)&this->field_0xe8;
  (__return_storage_ptr__->field0_0x0)._s_0.X = *(double *)&this->field_0xd8;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar11;
  local_98._s_0.X = (double)*(undefined8 *)&param_1->Normal;
  local_98._s_0.Y = (double)*(undefined8 *)&(param_1->Normal).field_0x8;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar10;
  local_98._s_0.Z = (double)*(undefined8 *)&(param_1->Normal).field_0x10;
  (**(code **)(*(longlong *)this + 0x5e8))(this,&local_b8,&local_98,CONCAT44(in_XMM3_Db,param_2));
  dVar10 = (__return_storage_ptr__->field0_0x0)._s_0.X;
  dVar11 = (__return_storage_ptr__->field0_0x0)._s_0.Y;
  fVar3 = (float)(dVar11 * local_b0 + dVar10 * local_b8 +
                 (__return_storage_ptr__->field0_0x0)._s_0.Z * local_a8);
  if (fVar3 <= 0.0) {
    dVar8 = (double)(float)((uint)fVar3 ^ __xmm_80000000800000008000000080000000);
    dVar10 = dVar8 * local_b8 + dVar10;
    dVar11 = dVar8 * local_b0 + dVar11;
    dVar1 = dVar8 * local_a8 + (__return_storage_ptr__->field0_0x0)._s_0.Z;
    if (this->bBounceAngleAffectsFriction == '\0' && this->bIsSliding == '\0') {
      dVar9 = (double)this->Friction;
    }
    else {
      auVar4._0_8_ = dVar10 * dVar10;
      auVar4._8_8_ = 0;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = dVar11 * dVar11 + auVar4._0_8_ + dVar1 * dVar1;
      auVar5 = sqrtpd(auVar4,auVar5);
      dVar9 = dVar8 / auVar5._0_8_;
      if (__real_3ff0000000000000 <= dVar9) {
        dVar9 = __real_3ff0000000000000;
      }
      if (dVar9 <= (double)this->MinFrictionFraction) {
        dVar9 = (double)this->MinFrictionFraction;
      }
      dVar9 = dVar9 * (double)this->Friction;
    }
    fVar3 = this->Bounciness;
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    fVar7 = __real_3f800000 - (float)dVar9;
    if (__real_3f800000 <= __real_3f800000 - (float)dVar9) {
      fVar7 = __real_3f800000;
    }
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    dVar6 = (double)fVar7;
    dVar9 = (double)fVar3;
    local_98._s_0.X = dVar10 * dVar6 + dVar9 * dVar8 * local_b8;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar11 * dVar6 + dVar9 * dVar8 * local_b0;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1 * dVar6 + dVar9 * dVar8 * local_a8;
    local_98._s_0.Y =
         (double)SUB128(*(undefined1 (*) [12])((longlong)&__return_storage_ptr__->field0_0x0 + 4),4)
    ;
    (__return_storage_ptr__->field0_0x0)._s_0.X = local_98._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = local_98._s_0.Y;
    local_98._s_0.Z = (__return_storage_ptr__->field0_0x0)._s_0.Z;
    pTVar2 = LimitVelocity(this,local_78,(TVector<double> *)&local_98._s_0);
    dVar11 = (pTVar2->field0_0x0)._s_0.Y;
    dVar10 = (pTVar2->field0_0x0)._s_0.Z;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (pTVar2->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar11;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar10;
  }
  return __return_storage_ptr__;
}

// ComputeHomingAcceleration @ 14793ae80

TVector<double> * __thiscall
UProjectileMovementComponent::ComputeHomingAcceleration
          (UProjectileMovementComponent *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1,float param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  UObject *pUVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 uVar9;
  
  pUVar3 = FWeakObjectPtr::Get(&(this->HomingTargetComponent).WeakPtr);
  lVar1 = *(longlong *)&this->field_0xc0;
  dVar6 = *(double *)&pUVar3[0xd].field_0x8 - *(double *)(lVar1 + 0x210);
  dVar5 = *(double *)&pUVar3[0xd].field_0x18 - *(double *)(lVar1 + 0x220);
  dVar8 = *(double *)&pUVar3[0xd].field_0x10 - *(double *)(lVar1 + 0x218);
  dVar4 = dVar8 * dVar8 + dVar6 * dVar6 + dVar5 * dVar5;
  uVar7 = dVar6;
  uVar9 = dVar8;
  uVar2 = dVar5;
  if ((dVar4 != __real_3ff0000000000000) &&
     (uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
     uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
     uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
     __real_3e45798ee0000000 <= dVar4)) {
    dVar4 = __real_3ff0000000000000 / SQRT(dVar4);
    uVar7 = dVar6 * dVar4;
    uVar9 = dVar8 * dVar4;
    uVar2 = dVar5 * dVar4;
  }
  dVar5 = (double)this->HomingAccelerationMagnitude;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar5 * (double)uVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar5 * (double)uVar7;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar5 * (double)uVar9;
  return __return_storage_ptr__;
}

// ComputeMoveDelta @ 14793b240

TVector<double> * __thiscall
UProjectileMovementComponent::ComputeMoveDelta
          (UProjectileMovementComponent *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1,float param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double local_58;
  double local_50;
  double local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  double local_28;
  
  local_38 = *(undefined4 *)&param_1->field0_0x0;
  uStack_34 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 4);
  uStack_30 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
  uStack_2c = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc);
  local_28 = (param_1->field0_0x0)._s_0.Z;
  (**(code **)(*(longlong *)this + 0x610))(local_38,&local_58,&local_38);
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar3 = (param_1->field0_0x0)._s_0.Z;
  dVar5 = (double)param_2;
  dVar4 = (double)(param_2 * __real_3f000000);
  (__return_storage_ptr__->field0_0x0)._s_0.X = (local_58 - dVar1) * dVar4 + dVar1 * dVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (local_50 - dVar2) * dVar4 + dVar2 * dVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (local_48 - dVar3) * dVar4 + dVar3 * dVar5;
  return __return_storage_ptr__;
}

// ComputeThrottleInterpolationMaxFrames @ 14793ba90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall
UProjectileMovementComponent::ComputeThrottleInterpolationMaxFrames
          (UProjectileMovementComponent *this,float param_1,USceneComponent *param_2)

{
  AActor *this_00;
  bool bVar1;
  
  this_00 = (AActor *)param_2->_padding_;
  if (this_00 != (AActor *)0x0) {
    bVar1 = AActor::WasRecentlyRendered
                      (this_00,this->ThrottleInterpolationThresholdNotRenderedShortTime);
    if (!bVar1) {
      bVar1 = AActor::WasRecentlyRendered
                        (this_00,this->ThrottleInterpolationThresholdNotRenderedLongTime);
      if (!bVar1) {
        return this->ThrottleInterpolationSkipFramesNotRecent;
      }
      return this->ThrottleInterpolationSkipFramesRecent;
    }
  }
  return 0;
}

// ComputeVelocity @ 14793bb10

TVector<double> * __thiscall
UProjectileMovementComponent::ComputeVelocity
          (UProjectileMovementComponent *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1,float param_2)

{
  double dVar1;
  double local_58;
  double local_50;
  double local_48;
  TVector<double>_u_0 local_38 [2];
  
  (**(code **)(*(longlong *)this + 0x678))(this,&local_58);
  dVar1 = (double)param_2;
  local_38[0]._0_8_ = dVar1 * local_58 + (param_1->field0_0x0)._s_0.X;
  local_38[0]._8_8_ = dVar1 * local_50 + (param_1->field0_0x0)._s_0.Y;
  local_38[0]._16_8_ = dVar1 * local_48 + (param_1->field0_0x0)._s_0.Z;
  LimitVelocity(this,__return_storage_ptr__,(TVector<double> *)&local_38[0]._s_0);
  return __return_storage_ptr__;
}

// FOnProjectileBounceDelegate_DelegateWrapper @ 1479426b0

void __cdecl
UProjectileMovementComponent::FOnProjectileBounceDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,FHitResult *param_2,
          TVector<double> *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 local_128 [32];
  double local_28;
  double dStack_20;
  double local_18;
  
  memset(local_128,0,0x100);
  lVar6 = 2;
  puVar5 = local_128;
  do {
    uVar1 = *(undefined8 *)&param_2->Distance;
    uVar2 = *(undefined8 *)&param_2->Location;
    uVar3 = *(undefined8 *)&(param_2->Location).field_0x8;
    *puVar5 = *(undefined8 *)param_2;
    puVar5[1] = uVar1;
    uVar1 = *(undefined8 *)&(param_2->Location).field_0x10;
    uVar4 = *(undefined8 *)&param_2->ImpactPoint;
    puVar5[2] = uVar2;
    puVar5[3] = uVar3;
    uVar2 = *(undefined8 *)&(param_2->ImpactPoint).field_0x8;
    uVar3 = *(undefined8 *)&(param_2->ImpactPoint).field_0x10;
    puVar5[4] = uVar1;
    puVar5[5] = uVar4;
    uVar1 = *(undefined8 *)&param_2->Normal;
    uVar4 = *(undefined8 *)&(param_2->Normal).field_0x8;
    puVar5[6] = uVar2;
    puVar5[7] = uVar3;
    uVar2 = *(undefined8 *)&(param_2->Normal).field_0x10;
    uVar3 = *(undefined8 *)&param_2->ImpactNormal;
    puVar5[8] = uVar1;
    puVar5[9] = uVar4;
    uVar1 = *(undefined8 *)&(param_2->ImpactNormal).field_0x8;
    uVar4 = *(undefined8 *)&(param_2->ImpactNormal).field_0x10;
    puVar5[10] = uVar2;
    puVar5[0xb] = uVar3;
    uVar2 = *(undefined8 *)&param_2->TraceStart;
    uVar3 = *(undefined8 *)&(param_2->TraceStart).field_0x8;
    puVar5[0xc] = uVar1;
    puVar5[0xd] = uVar4;
    puVar5[0xe] = uVar2;
    puVar5[0xf] = uVar3;
    lVar6 = lVar6 + -1;
    puVar5 = puVar5 + 0x10;
    param_2 = (FHitResult *)&(param_2->TraceStart).field_0x10;
  } while (lVar6 != 0);
  local_28 = (param_3->field0_0x0)._s_0.X;
  dStack_20 = (param_3->field0_0x0)._s_0.Y;
  local_18 = (param_3->field0_0x0)._s_0.Z;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_128);
  return;
}

// FOnProjectileStopDelegate_DelegateWrapper @ 147942790

void __cdecl
UProjectileMovementComponent::FOnProjectileStopDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,FHitResult *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 local_108 [33];
  
  lVar6 = 2;
  puVar5 = local_108;
  do {
    uVar1 = *(undefined8 *)&param_2->Distance;
    uVar2 = *(undefined8 *)&param_2->Location;
    uVar3 = *(undefined8 *)&(param_2->Location).field_0x8;
    *puVar5 = *(undefined8 *)param_2;
    puVar5[1] = uVar1;
    uVar1 = *(undefined8 *)&(param_2->Location).field_0x10;
    uVar4 = *(undefined8 *)&param_2->ImpactPoint;
    puVar5[2] = uVar2;
    puVar5[3] = uVar3;
    uVar2 = *(undefined8 *)&(param_2->ImpactPoint).field_0x8;
    uVar3 = *(undefined8 *)&(param_2->ImpactPoint).field_0x10;
    puVar5[4] = uVar1;
    puVar5[5] = uVar4;
    uVar1 = *(undefined8 *)&param_2->Normal;
    uVar4 = *(undefined8 *)&(param_2->Normal).field_0x8;
    puVar5[6] = uVar2;
    puVar5[7] = uVar3;
    uVar2 = *(undefined8 *)&(param_2->Normal).field_0x10;
    uVar3 = *(undefined8 *)&param_2->ImpactNormal;
    puVar5[8] = uVar1;
    puVar5[9] = uVar4;
    uVar1 = *(undefined8 *)&(param_2->ImpactNormal).field_0x8;
    uVar4 = *(undefined8 *)&(param_2->ImpactNormal).field_0x10;
    puVar5[10] = uVar2;
    puVar5[0xb] = uVar3;
    uVar2 = *(undefined8 *)&param_2->TraceStart;
    uVar3 = *(undefined8 *)&(param_2->TraceStart).field_0x8;
    puVar5[0xc] = uVar1;
    puVar5[0xd] = uVar4;
    puVar5[0xe] = uVar2;
    puVar5[0xf] = uVar3;
    lVar6 = lVar6 + -1;
    puVar5 = puVar5 + 0x10;
    param_2 = (FHitResult *)&(param_2->TraceStart).field_0x10;
  } while (lVar6 != 0);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_108);
  return;
}

// GetGravityZ @ 1479492e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

float __thiscall UProjectileMovementComponent::GetGravityZ(UProjectileMovementComponent *this)

{
  float fVar1;
  float fVar2;
  
  fVar2 = 0.0;
  fVar1 = this->ProjectileGravityScale;
  if (fVar1 != 0.0) {
    fVar2 = UMovementComponent::GetGravityZ((UMovementComponent *)this);
    fVar2 = fVar2 * fVar1;
  }
  return fVar2;
}

// GetInterpolatedComponent @ 1479495a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

USceneComponent * __thiscall
UProjectileMovementComponent::GetInterpolatedComponent(UProjectileMovementComponent *this)

{
  USceneComponent *pUVar1;
  
  pUVar1 = (USceneComponent *)FWeakObjectPtr::Get(&(this->InterpolatedComponentPtr).WeakPtr);
  return pUVar1;
}

// GetMaxSpeed @ 14794a4b0

float __thiscall UProjectileMovementComponent::GetMaxSpeed(UProjectileMovementComponent *this)

{
  return this->MaxSpeed;
}

// GetPrivateStaticClass @ 14794c160

UClass * __cdecl UProjectileMovementComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProjectileMovementComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ProjectileMovementComponent",
               &Z_Registration_Info_UClass_UProjectileMovementComponent.InnerSingleton,
               StaticRegisterNativesUProjectileMovementComponent,0x290,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UProjectileMovementComponent>,
               InternalVTableHelperCtorCaller<UProjectileMovementComponent>,local_res8,
               UMovementComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProjectileMovementComponent.InnerSingleton;
}

// GetSimulationTimeStep @ 14794d690

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

float __thiscall
UProjectileMovementComponent::GetSimulationTimeStep
          (UProjectileMovementComponent *this,float param_1,int param_2)

{
  float fVar1;
  uint uVar2;
  UWorld *pUVar3;
  float fVar4;
  FString local_28 [2];
  
  fVar1 = this->MaxSimulationTimeStep;
  fVar4 = param_1;
  if (fVar1 < param_1) {
    if (param_2 < this->MaxSimulationIterations) {
      fVar4 = param_1 * __real_3f000000;
      if (fVar1 <= param_1 * __real_3f000000) {
        fVar4 = fVar1;
      }
    }
    else {
      pUVar3 = *(UWorld **)&this->field_0xb0;
      if ((((pUVar3 != (UWorld *)0x0) ||
           (pUVar3 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
           pUVar3 != (UWorld *)0x0)) &&
          (pUVar3->DeltaTimeSeconds <= __real_3e4ccccd &&
           __real_3e4ccccd != pUVar3->DeltaTimeSeconds)) &&
         (((uVar2 = s_WarningCount + 1, s_WarningCount < 100 ||
           (s_WarningCount = uVar2, ((byte)GFrameCounter & 0xf) == 0)) &&
          (s_WarningCount = uVar2, 2 < (byte)LogProjectileMovement._0_1_)))) {
        if (*(UObjectBaseUtility **)&this->field_0xc0 == (UObjectBaseUtility *)0x0) {
          ::FString::FString(local_28,L"None");
        }
        else {
          UObjectBaseUtility::GetPathName
                    (*(UObjectBaseUtility **)&this->field_0xc0,local_28,(UObject *)0x0);
        }
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogProjectileMovement);
        if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
        }
      }
    }
  }
  if (fVar4 <= __real_358637bd) {
    fVar4 = __real_358637bd;
  }
  return fVar4;
}

// HandleBlockingHit @ 147951330

/* WARNING: Enum "Type": Some values do not have unique names */

EHandleBlockingHitResult __thiscall
UProjectileMovementComponent::HandleBlockingHit
          (UProjectileMovementComponent *this,FHitResult *param_1,float param_2,
          TVector<double> *param_3,float *param_4)

{
  char cVar1;
  UObject *pUVar2;
  longlong lVar3;
  FName local_res8;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38 [2];
  
  lVar3 = 0;
  if (*(longlong *)&this->field_0xc0 != 0) {
    lVar3 = *(longlong *)(*(longlong *)&this->field_0xc0 + 0xa8);
  }
  cVar1 = (**(code **)(*(longlong *)this + 0x608))();
  if ((((cVar1 != '\0') && (lVar3 != 0)) && ((*(uint *)(lVar3 + 8) >> 0x1e & 1) == 0)) &&
     ((((**(code **)(*(longlong *)this + 0x548))(this,param_1,param_2,param_3),
       (*(uint *)(lVar3 + 8) >> 0x1e & 1) == 0 && (*(longlong *)&this->field_0xc0 != 0)) &&
      ((this->field_0x9a & 0x10) != 0)))) {
    if (param_1->bStartPenetrating == '\0') {
      *param_4 = (__real_3f800000 - param_1->Time) * param_2;
      return Deflect;
    }
    if (5 < (byte)LogProjectileMovement._0_1_) {
      ::FString::PrintfImpl(&local_48,L"X=%3.3f Y=%3.3f Z=%3.3f");
      pUVar2 = FWeakObjectPtr::Get(&(param_1->Component).WeakPtr);
      if (pUVar2 == (UObject *)0x0) {
        ::FString::FString(&local_68,L"None");
      }
      else {
        local_res8.ComparisonIndex.Value = *(uint *)&pUVar2->field_0x18;
        local_res8.Number = *(uint *)&pUVar2->field_0x1c;
        ::FName::ToString(&local_res8,&local_68);
      }
      FActorInstanceHandle::GetName(&param_1->HitObjectHandle,local_38);
      local_res8 = *(FName *)(lVar3 + 0x18);
      ::FName::ToString(&local_res8,&local_58);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogProjectileMovement);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
  }
  return Abort;
}

// HandleDeflection @ 147951580

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UProjectileMovementComponent::HandleDeflection
          (UProjectileMovementComponent *this,FHitResult *param_1,TVector<double> *param_2,
          uint param_3,float *param_4)

{
  undefined1 *puVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  double dVar17;
  undefined8 uVar18;
  double local_f8;
  double local_f0;
  double local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  double local_c8;
  undefined1 local_b8 [176];
  
  local_d8 = *(undefined4 *)&param_1->Normal;
  uStack_d4 = *(undefined4 *)&(param_1->Normal).field_0x4;
  uStack_d0 = *(undefined4 *)&(param_1->Normal).field_0x8;
  uStack_cc = *(undefined4 *)&(param_1->Normal).field_0xc;
  local_c8 = *(double *)&(param_1->Normal).field_0x10;
  (**(code **)(*(longlong *)this + 0x5e8))(local_d8,&local_f8,&local_d8);
  fVar4 = __real_3f800000;
  fVar3 = __real_38d1b717;
  dVar14 = __real_3ff0000000000000;
  if ((__real_3f800000 < this->PreviousHitTime || __real_3f800000 == this->PreviousHitTime) ||
     (__real_38d1b717 < param_1->Time)) {
    bVar5 = false;
LAB_14795176d:
    bVar2 = bVar5;
    dVar11 = *(double *)&this->field_0xd8;
    dVar17 = *(double *)&this->field_0xe0;
    dVar15 = *(double *)&this->field_0xe8;
    uVar8 = SUB84(dVar11 * dVar11,0);
    dVar12 = dVar17 * dVar17 + dVar11 * dVar11 + dVar15 * dVar15;
    if (dVar12 == __real_3ff0000000000000) {
      local_c8 = *(double *)&this->field_0xe8;
      uVar18 = *(double *)&this->field_0xe0;
      uVar13 = *(double *)&this->field_0xd8;
      uVar16 = local_c8;
    }
    else if (__real_3e45798ee0000000 <= dVar12) {
      uVar8 = SUB84(dVar12,0);
      dVar12 = __real_3ff0000000000000 / SQRT(dVar12);
      uVar18 = dVar17 * dVar12;
      uVar13 = dVar11 * dVar12;
      uVar16 = dVar15 * dVar12;
    }
    else {
      uVar8 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      local_c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
    if (__real_3f847ae140000000 <
        (double)uVar13 * local_f8 + (double)uVar18 * local_f0 + (double)uVar16 * local_e8) {
      this->bIsSliding = '\0';
      return true;
    }
  }
  else {
    bVar2 = true;
    dVar11 = local_f8 * (this->PreviousHitNormal).field0_0x0._s_0.X;
    uVar8 = SUB84(dVar11,0);
    bVar5 = true;
    if (local_f0 * (this->PreviousHitNormal).field0_0x0._s_0.Y + dVar11 +
        local_e8 * (this->PreviousHitNormal).field0_0x0._s_0.Z < ___real_3feffebb00000000)
    goto LAB_14795176d;
  }
  this->bIsSliding = '\x01';
  if (bVar2) {
    dVar11 = (this->PreviousHitNormal).field0_0x0._s_0.Y;
    dVar17 = (this->PreviousHitNormal).field0_0x0._s_0.X;
    dVar15 = (this->PreviousHitNormal).field0_0x0._s_0.Z;
    uVar8 = SUB84(dVar11 * local_f0,0);
    if (dVar17 * local_f8 + dVar11 * local_f0 + dVar15 * local_e8 <= 0.0) {
      dVar12 = dVar15 * local_f0 - dVar11 * local_e8;
      dVar15 = dVar17 * local_e8 - dVar15 * local_f8;
      dVar17 = dVar11 * local_f8 - dVar17 * local_f0;
      dVar11 = dVar15 * dVar15 + dVar12 * dVar12 + dVar17 * dVar17;
      uVar18 = dVar15;
      uVar16 = dVar17;
      uVar13 = dVar12;
      if ((dVar11 != dVar14) &&
         (uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
         uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
         uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
         __real_3e45798ee0000000 <= dVar11)) {
        dVar14 = dVar14 / SQRT(dVar11);
        uVar18 = dVar15 * dVar14;
        uVar16 = dVar17 * dVar14;
        uVar13 = dVar12 * dVar14;
      }
      puVar1 = &this->field_0xd8;
      dVar14 = (double)uVar18 * *(double *)&this->field_0xe0 + (double)uVar13 * *(double *)puVar1 +
               (double)uVar16 * *(double *)&this->field_0xe8;
      dVar17 = (double)uVar16 * dVar14;
      dVar11 = (double)uVar18 * dVar14;
      *(double *)puVar1 = (double)uVar13 * dVar14;
      *(double *)&this->field_0xe0 = dVar11;
      *(double *)&this->field_0xe8 = dVar17;
      dVar14 = *(double *)puVar1;
      if (dVar11 * (param_2->field0_0x0)._s_0.Y + dVar14 * (param_2->field0_0x0)._s_0.X +
          dVar17 * (param_2->field0_0x0)._s_0.Z < 0.0) {
        uVar9 = (uint)__xmm_80000000000000008000000000000000;
        uVar10 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
        *(ulonglong *)puVar1 =
             CONCAT44((uint)((ulonglong)dVar14 >> 0x20) ^ uVar10,SUB84(dVar14,0) ^ uVar9);
        *(ulonglong *)&this->field_0xe0 =
             CONCAT44((uint)((ulonglong)dVar11 >> 0x20) ^ uVar10,SUB84(dVar11,0) ^ uVar9);
        *(ulonglong *)&this->field_0xe8 =
             CONCAT44((uint)((ulonglong)dVar17 >> 0x20) ^ uVar10,SUB84(dVar17,0) ^ uVar9);
      }
      local_d8 = *(undefined4 *)puVar1;
      uStack_d4 = *(undefined4 *)&this->field_0xdc;
      uStack_d0 = *(undefined4 *)&this->field_0xe0;
      uStack_cc = *(undefined4 *)&this->field_0xe4;
      local_c8 = *(double *)&this->field_0xe8;
      puVar7 = (undefined8 *)(**(code **)(*(longlong *)this + 0x5d8))(this,local_b8,&local_d8);
      goto LAB_14795197f;
    }
  }
  puVar7 = (undefined8 *)
           (**(code **)(*(longlong *)this + 0x588))
                     (uVar8,local_b8,&this->field_0xd8,fVar4,&local_f8,param_1);
LAB_14795197f:
  uVar13 = puVar7[1];
  *(undefined8 *)&this->field_0xd8 = *puVar7;
  *(undefined8 *)&this->field_0xe0 = uVar13;
  *(undefined8 *)&this->field_0xe8 = puVar7[2];
  dVar14 = *(double *)&this->field_0xd8;
  if (*(double *)&this->field_0xe0 * *(double *)&this->field_0xe0 + dVar14 * dVar14 +
      *(double *)&this->field_0xe8 * *(double *)&this->field_0xe8 <
      (double)(this->BounceVelocityStopSimulatingThreshold *
              this->BounceVelocityStopSimulatingThreshold)) {
    (**(code **)(*(longlong *)this + 0x618))(this,param_1);
    return false;
  }
  if (*param_4 <= fVar3) {
    return true;
  }
  cVar6 = (**(code **)(*(longlong *)this + 0x660))(this,param_1);
  return cVar6 != '\0';
}

// HandleImpact @ 147951f50

void __thiscall
UProjectileMovementComponent::HandleImpact
          (UProjectileMovementComponent *this,FHitResult *param_1,float param_2,
          TVector<double> *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 *puVar9;
  FHitResult *pFVar10;
  TVector<double> *pTVar11;
  longlong lVar12;
  TVector<double>_u_0 local_188;
  TVector<double> local_168;
  undefined8 local_148 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if (this->bShouldBounce != '\0') {
    uVar2 = *(undefined8 *)&this->field_0xd8;
    uVar3 = *(undefined8 *)&this->field_0xe0;
    uVar1 = *(undefined8 *)&this->field_0xe8;
    puVar9 = (undefined8 *)
             (**(code **)(*(longlong *)this + 0x668))(this,&local_188,param_1,param_2,param_3);
    uVar4 = puVar9[1];
    *(undefined8 *)&this->field_0xd8 = *puVar9;
    *(undefined8 *)&this->field_0xe0 = uVar4;
    *(undefined8 *)&this->field_0xe8 = puVar9[2];
    memset(local_148,0,0x100);
    lVar12 = 2;
    pFVar10 = param_1;
    puVar9 = local_148;
    do {
      uVar4 = *(undefined8 *)&pFVar10->Distance;
      uVar5 = *(undefined8 *)&pFVar10->Location;
      uVar6 = *(undefined8 *)&(pFVar10->Location).field_0x8;
      *puVar9 = *(undefined8 *)pFVar10;
      puVar9[1] = uVar4;
      uVar4 = *(undefined8 *)&(pFVar10->Location).field_0x10;
      uVar7 = *(undefined8 *)&pFVar10->ImpactPoint;
      puVar9[2] = uVar5;
      puVar9[3] = uVar6;
      uVar5 = *(undefined8 *)&(pFVar10->ImpactPoint).field_0x8;
      uVar6 = *(undefined8 *)&(pFVar10->ImpactPoint).field_0x10;
      puVar9[4] = uVar4;
      puVar9[5] = uVar7;
      uVar4 = *(undefined8 *)&pFVar10->Normal;
      uVar7 = *(undefined8 *)&(pFVar10->Normal).field_0x8;
      puVar9[6] = uVar5;
      puVar9[7] = uVar6;
      uVar5 = *(undefined8 *)&(pFVar10->Normal).field_0x10;
      uVar6 = *(undefined8 *)&pFVar10->ImpactNormal;
      puVar9[8] = uVar4;
      puVar9[9] = uVar7;
      uVar4 = *(undefined8 *)&(pFVar10->ImpactNormal).field_0x8;
      uVar7 = *(undefined8 *)&(pFVar10->ImpactNormal).field_0x10;
      puVar9[10] = uVar5;
      puVar9[0xb] = uVar6;
      uVar5 = *(undefined8 *)&pFVar10->TraceStart;
      uVar6 = *(undefined8 *)&(pFVar10->TraceStart).field_0x8;
      puVar9[0xc] = uVar4;
      puVar9[0xd] = uVar7;
      puVar9[0xe] = uVar5;
      puVar9[0xf] = uVar6;
      lVar12 = lVar12 + -1;
      pFVar10 = (FHitResult *)&(pFVar10->TraceStart).field_0x10;
      puVar9 = puVar9 + 0x10;
    } while (lVar12 != 0);
    local_48 = uVar2;
    uStack_40 = uVar3;
    local_38 = uVar1;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnProjectileBounce,
               local_148);
    local_188._s_0.X = (double)*(undefined8 *)&this->field_0xd8;
    local_188._s_0.Y = (double)*(undefined8 *)&this->field_0xe0;
    local_188._s_0.Z = (double)*(undefined8 *)&this->field_0xe8;
    pTVar11 = LimitVelocity(this,&local_168,(TVector<double> *)&local_188._s_0);
    dVar8 = (pTVar11->field0_0x0)._s_0.Y;
    *(double *)&this->field_0xd8 = (pTVar11->field0_0x0)._s_0.X;
    *(double *)&this->field_0xe0 = dVar8;
    *(double *)&this->field_0xe8 = (pTVar11->field0_0x0)._s_0.Z;
    if ((double)(this->BounceVelocityStopSimulatingThreshold *
                this->BounceVelocityStopSimulatingThreshold) <=
        *(double *)&this->field_0xe0 * *(double *)&this->field_0xe0 +
        *(double *)&this->field_0xd8 * *(double *)&this->field_0xd8 +
        *(double *)&this->field_0xe8 * *(double *)&this->field_0xe8) {
      return;
    }
  }
  (**(code **)(*(longlong *)this + 0x618))(this,param_1);
  return;
}

// HandleSliding @ 147952110

bool __thiscall
UProjectileMovementComponent::HandleSliding
          (UProjectileMovementComponent *this,FHitResult *param_1,float *param_2)

{
  longlong lVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 local_1c8 [16];
  double local_1b8;
  undefined1 local_1a8 [16];
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  FHitResult local_158;
  
  FHitResult::FHitResult(&local_158,param_1);
  local_1c8 = *(undefined1 (*) [16])&param_1->Normal;
  local_1b8 = *(double *)&(param_1->Normal).field_0x10;
  (**(code **)(*(longlong *)this + 0x5d8))(this,&local_190,local_1c8);
  lVar1 = *(longlong *)&this->field_0xc0;
  local_178 = *(undefined8 *)(lVar1 + 0x1f0);
  uStack_170 = *(undefined8 *)(lVar1 + 0x1f8);
  local_168 = *(undefined8 *)(lVar1 + 0x200);
  uStack_160 = *(undefined8 *)(lVar1 + 0x208);
  dVar10 = (double)*param_2;
  dVar2 = *(double *)&this->field_0xe0 * dVar10;
  local_198 = dVar10 * *(double *)&this->field_0xe8;
  local_1a8._8_4_ = SUB84(dVar2,0);
  local_1a8._0_8_ = *(double *)&this->field_0xd8 * dVar10;
  local_1a8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  (**(code **)(*(longlong *)this + 0x570))
            (this,local_1a8,&local_178,this->bSweepCollision,param_1,0);
  if ((*(longlong *)&this->field_0xc0 != 0) && ((this->field_0x9a & 0x10) != 0)) {
    if (param_1->bBlockingHit == 0) {
      local_1c8 = *(undefined1 (*) [16])&this->field_0xd8;
      local_1b8 = *(double *)&this->field_0xe8;
      (**(code **)(*(longlong *)this + 0x610))(this,local_1a8,local_1c8,*param_2);
      uVar4 = local_1a8._0_8_;
      uVar5 = local_1a8._8_8_;
      dVar13 = (double)uVar5 - *(double *)&this->field_0xe0;
      dVar12 = (double)uVar4 - *(double *)&this->field_0xd8;
      dVar2 = local_198 - *(double *)&this->field_0xe8;
      dVar10 = dVar13 * local_188 + dVar12 * local_190 + dVar2 * local_180;
      if (0.0 <= (float)dVar10) {
        *(undefined4 *)&this->field_0xd8 = local_1a8._0_4_;
        *(undefined4 *)&this->field_0xdc = local_1a8._4_4_;
        *(undefined4 *)&this->field_0xe0 = local_1a8._8_4_;
        *(int *)&this->field_0xe4 = local_1a8._12_4_;
        *(double *)&this->field_0xe8 = local_198;
      }
      else {
        auVar9._0_8_ = dVar10 * local_180;
        auVar9._8_8_ = 0;
        dVar12 = (dVar12 - dVar10 * local_190) + *(double *)&this->field_0xd8;
        dVar13 = (dVar13 - dVar10 * local_188) + *(double *)&this->field_0xe0;
        local_1b8 = (dVar2 - auVar9._0_8_) + *(double *)&this->field_0xe8;
        dVar2 = dVar13 * dVar13 + dVar12 * dVar12 + local_1b8 * local_1b8;
        uVar4 = dVar12;
        uVar5 = local_1b8;
        uVar6 = dVar13;
        if ((dVar2 != __real_3ff0000000000000) &&
           (uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
           uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
           uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
           __real_3e45798ee0000000 <= dVar2)) {
          dVar11 = __real_3ff0000000000000 / SQRT(dVar2);
          uVar4 = dVar12 * dVar11;
          uVar5 = local_1b8 * dVar11;
          uVar6 = dVar13 * dVar11;
        }
        auVar3._8_8_ = 0;
        auVar3._0_8_ = dVar2;
        auVar9 = sqrtpd(auVar9,auVar3);
        dVar2 = (double)(float)((uint)((float)dVar10 * this->Friction) ^
                               __xmm_80000000800000008000000080000000);
        dVar10 = auVar9._0_8_;
        if (dVar2 <= auVar9._0_8_) {
          dVar10 = dVar2;
        }
        local_1b8 = local_1b8 - dVar10 * (double)uVar5;
        local_1c8._8_8_ = dVar13 - dVar10 * (double)uVar6;
        local_1c8._0_8_ = dVar12 - dVar10 * (double)uVar4;
        puVar8 = (undefined8 *)(**(code **)(*(longlong *)this + 0x5d8))(this,&local_178,local_1c8);
        uVar4 = puVar8[1];
        *(undefined8 *)&this->field_0xd8 = *puVar8;
        *(undefined8 *)&this->field_0xe0 = uVar4;
        *(undefined8 *)&this->field_0xe8 = puVar8[2];
      }
      if ((double)(this->BounceVelocityStopSimulatingThreshold *
                  this->BounceVelocityStopSimulatingThreshold) <=
          *(double *)&this->field_0xe0 * *(double *)&this->field_0xe0 +
          *(double *)&this->field_0xd8 * *(double *)&this->field_0xd8 +
          *(double *)&this->field_0xe8 * *(double *)&this->field_0xe8) {
        *param_2 = 0.0;
        return true;
      }
      (**(code **)(*(longlong *)this + 0x618))(this,&local_158);
    }
    else {
      dVar10 = (double)*param_2;
      *param_2 = (__real_3f800000 - param_1->Time) * *param_2;
      local_1b8 = dVar10 * *(double *)&this->field_0xe8;
      dVar2 = dVar10 * *(double *)&this->field_0xe0;
      local_1c8._8_4_ = SUB84(dVar2,0);
      local_1c8._0_8_ = dVar10 * *(double *)&this->field_0xd8;
      local_1c8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
      iVar7 = (**(code **)(*(longlong *)this + 0x650))(this,param_1);
      if ((iVar7 != 2) && (*(longlong *)&this->field_0xc0 != 0)) {
        return (bool)((byte)this->field_0x9a >> 4 & 1);
      }
    }
  }
  return false;
}

// InitializeComponent @ 147954c60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UProjectileMovementComponent::InitializeComponent(UProjectileMovementComponent *this)

{
  undefined1 *this_00;
  float fVar1;
  USceneComponent *this_01;
  longlong *plVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  TVector<double> *pTVar8;
  TQuat<double> *pTVar9;
  TRotator<double> local_d8;
  TVector<double>_u_0 local_b8;
  TVector<double>_u_0 local_98;
  TQuat<double> local_78;
  TQuat<double> local_58 [2];
  
  UMovementComponent::InitializeComponent((UMovementComponent *)this);
  this_00 = &this->field_0xd8;
  if (0.0 < *(double *)&this->field_0xe0 * *(double *)&this->field_0xe0 +
            *(double *)this_00 * *(double *)this_00 +
            *(double *)&this->field_0xe8 * *(double *)&this->field_0xe8) {
    fVar1 = this->InitialSpeed;
    if (0.0 < fVar1) {
      pTVar8 = UE::Math::TVector<double>::GetSafeNormal
                         ((TVector<double> *)this_00,(TVector<double> *)&local_b8._s_0,
                          __real_3e45798ee0000000,&UE::Math::TVector<double>::ZeroVector);
      dVar4 = (double)fVar1;
      dVar6 = (pTVar8->field0_0x0)._s_0.Y;
      dVar5 = dVar4 * (pTVar8->field0_0x0)._s_0.Z;
      *(double *)this_00 = dVar4 * (pTVar8->field0_0x0)._s_0.X;
      auVar3._8_4_ = SUB84(dVar5,0);
      auVar3._0_8_ = dVar4 * dVar6;
      auVar3._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      *(undefined1 (*) [16])&this->field_0xe0 = auVar3;
    }
    if (this->bInitialVelocityInLocalSpace != '\0') {
      local_d8.Pitch = *(double *)this_00;
      local_d8.Yaw = *(double *)&this->field_0xe0;
      local_d8.Roll = *(double *)&this->field_0xe8;
      (**(code **)(*(longlong *)this + 0x600))(this,&local_d8);
    }
    if ((this->bRotationFollowsVelocity != 0) && (*(longlong *)&this->field_0xc0 != 0)) {
      UE::Math::TVector<double>::ToOrientationRotator((TVector<double> *)this_00,&local_d8);
      if (this->bRotationRemainsVertical != '\0') {
        local_d8.Pitch = 0.0;
        local_d8.Yaw = UE::Math::TRotator<double>::NormalizeAxis(local_d8.Yaw);
        local_d8.Roll = 0.0;
      }
      this_01 = *(USceneComponent **)&this->field_0xc0;
      local_b8._s_0.X = local_d8.Pitch;
      local_b8._s_0.Y = local_d8.Yaw;
      local_b8._s_0.Z = local_d8.Roll;
      if ((this_01->AttachParent).field0_0x0.DebugPtr == (USceneComponent *)0x0) {
        local_98._s_0.X = local_d8.Pitch;
        local_98._s_0.Y = local_d8.Yaw;
        local_98._s_0.Z = local_d8.Roll;
        USceneComponent::SetRelativeRotation
                  (this_01,(TRotator<double> *)&local_98._s_0,false,(FHitResult *)0x0,None);
      }
      else {
        pTVar9 = UE::Math::TRotator<double>::Quaternion((TRotator<double> *)&local_b8._s_0,local_58)
        ;
        USceneComponent::GetRelativeRotationFromWorld(this_01,&local_78,pTVar9);
        local_98._s_0.X = (this_01->RelativeLocation).field0_0x0._s_0.X;
        local_98._s_0.Y = (this_01->RelativeLocation).field0_0x0._s_0.Y;
        local_98._s_0.Z = (this_01->RelativeLocation).field0_0x0._s_0.Z;
        USceneComponent::SetRelativeLocationAndRotation
                  (this_01,(TVector<double> *)&local_98._s_0,&local_78,false,(FHitResult *)0x0,None)
        ;
      }
    }
    (**(code **)(*(longlong *)this + 0x550))(this);
    plVar2 = *(longlong **)&this->field_0xc8;
    if ((plVar2 != (longlong *)0x0) &&
       (cVar7 = (**(code **)(*plVar2 + 0x4f8))(plVar2,0), cVar7 != '\0')) {
      local_b8._s_0.X = (double)*(undefined8 *)this_00;
      local_b8._s_0.Y = (double)*(undefined8 *)&this->field_0xe0;
      local_b8._s_0.Z = (double)*(undefined8 *)&this->field_0xe8;
      (**(code **)(**(longlong **)&this->field_0xc8 + 0x758))
                (*(longlong **)&this->field_0xc8,&local_b8,0,0);
    }
  }
  return;
}

// LimitVelocity @ 147957350

TVector<double> * __thiscall
UProjectileMovementComponent::LimitVelocity
          (UProjectileMovementComponent *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  double local_18;
  
  fVar6 = (float)(**(code **)(*(longlong *)this + 0x500))();
  if (0.0 < fVar6) {
    uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    if (__real_38d1b717 <= fVar6) {
      dVar7 = (param_1->field0_0x0)._s_0.X;
      dVar1 = (param_1->field0_0x0)._s_0.Z;
      dVar2 = (param_1->field0_0x0)._s_0.Y;
      dVar9 = (double)fVar6;
      dVar7 = dVar2 * dVar2 + dVar7 * dVar7 + dVar1 * dVar1;
      if (dVar7 <= dVar9 * dVar9) {
        uVar8 = (param_1->field0_0x0)._s_0.Z;
        uVar4 = (param_1->field0_0x0)._s_0.X;
        uVar5 = *(double *)((longlong)&param_1->field0_0x0 + 8);
      }
      else {
        dVar9 = dVar9 * (__real_3ff0000000000000 / SQRT(dVar7));
        uVar8 = dVar9 * dVar1;
        uVar4 = dVar9 * (param_1->field0_0x0)._s_0.X;
        uVar5 = dVar9 * (param_1->field0_0x0)._s_0.Y;
      }
    }
    auVar3._8_4_ = (int)uVar5;
    auVar3._0_8_ = uVar4;
    auVar3._12_4_ = (int)((ulonglong)uVar5 >> 0x20);
    *(undefined1 (*) [16])&param_1->field0_0x0 = auVar3;
    (param_1->field0_0x0)._s_0.Z = (double)uVar8;
  }
  local_28 = *(undefined4 *)&param_1->field0_0x0;
  uStack_24 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 4);
  uStack_20 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
  uStack_1c = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc);
  local_18 = (param_1->field0_0x0)._s_0.Z;
  (**(code **)(*(longlong *)this + 0x5d8))(this,__return_storage_ptr__,&local_28);
  return __return_storage_ptr__;
}

// MoveInterpolationTarget @ 1479582f0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UProjectileMovementComponent::MoveInterpolationTarget
          (UProjectileMovementComponent *this,TVector<double> *param_1,TRotator<double> *param_2)

{
  TVector<double> *this_00;
  float fVar1;
  double dVar2;
  double dVar3;
  undefined1 uVar4;
  longlong lVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 uVar26;
  undefined8 uVar27;
  uint uVar28;
  USceneComponent *this_01;
  TRotator<double> *pTVar29;
  TVector<double> *pTVar30;
  TQuat<double> *pTVar31;
  uint uVar32;
  uint uVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined1 local_b8 [16];
  double local_a8;
  TVector<double>_u_0 local_98;
  TVector<double>_u_0 local_78 [4];
  
  if (*(longlong *)&this->field_0xc0 != 0) {
    if (this->bInterpMovement != '\0') {
      this_01 = (USceneComponent *)FWeakObjectPtr::Get(&(this->InterpolatedComponentPtr).WeakPtr);
      if (this_01 != (USceneComponent *)0x0) {
        uVar4 = this_01->field_0x1a8;
        dVar15 = (this_01->RelativeRotation).Pitch;
        dVar6 = (this_01->RelativeRotation).Yaw;
        dVar2 = (this_01->RelativeRotation).Roll;
        uVar32 = this_01->bAbsoluteLocation | local_98._8_4_ & 0xfffffffe;
        uVar32 = ((byte)uVar4 >> 2 ^ uVar32) & 2 ^ uVar32;
        uVar32 = ((byte)uVar4 >> 2 ^ uVar32) & 4 ^ uVar32;
        uVar28 = 0;
        uVar33 = uVar32 & 7;
        if (uVar33 != 7) {
          uVar28 = 8;
        }
        local_98._8_4_ = uVar28 | uVar32 & 0xfffffff7;
        this_01->field_0x1a8 = uVar4 | 0x1c;
        local_98._0_8_ = this_01;
        if ((uVar33 != 7) && ((this_01->AttachParent).field0_0x0.DebugPtr != (USceneComponent *)0x0)
           ) {
          if (this_01->bComponentToWorldUpdated == 0) {
            USceneComponent::UpdateComponentToWorld(this_01,None,None);
          }
          dVar11 = (this_01->ComponentToWorld).Translation.XY.m128d_f64[1];
          dVar3 = (this_01->ComponentToWorld).Translation.ZW.m128d_f64[0];
          (this_01->RelativeLocation).field0_0x0._s_0.X =
               (this_01->ComponentToWorld).Translation.XY.m128d_f64[0];
          (this_01->RelativeLocation).field0_0x0._s_0.Y = dVar11;
          (this_01->RelativeLocation).field0_0x0._s_0.Z = dVar3;
          pTVar29 = USceneComponent::GetComponentRotation
                              (this_01,(TRotator<double> *)&local_78[0]._s_0);
          dVar11 = pTVar29->Yaw;
          dVar3 = pTVar29->Roll;
          (this_01->RelativeRotation).Pitch = pTVar29->Pitch;
          (this_01->RelativeRotation).Yaw = dVar11;
          (this_01->RelativeRotation).Roll = dVar3;
          dVar11 = (this_01->ComponentToWorld).Scale3D.XY.m128d_f64[1];
          dVar3 = (this_01->ComponentToWorld).Scale3D.ZW.m128d_f64[0];
          (this_01->RelativeScale3D).field0_0x0._s_0.X =
               (this_01->ComponentToWorld).Scale3D.XY.m128d_f64[0];
          (this_01->RelativeScale3D).field0_0x0._s_0.Y = dVar11;
          (this_01->RelativeScale3D).field0_0x0._s_0.Z = dVar3;
        }
        lVar5 = *(longlong *)&this->field_0xc0;
        this_00 = &this->InterpLocationOffset;
        local_78[0]._16_8_ = *(double *)(lVar5 + 0x220);
        dVar3 = *(double *)(lVar5 + 0x210) - (param_1->field0_0x0)._s_0.X;
        dVar34 = (double)local_78[0]._16_8_ - (param_1->field0_0x0)._s_0.Z;
        dVar35 = *(double *)(lVar5 + 0x218) - (param_1->field0_0x0)._s_0.Y;
        dVar36 = dVar3 + (this_00->field0_0x0)._s_0.X;
        dVar11 = dVar35 + (this->InterpLocationOffset).field0_0x0._s_0.Y;
        dVar12 = dVar34 + (this->InterpLocationOffset).field0_0x0._s_0.Z;
        (this_00->field0_0x0)._s_0.X = dVar36;
        (this->InterpLocationOffset).field0_0x0._s_0.Y = dVar11;
        (this->InterpLocationOffset).field0_0x0._s_0.Z = dVar12;
        uVar27 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        if (dVar35 * dVar35 + dVar3 * dVar3 + dVar34 * dVar34 <=
            (double)(this->InterpLocationSnapToTargetDistance *
                    this->InterpLocationSnapToTargetDistance)) {
          fVar1 = this->InterpLocationMaxLagDistance;
          if ((double)(fVar1 * fVar1) < dVar36 * dVar36 + dVar11 * dVar11 + dVar12 * dVar12) {
            pTVar30 = UE::Math::TVector<double>::GetSafeNormal
                                (this_00,(TVector<double> *)&local_78[0]._s_0,
                                 __real_3e45798ee0000000,&UE::Math::TVector<double>::ZeroVector);
            dVar3 = (double)fVar1;
            dVar12 = (pTVar30->field0_0x0)._s_0.Y;
            dVar11 = dVar3 * (pTVar30->field0_0x0)._s_0.Z;
            (this_00->field0_0x0)._s_0.X = dVar3 * (pTVar30->field0_0x0)._s_0.X;
            auVar9._8_4_ = SUB84(dVar11,0);
            auVar9._0_8_ = dVar3 * dVar12;
            auVar9._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
            *(undefined1 (*) [16])((longlong)&(this->InterpLocationOffset).field0_0x0 + 8) = auVar9;
          }
        }
        else {
          (this_00->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          (this->InterpLocationOffset).field0_0x0._s_0.Y = (double)uVar27;
          (this->InterpLocationOffset).field0_0x0._s_0.Z =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        }
        if (this->bInterpRotation == '\0') {
          this_01->bAbsoluteRotation = '\0';
          (this_01->RelativeRotation).Pitch = dVar15;
          (this_01->RelativeRotation).Yaw = dVar6;
          (this_01->RelativeRotation).Roll = dVar2;
          dVar2 = UE::Math::TQuat<double>::Identity.Y;
          (this->InterpRotationOffset).X = UE::Math::TQuat<double>::Identity.X;
          (this->InterpRotationOffset).Y = dVar2;
          dVar2 = UE::Math::TQuat<double>::Identity.W;
          (this->InterpRotationOffset).Z = UE::Math::TQuat<double>::Identity.Z;
          (this->InterpRotationOffset).W = dVar2;
        }
        else {
          lVar5 = *(longlong *)&this->field_0xc0;
          dVar18 = *(double *)(lVar5 + 0x1f0);
          dVar19 = *(double *)(lVar5 + 0x1f8);
          dVar20 = *(double *)(lVar5 + 0x200);
          dVar21 = *(double *)(lVar5 + 0x208);
          pTVar31 = UE::Math::TRotator<double>::Quaternion
                              (param_2,(TQuat<double> *)&local_78[0]._s_0);
          dVar34 = pTVar31->X * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
          dVar35 = pTVar31->Y * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
          dVar36 = pTVar31->Z * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
          dVar13 = pTVar31->W * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
          auVar8._8_4_ = SUB84(dVar34,0);
          auVar8._0_8_ = dVar34;
          auVar8._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
          dVar2 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
          dVar3 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
          dVar15 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
          dVar11 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
          dVar16 = dVar21 * dVar34 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]
                   + dVar18 * dVar13 +
                   dVar20 * dVar35 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]
                   + dVar36 * dVar19 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
          dVar17 = dVar20 * dVar34 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]
                   + dVar19 * dVar13 +
                   dVar21 * dVar35 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]
                   + dVar36 * dVar18 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
          local_b8._8_8_ = auVar8._8_8_;
          dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
          dVar12 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
          dVar22 = (this->InterpRotationOffset).Z;
          dVar23 = (this->InterpRotationOffset).W;
          dVar24 = (this->InterpRotationOffset).X;
          dVar25 = (this->InterpRotationOffset).Y;
          dVar34 = dVar34 * dVar19 * dVar6 + dVar20 * dVar13 + dVar18 * dVar35 * dVar2 +
                   dVar36 * dVar21 * dVar15;
          dVar35 = (double)local_b8._8_8_ * dVar18 * dVar12 + dVar21 * dVar13 +
                   dVar19 * dVar35 * dVar3 + dVar36 * dVar20 * dVar11;
          auVar7._8_4_ = SUB84(dVar34,0);
          auVar7._0_8_ = dVar34;
          auVar7._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
          local_b8._8_8_ = auVar7._8_8_;
          dVar36 = dVar16 * dVar23 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]
                   + dVar35 * dVar24 +
                   dVar17 * dVar22 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]
                   + dVar34 * dVar25 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
          dVar13 = dVar16 * dVar22 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]
                   + dVar35 * dVar25 +
                   dVar17 * dVar23 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]
                   + (double)local_b8._8_8_ * dVar24 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
          auVar10._8_4_ = SUB84(dVar13,0);
          auVar10._0_8_ = dVar36;
          auVar10._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
          (this->InterpRotationOffset).X = dVar36;
          (this->InterpRotationOffset).Y = (double)auVar10._8_8_;
          dVar2 = dVar16 * dVar25 * dVar6 + dVar35 * dVar22 + dVar17 * dVar24 * dVar2 +
                  dVar34 * dVar23 * dVar15;
          dVar15 = dVar16 * dVar24 * dVar12 + dVar35 * dVar23 + dVar17 * dVar25 * dVar3 +
                   (double)local_b8._8_8_ * dVar22 * dVar11;
          auVar14._8_4_ = SUB84(dVar15,0);
          auVar14._0_8_ = dVar2;
          auVar14._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
          (this->InterpRotationOffset).Z = dVar2;
          (this->InterpRotationOffset).W = (double)auVar14._8_8_;
        }
        local_b8._0_8_ = param_2->Pitch;
        local_b8._8_8_ = param_2->Yaw;
        local_a8 = param_2->Roll;
        local_78[0]._0_8_ = (param_1->field0_0x0)._s_0.X;
        local_78[0]._8_8_ = (param_1->field0_0x0)._s_0.Y;
        local_78[0]._16_8_ = (param_1->field0_0x0)._s_0.Z;
        USceneComponent::SetRelativeLocationAndRotation
                  (*(USceneComponent **)&this->field_0xc0,(TVector<double> *)&local_78[0]._s_0,
                   (TRotator<double> *)local_b8,false,(FHitResult *)0x0,None);
        this->bInterpolationComplete = '\0';
        FScopedPreventAttachedComponentMove::~FScopedPreventAttachedComponentMove
                  ((FScopedPreventAttachedComponentMove *)&local_98._s_0);
        return;
      }
      (**(code **)(*(longlong *)this + 0x638))(this);
      this->bInterpolationComplete = '\x01';
    }
    local_78[0]._0_8_ = param_2->Pitch;
    local_78[0]._8_8_ = param_2->Yaw;
    local_78[0]._16_8_ = param_2->Roll;
    local_98._s_0.X = (param_1->field0_0x0)._s_0.X;
    local_98._s_0.Y = (param_1->field0_0x0)._s_0.Y;
    local_98._s_0.Z = (param_1->field0_0x0)._s_0.Z;
    USceneComponent::SetRelativeLocationAndRotation
              (*(USceneComponent **)&this->field_0xc0,(TVector<double> *)&local_98._s_0,
               (TRotator<double> *)&local_78[0]._s_0,false,(FHitResult *)0x0,None);
  }
  return;
}

// PostLoad @ 14795cd20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UProjectileMovementComponent::PostLoad(UProjectileMovementComponent *this)

{
  float fVar1;
  float fVar2;
  int local_res10;
  
  UMovementComponent::PostLoad((UMovementComponent *)this);
  UObjectBaseUtility::GetLinkerUEVersion((UObjectBaseUtility *)this);
  fVar1 = __real_3f800000;
  if (local_res10 < 0x102) {
    this->bInitialVelocityInLocalSpace = '\0';
    fVar2 = fVar1 - this->Bounciness;
    if (fVar1 <= fVar2) {
      fVar2 = fVar1;
    }
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    this->Friction = fVar2;
  }
  return;
}

// ResetInterpolation @ 147963c80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UProjectileMovementComponent::ResetInterpolation(UProjectileMovementComponent *this)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  USceneComponent *this_00;
  TVector<double>_u_0 local_28;
  
  this_00 = (USceneComponent *)FWeakObjectPtr::Get(&(this->InterpolatedComponentPtr).WeakPtr);
  if (this_00 != (USceneComponent *)0x0) {
    local_28._s_0.X = (this->InterpInitialLocationOffset).field0_0x0._s_0.X;
    local_28._s_0.Y = (this->InterpInitialLocationOffset).field0_0x0._s_0.Y;
    local_28._s_0.Z = (this->InterpInitialLocationOffset).field0_0x0._s_0.Z;
    USceneComponent::SetRelativeLocationAndRotation
              (this_00,(TVector<double> *)&local_28._s_0,&this->InterpInitialRotationOffset,false,
               (FHitResult *)0x0,None);
  }
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->InterpLocationOffset).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->InterpLocationOffset).field0_0x0._s_0.Y = (double)uVar1;
  (this->InterpLocationOffset).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TQuat<double>::Identity.Y;
  (this->InterpRotationOffset).X = UE::Math::TQuat<double>::Identity.X;
  (this->InterpRotationOffset).Y = dVar2;
  dVar3 = UE::Math::TQuat<double>::Identity.W;
  dVar2 = UE::Math::TQuat<double>::Identity.Z;
  this->bInterpolationComplete = '\x01';
  (this->InterpRotationOffset).Z = dVar2;
  (this->InterpRotationOffset).W = dVar3;
  this->ThrottleInterpolationFramesSinceInterp = 0;
  return;
}

// ResetThrottleInterpolation @ 1479640f0

void __thiscall
UProjectileMovementComponent::ResetThrottleInterpolation
          (UProjectileMovementComponent *this,float param_1)

{
  this->ThrottleInterpolationFramesSinceInterp = 0;
  return;
}

// SetInterpolatedComponent @ 147967f60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UProjectileMovementComponent::SetInterpolatedComponent
          (UProjectileMovementComponent *this,USceneComponent *param_1)

{
  byte bVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  USceneComponent *pUVar8;
  TQuat<double> *pTVar9;
  int iVar10;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  TRotator<double> local_48;
  TQuat<double> local_28;
  
  pUVar8 = (USceneComponent *)FWeakObjectPtr::Get(&(this->InterpolatedComponentPtr).WeakPtr);
  if (param_1 != pUVar8) {
    if (param_1 != (USceneComponent *)0x0) {
      if (((*(USceneComponent **)&this->field_0xc0 != (USceneComponent *)0x0) &&
          (*(USceneComponent **)&this->field_0xc0 == param_1)) &&
         (bVar5 = `UProjectileMovementComponent::SetInterpolatedComponent'::__l9::<lambda_1>::
                  operator()(&local_res8), !bVar5)) {
        return;
      }
      (**(code **)(*(longlong *)this + 0x638))(this);
      local_res8 = (FWeakObjectPtr)param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&(this->InterpolatedComponentPtr).WeakPtr,(FObjectPtr)&local_res8);
      dVar2 = (param_1->RelativeLocation).field0_0x0._s_0.Y;
      (this->InterpInitialLocationOffset).field0_0x0._s_0.X =
           (param_1->RelativeLocation).field0_0x0._s_0.X;
      (this->InterpInitialLocationOffset).field0_0x0._s_0.Y = dVar2;
      (this->InterpInitialLocationOffset).field0_0x0._s_0.Z =
           (param_1->RelativeLocation).field0_0x0._s_0.Z;
      local_48.Pitch = (param_1->RelativeRotation).Pitch;
      local_48.Yaw = (param_1->RelativeRotation).Yaw;
      local_48.Roll = (param_1->RelativeRotation).Roll;
      pTVar9 = UE::Math::TRotator<double>::Quaternion(&local_48,&local_28);
      iVar10 = this->ThrottleInterpolationSkipFramesRecent;
      dVar2 = pTVar9->Y;
      (this->InterpInitialRotationOffset).X = pTVar9->X;
      (this->InterpInitialRotationOffset).Y = dVar2;
      dVar2 = pTVar9->Z;
      dVar3 = pTVar9->W;
      this->bInterpolationComplete = '\x01';
      (this->InterpInitialRotationOffset).Z = dVar2;
      (this->InterpInitialRotationOffset).W = dVar3;
      if ((0 < iVar10) && (0 < iVar10 + 1)) {
        uVar6 = rand();
        iVar7 = (int)((float)(uVar6 & 0x7fff) * (float)(iVar10 + 1) * __real_38000100);
        if (iVar7 < iVar10) {
          iVar10 = iVar7;
        }
        this->ThrottleInterpolationFramesSinceInterp = iVar10;
        return;
      }
      this->ThrottleInterpolationFramesSinceInterp = 0;
      return;
    }
    (**(code **)(*(longlong *)this + 0x638))(this);
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = 0;
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    (this->InterpolatedComponentPtr).WeakPtr = local_res8;
    uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    (this->InterpInitialLocationOffset).field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (this->InterpInitialLocationOffset).field0_0x0._s_0.Y = (double)uVar4;
    (this->InterpInitialLocationOffset).field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    dVar2 = UE::Math::TQuat<double>::Identity.Y;
    (this->InterpInitialRotationOffset).X = UE::Math::TQuat<double>::Identity.X;
    (this->InterpInitialRotationOffset).Y = dVar2;
    dVar3 = UE::Math::TQuat<double>::Identity.W;
    dVar2 = UE::Math::TQuat<double>::Identity.Z;
    this->bInterpolationComplete = '\x01';
    bVar1 = this->field_0x120;
    (this->InterpInitialRotationOffset).Z = dVar2;
    (this->InterpInitialRotationOffset).W = dVar3;
    if (((bVar1 & 2) != 0) && (*(longlong *)&this->field_0xc0 == 0)) {
      (**(code **)(*(longlong *)this + 0x540))(this);
    }
  }
  return;
}

// SetVelocityInLocalSpace @ 14796ce10

void __thiscall
UProjectileMovementComponent::SetVelocityInLocalSpace
          (UProjectileMovementComponent *this,TVector<double> *param_1)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined4 uVar16;
  double dVar19;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  lVar4 = *(longlong *)&this->field_0xc0;
  if (lVar4 != 0) {
    auVar2 = *(undefined1 (*) [16])(lVar4 + 0x200);
    auVar9 = *(undefined1 (*) [16])(lVar4 + 0x1f0);
    dVar8 = *(double *)(lVar4 + 0x208);
    auVar3 = *(undefined1 (*) [16])&param_1->field0_0x0;
    dVar1 = (param_1->field0_0x0)._s_0.Z;
    dVar19 = auVar3._8_8_;
    dVar7 = auVar2._0_8_;
    auVar10 = blendpd(auVar9,auVar2,2);
    auVar17._0_8_ = dVar19 * auVar9._0_8_ - auVar9._8_8_ * auVar3._0_8_;
    auVar17._8_8_ = dVar1 * auVar9._8_8_ - dVar7 * dVar19;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = dVar1;
    auVar9 = blendpd(auVar3,auVar9,2);
    auVar12._0_8_ = auVar9._0_8_ * dVar7 - auVar10._0_8_ * dVar1;
    auVar12._8_8_ = auVar9._8_8_ * auVar2._8_8_ - auVar10._8_8_ * 0.0;
    auVar9 = *(undefined1 (*) [16])(lVar4 + 0x1f0);
    auVar10 = blendpd(auVar17,auVar12,2);
    auVar18._0_8_ = auVar10._0_8_ + auVar10._0_8_;
    auVar18._8_8_ = auVar10._8_8_ + auVar10._8_8_;
    dVar5 = auVar17._8_8_ + auVar17._8_8_;
    dVar6 = auVar12._0_8_ + auVar12._0_8_;
    uVar16 = (undefined4)((ulonglong)dVar6 >> 0x20);
    auVar14._8_4_ = SUB84(dVar6,0);
    auVar14._0_8_ = dVar5;
    auVar14._12_4_ = uVar16;
    auVar11._8_4_ = SUB84(dVar6,0);
    auVar11._0_8_ = dVar5;
    auVar11._12_4_ = uVar16;
    auVar12 = blendpd(auVar11,auVar18,2);
    auVar15._0_8_ = auVar14._8_8_ * auVar9._0_8_ - auVar9._8_8_ * dVar5;
    auVar15._8_8_ = auVar18._0_8_ * auVar9._8_8_ - dVar7 * dVar6;
    auVar10._8_4_ = SUB84(auVar15._8_8_,0);
    auVar10._0_8_ = auVar15._0_8_;
    auVar10._12_4_ = (int)((ulonglong)auVar15._8_8_ >> 0x20);
    auVar9 = blendpd(auVar9,auVar2,2);
    auVar13._0_8_ = auVar12._0_8_ * dVar7 - auVar9._0_8_ * auVar18._0_8_;
    auVar13._8_8_ = auVar12._8_8_ * auVar2._8_8_ - auVar9._8_8_ * auVar18._8_8_;
    auVar9 = blendpd(auVar15,auVar13,2);
    dVar7 = dVar6 * dVar8 + dVar19 + auVar13._0_8_;
    auVar2._8_4_ = SUB84(dVar7,0);
    auVar2._0_8_ = dVar5 * dVar8 + auVar3._0_8_ + auVar10._8_8_;
    auVar2._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    *(undefined1 (*) [16])&this->field_0xd8 = auVar2;
    *(double *)&this->field_0xe8 = auVar18._0_8_ * dVar8 + dVar1 + auVar9._0_8_;
  }
  return;
}

// ShouldUseSubStepping @ 14796f430

bool __thiscall
UProjectileMovementComponent::ShouldUseSubStepping(UProjectileMovementComponent *this)

{
  bool bVar1;
  float fVar2;
  
  if ((this->bForceSubStepping != '\0') ||
     (fVar2 = (float)(**(code **)(*(longlong *)this + 0x4f8))(), fVar2 != 0.0)) {
    return true;
  }
  if (((bool)this->bIsHomingProjectile) &&
     (bVar1 = FWeakObjectPtr::IsValid(&(this->HomingTargetComponent).WeakPtr), bVar1)) {
    return true;
  }
  return false;
}

// StaticRegisterNativesUProjectileMovementComponent @ 147970760

void __cdecl UProjectileMovementComponent::StaticRegisterNativesUProjectileMovementComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 8;
  local_18.DataPtr = Z_Construct_UClass_UProjectileMovementComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// StopSimulating @ 147970a30

void __thiscall
UProjectileMovementComponent::StopSimulating(UProjectileMovementComponent *this,FHitResult *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 local_108 [32];
  
  uVar1 = CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                   UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
  lVar10 = *(longlong *)this;
  *(ulonglong *)&this->field_0xd8 =
       CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
  *(undefined8 *)&this->field_0xe0 = uVar1;
  *(double *)&this->field_0xe8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar5 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                           UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
  (this->PendingForce).field0_0x0._s_0.X =
       (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                        UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
  (this->PendingForce).field0_0x0._s_0.Y = dVar5;
  (this->PendingForce).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  *(undefined4 *)&(this->PendingForceThisUpdate).field0_0x0 =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  *(undefined4 *)((longlong)&(this->PendingForceThisUpdate).field0_0x0 + 4) = uVar6;
  *(undefined4 *)((longlong)&(this->PendingForceThisUpdate).field0_0x0 + 8) = uVar7;
  *(undefined4 *)((longlong)&(this->PendingForceThisUpdate).field0_0x0 + 0xc) = uVar8;
  (this->PendingForceThisUpdate).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (**(code **)(lVar10 + 0x550))();
  (**(code **)(*(longlong *)this + 0x530))(this,0);
  lVar10 = 2;
  puVar9 = local_108;
  do {
    uVar1 = *(undefined8 *)&param_1->Distance;
    uVar2 = *(undefined8 *)&param_1->Location;
    uVar3 = *(undefined8 *)&(param_1->Location).field_0x8;
    *puVar9 = *(undefined8 *)param_1;
    puVar9[1] = uVar1;
    uVar1 = *(undefined8 *)&(param_1->Location).field_0x10;
    uVar4 = *(undefined8 *)&param_1->ImpactPoint;
    puVar9[2] = uVar2;
    puVar9[3] = uVar3;
    uVar2 = *(undefined8 *)&(param_1->ImpactPoint).field_0x8;
    uVar3 = *(undefined8 *)&(param_1->ImpactPoint).field_0x10;
    puVar9[4] = uVar1;
    puVar9[5] = uVar4;
    uVar1 = *(undefined8 *)&param_1->Normal;
    uVar4 = *(undefined8 *)&(param_1->Normal).field_0x8;
    puVar9[6] = uVar2;
    puVar9[7] = uVar3;
    uVar2 = *(undefined8 *)&(param_1->Normal).field_0x10;
    uVar3 = *(undefined8 *)&param_1->ImpactNormal;
    puVar9[8] = uVar1;
    puVar9[9] = uVar4;
    uVar1 = *(undefined8 *)&(param_1->ImpactNormal).field_0x8;
    uVar4 = *(undefined8 *)&(param_1->ImpactNormal).field_0x10;
    puVar9[10] = uVar2;
    puVar9[0xb] = uVar3;
    uVar2 = *(undefined8 *)&param_1->TraceStart;
    uVar3 = *(undefined8 *)&(param_1->TraceStart).field_0x8;
    puVar9[0xc] = uVar1;
    puVar9[0xd] = uVar4;
    puVar9[0xe] = uVar2;
    puVar9[0xf] = uVar3;
    lVar10 = lVar10 + -1;
    puVar9 = puVar9 + 0x10;
    param_1 = (FHitResult *)&(param_1->TraceStart).field_0x10;
  } while (lVar10 != 0);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnProjectileStop,
             local_108);
  return;
}

// TickComponent @ 147971a10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
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
UProjectileMovementComponent::TickComponent
          (UProjectileMovementComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  int *piVar1;
  float fVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  bool bVar17;
  char cVar18;
  bool bVar19;
  int iVar20;
  FName *pFVar21;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_UProjectileMovementComponent::TickComponent(float,ELevelTick,FActorComponentTickFunction_*)_::_2_::FStat_STAT_ProjectileMovementComponent_TickComponent>
  FVar22;
  USceneComponent *pUVar23;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_UProjectileMovementComponent::TickComponent(float,ELevelTick,FActorComponentTickFunction_*)_::_8_::FStat_STAT_ProjectileMovementComponent_TickInterpolation>
  FVar24;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_UProjectileMovementComponent::TickComponent(float,ELevelTick,FActorComponentTickFunction_*)_::_2_::FStat_STAT_ProjectileMovementComponent_PerformMovement>
  FVar25;
  UWorld *pUVar26;
  TQuat<double> *pTVar27;
  undefined8 *puVar28;
  FThreadStats *pFVar29;
  FThreadStatsPool *pFVar30;
  double *pdVar31;
  uint uVar32;
  Type TVar33;
  FNameEntryId FVar34;
  FName FVar35;
  USceneComponent *pUVar36;
  FName FVar37;
  FName FVar38;
  uint uVar39;
  bool bVar40;
  uint uVar41;
  uint uVar42;
  float fVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined1 auStackY_1298 [32];
  FActorComponentTickFunction *local_1220;
  float local_1218;
  int local_1214;
  uint local_1210;
  uint uStack_120c;
  float local_1208;
  TVector<double>_u_0 local_1200;
  FColor_u_0 local_11e8;
  FColor_u_0 local_11e4;
  FName local_11e0;
  FName local_11d8;
  undefined8 local_11d0;
  FName local_11c8;
  FName local_11c0;
  FName local_11b0;
  FName local_11a0;
  FString local_1190;
  LARGE_INTEGER local_1180;
  FName local_1178;
  FName local_1170;
  FName local_1168;
  FName local_1160;
  FName local_1158;
  LARGE_INTEGER local_1150;
  FString local_1148;
  FString local_1138;
  FStatMessage local_1128;
  TRotator<double> local_1118;
  FString local_1100;
  FStatMessage local_10f0;
  FString local_10e0;
  FString local_10d0;
  FString local_10c0;
  FString local_10b0;
  FString local_10a0;
  FString local_1090;
  FString local_1080;
  FString local_1070;
  FString local_1060;
  FString local_1050;
  undefined8 local_1040;
  undefined8 uStack_1038;
  undefined8 local_1030;
  undefined4 uStack_1028;
  undefined1 uStack_1024;
  undefined2 uStack_1023;
  undefined1 uStack_1021;
  TQuat<double> local_1018;
  undefined1 local_ff8 [24];
  FName local_fe0;
  FName local_fd8;
  FName local_fd0;
  FName local_fc8;
  FName local_fc0;
  FName local_fb8 [2];
  undefined4 local_fa8;
  undefined4 uStack_fa4;
  undefined4 uStack_fa0;
  undefined4 uStack_f9c;
  undefined8 local_f98;
  undefined4 local_f88;
  undefined4 uStack_f84;
  undefined4 uStack_f80;
  undefined4 uStack_f7c;
  double local_f78;
  undefined1 local_f68 [16];
  double local_f58;
  undefined4 local_f48;
  undefined4 uStack_f44;
  undefined4 uStack_f40;
  undefined4 uStack_f3c;
  undefined8 local_f38;
  TQuat<double> local_f28;
  undefined8 local_f08;
  undefined8 uStack_f00;
  undefined8 local_ef8;
  undefined8 local_ef0;
  undefined8 uStack_ee8;
  undefined8 local_ee0;
  undefined8 local_ed8;
  undefined8 uStack_ed0;
  undefined8 local_ec8;
  undefined8 local_ec0;
  undefined8 uStack_eb8;
  undefined8 local_eb0;
  undefined1 local_ea8 [4];
  float local_ea4;
  undefined4 local_e68;
  undefined4 uStack_e64;
  undefined4 uStack_e60;
  undefined4 uStack_e5c;
  undefined8 local_e58;
  undefined4 local_e04;
  byte local_dfb;
  undefined8 local_df0;
  undefined8 uStack_de8;
  undefined8 local_de0;
  undefined8 uStack_dd8;
  undefined1 local_da8 [24];
  undefined1 local_d90 [24];
  undefined1 local_d78 [32];
  TQuat<double> local_d58;
  TQuat<double> local_d38;
  FScopedMovementUpdate local_d18;
  FScopedMovementUpdate local_708;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_1298;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_1220 = param_3;
  local_1208 = param_1;
  if ((*(int *)(lVar4 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_ProjectileMovementComponent_TickComponent ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UProjectileMovementComponent::TickComponent(float,ELevelTick,FActorComponentTickFunction_*)_::_2_::FStat_STAT_ProjectileMovementComponent_TickComponent>
         )0x0) {
      pFVar21 = ::FName::FName(&local_fe0,"STAT_ProjectileMovementComponent_TickComponent");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_ProjectileMovementComponent_TickComponent,*pFVar21,
                 L"STAT_ProjectileMovementComponent_TickComponent","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar22 = StatPtr_STAT_ProjectileMovementComponent_TickComponent;
  if (StatPtr_STAT_ProjectileMovementComponent_TickComponent ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UProjectileMovementComponent::TickComponent(float,ELevelTick,FActorComponentTickFunction_*)_::_2_::FStat_STAT_ProjectileMovementComponent_TickComponent>
       )0x0) {
    pFVar21 = ::FName::FName(&local_fd8,"STAT_ProjectileMovementComponent_TickComponent");
    FVar22 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UProjectileMovementComponent::TickComponent(float,ELevelTick,FActorComponentTickFunction_*)_::_2_::FStat_STAT_ProjectileMovementComponent_TickComponent>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_ProjectileMovementComponent_TickComponent,*pFVar21,
                          L"STAT_ProjectileMovementComponent_TickComponent","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar37 = *(FName *)FVar22;
  local_11b0.ComparisonIndex.Value = 0;
  local_11b0.Number = 0;
  bVar12 = false;
  bVar11 = false;
  if ((FVar37.ComparisonIndex.Value.Value == 0) && (FVar37.Number == 0)) {
LAB_147971bd6:
    bVar13 = false;
    FVar37 = local_11b0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_11e8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_11e8._s_0,(char *)*(FName *)((longlong)FVar22 + 0x10));
      bVar12 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_11e0.ComparisonIndex.Value = FVar37.ComparisonIndex.Value.Value;
        local_11e0.Number = FVar37.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_11e0,(wchar_t *)*(FName *)((longlong)FVar22 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ProjectileMovementComponent.cpp"
                   ,0x8f);
        bVar12 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147971bd6;
    FThreadStats::AddMessage(FVar37,CycleScopeStart);
    bVar13 = true;
  }
  if (__CsvProfilerStat144 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("ProjectileMovement");
    __CsvProfilerStat144 = true;
  }
  FCsvProfiler::BeginExclusiveStat("ProjectileMovement","CSV_ProjectileMovement");
  if ((this->bInterpolationUseScopedMovement == '\0') || (this->bSimulationEnabled == '\0')) {
    TVar33 = ImmediateUpdates;
  }
  else {
    TVar33 = DeferredUpdates;
  }
  pUVar23 = (USceneComponent *)FWeakObjectPtr::Get(&(this->InterpolatedComponentPtr).WeakPtr);
  FScopedMovementUpdate::FScopedMovementUpdate(&local_708,pUVar23,TVar33,true);
  if (this->bInterpolationComplete == '\0') {
    if ((*(int *)(lVar4 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      if (StatPtr_STAT_ProjectileMovementComponent_TickInterpolation ==
          (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UProjectileMovementComponent::TickComponent(float,ELevelTick,FActorComponentTickFunction_*)_::_8_::FStat_STAT_ProjectileMovementComponent_TickInterpolation>
           )0x0) {
        pFVar21 = ::FName::FName(&local_fd0,"STAT_ProjectileMovementComponent_TickInterpolation");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &StatPtr_STAT_ProjectileMovementComponent_TickInterpolation,*pFVar21,
                   L"STAT_ProjectileMovementComponent_TickInterpolation","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
        _Init_thread_footer(&::_TSS1);
      }
      else {
        _Init_thread_footer(&::_TSS1);
      }
    }
    FVar24 = StatPtr_STAT_ProjectileMovementComponent_TickInterpolation;
    if (StatPtr_STAT_ProjectileMovementComponent_TickInterpolation ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UProjectileMovementComponent::TickComponent(float,ELevelTick,FActorComponentTickFunction_*)_::_8_::FStat_STAT_ProjectileMovementComponent_TickInterpolation>
         )0x0) {
      pFVar21 = ::FName::FName(&local_fc8,"STAT_ProjectileMovementComponent_TickInterpolation");
      FVar24 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UProjectileMovementComponent::TickComponent(float,ELevelTick,FActorComponentTickFunction_*)_::_8_::FStat_STAT_ProjectileMovementComponent_TickInterpolation>
                )FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_ProjectileMovementComponent_TickInterpolation,*pFVar21,
                            L"STAT_ProjectileMovementComponent_TickInterpolation","STATGROUP_Quick",
                            "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar38 = *(FName *)FVar24;
    bVar10 = false;
    bVar17 = false;
    local_11a0.ComparisonIndex.Value = 0;
    local_11a0.Number = 0;
    if ((FVar38.ComparisonIndex.Value.Value == 0) && (FVar38.Number == 0)) {
      (**(code **)(*(longlong *)this + 0x688))(this,param_1);
      param_3 = local_1220;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_11e4.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_11e4._s_0,(char *)*(FName *)((longlong)FVar24 + 0x10));
        bVar10 = false;
        bVar17 = true;
        if (-1 < CpuChannel->Enabled) {
          local_11d8.ComparisonIndex.Value = FVar38.ComparisonIndex.Value.Value;
          local_11d8.Number = FVar38.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_11d8,(wchar_t *)*(FName *)((longlong)FVar24 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ProjectileMovementComponent.cpp"
                     ,0x9a);
          bVar10 = true;
          bVar17 = true;
        }
      }
      bVar40 = FThreadStats::bPrimaryEnable != false;
      FVar35 = local_11a0;
      if (bVar40) {
        FThreadStats::AddMessage(FVar38,CycleScopeStart);
        FVar35 = FVar38;
      }
      (**(code **)(*(longlong *)this + 0x688))(this,param_1);
      if (bVar17) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar10) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      param_3 = local_1220;
      if ((((bVar40) && (FVar35 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
         && (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar29 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar29 == (FThreadStats *)0x0) {
          pFVar30 = FThreadStatsPool::Get();
          pFVar29 = FThreadStatsPool::GetFromPool(pFVar30);
        }
        param_3 = local_1220;
        if (pFVar29->bWaitForExplicitFlush < pFVar29->ScopeCount) {
          local_10f0.NameAndInfo.Index = FVar35.ComparisonIndex.Value;
          local_10f0.NameAndInfo.Number = FVar35.Number & 0xffff6fff | 0x6000;
          QueryPerformanceCounter(&local_1180);
          local_10f0.StatData.Pad[4] = '\0';
          local_10f0.StatData.Pad[5] = '\0';
          local_10f0.StatData.Pad[6] = '\0';
          local_10f0.StatData.Pad[7] = '\0';
          local_10f0.StatData.Pad[0] = local_1180.s.LowPart._0_1_;
          local_10f0.StatData.Pad[1] = local_1180.s.LowPart._1_1_;
          local_10f0.StatData.Pad[2] = local_1180.s.LowPart._2_1_;
          local_10f0.StatData.Pad[3] = local_1180.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(pFVar29,&local_10f0);
          piVar1 = &pFVar29->ScopeCount;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FThreadStats::Flush(pFVar29,false,false);
            param_3 = local_1220;
          }
          else {
            param_3 = local_1220;
            if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(pFVar29,false,false);
              param_3 = local_1220;
            }
          }
        }
      }
    }
  }
  lVar5 = *(longlong *)&this->field_0xc0;
  dVar7 = (this->PendingForce).field0_0x0._s_0.Y;
  dVar3 = (this->PendingForce).field0_0x0._s_0.Z;
  (this->PendingForceThisUpdate).field0_0x0._s_0.X = (this->PendingForce).field0_0x0._s_0.X;
  (this->PendingForceThisUpdate).field0_0x0._s_0.Y = dVar7;
  (this->PendingForceThisUpdate).field0_0x0._s_0.Z = dVar3;
  uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->PendingForce).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PendingForce).field0_0x0._s_0.Y = (double)uVar8;
  (this->PendingForce).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (((lVar5 == 0) || ((this->field_0x9a & 0x10) == 0)) ||
     (cVar18 = (**(code **)(*(longlong *)this + 0x518))(this,param_1), cVar18 != '\0'))
  goto LAB_147973111;
  UMovementComponent::TickComponent((UMovementComponent *)this,param_1,param_2,param_3);
  if (((*(longlong *)&this->field_0xc0 == 0) ||
      ((*(uint *)(*(longlong *)&this->field_0xc0 + 8) >> 0x1e & 1) != 0)) ||
     ((this->bSimulationEnabled == '\0' ||
      ((lVar5 = *(longlong *)(*(longlong *)&this->field_0xc0 + 0xa8), lVar5 == 0 ||
       (cVar18 = (**(code **)(*(longlong *)this + 0x608))(this), cVar18 == '\0'))))))
  goto LAB_147973111;
  uVar39 = 0;
  pUVar23 = (USceneComponent *)0x0;
  local_11d0 = 0;
  cVar18 = (**(code **)(**(longlong **)&this->field_0xc0 + 0x4f8))();
  if (cVar18 != '\0') goto LAB_147973111;
  cVar18 = *(char *)(lVar5 + 0x155);
  if (cVar18 == '\0') {
    uVar44 = (undefined4)__real_3ff0000000000000;
    uVar45 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  }
  else if (cVar18 == '\x01') {
    uVar44 = (undefined4)__real_3fb999999999999a;
    uVar45 = (undefined4)((ulonglong)__real_3fb999999999999a >> 0x20);
  }
  else if (cVar18 == '\x02') {
    uVar44 = (undefined4)__real_3f847ae147ae147b;
    uVar45 = (undefined4)((ulonglong)__real_3f847ae147ae147b >> 0x20);
  }
  else {
    uVar44 = (undefined4)__real_3f1a36e2e0000000;
    uVar45 = (undefined4)((ulonglong)__real_3f1a36e2e0000000 >> 0x20);
  }
  local_1214 = 0;
  memset(local_ea8,0,0x100);
  local_1040 = 0;
  uStack_1038 = 0;
  uStack_1023 = 0;
  local_df0 = 0;
  uStack_de8 = 0;
  uStack_1021 = 0;
  local_1030 = 0;
  uStack_1028 = 0xffffffff;
  uStack_1024 = 0;
  uStack_dd8 = 0xffffffff;
  local_e04 = 0xffffffff;
  local_ea4 = 1.0;
  local_de0 = 0;
  if ((*(int *)(lVar4 + 0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    if (StatPtr_STAT_ProjectileMovementComponent_PerformMovement ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UProjectileMovementComponent::TickComponent(float,ELevelTick,FActorComponentTickFunction_*)_::_2_::FStat_STAT_ProjectileMovementComponent_PerformMovement>
         )0x0) {
      pFVar21 = ::FName::FName(local_fb8,"STAT_ProjectileMovementComponent_PerformMovement");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_ProjectileMovementComponent_PerformMovement,*pFVar21,
                 L"STAT_ProjectileMovementComponent_PerformMovement","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS2);
  }
  FVar25 = StatPtr_STAT_ProjectileMovementComponent_PerformMovement;
  if (StatPtr_STAT_ProjectileMovementComponent_PerformMovement ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UProjectileMovementComponent::TickComponent(float,ELevelTick,FActorComponentTickFunction_*)_::_2_::FStat_STAT_ProjectileMovementComponent_PerformMovement>
       )0x0) {
    pFVar21 = ::FName::FName(&local_fc0,"STAT_ProjectileMovementComponent_PerformMovement");
    FVar25 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UProjectileMovementComponent::TickComponent(float,ELevelTick,FActorComponentTickFunction_*)_::_2_::FStat_STAT_ProjectileMovementComponent_PerformMovement>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_ProjectileMovementComponent_PerformMovement,*pFVar21,
                          L"STAT_ProjectileMovementComponent_PerformMovement","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar38 = *(FName *)FVar25;
  bVar10 = false;
  bVar40 = false;
  local_11c0.ComparisonIndex.Value = 0;
  local_11c0.Number = 0;
  bVar17 = false;
  bVar19 = false;
  FVar34 = FVar38.ComparisonIndex.Value;
  uVar32 = FVar38.Number;
  if ((FVar34.Value == 0) && (uVar32 == 0)) {
LAB_1479721b4:
    bVar40 = bVar19;
    bVar10 = bVar17;
    bVar17 = false;
    FVar38 = local_11c0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1220 = (FActorComponentTickFunction *)((ulonglong)local_1220 & 0xffffffff00000000);
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1220,(char *)*(FName *)((longlong)FVar25 + 0x10));
      bVar10 = false;
      bVar40 = true;
      bVar17 = false;
      bVar19 = true;
      if (-1 < CpuChannel->Enabled) {
        local_11c8.ComparisonIndex.Value = FVar34.Value;
        local_11c8.Number = uVar32;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_11c8,(wchar_t *)*(FName *)((longlong)FVar25 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ProjectileMovementComponent.cpp"
                   ,0xcb);
        bVar10 = true;
        bVar40 = true;
        bVar17 = true;
        bVar19 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1479721b4;
    local_1210 = FVar34.Value;
    uStack_120c = uVar32;
    FThreadStats::AddMessage(FVar38,CycleScopeStart);
    bVar17 = true;
  }
  pUVar36 = pUVar23;
  if (((this->bSimulationUseScopedMovement != 0) &&
      (pUVar36 = *(USceneComponent **)&this->field_0xc0,
      UE::GC::GIsIncrementalReachabilityPending != false)) && (pUVar36 != (USceneComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar36);
  }
  FScopedMovementUpdate::FScopedMovementUpdate(&local_d18,pUVar36,DeferredUpdates,true);
  dVar7 = __real_4076800000000000;
  dVar3 = __real_4066800000000000;
  fVar16 = __real_358637bd;
  uVar14 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar32 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  if (this->bSimulationEnabled != '\0') {
    while (((fVar15 = __real_3f000000, local_1210 = uVar39, fVar16 <= param_1 &&
            ((int)uVar39 < this->MaxSimulationIterations)) &&
           (((*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0 &&
            ((*(longlong *)&this->field_0xc0 != 0 && ((this->field_0x9a & 0x10) != 0))))))) {
      uVar39 = uVar39 + 1;
      cVar18 = (**(code **)(*(longlong *)this + 0x620))(this);
      fVar43 = param_1;
      if (cVar18 != '\0') {
        fVar2 = this->MaxSimulationTimeStep;
        if (fVar2 < param_1) {
          if ((int)uVar39 < this->MaxSimulationIterations) {
            fVar43 = param_1 * fVar15;
            if (fVar2 <= param_1 * fVar15) {
              fVar43 = fVar2;
            }
          }
          else {
            pUVar26 = *(UWorld **)&this->field_0xb0;
            if (((((pUVar26 != (UWorld *)0x0) ||
                  (pUVar26 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
                  pUVar26 != (UWorld *)0x0)) &&
                 (pUVar26->DeltaTimeSeconds <= __real_3e4ccccd &&
                  __real_3e4ccccd != pUVar26->DeltaTimeSeconds)) &&
                ((uVar41 = s_WarningCount + 1, s_WarningCount < 100 ||
                 (s_WarningCount = uVar41, ((byte)GFrameCounter & 0xf) == 0)))) &&
               (s_WarningCount = uVar41, 2 < (byte)LogProjectileMovement._0_1_)) {
              if (*(UObjectBaseUtility **)&this->field_0xc0 == (UObjectBaseUtility *)0x0) {
                ::FString::FString(&local_1190,L"None");
              }
              else {
                UObjectBaseUtility::GetPathName
                          (*(UObjectBaseUtility **)&this->field_0xc0,&local_1190,(UObject *)0x0);
              }
              UE::Logging::Private::BasicLog<3>
                        (&::LOG_Static,(FLogCategoryBase *)&LogProjectileMovement);
              if (local_1190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1190.Data.AllocatorInstance.Data);
              }
            }
          }
        }
        if (fVar43 <= fVar16) {
          fVar43 = fVar16;
        }
      }
      param_1 = param_1 - fVar43;
      if (5 < (byte)LogProjectileMovement._0_1_) {
        ::FString::PrintfImpl(&local_10c0,L"X=%3.3f Y=%3.3f Z=%3.3f");
        lVar4 = *(longlong *)&this->field_0xc0;
        local_f08 = *(undefined8 *)(lVar4 + 0x210);
        uStack_f00 = *(undefined8 *)(lVar4 + 0x218);
        local_ef8 = *(undefined8 *)(lVar4 + 0x220);
        ::FString::PrintfImpl(&local_1100,L"X=%3.3f Y=%3.3f Z=%3.3f");
        local_1178 = *(FName *)(lVar5 + 0x18);
        ::FName::ToString(&local_1178,&local_10e0);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogProjectileMovement);
        if (local_10e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_10e0.Data.AllocatorInstance.Data);
        }
        if (local_1100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1100.Data.AllocatorInstance.Data);
        }
        if (local_10c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_10c0.Data.AllocatorInstance.Data);
        }
      }
      local_1200._0_16_ = *(undefined1 (*) [16])&this->field_0xd8;
      local_1200._s_0.Z = (double)*(undefined8 *)&this->field_0xe8;
      local_ea4 = 1.0;
      (**(code **)(*(longlong *)this + 0x670))(this,local_ff8,&local_1200,fVar43);
      if ((this->bRotationFollowsVelocity == 0) ||
         (((uVar41 = local_1200._0_4_ & uVar32, uVar42 = local_1200._4_4_ & uVar14,
           (double)CONCAT44(uVar42,uVar41) < (double)CONCAT44(uVar45,uVar44) ||
           (double)CONCAT44(uVar42,uVar41) == (double)CONCAT44(uVar45,uVar44) &&
           (uVar41 = local_1200._8_4_ & uVar32, uVar42 = local_1200._12_4_ & uVar14,
           (double)CONCAT44(uVar42,uVar41) < (double)CONCAT44(uVar45,uVar44) ||
           (double)CONCAT44(uVar42,uVar41) == (double)CONCAT44(uVar45,uVar44))) &&
          (uVar41 = SUB84(local_1200._s_0.Z,0) & uVar32,
          uVar42 = (uint)((ulonglong)local_1200._16_8_ >> 0x20) & uVar14,
          (double)CONCAT44(uVar42,uVar41) < (double)CONCAT44(uVar45,uVar44) ||
          (double)CONCAT44(uVar42,uVar41) == (double)CONCAT44(uVar45,uVar44))))) {
        lVar4 = *(longlong *)&this->field_0xc0;
        pTVar27 = &local_f28;
        local_f28.X = *(double *)(lVar4 + 0x1f0);
        local_f28.Y = *(double *)(lVar4 + 0x1f8);
        local_f28.Z = *(double *)(lVar4 + 0x200);
        local_f28.W = *(double *)(lVar4 + 0x208);
      }
      else {
        pTVar27 = UE::Math::TVector<double>::ToOrientationQuat
                            ((TVector<double> *)&local_1200._s_0,&local_d58);
      }
      local_1018.X._0_4_ = *(undefined4 *)&pTVar27->X;
      local_1018.X._4_4_ = *(undefined4 *)((longlong)&pTVar27->X + 4);
      local_1018.Y._0_4_ = *(undefined4 *)&pTVar27->Y;
      local_1018.Y._4_4_ = *(undefined4 *)((longlong)&pTVar27->Y + 4);
      local_1018.Z._0_4_ = *(undefined4 *)&pTVar27->Z;
      local_1018.Z._4_4_ = *(undefined4 *)((longlong)&pTVar27->Z + 4);
      local_1018.W._0_4_ = *(undefined4 *)&pTVar27->W;
      local_1018.W._4_4_ = *(undefined4 *)((longlong)&pTVar27->W + 4);
      if ((this->bRotationFollowsVelocity != 0) && (this->bRotationRemainsVertical != '\0')) {
        UE::Math::TQuat<double>::Rotator(&local_1018,&local_1118);
        local_1118.Pitch = 0.0;
        local_1118.Yaw = FGenericPlatformMath::Fmod(local_1118.Yaw,dVar7);
        if (local_1118.Yaw < 0.0) {
          local_1118.Yaw = local_1118.Yaw + dVar7;
        }
        if (dVar3 < local_1118.Yaw) {
          local_1118.Yaw = local_1118.Yaw - dVar7;
        }
        local_1118.Roll = 0.0;
        pTVar27 = UE::Math::TRotator<double>::Quaternion(&local_1118,&local_d38);
        local_1018.X._0_4_ = *(undefined4 *)&pTVar27->X;
        local_1018.X._4_4_ = *(undefined4 *)((longlong)&pTVar27->X + 4);
        local_1018.Y._0_4_ = *(undefined4 *)&pTVar27->Y;
        local_1018.Y._4_4_ = *(undefined4 *)((longlong)&pTVar27->Y + 4);
        local_1018.Z._0_4_ = *(undefined4 *)&pTVar27->Z;
        local_1018.Z._4_4_ = *(undefined4 *)((longlong)&pTVar27->Z + 4);
        local_1018.W._0_4_ = *(undefined4 *)&pTVar27->W;
        local_1018.W._4_4_ = *(undefined4 *)((longlong)&pTVar27->W + 4);
      }
      if (this->bShouldBounce == '\0') {
        uVar41 = *(uint *)&this->field_0xd0;
        *(uint *)&this->field_0xd0 = uVar41 | 4;
        (**(code **)(*(longlong *)this + 0x568))(this,local_ff8,&local_1018,this->bSweepCollision);
        *(uint *)&this->field_0xd0 = uVar41;
      }
      else {
        (**(code **)(*(longlong *)this + 0x570))();
      }
      if ((((*(uint *)(lVar5 + 8) >> 0x1e & 1) != 0) || (*(longlong *)&this->field_0xc0 == 0)) ||
         ((this->field_0x9a & 0x10) == 0)) goto LAB_1479729fc;
      if ((local_dfb & 1) == 0) {
        this->bIsSliding = '\0';
        this->PreviousHitTime = 1.0;
        if (((local_1200._s_0.X == *(double *)&this->field_0xd8) &&
            (local_1200._s_0.Y == *(double *)&this->field_0xe0)) &&
           (local_1200._s_0.Z == *(double *)&this->field_0xe8)) {
          local_fa8 = *(undefined4 *)&this->field_0xd8;
          uStack_fa4 = *(undefined4 *)&this->field_0xdc;
          uStack_fa0 = *(undefined4 *)&this->field_0xe0;
          uStack_f9c = *(undefined4 *)&this->field_0xe4;
          local_f98 = *(undefined8 *)&this->field_0xe8;
          puVar28 = (undefined8 *)
                    (**(code **)(*(longlong *)this + 0x610))(this,local_da8,&local_fa8,fVar43);
          uVar8 = puVar28[1];
          *(undefined8 *)&this->field_0xd8 = *puVar28;
          *(undefined8 *)&this->field_0xe0 = uVar8;
          *(undefined8 *)&this->field_0xe8 = puVar28[2];
        }
        if (6 < (byte)LogProjectileMovement._0_1_) {
          ::FString::PrintfImpl(&local_1090,L"X=%3.3f Y=%3.3f Z=%3.3f");
          lVar4 = *(longlong *)&this->field_0xc0;
          local_ef0 = *(undefined8 *)(lVar4 + 0x210);
          uStack_ee8 = *(undefined8 *)(lVar4 + 0x218);
          local_ee0 = *(undefined8 *)(lVar4 + 0x220);
          ::FString::PrintfImpl(&local_10a0,L"X=%3.3f Y=%3.3f Z=%3.3f");
          local_1170 = *(FName *)(lVar5 + 0x18);
          ::FName::ToString(&local_1170,&local_10b0);
          UE::Logging::Private::BasicLog<7>
                    (&::LOG_Static,(FLogCategoryBase *)&LogProjectileMovement);
          if (local_10b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_10b0.Data.AllocatorInstance.Data);
          }
          if (local_10a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_10a0.Data.AllocatorInstance.Data);
          }
          if (local_1090.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1090.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        if (local_1200._s_0.X == *(double *)&this->field_0xd8) {
          if ((local_1200._s_0.Y == *(double *)&this->field_0xe0) &&
             (local_1200._s_0.Z == *(double *)&this->field_0xe8)) {
            if (local_ea4 <= __real_38d1b717) {
              puVar28 = (undefined8 *)local_f68;
              local_f68 = local_1200._0_16_;
              local_f58 = local_1200._s_0.Z;
            }
            else {
              local_f88 = local_1200._0_4_;
              uStack_f84 = local_1200._4_4_;
              local_f78 = local_1200._s_0.Z;
              uStack_f80 = local_1200._8_4_;
              uStack_f7c = local_1200._12_4_;
              puVar28 = (undefined8 *)
                        (**(code **)(*(longlong *)this + 0x610))
                                  (this,local_d90,&local_f88,local_ea4 * fVar43);
            }
            uVar8 = puVar28[1];
            *(undefined8 *)&this->field_0xd8 = *puVar28;
            *(undefined8 *)&this->field_0xe0 = uVar8;
            *(undefined8 *)&this->field_0xe8 = puVar28[2];
          }
        }
        if ((6 < (byte)LogProjectileMovement._0_1_) && (*(longlong *)&this->field_0xc0 != 0)) {
          ::FString::PrintfImpl(&local_1060,L"X=%3.3f Y=%3.3f Z=%3.3f");
          lVar4 = *(longlong *)&this->field_0xc0;
          local_ed8 = *(undefined8 *)(lVar4 + 0x210);
          uStack_ed0 = *(undefined8 *)(lVar4 + 0x218);
          local_ec8 = *(undefined8 *)(lVar4 + 0x220);
          ::FString::PrintfImpl(&local_1070,L"X=%3.3f Y=%3.3f Z=%3.3f");
          local_1168 = *(FName *)(lVar5 + 0x18);
          ::FName::ToString(&local_1168,&local_1080);
          UE::Logging::Private::BasicLog<7>
                    (&::LOG_Static,(FLogCategoryBase *)&LogProjectileMovement);
          if (local_1080.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1080.Data.AllocatorInstance.Data);
          }
          if (local_1070.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1070.Data.AllocatorInstance.Data);
          }
          if (local_1060.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1060.Data.AllocatorInstance.Data);
          }
        }
        uVar41 = (int)pUVar23 + 1;
        pUVar23 = (USceneComponent *)(ulonglong)uVar41;
        local_1218 = (__real_3f800000 - local_ea4) * fVar43;
        iVar20 = (**(code **)(*(longlong *)this + 0x650))(this,local_ea8,fVar43,local_ff8);
        if (((iVar20 == 2) || (*(longlong *)&this->field_0xc0 == 0)) ||
           ((this->field_0x9a & 0x10) == 0)) break;
        if (iVar20 == 0) {
          local_1214 = local_1214 + 1;
          (**(code **)(*(longlong *)this + 0x658))(this,local_ea8,&local_1200,local_1214);
          this->PreviousHitTime = local_ea4;
          local_f48 = local_e68;
          uStack_f44 = uStack_e64;
          uStack_f40 = uStack_e60;
          uStack_f3c = uStack_e5c;
          local_f38 = local_e58;
          pdVar31 = (double *)(**(code **)(*(longlong *)this + 0x5e8))(this,local_d78);
          dVar9 = pdVar31[1];
          (this->PreviousHitNormal).field0_0x0._s_0.X = *pdVar31;
          (this->PreviousHitNormal).field0_0x0._s_0.Y = dVar9;
          (this->PreviousHitNormal).field0_0x0._s_0.Z = pdVar31[2];
        }
        else if (iVar20 == 1) {
          this->PreviousHitTime = 1.0;
        }
        else {
          bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("!\"Enclosing block should never be called\"",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ProjectileMovementComponent.cpp"
                              ,0x133,L"");
          if (bVar19) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        if ((6 < (byte)LogProjectileMovement._0_1_) && (*(longlong *)&this->field_0xc0 != 0)) {
          ::FString::PrintfImpl(&local_1148,L"X=%3.3f Y=%3.3f Z=%3.3f");
          lVar4 = *(longlong *)&this->field_0xc0;
          local_ec0 = *(undefined8 *)(lVar4 + 0x210);
          uStack_eb8 = *(undefined8 *)(lVar4 + 0x218);
          local_eb0 = *(undefined8 *)(lVar4 + 0x220);
          ::FString::PrintfImpl(&local_1050,L"X=%3.3f Y=%3.3f Z=%3.3f");
          local_1160 = *(FName *)(lVar5 + 0x18);
          ::FName::ToString(&local_1160,&local_10d0);
          UE::Logging::Private::BasicLog<7>
                    (&::LOG_Static,(FLogCategoryBase *)&LogProjectileMovement);
          if (local_10d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_10d0.Data.AllocatorInstance.Data);
          }
          if (local_1050.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1050.Data.AllocatorInstance.Data);
          }
          if (local_1148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1148.Data.AllocatorInstance.Data);
          }
        }
        uVar42 = local_1210;
        if (((fVar16 <= local_1218) &&
            (param_1 = param_1 + local_1218, (int)uVar41 <= this->BounceAdditionalIterations)) &&
           (uVar39 = uVar42, 5 < (byte)LogProjectileMovement._0_1_)) {
          local_1158 = *(FName *)(lVar5 + 0x18);
          ::FName::ToString(&local_1158,&local_1138);
          UE::Logging::Private::BasicLog<6>
                    (&::LOG_Static,(FLogCategoryBase *)&LogProjectileMovement);
          if (local_1138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1138.Data.AllocatorInstance.Data);
          }
        }
      }
      if (this->bSimulationEnabled == '\0') break;
    }
  }
  (**(code **)(*(longlong *)this + 0x550))(this);
LAB_1479729fc:
  FScopedMovementUpdate::~FScopedMovementUpdate(&local_d18);
  if (bVar40) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar17) && (FVar38 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar29 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar29 == (FThreadStats *)0x0) {
      pFVar30 = FThreadStatsPool::Get();
      pFVar29 = FThreadStatsPool::GetFromPool(pFVar30);
    }
    if (pFVar29->bWaitForExplicitFlush < pFVar29->ScopeCount) {
      local_1128.NameAndInfo.Index = FVar38.ComparisonIndex.Value;
      local_1128.NameAndInfo.Number = FVar38.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_1150);
      local_1128.StatData.Pad[4] = '\0';
      local_1128.StatData.Pad[5] = '\0';
      local_1128.StatData.Pad[6] = '\0';
      local_1128.StatData.Pad[7] = '\0';
      local_1128.StatData.Pad[0] = local_1150.s.LowPart._0_1_;
      local_1128.StatData.Pad[1] = local_1150.s.LowPart._1_1_;
      local_1128.StatData.Pad[2] = local_1150.s.LowPart._2_1_;
      local_1128.StatData.Pad[3] = local_1150.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar29,&local_1128);
      piVar1 = &pFVar29->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar29,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar29,false,false);
      }
    }
  }
LAB_147973111:
  FScopedMovementUpdate::~FScopedMovementUpdate(&local_708);
  FCsvProfiler::EndExclusiveStat("ProjectileMovement");
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar13) {
    FThreadStats::AddMessage(FVar37,CycleScopeEnd);
  }
  return;
}

// TickInterpolation @ 1479742e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UProjectileMovementComponent::TickInterpolation(UProjectileMovementComponent *this,float param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 auVar12 [16];
  ulonglong uVar13;
  undefined1 uVar14;
  undefined8 uVar15;
  USceneComponent *this_00;
  int iVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  float fVar20;
  uint uVar21;
  uint uVar22;
  double dVar23;
  double dVar30;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  double dVar36;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar37 [16];
  double dVar40;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined4 uVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  TVector<double>_u_0 local_c8;
  undefined1 local_a8 [160];
  
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  puVar1 = &this->field_0x131;
  uVar5 = *puVar1;
  if (this->bInterpolationComplete != '\0') {
    return;
  }
  if (this->bInterpMovement == '\0') {
    (**(code **)(*(longlong *)this + 0x638))();
    this->bInterpolationComplete = '\x01';
    goto LAB_147974a40;
  }
  if (((*(double *)&this->field_0xd8 == 0.0) && (*(double *)&this->field_0xe0 == 0.0)) &&
     (*(double *)&this->field_0xe8 == 0.0)) {
    fVar20 = this->InterpLocationTime * __real_3f000000;
  }
  else {
    fVar20 = this->InterpLocationTime;
  }
  if (fVar20 <= param_1) {
    (this->InterpLocationOffset).field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (this->InterpLocationOffset).field0_0x0._s_0.Y = (double)uVar2;
    (this->InterpLocationOffset).field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    dVar9 = (this->InterpLocationOffset).field0_0x0._s_0.Y;
    dVar23 = (this->InterpLocationOffset).field0_0x0._s_0.Z;
    dVar31 = (double)(__real_3f800000 - param_1 / fVar20);
    (this->InterpLocationOffset).field0_0x0._s_0.X =
         dVar31 * (this->InterpLocationOffset).field0_0x0._s_0.X;
    (this->InterpLocationOffset).field0_0x0._s_0.Y = dVar31 * dVar9;
    (this->InterpLocationOffset).field0_0x0._s_0.Z = dVar31 * dVar23;
  }
  dVar9 = UE::Math::TQuat<double>::Identity.Y;
  if ((this->InterpRotationTime <= param_1) || (this->bInterpRotation == '\0')) {
    (this->InterpRotationOffset).X = UE::Math::TQuat<double>::Identity.X;
    (this->InterpRotationOffset).Y = dVar9;
    dVar9 = UE::Math::TQuat<double>::Identity.W;
    (this->InterpRotationOffset).Z = UE::Math::TQuat<double>::Identity.Z;
    (this->InterpRotationOffset).W = dVar9;
  }
  else {
    dVar31 = (double)(param_1 / this->InterpRotationTime);
    dVar23 = __real_3ff0000000000000;
    dVar9 = dVar31;
    if (UE::Math::TQuat<double>::Identity.W * (this->InterpRotationOffset).W +
        UE::Math::TQuat<double>::Identity.Z * (this->InterpRotationOffset).Z +
        UE::Math::TQuat<double>::Identity.Y * (this->InterpRotationOffset).Y +
        UE::Math::TQuat<double>::Identity.X * (this->InterpRotationOffset).X < 0.0) {
      dVar23 = __real_bff0000000000000;
      dVar9 = (double)CONCAT44((uint)((ulonglong)dVar31 >> 0x20) ^
                               __xmm_80000000000000008000000000000000._4_4_,
                               SUB84(dVar31,0) ^ (uint)__xmm_80000000000000008000000000000000);
    }
    auVar33._0_8_ = dVar23 - dVar9;
    auVar33._8_4_ = SUB84(auVar33._0_8_,0);
    auVar33._12_4_ = (int)((ulonglong)auVar33._0_8_ >> 0x20);
    dVar32 = auVar33._0_8_ * (this->InterpRotationOffset).X +
             dVar31 * UE::Math::TQuat<double>::Identity.X;
    dVar36 = auVar33._8_8_ * (this->InterpRotationOffset).Y +
             dVar31 * UE::Math::TQuat<double>::Identity.Y;
    dVar11 = auVar33._0_8_ * (this->InterpRotationOffset).Z +
             dVar31 * UE::Math::TQuat<double>::Identity.Z;
    dVar31 = auVar33._0_8_ * (this->InterpRotationOffset).W +
             dVar31 * UE::Math::TQuat<double>::Identity.W;
    auVar46._8_4_ = SUB84(dVar31,0);
    auVar46._0_8_ = dVar11;
    auVar46._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
    dVar23 = dVar11 * dVar11 + dVar32 * dVar32;
    dVar30 = auVar46._8_8_ * dVar31 + dVar36 * dVar36;
    dVar9 = dVar30 + dVar23;
    dVar23 = dVar23 + dVar30;
    auVar41._8_4_ = SUB84(dVar23,0);
    auVar41._0_8_ = dVar9;
    auVar41._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
    auVar41 = sqrtpd(ZEXT816(0),auVar41);
    uVar17 = -(ulonglong)(__real_3e45798ee0000000 <= dVar9);
    uVar18 = -(ulonglong)(__real_3e45798ee0000000 <= dVar23);
    uVar21 = (uint)(uVar17 >> 0x20);
    uVar22 = (uint)(uVar18 >> 0x20);
    auVar46 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar41);
    auVar47._0_8_ = uVar17 & (ulonglong)(auVar46._0_8_ * dVar32);
    uVar13 = uVar18 & (ulonglong)(auVar46._8_8_ * dVar36);
    auVar47._8_4_ = (undefined4)uVar13;
    auVar47._12_4_ = (undefined4)(uVar13 >> 0x20);
    auVar44._0_4_ = ~(uint)uVar17 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
    auVar44._4_4_ =
         ~uVar21 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
    auVar44._8_4_ = ~(uint)uVar18 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar44._12_4_ =
         ~uVar22 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    auVar41 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar41);
    auVar37._0_4_ = ~(uint)uVar17 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
    auVar37._4_4_ =
         ~uVar21 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
    auVar37._8_4_ = ~(uint)uVar18 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    auVar37._12_4_ =
         ~uVar22 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    auVar24._0_8_ = (ulonglong)(auVar41._0_8_ * dVar11) & uVar17;
    uVar18 = (ulonglong)(auVar41._8_8_ * dVar31) & uVar18;
    auVar24._8_4_ = (undefined4)uVar18;
    auVar24._12_4_ = (undefined4)(uVar18 >> 0x20);
    (this->InterpRotationOffset).X = (double)SUB168(auVar47 | auVar44,0);
    (this->InterpRotationOffset).Y = (double)SUB168(auVar47 | auVar44,8);
    (this->InterpRotationOffset).Z = (double)SUB168(auVar37 | auVar24,0);
    (this->InterpRotationOffset).W = (double)SUB168(auVar37 | auVar24,8);
  }
  uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar2 = *(undefined8 *)&(this->InterpLocationOffset).field0_0x0;
  uVar21 = (uint)uVar2 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar22 = (uint)((ulonglong)uVar2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((((double)CONCAT44(uVar22,uVar21) < __real_3f847ae140000000 ||
        (double)CONCAT44(uVar22,uVar21) == __real_3f847ae140000000) &&
      (uVar2 = *(undefined8 *)((longlong)&(this->InterpLocationOffset).field0_0x0 + 8),
      uVar21 = (uint)uVar2 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar22 = (uint)((ulonglong)uVar2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      (double)CONCAT44(uVar22,uVar21) < __real_3f847ae140000000 ||
      (double)CONCAT44(uVar22,uVar21) == __real_3f847ae140000000)) &&
     (uVar2 = *(undefined8 *)((longlong)&(this->InterpLocationOffset).field0_0x0 + 0x10),
     uVar21 = (uint)uVar2 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar22 = (uint)((ulonglong)uVar2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     (double)CONCAT44(uVar22,uVar21) < __real_3f847ae140000000 ||
     (double)CONCAT44(uVar22,uVar21) == __real_3f847ae140000000)) {
    dVar30 = (this->InterpRotationOffset).Z;
    dVar32 = (this->InterpRotationOffset).W;
    dVar36 = (this->InterpRotationOffset).X;
    dVar40 = (this->InterpRotationOffset).Y;
    dVar31 = UE::Math::TQuat<double>::Identity.Z + dVar30;
    dVar11 = UE::Math::TQuat<double>::Identity.W + dVar32;
    dVar30 = dVar30 - UE::Math::TQuat<double>::Identity.Z;
    dVar32 = dVar32 - UE::Math::TQuat<double>::Identity.W;
    dVar9 = UE::Math::TQuat<double>::Identity.X + dVar36;
    dVar23 = UE::Math::TQuat<double>::Identity.Y + dVar40;
    dVar36 = dVar36 - UE::Math::TQuat<double>::Identity.X;
    dVar40 = dVar40 - UE::Math::TQuat<double>::Identity.Y;
    auVar25._0_8_ =
         (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar30,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar25._8_4_ = SUB84(dVar32,0) & _UNK_15061cc88;
    auVar25._12_4_ = (uint)((ulonglong)dVar32 >> 0x20) & _UNK_15061cc8c;
    auVar38._0_8_ =
         (double)CONCAT44((uint)((ulonglong)dVar36 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar36,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar38._8_4_ = SUB84(dVar40,0) & _UNK_15061cc88;
    auVar38._12_4_ = (uint)((ulonglong)dVar40 >> 0x20) & _UNK_15061cc8c;
    lVar19 = -(ulonglong)(__real_3ee4f8b580000000 < auVar25._8_8_);
    auVar6._8_4_ = (int)lVar19;
    auVar6._0_8_ = -(ulonglong)(__real_3ee4f8b580000000 < auVar25._0_8_);
    auVar6._12_4_ = (int)((ulonglong)lVar19 >> 0x20);
    iVar16 = movmskpd((int)this,auVar6);
    lVar19 = -(ulonglong)(__real_3ee4f8b580000000 < auVar38._8_8_);
    auVar7._8_4_ = (int)lVar19;
    auVar7._0_8_ = -(ulonglong)(__real_3ee4f8b580000000 < auVar38._0_8_);
    auVar7._12_4_ = (int)((ulonglong)lVar19 >> 0x20);
    uVar21 = movmskpd((int)&stack0x00000000,auVar7);
    uVar22 = iVar16 << 2 | uVar21;
    if (uVar22 != 0) {
      lVar19 = -(ulonglong)
                (__real_3ee4f8b580000000 <
                (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar11,0) & _UNK_15061cc88));
      auVar8._8_4_ = (int)lVar19;
      auVar8._0_8_ = -(ulonglong)
                      (__real_3ee4f8b580000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar31 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar31,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar8._12_4_ = (int)((ulonglong)lVar19 >> 0x20);
      uVar22 = movmskpd(uVar22,auVar8);
      auVar42._8_8_ =
           -(ulonglong)
            (__real_3ee4f8b580000000 <
            (double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar23,0) & _UNK_15061cc88));
      auVar42._0_8_ =
           -(ulonglong)
            (__real_3ee4f8b580000000 <
            (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      iVar16 = movmskpd(uVar21,auVar42);
      if ((uVar22 & 0x3fffffff) != 0 || iVar16 != 0) goto LAB_147974665;
    }
    (this->InterpLocationOffset).field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (this->InterpLocationOffset).field0_0x0._s_0.Y = (double)uVar15;
    (this->InterpLocationOffset).field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    dVar9 = UE::Math::TQuat<double>::Identity.Y;
    (this->InterpRotationOffset).X = UE::Math::TQuat<double>::Identity.X;
    (this->InterpRotationOffset).Y = dVar9;
    dVar9 = UE::Math::TQuat<double>::Identity.W;
    (this->InterpRotationOffset).Z = UE::Math::TQuat<double>::Identity.Z;
    (this->InterpRotationOffset).W = dVar9;
    this->field_0x131 = uVar5 | 0x20;
  }
LAB_147974665:
  this_00 = (USceneComponent *)FWeakObjectPtr::Get(&(this->InterpolatedComponentPtr).WeakPtr);
  if (this_00 != (USceneComponent *)0x0) {
    if (((this->bInterpMovement == '\x01' && this->bThrottleInterpolation == '\x01') &&
        (iVar16 = (**(code **)(*(longlong *)this + 0x640))(this), 0 < iVar16)) &&
       (this->ThrottleInterpolationFramesSinceInterp =
             this->ThrottleInterpolationFramesSinceInterp + 1,
       this->ThrottleInterpolationFramesSinceInterp <= iVar16)) {
      if (5 < (byte)LogProjectileMovementInterpolation._0_1_) {
        UObjectBaseUtility::GetPathName
                  ((UObjectBaseUtility *)this_00,(FString *)&local_c8._s_0,(UObject *)0x0);
        UE::Logging::Private::BasicLog<6>
                  (&::LOG_Static,(FLogCategoryBase *)&LogProjectileMovementInterpolation);
        if ((void *)local_c8._s_0.X != (void *)0x0) {
          FMemory::Free((void *)local_c8._s_0.X);
        }
      }
      this->bInterpolationComplete = '\0';
    }
    else {
      if (0 < this->ThrottleInterpolationFramesSinceInterp) {
        this->ThrottleInterpolationFramesSinceInterp = 0;
        (**(code **)(*(longlong *)this + 0x648))(this);
      }
      this->ThrottleInterpolationFramesSinceInterp = 0;
      if (5 < (byte)LogProjectileMovementInterpolation._0_1_) {
        UObjectBaseUtility::GetPathName
                  ((UObjectBaseUtility *)this_00,(FString *)&local_c8._s_0,(UObject *)0x0);
        UE::Logging::Private::BasicLog<6>
                  (&::LOG_Static,(FLogCategoryBase *)&LogProjectileMovementInterpolation);
        if ((void *)local_c8._s_0.X != (void *)0x0) {
          FMemory::Free((void *)local_c8._s_0.X);
        }
      }
      lVar19 = *(longlong *)&this->field_0xc0;
      if (lVar19 != 0) {
        auVar41 = *(undefined1 (*) [16])&(this->InterpLocationOffset).field0_0x0;
        dVar9 = (this->InterpLocationOffset).field0_0x0._s_0.Z;
        dVar32 = *(double *)(lVar19 + 0x1f0) *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
        dVar36 = *(double *)(lVar19 + 0x1f8) *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
        dVar23 = *(double *)(lVar19 + 0x200) *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
        dVar31 = *(double *)(lVar19 + 0x208) *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
        dVar40 = auVar41._8_8_;
        auVar39._8_4_ = SUB84(dVar36,0);
        auVar39._0_8_ = dVar32;
        uVar48 = (undefined4)((ulonglong)dVar36 >> 0x20);
        auVar39._12_4_ = uVar48;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = dVar9;
        auVar46 = blendpd(auVar41,auVar12,2);
        auVar43._8_4_ = SUB84(dVar36,0);
        auVar43._0_8_ = dVar32;
        auVar43._12_4_ = uVar48;
        auVar10._8_4_ = SUB84(dVar31,0);
        auVar10._0_8_ = dVar23;
        auVar10._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
        auVar44 = blendpd(auVar43,auVar10,2);
        auVar49._0_8_ = dVar40 * dVar32 - auVar39._8_8_ * auVar41._0_8_;
        auVar49._8_8_ = dVar9 * dVar36 - dVar23 * dVar40;
        auVar26._0_8_ = auVar46._0_8_ * dVar23 - auVar44._0_8_ * dVar9;
        auVar26._8_8_ = auVar46._8_8_ * dVar31 - auVar44._8_8_ * 0.0;
        auVar46 = blendpd(auVar49,auVar26,2);
        dVar11 = auVar49._8_8_ + auVar49._8_8_;
        dVar30 = auVar26._0_8_ + auVar26._0_8_;
        uVar48 = (undefined4)((ulonglong)dVar30 >> 0x20);
        auVar50._0_8_ = auVar46._0_8_ + auVar46._0_8_;
        auVar50._8_8_ = auVar46._8_8_ + auVar46._8_8_;
        auVar34._8_4_ = SUB84(dVar30,0);
        auVar34._0_8_ = dVar11;
        auVar34._12_4_ = uVar48;
        auVar27._8_4_ = SUB84(dVar30,0);
        auVar27._0_8_ = dVar11;
        auVar27._12_4_ = uVar48;
        auVar46 = blendpd(auVar27,auVar50,2);
        auVar35._0_8_ = auVar34._8_8_ * dVar32 - dVar11 * auVar39._8_8_;
        auVar35._8_8_ = auVar50._0_8_ * dVar36 - dVar30 * dVar23;
        auVar28._0_8_ = auVar46._0_8_ * dVar23 - auVar50._0_8_ * auVar44._0_8_;
        auVar28._8_8_ = auVar46._8_8_ * dVar31 - auVar50._8_8_ * auVar44._8_8_;
        auVar46 = blendpd(auVar35,auVar28,2);
        local_c8._s_0.Y =
             dVar30 * dVar31 + dVar40 + auVar28._0_8_ +
             (this->InterpInitialLocationOffset).field0_0x0._s_0.Y;
        local_c8._s_0.X =
             dVar11 * dVar31 + auVar41._0_8_ + auVar35._8_8_ +
             (this->InterpInitialLocationOffset).field0_0x0._s_0.X;
        local_c8._s_0.Z =
             auVar50._0_8_ * dVar31 + dVar9 + auVar46._0_8_ +
             (this->InterpInitialLocationOffset).field0_0x0._s_0.Z;
        if (this->bInterpRotation == '\0') {
          USceneComponent::SetRelativeLocation
                    (this_00,(TVector<double> *)&local_c8._s_0,false,(FHitResult *)0x0,None);
        }
        else {
          dVar23 = (this->InterpInitialRotationOffset).Z;
          dVar31 = (this->InterpInitialRotationOffset).W;
          dVar11 = (this->InterpInitialRotationOffset).X;
          dVar30 = (this->InterpInitialRotationOffset).Y;
          uVar3 = (this->InterpRotationOffset).X;
          uVar4 = (this->InterpRotationOffset).Y;
          dVar32 = (this->InterpRotationOffset).Z;
          dVar36 = (this->InterpRotationOffset).W;
          auVar45._8_4_ = (int)uVar3;
          auVar45._0_8_ = uVar3;
          auVar45._12_4_ = (int)((ulonglong)uVar3 >> 0x20);
          auVar29._8_4_ = (int)uVar4;
          auVar29._0_8_ = uVar4;
          auVar29._12_4_ = (int)((ulonglong)uVar4 >> 0x20);
          local_a8._0_8_ =
               (double)uVar3 * dVar31 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] + dVar36 * dVar11 +
               (double)uVar4 * dVar23 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
               dVar32 * dVar30 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
          local_a8._8_8_ =
               auVar45._8_8_ * dVar23 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] + dVar36 * dVar30 +
               auVar29._8_8_ * dVar31 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
               dVar32 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
          dVar9 = (double)uVar3 * dVar11 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] + dVar36 * dVar31
                  + (double)uVar4 * dVar30 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                  dVar32 * dVar23 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
          local_a8._24_4_ = SUB84(dVar9,0);
          local_a8._16_8_ =
               (double)uVar3 * dVar30 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] + dVar36 * dVar23 +
               (double)uVar4 * dVar11 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
               dVar32 * dVar31 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
          local_a8._28_4_ = (int)((ulonglong)dVar9 >> 0x20);
          USceneComponent::SetRelativeLocationAndRotation
                    (this_00,(TVector<double> *)&local_c8._s_0,(TQuat<double> *)local_a8,false,
                     (FHitResult *)0x0,None);
        }
      }
    }
  }
LAB_147974a40:
  if (((this->bInterpolationComplete != '\0') && ((this->field_0x120 & 2) != 0)) &&
     (*(longlong *)&this->field_0xc0 == 0)) {
    (**(code **)(*(longlong *)this + 0x540))(this);
  }
  return;
}

// UpdateThrottleInterpolation @ 14797b7e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UProjectileMovementComponent::UpdateThrottleInterpolation
          (UProjectileMovementComponent *this,float param_1,USceneComponent *param_2)

{
  int iVar1;
  
  if ((this->bInterpMovement == '\x01' && this->bThrottleInterpolation == '\x01') &&
     (param_2 != (USceneComponent *)0x0)) {
    iVar1 = (**(code **)(*(longlong *)this + 0x640))();
    if ((0 < iVar1) &&
       (this->ThrottleInterpolationFramesSinceInterp =
             this->ThrottleInterpolationFramesSinceInterp + 1,
       this->ThrottleInterpolationFramesSinceInterp <= iVar1)) {
      return true;
    }
  }
  if (0 < this->ThrottleInterpolationFramesSinceInterp) {
    this->ThrottleInterpolationFramesSinceInterp = 0;
    (**(code **)(*(longlong *)this + 0x648))(this,param_1);
  }
  return false;
}

// UpdateTickRegistration @ 14797b870

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UProjectileMovementComponent::UpdateTickRegistration(UProjectileMovementComponent *this)

{
  if ((this->field_0x120 & 2) == 0) {
    return;
  }
  if (this->bInterpolationComplete == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014797b887. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this + 0x420))(this,1);
    return;
  }
  UMovementComponent::UpdateTickRegistration((UMovementComponent *)this);
  return;
}

// execIsInterpolationComplete @ 147983370

void __cdecl
UProjectileMovementComponent::execIsInterpolationComplete
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = (param_1[7].field_0x19 & 0x24) != 4;
  return;
}

// execIsVelocityUnderSimulationThreshold @ 147983780

void __cdecl
UProjectileMovementComponent::execIsVelocityUnderSimulationThreshold
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 =
       *(double *)&param_1[5].field_0x18 * *(double *)&param_1[5].field_0x18 +
       *(double *)&param_1[5].field_0x10 * *(double *)&param_1[5].field_0x10 +
       *(double *)&param_1[5].field_0x20 * *(double *)&param_1[5].field_0x20 <
       (double)(*(float *)(param_1 + 9) * *(float *)(param_1 + 9));
  return;
}

// execLimitVelocity @ 1479866f0

void __cdecl
UProjectileMovementComponent::execLimitVelocity(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  TVector<double> *pTVar3;
  double local_68;
  double dStack_60;
  double local_58;
  TVector<double>_u_0 local_48;
  TVector<double> local_28;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_48._s_0.X = local_68;
  local_48._s_0.Y = dStack_60;
  local_48._s_0.Z = local_58;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar3 = LimitVelocity((UProjectileMovementComponent *)param_1,&local_28,
                         (TVector<double> *)&local_48._s_0);
  dVar2 = (pTVar3->field0_0x0)._s_0.Y;
  *(double *)param_3 = (pTVar3->field0_0x0)._s_0.X;
  *(double *)((longlong)param_3 + 8) = dVar2;
  *(double *)((longlong)param_3 + 0x10) = (pTVar3->field0_0x0)._s_0.Z;
  return;
}

// execMoveInterpolationTarget @ 1479869c0

void __cdecl
UProjectileMovementComponent::execMoveInterpolationTarget
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar *puVar3;
  uchar local_38 [24];
  uchar local_20 [24];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  puVar3 = param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  puVar2 = local_38;
  if (puVar3 != (uchar *)0x0) {
    puVar2 = puVar3;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_20);
  }
  puVar3 = local_20;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x630))(param_1,puVar2,puVar3);
  return;
}

// execResetInterpolation @ 147987950

void __cdecl
UProjectileMovementComponent::execResetInterpolation(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147987968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x638))();
  return;
}

// execSetInterpolatedComponent @ 147989f50

void __cdecl
UProjectileMovementComponent::execSetInterpolatedComponent
          (UObject *param_1,FFrame *param_2,void *param_3)

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
  (**(code **)(*(longlong *)param_1 + 0x628))(param_1,local_res8);
  return;
}

// execSetVelocityInLocalSpace @ 14798b710

void __cdecl
UProjectileMovementComponent::execSetVelocityInLocalSpace
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
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
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_28 = local_48;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  local_18 = local_38;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x600))(param_1,&local_28);
  return;
}

// execStopSimulating @ 14798c1b0

void __cdecl
UProjectileMovementComponent::execStopSimulating(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar local_108 [4];
  undefined4 local_104;
  undefined4 local_64;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  memset(local_108,0,0x100);
  local_50 = 0;
  uStack_48 = 0;
  uStack_38 = 0xffffffff;
  local_104 = 0x3f800000;
  local_64 = 0xffffffff;
  local_40 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_108,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_108);
  }
  puVar2 = local_108;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x618))(param_1,puVar2);
  return;
}

// operator() @ 150514860

bool __thiscall
`UProjectileMovementComponent::SetInterpolatedComponent'::__l9::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7098825386821156128>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7098825386821156128>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

