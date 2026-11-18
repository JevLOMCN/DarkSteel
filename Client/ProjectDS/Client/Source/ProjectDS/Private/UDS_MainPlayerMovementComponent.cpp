// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 33

// StaticClass @ 14b4e53b0

UClass * __cdecl UDS_MainPlayerMovementComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MainPlayerMovementComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UCharacterMovementComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MainPlayerMovementComponent",
               &Z_Registration_Info_UClass_UDS_MainPlayerMovementComponent.InnerSingleton,
               StaticRegisterNativesUDS_MainPlayerMovementComponent,0x1090,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_MainPlayerMovementComponent>,
               InternalVTableHelperCtorCaller<UDS_MainPlayerMovementComponent>,local_res8,
               UCharacterMovementComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MainPlayerMovementComponent.InnerSingleton;
}

// UDS_MainPlayerMovementComponent @ 14b4e9170

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UDS_MainPlayerMovementComponent * __thiscall
UDS_MainPlayerMovementComponent::UDS_MainPlayerMovementComponent
          (UDS_MainPlayerMovementComponent *this,FVTableHelper *param_1)

{
  UCharacterMovementComponent::UCharacterMovementComponent
            ((UCharacterMovementComponent *)this,param_1);
  this->LandingDecelerationScale = 5.0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__UPawnMovementComponent__;
  this->_padding_ = (longlong)&_vftable__for__IRVOAvoidanceInterface__;
  this->_padding_ = (longlong)&_vftable__for__INetworkPredictionInterface__;
  (this->MainPlayerActor).WeakPtr = (FWeakObjectPtr)0x0;
  (this->TimerHandle_Landing).Handle = 0;
  this->DefaultMaxAcceleration = 0.0;
  this->DefaultBrakingDecelerationWalking = 0.0;
  (this->CachedCapsuleComps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedCapsuleComps).ArrayNum = 0;
  (this->CachedCapsuleComps).ArrayMax = 0;
  (this->CachedBlockHits).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedBlockHits).ArrayNum = 0;
  (this->CachedBlockHits).ArrayMax = 0;
  (this->CachedTwoSideBlockHits).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedTwoSideBlockHits).ArrayNum = 0;
  (this->CachedTwoSideBlockHits).ArrayMax = 0;
  this->LandingAccelerationScale = 5.0;
  this->MountRotateAngle = 10.0;
  this->MountFlyingSetInvalidate = false;
  this->UseSweepTest = true;
  this->OriginMountRotateAngle = 10.0;
  return this;
}

// ~UDS_MainPlayerMovementComponent @ 14b4e9e20

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
UDS_MainPlayerMovementComponent::~UDS_MainPlayerMovementComponent
          (UDS_MainPlayerMovementComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__UPawnMovementComponent__;
  this->_padding_ = (longlong)&_vftable__for__IRVOAvoidanceInterface__;
  this->_padding_ = (longlong)&_vftable__for__INetworkPredictionInterface__;
  pFVar1 = (this->CachedTwoSideBlockHits).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedBlockHits).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedCapsuleComps).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UCharacterMovementComponent::~UCharacterMovementComponent((UCharacterMovementComponent *)this);
  return;
}

// GetPrivateStaticClass @ 14b4ebc90

UClass * __cdecl UDS_MainPlayerMovementComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MainPlayerMovementComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UCharacterMovementComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MainPlayerMovementComponent",
               &Z_Registration_Info_UClass_UDS_MainPlayerMovementComponent.InnerSingleton,
               StaticRegisterNativesUDS_MainPlayerMovementComponent,0x1090,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_MainPlayerMovementComponent>,
               InternalVTableHelperCtorCaller<UDS_MainPlayerMovementComponent>,local_res8,
               UCharacterMovementComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MainPlayerMovementComponent.InnerSingleton;
}

// StaticRegisterNativesUDS_MainPlayerMovementComponent @ 14b4ec270

void __cdecl
UDS_MainPlayerMovementComponent::StaticRegisterNativesUDS_MainPlayerMovementComponent(void)

{
  return;
}

// UDS_MainPlayerMovementComponent @ 14bc2aff0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UDS_MainPlayerMovementComponent * __thiscall
UDS_MainPlayerMovementComponent::UDS_MainPlayerMovementComponent
          (UDS_MainPlayerMovementComponent *this,FObjectInitializer *param_1)

{
  UCharacterMovementComponent::UCharacterMovementComponent
            ((UCharacterMovementComponent *)this,param_1);
  this->LandingDecelerationScale = 5.0;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 0x10;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__UPawnMovementComponent__;
  this->_padding_ = (longlong)&_vftable__for__IRVOAvoidanceInterface__;
  this->_padding_ = (longlong)&_vftable__for__INetworkPredictionInterface__;
  this->LandingAccelerationScale = 5.0;
  this->MountRotateAngle = 10.0;
  this->MountFlyingSetInvalidate = false;
  (this->MainPlayerActor).WeakPtr = (FWeakObjectPtr)0x0;
  (this->TimerHandle_Landing).Handle = 0;
  this->DefaultMaxAcceleration = 0.0;
  this->DefaultBrakingDecelerationWalking = 0.0;
  this->UseSweepTest = true;
  this->OriginMountRotateAngle = 10.0;
  (this->CachedCapsuleComps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedCapsuleComps).ArrayNum = 0;
  (this->CachedCapsuleComps).ArrayMax = 0;
  (this->CachedBlockHits).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedBlockHits).ArrayNum = 0;
  (this->CachedBlockHits).ArrayMax = 0;
  (this->CachedTwoSideBlockHits).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedTwoSideBlockHits).ArrayNum = 0;
  (this->CachedTwoSideBlockHits).ArrayMax = 0;
  this->_padding_ = 0;
  this->_padding_ = 0x407f400000000000;
  this->_padding_ = 0;
  return this;
}

// BeginPlay @ 14bc2e4d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDS_MainPlayerMovementComponent::BeginPlay(UDS_MainPlayerMovementComponent *this)

{
  byte *pbVar1;
  uint uVar2;
  AActor *this_00;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  UWorld *pUVar6;
  UFunction *pUVar7;
  
  bVar4 = FTraceFilter::IsObjectTraceable<1>((UObject *)this);
  if (!bVar4) {
    if (this == (UDS_MainPlayerMovementComponent *)0x0) goto LAB_14780c7b0;
    this_00 = (AActor *)this->_padding_;
    bVar4 = FTraceFilter::IsObjectTraceable<1>((UObject *)this_00);
    if ((!bVar4) || (this_00 == (AActor *)0x0)) goto LAB_14780c7b0;
    pUVar6 = AActor::GetWorld(this_00);
    bVar4 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar6);
    if (!bVar4) goto LAB_14780c7b0;
  }
  FObjectTrace::OutputObjectLifetimeBegin((UObject *)this);
LAB_14780c7b0:
  if ((this->_padding_ & 1) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bRegistered",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x64d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((this->_padding_ & 0x20000000) != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bHasBegunPlay",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x64e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar2 = *(uint *)(this->_padding_ + 0xd4);
  if (((uVar2 >> 0x12 & 1) != 0) || (-1 < (char)uVar2)) {
    pUVar7 = UObject::FindFunctionChecked((UObject *)this,NAME_UActorComponent_ReceiveBeginPlay);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar7,0);
  }
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 0x20;
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
    cVar5 = (**(code **)(*(longlong *)this->_padding_ + 0x820))();
    if (cVar5 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014780c877. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(this->_padding_ + 0xa40))(this);
      return;
    }
  }
  return;
}

// CalcVelocity @ 14bc2ff10

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
UDS_MainPlayerMovementComponent::CalcVelocity
          (UDS_MainPlayerMovementComponent *this,float param_1,float param_2,bool param_3,
          float param_4)

{
  UCharacterMovementComponent::CalcVelocity
            ((UCharacterMovementComponent *)this,param_1,param_2,param_3,param_4);
  UpdateCalcVelocityByChildCollision(this,param_1,param_2,param_3,param_4);
  return;
}

// CheckFall @ 14bc31a80

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
UDS_MainPlayerMovementComponent::CheckFall
          (UDS_MainPlayerMovementComponent *this,FFindFloorResult *param_1,FHitResult *param_2,
          TVector<double> *param_3,TVector<double> *param_4,float param_5,float param_6,int param_7,
          bool param_8)

{
  bool bVar1;
  double dVar2;
  
  bVar1 = TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>::UEOpEquals<UPrimitiveComponent,bool>
                    (&(param_1->HitResult).Component,
                     (TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> *)&this->_padding_);
  if ((((bVar1) &&
       (dVar2 = *(double *)&(param_1->HitResult).Location - (double)this->_padding_,
       (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
       __real_3f1a36e2e0000000)) &&
      (dVar2 = *(double *)&(param_1->HitResult).Location.field_0x8 - (double)this->_padding_,
      (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
      __real_3f1a36e2e0000000)) &&
     (dVar2 = *(double *)&(param_1->HitResult).Location.field_0x10 - (double)this->_padding_,
     (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                      SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
     __real_3f1a36e2e0000000)) {
    return false;
  }
  bVar1 = UCharacterMovementComponent::CheckFall
                    ((UCharacterMovementComponent *)this,param_1,param_2,param_3,param_4,param_5,
                     param_6,param_7,param_8);
  return bVar1;
}

// ClearLandingTimer @ 14bc32a50

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
UDS_MainPlayerMovementComponent::ClearLandingTimer(UDS_MainPlayerMovementComponent *this)

{
  FTimerManager *this_00;
  FTimerData *pFVar1;
  
  this_00 = FDS_TimerManager::Get((UObject *)0x0);
  pFVar1 = FTimerManager::FindTimer(this_00,&this->TimerHandle_Landing);
  if (pFVar1 != (FTimerData *)0x0) {
    FTimerManager::InternalClearTimer(this_00,(FTimerHandle)(this->TimerHandle_Landing).Handle);
  }
  *(float *)((longlong)&this->_padding_ + 4) = this->DefaultMaxAcceleration;
  *(float *)&this->_padding_ = this->DefaultBrakingDecelerationWalking;
  (this->TimerHandle_Landing).Handle = 0;
  return;
}

// ConstrainInputAcceleration @ 14bc32b30

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
UDS_MainPlayerMovementComponent::ConstrainInputAcceleration
          (UDS_MainPlayerMovementComponent *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1)

{
  double dVar1;
  TVector<double> *pTVar2;
  TVector<double> local_28;
  
  UCharacterMovementComponent::ConstrainInputAcceleration
            ((UCharacterMovementComponent *)this,__return_storage_ptr__,param_1);
  pTVar2 = UpdateConstrainInputAccelerationByChildCollision(this,&local_28,__return_storage_ptr__);
  dVar1 = (pTVar2->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (pTVar2->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (pTVar2->field0_0x0)._s_0.Z;
  return __return_storage_ptr__;
}

// DoJump @ 14bc38f20

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
UDS_MainPlayerMovementComponent::DoJump(UDS_MainPlayerMovementComponent *this,bool param_1)

{
  bool bVar1;
  ACharacter *this_00;
  UObject *pUVar2;
  double dVar3;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->MainPlayerActor).WeakPtr);
  if (bVar1) {
    this_00 = (ACharacter *)FWeakObjectPtr::Get(&(this->MainPlayerActor).WeakPtr);
    bVar1 = ACharacter::CanJump(this_00);
    if ((bVar1) &&
       (((this->_padding_ & 0x10) == 0 ||
        ((double)CONCAT44((uint)((ulonglong)this->_padding_ >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          (uint)this->_padding_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) !=
         __real_3ff0000000000000)))) {
      pUVar2 = FWeakObjectPtr::Get(&(this->MainPlayerActor).WeakPtr);
      dVar3 = (double)((float)(*(int *)&pUVar2[0x1c].field_0x18 + 1) * *(float *)&this->_padding_);
      if (dVar3 <= (double)this->_padding_) {
        dVar3 = (double)this->_padding_;
      }
      this->_padding_ = (longlong)dVar3;
      (**(code **)(this->_padding_ + 0x658))(this,3,0);
      return true;
    }
  }
  return false;
}

// EnableAimMode @ 14bc39c40

void __thiscall
UDS_MainPlayerMovementComponent::EnableAimMode(UDS_MainPlayerMovementComponent *this,bool param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  double dVar6;
  
  bVar1 = (byte)this->_padding_;
  if (param_1) {
    uVar2 = *(undefined4 *)&(this->AimModeRotationRate).Pitch;
    uVar3 = *(undefined4 *)((longlong)&(this->AimModeRotationRate).Pitch + 4);
    uVar4 = *(undefined4 *)&(this->AimModeRotationRate).Yaw;
    uVar5 = *(undefined4 *)((longlong)&(this->AimModeRotationRate).Yaw + 4);
    bVar1 = bVar1 | 8;
    dVar6 = (this->AimModeRotationRate).Roll;
  }
  else {
    uVar2 = *(undefined4 *)&(this->OriginRotationRate).Pitch;
    uVar3 = *(undefined4 *)((longlong)&(this->OriginRotationRate).Pitch + 4);
    uVar4 = *(undefined4 *)&(this->OriginRotationRate).Yaw;
    uVar5 = *(undefined4 *)((longlong)&(this->OriginRotationRate).Yaw + 4);
    bVar1 = bVar1 & 0xf7;
    dVar6 = (this->OriginRotationRate).Roll;
  }
  *(undefined4 *)&this->_padding_ = uVar2;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar3;
  *(undefined4 *)&this->_padding_ = uVar4;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar5;
  this->_padding_ = (longlong)dVar6;
  *(byte *)&this->_padding_ = bVar1;
  return;
}

// GetImpartedMovementBaseVelocity @ 14bc416c0

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
UDS_MainPlayerMovementComponent::GetImpartedMovementBaseVelocity
          (UDS_MainPlayerMovementComponent *this,TVector<double> *__return_storage_ptr__)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  UObject *pUVar4;
  longlong lVar5;
  FWeakObjectPtr local_res8;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->MainPlayerActor).WeakPtr);
  if (bVar2) {
    pUVar4 = FWeakObjectPtr::Get(&(this->MainPlayerActor).WeakPtr);
    lVar5 = (**(code **)(*(longlong *)&pUVar4[0x29].field_0x10 + 0x1d8))();
    if (lVar5 != 0) {
      pUVar4 = FWeakObjectPtr::Get(&(this->MainPlayerActor).WeakPtr);
      (**(code **)(*(longlong *)&pUVar4[0x29].field_0x10 + 0x78))
                (&pUVar4[0x29].field_0x10,&local_res8);
      bVar2 = FWeakObjectPtr::IsValid(&local_res8);
      if (bVar2) {
        pUVar4 = FWeakObjectPtr::Get(&local_res8);
        iVar3 = (**(code **)(*(longlong *)pUVar4 + 0x438))(pUVar4);
        if (iVar3 == 1) {
          UCharacterMovementComponent::GetImpartedMovementBaseVelocity
                    ((UCharacterMovementComponent *)this,__return_storage_ptr__);
          return __return_storage_ptr__;
        }
      }
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

// GetInputAcceleration @ 14bc417b0

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
UDS_MainPlayerMovementComponent::GetInputAcceleration
          (UDS_MainPlayerMovementComponent *this,TVector<double> *__return_storage_ptr__)

{
  longlong lVar1;
  TVector<double> *pTVar2;
  undefined8 uVar3;
  TVector<double> local_38;
  undefined1 local_20 [24];
  
  lVar1 = this->_padding_;
  pTVar2 = UPawnMovementComponent::GetLastInputVector((UPawnMovementComponent *)this,&local_38);
  uVar3 = (**(code **)(lVar1 + 0x9e8))(this,local_20,pTVar2);
  (**(code **)(lVar1 + 0x9f0))(this,__return_storage_ptr__,uVar3);
  return __return_storage_ptr__;
}

// GetQuatFromCurrentFloorPitch @ 14bc432f0

TQuat<double> * __thiscall
UDS_MainPlayerMovementComponent::GetQuatFromCurrentFloorPitch
          (UDS_MainPlayerMovementComponent *this,TQuat<double> *__return_storage_ptr__,
          TVector<double> *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  double dVar6;
  undefined1 local_178 [96];
  double dStack_118;
  double local_110;
  byte local_cb;
  
  FHitResult::FHitResult((FHitResult *)local_178,(FHitResult *)&this->_padding_);
  if ((local_cb & 1) == 0) {
    __return_storage_ptr__->X = 0.0;
    __return_storage_ptr__->Y = 0.0;
    __return_storage_ptr__->Z = 0.0;
    __return_storage_ptr__->W = 0.0;
  }
  else {
    dVar4 = (param_1->field0_0x0)._s_0.X;
    dVar5 = (param_1->field0_0x0)._s_0.Y;
    dVar6 = dStack_118 * dStack_118 + (double)local_178._88_8_ * (double)local_178._88_8_ +
            local_110 * local_110;
    uVar1 = local_178._88_8_;
    uVar2 = local_110;
    uVar3 = dStack_118;
    if ((dVar6 != __real_3ff0000000000000) &&
       (uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
       uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
       uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
       __real_3e45798ee0000000 <= dVar6)) {
      dVar6 = __real_3ff0000000000000 / SQRT(dVar6);
      uVar1 = (double)local_178._88_8_ * dVar6;
      uVar2 = dVar6 * local_110;
      uVar3 = dStack_118 * dVar6;
    }
    dVar6 = (param_1->field0_0x0)._s_0.Z;
    FGenericPlatformMath::Atan2
              (((double)uVar1 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z -
               (double)uVar2 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X) * dVar5 +
               ((double)uVar2 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y -
               (double)uVar3 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z) * dVar4 +
               ((double)uVar3 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X -
               (double)uVar1 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y) *
               (param_1->field0_0x0)._s_0.Z,
               (double)uVar2 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z +
               (double)uVar3 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y +
               (double)uVar1 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X);
    __libm_sse2_sincos_();
    __return_storage_ptr__->X = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * dVar4;
    __return_storage_ptr__->Y = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * dVar5;
    __return_storage_ptr__->Z = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * dVar6;
    __return_storage_ptr__->W = (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
  }
  return __return_storage_ptr__;
}

// HandleCharacterAsFloorSlide @ 14bc454d0

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
UDS_MainPlayerMovementComponent::HandleCharacterAsFloorSlide(UDS_MainPlayerMovementComponent *this)

{
  int iVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  bool bVar5;
  AActor *pAVar6;
  UClass *pUVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  FWeakObjectPtr local_res8;
  AActor *local_res10;
  double local_48;
  double local_40;
  double local_38;
  
  fVar12 = __real_42330f72;
  pAVar6 = FActorInstanceHandle::FetchActor((FActorInstanceHandle *)&this->_padding_);
  if (pAVar6 != (AActor *)0x0) {
    pUVar7 = Z_Construct_UClass_ADS_NPC_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(pAVar6->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar6->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar7->_padding_)) {
      pAVar6 = (AActor *)0x0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar6 != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar6);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = pAVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar6 != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar6);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    bVar5 = TWeakObjectPtr<ADS_NPC,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<ADS_NPC,FWeakObjectPtr> *)&local_res8,(void *)0x0);
    fVar4 = __real_40a00000;
    if (!bVar5) {
      dVar2 = (double)this->_padding_;
      dVar3 = (double)this->_padding_;
      dVar8 = dVar3 * dVar3 + dVar2 * dVar2;
      if (dVar8 == __real_3ff0000000000000) {
        uVar9 = dVar3;
        uVar10 = dVar2;
        uVar11 = 0.0;
      }
      else {
        uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        if (__real_3e45798ee0000000 <= dVar8) {
          uVar9 = dVar3 * (__real_3ff0000000000000 / SQRT(dVar8));
          uVar10 = dVar2 * (__real_3ff0000000000000 / SQRT(dVar8));
          uVar11 = 0.0;
        }
      }
      local_48 = (double)uVar10 * __real_4069000000000000;
      local_40 = (double)uVar9 * __real_4069000000000000;
      local_38 = (double)uVar11 * __real_4069000000000000 + (double)this->_padding_;
      (**(code **)(this->_padding_ + 0x710))(this,&local_48);
      fVar12 = fVar4;
    }
  }
  if (__real_322bcc77 <
      (float)((uint)(fVar12 - *(float *)((longlong)&this->_padding_ + 4)) &
             __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    UCharacterMovementComponent::SetWalkableFloorAngle((UCharacterMovementComponent *)this,fVar12);
  }
  return;
}

// InitializeComponent @ 14bc49e70

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
UDS_MainPlayerMovementComponent::InitializeComponent(UDS_MainPlayerMovementComponent *this)

{
  longlong *this_00;
  double dVar1;
  float fVar2;
  double dVar3;
  bool bVar4;
  UClass *pUVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  UObject *local_res8;
  FString local_28;
  FString local_18;
  
  UMovementComponent::InitializeComponent((UMovementComponent *)this);
  this_00 = &this->_padding_;
  if (*this_00 != 0) {
    pUVar5 = Z_Construct_UClass_ADS_MainCharacter_NoRegister();
    bVar4 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar5);
    if ((!bVar4) || (local_res8 = (UObject *)*this_00, local_res8 == (UObject *)0x0)) {
      pFVar6 = GetTypeName<ADS_MainCharacter>(&local_28);
      pwVar7 = L"";
      if ((pFVar6->Data).ArrayNum == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
      pFVar6 = GetFullNameForCastLogError<APawn>(&local_18,(APawn *)*this_00);
      if ((pFVar6->Data).ArrayNum != 0) {
        pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar7,pwVar8);
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(local_res8);
    }
    FWeakObjectPtr::operator=(&(this->MainPlayerActor).WeakPtr,(FObjectPtr)&local_res8);
    dVar3 = (double)this->_padding_;
    this->DefaultMaxAcceleration = *(float *)((longlong)&this->_padding_ + 4);
    dVar1 = (double)this->_padding_;
    fVar2 = *(float *)&this->_padding_;
    (this->OriginRotationRate).Pitch = (double)this->_padding_;
    (this->OriginRotationRate).Yaw = dVar3;
    this->DefaultBrakingDecelerationWalking = fVar2;
    (this->OriginRotationRate).Roll = dVar1;
    *(undefined4 *)&this->_padding_ = 0;
  }
  return;
}

// IsInWater @ 14bc4ac90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall UDS_MainPlayerMovementComponent::IsInWater(UDS_MainPlayerMovementComponent *this)

{
  bool bVar1;
  ADS_MainCharacter *this_00;
  uint uVar2;
  uint uVar3;
  TVector<double> local_38;
  undefined1 local_20 [16];
  double local_10;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->MainPlayerActor).WeakPtr);
  if (bVar1) {
    this_00 = (ADS_MainCharacter *)FWeakObjectPtr::Get(&(this->MainPlayerActor).WeakPtr);
    ADS_MainCharacter::GetFluxSurfaceLocation(this_00,&local_38);
    uVar2 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar3 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if (((__real_3fb99999a0000000 <
          (double)CONCAT44((uint)((ulonglong)local_38.field0_0x0._0_8_ >> 0x20) & uVar3,
                           SUB84(local_38.field0_0x0._s_0.X,0) & uVar2)) ||
        (__real_3fb99999a0000000 <
         (double)CONCAT44((uint)((ulonglong)local_38.field0_0x0._8_8_ >> 0x20) & uVar3,
                          SUB84(local_38.field0_0x0._s_0.Y,0) & uVar2))) ||
       (__real_3fb99999a0000000 <
        (double)CONCAT44((uint)((ulonglong)local_38.field0_0x0._16_8_ >> 0x20) & uVar3,
                         SUB84(local_38.field0_0x0._s_0.Z,0) & uVar2))) {
      (**(code **)(this->_padding_ + 0x600))(this,local_20);
      return local_10 < local_38.field0_0x0._s_0.Z;
    }
  }
  return false;
}

// IsWallLike @ 14bc4bf10

bool __thiscall
UDS_MainPlayerMovementComponent::IsWallLike
          (UDS_MainPlayerMovementComponent *this,FHitResult *param_1,bool param_2,bool param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  
  if ((param_3) &&
     (lVar2 = *(longlong *)(this->_padding_ + 0x350),
     *(double *)&(param_1->ImpactPoint).field_0x10 -
     (double)(float)(*(double *)(lVar2 + 0x220) - (double)*(float *)(lVar2 + 0x568)) <
     (double)*(float *)((longlong)&this->_padding_ + 4))) {
    return false;
  }
  if (!param_2) {
    return true;
  }
  uVar1 = *(undefined8 *)&(param_1->Normal).field_0x10;
  uVar4 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar5 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  fVar3 = sinf(*(float *)((longlong)&this->_padding_ + 4) * __real_3c8efa35);
  return (double)CONCAT44(uVar5,uVar4) <= (double)fVar3 &&
         (double)fVar3 != (double)CONCAT44(uVar5,uVar4);
}

// MoveSmoothSe @ 14bc4c210

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
UDS_MainPlayerMovementComponent::MoveSmoothSe
          (UDS_MainPlayerMovementComponent *this,TVector<double> *param_1,float param_2,bool param_3
          )

{
  this->UseSweepTest = param_3;
  UCharacterMovementComponent::MoveSmooth
            ((UCharacterMovementComponent *)this,param_1,param_2,(FStepDownResult *)0x0);
  return;
}

// MoveUpdatedComponentImpl @ 14bc4c230

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
UDS_MainPlayerMovementComponent::MoveUpdatedComponentImpl
          (UDS_MainPlayerMovementComponent *this,TVector<double> *param_1,TQuat<double> *param_2,
          bool param_3,FHitResult *param_4,ETeleportType param_5)

{
  bool bVar1;
  
  bVar1 = UMovementComponent::MoveUpdatedComponentImpl
                    ((UMovementComponent *)this,param_1,param_2,param_3,param_4,param_5);
  return bVar1;
}

// OnMovementModeChanged @ 14bc50ad0

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
UDS_MainPlayerMovementComponent::OnMovementModeChanged
          (UDS_MainPlayerMovementComponent *this,EMovementMode param_1,uchar param_2)

{
  float fVar1;
  float fVar2;
  FTimerManager *this_00;
  code *local_18;
  undefined8 uStack_10;
  
  UCharacterMovementComponent::OnMovementModeChanged
            ((UCharacterMovementComponent *)this,param_1,param_2);
  HandleCharacterAsFloorSlide(this);
  if (((param_1 == MOVE_Falling) && (*(char *)((longlong)&this->_padding_ + 1) == '\x01')) ||
     (*(char *)((longlong)&this->_padding_ + 1) == '\x02')) {
    if ((this->TimerHandle_Landing).Handle == 0) {
      fVar1 = this->DefaultBrakingDecelerationWalking;
      fVar2 = this->LandingDecelerationScale;
      *(float *)((longlong)&this->_padding_ + 4) =
           this->DefaultMaxAcceleration * this->LandingAccelerationScale;
      *(float *)&this->_padding_ = fVar1 * fVar2;
      this_00 = FDS_TimerManager::Get((UObject *)0x0);
      uStack_10 = (ulonglong)uStack_10._4_4_ << 0x20;
      local_18 = ClearLandingTimer;
      FTimerManager::SetTimer<UDS_MainPlayerMovementComponent>
                (this_00,&this->TimerHandle_Landing,this,(pmf_a6af6925 *)&local_18,__real_3dcccccd,
                 false,__real_bf800000);
      return;
    }
  }
  else {
    ClearLandingTimer(this);
  }
  return;
}

// PhysicsVolumeChanged @ 14bc54bd0

void __thiscall
UDS_MainPlayerMovementComponent::PhysicsVolumeChanged
          (UDS_MainPlayerMovementComponent *this,APhysicsVolume *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  double dVar6;
  undefined8 local_b8;
  undefined8 uStack_b0;
  double local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  double local_78;
  
  cVar5 = (**(code **)(this->_padding_ + 0x688))();
  if ((cVar5 != '\0') &&
     (((param_1 == (APhysicsVolume *)0x0 || (param_1->bWaterVolume == 0)) &&
      (cVar5 = (**(code **)(this->_padding_ + 0xe8))(), cVar5 != '\0')))) {
    (**(code **)(this->_padding_ + 0x658))(this,3,0);
    local_78 = (double)this->_padding_;
    local_b8 = 0.0;
    uStack_b0 = 0.0;
    local_a0 = 0;
    uStack_98 = 0;
    local_a8 = 0.0;
    local_90 = 0;
    dVar6 = (double)this->_padding_ * (double)this->_padding_ +
            (double)this->_padding_ * (double)this->_padding_ + local_78 * (double)this->_padding_;
    if (((0.0 < (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) ^
                                 __xmm_80000000000000008000000000000000._4_4_,
                                 SUB84(dVar6,0) ^ (uint)__xmm_80000000000000008000000000000000)) &&
        (cVar5 = (**(code **)(this->_padding_ + 0x738))(this,&local_b8), cVar5 != '\0')) &&
       (0.0 < local_b8 * (double)this->_padding_ + uStack_b0 * (double)this->_padding_ +
              local_a8 * (double)this->_padding_)) {
      local_88 = (undefined4)local_b8;
      uStack_84 = local_b8._4_4_;
      uStack_80 = (undefined4)uStack_b0;
      uStack_7c = uStack_b0._4_4_;
      local_78 = local_a8;
      cVar5 = (**(code **)(this->_padding_ + 0x8f8))(this,&local_88,&local_a0);
      if (cVar5 != '\0') {
        local_88 = (undefined4)local_a0;
        uStack_84 = local_a0._4_4_;
        uStack_80 = (undefined4)uStack_98;
        uStack_7c = uStack_98._4_4_;
        local_78 = (double)local_90;
        (**(code **)(this->_padding_ + 0x740))(this,&local_88);
        dVar3 = (double)this->_padding_;
        dVar4 = (double)this->_padding_;
        dVar6 = (double)this->_padding_;
        dVar2 = (double)*(float *)((longlong)&this->_padding_ + 4);
        dVar1 = (double)this->_padding_ * dVar4 + (double)this->_padding_ * dVar3 +
                (double)this->_padding_ * dVar6;
        this->_padding_ = (longlong)(((double)this->_padding_ - dVar1 * dVar3) - dVar2 * dVar3);
        this->_padding_ = (longlong)(((double)this->_padding_ - dVar1 * dVar6) - dVar2 * dVar6);
        this->_padding_ = (longlong)(((double)this->_padding_ - dVar1 * dVar4) - dVar2 * dVar4);
      }
    }
  }
  return;
}

// SaveBaseLocation @ 14bc5be60

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
UDS_MainPlayerMovementComponent::SaveBaseLocation(UDS_MainPlayerMovementComponent *this)

{
  UPrimitiveComponent *pUVar1;
  longlong lVar2;
  char cVar3;
  bool bVar4;
  TVector<double>_u_0 *pTVar5;
  ACharacter *this_00;
  undefined1 auStack_298 [32];
  TVector<double>_u_0 TStack_278;
  double dStack_258;
  double dStack_250;
  double dStack_248;
  double dStack_240;
  double dStack_238;
  double dStack_230;
  double dStack_228;
  double dStack_220;
  double dStack_218;
  double dStack_210;
  double dStack_208;
  double dStack_200;
  double dStack_1f8;
  double dStack_1f0;
  double dStack_1e8;
  double dStack_1e0;
  TVector<double> TStack_1d8;
  TQuat<double> TStack_1b8;
  TMatrix<double> TStack_198;
  TMatrix<double> TStack_118;
  TMatrix<double> TStack_98;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_298;
  cVar3 = (**(code **)(this->_padding_ + 0x688))();
  if (cVar3 != '\0') {
    pUVar1 = *(UPrimitiveComponent **)(this->_padding_ + 0x368);
    if (pUVar1 != (UPrimitiveComponent *)0x0) {
      MovementBaseUtility::GetMovementBaseTransform
                (pUVar1,*(FName *)(this->_padding_ + 0x35c),(TVector<double> *)&this->_padding_,
                 (TQuat<double> *)&this->_padding_);
      bVar4 = MovementBaseUtility::IsDynamicBase(pUVar1);
      if (bVar4) {
        lVar2 = this->_padding_;
        TStack_278._s_0.X = *(double *)(lVar2 + 0x210);
        TStack_278._s_0.Y = *(double *)(lVar2 + 0x218);
        TStack_278._s_0.Z = *(double *)(lVar2 + 0x220);
        MovementBaseUtility::TransformLocationToLocal
                  (pUVar1,*(FName *)(this->_padding_ + 0x35c),(TVector<double> *)&TStack_278._s_0,
                   &TStack_1d8);
        bVar4 = -1 < *(char *)((longlong)&this->_padding_ + 5);
        if (bVar4) {
          lVar2 = this->_padding_;
          TStack_1b8.X = *(double *)(lVar2 + 0x1f0);
          TStack_1b8.Y = *(double *)(lVar2 + 0x1f8);
          TStack_1b8.Z = *(double *)(lVar2 + 0x200);
          TStack_1b8.W = *(double *)(lVar2 + 0x208);
          UE::Math::TQuatRotationTranslationMatrix<double>::TQuatRotationTranslationMatrix<double>
                    ((TQuatRotationTranslationMatrix<double> *)&TStack_118,&TStack_1b8,
                     &UE::Math::TVector<double>::ZeroVector);
          UE::Math::TQuatRotationTranslationMatrix<double>::TQuatRotationTranslationMatrix<double>
                    ((TQuatRotationTranslationMatrix<double> *)&dStack_258,
                     (TQuat<double> *)&this->_padding_,&UE::Math::TVector<double>::ZeroVector);
          TStack_198.M[0][0] = dStack_258;
          TStack_198.M[0][1] = dStack_238;
          TStack_198.M[0][2] = dStack_218;
          TStack_198.M[0][3] = dStack_1f8;
          TStack_198.M[1][0] = dStack_250;
          TStack_198.M[1][1] = dStack_230;
          TStack_198.M[1][2] = dStack_210;
          TStack_198.M[1][3] = dStack_1f0;
          TStack_198.M[2][0] = dStack_248;
          TStack_198.M[2][1] = dStack_228;
          TStack_198.M[2][2] = dStack_208;
          TStack_198.M[2][3] = dStack_1e8;
          TStack_198.M[3][0] = dStack_240;
          TStack_198.M[3][1] = dStack_220;
          TStack_198.M[3][2] = dStack_200;
          TStack_198.M[3][3] = dStack_1e0;
          VectorMatrixMultiply(&TStack_98,&TStack_118,&TStack_198);
          UE::Math::TMatrix<double>::Rotator(&TStack_98,(TRotator<double> *)&TStack_278._s_0);
          this_00 = (ACharacter *)this->_padding_;
          pTVar5 = &TStack_278;
        }
        else {
          this_00 = (ACharacter *)this->_padding_;
          pTVar5 = (TVector<double>_u_0 *)
                   USceneComponent::GetComponentRotation
                             ((USceneComponent *)this->_padding_,
                              (TRotator<double> *)&TStack_278._s_0);
        }
        ACharacter::SaveRelativeBasedMovement
                  (this_00,&TStack_1d8,(TRotator<double> *)&pTVar5->_s_0,bVar4);
      }
    }
  }
  return;
}

// SetLandingTimer @ 14bc60090

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
UDS_MainPlayerMovementComponent::SetLandingTimer(UDS_MainPlayerMovementComponent *this)

{
  float fVar1;
  float fVar2;
  FTimerManager *this_00;
  code *local_18;
  undefined8 uStack_10;
  
  if ((this->TimerHandle_Landing).Handle == 0) {
    fVar1 = this->DefaultBrakingDecelerationWalking;
    fVar2 = this->LandingDecelerationScale;
    *(float *)((longlong)&this->_padding_ + 4) =
         this->DefaultMaxAcceleration * this->LandingAccelerationScale;
    *(float *)&this->_padding_ = fVar1 * fVar2;
    this_00 = FDS_TimerManager::Get((UObject *)0x0);
    uStack_10 = (ulonglong)uStack_10._4_4_ << 0x20;
    local_18 = ClearLandingTimer;
    FTimerManager::SetTimer<UDS_MainPlayerMovementComponent>
              (this_00,&this->TimerHandle_Landing,this,(pmf_a6af6925 *)&local_18,__real_3dcccccd,
               false,__real_bf800000);
  }
  return;
}

// SetMountRotateAngle @ 14bc61320

void __thiscall
UDS_MainPlayerMovementComponent::SetMountRotateAngle
          (UDS_MainPlayerMovementComponent *this,float *param_1)

{
  this->MountRotateAngle = *param_1;
  this->OriginMountRotateAngle = *param_1;
  return;
}

// StartFalling @ 14bc66760

void __thiscall
UDS_MainPlayerMovementComponent::StartFalling
          (UDS_MainPlayerMovementComponent *this,int param_1,float param_2,float param_3,
          TVector<double> *param_4,TVector<double> *param_5)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  float fVar10;
  
  dVar9 = (param_4->field0_0x0)._s_0.Y;
  dVar1 = (param_4->field0_0x0)._s_0.X;
  dVar2 = (param_4->field0_0x0)._s_0.Z;
  lVar3 = this->_padding_;
  auVar7._0_8_ = dVar1 * dVar1;
  auVar7._8_8_ = 0;
  dVar1 = *(double *)(lVar3 + 0x210) - (param_5->field0_0x0)._s_0.X;
  dVar4 = *(double *)(lVar3 + 0x218) - (param_5->field0_0x0)._s_0.Y;
  dVar5 = *(double *)(lVar3 + 0x220) - (param_5->field0_0x0)._s_0.Z;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = dVar9 * dVar9 + auVar7._0_8_ + dVar2 * dVar2;
  auVar8 = sqrtpd(auVar7,auVar8);
  dVar9 = dVar4 * (double)this->_padding_ + dVar1 * (double)this->_padding_ +
          dVar5 * (double)this->_padding_;
  dVar1 = dVar1 - dVar9 * (double)this->_padding_;
  dVar4 = dVar4 - dVar9 * (double)this->_padding_;
  dVar5 = dVar5 - dVar9 * (double)this->_padding_;
  if (__real_38d1b717 <= (float)auVar8._0_8_) {
    fVar10 = (float)SQRT(dVar1 * dVar1 + dVar4 * dVar4 + dVar5 * dVar5) / (float)auVar8._0_8_;
    if (__real_3f800000 <= fVar10) {
      fVar10 = __real_3f800000;
    }
    fVar10 = param_2 + (__real_3f800000 - fVar10) * param_3;
  }
  else {
    fVar10 = 0.0;
  }
  cVar6 = (**(code **)(this->_padding_ + 0xe0))();
  if (cVar6 != '\0') {
    (**(code **)(this->_padding_ + 0x658))(this,3,0);
  }
                    /* WARNING: Could not recover jumptable at 0x000147875155. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x6f0))(this,fVar10,param_1);
  return;
}

// TickComponent @ 14bc67e00

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
UDS_MainPlayerMovementComponent::TickComponent
          (UDS_MainPlayerMovementComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  int *piVar1;
  USkeletalMeshComponent *this_00;
  longlong lVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  char cVar14;
  bool bVar15;
  bool bVar16;
  char cVar17;
  ENetMode EVar18;
  FName *pFVar19;
  FThreadSafeStaticStat<FStat_STAT_CharacterMovement> FVar20;
  FThreadSafeStaticStat<FStat_STAT_CharacterMovementTick> FVar21;
  double *pdVar22;
  FThreadSafeStaticStat<FStat_STAT_CharacterMovementNonSimulated> FVar23;
  FNetworkPredictionData_Client_Character *pFVar24;
  FThreadStats *pFVar25;
  FThreadStatsPool *pFVar26;
  uint uVar27;
  USceneComponent *pUVar28;
  FColor_u_0 FVar29;
  FName FVar30;
  FName FVar31;
  FName FVar32;
  bool bVar33;
  float fVar34;
  double dVar35;
  undefined1 auStackY_ea8 [32];
  FColor_u_0 FStack_e40;
  uint uStack_e3c;
  FName FStack_e38;
  FName FStack_e30;
  LARGE_INTEGER LStack_e28;
  FColor_u_0 FStack_e20;
  FColor_u_0 FStack_e1c;
  FColor_u_0 aFStack_e18 [2];
  FName FStack_e10;
  FColor_u_0 FStack_e00;
  uint uStack_dfc;
  FColor_u_0 FStack_df8;
  uint uStack_df4;
  undefined8 uStack_df0;
  FName FStack_de8;
  FName FStack_dd8;
  FName FStack_dc8;
  LARGE_INTEGER LStack_db8;
  LARGE_INTEGER LStack_db0;
  FStatMessage FStack_da8;
  FStatMessage FStack_d98;
  FStatMessage FStack_d88;
  double dStack_d78;
  double dStack_d70;
  double dStack_d68;
  FName FStack_d60;
  FName FStack_d58;
  FName FStack_d50;
  FName FStack_d48;
  undefined1 auStack_d40 [56];
  FRootMotionMovementParams FStack_d08;
  FScopedMovementUpdate FStack_c98;
  FScopedMovementUpdate FStack_688;
  ulonglong uStack_78;
  
  uStack_78 = __security_cookie.value ^ (ulonglong)auStackY_ea8;
  FStack_e30 = (FName)param_3;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Yellow,"UCharacterMovementComponent_TickComponent")
  ;
  bVar33 = -1 < CpuChannel->Enabled;
  if (bVar33) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1624,"UCharacterMovementComponent_TickComponent",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\CharacterMovementComponent.cpp"
               ,0x658);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1624);
  }
  pUVar28 = (USceneComponent *)0x0;
  LStack_e28.QuadPart = 0;
  FVar20 = StatPtr_STAT_CharacterMovement;
  if (StatPtr_STAT_CharacterMovement == (FThreadSafeStaticStat<FStat_STAT_CharacterMovement>)0x0) {
    pFVar19 = ::FName::FName(&FStack_d60,"STAT_CharacterMovement");
    FVar20 = (FThreadSafeStaticStat<FStat_STAT_CharacterMovement>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CharacterMovement,*pFVar19,
                        L"Char Movement Total","STATGROUP_Game","STATCAT_Advanced",L"Game",true,true
                        ,ST_int64,true,false,MCR_Invalid);
  }
  FVar32 = *(FName *)FVar20;
  bVar7 = false;
  bVar12 = false;
  FStack_de8.ComparisonIndex.Value = 0;
  FStack_de8.Number = 0;
  bVar13 = false;
  bVar9 = false;
  FVar29.Bits = (uint)FVar32.ComparisonIndex.Value;
  uVar27 = FVar32.Number;
  if ((FVar29.Bits == 0) && (uVar27 == 0)) {
LAB_147878bdb:
    bVar12 = bVar9;
    bVar7 = bVar13;
    bVar13 = false;
    FVar32 = FStack_de8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      FStack_e20.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&FStack_e20._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
      bVar7 = false;
      bVar12 = true;
      bVar13 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        FStack_e00.Bits = FVar29.Bits;
        uStack_dfc = uVar27;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&FStack_e00._s_0,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\CharacterMovementComponent.cpp"
                   ,0x659);
        bVar7 = true;
        bVar12 = true;
        bVar13 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147878bdb;
    FStack_e40.Bits = FVar29.Bits;
    uStack_e3c = uVar27;
    FThreadStats::AddMessage(FVar32,CycleScopeStart);
    bVar13 = true;
  }
  FVar21 = StatPtr_STAT_CharacterMovementTick;
  if (StatPtr_STAT_CharacterMovementTick ==
      (FThreadSafeStaticStat<FStat_STAT_CharacterMovementTick>)0x0) {
    pFVar19 = ::FName::FName(&FStack_d58,"STAT_CharacterMovementTick");
    FVar21 = (FThreadSafeStaticStat<FStat_STAT_CharacterMovementTick>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CharacterMovementTick,*pFVar19,
                        L"Char Tick","STATGROUP_Character","STATCAT_Advanced",L"Character",true,true
                        ,ST_int64,true,false,MCR_Invalid);
  }
  FVar31 = *(FName *)FVar21;
  FStack_dd8.ComparisonIndex.Value = 0;
  FStack_dd8.Number = 0;
  bVar10 = false;
  bVar9 = false;
  FVar29.Bits = (uint)FVar31.ComparisonIndex.Value;
  uVar27 = FVar31.Number;
  if ((FVar29.Bits == 0) && (uVar27 == 0)) {
LAB_147878cfd:
    bVar11 = false;
    FVar31 = FStack_dd8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      FStack_e1c.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&FStack_e1c._s_0,(char *)*(FName *)((longlong)FVar21 + 0x10));
      bVar10 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        FStack_df8.Bits = FVar29.Bits;
        uStack_df4 = uVar27;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&FStack_df8._s_0,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\CharacterMovementComponent.cpp"
                   ,0x65a);
        bVar10 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147878cfd;
    FStack_e40.Bits = FVar29.Bits;
    uStack_e3c = uVar27;
    FThreadStats::AddMessage(FVar31,CycleScopeStart);
    bVar11 = true;
  }
  if (__CsvProfilerStat1627 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("CharacterMovement");
    __CsvProfilerStat1627 = true;
  }
  FCsvProfiler::BeginExclusiveStat("CharacterMovement","CSV_CharacterMovement");
  dStack_d78 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_d70 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  dStack_d68 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if ((CharacterMovementCVars::AsyncCharacterMovement == 1) &&
     (cVar14 = (**(code **)(this->_padding_ + 0xa48))(this), cVar14 != '\0')) {
    bVar15 = true;
  }
  else {
    bVar15 = false;
    pdVar22 = (double *)(**(code **)(this->_padding_ + 0x628))(this,auStack_d40);
    dStack_d78 = *pdVar22;
    dStack_d70 = pdVar22[1];
    dStack_d68 = pdVar22[2];
  }
  cVar14 = (**(code **)(this->_padding_ + 0x688))(this);
  if ((cVar14 == '\0') ||
     (cVar14 = (**(code **)(this->_padding_ + 0x518))(this,param_1), cVar14 != '\0'))
  goto LAB_147879551;
  UMovementComponent::TickComponent
            ((UMovementComponent *)this,param_1,param_2,(FActorComponentTickFunction *)FStack_e30);
  cVar14 = (**(code **)(this->_padding_ + 0x688))(this);
  if (cVar14 == '\0') goto LAB_147879551;
  if (bVar15) {
    if (((this->_padding_ == 0) || (*(longlong *)(this->_padding_ + 0x340) == 0)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("CharacterOwner && CharacterOwner->GetMesh()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\CharacterMovementComponent.cpp"
                            ,0x674,L""), bVar15)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    this_00 = *(USkeletalMeshComponent **)(this->_padding_ + 0x340);
    cVar14 = (**(code **)(this_00->_padding_ + 0xbd8))(this_00);
    if (cVar14 != '\0') {
      bVar15 = ACharacter::IsPlayingRootMotion((ACharacter *)this->_padding_);
      fVar34 = ACharacter::GetAnimRootMotionTranslationScale((ACharacter *)this->_padding_);
      (**(code **)(this_00->_padding_ + 0xb98))(this_00,param_1,1);
      bVar16 = ACharacter::IsPlayingRootMotion((ACharacter *)this->_padding_);
      if (((bVar16) || (bVar15)) &&
         (USkeletalMeshComponent::ConsumeRootMotion(this_00,&FStack_d08),
         FStack_d08.bHasRootMotion != false)) {
        dVar35 = (double)fVar34;
        dVar5 = FStack_d08.RootMotionTransform.Translation.XY.m128d_f64[1] * dVar35;
        dVar4 = FStack_d08.RootMotionTransform.Translation.ZW.m128d_f64[1] * 0.0;
        FStack_d08.RootMotionTransform.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar5,0);
        FStack_d08.RootMotionTransform.Translation.XY.m128d_f64[0] =
             FStack_d08.RootMotionTransform.Translation.XY.m128d_f64[0] * dVar35;
        FStack_d08.RootMotionTransform.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)dVar5 >> 0x20);
        FStack_d08.RootMotionTransform.Translation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar4,0);
        FStack_d08.RootMotionTransform.Translation.ZW.m128d_f64[0] =
             FStack_d08.RootMotionTransform.Translation.ZW.m128d_f64[0] * dVar35;
        FStack_d08.RootMotionTransform.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)dVar4 >> 0x20);
        FRootMotionMovementParams::Accumulate
                  ((FRootMotionMovementParams *)&this->_padding_,&FStack_d08);
      }
    }
    (**(code **)(this->_padding_ + 0xa10))(this,param_1);
    goto LAB_147879551;
  }
  uStack_df0 = 0;
  cVar14 = (**(code **)(*(longlong *)this->_padding_ + 0x4f8))((longlong *)this->_padding_,0);
  if ((((char)((longlong *)this->_padding_)[0x2d] == '\x03') &&
      (((this->_padding_ & 0x100000000000) == 0 || (cVar14 != '\0')))) &&
     (cVar17 = (**(code **)(*(longlong *)this->_padding_ + 0x508))(), cVar17 == '\0'))
  goto LAB_147879551;
  lVar2 = this->_padding_;
  if (cVar14 != '\0') {
    if (((*(char *)(lVar2 + 0x168) == '\x02') && ((AActor *)this->_padding_ != (AActor *)0x0)) &&
       (EVar18 = AActor::InternalGetNetMode((AActor *)this->_padding_), EVar18 == NM_Client)) {
      UPawnMovementComponent::MarkForClientCameraUpdate((UPawnMovementComponent *)this);
    }
    (**(code **)(this->_padding_ + 0x7d8))(this);
    goto LAB_147879551;
  }
  *(float *)&this->_padding_ = *(float *)&this->_padding_ - param_1;
  if (*(byte *)(lVar2 + 0x168) < 2) {
    if (*(byte *)(lVar2 + 0x168) == 1) {
      if (CharacterMovementCVars::bDeferCharacterMeshMovement != false) {
        pUVar28 = *(USceneComponent **)(lVar2 + 0x340);
      }
      FScopedMovementUpdate::FScopedMovementUpdate(&FStack_688,pUVar28,DeferredUpdates,true);
      if ((this->_padding_ & 0x2000) != 0) {
        (**(code **)(this->_padding_ + 0x9e0))(this);
      }
      (**(code **)(this->_padding_ + 0xa60))(this,param_1);
      FScopedMovementUpdate::~FScopedMovementUpdate(&FStack_688);
    }
  }
  else {
    FVar23 = StatPtr_STAT_CharacterMovementNonSimulated;
    if (StatPtr_STAT_CharacterMovementNonSimulated ==
        (FThreadSafeStaticStat<FStat_STAT_CharacterMovementNonSimulated>)0x0) {
      pFVar19 = ::FName::FName(&FStack_d50,"STAT_CharacterMovementNonSimulated");
      FVar23 = (FThreadSafeStaticStat<FStat_STAT_CharacterMovementNonSimulated>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CharacterMovementNonSimulated,
                          *pFVar19,L"Char NonSimulated Time","STATGROUP_Character",
                          "STATCAT_Advanced",L"Character",true,true,ST_int64,true,false,MCR_Invalid)
      ;
    }
    FVar30 = *(FName *)FVar23;
    FStack_dc8.ComparisonIndex.Value = 0;
    FStack_dc8.Number = 0;
    bVar16 = false;
    bVar15 = false;
    if ((FVar30.ComparisonIndex.Value.Value == 0) && (FVar30.Number == 0)) {
LAB_1478790f0:
      bVar8 = bVar16;
      bVar6 = bVar15;
      bVar15 = false;
      FVar30 = FStack_dc8;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents == 0) {
        bVar8 = false;
        bVar6 = false;
      }
      else {
        aFStack_e18[0].Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&aFStack_e18[0]._s_0,(char *)*(FName *)((longlong)FVar23 + 0x10));
        bVar16 = false;
        bVar15 = true;
        if (CpuChannel->Enabled < 0) {
          bVar8 = false;
          bVar6 = true;
        }
        else {
          FStack_e38 = FVar30;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&FStack_e38,(wchar_t *)*(FName *)((longlong)FVar23 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\CharacterMovementComponent.cpp"
                     ,0x6a9);
          bVar8 = true;
          bVar6 = true;
          bVar16 = true;
          bVar15 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_1478790f0;
      FStack_e38 = FVar30;
      FThreadStats::AddMessage(FVar30,CycleScopeStart);
      bVar15 = true;
    }
    if (((*(char *)(this->_padding_ + 0x168) == '\x02') &&
        ((AActor *)this->_padding_ != (AActor *)0x0)) &&
       ((EVar18 = AActor::InternalGetNetMode((AActor *)this->_padding_), EVar18 == NM_Client &&
        ((pFVar24 = UCharacterMovementComponent::GetPredictionData_Client_Character
                              ((UCharacterMovementComponent *)this),
         pFVar24 != (FNetworkPredictionData_Client_Character *)0x0 &&
         (pFVar24->bUpdatePosition != 0)))))) {
      (**(code **)(this->_padding_ + 0xaa0))(this);
    }
    if (CharacterMovementCVars::bDeferCharacterMeshMovement != false) {
      pUVar28 = *(USceneComponent **)(this->_padding_ + 0x340);
    }
    FScopedMovementUpdate::FScopedMovementUpdate(&FStack_c98,pUVar28,DeferredUpdates,true);
    cVar14 = (**(code **)(*(longlong *)this->_padding_ + 0x818))();
    if ((cVar14 != '\0') ||
       ((*(longlong *)&((ACharacter *)this->_padding_)->field_0x2f0 == 0 &&
        (((this->_padding_ & 0x800) != 0 ||
         (bVar16 = ACharacter::IsPlayingRootMotion((ACharacter *)this->_padding_), bVar16)))))) {
      (**(code **)(this->_padding_ + 0x848))(this,&dStack_d78,param_1);
      cVar14 = (**(code **)(*(longlong *)this->_padding_ + 0x818))();
      if ((cVar14 != '\0') && (*(char *)(this->_padding_ + 0x60) == '\x02')) {
        (**(code **)(this->_padding_ + 0xa70))(this,param_1);
      }
    }
    else if (*(char *)(this->_padding_ + 0x60) == '\x02') {
      (**(code **)(this->_padding_ + 0x6c0))(this,param_1);
      (**(code **)(this->_padding_ + 0x6d8))(this);
      (**(code **)(this->_padding_ + 0xa70))(this,param_1);
      if ((((CharacterMovementCVars::NetEnableListenServerSmoothing != 0) &&
           ((this->_padding_ & 0x10000) == 0)) && ((AActor *)this->_padding_ != (AActor *)0x0)) &&
         (EVar18 = AActor::InternalGetNetMode((AActor *)this->_padding_), EVar18 == NM_ListenServer)
         ) {
        (**(code **)(this->_padding_ + 0xa90))(this,param_1);
      }
    }
    FScopedMovementUpdate::~FScopedMovementUpdate(&FStack_c98);
    if (bVar6) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar8) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar15) {
      FThreadStats::AddMessage(FVar30,CycleScopeEnd);
    }
  }
  if ((this->_padding_ & 0x20000000000000) != 0) {
    UCharacterMovementComponent::UpdateDefaultAvoidance((UCharacterMovementComponent *)this);
  }
  if ((this->_padding_ & 0x200000) != 0) {
    FStack_e38 = (FName)StatPtr_STAT_CharPhysicsInteraction;
    if (StatPtr_STAT_CharPhysicsInteraction ==
        (FThreadSafeStaticStat<FStat_STAT_CharPhysicsInteraction>)0x0) {
      pFVar19 = ::FName::FName(&FStack_d48,"STAT_CharPhysicsInteraction");
      FStack_e38 = (FName)FThreadSafeStaticStatBase::DoSetup
                                    ((FThreadSafeStaticStatBase *)
                                     &StatPtr_STAT_CharPhysicsInteraction,*pFVar19,
                                     L"Char Physics Interation","STATGROUP_Character",
                                     "STATCAT_Advanced",L"Character",true,true,ST_int64,true,false,
                                     MCR_Invalid);
    }
    FVar30 = *(FName *)FStack_e38;
    bVar15 = false;
    bVar16 = false;
    FStack_e10.ComparisonIndex.Value = 0;
    FStack_e10.Number = 0;
    if ((FVar30.ComparisonIndex.Value.Value == 0) && (FVar30.Number == 0)) {
LAB_14787944a:
      bVar6 = false;
      FVar30 = FStack_e10;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        FStack_e40.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&FStack_e40._s_0,*(char **)((longlong)FStack_e38 + 0x10));
        bVar15 = false;
        bVar16 = true;
        if (-1 < CpuChannel->Enabled) {
          FStack_e30 = FVar30;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&FStack_e30,*(wchar_t **)((longlong)FStack_e38 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\CharacterMovementComponent.cpp"
                     ,0x6ef);
          bVar15 = true;
          bVar16 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_14787944a;
      FStack_e30 = FVar30;
      FStack_e10 = FVar30;
      FThreadStats::AddMessage(FVar30,CycleScopeStart);
      LStack_e28.QuadPart = (ulonglong)FStack_e10 & 0xffffffff;
      bVar6 = true;
    }
    (**(code **)(this->_padding_ + 0x7c0))(this,param_1);
    (**(code **)(this->_padding_ + 0x7c8))(this,param_1);
    if (bVar16) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar15) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (((bVar6) && (FVar30 != (FName)0x0)) &&
       ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
      pFVar25 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar25 == (FThreadStats *)0x0) {
        pFVar26 = FThreadStatsPool::Get();
        pFVar25 = FThreadStatsPool::GetFromPool(pFVar26);
      }
      if (pFVar25->bWaitForExplicitFlush < pFVar25->ScopeCount) {
        FStack_da8.NameAndInfo.Index.Value = LStack_e28.s.LowPart;
        FStack_da8.NameAndInfo.Number = FVar30.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&LStack_e28);
        FStack_da8.StatData.Pad = (uchar  [8])(LStack_e28.QuadPart & 0xffffffff);
        FThreadStats::AddStatMessage(pFVar25,&FStack_da8);
        piVar1 = &pFVar25->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar25,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar25,false,false);
        }
      }
    }
  }
  if (0 < CharacterMovementCVars::VisualizeMovement) {
    (**(code **)(this->_padding_ + 0x8f0))(this);
  }
LAB_147879551:
  FCsvProfiler::EndExclusiveStat("CharacterMovement");
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar11) && (FVar31 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar25 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar25 == (FThreadStats *)0x0) {
      pFVar26 = FThreadStatsPool::Get();
      pFVar25 = FThreadStatsPool::GetFromPool(pFVar26);
    }
    if (pFVar25->bWaitForExplicitFlush < pFVar25->ScopeCount) {
      FStack_d98.NameAndInfo.Index = FVar31.ComparisonIndex.Value;
      FStack_d98.NameAndInfo.Number = FVar31.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&LStack_db8);
      FStack_d98.StatData.Pad[4] = '\0';
      FStack_d98.StatData.Pad[5] = '\0';
      FStack_d98.StatData.Pad[6] = '\0';
      FStack_d98.StatData.Pad[7] = '\0';
      FStack_d98.StatData.Pad[0] = LStack_db8.s.LowPart._0_1_;
      FStack_d98.StatData.Pad[1] = LStack_db8.s.LowPart._1_1_;
      FStack_d98.StatData.Pad[2] = LStack_db8.s.LowPart._2_1_;
      FStack_d98.StatData.Pad[3] = LStack_db8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar25,&FStack_d98);
      piVar1 = &pFVar25->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar25,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar25,false,false);
      }
    }
  }
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar13) && (FVar32 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar25 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar25 == (FThreadStats *)0x0) {
      pFVar26 = FThreadStatsPool::Get();
      pFVar25 = FThreadStatsPool::GetFromPool(pFVar26);
    }
    if (pFVar25->bWaitForExplicitFlush < pFVar25->ScopeCount) {
      FStack_d88.NameAndInfo.Index = FVar32.ComparisonIndex.Value;
      FStack_d88.NameAndInfo.Number = FVar32.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&LStack_db0);
      FStack_d88.StatData.Pad[4] = '\0';
      FStack_d88.StatData.Pad[5] = '\0';
      FStack_d88.StatData.Pad[6] = '\0';
      FStack_d88.StatData.Pad[7] = '\0';
      FStack_d88.StatData.Pad[0] = LStack_db0.s.LowPart._0_1_;
      FStack_d88.StatData.Pad[1] = LStack_db0.s.LowPart._1_1_;
      FStack_d88.StatData.Pad[2] = LStack_db0.s.LowPart._2_1_;
      FStack_d88.StatData.Pad[3] = LStack_db0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar25,&FStack_d88);
      piVar1 = &pFVar25->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar25,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar25,false,false);
      }
    }
  }
  if (bVar33) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// TwoSideWallHitTest @ 14bc68d70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
UDS_MainPlayerMovementComponent::TwoSideWallHitTest
          (UDS_MainPlayerMovementComponent *this,FHitResult *param_1,
          TArray<FHitResult,TSizedDefaultAllocator<32>_> *param_2,TVector<double> *param_3,
          float param_4)

{
  double dVar1;
  double dVar2;
  AActor *pAVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  bool bVar16;
  int iVar17;
  UObject *pUVar18;
  TVector<double>_u_0 *pTVar19;
  FName *pFVar20;
  FThreadSafeStaticStat<_public:___cdecl__protected:_bool___cdecl_UDS_MainPlayerMovementComponent::TwoSideWallHitTest(FHitResult,TArray<FHitResult,TSizedDefaultAllocator<32>_>_&,UE::Math::TVector<double>,float)_::_12_::<lambda_2>::operator()(void)const_::_2_::FStat_ObstacleProbe>
  FVar21;
  UWorld *pUVar22;
  undefined7 extraout_var;
  FWeakObjectPtr *this_00;
  ulonglong uVar23;
  longlong lVar24;
  uint uVar25;
  float fVar26;
  uint uVar27;
  double dVar28;
  double dVar29;
  undefined8 uVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined1 auStackY_2c8 [32];
  undefined1 local_268 [8];
  FWeakObjectPtr local_260;
  UObject *local_258;
  double local_250;
  double dStack_248;
  double local_240;
  TQuat<double> local_238;
  TVector<double>_u_0 local_218;
  TVector<double>_u_0 local_200;
  TStatId local_1e8;
  TArray<FHitResult,TSizedDefaultAllocator<32>_> *local_1e0;
  FCollisionShape local_1d8;
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  TVector<double> local_1a8;
  FName local_188;
  FName local_180;
  FCollisionQueryParams local_178;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  local_1e0 = param_2;
  pUVar18 = FWeakObjectPtr::Get(&(this->MainPlayerActor).WeakPtr);
  local_258 = *(UObject **)(pUVar18 + 0xb);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_258 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_258);
  }
  local_260.ObjectIndex = 0;
  local_260.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_258 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_258);
  }
  FWeakObjectPtr::operator=(&local_260,(FObjectPtr)&local_258);
  bVar15 = TWeakObjectPtr<USceneComponent,FWeakObjectPtr>::UEOpEquals
                     ((TWeakObjectPtr<USceneComponent,FWeakObjectPtr> *)&local_260,(void *)0x0);
  if (!bVar15) {
    pUVar18 = FWeakObjectPtr::Get(&local_260);
    local_250 = *(double *)&pUVar18[0xd].field_0x8;
    dStack_248 = *(double *)&pUVar18[0xd].field_0x10;
    local_240 = *(double *)&pUVar18[0xd].field_0x18;
    if (0 < (this->CachedCapsuleComps).ArrayNum) {
      pUVar18 = FWeakObjectPtr::Get(&(this->MainPlayerActor).WeakPtr);
      if (*(USceneComponent **)(pUVar18 + 0xb) == (USceneComponent *)0x0) {
        pTVar19 = &local_200;
        local_200._s_0.Y = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y;
        local_200._s_0.X = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X;
        local_200._s_0.Z = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z;
      }
      else {
        pTVar19 = &USceneComponent::GetRightVector(*(USceneComponent **)(pUVar18 + 0xb),&local_1a8)
                   ->field0_0x0;
      }
      local_218._s_0.X = (((TVector<double>_u_0 *)&(pTVar19->_s_0).X)->_s_0).X;
      local_218._s_0.Y = (pTVar19->_s_0).Y;
      local_218._s_0.Z = (pTVar19->_s_0).Z;
      GetQuatFromCurrentFloorPitch(this,&local_238,(TVector<double> *)&local_218._s_0);
      dVar7 = local_238.W;
      dVar34 = local_238.Y;
      dVar6 = __real_3f1a36e2e0000000;
      uVar14 = _UNK_15061cc8c;
      uVar13 = _UNK_15061cc88;
      uVar12 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar11 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      dVar35 = __real_3ff0000000000000;
      this_00 = (FWeakObjectPtr *)(this->CachedCapsuleComps).AllocatorInstance.Data;
      iVar17 = (this->CachedCapsuleComps).ArrayNum;
      uVar23 = (ulonglong)_tls_index;
      uVar36 = SUB84(local_238.Y,0);
      uVar37 = (undefined4)((ulonglong)local_238.Y >> 0x20);
      pUVar18 = (UObject *)(this_00 + iVar17);
      local_258 = pUVar18;
      while( true ) {
        if ((this->CachedCapsuleComps).ArrayNum != iVar17) {
          `TCheckedPointerIterator<TWeakObjectPtr<UCapsuleComponent,FWeakObjectPtr>,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_268);
        }
        if ((UObject *)this_00 == pUVar18) break;
        bVar15 = TWeakObjectPtr<UCapsuleComponent,FWeakObjectPtr>::UEOpEquals
                           ((TWeakObjectPtr<UCapsuleComponent,FWeakObjectPtr> *)this_00,(void *)0x0)
        ;
        if (!bVar15) {
          dVar1 = (param_3->field0_0x0)._s_0.X;
          dVar2 = (param_3->field0_0x0)._s_0.Y;
          uVar25 = SUB84(dVar1,0) & uVar11;
          uVar27 = (uint)((ulonglong)dVar1 >> 0x20) & uVar12;
          if ((dVar6 <= (double)CONCAT44(uVar27,uVar25) && (double)CONCAT44(uVar27,uVar25) != dVar6)
             || (uVar25 = SUB84(dVar2,0) & uVar11,
                uVar27 = (uint)((ulonglong)dVar2 >> 0x20) & uVar12,
                dVar6 <= (double)CONCAT44(uVar27,uVar25) && (double)CONCAT44(uVar27,uVar25) != dVar6
                )) {
            if ((this->_padding_ & 0x10000000000) == 0) {
              pUVar18 = FWeakObjectPtr::Get(this_00);
              dVar31 = *(double *)&pUVar18[0xd].field_0x8;
              dVar32 = *(double *)&pUVar18[0xd].field_0x10;
              local_200._s_0.Z = (double)*(undefined8 *)&pUVar18[0xd].field_0x18;
            }
            else {
              pUVar18 = FWeakObjectPtr::Get(this_00);
              dVar8 = *(double *)&pUVar18[0xd].field_0x18 - local_240;
              dVar32 = *(double *)&pUVar18[0xd].field_0x10 - dStack_248;
              dVar31 = *(double *)&pUVar18[0xd].field_0x8 - local_250;
              dVar33 = local_238.X * dVar32 - (double)CONCAT44(uVar37,uVar36) * dVar31;
              dVar33 = dVar33 + dVar33;
              dVar28 = local_238.Z * dVar31 - local_238.X * dVar8;
              dVar29 = (double)CONCAT44(uVar37,uVar36) * dVar8 - local_238.Z * dVar32;
              dVar28 = dVar28 + dVar28;
              dVar29 = dVar29 + dVar29;
              dVar31 = ((double)CONCAT44(uVar37,uVar36) * dVar33 - local_238.Z * dVar28) +
                       local_238.W * dVar29 + dVar31 + local_250;
              dVar32 = (local_238.Z * dVar29 - local_238.X * dVar33) + local_238.W * dVar28 + dVar32
                       + dStack_248;
              local_200._s_0.Z =
                   (local_238.X * dVar28 - local_238.Y * dVar29) + local_238.W * dVar33 + dVar8 +
                   local_240;
            }
            local_200._8_4_ = SUB84(dVar32,0);
            local_200._s_0.X = dVar31;
            local_200._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
            dVar29 = dVar1 * dVar1 + dVar2 * dVar2;
            if (dVar29 == dVar35) {
LAB_14bc69157:
              uVar30 = 0.0;
              uVar9 = dVar1;
              uVar10 = dVar2;
            }
            else {
              uVar30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
              uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
              uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
              if (__real_3e45798ee0000000 <= dVar29) {
                dVar29 = dVar35 / SQRT(dVar29);
                dVar1 = dVar1 * dVar29;
                dVar2 = dVar2 * dVar29;
                goto LAB_14bc69157;
              }
            }
            fVar26 = param_4 * *(float *)&this->_padding_;
            pAVar3 = (AActor *)this->_padding_;
            if (fVar26 <= __real_42c80000) {
              fVar26 = __real_42c80000;
            }
            lVar24 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar23 * 8);
            dVar1 = (double)fVar26;
            local_218._s_0.X = dVar1 * (double)uVar9 + dVar31;
            local_218._s_0.Y = dVar1 * (double)uVar10 + dVar32;
            local_218._s_0.Z = dVar1 * (double)uVar30 + local_200._s_0.Z;
            if ((*(int *)(lVar24 + 0x9d4c) < ::_TSS0) &&
               (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
              StatPtr_ObstacleProbe =
                   (FThreadSafeStaticStat<_public:___cdecl__protected:_bool___cdecl_UDS_MainPlayerMovementComponent::TwoSideWallHitTest(FHitResult,TArray<FHitResult,TSizedDefaultAllocator<32>_>_&,UE::Math::TVector<double>,float)_::_12_::<lambda_2>::operator()(void)const_::_2_::FStat_ObstacleProbe>
                    )0x0;
              pFVar20 = ::FName::FName(&local_188,"ObstacleProbe");
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_ObstacleProbe,*pFVar20,
                         L"ObstacleProbe","STATGROUP_CollisionTags","STATCAT_Advanced",
                         L"CollisionTags",true,true,ST_int64,true,false,MCR_Invalid);
              _Init_thread_footer(&::_TSS0);
            }
            FVar21 = StatPtr_ObstacleProbe;
            if (StatPtr_ObstacleProbe ==
                (FThreadSafeStaticStat<_public:___cdecl__protected:_bool___cdecl_UDS_MainPlayerMovementComponent::TwoSideWallHitTest(FHitResult,TArray<FHitResult,TSizedDefaultAllocator<32>_>_&,UE::Math::TVector<double>,float)_::_12_::<lambda_2>::operator()(void)const_::_2_::FStat_ObstacleProbe>
                 )0x0) {
              pFVar20 = ::FName::FName(&local_180,"ObstacleProbe");
              FVar21 = (FThreadSafeStaticStat<_public:___cdecl__protected:_bool___cdecl_UDS_MainPlayerMovementComponent::TwoSideWallHitTest(FHitResult,TArray<FHitResult,TSizedDefaultAllocator<32>_>_&,UE::Math::TVector<double>,float)_::_12_::<lambda_2>::operator()(void)const_::_2_::FStat_ObstacleProbe>
                        )FThreadSafeStaticStatBase::DoSetup
                                   ((FThreadSafeStaticStatBase *)&StatPtr_ObstacleProbe,*pFVar20,
                                    L"ObstacleProbe","STATGROUP_CollisionTags","STATCAT_Advanced",
                                    L"CollisionTags",true,true,ST_int64,true,false,MCR_Invalid);
            }
            local_1e8.StatIdPtr = (TStatIdData *)FVar21;
            if ((*(int *)(lVar24 + 0x9d4c) < ::_TSS0) &&
               (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
              ::FName::FName(&::StaticName,"ObstacleProbe");
              _Init_thread_footer(&::_TSS0);
            }
            FCollisionQueryParams::FCollisionQueryParams
                      (&local_178,::StaticName,&local_1e8,false,pAVar3);
            FCollisionQueryParams::AddIgnoredActor(&local_178,(AActor *)this->_padding_);
            pUVar18 = FWeakObjectPtr::Get(this_00);
            dVar31 = *(double *)&pUVar18[0xc].field_0x20;
            dVar32 = *(double *)(pUVar18 + 0xd);
            dVar29 = *(double *)&pUVar18[0xc].field_0x10;
            dVar8 = *(double *)&pUVar18[0xc].field_0x18;
            dVar1 = local_238.X * dVar31 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] + dVar7 * dVar8
                    + dVar34 * dVar32 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                    dVar29 * local_238.Z *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
            dVar2 = local_238.X * dVar29 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] + dVar7 * dVar32
                    + dVar34 * dVar8 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                    dVar31 * local_238.Z *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
            local_1c8._8_4_ = SUB84(dVar1,0);
            local_1c8._0_8_ =
                 local_238.X * dVar32 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] + dVar7 * dVar29 +
                 dVar34 * dVar31 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                 dVar8 * local_238.Z *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
            local_1c8._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
            local_1b8._8_4_ = SUB84(dVar2,0);
            local_1b8._0_8_ =
                 local_238.X * dVar8 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] + dVar7 * dVar31 +
                 dVar34 * dVar29 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                 dVar32 * local_238.Z *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
            local_1b8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
            pUVar18 = FWeakObjectPtr::Get(this_00);
            (**(code **)(*(longlong *)pUVar18 + 0x8b8))(pUVar18,&local_1d8,0);
            pUVar22 = (UWorld *)this->_padding_;
            if (pUVar22 == (UWorld *)0x0) {
              pUVar22 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
            }
            bVar15 = UWorld::SweepMultiByChannel
                               (pUVar22,local_1e0,(TVector<double> *)&local_200._s_0,
                                (TVector<double> *)&local_218._s_0,(TQuat<double> *)local_1c8,
                                ECC_GameTraceChannel1,&local_1d8,&local_178,
                                &FCollisionResponseParams::DefaultResponseParam);
            uVar36 = SUB84(pUVar22,0);
            bVar16 = UDS_GameInstance::IsCharacterCollisionBlockDebug();
            if ((bVar16) && (bVar15)) {
              dVar35 = (double)local_1c8._0_8_ * (double)local_1c8._0_8_ +
                       (double)local_1b8._0_8_ * (double)local_1b8._0_8_;
              dVar6 = (double)local_1c8._8_8_ * (double)local_1c8._8_8_ +
                      (double)local_1b8._8_8_ * (double)local_1b8._8_8_;
              dVar34 = dVar6 + dVar35;
              dVar35 = dVar35 + dVar6;
              dVar6 = (double)GlobalVectorConstants::FloatOne.m128_f32[2] - dVar34;
              dVar7 = (double)GlobalVectorConstants::FloatOne.m128_f32[3] - dVar35;
              lVar24 = -(ulonglong)
                        ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[3] <
                        (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) & uVar14,
                                         SUB84(dVar7,0) & uVar13));
              dVar34 = (double)GlobalVectorConstants::FloatOne.m128_f32[0] - dVar34;
              dVar35 = (double)GlobalVectorConstants::FloatOne.m128_f32[1] - dVar35;
              auVar5._8_4_ = (int)lVar24;
              auVar5._0_8_ = -(ulonglong)
                              ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[2] <
                              (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) & uVar12,
                                               SUB84(dVar6,0) & uVar11));
              auVar5._12_4_ = (int)((ulonglong)lVar24 >> 0x20);
              uVar25 = movmskpd(uVar36,auVar5);
              lVar24 = -(ulonglong)
                        ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[1] <
                        (double)CONCAT44((uint)((ulonglong)dVar35 >> 0x20) & uVar14,
                                         SUB84(dVar35,0) & uVar13));
              auVar4._8_4_ = (int)lVar24;
              auVar4._0_8_ = -(ulonglong)
                              ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[0] <
                              (double)CONCAT44((uint)((ulonglong)dVar34 >> 0x20) & uVar12,
                                               SUB84(dVar34,0) & uVar11));
              auVar4._12_4_ = (int)((ulonglong)lVar24 >> 0x20);
              iVar17 = movmskpd((int)CONCAT71(extraout_var,bVar16),auVar4);
              if ((uVar25 & 0x3fffffff) == 0 && iVar17 == 0) {
                pUVar22 = (UWorld *)this->_padding_;
                if (pUVar22 == (UWorld *)0x0) {
                  pUVar22 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
                }
                DrawDebugCapsule(pUVar22,(TVector<double> *)&local_200._s_0,
                                 local_1d8.field1_0x4.Box.HalfExtentY,
                                 local_1d8.field1_0x4.Box.HalfExtentX,(TQuat<double> *)local_1c8,
                                 &FColor::Blue,false,__real_3dcccccd,'\0',__real_3fc00000);
              }
LAB_14bc69500:
              if (local_178.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
                  (ForElementType<unsigned_int>)0x0) {
                FMemory::Free((void *)local_178.IgnoreSourceObjects.AllocatorInstance.SecondaryData)
                ;
              }
              if (local_178.IgnoreComponents.AllocatorInstance.SecondaryData !=
                  (ForElementType<unsigned_int>)0x0) {
                FMemory::Free((void *)local_178.IgnoreComponents.AllocatorInstance.SecondaryData);
              }
              return true;
            }
            if (bVar15) goto LAB_14bc69500;
            if (local_178.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
                (ForElementType<unsigned_int>)0x0) {
              FMemory::Free((void *)local_178.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
            }
            if (local_178.IgnoreComponents.AllocatorInstance.SecondaryData !=
                (ForElementType<unsigned_int>)0x0) {
              FMemory::Free((void *)local_178.IgnoreComponents.AllocatorInstance.SecondaryData);
            }
            uVar23 = (ulonglong)_tls_index;
            uVar36 = SUB84(local_238.Y,0);
            uVar37 = (undefined4)((ulonglong)local_238.Y >> 0x20);
            pUVar18 = local_258;
          }
        }
        this_00 = this_00 + 1;
      }
    }
  }
  return false;
}

// UpdateBasedMovement @ 14bc6a020

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

void __thiscall
UDS_MainPlayerMovementComponent::UpdateBasedMovement
          (UDS_MainPlayerMovementComponent *this,float param_1)

{
  longlong *plVar1;
  uint uVar2;
  UPrimitiveComponent *this_00;
  code *pcVar3;
  USkeletalMeshComponent *this_01;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [12];
  bool bVar20;
  char cVar21;
  bool bVar22;
  uint uVar23;
  undefined7 extraout_var;
  TQuat<double> *pTVar24;
  TRotator<double> *pTVar25;
  double *pdVar26;
  AActor *pAVar27;
  USceneComponent *pUVar28;
  USceneComponent *pUVar29;
  int iVar30;
  uint uVar31;
  UPrimitiveComponent *pUVar32;
  longlong *plVar33;
  longlong lVar34;
  longlong lVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  uint uVar50;
  uint uVar52;
  uint uVar53;
  uint uVar55;
  undefined1 auVar51 [16];
  double dVar54;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined1 auStackY_4a8 [32];
  TVector<double>_u_0 local_458;
  TRotator<double> local_438;
  TQuat<double> local_418;
  TVector<double>_u_0 local_3f8;
  undefined1 local_3d8 [16];
  undefined1 local_3c8 [16];
  TRotator<double> local_3b8;
  TVector<double>_u_0 local_398;
  TRotator<double> local_380;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 local_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  undefined1 local_328 [40];
  double dStack_300;
  double local_2f8;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  undefined4 local_284;
  undefined4 local_274;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  FWeakObjectPtr local_240;
  undefined8 local_238;
  undefined8 local_228;
  undefined8 local_220;
  TQuat<double> local_218;
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  TMatrix<double> local_1d8;
  TMatrix<double> local_158;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_4a8;
  cVar21 = (**(code **)(this->_padding_ + 0x688))();
  if (cVar21 == '\0') {
    return;
  }
  this_00 = *(UPrimitiveComponent **)(this->_padding_ + 0x368);
  bVar22 = MovementBaseUtility::IsDynamicBase(this_00);
  if (!bVar22) {
    return;
  }
  if (this_00 == (UPrimitiveComponent *)0x0) {
    return;
  }
  if ((*(uint *)&this_00->field_0x8 >> 0x1e & 1) != 0) {
    return;
  }
  if (*(longlong *)&this_00->field_0xa8 == 0) {
    return;
  }
  if ((*(uint *)(*(longlong *)&this_00->field_0xa8 + 8) >> 0x1e & 1) != 0) {
    return;
  }
  uVar2 = (uint)this->_padding_;
  *(uint *)&this->_padding_ = uVar2 | 1;
  local_418.X = UE::Math::TQuat<double>::Identity.X;
  local_418.Y = UE::Math::TQuat<double>::Identity.Y;
  local_418.Z = UE::Math::TQuat<double>::Identity.Z;
  local_418.W = UE::Math::TQuat<double>::Identity.W;
  local_398._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_398._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_398._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  pUVar32 = this_00;
  bVar22 = MovementBaseUtility::GetMovementBaseTransform
                     (this_00,*(FName *)(this->_padding_ + 0x35c),(TVector<double> *)&local_3f8._s_0
                      ,&local_218);
  auVar51 = ___xmm_7fffffffffffffff7fffffffffffffff;
  if (!bVar22) goto LAB_14bc6af45;
  dVar12 = (double)this->_padding_;
  dVar13 = (double)this->_padding_;
  dVar14 = (double)this->_padding_;
  dVar15 = (double)this->_padding_;
  uVar50 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar52 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar53 = __xmm_7fffffffffffffff7fffffffffffffff._8_4_;
  uVar55 = __xmm_7fffffffffffffff7fffffffffffffff._12_4_;
  lVar34 = -(ulonglong)
            (__real_3e45798ee0000000 <
            (double)CONCAT44((uint)((ulonglong)(dVar15 - local_218.W) >> 0x20) & uVar55,
                             SUB84(dVar15 - local_218.W,0) & uVar53));
  auVar4._8_4_ = (int)lVar34;
  auVar4._0_8_ = -(ulonglong)
                  (__real_3e45798ee0000000 <
                  (double)CONCAT44((uint)((ulonglong)(dVar14 - local_218.Z) >> 0x20) & uVar52,
                                   SUB84(dVar14 - local_218.Z,0) & uVar50));
  auVar4._12_4_ = (int)((ulonglong)lVar34 >> 0x20);
  iVar30 = movmskpd((int)pUVar32,auVar4);
  lVar34 = -(ulonglong)
            (__real_3e45798ee0000000 <
            (double)CONCAT44((uint)((ulonglong)(dVar13 - local_218.Y) >> 0x20) & uVar55,
                             SUB84(dVar13 - local_218.Y,0) & uVar53));
  auVar5._8_4_ = (int)lVar34;
  auVar5._0_8_ = -(ulonglong)
                  (__real_3e45798ee0000000 <
                  (double)CONCAT44((uint)((ulonglong)(dVar12 - local_218.X) >> 0x20) & uVar52,
                                   SUB84(dVar12 - local_218.X,0) & uVar50));
  auVar5._12_4_ = (int)((ulonglong)lVar34 >> 0x20);
  uVar23 = movmskpd((int)CONCAT71(extraout_var,bVar22),auVar5);
  uVar31 = iVar30 << 2 | uVar23;
  if (uVar31 == 0) {
LAB_14bc6a32b:
    bVar22 = false;
  }
  else {
    lVar34 = -(ulonglong)
              (__real_3e45798ee0000000 <
              (double)CONCAT44((uint)((ulonglong)(local_218.W + dVar15) >> 0x20) & uVar55,
                               SUB84(local_218.W + dVar15,0) & uVar53));
    auVar6._8_4_ = (int)lVar34;
    auVar6._0_8_ = -(ulonglong)
                    (__real_3e45798ee0000000 <
                    (double)CONCAT44((uint)((ulonglong)(local_218.Z + dVar14) >> 0x20) & uVar52,
                                     SUB84(local_218.Z + dVar14,0) & uVar50));
    auVar6._12_4_ = (int)((ulonglong)lVar34 >> 0x20);
    uVar31 = movmskpd(uVar31,auVar6);
    lVar34 = -(ulonglong)
              (__real_3e45798ee0000000 <
              (double)CONCAT44((uint)((ulonglong)(local_218.Y + dVar13) >> 0x20) & uVar55,
                               SUB84(local_218.Y + dVar13,0) & uVar53));
    auVar10._8_4_ = (int)lVar34;
    auVar10._0_8_ =
         -(ulonglong)
          (__real_3e45798ee0000000 <
          (double)CONCAT44((uint)((ulonglong)(local_218.X + dVar12) >> 0x20) & uVar52,
                           SUB84(local_218.X + dVar12,0) & uVar50));
    auVar10._12_4_ = (int)((ulonglong)lVar34 >> 0x20);
    iVar30 = movmskpd(uVar23,auVar10);
    if ((uVar31 & 0x3fffffff) == 0 && iVar30 == 0) goto LAB_14bc6a32b;
    dVar14 = dVar14 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar15 = dVar15 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    bVar22 = true;
    dVar12 = dVar12 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar13 = dVar13 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    local_418.X = local_218.X * dVar15 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                  local_218.W * dVar12 +
                  local_218.Y * dVar14 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                  local_218.Z * dVar13 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    local_418.Y = local_218.X * dVar14 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                  local_218.W * dVar13 +
                  local_218.Y * dVar15 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                  local_218.Z * dVar12 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    local_418.Z = local_218.X * dVar13 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                  local_218.W * dVar14 +
                  local_218.Y * dVar12 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                  local_218.Z * dVar15 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    local_418.W = local_218.X * dVar12 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                  local_218.W * dVar15 +
                  local_218.Y * dVar13 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                  local_218.Z * dVar14 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  }
  dVar15 = local_418.W;
  dVar13 = local_418.Z;
  dVar16 = local_418.Y;
  dVar14 = local_418.X;
  lVar34 = this->_padding_;
  bVar20 = false;
  uVar47 = SUB84(local_3f8._s_0.Z,0);
  uVar49 = (undefined4)((ulonglong)local_3f8._16_8_ >> 0x20);
  uVar56 = SUB84(local_3f8._s_0.Y,0);
  uVar57 = (undefined4)((ulonglong)local_3f8._8_8_ >> 0x20);
  uVar40 = SUB84(local_3f8._s_0.X,0);
  uVar41 = (undefined4)((ulonglong)local_3f8._0_8_ >> 0x20);
  dVar12 = *(double *)(lVar34 + 0x220);
  uVar43 = *(undefined4 *)(lVar34 + 0x210);
  uVar46 = *(undefined4 *)(lVar34 + 0x214);
  uVar44 = *(undefined4 *)(lVar34 + 0x218);
  uVar48 = *(undefined4 *)(lVar34 + 0x21c);
  local_458._s_0.Z = dVar12;
  local_360 = uVar43;
  uStack_35c = uVar46;
  uStack_358 = uVar44;
  uStack_354 = uVar48;
  if ((((bVar22) || (local_3f8._s_0.X != (double)this->_padding_)) ||
      (local_3f8._s_0.Y != (double)this->_padding_)) ||
     (local_3f8._s_0.Z != (double)this->_padding_)) {
    plVar1 = &this->_padding_;
    UE::Math::TQuatRotationTranslationMatrix<double>::TQuatRotationTranslationMatrix<double>
              ((TQuatRotationTranslationMatrix<double> *)&local_158,
               (TQuat<double> *)&this->_padding_,(TVector<double> *)plVar1);
    UE::Math::TQuatRotationTranslationMatrix<double>::TQuatRotationTranslationMatrix<double>
              ((TQuatRotationTranslationMatrix<double> *)local_328,&local_218,
               (TVector<double> *)&local_3f8._s_0);
    local_438.Pitch = *(double *)*(undefined1 (*) [16])(lVar34 + 0x1f0);
    local_438.Yaw = *(double *)(lVar34 + 0x1f8);
    local_3d8 = *(undefined1 (*) [16])(lVar34 + 0x1f0);
    local_3b8.Pitch = *(double *)*(undefined1 (*) [16])(lVar34 + 0x200);
    local_3b8.Yaw = *(double *)(lVar34 + 0x208);
    local_3c8 = *(undefined1 (*) [16])(lVar34 + 0x200);
    uVar42 = uVar43;
    uVar45 = uVar46;
    if ((bVar22) && (-1 < *(char *)((longlong)&this->_padding_ + 5))) {
      dVar16 = *(double *)(lVar34 + 0x1f0);
      dVar54 = *(double *)(lVar34 + 0x1f8);
      dVar17 = *(double *)(lVar34 + 0x200);
      dVar18 = *(double *)(lVar34 + 0x208);
      dVar13 = local_3b8.Pitch * local_418.X *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
               local_418.W * local_438.Yaw +
               local_418.Y * local_3b8.Yaw *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
               local_418.Z * local_438.Pitch *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      dVar14 = local_418.X * local_438.Pitch *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
               local_418.W * local_3b8.Yaw +
               local_418.Y * local_438.Yaw *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
               local_418.Z * local_3b8.Pitch *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      local_1f8._8_4_ = SUB84(dVar13,0);
      local_1f8._0_8_ =
           local_3b8.Yaw * local_418.X *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           local_418.W * local_438.Pitch +
           local_418.Y * local_3b8.Pitch *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           local_418.Z * local_438.Yaw *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      local_1f8._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
      local_1e8._8_4_ = SUB84(dVar14,0);
      local_1e8._0_8_ =
           local_418.X * local_438.Yaw *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
           local_418.W * local_3b8.Pitch +
           local_418.Y * local_438.Pitch *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
           local_418.Z * local_3b8.Yaw *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      local_1e8._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
      UE::Math::TRotator<double>::TRotator<double>(&local_438,(TQuat<double> *)local_1f8);
      plVar33 = (longlong *)this->_padding_;
      local_3b8.Pitch = local_438.Pitch;
      local_3b8.Yaw = local_438.Yaw;
      local_3b8.Roll = local_438.Roll;
      (**(code **)(*plVar33 + 0x850))(plVar33,&local_3b8,0);
      lVar34 = this->_padding_;
      local_3b8.Pitch = __real_3eb0c6f7a0000000;
      local_3c8 = *(undefined1 (*) [16])(lVar34 + 0x200);
      uVar43 = local_3c8._0_4_;
      uVar44 = local_3c8._4_4_;
      uVar40 = local_3c8._8_4_;
      uVar47 = local_3c8._12_4_;
      local_3d8 = *(undefined1 (*) [16])(lVar34 + 0x1f0);
      uVar46 = local_3d8._0_4_;
      uVar48 = local_3d8._4_4_;
      uVar41 = local_3d8._8_4_;
      uVar49 = local_3d8._12_4_;
      dVar13 = dVar17 - local_3c8._0_8_;
      dVar14 = dVar18 - local_3c8._8_8_;
      lVar35 = -(ulonglong)
                (__real_3eb0c6f7a0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & uVar55,SUB84(dVar14,0) & uVar53
                                ));
      auVar7._8_4_ = (int)lVar35;
      auVar7._0_8_ = -(ulonglong)
                      (__real_3eb0c6f7a0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) & uVar52,
                                       SUB84(dVar13,0) & uVar50));
      auVar7._12_4_ = (int)((ulonglong)lVar35 >> 0x20);
      iVar30 = movmskpd((int)plVar33,auVar7);
      dVar13 = dVar16 - local_3d8._0_8_;
      dVar14 = dVar54 - local_3d8._8_8_;
      lVar35 = -(ulonglong)
                (__real_3eb0c6f7a0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & uVar55,SUB84(dVar14,0) & uVar53
                                ));
      dVar36 = local_3d8._0_8_ + dVar16;
      dVar38 = local_3d8._8_8_ + dVar54;
      dVar14 = local_3c8._0_8_ + dVar17;
      dVar15 = local_3c8._8_8_ + dVar18;
      auVar8._8_4_ = (int)lVar35;
      auVar8._0_8_ = -(ulonglong)
                      (__real_3eb0c6f7a0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) & uVar52,
                                       SUB84(dVar13,0) & uVar50));
      auVar8._12_4_ = (int)((ulonglong)lVar35 >> 0x20);
      uVar23 = movmskpd((int)lVar34,auVar8);
      uVar31 = iVar30 << 2 | uVar23;
      if (uVar31 == 0) {
LAB_14bc6a5c3:
        if (((this->_padding_ & 0x10) != 0) ||
           (((this->_padding_ & 8) != 0 && (*(longlong *)(this->_padding_ + 0x2f0) != 0)))) {
          if ((char)this->_padding_ == '\0') {
            local_438.Pitch = 0.0;
            local_438.Roll = 0.0;
          }
          pcVar3 = *(code **)(this->_padding_ + 0x568);
          pTVar24 = UE::Math::TRotator<double>::Quaternion(&local_438,(TQuat<double> *)local_348);
          (*pcVar3)(this,&UE::Math::TVector<double>::ZeroVector,pTVar24);
          lVar34 = this->_padding_;
          uVar46 = *(undefined4 *)*(undefined1 (*) [16])(lVar34 + 0x1f0);
          uVar48 = *(undefined4 *)(lVar34 + 500);
          uVar41 = *(undefined4 *)(lVar34 + 0x1f8);
          uVar49 = *(undefined4 *)(lVar34 + 0x1fc);
          local_3d8 = *(undefined1 (*) [16])(lVar34 + 0x1f0);
          uVar43 = *(undefined4 *)*(undefined1 (*) [16])(lVar34 + 0x200);
          uVar44 = *(undefined4 *)(lVar34 + 0x204);
          uVar40 = *(undefined4 *)(lVar34 + 0x208);
          uVar47 = *(undefined4 *)(lVar34 + 0x20c);
          local_3c8 = *(undefined1 (*) [16])(lVar34 + 0x200);
        }
      }
      else {
        lVar34 = -(ulonglong)
                  (__real_3eb0c6f7a0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & uVar55,
                                   SUB84(dVar15,0) & uVar53));
        auVar9._8_4_ = (int)lVar34;
        auVar9._0_8_ = -(ulonglong)
                        (__real_3eb0c6f7a0000000 <
                        (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & uVar52,
                                         SUB84(dVar14,0) & uVar50));
        auVar9._12_4_ = (int)((ulonglong)lVar34 >> 0x20);
        uVar31 = movmskpd(uVar31,auVar9);
        lVar34 = -(ulonglong)
                  (__real_3eb0c6f7a0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar38 >> 0x20) & uVar55,
                                   SUB84(dVar38,0) & uVar53));
        auVar11._8_4_ = (int)lVar34;
        auVar11._0_8_ =
             -(ulonglong)
              (__real_3eb0c6f7a0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar36 >> 0x20) & uVar52,SUB84(dVar36,0) & uVar50))
        ;
        auVar11._12_4_ = (int)((ulonglong)lVar34 >> 0x20);
        iVar30 = movmskpd(uVar23,auVar11);
        if ((uVar31 & 0x3fffffff) == 0 && iVar30 == 0) goto LAB_14bc6a5c3;
      }
      if (*(longlong *)(this->_padding_ + 0x2f0) != 0) {
        dVar16 = dVar16 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
        dVar54 = dVar54 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
        dVar17 = dVar17 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
        dVar18 = dVar18 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
        dVar13 = (double)CONCAT44(uVar48,uVar46) * dVar17 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                 dVar54 * (double)CONCAT44(uVar47,uVar40) +
                 dVar18 * (double)CONCAT44(uVar49,uVar41) *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                 (double)CONCAT44(uVar44,uVar43) * dVar16 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        dVar14 = (double)CONCAT44(uVar48,uVar46) * dVar16 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                 dVar18 * (double)CONCAT44(uVar47,uVar40) +
                 dVar54 * (double)CONCAT44(uVar49,uVar41) *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                 (double)CONCAT44(uVar44,uVar43) * dVar17 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        local_348._8_4_ = SUB84(dVar13,0);
        local_348._0_8_ =
             (double)CONCAT44(uVar48,uVar46) * dVar18 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
             dVar16 * (double)CONCAT44(uVar47,uVar40) +
             dVar17 * (double)CONCAT44(uVar49,uVar41) *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
             (double)CONCAT44(uVar44,uVar43) * dVar54 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        local_348._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
        local_338._8_4_ = SUB84(dVar14,0);
        local_338._0_8_ =
             (double)CONCAT44(uVar48,uVar46) * dVar54 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
             dVar17 * (double)CONCAT44(uVar47,uVar40) +
             dVar16 * (double)CONCAT44(uVar49,uVar41) *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
             (double)CONCAT44(uVar44,uVar43) * dVar18 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        local_338._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
        UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_3d8,&local_3b8);
        pcVar3 = *(code **)(this->_padding_ + 0x6d0);
        pTVar25 = UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_348,&local_380);
        (*pcVar3)(this,&local_3b8,pTVar25);
        local_3d8 = *(undefined1 (*) [16])(this->_padding_ + 0x1f0);
        local_3c8 = *(undefined1 (*) [16])(this->_padding_ + 0x200);
      }
      uVar40 = SUB84(local_3f8._s_0.X,0);
      uVar41 = (undefined4)((ulonglong)local_3f8._0_8_ >> 0x20);
      uVar56 = SUB84(local_3f8._s_0.Y,0);
      uVar57 = (undefined4)((ulonglong)local_3f8._8_8_ >> 0x20);
      uVar47 = SUB84(local_3f8._s_0.Z,0);
      uVar49 = (undefined4)((ulonglong)local_3f8._16_8_ >> 0x20);
      uVar42 = local_360;
      uVar45 = uStack_35c;
      uVar44 = uStack_358;
      uVar48 = uStack_354;
      dVar13 = local_418.Z;
      dVar14 = local_418.X;
      dVar15 = local_418.W;
      dVar16 = local_418.Y;
    }
    if ((char)this->_padding_ == '\0') {
      lVar34 = *(longlong *)(this->_padding_ + 0x350);
      local_380.Roll = *(double *)(lVar34 + 0x240);
      dVar16 = (double)((float)local_380.Roll * *(float *)(lVar34 + 0x568));
      UE::Math::TMatrix<double>::InverseFast(&local_158,&local_1d8);
      uVar40 = SUB84(local_458._s_0.Z,0);
      uVar41 = (undefined4)((ulonglong)local_458._16_8_ >> 0x20);
      dVar13 = local_458._s_0.Z - dVar16;
      dVar54 = (double)CONCAT44(uVar48,uVar44);
      dVar14 = local_1d8.M[1][0] * (double)CONCAT44(uVar48,uVar44) +
               local_1d8.M[0][0] * (double)CONCAT44(uVar45,uVar42) + local_1d8.M[2][0] * dVar13 +
               local_1d8.M[3][0] * __real_3ff0000000000000;
      dVar15 = local_1d8.M[1][1] * (double)CONCAT44(uVar48,uVar44) +
               local_1d8.M[0][1] * (double)CONCAT44(uVar45,uVar42) + local_1d8.M[2][1] * dVar13 +
               local_1d8.M[3][1] * __real_3ff0000000000000;
      dVar13 = __real_3ff0000000000000 * local_1d8.M[3][2] +
               local_1d8.M[1][2] * (double)CONCAT44(uVar48,uVar44) +
               local_1d8.M[0][2] * (double)CONCAT44(uVar45,uVar42) + local_1d8.M[2][2] * dVar13;
      local_458._s_0.X =
           (double)local_328._32_8_ * dVar15 +
           (double)CONCAT44(local_328._4_4_,local_328._0_4_) * dVar14 + local_2e8 * dVar13 +
           local_2c8 * __real_3ff0000000000000;
      local_458._s_0.Y =
           dStack_300 * dVar15 + (double)CONCAT44(local_328._12_4_,local_328._8_4_) * dVar14 +
           dStack_2e0 * dVar13 + dStack_2c0 * __real_3ff0000000000000;
      local_458._s_0.Z =
           local_2f8 * dVar15 + (double)CONCAT44(local_328._20_4_,local_328._16_4_) * dVar14 +
           local_2d8 * dVar13 + local_2b8 * __real_3ff0000000000000 + dVar16;
      pdVar26 = (double *)(**(code **)(this->_padding_ + 0x5e0))(this,&local_380,&local_458);
    }
    else {
      dVar38 = local_458._s_0.Z - (double)CONCAT44(uVar49,uVar47);
      local_3b8.Pitch = (double)CONCAT44(uVar45,uVar42);
      local_3b8.Yaw = (double)CONCAT44(uVar48,uVar44);
      auVar19._4_8_ = auVar51._8_8_;
      auVar19._0_4_ = uVar45;
      auVar51._0_8_ = auVar19._0_8_ << 0x20;
      auVar51._8_4_ = uVar44;
      auVar51._12_4_ = uVar48;
      dVar54 = auVar51._8_8_;
      dVar37 = (double)CONCAT44(uVar45,uVar42) - (double)CONCAT44(uVar41,uVar40);
      dVar18 = dVar54 - (double)CONCAT44(uVar57,uVar56);
      dVar36 = dVar16 * dVar38 - dVar13 * dVar18;
      dVar36 = dVar36 + dVar36;
      dVar39 = dVar13 * dVar37 - dVar14 * dVar38;
      dVar39 = dVar39 + dVar39;
      dVar17 = dVar14 * dVar18 - dVar16 * dVar37;
      dVar17 = dVar17 + dVar17;
      local_438.Pitch =
           (((dVar16 * dVar17 - dVar13 * dVar39) + dVar15 * dVar36 + dVar37) - dVar37) +
           local_3b8.Pitch + (local_3f8._s_0.X - (double)*plVar1);
      local_438.Roll =
           (((dVar14 * dVar39 - dVar16 * dVar36) + dVar15 * dVar17 + dVar38) - dVar38) +
           local_458._s_0.Z + ((double)CONCAT44(uVar49,uVar47) - (double)this->_padding_);
      local_438.Yaw =
           (((dVar13 * dVar36 - dVar14 * dVar17) + dVar15 * dVar39 + dVar18) - dVar18) + dVar54 +
           ((double)CONCAT44(uVar57,uVar56) - (double)this->_padding_);
      pdVar26 = (double *)(**(code **)(this->_padding_ + 0x5e0))(this,&local_380,&local_438);
      uVar40 = SUB84(local_458._s_0.Z,0);
      uVar41 = (undefined4)((ulonglong)local_458._16_8_ >> 0x20);
      uVar42 = local_3b8.Pitch._0_4_;
      uVar45 = local_3b8.Pitch._4_4_;
    }
    dVar14 = *pdVar26;
    dVar15 = pdVar26[1];
    dVar13 = pdVar26[2];
    local_458._s_0.X = dVar14 - (double)CONCAT44(uVar45,uVar42);
    local_458._s_0.Y = dVar15 - dVar54;
    local_458._s_0.Z = dVar13 - (double)CONCAT44(uVar41,uVar40);
    local_438.Roll = dVar13;
    pdVar26 = (double *)(**(code **)(this->_padding_ + 0x5d8))(this,&local_380,&local_458);
    local_398._s_0.X = *pdVar26;
    local_398._s_0.Y = pdVar26[1];
    local_398._s_0.Z = pdVar26[2];
    if ((this->_padding_ & 0x1000000000000) == 0) {
      if (((this->_padding_ & 0x1000000000) == 0) || ((char)this->_padding_ == '\0')) {
        pAVar27 = (AActor *)0x0;
      }
      else {
        bVar20 = true;
        pAVar27 = USceneComponent::GetAttachmentRootActor((USceneComponent *)this_00);
        UPrimitiveComponent::IgnoreActorWhenMoving
                  ((UPrimitiveComponent *)this->_padding_,pAVar27,true);
        *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x10;
      }
      if (((!bVar22) && (local_3f8._s_0.X - (double)*plVar1 == 0.0)) &&
         (local_3f8._s_0.Y - (double)this->_padding_ == 0.0)) {
        local_398._s_0.X = 0.0;
        local_398._s_0.Y = 0.0;
      }
      memset(local_328,0,0x100);
      uVar48 = uStack_354;
      uVar44 = uStack_358;
      uVar46 = uStack_35c;
      uVar43 = local_360;
      local_380.Roll = 0.0;
      uStack_364 = 0;
      local_270 = 0;
      uStack_268 = 0;
      uStack_368 = 0xffffffff;
      local_260 = 0;
      uStack_258 = 0xffffffff;
      local_284 = 0xffffffff;
      local_328._4_4_ = 0x3f800000;
      local_438.Pitch = (double)CONCAT44(uStack_35c,local_360);
      local_438.Yaw = (double)CONCAT44(uStack_354,uStack_358);
      local_438.Roll = dVar12;
      (**(code **)(this->_padding_ + 0x568))(this,&local_398,local_3d8,1);
      local_458._s_0.X = (double)CONCAT44(uVar45,uVar42) - (local_438.Pitch + local_398._s_0.X);
      local_458._s_0.Y = dVar54 - (local_438.Yaw + local_398._s_0.Y);
      local_458._s_0.Z = (double)CONCAT44(uVar41,uVar40) - (local_438.Roll + local_398._s_0.Z);
      bVar22 = UE::Math::TVector<double>::IsNearlyZero
                         ((TVector<double> *)&local_458._s_0,__real_3f1a36e2e0000000);
      if (!bVar22) {
        (**(code **)(this->_padding_ + 0xa08))(this,&local_398,&local_438,local_328);
      }
      if (bVar20) {
        *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xffffffef;
        UPrimitiveComponent::IgnoreActorWhenMoving
                  ((UPrimitiveComponent *)this->_padding_,pAVar27,false);
      }
    }
    else {
      local_458._s_0.X = dVar14;
      local_458._s_0.Y = dVar15;
      local_458._s_0.Z = dVar13;
      USceneComponent::SetWorldLocationAndRotation
                ((USceneComponent *)this->_padding_,(TVector<double> *)&local_458._s_0,
                 (TQuat<double> *)local_3d8,false,(FHitResult *)0x0,None);
      uVar43 = local_360;
      uVar46 = uStack_35c;
      uVar44 = uStack_358;
      uVar48 = uStack_354;
    }
    cVar21 = (**(code **)(*(longlong *)this_00 + 0x4f8))(this_00);
    if ((cVar21 != '\0') &&
       (this_01 = *(USkeletalMeshComponent **)(this->_padding_ + 0x340),
       this_01 != (USkeletalMeshComponent *)0x0)) {
      USkeletalMeshComponent::ApplyDeltaToAllPhysicsTransforms
                (this_01,(TVector<double> *)&local_398._s_0,&local_418);
    }
  }
  cVar21 = (**(code **)(this->_padding_ + 0xd8))();
  if ((cVar21 != '\0') && (*(char *)((longlong)&this->_padding_ + 2) != '\0')) {
    local_328._0_4_ = local_328._0_4_ & 0xfffffff8;
    local_328._4_4_ = 0;
    local_328._8_4_ = 0;
    local_458._4_4_ = uVar46;
    local_458._0_4_ = uVar43;
    local_458._12_4_ = uVar48;
    local_458._8_4_ = uVar44;
    uStack_268 = 0;
    local_240.ObjectIndex = 0;
    local_240.ObjectSerialNumber = 0;
    local_238 = 0;
    local_228 = 0;
    local_220 = 0;
    local_458._s_0.Z = dVar12;
    memset(local_328 + 0x10,0,0x100);
    uVar43 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    local_260 = 0;
    uStack_258 = 0;
    local_274 = 0xffffffff;
    local_328._20_4_ = 0x3f800000;
    local_3c8._0_12_ = ZEXT412(0xffffffff) << 0x40;
    local_3c8._12_4_ = 0;
    local_250 = 0;
    uStack_248 = 0xffffffff;
    (**(code **)(this->_padding_ + 0x9a0))(this,&local_458,uVar43,uVar43);
    pUVar28 = (USceneComponent *)FWeakObjectPtr::Get(&local_240);
    if (pUVar28 != (USceneComponent *)0x0) {
      pUVar28 = USceneComponent::GetAttachmentRoot(pUVar28);
      pUVar29 = USceneComponent::GetAttachmentRoot((USceneComponent *)this_00);
      if (pUVar28 == pUVar29) goto LAB_14bc6af45;
    }
    (**(code **)(this->_padding_ + 0x6e8))(this);
    (**(code **)(this->_padding_ + 0x7b8))(this,0,0,1);
  }
LAB_14bc6af45:
  *(uint *)&this->_padding_ = uVar2;
  return;
}

// UpdateCalcVelocityByChildCollision @ 14bc6af80

void __thiscall
UDS_MainPlayerMovementComponent::UpdateCalcVelocityByChildCollision
          (UDS_MainPlayerMovementComponent *this,float param_1,float param_2,bool param_3,
          float param_4)

{
  int *piVar1;
  TArray<FHitResult,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  double dVar10;
  bool bVar11;
  int iVar12;
  ulonglong uVar13;
  byte bVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  FHitResult *pFVar17;
  uint uVar18;
  uint uVar19;
  float fVar20;
  uint uVar21;
  uint uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  uint uVar30;
  uint uVar31;
  undefined1 local_res8 [8];
  TArray<FHitResult,TSizedDefaultAllocator<32>_> local_208;
  uint local_1f8;
  uint local_1f4;
  FScriptContainerElement *local_1f0;
  TVector<double>_u_0 local_1e8;
  FHitResult local_1c8;
  
  pTVar2 = &this->CachedTwoSideBlockHits;
  piVar1 = &(this->CachedTwoSideBlockHits).ArrayMax;
  (this->CachedTwoSideBlockHits).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x100,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  dVar10 = __real_3f1a36e2e0000000;
  fVar9 = __real_3c8efa35;
  uVar8 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar7 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar6 = __real_3e45798ee0000000;
  dVar5 = __real_3ff0000000000000;
  local_1f4 = (this->CachedBlockHits).ArrayNum;
  uVar13 = (ulonglong)(int)local_1f4;
  pFVar16 = (this->CachedBlockHits).AllocatorInstance.Data;
  uVar30 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
  uVar31 = (uint)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
  local_1f0 = pFVar16 + uVar13 * 0x100;
  uVar26 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  uVar27 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  uVar28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uVar29 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  do {
    pFVar15 = local_1f0;
    if ((this->CachedBlockHits).ArrayNum != (int)uVar13) {
      `TCheckedPointerIterator<FHitResult,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
      uVar30 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      uVar31 = (uint)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
      uVar26 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      uVar27 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      uVar28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      uVar29 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    }
    if (pFVar16 == pFVar15) {
      return;
    }
    dVar24 = *(double *)(pFVar16 + 0x40);
    uVar18 = SUB84(dVar24,0) & uVar7;
    uVar21 = (uint)((ulonglong)dVar24 >> 0x20) & uVar8;
    if (((dVar10 <= (double)CONCAT44(uVar21,uVar18) && (double)CONCAT44(uVar21,uVar18) != dVar10) ||
        (uVar18 = (uint)*(undefined8 *)(pFVar16 + 0x48) & uVar7,
        uVar21 = (uint)((ulonglong)*(undefined8 *)(pFVar16 + 0x48) >> 0x20) & uVar8,
        dVar10 <= (double)CONCAT44(uVar21,uVar18) && (double)CONCAT44(uVar21,uVar18) != dVar10)) ||
       (uVar18 = (uint)*(undefined8 *)(pFVar16 + 0x50) & uVar7,
       uVar21 = (uint)((ulonglong)*(undefined8 *)(pFVar16 + 0x50) >> 0x20) & uVar8,
       dVar10 <= (double)CONCAT44(uVar21,uVar18) && (double)CONCAT44(uVar21,uVar18) != dVar10)) {
      dVar25 = *(double *)(pFVar16 + 0x48);
      dVar23 = dVar25 * dVar25 + dVar24 * dVar24;
      if (dVar23 == dVar5) {
LAB_14bc6b143:
        uVar18 = 0;
        uVar21 = 0;
      }
      else {
        if (dVar6 <= dVar23) {
          dVar23 = dVar5 / SQRT(dVar23);
          dVar24 = dVar24 * dVar23;
          dVar25 = dVar25 * dVar23;
          goto LAB_14bc6b143;
        }
        dVar25 = (double)CONCAT44(uVar29,uVar28);
        local_1e8._s_0.Z = (double)CONCAT44(uVar31,uVar30);
        dVar24 = (double)CONCAT44(uVar27,uVar26);
        uVar18 = uVar30;
        uVar21 = uVar31;
      }
      uVar19 = SUB84(dVar24,0) & uVar7;
      uVar22 = (uint)((ulonglong)dVar24 >> 0x20) & uVar8;
      if (((dVar10 <= (double)CONCAT44(uVar22,uVar19) && (double)CONCAT44(uVar22,uVar19) != dVar10)
          || (uVar19 = SUB84(dVar25,0) & uVar7, uVar22 = (uint)((ulonglong)dVar25 >> 0x20) & uVar8,
             dVar10 <= (double)CONCAT44(uVar22,uVar19) && (double)CONCAT44(uVar22,uVar19) != dVar10)
          ) || (dVar10 < (double)CONCAT44(uVar21 & uVar8,uVar18 & uVar7))) {
        local_208.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_208.ArrayNum = 0;
        local_208.ArrayMax = 0;
        local_1e8._s_0.Z = 0.0;
        dVar23 = (double)this->_padding_ * dVar25 + dVar24 * (double)this->_padding_;
        dVar25 = (double)this->_padding_ - dVar23 * dVar25;
        dVar24 = (double)this->_padding_ - dVar23 * dVar24;
        uVar26 = SUB84(dVar25,0);
        uVar27 = (undefined4)((ulonglong)dVar25 >> 0x20);
        auVar4._8_4_ = uVar26;
        auVar4._0_8_ = dVar24;
        auVar4._12_4_ = uVar27;
        this->_padding_ = (longlong)dVar24;
        this->_padding_ = auVar4._8_8_;
        this->_padding_ = 0;
        local_1c8.FaceIndex = *(int *)pFVar16;
        local_1c8.Time = *(float *)(pFVar16 + 4);
        bVar14 = ((byte)pFVar16[0xad] ^ local_1c8._173_1_) & 1 ^ local_1c8._173_1_;
        local_1c8.Distance = *(float *)(pFVar16 + 8);
        local_1c8.Location._0_8_ = *(undefined8 *)(pFVar16 + 0x10);
        local_1c8.Location._8_8_ = *(undefined8 *)(pFVar16 + 0x18);
        local_1c8._173_1_ = ((byte)pFVar16[0xad] ^ bVar14) & 2 ^ bVar14;
        local_1c8.MyItem = *(int *)(pFVar16 + 0xa4);
        local_1c8.Location._16_8_ = *(undefined8 *)(pFVar16 + 0x20);
        local_1c8.Item = *(int *)(pFVar16 + 0xa8);
        local_1c8.ImpactPoint._0_8_ = *(undefined8 *)(pFVar16 + 0x28);
        local_1c8.ImpactPoint._8_8_ = *(undefined8 *)(pFVar16 + 0x30);
        local_1c8.ElementIndex = *(uchar *)(pFVar16 + 0xac);
        local_1c8.Normal._0_8_ = *(undefined8 *)(pFVar16 + 0x40);
        local_1c8.Normal._8_8_ = *(undefined8 *)(pFVar16 + 0x48);
        local_1c8.PhysMaterial.WeakPtr = *(FWeakObjectPtr *)(pFVar16 + 0xb0);
        local_1c8.ImpactPoint._16_8_ = *(undefined8 *)(pFVar16 + 0x38);
        local_1c8.ImpactNormal._0_8_ = *(undefined8 *)(pFVar16 + 0x58);
        local_1c8.ImpactNormal._8_8_ = *(undefined8 *)(pFVar16 + 0x60);
        local_1c8.Normal._16_8_ = *(undefined8 *)(pFVar16 + 0x50);
        local_1c8.TraceStart._0_8_ = *(undefined8 *)(pFVar16 + 0x70);
        local_1c8.TraceStart._8_8_ = *(undefined8 *)(pFVar16 + 0x78);
        local_1c8.ImpactNormal._16_8_ = *(undefined8 *)(pFVar16 + 0x68);
        local_1c8.TraceEnd._0_8_ = *(undefined8 *)(pFVar16 + 0x88);
        local_1c8.TraceEnd._8_8_ = *(undefined8 *)(pFVar16 + 0x90);
        local_1c8.TraceStart._16_8_ = *(undefined8 *)(pFVar16 + 0x80);
        local_1c8.PenetrationDepth = *(float *)(pFVar16 + 0xa0);
        local_1c8.TraceEnd._16_8_ = *(undefined8 *)(pFVar16 + 0x98);
        FActorInstanceHandle::FActorInstanceHandle
                  (&local_1c8.HitObjectHandle,(FActorInstanceHandle *)(pFVar16 + 0xb8));
        local_1c8.Component.WeakPtr = *(FWeakObjectPtr *)(pFVar16 + 0xd8);
        local_1c8.PhysicsObjectOwner.WeakPtr = *(FWeakObjectPtr *)(pFVar16 + 0xe0);
        local_1c8.PhysicsObject = *(FPhysicsObject **)(pFVar16 + 0xe8);
        local_1c8.BoneName = *(FName *)(pFVar16 + 0xf0);
        local_1c8.MyBoneName = *(FName *)(pFVar16 + 0xf8);
        local_1e8._8_4_ = uVar26;
        local_1e8._0_8_ = dVar24;
        local_1e8._12_4_ = uVar27;
        local_1e8._s_0.Z = 0.0;
        bVar11 = TwoSideWallHitTest(this,&local_1c8,&local_208,(TVector<double> *)&local_1e8._s_0,
                                    param_1);
        if (bVar11) {
          uVar13 = (ulonglong)local_208.ArrayNum;
          pFVar17 = (FHitResult *)(local_208.AllocatorInstance.Data + uVar13 * 0x100);
          local_1f8 = local_208.ArrayNum;
          pFVar15 = local_208.AllocatorInstance.Data + 0x38;
          while( true ) {
            if (local_208.ArrayNum != (int)uVar13) {
              `TCheckedPointerIterator<FHitResult,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_res8);
            }
            if ((FHitResult *)(pFVar15 + -0x38) == pFVar17) break;
            if (((byte)pFVar15[0x75] & 1) != 0) {
              lVar3 = *(longlong *)(this->_padding_ + 0x350);
              local_1e8._s_0.Z = *(double *)(lVar3 + 0x220);
              local_1e8._0_16_ = *(undefined1 (*) [16])(lVar3 + 0x210);
              if ((double)*(float *)((longlong)&this->_padding_ + 4) <=
                  *(double *)pFVar15 -
                  (double)(float)(local_1e8._s_0.Z - (double)*(float *)(lVar3 + 0x568))) {
                dVar24 = *(double *)(pFVar15 + 0x18);
                fVar20 = sinf(*(float *)((longlong)&this->_padding_ + 4) * fVar9);
                if (((double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) & uVar8,
                                      SUB84(dVar24,0) & uVar7) < (double)fVar20) &&
                   ((float)(*(double *)(pFVar15 + 0x28) * *(double *)(pFVar16 + 0x60) +
                            *(double *)(pFVar15 + 0x20) * *(double *)(pFVar16 + 0x58) +
                           *(double *)(pFVar15 + 0x30) * *(double *)(pFVar16 + 0x68)) <= 0.0)) {
                  lVar3 = CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                   UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
                  this->_padding_ =
                       CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
                  this->_padding_ = lVar3;
                  this->_padding_ =
                       (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                  iVar12 = (this->CachedTwoSideBlockHits).ArrayNum;
                  if (iVar12 == *piVar1) {
                    iVar12 = UE::Core::Private::
                             ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x100,8,&pTVar2->AllocatorInstance,piVar1);
                  }
                  (this->CachedTwoSideBlockHits).ArrayNum = iVar12 + 1;
                  FHitResult::FHitResult
                            ((FHitResult *)
                             ((pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 0x100),
                             (FHitResult *)(pFVar15 + -0x38));
                }
              }
            }
            uVar13 = (ulonglong)local_1f8;
            pFVar15 = pFVar15 + 0x100;
          }
        }
        if (local_208.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_208.AllocatorInstance.Data);
        }
        uVar30 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
        uVar31 = (uint)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
        uVar26 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        uVar27 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        uVar28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
        uVar29 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      }
    }
    pFVar16 = pFVar16 + 0x100;
    uVar13 = (ulonglong)local_1f4;
  } while( true );
}

// UpdateConstrainInputAccelerationByChildCollision @ 14bc6b740

TVector<double> * __thiscall
UDS_MainPlayerMovementComponent::UpdateConstrainInputAccelerationByChildCollision
          (UDS_MainPlayerMovementComponent *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  uint uVar10;
  uint uVar11;
  double dVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  uint uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 local_res8 [8];
  
  dVar12 = __real_3f1a36e2e0000000;
  uVar11 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar10 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar8 = (param_1->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar8;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  dVar9 = __real_3e45798ee0000000;
  dVar8 = __real_3ff0000000000000;
  iVar5 = (this->CachedBlockHits).ArrayNum;
  pFVar13 = (this->CachedBlockHits).AllocatorInstance.Data;
  uVar22 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
  uVar23 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
  uVar24 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
  uVar25 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
  pFVar14 = pFVar13 + (longlong)iVar5 * 0x100;
  uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  while( true ) {
    if ((this->CachedBlockHits).ArrayNum != iVar5) {
      `TCheckedPointerIterator<FHitResult_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
      uVar22 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      uVar23 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
      uVar24 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
      uVar25 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
      uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    }
    dVar4 = (double)CONCAT44(uVar25,uVar24);
    if (pFVar13 == pFVar14) break;
    dVar1 = *(double *)(pFVar13 + 0x40);
    uVar15 = SUB84(dVar1,0) & uVar10;
    uVar16 = (uint)((ulonglong)dVar1 >> 0x20) & uVar11;
    if (((dVar12 <= (double)CONCAT44(uVar16,uVar15) && (double)CONCAT44(uVar16,uVar15) != dVar12) ||
        (uVar15 = (uint)*(undefined8 *)(pFVar13 + 0x48) & uVar10,
        uVar16 = (uint)((ulonglong)*(undefined8 *)(pFVar13 + 0x48) >> 0x20) & uVar11,
        dVar12 <= (double)CONCAT44(uVar16,uVar15) && (double)CONCAT44(uVar16,uVar15) != dVar12)) ||
       (uVar15 = (uint)*(undefined8 *)(pFVar13 + 0x50) & uVar10,
       uVar16 = (uint)((ulonglong)*(undefined8 *)(pFVar13 + 0x50) >> 0x20) & uVar11,
       dVar12 <= (double)CONCAT44(uVar16,uVar15) && (double)CONCAT44(uVar16,uVar15) != dVar12)) {
      dVar2 = (__return_storage_ptr__->field0_0x0)._s_0.X;
      dVar19 = (__return_storage_ptr__->field0_0x0)._s_0.Y;
      uVar15 = SUB84(dVar2,0) & uVar10;
      uVar16 = (uint)((ulonglong)dVar2 >> 0x20) & uVar11;
      if ((dVar12 <= (double)CONCAT44(uVar16,uVar15) && (double)CONCAT44(uVar16,uVar15) != dVar12)
         || (uVar15 = SUB84(dVar19,0) & uVar10, uVar16 = (uint)((ulonglong)dVar19 >> 0x20) & uVar11,
            dVar12 <= (double)CONCAT44(uVar16,uVar15) && (double)CONCAT44(uVar16,uVar15) != dVar12))
      {
        dVar17 = dVar19 * dVar19 + dVar2 * dVar2;
        dVar18 = dVar19;
        dVar3 = dVar2;
        if (dVar17 == dVar8) {
LAB_14bc6b8f0:
          dVar17 = 0.0;
          dVar4 = dVar3;
        }
        else {
          if (dVar9 <= dVar17) {
            dVar18 = dVar19 * (dVar8 / SQRT(dVar17));
            dVar3 = dVar2 * (dVar8 / SQRT(dVar17));
            goto LAB_14bc6b8f0;
          }
          dVar18 = (double)CONCAT44(uVar21,uVar20);
          dVar17 = (double)CONCAT44(uVar23,uVar22);
        }
        dVar3 = *(double *)(pFVar13 + 0x48);
        if ((float)(dVar18 * dVar3 + dVar1 * dVar4 + dVar17 * *(double *)(pFVar13 + 0x50)) < 0.0) {
          dVar18 = dVar1 * dVar2 + dVar19 * dVar3;
          dVar19 = dVar19 - dVar18 * dVar3;
          dVar4 = (__return_storage_ptr__->field0_0x0)._s_0.Z;
          auVar6._8_4_ = SUB84(dVar19,0);
          auVar6._0_8_ = dVar2 - dVar18 * dVar1;
          auVar6._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
          *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar6;
          (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar4;
          uVar22 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
          uVar23 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
          uVar24 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
          uVar25 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
          uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
          uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
        }
      }
    }
    pFVar13 = pFVar13 + 0x100;
  }
  iVar5 = (this->CachedTwoSideBlockHits).ArrayNum;
  pFVar13 = (this->CachedTwoSideBlockHits).AllocatorInstance.Data;
  pFVar14 = pFVar13 + (longlong)iVar5 * 0x100;
  do {
    if ((this->CachedTwoSideBlockHits).ArrayNum != iVar5) {
      `TCheckedPointerIterator<FHitResult_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
      uVar22 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      uVar23 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
      uVar24 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
      uVar25 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
      uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    }
    dVar4 = (double)CONCAT44(uVar25,uVar24);
    if (pFVar13 == pFVar14) {
      return __return_storage_ptr__;
    }
    dVar1 = *(double *)(pFVar13 + 0x40);
    uVar15 = SUB84(dVar1,0) & uVar10;
    uVar16 = (uint)((ulonglong)dVar1 >> 0x20) & uVar11;
    if (((dVar12 <= (double)CONCAT44(uVar16,uVar15) && (double)CONCAT44(uVar16,uVar15) != dVar12) ||
        (uVar15 = (uint)*(undefined8 *)(pFVar13 + 0x48) & uVar10,
        uVar16 = (uint)((ulonglong)*(undefined8 *)(pFVar13 + 0x48) >> 0x20) & uVar11,
        dVar12 <= (double)CONCAT44(uVar16,uVar15) && (double)CONCAT44(uVar16,uVar15) != dVar12)) ||
       (uVar15 = (uint)*(undefined8 *)(pFVar13 + 0x50) & uVar10,
       uVar16 = (uint)((ulonglong)*(undefined8 *)(pFVar13 + 0x50) >> 0x20) & uVar11,
       dVar12 <= (double)CONCAT44(uVar16,uVar15) && (double)CONCAT44(uVar16,uVar15) != dVar12)) {
      dVar2 = (__return_storage_ptr__->field0_0x0)._s_0.X;
      dVar19 = (__return_storage_ptr__->field0_0x0)._s_0.Y;
      uVar15 = SUB84(dVar2,0) & uVar10;
      uVar16 = (uint)((ulonglong)dVar2 >> 0x20) & uVar11;
      if ((dVar12 <= (double)CONCAT44(uVar16,uVar15) && (double)CONCAT44(uVar16,uVar15) != dVar12)
         || (uVar15 = SUB84(dVar19,0) & uVar10, uVar16 = (uint)((ulonglong)dVar19 >> 0x20) & uVar11,
            dVar12 <= (double)CONCAT44(uVar16,uVar15) && (double)CONCAT44(uVar16,uVar15) != dVar12))
      {
        dVar17 = dVar19 * dVar19 + dVar2 * dVar2;
        dVar18 = dVar19;
        dVar3 = dVar2;
        if (dVar17 == dVar8) {
LAB_14bc6ba85:
          dVar17 = 0.0;
          dVar4 = dVar3;
        }
        else {
          if (dVar9 <= dVar17) {
            dVar18 = dVar19 * (dVar8 / SQRT(dVar17));
            dVar3 = dVar2 * (dVar8 / SQRT(dVar17));
            goto LAB_14bc6ba85;
          }
          dVar18 = (double)CONCAT44(uVar21,uVar20);
          dVar17 = (double)CONCAT44(uVar23,uVar22);
        }
        dVar3 = *(double *)(pFVar13 + 0x48);
        if ((float)(dVar18 * dVar3 + dVar1 * dVar4 + dVar17 * *(double *)(pFVar13 + 0x50)) < 0.0) {
          dVar18 = dVar1 * dVar2 + dVar19 * dVar3;
          dVar19 = dVar19 - dVar18 * dVar3;
          dVar4 = (__return_storage_ptr__->field0_0x0)._s_0.Z;
          auVar7._8_4_ = SUB84(dVar19,0);
          auVar7._0_8_ = dVar2 - dVar18 * dVar1;
          auVar7._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
          *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar7;
          (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar4;
          uVar22 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
          uVar23 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
          uVar24 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
          uVar25 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
          uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
          uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
        }
      }
    }
    pFVar13 = pFVar13 + 0x100;
  } while( true );
}

