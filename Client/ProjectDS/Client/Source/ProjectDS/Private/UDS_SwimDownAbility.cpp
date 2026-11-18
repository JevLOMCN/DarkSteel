// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 17

// StaticClass @ 14b5ac260

UClass * __cdecl UDS_SwimDownAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SwimDownAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SwimDownAbility",
               &Z_Registration_Info_UClass_UDS_SwimDownAbility.InnerSingleton,
               StaticRegisterNativesUDS_SwimDownAbility,0x178,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_SwimDownAbility>,
               InternalVTableHelperCtorCaller<UDS_SwimDownAbility>,local_res8,
               UDS_SwimBaseAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SwimDownAbility.InnerSingleton;
}

// UDS_SwimDownAbility @ 14b5b1800

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

UDS_SwimDownAbility * __thiscall
UDS_SwimDownAbility::UDS_SwimDownAbility(UDS_SwimDownAbility *this,FVTableHelper *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->ElapsedTime = 0.0;
  return this;
}

// UDS_SwimDownAbility @ 14b5b1850

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

UDS_SwimDownAbility * __thiscall
UDS_SwimDownAbility::UDS_SwimDownAbility(UDS_SwimDownAbility *this,FObjectInitializer *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->ElapsedTime = 0.0;
  return this;
}

// ~UDS_SwimDownAbility @ 14b5b26b0

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

void __thiscall UDS_SwimDownAbility::~UDS_SwimDownAbility(UDS_SwimDownAbility *this)

{
  this->_padding_ = (longlong)&UDS_SwimBaseAbility::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UDS_SwimBaseAbility::_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b5b4210

UClass * __cdecl UDS_SwimDownAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SwimDownAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SwimDownAbility",
               &Z_Registration_Info_UClass_UDS_SwimDownAbility.InnerSingleton,
               StaticRegisterNativesUDS_SwimDownAbility,0x178,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_SwimDownAbility>,
               InternalVTableHelperCtorCaller<UDS_SwimDownAbility>,local_res8,
               UDS_SwimBaseAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SwimDownAbility.InnerSingleton;
}

// GetSwimStep @ 14b5b5270

EDS_SwimStep __thiscall UDS_SwimDownAbility::GetSwimStep(UDS_SwimDownAbility *this)

{
  return SwimDown;
}

// ShouldStopAbilityOnExhaustedStamina @ 14b5b57d0

bool __thiscall UDS_SwimDownAbility::ShouldStopAbilityOnExhaustedStamina(UDS_SwimDownAbility *this)

{
  return true;
}

// ShouldTickComponent @ 14b5b5820

bool __thiscall UDS_SwimDownAbility::ShouldTickComponent(UDS_SwimDownAbility *this)

{
  return true;
}

// StaticRegisterNativesUDS_SwimDownAbility @ 14b5b5890

void __cdecl UDS_SwimDownAbility::StaticRegisterNativesUDS_SwimDownAbility(void)

{
  return;
}

// CheckWaterVolumeWithMessage @ 14b827690

bool __thiscall UDS_SwimDownAbility::CheckWaterVolumeWithMessage(UDS_SwimDownAbility *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UObject *pUVar4;
  longlong lVar5;
  FString *pFVar6;
  FDS_WaterVolumeTableRow *this_00;
  FWeakObjectPtr local_res10;
  FName local_res18 [2];
  FString local_48;
  FString local_38;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  ADS_MainCharacter::GetMainPlayer();
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar2) {
    pUVar4 = FWeakObjectPtr::Get(&local_res10);
    lVar5 = (**(code **)(*(longlong *)pUVar4 + 0x510))(pUVar4);
    if ((lVar5 != 0) && ((*(byte *)(lVar5 + 0x304) & 1) != 0)) {
      local_res18[0] = *(FName *)(lVar5 + 0x18);
      ::FName::ToString(local_res18,&local_48);
      pFVar6 = ::FString::FString(&local_38,&local_48);
      this_00 = FDS_WaterVolumeTableRow::GetRefByUniqueID(pFVar6);
      bVar2 = FDS_WaterVolumeTableRow::IsValid(this_00);
      if (!bVar2) {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6628968243950256446>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_SwimBaseAbility.cpp"
                           ,0x13e,"waterVolumeTable.IsValid()");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      goto LAB_14b827773;
    }
  }
  this_00 = &FDS_WaterVolumeTableRow::DefaultObject;
LAB_14b827773:
  if (this_00->IsDive == false) {
    local_28._0_8_ = 0;
    local_28._8_8_ = 0;
    local_28._16_4_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi(0x4ca90,Alert_System_01,&local_28);
  }
  return this_00->IsDive;
}

// EndDive @ 14b82d450

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

void __thiscall UDS_SwimDownAbility::EndDive(UDS_SwimDownAbility *this)

{
  EDS_AbilityDeactivateType local_res10 [24];
  
  local_res10[0] = 9;
  UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_res10);
  local_res10[0] = Success;
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res10);
  return;
}

// OnCanActivate @ 14b83b060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_SwimDownAbility::OnCanActivate(UDS_SwimDownAbility *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  UDS_CharStatusData *this_00;
  FDS_StatusInfo *pFVar6;
  UDS_EventManager *this_01;
  UDS_LogManager *pUVar7;
  UDS_UIEvent *pUVar8;
  UObject *pUVar9;
  longlong lVar10;
  FString *pFVar11;
  FDS_WaterVolumeTableRow *this_02;
  undefined1 auStackY_1e8 [32];
  bool local_1b8 [4];
  EDS_SpecialBuffType local_1b4;
  FWeakObjectPtr local_1b0;
  FWeakObjectPtr local_1a8;
  FName local_1a0;
  FString local_198;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_188;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_170;
  FString local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  bVar3 = UDS_SwimBaseAbility::OnCanActivate((UDS_SwimBaseAbility *)this);
  if (!bVar3) {
    return false;
  }
  if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
    UDS_CharStatusData::GetData((ulong64)&local_1b0);
    bVar3 = TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> *)&local_1b0,(void *)0x0);
    if (!bVar3) {
      this_00 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&local_1b0);
      pFVar6 = UDS_CharStatusData::GetStatusInfo(this_00,Stamina);
      if ((pFVar6 != (FDS_StatusInfo *)0x0) &&
         (iVar1 = pFVar6->CurrentValue, iVar5 = DS_CommonDataHelper::RateMinRequireDiveStamina(),
         iVar1 < (int)((float)iVar5 * pFVar6->MaxValue * __real_358637bd))) {
        local_188._0_8_ = 0;
        local_188._8_8_ = 0;
        local_188._16_4_ = 0;
        UDS_UIMessageManager::OpenMsgByStringUi(0x4ca92,Alert_System_01,&local_188);
        this_01 = UDS_EventManager::GetInst();
        if (this_01 == (UDS_EventManager *)0x0) {
          return false;
        }
        if ((char)this_01->_padding_ != '\x01') {
          pUVar8 = UDS_EventManager::GetEventInternal<UDS_UIEvent>(this_01);
          if (pUVar8 == (UDS_UIEvent *)0x0) {
            return false;
          }
          FDS_EventDelegate<enum_EDS_ActionProgressType>::Broadcast
                    (&pUVar8->OnActionProgressFlicker,Fly);
          return false;
        }
        pUVar7 = UDS_LogManager::GetInst();
        if (pUVar7 == (UDS_LogManager *)0x0) {
          return false;
        }
        pUVar7 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_EventManager::GetEvent",0x1a,Yes);
        UDS_LogManager::PrintLog
                  (pUVar7,1,Warning,local_148.Ptr,0x31,
                   L"Cannot access event during UDS_EventManager destruction.");
        if ((void *)local_148._padding_ == (void *)0x0) {
          return false;
        }
        FMemory::Free((void *)local_148._padding_);
        return false;
      }
    }
  }
  ADS_MainCharacter::GetMainPlayer();
  bVar3 = FWeakObjectPtr::IsValid(&local_1a8);
  if (bVar3) {
    pUVar9 = FWeakObjectPtr::Get(&local_1a8);
    lVar10 = (**(code **)(*(longlong *)pUVar9 + 0x510))(pUVar9);
    if ((lVar10 != 0) && ((*(byte *)(lVar10 + 0x304) & 1) != 0)) {
      local_1a0 = *(FName *)(lVar10 + 0x18);
      ::FName::ToString(&local_1a0,&local_198);
      pFVar11 = ::FString::FString(&local_158,&local_198);
      this_02 = FDS_WaterVolumeTableRow::GetRefByUniqueID(pFVar11);
      bVar3 = FDS_WaterVolumeTableRow::IsValid(this_02);
      if ((!bVar3) &&
         (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6628968243950256446>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_SwimBaseAbility.cpp"
                             ,0x13e,"waterVolumeTable.IsValid()"), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.Data.AllocatorInstance.Data);
      }
      goto LAB_14b83b2dc;
    }
  }
  this_02 = &FDS_WaterVolumeTableRow::DefaultObject;
LAB_14b83b2dc:
  if (this_02->IsDive == false) {
    local_170._0_8_ = 0;
    local_170._8_8_ = 0;
    local_170._16_4_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi(0x4ca90,Alert_System_01,&local_170);
    if (this_02->IsDive == false) {
      return false;
    }
  }
  local_1b8[0] = true;
  local_1b4 = ForbidDive;
  bVar3 = UDS_CharBuffData::CheckForbidSpecialBuff((ulong64 *)&this->_padding_,&local_1b4,local_1b8)
  ;
  if (!bVar3) {
    return false;
  }
  bVar3 = UDS_SwimBaseAbility::CanNextStep((UDS_SwimBaseAbility *)this,SwimDown);
  return bVar3;
}

// OnDeactivateAbility @ 14b83fb80

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

void __thiscall UDS_SwimDownAbility::OnDeactivateAbility(UDS_SwimDownAbility *this,bool *param_1)

{
  bool bVar1;
  UDS_SwimAbilityData *pUVar2;
  EDS_AbilityInputPolicy local_res18 [16];
  
  UDS_SwimBaseAbility::OnDeactivateAbility((UDS_SwimBaseAbility *)this,param_1);
  local_res18[0] = None;
  UDS_GameplayAbility::SetInputPolicy((UDS_GameplayAbility *)this,local_res18);
  bVar1 = UDS_SwimBaseAbility::IsFullySubmerged((UDS_SwimBaseAbility *)this);
  if ((bVar1) && (bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_), bVar1)) {
    pUVar2 = (UDS_SwimAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    bVar1 = UDS_SwimAbilityData::CanNextStep(pUVar2,SwimSubmerge);
    if ((bVar1) && (bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_), bVar1)) {
      pUVar2 = (UDS_SwimAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      UDS_SwimAbilityData::DoNextStep(pUVar2,SwimSubmerge);
    }
  }
  local_res18[0] = 0xc;
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res18);
  local_res18[0] = 8;
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res18);
  return;
}

// OnPostActivateAbility @ 14b8464b0

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

void __thiscall UDS_SwimDownAbility::OnPostActivateAbility(UDS_SwimDownAbility *this)

{
  bool bVar1;
  UDS_SwimAbilityData *this_00;
  EDS_AbilityInputPolicy local_res8 [8];
  
  UDS_SwimBaseAbility::OnPostActivateAbility((UDS_SwimBaseAbility *)this);
  this->ElapsedTime = 0.0;
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar1) {
    this_00 = (UDS_SwimAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_SwimAbilityData::DoNextStep(this_00,SwimDown);
  }
  local_res8[0] = 8;
  UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  local_res8[0] = 0xc;
  UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  local_res8[0] = BlockInput;
  UDS_GameplayAbility::SetInputPolicy((UDS_GameplayAbility *)this,local_res8);
  return;
}

// OnTickComponent @ 14b84a1c0

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

void __thiscall UDS_SwimDownAbility::OnTickComponent(UDS_SwimDownAbility *this,float param_1)

{
  code *pcVar1;
  char cVar2;
  UDS_MovementCore *this_00;
  TMatrix<double> *this_01;
  UObject *pUVar3;
  TVector<double> *pTVar4;
  undefined1 auStack_118 [32];
  EDS_AbilityDeactivateType local_f8 [8];
  TRotator<double> local_f0;
  TVector<double> local_d8;
  TVector<double> local_c0;
  TMatrix<double> local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  UDS_GameplayAbility::OnTickComponent((UDS_GameplayAbility *)this,param_1);
  this->ElapsedTime = param_1 + this->ElapsedTime;
  cVar2 = (**(code **)(this->_padding_ + 0x3e0))(this);
  if (cVar2 != '\0') {
    this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_MovementCore::GetActorForwardVector(this_00,&local_d8);
    this_01 = UE::Math::TRotationMatrix<double>::MakeFromX(&local_a8,&local_d8);
    UE::Math::TMatrix<double>::Rotator(this_01,&local_f0);
    local_f0.Pitch = local_f0.Pitch + __real_c04e000000000000;
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pcVar1 = *(code **)(*(longlong *)pUVar3 + 0x2e0);
    pTVar4 = UE::Math::TRotator<double>::Vector(&local_f0,&local_c0);
    (*pcVar1)(pUVar3,pTVar4);
  }
  if (__real_3f800000 < this->ElapsedTime || __real_3f800000 == this->ElapsedTime) {
    local_f8[0] = 9;
    UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_f8);
    local_f8[0] = Success;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_f8);
  }
  return;
}

// StartDive @ 14b851540

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

void __thiscall UDS_SwimDownAbility::StartDive(UDS_SwimDownAbility *this)

{
  bool bVar1;
  UDS_SwimAbilityData *this_00;
  EDS_AbilityInputPolicy local_res8 [8];
  
  this->ElapsedTime = 0.0;
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar1) {
    this_00 = (UDS_SwimAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_SwimAbilityData::DoNextStep(this_00,SwimDown);
  }
  local_res8[0] = 8;
  UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  local_res8[0] = 0xc;
  UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  local_res8[0] = BlockInput;
  UDS_GameplayAbility::SetInputPolicy((UDS_GameplayAbility *)this,local_res8);
  return;
}

// UpdateDive @ 14b856de0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UDS_SwimDownAbility::UpdateDive(UDS_SwimDownAbility *this,float param_1)

{
  code *pcVar1;
  char cVar2;
  UDS_MovementCore *this_00;
  TMatrix<double> *this_01;
  UObject *pUVar3;
  TVector<double> *pTVar4;
  undefined1 auStack_108 [32];
  TRotator<double> local_e8;
  TVector<double> local_d0;
  TVector<double> local_b8;
  TMatrix<double> local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_108;
  cVar2 = (**(code **)(this->_padding_ + 0x3e0))();
  if (cVar2 != '\0') {
    this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_MovementCore::GetActorForwardVector(this_00,&local_d0);
    this_01 = UE::Math::TRotationMatrix<double>::MakeFromX(&local_98,&local_d0);
    UE::Math::TMatrix<double>::Rotator(this_01,&local_e8);
    local_e8.Pitch = local_e8.Pitch + __real_c04e000000000000;
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pcVar1 = *(code **)(*(longlong *)pUVar3 + 0x2e0);
    pTVar4 = UE::Math::TRotator<double>::Vector(&local_e8,&local_b8);
    (*pcVar1)(pUVar3,pTVar4);
  }
  return;
}

