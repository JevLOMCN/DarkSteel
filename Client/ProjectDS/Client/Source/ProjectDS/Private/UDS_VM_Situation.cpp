// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// SetAnimationEndEvent_WrapperImpl @ 14b6e1110

void __cdecl UDS_VM_Situation::SetAnimationEndEvent_WrapperImpl(void *param_1,void *param_2)

{
  int iVar1;
  FName FVar2;
  FName FStack_18;
  int iStack_10;
  
  if (*(char *)((longlong)param_1 + 0x132) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x132) = 0;
    return;
  }
  if ((*(char *)((longlong)param_1 + 0x131) == '\x01') &&
     (iVar1 = ::FName::Compare((FName *)((longlong)param_1 + 0xa0),&DS_SituationParam::StartAniName)
     , iVar1 == 0)) {
    *(undefined1 *)((longlong)param_1 + 0x132) = 0;
    FVar2 = DS_SituationParam::EndAniName;
  }
  else {
    if (*(char *)((longlong)param_1 + 0x130) != '\x01') {
      return;
    }
    *(undefined1 *)((longlong)param_1 + 0x132) = 0;
    FVar2 = DS_SituationParam::StartAniName;
  }
  *(FName *)((longlong)param_1 + 0xa0) = FVar2;
  *(undefined2 *)((longlong)param_1 + 0xac) = 0x102;
  *(undefined4 *)((longlong)param_1 + 0xa8) = 0;
  iStack_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// StaticClass @ 14b6e1120

UClass * __cdecl UDS_VM_Situation::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Situation.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Situation",
               &Z_Registration_Info_UClass_UDS_VM_Situation.InnerSingleton,
               StaticRegisterNativesUDS_VM_Situation,0x138,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Situation>,
               InternalVTableHelperCtorCaller<UDS_VM_Situation>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Situation.InnerSingleton;
}

// UDS_VM_Situation @ 14b6e50b0

UDS_VM_Situation * __thiscall
UDS_VM_Situation::UDS_VM_Situation(UDS_VM_Situation *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Situation__6B_;
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
  (this->AnimationEndEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationEndEvent).AnimationName.Number = 0;
  (this->AnimationEndEvent).AnimationPlayTime = 0.0;
  (this->AnimationEndEvent).AnimationEventType = None;
  (this->AnimationEndEvent).AnimationStateType = None;
  *(undefined8 *)&(this->AnimationEndEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationEndEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEndEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationEndEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationEndEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEndEvent).Delegate_ValidAnimation.field_0x10 = 0;
  this->IsLoop = false;
  this->HasEndAnim = false;
  this->StopAniFlag = false;
  (this->AnimationEvent).NumberOfLoops = 1;
  (this->AnimationEndEvent).NumberOfLoops = 1;
  return this;
}

// UDS_VM_Situation @ 14b6e5190

UDS_VM_Situation * __thiscall
UDS_VM_Situation::UDS_VM_Situation(UDS_VM_Situation *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Situation__6B_;
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
  (this->AnimationEndEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationEndEvent).AnimationName.Number = 0;
  (this->AnimationEndEvent).AnimationPlayTime = 0.0;
  (this->AnimationEndEvent).AnimationEventType = None;
  (this->AnimationEndEvent).AnimationStateType = None;
  *(undefined8 *)&(this->AnimationEndEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationEndEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEndEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationEndEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationEndEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEndEvent).Delegate_ValidAnimation.field_0x10 = 0;
  this->IsLoop = false;
  this->HasEndAnim = false;
  this->StopAniFlag = false;
  (this->AnimationEvent).NumberOfLoops = 1;
  (this->AnimationEndEvent).NumberOfLoops = 1;
  return this;
}

// ~UDS_VM_Situation @ 14b6e6dc0

void __thiscall UDS_VM_Situation::~UDS_VM_Situation(UDS_VM_Situation *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Situation__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEndEvent).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->AnimationEndEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationEndEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEndEvent).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->AnimationEndEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationEndEvent).Delegate_AnimationFinish);
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

// GetFieldNotificationDescriptor @ 14b6e9520

IClassDescriptor * __thiscall
UDS_VM_Situation::GetFieldNotificationDescriptor(UDS_VM_Situation *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Situation::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6e9dc0

UClass * __cdecl UDS_VM_Situation::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Situation.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Situation",
               &Z_Registration_Info_UClass_UDS_VM_Situation.InnerSingleton,
               StaticRegisterNativesUDS_VM_Situation,0x138,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Situation>,
               InternalVTableHelperCtorCaller<UDS_VM_Situation>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Situation.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Situation @ 14b6eab70

void __cdecl UDS_VM_Situation::StaticRegisterNativesUDS_VM_Situation(void)

{
  return;
}

// EndAnimation @ 14be1abf0

void __thiscall UDS_VM_Situation::EndAnimation(UDS_VM_Situation *this)

{
  int iVar1;
  FName FVar2;
  FName local_18;
  int local_10;
  
  if (this->StopAniFlag == true) {
    this->StopAniFlag = false;
    return;
  }
  if ((this->HasEndAnim == true) &&
     (iVar1 = ::FName::Compare(&(this->AnimationEvent).AnimationName,
                               &DS_SituationParam::StartAniName), iVar1 == 0)) {
    this->StopAniFlag = false;
    FVar2 = DS_SituationParam::EndAniName;
  }
  else {
    if (this->IsLoop != true) {
      return;
    }
    this->StopAniFlag = false;
    FVar2 = DS_SituationParam::StartAniName;
  }
  (this->AnimationEvent).AnimationName = FVar2;
  (this->AnimationEvent).AnimationEventType = PlayForward;
  (this->AnimationEvent).AnimationStateType = Started;
  (this->AnimationEvent).AnimationPlayTime = 0.0;
  local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnAnimationEndEvent @ 14be28ec0

void __thiscall
UDS_VM_Situation::OnAnimationEndEvent(UDS_VM_Situation *this,FDS_WidgetAnimationEventField *param_1)

{
  int iVar1;
  FName FVar2;
  FName local_18;
  int local_10;
  
  if (this->StopAniFlag == true) {
    this->StopAniFlag = false;
    return;
  }
  if ((this->HasEndAnim == true) &&
     (iVar1 = ::FName::Compare(&(this->AnimationEvent).AnimationName,
                               &DS_SituationParam::StartAniName), iVar1 == 0)) {
    this->StopAniFlag = false;
    FVar2 = DS_SituationParam::EndAniName;
  }
  else {
    if (this->IsLoop != true) {
      return;
    }
    this->StopAniFlag = false;
    FVar2 = DS_SituationParam::StartAniName;
  }
  (this->AnimationEvent).AnimationName = FVar2;
  (this->AnimationEvent).AnimationEventType = PlayForward;
  (this->AnimationEvent).AnimationStateType = Started;
  (this->AnimationEvent).AnimationPlayTime = 0.0;
  local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnSetViewModel @ 14be3ec50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Situation::OnSetViewModel(UDS_VM_Situation *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_198 [32];
  FName local_168;
  int local_160;
  TSharedPtr<FDS_VMContext_Situation,1> local_158;
  TSharedPtr<FDS_ViewModelContext,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_148.Object = param_1->Object;
  local_148.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_148.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_VMContext_Situation>(&local_158,&local_148);
  if (local_158.Object == (FDS_VMContext_Situation *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_Situation::OnSetViewModel",0x20,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x14,L"context is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    this->IsLoop = (local_158.Object)->IsLoop;
    this->HasEndAnim = (local_158.Object)->HasEndAnim;
    this->StopAniFlag = false;
    (this->AnimationEvent).AnimationName = DS_SituationParam::StartAniName;
    (this->AnimationEvent).AnimationEventType = PlayForward;
    (this->AnimationEvent).AnimationStateType = Started;
    (this->AnimationEvent).AnimationPlayTime = 0.0;
    local_160 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
    local_168 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_168);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_158.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// StartAnimation @ 14be53890

void __thiscall UDS_VM_Situation::StartAnimation(UDS_VM_Situation *this,FName *param_1)

{
  FName local_18;
  int local_10;
  
  this->StopAniFlag = false;
  (this->AnimationEvent).AnimationName = *param_1;
  (this->AnimationEvent).AnimationEventType = PlayForward;
  (this->AnimationEvent).AnimationStateType = Started;
  (this->AnimationEvent).AnimationPlayTime = 0.0;
  local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// StopAnimation @ 14be54200

void __thiscall UDS_VM_Situation::StopAnimation(UDS_VM_Situation *this)

{
  FName local_18;
  int local_10;
  
  if (this->StopAniFlag != true) {
    this->StopAniFlag = true;
    (this->AnimationEvent).AnimationEventType = StopAnimation;
    local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

