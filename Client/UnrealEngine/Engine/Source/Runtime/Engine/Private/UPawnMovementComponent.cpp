// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 35

// NotifyBumpedPawn @ 1478448e0

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
UPawnMovementComponent::NotifyBumpedPawn(UPawnMovementComponent *this,APawn *param_1)

{
  return;
}

// StaticClass @ 147875870

UClass * __cdecl UPawnMovementComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UPawnMovementComponent.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PawnMovementComponent",
               &Z_Registration_Info_UClass_UPawnMovementComponent.InnerSingleton,
               StaticRegisterNativesUPawnMovementComponent,400,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPawnMovementComponent>,
               InternalVTableHelperCtorCaller<UPawnMovementComponent>,aFStackX_8,
               UNavMovementComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPawnMovementComponent.InnerSingleton;
}

// UPawnMovementComponent @ 1478aa720

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UPawnMovementComponent * __thiscall
UPawnMovementComponent::UPawnMovementComponent(UPawnMovementComponent *this,FVTableHelper *param_1)

{
  UNavMovementComponent::UNavMovementComponent((UNavMovementComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&___7UPawnMovementComponent__6B_;
  (this->PawnOwner).field0_0x0.DebugPtr = (APawn *)0x0;
  return this;
}

// UPawnMovementComponent @ 1478aa780

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UPawnMovementComponent * __thiscall
UPawnMovementComponent::UPawnMovementComponent
          (UPawnMovementComponent *this,FObjectInitializer *param_1)

{
  UNavMovementComponent::UNavMovementComponent((UNavMovementComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&___7UPawnMovementComponent__6B_;
  (this->PawnOwner).field0_0x0.DebugPtr = (APawn *)0x0;
  return this;
}

// ~UPawnMovementComponent @ 1478ac490

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UPawnMovementComponent::~UPawnMovementComponent(UPawnMovementComponent *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&___7UPawnMovementComponent__6B_;
  UNavMovementComponent::~UNavMovementComponent((UNavMovementComponent *)this);
  return;
}

// AddInputVector @ 1478b2c80

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
UPawnMovementComponent::AddInputVector
          (UPawnMovementComponent *this,TVector<double> *param_1,bool param_2)

{
  APawn *this_00;
  TVector<double>_u_0 local_28;
  
  this_00 = (this->PawnOwner).field0_0x0.DebugPtr;
  if (this_00 != (APawn *)0x0) {
    local_28._s_0.X = (param_1->field0_0x0)._s_0.X;
    local_28._s_0.Y = (param_1->field0_0x0)._s_0.Y;
    local_28._s_0.Z = (param_1->field0_0x0)._s_0.Z;
    APawn::Internal_AddMovementInput(this_00,(TVector<double> *)&local_28._s_0,param_2);
  }
  return;
}

// ApplyAsyncPhysicsStateAction @ 1478b4310

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
UPawnMovementComponent::ApplyAsyncPhysicsStateAction
          (UPawnMovementComponent *this,UPrimitiveComponent *param_1,FName *param_2,
          EPhysicsStateAction param_3,TVector<double> *param_4,TVector<double> *param_5)

{
  int iVar1;
  longlong lVar2;
  APlayerController *this_00;
  ulonglong uVar3;
  char cVar4;
  FNameEntryId FVar5;
  ENetMode EVar6;
  UClass *pUVar7;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  UFunction *pUVar8;
  FName FVar9;
  ulonglong local_res8;
  UPrimitiveComponent *local_res10;
  FAsyncPhysicsTimestamp local_98 [2];
  UPrimitiveComponent *local_88;
  FName local_80;
  EPhysicsStateAction local_70;
  double local_68;
  double dStack_60;
  double local_58;
  double local_50;
  double dStack_48;
  double local_40;
  
  lVar2 = this->_padding_;
  if (lVar2 == 0) {
    return;
  }
  local_res10 = param_1;
  pUVar7 = Z_Construct_UClass_APawn_NoRegister();
  iVar1 = (int)pUVar7->_padding_;
  if (*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < iVar1) {
    return;
  }
  if ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar7->_padding_) {
    return;
  }
  this_00 = *(APlayerController **)(lVar2 + 0x2f0);
  if (this_00 == (APlayerController *)0x0) {
    return;
  }
  pUVar7 = Z_Construct_UClass_APlayerController_NoRegister();
  iVar1 = (int)pUVar7->_padding_;
  if (*(int *)(this_00->_padding_ + 0x38) < iVar1) {
    return;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
      != &pUVar7->_padding_) {
    return;
  }
  cVar4 = (**(code **)(this_00->_padding_ + 0x7f0))(this_00);
  if (cVar4 == '\0') {
    return;
  }
  APlayerController::GetPhysicsTimestamp(this_00);
  ExecuteAsyncPhysicsStateAction(this,param_1,param_2,local_98,param_3,param_4,param_5);
  local_res8 = 0;
  if (this_00->_padding_ != 0) {
    FVar5 = FNameEntryId::FromValidEName((EName)&local_res8);
    local_res8 = (ulonglong)*(uint *)CONCAT44(extraout_var,FVar5.Value);
  }
  EVar6 = AActor::InternalGetNetMode((AActor *)this_00);
  if (EVar6 == NM_Standalone) {
    return;
  }
  uVar3 = this_00->_padding_;
  local_res8 = 0;
  if (uVar3 != 0) {
    FVar5 = FNameEntryId::FromValidEName((EName)&local_res8);
    local_res8 = (ulonglong)*(uint *)CONCAT44(extraout_var_00,FVar5.Value);
    if (uVar3 != local_res8) {
      EVar6 = AActor::InternalGetNetMode((AActor *)this_00);
      goto joined_r0x0001478b4520;
    }
  }
  EVar6 = AActor::InternalGetNetMode((AActor *)this_00);
joined_r0x0001478b4520:
  FVar9 = NAME_UPawnMovementComponent_MulticastAsyncPhysicsStateAction;
  if (EVar6 != NM_ListenServer) {
    FVar9 = NAME_UPawnMovementComponent_ServerAsyncPhysicsStateAction;
  }
  local_68 = (param_4->field0_0x0)._s_0.X;
  dStack_60 = (param_4->field0_0x0)._s_0.Y;
  local_58 = (param_4->field0_0x0)._s_0.Z;
  local_80 = *param_2;
  local_50 = (param_5->field0_0x0)._s_0.X;
  dStack_48 = (param_5->field0_0x0)._s_0.Y;
  local_40 = (param_5->field0_0x0)._s_0.Z;
  local_88 = local_res10;
  local_70 = param_3;
  pUVar8 = UObject::FindFunctionChecked((UObject *)this,FVar9);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar8,&local_88);
  return;
}

// ConsumeInputVector @ 1478bf3e0

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
UPawnMovementComponent::ConsumeInputVector
          (UPawnMovementComponent *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  APawn *this_00;
  double dVar2;
  TVector<double>_u_0 *pTVar3;
  TVector<double>_u_0 local_28;
  
  this_00 = (this->PawnOwner).field0_0x0.DebugPtr;
  if (this_00 == (APawn *)0x0) {
    pTVar3 = &local_28;
    local_28._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_28._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_28._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    pTVar3 = &APawn::Internal_ConsumeMovementInputVector(this_00,(TVector<double> *)&local_28._s_0)
              ->field0_0x0;
  }
  dVar2 = (pTVar3->_s_0).Y;
  dVar1 = (pTVar3->_s_0).Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (((TVector<double>_u_0 *)&(pTVar3->_s_0).X)->_s_0).X
  ;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// ExecuteAsyncPhysicsStateAction @ 1478cc120

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
UPawnMovementComponent::ExecuteAsyncPhysicsStateAction
          (UPawnMovementComponent *this,UPrimitiveComponent *param_1,FName *param_2,
          FAsyncPhysicsTimestamp *param_3,EPhysicsStateAction param_4,TVector<double> *param_5,
          TVector<double> *param_6)

{
  int iVar1;
  longlong lVar2;
  FBodyInstance *this_00;
  UClass *pUVar3;
  UWorld *this_01;
  APlayerController *pAVar4;
  bool bVar5;
  
  if (param_1 == (UPrimitiveComponent *)0x0) {
    return;
  }
  this_00 = (FBodyInstance *)(**(code **)(*(longlong *)param_1 + 0x818))(param_1,*param_2);
  if (this_00 == (FBodyInstance *)0x0) {
    return;
  }
  lVar2 = this->_padding_;
  if (lVar2 == 0) {
LAB_1478cc1cf:
    this_01 = (UWorld *)this->_padding_;
    if (this_01 == (UWorld *)0x0) {
      this_01 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    pAVar4 = UWorld::GetFirstPlayerController(this_01);
  }
  else {
    pUVar3 = Z_Construct_UClass_APawn_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if (((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < iVar1) ||
        ((longlong *)
         *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8)
         != &pUVar3->_padding_)) ||
       (pAVar4 = *(APlayerController **)(lVar2 + 0x2f0), pAVar4 == (APlayerController *)0x0))
    goto LAB_1478cc1cf;
    pUVar3 = Z_Construct_UClass_APlayerController_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(pAVar4->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pAVar4 = (APlayerController *)0x0;
    }
  }
  switch(param_4) {
  case AddForce:
    FBodyInstance::AddForce(this_00,param_5,true,false,*param_3,pAVar4);
    break;
  case AddTorque:
    FBodyInstance::AddTorqueInRadians(this_00,param_5,true,false,*param_3,pAVar4);
    break;
  case AddForceAtPosition:
    FBodyInstance::AddForceAtPosition(this_00,param_5,param_6,true,false,*param_3,pAVar4);
    break;
  case AddLinearVelocity:
    FBodyInstance::AddImpulse(this_00,param_5,true,*param_3,pAVar4);
    break;
  case AddAngularVelocity:
    bVar5 = true;
    goto LAB_1478cc32a;
  case AddVelocityAtPosition:
    FBodyInstance::AddVelocityChangeImpulseAtLocation(this_00,param_5,param_6,*param_3,pAVar4);
    break;
  case AddLinearImpulse:
    FBodyInstance::AddImpulse(this_00,param_5,false,*param_3,pAVar4);
    break;
  case AddAngularImpulse:
    bVar5 = false;
LAB_1478cc32a:
    FBodyInstance::AddAngularImpulseInRadians(this_00,param_5,bVar5,*param_3,pAVar4);
    break;
  case AddImpulseAtPosition:
    FBodyInstance::AddImpulseAtPosition(this_00,param_5,param_6,*param_3,pAVar4);
    break;
  case AddAcceleration:
    FBodyInstance::AddForce(this_00,param_5,true,true,*param_3,pAVar4);
  }
  return;
}

// GetController @ 1478d0ab0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

AController * __thiscall UPawnMovementComponent::GetController(UPawnMovementComponent *this)

{
  APawn *pAVar1;
  
  pAVar1 = (this->PawnOwner).field0_0x0.DebugPtr;
  if (pAVar1 != (APawn *)0x0) {
    return (pAVar1->Controller).field0_0x0.DebugPtr;
  }
  return (AController *)0x0;
}

// GetLastInputVector @ 1478d4ea0

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
UPawnMovementComponent::GetLastInputVector
          (UPawnMovementComponent *this,TVector<double> *__return_storage_ptr__)

{
  APawn *pAVar1;
  double local_28;
  double dStack_20;
  double local_18;
  
  pAVar1 = (this->PawnOwner).field0_0x0.DebugPtr;
  if (pAVar1 == (APawn *)0x0) {
    local_28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    local_28 = (pAVar1->LastControlInputVector).field0_0x0._s_0.X;
    dStack_20 = (pAVar1->LastControlInputVector).field0_0x0._s_0.Y;
    local_18 = (pAVar1->LastControlInputVector).field0_0x0._s_0.Z;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = local_28;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_20;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_18;
  return __return_storage_ptr__;
}

// GetPawnOwner @ 1478d7810

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

APawn * __thiscall UPawnMovementComponent::GetPawnOwner(UPawnMovementComponent *this)

{
  return (this->PawnOwner).field0_0x0.DebugPtr;
}

// GetPendingInputVector @ 1478d7820

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
UPawnMovementComponent::GetPendingInputVector
          (UPawnMovementComponent *this,TVector<double> *__return_storage_ptr__)

{
  APawn *pAVar1;
  double local_28;
  double dStack_20;
  double local_18;
  
  pAVar1 = (this->PawnOwner).field0_0x0.DebugPtr;
  if (pAVar1 == (APawn *)0x0) {
    local_28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    local_28 = (pAVar1->ControlInputVector).field0_0x0._s_0.X;
    dStack_20 = (pAVar1->ControlInputVector).field0_0x0._s_0.Y;
    local_18 = (pAVar1->ControlInputVector).field0_0x0._s_0.Z;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = local_28;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_20;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_18;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1478d9cb0

UClass * __cdecl UPawnMovementComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPawnMovementComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PawnMovementComponent",
               &Z_Registration_Info_UClass_UPawnMovementComponent.InnerSingleton,
               StaticRegisterNativesUPawnMovementComponent,400,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPawnMovementComponent>,
               InternalVTableHelperCtorCaller<UPawnMovementComponent>,local_res8,
               UNavMovementComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPawnMovementComponent.InnerSingleton;
}

// IsMoveInputIgnored @ 1478e1330

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall UPawnMovementComponent::IsMoveInputIgnored(UPawnMovementComponent *this)

{
  APawn *pAVar1;
  undefined1 uVar2;
  
  if ((this->_padding_ != 0) &&
     (pAVar1 = (this->PawnOwner).field0_0x0.DebugPtr, pAVar1 != (APawn *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001478e1349. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(pAVar1->_padding_ + 0x8b0))();
    return (bool)uVar2;
  }
  return true;
}

// MarkForClientCameraUpdate @ 1478e2dd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UPawnMovementComponent::MarkForClientCameraUpdate(UPawnMovementComponent *this)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  
  lVar2 = (**(code **)(this->_padding_ + 0x640))();
  if (lVar2 != 0) {
    pUVar3 = Z_Construct_UClass_APlayerController_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8)
          == &pUVar3->_padding_)) && (lVar2 = *(longlong *)(lVar2 + 0x390), lVar2 != 0)) &&
       ((*(uint *)(lVar2 + 0x2810) >> 8 & 1) != 0)) {
      *(uint *)(lVar2 + 0x2810) = *(uint *)(lVar2 + 0x2810) | 0x400;
    }
  }
  return;
}

// MulticastAsyncPhysicsStateAction @ 1478e4b10

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
UPawnMovementComponent::MulticastAsyncPhysicsStateAction
          (UPawnMovementComponent *this,UPrimitiveComponent *param_1,FName param_2,
          FAsyncPhysicsTimestamp param_3,EPhysicsStateAction param_4,TVector<double> *param_5,
          TVector<double> *param_6)

{
  UFunction *pUVar1;
  UPrimitiveComponent *local_58;
  FName local_50;
  FAsyncPhysicsTimestamp local_48;
  EPhysicsStateAction local_40;
  double local_38;
  double dStack_30;
  double local_28;
  double local_20;
  double dStack_18;
  double local_10;
  
  local_40 = param_4;
  local_38 = (param_5->field0_0x0)._s_0.X;
  dStack_30 = (param_5->field0_0x0)._s_0.Y;
  local_28 = (param_5->field0_0x0)._s_0.Z;
  local_20 = (param_6->field0_0x0)._s_0.X;
  dStack_18 = (param_6->field0_0x0)._s_0.Y;
  local_10 = (param_6->field0_0x0)._s_0.Z;
  local_58 = param_1;
  local_50 = param_2;
  local_48 = param_3;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UPawnMovementComponent_MulticastAsyncPhysicsStateAction);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_58);
  return;
}

// MulticastAsyncPhysicsStateAction_Implementation @ 1478e4ba0

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
UPawnMovementComponent::MulticastAsyncPhysicsStateAction_Implementation
          (UPawnMovementComponent *this,UPrimitiveComponent *param_1,FName param_2,
          FAsyncPhysicsTimestamp param_3,EPhysicsStateAction param_4,TVector<double> *param_5,
          TVector<double> *param_6)

{
  UWorld *this_00;
  APlayerController *pAVar1;
  longlong lVar2;
  FAsyncPhysicsTimestamp local_res10;
  FName local_res18 [2];
  
  if (((param_1 != (UPrimitiveComponent *)0x0) &&
      (((this_00 = (UWorld *)this->_padding_, local_res18[0] = param_2, this_00 != (UWorld *)0x0 ||
        (this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
        this_00 != (UWorld *)0x0)) &&
       (pAVar1 = UWorld::GetFirstPlayerController(this_00), pAVar1 != (APlayerController *)0x0))))
     && (lVar2 = (**(code **)(this->_padding_ + 0x640))(this), lVar2 == 0)) {
    local_res10.LocalFrame = param_3.ServerFrame - pAVar1->NetworkPhysicsTickOffset;
    local_res10.ServerFrame = param_3.ServerFrame;
    ExecuteAsyncPhysicsStateAction(this,param_1,local_res18,&local_res10,param_4,param_5,param_6);
  }
  return;
}

// OnTeleported @ 1478e6390

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UPawnMovementComponent::OnTeleported(UPawnMovementComponent *this)

{
  int iVar1;
  APawn *this_00;
  char cVar2;
  FNameEntryId FVar3;
  ENetMode EVar4;
  undefined4 extraout_var;
  longlong lVar5;
  UClass *pUVar6;
  ulonglong local_res8;
  
  this_00 = (this->PawnOwner).field0_0x0.DebugPtr;
  if (this_00 != (APawn *)0x0) {
    local_res8 = 0;
    if (*(FName *)&this_00->_padding_ != (FName)0x0) {
      FVar3 = FNameEntryId::FromValidEName((EName)&local_res8);
      local_res8 = (ulonglong)*(uint *)CONCAT44(extraout_var,FVar3.Value);
    }
    EVar4 = AActor::InternalGetNetMode((AActor *)this_00);
    if (((EVar4 == NM_Client) &&
        (cVar2 = (**(code **)(((this->PawnOwner).field0_0x0.DebugPtr)->_padding_ + 0x818))(),
        cVar2 != '\0')) && (lVar5 = (**(code **)(this->_padding_ + 0x640))(this), lVar5 != 0)) {
      pUVar6 = Z_Construct_UClass_APlayerController_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if (((iVar1 <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar1 * 8)
           == &pUVar6->_padding_)) &&
         ((lVar5 = *(longlong *)(lVar5 + 0x390), lVar5 != 0 &&
          ((*(uint *)(lVar5 + 0x2810) >> 8 & 1) != 0)))) {
        *(uint *)(lVar5 + 0x2810) = *(uint *)(lVar5 + 0x2810) | 0x400;
      }
    }
  }
  return;
}

// RequestPathMove @ 1478eb9b0

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
UPawnMovementComponent::RequestPathMove(UPawnMovementComponent *this,TVector<double> *param_1)

{
  TVector<double>_u_0 local_28;
  
  if ((APawn *)this->_padding_ != (APawn *)0x0) {
    local_28._s_0.X = (param_1->field0_0x0)._s_0.X;
    local_28._s_0.Y = (param_1->field0_0x0)._s_0.Y;
    local_28._s_0.Z = (param_1->field0_0x0)._s_0.Z;
    APawn::Internal_AddMovementInput
              ((APawn *)this->_padding_,(TVector<double> *)&local_28._s_0,false);
  }
  return;
}

// Serialize @ 1478ef070

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UPawnMovementComponent::Serialize(UPawnMovementComponent *this,FArchive *param_1)

{
  APawn *pAVar1;
  
  pAVar1 = (this->PawnOwner).field0_0x0.DebugPtr;
  UMovementComponent::Serialize((UMovementComponent *)this,param_1);
  if ((param_1->field_0x28 & 1) != 0) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar1 != (APawn *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar1);
    }
    (this->PawnOwner).field0_0x0.DebugPtr = pAVar1;
  }
  return;
}

// Serialize @ 1478ef0d0

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
UPawnMovementComponent::Serialize(UPawnMovementComponent *this,FStructuredArchiveRecord param_1)

{
  APawn *pAVar1;
  FArchive *pFVar2;
  FSlotBase local_res8;
  
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar2 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
  pAVar1 = (this->PawnOwner).field0_0x0.DebugPtr;
  UMovementComponent::Serialize((UMovementComponent *)this,pFVar2);
  if ((pFVar2->field_0x28 & 1) != 0) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar1 != (APawn *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar1);
    }
    (this->PawnOwner).field0_0x0.DebugPtr = pAVar1;
  }
  return;
}

// ServerAsyncPhysicsStateAction @ 1478ef410

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
UPawnMovementComponent::ServerAsyncPhysicsStateAction
          (UPawnMovementComponent *this,UPrimitiveComponent *param_1,FName param_2,
          FAsyncPhysicsTimestamp param_3,EPhysicsStateAction param_4,TVector<double> *param_5,
          TVector<double> *param_6)

{
  UFunction *pUVar1;
  UPrimitiveComponent *local_58;
  FName local_50;
  FAsyncPhysicsTimestamp local_48;
  EPhysicsStateAction local_40;
  double local_38;
  double dStack_30;
  double local_28;
  double local_20;
  double dStack_18;
  double local_10;
  
  local_40 = param_4;
  local_38 = (param_5->field0_0x0)._s_0.X;
  dStack_30 = (param_5->field0_0x0)._s_0.Y;
  local_28 = (param_5->field0_0x0)._s_0.Z;
  local_20 = (param_6->field0_0x0)._s_0.X;
  dStack_18 = (param_6->field0_0x0)._s_0.Y;
  local_10 = (param_6->field0_0x0)._s_0.Z;
  local_58 = param_1;
  local_50 = param_2;
  local_48 = param_3;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UPawnMovementComponent_ServerAsyncPhysicsStateAction);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_58);
  return;
}

// ServerAsyncPhysicsStateAction_Implementation @ 1478ef4a0

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
UPawnMovementComponent::ServerAsyncPhysicsStateAction_Implementation
          (UPawnMovementComponent *this,UPrimitiveComponent *param_1,FName param_2,
          FAsyncPhysicsTimestamp param_3,EPhysicsStateAction param_4,TVector<double> *param_5,
          TVector<double> *param_6)

{
  UFunction *pUVar1;
  FName local_res18;
  FAsyncPhysicsTimestamp local_res20;
  UPrimitiveComponent *local_78;
  FName local_70;
  FAsyncPhysicsTimestamp local_68;
  EPhysicsStateAction local_60;
  double local_58;
  double dStack_50;
  double local_48;
  double local_40;
  double dStack_38;
  double local_30;
  
  if (param_1 != (UPrimitiveComponent *)0x0) {
    local_res18 = param_2;
    local_res20 = param_3;
    ExecuteAsyncPhysicsStateAction(this,param_1,&local_res18,&local_res20,param_4,param_5,param_6);
    local_58 = (param_5->field0_0x0)._s_0.X;
    dStack_50 = (param_5->field0_0x0)._s_0.Y;
    local_48 = (param_5->field0_0x0)._s_0.Z;
    local_40 = (param_6->field0_0x0)._s_0.X;
    dStack_38 = (param_6->field0_0x0)._s_0.Y;
    local_30 = (param_6->field0_0x0)._s_0.Z;
    local_60 = param_4;
    local_78 = param_1;
    local_70 = param_2;
    local_68 = param_3;
    pUVar1 = UObject::FindFunctionChecked
                       ((UObject *)this,NAME_UPawnMovementComponent_MulticastAsyncPhysicsStateAction
                       );
    (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_78);
  }
  return;
}

// SetUpdatedComponent @ 1478f5f50

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
UPawnMovementComponent::SetUpdatedComponent(UPawnMovementComponent *this,USceneComponent *param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  FString *pFVar5;
  APawn *pAVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  UPawnMovementComponent *local_res10;
  FString local_28;
  FString local_18;
  
  if (param_1 != (USceneComponent *)0x0) {
    lVar2 = param_1->_padding_;
    if (lVar2 != 0) {
      pUVar4 = Z_Construct_UClass_APawn_NoRegister();
      lVar2 = *(longlong *)(lVar2 + 0x10);
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) goto LAB_1478f5fac;
    }
    local_res10 = this;
    bVar3 = `UPawnMovementComponent::SetUpdatedComponent'::__l6::<lambda_1>::operator()
                      (&local_res10);
    if (!bVar3) {
      return;
    }
  }
LAB_1478f5fac:
  UMovementComponent::SetUpdatedComponent((UMovementComponent *)this,param_1);
  pAVar6 = (APawn *)0x0;
  if (this->_padding_ != 0) {
    pAVar6 = *(APawn **)(this->_padding_ + 0xa8);
    if (pAVar6 == (APawn *)0x0) {
      pFVar5 = GetTypeName<APawn>(&local_28);
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar8);
    }
    pUVar4 = Z_Construct_UClass_APawn_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(pAVar6->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar6->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar4->_padding_)) {
      pFVar5 = GetTypeName<APawn>(&local_28);
      pwVar8 = L"";
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      pFVar5 = GetFullNameForCastLogError<AActor>(&local_18,(AActor *)pAVar6);
      if ((pFVar5->Data).ArrayNum != 0) {
        pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar8,pwVar7);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar6 != (APawn *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar6);
  }
  (this->PawnOwner).field0_0x0.DebugPtr = pAVar6;
  return;
}

// StaticRegisterNativesUPawnMovementComponent @ 1478f81b0

void __cdecl UPawnMovementComponent::StaticRegisterNativesUPawnMovementComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 8;
  local_18.DataPtr = Z_Construct_UClass_UPawnMovementComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddInputVector @ 147900d30

void __cdecl
UPawnMovementComponent::execAddInputVector(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
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
  local_28 = local_48;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  local_18 = local_38;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x620))(param_1,&local_28,local_res8[0] != 0);
  return;
}

// execConsumeInputVector @ 147902310

void __cdecl
UPawnMovementComponent::execConsumeInputVector(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_28 [32];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x628))(param_1,local_28);
  uVar1 = puVar2[1];
  *(undefined8 *)param_3 = *puVar2;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  *(undefined8 *)((longlong)param_3 + 0x10) = puVar2[2];
  return;
}

// execGetLastInputVector @ 147903ce0

void __cdecl
UPawnMovementComponent::execGetLastInputVector(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong lVar1;
  double local_28;
  double dStack_20;
  double local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar1 = *(longlong *)&param_1[9].field_0x20;
  if (lVar1 == 0) {
    local_28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    local_28 = *(double *)(lVar1 + 800);
    dStack_20 = *(double *)(lVar1 + 0x328);
    local_18 = *(double *)(lVar1 + 0x330);
  }
  *(double *)param_3 = local_28;
  *(double *)((longlong)param_3 + 8) = dStack_20;
  *(double *)((longlong)param_3 + 0x10) = local_18;
  return;
}

// execGetPawnOwner @ 147904630

void __cdecl
UPawnMovementComponent::execGetPawnOwner(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[9].field_0x20;
  return;
}

// execGetPendingInputVector @ 147904660

void __cdecl
UPawnMovementComponent::execGetPendingInputVector(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong lVar1;
  double local_28;
  double dStack_20;
  double local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar1 = *(longlong *)&param_1[9].field_0x20;
  if (lVar1 == 0) {
    local_28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    local_28 = *(double *)(lVar1 + 0x308);
    dStack_20 = *(double *)(lVar1 + 0x310);
    local_18 = *(double *)(lVar1 + 0x318);
  }
  *(double *)param_3 = local_28;
  *(double *)((longlong)param_3 + 8) = dStack_20;
  *(double *)((longlong)param_3 + 0x10) = local_18;
  return;
}

// execIsMoveInputIgnored @ 147905950

void __cdecl
UPawnMovementComponent::execIsMoveInputIgnored(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x630))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execMulticastAsyncPhysicsStateAction @ 147906fd0

void __cdecl
UPawnMovementComponent::execMulticastAsyncPhysicsStateAction
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res20;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
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
  local_res20 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10 = 0xffffffffffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
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
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_58 = local_90;
  uStack_50 = uStack_88;
  local_48 = local_80;
  local_38 = local_78;
  uStack_34 = uStack_74;
  uStack_30 = uStack_70;
  uStack_2c = uStack_6c;
  local_28 = local_68;
  (**(code **)(*(longlong *)param_1 + 0x610))
            (param_1,local_98,local_res20,local_res10,local_res8[0],&local_38,&local_58);
  return;
}

// execServerAsyncPhysicsStateAction @ 147908180

void __cdecl
UPawnMovementComponent::execServerAsyncPhysicsStateAction
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res20;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
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
  local_res20 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10 = 0xffffffffffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
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
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_58 = local_90;
  uStack_50 = uStack_88;
  local_48 = local_80;
  local_38 = local_78;
  uStack_34 = uStack_74;
  uStack_30 = uStack_70;
  uStack_2c = uStack_6c;
  local_28 = local_68;
  (**(code **)(*(longlong *)param_1 + 0x618))
            (param_1,local_98,local_res20,local_res10,local_res8[0],&local_38,&local_58);
  return;
}

// operator() @ 150513820

bool __thiscall
`UPawnMovementComponent::SetUpdatedComponent'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6603554475783225322>);
  if (bVar2) {
    local_res10[0] = *(FName *)(*(longlong *)this + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6603554475783225322>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150513895;
    }
  }
  bVar2 = false;
LAB_150513895:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

