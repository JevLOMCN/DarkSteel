// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// StaticClass @ 14b40e040

UClass * __cdecl UDS_AirNormalAttackAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AirNormalAttackAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AirNormalAttackAbility",
               &Z_Registration_Info_UClass_UDS_AirNormalAttackAbility.InnerSingleton,
               StaticRegisterNativesUDS_AirNormalAttackAbility,0x158,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_AirNormalAttackAbility>,
               InternalVTableHelperCtorCaller<UDS_AirNormalAttackAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AirNormalAttackAbility.InnerSingleton;
}

// UDS_AirNormalAttackAbility @ 14b411500

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

UDS_AirNormalAttackAbility * __thiscall
UDS_AirNormalAttackAbility::UDS_AirNormalAttackAbility
          (UDS_AirNormalAttackAbility *this,FVTableHelper *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// UDS_AirNormalAttackAbility @ 14b411540

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

UDS_AirNormalAttackAbility * __thiscall
UDS_AirNormalAttackAbility::UDS_AirNormalAttackAbility
          (UDS_AirNormalAttackAbility *this,FObjectInitializer *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// ~UDS_AirNormalAttackAbility @ 14b411f80

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
UDS_AirNormalAttackAbility::~UDS_AirNormalAttackAbility(UDS_AirNormalAttackAbility *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b4137e0

UClass * __cdecl UDS_AirNormalAttackAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AirNormalAttackAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AirNormalAttackAbility",
               &Z_Registration_Info_UClass_UDS_AirNormalAttackAbility.InnerSingleton,
               StaticRegisterNativesUDS_AirNormalAttackAbility,0x158,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_AirNormalAttackAbility>,
               InternalVTableHelperCtorCaller<UDS_AirNormalAttackAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AirNormalAttackAbility.InnerSingleton;
}

// StaticRegisterNativesUDS_AirNormalAttackAbility @ 14b4142a0

void __cdecl UDS_AirNormalAttackAbility::StaticRegisterNativesUDS_AirNormalAttackAbility(void)

{
  return;
}

// InitOtherAbilityEventSubscriptions @ 14b7aee00

void __thiscall
UDS_AirNormalAttackAbility::InitOtherAbilityEventSubscriptions(UDS_AirNormalAttackAbility *this)

{
  FGameplayTag *pFVar1;
  EDS_AbilityTagType local_res8 [32];
  
  local_res8[0] = Skill_ActiveSkill;
  pFVar1 = FDS_GameplayTags::GetAbilityTag(local_res8);
  FGameplayTagContainer::AddTag((FGameplayTagContainer *)&this->field_0x118,pFVar1);
  return;
}

// OnDeactivateAbility @ 14b7b78a0

void __thiscall
UDS_AirNormalAttackAbility::OnDeactivateAbility(UDS_AirNormalAttackAbility *this,bool *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  UDS_AbilityDataSet *this_00;
  UClass *pUVar5;
  EDS_AbilityTagType local_res8 [8];
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_48;
  undefined8 local_40;
  undefined8 local_38;
  UObject *local_30;
  undefined8 local_28 [2];
  
  if (*param_1 == true) {
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0xd0);
    (**(code **)(*(longlong *)pUVar4 + 0x448))(pUVar4,3);
  }
  local_res8[0] = AirWalk_Process;
  FDS_GameplayTags::GetAbilityTag(local_res8);
  TDS_DataSetGetter<UDS_AbilityDataSet>::Get((ulong64)&local_res20);
  bVar3 = TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar3) {
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_40 = 0;
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_40);
    goto LAB_14b7b7a3b;
  }
  this_00 = (UDS_AbilityDataSet *)FWeakObjectPtr::Get(&local_res20);
  UDS_AbilityDataSet::FindOrAddAbilityData(this_00,(FGameplayTag *)&local_48);
  bVar3 = TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr> *)&local_48,(void *)0x0);
  if (bVar3) {
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_38 = 0;
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_38);
    goto LAB_14b7b7a3b;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_48);
  if (pUVar4 == (UObject *)0x0) {
LAB_14b7b7998:
    pUVar4 = (UObject *)0x0;
  }
  else {
    pUVar5 = Z_Construct_UClass_UDS_AirWalkAbilityData_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) goto LAB_14b7b7998;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_30 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_30);
  bVar3 = TWeakObjectPtr<UDS_AirWalkAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AirWalkAbilityData,FWeakObjectPtr> *)&local_res18,
                     (void *)0x0);
  if (bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7240961574226100306>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_AbilityData.h"
                       ,0x52,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_28[0] = 0;
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_28);
  }
  else {
    local_res10 = local_res18;
  }
LAB_14b7b7a3b:
  bVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar3) {
    pUVar4 = FWeakObjectPtr::Get(&local_res10);
    pUVar4[5].field_0x15 = 0;
  }
  return;
}

// OnDeactivatedOtherAbility @ 14b7b8990

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
UDS_AirNormalAttackAbility::OnDeactivatedOtherAbility
          (UDS_AirNormalAttackAbility *this,FGameplayTag *param_1,bool *param_2)

{
  FName *pFVar1;
  EDS_AbilityDeactivateType local_res20 [8];
  
  local_res20[0] = 0x11;
  pFVar1 = &FDS_GameplayTags::GetAbilityTag(local_res20)->TagName;
  if ((*pFVar1 != (FName)0x0) && (param_1->TagName == *pFVar1)) {
    local_res20[0] = Success;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res20);
  }
  return;
}

// OnPostActivateAbility @ 14b7ba7f0

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

void __thiscall UDS_AirNormalAttackAbility::OnPostActivateAbility(UDS_AirNormalAttackAbility *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UDS_DataBase *this_00;
  FDS_CharacterBaseTableRow *pFVar4;
  UDS_AirWalkAbilityData *this_01;
  UObject *pUVar5;
  EDS_AbilityDeactivateType local_res8 [8];
  undefined1 local_res10;
  EDS_AbilityDeactivateType local_res18 [8];
  EDS_AbilityDeactivateType local_res20 [8];
  EDS_AbilityTagType local_38;
  EDS_AbilityDeactivateType local_37 [7];
  FWeakObjectPtr local_30;
  FWeakObjectPtr local_28;
  UDS_SkillAbilityContext *local_20;
  
  UDS_CharInfoData::GetData((ulong64)&local_28);
  bVar2 = FWeakObjectPtr::IsValid(&local_28);
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8940103477506342891>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_AirNormalAttackAbility.cpp"
                       ,0x15,"charInfo.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_res8[0] = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res8);
    return;
  }
  local_res10 = 0x29;
  UDS_AbilityDataSet::GetAbilityData<UDS_AirWalkAbilityData>((ulong64 *)&local_30,&this->field_0xe0)
  ;
  bVar2 = FWeakObjectPtr::IsValid(&local_30);
  if (!bVar2) {
    local_res18[0] = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res18);
    return;
  }
  this_00 = (UDS_DataBase *)FWeakObjectPtr::Get(&local_28);
  iVar3 = UDS_DataBase::GetEntityTableID(this_00);
  pFVar4 = FDS_CharacterBaseTableRow::GetRef((longlong)iVar3,true);
  this_01 = (UDS_AirWalkAbilityData *)FWeakObjectPtr::Get(&local_30);
  bVar2 = UDS_AirWalkAbilityData::IsNextSkillPossible(this_01,pFVar4->ID_JumpSkill);
  if (!bVar2) {
    local_res20[0] = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res20);
    return;
  }
  pUVar5 = FWeakObjectPtr::Get(&local_30);
  pUVar5[5].field_0x15 = 1;
  local_20 = NewObject<UDS_SkillAbilityContext>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_20 != (UDS_SkillAbilityContext *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_20);
  }
  local_20->SkillID = pFVar4->ID_JumpSkill;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)local_20);
  }
  local_38 = Skill_Process;
  bVar2 = UDS_GameplayAbility::TryActivateAbility
                    ((UDS_GameplayAbility *)this,&local_38,(TObjectPtr<UWN_AbilityContext>)&local_20
                    );
  if (!bVar2) {
    local_37[0] = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_37);
    return;
  }
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0xd0);
  (**(code **)(*(longlong *)pUVar5 + 0x448))(pUVar5,5);
  return;
}

