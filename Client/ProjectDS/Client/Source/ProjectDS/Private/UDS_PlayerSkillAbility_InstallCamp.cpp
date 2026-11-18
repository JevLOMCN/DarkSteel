// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 28

// StaticClass @ 14b5615d0

UClass * __cdecl UDS_PlayerSkillAbility_InstallCamp::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PlayerSkillAbility_InstallCamp.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PlayerSkillAbility_InstallCamp",
               &Z_Registration_Info_UClass_UDS_PlayerSkillAbility_InstallCamp.InnerSingleton,
               StaticRegisterNativesUDS_PlayerSkillAbility_InstallCamp,0x178,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_PlayerSkillAbility_InstallCamp>,
               InternalVTableHelperCtorCaller<UDS_PlayerSkillAbility_InstallCamp>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PlayerSkillAbility_InstallCamp.InnerSingleton;
}

// UDS_PlayerSkillAbility_InstallCamp @ 14b5645c0

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

UDS_PlayerSkillAbility_InstallCamp * __thiscall
UDS_PlayerSkillAbility_InstallCamp::UDS_PlayerSkillAbility_InstallCamp
          (UDS_PlayerSkillAbility_InstallCamp *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->PlayerSkillAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->PlayerSkillAbilityData).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->InstallGuideActor).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->InstallGuideActor).WeakPtr,(FObjectPtr)&local_res8);
  (this->AsyncLoadHandle_InstallGuideActor).Object = (FStreamableHandle *)0x0;
  (this->AsyncLoadHandle_InstallGuideActor).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UDS_PlayerSkillAbility_InstallCamp @ 14b564640

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

UDS_PlayerSkillAbility_InstallCamp * __thiscall
UDS_PlayerSkillAbility_InstallCamp::UDS_PlayerSkillAbility_InstallCamp
          (UDS_PlayerSkillAbility_InstallCamp *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->PlayerSkillAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->PlayerSkillAbilityData).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->InstallGuideActor).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->InstallGuideActor).WeakPtr,(FObjectPtr)&local_res8);
  (this->AsyncLoadHandle_InstallGuideActor).Object = (FStreamableHandle *)0x0;
  (this->AsyncLoadHandle_InstallGuideActor).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~UDS_PlayerSkillAbility_InstallCamp @ 14b565220

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
UDS_PlayerSkillAbility_InstallCamp::~UDS_PlayerSkillAbility_InstallCamp
          (UDS_PlayerSkillAbility_InstallCamp *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AsyncLoadHandle_InstallGuideActor).SharedReferenceCount.ReferenceController);
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b567920

UClass * __cdecl UDS_PlayerSkillAbility_InstallCamp::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PlayerSkillAbility_InstallCamp.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PlayerSkillAbility_InstallCamp",
               &Z_Registration_Info_UClass_UDS_PlayerSkillAbility_InstallCamp.InnerSingleton,
               StaticRegisterNativesUDS_PlayerSkillAbility_InstallCamp,0x178,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_PlayerSkillAbility_InstallCamp>,
               InternalVTableHelperCtorCaller<UDS_PlayerSkillAbility_InstallCamp>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PlayerSkillAbility_InstallCamp.InnerSingleton;
}

// ShouldNotifyChangedCharState @ 14b567ff0

bool __thiscall
UDS_PlayerSkillAbility_InstallCamp::ShouldNotifyChangedCharState
          (UDS_PlayerSkillAbility_InstallCamp *this)

{
  return true;
}

// ShouldTickComponent @ 14b568010

bool __thiscall
UDS_PlayerSkillAbility_InstallCamp::ShouldTickComponent(UDS_PlayerSkillAbility_InstallCamp *this)

{
  return true;
}

// StaticRegisterNativesUDS_PlayerSkillAbility_InstallCamp @ 14b568120

void __cdecl
UDS_PlayerSkillAbility_InstallCamp::StaticRegisterNativesUDS_PlayerSkillAbility_InstallCamp(void)

{
  return;
}

// CancelInstallCamp @ 14b825ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl UDS_PlayerSkillAbility_InstallCamp::CancelInstallCamp(ulong64 *param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_CharStateData *this;
  undefined1 auStackY_188 [32];
  EDS_AbilityDeactivateType local_148 [4];
  EDS_CharDetailState local_144;
  FWeakObjectPtr local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  UDS_CharStateData::GetData((ulong64)&local_140);
  bVar1 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&local_140,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_PlayerSkillAbility_InstallCamp::CancelInstallCamp",0x35,Yes);
    UDS_LogManager::PrintLog
              (pUVar2,1,Warning,local_138.Ptr,0x153,L"charStateData is nullptr. (%llu)");
  }
  else {
    this = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_140);
    local_144 = PlayerSkill_InstallCamp;
    bVar1 = UDS_CharStateData::HasCharDetailState(this,&local_144);
    if (bVar1) {
      local_148[0] = Success;
      bVar1 = Deactivate(param_1,local_148);
      return bVar1;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_PlayerSkillAbility_InstallCamp::CancelInstallCamp",0x35,Yes);
    UDS_LogManager::PrintLog
              (pUVar2,1,Warning,local_138.Ptr,0x159,L"No PlayerSkill_InstallCamp state.");
  }
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

// CloseInputKeyGroupWindow @ 14b828080

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_PlayerSkillAbility_InstallCamp::CloseInputKeyGroupWindow
          (UDS_PlayerSkillAbility_InstallCamp *this)

{
  UDS_WindowManager *this_00;
  float local_res10 [2];
  uint local_res18 [4];
  
  this_00 = UDS_WindowManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this_00 == (UDS_WindowManager *)0x0) {
      return;
    }
  }
  else {
    if (this_00 == (UDS_WindowManager *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  local_res10[0] = 0.0;
  local_res18[0] = 0;
  UDS_WindowManager::CloseWindow(this_00,InputKeyGroup,local_res18,local_res10);
  return;
}

// ConfirmInstallCamp @ 14b828350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl UDS_PlayerSkillAbility_InstallCamp::ConfirmInstallCamp(ulong64 *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UDS_CharStateData *this;
  UObject *pUVar5;
  UObject *pUVar6;
  long64 lVar7;
  undefined1 auStackY_1e8 [32];
  uint uVar8;
  wchar_t *pwVar9;
  EDS_AbilityDeactivateType local_1a8 [8];
  FWeakObjectPtr local_1a0;
  TVector<double>_u_0 local_198;
  FWeakObjectPtr local_180;
  FWeakObjectPtr local_178;
  double local_170;
  double local_168;
  TRotator<double> local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  UDS_CharStateData::GetData((ulong64)&local_178);
  bVar3 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&local_178,(void *)0x0);
  if (bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_PlayerSkillAbility_InstallCamp::ConfirmInstallCamp",0x36,Yes);
    pwVar9 = L"charStateData is nullptr. (%llu)";
    uVar8 = 0xfa;
LAB_14b8285b7:
    UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,uVar8,pwVar9);
  }
  else {
    this = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_178);
    local_1a0.ObjectIndex = 0x53;
    bVar3 = UDS_CharStateData::HasCharDetailState(this,(EDS_CharDetailState *)&local_1a0);
    if (bVar3) {
      local_1a8[0] = 0x44;
      UDS_AbilityDataSet::GetAbilityData<UDS_PlayerSkillAbilityData_InstallCamp>
                ((ulong64 *)&local_180,(EDS_AbilityTagType *)param_1);
      bVar3 = TWeakObjectPtr<UDS_PlayerSkillAbilityData_InstallCamp,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_PlayerSkillAbilityData_InstallCamp,FWeakObjectPtr> *)
                         &local_180,(void *)0x0);
      if (!bVar3) {
        pUVar5 = FWeakObjectPtr::Get(&local_180);
        if (pUVar5[2].field_0x8 != '\x01') {
          pUVar5 = FWeakObjectPtr::Get(&local_180);
          iVar1 = *(int *)&pUVar5[2].field_0xc;
          if (iVar1 == 1) {
            lVar7 = 0x4c6b1;
          }
          else if (iVar1 == 2) {
            lVar7 = 0x4c6ae;
          }
          else if (iVar1 == 3) {
            lVar7 = 0x4c6ad;
          }
          else {
            if (iVar1 != 4) {
              return true;
            }
            lVar7 = 0x4c6af;
          }
          local_198._s_0.X = 0.0;
          local_198._s_0.Y = 0.0;
          local_198._s_0.Z = (double)((ulonglong)(uint)local_198._20_4_ << 0x20);
          UDS_UIMessageManager::OpenMsgByStringUi
                    (lVar7,Alert_System_01,
                     (TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
                      *)&local_198._s_0);
          return true;
        }
        pUVar5 = FWeakObjectPtr::Get(&local_180);
        pUVar6 = FWeakObjectPtr::Get(&local_180);
        bVar3 = FDS_PlayerSkillService::SendCampInstallCastingRequest
                          ((TVector<double> *)&pUVar5[2].field_0x10,(int *)(pUVar6 + 3));
        if (!bVar3) {
          local_1a8[0] = Cancel;
          Deactivate(param_1,local_1a8);
          return true;
        }
        UDS_MovementCore::GetMovementCore((ulong64)&local_1a0);
        bVar3 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_1a0,(void *)0x0
                          );
        if (!bVar3) {
          pUVar6 = FWeakObjectPtr::Get(&local_1a0);
          (**(code **)(*(longlong *)pUVar6 + 0x338))(pUVar6,&local_170);
          local_198._s_0.X = *(double *)&pUVar5[2].field_0x10 - local_170;
          local_198._s_0.Y = *(double *)&pUVar5[2].field_0x18 - local_168;
          local_198._s_0.Z = 0.0;
          UE::Math::TVector<double>::Normalize
                    ((TVector<double> *)&local_198._s_0,__real_3e45798ee0000000);
          pUVar5 = FWeakObjectPtr::Get(&local_1a0);
          (**(code **)(*(longlong *)pUVar5 + 0x2d8))(pUVar5);
          pUVar5 = FWeakObjectPtr::Get(&local_1a0);
          pcVar2 = *(code **)(*(longlong *)pUVar5 + 0x370);
          UE::Math::TVector<double>::ToOrientationRotator
                    ((TVector<double> *)&local_198._s_0,&local_158);
          (*pcVar2)(pUVar5,&local_158);
          return true;
        }
        pUVar4 = UDS_LogManager::GetInst();
        if (pUVar4 == (UDS_LogManager *)0x0) {
          return false;
        }
        pUVar4 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_PlayerSkillAbility_InstallCamp::ConfirmInstallCamp",0x36,Yes);
        pwVar9 = L"sourceMovementCore is nullptr. (Source: %llu)";
        uVar8 = 0x116;
        goto LAB_14b8285b7;
      }
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_PlayerSkillAbility_InstallCamp::ConfirmInstallCamp",0x36,Yes);
      pwVar9 = L"abilityData is nullptr.";
      uVar8 = 0x108;
    }
    else {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_PlayerSkillAbility_InstallCamp::ConfirmInstallCamp",0x36,Yes);
      pwVar9 = L"No PlayerSkill_InstallCamp state.";
      uVar8 = 0x100;
    }
    UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,uVar8,pwVar9);
  }
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

// Deactivate @ 14b82c630

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
UDS_PlayerSkillAbility_InstallCamp::Deactivate(ulong64 *param_1,EDS_AbilityDeactivateType *param_2)

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
              (&local_138,"UDS_PlayerSkillAbility_InstallCamp::Deactivate",0x2e,Yes);
    UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0xe6,L"Invalid parameter.");
  }
  else {
    this = FDS_EntityBase::GetEntityBase(param_1);
    if (this != (FDS_EntityBase *)0x0) {
      local_148[0] = PlayerSkill_InstallCamp;
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
              (&local_138,"UDS_PlayerSkillAbility_InstallCamp::Deactivate",0x2e,Yes);
    UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0xed,L"sourceEntity is nullptr. (%llu)")
    ;
  }
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

// InitInstallGuideActor @ 14b8336e0

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
UDS_PlayerSkillAbility_InstallCamp::InitInstallGuideActor(UDS_PlayerSkillAbility_InstallCamp *this)

{
  TWeakObjectPtr<ADS_InstallGuideActor,FWeakObjectPtr> *this_00;
  undefined4 uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  UDS_LogManager *pUVar7;
  UObject *pUVar8;
  FDS_CampBaseTableRow *pFVar9;
  FDS_NpcBaseTableRow *pFVar10;
  ADS_InstallGuideActor *this_01;
  TWeakObjectPtr<UDS_PlayerSkillAbilityData_InstallCamp,FWeakObjectPtr> *this_02;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStackY_1d8 [32];
  uint uVar14;
  wchar_t *pwVar15;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  this_00 = &this->InstallGuideActor;
  bVar6 = TWeakObjectPtr<ADS_InstallGuideActor,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
  if (bVar6) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar7 = UDS_LogManager::GetInst();
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_PlayerSkillAbility_InstallCamp::InitInstallGuideActor",0x39,Yes);
    pwVar15 = L"InstallGuideActor is nullptr.";
    uVar14 = 0x1b6;
  }
  else {
    this_02 = &this->PlayerSkillAbilityData;
    bVar6 = TWeakObjectPtr<UDS_PlayerSkillAbilityData_InstallCamp,FWeakObjectPtr>::UEOpEquals
                      (this_02,(void *)0x0);
    if (!bVar6) {
      pUVar8 = FWeakObjectPtr::Get(&this_02->WeakPtr);
      pFVar9 = FDS_CampBaseTableRow::Get((longlong)*(int *)&pUVar8[3].field_0x4,true);
      if (pFVar9 == (FDS_CampBaseTableRow *)0x0) {
        pUVar7 = UDS_LogManager::GetInst();
        if (pUVar7 == (UDS_LogManager *)0x0) {
          return false;
        }
        pUVar7 = UDS_LogManager::GetInst();
        FWeakObjectPtr::Get(&this_02->WeakPtr);
        local_168._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_168,"UDS_PlayerSkillAbility_InstallCamp::InitInstallGuideActor",0x39,Yes);
        pwVar15 = L"campBaseTable is nullptr. (%d)";
        uVar14 = 0x1c3;
      }
      else {
        pFVar10 = FDS_NpcBaseTableRow::Get((longlong)pFVar9->ID_NpcBase,true);
        uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        if (pFVar10 != (FDS_NpcBaseTableRow *)0x0) {
          local_198 = CONCAT22(local_198._2_2_,1);
          uVar1 = *(undefined4 *)&pFVar9->CampInstallableDistance;
          uVar2 = *(undefined4 *)((longlong)&pFVar9->CampInstallableDistance + 4);
          uVar11 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
          uVar3 = (ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20;
          uVar12 = (undefined4)__real_408f400000000000;
          uVar13 = (undefined4)((ulonglong)__real_408f400000000000 >> 0x20);
          pUVar8 = FWeakObjectPtr::Get(&this_00->WeakPtr);
          local_180 = (undefined4)uVar4;
          uStack_17c = (undefined4)((ulonglong)uVar4 >> 0x20);
          *(undefined4 *)&pUVar8[0x11].field_0x18 = local_198;
          *(undefined4 *)&pUVar8[0x11].field_0x1c = uStack_194;
          *(undefined4 *)&pUVar8[0x11].field_0x20 = uVar12;
          *(undefined4 *)&pUVar8[0x11].field_0x24 = uVar13;
          local_198 = CONCAT22(local_198._2_2_,1);
          uStack_178 = (undefined4)uVar5;
          uStack_174 = (undefined4)((ulonglong)uVar5 >> 0x20);
          *(undefined4 *)(pUVar8 + 0x12) = uVar1;
          *(undefined4 *)&pUVar8[0x12].field_0x4 = uVar2;
          *(undefined4 *)&pUVar8[0x12].field_0x8 = local_180;
          *(undefined4 *)&pUVar8[0x12].field_0xc = uStack_17c;
          *(undefined4 *)&pUVar8[0x12].field_0x10 = uStack_178;
          *(undefined4 *)&pUVar8[0x12].field_0x14 = uStack_174;
          *(undefined4 *)&pUVar8[0x12].field_0x18 = uVar11;
          *(int *)&pUVar8[0x12].field_0x1c = (int)uVar3;
          uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          uVar1 = *(undefined4 *)&pFVar9->CampRadius;
          uVar2 = *(undefined4 *)((longlong)&pFVar9->CampRadius + 4);
          uVar11 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
          uVar3 = (ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20;
          pUVar8 = FWeakObjectPtr::Get(&this_00->WeakPtr);
          local_180 = (undefined4)uVar4;
          uStack_17c = (undefined4)((ulonglong)uVar4 >> 0x20);
          *(undefined4 *)&pUVar8[0x12].field_0x20 = local_198;
          *(undefined4 *)&pUVar8[0x12].field_0x24 = uStack_194;
          *(undefined4 *)(pUVar8 + 0x13) = uVar12;
          *(undefined4 *)&pUVar8[0x13].field_0x4 = uVar13;
          uStack_178 = (undefined4)uVar5;
          uStack_174 = (undefined4)((ulonglong)uVar5 >> 0x20);
          *(undefined4 *)&pUVar8[0x13].field_0x8 = uVar1;
          *(undefined4 *)&pUVar8[0x13].field_0xc = uVar2;
          *(undefined4 *)&pUVar8[0x13].field_0x10 = local_180;
          *(undefined4 *)&pUVar8[0x13].field_0x14 = uStack_17c;
          *(undefined4 *)&pUVar8[0x13].field_0x18 = uStack_178;
          *(undefined4 *)&pUVar8[0x13].field_0x1c = uStack_174;
          *(undefined4 *)&pUVar8[0x13].field_0x20 = uVar11;
          *(int *)&pUVar8[0x13].field_0x24 = (int)uVar3;
          this_01 = (ADS_InstallGuideActor *)FWeakObjectPtr::Get(&this_00->WeakPtr);
          ADS_InstallGuideActor::LoadGuideMesh
                    (this_01,&pFVar10->ID_ResourcePreset,&pFVar9->PreviewAniPath,0);
          return true;
        }
        pUVar7 = UDS_LogManager::GetInst();
        if (pUVar7 == (UDS_LogManager *)0x0) {
          return false;
        }
        pUVar7 = UDS_LogManager::GetInst();
        local_168._padding_ = (longlong)pFVar10;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_168,"UDS_PlayerSkillAbility_InstallCamp::InitInstallGuideActor",0x39,Yes);
        pwVar15 = L"npcBaseTable is nullptr. (%d)";
        uVar14 = 0x1ca;
      }
      UDS_LogManager::PrintLog(pUVar7,1,Warning,local_168.Ptr,uVar14,pwVar15);
      goto LAB_14b8338ef;
    }
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar7 = UDS_LogManager::GetInst();
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_PlayerSkillAbility_InstallCamp::InitInstallGuideActor",0x39,Yes);
    pwVar15 = L"PlayerSkillAbilityData is nullptr.";
    uVar14 = 0x1bc;
  }
  UDS_LogManager::PrintLog(pUVar7,1,Warning,local_168.Ptr,uVar14,pwVar15);
LAB_14b8338ef:
  if ((FDS_NpcBaseTableRow *)local_168._padding_ != (FDS_NpcBaseTableRow *)0x0) {
    FMemory::Free((void *)local_168._padding_);
  }
  return false;
}

// OnAbilityRetryActivate @ 14b837c60

void __thiscall
UDS_PlayerSkillAbility_InstallCamp::OnAbilityRetryActivate(UDS_PlayerSkillAbility_InstallCamp *this)

{
  return;
}

// OnCanActivate @ 14b839bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_PlayerSkillAbility_InstallCamp::OnCanActivate(UDS_PlayerSkillAbility_InstallCamp *this)

{
  bool bVar1;
  EDS_PlayerSkillUnableReason EVar2;
  TWeakObjectPtr<UDS_PlayerSkillAbilityData_InstallCamp,FWeakObjectPtr> TVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_198 [32];
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_160;
  ulong64 local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  bVar1 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  if (bVar1) {
    bVar1 = TWeakObjectPtr<UDS_PlayerSkillAbilityData_InstallCamp,FWeakObjectPtr>::UEOpEquals
                      (&this->PlayerSkillAbilityData,(void *)0x0);
    if (bVar1) {
      TVar3 = UDS_AbilityDataSet::GetAbilityData<UDS_PlayerSkillAbilityData_InstallCamp>
                        (local_148,(EDS_AbilityTagType *)&this->_padding_);
                    /* WARNING: Load size is inaccurate */
      (this->PlayerSkillAbilityData).WeakPtr = *TVar3.WeakPtr;
    }
    bVar1 = TWeakObjectPtr<UDS_PlayerSkillAbilityData_InstallCamp,FWeakObjectPtr>::UEOpEquals
                      (&this->PlayerSkillAbilityData,(void *)0x0);
    if (bVar1) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_PlayerSkillAbility_InstallCamp::OnCanActivate",0x31,Yes);
        UDS_LogManager::PrintLog
                  (pUVar4,1,Warning,local_138.Ptr,0x37,L"PlayerSkillAbilityData is nullptr.");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      EVar2 = DS_AbilityUtil_PlayerSkill::IsAbleInstallCamp((ulong64 *)&this->_padding_);
      if (EVar2 == None) {
        return true;
      }
      if (EVar2 == SourceEntityState) {
        local_160._0_8_ = 0;
        local_160._8_8_ = 0;
        local_160._16_4_ = 0;
        UDS_UIMessageManager::OpenMsgByStringUi(0x4c6b9,Alert_System_01,&local_160);
      }
    }
  }
  return false;
}

// OnChangedCharState @ 14b83bff0

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
UDS_PlayerSkillAbility_InstallCamp::OnChangedCharState
          (UDS_PlayerSkillAbility_InstallCamp *this,
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
  bVar1 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)local_res10,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_PlayerSkillAbility_InstallCamp::OnChangedCharState",0x36,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x9d,L"InCharStateData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    bVar1 = DS_AbilityUtil_PlayerSkill::IsAbleInstallCamp_SourceEntity((ulong64 *)&this->_padding_);
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
           ~(Climbing|Cooking|Casting|Mount|NPCClientControl|ComeBack|Patrol|NetSync|Move|CharSwitch
             |Remove|Spawn|Resurrect|Dead|Transport|Warp|PlayerSkill|Interaction|Abnormal_NonControl
             |Abnormal|AirWalk|Seal|HitAdditive|Battle|Groggy|AniCut|ToggleSkill|Skill|Avoid|
             AutoMove|Shield|Swim);
      UDS_UIMessageManager::OpenMsgByStringUi
                (0x4c6b8,Complete_None_01,
                 (TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
                  *)&local_168);
    }
  }
  local_178[0] = Cancel;
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_178);
  return;
}

// OnCompleteLoadInstallGuideActor @ 14b83d2e0

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
UDS_PlayerSkillAbility_InstallCamp::OnCompleteLoadInstallGuideActor
          (UDS_PlayerSkillAbility_InstallCamp *this)

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
                (&local_138,"UDS_PlayerSkillAbility_InstallCamp::OnCompleteLoadInstallGuideActor",
                 0x43,Yes);
      pwVar8 = L"installGuideActorBPPath is invalid.";
      uVar7 = 0x187;
LAB_14b83d5ec:
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
                  (&local_138,"UDS_PlayerSkillAbility_InstallCamp::OnCompleteLoadInstallGuideActor",
                   0x43,Yes);
        pwVar8 = L"installGuideActorBPObj is nullptr.";
        uVar7 = 399;
        goto LAB_14b83d5ec;
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
                     "UDS_PlayerSkillAbility_InstallCamp::OnCompleteLoadInstallGuideActor",0x43,Yes)
          ;
          pwVar8 = L"installGuideActorBPClass is nullptr.";
          uVar7 = 0x197;
          goto LAB_14b83d5ec;
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
                       "UDS_PlayerSkillAbility_InstallCamp::OnCompleteLoadInstallGuideActor",0x43,
                       Yes);
            pwVar8 = L"InstallGuideActor is nullptr.";
            uVar7 = 0x1a1;
            goto LAB_14b83d5ec;
          }
        }
        else {
          pAVar6 = (AActor *)FWeakObjectPtr::Get(&(this->InstallGuideActor).WeakPtr);
          UGameplayStatics::FinishSpawningActor(pAVar6,&local_198,MultiplyWithRoot);
          bVar2 = InitInstallGuideActor(this);
          if (bVar2) goto LAB_14b83d629;
          pUVar3 = UDS_LogManager::GetInst();
          if (pUVar3 != (UDS_LogManager *)0x0) {
            pUVar3 = UDS_LogManager::GetInst();
            local_138._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_138,
                       "UDS_PlayerSkillAbility_InstallCamp::OnCompleteLoadInstallGuideActor",0x43,
                       Yes);
            pwVar8 = L"Failed to InitInstallGuideActor().";
            uVar7 = 0x1ac;
            goto LAB_14b83d5ec;
          }
        }
      }
    }
  }
  local_1c8[0] = PartsSystemActor;
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_1c8);
LAB_14b83d629:
  if (local_1b8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

// OnDeactivateAbility @ 14b83f4c0

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
UDS_PlayerSkillAbility_InstallCamp::OnDeactivateAbility
          (UDS_PlayerSkillAbility_InstallCamp *this,bool *param_1)

{
  TSharedPtr<FStreamableHandle,1> *pTVar1;
  bool bVar2;
  AActor *this_00;
  UDS_InputEvent *pUVar3;
  UDS_WindowManager *this_01;
  UObject *pUVar4;
  FWeakObjectPtr local_res8;
  ulonglong local_res18;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  local_res8.ObjectIndex._0_1_ = 0x60;
  UDS_GameplayAbility::RemoveStateTagToASC
            ((UDS_GameplayAbility *)this,(EDS_StateTagType *)&local_res8);
  bVar2 = TWeakObjectPtr<ADS_InstallGuideActor,FWeakObjectPtr>::UEOpEquals
                    (&this->InstallGuideActor,(void *)0x0);
  if (!bVar2) {
    this_00 = (AActor *)FWeakObjectPtr::Get(&(this->InstallGuideActor).WeakPtr);
    AActor::Destroy(this_00,false,true);
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res18 = 0;
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
    (this->InstallGuideActor).WeakPtr = local_res8;
  }
  pTVar1 = &this->AsyncLoadHandle_InstallGuideActor;
  if (pTVar1->Object != (FStreamableHandle *)0x0) {
    FStreamableHandle::CancelHandle(pTVar1->Object);
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != (TSharedPtr<FStreamableHandle,1> *)&local_18) {
      pTVar1->Object = (FStreamableHandle *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->AsyncLoadHandle_InstallGuideActor).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
  }
  pUVar3 = UDS_InputEvent::GetEvent();
  if (pUVar3 != (UDS_InputEvent *)0x0) {
    FDS_FilteredEventDelegate<enum_EDS_KeyActionType_const_,enum_EDS_KeyActionType_const_,enum_ETriggerEvent_const_,FInputActionValue_const_&>
    ::Remove<UDS_PlayerSkillAbility_InstallCamp>(&pUVar3->OnInputEvent,this);
  }
  this_01 = UDS_WindowManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this_01 == (UDS_WindowManager *)0x0) goto LAB_14b83f5cf;
  }
  else {
    if (this_01 == (UDS_WindowManager *)0x0) goto LAB_14b83f5cf;
    UE::GC::MarkAsReachable((UObject *)this_01);
  }
  local_res8 = (FWeakObjectPtr)((ulonglong)local_res8 & 0xffffffff00000000);
  local_res18 = local_res18 & 0xffffffff00000000;
  UDS_WindowManager::CloseWindow(this_01,InputKeyGroup,(uint *)&local_res18,(float *)&local_res8);
LAB_14b83f5cf:
  bVar2 = TWeakObjectPtr<UDS_PlayerSkillAbilityData_InstallCamp,FWeakObjectPtr>::UEOpEquals
                    (&this->PlayerSkillAbilityData,(void *)0x0);
  if (!bVar2) {
    pUVar4 = FWeakObjectPtr::Get(&(this->PlayerSkillAbilityData).WeakPtr);
    (**(code **)(*(longlong *)pUVar4 + 0x2c8))(pUVar4);
  }
  return;
}

// OnInputEvent_CampCancel @ 14b8407b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_PlayerSkillAbility_InstallCamp::OnInputEvent_CampCancel
          (UDS_PlayerSkillAbility_InstallCamp *this,EDS_KeyActionType param_1,ETriggerEvent param_2,
          FInputActionValue *param_3)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_CharStateData *this_00;
  undefined1 auStackY_188 [32];
  EDS_AbilityDeactivateType local_148 [4];
  EDS_CharDetailState local_144;
  FWeakObjectPtr local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  if (param_2 == Completed) {
    local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
    UDS_CharStateData::GetData((ulong64)&local_140);
    bVar1 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&local_140,(void *)0x0);
    if (bVar1) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 != (UDS_LogManager *)0x0) {
        pUVar2 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_PlayerSkillAbility_InstallCamp::CancelInstallCamp",0x35,Yes);
        UDS_LogManager::PrintLog
                  (pUVar2,1,Warning,local_138.Ptr,0x153,L"charStateData is nullptr. (%llu)");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_140);
      local_144 = PlayerSkill_InstallCamp;
      bVar1 = UDS_CharStateData::HasCharDetailState(this_00,&local_144);
      if (bVar1) {
        local_148[0] = Success;
        Deactivate((ulong64 *)&this->_padding_,local_148);
      }
      else {
        pUVar2 = UDS_LogManager::GetInst();
        if (pUVar2 != (UDS_LogManager *)0x0) {
          pUVar2 = UDS_LogManager::GetInst();
          local_138._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_138,"UDS_PlayerSkillAbility_InstallCamp::CancelInstallCamp",0x35,Yes);
          UDS_LogManager::PrintLog
                    (pUVar2,1,Warning,local_138.Ptr,0x159,L"No PlayerSkill_InstallCamp state.");
          if ((void *)local_138._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_138._padding_);
          }
        }
      }
    }
  }
  return;
}

// OnInputEvent_CampSelect @ 14b840990

void __thiscall
UDS_PlayerSkillAbility_InstallCamp::OnInputEvent_CampSelect
          (UDS_PlayerSkillAbility_InstallCamp *this,EDS_KeyActionType param_1,ETriggerEvent param_2,
          FInputActionValue *param_3)

{
  if (param_2 == Completed) {
    ConfirmInstallCamp((ulong64 *)&this->_padding_);
    return;
  }
  return;
}

// OnOpenInputKeyGroupWindow @ 14b840e30

void __thiscall
UDS_PlayerSkillAbility_InstallCamp::OnOpenInputKeyGroupWindow
          (UDS_PlayerSkillAbility_InstallCamp *this,UDS_UserWidget *param_1)

{
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelContext *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  UScriptStruct *pUVar5;
  UDS_ViewModelContextManager *this_00;
  TReferenceControllerBase<1> *pTVar6;
  FWeakObjectPtr local_res10;
  EDS_KeyActionType local_res18 [2];
  UDS_UserWidget *local_res20;
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  
  if (param_1 != (UDS_UserWidget *)0x0) {
    pFVar3 = ::operator_new(0x58);
    if (pFVar3 == (FDS_ViewModelContext *)0x0) {
      pFVar3 = (FDS_ViewModelContext *)0x0;
    }
    else {
      *(undefined4 *)&pFVar3->field_0x1c = 0;
      *(undefined2 *)&pFVar3[1]._padding_ = 0;
      *(undefined4 *)((longlong)&pFVar3[1]._padding_ + 3) = 0;
      *(undefined1 *)((longlong)&pFVar3[1]._padding_ + 7) = 0;
      pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext_InputKeyGroup__6B_;
      pFVar3->DerivedStaticStruct = (UStruct *)0x0;
      (pFVar3->ViewModelName).ComparisonIndex = 0;
      (pFVar3->ViewModelName).Number = 0;
      pFVar3->ViewModelTemplateKey = None;
      *(undefined1 *)((longlong)&pFVar3[1]._padding_ + 2) = 0;
      pFVar3[1].DerivedStaticStruct = (UStruct *)0x0;
      pFVar3[1].ViewModelName.ComparisonIndex = 0;
      pFVar3[1].ViewModelName.Number = 0;
      *(undefined8 *)&pFVar3[1].ViewModelTemplateKey = 0;
      pFVar3[2]._padding_ = 0;
      pFVar3[2].DerivedStaticStruct = (UStruct *)0x0;
      pFVar3[2].ViewModelName.ComparisonIndex = 0;
      pFVar3[2].ViewModelName.Number = 0;
    }
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar4 = ::operator_new(0x20);
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      pTVar4->SharedReferenceCount = (atomic<int>)0x1;
      pTVar4[1]._padding_ = (longlong)ViewModelContextDeleter;
      pTVar4->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_InputKeyGroup__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      pTVar4->WeakReferenceCount = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pTVar4[1].SharedReferenceCount = pFVar3;
      pTVar6 = pTVar4;
    }
    if ((pFVar3 == (FDS_ViewModelContext *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar5 = FDS_ViewModelContext_InputKeyGroup::StaticStruct();
    pFVar3->DerivedStaticStruct = (UStruct *)pUVar5;
    this_00 = UDS_ViewModelContextManager::GetInst();
    if (this_00 != (UDS_ViewModelContextManager *)0x0) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_38.Object = pFVar3;
      local_38.SharedReferenceCount.ReferenceController = pTVar6;
      UDS_ViewModelContextManager::RegisterContext(this_00,&local_38);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
    }
    pFVar3->ViewModelTemplateKey = InputKeyGroup;
    *(undefined2 *)&pFVar3[1]._padding_ = 4;
    *(undefined1 *)((longlong)&pFVar3[1]._padding_ + 2) = 1;
    local_res18[0] = IA_UI_CampCancel;
    local_res18[1] = 0xc351;
    TArray<enum_EDS_KeyActionType,TSizedDefaultAllocator<32>_>::
    CopyToEmpty<enum_EDS_KeyActionType,int>
              (&pFVar3[1].DerivedStaticStruct,local_res18,2,pFVar3[1].ViewModelName.Number);
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_28.Object = pFVar3;
    local_28.SharedReferenceCount.ReferenceController = pTVar6;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res20 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res20);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res10,&local_28,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  return;
}

// OnPostActivateAbility @ 14b8447b0

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
UDS_PlayerSkillAbility_InstallCamp::OnPostActivateAbility(UDS_PlayerSkillAbility_InstallCamp *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_InputEvent *pUVar3;
  UDS_WindowManager *this_00;
  undefined8 *puVar4;
  ulong64 uVar5;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  int *piVar10;
  undefined1 auStackY_1f8 [32];
  EDS_AbilityDeactivateType local_1c8 [4];
  undefined1 local_1c4 [12];
  undefined1 local_1b8 [24];
  undefined8 uStack_1a0;
  char local_198;
  undefined1 local_188 [8];
  FDelegateAllocation local_180;
  FDestructionSentinel local_170;
  FDelegateAllocation *local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  bVar1 = SpawnInstallGuideActor(this);
  if (!bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_PlayerSkillAbility_InstallCamp::OnPostActivateAbility",0x39,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_148.Ptr,0x56,L"Failed to SpawnInstallGuideActor().");
      if ((TReferenceControllerBase<1> *)local_148._padding_ != (TReferenceControllerBase<1> *)0x0)
      {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    local_1c8[0] = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_1c8);
    return;
  }
  pUVar3 = UDS_InputEvent::GetEvent();
  if (pUVar3 == (UDS_InputEvent *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_PlayerSkillAbility_InstallCamp::OnPostActivateAbility",0x39,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_148.Ptr,0x5f,L"inputEvent is nullptr.");
      if ((TReferenceControllerBase<1> *)local_148._padding_ != (TReferenceControllerBase<1> *)0x0)
      {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    local_1c8[0] = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_1c8);
    return;
  }
  local_1b8._16_8_ = OnInputEvent_CampSelect;
  puVar8 = &(pUVar3->OnInputEvent).Subscriptions.field_0x40;
  local_1c4._0_4_ = 0xc351;
  uStack_1a0 = (FMRSWRecursiveAccessDetector *)((ulonglong)uStack_1a0._4_4_ << 0x20);
  if (*(int *)&(pUVar3->OnInputEvent).Subscriptions.field_0x8 !=
      *(int *)&(pUVar3->OnInputEvent).Subscriptions.field_0x34) {
    puVar7 = *(undefined1 **)puVar8;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(pUVar3->OnInputEvent).Subscriptions.field_0x38;
    }
    iVar9 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(pUVar3->OnInputEvent).Subscriptions.field_0x48 - 1U &
                              0xc351) * 4);
    if (iVar9 != -1) {
      do {
        piVar10 = (int *)((longlong)iVar9 * 0x50 +
                         *(longlong *)&(pUVar3->OnInputEvent).Subscriptions);
        if (*piVar10 == 0xc351) {
          if ((iVar9 != -1) && (piVar10 != (int *)0x0)) goto LAB_14b8449e1;
          break;
        }
        iVar9 = piVar10[0x12];
      } while (iVar9 != -1);
    }
  }
  local_1b8._0_8_ = local_1c4;
  TSet<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<enum_EDS_KeyActionType_const_&>_>
            (&(pUVar3->OnInputEvent).Subscriptions,(int)local_1c4 + 4,
             (TKeyInitializer<EDS_KeyActionType_const_&> *)0xc351,(bool *)local_1b8);
  piVar10 = (int *)((longlong)(int)local_1c4._4_4_ * 0x50 +
                   *(longlong *)&(pUVar3->OnInputEvent).Subscriptions);
LAB_14b8449e1:
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar10 + 2),this);
  TMulticastDelegateRegistration<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
  ::AddUObject<UDS_PlayerSkillAbility_InstallCamp>
            (piVar10 + 2,(UDS_PlayerSkillAbility_InstallCamp *)local_1b8,(pmf_355683ab *)this);
  local_1c4._4_4_ = 0xc352;
  local_1b8._16_8_ = OnInputEvent_CampCancel;
  uStack_1a0 = (FMRSWRecursiveAccessDetector *)((ulonglong)uStack_1a0 & 0xffffffff00000000);
  if (*(int *)&(pUVar3->OnInputEvent).Subscriptions.field_0x8 !=
      *(int *)&(pUVar3->OnInputEvent).Subscriptions.field_0x34) {
    puVar8 = *(undefined1 **)puVar8;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(pUVar3->OnInputEvent).Subscriptions.field_0x38;
    }
    iVar9 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(pUVar3->OnInputEvent).Subscriptions.field_0x48 - 1U &
                              0xc352) * 4);
    if (iVar9 != -1) {
      do {
        piVar10 = (int *)((longlong)iVar9 * 0x50 +
                         *(longlong *)&(pUVar3->OnInputEvent).Subscriptions);
        if (*piVar10 == 0xc352) {
          if (piVar10 != (int *)0x0) goto LAB_14b844ad8;
          break;
        }
        iVar9 = piVar10[0x12];
      } while (iVar9 != -1);
    }
  }
  local_1b8._0_8_ = local_1c4 + 4;
  TSet<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<enum_EDS_KeyActionType_const_&>_>
            (&(pUVar3->OnInputEvent).Subscriptions,(uint)local_1c4,
             (TKeyInitializer<EDS_KeyActionType_const_&> *)0xc352,(bool *)local_1b8);
  piVar10 = (int *)((longlong)(int)local_1c4._0_4_ * 0x50 +
                   *(longlong *)&(pUVar3->OnInputEvent).Subscriptions);
LAB_14b844ad8:
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar10 + 2),this);
  TMulticastDelegateRegistration<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
  ::AddUObject<UDS_PlayerSkillAbility_InstallCamp>
            (piVar10 + 2,(UDS_PlayerSkillAbility_InstallCamp *)local_1b8,(pmf_355683ab *)this);
  this_00 = UDS_WindowManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (this_00 == (UDS_WindowManager *)0x0) goto LAB_14b844c93;
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  if (this_00 != (UDS_WindowManager *)0x0) {
    local_1b8._16_8_ = OnOpenInputKeyGroupWindow;
    uStack_1a0 = (FMRSWRecursiveAccessDetector *)((ulonglong)uStack_1a0 & 0xffffffff00000000);
    local_188 = (undefined1  [8])0x0;
    local_180.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_180.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_188,
               (FWriteAccessScope *)&local_170);
    local_158 = &local_180;
    puVar4 = UE::Core::Private::DelegateAllocate(0x30,&local_180);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_PlayerSkillAbility_InstallCamp____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_PlayerSkillAbility_InstallCamp *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar4[3] = 0;
      local_1b8._0_8_ = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_PlayerSkillAbility_InstallCamp *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)local_1b8);
      puVar4[4] = local_1b8._16_8_;
      puVar4[5] = uStack_1a0;
    }
    if (local_170.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_170.Accessor,&local_170);
    }
    pTVar6 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
             TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                       ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        (local_1b8 + 0x10),
                        (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        local_188);
    UDS_WindowManager::OpenWindow(this_00,InputKeyGroup,pTVar6);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_188,
               (FWriteAccessScope *)(local_1b8 + 0x10));
    if ((local_180.DelegateSize != 0) &&
       (local_180.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_180.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_180,0,0,0x10);
      local_180.DelegateSize = 0;
    }
    if (local_198 == '\0') {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                (uStack_1a0,(FDestructionSentinel *)(local_1b8 + 0x10));
    }
    if (local_180.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_180.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_188);
  }
LAB_14b844c93:
  local_1c8[0] = 0x60;
  UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_1c8);
  return;
}

// OnTickComponent @ 14b8492a0

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
UDS_PlayerSkillAbility_InstallCamp::OnTickComponent
          (UDS_PlayerSkillAbility_InstallCamp *this,float param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_MovementCore *this_00;
  UObject *pUVar3;
  undefined1 auStackY_198 [32];
  TVector<double>_u_0 local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  UDS_GameplayAbility::OnTickComponent((UDS_GameplayAbility *)this,param_1);
  bVar1 = TWeakObjectPtr<ADS_InstallGuideActor,FWeakObjectPtr>::UEOpEquals
                    (&this->InstallGuideActor,(void *)0x0);
  if (!bVar1) {
    bVar1 = TWeakObjectPtr<ADS_InstallGuideActor,FWeakObjectPtr>::UEOpEquals
                      (&this->InstallGuideActor,(void *)0x0);
    if (bVar1) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 != (UDS_LogManager *)0x0) {
        pUVar2 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_PlayerSkillAbility_InstallCamp::UpdateInstallDecal",0x36,Yes);
        UDS_LogManager::PrintLog
                  (pUVar2,1,Warning,local_148.Ptr,0x1ec,L"InstallGuideActor is nullptr.");
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
    }
    else {
      this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      UDS_MovementCore::GetActorFootLocation(this_00,(TVector<double> *)&local_168._s_0);
      pUVar3 = FWeakObjectPtr::Get(&(this->InstallGuideActor).WeakPtr);
      *(double *)&pUVar3[0x12].field_0x8 = local_168._s_0.X;
      *(double *)&pUVar3[0x12].field_0x10 = local_168._s_0.Y;
      *(double *)&pUVar3[0x12].field_0x18 = local_168._s_0.Z;
      pUVar3 = FWeakObjectPtr::Get(&(this->InstallGuideActor).WeakPtr);
      pUVar3[0x11].field_0x18 = 1;
    }
    UpdateGuideDecal(this,param_1);
  }
  return;
}

// OpenInputKeyGroupWindow @ 14b84a9c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_PlayerSkillAbility_InstallCamp::OpenInputKeyGroupWindow
          (UDS_PlayerSkillAbility_InstallCamp *this)

{
  UDS_WindowManager *this_00;
  undefined8 *puVar1;
  ulong64 uVar2;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar3;
  UDS_PlayerSkillAbility_InstallCamp *local_res10;
  code *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  bool local_68;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  this_00 = UDS_WindowManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (this_00 == (UDS_WindowManager *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  if (this_00 != (UDS_WindowManager *)0x0) {
    local_78 = OnOpenInputKeyGroupWindow;
    uStack_70 = 0;
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar1 = UE::Core::Private::DelegateAllocate(0x30,&local_50);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      *puVar1 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_PlayerSkillAbility_InstallCamp____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_PlayerSkillAbility_InstallCamp *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar1[3] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_PlayerSkillAbility_InstallCamp *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)&local_res10);
      puVar1[4] = local_78;
      puVar1[5] = CONCAT44(uStack_6c,uStack_70);
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    pTVar3 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
             TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                       ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        &local_78,
                        (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        local_58);
    UDS_WindowManager::OpenWindow(this_00,InputKeyGroup,pTVar3);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_78);
    if ((local_50.DelegateSize != 0) &&
       (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_50,0,0,0x10);
      local_50.DelegateSize = 0;
    }
    if (local_68 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_6c,uStack_70),
                 (FDestructionSentinel *)&local_78);
    }
    if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_50.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_58);
  }
  return;
}

// SpawnInstallGuideActor @ 14b850940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_PlayerSkillAbility_InstallCamp::SpawnInstallGuideActor(UDS_PlayerSkillAbility_InstallCamp *this)

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
  UDS_PlayerSkillAbility_InstallCamp *local_1c8;
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
                    (&local_158,"UDS_PlayerSkillAbility_InstallCamp::SpawnInstallGuideActor",0x3a,
                     Yes);
          UDS_LogManager::PrintLog
                    (pUVar4,1,Warning,local_158.Ptr,0x176,L"installGuideActorBPPath is invalid.");
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
        local_208._0_4_ = 0x17d;
        local_208._4_4_ = 0x4c;
        local_208._8_8_ =
             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_PlayerSkillAbility_InstallCamp.cpp"
        ;
        local_1c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_208._16_8_ =
             "bool __cdecl UDS_PlayerSkillAbility_InstallCamp::SpawnInstallGuideActor(void)";
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
                    ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_PlayerSkillAbility_InstallCamp____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
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
                  (&local_158,"UDS_PlayerSkillAbility_InstallCamp::SpawnInstallGuideActor",0x3a,Yes)
        ;
        UDS_LogManager::PrintLog
                  (pUVar4,1,Warning,local_158.Ptr,0x16e,
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
                (&local_158,"UDS_PlayerSkillAbility_InstallCamp::SpawnInstallGuideActor",0x3a,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_158.Ptr,0x165,L"InstallGuideActor already exists.");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
    bVar2 = InitInstallGuideActor(this);
  }
  return bVar2;
}

// TryActivate @ 14b853110

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

bool __cdecl UDS_PlayerSkillAbility_InstallCamp::TryActivate(ulong64 *param_1,int *param_2)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  FDS_EntityBase *this;
  FDS_ItemBaseTableRow *pFVar3;
  UObject *pUVar4;
  undefined1 auStackY_1a8 [32];
  uint uVar5;
  wchar_t *pwVar6;
  EDS_AbilityTagType local_168 [8];
  FWeakObjectPtr local_160;
  undefined8 local_158 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if (*param_1 == 0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_PlayerSkillAbility_InstallCamp::TryActivate",0x2f,Yes);
    pwVar6 = L"Invalid parameter.";
    uVar5 = 0xc3;
LAB_14b8532f8:
    UDS_LogManager::PrintLog(pUVar2,1,Warning,local_148.Ptr,uVar5,pwVar6);
  }
  else {
    this = FDS_EntityBase::GetEntityBase(param_1);
    if (this == (FDS_EntityBase *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar2 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_PlayerSkillAbility_InstallCamp::TryActivate",0x2f,Yes);
      pwVar6 = L"sourceEntity is nullptr. (%llu)";
      uVar5 = 0xca;
    }
    else {
      pFVar3 = FDS_ItemBaseTableRow::Get((longlong)*param_2,true);
      if (pFVar3 != (FDS_ItemBaseTableRow *)0x0) {
        local_168[0] = PlayerSkill_InstallCamp;
        UDS_AbilityDataSet::GetAbilityData<UDS_PlayerSkillAbilityData_InstallCamp>
                  ((ulong64 *)&local_160,(EDS_AbilityTagType *)param_1);
        bVar1 = TWeakObjectPtr<UDS_PlayerSkillAbilityData_InstallCamp,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_PlayerSkillAbilityData_InstallCamp,FWeakObjectPtr> *)
                           &local_160,(void *)0x0);
        if (!bVar1) {
          pUVar4 = FWeakObjectPtr::Get(&local_160);
          *(int *)(pUVar4 + 3) = *param_2;
          pUVar4 = FWeakObjectPtr::Get(&local_160);
          local_158[0] = 0;
          local_168[0] = PlayerSkill_InstallCamp;
          *(int *)&pUVar4[3].field_0x4 = pFVar3->ID_Template;
          bVar1 = FDS_EntityBase::TryActivateAbility
                            (this,local_168,(TObjectPtr<UWN_AbilityContext>)local_158);
          return bVar1;
        }
        pUVar2 = UDS_LogManager::GetInst();
        if (pUVar2 == (UDS_LogManager *)0x0) {
          return false;
        }
        pUVar2 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_PlayerSkillAbility_InstallCamp::TryActivate",0x2f,Yes);
        pwVar6 = L"abilityData is nullptr.";
        uVar5 = 0xd8;
        goto LAB_14b8532f8;
      }
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar2 = UDS_LogManager::GetInst();
      local_148._padding_ = (longlong)pFVar3;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_PlayerSkillAbility_InstallCamp::TryActivate",0x2f,Yes);
      pwVar6 = L"itemBaseTable is nullptr. (%d)";
      uVar5 = 0xd1;
    }
    UDS_LogManager::PrintLog(pUVar2,1,Warning,local_148.Ptr,uVar5,pwVar6);
  }
  if ((FDS_ItemBaseTableRow *)local_148._padding_ != (FDS_ItemBaseTableRow *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return false;
}

// UpdateGuideDecal @ 14b856ec0

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

void __thiscall
UDS_PlayerSkillAbility_InstallCamp::UpdateGuideDecal
          (UDS_PlayerSkillAbility_InstallCamp *this,float param_1)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  double dVar5;
  float fVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  UDS_LogManager *pUVar10;
  UObject *pUVar11;
  UWorld *this_00;
  APlayerController *this_01;
  UObject *pUVar12;
  UClass *pUVar13;
  ulonglong uVar14;
  int iVar15;
  ForAnyElementType FVar16;
  TWeakObjectPtr<UDS_PlayerSkillAbilityData_InstallCamp,FWeakObjectPtr> *this_02;
  FWeakObjectPtr *this_03;
  char cVar17;
  float extraout_XMM0_Da;
  float fVar18;
  float fVar19;
  float extraout_XMM0_Db;
  double dVar20;
  float fVar21;
  float fVar22;
  undefined1 auStackY_3b8 [32];
  uint uVar23;
  wchar_t *pwVar24;
  TArray<TEnumAsByte<EObjectTypeQuery>,TSizedDefaultAllocator<32>_> local_378;
  undefined1 local_368 [8];
  FCollisionObjectQueryParams local_360;
  TVector<double>_u_0 local_358;
  TVector<double>_u_0 local_340;
  FWeakObjectPtr local_328;
  FWeakObjectPtr *local_320;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_318;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_308;
  TVector<double>_u_0 local_2f8;
  undefined4 uStack_2e0;
  undefined1 uStack_2dc;
  undefined2 uStack_2db;
  undefined1 uStack_2d9;
  TVector<double>_u_0 local_2d8;
  TVector<double>_u_0 local_2c0;
  undefined1 local_2a8 [48];
  double dStack_278;
  double local_270;
  int local_204;
  byte local_1fb;
  FWeakObjectPtr local_1f0;
  FWeakObjectPtr FStack_1e8;
  IActorInstanceManagerInterface *local_1e0;
  undefined8 uStack_1d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_1a8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  this_03 = &(this->InstallGuideActor).WeakPtr;
  local_320 = this_03;
  bVar7 = TWeakObjectPtr<ADS_InstallGuideActor,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_InstallGuideActor,FWeakObjectPtr> *)this_03,(void *)0x0);
  if (bVar7) {
    pUVar10 = UDS_LogManager::GetInst();
    if (pUVar10 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar10 = UDS_LogManager::GetInst();
    local_1a8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_1a8,"UDS_PlayerSkillAbility_InstallCamp::UpdateGuideDecal",0x34,Yes);
    pwVar24 = L"InstallGuideActor is nullptr.";
    uVar23 = 0x1fb;
  }
  else {
    this_02 = &this->PlayerSkillAbilityData;
    bVar7 = TWeakObjectPtr<UDS_PlayerSkillAbilityData_InstallCamp,FWeakObjectPtr>::UEOpEquals
                      (this_02,(void *)0x0);
    if (bVar7) {
      pUVar10 = UDS_LogManager::GetInst();
      if (pUVar10 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar10 = UDS_LogManager::GetInst();
      local_1a8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_1a8,"UDS_PlayerSkillAbility_InstallCamp::UpdateGuideDecal",0x34,Yes);
      pwVar24 = L"PlayerSkillAbilityData is nullptr.";
      uVar23 = 0x201;
    }
    else {
      pUVar11 = FWeakObjectPtr::Get(&this_02->WeakPtr);
      pUVar11[2].field_0x8 = 0;
      pUVar11 = FWeakObjectPtr::Get(&this_02->WeakPtr);
      iVar15 = 0;
      *(undefined4 *)&pUVar11[2].field_0xc = 0;
      ADS_PlayerController::GetPlayerController();
      bVar7 = TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr> *)&local_328,
                         (void *)0x0);
      if (!bVar7) {
        this_00 = UDS_GameInstance::GetGameInstanceWorld();
        if (this_00 == (UWorld *)0x0) {
          pUVar10 = UDS_LogManager::GetInst();
          if (pUVar10 == (UDS_LogManager *)0x0) {
            return;
          }
          pUVar10 = UDS_LogManager::GetInst();
          local_1a8._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_1a8,"UDS_PlayerSkillAbility_InstallCamp::UpdateGuideDecal",0x34,Yes);
          UDS_LogManager::PrintLog(pUVar10,1,Warning,local_1a8.Ptr,0x213,L"world is nullptr.");
          if ((void *)local_1a8._padding_ == (void *)0x0) {
            return;
          }
          FMemory::Free((void *)local_1a8._padding_);
          return;
        }
        local_2c0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_2c0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_2d8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_2d8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_2c0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_2d8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        this_01 = (APlayerController *)FWeakObjectPtr::Get(&local_328);
        bVar7 = APlayerController::DeprojectMousePositionToWorld
                          (this_01,(TVector<double> *)&local_2c0._s_0,
                           (TVector<double> *)&local_2d8._s_0);
        dVar5 = __real_40c3880000000000;
        if (!bVar7) {
          return;
        }
        local_340._s_0.Z = local_2c0._s_0.Z;
        local_360.IgnoreMask = '\0';
        local_360.ObjectTypesToQuery = 0x1000001;
        local_340._s_0.X = local_2c0._s_0.X;
        local_340._s_0.Y = local_2c0._s_0.Y;
        local_358._s_0.X = local_2d8._s_0.X * __real_40c3880000000000 + local_2c0._s_0.X;
        local_358._s_0.Y = local_2d8._s_0.Y * __real_40c3880000000000 + local_2c0._s_0.Y;
        local_358._s_0.Z = local_2d8._s_0.Z * __real_40c3880000000000 + local_2c0._s_0.Z;
        memset(local_2a8,0,0x100);
        uStack_2db = 0;
        local_1f0.ObjectIndex = 0;
        local_1f0.ObjectSerialNumber = 0;
        FStack_1e8.ObjectIndex = 0;
        FStack_1e8.ObjectSerialNumber = 0;
        uStack_2d9 = 0;
        local_2f8._s_0.Z = 0.0;
        uStack_2e0 = 0xffffffff;
        uStack_2dc = 0;
        uStack_1d8._0_4_ = -1;
        uStack_1d8._4_1_ = Invalid;
        uStack_1d8._5_3_ = 0;
        local_2a8._4_4_ = 1.0;
        local_1e0 = (IActorInstanceManagerInterface *)0x0;
        local_204 = -1;
        bVar7 = UWorld::LineTraceSingleByObjectType
                          (this_00,(FHitResult *)local_2a8,(TVector<double> *)&local_340._s_0,
                           (TVector<double> *)&local_358._s_0,&local_360,
                           &FCollisionQueryParams::DefaultQueryParam);
        if (!bVar7) {
          return;
        }
        if ((local_1fb & 1) == 0) {
          return;
        }
        local_340._s_0.X =
             UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X * __real_4059000000000000 +
             (double)local_2a8._40_8_;
        local_358._s_0.X =
             (double)local_2a8._40_8_ -
             UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X * dVar5;
        local_340._s_0.Y =
             UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y * __real_4059000000000000 +
             dStack_278;
        local_358._s_0.Y =
             dStack_278 - UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y * dVar5;
        local_340._s_0.Z =
             UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z * __real_4059000000000000 +
             local_270;
        local_358._s_0.Z = local_270 - UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z * dVar5
        ;
        bVar7 = UWorld::LineTraceSingleByObjectType
                          (this_00,(FHitResult *)local_2a8,(TVector<double> *)&local_340._s_0,
                           (TVector<double> *)&local_358._s_0,&local_360,
                           &FCollisionQueryParams::DefaultQueryParam);
        if (!bVar7) {
          return;
        }
        if ((local_1fb & 1) == 0) {
          return;
        }
        pUVar11 = FWeakObjectPtr::Get(this_03);
        *(undefined8 *)&pUVar11[0x13].field_0x10 = local_2a8._40_8_;
        *(double *)&pUVar11[0x13].field_0x18 = dStack_278;
        *(double *)&pUVar11[0x13].field_0x20 = local_270;
        pUVar11 = FWeakObjectPtr::Get(this_03);
        pUVar12 = FWeakObjectPtr::Get(this_03);
        cVar17 = '\0';
        dVar2 = *(double *)&pUVar11[0x12].field_0x10 - *(double *)&pUVar12[0x13].field_0x18;
        dVar20 = *(double *)&pUVar11[0x12].field_0x8 - *(double *)&pUVar12[0x13].field_0x10;
        dVar3 = *(double *)(pUVar11 + 0x12) - *(double *)&pUVar12[0x13].field_0x8;
        if ((double)(float)(dVar2 * dVar2 + dVar20 * dVar20) <= dVar3 * dVar3) {
          local_378.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_378.ArrayNum = 0;
          local_378.ArrayMax = 0;
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x101,&local_378.AllocatorInstance,&local_378.ArrayMax);
          iVar9 = iVar8 + 1;
          local_378.AllocatorInstance.Data[iVar8] = (FScriptContainerElement)0x7;
          if (iVar9 == local_378.ArrayMax) {
            local_378.ArrayNum = iVar9;
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x101,&local_378.AllocatorInstance,&local_378.ArrayMax);
          }
          local_378.ArrayNum = iVar9 + 1;
          local_378.AllocatorInstance.Data[iVar9] = (FScriptContainerElement)0x9;
          local_308.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_308.ArrayNum = 0;
          local_308.ArrayMax = 0;
          local_318.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_318.ArrayNum = 0;
          local_318.ArrayMax = 0;
          pUVar13 = Z_Construct_UClass_ADS_EntityActorBase_NoRegister();
          local_2f8._s_0.X = (double)*(undefined8 *)&pUVar12[0x13].field_0x10;
          local_2f8._s_0.Y = (double)*(undefined8 *)&pUVar12[0x13].field_0x18;
          local_2f8._s_0.Z = (double)*(undefined8 *)&pUVar12[0x13].field_0x20;
          UKismetSystemLibrary::CapsuleOverlapActors
                    ((UObject *)this_00,(TVector<double> *)&local_2f8._s_0,
                     (float)*(double *)&pUVar12[0x13].field_0x8,__real_43480000,&local_378,pUVar13,
                     &local_308,&local_318);
          if (0 < local_318.ArrayNum) {
            pUVar11 = FWeakObjectPtr::Get(&this_02->WeakPtr);
            if ((*(int *)&pUVar11[2].field_0xc != 2) &&
               (pUVar10 = UDS_LogManager::GetInst(), pUVar10 != (UDS_LogManager *)0x0)) {
              pUVar10 = UDS_LogManager::GetInst();
              local_1a8._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_1a8,"UDS_PlayerSkillAbility_InstallCamp::UpdateGuideDecal",0x34,Yes)
              ;
              UDS_LogManager::PrintLog
                        (pUVar10,1,Display,local_1a8.Ptr,0x27a,
                         L"SetInstallCampUnableReason(Obstacle)");
              if ((void *)local_1a8._padding_ != (void *)0x0) {
                FMemory::Free((void *)local_1a8._padding_);
              }
            }
            cVar17 = '\x01';
            pUVar11 = FWeakObjectPtr::Get(&this_02->WeakPtr);
            *(undefined4 *)&pUVar11[2].field_0xc = 2;
          }
          if (local_318.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_318.AllocatorInstance.Data);
          }
          if (local_308.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_308.AllocatorInstance.Data);
          }
          if (local_378.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_378.AllocatorInstance.Data);
          }
          if (cVar17 == '\0') {
            local_378.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_378.ArrayNum = 0;
            local_378.ArrayMax = 0;
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,0xc,&local_378.AllocatorInstance,0,&local_378.ArrayMax);
            dVar2 = __real_408f400000000000;
            do {
              __libm_sse2_sincosf_();
              dVar3 = (double)extraout_XMM0_Db * *(double *)&pUVar12[0x13].field_0x8 +
                      *(double *)&pUVar12[0x13].field_0x10;
              dVar20 = (double)extraout_XMM0_Da * *(double *)&pUVar12[0x13].field_0x8 +
                       *(double *)&pUVar12[0x13].field_0x18;
              local_340._s_0.X =
                   UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X * dVar2 + dVar3;
              local_340._s_0.Y =
                   UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y * dVar2 + dVar20;
              local_358._s_0.X =
                   dVar3 - UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X * dVar5;
              local_358._s_0.Y =
                   dVar20 - UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y * dVar5;
              local_340._s_0.Z =
                   UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z * dVar2 +
                   *(double *)&pUVar12[0x13].field_0x20;
              local_358._s_0.Z =
                   *(double *)&pUVar12[0x13].field_0x20 -
                   UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z * dVar5;
              bVar7 = UWorld::LineTraceSingleByObjectType
                                (this_00,(FHitResult *)local_2a8,(TVector<double> *)&local_340._s_0,
                                 (TVector<double> *)&local_358._s_0,&local_360,
                                 &FCollisionQueryParams::DefaultQueryParam);
              if (!bVar7) {
                if (!bVar7) {
                  pUVar11 = FWeakObjectPtr::Get(&this_02->WeakPtr);
                  if ((*(int *)&pUVar11[2].field_0xc != 4) &&
                     (pUVar10 = UDS_LogManager::GetInst(), pUVar10 != (UDS_LogManager *)0x0)) {
                    pUVar10 = UDS_LogManager::GetInst();
                    local_1a8._padding_ = 0;
                    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                              (&local_1a8,"UDS_PlayerSkillAbility_InstallCamp::UpdateGuideDecal",
                               0x34,Yes);
                    UDS_LogManager::PrintLog
                              (pUVar10,1,Display,local_1a8.Ptr,0x30a,
                               L"SetInstallCampUnableReason(HeightLimit)");
                    if ((void *)local_1a8._padding_ != (void *)0x0) {
                      FMemory::Free((void *)local_1a8._padding_);
                    }
                  }
                  cVar17 = '\x01';
                  pUVar11 = FWeakObjectPtr::Get(&this_02->WeakPtr);
                  *(undefined4 *)&pUVar11[2].field_0xc = 4;
                  goto LAB_14b857969;
                }
                break;
              }
              iVar9 = local_378.ArrayNum;
              if (local_378.ArrayNum == local_378.ArrayMax) {
                iVar9 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&local_378.AllocatorInstance,&local_378.ArrayMax);
              }
              local_378.ArrayNum = iVar9 + 1;
              iVar15 = iVar15 + 1;
              *(float *)(local_378.AllocatorInstance.Data + (longlong)iVar9 * 4) = (float)local_270;
            } while (iVar15 < 0xc);
            fVar18 = DS_CommonDataHelper::PlayerSkillCampSitHeightValue();
            iVar15 = local_378.ArrayNum;
            uVar14 = (ulonglong)local_378.ArrayNum;
            pFVar1 = local_378.AllocatorInstance.Data + uVar14 * 4;
            FVar16.Data = local_378.AllocatorInstance.Data;
            fVar21 = __real_7f7fffff;
            fVar22 = __real_ff7fffff;
            while( true ) {
              if ((int)uVar14 != iVar15) {
                `TCheckedPointerIterator<float,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (local_368);
                uVar14 = local_378._8_8_ & 0xffffffff;
              }
              this_03 = local_320;
              if (FVar16.Data == pFVar1) goto LAB_14b857969;
              fVar19 = *(float *)FVar16.Data;
              fVar6 = fVar19;
              if (fVar19 <= fVar22) {
                fVar6 = fVar22;
              }
              fVar22 = fVar6;
              if (fVar21 <= fVar19) {
                fVar19 = fVar21;
              }
              if (fVar18 < fVar22 - fVar19) break;
              FVar16.Data = FVar16.Data + 4;
              fVar21 = fVar19;
            }
            pUVar11 = FWeakObjectPtr::Get(&this_02->WeakPtr);
            if ((*(int *)&pUVar11[2].field_0xc != 4) &&
               (pUVar10 = UDS_LogManager::GetInst(), pUVar10 != (UDS_LogManager *)0x0)) {
              pUVar10 = UDS_LogManager::GetInst();
              local_1a8._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_1a8,"UDS_PlayerSkillAbility_InstallCamp::UpdateGuideDecal",0x34,Yes)
              ;
              UDS_LogManager::PrintLog
                        (pUVar10,1,Display,local_1a8.Ptr,800,
                         L"SetInstallCampUnableReason(HeightLimit)");
              if ((void *)local_1a8._padding_ != (void *)0x0) {
                FMemory::Free((void *)local_1a8._padding_);
              }
            }
            cVar17 = '\x01';
            pUVar11 = FWeakObjectPtr::Get(&this_02->WeakPtr);
            *(undefined4 *)&pUVar11[2].field_0xc = 4;
            this_03 = local_320;
LAB_14b857969:
            if (local_378.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_378.AllocatorInstance.Data);
            }
          }
        }
        else {
          pUVar11 = FWeakObjectPtr::Get(&this_02->WeakPtr);
          if ((*(int *)&pUVar11[2].field_0xc != 1) &&
             (pUVar10 = UDS_LogManager::GetInst(), pUVar10 != (UDS_LogManager *)0x0)) {
            pUVar10 = UDS_LogManager::GetInst();
            local_1a8._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_1a8,"UDS_PlayerSkillAbility_InstallCamp::UpdateGuideDecal",0x34,Yes);
            UDS_LogManager::PrintLog
                      (pUVar10,1,Display,local_1a8.Ptr,0x25a,L"SetInstallCampUnableReason(Distance)"
                      );
            if ((void *)local_1a8._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_1a8._padding_);
            }
          }
          cVar17 = '\x01';
          pUVar11 = FWeakObjectPtr::Get(&this_02->WeakPtr);
          *(undefined4 *)&pUVar11[2].field_0xc = 1;
        }
        pUVar11 = FWeakObjectPtr::Get(this_03);
        pUVar11[0x12].field_0x21 = cVar17;
        pUVar11 = FWeakObjectPtr::Get(&this_02->WeakPtr);
        pUVar11[2].field_0x8 = cVar17 == '\0';
        pUVar11 = FWeakObjectPtr::Get(&this_02->WeakPtr);
        uVar4 = *(undefined8 *)&pUVar12[0x13].field_0x18;
        *(undefined8 *)&pUVar11[2].field_0x10 = *(undefined8 *)&pUVar12[0x13].field_0x10;
        *(undefined8 *)&pUVar11[2].field_0x18 = uVar4;
        *(undefined8 *)&pUVar11[2].field_0x20 = *(undefined8 *)&pUVar12[0x13].field_0x20;
        return;
      }
      pUVar10 = UDS_LogManager::GetInst();
      if (pUVar10 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar10 = UDS_LogManager::GetInst();
      local_1a8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_1a8,"UDS_PlayerSkillAbility_InstallCamp::UpdateGuideDecal",0x34,Yes);
      pwVar24 = L"playerController is nullptr.";
      uVar23 = 0x20c;
    }
  }
  UDS_LogManager::PrintLog(pUVar10,1,Warning,local_1a8.Ptr,uVar23,pwVar24);
  if ((void *)local_1a8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_1a8._padding_);
  }
  return;
}

// UpdateInstallDecal @ 14b857aa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_PlayerSkillAbility_InstallCamp::UpdateInstallDecal
          (UDS_PlayerSkillAbility_InstallCamp *this,float param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_MovementCore *this_00;
  UObject *pUVar3;
  undefined1 auStackY_188 [32];
  TVector<double>_u_0 local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  bVar1 = TWeakObjectPtr<ADS_InstallGuideActor,FWeakObjectPtr>::UEOpEquals
                    (&this->InstallGuideActor,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_PlayerSkillAbility_InstallCamp::UpdateInstallDecal",0x36,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x1ec,L"InstallGuideActor is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_MovementCore::GetActorFootLocation(this_00,(TVector<double> *)&local_158._s_0);
    pUVar3 = FWeakObjectPtr::Get(&(this->InstallGuideActor).WeakPtr);
    *(double *)&pUVar3[0x12].field_0x8 = local_158._s_0.X;
    *(double *)&pUVar3[0x12].field_0x10 = local_158._s_0.Y;
    *(double *)&pUVar3[0x12].field_0x18 = local_158._s_0.Z;
    pUVar3 = FWeakObjectPtr::Get(&(this->InstallGuideActor).WeakPtr);
    pUVar3[0x11].field_0x18 = 1;
  }
  return;
}

