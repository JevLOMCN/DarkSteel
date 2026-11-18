// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 51

// CanStartPathFollowing @ 1478105e0

bool __thiscall UNavMovementComponent::CanStartPathFollowing(UNavMovementComponent *this)

{
  return true;
}

// GetActorFeetLocation @ 1478348c0

TVector<double> * __thiscall
UNavMovementComponent::GetActorFeetLocation
          (UNavMovementComponent *this,TVector<double> *__return_storage_ptr__)

{
  longlong lVar1;
  double local_38;
  double dStack_30;
  double local_28;
  
  lVar1 = this->_padding_;
  if (lVar1 == 0) {
    local_38 = FNavigationSystem::InvalidLocation.field0_0x0._s_0.X;
    dStack_30 = FNavigationSystem::InvalidLocation.field0_0x0._s_0.Y;
    local_28 = FNavigationSystem::InvalidLocation.field0_0x0._s_0.Z;
  }
  else {
    local_38 = *(double *)(lVar1 + 0x210);
    dStack_30 = *(double *)(lVar1 + 0x218);
    local_28 = *(double *)(lVar1 + 0x220) - *(double *)(lVar1 + 0x138);
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = local_38;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_30;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_28;
  return __return_storage_ptr__;
}

// GetFeetLocation @ 147839b30

TVector<double> * __thiscall
UNavMovementComponent::GetFeetLocation
          (UNavMovementComponent *this,TVector<double> *__return_storage_ptr__)

{
  (**(code **)(this[-1]._padding_ + 0x600))();
  return __return_storage_ptr__;
}

// GetFeetLocationBased @ 147839b60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FBasedPosition * __thiscall
UNavMovementComponent::GetFeetLocationBased
          (UNavMovementComponent *this,FBasedPosition *__return_storage_ptr__)

{
  (**(code **)(this[-1]._padding_ + 0x608))();
  return __return_storage_ptr__;
}

// GetLocation @ 14783a4d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<double> * __thiscall
UNavMovementComponent::GetLocation
          (UNavMovementComponent *this,TVector<double> *__return_storage_ptr__)

{
  longlong lVar1;
  double local_28;
  double dStack_20;
  double local_18;
  
  lVar1 = this[-1]._padding_;
  if (lVar1 == 0) {
    local_28 = ___xmm_47efffffe000000047efffffe0000000;
    dStack_20 = _UNK_150b28868;
    local_18 = __real_47efffffe0000000;
  }
  else {
    local_28 = *(double *)(lVar1 + 0x210);
    dStack_20 = *(double *)(lVar1 + 0x218);
    local_18 = *(double *)(lVar1 + 0x220);
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = local_28;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_20;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_18;
  return __return_storage_ptr__;
}

// GetMaxSpeedForNavMovement @ 14783a720

float __thiscall UNavMovementComponent::GetMaxSpeedForNavMovement(UNavMovementComponent *this)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014783a72a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float)(**(code **)(this[-1]._padding_ + 0x500))();
  return fVar1;
}

// GetNavAgentPropertiesRef @ 14783b3f0

FNavAgentProperties * __thiscall
UNavMovementComponent::GetNavAgentPropertiesRef(UNavMovementComponent *this)

{
  return (FNavAgentProperties *)&this->_padding_;
}

// GetNavAgentPropertiesRef @ 14783b400

FNavAgentProperties * __thiscall
UNavMovementComponent::GetNavAgentPropertiesRef(UNavMovementComponent *this)

{
  return (FNavAgentProperties *)&this->_padding_;
}

// GetNavMovementProperties @ 14783b470

FNavMovementProperties * __thiscall
UNavMovementComponent::GetNavMovementProperties(UNavMovementComponent *this)

{
  return (FNavMovementProperties *)&this->_padding_;
}

// GetNavMovementProperties @ 14783b480

FNavMovementProperties * __thiscall
UNavMovementComponent::GetNavMovementProperties(UNavMovementComponent *this)

{
  return (FNavMovementProperties *)&this->_padding_;
}

// GetOwnerAsObject @ 14783b620

UObject * __thiscall UNavMovementComponent::GetOwnerAsObject(UNavMovementComponent *this)

{
  return (UObject *)this[-1]._padding_;
}

// GetPathFollowingAgent @ 14783b6f0

IPathFollowingAgentInterface * __thiscall
UNavMovementComponent::GetPathFollowingAgent(UNavMovementComponent *this)

{
  UObjectBaseUtility *this_00;
  UClass *pUVar1;
  IPathFollowingAgentInterface *pIVar2;
  
  this_00 = (UObjectBaseUtility *)this->_padding_;
  if (this_00 != (UObjectBaseUtility *)0x0) {
    pUVar1 = Z_Construct_UClass_UPathFollowingAgentInterface_NoRegister();
    pIVar2 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar1);
    return pIVar2;
  }
  return (IPathFollowingAgentInterface *)0x0;
}

// GetPathFollowingAgent @ 14783b730

IPathFollowingAgentInterface * __thiscall
UNavMovementComponent::GetPathFollowingAgent(UNavMovementComponent *this)

{
  UObjectBaseUtility *this_00;
  UClass *pUVar1;
  IPathFollowingAgentInterface *pIVar2;
  
  this_00 = (UObjectBaseUtility *)this->_padding_;
  if (this_00 != (UObjectBaseUtility *)0x0) {
    pUVar1 = Z_Construct_UClass_UPathFollowingAgentInterface_NoRegister();
    pIVar2 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar1);
    return pIVar2;
  }
  return (IPathFollowingAgentInterface *)0x0;
}

// GetUpdatedObject @ 14783e3b0

TObjectPtr<UObject> __thiscall UNavMovementComponent::GetUpdatedObject(UNavMovementComponent *this)

{
  UObject *pUVar1;
  TObjectPtr<UObject>_u_0 in_RDX;
  
  pUVar1 = (UObject *)this[-1]._padding_;
  *(UObject **)in_RDX.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  return (TObjectPtr<UObject>)in_RDX;
}

// GetVelocityForNavMovement @ 14783e4d0

TVector<double> * __thiscall
UNavMovementComponent::GetVelocityForNavMovement
          (UNavMovementComponent *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = *(double *)&this[-1].NavAgentProps;
  dVar1 = *(double *)&this[-1].NavAgentProps.AgentHeight;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)this[-1].NavMovementProperties;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// ResetMoveState @ 147860ce0

void __thiscall UNavMovementComponent::ResetMoveState(UNavMovementComponent *this)

{
  *(char *)&this->_padding_ = (char)this->_padding_;
  return;
}

// SetPathFollowingAgent @ 14786cc90

void __thiscall
UNavMovementComponent::SetPathFollowingAgent
          (UNavMovementComponent *this,IPathFollowingAgentInterface *param_1)

{
  UObject *pUVar1;
  
  if (param_1 != (IPathFollowingAgentInterface *)0x0) {
    pUVar1 = (UObject *)(**(code **)((longlong)*param_1 + 8))(param_1);
    if (pUVar1 != (UObject *)0x0) goto LAB_14786ccb5;
  }
  pUVar1 = (UObject *)0x0;
LAB_14786ccb5:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  this->_padding_ = (longlong)pUVar1;
  return;
}

// StopMovementImmediately @ 147876c20

void __thiscall UNavMovementComponent::StopMovementImmediately(UNavMovementComponent *this)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  this->_padding_ = uVar1;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (**(code **)(this->_padding_ + 0x550))();
                    /* WARNING: Could not recover jumptable at 0x000147876c5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xf8))();
  return;
}

// StopMovementImmediately`adjustor{296}' @ 147876c6c

/* [thunk]:public: virtual void __cdecl
   UNavMovementComponent::StopMovementImmediately`adjustor{296}' (void) __ptr64 */

void __thiscall
UNavMovementComponent::StopMovementImmediately_adjustor_296__(UNavMovementComponent *this)

{
  StopMovementImmediately((UNavMovementComponent *)&this[-1]._padding_);
  return;
}

// StaticClass @ 14788a090

UClass * __cdecl UNavMovementComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavMovementComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NavMovementComponent",
               &Z_Registration_Info_UClass_UNavMovementComponent.InnerSingleton,
               StaticRegisterNativesUNavMovementComponent,0x188,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavMovementComponent>,
               InternalVTableHelperCtorCaller<UNavMovementComponent>,local_res8,
               UMovementComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavMovementComponent.InnerSingleton;
}

// UNavMovementComponent @ 1478aa570

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UNavMovementComponent * __thiscall
UNavMovementComponent::UNavMovementComponent(UNavMovementComponent *this,FVTableHelper *param_1)

{
  FMovementProperties *pFVar1;
  
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  *(byte *)&(this->NavAgentProps)._padding_ = (byte)(this->NavAgentProps)._padding_ & 0xe0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  pFVar1->bCanCrouch = '\0';
  pFVar1->bCanFly = '\0';
  pFVar1->bCanSwim = '\0';
  pFVar1->bCanWalk = '\0';
  pFVar1->bCanJump = '\0';
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&___7UNavMovementComponent__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->NavMovementProperties).FixedPathBrakingDistance = 0.0;
  (this->NavMovementProperties).bUpdateNavAgentWithOwnersCollision = true;
  (this->NavMovementProperties).bUseAccelerationForPaths = false;
  (this->NavMovementProperties).bUseFixedBrakingDistanceForPaths = false;
  (this->NavMovementProperties).bStopMovementAbortPaths = true;
  (this->NavAgentProps).AgentRadius = -1.0;
  (this->NavAgentProps).AgentHeight = -1.0;
  (this->NavAgentProps).AgentStepHeight = -1.0;
  (this->NavAgentProps).NavWalkingSearchHeightScale = 0.5;
  *(undefined8 *)&(this->NavAgentProps).PreferredNavData = 0;
  *(undefined8 *)&(this->NavAgentProps).PreferredNavData.field_0x8 = 0;
  *(undefined8 *)&(this->NavAgentProps).PreferredNavData.field_0x10 = 0;
  *(undefined8 *)&(this->NavAgentProps).PreferredNavData.field_0x18 = 0;
  (this->PathFollowingComp).field0_0x0.DebugPtr = (UObject *)0x0;
  return this;
}

// UNavMovementComponent @ 1478aa640

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UNavMovementComponent * __thiscall
UNavMovementComponent::UNavMovementComponent
          (UNavMovementComponent *this,FObjectInitializer *param_1)

{
  FMovementProperties *pFVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  byte bVar4;
  
  UMovementComponent::UMovementComponent((UMovementComponent *)this,param_1);
  *(byte *)&(this->NavAgentProps)._padding_ = (byte)(this->NavAgentProps)._padding_ & 0xe0;
  pFVar1->bCanCrouch = '\0';
  pFVar1->bCanFly = '\0';
  pFVar1->bCanSwim = '\0';
  pFVar1->bCanWalk = '\0';
  pFVar1->bCanJump = '\0';
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&___7UNavMovementComponent__6B_;
  this->FixedPathBrakingDistance_DEPRECATED = 0.0;
  (this->NavMovementProperties).FixedPathBrakingDistance = 0.0;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 0x80;
  puVar3 = &this->field_0x134;
  this->bUpdateNavAgentWithOwnersCollision_DEPRECATED = '\x01';
  this->bStopMovementAbortPaths_DEPRECATED = '\x01';
  this->bUseFixedBrakingDistanceForPaths_DEPRECATED = '\0';
  this->bUseAccelerationForPaths_DEPRECATED = '\0';
  (this->NavMovementProperties).bUpdateNavAgentWithOwnersCollision = true;
  (this->NavMovementProperties).bUseAccelerationForPaths = false;
  (this->NavMovementProperties).bUseFixedBrakingDistanceForPaths = false;
  (this->NavMovementProperties).bStopMovementAbortPaths = true;
  (this->NavAgentProps).AgentRadius = -1.0;
  (this->NavAgentProps).AgentHeight = -1.0;
  (this->NavAgentProps).AgentStepHeight = -1.0;
  (this->NavAgentProps).NavWalkingSearchHeightScale = 0.5;
  *(undefined8 *)&(this->NavAgentProps).PreferredNavData = 0;
  *(undefined8 *)&(this->NavAgentProps).PreferredNavData.field_0x8 = 0;
  *(undefined8 *)&(this->NavAgentProps).PreferredNavData.field_0x10 = 0;
  *(undefined8 *)&(this->NavAgentProps).PreferredNavData.field_0x18 = 0;
  (this->PathFollowingComp).field0_0x0.DebugPtr = (UObject *)0x0;
  return this;
}

// ~UNavMovementComponent @ 1478ac400

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNavMovementComponent::~UNavMovementComponent(UNavMovementComponent *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&___7UNavMovementComponent__6B_;
  pvVar1 = *(void **)&(this->NavAgentProps).PreferredNavData.field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7INavMovementInterface__6B_;
  this->_padding_ = (longlong)&UMovementComponent::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UMovementComponent::_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&UMovementComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// CanStopPathFollowing @ 1478b88c0

bool __thiscall UNavMovementComponent::CanStopPathFollowing(UNavMovementComponent *this)

{
  return true;
}

// ClearFixedBrakingDistance @ 1478b9520

void __thiscall UNavMovementComponent::ClearFixedBrakingDistance(UNavMovementComponent *this)

{
  (this->NavMovementProperties).bUseFixedBrakingDistanceForPaths = false;
  return;
}

// GetActorFeetLocationBased @ 1478cf790

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FBasedPosition * __thiscall
UNavMovementComponent::GetActorFeetLocationBased
          (UNavMovementComponent *this,FBasedPosition *__return_storage_ptr__)

{
  TVector<double> *pTVar1;
  
  pTVar1 = (TVector<double> *)(**(code **)(this->_padding_ + 0x600))();
  FBasedPosition::FBasedPosition(__return_storage_ptr__,(AActor *)0x0,pTVar1);
  return __return_storage_ptr__;
}

// GetForwardVector @ 1478d4740

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
UNavMovementComponent::GetForwardVector
          (UNavMovementComponent *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  USceneComponent *this_00;
  double dVar2;
  TVector<double>_u_0 *pTVar3;
  TVector<double>_u_0 local_28;
  
  this_00 = *(USceneComponent **)(this[-1]._padding_ + 0x1b8);
  if (this_00 == (USceneComponent *)0x0) {
    pTVar3 = &local_28;
    local_28._s_0.X = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
    local_28._s_0.Y = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
    local_28._s_0.Z = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
  }
  else {
    pTVar3 = &USceneComponent::GetForwardVector(this_00,(TVector<double> *)&local_28._s_0)->
              field0_0x0;
  }
  dVar2 = (pTVar3->_s_0).Y;
  dVar1 = (pTVar3->_s_0).Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (((TVector<double>_u_0 *)&(pTVar3->_s_0).X)->_s_0).X
  ;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1478d9bf0

UClass * __cdecl UNavMovementComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavMovementComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NavMovementComponent",
               &Z_Registration_Info_UClass_UNavMovementComponent.InnerSingleton,
               StaticRegisterNativesUNavMovementComponent,0x188,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavMovementComponent>,
               InternalVTableHelperCtorCaller<UNavMovementComponent>,local_res8,
               UMovementComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavMovementComponent.InnerSingleton;
}

// GetSimpleCollisionCylinder @ 1478db760

void __thiscall
UNavMovementComponent::GetSimpleCollisionCylinder
          (UNavMovementComponent *this,float *param_1,float *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001478db767. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this[-1]._padding_ + 0x688))();
  return;
}

// GetSimpleCollisionCylinderExtent @ 1478db780

TVector<double> * __thiscall
UNavMovementComponent::GetSimpleCollisionCylinderExtent
          (UNavMovementComponent *this,TVector<double> *__return_storage_ptr__)

{
  undefined1 auVar1 [16];
  double dVar2;
  float local_res8 [2];
  float local_res10 [6];
  
  (**(code **)(*(longlong *)this[-1]._padding_ + 0x688))
            ((longlong *)this[-1]._padding_,local_res8,local_res10);
  dVar2 = (double)local_res8[0];
  auVar1._8_4_ = SUB84(dVar2,0);
  auVar1._0_8_ = dVar2;
  auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)local_res10[0];
  return __return_storage_ptr__;
}

// IsCrouching @ 1478e1010

bool __thiscall UNavMovementComponent::IsCrouching(UNavMovementComponent *this)

{
  return false;
}

// IsFalling @ 1478e1150

bool __thiscall UNavMovementComponent::IsFalling(UNavMovementComponent *this)

{
  return false;
}

// IsFlying @ 1478e1160

bool __thiscall UNavMovementComponent::IsFlying(UNavMovementComponent *this)

{
  return false;
}

// IsMovingOnGround @ 1478e1360

bool __thiscall UNavMovementComponent::IsMovingOnGround(UNavMovementComponent *this)

{
  return false;
}

// IsSwimming @ 1478e1a70

bool __thiscall UNavMovementComponent::IsSwimming(UNavMovementComponent *this)

{
  return false;
}

// RequestDirectMove @ 1478eb980

void __thiscall
UNavMovementComponent::RequestDirectMove
          (UNavMovementComponent *this,TVector<double> *param_1,bool param_2)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  this[-1].NavMovementProperties = (FNavMovementProperties)(param_1->field0_0x0)._s_0.X;
  *(double *)&this[-1].NavAgentProps = dVar1;
  *(double *)&this[-1].NavAgentProps.AgentHeight = (param_1->field0_0x0)._s_0.Z;
  return;
}

// RequestPathMove @ 1478eb9a0

void __thiscall
UNavMovementComponent::RequestPathMove(UNavMovementComponent *this,TVector<double> *param_1)

{
  return;
}

// Serialize @ 1478ef030

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNavMovementComponent::Serialize(UNavMovementComponent *this,FArchive *param_1)

{
  bool bVar1;
  UClass *pUVar2;
  UObject *pUVar3;
  
  pUVar3 = (UObject *)this->_padding_;
  UActorComponent::Serialize((UActorComponent *)this,param_1);
  if ((param_1->field_0x28 & 1) == 0) {
    return;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar3 == (UObject *)0x0)) {
    this->_padding_ = (longlong)pUVar3;
    if (pUVar3 != (UObject *)0x0) goto LAB_1478eef97;
  }
  else {
    UE::GC::MarkAsReachable(pUVar3);
    this->_padding_ = (longlong)pUVar3;
LAB_1478eef97:
    pUVar2 = UPrimitiveComponent::StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar2);
    if (bVar1) {
      pUVar3 = (UObject *)this->_padding_;
      goto LAB_1478eefba;
    }
  }
  pUVar3 = (UObject *)0x0;
LAB_1478eefba:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  this->_padding_ = (longlong)pUVar3;
  return;
}

// Serialize @ 1478ef040

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
UNavMovementComponent::Serialize(UNavMovementComponent *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UMovementComponent::Serialize((UMovementComponent *)this,pFVar1);
  return;
}

// SetUpdateNavAgentWithOwnersCollisions @ 1478f5b10

void __thiscall
UNavMovementComponent::SetUpdateNavAgentWithOwnersCollisions
          (UNavMovementComponent *this,bool param_1)

{
  (this->NavMovementProperties).bUpdateNavAgentWithOwnersCollision = param_1;
  return;
}

// StaticRegisterNativesUNavMovementComponent @ 1478f8170

void __cdecl UNavMovementComponent::StaticRegisterNativesUNavMovementComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 6;
  local_18.DataPtr = Z_Construct_UClass_UNavMovementComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateNavAgent @ 1478fc170

void __thiscall UNavMovementComponent::UpdateNavAgent(UNavMovementComponent *this,UObject *param_1)

{
  int iVar1;
  FNavDataConfig *pFVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  double dVar5;
  undefined4 local_res8 [2];
  float local_res18 [2];
  
  if (*(char *)((longlong)&this->_padding_ + 4) == '\0') {
    return;
  }
  pFVar2 = FNavigationSystem::GetDefaultSupportedAgent();
  *(int *)&this->_padding_ = (int)pFVar2->_padding_;
  if (param_1 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_UCapsuleComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       (pUVar4 = param_1,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
       &pUVar3->_padding_)) goto LAB_1478fc1cb;
  }
  pUVar4 = (UObject *)0x0;
LAB_1478fc1cb:
  if (pUVar4 == (UObject *)0x0) {
    if (param_1 != (UObject *)0x0) {
      pUVar3 = Z_Construct_UClass_AActor_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        if (param_1 != (UObject *)this[-1]._padding_) {
          `UNavMovementComponent::UpdateNavAgent'::__l12::<lambda_1>::operator()(local_res8);
        }
        (**(code **)(*(longlong *)param_1 + 0x688))(param_1,local_res8,local_res18);
        local_res18[0] = local_res18[0] * __real_40000000;
        *(undefined4 *)((longlong)&this->_padding_ + 4) = local_res8[0];
        *(float *)&this->_padding_ = local_res18[0];
      }
    }
    return;
  }
  dVar5 = *(double *)(pUVar4 + 0xe);
  if (*(double *)&pUVar4[0xe].field_0x8 <= *(double *)(pUVar4 + 0xe)) {
    dVar5 = *(double *)&pUVar4[0xe].field_0x8;
  }
  *(float *)((longlong)&this->_padding_ + 4) = (float)dVar5 * *(float *)&pUVar4[0x22].field_0x1c;
  *(float *)&this->_padding_ =
       ((float)*(double *)&pUVar4[0xe].field_0x10 + (float)*(double *)&pUVar4[0xe].field_0x10) *
       *(float *)&pUVar4[0x22].field_0x18;
  return;
}

// _getUObject @ 1478fff90

UObject * __thiscall UNavMovementComponent::_getUObject(UNavMovementComponent *this)

{
  return (UObject *)&this[-1].NavAgentProps.PreferredNavData.field_0x8;
}

// _getUObject`adjustor{256}' @ 1478fff9c

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UNavMovementComponent::_getUObject`adjustor{256}' (void)const __ptr64 */

UObject * __thiscall UNavMovementComponent::_getUObject_adjustor_256__(UNavMovementComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UNavMovementComponent *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

// execGetVelocityForNavMovement @ 147904ed0

void __cdecl
UNavMovementComponent::execGetVelocityForNavMovement(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_28 [32];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined8 *)
           (**(code **)(*(longlong *)&param_1[7].field_0x10 + 0xc0))
                     (&param_1[7].field_0x10,local_28);
  uVar1 = puVar2[1];
  *(undefined8 *)param_3 = *puVar2;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  *(undefined8 *)((longlong)param_3 + 0x10) = puVar2[2];
  return;
}

// execIsCrouching @ 1479055e0

void __cdecl UNavMovementComponent::execIsCrouching(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)&param_1[7].field_0x10 + 0xd0))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execIsFalling @ 147905760

void __cdecl UNavMovementComponent::execIsFalling(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)&param_1[7].field_0x10 + 0xd8))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execIsFlying @ 1479057a0

void __cdecl UNavMovementComponent::execIsFlying(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)&param_1[7].field_0x10 + 0xf0))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execIsMovingOnGround @ 147905990

void __cdecl
UNavMovementComponent::execIsMovingOnGround(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)&param_1[7].field_0x10 + 0xe0))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execIsSwimming @ 147905c50

void __cdecl UNavMovementComponent::execIsSwimming(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)&param_1[7].field_0x10 + 0xe8))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// operator() @ 150513a10

bool __thiscall `UNavMovementComponent::UpdateNavAgent'::__l12::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1615422412176752763>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1615422412176752763>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

