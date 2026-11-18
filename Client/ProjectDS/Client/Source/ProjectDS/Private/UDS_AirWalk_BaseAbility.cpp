// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 18

// StaticClass @ 14b40e640

UClass * __cdecl UDS_AirWalk_BaseAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AirWalk_BaseAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AirWalk_BaseAbility",
               &Z_Registration_Info_UClass_UDS_AirWalk_BaseAbility.InnerSingleton,
               StaticRegisterNativesUDS_AirWalk_BaseAbility,0x160,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_AirWalk_BaseAbility>,
               InternalVTableHelperCtorCaller<UDS_AirWalk_BaseAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AirWalk_BaseAbility.InnerSingleton;
}

// UDS_AirWalk_BaseAbility @ 14b411690

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

UDS_AirWalk_BaseAbility * __thiscall
UDS_AirWalk_BaseAbility::UDS_AirWalk_BaseAbility
          (UDS_AirWalk_BaseAbility *this,FVTableHelper *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->AirWalkAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UDS_AirWalk_BaseAbility @ 14b4116d0

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

UDS_AirWalk_BaseAbility * __thiscall
UDS_AirWalk_BaseAbility::UDS_AirWalk_BaseAbility
          (UDS_AirWalk_BaseAbility *this,FObjectInitializer *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->AirWalkAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UDS_AirWalk_BaseAbility @ 14b412050

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

void __thiscall UDS_AirWalk_BaseAbility::~UDS_AirWalk_BaseAbility(UDS_AirWalk_BaseAbility *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetAirWalkStep @ 14b413080

EDS_AirWalkStep __thiscall UDS_AirWalk_BaseAbility::GetAirWalkStep(UDS_AirWalk_BaseAbility *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_AirWalk_BaseAbility.h"
             ,0x1d,L"Pure virtual not implemented (%s)");
  return Max;
}

// GetPrivateStaticClass @ 14b413a20

UClass * __cdecl UDS_AirWalk_BaseAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AirWalk_BaseAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AirWalk_BaseAbility",
               &Z_Registration_Info_UClass_UDS_AirWalk_BaseAbility.InnerSingleton,
               StaticRegisterNativesUDS_AirWalk_BaseAbility,0x160,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_AirWalk_BaseAbility>,
               InternalVTableHelperCtorCaller<UDS_AirWalk_BaseAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AirWalk_BaseAbility.InnerSingleton;
}

// ShouldHandleZoneChange @ 14b4140b0

bool __thiscall UDS_AirWalk_BaseAbility::ShouldHandleZoneChange(UDS_AirWalk_BaseAbility *this)

{
  return false;
}

// ShouldStopAbilityOnExhaustedStamina @ 14b414110

bool __thiscall
UDS_AirWalk_BaseAbility::ShouldStopAbilityOnExhaustedStamina(UDS_AirWalk_BaseAbility *this)

{
  return false;
}

// StaticRegisterNativesUDS_AirWalk_BaseAbility @ 14b414300

void __cdecl UDS_AirWalk_BaseAbility::StaticRegisterNativesUDS_AirWalk_BaseAbility(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_AirWalk_BaseAbility_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnZoneIDChanged @ 14b415940

void __cdecl
UDS_AirWalk_BaseAbility::execOnZoneIDChanged(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uint *puVar2;
  uint local_res10 [2];
  
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar2 = local_res10;
  if ((uint *)param_2->MostRecentPropertyAddress != (uint *)0x0) {
    puVar2 = (uint *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnZoneIDChanged((UDS_AirWalk_BaseAbility *)param_1,puVar2);
  return;
}

// CheckRequiredStaminaWithMessage @ 14b79fac0

bool __thiscall
UDS_AirWalk_BaseAbility::CheckRequiredStaminaWithMessage(UDS_AirWalk_BaseAbility *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  UDS_CharStatusData *this_00;
  FDS_StatusInfo *pFVar4;
  FWeakObjectPtr local_res8;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
    UDS_CharStatusData::GetData((ulong64)&local_res8);
    bVar2 = TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> *)&local_res8,(void *)0x0)
    ;
    if (!bVar2) {
      this_00 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&local_res8);
      pFVar4 = UDS_CharStatusData::GetStatusInfo(this_00,Stamina);
      if (pFVar4 != (FDS_StatusInfo *)0x0) {
        iVar1 = pFVar4->CurrentValue;
        iVar3 = DS_CommonDataHelper::RateMinRequireFlyStamina();
        if (iVar1 < (int)((float)iVar3 * pFVar4->MaxValue * __real_358637bd)) {
          local_28._0_8_ = 0;
          local_28._8_8_ = 0;
          local_28._16_4_ = 0;
          UDS_UIMessageManager::OpenMsgByStringUi(0x4ca94,Alert_System_01,&local_28);
          return false;
        }
      }
    }
  }
  return true;
}

// NotifyActionProgressFlicker @ 14b7b36a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_AirWalk_BaseAbility::NotifyActionProgressFlicker(UDS_AirWalk_BaseAbility *this)

{
  UDS_EventManager *this_00;
  UDS_LogManager *pUVar1;
  UDS_UIEvent *pUVar2;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    if ((char)this_00->_padding_ == '\x01') {
      pUVar1 = UDS_LogManager::GetInst();
      if (pUVar1 != (UDS_LogManager *)0x0) {
        pUVar1 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_EventManager::GetEvent",0x1a,Yes);
        UDS_LogManager::PrintLog
                  (pUVar1,1,Warning,local_138.Ptr,0x31,
                   L"Cannot access event during UDS_EventManager destruction.");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
          return;
        }
      }
    }
    else {
      pUVar2 = UDS_EventManager::GetEventInternal<UDS_UIEvent>(this_00);
      if (pUVar2 != (UDS_UIEvent *)0x0) {
        FDS_EventDelegate<enum_EDS_ActionProgressType>::Broadcast
                  (&pUVar2->OnActionProgressFlicker,Fly);
      }
    }
  }
  return;
}

// OnCanActivate @ 14b7b5410

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

bool __thiscall UDS_AirWalk_BaseAbility::OnCanActivate(UDS_AirWalk_BaseAbility *this)

{
  bool bVar1;
  EDS_AirWalkStep EVar2;
  TWeakObjectPtr<UDS_AirWalkAbilityData,FWeakObjectPtr> TVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  UDS_AirWalkAbilityData *this_00;
  undefined1 auStackY_198 [32];
  EDS_StateTagType local_168 [16];
  undefined1 local_158 [288];
  void *local_38;
  wchar_t *local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  bVar1 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  if (bVar1) {
    bVar1 = TWeakObjectPtr<UDS_AirWalkAbilityData,FWeakObjectPtr>::UEOpEquals
                      (&this->AirWalkAbilityData,(void *)0x0);
    if (bVar1) {
      local_168[0] = AirWalk_Dash;
      TVar3 = UDS_AbilityDataSet::GetAbilityData<UDS_AirWalkAbilityData>
                        ((ulong64 *)local_158,(EDS_AbilityTagType *)&this->_padding_);
                    /* WARNING: Load size is inaccurate */
      (this->AirWalkAbilityData).WeakPtr = *TVar3.WeakPtr;
      bVar1 = FWeakObjectPtr::IsValid(&(this->AirWalkAbilityData).WeakPtr);
      if (!bVar1) {
        pUVar4 = UDS_LogManager::GetInst();
        if (pUVar4 == (UDS_LogManager *)0x0) {
          return false;
        }
        pUVar4 = UDS_LogManager::GetInst();
        local_38 = (void *)0x0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_158 + 0x20),
                   "UDS_AirWalk_BaseAbility::OnCanActivate",0x26,Yes);
        UDS_LogManager::PrintLog
                  (pUVar4,1,Warning,local_30,0x20,
                   L"Ability terminated abnormally due to data issues.");
        if (local_38 == (void *)0x0) {
          return false;
        }
        FMemory::Free(local_38);
        return false;
      }
    }
    local_168[0] = Skill;
    bVar1 = UDS_GameplayAbility::HasStateTag((UDS_GameplayAbility *)this,local_168);
    if (!bVar1) {
      local_168[0] = ToggleSkill;
      bVar1 = UDS_GameplayAbility::HasStateTag((UDS_GameplayAbility *)this,local_168);
      if (!bVar1) {
        local_158._8_4_ = 0;
        local_158._0_8_ = _vcall__1008__flat______;
        local_158._24_8_ = (ulonglong)(uint)local_158._12_4_ << 0x20;
        local_158._16_8_ = _vcall__1008__flat______;
        pUVar5 = FWeakObjectPtr::Get(&(this->AirWalkAbilityData).WeakPtr);
        TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
        AddUObject<UDS_AirWalk_BaseAbility>
                  ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                   (pUVar5 + 6),(UDS_AirWalk_BaseAbility *)local_158,(pmf_848f51fe *)this);
        this_00 = (UDS_AirWalkAbilityData *)FWeakObjectPtr::Get(&(this->AirWalkAbilityData).WeakPtr)
        ;
        EVar2 = (**(code **)(this->_padding_ + 0x3d8))(this);
        bVar1 = UDS_AirWalkAbilityData::IsNextStepPossible(this_00,EVar2);
        return bVar1;
      }
    }
  }
  return false;
}

// OnChangedFlyStamina @ 14b7b6fb0

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
UDS_AirWalk_BaseAbility::OnChangedFlyStamina(UDS_AirWalk_BaseAbility *this,float param_1)

{
  char cVar1;
  EDS_AbilityDeactivateType local_res8 [32];
  
  cVar1 = (**(code **)(this->_padding_ + 1000))();
  if ((cVar1 == '\x01') && (param_1 <= 0.0)) {
    local_res8[0] = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res8);
  }
  return;
}

// OnDeactivateAbility @ 14b7b7b10

void __thiscall
UDS_AirWalk_BaseAbility::OnDeactivateAbility(UDS_AirWalk_BaseAbility *this,bool *param_1)

{
  char cVar1;
  bool bVar2;
  UDS_ZoneManager *pUVar3;
  UDS_CharStatusData *this_00;
  FDS_StatusInfo *pFVar4;
  FWeakObjectPtr local_res8 [4];
  
  cVar1 = (**(code **)(this->_padding_ + 0x3e0))();
  if (cVar1 == '\x01') {
    pUVar3 = UDS_ZoneManager::GetInst();
    if (pUVar3 != (UDS_ZoneManager *)0x0) {
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                 &pUVar3->ZoneIdChangeDelegate,(UObject *)this);
    }
  }
  cVar1 = (**(code **)(this->_padding_ + 1000))(this);
  if (cVar1 == '\x01') {
    UDS_CharStatusData::GetData((ulong64)local_res8);
    bVar2 = TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> *)local_res8,(void *)0x0);
    if (!bVar2) {
      this_00 = (UDS_CharStatusData *)FWeakObjectPtr::Get(local_res8);
      pFVar4 = UDS_CharStatusData::GetStatusInfo(this_00,Stamina);
      if (pFVar4 != (FDS_StatusInfo *)0x0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &pFVar4->ChangeCurrentValueDelegate,this);
      }
    }
  }
  return;
}

// OnLandEnter @ 14b7b9290

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

void __thiscall UDS_AirWalk_BaseAbility::OnLandEnter(UDS_AirWalk_BaseAbility *this)

{
  EDS_AbilityDeactivateType local_res10 [24];
  
  local_res10[0] = Cancel;
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res10);
  return;
}

// OnPostActivateAbility @ 14b7bac10

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
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

void __thiscall UDS_AirWalk_BaseAbility::OnPostActivateAbility(UDS_AirWalk_BaseAbility *this)

{
  EDS_AirWalkStep EVar1;
  code *pcVar2;
  EDS_AirWalkStep EVar3;
  char cVar4;
  bool bVar5;
  UObject *pUVar6;
  UDS_ZoneManager *pUVar7;
  char *pcVar8;
  UFunction *pUVar9;
  UDS_CharStatusData *this_00;
  FDS_StatusInfo *pFVar10;
  char *pcVar11;
  EDS_AbilityDeactivateType local_res8 [8];
  EDS_AbilityTagType local_res10 [8];
  <lambda_1> local_res18 [8];
  FName local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_f8;
  FWeakObjectPtr local_f0;
  FName local_e8;
  FWeakObjectPtr local_e0;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_d8;
  FName local_c8;
  UDS_AirWalk_BaseAbility *local_c0;
  FName *local_b8;
  FDestructionSentinel local_b0;
  undefined1 local_98 [56];
  FReadAccessScope local_60;
  
  pUVar6 = FWeakObjectPtr::Get(&(this->AirWalkAbilityData).WeakPtr);
  EVar1 = pUVar6[4].field_0x20;
  if (EVar1 == Ready) {
    return;
  }
  EVar3 = (**(code **)(this->_padding_ + 0x3d8))(this);
  if (EVar1 == EVar3) {
    return;
  }
  cVar4 = (**(code **)(this->_padding_ + 0x3e0))(this);
  if ((cVar4 != '\x01') || (pUVar7 = UDS_ZoneManager::GetInst(), pUVar7 == (UDS_ZoneManager *)0x0))
  goto LAB_14b7bae79;
  pcVar8 = strstr("&UDS_AirWalk_BaseAbility::OnZoneIDChanged","::");
  if (pcVar8 == (char *)0x0) {
LAB_14b7bacfb:
    pcVar11 = &DAT_00000002;
LAB_14b7bad00:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    do {
      pcVar11 = pcVar8;
      pcVar8 = strstr(pcVar11 + 1,"::");
    } while (pcVar8 != (char *)0x0);
    if (pcVar11 == (char *)0x0) goto LAB_14b7bacfb;
    pcVar11 = pcVar11 + 2;
    if (*pcVar11 == '0') goto LAB_14b7bad00;
  }
  ::FName::FName(&local_c8,pcVar11);
  local_res20 = local_c8;
  local_f8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_f0.ObjectIndex = 0;
  local_f0.ObjectSerialNumber = 0;
  local_e8.ComparisonIndex.Value = 0;
  local_e8.Number = 0;
  local_c0 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this != (UDS_AirWalk_BaseAbility *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_f0,(FObjectPtr)&local_c0);
  local_e8 = local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_f8,(FReadAccessScope *)(local_98 + 0x20));
  if ((local_e8 == (FName)0x0) ||
     (pUVar6 = FWeakObjectPtr::Get(&local_f0), pUVar6 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_98 + 0x20));
LAB_14b7bade3:
    local_b8 = &local_res20;
    `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,unsigned_int_const_&>::
    __Internal_BindDynamic<UDS_AirWalk_BaseAbility>'::__l2::<lambda_1>::operator()(&local_b8);
  }
  else {
    pUVar9 = UObject::FindFunction(pUVar6,local_e8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_98 + 0x20));
    if (pUVar9 == (UFunction *)0x0) goto LAB_14b7bade3;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_f8,&local_60);
  local_d8.Object = local_f0;
  local_d8.FunctionName = local_e8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_60);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar7->ZoneIdChangeDelegate
             ,(FWriteAccessScope *)&local_b0);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&(pUVar7->ZoneIdChangeDelegate).field_0x8,local_res18,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar7->ZoneIdChangeDelegate,
             &local_d8);
  if (local_b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_f8.AccessDetector);
LAB_14b7bae79:
  cVar4 = (**(code **)(this->_padding_ + 1000))(this);
  if (cVar4 == '\x01') {
    UDS_CharStatusData::GetData((ulong64)&local_e0);
    bVar5 = TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> *)&local_e0,(void *)0x0);
    if (!bVar5) {
      this_00 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&local_e0);
      pFVar10 = UDS_CharStatusData::GetStatusInfo(this_00,Stamina);
      if (pFVar10 != (FDS_StatusInfo *)0x0) {
        local_d8.FunctionName = (FName)((ulonglong)local_d8.FunctionName & 0xffffffff00000000);
        local_d8.Object = (FWeakObjectPtr)OnChangedFlyStamina;
        local_98._16_8_ = OnChangedFlyStamina;
        local_98._24_4_ = local_d8.FunctionName.ComparisonIndex.Value;
        local_98._28_4_ = local_d8.FunctionName.Number;
        TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy>::
        AddUObject<UDS_AirWalk_BaseAbility>
                  ((TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy> *
                   )&pFVar10->ChangeCurrentValueDelegate,(UDS_AirWalk_BaseAbility *)local_98,
                   (pmf_0b179287 *)this);
      }
    }
  }
  local_res8[0] = Success;
  local_res10[0] = UDS_AirWalkAbilityData::GetAirWalkAbilityTagType(EVar1);
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res10,local_res8);
  return;
}

// OnZoneIDChanged @ 14b7becf0

void __thiscall
UDS_AirWalk_BaseAbility::OnZoneIDChanged(UDS_AirWalk_BaseAbility *this,uint *param_1)

{
  return;
}

