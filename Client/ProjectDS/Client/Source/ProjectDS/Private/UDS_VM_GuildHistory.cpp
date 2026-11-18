// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// StaticClass @ 14b64f380

UClass * __cdecl UDS_VM_GuildHistory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GuildHistory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GuildHistory",
               &Z_Registration_Info_UClass_UDS_VM_GuildHistory.InnerSingleton,
               StaticRegisterNativesUDS_VM_GuildHistory,0x150,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_GuildHistory>,
               InternalVTableHelperCtorCaller<UDS_VM_GuildHistory>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GuildHistory.InnerSingleton;
}

// UDS_VM_GuildHistory @ 14b652ae0

UDS_VM_GuildHistory * __thiscall
UDS_VM_GuildHistory::UDS_VM_GuildHistory(UDS_VM_GuildHistory *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildHistory__6B_;
  (this->FixedTxt_Log).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_Log).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_Log).DateTime.Ticks = 0;
  (this->FixedTxt_Log).TimeSpan.Ticks = 0;
  (this->FixedTxt_Log).TimeExpressionType = None;
  (this->FixedTxt_Log).IsExpression = false;
  (this->FixedTxt_Log).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Log).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_Log).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_Log).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Log).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_Log).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_LogTime).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_LogTime).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_LogTime).DateTime.Ticks = 0;
  (this->FixedTxt_LogTime).TimeSpan.Ticks = 0;
  (this->FixedTxt_LogTime).TimeExpressionType = None;
  (this->FixedTxt_LogTime).IsExpression = false;
  (this->FixedTxt_LogTime).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FixedTxt_LogTime).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_LogTime).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_LogTime).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_LogTime).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_LogTime).FormatArgs.ArrayMax = 0;
  (this->EntryBindingEventField_List).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_List).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_List).UserObjectList.ArrayMax = 0;
  (this->FixedTxt_Log).StringTableType = StringUi;
  (this->FixedTxt_Log).StringTableID = 0x3a9ff;
  (this->FixedTxt_LogTime).StringTableType = StringUi;
  (this->FixedTxt_LogTime).StringTableID = 0x3aa00;
  return this;
}

// UDS_VM_GuildHistory @ 14b652bd0

UDS_VM_GuildHistory * __thiscall
UDS_VM_GuildHistory::UDS_VM_GuildHistory(UDS_VM_GuildHistory *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildHistory__6B_;
  (this->FixedTxt_Log).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_Log).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_Log).DateTime.Ticks = 0;
  (this->FixedTxt_Log).TimeSpan.Ticks = 0;
  (this->FixedTxt_Log).TimeExpressionType = None;
  (this->FixedTxt_Log).IsExpression = false;
  (this->FixedTxt_Log).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Log).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_Log).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_Log).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Log).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_Log).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_LogTime).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_LogTime).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_LogTime).DateTime.Ticks = 0;
  (this->FixedTxt_LogTime).TimeSpan.Ticks = 0;
  (this->FixedTxt_LogTime).TimeExpressionType = None;
  (this->FixedTxt_LogTime).IsExpression = false;
  (this->FixedTxt_LogTime).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FixedTxt_LogTime).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_LogTime).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_LogTime).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_LogTime).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_LogTime).FormatArgs.ArrayMax = 0;
  (this->EntryBindingEventField_List).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_List).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_List).UserObjectList.ArrayMax = 0;
  (this->FixedTxt_Log).StringTableType = StringUi;
  (this->FixedTxt_Log).StringTableID = 0x3a9ff;
  (this->FixedTxt_LogTime).StringTableType = StringUi;
  (this->FixedTxt_LogTime).StringTableID = 0x3aa00;
  return this;
}

// ~UDS_VM_GuildHistory @ 14b655070

void __thiscall UDS_VM_GuildHistory::~UDS_VM_GuildHistory(UDS_VM_GuildHistory *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildHistory__6B_;
  pFVar1 = (this->EntryBindingEventField_List).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_LogTime).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_LogTime).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_LogTime).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_LogTime).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_Log).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_Log).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_Log).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_Log).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b657270

IClassDescriptor * __thiscall
UDS_VM_GuildHistory::GetFieldNotificationDescriptor(UDS_VM_GuildHistory *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_GuildHistory::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b657a90

UClass * __cdecl UDS_VM_GuildHistory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GuildHistory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GuildHistory",
               &Z_Registration_Info_UClass_UDS_VM_GuildHistory.InnerSingleton,
               StaticRegisterNativesUDS_VM_GuildHistory,0x150,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_GuildHistory>,
               InternalVTableHelperCtorCaller<UDS_VM_GuildHistory>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GuildHistory.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_GuildHistory @ 14b6582f0

void __cdecl UDS_VM_GuildHistory::StaticRegisterNativesUDS_VM_GuildHistory(void)

{
  return;
}

// BindModel @ 14be75910

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_GuildHistory::BindModel(UDS_VM_GuildHistory *this)

{
  UDS_LanguageManager *pUVar1;
  
  if ((0 < (int)this->_padding_) &&
     (pUVar1 = UDS_LanguageManager::GetInst(), pUVar1 != (UDS_LanguageManager *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_ViewModelBase>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnLanguageChanged,(UDS_ViewModelBase *)&stack0x00000008,(pmf_620f4446 *)this
              );
  }
  return;
}

// InitViewModel @ 14be8cbb0

void __thiscall UDS_VM_GuildHistory::InitViewModel(UDS_VM_GuildHistory *this)

{
  return;
}

// OnSetViewModel @ 14be9ec60

void __thiscall
UDS_VM_GuildHistory::OnSetViewModel
          (UDS_VM_GuildHistory *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UnbindModel @ 14bebbe80

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_GuildHistory::UnbindModel(UDS_VM_GuildHistory *this)

{
  UDS_LanguageManager *pUVar1;
  
  pUVar1 = UDS_LanguageManager::GetInst();
  if (pUVar1 != (UDS_LanguageManager *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnLanguageChanged,this
              );
  }
  return;
}

// UpdateList @ 14bebf530

void __thiscall UDS_VM_GuildHistory::UpdateList(UDS_VM_GuildHistory *this)

{
  return;
}

