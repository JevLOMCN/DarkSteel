// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 25

// SetAnimationFinishEvent_WrapperImpl @ 14b6a0680

void __cdecl UDS_VM_NpcBossAI::SetAnimationFinishEvent_WrapperImpl(void *param_1,void *param_2)

{
  FName aFStackX_8 [4];
  
  aFStackX_8[0] = (FName)param_1;
  ::FName::FName(aFStackX_8,"Open_ani");
  return;
}

// StaticClass @ 14b6a0690

UClass * __cdecl UDS_VM_NpcBossAI::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_NpcBossAI.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_NpcBossAI",
               &Z_Registration_Info_UClass_UDS_VM_NpcBossAI.InnerSingleton,
               StaticRegisterNativesUDS_VM_NpcBossAI,0x2a8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_NpcBossAI>,
               InternalVTableHelperCtorCaller<UDS_VM_NpcBossAI>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_NpcBossAI.InnerSingleton;
}

// UDS_VM_NpcBossAI @ 14b6a6af0

UDS_VM_NpcBossAI * __thiscall
UDS_VM_NpcBossAI::UDS_VM_NpcBossAI(UDS_VM_NpcBossAI *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->CharStatusData).WeakPtr = (FWeakObjectPtr)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_NpcBossAI__6B_;
  (this->VM_StatusInfo_HP).field0_0x0.DebugPtr = (UDS_VM_StatusInfo *)0x0;
  (this->VM_StatusInfo_MP).field0_0x0.DebugPtr = (UDS_VM_StatusInfo *)0x0;
  (this->VM_StatusInfo_SP).field0_0x0.DebugPtr = (UDS_VM_StatusInfo *)0x0;
  (this->VM_StatusInfo_GP).field0_0x0.DebugPtr = (UDS_VM_StatusInfo *)0x0;
  FText::FText(&this->AILogText);
  (this->AnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationEvent).AnimationName.Number = 0;
  (this->AnimationEvent).AnimationPlayTime = 0.0;
  (this->AnimationEvent).AnimationEventType = None;
  (this->AnimationEvent).AnimationStateType = None;
  (this->AnimationEvent).NumberOfLoops = 1;
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
  (this->AnimationFinishEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation.field_0x10 = 0;
  this->HudVisibility = Collapsed;
  (this->MainCircleAnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->MainCircleAnimationEvent).AnimationName.Number = 0;
  (this->MainCircleAnimationEvent).AnimationPlayTime = 0.0;
  (this->MainCircleAnimationEvent).AnimationEventType = None;
  (this->MainCircleAnimationEvent).AnimationStateType = None;
  (this->MainCircleAnimationEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->MainCircleAnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->MainCircleAnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->MainCircleAnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->MainCircleAnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->MainCircleAnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->MainCircleAnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  this->MainCircleVisibility = Collapsed;
  (this->ProgressDeco1AnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->ProgressDeco1AnimationEvent).AnimationName.Number = 0;
  (this->ProgressDeco1AnimationEvent).AnimationPlayTime = 0.0;
  (this->ProgressDeco1AnimationEvent).AnimationEventType = None;
  (this->ProgressDeco1AnimationEvent).AnimationStateType = None;
  (this->ProgressDeco1AnimationEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->ProgressDeco1AnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->ProgressDeco1AnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->ProgressDeco1AnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->ProgressDeco1AnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->ProgressDeco1AnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->ProgressDeco1AnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->ProgressDeco2AnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->ProgressDeco2AnimationEvent).AnimationName.Number = 0;
  (this->ProgressDeco2AnimationEvent).AnimationPlayTime = 0.0;
  (this->ProgressDeco2AnimationEvent).AnimationEventType = None;
  (this->ProgressDeco2AnimationEvent).AnimationStateType = None;
  (this->ProgressDeco2AnimationEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->ProgressDeco2AnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->ProgressDeco2AnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->ProgressDeco2AnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->ProgressDeco2AnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->ProgressDeco2AnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->ProgressDeco2AnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->ProgressDeco3AnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->ProgressDeco3AnimationEvent).AnimationName.Number = 0;
  (this->ProgressDeco3AnimationEvent).AnimationPlayTime = 0.0;
  (this->ProgressDeco3AnimationEvent).AnimationEventType = None;
  (this->ProgressDeco3AnimationEvent).AnimationStateType = None;
  (this->ProgressDeco3AnimationEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->ProgressDeco3AnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->ProgressDeco3AnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->ProgressDeco3AnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->ProgressDeco3AnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->ProgressDeco3AnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->ProgressDeco3AnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  this->TargetEntityID = 0;
  this->ElepsedTime = 0.0;
  return this;
}

// UDS_VM_NpcBossAI @ 14b6a6d30

UDS_VM_NpcBossAI * __thiscall
UDS_VM_NpcBossAI::UDS_VM_NpcBossAI(UDS_VM_NpcBossAI *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->CharStatusData).WeakPtr = (FWeakObjectPtr)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_NpcBossAI__6B_;
  (this->VM_StatusInfo_HP).field0_0x0.DebugPtr = (UDS_VM_StatusInfo *)0x0;
  (this->VM_StatusInfo_MP).field0_0x0.DebugPtr = (UDS_VM_StatusInfo *)0x0;
  (this->VM_StatusInfo_SP).field0_0x0.DebugPtr = (UDS_VM_StatusInfo *)0x0;
  (this->VM_StatusInfo_GP).field0_0x0.DebugPtr = (UDS_VM_StatusInfo *)0x0;
  FText::FText(&this->AILogText);
  (this->AnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationEvent).AnimationName.Number = 0;
  (this->AnimationEvent).AnimationPlayTime = 0.0;
  (this->AnimationEvent).AnimationEventType = None;
  (this->AnimationEvent).AnimationStateType = None;
  (this->AnimationEvent).NumberOfLoops = 1;
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
  (this->AnimationFinishEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation.field_0x10 = 0;
  this->HudVisibility = Collapsed;
  (this->MainCircleAnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->MainCircleAnimationEvent).AnimationName.Number = 0;
  (this->MainCircleAnimationEvent).AnimationPlayTime = 0.0;
  (this->MainCircleAnimationEvent).AnimationEventType = None;
  (this->MainCircleAnimationEvent).AnimationStateType = None;
  (this->MainCircleAnimationEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->MainCircleAnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->MainCircleAnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->MainCircleAnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->MainCircleAnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->MainCircleAnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->MainCircleAnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  this->MainCircleVisibility = Collapsed;
  (this->ProgressDeco1AnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->ProgressDeco1AnimationEvent).AnimationName.Number = 0;
  (this->ProgressDeco1AnimationEvent).AnimationPlayTime = 0.0;
  (this->ProgressDeco1AnimationEvent).AnimationEventType = None;
  (this->ProgressDeco1AnimationEvent).AnimationStateType = None;
  (this->ProgressDeco1AnimationEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->ProgressDeco1AnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->ProgressDeco1AnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->ProgressDeco1AnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->ProgressDeco1AnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->ProgressDeco1AnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->ProgressDeco1AnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->ProgressDeco2AnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->ProgressDeco2AnimationEvent).AnimationName.Number = 0;
  (this->ProgressDeco2AnimationEvent).AnimationPlayTime = 0.0;
  (this->ProgressDeco2AnimationEvent).AnimationEventType = None;
  (this->ProgressDeco2AnimationEvent).AnimationStateType = None;
  (this->ProgressDeco2AnimationEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->ProgressDeco2AnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->ProgressDeco2AnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->ProgressDeco2AnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->ProgressDeco2AnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->ProgressDeco2AnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->ProgressDeco2AnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->ProgressDeco3AnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->ProgressDeco3AnimationEvent).AnimationName.Number = 0;
  (this->ProgressDeco3AnimationEvent).AnimationPlayTime = 0.0;
  (this->ProgressDeco3AnimationEvent).AnimationEventType = None;
  (this->ProgressDeco3AnimationEvent).AnimationStateType = None;
  (this->ProgressDeco3AnimationEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->ProgressDeco3AnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->ProgressDeco3AnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->ProgressDeco3AnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->ProgressDeco3AnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->ProgressDeco3AnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->ProgressDeco3AnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  this->TargetEntityID = 0;
  this->ElepsedTime = 0.0;
  return this;
}

// ~UDS_VM_NpcBossAI @ 14b6a7ac0

void __thiscall UDS_VM_NpcBossAI::~UDS_VM_NpcBossAI(UDS_VM_NpcBossAI *this)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_NpcBossAI__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->ProgressDeco3AnimationEvent).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->ProgressDeco3AnimationEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &(this->ProgressDeco3AnimationEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->ProgressDeco3AnimationEvent).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->ProgressDeco3AnimationEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &(this->ProgressDeco3AnimationEvent).Delegate_AnimationFinish);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->ProgressDeco2AnimationEvent).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->ProgressDeco2AnimationEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &(this->ProgressDeco2AnimationEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->ProgressDeco2AnimationEvent).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->ProgressDeco2AnimationEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &(this->ProgressDeco2AnimationEvent).Delegate_AnimationFinish);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->ProgressDeco1AnimationEvent).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->ProgressDeco1AnimationEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &(this->ProgressDeco1AnimationEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->ProgressDeco1AnimationEvent).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->ProgressDeco1AnimationEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &(this->ProgressDeco1AnimationEvent).Delegate_AnimationFinish);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->MainCircleAnimationEvent).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->MainCircleAnimationEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &(this->MainCircleAnimationEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->MainCircleAnimationEvent).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->MainCircleAnimationEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &(this->MainCircleAnimationEvent).Delegate_AnimationFinish);
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
  pIVar2 = (this->AILogText).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6a9cc0

IClassDescriptor * __thiscall
UDS_VM_NpcBossAI::GetFieldNotificationDescriptor(UDS_VM_NpcBossAI *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_NpcBossAI::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6aaac0

UClass * __cdecl UDS_VM_NpcBossAI::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_NpcBossAI.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_NpcBossAI",
               &Z_Registration_Info_UClass_UDS_VM_NpcBossAI.InnerSingleton,
               StaticRegisterNativesUDS_VM_NpcBossAI,0x2a8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_NpcBossAI>,
               InternalVTableHelperCtorCaller<UDS_VM_NpcBossAI>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_NpcBossAI.InnerSingleton;
}

// GetTickableTickType @ 14b6aabb0

ETickableTickType __thiscall UDS_VM_NpcBossAI::GetTickableTickType(UDS_VM_NpcBossAI *this)

{
  return Conditional;
}

// IsUpdate @ 14b6aabe0

bool __thiscall UDS_VM_NpcBossAI::IsUpdate(UDS_VM_NpcBossAI *this)

{
  return true;
}

// StaticRegisterNativesUDS_VM_NpcBossAI @ 14b6aae60

void __cdecl UDS_VM_NpcBossAI::StaticRegisterNativesUDS_VM_NpcBossAI(void)

{
  return;
}

// BindModel @ 14be12540

void __thiscall UDS_VM_NpcBossAI::BindModel(UDS_VM_NpcBossAI *this)

{
  ADS_CameraManager *pAVar1;
  UDS_EntityManager *pUVar2;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pAVar1 = ADS_CameraManager::GetInst();
  if (pAVar1 != (ADS_CameraManager *)0x0) {
    TMulticastDelegateRegistration<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_NpcBossAI>
              ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>
                *)&pAVar1->ChangeBossDelegate,(UDS_VM_NpcBossAI *)&stack0x00000010,
               (pmf_b3d1ce73 *)this);
  }
  pUVar2 = UDS_EntityManager::GetInst();
  if (pUVar2 != (UDS_EntityManager *)0x0) {
    TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_NpcBossAI>
              ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
                *)&pUVar2->OnSpawnEntityEvent,(UDS_VM_NpcBossAI *)&stack0x00000010,
               (pmf_f4fb5677 *)this);
  }
  return;
}

// InitViewModel @ 14be25450

void __thiscall UDS_VM_NpcBossAI::InitViewModel(UDS_VM_NpcBossAI *this)

{
  FName FVar1;
  UDS_VM_StatusInfo *pUVar2;
  FName *pFVar3;
  FName local_res8;
  FName local_18;
  int local_10;
  
  pUVar2 = UDS_ViewModelBase::CreateViewModel<UDS_VM_StatusInfo>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UDS_VM_StatusInfo *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->VM_StatusInfo_HP).field0_0x0.DebugPtr = pUVar2;
  pUVar2 = UDS_ViewModelBase::CreateViewModel<UDS_VM_StatusInfo>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UDS_VM_StatusInfo *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->VM_StatusInfo_MP).field0_0x0.DebugPtr = pUVar2;
  pUVar2 = UDS_ViewModelBase::CreateViewModel<UDS_VM_StatusInfo>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UDS_VM_StatusInfo *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->VM_StatusInfo_SP).field0_0x0.DebugPtr = pUVar2;
  pUVar2 = UDS_ViewModelBase::CreateViewModel<UDS_VM_StatusInfo>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UDS_VM_StatusInfo *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->VM_StatusInfo_GP).field0_0x0.DebugPtr = pUVar2;
  pFVar3 = ::FName::FName(&local_res8,"Ani_Loop_01");
  FVar1 = *pFVar3;
  (this->ProgressDeco1AnimationEvent).AnimationName = FVar1;
  if (FVar1 != (FName)0x0) {
    (this->ProgressDeco1AnimationEvent).AnimationEventType = PlayForward;
    (this->ProgressDeco1AnimationEvent).NumberOfLoops = 0;
    local_10 = FFieldNotificationClassDescriptor::ProgressDeco1AnimationEvent.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::ProgressDeco1AnimationEvent.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  pFVar3 = ::FName::FName(&local_res8,"Ani_Loop_02");
  FVar1 = *pFVar3;
  (this->ProgressDeco2AnimationEvent).AnimationName = FVar1;
  if (FVar1 != (FName)0x0) {
    (this->ProgressDeco2AnimationEvent).AnimationEventType = PlayForward;
    (this->ProgressDeco2AnimationEvent).NumberOfLoops = 0;
    local_10 = FFieldNotificationClassDescriptor::ProgressDeco2AnimationEvent.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::ProgressDeco2AnimationEvent.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  pFVar3 = ::FName::FName(&local_res8,"Loop_ani");
  FVar1 = *pFVar3;
  (this->ProgressDeco3AnimationEvent).AnimationName = FVar1;
  if (FVar1 != (FName)0x0) {
    (this->ProgressDeco3AnimationEvent).AnimationEventType = PlayForward;
    (this->ProgressDeco3AnimationEvent).NumberOfLoops = 0;
    local_10 = FFieldNotificationClassDescriptor::ProgressDeco3AnimationEvent.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::ProgressDeco3AnimationEvent.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnAnimationFinished @ 14be28f90

void __thiscall
UDS_VM_NpcBossAI::OnAnimationFinished(UDS_VM_NpcBossAI *this,FDS_WidgetAnimationEventField *param_1)

{
  FName local_res8 [4];
  
  local_res8[0] = (FName)this;
  ::FName::FName(local_res8,"Open_ani");
  return;
}

// OnChangedBoss @ 14be29b40

void __thiscall UDS_VM_NpcBossAI::OnChangedBoss(UDS_VM_NpcBossAI *this,ulong64 param_1)

{
  this->TargetEntityID = param_1;
  Refresh(this);
  return;
}

// OnCloseInit @ 14be2d1b0

void __thiscall UDS_VM_NpcBossAI::OnCloseInit(UDS_VM_NpcBossAI *this)

{
  longlong lVar1;
  undefined8 uStack_18;
  FSharedReferencer<1> FStack_10;
  
  if (*(char *)((longlong)&this->_padding_ + 4) != '\x01') {
    uStack_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->_padding_ != &uStack_18) {
      this->_padding_ = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->_padding_,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
    lVar1 = this->_padding_;
    *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
                    /* WARNING: Could not recover jumptable at 0x00014bdcdcaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x2f8))(this);
    return;
  }
  return;
}

// OnSetViewModel @ 14be3ad40

void __thiscall
UDS_VM_NpcBossAI::OnSetViewModel(UDS_VM_NpcBossAI *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  FName FVar1;
  int iVar2;
  ADS_CameraManager *pAVar3;
  FName local_18;
  int local_10;
  
  pAVar3 = ADS_CameraManager::GetInst();
  if (pAVar3 != (ADS_CameraManager *)0x0) {
    this->TargetEntityID = pAVar3->BossEntityID;
  }
  iVar2 = FFieldNotificationClassDescriptor::HudVisibility.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::HudVisibility.FieldName;
  if (this->HudVisibility != Collapsed) {
    this->HudVisibility = Collapsed;
    local_10 = iVar2;
    local_18 = FVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  iVar2 = FFieldNotificationClassDescriptor::MainCircleVisibility.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::MainCircleVisibility.FieldName;
  if (this->MainCircleVisibility != Collapsed) {
    this->MainCircleVisibility = Collapsed;
    local_10 = iVar2;
    local_18 = FVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  Refresh(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnSpawnEntity @ 14be429a0

void __thiscall UDS_VM_NpcBossAI::OnSpawnEntity(UDS_VM_NpcBossAI *this,ulong64 *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res18 [2];
  
  UDS_PlayerData::GetData((ulong64)local_res18,*param_1,false);
  bVar1 = FWeakObjectPtr::IsValid(local_res18);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res18);
    *(undefined4 *)&pUVar2[10].field_0x4 = 0;
    pUVar2 = FWeakObjectPtr::Get(local_res18);
    *(undefined4 *)(pUVar2 + 10) = 0;
  }
  return;
}

// OnUpdate @ 14be42d60

void __thiscall UDS_VM_NpcBossAI::OnUpdate(UDS_VM_NpcBossAI *this,float param_1)

{
  bool bVar1;
  float fVar2;
  
  fVar2 = param_1 + this->ElepsedTime;
  bVar1 = __real_41f00000 <= fVar2;
  this->ElepsedTime = fVar2;
  if (bVar1) {
    this->ElepsedTime = 0.0;
    StartMainCircleAnimation(this);
    return;
  }
  return;
}

// Refresh @ 14be47170

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

void __thiscall UDS_VM_NpcBossAI::Refresh(UDS_VM_NpcBossAI *this)

{
  FScriptContainerElement *pFVar1;
  UDS_VM_StatusInfo *pUVar2;
  FName FVar3;
  code *pcVar4;
  int iVar5;
  FDS_ViewModelContext_StatusInfo *pFVar6;
  bool bVar7;
  TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> TVar8;
  FName *pFVar9;
  UDS_EntityManager *this_00;
  FDS_EntityBase *pFVar10;
  UObject *pUVar11;
  ulonglong uVar12;
  longlong *plVar13;
  ForAnyElementType FVar14;
  undefined1 local_res8 [8];
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_148;
  FName local_138;
  int local_130;
  FName local_128;
  int local_120;
  FName local_118;
  int local_110;
  FName local_108;
  int local_100;
  FName local_f8;
  int local_f0;
  FName local_e8;
  int local_e0;
  FName local_d8;
  int local_d0;
  TSharedPtr<FDS_ViewModelContext_StatusInfo,1> local_c8;
  TSharedPtr<FDS_ViewModelContext_StatusInfo,1> local_b8;
  TSharedPtr<FDS_ViewModelContext_StatusInfo,1> local_a8;
  TSharedPtr<FDS_ViewModelContext_StatusInfo,1> local_98;
  undefined1 local_88 [8];
  FName local_80;
  TSharedPtr<FDS_ViewModelContext,1> local_78;
  TSharedPtr<FDS_ViewModelContext,1> local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  
  TVar8 = UDS_CharStatusData::GetData((ulong64)local_88);
                    /* WARNING: Load size is inaccurate */
  (this->CharStatusData).WeakPtr = *TVar8.WeakPtr;
  if ((this->VM_StatusInfo_HP).field0_0x0.DebugPtr != (UDS_VM_StatusInfo *)0x0) {
    MakeContext<FDS_ViewModelContext_StatusInfo>(&local_c8);
    pFVar6 = local_c8.Object;
    if ((local_c8.Object == (FDS_ViewModelContext_StatusInfo *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(undefined4 *)&pFVar6->_padding_ = 0x12;
    pFVar6->EntityID = this->TargetEntityID;
    pFVar6->StatusID = Hp;
    local_78.Object = (FDS_ViewModelContext *)local_c8.Object;
    local_78.SharedReferenceCount.ReferenceController =
         local_c8.SharedReferenceCount.ReferenceController;
    pFVar6->bIsUse_VM_Progress = true;
    pFVar6->bIsUseDamageProgress = false;
    pUVar2 = (this->VM_StatusInfo_HP).field0_0x0.DebugPtr;
    if (local_c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar2,&local_78);
    local_130 = FFieldNotificationClassDescriptor::VM_StatusInfo_HP.BitNumber;
    local_138 = FFieldNotificationClassDescriptor::VM_StatusInfo_HP.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_138);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c8.SharedReferenceCount.ReferenceController);
  }
  plVar13 = &this->_padding_;
  if ((this->VM_StatusInfo_MP).field0_0x0.DebugPtr != (UDS_VM_StatusInfo *)0x0) {
    MakeContext<FDS_ViewModelContext_StatusInfo>(&local_b8);
    pFVar6 = local_b8.Object;
    if ((local_b8.Object == (FDS_ViewModelContext_StatusInfo *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(EDS_ViewModelTemplateKey *)&pFVar6->_padding_ = Data_StatusInfo;
    pFVar6->EntityID = this->TargetEntityID;
    pFVar6->StatusID = Mp;
    pFVar6->bIsUse_VM_Progress = true;
    pFVar6->bIsUseDamageProgress = false;
    pUVar2 = (this->VM_StatusInfo_MP).field0_0x0.DebugPtr;
    local_68.Object = (FDS_ViewModelContext *)local_b8.Object;
    local_68.SharedReferenceCount.ReferenceController =
         local_b8.SharedReferenceCount.ReferenceController;
    if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar2,&local_68);
    local_120 = FFieldNotificationClassDescriptor::VM_StatusInfo_MP.BitNumber;
    local_128 = FFieldNotificationClassDescriptor::VM_StatusInfo_MP.FieldName;
    (**(code **)(*plVar13 + 0x38))(plVar13,&local_128);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b8.SharedReferenceCount.ReferenceController);
  }
  if ((this->VM_StatusInfo_SP).field0_0x0.DebugPtr != (UDS_VM_StatusInfo *)0x0) {
    MakeContext<FDS_ViewModelContext_StatusInfo>(&local_a8);
    pFVar6 = local_a8.Object;
    if ((local_a8.Object == (FDS_ViewModelContext_StatusInfo *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(undefined4 *)&pFVar6->_padding_ = 0x12;
    pFVar6->EntityID = this->TargetEntityID;
    pFVar6->StatusID = Vigor;
    pFVar6->bIsUse_VM_Progress = true;
    pFVar6->bIsUseDamageProgress = false;
    pUVar2 = (this->VM_StatusInfo_SP).field0_0x0.DebugPtr;
    local_58.Object = (FDS_ViewModelContext *)local_a8.Object;
    local_58.SharedReferenceCount.ReferenceController =
         local_a8.SharedReferenceCount.ReferenceController;
    if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar2,&local_58);
    local_110 = FFieldNotificationClassDescriptor::VM_StatusInfo_SP.BitNumber;
    local_118 = FFieldNotificationClassDescriptor::VM_StatusInfo_SP.FieldName;
    (**(code **)(*plVar13 + 0x38))(plVar13,&local_118);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.SharedReferenceCount.ReferenceController);
  }
  if ((this->VM_StatusInfo_GP).field0_0x0.DebugPtr != (UDS_VM_StatusInfo *)0x0) {
    MakeContext<FDS_ViewModelContext_StatusInfo>(&local_98);
    pFVar6 = local_98.Object;
    if ((local_98.Object == (FDS_ViewModelContext_StatusInfo *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(undefined4 *)&pFVar6->_padding_ = 0x12;
    pFVar6->EntityID = this->TargetEntityID;
    pFVar6->StatusID = GroggyPoint;
    pFVar6->bIsUse_VM_Progress = true;
    pFVar6->bIsUseDamageProgress = false;
    pUVar2 = (this->VM_StatusInfo_GP).field0_0x0.DebugPtr;
    local_48.Object = (FDS_ViewModelContext *)local_98.Object;
    local_48.SharedReferenceCount.ReferenceController =
         local_98.SharedReferenceCount.ReferenceController;
    if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar2,&local_48);
    local_100 = FFieldNotificationClassDescriptor::VM_StatusInfo_GP.BitNumber;
    local_108 = FFieldNotificationClassDescriptor::VM_StatusInfo_GP.FieldName;
    (**(code **)(*plVar13 + 0x38))(plVar13,&local_108);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.SharedReferenceCount.ReferenceController);
  }
  iVar5 = FFieldNotificationClassDescriptor::HudVisibility.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::HudVisibility.FieldName;
  if (this->TargetEntityID != 0) {
    if (this->HudVisibility != SelfHitTestInvisible) {
      this->HudVisibility = SelfHitTestInvisible;
      local_f0 = iVar5;
      local_f8 = FVar3;
      (**(code **)(*plVar13 + 0x38))(plVar13,&local_f8);
    }
    pFVar9 = ::FName::FName(&local_80,"Open_ani");
    FVar3 = *pFVar9;
    (this->AnimationEvent).AnimationName = FVar3;
    if (FVar3 != (FName)0x0) {
      (this->AnimationEvent).AnimationEventType = PlayForward;
      local_e0 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
      local_e8 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
      (**(code **)(*plVar13 + 0x38))(plVar13,&local_e8);
    }
    iVar5 = FFieldNotificationClassDescriptor::MainCircleVisibility.BitNumber;
    FVar3 = FFieldNotificationClassDescriptor::MainCircleVisibility.FieldName;
    if (this->MainCircleVisibility != SelfHitTestInvisible) {
      this->MainCircleVisibility = SelfHitTestInvisible;
      local_d0 = iVar5;
      local_d8 = FVar3;
      (**(code **)(*plVar13 + 0x38))(plVar13,&local_d8);
    }
    StartMainCircleAnimation(this);
  }
  this_00 = UDS_EntityManager::GetInst();
  if (this_00 != (UDS_EntityManager *)0x0) {
    local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_148.ArrayNum = 0;
    local_148.ArrayMax = 0;
    UDS_EntityManager::GetAllEntityList(this_00,&local_148);
    iVar5 = local_148.ArrayNum;
    uVar12 = (ulonglong)local_148.ArrayNum;
    pFVar1 = local_148.AllocatorInstance.Data + uVar12 * 8;
    FVar14.Data = local_148.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar12 != iVar5) {
        `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (FVar14.Data == pFVar1) break;
      pUVar11 = *(UObject **)FVar14.Data;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar11);
      }
      local_res10.ObjectIndex = 0;
      local_res10.ObjectSerialNumber = 0;
      local_res20 = pUVar11;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar11);
      }
      FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res20);
      pFVar10 = FDS_EntityBase::GetEntityBaseFromActor
                          ((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_res10);
      if ((pFVar10 != (FDS_EntityBase *)0x0) && (pFVar10->EntityType == NetCharacter)) {
        UDS_PlayerData::GetData((ulong64)&local_res18,pFVar10->EntityID,false);
        bVar7 = FWeakObjectPtr::IsValid(&local_res18);
        if (bVar7) {
          pUVar11 = FWeakObjectPtr::Get(&local_res18);
          *(undefined4 *)&pUVar11[10].field_0x4 = 0;
          pUVar11 = FWeakObjectPtr::Get(&local_res18);
          *(undefined4 *)(pUVar11 + 10) = 0;
        }
      }
      uVar12 = local_148._8_8_ & 0xffffffff;
      FVar14.Data = FVar14.Data + 8;
    }
    if (local_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.AllocatorInstance.Data);
    }
  }
  return;
}

// SetHudVisibility @ 14be4b5f0

void __thiscall UDS_VM_NpcBossAI::SetHudVisibility(UDS_VM_NpcBossAI *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::HudVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::HudVisibility.FieldName;
  if (this->HudVisibility != param_1) {
    this->HudVisibility = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetMainCircleVisibility @ 14be4dbb0

void __thiscall
UDS_VM_NpcBossAI::SetMainCircleVisibility(UDS_VM_NpcBossAI *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::MainCircleVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MainCircleVisibility.FieldName;
  if (this->MainCircleVisibility != param_1) {
    this->MainCircleVisibility = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// StartDecoAnimation @ 14be538f0

void __thiscall UDS_VM_NpcBossAI::StartDecoAnimation(UDS_VM_NpcBossAI *this)

{
  FName FVar1;
  FName *pFVar2;
  FName local_res8;
  FName local_18;
  int local_10;
  
  pFVar2 = ::FName::FName(&local_res8,"Ani_Loop_01");
  FVar1 = *pFVar2;
  (this->ProgressDeco1AnimationEvent).AnimationName = FVar1;
  if (FVar1 != (FName)0x0) {
    (this->ProgressDeco1AnimationEvent).AnimationEventType = PlayForward;
    (this->ProgressDeco1AnimationEvent).NumberOfLoops = 0;
    local_10 = FFieldNotificationClassDescriptor::ProgressDeco1AnimationEvent.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::ProgressDeco1AnimationEvent.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  pFVar2 = ::FName::FName(&local_res8,"Ani_Loop_02");
  FVar1 = *pFVar2;
  (this->ProgressDeco2AnimationEvent).AnimationName = FVar1;
  if (FVar1 != (FName)0x0) {
    (this->ProgressDeco2AnimationEvent).AnimationEventType = PlayForward;
    (this->ProgressDeco2AnimationEvent).NumberOfLoops = 0;
    local_10 = FFieldNotificationClassDescriptor::ProgressDeco2AnimationEvent.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::ProgressDeco2AnimationEvent.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  pFVar2 = ::FName::FName(&local_res8,"Loop_ani");
  FVar1 = *pFVar2;
  (this->ProgressDeco3AnimationEvent).AnimationName = FVar1;
  if (FVar1 != (FName)0x0) {
    (this->ProgressDeco3AnimationEvent).AnimationEventType = PlayForward;
    (this->ProgressDeco3AnimationEvent).NumberOfLoops = 0;
    local_10 = FFieldNotificationClassDescriptor::ProgressDeco3AnimationEvent.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::ProgressDeco3AnimationEvent.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// StartMainCircleAnimation @ 14be53a20

void __thiscall UDS_VM_NpcBossAI::StartMainCircleAnimation(UDS_VM_NpcBossAI *this)

{
  FName FVar1;
  FName *pFVar2;
  FName local_res8 [4];
  FName local_18;
  int local_10;
  
  pFVar2 = ::FName::FName(local_res8,"Open_ani");
  FVar1 = *pFVar2;
  (this->MainCircleAnimationEvent).AnimationName = FVar1;
  if (FVar1 != (FName)0x0) {
    (this->MainCircleAnimationEvent).AnimationEventType = PlayForward;
    local_10 = FFieldNotificationClassDescriptor::MainCircleAnimationEvent.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::MainCircleAnimationEvent.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// StartOpenAnimation @ 14be53a90

void __thiscall UDS_VM_NpcBossAI::StartOpenAnimation(UDS_VM_NpcBossAI *this)

{
  FName FVar1;
  FName *pFVar2;
  FName local_res8 [4];
  FName local_18;
  int local_10;
  
  pFVar2 = ::FName::FName(local_res8,"Open_ani");
  FVar1 = *pFVar2;
  (this->AnimationEvent).AnimationName = FVar1;
  if (FVar1 != (FName)0x0) {
    (this->AnimationEvent).AnimationEventType = PlayForward;
    local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UnbindModel @ 14be55700

void __thiscall UDS_VM_NpcBossAI::UnbindModel(UDS_VM_NpcBossAI *this)

{
  ADS_CameraManager *pAVar1;
  UDS_EntityManager *pUVar2;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pAVar1 = ADS_CameraManager::GetInst();
  if (pAVar1 != (ADS_CameraManager *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pAVar1->ChangeBossDelegate,
               this);
  }
  pUVar2 = UDS_EntityManager::GetInst();
  if (pUVar2 != (UDS_EntityManager *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnSpawnEntityEvent,
               this);
    return;
  }
  return;
}

