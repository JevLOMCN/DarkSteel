// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 27

// StaticClass @ 14b709920

UClass * __cdecl UDS_VM_WorldMap_IconToolTip::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WorldMap_IconToolTip.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WorldMap_IconToolTip",
               &Z_Registration_Info_UClass_UDS_VM_WorldMap_IconToolTip.InnerSingleton,
               StaticRegisterNativesUDS_VM_WorldMap_IconToolTip,0x288,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_WorldMap_IconToolTip>,
               InternalVTableHelperCtorCaller<UDS_VM_WorldMap_IconToolTip>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WorldMap_IconToolTip.InnerSingleton;
}

// UDS_VM_WorldMap_IconToolTip @ 14b7115e0

UDS_VM_WorldMap_IconToolTip * __thiscall
UDS_VM_WorldMap_IconToolTip::UDS_VM_WorldMap_IconToolTip
          (UDS_VM_WorldMap_IconToolTip *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->MarkerMemoVisibility = Collapsed;
  this->KeyInfoAllVisibility = Collapsed;
  this->KeyInfo_1_Visibility = Collapsed;
  this->KeyInfo_2_Visibility = Collapsed;
  this->KeyInfo_3_Visibility = Collapsed;
  this->KeyInfo_4_Visibility = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->DateUIVisibility = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMap_IconToolTip__6B_;
  (this->VM_InputKey_1).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  (this->VM_InputKey_2).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  (this->VM_InputKey_3).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  (this->VM_InputKey_4).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  (this->MapIndexNameText).StringTableType = None;
  (this->MapIndexNameText).StringTableID = 0;
  (this->MapIndexNameText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->MapIndexNameText).StringEnumTableNameID.Number = 0;
  (this->MapIndexNameText).DateTime.Ticks = 0;
  (this->MapIndexNameText).TimeSpan.Ticks = 0;
  (this->MapIndexNameText).TimeExpressionType = None;
  (this->MapIndexNameText).IsExpression = false;
  (this->MapIndexNameText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->MapIndexNameText).UniqueString.Data.ArrayNum = 0;
  (this->MapIndexNameText).UniqueString.Data.ArrayMax = 0;
  (this->MapIndexNameText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MapIndexNameText).FormatArgs.ArrayNum = 0;
  (this->MapIndexNameText).FormatArgs.ArrayMax = 0;
  (this->MapIndexTypeNameText).StringTableType = None;
  (this->MapIndexTypeNameText).StringTableID = 0;
  (this->MapIndexTypeNameText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->MapIndexTypeNameText).StringEnumTableNameID.Number = 0;
  (this->MapIndexTypeNameText).DateTime.Ticks = 0;
  (this->MapIndexTypeNameText).TimeSpan.Ticks = 0;
  (this->MapIndexTypeNameText).TimeExpressionType = None;
  (this->MapIndexTypeNameText).IsExpression = false;
  (this->MapIndexTypeNameText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MapIndexTypeNameText).UniqueString.Data.ArrayNum = 0;
  (this->MapIndexTypeNameText).UniqueString.Data.ArrayMax = 0;
  (this->MapIndexTypeNameText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MapIndexTypeNameText).FormatArgs.ArrayNum = 0;
  (this->MapIndexTypeNameText).FormatArgs.ArrayMax = 0;
  (this->MarkerContextText).StringTableType = None;
  (this->MarkerContextText).StringTableID = 0;
  (this->MarkerContextText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->MarkerContextText).StringEnumTableNameID.Number = 0;
  (this->MarkerContextText).DateTime.Ticks = 0;
  (this->MarkerContextText).TimeSpan.Ticks = 0;
  (this->MarkerContextText).TimeExpressionType = None;
  (this->MarkerContextText).IsExpression = false;
  (this->MarkerContextText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MarkerContextText).UniqueString.Data.ArrayNum = 0;
  (this->MarkerContextText).UniqueString.Data.ArrayMax = 0;
  (this->MarkerContextText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MarkerContextText).FormatArgs.ArrayNum = 0;
  (this->MarkerContextText).FormatArgs.ArrayMax = 0;
  FText::FText(&this->FDayText);
  (this->FDateText).StringTableType = None;
  (this->FDateText).StringTableID = 0;
  (this->FDateText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FDateText).StringEnumTableNameID.Number = 0;
  (this->FDateText).DateTime.Ticks = 0;
  (this->FDateText).TimeSpan.Ticks = 0;
  (this->FDateText).TimeExpressionType = None;
  (this->FDateText).IsExpression = false;
  (this->FDateText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FDateText).UniqueString.Data.ArrayNum = 0;
  (this->FDateText).UniqueString.Data.ArrayMax = 0;
  (this->FDateText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FDateText).FormatArgs.ArrayNum = 0;
  (this->FDateText).FormatArgs.ArrayMax = 0;
  (this->FRemainText).StringTableType = None;
  (this->FRemainText).StringTableID = 0;
  (this->FRemainText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FRemainText).StringEnumTableNameID.Number = 0;
  (this->FRemainText).DateTime.Ticks = 0;
  (this->FRemainText).TimeSpan.Ticks = 0;
  (this->FRemainText).TimeExpressionType = None;
  (this->FRemainText).IsExpression = false;
  (this->FRemainText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FRemainText).UniqueString.Data.ArrayNum = 0;
  (this->FRemainText).UniqueString.Data.ArrayMax = 0;
  (this->FRemainText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FRemainText).FormatArgs.ArrayNum = 0;
  (this->FRemainText).FormatArgs.ArrayMax = 0;
  this->IconID = 0;
  this->BreachEntityID = 0;
  this->WorldBossID = 0;
  this->IsShowDateUI = false;
  return this;
}

// UDS_VM_WorldMap_IconToolTip @ 14b711810

UDS_VM_WorldMap_IconToolTip * __thiscall
UDS_VM_WorldMap_IconToolTip::UDS_VM_WorldMap_IconToolTip
          (UDS_VM_WorldMap_IconToolTip *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->MarkerMemoVisibility = Collapsed;
  this->KeyInfoAllVisibility = Collapsed;
  this->KeyInfo_1_Visibility = Collapsed;
  this->KeyInfo_2_Visibility = Collapsed;
  this->KeyInfo_3_Visibility = Collapsed;
  this->KeyInfo_4_Visibility = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->DateUIVisibility = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMap_IconToolTip__6B_;
  (this->VM_InputKey_1).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  (this->VM_InputKey_2).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  (this->VM_InputKey_3).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  (this->VM_InputKey_4).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  (this->MapIndexNameText).StringTableType = None;
  (this->MapIndexNameText).StringTableID = 0;
  (this->MapIndexNameText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->MapIndexNameText).StringEnumTableNameID.Number = 0;
  (this->MapIndexNameText).DateTime.Ticks = 0;
  (this->MapIndexNameText).TimeSpan.Ticks = 0;
  (this->MapIndexNameText).TimeExpressionType = None;
  (this->MapIndexNameText).IsExpression = false;
  (this->MapIndexNameText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->MapIndexNameText).UniqueString.Data.ArrayNum = 0;
  (this->MapIndexNameText).UniqueString.Data.ArrayMax = 0;
  (this->MapIndexNameText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MapIndexNameText).FormatArgs.ArrayNum = 0;
  (this->MapIndexNameText).FormatArgs.ArrayMax = 0;
  (this->MapIndexTypeNameText).StringTableType = None;
  (this->MapIndexTypeNameText).StringTableID = 0;
  (this->MapIndexTypeNameText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->MapIndexTypeNameText).StringEnumTableNameID.Number = 0;
  (this->MapIndexTypeNameText).DateTime.Ticks = 0;
  (this->MapIndexTypeNameText).TimeSpan.Ticks = 0;
  (this->MapIndexTypeNameText).TimeExpressionType = None;
  (this->MapIndexTypeNameText).IsExpression = false;
  (this->MapIndexTypeNameText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MapIndexTypeNameText).UniqueString.Data.ArrayNum = 0;
  (this->MapIndexTypeNameText).UniqueString.Data.ArrayMax = 0;
  (this->MapIndexTypeNameText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MapIndexTypeNameText).FormatArgs.ArrayNum = 0;
  (this->MapIndexTypeNameText).FormatArgs.ArrayMax = 0;
  (this->MarkerContextText).StringTableType = None;
  (this->MarkerContextText).StringTableID = 0;
  (this->MarkerContextText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->MarkerContextText).StringEnumTableNameID.Number = 0;
  (this->MarkerContextText).DateTime.Ticks = 0;
  (this->MarkerContextText).TimeSpan.Ticks = 0;
  (this->MarkerContextText).TimeExpressionType = None;
  (this->MarkerContextText).IsExpression = false;
  (this->MarkerContextText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MarkerContextText).UniqueString.Data.ArrayNum = 0;
  (this->MarkerContextText).UniqueString.Data.ArrayMax = 0;
  (this->MarkerContextText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MarkerContextText).FormatArgs.ArrayNum = 0;
  (this->MarkerContextText).FormatArgs.ArrayMax = 0;
  FText::FText(&this->FDayText);
  (this->FDateText).StringTableType = None;
  (this->FDateText).StringTableID = 0;
  (this->FDateText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FDateText).StringEnumTableNameID.Number = 0;
  (this->FDateText).DateTime.Ticks = 0;
  (this->FDateText).TimeSpan.Ticks = 0;
  (this->FDateText).TimeExpressionType = None;
  (this->FDateText).IsExpression = false;
  (this->FDateText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FDateText).UniqueString.Data.ArrayNum = 0;
  (this->FDateText).UniqueString.Data.ArrayMax = 0;
  (this->FDateText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FDateText).FormatArgs.ArrayNum = 0;
  (this->FDateText).FormatArgs.ArrayMax = 0;
  (this->FRemainText).StringTableType = None;
  (this->FRemainText).StringTableID = 0;
  (this->FRemainText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FRemainText).StringEnumTableNameID.Number = 0;
  (this->FRemainText).DateTime.Ticks = 0;
  (this->FRemainText).TimeSpan.Ticks = 0;
  (this->FRemainText).TimeExpressionType = None;
  (this->FRemainText).IsExpression = false;
  (this->FRemainText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FRemainText).UniqueString.Data.ArrayNum = 0;
  (this->FRemainText).UniqueString.Data.ArrayMax = 0;
  (this->FRemainText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FRemainText).FormatArgs.ArrayNum = 0;
  (this->FRemainText).FormatArgs.ArrayMax = 0;
  this->IconID = 0;
  this->BreachEntityID = 0;
  this->WorldBossID = 0;
  this->IsShowDateUI = false;
  return this;
}

// ~UDS_VM_WorldMap_IconToolTip @ 14b713480

void __thiscall
UDS_VM_WorldMap_IconToolTip::~UDS_VM_WorldMap_IconToolTip(UDS_VM_WorldMap_IconToolTip *this)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMap_IconToolTip__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FRemainText).FormatArgs.AllocatorInstance.Data,
             (this->FRemainText).FormatArgs.ArrayNum);
  pFVar1 = (this->FRemainText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FRemainText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FDateText).FormatArgs.AllocatorInstance.Data,
             (this->FDateText).FormatArgs.ArrayNum);
  pFVar1 = (this->FDateText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FDateText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->FDayText).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->MarkerContextText).FormatArgs.AllocatorInstance.Data,
             (this->MarkerContextText).FormatArgs.ArrayNum);
  pFVar1 = (this->MarkerContextText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MarkerContextText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->MapIndexTypeNameText).FormatArgs.AllocatorInstance.Data,
             (this->MapIndexTypeNameText).FormatArgs.ArrayNum);
  pFVar1 = (this->MapIndexTypeNameText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MapIndexTypeNameText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->MapIndexNameText).FormatArgs.AllocatorInstance.Data,
             (this->MapIndexNameText).FormatArgs.ArrayNum);
  pFVar1 = (this->MapIndexNameText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MapIndexNameText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b716c20

IClassDescriptor * __thiscall
UDS_VM_WorldMap_IconToolTip::GetFieldNotificationDescriptor(UDS_VM_WorldMap_IconToolTip *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_WorldMap_IconToolTip::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b717dd0

UClass * __cdecl UDS_VM_WorldMap_IconToolTip::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WorldMap_IconToolTip.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WorldMap_IconToolTip",
               &Z_Registration_Info_UClass_UDS_VM_WorldMap_IconToolTip.InnerSingleton,
               StaticRegisterNativesUDS_VM_WorldMap_IconToolTip,0x288,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_WorldMap_IconToolTip>,
               InternalVTableHelperCtorCaller<UDS_VM_WorldMap_IconToolTip>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WorldMap_IconToolTip.InnerSingleton;
}

// GetTickableTickType @ 14b7187e0

ETickableTickType __thiscall
UDS_VM_WorldMap_IconToolTip::GetTickableTickType(UDS_VM_WorldMap_IconToolTip *this)

{
  return Conditional;
}

// StaticRegisterNativesUDS_VM_WorldMap_IconToolTip @ 14b718a90

void __cdecl UDS_VM_WorldMap_IconToolTip::StaticRegisterNativesUDS_VM_WorldMap_IconToolTip(void)

{
  return;
}

// BindModel @ 14c004e80

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_WorldMap_IconToolTip::BindModel(UDS_VM_WorldMap_IconToolTip *this)

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

// InitViewModel @ 14c0205d0

void __thiscall UDS_VM_WorldMap_IconToolTip::InitViewModel(UDS_VM_WorldMap_IconToolTip *this)

{
  UDS_VM_InputKey *pUVar1;
  
  pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_InputKey>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_VM_InputKey *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->VM_InputKey_1).field0_0x0.DebugPtr = pUVar1;
  pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_InputKey>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_VM_InputKey *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->VM_InputKey_2).field0_0x0.DebugPtr = pUVar1;
  pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_InputKey>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_VM_InputKey *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->VM_InputKey_3).field0_0x0.DebugPtr = pUVar1;
  pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_InputKey>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_VM_InputKey *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->VM_InputKey_4).field0_0x0.DebugPtr = pUVar1;
  return;
}

// IsUpdate @ 14c023ab0

bool __thiscall UDS_VM_WorldMap_IconToolTip::IsUpdate(UDS_VM_WorldMap_IconToolTip *this)

{
  return this->IsShowDateUI;
}

// OnCloseInit @ 14c028c20

void __thiscall UDS_VM_WorldMap_IconToolTip::OnCloseInit(UDS_VM_WorldMap_IconToolTip *this)

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

// OnSetViewModel @ 14c039700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_WorldMap_IconToolTip::OnSetViewModel
          (UDS_VM_WorldMap_IconToolTip *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_188 [32];
  TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1> local_158;
  TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_158.Object = (FDS_ViewModelConext_WorldMapIconToolTip *)param_1->Object;
  local_158.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_158.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelConext_WorldMapIconToolTip>
            (&local_148,(TSharedPtr<FDS_ViewModelContext,1> *)&local_158);
  if (local_148.Object == (FDS_ViewModelConext_WorldMapIconToolTip *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_WorldMap_IconToolTip::OnSetViewModel",0x2b,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x45,L"context  nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,SelfHitTestInvisible);
    local_158.Object = local_148.Object;
    local_158.SharedReferenceCount.ReferenceController =
         local_148.SharedReferenceCount.ReferenceController;
    if (local_148.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SetUIInfo(this,&local_158);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_148.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdate @ 14c03b1d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_WorldMap_IconToolTip::OnUpdate(UDS_VM_WorldMap_IconToolTip *this,float param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_PlayerData *this_00;
  double dVar3;
  undefined1 auStackY_1d8 [32];
  FWeakObjectPtr local_1a8 [2];
  FName local_198;
  int local_190;
  FDS_BreachDetailInfo local_188;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if (this->BreachEntityID != 0) {
    UDS_PlayerData::GetData((ulong64)local_1a8,UDS_PlayerData::MainPlayerEntityID,false);
    bVar1 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)local_1a8,(void *)0x0);
    if (bVar1) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 == (UDS_LogManager *)0x0) goto LAB_14c03b331;
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_WorldMap_IconToolTip::SetBreachDateText",0x2e,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x1b2,L"playerData is nullptr.");
      local_188.FirstPlayerName.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)local_138._padding_;
    }
    else {
      this_00 = (UDS_PlayerData *)FWeakObjectPtr::Get(local_1a8);
      UDS_PlayerData::GetBreachDetailInfo(this_00,&local_188,this->BreachEntityID);
      dVar3 = UDS_TimeUtilManager::GetCurrentServerTime();
      FDS_Text::SetTextFromSec
                (&this->FDateText,(float)(local_188.LifeEndTime - dVar3),DayHourSec,false);
      local_190 = FFieldNotificationClassDescriptor::FDateText.BitNumber;
      local_198 = FFieldNotificationClassDescriptor::FDateText.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_198);
    }
    if (local_188.FirstPlayerName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.FirstPlayerName.Data.AllocatorInstance.Data);
    }
  }
LAB_14c03b331:
  SetWorldBossDateText(this);
  return;
}

// SetBreachDateText @ 14c040880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_WorldMap_IconToolTip::SetBreachDateText(UDS_VM_WorldMap_IconToolTip *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_PlayerData *this_00;
  double dVar3;
  undefined1 auStackY_1d8 [32];
  FWeakObjectPtr local_1a8 [2];
  FName local_198;
  int local_190;
  FDS_BreachDetailInfo local_188;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if (this->BreachEntityID != 0) {
    UDS_PlayerData::GetData((ulong64)local_1a8,UDS_PlayerData::MainPlayerEntityID,false);
    bVar1 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)local_1a8,(void *)0x0);
    if (bVar1) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_WorldMap_IconToolTip::SetBreachDateText",0x2e,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x1b2,L"playerData is nullptr.");
      local_188.FirstPlayerName.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)local_138._padding_;
    }
    else {
      this_00 = (UDS_PlayerData *)FWeakObjectPtr::Get(local_1a8);
      UDS_PlayerData::GetBreachDetailInfo(this_00,&local_188,this->BreachEntityID);
      dVar3 = UDS_TimeUtilManager::GetCurrentServerTime();
      FDS_Text::SetTextFromSec
                (&this->FDateText,(float)(local_188.LifeEndTime - dVar3),DayHourSec,false);
      local_190 = FFieldNotificationClassDescriptor::FDateText.BitNumber;
      local_198 = FFieldNotificationClassDescriptor::FDateText.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_198);
    }
    if (local_188.FirstPlayerName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.FirstPlayerName.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// SetIconID @ 14c041610

void __thiscall
UDS_VM_WorldMap_IconToolTip::SetIconID(UDS_VM_WorldMap_IconToolTip *this,int param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IconID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IconID.FieldName;
  if (this->IconID != param_1) {
    this->IconID = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetKeyUIInfo @ 14c0420a0

void __thiscall
UDS_VM_WorldMap_IconToolTip::SetKeyUIInfo
          (UDS_VM_WorldMap_IconToolTip *this,
          TArray<EDS_KeyActionType,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  EDS_KeyActionType EVar2;
  code *pcVar3;
  ESlateVisibility EVar4;
  ESlateVisibility EVar5;
  ESlateVisibility EVar6;
  FName FVar7;
  FScriptContainerElement *pFVar8;
  FDS_ViewModelContext_InputKey *pFVar9;
  FSharedReferencer<1> FVar10;
  bool bVar11;
  FDS_KeyActionDataTableRow *pFVar12;
  UDS_VM_InputKey *pUVar13;
  ESlateVisibility EVar14;
  int iVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res8 [8];
  FScriptContainerElement *local_res10;
  FName local_a8;
  int local_a0;
  FName local_98;
  int local_90;
  FName local_88;
  int local_80;
  FName local_78;
  int local_70;
  FName local_68;
  int local_60;
  TSharedPtr<FDS_ViewModelContext_InputKey,1> local_58;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  
  iVar15 = FFieldNotificationClassDescriptor::KeyInfoAllVisibility.BitNumber;
  FVar7 = FFieldNotificationClassDescriptor::KeyInfoAllVisibility.FieldName;
  iVar1 = param_1->ArrayNum;
  EVar4 = SelfHitTestInvisible;
  if (iVar1 < 1) {
    EVar4 = Collapsed;
  }
  EVar14 = SelfHitTestInvisible;
  EVar5 = SelfHitTestInvisible;
  if (iVar1 < 2) {
    EVar5 = Collapsed;
  }
  EVar6 = SelfHitTestInvisible;
  if (iVar1 < 3) {
    EVar6 = Collapsed;
  }
  if (iVar1 < 4) {
    EVar14 = Collapsed;
  }
  if (this->KeyInfoAllVisibility != EVar4) {
    this->KeyInfoAllVisibility = EVar4;
    local_a0 = iVar15;
    local_a8 = FVar7;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_a8);
  }
  iVar1 = FFieldNotificationClassDescriptor::KeyInfo_1_Visibility.BitNumber;
  FVar7 = FFieldNotificationClassDescriptor::KeyInfo_1_Visibility.FieldName;
  if (this->KeyInfo_1_Visibility != EVar4) {
    this->KeyInfo_1_Visibility = EVar4;
    local_90 = iVar1;
    local_98 = FVar7;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_98);
  }
  iVar1 = FFieldNotificationClassDescriptor::KeyInfo_2_Visibility.BitNumber;
  FVar7 = FFieldNotificationClassDescriptor::KeyInfo_2_Visibility.FieldName;
  if (this->KeyInfo_2_Visibility != EVar5) {
    this->KeyInfo_2_Visibility = EVar5;
    local_80 = iVar1;
    local_88 = FVar7;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
  }
  iVar1 = FFieldNotificationClassDescriptor::KeyInfo_3_Visibility.BitNumber;
  FVar7 = FFieldNotificationClassDescriptor::KeyInfo_3_Visibility.FieldName;
  if (this->KeyInfo_3_Visibility != EVar6) {
    this->KeyInfo_3_Visibility = EVar6;
    local_70 = iVar1;
    local_78 = FVar7;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
  }
  iVar1 = FFieldNotificationClassDescriptor::KeyInfo_4_Visibility.BitNumber;
  FVar7 = FFieldNotificationClassDescriptor::KeyInfo_4_Visibility.FieldName;
  if (this->KeyInfo_4_Visibility != EVar14) {
    this->KeyInfo_4_Visibility = EVar14;
    local_60 = iVar1;
    local_68 = FVar7;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
  }
  pFVar16 = (param_1->AllocatorInstance).Data;
  iVar15 = 0;
  iVar1 = param_1->ArrayNum;
  local_res10 = pFVar16 + (longlong)iVar1 * 4;
  do {
    pFVar8 = local_res10;
    if (param_1->ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<enum_EDS_KeyActionType,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar16 == pFVar8) {
      pFVar16 = (param_1->AllocatorInstance).Data;
      if (pFVar16 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar16);
      }
      return;
    }
    EVar2 = *(EDS_KeyActionType *)pFVar16;
    pUVar13 = (UDS_VM_InputKey *)0x0;
    pFVar12 = FDS_KeyActionDataTableRow::Get((longlong)(int)EVar2,true);
    if (pFVar12 != (FDS_KeyActionDataTableRow *)0x0) {
      if (iVar15 == 0) {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar13 = (this->VM_InputKey_1).field0_0x0.DebugPtr, pUVar13 != (UDS_VM_InputKey *)0x0))
        {
          UE::GC::MarkAsReachable((UObject *)pUVar13);
        }
        pUVar13 = (this->VM_InputKey_1).field0_0x0.DebugPtr;
      }
      else if (iVar15 == 1) {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar13 = (this->VM_InputKey_2).field0_0x0.DebugPtr, pUVar13 != (UDS_VM_InputKey *)0x0))
        {
          UE::GC::MarkAsReachable((UObject *)pUVar13);
        }
        pUVar13 = (this->VM_InputKey_2).field0_0x0.DebugPtr;
      }
      else if (iVar15 == 2) {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar13 = (this->VM_InputKey_3).field0_0x0.DebugPtr, pUVar13 != (UDS_VM_InputKey *)0x0))
        {
          UE::GC::MarkAsReachable((UObject *)pUVar13);
        }
        pUVar13 = (this->VM_InputKey_3).field0_0x0.DebugPtr;
      }
      else if (iVar15 == 3) {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar13 = (this->VM_InputKey_4).field0_0x0.DebugPtr, pUVar13 != (UDS_VM_InputKey *)0x0))
        {
          UE::GC::MarkAsReachable((UObject *)pUVar13);
        }
        pUVar13 = (this->VM_InputKey_4).field0_0x0.DebugPtr;
      }
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar13 != (UDS_VM_InputKey *)0x0) goto LAB_14c042321;
      }
      else if (pUVar13 != (UDS_VM_InputKey *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar13);
LAB_14c042321:
        MakeContext<FDS_ViewModelContext_InputKey>(&local_58);
        pFVar9 = local_58.Object;
        if (local_58.Object == (FDS_ViewModelContext_InputKey *)0x0) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L"");
          if (bVar11) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        FVar10.ReferenceController = local_58.SharedReferenceCount.ReferenceController;
        *(undefined4 *)&pFVar9->_padding_ = 0x15d;
        local_48.Object = (FDS_ViewModelContext *)local_58.Object;
        local_48.SharedReferenceCount.ReferenceController =
             local_58.SharedReferenceCount.ReferenceController;
        pFVar9->KeyActionType = EVar2;
        if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar13,&local_48);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar10.ReferenceController);
      }
      iVar15 = iVar15 + 1;
    }
    pFVar16 = pFVar16 + 4;
  } while( true );
}

// SetKeyUIInfoVisibility @ 14c0423f0

void __thiscall
UDS_VM_WorldMap_IconToolTip::SetKeyUIInfoVisibility(UDS_VM_WorldMap_IconToolTip *this,int param_1)

{
  ESlateVisibility EVar1;
  ESlateVisibility EVar2;
  ESlateVisibility EVar3;
  ESlateVisibility EVar4;
  FName local_28;
  int local_20;
  
  local_20 = FFieldNotificationClassDescriptor::KeyInfoAllVisibility.BitNumber;
  local_28 = FFieldNotificationClassDescriptor::KeyInfoAllVisibility.FieldName;
  EVar1 = SelfHitTestInvisible;
  if (param_1 < 1) {
    EVar1 = Collapsed;
  }
  EVar4 = SelfHitTestInvisible;
  EVar2 = SelfHitTestInvisible;
  if (param_1 < 2) {
    EVar2 = Collapsed;
  }
  EVar3 = SelfHitTestInvisible;
  if (param_1 < 3) {
    EVar3 = Collapsed;
  }
  if (param_1 < 4) {
    EVar4 = Collapsed;
  }
  if (this->KeyInfoAllVisibility != EVar1) {
    this->KeyInfoAllVisibility = EVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  local_20 = FFieldNotificationClassDescriptor::KeyInfo_1_Visibility.BitNumber;
  local_28 = FFieldNotificationClassDescriptor::KeyInfo_1_Visibility.FieldName;
  if (this->KeyInfo_1_Visibility != EVar1) {
    this->KeyInfo_1_Visibility = EVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  local_20 = FFieldNotificationClassDescriptor::KeyInfo_2_Visibility.BitNumber;
  local_28 = FFieldNotificationClassDescriptor::KeyInfo_2_Visibility.FieldName;
  if (this->KeyInfo_2_Visibility != EVar2) {
    this->KeyInfo_2_Visibility = EVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  local_20 = FFieldNotificationClassDescriptor::KeyInfo_3_Visibility.BitNumber;
  local_28 = FFieldNotificationClassDescriptor::KeyInfo_3_Visibility.FieldName;
  if (this->KeyInfo_3_Visibility != EVar3) {
    this->KeyInfo_3_Visibility = EVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  local_20 = FFieldNotificationClassDescriptor::KeyInfo_4_Visibility.BitNumber;
  local_28 = FFieldNotificationClassDescriptor::KeyInfo_4_Visibility.FieldName;
  if (this->KeyInfo_4_Visibility != EVar4) {
    this->KeyInfo_4_Visibility = EVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  return;
}

// SetMapIndexNameText @ 14c042660

void __thiscall
UDS_VM_WorldMap_IconToolTip::SetMapIndexNameText
          (UDS_VM_WorldMap_IconToolTip *this,FDS_Text *param_1)

{
  FScriptContainerElement *pFVar1;
  FName local_18;
  int local_10;
  
  FDS_Text::operator=(&this->MapIndexNameText,param_1);
  local_10 = FFieldNotificationClassDescriptor::MapIndexNameText.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MapIndexNameText.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(param_1->FormatArgs).AllocatorInstance.Data,
             (param_1->FormatArgs).ArrayNum);
  pFVar1 = (param_1->FormatArgs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_1->UniqueString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// SetMapIndexTypeNameText @ 14c0426e0

void __thiscall
UDS_VM_WorldMap_IconToolTip::SetMapIndexTypeNameText
          (UDS_VM_WorldMap_IconToolTip *this,FDS_Text *param_1)

{
  FScriptContainerElement *pFVar1;
  FName local_18;
  int local_10;
  
  FDS_Text::operator=(&this->MapIndexTypeNameText,param_1);
  local_10 = FFieldNotificationClassDescriptor::MapIndexTypeNameText.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MapIndexTypeNameText.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(param_1->FormatArgs).AllocatorInstance.Data,
             (param_1->FormatArgs).ArrayNum);
  pFVar1 = (param_1->FormatArgs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_1->UniqueString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// SetMarkerContextText @ 14c042880

void __thiscall
UDS_VM_WorldMap_IconToolTip::SetMarkerContextText
          (UDS_VM_WorldMap_IconToolTip *this,FDS_Text *param_1)

{
  FScriptContainerElement *pFVar1;
  FName local_18;
  int local_10;
  
  FDS_Text::operator=(&this->MarkerContextText,param_1);
  local_10 = FFieldNotificationClassDescriptor::MarkerContextText.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MarkerContextText.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(param_1->FormatArgs).AllocatorInstance.Data,
             (param_1->FormatArgs).ArrayNum);
  pFVar1 = (param_1->FormatArgs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_1->UniqueString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// SetMarkerMemoVisibility @ 14c042900

void __thiscall
UDS_VM_WorldMap_IconToolTip::SetMarkerMemoVisibility
          (UDS_VM_WorldMap_IconToolTip *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::MarkerMemoVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MarkerMemoVisibility.FieldName;
  if (this->MarkerMemoVisibility != param_1) {
    this->MarkerMemoVisibility = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetRemainText @ 14c042fd0

void __thiscall
UDS_VM_WorldMap_IconToolTip::SetRemainText(UDS_VM_WorldMap_IconToolTip *this,FDS_Text *param_1)

{
  FScriptContainerElement *pFVar1;
  FName local_18;
  int local_10;
  
  FDS_Text::operator=(&this->FRemainText,param_1);
  local_10 = FFieldNotificationClassDescriptor::FRemainText.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::FRemainText.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(param_1->FormatArgs).AllocatorInstance.Data,
             (param_1->FormatArgs).ArrayNum);
  pFVar1 = (param_1->FormatArgs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_1->UniqueString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// SetUIInfo @ 14c043f00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_WorldMap_IconToolTip::SetUIInfo
          (UDS_VM_WorldMap_IconToolTip *this,
          TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1> *param_1)

{
  FInstancedStruct *this_00;
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FObjectPtr_u_0 FVar4;
  FName FVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  int iVar8;
  FDS_MapIndexBaseTableRow *this_01;
  UDS_LogManager *pUVar9;
  FDS_StringBaseTableRow *pFVar10;
  FDS_Text *pFVar11;
  FDS_MapIndexSpawnTableRow *pFVar12;
  FObjectPtr_u_0 *pFVar13;
  FDS_Int32StringFormatArg *pFVar14;
  FDS_ZoneBaseTableRow *this_02;
  FDS_StringWorldTableRow *pFVar15;
  FDS_BreachBaseTableRow *pFVar16;
  FDS_WorldBossTableRow *pFVar17;
  FDS_ViewModelConext_WorldMapIconToolTip *pFVar18;
  FDS_StuffBaseTableRow *pFVar19;
  FDS_NpcBaseTableRow *pFVar20;
  FDS_QuestObjectiveTableRow *this_03;
  FDS_QuestBaseTableRow *pFVar21;
  FDS_StringQuestTableRow *pFVar22;
  FDS_StringWorldID *pFVar23;
  longlong lVar24;
  undefined1 auStackY_1758 [32];
  FDS_Text local_1718;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> local_16c8;
  TArray<EDS_KeyActionType,TSizedDefaultAllocator<32>_> local_16b8;
  FName local_16a8;
  int local_16a0;
  FName local_1698;
  int local_1690;
  FName local_1688;
  int local_1680;
  FName local_1678;
  int local_1670;
  FName local_1668;
  int local_1660;
  FName local_1658;
  int local_1650;
  FDS_Text local_1648;
  FDS_Text local_15f8;
  FDS_Text local_15a8;
  FDS_Text local_1558;
  FDS_Text local_1508;
  FDS_Text local_14b8;
  FDS_Text local_1468;
  FName local_1408;
  FDS_Text local_13c8;
  FDS_Text local_1378;
  FDS_Text local_1328;
  FDS_Text local_12d8;
  FDS_Text local_1288;
  FDS_Text local_1238;
  FDS_Text local_11e8;
  FDS_Text local_1198;
  FDS_Text local_1148;
  FDS_Text local_10f8;
  FDS_Text local_10a8;
  FDS_Text local_1058;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_1008;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_ee8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_dc8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_ca8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_b88;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_a68;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_948;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_828;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_708;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_5e8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1758;
  if ((param_1->Object == (FDS_ViewModelConext_WorldMapIconToolTip *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_01 = FDS_MapIndexBaseTableRow::Get((longlong)param_1->Object->MapIndexBaseID,true);
  if (this_01 == (FDS_MapIndexBaseTableRow *)0x0) {
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 != (UDS_LogManager *)0x0) {
      pUVar9 = UDS_LogManager::GetInst();
      local_1008._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_1008,"UDS_VM_WorldMap_IconToolTip::SetUIInfo",0x26,Yes);
      UDS_LogManager::PrintLog
                (pUVar9,1,Warning,local_1008.Ptr,0x51,L"mapIndexBaseTableRow  nullptr");
      if ((void *)local_1008._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_1008._padding_);
      }
    }
    goto LAB_14c0452aa;
  }
  local_1408.ComparisonIndex.Value = 0;
  local_1408.Number = 0;
  local_1558.StringTableType = None;
  local_1558.StringTableID = 0;
  local_1558.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_1558.StringEnumTableNameID.Number = 0;
  local_1558.DateTime.Ticks = 0;
  local_1558.TimeSpan.Ticks = 0;
  local_1558.TimeExpressionType = None;
  local_1558.IsExpression = false;
  local_1558.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1558.UniqueString.Data.ArrayNum = 0;
  local_1558.UniqueString.Data.ArrayMax = 0;
  local_1558.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1558.FormatArgs.ArrayNum = 0;
  local_1558.FormatArgs.ArrayMax = 0;
  FDS_Text::SetTextFromStringTable(&local_1558,StringUi,0x3fb);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_1558.FormatArgs.AllocatorInstance.Data,
             local_1558.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_1558.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
  {
    FMemory::Free(local_1558.FormatArgs.AllocatorInstance.Data);
  }
  if (local_1558.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1558.UniqueString.Data.AllocatorInstance.Data);
  }
  local_1718.StringTableType = None;
  local_1718.StringTableID = 0;
  local_1718.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_1718.StringEnumTableNameID.Number = 0;
  local_1718.DateTime.Ticks = 0;
  local_1718.TimeSpan.Ticks = 0;
  local_1718.TimeExpressionType = None;
  local_1718.IsExpression = false;
  local_1718.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1718.UniqueString.Data.ArrayNum = 0;
  local_1718.UniqueString.Data.ArrayMax = 0;
  local_1718.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1718.FormatArgs.ArrayNum = 0;
  local_1718.FormatArgs.ArrayMax = 0;
  pFVar10 = FDS_MapIndexBaseTableRow::ID_MapIndexTypeNameTable(this_01);
  FDS_Text::SetTextFromStringTable(&local_1718,pFVar10);
  FVar5 = FFieldNotificationClassDescriptor::IconID.FieldName;
  if (this->IconID != this_01->MapIndexIcon) {
    local_16a0 = FFieldNotificationClassDescriptor::IconID.BitNumber;
    this->IconID = this_01->MapIndexIcon;
    local_16a8 = FVar5;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_16a8);
  }
  FVar6.Data = local_1718.UniqueString.Data.AllocatorInstance.Data;
  lVar24 = (longlong)local_1718.UniqueString.Data.ArrayNum;
  local_1648.StringTableType = local_1718.StringTableType;
  local_1648.StringTableID = local_1718.StringTableID;
  local_1648.StringEnumTableNameID = local_1718.StringEnumTableNameID;
  local_1648.DateTime.Ticks = local_1718.DateTime.Ticks;
  local_1648.TimeSpan.Ticks = local_1718.TimeSpan.Ticks;
  local_1648.TimeExpressionType = local_1718.TimeExpressionType;
  local_1648.IsExpression = local_1718.IsExpression;
  local_1648.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1648.UniqueString.Data.ArrayNum = local_1718.UniqueString.Data.ArrayNum;
  if (local_1718.UniqueString.Data.ArrayNum == 0) {
    local_1648.UniqueString.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_1718.UniqueString.Data.ArrayNum,0,
               (ForAnyElementType *)&local_1648.UniqueString,local_1718.UniqueString.Data.ArrayNum,
               &local_1648.UniqueString.Data.ArrayMax);
    memcpy(local_1648.UniqueString.Data.AllocatorInstance.Data,FVar6.Data,lVar24 * 2);
  }
  FVar6.Data = local_1718.FormatArgs.AllocatorInstance.Data;
  iVar1 = local_1718.FormatArgs.ArrayNum;
  local_1648.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1648.FormatArgs.ArrayNum = local_1718.FormatArgs.ArrayNum;
  if (local_1718.FormatArgs.ArrayNum == 0) {
    local_1648.FormatArgs.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,local_1718.FormatArgs.ArrayNum,0,&local_1648.FormatArgs.AllocatorInstance,
               local_1718.FormatArgs.ArrayNum,&local_1648.FormatArgs.ArrayMax);
    ConstructItems<FDS_TextFormatArg,FDS_TextFormatArg,int>
              (local_1648.FormatArgs.AllocatorInstance.Data,(FDS_TextFormatArg *)FVar6.Data,iVar1);
  }
  SetMapIndexTypeNameText(this,&local_1648);
  local_1508.StringEnumTableNameID = local_1408;
  local_1508.StringTableType = None;
  local_1508.DateTime.Ticks = 0;
  local_1508.TimeSpan.Ticks = 0;
  local_1508.StringTableID = 0;
  local_1508.TimeExpressionType = None;
  local_1508.IsExpression = false;
  local_1508.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1508.UniqueString.Data.ArrayNum = 0;
  local_1508.UniqueString.Data.ArrayMax = 0;
  local_1508.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1508.FormatArgs.ArrayNum = 0;
  local_1508.FormatArgs.ArrayMax = 0;
  FDS_Text::operator=(&this->FRemainText,&local_1508);
  local_1690 = FFieldNotificationClassDescriptor::FRemainText.BitNumber;
  local_1698 = FFieldNotificationClassDescriptor::FRemainText.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1698);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_1508.FormatArgs.AllocatorInstance.Data,
             local_1508.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_1508.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
  {
    FMemory::Free(local_1508.FormatArgs.AllocatorInstance.Data);
  }
  if (local_1508.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1508.UniqueString.Data.AllocatorInstance.Data);
  }
  local_16b8.ArrayNum = (this_01->ID_KeyAction).ArrayNum;
  lVar24 = (longlong)local_16b8.ArrayNum;
  pFVar2 = (this_01->ID_KeyAction).AllocatorInstance.Data;
  local_16b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_16b8.ArrayNum == 0) {
    local_16b8.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_16b8.ArrayNum,0,&local_16b8.AllocatorInstance,local_16b8.ArrayNum,
               &local_16b8.ArrayMax);
    memcpy(local_16b8.AllocatorInstance.Data,pFVar2,lVar24 << 2);
  }
  SetKeyUIInfo(this,&local_16b8);
  this->DateUIVisibility = Collapsed;
  iVar1 = FFieldNotificationClassDescriptor::MarkerMemoVisibility.BitNumber;
  FVar5 = FFieldNotificationClassDescriptor::MarkerMemoVisibility.FieldName;
  if (this->MarkerMemoVisibility != Collapsed) {
    this->MarkerMemoVisibility = Collapsed;
    local_1680 = iVar1;
    local_1688 = FVar5;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1688);
  }
  this->IsShowDateUI = false;
  switch(this_01->MapIndexTextType) {
  case PartyLeader:
  case PartyMember:
    pFVar18 = TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1>::operator->(param_1);
    pFVar11 = FDS_Text::FromUniqueString(&local_13c8,&pFVar18->PartyMemberName);
    SetMapIndexNameText(this,pFVar11);
  default:
    goto switchD_14c0443b1_caseD_3;
  case Marker:
    pFVar18 = TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1>::operator->(param_1);
    if (pFVar18->IsSharedMarker == true) {
      pFVar11 = FDS_Text::FromStringTable(&local_12d8,StringUi,0x445dc);
    }
    else {
      pFVar18 = TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1>::operator->(param_1);
      local_16c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_16c8.ArrayNum = 0;
      local_16c8.ArrayMax = 0;
      iVar1 = pFVar18->MarkerIndex;
      local_14b8.StringTableType = None;
      local_14b8.StringTableID = 0;
      local_14b8.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_14b8.StringEnumTableNameID.Number = 0;
      local_14b8.DateTime.Ticks = 0;
      local_14b8.TimeSpan.Ticks = 0;
      local_14b8.TimeExpressionType = None;
      local_14b8.IsExpression = false;
      local_14b8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_14b8.UniqueString.Data.ArrayNum = 0;
      local_14b8.UniqueString.Data.ArrayMax = 0;
      local_14b8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_14b8.FormatArgs.ArrayNum = 0;
      local_14b8.FormatArgs.ArrayMax = 0;
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,&local_16c8.AllocatorInstance,&local_16c8.ArrayMax);
      local_16c8.ArrayNum = iVar8 + 1;
      this_00 = (FInstancedStruct *)(local_16c8.AllocatorInstance.Data + (longlong)iVar8 * 0x28);
      FInstancedStruct::FInstancedStruct(this_00);
      pFVar13 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
      FVar4 = pFVar13[1];
      this_00[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar13;
      this_00[1].StructMemory = (uchar *)FVar4;
      this_00[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar13[2];
      FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(this_00);
      pFVar14 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(this_00);
      if (pFVar14 != (FDS_Int32StringFormatArg *)0x0) {
        pFVar14->Value = iVar1 + 1;
      }
      FDS_Text::SetTextFormatFromStringTable(&local_14b8,StringUi,0x445db,&local_16c8);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_16c8.AllocatorInstance.Data,local_16c8.ArrayNum);
      if ((FDS_TextFormatArg *)local_16c8.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_16c8.AllocatorInstance.Data);
      }
      pFVar11 = &local_14b8;
    }
    SetMapIndexNameText(this,pFVar11);
    pFVar18 = TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1>::operator->(param_1);
    iVar1 = FFieldNotificationClassDescriptor::MarkerMemoVisibility.BitNumber;
    FVar5 = FFieldNotificationClassDescriptor::MarkerMemoVisibility.FieldName;
    if ((1 < (pFVar18->MarkerMemo).Data.ArrayNum) &&
       (this->MarkerMemoVisibility != SelfHitTestInvisible)) {
      this->MarkerMemoVisibility = SelfHitTestInvisible;
      local_1670 = iVar1;
      local_1678 = FVar5;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1678);
    }
    pFVar18 = TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1>::operator->(param_1);
    pFVar11 = FDS_Text::FromUniqueString(&local_1288,&pFVar18->MarkerMemo);
    FDS_Text::operator=(&this->MarkerContextText,pFVar11);
    local_1660 = FFieldNotificationClassDescriptor::MarkerContextText.BitNumber;
    local_1668 = FFieldNotificationClassDescriptor::MarkerContextText.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1668);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)(pFVar11->FormatArgs).AllocatorInstance.Data,
               (pFVar11->FormatArgs).ArrayNum);
    pFVar2 = (pFVar11->FormatArgs).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar11->UniqueString).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    goto switchD_14c0443b1_caseD_3;
  case Npc:
    pFVar18 = TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1>::operator->(param_1);
    if (pFVar18->NpcBaseID == 0) goto switchD_14c0443b1_caseD_3;
    pFVar18 = TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1>::operator->(param_1);
    pFVar20 = FDS_NpcBaseTableRow::Get((longlong)pFVar18->NpcBaseID,true);
    if (pFVar20 != (FDS_NpcBaseTableRow *)0x0) {
      pFVar11 = &local_1378;
LAB_14c044493:
      pFVar23 = &pFVar20->ID_NameSid;
      goto LAB_14c044497;
    }
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 != (UDS_LogManager *)0x0) {
      pUVar9 = UDS_LogManager::GetInst();
      local_ee8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_ee8,"UDS_VM_WorldMap_IconToolTip::SetUIInfo",0x26,Yes);
      UDS_LogManager::PrintLog(pUVar9,1,Warning,local_ee8.Ptr,0x75,L"npcBaseTableRow  nullptr");
      if ((void *)local_ee8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_ee8._padding_);
      }
    }
    break;
  case MapIndexSpawn:
    pFVar18 = TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1>::operator->(param_1);
    if (pFVar18->MapIndexSpawnID == 0) goto switchD_14c0443b1_caseD_3;
    pFVar18 = TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1>::operator->(param_1);
    pFVar12 = FDS_MapIndexSpawnTableRow::Get((longlong)pFVar18->MapIndexSpawnID,true);
    if (pFVar12 != (FDS_MapIndexSpawnTableRow *)0x0) {
      pFVar23 = &pFVar12->MapIndexName;
      pFVar11 = &local_1328;
      goto LAB_14c044497;
    }
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 != (UDS_LogManager *)0x0) {
      pUVar9 = UDS_LogManager::GetInst();
      local_dc8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_dc8,"UDS_VM_WorldMap_IconToolTip::SetUIInfo",0x26,Yes);
      UDS_LogManager::PrintLog
                (pUVar9,1,Warning,local_dc8.Ptr,0x84,L"mapIndexSpawnTableRow  nullptr");
      if ((void *)local_dc8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_dc8._padding_);
      }
    }
    break;
  case WarpDevice:
    pFVar18 = TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1>::operator->(param_1);
    if (pFVar18->ZoneID != 0) {
      pFVar18 = TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1>::operator->(param_1);
      this_02 = FDS_ZoneBaseTableRow::Get((longlong)pFVar18->ZoneID,true);
      if (this_02 == (FDS_ZoneBaseTableRow *)0x0) {
        pUVar9 = UDS_LogManager::GetInst();
        if (pUVar9 != (UDS_LogManager *)0x0) {
          pUVar9 = UDS_LogManager::GetInst();
          local_ca8._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_ca8,"UDS_VM_WorldMap_IconToolTip::SetUIInfo",0x26,Yes);
          UDS_LogManager::PrintLog(pUVar9,1,Warning,local_ca8.Ptr,0xa6,L"zoneBaseTableID  nullptr");
          if ((void *)local_ca8._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_ca8._padding_);
          }
        }
        break;
      }
      pFVar15 = FDS_ZoneBaseTableRow::ID_ZoneNameTable(this_02);
      bVar7 = FDS_StringWorldTableRow::IsValid(pFVar15);
      if (bVar7) {
        pFVar15 = FDS_ZoneBaseTableRow::ID_ZoneNameTable(this_02);
        pFVar11 = FDS_Text::FromStringTable(&local_1238,pFVar15);
        SetMapIndexNameText(this,pFVar11);
      }
    }
switchD_14c0443b1_caseD_3:
    local_1650 = FFieldNotificationClassDescriptor::DateUIVisibility.BitNumber;
    local_1658 = FFieldNotificationClassDescriptor::DateUIVisibility.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1658);
    break;
  case Detection:
    pFVar18 = TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1>::operator->(param_1);
    if (pFVar18->IsStuff == true) {
      pFVar18 = TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1>::operator->(param_1);
      pFVar19 = FDS_StuffBaseTableRow::Get((longlong)pFVar18->DetectionTableID,true);
      if (pFVar19 != (FDS_StuffBaseTableRow *)0x0) {
        pFVar23 = &pFVar19->ID_Name;
        pFVar11 = &local_11e8;
        goto LAB_14c044497;
      }
      pUVar9 = UDS_LogManager::GetInst();
      if (pUVar9 != (UDS_LogManager *)0x0) {
        pUVar9 = UDS_LogManager::GetInst();
        local_b88._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_b88,"UDS_VM_WorldMap_IconToolTip::SetUIInfo",0x26,Yes);
        UDS_LogManager::PrintLog(pUVar9,1,Warning,local_b88.Ptr,0xb8,L"stuffBaseTableRow  nullptr");
        if ((void *)local_b88._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_b88._padding_);
        }
      }
    }
    else {
      pFVar18 = TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1>::operator->(param_1);
      pFVar20 = FDS_NpcBaseTableRow::Get((longlong)pFVar18->DetectionTableID,true);
      if (pFVar20 != (FDS_NpcBaseTableRow *)0x0) {
        pFVar11 = &local_1198;
        goto LAB_14c044493;
      }
      pUVar9 = UDS_LogManager::GetInst();
      if (pUVar9 != (UDS_LogManager *)0x0) {
        pUVar9 = UDS_LogManager::GetInst();
        local_a68._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_a68,"UDS_VM_WorldMap_IconToolTip::SetUIInfo",0x26,Yes);
        UDS_LogManager::PrintLog(pUVar9,1,Warning,local_a68.Ptr,0xc2,L"npcBaseTableRow  nullptr");
        if ((void *)local_a68._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_a68._padding_);
        }
      }
    }
    break;
  case Breach:
    pFVar18 = TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1>::operator->(param_1);
    pFVar16 = FDS_BreachBaseTableRow::Get((longlong)pFVar18->BreachBaseID,true);
    if (pFVar16 != (FDS_BreachBaseTableRow *)0x0) {
      this->DateUIVisibility = SelfHitTestInvisible;
      this->IsShowDateUI = true;
      pFVar18 = TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1>::operator->(param_1);
      this->BreachEntityID = pFVar18->BreachEntityID;
      pFVar11 = FDS_Text::FromStringID(&local_1148,&pFVar16->ID_Name);
      SetMapIndexNameText(this,pFVar11);
      goto switchD_14c0443b1_caseD_3;
    }
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 != (UDS_LogManager *)0x0) {
      pUVar9 = UDS_LogManager::GetInst();
      local_948._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_948,"UDS_VM_WorldMap_IconToolTip::SetUIInfo",0x26,Yes);
      UDS_LogManager::PrintLog(pUVar9,1,Warning,local_948.Ptr,0xce,L"breachBaseTableRow is nullptr")
      ;
      if ((void *)local_948._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_948._padding_);
      }
    }
    break;
  case WorldBoss:
    pFVar18 = TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1>::operator->(param_1);
    pFVar17 = FDS_WorldBossTableRow::Get(pFVar18->WorldBossID,true);
    if (pFVar17 == (FDS_WorldBossTableRow *)0x0) {
      pUVar9 = UDS_LogManager::GetInst();
      if (pUVar9 != (UDS_LogManager *)0x0) {
        pUVar9 = UDS_LogManager::GetInst();
        local_828._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_828,"UDS_VM_WorldMap_IconToolTip::SetUIInfo",0x26,Yes);
        UDS_LogManager::PrintLog
                  (pUVar9,1,Warning,local_828.Ptr,0xdf,L"worldBossTableRow is nullptr");
        if ((void *)local_828._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_828._padding_);
        }
      }
    }
    else {
      pFVar20 = FDS_NpcBaseTableRow::Get((longlong)pFVar17->ID_NpcBase,true);
      if (pFVar20 != (FDS_NpcBaseTableRow *)0x0) {
        this->DateUIVisibility = SelfHitTestInvisible;
        this->IsShowDateUI = true;
        pFVar18 = TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1>::operator->(param_1);
        pFVar23 = &pFVar20->ID_NameSid;
        this->WorldBossID = pFVar18->WorldBossID;
        pFVar11 = &local_10f8;
        goto LAB_14c044497;
      }
      pUVar9 = UDS_LogManager::GetInst();
      if (pUVar9 != (UDS_LogManager *)0x0) {
        pUVar9 = UDS_LogManager::GetInst();
        local_708._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_708,"UDS_VM_WorldMap_IconToolTip::SetUIInfo",0x26,Yes);
        UDS_LogManager::PrintLog(pUVar9,1,Warning,local_708.Ptr,0xe6,L"npcBaseTableRow is nullptr");
        if ((void *)local_708._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_708._padding_);
        }
      }
    }
    break;
  case QuestTitle:
    pFVar18 = TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1>::operator->(param_1);
    pFVar21 = FDS_QuestBaseTableRow::Get((longlong)pFVar18->QuestID,true);
    if (pFVar21 == (FDS_QuestBaseTableRow *)0x0) {
      pUVar9 = UDS_LogManager::GetInst();
      if (pUVar9 != (UDS_LogManager *)0x0) {
        pUVar9 = UDS_LogManager::GetInst();
        local_4c8._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_4c8,"UDS_VM_WorldMap_IconToolTip::SetUIInfo",0x26,Yes);
        UDS_LogManager::PrintLog
                  (pUVar9,1,Warning,local_4c8.Ptr,0x102,L"questBaseTableRow is nullptr");
        if ((void *)local_4c8._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_4c8._padding_);
        }
      }
    }
    else {
      pFVar18 = TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1>::operator->(param_1);
      pFVar20 = FDS_NpcBaseTableRow::Get((longlong)pFVar18->NpcBaseID,true);
      if (pFVar20 != (FDS_NpcBaseTableRow *)0x0) {
        pFVar22 = FDS_QuestBaseTableRow::ID_QuestTitleIdTable(pFVar21);
        FDS_Text::SetTextFromStringTable(&local_1718,pFVar22);
        FVar6.Data = local_1718.UniqueString.Data.AllocatorInstance.Data;
        lVar24 = (longlong)local_1718.UniqueString.Data.ArrayNum;
        local_15f8.StringTableType = local_1718.StringTableType;
        local_15f8.StringTableID = local_1718.StringTableID;
        local_15f8.StringEnumTableNameID = local_1718.StringEnumTableNameID;
        local_15f8.DateTime.Ticks = local_1718.DateTime.Ticks;
        local_15f8.TimeSpan.Ticks = local_1718.TimeSpan.Ticks;
        local_15f8.TimeExpressionType = local_1718.TimeExpressionType;
        local_15f8.IsExpression = local_1718.IsExpression;
        local_15f8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_15f8.UniqueString.Data.ArrayNum = local_1718.UniqueString.Data.ArrayNum;
        if (local_1718.UniqueString.Data.ArrayNum == 0) {
          local_15f8.UniqueString.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_1718.UniqueString.Data.ArrayNum,0,
                     (ForAnyElementType *)&local_15f8.UniqueString,
                     local_1718.UniqueString.Data.ArrayNum,&local_15f8.UniqueString.Data.ArrayMax);
          memcpy(local_15f8.UniqueString.Data.AllocatorInstance.Data,FVar6.Data,lVar24 * 2);
        }
        FVar6.Data = local_1718.FormatArgs.AllocatorInstance.Data;
        iVar1 = local_1718.FormatArgs.ArrayNum;
        local_15f8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_15f8.FormatArgs.ArrayNum = local_1718.FormatArgs.ArrayNum;
        if (local_1718.FormatArgs.ArrayNum == 0) {
          local_15f8.FormatArgs.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,local_1718.FormatArgs.ArrayNum,0,
                     &local_15f8.FormatArgs.AllocatorInstance,local_1718.FormatArgs.ArrayNum,
                     &local_15f8.FormatArgs.ArrayMax);
          ConstructItems<FDS_TextFormatArg,FDS_TextFormatArg,int>
                    (local_15f8.FormatArgs.AllocatorInstance.Data,(FDS_TextFormatArg *)FVar6.Data,
                     iVar1);
        }
        SetMapIndexTypeNameText(this,&local_15f8);
        pFVar23 = &pFVar20->ID_NameSid;
        pFVar11 = &local_1058;
        goto LAB_14c044497;
      }
      pUVar9 = UDS_LogManager::GetInst();
      if (pUVar9 != (UDS_LogManager *)0x0) {
        pUVar9 = UDS_LogManager::GetInst();
        local_3a8._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_3a8,"UDS_VM_WorldMap_IconToolTip::SetUIInfo",0x26,Yes);
        UDS_LogManager::PrintLog(pUVar9,1,Warning,local_3a8.Ptr,0x109,L"npcBaseTableRow is nullptr")
        ;
        if ((void *)local_3a8._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_3a8._padding_);
        }
      }
    }
    break;
  case QuestObjectiveTitle:
    pFVar18 = TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1>::operator->(param_1);
    this_03 = FDS_QuestObjectiveTableRow::Get((longlong)pFVar18->QuestObjectiveID,true);
    if (this_03 == (FDS_QuestObjectiveTableRow *)0x0) {
      pUVar9 = UDS_LogManager::GetInst();
      if (pUVar9 != (UDS_LogManager *)0x0) {
        pUVar9 = UDS_LogManager::GetInst();
        local_288._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_288,"UDS_VM_WorldMap_IconToolTip::SetUIInfo",0x26,Yes);
        UDS_LogManager::PrintLog
                  (pUVar9,1,Warning,local_288.Ptr,0x116,L"questObjectiveTableRow is nullptr");
        if ((void *)local_288._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_288._padding_);
        }
      }
    }
    else {
      pFVar18 = TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1>::operator->(param_1);
      pFVar21 = FDS_QuestBaseTableRow::Get((longlong)pFVar18->QuestID,true);
      if (pFVar21 != (FDS_QuestBaseTableRow *)0x0) {
        pFVar22 = FDS_QuestBaseTableRow::ID_QuestTitleIdTable(pFVar21);
        local_1468.StringTableType = None;
        local_1468.StringTableID = 0;
        local_1468.StringEnumTableNameID.ComparisonIndex.Value = 0;
        local_1468.StringEnumTableNameID.Number = 0;
        local_1468.DateTime.Ticks = 0;
        local_1468.TimeSpan.Ticks = 0;
        local_1468.TimeExpressionType = None;
        local_1468.IsExpression = false;
        local_1468.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1468.UniqueString.Data.ArrayNum = 0;
        local_1468.UniqueString.Data.ArrayMax = 0;
        local_1468.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1468.FormatArgs.ArrayNum = 0;
        local_1468.FormatArgs.ArrayMax = 0;
        FDS_Text::SetTextFromStringTable(&local_1468,pFVar22);
        SetMapIndexNameText(this,&local_1468);
        pFVar22 = FDS_QuestObjectiveTableRow::ID_QuestObjectiveIdTable(this_03);
        FDS_Text::SetTextFromStringTable(&local_1718,pFVar22);
        FVar6.Data = local_1718.UniqueString.Data.AllocatorInstance.Data;
        lVar24 = (longlong)local_1718.UniqueString.Data.ArrayNum;
        local_15a8.StringTableType = local_1718.StringTableType;
        local_15a8.StringTableID = local_1718.StringTableID;
        local_15a8.StringEnumTableNameID = local_1718.StringEnumTableNameID;
        local_15a8.DateTime.Ticks = local_1718.DateTime.Ticks;
        local_15a8.TimeSpan.Ticks = local_1718.TimeSpan.Ticks;
        local_15a8.TimeExpressionType = local_1718.TimeExpressionType;
        local_15a8.IsExpression = local_1718.IsExpression;
        local_15a8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_15a8.UniqueString.Data.ArrayNum = local_1718.UniqueString.Data.ArrayNum;
        if (local_1718.UniqueString.Data.ArrayNum == 0) {
          local_15a8.UniqueString.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_1718.UniqueString.Data.ArrayNum,0,
                     (ForAnyElementType *)&local_15a8.UniqueString,
                     local_1718.UniqueString.Data.ArrayNum,&local_15a8.UniqueString.Data.ArrayMax);
          memcpy(local_15a8.UniqueString.Data.AllocatorInstance.Data,FVar6.Data,lVar24 * 2);
        }
        FVar6.Data = local_1718.FormatArgs.AllocatorInstance.Data;
        iVar1 = local_1718.FormatArgs.ArrayNum;
        local_15a8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_15a8.FormatArgs.ArrayNum = local_1718.FormatArgs.ArrayNum;
        if (local_1718.FormatArgs.ArrayNum == 0) {
          local_15a8.FormatArgs.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,local_1718.FormatArgs.ArrayNum,0,
                     &local_15a8.FormatArgs.AllocatorInstance,local_1718.FormatArgs.ArrayNum,
                     &local_15a8.FormatArgs.ArrayMax);
          ConstructItems<FDS_TextFormatArg,FDS_TextFormatArg,int>
                    (local_15a8.FormatArgs.AllocatorInstance.Data,(FDS_TextFormatArg *)FVar6.Data,
                     iVar1);
        }
        SetMapIndexTypeNameText(this,&local_15a8);
        goto switchD_14c0443b1_caseD_3;
      }
      pUVar9 = UDS_LogManager::GetInst();
      if (pUVar9 != (UDS_LogManager *)0x0) {
        pUVar9 = UDS_LogManager::GetInst();
        local_168._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_168,"UDS_VM_WorldMap_IconToolTip::SetUIInfo",0x26,Yes);
        UDS_LogManager::PrintLog
                  (pUVar9,1,Warning,local_168.Ptr,0x11d,L"questBaseTableRow is nullptr");
        if ((void *)local_168._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_168._padding_);
        }
      }
    }
    break;
  case QuestDaily:
    pFVar18 = TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1>::operator->(param_1);
    pFVar19 = FDS_StuffBaseTableRow::Get(pFVar18->QuestBoardID,true);
    if (pFVar19 != (FDS_StuffBaseTableRow *)0x0) {
      pFVar23 = &pFVar19->ID_Name;
      pFVar11 = &local_10a8;
LAB_14c044497:
      pFVar11 = FDS_Text::FromStringID(pFVar11,pFVar23);
      SetMapIndexNameText(this,pFVar11);
      goto switchD_14c0443b1_caseD_3;
    }
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 != (UDS_LogManager *)0x0) {
      pUVar9 = UDS_LogManager::GetInst();
      local_5e8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_5e8,"UDS_VM_WorldMap_IconToolTip::SetUIInfo",0x26,Yes);
      UDS_LogManager::PrintLog(pUVar9,1,Warning,local_5e8.Ptr,0xf6,L"stuffBaseTableRow is nullptr");
      if ((void *)local_5e8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_5e8._padding_);
      }
    }
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_1718.FormatArgs.AllocatorInstance.Data,
             local_1718.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_1718.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
  {
    FMemory::Free(local_1718.FormatArgs.AllocatorInstance.Data);
  }
  if (local_1718.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1718.UniqueString.Data.AllocatorInstance.Data);
  }
  DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)0x0,0);
LAB_14c0452aa:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetViewModelInputKey @ 14c045910

void __thiscall
UDS_VM_WorldMap_IconToolTip::SetViewModelInputKey
          (UDS_VM_WorldMap_IconToolTip *this,TObjectPtr<UDS_VM_InputKey> param_1,
          EDS_KeyActionType param_2)

{
  UDS_ViewModelBase *this_00;
  code *pcVar1;
  FDS_ViewModelContext_InputKey *pFVar2;
  bool bVar3;
  TSharedPtr<FDS_ViewModelContext_InputKey,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if (*(longlong *)param_1.field0_0x0 != 0) {
    MakeContext<FDS_ViewModelContext_InputKey>(&local_28);
    pFVar2 = local_28.Object;
    if (local_28.Object == (FDS_ViewModelContext_InputKey *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(undefined4 *)&pFVar2->_padding_ = 0x15d;
    pFVar2->KeyActionType = param_2;
    this_00 = *(UDS_ViewModelBase **)param_1.field0_0x0;
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
    UDS_ViewModelBase::SetContext(this_00,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return;
}

// SetWorldBossDateText @ 14c046350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_WorldMap_IconToolTip::SetWorldBossDateText(UDS_VM_WorldMap_IconToolTip *this)

{
  undefined1 *puVar1;
  FDS_EventDelegate<__int64_const_> *this_00;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  UDS_WorldBossManager *this_01;
  UDS_LogManager *pUVar9;
  FDS_WorldBossStateInfo *pFVar10;
  FDateTime FVar11;
  UDS_WorldMapEvent *pUVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 auStackY_2e8 [32];
  FTimespan local_2b8 [2];
  FName local_2a8;
  int local_2a0;
  FDestructionSentinel local_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  if (0 < this->WorldBossID) {
    this_01 = UDS_WorldBossManager::GetInst();
    if (this_01 == (UDS_WorldBossManager *)0x0) {
      pUVar9 = UDS_LogManager::GetInst();
      if (pUVar9 != (UDS_LogManager *)0x0) {
        pUVar9 = UDS_LogManager::GetInst();
        local_278._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_278,"UDS_VM_WorldMap_IconToolTip::SetWorldBossDateText",0x31,Yes);
        UDS_LogManager::PrintLog(pUVar9,1,Warning,local_278.Ptr,0x1c8,L"worldBossMng is nullptr.");
        if ((void *)local_278._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_278._padding_);
        }
      }
    }
    else {
      pFVar10 = UDS_WorldBossManager::GetWorldBossStateInfo(this_01,(int)this->WorldBossID);
      if (pFVar10->BossID < 1) {
        pUVar9 = UDS_LogManager::GetInst();
        if (pUVar9 != (UDS_LogManager *)0x0) {
          pUVar9 = UDS_LogManager::GetInst();
          local_158._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,"UDS_VM_WorldMap_IconToolTip::SetWorldBossDateText",0x31,Yes);
          UDS_LogManager::PrintLog
                    (pUVar9,1,Warning,local_158.Ptr,0x1cf,L"worldBossStateInfo is not vaild.");
          if ((void *)local_158._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_158._padding_);
          }
        }
      }
      else {
        FVar11 = UDS_TimeUtilManager::GetCurrentServerDateTime();
        local_2b8[0].Ticks = (pFVar10->NextEventTime).Ticks - *(longlong *)FVar11.Ticks;
        FDS_Text::SetTextFromTimespan(&this->FDateText,local_2b8,DayHourSec,false);
        if (((double)local_2b8[0].Ticks * __real_3e7ad7f29abcaf48 <= 0.0) &&
           (pUVar12 = UDS_WorldMapEvent::GetEvent(), pUVar12 != (UDS_WorldMapEvent *)0x0)) {
          this_00 = &pUVar12->DeleteWorldBossIconDelegate;
          bVar5 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
          if (bVar5) {
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                       (FWriteAccessScope *)&local_298);
            puVar1 = &(pUVar12->DeleteWorldBossIconDelegate).Delegate.field_0x1c;
            *(int *)puVar1 = *(int *)puVar1 + 1;
            bVar5 = false;
            uVar13 = *(int *)&(pUVar12->DeleteWorldBossIconDelegate).Delegate.field_0x10 - 1;
            if (-1 < (int)uVar13) {
              lVar14 = (longlong)(int)uVar13 << 4;
              bVar5 = false;
              do {
                uVar8 = 0;
                if ((int)uVar13 <
                    *(int *)&(pUVar12->DeleteWorldBossIconDelegate).Delegate.field_0x10) {
                  uVar8 = ~uVar13 >> 0x1f;
                }
                if ((uVar8 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                lVar2 = *(longlong *)&(pUVar12->DeleteWorldBossIconDelegate).Delegate.field_0x8;
                if (((*(int *)(lVar14 + 8 + lVar2) == 0) ||
                    (plVar3 = *(longlong **)(lVar14 + lVar2), plVar3 == (longlong *)0x0)) ||
                   (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
                  bVar5 = true;
                }
                lVar14 = lVar14 + -0x10;
                uVar13 = uVar13 - 1;
              } while (-1 < (int)uVar13);
            }
            puVar1 = &(pUVar12->DeleteWorldBossIconDelegate).Delegate.field_0x1c;
            *(int *)puVar1 = *(int *)puVar1 + -1;
            if (bVar5) {
              TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
            }
            if (local_298.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_298.Accessor,&local_298);
            }
          }
        }
        local_2a0 = FFieldNotificationClassDescriptor::FDateText.BitNumber;
        local_2a8 = FFieldNotificationClassDescriptor::FDateText.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_2a8);
      }
    }
  }
  return;
}

// UnbindModel @ 14c049630

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_WorldMap_IconToolTip::UnbindModel(UDS_VM_WorldMap_IconToolTip *this)

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

