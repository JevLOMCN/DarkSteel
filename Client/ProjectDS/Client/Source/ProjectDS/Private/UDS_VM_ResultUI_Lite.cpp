// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// SetClickClose_WrapperImpl @ 14b6d4030

void __cdecl UDS_VM_ResultUI_Lite::SetClickClose_WrapperImpl(void *param_1,void *param_2)

{
  FName aFStackX_8 [4];
  FName FStack_18;
  int iStack_10;
  
  ::FName::FName(aFStackX_8,"CloseAni");
  *(FName *)((longlong)param_1 + 0xd0) = aFStackX_8[0];
  *(undefined1 *)((longlong)param_1 + 0xdc) = 2;
  iStack_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetAnimationFinishEvent_WrapperImpl @ 14b6d4040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_ResultUI_Lite::SetAnimationFinishEvent_WrapperImpl(void *param_1,void *param_2)

{
  UDS_WindowManager *this;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  FName FStack_148;
  float afStack_140 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  ::FName::FName(&FStack_148,"CloseAni");
  if ((*(uint *)param_2 == FStack_148.ComparisonIndex.Value) &&
     (*(uint *)((longlong)param_2 + 4) == FStack_148.Number)) {
    this = UDS_WindowManager::GetInst();
    if (this == (UDS_WindowManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      if (pUVar1 != (UDS_LogManager *)0x0) {
        pUVar1 = UDS_LogManager::GetInst();
        TStack_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&TStack_138,"UDS_VM_ResultUI_Lite::OnAnimationFinishEvent",0x2c,Yes);
        UDS_LogManager::PrintLog(pUVar1,1,Warning,TStack_138.Ptr,0x5b,L"windowManager is nullptr.");
        if ((void *)TStack_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)TStack_138._padding_);
        }
      }
    }
    else {
      afStack_140[0] = 0.0;
      FStack_148.ComparisonIndex.Value = 0;
      UDS_WindowManager::CloseWindow(this,CommonRewardResultLite,(uint *)&FStack_148,afStack_140);
    }
  }
  return;
}

// StaticClass @ 14b6d4050

UClass * __cdecl UDS_VM_ResultUI_Lite::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ResultUI_Lite.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ResultUI_Lite",
               &Z_Registration_Info_UClass_UDS_VM_ResultUI_Lite.InnerSingleton,
               StaticRegisterNativesUDS_VM_ResultUI_Lite,0x1b8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_ResultUI_Lite>,
               InternalVTableHelperCtorCaller<UDS_VM_ResultUI_Lite>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ResultUI_Lite.InnerSingleton;
}

// UDS_VM_ResultUI_Lite @ 14b6d8e60

UDS_VM_ResultUI_Lite * __thiscall
UDS_VM_ResultUI_Lite::UDS_VM_ResultUI_Lite(UDS_VM_ResultUI_Lite *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ResultUI_Lite__6B_;
  *(undefined8 *)&(this->ClickClose).Delegate = 0;
  *(undefined8 *)&(this->ClickClose).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickClose).Delegate.field_0x10 = 0;
  (this->ItemEntryBindinfEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ItemEntryBindinfEventField).UserObjectList.ArrayNum = 0;
  (this->ItemEntryBindinfEventField).UserObjectList.ArrayMax = 0;
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
  (this->TitleText).StringTableType = None;
  (this->TitleText).StringTableID = 0;
  (this->TitleText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TitleText).StringEnumTableNameID.Number = 0;
  (this->TitleText).DateTime.Ticks = 0;
  (this->TitleText).TimeSpan.Ticks = 0;
  (this->TitleText).TimeExpressionType = None;
  (this->TitleText).IsExpression = false;
  (this->TitleText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleText).UniqueString.Data.ArrayNum = 0;
  (this->TitleText).UniqueString.Data.ArrayMax = 0;
  (this->TitleText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleText).FormatArgs.ArrayNum = 0;
  (this->TitleText).FormatArgs.ArrayMax = 0;
  this->ResultRewardType = None;
  (this->ClickClose)._padding_ = '\0';
  (this->ClickClose).bIsCustomSelected = false;
  (this->ClickClose).bIsLacked = false;
  (this->ClickClose).bIsCustomDisabled = false;
  (this->AnimationEvent).NumberOfLoops = 1;
  (this->AnimationFinishEvent).NumberOfLoops = 1;
  return this;
}

// UDS_VM_ResultUI_Lite @ 14b6d8fb0

UDS_VM_ResultUI_Lite * __thiscall
UDS_VM_ResultUI_Lite::UDS_VM_ResultUI_Lite(UDS_VM_ResultUI_Lite *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ResultUI_Lite__6B_;
  *(undefined8 *)&(this->ClickClose).Delegate = 0;
  *(undefined8 *)&(this->ClickClose).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickClose).Delegate.field_0x10 = 0;
  (this->ItemEntryBindinfEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ItemEntryBindinfEventField).UserObjectList.ArrayNum = 0;
  (this->ItemEntryBindinfEventField).UserObjectList.ArrayMax = 0;
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
  (this->TitleText).StringTableType = None;
  (this->TitleText).StringTableID = 0;
  (this->TitleText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TitleText).StringEnumTableNameID.Number = 0;
  (this->TitleText).DateTime.Ticks = 0;
  (this->TitleText).TimeSpan.Ticks = 0;
  (this->TitleText).TimeExpressionType = None;
  (this->TitleText).IsExpression = false;
  (this->TitleText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleText).UniqueString.Data.ArrayNum = 0;
  (this->TitleText).UniqueString.Data.ArrayMax = 0;
  (this->TitleText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleText).FormatArgs.ArrayNum = 0;
  (this->TitleText).FormatArgs.ArrayMax = 0;
  this->ResultRewardType = None;
  (this->ClickClose)._padding_ = '\0';
  (this->ClickClose).bIsCustomSelected = false;
  (this->ClickClose).bIsLacked = false;
  (this->ClickClose).bIsCustomDisabled = false;
  (this->AnimationEvent).NumberOfLoops = 1;
  (this->AnimationFinishEvent).NumberOfLoops = 1;
  return this;
}

// ~UDS_VM_ResultUI_Lite @ 14b6da7a0

void __thiscall UDS_VM_ResultUI_Lite::~UDS_VM_ResultUI_Lite(UDS_VM_ResultUI_Lite *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ResultUI_Lite__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TitleText).FormatArgs.AllocatorInstance.Data,
             (this->TitleText).FormatArgs.ArrayNum);
  pFVar1 = (this->TitleText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TitleText).UniqueString.Data.AllocatorInstance.Data;
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
  pFVar1 = (this->ItemEntryBindinfEventField).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickClose).Delegate);
  pvVar2 = *(void **)&(this->ClickClose).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickClose).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6dcde0

IClassDescriptor * __thiscall
UDS_VM_ResultUI_Lite::GetFieldNotificationDescriptor(UDS_VM_ResultUI_Lite *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_ResultUI_Lite::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6dd980

UClass * __cdecl UDS_VM_ResultUI_Lite::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ResultUI_Lite.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ResultUI_Lite",
               &Z_Registration_Info_UClass_UDS_VM_ResultUI_Lite.InnerSingleton,
               StaticRegisterNativesUDS_VM_ResultUI_Lite,0x1b8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_ResultUI_Lite>,
               InternalVTableHelperCtorCaller<UDS_VM_ResultUI_Lite>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ResultUI_Lite.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_ResultUI_Lite @ 14b6ddf60

void __cdecl UDS_VM_ResultUI_Lite::StaticRegisterNativesUDS_VM_ResultUI_Lite(void)

{
  return;
}

// InitViewModel @ 14bdc7660

void __thiscall UDS_VM_ResultUI_Lite::InitViewModel(UDS_VM_ResultUI_Lite *this)

{
  FName local_18;
  int local_10;
  
  local_10 = UDS_ViewModelBase::FFieldNotificationClassDescriptor::Visibility.BitNumber;
  local_18 = UDS_ViewModelBase::FFieldNotificationClassDescriptor::Visibility.FieldName;
  if ((char)this->_padding_ != '\x01') {
    *(undefined1 *)&this->_padding_ = 1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnAnimationFinishEvent @ 14bdc9f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ResultUI_Lite::OnAnimationFinishEvent
          (UDS_VM_ResultUI_Lite *this,FDS_WidgetAnimationEventField *param_1)

{
  UDS_WindowManager *this_00;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  FName local_148;
  float local_140 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  ::FName::FName(&local_148,"CloseAni");
  if (((param_1->AnimationName).ComparisonIndex.Value == local_148.ComparisonIndex.Value) &&
     ((param_1->AnimationName).Number == local_148.Number)) {
    this_00 = UDS_WindowManager::GetInst();
    if (this_00 == (UDS_WindowManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      if (pUVar1 != (UDS_LogManager *)0x0) {
        pUVar1 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_VM_ResultUI_Lite::OnAnimationFinishEvent",0x2c,Yes);
        UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x5b,L"windowManager is nullptr.");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      local_140[0] = 0.0;
      local_148.ComparisonIndex.Value = 0;
      UDS_WindowManager::CloseWindow(this_00,CommonRewardResultLite,(uint *)&local_148,local_140);
    }
  }
  return;
}

// OnClickClose @ 14bdcbe10

void __thiscall
UDS_VM_ResultUI_Lite::OnClickClose(UDS_VM_ResultUI_Lite *this,FDS_ButtonEventField *param_1)

{
  FName local_res8 [4];
  FName local_18;
  int local_10;
  
  ::FName::FName(local_res8,"CloseAni");
  (this->AnimationEvent).AnimationName = local_res8[0];
  (this->AnimationEvent).AnimationEventType = PlayForward;
  local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnCloseInit @ 14bdcdbf0

void __thiscall UDS_VM_ResultUI_Lite::OnCloseInit(UDS_VM_ResultUI_Lite *this)

{
  UDS_ViewModelBase::OnCloseInit((UDS_ViewModelBase *)this);
  if (this->ResultRewardType == Breach) {
    FDS_PhasingService::SendPhasingLeave();
  }
  this->ResultRewardType = None;
  return;
}

// OnSetViewModel @ 14bddcde0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ResultUI_Lite::OnSetViewModel
          (UDS_VM_ResultUI_Lite *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  UDS_LogManager *pUVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  UDS_ModelBase *pUVar9;
  undefined1 auStackY_428 [32];
  FWeakObjectPtr local_3f8;
  TSharedPtr<FDS_ViewModelContext_ModelBase,1> local_3f0;
  UDS_ModelBase *local_3e0;
  FName local_3d8 [2];
  FName local_3c8;
  int local_3c0;
  FName local_3b8;
  int local_3b0;
  FName local_3a8;
  int local_3a0;
  TSharedPtr<FDS_ViewModelContext,1> local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_388;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_428;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_398.Object = param_1->Object;
  local_398.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_398.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_398.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_398.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_ModelBase>(&local_3f0,&local_398);
  if (local_3f0.Object == (FDS_ViewModelContext_ModelBase *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_388._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_388,"UDS_VM_ResultUI_Lite::OnSetViewModel",0x24,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Warning,local_388.Ptr,0x16,L"modelBaseContext.IsValid() == false");
      if ((void *)local_388._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_388._padding_);
      }
    }
  }
  else {
    if (local_3f0.Object == (FDS_ViewModelContext_ModelBase *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (((local_3f0.Object)->Model).field0_0x0.DebugPtr == (UDS_ModelBase *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 != (UDS_LogManager *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        local_268._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_268,"UDS_VM_ResultUI_Lite::OnSetViewModel",0x24,Yes);
        UDS_LogManager::PrintLog
                  (pUVar6,1,Warning,local_268.Ptr,0x1c,L"modelBaseContext->Model == nullptr");
        if ((void *)local_268._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_268._padding_);
        }
      }
    }
    else {
      pUVar7 = Z_Construct_UClass_UDS_M_ResultUI_NoRegister();
      bVar5 = FObjectPtr::IsA((FObjectPtr *)&(local_3f0.Object)->Model,pUVar7);
      if (bVar5) {
        pUVar9 = ((local_3f0.Object)->Model).field0_0x0.DebugPtr;
      }
      else {
        pUVar9 = (UDS_ModelBase *)0x0;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UDS_ModelBase *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar9);
      }
      local_3f8.ObjectIndex = 0;
      local_3f8.ObjectSerialNumber = 0;
      local_3e0 = pUVar9;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UDS_ModelBase *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar9);
      }
      FWeakObjectPtr::operator=(&local_3f8,(FObjectPtr)&local_3e0);
      bVar5 = TWeakObjectPtr<UDS_M_ResultUI,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_M_ResultUI,FWeakObjectPtr> *)&local_3f8,(void *)0x0);
      if (bVar5) {
        pUVar6 = UDS_LogManager::GetInst();
        if (pUVar6 != (UDS_LogManager *)0x0) {
          pUVar6 = UDS_LogManager::GetInst();
          local_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_148,"UDS_VM_ResultUI_Lite::OnSetViewModel",0x24,Yes);
          UDS_LogManager::PrintLog
                    (pUVar6,1,Warning,local_148.Ptr,0x23,L"dungeonResultModel == nullptr");
          if ((void *)local_148._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_148._padding_);
          }
        }
      }
      else {
        UpdateItemList(this,(TWeakObjectPtr<UDS_M_ResultUI,FWeakObjectPtr>)local_3f8);
        pUVar8 = FWeakObjectPtr::Get(&local_3f8);
        this->ResultRewardType = pUVar8[0xb].field_0x18;
        ::FName::FName(local_3d8,"OpenAni");
        (this->AnimationEvent).AnimationName = local_3d8[0];
        (this->AnimationEvent).AnimationEventType = PlayForward;
        local_3c0 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
        local_3c8 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_3c8);
        iVar4 = UDS_ViewModelBase::FFieldNotificationClassDescriptor::Visibility.BitNumber;
        FVar3 = UDS_ViewModelBase::FFieldNotificationClassDescriptor::Visibility.FieldName;
        if ((char)this->_padding_ != '\x04') {
          *(undefined1 *)&this->_padding_ = 4;
          local_3b0 = iVar4;
          local_3b8 = FVar3;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_3b8);
        }
        pUVar8 = FWeakObjectPtr::Get(&local_3f8);
        FDS_Text::SetTextFromStringTable
                  (&this->TitleText,StringBase,*(long64 *)&pUVar8[0xb].field_0x10);
        local_3a0 = FFieldNotificationClassDescriptor::TitleText.BitNumber;
        local_3a8 = FFieldNotificationClassDescriptor::TitleText.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_3a8);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3f0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UpdateItemList @ 14bdf1a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ResultUI_Lite::UpdateItemList
          (UDS_VM_ResultUI_Lite *this,TWeakObjectPtr<UDS_M_ResultUI,FWeakObjectPtr> param_1)

{
  TArray<TSharedPtr<FDS_ViewModelContext,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  FDS_ViewModelContext_MoneyDisplay *pFVar7;
  FDS_VMContext_RewardSlot *pFVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  UObject *pUVar15;
  UDS_UserObjectListItem *pUVar16;
  TObjectPtr<UDS_M_ItemImplBase> TVar17;
  UDS_LogManager *pUVar18;
  UDS_M_ItemImplBase *this_00;
  undefined8 *puVar19;
  FObjectPtr_u_0 _Src;
  int iVar20;
  uint uVar21;
  atomic<int> *paVar22;
  FSharedReferencer<1> FVar23;
  FDS_EntryBindingEventField *this_01;
  uint uVar24;
  longlong lVar25;
  longlong lVar26;
  FWeakObjectPtr local_res10;
  undefined1 auStackY_388 [32];
  FObjectPtr_u_0 local_348;
  int local_340 [2];
  FWeakObjectPtr local_338;
  TSharedPtr<FDS_ViewModelContext_MoneyDisplay,1> local_330;
  longlong local_320;
  longlong local_318;
  TSharedPtr<FDS_VMContext_RewardSlot,1> local_310;
  TSharedPtr<FDS_VMContext_RewardSlot,1> local_300;
  UObject *local_2f0;
  FDS_EntryBindingEventField *local_2e8;
  UDS_UserObjectListItem *local_2e0;
  longlong local_2d8;
  longlong local_2d0;
  UDS_VM_ResultUI_Lite *local_2c8;
  FName local_2b8;
  int local_2b0;
  undefined1 local_2a8 [8];
  undefined1 local_2a0 [8];
  TReferenceControllerBase<1> *local_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_388;
  _Src.Handle = (UObject *)0x0;
  local_res10 = param_1.WeakPtr;
  local_2c8 = this;
  bVar11 = TWeakObjectPtr<UDS_M_ResultUI,FWeakObjectPtr>::UEOpEquals
                     ((TWeakObjectPtr<UDS_M_ResultUI,FWeakObjectPtr> *)&local_res10,(void *)0x0);
  if (!bVar11) {
    this_01 = &this->ItemEntryBindinfEventField;
    local_2e8 = this_01;
    FDS_EntryBindingEventField::Reset(this_01);
    uVar24 = 0;
    local_348.Handle = (UObject *)0x0;
    local_340[0] = 0;
    local_340[1] = 0;
    pUVar15 = FWeakObjectPtr::Get(&local_res10);
    if (&local_348 == (FObjectPtr_u_0 *)&pUVar15[10].field_0x18) {
      _Src.Handle = (UObject *)0x1506109c0;
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(void*)this != (void*)&Source",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x96e,L"");
      if (bVar11) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar20 = *(int *)&pUVar15[10].field_0x20;
    if (iVar20 != 0) {
      iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x10,4,iVar20,(ForAnyElementType *)&local_348,local_340,local_340 + 1);
      _Src = (FObjectPtr_u_0)*(FObjectPtr_u_0 *)&pUVar15[10].field_0x18;
      memcpy((void *)((longlong)&(local_348.Handle)->field_0x0 + (longlong)iVar12 * 0x10),
             _Src.Handle,(longlong)iVar20 << 4);
    }
    iVar20 = local_340[0] + -1;
    pUVar15 = FWeakObjectPtr::Get(&local_res10);
    if (&local_348 == (FObjectPtr_u_0 *)(pUVar15 + 0xb)) {
      _Src.Handle = (UObject *)0x1506109c0;
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(void*)this != (void*)&Source",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x96e,L"");
      if (bVar11) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar12 = *(int *)&pUVar15[0xb].field_0x8;
    if (iVar12 != 0) {
      iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x10,4,iVar12,(ForAnyElementType *)&local_348,local_340,local_340 + 1);
      _Src = (FObjectPtr_u_0)((FObjectPtr_u_0 *)(pUVar15 + 0xb))->Handle;
      memcpy((void *)((longlong)&(local_348.Handle)->field_0x0 + (longlong)iVar13 * 0x10),
             _Src.Handle,(longlong)iVar12 << 4);
    }
    if (0 < local_340[0]) {
      local_2d8 = (longlong)iVar20;
      local_2d0 = (longlong)(local_340[0] + -1);
      local_320 = 0;
      local_318 = 0;
      do {
        lVar10 = local_2d0;
        lVar9 = local_2d8;
        lVar26 = local_318;
        lVar25 = local_320;
        pUVar15 = GetTransientPackageAsObject();
        pUVar16 = NewObject<UDS_UserObjectListItem>(pUVar15);
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar16 != (UDS_UserObjectListItem *)0x0) goto LAB_14bdf1c66;
LAB_14bdf1e0f:
          pUVar18 = UDS_LogManager::GetInst();
          if (pUVar18 != (UDS_LogManager *)0x0) {
            pUVar18 = UDS_LogManager::GetInst();
            local_288._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_288,"UDS_VM_ResultUI_Lite::UpdateItemList",0x24,Yes);
            _Src.Handle = (UObject *)0x0;
            UDS_LogManager::PrintLog(pUVar18,1,Warning,local_288.Ptr,0x77,L"listItem is nullptr");
            if ((void *)local_288._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_288._padding_);
            }
          }
        }
        else {
          if (pUVar16 == (UDS_UserObjectListItem *)0x0) goto LAB_14bdf1e0f;
          UE::GC::MarkAsReachable((UObject *)pUVar16);
LAB_14bdf1c66:
          if (lVar9 < lVar25) {
            if (lVar25 <= lVar10) {
              MakeContext<FDS_ViewModelContext_MoneyDisplay>(&local_330);
              pFVar7 = local_330.Object;
              FVar23.ReferenceController = local_330.SharedReferenceCount.ReferenceController;
              if (local_330.Object != (FDS_ViewModelContext_MoneyDisplay *)0x0) {
                if ((local_330.Object == (FDS_ViewModelContext_MoneyDisplay *)0x0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar11)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                *(undefined4 *)&pFVar7->_padding_ = 0x192;
                uVar14 = 0;
                if ((int)uVar24 < local_340[0]) {
                  uVar14 = ~uVar24 >> 0x1f;
                }
                if ((uVar14 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                iVar20 = *(int *)((longlong)&(local_348.Handle)->field_0x0 + lVar26);
                if ((pFVar7 == (FDS_ViewModelContext_MoneyDisplay *)0x0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar11)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                pFVar7->MoneyId = (longlong)iVar20;
                uVar14 = 0;
                if ((int)uVar24 < local_340[0]) {
                  uVar14 = ~uVar24 >> 0x1f;
                }
                if ((uVar14 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                iVar20 = *(int *)(&(local_348.Handle)->field_0x4 + lVar26);
                if ((pFVar7 == (FDS_ViewModelContext_MoneyDisplay *)0x0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar11)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                FVar23.ReferenceController = local_330.SharedReferenceCount.ReferenceController;
                pFVar7->Quantity = (longlong)iVar20;
                if (local_330.SharedReferenceCount.ReferenceController ==
                    (TReferenceControllerBase<1> *)0x0) {
                  paVar22 = (atomic<int> *)&DAT_00000008;
                }
                else {
                  paVar22 = &(local_330.SharedReferenceCount.ReferenceController)->
                             SharedReferenceCount;
                  LOCK();
                  *paVar22 = (atomic<int>)((int)*paVar22 + 1);
                  UNLOCK();
                }
                iVar20 = (pUVar16->ViewModelContextArray).ArrayNum;
                piVar2 = &(pUVar16->ViewModelContextArray).ArrayMax;
                if (iVar20 == *piVar2) {
                  iVar20 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x810,&(pUVar16->ViewModelContextArray).AllocatorInstance,
                                      piVar2);
                }
                (pUVar16->ViewModelContextArray).ArrayNum = iVar20 + 1;
                pFVar5 = (pUVar16->ViewModelContextArray).AllocatorInstance.Data;
                *(FDS_ViewModelContext_MoneyDisplay **)(pFVar5 + (longlong)iVar20 * 0x10) = pFVar7;
                *(TReferenceControllerBase<1> **)(pFVar5 + (longlong)iVar20 * 0x10 + 8) =
                     FVar23.ReferenceController;
                if (FVar23.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  *paVar22 = (atomic<int>)((int)*paVar22 + 1);
                  UNLOCK();
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (FVar23.ReferenceController);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (FVar23.ReferenceController);
              MakeContext<FDS_VMContext_RewardSlot>(&local_300);
              pFVar8 = local_300.Object;
              FVar23.ReferenceController = local_300.SharedReferenceCount.ReferenceController;
              if (local_300.Object != (FDS_VMContext_RewardSlot *)0x0) {
                if ((local_300.Object == (FDS_VMContext_RewardSlot *)0x0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar11)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                FVar23.ReferenceController = local_300.SharedReferenceCount.ReferenceController;
                *(undefined4 *)&pFVar8->_padding_ = 0xb8;
                pFVar8->RewardSlotType = Money;
                if (local_300.SharedReferenceCount.ReferenceController ==
                    (TReferenceControllerBase<1> *)0x0) {
                  paVar22 = (atomic<int> *)&DAT_00000008;
                }
                else {
                  paVar22 = &(local_300.SharedReferenceCount.ReferenceController)->
                             SharedReferenceCount;
                  LOCK();
                  *paVar22 = (atomic<int>)((int)*paVar22 + 1);
                  UNLOCK();
                }
                iVar20 = (pUVar16->ViewModelContextArray).ArrayNum;
                piVar2 = &(pUVar16->ViewModelContextArray).ArrayMax;
                if (iVar20 == *piVar2) {
                  iVar20 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x810,&(pUVar16->ViewModelContextArray).AllocatorInstance,
                                      piVar2);
                }
                (pUVar16->ViewModelContextArray).ArrayNum = iVar20 + 1;
                pFVar5 = (pUVar16->ViewModelContextArray).AllocatorInstance.Data;
                *(FDS_VMContext_RewardSlot **)(pFVar5 + (longlong)iVar20 * 0x10) = pFVar8;
                *(TReferenceControllerBase<1> **)(pFVar5 + (longlong)iVar20 * 0x10 + 8) =
                     FVar23.ReferenceController;
                if (FVar23.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  *paVar22 = (atomic<int>)((int)*paVar22 + 1);
                  UNLOCK();
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (FVar23.ReferenceController);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (FVar23.ReferenceController);
              lVar25 = local_320;
              lVar26 = local_318;
            }
LAB_14bdf232e:
            local_2e0 = pUVar16;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pUVar16);
            }
            _Src.Handle = (UObject *)&local_2e0;
            FDS_EntryBindingEventField::Add(this_01,(TObjectPtr<UDS_UserObjectListItem>)_Src);
          }
          else {
            uVar21 = ~uVar24 >> 0x1f;
            uVar14 = 0;
            if ((int)uVar24 < local_340[0]) {
              uVar14 = uVar21;
            }
            if (uVar14 == 0) {
              _Src.Handle = (UObject *)0x1506109c0;
              bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar11) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            TVar17 = DS_ItemDataUtil::CreateItemModel
                               ((EDS_ItemSlotStateType)local_2a8,(int)CONCAT71(_Src._1_7_,6));
            pUVar15 = *(UObject **)TVar17.field0_0x0;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar15);
            }
            local_338.ObjectIndex = 0;
            local_338.ObjectSerialNumber = 0;
            local_2f0 = pUVar15;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar15);
            }
            _Src.Handle = (UObject *)&local_2f0;
            FWeakObjectPtr::operator=(&local_338,(FObjectPtr)_Src);
            bVar11 = FWeakObjectPtr::IsValid(&local_338);
            if (bVar11) {
              this_00 = (UDS_M_ItemImplBase *)FWeakObjectPtr::Get(&local_338);
              uVar14 = 0;
              if ((int)uVar24 < local_340[0]) {
                uVar14 = uVar21;
              }
              if ((uVar14 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              UDS_M_ItemImplBase::SetQuantity
                        (this_00,*(int *)(&(local_348.Handle)->field_0x4 + lVar26));
              pUVar15 = FWeakObjectPtr::Get(&local_338);
              puVar19 = (undefined8 *)(**(code **)(*(longlong *)pUVar15 + 0x310))(pUVar15,local_2a0)
              ;
              pTVar3 = (TReferenceControllerBase<1> *)puVar19[1];
              uVar4 = *puVar19;
              if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
                paVar22 = (atomic<int> *)&DAT_00000008;
              }
              else {
                paVar22 = &pTVar3->SharedReferenceCount;
                LOCK();
                *paVar22 = (atomic<int>)((int)*paVar22 + 1);
                UNLOCK();
              }
              pTVar1 = &pUVar16->ViewModelContextArray;
              iVar20 = (pUVar16->ViewModelContextArray).ArrayNum;
              if (iVar20 == (pUVar16->ViewModelContextArray).ArrayMax) {
                iVar20 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&pTVar1->AllocatorInstance,
                                    &(pUVar16->ViewModelContextArray).ArrayMax);
              }
              (pUVar16->ViewModelContextArray).ArrayNum = iVar20 + 1;
              pFVar5 = (pTVar1->AllocatorInstance).Data;
              *(undefined8 *)(pFVar5 + (longlong)iVar20 * 0x10) = uVar4;
              *(TReferenceControllerBase<1> **)(pFVar5 + (longlong)iVar20 * 0x10 + 8) = pTVar3;
              if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                *paVar22 = (atomic<int>)((int)*paVar22 + 1);
                UNLOCK();
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar3);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_298);
              MakeContext<FDS_VMContext_RewardSlot>(&local_310);
              pFVar8 = local_310.Object;
              if (local_310.Object == (FDS_VMContext_RewardSlot *)0x0) {
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_310.SharedReferenceCount.ReferenceController);
                this_01 = local_2e8;
                lVar25 = local_320;
                lVar26 = local_318;
              }
              else {
                if ((local_310.Object == (FDS_VMContext_RewardSlot *)0x0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar11)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                FVar23.ReferenceController = local_310.SharedReferenceCount.ReferenceController;
                *(undefined4 *)&pFVar8->_padding_ = 0xb8;
                pFVar8->RewardSlotType = Item;
                if (local_310.SharedReferenceCount.ReferenceController ==
                    (TReferenceControllerBase<1> *)0x0) {
                  paVar22 = (atomic<int> *)&DAT_00000008;
                }
                else {
                  paVar22 = &(local_310.SharedReferenceCount.ReferenceController)->
                             SharedReferenceCount;
                  LOCK();
                  *paVar22 = (atomic<int>)((int)*paVar22 + 1);
                  UNLOCK();
                }
                iVar20 = (pUVar16->ViewModelContextArray).ArrayNum;
                if (iVar20 == (pUVar16->ViewModelContextArray).ArrayMax) {
                  iVar20 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x810,&pTVar1->AllocatorInstance,
                                      &(pUVar16->ViewModelContextArray).ArrayMax);
                }
                (pUVar16->ViewModelContextArray).ArrayNum = iVar20 + 1;
                pFVar5 = (pTVar1->AllocatorInstance).Data;
                *(FDS_VMContext_RewardSlot **)(pFVar5 + (longlong)iVar20 * 0x10) = pFVar8;
                *(TReferenceControllerBase<1> **)(pFVar5 + (longlong)iVar20 * 0x10 + 8) =
                     FVar23.ReferenceController;
                if (FVar23.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  *paVar22 = (atomic<int>)((int)*paVar22 + 1);
                  UNLOCK();
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (FVar23.ReferenceController);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (FVar23.ReferenceController);
                this_01 = local_2e8;
                lVar25 = local_320;
                lVar26 = local_318;
              }
              goto LAB_14bdf232e;
            }
            pUVar18 = UDS_LogManager::GetInst();
            if (pUVar18 != (UDS_LogManager *)0x0) {
              pUVar18 = UDS_LogManager::GetInst();
              uVar14 = 0;
              if ((int)uVar24 < local_340[0]) {
                uVar14 = uVar21;
              }
              if ((uVar14 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              local_168._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_168,"UDS_VM_ResultUI_Lite::UpdateItemList",0x24,Yes);
              _Src.Handle = (UObject *)0x0;
              UDS_LogManager::PrintLog
                        (pUVar18,1,Warning,local_168.Ptr,0x80,
                         L"itemModel.IsValid() == false (itemTID : %d)");
              if ((void *)local_168._padding_ != (void *)0x0) {
                FMemory::Free((void *)local_168._padding_);
              }
            }
          }
        }
        local_320 = lVar25 + 1;
        local_318 = lVar26 + 0x10;
        uVar24 = uVar24 + 1;
      } while ((int)uVar24 < local_340[0]);
    }
    local_2b0 = FFieldNotificationClassDescriptor::ItemEntryBindinfEventField.BitNumber;
    local_2b8 = FFieldNotificationClassDescriptor::ItemEntryBindinfEventField.FieldName;
    (**(code **)(local_2c8->_padding_ + 0x38))(&local_2c8->_padding_,&local_2b8);
    if (local_348.Handle != (UObject *)0x0) {
      FMemory::Free(local_348.Handle);
    }
  }
  return;
}

