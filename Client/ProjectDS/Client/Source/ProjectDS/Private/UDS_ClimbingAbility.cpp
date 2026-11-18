// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 34

// StaticClass @ 14b459820

UClass * __cdecl UDS_ClimbingAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ClimbingAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ClimbingAbility",
               &Z_Registration_Info_UClass_UDS_ClimbingAbility.InnerSingleton,
               StaticRegisterNativesUDS_ClimbingAbility,0x790,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ClimbingAbility>,
               InternalVTableHelperCtorCaller<UDS_ClimbingAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ClimbingAbility.InnerSingleton;
}

// UDS_ClimbingAbility @ 14b45bb40

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

UDS_ClimbingAbility * __thiscall
UDS_ClimbingAbility::UDS_ClimbingAbility(UDS_ClimbingAbility *this,FVTableHelper *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->ReachingClimbApexCurve).WeakPtr = (FWeakObjectPtr)0x0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->MainCharacter).WeakPtr = (FWeakObjectPtr)0x0;
  (this->SkeletalMesh).WeakPtr = (FWeakObjectPtr)0x0;
  memset(&this->HitResult_ClimbApex,0,0x100);
  (this->HitResult_ClimbApex).HitObjectHandle.ReferenceObject.WeakPtr = (FWeakObjectPtr)0x0;
  (this->HitResult_ClimbApex).HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr =
       (FWeakObjectPtr)0x0;
  (this->HitResult_ClimbApex).Time = 1.0;
  (this->HitResult_ClimbApex).MyItem = -1;
  (this->HitResult_ClimbApex).HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  (this->HitResult_ClimbApex).HitObjectHandle.InstanceIndex = -1;
  (this->HitResult_ClimbApex).HitObjectHandle.ResolutionStatus = Invalid;
  *(undefined3 *)&(this->HitResult_ClimbApex).HitObjectHandle.field_0x1d = 0;
  memset(&this->HitResult_Wall_L,0,0x100);
  (this->HitResult_Wall_L).HitObjectHandle.ReferenceObject.WeakPtr = (FWeakObjectPtr)0x0;
  (this->HitResult_Wall_L).HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr =
       (FWeakObjectPtr)0x0;
  (this->HitResult_Wall_L).Time = 1.0;
  (this->HitResult_Wall_L).MyItem = -1;
  (this->HitResult_Wall_L).HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  (this->HitResult_Wall_L).HitObjectHandle.InstanceIndex = -1;
  (this->HitResult_Wall_L).HitObjectHandle.ResolutionStatus = Invalid;
  *(undefined3 *)&(this->HitResult_Wall_L).HitObjectHandle.field_0x1d = 0;
  memset(&this->HitResult_Wall_R,0,0x100);
  (this->HitResult_Wall_R).HitObjectHandle.ReferenceObject.WeakPtr = (FWeakObjectPtr)0x0;
  (this->HitResult_Wall_R).HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr =
       (FWeakObjectPtr)0x0;
  (this->HitResult_Wall_R).Time = 1.0;
  (this->HitResult_Wall_R).MyItem = -1;
  (this->HitResult_Wall_R).HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  (this->HitResult_Wall_R).HitObjectHandle.InstanceIndex = -1;
  (this->HitResult_Wall_R).HitObjectHandle.ResolutionStatus = Invalid;
  *(undefined3 *)&(this->HitResult_Wall_R).HitObjectHandle.field_0x1d = 0;
  memset(&this->HitResult_Wall_Front,0,0x100);
  (this->HitResult_Wall_Front).HitObjectHandle.ReferenceObject.WeakPtr = (FWeakObjectPtr)0x0;
  (this->HitResult_Wall_Front).HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr =
       (FWeakObjectPtr)0x0;
  (this->HitResult_Wall_Front).Time = 1.0;
  (this->HitResult_Wall_Front).MyItem = -1;
  (this->HitResult_Wall_Front).HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  (this->HitResult_Wall_Front).HitObjectHandle.InstanceIndex = -1;
  (this->HitResult_Wall_Front).HitObjectHandle.ResolutionStatus = Invalid;
  *(undefined3 *)&(this->HitResult_Wall_Front).HitObjectHandle.field_0x1d = 0;
  memset(&this->HitResult_Wall_Top,0,0x100);
  (this->HitResult_Wall_Top).HitObjectHandle.ReferenceObject.WeakPtr = (FWeakObjectPtr)0x0;
  (this->HitResult_Wall_Top).HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr =
       (FWeakObjectPtr)0x0;
  (this->HitResult_Wall_Top).Time = 1.0;
  (this->HitResult_Wall_Top).MyItem = -1;
  (this->HitResult_Wall_Top).HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  (this->HitResult_Wall_Top).HitObjectHandle.InstanceIndex = -1;
  (this->HitResult_Wall_Top).HitObjectHandle.ResolutionStatus = Invalid;
  *(undefined3 *)&(this->HitResult_Wall_Top).HitObjectHandle.field_0x1d = 0;
  memset(&this->HitResult_Wall_Mid,0,0x100);
  (this->HitResult_Wall_Mid).HitObjectHandle.ReferenceObject.WeakPtr = (FWeakObjectPtr)0x0;
  (this->HitResult_Wall_Mid).HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr =
       (FWeakObjectPtr)0x0;
  (this->HitResult_Wall_Mid).Time = 1.0;
  (this->HitResult_Wall_Mid).MyItem = -1;
  (this->HitResult_Wall_Mid).HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  (this->HitResult_Wall_Mid).HitObjectHandle.InstanceIndex = -1;
  (this->HitResult_Wall_Mid).HitObjectHandle.ResolutionStatus = Invalid;
  *(undefined3 *)&(this->HitResult_Wall_Mid).HitObjectHandle.field_0x1d = 0;
  this->ClimbUpElapsedTime = 0.0;
  this->ClimbWallDetectionOffset = 0.0;
  this->bAutoClimbUp = false;
  this->bIgnoreCanClimb = false;
  this->bClimbJump = false;
  this->PrevMaxFlyingSpeed = 600.0;
  this->PrevBrakingDecelerationFlying = 0.0;
  this->ClimbJumpHeight = 80.0;
  this->ClimbJumpElapsedTime = 0.0;
  return this;
}

// UDS_ClimbingAbility @ 14b45bdd0

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

UDS_ClimbingAbility * __thiscall
UDS_ClimbingAbility::UDS_ClimbingAbility(UDS_ClimbingAbility *this,FObjectInitializer *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->ReachingClimbApexCurve).WeakPtr = (FWeakObjectPtr)0x0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->MainCharacter).WeakPtr = (FWeakObjectPtr)0x0;
  (this->SkeletalMesh).WeakPtr = (FWeakObjectPtr)0x0;
  memset(&this->HitResult_ClimbApex,0,0x100);
  (this->HitResult_ClimbApex).HitObjectHandle.ReferenceObject.WeakPtr = (FWeakObjectPtr)0x0;
  (this->HitResult_ClimbApex).HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr =
       (FWeakObjectPtr)0x0;
  (this->HitResult_ClimbApex).Time = 1.0;
  (this->HitResult_ClimbApex).MyItem = -1;
  (this->HitResult_ClimbApex).HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  (this->HitResult_ClimbApex).HitObjectHandle.InstanceIndex = -1;
  (this->HitResult_ClimbApex).HitObjectHandle.ResolutionStatus = Invalid;
  *(undefined3 *)&(this->HitResult_ClimbApex).HitObjectHandle.field_0x1d = 0;
  memset(&this->HitResult_Wall_L,0,0x100);
  (this->HitResult_Wall_L).HitObjectHandle.ReferenceObject.WeakPtr = (FWeakObjectPtr)0x0;
  (this->HitResult_Wall_L).HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr =
       (FWeakObjectPtr)0x0;
  (this->HitResult_Wall_L).Time = 1.0;
  (this->HitResult_Wall_L).MyItem = -1;
  (this->HitResult_Wall_L).HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  (this->HitResult_Wall_L).HitObjectHandle.InstanceIndex = -1;
  (this->HitResult_Wall_L).HitObjectHandle.ResolutionStatus = Invalid;
  *(undefined3 *)&(this->HitResult_Wall_L).HitObjectHandle.field_0x1d = 0;
  memset(&this->HitResult_Wall_R,0,0x100);
  (this->HitResult_Wall_R).HitObjectHandle.ReferenceObject.WeakPtr = (FWeakObjectPtr)0x0;
  (this->HitResult_Wall_R).HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr =
       (FWeakObjectPtr)0x0;
  (this->HitResult_Wall_R).Time = 1.0;
  (this->HitResult_Wall_R).MyItem = -1;
  (this->HitResult_Wall_R).HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  (this->HitResult_Wall_R).HitObjectHandle.InstanceIndex = -1;
  (this->HitResult_Wall_R).HitObjectHandle.ResolutionStatus = Invalid;
  *(undefined3 *)&(this->HitResult_Wall_R).HitObjectHandle.field_0x1d = 0;
  memset(&this->HitResult_Wall_Front,0,0x100);
  (this->HitResult_Wall_Front).HitObjectHandle.ReferenceObject.WeakPtr = (FWeakObjectPtr)0x0;
  (this->HitResult_Wall_Front).HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr =
       (FWeakObjectPtr)0x0;
  (this->HitResult_Wall_Front).Time = 1.0;
  (this->HitResult_Wall_Front).MyItem = -1;
  (this->HitResult_Wall_Front).HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  (this->HitResult_Wall_Front).HitObjectHandle.InstanceIndex = -1;
  (this->HitResult_Wall_Front).HitObjectHandle.ResolutionStatus = Invalid;
  *(undefined3 *)&(this->HitResult_Wall_Front).HitObjectHandle.field_0x1d = 0;
  memset(&this->HitResult_Wall_Top,0,0x100);
  (this->HitResult_Wall_Top).HitObjectHandle.ReferenceObject.WeakPtr = (FWeakObjectPtr)0x0;
  (this->HitResult_Wall_Top).HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr =
       (FWeakObjectPtr)0x0;
  (this->HitResult_Wall_Top).Time = 1.0;
  (this->HitResult_Wall_Top).MyItem = -1;
  (this->HitResult_Wall_Top).HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  (this->HitResult_Wall_Top).HitObjectHandle.InstanceIndex = -1;
  (this->HitResult_Wall_Top).HitObjectHandle.ResolutionStatus = Invalid;
  *(undefined3 *)&(this->HitResult_Wall_Top).HitObjectHandle.field_0x1d = 0;
  memset(&this->HitResult_Wall_Mid,0,0x100);
  (this->HitResult_Wall_Mid).HitObjectHandle.ReferenceObject.WeakPtr = (FWeakObjectPtr)0x0;
  (this->HitResult_Wall_Mid).HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr =
       (FWeakObjectPtr)0x0;
  (this->HitResult_Wall_Mid).Time = 1.0;
  (this->HitResult_Wall_Mid).MyItem = -1;
  (this->HitResult_Wall_Mid).HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  (this->HitResult_Wall_Mid).HitObjectHandle.InstanceIndex = -1;
  (this->HitResult_Wall_Mid).HitObjectHandle.ResolutionStatus = Invalid;
  *(undefined3 *)&(this->HitResult_Wall_Mid).HitObjectHandle.field_0x1d = 0;
  this->ClimbUpElapsedTime = 0.0;
  this->ClimbWallDetectionOffset = 0.0;
  this->bAutoClimbUp = false;
  this->bIgnoreCanClimb = false;
  this->bClimbJump = false;
  this->PrevMaxFlyingSpeed = 600.0;
  this->PrevBrakingDecelerationFlying = 0.0;
  this->ClimbJumpHeight = 80.0;
  this->ClimbJumpElapsedTime = 0.0;
  return this;
}

// ~UDS_ClimbingAbility @ 14b45cdf0

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

void __thiscall UDS_ClimbingAbility::~UDS_ClimbingAbility(UDS_ClimbingAbility *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b45e3a0

UClass * __cdecl UDS_ClimbingAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ClimbingAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ClimbingAbility",
               &Z_Registration_Info_UClass_UDS_ClimbingAbility.InnerSingleton,
               StaticRegisterNativesUDS_ClimbingAbility,0x790,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ClimbingAbility>,
               InternalVTableHelperCtorCaller<UDS_ClimbingAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ClimbingAbility.InnerSingleton;
}

// ShouldTickComponent @ 14b45f130

bool __thiscall UDS_ClimbingAbility::ShouldTickComponent(UDS_ClimbingAbility *this)

{
  return true;
}

// StaticRegisterNativesUDS_ClimbingAbility @ 14b45f160

void __cdecl UDS_ClimbingAbility::StaticRegisterNativesUDS_ClimbingAbility(void)

{
  return;
}

// AddInputVector @ 14b79d060

void __thiscall
UDS_ClimbingAbility::AddInputVector(UDS_ClimbingAbility *this,TVector<double> *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
                    /* WARNING: Could not recover jumptable at 0x00014b79d08a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)pUVar1 + 0x2e0))(pUVar1,param_1,*(code **)(*(longlong *)pUVar1 + 0x2e0))
  ;
  return;
}

// AlignCharacterToCliffSurface @ 14b79d250

void __thiscall
UDS_ClimbingAbility::AlignCharacterToCliffSurface(UDS_ClimbingAbility *this,float param_1)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  UDS_MovementCore *pUVar3;
  UObject *pUVar4;
  TRotator<double> *pTVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  TRotator<double> local_98;
  TVector<double>_u_0 local_80;
  TRotator<double> local_68;
  TRotator<double> local_50 [3];
  
  pUVar3 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UDS_MovementCore::GetActorLocation(pUVar3,(TVector<double> *)&local_80._s_0);
  fVar12 = __real_42c80000;
  if ((this->HitResult_Wall_L).bBlockingHit != 0) {
    dVar11 = *(double *)&(this->HitResult_Wall_L).ImpactPoint.field_0x8 - local_80._s_0.Y;
    dVar6 = *(double *)&(this->HitResult_Wall_L).ImpactPoint.field_0x10 - local_80._s_0.Z;
    dVar10 = *(double *)&(this->HitResult_Wall_L).ImpactPoint - local_80._s_0.X;
    auVar7._0_8_ = dVar6 * dVar6;
    auVar7._8_8_ = 0;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = dVar11 * dVar11 + dVar10 * dVar10 + auVar7._0_8_;
    auVar8 = sqrtpd(auVar7,auVar8);
    fVar12 = (float)auVar8._0_8_;
  }
  fVar13 = __real_42c80000;
  if ((this->HitResult_Wall_R).bBlockingHit != 0) {
    dVar11 = *(double *)&(this->HitResult_Wall_R).ImpactPoint.field_0x8 - local_80._s_0.Y;
    dVar6 = *(double *)&(this->HitResult_Wall_R).ImpactPoint.field_0x10 - local_80._s_0.Z;
    dVar10 = *(double *)&(this->HitResult_Wall_R).ImpactPoint - local_80._s_0.X;
    auVar9._0_8_ = dVar6 * dVar6;
    auVar9._8_8_ = 0;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = dVar11 * dVar11 + dVar10 * dVar10 + auVar9._0_8_;
    auVar8 = sqrtpd(auVar9,auVar2);
    fVar13 = (float)auVar8._0_8_;
  }
  pUVar3 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UDS_MovementCore::GetActorRotation(pUVar3,&local_98);
  local_68.Pitch = local_98.Pitch;
  fVar12 = (fVar12 - fVar13) * __real_3e99999a;
  if (__real_41c80000 <= fVar12) {
    fVar12 = __real_41c80000;
  }
  if (fVar12 <= __real_c1c80000) {
    fVar12 = __real_c1c80000;
  }
  local_68.Yaw = (double)fVar12 + local_98.Yaw;
  local_68.Roll = local_98.Roll;
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  pcVar1 = *(code **)(*(longlong *)pUVar4 + 0x370);
  pTVar5 = FMath::RInterpTo(local_50,&local_98,&local_68,param_1,__real_3f800000);
  (*pcVar1)(pUVar4,pTVar5);
  return;
}

// BindInputEvent @ 14b79dda0

void __thiscall UDS_ClimbingAbility::BindInputEvent(UDS_ClimbingAbility *this)

{
  TMap<EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(EDS_KeyActionType,ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(EDS_KeyActionType,ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>_>
  *this_00;
  UDS_InputEvent *pUVar1;
  undefined1 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_res10 [2];
  int local_res18 [2];
  undefined4 *local_res20;
  
  pUVar1 = UDS_InputEvent::GetEvent();
  if (pUVar1 != (UDS_InputEvent *)0x0) {
    this_00 = &(pUVar1->OnInputEvent).Subscriptions;
    local_res10[0] = 0x27dc;
    if (*(int *)&(pUVar1->OnInputEvent).Subscriptions.field_0x8 !=
        *(int *)&(pUVar1->OnInputEvent).Subscriptions.field_0x34) {
      puVar2 = *(undefined1 **)&(pUVar1->OnInputEvent).Subscriptions.field_0x40;
      if (puVar2 == (undefined1 *)0x0) {
        puVar2 = &(pUVar1->OnInputEvent).Subscriptions.field_0x38;
      }
      iVar3 = *(int *)(puVar2 + (ulonglong)
                                (*(int *)&(pUVar1->OnInputEvent).Subscriptions.field_0x48 - 1U &
                                0x27dc) * 4);
      if (iVar3 != -1) {
        do {
          piVar4 = (int *)((longlong)iVar3 * 0x50 + *(longlong *)this_00);
          if (*piVar4 == 0x27dc) {
            if (piVar4 != (int *)0x0) goto LAB_14b79de7c;
            break;
          }
          iVar3 = piVar4[0x12];
        } while (iVar3 != -1);
      }
    }
    local_res20 = local_res10;
    TSet<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<enum_EDS_KeyActionType_const_&>_>
              (this_00,(uint)local_res18,(TKeyInitializer<EDS_KeyActionType_const_&> *)0x27dc,
               (bool *)&local_res20);
    piVar4 = (int *)((longlong)local_res18[0] * 0x50 + *(longlong *)this_00);
LAB_14b79de7c:
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar4 + 2),this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
    ::AddUObject<UDS_ClimbingAbility>
              (piVar4 + 2,(UDS_ClimbingAbility *)local_res18,(pmf_1a564013 *)this);
  }
  return;
}

// CanClimb @ 14b79e870

bool __thiscall UDS_ClimbingAbility::CanClimb(UDS_ClimbingAbility *this)

{
  if (this->bIgnoreCanClimb == true) {
    return true;
  }
  if (((this->HitResult_Wall_Mid).bBlockingHit == 0) &&
     ((this->HitResult_Wall_Top).bBlockingHit == 0)) {
    return false;
  }
  return (this->HitResult_Wall_Front).bBlockingHit;
}

// CastWallDetectionRays @ 14b79e8b0

void __thiscall UDS_ClimbingAbility::CastWallDetectionRays(UDS_ClimbingAbility *this)

{
  longlong *this_00;
  double dVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  double dVar6;
  bool bVar7;
  UDS_MovementCore *pUVar8;
  TVector<double> *pTVar9;
  FHitResult *pFVar10;
  FHitResult *pFVar11;
  longlong lVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  float fVar16;
  TVector<double>_u_0 local_1c8;
  TVector<double>_u_0 local_1b0;
  TVector<double>_u_0 local_198;
  TVector<double>_u_0 local_180;
  TVector<double>_u_0 local_168;
  FHitResult local_150;
  
  this_00 = &this->_padding_;
  pUVar8 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  UDS_MovementCore::GetActorForwardVector(pUVar8,(TVector<double> *)&local_198._s_0);
  pUVar8 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  UDS_MovementCore::GetActorRightVector(pUVar8,(TVector<double> *)&local_168._s_0);
  fVar16 = WallDetectionRange + this->ClimbWallDetectionOffset;
  pUVar8 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  pTVar9 = UDS_MovementCore::GetActorHeadLocation(pUVar8,(TVector<double> *)&local_1b0._s_0);
  local_180._s_0.X = ClimbHeadOffset.field0_0x0._s_0.X + (pTVar9->field0_0x0)._s_0.X;
  local_180._s_0.Z = ClimbHeadOffset.field0_0x0._s_0.Z + (pTVar9->field0_0x0)._s_0.Z;
  local_180._s_0.Y = ClimbHeadOffset.field0_0x0._s_0.Y + (pTVar9->field0_0x0)._s_0.Y;
  dVar1 = (double)fVar16;
  local_1c8._s_0.X = dVar1 * local_198._s_0.X + local_180._s_0.X;
  local_1c8._s_0.Y = dVar1 * local_198._s_0.Y + local_180._s_0.Y;
  local_1c8._s_0.Z = dVar1 * local_198._s_0.Z + local_180._s_0.Z;
  pFVar10 = GetHitResult(this,&local_150,(TVector<double> *)&local_180._s_0,
                         (TVector<double> *)&local_1c8._s_0);
  lVar13 = 2;
  lVar12 = 2;
  pFVar11 = &this->HitResult_Wall_Top;
  do {
    fVar3 = pFVar10->Time;
    fVar4 = pFVar10->Distance;
    iVar5 = pFVar10->_padding_;
    pFVar11->FaceIndex = pFVar10->FaceIndex;
    pFVar11->Time = fVar3;
    pFVar11->Distance = fVar4;
    pFVar11->_padding_ = iVar5;
    uVar2 = *(undefined8 *)&(pFVar10->Location).field_0x8;
    *(undefined8 *)&pFVar11->Location = *(undefined8 *)&pFVar10->Location;
    *(undefined8 *)&(pFVar11->Location).field_0x8 = uVar2;
    uVar2 = *(undefined8 *)&pFVar10->ImpactPoint;
    *(undefined8 *)&(pFVar11->Location).field_0x10 = *(undefined8 *)&(pFVar10->Location).field_0x10;
    *(undefined8 *)&pFVar11->ImpactPoint = uVar2;
    uVar2 = *(undefined8 *)&(pFVar10->ImpactPoint).field_0x10;
    *(undefined8 *)&(pFVar11->ImpactPoint).field_0x8 =
         *(undefined8 *)&(pFVar10->ImpactPoint).field_0x8;
    *(undefined8 *)&(pFVar11->ImpactPoint).field_0x10 = uVar2;
    uVar2 = *(undefined8 *)&(pFVar10->Normal).field_0x8;
    *(undefined8 *)&pFVar11->Normal = *(undefined8 *)&pFVar10->Normal;
    *(undefined8 *)&(pFVar11->Normal).field_0x8 = uVar2;
    uVar2 = *(undefined8 *)&pFVar10->ImpactNormal;
    *(undefined8 *)&(pFVar11->Normal).field_0x10 = *(undefined8 *)&(pFVar10->Normal).field_0x10;
    *(undefined8 *)&pFVar11->ImpactNormal = uVar2;
    uVar2 = *(undefined8 *)&(pFVar10->ImpactNormal).field_0x10;
    *(undefined8 *)&(pFVar11->ImpactNormal).field_0x8 =
         *(undefined8 *)&(pFVar10->ImpactNormal).field_0x8;
    *(undefined8 *)&(pFVar11->ImpactNormal).field_0x10 = uVar2;
    uVar2 = *(undefined8 *)&(pFVar10->TraceStart).field_0x8;
    *(undefined8 *)&pFVar11->TraceStart = *(undefined8 *)&pFVar10->TraceStart;
    *(undefined8 *)&(pFVar11->TraceStart).field_0x8 = uVar2;
    lVar12 = lVar12 + -1;
    pFVar10 = (FHitResult *)&(pFVar10->TraceStart).field_0x10;
    pFVar11 = (FHitResult *)&(pFVar11->TraceStart).field_0x10;
  } while (lVar12 != 0);
  pUVar8 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  UDS_MovementCore::GetActorLocation(pUVar8,(TVector<double> *)&local_180._s_0);
  dVar14 = (double)(fVar16 * __real_3f000000);
  dVar15 = (double)(float)((*(double *)&(this->HitResult_Wall_Top).TraceStart.field_0x10 -
                           local_180._s_0.Z) * __real_3fe0000000000000);
  local_1b0._s_0.X =
       dVar15 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X + local_180._s_0.X;
  local_1b0._s_0.Y =
       dVar15 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y + local_180._s_0.Y;
  local_1b0._s_0.Z =
       dVar15 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z + local_180._s_0.Z;
  local_1c8._s_0.X = dVar14 * local_198._s_0.X + local_1b0._s_0.X;
  local_1c8._s_0.Y = dVar14 * local_198._s_0.Y + local_1b0._s_0.Y;
  local_1c8._s_0.Z = dVar14 * local_198._s_0.Z + local_1b0._s_0.Z;
  pFVar10 = GetHitResult(this,&local_150,(TVector<double> *)&local_1b0._s_0,
                         (TVector<double> *)&local_1c8._s_0);
  lVar12 = 2;
  pFVar11 = &this->HitResult_Wall_Mid;
  do {
    fVar16 = pFVar10->Time;
    fVar3 = pFVar10->Distance;
    iVar5 = pFVar10->_padding_;
    pFVar11->FaceIndex = pFVar10->FaceIndex;
    pFVar11->Time = fVar16;
    pFVar11->Distance = fVar3;
    pFVar11->_padding_ = iVar5;
    uVar2 = *(undefined8 *)&(pFVar10->Location).field_0x8;
    *(undefined8 *)&pFVar11->Location = *(undefined8 *)&pFVar10->Location;
    *(undefined8 *)&(pFVar11->Location).field_0x8 = uVar2;
    uVar2 = *(undefined8 *)&pFVar10->ImpactPoint;
    *(undefined8 *)&(pFVar11->Location).field_0x10 = *(undefined8 *)&(pFVar10->Location).field_0x10;
    *(undefined8 *)&pFVar11->ImpactPoint = uVar2;
    uVar2 = *(undefined8 *)&(pFVar10->ImpactPoint).field_0x10;
    *(undefined8 *)&(pFVar11->ImpactPoint).field_0x8 =
         *(undefined8 *)&(pFVar10->ImpactPoint).field_0x8;
    *(undefined8 *)&(pFVar11->ImpactPoint).field_0x10 = uVar2;
    uVar2 = *(undefined8 *)&(pFVar10->Normal).field_0x8;
    *(undefined8 *)&pFVar11->Normal = *(undefined8 *)&pFVar10->Normal;
    *(undefined8 *)&(pFVar11->Normal).field_0x8 = uVar2;
    uVar2 = *(undefined8 *)&pFVar10->ImpactNormal;
    *(undefined8 *)&(pFVar11->Normal).field_0x10 = *(undefined8 *)&(pFVar10->Normal).field_0x10;
    *(undefined8 *)&pFVar11->ImpactNormal = uVar2;
    uVar2 = *(undefined8 *)&(pFVar10->ImpactNormal).field_0x10;
    *(undefined8 *)&(pFVar11->ImpactNormal).field_0x8 =
         *(undefined8 *)&(pFVar10->ImpactNormal).field_0x8;
    *(undefined8 *)&(pFVar11->ImpactNormal).field_0x10 = uVar2;
    uVar2 = *(undefined8 *)&(pFVar10->TraceStart).field_0x8;
    *(undefined8 *)&pFVar11->TraceStart = *(undefined8 *)&pFVar10->TraceStart;
    *(undefined8 *)&(pFVar11->TraceStart).field_0x8 = uVar2;
    lVar12 = lVar12 + -1;
    pFVar10 = (FHitResult *)&(pFVar10->TraceStart).field_0x10;
    pFVar11 = (FHitResult *)&(pFVar11->TraceStart).field_0x10;
  } while (lVar12 != 0);
  bVar7 = FWeakObjectPtr::IsValid(&(this->MainCharacter).WeakPtr);
  if (bVar7) {
    pUVar8 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    UDS_MovementCore::GetActorLocation(pUVar8,(TVector<double> *)&local_1c8._s_0);
    local_1b0._s_0.X = dVar1 * local_198._s_0.X + local_1c8._s_0.X;
    local_1b0._s_0.Y = dVar1 * local_198._s_0.Y + local_1c8._s_0.Y;
    local_1b0._s_0.Z = dVar1 * local_198._s_0.Z + local_1c8._s_0.Z;
    pFVar10 = GetHitResult(this,&local_150,(TVector<double> *)&local_1c8._s_0,
                           (TVector<double> *)&local_1b0._s_0);
    lVar12 = 2;
    pFVar11 = &this->HitResult_Wall_Front;
    do {
      fVar16 = pFVar10->Time;
      fVar3 = pFVar10->Distance;
      iVar5 = pFVar10->_padding_;
      pFVar11->FaceIndex = pFVar10->FaceIndex;
      pFVar11->Time = fVar16;
      pFVar11->Distance = fVar3;
      pFVar11->_padding_ = iVar5;
      uVar2 = *(undefined8 *)&(pFVar10->Location).field_0x8;
      *(undefined8 *)&pFVar11->Location = *(undefined8 *)&pFVar10->Location;
      *(undefined8 *)&(pFVar11->Location).field_0x8 = uVar2;
      uVar2 = *(undefined8 *)&pFVar10->ImpactPoint;
      *(undefined8 *)&(pFVar11->Location).field_0x10 =
           *(undefined8 *)&(pFVar10->Location).field_0x10;
      *(undefined8 *)&pFVar11->ImpactPoint = uVar2;
      uVar2 = *(undefined8 *)&(pFVar10->ImpactPoint).field_0x10;
      *(undefined8 *)&(pFVar11->ImpactPoint).field_0x8 =
           *(undefined8 *)&(pFVar10->ImpactPoint).field_0x8;
      *(undefined8 *)&(pFVar11->ImpactPoint).field_0x10 = uVar2;
      uVar2 = *(undefined8 *)&(pFVar10->Normal).field_0x8;
      *(undefined8 *)&pFVar11->Normal = *(undefined8 *)&pFVar10->Normal;
      *(undefined8 *)&(pFVar11->Normal).field_0x8 = uVar2;
      uVar2 = *(undefined8 *)&pFVar10->ImpactNormal;
      *(undefined8 *)&(pFVar11->Normal).field_0x10 = *(undefined8 *)&(pFVar10->Normal).field_0x10;
      *(undefined8 *)&pFVar11->ImpactNormal = uVar2;
      uVar2 = *(undefined8 *)&(pFVar10->ImpactNormal).field_0x10;
      *(undefined8 *)&(pFVar11->ImpactNormal).field_0x8 =
           *(undefined8 *)&(pFVar10->ImpactNormal).field_0x8;
      *(undefined8 *)&(pFVar11->ImpactNormal).field_0x10 = uVar2;
      uVar2 = *(undefined8 *)&(pFVar10->TraceStart).field_0x8;
      *(undefined8 *)&pFVar11->TraceStart = *(undefined8 *)&pFVar10->TraceStart;
      *(undefined8 *)&(pFVar11->TraceStart).field_0x8 = uVar2;
      lVar12 = lVar12 + -1;
      pFVar10 = (FHitResult *)&(pFVar10->TraceStart).field_0x10;
      pFVar11 = (FHitResult *)&(pFVar11->TraceStart).field_0x10;
    } while (lVar12 != 0);
    pUVar8 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    UDS_MovementCore::GetActorLocation(pUVar8,(TVector<double> *)&local_1c8._s_0);
    dVar6 = __real_4059000000000000;
    dVar14 = dVar1 * local_198._s_0.X + local_1c8._s_0.X;
    dVar15 = dVar1 * local_198._s_0.Y + local_1c8._s_0.Y;
    dVar1 = dVar1 * local_198._s_0.Z + local_1c8._s_0.Z;
    local_1b0._s_0.X = dVar14 - local_168._s_0.X * __real_4059000000000000;
    local_1b0._s_0.Y = dVar15 - local_168._s_0.Y * __real_4059000000000000;
    local_1b0._s_0.Z = dVar1 - local_168._s_0.Z * __real_4059000000000000;
    pFVar10 = GetHitResult(this,&local_150,(TVector<double> *)&local_1c8._s_0,
                           (TVector<double> *)&local_1b0._s_0);
    lVar12 = 2;
    pFVar11 = &this->HitResult_Wall_L;
    do {
      fVar16 = pFVar10->Time;
      fVar3 = pFVar10->Distance;
      iVar5 = pFVar10->_padding_;
      pFVar11->FaceIndex = pFVar10->FaceIndex;
      pFVar11->Time = fVar16;
      pFVar11->Distance = fVar3;
      pFVar11->_padding_ = iVar5;
      uVar2 = *(undefined8 *)&(pFVar10->Location).field_0x8;
      *(undefined8 *)&pFVar11->Location = *(undefined8 *)&pFVar10->Location;
      *(undefined8 *)&(pFVar11->Location).field_0x8 = uVar2;
      uVar2 = *(undefined8 *)&pFVar10->ImpactPoint;
      *(undefined8 *)&(pFVar11->Location).field_0x10 =
           *(undefined8 *)&(pFVar10->Location).field_0x10;
      *(undefined8 *)&pFVar11->ImpactPoint = uVar2;
      uVar2 = *(undefined8 *)&(pFVar10->ImpactPoint).field_0x10;
      *(undefined8 *)&(pFVar11->ImpactPoint).field_0x8 =
           *(undefined8 *)&(pFVar10->ImpactPoint).field_0x8;
      *(undefined8 *)&(pFVar11->ImpactPoint).field_0x10 = uVar2;
      uVar2 = *(undefined8 *)&(pFVar10->Normal).field_0x8;
      *(undefined8 *)&pFVar11->Normal = *(undefined8 *)&pFVar10->Normal;
      *(undefined8 *)&(pFVar11->Normal).field_0x8 = uVar2;
      uVar2 = *(undefined8 *)&pFVar10->ImpactNormal;
      *(undefined8 *)&(pFVar11->Normal).field_0x10 = *(undefined8 *)&(pFVar10->Normal).field_0x10;
      *(undefined8 *)&pFVar11->ImpactNormal = uVar2;
      uVar2 = *(undefined8 *)&(pFVar10->ImpactNormal).field_0x10;
      *(undefined8 *)&(pFVar11->ImpactNormal).field_0x8 =
           *(undefined8 *)&(pFVar10->ImpactNormal).field_0x8;
      *(undefined8 *)&(pFVar11->ImpactNormal).field_0x10 = uVar2;
      uVar2 = *(undefined8 *)&(pFVar10->TraceStart).field_0x8;
      *(undefined8 *)&pFVar11->TraceStart = *(undefined8 *)&pFVar10->TraceStart;
      *(undefined8 *)&(pFVar11->TraceStart).field_0x8 = uVar2;
      lVar12 = lVar12 + -1;
      pFVar10 = (FHitResult *)&(pFVar10->TraceStart).field_0x10;
      pFVar11 = (FHitResult *)&(pFVar11->TraceStart).field_0x10;
    } while (lVar12 != 0);
    local_1b0._s_0.X = local_168._s_0.X * dVar6 + dVar14;
    local_1b0._s_0.Y = local_168._s_0.Y * dVar6 + dVar15;
    local_1b0._s_0.Z = local_168._s_0.Z * dVar6 + dVar1;
    pFVar10 = GetHitResult(this,&local_150,(TVector<double> *)&local_1c8._s_0,
                           (TVector<double> *)&local_1b0._s_0);
    pFVar11 = &this->HitResult_Wall_R;
    do {
      fVar16 = pFVar10->Time;
      fVar3 = pFVar10->Distance;
      iVar5 = pFVar10->_padding_;
      pFVar11->FaceIndex = pFVar10->FaceIndex;
      pFVar11->Time = fVar16;
      pFVar11->Distance = fVar3;
      pFVar11->_padding_ = iVar5;
      uVar2 = *(undefined8 *)&(pFVar10->Location).field_0x8;
      *(undefined8 *)&pFVar11->Location = *(undefined8 *)&pFVar10->Location;
      *(undefined8 *)&(pFVar11->Location).field_0x8 = uVar2;
      uVar2 = *(undefined8 *)&pFVar10->ImpactPoint;
      *(undefined8 *)&(pFVar11->Location).field_0x10 =
           *(undefined8 *)&(pFVar10->Location).field_0x10;
      *(undefined8 *)&pFVar11->ImpactPoint = uVar2;
      uVar2 = *(undefined8 *)&(pFVar10->ImpactPoint).field_0x10;
      *(undefined8 *)&(pFVar11->ImpactPoint).field_0x8 =
           *(undefined8 *)&(pFVar10->ImpactPoint).field_0x8;
      *(undefined8 *)&(pFVar11->ImpactPoint).field_0x10 = uVar2;
      uVar2 = *(undefined8 *)&(pFVar10->Normal).field_0x8;
      *(undefined8 *)&pFVar11->Normal = *(undefined8 *)&pFVar10->Normal;
      *(undefined8 *)&(pFVar11->Normal).field_0x8 = uVar2;
      uVar2 = *(undefined8 *)&pFVar10->ImpactNormal;
      *(undefined8 *)&(pFVar11->Normal).field_0x10 = *(undefined8 *)&(pFVar10->Normal).field_0x10;
      *(undefined8 *)&pFVar11->ImpactNormal = uVar2;
      uVar2 = *(undefined8 *)&(pFVar10->ImpactNormal).field_0x10;
      *(undefined8 *)&(pFVar11->ImpactNormal).field_0x8 =
           *(undefined8 *)&(pFVar10->ImpactNormal).field_0x8;
      *(undefined8 *)&(pFVar11->ImpactNormal).field_0x10 = uVar2;
      uVar2 = *(undefined8 *)&(pFVar10->TraceStart).field_0x8;
      *(undefined8 *)&pFVar11->TraceStart = *(undefined8 *)&pFVar10->TraceStart;
      *(undefined8 *)&(pFVar11->TraceStart).field_0x8 = uVar2;
      lVar13 = lVar13 + -1;
      pFVar10 = (FHitResult *)&(pFVar10->TraceStart).field_0x10;
      pFVar11 = (FHitResult *)&(pFVar11->TraceStart).field_0x10;
    } while (lVar13 != 0);
  }
  return;
}

// ClimbJumpEnd @ 14b7a0190

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

void __thiscall UDS_ClimbingAbility::ClimbJumpEnd(UDS_ClimbingAbility *this)

{
  EDS_StateTagType local_res8 [32];
  
  local_res8[0] = ClimbJump;
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  this->bClimbJump = false;
  this->ClimbJumpElapsedTime = 0.0;
  return;
}

// DoClimbJump @ 14b7a4640

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
UDS_ClimbingAbility::DoClimbJump
          (UDS_ClimbingAbility *this,EDS_KeyActionType param_1,ETriggerEvent param_2,
          FInputActionValue *param_3)

{
  float fVar1;
  bool bVar2;
  UDS_GameInstance *pUVar3;
  UDS_MovementCore *pUVar4;
  TVector<double> *pTVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  EDS_StateTagType local_res18 [16];
  TVector<double>_u_0 local_188;
  TVector<double>_u_0 local_170;
  TVector<double> local_158;
  FHitResult local_138;
  
  if (param_2 == Started) {
    local_res18[0] = ClimbJump;
    bVar2 = UDS_GameplayAbility::HasStateTag((UDS_GameplayAbility *)this,local_res18);
    if ((!bVar2) &&
       (pUVar3 = UDS_GameInstance::GetInst(), fVar1 = __real_c1a00000, fVar7 = __real_42a00000,
       pUVar3 != (UDS_GameInstance *)0x0)) {
      do {
        pUVar4 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        pTVar5 = UDS_MovementCore::GetActorHeadLocation(pUVar4,&local_158);
        dVar6 = (double)fVar7;
        local_188._s_0.Z =
             dVar6 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z +
             (pTVar5->field0_0x0)._s_0.Z;
        local_188._s_0.Y =
             dVar6 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y +
             (pTVar5->field0_0x0)._s_0.Y;
        local_188._s_0.X =
             dVar6 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X +
             (pTVar5->field0_0x0)._s_0.X;
        pUVar4 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        pTVar5 = UDS_MovementCore::GetActorForwardVector(pUVar4,&local_158);
        dVar6 = (double)(WallDetectionRange + this->ClimbWallDetectionOffset);
        local_170._s_0.X = dVar6 * (pTVar5->field0_0x0)._s_0.X + local_188._s_0.X;
        local_170._s_0.Y = local_188._s_0.Y + dVar6 * (pTVar5->field0_0x0)._s_0.Y;
        local_170._s_0.Z = local_188._s_0.Z + dVar6 * (pTVar5->field0_0x0)._s_0.Z;
        GetHitResult(this,&local_138,(TVector<double> *)&local_188._s_0,
                     (TVector<double> *)&local_170._s_0);
        if (local_138.bBlockingHit != 0) {
          fVar8 = fVar7;
          if ((fVar7 < __real_42a00000) &&
             (fVar8 = fVar7 + __real_41a00000, __real_42a00000 <= fVar7 + __real_41a00000)) {
            fVar8 = __real_42a00000;
          }
          break;
        }
        fVar8 = fVar7 + fVar1;
        fVar7 = fVar8;
      } while (0.0 < fVar8);
      this->ClimbJumpHeight = fVar8;
      this->ClimbJumpElapsedTime = 0.0;
      this->bClimbJump = true;
      local_res18[0] = ClimbJump;
      UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_res18);
    }
  }
  return;
}

// GetClimbingMoveDirection @ 14b7ab420

TVector<double> * __thiscall
UDS_ClimbingAbility::GetClimbingMoveDirection
          (UDS_ClimbingAbility *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  undefined8 uVar2;
  UObject *pUVar3;
  UDS_MovementCore *this_00;
  uint uVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  TVector<double>_u_0 local_28;
  
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  uVar4 = (uint)*(undefined8 *)(pUVar3 + 6) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar5 = (uint)((ulonglong)*(undefined8 *)(pUVar3 + 6) >> 0x20) &
          __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar5,uVar4) &&
       (double)CONCAT44(uVar5,uVar4) != __real_3f1a36e2e0000000) ||
     (uVar4 = (uint)*(undefined8 *)&pUVar3[6].field_0x8 &
              (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar5 = (uint)((ulonglong)*(undefined8 *)&pUVar3[6].field_0x8 >> 0x20) &
             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar5,uVar4) &&
     (double)CONCAT44(uVar5,uVar4) != __real_3f1a36e2e0000000)) {
    this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_MovementCore::GetActorRightVector(this_00,(TVector<double> *)&local_28._s_0);
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    dVar1 = *(double *)(pUVar3 + 6);
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         dVar1 * local_28._s_0.X + (__return_storage_ptr__->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         dVar1 * local_28._s_0.Y + (__return_storage_ptr__->field0_0x0)._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         dVar1 * local_28._s_0.Z + (__return_storage_ptr__->field0_0x0)._s_0.Z;
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    dVar1 = *(double *)&pUVar3[6].field_0x8;
    dVar6 = dVar1 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
    dVar7 = dVar1 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         dVar1 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X +
         (__return_storage_ptr__->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         dVar6 + (__return_storage_ptr__->field0_0x0)._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         dVar7 + (__return_storage_ptr__->field0_0x0)._s_0.Z;
  }
  return __return_storage_ptr__;
}

// GetClimbingWallDirection @ 14b7ab560

TVector<double> * __thiscall
UDS_ClimbingAbility::GetClimbingWallDirection
          (UDS_ClimbingAbility *this,TVector<double> *__return_storage_ptr__)

{
  undefined8 uVar1;
  TVector<double>_u_0 local_38;
  TVector<double>_u_0 local_20;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if ((__real_428c0000 < (this->HitResult_Wall_Front).Distance) &&
     (__real_428c0000 < (this->HitResult_Wall_Top).Distance)) {
    local_38._s_0.X =
         *(double *)&(this->HitResult_Wall_Front).ImpactPoint -
         *(double *)&(this->HitResult_Wall_Front).TraceStart;
    local_38._s_0.Y =
         *(double *)&(this->HitResult_Wall_Front).ImpactPoint.field_0x8 -
         *(double *)&(this->HitResult_Wall_Front).TraceStart.field_0x8;
    local_38._s_0.Z =
         *(double *)&(this->HitResult_Wall_Front).ImpactPoint.field_0x10 -
         *(double *)&(this->HitResult_Wall_Front).TraceStart.field_0x10;
    UE::Math::TVector<double>::GetSafeNormal
              ((TVector<double> *)&local_38._s_0,(TVector<double> *)&local_20._s_0,
               __real_3e45798ee0000000,&UE::Math::TVector<double>::ZeroVector);
    (__return_storage_ptr__->field0_0x0)._s_0.X = local_20._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = local_20._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = local_20._s_0.Z;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetHitResult @ 14b7ac060

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

FHitResult * __thiscall
UDS_ClimbingAbility::GetHitResult
          (UDS_ClimbingAbility *this,FHitResult *__return_storage_ptr__,TVector<double> *param_1,
          TVector<double> *param_2)

{
  float fVar1;
  bool bVar2;
  longlong lVar3;
  TStatId TVar4;
  AActor *pAVar5;
  UWorld *this_00;
  undefined1 auStackY_168 [32];
  FCollisionObjectQueryParams local_120;
  FCollisionShape local_118;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  FCollisionQueryParams local_f8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_168;
  memset(__return_storage_ptr__,0,0x100);
  uStack_100 = 0xffffffff;
  (__return_storage_ptr__->HitObjectHandle).ReferenceObject.WeakPtr = (FWeakObjectPtr)0x0;
  (__return_storage_ptr__->HitObjectHandle).ManagerInterface.ObjectInstance.WeakPtr =
       (FWeakObjectPtr)0x0;
  local_108 = 0;
  uStack_fc = 0;
  __return_storage_ptr__->Time = 1.0;
  __return_storage_ptr__->MyItem = -1;
  *(undefined4 *)&(__return_storage_ptr__->HitObjectHandle).ManagerInterface.InterfaceInstance = 0;
  *(undefined4 *)
   ((longlong)&(__return_storage_ptr__->HitObjectHandle).ManagerInterface.InterfaceInstance + 4) = 0
  ;
  (__return_storage_ptr__->HitObjectHandle).InstanceIndex = -1;
  *(undefined4 *)&(__return_storage_ptr__->HitObjectHandle).ResolutionStatus = 0;
  lVar3 = (**(code **)(this->_padding_ + 0x180))(this);
  if (lVar3 != 0) {
    local_f8.TraceTag.ComparisonIndex.Value = 0;
    local_f8.TraceTag.Number = 0;
    local_120.IgnoreMask = '\0';
    local_120.ObjectTypesToQuery = 1;
    local_f8.OwnerTag.ComparisonIndex.Value = 0;
    local_f8.OwnerTag.Number = 0;
    local_f8.IgnoreComponents.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_f8.IgnoreComponents.ArrayNum = 0;
    local_f8.IgnoreComponents.ArrayMax = 8;
    local_f8.IgnoreSourceObjects.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0
    ;
    local_f8.IgnoreSourceObjects.ArrayNum = 0;
    local_f8.IgnoreSourceObjects.ArrayMax = 4;
    local_f8.bTraceComplex = false;
    local_f8.bFindInitialOverlaps = true;
    local_f8.bReturnFaceIndex = false;
    local_f8.bReturnPhysicalMaterial = false;
    local_f8.MobilityType = Any;
    local_f8.bComponentListUnique = true;
    local_f8.IgnoreMask = '\0';
    local_f8.bIgnoreBlocks = false;
    local_f8.bIgnoreTouches = false;
    local_f8.bSkipNarrowPhase = false;
    TVar4 = FCollisionQueryParams::GetUnknownStatId();
    local_f8.StatId.StatIdPtr = *(TStatIdData **)&(TVar4.StatIdPtr)->Name;
    local_f8.bDebugQuery = false;
    local_f8.bTraceIntoSubComponents = true;
    local_f8.bReplaceHitWithSubComponents = true;
    pAVar5 = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    FCollisionQueryParams::AddIgnoredActor(&local_f8,pAVar5);
    local_118.ShapeType = Sphere;
    local_118.field1_0x4.Box.HalfExtentX = 10.0;
    this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
    bVar2 = UWorld::SweepSingleByObjectType
                      (this_00,__return_storage_ptr__,param_1,param_2,
                       &UE::Math::TQuat<double>::Identity,&local_120,&local_118,&local_f8);
    fVar1 = __real_3dcccccd;
    DS_Util::ShowSyncLine(param_1,param_2,&FColor::Green,false,__real_3dcccccd,'\0',0.0);
    if (bVar2) {
      DS_Util::ShowSyncSphere
                ((TVector<double> *)&__return_storage_ptr__->ImpactPoint,__real_41200000,10,
                 &FColor::Green,false,fVar1,'\0',0.0);
    }
    if (local_f8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_f8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
    }
    if (local_f8.IgnoreComponents.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_f8.IgnoreComponents.AllocatorInstance.SecondaryData);
    }
  }
  return __return_storage_ptr__;
}

// GetMaxClimbJumpHeight @ 14b7ac360

float __thiscall UDS_ClimbingAbility::GetMaxClimbJumpHeight(UDS_ClimbingAbility *this)

{
  float fVar1;
  UDS_MovementCore *pUVar2;
  TVector<double> *pTVar3;
  double dVar4;
  float fVar5;
  TVector<double>_u_0 local_188;
  TVector<double>_u_0 local_170;
  TVector<double> local_158;
  FHitResult local_138;
  
  fVar1 = __real_c1a00000;
  fVar5 = __real_42a00000;
  while( true ) {
    pUVar2 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pTVar3 = UDS_MovementCore::GetActorHeadLocation(pUVar2,&local_158);
    dVar4 = (double)fVar5;
    local_188._s_0.Z =
         dVar4 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z + (pTVar3->field0_0x0)._s_0.Z
    ;
    local_188._s_0.Y =
         dVar4 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y + (pTVar3->field0_0x0)._s_0.Y
    ;
    local_188._s_0.X =
         dVar4 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X + (pTVar3->field0_0x0)._s_0.X
    ;
    pUVar2 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pTVar3 = UDS_MovementCore::GetActorForwardVector(pUVar2,&local_158);
    dVar4 = (double)(WallDetectionRange + this->ClimbWallDetectionOffset);
    local_170._s_0.Y = local_188._s_0.Y + dVar4 * (pTVar3->field0_0x0)._s_0.Y;
    local_170._s_0.Z = dVar4 * (pTVar3->field0_0x0)._s_0.Z + local_188._s_0.Z;
    local_170._s_0.X = dVar4 * (pTVar3->field0_0x0)._s_0.X + local_188._s_0.X;
    GetHitResult(this,&local_138,(TVector<double> *)&local_188._s_0,
                 (TVector<double> *)&local_170._s_0);
    if (local_138.bBlockingHit != 0) break;
    fVar5 = fVar5 + fVar1;
    if (fVar5 <= 0.0) {
      return fVar5;
    }
  }
  if (__real_42a00000 <= fVar5) {
    return fVar5;
  }
  if (fVar5 + __real_41a00000 < __real_42a00000) {
    return fVar5 + __real_41a00000;
  }
  return __real_42a00000;
}

// GetWallDetectionRagne @ 14b7ad7f0

float __thiscall UDS_ClimbingAbility::GetWallDetectionRagne(UDS_ClimbingAbility *this)

{
  return WallDetectionRange + this->ClimbWallDetectionOffset;
}

// HasReachedClimbApex @ 14b7ada20

bool __thiscall UDS_ClimbingAbility::HasReachedClimbApex(UDS_ClimbingAbility *this)

{
  double dVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  UDS_MovementCore *pUVar6;
  FHitResult *pFVar7;
  FHitResult *pFVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  TVector<double>_u_0 local_1a8;
  TVector<double>_u_0 local_190;
  TVector<double>_u_0 local_178;
  TVector<double> local_160;
  TVector<double> local_148 [2];
  FHitResult local_118;
  
  if ((this->HitResult_Wall_Top).bBlockingHit == 0) {
    pUVar6 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_MovementCore::GetActorForwardVector(pUVar6,(TVector<double> *)&local_1a8._s_0);
    pUVar6 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_MovementCore::GetActorHeadLocation(pUVar6,local_148);
    pUVar6 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_MovementCore::GetActorLocation(pUVar6,&local_160);
    dVar1 = *(double *)&(this->HitResult_Wall_Top).TraceStart.field_0x10;
    dVar10 = (double)((this->HitResult_Wall_Front).Distance + __real_42200000);
    dVar11 = dVar10 * local_1a8._s_0.Z + dVar1;
    local_190._s_0.X = dVar10 * local_1a8._s_0.X + *(double *)&(this->HitResult_Wall_Top).TraceStart
    ;
    local_190._s_0.Y =
         dVar10 * local_1a8._s_0.Y + *(double *)&(this->HitResult_Wall_Top).TraceStart.field_0x8;
    local_178._s_0.Z = dVar11 + __real_4059000000000000;
    local_190._s_0.Z = dVar11 - (double)(float)(dVar1 - local_160.field0_0x0._s_0.Z);
    local_178._s_0.X = local_190._s_0.X;
    local_178._s_0.Y = local_190._s_0.Y;
    pFVar7 = GetHitResult(this,&local_118,(TVector<double> *)&local_178._s_0,
                          (TVector<double> *)&local_190._s_0);
    lVar9 = 2;
    pFVar8 = &this->HitResult_ClimbApex;
    do {
      fVar3 = pFVar7->Time;
      fVar4 = pFVar7->Distance;
      iVar5 = pFVar7->_padding_;
      pFVar8->FaceIndex = pFVar7->FaceIndex;
      pFVar8->Time = fVar3;
      pFVar8->Distance = fVar4;
      pFVar8->_padding_ = iVar5;
      uVar2 = *(undefined8 *)&(pFVar7->Location).field_0x8;
      *(undefined8 *)&pFVar8->Location = *(undefined8 *)&pFVar7->Location;
      *(undefined8 *)&(pFVar8->Location).field_0x8 = uVar2;
      uVar2 = *(undefined8 *)&pFVar7->ImpactPoint;
      *(undefined8 *)&(pFVar8->Location).field_0x10 = *(undefined8 *)&(pFVar7->Location).field_0x10;
      *(undefined8 *)&pFVar8->ImpactPoint = uVar2;
      uVar2 = *(undefined8 *)&(pFVar7->ImpactPoint).field_0x10;
      *(undefined8 *)&(pFVar8->ImpactPoint).field_0x8 =
           *(undefined8 *)&(pFVar7->ImpactPoint).field_0x8;
      *(undefined8 *)&(pFVar8->ImpactPoint).field_0x10 = uVar2;
      uVar2 = *(undefined8 *)&(pFVar7->Normal).field_0x8;
      *(undefined8 *)&pFVar8->Normal = *(undefined8 *)&pFVar7->Normal;
      *(undefined8 *)&(pFVar8->Normal).field_0x8 = uVar2;
      uVar2 = *(undefined8 *)&pFVar7->ImpactNormal;
      *(undefined8 *)&(pFVar8->Normal).field_0x10 = *(undefined8 *)&(pFVar7->Normal).field_0x10;
      *(undefined8 *)&pFVar8->ImpactNormal = uVar2;
      uVar2 = *(undefined8 *)&(pFVar7->ImpactNormal).field_0x10;
      *(undefined8 *)&(pFVar8->ImpactNormal).field_0x8 =
           *(undefined8 *)&(pFVar7->ImpactNormal).field_0x8;
      *(undefined8 *)&(pFVar8->ImpactNormal).field_0x10 = uVar2;
      uVar2 = *(undefined8 *)&(pFVar7->TraceStart).field_0x8;
      *(undefined8 *)&pFVar8->TraceStart = *(undefined8 *)&pFVar7->TraceStart;
      *(undefined8 *)&(pFVar8->TraceStart).field_0x8 = uVar2;
      lVar9 = lVar9 + -1;
      pFVar7 = (FHitResult *)&(pFVar7->TraceStart).field_0x10;
      pFVar8 = (FHitResult *)&(pFVar8->TraceStart).field_0x10;
    } while (lVar9 != 0);
    if ((this->HitResult_ClimbApex).bBlockingHit != 0) {
      return *(double *)&(this->HitResult_ClimbApex).ImpactPoint.field_0x10 <= dVar1;
    }
  }
  return false;
}

// Initialize @ 14b7aef60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UDS_ClimbingAbility::Initialize(UDS_ClimbingAbility *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  FWeakObjectPtr *pFVar10;
  UDS_MovementCore *this_00;
  UDS_MovementCore *this_01;
  TVector<double> *pTVar11;
  TVector<double> *pTVar12;
  UClass *pUVar13;
  UObject *pUVar14;
  FName FVar15;
  FName local_res8;
  UCurveFloat *local_res10;
  TVector<double> local_58;
  TVector<double> local_40;
  undefined4 uStack_28;
  undefined1 uStack_24;
  undefined2 uStack_23;
  undefined1 uStack_21;
  
  uVar5 = *(undefined8 *)&(this->HitResult_ClimbApex).TraceStart;
  uVar6 = *(undefined8 *)&(this->HitResult_ClimbApex).TraceStart.field_0x8;
  FVar15.ComparisonIndex.Value = 0;
  FVar15.Number = 0;
  uVar1 = *(undefined8 *)&(this->HitResult_ClimbApex).TraceStart.field_0x10;
  uVar7 = *(undefined8 *)&(this->HitResult_ClimbApex).TraceEnd;
  uVar8 = *(undefined8 *)&(this->HitResult_ClimbApex).TraceEnd.field_0x8;
  uStack_21 = 0;
  uVar2 = *(undefined8 *)&(this->HitResult_ClimbApex).TraceEnd.field_0x10;
  (this->HitResult_ClimbApex).FaceIndex = 0;
  (this->HitResult_ClimbApex).Distance = 0.0;
  (this->HitResult_ClimbApex)._padding_ = 0;
  *(undefined8 *)&(this->HitResult_ClimbApex).Location = 0;
  uStack_24 = 0;
  *(undefined8 *)&(this->HitResult_ClimbApex).Location.field_0x8 = 0;
  *(undefined8 *)&(this->HitResult_ClimbApex).Location.field_0x10 = 0;
  uStack_23 = 0;
  *(undefined8 *)&(this->HitResult_ClimbApex).ImpactPoint = 0;
  *(undefined8 *)&(this->HitResult_ClimbApex).ImpactPoint.field_0x8 = 0;
  local_40.field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)&(this->HitResult_ClimbApex).ImpactPoint.field_0x10 = 0;
  *(undefined8 *)&(this->HitResult_ClimbApex).Normal = 0;
  uStack_28 = 0xffffffff;
  *(undefined8 *)&(this->HitResult_ClimbApex).Normal.field_0x8 = 0;
  *(undefined8 *)&(this->HitResult_ClimbApex).Normal.field_0x10 = 0;
  *(undefined8 *)&(this->HitResult_ClimbApex).ImpactNormal = 0;
  *(undefined8 *)&(this->HitResult_ClimbApex).ImpactNormal.field_0x8 = 0;
  *(undefined8 *)&(this->HitResult_ClimbApex).ImpactNormal.field_0x10 = 0;
  (this->HitResult_ClimbApex).PenetrationDepth = 0.0;
  (this->HitResult_ClimbApex).Item = 0;
  (this->HitResult_ClimbApex).ElementIndex = '\0';
  (this->HitResult_ClimbApex).field_0xad = 0;
  (this->HitResult_ClimbApex)._padding_ = 0;
  (this->HitResult_ClimbApex).PhysMaterial.WeakPtr = (FWeakObjectPtr)0x0;
  (this->HitResult_ClimbApex).Component.WeakPtr = (FWeakObjectPtr)0x0;
  (this->HitResult_ClimbApex).PhysicsObjectOwner.WeakPtr = (FWeakObjectPtr)0x0;
  (this->HitResult_ClimbApex).PhysicsObject = (FPhysicsObject *)0x0;
  (this->HitResult_ClimbApex).BoneName.ComparisonIndex = 0;
  (this->HitResult_ClimbApex).BoneName.Number = 0;
  (this->HitResult_ClimbApex).MyBoneName.ComparisonIndex = 0;
  (this->HitResult_ClimbApex).MyBoneName.Number = 0;
  (this->HitResult_ClimbApex).HitObjectHandle.ReferenceObject.WeakPtr = (FWeakObjectPtr)0x0;
  (this->HitResult_ClimbApex).HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr =
       (FWeakObjectPtr)0x0;
  (this->HitResult_ClimbApex).MyItem = -1;
  (this->HitResult_ClimbApex).Time = 1.0;
  *(undefined8 *)&(this->HitResult_ClimbApex).TraceStart = uVar5;
  *(undefined8 *)&(this->HitResult_ClimbApex).TraceStart.field_0x8 = uVar6;
  *(undefined8 *)&(this->HitResult_ClimbApex).TraceEnd = uVar7;
  *(undefined8 *)&(this->HitResult_ClimbApex).TraceEnd.field_0x8 = uVar8;
  (this->HitResult_ClimbApex).HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  (this->HitResult_ClimbApex).HitObjectHandle.InstanceIndex = -1;
  (this->HitResult_ClimbApex).HitObjectHandle.ResolutionStatus = Invalid;
  *(undefined3 *)&(this->HitResult_ClimbApex).HitObjectHandle.field_0x1d = 0;
  *(undefined8 *)&(this->HitResult_ClimbApex).TraceStart.field_0x10 = uVar1;
  *(undefined8 *)&(this->HitResult_ClimbApex).TraceEnd.field_0x10 = uVar2;
  bVar9 = FWeakObjectPtr::IsValid(&(this->SkeletalMesh).WeakPtr);
  if (bVar9) {
    pFVar10 = (FWeakObjectPtr *)
              (**(code **)(*(longlong *)this->_padding_ + 0x80))
                        ((longlong *)this->_padding_,&local_res8);
    (this->SkeletalMesh).WeakPtr = *pFVar10;
  }
  this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  this_01 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  pTVar11 = UDS_MovementCore::GetActorHeadLocation(this_00,&local_58);
  pTVar12 = UDS_MovementCore::GetActorFootLocation(this_01,&local_40);
  WallDetectionRange =
       (float)(((pTVar11->field0_0x0)._s_0.Z - (pTVar12->field0_0x0)._s_0.Z) +
              ClimbHeadOffset.field0_0x0._s_0.Z) * ___real_3f13cd3a;
  local_res8 = (FName)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if (local_res8 != (FName)0x0) {
    pUVar13 = Z_Construct_UClass_ADS_MainCharacter_NoRegister();
    iVar3 = (int)pUVar13->_padding_;
    if ((iVar3 <= *(int *)(*(longlong *)((longlong)local_res8 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)((longlong)local_res8 + 0x10) + 0x30) + (longlong)iVar3 * 8) ==
        &pUVar13->_padding_)) goto LAB_14b7af11c;
  }
  local_res8 = FVar15;
LAB_14b7af11c:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  FWeakObjectPtr::operator=(&(this->MainCharacter).WeakPtr,(FObjectPtr)&local_res8);
  bVar9 = FWeakObjectPtr::IsValid(&(this->MainCharacter).WeakPtr);
  if (bVar9) {
    pUVar14 = FWeakObjectPtr::Get(&(this->MainCharacter).WeakPtr);
    local_res10 = *(UCurveFloat **)(pUVar14 + 0x15);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UCurveFloat *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)local_res10);
    }
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UCurveFloat *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)local_res10);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res8,(FObjectPtr)&local_res10);
    bVar9 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_res8);
    if (bVar9) {
      pUVar14 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_res8);
      this->PrevMaxFlyingSpeed = *(float *)&pUVar14[0x10].field_0x14;
      pUVar14 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_res8);
      this->PrevBrakingDecelerationFlying = *(float *)&pUVar14[0x11].field_0x14;
      dVar4 = DS_CommonDataHelper::ClimbingSpeed();
      SetMaxFlyingSpeed(this,(float)dVar4);
      SetBrakingDecelerationFlying(this,__real_45000000);
    }
  }
  bVar9 = FWeakObjectPtr::IsValid(&(this->MainCharacter).WeakPtr);
  this->bIgnoreCanClimb = !bVar9;
  ::FName::FName(&local_res8,L"/Game/Datas/Curve/FC_ClimbApex");
  local_res10 = DS_Util::LoadObjFromPath<UCurveFloat>(&local_res8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10);
  }
  FWeakObjectPtr::operator=(&(this->ReachingClimbApexCurve).WeakPtr,(FObjectPtr)&local_res10);
  return;
}

// IsCloseToGround @ 14b7b1be0

bool __thiscall UDS_ClimbingAbility::IsCloseToGround(UDS_ClimbingAbility *this)

{
  UObject *pUVar1;
  UDS_MovementCore *pUVar2;
  TVector<double> *pTVar3;
  TVector<double> *pTVar4;
  double dVar5;
  TVector<double>_u_0 local_178;
  TVector<double>_u_0 local_160;
  TVector<double> local_148;
  TVector<double> local_130;
  FHitResult local_118;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if (pUVar1[6].field_0x11 != '\0') {
    pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    if (*(double *)&pUVar1[6].field_0x8 <= 0.0 && *(double *)&pUVar1[6].field_0x8 != 0.0) {
      dVar5 = __real_4059000000000000 - ClimbHeadOffset.field0_0x0._s_0.Z;
      if (__real_4059000000000000 - ClimbHeadOffset.field0_0x0._s_0.Z <= 0.0) {
        dVar5 = 0.0;
      }
      pUVar2 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      pTVar3 = UDS_MovementCore::GetActorFootLocation(pUVar2,&local_148);
      pUVar2 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      pTVar4 = UDS_MovementCore::GetActorForwardVector(pUVar2,&local_130);
      local_160._s_0.Z =
           (pTVar3->field0_0x0)._s_0.Z - (pTVar4->field0_0x0)._s_0.Z * __real_4044000000000000;
      local_160._s_0.X =
           (pTVar3->field0_0x0)._s_0.X - (pTVar4->field0_0x0)._s_0.X * __real_4044000000000000;
      dVar5 = (double)(float)dVar5;
      local_160._s_0.Y =
           (pTVar3->field0_0x0)._s_0.Y - (pTVar4->field0_0x0)._s_0.Y * __real_4044000000000000;
      local_178._s_0.X =
           local_160._s_0.X - dVar5 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
      local_178._s_0.Y =
           local_160._s_0.Y - dVar5 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
      local_178._s_0.Z =
           local_160._s_0.Z - dVar5 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
      GetHitResult(this,&local_118,(TVector<double> *)&local_160._s_0,
                   (TVector<double> *)&local_178._s_0);
      return local_118.bBlockingHit;
    }
  }
  return false;
}

// IsValidReferencedPtr @ 14b7b2750

bool __thiscall UDS_ClimbingAbility::IsValidReferencedPtr(UDS_ClimbingAbility *this)

{
  return true;
}

// OnAbilityRetryActivate @ 14b7b4170

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

void __thiscall UDS_ClimbingAbility::OnAbilityRetryActivate(UDS_ClimbingAbility *this)

{
  EDS_AbilityDeactivateType local_res10 [24];
  
  local_res10[0] = Success;
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res10);
  return;
}

// OnCanActivate @ 14b7b6100

bool __thiscall UDS_ClimbingAbility::OnCanActivate(UDS_ClimbingAbility *this)

{
  bool bVar1;
  bool local_res10 [8];
  EDS_SpecialBuffType local_res18 [4];
  
  bVar1 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  if (bVar1) {
    local_res10[0] = true;
    local_res18[0] = ForbidClimb;
    bVar1 = UDS_CharBuffData::CheckForbidSpecialBuff
                      ((ulong64 *)&this->_padding_,local_res18,local_res10);
    return bVar1;
  }
  return false;
}

// OnDeactivateAbility @ 14b7b8580

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

void __thiscall UDS_ClimbingAbility::OnDeactivateAbility(UDS_ClimbingAbility *this,bool *param_1)

{
  int iVar1;
  UObject *pUVar2;
  UDS_InputEvent *pUVar3;
  EDS_StateTagType local_res8 [8];
  
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  iVar1 = (**(code **)(*(longlong *)pUVar2 + 0x438))(pUVar2);
  if (iVar1 == 5) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    (**(code **)(*(longlong *)pUVar2 + 0x448))(pUVar2,3);
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    (**(code **)(*(longlong *)pUVar2 + 0x2d8))(pUVar2);
  }
  this->bAutoClimbUp = false;
  pUVar3 = UDS_InputEvent::GetEvent();
  if (pUVar3 != (UDS_InputEvent *)0x0) {
    FDS_FilteredEventDelegate<enum_EDS_KeyActionType_const_,enum_EDS_KeyActionType_const_,enum_ETriggerEvent_const_,FInputActionValue_const_&>
    ::Remove<UDS_ClimbingAbility>(&pUVar3->OnInputEvent,this);
  }
  local_res8[0] = ClimbJump;
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  this->bClimbJump = false;
  this->ClimbJumpElapsedTime = 0.0;
  local_res8[0] = Locomotion_Climbing;
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  local_res8[0] = ReachingClimbApex;
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  SetMaxFlyingSpeed(this,this->PrevMaxFlyingSpeed);
  SetBrakingDecelerationFlying(this,this->PrevBrakingDecelerationFlying);
  return;
}

// OnPostActivateAbility @ 14b7bbd60

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

void __thiscall UDS_ClimbingAbility::OnPostActivateAbility(UDS_ClimbingAbility *this)

{
  TMap<EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(EDS_KeyActionType,ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(EDS_KeyActionType,ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>_>
  *this_00;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  FHitResult *pFVar4;
  bool bVar5;
  UDS_InputEvent *pUVar6;
  UObject *pUVar7;
  undefined1 *puVar8;
  int iVar9;
  longlong lVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  EDS_AbilityDeactivateType local_res10 [8];
  int local_res18 [2];
  EDS_AbilityDeactivateType *local_res20;
  code *local_58 [4];
  TRotator<double> local_38;
  
  Initialize(this);
  pUVar6 = UDS_InputEvent::GetEvent();
  if (pUVar6 != (UDS_InputEvent *)0x0) {
    this_00 = &(pUVar6->OnInputEvent).Subscriptions;
    local_58[0] = DoClimbJump;
    local_res10[0] = 0xdc;
    local_res10[1] = 0x27;
    local_res10[2] = None;
    local_res10[3] = None;
    local_58[1] = (code *)((ulonglong)local_58[1] & 0xffffffff00000000);
    if (*(int *)&(pUVar6->OnInputEvent).Subscriptions.field_0x8 !=
        *(int *)&(pUVar6->OnInputEvent).Subscriptions.field_0x34) {
      puVar8 = *(undefined1 **)&(pUVar6->OnInputEvent).Subscriptions.field_0x40;
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = &(pUVar6->OnInputEvent).Subscriptions.field_0x38;
      }
      iVar9 = *(int *)(puVar8 + (ulonglong)
                                (*(int *)&(pUVar6->OnInputEvent).Subscriptions.field_0x48 - 1U &
                                0x27dc) * 4);
      if (iVar9 != -1) {
        do {
          piVar11 = (int *)((longlong)iVar9 * 0x50 + *(longlong *)this_00);
          if (*piVar11 == 0x27dc) {
            if (piVar11 != (int *)0x0) goto LAB_14b7bbe4b;
            break;
          }
          iVar9 = piVar11[0x12];
        } while (iVar9 != -1);
      }
    }
    local_res20 = local_res10;
    TSet<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<enum_EDS_KeyActionType_const_&>_>
              (this_00,(uint)local_res18,(TKeyInitializer<EDS_KeyActionType_const_&> *)0x27dc,
               (bool *)&local_res20);
    piVar11 = (int *)((longlong)local_res18[0] * 0x50 + *(longlong *)this_00);
LAB_14b7bbe4b:
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar11 + 2),this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
    ::AddUObject<UDS_ClimbingAbility>
              (piVar11 + 2,(UDS_ClimbingAbility *)local_res18,(pmf_1a564013 *)this);
  }
  CastWallDetectionRays(this);
  if ((this->bIgnoreCanClimb != true) &&
     ((((this->HitResult_Wall_Mid).bBlockingHit == 0 &&
       ((this->HitResult_Wall_Top).bBlockingHit == 0)) ||
      ((this->HitResult_Wall_Front).bBlockingHit == 0)))) {
    local_res10[0] = 2;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res10);
    return;
  }
  bVar5 = FWeakObjectPtr::IsValid(&(this->MainCharacter).WeakPtr);
  if (bVar5) {
    if ((this->HitResult_Wall_Front).bBlockingHit == 0) {
      pFVar4 = &this->HitResult_Wall_Top;
      lVar10 = 0x5d8;
    }
    else {
      pFVar4 = &this->HitResult_Wall_Front;
      lVar10 = 0x4d8;
    }
    uVar1 = *(undefined8 *)((longlong)&this->_padding_ + lVar10);
    uVar2 = *(undefined8 *)&(pFVar4->ImpactNormal).field_0x8;
    uVar3 = *(undefined8 *)&pFVar4->ImpactNormal;
    uVar12 = (uint)__xmm_80000000000000008000000000000000;
    uVar13 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    local_58[2] = (code *)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^ uVar13,(uint)uVar1 ^ uVar12);
    local_58[1] = (code *)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) ^ uVar13,(uint)uVar2 ^ uVar12);
    local_58[0] = (code *)CONCAT44((uint)((ulonglong)uVar3 >> 0x20) ^ uVar13,(uint)uVar3 ^ uVar12);
    UE::Math::TVector<double>::ToOrientationRotator((TVector<double> *)local_58,&local_38);
    local_38.Pitch = 0.0;
    local_38.Roll = 0.0;
    pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    (**(code **)(*(longlong *)pUVar7 + 0x370))(pUVar7,&local_38);
    pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    (**(code **)(*(longlong *)pUVar7 + 0x448))(pUVar7,5);
    pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    (**(code **)(*(longlong *)pUVar7 + 0x2d8))(pUVar7);
  }
  local_res10[0] = 4;
  UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_res10);
  return;
}

// OnTickComponent @ 14b7be520

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

void __thiscall UDS_ClimbingAbility::OnTickComponent(UDS_ClimbingAbility *this,float param_1)

{
  bool bVar1;
  USkinnedMeshComponent *this_00;
  FName *pFVar2;
  UDS_MovementCore *this_01;
  UObject *pUVar3;
  undefined1 auVar4 [16];
  undefined4 in_XMM1_Db;
  double dVar5;
  FName local_res8;
  TVector<double>_u_0 local_48;
  TVector<double>_u_0 local_30;
  
  UDS_GameplayAbility::OnTickComponent((UDS_GameplayAbility *)this,param_1);
  bVar1 = FWeakObjectPtr::IsValid(&(this->SkeletalMesh).WeakPtr);
  if (bVar1) {
    this_00 = (USkinnedMeshComponent *)FWeakObjectPtr::Get(&(this->SkeletalMesh).WeakPtr);
    pFVar2 = ::FName::FName(&local_res8,L"pelvis");
    USkinnedMeshComponent::GetBoneLocation
              (this_00,(TVector<double> *)&local_48._s_0,*pFVar2,WorldSpace);
    this_01 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_MovementCore::GetActorLocation(this_01,(TVector<double> *)&local_30._s_0);
    auVar4._0_8_ = (local_48._s_0.Y - local_30._s_0.Y) * (local_48._s_0.Y - local_30._s_0.Y) +
                   (local_48._s_0.X - local_30._s_0.X) * (local_48._s_0.X - local_30._s_0.X);
    auVar4._8_8_ = 0;
    auVar4 = sqrtpd(auVar4,auVar4);
    this->ClimbWallDetectionOffset = (float)auVar4._0_8_;
  }
  if (this->bAutoClimbUp == true) {
    UpdateAutoClimbingUpMovement(this,param_1);
  }
  else {
    if (this->bClimbJump == true) {
      if (this->ClimbJumpElapsedTime <= __real_3f3ae148) {
        dVar5 = (double)(this->ClimbJumpHeight * ___real_3faf57ac);
        local_48._s_0.Z = dVar5 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
        local_48._8_4_ = SUB84(UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y * dVar5,0);
        local_48._s_0.X = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X * dVar5;
        local_48._12_4_ =
             (int)((ulonglong)(UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y * dVar5) >>
                  0x20);
        pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        (**(code **)(*(longlong *)pUVar3 + 0x2c8))(pUVar3,&local_48,CONCAT44(in_XMM1_Db,param_1),1);
        this->ClimbJumpElapsedTime = param_1 + this->ClimbJumpElapsedTime;
      }
      else {
        local_res8.ComparisonIndex.Value._0_1_ = 0x90;
        UDS_GameplayAbility::RemoveStateTagToASC
                  ((UDS_GameplayAbility *)this,(EDS_StateTagType *)&local_res8);
        this->bClimbJump = false;
        this->ClimbJumpElapsedTime = 0.0;
      }
    }
    else {
      UpdateClimbingMovement(this,param_1);
    }
    if ((this->bIgnoreCanClimb != true) &&
       ((((this->HitResult_Wall_Mid).bBlockingHit == 0 &&
         ((this->HitResult_Wall_Top).bBlockingHit == 0)) ||
        ((this->HitResult_Wall_Front).bBlockingHit == 0)))) {
      bVar1 = HasReachedClimbApex(this);
      if (!bVar1) {
        local_res8.ComparisonIndex.Value._0_1_ = 2;
        UDS_GameplayAbility::DeactivateAbility
                  ((UDS_GameplayAbility *)this,(EDS_AbilityDeactivateType *)&local_res8);
      }
    }
  }
  return;
}

// SetBrakingDecelerationFlying @ 14b7c38a0

void __thiscall
UDS_ClimbingAbility::SetBrakingDecelerationFlying(UDS_ClimbingAbility *this,float param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8 [2];
  UObject *local_res18 [2];
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->MainCharacter).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->MainCharacter).WeakPtr);
    local_res18[0] = *(UObject **)(pUVar2 + 0x15);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UObject *)0x0))
    {
      UE::GC::MarkAsReachable(local_res18[0]);
    }
    local_res8[0].ObjectIndex = 0;
    local_res8[0].ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UObject *)0x0))
    {
      UE::GC::MarkAsReachable(local_res18[0]);
    }
    FWeakObjectPtr::operator=(local_res8,(FObjectPtr)local_res18);
    bVar1 = FWeakObjectPtr::IsValid(local_res8);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get(local_res8);
      *(float *)&pUVar2[0x11].field_0x14 = param_1;
    }
  }
  return;
}

// SetMaxFlyingSpeed @ 14b7c3f00

void __thiscall UDS_ClimbingAbility::SetMaxFlyingSpeed(UDS_ClimbingAbility *this,float param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8 [2];
  UObject *local_res18 [2];
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->MainCharacter).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->MainCharacter).WeakPtr);
    local_res18[0] = *(UObject **)(pUVar2 + 0x15);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UObject *)0x0))
    {
      UE::GC::MarkAsReachable(local_res18[0]);
    }
    local_res8[0].ObjectIndex = 0;
    local_res8[0].ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UObject *)0x0))
    {
      UE::GC::MarkAsReachable(local_res18[0]);
    }
    FWeakObjectPtr::operator=(local_res8,(FObjectPtr)local_res18);
    bVar1 = FWeakObjectPtr::IsValid(local_res8);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get(local_res8);
      *(float *)&pUVar2[0x10].field_0x14 = param_1;
    }
  }
  return;
}

// UnBindInputEvent @ 14b7c7700

void __thiscall UDS_ClimbingAbility::UnBindInputEvent(UDS_ClimbingAbility *this)

{
  UDS_InputEvent *pUVar1;
  
  pUVar1 = UDS_InputEvent::GetEvent();
  if (pUVar1 != (UDS_InputEvent *)0x0) {
    FDS_FilteredEventDelegate<enum_EDS_KeyActionType_const_,enum_EDS_KeyActionType_const_,enum_ETriggerEvent_const_,FInputActionValue_const_&>
    ::Remove<UDS_ClimbingAbility>(&pUVar1->OnInputEvent,this);
    return;
  }
  return;
}

// UpdateAutoClimbingUpMovement @ 14b7c80a0

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
UDS_ClimbingAbility::UpdateAutoClimbingUpMovement(UDS_ClimbingAbility *this,float param_1)

{
  bool bVar1;
  UDS_MovementCore *pUVar2;
  UCurveFloat *this_00;
  UObject *pUVar3;
  uint uVar4;
  uint uVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  EDS_AbilityDeactivateType local_res10 [8];
  double local_78;
  double dStack_70;
  double local_68;
  TVector<double>_u_0 local_60;
  TVector<double> local_48 [2];
  
  pUVar2 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UDS_MovementCore::GetActorFootLocation(pUVar2,local_48);
  pUVar2 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UDS_MovementCore::GetActorForwardVector(pUVar2,(TVector<double> *)&local_60._s_0);
  fVar10 = param_1 + this->ClimbUpElapsedTime;
  dVar6 = *(double *)&(this->HitResult_ClimbApex).ImpactPoint.field_0x10 - __real_403e000000000000;
  this->ClimbUpElapsedTime = fVar10;
  if (__real_3f800000 < fVar10) {
    this->bAutoClimbUp = false;
    this->ClimbUpElapsedTime = 0.0;
    dVar6 = DS_CommonDataHelper::ClimbingSpeed();
    SetMaxFlyingSpeed(this,(float)dVar6);
    if (((this->bIgnoreCanClimb != true) &&
        ((((this->HitResult_Wall_Mid).bBlockingHit == 0 &&
          ((this->HitResult_Wall_Top).bBlockingHit == 0)) ||
         ((this->HitResult_Wall_Front).bBlockingHit == 0)))) ||
       (bVar1 = HasReachedClimbApex(this), bVar1)) {
      local_res10[0] = Success;
      UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res10);
      return;
    }
  }
  else {
    bVar1 = FWeakObjectPtr::IsValid(&(this->ReachingClimbApexCurve).WeakPtr);
    if (bVar1) {
      this_00 = (UCurveFloat *)FWeakObjectPtr::Get(&(this->ReachingClimbApexCurve).WeakPtr);
      fVar10 = UCurveFloat::GetFloatValue(this_00,this->ClimbUpElapsedTime);
      SetMaxFlyingSpeed(this,fVar10 * __real_43af0000);
    }
    uVar7 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
    uVar8 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
    uVar9 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
    if (dVar6 < (double)local_48[0].field0_0x0._16_8_) {
      uVar4 = (uint)__xmm_80000000000000008000000000000000;
      uVar5 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
      uVar7 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::UpVector.field0_0x0._0_8_ >>
                             0x20) ^ uVar5,
                       SUB84(UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X,0) ^ uVar4);
      uVar8 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::UpVector.field0_0x0._8_8_ >>
                             0x20) ^ uVar5,
                       SUB84(UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y,0) ^ uVar4);
      uVar9 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::UpVector.field0_0x0._16_8_ >>
                             0x20) ^ uVar5,
                       SUB84(UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z,0) ^ uVar4);
    }
    local_78 = local_60._s_0.X + (double)uVar7;
    dStack_70 = local_60._s_0.Y + (double)uVar8;
    local_68 = local_60._s_0.Z + (double)uVar9;
    dVar6 = dStack_70 * dStack_70 + local_78 * local_78 + local_68 * local_68;
    if (dVar6 != __real_3ff0000000000000) {
      if (__real_3e45798ee0000000 <= dVar6) {
        dVar6 = __real_3ff0000000000000 / SQRT(dVar6);
        local_78 = local_78 * dVar6;
        dStack_70 = dStack_70 * dVar6;
        local_68 = local_68 * dVar6;
      }
      else {
        local_78 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        dStack_70 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_68 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      }
    }
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    (**(code **)(*(longlong *)pUVar3 + 0x2e0))(pUVar3,&local_78);
  }
  return;
}

// UpdateClimbJump @ 14b7c86c0

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

void __thiscall UDS_ClimbingAbility::UpdateClimbJump(UDS_ClimbingAbility *this,float param_1)

{
  UObject *pUVar1;
  undefined4 in_XMM1_Db;
  double dVar2;
  EDS_StateTagType local_res8 [32];
  undefined1 local_38 [16];
  double local_28;
  
  if (__real_3f3ae148 < this->ClimbJumpElapsedTime) {
    local_res8[0] = ClimbJump;
    UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res8);
    this->bClimbJump = false;
    this->ClimbJumpElapsedTime = 0.0;
    return;
  }
  dVar2 = (double)(this->ClimbJumpHeight * ___real_3faf57ac);
  local_28 = dVar2 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
  local_38._8_4_ = SUB84(UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y * dVar2,0);
  local_38._0_8_ = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X * dVar2;
  local_38._12_4_ =
       (int)((ulonglong)(UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y * dVar2) >> 0x20);
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  (**(code **)(*(longlong *)pUVar1 + 0x2c8))(pUVar1,local_38,CONCAT44(in_XMM1_Db,param_1),1);
  this->ClimbJumpElapsedTime = param_1 + this->ClimbJumpElapsedTime;
  return;
}

// UpdateClimbingMovement @ 14b7c8790

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

void __thiscall UDS_ClimbingAbility::UpdateClimbingMovement(UDS_ClimbingAbility *this,float param_1)

{
  longlong *this_00;
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined1 auVar7 [12];
  bool bVar8;
  UObject *pUVar9;
  UDS_MovementCore *pUVar10;
  TVector<double> *pTVar11;
  TVector<double> *pTVar12;
  TRotator<double> *pTVar13;
  longlong *this_01;
  undefined8 uVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  undefined8 uVar20;
  double dVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  float fVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  EDS_AbilityDeactivateType local_res18 [8];
  undefined1 local_218 [12];
  undefined4 uStack_20c;
  undefined8 local_208;
  double local_200;
  double dStack_1f8;
  undefined8 local_1f0;
  TVector<double>_u_0 local_1e8;
  TVector<double>_u_0 local_1d0;
  TRotator<double> local_1b8;
  FHitResult local_198;
  
  CastWallDetectionRays(this);
  bVar8 = HasReachedClimbApex(this);
  if (bVar8) {
    SetMaxFlyingSpeed(this,__real_43af0000);
    local_res18[0] = 0x8f;
    UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_res18);
    this->bAutoClimbUp = true;
  }
  else {
    bVar8 = FWeakObjectPtr::IsValid(&(this->MainCharacter).WeakPtr);
    if (bVar8) {
      this_00 = &this->_padding_;
      pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
      if (pUVar9[6].field_0x11 != '\0') {
        pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
        if (*(double *)&pUVar9[6].field_0x8 <= 0.0 && *(double *)&pUVar9[6].field_0x8 != 0.0) {
          dVar4 = __real_4059000000000000 - ClimbHeadOffset.field0_0x0._s_0.Z;
          if (__real_4059000000000000 - ClimbHeadOffset.field0_0x0._s_0.Z <= 0.0) {
            dVar4 = 0.0;
          }
          pUVar10 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
          pTVar11 = UDS_MovementCore::GetActorFootLocation
                              (pUVar10,(TVector<double> *)&local_1e8._s_0);
          pUVar10 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
          pTVar12 = UDS_MovementCore::GetActorForwardVector
                              (pUVar10,(TVector<double> *)&local_1d0._s_0);
          local_1f0 = (pTVar11->field0_0x0)._s_0.Z -
                      (pTVar12->field0_0x0)._s_0.Z * __real_4044000000000000;
          local_200 = (pTVar11->field0_0x0)._s_0.X -
                      (pTVar12->field0_0x0)._s_0.X * __real_4044000000000000;
          dVar4 = (double)(float)dVar4;
          dStack_1f8 = (pTVar11->field0_0x0)._s_0.Y -
                       (pTVar12->field0_0x0)._s_0.Y * __real_4044000000000000;
          local_208 = (double)local_1f0 -
                      dVar4 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
          stack0xfffffffffffffdf0 =
               dStack_1f8 - dVar4 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
          local_218._0_8_ =
               local_200 - dVar4 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
          GetHitResult(this,&local_198,(TVector<double> *)&local_200,(TVector<double> *)local_218);
          if (local_198.bBlockingHit != 0) {
            local_res18[0] = Success;
            UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res18);
            return;
          }
        }
      }
      uVar23 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      dVar4 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                               UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
      unique0x10000c15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      local_200 = dVar4;
      unique0x10000c19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      local_1f0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
      dVar21 = __real_3f1a36e2e0000000;
      uVar20 = _UNK_15061cc88;
      if ((__real_3f1a36e2e0000000 <
           (double)CONCAT44((uint)((ulonglong)*(undefined8 *)(pUVar9 + 6) >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            (uint)*(undefined8 *)(pUVar9 + 6) &
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
         (__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&pUVar9[6].field_0x8 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)*(undefined8 *)&pUVar9[6].field_0x8 &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
        pUVar10 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        UDS_MovementCore::GetActorRightVector(pUVar10,(TVector<double> *)local_218);
        pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
        dVar5 = *(double *)(pUVar9 + 6);
        dVar4 = (double)local_218._0_8_ * dVar5 + local_200;
        dVar15 = (double)stack0xfffffffffffffdf0 * dVar5 + dStack_1f8;
        dVar19 = (double)local_208 * dVar5 + (double)local_1f0;
        pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
        dVar5 = *(double *)&pUVar9[6].field_0x8;
        dVar4 = dVar5 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X + dVar4;
        dVar15 = dVar5 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y + dVar15;
        local_1f0 = dVar5 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z + dVar19;
        uVar22 = SUB84(dVar15,0);
        uVar23 = (undefined4)((ulonglong)dVar15 >> 0x20);
      }
      uVar6 = local_1f0;
      this_01 = &this->_padding_;
      dVar5 = (double)CONCAT44(uVar23,uVar22);
      pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
      uVar28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      uVar27 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      uVar26 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      uVar25 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      uVar30 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      uVar31 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
      uVar14 = CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                        UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
      if (pUVar9[6].field_0x11 == '\x01') {
        if (((this->HitResult_Wall_Front).Distance <= __real_428c0000) ||
           ((this->HitResult_Wall_Top).Distance <= __real_428c0000)) {
          auVar7._4_8_ = uVar20;
          auVar7._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
          auVar17._0_8_ = auVar7._0_8_ << 0x20;
          auVar17._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
          auVar17._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
          local_1e8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        }
        else {
          local_208 = *(double *)&(this->HitResult_Wall_Front).ImpactPoint.field_0x10 -
                      *(double *)&(this->HitResult_Wall_Front).TraceStart.field_0x10;
          stack0xfffffffffffffdf0 =
               *(double *)&(this->HitResult_Wall_Front).ImpactPoint.field_0x8 -
               *(double *)&(this->HitResult_Wall_Front).TraceStart.field_0x8;
          local_218._0_8_ =
               *(double *)&(this->HitResult_Wall_Front).ImpactPoint -
               *(double *)&(this->HitResult_Wall_Front).TraceStart;
          UE::Math::TVector<double>::GetSafeNormal
                    ((TVector<double> *)local_218,(TVector<double> *)&local_1e8._s_0,
                     __real_3e45798ee0000000,&UE::Math::TVector<double>::ZeroVector);
          auVar17._8_8_ = local_1e8._s_0.Y;
          auVar17._0_8_ = (longlong)local_1e8._s_0.X;
          uVar14 = local_1e8._s_0.X;
        }
        uVar6 = (double)uVar6 + local_1e8._s_0.Z;
        dVar4 = dVar4 + (double)uVar14;
        dVar5 = (double)CONCAT44(uVar23,uVar22) + auVar17._8_8_;
        uVar22 = SUB84(dVar5,0);
        uVar23 = (undefined4)((ulonglong)dVar5 >> 0x20);
        local_1f0 = uVar6;
      }
      if (((dVar21 < (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) &
                                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                      SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
           ) || (dVar21 < (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                           SUB84(dVar5,0) &
                                           (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
         (dVar21 < (double)CONCAT44((uint)((ulonglong)uVar6 >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    (uint)uVar6 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
        pUVar10 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_01);
        UDS_MovementCore::GetActorLocation(pUVar10,(TVector<double> *)&local_1d0._s_0);
        fVar24 = __real_42c80000;
        if ((this->HitResult_Wall_L).bBlockingHit != 0) {
          dVar21 = *(double *)&(this->HitResult_Wall_L).ImpactPoint.field_0x8 - local_1d0._s_0.Y;
          dVar15 = *(double *)&(this->HitResult_Wall_L).ImpactPoint.field_0x10 - local_1d0._s_0.Z;
          dVar19 = *(double *)&(this->HitResult_Wall_L).ImpactPoint - local_1d0._s_0.X;
          auVar16._0_8_ = dVar15 * dVar15;
          auVar16._8_8_ = 0;
          auVar2._8_8_ = 0;
          auVar2._0_8_ = dVar21 * dVar21 + dVar19 * dVar19 + auVar16._0_8_;
          auVar17 = sqrtpd(auVar16,auVar2);
          fVar24 = (float)auVar17._0_8_;
        }
        fVar29 = __real_42c80000;
        if ((this->HitResult_Wall_R).bBlockingHit != 0) {
          dVar21 = *(double *)&(this->HitResult_Wall_R).ImpactPoint.field_0x8 - local_1d0._s_0.Y;
          dVar15 = *(double *)&(this->HitResult_Wall_R).ImpactPoint.field_0x10 - local_1d0._s_0.Z;
          dVar19 = *(double *)&(this->HitResult_Wall_R).ImpactPoint - local_1d0._s_0.X;
          auVar18._0_8_ = dVar15 * dVar15;
          auVar18._8_8_ = 0;
          auVar3._8_8_ = 0;
          auVar3._0_8_ = dVar21 * dVar21 + dVar19 * dVar19 + auVar18._0_8_;
          auVar17 = sqrtpd(auVar18,auVar3);
          fVar29 = (float)auVar17._0_8_;
        }
        pUVar10 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_01);
        UDS_MovementCore::GetActorRotation(pUVar10,(TRotator<double> *)local_218);
        local_1e8._s_0.X = (double)local_218._0_8_;
        fVar24 = (fVar24 - fVar29) * __real_3e99999a;
        if (__real_41c80000 <= fVar24) {
          fVar24 = __real_41c80000;
        }
        if (fVar24 <= __real_c1c80000) {
          fVar24 = __real_c1c80000;
        }
        local_1e8._s_0.Y = (double)fVar24 + (double)stack0xfffffffffffffdf0;
        local_1e8._s_0.Z = (double)local_208;
        pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01);
        pcVar1 = *(code **)(*(longlong *)pUVar9 + 0x370);
        pTVar13 = FMath::RInterpTo(&local_1b8,(TRotator<double> *)local_218,
                                   (TRotator<double> *)&local_1e8._s_0,param_1,__real_3f800000);
        (*pcVar1)(pUVar9,pTVar13);
        uVar30 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
        uVar31 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
        uVar25 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        uVar26 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        uVar27 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
        uVar28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      }
      dVar21 = dVar5 * dVar5 + dVar4 * dVar4 + (double)uVar6 * (double)uVar6;
      if (dVar21 == __real_3ff0000000000000) {
        local_208 = local_1f0;
        local_218._8_4_ = uVar22;
        local_218._0_8_ = dVar4;
        uStack_20c = uVar23;
      }
      else if (__real_3e45798ee0000000 <= dVar21) {
        dVar21 = __real_3ff0000000000000 / SQRT(dVar21);
        local_208 = (double)uVar6 * dVar21;
        stack0xfffffffffffffdf0 = dVar5 * dVar21;
        local_218._0_8_ = dVar4 * dVar21;
      }
      else {
        local_218._4_4_ = uVar26;
        local_218._0_4_ = uVar25;
        local_218._8_4_ = uVar27;
        uStack_20c = uVar28;
        local_208 = CONCAT44(uVar31,uVar30);
      }
      pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01);
      (**(code **)(*(longlong *)pUVar9 + 0x2e0))(pUVar9,local_218);
    }
  }
  return;
}

