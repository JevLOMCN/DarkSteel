// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 17

// StaticClass @ 14b5c3390

UClass * __cdecl UDS_ToggleSkillBaseAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ToggleSkillBaseAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ToggleSkillBaseAbility",
               &Z_Registration_Info_UClass_UDS_ToggleSkillBaseAbility.InnerSingleton,
               StaticRegisterNativesUDS_ToggleSkillBaseAbility,0x170,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ToggleSkillBaseAbility>,
               InternalVTableHelperCtorCaller<UDS_ToggleSkillBaseAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ToggleSkillBaseAbility.InnerSingleton;
}

// UDS_ToggleSkillBaseAbility @ 14b5c7230

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

UDS_ToggleSkillBaseAbility * __thiscall
UDS_ToggleSkillBaseAbility::UDS_ToggleSkillBaseAbility
          (UDS_ToggleSkillBaseAbility *this,FVTableHelper *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->TickCheckDelayTime = 1.0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->ToggleSkillAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UDS_ToggleSkillBaseAbility @ 14b5c8bb0

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
UDS_ToggleSkillBaseAbility::~UDS_ToggleSkillBaseAbility(UDS_ToggleSkillBaseAbility *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b5cbde0

UClass * __cdecl UDS_ToggleSkillBaseAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ToggleSkillBaseAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ToggleSkillBaseAbility",
               &Z_Registration_Info_UClass_UDS_ToggleSkillBaseAbility.InnerSingleton,
               StaticRegisterNativesUDS_ToggleSkillBaseAbility,0x170,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ToggleSkillBaseAbility>,
               InternalVTableHelperCtorCaller<UDS_ToggleSkillBaseAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ToggleSkillBaseAbility.InnerSingleton;
}

// ShouldTickComponent @ 14b5cdee0

bool __thiscall UDS_ToggleSkillBaseAbility::ShouldTickComponent(UDS_ToggleSkillBaseAbility *this)

{
  return true;
}

// StaticRegisterNativesUDS_ToggleSkillBaseAbility @ 14b5cdfa0

void __cdecl UDS_ToggleSkillBaseAbility::StaticRegisterNativesUDS_ToggleSkillBaseAbility(void)

{
  return;
}

// UDS_ToggleSkillBaseAbility @ 14b823570

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

UDS_ToggleSkillBaseAbility * __thiscall
UDS_ToggleSkillBaseAbility::UDS_ToggleSkillBaseAbility
          (UDS_ToggleSkillBaseAbility *this,FObjectInitializer *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->TickCheckDelayTime = 1.0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->ToggleSkillAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// CheckAbilityUseTime @ 14b8260c0

void __thiscall UDS_ToggleSkillBaseAbility::CheckAbilityUseTime(UDS_ToggleSkillBaseAbility *this)

{
  UObject *pUVar1;
  
  if (((*(char *)((longlong)&this->_padding_ + 1) != '\0') &&
      (pUVar1 = FWeakObjectPtr::Get(&(this->ToggleSkillAbilityData).WeakPtr),
      pUVar1[2].field_0xc == '\x03')) &&
     (pUVar1 = FWeakObjectPtr::Get(&(this->ToggleSkillAbilityData).WeakPtr),
     *(float *)&pUVar1[2].field_0x20 <= this->ElapsedTime)) {
    RequestDeactivateAbility(this);
  }
  return;
}

// ClearVariables @ 14b827f80

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

void __thiscall UDS_ToggleSkillBaseAbility::ClearVariables(UDS_ToggleSkillBaseAbility *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  this->ElapsedTime = 0.0;
  this->CostCheckDelayTime = 0.0;
  UDS_GameplayAbility::SetInputPolicy((UDS_GameplayAbility *)this,&this->BackupInputPolicy);
  bVar1 = FWeakObjectPtr::IsValid(&(this->ToggleSkillAbilityData).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->ToggleSkillAbilityData).WeakPtr);
                    /* WARNING: Could not recover jumptable at 0x00014b827fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 0x2c8))(pUVar2,*(code **)(*(longlong *)pUVar2 + 0x2c8));
    return;
  }
  return;
}

// InitControllMoveTime @ 14b833590

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

void __thiscall UDS_ToggleSkillBaseAbility::InitControllMoveTime(UDS_ToggleSkillBaseAbility *this)

{
  bool bVar1;
  EDS_AbilityInputPolicy EVar2;
  UDS_LogManager *pUVar3;
  UDS_ToggleSkillAbilityData *this_00;
  UObject *pUVar4;
  undefined1 auStackY_178 [32];
  EDS_AbilityInputPolicy local_148 [8];
  FWeakObjectPtr local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  UDS_GameplayAbility::GetContextData<UDS_SkillAbilityContext>((UDS_GameplayAbility *)this);
  bVar1 = FWeakObjectPtr::IsValid(&local_140);
  if (bVar1) {
    bVar1 = FWeakObjectPtr::IsValid(&(this->ToggleSkillAbilityData).WeakPtr);
    if (bVar1) {
      this_00 = (UDS_ToggleSkillAbilityData *)
                FWeakObjectPtr::Get(&(this->ToggleSkillAbilityData).WeakPtr);
      pUVar4 = FWeakObjectPtr::Get(&local_140);
      bVar1 = UDS_ToggleSkillAbilityData::SetData(this_00,*(int *)(pUVar4 + 1));
      if (bVar1) {
        EVar2 = UDS_GameplayAbility::GetInputPolicy((UDS_GameplayAbility *)this);
        this->BackupInputPolicy = EVar2;
        local_148[0] = BlockInput;
        UDS_GameplayAbility::SetInputPolicy((UDS_GameplayAbility *)this,local_148);
      }
      else {
        RequestDeactivateAbility(this);
      }
    }
    else {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_ToggleSkillBaseAbility::InitControllMoveTime",0x30,Yes);
        UDS_LogManager::PrintLog
                  (pUVar3,1,Warning,local_138.Ptr,0x87,L"ToggleSkillAbilityData is invalid");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
  }
  return;
}

// OnCanActivate @ 14b83b790

bool __thiscall UDS_ToggleSkillBaseAbility::OnCanActivate(UDS_ToggleSkillBaseAbility *this)

{
  bool bVar1;
  TWeakObjectPtr<UDS_ToggleSkillAbilityData,FWeakObjectPtr> TVar2;
  ulong64 local_res18 [2];
  
  bVar1 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  if (bVar1) {
    bVar1 = TWeakObjectPtr<UDS_ToggleSkillAbilityData,FWeakObjectPtr>::UEOpEquals
                      (&this->ToggleSkillAbilityData,(void *)0x0);
    if (bVar1) {
      TVar2 = UDS_AbilityDataSet::GetAbilityData<UDS_ToggleSkillAbilityData>
                        (local_res18,(EDS_AbilityTagType *)&this->_padding_);
                    /* WARNING: Load size is inaccurate */
      (this->ToggleSkillAbilityData).WeakPtr = *TVar2.WeakPtr;
    }
    bVar1 = TWeakObjectPtr<UDS_ToggleSkillAbilityData,FWeakObjectPtr>::UEOpEquals
                      (&this->ToggleSkillAbilityData,(void *)0x0);
    return !bVar1;
  }
  return false;
}

// OnDeactivateAbility @ 14b83ff50

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
UDS_ToggleSkillBaseAbility::OnDeactivateAbility(UDS_ToggleSkillBaseAbility *this,bool *param_1)

{
  UObject *pUVar1;
  EDS_StateTagType local_res8 [32];
  
  local_res8[0] = ToggleSkill;
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  pUVar1 = FWeakObjectPtr::Get(&(this->ToggleSkillAbilityData).WeakPtr);
  if (*(int *)&pUVar1[2].field_0x24 == 2) {
    local_res8[0] = Lock_Rotation;
    UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res8);
    local_res8[0] = Lock_CameraFront;
    UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  }
  return;
}

// OnPostActivateAbility @ 14b846840

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

void __thiscall UDS_ToggleSkillBaseAbility::OnPostActivateAbility(UDS_ToggleSkillBaseAbility *this)

{
  bool bVar1;
  EDS_AbilityInputPolicy EVar2;
  UDS_LogManager *pUVar3;
  UDS_ToggleSkillAbilityData *this_00;
  UObject *pUVar4;
  undefined1 auStackY_178 [32];
  EDS_AbilityInputPolicy local_148 [8];
  FWeakObjectPtr local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  UDS_GameplayAbility::GetContextData<UDS_SkillAbilityContext>((UDS_GameplayAbility *)this);
  bVar1 = FWeakObjectPtr::IsValid(&local_140);
  if (bVar1) {
    bVar1 = FWeakObjectPtr::IsValid(&(this->ToggleSkillAbilityData).WeakPtr);
    if (bVar1) {
      this_00 = (UDS_ToggleSkillAbilityData *)
                FWeakObjectPtr::Get(&(this->ToggleSkillAbilityData).WeakPtr);
      pUVar4 = FWeakObjectPtr::Get(&local_140);
      bVar1 = UDS_ToggleSkillAbilityData::SetData(this_00,*(int *)(pUVar4 + 1));
      if (bVar1) {
        EVar2 = UDS_GameplayAbility::GetInputPolicy((UDS_GameplayAbility *)this);
        this->BackupInputPolicy = EVar2;
        local_148[0] = BlockInput;
        UDS_GameplayAbility::SetInputPolicy((UDS_GameplayAbility *)this,local_148);
        local_148[0] = 0x17;
        UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_148);
        pUVar4 = FWeakObjectPtr::Get(&(this->ToggleSkillAbilityData).WeakPtr);
        if (*(int *)&pUVar4[2].field_0x24 != 2) {
          return;
        }
        local_148[0] = 0x22;
        UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_148);
        local_148[0] = 0x25;
        UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_148);
        return;
      }
    }
    else {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_ToggleSkillBaseAbility::OnPostActivateAbility",0x31,Yes);
        UDS_LogManager::PrintLog
                  (pUVar3,1,Warning,local_138.Ptr,0x3a,L"ToggleSkillAbilityData is invalid");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
  }
  RequestDeactivateAbility(this);
  return;
}

// OnTickComponent @ 14b84a680

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
UDS_ToggleSkillBaseAbility::OnTickComponent(UDS_ToggleSkillBaseAbility *this,float param_1)

{
  char cVar1;
  UObject *pUVar2;
  
  UDS_GameplayAbility::OnTickComponent((UDS_GameplayAbility *)this,param_1);
  cVar1 = *(char *)((longlong)&this->_padding_ + 1);
  this->ElapsedTime = param_1 + this->ElapsedTime;
  if (cVar1 != '\0') {
    pUVar2 = FWeakObjectPtr::Get(&(this->ToggleSkillAbilityData).WeakPtr);
    if (pUVar2[2].field_0xc == '\x03') {
      pUVar2 = FWeakObjectPtr::Get(&(this->ToggleSkillAbilityData).WeakPtr);
      if (*(float *)&pUVar2[2].field_0x20 <= this->ElapsedTime) {
        RequestDeactivateAbility(this);
      }
    }
  }
  UpdateSkillCost(this,param_1);
  if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
    pUVar2 = FWeakObjectPtr::Get(&(this->ToggleSkillAbilityData).WeakPtr);
    if (*(int *)&pUVar2[2].field_0x24 != 3) {
      pUVar2 = FWeakObjectPtr::Get(&(this->ToggleSkillAbilityData).WeakPtr);
      if (*(float *)&pUVar2[2].field_0x1c <= this->ElapsedTime) {
        UDS_GameplayAbility::SetInputPolicy((UDS_GameplayAbility *)this,&this->BackupInputPolicy);
      }
    }
  }
  return;
}

// RequestDeactivateAbility @ 14b84d550

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
UDS_ToggleSkillBaseAbility::RequestDeactivateAbility(UDS_ToggleSkillBaseAbility *this)

{
  bool bVar1;
  EDS_AbilityDeactivateType local_res10 [8];
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  
  UDS_GameplayAbility::GetContextData<UDS_SkillAbilityContext>((UDS_GameplayAbility *)this);
  bVar1 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar1) {
    local_res20 = FWeakObjectPtr::Get(&local_res18);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res20);
    }
    local_res10[0] = 0x15;
    bVar1 = UDS_GameplayAbility::TryActivateAbility
                      ((UDS_GameplayAbility *)this,local_res10,
                       (TObjectPtr<UWN_AbilityContext>)&local_res20);
    if (!bVar1) {
      local_res10[0] = Cancel;
      UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res10);
    }
  }
  return;
}

// UpdateInputPolicy @ 14b857a30

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
UDS_ToggleSkillBaseAbility::UpdateInputPolicy(UDS_ToggleSkillBaseAbility *this,float param_1)

{
  UObject *pUVar1;
  
  if (((*(char *)((longlong)&this->_padding_ + 1) != '\0') &&
      (pUVar1 = FWeakObjectPtr::Get(&(this->ToggleSkillAbilityData).WeakPtr),
      *(int *)&pUVar1[2].field_0x24 != 3)) &&
     (pUVar1 = FWeakObjectPtr::Get(&(this->ToggleSkillAbilityData).WeakPtr),
     *(float *)&pUVar1[2].field_0x1c <= this->ElapsedTime)) {
    UDS_GameplayAbility::SetInputPolicy((UDS_GameplayAbility *)this,&this->BackupInputPolicy);
  }
  return;
}

// UpdateSkillCost @ 14b859fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_ToggleSkillBaseAbility::UpdateSkillCost(UDS_ToggleSkillBaseAbility *this,float param_1)

{
  FScriptContainerElement FVar1;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  UDS_LogManager *pUVar6;
  UObject *pUVar7;
  UDS_CharStatusData *this_00;
  ForAnyElementType FVar8;
  longlong lVar9;
  uint uVar10;
  float fVar11;
  undefined1 auStackY_1b8 [32];
  ForAnyElementType local_178;
  int local_170;
  int local_16c;
  FWeakObjectPtr local_168 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
    UDS_PlayerData::GetMainPlayerCurrentEntityID();
    UDS_CharStatusData::GetData((ulong64)local_168);
    bVar3 = TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> *)local_168,(void *)0x0);
    if (bVar3) {
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar6 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_ToggleSkillBaseAbility::UpdateSkillCost",0x2b,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_158.Ptr,0xad,L"charStatusData is nullptr.");
      FVar8.Data = (FScriptContainerElement *)local_158._padding_;
    }
    else {
      fVar11 = param_1 + this->CostCheckDelayTime;
      this->CostCheckDelayTime = fVar11;
      if (fVar11 < this->TickCheckDelayTime) {
        return;
      }
      pUVar7 = FWeakObjectPtr::Get(&(this->ToggleSkillAbilityData).WeakPtr);
      local_178.Data = (FScriptContainerElement *)0x0;
      local_170 = *(int *)&pUVar7[3].field_0x8;
      lVar9 = (longlong)local_170;
      _Src = *(void **)(pUVar7 + 3);
      if (local_170 == 0) {
        local_16c = 0;
        iVar5 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,local_170,0,&local_178,local_170,&local_16c);
        memcpy(local_178.Data,_Src,lVar9 << 3);
        iVar5 = local_170;
      }
      uVar10 = 0;
      if (0 < iVar5) {
        lVar9 = 0;
        do {
          uVar4 = 0;
          if ((int)uVar10 < iVar5) {
            uVar4 = ~uVar10 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          FVar1 = local_178.Data[lVar9];
          this_00 = (UDS_CharStatusData *)FWeakObjectPtr::Get(local_168);
          iVar5 = UDS_CharStatusData::GetCurrentStatus(this_00,(EDS_SkillCostType)FVar1);
          uVar4 = 0;
          if ((int)uVar10 < local_170) {
            uVar4 = ~uVar10 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if ((float)iVar5 < *(float *)(local_178.Data + lVar9 + 4)) {
            RequestDeactivateAbility(this);
            break;
          }
          uVar10 = uVar10 + 1;
          lVar9 = lVar9 + 8;
          iVar5 = local_170;
        } while ((int)uVar10 < local_170);
      }
      this->CostCheckDelayTime = 0.0;
      FVar8.Data = local_178.Data;
    }
    if (FVar8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar8.Data);
    }
  }
  return;
}

