// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 19

// StaticClass @ 14b4dc790

UClass * __cdecl UDS_ItemUseAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ItemUseAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ItemUseAbility",
               &Z_Registration_Info_UClass_UDS_ItemUseAbility.InnerSingleton,
               StaticRegisterNativesUDS_ItemUseAbility,0x178,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ItemUseAbility>,
               InternalVTableHelperCtorCaller<UDS_ItemUseAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ItemUseAbility.InnerSingleton;
}

// UDS_ItemUseAbility @ 14b4df790

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

UDS_ItemUseAbility * __thiscall
UDS_ItemUseAbility::UDS_ItemUseAbility(UDS_ItemUseAbility *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->Montage).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->Montage).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->AttachMeshComp).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->AttachMeshComp).WeakPtr,(FObjectPtr)&local_res8);
  (this->EndLoopTimer).Handle = 0;
  (this->ItemApplyTimer).Handle = 0;
  return this;
}

// UDS_ItemUseAbility @ 14b4df810

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

UDS_ItemUseAbility * __thiscall
UDS_ItemUseAbility::UDS_ItemUseAbility(UDS_ItemUseAbility *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->Montage).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->Montage).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->AttachMeshComp).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->AttachMeshComp).WeakPtr,(FObjectPtr)&local_res8);
  (this->EndLoopTimer).Handle = 0;
  (this->ItemApplyTimer).Handle = 0;
  return this;
}

// ~UDS_ItemUseAbility @ 14b4e01a0

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

void __thiscall UDS_ItemUseAbility::~UDS_ItemUseAbility(UDS_ItemUseAbility *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b4e1c10

UClass * __cdecl UDS_ItemUseAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ItemUseAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ItemUseAbility",
               &Z_Registration_Info_UClass_UDS_ItemUseAbility.InnerSingleton,
               StaticRegisterNativesUDS_ItemUseAbility,0x178,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ItemUseAbility>,
               InternalVTableHelperCtorCaller<UDS_ItemUseAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ItemUseAbility.InnerSingleton;
}

// ShouldNotifyChangedCharState @ 14b4e26c0

bool __thiscall UDS_ItemUseAbility::ShouldNotifyChangedCharState(UDS_ItemUseAbility *this)

{
  return true;
}

// StaticRegisterNativesUDS_ItemUseAbility @ 14b4e27a0

void __cdecl UDS_ItemUseAbility::StaticRegisterNativesUDS_ItemUseAbility(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UDS_ItemUseAbility_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnFinishItemUseAction @ 14b4e3ac0

void __cdecl
UDS_ItemUseAbility::execOnFinishItemUseAction(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDS_DataSetBase *local_res10;
  
  local_res10 = (UDS_DataSetBase *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnFinishItemUseAction((UDS_ItemUseAbility *)param_1,local_res10);
  return;
}

// execOnItemApply @ 14b4e3b50

void __cdecl UDS_ItemUseAbility::execOnItemApply(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnItemApply((UDS_ItemUseAbility *)param_1);
  return;
}

// execOnPlayEndLoop @ 14b4e3c20

void __cdecl UDS_ItemUseAbility::execOnPlayEndLoop(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnPlayEndLoop((UDS_ItemUseAbility *)param_1);
  return;
}

// GetAnimInstance @ 14b7eb110

UAnimInstance * __thiscall UDS_ItemUseAbility::GetAnimInstance(UDS_ItemUseAbility *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  USkeletalMeshComponent *this_00;
  UAnimInstance *pUVar5;
  
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  pcVar1 = *(code **)(*(longlong *)pUVar3 + 0x738);
  pUVar4 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  this_00 = (USkeletalMeshComponent *)(*pcVar1)(pUVar3);
  if (this_00 == (USkeletalMeshComponent *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4839545234754896091>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_ItemUseAbility.cpp"
                       ,0xdb,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar5 = (UAnimInstance *)(*pcVar1)();
      return pUVar5;
    }
    return (UAnimInstance *)0x0;
  }
  pUVar5 = USkeletalMeshComponent::GetAnimInstance(this_00);
  return pUVar5;
}

// OnAbilityRetryActivate @ 14b7f4b40

void __thiscall UDS_ItemUseAbility::OnAbilityRetryActivate(UDS_ItemUseAbility *this)

{
  return;
}

// OnCanActivate @ 14b7f7bc0

bool __thiscall UDS_ItemUseAbility::OnCanActivate(UDS_ItemUseAbility *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UDS_CharStateData *this_00;
  FWeakObjectPtr local_res8;
  EDS_CharState local_res10 [3];
  
  if (*(char *)((longlong)&this->_padding_ + 1) != '\x01') {
    return true;
  }
  UDS_CharStateData::GetData((ulong64)&local_res8);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4839545234754895907>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_ItemUseAbility.cpp"
                       ,0x23,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    return false;
  }
  local_res10[0] =
       SkillMode|Taming|ItemUse|Climbing|Cooking|Casting|NPCClientControl|ComeBack|Patrol|NetSync|
       Move|CharSwitch|Remove|Spawn|Resurrect|Dead|Transport|Warp|PlayerSkill|Abnormal_NonControl|
       Abnormal|AirWalk|Seal|HitAdditive|Groggy|AniCut|ToggleSkill|Skill|Avoid|AutoMove|Shield|Swim;
  this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res8);
  bVar2 = UDS_CharStateData::HasCharState(this_00,local_res10);
  return !bVar2;
}

// OnChangedCharState @ 14b7f9d60

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
UDS_ItemUseAbility::OnChangedCharState
          (UDS_ItemUseAbility *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
          FDS_ChangedCharStateInfo *param_2)

{
  code *pcVar1;
  bool bVar2;
  UDS_ItemDataSet *this_00;
  UObject *pUVar3;
  FDS_ItemActionTableRow *pFVar4;
  UDS_AbilitySystemComponent *this_01;
  EDS_CharState EVar5;
  EDS_AbilityDeactivateType local_res8 [8];
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FDS_ChangedCharStateInfo local_38;
  
  local_38.StateTag.TagName = (param_2->StateTag).TagName;
  local_38.bIsStateTagOn = param_2->bIsStateTagOn;
  local_38._9_7_ = *(undefined7 *)&param_2->field_0x9;
  local_38.AddedCharState = param_2->AddedCharState;
  local_38.RemovedCharState = param_2->RemovedCharState;
  local_38.AddedCharDetailState = param_2->AddedCharDetailState;
  local_38.RemovedCharDetailState = param_2->RemovedCharDetailState;
  UDS_GameplayAbility::OnChangedCharState((UDS_GameplayAbility *)this,param_1,&local_38);
  if (*(char *)((longlong)&this->_padding_ + 1) == '\x01') {
    DS_ItemDataUtil::GetItemDataSet();
    bVar2 = FWeakObjectPtr::IsValid(&local_res18);
    if (bVar2) {
      this_00 = (UDS_ItemDataSet *)FWeakObjectPtr::Get(&local_res18);
      UDS_ItemDataSet::CancelItemAction(this_00);
      return;
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4839545234754896030>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_ItemUseAbility.cpp"
                       ,0x9e,"false");
    if (!bVar2) {
      return;
    }
  }
  else {
    UDS_GameplayAbility::GetContextData<UDS_ItemUseAbilityContext>((UDS_GameplayAbility *)this);
    bVar2 = FWeakObjectPtr::IsValid(&local_res20);
    if (bVar2) {
      pUVar3 = FWeakObjectPtr::Get(&local_res20);
      pFVar4 = FDS_ItemActionTableRow::Get((longlong)*(int *)&pUVar3[1].field_0x10,true);
      if (pFVar4 == (FDS_ItemActionTableRow *)0x0) {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4839545234754896039>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_ItemUseAbility.cpp"
                           ,0xa7,"false");
        if (bVar2) goto code_r0x00014b7f9eba;
      }
      else {
        EVar5 = None;
        if (pFVar4->IsMove == true) {
          EVar5 = Move;
        }
        if (((param_2->AddedCharState & EVar5) != EVar5) && (param_2->AddedCharState != None)) {
          local_res8[0] = Cancel;
          this_01 = (UDS_AbilitySystemComponent *)
                    FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
          UDS_AbilitySystemComponent::DeactivateAbilityByTag
                    (this_01,(FGameplayTag *)&this->_padding_,local_res8);
        }
      }
      return;
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4839545234754896037>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_ItemUseAbility.cpp"
                       ,0xa5,"false");
    if (!bVar2) {
      return;
    }
  }
code_r0x00014b7f9eba:
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// OnDeactivateAbility @ 14b7fd060

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

void __thiscall UDS_ItemUseAbility::OnDeactivateAbility(UDS_ItemUseAbility *this,bool *param_1)

{
  code *pcVar1;
  bool bVar2;
  FGameplayTag *pFVar3;
  UObject *pUVar4;
  UAnimInstance *this_00;
  UAnimMontage *pUVar5;
  FTimerManager *this_01;
  FTimerData *pFVar6;
  EDS_StateTagType local_res8 [8];
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  undefined8 local_28 [2];
  
  local_res8[0] = ItemUse;
  pFVar3 = FDS_GameplayTags::GetStateTag(local_res8);
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,pFVar3);
  bVar2 = TWeakObjectPtr<USceneComponent,FWeakObjectPtr>::UEOpEquals
                    (&this->AttachMeshComp,(void *)0x0);
  if (!bVar2) {
    pUVar4 = FWeakObjectPtr::Get(&(this->AttachMeshComp).WeakPtr);
    (**(code **)(*(longlong *)pUVar4 + 0x4a0))(pUVar4,0);
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_28[0] = 0;
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)local_28);
    (this->AttachMeshComp).WeakPtr = local_res18;
  }
  if (*(char *)((longlong)&this->_padding_ + 1) == '\x01') {
    DS_ItemDataUtil::GetItemDataSet();
    bVar2 = FWeakObjectPtr::IsValid(&local_res20);
    if (!bVar2) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4839545234754896067>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_ItemUseAbility.cpp"
                         ,0xc3,"false");
      if (!bVar2) {
        return;
      }
      goto code_r0x00014b7fd185;
    }
    pUVar4 = FWeakObjectPtr::Get(&local_res20);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar4[0x10].field_0x18,
               (UObject *)this);
  }
  this_00 = GetAnimInstance(this);
  if (this_00 == (UAnimInstance *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4839545234754896073>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_ItemUseAbility.cpp"
                       ,0xc9,"false");
    if (bVar2) {
code_r0x00014b7fd185:
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    bVar2 = FWeakObjectPtr::IsValid(&(this->Montage).WeakPtr);
    if (bVar2) {
      pUVar5 = (UAnimMontage *)FWeakObjectPtr::Get(&(this->Montage).WeakPtr);
      UAnimInstance::Montage_Stop(this_00,__real_3dcccccd,pUVar5);
    }
    this_01 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar6 = FTimerManager::FindTimer(this_01,&this->EndLoopTimer);
    if (pFVar6 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(this_01,(FTimerHandle)(this->EndLoopTimer).Handle);
    }
    (this->EndLoopTimer).Handle = 0;
  }
  return;
}

// OnFinishItemUseAction @ 14b7fd7f0

void __thiscall
UDS_ItemUseAbility::OnFinishItemUseAction(UDS_ItemUseAbility *this,UDS_DataSetBase *param_1)

{
  UDS_AbilitySystemComponent *this_00;
  EDS_AbilityDeactivateType local_res8 [32];
  
  local_res8[0] = Cancel;
  this_00 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UDS_AbilitySystemComponent::DeactivateAbilityByTag
            (this_00,(FGameplayTag *)&this->_padding_,local_res8);
  return;
}

// OnItemApply @ 14b7ff020

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

void __thiscall UDS_ItemUseAbility::OnItemApply(UDS_ItemUseAbility *this)

{
  FDS_StringUiID *pFVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  FDS_ItemActionTableRow *pFVar5;
  longlong lVar6;
  long64 lVar7;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  undefined8 local_res18 [2];
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_38;
  
  bVar3 = TWeakObjectPtr<USceneComponent,FWeakObjectPtr>::UEOpEquals
                    (&this->AttachMeshComp,(void *)0x0);
  if (!bVar3) {
    pUVar4 = FWeakObjectPtr::Get(&(this->AttachMeshComp).WeakPtr);
    (**(code **)(*(longlong *)pUVar4 + 0x4a0))(pUVar4,0);
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res18[0] = 0;
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
    (this->AttachMeshComp).WeakPtr = local_res8;
  }
  if (*(char *)((longlong)&this->_padding_ + 1) == '\x01') {
    UDS_GameplayAbility::GetContextData<UDS_ItemUseAbilityContext>((UDS_GameplayAbility *)this);
    bVar3 = FWeakObjectPtr::IsValid(&local_res10);
    if (!bVar3) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4839545234754896122>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_ItemUseAbility.cpp"
                         ,0xfa,"false");
      if (!bVar3) {
        return;
      }
code_r0x00014b7ff129:
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar4 = FWeakObjectPtr::Get(&local_res10);
    pFVar5 = FDS_ItemActionTableRow::Get((longlong)*(int *)&pUVar4[1].field_0x10,true);
    if (pFVar5 == (FDS_ItemActionTableRow *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4839545234754896125>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_ItemUseAbility.cpp"
                         ,0xfd,"false");
      if (bVar3) goto code_r0x00014b7ff129;
    }
    else {
      pFVar1 = &pFVar5->SuccessMessage;
      lVar6 = (**(code **)(pFVar5->SuccessMessage)._padding_)(pFVar1);
      if (0 < lVar6) {
        local_38._0_8_ = 0;
        local_38._8_8_ = 0;
        local_38._16_4_ = 0;
        lVar7 = (**(code **)pFVar1->_padding_)(pFVar1);
        UDS_UIMessageManager::OpenMsgByStringUi(lVar7,Alert_System_01,&local_38);
      }
    }
  }
  return;
}

// OnPlayEndLoop @ 14b801090

void __thiscall UDS_ItemUseAbility::OnPlayEndLoop(UDS_ItemUseAbility *this)

{
  code *pcVar1;
  bool bVar2;
  UAnimInstance *this_00;
  FName *pFVar3;
  UDS_AbilitySystemComponent *this_01;
  EDS_AbilityDeactivateType local_res10 [8];
  FName local_res18 [2];
  
  this_00 = GetAnimInstance(this);
  if (this_00 == (UAnimInstance *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4839545234754896104>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_ItemUseAbility.cpp"
                       ,0xe8,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    pFVar3 = ::FName::FName(local_res18,"LoopEnd");
    UAnimInstance::Montage_JumpToSection(this_00,*pFVar3,(UAnimMontage *)0x0);
    local_res10[0] = Cancel;
    this_01 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_AbilitySystemComponent::DeactivateAbilityByTag
              (this_01,(FGameplayTag *)&this->_padding_,local_res10);
  }
  return;
}

// OnPostActivateAbility @ 14b806630

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
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UDS_ItemUseAbility::OnPostActivateAbility(UDS_ItemUseAbility *this)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  char *pcVar4;
  char *pcVar5;
  float fVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr> TVar10;
  UAnimInstance *this_00;
  UObject *pUVar11;
  FDS_ItemActionTableRow *pFVar12;
  FDS_ResourceMontageTableRow *pFVar13;
  UClass *pUVar14;
  UObject *pUVar15;
  USceneComponent *pUVar16;
  USceneComponent *pUVar17;
  char *pcVar18;
  UFunction *pUVar19;
  UAnimMontage *pUVar20;
  UAnimMontage *this_01;
  FName *pFVar21;
  FGameplayTag *pFVar22;
  FTimerManager *pFVar23;
  UDS_AbilitySystemComponent *this_02;
  longlong *plVar24;
  wchar_t *pwVar25;
  FObjectPtr_u_0 FVar26;
  undefined1 auStackY_308 [32];
  EDS_AbilityInputPolicy local_2c8;
  EDS_StateTagType local_2c7;
  EDS_AbilityDeactivateType local_2c6 [2];
  <lambda_1> local_2c4 [4];
  FWeakObjectPtr local_2c0;
  FWeakObjectPtr local_2b8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2b0;
  FWeakObjectPtr local_2a8;
  FName local_2a0;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_298;
  FWeakObjectPtr local_288;
  FWeakObjectPtr local_280;
  FWeakObjectPtr local_278;
  FName local_270;
  undefined8 local_268;
  FName local_260;
  FSoftObjectPath local_258;
  USceneComponent *local_238;
  USceneComponent *local_230;
  FName local_228;
  UDS_ItemUseAbility *local_220;
  FName *local_218;
  undefined8 local_210;
  UObject *local_208;
  undefined8 local_200;
  FString local_1f8;
  FScriptContainerElement *local_1e8;
  int iStack_1e0;
  undefined4 uStack_1dc;
  FDestructionSentinel local_1d8;
  TStringView<wchar_t> local_1b8;
  code *local_1a8;
  FName FStack_1a0;
  code *local_198;
  FName FStack_190;
  FName local_188;
  FReadAccessScope local_180;
  FReadAccessScope local_168;
  undefined1 local_148 [128];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_308;
  local_2b8.ObjectIndex = 0;
  local_2b8.ObjectSerialNumber = 0;
  bVar8 = false;
  local_210 = 0;
  FWeakObjectPtr::operator=(&local_2b8,(FObjectPtr)&local_210);
  if (*(char *)((longlong)&this->_padding_ + 1) == '\x01') {
    TVar10 = DS_ItemDataUtil::GetItemDataSet();
                    /* WARNING: Load size is inaccurate */
    local_2b8 = *TVar10.WeakPtr;
    bVar7 = FWeakObjectPtr::IsValid(&local_2b8);
    if (!bVar7) {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4839545234754895939>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_ItemUseAbility.cpp"
                         ,0x43,"false");
      if (bVar8) goto code_r0x00014b806936;
      goto LAB_14b806f92;
    }
  }
  UDS_GameplayAbility::GetContextData<UDS_ItemUseAbilityContext>((UDS_GameplayAbility *)this);
  bVar7 = FWeakObjectPtr::IsValid(&local_288);
  if (!bVar7) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4839545234754895943>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_ItemUseAbility.cpp"
                       ,0x47,"false");
    if (bVar8) {
code_r0x00014b806936:
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    goto LAB_14b806f92;
  }
  this_00 = GetAnimInstance(this);
  if (this_00 == (UAnimInstance *)0x0) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4839545234754895953>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_ItemUseAbility.cpp"
                       ,0x51,"false");
    if (bVar8) goto code_r0x00014b806936;
    goto LAB_14b806f92;
  }
  FDS_EntityBase::GetCharInfoData((FDS_EntityBase *)this->_padding_);
  bVar7 = TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> *)&local_278,(void *)0x0);
  if (bVar7) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4839545234754895956>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_ItemUseAbility.cpp"
                       ,0x54,"false");
    if (bVar8) goto code_r0x00014b806936;
    goto LAB_14b806f92;
  }
  pUVar11 = FWeakObjectPtr::Get(&local_288);
  pFVar12 = FDS_ItemActionTableRow::Get((longlong)*(int *)&pUVar11[1].field_0x10,true);
  if (pFVar12 == (FDS_ItemActionTableRow *)0x0) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4839545234754895959>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_ItemUseAbility.cpp"
                       ,0x57,"false");
    if (bVar8) goto code_r0x00014b806936;
    goto LAB_14b806f92;
  }
  pUVar11 = FWeakObjectPtr::Get(&local_278);
  pFVar13 = FDS_ResourceMontageTableRow::Get
                      ((longlong)(*(int *)&pUVar11[8].field_0x8 + pFVar12->ActionAni),true);
  if (pFVar13 == (FDS_ResourceMontageTableRow *)0x0) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4839545234754895962>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_ItemUseAbility.cpp"
                       ,0x5a,"false");
    if (bVar8) goto code_r0x00014b806936;
    goto LAB_14b806f92;
  }
  local_208 = FSoftObjectPath::TryLoad(&pFVar13->FilePath,(FUObjectSerializeContext *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_208 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_208);
  }
  FWeakObjectPtr::operator=(&(this->Montage).WeakPtr,(FObjectPtr)&local_208);
  bVar7 = FWeakObjectPtr::IsValid(&(this->Montage).WeakPtr);
  if (!bVar7) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4839545234754895965>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_ItemUseAbility.cpp"
                       ,0x5d,"false");
    if (bVar8) goto code_r0x00014b806936;
    goto LAB_14b806f92;
  }
  (**(code **)(*(longlong *)this->_padding_ + 0x80))();
  bVar7 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&local_2c0,(void *)0x0
                    );
  if (bVar7) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4839545234754895968>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_ItemUseAbility.cpp"
                       ,0x60,"false");
    if (bVar8) goto code_r0x00014b806936;
    goto LAB_14b806f92;
  }
  pUVar11 = FWeakObjectPtr::Get(&local_288);
  dVar1 = *(double *)&pUVar11[1].field_0x8;
  dVar3 = UDS_TimeUtilManager::GetCurrentServerTime();
  dVar1 = dVar1 - dVar3;
  if (dVar1 < 0.0) goto LAB_14b806f92;
  if ((pFVar12->MeshSocketName).Data.ArrayNum == 0) {
    pwVar25 = L"";
  }
  else {
    pwVar25 = (wchar_t *)(pFVar12->MeshSocketName).Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_270,pwVar25);
  ::FString::FString(&local_1f8,&pFVar12->AttachedMeshPath);
  if (local_1f8.Data.ArrayNum < 2) {
LAB_14b806c48:
    if (*(char *)((longlong)&this->_padding_ + 1) == '\x01') {
      pUVar11 = FWeakObjectPtr::Get(&local_2b8);
      pcVar18 = strstr("&UDS_ItemUseAbility::OnFinishItemUseAction","::");
      pcVar5 = (char *)0x0;
      while (pcVar4 = pcVar18, pcVar4 != (char *)0x0) {
        pcVar18 = strstr(pcVar4 + 1,"::");
        pcVar5 = pcVar4;
      }
      if (((pcVar5 == (char *)0x0) || (pcVar5[2] == '0')) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Result && Result[2] != \'0\'",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                             ,0x1da,L"\'%hs\' does not look like a member function"), bVar8)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      ::FName::FName(&local_228,pcVar5 + 2);
      local_2b0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_2a8.ObjectIndex = 0;
      local_2a8.ObjectSerialNumber = 0;
      local_2a0.ComparisonIndex.Value = 0;
      local_2a0.Number = 0;
      local_260 = local_228;
      local_220 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=(&local_2a8,(FObjectPtr)&local_220);
      local_2a0 = local_260;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                (&local_2b0,&local_180);
      local_268 = 0;
      if ((local_2a0 == (FName)0x0) ||
         (pUVar15 = FWeakObjectPtr::Get(&local_2a8), pUVar15 == (UObject *)0x0)) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_180);
LAB_14b806d8a:
        local_218 = &local_260;
        `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UDS_DataSetBase_*>::
        __Internal_BindDynamic<UDS_ItemUseAbility>'::__l2::<lambda_1>::operator()(&local_218);
      }
      else {
        pUVar19 = UObject::FindFunction(pUVar15,local_2a0);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_180);
        if (pUVar19 == (UFunction *)0x0) goto LAB_14b806d8a;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                (&local_2b0,&local_168);
      local_298.Object = local_2a8;
      local_298.FunctionName = local_2a0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_168);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar11[0x10].field_0x18
                 ,(FWriteAccessScope *)&local_1d8);
      TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
      RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
                ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
                  *)&pUVar11[0x10].field_0x20,local_2c4,Default);
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar11[0x10].field_0x18,
                 &local_298);
      if (local_1d8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1d8.Accessor,&local_1d8);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2b0.AccessDetector);
    }
    pUVar20 = (UAnimMontage *)FWeakObjectPtr::Get(&(this->Montage).WeakPtr);
    this_01 = (UAnimMontage *)FWeakObjectPtr::Get(&(this->Montage).WeakPtr);
    pFVar21 = ::FName::FName(&local_188,"LoopEnd");
    iVar9 = UAnimMontage::GetSectionIndex(this_01,*pFVar21);
    UAnimMontage::GetSectionLength(pUVar20,iVar9);
    local_2c8 = BlockInput;
    if (pFVar12->IsMove != false) {
      local_2c8 = None;
    }
    UDS_GameplayAbility::SetInputPolicy((UDS_GameplayAbility *)this,&local_2c8);
    local_2c7 = ItemUse;
    pFVar22 = FDS_GameplayTags::GetStateTag(&local_2c7);
    UDS_GameplayAbility::AddTagToASC((UDS_GameplayAbility *)this,pFVar22);
    pUVar20 = (UAnimMontage *)FWeakObjectPtr::Get(&(this->Montage).WeakPtr);
    UAnimInstance::Montage_Play(this_00,pUVar20,__real_3f800000,MontageLength,0.0,true);
    pFVar23 = FDS_TimerManager::Get((UObject *)0x0);
    fVar6 = __real_bf800000;
    local_298.FunctionName = (FName)((ulonglong)local_298.FunctionName & 0xffffffff00000000);
    local_298.Object = (FWeakObjectPtr)OnPlayEndLoop;
    local_1a8 = OnPlayEndLoop;
    FStack_1a0 = local_298.FunctionName;
    FTimerManager::SetTimer<UDS_ItemUseAbility>
              (pFVar23,&this->EndLoopTimer,this,(pmf_1a9241ab *)&local_1a8,(float)dVar1,false,
               __real_bf800000);
    pFVar23 = FDS_TimerManager::Get((UObject *)0x0);
    local_298.Object = (FWeakObjectPtr)OnItemApply;
    local_298.FunctionName = (FName)((ulonglong)local_298.FunctionName & 0xffffffff00000000);
    local_198 = OnItemApply;
    FStack_190 = local_298.FunctionName;
    FTimerManager::SetTimer<UDS_ItemUseAbility>
              (pFVar23,&this->ItemApplyTimer,this,(pmf_1a9241ab *)&local_198,pFVar12->ApplyTime,
               false,fVar6);
    bVar8 = true;
  }
  else {
    local_1e8 = (pFVar12->AttachedMeshPath).Data.AllocatorInstance.Data;
    iVar9 = (pFVar12->AttachedMeshPath).Data.ArrayNum;
    local_258.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_258.AssetPath.PackageName.Number = 0;
    local_258.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_258.AssetPath.AssetName.Number = 0;
    local_258.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.SubPathString.Data.ArrayNum = 0;
    local_258.SubPathString.Data.ArrayMax = 0;
    iStack_1e0 = iVar9 + -1;
    if (iVar9 == 0) {
      iStack_1e0 = 0;
    }
    local_1b8._12_4_ = uStack_1dc;
    local_1b8.Size = iStack_1e0;
    local_1b8.DataPtr = (wchar_t *)local_1e8;
    FSoftObjectPath::SetPath(&local_258,&local_1b8);
    pUVar11 = FSoftObjectPath::TryLoad(&local_258,(FUObjectSerializeContext *)0x0);
    if (local_258.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.SubPathString.Data.AllocatorInstance.Data);
    }
    if (pUVar11 != (UObject *)0x0) {
      local_280.ObjectIndex = 0;
      local_280.ObjectSerialNumber = 0;
      local_200 = 0;
      FWeakObjectPtr::operator=(&local_280,(FObjectPtr)&local_200);
      (this->AttachMeshComp).WeakPtr = local_280;
      pUVar14 = Z_Construct_UClass_UStaticMesh_NoRegister();
      iVar9 = (int)pUVar14->_padding_;
      if ((*(int *)(*(longlong *)&pUVar11->field_0x10 + 0x38) < iVar9) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar11->field_0x10 + 0x30) + (longlong)iVar9 * 8) !=
          &pUVar14->_padding_)) {
        pUVar14 = Z_Construct_UClass_USkeletalMesh_NoRegister();
        iVar9 = (int)pUVar14->_padding_;
        if ((*(int *)(*(longlong *)&pUVar11->field_0x10 + 0x38) < iVar9) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar11->field_0x10 + 0x30) + (longlong)iVar9 * 8) !=
            &pUVar14->_padding_)) goto LAB_14b806c48;
        pUVar15 = FWeakObjectPtr::Get(&local_2c0);
        FObjectInitializer::AssertIfInConstructor
                  (pUVar15,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar14 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_c8,pUVar14);
        local_c8._8_8_ = pUVar15;
        pUVar16 = (USceneComponent *)
                  StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
        if (local_c8._64_8_ != 0) {
          plVar24 = (longlong *)(local_c8 + 0x50);
          if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
            plVar24 = (longlong *)local_c8._104_8_;
          }
          (**(code **)(*plVar24 + 0x10))();
        }
        (**(code **)(pUVar16->_padding_ + 0xb48))(pUVar16,pUVar11,1);
        (**(code **)(pUVar16->_padding_ + 0x5f8))(pUVar16,2);
        pUVar17 = (USceneComponent *)FWeakObjectPtr::Get(&local_2c0);
        USceneComponent::SetupAttachment(pUVar16,pUVar17,local_270);
        UActorComponent::RegisterComponent((UActorComponent *)pUVar16);
        local_230 = pUVar16;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar16);
        }
        FVar26.Handle = (UObject *)&local_230;
      }
      else {
        pUVar15 = FWeakObjectPtr::Get(&local_2c0);
        FObjectInitializer::AssertIfInConstructor
                  (pUVar15,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar14 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_148,pUVar14);
        local_148._8_8_ = pUVar15;
        pUVar16 = (USceneComponent *)
                  StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_148);
        if (local_148._64_8_ != 0) {
          plVar24 = (longlong *)(local_148 + 0x50);
          if ((longlong *)local_148._104_8_ != (longlong *)0x0) {
            plVar24 = (longlong *)local_148._104_8_;
          }
          (**(code **)(*plVar24 + 0x10))();
        }
        (**(code **)(pUVar16->_padding_ + 0xb28))(pUVar16,pUVar11);
        (**(code **)(pUVar16->_padding_ + 0x5f8))(pUVar16,2);
        pUVar17 = (USceneComponent *)FWeakObjectPtr::Get(&local_2c0);
        USceneComponent::SetupAttachment(pUVar16,pUVar17,local_270);
        UActorComponent::RegisterComponent((UActorComponent *)pUVar16);
        local_238 = pUVar16;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar16);
        }
        FVar26.Handle = (UObject *)&local_238;
      }
      FWeakObjectPtr::operator=(&(this->AttachMeshComp).WeakPtr,(FObjectPtr)FVar26);
      goto LAB_14b806c48;
    }
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4839545234754895981>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_ItemUseAbility.cpp"
                       ,0x6d,"false");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
  }
  if (bVar8) {
    return;
  }
LAB_14b806f92:
  local_2c6[0] = Cancel;
  this_02 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UDS_AbilitySystemComponent::DeactivateAbilityByTag
            (this_02,(FGameplayTag *)&this->_padding_,local_2c6);
  return;
}

