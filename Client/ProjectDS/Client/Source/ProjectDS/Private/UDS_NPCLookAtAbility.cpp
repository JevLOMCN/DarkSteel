// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 24

// StaticClass @ 14b53cc80

UClass * __cdecl UDS_NPCLookAtAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NPCLookAtAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NPCLookAtAbility",
               &Z_Registration_Info_UClass_UDS_NPCLookAtAbility.InnerSingleton,
               StaticRegisterNativesUDS_NPCLookAtAbility,400,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_NPCLookAtAbility>,
               InternalVTableHelperCtorCaller<UDS_NPCLookAtAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NPCLookAtAbility.InnerSingleton;
}

// UDS_NPCLookAtAbility @ 14b5404a0

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

UDS_NPCLookAtAbility * __thiscall
UDS_NPCLookAtAbility::UDS_NPCLookAtAbility(UDS_NPCLookAtAbility *this,FVTableHelper *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->LookAtTimerHandle).Handle = 0;
  (this->OwnerNPC).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->MainCharacterSkeletalMeshComp).WeakPtr = (FWeakObjectPtr)0x0;
  this->bIsInDialogueState = false;
  this->CooldownEndTime = 0.0;
  this->LookAtDuration = 0.0;
  this->LookAtChance = 0;
  return this;
}

// UDS_NPCLookAtAbility @ 14b540510

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

UDS_NPCLookAtAbility * __thiscall
UDS_NPCLookAtAbility::UDS_NPCLookAtAbility(UDS_NPCLookAtAbility *this,FObjectInitializer *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->LookAtTimerHandle).Handle = 0;
  (this->OwnerNPC).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->MainCharacterSkeletalMeshComp).WeakPtr = (FWeakObjectPtr)0x0;
  this->bIsInDialogueState = false;
  this->CooldownEndTime = 0.0;
  this->LookAtDuration = 0.0;
  this->LookAtChance = 0;
  return this;
}

// ~UDS_NPCLookAtAbility @ 14b5417b0

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

void __thiscall UDS_NPCLookAtAbility::~UDS_NPCLookAtAbility(UDS_NPCLookAtAbility *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b542dc0

UClass * __cdecl UDS_NPCLookAtAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NPCLookAtAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NPCLookAtAbility",
               &Z_Registration_Info_UClass_UDS_NPCLookAtAbility.InnerSingleton,
               StaticRegisterNativesUDS_NPCLookAtAbility,400,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_NPCLookAtAbility>,
               InternalVTableHelperCtorCaller<UDS_NPCLookAtAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NPCLookAtAbility.InnerSingleton;
}

// ShouldNotifyChangedCharState @ 14b543a20

bool __thiscall UDS_NPCLookAtAbility::ShouldNotifyChangedCharState(UDS_NPCLookAtAbility *this)

{
  return true;
}

// ShouldNotifyChangedCharState_WhenInactive @ 14b543a30

bool __thiscall
UDS_NPCLookAtAbility::ShouldNotifyChangedCharState_WhenInactive(UDS_NPCLookAtAbility *this)

{
  return true;
}

// ShouldTickComponent @ 14b543a40

bool __thiscall UDS_NPCLookAtAbility::ShouldTickComponent(UDS_NPCLookAtAbility *this)

{
  return true;
}

// StaticRegisterNativesUDS_NPCLookAtAbility @ 14b543aa0

void __cdecl UDS_NPCLookAtAbility::StaticRegisterNativesUDS_NPCLookAtAbility(void)

{
  return;
}

// ClearVariables @ 14b827c90

void __thiscall UDS_NPCLookAtAbility::ClearVariables(UDS_NPCLookAtAbility *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  this->LookAtDuration = 0.0;
  bVar1 = FWeakObjectPtr::IsValid(&(this->CharStateData).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->CharStateData).WeakPtr);
    pUVar2[6].field_0x20 = 0;
  }
  return;
}

// DetermineLookAtProcess @ 14b82cca0

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

void __thiscall UDS_NPCLookAtAbility::DetermineLookAtProcess(UDS_NPCLookAtAbility *this)

{
  EDS_AbilityTagType local_res8 [8];
  undefined8 local_res10 [3];
  
  if ((char)this->_padding_ != '\x01') {
    local_res10[0] = 0;
    local_res8[0] = NpcLookAt;
    UDS_GameplayAbility::TryActivateAbility
              ((UDS_GameplayAbility *)this,local_res8,(TObjectPtr<UWN_AbilityContext>)local_res10);
  }
  return;
}

// EndCoolDown @ 14b82d430

void __thiscall UDS_NPCLookAtAbility::EndCoolDown(UDS_NPCLookAtAbility *this)

{
  this->CooldownEndTime = 0.0;
  return;
}

// GetTargetLocation @ 14b8328f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TVector<double> * __thiscall
UDS_NPCLookAtAbility::GetTargetLocation
          (UDS_NPCLookAtAbility *this,TVector<double> *__return_storage_ptr__)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  ADS_CameraManager *this_00;
  USkinnedMeshComponent *this_01;
  FName *pFVar4;
  TVector<double> *pTVar5;
  FName local_res8;
  
  if (this->bIsInDialogueState == true) {
    this_00 = ADS_CameraManager::GetInst();
    if (this_00 != (ADS_CameraManager *)0x0) {
      ADS_CameraManager::GetNpcTalkCameraLocation(this_00,__return_storage_ptr__);
      return __return_storage_ptr__;
    }
  }
  else {
    bVar3 = FWeakObjectPtr::IsValid(&(this->MainCharacterSkeletalMeshComp).WeakPtr);
    if (bVar3) {
      this_01 = (USkinnedMeshComponent *)
                FWeakObjectPtr::Get(&(this->MainCharacterSkeletalMeshComp).WeakPtr);
      pFVar4 = ::FName::FName(&local_res8,L"head");
      USkinnedMeshComponent::GetBoneLocation(this_01,__return_storage_ptr__,*pFVar4,WorldSpace);
      return __return_storage_ptr__;
    }
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<4441968216767463690>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_NPCLookAtAbility.cpp"
                     ,0x10a,"false");
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TVector<double> *)(*pcVar1)();
    return pTVar5;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// IsCloseToTarget @ 14b835bb0

bool __thiscall
UDS_NPCLookAtAbility::IsCloseToTarget
          (UDS_NPCLookAtAbility *this,TVector<double> *param_1,TVector<double> *param_2)

{
  bool bVar1;
  
  bVar1 = DS_Util::IsCloseDist(param_2,param_1,&LOOK_AT_DISTANCE);
  return bVar1;
}

// IsValidReferencedPtr @ 14b836a10

bool __thiscall UDS_NPCLookAtAbility::IsValidReferencedPtr(UDS_NPCLookAtAbility *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->OwnerNPC).WeakPtr);
  if (bVar1) {
    bVar1 = FWeakObjectPtr::IsValid(&(this->CharStateData).WeakPtr);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// OnAbilityAdded @ 14b837410

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

void __thiscall UDS_NPCLookAtAbility::OnAbilityAdded(UDS_NPCLookAtAbility *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FDS_EntityBase *pFVar4;
  FWeakObjectPtr *this_00;
  UObject *pUVar5;
  UClass *pUVar6;
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> TVar7;
  FTimerManager *this_01;
  FWeakObjectPtr local_res10;
  UObject *local_res18;
  UObject *local_res20;
  undefined1 local_48 [16];
  code *local_38;
  undefined4 uStack_30;
  uint uStack_2c;
  code *local_28;
  longlong lStack_20;
  
  UDS_GameplayAbility::OnAbilityAdded((UDS_GameplayAbility *)this);
  pFVar4 = FDS_EntityBase::GetMainPlayerEntityBase(true);
  if (pFVar4 == (FDS_EntityBase *)0x0) {
    return;
  }
  this_00 = (FWeakObjectPtr *)(**(code **)(pFVar4->_padding_ + 0x150))(pFVar4,local_48);
  pUVar5 = FWeakObjectPtr::Get(this_00);
  if (pUVar5 == (UObject *)0x0) {
LAB_14b83748b:
    pUVar5 = (UObject *)0x0;
  }
  else {
    pUVar6 = Z_Construct_UClass_ADS_MainCharacter_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) goto LAB_14b83748b;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res18 = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
  TVar7 = UDS_CharStateData::GetData((ulong64)&local_38);
                    /* WARNING: Load size is inaccurate */
  (this->CharStateData).WeakPtr = *TVar7.WeakPtr;
  local_res20 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if (local_res20 != (UObject *)0x0) {
    pUVar6 = Z_Construct_UClass_ADS_NPC_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&local_res20->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&local_res20->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar6->_padding_)) goto LAB_14b83753a;
  }
  local_res20 = (UObject *)0x0;
LAB_14b83753a:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res20);
  }
  FWeakObjectPtr::operator=(&(this->OwnerNPC).WeakPtr,(FObjectPtr)&local_res20);
  bVar3 = FWeakObjectPtr::IsValid(&(this->OwnerNPC).WeakPtr);
  if (((!bVar3) || (bVar3 = FWeakObjectPtr::IsValid(&(this->CharStateData).WeakPtr), !bVar3)) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4441968216767463473>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_NPCLookAtAbility.cpp"
                         ,0x31,"IsValidReferencedPtr()"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_01 = FDS_TimerManager::Get((UObject *)0x0);
  local_38 = DetermineLookAtProcess;
  uStack_30 = 0;
  lStack_20 = (ulonglong)uStack_2c << 0x20;
  local_28 = DetermineLookAtProcess;
  FTimerManager::SetTimer<UDS_NPCLookAtAbility>
            (this_01,&this->LookAtTimerHandle,this,(pmf_655a5e8a *)&local_28,__real_3f000000,true,
             __real_bf800000);
  return;
}

// OnAbilityRemoved @ 14b837650

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

void __thiscall UDS_NPCLookAtAbility::OnAbilityRemoved(UDS_NPCLookAtAbility *this)

{
  FTimerManager *this_00;
  FTimerData *pFVar1;
  
  UDS_GameplayAbility::OnAbilityRemoved((UDS_GameplayAbility *)this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &ADS_MainCharacter::MainCharacterSwitchCompleteDelegate,this);
  (this->CharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  this_00 = FDS_TimerManager::Get((UObject *)0x0);
  pFVar1 = FTimerManager::FindTimer(this_00,&this->LookAtTimerHandle);
  if (pFVar1 != (FTimerData *)0x0) {
    FTimerManager::InternalClearTimer(this_00,(FTimerHandle)(this->LookAtTimerHandle).Handle);
  }
  (this->LookAtTimerHandle).Handle = 0;
  return;
}

// OnCanActivate @ 14b839270

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

bool __thiscall UDS_NPCLookAtAbility::OnCanActivate(UDS_NPCLookAtAbility *this)

{
  double dVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  FDS_EntityBase *pFVar9;
  FWeakObjectPtr *pFVar10;
  TVector<double> *pTVar11;
  double dVar12;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  UObject *local_res18;
  UObject *local_res20;
  TVector<double>_u_0 local_60;
  TVector<double> local_48 [2];
  
  if (this->bIsInDialogueState == true) {
    return true;
  }
  pUVar7 = (UObject *)this->_padding_;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar7 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar7);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar7);
    }
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res18 = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
  pUVar7 = FWeakObjectPtr::Get(&local_res10);
  if (pUVar7 != (UObject *)0x0) {
    pUVar8 = Z_Construct_UClass_UDS_NpcLookAtAbilityContext_NoRegister();
    iVar6 = (int)pUVar8->_padding_;
    if ((iVar6 <= *(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar6 * 8) ==
        &pUVar8->_padding_)) goto LAB_14b839339;
  }
  pUVar7 = (UObject *)0x0;
LAB_14b839339:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res20 = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
  bVar4 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar4) {
    pUVar7 = FWeakObjectPtr::Get(&local_res8);
    this->LookAtChance = *(int *)(pUVar7 + 1);
  }
  pFVar9 = FDS_EntityBase::GetMainPlayerEntityBase(true);
  if (pFVar9 != (FDS_EntityBase *)0x0) {
    pFVar10 = (FWeakObjectPtr *)(**(code **)(pFVar9->_padding_ + 0x80))(pFVar9);
    (this->MainCharacterSkeletalMeshComp).WeakPtr = *pFVar10;
  }
  if ((this->LookAtChance < 1) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4441968216767463513>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_NPCLookAtAbility.cpp"
                         ,0x59,"false"), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  bVar4 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  if ((((bVar4) && (bVar4 = FWeakObjectPtr::IsValid(&(this->OwnerNPC).WeakPtr), bVar4)) &&
      (bVar4 = FWeakObjectPtr::IsValid(&(this->CharStateData).WeakPtr), bVar4)) &&
     (dVar1 = this->CooldownEndTime, dVar12 = UDS_TimeUtilManager::GetCurrentServerTime(),
     dVar1 <= dVar12)) {
    pTVar11 = GetTargetLocation(this,local_48);
    pUVar7 = FWeakObjectPtr::Get(&(this->OwnerNPC).WeakPtr);
    lVar2 = *(longlong *)(pUVar7 + 0xb);
    local_60._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    local_60._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    local_60._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    local_60._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    local_60._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (lVar2 != 0) {
      local_60._0_4_ = *(undefined4 *)(lVar2 + 0x210);
      local_60._4_4_ = *(undefined4 *)(lVar2 + 0x214);
      local_60._8_4_ = *(undefined4 *)(lVar2 + 0x218);
      local_60._12_4_ = *(undefined4 *)(lVar2 + 0x21c);
      local_60._s_0.Z = *(double *)(lVar2 + 0x220);
    }
    bVar4 = DS_Util::IsCloseDist(pTVar11,(TVector<double> *)&local_60._s_0,&LOOK_AT_DISTANCE);
    if (bVar4) {
      iVar6 = FMath::RandRange(0,1000000);
      if (iVar6 <= this->LookAtChance) {
        return true;
      }
      StartCoolDown(this);
    }
  }
  return false;
}

// OnChangedCharState @ 14b83bf50

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
UDS_NPCLookAtAbility::OnChangedCharState
          (UDS_NPCLookAtAbility *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
          FDS_ChangedCharStateInfo *param_2)

{
  bool bVar1;
  UDS_CharStateData *this_00;
  FWeakObjectPtr local_res10;
  EDS_CharDetailState local_res18 [2];
  undefined8 local_res20;
  FDS_ChangedCharStateInfo local_38;
  
  local_38.StateTag.TagName = (param_2->StateTag).TagName;
  local_38.bIsStateTagOn = param_2->bIsStateTagOn;
  local_38._9_7_ = *(undefined7 *)&param_2->field_0x9;
  local_38.AddedCharState = param_2->AddedCharState;
  local_38.RemovedCharState = param_2->RemovedCharState;
  local_38.AddedCharDetailState = param_2->AddedCharDetailState;
  local_38.RemovedCharDetailState = param_2->RemovedCharDetailState;
  local_res10 = param_1.WeakPtr;
  UDS_GameplayAbility::OnChangedCharState((UDS_GameplayAbility *)this,param_1,&local_38);
  bVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar1) {
    this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
    local_res18[0] = Interaction_NPCTalk;
    bVar1 = UDS_CharStateData::HasCharDetailState(this_00,local_res18);
    this->bIsInDialogueState = bVar1;
    if ((bVar1) && ((char)this->_padding_ == '\0')) {
      local_res20 = 0;
      local_res18[0] = CONCAT31(local_res18[0]._1_3_,0x5b);
      UDS_GameplayAbility::TryActivateAbility
                ((UDS_GameplayAbility *)this,(EDS_AbilityTagType *)local_res18,
                 (TObjectPtr<UWN_AbilityContext>)&local_res20);
    }
  }
  return;
}

// OnDeactivateAbility @ 14b83f0f0

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

void __thiscall UDS_NPCLookAtAbility::OnDeactivateAbility(UDS_NPCLookAtAbility *this,bool *param_1)

{
  double dVar1;
  uint uVar2;
  FTimerManager *this_00;
  float fVar3;
  FTimerHandle aFStackX_8 [4];
  code *pcStack_28;
  undefined8 uStack_20;
  
  uVar2 = rand();
  fVar3 = (float)(uVar2 & 0x7fff) * ___real_38c00180 + __real_40400000;
  dVar1 = UDS_TimeUtilManager::GetCurrentServerTime();
  aFStackX_8[0].Handle = 0;
  this->CooldownEndTime = dVar1 + (double)fVar3;
  this_00 = FDS_TimerManager::Get((UObject *)0x0);
  uStack_20 = (ulonglong)uStack_20._4_4_ << 0x20;
  pcStack_28 = EndCoolDown;
  FTimerManager::SetTimer<UDS_NPCLookAtAbility>
            (this_00,aFStackX_8,this,(pmf_655a5e8a *)&pcStack_28,fVar3,false,__real_bf800000);
  return;
}

// OnMainCharacterSwitchComplete @ 14b840c80

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
UDS_NPCLookAtAbility::OnMainCharacterSwitchComplete
          (UDS_NPCLookAtAbility *this,FDS_EntityBase *param_1,FDS_EntityBase *param_2)

{
  return;
}

// OnPostActivateAbility @ 14b843df0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UDS_NPCLookAtAbility::OnPostActivateAbility(UDS_NPCLookAtAbility *this)

{
  FWeakObjectPtr FVar1;
  uint uVar2;
  uint7 uStack_5f;
  FName local_38;
  longlong lStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  uVar2 = rand();
  FVar1 = (this->CharStateData).WeakPtr;
  this->LookAtDuration = (float)(uVar2 & 0x7fff) * ___real_38c00180 + __real_40400000;
  lStack_30 = (ulonglong)uStack_5f << 8;
  local_38 = FGameplayTag::EmptyTag.TagName;
  local_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  local_18 = 0;
  (**(code **)(this->_padding_ + 0x390))(this,FVar1,&local_38);
  return;
}

// OnTickComponent @ 14b848ff0

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

void __thiscall UDS_NPCLookAtAbility::OnTickComponent(UDS_NPCLookAtAbility *this,float param_1)

{
  longlong lVar1;
  bool bVar2;
  UObject *pUVar3;
  EDS_AbilityDeactivateType local_res10 [8];
  TVector<double>_u_0 local_78;
  TVector<double>_u_0 local_60;
  TVector<double> local_48 [2];
  
  UDS_GameplayAbility::OnTickComponent((UDS_GameplayAbility *)this,param_1);
  this->LookAtDuration = this->LookAtDuration - param_1;
  bVar2 = FWeakObjectPtr::IsValid(&(this->OwnerNPC).WeakPtr);
  if ((bVar2) &&
     (local_res10[0] = FWeakObjectPtr::IsValid(&(this->CharStateData).WeakPtr), (bool)local_res10[0]
     )) {
    if ((this->bIsInDialogueState != false) || (0.0 < this->LookAtDuration)) {
      pUVar3 = FWeakObjectPtr::Get(&(this->OwnerNPC).WeakPtr);
      if (*(USceneComponent **)(pUVar3 + 0xb) != (USceneComponent *)0x0) {
        USceneComponent::GetForwardVector(*(USceneComponent **)(pUVar3 + 0xb),local_48);
      }
      pUVar3 = FWeakObjectPtr::Get(&(this->OwnerNPC).WeakPtr);
      lVar1 = *(longlong *)(pUVar3 + 0xb);
      local_60._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      local_60._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      local_60._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      local_60._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      local_60._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      if (lVar1 != 0) {
        local_60._0_4_ = *(undefined4 *)(lVar1 + 0x210);
        local_60._4_4_ = *(undefined4 *)(lVar1 + 0x214);
        local_60._8_4_ = *(undefined4 *)(lVar1 + 0x218);
        local_60._12_4_ = *(undefined4 *)(lVar1 + 0x21c);
        local_60._s_0.Z = *(double *)(lVar1 + 0x220);
      }
      GetTargetLocation(this,(TVector<double> *)&local_78._s_0);
      bVar2 = DS_Util::IsCloseDist
                        ((TVector<double> *)&local_78._s_0,(TVector<double> *)&local_60._s_0,
                         &LOOK_AT_DISTANCE);
      if (!bVar2) {
        return;
      }
      pUVar3 = FWeakObjectPtr::Get(&(this->CharStateData).WeakPtr);
      if (pUVar3[6].field_0x20 != '\x01') {
        pUVar3 = FWeakObjectPtr::Get(&(this->CharStateData).WeakPtr);
        pUVar3[6].field_0x20 = 1;
      }
      pUVar3 = FWeakObjectPtr::Get(&(this->CharStateData).WeakPtr);
      *(double *)(pUVar3 + 7) = local_78._s_0.X;
      *(double *)&pUVar3[7].field_0x8 = local_78._s_0.Y;
      *(double *)&pUVar3[7].field_0x10 = local_78._s_0.Z;
      return;
    }
  }
  else {
    local_res10[0] = Cancel;
  }
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res10);
  return;
}

// StartCoolDown @ 14b851470

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

void __thiscall UDS_NPCLookAtAbility::StartCoolDown(UDS_NPCLookAtAbility *this)

{
  double dVar1;
  uint uVar2;
  FTimerManager *this_00;
  float fVar3;
  FTimerHandle local_res8 [4];
  code *local_28;
  undefined8 uStack_20;
  
  uVar2 = rand();
  fVar3 = (float)(uVar2 & 0x7fff) * ___real_38c00180 + __real_40400000;
  dVar1 = UDS_TimeUtilManager::GetCurrentServerTime();
  local_res8[0].Handle = 0;
  this->CooldownEndTime = dVar1 + (double)fVar3;
  this_00 = FDS_TimerManager::Get((UObject *)0x0);
  uStack_20 = (ulonglong)uStack_20._4_4_ << 0x20;
  local_28 = EndCoolDown;
  FTimerManager::SetTimer<UDS_NPCLookAtAbility>
            (this_00,local_res8,this,(pmf_655a5e8a *)&local_28,fVar3,false,__real_bf800000);
  return;
}

