// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// StaticClass @ 14b4bb770

UClass * __cdecl UDS_InteractionAbility_NPCMountInteraction::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionAbility_NPCMountInteraction.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionAbility_NPCMountInteraction",
               &Z_Registration_Info_UClass_UDS_InteractionAbility_NPCMountInteraction.InnerSingleton
               ,StaticRegisterNativesUDS_InteractionAbility_NPCMountInteraction,0x158,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_InteractionAbility_NPCMountInteraction>,
               InternalVTableHelperCtorCaller<UDS_InteractionAbility_NPCMountInteraction>,local_res8
               ,UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionAbility_NPCMountInteraction.InnerSingleton;
}

// UDS_InteractionAbility_NPCMountInteraction @ 14b4c1670

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

UDS_InteractionAbility_NPCMountInteraction * __thiscall
UDS_InteractionAbility_NPCMountInteraction::UDS_InteractionAbility_NPCMountInteraction
          (UDS_InteractionAbility_NPCMountInteraction *this,FVTableHelper *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// UDS_InteractionAbility_NPCMountInteraction @ 14b4c16b0

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

UDS_InteractionAbility_NPCMountInteraction * __thiscall
UDS_InteractionAbility_NPCMountInteraction::UDS_InteractionAbility_NPCMountInteraction
          (UDS_InteractionAbility_NPCMountInteraction *this,FObjectInitializer *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// ~UDS_InteractionAbility_NPCMountInteraction @ 14b4c2440

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
UDS_InteractionAbility_NPCMountInteraction::~UDS_InteractionAbility_NPCMountInteraction
          (UDS_InteractionAbility_NPCMountInteraction *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b4c4c60

UClass * __cdecl UDS_InteractionAbility_NPCMountInteraction::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionAbility_NPCMountInteraction.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionAbility_NPCMountInteraction",
               &Z_Registration_Info_UClass_UDS_InteractionAbility_NPCMountInteraction.InnerSingleton
               ,StaticRegisterNativesUDS_InteractionAbility_NPCMountInteraction,0x158,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_InteractionAbility_NPCMountInteraction>,
               InternalVTableHelperCtorCaller<UDS_InteractionAbility_NPCMountInteraction>,local_res8
               ,UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionAbility_NPCMountInteraction.InnerSingleton;
}

// StaticRegisterNativesUDS_InteractionAbility_NPCMountInteraction @ 14b4c56b0

void __cdecl
UDS_InteractionAbility_NPCMountInteraction::
StaticRegisterNativesUDS_InteractionAbility_NPCMountInteraction(void)

{
  return;
}

// BindInteractionEvent @ 14b7db1b0

void __thiscall
UDS_InteractionAbility_NPCMountInteraction::BindInteractionEvent
          (UDS_InteractionAbility_NPCMountInteraction *this)

{
  UDS_ContentManager *pUVar1;
  
  pUVar1 = UDS_ContentManager::GetInst();
  if (pUVar1 != (UDS_ContentManager *)0x0) {
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_ContentsTabFrameType),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_InteractionAbility_NPCMountInteraction>
              (&pUVar1->CloseContentEvent,
               (UDS_InteractionAbility_NPCMountInteraction *)&stack0x00000010,(pmf_61e06f36 *)this);
  }
  return;
}

// OnAbilityRetryActivate @ 14b7f4810

void __thiscall
UDS_InteractionAbility_NPCMountInteraction::OnAbilityRetryActivate
          (UDS_InteractionAbility_NPCMountInteraction *this)

{
  return;
}

// OnCanActivate @ 14b7f6b00

bool __thiscall
UDS_InteractionAbility_NPCMountInteraction::OnCanActivate
          (UDS_InteractionAbility_NPCMountInteraction *this)

{
  bool bVar1;
  
  bVar1 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  return bVar1;
}

// OnCloseContentEvent @ 14b7fa860

void __thiscall
UDS_InteractionAbility_NPCMountInteraction::OnCloseContentEvent
          (UDS_InteractionAbility_NPCMountInteraction *this,EDS_ContentsTabFrameType param_1)

{
  UDS_AbilitySystemComponent *this_00;
  FGameplayTag *pFVar1;
  EDS_AbilityTagType local_res10 [8];
  EDS_AbilityDeactivateType local_res18 [16];
  
  if (param_1 == MountInteraction) {
    local_res18[0] = Success;
    local_res10[0] = Interaction_NPCMountInteraction;
    this_00 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0xb8)
    ;
    pFVar1 = FDS_GameplayTags::GetAbilityTag(local_res10);
    UDS_AbilitySystemComponent::DeactivateAbilityByTag(this_00,pFVar1,local_res18);
  }
  return;
}

// OnDeactivateAbility @ 14b7fc470

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
UDS_InteractionAbility_NPCMountInteraction::OnDeactivateAbility
          (UDS_InteractionAbility_NPCMountInteraction *this,bool *param_1)

{
  UDS_ContentManager *this_00;
  FGameplayTag *pFVar1;
  EDS_ContentsTabFrameType local_res18 [4];
  
  this_00 = UDS_ContentManager::GetInst();
  if (this_00 != (UDS_ContentManager *)0x0) {
    local_res18[0] = MountInteraction;
    UDS_ContentManager::CloseContent(this_00,local_res18);
    local_res18[0] = CONCAT31(local_res18[0]._1_3_,0x55);
    pFVar1 = FDS_GameplayTags::GetStateTag((EDS_StateTagType *)local_res18);
    UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,pFVar1);
  }
  return;
}

// OnPostActivateAbility @ 14b804520

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
UDS_InteractionAbility_NPCMountInteraction::OnPostActivateAbility
          (UDS_InteractionAbility_NPCMountInteraction *this)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  UDS_ContentManager *pUVar5;
  UObject *pUVar6;
  UDS_ContentArguments *pUVar7;
  FGameplayTag *pFVar8;
  undefined1 *puVar9;
  TPairInitializer<FName_const_&,unsigned___int64_const_&> local_res10;
  ulong64 **local_28;
  ulong64 *puStack_20;
  
  pUVar5 = UDS_ContentManager::GetInst();
  if (pUVar5 != (UDS_ContentManager *)0x0) {
    puStack_20 = (ulong64 *)((ulonglong)puStack_20 & 0xffffffff00000000);
    local_28 = (ulong64 **)OnCloseContentEvent;
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_ContentsTabFrameType),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_InteractionAbility_NPCMountInteraction>
              (&pUVar5->CloseContentEvent,(UDS_InteractionAbility_NPCMountInteraction *)&local_res10
               ,(pmf_61e06f36 *)this);
  }
  pUVar5 = UDS_ContentManager::GetInst();
  if (pUVar5 != (UDS_ContentManager *)0x0) {
    pUVar6 = GetTransientPackageAsObject();
    pUVar7 = NewObject<UDS_ContentArguments>(pUVar6);
    ::FName::FName((FName *)&local_res10.Value,"InteractionMountEntityID");
    uVar3 = ::GetTypeHash((FNameEntryId)(uint)local_res10.Value);
    if (*(int *)&(pUVar7->UInt64Map).field_0x8 != *(int *)&(pUVar7->UInt64Map).field_0x34) {
      puVar9 = *(undefined1 **)&(pUVar7->UInt64Map).field_0x40;
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = &(pUVar7->UInt64Map).field_0x38;
      }
      iVar4 = *(int *)(puVar9 + (ulonglong)
                                (*(int *)&(pUVar7->UInt64Map).field_0x48 - 1U &
                                (int)((ulonglong)local_res10.Value >> 0x20) + uVar3) * 4);
      if (iVar4 != -1) {
        lVar1 = *(longlong *)&(pUVar7->UInt64Map).field_0x0;
        do {
          if (*(ulong64 **)(lVar1 + (longlong)iVar4 * 0x18) == local_res10.Value)
          goto LAB_14b804640;
          iVar4 = *(int *)(lVar1 + 0x10 + (longlong)iVar4 * 0x18);
        } while (iVar4 != -1);
      }
    }
    local_28 = &local_res10.Value;
    puStack_20 = &TargetEntityID;
    TSet<TTuple<FName,unsigned___int64>,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,unsigned___int64_const_&>_>
              ((TSet<TTuple<FName,unsigned___int64>,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>,FDefaultSetAllocator>
                *)&pUVar7->UInt64Map,&local_res10,(bool *)&local_28);
LAB_14b804640:
    local_res10.Value = (ulong64 *)pUVar7;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar7 != (UDS_ContentArguments *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    local_res10.Key._0_4_ = 0x32c9;
    bVar2 = UDS_ContentManager::OpenContent
                      (pUVar5,(EDS_ContentsTabFrameType *)&local_res10,
                       (TObjectPtr<UDS_ContentArguments>)&local_res10.Value);
    if (bVar2) {
      local_res10.Key._0_1_ = 0x55;
      pFVar8 = FDS_GameplayTags::GetStateTag((EDS_StateTagType *)&local_res10);
      UDS_GameplayAbility::AddTagToASC((UDS_GameplayAbility *)this,pFVar8);
    }
  }
  return;
}

// TryActivate @ 14b814a70

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
UDS_InteractionAbility_NPCMountInteraction::TryActivate
          (ulong64 *param_1,ulong64 *param_2,int param_3)

{
  bool bVar1;
  FDS_EntityBase *this;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_188 [32];
  EDS_AbilityTagType local_148 [8];
  undefined8 local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if ((*param_1 == 0) || (*param_2 == 0)) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_InteractionAbility_NPCMountInteraction::TryActivate",0x37,Yes);
    UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x17,L"Invalid parameter.");
  }
  else {
    TargetEntityID = *param_2;
    InteractionID = param_3;
    this = FDS_EntityBase::GetEntityBase(param_1);
    if (this != (FDS_EntityBase *)0x0) {
      local_140 = 0;
      local_148[0] = Interaction_NPCMountInteraction;
      bVar1 = FDS_EntityBase::TryActivateAbility
                        (this,local_148,(TObjectPtr<UWN_AbilityContext>)&local_140);
      return bVar1;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_InteractionAbility_NPCMountInteraction::TryActivate",0x37,Yes);
    UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x21,L"sourceEntity is nullptr. (%llu)")
    ;
  }
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

