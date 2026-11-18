// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 20

// StaticClass @ 14b401a70

UClass * __cdecl UDS_AbnormalAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AbnormalAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AbnormalAbility",
               &Z_Registration_Info_UClass_UDS_AbnormalAbility.InnerSingleton,
               StaticRegisterNativesUDS_AbnormalAbility,400,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_AbnormalAbility>,
               InternalVTableHelperCtorCaller<UDS_AbnormalAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AbnormalAbility.InnerSingleton;
}

// UDS_AbnormalAbility @ 14b4067a0

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

UDS_AbnormalAbility * __thiscall
UDS_AbnormalAbility::UDS_AbnormalAbility(UDS_AbnormalAbility *this,FVTableHelper *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->OnChangedAbnormalEventHandle).ID = 0;
  (this->OnChangedHighestAbnormalInfoEventHandle).ID = 0;
  (this->AbnormalAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->StateTagContainer).GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StateTagContainer).GameplayTags.ArrayNum = 0;
  (this->StateTagContainer).GameplayTags.ArrayMax = 0;
  (this->StateTagContainer).ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StateTagContainer).ParentTags.ArrayNum = 0;
  (this->StateTagContainer).ParentTags.ArrayMax = 0;
  return this;
}

// ~UDS_AbnormalAbility @ 14b407b50

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

void __thiscall UDS_AbnormalAbility::~UDS_AbnormalAbility(UDS_AbnormalAbility *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  pFVar1 = (this->StateTagContainer).ParentTags.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StateTagContainer).GameplayTags.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetDefaultInputPolicy @ 14b4095e0

EDS_AbilityInputPolicy __thiscall
UDS_AbnormalAbility::GetDefaultInputPolicy(UDS_AbnormalAbility *this)

{
  return BlockInput;
}

// GetPrivateStaticClass @ 14b409900

UClass * __cdecl UDS_AbnormalAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AbnormalAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AbnormalAbility",
               &Z_Registration_Info_UClass_UDS_AbnormalAbility.InnerSingleton,
               StaticRegisterNativesUDS_AbnormalAbility,400,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_AbnormalAbility>,
               InternalVTableHelperCtorCaller<UDS_AbnormalAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AbnormalAbility.InnerSingleton;
}

// ShouldTickComponent @ 14b40ad10

bool __thiscall UDS_AbnormalAbility::ShouldTickComponent(UDS_AbnormalAbility *this)

{
  return true;
}

// StaticRegisterNativesUDS_AbnormalAbility @ 14b40adc0

void __cdecl UDS_AbnormalAbility::StaticRegisterNativesUDS_AbnormalAbility(void)

{
  return;
}

// UDS_AbnormalAbility @ 14b79b170

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

UDS_AbnormalAbility * __thiscall
UDS_AbnormalAbility::UDS_AbnormalAbility(UDS_AbnormalAbility *this,FObjectInitializer *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->OnChangedAbnormalEventHandle).ID = 0;
  (this->OnChangedHighestAbnormalInfoEventHandle).ID = 0;
  (this->AbnormalAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->StateTagContainer).GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StateTagContainer).GameplayTags.ArrayNum = 0;
  (this->StateTagContainer).GameplayTags.ArrayMax = 0;
  (this->StateTagContainer).ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StateTagContainer).ParentTags.ArrayNum = 0;
  (this->StateTagContainer).ParentTags.ArrayMax = 0;
  return this;
}

// AddStateTag @ 14b79d1c0

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

void __thiscall UDS_AbnormalAbility::AddStateTag(UDS_AbnormalAbility *this,FGameplayTag *param_1)

{
  FName *pFVar1;
  FName FVar2;
  FName *pFVar3;
  
  UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,param_1);
  FVar2 = param_1->TagName;
  if (FVar2 != (FName)0x0) {
    pFVar3 = (FName *)(this->StateTagContainer).GameplayTags.AllocatorInstance.Data;
    pFVar1 = pFVar3 + (this->StateTagContainer).GameplayTags.ArrayNum;
    for (; pFVar3 != pFVar1; pFVar3 = pFVar3 + 1) {
      if (*pFVar3 == FVar2) {
        return;
      }
    }
    pFVar3 = (FName *)(this->StateTagContainer).ParentTags.AllocatorInstance.Data;
    pFVar1 = pFVar3 + (this->StateTagContainer).ParentTags.ArrayNum;
    for (; pFVar3 != pFVar1; pFVar3 = pFVar3 + 1) {
      if (*pFVar3 == FVar2) {
        return;
      }
    }
  }
  FGameplayTagContainer::AddTag(&this->StateTagContainer,param_1);
  return;
}

// CameraShake @ 14b79e770

void __thiscall
UDS_AbnormalAbility::CameraShake(UDS_AbnormalAbility *this,FDS_AbnormalInfo *param_1)

{
  undefined1 *this_00;
  bool bVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  ADS_CameraManager *this_01;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  
  if (*(char *)((longlong)&this->_padding_ + 1) == '\0') {
    return;
  }
  if (param_1->CameraShakeID == 0) {
    return;
  }
  ADS_PlayerController::GetPlayerController();
  bVar1 = TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr> *)&local_res18,(void *)0x0
                    );
  if (bVar1) {
    return;
  }
  pUVar2 = FWeakObjectPtr::Get(&local_res18);
  this_00 = &pUVar2[0x16].field_0x20;
  if (*(longlong *)this_00 != 0) {
    pUVar3 = Z_Construct_UClass_ADS_CameraManager_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar1) {
      pUVar2 = *(UObject **)this_00;
      goto LAB_14b79e7e8;
    }
  }
  pUVar2 = (UObject *)0x0;
LAB_14b79e7e8:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res20 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
  bVar1 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar1) {
    this_01 = (ADS_CameraManager *)FWeakObjectPtr::Get(&local_res8);
    ADS_CameraManager::CameraShake(this_01,param_1->CameraShakeID);
  }
  return;
}

// ClearVariables @ 14b79fe10

void __thiscall UDS_AbnormalAbility::ClearVariables(UDS_AbnormalAbility *this)

{
  FDelegateHandle FVar1;
  bool bVar2;
  UDS_AbnormalAbilityData *this_00;
  UObject *pUVar3;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->AbnormalAbilityData).WeakPtr);
  if (bVar2) {
    this_00 = (UDS_AbnormalAbilityData *)FWeakObjectPtr::Get(&(this->AbnormalAbilityData).WeakPtr);
    UDS_AbnormalAbilityData::RemoveAllAbnormalInfo(this_00);
    pUVar3 = FWeakObjectPtr::Get(&(this->AbnormalAbilityData).WeakPtr);
    FVar1.ID = (this->OnChangedAbnormalEventHandle).ID;
    if (FVar1.ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[6].field_0x10,FVar1);
    }
    pUVar3 = FWeakObjectPtr::Get(&(this->AbnormalAbilityData).WeakPtr);
    FVar1.ID = (this->OnChangedHighestAbnormalInfoEventHandle).ID;
    if (FVar1.ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[7].field_0x8,FVar1);
    }
  }
  (this->OnChangedAbnormalEventHandle).ID = 0;
  (this->OnChangedHighestAbnormalInfoEventHandle).ID = 0;
  return;
}

// GetAbnormalStateTagByAbnormalType @ 14b7aaaf0

FGameplayTag * __cdecl
UDS_AbnormalAbility::GetAbnormalStateTagByAbnormalType(EDS_AbnormalType param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  UClass *pUVar6;
  UEnum *this;
  FGameplayTag *pFVar7;
  TTuple<FName,__int64> *pTVar8;
  FName *pFVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  EDS_StateTagType local_res8 [8];
  undefined1 local_res10 [8];
  TPairInitializer<EDS_AbnormalType_&,FGameplayTag_&> local_res18;
  FName local_d8;
  FName local_d0;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  wchar_t *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  undefined1 *local_88;
  FName *local_80;
  FName local_78 [2];
  TStringView<wchar_t> local_68;
  TTuple<FName,__int64> local_58;
  
  uVar12 = 0;
  if (AbnormalStateTagMap._8_4_ != AbnormalStateTagMap._52_4_) {
    lVar5 = 0x154cef638;
    if (AbnormalStateTagMap._64_8_ != 0) {
      lVar5 = AbnormalStateTagMap._64_8_;
    }
    lVar1 = ((ulonglong)(AbnormalStateTagMap._72_4_ - 1) & (ulonglong)param_1) * 4;
    for (iVar4 = *(int *)(lVar1 + lVar5); iVar4 != -1;
        iVar4 = *(int *)(AbnormalStateTagMap._0_8_ + 0xc + (longlong)iVar4 * 0x14)) {
      if (*(EDS_AbnormalType *)(AbnormalStateTagMap._0_8_ + (longlong)iVar4 * 0x14) == param_1) {
        lVar5 = 0x154cef638;
        if (AbnormalStateTagMap._64_8_ != 0) {
          lVar5 = AbnormalStateTagMap._64_8_;
        }
        iVar4 = *(int *)(lVar5 + lVar1);
        goto joined_r0x00014b7aab89;
      }
    }
  }
LAB_14b7aabee:
  iStack_90 = 0x22;
  local_98 = L"/Script/ProjectDS.EDS_AbnormalType";
  pUVar6 = Z_Construct_UClass_UEnum_NoRegister();
  local_68._12_4_ = uStack_8c;
  local_68.Size = iStack_90;
  local_68.DataPtr = local_98;
  this = (UEnum *)StaticFindObject(pUVar6,(UObject *)0x0,&local_68,None);
  if (this != (UEnum *)0x0) {
    local_res8[0] = Abnormal_Knockdown;
    pFVar7 = FDS_GameplayTags::GetStateTag(local_res8);
    FGameplayTag::RequestDirectParent(pFVar7);
    if (local_res18.Value == (FGameplayTag *)0x0) goto LAB_14b7aadf6;
    iVar4 = (this->Names).NumValues;
    uVar10 = uVar12;
    if (0 < iVar4) {
      do {
        iVar11 = (int)uVar10;
        if (((iVar11 < 0) || (iVar4 <= iVar11)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Names.IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                               ,0xb2d,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar7 = (FGameplayTag *)(*pcVar2)();
          return pFVar7;
        }
        pTVar8 = UEnum::FNameData::operator[](&this->Names,&local_58,iVar11);
        local_res10[0] = pTVar8->field_0x8;
        UEnum::GetNameStringByIndex(this,&local_a8,iVar11);
        ::FName::ToString((FName *)&local_res18.Value,&local_c8);
        ::FString::PrintfImpl(&local_b8,L"%s.%s");
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
        iVar4 = local_b8.Data.ArrayNum + -1;
        if (local_b8.Data.ArrayNum == 0) {
          iVar4 = 0;
        }
        pFVar9 = ::FName::FName(local_78,iVar4,(wchar_t *)local_b8.Data.AllocatorInstance.Data,
                                FNAME_Add);
        local_d0 = *pFVar9;
        FGameplayTag::RequestGameplayTag(&local_d8,SUB81(&local_d0,0));
        if (local_d8 != (FName)0x0) {
          local_88 = local_res10;
          local_80 = &local_d8;
          TSet<TTuple<enum_EDS_AbnormalType,FGameplayTag>,TDefaultMapHashableKeyFuncs<enum_EDS_AbnormalType,FGameplayTag,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<enum_EDS_AbnormalType_&,FGameplayTag_&>_>
                    (&AbnormalStateTagMap,&local_res18,(bool *)&local_88);
        }
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
        iVar4 = (this->Names).NumValues;
        uVar10 = (ulonglong)(iVar11 + 1U);
      } while ((int)(iVar11 + 1U) < iVar4);
    }
  }
  goto LAB_14b7aadab;
joined_r0x00014b7aab89:
  uVar10 = uVar12;
  if (iVar4 == -1) goto LAB_14b7aabb0;
  uVar10 = AbnormalStateTagMap._0_8_ + (longlong)iVar4 * 0x14;
  if (*(EDS_AbnormalType *)(AbnormalStateTagMap._0_8_ + (longlong)iVar4 * 0x14) == param_1) {
    if (uVar10 != 0) goto LAB_14b7aabe4;
    goto LAB_14b7aabb0;
  }
  iVar4 = *(int *)(uVar10 + 0xc);
  goto joined_r0x00014b7aab89;
joined_r0x00014b7aae2b:
  uVar10 = uVar12;
  if (iVar4 == -1) {
LAB_14b7aae4b:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FGameplayTag *)(*pcVar2)();
      return pFVar7;
    }
LAB_14b7aae71:
    return (FGameplayTag *)(uVar10 + 4);
  }
  uVar10 = AbnormalStateTagMap._0_8_ + (longlong)iVar4 * 0x14;
  if (*(EDS_AbnormalType *)(AbnormalStateTagMap._0_8_ + (longlong)iVar4 * 0x14) == param_1) {
    if (uVar10 != 0) goto LAB_14b7aae71;
    goto LAB_14b7aae4b;
  }
  iVar4 = *(int *)(uVar10 + 0xc);
  goto joined_r0x00014b7aae2b;
LAB_14b7aabb0:
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FGameplayTag *)(*pcVar2)();
    return pFVar7;
  }
LAB_14b7aabe4:
  if (*(longlong *)(uVar10 + 4) == 0) goto LAB_14b7aabee;
LAB_14b7aadab:
  if (AbnormalStateTagMap._8_4_ != AbnormalStateTagMap._52_4_) {
    lVar5 = 0x154cef638;
    if (AbnormalStateTagMap._64_8_ != 0) {
      lVar5 = AbnormalStateTagMap._64_8_;
    }
    lVar1 = ((ulonglong)(AbnormalStateTagMap._72_4_ - 1) & (ulonglong)param_1) * 4;
    for (iVar4 = *(int *)(lVar1 + lVar5); iVar4 != -1;
        iVar4 = *(int *)(AbnormalStateTagMap._0_8_ + 0xc + (longlong)iVar4 * 0x14)) {
      if (*(EDS_AbnormalType *)(AbnormalStateTagMap._0_8_ + (longlong)iVar4 * 0x14) == param_1) {
        lVar5 = 0x154cef638;
        if (AbnormalStateTagMap._64_8_ != 0) {
          lVar5 = AbnormalStateTagMap._64_8_;
        }
        iVar4 = *(int *)(lVar5 + lVar1);
        goto joined_r0x00014b7aae2b;
      }
    }
  }
LAB_14b7aadf6:
  return &FGameplayTag::EmptyTag;
}

// OnAbilityRetryActivate @ 14b7b3e60

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

void __thiscall UDS_AbnormalAbility::OnAbilityRetryActivate(UDS_AbnormalAbility *this)

{
  EDS_AbilityTagType local_res10 [8];
  undefined8 local_res18 [2];
  
  local_res18[0] = 0;
  local_res10[0] = Abnormal_Move;
  UDS_GameplayAbility::TryActivateAbility
            ((UDS_GameplayAbility *)this,local_res10,(TObjectPtr<UWN_AbilityContext>)local_res18);
  local_res18[0] = 0;
  local_res10[0] = Abnormal_State;
  UDS_GameplayAbility::TryActivateAbility
            ((UDS_GameplayAbility *)this,local_res10,(TObjectPtr<UWN_AbilityContext>)local_res18);
  return;
}

// OnCanActivate @ 14b7b4d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_AbnormalAbility::OnCanActivate(UDS_AbnormalAbility *this)

{
  bool bVar1;
  FName *pFVar2;
  TWeakObjectPtr<UDS_AbnormalAbilityData,FWeakObjectPtr> TVar3;
  UDS_LogManager *pUVar4;
  UDS_AbnormalAbilityData *this_00;
  undefined1 auStackY_178 [32];
  EDS_StateTagType local_148 [4];
  ulong64 local_144;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (AbnormalEndAnimStateTag.TagName == (FName)0x0) {
    local_148[0] = Abnormal_EndAnim;
    pFVar2 = &FDS_GameplayTags::GetStateTag(local_148)->TagName;
    AbnormalEndAnimStateTag.TagName = *pFVar2;
  }
  bVar1 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  if (bVar1) {
    bVar1 = FWeakObjectPtr::IsValid(&(this->AbnormalAbilityData).WeakPtr);
    if (!bVar1) {
      local_148[0] = AirWalk_PowerJumpCharge;
      TVar3 = UDS_AbilityDataSet::GetAbilityData<UDS_AbnormalAbilityData>
                        (&local_144,(EDS_AbilityTagType *)&this->_padding_);
                    /* WARNING: Load size is inaccurate */
      (this->AbnormalAbilityData).WeakPtr = *TVar3.WeakPtr;
    }
    bVar1 = FWeakObjectPtr::IsValid(&(this->AbnormalAbilityData).WeakPtr);
    if (bVar1) {
      this_00 = (UDS_AbnormalAbilityData *)FWeakObjectPtr::Get(&(this->AbnormalAbilityData).WeakPtr)
      ;
      bVar1 = UDS_AbnormalAbilityData::IsAbnormalState(this_00);
      return bVar1;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_AbnormalAbility::OnCanActivate",0x22,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_138.Ptr,0x28,L"AbnormalAbilityData is invalid");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return false;
}

// OnChangedAbnormalInfoEventCallback @ 14b7b6510

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
UDS_AbnormalAbility::OnChangedAbnormalInfoEventCallback
          (UDS_AbnormalAbility *this,FDS_AbnormalInfo *param_1,bool param_2)

{
  undefined1 *this_00;
  code *pcVar1;
  bool bVar2;
  FGameplayTag *pFVar3;
  UDS_AbnormalAbilityData *pUVar4;
  FDS_AbnormalInfo *pFVar5;
  FGameplayTag *pFVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  ADS_CameraManager *this_01;
  UObject *pUVar9;
  EDS_StateTagType local_res10 [8];
  EDS_StateTagType local_res18 [8];
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_28;
  UObject *local_20;
  
  pFVar3 = GetAbnormalStateTagByAbnormalType(param_1->AbnormalType);
  if (param_2) {
    pUVar4 = (UDS_AbnormalAbilityData *)FWeakObjectPtr::Get(&(this->AbnormalAbilityData).WeakPtr);
    pFVar5 = UDS_AbnormalAbilityData::GetHighestAbnormalInfo(pUVar4,None);
    if (pFVar5->AbnormalType == param_1->AbnormalType) {
      if (param_1->AbnormalGroup == NonStateMoveControl) {
        local_res18[0] = Abnormal_NonControl;
        pFVar6 = FDS_GameplayTags::GetStateTag(local_res18);
        bVar2 = UDS_GameplayAbility::HasStateTag((UDS_GameplayAbility *)this,pFVar6);
        if (bVar2) {
          RemoveStateTag(this,pFVar6);
        }
        AddStateTag(this,pFVar6);
      }
      bVar2 = UDS_GameplayAbility::HasStateTag((UDS_GameplayAbility *)this,pFVar3);
      if (bVar2) {
        RemoveStateTag(this,pFVar3);
      }
      bVar2 = UDS_GameplayAbility::HasStateTag((UDS_GameplayAbility *)this,&AbnormalEndAnimStateTag)
      ;
      if (bVar2) {
        RemoveStateTag(this,&AbnormalEndAnimStateTag);
      }
      AddStateTag(this,pFVar3);
      if ((*(char *)((longlong)&this->_padding_ + 1) != '\0') && (param_1->CameraShakeID != 0)) {
        ADS_PlayerController::GetPlayerController();
        bVar2 = TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr> *)&local_28,
                           (void *)0x0);
        if (!bVar2) {
          pUVar7 = FWeakObjectPtr::Get(&local_28);
          pUVar9 = (UObject *)0x0;
          this_00 = &pUVar7[0x16].field_0x20;
          if (*(longlong *)this_00 != 0) {
            pUVar8 = Z_Construct_UClass_ADS_CameraManager_NoRegister();
            bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar8);
            if (bVar2) {
              pUVar9 = *(UObject **)this_00;
            }
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar9);
          }
          local_res20.ObjectIndex = 0;
          local_res20.ObjectSerialNumber = 0;
          local_20 = pUVar9;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar9);
          }
          FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_20);
          bVar2 = FWeakObjectPtr::IsValid(&local_res20);
          if (bVar2) {
            this_01 = (ADS_CameraManager *)FWeakObjectPtr::Get(&local_res20);
            ADS_CameraManager::CameraShake(this_01,param_1->CameraShakeID);
            return;
          }
        }
      }
    }
    else if ((pFVar5->AbnormalType == None) &&
            (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_9088626543273443192>,false,
                                "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_AbnormalAbility.cpp"
                                ,0x88,"highestAbnormalInfo.AbnormalType != EDS_AbnormalType::None"),
            bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    RemoveStateTag(this,pFVar3);
    if (param_1->AbnormalGroup == NonStateMoveControl) {
      local_res10[0] = Abnormal_NonControl;
      pFVar3 = FDS_GameplayTags::GetStateTag(local_res10);
      RemoveStateTag(this,pFVar3);
    }
    pUVar4 = (UDS_AbnormalAbilityData *)FWeakObjectPtr::Get(&(this->AbnormalAbilityData).WeakPtr);
    pFVar5 = UDS_AbnormalAbilityData::GetHighestAbnormalInfo(pUVar4,None);
    bVar2 = FDS_AbnormalInfo::IsValid(pFVar5);
    if (bVar2) {
      pFVar3 = GetAbnormalStateTagByAbnormalType(pFVar5->AbnormalType);
      bVar2 = UDS_GameplayAbility::HasStateTag((UDS_GameplayAbility *)this,pFVar3);
      if (bVar2) {
        RemoveStateTag(this,pFVar3);
      }
      AddStateTag(this,pFVar3);
    }
  }
  return;
}

// OnChangedHighestAbnormalInfoEventCallback @ 14b7b7000

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
UDS_AbnormalAbility::OnChangedHighestAbnormalInfoEventCallback
          (UDS_AbnormalAbility *this,FDS_AbnormalInfo *param_1)

{
  UDS_LogManager *pUVar1;
  FDS_SkillAbnormalActionTableRow *pFVar2;
  undefined1 auStackY_198 [32];
  EDS_EntityMaterialType local_158;
  float local_154 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_158 = Abnormal_Lapidification;
  if (param_1->AbnormalType == Lapidification) {
    local_154[0] = 0.0;
    FDS_EntityBase::SetGlobalAnimRateScale((FDS_EntityBase *)this->_padding_,&local_158,local_154);
    if (param_1->AbnormalActionID == 0) {
      pUVar1 = UDS_LogManager::GetInst();
      if (pUVar1 != (UDS_LogManager *)0x0) {
        pUVar1 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_AbnormalAbility::OnChangedHighestAbnormalInfoEventCallback",0x3e,
                   Yes);
        UDS_LogManager::PrintLog(pUVar1,1,Warning,local_148.Ptr,0xd5,L"AbnormalActionID is 0.");
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
    }
    else {
      pFVar2 = FDS_SkillAbnormalActionTableRow::Get((longlong)param_1->AbnormalActionID,true);
      if (pFVar2 == (FDS_SkillAbnormalActionTableRow *)0x0) {
        pUVar1 = UDS_LogManager::GetInst();
        if (pUVar1 != (UDS_LogManager *)0x0) {
          pUVar1 = UDS_LogManager::GetInst();
          local_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_148,"UDS_AbnormalAbility::OnChangedHighestAbnormalInfoEventCallback",
                     0x3e,Yes);
          UDS_LogManager::PrintLog
                    (pUVar1,1,Warning,local_148.Ptr,0xdc,
                     L"skillAbnormalActionTable is nullptr. (%d)");
          if ((void *)local_148._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_148._padding_);
          }
        }
      }
      else {
        local_158 = Abnormal_Lapidification;
        FDS_EntityBase::ActivateEntityMaterial
                  ((FDS_EntityBase *)this->_padding_,&local_158,&pFVar2->MaterialPath);
      }
    }
  }
  else {
    local_154[0] = __real_3f800000;
    FDS_EntityBase::SetGlobalAnimRateScale((FDS_EntityBase *)this->_padding_,&local_158,local_154);
    local_158 = Abnormal_Lapidification;
    FDS_EntityBase::DeactivateEntityMaterial((FDS_EntityBase *)this->_padding_,&local_158);
  }
  return;
}

// OnDeactivateAbility @ 14b7b74e0

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

void __thiscall UDS_AbnormalAbility::OnDeactivateAbility(UDS_AbnormalAbility *this,bool *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  ForAnyElementType FVar3;
  int iVar4;
  ulonglong uVar5;
  EDS_AbilityTagType local_res8 [8];
  ForAnyElementType local_28;
  undefined8 local_20;
  
  local_res8[0] = Abnormal_Move;
  UDS_GameplayAbility::DeactivateAbility
            ((UDS_GameplayAbility *)this,local_res8,(EDS_AbilityDeactivateType *)&this->_padding_);
  local_res8[0] = Abnormal_State;
  UDS_GameplayAbility::DeactivateAbility
            ((UDS_GameplayAbility *)this,local_res8,(EDS_AbilityDeactivateType *)&this->_padding_);
  uVar5 = 0;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = 0;
  if ((FGameplayTagContainer *)&local_28 != &this->StateTagContainer) {
    uVar1 = (this->StateTagContainer).GameplayTags.ArrayNum;
    uVar5 = (ulonglong)(int)uVar1;
    pFVar2 = (this->StateTagContainer).GameplayTags.AllocatorInstance.Data;
    local_20 = (ulonglong)uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar1,0,&local_28,uVar1,(int *)((longlong)&local_20 + 4));
      memcpy(local_28.Data,pFVar2,uVar5 << 3);
      uVar5 = local_20 & 0xffffffff;
    }
  }
  iVar4 = (int)uVar5;
  pFVar2 = local_28.Data + (longlong)iVar4 * 8;
  FVar3.Data = local_28.Data;
  while( true ) {
    if ((int)uVar5 != iVar4) {
      `TCheckedPointerIterator<FGameplayTag,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (FVar3.Data == pFVar2) break;
    RemoveStateTag(this,(FGameplayTag *)FVar3.Data);
    uVar5 = local_20 & 0xffffffff;
    FVar3.Data = FVar3.Data + 8;
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return;
}

// OnPostActivateAbility @ 14b7ba0d0

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

void __thiscall UDS_AbnormalAbility::OnPostActivateAbility(UDS_AbnormalAbility *this)

{
  bool bVar1;
  UObject *pUVar2;
  FDelegateHandle FVar3;
  EDS_AbilityTagType local_res8 [8];
  longlong local_res10;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->AbnormalAbilityData).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    (**(code **)(*(longlong *)pUVar2 + 0x2d8))(pUVar2);
    pUVar2 = FWeakObjectPtr::Get(&(this->AbnormalAbilityData).WeakPtr);
    FVar3 = TMulticastDelegateRegistration<void___cdecl(FDS_AbnormalInfo_const_&,bool),FDefaultDelegateUserPolicy>
            ::AddUObject<UDS_AbnormalAbility>
                      ((TMulticastDelegateRegistration<void___cdecl(FDS_AbnormalInfo_const_&,bool),FDefaultDelegateUserPolicy>
                        *)&pUVar2[6].field_0x10,(UDS_AbnormalAbility *)local_res8,
                       (pmf_c27b7e37 *)this);
                    /* WARNING: Load size is inaccurate */
    (this->OnChangedAbnormalEventHandle).ID = *FVar3.ID;
    pUVar2 = FWeakObjectPtr::Get(&(this->AbnormalAbilityData).WeakPtr);
    FVar3 = TMulticastDelegateRegistration<void___cdecl(FDS_AbnormalInfo_const_&),FDefaultDelegateUserPolicy>
            ::AddUObject<UDS_AbnormalAbility>
                      ((TMulticastDelegateRegistration<void___cdecl(FDS_AbnormalInfo_const_&),FDefaultDelegateUserPolicy>
                        *)&pUVar2[7].field_0x8,(UDS_AbnormalAbility *)local_res8,
                       (pmf_223a2685 *)this);
    local_res10 = 0;
                    /* WARNING: Load size is inaccurate */
    (this->OnChangedHighestAbnormalInfoEventHandle).ID = *FVar3.ID;
    local_res8[0] = Abnormal_Move;
    UDS_GameplayAbility::TryActivateAbility
              ((UDS_GameplayAbility *)this,local_res8,(TObjectPtr<UWN_AbilityContext>)&local_res10);
    local_res10 = 0;
    local_res8[0] = Abnormal_State;
    UDS_GameplayAbility::TryActivateAbility
              ((UDS_GameplayAbility *)this,local_res8,(TObjectPtr<UWN_AbilityContext>)&local_res10);
  }
  return;
}

// OnTickComponent @ 14b7bcbc0

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

void __thiscall UDS_AbnormalAbility::OnTickComponent(UDS_AbnormalAbility *this,float param_1)

{
  float fVar1;
  bool bVar2;
  UDS_AbnormalAbilityData *pUVar3;
  FDS_AbnormalInfo *this_00;
  double dVar4;
  EDS_AbilityDeactivateType local_res8 [8];
  
  UDS_GameplayAbility::OnTickComponent((UDS_GameplayAbility *)this,param_1);
  bVar2 = FWeakObjectPtr::IsValid(&(this->AbnormalAbilityData).WeakPtr);
  if (!bVar2) {
    local_res8[0] = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res8);
    return;
  }
  pUVar3 = (UDS_AbnormalAbilityData *)FWeakObjectPtr::Get(&(this->AbnormalAbilityData).WeakPtr);
  UDS_AbnormalAbilityData::RefreshAbnormalInfo(pUVar3);
  pUVar3 = (UDS_AbnormalAbilityData *)FWeakObjectPtr::Get(&(this->AbnormalAbilityData).WeakPtr);
  bVar2 = UDS_AbnormalAbilityData::IsAbnormalState(pUVar3);
  if (!bVar2) {
    local_res8[0] = Success;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res8);
  }
  pUVar3 = (UDS_AbnormalAbilityData *)FWeakObjectPtr::Get(&(this->AbnormalAbilityData).WeakPtr);
  this_00 = UDS_AbnormalAbilityData::GetHighestAbnormalInfo(pUVar3,None);
  bVar2 = FDS_AbnormalInfo::IsValid(this_00);
  if ((!bVar2) || (this_00->AbnormalGetupTime <= 0.0)) {
    bVar2 = UDS_GameplayAbility::HasStateTag((UDS_GameplayAbility *)this,&AbnormalEndAnimStateTag);
    if (bVar2) {
      RemoveStateTag(this,&AbnormalEndAnimStateTag);
    }
  }
  else {
    bVar2 = UDS_GameplayAbility::HasStateTag((UDS_GameplayAbility *)this,&AbnormalEndAnimStateTag);
    if (!bVar2) {
      pUVar3 = (UDS_AbnormalAbilityData *)FWeakObjectPtr::Get(&(this->AbnormalAbilityData).WeakPtr);
      fVar1 = this_00->AbnormalGetupTime;
      dVar4 = UDS_AbnormalAbilityData::GetRemainTime(pUVar3,this_00,0.0);
      if (dVar4 <= (double)fVar1) {
        AddStateTag(this,&AbnormalEndAnimStateTag);
        return;
      }
    }
  }
  return;
}

// RemoveStateTag @ 14b7c1e70

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

void __thiscall UDS_AbnormalAbility::RemoveStateTag(UDS_AbnormalAbility *this,FGameplayTag *param_1)

{
  FName *pFVar1;
  FName FVar2;
  FName *pFVar3;
  
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,param_1);
  FVar2 = param_1->TagName;
  if (FVar2 != (FName)0x0) {
    pFVar3 = (FName *)(this->StateTagContainer).GameplayTags.AllocatorInstance.Data;
    pFVar1 = pFVar3 + (this->StateTagContainer).GameplayTags.ArrayNum;
    for (; pFVar3 != pFVar1; pFVar3 = pFVar3 + 1) {
      if (*pFVar3 == FVar2) goto LAB_14b7c1ee9;
    }
    pFVar3 = (FName *)(this->StateTagContainer).ParentTags.AllocatorInstance.Data;
    pFVar1 = pFVar3 + (this->StateTagContainer).ParentTags.ArrayNum;
    if (pFVar3 != pFVar1) {
      while (*pFVar3 != FVar2) {
        pFVar3 = pFVar3 + 1;
        if (pFVar3 == pFVar1) {
          return;
        }
      }
LAB_14b7c1ee9:
      FGameplayTagContainer::RemoveTag(&this->StateTagContainer,param_1,false);
    }
  }
  return;
}

