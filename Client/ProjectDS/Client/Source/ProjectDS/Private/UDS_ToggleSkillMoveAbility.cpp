// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 21

// StaticClass @ 14b5c32d0

UClass * __cdecl UDS_ToggleSkillMoveAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ToggleSkillMoveAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ToggleSkillMoveAbility",
               &Z_Registration_Info_UClass_UDS_ToggleSkillMoveAbility.InnerSingleton,
               StaticRegisterNativesUDS_ToggleSkillMoveAbility,0x188,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ToggleSkillMoveAbility>,
               InternalVTableHelperCtorCaller<UDS_ToggleSkillMoveAbility>,local_res8,
               UDS_ToggleSkillBaseAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ToggleSkillMoveAbility.InnerSingleton;
}

// UDS_ToggleSkillMoveAbility @ 14b5c7280

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

UDS_ToggleSkillMoveAbility * __thiscall
UDS_ToggleSkillMoveAbility::UDS_ToggleSkillMoveAbility
          (UDS_ToggleSkillMoveAbility *this,FVTableHelper *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  *(undefined4 *)&this->_padding_ = 0x3f800000;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->HitEventDelegateHandle).ID = 0;
  (this->NiagaraComponent).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UDS_ToggleSkillMoveAbility @ 14b5c8bd0

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
UDS_ToggleSkillMoveAbility::~UDS_ToggleSkillMoveAbility(UDS_ToggleSkillMoveAbility *this)

{
  this->_padding_ = (longlong)&UDS_ToggleSkillBaseAbility::_vftable__for__UObject__;
  this->_padding_ =
       (longlong)&UDS_ToggleSkillBaseAbility::_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b5cbea0

UClass * __cdecl UDS_ToggleSkillMoveAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ToggleSkillMoveAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ToggleSkillMoveAbility",
               &Z_Registration_Info_UClass_UDS_ToggleSkillMoveAbility.InnerSingleton,
               StaticRegisterNativesUDS_ToggleSkillMoveAbility,0x188,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ToggleSkillMoveAbility>,
               InternalVTableHelperCtorCaller<UDS_ToggleSkillMoveAbility>,local_res8,
               UDS_ToggleSkillBaseAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ToggleSkillMoveAbility.InnerSingleton;
}

// ShouldTickComponent @ 14b5cdef0

bool __thiscall UDS_ToggleSkillMoveAbility::ShouldTickComponent(UDS_ToggleSkillMoveAbility *this)

{
  return true;
}

// StaticRegisterNativesUDS_ToggleSkillMoveAbility @ 14b5cdfb0

void __cdecl UDS_ToggleSkillMoveAbility::StaticRegisterNativesUDS_ToggleSkillMoveAbility(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_ToggleSkillMoveAbility_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnMovementModeChanged @ 14b5d0aa0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UDS_ToggleSkillMoveAbility::execOnMovementModeChanged
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte local_res10 [8];
  uchar local_res20 [8];
  ACharacter *local_18 [2];
  
  local_18[0] = (ACharacter *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = '\0';
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnMovementModeChanged
            ((UDS_ToggleSkillMoveAbility *)param_1,local_18[0],(uint)local_res10[0],local_res20[0]);
  return;
}

// UDS_ToggleSkillMoveAbility @ 14b8235c0

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

UDS_ToggleSkillMoveAbility * __thiscall
UDS_ToggleSkillMoveAbility::UDS_ToggleSkillMoveAbility
          (UDS_ToggleSkillMoveAbility *this,FObjectInitializer *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  *(undefined4 *)&this->_padding_ = 0x3f800000;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->HitEventDelegateHandle).ID = 0;
  (this->NiagaraComponent).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ClearVariables @ 14b827fe0

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

void __thiscall UDS_ToggleSkillMoveAbility::ClearVariables(UDS_ToggleSkillMoveAbility *this)

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
  this->ElapsedTime = 0.0;
  this->bEffectStarted = false;
  return;
}

// OnAbilityRetryActivate @ 14b837ce0

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

void __thiscall UDS_ToggleSkillMoveAbility::OnAbilityRetryActivate(UDS_ToggleSkillMoveAbility *this)

{
  EDS_AbilityDeactivateType local_res10 [24];
  
  local_res10[0] = Success;
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res10);
  return;
}

// OnCanActivate @ 14b83b810

bool __thiscall UDS_ToggleSkillMoveAbility::OnCanActivate(UDS_ToggleSkillMoveAbility *this)

{
  bool bVar1;
  
  bVar1 = UDS_ToggleSkillBaseAbility::OnCanActivate((UDS_ToggleSkillBaseAbility *)this);
  return bVar1;
}

// OnDeactivateAbility @ 14b83ffb0

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
UDS_ToggleSkillMoveAbility::OnDeactivateAbility(UDS_ToggleSkillMoveAbility *this,bool *param_1)

{
  FDelegateHandle FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  longlong *this_00;
  EDS_StateTagType local_res8 [16];
  EDS_StateTagType local_res18 [8];
  EDS_StateTagType local_res20 [8];
  EDS_StateTagType local_28 [8];
  FWeakObjectPtr local_20;
  
  local_res8[0] = ToggleSkill;
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if (*(int *)&pUVar5[2].field_0x24 == 2) {
    local_res18[0] = Lock_Rotation;
    UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res18);
    local_res20[0] = Lock_CameraFront;
    UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res20);
  }
  bVar3 = FWeakObjectPtr::IsValid(&(this->NiagaraComponent).WeakPtr);
  if (bVar3) {
    pUVar5 = FWeakObjectPtr::Get(&(this->NiagaraComponent).WeakPtr);
    (**(code **)(*(longlong *)pUVar5 + 0x4a0))(pUVar5,0);
    (this->NiagaraComponent).WeakPtr = (FWeakObjectPtr)0x0;
  }
  PlayEndEffect(this);
  local_28[0] = Locomotion_ToggleMove;
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_28);
  if (*(char *)((longlong)&this->_padding_ + 1) == '\x01') {
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    if (pUVar5 != (UObject *)0x0) {
      pUVar6 = Z_Construct_UClass_ADS_MainCharacter_NoRegister();
      iVar4 = (int)pUVar6->_padding_;
      if ((iVar4 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar4 * 8) ==
          &pUVar6->_padding_)) {
        FVar1.ID = (this->HitEventDelegateHandle).ID;
        if (FVar1.ID != 0) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar5[0x39].field_0x20,
                     FVar1);
        }
        TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
                  ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar5[0x1e].field_0x8,
                   (UObject *)this);
      }
    }
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_SkillData::GetData
              ((ulong64)&local_20,this->_padding_,SUB41(*(undefined4 *)&pUVar5[2].field_0x8,0));
    bVar3 = FWeakObjectPtr::IsValid(&local_20);
    if (bVar3) {
      pUVar5 = FWeakObjectPtr::Get(&local_20);
      if (pUVar5[9].field_0x11 == '\x01') {
        this_00 = &this->_padding_;
        pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
        iVar4 = (**(code **)(*(longlong *)pUVar5 + 0x438))(pUVar5);
        if (iVar4 == 4) {
          pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
          (**(code **)(*(longlong *)pUVar5 + 0x448))(pUVar5,3);
          pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
          (**(code **)(*(longlong *)pUVar5 + 0x448))(pUVar5,4);
        }
      }
    }
    else {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<490898526956421215>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_ToggleSkillMoveAbility.cpp"
                         ,0x5f,"skillData.IsValid()");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  return;
}

// OnHitEventCallback @ 14b8406b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UDS_ToggleSkillMoveAbility::OnHitEventCallback
          (UDS_ToggleSkillMoveAbility *this,FDS_StruckInfo *param_1)

{
  UObject *pUVar1;
  FWeakObjectPtr *pFVar2;
  undefined1 local_res8 [8];
  undefined1 local_e8 [192];
  undefined1 local_28 [32];
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if (*(int *)&pUVar1[2].field_0x14 != 0) {
    FDS_EffectSpawnInfo::FDS_EffectSpawnInfo((FDS_EffectSpawnInfo *)local_e8);
    pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    local_e8._0_4_ = *(undefined4 *)&pUVar1[2].field_0x14;
    local_e8._40_8_ = this->_padding_;
    pFVar2 = (FWeakObjectPtr *)
             (**(code **)(*(longlong *)this->_padding_ + 0x80))
                       ((longlong *)this->_padding_,local_res8);
    local_e8._52_8_ = *pFVar2;
    local_e8._96_8_ = ___xmm_40568000000000000000000000000000;
    local_e8._104_8_ = _UNK_1513b2f18;
    local_e8._112_8_ = __real_4056800000000000;
    UDS_EffectManager::PlayEffect((FDS_EffectSpawnInfo *)local_e8);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
    if ((void *)local_28._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_28._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_e8._184_8_);
    if ((FScriptContainerElement *)local_e8._24_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_e8._24_8_);
    }
  }
  return;
}

// OnLoadCompleteLoop @ 14b840a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_ToggleSkillMoveAbility::OnLoadCompleteLoop
          (UDS_ToggleSkillMoveAbility *this,FDS_EffectSpawnCompleteInfo param_1)

{
  TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr> *this_00;
  bool bVar1;
  UObject *pUVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_178 [32];
  EDS_StateTagType local_148 [8];
  UNiagaraComponent *local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = &this->NiagaraComponent;
  bVar1 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    (**(code **)(*(longlong *)pUVar2 + 0x4a0))(pUVar2,0);
    this_00->WeakPtr = (FWeakObjectPtr)0x0;
  }
  local_148[0] = Locomotion_ToggleMove;
  bVar1 = UDS_GameplayAbility::HasStateTag((UDS_GameplayAbility *)this,local_148);
  if (bVar1) {
    if (param_1.NiagaraComponent == (UNiagaraComponent *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_138._padding_ = (longlong)param_1.NiagaraComponent;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_ToggleSkillMoveAbility::OnLoadCompleteLoop",0x2e,Yes);
        UDS_LogManager::PrintLog
                  (pUVar3,1,Warning,local_138.Ptr,0xfd,L"InSpawnInfo.NiagaraComponent is nullptr");
        if ((UNiagaraComponent *)local_138._padding_ != (UNiagaraComponent *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    local_140 = param_1.NiagaraComponent;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1.NiagaraComponent != (UNiagaraComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1.NiagaraComponent);
    }
    FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)&local_140);
  }
  else if (param_1.NiagaraComponent != (UNiagaraComponent *)0x0) {
    (**(code **)((param_1.NiagaraComponent)->_padding_ + 0x4a0))(param_1.NiagaraComponent,0);
  }
  return;
}

// OnMovementModeChanged @ 14b840d40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDS_ToggleSkillMoveAbility::OnMovementModeChanged
          (UDS_ToggleSkillMoveAbility *this,ACharacter *param_1,EMovementMode param_2,uchar param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UObject *pUVar4;
  UDS_MovementCore *this_00;
  longlong *this_01;
  FWeakObjectPtr local_res8 [4];
  TVector<double> local_28;
  
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UDS_SkillData::GetData
            ((ulong64)local_res8,this->_padding_,SUB41(*(undefined4 *)&pUVar4[2].field_0x8,0));
  bVar2 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar2) {
    pUVar4 = FWeakObjectPtr::Get(local_res8);
    if (pUVar4[9].field_0x11 != '\0') {
      this_01 = &this->_padding_;
      pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01);
      iVar3 = (**(code **)(*(longlong *)pUVar4 + 0x438))(pUVar4);
      if (iVar3 == 4) {
        this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_01);
        UDS_MovementCore::GetVelocity(this_00,&local_28);
        local_28.field0_0x0._s_0.Z = 0.0;
        pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01);
        (**(code **)(*(longlong *)pUVar4 + 0x398))(pUVar4,&local_28);
      }
    }
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<490898526956421337>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_ToggleSkillMoveAbility.cpp"
                       ,0xd9,"skillData.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnPostActivateAbility @ 14b8469e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
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

void __thiscall UDS_ToggleSkillMoveAbility::OnPostActivateAbility(UDS_ToggleSkillMoveAbility *this)

{
  int iVar1;
  code *pcVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  FDelegateHandle FVar8;
  char *pcVar9;
  UObject *this_00;
  UFunction *pUVar10;
  EDS_StateTagType local_res8 [8];
  <lambda_1> local_res10 [8];
  undefined8 local_res18;
  FName local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_e8;
  FWeakObjectPtr local_e0;
  FName local_d8;
  FName local_d0;
  UDS_ToggleSkillMoveAbility *local_c8;
  FName *local_c0;
  undefined1 local_b8 [24];
  FName local_a0;
  FDestructionSentinel local_98;
  code *local_78;
  longlong lStack_70;
  FReadAccessScope local_68;
  FReadAccessScope local_50;
  
  UDS_ToggleSkillBaseAbility::OnPostActivateAbility((UDS_ToggleSkillBaseAbility *)this);
  if ((*(char *)((longlong)&this->_padding_ + 1) != '\x01') ||
     (pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_), pUVar6 == (UObject *)0x0))
  goto LAB_14b846c5f;
  pUVar7 = Z_Construct_UClass_ADS_MainCharacter_NoRegister();
  iVar1 = (int)pUVar7->_padding_;
  if ((*(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38) < iVar1) ||
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8)
      != &pUVar7->_padding_)) goto LAB_14b846c5f;
  local_b8._8_4_ = 0;
  local_b8._0_8_ = OnHitEventCallback;
  lStack_70 = (ulonglong)(uint)local_b8._12_4_ << 0x20;
  local_78 = OnHitEventCallback;
  FVar8 = TMulticastDelegateRegistration<void___cdecl(FDS_StruckInfo_const_&),FDefaultDelegateUserPolicy>
          ::AddUObject<UDS_ToggleSkillMoveAbility>
                    ((TMulticastDelegateRegistration<void___cdecl(FDS_StruckInfo_const_&),FDefaultDelegateUserPolicy>
                      *)&pUVar6[0x39].field_0x20,(UDS_ToggleSkillMoveAbility *)local_b8,
                     (pmf_a0acea21 *)this);
                    /* WARNING: Load size is inaccurate */
  (this->HitEventDelegateHandle).ID = *FVar8.ID;
  pcVar9 = strstr("&UDS_ToggleSkillMoveAbility::OnMovementModeChanged","::");
  pcVar4 = (char *)0x0;
  while (pcVar3 = pcVar9, pcVar3 != (char *)0x0) {
    pcVar9 = strstr(pcVar3 + 1,"::");
    pcVar4 = pcVar3;
  }
  if (((pcVar4 == (char *)0x0) || (pcVar4[2] == '0')) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result && Result[2] != \'0\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                         ,0x1da,L"\'%hs\' does not look like a member function"), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  ::FName::FName(&local_d0,pcVar4 + 2);
  local_e8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_e0.ObjectIndex = 0;
  local_e0.ObjectSerialNumber = 0;
  local_d8.ComparisonIndex.Value = 0;
  local_d8.Number = 0;
  local_res20 = local_d0;
  local_c8 = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_e0,(FObjectPtr)&local_c8);
  local_d8 = local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_e8,&local_68);
  local_res18 = 0;
  if ((local_d8 == (FName)0x0) ||
     (this_00 = FWeakObjectPtr::Get(&local_e0), this_00 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_68);
LAB_14b846bd1:
    local_c0 = &local_res20;
    `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,ACharacter_*,enum_EMovementMode,unsigned_char>
    ::__Internal_BindDynamic<UDS_ToggleSkillMoveAbility>'::__l2::<lambda_1>::operator()(&local_c0);
  }
  else {
    pUVar10 = UObject::FindFunction(this_00,local_d8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_68);
    if (pUVar10 == (UFunction *)0x0) goto LAB_14b846bd1;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_e8,&local_50);
  local_b8._16_4_ = local_e0.ObjectIndex;
  local_b8._20_4_ = local_e0.ObjectSerialNumber;
  local_a0 = local_d8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_50);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar6[0x1e].field_0x8,
             (FWriteAccessScope *)&local_98);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&pUVar6[0x1e].field_0x10,local_res10,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar6[0x1e].field_0x8,
             (TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> *)(local_b8 + 0x10));
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_e8.AccessDetector);
LAB_14b846c5f:
  this->bEffectStarted = false;
  this->ElapsedTime = 0.0;
  local_res8[0] = Locomotion_ToggleMove;
  UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  return;
}

// OnTickComponent @ 14b84a750

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
UDS_ToggleSkillMoveAbility::OnTickComponent(UDS_ToggleSkillMoveAbility *this,float param_1)

{
  char cVar1;
  UObject *pUVar2;
  float fVar3;
  
  UDS_GameplayAbility::OnTickComponent((UDS_GameplayAbility *)this,param_1);
  cVar1 = *(char *)((longlong)&this->_padding_ + 1);
  *(float *)((longlong)&this->_padding_ + 4) = param_1 + *(float *)((longlong)&this->_padding_ + 4);
  if (cVar1 != '\0') {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    if (pUVar2[2].field_0xc == '\x03') {
      pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      if (*(float *)&pUVar2[2].field_0x20 <= *(float *)((longlong)&this->_padding_ + 4)) {
        UDS_ToggleSkillBaseAbility::RequestDeactivateAbility((UDS_ToggleSkillBaseAbility *)this);
      }
    }
  }
  UDS_ToggleSkillBaseAbility::UpdateSkillCost((UDS_ToggleSkillBaseAbility *)this,param_1);
  if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    if (*(int *)&pUVar2[2].field_0x24 != 3) {
      pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      if (*(float *)&pUVar2[2].field_0x1c <= *(float *)((longlong)&this->_padding_ + 4)) {
        UDS_GameplayAbility::SetInputPolicy
                  ((UDS_GameplayAbility *)this,
                   (EDS_AbilityInputPolicy *)((longlong)&this->_padding_ + 4));
      }
    }
  }
  fVar3 = param_1 + this->ElapsedTime;
  this->ElapsedTime = fVar3;
  if ((this->bEffectStarted == false) && (__real_3ecccccd < fVar3)) {
    this->bEffectStarted = true;
    PlayStartEffect(this);
  }
  return;
}

// PlayEndEffect @ 14b84ab90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_ToggleSkillMoveAbility::PlayEndEffect(UDS_ToggleSkillMoveAbility *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  UDS_LogManager *pUVar4;
  UDS_MovementCore *pUVar5;
  FDS_ResourceEffectTableRow *pFVar6;
  FName *pFVar7;
  double *pdVar8;
  wchar_t *pwVar9;
  undefined1 auStackY_2f8 [32];
  FWeakObjectPtr local_2c8;
  TVector<double>_u_0 local_2c0;
  TRotator<double> local_2a8;
  FName local_288;
  TRotator<double> local_280;
  TRotator<double> local_268;
  TRotator<double> local_248;
  undefined1 local_230 [192];
  undefined1 local_170 [24];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if (*(int *)&pUVar3[2].field_0x18 != 0) {
    (**(code **)(*(longlong *)this->_padding_ + 0x80))((longlong *)this->_padding_,&local_2c8);
    bVar2 = FWeakObjectPtr::IsValid(&local_2c8);
    if (bVar2) {
      pUVar5 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      UDS_MovementCore::GetActorLocation(pUVar5,(TVector<double> *)&local_2c0._s_0);
      pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      pFVar6 = FDS_ResourceEffectTableRow::Get((longlong)*(int *)&pUVar3[2].field_0x18,true);
      if ((pFVar6 != (FDS_ResourceEffectTableRow *)0x0) && (1 < (pFVar6->Socket).Data.ArrayNum)) {
        pUVar3 = FWeakObjectPtr::Get(&local_2c8);
        pcVar1 = *(code **)(*(longlong *)pUVar3 + 0x528);
        if ((pFVar6->Socket).Data.ArrayNum == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = (wchar_t *)(pFVar6->Socket).Data.AllocatorInstance.Data;
        }
        pFVar7 = ::FName::FName(&local_288,pwVar9);
        pdVar8 = (double *)(*pcVar1)(pUVar3,&local_2a8,*pFVar7);
        local_2c0._s_0.X = *pdVar8;
        local_2c0._s_0.Y = pdVar8[1];
        local_2c0._s_0.Z = pdVar8[2];
      }
      pUVar5 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      UDS_MovementCore::GetActorRotation(pUVar5,&local_280);
      local_268.Pitch = ___xmm_c0568000000000000000000000000000;
      local_268.Yaw = _UNK_152242e68;
      local_2a8.Pitch = local_280.Pitch;
      local_2a8.Yaw = local_280.Yaw;
      local_268.Roll = 0.0;
      local_2a8.Roll = local_280.Roll;
      UKismetMathLibrary::ComposeRotators(&local_248,&local_2a8,&local_268);
      FDS_EffectSpawnInfo::FDS_EffectSpawnInfo((FDS_EffectSpawnInfo *)local_230);
      pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      local_230._0_4_ = *(undefined4 *)&pUVar3[2].field_0x18;
      local_230._40_8_ = this->_padding_;
      local_230._72_8_ = local_2c0._s_0.X;
      local_230._80_8_ = local_2c0._s_0.Y;
      local_230._88_8_ = local_2c0._s_0.Z;
      local_230._96_8_ = local_248.Pitch;
      local_230._104_8_ = local_248.Yaw;
      local_230._112_8_ = local_248.Roll;
      UDS_EffectManager::PlayEffect((FDS_EffectSpawnInfo *)local_230);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_170);
      if ((void *)local_170._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_170._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_170);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_230._184_8_);
    }
    else {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar4 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_ToggleSkillMoveAbility::PlayEndEffect",0x29,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_158.Ptr,0xbf,L"skm is nullptr.");
      local_230._24_8_ = local_158._padding_;
    }
    if ((FScriptContainerElement *)local_230._24_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_230._24_8_);
    }
  }
  return;
}

// PlayHitEffect @ 14b84ae50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UDS_ToggleSkillMoveAbility::PlayHitEffect(UDS_ToggleSkillMoveAbility *this)

{
  UObject *pUVar1;
  FWeakObjectPtr *pFVar2;
  undefined1 local_res8 [8];
  undefined1 local_e8 [192];
  undefined1 local_28 [32];
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if (*(int *)&pUVar1[2].field_0x14 != 0) {
    FDS_EffectSpawnInfo::FDS_EffectSpawnInfo((FDS_EffectSpawnInfo *)local_e8);
    pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    local_e8._0_4_ = *(undefined4 *)&pUVar1[2].field_0x14;
    local_e8._40_8_ = this->_padding_;
    pFVar2 = (FWeakObjectPtr *)
             (**(code **)(*(longlong *)this->_padding_ + 0x80))
                       ((longlong *)this->_padding_,local_res8);
    local_e8._52_8_ = *pFVar2;
    local_e8._96_8_ = ___xmm_40568000000000000000000000000000;
    local_e8._104_8_ = _UNK_1513b2f18;
    local_e8._112_8_ = __real_4056800000000000;
    UDS_EffectManager::PlayEffect((FDS_EffectSpawnInfo *)local_e8);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
    if ((void *)local_28._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_28._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_e8._184_8_);
    if ((FScriptContainerElement *)local_e8._24_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_e8._24_8_);
    }
  }
  return;
}

// PlayStartEffect @ 14b84b400

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UDS_ToggleSkillMoveAbility::PlayStartEffect(UDS_ToggleSkillMoveAbility *this)

{
  undefined8 uVar1;
  int iVar2;
  UObject *pUVar3;
  FWeakObjectPtr *pFVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  UDS_ToggleSkillMoveAbility *local_res8;
  undefined1 local_158 [16];
  int local_148;
  code *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  bool local_128;
  FDestructionSentinel local_118;
  undefined1 *local_100;
  undefined1 local_f8 [200];
  ForAnyElementType local_30;
  int local_28;
  
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if (*(int *)&pUVar3[2].field_0x10 == 0) {
    return;
  }
  FDS_EffectSpawnInfo::FDS_EffectSpawnInfo((FDS_EffectSpawnInfo *)local_f8);
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  local_f8._0_4_ = *(undefined4 *)&pUVar3[2].field_0x10;
  local_f8._40_8_ = this->_padding_;
  pFVar4 = (FWeakObjectPtr *)
           (**(code **)(*(longlong *)this->_padding_ + 0x80))
                     ((longlong *)this->_padding_,&local_res8);
  uStack_130 = 0;
  local_f8._52_8_ = *pFVar4;
  local_f8._96_8_ = ___xmm_c0568000000000000000000000000000;
  local_f8._104_8_ = _UNK_152242e68;
  local_138 = OnLoadCompleteLoop;
  local_f8._112_8_ = __real_4056800000000000;
  local_158._0_8_ = (atomic<unsigned___int64>)0x0;
  local_158._8_8_ = (FScriptContainerElement *)0x0;
  local_148 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_158,
             (FWriteAccessScope *)&local_118);
  local_100 = local_158 + 8;
  puVar5 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)(local_158 + 8));
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXUFDS_EffectSpawnCompleteInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_ToggleSkillMoveAbility____A6AXUFDS_EffectSpawnCompleteInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar5[3] = 0;
    local_res8 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)&local_res8);
    puVar5[4] = local_138;
    puVar5[5] = CONCAT44(uStack_12c,uStack_130);
  }
  if (local_118.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_118.Accessor,&local_118);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_158,
             (FWriteAccessScope *)&local_138);
  iVar2 = local_148;
  uVar1 = local_158._8_8_;
  local_158._8_8_ = (atomic<unsigned___int64> *)0x0;
  local_148 = 0;
  if (local_128 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_12c,uStack_130),
               (FDestructionSentinel *)&local_138);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(local_f8 + 0xc0),
             (FWriteAccessScope *)&local_138);
  if (local_28 != 0) {
    if (local_30.Data == (FScriptContainerElement *)0x0) goto LAB_14b84b5f4;
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
LAB_14b84b5f4:
  local_30.Data = (FScriptContainerElement *)uVar1;
  local_28 = iVar2;
  if (local_128 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_12c,uStack_130),
               (FDestructionSentinel *)&local_138);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_158,
             (FWriteAccessScope *)&local_138);
  if ((local_148 != 0) &&
     ((FMRSWRecursiveAccessDetector *)local_158._8_8_ != (FMRSWRecursiveAccessDetector *)0x0)) {
    (**(code **)*(atomic<unsigned___int64> *)local_158._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)(local_158 + 8),0,0,0x10);
    local_148 = 0;
  }
  if (local_128 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_12c,uStack_130),
               (FDestructionSentinel *)&local_138);
  }
  if ((FMRSWRecursiveAccessDetector *)local_158._8_8_ != (FMRSWRecursiveAccessDetector *)0x0) {
    FMemory::Free((void *)local_158._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_158);
  UDS_EffectManager::PlayEffect((FDS_EffectSpawnInfo *)local_f8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(local_f8 + 0xc0),
             (FWriteAccessScope *)local_158);
  if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_148._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_158._8_8_,(FDestructionSentinel *)local_158);
  }
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_f8 + 0xc0));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_f8._184_8_);
  if ((FScriptContainerElement *)local_f8._24_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_f8._24_8_);
  }
  return;
}

// PreventSinkOnSwimmingEnter @ 14b84b730

void __thiscall
UDS_ToggleSkillMoveAbility::PreventSinkOnSwimmingEnter(UDS_ToggleSkillMoveAbility *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UObject *pUVar4;
  UDS_MovementCore *this_00;
  longlong *this_01;
  FWeakObjectPtr local_res8 [4];
  TVector<double> local_28;
  
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UDS_SkillData::GetData
            ((ulong64)local_res8,this->_padding_,SUB41(*(undefined4 *)&pUVar4[2].field_0x8,0));
  bVar2 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar2) {
    pUVar4 = FWeakObjectPtr::Get(local_res8);
    if (pUVar4[9].field_0x11 != '\0') {
      this_01 = &this->_padding_;
      pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01);
      iVar3 = (**(code **)(*(longlong *)pUVar4 + 0x438))(pUVar4);
      if (iVar3 == 4) {
        this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_01);
        UDS_MovementCore::GetVelocity(this_00,&local_28);
        local_28.field0_0x0._s_0.Z = 0.0;
        pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01);
        (**(code **)(*(longlong *)pUVar4 + 0x398))(pUVar4,&local_28);
      }
    }
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<490898526956421337>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_ToggleSkillMoveAbility.cpp"
                       ,0xd9,"skillData.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

