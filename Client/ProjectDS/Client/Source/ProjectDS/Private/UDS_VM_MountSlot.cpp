// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 23

// StaticClass @ 14b6a08b0

UClass * __cdecl UDS_VM_MountSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_MountSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_MountSlot",
               &Z_Registration_Info_UClass_UDS_VM_MountSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_MountSlot,0x3c8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_MountSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_MountSlot>,local_res8,
               UDS_VM_W_CommonSkillSlot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_MountSlot.InnerSingleton;
}

// UDS_VM_MountSlot @ 14b6a5870

UDS_VM_MountSlot * __thiscall
UDS_VM_MountSlot::UDS_VM_MountSlot(UDS_VM_MountSlot *this,FVTableHelper *param_1)

{
  UDS_VM_W_CommonSkillSlot::UDS_VM_W_CommonSkillSlot((UDS_VM_W_CommonSkillSlot *)this,param_1);
  this->MountStep = Max;
  this->MountAbilityTagType = None;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_MountSlot__6B_;
  (this->VM_Cooldown).field0_0x0.DebugPtr = (UDS_VM_Progress *)0x0;
  (this->VM_AvailableTime).field0_0x0.DebugPtr = (UDS_VM_Progress *)0x0;
  (this->MountAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  this->KeyActionType = None;
  return this;
}

// UDS_VM_MountSlot @ 14b6a58e0

UDS_VM_MountSlot * __thiscall
UDS_VM_MountSlot::UDS_VM_MountSlot(UDS_VM_MountSlot *this,FObjectInitializer *param_1)

{
  UDS_VM_W_CommonSkillSlot::UDS_VM_W_CommonSkillSlot((UDS_VM_W_CommonSkillSlot *)this,param_1);
  this->MountStep = Max;
  this->MountAbilityTagType = None;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_MountSlot__6B_;
  (this->VM_Cooldown).field0_0x0.DebugPtr = (UDS_VM_Progress *)0x0;
  (this->VM_AvailableTime).field0_0x0.DebugPtr = (UDS_VM_Progress *)0x0;
  (this->MountAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  this->KeyActionType = None;
  return this;
}

// ~UDS_VM_MountSlot @ 14b6a73f0

void __thiscall UDS_VM_MountSlot::~UDS_VM_MountSlot(UDS_VM_MountSlot *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_MountSlot__6B_;
  UDS_VM_W_CommonSkillSlot::~UDS_VM_W_CommonSkillSlot((UDS_VM_W_CommonSkillSlot *)this);
  return;
}

// GetPrivateStaticClass @ 14b6aa4c0

UClass * __cdecl UDS_VM_MountSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_MountSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_MountSlot",
               &Z_Registration_Info_UClass_UDS_VM_MountSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_MountSlot,0x3c8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_MountSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_MountSlot>,local_res8,
               UDS_VM_W_CommonSkillSlot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_MountSlot.InnerSingleton;
}

// GetTickableTickType @ 14b6aab80

ETickableTickType __thiscall UDS_VM_MountSlot::GetTickableTickType(UDS_VM_MountSlot *this)

{
  return Conditional;
}

// IsUpdate @ 14b6aabc0

bool __thiscall UDS_VM_MountSlot::IsUpdate(UDS_VM_MountSlot *this)

{
  return true;
}

// StaticRegisterNativesUDS_VM_MountSlot @ 14b6aad50

void __cdecl UDS_VM_MountSlot::StaticRegisterNativesUDS_VM_MountSlot(void)

{
  return;
}

// BindModel @ 14bed83f0

void __thiscall UDS_VM_MountSlot::BindModel(UDS_VM_MountSlot *this)

{
  EDS_MountStep EVar1;
  EDS_KeyActionType EVar2;
  UDS_InputEvent *pUVar3;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *pTVar4;
  UDS_MountEvent *pUVar5;
  
  UDS_VM_W_CommonSkillSlot::BindModel((UDS_VM_W_CommonSkillSlot *)this);
  pUVar3 = UDS_InputEvent::GetEvent();
  if (pUVar3 != (UDS_InputEvent *)0x0) {
    FDS_FilteredEventDelegate<enum_EDS_KeyActionType_const_,enum_EDS_KeyActionType_const_,enum_ETriggerEvent_const_,FInputActionValue_const_&>
    ::Remove<UDS_VM_MountSlot>(&pUVar3->OnInputEvent,this);
    EVar2 = this->KeyActionType;
    if (EVar2 != None) {
      pTVar4 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               TMapBase<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>_>
               ::FindOrAddImpl<enum_EDS_KeyActionType_const_&>
                         (&(pUVar3->OnInputEvent).Subscriptions,EVar2,&this->KeyActionType);
      TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar4,this);
      TMulticastDelegateRegistration<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
      ::AddUObject<UDS_VM_MountSlot>
                (pTVar4,(UDS_VM_MountSlot *)&stack0x00000010,(pmf_7424b073 *)this);
    }
  }
  pUVar5 = UDS_MountEvent::GetEvent();
  if (pUVar5 != (UDS_MountEvent *)0x0) {
    FDS_FilteredEventDelegate<enum_EDS_MountStep_const_,FDS_MountStepInfo_const_&>::
    Remove<UDS_VM_MountSlot>(&pUVar5->OnChangedMountStep_Filtered,this);
    EVar1 = this->MountStep;
    if (EVar1 != Max) {
      pTVar4 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               TMapBase<enum_EDS_MountStep_const_,TMulticastDelegate<void___cdecl(FDS_MountStepInfo_const_&),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_MountStep_const_,TMulticastDelegate<void___cdecl(FDS_MountStepInfo_const_&),FDefaultTSDelegateUserPolicy>,0>_>
               ::FindOrAddImpl<enum_EDS_MountStep_const_&>
                         (&(pUVar5->OnChangedMountStep_Filtered).Subscriptions,(uint)EVar1,
                          &this->MountStep);
      TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar4,this);
      TMulticastDelegateRegistration<void___cdecl(FDS_MountStepInfo_const_&),FDefaultTSDelegateUserPolicy>
      ::AddUObject<UDS_VM_MountSlot>
                ((TMulticastDelegateRegistration<void___cdecl(FDS_MountStepInfo_const_&),FDefaultTSDelegateUserPolicy>
                  *)pTVar4,(UDS_VM_MountSlot *)&stack0x00000010,(pmf_df23981c *)this);
    }
  }
  return;
}

// InitViewModel @ 14bef3320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_MountSlot::InitViewModel(UDS_VM_MountSlot *this)

{
  FName FVar1;
  FName FVar2;
  bool bVar3;
  UDS_VM_Progress *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr> TVar8;
  longlong *plVar9;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  FName local_b0;
  ulong64 local_a8 [2];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  UDS_VM_W_CommonSkillSlot::InitViewModel((UDS_VM_W_CommonSkillSlot *)this);
  if ((this->VM_Cooldown).field0_0x0.DebugPtr == (UDS_VM_Progress *)0x0) {
    pUVar4 = UDS_ViewModelBase::CreateViewModel<UDS_VM_Progress>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UDS_VM_Progress *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->VM_Cooldown).field0_0x0.DebugPtr = pUVar4;
  }
  if ((this->VM_AvailableTime).field0_0x0.DebugPtr == (UDS_VM_Progress *)0x0) {
    pUVar4 = UDS_ViewModelBase::CreateViewModel<UDS_VM_Progress>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UDS_VM_Progress *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->VM_AvailableTime).field0_0x0.DebugPtr = pUVar4;
  }
  if (this->_padding_ == 0) {
    local_b0.ComparisonIndex.Value = 0;
    local_b0.Number = 0;
    pUVar5 = Z_Construct_UClass_UDS_VM_InputKey_NoRegister();
    FVar1 = local_b0;
    if (local_b0 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar6 = Z_Construct_UClass_UDS_VM_InputKey_NoRegister();
    CheckIsClassChildOf_Internal(pUVar6,pUVar5);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar5);
    FVar2 = local_b0;
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_b0.ComparisonIndex = FVar1.ComparisonIndex.Value;
    local_b0.Number = FVar1.Number;
    local_98._16_4_ = local_b0.ComparisonIndex.Value;
    local_98._20_4_ = local_b0.Number;
    local_98._24_4_ = RF_Transient;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_b0 = FVar2;
    local_98._8_8_ = this;
    pUVar7 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar9 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar9 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    if (pUVar7 != (UObject *)0x0) {
      pUVar7[3].field_0x14 = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar7);
    }
    this->_padding_ = (longlong)pUVar7;
  }
  bVar3 = FWeakObjectPtr::IsValid(&(this->MountAbilityData).WeakPtr);
  if (!bVar3) {
    local_b8 = 0x4a;
    local_b0 = (FName)UDS_PlayerData::GetMainPlayerCurrentEntityID();
    TVar8 = UDS_AbilityDataSet::GetAbilityData<UDS_MountAbilityData>
                      (local_a8,(EDS_AbilityTagType *)&local_b0);
                    /* WARNING: Load size is inaccurate */
    (this->MountAbilityData).WeakPtr = *TVar8.WeakPtr;
  }
  return;
}

// OnButtonDownSkillSlot @ 14bef77a0

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

void __thiscall UDS_VM_MountSlot::OnButtonDownSkillSlot(UDS_VM_MountSlot *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  FDS_EntityBase *this_00;
  UDS_MountAbilityData *this_01;
  FDS_MountStepInfo *pFVar4;
  undefined8 local_res8;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->MountAbilityData).WeakPtr);
  if (((bVar2) &&
      (pUVar3 = FWeakObjectPtr::Get(&(this->MountAbilityData).WeakPtr),
      *(char *)(pUVar3 + 3) != '\0')) && (this->MountAbilityTagType != None)) {
    this_00 = FDS_EntityBase::GetMainPlayerEntityBase(true);
    if (this_00 == (FDS_EntityBase *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3530813260225839428>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Mount\\DS_VM_MountSlot.cpp"
                         ,0x144,"mainPlayerEntity");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      this_01 = (UDS_MountAbilityData *)FWeakObjectPtr::Get(&(this->MountAbilityData).WeakPtr);
      pFVar4 = UDS_MountAbilityData::GetMountStepInfo(this_01,this->MountStep);
      if (pFVar4->IsEnable != false) {
        local_res8 = 0;
        FDS_EntityBase::TryActivateAbility
                  (this_00,&this->MountAbilityTagType,(TObjectPtr<UWN_AbilityContext>)&local_res8);
      }
    }
  }
  return;
}

// OnButtonUpSkillSlot @ 14bef7890

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

void __thiscall UDS_VM_MountSlot::OnButtonUpSkillSlot(UDS_VM_MountSlot *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  FDS_EntityBase *this_00;
  UDS_MountAbilityData *this_01;
  FDS_MountStepInfo *pFVar4;
  EDS_AbilityDeactivateType local_res8 [8];
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->MountAbilityData).WeakPtr);
  if (((bVar2) &&
      (pUVar3 = FWeakObjectPtr::Get(&(this->MountAbilityData).WeakPtr),
      *(char *)(pUVar3 + 3) != '\0')) && (this->MountAbilityTagType != None)) {
    this_00 = FDS_EntityBase::GetMainPlayerEntityBase(true);
    if (this_00 == (FDS_EntityBase *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3530813260225839461>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Mount\\DS_VM_MountSlot.cpp"
                         ,0x165,"mainPlayerEntity");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      this_01 = (UDS_MountAbilityData *)FWeakObjectPtr::Get(&(this->MountAbilityData).WeakPtr);
      pFVar4 = UDS_MountAbilityData::GetMountStepInfo(this_01,this->MountStep);
      if (pFVar4->IsEnable != false) {
        local_res8[0] = Success;
        FDS_EntityBase::DeactivateAbility(this_00,&this->MountAbilityTagType,local_res8);
      }
    }
  }
  return;
}

// OnChangedMountStep @ 14bef7d90

void __thiscall
UDS_VM_MountSlot::OnChangedMountStep(UDS_VM_MountSlot *this,FDS_MountStepInfo *param_1)

{
  ESlateVisibility EVar1;
  float fVar2;
  float fVar3;
  
  if (param_1->IsToggleSkill == true) {
    EVar1 = Collapsed;
    if (param_1->IsActive != false) {
      EVar1 = SelfHitTestInvisible;
    }
    UDS_VM_W_CommonSkillSlot::SetVis_ToggleSkill((UDS_VM_W_CommonSkillSlot *)this,EVar1);
  }
  UDS_VM_W_CommonSkillSlot::SetIsButtonDisabled
            ((UDS_VM_W_CommonSkillSlot *)this,param_1->IsEnable == false);
  RefreshCoolDownProgress(this,param_1);
  if ((this->VM_AvailableTime).field0_0x0.DebugPtr != (UDS_VM_Progress *)0x0) {
    fVar3 = 0.0;
    if (param_1->IsActive == true) {
      fVar3 = param_1->Duration;
      fVar2 = FDS_MountStepInfo::GetElapsedTimeSinceStepStart(param_1);
      fVar3 = fVar3 - fVar2;
    }
    UDS_VM_Progress::SetIncreaseType((this->VM_AvailableTime).field0_0x0.DebugPtr,DeltaTime);
    UDS_VM_Progress::SetMaxValue((this->VM_AvailableTime).field0_0x0.DebugPtr,param_1->Duration);
    UDS_VM_Progress::SetTargetValue((this->VM_AvailableTime).field0_0x0.DebugPtr,0.0);
    UDS_VM_Progress::SetCurrentValue((this->VM_AvailableTime).field0_0x0.DebugPtr,fVar3);
  }
  return;
}

// OnClickSkillSlot @ 14befb0c0

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

void __thiscall UDS_VM_MountSlot::OnClickSkillSlot(UDS_VM_MountSlot *this)

{
  EDS_MountStep EVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  FDS_EntityBase *this_00;
  UDS_MountAbilityData *this_01;
  FDS_MountStepInfo *this_02;
  EDS_AbilityDeactivateType local_res8 [8];
  undefined8 local_res10;
  
  bVar3 = FWeakObjectPtr::IsValid(&(this->MountAbilityData).WeakPtr);
  if (((bVar3) &&
      (pUVar4 = FWeakObjectPtr::Get(&(this->MountAbilityData).WeakPtr),
      *(char *)(pUVar4 + 3) != '\0')) && (this->MountAbilityTagType != None)) {
    this_00 = FDS_EntityBase::GetMainPlayerEntityBase(true);
    if (this_00 == (FDS_EntityBase *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3530813260225839339>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Mount\\DS_VM_MountSlot.cpp"
                         ,0xeb,"mainPlayerEntity");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      this_01 = (UDS_MountAbilityData *)FWeakObjectPtr::Get(&(this->MountAbilityData).WeakPtr);
      this_02 = UDS_MountAbilityData::GetMountStepInfo(this_01,this->MountStep);
      bVar3 = FDS_MountStepInfo::IsStepPossible(this_02);
      if ((bVar3) && (this_02->IsEnable != false)) {
        EVar1 = this->MountStep;
        if ((EVar1 != DisMount) &&
           ((1 < (byte)(EVar1 - MoveAirDisMount) && (EVar1 != MoveDisMount)))) {
          if ((this_02->IsToggleSkill == true) && (this_02->IsActive == true)) {
            local_res8[0] = Success;
            FDS_EntityBase::DeactivateAbility(this_00,&this->MountAbilityTagType,local_res8);
            return;
          }
          local_res10 = 0;
          FDS_EntityBase::TryActivateAbility
                    (this_00,&this->MountAbilityTagType,(TObjectPtr<UWN_AbilityContext>)&local_res10
                    );
          return;
        }
        FDS_MountService::RequestDisMount();
      }
    }
  }
  return;
}

// OnCloseInit @ 14befbfa0

void __thiscall UDS_VM_MountSlot::OnCloseInit(UDS_VM_MountSlot *this)

{
  UDS_VM_W_CommonSkillSlot::OnCloseInit((UDS_VM_W_CommonSkillSlot *)this);
  (this->VM_Cooldown).field0_0x0.DebugPtr = (UDS_VM_Progress *)0x0;
  (this->VM_AvailableTime).field0_0x0.DebugPtr = (UDS_VM_Progress *)0x0;
  return;
}

// OnInputEvent @ 14befe180

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
UDS_VM_MountSlot::OnInputEvent
          (UDS_VM_MountSlot *this,EDS_KeyActionType param_1,ETriggerEvent param_2,
          FInputActionValue *param_3)

{
  code *pcVar1;
  bool bVar2;
  UDS_MountAbilityData *pUVar3;
  FDS_MountStepInfo *pFVar4;
  UObject *pUVar5;
  FDS_EntityBase *this_00;
  EDS_AbilityDeactivateType local_res10 [8];
  
  if (param_1 != None) {
    if ((param_1 != this->KeyActionType) &&
       (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3530813260225839482>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Mount\\DS_VM_MountSlot.cpp"
                           ,0x17a,"InActionType == KeyActionType"), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar3 = (UDS_MountAbilityData *)FWeakObjectPtr::Get(&(this->MountAbilityData).WeakPtr);
    pFVar4 = UDS_MountAbilityData::GetMountStepInfo(pUVar3,this->MountStep);
    if (param_2 == Started) {
      if (pFVar4->IsPressedSkill != true) {
                    /* WARNING: Could not recover jumptable at 0x00014befe213. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(this->_padding_ + 0x330))(this);
        return;
      }
LAB_14befe2f3:
      OnButtonDownSkillSlot(this);
      return;
    }
    if (param_2 == Completed) {
      if ((((pFVar4->IsPressedSkill == true) &&
           (bVar2 = FWeakObjectPtr::IsValid(&(this->MountAbilityData).WeakPtr), bVar2)) &&
          (pUVar5 = FWeakObjectPtr::Get(&(this->MountAbilityData).WeakPtr),
          *(char *)(pUVar5 + 3) != '\0')) && (this->MountAbilityTagType != None)) {
        this_00 = FDS_EntityBase::GetMainPlayerEntityBase(true);
        if (this_00 == (FDS_EntityBase *)0x0) {
          bVar2 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<3530813260225839461>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Mount\\DS_VM_MountSlot.cpp"
                             ,0x165,"mainPlayerEntity");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        else {
          pUVar3 = (UDS_MountAbilityData *)FWeakObjectPtr::Get(&(this->MountAbilityData).WeakPtr);
          pFVar4 = UDS_MountAbilityData::GetMountStepInfo(pUVar3,this->MountStep);
          if (pFVar4->IsEnable != false) {
            local_res10[0] = Success;
            FDS_EntityBase::DeactivateAbility(this_00,&this->MountAbilityTagType,local_res10);
          }
        }
      }
    }
    else if ((param_2 == Triggered) && (pFVar4->IsPressedSkill == true)) goto LAB_14befe2f3;
  }
  return;
}

// OnSetViewModel @ 14bf066c0

void __thiscall
UDS_VM_MountSlot::OnSetViewModel(UDS_VM_MountSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  EDS_KeyActionType EVar1;
  UDS_ViewModelBase *this_00;
  code *pcVar2;
  FDS_ViewModelContext_InputKey *pFVar3;
  bool bVar4;
  TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr> TVar5;
  UDS_MountAbilityData *this_01;
  FDS_MountStepInfo *pFVar6;
  ESlateVisibility EVar7;
  ulong64 local_res18;
  ulong64 local_res20;
  TSharedPtr<FDS_ViewModelContext_MountSlot,1> local_78;
  TSharedPtr<FDS_ViewModelContext_InputKey,1> local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  
  local_58.Object = param_1->Object;
  local_58.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_VM_W_CommonSkillSlot::OnSetViewModel((UDS_VM_W_CommonSkillSlot *)this,&local_58);
  local_48.Object = param_1->Object;
  local_48.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_MountSlot>(&local_78,&local_48);
  if (local_78.Object == (FDS_ViewModelContext_MountSlot *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3530813260225839222>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Mount\\DS_VM_MountSlot.cpp"
                       ,0x76,"context");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
  }
  else {
    local_res18 = UDS_PlayerData::GetMainPlayerCurrentEntityID();
    TVar5 = UDS_AbilityDataSet::GetAbilityData<UDS_MountAbilityData>
                      (&local_res20,(EDS_AbilityTagType *)&local_res18);
                    /* WARNING: Load size is inaccurate */
    (this->MountAbilityData).WeakPtr = *TVar5.WeakPtr;
    bVar4 = FWeakObjectPtr::IsValid(&(this->MountAbilityData).WeakPtr);
    if (bVar4) {
      this->MountStep = (local_78.Object)->MountStep;
      this_01 = (UDS_MountAbilityData *)FWeakObjectPtr::Get(&(this->MountAbilityData).WeakPtr);
      pFVar6 = UDS_MountAbilityData::GetMountStepInfo(this_01,this->MountStep);
      this->KeyActionType = pFVar6->KeyActionType;
      this->MountAbilityTagType = pFVar6->MountAbilityTagType;
      UDS_VM_W_CommonSkillSlot::SetIsSkillExist((UDS_VM_W_CommonSkillSlot *)this,true);
      UDS_VM_W_CommonSkillSlot::SetIcon((UDS_VM_W_CommonSkillSlot *)this,pFVar6->IconID);
      UDS_VM_W_CommonSkillSlot::SetIsSkillExist
                ((UDS_VM_W_CommonSkillSlot *)this,pFVar6->IconID != 0);
      EVar1 = pFVar6->KeyActionType;
      if (this->_padding_ == 0) {
        UDS_VM_W_CommonSkillSlot::SetVis_InputKey((UDS_VM_W_CommonSkillSlot *)this,Collapsed);
      }
      else {
        MakeContext<FDS_ViewModelContext_InputKey>(&local_68);
        pFVar3 = local_68.Object;
        if ((local_68.Object == (FDS_ViewModelContext_InputKey *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(undefined4 *)&pFVar3->_padding_ = 0x15d;
        pFVar3->KeyActionType = EVar1;
        UDS_VM_W_CommonSkillSlot::SetVis_InputKey
                  ((UDS_VM_W_CommonSkillSlot *)this,SelfHitTestInvisible);
        this_00 = (UDS_ViewModelBase *)this->_padding_;
        local_38.Object = (FDS_ViewModelContext *)local_68.Object;
        local_38.SharedReferenceCount.ReferenceController =
             local_68.SharedReferenceCount.ReferenceController;
        if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        UDS_ViewModelBase::SetContext(this_00,&local_38);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_68.SharedReferenceCount.ReferenceController);
      }
      RefreshCoolDownProgress(this,pFVar6);
      EVar7 = SelfHitTestInvisible;
      if (this->MountStep == Max) {
        EVar7 = Collapsed;
      }
      UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,EVar7);
      OnChangedMountStep(this,pFVar6);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
    }
    else {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdate @ 14bf0ac00

void __thiscall UDS_VM_MountSlot::OnUpdate(UDS_VM_MountSlot *this,float param_1)

{
  UDS_VM_Progress *pUVar1;
  bool bVar2;
  float fVar3;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->MountAbilityData).WeakPtr);
  if (bVar2) {
    pUVar1 = (this->VM_Cooldown).field0_0x0.DebugPtr;
    if (pUVar1 != (UDS_VM_Progress *)0x0) {
      bVar2 = UDS_VM_Progress::GetIsUpdateCurrentValue(pUVar1);
      if (bVar2) {
        UDS_VM_W_CommonSkillSlot::SetVis_CooldownProgress
                  ((UDS_VM_W_CommonSkillSlot *)this,SelfHitTestInvisible);
        fVar3 = UDS_VM_Progress::GetCurrentPercent((this->VM_Cooldown).field0_0x0.DebugPtr);
        UDS_VM_W_CommonSkillSlot::SetCooldownProgressRatio((UDS_VM_W_CommonSkillSlot *)this,fVar3);
        fVar3 = UDS_VM_Progress::GetRemainValue((this->VM_Cooldown).field0_0x0.DebugPtr);
        UDS_VM_W_CommonSkillSlot::SetCooldownValue((UDS_VM_W_CommonSkillSlot *)this,fVar3);
      }
      else {
        UDS_VM_W_CommonSkillSlot::SetVis_CooldownProgress
                  ((UDS_VM_W_CommonSkillSlot *)this,Collapsed);
      }
    }
    pUVar1 = (this->VM_AvailableTime).field0_0x0.DebugPtr;
    if (pUVar1 != (UDS_VM_Progress *)0x0) {
      bVar2 = UDS_VM_Progress::GetIsUpdateCurrentValue(pUVar1);
      if (bVar2) {
        UDS_VM_W_CommonSkillSlot::SetVis_AvailableProgress
                  ((UDS_VM_W_CommonSkillSlot *)this,SelfHitTestInvisible);
        fVar3 = UDS_VM_Progress::GetCurrentPercent((this->VM_AvailableTime).field0_0x0.DebugPtr);
        UDS_VM_W_CommonSkillSlot::SetAvailableProgressRatio((UDS_VM_W_CommonSkillSlot *)this,fVar3);
        return;
      }
      UDS_VM_W_CommonSkillSlot::SetVis_AvailableProgress((UDS_VM_W_CommonSkillSlot *)this,Collapsed)
      ;
      return;
    }
  }
  return;
}

// RefreshActivationProgress @ 14bf0f1a0

void __thiscall
UDS_VM_MountSlot::RefreshActivationProgress(UDS_VM_MountSlot *this,FDS_MountStepInfo *param_1)

{
  float fVar1;
  float fVar2;
  
  if ((this->VM_AvailableTime).field0_0x0.DebugPtr != (UDS_VM_Progress *)0x0) {
    fVar2 = 0.0;
    if (param_1->IsActive == true) {
      fVar2 = param_1->Duration;
      fVar1 = FDS_MountStepInfo::GetElapsedTimeSinceStepStart(param_1);
      fVar2 = fVar2 - fVar1;
    }
    UDS_VM_Progress::SetIncreaseType((this->VM_AvailableTime).field0_0x0.DebugPtr,DeltaTime);
    UDS_VM_Progress::SetMaxValue((this->VM_AvailableTime).field0_0x0.DebugPtr,param_1->Duration);
    UDS_VM_Progress::SetTargetValue((this->VM_AvailableTime).field0_0x0.DebugPtr,0.0);
    UDS_VM_Progress::SetCurrentValue((this->VM_AvailableTime).field0_0x0.DebugPtr,fVar2);
  }
  return;
}

// RefreshCoolDownProgress @ 14bf0f230

void __thiscall
UDS_VM_MountSlot::RefreshCoolDownProgress(UDS_VM_MountSlot *this,FDS_MountStepInfo *param_1)

{
  float fVar1;
  UDS_VM_Progress *this_00;
  float fVar2;
  
  this_00 = (this->VM_Cooldown).field0_0x0.DebugPtr;
  if (this_00 != (UDS_VM_Progress *)0x0) {
    UDS_VM_Progress::SetIncreaseType(this_00,DeltaTime);
    UDS_VM_Progress::SetMaxValue((this->VM_Cooldown).field0_0x0.DebugPtr,param_1->CoolTime);
    UDS_VM_Progress::SetTargetValue((this->VM_Cooldown).field0_0x0.DebugPtr,param_1->CoolTime);
    fVar1 = param_1->CoolTime;
    fVar2 = FDS_MountStepInfo::GetRemainCoolTime(param_1);
    UDS_VM_Progress::SetCurrentValue((this->VM_Cooldown).field0_0x0.DebugPtr,fVar1 - fVar2);
  }
  return;
}

// RefreshInputKeyPosition @ 14bf0f2c0

void __thiscall
UDS_VM_MountSlot::RefreshInputKeyPosition(UDS_VM_MountSlot *this,EDS_KeyActionType param_1)

{
  UDS_ViewModelBase *this_00;
  code *pcVar1;
  FDS_ViewModelContext_InputKey *pFVar2;
  bool bVar3;
  TSharedPtr<FDS_ViewModelContext_InputKey,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if (this->_padding_ == 0) {
    UDS_VM_W_CommonSkillSlot::SetVis_InputKey((UDS_VM_W_CommonSkillSlot *)this,Collapsed);
    return;
  }
  MakeContext<FDS_ViewModelContext_InputKey>(&local_28);
  pFVar2 = local_28.Object;
  if (local_28.Object == (FDS_ViewModelContext_InputKey *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)&pFVar2->_padding_ = 0x15d;
  pFVar2->KeyActionType = param_1;
  UDS_VM_W_CommonSkillSlot::SetVis_InputKey((UDS_VM_W_CommonSkillSlot *)this,SelfHitTestInvisible);
  this_00 = (UDS_ViewModelBase *)this->_padding_;
  local_18.Object = (FDS_ViewModelContext *)local_28.Object;
  local_18.SharedReferenceCount.ReferenceController =
       local_28.SharedReferenceCount.ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_ViewModelBase::SetContext(this_00,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// RefreshView @ 14bf10360

void __thiscall UDS_VM_MountSlot::RefreshView(UDS_VM_MountSlot *this,FDS_MountStepInfo *param_1)

{
  EDS_KeyActionType EVar1;
  UDS_ViewModelBase *this_00;
  code *pcVar2;
  FDS_ViewModelContext_InputKey *pFVar3;
  bool bVar4;
  ESlateVisibility EVar5;
  TSharedPtr<FDS_ViewModelContext_InputKey,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  UDS_VM_W_CommonSkillSlot::SetIcon((UDS_VM_W_CommonSkillSlot *)this,param_1->IconID);
  UDS_VM_W_CommonSkillSlot::SetIsSkillExist((UDS_VM_W_CommonSkillSlot *)this,param_1->IconID != 0);
  EVar1 = param_1->KeyActionType;
  if (this->_padding_ == 0) {
    UDS_VM_W_CommonSkillSlot::SetVis_InputKey((UDS_VM_W_CommonSkillSlot *)this,Collapsed);
  }
  else {
    MakeContext<FDS_ViewModelContext_InputKey>(&local_28);
    pFVar3 = local_28.Object;
    if (local_28.Object == (FDS_ViewModelContext_InputKey *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(undefined4 *)&pFVar3->_padding_ = 0x15d;
    pFVar3->KeyActionType = EVar1;
    UDS_VM_W_CommonSkillSlot::SetVis_InputKey((UDS_VM_W_CommonSkillSlot *)this,SelfHitTestInvisible)
    ;
    this_00 = (UDS_ViewModelBase *)this->_padding_;
    local_18.Object = (FDS_ViewModelContext *)local_28.Object;
    local_18.SharedReferenceCount.ReferenceController =
         local_28.SharedReferenceCount.ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext(this_00,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  RefreshCoolDownProgress(this,param_1);
  EVar5 = SelfHitTestInvisible;
  if (this->MountStep == Max) {
    EVar5 = Collapsed;
  }
  UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,EVar5);
  return;
}

// UnbindModel @ 14bf1e120

void __thiscall UDS_VM_MountSlot::UnbindModel(UDS_VM_MountSlot *this)

{
  UDS_InputEvent *pUVar1;
  UDS_MountEvent *pUVar2;
  
  UDS_VM_W_CommonSkillSlot::UnbindModel((UDS_VM_W_CommonSkillSlot *)this);
  pUVar1 = UDS_InputEvent::GetEvent();
  if (pUVar1 != (UDS_InputEvent *)0x0) {
    FDS_FilteredEventDelegate<enum_EDS_KeyActionType_const_,enum_EDS_KeyActionType_const_,enum_ETriggerEvent_const_,FInputActionValue_const_&>
    ::Remove<UDS_VM_MountSlot>(&pUVar1->OnInputEvent,this);
  }
  pUVar2 = UDS_MountEvent::GetEvent();
  if (pUVar2 != (UDS_MountEvent *)0x0) {
    FDS_FilteredEventDelegate<enum_EDS_MountStep_const_,FDS_MountStepInfo_const_&>::
    Remove<UDS_VM_MountSlot>(&pUVar2->OnChangedMountStep_Filtered,this);
    return;
  }
  return;
}

