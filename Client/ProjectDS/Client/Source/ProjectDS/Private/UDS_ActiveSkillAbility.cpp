// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 21

// StaticClass @ 14b40cc90

UClass * __cdecl UDS_ActiveSkillAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ActiveSkillAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ActiveSkillAbility",
               &Z_Registration_Info_UClass_UDS_ActiveSkillAbility.InnerSingleton,
               StaticRegisterNativesUDS_ActiveSkillAbility,0x1a0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ActiveSkillAbility>,
               InternalVTableHelperCtorCaller<UDS_ActiveSkillAbility>,local_res8,
               UDS_SkillAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ActiveSkillAbility.InnerSingleton;
}

// UDS_ActiveSkillAbility @ 14b411310

UDS_ActiveSkillAbility * __thiscall
UDS_ActiveSkillAbility::UDS_ActiveSkillAbility(UDS_ActiveSkillAbility *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UDS_SkillAbility::UDS_SkillAbility((UDS_SkillAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->SkillID = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StartActorLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartActorLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->StartActorLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->TargetActorLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->TargetActorLocation).field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->MoveDelta = 0.0;
  (this->TargetActorLocation).field0_0x0._s_0.Z = (double)uVar1;
  this->WaitAndStartSkill = true;
  return this;
}

// ~UDS_ActiveSkillAbility @ 14b411ea0

void __thiscall UDS_ActiveSkillAbility::~UDS_ActiveSkillAbility(UDS_ActiveSkillAbility *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_SkillAbility::~UDS_SkillAbility((UDS_SkillAbility *)this);
  return;
}

// GetDefaultInputPolicy @ 14b413100

EDS_AbilityInputPolicy __thiscall
UDS_ActiveSkillAbility::GetDefaultInputPolicy(UDS_ActiveSkillAbility *this)

{
  return BlockInput;
}

// GetPrivateStaticClass @ 14b4134e0

UClass * __cdecl UDS_ActiveSkillAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ActiveSkillAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ActiveSkillAbility",
               &Z_Registration_Info_UClass_UDS_ActiveSkillAbility.InnerSingleton,
               StaticRegisterNativesUDS_ActiveSkillAbility,0x1a0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ActiveSkillAbility>,
               InternalVTableHelperCtorCaller<UDS_ActiveSkillAbility>,local_res8,
               UDS_SkillAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ActiveSkillAbility.InnerSingleton;
}

// StaticRegisterNativesUDS_ActiveSkillAbility @ 14b414260

void __cdecl UDS_ActiveSkillAbility::StaticRegisterNativesUDS_ActiveSkillAbility(void)

{
  return;
}

// UDS_ActiveSkillAbility @ 14b79b370

UDS_ActiveSkillAbility * __thiscall
UDS_ActiveSkillAbility::UDS_ActiveSkillAbility
          (UDS_ActiveSkillAbility *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UDS_SkillAbility::UDS_SkillAbility((UDS_SkillAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->SkillID = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StartActorLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartActorLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->StartActorLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->TargetActorLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->TargetActorLocation).field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->MoveDelta = 0.0;
  (this->TargetActorLocation).field0_0x0._s_0.Z = (double)uVar1;
  this->WaitAndStartSkill = true;
  return this;
}

// AssignStateTag @ 14b79d410

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

void __thiscall UDS_ActiveSkillAbility::AssignStateTag(UDS_ActiveSkillAbility *this,int param_1)

{
  void *_Src;
  bool bVar1;
  UObject *pUVar2;
  UDS_SkillData *this_00;
  longlong lVar3;
  FWeakObjectPtr local_res8;
  EDS_StateTagType local_res10 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_18;
  
  local_res10[0] = Lock_Rotation;
  UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_res10);
  UDS_SkillData::GetData((ulong64)&local_res8,this->_padding_,SUB41(param_1,0));
  bVar1 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&local_res8);
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = *(int *)&pUVar2[4].field_0x18;
    lVar3 = (longlong)local_18.ArrayNum;
    _Src = *(void **)&pUVar2[4].field_0x10;
    if (local_18.ArrayNum == 0) {
      local_18.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_18.ArrayNum,0,&local_18.AllocatorInstance,local_18.ArrayNum,
                 &local_18.ArrayMax);
      memcpy(local_18.AllocatorInstance.Data,_Src,lVar3 << 2);
    }
    pUVar2 = FWeakObjectPtr::Get(&local_res8);
    UDS_GameplayAbility::AddStateTagToASC
              ((UDS_GameplayAbility *)this,(FGameplayTag *)&pUVar2[2].field_0x8,&local_18);
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
    this_00 = (UDS_SkillData *)FWeakObjectPtr::Get(&local_res8);
    bVar1 = UDS_SkillData::IsSuicide(this_00);
    if (bVar1) {
      local_res10[0] = SuicideSkill;
      UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_res10);
    }
  }
  return;
}

// ClearVariables @ 14b79feb0

void __thiscall UDS_ActiveSkillAbility::ClearVariables(UDS_ActiveSkillAbility *this)

{
  UDS_SkillAbility::ClearVariables((UDS_SkillAbility *)this);
  this->SkillID = 0;
  return;
}

// InitOtherAbilityEventSubscriptions @ 14b7aedc0

void __thiscall
UDS_ActiveSkillAbility::InitOtherAbilityEventSubscriptions(UDS_ActiveSkillAbility *this)

{
  FGameplayTag *pFVar1;
  EDS_AbilityTagType local_res8 [32];
  
  local_res8[0] = AttackTarget;
  pFVar1 = FDS_GameplayTags::GetAbilityTag(local_res8);
  FGameplayTagContainer::AddTag((FGameplayTagContainer *)&this->_padding_,pFVar1);
  return;
}

// OnCanActivate @ 14b7b50f0

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

bool __thiscall UDS_ActiveSkillAbility::OnCanActivate(UDS_ActiveSkillAbility *this)

{
  bool bVar1;
  char cVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res10 [3];
  
  bVar1 = UDS_SkillAbility::OnCanActivate((UDS_SkillAbility *)this);
  if (bVar1) {
    UDS_GameplayAbility::GetContextData<UDS_SkillAbilityContext>((UDS_GameplayAbility *)this);
    bVar1 = FWeakObjectPtr::IsValid(local_res10);
    if (bVar1) {
      pUVar3 = FWeakObjectPtr::Get(local_res10);
      if ((pUVar3[4].field_0x15 == '\0') && (*(char *)((longlong)&this->_padding_ + 1) == '\x01')) {
        pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        cVar2 = (**(code **)(*(longlong *)pUVar3 + 0x2f8))(pUVar3);
        return cVar2 != '\0';
      }
      return true;
    }
  }
  return false;
}

// OnDeactivateAbility @ 14b7b76a0

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
UDS_ActiveSkillAbility::OnDeactivateAbility(UDS_ActiveSkillAbility *this,bool *param_1)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  UObject *pUVar4;
  UDS_SkillData *this_00;
  EDS_AbilityTagType local_res8 [8];
  FWeakObjectPtr local_res18 [2];
  
  UDS_SkillAbility::OnDeactivateAbility((UDS_SkillAbility *)this,param_1);
  local_res8[0] = SwimSurfaceSprint;
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  plVar1 = &this->_padding_;
  local_res8[0] = RotateToTarget;
  UDS_GameplayAbility::DeactivateAbility
            ((UDS_GameplayAbility *)this,local_res8,(EDS_AbilityDeactivateType *)plVar1);
  local_res8[0] = SkillRotate;
  UDS_GameplayAbility::DeactivateAbility
            ((UDS_GameplayAbility *)this,local_res8,(EDS_AbilityDeactivateType *)plVar1);
  local_res8[0] = SkillMove;
  UDS_GameplayAbility::DeactivateAbility
            ((UDS_GameplayAbility *)this,local_res8,(EDS_AbilityDeactivateType *)plVar1);
  local_res8[0] = AttackTarget;
  UDS_GameplayAbility::DeactivateAbility
            ((UDS_GameplayAbility *)this,local_res8,(EDS_AbilityDeactivateType *)plVar1);
  local_res8[0] = SkillGuide;
  UDS_GameplayAbility::DeactivateAbility
            ((UDS_GameplayAbility *)this,local_res8,(EDS_AbilityDeactivateType *)plVar1);
  if ((char)*plVar1 != '\x03') {
    local_res8[0] = ToggleSkill_Default;
    UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  }
  iVar2 = this->SkillID;
  local_res8[0] = HitProcess;
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  UDS_SkillData::GetData((ulong64)local_res18,this->_padding_,SUB41(iVar2,0));
  bVar3 = FWeakObjectPtr::IsValid(local_res18);
  if (bVar3) {
    pUVar4 = FWeakObjectPtr::Get(local_res18);
    UDS_GameplayAbility::RemoveStateTagToASC
              ((UDS_GameplayAbility *)this,(FGameplayTag *)&pUVar4[2].field_0x8);
  }
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar3) {
    this_00 = (UDS_SkillData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_SkillData::EndSkill(this_00);
  }
  return;
}

// OnDeactivatedOtherAbility @ 14b7b8940

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
UDS_ActiveSkillAbility::OnDeactivatedOtherAbility
          (UDS_ActiveSkillAbility *this,FGameplayTag *param_1,bool *param_2)

{
  FName *pFVar1;
  EDS_AbilityDeactivateType local_res20 [8];
  
  local_res20[0] = 0x20;
  pFVar1 = &FDS_GameplayTags::GetAbilityTag(local_res20)->TagName;
  if ((*pFVar1 != (FName)0x0) && (param_1->TagName == *pFVar1)) {
    local_res20[0] = Success;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res20);
  }
  return;
}

// OnPostActivateAbility @ 14b7ba370

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

void __thiscall UDS_ActiveSkillAbility::OnPostActivateAbility(UDS_ActiveSkillAbility *this)

{
  int iVar1;
  void *_Src;
  bool bVar2;
  UObject *pUVar3;
  UDS_SkillData *this_00;
  UDS_GameInstance *pUVar4;
  UObject *pUVar5;
  TVector<double> *this_01;
  UDS_MovementCore *this_02;
  TRotator<double> *pTVar6;
  longlong lVar7;
  code *pcVar8;
  EDS_AbilityDeactivateType local_res10 [8];
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  TRotator<double> local_58;
  TRotator<double> local_40;
  
  UDS_SkillAbility::OnPostActivateAbility((UDS_SkillAbility *)this);
  UDS_GameplayAbility::GetContextData<UDS_SkillAbilityContext>((UDS_GameplayAbility *)this);
  bVar2 = FWeakObjectPtr::IsValid(&local_res20);
  if (bVar2) {
    local_res10[0] = Cancel;
    local_res18.ObjectIndex._0_1_ = 0x2a;
    UDS_GameplayAbility::DeactivateAbility
              ((UDS_GameplayAbility *)this,(EDS_AbilityTagType *)&local_res18,local_res10);
    local_res10[0] = 7;
    UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_res10);
    pUVar3 = FWeakObjectPtr::Get(&local_res20);
    local_res10[0] = 0x22;
    iVar1 = *(int *)(pUVar3 + 1);
    this->SkillID = iVar1;
    UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_res10);
    UDS_SkillData::GetData((ulong64)&local_res18,this->_padding_,SUB41(iVar1,0));
    bVar2 = FWeakObjectPtr::IsValid(&local_res18);
    if (bVar2) {
      pUVar3 = FWeakObjectPtr::Get(&local_res18);
      local_58.Pitch = 0.0;
      local_58.Yaw._0_4_ = *(int *)&pUVar3[4].field_0x18;
      lVar7 = (longlong)local_58.Yaw._0_4_;
      _Src = *(void **)&pUVar3[4].field_0x10;
      if (local_58.Yaw._0_4_ == 0) {
        local_58.Yaw._4_4_ = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_58.Yaw._0_4_,0,(ForAnyElementType *)&local_58,local_58.Yaw._0_4_,
                   (int *)((longlong)&local_58.Yaw + 4));
        memcpy((void *)local_58.Pitch,_Src,lVar7 << 2);
      }
      pUVar3 = FWeakObjectPtr::Get(&local_res18);
      UDS_GameplayAbility::AddStateTagToASC
                ((UDS_GameplayAbility *)this,(FGameplayTag *)&pUVar3[2].field_0x8,
                 (TArray<int,TSizedDefaultAllocator<32>_> *)&local_58);
      if ((void *)local_58.Pitch != (void *)0x0) {
        FMemory::Free((void *)local_58.Pitch);
      }
      this_00 = (UDS_SkillData *)FWeakObjectPtr::Get(&local_res18);
      bVar2 = UDS_SkillData::IsSuicide(this_00);
      if (bVar2) {
        local_res10[0] = 0x16;
        UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_res10);
      }
    }
    pUVar4 = UDS_GameInstance::GetInst();
    if (pUVar4->bUseNewRotateAbility == false) {
      pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      if (pUVar3[6].field_0x11 == '\x01') {
        pUVar3 = FWeakObjectPtr::Get(&local_res20);
        pUVar3[2].field_0x8 = 1;
        pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        pcVar8 = *(code **)(*(longlong *)pUVar3 + 0x4f0);
        pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        this_01 = (TVector<double> *)(**(code **)(*(longlong *)pUVar5 + 0x460))(pUVar5,&local_40);
        UE::Math::TVector<double>::ToOrientationRotator(this_01,&local_58);
        pTVar6 = &local_58;
      }
      else {
        pUVar3 = FWeakObjectPtr::Get(&local_res20);
        pUVar3[2].field_0x8 = 0;
        pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        pcVar8 = *(code **)(*(longlong *)pUVar3 + 0x4f0);
        this_02 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        pTVar6 = UDS_MovementCore::GetActorRotation(this_02,&local_40);
      }
      (*pcVar8)(pUVar3,pTVar6);
    }
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pcVar8 = *(code **)(*(longlong *)pUVar3 + 0x380);
    pUVar5 = FWeakObjectPtr::Get(&local_res20);
    (*pcVar8)(pUVar3,&pUVar5[2].field_0x10);
    pUVar3 = FWeakObjectPtr::Get(&local_res20);
    StartSkill(this,*(int *)(pUVar3 + 1));
  }
  return;
}

// OnTickComponent @ 14b7bced0

void __thiscall UDS_ActiveSkillAbility::OnTickComponent(UDS_ActiveSkillAbility *this,float param_1)

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

// RevokeStateTag @ 14b7c1f60

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

void __thiscall UDS_ActiveSkillAbility::RevokeStateTag(UDS_ActiveSkillAbility *this,int param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8;
  EDS_StateTagType local_res10 [8];
  
  local_res10[0] = Lock_Rotation;
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res10);
  UDS_SkillData::GetData((ulong64)&local_res8,this->_padding_,SUB41(param_1,0));
  bVar1 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&local_res8);
    UDS_GameplayAbility::RemoveStateTagToASC
              ((UDS_GameplayAbility *)this,(FGameplayTag *)&pUVar2[2].field_0x8);
  }
  return;
}

// RotationBeforeSkillStart @ 14b7c1fd0

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

void __thiscall UDS_ActiveSkillAbility::RotationBeforeSkillStart(UDS_ActiveSkillAbility *this)

{
  bool bVar1;
  FDS_SkillTableRow *pFVar2;
  UObject *pUVar3;
  UDS_CharStateData *this_00;
  ADS_MainCharacter *this_01;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  
  pFVar2 = FDS_SkillTableRow::Get((longlong)this->SkillID,true);
  if (pFVar2 != (FDS_SkillTableRow *)0x0) {
    UDS_CharStateData::GetData((ulong64)&local_res10);
    bVar1 = FWeakObjectPtr::IsValid(&local_res10);
    if ((bVar1) &&
       (pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_),
       pUVar3[6].field_0x11 == '\x01')) {
      this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
      local_res8.ObjectIndex = 0x13;
      bVar1 = UDS_CharStateData::HasCharDetailState(this_00,(EDS_CharDetailState *)&local_res8);
      if (!bVar1) {
        pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        UDS_RotateToTargetAbility::RotateByInput
                  ((FDS_EntityBase *)this->_padding_,(TVector2<double> *)(pUVar3 + 6));
        ADS_MainCharacter::GetMainPlayer();
        bVar1 = FWeakObjectPtr::IsValid(&local_res8);
        if (bVar1) {
          this_01 = (ADS_MainCharacter *)FWeakObjectPtr::Get(&local_res8);
          ADS_MainCharacter::GetCameraBoom(this_01);
          bVar1 = FWeakObjectPtr::IsValid(&local_res18);
          if (bVar1) {
            pUVar3 = FWeakObjectPtr::Get(&local_res18);
            (**(code **)(*(longlong *)pUVar3 + 0x410))(pUVar3,0,2,0);
          }
        }
      }
    }
  }
  return;
}

// SendCastSkill @ 14b7c2f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_ActiveSkillAbility::SendCastSkill(UDS_ActiveSkillAbility *this,int param_1)

{
  longlong *plVar1;
  longlong *this_00;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  UObject *pUVar7;
  UDS_LogManager *pUVar8;
  UDS_SendPacketManager *this_01;
  UDS_MovementCore *pUVar9;
  TVector<double> *pTVar10;
  FName *pFVar11;
  FWeakObjectPtr *this_02;
  UWN_AbilitySystemComponent *this_03;
  UDS_CharStateData *this_04;
  UDS_SkillData *this_05;
  FDS_SkillTableRow *pFVar12;
  FDS_GetTargetLocationResult *pFVar13;
  UDS_PlayerData *this_06;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  float fVar18;
  undefined1 auStackY_298 [32];
  EDS_StateTagType local_258 [8];
  FWeakObjectPtr local_250;
  FWeakObjectPtr local_248;
  FWeakObjectPtr local_240;
  FWeakObjectPtr local_238;
  FWeakObjectPtr local_230;
  FWeakObjectPtr local_228;
  undefined1 local_220 [32];
  float local_200;
  undefined4 uStack_1fc;
  FDS_GetTargetLocationResult local_1f8;
  FName local_1d0;
  TVector<double>_u_0 local_1c8;
  TVector<double>_u_0 local_1b0;
  undefined1 local_198 [48];
  longlong local_168;
  double local_160;
  double dStack_158;
  double local_150;
  float local_148;
  int local_144;
  double local_140;
  double dStack_138;
  double local_130;
  longlong local_128;
  double local_120;
  double dStack_118;
  double local_110;
  undefined4 local_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  void *local_98;
  wchar_t *local_90;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_298;
  if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
    plVar1 = &this->_padding_;
    UDS_PlayerData::GetData((ulong64)&local_238,*plVar1,false);
    bVar6 = FWeakObjectPtr::IsValid(&local_238);
    if (bVar6) {
      UDS_CharStateData::GetData((ulong64)&local_228);
      bVar6 = FWeakObjectPtr::IsValid(&local_228);
      if (bVar6) {
        this_00 = &this->_padding_;
        pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
        (**(code **)(*(longlong *)pUVar7 + 0x2d8))(pUVar7);
        UDS_SkillData::GetData((ulong64)&local_240,*plVar1,SUB41(param_1,0));
        bVar6 = FWeakObjectPtr::IsValid(&local_240);
        if (bVar6) {
          this_01 = UDS_SendPacketManager::GetInst();
          if (this_01 != (UDS_SendPacketManager *)0x0) {
            local_168 = 0;
            local_198._16_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            local_198._24_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            local_160 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            dStack_158 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            local_148 = 0.0;
            local_140 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            dStack_138 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            local_144 = -1;
            local_120 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            dStack_118 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            local_108 = 0;
            local_100 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            dStack_f8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            local_128 = 0;
            local_198._32_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            local_150 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            local_130 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            local_110 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            local_f0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            local_198._0_4_ = param_1;
            pUVar9 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
            pTVar10 = UDS_MovementCore::GetActorFootLocation(pUVar9,(TVector<double> *)local_220);
            local_198._16_8_ = (pTVar10->field0_0x0)._s_0.X;
            local_198._24_8_ = (pTVar10->field0_0x0)._s_0.Y;
            local_198._32_8_ = (pTVar10->field0_0x0)._s_0.Z;
            pUVar7 = FWeakObjectPtr::Get(&local_240);
            local_258[0] = Lock_Input;
            local_198._8_8_ = *(undefined8 *)&pUVar7[7].field_0x8;
            pFVar11 = &FDS_GameplayTags::GetStateTag(local_258)->TagName;
            local_1d0 = *pFVar11;
            this_02 = (FWeakObjectPtr *)
                      (**(code **)(*(longlong *)this->_padding_ + 0x178))
                                ((longlong *)this->_padding_,&local_248);
            this_03 = (UWN_AbilitySystemComponent *)FWeakObjectPtr::Get(this_02);
            UWN_AbilitySystemComponent::HasTag(this_03,(FGameplayTag *)&local_1d0);
            FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
            pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
            dVar5 = __real_4076800000000000;
            local_220._16_8_ = *(undefined8 *)&pUVar7[10].field_0x8;
            dVar4 = *(double *)&pUVar7[9].field_0x20;
            dVar3 = *(double *)(pUVar7 + 10);
            FGenericPlatformMath::Fmod((double)local_220._16_8_,__real_4076800000000000);
            dVar3 = FGenericPlatformMath::Fmod(dVar3,dVar5);
            if (dVar3 < 0.0) {
              dVar3 = dVar3 + dVar5;
            }
            FGenericPlatformMath::Fmod(dVar4,dVar5);
            local_198._40_4_ = (undefined4)dVar3;
            this_04 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_228);
            local_250.ObjectIndex = 0x13;
            bVar6 = UDS_CharStateData::HasCharDetailState(this_04,(EDS_CharDetailState *)&local_250)
            ;
            if (bVar6) {
              pUVar7 = FWeakObjectPtr::Get(&local_238);
              local_258[0] = AniCut_InputSkill;
              local_168 = *(longlong *)&pUVar7[9].field_0x8;
              UDS_AbilityDataSet::GetAbilityData<UDS_SkillModeAbilityData>
                        ((ulong64 *)&local_250,(EDS_AbilityTagType *)plVar1);
              bVar6 = FWeakObjectPtr::IsValid(&local_250);
              if (bVar6) {
                pUVar7 = FWeakObjectPtr::Get(&local_250);
                local_144 = *(int *)&pUVar7[3].field_0xc;
                pUVar7 = FWeakObjectPtr::Get(&local_250);
                local_160 = *(double *)&pUVar7[2].field_0x18;
                dStack_158 = *(double *)&pUVar7[2].field_0x20;
                local_150 = *(double *)(pUVar7 + 3);
                pUVar7 = FWeakObjectPtr::Get(&local_250);
                local_148 = *(float *)&pUVar7[3].field_0x8;
              }
            }
            else {
              this_05 = (UDS_SkillData *)FWeakObjectPtr::Get(&local_240);
              bVar6 = UDS_SkillData::IsTargeting(this_05);
              if (bVar6) {
                local_258[0] = Groggy_GetUp;
                UDS_AbilityDataSet::GetAbilityData<UDS_FindTargetAbilityData>
                          ((ulong64 *)&local_248,(EDS_AbilityTagType *)plVar1);
                bVar6 = TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr>::UEOpEquals
                                  ((TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr> *)
                                   &local_248,(void *)0x0);
                if ((!bVar6) &&
                   (pFVar12 = FDS_SkillTableRow::Get((longlong)param_1,true),
                   pFVar12 != (FDS_SkillTableRow *)0x0)) {
                  pUVar9 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
                  UDS_MovementCore::GetActorFootLocation(pUVar9,(TVector<double> *)&local_1c8._s_0);
                  local_250 = local_248;
                  local_220._8_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
                  local_220._16_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                  local_220._0_4_ = local_220._0_4_ & 0xffffff00;
                  local_220._24_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                  local_200 = 0.0;
                  bVar6 = TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr>::UEOpEquals
                                    ((TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr> *)
                                     &local_250,(void *)0x0);
                  if (bVar6) {
                    local_1f8._0_4_ = local_220._0_4_;
                    local_1f8.TargetLocation.field0_0x0._0_4_ = local_220._8_4_;
                    local_1f8.TargetLocation.field0_0x0._4_4_ = local_220._12_4_;
                    fVar18 = local_200;
                    local_1f8.TargetLocation.field0_0x0._s_0.Y = (double)local_220._16_8_;
                    local_1f8.TargetLocation.field0_0x0._s_0.Z = (double)local_220._24_8_;
                  }
                  else {
                    pUVar7 = FWeakObjectPtr::Get(&local_250);
                    pFVar13 = UDS_FindTargetAbility::GetTargetLocation
                                        ((FDS_GetTargetLocationResult *)local_220,
                                         (FDS_TargetInfo *)&pUVar7[2].field_0x8,true);
                    local_220._4_4_ = *(undefined4 *)&pFVar13->field_0x4;
                    uStack_1fc = (undefined4)
                                 ((ulonglong)*(undefined8 *)&pFVar13->TargetRadius >> 0x20);
                    local_1f8._0_4_ = *(uint *)pFVar13;
                    local_1f8.TargetLocation.field0_0x0._0_4_ =
                         *(undefined4 *)&(pFVar13->TargetLocation).field0_0x0;
                    local_1f8.TargetLocation.field0_0x0._4_4_ =
                         *(undefined4 *)((longlong)&(pFVar13->TargetLocation).field0_0x0 + 4);
                    fVar18 = (float)*(undefined8 *)&pFVar13->TargetRadius;
                    local_1f8.TargetLocation.field0_0x0._s_0.Y =
                         (pFVar13->TargetLocation).field0_0x0._s_0.Y;
                    local_1f8.TargetLocation.field0_0x0._s_0.Z =
                         (pFVar13->TargetLocation).field0_0x0._s_0.Z;
                  }
                  local_1f8._36_4_ = uStack_1fc;
                  local_1f8.TargetRadius = fVar18;
                  local_1f8._4_4_ = local_220._4_4_;
                  bVar6 = FDS_GetTargetLocationResult::IsValidData(&local_1f8);
                  if (bVar6) {
                    local_250.ObjectIndex =
                         (int)(float)((double)local_1f8.TargetRadius + pFVar12->TargetDistanceMax);
                    bVar6 = DS_Util::IsCloseDist
                                      ((TVector<double> *)&local_1c8._s_0,&local_1f8.TargetLocation,
                                       (float *)&local_250);
                    if (bVar6) {
                      local_1b0._s_0.X =
                           (double)CONCAT44(local_1f8.TargetLocation.field0_0x0._4_4_,
                                            local_1f8.TargetLocation.field0_0x0._0_4_) -
                           local_1c8._s_0.X;
                      local_1b0._s_0.Y =
                           local_1f8.TargetLocation.field0_0x0._s_0.Y - local_1c8._s_0.Y;
                      local_1b0._s_0.Z =
                           local_1f8.TargetLocation.field0_0x0._s_0.Z - local_1c8._s_0.Z;
                      UE::Math::TVector<double>::ToOrientationRotator
                                ((TVector<double> *)&local_1b0._s_0,(TRotator<double> *)local_220);
                      local_198._40_4_ = (undefined4)(double)local_220._8_8_;
                      pUVar7 = FWeakObjectPtr::Get(&local_248);
                      local_168 = *(longlong *)&pUVar7[2].field_0x10;
                      if (0 < *(int *)&pUVar7[2].field_0x18) {
                        local_160 = (double)CONCAT44(local_1f8.TargetLocation.field0_0x0._4_4_,
                                                     local_1f8.TargetLocation.field0_0x0._0_4_);
                        dStack_158 = local_1f8.TargetLocation.field0_0x0._s_0.Y;
                        local_148 = local_1f8.TargetRadius;
                        local_150 = local_1f8.TargetLocation.field0_0x0._s_0.Z;
                        local_144 = *(int *)&pUVar7[2].field_0x18;
                      }
                      this_06 = (UDS_PlayerData *)FWeakObjectPtr::Get(&local_238);
                      UDS_PlayerData::SetMainTargetEntityID
                                (this_06,*(ulong64 *)&pUVar7[2].field_0x10);
                    }
                  }
                }
              }
            }
            local_258[0] = HitAdditive_Left;
            UDS_AbilityDataSet::GetAbilityData<UDS_SkillMoveAbilityData>
                      ((ulong64 *)&local_230,(EDS_AbilityTagType *)plVar1);
            bVar6 = TWeakObjectPtr<UDS_SkillMoveAbilityData,FWeakObjectPtr>::UEOpEquals
                              ((TWeakObjectPtr<UDS_SkillMoveAbilityData,FWeakObjectPtr> *)&local_230
                               ,(void *)0x0);
            if (!bVar6) {
              pUVar7 = FWeakObjectPtr::Get(&local_230);
              dVar3 = *(double *)&pUVar7[7].field_0x10;
              uVar14 = *(uint *)(pUVar7 + 7);
              uVar16 = *(uint *)&pUVar7[7].field_0x4;
              dVar4 = *(double *)(pUVar7 + 7);
              uVar15 = *(uint *)&pUVar7[7].field_0x8;
              uVar17 = *(uint *)&pUVar7[7].field_0xc;
              dVar5 = *(double *)&pUVar7[7].field_0x8;
              local_220._16_8_ = dVar3;
              pUVar7 = FWeakObjectPtr::Get(&local_230);
              uVar14 = uVar14 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
              uVar16 = uVar16 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
              lVar2 = *(longlong *)&pUVar7[8].field_0x8;
              if ((((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar16,uVar14) &&
                     (double)CONCAT44(uVar16,uVar14) != __real_3f1a36e2e0000000) ||
                   (uVar15 = uVar15 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
                   uVar17 = uVar17 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                   __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar17,uVar15) &&
                   (double)CONCAT44(uVar17,uVar15) != __real_3f1a36e2e0000000)) ||
                  (uVar14 = (uint)local_220._16_8_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
                  uVar16 = SUB84(local_220._16_8_,4) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                  __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar16,uVar14) &&
                  (double)CONCAT44(uVar16,uVar14) != __real_3f1a36e2e0000000)) &&
                 (uVar14 = (uint)lVar2 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
                 uVar16 = (uint)((ulonglong)lVar2 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                 __real_3e45798ee2308c3a <= (double)CONCAT44(uVar16,uVar14) &&
                 (double)CONCAT44(uVar16,uVar14) != __real_3e45798ee2308c3a)) {
                local_140 = dVar4;
                dStack_138 = dVar5;
                local_130 = dVar3;
                local_128 = lVar2;
              }
            }
            UDS_SendPacketManager::SendPlayerSkillRequest(this_01,(FDS_SendSkillData *)local_198);
          }
          return true;
        }
        pUVar8 = UDS_LogManager::GetInst();
        if (pUVar8 != (UDS_LogManager *)0x0) {
          pUVar8 = UDS_LogManager::GetInst();
          local_98 = (void *)0x0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    ((TStringConversion<TStringConvert<char,wchar_t>,128> *)local_198,
                     "UDS_ActiveSkillAbility::SendCastSkill",0x25,Yes);
          UDS_LogManager::PrintLog
                    (pUVar8,1,Warning,local_90,0x121,L"skillData is Invalid. SkillID : %d");
          if (local_98 != (void *)0x0) {
            FMemory::Free(local_98);
          }
        }
      }
    }
  }
  return false;
}

// SetActiveSkillData @ 14b7c35a0

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

bool __thiscall UDS_ActiveSkillAbility::SetActiveSkillData(UDS_ActiveSkillAbility *this,int param_1)

{
  bool bVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_GameInstance *pUVar4;
  UDS_RotateToTargetAbilityData *this_00;
  UDS_AttackTargetAbilityData *this_01;
  UDS_SkillMoveAbilityData *pUVar5;
  UObject *pUVar6;
  longlong *plVar7;
  undefined1 auStackY_1c8 [32];
  uint uVar8;
  wchar_t *pwVar9;
  FWeakObjectPtr local_180;
  FWeakObjectPtr local_178;
  FWeakObjectPtr local_170;
  FWeakObjectPtr local_168;
  FWeakObjectPtr local_160;
  FWeakObjectPtr local_158 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  bVar2 = true;
  UDS_GameplayAbility::GetContextData<UDS_SkillAbilityContext>((UDS_GameplayAbility *)this);
  bVar1 = FWeakObjectPtr::IsValid(&local_170);
  if (bVar1) {
    plVar7 = &this->_padding_;
    UDS_SkillData::GetData((ulong64)&local_178,*plVar7,SUB41(param_1,0));
    bVar1 = FWeakObjectPtr::IsValid(&local_178);
    if (bVar1) {
      UDS_AbilityDataSet::GetAbilityData<UDS_FindTargetAbilityData>
                ((ulong64 *)local_158,(EDS_AbilityTagType *)plVar7);
      bVar1 = FWeakObjectPtr::IsValid(local_158);
      if (bVar1) {
        pUVar4 = UDS_GameInstance::GetInst();
        if (pUVar4->bUseNewRotateAbility == false) {
          UDS_AbilityDataSet::GetAbilityData<UDS_RotateToTargetAbilityData>
                    ((ulong64 *)&local_168,(EDS_AbilityTagType *)plVar7);
          bVar1 = FWeakObjectPtr::IsValid(&local_168);
          if (bVar1) {
            this_00 = (UDS_RotateToTargetAbilityData *)FWeakObjectPtr::Get(&local_168);
            bVar2 = UDS_RotateToTargetAbilityData::SetRotateToTargetDataBySkillData
                              (this_00,(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>)local_178);
          }
        }
        UDS_AbilityDataSet::GetAbilityData<UDS_AttackTargetAbilityData>
                  ((ulong64 *)&local_160,(EDS_AbilityTagType *)plVar7);
        bVar1 = FWeakObjectPtr::IsValid(&local_160);
        if ((bVar1) && (bVar2 == true)) {
          this_01 = (UDS_AttackTargetAbilityData *)FWeakObjectPtr::Get(&local_160);
          bVar2 = UDS_AttackTargetAbilityData::InitAttackTargetData
                            (this_01,(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>)local_178);
        }
        UDS_AbilityDataSet::GetAbilityData<UDS_SkillMoveAbilityData>
                  ((ulong64 *)&local_180,(EDS_AbilityTagType *)plVar7);
        bVar1 = FWeakObjectPtr::IsValid(&local_180);
        if (!bVar1) {
          return bVar2;
        }
        if (bVar2 != true) {
          return bVar2;
        }
        pUVar5 = (UDS_SkillMoveAbilityData *)FWeakObjectPtr::Get(&local_180);
        bVar1 = UDS_SkillMoveAbilityData::InitSkillMoveData
                          (pUVar5,(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>)local_178);
        pUVar6 = FWeakObjectPtr::Get(&local_170);
        if (pUVar6[4].field_0x14 == '\x01') {
          pUVar5 = (UDS_SkillMoveAbilityData *)FWeakObjectPtr::Get(&local_180);
          UDS_SkillMoveAbilityData::SetIsDirectCollision(pUVar5,true);
          pUVar5 = (UDS_SkillMoveAbilityData *)FWeakObjectPtr::Get(&local_180);
          pUVar6 = FWeakObjectPtr::Get(&local_170);
          UDS_SkillMoveAbilityData::SetIsCollision(pUVar5,(bool)pUVar6[4].field_0x14);
          pUVar5 = (UDS_SkillMoveAbilityData *)FWeakObjectPtr::Get(&local_180);
          pUVar6 = FWeakObjectPtr::Get(&local_170);
          UDS_SkillMoveAbilityData::SetChangedDestLocation(pUVar5,(TVector<double> *)(pUVar6 + 3));
          return bVar1;
        }
        return bVar1;
      }
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar3 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_ActiveSkillAbility::SetActiveSkillData",0x2a,Yes);
      pwVar9 = L"findTargetData is Invalid. EntityID : %d";
      uVar8 = 0xe0;
    }
    else {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar3 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_ActiveSkillAbility::SetActiveSkillData",0x2a,Yes);
      pwVar9 = L"skillData is Invalid. SkillID : %d";
      uVar8 = 0xd9;
    }
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,uVar8,pwVar9);
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
  }
  return false;
}

// ShouldTickComponent @ 14b7c4070

bool __thiscall UDS_ActiveSkillAbility::ShouldTickComponent(UDS_ActiveSkillAbility *this)

{
  return true;
}

// StartSkill @ 14b7c5340

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

void __thiscall UDS_ActiveSkillAbility::StartSkill(UDS_ActiveSkillAbility *this,int param_1)

{
  uint uVar1;
  int *piVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  UObject *pUVar8;
  UDS_GameInstance *pUVar9;
  FDS_SkillTableRow *pFVar10;
  UDS_CharStateData *this_00;
  ADS_MainCharacter *this_01;
  ulonglong uVar11;
  ForAnyElementType FVar12;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_58;
  FWeakObjectPtr local_50;
  ForAnyElementType local_48;
  undefined8 local_40;
  
  UDS_GameplayAbility::GetContextData<UDS_SkillAbilityContext>((UDS_GameplayAbility *)this);
  bVar5 = FWeakObjectPtr::IsValid(&local_res20);
  if (bVar5) {
    bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
    if (bVar5) {
      pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      (**(code **)(*(longlong *)pUVar8 + 0x2d8))(pUVar8,local_res20);
    }
    bVar5 = SetActiveSkillData(this,param_1);
    if (!bVar5) {
      local_res18.ObjectIndex = CONCAT31(local_res18.ObjectIndex._1_3_,2);
      UDS_GameplayAbility::DeactivateAbility
                ((UDS_GameplayAbility *)this,(EDS_AbilityDeactivateType *)&local_res18);
      return;
    }
    pUVar9 = UDS_GameInstance::GetInst();
    if ((pUVar9->bUseNewRotateAbility == false) &&
       (pFVar10 = FDS_SkillTableRow::Get((longlong)this->SkillID,true),
       pFVar10 != (FDS_SkillTableRow *)0x0)) {
      UDS_CharStateData::GetData((ulong64)&local_58);
      bVar5 = FWeakObjectPtr::IsValid(&local_58);
      if ((bVar5) &&
         (pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_),
         pUVar8[6].field_0x11 == '\x01')) {
        this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_58);
        local_res18.ObjectIndex = 0x13;
        bVar5 = UDS_CharStateData::HasCharDetailState(this_00,(EDS_CharDetailState *)&local_res18);
        if (!bVar5) {
          pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
          UDS_RotateToTargetAbility::RotateByInput
                    ((FDS_EntityBase *)this->_padding_,(TVector2<double> *)(pUVar8 + 6));
          ADS_MainCharacter::GetMainPlayer();
          bVar5 = FWeakObjectPtr::IsValid(&local_res18);
          if (bVar5) {
            this_01 = (ADS_MainCharacter *)FWeakObjectPtr::Get(&local_res18);
            ADS_MainCharacter::GetCameraBoom(this_01);
            bVar5 = FWeakObjectPtr::IsValid(&local_50);
            if (bVar5) {
              pUVar8 = FWeakObjectPtr::Get(&local_50);
              (**(code **)(*(longlong *)pUVar8 + 0x410))(pUVar8,0,2,0);
            }
          }
        }
      }
    }
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40 = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,4,&local_48,0,(int *)((longlong)&local_40 + 4));
    pUVar9 = UDS_GameInstance::GetInst();
    iVar6 = (int)local_40;
    if (pUVar9->bUseNewRotateAbility == false) {
      if ((int)local_40 == local_40._4_4_) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x101,&local_48,(int *)((longlong)&local_40 + 4));
      }
      local_48.Data[iVar6] = (FScriptContainerElement)0x1d;
    }
    else {
      if ((int)local_40 == local_40._4_4_) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x101,&local_48,(int *)((longlong)&local_40 + 4));
      }
      local_48.Data[iVar6] = (FScriptContainerElement)0x1e;
    }
    local_40._0_4_ = iVar6 + 1;
    if ((int)local_40 == local_40._4_4_) {
      local_40._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x101,&local_48,(int *)((longlong)&local_40 + 4));
    }
    iVar6 = (int)local_40 + 1;
    local_48.Data[(int)local_40] = (FScriptContainerElement)0x1f;
    if (iVar6 == local_40._4_4_) {
      local_40._0_4_ = iVar6;
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&local_48,(int *)((longlong)&local_40 + 4));
    }
    iVar7 = iVar6 + 1;
    local_48.Data[iVar6] = (FScriptContainerElement)0x20;
    if (iVar7 == local_40._4_4_) {
      local_40._0_4_ = iVar7;
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&local_48,(int *)((longlong)&local_40 + 4));
    }
    uVar1 = iVar7 + 1;
    local_40 = CONCAT44(local_40._4_4_,uVar1);
    plVar3 = &this->_padding_;
    local_48.Data[iVar7] = (FScriptContainerElement)0x21;
    uVar11 = (ulonglong)uVar1;
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar11);
    }
    piVar2 = (int *)((longlong)&this->_padding_ + 4);
    if (*piVar2 < (int)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar1,(ForAnyElementType *)plVar3,(int)this->_padding_,piVar2);
      uVar11 = local_40 & 0xffffffff;
    }
    iVar6 = (int)uVar11;
    pFVar4 = local_48.Data + iVar6;
    FVar12.Data = local_48.Data;
    while( true ) {
      if ((int)uVar11 != iVar6) {
        `TCheckedPointerIterator<enum_EDS_AbilityTagType,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res18);
      }
      if (FVar12.Data == pFVar4) break;
      local_58 = (FWeakObjectPtr)FWeakObjectPtr::Get(&local_res20);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_58 != (FWeakObjectPtr)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)local_58);
      }
      UDS_GameplayAbility::TryActivateAbility
                ((UDS_GameplayAbility *)this,(EDS_AbilityTagType *)FVar12.Data,
                 (TObjectPtr<UWN_AbilityContext>)&local_58);
      UDS_GameplayAbility::GetAbility((UDS_GameplayAbility *)this,(EDS_AbilityTagType *)&local_50);
      bVar5 = TWeakObjectPtr<UDS_GameplayAbility,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_GameplayAbility,FWeakObjectPtr> *)&local_50,(void *)0x0
                        );
      if (!bVar5) {
        iVar7 = (int)this->_padding_;
        if (iVar7 == *piVar2) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,(ForAnyElementType *)plVar3,piVar2);
        }
        *(int *)&this->_padding_ = iVar7 + 1;
        *(FWeakObjectPtr *)(*plVar3 + (longlong)iVar7 * 8) = local_50;
      }
      uVar11 = local_40 & 0xffffffff;
      FVar12.Data = FVar12.Data + 1;
    }
    SendCastSkill(this,param_1);
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
  }
  return;
}

