// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 21

// StaticClass @ 14b6ef170

UClass * __cdecl UDS_VM_SwimSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_SwimSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_SwimSlot",
               &Z_Registration_Info_UClass_UDS_VM_SwimSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_SwimSlot,0x3c8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_VM_SwimSlot>,InternalVTableHelperCtorCaller<UDS_VM_SwimSlot>
               ,local_res8,UDS_VM_W_CommonSkillSlot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_SwimSlot.InnerSingleton;
}

// UDS_VM_SwimSlot @ 14b6f2310

UDS_VM_SwimSlot * __thiscall
UDS_VM_SwimSlot::UDS_VM_SwimSlot(UDS_VM_SwimSlot *this,FVTableHelper *param_1)

{
  UDS_VM_W_CommonSkillSlot::UDS_VM_W_CommonSkillSlot((UDS_VM_W_CommonSkillSlot *)this,param_1);
  this->SwimStep = Max;
  this->SwimAbilityTagType = None;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_SwimSlot__6B_;
  (this->VM_Cooldown).field0_0x0.DebugPtr = (UDS_VM_Progress *)0x0;
  (this->VM_AvailableTime).field0_0x0.DebugPtr = (UDS_VM_Progress *)0x0;
  (this->SwimAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  this->KeyActionType = None;
  return this;
}

// UDS_VM_SwimSlot @ 14b6f2380

UDS_VM_SwimSlot * __thiscall
UDS_VM_SwimSlot::UDS_VM_SwimSlot(UDS_VM_SwimSlot *this,FObjectInitializer *param_1)

{
  UDS_VM_W_CommonSkillSlot::UDS_VM_W_CommonSkillSlot((UDS_VM_W_CommonSkillSlot *)this,param_1);
  this->SwimStep = Max;
  this->SwimAbilityTagType = None;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_SwimSlot__6B_;
  (this->VM_Cooldown).field0_0x0.DebugPtr = (UDS_VM_Progress *)0x0;
  (this->VM_AvailableTime).field0_0x0.DebugPtr = (UDS_VM_Progress *)0x0;
  (this->SwimAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  this->KeyActionType = None;
  return this;
}

// ~UDS_VM_SwimSlot @ 14b6f4210

void __thiscall UDS_VM_SwimSlot::~UDS_VM_SwimSlot(UDS_VM_SwimSlot *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_SwimSlot__6B_;
  UDS_VM_W_CommonSkillSlot::~UDS_VM_W_CommonSkillSlot((UDS_VM_W_CommonSkillSlot *)this);
  return;
}

// GetPrivateStaticClass @ 14b6f7420

UClass * __cdecl UDS_VM_SwimSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_SwimSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_SwimSlot",
               &Z_Registration_Info_UClass_UDS_VM_SwimSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_SwimSlot,0x3c8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_VM_SwimSlot>,InternalVTableHelperCtorCaller<UDS_VM_SwimSlot>
               ,local_res8,UDS_VM_W_CommonSkillSlot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_SwimSlot.InnerSingleton;
}

// GetTickableTickType @ 14b6f8320

ETickableTickType __thiscall UDS_VM_SwimSlot::GetTickableTickType(UDS_VM_SwimSlot *this)

{
  return Conditional;
}

// IsUpdate @ 14b6f8360

bool __thiscall UDS_VM_SwimSlot::IsUpdate(UDS_VM_SwimSlot *this)

{
  return true;
}

// StaticRegisterNativesUDS_VM_SwimSlot @ 14b6f83a0

void __cdecl UDS_VM_SwimSlot::StaticRegisterNativesUDS_VM_SwimSlot(void)

{
  return;
}

// BindModel @ 14bf42130

void __thiscall UDS_VM_SwimSlot::BindModel(UDS_VM_SwimSlot *this)

{
  UDS_InputEvent *pUVar1;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *pTVar2;
  UDS_SwimEvent *pUVar3;
  
  UDS_VM_W_CommonSkillSlot::BindModel((UDS_VM_W_CommonSkillSlot *)this);
  pUVar1 = UDS_InputEvent::GetEvent();
  if (pUVar1 != (UDS_InputEvent *)0x0) {
    pTVar2 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             TMapBase<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>_>
             ::FindOrAddImpl<enum_EDS_KeyActionType_const_&>
                       (&(pUVar1->OnInputEvent).Subscriptions,this->KeyActionType,
                        &this->KeyActionType);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar2,this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
    ::AddUObject<UDS_VM_SwimSlot>(pTVar2,(UDS_VM_SwimSlot *)&stack0x00000010,(pmf_24ed5344 *)this);
  }
  pUVar3 = UDS_SwimEvent::GetEvent();
  if (pUVar3 != (UDS_SwimEvent *)0x0) {
    pTVar2 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             TMapBase<enum_EDS_SwimStep_const_,TMulticastDelegate<void___cdecl(FDS_SwimStepInfo_const_&),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_SwimStep_const_,TMulticastDelegate<void___cdecl(FDS_SwimStepInfo_const_&),FDefaultTSDelegateUserPolicy>,0>_>
             ::FindOrAddImpl<enum_EDS_SwimStep_const_&>
                       (&(pUVar3->OnChangedSwimStep_Filtered).Subscriptions,(uint)this->SwimStep,
                        &this->SwimStep);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar2,this);
    TMulticastDelegateRegistration<void___cdecl(FDS_SwimStepInfo_const_&),FDefaultTSDelegateUserPolicy>
    ::AddUObject<UDS_VM_SwimSlot>
              ((TMulticastDelegateRegistration<void___cdecl(FDS_SwimStepInfo_const_&),FDefaultTSDelegateUserPolicy>
                *)pTVar2,(UDS_VM_SwimSlot *)&stack0x00000010,(pmf_74527134 *)this);
  }
  return;
}

// InitViewModel @ 14bf5b8e0

void __thiscall UDS_VM_SwimSlot::InitViewModel(UDS_VM_SwimSlot *this)

{
  bool bVar1;
  UDS_VM_Progress *pUVar2;
  UDS_VM_InputKey *pUVar3;
  TWeakObjectPtr<UDS_SwimAbilityData,FWeakObjectPtr> TVar4;
  UDS_VM_StackSkillCount *pUVar5;
  ulong64 local_res10;
  ulong64 local_res18;
  
  UDS_VM_W_CommonSkillSlot::InitViewModel((UDS_VM_W_CommonSkillSlot *)this);
  if ((this->VM_Cooldown).field0_0x0.DebugPtr == (UDS_VM_Progress *)0x0) {
    pUVar2 = UDS_ViewModelBase::CreateViewModel<UDS_VM_Progress>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UDS_VM_Progress *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (this->VM_Cooldown).field0_0x0.DebugPtr = pUVar2;
  }
  if ((this->VM_AvailableTime).field0_0x0.DebugPtr == (UDS_VM_Progress *)0x0) {
    pUVar2 = UDS_ViewModelBase::CreateViewModel<UDS_VM_Progress>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UDS_VM_Progress *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (this->VM_AvailableTime).field0_0x0.DebugPtr = pUVar2;
  }
  if (this->_padding_ == 0) {
    pUVar3 = UDS_ViewModelBase::CreateViewModel<UDS_VM_InputKey>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UDS_VM_InputKey *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    this->_padding_ = (longlong)pUVar3;
  }
  bVar1 = FWeakObjectPtr::IsValid(&(this->SwimAbilityData).WeakPtr);
  if (!bVar1) {
    local_res10 = UDS_PlayerData::GetMainPlayerCurrentEntityID();
    TVar4 = UDS_AbilityDataSet::GetAbilityData<UDS_SwimAbilityData>
                      (&local_res18,(EDS_AbilityTagType *)&local_res10);
                    /* WARNING: Load size is inaccurate */
    (this->SwimAbilityData).WeakPtr = *TVar4.WeakPtr;
  }
  if (this->_padding_ == 0) {
    pUVar5 = UDS_ViewModelBase::CreateViewModel<UDS_VM_StackSkillCount>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_StackSkillCount *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    this->_padding_ = (longlong)pUVar5;
  }
  if (this->_padding_ == 0) {
    pUVar5 = UDS_ViewModelBase::CreateViewModel<UDS_VM_StackSkillCount>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_StackSkillCount *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    this->_padding_ = (longlong)pUVar5;
  }
  return;
}

// OnChangedSwimStep @ 14bf60ea0

void __thiscall UDS_VM_SwimSlot::OnChangedSwimStep(UDS_VM_SwimSlot *this,FDS_SwimStepInfo *param_1)

{
  code *pcVar1;
  bool bVar2;
  ESlateVisibility EVar3;
  float fVar4;
  float fVar5;
  
  if (param_1->SwimStep != this->SwimStep) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8993936885357215464>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Swim\\DS_VM_SwimSlot.cpp"
                       ,0x118,"InSwimStepInfo.SwimStep == SwimStep");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1->IsToggleSkill == true) {
    EVar3 = Collapsed;
    if (param_1->IsActive != false) {
      EVar3 = SelfHitTestInvisible;
    }
    UDS_VM_W_CommonSkillSlot::SetVis_ToggleSkill((UDS_VM_W_CommonSkillSlot *)this,EVar3);
  }
  RefreshCoolDownProgress(this,param_1);
  if ((this->VM_AvailableTime).field0_0x0.DebugPtr != (UDS_VM_Progress *)0x0) {
    fVar5 = 0.0;
    if (param_1->IsActive == true) {
      fVar5 = param_1->Duration;
      fVar4 = FDS_SwimStepInfo::GetElapsedTimeSinceStepStart(param_1);
      fVar5 = fVar5 - fVar4;
    }
    UDS_VM_Progress::SetIncreaseType((this->VM_AvailableTime).field0_0x0.DebugPtr,DeltaTime);
    UDS_VM_Progress::SetMaxValue((this->VM_AvailableTime).field0_0x0.DebugPtr,param_1->Duration);
    UDS_VM_Progress::SetTargetValue((this->VM_AvailableTime).field0_0x0.DebugPtr,0.0);
    UDS_VM_Progress::SetCurrentValue((this->VM_AvailableTime).field0_0x0.DebugPtr,fVar5);
  }
  return;
}

// OnClickSkillSlot @ 14bf62940

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

void __thiscall UDS_VM_SwimSlot::OnClickSkillSlot(UDS_VM_SwimSlot *this)

{
  code *pcVar1;
  bool bVar2;
  FDS_EntityBase *this_00;
  UDS_SwimAbilityData *this_01;
  FDS_SwimStepInfo *pFVar3;
  EDS_AbilityDeactivateType local_res8 [8];
  undefined8 local_res10;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->SwimAbilityData).WeakPtr);
  if ((bVar2) && (this->SwimAbilityTagType != None)) {
    this_00 = FDS_EntityBase::GetMainPlayerEntityBase(true);
    if (this_00 == (FDS_EntityBase *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8993936885357215498>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Swim\\DS_VM_SwimSlot.cpp"
                         ,0xf6,"mainPlayerEntity");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      this_01 = (UDS_SwimAbilityData *)FWeakObjectPtr::Get(&(this->SwimAbilityData).WeakPtr);
      pFVar3 = UDS_SwimAbilityData::GetSwimStepInfo(this_01,this->SwimStep);
      if ((pFVar3->IsToggleSkill == true) && (pFVar3->IsActive == true)) {
        local_res8[0] = Success;
        FDS_EntityBase::DeactivateAbility(this_00,&this->SwimAbilityTagType,local_res8);
        return;
      }
      local_res10 = 0;
      FDS_EntityBase::TryActivateAbility
                (this_00,&this->SwimAbilityTagType,(TObjectPtr<UWN_AbilityContext>)&local_res10);
    }
  }
  return;
}

// OnCloseInit @ 14bf63570

void __thiscall UDS_VM_SwimSlot::OnCloseInit(UDS_VM_SwimSlot *this)

{
  UDS_VM_W_CommonSkillSlot::OnCloseInit((UDS_VM_W_CommonSkillSlot *)this);
  (this->VM_Cooldown).field0_0x0.DebugPtr = (UDS_VM_Progress *)0x0;
  (this->VM_AvailableTime).field0_0x0.DebugPtr = (UDS_VM_Progress *)0x0;
  return;
}

// OnInputEvent @ 14bf642b0

void __thiscall
UDS_VM_SwimSlot::OnInputEvent
          (UDS_VM_SwimSlot *this,EDS_KeyActionType param_1,ETriggerEvent param_2,
          FInputActionValue *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 != this->KeyActionType) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8993936885357215476>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Swim\\DS_VM_SwimSlot.cpp"
                       ,0x10c,"InActionType == KeyActionType");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 == Started) {
    (**(code **)(this->_padding_ + 0x330))(this);
  }
  return;
}

// OnSetViewModel @ 14bf6e240

void __thiscall
UDS_VM_SwimSlot::OnSetViewModel(UDS_VM_SwimSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  EDS_KeyActionType EVar1;
  UDS_ViewModelBase *this_00;
  UDS_VM_StackSkillCount *pUVar2;
  code *pcVar3;
  FDS_ViewModelContext_InputKey *pFVar4;
  bool bVar5;
  UDS_SwimAbilityData *this_01;
  FDS_SwimStepInfo *pFVar6;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  undefined8 local_res20;
  undefined8 local_88;
  TSharedPtr<FDS_ViewModelContext_SwimSlot,1> local_80;
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
  SafeCast<FDS_ViewModelContext_SwimSlot>(&local_80,&local_48);
  if (local_80.Object == (FDS_ViewModelContext_SwimSlot *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8993936885357215673>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Swim\\DS_VM_SwimSlot.cpp"
                       ,0x47,"context");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_80.SharedReferenceCount.ReferenceController);
  }
  else {
    UDS_VM_W_CommonSkillSlot::SetIsSkillExist((UDS_VM_W_CommonSkillSlot *)this,false);
    bVar5 = FWeakObjectPtr::IsValid(&(this->SwimAbilityData).WeakPtr);
    if (bVar5) {
      this->SwimStep = (local_80.Object)->SwimStep;
      this_01 = (UDS_SwimAbilityData *)FWeakObjectPtr::Get(&(this->SwimAbilityData).WeakPtr);
      pFVar6 = UDS_SwimAbilityData::GetSwimStepInfo(this_01,this->SwimStep);
      this->KeyActionType = pFVar6->KeyActionType;
      this->SwimAbilityTagType = pFVar6->SwimAbilityTagType;
      UDS_VM_W_CommonSkillSlot::SetIcon((UDS_VM_W_CommonSkillSlot *)this,pFVar6->IconID);
      EVar1 = pFVar6->KeyActionType;
      if (this->_padding_ == 0) {
        UDS_VM_W_CommonSkillSlot::SetVis_InputKey((UDS_VM_W_CommonSkillSlot *)this,Collapsed);
      }
      else {
        MakeContext<FDS_ViewModelContext_InputKey>(&local_68);
        pFVar4 = local_68.Object;
        if (local_68.Object == (FDS_ViewModelContext_InputKey *)0x0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        *(undefined4 *)&pFVar4->_padding_ = 0x15d;
        pFVar4->KeyActionType = EVar1;
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
      OnChangedSwimStep(this,pFVar6);
      UDS_VM_W_CommonSkillSlot::SetIsSkillExist((UDS_VM_W_CommonSkillSlot *)this,true);
      pUVar2 = (UDS_VM_StackSkillCount *)this->_padding_;
      if (pUVar2 != (UDS_VM_StackSkillCount *)0x0) {
        local_res10.ObjectIndex = 0;
        local_res10.ObjectSerialNumber = 0;
        local_res20 = 0;
        FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res20);
        UDS_VM_StackSkillCount::UpdateStackCount
                  (pUVar2,(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>)local_res10);
      }
      pUVar2 = (UDS_VM_StackSkillCount *)this->_padding_;
      if (pUVar2 != (UDS_VM_StackSkillCount *)0x0) {
        local_res18.ObjectIndex = 0;
        local_res18.ObjectSerialNumber = 0;
        local_88 = 0;
        FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_88);
        UDS_VM_StackSkillCount::UpdateStackCount
                  (pUVar2,(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>)local_res18);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_80.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdate @ 14bf72470

void __thiscall UDS_VM_SwimSlot::OnUpdate(UDS_VM_SwimSlot *this,float param_1)

{
  UDS_VM_Progress *pUVar1;
  bool bVar2;
  float fVar3;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->SwimAbilityData).WeakPtr);
  if (bVar2) {
    pUVar1 = (this->VM_Cooldown).field0_0x0.DebugPtr;
    if (pUVar1 != (UDS_VM_Progress *)0x0) {
      bVar2 = UDS_VM_Progress::GetIsUpdateCurrentValue(pUVar1);
      if (bVar2) {
        UDS_VM_W_CommonSkillSlot::SetVis_CooldownProgress
                  ((UDS_VM_W_CommonSkillSlot *)this,SelfHitTestInvisible);
        fVar3 = UDS_VM_Progress::GetCurrentPercent((this->VM_Cooldown).field0_0x0.DebugPtr);
        UDS_VM_W_CommonSkillSlot::SetCooldownProgressRatio((UDS_VM_W_CommonSkillSlot *)this,fVar3);
        fVar3 = UDS_VM_Progress::GetCurrentValue((this->VM_Cooldown).field0_0x0.DebugPtr);
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

// RefreshActivationProgress @ 14bf75200

void __thiscall
UDS_VM_SwimSlot::RefreshActivationProgress(UDS_VM_SwimSlot *this,FDS_SwimStepInfo *param_1)

{
  float fVar1;
  float fVar2;
  
  if ((this->VM_AvailableTime).field0_0x0.DebugPtr != (UDS_VM_Progress *)0x0) {
    fVar2 = 0.0;
    if (param_1->IsActive == true) {
      fVar2 = param_1->Duration;
      fVar1 = FDS_SwimStepInfo::GetElapsedTimeSinceStepStart(param_1);
      fVar2 = fVar2 - fVar1;
    }
    UDS_VM_Progress::SetIncreaseType((this->VM_AvailableTime).field0_0x0.DebugPtr,DeltaTime);
    UDS_VM_Progress::SetMaxValue((this->VM_AvailableTime).field0_0x0.DebugPtr,param_1->Duration);
    UDS_VM_Progress::SetTargetValue((this->VM_AvailableTime).field0_0x0.DebugPtr,0.0);
    UDS_VM_Progress::SetCurrentValue((this->VM_AvailableTime).field0_0x0.DebugPtr,fVar2);
  }
  return;
}

// RefreshCoolDownProgress @ 14bf75450

void __thiscall
UDS_VM_SwimSlot::RefreshCoolDownProgress(UDS_VM_SwimSlot *this,FDS_SwimStepInfo *param_1)

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
    fVar2 = FDS_SwimStepInfo::GetRemainCoolTime(param_1);
    UDS_VM_Progress::SetCurrentValue((this->VM_Cooldown).field0_0x0.DebugPtr,fVar1 - fVar2);
  }
  return;
}

// RefreshInputKeyPosition @ 14bf758e0

void __thiscall
UDS_VM_SwimSlot::RefreshInputKeyPosition(UDS_VM_SwimSlot *this,EDS_KeyActionType param_1)

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

// RefreshView @ 14bf78ca0

void __thiscall UDS_VM_SwimSlot::RefreshView(UDS_VM_SwimSlot *this,FDS_SwimStepInfo *param_1)

{
  EDS_KeyActionType EVar1;
  UDS_ViewModelBase *this_00;
  code *pcVar2;
  FDS_ViewModelContext_InputKey *pFVar3;
  bool bVar4;
  TSharedPtr<FDS_ViewModelContext_InputKey,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  UDS_VM_W_CommonSkillSlot::SetIcon((UDS_VM_W_CommonSkillSlot *)this,param_1->IconID);
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
  return;
}

// UnbindModel @ 14bf856d0

void __thiscall UDS_VM_SwimSlot::UnbindModel(UDS_VM_SwimSlot *this)

{
  UDS_InputEvent *pUVar1;
  UDS_SwimEvent *pUVar2;
  
  UDS_VM_W_CommonSkillSlot::UnbindModel((UDS_VM_W_CommonSkillSlot *)this);
  pUVar1 = UDS_InputEvent::GetEvent();
  if (pUVar1 != (UDS_InputEvent *)0x0) {
    FDS_FilteredEventDelegate<enum_EDS_KeyActionType_const_,enum_EDS_KeyActionType_const_,enum_ETriggerEvent_const_,FInputActionValue_const_&>
    ::Remove<UDS_VM_SwimSlot>(&pUVar1->OnInputEvent,this);
  }
  pUVar2 = UDS_SwimEvent::GetEvent();
  if (pUVar2 != (UDS_SwimEvent *)0x0) {
    FDS_FilteredEventDelegate<enum_EDS_SwimStep_const_,FDS_SwimStepInfo_const_&>::
    Remove<UDS_VM_SwimSlot>(&pUVar2->OnChangedSwimStep_Filtered,this);
    return;
  }
  return;
}

