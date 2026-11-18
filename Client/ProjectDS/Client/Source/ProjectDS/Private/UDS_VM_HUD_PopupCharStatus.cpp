// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 28

// SetLevelUpAnimationFinishedEvent_WrapperImpl @ 14b6745f0

void __cdecl
UDS_VM_HUD_PopupCharStatus::SetLevelUpAnimationFinishedEvent_WrapperImpl
          (void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0xcf) = 1;
  iStack_10 = FFieldNotificationClassDescriptor::Vis_LevelUpEffect.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::Vis_LevelUpEffect.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// StaticClass @ 14b674600

UClass * __cdecl UDS_VM_HUD_PopupCharStatus::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_HUD_PopupCharStatus.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_HUD_PopupCharStatus",
               &Z_Registration_Info_UClass_UDS_VM_HUD_PopupCharStatus.InnerSingleton,
               StaticRegisterNativesUDS_VM_HUD_PopupCharStatus,0x160,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_HUD_PopupCharStatus>,
               InternalVTableHelperCtorCaller<UDS_VM_HUD_PopupCharStatus>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_HUD_PopupCharStatus.InnerSingleton;
}

// UDS_VM_HUD_PopupCharStatus @ 14b679c70

UDS_VM_HUD_PopupCharStatus * __thiscall
UDS_VM_HUD_PopupCharStatus::UDS_VM_HUD_PopupCharStatus
          (UDS_VM_HUD_PopupCharStatus *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->Vis_Party = Collapsed;
  this->Vis_PartyLeader = Collapsed;
  this->CoolTimePanelVisibility = Collapsed;
  this->Vis_LevelUpEffect = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_PopupCharStatus__6B_;
  (this->VM_HUD_CharInfoData).field0_0x0.DebugPtr = (UDS_VM_CharInfoData *)0x0;
  (this->VM_HUD_QuickChanger_Current).field0_0x0.DebugPtr = (UDS_VM_HUD_QuickChanger *)0x0;
  (this->VM_CharBuffData).field0_0x0.DebugPtr = (UDS_VM_CharBuffData *)0x0;
  (this->VM_CharDeBuffData).field0_0x0.DebugPtr = (UDS_VM_CharBuffData *)0x0;
  (this->VM_PlayerData).field0_0x0.DebugPtr = (UDS_VM_PlayerData *)0x0;
  (this->LevelUpAnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->LevelUpAnimationEvent).AnimationName.Number = 0;
  (this->LevelUpAnimationEvent).AnimationPlayTime = 0.0;
  (this->LevelUpAnimationEvent).AnimationEventType = None;
  (this->LevelUpAnimationEvent).AnimationStateType = None;
  *(undefined8 *)&(this->LevelUpAnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->LevelUpAnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->LevelUpAnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->LevelUpAnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->LevelUpAnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->LevelUpAnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->LevelUpAnimationFinishedEvent).AnimationName.ComparisonIndex = 0;
  (this->LevelUpAnimationFinishedEvent).AnimationName.Number = 0;
  (this->LevelUpAnimationFinishedEvent).AnimationPlayTime = 0.0;
  (this->LevelUpAnimationFinishedEvent).AnimationEventType = None;
  (this->LevelUpAnimationFinishedEvent).AnimationStateType = None;
  *(undefined8 *)&(this->LevelUpAnimationFinishedEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->LevelUpAnimationFinishedEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->LevelUpAnimationFinishedEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->LevelUpAnimationFinishedEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->LevelUpAnimationFinishedEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->LevelUpAnimationFinishedEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->LevelUpAnimationEvent).NumberOfLoops = 1;
  (this->LevelUpAnimationFinishedEvent).NumberOfLoops = 1;
  return this;
}

// UDS_VM_HUD_PopupCharStatus @ 14b679d70

UDS_VM_HUD_PopupCharStatus * __thiscall
UDS_VM_HUD_PopupCharStatus::UDS_VM_HUD_PopupCharStatus
          (UDS_VM_HUD_PopupCharStatus *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->Vis_Party = Collapsed;
  this->Vis_PartyLeader = Collapsed;
  this->CoolTimePanelVisibility = Collapsed;
  this->Vis_LevelUpEffect = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_PopupCharStatus__6B_;
  (this->VM_HUD_CharInfoData).field0_0x0.DebugPtr = (UDS_VM_CharInfoData *)0x0;
  (this->VM_HUD_QuickChanger_Current).field0_0x0.DebugPtr = (UDS_VM_HUD_QuickChanger *)0x0;
  (this->VM_CharBuffData).field0_0x0.DebugPtr = (UDS_VM_CharBuffData *)0x0;
  (this->VM_CharDeBuffData).field0_0x0.DebugPtr = (UDS_VM_CharBuffData *)0x0;
  (this->VM_PlayerData).field0_0x0.DebugPtr = (UDS_VM_PlayerData *)0x0;
  (this->LevelUpAnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->LevelUpAnimationEvent).AnimationName.Number = 0;
  (this->LevelUpAnimationEvent).AnimationPlayTime = 0.0;
  (this->LevelUpAnimationEvent).AnimationEventType = None;
  (this->LevelUpAnimationEvent).AnimationStateType = None;
  *(undefined8 *)&(this->LevelUpAnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->LevelUpAnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->LevelUpAnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->LevelUpAnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->LevelUpAnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->LevelUpAnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->LevelUpAnimationFinishedEvent).AnimationName.ComparisonIndex = 0;
  (this->LevelUpAnimationFinishedEvent).AnimationName.Number = 0;
  (this->LevelUpAnimationFinishedEvent).AnimationPlayTime = 0.0;
  (this->LevelUpAnimationFinishedEvent).AnimationEventType = None;
  (this->LevelUpAnimationFinishedEvent).AnimationStateType = None;
  *(undefined8 *)&(this->LevelUpAnimationFinishedEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->LevelUpAnimationFinishedEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->LevelUpAnimationFinishedEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->LevelUpAnimationFinishedEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->LevelUpAnimationFinishedEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->LevelUpAnimationFinishedEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->LevelUpAnimationEvent).NumberOfLoops = 1;
  (this->LevelUpAnimationFinishedEvent).NumberOfLoops = 1;
  return this;
}

// ~UDS_VM_HUD_PopupCharStatus @ 14b67b5f0

void __thiscall
UDS_VM_HUD_PopupCharStatus::~UDS_VM_HUD_PopupCharStatus(UDS_VM_HUD_PopupCharStatus *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_PopupCharStatus__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->LevelUpAnimationFinishedEvent).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->LevelUpAnimationFinishedEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &(this->LevelUpAnimationFinishedEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->LevelUpAnimationFinishedEvent).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->LevelUpAnimationFinishedEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &(this->LevelUpAnimationFinishedEvent).Delegate_AnimationFinish);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->LevelUpAnimationEvent).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->LevelUpAnimationEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->LevelUpAnimationEvent).Delegate_ValidAnimation)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->LevelUpAnimationEvent).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->LevelUpAnimationEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->LevelUpAnimationEvent).Delegate_AnimationFinish
            );
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b67de20

IClassDescriptor * __thiscall
UDS_VM_HUD_PopupCharStatus::GetFieldNotificationDescriptor(UDS_VM_HUD_PopupCharStatus *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_HUD_PopupCharStatus::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b67e830

UClass * __cdecl UDS_VM_HUD_PopupCharStatus::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_HUD_PopupCharStatus.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_HUD_PopupCharStatus",
               &Z_Registration_Info_UClass_UDS_VM_HUD_PopupCharStatus.InnerSingleton,
               StaticRegisterNativesUDS_VM_HUD_PopupCharStatus,0x160,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_HUD_PopupCharStatus>,
               InternalVTableHelperCtorCaller<UDS_VM_HUD_PopupCharStatus>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_HUD_PopupCharStatus.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_HUD_PopupCharStatus @ 14b67f210

void __cdecl UDS_VM_HUD_PopupCharStatus::StaticRegisterNativesUDS_VM_HUD_PopupCharStatus(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_HUD_PopupCharStatus_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnLevelUp @ 14b680490

void __cdecl
UDS_VM_HUD_PopupCharStatus::execOnLevelUp(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int *piVar2;
  int local_res10 [2];
  
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
  piVar2 = local_res10;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar2 = (int *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnLevelUp((UDS_VM_HUD_PopupCharStatus *)param_1,piVar2);
  return;
}

// BindModel @ 14bf40850

void __thiscall UDS_VM_HUD_PopupCharStatus::BindModel(UDS_VM_HUD_PopupCharStatus *this)

{
  UDS_PartyEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_PartyEvent::GetEvent();
  if (pUVar1 != (UDS_PartyEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnJoinedParty,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_HUD_PopupCharStatus>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnJoinedParty,(UDS_VM_HUD_PopupCharStatus *)&stack0x00000010,
               (pmf_b80db4bd *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnLeftParty,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_HUD_PopupCharStatus>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnLeftParty,(UDS_VM_HUD_PopupCharStatus *)&stack0x00000010,
               (pmf_b80db4bd *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnPartyLeaderChanged,
               this);
    TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_HUD_PopupCharStatus>
              ((TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnPartyLeaderChanged,(UDS_VM_HUD_PopupCharStatus *)&stack0x00000010,
               (pmf_476e99ec *)this);
  }
  LevelUpDelBinding(this);
  return;
}

// CalSidePlayerIndex @ 14bf43ef0

int __thiscall
UDS_VM_HUD_PopupCharStatus::CalSidePlayerIndex
          (UDS_VM_HUD_PopupCharStatus *this,int param_1,int param_2,bool param_3)

{
  int iVar1;
  
  if (param_3) {
    iVar1 = param_1 + 1;
    if (iVar1 == param_2) {
      iVar1 = 0;
    }
    return iVar1;
  }
  iVar1 = param_1 + -1;
  if (param_1 + -1 < 0) {
    iVar1 = param_2 + -1;
  }
  return iVar1;
}

// InitViewModel @ 14bf5a3f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_HUD_PopupCharStatus::InitViewModel(UDS_VM_HUD_PopupCharStatus *this)

{
  code *pcVar1;
  FName FVar2;
  FName FVar3;
  FDS_ViewModelContext_PlayerData *pFVar4;
  bool bVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  UDS_VM_HUD_QuickChanger *pUVar8;
  UDS_VM_CharInfoData *pUVar9;
  UDS_VM_CharBuffData *pUVar10;
  UDS_VM_PlayerData *pUVar11;
  longlong *plVar12;
  undefined1 auStack_f8 [32];
  FName local_d8;
  FName local_c8;
  int local_c0;
  TSharedPtr<FDS_ViewModelContext_PlayerData,1> local_b8;
  TSharedPtr<FDS_ViewModelContext,1> local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if ((this->VM_HUD_QuickChanger_Current).field0_0x0.DebugPtr == (UDS_VM_HUD_QuickChanger *)0x0) {
    local_d8.ComparisonIndex.Value = 0;
    local_d8.Number = 0;
    pUVar6 = Z_Construct_UClass_UDS_VM_HUD_QuickChanger_NoRegister();
    FVar2 = local_d8;
    if (local_d8 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar7 = Z_Construct_UClass_UDS_VM_HUD_QuickChanger_NoRegister();
    CheckIsClassChildOf_Internal(pUVar7,pUVar6);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar6);
    FVar3 = local_d8;
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_d8.ComparisonIndex = FVar2.ComparisonIndex.Value;
    local_d8.Number = FVar2.Number;
    local_98._16_4_ = local_d8.ComparisonIndex.Value;
    local_98._20_4_ = local_d8.Number;
    local_98._24_4_ = RF_Transient;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_d8 = FVar3;
    local_98._8_8_ = this;
    pUVar8 = (UDS_VM_HUD_QuickChanger *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar12 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar12 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
    if (pUVar8 != (UDS_VM_HUD_QuickChanger *)0x0) {
      *(undefined1 *)((longlong)&pUVar8->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar8 != (UDS_VM_HUD_QuickChanger *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    (this->VM_HUD_QuickChanger_Current).field0_0x0.DebugPtr = pUVar8;
  }
  if ((this->VM_HUD_CharInfoData).field0_0x0.DebugPtr == (UDS_VM_CharInfoData *)0x0) {
    pUVar9 = UDS_ViewModelBase::CreateViewModel<UDS_VM_CharInfoData>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar9 != (UDS_VM_CharInfoData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    (this->VM_HUD_CharInfoData).field0_0x0.DebugPtr = pUVar9;
  }
  if ((this->VM_CharBuffData).field0_0x0.DebugPtr == (UDS_VM_CharBuffData *)0x0) {
    pUVar10 = UDS_ViewModelBase::CreateViewModel<UDS_VM_CharBuffData>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar10 != (UDS_VM_CharBuffData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar10);
    }
    (this->VM_CharBuffData).field0_0x0.DebugPtr = pUVar10;
  }
  if ((this->VM_CharDeBuffData).field0_0x0.DebugPtr == (UDS_VM_CharBuffData *)0x0) {
    pUVar10 = UDS_ViewModelBase::CreateViewModel<UDS_VM_CharBuffData>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar10 != (UDS_VM_CharBuffData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar10);
    }
    (this->VM_CharDeBuffData).field0_0x0.DebugPtr = pUVar10;
  }
  if ((this->VM_PlayerData).field0_0x0.DebugPtr == (UDS_VM_PlayerData *)0x0) {
    pUVar11 = UDS_ViewModelBase::CreateViewModel<UDS_VM_PlayerData>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
       (pUVar11 == (UDS_VM_PlayerData *)0x0)) {
      (this->VM_PlayerData).field0_0x0.DebugPtr = pUVar11;
      if (pUVar11 == (UDS_VM_PlayerData *)0x0) goto LAB_14bf5a66d;
    }
    else {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
      (this->VM_PlayerData).field0_0x0.DebugPtr = pUVar11;
    }
    MakeContext<FDS_ViewModelContext_PlayerData>(&local_b8);
    pFVar4 = local_b8.Object;
    if (local_b8.Object == (FDS_ViewModelContext_PlayerData *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(undefined4 *)&pFVar4->_padding_ = 0xb;
    pFVar4->PlayerEntityID = UDS_PlayerData::MainPlayerEntityID;
    pUVar11 = (this->VM_PlayerData).field0_0x0.DebugPtr;
    local_a8.Object = (FDS_ViewModelContext *)local_b8.Object;
    local_a8.SharedReferenceCount.ReferenceController =
         local_b8.SharedReferenceCount.ReferenceController;
    if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar11,&local_a8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b8.SharedReferenceCount.ReferenceController);
  }
LAB_14bf5a66d:
  this->Vis_LevelUpEffect = Collapsed;
  local_c0 = FFieldNotificationClassDescriptor::Vis_LevelUpEffect.BitNumber;
  local_c8 = FFieldNotificationClassDescriptor::Vis_LevelUpEffect.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_c8);
  return;
}

// LevelUpDelBinding @ 14bf5dea0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UDS_VM_HUD_PopupCharStatus::LevelUpDelBinding(UDS_VM_HUD_PopupCharStatus *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  char *pcVar4;
  UObject *this_00;
  UFunction *pUVar5;
  char *pcVar6;
  <lambda_1> local_res10 [8];
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b8;
  FWeakObjectPtr local_b0;
  FName local_a8;
  FName local_a0;
  FName local_98;
  UDS_VM_HUD_PopupCharStatus *local_90;
  FName *local_88;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_80;
  FDestructionSentinel local_70;
  FReadAccessScope local_58;
  FReadAccessScope local_40;
  
  LevelUpDelUnBinding(this);
  UDS_PlayerData::GetData((ulong64)&local_res18,UDS_PlayerData::MainPlayerEntityID,false);
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  if (!bVar2) {
    return;
  }
  FWeakObjectPtr::Get(&local_res18);
  UDS_CharInfoData::GetData((ulong64)&local_res20);
  bVar2 = TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar2) {
    return;
  }
  pUVar3 = FWeakObjectPtr::Get(&local_res20);
  pcVar4 = strstr("&UDS_VM_HUD_PopupCharStatus::OnLevelUp","::");
  if (pcVar4 == (char *)0x0) {
LAB_14bf5df7d:
    pcVar6 = &DAT_00000002;
LAB_14bf5df82:
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
      pcVar6 = pcVar4;
      pcVar4 = strstr(pcVar6 + 1,"::");
    } while (pcVar4 != (char *)0x0);
    if (pcVar6 == (char *)0x0) goto LAB_14bf5df7d;
    pcVar6 = pcVar6 + 2;
    if (*pcVar6 == '0') goto LAB_14bf5df82;
  }
  ::FName::FName(&local_98,pcVar6);
  if ((this == (UDS_VM_HUD_PopupCharStatus *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4c8,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_a0 = local_98;
  local_b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_b0.ObjectIndex = 0;
  local_b0.ObjectSerialNumber = 0;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  if ((this == (UDS_VM_HUD_PopupCharStatus *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_90 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this != (UDS_VM_HUD_PopupCharStatus *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_b0,(FObjectPtr)&local_90);
  local_a8 = local_a0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_b8,&local_58);
  if ((local_a8 == (FName)0x0) ||
     (this_00 = FWeakObjectPtr::Get(&local_b0), this_00 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
  }
  else {
    pUVar5 = UObject::FindFunction(this_00,local_a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
    if (pUVar5 != (UFunction *)0x0) goto LAB_14bf5e0c3;
  }
  local_88 = &local_a0;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,int_const_&>::
  __Internal_BindDynamic<UDS_VM_HUD_PopupCharStatus>'::__l2::<lambda_1>::operator()(&local_88);
LAB_14bf5e0c3:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_b8,&local_40);
  local_80.Object = local_b0;
  local_80.FunctionName = local_a8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar3[2].field_0x20,
             (FWriteAccessScope *)&local_70);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)(pUVar3 + 3),local_res10,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar3[2].field_0x20,&local_80
            );
  if (local_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
  return;
}

// LevelUpDelUnBinding @ 14bf5e150

void __thiscall UDS_VM_HUD_PopupCharStatus::LevelUpDelUnBinding(UDS_VM_HUD_PopupCharStatus *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18 [2];
  
  UDS_PlayerData::GetData((ulong64)&local_res10,UDS_PlayerData::MainPlayerEntityID,false);
  bVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar1) {
    FWeakObjectPtr::Get(&local_res10);
    UDS_CharInfoData::GetData((ulong64)local_res18);
    bVar1 = TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> *)local_res18,(void *)0x0);
    if (!bVar1) {
      pUVar2 = FWeakObjectPtr::Get(local_res18);
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar2[2].field_0x20,
                 (UObject *)this);
    }
  }
  return;
}

// OnAnimationFinished @ 14bf5ee90

void __thiscall
UDS_VM_HUD_PopupCharStatus::OnAnimationFinished
          (UDS_VM_HUD_PopupCharStatus *this,FDS_WidgetAnimationEventField *param_1)

{
  FName local_18;
  int local_10;
  
  this->Vis_LevelUpEffect = Collapsed;
  local_10 = FFieldNotificationClassDescriptor::Vis_LevelUpEffect.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Vis_LevelUpEffect.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnChangedCurrentDeck @ 14bf606b0

void __thiscall UDS_VM_HUD_PopupCharStatus::OnChangedCurrentDeck(UDS_VM_HUD_PopupCharStatus *this)

{
  ulong64 uVar1;
  UDS_VM_CharInfoData *this_00;
  code *pcVar2;
  FDS_ViewModelContext_CharInfoData *pFVar3;
  bool bVar4;
  UObject *pUVar5;
  FWeakObjectPtr local_res10;
  FName local_38;
  int local_30;
  TSharedPtr<FDS_ViewModelContext_CharInfoData,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  UDS_PlayerData::GetData((ulong64)&local_res10,UDS_PlayerData::MainPlayerEntityID,false);
  bVar4 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar4) {
    LevelUpDelBinding(this);
    pUVar5 = FWeakObjectPtr::Get(&local_res10);
    uVar1 = *(ulong64 *)&pUVar5[8].field_0x10;
    if ((this->VM_HUD_CharInfoData).field0_0x0.DebugPtr != (UDS_VM_CharInfoData *)0x0) {
      MakeContext<FDS_ViewModelContext_CharInfoData>(&local_28);
      pFVar3 = local_28.Object;
      if (local_28.Object == (FDS_ViewModelContext_CharInfoData *)0x0) {
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
      *(undefined4 *)&pFVar3->_padding_ = 0xe;
      pFVar3->CharEntityID = uVar1;
      this_00 = (this->VM_HUD_CharInfoData).field0_0x0.DebugPtr;
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
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_18);
      local_30 = FFieldNotificationClassDescriptor::VM_HUD_CharInfoData.BitNumber;
      local_38 = FFieldNotificationClassDescriptor::VM_HUD_CharInfoData.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
    }
    UpdateBuffGroupInfo(this,uVar1);
  }
  return;
}

// OnLevelUp @ 14bf643c0

void __thiscall UDS_VM_HUD_PopupCharStatus::OnLevelUp(UDS_VM_HUD_PopupCharStatus *this,int *param_1)

{
  FName *pFVar1;
  FName local_res8 [4];
  FName local_18;
  int local_10;
  
  pFVar1 = ::FName::FName(local_res8,"Ani_Open");
  (this->LevelUpAnimationEvent).AnimationName = *pFVar1;
  (this->LevelUpAnimationEvent).AnimationEventType = PlayForward;
  this->Vis_LevelUpEffect = HitTestInvisible;
  local_10 = FFieldNotificationClassDescriptor::Vis_LevelUpEffect.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Vis_LevelUpEffect.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  local_10 = FFieldNotificationClassDescriptor::LevelUpAnimationEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::LevelUpAnimationEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnPartyIn @ 14bf65e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_HUD_PopupCharStatus::OnPartyIn(UDS_VM_HUD_PopupCharStatus *this)

{
  code *pcVar1;
  bool bVar2;
  FDS_PartyRepo *pFVar3;
  long64 lVar4;
  UObject *pUVar5;
  UDS_LogManager *pUVar6;
  ESlateVisibility EVar7;
  undefined1 auStackY_1b8 [32];
  FWeakObjectPtr local_178 [2];
  FName local_168;
  int local_160;
  FName local_158;
  int local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  this->Vis_Party = HitTestInvisible;
  local_160 = FFieldNotificationClassDescriptor::Vis_Party.BitNumber;
  local_168 = FFieldNotificationClassDescriptor::Vis_Party.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_168);
  UDS_PlayerData::GetData((ulong64)local_178,UDS_PlayerData::MainPlayerEntityID,false);
  bVar2 = FWeakObjectPtr::IsValid(local_178);
  if (bVar2) {
    pFVar3 = TDS_Singleton<FDS_PartyRepo>::GetInst();
    lVar4 = FDS_PartyInfo::GetPartyLeaderUID(&pFVar3->PartyInfo);
    pUVar5 = FWeakObjectPtr::Get(local_178);
    EVar7 = Collapsed;
    if (lVar4 == *(longlong *)&pUVar5[6].field_0x8) {
      EVar7 = HitTestInvisible;
    }
    this->Vis_PartyLeader = EVar7;
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      FWeakObjectPtr::Get(local_178);
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_HUD_PopupCharStatus::OnPartyInfoChanged",0x2e,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Display,local_148.Ptr,0xf2,
                 L"MainChar Hud PartyLeaderUID %lld PlayerUID %lld");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    local_150 = FFieldNotificationClassDescriptor::Vis_PartyLeader.BitNumber;
    local_158 = FFieldNotificationClassDescriptor::Vis_PartyLeader.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
    PartySlotChanged(this);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1014518541430292713>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_HUD_PopupCharStatus.cpp"
                       ,0xe9,"playerData.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnPartyInfoChanged @ 14bf66050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_HUD_PopupCharStatus::OnPartyInfoChanged(UDS_VM_HUD_PopupCharStatus *this)

{
  code *pcVar1;
  bool bVar2;
  FDS_PartyRepo *pFVar3;
  long64 lVar4;
  UObject *pUVar5;
  UDS_LogManager *pUVar6;
  ESlateVisibility EVar7;
  undefined1 auStackY_198 [32];
  FWeakObjectPtr local_158 [2];
  FName local_148;
  int local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  UDS_PlayerData::GetData((ulong64)local_158,UDS_PlayerData::MainPlayerEntityID,false);
  bVar2 = FWeakObjectPtr::IsValid(local_158);
  if (bVar2) {
    pFVar3 = TDS_Singleton<FDS_PartyRepo>::GetInst();
    lVar4 = FDS_PartyInfo::GetPartyLeaderUID(&pFVar3->PartyInfo);
    pUVar5 = FWeakObjectPtr::Get(local_158);
    EVar7 = Collapsed;
    if (lVar4 == *(longlong *)&pUVar5[6].field_0x8) {
      EVar7 = HitTestInvisible;
    }
    this->Vis_PartyLeader = EVar7;
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      FWeakObjectPtr::Get(local_158);
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_HUD_PopupCharStatus::OnPartyInfoChanged",0x2e,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Display,local_138.Ptr,0xf2,
                 L"MainChar Hud PartyLeaderUID %lld PlayerUID %lld");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    local_140 = FFieldNotificationClassDescriptor::Vis_PartyLeader.BitNumber;
    local_148 = FFieldNotificationClassDescriptor::Vis_PartyLeader.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_148);
    PartySlotChanged(this);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1014518541430292713>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_HUD_PopupCharStatus.cpp"
                       ,0xe9,"playerData.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnPartyLeaderChange @ 14bf66220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_HUD_PopupCharStatus::OnPartyLeaderChange(UDS_VM_HUD_PopupCharStatus *this,long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  ESlateVisibility EVar3;
  UObject *pUVar4;
  UDS_LogManager *pUVar5;
  undefined1 auStackY_1a8 [32];
  FWeakObjectPtr local_168 [2];
  FName local_158;
  int local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  UDS_PlayerData::GetData((ulong64)local_168,UDS_PlayerData::MainPlayerEntityID,false);
  bVar2 = FWeakObjectPtr::IsValid(local_168);
  if (bVar2) {
    pUVar4 = FWeakObjectPtr::Get(local_168);
    EVar3 = Collapsed;
    if (param_1 == *(longlong *)&pUVar4[6].field_0x8) {
      EVar3 = SelfHitTestInvisible;
    }
    this->Vis_PartyLeader = EVar3;
    local_150 = FFieldNotificationClassDescriptor::Vis_PartyLeader.BitNumber;
    local_158 = FFieldNotificationClassDescriptor::Vis_PartyLeader.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_HUD_PopupCharStatus::OnPartyLeaderChange",0x2f,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Display,local_148.Ptr,0x115,
                 L"MainChar Hud OnPartyLeaderChange PartyLeaderUID %lld PlayerUID %lld");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1014518541430292749>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_HUD_PopupCharStatus.cpp"
                       ,0x10d,"playerData.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnPartyOut @ 14bf663b0

void __thiscall UDS_VM_HUD_PopupCharStatus::OnPartyOut(UDS_VM_HUD_PopupCharStatus *this)

{
  longlong *plVar1;
  FName local_18;
  int local_10;
  
  this->Vis_Party = Collapsed;
  this->Vis_PartyLeader = Collapsed;
  plVar1 = &this->_padding_;
  local_10 = FFieldNotificationClassDescriptor::Vis_Party.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Vis_Party.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::Vis_PartyLeader.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Vis_PartyLeader.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  return;
}

// OnPartySlotChanged @ 14bf66420

void __thiscall UDS_VM_HUD_PopupCharStatus::OnPartySlotChanged(UDS_VM_HUD_PopupCharStatus *this)

{
  FName FVar1;
  int iVar2;
  int iVar3;
  FDS_PartyRepo *pFVar4;
  FName FStack_18;
  int iStack_10;
  
  pFVar4 = TDS_Singleton<FDS_PartyRepo>::GetInst();
  iVar2 = FFieldNotificationClassDescriptor::PartyNumber.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::PartyNumber.FieldName;
  iVar3 = FDS_PartyInfo::GetMyPartyNumber(&pFVar4->PartyInfo);
  if (this->PartyNumber != iVar3) {
    this->PartyNumber = iVar3;
    FStack_18 = FVar1;
    iStack_10 = iVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_18);
  }
  return;
}

// OnSetViewModel @ 14bf68e30

void __thiscall
UDS_VM_HUD_PopupCharStatus::OnSetViewModel
          (UDS_VM_HUD_PopupCharStatus *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  ulong64 uVar2;
  bool bVar3;
  UObject *pUVar4;
  FWeakObjectPtr local_res8;
  FName local_18;
  int local_10;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  this->CoolTimePanelVisibility = Visible;
  local_10 = FFieldNotificationClassDescriptor::CoolTimePanelVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CoolTimePanelVisibility.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  UDS_PlayerData::GetData((ulong64)&local_res8,UDS_PlayerData::MainPlayerEntityID,false);
  bVar3 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar3) {
    pUVar4 = FWeakObjectPtr::Get(&local_res8);
    uVar2 = *(ulong64 *)&pUVar4[8].field_0x10;
    UpdateMainCharStatusInfo(this,uVar2);
    UpdateBuffGroupInfo(this,uVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// PartySlotChanged @ 14bf739d0

void __thiscall UDS_VM_HUD_PopupCharStatus::PartySlotChanged(UDS_VM_HUD_PopupCharStatus *this)

{
  FName FVar1;
  int iVar2;
  int iVar3;
  FDS_PartyRepo *pFVar4;
  FName local_18;
  int local_10;
  
  pFVar4 = TDS_Singleton<FDS_PartyRepo>::GetInst();
  iVar2 = FFieldNotificationClassDescriptor::PartyNumber.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::PartyNumber.FieldName;
  iVar3 = FDS_PartyInfo::GetMyPartyNumber(&pFVar4->PartyInfo);
  if (this->PartyNumber != iVar3) {
    this->PartyNumber = iVar3;
    local_18 = FVar1;
    local_10 = iVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UnbindModel @ 14bf84b70

void __thiscall UDS_VM_HUD_PopupCharStatus::UnbindModel(UDS_VM_HUD_PopupCharStatus *this)

{
  UDS_PartyEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_PartyEvent::GetEvent();
  if (pUVar1 != (UDS_PartyEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnJoinedParty,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnLeftParty,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnPartyLeaderChanged,
               this);
  }
  LevelUpDelUnBinding(this);
  return;
}

// UpdateBuffGroupInfo @ 14bf864b0

void __thiscall
UDS_VM_HUD_PopupCharStatus::UpdateBuffGroupInfo(UDS_VM_HUD_PopupCharStatus *this,ulong64 param_1)

{
  UDS_VM_CharBuffData *pUVar1;
  code *pcVar2;
  FDS_ViewModelContext_CharBuffData *pFVar3;
  bool bVar4;
  FWeakObjectPtr local_res18;
  FName local_res20;
  FName local_88 [2];
  FName local_78;
  int local_70;
  FName local_68;
  int local_60;
  TSharedPtr<FDS_ViewModelContext_CharBuffData,1> local_58;
  TSharedPtr<FDS_ViewModelContext_CharBuffData,1> local_48;
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  
  UDS_CharBuffData::GetData((ulong64)&local_res18);
  bVar4 = TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr> *)&local_res18,(void *)0x0);
  if (!bVar4) {
    if ((this->VM_CharBuffData).field0_0x0.DebugPtr != (UDS_VM_CharBuffData *)0x0) {
      MakeContext<FDS_ViewModelContext_CharBuffData>(&local_58);
      ::FName::FName(&local_res20,"DS_VM_CharBuffData_Buff");
      pFVar3 = local_58.Object;
      if ((local_58.Object == (FDS_ViewModelContext_CharBuffData *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar3->_padding_ = (longlong)local_res20;
      *(undefined4 *)&pFVar3->_padding_ = 0x10;
      (pFVar3->Value).WeakPtr = local_res18;
      pFVar3->BuffListFilterType = Buff;
      local_38.Object = (FDS_ViewModelContext *)local_58.Object;
      local_38.SharedReferenceCount.ReferenceController =
           local_58.SharedReferenceCount.ReferenceController;
      pFVar3->NeedBuffCount = 0xf;
      pUVar1 = (this->VM_CharBuffData).field0_0x0.DebugPtr;
      if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar1,&local_38);
      local_70 = FFieldNotificationClassDescriptor::VM_CharBuffData.BitNumber;
      local_78 = FFieldNotificationClassDescriptor::VM_CharBuffData.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
    }
    if ((this->VM_CharDeBuffData).field0_0x0.DebugPtr != (UDS_VM_CharBuffData *)0x0) {
      MakeContext<FDS_ViewModelContext_CharBuffData>(&local_48);
      ::FName::FName(local_88,"DS_VM_CharBuffData_DeBuff");
      pFVar3 = local_48.Object;
      if ((local_48.Object == (FDS_ViewModelContext_CharBuffData *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar3->_padding_ = (longlong)local_88[0];
      *(undefined4 *)&pFVar3->_padding_ = 0x10;
      (pFVar3->Value).WeakPtr = local_res18;
      pFVar3->BuffListFilterType = Debuff;
      local_28.Object = (FDS_ViewModelContext *)local_48.Object;
      local_28.SharedReferenceCount.ReferenceController =
           local_48.SharedReferenceCount.ReferenceController;
      pFVar3->NeedBuffCount = 0xf;
      pUVar1 = (this->VM_CharDeBuffData).field0_0x0.DebugPtr;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar1,&local_28);
      local_60 = FFieldNotificationClassDescriptor::VM_CharDeBuffData.BitNumber;
      local_68 = FFieldNotificationClassDescriptor::VM_CharDeBuffData.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

// UpdateMainCharStatusInfo @ 14bf88240

void __thiscall
UDS_VM_HUD_PopupCharStatus::UpdateMainCharStatusInfo
          (UDS_VM_HUD_PopupCharStatus *this,ulong64 param_1)

{
  UDS_VM_HUD_QuickChanger *this_00;
  UDS_VM_CharInfoData *this_01;
  code *pcVar1;
  FDS_ViewModelContext_CharInfoData *pFVar2;
  bool bVar3;
  FDS_ViewModelContext *pFVar4;
  UScriptStruct *pUVar5;
  UDS_ViewModelContextManager *this_02;
  FDS_ViewModelContext *pFVar6;
  FDS_ViewModelContext *pFVar7;
  FName local_68;
  int local_60;
  FName local_58;
  int local_50;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  TSharedPtr<FDS_ViewModelContext_CharInfoData,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if ((this->VM_HUD_QuickChanger_Current).field0_0x0.DebugPtr != (UDS_VM_HUD_QuickChanger *)0x0) {
    pFVar4 = ::operator_new(0x38);
    pFVar7 = (FDS_ViewModelContext *)0x0;
    pFVar6 = pFVar7;
    if (pFVar4 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar4->ViewModelTemplateKey = 0;
      *(atomic<int> *)&pFVar4[1].DerivedStaticStruct = (atomic<int>)0x0;
      pFVar4[1].ViewModelName.Number = 0;
      *(undefined8 *)&pFVar4->DerivedStaticStruct = 0;
      (pFVar4->ViewModelName).ComparisonIndex = 0;
      (pFVar4->ViewModelName).Number = 0;
      pFVar4->_padding_ = (longlong)&___7FDS_ViewModelContext_QuickChanger__6B_;
      pFVar4[1]._padding_ = 0;
      *(undefined8 *)((atomic<int> *)&pFVar4[1].DerivedStaticStruct + 1) = 0;
      pFVar6 = pFVar4;
    }
    pFVar4 = ::operator_new(0x20);
    if (pFVar4 != (FDS_ViewModelContext *)0x0) {
      *(atomic<int> *)&pFVar4->DerivedStaticStruct = (atomic<int>)0x1;
      *(code **)&(pFVar4->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      pFVar4->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_QuickChanger__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      ((atomic<int> *)&pFVar4->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pFVar4->ViewModelTemplateKey = pFVar6;
      pFVar7 = pFVar4;
    }
    if ((pFVar6 == (FDS_ViewModelContext *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar5 = FDS_ViewModelContext_QuickChanger::StaticStruct();
    *(UScriptStruct **)&pFVar6->DerivedStaticStruct = pUVar5;
    this_02 = UDS_ViewModelContextManager::GetInst();
    if (this_02 != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar7 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar7->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar7->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_48.Object = pFVar6;
      local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar7;
      UDS_ViewModelContextManager::RegisterContext(this_02,&local_48);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
    }
    pFVar6->ViewModelTemplateKey = HUD_QuickChanger;
    pFVar6[1]._padding_ = param_1;
    ((atomic<int> *)&pFVar6[1].DerivedStaticStruct)[1] = (atomic<int>)0x1;
    pFVar6[1].ViewModelName.ComparisonIndex.Value = 6;
    this_00 = (this->VM_HUD_QuickChanger_Current).field0_0x0.DebugPtr;
    if (pFVar7 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar7->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar7->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_28.Object = pFVar6;
    local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar7;
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_28);
    local_60 = FFieldNotificationClassDescriptor::VM_HUD_QuickChanger_Current.BitNumber;
    local_68 = FFieldNotificationClassDescriptor::VM_HUD_QuickChanger_Current.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar7);
  }
  if ((this->VM_HUD_CharInfoData).field0_0x0.DebugPtr != (UDS_VM_CharInfoData *)0x0) {
    MakeContext<FDS_ViewModelContext_CharInfoData>(&local_38);
    pFVar2 = local_38.Object;
    if ((local_38.Object == (FDS_ViewModelContext_CharInfoData *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)&pFVar2->_padding_ = 0xe;
    pFVar2->CharEntityID = param_1;
    this_01 = (this->VM_HUD_CharInfoData).field0_0x0.DebugPtr;
    local_18.Object = (FDS_ViewModelContext *)local_38.Object;
    local_18.SharedReferenceCount.ReferenceController =
         local_38.SharedReferenceCount.ReferenceController;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_01,&local_18);
    local_50 = FFieldNotificationClassDescriptor::VM_HUD_CharInfoData.BitNumber;
    local_58 = FFieldNotificationClassDescriptor::VM_HUD_CharInfoData.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  return;
}

// UpdateStatusInfo @ 14bf8ad30

void __thiscall UDS_VM_HUD_PopupCharStatus::UpdateStatusInfo(UDS_VM_HUD_PopupCharStatus *this)

{
  ulong64 uVar1;
  bool bVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res10 [3];
  
  UDS_PlayerData::GetData((ulong64)local_res10,UDS_PlayerData::MainPlayerEntityID,false);
  bVar2 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(local_res10);
    uVar1 = *(ulong64 *)&pUVar3[8].field_0x10;
    UpdateMainCharStatusInfo(this,uVar1);
    UpdateBuffGroupInfo(this,uVar1);
  }
  return;
}

