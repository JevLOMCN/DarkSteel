// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 32

// SetHoveredEvent_WrapperImpl @ 14b61d7b0

void __cdecl UDS_VM_Chat_Viewer::SetHoveredEvent_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::bIsHovered.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::bIsHovered.FieldName;
  if (*(char *)((longlong)param_1 + 0x170) != '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x170) = 1;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  }
  return;
}

// SetUnHoveredEvent_WrapperImpl @ 14b61d7c0

void __cdecl UDS_VM_Chat_Viewer::SetUnHoveredEvent_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::bIsHovered.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::bIsHovered.FieldName;
  if (*(char *)((longlong)param_1 + 0x170) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x170) = 0;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  }
  return;
}

// SetFinishedAnimationEvent_WrapperImpl @ 14b61d7d0

void __cdecl UDS_VM_Chat_Viewer::SetFinishedAnimationEvent_WrapperImpl(void *param_1,void *param_2)

{
  if (*(longlong *)param_2 == *(longlong *)((longlong)param_1 + 0x18c)) {
    *(undefined4 *)((longlong)param_1 + 0x188) = 1;
    *(undefined4 *)((longlong)param_1 + 0x184) = 0;
    return;
  }
  if (*(longlong *)param_2 == *(longlong *)((longlong)param_1 + 0x194)) {
    *(undefined4 *)((longlong)param_1 + 0x188) = 3;
  }
  return;
}

// GetbIsHovered_WrapperImpl @ 14b61d7e0

void __cdecl UDS_VM_Chat_Viewer::GetbIsHovered_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x170);
  return;
}

// SetbIsHovered_WrapperImpl @ 14b61d7f0

void __cdecl UDS_VM_Chat_Viewer::SetbIsHovered_WrapperImpl(void *param_1,void *param_2)

{
  SetIsHovered(param_1,*(bool *)param_2);
  return;
}

// SetViewerOpacity_WrapperImpl @ 14b61d800

void __cdecl UDS_VM_Chat_Viewer::SetViewerOpacity_WrapperImpl(void *param_1,void *param_2)

{
  SetViewerOpacity(param_1,*(float *)param_2);
  return;
}

// StaticClass @ 14b61d810

UClass * __cdecl UDS_VM_Chat_Viewer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Chat_Viewer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Chat_Viewer",
               &Z_Registration_Info_UClass_UDS_VM_Chat_Viewer.InnerSingleton,
               StaticRegisterNativesUDS_VM_Chat_Viewer,0x1a0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Chat_Viewer>,
               InternalVTableHelperCtorCaller<UDS_VM_Chat_Viewer>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Chat_Viewer.InnerSingleton;
}

// UDS_VM_Chat_Viewer @ 14b61ffb0

UDS_VM_Chat_Viewer * __thiscall
UDS_VM_Chat_Viewer::UDS_VM_Chat_Viewer(UDS_VM_Chat_Viewer *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->ViewerOpacity = 1.0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->HoveredEvent)._padding_ = '\0';
  (this->HoveredEvent).bIsCustomSelected = false;
  (this->HoveredEvent).bIsLacked = false;
  (this->HoveredEvent).bIsCustomDisabled = false;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->ViewerAnimationEvent).NumberOfLoops = 1;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_Viewer__6B_;
  *(undefined8 *)&(this->HoveredEvent).Delegate = 0;
  *(undefined8 *)&(this->HoveredEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->HoveredEvent).Delegate.field_0x10 = 0;
  (this->UnHoveredEvent)._padding_ = '\0';
  (this->UnHoveredEvent).bIsCustomSelected = false;
  (this->UnHoveredEvent).bIsLacked = false;
  (this->UnHoveredEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->UnHoveredEvent).Delegate = 0;
  *(undefined8 *)&(this->UnHoveredEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->UnHoveredEvent).Delegate.field_0x10 = 0;
  (this->ViewerAnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->ViewerAnimationEvent).AnimationName.Number = 0;
  (this->ViewerAnimationEvent).AnimationPlayTime = 0.0;
  (this->ViewerAnimationEvent).AnimationEventType = None;
  (this->ViewerAnimationEvent).AnimationStateType = None;
  *(undefined8 *)&(this->ViewerAnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->ViewerAnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->ViewerAnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->ViewerAnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->ViewerAnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->ViewerAnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->FinishedAnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->FinishedAnimationEvent).AnimationName.Number = 0;
  (this->FinishedAnimationEvent).AnimationPlayTime = 0.0;
  (this->FinishedAnimationEvent).AnimationEventType = None;
  (this->FinishedAnimationEvent).AnimationStateType = None;
  *(undefined8 *)&(this->FinishedAnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->FinishedAnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->FinishedAnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->FinishedAnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->FinishedAnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->FinishedAnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  this->bIsHovered = false;
  this->ChattingTypeFlag = 0;
  (this->FinishedAnimationEvent).NumberOfLoops = 1;
  this->ChattingCloseTime = 5.0;
  this->ChattingElapsedTime = 0.0;
  this->ViewerOpenState = Closed;
  ::FName::FName(&this->OpenAnimationName,"Open_Ani");
  ::FName::FName(&this->EndAnimationName,"End_Ani");
  return this;
}

// UDS_VM_Chat_Viewer @ 14b620110

UDS_VM_Chat_Viewer * __thiscall
UDS_VM_Chat_Viewer::UDS_VM_Chat_Viewer(UDS_VM_Chat_Viewer *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->ViewerOpacity = 1.0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->HoveredEvent)._padding_ = '\0';
  (this->HoveredEvent).bIsCustomSelected = false;
  (this->HoveredEvent).bIsLacked = false;
  (this->HoveredEvent).bIsCustomDisabled = false;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->ViewerAnimationEvent).NumberOfLoops = 1;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_Viewer__6B_;
  *(undefined8 *)&(this->HoveredEvent).Delegate = 0;
  *(undefined8 *)&(this->HoveredEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->HoveredEvent).Delegate.field_0x10 = 0;
  (this->UnHoveredEvent)._padding_ = '\0';
  (this->UnHoveredEvent).bIsCustomSelected = false;
  (this->UnHoveredEvent).bIsLacked = false;
  (this->UnHoveredEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->UnHoveredEvent).Delegate = 0;
  *(undefined8 *)&(this->UnHoveredEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->UnHoveredEvent).Delegate.field_0x10 = 0;
  (this->ViewerAnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->ViewerAnimationEvent).AnimationName.Number = 0;
  (this->ViewerAnimationEvent).AnimationPlayTime = 0.0;
  (this->ViewerAnimationEvent).AnimationEventType = None;
  (this->ViewerAnimationEvent).AnimationStateType = None;
  *(undefined8 *)&(this->ViewerAnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->ViewerAnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->ViewerAnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->ViewerAnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->ViewerAnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->ViewerAnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->FinishedAnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->FinishedAnimationEvent).AnimationName.Number = 0;
  (this->FinishedAnimationEvent).AnimationPlayTime = 0.0;
  (this->FinishedAnimationEvent).AnimationEventType = None;
  (this->FinishedAnimationEvent).AnimationStateType = None;
  *(undefined8 *)&(this->FinishedAnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->FinishedAnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->FinishedAnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->FinishedAnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->FinishedAnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->FinishedAnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  this->bIsHovered = false;
  this->ChattingTypeFlag = 0;
  (this->FinishedAnimationEvent).NumberOfLoops = 1;
  this->ChattingCloseTime = 5.0;
  this->ChattingElapsedTime = 0.0;
  this->ViewerOpenState = Closed;
  ::FName::FName(&this->OpenAnimationName,"Open_Ani");
  ::FName::FName(&this->EndAnimationName,"End_Ani");
  return this;
}

// ~UDS_VM_Chat_Viewer @ 14b6215e0

void __thiscall UDS_VM_Chat_Viewer::~UDS_VM_Chat_Viewer(UDS_VM_Chat_Viewer *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_Viewer__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->FinishedAnimationEvent).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->FinishedAnimationEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->FinishedAnimationEvent).Delegate_ValidAnimation
            );
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->FinishedAnimationEvent).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->FinishedAnimationEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &(this->FinishedAnimationEvent).Delegate_AnimationFinish);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->ViewerAnimationEvent).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->ViewerAnimationEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ViewerAnimationEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->ViewerAnimationEvent).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->ViewerAnimationEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ViewerAnimationEvent).Delegate_AnimationFinish)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->UnHoveredEvent).Delegate);
  pvVar1 = *(void **)&(this->UnHoveredEvent).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->UnHoveredEvent).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->HoveredEvent).Delegate);
  pvVar1 = *(void **)&(this->HoveredEvent).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->HoveredEvent).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6238f0

IClassDescriptor * __thiscall
UDS_VM_Chat_Viewer::GetFieldNotificationDescriptor(UDS_VM_Chat_Viewer *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Chat_Viewer::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b624130

UClass * __cdecl UDS_VM_Chat_Viewer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Chat_Viewer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Chat_Viewer",
               &Z_Registration_Info_UClass_UDS_VM_Chat_Viewer.InnerSingleton,
               StaticRegisterNativesUDS_VM_Chat_Viewer,0x1a0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Chat_Viewer>,
               InternalVTableHelperCtorCaller<UDS_VM_Chat_Viewer>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Chat_Viewer.InnerSingleton;
}

// GetTickableTickType @ 14b624a30

ETickableTickType __thiscall UDS_VM_Chat_Viewer::GetTickableTickType(UDS_VM_Chat_Viewer *this)

{
  return Conditional;
}

// IsUpdate @ 14b624a60

bool __thiscall UDS_VM_Chat_Viewer::IsUpdate(UDS_VM_Chat_Viewer *this)

{
  return true;
}

// StaticRegisterNativesUDS_VM_Chat_Viewer @ 14b624b00

void __cdecl UDS_VM_Chat_Viewer::StaticRegisterNativesUDS_VM_Chat_Viewer(void)

{
  return;
}

// BindModel @ 14bdb0f40

void __thiscall UDS_VM_Chat_Viewer::BindModel(UDS_VM_Chat_Viewer *this)

{
  TMap<EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(EDS_KeyActionType,ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(EDS_KeyActionType,ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>_>
  *this_00;
  UDS_ChatEvent *pUVar1;
  UDS_InputEvent *pUVar2;
  int *piVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 local_res10 [2];
  int local_res18 [2];
  undefined4 *local_res20;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_ChatEvent::GetEvent();
  if (pUVar1 != (UDS_ChatEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChangedChatType,this
              );
    TMulticastDelegateRegistration<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Chat_Viewer>
              ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>
                *)&pUVar1->OnChangedChatType,(UDS_VM_Chat_Viewer *)local_res10,(pmf_c42c3450 *)this)
    ;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnAddChatMessage,this)
    ;
    TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_Chat_Viewer>
              ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                *)&pUVar1->OnAddChatMessage,(UDS_VM_Chat_Viewer *)local_res10,(pmf_e78ef8ed *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChangedChatMode,this
              );
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_ChatMode),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Chat_Viewer>
              (&pUVar1->OnChangedChatMode,(UDS_VM_Chat_Viewer *)local_res10,(pmf_619a61cd *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChangedChatOption,
               this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Chat_Viewer>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangedChatOption,(UDS_VM_Chat_Viewer *)local_res10,(pmf_bb6e0a50 *)this);
  }
  pUVar2 = UDS_InputEvent::GetEvent();
  if (pUVar2 != (UDS_InputEvent *)0x0) {
    this_00 = &(pUVar2->OnInputEvent).Subscriptions;
    local_res10[0] = 0x4e35;
    if (*(int *)&(pUVar2->OnInputEvent).Subscriptions.field_0x8 !=
        *(int *)&(pUVar2->OnInputEvent).Subscriptions.field_0x34) {
      puVar4 = *(undefined1 **)&(pUVar2->OnInputEvent).Subscriptions.field_0x40;
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &(pUVar2->OnInputEvent).Subscriptions.field_0x38;
      }
      iVar5 = *(int *)(puVar4 + (ulonglong)
                                (*(int *)&(pUVar2->OnInputEvent).Subscriptions.field_0x48 - 1U &
                                0x4e35) * 4);
      if (iVar5 != -1) {
        do {
          piVar3 = (int *)((longlong)iVar5 * 0x50 + *(longlong *)this_00);
          if (*piVar3 == 0x4e35) {
            if (piVar3 != (int *)0x0) goto LAB_14bdb113c;
            break;
          }
          iVar5 = piVar3[0x12];
        } while (iVar5 != -1);
      }
    }
    local_res20 = local_res10;
    TSet<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<enum_EDS_KeyActionType_const_&>_>
              (this_00,(uint)local_res18,(TKeyInitializer<EDS_KeyActionType_const_&> *)0x4e35,
               (bool *)&local_res20);
    piVar3 = (int *)((longlong)local_res18[0] * 0x50 + *(longlong *)this_00);
LAB_14bdb113c:
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar3 + 2),this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
    ::AddUObject<UDS_VM_Chat_Viewer>
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar3 + 2),
               (UDS_VM_Chat_Viewer *)local_res18,(pmf_437431f1 *)this);
  }
  return;
}

// Input_ChatOpen @ 14bdc78f0

void __thiscall
UDS_VM_Chat_Viewer::Input_ChatOpen
          (UDS_VM_Chat_Viewer *this,EDS_KeyActionType param_1,ETriggerEvent param_2,
          FInputActionValue *param_3)

{
  if (param_2 != Triggered) {
    if (param_2 == Started) {
      PlayOpenAnimation(this,true);
      return;
    }
    this->ChattingElapsedTime = 0.0;
  }
  return;
}

// OnAddChatMessage @ 14bdc9d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_Viewer::OnAddChatMessage
          (UDS_VM_Chat_Viewer *this,TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr> param_1)

{
  bool bVar1;
  EDS_ChatMode EVar2;
  UDS_ChatEvent *pUVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  FWeakObjectPtr local_res10 [3];
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_res10[0] = param_1.WeakPtr;
  pUVar3 = UDS_ChatEvent::GetEvent();
  if ((pUVar3 != (UDS_ChatEvent *)0x0) &&
     (EVar2 = FDS_QueryDelegate<enum_EDS_ChatMode_const_>::Query(&pUVar3->OnQueryChatMode),
     EVar2 != Viewer)) {
    return;
  }
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    pUVar5 = FWeakObjectPtr::Get(local_res10);
    if ((this->ChattingTypeFlag >> ((ulonglong)(byte)pUVar5[2].field_0x10 & 0x3f) & 1) != 0) {
      PlayOpenAnimation(this,false);
    }
  }
  else {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_Chat_Viewer::OnAddChatMessage",0x24,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_138.Ptr,0xd8,L"InChattingData.IsValid() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// OnChangedChatMode @ 14bdca590

void __thiscall UDS_VM_Chat_Viewer::OnChangedChatMode(UDS_VM_Chat_Viewer *this,EDS_ChatMode param_1)

{
  UDS_ChattingManager *this_00;
  FName local_18;
  int local_10;
  
  if (param_1 == Viewer) {
    this_00 = UDS_ChattingManager::GetInst();
    if (this_00 != (UDS_ChattingManager *)0x0) {
      UDS_ChattingManager::UpdateChattingDatas(this_00,this->ChattingTypeFlag,true,true);
      if (0 < (this_00->ChattingDatas).ArrayNum) {
        PlayOpenAnimation(this,true);
      }
    }
    return;
  }
  (this->ViewerAnimationEvent).AnimationName = this->EndAnimationName;
  this->ViewerOpenState = Closing;
  (this->ViewerAnimationEvent).AnimationEventType = PlayForwardSkip;
  local_10 = FFieldNotificationClassDescriptor::ViewerAnimationEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ViewerAnimationEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnChangedChatOption @ 14bdca690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Chat_Viewer::OnChangedChatOption(UDS_VM_Chat_Viewer *this)

{
  TObjectPtr<UDS_M_ChatOption>_u_0 TVar1;
  bool bVar2;
  UDS_ChattingManager *pUVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  undefined1 auStackY_188 [32];
  uint uVar6;
  wchar_t *pwVar7;
  FWeakObjectPtr aFStack_158 [2];
  TObjectPtr<UDS_M_ChatOption>_u_0 TStack_148;
  int iStack_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pUVar3 = UDS_ChattingManager::GetInst();
  if (pUVar3 == (UDS_ChattingManager *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    TStack_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_138,"UDS_VM_Chat_Viewer::UpdateViewerOpacity",0x27,Yes);
    pwVar7 = L"chattingManager == nullptr";
    uVar6 = 0x91;
  }
  else {
    TVar1 = (TObjectPtr<UDS_M_ChatOption>_u_0)(pUVar3->ChatOption).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (TVar1.DebugPtr != (UDS_M_ChatOption *)0x0) {
        UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.DebugPtr != (UDS_M_ChatOption *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
      }
    }
    aFStack_158[0].ObjectIndex = 0;
    aFStack_158[0].ObjectSerialNumber = 0;
    TStack_148 = TVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar1.DebugPtr != (UDS_M_ChatOption *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
    }
    FWeakObjectPtr::operator=(aFStack_158,(FObjectPtr)&TStack_148);
    bVar2 = FWeakObjectPtr::IsValid(aFStack_158);
    if (bVar2) {
      pUVar5 = FWeakObjectPtr::Get(aFStack_158);
      TStack_148 = (TObjectPtr<UDS_M_ChatOption>_u_0)
                   FFieldNotificationClassDescriptor::ViewerOpacity.FieldName;
      if (*(float *)(pUVar5 + 1) == this->ViewerOpacity) {
        return;
      }
      iStack_140 = FFieldNotificationClassDescriptor::ViewerOpacity.BitNumber;
      this->ViewerOpacity = *(float *)(pUVar5 + 1);
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&TStack_148);
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    TStack_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_138,"UDS_VM_Chat_Viewer::UpdateViewerOpacity",0x27,Yes);
    pwVar7 = L"chatOption.IsValid() == false";
    uVar6 = 0x98;
  }
  UDS_LogManager::PrintLog(pUVar4,1,Warning,TStack_138.Ptr,uVar6,pwVar7);
  if ((void *)TStack_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)TStack_138._padding_);
  }
  return;
}

// OnChangedChatType @ 14bdca6c0

void __thiscall UDS_VM_Chat_Viewer::OnChangedChatType(UDS_VM_Chat_Viewer *this,ulong64 param_1)

{
  this->ChattingTypeFlag = param_1;
  return;
}

// OnFinishedAnimationEvent @ 14bdced60

void __thiscall
UDS_VM_Chat_Viewer::OnFinishedAnimationEvent
          (UDS_VM_Chat_Viewer *this,FDS_WidgetAnimationEventField *param_1)

{
  if (param_1->AnimationName == this->OpenAnimationName) {
    this->ViewerOpenState = Opened;
    this->ChattingElapsedTime = 0.0;
    return;
  }
  if (param_1->AnimationName == this->EndAnimationName) {
    this->ViewerOpenState = Closed;
  }
  return;
}

// OnHoveredEvent @ 14bdcee20

void __thiscall
UDS_VM_Chat_Viewer::OnHoveredEvent(UDS_VM_Chat_Viewer *this,FDS_ButtonEventField *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::bIsHovered.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsHovered.FieldName;
  if (this->bIsHovered != true) {
    this->bIsHovered = true;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnSetViewModel @ 14bdd6770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_Viewer::OnSetViewModel
          (UDS_VM_Chat_Viewer *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UDS_ChattingManager *pUVar5;
  undefined1 auStackY_198 [32];
  TSharedPtr<FDS_ViewModelContext_Chat,1> local_168;
  FName local_158;
  int local_150;
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
  SafeCast<FDS_ViewModelContext_Chat>(&local_168,&local_148);
  if (local_168.Object == (FDS_ViewModelContext_Chat *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = (longlong)local_168.Object;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_Chat_Viewer::OnSetViewModel",0x22,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_138.Ptr,0x14,L"chatContext.IsValid() == false");
      if ((FDS_ViewModelContext_Chat *)local_138._padding_ != (FDS_ViewModelContext_Chat *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    if (local_168.Object == (FDS_ViewModelContext_Chat *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this->ChattingTypeFlag = (local_168.Object)->ChattingTypeFlag;
    this->ChattingCloseTime = (local_168.Object)->ChattingCloseTime;
    pUVar5 = UDS_ChattingManager::GetInst();
    if ((pUVar5 == (UDS_ChattingManager *)0x0) || ((pUVar5->ChattingDatas).ArrayNum < 1)) {
      (this->ViewerAnimationEvent).AnimationName = this->EndAnimationName;
      this->ViewerOpenState = Closing;
      (this->ViewerAnimationEvent).AnimationEventType = PlayForwardSkip;
      local_150 = FFieldNotificationClassDescriptor::ViewerAnimationEvent.BitNumber;
      local_158 = FFieldNotificationClassDescriptor::ViewerAnimationEvent.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
    }
    else {
      PlayOpenAnimation(this,false);
    }
    UpdateViewerOpacity(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_168.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUnHoveredEvent @ 14bddf000

void __thiscall
UDS_VM_Chat_Viewer::OnUnHoveredEvent(UDS_VM_Chat_Viewer *this,FDS_ButtonEventField *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::bIsHovered.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsHovered.FieldName;
  if (this->bIsHovered != false) {
    this->bIsHovered = false;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnUpdate @ 14bddf350

void __thiscall UDS_VM_Chat_Viewer::OnUpdate(UDS_VM_Chat_Viewer *this,float param_1)

{
  float fVar1;
  
  if (this->ViewerOpenState == Opened) {
    if (this->bIsHovered == true) {
      this->ChattingElapsedTime = 0.0;
      return;
    }
    fVar1 = param_1 + this->ChattingElapsedTime;
    this->ChattingElapsedTime = fVar1;
    if (this->ChattingCloseTime <= fVar1) {
      PlayEndAnimation(this,false);
      return;
    }
  }
  return;
}

// PlayEndAnimation @ 14bde20a0

void __thiscall UDS_VM_Chat_Viewer::PlayEndAnimation(UDS_VM_Chat_Viewer *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  (this->ViewerAnimationEvent).AnimationName = this->EndAnimationName;
  this->ViewerOpenState = Closing;
  (this->ViewerAnimationEvent).AnimationEventType = (param_1 + '\x01') * '\x02';
  local_10 = FFieldNotificationClassDescriptor::ViewerAnimationEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ViewerAnimationEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// PlayOpenAnimation @ 14bde2100

void __thiscall UDS_VM_Chat_Viewer::PlayOpenAnimation(UDS_VM_Chat_Viewer *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  this->ChattingElapsedTime = 0.0;
  if ((this->ViewerOpenState != Opened) && (this->ViewerOpenState != Opening)) {
    (this->ViewerAnimationEvent).AnimationName = this->OpenAnimationName;
    this->ViewerOpenState = Opening;
    (this->ViewerAnimationEvent).AnimationEventType = (param_1 + '\x01') * '\x02';
    local_10 = FFieldNotificationClassDescriptor::ViewerAnimationEvent.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::ViewerAnimationEvent.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetIsHovered @ 14bde67e0

void __thiscall UDS_VM_Chat_Viewer::SetIsHovered(UDS_VM_Chat_Viewer *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::bIsHovered.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsHovered.FieldName;
  if (this->bIsHovered != param_1) {
    this->bIsHovered = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetViewerOpacity @ 14bdea1f0

void __thiscall UDS_VM_Chat_Viewer::SetViewerOpacity(UDS_VM_Chat_Viewer *this,float param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::ViewerOpacity.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ViewerOpacity.FieldName;
  if (param_1 != this->ViewerOpacity) {
    this->ViewerOpacity = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UnbindModel @ 14bdec4e0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_Chat_Viewer::UnbindModel(UDS_VM_Chat_Viewer *this)

{
  UDS_LanguageManager *pUVar1;
  UDS_ChatEvent *pUVar2;
  UDS_InputEvent *pUVar3;
  
  pUVar1 = UDS_LanguageManager::GetInst();
  if (pUVar1 != (UDS_LanguageManager *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnLanguageChanged,this
              );
  }
  pUVar2 = UDS_ChatEvent::GetEvent();
  if (pUVar2 != (UDS_ChatEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnChangedChatType,this
              );
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnAddChatMessage,this)
    ;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnChangedChatMode,this
              );
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnChangedChatOption,
               this);
  }
  pUVar3 = UDS_InputEvent::GetEvent();
  if (pUVar3 != (UDS_InputEvent *)0x0) {
    FDS_FilteredEventDelegate<enum_EDS_KeyActionType_const_,enum_EDS_KeyActionType_const_,enum_ETriggerEvent_const_,FInputActionValue_const_&>
    ::Remove<UDS_VM_Chat_Viewer>(&pUVar3->OnInputEvent,this);
  }
  return;
}

// UpdateViewerOpacity @ 14bdfa4a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Chat_Viewer::UpdateViewerOpacity(UDS_VM_Chat_Viewer *this)

{
  TObjectPtr<UDS_M_ChatOption>_u_0 TVar1;
  bool bVar2;
  UDS_ChattingManager *pUVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  undefined1 auStackY_188 [32];
  uint uVar6;
  wchar_t *pwVar7;
  FWeakObjectPtr local_158 [2];
  TObjectPtr<UDS_M_ChatOption>_u_0 local_148;
  int local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pUVar3 = UDS_ChattingManager::GetInst();
  if (pUVar3 == (UDS_ChattingManager *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_Chat_Viewer::UpdateViewerOpacity",0x27,Yes);
    pwVar7 = L"chattingManager == nullptr";
    uVar6 = 0x91;
  }
  else {
    TVar1 = (TObjectPtr<UDS_M_ChatOption>_u_0)(pUVar3->ChatOption).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (TVar1.DebugPtr != (UDS_M_ChatOption *)0x0) {
        UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.DebugPtr != (UDS_M_ChatOption *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
      }
    }
    local_158[0].ObjectIndex = 0;
    local_158[0].ObjectSerialNumber = 0;
    local_148 = TVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar1.DebugPtr != (UDS_M_ChatOption *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
    }
    FWeakObjectPtr::operator=(local_158,(FObjectPtr)&local_148);
    bVar2 = FWeakObjectPtr::IsValid(local_158);
    if (bVar2) {
      pUVar5 = FWeakObjectPtr::Get(local_158);
      local_148 = (TObjectPtr<UDS_M_ChatOption>_u_0)
                  FFieldNotificationClassDescriptor::ViewerOpacity.FieldName;
      if (*(float *)(pUVar5 + 1) == this->ViewerOpacity) {
        return;
      }
      local_140 = FFieldNotificationClassDescriptor::ViewerOpacity.BitNumber;
      this->ViewerOpacity = *(float *)(pUVar5 + 1);
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_148);
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_Chat_Viewer::UpdateViewerOpacity",0x27,Yes);
    pwVar7 = L"chatOption.IsValid() == false";
    uVar6 = 0x98;
  }
  UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,uVar6,pwVar7);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

