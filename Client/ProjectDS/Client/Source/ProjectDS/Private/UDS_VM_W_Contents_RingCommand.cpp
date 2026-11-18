// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// SetAnimationFinishEvent_WrapperImpl @ 14b72dbf0

void __cdecl
UDS_VM_W_Contents_RingCommand::SetAnimationFinishEvent_WrapperImpl(void *param_1,void *param_2)

{
  if (*(longlong *)param_2 == *(longlong *)((longlong)param_1 + 0xa8)) {
    *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
    *(undefined4 *)((longlong)param_1 + 0xb0) = 0;
    *(undefined2 *)((longlong)param_1 + 0xb4) = 0;
    *(undefined4 *)((longlong)param_1 + 0xb8) = 1;
  }
  return;
}

// StaticClass @ 14b72dc00

UClass * __cdecl UDS_VM_W_Contents_RingCommand::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_Contents_RingCommand.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_Contents_RingCommand",
               &Z_Registration_Info_UClass_UDS_VM_W_Contents_RingCommand.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_Contents_RingCommand,0x138,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_Contents_RingCommand>,
               InternalVTableHelperCtorCaller<UDS_VM_W_Contents_RingCommand>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_Contents_RingCommand.InnerSingleton;
}

// UDS_VM_W_Contents_RingCommand @ 14b7348d0

UDS_VM_W_Contents_RingCommand * __thiscall
UDS_VM_W_Contents_RingCommand::UDS_VM_W_Contents_RingCommand
          (UDS_VM_W_Contents_RingCommand *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Contents_RingCommand__6B_;
  (this->RingCmdViewModel).field0_0x0.DebugPtr = (UDS_VM_W_RingCmd *)0x0;
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
  (this->AnimationEvent).NumberOfLoops = 1;
  (this->AnimationFinishEvent).NumberOfLoops = 1;
  return this;
}

// UDS_VM_W_Contents_RingCommand @ 14b7349b0

UDS_VM_W_Contents_RingCommand * __thiscall
UDS_VM_W_Contents_RingCommand::UDS_VM_W_Contents_RingCommand
          (UDS_VM_W_Contents_RingCommand *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Contents_RingCommand__6B_;
  (this->RingCmdViewModel).field0_0x0.DebugPtr = (UDS_VM_W_RingCmd *)0x0;
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
  (this->AnimationEvent).NumberOfLoops = 1;
  (this->AnimationFinishEvent).NumberOfLoops = 1;
  return this;
}

// ~UDS_VM_W_Contents_RingCommand @ 14b7362a0

void __thiscall
UDS_VM_W_Contents_RingCommand::~UDS_VM_W_Contents_RingCommand(UDS_VM_W_Contents_RingCommand *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Contents_RingCommand__6B_;
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

// GetFieldNotificationDescriptor @ 14b7393d0

IClassDescriptor * __thiscall
UDS_VM_W_Contents_RingCommand::GetFieldNotificationDescriptor(UDS_VM_W_Contents_RingCommand *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_Contents_RingCommand::FFieldNotificationClassDescriptor::GetDescriptor'::__l2
             ::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b73a140

UClass * __cdecl UDS_VM_W_Contents_RingCommand::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_Contents_RingCommand.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_Contents_RingCommand",
               &Z_Registration_Info_UClass_UDS_VM_W_Contents_RingCommand.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_Contents_RingCommand,0x138,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_Contents_RingCommand>,
               InternalVTableHelperCtorCaller<UDS_VM_W_Contents_RingCommand>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_Contents_RingCommand.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_Contents_RingCommand @ 14b73af50

void __cdecl UDS_VM_W_Contents_RingCommand::StaticRegisterNativesUDS_VM_W_Contents_RingCommand(void)

{
  return;
}

// CloseWidget @ 14bf9e690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_Contents_RingCommand::CloseWidget(UDS_VM_W_Contents_RingCommand *this)

{
  UDS_WindowManager *this_00;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  float local_148;
  uint local_144 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 == (UDS_WindowManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_W_Contents_RingCommand::CloseWidget",0x2a,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x58,L"windowManager is nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
        return;
      }
    }
  }
  else {
    local_148 = 0.0;
    local_144[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,RingCommand,local_144,&local_148);
  }
  return;
}

// InitViewModel @ 14bfb0e70

void __thiscall UDS_VM_W_Contents_RingCommand::InitViewModel(UDS_VM_W_Contents_RingCommand *this)

{
  UDS_VM_W_RingCmd *pUVar1;
  
  if ((this->RingCmdViewModel).field0_0x0.DebugPtr == (UDS_VM_W_RingCmd *)0x0) {
    pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_W_RingCmd>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_VM_W_RingCmd *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->RingCmdViewModel).field0_0x0.DebugPtr = pUVar1;
  }
  return;
}

// IsAniPlaying @ 14bfb24f0

bool __thiscall UDS_VM_W_Contents_RingCommand::IsAniPlaying(UDS_VM_W_Contents_RingCommand *this)

{
  return (this->AnimationEvent).AnimationEventType != None;
}

// OnAnimationFinishEvent @ 14bfb4480

void __thiscall
UDS_VM_W_Contents_RingCommand::OnAnimationFinishEvent
          (UDS_VM_W_Contents_RingCommand *this,FDS_WidgetAnimationEventField *param_1)

{
  if (param_1->AnimationName == (this->AnimationEvent).AnimationName) {
    (this->AnimationEvent).AnimationName.ComparisonIndex = 0;
    (this->AnimationEvent).AnimationName.Number = 0;
    (this->AnimationEvent).AnimationPlayTime = 0.0;
    (this->AnimationEvent).AnimationEventType = None;
    (this->AnimationEvent).AnimationStateType = None;
    (this->AnimationEvent).NumberOfLoops = 1;
  }
  return;
}

// OnSetViewModel @ 14bfcbc20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UDS_VM_W_Contents_RingCommand::OnSetViewModel
          (UDS_VM_W_Contents_RingCommand *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  UDS_VM_W_RingCmd *this_00;
  bool bVar3;
  FTimerManager *this_01;
  UDS_LogManager *pUVar4;
  UDS_RingCommandDeckDataSet *this_02;
  UObject *pUVar5;
  FName *pFVar6;
  FSharedReferencer<1> FVar7;
  undefined1 auStackY_1a8 [32];
  uint uVar8;
  wchar_t *pwVar9;
  TSharedPtr<FDS_ViewModelContext_RingCmd,1> local_178;
  FWeakObjectPtr local_168;
  undefined1 local_160 [280];
  void *local_48;
  wchar_t *local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FVar2 = (FName)param_1->Object;
  if (FVar2 == (FName)0x0) goto LAB_14bfcbeec;
  if (FDS_RingCommandService::bIsRingCommandKeyPressed == false) {
    this_01 = FDS_TimerManager::Get((UObject *)0x0);
    local_178.SharedReferenceCount.ReferenceController =
         local_178.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
    local_178.Object = (FDS_ViewModelContext_RingCmd *)CloseWidget;
    FTimerManager::SetTimerForNextTick<UDS_VM_W_Contents_RingCommand>
              (this_01,(UDS_VM_W_Contents_RingCommand *)local_160,(pmf_beb03817 *)this);
    goto LAB_14bfcbeec;
  }
  local_160._8_8_ = (param_1->SharedReferenceCount).ReferenceController;
  if ((TReferenceControllerBase<1> *)local_160._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_160._8_8_)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_160._8_8_)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_160._0_8_ = FVar2;
  SafeCast<FDS_ViewModelContext_RingCmd>(&local_178,(TSharedPtr<FDS_ViewModelContext,1> *)local_160)
  ;
  if ((FName)local_178.Object == (FName)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    FVar7.ReferenceController = local_178.SharedReferenceCount.ReferenceController;
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_48 = (void *)0x0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_160 + 0x18),
                 "UDS_VM_W_Contents_RingCommand::OnSetViewModel",0x2d,Yes);
      pwVar9 = L"context is nullptr";
      uVar8 = 0x30;
LAB_14bfcbd32:
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_40,uVar8,pwVar9);
      FVar7.ReferenceController = local_178.SharedReferenceCount.ReferenceController;
      if (local_48 != (void *)0x0) {
        FMemory::Free(local_48);
        FVar7.ReferenceController = local_178.SharedReferenceCount.ReferenceController;
      }
    }
  }
  else if ((this->RingCmdViewModel).field0_0x0.DebugPtr == (UDS_VM_W_RingCmd *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    FVar7.ReferenceController = local_178.SharedReferenceCount.ReferenceController;
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_48 = (void *)0x0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_160 + 0x18),
                 "UDS_VM_W_Contents_RingCommand::OnSetViewModel",0x2d,Yes);
      pwVar9 = L"RingCmdViewModel is nullptr";
      uVar8 = 0x36;
      goto LAB_14bfcbd32;
    }
  }
  else {
    TDS_DataSetGetter<UDS_RingCommandDeckDataSet>::Get((ulong64)&local_168);
    bVar3 = TWeakObjectPtr<UDS_RingCommandDeckDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_RingCommandDeckDataSet,FWeakObjectPtr> *)&local_168,
                       (void *)0x0);
    if (bVar3) {
      pUVar4 = UDS_LogManager::GetInst();
      FVar7.ReferenceController = local_178.SharedReferenceCount.ReferenceController;
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_48 = (void *)0x0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_160 + 0x18),
                   "UDS_VM_W_Contents_RingCommand::OnSetViewModel",0x2d,Yes);
        pwVar9 = L"ringCmdDeckDataSet is nullptr.";
        uVar8 = 0x3d;
        goto LAB_14bfcbd32;
      }
    }
    else {
      this_02 = (UDS_RingCommandDeckDataSet *)FWeakObjectPtr::Get(&local_168);
      pUVar5 = FWeakObjectPtr::Get(&local_168);
      UDS_RingCommandDeckDataSet::SetSelectedDeckIndex(this_02,*(int *)&pUVar5[4].field_0x20,-1);
      FVar7.ReferenceController = local_178.SharedReferenceCount.ReferenceController;
      this_00 = (this->RingCmdViewModel).field0_0x0.DebugPtr;
      if (local_178.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext
                ((UDS_ViewModelBase *)this_00,(TSharedPtr<FDS_ViewModelContext,1> *)&local_178);
      if ((this->AnimationEvent).AnimationEventType == None) {
        pFVar6 = ::FName::FName((FName *)local_160,L"Open_Ani");
        (this->AnimationEvent).AnimationName = *pFVar6;
        (this->AnimationEvent).AnimationEventType = PlayForward;
        local_178.SharedReferenceCount.ReferenceController._0_4_ =
             FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
        local_178.Object =
             (FDS_ViewModelContext_RingCmd *)
             FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_178);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
LAB_14bfcbeec:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// PlayAni @ 14bfd30b0

void __thiscall
UDS_VM_W_Contents_RingCommand::PlayAni(UDS_VM_W_Contents_RingCommand *this,FName param_1)

{
  FName local_18;
  int local_10;
  
  (this->AnimationEvent).AnimationName = param_1;
  (this->AnimationEvent).AnimationEventType = PlayForward;
  local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// StopAni @ 14bfdea00

void __thiscall
UDS_VM_W_Contents_RingCommand::StopAni(UDS_VM_W_Contents_RingCommand *this,FName param_1)

{
  FName local_18;
  int local_10;
  
  (this->AnimationEvent).AnimationName = param_1;
  (this->AnimationEvent).AnimationEventType = StopAnimation;
  local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  (this->AnimationEvent).NumberOfLoops = 1;
  (this->AnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationEvent).AnimationName.Number = 0;
  (this->AnimationEvent).AnimationPlayTime = 0.0;
  (this->AnimationEvent).AnimationEventType = None;
  (this->AnimationEvent).AnimationStateType = None;
  return;
}

