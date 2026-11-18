// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 18

// StaticClass @ 14b420a40

UClass * __cdecl UDS_AttackTargetAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AttackTargetAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AttackTargetAbility",
               &Z_Registration_Info_UClass_UDS_AttackTargetAbility.InnerSingleton,
               StaticRegisterNativesUDS_AttackTargetAbility,0x170,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_AttackTargetAbility>,
               InternalVTableHelperCtorCaller<UDS_AttackTargetAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AttackTargetAbility.InnerSingleton;
}

// UDS_AttackTargetAbility @ 14b423b80

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

UDS_AttackTargetAbility * __thiscall
UDS_AttackTargetAbility::UDS_AttackTargetAbility
          (UDS_AttackTargetAbility *this,FVTableHelper *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->ElapsedTime = 0.0;
  this->PrevImpactTime = 0.0;
  this->ImpactInfoStep = 0;
  this->EndCutProcessed = false;
  this->InputMoveProcessed = false;
  (this->AttackTargetDataPtr).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UDS_AttackTargetAbility @ 14b423fb0

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

void __thiscall UDS_AttackTargetAbility::~UDS_AttackTargetAbility(UDS_AttackTargetAbility *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b424e70

UClass * __cdecl UDS_AttackTargetAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AttackTargetAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AttackTargetAbility",
               &Z_Registration_Info_UClass_UDS_AttackTargetAbility.InnerSingleton,
               StaticRegisterNativesUDS_AttackTargetAbility,0x170,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_AttackTargetAbility>,
               InternalVTableHelperCtorCaller<UDS_AttackTargetAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AttackTargetAbility.InnerSingleton;
}

// ShouldTickComponent @ 14b425400

bool __thiscall UDS_AttackTargetAbility::ShouldTickComponent(UDS_AttackTargetAbility *this)

{
  return false;
}

// StaticRegisterNativesUDS_AttackTargetAbility @ 14b425550

void __cdecl UDS_AttackTargetAbility::StaticRegisterNativesUDS_AttackTargetAbility(void)

{
  return;
}

// UDS_AttackTargetAbility @ 14b79b610

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

UDS_AttackTargetAbility * __thiscall
UDS_AttackTargetAbility::UDS_AttackTargetAbility
          (UDS_AttackTargetAbility *this,FObjectInitializer *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->ElapsedTime = 0.0;
  this->PrevImpactTime = 0.0;
  this->ImpactInfoStep = 0;
  this->EndCutProcessed = false;
  this->InputMoveProcessed = false;
  (this->AttackTargetDataPtr).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ClearVariables @ 14b7a0090

void __thiscall UDS_AttackTargetAbility::ClearVariables(UDS_AttackTargetAbility *this)

{
  (this->AttackTargetDataPtr).WeakPtr = (FWeakObjectPtr)0x0;
  this->ElapsedTime = 0.0;
  this->PrevImpactTime = 0.0;
  this->ImpactInfoStep = 0;
  return;
}

// ExecuteImpact @ 14b7a8840

void __thiscall
UDS_AttackTargetAbility::ExecuteImpact
          (UDS_AttackTargetAbility *this,FDS_AtomicImpactInfo *param_1,int param_2)

{
  UDS_ProjectileManager *this_00;
  
  this_00 = UDS_ProjectileManager::GetInst();
  if (this_00 != (UDS_ProjectileManager *)0x0) {
    UDS_ProjectileManager::ImpactProjectile
              (this_00,(ulong64 *)&this->_padding_,&param_1->SkillAttackID);
  }
  return;
}

// GetSearchTypeList @ 14b7ace40

void __thiscall
UDS_AttackTargetAbility::GetSearchTypeList
          (UDS_AttackTargetAbility *this,EDS_EntityType param_1,
          TArray<TEnumAsByte<EObjectTypeQuery>,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  FScriptContainerElement local_18;
  FScriptContainerElement local_17;
  FScriptContainerElement local_16;
  FScriptContainerElement local_15;
  FScriptContainerElement local_14;
  FScriptContainerElement local_13;
  FScriptContainerElement local_12 [10];
  
  if (param_1 == MainCharacter) {
    pFVar1 = (param_2->AllocatorInstance).Data;
    local_18 = (FScriptContainerElement)0x8;
    if (((pFVar1 <= &local_18) && (&local_18 < pFVar1 + param_2->ArrayMax)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = param_2->ArrayNum;
    if (iVar4 == param_2->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar4 + 1;
    local_17 = (FScriptContainerElement)0x7;
    (param_2->AllocatorInstance).Data[iVar4] = local_18;
    pFVar1 = (param_2->AllocatorInstance).Data;
    if (((pFVar1 <= &local_17) && (&local_17 < pFVar1 + param_2->ArrayMax)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = param_2->ArrayNum;
    if (iVar4 == param_2->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    iVar5 = iVar4 + 1;
    lVar6 = (longlong)iVar4;
  }
  else if (param_1 == NetCharacter) {
    pFVar1 = (param_2->AllocatorInstance).Data;
    local_16 = (FScriptContainerElement)0x6;
    if (((pFVar1 <= &local_16) && (&local_16 < pFVar1 + param_2->ArrayMax)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = param_2->ArrayNum;
    if (iVar4 == param_2->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar4 + 1;
    local_15 = (FScriptContainerElement)0x8;
    (param_2->AllocatorInstance).Data[iVar4] = local_16;
    pFVar1 = (param_2->AllocatorInstance).Data;
    if (((pFVar1 <= &local_15) && (&local_15 < pFVar1 + param_2->ArrayMax)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = param_2->ArrayNum;
    if (iVar4 == param_2->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar4 + 1;
    local_14 = (FScriptContainerElement)0x7;
    (param_2->AllocatorInstance).Data[iVar4] = local_15;
    pFVar1 = (param_2->AllocatorInstance).Data;
    if (((pFVar1 <= &local_14) && (&local_14 < pFVar1 + param_2->ArrayMax)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = param_2->ArrayNum;
    if (iVar4 == param_2->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    iVar5 = iVar4 + 1;
    lVar6 = (longlong)iVar4;
    local_17 = local_14;
  }
  else {
    if (param_1 != NPC) {
      return;
    }
    pFVar1 = (param_2->AllocatorInstance).Data;
    local_13 = (FScriptContainerElement)0x6;
    if (((pFVar1 <= &local_13) && (&local_13 < pFVar1 + param_2->ArrayMax)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = param_2->ArrayNum;
    if (iVar4 == param_2->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar4 + 1;
    local_12[0] = (FScriptContainerElement)0x8;
    (param_2->AllocatorInstance).Data[iVar4] = local_13;
    pFVar1 = (param_2->AllocatorInstance).Data;
    if (((pFVar1 <= local_12) && (local_12 < pFVar1 + param_2->ArrayMax)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = param_2->ArrayNum;
    if (iVar4 == param_2->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    iVar5 = iVar4 + 1;
    lVar6 = (longlong)iVar4;
    local_17 = local_12[0];
  }
  param_2->ArrayNum = iVar5;
  (param_2->AllocatorInstance).Data[lVar6] = local_17;
  return;
}

// NextImpact @ 14b7b3680

void __thiscall UDS_AttackTargetAbility::NextImpact(UDS_AttackTargetAbility *this)

{
  this->ImpactInfoStep = this->ImpactInfoStep + 1;
  this->PrevImpactTime = 0.0;
  return;
}

// OnCanActivate @ 14b7b5cf0

bool __thiscall UDS_AttackTargetAbility::OnCanActivate(UDS_AttackTargetAbility *this)

{
  bool bVar1;
  TWeakObjectPtr<UDS_AttackTargetAbilityData,FWeakObjectPtr> TVar2;
  ulong64 local_res18 [2];
  
  bVar1 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  if (!bVar1) {
    return false;
  }
  bVar1 = FWeakObjectPtr::IsValid(&(this->AttackTargetDataPtr).WeakPtr);
  if (!bVar1) {
    TVar2 = UDS_AbilityDataSet::GetAbilityData<UDS_AttackTargetAbilityData>
                      (local_res18,(EDS_AbilityTagType *)&this->_padding_);
                    /* WARNING: Load size is inaccurate */
    (this->AttackTargetDataPtr).WeakPtr = *TVar2.WeakPtr;
  }
  bVar1 = FWeakObjectPtr::IsValid(&(this->AttackTargetDataPtr).WeakPtr);
  return bVar1;
}

// OnDeactivateAbility @ 14b7b81b0

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
UDS_AttackTargetAbility::OnDeactivateAbility(UDS_AttackTargetAbility *this,bool *param_1)

{
  UDS_ProjectileManager *this_00;
  EDS_StateTagType local_res8 [32];
  
  this_00 = UDS_ProjectileManager::GetInst();
  if (this_00 != (UDS_ProjectileManager *)0x0) {
    UDS_ProjectileManager::RemoveProjectileSkillInfo(this_00,(ulong64 *)&this->_padding_);
  }
  if (this->EndCutProcessed == true) {
    local_res8[0] = AniCut_InputSkill;
    UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res8);
    this->EndCutProcessed = false;
  }
  if (this->InputMoveProcessed == true) {
    local_res8[0] = AniCut_InputMove;
    UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res8);
    this->InputMoveProcessed = false;
  }
  return;
}

// OnPostActivateAbility @ 14b7bb3f0

void __thiscall UDS_AttackTargetAbility::OnPostActivateAbility(UDS_AttackTargetAbility *this)

{
  UDS_ProjectileManager *this_00;
  
  this_00 = UDS_ProjectileManager::GetInst();
  if (this_00 != (UDS_ProjectileManager *)0x0) {
    UDS_ProjectileManager::AddProjectileSkillInfo
              (this_00,(ulong64 *)&this->_padding_,
               (TWeakObjectPtr<UDS_AttackTargetAbilityData,FWeakObjectPtr>)
               (this->AttackTargetDataPtr).WeakPtr);
    return;
  }
  return;
}

// OnTickComponent @ 14b7bd990

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
UDS_AttackTargetAbility::OnTickComponent(UDS_AttackTargetAbility *this,float param_1)

{
  TWeakObjectPtr<UDS_AttackTargetAbilityData,FWeakObjectPtr> *this_00;
  float fVar1;
  int iVar2;
  bool bVar3;
  UObject *pUVar4;
  UDS_LogManager *pUVar5;
  UDS_SkillDataSet *pUVar6;
  UDS_PlayerData *this_01;
  undefined1 auStackY_1c8 [32];
  EDS_AbilityDeactivateType local_188 [8];
  FWeakObjectPtr local_180;
  FWeakObjectPtr local_178 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  UDS_GameplayAbility::OnTickComponent((UDS_GameplayAbility *)this,param_1);
  this_00 = &this->AttackTargetDataPtr;
  this->ElapsedTime = param_1 + this->ElapsedTime;
  bVar3 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar3) {
    FWeakObjectPtr::Get(&this_00->WeakPtr);
    UDS_TimeUtilManager::GetCurrentServerTime();
    fVar1 = this->ElapsedTime;
    FWeakObjectPtr::Get(&this_00->WeakPtr);
    UDS_TimeUtilManager::GetCurrentServerTime();
    FWeakObjectPtr::Get(&this_00->WeakPtr);
    FWeakObjectPtr::Get(&this_00->WeakPtr);
    pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    if (fVar1 < *(float *)&pUVar4[2].field_0x20) {
      pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      if ((fVar1 < *(float *)&pUVar4[2].field_0x24) || (this->EndCutProcessed != false)) {
        pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        if ((fVar1 < *(float *)(pUVar4 + 3)) || (this->InputMoveProcessed != false)) {
          UpdateImpact(this,param_1);
        }
        else {
          this->InputMoveProcessed = true;
          local_188[0] = 0x19;
          UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_188);
          pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
          if (pUVar4[6].field_0x11 == '\x01') {
            UDS_PlayerData::GetData((ulong64)&local_180,this->_padding_,false);
            bVar3 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                              ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_180,
                               (void *)0x0);
            if (!bVar3) {
              this_01 = (UDS_PlayerData *)FWeakObjectPtr::Get(&local_180);
              UDS_PlayerData::SetMainTargetEntityID(this_01,0);
            }
            TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)local_178);
            bVar3 = TWeakObjectPtr<UDS_SkillDataSet,FWeakObjectPtr>::UEOpEquals
                              ((TWeakObjectPtr<UDS_SkillDataSet,FWeakObjectPtr> *)local_178,
                               (void *)0x0);
            if (!bVar3) {
              pUVar6 = (UDS_SkillDataSet *)FWeakObjectPtr::Get(local_178);
              UDS_SkillDataSet::ClearReservedSkill(pUVar6);
            }
          }
        }
      }
      else {
        this->EndCutProcessed = true;
        local_188[0] = 0x18;
        UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_188);
        TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)&local_180);
        bVar3 = TWeakObjectPtr<UDS_SkillDataSet,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_SkillDataSet,FWeakObjectPtr> *)&local_180,(void *)0x0
                          );
        if (!bVar3) {
          pUVar4 = FWeakObjectPtr::Get(&local_180);
          iVar2 = *(int *)&pUVar4[0xc].field_0x4;
          if (iVar2 < 1) {
            pUVar4 = FWeakObjectPtr::Get(&local_180);
            if (pUVar4[0xc].field_0x8 == '\x01') {
              pUVar5 = UDS_LogManager::GetInst();
              if (pUVar5 != (UDS_LogManager *)0x0) {
                pUVar5 = UDS_LogManager::GetInst();
                FWeakObjectPtr::Get(&this_00->WeakPtr);
                local_168._padding_ = 0;
                TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                          (&local_168,"UDS_AttackTargetAbility::OnTickComponent",0x28,Yes);
                UDS_LogManager::PrintLog
                          (pUVar5,1,Display,local_168.Ptr,0x9f,
                           L"NormalAttack ServerElapsedTime %f AniCutTime %f");
                if ((void *)local_168._padding_ != (void *)0x0) {
                  FMemory::Free((void *)local_168._padding_);
                }
              }
              pUVar6 = (UDS_SkillDataSet *)FWeakObjectPtr::Get(&local_180);
              UDS_SkillDataSet::ClearReservedSkill(pUVar6);
              local_178[0].ObjectIndex = 0;
              local_178[0].ObjectSerialNumber = 0;
              local_188[0] = 0xe;
              FDS_EntityBase::TryActivateAbility
                        ((FDS_EntityBase *)this->_padding_,local_188,
                         (TObjectPtr<UWN_AbilityContext>)local_178);
            }
          }
          else {
            pUVar5 = UDS_LogManager::GetInst();
            if (pUVar5 != (UDS_LogManager *)0x0) {
              pUVar5 = UDS_LogManager::GetInst();
              FWeakObjectPtr::Get(&this_00->WeakPtr);
              local_168._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_168,"UDS_AttackTargetAbility::OnTickComponent",0x28,Yes);
              UDS_LogManager::PrintLog
                        (pUVar5,1,Display,local_168.Ptr,0x98,
                         L"ReservedSkill ServerElapsedTime %f AniCutTime %f");
              if ((void *)local_168._padding_ != (void *)0x0) {
                FMemory::Free((void *)local_168._padding_);
              }
            }
            pUVar6 = (UDS_SkillDataSet *)FWeakObjectPtr::Get(&local_180);
            UDS_SkillDataSet::ClearReservedSkill(pUVar6);
            FDS_EntityBase::TryActivateSkillAbility((FDS_EntityBase *)this->_padding_,iVar2);
          }
        }
      }
    }
    else {
      local_188[0] = Success;
      UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_188);
    }
  }
  else {
    local_188[0] = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_188);
  }
  return;
}

// SearchTargetInCircle @ 14b7c20f0

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
UDS_AttackTargetAbility::SearchTargetInCircle
          (UDS_AttackTargetAbility *this,FDS_AtomicImpactInfo *param_1,FDS_EntityBase *param_2,
          FDS_EntityBase *param_3,TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  float fVar8;
  FLinearColor FVar9;
  FLinearColor FVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  UObject *pUVar14;
  TVector<double>_u_0 *pTVar15;
  UDS_MovementCore *pUVar16;
  TVector<double> *pTVar17;
  TVector<double> *pTVar18;
  AActor *pAVar19;
  UWorld *pUVar20;
  ulonglong uVar21;
  FWeakObjectPtr *this_00;
  FDS_EntityBase *pFVar22;
  ForAnyElementType FVar23;
  longlong lVar24;
  FScriptContainerElement *pFVar25;
  float fVar26;
  UObject *local_res10;
  FWeakObjectPtr local_res18 [2];
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_238;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_228;
  TArray<FHitResult,TSizedDefaultAllocator<32>_> local_218;
  FLinearColor_u_0 local_208;
  TVector<double>_u_0 local_1f8;
  FLinearColor_u_0 local_1d8;
  TArray<TEnumAsByte<EObjectTypeQuery>,TSizedDefaultAllocator<32>_> local_1c8;
  TVector<double>_u_0 local_1b8;
  FWeakObjectPtr local_198 [2];
  TVector<double>_u_0 local_188;
  TRotator<double> local_168;
  TRotator<double> local_150;
  TVector<double>_u_0 local_138;
  TVector<double>_u_0 local_118;
  TVector<double> local_100 [8];
  
  iVar2 = param_1->AttackAngle;
  iVar12 = param_1->AttackDistanceMin;
  local_228.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_228.ArrayNum = 0;
  local_228.ArrayMax = 0;
  local_238.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_238.ArrayNum = 0;
  local_238.ArrayMax = 0;
  iVar3 = param_1->AttackDistanceMax;
  fVar26 = (float)((double)param_1->AttackHeight * __real_3fe0000000000000);
  if (((param_1->ImpactType == TargetCircle) && (param_3 != (FDS_EntityBase *)0x0)) ||
     (param_3 = param_2, param_2 != (FDS_EntityBase *)0x0)) {
    UDS_MovementCore::GetMovementCore((ulong64)local_198);
    bVar11 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                       ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)local_198,(void *)0x0);
    if (!bVar11) {
      (**(code **)(param_2->_padding_ + 0x150))(param_2,local_res18);
      bVar11 = FWeakObjectPtr::IsValid(local_res18);
      if (bVar11) {
        local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1c8.ArrayNum = 0;
        local_1c8.ArrayMax = 0;
        GetSearchTypeList(this,param_3->EntityType,&local_1c8);
        pUVar14 = FWeakObjectPtr::Get(local_res18);
        if (*(USceneComponent **)(pUVar14 + 0xb) == (USceneComponent *)0x0) {
          pTVar15 = &local_1f8;
          local_1f8._s_0.X = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
          local_1f8._s_0.Y = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
          local_1f8._s_0.Z = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
        }
        else {
          pTVar15 = &USceneComponent::GetForwardVector
                               (*(USceneComponent **)(pUVar14 + 0xb),
                                (TVector<double> *)&local_188._s_0)->field0_0x0;
        }
        local_118._s_0.X = (((TVector<double>_u_0 *)&(pTVar15->_s_0).X)->_s_0).X;
        local_118._s_0.Y = (pTVar15->_s_0).Y;
        local_118._s_0.Z = (pTVar15->_s_0).Z;
        UE::Math::TVector<double>::ToOrientationRotator
                  ((TVector<double> *)&local_118._s_0,&local_150);
        local_168.Pitch = local_150.Pitch;
        local_168.Yaw = (double)param_1->RotationOffset + local_150.Yaw;
        local_168.Roll = local_150.Roll;
        pUVar16 = (UDS_MovementCore *)FWeakObjectPtr::Get(local_198);
        pTVar17 = UDS_MovementCore::GetActorFootLocation(pUVar16,(TVector<double> *)&local_188._s_0)
        ;
        pTVar18 = UE::Math::TRotator<double>::RotateVector
                            (&local_168,(TVector<double> *)&local_138._s_0,&param_1->LocationOffset)
        ;
        FVar10 = FLinearColor::Green;
        FVar9 = FLinearColor::Red;
        fVar8 = __real_40a00000;
        dVar6 = (pTVar18->field0_0x0)._s_0.Y + (pTVar17->field0_0x0)._s_0.Y;
        dVar4 = (pTVar18->field0_0x0)._s_0.Z + (pTVar17->field0_0x0)._s_0.Z;
        dVar5 = (pTVar17->field0_0x0)._s_0.X + (pTVar18->field0_0x0)._s_0.X;
        local_218.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_218.ArrayNum = 0;
        local_218.ArrayMax = 0;
        if (0.0 < (float)iVar12) {
          pAVar19 = (AActor *)FWeakObjectPtr::Get(local_res18);
          pUVar20 = AActor::GetWorld(pAVar19);
          local_208 = FVar10.field0_0x0;
          local_1d8 = FVar9.field0_0x0;
          local_1f8._s_0.X = dVar5;
          local_1f8._s_0.Y = dVar6;
          local_1f8._s_0.Z = dVar4;
          local_1b8._s_0.X = dVar5;
          local_1b8._s_0.Y = dVar6;
          local_1b8._s_0.Z = dVar4;
          bVar11 = UKismetSystemLibrary::CapsuleTraceMultiForObjects
                             ((UObject *)pUVar20,(TVector<double> *)&local_1f8._s_0,
                              (TVector<double> *)&local_1b8._s_0,(float)iVar12,fVar26,&local_1c8,
                              false,&local_228,None,&local_218,true,(FLinearColor *)&local_1d8._s_0,
                              (FLinearColor *)&local_208._s_0,fVar8);
          if (bVar11) {
            iVar12 = local_218.ArrayNum;
            uVar21 = (ulonglong)local_218.ArrayNum;
            pFVar25 = local_218.AllocatorInstance.Data + uVar21 * 0x100;
            FVar23.Data = local_218.AllocatorInstance.Data;
            while( true ) {
              if ((int)uVar21 != iVar12) {
                `TCheckedPointerIterator<FHitResult,int,0>::operator!='::__l2::<lambda_1>::
                operator()(&local_res10);
              }
              if (FVar23.Data == pFVar25) break;
              pAVar19 = FActorInstanceHandle::FetchActor
                                  ((FActorInstanceHandle *)(FVar23.Data + 0xb8));
              local_208._0_8_ = pAVar19;
              TArray<AActor_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<AActor_*>
                        (&local_238,(AActor **)&local_208);
              uVar21 = local_218._8_8_ & 0xffffffff;
              FVar23.Data = FVar23.Data + 0x100;
            }
          }
          FVar23.Data = local_238.AllocatorInstance.Data;
          iVar12 = local_238.ArrayNum;
          lVar24 = (longlong)local_238.ArrayNum;
          local_228.ArrayNum = local_238.ArrayNum;
          if ((local_238.ArrayNum == 0) && (local_228.ArrayMax == 0)) {
            local_228._8_8_ = local_238._8_8_ & 0xffffffff;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,local_238.ArrayNum,local_228.ArrayMax,&local_228.AllocatorInstance,
                       local_238.ArrayNum,&local_228.ArrayMax);
            if (iVar12 != 0) {
              memcpy(local_228.AllocatorInstance.Data,FVar23.Data,lVar24 << 3);
            }
          }
          iVar12 = local_238.ArrayMax;
          local_238._8_8_ = local_238._8_8_ & 0xffffffff00000000;
          if (iVar12 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,0,&local_238.AllocatorInstance,0,&local_238.ArrayMax);
          }
        }
        this_00 = (FWeakObjectPtr *)(**(code **)(param_2->_padding_ + 0x150))(param_2,&local_res10);
        pUVar14 = FWeakObjectPtr::Get(this_00);
        iVar12 = local_228.ArrayNum;
        if (local_228.ArrayNum == local_228.ArrayMax) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_228.AllocatorInstance,&local_228.ArrayMax);
        }
        local_228.ArrayNum = iVar12 + 1;
        *(UObject **)(local_228.AllocatorInstance.Data + (longlong)iVar12 * 8) = pUVar14;
        FVar10 = FLinearColor::Green;
        FVar9 = FLinearColor::Red;
        pAVar19 = (AActor *)FWeakObjectPtr::Get(local_res18);
        pUVar20 = AActor::GetWorld(pAVar19);
        local_208 = FVar10.field0_0x0;
        local_1d8 = FVar9.field0_0x0;
        local_1f8._s_0.X = dVar5;
        local_1f8._s_0.Y = dVar6;
        local_1f8._s_0.Z = dVar4;
        local_1b8._s_0.X = dVar5;
        local_1b8._s_0.Y = dVar6;
        local_1b8._s_0.Z = dVar4;
        local_188._s_0.Z = dVar4;
        bVar11 = UKismetSystemLibrary::CapsuleTraceMultiForObjects
                           ((UObject *)pUVar20,(TVector<double> *)&local_1b8._s_0,
                            (TVector<double> *)&local_1f8._s_0,(float)iVar3,fVar26,&local_1c8,false,
                            &local_228,None,&local_218,true,(FLinearColor *)&local_1d8._s_0,
                            (FLinearColor *)&local_208._s_0,fVar8);
        if (bVar11) {
          iVar12 = local_218.ArrayNum;
          uVar21 = (ulonglong)local_218.ArrayNum;
          pFVar25 = local_218.AllocatorInstance.Data + uVar21 * 0x100;
          FVar23.Data = local_218.AllocatorInstance.Data;
          while( true ) {
            if ((int)uVar21 != iVar12) {
              `TCheckedPointerIterator<FHitResult,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (&local_res10);
            }
            if (FVar23.Data == pFVar25) break;
            pAVar19 = FActorInstanceHandle::FetchActor((FActorInstanceHandle *)(FVar23.Data + 0xb8))
            ;
            local_208._0_8_ = pAVar19;
            TArray<AActor_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<AActor_*>
                      (&local_238,(AActor **)&local_208);
            uVar21 = local_218._8_8_ & 0xffffffff;
            FVar23.Data = FVar23.Data + 0x100;
          }
        }
        FVar23.Data = local_238.AllocatorInstance.Data;
        iVar12 = local_238.ArrayNum;
        if (iVar2 == (iVar2 / 0x168) * 0x168) {
          if (param_4 != &local_238) {
            lVar24 = (longlong)local_238.ArrayNum;
            piVar1 = &param_4->ArrayMax;
            param_4->ArrayNum = local_238.ArrayNum;
            if ((local_238.ArrayNum == 0) && (*piVar1 == 0)) {
              *piVar1 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,local_238.ArrayNum,*piVar1,&param_4->AllocatorInstance,
                         local_238.ArrayNum,piVar1);
              if (iVar12 != 0) {
                memcpy((param_4->AllocatorInstance).Data,FVar23.Data,lVar24 << 3);
              }
            }
          }
        }
        else {
          uVar21 = (ulonglong)local_238.ArrayNum;
          pFVar25 = local_238.AllocatorInstance.Data + uVar21 * 8;
          while( true ) {
            if ((int)uVar21 != iVar12) {
              `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (&local_res10);
            }
            if (FVar23.Data == pFVar25) break;
            pUVar14 = *(UObject **)FVar23.Data;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar14);
            }
            auVar7._8_8_ = 0;
            auVar7._0_8_ = local_1d8._8_8_;
            local_1d8 = (FLinearColor_u_0)(auVar7 << 0x40);
            local_res10 = pUVar14;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar14);
            }
            FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_1d8._s_0,(FObjectPtr)&local_res10);
            pFVar22 = FDS_EntityBase::GetEntityBaseFromActor
                                ((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_1d8._0_8_);
            if (pFVar22 != (FDS_EntityBase *)0x0) {
              UDS_MovementCore::GetMovementCore((ulong64)&local_208);
              bVar11 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                                 ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_208._s_0
                                  ,(void *)0x0);
              if (bVar11) break;
              pUVar16 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&local_208._s_0);
              UDS_MovementCore::GetActorFootLocation(pUVar16,(TVector<double> *)&local_1f8._s_0);
              pTVar17 = UE::Math::TRotator<double>::Vector(&local_168,local_100);
              local_1b8._s_0.X = (pTVar17->field0_0x0)._s_0.X;
              local_1b8._s_0.Y = (pTVar17->field0_0x0)._s_0.Y;
              local_1b8._s_0.Z = (pTVar17->field0_0x0)._s_0.Z;
              local_188._s_0.X = local_1f8._s_0.X;
              local_188._s_0.Y = local_1f8._s_0.Y;
              local_188._s_0.Z = local_1f8._s_0.Z;
              local_138._s_0.X = dVar5;
              local_138._s_0.Y = dVar6;
              local_138._s_0.Z = dVar4;
              bVar11 = DS_Util::IsTargetInSector
                                 ((TVector<double> *)&local_188._s_0,
                                  (TVector<double> *)&local_138._s_0,
                                  (TVector<double> *)&local_1b8._s_0,(float)iVar3,(float)iVar2);
              if (bVar11) {
                iVar13 = param_4->ArrayNum;
                if (iVar13 == param_4->ArrayMax) {
                  iVar13 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,&param_4->AllocatorInstance,&param_4->ArrayMax);
                }
                param_4->ArrayNum = iVar13 + 1;
                *(UObject **)((param_4->AllocatorInstance).Data + (longlong)iVar13 * 8) = pUVar14;
              }
            }
            uVar21 = local_238._8_8_ & 0xffffffff;
            FVar23.Data = FVar23.Data + 8;
          }
        }
        if (local_218.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_218.AllocatorInstance.Data);
        }
        if (local_1c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c8.AllocatorInstance.Data);
        }
      }
    }
  }
  if (local_238.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.AllocatorInstance.Data);
  }
  if (local_228.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.AllocatorInstance.Data);
  }
  return;
}

// SearchTargetInRect @ 14b7c28d0

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
UDS_AttackTargetAbility::SearchTargetInRect
          (UDS_AttackTargetAbility *this,FDS_AtomicImpactInfo *param_1,FDS_EntityBase *param_2,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_3)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  FLinearColor FVar11;
  FLinearColor FVar12;
  double dVar13;
  bool bVar14;
  int iVar15;
  UDS_MovementCore *this_00;
  UObject *pUVar16;
  TVector<double>_u_0 *pTVar17;
  FWeakObjectPtr *this_01;
  AActor *pAVar18;
  UWorld *pUVar19;
  ulonglong uVar20;
  ForAnyElementType FVar21;
  FScriptContainerElement *pFVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  double local_res10;
  AActor *local_res18;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_238;
  TArray<FHitResult,TSizedDefaultAllocator<32>_> local_228;
  FWeakObjectPtr local_218 [2];
  TVector<double>_u_0 local_208;
  TVector<double>_u_0 local_1e8;
  FLinearColor_u_0 local_1c8;
  TArray<TEnumAsByte<EObjectTypeQuery>,TSizedDefaultAllocator<32>_> local_1b8;
  double local_1a8;
  double dStack_1a0;
  undefined8 local_198;
  FWeakObjectPtr local_188 [2];
  FLinearColor_u_0 local_178;
  undefined8 local_168;
  TVector<double>_u_0 local_158;
  TRotator<double> local_138;
  double local_120;
  double local_118;
  TVector<double>_u_0 local_110;
  TVector<double>_u_0 local_f8 [8];
  
  fVar10 = __real_3f000000;
  fVar1 = param_1->AttackWidth;
  iVar15 = param_1->AttackHeight;
  dVar2 = (param_1->LocationOffset).field0_0x0._s_0.Z;
  fVar23 = param_1->RotationOffset;
  local_res18 = (AActor *)CONCAT44(local_res18._4_4_,fVar23);
  local_238.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_238.ArrayNum = 0;
  local_238.ArrayMax = 0;
  dVar3 = (param_1->LocationOffset).field0_0x0._s_0.X;
  dVar4 = (param_1->LocationOffset).field0_0x0._s_0.Y;
  fVar24 = (float)param_1->AttackDistanceMax * __real_3f000000;
  if (param_2 != (FDS_EntityBase *)0x0) {
    UDS_MovementCore::GetMovementCore((ulong64)local_188);
    bVar14 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                       ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)local_188,(void *)0x0);
    if (!bVar14) {
      (**(code **)(param_2->_padding_ + 0x150))(param_2,local_218);
      bVar14 = FWeakObjectPtr::IsValid(local_218);
      if (bVar14) {
        local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1b8.ArrayNum = 0;
        local_1b8.ArrayMax = 0;
        GetSearchTypeList(this,param_2->EntityType,&local_1b8);
        this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get(local_188);
        UDS_MovementCore::GetActorFootLocation(this_00,(TVector<double> *)&local_110._s_0);
        pUVar16 = FWeakObjectPtr::Get(local_218);
        if (*(USceneComponent **)(pUVar16 + 0xb) == (USceneComponent *)0x0) {
          pTVar17 = &local_208;
          local_208._s_0.X = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
          local_208._s_0.Y = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
          local_208._s_0.Z = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
        }
        else {
          pTVar17 = &USceneComponent::GetForwardVector
                               (*(USceneComponent **)(pUVar16 + 0xb),
                                (TVector<double> *)&local_208._s_0)->field0_0x0;
        }
        local_1e8._s_0.Z = (pTVar17->_s_0).Z;
        dVar5 = (((TVector<double>_u_0 *)&(pTVar17->_s_0).X)->_s_0).X;
        dVar6 = (pTVar17->_s_0).Y;
        local_1e8._s_0.X = dVar5;
        local_1e8._s_0.Y = dVar6;
        local_198 = local_1e8._s_0.Z;
        UE::Math::TVector<double>::ToOrientationRotator
                  ((TVector<double> *)&local_1e8._s_0,&local_138);
        local_138.Pitch = 0.0;
        dVar7 = (double)fVar23 + local_138.Yaw;
        local_138.Roll = 0.0;
        local_168 = 0;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = dVar7;
        local_178 = (FLinearColor_u_0)(auVar8 << 0x40);
        local_208._s_0.X = dVar3;
        local_208._s_0.Y = dVar4;
        local_208._s_0.Z = dVar2;
        UE::Math::TRotator<double>::RotateVector
                  ((TRotator<double> *)&local_178._s_0,(TVector<double> *)&local_f8[0]._s_0,
                   (TVector<double> *)&local_208._s_0);
        local_res10 = (double)fVar24;
        dVar3 = (double)(fVar1 * fVar10);
        dVar5 = local_res10 * dVar5 + local_110._s_0.X + (double)local_f8[0]._0_8_;
        dVar4 = local_res10 * (double)local_198 + local_110._s_0.Z + (double)local_f8[0]._16_8_;
        dVar2 = (double)((float)iVar15 * fVar10);
        dVar6 = local_res10 * dVar6 + local_110._s_0.Y + (double)local_f8[0]._8_8_;
        uVar25 = (undefined4)((ulonglong)dVar6 >> 0x20);
        local_120 = dVar3;
        local_118 = dVar2;
        this_01 = (FWeakObjectPtr *)(**(code **)(param_2->_padding_ + 0x150))(param_2,&local_1c8);
        pUVar16 = FWeakObjectPtr::Get(this_01);
        iVar15 = local_238.ArrayNum;
        if (local_238.ArrayNum == local_238.ArrayMax) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_238.AllocatorInstance,&local_238.ArrayMax);
        }
        local_238.ArrayNum = iVar15 + 1;
        *(UObject **)(local_238.AllocatorInstance.Data + (longlong)iVar15 * 8) = pUVar16;
        FVar12 = FLinearColor::Green;
        FVar11 = FLinearColor::Red;
        local_228.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_228.ArrayNum = 0;
        local_228.ArrayMax = 0;
        pAVar18 = (AActor *)FWeakObjectPtr::Get(local_218);
        pUVar19 = AActor::GetWorld(pAVar18);
        dVar13 = local_res10;
        fVar1 = __real_40a00000;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = dVar7;
        local_158._0_16_ = auVar9 << 0x40;
        local_158._s_0.Z = 0.0;
        dStack_1a0 = dVar3;
        local_1a8 = local_res10;
        local_1c8 = FVar12.field0_0x0;
        local_178 = FVar11.field0_0x0;
        local_208._s_0.X = dVar5;
        local_208._s_0.Y = dVar6;
        local_208._s_0.Z = dVar4;
        local_1e8._s_0.X = dVar5;
        local_1e8._s_0.Y = dVar6;
        local_1e8._s_0.Z = dVar4;
        local_198 = dVar2;
        bVar14 = UKismetSystemLibrary::BoxTraceMultiForObjects
                           ((UObject *)pUVar19,(TVector<double> *)&local_208._s_0,
                            (TVector<double> *)&local_1e8._s_0,(TVector<double> *)&local_1a8,
                            (TRotator<double> *)&local_158._s_0,&local_1b8,false,&local_238,None,
                            &local_228,true,(FLinearColor *)&local_178._s_0,
                            (FLinearColor *)&local_1c8._s_0,__real_40a00000);
        if (bVar14) {
          iVar15 = local_228.ArrayNum;
          uVar20 = (ulonglong)local_228.ArrayNum;
          pFVar22 = local_228.AllocatorInstance.Data + uVar20 * 0x100;
          FVar21.Data = local_228.AllocatorInstance.Data;
          while( true ) {
            if ((int)uVar20 != iVar15) {
              `TCheckedPointerIterator<FHitResult,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (&local_res10);
            }
            if (FVar21.Data == pFVar22) break;
            pAVar18 = FActorInstanceHandle::FetchActor((FActorInstanceHandle *)(FVar21.Data + 0xb8))
            ;
            local_1c8._0_8_ = pAVar18;
            TArray<AActor_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<AActor_*>
                      (param_3,(AActor **)&local_1c8);
            uVar20 = local_228._8_8_ & 0xffffffff;
            FVar21.Data = FVar21.Data + 0x100;
          }
        }
        dVar3 = local_138.Roll;
        dVar2 = local_138.Pitch;
        FVar12.field0_0x0 = FLinearColor::Green.field0_0x0;
        FVar11.field0_0x0 = FLinearColor::Red.field0_0x0;
        if (param_1->ImpactType == SelfCross) {
          fVar23 = local_res18._0_4_ + __real_42b40000;
          pAVar18 = (AActor *)FWeakObjectPtr::Get(local_218);
          pUVar19 = AActor::GetWorld(pAVar18);
          local_1e8._s_0.X = dVar13;
          local_1e8._s_0.Y = local_120;
          unique0x1000025b = SUB84(dVar6,0);
          local_1a8 = dVar5;
          unique0x1000025f = uVar25;
          local_178 = FVar12.field0_0x0;
          local_1c8 = FVar11.field0_0x0;
          local_208._s_0.X = dVar2;
          local_208._s_0.Z = dVar3;
          local_1e8._s_0.Z = local_118;
          local_158._8_4_ = SUB84(dVar6,0);
          local_158._0_8_ = dVar5;
          local_158._12_4_ = uVar25;
          local_208._s_0.Y = (double)fVar23 + local_138.Yaw;
          local_198 = dVar4;
          local_158._s_0.Z = dVar4;
          bVar14 = UKismetSystemLibrary::BoxTraceMultiForObjects
                             ((UObject *)pUVar19,(TVector<double> *)&local_158._s_0,
                              (TVector<double> *)&local_1a8,(TVector<double> *)&local_1e8._s_0,
                              (TRotator<double> *)&local_208._s_0,&local_1b8,false,&local_238,None,
                              &local_228,true,(FLinearColor *)&local_1c8._s_0,
                              (FLinearColor *)&local_178._s_0,fVar1);
          if (bVar14) {
            iVar15 = local_228.ArrayNum;
            uVar20 = (ulonglong)local_228.ArrayNum;
            pFVar22 = local_228.AllocatorInstance.Data + uVar20 * 0x100;
            FVar21.Data = local_228.AllocatorInstance.Data;
            while( true ) {
              if ((int)uVar20 != iVar15) {
                `TCheckedPointerIterator<FHitResult,int,0>::operator!='::__l2::<lambda_1>::
                operator()(&local_res10);
              }
              if (FVar21.Data == pFVar22) break;
              local_res18 = FActorInstanceHandle::FetchActor
                                      ((FActorInstanceHandle *)(FVar21.Data + 0xb8));
              TArray<AActor_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<AActor_*>
                        (param_3,&local_res18);
              uVar20 = local_228._8_8_ & 0xffffffff;
              FVar21.Data = FVar21.Data + 0x100;
            }
          }
        }
        if (local_228.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_228.AllocatorInstance.Data);
        }
        if (local_1b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b8.AllocatorInstance.Data);
        }
      }
    }
  }
  if (local_238.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.AllocatorInstance.Data);
  }
  return;
}

// UpdateImpact @ 14b7c9550

void __thiscall UDS_AttackTargetAbility::UpdateImpact(UDS_AttackTargetAbility *this,float param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  FDS_AtomicImpactInfo *pFVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  UObject *pUVar8;
  UDS_ProjectileManager *this_00;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  
  bVar7 = FWeakObjectPtr::IsValid(&(this->AttackTargetDataPtr).WeakPtr);
  if (bVar7) {
    pUVar8 = FWeakObjectPtr::Get(&(this->AttackTargetDataPtr).WeakPtr);
    uVar10 = 0;
    local_38.Data = (FScriptContainerElement *)0x0;
    iVar2 = *(int *)&pUVar8[3].field_0x10;
    pFVar4 = *(FDS_AtomicImpactInfo **)&pUVar8[3].field_0x8;
    local_30 = iVar2;
    if (iVar2 == 0) {
      local_2c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x78,8,iVar2,0,&local_38,iVar2,&local_2c);
      ConstructItems<FDS_AtomicImpactInfo,FDS_AtomicImpactInfo,int>(local_38.Data,pFVar4,iVar2);
    }
    uVar3 = this->ImpactInfoStep;
    if ((-1 < (int)uVar3) && ((int)uVar3 < local_30)) {
      uVar9 = 0;
      if ((int)uVar3 < local_30) {
        uVar9 = ~uVar3 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar2 = *(int *)(local_38.Data + (longlong)(int)uVar3 * 0x78 + 0x10);
      uVar12 = uVar10;
      if (0 < iVar2) {
        do {
          uVar3 = this->ImpactInfoStep;
          uVar9 = 0;
          if ((int)uVar3 < local_30) {
            uVar9 = ~uVar3 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FVar6.Data = local_38.Data;
          uVar11 = (uint)uVar12;
          uVar9 = 0;
          if ((int)uVar11 < *(int *)(local_38.Data + (longlong)(int)uVar3 * 0x78 + 0x10)) {
            uVar9 = ~uVar11 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          fVar1 = *(float *)(*(longlong *)(FVar6.Data + (longlong)(int)uVar3 * 0x78 + 8) +
                            uVar10 * 4);
          if ((this->PrevImpactTime <= fVar1 && fVar1 != this->PrevImpactTime) &&
             (fVar1 <= this->ElapsedTime)) {
            uVar3 = this->ImpactInfoStep;
            this->PrevImpactTime = this->ElapsedTime;
            uVar9 = 0;
            if ((int)uVar3 < local_30) {
              uVar9 = ~uVar3 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            FVar6.Data = local_38.Data;
            this_00 = UDS_ProjectileManager::GetInst();
            if (this_00 != (UDS_ProjectileManager *)0x0) {
              UDS_ProjectileManager::ImpactProjectile
                        (this_00,(ulong64 *)&this->_padding_,
                         (int *)(FVar6.Data + (longlong)(int)uVar3 * 0x78 + 0x28));
            }
            if (uVar11 == iVar2 - 1U) {
              this->ImpactInfoStep = this->ImpactInfoStep + 1;
              this->PrevImpactTime = 0.0;
            }
          }
          uVar10 = uVar10 + 1;
          uVar12 = (ulonglong)(uVar11 + 1);
        } while ((longlong)uVar10 < (longlong)iVar2);
      }
    }
    DestructItems<FDS_AtomicImpactInfo,int>((FDS_AtomicImpactInfo *)local_38.Data,local_30);
    if ((FDS_AtomicImpactInfo *)local_38.Data != (FDS_AtomicImpactInfo *)0x0) {
      FMemory::Free(local_38.Data);
    }
  }
  return;
}

