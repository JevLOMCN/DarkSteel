// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// StaticClass @ 14b592630

UClass * __cdecl UDS_SkillModeProcessAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SkillModeProcessAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SkillModeProcessAbility",
               &Z_Registration_Info_UClass_UDS_SkillModeProcessAbility.InnerSingleton,
               StaticRegisterNativesUDS_SkillModeProcessAbility,0x168,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_SkillModeProcessAbility>,
               InternalVTableHelperCtorCaller<UDS_SkillModeProcessAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SkillModeProcessAbility.InnerSingleton;
}

// UDS_SkillModeProcessAbility @ 14b594880

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

UDS_SkillModeProcessAbility * __thiscall
UDS_SkillModeProcessAbility::UDS_SkillModeProcessAbility
          (UDS_SkillModeProcessAbility *this,FVTableHelper *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->SkillModeAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UDS_SkillModeProcessAbility @ 14b595430

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
UDS_SkillModeProcessAbility::~UDS_SkillModeProcessAbility(UDS_SkillModeProcessAbility *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b596f70

UClass * __cdecl UDS_SkillModeProcessAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SkillModeProcessAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SkillModeProcessAbility",
               &Z_Registration_Info_UClass_UDS_SkillModeProcessAbility.InnerSingleton,
               StaticRegisterNativesUDS_SkillModeProcessAbility,0x168,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_SkillModeProcessAbility>,
               InternalVTableHelperCtorCaller<UDS_SkillModeProcessAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SkillModeProcessAbility.InnerSingleton;
}

// ShouldNotifyChangedCharState @ 14b5977d0

bool __thiscall
UDS_SkillModeProcessAbility::ShouldNotifyChangedCharState(UDS_SkillModeProcessAbility *this)

{
  return true;
}

// StaticRegisterNativesUDS_SkillModeProcessAbility @ 14b5978a0

void __cdecl UDS_SkillModeProcessAbility::StaticRegisterNativesUDS_SkillModeProcessAbility(void)

{
  return;
}

// UDS_SkillModeProcessAbility @ 14b823420

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

UDS_SkillModeProcessAbility * __thiscall
UDS_SkillModeProcessAbility::UDS_SkillModeProcessAbility
          (UDS_SkillModeProcessAbility *this,FObjectInitializer *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->SkillModeAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ClearVariables @ 14b827e50

void __thiscall UDS_SkillModeProcessAbility::ClearVariables(UDS_SkillModeProcessAbility *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->SkillModeAbilityData).WeakPtr);
  (**(code **)(*(longlong *)pUVar1 + 0x2c8))(pUVar1);
  this->CurrentSkillModeTagType = None;
  return;
}

// Deactivate @ 14b82c910

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
UDS_SkillModeProcessAbility::Deactivate(ulong64 *param_1,EDS_AbilityDeactivateType *param_2)

{
  bool bVar1;
  FDS_EntityBase *this;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_188 [32];
  EDS_AbilityTagType local_148 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  this = FDS_EntityBase::GetEntityBase(param_1);
  if (this == (FDS_EntityBase *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_SkillModeProcessAbility::Deactivate",0x27,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x9d,L"sourceEntity is nullptr. (%llu)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar1 = false;
  }
  else {
    local_148[0] = SkillMode_Process;
    bVar1 = FDS_EntityBase::DeactivateAbility(this,local_148,param_2);
  }
  return bVar1;
}

// OnCanActivate @ 14b83a510

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

bool __thiscall UDS_SkillModeProcessAbility::OnCanActivate(UDS_SkillModeProcessAbility *this)

{
  bool bVar1;
  TWeakObjectPtr<UDS_SkillModeAbilityData,FWeakObjectPtr> TVar2;
  FWeakObjectPtr local_res18;
  ulong64 local_res20;
  
  bVar1 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  if (bVar1) {
    UDS_GameplayAbility::GetContextData<UDS_SkillModeAbilityContext>((UDS_GameplayAbility *)this);
    bVar1 = FWeakObjectPtr::IsValid(&local_res18);
    if (bVar1) {
      bVar1 = TWeakObjectPtr<UDS_SkillModeAbilityData,FWeakObjectPtr>::UEOpEquals
                        (&this->SkillModeAbilityData,(void *)0x0);
      if (bVar1) {
        TVar2 = UDS_AbilityDataSet::GetAbilityData<UDS_SkillModeAbilityData>
                          (&local_res20,(EDS_AbilityTagType *)&this->_padding_);
                    /* WARNING: Load size is inaccurate */
        (this->SkillModeAbilityData).WeakPtr = *TVar2.WeakPtr;
      }
      bVar1 = TWeakObjectPtr<UDS_SkillModeAbilityData,FWeakObjectPtr>::UEOpEquals
                        (&this->SkillModeAbilityData,(void *)0x0);
      return !bVar1;
    }
  }
  return false;
}

// OnChangedCharState @ 14b83c590

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
UDS_SkillModeProcessAbility::OnChangedCharState
          (UDS_SkillModeProcessAbility *this,
          TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,FDS_ChangedCharStateInfo *param_2
          )

{
  bool bVar1;
  UDS_CharStateData *this_00;
  FWeakObjectPtr local_res10;
  EDS_CharState local_res18 [2];
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
  this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
  local_res18[0] = Mount|CharSwitch|Dead|Abnormal|AirWalk|Swim;
  bVar1 = UDS_CharStateData::HasCharState(this_00,local_res18);
  if (bVar1) {
    local_res18[0] = CONCAT71(local_res18[0]._1_7_,2);
    UDS_GameplayAbility::DeactivateAbility
              ((UDS_GameplayAbility *)this,(EDS_AbilityDeactivateType *)local_res18);
  }
  return;
}

// OnDeactivateAbility @ 14b83f910

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
UDS_SkillModeProcessAbility::OnDeactivateAbility(UDS_SkillModeProcessAbility *this,bool *param_1)

{
  UDS_GameplayAbility::DeactivateAbility
            ((UDS_GameplayAbility *)this,&this->CurrentSkillModeTagType,
             (EDS_AbilityDeactivateType *)&this->_padding_);
  return;
}

// OnPostActivateAbility @ 14b845920

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
UDS_SkillModeProcessAbility::OnPostActivateAbility(UDS_SkillModeProcessAbility *this)

{
  bool bVar1;
  UDS_SkillModeAbilityData *this_00;
  UObject *pUVar2;
  EDS_AbilityDeactivateType local_res10 [8];
  FWeakObjectPtr local_res18;
  
  UDS_GameplayAbility::GetContextData<UDS_SkillModeAbilityContext>((UDS_GameplayAbility *)this);
  bVar1 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar1) {
    this_00 = (UDS_SkillModeAbilityData *)FWeakObjectPtr::Get(&(this->SkillModeAbilityData).WeakPtr)
    ;
    pUVar2 = FWeakObjectPtr::Get(&local_res18);
    UDS_SkillModeAbilityData::SetData(this_00,*(int *)(pUVar2 + 1));
    pUVar2 = FWeakObjectPtr::Get(&(this->SkillModeAbilityData).WeakPtr);
    if (pUVar2[2].field_0xc == '\0') {
      this->CurrentSkillModeTagType = SkillMode_Aim;
    }
    else if (pUVar2[2].field_0xc == '\x01') {
      this->CurrentSkillModeTagType = SkillMode_Throw;
    }
    local_res10[0] = None;
    local_res10[1] = None;
    local_res10[2] = None;
    local_res10[3] = None;
    local_res10[4] = None;
    local_res10[5] = None;
    local_res10[6] = None;
    local_res10[7] = None;
    bVar1 = UDS_GameplayAbility::TryActivateAbility
                      ((UDS_GameplayAbility *)this,&this->CurrentSkillModeTagType,
                       (TObjectPtr<UWN_AbilityContext>)local_res10);
    if (bVar1) {
      return;
    }
  }
  local_res10[0] = 2;
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res10);
  return;
}

// StartSkillMode @ 14b8515d0

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

bool __thiscall UDS_SkillModeProcessAbility::StartSkillMode(UDS_SkillModeProcessAbility *this)

{
  bool bVar1;
  UObject *pUVar2;
  undefined8 local_res8 [4];
  
  pUVar2 = FWeakObjectPtr::Get(&(this->SkillModeAbilityData).WeakPtr);
  if (pUVar2[2].field_0xc == '\0') {
    this->CurrentSkillModeTagType = SkillMode_Aim;
  }
  else if (pUVar2[2].field_0xc == '\x01') {
    this->CurrentSkillModeTagType = SkillMode_Throw;
  }
  local_res8[0] = 0;
  bVar1 = UDS_GameplayAbility::TryActivateAbility
                    ((UDS_GameplayAbility *)this,&this->CurrentSkillModeTagType,
                     (TObjectPtr<UWN_AbilityContext>)local_res8);
  return bVar1;
}

// TryActivate @ 14b853ab0

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __cdecl UDS_SkillModeProcessAbility::TryActivate(ulong64 *param_1,int param_2)

{
  bool bVar1;
  FDS_EntityBase *this;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  longlong *plVar5;
  undefined1 auStackY_208 [32];
  EDS_AbilityTagType local_1c8 [8];
  UObject *local_1c0;
  undefined1 local_1b8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_208;
  if ((*param_1 == 0) || (param_2 == 0)) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_SkillModeProcessAbility::TryActivate",0x28,Yes);
    UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x87,L"Invalid parameter.");
  }
  else {
    this = FDS_EntityBase::GetEntityBase(param_1);
    if (this != (FDS_EntityBase *)0x0) {
      pUVar3 = GetTransientPackageAsObject();
      FObjectInitializer::AssertIfInConstructor
                (pUVar3,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar4 = Z_Construct_UClass_UDS_SkillModeAbilityContext_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_1b8,pUVar4);
      local_1b8._8_8_ = pUVar3;
      pUVar3 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1b8);
      if (local_1b8._64_8_ != 0) {
        plVar5 = (longlong *)(local_1b8 + 0x50);
        if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
          plVar5 = (longlong *)local_1b8._104_8_;
        }
        (**(code **)(*plVar5 + 0x10))();
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      *(int *)(pUVar3 + 1) = param_2;
      local_1c0 = pUVar3;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      local_1c8[0] = SkillMode_Process;
      bVar1 = FDS_EntityBase::TryActivateAbility
                        (this,local_1c8,(TObjectPtr<UWN_AbilityContext>)&local_1c0);
      return bVar1;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = (longlong)this;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_SkillModeProcessAbility::TryActivate",0x28,Yes);
    UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x8e,L"sourceEntity is nullptr. (%llu)")
    ;
  }
  if ((FDS_EntityBase *)local_138._padding_ != (FDS_EntityBase *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

