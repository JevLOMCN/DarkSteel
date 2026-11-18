// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticClass @ 14b64f670

UClass * __cdecl UDS_VM_GuildHistoryInfo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GuildHistoryInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GuildHistoryInfo",
               &Z_Registration_Info_UClass_UDS_VM_GuildHistoryInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_GuildHistoryInfo,0x100,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_GuildHistoryInfo>,
               InternalVTableHelperCtorCaller<UDS_VM_GuildHistoryInfo>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GuildHistoryInfo.InnerSingleton;
}

// UDS_VM_GuildHistoryInfo @ 14b652cc0

UDS_VM_GuildHistoryInfo * __thiscall
UDS_VM_GuildHistoryInfo::UDS_VM_GuildHistoryInfo
          (UDS_VM_GuildHistoryInfo *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->Txt_Log).StringTableType = None;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildHistoryInfo__6B_;
  (this->Txt_Log).StringTableID = 0;
  (this->Txt_Log).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Txt_Log).StringEnumTableNameID.Number = 0;
  (this->Txt_Log).DateTime.Ticks = 0;
  (this->Txt_Log).TimeSpan.Ticks = 0;
  (this->Txt_Log).TimeExpressionType = None;
  (this->Txt_Log).IsExpression = false;
  (this->Txt_Log).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Txt_Log).UniqueString.Data.ArrayNum = 0;
  (this->Txt_Log).UniqueString.Data.ArrayMax = 0;
  (this->Txt_Log).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Txt_Log).FormatArgs.ArrayNum = 0;
  (this->Txt_Log).FormatArgs.ArrayMax = 0;
  FText::FText(&this->Txt_LogTime);
  return this;
}

// UDS_VM_GuildHistoryInfo @ 14b652d60

UDS_VM_GuildHistoryInfo * __thiscall
UDS_VM_GuildHistoryInfo::UDS_VM_GuildHistoryInfo
          (UDS_VM_GuildHistoryInfo *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->Txt_Log).StringTableType = None;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildHistoryInfo__6B_;
  (this->Txt_Log).StringTableID = 0;
  (this->Txt_Log).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Txt_Log).StringEnumTableNameID.Number = 0;
  (this->Txt_Log).DateTime.Ticks = 0;
  (this->Txt_Log).TimeSpan.Ticks = 0;
  (this->Txt_Log).TimeExpressionType = None;
  (this->Txt_Log).IsExpression = false;
  (this->Txt_Log).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Txt_Log).UniqueString.Data.ArrayNum = 0;
  (this->Txt_Log).UniqueString.Data.ArrayMax = 0;
  (this->Txt_Log).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Txt_Log).FormatArgs.ArrayNum = 0;
  (this->Txt_Log).FormatArgs.ArrayMax = 0;
  FText::FText(&this->Txt_LogTime);
  return this;
}

// ~UDS_VM_GuildHistoryInfo @ 14b655130

void __thiscall UDS_VM_GuildHistoryInfo::~UDS_VM_GuildHistoryInfo(UDS_VM_GuildHistoryInfo *this)

{
  ITextData *pIVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildHistoryInfo__6B_;
  pIVar1 = (this->Txt_LogTime).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->Txt_Log).FormatArgs.AllocatorInstance.Data,
             (this->Txt_Log).FormatArgs.ArrayNum);
  pFVar2 = (this->Txt_Log).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Txt_Log).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6572e0

IClassDescriptor * __thiscall
UDS_VM_GuildHistoryInfo::GetFieldNotificationDescriptor(UDS_VM_GuildHistoryInfo *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_GuildHistoryInfo::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b657b50

UClass * __cdecl UDS_VM_GuildHistoryInfo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GuildHistoryInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GuildHistoryInfo",
               &Z_Registration_Info_UClass_UDS_VM_GuildHistoryInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_GuildHistoryInfo,0x100,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_GuildHistoryInfo>,
               InternalVTableHelperCtorCaller<UDS_VM_GuildHistoryInfo>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GuildHistoryInfo.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_GuildHistoryInfo @ 14b658300

void __cdecl UDS_VM_GuildHistoryInfo::StaticRegisterNativesUDS_VM_GuildHistoryInfo(void)

{
  return;
}

// BindModel @ 14be75920

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_GuildHistoryInfo::BindModel(UDS_VM_GuildHistoryInfo *this)

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

// InitViewModel @ 14be8cbc0

void __thiscall UDS_VM_GuildHistoryInfo::InitViewModel(UDS_VM_GuildHistoryInfo *this)

{
  return;
}

// OnSetViewModel @ 14be9ec90

void __thiscall
UDS_VM_GuildHistoryInfo::OnSetViewModel
          (UDS_VM_GuildHistoryInfo *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

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

// UnbindModel @ 14bebbe90

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_GuildHistoryInfo::UnbindModel(UDS_VM_GuildHistoryInfo *this)

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

