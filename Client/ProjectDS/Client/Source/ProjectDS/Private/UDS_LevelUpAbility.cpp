// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// StaticClass @ 14b4db980

UClass * __cdecl UDS_LevelUpAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_LevelUpAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_LevelUpAbility",
               &Z_Registration_Info_UClass_UDS_LevelUpAbility.InnerSingleton,
               StaticRegisterNativesUDS_LevelUpAbility,0x160,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_LevelUpAbility>,
               InternalVTableHelperCtorCaller<UDS_LevelUpAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_LevelUpAbility.InnerSingleton;
}

// UDS_LevelUpAbility @ 14b4dfc70

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

UDS_LevelUpAbility * __thiscall
UDS_LevelUpAbility::UDS_LevelUpAbility(UDS_LevelUpAbility *this,FVTableHelper *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->ElapsedTime = 0.0;
  this->LevelUpTime = 0.0;
  return this;
}

// UDS_LevelUpAbility @ 14b4dfcb0

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

UDS_LevelUpAbility * __thiscall
UDS_LevelUpAbility::UDS_LevelUpAbility(UDS_LevelUpAbility *this,FObjectInitializer *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->ElapsedTime = 0.0;
  this->LevelUpTime = 0.0;
  return this;
}

// ~UDS_LevelUpAbility @ 14b4e0390

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

void __thiscall UDS_LevelUpAbility::~UDS_LevelUpAbility(UDS_LevelUpAbility *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b4e2080

UClass * __cdecl UDS_LevelUpAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_LevelUpAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_LevelUpAbility",
               &Z_Registration_Info_UClass_UDS_LevelUpAbility.InnerSingleton,
               StaticRegisterNativesUDS_LevelUpAbility,0x160,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_LevelUpAbility>,
               InternalVTableHelperCtorCaller<UDS_LevelUpAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_LevelUpAbility.InnerSingleton;
}

// StaticRegisterNativesUDS_LevelUpAbility @ 14b4e2890

void __cdecl UDS_LevelUpAbility::StaticRegisterNativesUDS_LevelUpAbility(void)

{
  return;
}

// ClearVariables @ 14b7dc920

void __thiscall UDS_LevelUpAbility::ClearVariables(UDS_LevelUpAbility *this)

{
  return;
}

// OnAbilityRetryActivate @ 14b7f4c70

void __thiscall UDS_LevelUpAbility::OnAbilityRetryActivate(UDS_LevelUpAbility *this)

{
  return;
}

// OnCanActivate @ 14b7f7e30

bool __thiscall UDS_LevelUpAbility::OnCanActivate(UDS_LevelUpAbility *this)

{
  bool bVar1;
  
  bVar1 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  return bVar1;
}

// OnDeactivateAbility @ 14b7fd390

void __thiscall UDS_LevelUpAbility::OnDeactivateAbility(UDS_LevelUpAbility *this,bool *param_1)

{
  return;
}

// OnPostActivateAbility @ 14b807200

/* WARNING: Removing unreachable block (ram,0x00014b81134d) */
/* WARNING: Removing unreachable block (ram,0x00014b811383) */
/* WARNING: Removing unreachable block (ram,0x00014b8112ec) */
/* WARNING: Removing unreachable block (ram,0x00014b811322) */
/* WARNING: Removing unreachable block (ram,0x00014b8113b5) */
/* WARNING: Removing unreachable block (ram,0x00014b8113eb) */
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

void __thiscall UDS_LevelUpAbility::OnPostActivateAbility(UDS_LevelUpAbility *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_AbilitySystemComponent *pUVar4;
  UObject *pUVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  EDS_AbilityDeactivateType aEStackX_8 [8];
  EDS_AbilityDeactivateType aEStackX_10 [8];
  EDS_AbilityDeactivateType aEStackX_18 [8];
  int iStackX_20;
  FWeakObjectPtr FStack_168;
  TArray<int,TSizedDefaultAllocator<32>_> TStack_160;
  TArray<int,TSizedDefaultAllocator<32>_> TStack_150;
  TArray<int,TSizedDefaultAllocator<32>_> TStack_140;
  UClass *pUStack_130;
  UObject *pUStack_128;
  undefined1 auStack_120 [192];
  undefined1 auStack_60 [32];
  
  iStackX_20 = 100;
  iVar9 = 0;
  iVar8 = 0;
  iVar7 = 0;
  iVar6 = 10;
  iVar10 = 0x32;
  DS_CommonDataHelper::IdLevelupEffect01(&TStack_140);
  if (TStack_140.ArrayNum == 2) {
    iVar6 = *(int *)TStack_140.AllocatorInstance.Data;
    iVar9 = *(int *)(TStack_140.AllocatorInstance.Data + 4);
  }
  DS_CommonDataHelper::IdLevelupEffect02(&TStack_150);
  if (TStack_150.ArrayNum == 2) {
    iVar10 = *(int *)TStack_150.AllocatorInstance.Data;
    iVar8 = *(int *)(TStack_150.AllocatorInstance.Data + 4);
  }
  DS_CommonDataHelper::IdLevelupEffect03(&TStack_160);
  if (TStack_160.ArrayNum == 2) {
    iStackX_20 = *(int *)TStack_160.AllocatorInstance.Data;
    iVar7 = *(int *)(TStack_160.AllocatorInstance.Data + 4);
  }
  FDS_EntityBase::GetCharInfoData((FDS_EntityBase *)this->_padding_);
  bVar3 = TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> *)&FStack_168,(void *)0x0);
  if (bVar3) {
    aEStackX_8[0] = Success;
    pUVar4 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_AbilitySystemComponent::DeactivateAbilityByTag
              (pUVar4,(FGameplayTag *)&this->_padding_,aEStackX_8);
    goto LAB_14b8115c0;
  }
  pUVar5 = FWeakObjectPtr::Get(&FStack_168);
  iVar1 = *(int *)&pUVar5[8].field_0xc;
  if (iStackX_20 < iVar1) {
    if (iVar1 <= iVar10) goto LAB_14b811468;
    iVar7 = 0;
    if (iVar6 < iVar1) goto LAB_14b811478;
LAB_14b811475:
    iVar7 = iVar9;
  }
  else if (iVar1 <= iVar10) {
LAB_14b811468:
    iVar7 = iVar8;
    if (iVar1 <= iVar6) goto LAB_14b811475;
  }
LAB_14b811478:
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  pcVar2 = *(code **)(*(longlong *)pUVar5 + 0x738);
  pUStack_130 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUStack_130 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUStack_130);
  }
  pUVar5 = (UObject *)(*pcVar2)(pUVar5,&pUStack_130);
  if (pUVar5 == (UObject *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5191197370037043309>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_LevelUpAbility.cpp"
                       ,0x6d,"skmComp");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    aEStackX_10[0] = Success;
    pUVar4 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_AbilitySystemComponent::DeactivateAbilityByTag
              (pUVar4,(FGameplayTag *)&this->_padding_,aEStackX_10);
  }
  else {
    FDS_EffectSpawnInfo::FDS_EffectSpawnInfo((FDS_EffectSpawnInfo *)auStack_120);
    auStack_120._40_8_ = this->_padding_;
    pUStack_128 = pUVar5;
    auStack_120._0_4_ = iVar7;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(auStack_120 + 0x34),(FObjectPtr)&pUStack_128);
    UDS_EffectManager::PlayEffect((FDS_EffectSpawnInfo *)auStack_120);
    aEStackX_18[0] = Success;
    pUVar4 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_AbilitySystemComponent::DeactivateAbilityByTag
              (pUVar4,(FGameplayTag *)&this->_padding_,aEStackX_18);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_60);
    if ((void *)auStack_60._8_8_ != (void *)0x0) {
      FMemory::Free((void *)auStack_60._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)auStack_60);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)auStack_120._184_8_);
    if ((FScriptContainerElement *)auStack_120._24_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)auStack_120._24_8_);
    }
  }
LAB_14b8115c0:
  if (TStack_160.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_160.AllocatorInstance.Data);
  }
  if (TStack_150.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_150.AllocatorInstance.Data);
  }
  if (TStack_140.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_140.AllocatorInstance.Data);
  }
  return;
}

// OnTickComponent @ 14b80b2a0

void __thiscall UDS_LevelUpAbility::OnTickComponent(UDS_LevelUpAbility *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UObject *pUVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  FWeakObjectPtr FStackX_8;
  
  lVar6 = (longlong)(int)this->_padding_;
  uVar5 = 0;
  if (0 < lVar6) {
    lVar7 = 0;
    do {
      if ((int)uVar5 < 0) {
        return;
      }
      if ((int)this->_padding_ <= (int)uVar5) {
        return;
      }
      uVar3 = 0;
      if ((int)uVar5 < (int)this->_padding_) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FStackX_8 = *(FWeakObjectPtr *)(this->_padding_ + lVar7 * 8);
      bVar2 = TWeakObjectPtr<UDS_GameplayAbility,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_GameplayAbility,FWeakObjectPtr> *)&FStackX_8,
                         (void *)0x0);
      if (!bVar2) {
        pUVar4 = FWeakObjectPtr::Get(&FStackX_8);
        (**(code **)(*(longlong *)pUVar4 + 0x368))(pUVar4,param_1);
      }
      uVar5 = uVar5 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar6);
  }
  return;
}

// ShowEffect @ 14b811290

/* WARNING: Removing unreachable block (ram,0x00014b81134d) */
/* WARNING: Removing unreachable block (ram,0x00014b811383) */
/* WARNING: Removing unreachable block (ram,0x00014b8112ec) */
/* WARNING: Removing unreachable block (ram,0x00014b811322) */
/* WARNING: Removing unreachable block (ram,0x00014b8113b5) */
/* WARNING: Removing unreachable block (ram,0x00014b8113eb) */
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

void __thiscall UDS_LevelUpAbility::ShowEffect(UDS_LevelUpAbility *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_AbilitySystemComponent *pUVar4;
  UObject *pUVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  EDS_AbilityDeactivateType local_res8 [8];
  EDS_AbilityDeactivateType local_res10 [8];
  EDS_AbilityDeactivateType local_res18 [8];
  int local_res20;
  FWeakObjectPtr local_168;
  TArray<int,TSizedDefaultAllocator<32>_> local_160;
  TArray<int,TSizedDefaultAllocator<32>_> local_150;
  TArray<int,TSizedDefaultAllocator<32>_> local_140;
  UClass *local_130;
  UObject *local_128;
  undefined1 local_120 [192];
  undefined1 local_60 [32];
  
  local_res20 = 100;
  iVar9 = 0;
  iVar8 = 0;
  iVar7 = 0;
  iVar6 = 10;
  iVar10 = 0x32;
  DS_CommonDataHelper::IdLevelupEffect01(&local_140);
  if (local_140.ArrayNum == 2) {
    iVar6 = *(int *)local_140.AllocatorInstance.Data;
    iVar9 = *(int *)(local_140.AllocatorInstance.Data + 4);
  }
  DS_CommonDataHelper::IdLevelupEffect02(&local_150);
  if (local_150.ArrayNum == 2) {
    iVar10 = *(int *)local_150.AllocatorInstance.Data;
    iVar8 = *(int *)(local_150.AllocatorInstance.Data + 4);
  }
  DS_CommonDataHelper::IdLevelupEffect03(&local_160);
  if (local_160.ArrayNum == 2) {
    local_res20 = *(int *)local_160.AllocatorInstance.Data;
    iVar7 = *(int *)(local_160.AllocatorInstance.Data + 4);
  }
  FDS_EntityBase::GetCharInfoData((FDS_EntityBase *)this->_padding_);
  bVar3 = TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> *)&local_168,(void *)0x0);
  if (bVar3) {
    local_res8[0] = Success;
    pUVar4 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_AbilitySystemComponent::DeactivateAbilityByTag
              (pUVar4,(FGameplayTag *)&this->_padding_,local_res8);
    goto LAB_14b8115c0;
  }
  pUVar5 = FWeakObjectPtr::Get(&local_168);
  iVar1 = *(int *)&pUVar5[8].field_0xc;
  if (local_res20 < iVar1) {
    if (iVar1 <= iVar10) goto LAB_14b811468;
    iVar7 = 0;
    if (iVar6 < iVar1) goto LAB_14b811478;
LAB_14b811475:
    iVar7 = iVar9;
  }
  else if (iVar1 <= iVar10) {
LAB_14b811468:
    iVar7 = iVar8;
    if (iVar1 <= iVar6) goto LAB_14b811475;
  }
LAB_14b811478:
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  pcVar2 = *(code **)(*(longlong *)pUVar5 + 0x738);
  local_130 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_130 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_130);
  }
  pUVar5 = (UObject *)(*pcVar2)(pUVar5,&local_130);
  if (pUVar5 == (UObject *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5191197370037043309>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_LevelUpAbility.cpp"
                       ,0x6d,"skmComp");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_res10[0] = Success;
    pUVar4 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_AbilitySystemComponent::DeactivateAbilityByTag
              (pUVar4,(FGameplayTag *)&this->_padding_,local_res10);
  }
  else {
    FDS_EffectSpawnInfo::FDS_EffectSpawnInfo((FDS_EffectSpawnInfo *)local_120);
    local_120._40_8_ = this->_padding_;
    local_128 = pUVar5;
    local_120._0_4_ = iVar7;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(local_120 + 0x34),(FObjectPtr)&local_128);
    UDS_EffectManager::PlayEffect((FDS_EffectSpawnInfo *)local_120);
    local_res18[0] = Success;
    pUVar4 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_AbilitySystemComponent::DeactivateAbilityByTag
              (pUVar4,(FGameplayTag *)&this->_padding_,local_res18);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_60);
    if ((void *)local_60._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_60._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_60);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_120._184_8_);
    if ((FScriptContainerElement *)local_120._24_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_120._24_8_);
    }
  }
LAB_14b8115c0:
  if (local_160.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.AllocatorInstance.Data);
  }
  if (local_150.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.AllocatorInstance.Data);
  }
  if (local_140.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.AllocatorInstance.Data);
  }
  return;
}

