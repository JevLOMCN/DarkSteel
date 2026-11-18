// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 14

// StaticClass @ 14b4f4e60

UClass * __cdecl UDS_MountAbility_Leap::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MountAbility_Leap.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MountAbility_Leap",
               &Z_Registration_Info_UClass_UDS_MountAbility_Leap.InnerSingleton,
               StaticRegisterNativesUDS_MountAbility_Leap,0x170,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_MountAbility_Leap>,
               InternalVTableHelperCtorCaller<UDS_MountAbility_Leap>,local_res8,
               UDS_MountBaseAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MountAbility_Leap.InnerSingleton;
}

// UDS_MountAbility_Leap @ 14b4f7ec0

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

UDS_MountAbility_Leap * __thiscall
UDS_MountAbility_Leap::UDS_MountAbility_Leap(UDS_MountAbility_Leap *this,FVTableHelper *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->EndTime = 0.0;
  this->MountTID = 0;
  return this;
}

// UDS_MountAbility_Leap @ 14b4f7f10

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

UDS_MountAbility_Leap * __thiscall
UDS_MountAbility_Leap::UDS_MountAbility_Leap
          (UDS_MountAbility_Leap *this,FObjectInitializer *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->EndTime = 0.0;
  this->MountTID = 0;
  return this;
}

// ~UDS_MountAbility_Leap @ 14b4f86b0

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

void __thiscall UDS_MountAbility_Leap::~UDS_MountAbility_Leap(UDS_MountAbility_Leap *this)

{
  this->_padding_ = (longlong)&UDS_MountBaseAbility::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UDS_MountBaseAbility::_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b4fa2b0

UClass * __cdecl UDS_MountAbility_Leap::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MountAbility_Leap.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MountAbility_Leap",
               &Z_Registration_Info_UClass_UDS_MountAbility_Leap.InnerSingleton,
               StaticRegisterNativesUDS_MountAbility_Leap,0x170,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_MountAbility_Leap>,
               InternalVTableHelperCtorCaller<UDS_MountAbility_Leap>,local_res8,
               UDS_MountBaseAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MountAbility_Leap.InnerSingleton;
}

// ShouldNotifyChangedCharState @ 14b4fa6d0

bool __thiscall UDS_MountAbility_Leap::ShouldNotifyChangedCharState(UDS_MountAbility_Leap *this)

{
  return true;
}

// ShouldTickComponent @ 14b4fa730

bool __thiscall UDS_MountAbility_Leap::ShouldTickComponent(UDS_MountAbility_Leap *this)

{
  return true;
}

// StaticRegisterNativesUDS_MountAbility_Leap @ 14b4fa8c0

void __cdecl UDS_MountAbility_Leap::StaticRegisterNativesUDS_MountAbility_Leap(void)

{
  return;
}

// OnAbilityRetryActivate @ 14b8379a0

void __thiscall UDS_MountAbility_Leap::OnAbilityRetryActivate(UDS_MountAbility_Leap *this)

{
  return;
}

// OnCanActivate @ 14b8387b0

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

bool __thiscall UDS_MountAbility_Leap::OnCanActivate(UDS_MountAbility_Leap *this)

{
  bool bVar1;
  int iVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_178 [32];
  EDS_StateTagType local_148 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar1 = UDS_MountBaseAbility::OnCanActivate((UDS_MountBaseAbility *)this);
  if (bVar1) {
    local_148[0] = Mount;
    bVar1 = UDS_GameplayAbility::HasStateTag((UDS_GameplayAbility *)this,local_148);
    if (bVar1) {
      iVar2 = UDS_MountManager::GetMountIdByMainPlayer();
      this->MountTID = iVar2;
      if (iVar2 != 0) {
        return true;
      }
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_MountAbility_Leap::OnCanActivate",0x24,Yes);
        UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x2b,L"mountID is 0.");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
  }
  return false;
}

// OnChangedCharState @ 14b83be90

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
UDS_MountAbility_Leap::OnChangedCharState
          (UDS_MountAbility_Leap *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
          FDS_ChangedCharStateInfo *param_2)

{
  FDS_ChangedCharStateInfo local_38;
  
  local_38.StateTag.TagName = (param_2->StateTag).TagName;
  local_38.bIsStateTagOn = param_2->bIsStateTagOn;
  local_38._9_7_ = *(undefined7 *)&param_2->field_0x9;
  local_38.AddedCharState = param_2->AddedCharState;
  local_38.RemovedCharState = param_2->RemovedCharState;
  local_38.AddedCharDetailState = param_2->AddedCharDetailState;
  local_38.RemovedCharDetailState = param_2->RemovedCharDetailState;
  UDS_GameplayAbility::OnChangedCharState((UDS_GameplayAbility *)this,param_1,&local_38);
  return;
}

// OnDeactivateAbility @ 14b83e800

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
UDS_MountAbility_Leap::OnDeactivateAbility(UDS_MountAbility_Leap *this,bool *param_1)

{
  code *pcVar1;
  bool bVar2;
  FGameplayTag *pFVar3;
  UObject *pUVar4;
  UObject *pUVar5;
  EDS_StateTagType local_res8 [16];
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  undefined8 local_38 [2];
  
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_38[0] = 0;
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)local_38);
  local_res8[0] = Mount_Leap;
  pFVar3 = FDS_GameplayTags::GetStateTag(local_res8);
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,pFVar3);
  UDS_CharStatusData::GetData((ulong64)&local_res18);
  bVar2 = TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> *)&local_res18,(void *)0x0);
  if (!bVar2) {
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pcVar1 = *(code **)(*(longlong *)pUVar4 + 0x420);
    pUVar5 = FWeakObjectPtr::Get(&local_res18);
    (*pcVar1)(pUVar4,(float)*(double *)&pUVar5[4].field_0x10);
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pcVar1 = *(code **)(*(longlong *)pUVar4 + 0x418);
    pUVar5 = FWeakObjectPtr::Get(&local_res18);
    (*pcVar1)(pUVar4,(float)(*(double *)&pUVar5[4].field_0x10 + *(double *)&pUVar5[4].field_0x10));
    this->EndTime = 0.0;
  }
  return;
}

// OnPostActivateAbility @ 14b842bd0

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

void __thiscall UDS_MountAbility_Leap::OnPostActivateAbility(UDS_MountAbility_Leap *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_GameInstance *pUVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  FGameplayTag *pFVar6;
  undefined1 auStackY_188 [32];
  EDS_AbilityTagType local_158;
  EDS_AbilityDeactivateType local_157 [2];
  EDS_AbilityInputPolicy local_155;
  EDS_StateTagType local_154 [4];
  FWeakObjectPtr local_150;
  undefined8 local_148;
  undefined8 local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_158 = Mount_Flying;
  local_148 = 0;
  bVar2 = UDS_GameplayAbility::TryActivateAbility
                    ((UDS_GameplayAbility *)this,&local_158,
                     (TObjectPtr<UWN_AbilityContext>)&local_148);
  if (bVar2) {
    this->EndTime = 0.0;
    pUVar3 = UDS_GameInstance::GetInst();
    if (pUVar3 == (UDS_GameInstance *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_MountAbility_Leap::OnPostActivateAbility",0x2c,Yes);
        UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x41,L"gameInst is nullptr.");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2100980731416150082>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_MountAbility_Leap.cpp"
                         ,0x42,"false");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_157[1] = 2;
      UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_157 + 1);
    }
    else {
      local_155 = BlockInput;
      UDS_GameplayAbility::SetInputPolicy((UDS_GameplayAbility *)this,&local_155);
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      (**(code **)(*(longlong *)pUVar5 + 0x418))(pUVar5,0);
      local_150.ObjectIndex = 0;
      local_150.ObjectSerialNumber = 0;
      local_140 = 0;
      FWeakObjectPtr::operator=(&local_150,(FObjectPtr)&local_140);
      local_154[0] = Mount_Leap;
      pFVar6 = FDS_GameplayTags::GetStateTag(local_154);
      UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,pFVar6);
    }
  }
  else {
    local_157[0] = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_157);
  }
  return;
}

// OnTickComponent @ 14b8483b0

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

void __thiscall UDS_MountAbility_Leap::OnTickComponent(UDS_MountAbility_Leap *this,float param_1)

{
  float fVar1;
  float fVar2;
  FDS_MountBaseTableRow *pFVar3;
  UObject *pUVar4;
  float fVar5;
  EDS_AbilityDeactivateType local_res10 [24];
  undefined8 local_48;
  undefined8 uStack_40;
  double local_38;
  
  UDS_GameplayAbility::OnTickComponent((UDS_GameplayAbility *)this,param_1);
  if (this->MountTID != 0) {
    pFVar3 = FDS_MountBaseTableRow::GetRef((longlong)this->MountTID,true);
    fVar1 = this->EndTime;
    fVar2 = pFVar3->LeapTime;
    if (fVar2 < fVar1) {
      local_res10[0] = Success;
      UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res10);
      return;
    }
    fVar5 = param_1;
    if (fVar2 < fVar1 + param_1) {
      fVar5 = fVar2 - fVar1;
    }
    if (fVar2 != 0.0) {
      local_48 = 0;
      uStack_40 = 0;
      local_38 = (double)((pFVar3->LeapHeight * __real_42c80000) / pFVar3->LeapTime);
      pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      (**(code **)(*(longlong *)pUVar4 + 0x2c8))(pUVar4,&local_48,fVar5,1);
      this->EndTime = param_1 + this->EndTime;
      return;
    }
  }
  local_res10[0] = Cancel;
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res10);
  return;
}

