// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 29

// SetAnimationFinishEvent_WrapperImpl @ 14b6e1300

void __cdecl UDS_VM_SwimControl::SetAnimationFinishEvent_WrapperImpl(void *param_1,void *param_2)

{
  return;
}

// StaticClass @ 14b6e1310

UClass * __cdecl UDS_VM_SwimControl::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_SwimControl.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_SwimControl",
               &Z_Registration_Info_UClass_UDS_VM_SwimControl.InnerSingleton,
               StaticRegisterNativesUDS_VM_SwimControl,0x178,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_SwimControl>,
               InternalVTableHelperCtorCaller<UDS_VM_SwimControl>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_SwimControl.InnerSingleton;
}

// UDS_VM_SwimControl @ 14b6e6af0

UDS_VM_SwimControl * __thiscall
UDS_VM_SwimControl::UDS_VM_SwimControl(UDS_VM_SwimControl *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->DesiredVisibilityState = Hidden;
  this->SwimControlType = Surface;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_SwimControl__6B_;
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
  (this->SwimCloseTimerHandle).Handle = 0;
  (this->PlayingAnimationName).ComparisonIndex = 0;
  (this->PlayingAnimationName).Number = 0;
  this->CurrentEntityID = 0;
  (this->CharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->AnimationEvent).NumberOfLoops = 1;
  (this->AnimationFinishEvent).NumberOfLoops = 1;
  return this;
}

// UDS_VM_SwimControl @ 14b6e6c00

UDS_VM_SwimControl * __thiscall
UDS_VM_SwimControl::UDS_VM_SwimControl(UDS_VM_SwimControl *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->DesiredVisibilityState = Hidden;
  this->SwimControlType = Surface;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_SwimControl__6B_;
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
  (this->SwimCloseTimerHandle).Handle = 0;
  (this->PlayingAnimationName).ComparisonIndex = 0;
  (this->PlayingAnimationName).Number = 0;
  this->CurrentEntityID = 0;
  (this->CharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->AnimationEvent).NumberOfLoops = 1;
  (this->AnimationFinishEvent).NumberOfLoops = 1;
  return this;
}

// ~UDS_VM_SwimControl @ 14b6e7850

void __thiscall UDS_VM_SwimControl::~UDS_VM_SwimControl(UDS_VM_SwimControl *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_SwimControl__6B_;
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

// GetFieldNotificationDescriptor @ 14b6e9c90

IClassDescriptor * __thiscall
UDS_VM_SwimControl::GetFieldNotificationDescriptor(UDS_VM_SwimControl *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_SwimControl::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6eaa80

UClass * __cdecl UDS_VM_SwimControl::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_SwimControl.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_SwimControl",
               &Z_Registration_Info_UClass_UDS_VM_SwimControl.InnerSingleton,
               StaticRegisterNativesUDS_VM_SwimControl,0x178,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_SwimControl>,
               InternalVTableHelperCtorCaller<UDS_VM_SwimControl>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_SwimControl.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_SwimControl @ 14b6eada0

void __cdecl UDS_VM_SwimControl::StaticRegisterNativesUDS_VM_SwimControl(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_SwimControl_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnRefreshSwimVisibility @ 14b6ec460

void __cdecl
UDS_VM_SwimControl::execOnRefreshSwimVisibility(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnRefreshSwimVisibility((UDS_VM_SwimControl *)param_1);
  return;
}

// BindCharacterEvent @ 14bf3ffa0

void __thiscall UDS_VM_SwimControl::BindCharacterEvent(UDS_VM_SwimControl *this,ulong64 param_1)

{
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *this_00;
  code *pcVar1;
  bool bVar2;
  ESlateVisibility EVar3;
  UObject *pUVar4;
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> TVar5;
  undefined1 local_res8 [16];
  
  this_00 = &this->CharStateData;
  bVar2 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar2) {
    pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4[7].field_0x20,this);
    this_00->WeakPtr = (FWeakObjectPtr)0x0;
  }
  this->CurrentEntityID = param_1;
  TVar5 = UDS_CharStateData::GetData((ulong64)local_res8);
                    /* WARNING: Load size is inaccurate */
  this_00->WeakPtr = *TVar5.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar2) {
    pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_SwimControl>
              ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
                *)&pUVar4[7].field_0x20,(UDS_VM_SwimControl *)(local_res8 + 8),(pmf_88631c4d *)this)
    ;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5272911888802381940>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Swim\\DS_VM_SwimControl.cpp"
                       ,0x74,"CharStateData.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EVar3 = GetSwimControlVisibility
                    (this,(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>)this_00->WeakPtr);
  UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,EVar3);
  return;
}

// BindModel @ 14bf420c0

void __thiscall UDS_VM_SwimControl::BindModel(UDS_VM_SwimControl *this)

{
  ulong64 uVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  TMulticastDelegateRegistration<void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
  ::AddUObject<UDS_VM_SwimControl>
            ((TMulticastDelegateRegistration<void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
              *)&ADS_MainCharacter::MainCharacterSwitchCompleteDelegate,
             (UDS_VM_SwimControl *)&stack0x00000010,(pmf_3bb847ea *)this);
  uVar1 = UDS_PlayerData::GetMainPlayerCurrentEntityID();
  BindCharacterEvent(this,uVar1);
  return;
}

// ClearTimer @ 14bf44430

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_VM_SwimControl::ClearTimer(UDS_VM_SwimControl *this,FTimerHandle *param_1)

{
  FTimerManager *this_00;
  FTimerData *pFVar1;
  
  if (param_1->Handle != 0) {
    this_00 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar1 = FTimerManager::FindTimer(this_00,param_1);
    if (pFVar1 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(this_00,(FTimerHandle)param_1->Handle);
    }
    param_1->Handle = 0;
  }
  return;
}

// CreateSubmergeVM @ 14bf4e5c0

void __thiscall UDS_VM_SwimControl::CreateSubmergeVM(UDS_VM_SwimControl *this)

{
  UDS_VM_W_CommonSkillSlot *pUVar1;
  UDS_VM_SwimSlot *pUVar2;
  FWeakObjectPtr local_res8;
  UDS_VM_W_CommonSkillSlot *local_res10;
  
  pUVar2 = UDS_ViewModelBase::CreateViewModel<UDS_VM_SwimSlot>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UDS_VM_SwimSlot *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->Slot_1).field0_0x0.DebugPtr = (UDS_VM_W_CommonSkillSlot *)pUVar2;
  pUVar2 = UDS_ViewModelBase::CreateViewModel<UDS_VM_SwimSlot>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UDS_VM_SwimSlot *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->Slot_2).field0_0x0.DebugPtr = (UDS_VM_W_CommonSkillSlot *)pUVar2;
  pUVar2 = UDS_ViewModelBase::CreateViewModel<UDS_VM_SwimSlot>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UDS_VM_SwimSlot *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->Slot_3).field0_0x0.DebugPtr = (UDS_VM_W_CommonSkillSlot *)pUVar2;
  pUVar2 = UDS_ViewModelBase::CreateViewModel<UDS_VM_SwimSlot>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UDS_VM_SwimSlot *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->Slot_4).field0_0x0.DebugPtr = (UDS_VM_W_CommonSkillSlot *)pUVar2;
  pUVar1 = (this->Slot_2).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar1 != (UDS_VM_W_CommonSkillSlot *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_VM_W_CommonSkillSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UDS_VM_W_CommonSkillSlot *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  SetSwimViewModelContext
            (this,(TWeakObjectPtr<UDS_VM_W_CommonSkillSlot,FWeakObjectPtr>)local_res8,SwimUp);
  pUVar1 = (this->Slot_3).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar1 != (UDS_VM_W_CommonSkillSlot *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_VM_W_CommonSkillSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UDS_VM_W_CommonSkillSlot *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  SetSwimViewModelContext
            (this,(TWeakObjectPtr<UDS_VM_W_CommonSkillSlot,FWeakObjectPtr>)local_res8,
             SwimSubmergeSprint);
  return;
}

// CreateSurfaceVM @ 14bf4e780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_SwimControl::CreateSurfaceVM(UDS_VM_SwimControl *this)

{
  UDS_VM_SwimSlot *pUVar1;
  UClass *pUVar2;
  UClass *pUVar3;
  UDS_VM_W_CommonSkillSlot *pUVar4;
  longlong *plVar5;
  undefined1 auStack_d8 [32];
  FWeakObjectPtr local_b8;
  UDS_VM_W_CommonSkillSlot *local_b0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_SwimSlot>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_VM_SwimSlot *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->Slot_1).field0_0x0.DebugPtr = (UDS_VM_W_CommonSkillSlot *)pUVar1;
  pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_SwimSlot>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_VM_SwimSlot *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->Slot_2).field0_0x0.DebugPtr = (UDS_VM_W_CommonSkillSlot *)pUVar1;
  pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_SwimSlot>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_VM_SwimSlot *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->Slot_3).field0_0x0.DebugPtr = (UDS_VM_W_CommonSkillSlot *)pUVar1;
  local_b8.ObjectIndex = 0;
  local_b8.ObjectSerialNumber = 0;
  pUVar2 = Z_Construct_UClass_UDS_VM_W_AirWalkSlot_Jump_NoRegister();
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = Z_Construct_UClass_UDS_VM_W_AirWalkSlot_Jump_NoRegister();
  CheckIsClassChildOf_Internal(pUVar3,pUVar2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar2);
  local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_a8._56_8_ = (UPackage *)0x0;
  local_a8._16_4_ = 0;
  local_a8._20_4_ = 0;
  local_a8._24_4_ = RF_Transient;
  local_a8._40_8_ = (UObject *)0x0;
  local_a8[0x20] = false;
  local_a8._8_8_ = this;
  pUVar4 = (UDS_VM_W_CommonSkillSlot *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar5 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar5 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  if (pUVar4 != (UDS_VM_W_CommonSkillSlot *)0x0) {
    *(undefined1 *)((longlong)&pUVar4->_padding_ + 4) = 0;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UDS_VM_W_CommonSkillSlot *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->Slot_4).field0_0x0.DebugPtr = pUVar4;
  pUVar4 = (this->Slot_2).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar4 != (UDS_VM_W_CommonSkillSlot *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UDS_VM_W_CommonSkillSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
  }
  local_b8.ObjectIndex = 0;
  local_b8.ObjectSerialNumber = 0;
  local_b0 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UDS_VM_W_CommonSkillSlot *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  FWeakObjectPtr::operator=(&local_b8,(FObjectPtr)&local_b0);
  SetSwimViewModelContext
            (this,(TWeakObjectPtr<UDS_VM_W_CommonSkillSlot,FWeakObjectPtr>)local_b8,SwimDown);
  pUVar4 = (this->Slot_3).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar4 != (UDS_VM_W_CommonSkillSlot *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UDS_VM_W_CommonSkillSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
  }
  local_b8.ObjectIndex = 0;
  local_b8.ObjectSerialNumber = 0;
  local_b0 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UDS_VM_W_CommonSkillSlot *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  FWeakObjectPtr::operator=(&local_b8,(FObjectPtr)&local_b0);
  SetSwimViewModelContext
            (this,(TWeakObjectPtr<UDS_VM_W_CommonSkillSlot,FWeakObjectPtr>)local_b8,
             SwimSurfaceSprint);
  pUVar4 = (this->Slot_4).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar4 != (UDS_VM_W_CommonSkillSlot *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UDS_VM_W_CommonSkillSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
  }
  local_b8.ObjectIndex = 0;
  local_b8.ObjectSerialNumber = 0;
  local_b0 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UDS_VM_W_CommonSkillSlot *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  FWeakObjectPtr::operator=(&local_b8,(FObjectPtr)&local_b0);
  SetJumpViewModelContext(this,(TWeakObjectPtr<UDS_VM_W_CommonSkillSlot,FWeakObjectPtr>)local_b8);
  return;
}

// GetSwimControlVisibility @ 14bf58070

ESlateVisibility __thiscall
UDS_VM_SwimControl::GetSwimControlVisibility
          (UDS_VM_SwimControl *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1)

{
  bool bVar1;
  UDS_CharStateData *pUVar2;
  ESlateVisibility EVar3;
  FWeakObjectPtr local_res10;
  EDS_CharState local_res18 [2];
  
  local_res10 = param_1.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar1) {
    return Collapsed;
  }
  pUVar2 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
  local_res18[0] = Swim;
  EVar3 = Collapsed;
  bVar1 = UDS_CharStateData::HasCharState(pUVar2,local_res18);
  if (bVar1) {
    pUVar2 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
    local_res18[0] = CONCAT44(local_res18[0]._4_4_,6);
    bVar1 = UDS_CharStateData::HasCharDetailState(pUVar2,(EDS_CharDetailState *)local_res18);
    if (this->SwimControlType == Surface) {
      if (!bVar1) {
        return SelfHitTestInvisible;
      }
    }
    else if (this->SwimControlType == Submerge) {
      EVar3 = Collapsed;
      if (bVar1) {
        EVar3 = SelfHitTestInvisible;
      }
    }
  }
  return EVar3;
}

// InitViewModel @ 14bf5b8d0

void __thiscall UDS_VM_SwimControl::InitViewModel(UDS_VM_SwimControl *this)

{
  return;
}

// OnAnimationFinished @ 14bf5eff0

void __thiscall
UDS_VM_SwimControl::OnAnimationFinished
          (UDS_VM_SwimControl *this,FDS_WidgetAnimationEventField *param_1)

{
  return;
}

// OnChangedCharState @ 14bf60670

void __thiscall
UDS_VM_SwimControl::OnChangedCharState
          (UDS_VM_SwimControl *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
          FDS_ChangedCharStateInfo *param_2)

{
  bool bVar1;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0] = param_1.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    ShowAnimation(this,(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>)local_res10[0]);
  }
  return;
}

// OnCloseInit @ 14bf63520

void __thiscall UDS_VM_SwimControl::OnCloseInit(UDS_VM_SwimControl *this)

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

// OnMainCharChanged @ 14bf64c40

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
UDS_VM_SwimControl::OnMainCharChanged
          (UDS_VM_SwimControl *this,FDS_EntityBase *param_1,FDS_EntityBase *param_2)

{
  if (param_2 != (FDS_EntityBase *)0x0) {
    BindCharacterEvent(this,param_2->EntityID);
    return;
  }
  return;
}

// OnRefreshSwimVisibility @ 14bf669a0

void __thiscall UDS_VM_SwimControl::OnRefreshSwimVisibility(UDS_VM_SwimControl *this)

{
  bool bVar1;
  ESlateVisibility EVar2;
  FWeakObjectPtr local_res10;
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
    (this->PlayingAnimationName).ComparisonIndex = 0;
    (this->PlayingAnimationName).Number = 0;
    EVar2 = GetSwimControlVisibility
                      (this,(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>)local_res10);
    UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,EVar2);
    this->DesiredVisibilityState = EVar2;
  }
  return;
}

// OnSetViewModel @ 14bf6e170

void __thiscall
UDS_VM_SwimControl::OnSetViewModel
          (UDS_VM_SwimControl *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  EDS_SwimControlType EVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TSharedPtr<FDS_ViewModelContext_SwimControl,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_SwimControl>(&local_28,&local_18);
  if (local_28.Object == (FDS_ViewModelContext_SwimControl *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5272911888802381867>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Swim\\DS_VM_SwimControl.cpp"
                       ,0x2b,"context");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    EVar1 = (local_28.Object)->SwimControlType;
    this->SwimControlType = EVar1;
    if (EVar1 == Surface) {
      CreateSurfaceVM(this);
    }
    else {
      CreateSubmergeVM(this);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetJumpViewModelContext @ 14bf7b7f0

void __thiscall
UDS_VM_SwimControl::SetJumpViewModelContext
          (UDS_VM_SwimControl *this,TWeakObjectPtr<UDS_VM_W_CommonSkillSlot,FWeakObjectPtr> param_1)

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

// SetSwimViewModelContext @ 14bf7e530

void __thiscall
UDS_VM_SwimControl::SetSwimViewModelContext
          (UDS_VM_SwimControl *this,TWeakObjectPtr<UDS_VM_W_CommonSkillSlot,FWeakObjectPtr> param_1,
          EDS_SwimStep param_2)

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
      *(undefined4 *)&pFVar3->field_0x1c = 0;
      *(undefined4 *)((longlong)&pFVar3[1]._padding_ + 1) = 0;
      *(undefined2 *)((longlong)&pFVar3[1]._padding_ + 5) = 0;
      *(undefined1 *)((longlong)&pFVar3[1]._padding_ + 7) = 0;
      *(undefined8 *)&pFVar3->DerivedStaticStruct = 0;
      (pFVar3->ViewModelName).ComparisonIndex = 0;
      (pFVar3->ViewModelName).Number = 0;
      pFVar3->ViewModelTemplateKey = None;
      pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext_SwimSlot__6B_;
      *(undefined1 *)&pFVar3[1]._padding_ = 9;
      pFVar6 = pFVar3;
    }
    pFVar3 = ::operator_new(0x20);
    if (pFVar3 != (FDS_ViewModelContext *)0x0) {
      *(atomic<int> *)&pFVar3->DerivedStaticStruct = (atomic<int>)0x1;
      *(code **)&(pFVar3->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      pFVar3->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_SwimSlot__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
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
    pUVar4 = FDS_ViewModelContext_SwimSlot::StaticStruct();
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
    *(EDS_SwimStep *)&pFVar6[1]._padding_ = param_2;
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

// SetTimer @ 14bf7e9f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDS_VM_SwimControl::SetTimer
          (UDS_VM_SwimControl *this,FTimerHandle *param_1,
          TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *param_2,
          float param_3)

{
  FTimerManager *this_00;
  
  this_00 = FDS_TimerManager::Get((UObject *)0x0);
  FTimerManager::SetTimer(this_00,param_1,param_2,param_3,false,__real_bf800000);
  if ((*(int *)&param_2->field_0x8 != 0) && (*(undefined8 **)param_2 != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)param_2)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)param_2,0,0,0x10);
    *(undefined4 *)&param_2->field_0x8 = 0;
  }
  if (*(void **)param_2 != (void *)0x0) {
    FMemory::Free(*(void **)param_2);
  }
  return;
}

// ShowAnimation @ 14bf83090

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDS_VM_SwimControl::ShowAnimation
          (UDS_VM_SwimControl *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1)

{
  EDS_AnimationEventType *pEVar1;
  bool bVar2;
  ESlateVisibility EVar3;
  FTimerManager *pFVar4;
  FTimerData *pFVar5;
  FName *pFVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  FWeakObjectPtr local_res10;
  FName local_res18;
  FName local_res20;
  FDelegateAllocation local_48;
  code *local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_res10 = param_1.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar2) {
    return;
  }
  if ((this->SwimCloseTimerHandle).Handle != 0) {
    pFVar4 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar5 = FTimerManager::FindTimer(pFVar4,&this->SwimCloseTimerHandle);
    if (pFVar5 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(pFVar4,(FTimerHandle)(this->SwimCloseTimerHandle).Handle);
    }
    (this->SwimCloseTimerHandle).Handle = 0;
  }
  EVar3 = GetSwimControlVisibility
                    (this,(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>)local_res10);
  if (EVar3 == this->DesiredVisibilityState) {
    return;
  }
  this->DesiredVisibilityState = EVar3;
  ::FName::FName(&local_res18,"Close_Anim");
  if (EVar3 == SelfHitTestInvisible) {
    UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,SelfHitTestInvisible);
    pFVar6 = ::FName::FName(&local_res20,"Open_Anim");
    local_res18 = *pFVar6;
  }
  else {
    uStack_30 = 0;
    local_38 = OnRefreshSwimVisibility;
    local_48.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_48.DelegateSize = 0;
    puVar7 = UE::Core::Private::DelegateAllocate(0x30,&local_48);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &
                ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
      ;
      uVar8 = FDelegateHandle::GenerateNewID();
      puVar7[2] = uVar8;
      *puVar7 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_SwimControl____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar7[3] = 0;
      local_res20 = (FName)this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_res20);
      puVar7[4] = local_38;
      puVar7[5] = CONCAT44(uStack_2c,uStack_30);
    }
    pFVar4 = FDS_TimerManager::Get((UObject *)0x0);
    FTimerManager::SetTimer
              (pFVar4,&this->SwimCloseTimerHandle,
               (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)&local_48
               ,__real_3f000000,false,__real_bf800000);
    if (local_48.DelegateSize != 0) {
      if (local_48.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)
      goto LAB_14bf8326d;
      (*(code *)**(undefined8 **)local_48.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_48,0,0,0x10);
      local_48.DelegateSize = 0;
    }
    if (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_48.DelegateAllocator);
    }
  }
LAB_14bf8326d:
  pEVar1 = &(this->AnimationEvent).AnimationEventType;
  if (this->PlayingAnimationName != (FName)0x0) {
    (this->AnimationEvent).AnimationName = this->PlayingAnimationName;
    *pEVar1 = StopAnimation;
    local_48.DelegateSize = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
    local_48.DelegateAllocator =
         (ForElementType<TAlignedBytes<16,16>_>)
         FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
  }
  this->PlayingAnimationName = local_res18;
  (this->AnimationEvent).AnimationName = local_res18;
  *pEVar1 = PlayForward;
  local_48.DelegateSize = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
  local_48.DelegateAllocator =
       (ForElementType<TAlignedBytes<16,16>_>)
       FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
  return;
}

// StopAnimation @ 14bf834f0

void __thiscall UDS_VM_SwimControl::StopAnimation(UDS_VM_SwimControl *this,FName *param_1)

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

// UnBindCharacterEvent @ 14bf84200

void __thiscall UDS_VM_SwimControl::UnBindCharacterEvent(UDS_VM_SwimControl *this,ulong64 param_1)

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

// UnbindModel @ 14bf85660

void __thiscall UDS_VM_SwimControl::UnbindModel(UDS_VM_SwimControl *this)

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

