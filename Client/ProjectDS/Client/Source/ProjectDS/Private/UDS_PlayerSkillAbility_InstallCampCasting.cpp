// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 22

// StaticClass @ 14b561810

UClass * __cdecl UDS_PlayerSkillAbility_InstallCampCasting::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PlayerSkillAbility_InstallCampCasting.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PlayerSkillAbility_InstallCampCasting",
               &Z_Registration_Info_UClass_UDS_PlayerSkillAbility_InstallCampCasting.InnerSingleton,
               StaticRegisterNativesUDS_PlayerSkillAbility_InstallCampCasting,0x180,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_PlayerSkillAbility_InstallCampCasting>,
               InternalVTableHelperCtorCaller<UDS_PlayerSkillAbility_InstallCampCasting>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PlayerSkillAbility_InstallCampCasting.InnerSingleton;
}

// UDS_PlayerSkillAbility_InstallCampCasting @ 14b5646c0

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

UDS_PlayerSkillAbility_InstallCampCasting * __thiscall
UDS_PlayerSkillAbility_InstallCampCasting::UDS_PlayerSkillAbility_InstallCampCasting
          (UDS_PlayerSkillAbility_InstallCampCasting *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->PlayerSkillAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->PlayerSkillAbilityData).WeakPtr,(FObjectPtr)&local_res8);
  (this->ChangeToCastingEndAnimTimer).Handle = 0;
  (this->InstallGuideActor).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->InstallGuideActor).WeakPtr,(FObjectPtr)&local_res8);
  (this->AsyncLoadHandle_InstallGuideActor).Object = (FStreamableHandle *)0x0;
  (this->AsyncLoadHandle_InstallGuideActor).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UDS_PlayerSkillAbility_InstallCampCasting @ 14b564750

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

UDS_PlayerSkillAbility_InstallCampCasting * __thiscall
UDS_PlayerSkillAbility_InstallCampCasting::UDS_PlayerSkillAbility_InstallCampCasting
          (UDS_PlayerSkillAbility_InstallCampCasting *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->PlayerSkillAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->PlayerSkillAbilityData).WeakPtr,(FObjectPtr)&local_res8);
  (this->ChangeToCastingEndAnimTimer).Handle = 0;
  (this->InstallGuideActor).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->InstallGuideActor).WeakPtr,(FObjectPtr)&local_res8);
  (this->AsyncLoadHandle_InstallGuideActor).Object = (FStreamableHandle *)0x0;
  (this->AsyncLoadHandle_InstallGuideActor).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~UDS_PlayerSkillAbility_InstallCampCasting @ 14b565260

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
UDS_PlayerSkillAbility_InstallCampCasting::~UDS_PlayerSkillAbility_InstallCampCasting
          (UDS_PlayerSkillAbility_InstallCampCasting *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AsyncLoadHandle_InstallGuideActor).SharedReferenceCount.ReferenceController);
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetDefaultInputPolicy @ 14b566f20

EDS_AbilityInputPolicy __thiscall
UDS_PlayerSkillAbility_InstallCampCasting::GetDefaultInputPolicy
          (UDS_PlayerSkillAbility_InstallCampCasting *this)

{
  return EndIfInput;
}

// GetPrivateStaticClass @ 14b5679e0

UClass * __cdecl UDS_PlayerSkillAbility_InstallCampCasting::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PlayerSkillAbility_InstallCampCasting.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PlayerSkillAbility_InstallCampCasting",
               &Z_Registration_Info_UClass_UDS_PlayerSkillAbility_InstallCampCasting.InnerSingleton,
               StaticRegisterNativesUDS_PlayerSkillAbility_InstallCampCasting,0x180,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_PlayerSkillAbility_InstallCampCasting>,
               InternalVTableHelperCtorCaller<UDS_PlayerSkillAbility_InstallCampCasting>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PlayerSkillAbility_InstallCampCasting.InnerSingleton;
}

// ShouldNotifyChangedCharState @ 14b568000

bool __thiscall
UDS_PlayerSkillAbility_InstallCampCasting::ShouldNotifyChangedCharState
          (UDS_PlayerSkillAbility_InstallCampCasting *this)

{
  return true;
}

// StaticRegisterNativesUDS_PlayerSkillAbility_InstallCampCasting @ 14b568130

void __cdecl
UDS_PlayerSkillAbility_InstallCampCasting::
StaticRegisterNativesUDS_PlayerSkillAbility_InstallCampCasting(void)

{
  return;
}

// ChangeToCastingEndAnim @ 14b8260a0

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
UDS_PlayerSkillAbility_InstallCampCasting::ChangeToCastingEndAnim
          (UDS_PlayerSkillAbility_InstallCampCasting *this)

{
  EDS_StateTagType local_res10 [24];
  
  local_res10[0] = Casting_EndAnim;
  UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_res10);
  return;
}

// ClearChangeToCastingEndAnimTimer @ 14b8278a0

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
UDS_PlayerSkillAbility_InstallCampCasting::ClearChangeToCastingEndAnimTimer
          (UDS_PlayerSkillAbility_InstallCampCasting *this)

{
  FTimerHandle *pFVar1;
  FTimerManager *this_00;
  FTimerData *pFVar2;
  
  pFVar1 = &this->ChangeToCastingEndAnimTimer;
  if (pFVar1->Handle != 0) {
    this_00 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar2 = FTimerManager::FindTimer(this_00,pFVar1);
    if (pFVar2 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(this_00,(FTimerHandle)pFVar1->Handle);
    }
    pFVar1->Handle = 0;
  }
  return;
}

// Deactivate @ 14b82c7a0

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
UDS_PlayerSkillAbility_InstallCampCasting::Deactivate
          (ulong64 *param_1,EDS_AbilityDeactivateType *param_2)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  FDS_EntityBase *this;
  undefined1 auStackY_188 [32];
  EDS_AbilityTagType local_148 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (*param_1 == 0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_PlayerSkillAbility_InstallCampCasting::Deactivate",0x35,Yes);
    UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0xcb,L"Invalid parameter.");
  }
  else {
    this = FDS_EntityBase::GetEntityBase(param_1);
    if (this != (FDS_EntityBase *)0x0) {
      local_148[0] = PlayerSkill_InstallCamp_Casting;
      bVar1 = FDS_EntityBase::DeactivateAbility(this,local_148,param_2);
      return bVar1;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_PlayerSkillAbility_InstallCampCasting::Deactivate",0x35,Yes);
    UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0xd2,L"sourceEntity is nullptr. (%llu)")
    ;
  }
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

// InitInstallGuideActor @ 14b833a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UDS_PlayerSkillAbility_InstallCampCasting::InitInstallGuideActor
          (UDS_PlayerSkillAbility_InstallCampCasting *this)

{
  TWeakObjectPtr<ADS_InstallGuideActor,FWeakObjectPtr> *this_00;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  bool bVar5;
  UDS_LogManager *pUVar6;
  UObject *pUVar7;
  FDS_CampBaseTableRow *pFVar8;
  FDS_NpcBaseTableRow *pFVar9;
  ADS_InstallGuideActor *this_01;
  TWeakObjectPtr<UDS_PlayerSkillAbilityData_InstallCampCasting,FWeakObjectPtr> *this_02;
  undefined4 uVar10;
  undefined1 auStackY_1c8 [32];
  uint uVar11;
  wchar_t *pwVar12;
  uint6 uStack_186;
  undefined4 uStack_168;
  undefined4 uStack_164;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  this_00 = &this->InstallGuideActor;
  bVar5 = TWeakObjectPtr<ADS_InstallGuideActor,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
  if (bVar5) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar6 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_PlayerSkillAbility_InstallCampCasting::InitInstallGuideActor",0x40,
               Yes);
    pwVar12 = L"InstallGuideActor is nullptr.";
    uVar11 = 0x14d;
  }
  else {
    this_02 = &this->PlayerSkillAbilityData;
    bVar5 = TWeakObjectPtr<UDS_PlayerSkillAbilityData_InstallCampCasting,FWeakObjectPtr>::UEOpEquals
                      (this_02,(void *)0x0);
    if (!bVar5) {
      pUVar7 = FWeakObjectPtr::Get(&this_02->WeakPtr);
      pFVar8 = FDS_CampBaseTableRow::Get((longlong)*(int *)&pUVar7[2].field_0x8,true);
      if (pFVar8 == (FDS_CampBaseTableRow *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        if (pUVar6 == (UDS_LogManager *)0x0) {
          return false;
        }
        pUVar6 = UDS_LogManager::GetInst();
        FWeakObjectPtr::Get(&this_02->WeakPtr);
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_PlayerSkillAbility_InstallCampCasting::InitInstallGuideActor",
                   0x40,Yes);
        pwVar12 = L"campBaseTable is nullptr. (%d)";
        uVar11 = 0x15a;
      }
      else {
        pFVar9 = FDS_NpcBaseTableRow::Get((longlong)pFVar8->ID_NpcBase,true);
        uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        if (pFVar9 != (FDS_NpcBaseTableRow *)0x0) {
          uVar10 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
          uVar4 = (ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20;
          pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
          *(ulonglong *)&pUVar7[0x11].field_0x18 = (ulonglong)uStack_186 << 0x10;
          *(undefined8 *)&pUVar7[0x11].field_0x20 = 0;
          uStack_168 = (undefined4)uVar2;
          uStack_164 = (undefined4)((ulonglong)uVar2 >> 0x20);
          *(undefined8 *)(pUVar7 + 0x12) = 0;
          *(undefined8 *)&pUVar7[0x12].field_0x8 = uVar1;
          *(undefined4 *)&pUVar7[0x12].field_0x10 = uStack_168;
          *(undefined4 *)&pUVar7[0x12].field_0x14 = uStack_164;
          *(undefined4 *)&pUVar7[0x12].field_0x18 = uVar10;
          *(int *)&pUVar7[0x12].field_0x1c = (int)uVar4;
          pUVar7 = FWeakObjectPtr::Get(&this_02->WeakPtr);
          uVar2 = *(undefined8 *)&pUVar7[2].field_0x10;
          uVar3 = *(undefined8 *)&pUVar7[2].field_0x18;
          uVar1 = *(undefined8 *)&pUVar7[2].field_0x20;
          pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
          *(ulonglong *)&pUVar7[0x12].field_0x20 = (ulonglong)uStack_186 << 0x10;
          *(undefined8 *)(pUVar7 + 0x13) = 0;
          uStack_168 = (undefined4)uVar3;
          uStack_164 = (undefined4)((ulonglong)uVar3 >> 0x20);
          *(undefined8 *)&pUVar7[0x13].field_0x8 = 0;
          *(undefined8 *)&pUVar7[0x13].field_0x10 = uVar2;
          *(undefined4 *)&pUVar7[0x13].field_0x18 = uStack_168;
          *(undefined4 *)&pUVar7[0x13].field_0x1c = uStack_164;
          *(int *)&pUVar7[0x13].field_0x20 = (int)uVar1;
          *(int *)&pUVar7[0x13].field_0x24 = (int)((ulonglong)uVar1 >> 0x20);
          this_01 = (ADS_InstallGuideActor *)FWeakObjectPtr::Get(&this_00->WeakPtr);
          ADS_InstallGuideActor::LoadGuideMesh
                    (this_01,&pFVar9->ID_ResourcePreset,&pFVar8->PreviewAniPath,0xe293);
          return true;
        }
        pUVar6 = UDS_LogManager::GetInst();
        if (pUVar6 == (UDS_LogManager *)0x0) {
          return false;
        }
        pUVar6 = UDS_LogManager::GetInst();
        local_158._padding_ = (longlong)pFVar9;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_PlayerSkillAbility_InstallCampCasting::InitInstallGuideActor",
                   0x40,Yes);
        pwVar12 = L"npcBaseTable is nullptr. (%d)";
        uVar11 = 0x161;
      }
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_158.Ptr,uVar11,pwVar12);
      goto LAB_14b833c5d;
    }
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar6 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_PlayerSkillAbility_InstallCampCasting::InitInstallGuideActor",0x40,
               Yes);
    pwVar12 = L"PlayerSkillAbilityData is nullptr.";
    uVar11 = 0x153;
  }
  UDS_LogManager::PrintLog(pUVar6,1,Warning,local_158.Ptr,uVar11,pwVar12);
LAB_14b833c5d:
  if ((FDS_NpcBaseTableRow *)local_158._padding_ != (FDS_NpcBaseTableRow *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  return false;
}

// OnAbilityRetryActivate @ 14b837c70

void __thiscall
UDS_PlayerSkillAbility_InstallCampCasting::OnAbilityRetryActivate
          (UDS_PlayerSkillAbility_InstallCampCasting *this)

{
  return;
}

// OnCanActivate @ 14b839d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_PlayerSkillAbility_InstallCampCasting::OnCanActivate
          (UDS_PlayerSkillAbility_InstallCampCasting *this)

{
  bool bVar1;
  TWeakObjectPtr<UDS_PlayerSkillAbilityData_InstallCampCasting,FWeakObjectPtr> TVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_178 [32];
  ulong64 local_144;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar1 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  if (bVar1) {
    bVar1 = TWeakObjectPtr<UDS_PlayerSkillAbilityData_InstallCampCasting,FWeakObjectPtr>::UEOpEquals
                      (&this->PlayerSkillAbilityData,(void *)0x0);
    if (bVar1) {
      TVar2 = UDS_AbilityDataSet::GetAbilityData<UDS_PlayerSkillAbilityData_InstallCampCasting>
                        (&local_144,(EDS_AbilityTagType *)&this->_padding_);
                    /* WARNING: Load size is inaccurate */
      (this->PlayerSkillAbilityData).WeakPtr = *TVar2.WeakPtr;
    }
    bVar1 = TWeakObjectPtr<UDS_PlayerSkillAbilityData_InstallCampCasting,FWeakObjectPtr>::UEOpEquals
                      (&this->PlayerSkillAbilityData,(void *)0x0);
    if (!bVar1) {
      return true;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_PlayerSkillAbility_InstallCampCasting::OnCanActivate",0x38,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0x2a,L"PlayerSkillAbilityData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return false;
}

// OnChangedActiveInput @ 14b83ba10

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
UDS_PlayerSkillAbility_InstallCampCasting::OnChangedActiveInput
          (UDS_PlayerSkillAbility_InstallCampCasting *this,bool param_1)

{
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  UDS_GameplayAbility::OnChangedActiveInput((UDS_GameplayAbility *)this,param_1);
  if ((*(char *)((longlong)&this->_padding_ + 1) == '\x01') && (param_1)) {
    local_28._0_8_ = 0;
    local_28._8_8_ = 0;
    local_28._16_4_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi(0x4c6b8,Complete_None_01,&local_28);
  }
  return;
}

// OnChangedCharState @ 14b83c170

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
UDS_PlayerSkillAbility_InstallCampCasting::OnChangedCharState
          (UDS_PlayerSkillAbility_InstallCampCasting *this,
          TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,FDS_ChangedCharStateInfo *param_2
          )

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_CharStateData *this_00;
  FWeakObjectPtr local_res10 [2];
  undefined1 auStackY_1a8 [32];
  EDS_AbilityDeactivateType local_178 [8];
  EDS_CharState local_170;
  FDS_ChangedCharStateInfo local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_168.StateTag.TagName = (param_2->StateTag).TagName;
  local_168.bIsStateTagOn = param_2->bIsStateTagOn;
  local_168._9_7_ = *(undefined7 *)&param_2->field_0x9;
  local_168.AddedCharState = param_2->AddedCharState;
  local_168.RemovedCharState = param_2->RemovedCharState;
  local_168.AddedCharDetailState = param_2->AddedCharDetailState;
  local_168.RemovedCharDetailState = param_2->RemovedCharDetailState;
  local_res10[0] = param_1.WeakPtr;
  UDS_GameplayAbility::OnChangedCharState((UDS_GameplayAbility *)this,param_1,&local_168);
  if (*(char *)((longlong)&this->_padding_ + 1) == '\x01') {
    bVar1 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)local_res10,(void *)0x0);
    if (bVar1) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 != (UDS_LogManager *)0x0) {
        pUVar2 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_PlayerSkillAbility_InstallCampCasting::OnChangedCharState",0x3d,
                   Yes);
        UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x7e,L"InCharStateData is nullptr.")
        ;
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      bVar1 = DS_AbilityUtil_PlayerSkill::IsAbleInstallCamp_SourceEntity
                        ((ulong64 *)&this->_padding_);
      if (bVar1) {
        return;
      }
      this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
      local_170 = Dead|Warp;
      bVar1 = UDS_CharStateData::HasCharState(this_00,&local_170);
      if (!bVar1) {
        local_168.StateTag.TagName.ComparisonIndex.Value = 0;
        local_168.StateTag.TagName.Number = 0;
        local_168.bIsStateTagOn = false;
        local_168._9_7_ = 0;
        local_168.AddedCharState =
             local_168.AddedCharState &
             ~(Climbing|Cooking|Casting|Mount|NPCClientControl|ComeBack|Patrol|NetSync|Move|
               CharSwitch|Remove|Spawn|Resurrect|Dead|Transport|Warp|PlayerSkill|Interaction|
               Abnormal_NonControl|Abnormal|AirWalk|Seal|HitAdditive|Battle|Groggy|AniCut|
               ToggleSkill|Skill|Avoid|AutoMove|Shield|Swim);
        UDS_UIMessageManager::OpenMsgByStringUi
                  (0x4c6b8,Complete_None_01,
                   (TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
                    *)&local_168);
      }
    }
    local_178[0] = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_178);
  }
  return;
}

// OnCompleteLoadInstallGuideActor @ 14b83d670

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
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UDS_PlayerSkillAbility_InstallCampCasting::OnCompleteLoadInstallGuideActor
          (UDS_PlayerSkillAbility_InstallCampCasting *this)

{
  int iVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UWorld *this_00;
  AActor *pAVar6;
  undefined1 auStackY_208 [32];
  uint uVar7;
  wchar_t *pwVar8;
  EDS_ClientResourceType local_1c8 [8];
  ADS_InstallGuideActor *local_1c0;
  FSoftObjectPath local_1b8;
  TTransform<double> local_198;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_1c8[0] = InstallGuideActor;
  UDS_CommonSetting::GetClientBPPath(&local_1b8,local_1c8);
  if (local_1b8.AssetPath.PackageName == (FName)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,
                 "UDS_PlayerSkillAbility_InstallCampCasting::OnCompleteLoadInstallGuideActor",0x4a,
                 Yes);
      pwVar8 = L"installGuideActorBPPath is invalid.";
      uVar7 = 0x11e;
LAB_14b83d97c:
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,uVar7,pwVar8);
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    pUVar4 = (UClass *)FSoftObjectPath::ResolveObject(&local_1b8);
    if (pUVar4 == (UClass *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,
                   "UDS_PlayerSkillAbility_InstallCampCasting::OnCompleteLoadInstallGuideActor",0x4a
                   ,Yes);
        pwVar8 = L"installGuideActorBPObj is nullptr.";
        uVar7 = 0x126;
        goto LAB_14b83d97c;
      }
    }
    else {
      pUVar5 = Z_Construct_UClass_UClass_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(pUVar4->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 != (UDS_LogManager *)0x0) {
          pUVar3 = UDS_LogManager::GetInst();
          local_138._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_138,
                     "UDS_PlayerSkillAbility_InstallCampCasting::OnCompleteLoadInstallGuideActor",
                     0x4a,Yes);
          pwVar8 = L"installGuideActorBPClass is nullptr.";
          uVar7 = 0x12e;
          goto LAB_14b83d97c;
        }
      }
      else {
        local_198.Rotation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
        local_198.Rotation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
        local_198.Translation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
        local_198.Translation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
        local_198.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64
        ;
        local_198.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64
        ;
        this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
        local_1c0 = UWorld::SpawnActorDeferred<ADS_InstallGuideActor>
                              (this_00,pUVar4,&local_198,(AActor *)0x0,(APawn *)0x0,AlwaysSpawn,
                               MultiplyWithRoot);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_1c0 != (ADS_InstallGuideActor *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_1c0);
        }
        FWeakObjectPtr::operator=(&(this->InstallGuideActor).WeakPtr,(FObjectPtr)&local_1c0);
        bVar2 = TWeakObjectPtr<ADS_InstallGuideActor,FWeakObjectPtr>::UEOpEquals
                          (&this->InstallGuideActor,(void *)0x0);
        if (bVar2) {
          pUVar3 = UDS_LogManager::GetInst();
          if (pUVar3 != (UDS_LogManager *)0x0) {
            pUVar3 = UDS_LogManager::GetInst();
            local_138._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_138,
                       "UDS_PlayerSkillAbility_InstallCampCasting::OnCompleteLoadInstallGuideActor",
                       0x4a,Yes);
            pwVar8 = L"InstallGuideActor is nullptr.";
            uVar7 = 0x138;
            goto LAB_14b83d97c;
          }
        }
        else {
          pAVar6 = (AActor *)FWeakObjectPtr::Get(&(this->InstallGuideActor).WeakPtr);
          UGameplayStatics::FinishSpawningActor(pAVar6,&local_198,MultiplyWithRoot);
          bVar2 = InitInstallGuideActor(this);
          if (bVar2) goto LAB_14b83d9b9;
          pUVar3 = UDS_LogManager::GetInst();
          if (pUVar3 != (UDS_LogManager *)0x0) {
            pUVar3 = UDS_LogManager::GetInst();
            local_138._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_138,
                       "UDS_PlayerSkillAbility_InstallCampCasting::OnCompleteLoadInstallGuideActor",
                       0x4a,Yes);
            pwVar8 = L"Failed to InitInstallGuideActor().";
            uVar7 = 0x143;
            goto LAB_14b83d97c;
          }
        }
      }
    }
  }
  local_1c8[0] = PartsSystemActor;
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_1c8);
LAB_14b83d9b9:
  if (local_1b8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

// OnDeactivateAbility @ 14b83f620

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
UDS_PlayerSkillAbility_InstallCampCasting::OnDeactivateAbility
          (UDS_PlayerSkillAbility_InstallCampCasting *this,bool *param_1)

{
  TSharedPtr<FStreamableHandle,1> *pTVar1;
  bool bVar2;
  FTimerManager *this_00;
  FTimerData *pFVar3;
  AActor *this_01;
  UObject *pUVar4;
  FWeakObjectPtr local_res8;
  undefined8 local_res18 [2];
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  
  if ((this->ChangeToCastingEndAnimTimer).Handle != 0) {
    this_00 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar3 = FTimerManager::FindTimer(this_00,&this->ChangeToCastingEndAnimTimer);
    if (pFVar3 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer
                (this_00,(FTimerHandle)(this->ChangeToCastingEndAnimTimer).Handle);
    }
    (this->ChangeToCastingEndAnimTimer).Handle = 0;
  }
  local_res8.ObjectIndex._0_1_ = 0x62;
  UDS_GameplayAbility::RemoveStateTagToASC
            ((UDS_GameplayAbility *)this,(EDS_StateTagType *)&local_res8);
  local_res8.ObjectIndex._0_1_ = 0x61;
  UDS_GameplayAbility::RemoveStateTagToASC
            ((UDS_GameplayAbility *)this,(EDS_StateTagType *)&local_res8);
  bVar2 = TWeakObjectPtr<ADS_InstallGuideActor,FWeakObjectPtr>::UEOpEquals
                    (&this->InstallGuideActor,(void *)0x0);
  if (!bVar2) {
    this_01 = (AActor *)FWeakObjectPtr::Get(&(this->InstallGuideActor).WeakPtr);
    AActor::Destroy(this_01,false,true);
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res18[0] = 0;
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
    (this->InstallGuideActor).WeakPtr = local_res8;
  }
  pTVar1 = &this->AsyncLoadHandle_InstallGuideActor;
  if (pTVar1->Object != (FStreamableHandle *)0x0) {
    FStreamableHandle::CancelHandle(pTVar1->Object);
    local_28 = 0;
    FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != (TSharedPtr<FStreamableHandle,1> *)&local_28) {
      pTVar1->Object = (FStreamableHandle *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->AsyncLoadHandle_InstallGuideActor).SharedReferenceCount,&FStack_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_20.ReferenceController);
  }
  bVar2 = TWeakObjectPtr<UDS_PlayerSkillAbilityData_InstallCampCasting,FWeakObjectPtr>::UEOpEquals
                    (&this->PlayerSkillAbilityData,(void *)0x0);
  if (!bVar2) {
    pUVar4 = FWeakObjectPtr::Get(&(this->PlayerSkillAbilityData).WeakPtr);
                    /* WARNING: Could not recover jumptable at 0x00014b83f76c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar4 + 0x2c8))(pUVar4,*(code **)(*(longlong *)pUVar4 + 0x2c8));
    return;
  }
  return;
}

// OnPostActivateAbility @ 14b844ce0

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
UDS_PlayerSkillAbility_InstallCampCasting::OnPostActivateAbility
          (UDS_PlayerSkillAbility_InstallCampCasting *this)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  FTimerManager *pFVar4;
  FTimerData *pFVar5;
  UDS_LogManager *pUVar6;
  FDS_CommonActionCastingTableRow *pFVar7;
  undefined1 auStackY_1c8 [32];
  uint uVar8;
  wchar_t *pwVar9;
  EDS_AbilityDeactivateType local_188 [16];
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  if ((this->ChangeToCastingEndAnimTimer).Handle != 0) {
    pFVar4 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar5 = FTimerManager::FindTimer(pFVar4,&this->ChangeToCastingEndAnimTimer);
    if (pFVar5 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer
                (pFVar4,(FTimerHandle)(this->ChangeToCastingEndAnimTimer).Handle);
    }
    (this->ChangeToCastingEndAnimTimer).Handle = 0;
  }
  bVar3 = SpawnInstallGuideActor(this);
  if (bVar3) {
    if (*(char *)((longlong)&this->_padding_ + 1) == '\x01') {
      local_178._0_8_ = 0;
      local_178._8_8_ = 0;
      local_178._16_4_ = 0;
      UDS_UIMessageManager::OpenMsgByStringUi(0x4c6b7,Complete_None_01,&local_178);
    }
    pFVar7 = FDS_CommonActionCastingTableRow::Get(3,true);
    if (pFVar7 != (FDS_CommonActionCastingTableRow *)0x0) {
      fVar1 = pFVar7->CastingTime;
      fVar2 = pFVar7->CastingEndTime;
      pFVar4 = FDS_TimerManager::Get((UObject *)0x0);
      local_178._8_8_ = local_178._8_8_ & 0xffffffff00000000;
      local_178._0_8_ = ChangeToCastingEndAnim;
      FTimerManager::SetTimer<UDS_PlayerSkillAbility_InstallCampCasting>
                (pFVar4,&this->ChangeToCastingEndAnimTimer,this,(pmf_b9ed7abd *)&local_178,
                 fVar1 - fVar2,false,__real_bf800000);
      local_188[0] = 0x62;
      UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_188);
      return;
    }
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,
                 "UDS_PlayerSkillAbility_InstallCampCasting::SetChangeToCastingEndAnimTimer",0x49,
                 Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Warning,local_158.Ptr,0xdf,L"commonActionCastingTable is nullptr.");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 == (UDS_LogManager *)0x0) goto LAB_14b844dd8;
    pUVar6 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_PlayerSkillAbility_InstallCampCasting::OnPostActivateAbility",0x40,
               Yes);
    pwVar9 = L"Failed to SetChangeToCastingEndAnimTimer().";
    uVar8 = 0x4a;
  }
  else {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 == (UDS_LogManager *)0x0) goto LAB_14b844dd8;
    pUVar6 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_PlayerSkillAbility_InstallCampCasting::OnPostActivateAbility",0x40,
               Yes);
    pwVar9 = L"Failed to SpawnInstallGuideActor().";
    uVar8 = 0x3c;
  }
  UDS_LogManager::PrintLog(pUVar6,1,Warning,local_158.Ptr,uVar8,pwVar9);
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
LAB_14b844dd8:
  local_188[0] = Cancel;
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_188);
  return;
}

// SetChangeToCastingEndAnimTimer @ 14b84f3b0

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

bool __thiscall
UDS_PlayerSkillAbility_InstallCampCasting::SetChangeToCastingEndAnimTimer
          (UDS_PlayerSkillAbility_InstallCampCasting *this)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  FDS_CommonActionCastingTableRow *pFVar4;
  UDS_LogManager *pUVar5;
  FTimerManager *this_00;
  undefined1 auStackY_198 [32];
  code *local_158;
  undefined8 uStack_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pFVar4 = FDS_CommonActionCastingTableRow::Get(3,true);
  if (pFVar4 == (FDS_CommonActionCastingTableRow *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,
                 "UDS_PlayerSkillAbility_InstallCampCasting::SetChangeToCastingEndAnimTimer",0x49,
                 Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_148.Ptr,0xdf,L"commonActionCastingTable is nullptr.");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    bVar3 = false;
  }
  else {
    fVar1 = pFVar4->CastingTime;
    fVar2 = pFVar4->CastingEndTime;
    this_00 = FDS_TimerManager::Get((UObject *)0x0);
    uStack_150 = (ulonglong)uStack_150._4_4_ << 0x20;
    local_158 = ChangeToCastingEndAnim;
    FTimerManager::SetTimer<UDS_PlayerSkillAbility_InstallCampCasting>
              (this_00,&this->ChangeToCastingEndAnimTimer,this,(pmf_b9ed7abd *)&local_158,
               fVar1 - fVar2,false,__real_bf800000);
    bVar3 = true;
  }
  return bVar3;
}

// SpawnInstallGuideActor @ 14b850e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_PlayerSkillAbility_InstallCampCasting::SpawnInstallGuideActor
          (UDS_PlayerSkillAbility_InstallCampCasting *this)

{
  TSharedPtr<FStreamableHandle,1> *pTVar1;
  ForAnyElementType _Src;
  bool bVar2;
  int iVar3;
  UDS_LogManager *pUVar4;
  UAssetManager *pUVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  TSharedPtr<FStreamableHandle,1> *pTVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStackY_288 [32];
  EDS_ClientResourceType local_238 [8];
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_230;
  undefined1 local_220 [8];
  FDelegateAllocation local_218;
  undefined1 local_208 [32];
  code *local_1e8;
  FMRSWRecursiveAccessDetector *pFStack_1e0;
  char *local_1d8;
  UDS_PlayerSkillAbility_InstallCampCasting *local_1c8;
  FString local_1c0;
  TSharedPtr<FStreamableHandle,1> local_1b0;
  FSoftObjectPath local_1a0;
  FDestructionSentinel local_180;
  FDelegateAllocation *local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_288;
  bVar2 = TWeakObjectPtr<ADS_InstallGuideActor,FWeakObjectPtr>::UEOpEquals
                    (&this->InstallGuideActor,(void *)0x0);
  if (bVar2) {
    pTVar1 = &this->AsyncLoadHandle_InstallGuideActor;
    if (pTVar1->Object == (FStreamableHandle *)0x0) {
      local_238[0] = InstallGuideActor;
      UDS_CommonSetting::GetClientBPPath(&local_1a0,local_238);
      if (local_1a0.AssetPath.PackageName == (FName)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        if (pUVar4 != (UDS_LogManager *)0x0) {
          pUVar4 = UDS_LogManager::GetInst();
          local_158._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,"UDS_PlayerSkillAbility_InstallCampCasting::SpawnInstallGuideActor",
                     0x41,Yes);
          UDS_LogManager::PrintLog
                    (pUVar4,1,Warning,local_158.Ptr,0x10d,L"installGuideActorBPPath is invalid.");
          if ((void *)local_158._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_158._padding_);
          }
        }
        bVar2 = false;
      }
      else {
        local_230.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_230.ArrayNum = 0;
        local_230.ArrayMax = 0;
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&local_230.AllocatorInstance,&local_230.ArrayMax);
        _Src.Data = local_1a0.SubPathString.Data.AllocatorInstance.Data;
        local_230.ArrayNum = iVar3 + 1;
        *(FName *)&local_230.AllocatorInstance.Data[(longlong)iVar3 * 0x20].field_0x0 =
             local_1a0.AssetPath.PackageName;
        *(FName *)(local_230.AllocatorInstance.Data + (longlong)iVar3 * 0x20 + 8) =
             local_1a0.AssetPath.AssetName;
        pFVar9 = local_230.AllocatorInstance.Data + (longlong)iVar3 * 0x20 + 0x10;
        *(FScriptContainerElement **)pFVar9 = (FScriptContainerElement *)0x0;
        *(int *)(pFVar9 + 8) = local_1a0.SubPathString.Data.ArrayNum;
        if (local_1a0.SubPathString.Data.ArrayNum == 0) {
          *(int *)(pFVar9 + 0xc) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,local_1a0.SubPathString.Data.ArrayNum,0,(ForAnyElementType *)pFVar9,
                     local_1a0.SubPathString.Data.ArrayNum,(int *)(pFVar9 + 0xc));
                    /* WARNING: Load size is inaccurate */
          memcpy(*pFVar9,_Src.Data,(longlong)local_1a0.SubPathString.Data.ArrayNum);
        }
        pUVar5 = UAssetManager::Get();
        local_208._0_4_ = 0x114;
        local_208._4_4_ = 0x4c;
        local_208._8_8_ =
             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_PlayerSkillAbility_InstallCampCasting.cpp"
        ;
        local_1c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_208._16_8_ =
             "bool __cdecl UDS_PlayerSkillAbility_InstallCampCasting::SpawnInstallGuideActor(void)";
        local_1c0.Data.ArrayNum = 0;
        local_1c0.Data.ArrayMax = 0;
        local_1e8 = OnCompleteLoadInstallGuideActor;
        pFStack_1e0 = (FMRSWRecursiveAccessDetector *)
                      ((ulonglong)local_1b0.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
        local_220 = (undefined1  [8])0x0;
        local_218.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_218.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_220,
                   (FWriteAccessScope *)&local_180);
        local_168 = &local_218;
        puVar6 = UE::Core::Private::DelegateAllocate(0x30,&local_218);
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = &
                    ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar7 = FDelegateHandle::GenerateNewID();
          puVar6[2] = uVar7;
          *puVar6 = &
                    ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_PlayerSkillAbility_InstallCampCasting____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
          ;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar6[3] = 0;
          local_1c8 = this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_1c8);
          puVar6[4] = local_1e8;
          puVar6[5] = pFStack_1e0;
        }
        if (local_180.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_180.Accessor,&local_180);
        }
        local_1e8._4_4_ = local_208._4_4_;
        local_1e8._0_4_ = local_208._0_4_;
        pFStack_1e0 = (FMRSWRecursiveAccessDetector *)local_208._8_8_;
        local_1d8 = (char *)local_208._16_8_;
        pTVar8 = FStreamableManager::
                 RequestAsyncLoad<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,void>
                           (&pUVar5->StreamableManager,&local_1b0,&local_230,
                            (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_220,0,
                            false,false,&local_1c0,(FSourceLocation *)&local_1e8);
        if (pTVar1 != pTVar8) {
          pTVar1->Object = pTVar8->Object;
          pTVar8->Object = (FStreamableHandle *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->AsyncLoadHandle_InstallGuideActor).SharedReferenceCount,
                     &pTVar8->SharedReferenceCount);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)
                   CONCAT44(local_1b0.SharedReferenceCount.ReferenceController._4_4_,
                            local_1b0.SharedReferenceCount.ReferenceController._0_4_));
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_220,
                   (FWriteAccessScope *)local_208);
        if ((local_218.DelegateSize != 0) &&
           (local_218.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_218.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_218,0,0,0x10);
          local_218.DelegateSize = 0;
        }
        if (local_208[0x10] == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                    ((FMRSWRecursiveAccessDetector *)local_208._8_8_,
                     (FDestructionSentinel *)local_208);
        }
        if (local_218.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_218.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_220);
        bVar2 = true;
        DestructItems<FSoftObjectPath,int>
                  ((FSoftObjectPath *)local_230.AllocatorInstance.Data,local_230.ArrayNum);
        if ((FSoftObjectPath *)local_230.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
          FMemory::Free(local_230.AllocatorInstance.Data);
        }
      }
      if (local_1a0.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a0.SubPathString.Data.AllocatorInstance.Data);
      }
    }
    else {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_PlayerSkillAbility_InstallCampCasting::SpawnInstallGuideActor",
                   0x41,Yes);
        UDS_LogManager::PrintLog
                  (pUVar4,1,Warning,local_158.Ptr,0x105,
                   L"InstallGuideActor is already loading asynchronously.");
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
      bVar2 = true;
    }
  }
  else {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_PlayerSkillAbility_InstallCampCasting::SpawnInstallGuideActor",0x41
                 ,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_158.Ptr,0xfc,L"InstallGuideActor already exists.");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
    bVar2 = InitInstallGuideActor(this);
  }
  return bVar2;
}

// TryActivate @ 14b8533a0

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
UDS_PlayerSkillAbility_InstallCampCasting::TryActivate
          (ulong64 *param_1,int *param_2,TVector<double> *param_3)

{
  double dVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  FDS_EntityBase *this;
  FDS_ItemBaseTableRow *pFVar4;
  UObject *pUVar5;
  undefined1 auStackY_1b8 [32];
  uint uVar6;
  wchar_t *pwVar7;
  EDS_AbilityTagType local_178 [8];
  FWeakObjectPtr local_170;
  undefined8 local_168 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  if (*param_1 == 0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_PlayerSkillAbility_InstallCampCasting::TryActivate",0x36,Yes);
    pwVar7 = L"Invalid parameter.";
    uVar6 = 0xa8;
LAB_14b853589:
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_158.Ptr,uVar6,pwVar7);
  }
  else {
    this = FDS_EntityBase::GetEntityBase(param_1);
    if (this == (FDS_EntityBase *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar3 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_PlayerSkillAbility_InstallCampCasting::TryActivate",0x36,Yes);
      pwVar7 = L"sourceEntity is nullptr. (%llu)";
      uVar6 = 0xaf;
    }
    else {
      pFVar4 = FDS_ItemBaseTableRow::Get((longlong)*param_2,true);
      if (pFVar4 != (FDS_ItemBaseTableRow *)0x0) {
        local_178[0] = PlayerSkill_InstallCamp_Casting;
        UDS_AbilityDataSet::GetAbilityData<UDS_PlayerSkillAbilityData_InstallCampCasting>
                  ((ulong64 *)&local_170,(EDS_AbilityTagType *)param_1);
        bVar2 = TWeakObjectPtr<UDS_PlayerSkillAbilityData_InstallCampCasting,FWeakObjectPtr>::
                UEOpEquals((TWeakObjectPtr<UDS_PlayerSkillAbilityData_InstallCampCasting,FWeakObjectPtr>
                            *)&local_170,(void *)0x0);
        if (!bVar2) {
          pUVar5 = FWeakObjectPtr::Get(&local_170);
          *(int *)&pUVar5[2].field_0x8 = pFVar4->ID_Template;
          pUVar5 = FWeakObjectPtr::Get(&local_170);
          dVar1 = (param_3->field0_0x0)._s_0.Y;
          local_168[0] = 0;
          local_178[0] = PlayerSkill_InstallCamp_Casting;
          *(double *)&pUVar5[2].field_0x10 = (param_3->field0_0x0)._s_0.X;
          *(double *)&pUVar5[2].field_0x18 = dVar1;
          *(double *)&pUVar5[2].field_0x20 = (param_3->field0_0x0)._s_0.Z;
          bVar2 = FDS_EntityBase::TryActivateAbility
                            (this,local_178,(TObjectPtr<UWN_AbilityContext>)local_168);
          return bVar2;
        }
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 == (UDS_LogManager *)0x0) {
          return false;
        }
        pUVar3 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_PlayerSkillAbility_InstallCampCasting::TryActivate",0x36,Yes);
        pwVar7 = L"abilityData is nullptr.";
        uVar6 = 0xbd;
        goto LAB_14b853589;
      }
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar3 = UDS_LogManager::GetInst();
      local_158._padding_ = (longlong)pFVar4;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_PlayerSkillAbility_InstallCampCasting::TryActivate",0x36,Yes);
      pwVar7 = L"itemBaseTable is nullptr. (%d)";
      uVar6 = 0xb6;
    }
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_158.Ptr,uVar6,pwVar7);
  }
  if ((FDS_ItemBaseTableRow *)local_158._padding_ != (FDS_ItemBaseTableRow *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  return false;
}

