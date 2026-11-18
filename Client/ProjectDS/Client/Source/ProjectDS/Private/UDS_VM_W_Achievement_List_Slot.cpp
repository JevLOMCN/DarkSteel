// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// SetClickClaim_WrapperImpl @ 14b70c5f0

void __cdecl UDS_VM_W_Achievement_List_Slot::SetClickClaim_WrapperImpl(void *param_1,void *param_2)

{
  FDS_AchievementService::RequestAchievementComplete((int *)((longlong)param_1 + 0x134));
  return;
}

// SetClickDisabledClaim_WrapperImpl @ 14b70c6c0

void __cdecl
UDS_VM_W_Achievement_List_Slot::SetClickDisabledClaim_WrapperImpl(void *param_1,void *param_2)

{
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> TStack_28;
  
  TStack_28._0_8_ = 0;
  TStack_28._8_8_ = 0;
  TStack_28._16_4_ = 0;
  UDS_UIMessageManager::OpenMsgByStringUi(0x50916,Alert_None_01,&TStack_28);
  return;
}

// StaticClass @ 14b70c6d0

UClass * __cdecl UDS_VM_W_Achievement_List_Slot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_Achievement_List_Slot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_Achievement_List_Slot",
               &Z_Registration_Info_UClass_UDS_VM_W_Achievement_List_Slot.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_Achievement_List_Slot,0x140,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_Achievement_List_Slot>,
               InternalVTableHelperCtorCaller<UDS_VM_W_Achievement_List_Slot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_Achievement_List_Slot.InnerSingleton;
}

// UDS_VM_W_Achievement_List_Slot @ 14b7105e0

UDS_VM_W_Achievement_List_Slot * __thiscall
UDS_VM_W_Achievement_List_Slot::UDS_VM_W_Achievement_List_Slot
          (UDS_VM_W_Achievement_List_Slot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Achievement_List_Slot__6B_;
  *(undefined8 *)&(this->ClickClaim).Delegate = 0;
  *(undefined8 *)&(this->ClickClaim).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickClaim).Delegate.field_0x10 = 0;
  (this->ClickDisabledClaim)._padding_ = '\0';
  (this->ClickDisabledClaim).bIsCustomSelected = false;
  (this->ClickDisabledClaim).bIsLacked = false;
  (this->ClickDisabledClaim).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickDisabledClaim).Delegate = 0;
  *(undefined8 *)&(this->ClickDisabledClaim).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickDisabledClaim).Delegate.field_0x10 = 0;
  (this->FixedText_Btn_Claim).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Claim).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Claim).DateTime.Ticks = 0;
  (this->FixedText_Btn_Claim).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Claim).TimeExpressionType = None;
  (this->FixedText_Btn_Claim).IsExpression = false;
  (this->FixedText_Btn_Claim).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Claim).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Claim).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Claim).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Claim).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Claim).FormatArgs.ArrayMax = 0;
  this->ShowCount = false;
  this->ShowProgress = false;
  this->ID = 0;
  this->GroupID = 0;
  (this->ClickClaim)._padding_ = '\0';
  (this->ClickClaim).bIsCustomSelected = false;
  (this->ClickClaim).bIsLacked = false;
  (this->ClickClaim).bIsCustomDisabled = false;
  (this->FixedText_Btn_Claim).StringTableType = StringUi;
  (this->FixedText_Btn_Claim).StringTableID = 0x50926;
  return this;
}

// UDS_VM_W_Achievement_List_Slot @ 14b7106c0

UDS_VM_W_Achievement_List_Slot * __thiscall
UDS_VM_W_Achievement_List_Slot::UDS_VM_W_Achievement_List_Slot
          (UDS_VM_W_Achievement_List_Slot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Achievement_List_Slot__6B_;
  *(undefined8 *)&(this->ClickClaim).Delegate = 0;
  *(undefined8 *)&(this->ClickClaim).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickClaim).Delegate.field_0x10 = 0;
  (this->ClickDisabledClaim)._padding_ = '\0';
  (this->ClickDisabledClaim).bIsCustomSelected = false;
  (this->ClickDisabledClaim).bIsLacked = false;
  (this->ClickDisabledClaim).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickDisabledClaim).Delegate = 0;
  *(undefined8 *)&(this->ClickDisabledClaim).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickDisabledClaim).Delegate.field_0x10 = 0;
  (this->FixedText_Btn_Claim).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Claim).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Claim).DateTime.Ticks = 0;
  (this->FixedText_Btn_Claim).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Claim).TimeExpressionType = None;
  (this->FixedText_Btn_Claim).IsExpression = false;
  (this->FixedText_Btn_Claim).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Claim).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Claim).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Claim).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Claim).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Claim).FormatArgs.ArrayMax = 0;
  this->ShowCount = false;
  this->ShowProgress = false;
  this->ID = 0;
  this->GroupID = 0;
  (this->ClickClaim)._padding_ = '\0';
  (this->ClickClaim).bIsCustomSelected = false;
  (this->ClickClaim).bIsLacked = false;
  (this->ClickClaim).bIsCustomDisabled = false;
  (this->FixedText_Btn_Claim).StringTableType = StringUi;
  (this->FixedText_Btn_Claim).StringTableID = 0x50926;
  return this;
}

// ~UDS_VM_W_Achievement_List_Slot @ 14b712eb0

void __thiscall
UDS_VM_W_Achievement_List_Slot::~UDS_VM_W_Achievement_List_Slot
          (UDS_VM_W_Achievement_List_Slot *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Achievement_List_Slot__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Btn_Claim).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Btn_Claim).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Btn_Claim).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Btn_Claim).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickDisabledClaim).Delegate);
  pvVar2 = *(void **)&(this->ClickDisabledClaim).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickDisabledClaim).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickClaim).Delegate);
  pvVar2 = *(void **)&(this->ClickClaim).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickClaim).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b7168a0

IClassDescriptor * __thiscall
UDS_VM_W_Achievement_List_Slot::GetFieldNotificationDescriptor(UDS_VM_W_Achievement_List_Slot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_Achievement_List_Slot::FFieldNotificationClassDescriptor::GetDescriptor'::
             __l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b7174d0

UClass * __cdecl UDS_VM_W_Achievement_List_Slot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_Achievement_List_Slot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_Achievement_List_Slot",
               &Z_Registration_Info_UClass_UDS_VM_W_Achievement_List_Slot.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_Achievement_List_Slot,0x140,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_Achievement_List_Slot>,
               InternalVTableHelperCtorCaller<UDS_VM_W_Achievement_List_Slot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_Achievement_List_Slot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_Achievement_List_Slot @ 14b718910

void __cdecl
UDS_VM_W_Achievement_List_Slot::StaticRegisterNativesUDS_VM_W_Achievement_List_Slot(void)

{
  return;
}

// OnClickClaim @ 14bfb8b70

void __thiscall
UDS_VM_W_Achievement_List_Slot::OnClickClaim
          (UDS_VM_W_Achievement_List_Slot *this,FDS_ButtonEventField *param_1)

{
  FDS_AchievementService::RequestAchievementComplete(&this->ID);
  return;
}

// OnClickDisabledClaim @ 14bfb9680

void __thiscall
UDS_VM_W_Achievement_List_Slot::OnClickDisabledClaim
          (UDS_VM_W_Achievement_List_Slot *this,FDS_ButtonEventField *param_1)

{
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_28._16_4_ = 0;
  UDS_UIMessageManager::OpenMsgByStringUi(0x50916,Alert_None_01,&local_28);
  return;
}

// OnSetViewModel @ 14bfc3530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_Achievement_List_Slot::OnSetViewModel
          (UDS_VM_W_Achievement_List_Slot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FDS_ViewModelContext *pFVar2;
  code *pcVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  undefined1 auStackY_2d8 [32];
  TSharedPtr<FDS_VMContext_AchievementData,1> local_2a8;
  FName local_298;
  int local_290;
  FName local_288;
  int local_280;
  TSharedPtr<FDS_ViewModelContext,1> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_268._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_268,"UDS_VM_W_Achievement_List_Slot::OnSetViewModel",0x2e,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_268.Ptr,0x16,L"InViewModelContext is nullptr.");
      if ((void *)local_268._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_268._padding_);
      }
    }
  }
  else {
    local_278.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_278.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_278.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_278.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_278.Object = pFVar2;
    SafeCast<FDS_VMContext_AchievementData>(&local_2a8,&local_278);
    if (local_2a8.Object == (FDS_VMContext_AchievementData *)0x0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6778803499535695845>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Achievement_List_Slot.cpp"
                         ,0x1b,"context.IsValid()");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else if ((local_2a8.Object)->AchievementBaseTableRow == (FDS_AchievementBaseTableRow *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_VM_W_Achievement_List_Slot::OnSetViewModel",0x2e,Yes);
        UDS_LogManager::PrintLog
                  (pUVar5,1,Warning,local_148.Ptr,0x22,
                   L"context->AchievementBaseTableRow is nullptr.");
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
    }
    else {
      this->ShowProgress = (local_2a8.Object)->AchievementBaseTableRow->IsProgressIndication;
      this->ShowCount = (local_2a8.Object)->AchievementBaseTableRow->IsCountIndication;
      local_290 = FFieldNotificationClassDescriptor::ShowProgress.BitNumber;
      local_298 = FFieldNotificationClassDescriptor::ShowProgress.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_298);
      local_280 = FFieldNotificationClassDescriptor::ShowCount.BitNumber;
      local_288 = FFieldNotificationClassDescriptor::ShowCount.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_288);
      this->ID = (local_2a8.Object)->AchievementBaseTableRow->ID;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2a8.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

