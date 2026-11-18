// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 26

// SetAnimationFinishEvent_WrapperImpl @ 14b6e03d0

void __cdecl
UDS_VM_SkillModeControl::SetAnimationFinishEvent_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined8 *)((longlong)param_1 + 0x178) = 0;
  UDS_ViewModelBase::SetVisibility(param_1,*(ESlateVisibility *)((longlong)param_1 + 400));
  return;
}

// StaticClass @ 14b6e03e0

UClass * __cdecl UDS_VM_SkillModeControl::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_SkillModeControl.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_SkillModeControl",
               &Z_Registration_Info_UClass_UDS_VM_SkillModeControl.InnerSingleton,
               StaticRegisterNativesUDS_VM_SkillModeControl,0x198,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_SkillModeControl>,
               InternalVTableHelperCtorCaller<UDS_VM_SkillModeControl>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_SkillModeControl.InnerSingleton;
}

// UDS_VM_SkillModeControl @ 14b6e5a90

UDS_VM_SkillModeControl * __thiscall
UDS_VM_SkillModeControl::UDS_VM_SkillModeControl
          (UDS_VM_SkillModeControl *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->DesiredVisibilityState = Hidden;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_SkillModeControl__6B_;
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
  (this->VM_W_NormalAttack).field0_0x0.DebugPtr = (UDS_VM_HUD_SkillSlot *)0x0;
  (this->VM_W_DefaultSkill_1).field0_0x0.DebugPtr = (UDS_VM_HUD_SkillSlot *)0x0;
  (this->VM_W_DefaultSkill_2).field0_0x0.DebugPtr = (UDS_VM_HUD_SkillSlot *)0x0;
  (this->VM_W_DefaultSkill_3).field0_0x0.DebugPtr = (UDS_VM_HUD_SkillSlot *)0x0;
  (this->VM_W_DefaultSkill_4).field0_0x0.DebugPtr = (UDS_VM_HUD_SkillSlot *)0x0;
  (this->VM_W_TraitSkill).field0_0x0.DebugPtr = (UDS_VM_HUD_SkillSlot *)0x0;
  (this->VM_W_SpecialSkill).field0_0x0.DebugPtr = (UDS_VM_HUD_SkillSlot *)0x0;
  (this->VM_W_Avoid).field0_0x0.DebugPtr = (UDS_VM_W_Avoid *)0x0;
  (this->SwimCloseTimerHandle).Handle = 0;
  (this->PlayingAnimationName).ComparisonIndex = 0;
  (this->PlayingAnimationName).Number = 0;
  this->CurrentEntityID = 0;
  (this->CharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->AnimationEvent).NumberOfLoops = 1;
  (this->AnimationFinishEvent).NumberOfLoops = 1;
  return this;
}

// UDS_VM_SkillModeControl @ 14b6e5bc0

UDS_VM_SkillModeControl * __thiscall
UDS_VM_SkillModeControl::UDS_VM_SkillModeControl
          (UDS_VM_SkillModeControl *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->DesiredVisibilityState = Hidden;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_SkillModeControl__6B_;
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
  (this->VM_W_NormalAttack).field0_0x0.DebugPtr = (UDS_VM_HUD_SkillSlot *)0x0;
  (this->VM_W_DefaultSkill_1).field0_0x0.DebugPtr = (UDS_VM_HUD_SkillSlot *)0x0;
  (this->VM_W_DefaultSkill_2).field0_0x0.DebugPtr = (UDS_VM_HUD_SkillSlot *)0x0;
  (this->VM_W_DefaultSkill_3).field0_0x0.DebugPtr = (UDS_VM_HUD_SkillSlot *)0x0;
  (this->VM_W_DefaultSkill_4).field0_0x0.DebugPtr = (UDS_VM_HUD_SkillSlot *)0x0;
  (this->VM_W_TraitSkill).field0_0x0.DebugPtr = (UDS_VM_HUD_SkillSlot *)0x0;
  (this->VM_W_SpecialSkill).field0_0x0.DebugPtr = (UDS_VM_HUD_SkillSlot *)0x0;
  (this->VM_W_Avoid).field0_0x0.DebugPtr = (UDS_VM_W_Avoid *)0x0;
  (this->SwimCloseTimerHandle).Handle = 0;
  (this->PlayingAnimationName).ComparisonIndex = 0;
  (this->PlayingAnimationName).Number = 0;
  this->CurrentEntityID = 0;
  (this->CharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->AnimationEvent).NumberOfLoops = 1;
  (this->AnimationFinishEvent).NumberOfLoops = 1;
  return this;
}

// ~UDS_VM_SkillModeControl @ 14b6e7190

void __thiscall UDS_VM_SkillModeControl::~UDS_VM_SkillModeControl(UDS_VM_SkillModeControl *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_SkillModeControl__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationFinishEvent).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->AnimationFinishEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationFinishEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationFinishEvent).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->AnimationFinishEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationFinishEvent).Delegate_AnimationFinish)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationEvent).Delegate_AnimationFinish);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6e97c0

IClassDescriptor * __thiscall
UDS_VM_SkillModeControl::GetFieldNotificationDescriptor(UDS_VM_SkillModeControl *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_SkillModeControl::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6ea240

UClass * __cdecl UDS_VM_SkillModeControl::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_SkillModeControl.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_SkillModeControl",
               &Z_Registration_Info_UClass_UDS_VM_SkillModeControl.InnerSingleton,
               StaticRegisterNativesUDS_VM_SkillModeControl,0x198,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_SkillModeControl>,
               InternalVTableHelperCtorCaller<UDS_VM_SkillModeControl>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_SkillModeControl.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_SkillModeControl @ 14b6eac00

void __cdecl UDS_VM_SkillModeControl::StaticRegisterNativesUDS_VM_SkillModeControl(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_SkillModeControl_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnRefreshVisibility @ 14b6ec480

void __cdecl
UDS_VM_SkillModeControl::execOnRefreshVisibility(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnRefreshVisibility((UDS_VM_SkillModeControl *)param_1);
  return;
}

// BindCharacterEvent @ 14bf3fe00

void __thiscall
UDS_VM_SkillModeControl::BindCharacterEvent(UDS_VM_SkillModeControl *this,ulong64 param_1)

{
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *this_00;
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> TVar4;
  UDS_CharStateData *pUVar5;
  ESlateVisibility EVar6;
  ESlateVisibility EVar7;
  EDS_CharDetailState local_res8;
  EDS_CharDetailState local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  undefined1 local_58 [16];
  code *local_48;
  undefined4 uStack_40;
  uint uStack_3c;
  code *local_38;
  longlong lStack_30;
  
  this_00 = &this->CharStateData;
  bVar2 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[7].field_0x20,this);
    this_00->WeakPtr = (FWeakObjectPtr)0x0;
  }
  this->CurrentEntityID = param_1;
  TVar4 = UDS_CharStateData::GetData((ulong64)local_58);
                    /* WARNING: Load size is inaccurate */
  this_00->WeakPtr = *TVar4.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar2) {
    uStack_40 = 0;
    local_48 = OnChangedCharState;
    lStack_30 = (ulonglong)uStack_3c << 0x20;
    local_38 = OnChangedCharState;
    pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_SkillModeControl>
              ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
                *)&pUVar3[7].field_0x20,(UDS_VM_SkillModeControl *)&stack0xffffffffffffffb8,
               (pmf_8508e4ad *)this);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5708460893042376889>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Skill\\DS_VM_SkillModeControl.cpp"
                       ,0xb9,"CharStateData.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res18 = this_00->WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(&stack0x00000018);
  EVar7 = Collapsed;
  if (bVar2) {
    pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&stack0x00000018);
    local_res8 = SkillMode_Aim;
    bVar2 = UDS_CharStateData::HasCharDetailState(pUVar5,&stack0x00000008);
    EVar6 = Collapsed;
    if (bVar2) {
      EVar6 = SelfHitTestInvisible;
    }
  }
  else {
    EVar6 = Collapsed;
  }
  local_res20 = this_00->WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(&stack0x00000020);
  if (bVar2) {
    pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&stack0x00000020);
    local_res10 = SkillMode_Aim;
    bVar2 = UDS_CharStateData::HasCharDetailState(pUVar5,&stack0x00000010);
    if (bVar2) {
      EVar7 = SelfHitTestInvisible;
    }
  }
  UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,EVar7);
  this->DesiredVisibilityState = EVar6;
  return;
}

// BindModel @ 14bf42050

void __thiscall UDS_VM_SkillModeControl::BindModel(UDS_VM_SkillModeControl *this)

{
  ulong64 uVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  TMulticastDelegateRegistration<void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
  ::AddUObject<UDS_VM_SkillModeControl>
            ((TMulticastDelegateRegistration<void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
              *)&ADS_MainCharacter::MainCharacterSwitchCompleteDelegate,
             (UDS_VM_SkillModeControl *)&stack0x00000010,(pmf_c14cc5b0 *)this);
  uVar1 = UDS_PlayerData::GetMainPlayerCurrentEntityID();
  BindCharacterEvent(this,uVar1);
  return;
}

// GetControlVisibility @ 14bf571c0

ESlateVisibility __thiscall
UDS_VM_SkillModeControl::GetControlVisibility
          (UDS_VM_SkillModeControl *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1)

{
  bool bVar1;
  UDS_CharStateData *this_00;
  ESlateVisibility EVar2;
  FWeakObjectPtr local_res10;
  EDS_CharDetailState local_res18 [4];
  
  local_res10 = param_1.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar1) {
    return Collapsed;
  }
  this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
  local_res18[0] = SkillMode_Aim;
  bVar1 = UDS_CharStateData::HasCharDetailState(this_00,local_res18);
  EVar2 = Collapsed;
  if (bVar1) {
    EVar2 = SelfHitTestInvisible;
  }
  return EVar2;
}

// InitViewModel @ 14bf5b720

void __thiscall UDS_VM_SkillModeControl::InitViewModel(UDS_VM_SkillModeControl *this)

{
  UDS_VM_HUD_SkillSlot *pUVar1;
  UDS_VM_W_Avoid *pUVar2;
  
  if ((this->VM_W_NormalAttack).field0_0x0.DebugPtr == (UDS_VM_HUD_SkillSlot *)0x0) {
    pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_HUD_SkillSlot>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_VM_HUD_SkillSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->VM_W_NormalAttack).field0_0x0.DebugPtr = pUVar1;
  }
  if ((this->VM_W_DefaultSkill_1).field0_0x0.DebugPtr == (UDS_VM_HUD_SkillSlot *)0x0) {
    pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_HUD_SkillSlot>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_VM_HUD_SkillSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->VM_W_DefaultSkill_1).field0_0x0.DebugPtr = pUVar1;
  }
  if ((this->VM_W_DefaultSkill_2).field0_0x0.DebugPtr == (UDS_VM_HUD_SkillSlot *)0x0) {
    pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_HUD_SkillSlot>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_VM_HUD_SkillSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->VM_W_DefaultSkill_2).field0_0x0.DebugPtr = pUVar1;
  }
  if ((this->VM_W_DefaultSkill_3).field0_0x0.DebugPtr == (UDS_VM_HUD_SkillSlot *)0x0) {
    pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_HUD_SkillSlot>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_VM_HUD_SkillSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->VM_W_DefaultSkill_3).field0_0x0.DebugPtr = pUVar1;
  }
  if ((this->VM_W_DefaultSkill_4).field0_0x0.DebugPtr == (UDS_VM_HUD_SkillSlot *)0x0) {
    pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_HUD_SkillSlot>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_VM_HUD_SkillSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->VM_W_DefaultSkill_4).field0_0x0.DebugPtr = pUVar1;
  }
  if ((this->VM_W_TraitSkill).field0_0x0.DebugPtr == (UDS_VM_HUD_SkillSlot *)0x0) {
    pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_HUD_SkillSlot>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_VM_HUD_SkillSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->VM_W_TraitSkill).field0_0x0.DebugPtr = pUVar1;
  }
  if ((this->VM_W_SpecialSkill).field0_0x0.DebugPtr == (UDS_VM_HUD_SkillSlot *)0x0) {
    pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_HUD_SkillSlot>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_VM_HUD_SkillSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->VM_W_SpecialSkill).field0_0x0.DebugPtr = pUVar1;
  }
  if ((this->VM_W_Avoid).field0_0x0.DebugPtr == (UDS_VM_W_Avoid *)0x0) {
    pUVar2 = UDS_ViewModelBase::CreateViewModel<UDS_VM_W_Avoid>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UDS_VM_W_Avoid *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (this->VM_W_Avoid).field0_0x0.DebugPtr = pUVar2;
  }
  return;
}

// OnAnimationFinished @ 14bf5efd0

void __thiscall
UDS_VM_SkillModeControl::OnAnimationFinished
          (UDS_VM_SkillModeControl *this,FDS_WidgetAnimationEventField *param_1)

{
  ESlateVisibility EVar1;
  
  EVar1 = this->DesiredVisibilityState;
  (this->PlayingAnimationName).ComparisonIndex = 0;
  (this->PlayingAnimationName).Number = 0;
  UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,EVar1);
  return;
}

// OnChangedCharState @ 14bf60630

void __thiscall
UDS_VM_SkillModeControl::OnChangedCharState
          (UDS_VM_SkillModeControl *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
          FDS_ChangedCharStateInfo *param_2)

{
  if ((param_2->AddedCharDetailState == SkillMode_Aim) ||
     (param_2->RemovedCharDetailState == SkillMode_Aim)) {
    RefreshSkillList(this);
    ShowAnimation(this,param_1);
  }
  return;
}

// OnCloseInit @ 14bf634d0

void __thiscall UDS_VM_SkillModeControl::OnCloseInit(UDS_VM_SkillModeControl *this)

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

// OnMainCharChanged @ 14bf64c20

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
UDS_VM_SkillModeControl::OnMainCharChanged
          (UDS_VM_SkillModeControl *this,FDS_EntityBase *param_1,FDS_EntityBase *param_2)

{
  if (param_2 != (FDS_EntityBase *)0x0) {
    BindCharacterEvent(this,param_2->EntityID);
    return;
  }
  return;
}

// OnRefreshVisibility @ 14bf66a50

void __thiscall UDS_VM_SkillModeControl::OnRefreshVisibility(UDS_VM_SkillModeControl *this)

{
  bool bVar1;
  UDS_CharStateData *this_00;
  ESlateVisibility EVar2;
  EDS_CharDetailState local_res8 [2];
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FName local_18;
  int local_10;
  
  UDS_CharStateData::GetData((ulong64)&local_res10);
  bVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar1) {
    if (this->PlayingAnimationName != (FName)0x0) {
      (this->AnimationEvent).AnimationName = this->PlayingAnimationName;
      (this->AnimationEvent).AnimationEventType = StopAnimation;
      local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
      local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    local_res8[0] = None;
    local_res8[1] = None;
    (this->PlayingAnimationName).ComparisonIndex = 0;
    (this->PlayingAnimationName).Number = 0;
    local_res18 = local_res10;
    bVar1 = FWeakObjectPtr::IsValid(&local_res18);
    if (bVar1) {
      this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res18);
      local_res8[0] = 0x13;
      bVar1 = UDS_CharStateData::HasCharDetailState(this_00,local_res8);
      EVar2 = Collapsed;
      if (bVar1) {
        EVar2 = SelfHitTestInvisible;
      }
    }
    else {
      EVar2 = Collapsed;
    }
    UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,EVar2);
    this->DesiredVisibilityState = EVar2;
  }
  return;
}

// OnSetViewModel @ 14bf6de60

void __thiscall
UDS_VM_SkillModeControl::OnSetViewModel
          (UDS_VM_SkillModeControl *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  bool bVar2;
  UDS_CharStateData *this_00;
  ESlateVisibility EVar3;
  EDS_CharDetailState local_res8 [2];
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18 [2];
  FName local_28;
  int local_20;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  RefreshSkillList(this);
  UDS_CharStateData::GetData((ulong64)&local_res10);
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar2) {
    if (this->PlayingAnimationName != (FName)0x0) {
      (this->AnimationEvent).AnimationName = this->PlayingAnimationName;
      (this->AnimationEvent).AnimationEventType = StopAnimation;
      local_20 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
      local_28 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
    }
    local_res8[0] = None;
    local_res8[1] = None;
    (this->PlayingAnimationName).ComparisonIndex = 0;
    (this->PlayingAnimationName).Number = 0;
    local_res18[0] = local_res10;
    bVar2 = FWeakObjectPtr::IsValid(local_res18);
    if (bVar2) {
      this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res18);
      local_res8[0] = 0x13;
      bVar2 = UDS_CharStateData::HasCharDetailState(this_00,local_res8);
      EVar3 = Collapsed;
      if (bVar2) {
        EVar3 = SelfHitTestInvisible;
      }
    }
    else {
      EVar3 = Collapsed;
    }
    UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,EVar3);
    this->DesiredVisibilityState = EVar3;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnValidAnimation @ 14bf72b40

void __thiscall
UDS_VM_SkillModeControl::OnValidAnimation(UDS_VM_SkillModeControl *this,FName param_1,bool param_2)

{
  FName *pFVar1;
  FName local_res20;
  
  if (!param_2) {
    pFVar1 = ::FName::FName(&local_res20,"Close_Anim");
    if (param_1 == *pFVar1) {
      UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Collapsed);
      return;
    }
    pFVar1 = ::FName::FName(&local_res20,"Open_Anim");
    if (param_1 == *pFVar1) {
      UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,SelfHitTestInvisible);
    }
  }
  return;
}

// RefreshSkillList @ 14bf77a20

void __thiscall UDS_VM_SkillModeControl::RefreshSkillList(UDS_VM_SkillModeControl *this)

{
  UDS_VM_HUD_SkillSlot *pUVar1;
  UDS_VM_W_Avoid *this_00;
  code *pcVar2;
  bool bVar3;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_a8;
  FWeakObjectPtr local_a0;
  FWeakObjectPtr local_98 [2];
  TSharedPtr<FDS_ViewModelContext,1> local_88;
  UDS_VM_HUD_SkillSlot *local_78;
  UDS_VM_HUD_SkillSlot *local_70;
  UDS_VM_HUD_SkillSlot *local_68;
  UDS_VM_HUD_SkillSlot *local_60;
  UDS_VM_HUD_SkillSlot *local_58;
  UDS_VM_HUD_SkillSlot *local_50;
  UDS_VM_HUD_SkillSlot *local_48 [2];
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  
  pUVar1 = (this->VM_W_NormalAttack).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar1 != (UDS_VM_HUD_SkillSlot *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_VM_HUD_SkillSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_78 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UDS_VM_HUD_SkillSlot *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_78);
  RefreshSkillVM(this,0,(TWeakObjectPtr<UDS_VM_HUD_SkillSlot,FWeakObjectPtr>)local_res8,1);
  pUVar1 = (this->VM_W_DefaultSkill_1).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar1 != (UDS_VM_HUD_SkillSlot *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_VM_HUD_SkillSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_70 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UDS_VM_HUD_SkillSlot *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_70);
  RefreshSkillVM(this,1,(TWeakObjectPtr<UDS_VM_HUD_SkillSlot,FWeakObjectPtr>)local_res10,1);
  pUVar1 = (this->VM_W_DefaultSkill_2).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar1 != (UDS_VM_HUD_SkillSlot *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_VM_HUD_SkillSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_68 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UDS_VM_HUD_SkillSlot *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_68);
  RefreshSkillVM(this,2,(TWeakObjectPtr<UDS_VM_HUD_SkillSlot,FWeakObjectPtr>)local_res18,2);
  pUVar1 = (this->VM_W_DefaultSkill_3).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar1 != (UDS_VM_HUD_SkillSlot *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_VM_HUD_SkillSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_60 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UDS_VM_HUD_SkillSlot *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_60);
  RefreshSkillVM(this,3,(TWeakObjectPtr<UDS_VM_HUD_SkillSlot,FWeakObjectPtr>)local_res20,1);
  pUVar1 = (this->VM_W_DefaultSkill_4).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar1 != (UDS_VM_HUD_SkillSlot *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_VM_HUD_SkillSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
  }
  local_a8.ObjectIndex = 0;
  local_a8.ObjectSerialNumber = 0;
  local_58 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UDS_VM_HUD_SkillSlot *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FWeakObjectPtr::operator=(&local_a8,(FObjectPtr)&local_58);
  RefreshSkillVM(this,4,(TWeakObjectPtr<UDS_VM_HUD_SkillSlot,FWeakObjectPtr>)local_a8,2);
  pUVar1 = (this->VM_W_TraitSkill).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar1 != (UDS_VM_HUD_SkillSlot *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_VM_HUD_SkillSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
  }
  local_a0.ObjectIndex = 0;
  local_a0.ObjectSerialNumber = 0;
  local_50 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UDS_VM_HUD_SkillSlot *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FWeakObjectPtr::operator=(&local_a0,(FObjectPtr)&local_50);
  RefreshSkillVM(this,5,(TWeakObjectPtr<UDS_VM_HUD_SkillSlot,FWeakObjectPtr>)local_a0,0);
  pUVar1 = (this->VM_W_SpecialSkill).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar1 != (UDS_VM_HUD_SkillSlot *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_VM_HUD_SkillSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
  }
  local_98[0].ObjectIndex = 0;
  local_98[0].ObjectSerialNumber = 0;
  local_48[0] = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UDS_VM_HUD_SkillSlot *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FWeakObjectPtr::operator=(local_98,(FObjectPtr)local_48);
  RefreshSkillVM(this,6,(TWeakObjectPtr<UDS_VM_HUD_SkillSlot,FWeakObjectPtr>)local_98[0],0);
  if ((this->VM_W_Avoid).field0_0x0.DebugPtr != (UDS_VM_W_Avoid *)0x0) {
    MakeContext<FDS_ViewModelContext>(&local_88);
    if (local_88.Object != (FDS_ViewModelContext *)0x0) {
      if ((local_88.Object == (FDS_ViewModelContext *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (local_88.Object)->ViewModelTemplateKey = W_Avoid;
      this_00 = (this->VM_W_Avoid).field0_0x0.DebugPtr;
      local_38.Object = local_88.Object;
      local_38.SharedReferenceCount.ReferenceController =
           local_88.SharedReferenceCount.ReferenceController;
      if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_38);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.SharedReferenceCount.ReferenceController);
  }
  return;
}

// RefreshSkillVM @ 14bf789d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UDS_VM_SkillModeControl::RefreshSkillVM
          (UDS_VM_SkillModeControl *this,int param_1,
          TWeakObjectPtr<UDS_VM_HUD_SkillSlot,FWeakObjectPtr> param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  code *pcVar3;
  FDS_ViewModelContext_SkillSlot *pFVar4;
  bool bVar5;
  UDS_SkillDataSet *this_00;
  UDS_ViewModelBase *this_01;
  FWeakObjectPtr FVar6;
  undefined1 *puVar7;
  FWeakObjectPtr local_res18;
  undefined1 auStack_b8 [32];
  FWeakObjectPtr local_98;
  undefined8 local_90;
  TSharedPtr<FDS_ViewModelContext_SkillSlot,1> local_88;
  TSharedPtr<FDS_ViewModelContext,1> local_78;
  undefined1 local_68 [72];
  int local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_res18 = param_2.WeakPtr;
  bVar5 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar5) {
    FDS_EntityBase::GetMainPlayerEntityID(true);
    TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)&local_98);
    bVar5 = FWeakObjectPtr::IsValid(&local_98);
    if (bVar5) {
      this_00 = (UDS_SkillDataSet *)FWeakObjectPtr::Get(&local_98);
      UDS_SkillDataSet::GetSkillSlotDataMap_SkillMode
                (this_00,(TMap<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,0>_>
                          *)local_68);
      MakeContext<FDS_ViewModelContext_SkillSlot>(&local_88);
      pFVar4 = local_88.Object;
      if (local_88.Object != (FDS_ViewModelContext_SkillSlot *)0x0) {
        if ((local_88.Object == (FDS_ViewModelContext_SkillSlot *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(undefined4 *)&pFVar4->_padding_ = 0x49;
        if (local_68._8_4_ != local_68._52_4_) {
          puVar7 = local_68 + 0x38;
          if ((undefined1 *)local_68._64_8_ != (undefined1 *)0x0) {
            puVar7 = (undefined1 *)local_68._64_8_;
          }
          iVar2 = *(int *)(puVar7 + (ulonglong)(local_20 - 1U & param_1) * 4);
          while (iVar2 != -1) {
            lVar1 = local_68._0_8_ + (longlong)iVar2 * 0x14;
            if (*(int *)(local_68._0_8_ + (longlong)iVar2 * 0x14) == param_1) {
              if (lVar1 != 0) {
                FVar6 = *(FWeakObjectPtr *)(lVar1 + 4);
                goto LAB_14bf78b15;
              }
              break;
            }
            iVar2 = *(int *)(lVar1 + 0xc);
          }
        }
        local_90 = 0;
        FVar6.ObjectIndex = 0;
        FVar6.ObjectSerialNumber = 0;
LAB_14bf78b15:
        (pFVar4->SkillData).WeakPtr = FVar6;
        pFVar4->StackCountPosition = param_3;
        pFVar4->bShowInputKey = true;
        pFVar4->SlotIndex = param_1;
        this_01 = (UDS_ViewModelBase *)FWeakObjectPtr::Get(&local_res18);
        local_78.Object = (FDS_ViewModelContext *)local_88.Object;
        local_78.SharedReferenceCount.ReferenceController =
             local_88.SharedReferenceCount.ReferenceController;
        if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        UDS_ViewModelBase::SetContext(this_01,&local_78);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_88.SharedReferenceCount.ReferenceController);
      local_20 = 0;
      if ((undefined1 *)local_68._64_8_ != (undefined1 *)0x0) {
        FMemory::Free((void *)local_68._64_8_);
      }
      TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_68);
    }
  }
  return;
}

// ShowAnimation @ 14bf82e50

void __thiscall
UDS_VM_SkillModeControl::ShowAnimation
          (UDS_VM_SkillModeControl *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1)

{
  EDS_AnimationEventType *pEVar1;
  bool bVar2;
  UDS_CharStateData *this_00;
  FName *pFVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  ESlateVisibility EVar6;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FName local_58;
  int iStack_50;
  undefined4 uStack_4c;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  
  local_res10 = (FName)param_1.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_res10);
  if (bVar2) {
    local_58 = local_res10;
    bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_58);
    if (bVar2) {
      this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&local_58);
      local_res18.ComparisonIndex.Value = 0x13;
      bVar2 = UDS_CharStateData::HasCharDetailState(this_00,(EDS_CharDetailState *)&local_res18);
      EVar6 = Collapsed;
      if (bVar2) {
        EVar6 = SelfHitTestInvisible;
      }
    }
    else {
      EVar6 = Collapsed;
    }
    if (EVar6 != this->DesiredVisibilityState) {
      this->DesiredVisibilityState = EVar6;
      ::FName::FName(&local_res20,"Close_Anim");
      if (EVar6 == SelfHitTestInvisible) {
        UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,SelfHitTestInvisible);
        pFVar3 = ::FName::FName(&local_res18,"Open_Anim");
        local_res20 = *pFVar3;
      }
      pEVar1 = &(this->AnimationEvent).AnimationEventType;
      if (this->PlayingAnimationName != (FName)0x0) {
        (this->AnimationEvent).AnimationName = this->PlayingAnimationName;
        *pEVar1 = StopAnimation;
        iStack_50 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
        local_58 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
      }
      *pEVar1 = PlayForward;
      this->PlayingAnimationName = local_res20;
      (this->AnimationEvent).AnimationName = local_res20;
      bVar2 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                        ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                         &(this->AnimationEvent).Delegate_ValidAnimation);
      if (!bVar2) {
        iStack_50 = 0;
        local_58 = (FName)OnValidAnimation;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &(this->AnimationEvent).Delegate_ValidAnimation,(FWriteAccessScope *)&local_48);
        local_30 = &(this->AnimationEvent).Delegate_ValidAnimation.field_0x8;
        puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_30);
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = &
                    ___7__TCommonDelegateInstanceState___A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar5 = FDelegateHandle::GenerateNewID();
          puVar4[2] = uVar5;
          *puVar4 = &
                    ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_SkillModeControl____A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar4[3] = 0;
          local_res18 = (FName)this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res18);
          *(FName *)(puVar4 + 4) = local_58;
          puVar4[5] = CONCAT44(uStack_4c,iStack_50);
        }
        if (local_48.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
        }
      }
      iStack_50 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
      local_58 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
    }
  }
  return;
}

// StopAnimation @ 14bf834a0

void __thiscall UDS_VM_SkillModeControl::StopAnimation(UDS_VM_SkillModeControl *this,FName *param_1)

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

// UnBindCharacterEvent @ 14bf841a0

void __thiscall
UDS_VM_SkillModeControl::UnBindCharacterEvent(UDS_VM_SkillModeControl *this,ulong64 param_1)

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

// UnbindModel @ 14bf855f0

void __thiscall UDS_VM_SkillModeControl::UnbindModel(UDS_VM_SkillModeControl *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &ADS_MainCharacter::MainCharacterSwitchCompleteDelegate,this);
  bVar1 = FWeakObjectPtr::IsValid(&(this->CharStateData).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->CharStateData).WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[7].field_0x20,this);
    (this->CharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  }
  return;
}

