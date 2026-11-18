// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 21

// StaticClass @ 14b5c3010

UClass * __cdecl UDS_TransportWarpAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_TransportWarpAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_TransportWarpAbility",
               &Z_Registration_Info_UClass_UDS_TransportWarpAbility.InnerSingleton,
               StaticRegisterNativesUDS_TransportWarpAbility,0x1b8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_TransportWarpAbility>,
               InternalVTableHelperCtorCaller<UDS_TransportWarpAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_TransportWarpAbility.InnerSingleton;
}

// UDS_TransportWarpAbility @ 14b5c75a0

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

UDS_TransportWarpAbility * __thiscall
UDS_TransportWarpAbility::UDS_TransportWarpAbility
          (UDS_TransportWarpAbility *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->TransportEntityID = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->WarpLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->WarpLocation).field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->PreloadingDuration = 0.0;
  (this->WarpLocation).field0_0x0._s_0.Z = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->TempPrevPlayerLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->TempPrevPlayerLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->TempPrevPlayerLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->TempPrevTransLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->TempPrevTransLocation).field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->TempUpdate = false;
  (this->TempPrevTransLocation).field0_0x0._s_0.Z = (double)uVar1;
  return this;
}

// UDS_TransportWarpAbility @ 14b5c7650

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

UDS_TransportWarpAbility * __thiscall
UDS_TransportWarpAbility::UDS_TransportWarpAbility
          (UDS_TransportWarpAbility *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->TransportEntityID = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->WarpLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->WarpLocation).field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->PreloadingDuration = 0.0;
  (this->WarpLocation).field0_0x0._s_0.Z = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->TempPrevPlayerLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->TempPrevPlayerLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->TempPrevPlayerLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->TempPrevTransLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->TempPrevTransLocation).field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->TempUpdate = false;
  (this->TempPrevTransLocation).field0_0x0._s_0.Z = (double)uVar1;
  return this;
}

// ~UDS_TransportWarpAbility @ 14b5c8da0

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

void __thiscall UDS_TransportWarpAbility::~UDS_TransportWarpAbility(UDS_TransportWarpAbility *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b5cc620

UClass * __cdecl UDS_TransportWarpAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_TransportWarpAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_TransportWarpAbility",
               &Z_Registration_Info_UClass_UDS_TransportWarpAbility.InnerSingleton,
               StaticRegisterNativesUDS_TransportWarpAbility,0x1b8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_TransportWarpAbility>,
               InternalVTableHelperCtorCaller<UDS_TransportWarpAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_TransportWarpAbility.InnerSingleton;
}

// ShouldTickComponent @ 14b5cdf00

bool __thiscall UDS_TransportWarpAbility::ShouldTickComponent(UDS_TransportWarpAbility *this)

{
  return true;
}

// StaticRegisterNativesUDS_TransportWarpAbility @ 14b5ce080

void __cdecl UDS_TransportWarpAbility::StaticRegisterNativesUDS_TransportWarpAbility(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UDS_TransportWarpAbility_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnMovementModeChange @ 14b5d0980

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
UDS_TransportWarpAbility::execOnMovementModeChange(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte local_res10 [8];
  uchar local_res20 [8];
  ACharacter *local_18 [2];
  
  local_18[0] = (ACharacter *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
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
  local_res20[0] = '\0';
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnMovementModeChange
            ((UDS_TransportWarpAbility *)param_1,local_18[0],(uint)local_res10[0],local_res20[0]);
  return;
}

// execPreLoadCompleteAtLocation @ 14b5d0f90

void __cdecl
UDS_TransportWarpAbility::execPreLoadCompleteAtLocation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  PreLoadCompleteAtLocation((UDS_TransportWarpAbility *)param_1);
  return;
}

// CalculateRelativePosition @ 14b86a000

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
UDS_TransportWarpAbility::CalculateRelativePosition
          (UDS_TransportWarpAbility *this,TVector<double> *__return_storage_ptr__,ulong64 param_1,
          ulong64 param_2)

{
  undefined8 uVar1;
  bool bVar2;
  FDS_EntityBase *pFVar3;
  FDS_EntityBase *pFVar4;
  UDS_MovementCore *pUVar5;
  TRotator<double> *this_00;
  TVector<double> *pTVar6;
  ulong64 local_res18;
  ulong64 local_res20;
  FWeakObjectPtr local_68;
  FWeakObjectPtr local_60;
  TVector<double>_u_0 local_58;
  TRotator<double> local_40;
  TVector<double> local_28;
  
  local_res18 = param_1;
  local_res20 = param_2;
  pFVar3 = FDS_EntityBase::GetEntityBase(&local_res18);
  pFVar4 = FDS_EntityBase::GetEntityBase(&local_res20);
  if ((pFVar3 != (FDS_EntityBase *)0x0) && (pFVar4 != (FDS_EntityBase *)0x0)) {
    (**(code **)(pFVar3->_padding_ + 0x78))(pFVar3,&local_68);
    (**(code **)(pFVar4->_padding_ + 0x78))(pFVar4);
    bVar2 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_68,(void *)0x0);
    if ((!bVar2) &&
       (bVar2 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_60,(void *)0x0)
       , !bVar2)) {
      pUVar5 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_68);
      this_00 = UDS_MovementCore::GetActorRotation(pUVar5,&local_40);
      pUVar5 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_60);
      pTVar6 = UDS_MovementCore::GetActorRelativeLocation(pUVar5,&local_28);
      UE::Math::TRotator<double>::RotateVector(this_00,(TVector<double> *)&local_58._s_0,pTVar6);
      (__return_storage_ptr__->field0_0x0)._s_0.X = local_58._s_0.X;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = local_58._s_0.Y;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = local_58._s_0.Z;
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

// ClearVariables @ 14b86a4f0

void __thiscall UDS_TransportWarpAbility::ClearVariables(UDS_TransportWarpAbility *this)

{
  return;
}

// OnCanActivate @ 14b884990

bool __thiscall UDS_TransportWarpAbility::OnCanActivate(UDS_TransportWarpAbility *this)

{
  bool bVar1;
  
  bVar1 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  return bVar1;
}

// OnDeactivateAbility @ 14b888dd0

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
UDS_TransportWarpAbility::OnDeactivateAbility(UDS_TransportWarpAbility *this,bool *param_1)

{
  EDS_InputControlType EVar1;
  bool bVar2;
  FDS_EntityBase *pFVar3;
  FWeakObjectPtr *pFVar4;
  UObject *pUVar5;
  ADS_PlayerController *this_00;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  undefined1 local_18 [16];
  
  local_res8.ObjectIndex._0_1_ = 0x6c;
  UDS_GameplayAbility::RemoveStateTagToASC
            ((UDS_GameplayAbility *)this,(EDS_StateTagType *)&local_res8);
  pFVar3 = FDS_EntityBase::GetEntityBase(&this->TransportEntityID);
  if (pFVar3 != (FDS_EntityBase *)0x0) {
    local_res8.ObjectIndex._0_1_ = 0x6c;
    pFVar4 = (FWeakObjectPtr *)(**(code **)(pFVar3->_padding_ + 0x178))(pFVar3,local_18);
    UDS_AbilitySystemComponent::RemoveStateTag
              ((TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr>)*pFVar4,
               (EDS_StateTagType *)&local_res8);
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FDS_TransportService::TransWarpCompleteEvent,this);
  if (*(char *)((longlong)&this->_padding_ + 1) == '\x01') {
    (**(code **)(*(longlong *)this->_padding_ + 0x160))();
    bVar2 = TWeakObjectPtr<UCapsuleComponent,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UCapsuleComponent,FWeakObjectPtr> *)&local_res8,(void *)0x0);
    if (!bVar2) {
      pUVar5 = FWeakObjectPtr::Get(&local_res8);
      (**(code **)(*(longlong *)pUVar5 + 0x788))(pUVar5);
    }
  }
  ADS_PlayerController::GetPlayerController();
  bVar2 = TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr> *)&local_res18,(void *)0x0
                    );
  if (!bVar2) {
    pUVar5 = FWeakObjectPtr::Get(&local_res18);
    EVar1 = pUVar5[0x36].field_0xa;
    this_00 = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_res18);
    ADS_PlayerController::SetInputControlType(this_00,EVar1,false);
  }
  ADS_MainCharacter::GetMainPlayer();
  bVar2 = FWeakObjectPtr::IsValid(&local_res20);
  if (bVar2) {
    pUVar5 = FWeakObjectPtr::Get(&local_res20);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar5[0x1e].field_0x8,
               (UObject *)this);
  }
  return;
}

// OnMovementModeChange @ 14b88a430

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_TransportWarpAbility::OnMovementModeChange
          (UDS_TransportWarpAbility *this,ACharacter *param_1,EMovementMode param_2,uchar param_3)

{
  int iVar1;
  UCharacterMovementComponent *pUVar2;
  double dVar3;
  bool bVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  FDS_EntityBase *pFVar7;
  FWeakObjectPtr *pFVar8;
  FWeakObjectPtr FStackX_8;
  FWeakObjectPtr FStackX_10;
  UObject *pUStackX_18;
  
  if (((param_1 == (ACharacter *)0x0) ||
      (pUVar2 = (param_1->CharacterMovement).field0_0x0.DebugPtr,
      pUVar2 == (UCharacterMovementComponent *)0x0)) || ((pUVar2->MovementMode).Value != '\x01')) {
    return;
  }
  pUVar5 = (UObject *)this->_padding_;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar5 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
  }
  FStackX_8.ObjectIndex = 0;
  FStackX_8.ObjectSerialNumber = 0;
  pUStackX_18 = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&FStackX_8,(FObjectPtr)&pUStackX_18);
  pUVar5 = FWeakObjectPtr::Get(&FStackX_8);
  if (pUVar5 != (UObject *)0x0) {
    pUVar6 = Z_Construct_UClass_UDS_TransportWarpContext_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar6->_padding_)) goto LAB_14b895a1c;
  }
  pUVar5 = (UObject *)0x0;
LAB_14b895a1c:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FStackX_10.ObjectIndex = 0;
  FStackX_10.ObjectSerialNumber = 0;
  pUStackX_18 = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&FStackX_10,(FObjectPtr)&pUStackX_18);
  bVar4 = FWeakObjectPtr::IsValid(&FStackX_10);
  if (bVar4) {
    pUVar5 = FWeakObjectPtr::Get(&FStackX_10);
    this->TransportEntityID = *(ulong64 *)(pUVar5 + 1);
    pUVar5 = FWeakObjectPtr::Get(&FStackX_10);
    FStackX_8.ObjectIndex._0_1_ = 0x6c;
    dVar3 = *(double *)&pUVar5[1].field_0x10;
    (this->WarpLocation).field0_0x0._s_0.X = *(double *)&pUVar5[1].field_0x8;
    (this->WarpLocation).field0_0x0._s_0.Y = dVar3;
    (this->WarpLocation).field0_0x0._s_0.Z = *(double *)&pUVar5[1].field_0x18;
    UDS_GameplayAbility::AddStateTagToASC
              ((UDS_GameplayAbility *)this,(EDS_StateTagType *)&FStackX_8);
    pFVar7 = FDS_EntityBase::GetEntityBase(&this->TransportEntityID);
    if (pFVar7 == (FDS_EntityBase *)0x0) {
      FStackX_8.ObjectIndex._0_1_ = 2;
      UDS_GameplayAbility::DeactivateAbility
                ((UDS_GameplayAbility *)this,(EDS_AbilityDeactivateType *)&FStackX_8);
      return;
    }
    FStackX_8.ObjectIndex._0_1_ = 0x6c;
    pFVar8 = (FWeakObjectPtr *)(**(code **)(pFVar7->_padding_ + 0x178))(pFVar7,&pUStackX_18);
    UDS_AbilitySystemComponent::AddStateTag
              ((TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr>)*pFVar8,
               (EDS_StateTagType *)&FStackX_8);
    if (*(char *)((longlong)&this->_padding_ + 1) == '\x01') {
      (**(code **)(*(longlong *)this->_padding_ + 0x160))();
      bVar4 = TWeakObjectPtr<UCapsuleComponent,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UCapsuleComponent,FWeakObjectPtr> *)&FStackX_8,(void *)0x0)
      ;
      if (!bVar4) {
        pUVar5 = FWeakObjectPtr::Get(&FStackX_8);
        (**(code **)(*(longlong *)pUVar5 + 0x788))(pUVar5,::COLLISION_PROFILE_NOCOLLISION,1);
      }
    }
    StartPreLoadAtLocation(this);
    TMulticastDelegateRegistration<void___cdecl(bool_const_&,UE::Math::TVector<double>_const_&,unsigned___int64_const_&,unsigned_int_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_TransportWarpAbility>
              ((TMulticastDelegateRegistration<void___cdecl(bool_const_&,UE::Math::TVector<double>_const_&,unsigned___int64_const_&,unsigned_int_const_&),FDefaultDelegateUserPolicy>
                *)&FDS_TransportService::TransWarpCompleteEvent,
               (UDS_TransportWarpAbility *)&FStackX_8,(pmf_662ed8e2 *)this);
  }
  return;
}

// OnPostActivateAbility @ 14b88cbf0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UDS_TransportWarpAbility::OnPostActivateAbility(UDS_TransportWarpAbility *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ADS_PlayerController *this_00;
  UObject *pUVar4;
  char *pcVar5;
  UObject *this_01;
  UFunction *pUVar6;
  char *pcVar7;
  <lambda_1> local_res8 [8];
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FName local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_c8;
  FWeakObjectPtr local_c0;
  FName local_b8;
  FName local_b0;
  UDS_TransportWarpAbility *local_a8;
  FName *local_a0;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_98;
  FDestructionSentinel local_88;
  FReadAccessScope local_70;
  FReadAccessScope local_58;
  
  ADS_PlayerController::GetPlayerController();
  bVar2 = TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr> *)&local_res10,(void *)0x0
                    );
  if (!bVar2) {
    this_00 = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_res10);
    ADS_PlayerController::SetInputControlType(this_00,None,false);
  }
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  iVar3 = (**(code **)(*(longlong *)pUVar4 + 0x438))(pUVar4);
  if (iVar3 == 1) {
    ReadyWarpStart(this);
    return;
  }
  ADS_MainCharacter::GetMainPlayer();
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  if (!bVar2) {
    return;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_res18);
  pcVar5 = strstr("&UDS_TransportWarpAbility::OnMovementModeChange","::");
  if (pcVar5 == (char *)0x0) {
LAB_14b88cceb:
    pcVar7 = &DAT_00000002;
LAB_14b88ccf0:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    do {
      pcVar7 = pcVar5;
      pcVar5 = strstr(pcVar7 + 1,"::");
    } while (pcVar5 != (char *)0x0);
    if (pcVar7 == (char *)0x0) goto LAB_14b88cceb;
    pcVar7 = pcVar7 + 2;
    if (*pcVar7 == '0') goto LAB_14b88ccf0;
  }
  ::FName::FName(&local_b0,pcVar7);
  if ((this == (UDS_TransportWarpAbility *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4c8,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res20 = local_b0;
  local_c8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_c0.ObjectIndex = 0;
  local_c0.ObjectSerialNumber = 0;
  local_b8.ComparisonIndex.Value = 0;
  local_b8.Number = 0;
  if ((this == (UDS_TransportWarpAbility *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_a8 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this != (UDS_TransportWarpAbility *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_c0,(FObjectPtr)&local_a8);
  local_b8 = local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_c8,&local_70);
  if ((local_b8 == (FName)0x0) ||
     (this_01 = FWeakObjectPtr::Get(&local_c0), this_01 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_70);
  }
  else {
    pUVar6 = UObject::FindFunction(this_01,local_b8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_70);
    if (pUVar6 != (UFunction *)0x0) goto LAB_14b88ce31;
  }
  local_a0 = &local_res20;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,ACharacter_*,enum_EMovementMode,unsigned_char>
  ::__Internal_BindDynamic<UDS_TransportWarpAbility>'::__l2::<lambda_1>::operator()(&local_a0);
LAB_14b88ce31:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_c8,&local_58);
  local_98.Object = local_c0;
  local_98.FunctionName = local_b8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_58);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar4[0x1e].field_0x8,
             (FWriteAccessScope *)&local_88);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&pUVar4[0x1e].field_0x10,local_res8,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar4[0x1e].field_0x8,
             &local_98);
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_c8.AccessDetector);
  return;
}

// OnTickComponent @ 14b893690

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

void __thiscall
UDS_TransportWarpAbility::OnTickComponent(UDS_TransportWarpAbility *this,float param_1)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  UDS_MovementCore *pUVar4;
  TVector<double> *pTVar5;
  UDS_LogManager *pUVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStackY_1d8 [32];
  FWeakObjectPtr local_198;
  TVector<double>_u_0 local_190;
  FString local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  UDS_GameplayAbility::OnTickComponent((UDS_GameplayAbility *)this,param_1);
  UDS_MovementCore::GetMovementCore((ulong64)&local_198);
  bVar3 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_198,(void *)0x0);
  if (!bVar3) {
    this->TempUpdate = false;
    pUVar4 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pTVar5 = UDS_MovementCore::GetActorLocation(pUVar4,(TVector<double> *)&local_190._s_0);
    dVar2 = __real_3f1a36e2e0000000;
    uVar10 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar8 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    dVar1 = (this->TempPrevPlayerLocation).field0_0x0._s_0.X - (pTVar5->field0_0x0)._s_0.X;
    uVar7 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar9 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if (((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar9,uVar7) &&
          (double)CONCAT44(uVar9,uVar7) != __real_3f1a36e2e0000000) ||
        (dVar1 = (this->TempPrevPlayerLocation).field0_0x0._s_0.Y - (pTVar5->field0_0x0)._s_0.Y,
        uVar7 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar9 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar9,uVar7) &&
        (double)CONCAT44(uVar9,uVar7) != __real_3f1a36e2e0000000)) ||
       (dVar1 = (this->TempPrevPlayerLocation).field0_0x0._s_0.Z - (pTVar5->field0_0x0)._s_0.Z,
       uVar7 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar9 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar9,uVar7) &&
       (double)CONCAT44(uVar9,uVar7) != __real_3f1a36e2e0000000)) {
      pUVar4 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      pTVar5 = UDS_MovementCore::GetActorLocation(pUVar4,(TVector<double> *)&local_190._s_0);
      dVar1 = (pTVar5->field0_0x0)._s_0.Y;
      (this->TempPrevPlayerLocation).field0_0x0._s_0.X = (pTVar5->field0_0x0)._s_0.X;
      (this->TempPrevPlayerLocation).field0_0x0._s_0.Y = dVar1;
      (this->TempPrevPlayerLocation).field0_0x0._s_0.Z = (pTVar5->field0_0x0)._s_0.Z;
      this->TempUpdate = true;
    }
    pUVar4 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_198);
    pTVar5 = UDS_MovementCore::GetActorLocation(pUVar4,(TVector<double> *)&local_190._s_0);
    dVar1 = (this->TempPrevTransLocation).field0_0x0._s_0.X - (pTVar5->field0_0x0)._s_0.X;
    uVar7 = SUB84(dVar1,0) & uVar8;
    uVar9 = (uint)((ulonglong)dVar1 >> 0x20) & uVar10;
    if (((dVar2 <= (double)CONCAT44(uVar9,uVar7) && (double)CONCAT44(uVar9,uVar7) != dVar2) ||
        (dVar1 = (this->TempPrevTransLocation).field0_0x0._s_0.Y - (pTVar5->field0_0x0)._s_0.Y,
        uVar7 = SUB84(dVar1,0) & uVar8, uVar9 = (uint)((ulonglong)dVar1 >> 0x20) & uVar10,
        dVar2 <= (double)CONCAT44(uVar9,uVar7) && (double)CONCAT44(uVar9,uVar7) != dVar2)) ||
       (dVar1 = (this->TempPrevTransLocation).field0_0x0._s_0.Z - (pTVar5->field0_0x0)._s_0.Z,
       uVar8 = SUB84(dVar1,0) & uVar8, uVar10 = (uint)((ulonglong)dVar1 >> 0x20) & uVar10,
       dVar2 <= (double)CONCAT44(uVar10,uVar8) && (double)CONCAT44(uVar10,uVar8) != dVar2)) {
      pUVar4 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_198);
      pTVar5 = UDS_MovementCore::GetActorLocation(pUVar4,(TVector<double> *)&local_190._s_0);
      dVar1 = (pTVar5->field0_0x0)._s_0.Y;
      (this->TempPrevTransLocation).field0_0x0._s_0.X = (pTVar5->field0_0x0)._s_0.X;
      (this->TempPrevTransLocation).field0_0x0._s_0.Y = dVar1;
      (this->TempPrevTransLocation).field0_0x0._s_0.Z = (pTVar5->field0_0x0)._s_0.Z;
      this->TempUpdate = true;
    }
    if (((this->TempUpdate == true) &&
        (pUVar6 = UDS_LogManager::GetInst(), pUVar6 != (UDS_LogManager *)0x0)) &&
       (UDS_LogManager::IsEnable_SyncLog != false)) {
      pUVar6 = UDS_LogManager::GetInst();
      ::FString::PrintfImpl((FString *)&local_190._s_0,L"X=%3.3f Y=%3.3f Z=%3.3f");
      ::FString::PrintfImpl(&local_178,L"X=%3.3f Y=%3.3f Z=%3.3f");
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_TransportWarpAbility::OnTickComponent",0x29,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Display,local_168.Ptr,0x90,L"SERIN %s %s");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
      if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data.AllocatorInstance.Data);
      }
      if ((void *)local_190._s_0.X != (void *)0x0) {
        FMemory::Free((void *)local_190._s_0.X);
      }
    }
  }
  return;
}

// OnTransportComplete @ 14b8939e0

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

void __thiscall
UDS_TransportWarpAbility::OnTransportComplete
          (UDS_TransportWarpAbility *this,bool *param_1,TVector<double> *param_2,ulong64 *param_3,
          uint *param_4)

{
  double dVar1;
  bool bVar2;
  FDS_EntityBase *pFVar3;
  UDS_LogManager *pUVar4;
  FDS_EntityBase *pFVar5;
  UDS_MovementCore *pUVar6;
  TRotator<double> *this_00;
  TVector<double> *pTVar7;
  UObject *pUVar8;
  FTimerManager *this_01;
  ADS_MainCharacter *this_02;
  undefined1 auStackY_248 [32];
  uint uVar9;
  wchar_t *pwVar10;
  EDS_AbilityDeactivateType local_208 [8];
  FWeakObjectPtr local_200;
  FString local_1f8;
  FWeakObjectPtr local_1e8;
  FWeakObjectPtr local_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  double local_1c8;
  ulong64 local_1c0;
  FTimerHandle local_1b8;
  TRotator<double> local_1b0;
  TVector<double> local_198;
  TVector<double> local_180;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_248;
  if (*param_1 == true) {
    pFVar3 = FDS_EntityBase::GetEntityBase(param_3);
    if (pFVar3 == (FDS_EntityBase *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar4 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_TransportWarpAbility::OnTransportComplete",0x2d,Yes);
      pwVar10 = L"transport entity null";
      uVar9 = 0xfb;
    }
    else {
      local_1d8 = *(undefined4 *)&param_2->field0_0x0;
      uStack_1d4 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 4);
      uStack_1d0 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 8);
      uStack_1cc = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc);
      local_1c8 = (param_2->field0_0x0)._s_0.Z + (double)pFVar3->ScaledCapsuleHalfHeight;
      (**(code **)(pFVar3->_padding_ + 0x78))(pFVar3,&local_200);
      bVar2 = FWeakObjectPtr::IsValid(&local_200);
      if (bVar2) {
        local_1f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)this->_padding_;
        local_1c0 = *param_3;
        pFVar3 = FDS_EntityBase::GetEntityBase(&local_1c0);
        pFVar5 = FDS_EntityBase::GetEntityBase((ulong64 *)&local_1f8);
        if ((pFVar3 != (FDS_EntityBase *)0x0) && (pFVar5 != (FDS_EntityBase *)0x0)) {
          (**(code **)(pFVar3->_padding_ + 0x78))(pFVar3,&local_1e8);
          (**(code **)(pFVar5->_padding_ + 0x78))(pFVar5);
          bVar2 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_1e8,
                             (void *)0x0);
          if ((!bVar2) &&
             (bVar2 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                                ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_1e0,
                                 (void *)0x0), !bVar2)) {
            pUVar6 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_1e8);
            this_00 = UDS_MovementCore::GetActorRotation(pUVar6,&local_1b0);
            pUVar6 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_1e0);
            pTVar7 = UDS_MovementCore::GetActorRelativeLocation(pUVar6,&local_198);
            UE::Math::TRotator<double>::RotateVector(this_00,&local_180,pTVar7);
          }
        }
        pUVar8 = FWeakObjectPtr::Get(&local_200);
        (**(code **)(*(longlong *)pUVar8 + 0x358))(pUVar8,&local_1d8);
        pUVar4 = UDS_LogManager::GetInst();
        if ((pUVar4 != (UDS_LogManager *)0x0) && (UDS_LogManager::IsEnable_SyncLog != false)) {
          pUVar4 = UDS_LogManager::GetInst();
          ::FString::PrintfImpl(&local_1f8,L"X=%3.3f Y=%3.3f Z=%3.3f");
          local_168._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_168,"UDS_TransportWarpAbility::OnTransportComplete",0x2d,Yes);
          UDS_LogManager::PrintLog
                    (pUVar4,1,Display,local_168.Ptr,0x110,L"SERIN OnTransportComplete %s");
          if ((void *)local_168._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_168._padding_);
          }
          if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
          }
        }
        local_1b8.Handle = 0;
        this_01 = FDS_TimerManager::Get((UObject *)0x0);
        local_1f8.Data._8_8_ = (ulonglong)(uint)local_1f8.Data.ArrayMax << 0x20;
        local_1f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)WaitNextWarpEnd;
        FTimerManager::SetTimer<UDS_TransportWarpAbility>
                  (this_01,&local_1b8,this,(pmf_6b229aa8 *)&local_1f8,__real_40000000,false,
                   __real_bf800000);
        return;
      }
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar4 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_TransportWarpAbility::OnTransportComplete",0x2d,Yes);
      pwVar10 = L"transport  movementcore null";
      uVar9 = 0x108;
    }
    UDS_LogManager::PrintLog(pUVar4,1,Warning,local_168.Ptr,uVar9,pwVar10);
  }
  else {
    dVar1 = (param_2->field0_0x0)._s_0.Y;
    (this->WarpLocation).field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
    (this->WarpLocation).field0_0x0._s_0.Y = dVar1;
    (this->WarpLocation).field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    ADS_MainCharacter::GetMainPlayer();
    bVar2 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *)&local_200,(void *)0x0);
    if ((bVar2) && (pUVar4 = UDS_LogManager::GetInst(), pUVar4 != (UDS_LogManager *)0x0)) {
      pUVar4 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_TransportWarpAbility::OnTransportComplete",0x2d,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_168.Ptr,0x120,L"mainPlayer is nullptr.");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
    this_02 = (ADS_MainCharacter *)FWeakObjectPtr::Get(&local_200);
    ADS_MainCharacter::OnTeleport
              (this_02,&this->WarpLocation,&UE::Math::TRotator<double>::ZeroRotator,param_4);
    local_208[0] = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_208);
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    if (UDS_LogManager::IsEnable_SyncLog == false) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_TransportWarpAbility::OnTransportComplete",0x2d,Yes);
    UDS_LogManager::PrintLog
              (pUVar4,1,Display,local_168.Ptr,0x127,L"SERIN Failed TransportWarp Time: %d");
  }
  if ((void *)local_168._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_168._padding_);
  }
  return;
}

// PreLoadCompleteAtLocation @ 14b895770

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

void __thiscall UDS_TransportWarpAbility::PreLoadCompleteAtLocation(UDS_TransportWarpAbility *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_IngameState *this_00;
  UDS_SendPacketManager *this_01;
  undefined1 auStackY_1a8 [32];
  EDS_AbilityDeactivateType local_168 [8];
  FWeakObjectPtr local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  UDS_IngameState::GetInst();
  bVar1 = TWeakObjectPtr<UDS_IngameState,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_IngameState,FWeakObjectPtr> *)&local_160,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_TransportWarpAbility::PreLoadCompleteAtLocation",0x33,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_158.Ptr,0xdf,L"ingameState is nullptr.");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
    local_168[0] = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_168);
  }
  else {
    this_00 = (UDS_IngameState *)FWeakObjectPtr::Get(&local_160);
    UDS_IngameState::DisableStreamingSource(this_00);
    this_01 = UDS_SendPacketManager::GetInst();
    if ((this_01 != (UDS_SendPacketManager *)0x0) &&
       (bVar1 = UDS_GameInstance::IsForceTransportWarpFail(), !bVar1)) {
      UDS_SendPacketManager::SendTransportWarpRequest(this_01,this->TransportEntityID);
    }
    UDS_TimeUtilManager::GetCurrentServerTime();
    pUVar2 = UDS_LogManager::GetInst();
    if ((pUVar2 != (UDS_LogManager *)0x0) && (UDS_LogManager::IsEnable_SyncLog != false)) {
      pUVar2 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_TransportWarpAbility::PreLoadCompleteAtLocation",0x33,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Display,local_158.Ptr,0xf1,
                 L"SERIN PreLoadCompleteAtLocation LoadingTime: %f");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  return;
}

// ReadyWarpStart @ 14b895970

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

void __thiscall UDS_TransportWarpAbility::ReadyWarpStart(UDS_TransportWarpAbility *this)

{
  int iVar1;
  double dVar2;
  bool bVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  FDS_EntityBase *pFVar6;
  FWeakObjectPtr *pFVar7;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  UObject *local_res18;
  
  pUVar4 = (UObject *)this->_padding_;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar4 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
  pUVar4 = FWeakObjectPtr::Get(&local_res8);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_TransportWarpContext_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14b895a1c;
  }
  pUVar4 = (UObject *)0x0;
LAB_14b895a1c:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res18 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
  bVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar3) {
    pUVar4 = FWeakObjectPtr::Get(&local_res10);
    this->TransportEntityID = *(ulong64 *)(pUVar4 + 1);
    pUVar4 = FWeakObjectPtr::Get(&local_res10);
    local_res8.ObjectIndex._0_1_ = 0x6c;
    dVar2 = *(double *)&pUVar4[1].field_0x10;
    (this->WarpLocation).field0_0x0._s_0.X = *(double *)&pUVar4[1].field_0x8;
    (this->WarpLocation).field0_0x0._s_0.Y = dVar2;
    (this->WarpLocation).field0_0x0._s_0.Z = *(double *)&pUVar4[1].field_0x18;
    UDS_GameplayAbility::AddStateTagToASC
              ((UDS_GameplayAbility *)this,(EDS_StateTagType *)&local_res8);
    pFVar6 = FDS_EntityBase::GetEntityBase(&this->TransportEntityID);
    if (pFVar6 == (FDS_EntityBase *)0x0) {
      local_res8.ObjectIndex._0_1_ = 2;
      UDS_GameplayAbility::DeactivateAbility
                ((UDS_GameplayAbility *)this,(EDS_AbilityDeactivateType *)&local_res8);
      return;
    }
    local_res8.ObjectIndex._0_1_ = 0x6c;
    pFVar7 = (FWeakObjectPtr *)(**(code **)(pFVar6->_padding_ + 0x178))(pFVar6,&local_res18);
    UDS_AbilitySystemComponent::AddStateTag
              ((TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr>)*pFVar7,
               (EDS_StateTagType *)&local_res8);
    if (*(char *)((longlong)&this->_padding_ + 1) == '\x01') {
      (**(code **)(*(longlong *)this->_padding_ + 0x160))();
      bVar3 = TWeakObjectPtr<UCapsuleComponent,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UCapsuleComponent,FWeakObjectPtr> *)&local_res8,(void *)0x0
                        );
      if (!bVar3) {
        pUVar4 = FWeakObjectPtr::Get(&local_res8);
        (**(code **)(*(longlong *)pUVar4 + 0x788))(pUVar4,::COLLISION_PROFILE_NOCOLLISION,1);
      }
    }
    StartPreLoadAtLocation(this);
    TMulticastDelegateRegistration<void___cdecl(bool_const_&,UE::Math::TVector<double>_const_&,unsigned___int64_const_&,unsigned_int_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_TransportWarpAbility>
              ((TMulticastDelegateRegistration<void___cdecl(bool_const_&,UE::Math::TVector<double>_const_&,unsigned___int64_const_&,unsigned_int_const_&),FDefaultDelegateUserPolicy>
                *)&FDS_TransportService::TransWarpCompleteEvent,
               (UDS_TransportWarpAbility *)&local_res8,(pmf_662ed8e2 *)this);
  }
  return;
}

// StartPreLoadAtLocation @ 14b89ab20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
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
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_TransportWarpAbility::StartPreLoadAtLocation(UDS_TransportWarpAbility *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  TQuat<double> *pTVar3;
  UDS_IngameState *this_00;
  ADS_StreamingSourceActor *this_01;
  double dVar4;
  undefined1 auStackY_228 [32];
  uint uVar5;
  wchar_t *pwVar6;
  EDS_AbilityDeactivateType local_1e8 [8];
  FWeakObjectPtr local_1e0;
  FWeakObjectPtr local_1d8;
  TTransform<double> local_1d0;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_228;
  UDS_IngameState::GetInst();
  bVar1 = TWeakObjectPtr<UDS_IngameState,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_IngameState,FWeakObjectPtr> *)&local_1d8,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) goto LAB_14b89abe4;
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_TransportWarpAbility::StartPreLoadAtLocation",0x30,Yes);
    pwVar6 = L"SERIN ingameState null";
    uVar5 = 0xc1;
  }
  else {
    pTVar3 = UE::Math::TRotator<double>::Quaternion
                       (&UE::Math::TRotator<double>::ZeroRotator,
                        (TQuat<double> *)(local_1d0.Rotation.ZW.m128d_f64 + 1));
    local_1d0.Translation.ZW.m128d_f64[1] = pTVar3->X;
    local_1d0.Scale3D.XY.m128d_f64[0] = pTVar3->Y;
    local_1d0.Scale3D.XY.m128d_f64[1] = pTVar3->Z;
    local_1d0.Scale3D.ZW.m128d_f64[0] = pTVar3->W;
    local_1d0.Scale3D.ZW.m128d_f64[1] = (this->WarpLocation).field0_0x0._s_0.X;
    dStack_170 = (this->WarpLocation).field0_0x0._s_0.Y;
    local_168 = (this->WarpLocation).field0_0x0._s_0.Z;
    uStack_160 = 0;
    local_148 = ___xmm_00000000000000003ff0000000000000;
    uStack_140 = _UNK_150689518;
    local_158 = ___xmm_3ff00000000000003ff0000000000000;
    uStack_150 = _UNK_150689688;
    this_00 = (UDS_IngameState *)FWeakObjectPtr::Get(&local_1d8);
    UDS_IngameState::GetStreamingSourceActor(this_00,&local_1d0);
    bVar1 = TWeakObjectPtr<ADS_StreamingSourceActor,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<ADS_StreamingSourceActor,FWeakObjectPtr> *)&local_1d0,
                       (void *)0x0);
    if (!bVar1) {
      this_01 = (ADS_StreamingSourceActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)&local_1d0);
      ::FName::FName((FName *)(local_1d0.Rotation.ZW.m128d_f64 + 1),"PreLoadCompleteAtLocation");
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_TransportWarpAbility *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      local_1e0.ObjectIndex = 0;
      local_1e0.ObjectSerialNumber = 0;
      local_1d0.Rotation.XY.m128d_f64[1] = (double)this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_TransportWarpAbility *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=(&local_1e0,(FObjectPtr)(local_1d0.Rotation.XY.m128d_f64 + 1));
      ADS_StreamingSourceActor::BindStreamingCompleteNotify
                (this_01,(TWeakObjectPtr<UObject,FWeakObjectPtr>)local_1e0,
                 (FName *)(local_1d0.Rotation.ZW.m128d_f64 + 1));
      dVar4 = UDS_TimeUtilManager::GetCurrentServerTime();
      this->PreloadingDuration = dVar4;
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 == (UDS_LogManager *)0x0) {
        return;
      }
      if (UDS_LogManager::IsEnable_SyncLog == false) {
        return;
      }
      pUVar2 = UDS_LogManager::GetInst();
      ::FString::PrintfImpl
                ((FString *)(local_1d0.Rotation.ZW.m128d_f64 + 1),L"X=%3.3f Y=%3.3f Z=%3.3f");
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_TransportWarpAbility::StartPreLoadAtLocation",0x30,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Display,local_138.Ptr,0xd6,L"SERIN StartPreLoadAtLocation %s");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
      if ((void *)local_1d0.Rotation.ZW.m128d_f64[1] == (void *)0x0) {
        return;
      }
      FMemory::Free((void *)local_1d0.Rotation.ZW.m128d_f64[1]);
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) goto LAB_14b89abe4;
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_TransportWarpAbility::StartPreLoadAtLocation",0x30,Yes);
    pwVar6 = L"SERIN streamingSourceActor null";
    uVar5 = 0xcb;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar5,pwVar6);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
LAB_14b89abe4:
  local_1e8[0] = Cancel;
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_1e8);
  return;
}

// WaitNextWarpEnd @ 14b8a5460

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

void __thiscall UDS_TransportWarpAbility::WaitNextWarpEnd(UDS_TransportWarpAbility *this)

{
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  EDS_AbilityDeactivateType local_148 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_148[0] = Success;
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_148);
  pUVar1 = UDS_LogManager::GetInst();
  if ((pUVar1 != (UDS_LogManager *)0x0) && (UDS_LogManager::IsEnable_SyncLog != false)) {
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_TransportWarpAbility::WaitNextWarpEnd",0x29,Yes);
    UDS_LogManager::PrintLog
              (pUVar1,1,Display,local_138.Ptr,0x147,
               L"SERIN DeactivateAbility UDS_TransportWarpAbility");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return;
}

