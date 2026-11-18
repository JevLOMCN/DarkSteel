// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 20

// StaticClass @ 14b4f4000

UClass * __cdecl UDS_MountAbility_AirDash::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MountAbility_AirDash.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MountAbility_AirDash",
               &Z_Registration_Info_UClass_UDS_MountAbility_AirDash.InnerSingleton,
               StaticRegisterNativesUDS_MountAbility_AirDash,0x198,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_MountAbility_AirDash>,
               InternalVTableHelperCtorCaller<UDS_MountAbility_AirDash>,local_res8,
               UDS_MountBaseAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MountAbility_AirDash.InnerSingleton;
}

// UDS_MountAbility_AirDash @ 14b4f7980

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

UDS_MountAbility_AirDash * __thiscall
UDS_MountAbility_AirDash::UDS_MountAbility_AirDash
          (UDS_MountAbility_AirDash *this,FVTableHelper *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->ActionTimerHandle).Handle = 0;
  this->DashSkillID = 0;
  return this;
}

// UDS_MountAbility_AirDash @ 14b4f79d0

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

UDS_MountAbility_AirDash * __thiscall
UDS_MountAbility_AirDash::UDS_MountAbility_AirDash
          (UDS_MountAbility_AirDash *this,FObjectInitializer *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->ActionTimerHandle).Handle = 0;
  this->DashSkillID = 0;
  return this;
}

// ~UDS_MountAbility_AirDash @ 14b4f85b0

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

void __thiscall UDS_MountAbility_AirDash::~UDS_MountAbility_AirDash(UDS_MountAbility_AirDash *this)

{
  this->_padding_ = (longlong)&UDS_MountBaseAbility::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UDS_MountBaseAbility::_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b4f9cb0

UClass * __cdecl UDS_MountAbility_AirDash::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MountAbility_AirDash.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MountAbility_AirDash",
               &Z_Registration_Info_UClass_UDS_MountAbility_AirDash.InnerSingleton,
               StaticRegisterNativesUDS_MountAbility_AirDash,0x198,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_MountAbility_AirDash>,
               InternalVTableHelperCtorCaller<UDS_MountAbility_AirDash>,local_res8,
               UDS_MountBaseAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MountAbility_AirDash.InnerSingleton;
}

// ShouldTickComponent @ 14b4fa700

bool __thiscall UDS_MountAbility_AirDash::ShouldTickComponent(UDS_MountAbility_AirDash *this)

{
  return true;
}

// StaticRegisterNativesUDS_MountAbility_AirDash @ 14b4fa840

void __cdecl UDS_MountAbility_AirDash::StaticRegisterNativesUDS_MountAbility_AirDash(void)

{
  return;
}

// CheckCrash @ 14b8261d0

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

bool __thiscall
UDS_MountAbility_AirDash::CheckCrash(UDS_MountAbility_AirDash *this,FHitResult *param_1)

{
  bool bVar1;
  ECollisionChannel EVar2;
  longlong lVar3;
  FDS_EntityBase *pFVar4;
  UDS_MovementCore *this_00;
  AActor *pAVar5;
  UWorld *this_01;
  UObject *pUVar6;
  FCollisionShape *pFVar7;
  double dVar8;
  undefined1 auStackY_188 [32];
  EDS_StateTagType local_138 [8];
  FWeakObjectPtr local_130;
  FWeakObjectPtr local_128;
  ulong64 local_120;
  TVector<double>_u_0 local_118;
  TVector<double>_u_0 local_100;
  TQuat<double> local_e8;
  undefined1 local_c8 [16];
  FCollisionQueryParams local_b8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_138[0] = Mount_Leap;
  bVar1 = UDS_GameplayAbility::HasStateTag((UDS_GameplayAbility *)this,local_138);
  if (!bVar1) {
    local_138[0] = Mount_DisMount;
    bVar1 = UDS_GameplayAbility::HasStateTag((UDS_GameplayAbility *)this,local_138);
    if ((((!bVar1) && (lVar3 = (**(code **)(this->_padding_ + 0x180))(this), lVar3 != 0)) &&
        (local_120 = UDS_MountManager::GetMountEntityByCharEntityID(this->_padding_), local_120 != 0
        )) && (pFVar4 = FDS_EntityBase::GetEntityBase(&local_120), pFVar4 != (FDS_EntityBase *)0x0))
    {
      (**(code **)(*(longlong *)this->_padding_ + 0x160))((longlong *)this->_padding_,&local_130);
      bVar1 = FWeakObjectPtr::IsValid(&local_130);
      if (bVar1) {
        (**(code **)(pFVar4->_padding_ + 0x150))(pFVar4);
        bVar1 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)&local_128,(void *)0x0);
        if (!bVar1) {
          this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
          UDS_MovementCore::GetActorLocation(this_00,(TVector<double> *)&local_118._s_0);
          dVar8 = (double)*(float *)(this->_padding_ + 0x58);
          local_100._s_0.X = dVar8 * (this->DashDirection).field0_0x0._s_0.X + local_118._s_0.X;
          local_100._s_0.Y = dVar8 * (this->DashDirection).field0_0x0._s_0.Y + local_118._s_0.Y;
          local_100._s_0.Z = dVar8 * (this->DashDirection).field0_0x0._s_0.Z + local_118._s_0.Z;
          FCollisionQueryParams::FCollisionQueryParams(&local_b8);
          pAVar5 = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
          FCollisionQueryParams::AddIgnoredActor(&local_b8,pAVar5);
          pAVar5 = (AActor *)FWeakObjectPtr::Get(&local_128);
          FCollisionQueryParams::AddIgnoredActor(&local_b8,pAVar5);
          this_01 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
          pUVar6 = FWeakObjectPtr::Get(&local_130);
          pFVar7 = (FCollisionShape *)(**(code **)(*(longlong *)pUVar6 + 0x8b8))(pUVar6,local_c8,0);
          pUVar6 = FWeakObjectPtr::Get(&local_130);
          EVar2 = (**(code **)(*(longlong *)pUVar6 + 0x5f0))(pUVar6);
          pUVar6 = FWeakObjectPtr::Get(&local_130);
          local_e8.X = *(double *)&pUVar6[0xc].field_0x10;
          local_e8.Y = *(double *)&pUVar6[0xc].field_0x18;
          local_e8.Z = *(double *)&pUVar6[0xc].field_0x20;
          local_e8.W = *(double *)(pUVar6 + 0xd);
          bVar1 = UWorld::SweepSingleByChannel
                            (this_01,param_1,(TVector<double> *)&local_118._s_0,
                             (TVector<double> *)&local_100._s_0,&local_e8,EVar2,pFVar7,&local_b8,
                             &FCollisionResponseParams::DefaultResponseParam);
          if (local_b8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
              (ForElementType<unsigned_int>)0x0) {
            FMemory::Free((void *)local_b8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
          }
          if (local_b8.IgnoreComponents.AllocatorInstance.SecondaryData ==
              (ForElementType<unsigned_int>)0x0) {
            return bVar1;
          }
          FMemory::Free((void *)local_b8.IgnoreComponents.AllocatorInstance.SecondaryData);
          return bVar1;
        }
      }
    }
  }
  return false;
}

// EndCoolDown @ 14b82d350

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

void __thiscall UDS_MountAbility_AirDash::EndCoolDown(UDS_MountAbility_AirDash *this)

{
  EDS_AbilityDeactivateType local_res10 [24];
  
  local_res10[0] = Success;
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res10);
  return;
}

// InitOtherAbilityEventSubscriptions @ 14b834aa0

void __thiscall
UDS_MountAbility_AirDash::InitOtherAbilityEventSubscriptions(UDS_MountAbility_AirDash *this)

{
  FGameplayTag *pFVar1;
  EDS_AbilityTagType local_res8 [32];
  
  local_res8[0] = Skill_ActiveSkill;
  pFVar1 = FDS_GameplayTags::GetAbilityTag(local_res8);
  FGameplayTagContainer::AddTag((FGameplayTagContainer *)&this->_padding_,pFVar1);
  return;
}

// OnAbilityRetryActivate @ 14b837910

void __thiscall UDS_MountAbility_AirDash::OnAbilityRetryActivate(UDS_MountAbility_AirDash *this)

{
  return;
}

// OnActivateSkill @ 14b837d10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_MountAbility_AirDash::OnActivateSkill
          (UDS_MountAbility_AirDash *this,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> param_1,
          bool param_2,ulong64 param_3)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  UObject *pUVar4;
  FWeakObjectPtr local_res10;
  undefined1 auStackY_178 [32];
  uint uVar5;
  wchar_t *pwVar6;
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  if (param_2) {
    return;
  }
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (param_3 != this->_padding_) {
    return;
  }
  local_res10 = param_1.WeakPtr;
  bVar1 = TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> *)&local_res10,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_MountAbility_AirDash::OnActivateSkill",0x29,Yes);
    pwVar6 = L"InSkillData is nullptr.";
    uVar5 = 0x188;
  }
  else {
    UDS_SkillData::GetData((ulong64)local_148,this->_padding_,SUB41(this->DashSkillID,0));
    bVar1 = TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> *)local_148,(void *)0x0);
    if (!bVar1) {
      pUVar3 = FWeakObjectPtr::Get(&local_res10);
      pUVar4 = FWeakObjectPtr::Get(local_148);
      if (*(int *)&pUVar3[2].field_0x1c != *(int *)&pUVar4[2].field_0x1c) {
        return;
      }
      UDS_MountAbility_DisMount::TryActivate(param_3,false);
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_MountAbility_AirDash::OnActivateSkill",0x29,Yes);
    pwVar6 = L"skillData is nullptr.";
    uVar5 = 399;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar5,pwVar6);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// OnCanActivate @ 14b838050

bool __thiscall UDS_MountAbility_AirDash::OnCanActivate(UDS_MountAbility_AirDash *this)

{
  bool bVar1;
  
  bVar1 = UDS_MountBaseAbility::OnCanActivate((UDS_MountBaseAbility *)this);
  return bVar1;
}

// OnChangedMountStepInfo @ 14b83c950

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
UDS_MountAbility_AirDash::OnChangedMountStepInfo
          (UDS_MountAbility_AirDash *this,FDS_MountStepInfo *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UDS_MountManager *this_00;
  TArray<EDS_MountStep,TSizedDefaultAllocator<32>_> *pTVar5;
  FScriptContainerElement *pFVar6;
  undefined1 auStackY_198 [32];
  EDS_AbilityDeactivateType local_168 [8];
  FWeakObjectPtr local_160;
  UDS_MountManager *local_158 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_158[0] = UDS_MountManager::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_158[0] != (UDS_MountManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_158[0]);
  }
  local_160.ObjectIndex = 0;
  local_160.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_158[0] != (UDS_MountManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_158[0]);
  }
  FWeakObjectPtr::operator=(&local_160,(FObjectPtr)local_158);
  bVar3 = TWeakObjectPtr<UDS_MountManager,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MountManager,FWeakObjectPtr> *)&local_160,(void *)0x0);
  if (bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_MountAbility_AirDash::OnChangedMountStepInfo",0x30,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_148.Ptr,0x108,L"mountmanager is nullptr.");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    this_00 = (UDS_MountManager *)FWeakObjectPtr::Get(&local_160);
    pTVar5 = UDS_MountManager::GetMountStepArrayByAbilityTag(this_00,Mount_Dash);
    pFVar6 = (pTVar5->AllocatorInstance).Data;
    iVar2 = pTVar5->ArrayNum;
    pFVar1 = pFVar6 + iVar2;
    while( true ) {
      if (pTVar5->ArrayNum != iVar2) {
        `TCheckedPointerIterator<enum_EDS_MountStep_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_168);
      }
      if (pFVar6 == pFVar1) {
        return;
      }
      if (((FScriptContainerElement)param_1->MountStep == *pFVar6) && (param_1->IsEnable == false))
      break;
      pFVar6 = pFVar6 + 1;
    }
    local_168[0] = Success;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_168);
  }
  return;
}

// OnDashRotate @ 14b83da00

bool __thiscall UDS_MountAbility_AirDash::OnDashRotate(UDS_MountAbility_AirDash *this,float param_1)

{
  UDS_MovementCore *this_00;
  UObject *pUVar1;
  float fVar2;
  TRotator<double> local_78;
  TRotator<double> local_60;
  TRotator<double> local_48;
  TRotator<double> local_30;
  
  fVar2 = param_1 + this->CurrentDashRotateTime;
  this->CurrentDashRotateTime = fVar2;
  if ((this->DashRotateTime != 0.0) && (fVar2 / this->DashRotateTime < __real_3f800000)) {
    this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_MovementCore::GetActorRotation(this_00,&local_48);
    UE::Math::TVector<double>::ToOrientationRotator(&this->DashDirection,&local_60);
    local_78.Yaw = local_60.Yaw;
    local_78.Pitch = 0.0;
    local_78.Roll = 0.0;
    pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    fVar2 = (float)(**(code **)(*(longlong *)&pUVar1[0x29].field_0x10 + 0x158))();
    FMath::RInterpTo(&local_30,&local_48,&local_78,param_1,fVar2);
    pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    (**(code **)(*(longlong *)pUVar1 + 0x370))(pUVar1,&local_30);
    return true;
  }
  return false;
}

// OnDeactivateAbility @ 14b83ded0

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
UDS_MountAbility_AirDash::OnDeactivateAbility(UDS_MountAbility_AirDash *this,bool *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement FVar2;
  int iVar3;
  bool bVar4;
  FGameplayTag *pFVar5;
  UDS_MountManager *pUVar6;
  UDS_LogManager *pUVar7;
  TArray<EDS_MountStep,TSizedDefaultAllocator<32>_> *pTVar8;
  UDS_MountAbilityData *this_00;
  FTimerManager *this_01;
  FTimerData *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 auStackY_1a8 [32];
  EDS_StateTagType local_178 [8];
  FWeakObjectPtr local_170;
  UDS_MountManager *local_168;
  FWeakObjectPtr local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_170.ObjectIndex = 0;
  local_170.ObjectSerialNumber = 0;
  local_168 = (UDS_MountManager *)0x0;
  FWeakObjectPtr::operator=(&local_170,(FObjectPtr)&local_168);
  local_178[0] = Mount_Dash;
  pFVar5 = FDS_GameplayTags::GetStateTag(local_178);
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,pFVar5);
  local_170.ObjectIndex = 0;
  local_170.ObjectSerialNumber = 0;
  local_168 = (UDS_MountManager *)0x0;
  FWeakObjectPtr::operator=(&local_170,(FObjectPtr)&local_168);
  local_178[0] = Mount_DashSkill;
  pFVar5 = FDS_GameplayTags::GetStateTag(local_178);
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,pFVar5);
  pUVar6 = UDS_MountManager::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UDS_MountManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  local_160.ObjectIndex = 0;
  local_160.ObjectSerialNumber = 0;
  local_168 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UDS_MountManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  FWeakObjectPtr::operator=(&local_160,(FObjectPtr)&local_168);
  bVar4 = TWeakObjectPtr<UDS_MountManager,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MountManager,FWeakObjectPtr> *)&local_160,(void *)0x0);
  if (bVar4) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_MountAbility_AirDash::OnDeactivateAbility",0x2d,Yes);
      UDS_LogManager::PrintLog(pUVar7,1,Warning,local_158.Ptr,0x94,L"mountmanager is nullptr.");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  else {
    pUVar6 = (UDS_MountManager *)FWeakObjectPtr::Get(&local_160);
    pTVar8 = UDS_MountManager::GetMountStepArrayByAbilityTag(pUVar6,Mount_Dash);
    pFVar10 = (pTVar8->AllocatorInstance).Data;
    iVar3 = pTVar8->ArrayNum;
    pFVar1 = pFVar10 + iVar3;
    while( true ) {
      if (pTVar8->ArrayNum != iVar3) {
        `TCheckedPointerIterator<enum_EDS_MountStep_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_178);
      }
      if (pFVar10 == pFVar1) break;
      FVar2 = *pFVar10;
      this_00 = (UDS_MountAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      UDS_MountAbilityData::DeActivateStep(this_00,(EDS_MountStep)FVar2);
      pFVar10 = pFVar10 + 1;
    }
    this_01 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar9 = FTimerManager::FindTimer(this_01,&this->ActionTimerHandle);
    if (pFVar9 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(this_01,(FTimerHandle)(this->ActionTimerHandle).Handle);
    }
    (this->ActionTimerHandle).Handle = 0;
  }
  return;
}

// OnDeactivatedOtherAbility @ 14b840280

void __thiscall
UDS_MountAbility_AirDash::OnDeactivatedOtherAbility
          (UDS_MountAbility_AirDash *this,FGameplayTag *param_1,bool *param_2)

{
  FName *pFVar1;
  EDS_AbilityTagType local_res20 [8];
  
  local_res20[0] = Skill_ActiveSkill;
  pFVar1 = &FDS_GameplayTags::GetAbilityTag(local_res20)->TagName;
  if ((*pFVar1 != (FName)0x0) && (param_1->TagName == *pFVar1)) {
    UDS_MountAbility_DisMount::TryActivate(this->_padding_,false);
  }
  return;
}

// OnPostActivateAbility @ 14b8415b0

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

void __thiscall UDS_MountAbility_AirDash::OnPostActivateAbility(UDS_MountAbility_AirDash *this)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement FVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  ADS_MainCharacter *this_00;
  TWeakObjectPtr<UDS_MainCameraComponent,FWeakObjectPtr> this_01;
  UDS_MainCameraComponent *this_02;
  UDS_MountDataSet *this_03;
  UObject *pUVar7;
  TVector<double> *pTVar8;
  FTimerManager *pFVar9;
  UDS_LogManager *pUVar10;
  UDS_MountManager *this_04;
  TArray<EDS_MountStep,TSizedDefaultAllocator<32>_> *pTVar11;
  UDS_MountAbilityData *this_05;
  UDS_MountEvent *pUVar12;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_06;
  FGameplayTag *pFVar13;
  FScriptContainerElement *pFVar14;
  float fVar15;
  undefined1 auStackY_268 [32];
  EDS_AbilityDeactivateType local_228 [5];
  FScriptContainerElement local_223;
  EDS_StateTagType local_222;
  undefined1 local_221;
  undefined1 local_220 [8];
  FWeakObjectPtr local_218;
  FWeakObjectPtr local_210;
  FDS_MountBaseTableRow *local_208;
  FWeakObjectPtr local_200;
  FWeakObjectPtr local_1f8;
  FWeakObjectPtr local_1f0;
  UDS_MountManager *local_1e8;
  undefined8 local_1e0;
  code *local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined1 local_1c8 [24];
  double dStack_1b0;
  double local_1a8;
  code *local_198;
  longlong lStack_190;
  code *local_188;
  longlong lStack_180;
  TVector<double> local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_268;
  this_00 = (ADS_MainCharacter *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  this_01 = ADS_MainCharacter::GetFollowCamera(this_00);
  local_208 = (FDS_MountBaseTableRow *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_01.WeakPtr);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_208 != (FDS_MountBaseTableRow *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_208);
  }
  local_218.ObjectIndex = 0;
  local_218.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_208 != (FDS_MountBaseTableRow *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_208);
  }
  FWeakObjectPtr::operator=(&local_218,(FObjectPtr)&local_208);
  bVar5 = FWeakObjectPtr::IsValid(&local_218);
  if (bVar5) {
    this_02 = (UDS_MainCameraComponent *)FWeakObjectPtr::Get(&local_218);
    UDS_MainCameraComponent::GetNowCameraState(this_02);
    bVar5 = FWeakObjectPtr::IsValid(&local_1f8);
    if (bVar5) {
      TDS_DataSetGetter<UDS_MountDataSet>::Get((ulong64)&local_200);
      bVar5 = TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr> *)&local_200,(void *)0x0);
      if (bVar5) {
        local_228[2] = 2;
        UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_228 + 2);
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_688302585454526399>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_MountAbility_AirDash.cpp"
                           ,0x41,"false");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else {
        this_03 = (UDS_MountDataSet *)FWeakObjectPtr::Get(&local_200);
        iVar6 = UDS_MountDataSet::GetMountID(this_03);
        if (iVar6 == 0) {
          local_228[3] = 2;
          UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_228 + 3);
        }
        else {
          local_208 = FDS_MountBaseTableRow::GetRef((longlong)iVar6,true);
          this->DashSkillID = local_208->DashSkill;
          this->AirSprintSpeed = local_208->AirSprintSpeed;
          local_1c8._16_8_ = ADS_CameraManager::CameraRotation.Pitch;
          dStack_1b0 = ADS_CameraManager::CameraRotation.Yaw;
          local_1a8 = ADS_CameraManager::CameraRotation.Roll;
          pUVar7 = FWeakObjectPtr::Get(&local_1f8);
          local_1c8._16_8_ =
               (double)local_1c8._16_8_ +
               (double)(float)(*(uint *)&pUVar7[1].field_0x20 ^
                              __xmm_80000000800000008000000080000000);
          pTVar8 = UE::Math::TRotator<double>::Vector
                             ((TRotator<double> *)(local_1c8 + 0x10),&local_178);
          dVar4 = (pTVar8->field0_0x0)._s_0.Y;
          (this->DashDirection).field0_0x0._s_0.X = (pTVar8->field0_0x0)._s_0.X;
          (this->DashDirection).field0_0x0._s_0.Y = dVar4;
          (this->DashDirection).field0_0x0._s_0.Z = (pTVar8->field0_0x0)._s_0.Z;
          bVar5 = UE::Math::TVector<double>::IsNearlyZero
                            (&this->DashDirection,__real_3f1a36e2e0000000);
          if (bVar5) {
            local_228[4] = 2;
            UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_228 + 4);
          }
          else {
            if ((this->ActionTimerHandle).Handle != 0) {
              pFVar9 = FDS_TimerManager::Get((UObject *)0x0);
              FTimerManager::ClearTimer(pFVar9,&this->ActionTimerHandle);
              (this->ActionTimerHandle).Handle = 0;
            }
            bVar5 = TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr>::UEOpEquals
                              ((TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr> *)
                               &this->_padding_,(void *)0x0);
            if (!bVar5) {
              local_1e8 = UDS_MountManager::GetInst();
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (local_1e8 != (UDS_MountManager *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)local_1e8);
              }
              local_210.ObjectIndex = 0;
              local_210.ObjectSerialNumber = 0;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (local_1e8 != (UDS_MountManager *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)local_1e8);
              }
              FWeakObjectPtr::operator=(&local_210,(FObjectPtr)&local_1e8);
              bVar5 = TWeakObjectPtr<UDS_MountManager,FWeakObjectPtr>::UEOpEquals
                                ((TWeakObjectPtr<UDS_MountManager,FWeakObjectPtr> *)&local_210,
                                 (void *)0x0);
              if (bVar5) {
                pUVar10 = UDS_LogManager::GetInst();
                if (pUVar10 != (UDS_LogManager *)0x0) {
                  pUVar10 = UDS_LogManager::GetInst();
                  local_158._padding_ = 0;
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&local_158,"UDS_MountAbility_AirDash::OnPostActivateAbility",0x2f,Yes);
                  UDS_LogManager::PrintLog
                            (pUVar10,1,Warning,local_158.Ptr,0x69,L"mountmanager is nullptr.");
                  if ((void *)local_158._padding_ != (void *)0x0) {
                    FMemory::Free((void *)local_158._padding_);
                  }
                }
              }
              else {
                this_04 = (UDS_MountManager *)FWeakObjectPtr::Get(&local_210);
                pTVar11 = UDS_MountManager::GetMountStepArrayByAbilityTag(this_04,Mount_Dash);
                pFVar14 = (pTVar11->AllocatorInstance).Data;
                iVar6 = pTVar11->ArrayNum;
                pFVar1 = pFVar14 + iVar6;
                while( true ) {
                  if (pTVar11->ArrayNum != iVar6) {
                    `TCheckedPointerIterator<enum_EDS_MountStep_const_,int,0>::operator!='::__l2::
                    <lambda_1>::operator()(&local_221);
                  }
                  if (pFVar14 == pFVar1) break;
                  FVar2 = *pFVar14;
                  this_05 = (UDS_MountAbilityData *)
                            FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
                  UDS_MountAbilityData::ActivateStep(this_05,(EDS_MountStep)FVar2);
                  pFVar14 = pFVar14 + 1;
                }
                if ((*(char *)((longlong)&this->_padding_ + 1) == '\x01') &&
                   (pUVar12 = UDS_MountEvent::GetEvent(), pUVar12 != (UDS_MountEvent *)0x0)) {
                  FDS_FilteredEventDelegate<enum_EDS_MountStep_const_,FDS_MountStepInfo_const_&>::
                  Remove<UDS_MountAbility_AirDash>(&pUVar12->OnChangedMountStep_Filtered,this);
                  pFVar14 = (pTVar11->AllocatorInstance).Data;
                  iVar6 = pTVar11->ArrayNum;
                  pFVar1 = pFVar14 + iVar6;
                  while( true ) {
                    if (pTVar11->ArrayNum != iVar6) {
                      `TCheckedPointerIterator<enum_EDS_MountStep_const_,int,0>::operator!='::__l2::
                      <lambda_1>::operator()(local_220);
                    }
                    if (pFVar14 == pFVar1) break;
                    local_223 = *pFVar14;
                    local_1d8 = OnChangedMountStepInfo;
                    uStack_1d0 = 0;
                    this_06 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
                              TMapBase<enum_EDS_MountStep_const_,TMulticastDelegate<void___cdecl(FDS_MountStepInfo_const_&),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_MountStep_const_,TMulticastDelegate<void___cdecl(FDS_MountStepInfo_const_&),FDefaultTSDelegateUserPolicy>,0>_>
                              ::FindOrAddImpl<enum_EDS_MountStep_const_&>
                                        (&(pUVar12->OnChangedMountStep_Filtered).Subscriptions,
                                         (uint)(byte)local_223,(EDS_MountStep *)&local_223);
                    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(this_06,this);
                    lStack_190 = CONCAT44(uStack_1cc,uStack_1d0);
                    local_198 = local_1d8;
                    TMulticastDelegateRegistration<void___cdecl(FDS_MountStepInfo_const_&),FDefaultTSDelegateUserPolicy>
                    ::AddUObject<UDS_MountAbility_AirDash>
                              ((TMulticastDelegateRegistration<void___cdecl(FDS_MountStepInfo_const_&),FDefaultTSDelegateUserPolicy>
                                *)this_06,(UDS_MountAbility_AirDash *)local_1c8,(pmf_bc4271dd *)this
                              );
                    pFVar14 = pFVar14 + 1;
                  }
                }
                pFVar9 = FDS_TimerManager::Get((UObject *)0x0);
                local_1c8._0_8_ = EndCoolDown;
                local_1c8._8_4_ = 0;
                lStack_180 = (ulonglong)(uint)local_1c8._12_4_ << 0x20;
                local_188 = EndCoolDown;
                FTimerManager::SetTimer<UDS_MountAbility_AirDash>
                          (pFVar9,&this->ActionTimerHandle,this,(pmf_c7382653 *)&local_188,
                           local_208->DashTime,false,__real_bf800000);
                fVar15 = DS_CommonDataHelper::MountDashRotationTime();
                this->DashRotateTime = fVar15;
                this->CurrentDashRotateTime = 0.0;
                local_1f0.ObjectIndex = 0;
                local_1f0.ObjectSerialNumber = 0;
                local_1e0 = 0;
                FWeakObjectPtr::operator=(&local_1f0,(FObjectPtr)&local_1e0);
                local_222 = Mount_Dash;
                pFVar13 = FDS_GameplayTags::GetStateTag(&local_222);
                UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,pFVar13);
              }
            }
          }
        }
      }
    }
    else {
      local_228[1] = 2;
      UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_228 + 1);
    }
  }
  else {
    local_228[0] = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_228);
  }
  return;
}

// OnTickComponent @ 14b8476d0

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
UDS_MountAbility_AirDash::OnTickComponent(UDS_MountAbility_AirDash *this,float param_1)

{
  undefined8 uVar1;
  bool bVar2;
  UObject *pUVar3;
  FWeakObjectPtr FVar4;
  FTimerManager *this_00;
  UDS_NPCMountAbilityContext *pUVar5;
  FName *pFVar6;
  FGameplayTag *pFVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  double dVar11;
  undefined8 uVar12;
  double local_res18;
  FWeakObjectPtr local_res20;
  UDS_NPCMountAbilityContext *local_168 [3];
  undefined8 local_150;
  undefined4 uStack_148;
  undefined1 uStack_144;
  undefined2 uStack_143;
  undefined1 uStack_141;
  undefined1 local_138 [96];
  double dStack_d8;
  double local_d0;
  int local_94;
  FWeakObjectPtr local_80;
  FWeakObjectPtr FStack_78;
  IActorInstanceManagerInterface *local_70;
  undefined8 uStack_68;
  
  UDS_GameplayAbility::OnTickComponent((UDS_GameplayAbility *)this,param_1);
  memset(local_138,0,0x100);
  uStack_148 = 0xffffffff;
  uStack_143 = 0;
  local_80.ObjectIndex = 0;
  local_80.ObjectSerialNumber = 0;
  FStack_78.ObjectIndex = 0;
  FStack_78.ObjectSerialNumber = 0;
  uStack_141 = 0;
  local_150 = 0;
  uStack_144 = 0;
  uStack_68._0_4_ = -1;
  uStack_68._4_1_ = Invalid;
  uStack_68._5_3_ = 0;
  local_138._4_4_ = 1.0;
  local_94 = -1;
  local_70 = (IActorInstanceManagerInterface *)0x0;
  bVar2 = CheckCrash(this,(FHitResult *)local_138);
  if (bVar2) {
    dVar11 = dStack_d8 * dStack_d8 + (double)local_138._88_8_ * (double)local_138._88_8_ +
             local_d0 * local_d0;
    uVar10 = dStack_d8;
    uVar12 = local_d0;
    uVar1 = local_138._88_8_;
    if ((dVar11 != __real_3ff0000000000000) &&
       (uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
       uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
       uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
       __real_3e45798ee0000000 <= dVar11)) {
      local_res18 = __real_3ff0000000000000 / SQRT(dVar11);
      uVar10 = dStack_d8 * local_res18;
      uVar12 = local_d0 * local_res18;
      uVar1 = (double)local_138._88_8_ * local_res18;
    }
    dVar11 = (double)uVar10 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y +
             (double)uVar1 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X +
             (double)uVar12 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
    if (__real_3ff0000000000000 <= dVar11) {
      dVar11 = __real_3ff0000000000000;
    }
    if (dVar11 <= __real_bff0000000000000) {
      dVar11 = __real_bff0000000000000;
    }
    fVar8 = (float)dVar11;
    fVar9 = __real_bf800000;
    if ((__real_bf800000 <= fVar8) && (fVar9 = fVar8, __real_3f800000 <= fVar8)) {
      fVar9 = __real_3f800000;
    }
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    fVar9 = acosf(fVar9);
    fVar9 = fVar9 * __real_42652ee0;
    fVar8 = (float)(**(code **)(*(longlong *)pUVar3 + 0x480))(pUVar3);
    if (fVar9 <= fVar8) {
      if (this->DashSkillID < 1) {
        local_res18 = (double)CONCAT71(local_res18._1_7_,1);
        UDS_GameplayAbility::DeactivateAbility
                  ((UDS_GameplayAbility *)this,(EDS_AbilityDeactivateType *)&local_res18);
        return;
      }
      pUVar3 = GetTransientPackageAsObject();
      FVar4 = (FWeakObjectPtr)NewObject<UDS_SkillAbilityContext>(pUVar3);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar4 != (FWeakObjectPtr)0x0)) {
        UE::GC::MarkAsReachable((UObject *)FVar4);
      }
      *(int *)((longlong)FVar4 + 0x28) = this->DashSkillID;
      local_res18._0_1_ = 1;
      local_res20.ObjectIndex._0_1_ = 0x4e;
      UDS_GameplayAbility::DeactivateAbility
                ((UDS_GameplayAbility *)this,(EDS_AbilityTagType *)&local_res20,
                 (EDS_AbilityDeactivateType *)&local_res18);
      local_res18 = (double)CONCAT71(local_res18._1_7_,0x75);
      bVar2 = UDS_GameplayAbility::HasStateTag
                        ((UDS_GameplayAbility *)this,(EDS_StateTagType *)&local_res18);
      if (bVar2) {
        return;
      }
      this_00 = FDS_TimerManager::Get((UObject *)0x0);
      FTimerManager::ClearTimer(this_00,&this->ActionTimerHandle);
      (this->ActionTimerHandle).Handle = 0;
      pUVar3 = GetTransientPackageAsObject();
      pUVar5 = NewObject<UDS_NPCMountAbilityContext>(pUVar3);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar5 != (UDS_NPCMountAbilityContext *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      local_res18 = (double)CONCAT71(local_res18._1_7_,0x75);
      pFVar6 = &FDS_GameplayTags::GetStateTag((EDS_StateTagType *)&local_res18)->TagName;
      (pUVar5->AbilityTag).TagName = *pFVar6;
      pUVar5->IsAdd = true;
      pUVar5->OwnerEntityID = this->_padding_;
      pUVar5->DashSkillID = this->DashSkillID;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (UE::GC::MarkAsReachable((UObject *)pUVar5),
         UE::GC::GIsIncrementalReachabilityPending != false)) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      local_res20.ObjectIndex = 0;
      local_res20.ObjectSerialNumber = 0;
      local_168[0] = pUVar5;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)local_168);
      local_res18._0_1_ = 0x75;
      pFVar7 = FDS_GameplayTags::GetStateTag((EDS_StateTagType *)&local_res18);
      UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,pFVar7);
      local_res20.ObjectIndex = 0;
      local_res20.ObjectSerialNumber = 0;
      local_168[0] = (UDS_NPCMountAbilityContext *)0x0;
      FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)local_168);
      local_res18 = (double)CONCAT71(local_res18._1_7_,0x74);
      pFVar7 = FDS_GameplayTags::GetStateTag((EDS_StateTagType *)&local_res18);
      UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,pFVar7);
      local_res20 = FVar4;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)FVar4);
      }
      local_res18 = (double)CONCAT71(local_res18._1_7_,0x11);
      UDS_GameplayAbility::TryActivateAbility
                ((UDS_GameplayAbility *)this,(EDS_AbilityTagType *)&local_res18,
                 (TObjectPtr<UWN_AbilityContext>)&local_res20);
      return;
    }
    local_res18 = (double)CONCAT71(local_res18._1_7_,1);
    UDS_GameplayAbility::DeactivateAbility
              ((UDS_GameplayAbility *)this,(EDS_AbilityDeactivateType *)&local_res18);
  }
  UpdateMountMovement(this,param_1);
  return;
}

// UpdateMountMovement @ 14b858920

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
UDS_MountAbility_AirDash::UpdateMountMovement(UDS_MountAbility_AirDash *this,float param_1)

{
  TVector<double> *this_00;
  undefined8 uVar1;
  double dVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  UDS_MovementCore *pUVar5;
  UObject *pUVar6;
  UDS_MountAbilityData *this_01;
  TRotator<double> *pTVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  undefined4 in_XMM1_Db;
  double dVar11;
  EDS_AbilityDeactivateType local_res18 [8];
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_90;
  TRotator<double> local_78;
  TRotator<double> local_60;
  TRotator<double> local_48 [2];
  
  local_res18[0] = 0x75;
  bVar4 = UDS_GameplayAbility::HasStateTag((UDS_GameplayAbility *)this,local_res18);
  if (!bVar4) {
    this_00 = &this->DashDirection;
    uVar8 = (uint)*(undefined8 *)&this_00->field0_0x0 & (uint)__xmm_7fffffffffffffff7fffffffffffffff
    ;
    uVar9 = (uint)((ulonglong)*(undefined8 *)&this_00->field0_0x0 >> 0x20) &
            __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if (((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar9,uVar8) &&
          (double)CONCAT44(uVar9,uVar8) != __real_3f1a36e2e0000000) ||
        (uVar1 = *(undefined8 *)((longlong)&(this->DashDirection).field0_0x0 + 8),
        uVar8 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar9 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar9,uVar8) &&
        (double)CONCAT44(uVar9,uVar8) != __real_3f1a36e2e0000000)) ||
       (uVar1 = *(undefined8 *)((longlong)&(this->DashDirection).field0_0x0 + 0x10),
       uVar8 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar9 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar9,uVar8) &&
       (double)CONCAT44(uVar9,uVar8) != __real_3f1a36e2e0000000)) {
      fVar10 = param_1 + this->CurrentDashRotateTime;
      this->CurrentDashRotateTime = fVar10;
      if ((this->DashRotateTime == 0.0) || (__real_3f800000 <= fVar10 / this->DashRotateTime)) {
        dVar2 = (this->DashDirection).field0_0x0._s_0.Z * __real_4056800000000000;
        pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        *(float *)&pUVar6[0xb].field_0xc = (float)dVar2;
        pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        dVar11 = (double)this->AirSprintSpeed;
        dVar2 = (this->DashDirection).field0_0x0._s_0.Y * dVar11;
        local_a8._s_0.Z = dVar11 * (this->DashDirection).field0_0x0._s_0.Z;
        local_a8._8_4_ = SUB84(dVar2,0);
        local_a8._s_0.X = (this_00->field0_0x0)._s_0.X * dVar11;
        local_a8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
        (**(code **)(*(longlong *)pUVar6 + 0x2c8))(pUVar6,&local_a8,CONCAT44(in_XMM1_Db,param_1),1);
        this_01 = (UDS_MountAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        dVar11 = (double)this->AirSprintSpeed;
        dVar2 = (this->DashDirection).field0_0x0._s_0.Y * dVar11;
        local_a8._s_0.Z = dVar11 * (this->DashDirection).field0_0x0._s_0.Z;
        local_a8._8_4_ = SUB84(dVar2,0);
        local_a8._s_0.X = (this_00->field0_0x0)._s_0.X * dVar11;
        local_a8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
        UDS_MountAbilityData::SetLastMoveVector(this_01,(TVector<double> *)&local_a8._s_0);
        pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        (**(code **)(*(longlong *)pUVar6 + 0x458))(pUVar6,&local_90);
        if ((local_90._s_0.X != UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X) ||
           ((local_90._s_0.Y != UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y ||
            (local_90._s_0.Z != UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z)))) {
          UE::Math::TVector<double>::ToOrientationRotator
                    ((TVector<double> *)&local_90._s_0,&local_78);
          local_a8._s_0.X = 0.0;
          local_a8._s_0.Z = 0.0;
          pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
          fVar10 = (float)(**(code **)(*(longlong *)&pUVar6[0x29].field_0x10 + 0x158))();
          pUVar5 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
          pTVar7 = UDS_MovementCore::GetActorRotation(pUVar5,&local_78);
          pTVar7 = FMath::RInterpTo(&local_60,pTVar7,(TRotator<double> *)&local_a8._s_0,param_1,
                                    fVar10);
          local_a8._s_0.X = pTVar7->Pitch;
          local_a8._8_8_ = pTVar7->Yaw;
          local_a8._s_0.Z = pTVar7->Roll;
          pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
          (**(code **)(*(longlong *)pUVar6 + 0x370))(pUVar6,&local_a8);
        }
      }
      else {
        pUVar5 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        UDS_MovementCore::GetActorRotation(pUVar5,&local_60);
        UE::Math::TVector<double>::ToOrientationRotator(this_00,local_48);
        auVar3._8_8_ = 0;
        auVar3._0_8_ = local_48[0].Yaw;
        local_a8._0_16_ = auVar3 << 0x40;
        local_a8._s_0.Z = 0.0;
        pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        fVar10 = (float)(**(code **)(*(longlong *)&pUVar6[0x29].field_0x10 + 0x158))();
        FMath::RInterpTo(&local_78,&local_60,(TRotator<double> *)&local_a8._s_0,param_1,fVar10);
        pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        (**(code **)(*(longlong *)pUVar6 + 0x370))(pUVar6,&local_78);
      }
    }
    else {
      local_res18[0] = Cancel;
      UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res18);
    }
  }
  return;
}

