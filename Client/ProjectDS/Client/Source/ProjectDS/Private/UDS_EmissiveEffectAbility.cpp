// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// StaticClass @ 14b4892b0

UClass * __cdecl UDS_EmissiveEffectAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_EmissiveEffectAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_EmissiveEffectAbility",
               &Z_Registration_Info_UClass_UDS_EmissiveEffectAbility.InnerSingleton,
               StaticRegisterNativesUDS_EmissiveEffectAbility,0x170,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_EmissiveEffectAbility>,
               InternalVTableHelperCtorCaller<UDS_EmissiveEffectAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_EmissiveEffectAbility.InnerSingleton;
}

// UDS_EmissiveEffectAbility @ 14b48b540

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

UDS_EmissiveEffectAbility * __thiscall
UDS_EmissiveEffectAbility::UDS_EmissiveEffectAbility
          (UDS_EmissiveEffectAbility *this,FVTableHelper *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->EmissiveEffectData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  this->TransitionElapsedTime = 0.0;
  return this;
}

// UDS_EmissiveEffectAbility @ 14b48b590

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

UDS_EmissiveEffectAbility * __thiscall
UDS_EmissiveEffectAbility::UDS_EmissiveEffectAbility
          (UDS_EmissiveEffectAbility *this,FObjectInitializer *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->EmissiveEffectData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  this->TransitionElapsedTime = 0.0;
  return this;
}

// ~UDS_EmissiveEffectAbility @ 14b48bef0

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
UDS_EmissiveEffectAbility::~UDS_EmissiveEffectAbility(UDS_EmissiveEffectAbility *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b48d610

UClass * __cdecl UDS_EmissiveEffectAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_EmissiveEffectAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_EmissiveEffectAbility",
               &Z_Registration_Info_UClass_UDS_EmissiveEffectAbility.InnerSingleton,
               StaticRegisterNativesUDS_EmissiveEffectAbility,0x170,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_EmissiveEffectAbility>,
               InternalVTableHelperCtorCaller<UDS_EmissiveEffectAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_EmissiveEffectAbility.InnerSingleton;
}

// ShouldTickComponent @ 14b48d730

bool __thiscall UDS_EmissiveEffectAbility::ShouldTickComponent(UDS_EmissiveEffectAbility *this)

{
  return true;
}

// StaticRegisterNativesUDS_EmissiveEffectAbility @ 14b48d930

void __cdecl UDS_EmissiveEffectAbility::StaticRegisterNativesUDS_EmissiveEffectAbility(void)

{
  return;
}

// OnAbilityAdded @ 14b7b39d0

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

void __thiscall UDS_EmissiveEffectAbility::OnAbilityAdded(UDS_EmissiveEffectAbility *this)

{
  bool bVar1;
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> TVar2;
  TWeakObjectPtr<UDS_EmissiveEffectAbilityData,FWeakObjectPtr> TVar3;
  UObject *pUVar4;
  undefined1 local_res8;
  ulong64 local_res10;
  
  UDS_GameplayAbility::OnAbilityAdded((UDS_GameplayAbility *)this);
  TVar2 = FDS_EntityBase::GetCharStateData((FDS_EntityBase *)this->_padding_);
                    /* WARNING: Load size is inaccurate */
  (this->CharStateData).WeakPtr = *TVar2.WeakPtr;
  local_res8 = 0x6b;
  TVar3 = UDS_AbilityDataSet::GetAbilityData<UDS_EmissiveEffectAbilityData>
                    (&local_res10,(EDS_AbilityTagType *)&this->_padding_);
                    /* WARNING: Load size is inaccurate */
  (this->EmissiveEffectData).WeakPtr = *TVar3.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(&(this->EmissiveEffectData).WeakPtr);
  if (bVar1) {
    pUVar4 = FWeakObjectPtr::Get(&(this->EmissiveEffectData).WeakPtr);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_EmissiveEffectAbility>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar4[2].field_0x8,(UDS_EmissiveEffectAbility *)&local_res8,(pmf_65d7f4f3 *)this);
  }
  return;
}

// OnAbilityRemoved @ 14b7b3dd0

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

void __thiscall UDS_EmissiveEffectAbility::OnAbilityRemoved(UDS_EmissiveEffectAbility *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  UDS_GameplayAbility::OnAbilityRemoved((UDS_GameplayAbility *)this);
  bVar1 = FWeakObjectPtr::IsValid(&(this->EmissiveEffectData).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->EmissiveEffectData).WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[2].field_0x8,this);
  }
  return;
}

// OnCanActivate @ 14b7b6460

bool __thiscall UDS_EmissiveEffectAbility::OnCanActivate(UDS_EmissiveEffectAbility *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  if (bVar1) {
    bVar1 = FWeakObjectPtr::IsValid(&(this->EmissiveEffectData).WeakPtr);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get(&(this->EmissiveEffectData).WeakPtr);
      return 0 < *(int *)&pUVar2[3].field_0x10;
    }
  }
  return false;
}

// OnChangedEmissiveEffect @ 14b7b6f90

void __thiscall UDS_EmissiveEffectAbility::OnChangedEmissiveEffect(UDS_EmissiveEffectAbility *this)

{
  this->TransitionElapsedTime = 0.0;
  return;
}

// OnDeactivateAbility @ 14b7b8880

void __thiscall
UDS_EmissiveEffectAbility::OnDeactivateAbility(UDS_EmissiveEffectAbility *this,bool *param_1)

{
  this->TransitionElapsedTime = 0.0;
  return;
}

// OnPostActivateAbility @ 14b7bc5d0

void __thiscall UDS_EmissiveEffectAbility::OnPostActivateAbility(UDS_EmissiveEffectAbility *this)

{
  this->TransitionElapsedTime = 0.0;
  return;
}

// OnTickComponent @ 14b7bebc0

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
UDS_EmissiveEffectAbility::OnTickComponent(UDS_EmissiveEffectAbility *this,float param_1)

{
  bool bVar1;
  UObject *pUVar2;
  EDS_AbilityDeactivateType local_res8 [8];
  
  UDS_GameplayAbility::OnTickComponent((UDS_GameplayAbility *)this,param_1);
  bVar1 = FWeakObjectPtr::IsValid(&(this->EmissiveEffectData).WeakPtr);
  if (bVar1) {
    this->TransitionElapsedTime = param_1 + this->TransitionElapsedTime;
    UpdateScalarParams(this);
    if (__real_3dcccccd < this->TransitionElapsedTime) {
      pUVar2 = FWeakObjectPtr::Get(&(this->EmissiveEffectData).WeakPtr);
      if (*(int *)&pUVar2[3].field_0x10 < 1) {
        local_res8[0] = Success;
        UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res8);
      }
    }
  }
  return;
}

// UpdateScalarParams @ 14b7ca220

void __thiscall UDS_EmissiveEffectAbility::UpdateScalarParams(UDS_EmissiveEffectAbility *this)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  FName FVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  UDS_EmissiveEffectAbilityData *pUVar16;
  FDS_EmissiveEffectParams *pFVar17;
  FDS_EmissiveEffectParams *pFVar18;
  longlong lVar19;
  float fVar20;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  ForAnyElementType local_b8;
  undefined8 local_b0;
  ForAnyElementType local_a8;
  undefined8 local_a0;
  FName local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  bVar13 = FWeakObjectPtr::IsValid(&(this->EmissiveEffectData).WeakPtr);
  if (bVar13) {
    pUVar16 = (UDS_EmissiveEffectAbilityData *)
              FWeakObjectPtr::Get(&(this->EmissiveEffectData).WeakPtr);
    pFVar17 = UDS_EmissiveEffectAbilityData::GetPrevEmissiveEffectParams(pUVar16);
    pUVar16 = (UDS_EmissiveEffectAbilityData *)
              FWeakObjectPtr::Get(&(this->EmissiveEffectData).WeakPtr);
    pFVar18 = UDS_EmissiveEffectAbilityData::GetCurrentEmissiveEffectParams(pUVar16);
    fVar20 = this->TransitionElapsedTime * __real_41200000;
    local_b8.Data = (FScriptContainerElement *)0x0;
    local_b0 = 0;
    if (__real_3f800000 <= fVar20) {
      fVar20 = __real_3f800000;
    }
    if (fVar20 <= 0.0) {
      fVar20 = 0.0;
    }
    ::FName::FName(&local_res8,L"FresnelExponenIn");
    fVar2 = pFVar18->FresnelExponenIn;
    fVar3 = pFVar17->FresnelExponenIn;
    fVar4 = pFVar17->FresnelExponenIn;
    ::FName::FName(&local_res10,L"FresnelBaseReflectFractionIn");
    fVar5 = pFVar18->FresnelBaseReflectFractionIn;
    fVar6 = pFVar17->FresnelBaseReflectFractionIn;
    fVar7 = pFVar17->FresnelBaseReflectFractionIn;
    ::FName::FName(&local_res18,L"FresnelIntensity");
    FVar12 = local_res8;
    fVar8 = pFVar18->FresnelIntensity;
    fVar9 = pFVar17->FresnelIntensity;
    local_res8 = (FName)((ulonglong)local_res18 >> 0x20);
    fVar10 = pFVar17->FresnelIntensity;
    iVar14 = (int)local_b0;
    if ((int)local_b0 == local_b0._4_4_) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x40c,&local_b8,(int *)((longlong)&local_b0 + 4));
    }
    iVar15 = iVar14 + 1;
    lVar19 = (longlong)iVar14;
    *(uint *)(local_b8.Data + lVar19 * 0xc) = FVar12.ComparisonIndex.Value.Value;
    *(uint *)(local_b8.Data + lVar19 * 0xc + 4) = FVar12.Number;
    *(float *)(local_b8.Data + lVar19 * 0xc + 8) = (fVar2 - fVar3) * fVar20 + fVar4;
    if (iVar15 == local_b0._4_4_) {
      local_b0._0_4_ = iVar15;
      iVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x40c,&local_b8,(int *)((longlong)&local_b0 + 4));
    }
    local_b0._0_4_ = iVar15 + 1;
    lVar19 = (longlong)iVar15;
    *(uint *)(local_b8.Data + lVar19 * 0xc) = local_res10.ComparisonIndex.Value.Value;
    *(uint *)(local_b8.Data + lVar19 * 0xc + 4) = local_res10.Number;
    *(float *)(local_b8.Data + lVar19 * 0xc + 8) = (fVar5 - fVar6) * fVar20 + fVar7;
    if ((int)local_b0 == local_b0._4_4_) {
      local_b0._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x40c,&local_b8,(int *)((longlong)&local_b0 + 4));
    }
    lVar19 = (longlong)(int)local_b0;
    local_b0 = CONCAT44(local_b0._4_4_,(int)local_b0 + 1);
    *(uint *)(local_b8.Data + lVar19 * 0xc) = local_res18.ComparisonIndex.Value.Value;
    *(uint *)(local_b8.Data + lVar19 * 0xc + 4) = local_res8.ComparisonIndex.Value.Value;
    *(float *)(local_b8.Data + lVar19 * 0xc + 8) = (fVar8 - fVar9) * fVar20 + fVar10;
    local_a8.Data = (FScriptContainerElement *)0x0;
    local_a0 = 0;
    ::FName::FName(&local_res8,L"FresnelColor");
    uStack_90 = *(undefined8 *)&(pFVar18->FresnelColor).field0_0x0;
    uVar11 = *(undefined8 *)((longlong)&(pFVar18->FresnelColor).field0_0x0 + 8);
    local_98 = local_res8;
    iVar14 = (int)local_a0;
    uStack_88 = uVar11;
    if ((int)local_a0 == local_a0._4_4_) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x418,&local_a8,(int *)((longlong)&local_a0 + 4));
    }
    local_a0 = CONCAT44(local_a0._4_4_,iVar14 + 1);
    pFVar1 = local_a8.Data + (longlong)iVar14 * 0x18;
    *(uint *)pFVar1 = local_98.ComparisonIndex.Value;
    *(uint *)(pFVar1 + 4) = local_98.Number;
    *(uint *)(pFVar1 + 8) = (uint)uStack_90;
    *(uint *)(pFVar1 + 0xc) = uStack_90._4_4_;
    *(undefined8 *)(local_a8.Data + (longlong)iVar14 * 0x18 + 0x10) = uVar11;
    (**(code **)(*(longlong *)this->_padding_ + 0x108))((longlong *)this->_padding_,&local_b8);
    (**(code **)(*(longlong *)this->_padding_ + 0x110))((longlong *)this->_padding_,&local_a8);
    if (local_a8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data);
    }
    if (local_b8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data);
    }
  }
  return;
}

