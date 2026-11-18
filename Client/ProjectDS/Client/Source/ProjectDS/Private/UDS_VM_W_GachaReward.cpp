// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// SetOnClickedClosevent_WrapperImpl @ 14b72eea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_W_GachaReward::SetOnClickedClosevent_WrapperImpl(void *param_1,void *param_2)

{
  code *pcVar1;
  bool bVar2;
  UDS_WindowManager *this;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_178 [32];
  float fStack_148;
  uint auStack_144 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this = UDS_WindowManager::GetInst();
  if (this == (UDS_WindowManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_W_GachaReward::CloseGachaReward",0x26,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,TStack_138.Ptr,0x88,L"windowManager is nullptr.");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8807934582050521225>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_GachaReward.cpp"
                       ,0x89,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    fStack_148 = 0.0;
    auStack_144[0] = 0;
    UDS_WindowManager::CloseWindow(this,GachaReward,auStack_144,&fStack_148);
  }
  return;
}

// SetOnClickedGachaOneTimeEvent_WrapperImpl @ 14b72eeb0

void __cdecl
UDS_VM_W_GachaReward::SetOnClickedGachaOneTimeEvent_WrapperImpl(void *param_1,void *param_2)

{
  CloseGachaReward(param_1);
  FDS_GachaService::TryGacha(UDS_VM_W_B_Gacha::SelectedGachaID,false);
  return;
}

// SetOnClickedGachaTenTimesEvent_WrapperImpl @ 14b72eec0

void __cdecl
UDS_VM_W_GachaReward::SetOnClickedGachaTenTimesEvent_WrapperImpl(void *param_1,void *param_2)

{
  CloseGachaReward(param_1);
  FDS_GachaService::TryGacha(UDS_VM_W_B_Gacha::SelectedGachaID,true);
  return;
}

// StaticClass @ 14b72efc0

UClass * __cdecl UDS_VM_W_GachaReward::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_GachaReward.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_GachaReward",
               &Z_Registration_Info_UClass_UDS_VM_W_GachaReward.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_GachaReward,0x128,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_GachaReward>,
               InternalVTableHelperCtorCaller<UDS_VM_W_GachaReward>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_GachaReward.InnerSingleton;
}

// UDS_VM_W_GachaReward @ 14b735130

UDS_VM_W_GachaReward * __thiscall
UDS_VM_W_GachaReward::UDS_VM_W_GachaReward(UDS_VM_W_GachaReward *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_GachaReward__6B_;
  (this->GachaRewardEntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->GachaRewardEntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->GachaRewardEntryBindingEventField).UserObjectList.ArrayMax = 0;
  (this->VM_CurrentMoney).field0_0x0.DebugPtr = (UDS_VM_MoneyData *)0x0;
  (this->VM_MoneyOneTime).field0_0x0.DebugPtr = (UDS_VM_MoneyDisplay *)0x0;
  (this->VM_MoneyTenTimes).field0_0x0.DebugPtr = (UDS_VM_MoneyDisplay *)0x0;
  (this->OnClickedClosevent)._padding_ = '\0';
  (this->OnClickedClosevent).bIsCustomSelected = false;
  (this->OnClickedClosevent).bIsLacked = false;
  (this->OnClickedClosevent).bIsCustomDisabled = false;
  (this->OnClickedClosevent).ButtonEventType = None;
  *(undefined8 *)&(this->OnClickedClosevent).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnClickedClosevent).Delegate = 0;
  *(undefined8 *)&(this->OnClickedClosevent).Delegate.field_0x8 = 0;
  (this->OnClickedGachaOneTimeEvent)._padding_ = '\0';
  (this->OnClickedGachaOneTimeEvent).bIsCustomSelected = false;
  (this->OnClickedGachaOneTimeEvent).bIsLacked = false;
  (this->OnClickedGachaOneTimeEvent).bIsCustomDisabled = false;
  (this->OnClickedGachaOneTimeEvent).ButtonEventType = None;
  *(undefined8 *)&(this->OnClickedGachaOneTimeEvent).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnClickedGachaOneTimeEvent).Delegate = 0;
  *(undefined8 *)&(this->OnClickedGachaOneTimeEvent).Delegate.field_0x8 = 0;
  (this->OnClickedGachaTenTimesEvent)._padding_ = '\0';
  (this->OnClickedGachaTenTimesEvent).bIsCustomSelected = false;
  (this->OnClickedGachaTenTimesEvent).bIsLacked = false;
  (this->OnClickedGachaTenTimesEvent).bIsCustomDisabled = false;
  (this->OnClickedGachaTenTimesEvent).ButtonEventType = None;
  *(undefined8 *)&(this->OnClickedGachaTenTimesEvent).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnClickedGachaTenTimesEvent).Delegate = 0;
  *(undefined8 *)&(this->OnClickedGachaTenTimesEvent).Delegate.field_0x8 = 0;
  return this;
}

// UDS_VM_W_GachaReward @ 14b7351f0

UDS_VM_W_GachaReward * __thiscall
UDS_VM_W_GachaReward::UDS_VM_W_GachaReward(UDS_VM_W_GachaReward *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_GachaReward__6B_;
  (this->GachaRewardEntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->GachaRewardEntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->GachaRewardEntryBindingEventField).UserObjectList.ArrayMax = 0;
  (this->VM_CurrentMoney).field0_0x0.DebugPtr = (UDS_VM_MoneyData *)0x0;
  (this->VM_MoneyOneTime).field0_0x0.DebugPtr = (UDS_VM_MoneyDisplay *)0x0;
  (this->VM_MoneyTenTimes).field0_0x0.DebugPtr = (UDS_VM_MoneyDisplay *)0x0;
  (this->OnClickedClosevent)._padding_ = '\0';
  (this->OnClickedClosevent).bIsCustomSelected = false;
  (this->OnClickedClosevent).bIsLacked = false;
  (this->OnClickedClosevent).bIsCustomDisabled = false;
  (this->OnClickedClosevent).ButtonEventType = None;
  *(undefined8 *)&(this->OnClickedClosevent).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnClickedClosevent).Delegate = 0;
  *(undefined8 *)&(this->OnClickedClosevent).Delegate.field_0x8 = 0;
  (this->OnClickedGachaOneTimeEvent)._padding_ = '\0';
  (this->OnClickedGachaOneTimeEvent).bIsCustomSelected = false;
  (this->OnClickedGachaOneTimeEvent).bIsLacked = false;
  (this->OnClickedGachaOneTimeEvent).bIsCustomDisabled = false;
  (this->OnClickedGachaOneTimeEvent).ButtonEventType = None;
  *(undefined8 *)&(this->OnClickedGachaOneTimeEvent).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnClickedGachaOneTimeEvent).Delegate = 0;
  *(undefined8 *)&(this->OnClickedGachaOneTimeEvent).Delegate.field_0x8 = 0;
  (this->OnClickedGachaTenTimesEvent)._padding_ = '\0';
  (this->OnClickedGachaTenTimesEvent).bIsCustomSelected = false;
  (this->OnClickedGachaTenTimesEvent).bIsLacked = false;
  (this->OnClickedGachaTenTimesEvent).bIsCustomDisabled = false;
  (this->OnClickedGachaTenTimesEvent).ButtonEventType = None;
  *(undefined8 *)&(this->OnClickedGachaTenTimesEvent).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnClickedGachaTenTimesEvent).Delegate = 0;
  *(undefined8 *)&(this->OnClickedGachaTenTimesEvent).Delegate.field_0x8 = 0;
  return this;
}

// ~UDS_VM_W_GachaReward @ 14b736640

void __thiscall UDS_VM_W_GachaReward::~UDS_VM_W_GachaReward(UDS_VM_W_GachaReward *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_GachaReward__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->OnClickedGachaTenTimesEvent).Delegate);
  pvVar1 = *(void **)&(this->OnClickedGachaTenTimesEvent).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->OnClickedGachaTenTimesEvent).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->OnClickedGachaOneTimeEvent).Delegate);
  pvVar1 = *(void **)&(this->OnClickedGachaOneTimeEvent).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->OnClickedGachaOneTimeEvent).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->OnClickedClosevent).Delegate);
  pvVar1 = *(void **)&(this->OnClickedClosevent).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->OnClickedClosevent).Delegate);
  pFVar2 = (this->GachaRewardEntryBindingEventField).UserObjectList.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b739600

IClassDescriptor * __thiscall
UDS_VM_W_GachaReward::GetFieldNotificationDescriptor(UDS_VM_W_GachaReward *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_GachaReward::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b73a500

UClass * __cdecl UDS_VM_W_GachaReward::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_GachaReward.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_GachaReward",
               &Z_Registration_Info_UClass_UDS_VM_W_GachaReward.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_GachaReward,0x128,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_GachaReward>,
               InternalVTableHelperCtorCaller<UDS_VM_W_GachaReward>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_GachaReward.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_GachaReward @ 14b73afd0

void __cdecl UDS_VM_W_GachaReward::StaticRegisterNativesUDS_VM_W_GachaReward(void)

{
  return;
}

// operator() @ 14bf995b0

void __thiscall
`UDS_VM_W_GachaReward::OnSetViewModel'::__l2::<lambda_1>::operator()
          (void *this,TObjectPtr<UDS_VM_MoneyDisplay> *param_1,EDS_MoneyType param_2,long64 param_3)

{
  code *pcVar1;
  FDS_ViewModelContext_MoneyDisplay *pFVar2;
  bool bVar3;
  UDS_VM_MoneyDisplay *pUVar4;
  TSharedPtr<FDS_ViewModelContext_MoneyDisplay,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if ((param_1->field0_0x0).DebugPtr == (UDS_VM_MoneyDisplay *)0x0) {
    pUVar4 = UDS_ViewModelBase::CreateViewModel<UDS_VM_MoneyDisplay>(*(UObject **)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UDS_VM_MoneyDisplay *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (param_1->field0_0x0).DebugPtr = pUVar4;
    if (pUVar4 == (UDS_VM_MoneyDisplay *)0x0) {
      return;
    }
  }
  MakeContext<FDS_ViewModelContext_MoneyDisplay>(&local_28);
  pFVar2 = local_28.Object;
  if ((local_28.Object == (FDS_ViewModelContext_MoneyDisplay *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(undefined4 *)&pFVar2->_padding_ = 0x192;
  pFVar2->MoneyId = (ulonglong)param_2;
  pFVar2->Quantity = param_3;
  pUVar4 = (param_1->field0_0x0).DebugPtr;
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
  UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar4,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// CloseGachaReward @ 14bf9e540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_GachaReward::CloseGachaReward(UDS_VM_W_GachaReward *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_WindowManager *this_00;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_178 [32];
  float local_148;
  uint local_144 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 == (UDS_WindowManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_W_GachaReward::CloseGachaReward",0x26,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x88,L"windowManager is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8807934582050521225>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_GachaReward.cpp"
                       ,0x89,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    local_148 = 0.0;
    local_144[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,GachaReward,local_144,&local_148);
  }
  return;
}

// OnClickClose @ 14bfb8de0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_GachaReward::OnClickClose(UDS_VM_W_GachaReward *this,FDS_ButtonEventField *param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_WindowManager *this_00;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_178 [32];
  float fStack_148;
  uint auStack_144 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 == (UDS_WindowManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_W_GachaReward::CloseGachaReward",0x26,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,TStack_138.Ptr,0x88,L"windowManager is nullptr.");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8807934582050521225>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_GachaReward.cpp"
                       ,0x89,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    fStack_148 = 0.0;
    auStack_144[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,GachaReward,auStack_144,&fStack_148);
  }
  return;
}

// OnClickGachaOneTime @ 14bfb9e80

void __thiscall
UDS_VM_W_GachaReward::OnClickGachaOneTime(UDS_VM_W_GachaReward *this,FDS_ButtonEventField *param_1)

{
  CloseGachaReward(this);
  FDS_GachaService::TryGacha(UDS_VM_W_B_Gacha::SelectedGachaID,false);
  return;
}

// OnClickGachaTenTimes @ 14bfb9ec0

void __thiscall
UDS_VM_W_GachaReward::OnClickGachaTenTimes(UDS_VM_W_GachaReward *this,FDS_ButtonEventField *param_1)

{
  CloseGachaReward(this);
  FDS_GachaService::TryGacha(UDS_VM_W_B_Gacha::SelectedGachaID,true);
  return;
}

// OnSetViewModel @ 14bfcc360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_VM_W_GachaReward::OnSetViewModel
          (UDS_VM_W_GachaReward *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  longlong lVar6;
  UDS_VM_W_GachaReward *pUVar7;
  FDS_ViewModelContext_GachaReward *pFVar8;
  FDS_EntryBindingEventField *this_00;
  bool bVar9;
  int iVar10;
  UDS_LogManager *pUVar11;
  FDS_GachaBaseTableRow *this_01;
  UClass *pUVar12;
  UClass *pUVar13;
  UDS_VM_MoneyData *pUVar14;
  FDS_ViewModelContext *pFVar15;
  FDS_ViewModelContext *pFVar16;
  UScriptStruct *pUVar17;
  UDS_ViewModelContextManager *pUVar18;
  ulonglong uVar19;
  UDS_UserObjectListItem *pUVar20;
  longlong *plVar21;
  FDS_ViewModelContext *pFVar22;
  TSharedPtr<FDS_ViewModelContext_GachaRewardSlot,1> *pTVar23;
  FDS_ViewModelContext *pFVar24;
  ForAnyElementType FVar25;
  FScriptContainerElement *pFVar26;
  undefined1 auStackY_538 [32];
  undefined1 local_508;
  undefined1 local_507;
  undefined1 local_506;
  undefined1 local_505 [5];
  TArray<TSharedPtr<FDS_ViewModelContext_GachaRewardSlot,1>,TSizedDefaultAllocator<32>_> local_500;
  TArray<TSharedPtr<FDS_ViewModelContext_GachaRewardSlot,1>,TSizedDefaultAllocator<32>_> local_4f0;
  TSharedPtr<FDS_ViewModelContext,1> *local_4e0;
  UDS_VM_W_GachaReward *local_4d8;
  TSharedPtr<FDS_ViewModelContext_GachaReward,1> local_4d0;
  undefined8 local_4c0;
  UDS_VM_W_GachaReward *local_4b8;
  FDS_EntryBindingEventField *local_4b0;
  UDS_UserObjectListItem *local_4a8;
  UDS_UserObjectListItem *local_4a0;
  FName local_498;
  int local_490;
  FName local_488;
  int local_480;
  TSharedPtr<FDS_ViewModelContext,1> local_478;
  TSharedPtr<FDS_ViewModelContext,1> local_468;
  TSharedPtr<FDS_ViewModelContext,1> local_458;
  TSharedPtr<FDS_ViewModelContext,1> local_448;
  TSharedPtr<FDS_ViewModelContext,1> local_438;
  TSharedPtr<FDS_ViewModelContext,1> local_428;
  TSharedPtr<FDS_ViewModelContext,1> local_418;
  undefined1 local_408 [128];
  undefined1 local_388 [128];
  undefined1 local_308 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_538;
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_4e0 = param_1;
  local_4d8 = this;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  local_448.Object = param_1->Object;
  local_448.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_448.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_448.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_448.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_GachaReward>(&local_4d0,&local_448);
  if (local_4d0.Object == (FDS_ViewModelContext_GachaReward *)0x0) {
    pUVar11 = UDS_LogManager::GetInst();
    if (pUVar11 != (UDS_LogManager *)0x0) {
      pUVar11 = UDS_LogManager::GetInst();
      local_288._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_288,"UDS_VM_W_GachaReward::OnSetViewModel",0x24,Yes);
      UDS_LogManager::PrintLog
                (pUVar11,1,Warning,local_288.Ptr,0x1c,L"gachaRewardContext is nullptr.");
      param_1 = local_4e0;
      if ((void *)local_288._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_288._padding_);
        param_1 = local_4e0;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4d0.SharedReferenceCount.ReferenceController);
  }
  else {
    this_01 = FDS_GachaBaseTableRow::GetRef((longlong)UDS_VM_W_B_Gacha::SelectedGachaID,true);
    bVar9 = FDS_GachaBaseTableRow::IsValid(this_01);
    if (bVar9) {
      pFVar24 = (FDS_ViewModelContext *)0x0;
      if ((this->VM_CurrentMoney).field0_0x0.DebugPtr == (UDS_VM_MoneyData *)0x0) {
        local_4c0 = 0;
        pUVar12 = Z_Construct_UClass_UDS_VM_MoneyData_NoRegister();
        pUVar7 = local_4d8;
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)local_4d8,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar13 = Z_Construct_UClass_UDS_VM_MoneyData_NoRegister();
        CheckIsClassChildOf_Internal(pUVar13,pUVar12);
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_408,pUVar12);
        local_408._8_8_ = pUVar7;
        local_408._48_8_ = (FObjectInstancingGraph *)0x0;
        local_408._56_8_ = (UPackage *)0x0;
        local_408._16_4_ = 0;
        local_408._20_4_ = 0;
        local_408._24_4_ = RF_Transient;
        local_408._40_8_ = (UObject *)0x0;
        local_408[0x20] = false;
        pUVar14 = (UDS_VM_MoneyData *)
                  StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_408);
        if (local_408._64_8_ != 0) {
          plVar21 = (longlong *)(local_408 + 0x50);
          if ((longlong *)local_408._104_8_ != (longlong *)0x0) {
            plVar21 = (longlong *)local_408._104_8_;
          }
          (**(code **)(*plVar21 + 0x10))();
        }
        if (pUVar14 != (UDS_VM_MoneyData *)0x0) {
          *(undefined1 *)((longlong)&pUVar14->_padding_ + 4) = 0;
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar14 != (UDS_VM_MoneyData *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar14);
        }
        (pUVar7->VM_CurrentMoney).field0_0x0.DebugPtr = pUVar14;
        pFVar15 = ::operator_new(0x28);
        pFVar22 = pFVar24;
        if (pFVar15 != (FDS_ViewModelContext *)0x0) {
          *(undefined4 *)&pFVar15->field_0x1c = 0;
          *(undefined4 *)((longlong)&pFVar15[1]._padding_ + 1) = 0;
          *(undefined2 *)((longlong)&pFVar15[1]._padding_ + 5) = 0;
          *(undefined1 *)((longlong)&pFVar15[1]._padding_ + 7) = 0;
          *(undefined8 *)&pFVar15->DerivedStaticStruct = 0;
          (pFVar15->ViewModelName).ComparisonIndex = 0;
          (pFVar15->ViewModelName).Number = 0;
          pFVar15->ViewModelTemplateKey = None;
          pFVar15->_padding_ = (longlong)&___7FDS_ViewModelContext_MoneyData__6B_;
          *(undefined1 *)&pFVar15[1]._padding_ = 0;
          pFVar22 = pFVar15;
        }
        pFVar16 = ::operator_new(0x20);
        pFVar15 = pFVar24;
        if (pFVar16 != (FDS_ViewModelContext *)0x0) {
          *(code **)&(pFVar16->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
          *(atomic<int> *)&pFVar16->DerivedStaticStruct = (atomic<int>)0x1;
          ((atomic<int> *)&pFVar16->DerivedStaticStruct)[1] = (atomic<int>)0x1;
          pFVar16->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_MoneyData__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
          ;
          *(FDS_ViewModelContext **)&pFVar16->ViewModelTemplateKey = pFVar22;
          pFVar15 = pFVar16;
        }
        if ((pFVar22 == (FDS_ViewModelContext *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pUVar17 = FDS_ViewModelContext_MoneyData::StaticStruct();
        *(UScriptStruct **)&pFVar22->DerivedStaticStruct = pUVar17;
        pUVar18 = UDS_ViewModelContextManager::GetInst();
        if (pUVar18 != (UDS_ViewModelContextManager *)0x0) {
          if (pFVar15 != (FDS_ViewModelContext *)0x0) {
            LOCK();
            *(atomic<int> *)&pFVar15->DerivedStaticStruct =
                 (atomic<int>)((int)*(atomic<int> *)&pFVar15->DerivedStaticStruct + 1);
            UNLOCK();
          }
          local_478.Object = pFVar22;
          local_478.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)pFVar15;
          UDS_ViewModelContextManager::RegisterContext(pUVar18,&local_478);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_478.SharedReferenceCount.ReferenceController);
        }
        pFVar22->ViewModelTemplateKey = Data_Money;
        *(EDS_MoneyType *)&pFVar22[1]._padding_ = this_01->MoneyType;
        pUVar14 = (pUVar7->VM_CurrentMoney).field0_0x0.DebugPtr;
        if (pFVar15 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar15->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar15->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_438.Object = pFVar22;
        local_438.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar15;
        UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar14,&local_438);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar15);
        this = local_4d8;
      }
      local_4b8 = this;
      `UDS_VM_W_GachaReward::OnSetViewModel'::__l2::<lambda_1>::operator()
                (&local_4b8,&this->VM_MoneyOneTime,this_01->MoneyType,(longlong)this_01->MoneyValue)
      ;
      `UDS_VM_W_GachaReward::OnSetViewModel'::__l2::<lambda_1>::operator()
                (&local_4b8,&this->VM_MoneyTenTimes,this_01->MoneyType,
                 (longlong)(this_01->MoneyValue * 10));
      local_4b0 = &this->GachaRewardEntryBindingEventField;
      FDS_EntryBindingEventField::Reset(local_4b0);
      local_4f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_4f0.ArrayNum = 0;
      local_4f0.ArrayMax = 0;
      if ((local_4d0.Object == (FDS_ViewModelContext_GachaReward *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar8 = local_4d0.Object;
      iVar3 = ((local_4d0.Object)->GachaRewardList).ArrayNum;
      pFVar26 = ((local_4d0.Object)->GachaRewardList).AllocatorInstance.Data;
      pFVar1 = pFVar26 + (longlong)iVar3 * 0x18;
      while( true ) {
        if ((pFVar8->GachaRewardList).ArrayNum != iVar3) {
          local_508 = 0;
          `TCheckedPointerIterator<FDS_GachaReward,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_508);
        }
        if (pFVar26 == pFVar1) break;
        pFVar15 = ::operator_new(0x38);
        pFVar22 = pFVar24;
        if (pFVar15 != (FDS_ViewModelContext *)0x0) {
          *(undefined8 *)&pFVar15->field_0x1c = 0;
          *(undefined8 *)&pFVar15->DerivedStaticStruct = 0;
          (pFVar15->ViewModelName).ComparisonIndex = 0;
          (pFVar15->ViewModelName).Number = 0;
          pFVar15->ViewModelTemplateKey = None;
          pFVar15->_padding_ = (longlong)&___7FDS_ViewModelContext_GachaRewardSlot__6B_;
          *(undefined8 *)((longlong)&pFVar15[1]._padding_ + 4) = 0;
          *(undefined8 *)((atomic<int> *)&pFVar15[1].DerivedStaticStruct + 1) = 0;
          pFVar15[1].ViewModelName.Number = 0;
          pFVar22 = pFVar15;
        }
        pFVar16 = ::operator_new(0x20);
        pFVar15 = pFVar24;
        if (pFVar16 != (FDS_ViewModelContext *)0x0) {
          *(atomic<int> *)&pFVar16->DerivedStaticStruct = (atomic<int>)0x1;
          *(code **)&(pFVar16->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
          pFVar16->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_GachaRewardSlot__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
          ;
          ((atomic<int> *)&pFVar16->DerivedStaticStruct)[1] = (atomic<int>)0x1;
          *(FDS_ViewModelContext **)&pFVar16->ViewModelTemplateKey = pFVar22;
          pFVar15 = pFVar16;
        }
        if ((pFVar22 == (FDS_ViewModelContext *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pUVar17 = FDS_ViewModelContext_GachaRewardSlot::StaticStruct();
        *(UScriptStruct **)&pFVar22->DerivedStaticStruct = pUVar17;
        pUVar18 = UDS_ViewModelContextManager::GetInst();
        if (pUVar18 != (UDS_ViewModelContextManager *)0x0) {
          if (pFVar15 != (FDS_ViewModelContext *)0x0) {
            LOCK();
            *(atomic<int> *)&pFVar15->DerivedStaticStruct =
                 (atomic<int>)((int)*(atomic<int> *)&pFVar15->DerivedStaticStruct + 1);
            UNLOCK();
          }
          local_468.Object = pFVar22;
          local_468.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)pFVar15;
          UDS_ViewModelContextManager::RegisterContext(pUVar18,&local_468);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_468.SharedReferenceCount.ReferenceController);
        }
        pFVar22->ViewModelTemplateKey = W_GachaRewardSlot;
        lVar6 = *(longlong *)(pFVar26 + 8);
        lVar2 = *(longlong *)(pFVar26 + 0x10);
        pFVar22[1]._padding_ = *(longlong *)pFVar26;
        *(longlong *)&pFVar22[1].DerivedStaticStruct = lVar6;
        pFVar22[1].ViewModelName.ComparisonIndex = (FNameEntryId)(int)lVar2;
        pFVar22[1].ViewModelName.Number = (int)((ulonglong)lVar2 >> 0x20);
        if (*(int *)pFVar26 == 0) {
          iVar10 = local_4f0.ArrayNum;
          if (local_4f0.ArrayNum == local_4f0.ArrayMax) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&local_4f0.AllocatorInstance,&local_4f0.ArrayMax);
          }
          local_4f0.ArrayNum = iVar10 + 1;
          *(FDS_ViewModelContext **)
           &local_4f0.AllocatorInstance.Data[(longlong)iVar10 * 0x10].field_0x0 = pFVar22;
          *(FDS_ViewModelContext **)(local_4f0.AllocatorInstance.Data + (longlong)iVar10 * 0x10 + 8)
               = pFVar15;
          if (pFVar15 != (FDS_ViewModelContext *)0x0) {
            LOCK();
            *(atomic<int> *)&pFVar15->DerivedStaticStruct =
                 (atomic<int>)((int)*(atomic<int> *)&pFVar15->DerivedStaticStruct + 1);
            UNLOCK();
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar15);
        pFVar26 = pFVar26 + 0x18;
      }
      DS_Sorting<TSharedPtr<FDS_ViewModelContext_GachaRewardSlot,1>_>::Sort
                (&local_4f0,GachaChar,Ascend);
      local_500.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_500.ArrayNum = 0;
      local_500.ArrayMax = 0;
      if ((local_4d0.Object == (FDS_ViewModelContext_GachaReward *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar3 = ((local_4d0.Object)->GachaRewardList).ArrayNum;
      pFVar26 = ((local_4d0.Object)->GachaRewardList).AllocatorInstance.Data;
      pFVar1 = pFVar26 + (longlong)iVar3 * 0x18;
      while( true ) {
        if (((local_4d0.Object)->GachaRewardList).ArrayNum != iVar3) {
          local_507 = 0;
          `TCheckedPointerIterator<FDS_GachaReward,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_507);
        }
        if (pFVar26 == pFVar1) break;
        pFVar15 = ::operator_new(0x38);
        pFVar22 = pFVar24;
        if (pFVar15 != (FDS_ViewModelContext *)0x0) {
          *(undefined8 *)&pFVar15->field_0x1c = 0;
          *(undefined8 *)&pFVar15->DerivedStaticStruct = 0;
          (pFVar15->ViewModelName).ComparisonIndex = 0;
          (pFVar15->ViewModelName).Number = 0;
          pFVar15->ViewModelTemplateKey = None;
          pFVar15->_padding_ = (longlong)&___7FDS_ViewModelContext_GachaRewardSlot__6B_;
          *(undefined8 *)((longlong)&pFVar15[1]._padding_ + 4) = 0;
          *(undefined8 *)((atomic<int> *)&pFVar15[1].DerivedStaticStruct + 1) = 0;
          pFVar15[1].ViewModelName.Number = 0;
          pFVar22 = pFVar15;
        }
        pFVar16 = ::operator_new(0x20);
        pFVar15 = pFVar24;
        if (pFVar16 != (FDS_ViewModelContext *)0x0) {
          *(atomic<int> *)&pFVar16->DerivedStaticStruct = (atomic<int>)0x1;
          *(code **)&(pFVar16->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
          pFVar16->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_GachaRewardSlot__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
          ;
          ((atomic<int> *)&pFVar16->DerivedStaticStruct)[1] = (atomic<int>)0x1;
          *(FDS_ViewModelContext **)&pFVar16->ViewModelTemplateKey = pFVar22;
          pFVar15 = pFVar16;
        }
        if ((pFVar22 == (FDS_ViewModelContext *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pUVar17 = FDS_ViewModelContext_GachaRewardSlot::StaticStruct();
        *(UScriptStruct **)&pFVar22->DerivedStaticStruct = pUVar17;
        pUVar18 = UDS_ViewModelContextManager::GetInst();
        if (pUVar18 != (UDS_ViewModelContextManager *)0x0) {
          if (pFVar15 != (FDS_ViewModelContext *)0x0) {
            LOCK();
            *(atomic<int> *)&pFVar15->DerivedStaticStruct =
                 (atomic<int>)((int)*(atomic<int> *)&pFVar15->DerivedStaticStruct + 1);
            UNLOCK();
          }
          local_458.Object = pFVar22;
          local_458.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)pFVar15;
          UDS_ViewModelContextManager::RegisterContext(pUVar18,&local_458);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_458.SharedReferenceCount.ReferenceController);
        }
        pFVar22->ViewModelTemplateKey = W_GachaRewardSlot;
        lVar6 = *(longlong *)(pFVar26 + 8);
        lVar2 = *(longlong *)(pFVar26 + 0x10);
        pFVar22[1]._padding_ = *(longlong *)pFVar26;
        *(longlong *)&pFVar22[1].DerivedStaticStruct = lVar6;
        pFVar22[1].ViewModelName.ComparisonIndex = (FNameEntryId)(int)lVar2;
        pFVar22[1].ViewModelName.Number = (int)((ulonglong)lVar2 >> 0x20);
        if (*(int *)pFVar26 == 1) {
          iVar10 = local_500.ArrayNum;
          if (local_500.ArrayNum == local_500.ArrayMax) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&local_500.AllocatorInstance,&local_500.ArrayMax);
          }
          local_500.ArrayNum = iVar10 + 1;
          *(FDS_ViewModelContext **)
           &local_500.AllocatorInstance.Data[(longlong)iVar10 * 0x10].field_0x0 = pFVar22;
          *(FDS_ViewModelContext **)(local_500.AllocatorInstance.Data + (longlong)iVar10 * 0x10 + 8)
               = pFVar15;
          if (pFVar15 != (FDS_ViewModelContext *)0x0) {
            LOCK();
            *(atomic<int> *)&pFVar15->DerivedStaticStruct =
                 (atomic<int>)((int)*(atomic<int> *)&pFVar15->DerivedStaticStruct + 1);
            UNLOCK();
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar15);
        pFVar26 = pFVar26 + 0x18;
      }
      DS_Sorting<TSharedPtr<FDS_ViewModelContext_GachaRewardSlot,1>_>::Sort
                (&local_500,GachaItem,Ascend);
      this_00 = local_4b0;
      pUVar7 = local_4d8;
      iVar3 = local_4f0.ArrayNum;
      uVar19 = (ulonglong)local_4f0.ArrayNum;
      pTVar23 = (TSharedPtr<FDS_ViewModelContext_GachaRewardSlot,1> *)
                (local_4f0.AllocatorInstance.Data + uVar19 * 0x10);
      FVar25.Data = local_4f0.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar19 != iVar3) {
          `TCheckedPointerIterator<TSharedPtr<FDS_ViewModelContext_GachaRewardSlot,1>,int,0>::
          operator!='::__l2::<lambda_1>::operator()(&local_506);
        }
        if ((TSharedPtr<FDS_ViewModelContext_GachaRewardSlot,1> *)FVar25.Data == pTVar23) break;
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)pUVar7,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar12 = Z_Construct_UClass_UDS_UserObjectListItem_NoRegister();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_388,pUVar12);
        local_388._8_8_ = pUVar7;
        pUVar20 = (UDS_UserObjectListItem *)
                  StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_388);
        if (local_388._64_8_ != 0) {
          plVar21 = (longlong *)(local_388 + 0x50);
          if ((longlong *)local_388._104_8_ != (longlong *)0x0) {
            plVar21 = (longlong *)local_388._104_8_;
          }
          (**(code **)(*plVar21 + 0x10))();
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar20 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar20);
        }
        local_428.Object =
             (FDS_ViewModelContext *)
             ((TSharedPtr<FDS_ViewModelContext_GachaRewardSlot,1> *)FVar25.Data)->Object;
        local_428.SharedReferenceCount.ReferenceController =
             (((TSharedPtr<FDS_ViewModelContext_GachaRewardSlot,1> *)FVar25.Data)->
             SharedReferenceCount).ReferenceController;
        if (local_428.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_428.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_428.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        UDS_UserObjectListItem::AddContext(pUVar20,&local_428);
        local_4a8 = pUVar20;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar20 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar20);
        }
        FDS_EntryBindingEventField::Add(this_00,(TObjectPtr<UDS_UserObjectListItem>)&local_4a8);
        uVar19 = local_4f0._8_8_ & 0xffffffff;
        FVar25.Data = FVar25.Data + 0x10;
      }
      iVar3 = local_500.ArrayNum;
      uVar19 = (ulonglong)local_500.ArrayNum;
      pTVar23 = (TSharedPtr<FDS_ViewModelContext_GachaRewardSlot,1> *)
                (local_500.AllocatorInstance.Data + uVar19 * 0x10);
      FVar25.Data = local_500.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar19 != iVar3) {
          `TCheckedPointerIterator<TSharedPtr<FDS_ViewModelContext_GachaRewardSlot,1>,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_505);
        }
        if ((TSharedPtr<FDS_ViewModelContext_GachaRewardSlot,1> *)FVar25.Data == pTVar23) break;
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)pUVar7,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar12 = Z_Construct_UClass_UDS_UserObjectListItem_NoRegister();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_308,pUVar12);
        local_308._8_8_ = pUVar7;
        pUVar20 = (UDS_UserObjectListItem *)
                  StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_308);
        if (local_308._64_8_ != 0) {
          plVar21 = (longlong *)(local_308 + 0x50);
          if ((longlong *)local_308._104_8_ != (longlong *)0x0) {
            plVar21 = (longlong *)local_308._104_8_;
          }
          (**(code **)(*plVar21 + 0x10))();
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar20 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar20);
        }
        local_418.Object =
             (FDS_ViewModelContext *)
             ((TSharedPtr<FDS_ViewModelContext_GachaRewardSlot,1> *)FVar25.Data)->Object;
        local_418.SharedReferenceCount.ReferenceController =
             (((TSharedPtr<FDS_ViewModelContext_GachaRewardSlot,1> *)FVar25.Data)->
             SharedReferenceCount).ReferenceController;
        if (local_418.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_418.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_418.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        UDS_UserObjectListItem::AddContext(pUVar20,&local_418);
        local_4a0 = pUVar20;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar20 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar20);
        }
        FDS_EntryBindingEventField::Add(this_00,(TObjectPtr<UDS_UserObjectListItem>)&local_4a0);
        uVar19 = local_500._8_8_ & 0xffffffff;
        FVar25.Data = FVar25.Data + 0x10;
      }
      local_490 = FFieldNotificationClassDescriptor::VM_CurrentMoney.BitNumber;
      local_498 = FFieldNotificationClassDescriptor::VM_CurrentMoney.FieldName;
      (**(code **)(pUVar7->_padding_ + 0x38))(&pUVar7->_padding_,&local_498);
      local_480 = FFieldNotificationClassDescriptor::GachaRewardEntryBindingEventField.BitNumber;
      local_488 = FFieldNotificationClassDescriptor::GachaRewardEntryBindingEventField.FieldName;
      (**(code **)(pUVar7->_padding_ + 0x38))(&pUVar7->_padding_,&local_488);
      DestructItems<TSharedPtr<FDS_ViewModelContext_GachaRewardSlot,1>,int>
                ((TSharedPtr<FDS_ViewModelContext_GachaRewardSlot,1> *)
                 local_500.AllocatorInstance.Data,local_500.ArrayNum);
      if ((TSharedPtr<FDS_ViewModelContext_GachaRewardSlot,1> *)local_500.AllocatorInstance.Data !=
          (TSharedPtr<FDS_ViewModelContext_GachaRewardSlot,1> *)0x0) {
        FMemory::Free(local_500.AllocatorInstance.Data);
      }
      DestructItems<TSharedPtr<FDS_ViewModelContext_GachaRewardSlot,1>,int>
                ((TSharedPtr<FDS_ViewModelContext_GachaRewardSlot,1> *)
                 local_4f0.AllocatorInstance.Data,local_4f0.ArrayNum);
      if ((TSharedPtr<FDS_ViewModelContext_GachaRewardSlot,1> *)local_4f0.AllocatorInstance.Data !=
          (TSharedPtr<FDS_ViewModelContext_GachaRewardSlot,1> *)0x0) {
        FMemory::Free(local_4f0.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_4d0.SharedReferenceCount.ReferenceController);
      param_1 = local_4e0;
    }
    else {
      pUVar11 = UDS_LogManager::GetInst();
      if (pUVar11 != (UDS_LogManager *)0x0) {
        pUVar11 = UDS_LogManager::GetInst();
        local_168._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_168,"UDS_VM_W_GachaReward::OnSetViewModel",0x24,Yes);
        UDS_LogManager::PrintLog
                  (pUVar11,1,Warning,local_168.Ptr,0x23,L"gachaBaseTableRow is Invalid.");
        param_1 = local_4e0;
        if ((void *)local_168._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_168._padding_);
          param_1 = local_4e0;
        }
      }
      bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8807934582050521124>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_GachaReward.cpp"
                         ,0x24,"false");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_4d0.SharedReferenceCount.ReferenceController);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

