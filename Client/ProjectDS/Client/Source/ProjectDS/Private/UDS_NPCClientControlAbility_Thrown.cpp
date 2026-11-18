// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// StaticClass @ 14b5355e0

UClass * __cdecl UDS_NPCClientControlAbility_Thrown::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NPCClientControlAbility_Thrown.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NPCClientControlAbility_Thrown",
               &Z_Registration_Info_UClass_UDS_NPCClientControlAbility_Thrown.InnerSingleton,
               StaticRegisterNativesUDS_NPCClientControlAbility_Thrown,0x168,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_NPCClientControlAbility_Thrown>,
               InternalVTableHelperCtorCaller<UDS_NPCClientControlAbility_Thrown>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NPCClientControlAbility_Thrown.InnerSingleton;
}

// UDS_NPCClientControlAbility_Thrown @ 14b5389d0

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

UDS_NPCClientControlAbility_Thrown * __thiscall
UDS_NPCClientControlAbility_Thrown::UDS_NPCClientControlAbility_Thrown
          (UDS_NPCClientControlAbility_Thrown *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->NPCClientControlAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->NPCClientControlAbilityData).WeakPtr,(FObjectPtr)&local_res8);
  this->ElapsedTime = 0.0;
  return this;
}

// UDS_NPCClientControlAbility_Thrown @ 14b538a30

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

UDS_NPCClientControlAbility_Thrown * __thiscall
UDS_NPCClientControlAbility_Thrown::UDS_NPCClientControlAbility_Thrown
          (UDS_NPCClientControlAbility_Thrown *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->NPCClientControlAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->NPCClientControlAbilityData).WeakPtr,(FObjectPtr)&local_res8);
  this->ElapsedTime = 0.0;
  return this;
}

// ~UDS_NPCClientControlAbility_Thrown @ 14b539000

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
UDS_NPCClientControlAbility_Thrown::~UDS_NPCClientControlAbility_Thrown
          (UDS_NPCClientControlAbility_Thrown *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b53a750

UClass * __cdecl UDS_NPCClientControlAbility_Thrown::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NPCClientControlAbility_Thrown.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NPCClientControlAbility_Thrown",
               &Z_Registration_Info_UClass_UDS_NPCClientControlAbility_Thrown.InnerSingleton,
               StaticRegisterNativesUDS_NPCClientControlAbility_Thrown,0x168,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_NPCClientControlAbility_Thrown>,
               InternalVTableHelperCtorCaller<UDS_NPCClientControlAbility_Thrown>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NPCClientControlAbility_Thrown.InnerSingleton;
}

// ShouldTickComponent @ 14b53a8f0

bool __thiscall
UDS_NPCClientControlAbility_Thrown::ShouldTickComponent(UDS_NPCClientControlAbility_Thrown *this)

{
  return true;
}

// StaticRegisterNativesUDS_NPCClientControlAbility_Thrown @ 14b53a9d0

void __cdecl
UDS_NPCClientControlAbility_Thrown::StaticRegisterNativesUDS_NPCClientControlAbility_Thrown(void)

{
  return;
}

// OnCanActivate @ 14b839140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_NPCClientControlAbility_Thrown::OnCanActivate(UDS_NPCClientControlAbility_Thrown *this)

{
  bool bVar1;
  TWeakObjectPtr<UDS_NPCClientControlAbilityData_Thrown,FWeakObjectPtr> TVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_178 [32];
  ulong64 local_144;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar1 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  if (bVar1) {
    bVar1 = TWeakObjectPtr<UDS_NPCClientControlAbilityData_Thrown,FWeakObjectPtr>::UEOpEquals
                      (&this->NPCClientControlAbilityData,(void *)0x0);
    if (bVar1) {
      TVar2 = UDS_AbilityDataSet::GetAbilityData<UDS_NPCClientControlAbilityData_Thrown>
                        (&local_144,(EDS_AbilityTagType *)&this->_padding_);
                    /* WARNING: Load size is inaccurate */
      (this->NPCClientControlAbilityData).WeakPtr = *TVar2.WeakPtr;
    }
    bVar1 = TWeakObjectPtr<UDS_NPCClientControlAbilityData_Thrown,FWeakObjectPtr>::UEOpEquals
                      (&this->NPCClientControlAbilityData,(void *)0x0);
    if (!bVar1) {
      return true;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_NPCClientControlAbility_Thrown::OnCanActivate",0x31,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0x20,L"NPCClientControlAbilityData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return false;
}

// OnDeactivateAbility @ 14b83f090

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
UDS_NPCClientControlAbility_Thrown::OnDeactivateAbility
          (UDS_NPCClientControlAbility_Thrown *this,bool *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  EDS_StateTagType local_res8 [32];
  
  local_res8[0] = NPCClientControl_Thrown;
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  bVar1 = TWeakObjectPtr<UDS_NPCClientControlAbilityData_Thrown,FWeakObjectPtr>::UEOpEquals
                    (&this->NPCClientControlAbilityData,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->NPCClientControlAbilityData).WeakPtr);
                    /* WARNING: Could not recover jumptable at 0x00014b83f0d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 0x2c8))(pUVar2,*(code **)(*(longlong *)pUVar2 + 0x2c8));
    return;
  }
  return;
}

// OnPostActivateAbility @ 14b843c50

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
UDS_NPCClientControlAbility_Thrown::OnPostActivateAbility(UDS_NPCClientControlAbility_Thrown *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  undefined1 auStackY_178 [32];
  uint uVar4;
  wchar_t *pwVar5;
  EDS_AbilityDeactivateType local_148 [8];
  FWeakObjectPtr local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar1 = TWeakObjectPtr<UDS_NPCClientControlAbilityData_Thrown,FWeakObjectPtr>::UEOpEquals
                    (&this->NPCClientControlAbilityData,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) goto LAB_14b843d04;
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_NPCClientControlAbility_Thrown::OnPostActivateAbility",0x39,Yes);
    pwVar5 = L"NPCClientControlAbilityData is nullptr.";
    uVar4 = 0x2d;
  }
  else {
    UDS_EntityData::GetData((ulong64)&local_140,this->_padding_);
    bVar1 = TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr> *)&local_140,(void *)0x0);
    if (!bVar1) {
      pUVar3 = FWeakObjectPtr::Get(&local_140);
      local_148[0] = 0x8a;
      pUVar3[3].field_0x6 = 1;
      this->ElapsedTime = 0.0;
      UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_148);
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) goto LAB_14b843d04;
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_NPCClientControlAbility_Thrown::OnPostActivateAbility",0x39,Yes);
    pwVar5 = L"entityData is nullptr.";
    uVar4 = 0x36;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar4,pwVar5);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
LAB_14b843d04:
  local_148[0] = Cancel;
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_148);
  return;
}

// OnTickComponent @ 14b848e00

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
UDS_NPCClientControlAbility_Thrown::OnTickComponent
          (UDS_NPCClientControlAbility_Thrown *this,float param_1)

{
  float *pfVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  UObject *pUVar6;
  undefined1 auStackY_198 [32];
  uint uVar7;
  wchar_t *pwVar8;
  EDS_AbilityDeactivateType local_168 [8];
  TVector<double>_u_0 local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  UDS_GameplayAbility::OnTickComponent((UDS_GameplayAbility *)this,param_1);
  bVar3 = TWeakObjectPtr<UDS_NPCClientControlAbilityData_Thrown,FWeakObjectPtr>::UEOpEquals
                    (&this->NPCClientControlAbilityData,(void *)0x0);
  if (bVar3) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_NPCClientControlAbility_Thrown::OnTickComponent",0x33,Yes);
      pwVar8 = L"NPCClientControlAbilityData is nullptr.";
      uVar7 = 0x56;
LAB_14b848e97:
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_148.Ptr,uVar7,pwVar8);
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    pUVar6 = FWeakObjectPtr::Get(&(this->NPCClientControlAbilityData).WeakPtr);
    pfVar1 = &this->ElapsedTime;
    fVar2 = *pfVar1;
    *pfVar1 = param_1 + fVar2;
    bVar3 = *(float *)&pUVar6[4].field_0xc <= param_1 + fVar2;
    if (bVar3) {
      *pfVar1 = *(float *)&pUVar6[4].field_0xc;
    }
    local_160._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_160._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_160._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    bVar4 = DS_AbilityUtil_Interaction::CalculateThrowLocationAtTime
                      ((TVector<double> *)&pUVar6[2].field_0x10,
                       (TVector<double> *)&pUVar6[3].field_0x18,pfVar1,
                       (TVector<double> *)&local_160._s_0);
    if (bVar4) {
      pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      (**(code **)(*(longlong *)pUVar6 + 0x358))(pUVar6,&local_160);
      local_168[0] = bVar3;
      if (!bVar3) {
        return;
      }
      goto LAB_14b848fac;
    }
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_NPCClientControlAbility_Thrown::OnTickComponent",0x33,Yes);
      pwVar8 = L"Failed to CalculateThrowLocationAtTime().";
      uVar7 = 0x6d;
      goto LAB_14b848e97;
    }
  }
  local_168[0] = Cancel;
LAB_14b848fac:
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_168);
  return;
}

// TryActivate @ 14b852c80

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

bool __cdecl
UDS_NPCClientControlAbility_Thrown::TryActivate
          (ulong64 *param_1,ulong64 *param_2,FDS_ThrowStartSkillInfo *param_3)

{
  double dVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  FDS_EntityBase *this;
  UDS_LogManager *pUVar5;
  UObject *pUVar6;
  undefined1 auStackY_198 [32];
  uint uVar7;
  wchar_t *pwVar8;
  EDS_AbilityTagType local_158 [8];
  FWeakObjectPtr local_150;
  undefined8 local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if ((*param_1 == 0) || (*param_2 == 0)) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_NPCClientControlAbility_Thrown::TryActivate",0x2f,Yes);
    pwVar8 = L"Invalid parameter.";
    uVar7 = 0x8b;
  }
  else {
    this = FDS_EntityBase::GetEntityBase(param_1);
    if (this == (FDS_EntityBase *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar5 = UDS_LogManager::GetInst();
      local_138._padding_ = (longlong)this;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_NPCClientControlAbility_Thrown::TryActivate",0x2f,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_138.Ptr,0x92,L"sourceEntity is nullptr. (%llu)");
      goto LAB_14b852eb9;
    }
    local_158[0] = NPCClientControl_Thrown;
    UDS_AbilityDataSet::GetAbilityData<UDS_NPCClientControlAbilityData_Thrown>
              ((ulong64 *)&local_150,(EDS_AbilityTagType *)param_1);
    bVar4 = TWeakObjectPtr<UDS_NPCClientControlAbilityData_Thrown,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_NPCClientControlAbilityData_Thrown,FWeakObjectPtr> *)
                       &local_150,(void *)0x0);
    if (!bVar4) {
      pUVar6 = FWeakObjectPtr::Get(&local_150);
      *(ulong64 *)&pUVar6[2].field_0x8 = *param_2;
      pUVar6 = FWeakObjectPtr::Get(&local_150);
      dVar1 = (param_3->StartLocation).field0_0x0._s_0.Y;
      local_148[0] = 0;
      local_158[0] = NPCClientControl_Thrown;
      *(double *)&pUVar6[2].field_0x10 = (param_3->StartLocation).field0_0x0._s_0.X;
      *(double *)&pUVar6[2].field_0x18 = dVar1;
      dVar1 = (param_3->EndLocation).field0_0x0._s_0.X;
      *(double *)&pUVar6[2].field_0x20 = (param_3->StartLocation).field0_0x0._s_0.Z;
      *(double *)(pUVar6 + 3) = dVar1;
      dVar1 = (param_3->EndLocation).field0_0x0._s_0.Z;
      *(double *)&pUVar6[3].field_0x8 = (param_3->EndLocation).field0_0x0._s_0.Y;
      *(double *)&pUVar6[3].field_0x10 = dVar1;
      dVar1 = (param_3->InitialVelocity).field0_0x0._s_0.Y;
      *(double *)&pUVar6[3].field_0x18 = (param_3->InitialVelocity).field0_0x0._s_0.X;
      *(double *)&pUVar6[3].field_0x20 = dVar1;
      fVar2 = param_3->TotalTime;
      fVar3 = param_3->ImpactTime;
      *(double *)(pUVar6 + 4) = (param_3->InitialVelocity).field0_0x0._s_0.Z;
      *(float *)&pUVar6[4].field_0x8 = fVar2;
      *(float *)&pUVar6[4].field_0xc = fVar3;
      dVar1 = (param_3->ImpactLocation).field0_0x0._s_0.Y;
      *(double *)&pUVar6[4].field_0x10 = (param_3->ImpactLocation).field0_0x0._s_0.X;
      *(double *)&pUVar6[4].field_0x18 = dVar1;
      *(double *)&pUVar6[4].field_0x20 = (param_3->ImpactLocation).field0_0x0._s_0.Z;
      bVar4 = FDS_EntityBase::TryActivateAbility
                        (this,local_158,(TObjectPtr<UWN_AbilityContext>)local_148);
      return bVar4;
    }
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_NPCClientControlAbility_Thrown::TryActivate",0x2f,Yes);
    pwVar8 = L"abilityData is nullptr.";
    uVar7 = 0x99;
  }
  UDS_LogManager::PrintLog(pUVar5,1,Warning,local_138.Ptr,uVar7,pwVar8);
LAB_14b852eb9:
  if ((FDS_EntityBase *)local_138._padding_ != (FDS_EntityBase *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

