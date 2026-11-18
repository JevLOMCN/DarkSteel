// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 14

// StaticClass @ 14b5c2f10

UClass * __cdecl UDS_TraceAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_TraceAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_TraceAbility",
               &Z_Registration_Info_UClass_UDS_TraceAbility.InnerSingleton,
               StaticRegisterNativesUDS_TraceAbility,0x158,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_TraceAbility>,
               InternalVTableHelperCtorCaller<UDS_TraceAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_TraceAbility.InnerSingleton;
}

// UDS_TraceAbility @ 14b5c7490

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

UDS_TraceAbility * __thiscall
UDS_TraceAbility::UDS_TraceAbility(UDS_TraceAbility *this,FVTableHelper *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// ~UDS_TraceAbility @ 14b5c8d00

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

void __thiscall UDS_TraceAbility::~UDS_TraceAbility(UDS_TraceAbility *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b5cc260

UClass * __cdecl UDS_TraceAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_TraceAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_TraceAbility",
               &Z_Registration_Info_UClass_UDS_TraceAbility.InnerSingleton,
               StaticRegisterNativesUDS_TraceAbility,0x158,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_TraceAbility>,
               InternalVTableHelperCtorCaller<UDS_TraceAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_TraceAbility.InnerSingleton;
}

// ShouldNotifyChangedCharState @ 14b5cded0

bool __thiscall UDS_TraceAbility::ShouldNotifyChangedCharState(UDS_TraceAbility *this)

{
  return true;
}

// StaticRegisterNativesUDS_TraceAbility @ 14b5ce030

void __cdecl UDS_TraceAbility::StaticRegisterNativesUDS_TraceAbility(void)

{
  return;
}

// UDS_TraceAbility @ 14b8654e0

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

UDS_TraceAbility * __thiscall
UDS_TraceAbility::UDS_TraceAbility(UDS_TraceAbility *this,FObjectInitializer *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// InitOtherAbilityEventSubscriptions @ 14b87ab70

void __thiscall UDS_TraceAbility::InitOtherAbilityEventSubscriptions(UDS_TraceAbility *this)

{
  FGameplayTag *pFVar1;
  EDS_AbilityTagType local_res8 [32];
  
  local_res8[0] = MoveToTarget;
  pFVar1 = FDS_GameplayTags::GetAbilityTag(local_res8);
  FGameplayTagContainer::AddTag((FGameplayTagContainer *)&this->field_0x118,pFVar1);
  return;
}

// OnCanActivate @ 14b884920

bool __thiscall UDS_TraceAbility::OnCanActivate(UDS_TraceAbility *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res18 [2];
  
  bVar1 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  if (bVar1) {
    UDS_AbilityDataSet::GetAbilityData<UDS_TraceAbilityData>
              ((ulong64 *)local_res18,&this->field_0xe0);
    bVar1 = FWeakObjectPtr::IsValid(local_res18);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0xd8);
      return pUVar2[6].field_0x11 != '\x01';
    }
  }
  return false;
}

// OnChangedActiveInput @ 14b8850a0

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

void __thiscall UDS_TraceAbility::OnChangedActiveInput(UDS_TraceAbility *this,bool param_1)

{
  EDS_AbilityDeactivateType local_res10 [24];
  
  if (param_1) {
    local_res10[0] = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res10);
  }
  return;
}

// OnChangedCharState @ 14b8866a0

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
UDS_TraceAbility::OnChangedCharState
          (UDS_TraceAbility *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
          FDS_ChangedCharStateInfo *param_2)

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
  bVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar1) {
    this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
    local_res18[0] = AirWalk|Avoid;
    bVar1 = UDS_CharStateData::HasCharState(this_00,local_res18);
    if (bVar1) {
      local_res18[0] = CONCAT71(local_res18[0]._1_7_,2);
      UDS_GameplayAbility::DeactivateAbility
                ((UDS_GameplayAbility *)this,(EDS_AbilityDeactivateType *)local_res18);
    }
  }
  return;
}

// OnDeactivateAbility @ 14b888be0

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

void __thiscall UDS_TraceAbility::OnDeactivateAbility(UDS_TraceAbility *this,bool *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  longlong *plVar5;
  undefined1 auStack_d8 [32];
  EDS_AbilityTagType local_b8 [8];
  FWeakObjectPtr local_b0;
  UObject *local_a8 [2];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_b8[0] = SwimSurfaceSprint;
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_b8);
  local_b8[0] = FindTarget;
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_b8,&this->field_0x138);
  local_b8[0] = MoveToPoint;
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_b8,&this->field_0x138);
  local_b8[0] = MoveToTarget;
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_b8,&this->field_0x138);
  local_b8[0] = RotateToTarget;
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_b8,&this->field_0x138);
  local_b8[0] = SkillRotate;
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_b8,&this->field_0x138);
  if (*param_1 == true) {
    local_b8[0] = Trace;
    UDS_AbilityDataSet::GetAbilityData<UDS_TraceAbilityData>((ulong64 *)&local_b0,&this->field_0xe0)
    ;
    bVar1 = FWeakObjectPtr::IsValid(&local_b0);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get(&local_b0);
      if (pUVar2[2].field_0x19 != '\0') {
        pUVar4 = (UObject *)0x0;
        pUVar2 = FWeakObjectPtr::Get(&local_b0);
        if (pUVar2[2].field_0x1a == '\x01') {
          FObjectInitializer::AssertIfInConstructor
                    ((UObject *)this,
                     L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                    );
          pUVar3 = Z_Construct_UClass_UDS_SkillAbilityContext_NoRegister();
          FStaticConstructObjectParameters::FStaticConstructObjectParameters
                    ((FStaticConstructObjectParameters *)local_98,pUVar3);
          local_98._8_8_ = this;
          pUVar4 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
          if (local_98._64_8_ != 0) {
            plVar5 = (longlong *)(local_98 + 0x50);
            if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
              plVar5 = (longlong *)local_98._104_8_;
            }
            (**(code **)(*plVar5 + 0x10))();
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar4);
          }
          pUVar2 = FWeakObjectPtr::Get(&local_b0);
          *(undefined4 *)(pUVar4 + 1) = *(undefined4 *)&pUVar2[2].field_0x8;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar4);
          }
        }
        local_a8[0] = pUVar4;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar4);
        }
        pUVar2 = FWeakObjectPtr::Get(&local_b0);
        UDS_GameplayAbility::TryActivateAbility
                  ((UDS_GameplayAbility *)this,&pUVar2[2].field_0x19,
                   (TObjectPtr<UWN_AbilityContext>)local_a8);
      }
    }
  }
  return;
}

// OnDeactivatedOtherAbility @ 14b8890e0

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
UDS_TraceAbility::OnDeactivatedOtherAbility
          (UDS_TraceAbility *this,FGameplayTag *param_1,bool *param_2)

{
  FName *pFVar1;
  EDS_AbilityDeactivateType local_res20 [8];
  
  local_res20[0] = Cancel;
  pFVar1 = &FDS_GameplayTags::GetAbilityTag(local_res20)->TagName;
  if (((*pFVar1 != (FName)0x0) && (param_1->TagName == *pFVar1)) && (*param_2 == true)) {
    local_res20[0] = Success;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res20);
  }
  return;
}

// OnPostActivateAbility @ 14b88cb90

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

void __thiscall UDS_TraceAbility::OnPostActivateAbility(UDS_TraceAbility *this)

{
  EDS_AbilityDeactivateType local_res10 [8];
  EDS_AbilityTagType local_res18 [16];
  
  local_res10[0] = Cancel;
  local_res18[0] = 0x17;
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res18,local_res10);
  local_res10[0] = 7;
  UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_res10);
  local_res18[0] = None;
  local_res18[1] = None;
  local_res18[2] = None;
  local_res18[3] = None;
  local_res18[4] = None;
  local_res18[5] = None;
  local_res18[6] = None;
  local_res18[7] = None;
  local_res10[0] = Cancel;
  UDS_GameplayAbility::TryActivateAbility
            ((UDS_GameplayAbility *)this,local_res10,(TObjectPtr<UWN_AbilityContext>)local_res18);
  return;
}

