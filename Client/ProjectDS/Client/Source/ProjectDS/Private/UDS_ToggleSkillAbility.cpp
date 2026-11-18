// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticClass @ 14b5c3810

UClass * __cdecl UDS_ToggleSkillAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ToggleSkillAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ToggleSkillAbility",
               &Z_Registration_Info_UClass_UDS_ToggleSkillAbility.InnerSingleton,
               StaticRegisterNativesUDS_ToggleSkillAbility,0x178,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ToggleSkillAbility>,
               InternalVTableHelperCtorCaller<UDS_ToggleSkillAbility>,local_res8,
               UDS_ToggleSkillBaseAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ToggleSkillAbility.InnerSingleton;
}

// UDS_ToggleSkillAbility @ 14b5c7100

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

UDS_ToggleSkillAbility * __thiscall
UDS_ToggleSkillAbility::UDS_ToggleSkillAbility(UDS_ToggleSkillAbility *this,FVTableHelper *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  *(undefined4 *)&this->_padding_ = 0x3f800000;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->OwnerSkillData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UDS_ToggleSkillAbility @ 14b5c7150

UDS_ToggleSkillAbility * __thiscall
UDS_ToggleSkillAbility::UDS_ToggleSkillAbility
          (UDS_ToggleSkillAbility *this,FObjectInitializer *param_1)

{
  UDS_ToggleSkillBaseAbility::UDS_ToggleSkillBaseAbility((UDS_ToggleSkillBaseAbility *)this,param_1)
  ;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->OwnerSkillData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UDS_ToggleSkillAbility @ 14b5c8b50

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

void __thiscall UDS_ToggleSkillAbility::~UDS_ToggleSkillAbility(UDS_ToggleSkillAbility *this)

{
  this->_padding_ = (longlong)&UDS_ToggleSkillBaseAbility::_vftable__for__UObject__;
  this->_padding_ =
       (longlong)&UDS_ToggleSkillBaseAbility::_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetDefaultInputPolicy @ 14b5cb860

EDS_AbilityInputPolicy __thiscall
UDS_ToggleSkillAbility::GetDefaultInputPolicy(UDS_ToggleSkillAbility *this)

{
  return BlockInput;
}

// GetPrivateStaticClass @ 14b5cbc60

UClass * __cdecl UDS_ToggleSkillAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ToggleSkillAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ToggleSkillAbility",
               &Z_Registration_Info_UClass_UDS_ToggleSkillAbility.InnerSingleton,
               StaticRegisterNativesUDS_ToggleSkillAbility,0x178,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ToggleSkillAbility>,
               InternalVTableHelperCtorCaller<UDS_ToggleSkillAbility>,local_res8,
               UDS_ToggleSkillBaseAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ToggleSkillAbility.InnerSingleton;
}

// StaticRegisterNativesUDS_ToggleSkillAbility @ 14b5cdf80

void __cdecl UDS_ToggleSkillAbility::StaticRegisterNativesUDS_ToggleSkillAbility(void)

{
  return;
}

// ClearVariables @ 14b827f10

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

void __thiscall UDS_ToggleSkillAbility::ClearVariables(UDS_ToggleSkillAbility *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  UDS_GameplayAbility::SetInputPolicy
            ((UDS_GameplayAbility *)this,(EDS_AbilityInputPolicy *)((longlong)&this->_padding_ + 4))
  ;
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    (**(code **)(*(longlong *)pUVar2 + 0x2c8))(pUVar2);
  }
  (this->OwnerSkillData).WeakPtr = (FWeakObjectPtr)0x0;
  return;
}

// OnCanActivate @ 14b83b5d0

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

bool __thiscall UDS_ToggleSkillAbility::OnCanActivate(UDS_ToggleSkillAbility *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> TVar4;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_148;
  undefined1 local_140 [8];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  bVar1 = UDS_ToggleSkillBaseAbility::OnCanActivate((UDS_ToggleSkillBaseAbility *)this);
  if (bVar1) {
    UDS_GameplayAbility::GetContextData<UDS_SkillAbilityContext>((UDS_GameplayAbility *)this);
    bVar1 = FWeakObjectPtr::IsValid(&local_148);
    if (bVar1) {
      pUVar3 = FWeakObjectPtr::Get(&local_148);
      TVar4 = UDS_SkillData::GetData
                        ((ulong64)local_140,this->_padding_,SUB41(*(undefined4 *)(pUVar3 + 1),0));
                    /* WARNING: Load size is inaccurate */
      (this->OwnerSkillData).WeakPtr = *TVar4.WeakPtr;
      bVar1 = FWeakObjectPtr::IsValid(&(this->OwnerSkillData).WeakPtr);
      if (bVar1) {
        return true;
      }
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar2 = UDS_LogManager::GetInst();
      FWeakObjectPtr::Get(&local_148);
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_ToggleSkillAbility::OnCanActivate",0x25,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x18,L"skill data is invalid. SkillID : %d");
    }
    else {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_ToggleSkillAbility::OnCanActivate",0x25,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x11,L"skill context is invalid.");
    }
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return false;
}

// OnDeactivateAbility @ 14b83fec0

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
UDS_ToggleSkillAbility::OnDeactivateAbility(UDS_ToggleSkillAbility *this,bool *param_1)

{
  UObject *pUVar1;
  EDS_StateTagType local_res8 [32];
  
  local_res8[0] = ToggleSkill;
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if (*(int *)&pUVar1[2].field_0x24 == 2) {
    local_res8[0] = Lock_Rotation;
    UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res8);
    local_res8[0] = Lock_CameraFront;
    UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  }
  local_res8[0] = ToggleSkill;
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  pUVar1 = FWeakObjectPtr::Get(&(this->OwnerSkillData).WeakPtr);
  UDS_GameplayAbility::RemoveStateTagToASC
            ((UDS_GameplayAbility *)this,(FGameplayTag *)&pUVar1[2].field_0x8);
  return;
}

// OnPostActivateAbility @ 14b846750

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

void __thiscall UDS_ToggleSkillAbility::OnPostActivateAbility(UDS_ToggleSkillAbility *this)

{
  void *_Src;
  UObject *pUVar1;
  longlong lVar2;
  EDS_StateTagType local_res8 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_18;
  
  UDS_ToggleSkillBaseAbility::OnPostActivateAbility((UDS_ToggleSkillBaseAbility *)this);
  local_res8[0] = ToggleSkill;
  UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  pUVar1 = FWeakObjectPtr::Get(&(this->OwnerSkillData).WeakPtr);
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = *(int *)&pUVar1[4].field_0x18;
  lVar2 = (longlong)local_18.ArrayNum;
  _Src = *(void **)&pUVar1[4].field_0x10;
  if (local_18.ArrayNum == 0) {
    local_18.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_18.ArrayNum,0,&local_18.AllocatorInstance,local_18.ArrayNum,
               &local_18.ArrayMax);
    memcpy(local_18.AllocatorInstance.Data,_Src,lVar2 << 2);
  }
  pUVar1 = FWeakObjectPtr::Get(&(this->OwnerSkillData).WeakPtr);
  UDS_GameplayAbility::AddStateTagToASC
            ((UDS_GameplayAbility *)this,(FGameplayTag *)&pUVar1[2].field_0x8,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

