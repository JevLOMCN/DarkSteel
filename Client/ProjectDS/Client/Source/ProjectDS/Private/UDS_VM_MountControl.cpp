// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 32

// SetAnimationFinishEvent_WrapperImpl @ 14b6a0a30

void __cdecl UDS_VM_MountControl::SetAnimationFinishEvent_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined8 *)((longlong)param_1 + 0x160) = 0;
  UDS_ViewModelBase::SetVisibility(param_1,*(ESlateVisibility *)((longlong)param_1 + 0x184));
  return;
}

// StaticClass @ 14b6a0a40

UClass * __cdecl UDS_VM_MountControl::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_MountControl.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_MountControl",
               &Z_Registration_Info_UClass_UDS_VM_MountControl.InnerSingleton,
               StaticRegisterNativesUDS_VM_MountControl,0x198,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_MountControl>,
               InternalVTableHelperCtorCaller<UDS_VM_MountControl>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_MountControl.InnerSingleton;
}

// UDS_VM_MountControl @ 14b6a51f0

UDS_VM_MountControl * __thiscall
UDS_VM_MountControl::UDS_VM_MountControl(UDS_VM_MountControl *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->DesiredVisibilityState = Hidden;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_MountControl__6B_;
  (this->AnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationEvent).AnimationName.Number = 0;
  (this->AnimationEvent).AnimationPlayTime = 0.0;
  (this->AnimationEvent).AnimationEventType = None;
  (this->AnimationEvent).AnimationStateType = None;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->AnimationFinishEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationFinishEvent).AnimationName.Number = 0;
  (this->AnimationFinishEvent).AnimationPlayTime = 0.0;
  (this->AnimationFinishEvent).AnimationEventType = None;
  (this->AnimationFinishEvent).AnimationStateType = None;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->Slot_1).field0_0x0.DebugPtr = (UDS_VM_W_CommonSkillSlot *)0x0;
  (this->Slot_2).field0_0x0.DebugPtr = (UDS_VM_W_CommonSkillSlot *)0x0;
  (this->Slot_3).field0_0x0.DebugPtr = (UDS_VM_W_CommonSkillSlot *)0x0;
  (this->Slot_4).field0_0x0.DebugPtr = (UDS_VM_W_CommonSkillSlot *)0x0;
  (this->Slot_5).field0_0x0.DebugPtr = (UDS_VM_W_CommonSkillSlot *)0x0;
  (this->Slot_6).field0_0x0.DebugPtr = (UDS_VM_W_CommonSkillSlot *)0x0;
  (this->PlayingAnimationName).ComparisonIndex = 0;
  (this->PlayingAnimationName).Number = 0;
  this->CurrentEntityID = 0;
  this->CurrentMountTID = 0;
  (this->CharStateData).WeakPtr.ObjectIndex = 0;
  *(undefined8 *)&(this->CharStateData).WeakPtr.ObjectSerialNumber = 0;
  (this->MountAbilityData).WeakPtr.ObjectSerialNumber = 0;
  (this->CurMountLocationTypeList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurMountLocationTypeList).ArrayNum = 0;
  (this->CurMountLocationTypeList).ArrayMax = 0;
  (this->AnimationEvent).NumberOfLoops = 1;
  (this->AnimationFinishEvent).NumberOfLoops = 1;
  return this;
}

// UDS_VM_MountControl @ 14b6a5320

UDS_VM_MountControl * __thiscall
UDS_VM_MountControl::UDS_VM_MountControl(UDS_VM_MountControl *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->DesiredVisibilityState = Hidden;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_MountControl__6B_;
  (this->AnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationEvent).AnimationName.Number = 0;
  (this->AnimationEvent).AnimationPlayTime = 0.0;
  (this->AnimationEvent).AnimationEventType = None;
  (this->AnimationEvent).AnimationStateType = None;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->AnimationFinishEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationFinishEvent).AnimationName.Number = 0;
  (this->AnimationFinishEvent).AnimationPlayTime = 0.0;
  (this->AnimationFinishEvent).AnimationEventType = None;
  (this->AnimationFinishEvent).AnimationStateType = None;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->Slot_1).field0_0x0.DebugPtr = (UDS_VM_W_CommonSkillSlot *)0x0;
  (this->Slot_2).field0_0x0.DebugPtr = (UDS_VM_W_CommonSkillSlot *)0x0;
  (this->Slot_3).field0_0x0.DebugPtr = (UDS_VM_W_CommonSkillSlot *)0x0;
  (this->Slot_4).field0_0x0.DebugPtr = (UDS_VM_W_CommonSkillSlot *)0x0;
  (this->Slot_5).field0_0x0.DebugPtr = (UDS_VM_W_CommonSkillSlot *)0x0;
  (this->Slot_6).field0_0x0.DebugPtr = (UDS_VM_W_CommonSkillSlot *)0x0;
  (this->PlayingAnimationName).ComparisonIndex = 0;
  (this->PlayingAnimationName).Number = 0;
  this->CurrentEntityID = 0;
  this->CurrentMountTID = 0;
  (this->CharStateData).WeakPtr.ObjectIndex = 0;
  *(undefined8 *)&(this->CharStateData).WeakPtr.ObjectSerialNumber = 0;
  (this->MountAbilityData).WeakPtr.ObjectSerialNumber = 0;
  (this->CurMountLocationTypeList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurMountLocationTypeList).ArrayNum = 0;
  (this->CurMountLocationTypeList).ArrayMax = 0;
  (this->AnimationEvent).NumberOfLoops = 1;
  (this->AnimationFinishEvent).NumberOfLoops = 1;
  return this;
}

// ~UDS_VM_MountControl @ 14b6a7190

void __thiscall UDS_VM_MountControl::~UDS_VM_MountControl(UDS_VM_MountControl *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_MountControl__6B_;
  pFVar1 = (this->CurMountLocationTypeList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationFinishEvent).Delegate_ValidAnimation);
  pvVar2 = *(void **)&(this->AnimationFinishEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationFinishEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationFinishEvent).Delegate_AnimationFinish);
  pvVar2 = *(void **)&(this->AnimationFinishEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationFinishEvent).Delegate_AnimationFinish)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent).Delegate_ValidAnimation);
  pvVar2 = *(void **)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent).Delegate_AnimationFinish);
  pvVar2 = *(void **)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationEvent).Delegate_AnimationFinish);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6a9860

IClassDescriptor * __thiscall
UDS_VM_MountControl::GetFieldNotificationDescriptor(UDS_VM_MountControl *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_MountControl::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6aa1c0

UClass * __cdecl UDS_VM_MountControl::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_MountControl.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_MountControl",
               &Z_Registration_Info_UClass_UDS_VM_MountControl.InnerSingleton,
               StaticRegisterNativesUDS_VM_MountControl,0x198,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_MountControl>,
               InternalVTableHelperCtorCaller<UDS_VM_MountControl>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_MountControl.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_MountControl @ 14b6aac80

void __cdecl UDS_VM_MountControl::StaticRegisterNativesUDS_VM_MountControl(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_MountControl_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnChangedZoneDistrict @ 14b6ac0a0

void __cdecl
UDS_VM_MountControl::execOnChangedZoneDistrict(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uint *puVar2;
  uint local_res10 [2];
  
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar2 = local_res10;
  if ((uint *)param_2->MostRecentPropertyAddress != (uint *)0x0) {
    puVar2 = (uint *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnChangedZoneDistrict((UDS_VM_MountControl *)param_1,puVar2);
  return;
}

// BindCharacterEvent @ 14bed6f20

void __thiscall UDS_VM_MountControl::BindCharacterEvent(UDS_VM_MountControl *this,ulong64 param_1)

{
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *this_00;
  code *pcVar1;
  bool bVar2;
  ESlateVisibility EVar3;
  UObject *pUVar4;
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> TVar5;
  TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr> TVar6;
  ulong64 local_res10;
  FWeakObjectPtr local_res18;
  undefined1 local_res20 [8];
  code *local_a8;
  undefined4 uStack_a0;
  uint uStack_9c;
  FDS_ChangedCharStateInfo local_98;
  undefined1 local_70 [32];
  longlong lStack_50;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  
  this_00 = &this->CharStateData;
  local_res10 = param_1;
  bVar2 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar2) {
    pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4[7].field_0x20,this);
    this_00->WeakPtr = (FWeakObjectPtr)0x0;
  }
  this->CurrentEntityID = param_1;
  TVar5 = UDS_CharStateData::GetData((ulong64)local_res20);
                    /* WARNING: Load size is inaccurate */
  this_00->WeakPtr = *TVar5.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar2) {
    pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4[7].field_0x20,this);
    uStack_a0 = 0;
    local_a8 = OnChangedCharState;
    local_70._16_8_ = (ulonglong)uStack_9c << 0x20;
    local_70._8_8_ = OnChangedCharState;
    pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_MountControl>
              ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
                *)&pUVar4[7].field_0x20,(UDS_VM_MountControl *)local_70,(pmf_9bbf19e8 *)this);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6663495193985024160>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Mount\\DS_VM_MountControl.cpp"
                       ,0xa0,"CharStateData.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TVar6 = UDS_AbilityDataSet::GetAbilityData<UDS_MountAbilityData>
                    ((ulong64 *)&local_a8,(EDS_AbilityTagType *)&local_res10);
  local_98._9_4_ = 0;
  local_98._13_2_ = 0;
                    /* WARNING: Load size is inaccurate */
  (this->MountAbilityData).WeakPtr = *TVar6.WeakPtr;
  local_98.StateTag.TagName = FGameplayTag::EmptyTag.TagName;
  local_98._15_1_ = 0;
  local_98.bIsStateTagOn = false;
  local_98.AddedCharState = None;
  local_98.RemovedCharState = None;
  local_98.AddedCharDetailState = None;
  local_98.RemovedCharDetailState = None;
  EVar3 = GetMountControlVisibility
                    (this,(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>)this_00->WeakPtr,
                     &local_98);
  UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,EVar3);
  local_res18 = this_00->WeakPtr;
  lStack_50 = 0;
  local_70._24_4_ = FGameplayTag::EmptyTag.TagName.ComparisonIndex.Value;
  local_70._28_4_ = FGameplayTag::EmptyTag.TagName.Number;
  local_38 = 0;
  local_48 = 0;
  lStack_40 = 0;
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar2) {
    UpdateCharState(this,(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>)local_res18,
                    (FDS_ChangedCharStateInfo *)(local_70 + 0x18));
  }
  return;
}

// BindModel @ 14bed80a0

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

void __thiscall UDS_VM_MountControl::BindModel(UDS_VM_MountControl *this)

{
  FDS_EventDelegate<EDS_MountFlyUpDownState_const_&> *this_00;
  code *pcVar1;
  bool bVar2;
  UDS_ZoneManager *pUVar3;
  char *pcVar4;
  UObject *this_01;
  UFunction *pUVar5;
  UDS_MountEvent *pUVar6;
  ulong64 uVar7;
  char *pcVar8;
  <lambda_1> local_res10 [8];
  uint local_res18 [2];
  FName local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_108;
  FWeakObjectPtr local_100;
  FName local_f8;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_e8;
  FName local_d8;
  UDS_VM_MountControl *local_d0;
  FName *local_c8 [2];
  undefined1 local_b8 [24];
  FMRSWRecursiveAccessDetector *local_a0;
  char local_98;
  undefined1 local_90 [64];
  FReadAccessScope local_50;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  local_b8._0_8_ = OnMainCharChanged;
  local_b8._8_4_ = 0;
  local_90._16_8_ = (ulonglong)(uint)local_b8._12_4_ << 0x20;
  local_90._8_8_ = OnMainCharChanged;
  TMulticastDelegateRegistration<void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
  ::AddUObject<UDS_VM_MountControl>
            ((TMulticastDelegateRegistration<void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
              *)&ADS_MainCharacter::MainCharacterSwitchCompleteDelegate,
             (UDS_VM_MountControl *)local_90,(pmf_40c576eb *)this);
  pUVar3 = UDS_ZoneManager::GetInst();
  if (pUVar3 == (UDS_ZoneManager *)0x0) goto LAB_14bed8363;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &pUVar3->DistrictIdChangeDelegate,(UObject *)this);
  pcVar4 = strstr("&UDS_VM_MountControl::OnChangedZoneDistrict","::");
  if (pcVar4 == (char *)0x0) {
LAB_14bed817b:
    pcVar8 = &DAT_00000002;
LAB_14bed8180:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    do {
      pcVar8 = pcVar4;
      pcVar4 = strstr(pcVar8 + 1,"::");
    } while (pcVar4 != (char *)0x0);
    if (pcVar8 == (char *)0x0) goto LAB_14bed817b;
    pcVar8 = pcVar8 + 2;
    if (*pcVar8 == '0') goto LAB_14bed8180;
  }
  ::FName::FName(&local_d8,pcVar8);
  if ((this == (UDS_VM_MountControl *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4c8,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_108.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_100.ObjectIndex = 0;
  local_100.ObjectSerialNumber = 0;
  local_f8.ComparisonIndex.Value = 0;
  local_f8.Number = 0;
  local_res20 = local_d8;
  if ((this == (UDS_VM_MountControl *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_d0 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_MountControl *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_100,(FObjectPtr)&local_d0);
  local_f8 = local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_108,(FReadAccessScope *)(local_90 + 0x28));
  if ((local_f8 == (FName)0x0) ||
     (this_01 = FWeakObjectPtr::Get(&local_100), this_01 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_90 + 0x28));
LAB_14bed82b9:
    local_c8[0] = &local_res20;
    `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,unsigned_int_const_&>::
    __Internal_BindDynamic<UDS_VM_MountControl>'::__l2::<lambda_1>::operator()(local_c8);
  }
  else {
    pUVar5 = UObject::FindFunction(this_01,local_f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_90 + 0x28));
    if (pUVar5 == (UFunction *)0x0) goto LAB_14bed82b9;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_108,&local_50);
  local_e8.Object = local_100;
  local_e8.FunctionName = local_f8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_50);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pUVar3->DistrictIdChangeDelegate,(FWriteAccessScope *)(local_b8 + 0x10));
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&(pUVar3->DistrictIdChangeDelegate).field_0x8,local_res10,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &pUVar3->DistrictIdChangeDelegate,&local_e8);
  if (local_98 == '\0') {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              (local_a0,(FDestructionSentinel *)(local_b8 + 0x10));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_108.AccessDetector);
  local_res18[0] = pUVar3->DistrictID;
  OnChangedZoneDistrict(this,local_res18);
LAB_14bed8363:
  pUVar6 = UDS_MountEvent::GetEvent();
  if (pUVar6 != (UDS_MountEvent *)0x0) {
    this_00 = &pUVar6->MountFlyUpDownStateChangeDel;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,this);
    local_e8.FunctionName = (FName)((ulonglong)local_e8.FunctionName & 0xffffffff00000000);
    local_e8.Object = (FWeakObjectPtr)OnChangedMountFlyUpDownState;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,this);
    local_90._24_4_ = local_e8.Object.ObjectIndex;
    local_90._28_4_ = local_e8.Object.ObjectSerialNumber;
    local_90._32_4_ = local_e8.FunctionName.ComparisonIndex.Value;
    local_90._36_4_ = local_e8.FunctionName.Number;
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_MountFlyUpDownState_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_MountControl>(this_00,(UDS_VM_MountControl *)local_b8,(pmf_af98ee4f *)this);
  }
  uVar7 = UDS_PlayerData::GetMainPlayerCurrentEntityID();
  BindCharacterEvent(this,uVar7);
  return;
}

// CreateMountSlotVM @ 14bee44b0

void __thiscall UDS_VM_MountControl::CreateMountSlotVM(UDS_VM_MountControl *this)

{
  UDS_VM_MountSlot *pUVar1;
  
  pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_MountSlot>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_VM_MountSlot *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->Slot_1).field0_0x0.DebugPtr = (UDS_VM_W_CommonSkillSlot *)pUVar1;
  pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_MountSlot>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_VM_MountSlot *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->Slot_2).field0_0x0.DebugPtr = (UDS_VM_W_CommonSkillSlot *)pUVar1;
  pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_MountSlot>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_VM_MountSlot *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->Slot_3).field0_0x0.DebugPtr = (UDS_VM_W_CommonSkillSlot *)pUVar1;
  pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_MountSlot>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_VM_MountSlot *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->Slot_4).field0_0x0.DebugPtr = (UDS_VM_W_CommonSkillSlot *)pUVar1;
  pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_MountSlot>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_VM_MountSlot *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->Slot_5).field0_0x0.DebugPtr = (UDS_VM_W_CommonSkillSlot *)pUVar1;
  pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_MountSlot>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_VM_MountSlot *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->Slot_6).field0_0x0.DebugPtr = (UDS_VM_W_CommonSkillSlot *)pUVar1;
  return;
}

// GetMountControlVisibility @ 14beee610

ESlateVisibility __thiscall
UDS_VM_MountControl::GetMountControlVisibility
          (UDS_VM_MountControl *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
          FDS_ChangedCharStateInfo *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  ESlateVisibility EVar5;
  int iVar6;
  UDS_CharStateData *pUVar7;
  FWeakObjectPtr local_res10;
  EDS_CharState local_res20;
  
  local_res10 = param_1.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar1) {
    return Collapsed;
  }
  pUVar7 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
  local_res20 = Mount;
  bVar1 = UDS_CharStateData::HasCharState(pUVar7,&local_res20);
  pUVar7 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
  local_res20 = AirWalk;
  bVar2 = UDS_CharStateData::HasCharState(pUVar7,&local_res20);
  pUVar7 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
  local_res20._0_4_ = AniCut|ToggleSkill|AutoMove|Shield;
  bVar3 = UDS_CharStateData::HasCharDetailState(pUVar7,(EDS_CharDetailState *)&local_res20);
  pUVar7 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
  local_res20 = CONCAT44(local_res20._4_4_,0x6c);
  bVar4 = UDS_CharStateData::HasCharDetailState(pUVar7,(EDS_CharDetailState *)&local_res20);
  iVar6 = UDS_MountManager::GetMountIdByMainPlayer();
  FDS_MountBaseTableRow::GetRef((longlong)iVar6,true);
  EVar5 = SelfHitTestInvisible;
  if (!bVar1) {
    EVar5 = Collapsed;
  }
  if ((((bVar2) && (!bVar3)) && (!bVar4)) && (param_2->RemovedCharDetailState != Mount_Land)) {
    EVar5 = Collapsed;
  }
  return EVar5;
}

// GetMountStepByCharState @ 14beee730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

EDS_MountStep __thiscall
UDS_VM_MountControl::GetMountStepByCharState
          (UDS_VM_MountControl *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  EDS_MountStep EVar4;
  UDS_CharStateData *pUVar5;
  UObject *pUVar6;
  UDS_LogManager *pUVar7;
  EDS_MountStep EVar8;
  TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr> *this_00;
  FWeakObjectPtr local_res10;
  undefined1 auStackY_188 [32];
  EDS_CharState local_158 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_res10 = param_1.WeakPtr;
  bVar1 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&local_res10,(void *)0x0);
  if (!bVar1) {
    this_00 = &this->MountAbilityData;
    bVar1 = TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
    if (!bVar1) {
      pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
      local_158[0] = Mount;
      bVar1 = UDS_CharStateData::HasCharState(pUVar5,local_158);
      if (!bVar1) {
        return Ready;
      }
      pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
      local_158[0]._0_4_ = AniCut|ToggleSkill|Swim;
      bVar1 = UDS_CharStateData::HasCharDetailState(pUVar5,(EDS_CharDetailState *)local_158);
      if (bVar1) {
        return Ready;
      }
      pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
      local_158[0]._0_4_ = AniCut|ToggleSkill|AutoMove|Shield;
      bVar1 = UDS_CharStateData::HasCharDetailState(pUVar5,(EDS_CharDetailState *)local_158);
      pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
      local_158[0]._0_4_ = ToggleSkill|Shield;
      bVar2 = UDS_CharStateData::HasCharDetailState(pUVar5,(EDS_CharDetailState *)local_158);
      pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
      local_158[0]._0_4_ = AniCut|ToggleSkill|Avoid|AutoMove|Swim;
      bVar3 = UDS_CharStateData::HasCharDetailState(pUVar5,(EDS_CharDetailState *)local_158);
      if (bVar3) {
        pUVar6 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        if (pUVar6[3].field_0x3 == '\x01') {
          return MoveDisMount;
        }
        return DisMount;
      }
      pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
      local_158[0]._0_4_ = AniCut|ToggleSkill|Avoid|Swim;
      bVar3 = UDS_CharStateData::HasCharDetailState(pUVar5,(EDS_CharDetailState *)local_158);
      if (bVar3) {
        pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
        local_158[0] = CONCAT44(local_158[0]._4_4_,0x65);
        bVar1 = UDS_CharStateData::HasCharDetailState(pUVar5,(EDS_CharDetailState *)local_158);
        return bVar1 + MountLeap;
      }
      pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
      local_158[0]._0_4_ = AniCut|ToggleSkill|Avoid|AutoMove;
      bVar3 = UDS_CharStateData::HasCharDetailState(pUVar5,(EDS_CharDetailState *)local_158);
      if (bVar3) {
        pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
        local_158[0] = CONCAT44(local_158[0]._4_4_,0x65);
        bVar1 = UDS_CharStateData::HasCharDetailState(pUVar5,(EDS_CharDetailState *)local_158);
        return bVar1 + MountLand;
      }
      pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
      local_158[0]._0_4_ = AniCut|ToggleSkill|AutoMove;
      bVar3 = UDS_CharStateData::HasCharDetailState(pUVar5,(EDS_CharDetailState *)local_158);
      if (bVar3) {
        return MountOwnAction;
      }
      if (bVar1) {
        pUVar6 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        if (*(int *)(pUVar6 + 7) == 1) {
          pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
          local_158[0] = CONCAT44(local_158[0]._4_4_,0x65);
          bVar1 = UDS_CharStateData::HasCharDetailState(pUVar5,(EDS_CharDetailState *)local_158);
          return bVar1 + MountAscent;
        }
        pUVar6 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        if (*(int *)(pUVar6 + 7) == 2) {
          pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
          local_158[0] = CONCAT44(local_158[0]._4_4_,0x65);
          bVar1 = UDS_CharStateData::HasCharDetailState(pUVar5,(EDS_CharDetailState *)local_158);
          return bVar1 + MountDescent;
        }
      }
      pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
      local_158[0]._0_4_ = AniCut|ToggleSkill|AutoMove|Swim;
      bVar3 = UDS_CharStateData::HasCharDetailState(pUVar5,(EDS_CharDetailState *)local_158);
      if (bVar3) {
        pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
        local_158[0] = CONCAT44(local_158[0]._4_4_,0x1c);
        bVar3 = UDS_CharStateData::HasCharDetailState(pUVar5,(EDS_CharDetailState *)local_158);
        if (bVar3) {
          return MountSprintJump;
        }
        if (bVar2) {
          EVar4 = MountSprintFall;
          EVar8 = MountAirSprintFall;
        }
        else {
          EVar4 = MountSprint;
          EVar8 = MountAirSprint;
        }
      }
      else {
        pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
        local_158[0]._0_4_ = AniCut|ToggleSkill|Shield;
        bVar3 = UDS_CharStateData::HasCharDetailState(pUVar5,(EDS_CharDetailState *)local_158);
        if (bVar3) {
          pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
          local_158[0]._0_4_ = Skill|Avoid|AutoMove;
          bVar3 = UDS_CharStateData::HasCharDetailState(pUVar5,(EDS_CharDetailState *)local_158);
          if (bVar3) {
            return MountJump;
          }
          if (bVar2) {
            return MountFall;
          }
          if (bVar1) {
            return MountAirMove;
          }
          pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
          local_158[0] = CONCAT44(local_158[0]._4_4_,99);
          bVar1 = UDS_CharStateData::HasCharDetailState(pUVar5,(EDS_CharDetailState *)local_158);
          if (bVar1) {
            return MountBackMove;
          }
          return MountMove;
        }
        if (!bVar2) {
          pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
          local_158[0] = CONCAT44(local_158[0]._4_4_,0x67);
          bVar2 = UDS_CharStateData::HasCharDetailState(pUVar5,(EDS_CharDetailState *)local_158);
          if (bVar2) {
            return MountDash;
          }
          if (bVar1) {
            return MountAir;
          }
          return Mount;
        }
        EVar4 = MountFall;
        EVar8 = MountAirFall;
      }
      if (bVar1) {
        return EVar8;
      }
      return EVar4;
    }
  }
  pUVar7 = UDS_LogManager::GetInst();
  if (pUVar7 != (UDS_LogManager *)0x0) {
    pUVar7 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_VM_MountControl::GetMountStepByCharState",0x2c,Yes);
    UDS_LogManager::PrintLog
              (pUVar7,1,Warning,local_148.Ptr,0x166,
               L"InCharStateData || MountAbilityData is nullptr.");
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
  }
  return Ready;
}

// HasAirLocation @ 14bef1180

bool __thiscall UDS_VM_MountControl::HasAirLocation(UDS_VM_MountControl *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->CurMountLocationTypeList).AllocatorInstance.Data;
  iVar2 = (this->CurMountLocationTypeList).ArrayNum;
  pFVar1 = pFVar3 + iVar2;
  while( true ) {
    if ((this->CurMountLocationTypeList).ArrayNum != iVar2) {
      `TCheckedPointerIterator<enum_EDS_MountActionType_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*pFVar3 == (FScriptContainerElement)0x1) {
      return true;
    }
    pFVar3 = pFVar3 + 1;
  }
  return false;
}

// InitViewModel @ 14bef3210

void __thiscall UDS_VM_MountControl::InitViewModel(UDS_VM_MountControl *this)

{
  UDS_VM_MountSlot *pUVar1;
  
  pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_MountSlot>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_VM_MountSlot *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->Slot_1).field0_0x0.DebugPtr = (UDS_VM_W_CommonSkillSlot *)pUVar1;
  pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_MountSlot>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_VM_MountSlot *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->Slot_2).field0_0x0.DebugPtr = (UDS_VM_W_CommonSkillSlot *)pUVar1;
  pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_MountSlot>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_VM_MountSlot *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->Slot_3).field0_0x0.DebugPtr = (UDS_VM_W_CommonSkillSlot *)pUVar1;
  pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_MountSlot>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_VM_MountSlot *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->Slot_4).field0_0x0.DebugPtr = (UDS_VM_W_CommonSkillSlot *)pUVar1;
  pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_MountSlot>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_VM_MountSlot *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->Slot_5).field0_0x0.DebugPtr = (UDS_VM_W_CommonSkillSlot *)pUVar1;
  pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_MountSlot>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_VM_MountSlot *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->Slot_6).field0_0x0.DebugPtr = (UDS_VM_W_CommonSkillSlot *)pUVar1;
  return;
}

// OnAnimationFinished @ 14bef71c0

void __thiscall
UDS_VM_MountControl::OnAnimationFinished
          (UDS_VM_MountControl *this,FDS_WidgetAnimationEventField *param_1)

{
  ESlateVisibility EVar1;
  
  EVar1 = this->DesiredVisibilityState;
  (this->PlayingAnimationName).ComparisonIndex = 0;
  (this->PlayingAnimationName).Number = 0;
  UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,EVar1);
  return;
}

// OnChangedCharState @ 14bef79a0

void __thiscall
UDS_VM_MountControl::OnChangedCharState
          (UDS_VM_MountControl *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
          FDS_ChangedCharStateInfo *param_2)

{
  bool bVar1;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0] = param_1.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    UpdateCharState(this,(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>)local_res10[0],param_2);
  }
  return;
}

// OnChangedMountFlyUpDownState @ 14bef7d10

void __thiscall
UDS_VM_MountControl::OnChangedMountFlyUpDownState
          (UDS_VM_MountControl *this,EDS_MountFlyUpDownState *param_1)

{
  bool bVar1;
  FDS_ChangedCharStateInfo local_38;
  
  bVar1 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                    (&this->CharStateData,(void *)0x0);
  if (!bVar1) {
    local_38._9_4_ = 0;
    local_38._13_2_ = 0;
    local_38._15_1_ = 0;
    local_38.bIsStateTagOn = false;
    local_38.AddedCharState = None;
    local_38.RemovedCharState = None;
    local_38.AddedCharDetailState = None;
    local_38.RemovedCharDetailState = None;
    local_38.StateTag.TagName = FGameplayTag::EmptyTag.TagName;
    UpdateCharState(this,(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>)
                         (this->CharStateData).WeakPtr,&local_38);
  }
  return;
}

// OnChangedSelectedMount @ 14bef83f0

void __thiscall UDS_VM_MountControl::OnChangedSelectedMount(UDS_VM_MountControl *this,int param_1)

{
  bool bVar1;
  FDS_ChangedCharStateInfo local_38;
  
  bVar1 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                    (&this->CharStateData,(void *)0x0);
  if (!bVar1) {
    local_38._9_4_ = 0;
    local_38._13_2_ = 0;
    local_38._15_1_ = 0;
    local_38.bIsStateTagOn = false;
    local_38.AddedCharState = None;
    local_38.RemovedCharState = None;
    local_38.AddedCharDetailState = None;
    local_38.RemovedCharDetailState = None;
    local_38.StateTag.TagName = FGameplayTag::EmptyTag.TagName;
    UpdateCharState(this,(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>)
                         (this->CharStateData).WeakPtr,&local_38);
  }
  return;
}

// OnChangedZoneDistrict @ 14bef8470

void __thiscall UDS_VM_MountControl::OnChangedZoneDistrict(UDS_VM_MountControl *this,uint *param_1)

{
  int *piVar1;
  TArray<EDS_MountActionType,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  FDS_ZoneDistrictTableRow *pFVar4;
  
  pTVar2 = &this->CurMountLocationTypeList;
  piVar1 = &(this->CurMountLocationTypeList).ArrayMax;
  (this->CurMountLocationTypeList).ArrayNum = 0;
  if ((this->CurMountLocationTypeList).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  if (*param_1 != 0) {
    pFVar4 = FDS_ZoneDistrictTableRow::GetRef((ulonglong)*param_1,true);
    if (pTVar2 != &pFVar4->MountLocationType) {
      iVar3 = (pFVar4->MountLocationType).ArrayNum;
      _Src = (pFVar4->MountLocationType).AllocatorInstance.Data;
      (this->CurMountLocationTypeList).ArrayNum = iVar3;
      if ((iVar3 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar3,*piVar1,&pTVar2->AllocatorInstance,iVar3,piVar1);
        if (iVar3 != 0) {
          memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar3);
        }
      }
    }
  }
  return;
}

// OnCloseInit @ 14befbf50

void __thiscall UDS_VM_MountControl::OnCloseInit(UDS_VM_MountControl *this)

{
  FWeakObjectPtr local_res8;
  undefined8 local_res10 [3];
  
  UDS_ViewModelBase::OnCloseInit((UDS_ViewModelBase *)this);
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  (this->CharStateData).WeakPtr = local_res8;
  return;
}

// OnMainCharChanged @ 14beff100

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
UDS_VM_MountControl::OnMainCharChanged
          (UDS_VM_MountControl *this,FDS_EntityBase *param_1,FDS_EntityBase *param_2)

{
  if (param_2 != (FDS_EntityBase *)0x0) {
    BindCharacterEvent(this,param_2->EntityID);
    return;
  }
  return;
}

// OnSetViewModel @ 14bf06110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_MountControl::OnSetViewModel
          (UDS_VM_MountControl *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  ulonglong uVar2;
  UDS_VM_W_CommonSkillSlot *pUVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UDS_LogManager *pUVar7;
  UObject *pUVar8;
  UObject *pUVar9;
  FObjectPtr_u_0 *this_00;
  UClass *pUVar10;
  UObject *pUVar11;
  FObjectPtr_u_0 FVar12;
  undefined1 auStackY_218 [32];
  FWeakObjectPtr local_1e8;
  FWeakObjectPtr local_1e0;
  FWeakObjectPtr local_1d8;
  FWeakObjectPtr local_1d0;
  FWeakObjectPtr local_1c8;
  FWeakObjectPtr local_1c0;
  FWeakObjectPtr local_1b8;
  FWeakObjectPtr local_1b0;
  TSharedPtr<FDS_ViewModelContext,1> local_1a8;
  UObject *local_198;
  undefined8 local_190;
  UDS_VM_W_CommonSkillSlot *local_188;
  UDS_VM_W_CommonSkillSlot *local_180;
  UDS_VM_W_CommonSkillSlot *local_178;
  UDS_VM_W_CommonSkillSlot *local_170;
  UDS_VM_W_CommonSkillSlot *local_168;
  UDS_VM_W_CommonSkillSlot *local_160;
  TSharedPtr<FDS_ViewModelContext,1> local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_218;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_158.Object = param_1->Object;
  local_158.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_158.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext>(&local_1a8,&local_158);
  if (local_1a8.Object == (FDS_ViewModelContext *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6663495193985024049>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Mount\\DS_VM_MountControl.cpp"
                       ,0x31,"context");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1a8.SharedReferenceCount.ReferenceController);
  }
  else {
    TDS_DataSetGetter<UDS_MountDataSet>::Get((ulong64)&local_1e0);
    bVar5 = TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr> *)&local_1e0,(void *)0x0);
    if (bVar5) {
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 != (UDS_LogManager *)0x0) {
        pUVar7 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_VM_MountControl::OnSetViewModel",0x23,Yes);
        UDS_LogManager::PrintLog(pUVar7,1,Warning,local_148.Ptr,0x39,L"mountDataSet is nullptr.");
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
    }
    else {
      pUVar8 = FWeakObjectPtr::Get(&local_1e0);
      pUVar11 = (UObject *)0x0;
      if (*(longlong *)&pUVar8[4].field_0x20 != 0) {
        pUVar8 = FWeakObjectPtr::Get(&local_1e0);
        pUVar9 = FWeakObjectPtr::Get(&local_1e0);
        uVar2 = *(ulonglong *)&pUVar9[4].field_0x20;
        if (*(int *)&pUVar8[1].field_0x20 != *(int *)&pUVar8[2].field_0x24) {
          pUVar9 = *(UObject **)&pUVar8[3].field_0x8;
          if (*(UObject **)&pUVar8[3].field_0x8 == (UObject *)0x0) {
            pUVar9 = pUVar8 + 3;
          }
          iVar6 = *(int *)(&pUVar9->field_0x0 +
                          ((ulonglong)(*(int *)&pUVar8[3].field_0x10 - 1) &
                          (uVar2 >> 0x20) * 0x17 + uVar2) * 4);
          if (iVar6 != -1) {
            do {
              if (*(ulonglong *)(*(longlong *)&pUVar8[1].field_0x18 + (longlong)iVar6 * 0x18) ==
                  uVar2) {
                this_00 = (FObjectPtr_u_0 *)
                          TMapBase<unsigned___int64,TObjectPtr<UDS_DataBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataBase>,0>_>
                          ::FindChecked((TMapBase<unsigned___int64,TObjectPtr<UDS_DataBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataBase>,0>_>
                                         *)&pUVar8[1].field_0x18,uVar2);
                if (this_00->Handle != (UObject *)0x0) {
                  pUVar10 = Z_Construct_UClass_UDS_MountData_NoRegister();
                  bVar5 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar10);
                  if (bVar5) {
                    pUVar11 = this_00->Handle;
                  }
                }
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (pUVar11 != (UObject *)0x0)) {
                  UE::GC::MarkAsReachable(pUVar11);
                }
                local_1e8.ObjectIndex = 0;
                local_1e8.ObjectSerialNumber = 0;
                local_198 = pUVar11;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (pUVar11 != (UObject *)0x0)) {
                  UE::GC::MarkAsReachable(pUVar11);
                }
                FVar12.Handle = (UObject *)&local_198;
                goto LAB_14bf06312;
              }
              iVar6 = *(int *)(*(longlong *)&pUVar8[1].field_0x18 + 0x10 + (longlong)iVar6 * 0x18);
            } while (iVar6 != -1);
          }
        }
        local_1e8.ObjectIndex = 0;
        local_1e8.ObjectSerialNumber = 0;
        FVar12.Handle = (UObject *)&local_190;
        local_190 = 0;
LAB_14bf06312:
        FWeakObjectPtr::operator=(&local_1e8,(FObjectPtr)FVar12);
        bVar5 = TWeakObjectPtr<UDS_MountData,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_MountData,FWeakObjectPtr> *)&local_1e8,(void *)0x0);
        if (bVar5) {
          iVar6 = 0;
        }
        else {
          pUVar11 = FWeakObjectPtr::Get(&local_1e8);
          iVar6 = *(int *)&pUVar11[2].field_0x18;
        }
        this->CurrentMountTID = iVar6;
      }
      pUVar3 = (this->Slot_1).field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar3 != (UDS_VM_W_CommonSkillSlot *)0x0) {
          UE::GC::MarkAsReachable((UObject *)pUVar3);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar3 != (UDS_VM_W_CommonSkillSlot *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar3);
        }
      }
      local_1d8.ObjectIndex = 0;
      local_1d8.ObjectSerialNumber = 0;
      local_188 = pUVar3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UDS_VM_W_CommonSkillSlot *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      FWeakObjectPtr::operator=(&local_1d8,(FObjectPtr)&local_188);
      SetMountViewModelContext
                (this,(TWeakObjectPtr<UDS_VM_W_CommonSkillSlot,FWeakObjectPtr>)local_1d8,Max);
      pUVar3 = (this->Slot_2).field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar3 != (UDS_VM_W_CommonSkillSlot *)0x0) {
          UE::GC::MarkAsReachable((UObject *)pUVar3);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar3 != (UDS_VM_W_CommonSkillSlot *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar3);
        }
      }
      local_1d0.ObjectIndex = 0;
      local_1d0.ObjectSerialNumber = 0;
      local_180 = pUVar3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UDS_VM_W_CommonSkillSlot *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      FWeakObjectPtr::operator=(&local_1d0,(FObjectPtr)&local_180);
      SetMountViewModelContext
                (this,(TWeakObjectPtr<UDS_VM_W_CommonSkillSlot,FWeakObjectPtr>)local_1d0,Max);
      pUVar3 = (this->Slot_3).field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar3 != (UDS_VM_W_CommonSkillSlot *)0x0) {
          UE::GC::MarkAsReachable((UObject *)pUVar3);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar3 != (UDS_VM_W_CommonSkillSlot *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar3);
        }
      }
      local_1c8.ObjectIndex = 0;
      local_1c8.ObjectSerialNumber = 0;
      local_178 = pUVar3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UDS_VM_W_CommonSkillSlot *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      FWeakObjectPtr::operator=(&local_1c8,(FObjectPtr)&local_178);
      SetMountViewModelContext
                (this,(TWeakObjectPtr<UDS_VM_W_CommonSkillSlot,FWeakObjectPtr>)local_1c8,Max);
      pUVar3 = (this->Slot_4).field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar3 != (UDS_VM_W_CommonSkillSlot *)0x0) {
          UE::GC::MarkAsReachable((UObject *)pUVar3);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar3 != (UDS_VM_W_CommonSkillSlot *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar3);
        }
      }
      local_1c0.ObjectIndex = 0;
      local_1c0.ObjectSerialNumber = 0;
      local_170 = pUVar3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UDS_VM_W_CommonSkillSlot *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      FWeakObjectPtr::operator=(&local_1c0,(FObjectPtr)&local_170);
      SetMountViewModelContext
                (this,(TWeakObjectPtr<UDS_VM_W_CommonSkillSlot,FWeakObjectPtr>)local_1c0,Max);
      pUVar3 = (this->Slot_5).field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar3 != (UDS_VM_W_CommonSkillSlot *)0x0) {
          UE::GC::MarkAsReachable((UObject *)pUVar3);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar3 != (UDS_VM_W_CommonSkillSlot *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar3);
        }
      }
      local_1b8.ObjectIndex = 0;
      local_1b8.ObjectSerialNumber = 0;
      local_168 = pUVar3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UDS_VM_W_CommonSkillSlot *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      FWeakObjectPtr::operator=(&local_1b8,(FObjectPtr)&local_168);
      SetMountViewModelContext
                (this,(TWeakObjectPtr<UDS_VM_W_CommonSkillSlot,FWeakObjectPtr>)local_1b8,Max);
      pUVar3 = (this->Slot_6).field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar3 != (UDS_VM_W_CommonSkillSlot *)0x0) {
          UE::GC::MarkAsReachable((UObject *)pUVar3);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar3 != (UDS_VM_W_CommonSkillSlot *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar3);
        }
      }
      local_1b0.ObjectIndex = 0;
      local_1b0.ObjectSerialNumber = 0;
      local_160 = pUVar3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UDS_VM_W_CommonSkillSlot *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      FWeakObjectPtr::operator=(&local_1b0,(FObjectPtr)&local_160);
      SetMountViewModelContext
                (this,(TWeakObjectPtr<UDS_VM_W_CommonSkillSlot,FWeakObjectPtr>)local_1b0,Max);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1a8.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetJumpViewModelContext @ 14bf15a00

void __thiscall
UDS_VM_MountControl::SetJumpViewModelContext
          (UDS_VM_MountControl *this,TWeakObjectPtr<UDS_VM_W_CommonSkillSlot,FWeakObjectPtr> param_1
          )

{
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelContext *pFVar3;
  UScriptStruct *pUVar4;
  UDS_ViewModelContextManager *this_00;
  UDS_ViewModelBase *this_01;
  FDS_ViewModelContext *pFVar5;
  FDS_ViewModelContext *pFVar6;
  FWeakObjectPtr local_res10;
  undefined1 local_res18;
  ulong64 local_res20;
  ulong64 local_48;
  TSharedPtr<FDS_ViewModelContext,1> local_40;
  TSharedPtr<FDS_ViewModelContext,1> local_30;
  
  local_res10 = param_1.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar2) {
    local_res18 = 0x29;
    local_res20 = UDS_PlayerData::GetMainPlayerCurrentEntityID();
    UDS_AbilityDataSet::GetAbilityData<UDS_AirWalkAbilityData>
              (&local_48,(EDS_AbilityTagType *)&local_res20);
    pFVar3 = ::operator_new(0x48);
    pFVar6 = (FDS_ViewModelContext *)0x0;
    pFVar5 = pFVar6;
    if (pFVar3 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar3->ViewModelTemplateKey = 0;
      *(undefined4 *)&pFVar3[2]._padding_ = 0;
      *(undefined2 *)((longlong)&pFVar3[2]._padding_ + 5) = 0;
      *(undefined1 *)((longlong)&pFVar3[2]._padding_ + 7) = 0;
      *(undefined8 *)&pFVar3->DerivedStaticStruct = 0;
      (pFVar3->ViewModelName).ComparisonIndex = 0;
      (pFVar3->ViewModelName).Number = 0;
      pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext_AirWalkSlot__6B_;
      pFVar3[1]._padding_ = 0;
      *(undefined8 *)&pFVar3[1].DerivedStaticStruct = 0;
      pFVar3[1].ViewModelName.ComparisonIndex = 0;
      pFVar3[1].ViewModelName.Number = 0;
      *(undefined8 *)&pFVar3[1].ViewModelTemplateKey = 0;
      *(undefined1 *)((longlong)&pFVar3[2]._padding_ + 4) = 0;
      pFVar5 = pFVar3;
    }
    pFVar3 = ::operator_new(0x20);
    if (pFVar3 != (FDS_ViewModelContext *)0x0) {
      *(atomic<int> *)&pFVar3->DerivedStaticStruct = (atomic<int>)0x1;
      *(code **)&(pFVar3->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      pFVar3->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_AirWalkSlot__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      ((atomic<int> *)&pFVar3->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pFVar3->ViewModelTemplateKey = pFVar5;
      pFVar6 = pFVar3;
    }
    if ((pFVar5 == (FDS_ViewModelContext *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar4 = FDS_ViewModelContext_AirWalkSlot::StaticStruct();
    *(UScriptStruct **)&pFVar5->DerivedStaticStruct = pUVar4;
    this_00 = UDS_ViewModelContextManager::GetInst();
    if (this_00 != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar6 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar6->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar6->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_40.Object = pFVar5;
      local_40.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar6;
      UDS_ViewModelContextManager::RegisterContext(this_00,&local_40);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_40.SharedReferenceCount.ReferenceController);
    }
    pFVar5->ViewModelTemplateKey = W_AirWalkSlotJump;
    pFVar5[1]._padding_ = local_48;
    *(undefined1 *)((longlong)&pFVar5[2]._padding_ + 4) = 1;
    *(undefined4 *)&pFVar5[2]._padding_ = 0x27dc;
    this_01 = (UDS_ViewModelBase *)FWeakObjectPtr::Get(&local_res10);
    if (pFVar6 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar6->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar6->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_30.Object = pFVar5;
    local_30.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar6;
    UDS_ViewModelBase::SetContext(this_01,&local_30);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar6);
  }
  return;
}

// SetMountViewModelContext @ 14bf16af0

void __thiscall
UDS_VM_MountControl::SetMountViewModelContext
          (UDS_VM_MountControl *this,TWeakObjectPtr<UDS_VM_W_CommonSkillSlot,FWeakObjectPtr> param_1
          ,EDS_MountStep param_2)

{
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelContext *pFVar3;
  UScriptStruct *pUVar4;
  UDS_ViewModelContextManager *this_00;
  UDS_ViewModelBase *this_01;
  FDS_ViewModelContext *pFVar5;
  FDS_ViewModelContext *pFVar6;
  FWeakObjectPtr local_res10;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  local_res10 = param_1.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar2) {
    pFVar3 = ::operator_new(0x28);
    pFVar5 = (FDS_ViewModelContext *)0x0;
    pFVar6 = pFVar5;
    if (pFVar3 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar3->ViewModelTemplateKey = 0;
      *(undefined2 *)((longlong)&pFVar3[1]._padding_ + 1) = 0;
      *(undefined1 *)((longlong)&pFVar3[1]._padding_ + 3) = 0;
      *(undefined8 *)&pFVar3->DerivedStaticStruct = 0;
      (pFVar3->ViewModelName).ComparisonIndex = 0;
      (pFVar3->ViewModelName).Number = 0;
      pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext_MountSlot__6B_;
      *(undefined1 *)&pFVar3[1]._padding_ = 0x1c;
      *(undefined4 *)((longlong)&pFVar3[1]._padding_ + 4) = 0;
      pFVar6 = pFVar3;
    }
    pFVar3 = ::operator_new(0x20);
    if (pFVar3 != (FDS_ViewModelContext *)0x0) {
      *(atomic<int> *)&pFVar3->DerivedStaticStruct = (atomic<int>)0x1;
      *(code **)&(pFVar3->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      pFVar3->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_MountSlot__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      ((atomic<int> *)&pFVar3->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pFVar3->ViewModelTemplateKey = pFVar6;
      pFVar5 = pFVar3;
    }
    if ((pFVar6 == (FDS_ViewModelContext *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar4 = FDS_ViewModelContext_MountSlot::StaticStruct();
    *(UScriptStruct **)&pFVar6->DerivedStaticStruct = pUVar4;
    this_00 = UDS_ViewModelContextManager::GetInst();
    if (this_00 != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar5 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar5->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar5->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_28.Object = pFVar6;
      local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar5;
      UDS_ViewModelContextManager::RegisterContext(this_00,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
    }
    *(EDS_MountStep *)&pFVar6[1]._padding_ = param_2;
    this_01 = (UDS_ViewModelBase *)FWeakObjectPtr::Get(&local_res10);
    if (pFVar5 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar5->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar5->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_18.Object = pFVar6;
    local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar5;
    UDS_ViewModelBase::SetContext(this_01,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar5);
  }
  return;
}

// ShowAnimation @ 14bf1c170

void __thiscall
UDS_VM_MountControl::ShowAnimation
          (UDS_VM_MountControl *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
          FDS_ChangedCharStateInfo *param_2)

{
  EDS_AnimationEventType *pEVar1;
  bool bVar2;
  ESlateVisibility EVar3;
  FName *pFVar4;
  FWeakObjectPtr local_res10;
  FName local_res20;
  FName local_18;
  int local_10;
  
  local_res10 = param_1.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if ((bVar2) &&
     (EVar3 = GetMountControlVisibility
                        (this,(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>)local_res10,param_2)
     , EVar3 != this->DesiredVisibilityState)) {
    this->DesiredVisibilityState = EVar3;
    ::FName::FName(&local_res20,"Close_Anim");
    if (EVar3 == SelfHitTestInvisible) {
      UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,SelfHitTestInvisible);
      pFVar4 = ::FName::FName(&local_18,"Open_Anim");
      local_res20 = *pFVar4;
    }
    pEVar1 = &(this->AnimationEvent).AnimationEventType;
    if (this->PlayingAnimationName != (FName)0x0) {
      (this->AnimationEvent).AnimationName = this->PlayingAnimationName;
      *pEVar1 = StopAnimation;
      local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
      local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    this->PlayingAnimationName = local_res20;
    (this->AnimationEvent).AnimationName = local_res20;
    *pEVar1 = PlayForward;
    local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// StopAnimation @ 14bf1c9a0

void __thiscall UDS_VM_MountControl::StopAnimation(UDS_VM_MountControl *this,FName *param_1)

{
  FName local_18;
  int local_10;
  
  if (*param_1 != (FName)0x0) {
    (this->AnimationEvent).AnimationName = *param_1;
    (this->AnimationEvent).AnimationEventType = StopAnimation;
    local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UnBindCharacterEvent @ 14bf1dc60

void __thiscall UDS_VM_MountControl::UnBindCharacterEvent(UDS_VM_MountControl *this,ulong64 param_1)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->CharStateData).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->CharStateData).WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[7].field_0x20,this);
    (this->CharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  }
  return;
}

// UnbindModel @ 14bf1e0a0

void __thiscall UDS_VM_MountControl::UnbindModel(UDS_VM_MountControl *this)

{
  bool bVar1;
  UDS_MountEvent *pUVar2;
  UObject *pUVar3;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar2 = UDS_MountEvent::GetEvent();
  if (pUVar2 != (UDS_MountEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->MountFlyUpDownStateChangeDel,this);
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &ADS_MainCharacter::MainCharacterSwitchCompleteDelegate,this);
  bVar1 = FWeakObjectPtr::IsValid(&(this->CharStateData).WeakPtr);
  if (bVar1) {
    pUVar3 = FWeakObjectPtr::Get(&(this->CharStateData).WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[7].field_0x20,this);
    (this->CharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  }
  return;
}

// UpdateCharState @ 14bf1f620

void __thiscall
UDS_VM_MountControl::UpdateCharState
          (UDS_VM_MountControl *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
          FDS_ChangedCharStateInfo *param_2)

{
  EDS_AnimationEventType *pEVar1;
  EDS_MountStep EVar2;
  bool bVar3;
  ESlateVisibility EVar4;
  int iVar5;
  FDS_MountBaseTableRow *pFVar6;
  FName *pFVar7;
  FName local_res20;
  FWeakObjectPtr local_28 [2];
  FName local_18;
  int local_10;
  
  EVar2 = GetMountStepByCharState(this,param_1);
  iVar5 = UDS_MountManager::GetMountIdByMainPlayer();
  if (iVar5 != 0) {
    pFVar6 = FDS_MountBaseTableRow::GetRef((longlong)iVar5,true);
    UpdateSkillSlotList(this,EVar2,pFVar6->RequiredSkill);
    local_28[0] = param_1.WeakPtr;
    bVar3 = FWeakObjectPtr::IsValid(local_28);
    if ((bVar3) &&
       (EVar4 = GetMountControlVisibility
                          (this,(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>)local_28[0],
                           param_2), EVar4 != this->DesiredVisibilityState)) {
      this->DesiredVisibilityState = EVar4;
      ::FName::FName(&local_res20,"Close_Anim");
      if (EVar4 == SelfHitTestInvisible) {
        UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,SelfHitTestInvisible);
        pFVar7 = ::FName::FName(&local_18,"Open_Anim");
        local_res20 = *pFVar7;
      }
      pEVar1 = &(this->AnimationEvent).AnimationEventType;
      if (this->PlayingAnimationName != (FName)0x0) {
        (this->AnimationEvent).AnimationName = this->PlayingAnimationName;
        *pEVar1 = StopAnimation;
        local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
        local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
      }
      this->PlayingAnimationName = local_res20;
      (this->AnimationEvent).AnimationName = local_res20;
      *pEVar1 = PlayForward;
      local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
      local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  return;
}

// UpdateSkillSlotList @ 14bf254a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_MountControl::UpdateSkillSlotList
          (UDS_VM_MountControl *this,EDS_MountStep param_1,EDS_PlayerSkillType param_2)

{
  undefined1 *puVar1;
  TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_> *pTVar2;
  FWeakObjectPtr *pFVar3;
  FScriptContainerElement FVar4;
  int iVar5;
  UDS_VM_W_CommonSkillSlot *pUVar6;
  code *pcVar7;
  UDS_VM_MountControl *this_00;
  TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_> *pTVar8;
  bool bVar9;
  uint uVar10;
  UDS_MountAbilityData *this_01;
  FDS_MountStepInfo *pFVar11;
  FDS_ActionMountTableRow *this_02;
  UDS_LogManager *pUVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  ForAnyElementType FVar16;
  uint uVar17;
  uint uVar18;
  undefined1 *puVar19;
  uint *puVar20;
  undefined1 auStackY_2a8 [32];
  undefined1 local_268;
  undefined1 local_267 [7];
  ForAnyElementType local_260;
  uint local_258;
  uint local_254;
  ForAnyElementType local_250;
  uint local_248;
  int local_244;
  TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_> *local_240;
  int iStack_238;
  uint uStack_234;
  undefined1 *local_230;
  undefined4 uStack_228;
  int iStack_224;
  int local_220;
  int iStack_21c;
  int iStack_218;
  undefined4 uStack_214;
  int local_210;
  int local_20c;
  UDS_VM_W_CommonSkillSlot *local_208;
  UDS_VM_W_CommonSkillSlot *local_200;
  UDS_VM_W_CommonSkillSlot *local_1f8;
  UDS_VM_W_CommonSkillSlot *local_1f0;
  UDS_VM_W_CommonSkillSlot *local_1e8;
  UDS_VM_W_CommonSkillSlot *local_1e0;
  UDS_VM_MountControl *local_1d8;
  TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_> *local_1d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1c8;
  undefined8 uStack_1a8;
  FWeakObjectPtr local_1a0;
  FWeakObjectPtr FStack_198;
  FWeakObjectPtr local_190;
  FWeakObjectPtr FStack_188;
  FWeakObjectPtr local_180;
  FWeakObjectPtr aFStack_178 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  local_1d8 = this;
  bVar9 = TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr>::UEOpEquals
                    (&this->MountAbilityData,(void *)0x0);
  if (!bVar9) {
    pUVar6 = (this->Slot_1).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar6 != (UDS_VM_W_CommonSkillSlot *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar6 != (UDS_VM_W_CommonSkillSlot *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
    }
    local_1a0.ObjectIndex = 0;
    local_1a0.ObjectSerialNumber = 0;
    local_208 = pUVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar6 != (UDS_VM_W_CommonSkillSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    FWeakObjectPtr::operator=(&local_1a0,(FObjectPtr)&local_208);
    pUVar6 = (this->Slot_2).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar6 != (UDS_VM_W_CommonSkillSlot *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar6 != (UDS_VM_W_CommonSkillSlot *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
    }
    FStack_198.ObjectIndex = 0;
    FStack_198.ObjectSerialNumber = 0;
    local_200 = pUVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar6 != (UDS_VM_W_CommonSkillSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    FWeakObjectPtr::operator=(&FStack_198,(FObjectPtr)&local_200);
    pUVar6 = (this->Slot_3).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar6 != (UDS_VM_W_CommonSkillSlot *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar6 != (UDS_VM_W_CommonSkillSlot *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
    }
    local_190.ObjectIndex = 0;
    local_190.ObjectSerialNumber = 0;
    local_1f8 = pUVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar6 != (UDS_VM_W_CommonSkillSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    FWeakObjectPtr::operator=(&local_190,(FObjectPtr)&local_1f8);
    pUVar6 = (this->Slot_4).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar6 != (UDS_VM_W_CommonSkillSlot *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar6 != (UDS_VM_W_CommonSkillSlot *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
    }
    FStack_188.ObjectIndex = 0;
    FStack_188.ObjectSerialNumber = 0;
    local_1f0 = pUVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar6 != (UDS_VM_W_CommonSkillSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    FWeakObjectPtr::operator=(&FStack_188,(FObjectPtr)&local_1f0);
    pUVar6 = (this->Slot_5).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar6 != (UDS_VM_W_CommonSkillSlot *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar6 != (UDS_VM_W_CommonSkillSlot *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
    }
    local_180.ObjectIndex = 0;
    local_180.ObjectSerialNumber = 0;
    local_1e8 = pUVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar6 != (UDS_VM_W_CommonSkillSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    FWeakObjectPtr::operator=(&local_180,(FObjectPtr)&local_1e8);
    pUVar6 = (this->Slot_6).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar6 != (UDS_VM_W_CommonSkillSlot *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar6 != (UDS_VM_W_CommonSkillSlot *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
    }
    aFStack_178[0].ObjectIndex = 0;
    aFStack_178[0].ObjectSerialNumber = 0;
    local_1e0 = pUVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar6 != (UDS_VM_W_CommonSkillSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    FWeakObjectPtr::operator=(aFStack_178,(FObjectPtr)&local_1e0);
    local_250.Data = (FScriptContainerElement *)0x0;
    local_248 = 6;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,6,0,&local_250,6,&local_244);
    uVar18 = local_248;
    *(FWeakObjectPtr *)local_250.Data = local_1a0;
    *(FWeakObjectPtr *)(local_250.Data + 8) = FStack_198;
    *(FWeakObjectPtr *)(local_250.Data + 0x10) = local_190;
    *(FWeakObjectPtr *)(local_250.Data + 0x18) = FStack_188;
    *(FWeakObjectPtr *)(local_250.Data + 0x20) = local_180;
    *(FWeakObjectPtr *)(local_250.Data + 0x28) = aFStack_178[0];
    uVar13 = (ulonglong)(int)local_248;
    local_260.Data = (FScriptContainerElement *)0x0;
    local_254 = 0;
    local_258 = 0;
    pFVar3 = (FWeakObjectPtr *)(local_250.Data + uVar13 * 8);
    FVar16.Data = local_250.Data;
    while( true ) {
      if ((uint)uVar13 != uVar18) {
        local_268 = 0;
        `TCheckedPointerIterator<TWeakObjectPtr<UDS_VM_W_CommonSkillSlot,FWeakObjectPtr>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(&local_268);
      }
      if ((FWeakObjectPtr *)FVar16.Data == pFVar3) break;
      if (local_258 == local_254) {
        local_258 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x101,&local_260,(int *)&local_254);
      }
      FVar16.Data = FVar16.Data + 8;
      local_260.Data[(int)local_258] = (FScriptContainerElement)0x1c;
      uVar13 = (ulonglong)local_248;
      local_258 = local_258 + 1;
    }
    this_01 = (UDS_MountAbilityData *)FWeakObjectPtr::Get(&(this->MountAbilityData).WeakPtr);
    pFVar11 = UDS_MountAbilityData::GetMountStepInfo(this_01,param_1);
    iVar5 = *(int *)&(pFVar11->NextStepAvailableTimeMap).field_0x28;
    iStack_238 = 0;
    local_220 = 0;
    uStack_234 = 1;
    puVar1 = &(pFVar11->NextStepAvailableTimeMap).field_0x10;
    pTVar2 = &pFVar11->NextStepAvailableTimeMap;
    iStack_224 = 0;
    if (iVar5 != 0) {
      puVar20 = *(uint **)&(pFVar11->NextStepAvailableTimeMap).field_0x20;
      if (puVar20 == (uint *)0x0) {
        puVar20 = (uint *)puVar1;
      }
      uVar18 = *puVar20;
      while (uVar18 == 0) {
        lVar14 = (longlong)iStack_238;
        local_220 = local_220 + 0x20;
        iStack_238 = iStack_238 + 1;
        iStack_224 = iVar5;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_238) goto LAB_14bf258dd;
        uVar18 = puVar20[lVar14 + 1];
      }
      uStack_234 = -uVar18 & uVar18;
      uVar13 = (ulonglong)uStack_234 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_210 = (int)lVar14;
      iStack_224 = local_220 + -1 + local_210;
      if (iVar5 < iStack_224) {
        iStack_224 = iVar5;
      }
    }
LAB_14bf258dd:
    uVar18 = *(uint *)&(pFVar11->NextStepAvailableTimeMap).field_0x28;
    iStack_218 = *(int *)&(pFVar11->NextStepAvailableTimeMap).field_0x8 -
                 *(int *)&(pFVar11->NextStepAvailableTimeMap).field_0x34;
    uVar17 = uVar18 & 0xffffffe0;
    uStack_228 = 0xffffffff;
    TStack_1c8._padding_ = CONCAT44(uStack_234,iStack_238);
    TStack_1c8.CurrentBitIndex = iStack_224;
    TStack_1c8.UnvisitedBitMask = 0xffffffff;
    iVar15 = (int)uVar18 >> 5;
    TStack_1c8._28_4_ = iStack_224;
    TStack_1c8.BaseBitIndex = local_220;
    uStack_1a8 = CONCAT44(uStack_214,iStack_218);
    local_240 = pTVar2;
    local_230 = puVar1;
    iStack_21c = iStack_224;
    local_1d0 = pTVar2;
    TStack_1c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar18 < 0) || (iVar5 < (int)uVar18)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar10 = *(uint *)&(pFVar11->NextStepAvailableTimeMap).field_0x28;
    if (uVar18 != uVar10) {
      puVar19 = *(undefined1 **)&(pFVar11->NextStepAvailableTimeMap).field_0x20;
      if (puVar19 == (undefined1 *)0x0) {
        puVar19 = puVar1;
      }
      uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar15 * 4);
      while (uVar18 == 0) {
        lVar14 = (longlong)iVar15;
        uVar17 = uVar17 + 0x20;
        iVar15 = iVar15 + 1;
        uVar18 = uVar10;
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_14bf259dd;
        uVar18 = *(uint *)(puVar19 + lVar14 * 4 + 4);
      }
      uVar13 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_20c = (int)lVar14;
      uVar18 = local_20c + -1 + uVar17;
      if ((int)uVar10 < (int)uVar18) {
        uVar18 = uVar10;
      }
    }
LAB_14bf259dd:
    lVar14 = 0;
    while( true ) {
      pTVar8 = local_1d0;
      if (*(int *)&local_1d0->field_0x8 - *(int *)&local_1d0->field_0x34 != (int)uStack_1a8) {
        local_267[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_267);
      }
      this_00 = local_1d8;
      if (((TStack_1c8.CurrentBitIndex == uVar18) &&
          (TStack_1c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar8 == pTVar2)) break;
      iVar5 = *(int *)(*(longlong *)pTVar8 + (longlong)TStack_1c8.CurrentBitIndex * 0x10);
      if (iVar5 != 0) {
        this_02 = FDS_ActionMountTableRow::GetRef((longlong)iVar5,true);
        bVar9 = FDS_ActionMountTableRow::IsValid(this_02);
        if (bVar9) {
          uVar17 = this_02->QuickSlotNumber - 1;
          if ((-1 < (int)uVar17) && ((int)uVar17 < (int)local_258)) {
            FVar4 = (FScriptContainerElement)this_02->MountStep;
            uVar10 = 0;
            if ((int)uVar17 < (int)local_258) {
              uVar10 = ~uVar17 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            local_260.Data[(int)uVar17] = FVar4;
          }
        }
        else {
          pUVar12 = UDS_LogManager::GetInst();
          if (pUVar12 != (UDS_LogManager *)0x0) {
            pUVar12 = UDS_LogManager::GetInst();
            local_168._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_168,"UDS_VM_MountControl::UpdateSkillSlotList",0x28,Yes);
            UDS_LogManager::PrintLog
                      (pUVar12,1,Warning,local_168.Ptr,0x213,L"actionMountTableRow is not valid.");
            if ((void *)local_168._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_168._padding_);
            }
          }
          bVar9 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6663495193985024532>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Mount\\DS_VM_MountControl.cpp"
                             ,0x214,"false");
          if (bVar9) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
      }
      TStack_1c8.UnvisitedBitMask = TStack_1c8.UnvisitedBitMask & ~TStack_1c8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1c8);
    }
    if ((local_248 == local_258) && (uVar18 = 0, 0 < (int)local_258)) {
      do {
        uVar17 = 0;
        if ((int)uVar18 < (int)local_258) {
          uVar17 = ~uVar18 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar4 = local_260.Data[lVar14];
        uVar17 = 0;
        if ((int)uVar18 < (int)local_248) {
          uVar17 = ~uVar18 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        SetMountViewModelContext
                  (this_00,(TWeakObjectPtr<UDS_VM_W_CommonSkillSlot,FWeakObjectPtr>)
                           *(FWeakObjectPtr *)(local_250.Data + lVar14 * 8),(EDS_MountStep)FVar4);
        uVar18 = uVar18 + 1;
        lVar14 = lVar14 + 1;
      } while ((int)uVar18 < (int)local_258);
    }
    if (local_260.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_260.Data);
    }
    if ((FWeakObjectPtr *)local_250.Data != (FWeakObjectPtr *)0x0) {
      FMemory::Free(local_250.Data);
    }
  }
  return;
}

